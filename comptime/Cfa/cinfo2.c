/*===========================================================================*/
/*   (Cfa/cinfo2.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cfa/cinfo2.scm) */
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

	typedef struct BgL_prezd2arithmeticzd2appz00_bgl
	{
		obj_t BgL_speczd2typeszd2;
	}                                *BgL_prezd2arithmeticzd2appz00_bglt;

	typedef struct BgL_arithmeticzd2appzd2_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		obj_t BgL_speczd2typeszd2;
	}                          *BgL_arithmeticzd2appzd2_bglt;

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

	typedef struct BgL_prezd2makezd2structzd2appzd2_bgl
	{
		struct BgL_variablez00_bgl *BgL_ownerz00;
	}                                   *BgL_prezd2makezd2structzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2refzd2appzd2_bgl
	{
	}                                  *BgL_prezd2structzd2refzd2appzd2_bglt;

	typedef struct BgL_prezd2structzd2setz12zd2appzc0_bgl
	{
	}                                    
		*BgL_prezd2structzd2setz12zd2appzc0_bglt;

	typedef struct BgL_makezd2structzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
		struct BgL_approxz00_bgl *BgL_valuezd2approxzd2;
		long BgL_lostzd2stampzd2;
		struct BgL_variablez00_bgl *BgL_ownerz00;
		obj_t BgL_stackzd2stampzd2;
	}                             *BgL_makezd2structzd2appz00_bglt;

	typedef struct BgL_structzd2refzd2appz00_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                            *BgL_structzd2refzd2appz00_bglt;

	typedef struct BgL_structzd2setz12zd2appz12_bgl
	{
		struct BgL_approxz00_bgl *BgL_approxz00;
	}                               *BgL_structzd2setz12zd2appz12_bglt;


	static obj_t BGl_z62makezd2procedurezd2appzd2argszb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_variablez00_bglt
		BGl_z62prezd2conszd2appzd2ownerzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62prezd2conszd2setz12zd2appzf3z51zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32485ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62structzd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62structzd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62conszd2appzd2nilz62zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2vapproxzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_makezd2structzd2appz00zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_prezd2makezd2vectorzd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_conszd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	extern obj_t BGl_approxz00zzcfa_infoz00;
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2loczb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2conszd2setz12zd2appzc0zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00
		(BgL_appz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62arithmeticzd2appzd2approxz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62structzd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2procedurezd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	static BgL_approxz00_bglt
		BGl_z62makezd2structzd2appzd2valuezd2approxz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32014ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_procedurezd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62structzd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2makezd2vectorzd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2structzd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2structzd2refzd2appz62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62conszd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_makezd2procedurezd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_prezd2makezd2structzd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_varz00_bglt
		BGl_z62prezd2makezd2structzd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda1986z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda1989z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2loczb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2seenzf3z91zzcfa_info2z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z33zzcfa_info2z00
		(BgL_appz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2sidezd2effectzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62structzd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzcfa_info2z00();
	static BgL_appz00_bglt BGl_z62lambda1992z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t, bool_t);
	static obj_t BGl_z62zc3z04anonymousza32597ze3ze5zzcfa_info2z00(obj_t);
	static obj_t BGl_z62conszd2appzf3z43zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_conszd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	static obj_t BGl_z62arithmeticzd2appzd2locz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62procedurezd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62procedurezd2refzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62makezd2conszd2appz62zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62procedurezd2setz12zd2appzf3z83zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2makezd2structzd2appzd2nilz62zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62makezd2structzd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32125ze3ze5zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_conszd2appzf3z21zzcfa_info2z00(obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2makezd2procedurezd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzcfa_info2z00();
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2approxesz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_structzd2setz12zd2appz12zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2conszd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2vectorzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2speczd2typeszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2structzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	static BgL_varz00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2refzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62structzd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2procedurezd2setz12zd2appz70zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static obj_t
		BGl_z62makezd2vectorzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2refzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl_z62structzd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_conszd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_typez00_bglt
		BGl_z62conszd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t, obj_t);
	static BgL_varz00_bglt
		BGl_z62procedurezd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_arithmeticzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62makezd2structzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62makezd2conszd2refzd2appzb0zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_conszd2setz12zd2appzd2nilzc0zzcfa_info2z00();
	static BgL_appz00_bglt
		BGl_z62procedurezd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32238ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2vectorzd2appzd2seenzf3z21zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2vectorzd2appzd2valuezd2approxz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00();
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt);
	static BgL_variablez00_bglt BGl_z62lambda2301z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2302z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2arithmeticzd2appzd2keyzb0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2310z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2313z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2316z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2structzd2refzd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32273ze3ze5zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2324z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2Tzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2325z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62conszd2appzd2typez62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62prezd2conszd2refzd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62conszd2appzd2keyz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_variablez00_bglt BGl_z62conszd2appzd2ownerz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzf3z83zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62structzd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_varz00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2333z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2336z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2339z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_conszd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_typez00_bglt
		BGl_z62procedurezd2refzd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2refzd2appzd2argsz62zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_varz00_bglt
		BGl_z62makezd2vectorzd2appzd2funzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2procedurezd2refzd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2347z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2procedurezd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62lambda2348z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32454ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00 =
		BUNSPEC;
	static BgL_appz00_bglt BGl_z62lambda2355z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2358z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_procedurezd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2makezd2structzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62conszd2appzd2lostzd2stampzb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2361z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2368z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32383ze3ze5zzcfa_info2z00(obj_t);
	static obj_t BGl_z62lambda2369z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2argszb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62procedurezd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_conszd2setz12zd2appz12zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	static BgL_approxz00_bglt
		BGl_z62conszd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	extern obj_t BGl_variablez00zzast_varz00;
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_makezd2procedurezd2appz00zzcfa_info2z00 = BUNSPEC;
	static BgL_appz00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2conszd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62lambda2373z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2374z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62conszd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2argsz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2vectorzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	static obj_t BGl_z62lambda2381z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2382z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_variablez00_bglt BGl_z62lambda2389z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2structzd2appzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2lostzd2stampzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		long);
	static BgL_typez00_bglt
		BGl_z62makezd2vectorzd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2390z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2396z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl_z62lambda2397z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62structzd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32638ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2vectorzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_procedurezd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2conszd2setz12zd2appzd2nilz12zzcfa_info2z00();
	static obj_t BGl_z62prezd2makezd2structzd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_makezd2vectorzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2getzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	static BgL_typez00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_makezd2vectorzd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62structzd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2vectorzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62arithmeticzd2appzd2argsz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static BgL_variablez00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2ownerz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_conszd2appzd2lostzd2stampzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2structzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_conszd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_conszd2appzd2zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62prezd2conszd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62procedurezd2refzd2appzd2loczb0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2valueszd2approxz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_makezd2vectorzd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2conszd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2conszd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62structzd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, long);
	BGL_EXPORTED_DECL bool_t BGl_makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_z62prezd2structzd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_conszd2refzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00
		(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_structzd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2arithmeticzd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_makezd2vectorzd2appz00zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62procedurezd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_makezd2structzd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32132ze3ze5zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2Xzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2vectorzd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static BgL_varz00_bglt
		BGl_z62prezd2structzd2refzd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2conszd2setz12zd2appz12zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2stackzd2stampz00zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2procedurezd2refzd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2speczd2typesz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2getz12zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static obj_t BGl_z62prezd2makezd2vectorzd2appzd2argsz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2000z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2001z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2009z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32315ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_conszd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2arithmeticzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2012z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2015z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2structzd2refzd2appzd2nilz62zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32170ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2makezd2procedurezd2appz62zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2arithmeticzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2023z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2024z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32422ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2makezd2structzd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2structzd2refzd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32139ze3ze5zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2030z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2031z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2stackzd2stampz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2039z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2sidezd2effectz00zzcfa_info2z00
		(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2042z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2vectorzd2appzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2keyzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2045z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt BGl_conszd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2procedurezd2appzd2Xzd2Tzf3zf3zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcfa_infoz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
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
	static obj_t
		BGl_z62makezd2vectorzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_variablez00_bglt BGl_z62lambda2052z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2lostzd2stampzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2053z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32069ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t);
	static BgL_appz00_bglt BGl_z62lambda2062z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2066z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z51zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2conszd2refzd2appzf3z21zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static BgL_varz00_bglt
		BGl_z62makezd2procedurezd2appzd2funzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2structzd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2070z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2conszd2setz12zd2appza2zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32281ze3ze5zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_structzd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2082z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2406z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2407z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcfa_info2z00();
	static BgL_appz00_bglt BGl_z62lambda2085z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2approxzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, BgL_approxz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32533ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2088z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2416z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2098z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2420z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2423z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2arithmeticzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl_z62structzd2refzd2appzd2loczb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2speczd2typesz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t);
	static BgL_varz00_bglt
		BGl_z62makezd2structzd2appzd2funzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00();
	static BgL_appz00_bglt
		BGl_z62makezd2procedurezd2appzd2nilzb0zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2conszd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, obj_t, BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2431z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2432z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2438z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2439z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2Tzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		bool_t);
	static obj_t
		BGl_z62structzd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2449z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_varz00_bglt
		BGl_z62conszd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t);
	static BgL_appz00_bglt BGl_z62lambda2452z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2455z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2approxzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_approxz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2463z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2464z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2conszd2refzd2appz62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2structzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62structzd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62lambda2470z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2471z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2procedurezd2refzd2appz62zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_varz00_bglt BGl_z62prezd2conszd2appzd2funzb0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_varz00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2procedurezd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2480z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2483z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62conszd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t);
	static BgL_appz00_bglt BGl_z62lambda2486z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_arithmeticzd2appzd2approxz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2conszd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_structzd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_typez00_bglt
		BGl_z62prezd2arithmeticzd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static BgL_varz00_bglt
		BGl_z62structzd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2procedurezd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_variablez00_bglt BGl_z62lambda2498z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2499z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static obj_t BGl_z62prezd2arithmeticzd2appzd2loczb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_varz00_bglt BGl_z62conszd2refzd2appzd2funzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_structzd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_makezd2structzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2vapproxzd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2procedurezd2refzd2appzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62conszd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62prezd2conszd2appzd2nilzb0zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62makezd2vectorzd2appzd2valuezd2approxz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_varz00_bglt BGl_z62arithmeticzd2appzd2funz62zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2nilz62zzcfa_info2z00(obj_t);
	static obj_t BGl_z62structzd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32398ze3ze5zzcfa_info2z00(obj_t);
	static obj_t BGl_z62conszd2appzd2locz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3z91zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62conszd2appzd2stackzd2stampzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_z62structzd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	static obj_t BGl_z62prezd2arithmeticzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static BgL_typez00_bglt BGl_z62conszd2refzd2appzd2typezb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62conszd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_procedurezd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2makezd2procedurezd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl_z62prezd2structzd2refzd2appzd2argsz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_structzd2refzd2appz00zzcfa_info2z00 = BUNSPEC;
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32104ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62arithmeticzd2appzd2nilz62zzcfa_info2z00(obj_t);
	static obj_t BGl_z62prezd2structzd2refzd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62prezd2structzd2refzd2appzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2structzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2argsz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2makezd2structzd2appz62zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62arithmeticzd2appzf3z43zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2sidezd2effectz00zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_structzd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62procedurezd2refzd2appzd2argszb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2conszd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_procedurezd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_typez00_bglt
		BGl_z62structzd2refzd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31991ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62structzd2refzd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2procedurezd2appzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, long);
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2structzd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62arithmeticzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62conszd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62procedurezd2setz12zd2appzd2vapproxza2zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2getza2zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2argszb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2valueszd2approxzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_prezd2conszd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2conszd2setz12zd2appzf3z33zzcfa_info2z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32217ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_procedurezd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2Xzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl_z62makezd2procedurezd2appzd2keyzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32146ze3ze5zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62conszd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62makezd2structzd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62makezd2procedurezd2appzd2typezb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2procedurezd2refzd2appzd2argsz62zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2102z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2105z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_structzd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62arithmeticzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2structzd2setz12zd2appz70zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_varz00_bglt
		BGl_z62prezd2conszd2refzd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2112z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2113z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2117z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2118z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2structzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2structzd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2getzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2123z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2124z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, long);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2conszd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_varz00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2structzd2appzd2keyzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2130z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2131z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62makezd2arithmeticzd2appz62zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2137z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2138z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32360ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62structzd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62conszd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62procedurezd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2144z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2145z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32612ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62structzd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2conszd2refzd2appzd2nilz62zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2makezd2vectorzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_variablez00_bglt BGl_z62lambda2150z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2151z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2seenzf3zd2setz12z83zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2156z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2157z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2procedurezd2setz12zd2appzf3z51zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_makezd2structzd2appzd2valuezd2approxz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62conszd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static BgL_approxz00_bglt
		BGl_z62makezd2vectorzd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzcfa_info2z00();
	static BgL_appz00_bglt BGl_z62lambda2165z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2168z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2conszd2refzd2appzd2nilz00zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2nilz62zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2conszd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2171z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2seenzf3z43zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_z62prezd2conszd2appzd2keyzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t,
		BgL_variablez00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2178z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2179z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2procedurezd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static BgL_typez00_bglt
		BGl_z62procedurezd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2507z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2186z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2189z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00();
	static obj_t BGl_z62conszd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2513z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62structzd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62conszd2appzd2approxz62zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2192z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2517z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32293ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2199z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62structzd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_conszd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62procedurezd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2528z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_makezd2procedurezd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2conszd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2531z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2534z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2makezd2procedurezd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62arithmeticzd2appzd2keyz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_conszd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2549z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t, obj_t);
	static BgL_variablez00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2ownerz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2554z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2makezd2structzd2appzb0zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2558z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2valueszd2approxz00zzcfa_info2z00
		(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_conszd2refzd2appzd2nilzd2zzcfa_info2z00();
	static obj_t BGl_z62makezd2vectorzd2appzd2loczb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_varz00_bglt
		BGl_z62procedurezd2refzd2appzd2funzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2568z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2569z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62conszd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2approxesz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt,
		BgL_approxz00_bglt, long, BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00();
	static BgL_varz00_bglt
		BGl_z62prezd2conszd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_approxz00_bglt BGl_z62lambda2574z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2575z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2structzd2appzd2argsz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t
		BGl_z62prezd2conszd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2581z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2582z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32583ze3ze5zzcfa_info2z00(obj_t);
	static BgL_variablez00_bglt BGl_z62lambda2587z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2588z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2conszd2refzd2appzf3z43zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2structzd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2structzd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2595z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcfa_info2z00 = BUNSPEC;
	static obj_t BGl_z62lambda2596z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_variablez00_bglt
		BGl_z62prezd2makezd2structzd2appzd2ownerz62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62procedurezd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2stackzd2stampz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	static obj_t BGl_z62prezd2conszd2refzd2appzd2getz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static BgL_appz00_bglt
		BGl_z62prezd2conszd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2conszd2refzd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2getz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62arithmeticzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static BgL_varz00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00();
	static BgL_appz00_bglt BGl_z62makezd2prezd2conszd2appzb0zzcfa_info2z00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62structzd2setz12zd2appzf3z83zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_genericzd2initzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62conszd2appzd2stackzd2stampzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62makezd2vectorzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_arithmeticzd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_arithmeticzd2appzf3z21zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2stackzd2stampzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DEF obj_t BGl_arithmeticzd2appzd2zzcfa_info2z00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2makezd2vectorzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2stackzd2stampzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62arithmeticzd2appzd2speczd2typeszb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2structzd2setz12zd2appza2zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static BgL_appz00_bglt
		BGl_z62makezd2procedurezd2setz12zd2appza2zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_variablez00_bglt
		BGl_z62makezd2vectorzd2appzd2ownerzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62arithmeticzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2conszd2refzd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2nilz62zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2vapproxzc0zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62arithmeticzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_makezd2procedurezd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2conszd2refzd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	static BgL_typez00_bglt BGl_z62prezd2conszd2appzd2typezb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_conszd2appzd2seenzf3zf3zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62conszd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2getzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2structzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2structzd2appzd2approxzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_approxz00_bglt);
	static BgL_approxz00_bglt
		BGl_z62makezd2structzd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_varz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62prezd2procedurezd2refzd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62conszd2appzd2seenzf3zd2setz12z51zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_variablez00_bglt
		BGl_z62makezd2structzd2appzd2ownerzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t
		BGl_z62prezd2arithmeticzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2sidezd2effectzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2makezd2vectorzd2appz62zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2structzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62prezd2arithmeticzd2appzd2argszb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00();
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2structzd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2procedurezd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00 =
		BUNSPEC;
	static obj_t BGl_z62conszd2appzd2approxzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32260ze3ze5zzcfa_info2z00(obj_t);
	static obj_t
		BGl_z62makezd2structzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2valueszd2approxzd2setz12za2zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2setz12zd2appzd2getz70zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62prezd2structzd2refzd2appzd2locz62zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_variablez00_bglt
		BGl_z62makezd2procedurezd2appzd2ownerzb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2vectorzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2conszd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62lambda2200z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2approxzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt,
		BgL_approxz00_bglt);
	static obj_t BGl_z62lambda2204z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2205z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62arithmeticzd2appzd2typez62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32408ze3ze5zzcfa_info2z00(obj_t);
	extern obj_t BGl_appz00zzast_nodez00;
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_varz00_bglt BGl_z62structzd2refzd2appzd2funzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2vectorzd2appzd2seenzf3zd2setz12ze1zzcfa_info2z00(BgL_appz00_bglt,
		bool_t);
	static BgL_appz00_bglt BGl_z62lambda2212z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2215z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2argszb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2218z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32158ze3ze5zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_prezd2makezd2procedurezd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2vectorzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt, BgL_varz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_structzd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2conszd2appz00zzcfa_info2z00(obj_t, BgL_typez00_bglt, obj_t,
		obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t, long,
		BgL_variablez00_bglt, obj_t, bool_t);
	static BgL_variablez00_bglt BGl_z62lambda2225z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2226z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32191ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_conszd2appzd2seenzf3zd2setz12z33zzcfa_info2z00(BgL_appz00_bglt, bool_t);
	static BgL_approxz00_bglt
		BGl_z62makezd2procedurezd2appzd2approxzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t,
		BgL_typez00_bglt, obj_t, obj_t, BgL_varz00_bglt, obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2233z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2236z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2makezd2structzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzcfa_info2z00();
	static BgL_appz00_bglt BGl_z62lambda2239z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32516ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32338ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32087ze3ze5zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2makezd2procedurezd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2arithmeticzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info2z00();
	static BgL_appz00_bglt
		BGl_z62makezd2prezd2conszd2setz12zd2appz70zzcfa_info2z00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2structzd2setz12zd2appzf3z51zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2246z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2247z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2procedurezd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62structzd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	static obj_t BGl_z62prezd2conszd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62arithmeticzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2251z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2252z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_prezd2conszd2appzf3zf3zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62lambda2258z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2259z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt,
		obj_t);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62structzd2refzd2appzd2argszb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62procedurezd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_conszd2refzd2appzf3zf3zzcfa_info2z00(obj_t);
	static obj_t BGl_z62makezd2procedurezd2appzd2Tzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2prezd2conszd2refzd2appz00zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, obj_t);
	static BgL_variablez00_bglt BGl_z62lambda2264z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2265z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62makezd2procedurezd2appzd2Xzb0zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_procedurezd2setz12zd2appz12zzcfa_info2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt, BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_approxz00_bglt
		BGl_conszd2appzd2approxz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00();
	static obj_t BGl_z62lambda2271z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2272z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2279z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62conszd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2procedurezd2appzd2Tzd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_arithmeticzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_makezd2procedurezd2appzd2Xzd2zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62lambda2280z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00();
	static BgL_varz00_bglt
		BGl_z62prezd2arithmeticzd2appzd2funzb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2606z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2609z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t, BgL_typez00_bglt,
		obj_t, obj_t, BgL_varz00_bglt, obj_t, BgL_approxz00_bglt, obj_t, long,
		bool_t, bool_t, bool_t, BgL_variablez00_bglt, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2288z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62makezd2procedurezd2appzd2loczb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62structzd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_approxz00_bglt
		BGl_z62procedurezd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2structzd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2613z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2291z62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_prezd2conszd2appz00zzcfa_info2z00 = BUNSPEC;
	static BgL_appz00_bglt BGl_z62lambda2294z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_varz00_bglt
		BGl_prezd2structzd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62makezd2procedurezd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t BGl_z62makezd2procedurezd2appzf3z91zzcfa_info2z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2622z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2623z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_variablez00_bglt
		BGl_conszd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_conszd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t);
	static BgL_varz00_bglt BGl_z62conszd2appzd2funz62zzcfa_info2z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_procedurezd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_prezd2conszd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt);
	static BgL_appz00_bglt BGl_z62lambda2632z62zzcfa_info2z00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62prezd2conszd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62procedurezd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t,
		obj_t);
	static BgL_appz00_bglt BGl_z62lambda2636z62zzcfa_info2z00(obj_t, obj_t);
	static BgL_appz00_bglt BGl_z62lambda2639z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2conszd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2typez62zzcfa_info2z00(obj_t, obj_t);
	static obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t,
		obj_t, obj_t);
	static BgL_appz00_bglt
		BGl_z62prezd2arithmeticzd2appzd2nilzb0zzcfa_info2z00(obj_t);
	static obj_t BGl_z62makezd2structzd2appzd2loczb0zzcfa_info2z00(obj_t, obj_t);
	static BgL_approxz00_bglt BGl_z62lambda2647z62zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62lambda2648z62zzcfa_info2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32557ze3ze5zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62conszd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62makezd2structzd2appzd2argszb0zzcfa_info2z00(obj_t, obj_t);
	static obj_t BGl_z62prezd2makezd2vectorzd2appzd2keyz62zzcfa_info2z00(obj_t,
		obj_t);
	static obj_t BGl_z62conszd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL long
		BGl_makezd2structzd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt);
	static obj_t __cnst[44];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3174z00,
		BGl_z62makezd2structzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2ownerzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23175za7,
		BGl_z62prezd2makezd2vectorzd2appzd2ownerz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2funzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3176z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2funz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2typezd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3177z00,
		BGl_z62procedurezd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3178z00,
		BGl_z62procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23179z00,
		BGl_z62arithmeticzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23180za7,
		BGl_z62conszd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3181z00,
		BGl_z62prezd2procedurezd2refzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3100z00zzcfa_info2z00,
		BgL_bgl_za762lambda2397za7623182z00, BGl_z62lambda2397z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3101z00zzcfa_info2z00,
		BgL_bgl_za762lambda2396za7623183z00, BGl_z62lambda2396z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3102z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3184za7,
		BGl_z62zc3z04anonymousza32408ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3103z00zzcfa_info2z00,
		BgL_bgl_za762lambda2407za7623185z00, BGl_z62lambda2407z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3104z00zzcfa_info2z00,
		BgL_bgl_za762lambda2406za7623186z00, BGl_z62lambda2406z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3105z00zzcfa_info2z00,
		BgL_bgl_za762lambda2361za7623187z00, BGl_z62lambda2361z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3106z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3188za7,
		BGl_z62zc3z04anonymousza32360ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3107z00zzcfa_info2z00,
		BgL_bgl_za762lambda2358za7623189z00, BGl_z62lambda2358z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3108z00zzcfa_info2z00,
		BgL_bgl_za762lambda2355za7623190z00, BGl_z62lambda2355z62zzcfa_info2z00, 0L,
		BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3109z00zzcfa_info2z00,
		BgL_bgl_za762lambda2432za7623191z00, BGl_z62lambda2432z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2argszd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3192z00,
		BGl_z62procedurezd2setz12zd2appzd2argsza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3110z00zzcfa_info2z00,
		BgL_bgl_za762lambda2431za7623193z00, BGl_z62lambda2431z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23194za7,
		BGl_z62prezd2makezd2vectorzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3111z00zzcfa_info2z00,
		BgL_bgl_za762lambda2439za7623195z00, BGl_z62lambda2439z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3112z00zzcfa_info2z00,
		BgL_bgl_za762lambda2438za7623196z00, BGl_z62lambda2438z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3113z00zzcfa_info2z00,
		BgL_bgl_za762lambda2423za7623197z00, BGl_z62lambda2423z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3114z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3198za7,
		BGl_z62zc3z04anonymousza32422ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3115z00zzcfa_info2z00,
		BgL_bgl_za762lambda2420za7623199z00, BGl_z62lambda2420z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3116z00zzcfa_info2z00,
		BgL_bgl_za762lambda2416za7623200z00, BGl_z62lambda2416z62zzcfa_info2z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3117z00zzcfa_info2z00,
		BgL_bgl_za762lambda2464za7623201z00, BGl_z62lambda2464z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3118z00zzcfa_info2z00,
		BgL_bgl_za762lambda2463za7623202z00, BGl_z62lambda2463z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3119z00zzcfa_info2z00,
		BgL_bgl_za762lambda2471za7623203z00, BGl_z62lambda2471z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2structzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23204za7,
		BGl_z62makezd2prezd2makezd2structzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23205za7,
		BGl_z62conszd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3120z00zzcfa_info2z00,
		BgL_bgl_za762lambda2470za7623206z00, BGl_z62lambda2470z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123207za7,
		BGl_z62conszd2setz12zd2appzf3z83zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3121z00zzcfa_info2z00,
		BgL_bgl_za762lambda2455za7623208z00, BGl_z62lambda2455z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3122z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3209za7,
		BGl_z62zc3z04anonymousza32454ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3123z00zzcfa_info2z00,
		BgL_bgl_za762lambda2452za7623210z00, BGl_z62lambda2452z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3124z00zzcfa_info2z00,
		BgL_bgl_za762lambda2449za7623211z00, BGl_z62lambda2449z62zzcfa_info2z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3125z00zzcfa_info2z00,
		BgL_bgl_za762lambda2499za7623212z00, BGl_z62lambda2499z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3126z00zzcfa_info2z00,
		BgL_bgl_za762lambda2498za7623213z00, BGl_z62lambda2498z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3214z00,
		BGl_z62makezd2procedurezd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3127z00zzcfa_info2z00,
		BgL_bgl_za762lambda2486za7623215z00, BGl_z62lambda2486z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3128z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3216za7,
		BGl_z62zc3z04anonymousza32485ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3129z00zzcfa_info2z00,
		BgL_bgl_za762lambda2483za7623217z00, BGl_z62lambda2483z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2structzd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23218za7,
		BGl_z62makezd2prezd2structzd2refzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23219za7,
		BGl_z62prezd2makezd2procedurezd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3130z00zzcfa_info2z00,
		BgL_bgl_za762lambda2480za7623220z00, BGl_z62lambda2480z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3131z00zzcfa_info2z00,
		BgL_bgl_za762lambda2517za7623221z00, BGl_z62lambda2517z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3132z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3222za7,
		BGl_z62zc3z04anonymousza32516ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3133z00zzcfa_info2z00,
		BgL_bgl_za762lambda2513za7623223z00, BGl_z62lambda2513z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3134z00zzcfa_info2z00,
		BgL_bgl_za762lambda2507za7623224z00, BGl_z62lambda2507z62zzcfa_info2z00, 0L,
		BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3135z00zzcfa_info2z00,
		BgL_bgl_za762lambda2534za7623225z00, BGl_z62lambda2534z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3136z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3226za7,
		BGl_z62zc3z04anonymousza32533ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3137z00zzcfa_info2z00,
		BgL_bgl_za762lambda2531za7623227z00, BGl_z62lambda2531z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3138z00zzcfa_info2z00,
		BgL_bgl_za762lambda2528za7623228z00, BGl_z62lambda2528z62zzcfa_info2z00, 0L,
		BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3139z00zzcfa_info2z00,
		BgL_bgl_za762lambda2569za7623229z00, BGl_z62lambda2569z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3230z00,
		BGl_z62makezd2vectorzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73231za7,
		BGl_z62structzd2refzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23232za7,
		BGl_z62prezd2conszd2refzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3233z00,
		BGl_z62procedurezd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3140z00zzcfa_info2z00,
		BgL_bgl_za762lambda2568za7623234z00, BGl_z62lambda2568z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3141z00zzcfa_info2z00,
		BgL_bgl_za762lambda2575za7623235z00, BGl_z62lambda2575z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3142z00zzcfa_info2z00,
		BgL_bgl_za762lambda2574za7623236z00, BGl_z62lambda2574z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3143z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3237za7,
		BGl_z62zc3z04anonymousza32583ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3144z00zzcfa_info2z00,
		BgL_bgl_za762lambda2582za7623238z00, BGl_z62lambda2582z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3145z00zzcfa_info2z00,
		BgL_bgl_za762lambda2581za7623239z00, BGl_z62lambda2581z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3146z00zzcfa_info2z00,
		BgL_bgl_za762lambda2588za7623240z00, BGl_z62lambda2588z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3147z00zzcfa_info2z00,
		BgL_bgl_za762lambda2587za7623241z00, BGl_z62lambda2587z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3148z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3242za7,
		BGl_z62zc3z04anonymousza32597ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3149z00zzcfa_info2z00,
		BgL_bgl_za762lambda2596za7623243z00, BGl_z62lambda2596z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3244z00,
		BGl_z62makezd2structzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23245za7,
		BGl_z62prezd2makezd2vectorzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3150z00zzcfa_info2z00,
		BgL_bgl_za762lambda2595za7623246z00, BGl_z62lambda2595z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3151z00zzcfa_info2z00,
		BgL_bgl_za762lambda2558za7623247z00, BGl_z62lambda2558z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3152z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3248za7,
		BGl_z62zc3z04anonymousza32557ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3153z00zzcfa_info2z00,
		BgL_bgl_za762lambda2554za7623249z00, BGl_z62lambda2554z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3154z00zzcfa_info2z00,
		BgL_bgl_za762lambda2549za7623250z00, BGl_z62lambda2549z62zzcfa_info2z00, 0L,
		BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3155z00zzcfa_info2z00,
		BgL_bgl_za762lambda2623za7623251z00, BGl_z62lambda2623z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3156z00zzcfa_info2z00,
		BgL_bgl_za762lambda2622za7623252z00, BGl_z62lambda2622z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3157z00zzcfa_info2z00,
		BgL_bgl_za762lambda2613za7623253z00, BGl_z62lambda2613z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3254z00,
		BGl_z62makezd2vectorzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3158z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3255za7,
		BGl_z62zc3z04anonymousza32612ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3159z00zzcfa_info2z00,
		BgL_bgl_za762lambda2609za7623256z00, BGl_z62lambda2609z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23257za7,
		BGl_z62prezd2conszd2refzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3258z00,
		BGl_z62makezd2procedurezd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3160z00zzcfa_info2z00,
		BgL_bgl_za762lambda2606za7623259z00, BGl_z62lambda2606z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3161z00zzcfa_info2z00,
		BgL_bgl_za762lambda2648za7623260z00, BGl_z62lambda2648z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3162z00zzcfa_info2z00,
		BgL_bgl_za762lambda2647za7623261z00, BGl_z62lambda2647z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3163z00zzcfa_info2z00,
		BgL_bgl_za762lambda2639za7623262z00, BGl_z62lambda2639z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3164z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3263za7,
		BGl_z62zc3z04anonymousza32638ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3165z00zzcfa_info2z00,
		BgL_bgl_za762lambda2636za7623264z00, BGl_z62lambda2636z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3166z00zzcfa_info2z00,
		BgL_bgl_za762lambda2632za7623265z00, BGl_z62lambda2632z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3266z00,
		BGl_z62prezd2procedurezd2refzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3267z00,
		BGl_z62makezd2procedurezd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3268z00,
		BGl_z62makezd2structzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23269za7,
		BGl_z62prezd2conszd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2structzd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23270za7,
		BGl_z62makezd2prezd2structzd2setz12zd2appz70zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23271za7,
		BGl_z62conszd2refzd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3272z00,
		BGl_z62makezd2vectorzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2argszd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73273za7,
		BGl_z62prezd2structzd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23274za7,
		BGl_z62conszd2appzd2typezd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2loczd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123275za7,
		BGl_z62conszd2setz12zd2appzd2locza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2loczd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73276za7,
		BGl_z62structzd2setz12zd2appzd2locza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23277za7,
		BGl_z62conszd2refzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3278z00,
		BGl_z62prezd2arithmeticzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23279za7,
		BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2stackzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3280z00,
		BGl_z62makezd2structzd2appzd2stackzd2stampz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Tzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3281z00,
		BGl_z62makezd2procedurezd2appzd2Tzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2argszd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73282za7,
		BGl_z62structzd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23283za7,
		BGl_z62prezd2makezd2structzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2procedurezd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2makeza7d3284za7,
		BGl_z62makezd2makezd2procedurezd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23285za7,
		BGl_z62prezd2makezd2structzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2lostzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3286z00,
		BGl_z62makezd2structzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2funzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23287za7,
		BGl_z62prezd2conszd2setz12zd2appzd2funz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23288za7,
		BGl_z62prezd2makezd2vectorzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23289za7,
		BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2loczd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73290za7,
		BGl_z62prezd2structzd2setz12zd2appzd2locz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23291z00,
		BGl_z62arithmeticzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3292z00,
		BGl_z62makezd2structzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2stackzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3293z00,
		BGl_z62makezd2vectorzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2stackzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3294z00,
		BGl_z62makezd2procedurezd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2typezd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23295za7,
		BGl_z62prezd2conszd2setz12zd2appzd2typez70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2stackzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3296z00,
		BGl_z62makezd2vectorzd2appzd2stackzd2stampz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2valueszd2approxzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3297z00,
		BGl_z62makezd2procedurezd2appzd2valueszd2approxz62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3298z00,
		BGl_z62makezd2procedurezd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23299za7,
		BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23300za7,
		BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3301z00,
		BGl_z62makezd2structzd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2keyzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3302z00,
		BGl_z62procedurezd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3303z00,
		BGl_z62prezd2arithmeticzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23304za7,
		BGl_z62prezd2makezd2structzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23305za7,
		BGl_z62prezd2makezd2procedurezd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23306za7,
		BGl_z62conszd2refzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23307za7,
		BGl_z62prezd2conszd2refzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73308za7,
		BGl_z62prezd2structzd2setz12zd2appzf3z51zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3309z00,
		BGl_z62prezd2arithmeticzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2typezd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73310za7,
		BGl_z62prezd2structzd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2sidezd2effectzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123311za7,
		BGl_z62conszd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23312za7,
		BGl_z62prezd2makezd2structzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2loczd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3313z00,
		BGl_z62procedurezd2setz12zd2appzd2locza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2approxzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23314za7,
		BGl_z62conszd2appzd2approxzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23315za7,
		BGl_z62prezd2conszd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23316za7,
		BGl_z62conszd2refzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3317z00,
		BGl_z62prezd2arithmeticzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2approxzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23318z00,
		BGl_z62arithmeticzd2appzd2approxz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2keyzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3319z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2keyz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3320z00,
		BGl_z62procedurezd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2typezd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73321za7,
		BGl_z62structzd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23322za7,
		BGl_z62prezd2makezd2structzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3323z00,
		BGl_z62makezd2structzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3324z00,
		BGl_z62makezd2procedurezd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3325z00,
		BGl_z62prezd2procedurezd2refzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23326za7,
		BGl_z62prezd2makezd2procedurezd2appzd2argszd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123327za7,
		BGl_z62conszd2setz12zd2appzd2nilza2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73328za7,
		BGl_z62structzd2setz12zd2appzd2nilza2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2approxzd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3329z00,
		BGl_z62procedurezd2setz12zd2appzd2approxza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23330za7,
		BGl_z62prezd2makezd2vectorzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3331z00,
		BGl_z62makezd2structzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23332za7,
		BGl_z62conszd2refzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2sidezd2effectzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73333za7,
		BGl_z62structzd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73334za7,
		BGl_z62structzd2refzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2funzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123335za7,
		BGl_z62conszd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23336za7,
		BGl_z62prezd2conszd2refzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2ownerzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3337z00,
		BGl_z62makezd2structzd2appzd2ownerzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23338za7,
		BGl_z62prezd2makezd2structzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3339z00,
		BGl_z62makezd2vectorzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2approxzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3340z00,
		BGl_z62makezd2procedurezd2appzd2approxzd2setz12z70zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_arithmeticzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23341z00,
		BGl_z62arithmeticzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23342z00,
		BGl_z62arithmeticzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73343za7,
		BGl_z62prezd2structzd2setz12zd2appzd2nilz70zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2typezd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123344za7,
		BGl_z62conszd2setz12zd2appzd2typeza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73345za7,
		BGl_z62structzd2refzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23346z00,
		BGl_z62arithmeticzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23347za7,
		BGl_z62conszd2refzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73348za7,
		BGl_z62prezd2structzd2refzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23349za7,
		BGl_z62prezd2conszd2setz12zd2appzf3z51zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2approxzd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73350za7,
		BGl_z62structzd2setz12zd2appzd2approxza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23351z00,
		BGl_z62arithmeticzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23352za7,
		BGl_z62prezd2makezd2vectorzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73353za7,
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3354z00,
		BGl_z62procedurezd2refzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2keyzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23355za7,
		BGl_z62prezd2conszd2setz12zd2appzd2keyz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23356za7,
		BGl_z62conszd2refzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2sidezd2effectzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73357za7,
		BGl_z62structzd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	BGL_IMPORT obj_t BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23358za7,
		BGl_z62prezd2makezd2procedurezd2appzd2typezd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7f33359za7,
		BGl_z62conszd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23360za7,
		BGl_z62prezd2makezd2procedurezd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2nilzd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3361z00,
		BGl_z62procedurezd2setz12zd2appzd2nilza2zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2argszd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3362z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3363z00,
		BGl_z62prezd2procedurezd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2lostzd2stampzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23364za7,
		BGl_z62conszd2appzd2lostzd2stampzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23365za7,
		BGl_z62prezd2conszd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73366za7,
		BGl_z62prezd2structzd2refzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3367z00,
		BGl_z62makezd2structzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3368z00,
		BGl_z62procedurezd2refzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23369za7,
		BGl_z62prezd2makezd2vectorzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Xzd2Tzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3370z00,
		BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2approxzd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123371za7,
		BGl_z62conszd2setz12zd2appzd2approxza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3372z00,
		BGl_z62procedurezd2refzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3373z00,
		BGl_z62makezd2structzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2argszd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23374za7,
		BGl_z62prezd2conszd2setz12zd2appzd2argsz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3375z00,
		BGl_z62makezd2structzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3376z00,
		BGl_z62prezd2arithmeticzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23377z00,
		BGl_z62arithmeticzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Xzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3378z00,
		BGl_z62makezd2procedurezd2appzd2Xzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2funzd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123379za7,
		BGl_z62conszd2setz12zd2appzd2funza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3380z00,
		BGl_z62makezd2procedurezd2refzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2funzd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73381za7,
		BGl_z62structzd2setz12zd2appzd2funza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3382z00,
		BGl_z62makezd2vectorzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2conszd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23383za7,
		BGl_z62makezd2prezd2conszd2setz12zd2appz70zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2getzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23384za7,
		BGl_z62prezd2conszd2refzd2appzd2getz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2lostzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3385z00,
		BGl_z62makezd2vectorzd2appzd2lostzd2stampz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23386za7,
		BGl_z62prezd2makezd2structzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2sidezd2effectzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123387za7,
		BGl_z62conszd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23388za7,
		BGl_z62conszd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2argszd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23389za7,
		BGl_z62prezd2conszd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23390z00,
		BGl_z62arithmeticzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3391z00,
		BGl_z62procedurezd2refzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2typezd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73392za7,
		BGl_z62structzd2setz12zd2appzd2typeza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73393za7,
		BGl_z62prezd2structzd2refzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3394z00,
		BGl_z62makezd2vectorzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3395z00,
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3396z00,
		BGl_z62makezd2vectorzd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2funzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73397za7,
		BGl_z62prezd2structzd2setz12zd2appzd2funz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3398z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2980z00zzcfa_info2z00,
		BgL_bgl_za762lambda2001za7623399z00, BGl_z62lambda2001z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2981z00zzcfa_info2z00,
		BgL_bgl_za762lambda2000za7623400z00, BGl_z62lambda2000z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2982z00zzcfa_info2z00,
		BgL_bgl_za762lambda1992za7623401z00, BGl_z62lambda1992z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2983z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3402za7,
		BGl_z62zc3z04anonymousza31991ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23403za7,
		BGl_z62prezd2conszd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2984z00zzcfa_info2z00,
		BgL_bgl_za762lambda1989za7623404z00, BGl_z62lambda1989z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2985z00zzcfa_info2z00,
		BgL_bgl_za762lambda1986za7623405z00, BGl_z62lambda1986z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2986z00zzcfa_info2z00,
		BgL_bgl_za762lambda2024za7623406z00, BGl_z62lambda2024z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2987z00zzcfa_info2z00,
		BgL_bgl_za762lambda2023za7623407z00, BGl_z62lambda2023z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2988z00zzcfa_info2z00,
		BgL_bgl_za762lambda2031za7623408z00, BGl_z62lambda2031z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2989z00zzcfa_info2z00,
		BgL_bgl_za762lambda2030za7623409z00, BGl_z62lambda2030z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23410za7,
		BGl_z62prezd2makezd2procedurezd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23411za7,
		BGl_z62prezd2makezd2vectorzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2990z00zzcfa_info2z00,
		BgL_bgl_za762lambda2015za7623412z00, BGl_z62lambda2015z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2991z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3413za7,
		BGl_z62zc3z04anonymousza32014ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2approxzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23414za7,
		BGl_z62conszd2appzd2approxz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2992z00zzcfa_info2z00,
		BgL_bgl_za762lambda2012za7623415z00, BGl_z62lambda2012z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2993z00zzcfa_info2z00,
		BgL_bgl_za762lambda2009za7623416z00, BGl_z62lambda2009z62zzcfa_info2z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2994z00zzcfa_info2z00,
		BgL_bgl_za762lambda2053za7623417z00, BGl_z62lambda2053z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2995z00zzcfa_info2z00,
		BgL_bgl_za762lambda2052za7623418z00, BGl_z62lambda2052z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2996z00zzcfa_info2z00,
		BgL_bgl_za762lambda2045za7623419z00, BGl_z62lambda2045z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2997z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3420za7,
		BGl_z62zc3z04anonymousza32044ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2998z00zzcfa_info2z00,
		BgL_bgl_za762lambda2042za7623421z00, BGl_z62lambda2042z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2999z00zzcfa_info2z00,
		BgL_bgl_za762lambda2039za7623422z00, BGl_z62lambda2039z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3423z00,
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2typezd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3424z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23425za7,
		BGl_z62prezd2makezd2procedurezd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2keyzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3426z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23427za7,
		BGl_z62conszd2refzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2conszd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2consza7d3428za7,
		BGl_z62makezd2conszd2setz12zd2appza2zzcfa_info2z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2keyzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23429za7,
		BGl_z62prezd2conszd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23430za7,
		BGl_z62conszd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73431za7,
		BGl_z62structzd2refzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3432z00,
		BGl_z62makezd2procedurezd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2funzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3433z00,
		BGl_z62procedurezd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2typezd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3434z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2typez70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23435za7,
		BGl_z62prezd2conszd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2getzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23436za7,
		BGl_z62prezd2conszd2setz12zd2appzd2getz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23437za7,
		BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2keyzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73438za7,
		BGl_z62prezd2structzd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23439za7,
		BGl_z62conszd2refzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73440za7,
		BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2argszd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123441za7,
		BGl_z62conszd2setz12zd2appzd2argsza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2refzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23442za7,
		BGl_z62conszd2refzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2funzd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3443z00,
		BGl_z62procedurezd2setz12zd2appzd2funza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2conszd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23444za7,
		BGl_z62makezd2prezd2conszd2refzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73445za7,
		BGl_z62prezd2structzd2refzd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2ownerzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23446za7,
		BGl_z62conszd2appzd2ownerz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2vapproxzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3447z00,
		BGl_z62procedurezd2setz12zd2appzd2vapproxzd2setz12z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23448z00,
		BGl_z62arithmeticzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3449z00,
		BGl_z62procedurezd2refzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2vapproxzd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3450z00,
		BGl_z62procedurezd2setz12zd2appzd2vapproxza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3451z00,
		BGl_z62procedurezd2refzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23452za7,
		BGl_z62prezd2makezd2structzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2vectorzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2makeza7d3453za7,
		BGl_z62makezd2makezd2vectorzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3454z00,
		BGl_z62prezd2arithmeticzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2typezd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23455za7,
		BGl_z62prezd2conszd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23456za7,
		BGl_z62conszd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2conszd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2consza7d3457za7,
		BGl_z62makezd2conszd2appz62zzcfa_info2z00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3458z00,
		BGl_z62procedurezd2refzd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3459z00,
		BGl_z62makezd2procedurezd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2procedurezd2setz12zd2appzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23460za7,
		BGl_z62makezd2prezd2procedurezd2setz12zd2appz70zzcfa_info2z00, 0L, BUNSPEC,
		6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3461z00,
		BGl_z62makezd2vectorzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23462za7,
		BGl_z62prezd2makezd2procedurezd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3463z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2loczd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73464za7,
		BGl_z62structzd2refzd2appzd2loczb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2stackzd2stampzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23465za7,
		BGl_z62conszd2appzd2stackzd2stampzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3466z00,
		BGl_z62prezd2arithmeticzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2arithmeticzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2arithm3467z00,
		BGl_z62makezd2arithmeticzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2seenzf3zd2setz12zd2envz33zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3468z00,
		BGl_z62makezd2vectorzd2appzd2seenzf3zd2setz12z83zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3469z00,
		BGl_z62makezd2vectorzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3470z00,
		BGl_z62makezd2vectorzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2approxzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3471z00,
		BGl_z62makezd2structzd2appzd2approxzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3472z00,
		BGl_z62procedurezd2refzd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73473za7,
		BGl_z62prezd2structzd2refzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73474za7,
		BGl_z62structzd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2lostzd2stampzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23475za7,
		BGl_z62conszd2appzd2lostzd2stampzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3476z00,
		BGl_z62makezd2structzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2ownerzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23477za7,
		BGl_z62prezd2makezd2procedurezd2appzd2ownerz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2keyzd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123478za7,
		BGl_z62conszd2setz12zd2appzd2keyza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23479za7,
		BGl_z62prezd2makezd2vectorzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23480za7,
		BGl_z62prezd2conszd2refzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2keyzd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73481za7,
		BGl_z62structzd2setz12zd2appzd2keyza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2ownerzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23482za7,
		BGl_z62prezd2makezd2structzd2appzd2ownerz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23483za7,
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3484z00,
		BGl_z62prezd2procedurezd2refzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23485za7,
		BGl_z62prezd2conszd2refzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2lostzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3486z00,
		BGl_z62makezd2vectorzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73487za7,
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23488za7,
		BGl_z62prezd2conszd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73489za7,
		BGl_z62structzd2setz12zd2appzf3z83zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23490za7,
		BGl_z62prezd2makezd2structzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2typezd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73491za7,
		BGl_z62prezd2structzd2setz12zd2appzd2typez70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2approxzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3492z00,
		BGl_z62makezd2vectorzd2appzd2approxzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73493za7,
		BGl_z62prezd2structzd2refzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23494za7,
		BGl_z62conszd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2keyzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73495za7,
		BGl_z62prezd2structzd2setz12zd2appzd2keyz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2argszd2envz12zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73496za7,
		BGl_z62structzd2setz12zd2appzd2argsza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3497z00,
		BGl_z62prezd2procedurezd2refzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23498za7,
		BGl_z62prezd2conszd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23499z00,
		BGl_z62arithmeticzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73500za7,
		BGl_z62prezd2structzd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23501za7,
		BGl_z62prezd2makezd2procedurezd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23502za7,
		BGl_z62prezd2makezd2vectorzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2arithmeticzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23503za7,
		BGl_z62makezd2prezd2arithmeticzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2ownerzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3504z00,
		BGl_z62makezd2vectorzd2appzd2ownerzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23505za7,
		BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2keyzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73506za7,
		BGl_z62structzd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3507z00,
		BGl_z62prezd2arithmeticzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3508z00,
		BGl_z62procedurezd2refzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23509za7,
		BGl_z62conszd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3510z00,
		BGl_z62makezd2procedurezd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2sidezd2effectzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3511z00,
		BGl_z62procedurezd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3512z00,
		BGl_z62prezd2arithmeticzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23513za7,
		BGl_z62conszd2refzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3514z00,
		BGl_z62prezd2arithmeticzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2argszd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3515z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2argsz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2nilzd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73516za7,
		BGl_z62structzd2refzd2appzd2nilzb0zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2conszd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23517za7,
		BGl_z62makezd2prezd2conszd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2keyzd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3518z00,
		BGl_z62procedurezd2setz12zd2appzd2keyza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3519z00,
		BGl_z62makezd2structzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2loczd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3520z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2locz70zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2lostzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3521z00,
		BGl_z62makezd2structzd2appzd2lostzd2stampz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3522z00,
		BGl_z62prezd2procedurezd2refzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23523za7,
		BGl_z62prezd2conszd2refzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2conszd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2consza7d3524za7,
		BGl_z62makezd2conszd2refzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23525za7,
		BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23526za7,
		BGl_z62conszd2refzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3527z00,
		BGl_z62prezd2procedurezd2refzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2seenzf3zd2setz12zd2envze1zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23528za7,
		BGl_z62conszd2appzd2seenzf3zd2setz12z51zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73529za7,
		BGl_z62prezd2structzd2refzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2typezd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73530za7,
		BGl_z62prezd2structzd2refzd2appzd2typezd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2stackzd2stampzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23531za7,
		BGl_z62conszd2appzd2stackzd2stampzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2getzd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123532za7,
		BGl_z62conszd2setz12zd2appzd2getza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2loczd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23533za7,
		BGl_z62prezd2conszd2refzd2appzd2locz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3000z00zzcfa_info2z00,
		BgL_bgl_za762lambda2070za7623534z00, BGl_z62lambda2070z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23535za7,
		BGl_z62prezd2makezd2procedurezd2appzd2funzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3001z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3536za7,
		BGl_z62zc3z04anonymousza32069ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3002z00zzcfa_info2z00,
		BgL_bgl_za762lambda2066za7623537z00, BGl_z62lambda2066z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3003z00zzcfa_info2z00,
		BgL_bgl_za762lambda2062za7623538z00, BGl_z62lambda2062z62zzcfa_info2z00, 0L,
		BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3004z00zzcfa_info2z00,
		BgL_bgl_za762lambda2088za7623539z00, BGl_z62lambda2088z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3005z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3540za7,
		BGl_z62zc3z04anonymousza32087ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3006z00zzcfa_info2z00,
		BgL_bgl_za762lambda2085za7623541z00, BGl_z62lambda2085z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3007z00zzcfa_info2z00,
		BgL_bgl_za762lambda2082za7623542z00, BGl_z62lambda2082z62zzcfa_info2z00, 0L,
		BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3008z00zzcfa_info2z00,
		BgL_bgl_za762lambda2113za7623543z00, BGl_z62lambda2113z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3009z00zzcfa_info2z00,
		BgL_bgl_za762lambda2112za7623544z00, BGl_z62lambda2112z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2funzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3545z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2funzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23546za7,
		BGl_z62prezd2conszd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2ownerzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23547za7,
		BGl_z62prezd2conszd2appzd2ownerzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3010z00zzcfa_info2z00,
		BgL_bgl_za762lambda2118za7623548z00, BGl_z62lambda2118z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2argszd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123549za7,
		BGl_z62conszd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3011z00zzcfa_info2z00,
		BgL_bgl_za762lambda2117za7623550z00, BGl_z62lambda2117z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3012z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3551za7,
		BGl_z62zc3z04anonymousza32125ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3013z00zzcfa_info2z00,
		BgL_bgl_za762lambda2124za7623552z00, BGl_z62lambda2124z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3014z00zzcfa_info2z00,
		BgL_bgl_za762lambda2123za7623553z00, BGl_z62lambda2123z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3015z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3554za7,
		BGl_z62zc3z04anonymousza32132ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3016z00zzcfa_info2z00,
		BgL_bgl_za762lambda2131za7623555z00, BGl_z62lambda2131z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3017z00zzcfa_info2z00,
		BgL_bgl_za762lambda2130za7623556z00, BGl_z62lambda2130z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3018z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3557za7,
		BGl_z62zc3z04anonymousza32139ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3019z00zzcfa_info2z00,
		BgL_bgl_za762lambda2138za7623558z00, BGl_z62lambda2138z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3559z00,
		BGl_z62makezd2vectorzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23560za7,
		BGl_z62conszd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3020z00zzcfa_info2z00,
		BgL_bgl_za762lambda2137za7623561z00, BGl_z62lambda2137z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3021z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3562za7,
		BGl_z62zc3z04anonymousza32146ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23563za7,
		BGl_z62prezd2conszd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3022z00zzcfa_info2z00,
		BgL_bgl_za762lambda2145za7623564z00, BGl_z62lambda2145z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3023z00zzcfa_info2z00,
		BgL_bgl_za762lambda2144za7623565z00, BGl_z62lambda2144z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3024z00zzcfa_info2z00,
		BgL_bgl_za762lambda2151za7623566z00, BGl_z62lambda2151z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3025z00zzcfa_info2z00,
		BgL_bgl_za762lambda2150za7623567z00, BGl_z62lambda2150z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3026z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3568za7,
		BGl_z62zc3z04anonymousza32158ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3027z00zzcfa_info2z00,
		BgL_bgl_za762lambda2157za7623569z00, BGl_z62lambda2157z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3028z00zzcfa_info2z00,
		BgL_bgl_za762lambda2156za7623570z00, BGl_z62lambda2156z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3029z00zzcfa_info2z00,
		BgL_bgl_za762lambda2105za7623571z00, BGl_z62lambda2105z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2ownerzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3572z00,
		BGl_z62makezd2procedurezd2appzd2ownerzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23573za7,
		BGl_z62prezd2conszd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23574za7,
		BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2makezd2structzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2makeza7d3575za7,
		BGl_z62makezd2makezd2structzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 11);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73576za7,
		BGl_z62structzd2refzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2vectorzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23577za7,
		BGl_z62makezd2prezd2makezd2vectorzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3030z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3578za7,
		BGl_z62zc3z04anonymousza32104ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3579z00,
		BGl_z62makezd2procedurezd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3031z00zzcfa_info2z00,
		BgL_bgl_za762lambda2102za7623580z00, BGl_z62lambda2102z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3032z00zzcfa_info2z00,
		BgL_bgl_za762lambda2098za7623581z00, BGl_z62lambda2098z62zzcfa_info2z00, 0L,
		BUNSPEC, 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3033z00zzcfa_info2z00,
		BgL_bgl_za762lambda2179za7623582z00, BGl_z62lambda2179z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3034z00zzcfa_info2z00,
		BgL_bgl_za762lambda2178za7623583z00, BGl_z62lambda2178z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3035z00zzcfa_info2z00,
		BgL_bgl_za762lambda2171za7623584z00, BGl_z62lambda2171z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2funzd2setz12zd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73585za7,
		BGl_z62prezd2structzd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3036z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3586za7,
		BGl_z62zc3z04anonymousza32170ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3037z00zzcfa_info2z00,
		BgL_bgl_za762lambda2168za7623587z00, BGl_z62lambda2168z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3038z00zzcfa_info2z00,
		BgL_bgl_za762lambda2165za7623588z00, BGl_z62lambda2165z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3039z00zzcfa_info2z00,
		BgL_bgl_za762lambda2200za7623589z00, BGl_z62lambda2200z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3590z00,
		BGl_z62makezd2procedurezd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3040z00zzcfa_info2z00,
		BgL_bgl_za762lambda2199za7623591z00, BGl_z62lambda2199z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3041z00zzcfa_info2z00,
		BgL_bgl_za762lambda2205za7623592z00, BGl_z62lambda2205z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3042z00zzcfa_info2z00,
		BgL_bgl_za762lambda2204za7623593z00, BGl_z62lambda2204z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3043z00zzcfa_info2z00,
		BgL_bgl_za762lambda2192za7623594z00, BGl_z62lambda2192z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3044z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3595za7,
		BGl_z62zc3z04anonymousza32191ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3045z00zzcfa_info2z00,
		BgL_bgl_za762lambda2189za7623596z00, BGl_z62lambda2189z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3046z00zzcfa_info2z00,
		BgL_bgl_za762lambda2186za7623597z00, BGl_z62lambda2186z62zzcfa_info2z00, 0L,
		BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3047z00zzcfa_info2z00,
		BgL_bgl_za762lambda2226za7623598z00, BGl_z62lambda2226z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3048z00zzcfa_info2z00,
		BgL_bgl_za762lambda2225za7623599z00, BGl_z62lambda2225z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3049z00zzcfa_info2z00,
		BgL_bgl_za762lambda2218za7623600z00, BGl_z62lambda2218z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3601z00,
		BGl_z62makezd2structzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3050z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3602za7,
		BGl_z62zc3z04anonymousza32217ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3051z00zzcfa_info2z00,
		BgL_bgl_za762lambda2215za7623603z00, BGl_z62lambda2215z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3052z00zzcfa_info2z00,
		BgL_bgl_za762lambda2212za7623604z00, BGl_z62lambda2212z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3053z00zzcfa_info2z00,
		BgL_bgl_za762lambda2247za7623605z00, BGl_z62lambda2247z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2stackzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3606z00,
		BGl_z62makezd2structzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3054z00zzcfa_info2z00,
		BgL_bgl_za762lambda2246za7623607z00, BGl_z62lambda2246z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3055z00zzcfa_info2z00,
		BgL_bgl_za762lambda2252za7623608z00, BGl_z62lambda2252z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3056z00zzcfa_info2z00,
		BgL_bgl_za762lambda2251za7623609z00, BGl_z62lambda2251z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3057z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3610za7,
		BGl_z62zc3z04anonymousza32260ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3058z00zzcfa_info2z00,
		BgL_bgl_za762lambda2259za7623611z00, BGl_z62lambda2259z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3059z00zzcfa_info2z00,
		BgL_bgl_za762lambda2258za7623612z00, BGl_z62lambda2258z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Tzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3613z00,
		BGl_z62makezd2procedurezd2appzd2Tzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3614z00,
		BGl_z62prezd2procedurezd2refzd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3060z00zzcfa_info2z00,
		BgL_bgl_za762lambda2265za7623615z00, BGl_z62lambda2265z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3061z00zzcfa_info2z00,
		BgL_bgl_za762lambda2264za7623616z00, BGl_z62lambda2264z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3062z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3617za7,
		BGl_z62zc3z04anonymousza32273ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23618za7,
		BGl_z62prezd2makezd2vectorzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3063z00zzcfa_info2z00,
		BgL_bgl_za762lambda2272za7623619z00, BGl_z62lambda2272z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3064z00zzcfa_info2z00,
		BgL_bgl_za762lambda2271za7623620z00, BGl_z62lambda2271z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3065z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3621za7,
		BGl_z62zc3z04anonymousza32281ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3066z00zzcfa_info2z00,
		BgL_bgl_za762lambda2280za7623622z00, BGl_z62lambda2280z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3067z00zzcfa_info2z00,
		BgL_bgl_za762lambda2279za7623623z00, BGl_z62lambda2279z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3068z00zzcfa_info2z00,
		BgL_bgl_za762lambda2239za7623624z00, BGl_z62lambda2239z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3069z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3625za7,
		BGl_z62zc3z04anonymousza32238ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2valuezd2approxzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3626z00,
		BGl_z62makezd2vectorzd2appzd2valuezd2approxz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23627z00,
		BGl_z62arithmeticzd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_prezd2conszd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23628za7,
		BGl_z62prezd2conszd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73629za7,
		BGl_z62structzd2refzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3070z00zzcfa_info2z00,
		BgL_bgl_za762lambda2236za7623630z00, BGl_z62lambda2236z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3071z00zzcfa_info2z00,
		BgL_bgl_za762lambda2233za7623631z00, BGl_z62lambda2233z62zzcfa_info2z00, 0L,
		BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3072z00zzcfa_info2z00,
		BgL_bgl_za762lambda2302za7623632z00, BGl_z62lambda2302z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3073z00zzcfa_info2z00,
		BgL_bgl_za762lambda2301za7623633z00, BGl_z62lambda2301z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3074z00zzcfa_info2z00,
		BgL_bgl_za762lambda2294za7623634z00, BGl_z62lambda2294z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3075z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3635za7,
		BGl_z62zc3z04anonymousza32293ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3076z00zzcfa_info2z00,
		BgL_bgl_za762lambda2291za7623636z00, BGl_z62lambda2291z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3077z00zzcfa_info2z00,
		BgL_bgl_za762lambda2288za7623637z00, BGl_z62lambda2288z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3638z00,
		BGl_z62makezd2procedurezd2setz12zd2appza2zzcfa_info2z00, 0L, BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3078z00zzcfa_info2z00,
		BgL_bgl_za762lambda2325za7623639z00, BGl_z62lambda2325z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3640z00,
		BGl_z62makezd2procedurezd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3079z00zzcfa_info2z00,
		BgL_bgl_za762lambda2324za7623641z00, BGl_z62lambda2324z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2stackzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3642z00,
		BGl_z62makezd2procedurezd2appzd2stackzd2stampz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2typezd2envz12zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3643z00,
		BGl_z62procedurezd2setz12zd2appzd2typeza2zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string3167z00zzcfa_info2z00,
		BgL_bgl_string3167za700za7za7c3644za7, "cfa_info2", 9);
	      DEFINE_STRING(BGl_string3168z00zzcfa_info2z00,
		BgL_bgl_string3168za700za7za7c3645za7,
		"#() struct-set!-app struct-ref-app make-struct-app pre-struct-set!-app pre-struct-ref-app pre-make-struct-app cons-set!-app cons-ref-app cons-app approxes pre-cons-set!-app pre-cons-ref-app procedure get pre-cons-app make-vector-app seen? value-approx pre-make-vector-app procedure-set!-app vapprox procedure-ref-app make-procedure-app obj stack-stamp T X bool X-T? long lost-stamp vector values-approx pre-procedure-set!-app pre-procedure-ref-app pre-make-procedure-app owner arithmetic-app approx cfa_info2 pre-arithmetic-app pair spec-types ",
		544);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3080z00zzcfa_info2z00,
		BgL_bgl_za762lambda2316za7623646z00, BGl_z62lambda2316z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3081z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3647za7,
		BGl_z62zc3z04anonymousza32315ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3082z00zzcfa_info2z00,
		BgL_bgl_za762lambda2313za7623648z00, BGl_z62lambda2313z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2loczd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23649za7,
		BGl_z62prezd2conszd2setz12zd2appzd2locz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3083z00zzcfa_info2z00,
		BgL_bgl_za762lambda2310za7623650z00, BGl_z62lambda2310z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3084z00zzcfa_info2z00,
		BgL_bgl_za762lambda2348za7623651z00, BGl_z62lambda2348z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3085z00zzcfa_info2z00,
		BgL_bgl_za762lambda2347za7623652z00, BGl_z62lambda2347z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3086z00zzcfa_info2z00,
		BgL_bgl_za762lambda2339za7623653z00, BGl_z62lambda2339z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3087z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3654za7,
		BGl_z62zc3z04anonymousza32338ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3088z00zzcfa_info2z00,
		BgL_bgl_za762lambda2336za7623655z00, BGl_z62lambda2336z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3089z00zzcfa_info2z00,
		BgL_bgl_za762lambda2333za7623656z00, BGl_z62lambda2333z62zzcfa_info2z00, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2setz12zd2appzd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3657z00,
		BGl_z62makezd2structzd2setz12zd2appza2zzcfa_info2z00, 0L, BUNSPEC, 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3090z00zzcfa_info2z00,
		BgL_bgl_za762lambda2369za7623658z00, BGl_z62lambda2369z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3091z00zzcfa_info2z00,
		BgL_bgl_za762lambda2368za7623659z00, BGl_z62lambda2368z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3092z00zzcfa_info2z00,
		BgL_bgl_za762lambda2374za7623660z00, BGl_z62lambda2374z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3093z00zzcfa_info2z00,
		BgL_bgl_za762lambda2373za7623661z00, BGl_z62lambda2373z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3094z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3662za7,
		BGl_z62zc3z04anonymousza32383ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3095z00zzcfa_info2z00,
		BgL_bgl_za762lambda2382za7623663z00, BGl_z62lambda2382z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3096z00zzcfa_info2z00,
		BgL_bgl_za762lambda2381za7623664z00, BGl_z62lambda2381z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3097z00zzcfa_info2z00,
		BgL_bgl_za762lambda2390za7623665z00, BGl_z62lambda2390z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3098z00zzcfa_info2z00,
		BgL_bgl_za762lambda2389za7623666z00, BGl_z62lambda2389z62zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3099z00zzcfa_info2z00,
		BgL_bgl_za762za7c3za704anonymo3667za7,
		BGl_z62zc3z04anonymousza32398ze3ze5zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12zd2envze1zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3668z00,
		BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z51zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2funzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23669za7,
		BGl_z62conszd2appzd2funz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23670za7,
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3671z00,
		BGl_z62makezd2procedurezd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3672z00,
		BGl_z62makezd2vectorzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2setz12zd2appzd2argszd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73673za7,
		BGl_z62prezd2structzd2setz12zd2appzd2argsz70zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3674z00,
		BGl_z62makezd2vectorzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2makezd2procedurezd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23675za7,
		BGl_z62makezd2prezd2makezd2procedurezd2appz62zzcfa_info2z00, 0L, BUNSPEC,
		7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2seenzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23676za7,
		BGl_z62conszd2appzd2seenzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2getzd2envz00zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23677za7,
		BGl_z62conszd2refzd2appzd2getzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2funzd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73678za7,
		BGl_z62structzd2refzd2appzd2funzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2valueszd2approxzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3679z00,
		BGl_z62makezd2procedurezd2appzd2valueszd2approxzd2setz12za2zzcfa_info2z00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2sidezd2effectzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3680z00,
		BGl_z62procedurezd2refzd2appzd2sidezd2effectz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2procedurezd2appzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23681za7,
		BGl_z62prezd2makezd2procedurezd2appzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3682z00,
		BGl_z62prezd2procedurezd2setz12zd2appzd2nilz70zzcfa_info2z00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3683z00,
		BGl_z62prezd2procedurezd2refzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2refzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3684z00,
		BGl_z62prezd2procedurezd2refzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23685za7,
		BGl_z62prezd2conszd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23686za7,
		BGl_z62prezd2conszd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2approxzd2envz00zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73687za7,
		BGl_z62structzd2refzd2appzd2approxzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2typezd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123688za7,
		BGl_z62conszd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3689z00,
		BGl_z62procedurezd2refzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23690za7,
		BGl_z62prezd2makezd2structzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzf3zd2envz33zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3691z00,
		BGl_z62procedurezd2setz12zd2appzf3z83zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2speczd2typeszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3692z00,
		BGl_z62prezd2arithmeticzd2appzd2speczd2typesz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2refzd2appzd2sidezd2effectzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2refza7d23693za7,
		BGl_z62conszd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2lostzd2stampzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3694z00,
		BGl_z62makezd2procedurezd2appzd2lostzd2stampz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3695z00,
		BGl_z62makezd2procedurezd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzd2valuezd2approxzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3696z00,
		BGl_z62makezd2structzd2appzd2valuezd2approxz62zzcfa_info2z00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3697z00,
		BGl_z62prezd2arithmeticzd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2nilzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23698za7,
		BGl_z62prezd2conszd2refzd2appzd2nilz62zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2setz12zd2appzd2argszd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2s3699z00,
		BGl_z62procedurezd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2speczd2typeszd2envz00zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23700z00,
		BGl_z62arithmeticzd2appzd2speczd2typeszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73701za7,
		BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2procedurezd2setz12zd2appzf3zd2envze1zzcfa_info2z00,
		BgL_bgl_za762preza7d2procedu3702z00,
		BGl_z62prezd2procedurezd2setz12zd2appzf3z51zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73703za7,
		BGl_z62structzd2refzd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_procedurezd2refzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762procedureza7d2r3704z00,
		BGl_z62procedurezd2refzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23705z00,
		BGl_z62arithmeticzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2Xzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3706z00,
		BGl_z62makezd2procedurezd2appzd2Xzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23707za7,
		BGl_z62conszd2appzd2funzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2keyzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73708za7,
		BGl_z62prezd2structzd2refzd2appzd2keyz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2refzd2appzd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3709z00,
		BGl_z62makezd2structzd2refzd2appzb0zzcfa_info2z00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73710za7,
		BGl_z62structzd2refzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2structzd2refzd2appzd2funzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2structza73711za7,
		BGl_z62prezd2structzd2refzd2appzd2funzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2lostzd2stampzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3712z00,
		BGl_z62makezd2procedurezd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2structzd2appzf3zd2envz21zzcfa_info2z00,
		BgL_bgl_za762makeza7d2struct3713z00,
		BGl_z62makezd2structzd2appzf3z91zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2vectorzd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23714za7,
		BGl_z62prezd2makezd2vectorzd2appzd2argszd2setz12za2zzcfa_info2z00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2setz12zd2appzd2keyzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2setza7123715za7,
		BGl_z62conszd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2typezd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3716z00,
		BGl_z62prezd2arithmeticzd2appzd2typezb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2setz12zd2appzd2nilzd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23717za7,
		BGl_z62prezd2conszd2setz12zd2appzd2nilz70zzcfa_info2z00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2setz12zd2appzd2funzd2setz12zd2envzd2zzcfa_info2z00,
		BgL_bgl_za762structza7d2setza73718za7,
		BGl_z62structzd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2arithmeticzd2appzd2funzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2arithme3719z00,
		BGl_z62prezd2arithmeticzd2appzd2funzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2prezd2procedurezd2refzd2appzd2envzd2zzcfa_info2z00,
		BgL_bgl_za762makeza7d2preza7d23720za7,
		BGl_z62makezd2prezd2procedurezd2refzd2appz62zzcfa_info2z00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2typezd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23721za7,
		BGl_z62prezd2conszd2appzd2typezd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2refzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23722za7,
		BGl_z62prezd2conszd2refzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2argszd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3723z00,
		BGl_z62makezd2vectorzd2appzd2argszd2setz12z70zzcfa_info2z00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2conszd2appzd2keyzd2envz00zzcfa_info2z00,
		BgL_bgl_za762preza7d2consza7d23724za7,
		BGl_z62prezd2conszd2appzd2keyzb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2argszd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23725za7,
		BGl_z62conszd2appzd2argszd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_conszd2appzd2argszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23726za7,
		BGl_z62conszd2appzd2argsz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prezd2makezd2structzd2appzd2typezd2envzd2zzcfa_info2z00,
		BgL_bgl_za762preza7d2makeza7d23727za7,
		BGl_z62prezd2makezd2structzd2appzd2typez62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_structzd2refzd2appzd2keyzd2setz12zd2envzc0zzcfa_info2z00,
		BgL_bgl_za762structza7d2refza73728za7,
		BGl_z62structzd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_conszd2appzd2approxeszd2envzd2zzcfa_info2z00,
		BgL_bgl_za762consza7d2appza7d23729za7,
		BGl_z62conszd2appzd2approxesz62zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2procedurezd2appzd2argszd2envz00zzcfa_info2z00,
		BgL_bgl_za762makeza7d2proced3730z00,
		BGl_z62makezd2procedurezd2appzd2argszb0zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2vectorzd2appzd2seenzf3zd2envzf3zzcfa_info2z00,
		BgL_bgl_za762makeza7d2vector3731z00,
		BGl_z62makezd2vectorzd2appzd2seenzf3z43zzcfa_info2z00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_arithmeticzd2appzd2keyzd2setz12zd2envz12zzcfa_info2z00,
		BgL_bgl_za762arithmeticza7d23732z00,
		BGl_z62arithmeticzd2appzd2keyzd2setz12za2zzcfa_info2z00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_makezd2structzd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_structzd2setz12zd2appz12zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_procedurezd2refzd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00));
		   
			 ADD_ROOT((void
				*) (&BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_conszd2setz12zd2appz12zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_makezd2procedurezd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_conszd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_conszd2refzd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_makezd2vectorzd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2arithmeticzd2appz00zzcfa_info2z00));
		   
			 ADD_ROOT((void *) (&BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_structzd2refzd2appz00zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_arithmeticzd2appzd2zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_procedurezd2setz12zd2appz12zzcfa_info2z00));
		     ADD_ROOT((void *) (&BGl_prezd2conszd2appz00zzcfa_info2z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcfa_info2z00(long
		BgL_checksumz00_8980, char *BgL_fromz00_8981)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcfa_info2z00))
				{
					BGl_requirezd2initializa7ationz75zzcfa_info2z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcfa_info2z00();
					BGl_libraryzd2moduleszd2initz00zzcfa_info2z00();
					BGl_cnstzd2initzd2zzcfa_info2z00();
					BGl_importedzd2moduleszd2initz00zzcfa_info2z00();
					BGl_objectzd2initzd2zzcfa_info2z00();
					return BGl_toplevelzd2initzd2zzcfa_info2z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "cfa_info2");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cfa_info2");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cfa_info2");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cfa_info2");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cfa_info2");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cfa_info2");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"cfa_info2");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			{	/* Cfa/cinfo2.scm 16 */
				obj_t BgL_cportz00_7993;

				{	/* Cfa/cinfo2.scm 16 */
					obj_t BgL_stringz00_8001;

					BgL_stringz00_8001 = BGl_string3168z00zzcfa_info2z00;
					{	/* Cfa/cinfo2.scm 16 */
						obj_t BgL_startz00_8002;

						BgL_startz00_8002 = BINT(((long) 0));
						{	/* Cfa/cinfo2.scm 16 */
							obj_t BgL_endz00_8003;

							BgL_endz00_8003 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_8001)));
							{	/* Cfa/cinfo2.scm 16 */

								BgL_cportz00_7993 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_8001, BgL_startz00_8002, BgL_endz00_8003);
				}}}}
				{
					long BgL_iz00_7994;

					BgL_iz00_7994 = ((long) 43);
				BgL_loopz00_7995:
					if ((BgL_iz00_7994 == ((long) -1)))
						{	/* Cfa/cinfo2.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Cfa/cinfo2.scm 16 */
							{	/* Cfa/cinfo2.scm 16 */
								obj_t BgL_arg3172z00_7997;

								{	/* Cfa/cinfo2.scm 16 */

									{	/* Cfa/cinfo2.scm 16 */
										obj_t BgL_locationz00_7999;

										BgL_locationz00_7999 = BBOOL(((bool_t) 0));
										{	/* Cfa/cinfo2.scm 16 */

											BgL_arg3172z00_7997 =
												BGl_readz00zz__readerz00(BgL_cportz00_7993,
												BgL_locationz00_7999);
										}
									}
								}
								{	/* Cfa/cinfo2.scm 16 */
									int BgL_tmpz00_9007;

									BgL_tmpz00_9007 = (int) (BgL_iz00_7994);
									CNST_TABLE_SET(BgL_tmpz00_9007, BgL_arg3172z00_7997);
							}}
							{	/* Cfa/cinfo2.scm 16 */
								int BgL_auxz00_8000;

								BgL_auxz00_8000 = (int) ((BgL_iz00_7994 - ((long) 1)));
								{
									long BgL_iz00_9012;

									BgL_iz00_9012 = (long) (BgL_auxz00_8000);
									BgL_iz00_7994 = BgL_iz00_9012;
									goto BgL_loopz00_7995;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			return BUNSPEC;
		}

	}



/* make-pre-arithmetic-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(obj_t BgL_loc1639z00_3,
		BgL_typez00_bglt BgL_type1640z00_4, obj_t BgL_sidezd2effect1641zd2_5,
		obj_t BgL_key1642z00_6, BgL_varz00_bglt BgL_fun1643z00_7,
		obj_t BgL_args1644z00_8, obj_t BgL_speczd2types1645zd2_9)
	{
		{	/* Cfa/cinfo2.sch 472 */
			{	/* Cfa/cinfo2.sch 472 */
				BgL_appz00_bglt BgL_new1464z00_8006;

				{	/* Cfa/cinfo2.sch 472 */
					BgL_appz00_bglt BgL_tmp1462z00_8007;
					BgL_prezd2arithmeticzd2appz00_bglt BgL_wide1463z00_8008;

					{
						BgL_appz00_bglt BgL_auxz00_9015;

						{	/* Cfa/cinfo2.sch 472 */
							BgL_appz00_bglt BgL_new1461z00_8009;

							BgL_new1461z00_8009 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 472 */
								long BgL_arg1935z00_8010;

								{	/* Cfa/cinfo2.sch 472 */
									long BgL_res2803z00_8011;

									BgL_res2803z00_8011 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1935z00_8010 = BgL_res2803z00_8011;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1461z00_8009),
									BgL_arg1935z00_8010);
							}
							{	/* Cfa/cinfo2.sch 472 */
								BgL_objectz00_bglt BgL_tmpz00_9020;

								BgL_tmpz00_9020 = ((BgL_objectz00_bglt) BgL_new1461z00_8009);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9020, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1461z00_8009);
							BgL_auxz00_9015 = BgL_new1461z00_8009;
						}
						BgL_tmp1462z00_8007 = ((BgL_appz00_bglt) BgL_auxz00_9015);
					}
					BgL_wide1463z00_8008 =
						((BgL_prezd2arithmeticzd2appz00_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2arithmeticzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 472 */
						obj_t BgL_auxz00_9028;
						BgL_objectz00_bglt BgL_tmpz00_9026;

						BgL_auxz00_9028 = ((obj_t) BgL_wide1463z00_8008);
						BgL_tmpz00_9026 = ((BgL_objectz00_bglt) BgL_tmp1462z00_8007);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9026, BgL_auxz00_9028);
					}
					((BgL_objectz00_bglt) BgL_tmp1462z00_8007);
					{	/* Cfa/cinfo2.sch 472 */
						long BgL_arg1934z00_8012;

						{	/* Cfa/cinfo2.sch 472 */
							long BgL_res2804z00_8013;

							BgL_res2804z00_8013 =
								BGL_CLASS_INDEX(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
							BgL_arg1934z00_8012 = BgL_res2804z00_8013;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1462z00_8007), BgL_arg1934z00_8012);
					}
					BgL_new1464z00_8006 = ((BgL_appz00_bglt) BgL_tmp1462z00_8007);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1464z00_8006)))->BgL_locz00) =
					((obj_t) BgL_loc1639z00_3), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1464z00_8006)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1640z00_4), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1464z00_8006)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1641zd2_5), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1464z00_8006)))->BgL_keyz00) =
					((obj_t) BgL_key1642z00_6), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1464z00_8006)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1643z00_7), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1464z00_8006)))->
						BgL_argsz00) = ((obj_t) BgL_args1644z00_8), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1464z00_8006)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_9050;

					{
						obj_t BgL_auxz00_9051;

						{	/* Cfa/cinfo2.sch 472 */
							BgL_objectz00_bglt BgL_tmpz00_9052;

							BgL_tmpz00_9052 = ((BgL_objectz00_bglt) BgL_new1464z00_8006);
							BgL_auxz00_9051 = BGL_OBJECT_WIDENING(BgL_tmpz00_9052);
						}
						BgL_auxz00_9050 =
							((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_9051);
					}
					((((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_9050))->
							BgL_speczd2typeszd2) =
						((obj_t) BgL_speczd2types1645zd2_9), BUNSPEC);
				}
				return BgL_new1464z00_8006;
			}
		}

	}



/* &make-pre-arithmetic-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2arithmeticzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6223, obj_t BgL_loc1639z00_6224, obj_t BgL_type1640z00_6225,
		obj_t BgL_sidezd2effect1641zd2_6226, obj_t BgL_key1642z00_6227,
		obj_t BgL_fun1643z00_6228, obj_t BgL_args1644z00_6229,
		obj_t BgL_speczd2types1645zd2_6230)
	{
		{	/* Cfa/cinfo2.sch 472 */
			return
				BGl_makezd2prezd2arithmeticzd2appzd2zzcfa_info2z00(BgL_loc1639z00_6224,
				((BgL_typez00_bglt) BgL_type1640z00_6225),
				BgL_sidezd2effect1641zd2_6226, BgL_key1642z00_6227,
				((BgL_varz00_bglt) BgL_fun1643z00_6228), BgL_args1644z00_6229,
				BgL_speczd2types1645zd2_6230);
		}

	}



/* pre-arithmetic-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_10)
	{
		{	/* Cfa/cinfo2.sch 473 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_10,
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
		}

	}



/* &pre-arithmetic-app? */
	obj_t BGl_z62prezd2arithmeticzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6231,
		obj_t BgL_objz00_6232)
	{
		{	/* Cfa/cinfo2.sch 473 */
			return
				BBOOL(BGl_prezd2arithmeticzd2appzf3zf3zzcfa_info2z00(BgL_objz00_6232));
		}

	}



/* pre-arithmetic-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 474 */
			{	/* Cfa/cinfo2.sch 474 */
				obj_t BgL_classz00_4734;

				BgL_classz00_4734 = BGl_prezd2arithmeticzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 474 */
					obj_t BgL__ortest_1106z00_4735;

					BgL__ortest_1106z00_4735 = BGL_CLASS_NIL(BgL_classz00_4734);
					if (CBOOL(BgL__ortest_1106z00_4735))
						{	/* Cfa/cinfo2.sch 474 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4735);
						}
					else
						{	/* Cfa/cinfo2.sch 474 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4734));
						}
				}
			}
		}

	}



/* &pre-arithmetic-app-nil */
	BgL_appz00_bglt BGl_z62prezd2arithmeticzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6233)
	{
		{	/* Cfa/cinfo2.sch 474 */
			return BGl_prezd2arithmeticzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* pre-arithmetic-app-spec-types */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2speczd2typesz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_11)
	{
		{	/* Cfa/cinfo2.sch 475 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_9070;

				{
					obj_t BgL_auxz00_9071;

					{	/* Cfa/cinfo2.sch 475 */
						BgL_objectz00_bglt BgL_tmpz00_9072;

						BgL_tmpz00_9072 = ((BgL_objectz00_bglt) BgL_oz00_11);
						BgL_auxz00_9071 = BGL_OBJECT_WIDENING(BgL_tmpz00_9072);
					}
					BgL_auxz00_9070 =
						((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_9071);
				}
				return
					(((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_9070))->
					BgL_speczd2typeszd2);
			}
		}

	}



/* &pre-arithmetic-app-spec-types */
	obj_t BGl_z62prezd2arithmeticzd2appzd2speczd2typesz62zzcfa_info2z00(obj_t
		BgL_envz00_6234, obj_t BgL_oz00_6235)
	{
		{	/* Cfa/cinfo2.sch 475 */
			return
				BGl_prezd2arithmeticzd2appzd2speczd2typesz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6235));
		}

	}



/* pre-arithmetic-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_14)
	{
		{	/* Cfa/cinfo2.sch 477 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_14)))->BgL_argsz00);
		}

	}



/* &pre-arithmetic-app-args */
	obj_t BGl_z62prezd2arithmeticzd2appzd2argszb0zzcfa_info2z00(obj_t
		BgL_envz00_6236, obj_t BgL_oz00_6237)
	{
		{	/* Cfa/cinfo2.sch 477 */
			return
				BGl_prezd2arithmeticzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6237));
		}

	}



/* pre-arithmetic-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_15, obj_t BgL_vz00_16)
	{
		{	/* Cfa/cinfo2.sch 478 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_15)))->BgL_argsz00) =
				((obj_t) BgL_vz00_16), BUNSPEC);
		}

	}



/* &pre-arithmetic-app-args-set! */
	obj_t BGl_z62prezd2arithmeticzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6238, obj_t BgL_oz00_6239, obj_t BgL_vz00_6240)
	{
		{	/* Cfa/cinfo2.sch 478 */
			return
				BGl_prezd2arithmeticzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6239), BgL_vz00_6240);
		}

	}



/* pre-arithmetic-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2arithmeticzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_17)
	{
		{	/* Cfa/cinfo2.sch 479 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_17)))->BgL_funz00);
		}

	}



/* &pre-arithmetic-app-fun */
	BgL_varz00_bglt BGl_z62prezd2arithmeticzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6241, obj_t BgL_oz00_6242)
	{
		{	/* Cfa/cinfo2.sch 479 */
			return
				BGl_prezd2arithmeticzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6242));
		}

	}



/* pre-arithmetic-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_18, BgL_varz00_bglt BgL_vz00_19)
	{
		{	/* Cfa/cinfo2.sch 480 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_18)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_19), BUNSPEC);
		}

	}



/* &pre-arithmetic-app-fun-set! */
	obj_t BGl_z62prezd2arithmeticzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6243, obj_t BgL_oz00_6244, obj_t BgL_vz00_6245)
	{
		{	/* Cfa/cinfo2.sch 480 */
			return
				BGl_prezd2arithmeticzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6244), ((BgL_varz00_bglt) BgL_vz00_6245));
		}

	}



/* pre-arithmetic-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_20)
	{
		{	/* Cfa/cinfo2.sch 481 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_20)))->BgL_keyz00);
		}

	}



/* &pre-arithmetic-app-key */
	obj_t BGl_z62prezd2arithmeticzd2appzd2keyzb0zzcfa_info2z00(obj_t
		BgL_envz00_6246, obj_t BgL_oz00_6247)
	{
		{	/* Cfa/cinfo2.sch 481 */
			return
				BGl_prezd2arithmeticzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6247));
		}

	}



/* pre-arithmetic-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_21, obj_t BgL_vz00_22)
	{
		{	/* Cfa/cinfo2.sch 482 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_21)))->BgL_keyz00) =
				((obj_t) BgL_vz00_22), BUNSPEC);
		}

	}



/* &pre-arithmetic-app-key-set! */
	obj_t BGl_z62prezd2arithmeticzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6248, obj_t BgL_oz00_6249, obj_t BgL_vz00_6250)
	{
		{	/* Cfa/cinfo2.sch 482 */
			return
				BGl_prezd2arithmeticzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6249), BgL_vz00_6250);
		}

	}



/* pre-arithmetic-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_23)
	{
		{	/* Cfa/cinfo2.sch 483 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_23)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-arithmetic-app-side-effect */
	obj_t BGl_z62prezd2arithmeticzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6251, obj_t BgL_oz00_6252)
	{
		{	/* Cfa/cinfo2.sch 483 */
			return
				BGl_prezd2arithmeticzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6252));
		}

	}



/* pre-arithmetic-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_24, obj_t BgL_vz00_25)
	{
		{	/* Cfa/cinfo2.sch 484 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_24)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_25), BUNSPEC);
		}

	}



/* &pre-arithmetic-app-side-effect-set! */
	obj_t
		BGl_z62prezd2arithmeticzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00
		(obj_t BgL_envz00_6253, obj_t BgL_oz00_6254, obj_t BgL_vz00_6255)
	{
		{	/* Cfa/cinfo2.sch 484 */
			return
				BGl_prezd2arithmeticzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6254), BgL_vz00_6255);
		}

	}



/* pre-arithmetic-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2arithmeticzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_26)
	{
		{	/* Cfa/cinfo2.sch 485 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_26)))->BgL_typez00);
		}

	}



/* &pre-arithmetic-app-type */
	BgL_typez00_bglt BGl_z62prezd2arithmeticzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6256, obj_t BgL_oz00_6257)
	{
		{	/* Cfa/cinfo2.sch 485 */
			return
				BGl_prezd2arithmeticzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6257));
		}

	}



/* pre-arithmetic-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_27, BgL_typez00_bglt BgL_vz00_28)
	{
		{	/* Cfa/cinfo2.sch 486 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_27)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_28), BUNSPEC);
		}

	}



/* &pre-arithmetic-app-type-set! */
	obj_t BGl_z62prezd2arithmeticzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6258, obj_t BgL_oz00_6259, obj_t BgL_vz00_6260)
	{
		{	/* Cfa/cinfo2.sch 486 */
			return
				BGl_prezd2arithmeticzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6259), ((BgL_typez00_bglt) BgL_vz00_6260));
		}

	}



/* pre-arithmetic-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2arithmeticzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_29)
	{
		{	/* Cfa/cinfo2.sch 487 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_29)))->BgL_locz00);
		}

	}



/* &pre-arithmetic-app-loc */
	obj_t BGl_z62prezd2arithmeticzd2appzd2loczb0zzcfa_info2z00(obj_t
		BgL_envz00_6261, obj_t BgL_oz00_6262)
	{
		{	/* Cfa/cinfo2.sch 487 */
			return
				BGl_prezd2arithmeticzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6262));
		}

	}



/* make-arithmetic-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2arithmeticzd2appz00zzcfa_info2z00(obj_t BgL_loc1630z00_32,
		BgL_typez00_bglt BgL_type1631z00_33, obj_t BgL_sidezd2effect1632zd2_34,
		obj_t BgL_key1633z00_35, BgL_varz00_bglt BgL_fun1634z00_36,
		obj_t BgL_args1635z00_37, BgL_approxz00_bglt BgL_approx1636z00_38,
		obj_t BgL_speczd2types1637zd2_39)
	{
		{	/* Cfa/cinfo2.sch 491 */
			{	/* Cfa/cinfo2.sch 491 */
				BgL_appz00_bglt BgL_new1468z00_8014;

				{	/* Cfa/cinfo2.sch 491 */
					BgL_appz00_bglt BgL_tmp1466z00_8015;
					BgL_arithmeticzd2appzd2_bglt BgL_wide1467z00_8016;

					{
						BgL_appz00_bglt BgL_auxz00_9125;

						{	/* Cfa/cinfo2.sch 491 */
							BgL_appz00_bglt BgL_new1465z00_8017;

							BgL_new1465z00_8017 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 491 */
								long BgL_arg1937z00_8018;

								{	/* Cfa/cinfo2.sch 491 */
									long BgL_res2805z00_8019;

									BgL_res2805z00_8019 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1937z00_8018 = BgL_res2805z00_8019;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1465z00_8017),
									BgL_arg1937z00_8018);
							}
							{	/* Cfa/cinfo2.sch 491 */
								BgL_objectz00_bglt BgL_tmpz00_9130;

								BgL_tmpz00_9130 = ((BgL_objectz00_bglt) BgL_new1465z00_8017);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9130, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1465z00_8017);
							BgL_auxz00_9125 = BgL_new1465z00_8017;
						}
						BgL_tmp1466z00_8015 = ((BgL_appz00_bglt) BgL_auxz00_9125);
					}
					BgL_wide1467z00_8016 =
						((BgL_arithmeticzd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_arithmeticzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 491 */
						obj_t BgL_auxz00_9138;
						BgL_objectz00_bglt BgL_tmpz00_9136;

						BgL_auxz00_9138 = ((obj_t) BgL_wide1467z00_8016);
						BgL_tmpz00_9136 = ((BgL_objectz00_bglt) BgL_tmp1466z00_8015);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9136, BgL_auxz00_9138);
					}
					((BgL_objectz00_bglt) BgL_tmp1466z00_8015);
					{	/* Cfa/cinfo2.sch 491 */
						long BgL_arg1936z00_8020;

						{	/* Cfa/cinfo2.sch 491 */
							long BgL_res2806z00_8021;

							BgL_res2806z00_8021 =
								BGL_CLASS_INDEX(BGl_arithmeticzd2appzd2zzcfa_info2z00);
							BgL_arg1936z00_8020 = BgL_res2806z00_8021;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1466z00_8015), BgL_arg1936z00_8020);
					}
					BgL_new1468z00_8014 = ((BgL_appz00_bglt) BgL_tmp1466z00_8015);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1468z00_8014)))->BgL_locz00) =
					((obj_t) BgL_loc1630z00_32), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1468z00_8014)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1631z00_33), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1468z00_8014)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1632zd2_34), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1468z00_8014)))->BgL_keyz00) =
					((obj_t) BgL_key1633z00_35), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1468z00_8014)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1634z00_36), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1468z00_8014)))->
						BgL_argsz00) = ((obj_t) BgL_args1635z00_37), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1468z00_8014)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_9160;

					{
						obj_t BgL_auxz00_9161;

						{	/* Cfa/cinfo2.sch 491 */
							BgL_objectz00_bglt BgL_tmpz00_9162;

							BgL_tmpz00_9162 = ((BgL_objectz00_bglt) BgL_new1468z00_8014);
							BgL_auxz00_9161 = BGL_OBJECT_WIDENING(BgL_tmpz00_9162);
						}
						BgL_auxz00_9160 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_9161);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_9160))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1636z00_38), BUNSPEC);
				}
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_9167;

					{
						obj_t BgL_auxz00_9168;

						{	/* Cfa/cinfo2.sch 491 */
							BgL_objectz00_bglt BgL_tmpz00_9169;

							BgL_tmpz00_9169 = ((BgL_objectz00_bglt) BgL_new1468z00_8014);
							BgL_auxz00_9168 = BGL_OBJECT_WIDENING(BgL_tmpz00_9169);
						}
						BgL_auxz00_9167 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_9168);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_9167))->
							BgL_speczd2typeszd2) =
						((obj_t) BgL_speczd2types1637zd2_39), BUNSPEC);
				}
				return BgL_new1468z00_8014;
			}
		}

	}



/* &make-arithmetic-app */
	BgL_appz00_bglt BGl_z62makezd2arithmeticzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6263, obj_t BgL_loc1630z00_6264, obj_t BgL_type1631z00_6265,
		obj_t BgL_sidezd2effect1632zd2_6266, obj_t BgL_key1633z00_6267,
		obj_t BgL_fun1634z00_6268, obj_t BgL_args1635z00_6269,
		obj_t BgL_approx1636z00_6270, obj_t BgL_speczd2types1637zd2_6271)
	{
		{	/* Cfa/cinfo2.sch 491 */
			return
				BGl_makezd2arithmeticzd2appz00zzcfa_info2z00(BgL_loc1630z00_6264,
				((BgL_typez00_bglt) BgL_type1631z00_6265),
				BgL_sidezd2effect1632zd2_6266, BgL_key1633z00_6267,
				((BgL_varz00_bglt) BgL_fun1634z00_6268), BgL_args1635z00_6269,
				((BgL_approxz00_bglt) BgL_approx1636z00_6270),
				BgL_speczd2types1637zd2_6271);
		}

	}



/* arithmetic-app? */
	BGL_EXPORTED_DEF bool_t BGl_arithmeticzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_objz00_40)
	{
		{	/* Cfa/cinfo2.sch 492 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_40,
				BGl_arithmeticzd2appzd2zzcfa_info2z00);
		}

	}



/* &arithmetic-app? */
	obj_t BGl_z62arithmeticzd2appzf3z43zzcfa_info2z00(obj_t BgL_envz00_6272,
		obj_t BgL_objz00_6273)
	{
		{	/* Cfa/cinfo2.sch 492 */
			return BBOOL(BGl_arithmeticzd2appzf3z21zzcfa_info2z00(BgL_objz00_6273));
		}

	}



/* arithmetic-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 493 */
			{	/* Cfa/cinfo2.sch 493 */
				obj_t BgL_classz00_4755;

				BgL_classz00_4755 = BGl_arithmeticzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 493 */
					obj_t BgL__ortest_1106z00_4756;

					BgL__ortest_1106z00_4756 = BGL_CLASS_NIL(BgL_classz00_4755);
					if (CBOOL(BgL__ortest_1106z00_4756))
						{	/* Cfa/cinfo2.sch 493 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4756);
						}
					else
						{	/* Cfa/cinfo2.sch 493 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4755));
						}
				}
			}
		}

	}



/* &arithmetic-app-nil */
	BgL_appz00_bglt BGl_z62arithmeticzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6274)
	{
		{	/* Cfa/cinfo2.sch 493 */
			return BGl_arithmeticzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* arithmetic-app-spec-types */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2speczd2typeszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_41)
	{
		{	/* Cfa/cinfo2.sch 494 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_9188;

				{
					obj_t BgL_auxz00_9189;

					{	/* Cfa/cinfo2.sch 494 */
						BgL_objectz00_bglt BgL_tmpz00_9190;

						BgL_tmpz00_9190 = ((BgL_objectz00_bglt) BgL_oz00_41);
						BgL_auxz00_9189 = BGL_OBJECT_WIDENING(BgL_tmpz00_9190);
					}
					BgL_auxz00_9188 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_9189);
				}
				return
					(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_9188))->
					BgL_speczd2typeszd2);
			}
		}

	}



/* &arithmetic-app-spec-types */
	obj_t BGl_z62arithmeticzd2appzd2speczd2typeszb0zzcfa_info2z00(obj_t
		BgL_envz00_6275, obj_t BgL_oz00_6276)
	{
		{	/* Cfa/cinfo2.sch 494 */
			return
				BGl_arithmeticzd2appzd2speczd2typeszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6276));
		}

	}



/* arithmetic-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_arithmeticzd2appzd2approxz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_44)
	{
		{	/* Cfa/cinfo2.sch 496 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_9197;

				{
					obj_t BgL_auxz00_9198;

					{	/* Cfa/cinfo2.sch 496 */
						BgL_objectz00_bglt BgL_tmpz00_9199;

						BgL_tmpz00_9199 = ((BgL_objectz00_bglt) BgL_oz00_44);
						BgL_auxz00_9198 = BGL_OBJECT_WIDENING(BgL_tmpz00_9199);
					}
					BgL_auxz00_9197 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_9198);
				}
				return
					(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_9197))->
					BgL_approxz00);
			}
		}

	}



/* &arithmetic-app-approx */
	BgL_approxz00_bglt BGl_z62arithmeticzd2appzd2approxz62zzcfa_info2z00(obj_t
		BgL_envz00_6277, obj_t BgL_oz00_6278)
	{
		{	/* Cfa/cinfo2.sch 496 */
			return
				BGl_arithmeticzd2appzd2approxz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6278));
		}

	}



/* arithmetic-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_47)
	{
		{	/* Cfa/cinfo2.sch 498 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_47)))->BgL_argsz00);
		}

	}



/* &arithmetic-app-args */
	obj_t BGl_z62arithmeticzd2appzd2argsz62zzcfa_info2z00(obj_t BgL_envz00_6279,
		obj_t BgL_oz00_6280)
	{
		{	/* Cfa/cinfo2.sch 498 */
			return
				BGl_arithmeticzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6280));
		}

	}



/* arithmetic-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_48, obj_t BgL_vz00_49)
	{
		{	/* Cfa/cinfo2.sch 499 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_48)))->BgL_argsz00) =
				((obj_t) BgL_vz00_49), BUNSPEC);
		}

	}



/* &arithmetic-app-args-set! */
	obj_t BGl_z62arithmeticzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6281, obj_t BgL_oz00_6282, obj_t BgL_vz00_6283)
	{
		{	/* Cfa/cinfo2.sch 499 */
			return
				BGl_arithmeticzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6282), BgL_vz00_6283);
		}

	}



/* arithmetic-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_arithmeticzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_50)
	{
		{	/* Cfa/cinfo2.sch 500 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_50)))->BgL_funz00);
		}

	}



/* &arithmetic-app-fun */
	BgL_varz00_bglt BGl_z62arithmeticzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6284, obj_t BgL_oz00_6285)
	{
		{	/* Cfa/cinfo2.sch 500 */
			return
				BGl_arithmeticzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6285));
		}

	}



/* arithmetic-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_51, BgL_varz00_bglt BgL_vz00_52)
	{
		{	/* Cfa/cinfo2.sch 501 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_51)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_52), BUNSPEC);
		}

	}



/* &arithmetic-app-fun-set! */
	obj_t BGl_z62arithmeticzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6286, obj_t BgL_oz00_6287, obj_t BgL_vz00_6288)
	{
		{	/* Cfa/cinfo2.sch 501 */
			return
				BGl_arithmeticzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6287), ((BgL_varz00_bglt) BgL_vz00_6288));
		}

	}



/* arithmetic-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_53)
	{
		{	/* Cfa/cinfo2.sch 502 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_53)))->BgL_keyz00);
		}

	}



/* &arithmetic-app-key */
	obj_t BGl_z62arithmeticzd2appzd2keyz62zzcfa_info2z00(obj_t BgL_envz00_6289,
		obj_t BgL_oz00_6290)
	{
		{	/* Cfa/cinfo2.sch 502 */
			return
				BGl_arithmeticzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6290));
		}

	}



/* arithmetic-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_54, obj_t BgL_vz00_55)
	{
		{	/* Cfa/cinfo2.sch 503 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_54)))->BgL_keyz00) =
				((obj_t) BgL_vz00_55), BUNSPEC);
		}

	}



/* &arithmetic-app-key-set! */
	obj_t BGl_z62arithmeticzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6291, obj_t BgL_oz00_6292, obj_t BgL_vz00_6293)
	{
		{	/* Cfa/cinfo2.sch 503 */
			return
				BGl_arithmeticzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6292), BgL_vz00_6293);
		}

	}



/* arithmetic-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2sidezd2effectzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_56)
	{
		{	/* Cfa/cinfo2.sch 504 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_56)))->BgL_sidezd2effectzd2);
		}

	}



/* &arithmetic-app-side-effect */
	obj_t BGl_z62arithmeticzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6294, obj_t BgL_oz00_6295)
	{
		{	/* Cfa/cinfo2.sch 504 */
			return
				BGl_arithmeticzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6295));
		}

	}



/* arithmetic-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_57, obj_t BgL_vz00_58)
	{
		{	/* Cfa/cinfo2.sch 505 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_57)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_58), BUNSPEC);
		}

	}



/* &arithmetic-app-side-effect-set! */
	obj_t BGl_z62arithmeticzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6296, obj_t BgL_oz00_6297, obj_t BgL_vz00_6298)
	{
		{	/* Cfa/cinfo2.sch 505 */
			return
				BGl_arithmeticzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6297), BgL_vz00_6298);
		}

	}



/* arithmetic-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_arithmeticzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_59)
	{
		{	/* Cfa/cinfo2.sch 506 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_59)))->BgL_typez00);
		}

	}



/* &arithmetic-app-type */
	BgL_typez00_bglt BGl_z62arithmeticzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6299, obj_t BgL_oz00_6300)
	{
		{	/* Cfa/cinfo2.sch 506 */
			return
				BGl_arithmeticzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6300));
		}

	}



/* arithmetic-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_60, BgL_typez00_bglt BgL_vz00_61)
	{
		{	/* Cfa/cinfo2.sch 507 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_60)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_61), BUNSPEC);
		}

	}



/* &arithmetic-app-type-set! */
	obj_t BGl_z62arithmeticzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6301, obj_t BgL_oz00_6302, obj_t BgL_vz00_6303)
	{
		{	/* Cfa/cinfo2.sch 507 */
			return
				BGl_arithmeticzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6302), ((BgL_typez00_bglt) BgL_vz00_6303));
		}

	}



/* arithmetic-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_arithmeticzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_62)
	{
		{	/* Cfa/cinfo2.sch 508 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_62)))->BgL_locz00);
		}

	}



/* &arithmetic-app-loc */
	obj_t BGl_z62arithmeticzd2appzd2locz62zzcfa_info2z00(obj_t BgL_envz00_6304,
		obj_t BgL_oz00_6305)
	{
		{	/* Cfa/cinfo2.sch 508 */
			return
				BGl_arithmeticzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6305));
		}

	}



/* make-pre-make-procedure-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00(obj_t
		BgL_loc1621z00_65, BgL_typez00_bglt BgL_type1622z00_66,
		obj_t BgL_sidezd2effect1623zd2_67, obj_t BgL_key1624z00_68,
		BgL_varz00_bglt BgL_fun1625z00_69, obj_t BgL_args1626z00_70,
		BgL_variablez00_bglt BgL_owner1627z00_71)
	{
		{	/* Cfa/cinfo2.sch 512 */
			{	/* Cfa/cinfo2.sch 512 */
				BgL_appz00_bglt BgL_new1472z00_8022;

				{	/* Cfa/cinfo2.sch 512 */
					BgL_appz00_bglt BgL_tmp1470z00_8023;
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_wide1471z00_8024;

					{
						BgL_appz00_bglt BgL_auxz00_9252;

						{	/* Cfa/cinfo2.sch 512 */
							BgL_appz00_bglt BgL_new1469z00_8025;

							BgL_new1469z00_8025 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 512 */
								long BgL_arg1939z00_8026;

								{	/* Cfa/cinfo2.sch 512 */
									long BgL_res2807z00_8027;

									BgL_res2807z00_8027 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1939z00_8026 = BgL_res2807z00_8027;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1469z00_8025),
									BgL_arg1939z00_8026);
							}
							{	/* Cfa/cinfo2.sch 512 */
								BgL_objectz00_bglt BgL_tmpz00_9257;

								BgL_tmpz00_9257 = ((BgL_objectz00_bglt) BgL_new1469z00_8025);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9257, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1469z00_8025);
							BgL_auxz00_9252 = BgL_new1469z00_8025;
						}
						BgL_tmp1470z00_8023 = ((BgL_appz00_bglt) BgL_auxz00_9252);
					}
					BgL_wide1471z00_8024 =
						((BgL_prezd2makezd2procedurezd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2procedurezd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 512 */
						obj_t BgL_auxz00_9265;
						BgL_objectz00_bglt BgL_tmpz00_9263;

						BgL_auxz00_9265 = ((obj_t) BgL_wide1471z00_8024);
						BgL_tmpz00_9263 = ((BgL_objectz00_bglt) BgL_tmp1470z00_8023);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9263, BgL_auxz00_9265);
					}
					((BgL_objectz00_bglt) BgL_tmp1470z00_8023);
					{	/* Cfa/cinfo2.sch 512 */
						long BgL_arg1938z00_8028;

						{	/* Cfa/cinfo2.sch 512 */
							long BgL_res2808z00_8029;

							BgL_res2808z00_8029 =
								BGL_CLASS_INDEX
								(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
							BgL_arg1938z00_8028 = BgL_res2808z00_8029;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1470z00_8023), BgL_arg1938z00_8028);
					}
					BgL_new1472z00_8022 = ((BgL_appz00_bglt) BgL_tmp1470z00_8023);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1472z00_8022)))->BgL_locz00) =
					((obj_t) BgL_loc1621z00_65), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1472z00_8022)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1622z00_66), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1472z00_8022)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1623zd2_67), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1472z00_8022)))->BgL_keyz00) =
					((obj_t) BgL_key1624z00_68), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1472z00_8022)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1625z00_69), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1472z00_8022)))->
						BgL_argsz00) = ((obj_t) BgL_args1626z00_70), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1472z00_8022)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_9287;

					{
						obj_t BgL_auxz00_9288;

						{	/* Cfa/cinfo2.sch 512 */
							BgL_objectz00_bglt BgL_tmpz00_9289;

							BgL_tmpz00_9289 = ((BgL_objectz00_bglt) BgL_new1472z00_8022);
							BgL_auxz00_9288 = BGL_OBJECT_WIDENING(BgL_tmpz00_9289);
						}
						BgL_auxz00_9287 =
							((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_9288);
					}
					((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
								COBJECT(BgL_auxz00_9287))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1627z00_71), BUNSPEC);
				}
				return BgL_new1472z00_8022;
			}
		}

	}



/* &make-pre-make-procedure-app */
	BgL_appz00_bglt
		BGl_z62makezd2prezd2makezd2procedurezd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6306, obj_t BgL_loc1621z00_6307, obj_t BgL_type1622z00_6308,
		obj_t BgL_sidezd2effect1623zd2_6309, obj_t BgL_key1624z00_6310,
		obj_t BgL_fun1625z00_6311, obj_t BgL_args1626z00_6312,
		obj_t BgL_owner1627z00_6313)
	{
		{	/* Cfa/cinfo2.sch 512 */
			return
				BGl_makezd2prezd2makezd2procedurezd2appz00zzcfa_info2z00
				(BgL_loc1621z00_6307, ((BgL_typez00_bglt) BgL_type1622z00_6308),
				BgL_sidezd2effect1623zd2_6309, BgL_key1624z00_6310,
				((BgL_varz00_bglt) BgL_fun1625z00_6311), BgL_args1626z00_6312,
				((BgL_variablez00_bglt) BgL_owner1627z00_6313));
		}

	}



/* pre-make-procedure-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00(obj_t BgL_objz00_72)
	{
		{	/* Cfa/cinfo2.sch 513 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_72,
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-make-procedure-app? */
	obj_t BGl_z62prezd2makezd2procedurezd2appzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_6314, obj_t BgL_objz00_6315)
	{
		{	/* Cfa/cinfo2.sch 513 */
			return
				BBOOL(BGl_prezd2makezd2procedurezd2appzf3z21zzcfa_info2z00
				(BgL_objz00_6315));
		}

	}



/* pre-make-procedure-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 514 */
			{	/* Cfa/cinfo2.sch 514 */
				obj_t BgL_classz00_4776;

				BgL_classz00_4776 = BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 514 */
					obj_t BgL__ortest_1106z00_4777;

					BgL__ortest_1106z00_4777 = BGL_CLASS_NIL(BgL_classz00_4776);
					if (CBOOL(BgL__ortest_1106z00_4777))
						{	/* Cfa/cinfo2.sch 514 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4777);
						}
					else
						{	/* Cfa/cinfo2.sch 514 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4776));
						}
				}
			}
		}

	}



/* &pre-make-procedure-app-nil */
	BgL_appz00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6316)
	{
		{	/* Cfa/cinfo2.sch 514 */
			return BGl_prezd2makezd2procedurezd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-make-procedure-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_prezd2makezd2procedurezd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_73)
	{
		{	/* Cfa/cinfo2.sch 515 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_9308;

				{
					obj_t BgL_auxz00_9309;

					{	/* Cfa/cinfo2.sch 515 */
						BgL_objectz00_bglt BgL_tmpz00_9310;

						BgL_tmpz00_9310 = ((BgL_objectz00_bglt) BgL_oz00_73);
						BgL_auxz00_9309 = BGL_OBJECT_WIDENING(BgL_tmpz00_9310);
					}
					BgL_auxz00_9308 =
						((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_9309);
				}
				return
					(((BgL_prezd2makezd2procedurezd2appzd2_bglt)
						COBJECT(BgL_auxz00_9308))->BgL_ownerz00);
			}
		}

	}



/* &pre-make-procedure-app-owner */
	BgL_variablez00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2ownerz62zzcfa_info2z00(obj_t
		BgL_envz00_6317, obj_t BgL_oz00_6318)
	{
		{	/* Cfa/cinfo2.sch 515 */
			return
				BGl_prezd2makezd2procedurezd2appzd2ownerz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6318));
		}

	}



/* pre-make-procedure-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_76)
	{
		{	/* Cfa/cinfo2.sch 517 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_76)))->BgL_argsz00);
		}

	}



/* &pre-make-procedure-app-args */
	obj_t BGl_z62prezd2makezd2procedurezd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_6319, obj_t BgL_oz00_6320)
	{
		{	/* Cfa/cinfo2.sch 517 */
			return
				BGl_prezd2makezd2procedurezd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6320));
		}

	}



/* pre-make-procedure-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_77, obj_t BgL_vz00_78)
	{
		{	/* Cfa/cinfo2.sch 518 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_77)))->BgL_argsz00) =
				((obj_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &pre-make-procedure-app-args-set! */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6321, obj_t BgL_oz00_6322, obj_t BgL_vz00_6323)
	{
		{	/* Cfa/cinfo2.sch 518 */
			return
				BGl_prezd2makezd2procedurezd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6322), BgL_vz00_6323);
		}

	}



/* pre-make-procedure-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2makezd2procedurezd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_79)
	{
		{	/* Cfa/cinfo2.sch 519 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_79)))->BgL_funz00);
		}

	}



/* &pre-make-procedure-app-fun */
	BgL_varz00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6324, obj_t BgL_oz00_6325)
	{
		{	/* Cfa/cinfo2.sch 519 */
			return
				BGl_prezd2makezd2procedurezd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6325));
		}

	}



/* pre-make-procedure-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_80, BgL_varz00_bglt BgL_vz00_81)
	{
		{	/* Cfa/cinfo2.sch 520 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_80)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_81), BUNSPEC);
		}

	}



/* &pre-make-procedure-app-fun-set! */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6326, obj_t BgL_oz00_6327, obj_t BgL_vz00_6328)
	{
		{	/* Cfa/cinfo2.sch 520 */
			return
				BGl_prezd2makezd2procedurezd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6327), ((BgL_varz00_bglt) BgL_vz00_6328));
		}

	}



/* pre-make-procedure-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_82)
	{
		{	/* Cfa/cinfo2.sch 521 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_82)))->BgL_keyz00);
		}

	}



/* &pre-make-procedure-app-key */
	obj_t BGl_z62prezd2makezd2procedurezd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_6329, obj_t BgL_oz00_6330)
	{
		{	/* Cfa/cinfo2.sch 521 */
			return
				BGl_prezd2makezd2procedurezd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6330));
		}

	}



/* pre-make-procedure-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_83, obj_t BgL_vz00_84)
	{
		{	/* Cfa/cinfo2.sch 522 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_83)))->BgL_keyz00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &pre-make-procedure-app-key-set! */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6331, obj_t BgL_oz00_6332, obj_t BgL_vz00_6333)
	{
		{	/* Cfa/cinfo2.sch 522 */
			return
				BGl_prezd2makezd2procedurezd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6332), BgL_vz00_6333);
		}

	}



/* pre-make-procedure-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_85)
	{
		{	/* Cfa/cinfo2.sch 523 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_85)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-make-procedure-app-side-effect */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6334, obj_t BgL_oz00_6335)
	{
		{	/* Cfa/cinfo2.sch 523 */
			return
				BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6335));
		}

	}



/* pre-make-procedure-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_86, obj_t BgL_vz00_87)
	{
		{	/* Cfa/cinfo2.sch 524 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_86)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &pre-make-procedure-app-side-effect-set! */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_6336, obj_t BgL_oz00_6337, obj_t BgL_vz00_6338)
	{
		{	/* Cfa/cinfo2.sch 524 */
			return
				BGl_prezd2makezd2procedurezd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
				(((BgL_appz00_bglt) BgL_oz00_6337), BgL_vz00_6338);
		}

	}



/* pre-make-procedure-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2makezd2procedurezd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_88)
	{
		{	/* Cfa/cinfo2.sch 525 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_88)))->BgL_typez00);
		}

	}



/* &pre-make-procedure-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2makezd2procedurezd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6339, obj_t BgL_oz00_6340)
	{
		{	/* Cfa/cinfo2.sch 525 */
			return
				BGl_prezd2makezd2procedurezd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6340));
		}

	}



/* pre-make-procedure-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_89, BgL_typez00_bglt BgL_vz00_90)
	{
		{	/* Cfa/cinfo2.sch 526 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_89)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_90), BUNSPEC);
		}

	}



/* &pre-make-procedure-app-type-set! */
	obj_t
		BGl_z62prezd2makezd2procedurezd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6341, obj_t BgL_oz00_6342, obj_t BgL_vz00_6343)
	{
		{	/* Cfa/cinfo2.sch 526 */
			return
				BGl_prezd2makezd2procedurezd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6342), ((BgL_typez00_bglt) BgL_vz00_6343));
		}

	}



/* pre-make-procedure-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2procedurezd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_91)
	{
		{	/* Cfa/cinfo2.sch 527 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_91)))->BgL_locz00);
		}

	}



/* &pre-make-procedure-app-loc */
	obj_t BGl_z62prezd2makezd2procedurezd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_6344, obj_t BgL_oz00_6345)
	{
		{	/* Cfa/cinfo2.sch 527 */
			return
				BGl_prezd2makezd2procedurezd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6345));
		}

	}



/* make-pre-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_loc1612z00_94, BgL_typez00_bglt BgL_type1613z00_95,
		obj_t BgL_sidezd2effect1614zd2_96, obj_t BgL_key1615z00_97,
		BgL_varz00_bglt BgL_fun1616z00_98, obj_t BgL_args1617z00_99)
	{
		{	/* Cfa/cinfo2.sch 531 */
			{	/* Cfa/cinfo2.sch 531 */
				BgL_appz00_bglt BgL_new1476z00_8030;

				{	/* Cfa/cinfo2.sch 531 */
					BgL_appz00_bglt BgL_tmp1474z00_8031;
					BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_wide1475z00_8032;

					{
						BgL_appz00_bglt BgL_auxz00_9363;

						{	/* Cfa/cinfo2.sch 531 */
							BgL_appz00_bglt BgL_new1473z00_8033;

							BgL_new1473z00_8033 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 531 */
								long BgL_arg1941z00_8034;

								{	/* Cfa/cinfo2.sch 531 */
									long BgL_res2809z00_8035;

									BgL_res2809z00_8035 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1941z00_8034 = BgL_res2809z00_8035;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1473z00_8033),
									BgL_arg1941z00_8034);
							}
							{	/* Cfa/cinfo2.sch 531 */
								BgL_objectz00_bglt BgL_tmpz00_9368;

								BgL_tmpz00_9368 = ((BgL_objectz00_bglt) BgL_new1473z00_8033);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9368, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1473z00_8033);
							BgL_auxz00_9363 = BgL_new1473z00_8033;
						}
						BgL_tmp1474z00_8031 = ((BgL_appz00_bglt) BgL_auxz00_9363);
					}
					BgL_wide1475z00_8032 =
						((BgL_prezd2procedurezd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2procedurezd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 531 */
						obj_t BgL_auxz00_9376;
						BgL_objectz00_bglt BgL_tmpz00_9374;

						BgL_auxz00_9376 = ((obj_t) BgL_wide1475z00_8032);
						BgL_tmpz00_9374 = ((BgL_objectz00_bglt) BgL_tmp1474z00_8031);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9374, BgL_auxz00_9376);
					}
					((BgL_objectz00_bglt) BgL_tmp1474z00_8031);
					{	/* Cfa/cinfo2.sch 531 */
						long BgL_arg1940z00_8036;

						{	/* Cfa/cinfo2.sch 531 */
							long BgL_res2810z00_8037;

							BgL_res2810z00_8037 =
								BGL_CLASS_INDEX
								(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
							BgL_arg1940z00_8036 = BgL_res2810z00_8037;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1474z00_8031), BgL_arg1940z00_8036);
					}
					BgL_new1476z00_8030 = ((BgL_appz00_bglt) BgL_tmp1474z00_8031);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1476z00_8030)))->BgL_locz00) =
					((obj_t) BgL_loc1612z00_94), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1476z00_8030)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1613z00_95), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1476z00_8030)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1614zd2_96), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1476z00_8030)))->BgL_keyz00) =
					((obj_t) BgL_key1615z00_97), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1476z00_8030)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1616z00_98), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1476z00_8030)))->
						BgL_argsz00) = ((obj_t) BgL_args1617z00_99), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1476z00_8030)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1476z00_8030;
			}
		}

	}



/* &make-pre-procedure-ref-app */
	BgL_appz00_bglt
		BGl_z62makezd2prezd2procedurezd2refzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6346, obj_t BgL_loc1612z00_6347, obj_t BgL_type1613z00_6348,
		obj_t BgL_sidezd2effect1614zd2_6349, obj_t BgL_key1615z00_6350,
		obj_t BgL_fun1616z00_6351, obj_t BgL_args1617z00_6352)
	{
		{	/* Cfa/cinfo2.sch 531 */
			return
				BGl_makezd2prezd2procedurezd2refzd2appz00zzcfa_info2z00
				(BgL_loc1612z00_6347, ((BgL_typez00_bglt) BgL_type1613z00_6348),
				BgL_sidezd2effect1614zd2_6349, BgL_key1615z00_6350,
				((BgL_varz00_bglt) BgL_fun1616z00_6351), BgL_args1617z00_6352);
		}

	}



/* pre-procedure-ref-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00(obj_t BgL_objz00_100)
	{
		{	/* Cfa/cinfo2.sch 532 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_100,
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-procedure-ref-app? */
	obj_t BGl_z62prezd2procedurezd2refzd2appzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_6353, obj_t BgL_objz00_6354)
	{
		{	/* Cfa/cinfo2.sch 532 */
			return
				BBOOL(BGl_prezd2procedurezd2refzd2appzf3z21zzcfa_info2z00
				(BgL_objz00_6354));
		}

	}



/* pre-procedure-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 533 */
			{	/* Cfa/cinfo2.sch 533 */
				obj_t BgL_classz00_4795;

				BgL_classz00_4795 = BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 533 */
					obj_t BgL__ortest_1106z00_4796;

					BgL__ortest_1106z00_4796 = BGL_CLASS_NIL(BgL_classz00_4795);
					if (CBOOL(BgL__ortest_1106z00_4796))
						{	/* Cfa/cinfo2.sch 533 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4796);
						}
					else
						{	/* Cfa/cinfo2.sch 533 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4795));
						}
				}
			}
		}

	}



/* &pre-procedure-ref-app-nil */
	BgL_appz00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6355)
	{
		{	/* Cfa/cinfo2.sch 533 */
			return BGl_prezd2procedurezd2refzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-procedure-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_101)
	{
		{	/* Cfa/cinfo2.sch 534 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_101)))->BgL_argsz00);
		}

	}



/* &pre-procedure-ref-app-args */
	obj_t BGl_z62prezd2procedurezd2refzd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_6356, obj_t BgL_oz00_6357)
	{
		{	/* Cfa/cinfo2.sch 534 */
			return
				BGl_prezd2procedurezd2refzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6357));
		}

	}



/* pre-procedure-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_102, obj_t BgL_vz00_103)
	{
		{	/* Cfa/cinfo2.sch 535 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_102)))->BgL_argsz00) =
				((obj_t) BgL_vz00_103), BUNSPEC);
		}

	}



/* &pre-procedure-ref-app-args-set! */
	obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6358, obj_t BgL_oz00_6359, obj_t BgL_vz00_6360)
	{
		{	/* Cfa/cinfo2.sch 535 */
			return
				BGl_prezd2procedurezd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6359), BgL_vz00_6360);
		}

	}



/* pre-procedure-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2procedurezd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_104)
	{
		{	/* Cfa/cinfo2.sch 536 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_104)))->BgL_funz00);
		}

	}



/* &pre-procedure-ref-app-fun */
	BgL_varz00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6361, obj_t BgL_oz00_6362)
	{
		{	/* Cfa/cinfo2.sch 536 */
			return
				BGl_prezd2procedurezd2refzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6362));
		}

	}



/* pre-procedure-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_105, BgL_varz00_bglt BgL_vz00_106)
	{
		{	/* Cfa/cinfo2.sch 537 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_105)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_106), BUNSPEC);
		}

	}



/* &pre-procedure-ref-app-fun-set! */
	obj_t BGl_z62prezd2procedurezd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6363, obj_t BgL_oz00_6364, obj_t BgL_vz00_6365)
	{
		{	/* Cfa/cinfo2.sch 537 */
			return
				BGl_prezd2procedurezd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6364), ((BgL_varz00_bglt) BgL_vz00_6365));
		}

	}



/* pre-procedure-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_107)
	{
		{	/* Cfa/cinfo2.sch 538 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_107)))->BgL_keyz00);
		}

	}



/* &pre-procedure-ref-app-key */
	obj_t BGl_z62prezd2procedurezd2refzd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_6366, obj_t BgL_oz00_6367)
	{
		{	/* Cfa/cinfo2.sch 538 */
			return
				BGl_prezd2procedurezd2refzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6367));
		}

	}



/* pre-procedure-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_108, obj_t BgL_vz00_109)
	{
		{	/* Cfa/cinfo2.sch 539 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_108)))->BgL_keyz00) =
				((obj_t) BgL_vz00_109), BUNSPEC);
		}

	}



/* &pre-procedure-ref-app-key-set! */
	obj_t BGl_z62prezd2procedurezd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6368, obj_t BgL_oz00_6369, obj_t BgL_vz00_6370)
	{
		{	/* Cfa/cinfo2.sch 539 */
			return
				BGl_prezd2procedurezd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6369), BgL_vz00_6370);
		}

	}



/* pre-procedure-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_110)
	{
		{	/* Cfa/cinfo2.sch 540 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_110)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-procedure-ref-app-side-effect */
	obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6371, obj_t BgL_oz00_6372)
	{
		{	/* Cfa/cinfo2.sch 540 */
			return
				BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6372));
		}

	}



/* pre-procedure-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_111, obj_t BgL_vz00_112)
	{
		{	/* Cfa/cinfo2.sch 541 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_111)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_112), BUNSPEC);
		}

	}



/* &pre-procedure-ref-app-side-effect-set! */
	obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_6373, obj_t BgL_oz00_6374, obj_t BgL_vz00_6375)
	{
		{	/* Cfa/cinfo2.sch 541 */
			return
				BGl_prezd2procedurezd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
				(((BgL_appz00_bglt) BgL_oz00_6374), BgL_vz00_6375);
		}

	}



/* pre-procedure-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2procedurezd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_113)
	{
		{	/* Cfa/cinfo2.sch 542 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_113)))->BgL_typez00);
		}

	}



/* &pre-procedure-ref-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2procedurezd2refzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6376, obj_t BgL_oz00_6377)
	{
		{	/* Cfa/cinfo2.sch 542 */
			return
				BGl_prezd2procedurezd2refzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6377));
		}

	}



/* pre-procedure-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_114, BgL_typez00_bglt BgL_vz00_115)
	{
		{	/* Cfa/cinfo2.sch 543 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_114)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_115), BUNSPEC);
		}

	}



/* &pre-procedure-ref-app-type-set! */
	obj_t
		BGl_z62prezd2procedurezd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6378, obj_t BgL_oz00_6379, obj_t BgL_vz00_6380)
	{
		{	/* Cfa/cinfo2.sch 543 */
			return
				BGl_prezd2procedurezd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6379), ((BgL_typez00_bglt) BgL_vz00_6380));
		}

	}



/* pre-procedure-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_116)
	{
		{	/* Cfa/cinfo2.sch 544 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_116)))->BgL_locz00);
		}

	}



/* &pre-procedure-ref-app-loc */
	obj_t BGl_z62prezd2procedurezd2refzd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_6381, obj_t BgL_oz00_6382)
	{
		{	/* Cfa/cinfo2.sch 544 */
			return
				BGl_prezd2procedurezd2refzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6382));
		}

	}



/* make-pre-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_loc1605z00_119, BgL_typez00_bglt BgL_type1606z00_120,
		obj_t BgL_sidezd2effect1607zd2_121, obj_t BgL_key1608z00_122,
		BgL_varz00_bglt BgL_fun1609z00_123, obj_t BgL_args1610z00_124)
	{
		{	/* Cfa/cinfo2.sch 548 */
			{	/* Cfa/cinfo2.sch 548 */
				BgL_appz00_bglt BgL_new1480z00_8038;

				{	/* Cfa/cinfo2.sch 548 */
					BgL_appz00_bglt BgL_tmp1478z00_8039;
					BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_wide1479z00_8040;

					{
						BgL_appz00_bglt BgL_auxz00_9457;

						{	/* Cfa/cinfo2.sch 548 */
							BgL_appz00_bglt BgL_new1477z00_8041;

							BgL_new1477z00_8041 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 548 */
								long BgL_arg1943z00_8042;

								{	/* Cfa/cinfo2.sch 548 */
									long BgL_res2811z00_8043;

									BgL_res2811z00_8043 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1943z00_8042 = BgL_res2811z00_8043;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1477z00_8041),
									BgL_arg1943z00_8042);
							}
							{	/* Cfa/cinfo2.sch 548 */
								BgL_objectz00_bglt BgL_tmpz00_9462;

								BgL_tmpz00_9462 = ((BgL_objectz00_bglt) BgL_new1477z00_8041);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9462, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1477z00_8041);
							BgL_auxz00_9457 = BgL_new1477z00_8041;
						}
						BgL_tmp1478z00_8039 = ((BgL_appz00_bglt) BgL_auxz00_9457);
					}
					BgL_wide1479z00_8040 =
						((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2procedurezd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.sch 548 */
						obj_t BgL_auxz00_9470;
						BgL_objectz00_bglt BgL_tmpz00_9468;

						BgL_auxz00_9470 = ((obj_t) BgL_wide1479z00_8040);
						BgL_tmpz00_9468 = ((BgL_objectz00_bglt) BgL_tmp1478z00_8039);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9468, BgL_auxz00_9470);
					}
					((BgL_objectz00_bglt) BgL_tmp1478z00_8039);
					{	/* Cfa/cinfo2.sch 548 */
						long BgL_arg1942z00_8044;

						{	/* Cfa/cinfo2.sch 548 */
							long BgL_res2812z00_8045;

							BgL_res2812z00_8045 =
								BGL_CLASS_INDEX
								(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg1942z00_8044 = BgL_res2812z00_8045;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1478z00_8039), BgL_arg1942z00_8044);
					}
					BgL_new1480z00_8038 = ((BgL_appz00_bglt) BgL_tmp1478z00_8039);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1480z00_8038)))->BgL_locz00) =
					((obj_t) BgL_loc1605z00_119), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1480z00_8038)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1606z00_120), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1480z00_8038)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1607zd2_121), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1480z00_8038)))->BgL_keyz00) =
					((obj_t) BgL_key1608z00_122), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1480z00_8038)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1609z00_123), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1480z00_8038)))->
						BgL_argsz00) = ((obj_t) BgL_args1610z00_124), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1480z00_8038)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1480z00_8038;
			}
		}

	}



/* &make-pre-procedure-set!-app */
	BgL_appz00_bglt
		BGl_z62makezd2prezd2procedurezd2setz12zd2appz70zzcfa_info2z00(obj_t
		BgL_envz00_6383, obj_t BgL_loc1605z00_6384, obj_t BgL_type1606z00_6385,
		obj_t BgL_sidezd2effect1607zd2_6386, obj_t BgL_key1608z00_6387,
		obj_t BgL_fun1609z00_6388, obj_t BgL_args1610z00_6389)
	{
		{	/* Cfa/cinfo2.sch 548 */
			return
				BGl_makezd2prezd2procedurezd2setz12zd2appz12zzcfa_info2z00
				(BgL_loc1605z00_6384, ((BgL_typez00_bglt) BgL_type1606z00_6385),
				BgL_sidezd2effect1607zd2_6386, BgL_key1608z00_6387,
				((BgL_varz00_bglt) BgL_fun1609z00_6388), BgL_args1610z00_6389);
		}

	}



/* pre-procedure-set!-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00(obj_t BgL_objz00_125)
	{
		{	/* Cfa/cinfo2.sch 549 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_125,
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
		}

	}



/* &pre-procedure-set!-app? */
	obj_t BGl_z62prezd2procedurezd2setz12zd2appzf3z51zzcfa_info2z00(obj_t
		BgL_envz00_6390, obj_t BgL_objz00_6391)
	{
		{	/* Cfa/cinfo2.sch 549 */
			return
				BBOOL(BGl_prezd2procedurezd2setz12zd2appzf3z33zzcfa_info2z00
				(BgL_objz00_6391));
		}

	}



/* pre-procedure-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 550 */
			{	/* Cfa/cinfo2.sch 550 */
				obj_t BgL_classz00_4813;

				BgL_classz00_4813 = BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 550 */
					obj_t BgL__ortest_1106z00_4814;

					BgL__ortest_1106z00_4814 = BGL_CLASS_NIL(BgL_classz00_4813);
					if (CBOOL(BgL__ortest_1106z00_4814))
						{	/* Cfa/cinfo2.sch 550 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4814);
						}
					else
						{	/* Cfa/cinfo2.sch 550 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4813));
						}
				}
			}
		}

	}



/* &pre-procedure-set!-app-nil */
	BgL_appz00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t
		BgL_envz00_6392)
	{
		{	/* Cfa/cinfo2.sch 550 */
			return BGl_prezd2procedurezd2setz12zd2appzd2nilz12zzcfa_info2z00();
		}

	}



/* pre-procedure-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_126)
	{
		{	/* Cfa/cinfo2.sch 551 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_126)))->BgL_argsz00);
		}

	}



/* &pre-procedure-set!-app-args */
	obj_t BGl_z62prezd2procedurezd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t
		BgL_envz00_6393, obj_t BgL_oz00_6394)
	{
		{	/* Cfa/cinfo2.sch 551 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2argsz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6394));
		}

	}



/* pre-procedure-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_127, obj_t BgL_vz00_128)
	{
		{	/* Cfa/cinfo2.sch 552 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_127)))->BgL_argsz00) =
				((obj_t) BgL_vz00_128), BUNSPEC);
		}

	}



/* &pre-procedure-set!-app-args-set! */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6395, obj_t BgL_oz00_6396, obj_t BgL_vz00_6397)
	{
		{	/* Cfa/cinfo2.sch 552 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6396), BgL_vz00_6397);
		}

	}



/* pre-procedure-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_129)
	{
		{	/* Cfa/cinfo2.sch 553 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_129)))->BgL_funz00);
		}

	}



/* &pre-procedure-set!-app-fun */
	BgL_varz00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t
		BgL_envz00_6398, obj_t BgL_oz00_6399)
	{
		{	/* Cfa/cinfo2.sch 553 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2funz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6399));
		}

	}



/* pre-procedure-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_130, BgL_varz00_bglt BgL_vz00_131)
	{
		{	/* Cfa/cinfo2.sch 554 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_130)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_131), BUNSPEC);
		}

	}



/* &pre-procedure-set!-app-fun-set! */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6400, obj_t BgL_oz00_6401, obj_t BgL_vz00_6402)
	{
		{	/* Cfa/cinfo2.sch 554 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6401), ((BgL_varz00_bglt) BgL_vz00_6402));
		}

	}



/* pre-procedure-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_132)
	{
		{	/* Cfa/cinfo2.sch 555 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_132)))->BgL_keyz00);
		}

	}



/* &pre-procedure-set!-app-key */
	obj_t BGl_z62prezd2procedurezd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t
		BgL_envz00_6403, obj_t BgL_oz00_6404)
	{
		{	/* Cfa/cinfo2.sch 555 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2keyz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6404));
		}

	}



/* pre-procedure-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_133, obj_t BgL_vz00_134)
	{
		{	/* Cfa/cinfo2.sch 556 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_133)))->BgL_keyz00) =
				((obj_t) BgL_vz00_134), BUNSPEC);
		}

	}



/* &pre-procedure-set!-app-key-set! */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6405, obj_t BgL_oz00_6406, obj_t BgL_vz00_6407)
	{
		{	/* Cfa/cinfo2.sch 556 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6406), BgL_vz00_6407);
		}

	}



/* pre-procedure-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_135)
	{
		{	/* Cfa/cinfo2.sch 557 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_135)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-procedure-set!-app-side-effect */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00(obj_t
		BgL_envz00_6408, obj_t BgL_oz00_6409)
	{
		{	/* Cfa/cinfo2.sch 557 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6409));
		}

	}



/* pre-procedure-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_136, obj_t BgL_vz00_137)
	{
		{	/* Cfa/cinfo2.sch 558 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_136)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_137), BUNSPEC);
		}

	}



/* &pre-procedure-set!-app-side-effect-set! */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t BgL_envz00_6410, obj_t BgL_oz00_6411, obj_t BgL_vz00_6412)
	{
		{	/* Cfa/cinfo2.sch 558 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
				(((BgL_appz00_bglt) BgL_oz00_6411), BgL_vz00_6412);
		}

	}



/* pre-procedure-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2procedurezd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_138)
	{
		{	/* Cfa/cinfo2.sch 559 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_138)))->BgL_typez00);
		}

	}



/* &pre-procedure-set!-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2procedurezd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t
		BgL_envz00_6413, obj_t BgL_oz00_6414)
	{
		{	/* Cfa/cinfo2.sch 559 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2typez12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6414));
		}

	}



/* pre-procedure-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_139, BgL_typez00_bglt BgL_vz00_140)
	{
		{	/* Cfa/cinfo2.sch 560 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_139)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_140), BUNSPEC);
		}

	}



/* &pre-procedure-set!-app-type-set! */
	obj_t
		BGl_z62prezd2procedurezd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6415, obj_t BgL_oz00_6416, obj_t BgL_vz00_6417)
	{
		{	/* Cfa/cinfo2.sch 560 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6416), ((BgL_typez00_bglt) BgL_vz00_6417));
		}

	}



/* pre-procedure-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2procedurezd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_141)
	{
		{	/* Cfa/cinfo2.sch 561 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_141)))->BgL_locz00);
		}

	}



/* &pre-procedure-set!-app-loc */
	obj_t BGl_z62prezd2procedurezd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t
		BgL_envz00_6418, obj_t BgL_oz00_6419)
	{
		{	/* Cfa/cinfo2.sch 561 */
			return
				BGl_prezd2procedurezd2setz12zd2appzd2locz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6419));
		}

	}



/* make-make-procedure-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00(obj_t BgL_loc1590z00_144,
		BgL_typez00_bglt BgL_type1591z00_145, obj_t BgL_sidezd2effect1592zd2_146,
		obj_t BgL_key1593z00_147, BgL_varz00_bglt BgL_fun1594z00_148,
		obj_t BgL_args1595z00_149, BgL_approxz00_bglt BgL_approx1596z00_150,
		obj_t BgL_valueszd2approx1597zd2_151, long BgL_lostzd2stamp1598zd2_152,
		bool_t BgL_xzd2tzf31599z21_153, bool_t BgL_x1600z00_154,
		bool_t BgL_t1601z00_155, BgL_variablez00_bglt BgL_owner1602z00_156,
		obj_t BgL_stackzd2stamp1603zd2_157)
	{
		{	/* Cfa/cinfo2.sch 565 */
			{	/* Cfa/cinfo2.sch 565 */
				BgL_appz00_bglt BgL_new1484z00_8046;

				{	/* Cfa/cinfo2.sch 565 */
					BgL_appz00_bglt BgL_tmp1482z00_8047;
					BgL_makezd2procedurezd2appz00_bglt BgL_wide1483z00_8048;

					{
						BgL_appz00_bglt BgL_auxz00_9551;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_appz00_bglt BgL_new1481z00_8049;

							BgL_new1481z00_8049 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 565 */
								long BgL_arg1945z00_8050;

								{	/* Cfa/cinfo2.sch 565 */
									long BgL_res2813z00_8051;

									BgL_res2813z00_8051 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1945z00_8050 = BgL_res2813z00_8051;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1481z00_8049),
									BgL_arg1945z00_8050);
							}
							{	/* Cfa/cinfo2.sch 565 */
								BgL_objectz00_bglt BgL_tmpz00_9556;

								BgL_tmpz00_9556 = ((BgL_objectz00_bglt) BgL_new1481z00_8049);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9556, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1481z00_8049);
							BgL_auxz00_9551 = BgL_new1481z00_8049;
						}
						BgL_tmp1482z00_8047 = ((BgL_appz00_bglt) BgL_auxz00_9551);
					}
					BgL_wide1483z00_8048 =
						((BgL_makezd2procedurezd2appz00_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2procedurezd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 565 */
						obj_t BgL_auxz00_9564;
						BgL_objectz00_bglt BgL_tmpz00_9562;

						BgL_auxz00_9564 = ((obj_t) BgL_wide1483z00_8048);
						BgL_tmpz00_9562 = ((BgL_objectz00_bglt) BgL_tmp1482z00_8047);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9562, BgL_auxz00_9564);
					}
					((BgL_objectz00_bglt) BgL_tmp1482z00_8047);
					{	/* Cfa/cinfo2.sch 565 */
						long BgL_arg1944z00_8052;

						{	/* Cfa/cinfo2.sch 565 */
							long BgL_res2814z00_8053;

							BgL_res2814z00_8053 =
								BGL_CLASS_INDEX(BGl_makezd2procedurezd2appz00zzcfa_info2z00);
							BgL_arg1944z00_8052 = BgL_res2814z00_8053;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1482z00_8047), BgL_arg1944z00_8052);
					}
					BgL_new1484z00_8046 = ((BgL_appz00_bglt) BgL_tmp1482z00_8047);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1484z00_8046)))->BgL_locz00) =
					((obj_t) BgL_loc1590z00_144), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1484z00_8046)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1591z00_145), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1484z00_8046)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1592zd2_146), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1484z00_8046)))->BgL_keyz00) =
					((obj_t) BgL_key1593z00_147), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1484z00_8046)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1594z00_148), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1484z00_8046)))->
						BgL_argsz00) = ((obj_t) BgL_args1595z00_149), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1484z00_8046)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9586;

					{
						obj_t BgL_auxz00_9587;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9588;

							BgL_tmpz00_9588 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9587 = BGL_OBJECT_WIDENING(BgL_tmpz00_9588);
						}
						BgL_auxz00_9586 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9587);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9586))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1596z00_150), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9593;

					{
						obj_t BgL_auxz00_9594;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9595;

							BgL_tmpz00_9595 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9594 = BGL_OBJECT_WIDENING(BgL_tmpz00_9595);
						}
						BgL_auxz00_9593 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9594);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9593))->
							BgL_valueszd2approxzd2) =
						((obj_t) BgL_valueszd2approx1597zd2_151), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9600;

					{
						obj_t BgL_auxz00_9601;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9602;

							BgL_tmpz00_9602 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9601 = BGL_OBJECT_WIDENING(BgL_tmpz00_9602);
						}
						BgL_auxz00_9600 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9601);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9600))->
							BgL_lostzd2stampzd2) =
						((long) BgL_lostzd2stamp1598zd2_152), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9607;

					{
						obj_t BgL_auxz00_9608;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9609;

							BgL_tmpz00_9609 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9608 = BGL_OBJECT_WIDENING(BgL_tmpz00_9609);
						}
						BgL_auxz00_9607 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9608);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9607))->
							BgL_xzd2tzf3z21) = ((bool_t) BgL_xzd2tzf31599z21_153), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9614;

					{
						obj_t BgL_auxz00_9615;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9616;

							BgL_tmpz00_9616 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9615 = BGL_OBJECT_WIDENING(BgL_tmpz00_9616);
						}
						BgL_auxz00_9614 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9615);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9614))->
							BgL_xz00) = ((bool_t) BgL_x1600z00_154), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9621;

					{
						obj_t BgL_auxz00_9622;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9623;

							BgL_tmpz00_9623 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9622 = BGL_OBJECT_WIDENING(BgL_tmpz00_9623);
						}
						BgL_auxz00_9621 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9622);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9621))->
							BgL_tz00) = ((bool_t) BgL_t1601z00_155), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9628;

					{
						obj_t BgL_auxz00_9629;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9630;

							BgL_tmpz00_9630 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9629 = BGL_OBJECT_WIDENING(BgL_tmpz00_9630);
						}
						BgL_auxz00_9628 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9629);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9628))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1602z00_156), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9635;

					{
						obj_t BgL_auxz00_9636;

						{	/* Cfa/cinfo2.sch 565 */
							BgL_objectz00_bglt BgL_tmpz00_9637;

							BgL_tmpz00_9637 = ((BgL_objectz00_bglt) BgL_new1484z00_8046);
							BgL_auxz00_9636 = BGL_OBJECT_WIDENING(BgL_tmpz00_9637);
						}
						BgL_auxz00_9635 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9636);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9635))->
							BgL_stackzd2stampzd2) =
						((obj_t) BgL_stackzd2stamp1603zd2_157), BUNSPEC);
				}
				return BgL_new1484z00_8046;
			}
		}

	}



/* &make-make-procedure-app */
	BgL_appz00_bglt BGl_z62makezd2makezd2procedurezd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6420, obj_t BgL_loc1590z00_6421, obj_t BgL_type1591z00_6422,
		obj_t BgL_sidezd2effect1592zd2_6423, obj_t BgL_key1593z00_6424,
		obj_t BgL_fun1594z00_6425, obj_t BgL_args1595z00_6426,
		obj_t BgL_approx1596z00_6427, obj_t BgL_valueszd2approx1597zd2_6428,
		obj_t BgL_lostzd2stamp1598zd2_6429, obj_t BgL_xzd2tzf31599z21_6430,
		obj_t BgL_x1600z00_6431, obj_t BgL_t1601z00_6432,
		obj_t BgL_owner1602z00_6433, obj_t BgL_stackzd2stamp1603zd2_6434)
	{
		{	/* Cfa/cinfo2.sch 565 */
			return
				BGl_makezd2makezd2procedurezd2appzd2zzcfa_info2z00(BgL_loc1590z00_6421,
				((BgL_typez00_bglt) BgL_type1591z00_6422),
				BgL_sidezd2effect1592zd2_6423, BgL_key1593z00_6424,
				((BgL_varz00_bglt) BgL_fun1594z00_6425), BgL_args1595z00_6426,
				((BgL_approxz00_bglt) BgL_approx1596z00_6427),
				BgL_valueszd2approx1597zd2_6428,
				(long) CINT(BgL_lostzd2stamp1598zd2_6429),
				CBOOL(BgL_xzd2tzf31599z21_6430), CBOOL(BgL_x1600z00_6431),
				CBOOL(BgL_t1601z00_6432),
				((BgL_variablez00_bglt) BgL_owner1602z00_6433),
				BgL_stackzd2stamp1603zd2_6434);
		}

	}



/* make-procedure-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2procedurezd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_158)
	{
		{	/* Cfa/cinfo2.sch 566 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_158,
				BGl_makezd2procedurezd2appz00zzcfa_info2z00);
		}

	}



/* &make-procedure-app? */
	obj_t BGl_z62makezd2procedurezd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6435,
		obj_t BgL_objz00_6436)
	{
		{	/* Cfa/cinfo2.sch 566 */
			return
				BBOOL(BGl_makezd2procedurezd2appzf3zf3zzcfa_info2z00(BgL_objz00_6436));
		}

	}



/* make-procedure-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 567 */
			{	/* Cfa/cinfo2.sch 567 */
				obj_t BgL_classz00_4839;

				BgL_classz00_4839 = BGl_makezd2procedurezd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 567 */
					obj_t BgL__ortest_1106z00_4840;

					BgL__ortest_1106z00_4840 = BGL_CLASS_NIL(BgL_classz00_4839);
					if (CBOOL(BgL__ortest_1106z00_4840))
						{	/* Cfa/cinfo2.sch 567 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4840);
						}
					else
						{	/* Cfa/cinfo2.sch 567 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4839));
						}
				}
			}
		}

	}



/* &make-procedure-app-nil */
	BgL_appz00_bglt BGl_z62makezd2procedurezd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6437)
	{
		{	/* Cfa/cinfo2.sch 567 */
			return BGl_makezd2procedurezd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* make-procedure-app-stack-stamp */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2stackzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_159)
	{
		{	/* Cfa/cinfo2.sch 568 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9661;

				{
					obj_t BgL_auxz00_9662;

					{	/* Cfa/cinfo2.sch 568 */
						BgL_objectz00_bglt BgL_tmpz00_9663;

						BgL_tmpz00_9663 = ((BgL_objectz00_bglt) BgL_oz00_159);
						BgL_auxz00_9662 = BGL_OBJECT_WIDENING(BgL_tmpz00_9663);
					}
					BgL_auxz00_9661 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9662);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9661))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &make-procedure-app-stack-stamp */
	obj_t BGl_z62makezd2procedurezd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_6438, obj_t BgL_oz00_6439)
	{
		{	/* Cfa/cinfo2.sch 568 */
			return
				BGl_makezd2procedurezd2appzd2stackzd2stampz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6439));
		}

	}



/* make-procedure-app-stack-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_160, obj_t BgL_vz00_161)
	{
		{	/* Cfa/cinfo2.sch 569 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9670;

				{
					obj_t BgL_auxz00_9671;

					{	/* Cfa/cinfo2.sch 569 */
						BgL_objectz00_bglt BgL_tmpz00_9672;

						BgL_tmpz00_9672 = ((BgL_objectz00_bglt) BgL_oz00_160);
						BgL_auxz00_9671 = BGL_OBJECT_WIDENING(BgL_tmpz00_9672);
					}
					BgL_auxz00_9670 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9671);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9670))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_161), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-stack-stamp-set! */
	obj_t
		BGl_z62makezd2procedurezd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00
		(obj_t BgL_envz00_6440, obj_t BgL_oz00_6441, obj_t BgL_vz00_6442)
	{
		{	/* Cfa/cinfo2.sch 569 */
			return
				BGl_makezd2procedurezd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6441), BgL_vz00_6442);
		}

	}



/* make-procedure-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_makezd2procedurezd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_162)
	{
		{	/* Cfa/cinfo2.sch 570 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9679;

				{
					obj_t BgL_auxz00_9680;

					{	/* Cfa/cinfo2.sch 570 */
						BgL_objectz00_bglt BgL_tmpz00_9681;

						BgL_tmpz00_9681 = ((BgL_objectz00_bglt) BgL_oz00_162);
						BgL_auxz00_9680 = BGL_OBJECT_WIDENING(BgL_tmpz00_9681);
					}
					BgL_auxz00_9679 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9680);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9679))->
					BgL_ownerz00);
			}
		}

	}



/* &make-procedure-app-owner */
	BgL_variablez00_bglt
		BGl_z62makezd2procedurezd2appzd2ownerzb0zzcfa_info2z00(obj_t
		BgL_envz00_6443, obj_t BgL_oz00_6444)
	{
		{	/* Cfa/cinfo2.sch 570 */
			return
				BGl_makezd2procedurezd2appzd2ownerzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6444));
		}

	}



/* make-procedure-app-T */
	BGL_EXPORTED_DEF bool_t
		BGl_makezd2procedurezd2appzd2Tzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_165)
	{
		{	/* Cfa/cinfo2.sch 572 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9688;

				{
					obj_t BgL_auxz00_9689;

					{	/* Cfa/cinfo2.sch 572 */
						BgL_objectz00_bglt BgL_tmpz00_9690;

						BgL_tmpz00_9690 = ((BgL_objectz00_bglt) BgL_oz00_165);
						BgL_auxz00_9689 = BGL_OBJECT_WIDENING(BgL_tmpz00_9690);
					}
					BgL_auxz00_9688 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9689);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9688))->
					BgL_tz00);
			}
		}

	}



/* &make-procedure-app-T */
	obj_t BGl_z62makezd2procedurezd2appzd2Tzb0zzcfa_info2z00(obj_t
		BgL_envz00_6445, obj_t BgL_oz00_6446)
	{
		{	/* Cfa/cinfo2.sch 572 */
			return
				BBOOL(BGl_makezd2procedurezd2appzd2Tzd2zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6446)));
		}

	}



/* make-procedure-app-T-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2Tzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_166, bool_t BgL_vz00_167)
	{
		{	/* Cfa/cinfo2.sch 573 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9698;

				{
					obj_t BgL_auxz00_9699;

					{	/* Cfa/cinfo2.sch 573 */
						BgL_objectz00_bglt BgL_tmpz00_9700;

						BgL_tmpz00_9700 = ((BgL_objectz00_bglt) BgL_oz00_166);
						BgL_auxz00_9699 = BGL_OBJECT_WIDENING(BgL_tmpz00_9700);
					}
					BgL_auxz00_9698 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9699);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9698))->
						BgL_tz00) = ((bool_t) BgL_vz00_167), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-T-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2Tzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6447, obj_t BgL_oz00_6448, obj_t BgL_vz00_6449)
	{
		{	/* Cfa/cinfo2.sch 573 */
			return
				BGl_makezd2procedurezd2appzd2Tzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6448), CBOOL(BgL_vz00_6449));
		}

	}



/* make-procedure-app-X */
	BGL_EXPORTED_DEF bool_t
		BGl_makezd2procedurezd2appzd2Xzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_168)
	{
		{	/* Cfa/cinfo2.sch 574 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9708;

				{
					obj_t BgL_auxz00_9709;

					{	/* Cfa/cinfo2.sch 574 */
						BgL_objectz00_bglt BgL_tmpz00_9710;

						BgL_tmpz00_9710 = ((BgL_objectz00_bglt) BgL_oz00_168);
						BgL_auxz00_9709 = BGL_OBJECT_WIDENING(BgL_tmpz00_9710);
					}
					BgL_auxz00_9708 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9709);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9708))->
					BgL_xz00);
			}
		}

	}



/* &make-procedure-app-X */
	obj_t BGl_z62makezd2procedurezd2appzd2Xzb0zzcfa_info2z00(obj_t
		BgL_envz00_6450, obj_t BgL_oz00_6451)
	{
		{	/* Cfa/cinfo2.sch 574 */
			return
				BBOOL(BGl_makezd2procedurezd2appzd2Xzd2zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6451)));
		}

	}



/* make-procedure-app-X-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2Xzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_169, bool_t BgL_vz00_170)
	{
		{	/* Cfa/cinfo2.sch 575 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9718;

				{
					obj_t BgL_auxz00_9719;

					{	/* Cfa/cinfo2.sch 575 */
						BgL_objectz00_bglt BgL_tmpz00_9720;

						BgL_tmpz00_9720 = ((BgL_objectz00_bglt) BgL_oz00_169);
						BgL_auxz00_9719 = BGL_OBJECT_WIDENING(BgL_tmpz00_9720);
					}
					BgL_auxz00_9718 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9719);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9718))->
						BgL_xz00) = ((bool_t) BgL_vz00_170), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-X-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2Xzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6452, obj_t BgL_oz00_6453, obj_t BgL_vz00_6454)
	{
		{	/* Cfa/cinfo2.sch 575 */
			return
				BGl_makezd2procedurezd2appzd2Xzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6453), CBOOL(BgL_vz00_6454));
		}

	}



/* make-procedure-app-X-T? */
	BGL_EXPORTED_DEF bool_t
		BGl_makezd2procedurezd2appzd2Xzd2Tzf3zf3zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_171)
	{
		{	/* Cfa/cinfo2.sch 576 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9728;

				{
					obj_t BgL_auxz00_9729;

					{	/* Cfa/cinfo2.sch 576 */
						BgL_objectz00_bglt BgL_tmpz00_9730;

						BgL_tmpz00_9730 = ((BgL_objectz00_bglt) BgL_oz00_171);
						BgL_auxz00_9729 = BGL_OBJECT_WIDENING(BgL_tmpz00_9730);
					}
					BgL_auxz00_9728 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9729);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9728))->
					BgL_xzd2tzf3z21);
			}
		}

	}



/* &make-procedure-app-X-T? */
	obj_t BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3z91zzcfa_info2z00(obj_t
		BgL_envz00_6455, obj_t BgL_oz00_6456)
	{
		{	/* Cfa/cinfo2.sch 576 */
			return
				BBOOL(BGl_makezd2procedurezd2appzd2Xzd2Tzf3zf3zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6456)));
		}

	}



/* make-procedure-app-X-T?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z33zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_172, bool_t BgL_vz00_173)
	{
		{	/* Cfa/cinfo2.sch 577 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9738;

				{
					obj_t BgL_auxz00_9739;

					{	/* Cfa/cinfo2.sch 577 */
						BgL_objectz00_bglt BgL_tmpz00_9740;

						BgL_tmpz00_9740 = ((BgL_objectz00_bglt) BgL_oz00_172);
						BgL_auxz00_9739 = BGL_OBJECT_WIDENING(BgL_tmpz00_9740);
					}
					BgL_auxz00_9738 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9739);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9738))->
						BgL_xzd2tzf3z21) = ((bool_t) BgL_vz00_173), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-X-T?-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z51zzcfa_info2z00(obj_t
		BgL_envz00_6457, obj_t BgL_oz00_6458, obj_t BgL_vz00_6459)
	{
		{	/* Cfa/cinfo2.sch 577 */
			return
				BGl_makezd2procedurezd2appzd2Xzd2Tzf3zd2setz12z33zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6458), CBOOL(BgL_vz00_6459));
		}

	}



/* make-procedure-app-lost-stamp */
	BGL_EXPORTED_DEF long
		BGl_makezd2procedurezd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_174)
	{
		{	/* Cfa/cinfo2.sch 578 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9748;

				{
					obj_t BgL_auxz00_9749;

					{	/* Cfa/cinfo2.sch 578 */
						BgL_objectz00_bglt BgL_tmpz00_9750;

						BgL_tmpz00_9750 = ((BgL_objectz00_bglt) BgL_oz00_174);
						BgL_auxz00_9749 = BGL_OBJECT_WIDENING(BgL_tmpz00_9750);
					}
					BgL_auxz00_9748 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9749);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9748))->
					BgL_lostzd2stampzd2);
			}
		}

	}



/* &make-procedure-app-lost-stamp */
	obj_t BGl_z62makezd2procedurezd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_6460, obj_t BgL_oz00_6461)
	{
		{	/* Cfa/cinfo2.sch 578 */
			return
				BINT(BGl_makezd2procedurezd2appzd2lostzd2stampz00zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6461)));
		}

	}



/* make-procedure-app-lost-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_175, long BgL_vz00_176)
	{
		{	/* Cfa/cinfo2.sch 579 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9758;

				{
					obj_t BgL_auxz00_9759;

					{	/* Cfa/cinfo2.sch 579 */
						BgL_objectz00_bglt BgL_tmpz00_9760;

						BgL_tmpz00_9760 = ((BgL_objectz00_bglt) BgL_oz00_175);
						BgL_auxz00_9759 = BGL_OBJECT_WIDENING(BgL_tmpz00_9760);
					}
					BgL_auxz00_9758 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9759);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9758))->
						BgL_lostzd2stampzd2) = ((long) BgL_vz00_176), BUNSPEC);
		}}

	}



/* &make-procedure-app-lost-stamp-set! */
	obj_t
		BGl_z62makezd2procedurezd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6462, obj_t BgL_oz00_6463, obj_t BgL_vz00_6464)
	{
		{	/* Cfa/cinfo2.sch 579 */
			return
				BGl_makezd2procedurezd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6463), (long) CINT(BgL_vz00_6464));
		}

	}



/* make-procedure-app-values-approx */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2valueszd2approxz00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_177)
	{
		{	/* Cfa/cinfo2.sch 580 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9768;

				{
					obj_t BgL_auxz00_9769;

					{	/* Cfa/cinfo2.sch 580 */
						BgL_objectz00_bglt BgL_tmpz00_9770;

						BgL_tmpz00_9770 = ((BgL_objectz00_bglt) BgL_oz00_177);
						BgL_auxz00_9769 = BGL_OBJECT_WIDENING(BgL_tmpz00_9770);
					}
					BgL_auxz00_9768 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9769);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9768))->
					BgL_valueszd2approxzd2);
			}
		}

	}



/* &make-procedure-app-values-approx */
	obj_t BGl_z62makezd2procedurezd2appzd2valueszd2approxz62zzcfa_info2z00(obj_t
		BgL_envz00_6465, obj_t BgL_oz00_6466)
	{
		{	/* Cfa/cinfo2.sch 580 */
			return
				BGl_makezd2procedurezd2appzd2valueszd2approxz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6466));
		}

	}



/* make-procedure-app-values-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2valueszd2approxzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_178, obj_t BgL_vz00_179)
	{
		{	/* Cfa/cinfo2.sch 581 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9777;

				{
					obj_t BgL_auxz00_9778;

					{	/* Cfa/cinfo2.sch 581 */
						BgL_objectz00_bglt BgL_tmpz00_9779;

						BgL_tmpz00_9779 = ((BgL_objectz00_bglt) BgL_oz00_178);
						BgL_auxz00_9778 = BGL_OBJECT_WIDENING(BgL_tmpz00_9779);
					}
					BgL_auxz00_9777 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9778);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9777))->
						BgL_valueszd2approxzd2) = ((obj_t) BgL_vz00_179), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-values-approx-set! */
	obj_t
		BGl_z62makezd2procedurezd2appzd2valueszd2approxzd2setz12za2zzcfa_info2z00
		(obj_t BgL_envz00_6467, obj_t BgL_oz00_6468, obj_t BgL_vz00_6469)
	{
		{	/* Cfa/cinfo2.sch 581 */
			return
				BGl_makezd2procedurezd2appzd2valueszd2approxzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6468), BgL_vz00_6469);
		}

	}



/* make-procedure-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2procedurezd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_180)
	{
		{	/* Cfa/cinfo2.sch 582 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9786;

				{
					obj_t BgL_auxz00_9787;

					{	/* Cfa/cinfo2.sch 582 */
						BgL_objectz00_bglt BgL_tmpz00_9788;

						BgL_tmpz00_9788 = ((BgL_objectz00_bglt) BgL_oz00_180);
						BgL_auxz00_9787 = BGL_OBJECT_WIDENING(BgL_tmpz00_9788);
					}
					BgL_auxz00_9786 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9787);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9786))->
					BgL_approxz00);
			}
		}

	}



/* &make-procedure-app-approx */
	BgL_approxz00_bglt
		BGl_z62makezd2procedurezd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_6470, obj_t BgL_oz00_6471)
	{
		{	/* Cfa/cinfo2.sch 582 */
			return
				BGl_makezd2procedurezd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6471));
		}

	}



/* make-procedure-app-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2approxzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_181, BgL_approxz00_bglt BgL_vz00_182)
	{
		{	/* Cfa/cinfo2.sch 583 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_9795;

				{
					obj_t BgL_auxz00_9796;

					{	/* Cfa/cinfo2.sch 583 */
						BgL_objectz00_bglt BgL_tmpz00_9797;

						BgL_tmpz00_9797 = ((BgL_objectz00_bglt) BgL_oz00_181);
						BgL_auxz00_9796 = BGL_OBJECT_WIDENING(BgL_tmpz00_9797);
					}
					BgL_auxz00_9795 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_9796);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_9795))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_vz00_182), BUNSPEC);
			}
		}

	}



/* &make-procedure-app-approx-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6472, obj_t BgL_oz00_6473, obj_t BgL_vz00_6474)
	{
		{	/* Cfa/cinfo2.sch 583 */
			return
				BGl_makezd2procedurezd2appzd2approxzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6473),
				((BgL_approxz00_bglt) BgL_vz00_6474));
		}

	}



/* make-procedure-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_183)
	{
		{	/* Cfa/cinfo2.sch 584 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_183)))->BgL_argsz00);
		}

	}



/* &make-procedure-app-args */
	obj_t BGl_z62makezd2procedurezd2appzd2argszb0zzcfa_info2z00(obj_t
		BgL_envz00_6475, obj_t BgL_oz00_6476)
	{
		{	/* Cfa/cinfo2.sch 584 */
			return
				BGl_makezd2procedurezd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6476));
		}

	}



/* make-procedure-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_184, obj_t BgL_vz00_185)
	{
		{	/* Cfa/cinfo2.sch 585 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_184)))->BgL_argsz00) =
				((obj_t) BgL_vz00_185), BUNSPEC);
		}

	}



/* &make-procedure-app-args-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6477, obj_t BgL_oz00_6478, obj_t BgL_vz00_6479)
	{
		{	/* Cfa/cinfo2.sch 585 */
			return
				BGl_makezd2procedurezd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6478), BgL_vz00_6479);
		}

	}



/* make-procedure-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_makezd2procedurezd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_186)
	{
		{	/* Cfa/cinfo2.sch 586 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_186)))->BgL_funz00);
		}

	}



/* &make-procedure-app-fun */
	BgL_varz00_bglt BGl_z62makezd2procedurezd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6480, obj_t BgL_oz00_6481)
	{
		{	/* Cfa/cinfo2.sch 586 */
			return
				BGl_makezd2procedurezd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6481));
		}

	}



/* make-procedure-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_187, BgL_varz00_bglt BgL_vz00_188)
	{
		{	/* Cfa/cinfo2.sch 587 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_187)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_188), BUNSPEC);
		}

	}



/* &make-procedure-app-fun-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6482, obj_t BgL_oz00_6483, obj_t BgL_vz00_6484)
	{
		{	/* Cfa/cinfo2.sch 587 */
			return
				BGl_makezd2procedurezd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6483), ((BgL_varz00_bglt) BgL_vz00_6484));
		}

	}



/* make-procedure-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_189)
	{
		{	/* Cfa/cinfo2.sch 588 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_189)))->BgL_keyz00);
		}

	}



/* &make-procedure-app-key */
	obj_t BGl_z62makezd2procedurezd2appzd2keyzb0zzcfa_info2z00(obj_t
		BgL_envz00_6485, obj_t BgL_oz00_6486)
	{
		{	/* Cfa/cinfo2.sch 588 */
			return
				BGl_makezd2procedurezd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6486));
		}

	}



/* make-procedure-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_190, obj_t BgL_vz00_191)
	{
		{	/* Cfa/cinfo2.sch 589 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_190)))->BgL_keyz00) =
				((obj_t) BgL_vz00_191), BUNSPEC);
		}

	}



/* &make-procedure-app-key-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6487, obj_t BgL_oz00_6488, obj_t BgL_vz00_6489)
	{
		{	/* Cfa/cinfo2.sch 589 */
			return
				BGl_makezd2procedurezd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6488), BgL_vz00_6489);
		}

	}



/* make-procedure-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_192)
	{
		{	/* Cfa/cinfo2.sch 590 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_192)))->BgL_sidezd2effectzd2);
		}

	}



/* &make-procedure-app-side-effect */
	obj_t BGl_z62makezd2procedurezd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6490, obj_t BgL_oz00_6491)
	{
		{	/* Cfa/cinfo2.sch 590 */
			return
				BGl_makezd2procedurezd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6491));
		}

	}



/* make-procedure-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_193, obj_t BgL_vz00_194)
	{
		{	/* Cfa/cinfo2.sch 591 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_193)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_194), BUNSPEC);
		}

	}



/* &make-procedure-app-side-effect-set! */
	obj_t
		BGl_z62makezd2procedurezd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00
		(obj_t BgL_envz00_6492, obj_t BgL_oz00_6493, obj_t BgL_vz00_6494)
	{
		{	/* Cfa/cinfo2.sch 591 */
			return
				BGl_makezd2procedurezd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6493), BgL_vz00_6494);
		}

	}



/* make-procedure-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2procedurezd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_195)
	{
		{	/* Cfa/cinfo2.sch 592 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_195)))->BgL_typez00);
		}

	}



/* &make-procedure-app-type */
	BgL_typez00_bglt BGl_z62makezd2procedurezd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6495, obj_t BgL_oz00_6496)
	{
		{	/* Cfa/cinfo2.sch 592 */
			return
				BGl_makezd2procedurezd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6496));
		}

	}



/* make-procedure-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_196, BgL_typez00_bglt BgL_vz00_197)
	{
		{	/* Cfa/cinfo2.sch 593 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_196)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_197), BUNSPEC);
		}

	}



/* &make-procedure-app-type-set! */
	obj_t BGl_z62makezd2procedurezd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6497, obj_t BgL_oz00_6498, obj_t BgL_vz00_6499)
	{
		{	/* Cfa/cinfo2.sch 593 */
			return
				BGl_makezd2procedurezd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6498), ((BgL_typez00_bglt) BgL_vz00_6499));
		}

	}



/* make-procedure-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2procedurezd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_198)
	{
		{	/* Cfa/cinfo2.sch 594 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_198)))->BgL_locz00);
		}

	}



/* &make-procedure-app-loc */
	obj_t BGl_z62makezd2procedurezd2appzd2loczb0zzcfa_info2z00(obj_t
		BgL_envz00_6500, obj_t BgL_oz00_6501)
	{
		{	/* Cfa/cinfo2.sch 594 */
			return
				BGl_makezd2procedurezd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6501));
		}

	}



/* make-procedure-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00(obj_t BgL_loc1582z00_201,
		BgL_typez00_bglt BgL_type1583z00_202, obj_t BgL_sidezd2effect1584zd2_203,
		obj_t BgL_key1585z00_204, BgL_varz00_bglt BgL_fun1586z00_205,
		obj_t BgL_args1587z00_206, BgL_approxz00_bglt BgL_approx1588z00_207)
	{
		{	/* Cfa/cinfo2.sch 598 */
			{	/* Cfa/cinfo2.sch 598 */
				BgL_appz00_bglt BgL_new1488z00_8054;

				{	/* Cfa/cinfo2.sch 598 */
					BgL_appz00_bglt BgL_tmp1486z00_8055;
					BgL_procedurezd2refzd2appz00_bglt BgL_wide1487z00_8056;

					{
						BgL_appz00_bglt BgL_auxz00_9851;

						{	/* Cfa/cinfo2.sch 598 */
							BgL_appz00_bglt BgL_new1485z00_8057;

							BgL_new1485z00_8057 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 598 */
								long BgL_arg1947z00_8058;

								{	/* Cfa/cinfo2.sch 598 */
									long BgL_res2815z00_8059;

									BgL_res2815z00_8059 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1947z00_8058 = BgL_res2815z00_8059;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1485z00_8057),
									BgL_arg1947z00_8058);
							}
							{	/* Cfa/cinfo2.sch 598 */
								BgL_objectz00_bglt BgL_tmpz00_9856;

								BgL_tmpz00_9856 = ((BgL_objectz00_bglt) BgL_new1485z00_8057);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9856, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1485z00_8057);
							BgL_auxz00_9851 = BgL_new1485z00_8057;
						}
						BgL_tmp1486z00_8055 = ((BgL_appz00_bglt) BgL_auxz00_9851);
					}
					BgL_wide1487z00_8056 =
						((BgL_procedurezd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 598 */
						obj_t BgL_auxz00_9864;
						BgL_objectz00_bglt BgL_tmpz00_9862;

						BgL_auxz00_9864 = ((obj_t) BgL_wide1487z00_8056);
						BgL_tmpz00_9862 = ((BgL_objectz00_bglt) BgL_tmp1486z00_8055);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9862, BgL_auxz00_9864);
					}
					((BgL_objectz00_bglt) BgL_tmp1486z00_8055);
					{	/* Cfa/cinfo2.sch 598 */
						long BgL_arg1946z00_8060;

						{	/* Cfa/cinfo2.sch 598 */
							long BgL_res2816z00_8061;

							BgL_res2816z00_8061 =
								BGL_CLASS_INDEX(BGl_procedurezd2refzd2appz00zzcfa_info2z00);
							BgL_arg1946z00_8060 = BgL_res2816z00_8061;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1486z00_8055), BgL_arg1946z00_8060);
					}
					BgL_new1488z00_8054 = ((BgL_appz00_bglt) BgL_tmp1486z00_8055);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1488z00_8054)))->BgL_locz00) =
					((obj_t) BgL_loc1582z00_201), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1488z00_8054)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1583z00_202), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1488z00_8054)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1584zd2_203), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1488z00_8054)))->BgL_keyz00) =
					((obj_t) BgL_key1585z00_204), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1488z00_8054)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1586z00_205), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1488z00_8054)))->
						BgL_argsz00) = ((obj_t) BgL_args1587z00_206), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1488z00_8054)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_9886;

					{
						obj_t BgL_auxz00_9887;

						{	/* Cfa/cinfo2.sch 598 */
							BgL_objectz00_bglt BgL_tmpz00_9888;

							BgL_tmpz00_9888 = ((BgL_objectz00_bglt) BgL_new1488z00_8054);
							BgL_auxz00_9887 = BGL_OBJECT_WIDENING(BgL_tmpz00_9888);
						}
						BgL_auxz00_9886 =
							((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_9887);
					}
					((((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_9886))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1588z00_207), BUNSPEC);
				}
				return BgL_new1488z00_8054;
			}
		}

	}



/* &make-procedure-ref-app */
	BgL_appz00_bglt BGl_z62makezd2procedurezd2refzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6502, obj_t BgL_loc1582z00_6503, obj_t BgL_type1583z00_6504,
		obj_t BgL_sidezd2effect1584zd2_6505, obj_t BgL_key1585z00_6506,
		obj_t BgL_fun1586z00_6507, obj_t BgL_args1587z00_6508,
		obj_t BgL_approx1588z00_6509)
	{
		{	/* Cfa/cinfo2.sch 598 */
			return
				BGl_makezd2procedurezd2refzd2appzd2zzcfa_info2z00(BgL_loc1582z00_6503,
				((BgL_typez00_bglt) BgL_type1583z00_6504),
				BgL_sidezd2effect1584zd2_6505, BgL_key1585z00_6506,
				((BgL_varz00_bglt) BgL_fun1586z00_6507), BgL_args1587z00_6508,
				((BgL_approxz00_bglt) BgL_approx1588z00_6509));
		}

	}



/* procedure-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_procedurezd2refzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_208)
	{
		{	/* Cfa/cinfo2.sch 599 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_208,
				BGl_procedurezd2refzd2appz00zzcfa_info2z00);
		}

	}



/* &procedure-ref-app? */
	obj_t BGl_z62procedurezd2refzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6510,
		obj_t BgL_objz00_6511)
	{
		{	/* Cfa/cinfo2.sch 599 */
			return
				BBOOL(BGl_procedurezd2refzd2appzf3zf3zzcfa_info2z00(BgL_objz00_6511));
		}

	}



/* procedure-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 600 */
			{	/* Cfa/cinfo2.sch 600 */
				obj_t BgL_classz00_4873;

				BgL_classz00_4873 = BGl_procedurezd2refzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 600 */
					obj_t BgL__ortest_1106z00_4874;

					BgL__ortest_1106z00_4874 = BGL_CLASS_NIL(BgL_classz00_4873);
					if (CBOOL(BgL__ortest_1106z00_4874))
						{	/* Cfa/cinfo2.sch 600 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4874);
						}
					else
						{	/* Cfa/cinfo2.sch 600 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4873));
						}
				}
			}
		}

	}



/* &procedure-ref-app-nil */
	BgL_appz00_bglt BGl_z62procedurezd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6512)
	{
		{	/* Cfa/cinfo2.sch 600 */
			return BGl_procedurezd2refzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* procedure-ref-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_procedurezd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_209)
	{
		{	/* Cfa/cinfo2.sch 601 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_9907;

				{
					obj_t BgL_auxz00_9908;

					{	/* Cfa/cinfo2.sch 601 */
						BgL_objectz00_bglt BgL_tmpz00_9909;

						BgL_tmpz00_9909 = ((BgL_objectz00_bglt) BgL_oz00_209);
						BgL_auxz00_9908 = BGL_OBJECT_WIDENING(BgL_tmpz00_9909);
					}
					BgL_auxz00_9907 =
						((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_9908);
				}
				return
					(((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_9907))->
					BgL_approxz00);
			}
		}

	}



/* &procedure-ref-app-approx */
	BgL_approxz00_bglt
		BGl_z62procedurezd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_6513, obj_t BgL_oz00_6514)
	{
		{	/* Cfa/cinfo2.sch 601 */
			return
				BGl_procedurezd2refzd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6514));
		}

	}



/* procedure-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_212)
	{
		{	/* Cfa/cinfo2.sch 603 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_212)))->BgL_argsz00);
		}

	}



/* &procedure-ref-app-args */
	obj_t BGl_z62procedurezd2refzd2appzd2argszb0zzcfa_info2z00(obj_t
		BgL_envz00_6515, obj_t BgL_oz00_6516)
	{
		{	/* Cfa/cinfo2.sch 603 */
			return
				BGl_procedurezd2refzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6516));
		}

	}



/* procedure-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_213, obj_t BgL_vz00_214)
	{
		{	/* Cfa/cinfo2.sch 604 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_213)))->BgL_argsz00) =
				((obj_t) BgL_vz00_214), BUNSPEC);
		}

	}



/* &procedure-ref-app-args-set! */
	obj_t BGl_z62procedurezd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6517, obj_t BgL_oz00_6518, obj_t BgL_vz00_6519)
	{
		{	/* Cfa/cinfo2.sch 604 */
			return
				BGl_procedurezd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6518), BgL_vz00_6519);
		}

	}



/* procedure-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_procedurezd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_215)
	{
		{	/* Cfa/cinfo2.sch 605 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_215)))->BgL_funz00);
		}

	}



/* &procedure-ref-app-fun */
	BgL_varz00_bglt BGl_z62procedurezd2refzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6520, obj_t BgL_oz00_6521)
	{
		{	/* Cfa/cinfo2.sch 605 */
			return
				BGl_procedurezd2refzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6521));
		}

	}



/* procedure-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_216, BgL_varz00_bglt BgL_vz00_217)
	{
		{	/* Cfa/cinfo2.sch 606 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_216)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_217), BUNSPEC);
		}

	}



/* &procedure-ref-app-fun-set! */
	obj_t BGl_z62procedurezd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6522, obj_t BgL_oz00_6523, obj_t BgL_vz00_6524)
	{
		{	/* Cfa/cinfo2.sch 606 */
			return
				BGl_procedurezd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6523), ((BgL_varz00_bglt) BgL_vz00_6524));
		}

	}



/* procedure-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_218)
	{
		{	/* Cfa/cinfo2.sch 607 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_218)))->BgL_keyz00);
		}

	}



/* &procedure-ref-app-key */
	obj_t BGl_z62procedurezd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t
		BgL_envz00_6525, obj_t BgL_oz00_6526)
	{
		{	/* Cfa/cinfo2.sch 607 */
			return
				BGl_procedurezd2refzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6526));
		}

	}



/* procedure-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_219, obj_t BgL_vz00_220)
	{
		{	/* Cfa/cinfo2.sch 608 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_219)))->BgL_keyz00) =
				((obj_t) BgL_vz00_220), BUNSPEC);
		}

	}



/* &procedure-ref-app-key-set! */
	obj_t BGl_z62procedurezd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6527, obj_t BgL_oz00_6528, obj_t BgL_vz00_6529)
	{
		{	/* Cfa/cinfo2.sch 608 */
			return
				BGl_procedurezd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6528), BgL_vz00_6529);
		}

	}



/* procedure-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_221)
	{
		{	/* Cfa/cinfo2.sch 609 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_221)))->BgL_sidezd2effectzd2);
		}

	}



/* &procedure-ref-app-side-effect */
	obj_t BGl_z62procedurezd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6530, obj_t BgL_oz00_6531)
	{
		{	/* Cfa/cinfo2.sch 609 */
			return
				BGl_procedurezd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6531));
		}

	}



/* procedure-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_222, obj_t BgL_vz00_223)
	{
		{	/* Cfa/cinfo2.sch 610 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_222)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_223), BUNSPEC);
		}

	}



/* &procedure-ref-app-side-effect-set! */
	obj_t
		BGl_z62procedurezd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6532, obj_t BgL_oz00_6533, obj_t BgL_vz00_6534)
	{
		{	/* Cfa/cinfo2.sch 610 */
			return
				BGl_procedurezd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6533), BgL_vz00_6534);
		}

	}



/* procedure-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_procedurezd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_224)
	{
		{	/* Cfa/cinfo2.sch 611 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_224)))->BgL_typez00);
		}

	}



/* &procedure-ref-app-type */
	BgL_typez00_bglt BGl_z62procedurezd2refzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6535, obj_t BgL_oz00_6536)
	{
		{	/* Cfa/cinfo2.sch 611 */
			return
				BGl_procedurezd2refzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6536));
		}

	}



/* procedure-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_225, BgL_typez00_bglt BgL_vz00_226)
	{
		{	/* Cfa/cinfo2.sch 612 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_225)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_226), BUNSPEC);
		}

	}



/* &procedure-ref-app-type-set! */
	obj_t BGl_z62procedurezd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6537, obj_t BgL_oz00_6538, obj_t BgL_vz00_6539)
	{
		{	/* Cfa/cinfo2.sch 612 */
			return
				BGl_procedurezd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6538), ((BgL_typez00_bglt) BgL_vz00_6539));
		}

	}



/* procedure-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_227)
	{
		{	/* Cfa/cinfo2.sch 613 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_227)))->BgL_locz00);
		}

	}



/* &procedure-ref-app-loc */
	obj_t BGl_z62procedurezd2refzd2appzd2loczb0zzcfa_info2z00(obj_t
		BgL_envz00_6540, obj_t BgL_oz00_6541)
	{
		{	/* Cfa/cinfo2.sch 613 */
			return
				BGl_procedurezd2refzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6541));
		}

	}



/* make-procedure-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00(obj_t
		BgL_loc1572z00_230, BgL_typez00_bglt BgL_type1573z00_231,
		obj_t BgL_sidezd2effect1574zd2_232, obj_t BgL_key1575z00_233,
		BgL_varz00_bglt BgL_fun1577z00_234, obj_t BgL_args1578z00_235,
		BgL_approxz00_bglt BgL_approx1579z00_236, obj_t BgL_vapprox1580z00_237)
	{
		{	/* Cfa/cinfo2.sch 617 */
			{	/* Cfa/cinfo2.sch 617 */
				BgL_appz00_bglt BgL_new1492z00_8062;

				{	/* Cfa/cinfo2.sch 617 */
					BgL_appz00_bglt BgL_tmp1490z00_8063;
					BgL_procedurezd2setz12zd2appz12_bglt BgL_wide1491z00_8064;

					{
						BgL_appz00_bglt BgL_auxz00_9962;

						{	/* Cfa/cinfo2.sch 617 */
							BgL_appz00_bglt BgL_new1489z00_8065;

							BgL_new1489z00_8065 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 617 */
								long BgL_arg1949z00_8066;

								{	/* Cfa/cinfo2.sch 617 */
									long BgL_res2817z00_8067;

									BgL_res2817z00_8067 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1949z00_8066 = BgL_res2817z00_8067;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1489z00_8065),
									BgL_arg1949z00_8066);
							}
							{	/* Cfa/cinfo2.sch 617 */
								BgL_objectz00_bglt BgL_tmpz00_9967;

								BgL_tmpz00_9967 = ((BgL_objectz00_bglt) BgL_new1489z00_8065);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9967, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1489z00_8065);
							BgL_auxz00_9962 = BgL_new1489z00_8065;
						}
						BgL_tmp1490z00_8063 = ((BgL_appz00_bglt) BgL_auxz00_9962);
					}
					BgL_wide1491z00_8064 =
						((BgL_procedurezd2setz12zd2appz12_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.sch 617 */
						obj_t BgL_auxz00_9975;
						BgL_objectz00_bglt BgL_tmpz00_9973;

						BgL_auxz00_9975 = ((obj_t) BgL_wide1491z00_8064);
						BgL_tmpz00_9973 = ((BgL_objectz00_bglt) BgL_tmp1490z00_8063);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_9973, BgL_auxz00_9975);
					}
					((BgL_objectz00_bglt) BgL_tmp1490z00_8063);
					{	/* Cfa/cinfo2.sch 617 */
						long BgL_arg1948z00_8068;

						{	/* Cfa/cinfo2.sch 617 */
							long BgL_res2818z00_8069;

							BgL_res2818z00_8069 =
								BGL_CLASS_INDEX(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg1948z00_8068 = BgL_res2818z00_8069;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1490z00_8063), BgL_arg1948z00_8068);
					}
					BgL_new1492z00_8062 = ((BgL_appz00_bglt) BgL_tmp1490z00_8063);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1492z00_8062)))->BgL_locz00) =
					((obj_t) BgL_loc1572z00_230), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1492z00_8062)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1573z00_231), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1492z00_8062)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1574zd2_232), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1492z00_8062)))->BgL_keyz00) =
					((obj_t) BgL_key1575z00_233), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1492z00_8062)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1577z00_234), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1492z00_8062)))->
						BgL_argsz00) = ((obj_t) BgL_args1578z00_235), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1492z00_8062)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_9997;

					{
						obj_t BgL_auxz00_9998;

						{	/* Cfa/cinfo2.sch 617 */
							BgL_objectz00_bglt BgL_tmpz00_9999;

							BgL_tmpz00_9999 = ((BgL_objectz00_bglt) BgL_new1492z00_8062);
							BgL_auxz00_9998 = BGL_OBJECT_WIDENING(BgL_tmpz00_9999);
						}
						BgL_auxz00_9997 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_9998);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_9997))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1579z00_236), BUNSPEC);
				}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_10004;

					{
						obj_t BgL_auxz00_10005;

						{	/* Cfa/cinfo2.sch 617 */
							BgL_objectz00_bglt BgL_tmpz00_10006;

							BgL_tmpz00_10006 = ((BgL_objectz00_bglt) BgL_new1492z00_8062);
							BgL_auxz00_10005 = BGL_OBJECT_WIDENING(BgL_tmpz00_10006);
						}
						BgL_auxz00_10004 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_10005);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_10004))->
							BgL_vapproxz00) = ((obj_t) BgL_vapprox1580z00_237), BUNSPEC);
				}
				return BgL_new1492z00_8062;
			}
		}

	}



/* &make-procedure-set!-app */
	BgL_appz00_bglt BGl_z62makezd2procedurezd2setz12zd2appza2zzcfa_info2z00(obj_t
		BgL_envz00_6542, obj_t BgL_loc1572z00_6543, obj_t BgL_type1573z00_6544,
		obj_t BgL_sidezd2effect1574zd2_6545, obj_t BgL_key1575z00_6546,
		obj_t BgL_fun1577z00_6547, obj_t BgL_args1578z00_6548,
		obj_t BgL_approx1579z00_6549, obj_t BgL_vapprox1580z00_6550)
	{
		{	/* Cfa/cinfo2.sch 617 */
			return
				BGl_makezd2procedurezd2setz12zd2appzc0zzcfa_info2z00
				(BgL_loc1572z00_6543, ((BgL_typez00_bglt) BgL_type1573z00_6544),
				BgL_sidezd2effect1574zd2_6545, BgL_key1575z00_6546,
				((BgL_varz00_bglt) BgL_fun1577z00_6547), BgL_args1578z00_6548,
				((BgL_approxz00_bglt) BgL_approx1579z00_6549), BgL_vapprox1580z00_6550);
		}

	}



/* procedure-set!-app? */
	BGL_EXPORTED_DEF bool_t BGl_procedurezd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t
		BgL_objz00_238)
	{
		{	/* Cfa/cinfo2.sch 618 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_238,
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
		}

	}



/* &procedure-set!-app? */
	obj_t BGl_z62procedurezd2setz12zd2appzf3z83zzcfa_info2z00(obj_t
		BgL_envz00_6551, obj_t BgL_objz00_6552)
	{
		{	/* Cfa/cinfo2.sch 618 */
			return
				BBOOL(BGl_procedurezd2setz12zd2appzf3ze1zzcfa_info2z00
				(BgL_objz00_6552));
		}

	}



/* procedure-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 619 */
			{	/* Cfa/cinfo2.sch 619 */
				obj_t BgL_classz00_4894;

				BgL_classz00_4894 = BGl_procedurezd2setz12zd2appz12zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 619 */
					obj_t BgL__ortest_1106z00_4895;

					BgL__ortest_1106z00_4895 = BGL_CLASS_NIL(BgL_classz00_4894);
					if (CBOOL(BgL__ortest_1106z00_4895))
						{	/* Cfa/cinfo2.sch 619 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4895);
						}
					else
						{	/* Cfa/cinfo2.sch 619 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4894));
						}
				}
			}
		}

	}



/* &procedure-set!-app-nil */
	BgL_appz00_bglt BGl_z62procedurezd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t
		BgL_envz00_6553)
	{
		{	/* Cfa/cinfo2.sch 619 */
			return BGl_procedurezd2setz12zd2appzd2nilzc0zzcfa_info2z00();
		}

	}



/* procedure-set!-app-vapprox */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2vapproxzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_239)
	{
		{	/* Cfa/cinfo2.sch 620 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_10025;

				{
					obj_t BgL_auxz00_10026;

					{	/* Cfa/cinfo2.sch 620 */
						BgL_objectz00_bglt BgL_tmpz00_10027;

						BgL_tmpz00_10027 = ((BgL_objectz00_bglt) BgL_oz00_239);
						BgL_auxz00_10026 = BGL_OBJECT_WIDENING(BgL_tmpz00_10027);
					}
					BgL_auxz00_10025 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_10026);
				}
				return
					(((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_10025))->
					BgL_vapproxz00);
			}
		}

	}



/* &procedure-set!-app-vapprox */
	obj_t BGl_z62procedurezd2setz12zd2appzd2vapproxza2zzcfa_info2z00(obj_t
		BgL_envz00_6554, obj_t BgL_oz00_6555)
	{
		{	/* Cfa/cinfo2.sch 620 */
			return
				BGl_procedurezd2setz12zd2appzd2vapproxzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6555));
		}

	}



/* procedure-set!-app-vapprox-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2vapproxzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_240, obj_t BgL_vz00_241)
	{
		{	/* Cfa/cinfo2.sch 621 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_10034;

				{
					obj_t BgL_auxz00_10035;

					{	/* Cfa/cinfo2.sch 621 */
						BgL_objectz00_bglt BgL_tmpz00_10036;

						BgL_tmpz00_10036 = ((BgL_objectz00_bglt) BgL_oz00_240);
						BgL_auxz00_10035 = BGL_OBJECT_WIDENING(BgL_tmpz00_10036);
					}
					BgL_auxz00_10034 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_10035);
				}
				return
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_10034))->
						BgL_vapproxz00) = ((obj_t) BgL_vz00_241), BUNSPEC);
			}
		}

	}



/* &procedure-set!-app-vapprox-set! */
	obj_t
		BGl_z62procedurezd2setz12zd2appzd2vapproxzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6556, obj_t BgL_oz00_6557, obj_t BgL_vz00_6558)
	{
		{	/* Cfa/cinfo2.sch 621 */
			return
				BGl_procedurezd2setz12zd2appzd2vapproxzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6557), BgL_vz00_6558);
		}

	}



/* procedure-set!-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_procedurezd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_242)
	{
		{	/* Cfa/cinfo2.sch 622 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_10043;

				{
					obj_t BgL_auxz00_10044;

					{	/* Cfa/cinfo2.sch 622 */
						BgL_objectz00_bglt BgL_tmpz00_10045;

						BgL_tmpz00_10045 = ((BgL_objectz00_bglt) BgL_oz00_242);
						BgL_auxz00_10044 = BGL_OBJECT_WIDENING(BgL_tmpz00_10045);
					}
					BgL_auxz00_10043 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_10044);
				}
				return
					(((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_10043))->
					BgL_approxz00);
			}
		}

	}



/* &procedure-set!-app-approx */
	BgL_approxz00_bglt
		BGl_z62procedurezd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t
		BgL_envz00_6559, obj_t BgL_oz00_6560)
	{
		{	/* Cfa/cinfo2.sch 622 */
			return
				BGl_procedurezd2setz12zd2appzd2approxzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6560));
		}

	}



/* procedure-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_245)
	{
		{	/* Cfa/cinfo2.sch 624 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_245)))->BgL_argsz00);
		}

	}



/* &procedure-set!-app-args */
	obj_t BGl_z62procedurezd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t
		BgL_envz00_6561, obj_t BgL_oz00_6562)
	{
		{	/* Cfa/cinfo2.sch 624 */
			return
				BGl_procedurezd2setz12zd2appzd2argszc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6562));
		}

	}



/* procedure-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_246, obj_t BgL_vz00_247)
	{
		{	/* Cfa/cinfo2.sch 625 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_246)))->BgL_argsz00) =
				((obj_t) BgL_vz00_247), BUNSPEC);
		}

	}



/* &procedure-set!-app-args-set! */
	obj_t BGl_z62procedurezd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6563, obj_t BgL_oz00_6564, obj_t BgL_vz00_6565)
	{
		{	/* Cfa/cinfo2.sch 625 */
			return
				BGl_procedurezd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6564), BgL_vz00_6565);
		}

	}



/* procedure-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_procedurezd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_248)
	{
		{	/* Cfa/cinfo2.sch 626 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_248)))->BgL_funz00);
		}

	}



/* &procedure-set!-app-fun */
	BgL_varz00_bglt BGl_z62procedurezd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t
		BgL_envz00_6566, obj_t BgL_oz00_6567)
	{
		{	/* Cfa/cinfo2.sch 626 */
			return
				BGl_procedurezd2setz12zd2appzd2funzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6567));
		}

	}



/* procedure-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_249, BgL_varz00_bglt BgL_vz00_250)
	{
		{	/* Cfa/cinfo2.sch 627 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_249)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_250), BUNSPEC);
		}

	}



/* &procedure-set!-app-fun-set! */
	obj_t BGl_z62procedurezd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6568, obj_t BgL_oz00_6569, obj_t BgL_vz00_6570)
	{
		{	/* Cfa/cinfo2.sch 627 */
			return
				BGl_procedurezd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6569), ((BgL_varz00_bglt) BgL_vz00_6570));
		}

	}



/* procedure-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_251)
	{
		{	/* Cfa/cinfo2.sch 628 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_251)))->BgL_keyz00);
		}

	}



/* &procedure-set!-app-key */
	obj_t BGl_z62procedurezd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t
		BgL_envz00_6571, obj_t BgL_oz00_6572)
	{
		{	/* Cfa/cinfo2.sch 628 */
			return
				BGl_procedurezd2setz12zd2appzd2keyzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6572));
		}

	}



/* procedure-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_252, obj_t BgL_vz00_253)
	{
		{	/* Cfa/cinfo2.sch 629 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_252)))->BgL_keyz00) =
				((obj_t) BgL_vz00_253), BUNSPEC);
		}

	}



/* &procedure-set!-app-key-set! */
	obj_t BGl_z62procedurezd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6573, obj_t BgL_oz00_6574, obj_t BgL_vz00_6575)
	{
		{	/* Cfa/cinfo2.sch 629 */
			return
				BGl_procedurezd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6574), BgL_vz00_6575);
		}

	}



/* procedure-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_254)
	{
		{	/* Cfa/cinfo2.sch 630 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_254)))->BgL_sidezd2effectzd2);
		}

	}



/* &procedure-set!-app-side-effect */
	obj_t BGl_z62procedurezd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t
		BgL_envz00_6576, obj_t BgL_oz00_6577)
	{
		{	/* Cfa/cinfo2.sch 630 */
			return
				BGl_procedurezd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6577));
		}

	}



/* procedure-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_255, obj_t BgL_vz00_256)
	{
		{	/* Cfa/cinfo2.sch 631 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_255)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_256), BUNSPEC);
		}

	}



/* &procedure-set!-app-side-effect-set! */
	obj_t
		BGl_z62procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00
		(obj_t BgL_envz00_6578, obj_t BgL_oz00_6579, obj_t BgL_vz00_6580)
	{
		{	/* Cfa/cinfo2.sch 631 */
			return
				BGl_procedurezd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6579), BgL_vz00_6580);
		}

	}



/* procedure-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_procedurezd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_257)
	{
		{	/* Cfa/cinfo2.sch 632 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_257)))->BgL_typez00);
		}

	}



/* &procedure-set!-app-type */
	BgL_typez00_bglt BGl_z62procedurezd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t
		BgL_envz00_6581, obj_t BgL_oz00_6582)
	{
		{	/* Cfa/cinfo2.sch 632 */
			return
				BGl_procedurezd2setz12zd2appzd2typezc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6582));
		}

	}



/* procedure-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_258, BgL_typez00_bglt BgL_vz00_259)
	{
		{	/* Cfa/cinfo2.sch 633 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_258)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_259), BUNSPEC);
		}

	}



/* &procedure-set!-app-type-set! */
	obj_t BGl_z62procedurezd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6583, obj_t BgL_oz00_6584, obj_t BgL_vz00_6585)
	{
		{	/* Cfa/cinfo2.sch 633 */
			return
				BGl_procedurezd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6584), ((BgL_typez00_bglt) BgL_vz00_6585));
		}

	}



/* procedure-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_procedurezd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_260)
	{
		{	/* Cfa/cinfo2.sch 634 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_260)))->BgL_locz00);
		}

	}



/* &procedure-set!-app-loc */
	obj_t BGl_z62procedurezd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t
		BgL_envz00_6586, obj_t BgL_oz00_6587)
	{
		{	/* Cfa/cinfo2.sch 634 */
			return
				BGl_procedurezd2setz12zd2appzd2loczc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6587));
		}

	}



/* make-pre-make-vector-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00(obj_t
		BgL_loc1564z00_263, BgL_typez00_bglt BgL_type1565z00_264,
		obj_t BgL_sidezd2effect1566zd2_265, obj_t BgL_key1567z00_266,
		BgL_varz00_bglt BgL_fun1568z00_267, obj_t BgL_args1569z00_268,
		BgL_variablez00_bglt BgL_owner1570z00_269)
	{
		{	/* Cfa/cinfo2.sch 638 */
			{	/* Cfa/cinfo2.sch 638 */
				BgL_appz00_bglt BgL_new1496z00_8070;

				{	/* Cfa/cinfo2.sch 638 */
					BgL_appz00_bglt BgL_tmp1494z00_8071;
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_wide1495z00_8072;

					{
						BgL_appz00_bglt BgL_auxz00_10098;

						{	/* Cfa/cinfo2.sch 638 */
							BgL_appz00_bglt BgL_new1493z00_8073;

							BgL_new1493z00_8073 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 638 */
								long BgL_arg1952z00_8074;

								{	/* Cfa/cinfo2.sch 638 */
									long BgL_res2819z00_8075;

									BgL_res2819z00_8075 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1952z00_8074 = BgL_res2819z00_8075;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1493z00_8073),
									BgL_arg1952z00_8074);
							}
							{	/* Cfa/cinfo2.sch 638 */
								BgL_objectz00_bglt BgL_tmpz00_10103;

								BgL_tmpz00_10103 = ((BgL_objectz00_bglt) BgL_new1493z00_8073);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10103, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1493z00_8073);
							BgL_auxz00_10098 = BgL_new1493z00_8073;
						}
						BgL_tmp1494z00_8071 = ((BgL_appz00_bglt) BgL_auxz00_10098);
					}
					BgL_wide1495z00_8072 =
						((BgL_prezd2makezd2vectorzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2vectorzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 638 */
						obj_t BgL_auxz00_10111;
						BgL_objectz00_bglt BgL_tmpz00_10109;

						BgL_auxz00_10111 = ((obj_t) BgL_wide1495z00_8072);
						BgL_tmpz00_10109 = ((BgL_objectz00_bglt) BgL_tmp1494z00_8071);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10109, BgL_auxz00_10111);
					}
					((BgL_objectz00_bglt) BgL_tmp1494z00_8071);
					{	/* Cfa/cinfo2.sch 638 */
						long BgL_arg1951z00_8076;

						{	/* Cfa/cinfo2.sch 638 */
							long BgL_res2820z00_8077;

							BgL_res2820z00_8077 =
								BGL_CLASS_INDEX(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
							BgL_arg1951z00_8076 = BgL_res2820z00_8077;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1494z00_8071), BgL_arg1951z00_8076);
					}
					BgL_new1496z00_8070 = ((BgL_appz00_bglt) BgL_tmp1494z00_8071);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1496z00_8070)))->BgL_locz00) =
					((obj_t) BgL_loc1564z00_263), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1496z00_8070)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1565z00_264), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1496z00_8070)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1566zd2_265), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1496z00_8070)))->BgL_keyz00) =
					((obj_t) BgL_key1567z00_266), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1496z00_8070)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1568z00_267), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1496z00_8070)))->
						BgL_argsz00) = ((obj_t) BgL_args1569z00_268), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1496z00_8070)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_10133;

					{
						obj_t BgL_auxz00_10134;

						{	/* Cfa/cinfo2.sch 638 */
							BgL_objectz00_bglt BgL_tmpz00_10135;

							BgL_tmpz00_10135 = ((BgL_objectz00_bglt) BgL_new1496z00_8070);
							BgL_auxz00_10134 = BGL_OBJECT_WIDENING(BgL_tmpz00_10135);
						}
						BgL_auxz00_10133 =
							((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_10134);
					}
					((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
								COBJECT(BgL_auxz00_10133))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1570z00_269), BUNSPEC);
				}
				return BgL_new1496z00_8070;
			}
		}

	}



/* &make-pre-make-vector-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2makezd2vectorzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6588, obj_t BgL_loc1564z00_6589, obj_t BgL_type1565z00_6590,
		obj_t BgL_sidezd2effect1566zd2_6591, obj_t BgL_key1567z00_6592,
		obj_t BgL_fun1568z00_6593, obj_t BgL_args1569z00_6594,
		obj_t BgL_owner1570z00_6595)
	{
		{	/* Cfa/cinfo2.sch 638 */
			return
				BGl_makezd2prezd2makezd2vectorzd2appz00zzcfa_info2z00
				(BgL_loc1564z00_6589, ((BgL_typez00_bglt) BgL_type1565z00_6590),
				BgL_sidezd2effect1566zd2_6591, BgL_key1567z00_6592,
				((BgL_varz00_bglt) BgL_fun1568z00_6593), BgL_args1569z00_6594,
				((BgL_variablez00_bglt) BgL_owner1570z00_6595));
		}

	}



/* pre-make-vector-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00(obj_t BgL_objz00_270)
	{
		{	/* Cfa/cinfo2.sch 639 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_270,
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-make-vector-app? */
	obj_t BGl_z62prezd2makezd2vectorzd2appzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_6596, obj_t BgL_objz00_6597)
	{
		{	/* Cfa/cinfo2.sch 639 */
			return
				BBOOL(BGl_prezd2makezd2vectorzd2appzf3z21zzcfa_info2z00
				(BgL_objz00_6597));
		}

	}



/* pre-make-vector-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 640 */
			{	/* Cfa/cinfo2.sch 640 */
				obj_t BgL_classz00_4916;

				BgL_classz00_4916 = BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 640 */
					obj_t BgL__ortest_1106z00_4917;

					BgL__ortest_1106z00_4917 = BGL_CLASS_NIL(BgL_classz00_4916);
					if (CBOOL(BgL__ortest_1106z00_4917))
						{	/* Cfa/cinfo2.sch 640 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4917);
						}
					else
						{	/* Cfa/cinfo2.sch 640 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4916));
						}
				}
			}
		}

	}



/* &pre-make-vector-app-nil */
	BgL_appz00_bglt BGl_z62prezd2makezd2vectorzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6598)
	{
		{	/* Cfa/cinfo2.sch 640 */
			return BGl_prezd2makezd2vectorzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-make-vector-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_prezd2makezd2vectorzd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_271)
	{
		{	/* Cfa/cinfo2.sch 641 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_10154;

				{
					obj_t BgL_auxz00_10155;

					{	/* Cfa/cinfo2.sch 641 */
						BgL_objectz00_bglt BgL_tmpz00_10156;

						BgL_tmpz00_10156 = ((BgL_objectz00_bglt) BgL_oz00_271);
						BgL_auxz00_10155 = BGL_OBJECT_WIDENING(BgL_tmpz00_10156);
					}
					BgL_auxz00_10154 =
						((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_10155);
				}
				return
					(((BgL_prezd2makezd2vectorzd2appzd2_bglt) COBJECT(BgL_auxz00_10154))->
					BgL_ownerz00);
			}
		}

	}



/* &pre-make-vector-app-owner */
	BgL_variablez00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2ownerz62zzcfa_info2z00(obj_t
		BgL_envz00_6599, obj_t BgL_oz00_6600)
	{
		{	/* Cfa/cinfo2.sch 641 */
			return
				BGl_prezd2makezd2vectorzd2appzd2ownerz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6600));
		}

	}



/* pre-make-vector-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_274)
	{
		{	/* Cfa/cinfo2.sch 643 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_274)))->BgL_argsz00);
		}

	}



/* &pre-make-vector-app-args */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_6601, obj_t BgL_oz00_6602)
	{
		{	/* Cfa/cinfo2.sch 643 */
			return
				BGl_prezd2makezd2vectorzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6602));
		}

	}



/* pre-make-vector-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_275, obj_t BgL_vz00_276)
	{
		{	/* Cfa/cinfo2.sch 644 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_275)))->BgL_argsz00) =
				((obj_t) BgL_vz00_276), BUNSPEC);
		}

	}



/* &pre-make-vector-app-args-set! */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6603, obj_t BgL_oz00_6604, obj_t BgL_vz00_6605)
	{
		{	/* Cfa/cinfo2.sch 644 */
			return
				BGl_prezd2makezd2vectorzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6604), BgL_vz00_6605);
		}

	}



/* pre-make-vector-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2makezd2vectorzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_277)
	{
		{	/* Cfa/cinfo2.sch 645 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_277)))->BgL_funz00);
		}

	}



/* &pre-make-vector-app-fun */
	BgL_varz00_bglt BGl_z62prezd2makezd2vectorzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6606, obj_t BgL_oz00_6607)
	{
		{	/* Cfa/cinfo2.sch 645 */
			return
				BGl_prezd2makezd2vectorzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6607));
		}

	}



/* pre-make-vector-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_278, BgL_varz00_bglt BgL_vz00_279)
	{
		{	/* Cfa/cinfo2.sch 646 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_278)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_279), BUNSPEC);
		}

	}



/* &pre-make-vector-app-fun-set! */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6608, obj_t BgL_oz00_6609, obj_t BgL_vz00_6610)
	{
		{	/* Cfa/cinfo2.sch 646 */
			return
				BGl_prezd2makezd2vectorzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6609), ((BgL_varz00_bglt) BgL_vz00_6610));
		}

	}



/* pre-make-vector-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_280)
	{
		{	/* Cfa/cinfo2.sch 647 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_280)))->BgL_keyz00);
		}

	}



/* &pre-make-vector-app-key */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_6611, obj_t BgL_oz00_6612)
	{
		{	/* Cfa/cinfo2.sch 647 */
			return
				BGl_prezd2makezd2vectorzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6612));
		}

	}



/* pre-make-vector-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_281, obj_t BgL_vz00_282)
	{
		{	/* Cfa/cinfo2.sch 648 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_281)))->BgL_keyz00) =
				((obj_t) BgL_vz00_282), BUNSPEC);
		}

	}



/* &pre-make-vector-app-key-set! */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6613, obj_t BgL_oz00_6614, obj_t BgL_vz00_6615)
	{
		{	/* Cfa/cinfo2.sch 648 */
			return
				BGl_prezd2makezd2vectorzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6614), BgL_vz00_6615);
		}

	}



/* pre-make-vector-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_283)
	{
		{	/* Cfa/cinfo2.sch 649 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_283)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-make-vector-app-side-effect */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6616, obj_t BgL_oz00_6617)
	{
		{	/* Cfa/cinfo2.sch 649 */
			return
				BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6617));
		}

	}



/* pre-make-vector-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_284, obj_t BgL_vz00_285)
	{
		{	/* Cfa/cinfo2.sch 650 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_284)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_285), BUNSPEC);
		}

	}



/* &pre-make-vector-app-side-effect-set! */
	obj_t
		BGl_z62prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_6618, obj_t BgL_oz00_6619, obj_t BgL_vz00_6620)
	{
		{	/* Cfa/cinfo2.sch 650 */
			return
				BGl_prezd2makezd2vectorzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6619), BgL_vz00_6620);
		}

	}



/* pre-make-vector-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2makezd2vectorzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_286)
	{
		{	/* Cfa/cinfo2.sch 651 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_286)))->BgL_typez00);
		}

	}



/* &pre-make-vector-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2makezd2vectorzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6621, obj_t BgL_oz00_6622)
	{
		{	/* Cfa/cinfo2.sch 651 */
			return
				BGl_prezd2makezd2vectorzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6622));
		}

	}



/* pre-make-vector-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_287, BgL_typez00_bglt BgL_vz00_288)
	{
		{	/* Cfa/cinfo2.sch 652 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_287)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_288), BUNSPEC);
		}

	}



/* &pre-make-vector-app-type-set! */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6623, obj_t BgL_oz00_6624, obj_t BgL_vz00_6625)
	{
		{	/* Cfa/cinfo2.sch 652 */
			return
				BGl_prezd2makezd2vectorzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6624), ((BgL_typez00_bglt) BgL_vz00_6625));
		}

	}



/* pre-make-vector-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2vectorzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_289)
	{
		{	/* Cfa/cinfo2.sch 653 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_289)))->BgL_locz00);
		}

	}



/* &pre-make-vector-app-loc */
	obj_t BGl_z62prezd2makezd2vectorzd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_6626, obj_t BgL_oz00_6627)
	{
		{	/* Cfa/cinfo2.sch 653 */
			return
				BGl_prezd2makezd2vectorzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6627));
		}

	}



/* make-make-vector-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00(obj_t BgL_loc1551z00_292,
		BgL_typez00_bglt BgL_type1552z00_293, obj_t BgL_sidezd2effect1553zd2_294,
		obj_t BgL_key1554z00_295, BgL_varz00_bglt BgL_fun1555z00_296,
		obj_t BgL_args1556z00_297, BgL_approxz00_bglt BgL_approx1557z00_298,
		BgL_approxz00_bglt BgL_valuezd2approx1558zd2_299,
		long BgL_lostzd2stamp1559zd2_300, BgL_variablez00_bglt BgL_owner1560z00_301,
		obj_t BgL_stackzd2stamp1561zd2_302, bool_t BgL_seenzf31562zf3_303)
	{
		{	/* Cfa/cinfo2.sch 657 */
			{	/* Cfa/cinfo2.sch 657 */
				BgL_appz00_bglt BgL_new1500z00_8078;

				{	/* Cfa/cinfo2.sch 657 */
					BgL_appz00_bglt BgL_tmp1498z00_8079;
					BgL_makezd2vectorzd2appz00_bglt BgL_wide1499z00_8080;

					{
						BgL_appz00_bglt BgL_auxz00_10209;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_appz00_bglt BgL_new1497z00_8081;

							BgL_new1497z00_8081 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 657 */
								long BgL_arg1954z00_8082;

								{	/* Cfa/cinfo2.sch 657 */
									long BgL_res2821z00_8083;

									BgL_res2821z00_8083 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1954z00_8082 = BgL_res2821z00_8083;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1497z00_8081),
									BgL_arg1954z00_8082);
							}
							{	/* Cfa/cinfo2.sch 657 */
								BgL_objectz00_bglt BgL_tmpz00_10214;

								BgL_tmpz00_10214 = ((BgL_objectz00_bglt) BgL_new1497z00_8081);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10214, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1497z00_8081);
							BgL_auxz00_10209 = BgL_new1497z00_8081;
						}
						BgL_tmp1498z00_8079 = ((BgL_appz00_bglt) BgL_auxz00_10209);
					}
					BgL_wide1499z00_8080 =
						((BgL_makezd2vectorzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2vectorzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 657 */
						obj_t BgL_auxz00_10222;
						BgL_objectz00_bglt BgL_tmpz00_10220;

						BgL_auxz00_10222 = ((obj_t) BgL_wide1499z00_8080);
						BgL_tmpz00_10220 = ((BgL_objectz00_bglt) BgL_tmp1498z00_8079);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10220, BgL_auxz00_10222);
					}
					((BgL_objectz00_bglt) BgL_tmp1498z00_8079);
					{	/* Cfa/cinfo2.sch 657 */
						long BgL_arg1953z00_8084;

						{	/* Cfa/cinfo2.sch 657 */
							long BgL_res2822z00_8085;

							BgL_res2822z00_8085 =
								BGL_CLASS_INDEX(BGl_makezd2vectorzd2appz00zzcfa_info2z00);
							BgL_arg1953z00_8084 = BgL_res2822z00_8085;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1498z00_8079), BgL_arg1953z00_8084);
					}
					BgL_new1500z00_8078 = ((BgL_appz00_bglt) BgL_tmp1498z00_8079);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1500z00_8078)))->BgL_locz00) =
					((obj_t) BgL_loc1551z00_292), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1500z00_8078)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1552z00_293), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1500z00_8078)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1553zd2_294), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1500z00_8078)))->BgL_keyz00) =
					((obj_t) BgL_key1554z00_295), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1500z00_8078)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1555z00_296), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1500z00_8078)))->
						BgL_argsz00) = ((obj_t) BgL_args1556z00_297), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1500z00_8078)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10244;

					{
						obj_t BgL_auxz00_10245;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10246;

							BgL_tmpz00_10246 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10245 = BGL_OBJECT_WIDENING(BgL_tmpz00_10246);
						}
						BgL_auxz00_10244 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10245);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10244))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1557z00_298), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10251;

					{
						obj_t BgL_auxz00_10252;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10253;

							BgL_tmpz00_10253 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10252 = BGL_OBJECT_WIDENING(BgL_tmpz00_10253);
						}
						BgL_auxz00_10251 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10252);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10251))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_valuezd2approx1558zd2_299), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10258;

					{
						obj_t BgL_auxz00_10259;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10260;

							BgL_tmpz00_10260 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10259 = BGL_OBJECT_WIDENING(BgL_tmpz00_10260);
						}
						BgL_auxz00_10258 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10259);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10258))->
							BgL_lostzd2stampzd2) =
						((long) BgL_lostzd2stamp1559zd2_300), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10265;

					{
						obj_t BgL_auxz00_10266;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10267;

							BgL_tmpz00_10267 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10266 = BGL_OBJECT_WIDENING(BgL_tmpz00_10267);
						}
						BgL_auxz00_10265 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10266);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10265))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1560z00_301), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10272;

					{
						obj_t BgL_auxz00_10273;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10274;

							BgL_tmpz00_10274 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10273 = BGL_OBJECT_WIDENING(BgL_tmpz00_10274);
						}
						BgL_auxz00_10272 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10273);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10272))->
							BgL_stackzd2stampzd2) =
						((obj_t) BgL_stackzd2stamp1561zd2_302), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10279;

					{
						obj_t BgL_auxz00_10280;

						{	/* Cfa/cinfo2.sch 657 */
							BgL_objectz00_bglt BgL_tmpz00_10281;

							BgL_tmpz00_10281 = ((BgL_objectz00_bglt) BgL_new1500z00_8078);
							BgL_auxz00_10280 = BGL_OBJECT_WIDENING(BgL_tmpz00_10281);
						}
						BgL_auxz00_10279 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10280);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10279))->
							BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31562zf3_303), BUNSPEC);
				}
				return BgL_new1500z00_8078;
			}
		}

	}



/* &make-make-vector-app */
	BgL_appz00_bglt BGl_z62makezd2makezd2vectorzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6628, obj_t BgL_loc1551z00_6629, obj_t BgL_type1552z00_6630,
		obj_t BgL_sidezd2effect1553zd2_6631, obj_t BgL_key1554z00_6632,
		obj_t BgL_fun1555z00_6633, obj_t BgL_args1556z00_6634,
		obj_t BgL_approx1557z00_6635, obj_t BgL_valuezd2approx1558zd2_6636,
		obj_t BgL_lostzd2stamp1559zd2_6637, obj_t BgL_owner1560z00_6638,
		obj_t BgL_stackzd2stamp1561zd2_6639, obj_t BgL_seenzf31562zf3_6640)
	{
		{	/* Cfa/cinfo2.sch 657 */
			return
				BGl_makezd2makezd2vectorzd2appzd2zzcfa_info2z00(BgL_loc1551z00_6629,
				((BgL_typez00_bglt) BgL_type1552z00_6630),
				BgL_sidezd2effect1553zd2_6631, BgL_key1554z00_6632,
				((BgL_varz00_bglt) BgL_fun1555z00_6633), BgL_args1556z00_6634,
				((BgL_approxz00_bglt) BgL_approx1557z00_6635),
				((BgL_approxz00_bglt) BgL_valuezd2approx1558zd2_6636),
				(long) CINT(BgL_lostzd2stamp1559zd2_6637),
				((BgL_variablez00_bglt) BgL_owner1560z00_6638),
				BgL_stackzd2stamp1561zd2_6639, CBOOL(BgL_seenzf31562zf3_6640));
		}

	}



/* make-vector-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2vectorzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_304)
	{
		{	/* Cfa/cinfo2.sch 658 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_304,
				BGl_makezd2vectorzd2appz00zzcfa_info2z00);
		}

	}



/* &make-vector-app? */
	obj_t BGl_z62makezd2vectorzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6641,
		obj_t BgL_objz00_6642)
	{
		{	/* Cfa/cinfo2.sch 658 */
			return
				BBOOL(BGl_makezd2vectorzd2appzf3zf3zzcfa_info2z00(BgL_objz00_6642));
		}

	}



/* make-vector-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 659 */
			{	/* Cfa/cinfo2.sch 659 */
				obj_t BgL_classz00_4941;

				BgL_classz00_4941 = BGl_makezd2vectorzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 659 */
					obj_t BgL__ortest_1106z00_4942;

					BgL__ortest_1106z00_4942 = BGL_CLASS_NIL(BgL_classz00_4941);
					if (CBOOL(BgL__ortest_1106z00_4942))
						{	/* Cfa/cinfo2.sch 659 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4942);
						}
					else
						{	/* Cfa/cinfo2.sch 659 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4941));
						}
				}
			}
		}

	}



/* &make-vector-app-nil */
	BgL_appz00_bglt BGl_z62makezd2vectorzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6643)
	{
		{	/* Cfa/cinfo2.sch 659 */
			return BGl_makezd2vectorzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* make-vector-app-seen? */
	BGL_EXPORTED_DEF bool_t
		BGl_makezd2vectorzd2appzd2seenzf3z21zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_305)
	{
		{	/* Cfa/cinfo2.sch 660 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10304;

				{
					obj_t BgL_auxz00_10305;

					{	/* Cfa/cinfo2.sch 660 */
						BgL_objectz00_bglt BgL_tmpz00_10306;

						BgL_tmpz00_10306 = ((BgL_objectz00_bglt) BgL_oz00_305);
						BgL_auxz00_10305 = BGL_OBJECT_WIDENING(BgL_tmpz00_10306);
					}
					BgL_auxz00_10304 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10305);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10304))->
					BgL_seenzf3zf3);
			}
		}

	}



/* &make-vector-app-seen? */
	obj_t BGl_z62makezd2vectorzd2appzd2seenzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_6644, obj_t BgL_oz00_6645)
	{
		{	/* Cfa/cinfo2.sch 660 */
			return
				BBOOL(BGl_makezd2vectorzd2appzd2seenzf3z21zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6645)));
		}

	}



/* make-vector-app-seen?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2seenzf3zd2setz12ze1zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_306, bool_t BgL_vz00_307)
	{
		{	/* Cfa/cinfo2.sch 661 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10314;

				{
					obj_t BgL_auxz00_10315;

					{	/* Cfa/cinfo2.sch 661 */
						BgL_objectz00_bglt BgL_tmpz00_10316;

						BgL_tmpz00_10316 = ((BgL_objectz00_bglt) BgL_oz00_306);
						BgL_auxz00_10315 = BGL_OBJECT_WIDENING(BgL_tmpz00_10316);
					}
					BgL_auxz00_10314 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10315);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10314))->
						BgL_seenzf3zf3) = ((bool_t) BgL_vz00_307), BUNSPEC);
			}
		}

	}



/* &make-vector-app-seen?-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2seenzf3zd2setz12z83zzcfa_info2z00(obj_t
		BgL_envz00_6646, obj_t BgL_oz00_6647, obj_t BgL_vz00_6648)
	{
		{	/* Cfa/cinfo2.sch 661 */
			return
				BGl_makezd2vectorzd2appzd2seenzf3zd2setz12ze1zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6647), CBOOL(BgL_vz00_6648));
		}

	}



/* make-vector-app-stack-stamp */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2stackzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_308)
	{
		{	/* Cfa/cinfo2.sch 662 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10324;

				{
					obj_t BgL_auxz00_10325;

					{	/* Cfa/cinfo2.sch 662 */
						BgL_objectz00_bglt BgL_tmpz00_10326;

						BgL_tmpz00_10326 = ((BgL_objectz00_bglt) BgL_oz00_308);
						BgL_auxz00_10325 = BGL_OBJECT_WIDENING(BgL_tmpz00_10326);
					}
					BgL_auxz00_10324 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10325);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10324))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &make-vector-app-stack-stamp */
	obj_t BGl_z62makezd2vectorzd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_6649, obj_t BgL_oz00_6650)
	{
		{	/* Cfa/cinfo2.sch 662 */
			return
				BGl_makezd2vectorzd2appzd2stackzd2stampz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6650));
		}

	}



/* make-vector-app-stack-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_309, obj_t BgL_vz00_310)
	{
		{	/* Cfa/cinfo2.sch 663 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10333;

				{
					obj_t BgL_auxz00_10334;

					{	/* Cfa/cinfo2.sch 663 */
						BgL_objectz00_bglt BgL_tmpz00_10335;

						BgL_tmpz00_10335 = ((BgL_objectz00_bglt) BgL_oz00_309);
						BgL_auxz00_10334 = BGL_OBJECT_WIDENING(BgL_tmpz00_10335);
					}
					BgL_auxz00_10333 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10334);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10333))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_310), BUNSPEC);
			}
		}

	}



/* &make-vector-app-stack-stamp-set! */
	obj_t
		BGl_z62makezd2vectorzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6651, obj_t BgL_oz00_6652, obj_t BgL_vz00_6653)
	{
		{	/* Cfa/cinfo2.sch 663 */
			return
				BGl_makezd2vectorzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6652), BgL_vz00_6653);
		}

	}



/* make-vector-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_makezd2vectorzd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_311)
	{
		{	/* Cfa/cinfo2.sch 664 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10342;

				{
					obj_t BgL_auxz00_10343;

					{	/* Cfa/cinfo2.sch 664 */
						BgL_objectz00_bglt BgL_tmpz00_10344;

						BgL_tmpz00_10344 = ((BgL_objectz00_bglt) BgL_oz00_311);
						BgL_auxz00_10343 = BGL_OBJECT_WIDENING(BgL_tmpz00_10344);
					}
					BgL_auxz00_10342 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10343);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10342))->
					BgL_ownerz00);
			}
		}

	}



/* &make-vector-app-owner */
	BgL_variablez00_bglt BGl_z62makezd2vectorzd2appzd2ownerzb0zzcfa_info2z00(obj_t
		BgL_envz00_6654, obj_t BgL_oz00_6655)
	{
		{	/* Cfa/cinfo2.sch 664 */
			return
				BGl_makezd2vectorzd2appzd2ownerzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6655));
		}

	}



/* make-vector-app-lost-stamp */
	BGL_EXPORTED_DEF long
		BGl_makezd2vectorzd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_314)
	{
		{	/* Cfa/cinfo2.sch 666 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10351;

				{
					obj_t BgL_auxz00_10352;

					{	/* Cfa/cinfo2.sch 666 */
						BgL_objectz00_bglt BgL_tmpz00_10353;

						BgL_tmpz00_10353 = ((BgL_objectz00_bglt) BgL_oz00_314);
						BgL_auxz00_10352 = BGL_OBJECT_WIDENING(BgL_tmpz00_10353);
					}
					BgL_auxz00_10351 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10352);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10351))->
					BgL_lostzd2stampzd2);
			}
		}

	}



/* &make-vector-app-lost-stamp */
	obj_t BGl_z62makezd2vectorzd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_6656, obj_t BgL_oz00_6657)
	{
		{	/* Cfa/cinfo2.sch 666 */
			return
				BINT(BGl_makezd2vectorzd2appzd2lostzd2stampz00zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6657)));
		}

	}



/* make-vector-app-lost-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_315, long BgL_vz00_316)
	{
		{	/* Cfa/cinfo2.sch 667 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10361;

				{
					obj_t BgL_auxz00_10362;

					{	/* Cfa/cinfo2.sch 667 */
						BgL_objectz00_bglt BgL_tmpz00_10363;

						BgL_tmpz00_10363 = ((BgL_objectz00_bglt) BgL_oz00_315);
						BgL_auxz00_10362 = BGL_OBJECT_WIDENING(BgL_tmpz00_10363);
					}
					BgL_auxz00_10361 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10362);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10361))->
						BgL_lostzd2stampzd2) = ((long) BgL_vz00_316), BUNSPEC);
		}}

	}



/* &make-vector-app-lost-stamp-set! */
	obj_t
		BGl_z62makezd2vectorzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6658, obj_t BgL_oz00_6659, obj_t BgL_vz00_6660)
	{
		{	/* Cfa/cinfo2.sch 667 */
			return
				BGl_makezd2vectorzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6659), (long) CINT(BgL_vz00_6660));
		}

	}



/* make-vector-app-value-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2vectorzd2appzd2valuezd2approxz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_317)
	{
		{	/* Cfa/cinfo2.sch 668 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10371;

				{
					obj_t BgL_auxz00_10372;

					{	/* Cfa/cinfo2.sch 668 */
						BgL_objectz00_bglt BgL_tmpz00_10373;

						BgL_tmpz00_10373 = ((BgL_objectz00_bglt) BgL_oz00_317);
						BgL_auxz00_10372 = BGL_OBJECT_WIDENING(BgL_tmpz00_10373);
					}
					BgL_auxz00_10371 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10372);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10371))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &make-vector-app-value-approx */
	BgL_approxz00_bglt
		BGl_z62makezd2vectorzd2appzd2valuezd2approxz62zzcfa_info2z00(obj_t
		BgL_envz00_6661, obj_t BgL_oz00_6662)
	{
		{	/* Cfa/cinfo2.sch 668 */
			return
				BGl_makezd2vectorzd2appzd2valuezd2approxz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6662));
		}

	}



/* make-vector-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2vectorzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_320)
	{
		{	/* Cfa/cinfo2.sch 670 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10380;

				{
					obj_t BgL_auxz00_10381;

					{	/* Cfa/cinfo2.sch 670 */
						BgL_objectz00_bglt BgL_tmpz00_10382;

						BgL_tmpz00_10382 = ((BgL_objectz00_bglt) BgL_oz00_320);
						BgL_auxz00_10381 = BGL_OBJECT_WIDENING(BgL_tmpz00_10382);
					}
					BgL_auxz00_10380 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10381);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10380))->
					BgL_approxz00);
			}
		}

	}



/* &make-vector-app-approx */
	BgL_approxz00_bglt BGl_z62makezd2vectorzd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_6663, obj_t BgL_oz00_6664)
	{
		{	/* Cfa/cinfo2.sch 670 */
			return
				BGl_makezd2vectorzd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6664));
		}

	}



/* make-vector-app-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2approxzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_321, BgL_approxz00_bglt BgL_vz00_322)
	{
		{	/* Cfa/cinfo2.sch 671 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_10389;

				{
					obj_t BgL_auxz00_10390;

					{	/* Cfa/cinfo2.sch 671 */
						BgL_objectz00_bglt BgL_tmpz00_10391;

						BgL_tmpz00_10391 = ((BgL_objectz00_bglt) BgL_oz00_321);
						BgL_auxz00_10390 = BGL_OBJECT_WIDENING(BgL_tmpz00_10391);
					}
					BgL_auxz00_10389 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_10390);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_10389))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_vz00_322), BUNSPEC);
			}
		}

	}



/* &make-vector-app-approx-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6665, obj_t BgL_oz00_6666, obj_t BgL_vz00_6667)
	{
		{	/* Cfa/cinfo2.sch 671 */
			return
				BGl_makezd2vectorzd2appzd2approxzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6666),
				((BgL_approxz00_bglt) BgL_vz00_6667));
		}

	}



/* make-vector-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_323)
	{
		{	/* Cfa/cinfo2.sch 672 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_323)))->BgL_argsz00);
		}

	}



/* &make-vector-app-args */
	obj_t BGl_z62makezd2vectorzd2appzd2argszb0zzcfa_info2z00(obj_t
		BgL_envz00_6668, obj_t BgL_oz00_6669)
	{
		{	/* Cfa/cinfo2.sch 672 */
			return
				BGl_makezd2vectorzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6669));
		}

	}



/* make-vector-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_324, obj_t BgL_vz00_325)
	{
		{	/* Cfa/cinfo2.sch 673 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_324)))->BgL_argsz00) =
				((obj_t) BgL_vz00_325), BUNSPEC);
		}

	}



/* &make-vector-app-args-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6670, obj_t BgL_oz00_6671, obj_t BgL_vz00_6672)
	{
		{	/* Cfa/cinfo2.sch 673 */
			return
				BGl_makezd2vectorzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6671), BgL_vz00_6672);
		}

	}



/* make-vector-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_makezd2vectorzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_326)
	{
		{	/* Cfa/cinfo2.sch 674 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_326)))->BgL_funz00);
		}

	}



/* &make-vector-app-fun */
	BgL_varz00_bglt BGl_z62makezd2vectorzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6673, obj_t BgL_oz00_6674)
	{
		{	/* Cfa/cinfo2.sch 674 */
			return
				BGl_makezd2vectorzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6674));
		}

	}



/* make-vector-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_327, BgL_varz00_bglt BgL_vz00_328)
	{
		{	/* Cfa/cinfo2.sch 675 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_327)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_328), BUNSPEC);
		}

	}



/* &make-vector-app-fun-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6675, obj_t BgL_oz00_6676, obj_t BgL_vz00_6677)
	{
		{	/* Cfa/cinfo2.sch 675 */
			return
				BGl_makezd2vectorzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6676), ((BgL_varz00_bglt) BgL_vz00_6677));
		}

	}



/* make-vector-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_329)
	{
		{	/* Cfa/cinfo2.sch 676 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_329)))->BgL_keyz00);
		}

	}



/* &make-vector-app-key */
	obj_t BGl_z62makezd2vectorzd2appzd2keyzb0zzcfa_info2z00(obj_t BgL_envz00_6678,
		obj_t BgL_oz00_6679)
	{
		{	/* Cfa/cinfo2.sch 676 */
			return
				BGl_makezd2vectorzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6679));
		}

	}



/* make-vector-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_330, obj_t BgL_vz00_331)
	{
		{	/* Cfa/cinfo2.sch 677 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_330)))->BgL_keyz00) =
				((obj_t) BgL_vz00_331), BUNSPEC);
		}

	}



/* &make-vector-app-key-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6680, obj_t BgL_oz00_6681, obj_t BgL_vz00_6682)
	{
		{	/* Cfa/cinfo2.sch 677 */
			return
				BGl_makezd2vectorzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6681), BgL_vz00_6682);
		}

	}



/* make-vector-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_332)
	{
		{	/* Cfa/cinfo2.sch 678 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_332)))->BgL_sidezd2effectzd2);
		}

	}



/* &make-vector-app-side-effect */
	obj_t BGl_z62makezd2vectorzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6683, obj_t BgL_oz00_6684)
	{
		{	/* Cfa/cinfo2.sch 678 */
			return
				BGl_makezd2vectorzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6684));
		}

	}



/* make-vector-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_333, obj_t BgL_vz00_334)
	{
		{	/* Cfa/cinfo2.sch 679 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_333)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_334), BUNSPEC);
		}

	}



/* &make-vector-app-side-effect-set! */
	obj_t
		BGl_z62makezd2vectorzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6685, obj_t BgL_oz00_6686, obj_t BgL_vz00_6687)
	{
		{	/* Cfa/cinfo2.sch 679 */
			return
				BGl_makezd2vectorzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6686), BgL_vz00_6687);
		}

	}



/* make-vector-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2vectorzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_335)
	{
		{	/* Cfa/cinfo2.sch 680 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_335)))->BgL_typez00);
		}

	}



/* &make-vector-app-type */
	BgL_typez00_bglt BGl_z62makezd2vectorzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6688, obj_t BgL_oz00_6689)
	{
		{	/* Cfa/cinfo2.sch 680 */
			return
				BGl_makezd2vectorzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6689));
		}

	}



/* make-vector-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_336, BgL_typez00_bglt BgL_vz00_337)
	{
		{	/* Cfa/cinfo2.sch 681 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_336)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_337), BUNSPEC);
		}

	}



/* &make-vector-app-type-set! */
	obj_t BGl_z62makezd2vectorzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6690, obj_t BgL_oz00_6691, obj_t BgL_vz00_6692)
	{
		{	/* Cfa/cinfo2.sch 681 */
			return
				BGl_makezd2vectorzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6691), ((BgL_typez00_bglt) BgL_vz00_6692));
		}

	}



/* make-vector-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2vectorzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_338)
	{
		{	/* Cfa/cinfo2.sch 682 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_338)))->BgL_locz00);
		}

	}



/* &make-vector-app-loc */
	obj_t BGl_z62makezd2vectorzd2appzd2loczb0zzcfa_info2z00(obj_t BgL_envz00_6693,
		obj_t BgL_oz00_6694)
	{
		{	/* Cfa/cinfo2.sch 682 */
			return
				BGl_makezd2vectorzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6694));
		}

	}



/* make-pre-cons-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2conszd2appzd2zzcfa_info2z00(obj_t BgL_loc1542z00_341,
		BgL_typez00_bglt BgL_type1543z00_342, obj_t BgL_sidezd2effect1544zd2_343,
		obj_t BgL_key1545z00_344, BgL_varz00_bglt BgL_fun1546z00_345,
		obj_t BgL_args1547z00_346, BgL_variablez00_bglt BgL_owner1548z00_347)
	{
		{	/* Cfa/cinfo2.sch 686 */
			{	/* Cfa/cinfo2.sch 686 */
				BgL_appz00_bglt BgL_new1504z00_8086;

				{	/* Cfa/cinfo2.sch 686 */
					BgL_appz00_bglt BgL_tmp1502z00_8087;
					BgL_prezd2conszd2appz00_bglt BgL_wide1503z00_8088;

					{
						BgL_appz00_bglt BgL_auxz00_10445;

						{	/* Cfa/cinfo2.sch 686 */
							BgL_appz00_bglt BgL_new1501z00_8089;

							BgL_new1501z00_8089 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 686 */
								long BgL_arg1956z00_8090;

								{	/* Cfa/cinfo2.sch 686 */
									long BgL_res2823z00_8091;

									BgL_res2823z00_8091 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1956z00_8090 = BgL_res2823z00_8091;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1501z00_8089),
									BgL_arg1956z00_8090);
							}
							{	/* Cfa/cinfo2.sch 686 */
								BgL_objectz00_bglt BgL_tmpz00_10450;

								BgL_tmpz00_10450 = ((BgL_objectz00_bglt) BgL_new1501z00_8089);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10450, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1501z00_8089);
							BgL_auxz00_10445 = BgL_new1501z00_8089;
						}
						BgL_tmp1502z00_8087 = ((BgL_appz00_bglt) BgL_auxz00_10445);
					}
					BgL_wide1503z00_8088 =
						((BgL_prezd2conszd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 686 */
						obj_t BgL_auxz00_10458;
						BgL_objectz00_bglt BgL_tmpz00_10456;

						BgL_auxz00_10458 = ((obj_t) BgL_wide1503z00_8088);
						BgL_tmpz00_10456 = ((BgL_objectz00_bglt) BgL_tmp1502z00_8087);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10456, BgL_auxz00_10458);
					}
					((BgL_objectz00_bglt) BgL_tmp1502z00_8087);
					{	/* Cfa/cinfo2.sch 686 */
						long BgL_arg1955z00_8092;

						{	/* Cfa/cinfo2.sch 686 */
							long BgL_res2824z00_8093;

							BgL_res2824z00_8093 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2appz00zzcfa_info2z00);
							BgL_arg1955z00_8092 = BgL_res2824z00_8093;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1502z00_8087), BgL_arg1955z00_8092);
					}
					BgL_new1504z00_8086 = ((BgL_appz00_bglt) BgL_tmp1502z00_8087);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1504z00_8086)))->BgL_locz00) =
					((obj_t) BgL_loc1542z00_341), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1504z00_8086)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1543z00_342), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1504z00_8086)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1544zd2_343), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1504z00_8086)))->BgL_keyz00) =
					((obj_t) BgL_key1545z00_344), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1504z00_8086)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1546z00_345), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1504z00_8086)))->
						BgL_argsz00) = ((obj_t) BgL_args1547z00_346), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1504z00_8086)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2conszd2appz00_bglt BgL_auxz00_10480;

					{
						obj_t BgL_auxz00_10481;

						{	/* Cfa/cinfo2.sch 686 */
							BgL_objectz00_bglt BgL_tmpz00_10482;

							BgL_tmpz00_10482 = ((BgL_objectz00_bglt) BgL_new1504z00_8086);
							BgL_auxz00_10481 = BGL_OBJECT_WIDENING(BgL_tmpz00_10482);
						}
						BgL_auxz00_10480 =
							((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_10481);
					}
					((((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_10480))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1548z00_347), BUNSPEC);
				}
				return BgL_new1504z00_8086;
			}
		}

	}



/* &make-pre-cons-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2conszd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6695, obj_t BgL_loc1542z00_6696, obj_t BgL_type1543z00_6697,
		obj_t BgL_sidezd2effect1544zd2_6698, obj_t BgL_key1545z00_6699,
		obj_t BgL_fun1546z00_6700, obj_t BgL_args1547z00_6701,
		obj_t BgL_owner1548z00_6702)
	{
		{	/* Cfa/cinfo2.sch 686 */
			return
				BGl_makezd2prezd2conszd2appzd2zzcfa_info2z00(BgL_loc1542z00_6696,
				((BgL_typez00_bglt) BgL_type1543z00_6697),
				BgL_sidezd2effect1544zd2_6698, BgL_key1545z00_6699,
				((BgL_varz00_bglt) BgL_fun1546z00_6700), BgL_args1547z00_6701,
				((BgL_variablez00_bglt) BgL_owner1548z00_6702));
		}

	}



/* pre-cons-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2conszd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_348)
	{
		{	/* Cfa/cinfo2.sch 687 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_348,
				BGl_prezd2conszd2appz00zzcfa_info2z00);
		}

	}



/* &pre-cons-app? */
	obj_t BGl_z62prezd2conszd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6703,
		obj_t BgL_objz00_6704)
	{
		{	/* Cfa/cinfo2.sch 687 */
			return BBOOL(BGl_prezd2conszd2appzf3zf3zzcfa_info2z00(BgL_objz00_6704));
		}

	}



/* pre-cons-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_prezd2conszd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 688 */
			{	/* Cfa/cinfo2.sch 688 */
				obj_t BgL_classz00_4970;

				BgL_classz00_4970 = BGl_prezd2conszd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 688 */
					obj_t BgL__ortest_1106z00_4971;

					BgL__ortest_1106z00_4971 = BGL_CLASS_NIL(BgL_classz00_4970);
					if (CBOOL(BgL__ortest_1106z00_4971))
						{	/* Cfa/cinfo2.sch 688 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4971);
						}
					else
						{	/* Cfa/cinfo2.sch 688 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4970));
						}
				}
			}
		}

	}



/* &pre-cons-app-nil */
	BgL_appz00_bglt BGl_z62prezd2conszd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6705)
	{
		{	/* Cfa/cinfo2.sch 688 */
			return BGl_prezd2conszd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* pre-cons-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_prezd2conszd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_349)
	{
		{	/* Cfa/cinfo2.sch 689 */
			{
				BgL_prezd2conszd2appz00_bglt BgL_auxz00_10501;

				{
					obj_t BgL_auxz00_10502;

					{	/* Cfa/cinfo2.sch 689 */
						BgL_objectz00_bglt BgL_tmpz00_10503;

						BgL_tmpz00_10503 = ((BgL_objectz00_bglt) BgL_oz00_349);
						BgL_auxz00_10502 = BGL_OBJECT_WIDENING(BgL_tmpz00_10503);
					}
					BgL_auxz00_10501 = ((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_10502);
				}
				return
					(((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_10501))->
					BgL_ownerz00);
			}
		}

	}



/* &pre-cons-app-owner */
	BgL_variablez00_bglt BGl_z62prezd2conszd2appzd2ownerzb0zzcfa_info2z00(obj_t
		BgL_envz00_6706, obj_t BgL_oz00_6707)
	{
		{	/* Cfa/cinfo2.sch 689 */
			return
				BGl_prezd2conszd2appzd2ownerzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6707));
		}

	}



/* pre-cons-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_352)
	{
		{	/* Cfa/cinfo2.sch 691 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_352)))->BgL_argsz00);
		}

	}



/* &pre-cons-app-args */
	obj_t BGl_z62prezd2conszd2appzd2argszb0zzcfa_info2z00(obj_t BgL_envz00_6708,
		obj_t BgL_oz00_6709)
	{
		{	/* Cfa/cinfo2.sch 691 */
			return
				BGl_prezd2conszd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6709));
		}

	}



/* pre-cons-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_353, obj_t BgL_vz00_354)
	{
		{	/* Cfa/cinfo2.sch 692 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_353)))->BgL_argsz00) =
				((obj_t) BgL_vz00_354), BUNSPEC);
		}

	}



/* &pre-cons-app-args-set! */
	obj_t BGl_z62prezd2conszd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6710, obj_t BgL_oz00_6711, obj_t BgL_vz00_6712)
	{
		{	/* Cfa/cinfo2.sch 692 */
			return
				BGl_prezd2conszd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6711), BgL_vz00_6712);
		}

	}



/* pre-cons-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2conszd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_355)
	{
		{	/* Cfa/cinfo2.sch 693 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_355)))->BgL_funz00);
		}

	}



/* &pre-cons-app-fun */
	BgL_varz00_bglt BGl_z62prezd2conszd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6713, obj_t BgL_oz00_6714)
	{
		{	/* Cfa/cinfo2.sch 693 */
			return
				BGl_prezd2conszd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6714));
		}

	}



/* pre-cons-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_356, BgL_varz00_bglt BgL_vz00_357)
	{
		{	/* Cfa/cinfo2.sch 694 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_356)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_357), BUNSPEC);
		}

	}



/* &pre-cons-app-fun-set! */
	obj_t BGl_z62prezd2conszd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6715, obj_t BgL_oz00_6716, obj_t BgL_vz00_6717)
	{
		{	/* Cfa/cinfo2.sch 694 */
			return
				BGl_prezd2conszd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6716), ((BgL_varz00_bglt) BgL_vz00_6717));
		}

	}



/* pre-cons-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_358)
	{
		{	/* Cfa/cinfo2.sch 695 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_358)))->BgL_keyz00);
		}

	}



/* &pre-cons-app-key */
	obj_t BGl_z62prezd2conszd2appzd2keyzb0zzcfa_info2z00(obj_t BgL_envz00_6718,
		obj_t BgL_oz00_6719)
	{
		{	/* Cfa/cinfo2.sch 695 */
			return
				BGl_prezd2conszd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6719));
		}

	}



/* pre-cons-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_359, obj_t BgL_vz00_360)
	{
		{	/* Cfa/cinfo2.sch 696 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_359)))->BgL_keyz00) =
				((obj_t) BgL_vz00_360), BUNSPEC);
		}

	}



/* &pre-cons-app-key-set! */
	obj_t BGl_z62prezd2conszd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6720, obj_t BgL_oz00_6721, obj_t BgL_vz00_6722)
	{
		{	/* Cfa/cinfo2.sch 696 */
			return
				BGl_prezd2conszd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6721), BgL_vz00_6722);
		}

	}



/* pre-cons-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_361)
	{
		{	/* Cfa/cinfo2.sch 697 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_361)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-cons-app-side-effect */
	obj_t BGl_z62prezd2conszd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6723, obj_t BgL_oz00_6724)
	{
		{	/* Cfa/cinfo2.sch 697 */
			return
				BGl_prezd2conszd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6724));
		}

	}



/* pre-cons-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_362, obj_t BgL_vz00_363)
	{
		{	/* Cfa/cinfo2.sch 698 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_362)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_363), BUNSPEC);
		}

	}



/* &pre-cons-app-side-effect-set! */
	obj_t BGl_z62prezd2conszd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6725, obj_t BgL_oz00_6726, obj_t BgL_vz00_6727)
	{
		{	/* Cfa/cinfo2.sch 698 */
			return
				BGl_prezd2conszd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6726), BgL_vz00_6727);
		}

	}



/* pre-cons-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2conszd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_364)
	{
		{	/* Cfa/cinfo2.sch 699 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_364)))->BgL_typez00);
		}

	}



/* &pre-cons-app-type */
	BgL_typez00_bglt BGl_z62prezd2conszd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6728, obj_t BgL_oz00_6729)
	{
		{	/* Cfa/cinfo2.sch 699 */
			return
				BGl_prezd2conszd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6729));
		}

	}



/* pre-cons-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_365, BgL_typez00_bglt BgL_vz00_366)
	{
		{	/* Cfa/cinfo2.sch 700 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_365)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_366), BUNSPEC);
		}

	}



/* &pre-cons-app-type-set! */
	obj_t BGl_z62prezd2conszd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6730, obj_t BgL_oz00_6731, obj_t BgL_vz00_6732)
	{
		{	/* Cfa/cinfo2.sch 700 */
			return
				BGl_prezd2conszd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6731), ((BgL_typez00_bglt) BgL_vz00_6732));
		}

	}



/* pre-cons-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_367)
	{
		{	/* Cfa/cinfo2.sch 701 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_367)))->BgL_locz00);
		}

	}



/* &pre-cons-app-loc */
	obj_t BGl_z62prezd2conszd2appzd2loczb0zzcfa_info2z00(obj_t BgL_envz00_6733,
		obj_t BgL_oz00_6734)
	{
		{	/* Cfa/cinfo2.sch 701 */
			return
				BGl_prezd2conszd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6734));
		}

	}



/* make-pre-cons-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2conszd2refzd2appz00zzcfa_info2z00(obj_t BgL_loc1532z00_370,
		BgL_typez00_bglt BgL_type1533z00_371, obj_t BgL_sidezd2effect1534zd2_372,
		obj_t BgL_key1535z00_373, BgL_varz00_bglt BgL_fun1536z00_374,
		obj_t BgL_args1537z00_375, obj_t BgL_get1538z00_376)
	{
		{	/* Cfa/cinfo2.sch 705 */
			{	/* Cfa/cinfo2.sch 705 */
				BgL_appz00_bglt BgL_new1508z00_8094;

				{	/* Cfa/cinfo2.sch 705 */
					BgL_appz00_bglt BgL_tmp1506z00_8095;
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_wide1507z00_8096;

					{
						BgL_appz00_bglt BgL_auxz00_10556;

						{	/* Cfa/cinfo2.sch 705 */
							BgL_appz00_bglt BgL_new1505z00_8097;

							BgL_new1505z00_8097 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 705 */
								long BgL_arg1958z00_8098;

								{	/* Cfa/cinfo2.sch 705 */
									long BgL_res2825z00_8099;

									BgL_res2825z00_8099 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1958z00_8098 = BgL_res2825z00_8099;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1505z00_8097),
									BgL_arg1958z00_8098);
							}
							{	/* Cfa/cinfo2.sch 705 */
								BgL_objectz00_bglt BgL_tmpz00_10561;

								BgL_tmpz00_10561 = ((BgL_objectz00_bglt) BgL_new1505z00_8097);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10561, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1505z00_8097);
							BgL_auxz00_10556 = BgL_new1505z00_8097;
						}
						BgL_tmp1506z00_8095 = ((BgL_appz00_bglt) BgL_auxz00_10556);
					}
					BgL_wide1507z00_8096 =
						((BgL_prezd2conszd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 705 */
						obj_t BgL_auxz00_10569;
						BgL_objectz00_bglt BgL_tmpz00_10567;

						BgL_auxz00_10569 = ((obj_t) BgL_wide1507z00_8096);
						BgL_tmpz00_10567 = ((BgL_objectz00_bglt) BgL_tmp1506z00_8095);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10567, BgL_auxz00_10569);
					}
					((BgL_objectz00_bglt) BgL_tmp1506z00_8095);
					{	/* Cfa/cinfo2.sch 705 */
						long BgL_arg1957z00_8100;

						{	/* Cfa/cinfo2.sch 705 */
							long BgL_res2826z00_8101;

							BgL_res2826z00_8101 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
							BgL_arg1957z00_8100 = BgL_res2826z00_8101;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1506z00_8095), BgL_arg1957z00_8100);
					}
					BgL_new1508z00_8094 = ((BgL_appz00_bglt) BgL_tmp1506z00_8095);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1508z00_8094)))->BgL_locz00) =
					((obj_t) BgL_loc1532z00_370), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1508z00_8094)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1533z00_371), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1508z00_8094)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1534zd2_372), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1508z00_8094)))->BgL_keyz00) =
					((obj_t) BgL_key1535z00_373), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1508z00_8094)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1536z00_374), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1508z00_8094)))->
						BgL_argsz00) = ((obj_t) BgL_args1537z00_375), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1508z00_8094)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_10591;

					{
						obj_t BgL_auxz00_10592;

						{	/* Cfa/cinfo2.sch 705 */
							BgL_objectz00_bglt BgL_tmpz00_10593;

							BgL_tmpz00_10593 = ((BgL_objectz00_bglt) BgL_new1508z00_8094);
							BgL_auxz00_10592 = BGL_OBJECT_WIDENING(BgL_tmpz00_10593);
						}
						BgL_auxz00_10591 =
							((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_10592);
					}
					((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_10591))->
							BgL_getz00) = ((obj_t) BgL_get1538z00_376), BUNSPEC);
				}
				return BgL_new1508z00_8094;
			}
		}

	}



/* &make-pre-cons-ref-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2conszd2refzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6735, obj_t BgL_loc1532z00_6736, obj_t BgL_type1533z00_6737,
		obj_t BgL_sidezd2effect1534zd2_6738, obj_t BgL_key1535z00_6739,
		obj_t BgL_fun1536z00_6740, obj_t BgL_args1537z00_6741,
		obj_t BgL_get1538z00_6742)
	{
		{	/* Cfa/cinfo2.sch 705 */
			return
				BGl_makezd2prezd2conszd2refzd2appz00zzcfa_info2z00(BgL_loc1532z00_6736,
				((BgL_typez00_bglt) BgL_type1533z00_6737),
				BgL_sidezd2effect1534zd2_6738, BgL_key1535z00_6739,
				((BgL_varz00_bglt) BgL_fun1536z00_6740), BgL_args1537z00_6741,
				BgL_get1538z00_6742);
		}

	}



/* pre-cons-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2conszd2refzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_objz00_377)
	{
		{	/* Cfa/cinfo2.sch 706 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_377,
				BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-cons-ref-app? */
	obj_t BGl_z62prezd2conszd2refzd2appzf3z43zzcfa_info2z00(obj_t BgL_envz00_6743,
		obj_t BgL_objz00_6744)
	{
		{	/* Cfa/cinfo2.sch 706 */
			return
				BBOOL(BGl_prezd2conszd2refzd2appzf3z21zzcfa_info2z00(BgL_objz00_6744));
		}

	}



/* pre-cons-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2conszd2refzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 707 */
			{	/* Cfa/cinfo2.sch 707 */
				obj_t BgL_classz00_4990;

				BgL_classz00_4990 = BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 707 */
					obj_t BgL__ortest_1106z00_4991;

					BgL__ortest_1106z00_4991 = BGL_CLASS_NIL(BgL_classz00_4990);
					if (CBOOL(BgL__ortest_1106z00_4991))
						{	/* Cfa/cinfo2.sch 707 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_4991);
						}
					else
						{	/* Cfa/cinfo2.sch 707 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_4990));
						}
				}
			}
		}

	}



/* &pre-cons-ref-app-nil */
	BgL_appz00_bglt BGl_z62prezd2conszd2refzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6745)
	{
		{	/* Cfa/cinfo2.sch 707 */
			return BGl_prezd2conszd2refzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-cons-ref-app-get */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2getz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_378)
	{
		{	/* Cfa/cinfo2.sch 708 */
			{
				BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_10611;

				{
					obj_t BgL_auxz00_10612;

					{	/* Cfa/cinfo2.sch 708 */
						BgL_objectz00_bglt BgL_tmpz00_10613;

						BgL_tmpz00_10613 = ((BgL_objectz00_bglt) BgL_oz00_378);
						BgL_auxz00_10612 = BGL_OBJECT_WIDENING(BgL_tmpz00_10613);
					}
					BgL_auxz00_10611 =
						((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_10612);
				}
				return
					(((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_10611))->
					BgL_getz00);
			}
		}

	}



/* &pre-cons-ref-app-get */
	obj_t BGl_z62prezd2conszd2refzd2appzd2getz62zzcfa_info2z00(obj_t
		BgL_envz00_6746, obj_t BgL_oz00_6747)
	{
		{	/* Cfa/cinfo2.sch 708 */
			return
				BGl_prezd2conszd2refzd2appzd2getz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6747));
		}

	}



/* pre-cons-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_381)
	{
		{	/* Cfa/cinfo2.sch 710 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_381)))->BgL_argsz00);
		}

	}



/* &pre-cons-ref-app-args */
	obj_t BGl_z62prezd2conszd2refzd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_6748, obj_t BgL_oz00_6749)
	{
		{	/* Cfa/cinfo2.sch 710 */
			return
				BGl_prezd2conszd2refzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6749));
		}

	}



/* pre-cons-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_382, obj_t BgL_vz00_383)
	{
		{	/* Cfa/cinfo2.sch 711 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_382)))->BgL_argsz00) =
				((obj_t) BgL_vz00_383), BUNSPEC);
		}

	}



/* &pre-cons-ref-app-args-set! */
	obj_t BGl_z62prezd2conszd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6750, obj_t BgL_oz00_6751, obj_t BgL_vz00_6752)
	{
		{	/* Cfa/cinfo2.sch 711 */
			return
				BGl_prezd2conszd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6751), BgL_vz00_6752);
		}

	}



/* pre-cons-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2conszd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_384)
	{
		{	/* Cfa/cinfo2.sch 712 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_384)))->BgL_funz00);
		}

	}



/* &pre-cons-ref-app-fun */
	BgL_varz00_bglt BGl_z62prezd2conszd2refzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6753, obj_t BgL_oz00_6754)
	{
		{	/* Cfa/cinfo2.sch 712 */
			return
				BGl_prezd2conszd2refzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6754));
		}

	}



/* pre-cons-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_385, BgL_varz00_bglt BgL_vz00_386)
	{
		{	/* Cfa/cinfo2.sch 713 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_385)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_386), BUNSPEC);
		}

	}



/* &pre-cons-ref-app-fun-set! */
	obj_t BGl_z62prezd2conszd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6755, obj_t BgL_oz00_6756, obj_t BgL_vz00_6757)
	{
		{	/* Cfa/cinfo2.sch 713 */
			return
				BGl_prezd2conszd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6756), ((BgL_varz00_bglt) BgL_vz00_6757));
		}

	}



/* pre-cons-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_387)
	{
		{	/* Cfa/cinfo2.sch 714 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_387)))->BgL_keyz00);
		}

	}



/* &pre-cons-ref-app-key */
	obj_t BGl_z62prezd2conszd2refzd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_6758, obj_t BgL_oz00_6759)
	{
		{	/* Cfa/cinfo2.sch 714 */
			return
				BGl_prezd2conszd2refzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6759));
		}

	}



/* pre-cons-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_388, obj_t BgL_vz00_389)
	{
		{	/* Cfa/cinfo2.sch 715 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_388)))->BgL_keyz00) =
				((obj_t) BgL_vz00_389), BUNSPEC);
		}

	}



/* &pre-cons-ref-app-key-set! */
	obj_t BGl_z62prezd2conszd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6760, obj_t BgL_oz00_6761, obj_t BgL_vz00_6762)
	{
		{	/* Cfa/cinfo2.sch 715 */
			return
				BGl_prezd2conszd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6761), BgL_vz00_6762);
		}

	}



/* pre-cons-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_390)
	{
		{	/* Cfa/cinfo2.sch 716 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_390)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-cons-ref-app-side-effect */
	obj_t BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6763, obj_t BgL_oz00_6764)
	{
		{	/* Cfa/cinfo2.sch 716 */
			return
				BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6764));
		}

	}



/* pre-cons-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_391, obj_t BgL_vz00_392)
	{
		{	/* Cfa/cinfo2.sch 717 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_391)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_392), BUNSPEC);
		}

	}



/* &pre-cons-ref-app-side-effect-set! */
	obj_t
		BGl_z62prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_6765, obj_t BgL_oz00_6766, obj_t BgL_vz00_6767)
	{
		{	/* Cfa/cinfo2.sch 717 */
			return
				BGl_prezd2conszd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6766), BgL_vz00_6767);
		}

	}



/* pre-cons-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2conszd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_393)
	{
		{	/* Cfa/cinfo2.sch 718 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_393)))->BgL_typez00);
		}

	}



/* &pre-cons-ref-app-type */
	BgL_typez00_bglt BGl_z62prezd2conszd2refzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6768, obj_t BgL_oz00_6769)
	{
		{	/* Cfa/cinfo2.sch 718 */
			return
				BGl_prezd2conszd2refzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6769));
		}

	}



/* pre-cons-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_394, BgL_typez00_bglt BgL_vz00_395)
	{
		{	/* Cfa/cinfo2.sch 719 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_394)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_395), BUNSPEC);
		}

	}



/* &pre-cons-ref-app-type-set! */
	obj_t BGl_z62prezd2conszd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6770, obj_t BgL_oz00_6771, obj_t BgL_vz00_6772)
	{
		{	/* Cfa/cinfo2.sch 719 */
			return
				BGl_prezd2conszd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6771), ((BgL_typez00_bglt) BgL_vz00_6772));
		}

	}



/* pre-cons-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_396)
	{
		{	/* Cfa/cinfo2.sch 720 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_396)))->BgL_locz00);
		}

	}



/* &pre-cons-ref-app-loc */
	obj_t BGl_z62prezd2conszd2refzd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_6773, obj_t BgL_oz00_6774)
	{
		{	/* Cfa/cinfo2.sch 720 */
			return
				BGl_prezd2conszd2refzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6774));
		}

	}



/* make-pre-cons-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2conszd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_loc1522z00_399, BgL_typez00_bglt BgL_type1523z00_400,
		obj_t BgL_sidezd2effect1524zd2_401, obj_t BgL_key1525z00_402,
		BgL_varz00_bglt BgL_fun1526z00_403, obj_t BgL_args1527z00_404,
		obj_t BgL_get1528z00_405)
	{
		{	/* Cfa/cinfo2.sch 724 */
			{	/* Cfa/cinfo2.sch 724 */
				BgL_appz00_bglt BgL_new1512z00_8102;

				{	/* Cfa/cinfo2.sch 724 */
					BgL_appz00_bglt BgL_tmp1510z00_8103;
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_wide1511z00_8104;

					{
						BgL_appz00_bglt BgL_auxz00_10666;

						{	/* Cfa/cinfo2.sch 724 */
							BgL_appz00_bglt BgL_new1509z00_8105;

							BgL_new1509z00_8105 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 724 */
								long BgL_arg1960z00_8106;

								{	/* Cfa/cinfo2.sch 724 */
									long BgL_res2827z00_8107;

									BgL_res2827z00_8107 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1960z00_8106 = BgL_res2827z00_8107;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1509z00_8105),
									BgL_arg1960z00_8106);
							}
							{	/* Cfa/cinfo2.sch 724 */
								BgL_objectz00_bglt BgL_tmpz00_10671;

								BgL_tmpz00_10671 = ((BgL_objectz00_bglt) BgL_new1509z00_8105);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10671, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1509z00_8105);
							BgL_auxz00_10666 = BgL_new1509z00_8105;
						}
						BgL_tmp1510z00_8103 = ((BgL_appz00_bglt) BgL_auxz00_10666);
					}
					BgL_wide1511z00_8104 =
						((BgL_prezd2conszd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.sch 724 */
						obj_t BgL_auxz00_10679;
						BgL_objectz00_bglt BgL_tmpz00_10677;

						BgL_auxz00_10679 = ((obj_t) BgL_wide1511z00_8104);
						BgL_tmpz00_10677 = ((BgL_objectz00_bglt) BgL_tmp1510z00_8103);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10677, BgL_auxz00_10679);
					}
					((BgL_objectz00_bglt) BgL_tmp1510z00_8103);
					{	/* Cfa/cinfo2.sch 724 */
						long BgL_arg1959z00_8108;

						{	/* Cfa/cinfo2.sch 724 */
							long BgL_res2828z00_8109;

							BgL_res2828z00_8109 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg1959z00_8108 = BgL_res2828z00_8109;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1510z00_8103), BgL_arg1959z00_8108);
					}
					BgL_new1512z00_8102 = ((BgL_appz00_bglt) BgL_tmp1510z00_8103);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1512z00_8102)))->BgL_locz00) =
					((obj_t) BgL_loc1522z00_399), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1512z00_8102)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1523z00_400), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1512z00_8102)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1524zd2_401), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1512z00_8102)))->BgL_keyz00) =
					((obj_t) BgL_key1525z00_402), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1512z00_8102)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1526z00_403), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1512z00_8102)))->
						BgL_argsz00) = ((obj_t) BgL_args1527z00_404), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1512z00_8102)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_10701;

					{
						obj_t BgL_auxz00_10702;

						{	/* Cfa/cinfo2.sch 724 */
							BgL_objectz00_bglt BgL_tmpz00_10703;

							BgL_tmpz00_10703 = ((BgL_objectz00_bglt) BgL_new1512z00_8102);
							BgL_auxz00_10702 = BGL_OBJECT_WIDENING(BgL_tmpz00_10703);
						}
						BgL_auxz00_10701 =
							((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_10702);
					}
					((((BgL_prezd2conszd2setz12zd2appzc0_bglt)
								COBJECT(BgL_auxz00_10701))->BgL_getz00) =
						((obj_t) BgL_get1528z00_405), BUNSPEC);
				}
				return BgL_new1512z00_8102;
			}
		}

	}



/* &make-pre-cons-set!-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2conszd2setz12zd2appz70zzcfa_info2z00(obj_t
		BgL_envz00_6775, obj_t BgL_loc1522z00_6776, obj_t BgL_type1523z00_6777,
		obj_t BgL_sidezd2effect1524zd2_6778, obj_t BgL_key1525z00_6779,
		obj_t BgL_fun1526z00_6780, obj_t BgL_args1527z00_6781,
		obj_t BgL_get1528z00_6782)
	{
		{	/* Cfa/cinfo2.sch 724 */
			return
				BGl_makezd2prezd2conszd2setz12zd2appz12zzcfa_info2z00
				(BgL_loc1522z00_6776, ((BgL_typez00_bglt) BgL_type1523z00_6777),
				BgL_sidezd2effect1524zd2_6778, BgL_key1525z00_6779,
				((BgL_varz00_bglt) BgL_fun1526z00_6780), BgL_args1527z00_6781,
				BgL_get1528z00_6782);
		}

	}



/* pre-cons-set!-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2conszd2setz12zd2appzf3z33zzcfa_info2z00(obj_t BgL_objz00_406)
	{
		{	/* Cfa/cinfo2.sch 725 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_406,
				BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
		}

	}



/* &pre-cons-set!-app? */
	obj_t BGl_z62prezd2conszd2setz12zd2appzf3z51zzcfa_info2z00(obj_t
		BgL_envz00_6783, obj_t BgL_objz00_6784)
	{
		{	/* Cfa/cinfo2.sch 725 */
			return
				BBOOL(BGl_prezd2conszd2setz12zd2appzf3z33zzcfa_info2z00
				(BgL_objz00_6784));
		}

	}



/* pre-cons-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2conszd2setz12zd2appzd2nilz12zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 726 */
			{	/* Cfa/cinfo2.sch 726 */
				obj_t BgL_classz00_5010;

				BgL_classz00_5010 = BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 726 */
					obj_t BgL__ortest_1106z00_5011;

					BgL__ortest_1106z00_5011 = BGL_CLASS_NIL(BgL_classz00_5010);
					if (CBOOL(BgL__ortest_1106z00_5011))
						{	/* Cfa/cinfo2.sch 726 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5011);
						}
					else
						{	/* Cfa/cinfo2.sch 726 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5010));
						}
				}
			}
		}

	}



/* &pre-cons-set!-app-nil */
	BgL_appz00_bglt BGl_z62prezd2conszd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t
		BgL_envz00_6785)
	{
		{	/* Cfa/cinfo2.sch 726 */
			return BGl_prezd2conszd2setz12zd2appzd2nilz12zzcfa_info2z00();
		}

	}



/* pre-cons-set!-app-get */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2getz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_407)
	{
		{	/* Cfa/cinfo2.sch 727 */
			{
				BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_10721;

				{
					obj_t BgL_auxz00_10722;

					{	/* Cfa/cinfo2.sch 727 */
						BgL_objectz00_bglt BgL_tmpz00_10723;

						BgL_tmpz00_10723 = ((BgL_objectz00_bglt) BgL_oz00_407);
						BgL_auxz00_10722 = BGL_OBJECT_WIDENING(BgL_tmpz00_10723);
					}
					BgL_auxz00_10721 =
						((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_10722);
				}
				return
					(((BgL_prezd2conszd2setz12zd2appzc0_bglt) COBJECT(BgL_auxz00_10721))->
					BgL_getz00);
			}
		}

	}



/* &pre-cons-set!-app-get */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2getz70zzcfa_info2z00(obj_t
		BgL_envz00_6786, obj_t BgL_oz00_6787)
	{
		{	/* Cfa/cinfo2.sch 727 */
			return
				BGl_prezd2conszd2setz12zd2appzd2getz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6787));
		}

	}



/* pre-cons-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_410)
	{
		{	/* Cfa/cinfo2.sch 729 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_410)))->BgL_argsz00);
		}

	}



/* &pre-cons-set!-app-args */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t
		BgL_envz00_6788, obj_t BgL_oz00_6789)
	{
		{	/* Cfa/cinfo2.sch 729 */
			return
				BGl_prezd2conszd2setz12zd2appzd2argsz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6789));
		}

	}



/* pre-cons-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_411, obj_t BgL_vz00_412)
	{
		{	/* Cfa/cinfo2.sch 730 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_411)))->BgL_argsz00) =
				((obj_t) BgL_vz00_412), BUNSPEC);
		}

	}



/* &pre-cons-set!-app-args-set! */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6790, obj_t BgL_oz00_6791, obj_t BgL_vz00_6792)
	{
		{	/* Cfa/cinfo2.sch 730 */
			return
				BGl_prezd2conszd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6791), BgL_vz00_6792);
		}

	}



/* pre-cons-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2conszd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_413)
	{
		{	/* Cfa/cinfo2.sch 731 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_413)))->BgL_funz00);
		}

	}



/* &pre-cons-set!-app-fun */
	BgL_varz00_bglt BGl_z62prezd2conszd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t
		BgL_envz00_6793, obj_t BgL_oz00_6794)
	{
		{	/* Cfa/cinfo2.sch 731 */
			return
				BGl_prezd2conszd2setz12zd2appzd2funz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6794));
		}

	}



/* pre-cons-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_414, BgL_varz00_bglt BgL_vz00_415)
	{
		{	/* Cfa/cinfo2.sch 732 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_414)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_415), BUNSPEC);
		}

	}



/* &pre-cons-set!-app-fun-set! */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6795, obj_t BgL_oz00_6796, obj_t BgL_vz00_6797)
	{
		{	/* Cfa/cinfo2.sch 732 */
			return
				BGl_prezd2conszd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6796), ((BgL_varz00_bglt) BgL_vz00_6797));
		}

	}



/* pre-cons-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_416)
	{
		{	/* Cfa/cinfo2.sch 733 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_416)))->BgL_keyz00);
		}

	}



/* &pre-cons-set!-app-key */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t
		BgL_envz00_6798, obj_t BgL_oz00_6799)
	{
		{	/* Cfa/cinfo2.sch 733 */
			return
				BGl_prezd2conszd2setz12zd2appzd2keyz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6799));
		}

	}



/* pre-cons-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_417, obj_t BgL_vz00_418)
	{
		{	/* Cfa/cinfo2.sch 734 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_417)))->BgL_keyz00) =
				((obj_t) BgL_vz00_418), BUNSPEC);
		}

	}



/* &pre-cons-set!-app-key-set! */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6800, obj_t BgL_oz00_6801, obj_t BgL_vz00_6802)
	{
		{	/* Cfa/cinfo2.sch 734 */
			return
				BGl_prezd2conszd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6801), BgL_vz00_6802);
		}

	}



/* pre-cons-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_419)
	{
		{	/* Cfa/cinfo2.sch 735 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_419)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-cons-set!-app-side-effect */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00(obj_t
		BgL_envz00_6803, obj_t BgL_oz00_6804)
	{
		{	/* Cfa/cinfo2.sch 735 */
			return
				BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6804));
		}

	}



/* pre-cons-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_420, obj_t BgL_vz00_421)
	{
		{	/* Cfa/cinfo2.sch 736 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_420)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_421), BUNSPEC);
		}

	}



/* &pre-cons-set!-app-side-effect-set! */
	obj_t
		BGl_z62prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t BgL_envz00_6805, obj_t BgL_oz00_6806, obj_t BgL_vz00_6807)
	{
		{	/* Cfa/cinfo2.sch 736 */
			return
				BGl_prezd2conszd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6806), BgL_vz00_6807);
		}

	}



/* pre-cons-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2conszd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_422)
	{
		{	/* Cfa/cinfo2.sch 737 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_422)))->BgL_typez00);
		}

	}



/* &pre-cons-set!-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2conszd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t
		BgL_envz00_6808, obj_t BgL_oz00_6809)
	{
		{	/* Cfa/cinfo2.sch 737 */
			return
				BGl_prezd2conszd2setz12zd2appzd2typez12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6809));
		}

	}



/* pre-cons-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_423, BgL_typez00_bglt BgL_vz00_424)
	{
		{	/* Cfa/cinfo2.sch 738 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_423)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_424), BUNSPEC);
		}

	}



/* &pre-cons-set!-app-type-set! */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6810, obj_t BgL_oz00_6811, obj_t BgL_vz00_6812)
	{
		{	/* Cfa/cinfo2.sch 738 */
			return
				BGl_prezd2conszd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6811), ((BgL_typez00_bglt) BgL_vz00_6812));
		}

	}



/* pre-cons-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2conszd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_425)
	{
		{	/* Cfa/cinfo2.sch 739 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_425)))->BgL_locz00);
		}

	}



/* &pre-cons-set!-app-loc */
	obj_t BGl_z62prezd2conszd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t
		BgL_envz00_6813, obj_t BgL_oz00_6814)
	{
		{	/* Cfa/cinfo2.sch 739 */
			return
				BGl_prezd2conszd2setz12zd2appzd2locz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6814));
		}

	}



/* make-cons-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_makezd2conszd2appz00zzcfa_info2z00(obj_t
		BgL_loc1508z00_428, BgL_typez00_bglt BgL_type1509z00_429,
		obj_t BgL_sidezd2effect1510zd2_430, obj_t BgL_key1511z00_431,
		BgL_varz00_bglt BgL_fun1512z00_432, obj_t BgL_args1513z00_433,
		BgL_approxz00_bglt BgL_approx1514z00_434, obj_t BgL_approxes1515z00_435,
		long BgL_lostzd2stamp1516zd2_436, BgL_variablez00_bglt BgL_owner1517z00_437,
		obj_t BgL_stackzd2stamp1518zd2_438, bool_t BgL_seenzf31519zf3_439)
	{
		{	/* Cfa/cinfo2.sch 743 */
			{	/* Cfa/cinfo2.sch 743 */
				BgL_appz00_bglt BgL_new1516z00_8110;

				{	/* Cfa/cinfo2.sch 743 */
					BgL_appz00_bglt BgL_tmp1514z00_8111;
					BgL_conszd2appzd2_bglt BgL_wide1515z00_8112;

					{
						BgL_appz00_bglt BgL_auxz00_10776;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_appz00_bglt BgL_new1513z00_8113;

							BgL_new1513z00_8113 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 743 */
								long BgL_arg1962z00_8114;

								{	/* Cfa/cinfo2.sch 743 */
									long BgL_res2829z00_8115;

									BgL_res2829z00_8115 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1962z00_8114 = BgL_res2829z00_8115;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1513z00_8113),
									BgL_arg1962z00_8114);
							}
							{	/* Cfa/cinfo2.sch 743 */
								BgL_objectz00_bglt BgL_tmpz00_10781;

								BgL_tmpz00_10781 = ((BgL_objectz00_bglt) BgL_new1513z00_8113);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10781, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1513z00_8113);
							BgL_auxz00_10776 = BgL_new1513z00_8113;
						}
						BgL_tmp1514z00_8111 = ((BgL_appz00_bglt) BgL_auxz00_10776);
					}
					BgL_wide1515z00_8112 =
						((BgL_conszd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conszd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 743 */
						obj_t BgL_auxz00_10789;
						BgL_objectz00_bglt BgL_tmpz00_10787;

						BgL_auxz00_10789 = ((obj_t) BgL_wide1515z00_8112);
						BgL_tmpz00_10787 = ((BgL_objectz00_bglt) BgL_tmp1514z00_8111);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_10787, BgL_auxz00_10789);
					}
					((BgL_objectz00_bglt) BgL_tmp1514z00_8111);
					{	/* Cfa/cinfo2.sch 743 */
						long BgL_arg1961z00_8116;

						{	/* Cfa/cinfo2.sch 743 */
							long BgL_res2830z00_8117;

							BgL_res2830z00_8117 =
								BGL_CLASS_INDEX(BGl_conszd2appzd2zzcfa_info2z00);
							BgL_arg1961z00_8116 = BgL_res2830z00_8117;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1514z00_8111), BgL_arg1961z00_8116);
					}
					BgL_new1516z00_8110 = ((BgL_appz00_bglt) BgL_tmp1514z00_8111);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1516z00_8110)))->BgL_locz00) =
					((obj_t) BgL_loc1508z00_428), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1516z00_8110)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1509z00_429), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1516z00_8110)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1510zd2_430), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1516z00_8110)))->BgL_keyz00) =
					((obj_t) BgL_key1511z00_431), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1516z00_8110)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1512z00_432), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1516z00_8110)))->
						BgL_argsz00) = ((obj_t) BgL_args1513z00_433), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1516z00_8110)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10811;

					{
						obj_t BgL_auxz00_10812;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10813;

							BgL_tmpz00_10813 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10812 = BGL_OBJECT_WIDENING(BgL_tmpz00_10813);
						}
						BgL_auxz00_10811 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10812);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10811))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1514z00_434), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10818;

					{
						obj_t BgL_auxz00_10819;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10820;

							BgL_tmpz00_10820 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10819 = BGL_OBJECT_WIDENING(BgL_tmpz00_10820);
						}
						BgL_auxz00_10818 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10819);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10818))->
							BgL_approxesz00) = ((obj_t) BgL_approxes1515z00_435), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10825;

					{
						obj_t BgL_auxz00_10826;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10827;

							BgL_tmpz00_10827 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10826 = BGL_OBJECT_WIDENING(BgL_tmpz00_10827);
						}
						BgL_auxz00_10825 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10826);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10825))->
							BgL_lostzd2stampzd2) =
						((long) BgL_lostzd2stamp1516zd2_436), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10832;

					{
						obj_t BgL_auxz00_10833;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10834;

							BgL_tmpz00_10834 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10833 = BGL_OBJECT_WIDENING(BgL_tmpz00_10834);
						}
						BgL_auxz00_10832 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10833);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10832))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1517z00_437), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10839;

					{
						obj_t BgL_auxz00_10840;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10841;

							BgL_tmpz00_10841 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10840 = BGL_OBJECT_WIDENING(BgL_tmpz00_10841);
						}
						BgL_auxz00_10839 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10840);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10839))->
							BgL_stackzd2stampzd2) =
						((obj_t) BgL_stackzd2stamp1518zd2_438), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_10846;

					{
						obj_t BgL_auxz00_10847;

						{	/* Cfa/cinfo2.sch 743 */
							BgL_objectz00_bglt BgL_tmpz00_10848;

							BgL_tmpz00_10848 = ((BgL_objectz00_bglt) BgL_new1516z00_8110);
							BgL_auxz00_10847 = BGL_OBJECT_WIDENING(BgL_tmpz00_10848);
						}
						BgL_auxz00_10846 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10847);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10846))->
							BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31519zf3_439), BUNSPEC);
				}
				return BgL_new1516z00_8110;
			}
		}

	}



/* &make-cons-app */
	BgL_appz00_bglt BGl_z62makezd2conszd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6815, obj_t BgL_loc1508z00_6816, obj_t BgL_type1509z00_6817,
		obj_t BgL_sidezd2effect1510zd2_6818, obj_t BgL_key1511z00_6819,
		obj_t BgL_fun1512z00_6820, obj_t BgL_args1513z00_6821,
		obj_t BgL_approx1514z00_6822, obj_t BgL_approxes1515z00_6823,
		obj_t BgL_lostzd2stamp1516zd2_6824, obj_t BgL_owner1517z00_6825,
		obj_t BgL_stackzd2stamp1518zd2_6826, obj_t BgL_seenzf31519zf3_6827)
	{
		{	/* Cfa/cinfo2.sch 743 */
			return
				BGl_makezd2conszd2appz00zzcfa_info2z00(BgL_loc1508z00_6816,
				((BgL_typez00_bglt) BgL_type1509z00_6817),
				BgL_sidezd2effect1510zd2_6818, BgL_key1511z00_6819,
				((BgL_varz00_bglt) BgL_fun1512z00_6820), BgL_args1513z00_6821,
				((BgL_approxz00_bglt) BgL_approx1514z00_6822), BgL_approxes1515z00_6823,
				(long) CINT(BgL_lostzd2stamp1516zd2_6824),
				((BgL_variablez00_bglt) BgL_owner1517z00_6825),
				BgL_stackzd2stamp1518zd2_6826, CBOOL(BgL_seenzf31519zf3_6827));
		}

	}



/* cons-app? */
	BGL_EXPORTED_DEF bool_t BGl_conszd2appzf3z21zzcfa_info2z00(obj_t
		BgL_objz00_440)
	{
		{	/* Cfa/cinfo2.sch 744 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_440,
				BGl_conszd2appzd2zzcfa_info2z00);
		}

	}



/* &cons-app? */
	obj_t BGl_z62conszd2appzf3z43zzcfa_info2z00(obj_t BgL_envz00_6828,
		obj_t BgL_objz00_6829)
	{
		{	/* Cfa/cinfo2.sch 744 */
			return BBOOL(BGl_conszd2appzf3z21zzcfa_info2z00(BgL_objz00_6829));
		}

	}



/* cons-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_conszd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 745 */
			{	/* Cfa/cinfo2.sch 745 */
				obj_t BgL_classz00_5035;

				BgL_classz00_5035 = BGl_conszd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 745 */
					obj_t BgL__ortest_1106z00_5036;

					BgL__ortest_1106z00_5036 = BGL_CLASS_NIL(BgL_classz00_5035);
					if (CBOOL(BgL__ortest_1106z00_5036))
						{	/* Cfa/cinfo2.sch 745 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5036);
						}
					else
						{	/* Cfa/cinfo2.sch 745 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5035));
						}
				}
			}
		}

	}



/* &cons-app-nil */
	BgL_appz00_bglt BGl_z62conszd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6830)
	{
		{	/* Cfa/cinfo2.sch 745 */
			return BGl_conszd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* cons-app-seen? */
	BGL_EXPORTED_DEF bool_t
		BGl_conszd2appzd2seenzf3zf3zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_441)
	{
		{	/* Cfa/cinfo2.sch 746 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10870;

				{
					obj_t BgL_auxz00_10871;

					{	/* Cfa/cinfo2.sch 746 */
						BgL_objectz00_bglt BgL_tmpz00_10872;

						BgL_tmpz00_10872 = ((BgL_objectz00_bglt) BgL_oz00_441);
						BgL_auxz00_10871 = BGL_OBJECT_WIDENING(BgL_tmpz00_10872);
					}
					BgL_auxz00_10870 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10871);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10870))->
					BgL_seenzf3zf3);
			}
		}

	}



/* &cons-app-seen? */
	obj_t BGl_z62conszd2appzd2seenzf3z91zzcfa_info2z00(obj_t BgL_envz00_6831,
		obj_t BgL_oz00_6832)
	{
		{	/* Cfa/cinfo2.sch 746 */
			return
				BBOOL(BGl_conszd2appzd2seenzf3zf3zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6832)));
		}

	}



/* cons-app-seen?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2seenzf3zd2setz12z33zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_442, bool_t BgL_vz00_443)
	{
		{	/* Cfa/cinfo2.sch 747 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10880;

				{
					obj_t BgL_auxz00_10881;

					{	/* Cfa/cinfo2.sch 747 */
						BgL_objectz00_bglt BgL_tmpz00_10882;

						BgL_tmpz00_10882 = ((BgL_objectz00_bglt) BgL_oz00_442);
						BgL_auxz00_10881 = BGL_OBJECT_WIDENING(BgL_tmpz00_10882);
					}
					BgL_auxz00_10880 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10881);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10880))->
						BgL_seenzf3zf3) = ((bool_t) BgL_vz00_443), BUNSPEC);
			}
		}

	}



/* &cons-app-seen?-set! */
	obj_t BGl_z62conszd2appzd2seenzf3zd2setz12z51zzcfa_info2z00(obj_t
		BgL_envz00_6833, obj_t BgL_oz00_6834, obj_t BgL_vz00_6835)
	{
		{	/* Cfa/cinfo2.sch 747 */
			return
				BGl_conszd2appzd2seenzf3zd2setz12z33zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6834), CBOOL(BgL_vz00_6835));
		}

	}



/* cons-app-stack-stamp */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2stackzd2stampzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_444)
	{
		{	/* Cfa/cinfo2.sch 748 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10890;

				{
					obj_t BgL_auxz00_10891;

					{	/* Cfa/cinfo2.sch 748 */
						BgL_objectz00_bglt BgL_tmpz00_10892;

						BgL_tmpz00_10892 = ((BgL_objectz00_bglt) BgL_oz00_444);
						BgL_auxz00_10891 = BGL_OBJECT_WIDENING(BgL_tmpz00_10892);
					}
					BgL_auxz00_10890 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10891);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10890))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &cons-app-stack-stamp */
	obj_t BGl_z62conszd2appzd2stackzd2stampzb0zzcfa_info2z00(obj_t
		BgL_envz00_6836, obj_t BgL_oz00_6837)
	{
		{	/* Cfa/cinfo2.sch 748 */
			return
				BGl_conszd2appzd2stackzd2stampzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6837));
		}

	}



/* cons-app-stack-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2stackzd2stampzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_445, obj_t BgL_vz00_446)
	{
		{	/* Cfa/cinfo2.sch 749 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10899;

				{
					obj_t BgL_auxz00_10900;

					{	/* Cfa/cinfo2.sch 749 */
						BgL_objectz00_bglt BgL_tmpz00_10901;

						BgL_tmpz00_10901 = ((BgL_objectz00_bglt) BgL_oz00_445);
						BgL_auxz00_10900 = BGL_OBJECT_WIDENING(BgL_tmpz00_10901);
					}
					BgL_auxz00_10899 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10900);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10899))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_446), BUNSPEC);
			}
		}

	}



/* &cons-app-stack-stamp-set! */
	obj_t BGl_z62conszd2appzd2stackzd2stampzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6838, obj_t BgL_oz00_6839, obj_t BgL_vz00_6840)
	{
		{	/* Cfa/cinfo2.sch 749 */
			return
				BGl_conszd2appzd2stackzd2stampzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6839), BgL_vz00_6840);
		}

	}



/* cons-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_conszd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_447)
	{
		{	/* Cfa/cinfo2.sch 750 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10908;

				{
					obj_t BgL_auxz00_10909;

					{	/* Cfa/cinfo2.sch 750 */
						BgL_objectz00_bglt BgL_tmpz00_10910;

						BgL_tmpz00_10910 = ((BgL_objectz00_bglt) BgL_oz00_447);
						BgL_auxz00_10909 = BGL_OBJECT_WIDENING(BgL_tmpz00_10910);
					}
					BgL_auxz00_10908 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10909);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10908))->BgL_ownerz00);
			}
		}

	}



/* &cons-app-owner */
	BgL_variablez00_bglt BGl_z62conszd2appzd2ownerz62zzcfa_info2z00(obj_t
		BgL_envz00_6841, obj_t BgL_oz00_6842)
	{
		{	/* Cfa/cinfo2.sch 750 */
			return
				BGl_conszd2appzd2ownerz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6842));
		}

	}



/* cons-app-lost-stamp */
	BGL_EXPORTED_DEF long
		BGl_conszd2appzd2lostzd2stampzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_450)
	{
		{	/* Cfa/cinfo2.sch 752 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10917;

				{
					obj_t BgL_auxz00_10918;

					{	/* Cfa/cinfo2.sch 752 */
						BgL_objectz00_bglt BgL_tmpz00_10919;

						BgL_tmpz00_10919 = ((BgL_objectz00_bglt) BgL_oz00_450);
						BgL_auxz00_10918 = BGL_OBJECT_WIDENING(BgL_tmpz00_10919);
					}
					BgL_auxz00_10917 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10918);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10917))->
					BgL_lostzd2stampzd2);
			}
		}

	}



/* &cons-app-lost-stamp */
	obj_t BGl_z62conszd2appzd2lostzd2stampzb0zzcfa_info2z00(obj_t BgL_envz00_6843,
		obj_t BgL_oz00_6844)
	{
		{	/* Cfa/cinfo2.sch 752 */
			return
				BINT(BGl_conszd2appzd2lostzd2stampzd2zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_6844)));
		}

	}



/* cons-app-lost-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2lostzd2stampzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_451, long BgL_vz00_452)
	{
		{	/* Cfa/cinfo2.sch 753 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10927;

				{
					obj_t BgL_auxz00_10928;

					{	/* Cfa/cinfo2.sch 753 */
						BgL_objectz00_bglt BgL_tmpz00_10929;

						BgL_tmpz00_10929 = ((BgL_objectz00_bglt) BgL_oz00_451);
						BgL_auxz00_10928 = BGL_OBJECT_WIDENING(BgL_tmpz00_10929);
					}
					BgL_auxz00_10927 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10928);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10927))->
						BgL_lostzd2stampzd2) = ((long) BgL_vz00_452), BUNSPEC);
		}}

	}



/* &cons-app-lost-stamp-set! */
	obj_t BGl_z62conszd2appzd2lostzd2stampzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6845, obj_t BgL_oz00_6846, obj_t BgL_vz00_6847)
	{
		{	/* Cfa/cinfo2.sch 753 */
			return
				BGl_conszd2appzd2lostzd2stampzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6846), (long) CINT(BgL_vz00_6847));
		}

	}



/* cons-app-approxes */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2approxesz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_453)
	{
		{	/* Cfa/cinfo2.sch 754 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10937;

				{
					obj_t BgL_auxz00_10938;

					{	/* Cfa/cinfo2.sch 754 */
						BgL_objectz00_bglt BgL_tmpz00_10939;

						BgL_tmpz00_10939 = ((BgL_objectz00_bglt) BgL_oz00_453);
						BgL_auxz00_10938 = BGL_OBJECT_WIDENING(BgL_tmpz00_10939);
					}
					BgL_auxz00_10937 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10938);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10937))->
					BgL_approxesz00);
			}
		}

	}



/* &cons-app-approxes */
	obj_t BGl_z62conszd2appzd2approxesz62zzcfa_info2z00(obj_t BgL_envz00_6848,
		obj_t BgL_oz00_6849)
	{
		{	/* Cfa/cinfo2.sch 754 */
			return
				BGl_conszd2appzd2approxesz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6849));
		}

	}



/* cons-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_conszd2appzd2approxz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_456)
	{
		{	/* Cfa/cinfo2.sch 756 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10946;

				{
					obj_t BgL_auxz00_10947;

					{	/* Cfa/cinfo2.sch 756 */
						BgL_objectz00_bglt BgL_tmpz00_10948;

						BgL_tmpz00_10948 = ((BgL_objectz00_bglt) BgL_oz00_456);
						BgL_auxz00_10947 = BGL_OBJECT_WIDENING(BgL_tmpz00_10948);
					}
					BgL_auxz00_10946 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10947);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10946))->BgL_approxz00);
			}
		}

	}



/* &cons-app-approx */
	BgL_approxz00_bglt BGl_z62conszd2appzd2approxz62zzcfa_info2z00(obj_t
		BgL_envz00_6850, obj_t BgL_oz00_6851)
	{
		{	/* Cfa/cinfo2.sch 756 */
			return
				BGl_conszd2appzd2approxz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6851));
		}

	}



/* cons-app-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2approxzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_457, BgL_approxz00_bglt BgL_vz00_458)
	{
		{	/* Cfa/cinfo2.sch 757 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_10955;

				{
					obj_t BgL_auxz00_10956;

					{	/* Cfa/cinfo2.sch 757 */
						BgL_objectz00_bglt BgL_tmpz00_10957;

						BgL_tmpz00_10957 = ((BgL_objectz00_bglt) BgL_oz00_457);
						BgL_auxz00_10956 = BGL_OBJECT_WIDENING(BgL_tmpz00_10957);
					}
					BgL_auxz00_10955 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_10956);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_10955))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_vz00_458), BUNSPEC);
			}
		}

	}



/* &cons-app-approx-set! */
	obj_t BGl_z62conszd2appzd2approxzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6852, obj_t BgL_oz00_6853, obj_t BgL_vz00_6854)
	{
		{	/* Cfa/cinfo2.sch 757 */
			return
				BGl_conszd2appzd2approxzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6853),
				((BgL_approxz00_bglt) BgL_vz00_6854));
		}

	}



/* cons-app-args */
	BGL_EXPORTED_DEF obj_t BGl_conszd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_459)
	{
		{	/* Cfa/cinfo2.sch 758 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_459)))->BgL_argsz00);
		}

	}



/* &cons-app-args */
	obj_t BGl_z62conszd2appzd2argsz62zzcfa_info2z00(obj_t BgL_envz00_6855,
		obj_t BgL_oz00_6856)
	{
		{	/* Cfa/cinfo2.sch 758 */
			return
				BGl_conszd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6856));
		}

	}



/* cons-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2argszd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_460, obj_t BgL_vz00_461)
	{
		{	/* Cfa/cinfo2.sch 759 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_460)))->BgL_argsz00) =
				((obj_t) BgL_vz00_461), BUNSPEC);
		}

	}



/* &cons-app-args-set! */
	obj_t BGl_z62conszd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6857, obj_t BgL_oz00_6858, obj_t BgL_vz00_6859)
	{
		{	/* Cfa/cinfo2.sch 759 */
			return
				BGl_conszd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6858), BgL_vz00_6859);
		}

	}



/* cons-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_conszd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_462)
	{
		{	/* Cfa/cinfo2.sch 760 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_462)))->BgL_funz00);
		}

	}



/* &cons-app-fun */
	BgL_varz00_bglt BGl_z62conszd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6860, obj_t BgL_oz00_6861)
	{
		{	/* Cfa/cinfo2.sch 760 */
			return
				BGl_conszd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6861));
		}

	}



/* cons-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_463,
		BgL_varz00_bglt BgL_vz00_464)
	{
		{	/* Cfa/cinfo2.sch 761 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_463)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_464), BUNSPEC);
		}

	}



/* &cons-app-fun-set! */
	obj_t BGl_z62conszd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t BgL_envz00_6862,
		obj_t BgL_oz00_6863, obj_t BgL_vz00_6864)
	{
		{	/* Cfa/cinfo2.sch 761 */
			return
				BGl_conszd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6863), ((BgL_varz00_bglt) BgL_vz00_6864));
		}

	}



/* cons-app-key */
	BGL_EXPORTED_DEF obj_t BGl_conszd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_465)
	{
		{	/* Cfa/cinfo2.sch 762 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_465)))->BgL_keyz00);
		}

	}



/* &cons-app-key */
	obj_t BGl_z62conszd2appzd2keyz62zzcfa_info2z00(obj_t BgL_envz00_6865,
		obj_t BgL_oz00_6866)
	{
		{	/* Cfa/cinfo2.sch 762 */
			return
				BGl_conszd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6866));
		}

	}



/* cons-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_466,
		obj_t BgL_vz00_467)
	{
		{	/* Cfa/cinfo2.sch 763 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_466)))->BgL_keyz00) =
				((obj_t) BgL_vz00_467), BUNSPEC);
		}

	}



/* &cons-app-key-set! */
	obj_t BGl_z62conszd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t BgL_envz00_6867,
		obj_t BgL_oz00_6868, obj_t BgL_vz00_6869)
	{
		{	/* Cfa/cinfo2.sch 763 */
			return
				BGl_conszd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6868), BgL_vz00_6869);
		}

	}



/* cons-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2sidezd2effectzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_468)
	{
		{	/* Cfa/cinfo2.sch 764 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_468)))->BgL_sidezd2effectzd2);
		}

	}



/* &cons-app-side-effect */
	obj_t BGl_z62conszd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6870, obj_t BgL_oz00_6871)
	{
		{	/* Cfa/cinfo2.sch 764 */
			return
				BGl_conszd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6871));
		}

	}



/* cons-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_469, obj_t BgL_vz00_470)
	{
		{	/* Cfa/cinfo2.sch 765 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_469)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_470), BUNSPEC);
		}

	}



/* &cons-app-side-effect-set! */
	obj_t BGl_z62conszd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6872, obj_t BgL_oz00_6873, obj_t BgL_vz00_6874)
	{
		{	/* Cfa/cinfo2.sch 765 */
			return
				BGl_conszd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6873), BgL_vz00_6874);
		}

	}



/* cons-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_conszd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_471)
	{
		{	/* Cfa/cinfo2.sch 766 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_471)))->BgL_typez00);
		}

	}



/* &cons-app-type */
	BgL_typez00_bglt BGl_z62conszd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_6875, obj_t BgL_oz00_6876)
	{
		{	/* Cfa/cinfo2.sch 766 */
			return
				BGl_conszd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6876));
		}

	}



/* cons-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2appzd2typezd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_472, BgL_typez00_bglt BgL_vz00_473)
	{
		{	/* Cfa/cinfo2.sch 767 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_472)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_473), BUNSPEC);
		}

	}



/* &cons-app-type-set! */
	obj_t BGl_z62conszd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6877, obj_t BgL_oz00_6878, obj_t BgL_vz00_6879)
	{
		{	/* Cfa/cinfo2.sch 767 */
			return
				BGl_conszd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6878), ((BgL_typez00_bglt) BgL_vz00_6879));
		}

	}



/* cons-app-loc */
	BGL_EXPORTED_DEF obj_t BGl_conszd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_474)
	{
		{	/* Cfa/cinfo2.sch 768 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_474)))->BgL_locz00);
		}

	}



/* &cons-app-loc */
	obj_t BGl_z62conszd2appzd2locz62zzcfa_info2z00(obj_t BgL_envz00_6880,
		obj_t BgL_oz00_6881)
	{
		{	/* Cfa/cinfo2.sch 768 */
			return
				BGl_conszd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6881));
		}

	}



/* make-cons-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2conszd2refzd2appzd2zzcfa_info2z00(obj_t BgL_loc1499z00_477,
		BgL_typez00_bglt BgL_type1500z00_478, obj_t BgL_sidezd2effect1501zd2_479,
		obj_t BgL_key1502z00_480, BgL_varz00_bglt BgL_fun1503z00_481,
		obj_t BgL_args1504z00_482, BgL_approxz00_bglt BgL_approx1505z00_483,
		obj_t BgL_get1506z00_484)
	{
		{	/* Cfa/cinfo2.sch 772 */
			{	/* Cfa/cinfo2.sch 772 */
				BgL_appz00_bglt BgL_new1520z00_8118;

				{	/* Cfa/cinfo2.sch 772 */
					BgL_appz00_bglt BgL_tmp1518z00_8119;
					BgL_conszd2refzd2appz00_bglt BgL_wide1519z00_8120;

					{
						BgL_appz00_bglt BgL_auxz00_11011;

						{	/* Cfa/cinfo2.sch 772 */
							BgL_appz00_bglt BgL_new1517z00_8121;

							BgL_new1517z00_8121 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 772 */
								long BgL_arg1964z00_8122;

								{	/* Cfa/cinfo2.sch 772 */
									long BgL_res2831z00_8123;

									BgL_res2831z00_8123 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1964z00_8122 = BgL_res2831z00_8123;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1517z00_8121),
									BgL_arg1964z00_8122);
							}
							{	/* Cfa/cinfo2.sch 772 */
								BgL_objectz00_bglt BgL_tmpz00_11016;

								BgL_tmpz00_11016 = ((BgL_objectz00_bglt) BgL_new1517z00_8121);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11016, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1517z00_8121);
							BgL_auxz00_11011 = BgL_new1517z00_8121;
						}
						BgL_tmp1518z00_8119 = ((BgL_appz00_bglt) BgL_auxz00_11011);
					}
					BgL_wide1519z00_8120 =
						((BgL_conszd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conszd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 772 */
						obj_t BgL_auxz00_11024;
						BgL_objectz00_bglt BgL_tmpz00_11022;

						BgL_auxz00_11024 = ((obj_t) BgL_wide1519z00_8120);
						BgL_tmpz00_11022 = ((BgL_objectz00_bglt) BgL_tmp1518z00_8119);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11022, BgL_auxz00_11024);
					}
					((BgL_objectz00_bglt) BgL_tmp1518z00_8119);
					{	/* Cfa/cinfo2.sch 772 */
						long BgL_arg1963z00_8124;

						{	/* Cfa/cinfo2.sch 772 */
							long BgL_res2832z00_8125;

							BgL_res2832z00_8125 =
								BGL_CLASS_INDEX(BGl_conszd2refzd2appz00zzcfa_info2z00);
							BgL_arg1963z00_8124 = BgL_res2832z00_8125;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1518z00_8119), BgL_arg1963z00_8124);
					}
					BgL_new1520z00_8118 = ((BgL_appz00_bglt) BgL_tmp1518z00_8119);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1520z00_8118)))->BgL_locz00) =
					((obj_t) BgL_loc1499z00_477), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1520z00_8118)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1500z00_478), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1520z00_8118)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1501zd2_479), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1520z00_8118)))->BgL_keyz00) =
					((obj_t) BgL_key1502z00_480), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1520z00_8118)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1503z00_481), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1520z00_8118)))->
						BgL_argsz00) = ((obj_t) BgL_args1504z00_482), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1520z00_8118)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_11046;

					{
						obj_t BgL_auxz00_11047;

						{	/* Cfa/cinfo2.sch 772 */
							BgL_objectz00_bglt BgL_tmpz00_11048;

							BgL_tmpz00_11048 = ((BgL_objectz00_bglt) BgL_new1520z00_8118);
							BgL_auxz00_11047 = BGL_OBJECT_WIDENING(BgL_tmpz00_11048);
						}
						BgL_auxz00_11046 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_11047);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11046))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1505z00_483), BUNSPEC);
				}
				{
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_11053;

					{
						obj_t BgL_auxz00_11054;

						{	/* Cfa/cinfo2.sch 772 */
							BgL_objectz00_bglt BgL_tmpz00_11055;

							BgL_tmpz00_11055 = ((BgL_objectz00_bglt) BgL_new1520z00_8118);
							BgL_auxz00_11054 = BGL_OBJECT_WIDENING(BgL_tmpz00_11055);
						}
						BgL_auxz00_11053 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_11054);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11053))->
							BgL_getz00) = ((obj_t) BgL_get1506z00_484), BUNSPEC);
				}
				return BgL_new1520z00_8118;
			}
		}

	}



/* &make-cons-ref-app */
	BgL_appz00_bglt BGl_z62makezd2conszd2refzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_6882, obj_t BgL_loc1499z00_6883, obj_t BgL_type1500z00_6884,
		obj_t BgL_sidezd2effect1501zd2_6885, obj_t BgL_key1502z00_6886,
		obj_t BgL_fun1503z00_6887, obj_t BgL_args1504z00_6888,
		obj_t BgL_approx1505z00_6889, obj_t BgL_get1506z00_6890)
	{
		{	/* Cfa/cinfo2.sch 772 */
			return
				BGl_makezd2conszd2refzd2appzd2zzcfa_info2z00(BgL_loc1499z00_6883,
				((BgL_typez00_bglt) BgL_type1500z00_6884),
				BgL_sidezd2effect1501zd2_6885, BgL_key1502z00_6886,
				((BgL_varz00_bglt) BgL_fun1503z00_6887), BgL_args1504z00_6888,
				((BgL_approxz00_bglt) BgL_approx1505z00_6889), BgL_get1506z00_6890);
		}

	}



/* cons-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_conszd2refzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_485)
	{
		{	/* Cfa/cinfo2.sch 773 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_485,
				BGl_conszd2refzd2appz00zzcfa_info2z00);
		}

	}



/* &cons-ref-app? */
	obj_t BGl_z62conszd2refzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_6891,
		obj_t BgL_objz00_6892)
	{
		{	/* Cfa/cinfo2.sch 773 */
			return BBOOL(BGl_conszd2refzd2appzf3zf3zzcfa_info2z00(BgL_objz00_6892));
		}

	}



/* cons-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt BGl_conszd2refzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 774 */
			{	/* Cfa/cinfo2.sch 774 */
				obj_t BgL_classz00_5065;

				BgL_classz00_5065 = BGl_conszd2refzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 774 */
					obj_t BgL__ortest_1106z00_5066;

					BgL__ortest_1106z00_5066 = BGL_CLASS_NIL(BgL_classz00_5065);
					if (CBOOL(BgL__ortest_1106z00_5066))
						{	/* Cfa/cinfo2.sch 774 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5066);
						}
					else
						{	/* Cfa/cinfo2.sch 774 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5065));
						}
				}
			}
		}

	}



/* &cons-ref-app-nil */
	BgL_appz00_bglt BGl_z62conszd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_6893)
	{
		{	/* Cfa/cinfo2.sch 774 */
			return BGl_conszd2refzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* cons-ref-app-get */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2getzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_486)
	{
		{	/* Cfa/cinfo2.sch 775 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_11074;

				{
					obj_t BgL_auxz00_11075;

					{	/* Cfa/cinfo2.sch 775 */
						BgL_objectz00_bglt BgL_tmpz00_11076;

						BgL_tmpz00_11076 = ((BgL_objectz00_bglt) BgL_oz00_486);
						BgL_auxz00_11075 = BGL_OBJECT_WIDENING(BgL_tmpz00_11076);
					}
					BgL_auxz00_11074 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_11075);
				}
				return
					(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11074))->
					BgL_getz00);
			}
		}

	}



/* &cons-ref-app-get */
	obj_t BGl_z62conszd2refzd2appzd2getzb0zzcfa_info2z00(obj_t BgL_envz00_6894,
		obj_t BgL_oz00_6895)
	{
		{	/* Cfa/cinfo2.sch 775 */
			return
				BGl_conszd2refzd2appzd2getzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6895));
		}

	}



/* cons-ref-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_conszd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_489)
	{
		{	/* Cfa/cinfo2.sch 777 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_11083;

				{
					obj_t BgL_auxz00_11084;

					{	/* Cfa/cinfo2.sch 777 */
						BgL_objectz00_bglt BgL_tmpz00_11085;

						BgL_tmpz00_11085 = ((BgL_objectz00_bglt) BgL_oz00_489);
						BgL_auxz00_11084 = BGL_OBJECT_WIDENING(BgL_tmpz00_11085);
					}
					BgL_auxz00_11083 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_11084);
				}
				return
					(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11083))->
					BgL_approxz00);
			}
		}

	}



/* &cons-ref-app-approx */
	BgL_approxz00_bglt BGl_z62conszd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_6896, obj_t BgL_oz00_6897)
	{
		{	/* Cfa/cinfo2.sch 777 */
			return
				BGl_conszd2refzd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6897));
		}

	}



/* cons-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_492)
	{
		{	/* Cfa/cinfo2.sch 779 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_492)))->BgL_argsz00);
		}

	}



/* &cons-ref-app-args */
	obj_t BGl_z62conszd2refzd2appzd2argszb0zzcfa_info2z00(obj_t BgL_envz00_6898,
		obj_t BgL_oz00_6899)
	{
		{	/* Cfa/cinfo2.sch 779 */
			return
				BGl_conszd2refzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6899));
		}

	}



/* cons-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_493, obj_t BgL_vz00_494)
	{
		{	/* Cfa/cinfo2.sch 780 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_493)))->BgL_argsz00) =
				((obj_t) BgL_vz00_494), BUNSPEC);
		}

	}



/* &cons-ref-app-args-set! */
	obj_t BGl_z62conszd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6900, obj_t BgL_oz00_6901, obj_t BgL_vz00_6902)
	{
		{	/* Cfa/cinfo2.sch 780 */
			return
				BGl_conszd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6901), BgL_vz00_6902);
		}

	}



/* cons-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_conszd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_495)
	{
		{	/* Cfa/cinfo2.sch 781 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_495)))->BgL_funz00);
		}

	}



/* &cons-ref-app-fun */
	BgL_varz00_bglt BGl_z62conszd2refzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_6903, obj_t BgL_oz00_6904)
	{
		{	/* Cfa/cinfo2.sch 781 */
			return
				BGl_conszd2refzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6904));
		}

	}



/* cons-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_496, BgL_varz00_bglt BgL_vz00_497)
	{
		{	/* Cfa/cinfo2.sch 782 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_496)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_497), BUNSPEC);
		}

	}



/* &cons-ref-app-fun-set! */
	obj_t BGl_z62conszd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6905, obj_t BgL_oz00_6906, obj_t BgL_vz00_6907)
	{
		{	/* Cfa/cinfo2.sch 782 */
			return
				BGl_conszd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6906), ((BgL_varz00_bglt) BgL_vz00_6907));
		}

	}



/* cons-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_498)
	{
		{	/* Cfa/cinfo2.sch 783 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_498)))->BgL_keyz00);
		}

	}



/* &cons-ref-app-key */
	obj_t BGl_z62conszd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t BgL_envz00_6908,
		obj_t BgL_oz00_6909)
	{
		{	/* Cfa/cinfo2.sch 783 */
			return
				BGl_conszd2refzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6909));
		}

	}



/* cons-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_499, obj_t BgL_vz00_500)
	{
		{	/* Cfa/cinfo2.sch 784 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_499)))->BgL_keyz00) =
				((obj_t) BgL_vz00_500), BUNSPEC);
		}

	}



/* &cons-ref-app-key-set! */
	obj_t BGl_z62conszd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6910, obj_t BgL_oz00_6911, obj_t BgL_vz00_6912)
	{
		{	/* Cfa/cinfo2.sch 784 */
			return
				BGl_conszd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6911), BgL_vz00_6912);
		}

	}



/* cons-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_501)
	{
		{	/* Cfa/cinfo2.sch 785 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_501)))->BgL_sidezd2effectzd2);
		}

	}



/* &cons-ref-app-side-effect */
	obj_t BGl_z62conszd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_6913, obj_t BgL_oz00_6914)
	{
		{	/* Cfa/cinfo2.sch 785 */
			return
				BGl_conszd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6914));
		}

	}



/* cons-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_502, obj_t BgL_vz00_503)
	{
		{	/* Cfa/cinfo2.sch 786 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_502)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_503), BUNSPEC);
		}

	}



/* &cons-ref-app-side-effect-set! */
	obj_t BGl_z62conszd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6915, obj_t BgL_oz00_6916, obj_t BgL_vz00_6917)
	{
		{	/* Cfa/cinfo2.sch 786 */
			return
				BGl_conszd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6916), BgL_vz00_6917);
		}

	}



/* cons-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_conszd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_504)
	{
		{	/* Cfa/cinfo2.sch 787 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_504)))->BgL_typez00);
		}

	}



/* &cons-ref-app-type */
	BgL_typez00_bglt BGl_z62conszd2refzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_6918, obj_t BgL_oz00_6919)
	{
		{	/* Cfa/cinfo2.sch 787 */
			return
				BGl_conszd2refzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6919));
		}

	}



/* cons-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_505, BgL_typez00_bglt BgL_vz00_506)
	{
		{	/* Cfa/cinfo2.sch 788 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_505)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_506), BUNSPEC);
		}

	}



/* &cons-ref-app-type-set! */
	obj_t BGl_z62conszd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_6920, obj_t BgL_oz00_6921, obj_t BgL_vz00_6922)
	{
		{	/* Cfa/cinfo2.sch 788 */
			return
				BGl_conszd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6921), ((BgL_typez00_bglt) BgL_vz00_6922));
		}

	}



/* cons-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_507)
	{
		{	/* Cfa/cinfo2.sch 789 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_507)))->BgL_locz00);
		}

	}



/* &cons-ref-app-loc */
	obj_t BGl_z62conszd2refzd2appzd2loczb0zzcfa_info2z00(obj_t BgL_envz00_6923,
		obj_t BgL_oz00_6924)
	{
		{	/* Cfa/cinfo2.sch 789 */
			return
				BGl_conszd2refzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6924));
		}

	}



/* make-cons-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2conszd2setz12zd2appzc0zzcfa_info2z00(obj_t BgL_loc1490z00_510,
		BgL_typez00_bglt BgL_type1491z00_511, obj_t BgL_sidezd2effect1492zd2_512,
		obj_t BgL_key1493z00_513, BgL_varz00_bglt BgL_fun1494z00_514,
		obj_t BgL_args1495z00_515, BgL_approxz00_bglt BgL_approx1496z00_516,
		obj_t BgL_get1497z00_517)
	{
		{	/* Cfa/cinfo2.sch 793 */
			{	/* Cfa/cinfo2.sch 793 */
				BgL_appz00_bglt BgL_new1524z00_8126;

				{	/* Cfa/cinfo2.sch 793 */
					BgL_appz00_bglt BgL_tmp1522z00_8127;
					BgL_conszd2setz12zd2appz12_bglt BgL_wide1523z00_8128;

					{
						BgL_appz00_bglt BgL_auxz00_11138;

						{	/* Cfa/cinfo2.sch 793 */
							BgL_appz00_bglt BgL_new1521z00_8129;

							BgL_new1521z00_8129 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 793 */
								long BgL_arg1966z00_8130;

								{	/* Cfa/cinfo2.sch 793 */
									long BgL_res2833z00_8131;

									BgL_res2833z00_8131 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1966z00_8130 = BgL_res2833z00_8131;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1521z00_8129),
									BgL_arg1966z00_8130);
							}
							{	/* Cfa/cinfo2.sch 793 */
								BgL_objectz00_bglt BgL_tmpz00_11143;

								BgL_tmpz00_11143 = ((BgL_objectz00_bglt) BgL_new1521z00_8129);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11143, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1521z00_8129);
							BgL_auxz00_11138 = BgL_new1521z00_8129;
						}
						BgL_tmp1522z00_8127 = ((BgL_appz00_bglt) BgL_auxz00_11138);
					}
					BgL_wide1523z00_8128 =
						((BgL_conszd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conszd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.sch 793 */
						obj_t BgL_auxz00_11151;
						BgL_objectz00_bglt BgL_tmpz00_11149;

						BgL_auxz00_11151 = ((obj_t) BgL_wide1523z00_8128);
						BgL_tmpz00_11149 = ((BgL_objectz00_bglt) BgL_tmp1522z00_8127);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11149, BgL_auxz00_11151);
					}
					((BgL_objectz00_bglt) BgL_tmp1522z00_8127);
					{	/* Cfa/cinfo2.sch 793 */
						long BgL_arg1965z00_8132;

						{	/* Cfa/cinfo2.sch 793 */
							long BgL_res2834z00_8133;

							BgL_res2834z00_8133 =
								BGL_CLASS_INDEX(BGl_conszd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg1965z00_8132 = BgL_res2834z00_8133;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1522z00_8127), BgL_arg1965z00_8132);
					}
					BgL_new1524z00_8126 = ((BgL_appz00_bglt) BgL_tmp1522z00_8127);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1524z00_8126)))->BgL_locz00) =
					((obj_t) BgL_loc1490z00_510), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1524z00_8126)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1491z00_511), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1524z00_8126)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1492zd2_512), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1524z00_8126)))->BgL_keyz00) =
					((obj_t) BgL_key1493z00_513), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1524z00_8126)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1494z00_514), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1524z00_8126)))->
						BgL_argsz00) = ((obj_t) BgL_args1495z00_515), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1524z00_8126)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_11173;

					{
						obj_t BgL_auxz00_11174;

						{	/* Cfa/cinfo2.sch 793 */
							BgL_objectz00_bglt BgL_tmpz00_11175;

							BgL_tmpz00_11175 = ((BgL_objectz00_bglt) BgL_new1524z00_8126);
							BgL_auxz00_11174 = BGL_OBJECT_WIDENING(BgL_tmpz00_11175);
						}
						BgL_auxz00_11173 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_11174);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11173))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1496z00_516), BUNSPEC);
				}
				{
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_11180;

					{
						obj_t BgL_auxz00_11181;

						{	/* Cfa/cinfo2.sch 793 */
							BgL_objectz00_bglt BgL_tmpz00_11182;

							BgL_tmpz00_11182 = ((BgL_objectz00_bglt) BgL_new1524z00_8126);
							BgL_auxz00_11181 = BGL_OBJECT_WIDENING(BgL_tmpz00_11182);
						}
						BgL_auxz00_11180 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_11181);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11180))->
							BgL_getz00) = ((obj_t) BgL_get1497z00_517), BUNSPEC);
				}
				return BgL_new1524z00_8126;
			}
		}

	}



/* &make-cons-set!-app */
	BgL_appz00_bglt BGl_z62makezd2conszd2setz12zd2appza2zzcfa_info2z00(obj_t
		BgL_envz00_6925, obj_t BgL_loc1490z00_6926, obj_t BgL_type1491z00_6927,
		obj_t BgL_sidezd2effect1492zd2_6928, obj_t BgL_key1493z00_6929,
		obj_t BgL_fun1494z00_6930, obj_t BgL_args1495z00_6931,
		obj_t BgL_approx1496z00_6932, obj_t BgL_get1497z00_6933)
	{
		{	/* Cfa/cinfo2.sch 793 */
			return
				BGl_makezd2conszd2setz12zd2appzc0zzcfa_info2z00(BgL_loc1490z00_6926,
				((BgL_typez00_bglt) BgL_type1491z00_6927),
				BgL_sidezd2effect1492zd2_6928, BgL_key1493z00_6929,
				((BgL_varz00_bglt) BgL_fun1494z00_6930), BgL_args1495z00_6931,
				((BgL_approxz00_bglt) BgL_approx1496z00_6932), BgL_get1497z00_6933);
		}

	}



/* cons-set!-app? */
	BGL_EXPORTED_DEF bool_t BGl_conszd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t
		BgL_objz00_518)
	{
		{	/* Cfa/cinfo2.sch 794 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_518,
				BGl_conszd2setz12zd2appz12zzcfa_info2z00);
		}

	}



/* &cons-set!-app? */
	obj_t BGl_z62conszd2setz12zd2appzf3z83zzcfa_info2z00(obj_t BgL_envz00_6934,
		obj_t BgL_objz00_6935)
	{
		{	/* Cfa/cinfo2.sch 794 */
			return
				BBOOL(BGl_conszd2setz12zd2appzf3ze1zzcfa_info2z00(BgL_objz00_6935));
		}

	}



/* cons-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_conszd2setz12zd2appzd2nilzc0zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 795 */
			{	/* Cfa/cinfo2.sch 795 */
				obj_t BgL_classz00_5087;

				BgL_classz00_5087 = BGl_conszd2setz12zd2appz12zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 795 */
					obj_t BgL__ortest_1106z00_5088;

					BgL__ortest_1106z00_5088 = BGL_CLASS_NIL(BgL_classz00_5087);
					if (CBOOL(BgL__ortest_1106z00_5088))
						{	/* Cfa/cinfo2.sch 795 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5088);
						}
					else
						{	/* Cfa/cinfo2.sch 795 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5087));
						}
				}
			}
		}

	}



/* &cons-set!-app-nil */
	BgL_appz00_bglt BGl_z62conszd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t
		BgL_envz00_6936)
	{
		{	/* Cfa/cinfo2.sch 795 */
			return BGl_conszd2setz12zd2appzd2nilzc0zzcfa_info2z00();
		}

	}



/* cons-set!-app-get */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2getzc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_519)
	{
		{	/* Cfa/cinfo2.sch 796 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_11201;

				{
					obj_t BgL_auxz00_11202;

					{	/* Cfa/cinfo2.sch 796 */
						BgL_objectz00_bglt BgL_tmpz00_11203;

						BgL_tmpz00_11203 = ((BgL_objectz00_bglt) BgL_oz00_519);
						BgL_auxz00_11202 = BGL_OBJECT_WIDENING(BgL_tmpz00_11203);
					}
					BgL_auxz00_11201 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_11202);
				}
				return
					(((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11201))->
					BgL_getz00);
			}
		}

	}



/* &cons-set!-app-get */
	obj_t BGl_z62conszd2setz12zd2appzd2getza2zzcfa_info2z00(obj_t BgL_envz00_6937,
		obj_t BgL_oz00_6938)
	{
		{	/* Cfa/cinfo2.sch 796 */
			return
				BGl_conszd2setz12zd2appzd2getzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6938));
		}

	}



/* cons-set!-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_conszd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_522)
	{
		{	/* Cfa/cinfo2.sch 798 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_11210;

				{
					obj_t BgL_auxz00_11211;

					{	/* Cfa/cinfo2.sch 798 */
						BgL_objectz00_bglt BgL_tmpz00_11212;

						BgL_tmpz00_11212 = ((BgL_objectz00_bglt) BgL_oz00_522);
						BgL_auxz00_11211 = BGL_OBJECT_WIDENING(BgL_tmpz00_11212);
					}
					BgL_auxz00_11210 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_11211);
				}
				return
					(((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11210))->
					BgL_approxz00);
			}
		}

	}



/* &cons-set!-app-approx */
	BgL_approxz00_bglt BGl_z62conszd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t
		BgL_envz00_6939, obj_t BgL_oz00_6940)
	{
		{	/* Cfa/cinfo2.sch 798 */
			return
				BGl_conszd2setz12zd2appzd2approxzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6940));
		}

	}



/* cons-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_525)
	{
		{	/* Cfa/cinfo2.sch 800 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_525)))->BgL_argsz00);
		}

	}



/* &cons-set!-app-args */
	obj_t BGl_z62conszd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t
		BgL_envz00_6941, obj_t BgL_oz00_6942)
	{
		{	/* Cfa/cinfo2.sch 800 */
			return
				BGl_conszd2setz12zd2appzd2argszc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6942));
		}

	}



/* cons-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_526, obj_t BgL_vz00_527)
	{
		{	/* Cfa/cinfo2.sch 801 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_526)))->BgL_argsz00) =
				((obj_t) BgL_vz00_527), BUNSPEC);
		}

	}



/* &cons-set!-app-args-set! */
	obj_t BGl_z62conszd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6943, obj_t BgL_oz00_6944, obj_t BgL_vz00_6945)
	{
		{	/* Cfa/cinfo2.sch 801 */
			return
				BGl_conszd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6944), BgL_vz00_6945);
		}

	}



/* cons-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_conszd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_528)
	{
		{	/* Cfa/cinfo2.sch 802 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_528)))->BgL_funz00);
		}

	}



/* &cons-set!-app-fun */
	BgL_varz00_bglt BGl_z62conszd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t
		BgL_envz00_6946, obj_t BgL_oz00_6947)
	{
		{	/* Cfa/cinfo2.sch 802 */
			return
				BGl_conszd2setz12zd2appzd2funzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6947));
		}

	}



/* cons-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_529, BgL_varz00_bglt BgL_vz00_530)
	{
		{	/* Cfa/cinfo2.sch 803 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_529)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_530), BUNSPEC);
		}

	}



/* &cons-set!-app-fun-set! */
	obj_t BGl_z62conszd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6948, obj_t BgL_oz00_6949, obj_t BgL_vz00_6950)
	{
		{	/* Cfa/cinfo2.sch 803 */
			return
				BGl_conszd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6949), ((BgL_varz00_bglt) BgL_vz00_6950));
		}

	}



/* cons-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_531)
	{
		{	/* Cfa/cinfo2.sch 804 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_531)))->BgL_keyz00);
		}

	}



/* &cons-set!-app-key */
	obj_t BGl_z62conszd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t BgL_envz00_6951,
		obj_t BgL_oz00_6952)
	{
		{	/* Cfa/cinfo2.sch 804 */
			return
				BGl_conszd2setz12zd2appzd2keyzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6952));
		}

	}



/* cons-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_532, obj_t BgL_vz00_533)
	{
		{	/* Cfa/cinfo2.sch 805 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_532)))->BgL_keyz00) =
				((obj_t) BgL_vz00_533), BUNSPEC);
		}

	}



/* &cons-set!-app-key-set! */
	obj_t BGl_z62conszd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6953, obj_t BgL_oz00_6954, obj_t BgL_vz00_6955)
	{
		{	/* Cfa/cinfo2.sch 805 */
			return
				BGl_conszd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6954), BgL_vz00_6955);
		}

	}



/* cons-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_534)
	{
		{	/* Cfa/cinfo2.sch 806 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_534)))->BgL_sidezd2effectzd2);
		}

	}



/* &cons-set!-app-side-effect */
	obj_t BGl_z62conszd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t
		BgL_envz00_6956, obj_t BgL_oz00_6957)
	{
		{	/* Cfa/cinfo2.sch 806 */
			return
				BGl_conszd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6957));
		}

	}



/* cons-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_535, obj_t BgL_vz00_536)
	{
		{	/* Cfa/cinfo2.sch 807 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_535)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_536), BUNSPEC);
		}

	}



/* &cons-set!-app-side-effect-set! */
	obj_t
		BGl_z62conszd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_6958, obj_t BgL_oz00_6959, obj_t BgL_vz00_6960)
	{
		{	/* Cfa/cinfo2.sch 807 */
			return
				BGl_conszd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6959), BgL_vz00_6960);
		}

	}



/* cons-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_conszd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_537)
	{
		{	/* Cfa/cinfo2.sch 808 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_537)))->BgL_typez00);
		}

	}



/* &cons-set!-app-type */
	BgL_typez00_bglt BGl_z62conszd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t
		BgL_envz00_6961, obj_t BgL_oz00_6962)
	{
		{	/* Cfa/cinfo2.sch 808 */
			return
				BGl_conszd2setz12zd2appzd2typezc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6962));
		}

	}



/* cons-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_538, BgL_typez00_bglt BgL_vz00_539)
	{
		{	/* Cfa/cinfo2.sch 809 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_538)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_539), BUNSPEC);
		}

	}



/* &cons-set!-app-type-set! */
	obj_t BGl_z62conszd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_6963, obj_t BgL_oz00_6964, obj_t BgL_vz00_6965)
	{
		{	/* Cfa/cinfo2.sch 809 */
			return
				BGl_conszd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6964), ((BgL_typez00_bglt) BgL_vz00_6965));
		}

	}



/* cons-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_conszd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_540)
	{
		{	/* Cfa/cinfo2.sch 810 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_540)))->BgL_locz00);
		}

	}



/* &cons-set!-app-loc */
	obj_t BGl_z62conszd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t BgL_envz00_6966,
		obj_t BgL_oz00_6967)
	{
		{	/* Cfa/cinfo2.sch 810 */
			return
				BGl_conszd2setz12zd2appzd2loczc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6967));
		}

	}



/* make-pre-make-struct-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00(obj_t
		BgL_loc1478z00_543, BgL_typez00_bglt BgL_type1479z00_544,
		obj_t BgL_sidezd2effect1480zd2_545, obj_t BgL_key1481z00_546,
		BgL_varz00_bglt BgL_fun1486z00_547, obj_t BgL_args1487z00_548,
		BgL_variablez00_bglt BgL_owner1488z00_549)
	{
		{	/* Cfa/cinfo2.sch 814 */
			{	/* Cfa/cinfo2.sch 814 */
				BgL_appz00_bglt BgL_new1528z00_8134;

				{	/* Cfa/cinfo2.sch 814 */
					BgL_appz00_bglt BgL_tmp1526z00_8135;
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_wide1527z00_8136;

					{
						BgL_appz00_bglt BgL_auxz00_11265;

						{	/* Cfa/cinfo2.sch 814 */
							BgL_appz00_bglt BgL_new1525z00_8137;

							BgL_new1525z00_8137 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 814 */
								long BgL_arg1968z00_8138;

								{	/* Cfa/cinfo2.sch 814 */
									long BgL_res2835z00_8139;

									BgL_res2835z00_8139 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1968z00_8138 = BgL_res2835z00_8139;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1525z00_8137),
									BgL_arg1968z00_8138);
							}
							{	/* Cfa/cinfo2.sch 814 */
								BgL_objectz00_bglt BgL_tmpz00_11270;

								BgL_tmpz00_11270 = ((BgL_objectz00_bglt) BgL_new1525z00_8137);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11270, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1525z00_8137);
							BgL_auxz00_11265 = BgL_new1525z00_8137;
						}
						BgL_tmp1526z00_8135 = ((BgL_appz00_bglt) BgL_auxz00_11265);
					}
					BgL_wide1527z00_8136 =
						((BgL_prezd2makezd2structzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2structzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 814 */
						obj_t BgL_auxz00_11278;
						BgL_objectz00_bglt BgL_tmpz00_11276;

						BgL_auxz00_11278 = ((obj_t) BgL_wide1527z00_8136);
						BgL_tmpz00_11276 = ((BgL_objectz00_bglt) BgL_tmp1526z00_8135);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11276, BgL_auxz00_11278);
					}
					((BgL_objectz00_bglt) BgL_tmp1526z00_8135);
					{	/* Cfa/cinfo2.sch 814 */
						long BgL_arg1967z00_8140;

						{	/* Cfa/cinfo2.sch 814 */
							long BgL_res2836z00_8141;

							BgL_res2836z00_8141 =
								BGL_CLASS_INDEX(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
							BgL_arg1967z00_8140 = BgL_res2836z00_8141;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1526z00_8135), BgL_arg1967z00_8140);
					}
					BgL_new1528z00_8134 = ((BgL_appz00_bglt) BgL_tmp1526z00_8135);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1528z00_8134)))->BgL_locz00) =
					((obj_t) BgL_loc1478z00_543), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1528z00_8134)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1479z00_544), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1528z00_8134)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1480zd2_545), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1528z00_8134)))->BgL_keyz00) =
					((obj_t) BgL_key1481z00_546), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1528z00_8134)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1486z00_547), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1528z00_8134)))->
						BgL_argsz00) = ((obj_t) BgL_args1487z00_548), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1528z00_8134)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_11300;

					{
						obj_t BgL_auxz00_11301;

						{	/* Cfa/cinfo2.sch 814 */
							BgL_objectz00_bglt BgL_tmpz00_11302;

							BgL_tmpz00_11302 = ((BgL_objectz00_bglt) BgL_new1528z00_8134);
							BgL_auxz00_11301 = BGL_OBJECT_WIDENING(BgL_tmpz00_11302);
						}
						BgL_auxz00_11300 =
							((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_11301);
					}
					((((BgL_prezd2makezd2structzd2appzd2_bglt)
								COBJECT(BgL_auxz00_11300))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1488z00_549), BUNSPEC);
				}
				return BgL_new1528z00_8134;
			}
		}

	}



/* &make-pre-make-struct-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2makezd2structzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_6968, obj_t BgL_loc1478z00_6969, obj_t BgL_type1479z00_6970,
		obj_t BgL_sidezd2effect1480zd2_6971, obj_t BgL_key1481z00_6972,
		obj_t BgL_fun1486z00_6973, obj_t BgL_args1487z00_6974,
		obj_t BgL_owner1488z00_6975)
	{
		{	/* Cfa/cinfo2.sch 814 */
			return
				BGl_makezd2prezd2makezd2structzd2appz00zzcfa_info2z00
				(BgL_loc1478z00_6969, ((BgL_typez00_bglt) BgL_type1479z00_6970),
				BgL_sidezd2effect1480zd2_6971, BgL_key1481z00_6972,
				((BgL_varz00_bglt) BgL_fun1486z00_6973), BgL_args1487z00_6974,
				((BgL_variablez00_bglt) BgL_owner1488z00_6975));
		}

	}



/* pre-make-struct-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2makezd2structzd2appzf3z21zzcfa_info2z00(obj_t BgL_objz00_550)
	{
		{	/* Cfa/cinfo2.sch 815 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_550,
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-make-struct-app? */
	obj_t BGl_z62prezd2makezd2structzd2appzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_6976, obj_t BgL_objz00_6977)
	{
		{	/* Cfa/cinfo2.sch 815 */
			return
				BBOOL(BGl_prezd2makezd2structzd2appzf3z21zzcfa_info2z00
				(BgL_objz00_6977));
		}

	}



/* pre-make-struct-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 816 */
			{	/* Cfa/cinfo2.sch 816 */
				obj_t BgL_classz00_5108;

				BgL_classz00_5108 = BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 816 */
					obj_t BgL__ortest_1106z00_5109;

					BgL__ortest_1106z00_5109 = BGL_CLASS_NIL(BgL_classz00_5108);
					if (CBOOL(BgL__ortest_1106z00_5109))
						{	/* Cfa/cinfo2.sch 816 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5109);
						}
					else
						{	/* Cfa/cinfo2.sch 816 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5108));
						}
				}
			}
		}

	}



/* &pre-make-struct-app-nil */
	BgL_appz00_bglt BGl_z62prezd2makezd2structzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_6978)
	{
		{	/* Cfa/cinfo2.sch 816 */
			return BGl_prezd2makezd2structzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-make-struct-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_prezd2makezd2structzd2appzd2ownerz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_551)
	{
		{	/* Cfa/cinfo2.sch 817 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_11321;

				{
					obj_t BgL_auxz00_11322;

					{	/* Cfa/cinfo2.sch 817 */
						BgL_objectz00_bglt BgL_tmpz00_11323;

						BgL_tmpz00_11323 = ((BgL_objectz00_bglt) BgL_oz00_551);
						BgL_auxz00_11322 = BGL_OBJECT_WIDENING(BgL_tmpz00_11323);
					}
					BgL_auxz00_11321 =
						((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_11322);
				}
				return
					(((BgL_prezd2makezd2structzd2appzd2_bglt) COBJECT(BgL_auxz00_11321))->
					BgL_ownerz00);
			}
		}

	}



/* &pre-make-struct-app-owner */
	BgL_variablez00_bglt
		BGl_z62prezd2makezd2structzd2appzd2ownerz62zzcfa_info2z00(obj_t
		BgL_envz00_6979, obj_t BgL_oz00_6980)
	{
		{	/* Cfa/cinfo2.sch 817 */
			return
				BGl_prezd2makezd2structzd2appzd2ownerz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6980));
		}

	}



/* pre-make-struct-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_554)
	{
		{	/* Cfa/cinfo2.sch 819 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_554)))->BgL_argsz00);
		}

	}



/* &pre-make-struct-app-args */
	obj_t BGl_z62prezd2makezd2structzd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_6981, obj_t BgL_oz00_6982)
	{
		{	/* Cfa/cinfo2.sch 819 */
			return
				BGl_prezd2makezd2structzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6982));
		}

	}



/* pre-make-struct-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_555, obj_t BgL_vz00_556)
	{
		{	/* Cfa/cinfo2.sch 820 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_555)))->BgL_argsz00) =
				((obj_t) BgL_vz00_556), BUNSPEC);
		}

	}



/* &pre-make-struct-app-args-set! */
	obj_t BGl_z62prezd2makezd2structzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6983, obj_t BgL_oz00_6984, obj_t BgL_vz00_6985)
	{
		{	/* Cfa/cinfo2.sch 820 */
			return
				BGl_prezd2makezd2structzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6984), BgL_vz00_6985);
		}

	}



/* pre-make-struct-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2makezd2structzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_557)
	{
		{	/* Cfa/cinfo2.sch 821 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_557)))->BgL_funz00);
		}

	}



/* &pre-make-struct-app-fun */
	BgL_varz00_bglt BGl_z62prezd2makezd2structzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_6986, obj_t BgL_oz00_6987)
	{
		{	/* Cfa/cinfo2.sch 821 */
			return
				BGl_prezd2makezd2structzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6987));
		}

	}



/* pre-make-struct-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2funzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_558, BgL_varz00_bglt BgL_vz00_559)
	{
		{	/* Cfa/cinfo2.sch 822 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_558)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_559), BUNSPEC);
		}

	}



/* &pre-make-struct-app-fun-set! */
	obj_t BGl_z62prezd2makezd2structzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6988, obj_t BgL_oz00_6989, obj_t BgL_vz00_6990)
	{
		{	/* Cfa/cinfo2.sch 822 */
			return
				BGl_prezd2makezd2structzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6989), ((BgL_varz00_bglt) BgL_vz00_6990));
		}

	}



/* pre-make-struct-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_560)
	{
		{	/* Cfa/cinfo2.sch 823 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_560)))->BgL_keyz00);
		}

	}



/* &pre-make-struct-app-key */
	obj_t BGl_z62prezd2makezd2structzd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_6991, obj_t BgL_oz00_6992)
	{
		{	/* Cfa/cinfo2.sch 823 */
			return
				BGl_prezd2makezd2structzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6992));
		}

	}



/* pre-make-struct-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2keyzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_561, obj_t BgL_vz00_562)
	{
		{	/* Cfa/cinfo2.sch 824 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_561)))->BgL_keyz00) =
				((obj_t) BgL_vz00_562), BUNSPEC);
		}

	}



/* &pre-make-struct-app-key-set! */
	obj_t BGl_z62prezd2makezd2structzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_6993, obj_t BgL_oz00_6994, obj_t BgL_vz00_6995)
	{
		{	/* Cfa/cinfo2.sch 824 */
			return
				BGl_prezd2makezd2structzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6994), BgL_vz00_6995);
		}

	}



/* pre-make-struct-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_563)
	{
		{	/* Cfa/cinfo2.sch 825 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_563)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-make-struct-app-side-effect */
	obj_t BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_6996, obj_t BgL_oz00_6997)
	{
		{	/* Cfa/cinfo2.sch 825 */
			return
				BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6997));
		}

	}



/* pre-make-struct-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_564, obj_t BgL_vz00_565)
	{
		{	/* Cfa/cinfo2.sch 826 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_564)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_565), BUNSPEC);
		}

	}



/* &pre-make-struct-app-side-effect-set! */
	obj_t
		BGl_z62prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_6998, obj_t BgL_oz00_6999, obj_t BgL_vz00_7000)
	{
		{	/* Cfa/cinfo2.sch 826 */
			return
				BGl_prezd2makezd2structzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_6999), BgL_vz00_7000);
		}

	}



/* pre-make-struct-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2makezd2structzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_566)
	{
		{	/* Cfa/cinfo2.sch 827 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_566)))->BgL_typez00);
		}

	}



/* &pre-make-struct-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2makezd2structzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_7001, obj_t BgL_oz00_7002)
	{
		{	/* Cfa/cinfo2.sch 827 */
			return
				BGl_prezd2makezd2structzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7002));
		}

	}



/* pre-make-struct-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_567, BgL_typez00_bglt BgL_vz00_568)
	{
		{	/* Cfa/cinfo2.sch 828 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_567)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_568), BUNSPEC);
		}

	}



/* &pre-make-struct-app-type-set! */
	obj_t BGl_z62prezd2makezd2structzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7003, obj_t BgL_oz00_7004, obj_t BgL_vz00_7005)
	{
		{	/* Cfa/cinfo2.sch 828 */
			return
				BGl_prezd2makezd2structzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7004), ((BgL_typez00_bglt) BgL_vz00_7005));
		}

	}



/* pre-make-struct-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2makezd2structzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_569)
	{
		{	/* Cfa/cinfo2.sch 829 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_569)))->BgL_locz00);
		}

	}



/* &pre-make-struct-app-loc */
	obj_t BGl_z62prezd2makezd2structzd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_7006, obj_t BgL_oz00_7007)
	{
		{	/* Cfa/cinfo2.sch 829 */
			return
				BGl_prezd2makezd2structzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7007));
		}

	}



/* make-pre-struct-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00(obj_t
		BgL_loc1471z00_572, BgL_typez00_bglt BgL_type1472z00_573,
		obj_t BgL_sidezd2effect1473zd2_574, obj_t BgL_key1474z00_575,
		BgL_varz00_bglt BgL_fun1475z00_576, obj_t BgL_args1476z00_577)
	{
		{	/* Cfa/cinfo2.sch 833 */
			{	/* Cfa/cinfo2.sch 833 */
				BgL_appz00_bglt BgL_new1532z00_8142;

				{	/* Cfa/cinfo2.sch 833 */
					BgL_appz00_bglt BgL_tmp1530z00_8143;
					BgL_prezd2structzd2refzd2appzd2_bglt BgL_wide1531z00_8144;

					{
						BgL_appz00_bglt BgL_auxz00_11376;

						{	/* Cfa/cinfo2.sch 833 */
							BgL_appz00_bglt BgL_new1529z00_8145;

							BgL_new1529z00_8145 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 833 */
								long BgL_arg1970z00_8146;

								{	/* Cfa/cinfo2.sch 833 */
									long BgL_res2837z00_8147;

									BgL_res2837z00_8147 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1970z00_8146 = BgL_res2837z00_8147;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1529z00_8145),
									BgL_arg1970z00_8146);
							}
							{	/* Cfa/cinfo2.sch 833 */
								BgL_objectz00_bglt BgL_tmpz00_11381;

								BgL_tmpz00_11381 = ((BgL_objectz00_bglt) BgL_new1529z00_8145);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11381, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1529z00_8145);
							BgL_auxz00_11376 = BgL_new1529z00_8145;
						}
						BgL_tmp1530z00_8143 = ((BgL_appz00_bglt) BgL_auxz00_11376);
					}
					BgL_wide1531z00_8144 =
						((BgL_prezd2structzd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2structzd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.sch 833 */
						obj_t BgL_auxz00_11389;
						BgL_objectz00_bglt BgL_tmpz00_11387;

						BgL_auxz00_11389 = ((obj_t) BgL_wide1531z00_8144);
						BgL_tmpz00_11387 = ((BgL_objectz00_bglt) BgL_tmp1530z00_8143);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11387, BgL_auxz00_11389);
					}
					((BgL_objectz00_bglt) BgL_tmp1530z00_8143);
					{	/* Cfa/cinfo2.sch 833 */
						long BgL_arg1969z00_8148;

						{	/* Cfa/cinfo2.sch 833 */
							long BgL_res2838z00_8149;

							BgL_res2838z00_8149 =
								BGL_CLASS_INDEX(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
							BgL_arg1969z00_8148 = BgL_res2838z00_8149;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1530z00_8143), BgL_arg1969z00_8148);
					}
					BgL_new1532z00_8142 = ((BgL_appz00_bglt) BgL_tmp1530z00_8143);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1532z00_8142)))->BgL_locz00) =
					((obj_t) BgL_loc1471z00_572), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1532z00_8142)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1472z00_573), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1532z00_8142)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1473zd2_574), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1532z00_8142)))->BgL_keyz00) =
					((obj_t) BgL_key1474z00_575), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1532z00_8142)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1475z00_576), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1532z00_8142)))->
						BgL_argsz00) = ((obj_t) BgL_args1476z00_577), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1532z00_8142)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1532z00_8142;
			}
		}

	}



/* &make-pre-struct-ref-app */
	BgL_appz00_bglt BGl_z62makezd2prezd2structzd2refzd2appz62zzcfa_info2z00(obj_t
		BgL_envz00_7008, obj_t BgL_loc1471z00_7009, obj_t BgL_type1472z00_7010,
		obj_t BgL_sidezd2effect1473zd2_7011, obj_t BgL_key1474z00_7012,
		obj_t BgL_fun1475z00_7013, obj_t BgL_args1476z00_7014)
	{
		{	/* Cfa/cinfo2.sch 833 */
			return
				BGl_makezd2prezd2structzd2refzd2appz00zzcfa_info2z00
				(BgL_loc1471z00_7009, ((BgL_typez00_bglt) BgL_type1472z00_7010),
				BgL_sidezd2effect1473zd2_7011, BgL_key1474z00_7012,
				((BgL_varz00_bglt) BgL_fun1475z00_7013), BgL_args1476z00_7014);
		}

	}



/* pre-struct-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_prezd2structzd2refzd2appzf3z21zzcfa_info2z00(obj_t
		BgL_objz00_578)
	{
		{	/* Cfa/cinfo2.sch 834 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_578,
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
		}

	}



/* &pre-struct-ref-app? */
	obj_t BGl_z62prezd2structzd2refzd2appzf3z43zzcfa_info2z00(obj_t
		BgL_envz00_7015, obj_t BgL_objz00_7016)
	{
		{	/* Cfa/cinfo2.sch 834 */
			return
				BBOOL(BGl_prezd2structzd2refzd2appzf3z21zzcfa_info2z00
				(BgL_objz00_7016));
		}

	}



/* pre-struct-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 835 */
			{	/* Cfa/cinfo2.sch 835 */
				obj_t BgL_classz00_5127;

				BgL_classz00_5127 = BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 835 */
					obj_t BgL__ortest_1106z00_5128;

					BgL__ortest_1106z00_5128 = BGL_CLASS_NIL(BgL_classz00_5127);
					if (CBOOL(BgL__ortest_1106z00_5128))
						{	/* Cfa/cinfo2.sch 835 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5128);
						}
					else
						{	/* Cfa/cinfo2.sch 835 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5127));
						}
				}
			}
		}

	}



/* &pre-struct-ref-app-nil */
	BgL_appz00_bglt BGl_z62prezd2structzd2refzd2appzd2nilz62zzcfa_info2z00(obj_t
		BgL_envz00_7017)
	{
		{	/* Cfa/cinfo2.sch 835 */
			return BGl_prezd2structzd2refzd2appzd2nilz00zzcfa_info2z00();
		}

	}



/* pre-struct-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2argsz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_579)
	{
		{	/* Cfa/cinfo2.sch 836 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_579)))->BgL_argsz00);
		}

	}



/* &pre-struct-ref-app-args */
	obj_t BGl_z62prezd2structzd2refzd2appzd2argsz62zzcfa_info2z00(obj_t
		BgL_envz00_7018, obj_t BgL_oz00_7019)
	{
		{	/* Cfa/cinfo2.sch 836 */
			return
				BGl_prezd2structzd2refzd2appzd2argsz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7019));
		}

	}



/* pre-struct-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_580, obj_t BgL_vz00_581)
	{
		{	/* Cfa/cinfo2.sch 837 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_580)))->BgL_argsz00) =
				((obj_t) BgL_vz00_581), BUNSPEC);
		}

	}



/* &pre-struct-ref-app-args-set! */
	obj_t BGl_z62prezd2structzd2refzd2appzd2argszd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7020, obj_t BgL_oz00_7021, obj_t BgL_vz00_7022)
	{
		{	/* Cfa/cinfo2.sch 837 */
			return
				BGl_prezd2structzd2refzd2appzd2argszd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7021), BgL_vz00_7022);
		}

	}



/* pre-struct-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2structzd2refzd2appzd2funz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_582)
	{
		{	/* Cfa/cinfo2.sch 838 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_582)))->BgL_funz00);
		}

	}



/* &pre-struct-ref-app-fun */
	BgL_varz00_bglt BGl_z62prezd2structzd2refzd2appzd2funz62zzcfa_info2z00(obj_t
		BgL_envz00_7023, obj_t BgL_oz00_7024)
	{
		{	/* Cfa/cinfo2.sch 838 */
			return
				BGl_prezd2structzd2refzd2appzd2funz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7024));
		}

	}



/* pre-struct-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_583, BgL_varz00_bglt BgL_vz00_584)
	{
		{	/* Cfa/cinfo2.sch 839 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_583)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_584), BUNSPEC);
		}

	}



/* &pre-struct-ref-app-fun-set! */
	obj_t BGl_z62prezd2structzd2refzd2appzd2funzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7025, obj_t BgL_oz00_7026, obj_t BgL_vz00_7027)
	{
		{	/* Cfa/cinfo2.sch 839 */
			return
				BGl_prezd2structzd2refzd2appzd2funzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7026), ((BgL_varz00_bglt) BgL_vz00_7027));
		}

	}



/* pre-struct-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2keyz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_585)
	{
		{	/* Cfa/cinfo2.sch 840 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_585)))->BgL_keyz00);
		}

	}



/* &pre-struct-ref-app-key */
	obj_t BGl_z62prezd2structzd2refzd2appzd2keyz62zzcfa_info2z00(obj_t
		BgL_envz00_7028, obj_t BgL_oz00_7029)
	{
		{	/* Cfa/cinfo2.sch 840 */
			return
				BGl_prezd2structzd2refzd2appzd2keyz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7029));
		}

	}



/* pre-struct-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_586, obj_t BgL_vz00_587)
	{
		{	/* Cfa/cinfo2.sch 841 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_586)))->BgL_keyz00) =
				((obj_t) BgL_vz00_587), BUNSPEC);
		}

	}



/* &pre-struct-ref-app-key-set! */
	obj_t BGl_z62prezd2structzd2refzd2appzd2keyzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7030, obj_t BgL_oz00_7031, obj_t BgL_vz00_7032)
	{
		{	/* Cfa/cinfo2.sch 841 */
			return
				BGl_prezd2structzd2refzd2appzd2keyzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7031), BgL_vz00_7032);
		}

	}



/* pre-struct-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_588)
	{
		{	/* Cfa/cinfo2.sch 842 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_588)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-struct-ref-app-side-effect */
	obj_t BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzb0zzcfa_info2z00(obj_t
		BgL_envz00_7033, obj_t BgL_oz00_7034)
	{
		{	/* Cfa/cinfo2.sch 842 */
			return
				BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7034));
		}

	}



/* pre-struct-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_589, obj_t BgL_vz00_590)
	{
		{	/* Cfa/cinfo2.sch 843 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_589)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_590), BUNSPEC);
		}

	}



/* &pre-struct-ref-app-side-effect-set! */
	obj_t
		BGl_z62prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z70zzcfa_info2z00
		(obj_t BgL_envz00_7035, obj_t BgL_oz00_7036, obj_t BgL_vz00_7037)
	{
		{	/* Cfa/cinfo2.sch 843 */
			return
				BGl_prezd2structzd2refzd2appzd2sidezd2effectzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7036), BgL_vz00_7037);
		}

	}



/* pre-struct-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2structzd2refzd2appzd2typez00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_591)
	{
		{	/* Cfa/cinfo2.sch 844 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_591)))->BgL_typez00);
		}

	}



/* &pre-struct-ref-app-type */
	BgL_typez00_bglt BGl_z62prezd2structzd2refzd2appzd2typez62zzcfa_info2z00(obj_t
		BgL_envz00_7038, obj_t BgL_oz00_7039)
	{
		{	/* Cfa/cinfo2.sch 844 */
			return
				BGl_prezd2structzd2refzd2appzd2typez00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7039));
		}

	}



/* pre-struct-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_592, BgL_typez00_bglt BgL_vz00_593)
	{
		{	/* Cfa/cinfo2.sch 845 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_592)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_593), BUNSPEC);
		}

	}



/* &pre-struct-ref-app-type-set! */
	obj_t BGl_z62prezd2structzd2refzd2appzd2typezd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7040, obj_t BgL_oz00_7041, obj_t BgL_vz00_7042)
	{
		{	/* Cfa/cinfo2.sch 845 */
			return
				BGl_prezd2structzd2refzd2appzd2typezd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7041), ((BgL_typez00_bglt) BgL_vz00_7042));
		}

	}



/* pre-struct-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2refzd2appzd2locz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_594)
	{
		{	/* Cfa/cinfo2.sch 846 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_594)))->BgL_locz00);
		}

	}



/* &pre-struct-ref-app-loc */
	obj_t BGl_z62prezd2structzd2refzd2appzd2locz62zzcfa_info2z00(obj_t
		BgL_envz00_7043, obj_t BgL_oz00_7044)
	{
		{	/* Cfa/cinfo2.sch 846 */
			return
				BGl_prezd2structzd2refzd2appzd2locz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7044));
		}

	}



/* make-pre-struct-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00(obj_t
		BgL_loc1464z00_597, BgL_typez00_bglt BgL_type1465z00_598,
		obj_t BgL_sidezd2effect1466zd2_599, obj_t BgL_key1467z00_600,
		BgL_varz00_bglt BgL_fun1468z00_601, obj_t BgL_args1469z00_602)
	{
		{	/* Cfa/cinfo2.sch 850 */
			{	/* Cfa/cinfo2.sch 850 */
				BgL_appz00_bglt BgL_new1536z00_8150;

				{	/* Cfa/cinfo2.sch 850 */
					BgL_appz00_bglt BgL_tmp1534z00_8151;
					BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_wide1535z00_8152;

					{
						BgL_appz00_bglt BgL_auxz00_11470;

						{	/* Cfa/cinfo2.sch 850 */
							BgL_appz00_bglt BgL_new1533z00_8153;

							BgL_new1533z00_8153 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 850 */
								long BgL_arg1972z00_8154;

								{	/* Cfa/cinfo2.sch 850 */
									long BgL_res2839z00_8155;

									BgL_res2839z00_8155 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1972z00_8154 = BgL_res2839z00_8155;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1533z00_8153),
									BgL_arg1972z00_8154);
							}
							{	/* Cfa/cinfo2.sch 850 */
								BgL_objectz00_bglt BgL_tmpz00_11475;

								BgL_tmpz00_11475 = ((BgL_objectz00_bglt) BgL_new1533z00_8153);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11475, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1533z00_8153);
							BgL_auxz00_11470 = BgL_new1533z00_8153;
						}
						BgL_tmp1534z00_8151 = ((BgL_appz00_bglt) BgL_auxz00_11470);
					}
					BgL_wide1535z00_8152 =
						((BgL_prezd2structzd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2structzd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.sch 850 */
						obj_t BgL_auxz00_11483;
						BgL_objectz00_bglt BgL_tmpz00_11481;

						BgL_auxz00_11483 = ((obj_t) BgL_wide1535z00_8152);
						BgL_tmpz00_11481 = ((BgL_objectz00_bglt) BgL_tmp1534z00_8151);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11481, BgL_auxz00_11483);
					}
					((BgL_objectz00_bglt) BgL_tmp1534z00_8151);
					{	/* Cfa/cinfo2.sch 850 */
						long BgL_arg1971z00_8156;

						{	/* Cfa/cinfo2.sch 850 */
							long BgL_res2840z00_8157;

							BgL_res2840z00_8157 =
								BGL_CLASS_INDEX
								(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg1971z00_8156 = BgL_res2840z00_8157;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1534z00_8151), BgL_arg1971z00_8156);
					}
					BgL_new1536z00_8150 = ((BgL_appz00_bglt) BgL_tmp1534z00_8151);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1536z00_8150)))->BgL_locz00) =
					((obj_t) BgL_loc1464z00_597), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1536z00_8150)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1465z00_598), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1536z00_8150)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1466zd2_599), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1536z00_8150)))->BgL_keyz00) =
					((obj_t) BgL_key1467z00_600), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1536z00_8150)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1468z00_601), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1536z00_8150)))->
						BgL_argsz00) = ((obj_t) BgL_args1469z00_602), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1536z00_8150)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				return BgL_new1536z00_8150;
			}
		}

	}



/* &make-pre-struct-set!-app */
	BgL_appz00_bglt
		BGl_z62makezd2prezd2structzd2setz12zd2appz70zzcfa_info2z00(obj_t
		BgL_envz00_7045, obj_t BgL_loc1464z00_7046, obj_t BgL_type1465z00_7047,
		obj_t BgL_sidezd2effect1466zd2_7048, obj_t BgL_key1467z00_7049,
		obj_t BgL_fun1468z00_7050, obj_t BgL_args1469z00_7051)
	{
		{	/* Cfa/cinfo2.sch 850 */
			return
				BGl_makezd2prezd2structzd2setz12zd2appz12zzcfa_info2z00
				(BgL_loc1464z00_7046, ((BgL_typez00_bglt) BgL_type1465z00_7047),
				BgL_sidezd2effect1466zd2_7048, BgL_key1467z00_7049,
				((BgL_varz00_bglt) BgL_fun1468z00_7050), BgL_args1469z00_7051);
		}

	}



/* pre-struct-set!-app? */
	BGL_EXPORTED_DEF bool_t
		BGl_prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00(obj_t BgL_objz00_603)
	{
		{	/* Cfa/cinfo2.sch 851 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_603,
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
		}

	}



/* &pre-struct-set!-app? */
	obj_t BGl_z62prezd2structzd2setz12zd2appzf3z51zzcfa_info2z00(obj_t
		BgL_envz00_7052, obj_t BgL_objz00_7053)
	{
		{	/* Cfa/cinfo2.sch 851 */
			return
				BBOOL(BGl_prezd2structzd2setz12zd2appzf3z33zzcfa_info2z00
				(BgL_objz00_7053));
		}

	}



/* pre-struct-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 852 */
			{	/* Cfa/cinfo2.sch 852 */
				obj_t BgL_classz00_5145;

				BgL_classz00_5145 = BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 852 */
					obj_t BgL__ortest_1106z00_5146;

					BgL__ortest_1106z00_5146 = BGL_CLASS_NIL(BgL_classz00_5145);
					if (CBOOL(BgL__ortest_1106z00_5146))
						{	/* Cfa/cinfo2.sch 852 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5146);
						}
					else
						{	/* Cfa/cinfo2.sch 852 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5145));
						}
				}
			}
		}

	}



/* &pre-struct-set!-app-nil */
	BgL_appz00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2nilz70zzcfa_info2z00(obj_t
		BgL_envz00_7054)
	{
		{	/* Cfa/cinfo2.sch 852 */
			return BGl_prezd2structzd2setz12zd2appzd2nilz12zzcfa_info2z00();
		}

	}



/* pre-struct-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2argsz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_604)
	{
		{	/* Cfa/cinfo2.sch 853 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_604)))->BgL_argsz00);
		}

	}



/* &pre-struct-set!-app-args */
	obj_t BGl_z62prezd2structzd2setz12zd2appzd2argsz70zzcfa_info2z00(obj_t
		BgL_envz00_7055, obj_t BgL_oz00_7056)
	{
		{	/* Cfa/cinfo2.sch 853 */
			return
				BGl_prezd2structzd2setz12zd2appzd2argsz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7056));
		}

	}



/* pre-struct-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_605, obj_t BgL_vz00_606)
	{
		{	/* Cfa/cinfo2.sch 854 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_605)))->BgL_argsz00) =
				((obj_t) BgL_vz00_606), BUNSPEC);
		}

	}



/* &pre-struct-set!-app-args-set! */
	obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2argszd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_7057, obj_t BgL_oz00_7058, obj_t BgL_vz00_7059)
	{
		{	/* Cfa/cinfo2.sch 854 */
			return
				BGl_prezd2structzd2setz12zd2appzd2argszd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7058), BgL_vz00_7059);
		}

	}



/* pre-struct-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_prezd2structzd2setz12zd2appzd2funz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_607)
	{
		{	/* Cfa/cinfo2.sch 855 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_607)))->BgL_funz00);
		}

	}



/* &pre-struct-set!-app-fun */
	BgL_varz00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2funz70zzcfa_info2z00(obj_t
		BgL_envz00_7060, obj_t BgL_oz00_7061)
	{
		{	/* Cfa/cinfo2.sch 855 */
			return
				BGl_prezd2structzd2setz12zd2appzd2funz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7061));
		}

	}



/* pre-struct-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_608, BgL_varz00_bglt BgL_vz00_609)
	{
		{	/* Cfa/cinfo2.sch 856 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_608)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_609), BUNSPEC);
		}

	}



/* &pre-struct-set!-app-fun-set! */
	obj_t BGl_z62prezd2structzd2setz12zd2appzd2funzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_7062, obj_t BgL_oz00_7063, obj_t BgL_vz00_7064)
	{
		{	/* Cfa/cinfo2.sch 856 */
			return
				BGl_prezd2structzd2setz12zd2appzd2funzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7063), ((BgL_varz00_bglt) BgL_vz00_7064));
		}

	}



/* pre-struct-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2keyz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_610)
	{
		{	/* Cfa/cinfo2.sch 857 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_610)))->BgL_keyz00);
		}

	}



/* &pre-struct-set!-app-key */
	obj_t BGl_z62prezd2structzd2setz12zd2appzd2keyz70zzcfa_info2z00(obj_t
		BgL_envz00_7065, obj_t BgL_oz00_7066)
	{
		{	/* Cfa/cinfo2.sch 857 */
			return
				BGl_prezd2structzd2setz12zd2appzd2keyz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7066));
		}

	}



/* pre-struct-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_611, obj_t BgL_vz00_612)
	{
		{	/* Cfa/cinfo2.sch 858 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_611)))->BgL_keyz00) =
				((obj_t) BgL_vz00_612), BUNSPEC);
		}

	}



/* &pre-struct-set!-app-key-set! */
	obj_t BGl_z62prezd2structzd2setz12zd2appzd2keyzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_7067, obj_t BgL_oz00_7068, obj_t BgL_vz00_7069)
	{
		{	/* Cfa/cinfo2.sch 858 */
			return
				BGl_prezd2structzd2setz12zd2appzd2keyzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7068), BgL_vz00_7069);
		}

	}



/* pre-struct-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_613)
	{
		{	/* Cfa/cinfo2.sch 859 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_613)))->BgL_sidezd2effectzd2);
		}

	}



/* &pre-struct-set!-app-side-effect */
	obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectza2zzcfa_info2z00(obj_t
		BgL_envz00_7070, obj_t BgL_oz00_7071)
	{
		{	/* Cfa/cinfo2.sch 859 */
			return
				BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7071));
		}

	}



/* pre-struct-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_614, obj_t BgL_vz00_615)
	{
		{	/* Cfa/cinfo2.sch 860 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_614)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_615), BUNSPEC);
		}

	}



/* &pre-struct-set!-app-side-effect-set! */
	obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z62zzcfa_info2z00
		(obj_t BgL_envz00_7072, obj_t BgL_oz00_7073, obj_t BgL_vz00_7074)
	{
		{	/* Cfa/cinfo2.sch 860 */
			return
				BGl_prezd2structzd2setz12zd2appzd2sidezd2effectzd2setz12z00zzcfa_info2z00
				(((BgL_appz00_bglt) BgL_oz00_7073), BgL_vz00_7074);
		}

	}



/* pre-struct-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_prezd2structzd2setz12zd2appzd2typez12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_616)
	{
		{	/* Cfa/cinfo2.sch 861 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_616)))->BgL_typez00);
		}

	}



/* &pre-struct-set!-app-type */
	BgL_typez00_bglt
		BGl_z62prezd2structzd2setz12zd2appzd2typez70zzcfa_info2z00(obj_t
		BgL_envz00_7075, obj_t BgL_oz00_7076)
	{
		{	/* Cfa/cinfo2.sch 861 */
			return
				BGl_prezd2structzd2setz12zd2appzd2typez12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7076));
		}

	}



/* pre-struct-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_617, BgL_typez00_bglt BgL_vz00_618)
	{
		{	/* Cfa/cinfo2.sch 862 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_617)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_618), BUNSPEC);
		}

	}



/* &pre-struct-set!-app-type-set! */
	obj_t
		BGl_z62prezd2structzd2setz12zd2appzd2typezd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_7077, obj_t BgL_oz00_7078, obj_t BgL_vz00_7079)
	{
		{	/* Cfa/cinfo2.sch 862 */
			return
				BGl_prezd2structzd2setz12zd2appzd2typezd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7078), ((BgL_typez00_bglt) BgL_vz00_7079));
		}

	}



/* pre-struct-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_prezd2structzd2setz12zd2appzd2locz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_619)
	{
		{	/* Cfa/cinfo2.sch 863 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_619)))->BgL_locz00);
		}

	}



/* &pre-struct-set!-app-loc */
	obj_t BGl_z62prezd2structzd2setz12zd2appzd2locz70zzcfa_info2z00(obj_t
		BgL_envz00_7080, obj_t BgL_oz00_7081)
	{
		{	/* Cfa/cinfo2.sch 863 */
			return
				BGl_prezd2structzd2setz12zd2appzd2locz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7081));
		}

	}



/* make-make-struct-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00(obj_t BgL_loc1452z00_622,
		BgL_typez00_bglt BgL_type1453z00_623, obj_t BgL_sidezd2effect1454zd2_624,
		obj_t BgL_key1455z00_625, BgL_varz00_bglt BgL_fun1456z00_626,
		obj_t BgL_args1457z00_627, BgL_approxz00_bglt BgL_approx1458z00_628,
		BgL_approxz00_bglt BgL_valuezd2approx1459zd2_629,
		long BgL_lostzd2stamp1460zd2_630, BgL_variablez00_bglt BgL_owner1461z00_631,
		obj_t BgL_stackzd2stamp1462zd2_632)
	{
		{	/* Cfa/cinfo2.sch 867 */
			{	/* Cfa/cinfo2.sch 867 */
				BgL_appz00_bglt BgL_new1540z00_8158;

				{	/* Cfa/cinfo2.sch 867 */
					BgL_appz00_bglt BgL_tmp1538z00_8159;
					BgL_makezd2structzd2appz00_bglt BgL_wide1539z00_8160;

					{
						BgL_appz00_bglt BgL_auxz00_11564;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_appz00_bglt BgL_new1537z00_8161;

							BgL_new1537z00_8161 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 867 */
								long BgL_arg1974z00_8162;

								{	/* Cfa/cinfo2.sch 867 */
									long BgL_res2841z00_8163;

									BgL_res2841z00_8163 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1974z00_8162 = BgL_res2841z00_8163;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1537z00_8161),
									BgL_arg1974z00_8162);
							}
							{	/* Cfa/cinfo2.sch 867 */
								BgL_objectz00_bglt BgL_tmpz00_11569;

								BgL_tmpz00_11569 = ((BgL_objectz00_bglt) BgL_new1537z00_8161);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11569, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1537z00_8161);
							BgL_auxz00_11564 = BgL_new1537z00_8161;
						}
						BgL_tmp1538z00_8159 = ((BgL_appz00_bglt) BgL_auxz00_11564);
					}
					BgL_wide1539z00_8160 =
						((BgL_makezd2structzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_makezd2structzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 867 */
						obj_t BgL_auxz00_11577;
						BgL_objectz00_bglt BgL_tmpz00_11575;

						BgL_auxz00_11577 = ((obj_t) BgL_wide1539z00_8160);
						BgL_tmpz00_11575 = ((BgL_objectz00_bglt) BgL_tmp1538z00_8159);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11575, BgL_auxz00_11577);
					}
					((BgL_objectz00_bglt) BgL_tmp1538z00_8159);
					{	/* Cfa/cinfo2.sch 867 */
						long BgL_arg1973z00_8164;

						{	/* Cfa/cinfo2.sch 867 */
							long BgL_res2842z00_8165;

							BgL_res2842z00_8165 =
								BGL_CLASS_INDEX(BGl_makezd2structzd2appz00zzcfa_info2z00);
							BgL_arg1973z00_8164 = BgL_res2842z00_8165;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1538z00_8159), BgL_arg1973z00_8164);
					}
					BgL_new1540z00_8158 = ((BgL_appz00_bglt) BgL_tmp1538z00_8159);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1540z00_8158)))->BgL_locz00) =
					((obj_t) BgL_loc1452z00_622), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1540z00_8158)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1453z00_623), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1540z00_8158)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1454zd2_624), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1540z00_8158)))->BgL_keyz00) =
					((obj_t) BgL_key1455z00_625), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1540z00_8158)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1456z00_626), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1540z00_8158)))->
						BgL_argsz00) = ((obj_t) BgL_args1457z00_627), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1540z00_8158)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_11599;

					{
						obj_t BgL_auxz00_11600;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_objectz00_bglt BgL_tmpz00_11601;

							BgL_tmpz00_11601 = ((BgL_objectz00_bglt) BgL_new1540z00_8158);
							BgL_auxz00_11600 = BGL_OBJECT_WIDENING(BgL_tmpz00_11601);
						}
						BgL_auxz00_11599 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11600);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11599))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1458z00_628), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_11606;

					{
						obj_t BgL_auxz00_11607;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_objectz00_bglt BgL_tmpz00_11608;

							BgL_tmpz00_11608 = ((BgL_objectz00_bglt) BgL_new1540z00_8158);
							BgL_auxz00_11607 = BGL_OBJECT_WIDENING(BgL_tmpz00_11608);
						}
						BgL_auxz00_11606 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11607);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11606))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_valuezd2approx1459zd2_629), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_11613;

					{
						obj_t BgL_auxz00_11614;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_objectz00_bglt BgL_tmpz00_11615;

							BgL_tmpz00_11615 = ((BgL_objectz00_bglt) BgL_new1540z00_8158);
							BgL_auxz00_11614 = BGL_OBJECT_WIDENING(BgL_tmpz00_11615);
						}
						BgL_auxz00_11613 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11614);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11613))->
							BgL_lostzd2stampzd2) =
						((long) BgL_lostzd2stamp1460zd2_630), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_11620;

					{
						obj_t BgL_auxz00_11621;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_objectz00_bglt BgL_tmpz00_11622;

							BgL_tmpz00_11622 = ((BgL_objectz00_bglt) BgL_new1540z00_8158);
							BgL_auxz00_11621 = BGL_OBJECT_WIDENING(BgL_tmpz00_11622);
						}
						BgL_auxz00_11620 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11621);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11620))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_owner1461z00_631), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_11627;

					{
						obj_t BgL_auxz00_11628;

						{	/* Cfa/cinfo2.sch 867 */
							BgL_objectz00_bglt BgL_tmpz00_11629;

							BgL_tmpz00_11629 = ((BgL_objectz00_bglt) BgL_new1540z00_8158);
							BgL_auxz00_11628 = BGL_OBJECT_WIDENING(BgL_tmpz00_11629);
						}
						BgL_auxz00_11627 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11628);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11627))->
							BgL_stackzd2stampzd2) =
						((obj_t) BgL_stackzd2stamp1462zd2_632), BUNSPEC);
				}
				return BgL_new1540z00_8158;
			}
		}

	}



/* &make-make-struct-app */
	BgL_appz00_bglt BGl_z62makezd2makezd2structzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_7082, obj_t BgL_loc1452z00_7083, obj_t BgL_type1453z00_7084,
		obj_t BgL_sidezd2effect1454zd2_7085, obj_t BgL_key1455z00_7086,
		obj_t BgL_fun1456z00_7087, obj_t BgL_args1457z00_7088,
		obj_t BgL_approx1458z00_7089, obj_t BgL_valuezd2approx1459zd2_7090,
		obj_t BgL_lostzd2stamp1460zd2_7091, obj_t BgL_owner1461z00_7092,
		obj_t BgL_stackzd2stamp1462zd2_7093)
	{
		{	/* Cfa/cinfo2.sch 867 */
			return
				BGl_makezd2makezd2structzd2appzd2zzcfa_info2z00(BgL_loc1452z00_7083,
				((BgL_typez00_bglt) BgL_type1453z00_7084),
				BgL_sidezd2effect1454zd2_7085, BgL_key1455z00_7086,
				((BgL_varz00_bglt) BgL_fun1456z00_7087), BgL_args1457z00_7088,
				((BgL_approxz00_bglt) BgL_approx1458z00_7089),
				((BgL_approxz00_bglt) BgL_valuezd2approx1459zd2_7090),
				(long) CINT(BgL_lostzd2stamp1460zd2_7091),
				((BgL_variablez00_bglt) BgL_owner1461z00_7092),
				BgL_stackzd2stamp1462zd2_7093);
		}

	}



/* make-struct-app? */
	BGL_EXPORTED_DEF bool_t BGl_makezd2structzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_633)
	{
		{	/* Cfa/cinfo2.sch 868 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_633,
				BGl_makezd2structzd2appz00zzcfa_info2z00);
		}

	}



/* &make-struct-app? */
	obj_t BGl_z62makezd2structzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_7094,
		obj_t BgL_objz00_7095)
	{
		{	/* Cfa/cinfo2.sch 868 */
			return
				BBOOL(BGl_makezd2structzd2appzf3zf3zzcfa_info2z00(BgL_objz00_7095));
		}

	}



/* make-struct-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 869 */
			{	/* Cfa/cinfo2.sch 869 */
				obj_t BgL_classz00_5168;

				BgL_classz00_5168 = BGl_makezd2structzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 869 */
					obj_t BgL__ortest_1106z00_5169;

					BgL__ortest_1106z00_5169 = BGL_CLASS_NIL(BgL_classz00_5168);
					if (CBOOL(BgL__ortest_1106z00_5169))
						{	/* Cfa/cinfo2.sch 869 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5169);
						}
					else
						{	/* Cfa/cinfo2.sch 869 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5168));
						}
				}
			}
		}

	}



/* &make-struct-app-nil */
	BgL_appz00_bglt BGl_z62makezd2structzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_7096)
	{
		{	/* Cfa/cinfo2.sch 869 */
			return BGl_makezd2structzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* make-struct-app-stack-stamp */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2stackzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_634)
	{
		{	/* Cfa/cinfo2.sch 870 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11651;

				{
					obj_t BgL_auxz00_11652;

					{	/* Cfa/cinfo2.sch 870 */
						BgL_objectz00_bglt BgL_tmpz00_11653;

						BgL_tmpz00_11653 = ((BgL_objectz00_bglt) BgL_oz00_634);
						BgL_auxz00_11652 = BGL_OBJECT_WIDENING(BgL_tmpz00_11653);
					}
					BgL_auxz00_11651 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11652);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11651))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &make-struct-app-stack-stamp */
	obj_t BGl_z62makezd2structzd2appzd2stackzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_7097, obj_t BgL_oz00_7098)
	{
		{	/* Cfa/cinfo2.sch 870 */
			return
				BGl_makezd2structzd2appzd2stackzd2stampz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7098));
		}

	}



/* make-struct-app-stack-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_635, obj_t BgL_vz00_636)
	{
		{	/* Cfa/cinfo2.sch 871 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11660;

				{
					obj_t BgL_auxz00_11661;

					{	/* Cfa/cinfo2.sch 871 */
						BgL_objectz00_bglt BgL_tmpz00_11662;

						BgL_tmpz00_11662 = ((BgL_objectz00_bglt) BgL_oz00_635);
						BgL_auxz00_11661 = BGL_OBJECT_WIDENING(BgL_tmpz00_11662);
					}
					BgL_auxz00_11660 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11661);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11660))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_636), BUNSPEC);
			}
		}

	}



/* &make-struct-app-stack-stamp-set! */
	obj_t
		BGl_z62makezd2structzd2appzd2stackzd2stampzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7099, obj_t BgL_oz00_7100, obj_t BgL_vz00_7101)
	{
		{	/* Cfa/cinfo2.sch 871 */
			return
				BGl_makezd2structzd2appzd2stackzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7100), BgL_vz00_7101);
		}

	}



/* make-struct-app-owner */
	BGL_EXPORTED_DEF BgL_variablez00_bglt
		BGl_makezd2structzd2appzd2ownerzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_637)
	{
		{	/* Cfa/cinfo2.sch 872 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11669;

				{
					obj_t BgL_auxz00_11670;

					{	/* Cfa/cinfo2.sch 872 */
						BgL_objectz00_bglt BgL_tmpz00_11671;

						BgL_tmpz00_11671 = ((BgL_objectz00_bglt) BgL_oz00_637);
						BgL_auxz00_11670 = BGL_OBJECT_WIDENING(BgL_tmpz00_11671);
					}
					BgL_auxz00_11669 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11670);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11669))->
					BgL_ownerz00);
			}
		}

	}



/* &make-struct-app-owner */
	BgL_variablez00_bglt BGl_z62makezd2structzd2appzd2ownerzb0zzcfa_info2z00(obj_t
		BgL_envz00_7102, obj_t BgL_oz00_7103)
	{
		{	/* Cfa/cinfo2.sch 872 */
			return
				BGl_makezd2structzd2appzd2ownerzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7103));
		}

	}



/* make-struct-app-lost-stamp */
	BGL_EXPORTED_DEF long
		BGl_makezd2structzd2appzd2lostzd2stampz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_640)
	{
		{	/* Cfa/cinfo2.sch 874 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11678;

				{
					obj_t BgL_auxz00_11679;

					{	/* Cfa/cinfo2.sch 874 */
						BgL_objectz00_bglt BgL_tmpz00_11680;

						BgL_tmpz00_11680 = ((BgL_objectz00_bglt) BgL_oz00_640);
						BgL_auxz00_11679 = BGL_OBJECT_WIDENING(BgL_tmpz00_11680);
					}
					BgL_auxz00_11678 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11679);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11678))->
					BgL_lostzd2stampzd2);
			}
		}

	}



/* &make-struct-app-lost-stamp */
	obj_t BGl_z62makezd2structzd2appzd2lostzd2stampz62zzcfa_info2z00(obj_t
		BgL_envz00_7104, obj_t BgL_oz00_7105)
	{
		{	/* Cfa/cinfo2.sch 874 */
			return
				BINT(BGl_makezd2structzd2appzd2lostzd2stampz00zzcfa_info2z00(
					((BgL_appz00_bglt) BgL_oz00_7105)));
		}

	}



/* make-struct-app-lost-stamp-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_641, long BgL_vz00_642)
	{
		{	/* Cfa/cinfo2.sch 875 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11688;

				{
					obj_t BgL_auxz00_11689;

					{	/* Cfa/cinfo2.sch 875 */
						BgL_objectz00_bglt BgL_tmpz00_11690;

						BgL_tmpz00_11690 = ((BgL_objectz00_bglt) BgL_oz00_641);
						BgL_auxz00_11689 = BGL_OBJECT_WIDENING(BgL_tmpz00_11690);
					}
					BgL_auxz00_11688 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11689);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11688))->
						BgL_lostzd2stampzd2) = ((long) BgL_vz00_642), BUNSPEC);
		}}

	}



/* &make-struct-app-lost-stamp-set! */
	obj_t
		BGl_z62makezd2structzd2appzd2lostzd2stampzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7106, obj_t BgL_oz00_7107, obj_t BgL_vz00_7108)
	{
		{	/* Cfa/cinfo2.sch 875 */
			return
				BGl_makezd2structzd2appzd2lostzd2stampzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7107), (long) CINT(BgL_vz00_7108));
		}

	}



/* make-struct-app-value-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2structzd2appzd2valuezd2approxz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_643)
	{
		{	/* Cfa/cinfo2.sch 876 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11698;

				{
					obj_t BgL_auxz00_11699;

					{	/* Cfa/cinfo2.sch 876 */
						BgL_objectz00_bglt BgL_tmpz00_11700;

						BgL_tmpz00_11700 = ((BgL_objectz00_bglt) BgL_oz00_643);
						BgL_auxz00_11699 = BGL_OBJECT_WIDENING(BgL_tmpz00_11700);
					}
					BgL_auxz00_11698 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11699);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11698))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &make-struct-app-value-approx */
	BgL_approxz00_bglt
		BGl_z62makezd2structzd2appzd2valuezd2approxz62zzcfa_info2z00(obj_t
		BgL_envz00_7109, obj_t BgL_oz00_7110)
	{
		{	/* Cfa/cinfo2.sch 876 */
			return
				BGl_makezd2structzd2appzd2valuezd2approxz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7110));
		}

	}



/* make-struct-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_makezd2structzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_646)
	{
		{	/* Cfa/cinfo2.sch 878 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11707;

				{
					obj_t BgL_auxz00_11708;

					{	/* Cfa/cinfo2.sch 878 */
						BgL_objectz00_bglt BgL_tmpz00_11709;

						BgL_tmpz00_11709 = ((BgL_objectz00_bglt) BgL_oz00_646);
						BgL_auxz00_11708 = BGL_OBJECT_WIDENING(BgL_tmpz00_11709);
					}
					BgL_auxz00_11707 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11708);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11707))->
					BgL_approxz00);
			}
		}

	}



/* &make-struct-app-approx */
	BgL_approxz00_bglt BGl_z62makezd2structzd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_7111, obj_t BgL_oz00_7112)
	{
		{	/* Cfa/cinfo2.sch 878 */
			return
				BGl_makezd2structzd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7112));
		}

	}



/* make-struct-app-approx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2approxzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_647, BgL_approxz00_bglt BgL_vz00_648)
	{
		{	/* Cfa/cinfo2.sch 879 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_11716;

				{
					obj_t BgL_auxz00_11717;

					{	/* Cfa/cinfo2.sch 879 */
						BgL_objectz00_bglt BgL_tmpz00_11718;

						BgL_tmpz00_11718 = ((BgL_objectz00_bglt) BgL_oz00_647);
						BgL_auxz00_11717 = BGL_OBJECT_WIDENING(BgL_tmpz00_11718);
					}
					BgL_auxz00_11716 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_11717);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_11716))->
						BgL_approxz00) = ((BgL_approxz00_bglt) BgL_vz00_648), BUNSPEC);
			}
		}

	}



/* &make-struct-app-approx-set! */
	obj_t BGl_z62makezd2structzd2appzd2approxzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7113, obj_t BgL_oz00_7114, obj_t BgL_vz00_7115)
	{
		{	/* Cfa/cinfo2.sch 879 */
			return
				BGl_makezd2structzd2appzd2approxzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7114),
				((BgL_approxz00_bglt) BgL_vz00_7115));
		}

	}



/* make-struct-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_649)
	{
		{	/* Cfa/cinfo2.sch 880 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_649)))->BgL_argsz00);
		}

	}



/* &make-struct-app-args */
	obj_t BGl_z62makezd2structzd2appzd2argszb0zzcfa_info2z00(obj_t
		BgL_envz00_7116, obj_t BgL_oz00_7117)
	{
		{	/* Cfa/cinfo2.sch 880 */
			return
				BGl_makezd2structzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7117));
		}

	}



/* make-struct-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_650, obj_t BgL_vz00_651)
	{
		{	/* Cfa/cinfo2.sch 881 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_650)))->BgL_argsz00) =
				((obj_t) BgL_vz00_651), BUNSPEC);
		}

	}



/* &make-struct-app-args-set! */
	obj_t BGl_z62makezd2structzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7118, obj_t BgL_oz00_7119, obj_t BgL_vz00_7120)
	{
		{	/* Cfa/cinfo2.sch 881 */
			return
				BGl_makezd2structzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7119), BgL_vz00_7120);
		}

	}



/* make-struct-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_makezd2structzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_652)
	{
		{	/* Cfa/cinfo2.sch 882 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_652)))->BgL_funz00);
		}

	}



/* &make-struct-app-fun */
	BgL_varz00_bglt BGl_z62makezd2structzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_7121, obj_t BgL_oz00_7122)
	{
		{	/* Cfa/cinfo2.sch 882 */
			return
				BGl_makezd2structzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7122));
		}

	}



/* make-struct-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_653, BgL_varz00_bglt BgL_vz00_654)
	{
		{	/* Cfa/cinfo2.sch 883 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_653)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_654), BUNSPEC);
		}

	}



/* &make-struct-app-fun-set! */
	obj_t BGl_z62makezd2structzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7123, obj_t BgL_oz00_7124, obj_t BgL_vz00_7125)
	{
		{	/* Cfa/cinfo2.sch 883 */
			return
				BGl_makezd2structzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7124), ((BgL_varz00_bglt) BgL_vz00_7125));
		}

	}



/* make-struct-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_655)
	{
		{	/* Cfa/cinfo2.sch 884 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_655)))->BgL_keyz00);
		}

	}



/* &make-struct-app-key */
	obj_t BGl_z62makezd2structzd2appzd2keyzb0zzcfa_info2z00(obj_t BgL_envz00_7126,
		obj_t BgL_oz00_7127)
	{
		{	/* Cfa/cinfo2.sch 884 */
			return
				BGl_makezd2structzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7127));
		}

	}



/* make-struct-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_656, obj_t BgL_vz00_657)
	{
		{	/* Cfa/cinfo2.sch 885 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_656)))->BgL_keyz00) =
				((obj_t) BgL_vz00_657), BUNSPEC);
		}

	}



/* &make-struct-app-key-set! */
	obj_t BGl_z62makezd2structzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7128, obj_t BgL_oz00_7129, obj_t BgL_vz00_7130)
	{
		{	/* Cfa/cinfo2.sch 885 */
			return
				BGl_makezd2structzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7129), BgL_vz00_7130);
		}

	}



/* make-struct-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_658)
	{
		{	/* Cfa/cinfo2.sch 886 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_658)))->BgL_sidezd2effectzd2);
		}

	}



/* &make-struct-app-side-effect */
	obj_t BGl_z62makezd2structzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_7131, obj_t BgL_oz00_7132)
	{
		{	/* Cfa/cinfo2.sch 886 */
			return
				BGl_makezd2structzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7132));
		}

	}



/* make-struct-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_659, obj_t BgL_vz00_660)
	{
		{	/* Cfa/cinfo2.sch 887 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_659)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_660), BUNSPEC);
		}

	}



/* &make-struct-app-side-effect-set! */
	obj_t
		BGl_z62makezd2structzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7133, obj_t BgL_oz00_7134, obj_t BgL_vz00_7135)
	{
		{	/* Cfa/cinfo2.sch 887 */
			return
				BGl_makezd2structzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7134), BgL_vz00_7135);
		}

	}



/* make-struct-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2structzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_661)
	{
		{	/* Cfa/cinfo2.sch 888 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_661)))->BgL_typez00);
		}

	}



/* &make-struct-app-type */
	BgL_typez00_bglt BGl_z62makezd2structzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_7136, obj_t BgL_oz00_7137)
	{
		{	/* Cfa/cinfo2.sch 888 */
			return
				BGl_makezd2structzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7137));
		}

	}



/* make-struct-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_662, BgL_typez00_bglt BgL_vz00_663)
	{
		{	/* Cfa/cinfo2.sch 889 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_662)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_663), BUNSPEC);
		}

	}



/* &make-struct-app-type-set! */
	obj_t BGl_z62makezd2structzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7138, obj_t BgL_oz00_7139, obj_t BgL_vz00_7140)
	{
		{	/* Cfa/cinfo2.sch 889 */
			return
				BGl_makezd2structzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7139), ((BgL_typez00_bglt) BgL_vz00_7140));
		}

	}



/* make-struct-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2structzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_664)
	{
		{	/* Cfa/cinfo2.sch 890 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_664)))->BgL_locz00);
		}

	}



/* &make-struct-app-loc */
	obj_t BGl_z62makezd2structzd2appzd2loczb0zzcfa_info2z00(obj_t BgL_envz00_7141,
		obj_t BgL_oz00_7142)
	{
		{	/* Cfa/cinfo2.sch 890 */
			return
				BGl_makezd2structzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7142));
		}

	}



/* make-struct-ref-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00(obj_t BgL_loc1444z00_667,
		BgL_typez00_bglt BgL_type1445z00_668, obj_t BgL_sidezd2effect1446zd2_669,
		obj_t BgL_key1447z00_670, BgL_varz00_bglt BgL_fun1448z00_671,
		obj_t BgL_args1449z00_672, BgL_approxz00_bglt BgL_approx1450z00_673)
	{
		{	/* Cfa/cinfo2.sch 894 */
			{	/* Cfa/cinfo2.sch 894 */
				BgL_appz00_bglt BgL_new1544z00_8166;

				{	/* Cfa/cinfo2.sch 894 */
					BgL_appz00_bglt BgL_tmp1542z00_8167;
					BgL_structzd2refzd2appz00_bglt BgL_wide1543z00_8168;

					{
						BgL_appz00_bglt BgL_auxz00_11772;

						{	/* Cfa/cinfo2.sch 894 */
							BgL_appz00_bglt BgL_new1541z00_8169;

							BgL_new1541z00_8169 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 894 */
								long BgL_arg1976z00_8170;

								{	/* Cfa/cinfo2.sch 894 */
									long BgL_res2843z00_8171;

									BgL_res2843z00_8171 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1976z00_8170 = BgL_res2843z00_8171;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1541z00_8169),
									BgL_arg1976z00_8170);
							}
							{	/* Cfa/cinfo2.sch 894 */
								BgL_objectz00_bglt BgL_tmpz00_11777;

								BgL_tmpz00_11777 = ((BgL_objectz00_bglt) BgL_new1541z00_8169);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11777, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1541z00_8169);
							BgL_auxz00_11772 = BgL_new1541z00_8169;
						}
						BgL_tmp1542z00_8167 = ((BgL_appz00_bglt) BgL_auxz00_11772);
					}
					BgL_wide1543z00_8168 =
						((BgL_structzd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.sch 894 */
						obj_t BgL_auxz00_11785;
						BgL_objectz00_bglt BgL_tmpz00_11783;

						BgL_auxz00_11785 = ((obj_t) BgL_wide1543z00_8168);
						BgL_tmpz00_11783 = ((BgL_objectz00_bglt) BgL_tmp1542z00_8167);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11783, BgL_auxz00_11785);
					}
					((BgL_objectz00_bglt) BgL_tmp1542z00_8167);
					{	/* Cfa/cinfo2.sch 894 */
						long BgL_arg1975z00_8172;

						{	/* Cfa/cinfo2.sch 894 */
							long BgL_res2844z00_8173;

							BgL_res2844z00_8173 =
								BGL_CLASS_INDEX(BGl_structzd2refzd2appz00zzcfa_info2z00);
							BgL_arg1975z00_8172 = BgL_res2844z00_8173;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1542z00_8167), BgL_arg1975z00_8172);
					}
					BgL_new1544z00_8166 = ((BgL_appz00_bglt) BgL_tmp1542z00_8167);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1544z00_8166)))->BgL_locz00) =
					((obj_t) BgL_loc1444z00_667), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1544z00_8166)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1445z00_668), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1544z00_8166)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1446zd2_669), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1544z00_8166)))->BgL_keyz00) =
					((obj_t) BgL_key1447z00_670), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1544z00_8166)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1448z00_671), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1544z00_8166)))->
						BgL_argsz00) = ((obj_t) BgL_args1449z00_672), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1544z00_8166)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_structzd2refzd2appz00_bglt BgL_auxz00_11807;

					{
						obj_t BgL_auxz00_11808;

						{	/* Cfa/cinfo2.sch 894 */
							BgL_objectz00_bglt BgL_tmpz00_11809;

							BgL_tmpz00_11809 = ((BgL_objectz00_bglt) BgL_new1544z00_8166);
							BgL_auxz00_11808 = BGL_OBJECT_WIDENING(BgL_tmpz00_11809);
						}
						BgL_auxz00_11807 =
							((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_11808);
					}
					((((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11807))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1450z00_673), BUNSPEC);
				}
				return BgL_new1544z00_8166;
			}
		}

	}



/* &make-struct-ref-app */
	BgL_appz00_bglt BGl_z62makezd2structzd2refzd2appzb0zzcfa_info2z00(obj_t
		BgL_envz00_7143, obj_t BgL_loc1444z00_7144, obj_t BgL_type1445z00_7145,
		obj_t BgL_sidezd2effect1446zd2_7146, obj_t BgL_key1447z00_7147,
		obj_t BgL_fun1448z00_7148, obj_t BgL_args1449z00_7149,
		obj_t BgL_approx1450z00_7150)
	{
		{	/* Cfa/cinfo2.sch 894 */
			return
				BGl_makezd2structzd2refzd2appzd2zzcfa_info2z00(BgL_loc1444z00_7144,
				((BgL_typez00_bglt) BgL_type1445z00_7145),
				BgL_sidezd2effect1446zd2_7146, BgL_key1447z00_7147,
				((BgL_varz00_bglt) BgL_fun1448z00_7148), BgL_args1449z00_7149,
				((BgL_approxz00_bglt) BgL_approx1450z00_7150));
		}

	}



/* struct-ref-app? */
	BGL_EXPORTED_DEF bool_t BGl_structzd2refzd2appzf3zf3zzcfa_info2z00(obj_t
		BgL_objz00_674)
	{
		{	/* Cfa/cinfo2.sch 895 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_674,
				BGl_structzd2refzd2appz00zzcfa_info2z00);
		}

	}



/* &struct-ref-app? */
	obj_t BGl_z62structzd2refzd2appzf3z91zzcfa_info2z00(obj_t BgL_envz00_7151,
		obj_t BgL_objz00_7152)
	{
		{	/* Cfa/cinfo2.sch 895 */
			return BBOOL(BGl_structzd2refzd2appzf3zf3zzcfa_info2z00(BgL_objz00_7152));
		}

	}



/* struct-ref-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 896 */
			{	/* Cfa/cinfo2.sch 896 */
				obj_t BgL_classz00_5195;

				BgL_classz00_5195 = BGl_structzd2refzd2appz00zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 896 */
					obj_t BgL__ortest_1106z00_5196;

					BgL__ortest_1106z00_5196 = BGL_CLASS_NIL(BgL_classz00_5195);
					if (CBOOL(BgL__ortest_1106z00_5196))
						{	/* Cfa/cinfo2.sch 896 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5196);
						}
					else
						{	/* Cfa/cinfo2.sch 896 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5195));
						}
				}
			}
		}

	}



/* &struct-ref-app-nil */
	BgL_appz00_bglt BGl_z62structzd2refzd2appzd2nilzb0zzcfa_info2z00(obj_t
		BgL_envz00_7153)
	{
		{	/* Cfa/cinfo2.sch 896 */
			return BGl_structzd2refzd2appzd2nilzd2zzcfa_info2z00();
		}

	}



/* struct-ref-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_structzd2refzd2appzd2approxzd2zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_675)
	{
		{	/* Cfa/cinfo2.sch 897 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_auxz00_11828;

				{
					obj_t BgL_auxz00_11829;

					{	/* Cfa/cinfo2.sch 897 */
						BgL_objectz00_bglt BgL_tmpz00_11830;

						BgL_tmpz00_11830 = ((BgL_objectz00_bglt) BgL_oz00_675);
						BgL_auxz00_11829 = BGL_OBJECT_WIDENING(BgL_tmpz00_11830);
					}
					BgL_auxz00_11828 =
						((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_11829);
				}
				return
					(((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_11828))->
					BgL_approxz00);
			}
		}

	}



/* &struct-ref-app-approx */
	BgL_approxz00_bglt BGl_z62structzd2refzd2appzd2approxzb0zzcfa_info2z00(obj_t
		BgL_envz00_7154, obj_t BgL_oz00_7155)
	{
		{	/* Cfa/cinfo2.sch 897 */
			return
				BGl_structzd2refzd2appzd2approxzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7155));
		}

	}



/* struct-ref-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2argszd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_678)
	{
		{	/* Cfa/cinfo2.sch 899 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_678)))->BgL_argsz00);
		}

	}



/* &struct-ref-app-args */
	obj_t BGl_z62structzd2refzd2appzd2argszb0zzcfa_info2z00(obj_t BgL_envz00_7156,
		obj_t BgL_oz00_7157)
	{
		{	/* Cfa/cinfo2.sch 899 */
			return
				BGl_structzd2refzd2appzd2argszd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7157));
		}

	}



/* struct-ref-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_679, obj_t BgL_vz00_680)
	{
		{	/* Cfa/cinfo2.sch 900 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_679)))->BgL_argsz00) =
				((obj_t) BgL_vz00_680), BUNSPEC);
		}

	}



/* &struct-ref-app-args-set! */
	obj_t BGl_z62structzd2refzd2appzd2argszd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7158, obj_t BgL_oz00_7159, obj_t BgL_vz00_7160)
	{
		{	/* Cfa/cinfo2.sch 900 */
			return
				BGl_structzd2refzd2appzd2argszd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7159), BgL_vz00_7160);
		}

	}



/* struct-ref-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_structzd2refzd2appzd2funzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_681)
	{
		{	/* Cfa/cinfo2.sch 901 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_681)))->BgL_funz00);
		}

	}



/* &struct-ref-app-fun */
	BgL_varz00_bglt BGl_z62structzd2refzd2appzd2funzb0zzcfa_info2z00(obj_t
		BgL_envz00_7161, obj_t BgL_oz00_7162)
	{
		{	/* Cfa/cinfo2.sch 901 */
			return
				BGl_structzd2refzd2appzd2funzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7162));
		}

	}



/* struct-ref-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_682, BgL_varz00_bglt BgL_vz00_683)
	{
		{	/* Cfa/cinfo2.sch 902 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_682)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_683), BUNSPEC);
		}

	}



/* &struct-ref-app-fun-set! */
	obj_t BGl_z62structzd2refzd2appzd2funzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7163, obj_t BgL_oz00_7164, obj_t BgL_vz00_7165)
	{
		{	/* Cfa/cinfo2.sch 902 */
			return
				BGl_structzd2refzd2appzd2funzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7164), ((BgL_varz00_bglt) BgL_vz00_7165));
		}

	}



/* struct-ref-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2keyzd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_684)
	{
		{	/* Cfa/cinfo2.sch 903 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_684)))->BgL_keyz00);
		}

	}



/* &struct-ref-app-key */
	obj_t BGl_z62structzd2refzd2appzd2keyzb0zzcfa_info2z00(obj_t BgL_envz00_7166,
		obj_t BgL_oz00_7167)
	{
		{	/* Cfa/cinfo2.sch 903 */
			return
				BGl_structzd2refzd2appzd2keyzd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7167));
		}

	}



/* struct-ref-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_685, obj_t BgL_vz00_686)
	{
		{	/* Cfa/cinfo2.sch 904 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_685)))->BgL_keyz00) =
				((obj_t) BgL_vz00_686), BUNSPEC);
		}

	}



/* &struct-ref-app-key-set! */
	obj_t BGl_z62structzd2refzd2appzd2keyzd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7168, obj_t BgL_oz00_7169, obj_t BgL_vz00_7170)
	{
		{	/* Cfa/cinfo2.sch 904 */
			return
				BGl_structzd2refzd2appzd2keyzd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7169), BgL_vz00_7170);
		}

	}



/* struct-ref-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_687)
	{
		{	/* Cfa/cinfo2.sch 905 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_687)))->BgL_sidezd2effectzd2);
		}

	}



/* &struct-ref-app-side-effect */
	obj_t BGl_z62structzd2refzd2appzd2sidezd2effectz62zzcfa_info2z00(obj_t
		BgL_envz00_7171, obj_t BgL_oz00_7172)
	{
		{	/* Cfa/cinfo2.sch 905 */
			return
				BGl_structzd2refzd2appzd2sidezd2effectz00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7172));
		}

	}



/* struct-ref-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_688, obj_t BgL_vz00_689)
	{
		{	/* Cfa/cinfo2.sch 906 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_688)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_689), BUNSPEC);
		}

	}



/* &struct-ref-app-side-effect-set! */
	obj_t
		BGl_z62structzd2refzd2appzd2sidezd2effectzd2setz12za2zzcfa_info2z00(obj_t
		BgL_envz00_7173, obj_t BgL_oz00_7174, obj_t BgL_vz00_7175)
	{
		{	/* Cfa/cinfo2.sch 906 */
			return
				BGl_structzd2refzd2appzd2sidezd2effectzd2setz12zc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7174), BgL_vz00_7175);
		}

	}



/* struct-ref-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_structzd2refzd2appzd2typezd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_690)
	{
		{	/* Cfa/cinfo2.sch 907 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_690)))->BgL_typez00);
		}

	}



/* &struct-ref-app-type */
	BgL_typez00_bglt BGl_z62structzd2refzd2appzd2typezb0zzcfa_info2z00(obj_t
		BgL_envz00_7176, obj_t BgL_oz00_7177)
	{
		{	/* Cfa/cinfo2.sch 907 */
			return
				BGl_structzd2refzd2appzd2typezd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7177));
		}

	}



/* struct-ref-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_691, BgL_typez00_bglt BgL_vz00_692)
	{
		{	/* Cfa/cinfo2.sch 908 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_691)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_692), BUNSPEC);
		}

	}



/* &struct-ref-app-type-set! */
	obj_t BGl_z62structzd2refzd2appzd2typezd2setz12z70zzcfa_info2z00(obj_t
		BgL_envz00_7178, obj_t BgL_oz00_7179, obj_t BgL_vz00_7180)
	{
		{	/* Cfa/cinfo2.sch 908 */
			return
				BGl_structzd2refzd2appzd2typezd2setz12z12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7179), ((BgL_typez00_bglt) BgL_vz00_7180));
		}

	}



/* struct-ref-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2refzd2appzd2loczd2zzcfa_info2z00(BgL_appz00_bglt BgL_oz00_693)
	{
		{	/* Cfa/cinfo2.sch 909 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_693)))->BgL_locz00);
		}

	}



/* &struct-ref-app-loc */
	obj_t BGl_z62structzd2refzd2appzd2loczb0zzcfa_info2z00(obj_t BgL_envz00_7181,
		obj_t BgL_oz00_7182)
	{
		{	/* Cfa/cinfo2.sch 909 */
			return
				BGl_structzd2refzd2appzd2loczd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7182));
		}

	}



/* make-struct-set!-app */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00(obj_t BgL_loc1436z00_696,
		BgL_typez00_bglt BgL_type1437z00_697, obj_t BgL_sidezd2effect1438zd2_698,
		obj_t BgL_key1439z00_699, BgL_varz00_bglt BgL_fun1440z00_700,
		obj_t BgL_args1441z00_701, BgL_approxz00_bglt BgL_approx1442z00_702)
	{
		{	/* Cfa/cinfo2.sch 913 */
			{	/* Cfa/cinfo2.sch 913 */
				BgL_appz00_bglt BgL_new1548z00_8174;

				{	/* Cfa/cinfo2.sch 913 */
					BgL_appz00_bglt BgL_tmp1546z00_8175;
					BgL_structzd2setz12zd2appz12_bglt BgL_wide1547z00_8176;

					{
						BgL_appz00_bglt BgL_auxz00_11883;

						{	/* Cfa/cinfo2.sch 913 */
							BgL_appz00_bglt BgL_new1545z00_8177;

							BgL_new1545z00_8177 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.sch 913 */
								long BgL_arg1979z00_8178;

								{	/* Cfa/cinfo2.sch 913 */
									long BgL_res2845z00_8179;

									BgL_res2845z00_8179 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1979z00_8178 = BgL_res2845z00_8179;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1545z00_8177),
									BgL_arg1979z00_8178);
							}
							{	/* Cfa/cinfo2.sch 913 */
								BgL_objectz00_bglt BgL_tmpz00_11888;

								BgL_tmpz00_11888 = ((BgL_objectz00_bglt) BgL_new1545z00_8177);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11888, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1545z00_8177);
							BgL_auxz00_11883 = BgL_new1545z00_8177;
						}
						BgL_tmp1546z00_8175 = ((BgL_appz00_bglt) BgL_auxz00_11883);
					}
					BgL_wide1547z00_8176 =
						((BgL_structzd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.sch 913 */
						obj_t BgL_auxz00_11896;
						BgL_objectz00_bglt BgL_tmpz00_11894;

						BgL_auxz00_11896 = ((obj_t) BgL_wide1547z00_8176);
						BgL_tmpz00_11894 = ((BgL_objectz00_bglt) BgL_tmp1546z00_8175);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_11894, BgL_auxz00_11896);
					}
					((BgL_objectz00_bglt) BgL_tmp1546z00_8175);
					{	/* Cfa/cinfo2.sch 913 */
						long BgL_arg1977z00_8180;

						{	/* Cfa/cinfo2.sch 913 */
							long BgL_res2846z00_8181;

							BgL_res2846z00_8181 =
								BGL_CLASS_INDEX(BGl_structzd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg1977z00_8180 = BgL_res2846z00_8181;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1546z00_8175), BgL_arg1977z00_8180);
					}
					BgL_new1548z00_8174 = ((BgL_appz00_bglt) BgL_tmp1546z00_8175);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1548z00_8174)))->BgL_locz00) =
					((obj_t) BgL_loc1436z00_696), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1548z00_8174)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1437z00_697), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1548z00_8174)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1438zd2_698), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1548z00_8174)))->BgL_keyz00) =
					((obj_t) BgL_key1439z00_699), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1548z00_8174)))->
						BgL_funz00) = ((BgL_varz00_bglt) BgL_fun1440z00_700), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1548z00_8174)))->
						BgL_argsz00) = ((obj_t) BgL_args1441z00_701), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1548z00_8174)))->
						BgL_stackablez00) = ((obj_t) BFALSE), BUNSPEC);
				{
					BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_11918;

					{
						obj_t BgL_auxz00_11919;

						{	/* Cfa/cinfo2.sch 913 */
							BgL_objectz00_bglt BgL_tmpz00_11920;

							BgL_tmpz00_11920 = ((BgL_objectz00_bglt) BgL_new1548z00_8174);
							BgL_auxz00_11919 = BGL_OBJECT_WIDENING(BgL_tmpz00_11920);
						}
						BgL_auxz00_11918 =
							((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_11919);
					}
					((((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11918))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_approx1442z00_702), BUNSPEC);
				}
				return BgL_new1548z00_8174;
			}
		}

	}



/* &make-struct-set!-app */
	BgL_appz00_bglt BGl_z62makezd2structzd2setz12zd2appza2zzcfa_info2z00(obj_t
		BgL_envz00_7183, obj_t BgL_loc1436z00_7184, obj_t BgL_type1437z00_7185,
		obj_t BgL_sidezd2effect1438zd2_7186, obj_t BgL_key1439z00_7187,
		obj_t BgL_fun1440z00_7188, obj_t BgL_args1441z00_7189,
		obj_t BgL_approx1442z00_7190)
	{
		{	/* Cfa/cinfo2.sch 913 */
			return
				BGl_makezd2structzd2setz12zd2appzc0zzcfa_info2z00(BgL_loc1436z00_7184,
				((BgL_typez00_bglt) BgL_type1437z00_7185),
				BgL_sidezd2effect1438zd2_7186, BgL_key1439z00_7187,
				((BgL_varz00_bglt) BgL_fun1440z00_7188), BgL_args1441z00_7189,
				((BgL_approxz00_bglt) BgL_approx1442z00_7190));
		}

	}



/* struct-set!-app? */
	BGL_EXPORTED_DEF bool_t BGl_structzd2setz12zd2appzf3ze1zzcfa_info2z00(obj_t
		BgL_objz00_703)
	{
		{	/* Cfa/cinfo2.sch 914 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_703,
				BGl_structzd2setz12zd2appz12zzcfa_info2z00);
		}

	}



/* &struct-set!-app? */
	obj_t BGl_z62structzd2setz12zd2appzf3z83zzcfa_info2z00(obj_t BgL_envz00_7191,
		obj_t BgL_objz00_7192)
	{
		{	/* Cfa/cinfo2.sch 914 */
			return
				BBOOL(BGl_structzd2setz12zd2appzf3ze1zzcfa_info2z00(BgL_objz00_7192));
		}

	}



/* struct-set!-app-nil */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.sch 915 */
			{	/* Cfa/cinfo2.sch 915 */
				obj_t BgL_classz00_5215;

				BgL_classz00_5215 = BGl_structzd2setz12zd2appz12zzcfa_info2z00;
				{	/* Cfa/cinfo2.sch 915 */
					obj_t BgL__ortest_1106z00_5216;

					BgL__ortest_1106z00_5216 = BGL_CLASS_NIL(BgL_classz00_5215);
					if (CBOOL(BgL__ortest_1106z00_5216))
						{	/* Cfa/cinfo2.sch 915 */
							return ((BgL_appz00_bglt) BgL__ortest_1106z00_5216);
						}
					else
						{	/* Cfa/cinfo2.sch 915 */
							return
								((BgL_appz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_5215));
						}
				}
			}
		}

	}



/* &struct-set!-app-nil */
	BgL_appz00_bglt BGl_z62structzd2setz12zd2appzd2nilza2zzcfa_info2z00(obj_t
		BgL_envz00_7193)
	{
		{	/* Cfa/cinfo2.sch 915 */
			return BGl_structzd2setz12zd2appzd2nilzc0zzcfa_info2z00();
		}

	}



/* struct-set!-app-approx */
	BGL_EXPORTED_DEF BgL_approxz00_bglt
		BGl_structzd2setz12zd2appzd2approxzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_704)
	{
		{	/* Cfa/cinfo2.sch 916 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_11939;

				{
					obj_t BgL_auxz00_11940;

					{	/* Cfa/cinfo2.sch 916 */
						BgL_objectz00_bglt BgL_tmpz00_11941;

						BgL_tmpz00_11941 = ((BgL_objectz00_bglt) BgL_oz00_704);
						BgL_auxz00_11940 = BGL_OBJECT_WIDENING(BgL_tmpz00_11941);
					}
					BgL_auxz00_11939 =
						((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_11940);
				}
				return
					(((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_11939))->
					BgL_approxz00);
			}
		}

	}



/* &struct-set!-app-approx */
	BgL_approxz00_bglt
		BGl_z62structzd2setz12zd2appzd2approxza2zzcfa_info2z00(obj_t
		BgL_envz00_7194, obj_t BgL_oz00_7195)
	{
		{	/* Cfa/cinfo2.sch 916 */
			return
				BGl_structzd2setz12zd2appzd2approxzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7195));
		}

	}



/* struct-set!-app-args */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2argszc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_707)
	{
		{	/* Cfa/cinfo2.sch 918 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_707)))->BgL_argsz00);
		}

	}



/* &struct-set!-app-args */
	obj_t BGl_z62structzd2setz12zd2appzd2argsza2zzcfa_info2z00(obj_t
		BgL_envz00_7196, obj_t BgL_oz00_7197)
	{
		{	/* Cfa/cinfo2.sch 918 */
			return
				BGl_structzd2setz12zd2appzd2argszc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7197));
		}

	}



/* struct-set!-app-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_708, obj_t BgL_vz00_709)
	{
		{	/* Cfa/cinfo2.sch 919 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_708)))->BgL_argsz00) =
				((obj_t) BgL_vz00_709), BUNSPEC);
		}

	}



/* &struct-set!-app-args-set! */
	obj_t BGl_z62structzd2setz12zd2appzd2argszd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_7198, obj_t BgL_oz00_7199, obj_t BgL_vz00_7200)
	{
		{	/* Cfa/cinfo2.sch 919 */
			return
				BGl_structzd2setz12zd2appzd2argszd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7199), BgL_vz00_7200);
		}

	}



/* struct-set!-app-fun */
	BGL_EXPORTED_DEF BgL_varz00_bglt
		BGl_structzd2setz12zd2appzd2funzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_710)
	{
		{	/* Cfa/cinfo2.sch 920 */
			return
				(((BgL_appz00_bglt) COBJECT(
						((BgL_appz00_bglt) BgL_oz00_710)))->BgL_funz00);
		}

	}



/* &struct-set!-app-fun */
	BgL_varz00_bglt BGl_z62structzd2setz12zd2appzd2funza2zzcfa_info2z00(obj_t
		BgL_envz00_7201, obj_t BgL_oz00_7202)
	{
		{	/* Cfa/cinfo2.sch 920 */
			return
				BGl_structzd2setz12zd2appzd2funzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7202));
		}

	}



/* struct-set!-app-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_711, BgL_varz00_bglt BgL_vz00_712)
	{
		{	/* Cfa/cinfo2.sch 921 */
			return
				((((BgL_appz00_bglt) COBJECT(
							((BgL_appz00_bglt) BgL_oz00_711)))->BgL_funz00) =
				((BgL_varz00_bglt) BgL_vz00_712), BUNSPEC);
		}

	}



/* &struct-set!-app-fun-set! */
	obj_t BGl_z62structzd2setz12zd2appzd2funzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_7203, obj_t BgL_oz00_7204, obj_t BgL_vz00_7205)
	{
		{	/* Cfa/cinfo2.sch 921 */
			return
				BGl_structzd2setz12zd2appzd2funzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7204), ((BgL_varz00_bglt) BgL_vz00_7205));
		}

	}



/* struct-set!-app-key */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2keyzc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_713)
	{
		{	/* Cfa/cinfo2.sch 922 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_713)))->BgL_keyz00);
		}

	}



/* &struct-set!-app-key */
	obj_t BGl_z62structzd2setz12zd2appzd2keyza2zzcfa_info2z00(obj_t
		BgL_envz00_7206, obj_t BgL_oz00_7207)
	{
		{	/* Cfa/cinfo2.sch 922 */
			return
				BGl_structzd2setz12zd2appzd2keyzc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7207));
		}

	}



/* struct-set!-app-key-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_714, obj_t BgL_vz00_715)
	{
		{	/* Cfa/cinfo2.sch 923 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_714)))->BgL_keyz00) =
				((obj_t) BgL_vz00_715), BUNSPEC);
		}

	}



/* &struct-set!-app-key-set! */
	obj_t BGl_z62structzd2setz12zd2appzd2keyzd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_7208, obj_t BgL_oz00_7209, obj_t BgL_vz00_7210)
	{
		{	/* Cfa/cinfo2.sch 923 */
			return
				BGl_structzd2setz12zd2appzd2keyzd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7209), BgL_vz00_7210);
		}

	}



/* struct-set!-app-side-effect */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_716)
	{
		{	/* Cfa/cinfo2.sch 924 */
			return
				(((BgL_nodezf2effectzf2_bglt) COBJECT(
						((BgL_nodezf2effectzf2_bglt) BgL_oz00_716)))->BgL_sidezd2effectzd2);
		}

	}



/* &struct-set!-app-side-effect */
	obj_t BGl_z62structzd2setz12zd2appzd2sidezd2effectz70zzcfa_info2z00(obj_t
		BgL_envz00_7211, obj_t BgL_oz00_7212)
	{
		{	/* Cfa/cinfo2.sch 924 */
			return
				BGl_structzd2setz12zd2appzd2sidezd2effectz12zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7212));
		}

	}



/* struct-set!-app-side-effect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00
		(BgL_appz00_bglt BgL_oz00_717, obj_t BgL_vz00_718)
	{
		{	/* Cfa/cinfo2.sch 925 */
			return
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
							((BgL_nodezf2effectzf2_bglt) BgL_oz00_717)))->
					BgL_sidezd2effectzd2) = ((obj_t) BgL_vz00_718), BUNSPEC);
		}

	}



/* &struct-set!-app-side-effect-set! */
	obj_t
		BGl_z62structzd2setz12zd2appzd2sidezd2effectzd2setz12zb0zzcfa_info2z00(obj_t
		BgL_envz00_7213, obj_t BgL_oz00_7214, obj_t BgL_vz00_7215)
	{
		{	/* Cfa/cinfo2.sch 925 */
			return
				BGl_structzd2setz12zd2appzd2sidezd2effectzd2setz12zd2zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7214), BgL_vz00_7215);
		}

	}



/* struct-set!-app-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_structzd2setz12zd2appzd2typezc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_719)
	{
		{	/* Cfa/cinfo2.sch 926 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_719)))->BgL_typez00);
		}

	}



/* &struct-set!-app-type */
	BgL_typez00_bglt BGl_z62structzd2setz12zd2appzd2typeza2zzcfa_info2z00(obj_t
		BgL_envz00_7216, obj_t BgL_oz00_7217)
	{
		{	/* Cfa/cinfo2.sch 926 */
			return
				BGl_structzd2setz12zd2appzd2typezc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7217));
		}

	}



/* struct-set!-app-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_720, BgL_typez00_bglt BgL_vz00_721)
	{
		{	/* Cfa/cinfo2.sch 927 */
			return
				((((BgL_nodez00_bglt) COBJECT(
							((BgL_nodez00_bglt) BgL_oz00_720)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_721), BUNSPEC);
		}

	}



/* &struct-set!-app-type-set! */
	obj_t BGl_z62structzd2setz12zd2appzd2typezd2setz12z62zzcfa_info2z00(obj_t
		BgL_envz00_7218, obj_t BgL_oz00_7219, obj_t BgL_vz00_7220)
	{
		{	/* Cfa/cinfo2.sch 927 */
			return
				BGl_structzd2setz12zd2appzd2typezd2setz12z00zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7219), ((BgL_typez00_bglt) BgL_vz00_7220));
		}

	}



/* struct-set!-app-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_structzd2setz12zd2appzd2loczc0zzcfa_info2z00(BgL_appz00_bglt
		BgL_oz00_722)
	{
		{	/* Cfa/cinfo2.sch 928 */
			return
				(((BgL_nodez00_bglt) COBJECT(
						((BgL_nodez00_bglt) BgL_oz00_722)))->BgL_locz00);
		}

	}



/* &struct-set!-app-loc */
	obj_t BGl_z62structzd2setz12zd2appzd2locza2zzcfa_info2z00(obj_t
		BgL_envz00_7221, obj_t BgL_oz00_7222)
	{
		{	/* Cfa/cinfo2.sch 928 */
			return
				BGl_structzd2setz12zd2appzd2loczc0zzcfa_info2z00(
				((BgL_appz00_bglt) BgL_oz00_7222));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			{	/* Cfa/cinfo2.scm 27 */
				obj_t BgL_arg1984z00_3009;
				obj_t BgL_arg1985z00_3010;

				{	/* Cfa/cinfo2.scm 27 */
					obj_t BgL_v1887z00_3039;

					BgL_v1887z00_3039 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_arg1997z00_3040;

						BgL_arg1997z00_3040 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2981z00zzcfa_info2z00,
							BGl_proc2980z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1887z00_3039, ((long) 0), BgL_arg1997z00_3040);
					}
					BgL_arg1984z00_3009 = BgL_v1887z00_3039;
				}
				{	/* Cfa/cinfo2.scm 27 */
					obj_t BgL_v1888z00_3050;

					BgL_v1888z00_3050 = create_vector(((long) 0));
					BgL_arg1985z00_3010 = BgL_v1888z00_3050;
				}
				BGl_prezd2arithmeticzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 60508),
					BGl_proc2985z00zzcfa_info2z00, BGl_proc2984z00zzcfa_info2z00, BFALSE,
					BGl_proc2983z00zzcfa_info2z00, BGl_proc2982z00zzcfa_info2z00,
					BgL_arg1984z00_3009, BgL_arg1985z00_3010);
			}
			{	/* Cfa/cinfo2.scm 29 */
				obj_t BgL_arg2007z00_3059;
				obj_t BgL_arg2008z00_3060;

				{	/* Cfa/cinfo2.scm 29 */
					obj_t BgL_v1889z00_3090;

					BgL_v1889z00_3090 = create_vector(((long) 2));
					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_arg2020z00_3091;

						BgL_arg2020z00_3091 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2987z00zzcfa_info2z00,
							BGl_proc2986z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1889z00_3090, ((long) 0), BgL_arg2020z00_3091);
					}
					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_arg2026z00_3101;

						BgL_arg2026z00_3101 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2989z00zzcfa_info2z00,
							BGl_proc2988z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1889z00_3090, ((long) 1), BgL_arg2026z00_3101);
					}
					BgL_arg2007z00_3059 = BgL_v1889z00_3090;
				}
				{	/* Cfa/cinfo2.scm 29 */
					obj_t BgL_v1890z00_3111;

					BgL_v1890z00_3111 = create_vector(((long) 0));
					BgL_arg2008z00_3060 = BgL_v1890z00_3111;
				}
				BGl_arithmeticzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 10028),
					BGl_proc2993z00zzcfa_info2z00, BGl_proc2992z00zzcfa_info2z00, BFALSE,
					BGl_proc2991z00zzcfa_info2z00, BGl_proc2990z00zzcfa_info2z00,
					BgL_arg2007z00_3059, BgL_arg2008z00_3060);
			}
			{	/* Cfa/cinfo2.scm 34 */
				obj_t BgL_arg2037z00_3120;
				obj_t BgL_arg2038z00_3121;

				{	/* Cfa/cinfo2.scm 34 */
					obj_t BgL_v1891z00_3150;

					BgL_v1891z00_3150 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_arg2049z00_3151;

						BgL_arg2049z00_3151 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2995z00zzcfa_info2z00,
							BGl_proc2994z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1891z00_3150, ((long) 0), BgL_arg2049z00_3151);
					}
					BgL_arg2037z00_3120 = BgL_v1891z00_3150;
				}
				{	/* Cfa/cinfo2.scm 34 */
					obj_t BgL_v1892z00_3161;

					BgL_v1892z00_3161 = create_vector(((long) 0));
					BgL_arg2038z00_3121 = BgL_v1892z00_3161;
				}
				BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 38775),
					BGl_proc2999z00zzcfa_info2z00, BGl_proc2998z00zzcfa_info2z00, BFALSE,
					BGl_proc2997z00zzcfa_info2z00, BGl_proc2996z00zzcfa_info2z00,
					BgL_arg2037z00_3120, BgL_arg2038z00_3121);
			}
			{	/* Cfa/cinfo2.scm 37 */
				obj_t BgL_arg2060z00_3170;
				obj_t BgL_arg2061z00_3171;

				{	/* Cfa/cinfo2.scm 37 */
					obj_t BgL_v1893z00_3199;

					BgL_v1893z00_3199 = create_vector(((long) 0));
					BgL_arg2060z00_3170 = BgL_v1893z00_3199;
				}
				{	/* Cfa/cinfo2.scm 37 */
					obj_t BgL_v1894z00_3200;

					BgL_v1894z00_3200 = create_vector(((long) 0));
					BgL_arg2061z00_3171 = BgL_v1894z00_3200;
				}
				BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 8)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 42719),
					BGl_proc3003z00zzcfa_info2z00, BGl_proc3002z00zzcfa_info2z00, BFALSE,
					BGl_proc3001z00zzcfa_info2z00, BGl_proc3000z00zzcfa_info2z00,
					BgL_arg2060z00_3170, BgL_arg2061z00_3171);
			}
			{	/* Cfa/cinfo2.scm 38 */
				obj_t BgL_arg2080z00_3209;
				obj_t BgL_arg2081z00_3210;

				{	/* Cfa/cinfo2.scm 38 */
					obj_t BgL_v1895z00_3238;

					BgL_v1895z00_3238 = create_vector(((long) 0));
					BgL_arg2080z00_3209 = BgL_v1895z00_3238;
				}
				{	/* Cfa/cinfo2.scm 38 */
					obj_t BgL_v1896z00_3239;

					BgL_v1896z00_3239 = create_vector(((long) 0));
					BgL_arg2081z00_3210 = BgL_v1896z00_3239;
				}
				BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 9)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 45198),
					BGl_proc3007z00zzcfa_info2z00, BGl_proc3006z00zzcfa_info2z00, BFALSE,
					BGl_proc3005z00zzcfa_info2z00, BGl_proc3004z00zzcfa_info2z00,
					BgL_arg2080z00_3209, BgL_arg2081z00_3210);
			}
			{	/* Cfa/cinfo2.scm 40 */
				obj_t BgL_arg2096z00_3248;
				obj_t BgL_arg2097z00_3249;

				{	/* Cfa/cinfo2.scm 40 */
					obj_t BgL_v1897z00_3285;

					BgL_v1897z00_3285 = create_vector(((long) 8));
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2109z00_3286;

						BgL_arg2109z00_3286 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3009z00zzcfa_info2z00,
							BGl_proc3008z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1897z00_3285, ((long) 0), BgL_arg2109z00_3286);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2114z00_3296;

						BgL_arg2114z00_3296 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc3011z00zzcfa_info2z00,
							BGl_proc3010z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 11)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 1), BgL_arg2114z00_3296);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2119z00_3306;

						BgL_arg2119z00_3306 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc3014z00zzcfa_info2z00,
							BGl_proc3013z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3012z00zzcfa_info2z00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 2), BgL_arg2119z00_3306);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2126z00_3319;

						BgL_arg2126z00_3319 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc3017z00zzcfa_info2z00,
							BGl_proc3016z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3015z00zzcfa_info2z00, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 3), BgL_arg2126z00_3319);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2133z00_3332;

						BgL_arg2133z00_3332 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc3020z00zzcfa_info2z00,
							BGl_proc3019z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3018z00zzcfa_info2z00, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 4), BgL_arg2133z00_3332);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2140z00_3345;

						BgL_arg2140z00_3345 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc3023z00zzcfa_info2z00,
							BGl_proc3022z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3021z00zzcfa_info2z00, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 5), BgL_arg2140z00_3345);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2147z00_3358;

						BgL_arg2147z00_3358 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3025z00zzcfa_info2z00,
							BGl_proc3024z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1897z00_3285, ((long) 6), BgL_arg2147z00_3358);
					}
					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2152z00_3368;

						BgL_arg2152z00_3368 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc3028z00zzcfa_info2z00,
							BGl_proc3027z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3026z00zzcfa_info2z00, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1897z00_3285, ((long) 7), BgL_arg2152z00_3368);
					}
					BgL_arg2096z00_3248 = BgL_v1897z00_3285;
				}
				{	/* Cfa/cinfo2.scm 40 */
					obj_t BgL_v1898z00_3381;

					BgL_v1898z00_3381 = create_vector(((long) 0));
					BgL_arg2097z00_3249 = BgL_v1898z00_3381;
				}
				BGl_makezd2procedurezd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 20)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 5127),
					BGl_proc3032z00zzcfa_info2z00, BGl_proc3031z00zzcfa_info2z00, BFALSE,
					BGl_proc3030z00zzcfa_info2z00, BGl_proc3029z00zzcfa_info2z00,
					BgL_arg2096z00_3248, BgL_arg2097z00_3249);
			}
			{	/* Cfa/cinfo2.scm 57 */
				obj_t BgL_arg2163z00_3390;
				obj_t BgL_arg2164z00_3391;

				{	/* Cfa/cinfo2.scm 57 */
					obj_t BgL_v1899z00_3420;

					BgL_v1899z00_3420 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_arg2175z00_3421;

						BgL_arg2175z00_3421 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3034z00zzcfa_info2z00,
							BGl_proc3033z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1899z00_3420, ((long) 0), BgL_arg2175z00_3421);
					}
					BgL_arg2163z00_3390 = BgL_v1899z00_3420;
				}
				{	/* Cfa/cinfo2.scm 57 */
					obj_t BgL_v1900z00_3431;

					BgL_v1900z00_3431 = create_vector(((long) 0));
					BgL_arg2164z00_3391 = BgL_v1900z00_3431;
				}
				BGl_procedurezd2refzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 21)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 33295),
					BGl_proc3038z00zzcfa_info2z00, BGl_proc3037z00zzcfa_info2z00, BFALSE,
					BGl_proc3036z00zzcfa_info2z00, BGl_proc3035z00zzcfa_info2z00,
					BgL_arg2163z00_3390, BgL_arg2164z00_3391);
			}
			{	/* Cfa/cinfo2.scm 59 */
				obj_t BgL_arg2184z00_3440;
				obj_t BgL_arg2185z00_3441;

				{	/* Cfa/cinfo2.scm 59 */
					obj_t BgL_v1901z00_3471;

					BgL_v1901z00_3471 = create_vector(((long) 2));
					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_arg2196z00_3472;

						BgL_arg2196z00_3472 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3040z00zzcfa_info2z00,
							BGl_proc3039z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1901z00_3471, ((long) 0), BgL_arg2196z00_3472);
					}
					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_arg2201z00_3482;

						BgL_arg2201z00_3482 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc3042z00zzcfa_info2z00,
							BGl_proc3041z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1901z00_3471, ((long) 1), BgL_arg2201z00_3482);
					}
					BgL_arg2184z00_3440 = BgL_v1901z00_3471;
				}
				{	/* Cfa/cinfo2.scm 59 */
					obj_t BgL_v1902z00_3492;

					BgL_v1902z00_3492 = create_vector(((long) 0));
					BgL_arg2185z00_3441 = BgL_v1902z00_3492;
				}
				BGl_procedurezd2setz12zd2appz12zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 23)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 19373),
					BGl_proc3046z00zzcfa_info2z00, BGl_proc3045z00zzcfa_info2z00, BFALSE,
					BGl_proc3044z00zzcfa_info2z00, BGl_proc3043z00zzcfa_info2z00,
					BgL_arg2184z00_3440, BgL_arg2185z00_3441);
			}
			{	/* Cfa/cinfo2.scm 64 */
				obj_t BgL_arg2210z00_3501;
				obj_t BgL_arg2211z00_3502;

				{	/* Cfa/cinfo2.scm 64 */
					obj_t BgL_v1903z00_3531;

					BgL_v1903z00_3531 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_arg2222z00_3532;

						BgL_arg2222z00_3532 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3048z00zzcfa_info2z00,
							BGl_proc3047z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1903z00_3531, ((long) 0), BgL_arg2222z00_3532);
					}
					BgL_arg2210z00_3501 = BgL_v1903z00_3531;
				}
				{	/* Cfa/cinfo2.scm 64 */
					obj_t BgL_v1904z00_3542;

					BgL_v1904z00_3542 = create_vector(((long) 0));
					BgL_arg2211z00_3502 = BgL_v1904z00_3542;
				}
				BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 24)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 41928),
					BGl_proc3052z00zzcfa_info2z00, BGl_proc3051z00zzcfa_info2z00, BFALSE,
					BGl_proc3050z00zzcfa_info2z00, BGl_proc3049z00zzcfa_info2z00,
					BgL_arg2210z00_3501, BgL_arg2211z00_3502);
			}
			{	/* Cfa/cinfo2.scm 68 */
				obj_t BgL_arg2231z00_3551;
				obj_t BgL_arg2232z00_3552;

				{	/* Cfa/cinfo2.scm 68 */
					obj_t BgL_v1905z00_3586;

					BgL_v1905z00_3586 = create_vector(((long) 6));
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2243z00_3587;

						BgL_arg2243z00_3587 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3054z00zzcfa_info2z00,
							BGl_proc3053z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1905z00_3586, ((long) 0), BgL_arg2243z00_3587);
					}
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2248z00_3597;

						BgL_arg2248z00_3597 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc3056z00zzcfa_info2z00,
							BGl_proc3055z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1905z00_3586, ((long) 1), BgL_arg2248z00_3597);
					}
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2253z00_3607;

						BgL_arg2253z00_3607 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc3059z00zzcfa_info2z00,
							BGl_proc3058z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3057z00zzcfa_info2z00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1905z00_3586, ((long) 2), BgL_arg2253z00_3607);
					}
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2261z00_3620;

						BgL_arg2261z00_3620 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3061z00zzcfa_info2z00,
							BGl_proc3060z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1905z00_3586, ((long) 3), BgL_arg2261z00_3620);
					}
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2267z00_3630;

						BgL_arg2267z00_3630 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc3064z00zzcfa_info2z00,
							BGl_proc3063z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3062z00zzcfa_info2z00, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1905z00_3586, ((long) 4), BgL_arg2267z00_3630);
					}
					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2275z00_3643;

						BgL_arg2275z00_3643 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc3067z00zzcfa_info2z00,
							BGl_proc3066z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3065z00zzcfa_info2z00, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1905z00_3586, ((long) 5), BgL_arg2275z00_3643);
					}
					BgL_arg2231z00_3551 = BgL_v1905z00_3586;
				}
				{	/* Cfa/cinfo2.scm 68 */
					obj_t BgL_v1906z00_3656;

					BgL_v1906z00_3656 = create_vector(((long) 0));
					BgL_arg2232z00_3552 = BgL_v1906z00_3656;
				}
				BGl_makezd2vectorzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 27)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 53665),
					BGl_proc3071z00zzcfa_info2z00, BGl_proc3070z00zzcfa_info2z00, BFALSE,
					BGl_proc3069z00zzcfa_info2z00, BGl_proc3068z00zzcfa_info2z00,
					BgL_arg2231z00_3551, BgL_arg2232z00_3552);
			}
			{	/* Cfa/cinfo2.scm 91 */
				obj_t BgL_arg2286z00_3665;
				obj_t BgL_arg2287z00_3666;

				{	/* Cfa/cinfo2.scm 91 */
					obj_t BgL_v1907z00_3695;

					BgL_v1907z00_3695 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_arg2298z00_3696;

						BgL_arg2298z00_3696 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3073z00zzcfa_info2z00,
							BGl_proc3072z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1907z00_3695, ((long) 0), BgL_arg2298z00_3696);
					}
					BgL_arg2286z00_3665 = BgL_v1907z00_3695;
				}
				{	/* Cfa/cinfo2.scm 91 */
					obj_t BgL_v1908z00_3706;

					BgL_v1908z00_3706 = create_vector(((long) 0));
					BgL_arg2287z00_3666 = BgL_v1908z00_3706;
				}
				BGl_prezd2conszd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 63194),
					BGl_proc3077z00zzcfa_info2z00, BGl_proc3076z00zzcfa_info2z00, BFALSE,
					BGl_proc3075z00zzcfa_info2z00, BGl_proc3074z00zzcfa_info2z00,
					BgL_arg2286z00_3665, BgL_arg2287z00_3666);
			}
			{	/* Cfa/cinfo2.scm 94 */
				obj_t BgL_arg2308z00_3715;
				obj_t BgL_arg2309z00_3716;

				{	/* Cfa/cinfo2.scm 94 */
					obj_t BgL_v1909z00_3745;

					BgL_v1909z00_3745 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 94 */
						obj_t BgL_arg2321z00_3746;

						BgL_arg2321z00_3746 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc3079z00zzcfa_info2z00,
							BGl_proc3078z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1909z00_3745, ((long) 0), BgL_arg2321z00_3746);
					}
					BgL_arg2308z00_3715 = BgL_v1909z00_3745;
				}
				{	/* Cfa/cinfo2.scm 94 */
					obj_t BgL_v1910z00_3756;

					BgL_v1910z00_3756 = create_vector(((long) 0));
					BgL_arg2309z00_3716 = BgL_v1910z00_3756;
				}
				BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 31)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 63263),
					BGl_proc3083z00zzcfa_info2z00, BGl_proc3082z00zzcfa_info2z00, BFALSE,
					BGl_proc3081z00zzcfa_info2z00, BGl_proc3080z00zzcfa_info2z00,
					BgL_arg2308z00_3715, BgL_arg2309z00_3716);
			}
			{	/* Cfa/cinfo2.scm 96 */
				obj_t BgL_arg2331z00_3765;
				obj_t BgL_arg2332z00_3766;

				{	/* Cfa/cinfo2.scm 96 */
					obj_t BgL_v1911z00_3795;

					BgL_v1911z00_3795 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 96 */
						obj_t BgL_arg2343z00_3796;

						BgL_arg2343z00_3796 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc3085z00zzcfa_info2z00,
							BGl_proc3084z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1911z00_3795, ((long) 0), BgL_arg2343z00_3796);
					}
					BgL_arg2331z00_3765 = BgL_v1911z00_3795;
				}
				{	/* Cfa/cinfo2.scm 96 */
					obj_t BgL_v1912z00_3806;

					BgL_v1912z00_3806 = create_vector(((long) 0));
					BgL_arg2332z00_3766 = BgL_v1912z00_3806;
				}
				BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 32)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 17008),
					BGl_proc3089z00zzcfa_info2z00, BGl_proc3088z00zzcfa_info2z00, BFALSE,
					BGl_proc3087z00zzcfa_info2z00, BGl_proc3086z00zzcfa_info2z00,
					BgL_arg2331z00_3765, BgL_arg2332z00_3766);
			}
			{	/* Cfa/cinfo2.scm 99 */
				obj_t BgL_arg2353z00_3815;
				obj_t BgL_arg2354z00_3816;

				{	/* Cfa/cinfo2.scm 99 */
					obj_t BgL_v1913z00_3850;

					BgL_v1913z00_3850 = create_vector(((long) 6));
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2365z00_3851;

						BgL_arg2365z00_3851 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3091z00zzcfa_info2z00,
							BGl_proc3090z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1913z00_3850, ((long) 0), BgL_arg2365z00_3851);
					}
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2370z00_3861;

						BgL_arg2370z00_3861 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc3093z00zzcfa_info2z00,
							BGl_proc3092z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1913z00_3850, ((long) 1), BgL_arg2370z00_3861);
					}
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2376z00_3871;

						BgL_arg2376z00_3871 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc3096z00zzcfa_info2z00,
							BGl_proc3095z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3094z00zzcfa_info2z00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1913z00_3850, ((long) 2), BgL_arg2376z00_3871);
					}
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2384z00_3884;

						BgL_arg2384z00_3884 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3098z00zzcfa_info2z00,
							BGl_proc3097z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1913z00_3850, ((long) 3), BgL_arg2384z00_3884);
					}
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2391z00_3894;

						BgL_arg2391z00_3894 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc3101z00zzcfa_info2z00,
							BGl_proc3100z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3099z00zzcfa_info2z00, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1913z00_3850, ((long) 4), BgL_arg2391z00_3894);
					}
					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2399z00_3907;

						BgL_arg2399z00_3907 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc3104z00zzcfa_info2z00,
							BGl_proc3103z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3102z00zzcfa_info2z00, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1913z00_3850, ((long) 5), BgL_arg2399z00_3907);
					}
					BgL_arg2353z00_3815 = BgL_v1913z00_3850;
				}
				{	/* Cfa/cinfo2.scm 99 */
					obj_t BgL_v1914z00_3920;

					BgL_v1914z00_3920 = create_vector(((long) 0));
					BgL_arg2354z00_3816 = BgL_v1914z00_3920;
				}
				BGl_conszd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 34)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 11641),
					BGl_proc3108z00zzcfa_info2z00, BGl_proc3107z00zzcfa_info2z00, BFALSE,
					BGl_proc3106z00zzcfa_info2z00, BGl_proc3105z00zzcfa_info2z00,
					BgL_arg2353z00_3815, BgL_arg2354z00_3816);
			}
			{	/* Cfa/cinfo2.scm 120 */
				obj_t BgL_arg2414z00_3929;
				obj_t BgL_arg2415z00_3930;

				{	/* Cfa/cinfo2.scm 120 */
					obj_t BgL_v1915z00_3960;

					BgL_v1915z00_3960 = create_vector(((long) 2));
					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_arg2427z00_3961;

						BgL_arg2427z00_3961 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3110z00zzcfa_info2z00,
							BGl_proc3109z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1915z00_3960, ((long) 0), BgL_arg2427z00_3961);
					}
					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_arg2433z00_3971;

						BgL_arg2433z00_3971 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc3112z00zzcfa_info2z00,
							BGl_proc3111z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1915z00_3960, ((long) 1), BgL_arg2433z00_3971);
					}
					BgL_arg2414z00_3929 = BgL_v1915z00_3960;
				}
				{	/* Cfa/cinfo2.scm 120 */
					obj_t BgL_v1916z00_3981;

					BgL_v1916z00_3981 = create_vector(((long) 0));
					BgL_arg2415z00_3930 = BgL_v1916z00_3981;
				}
				BGl_conszd2refzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 35)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 63311),
					BGl_proc3116z00zzcfa_info2z00, BGl_proc3115z00zzcfa_info2z00, BFALSE,
					BGl_proc3114z00zzcfa_info2z00, BGl_proc3113z00zzcfa_info2z00,
					BgL_arg2414z00_3929, BgL_arg2415z00_3930);
			}
			{	/* Cfa/cinfo2.scm 123 */
				obj_t BgL_arg2447z00_3990;
				obj_t BgL_arg2448z00_3991;

				{	/* Cfa/cinfo2.scm 123 */
					obj_t BgL_v1917z00_4021;

					BgL_v1917z00_4021 = create_vector(((long) 2));
					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_arg2460z00_4022;

						BgL_arg2460z00_4022 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3118z00zzcfa_info2z00,
							BGl_proc3117z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1917z00_4021, ((long) 0), BgL_arg2460z00_4022);
					}
					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_arg2466z00_4032;

						BgL_arg2466z00_4032 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc3120z00zzcfa_info2z00,
							BGl_proc3119z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 30)));
						VECTOR_SET(BgL_v1917z00_4021, ((long) 1), BgL_arg2466z00_4032);
					}
					BgL_arg2447z00_3990 = BgL_v1917z00_4021;
				}
				{	/* Cfa/cinfo2.scm 123 */
					obj_t BgL_v1918z00_4042;

					BgL_v1918z00_4042 = create_vector(((long) 0));
					BgL_arg2448z00_3991 = BgL_v1918z00_4042;
				}
				BGl_conszd2setz12zd2appz12zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 36)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 23792),
					BGl_proc3124z00zzcfa_info2z00, BGl_proc3123z00zzcfa_info2z00, BFALSE,
					BGl_proc3122z00zzcfa_info2z00, BGl_proc3121z00zzcfa_info2z00,
					BgL_arg2447z00_3990, BgL_arg2448z00_3991);
			}
			{	/* Cfa/cinfo2.scm 128 */
				obj_t BgL_arg2477z00_4051;
				obj_t BgL_arg2479z00_4052;

				{	/* Cfa/cinfo2.scm 128 */
					obj_t BgL_v1919z00_4081;

					BgL_v1919z00_4081 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_arg2494z00_4082;

						BgL_arg2494z00_4082 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3126z00zzcfa_info2z00,
							BGl_proc3125z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1919z00_4081, ((long) 0), BgL_arg2494z00_4082);
					}
					BgL_arg2477z00_4051 = BgL_v1919z00_4081;
				}
				{	/* Cfa/cinfo2.scm 128 */
					obj_t BgL_v1920z00_4092;

					BgL_v1920z00_4092 = create_vector(((long) 0));
					BgL_arg2479z00_4052 = BgL_v1920z00_4092;
				}
				BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 37)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 51646),
					BGl_proc3130z00zzcfa_info2z00, BGl_proc3129z00zzcfa_info2z00, BFALSE,
					BGl_proc3128z00zzcfa_info2z00, BGl_proc3127z00zzcfa_info2z00,
					BgL_arg2477z00_4051, BgL_arg2479z00_4052);
			}
			{	/* Cfa/cinfo2.scm 131 */
				obj_t BgL_arg2504z00_4101;
				obj_t BgL_arg2506z00_4102;

				{	/* Cfa/cinfo2.scm 131 */
					obj_t BgL_v1921z00_4130;

					BgL_v1921z00_4130 = create_vector(((long) 0));
					BgL_arg2504z00_4101 = BgL_v1921z00_4130;
				}
				{	/* Cfa/cinfo2.scm 131 */
					obj_t BgL_v1922z00_4131;

					BgL_v1922z00_4131 = create_vector(((long) 0));
					BgL_arg2506z00_4102 = BgL_v1922z00_4131;
				}
				BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 38)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 36854),
					BGl_proc3134z00zzcfa_info2z00, BGl_proc3133z00zzcfa_info2z00, BFALSE,
					BGl_proc3132z00zzcfa_info2z00, BGl_proc3131z00zzcfa_info2z00,
					BgL_arg2504z00_4101, BgL_arg2506z00_4102);
			}
			{	/* Cfa/cinfo2.scm 132 */
				obj_t BgL_arg2526z00_4140;
				obj_t BgL_arg2527z00_4141;

				{	/* Cfa/cinfo2.scm 132 */
					obj_t BgL_v1923z00_4169;

					BgL_v1923z00_4169 = create_vector(((long) 0));
					BgL_arg2526z00_4140 = BgL_v1923z00_4169;
				}
				{	/* Cfa/cinfo2.scm 132 */
					obj_t BgL_v1924z00_4170;

					BgL_v1924z00_4170 = create_vector(((long) 0));
					BgL_arg2527z00_4141 = BgL_v1924z00_4170;
				}
				BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 39)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 48161),
					BGl_proc3138z00zzcfa_info2z00, BGl_proc3137z00zzcfa_info2z00, BFALSE,
					BGl_proc3136z00zzcfa_info2z00, BGl_proc3135z00zzcfa_info2z00,
					BgL_arg2526z00_4140, BgL_arg2527z00_4141);
			}
			{	/* Cfa/cinfo2.scm 134 */
				obj_t BgL_arg2545z00_4179;
				obj_t BgL_arg2548z00_4180;

				{	/* Cfa/cinfo2.scm 134 */
					obj_t BgL_v1925z00_4213;

					BgL_v1925z00_4213 = create_vector(((long) 5));
					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2565z00_4214;

						BgL_arg2565z00_4214 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3140z00zzcfa_info2z00,
							BGl_proc3139z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1925z00_4213, ((long) 0), BgL_arg2565z00_4214);
					}
					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2571z00_4224;

						BgL_arg2571z00_4224 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc3142z00zzcfa_info2z00,
							BGl_proc3141z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1925z00_4213, ((long) 1), BgL_arg2571z00_4224);
					}
					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2577z00_4234;

						BgL_arg2577z00_4234 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc3145z00zzcfa_info2z00,
							BGl_proc3144z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3143z00zzcfa_info2z00, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1925z00_4213, ((long) 2), BgL_arg2577z00_4234);
					}
					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2584z00_4247;

						BgL_arg2584z00_4247 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3147z00zzcfa_info2z00,
							BGl_proc3146z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_variablez00zzast_varz00);
						VECTOR_SET(BgL_v1925z00_4213, ((long) 3), BgL_arg2584z00_4247);
					}
					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2589z00_4257;

						BgL_arg2589z00_4257 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc3150z00zzcfa_info2z00,
							BGl_proc3149z00zzcfa_info2z00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc3148z00zzcfa_info2z00, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1925z00_4213, ((long) 4), BgL_arg2589z00_4257);
					}
					BgL_arg2545z00_4179 = BgL_v1925z00_4213;
				}
				{	/* Cfa/cinfo2.scm 134 */
					obj_t BgL_v1926z00_4270;

					BgL_v1926z00_4270 = create_vector(((long) 0));
					BgL_arg2548z00_4180 = BgL_v1926z00_4270;
				}
				BGl_makezd2structzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 40)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 1261),
					BGl_proc3154z00zzcfa_info2z00, BGl_proc3153z00zzcfa_info2z00, BFALSE,
					BGl_proc3152z00zzcfa_info2z00, BGl_proc3151z00zzcfa_info2z00,
					BgL_arg2545z00_4179, BgL_arg2548z00_4180);
			}
			{	/* Cfa/cinfo2.scm 146 */
				obj_t BgL_arg2604z00_4279;
				obj_t BgL_arg2605z00_4280;

				{	/* Cfa/cinfo2.scm 146 */
					obj_t BgL_v1927z00_4309;

					BgL_v1927z00_4309 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_arg2617z00_4310;

						BgL_arg2617z00_4310 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3156z00zzcfa_info2z00,
							BGl_proc3155z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1927z00_4309, ((long) 0), BgL_arg2617z00_4310);
					}
					BgL_arg2604z00_4279 = BgL_v1927z00_4309;
				}
				{	/* Cfa/cinfo2.scm 146 */
					obj_t BgL_v1928z00_4320;

					BgL_v1928z00_4320 = create_vector(((long) 0));
					BgL_arg2605z00_4280 = BgL_v1928z00_4320;
				}
				BGl_structzd2refzd2appz00zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 41)),
					CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 13046),
					BGl_proc3160z00zzcfa_info2z00, BGl_proc3159z00zzcfa_info2z00, BFALSE,
					BGl_proc3158z00zzcfa_info2z00, BGl_proc3157z00zzcfa_info2z00,
					BgL_arg2604z00_4279, BgL_arg2605z00_4280);
			}
			{	/* Cfa/cinfo2.scm 147 */
				obj_t BgL_arg2629z00_4329;
				obj_t BgL_arg2631z00_4330;

				{	/* Cfa/cinfo2.scm 147 */
					obj_t BgL_v1929z00_4359;

					BgL_v1929z00_4359 = create_vector(((long) 1));
					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_arg2644z00_4360;

						BgL_arg2644z00_4360 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3162z00zzcfa_info2z00,
							BGl_proc3161z00zzcfa_info2z00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BFALSE, BGl_approxz00zzcfa_infoz00);
						VECTOR_SET(BgL_v1929z00_4359, ((long) 0), BgL_arg2644z00_4360);
					}
					BgL_arg2629z00_4329 = BgL_v1929z00_4359;
				}
				{	/* Cfa/cinfo2.scm 147 */
					obj_t BgL_v1930z00_4370;

					BgL_v1930z00_4370 = create_vector(((long) 0));
					BgL_arg2631z00_4330 = BgL_v1930z00_4370;
				}
				return (BGl_structzd2setz12zd2appz12zzcfa_info2z00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 42)),
						CNST_TABLE_REF(((long) 3)), BGl_appz00zzast_nodez00, ((long) 2337),
						BGl_proc3166z00zzcfa_info2z00, BGl_proc3165z00zzcfa_info2z00,
						BFALSE, BGl_proc3164z00zzcfa_info2z00,
						BGl_proc3163z00zzcfa_info2z00, BgL_arg2629z00_4329,
						BgL_arg2631z00_4330), BUNSPEC);
		}}

	}



/* &lambda2639 */
	BgL_appz00_bglt BGl_z62lambda2639z62zzcfa_info2z00(obj_t BgL_envz00_7413,
		obj_t BgL_o1460z00_7414)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{	/* Cfa/cinfo2.scm 147 */
				long BgL_arg2640z00_8183;

				{	/* Cfa/cinfo2.scm 147 */
					obj_t BgL_arg2641z00_8184;

					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_arg2643z00_8185;

						{	/* Cfa/cinfo2.scm 147 */
							long BgL_arg1816z00_8186;

							{	/* Cfa/cinfo2.scm 147 */
								long BgL_arg1817z00_8187;

								{	/* Cfa/cinfo2.scm 147 */
									long BgL_res2976z00_8188;

									BgL_res2976z00_8188 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1460z00_7414)));
									BgL_arg1817z00_8187 = BgL_res2976z00_8188;
								}
								BgL_arg1816z00_8186 = (BgL_arg1817z00_8187 - OBJECT_TYPE);
							}
							BgL_arg2643z00_8185 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8186);
						}
						BgL_arg2641z00_8184 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2643z00_8185);
					}
					{	/* Cfa/cinfo2.scm 147 */
						long BgL_res2978z00_8189;

						{	/* Cfa/cinfo2.scm 147 */
							obj_t BgL_tmpz00_12261;

							BgL_tmpz00_12261 = ((obj_t) BgL_arg2641z00_8184);
							BgL_res2978z00_8189 = BGL_CLASS_INDEX(BgL_tmpz00_12261);
						}
						BgL_arg2640z00_8183 = BgL_res2978z00_8189;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1460z00_7414)), BgL_arg2640z00_8183);
			}
			{	/* Cfa/cinfo2.scm 147 */
				BgL_objectz00_bglt BgL_tmpz00_12267;

				BgL_tmpz00_12267 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1460z00_7414));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12267, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1460z00_7414));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1460z00_7414));
		}

	}



/* &<@anonymous:2638> */
	obj_t BGl_z62zc3z04anonymousza32638ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7415,
		obj_t BgL_new1459z00_7416)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{
				BgL_appz00_bglt BgL_auxz00_12275;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1459z00_7416))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_12279;

					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_classz00_8191;

						BgL_classz00_8191 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 147 */
							obj_t BgL__ortest_1106z00_8192;

							BgL__ortest_1106z00_8192 = BGL_CLASS_NIL(BgL_classz00_8191);
							if (CBOOL(BgL__ortest_1106z00_8192))
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12279 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8192);
								}
							else
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12279 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8191));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1459z00_7416))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_12279), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1459z00_7416))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1459z00_7416))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_12295;

					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_classz00_8193;

						BgL_classz00_8193 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 147 */
							obj_t BgL__ortest_1106z00_8194;

							BgL__ortest_1106z00_8194 = BGL_CLASS_NIL(BgL_classz00_8193);
							if (CBOOL(BgL__ortest_1106z00_8194))
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12295 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8194);
								}
							else
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12295 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8193));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1459z00_7416))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_12295), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1459z00_7416))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1459z00_7416))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_12318;
					BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_12311;

					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_classz00_8195;

						BgL_classz00_8195 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 147 */
							obj_t BgL__ortest_1106z00_8196;

							BgL__ortest_1106z00_8196 = BGL_CLASS_NIL(BgL_classz00_8195);
							if (CBOOL(BgL__ortest_1106z00_8196))
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12318 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8196);
								}
							else
								{	/* Cfa/cinfo2.scm 147 */
									BgL_auxz00_12318 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8195));
								}
						}
					}
					{
						obj_t BgL_auxz00_12312;

						{	/* Cfa/cinfo2.scm 147 */
							BgL_objectz00_bglt BgL_tmpz00_12313;

							BgL_tmpz00_12313 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1459z00_7416));
							BgL_auxz00_12312 = BGL_OBJECT_WIDENING(BgL_tmpz00_12313);
						}
						BgL_auxz00_12311 =
							((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_12312);
					}
					((((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_12311))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_12318), BUNSPEC);
				}
				BgL_auxz00_12275 = ((BgL_appz00_bglt) BgL_new1459z00_7416);
				return ((obj_t) BgL_auxz00_12275);
			}
		}

	}



/* &lambda2636 */
	BgL_appz00_bglt BGl_z62lambda2636z62zzcfa_info2z00(obj_t BgL_envz00_7417,
		obj_t BgL_o1456z00_7418)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{	/* Cfa/cinfo2.scm 147 */
				BgL_structzd2setz12zd2appz12_bglt BgL_wide1458z00_8198;

				BgL_wide1458z00_8198 =
					((BgL_structzd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_structzd2setz12zd2appz12_bgl))));
				{	/* Cfa/cinfo2.scm 147 */
					obj_t BgL_auxz00_12333;
					BgL_objectz00_bglt BgL_tmpz00_12329;

					BgL_auxz00_12333 = ((obj_t) BgL_wide1458z00_8198);
					BgL_tmpz00_12329 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1456z00_7418)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12329, BgL_auxz00_12333);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1456z00_7418)));
				{	/* Cfa/cinfo2.scm 147 */
					long BgL_arg2637z00_8199;

					{	/* Cfa/cinfo2.scm 147 */
						long BgL_res2975z00_8200;

						BgL_res2975z00_8200 =
							BGL_CLASS_INDEX(BGl_structzd2setz12zd2appz12zzcfa_info2z00);
						BgL_arg2637z00_8199 = BgL_res2975z00_8200;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1456z00_7418))), BgL_arg2637z00_8199);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1456z00_7418)));
			}
		}

	}



/* &lambda2632 */
	BgL_appz00_bglt BGl_z62lambda2632z62zzcfa_info2z00(obj_t BgL_envz00_7419,
		obj_t BgL_loc1448z00_7420, obj_t BgL_type1449z00_7421,
		obj_t BgL_sidezd2effect1450zd2_7422, obj_t BgL_key1451z00_7423,
		obj_t BgL_fun1452z00_7424, obj_t BgL_args1453z00_7425,
		obj_t BgL_stackable1454z00_7426, obj_t BgL_approx1455z00_7427)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{	/* Cfa/cinfo2.scm 147 */
				BgL_appz00_bglt BgL_new1657z00_8204;

				{	/* Cfa/cinfo2.scm 147 */
					BgL_appz00_bglt BgL_tmp1655z00_8205;
					BgL_structzd2setz12zd2appz12_bglt BgL_wide1656z00_8206;

					{
						BgL_appz00_bglt BgL_auxz00_12347;

						{	/* Cfa/cinfo2.scm 147 */
							BgL_appz00_bglt BgL_new1654z00_8207;

							BgL_new1654z00_8207 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 147 */
								long BgL_arg2635z00_8208;

								{	/* Cfa/cinfo2.scm 147 */
									long BgL_res2973z00_8209;

									BgL_res2973z00_8209 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2635z00_8208 = BgL_res2973z00_8209;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1654z00_8207),
									BgL_arg2635z00_8208);
							}
							{	/* Cfa/cinfo2.scm 147 */
								BgL_objectz00_bglt BgL_tmpz00_12352;

								BgL_tmpz00_12352 = ((BgL_objectz00_bglt) BgL_new1654z00_8207);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12352, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1654z00_8207);
							BgL_auxz00_12347 = BgL_new1654z00_8207;
						}
						BgL_tmp1655z00_8205 = ((BgL_appz00_bglt) BgL_auxz00_12347);
					}
					BgL_wide1656z00_8206 =
						((BgL_structzd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.scm 147 */
						obj_t BgL_auxz00_12360;
						BgL_objectz00_bglt BgL_tmpz00_12358;

						BgL_auxz00_12360 = ((obj_t) BgL_wide1656z00_8206);
						BgL_tmpz00_12358 = ((BgL_objectz00_bglt) BgL_tmp1655z00_8205);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12358, BgL_auxz00_12360);
					}
					((BgL_objectz00_bglt) BgL_tmp1655z00_8205);
					{	/* Cfa/cinfo2.scm 147 */
						long BgL_arg2633z00_8210;

						{	/* Cfa/cinfo2.scm 147 */
							long BgL_res2974z00_8211;

							BgL_res2974z00_8211 =
								BGL_CLASS_INDEX(BGl_structzd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg2633z00_8210 = BgL_res2974z00_8211;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1655z00_8205), BgL_arg2633z00_8210);
					}
					BgL_new1657z00_8204 = ((BgL_appz00_bglt) BgL_tmp1655z00_8205);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1657z00_8204)))->BgL_locz00) =
					((obj_t) BgL_loc1448z00_7420), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1657z00_8204)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1449z00_7421)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1657z00_8204)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1450zd2_7422), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1657z00_8204)))->BgL_keyz00) =
					((obj_t) BgL_key1451z00_7423), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1657z00_8204)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1452z00_7424)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1657z00_8204)))->
						BgL_argsz00) = ((obj_t) BgL_args1453z00_7425), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1657z00_8204)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1454z00_7426), BUNSPEC);
				{
					BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_12384;

					{
						obj_t BgL_auxz00_12385;

						{	/* Cfa/cinfo2.scm 147 */
							BgL_objectz00_bglt BgL_tmpz00_12386;

							BgL_tmpz00_12386 = ((BgL_objectz00_bglt) BgL_new1657z00_8204);
							BgL_auxz00_12385 = BGL_OBJECT_WIDENING(BgL_tmpz00_12386);
						}
						BgL_auxz00_12384 =
							((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_12385);
					}
					((((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_12384))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1455z00_7427)), BUNSPEC);
				}
				return BgL_new1657z00_8204;
			}
		}

	}



/* &lambda2648 */
	obj_t BGl_z62lambda2648z62zzcfa_info2z00(obj_t BgL_envz00_7428,
		obj_t BgL_oz00_7429, obj_t BgL_vz00_7430)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_12392;

				{
					obj_t BgL_auxz00_12393;

					{	/* Cfa/cinfo2.scm 147 */
						BgL_objectz00_bglt BgL_tmpz00_12394;

						BgL_tmpz00_12394 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7429));
						BgL_auxz00_12393 = BGL_OBJECT_WIDENING(BgL_tmpz00_12394);
					}
					BgL_auxz00_12392 =
						((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_12393);
				}
				return
					((((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_12392))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7430)), BUNSPEC);
			}
		}

	}



/* &lambda2647 */
	BgL_approxz00_bglt BGl_z62lambda2647z62zzcfa_info2z00(obj_t BgL_envz00_7431,
		obj_t BgL_oz00_7432)
	{
		{	/* Cfa/cinfo2.scm 147 */
			{
				BgL_structzd2setz12zd2appz12_bglt BgL_auxz00_12401;

				{
					obj_t BgL_auxz00_12402;

					{	/* Cfa/cinfo2.scm 147 */
						BgL_objectz00_bglt BgL_tmpz00_12403;

						BgL_tmpz00_12403 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7432));
						BgL_auxz00_12402 = BGL_OBJECT_WIDENING(BgL_tmpz00_12403);
					}
					BgL_auxz00_12401 =
						((BgL_structzd2setz12zd2appz12_bglt) BgL_auxz00_12402);
				}
				return
					(((BgL_structzd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_12401))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2613 */
	BgL_appz00_bglt BGl_z62lambda2613z62zzcfa_info2z00(obj_t BgL_envz00_7433,
		obj_t BgL_o1446z00_7434)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{	/* Cfa/cinfo2.scm 146 */
				long BgL_arg2614z00_8216;

				{	/* Cfa/cinfo2.scm 146 */
					obj_t BgL_arg2615z00_8217;

					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_arg2616z00_8218;

						{	/* Cfa/cinfo2.scm 146 */
							long BgL_arg1816z00_8219;

							{	/* Cfa/cinfo2.scm 146 */
								long BgL_arg1817z00_8220;

								{	/* Cfa/cinfo2.scm 146 */
									long BgL_res2970z00_8221;

									BgL_res2970z00_8221 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1446z00_7434)));
									BgL_arg1817z00_8220 = BgL_res2970z00_8221;
								}
								BgL_arg1816z00_8219 = (BgL_arg1817z00_8220 - OBJECT_TYPE);
							}
							BgL_arg2616z00_8218 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8219);
						}
						BgL_arg2615z00_8217 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2616z00_8218);
					}
					{	/* Cfa/cinfo2.scm 146 */
						long BgL_res2972z00_8222;

						{	/* Cfa/cinfo2.scm 146 */
							obj_t BgL_tmpz00_12415;

							BgL_tmpz00_12415 = ((obj_t) BgL_arg2615z00_8217);
							BgL_res2972z00_8222 = BGL_CLASS_INDEX(BgL_tmpz00_12415);
						}
						BgL_arg2614z00_8216 = BgL_res2972z00_8222;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1446z00_7434)), BgL_arg2614z00_8216);
			}
			{	/* Cfa/cinfo2.scm 146 */
				BgL_objectz00_bglt BgL_tmpz00_12421;

				BgL_tmpz00_12421 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1446z00_7434));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12421, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1446z00_7434));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1446z00_7434));
		}

	}



/* &<@anonymous:2612> */
	obj_t BGl_z62zc3z04anonymousza32612ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7435,
		obj_t BgL_new1445z00_7436)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{
				BgL_appz00_bglt BgL_auxz00_12429;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1445z00_7436))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_12433;

					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_classz00_8224;

						BgL_classz00_8224 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 146 */
							obj_t BgL__ortest_1106z00_8225;

							BgL__ortest_1106z00_8225 = BGL_CLASS_NIL(BgL_classz00_8224);
							if (CBOOL(BgL__ortest_1106z00_8225))
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12433 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8225);
								}
							else
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12433 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8224));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1445z00_7436))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_12433), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1445z00_7436))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1445z00_7436))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_12449;

					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_classz00_8226;

						BgL_classz00_8226 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 146 */
							obj_t BgL__ortest_1106z00_8227;

							BgL__ortest_1106z00_8227 = BGL_CLASS_NIL(BgL_classz00_8226);
							if (CBOOL(BgL__ortest_1106z00_8227))
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12449 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8227);
								}
							else
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12449 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8226));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1445z00_7436))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_12449), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1445z00_7436))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1445z00_7436))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_12472;
					BgL_structzd2refzd2appz00_bglt BgL_auxz00_12465;

					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_classz00_8228;

						BgL_classz00_8228 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 146 */
							obj_t BgL__ortest_1106z00_8229;

							BgL__ortest_1106z00_8229 = BGL_CLASS_NIL(BgL_classz00_8228);
							if (CBOOL(BgL__ortest_1106z00_8229))
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12472 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8229);
								}
							else
								{	/* Cfa/cinfo2.scm 146 */
									BgL_auxz00_12472 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8228));
								}
						}
					}
					{
						obj_t BgL_auxz00_12466;

						{	/* Cfa/cinfo2.scm 146 */
							BgL_objectz00_bglt BgL_tmpz00_12467;

							BgL_tmpz00_12467 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1445z00_7436));
							BgL_auxz00_12466 = BGL_OBJECT_WIDENING(BgL_tmpz00_12467);
						}
						BgL_auxz00_12465 =
							((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_12466);
					}
					((((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_12465))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_12472), BUNSPEC);
				}
				BgL_auxz00_12429 = ((BgL_appz00_bglt) BgL_new1445z00_7436);
				return ((obj_t) BgL_auxz00_12429);
			}
		}

	}



/* &lambda2609 */
	BgL_appz00_bglt BGl_z62lambda2609z62zzcfa_info2z00(obj_t BgL_envz00_7437,
		obj_t BgL_o1442z00_7438)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{	/* Cfa/cinfo2.scm 146 */
				BgL_structzd2refzd2appz00_bglt BgL_wide1444z00_8231;

				BgL_wide1444z00_8231 =
					((BgL_structzd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_structzd2refzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 146 */
					obj_t BgL_auxz00_12487;
					BgL_objectz00_bglt BgL_tmpz00_12483;

					BgL_auxz00_12487 = ((obj_t) BgL_wide1444z00_8231);
					BgL_tmpz00_12483 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1442z00_7438)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12483, BgL_auxz00_12487);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1442z00_7438)));
				{	/* Cfa/cinfo2.scm 146 */
					long BgL_arg2611z00_8232;

					{	/* Cfa/cinfo2.scm 146 */
						long BgL_res2969z00_8233;

						BgL_res2969z00_8233 =
							BGL_CLASS_INDEX(BGl_structzd2refzd2appz00zzcfa_info2z00);
						BgL_arg2611z00_8232 = BgL_res2969z00_8233;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1442z00_7438))), BgL_arg2611z00_8232);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1442z00_7438)));
			}
		}

	}



/* &lambda2606 */
	BgL_appz00_bglt BGl_z62lambda2606z62zzcfa_info2z00(obj_t BgL_envz00_7439,
		obj_t BgL_loc1434z00_7440, obj_t BgL_type1435z00_7441,
		obj_t BgL_sidezd2effect1436zd2_7442, obj_t BgL_key1437z00_7443,
		obj_t BgL_fun1438z00_7444, obj_t BgL_args1439z00_7445,
		obj_t BgL_stackable1440z00_7446, obj_t BgL_approx1441z00_7447)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{	/* Cfa/cinfo2.scm 146 */
				BgL_appz00_bglt BgL_new1652z00_8237;

				{	/* Cfa/cinfo2.scm 146 */
					BgL_appz00_bglt BgL_tmp1650z00_8238;
					BgL_structzd2refzd2appz00_bglt BgL_wide1651z00_8239;

					{
						BgL_appz00_bglt BgL_auxz00_12501;

						{	/* Cfa/cinfo2.scm 146 */
							BgL_appz00_bglt BgL_new1649z00_8240;

							BgL_new1649z00_8240 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 146 */
								long BgL_arg2608z00_8241;

								{	/* Cfa/cinfo2.scm 146 */
									long BgL_res2967z00_8242;

									BgL_res2967z00_8242 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2608z00_8241 = BgL_res2967z00_8242;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1649z00_8240),
									BgL_arg2608z00_8241);
							}
							{	/* Cfa/cinfo2.scm 146 */
								BgL_objectz00_bglt BgL_tmpz00_12506;

								BgL_tmpz00_12506 = ((BgL_objectz00_bglt) BgL_new1649z00_8240);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12506, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1649z00_8240);
							BgL_auxz00_12501 = BgL_new1649z00_8240;
						}
						BgL_tmp1650z00_8238 = ((BgL_appz00_bglt) BgL_auxz00_12501);
					}
					BgL_wide1651z00_8239 =
						((BgL_structzd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_structzd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.scm 146 */
						obj_t BgL_auxz00_12514;
						BgL_objectz00_bglt BgL_tmpz00_12512;

						BgL_auxz00_12514 = ((obj_t) BgL_wide1651z00_8239);
						BgL_tmpz00_12512 = ((BgL_objectz00_bglt) BgL_tmp1650z00_8238);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12512, BgL_auxz00_12514);
					}
					((BgL_objectz00_bglt) BgL_tmp1650z00_8238);
					{	/* Cfa/cinfo2.scm 146 */
						long BgL_arg2607z00_8243;

						{	/* Cfa/cinfo2.scm 146 */
							long BgL_res2968z00_8244;

							BgL_res2968z00_8244 =
								BGL_CLASS_INDEX(BGl_structzd2refzd2appz00zzcfa_info2z00);
							BgL_arg2607z00_8243 = BgL_res2968z00_8244;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1650z00_8238), BgL_arg2607z00_8243);
					}
					BgL_new1652z00_8237 = ((BgL_appz00_bglt) BgL_tmp1650z00_8238);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1652z00_8237)))->BgL_locz00) =
					((obj_t) BgL_loc1434z00_7440), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1652z00_8237)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1435z00_7441)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1652z00_8237)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1436zd2_7442), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1652z00_8237)))->BgL_keyz00) =
					((obj_t) BgL_key1437z00_7443), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1652z00_8237)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1438z00_7444)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1652z00_8237)))->
						BgL_argsz00) = ((obj_t) BgL_args1439z00_7445), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1652z00_8237)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1440z00_7446), BUNSPEC);
				{
					BgL_structzd2refzd2appz00_bglt BgL_auxz00_12538;

					{
						obj_t BgL_auxz00_12539;

						{	/* Cfa/cinfo2.scm 146 */
							BgL_objectz00_bglt BgL_tmpz00_12540;

							BgL_tmpz00_12540 = ((BgL_objectz00_bglt) BgL_new1652z00_8237);
							BgL_auxz00_12539 = BGL_OBJECT_WIDENING(BgL_tmpz00_12540);
						}
						BgL_auxz00_12538 =
							((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_12539);
					}
					((((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_12538))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1441z00_7447)), BUNSPEC);
				}
				return BgL_new1652z00_8237;
			}
		}

	}



/* &lambda2623 */
	obj_t BGl_z62lambda2623z62zzcfa_info2z00(obj_t BgL_envz00_7448,
		obj_t BgL_oz00_7449, obj_t BgL_vz00_7450)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_auxz00_12546;

				{
					obj_t BgL_auxz00_12547;

					{	/* Cfa/cinfo2.scm 146 */
						BgL_objectz00_bglt BgL_tmpz00_12548;

						BgL_tmpz00_12548 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7449));
						BgL_auxz00_12547 = BGL_OBJECT_WIDENING(BgL_tmpz00_12548);
					}
					BgL_auxz00_12546 =
						((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_12547);
				}
				return
					((((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_12546))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7450)), BUNSPEC);
			}
		}

	}



/* &lambda2622 */
	BgL_approxz00_bglt BGl_z62lambda2622z62zzcfa_info2z00(obj_t BgL_envz00_7451,
		obj_t BgL_oz00_7452)
	{
		{	/* Cfa/cinfo2.scm 146 */
			{
				BgL_structzd2refzd2appz00_bglt BgL_auxz00_12555;

				{
					obj_t BgL_auxz00_12556;

					{	/* Cfa/cinfo2.scm 146 */
						BgL_objectz00_bglt BgL_tmpz00_12557;

						BgL_tmpz00_12557 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7452));
						BgL_auxz00_12556 = BGL_OBJECT_WIDENING(BgL_tmpz00_12557);
					}
					BgL_auxz00_12555 =
						((BgL_structzd2refzd2appz00_bglt) BgL_auxz00_12556);
				}
				return
					(((BgL_structzd2refzd2appz00_bglt) COBJECT(BgL_auxz00_12555))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2558 */
	BgL_appz00_bglt BGl_z62lambda2558z62zzcfa_info2z00(obj_t BgL_envz00_7453,
		obj_t BgL_o1432z00_7454)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{	/* Cfa/cinfo2.scm 134 */
				long BgL_arg2559z00_8249;

				{	/* Cfa/cinfo2.scm 134 */
					obj_t BgL_arg2562z00_8250;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_arg2564z00_8251;

						{	/* Cfa/cinfo2.scm 134 */
							long BgL_arg1816z00_8252;

							{	/* Cfa/cinfo2.scm 134 */
								long BgL_arg1817z00_8253;

								{	/* Cfa/cinfo2.scm 134 */
									long BgL_res2964z00_8254;

									BgL_res2964z00_8254 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1432z00_7454)));
									BgL_arg1817z00_8253 = BgL_res2964z00_8254;
								}
								BgL_arg1816z00_8252 = (BgL_arg1817z00_8253 - OBJECT_TYPE);
							}
							BgL_arg2564z00_8251 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8252);
						}
						BgL_arg2562z00_8250 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2564z00_8251);
					}
					{	/* Cfa/cinfo2.scm 134 */
						long BgL_res2966z00_8255;

						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL_tmpz00_12569;

							BgL_tmpz00_12569 = ((obj_t) BgL_arg2562z00_8250);
							BgL_res2966z00_8255 = BGL_CLASS_INDEX(BgL_tmpz00_12569);
						}
						BgL_arg2559z00_8249 = BgL_res2966z00_8255;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1432z00_7454)), BgL_arg2559z00_8249);
			}
			{	/* Cfa/cinfo2.scm 134 */
				BgL_objectz00_bglt BgL_tmpz00_12575;

				BgL_tmpz00_12575 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1432z00_7454));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12575, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1432z00_7454));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1432z00_7454));
		}

	}



/* &<@anonymous:2557> */
	obj_t BGl_z62zc3z04anonymousza32557ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7455,
		obj_t BgL_new1431z00_7456)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_appz00_bglt BgL_auxz00_12583;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1431z00_7456))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_12587;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_classz00_8257;

						BgL_classz00_8257 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL__ortest_1106z00_8258;

							BgL__ortest_1106z00_8258 = BGL_CLASS_NIL(BgL_classz00_8257);
							if (CBOOL(BgL__ortest_1106z00_8258))
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12587 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8258);
								}
							else
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12587 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8257));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1431z00_7456))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_12587), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1431z00_7456))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1431z00_7456))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_12603;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_classz00_8259;

						BgL_classz00_8259 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL__ortest_1106z00_8260;

							BgL__ortest_1106z00_8260 = BGL_CLASS_NIL(BgL_classz00_8259);
							if (CBOOL(BgL__ortest_1106z00_8260))
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12603 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8260);
								}
							else
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12603 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8259));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1431z00_7456))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_12603), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1431z00_7456))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1431z00_7456))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_12626;
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12619;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_classz00_8261;

						BgL_classz00_8261 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL__ortest_1106z00_8262;

							BgL__ortest_1106z00_8262 = BGL_CLASS_NIL(BgL_classz00_8261);
							if (CBOOL(BgL__ortest_1106z00_8262))
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12626 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8262);
								}
							else
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12626 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8261));
								}
						}
					}
					{
						obj_t BgL_auxz00_12620;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12621;

							BgL_tmpz00_12621 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1431z00_7456));
							BgL_auxz00_12620 = BGL_OBJECT_WIDENING(BgL_tmpz00_12621);
						}
						BgL_auxz00_12619 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12620);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12619))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_12626), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_12641;
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12634;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_classz00_8263;

						BgL_classz00_8263 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL__ortest_1106z00_8264;

							BgL__ortest_1106z00_8264 = BGL_CLASS_NIL(BgL_classz00_8263);
							if (CBOOL(BgL__ortest_1106z00_8264))
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12641 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8264);
								}
							else
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12641 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8263));
								}
						}
					}
					{
						obj_t BgL_auxz00_12635;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12636;

							BgL_tmpz00_12636 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1431z00_7456));
							BgL_auxz00_12635 = BGL_OBJECT_WIDENING(BgL_tmpz00_12636);
						}
						BgL_auxz00_12634 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12635);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12634))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_auxz00_12641), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12649;

					{
						obj_t BgL_auxz00_12650;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12651;

							BgL_tmpz00_12651 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1431z00_7456));
							BgL_auxz00_12650 = BGL_OBJECT_WIDENING(BgL_tmpz00_12651);
						}
						BgL_auxz00_12649 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12650);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12649))->
							BgL_lostzd2stampzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_12664;
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12657;

					{	/* Cfa/cinfo2.scm 134 */
						obj_t BgL_classz00_8265;

						BgL_classz00_8265 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL__ortest_1106z00_8266;

							BgL__ortest_1106z00_8266 = BGL_CLASS_NIL(BgL_classz00_8265);
							if (CBOOL(BgL__ortest_1106z00_8266))
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12664 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8266);
								}
							else
								{	/* Cfa/cinfo2.scm 134 */
									BgL_auxz00_12664 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8265));
								}
						}
					}
					{
						obj_t BgL_auxz00_12658;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12659;

							BgL_tmpz00_12659 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1431z00_7456));
							BgL_auxz00_12658 = BGL_OBJECT_WIDENING(BgL_tmpz00_12659);
						}
						BgL_auxz00_12657 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12658);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12657))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_12664), BUNSPEC);
				}
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12672;

					{
						obj_t BgL_auxz00_12673;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12674;

							BgL_tmpz00_12674 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1431z00_7456));
							BgL_auxz00_12673 = BGL_OBJECT_WIDENING(BgL_tmpz00_12674);
						}
						BgL_auxz00_12672 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12673);
					}
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12672))->
							BgL_stackzd2stampzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_12583 = ((BgL_appz00_bglt) BgL_new1431z00_7456);
				return ((obj_t) BgL_auxz00_12583);
			}
		}

	}



/* &lambda2554 */
	BgL_appz00_bglt BGl_z62lambda2554z62zzcfa_info2z00(obj_t BgL_envz00_7457,
		obj_t BgL_o1428z00_7458)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{	/* Cfa/cinfo2.scm 134 */
				BgL_makezd2structzd2appz00_bglt BgL_wide1430z00_8268;

				BgL_wide1430z00_8268 =
					((BgL_makezd2structzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_makezd2structzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 134 */
					obj_t BgL_auxz00_12687;
					BgL_objectz00_bglt BgL_tmpz00_12683;

					BgL_auxz00_12687 = ((obj_t) BgL_wide1430z00_8268);
					BgL_tmpz00_12683 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1428z00_7458)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12683, BgL_auxz00_12687);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1428z00_7458)));
				{	/* Cfa/cinfo2.scm 134 */
					long BgL_arg2556z00_8269;

					{	/* Cfa/cinfo2.scm 134 */
						long BgL_res2963z00_8270;

						BgL_res2963z00_8270 =
							BGL_CLASS_INDEX(BGl_makezd2structzd2appz00zzcfa_info2z00);
						BgL_arg2556z00_8269 = BgL_res2963z00_8270;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1428z00_7458))), BgL_arg2556z00_8269);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1428z00_7458)));
			}
		}

	}



/* &lambda2549 */
	BgL_appz00_bglt BGl_z62lambda2549z62zzcfa_info2z00(obj_t BgL_envz00_7459,
		obj_t BgL_loc1416z00_7460, obj_t BgL_type1417z00_7461,
		obj_t BgL_sidezd2effect1418zd2_7462, obj_t BgL_key1419z00_7463,
		obj_t BgL_fun1420z00_7464, obj_t BgL_args1421z00_7465,
		obj_t BgL_stackable1422z00_7466, obj_t BgL_approx1423z00_7467,
		obj_t BgL_valuezd2approx1424zd2_7468, obj_t BgL_lostzd2stamp1425zd2_7469,
		obj_t BgL_owner1426z00_7470, obj_t BgL_stackzd2stamp1427zd2_7471)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{	/* Cfa/cinfo2.scm 134 */
				long BgL_lostzd2stamp1425zd2_8275;

				BgL_lostzd2stamp1425zd2_8275 =
					(long) CINT(BgL_lostzd2stamp1425zd2_7469);
				{	/* Cfa/cinfo2.scm 134 */
					BgL_appz00_bglt BgL_new1647z00_8277;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_appz00_bglt BgL_tmp1645z00_8278;
						BgL_makezd2structzd2appz00_bglt BgL_wide1646z00_8279;

						{
							BgL_appz00_bglt BgL_auxz00_12702;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_appz00_bglt BgL_new1644z00_8280;

								BgL_new1644z00_8280 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Cfa/cinfo2.scm 134 */
									long BgL_arg2553z00_8281;

									{	/* Cfa/cinfo2.scm 134 */
										long BgL_res2961z00_8282;

										BgL_res2961z00_8282 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg2553z00_8281 = BgL_res2961z00_8282;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1644z00_8280),
										BgL_arg2553z00_8281);
								}
								{	/* Cfa/cinfo2.scm 134 */
									BgL_objectz00_bglt BgL_tmpz00_12707;

									BgL_tmpz00_12707 = ((BgL_objectz00_bglt) BgL_new1644z00_8280);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12707, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1644z00_8280);
								BgL_auxz00_12702 = BgL_new1644z00_8280;
							}
							BgL_tmp1645z00_8278 = ((BgL_appz00_bglt) BgL_auxz00_12702);
						}
						BgL_wide1646z00_8279 =
							((BgL_makezd2structzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_makezd2structzd2appz00_bgl))));
						{	/* Cfa/cinfo2.scm 134 */
							obj_t BgL_auxz00_12715;
							BgL_objectz00_bglt BgL_tmpz00_12713;

							BgL_auxz00_12715 = ((obj_t) BgL_wide1646z00_8279);
							BgL_tmpz00_12713 = ((BgL_objectz00_bglt) BgL_tmp1645z00_8278);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12713, BgL_auxz00_12715);
						}
						((BgL_objectz00_bglt) BgL_tmp1645z00_8278);
						{	/* Cfa/cinfo2.scm 134 */
							long BgL_arg2552z00_8283;

							{	/* Cfa/cinfo2.scm 134 */
								long BgL_res2962z00_8284;

								BgL_res2962z00_8284 =
									BGL_CLASS_INDEX(BGl_makezd2structzd2appz00zzcfa_info2z00);
								BgL_arg2552z00_8283 = BgL_res2962z00_8284;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1645z00_8278),
								BgL_arg2552z00_8283);
						}
						BgL_new1647z00_8277 = ((BgL_appz00_bglt) BgL_tmp1645z00_8278);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1647z00_8277)))->BgL_locz00) =
						((obj_t) BgL_loc1416z00_7460), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1647z00_8277)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1417z00_7461)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1647z00_8277)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1418zd2_7462), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1647z00_8277)))->BgL_keyz00) =
						((obj_t) BgL_key1419z00_7463), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1647z00_8277)))->BgL_funz00) =
						((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1420z00_7464)),
						BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1647z00_8277)))->BgL_argsz00) =
						((obj_t) BgL_args1421z00_7465), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1647z00_8277)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1422z00_7466), BUNSPEC);
					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_12739;

						{
							obj_t BgL_auxz00_12740;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_objectz00_bglt BgL_tmpz00_12741;

								BgL_tmpz00_12741 = ((BgL_objectz00_bglt) BgL_new1647z00_8277);
								BgL_auxz00_12740 = BGL_OBJECT_WIDENING(BgL_tmpz00_12741);
							}
							BgL_auxz00_12739 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12740);
						}
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12739))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1423z00_7467)), BUNSPEC);
					}
					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_12747;

						{
							obj_t BgL_auxz00_12748;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_objectz00_bglt BgL_tmpz00_12749;

								BgL_tmpz00_12749 = ((BgL_objectz00_bglt) BgL_new1647z00_8277);
								BgL_auxz00_12748 = BGL_OBJECT_WIDENING(BgL_tmpz00_12749);
							}
							BgL_auxz00_12747 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12748);
						}
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12747))->
								BgL_valuezd2approxzd2) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_valuezd2approx1424zd2_7468)), BUNSPEC);
					}
					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_12755;

						{
							obj_t BgL_auxz00_12756;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_objectz00_bglt BgL_tmpz00_12757;

								BgL_tmpz00_12757 = ((BgL_objectz00_bglt) BgL_new1647z00_8277);
								BgL_auxz00_12756 = BGL_OBJECT_WIDENING(BgL_tmpz00_12757);
							}
							BgL_auxz00_12755 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12756);
						}
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12755))->
								BgL_lostzd2stampzd2) =
							((long) BgL_lostzd2stamp1425zd2_8275), BUNSPEC);
					}
					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_12762;

						{
							obj_t BgL_auxz00_12763;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_objectz00_bglt BgL_tmpz00_12764;

								BgL_tmpz00_12764 = ((BgL_objectz00_bglt) BgL_new1647z00_8277);
								BgL_auxz00_12763 = BGL_OBJECT_WIDENING(BgL_tmpz00_12764);
							}
							BgL_auxz00_12762 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12763);
						}
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12762))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_owner1426z00_7470)), BUNSPEC);
					}
					{
						BgL_makezd2structzd2appz00_bglt BgL_auxz00_12770;

						{
							obj_t BgL_auxz00_12771;

							{	/* Cfa/cinfo2.scm 134 */
								BgL_objectz00_bglt BgL_tmpz00_12772;

								BgL_tmpz00_12772 = ((BgL_objectz00_bglt) BgL_new1647z00_8277);
								BgL_auxz00_12771 = BGL_OBJECT_WIDENING(BgL_tmpz00_12772);
							}
							BgL_auxz00_12770 =
								((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12771);
						}
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12770))->
								BgL_stackzd2stampzd2) =
							((obj_t) BgL_stackzd2stamp1427zd2_7471), BUNSPEC);
					}
					return BgL_new1647z00_8277;
				}
			}
		}

	}



/* &<@anonymous:2597> */
	obj_t BGl_z62zc3z04anonymousza32597ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7472)
	{
		{	/* Cfa/cinfo2.scm 134 */
			return BNIL;
		}

	}



/* &lambda2596 */
	obj_t BGl_z62lambda2596z62zzcfa_info2z00(obj_t BgL_envz00_7473,
		obj_t BgL_oz00_7474, obj_t BgL_vz00_7475)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12777;

				{
					obj_t BgL_auxz00_12778;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12779;

						BgL_tmpz00_12779 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7474));
						BgL_auxz00_12778 = BGL_OBJECT_WIDENING(BgL_tmpz00_12779);
					}
					BgL_auxz00_12777 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12778);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12777))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_7475), BUNSPEC);
			}
		}

	}



/* &lambda2595 */
	obj_t BGl_z62lambda2595z62zzcfa_info2z00(obj_t BgL_envz00_7476,
		obj_t BgL_oz00_7477)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12785;

				{
					obj_t BgL_auxz00_12786;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12787;

						BgL_tmpz00_12787 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7477));
						BgL_auxz00_12786 = BGL_OBJECT_WIDENING(BgL_tmpz00_12787);
					}
					BgL_auxz00_12785 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12786);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12785))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &lambda2588 */
	obj_t BGl_z62lambda2588z62zzcfa_info2z00(obj_t BgL_envz00_7478,
		obj_t BgL_oz00_7479, obj_t BgL_vz00_7480)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12793;

				{
					obj_t BgL_auxz00_12794;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12795;

						BgL_tmpz00_12795 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7479));
						BgL_auxz00_12794 = BGL_OBJECT_WIDENING(BgL_tmpz00_12795);
					}
					BgL_auxz00_12793 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12794);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12793))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7480)),
					BUNSPEC);
			}
		}

	}



/* &lambda2587 */
	BgL_variablez00_bglt BGl_z62lambda2587z62zzcfa_info2z00(obj_t BgL_envz00_7481,
		obj_t BgL_oz00_7482)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12802;

				{
					obj_t BgL_auxz00_12803;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12804;

						BgL_tmpz00_12804 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7482));
						BgL_auxz00_12803 = BGL_OBJECT_WIDENING(BgL_tmpz00_12804);
					}
					BgL_auxz00_12802 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12803);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12802))->
					BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:2583> */
	obj_t BGl_z62zc3z04anonymousza32583ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7483)
	{
		{	/* Cfa/cinfo2.scm 134 */
			return BINT(((long) -1));
		}

	}



/* &lambda2582 */
	obj_t BGl_z62lambda2582z62zzcfa_info2z00(obj_t BgL_envz00_7484,
		obj_t BgL_oz00_7485, obj_t BgL_vz00_7486)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{	/* Cfa/cinfo2.scm 134 */
				long BgL_vz00_8291;

				BgL_vz00_8291 = (long) CINT(BgL_vz00_7486);
				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12812;

					{
						obj_t BgL_auxz00_12813;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12814;

							BgL_tmpz00_12814 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7485));
							BgL_auxz00_12813 = BGL_OBJECT_WIDENING(BgL_tmpz00_12814);
						}
						BgL_auxz00_12812 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12813);
					}
					return
						((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12812))->
							BgL_lostzd2stampzd2) = ((long) BgL_vz00_8291), BUNSPEC);
		}}}

	}



/* &lambda2581 */
	obj_t BGl_z62lambda2581z62zzcfa_info2z00(obj_t BgL_envz00_7487,
		obj_t BgL_oz00_7488)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{	/* Cfa/cinfo2.scm 134 */
				long BgL_tmpz00_12820;

				{
					BgL_makezd2structzd2appz00_bglt BgL_auxz00_12821;

					{
						obj_t BgL_auxz00_12822;

						{	/* Cfa/cinfo2.scm 134 */
							BgL_objectz00_bglt BgL_tmpz00_12823;

							BgL_tmpz00_12823 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7488));
							BgL_auxz00_12822 = BGL_OBJECT_WIDENING(BgL_tmpz00_12823);
						}
						BgL_auxz00_12821 =
							((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12822);
					}
					BgL_tmpz00_12820 =
						(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12821))->
						BgL_lostzd2stampzd2);
				}
				return BINT(BgL_tmpz00_12820);
			}
		}

	}



/* &lambda2575 */
	obj_t BGl_z62lambda2575z62zzcfa_info2z00(obj_t BgL_envz00_7489,
		obj_t BgL_oz00_7490, obj_t BgL_vz00_7491)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12830;

				{
					obj_t BgL_auxz00_12831;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12832;

						BgL_tmpz00_12832 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7490));
						BgL_auxz00_12831 = BGL_OBJECT_WIDENING(BgL_tmpz00_12832);
					}
					BgL_auxz00_12830 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12831);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12830))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7491)), BUNSPEC);
			}
		}

	}



/* &lambda2574 */
	BgL_approxz00_bglt BGl_z62lambda2574z62zzcfa_info2z00(obj_t BgL_envz00_7492,
		obj_t BgL_oz00_7493)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12839;

				{
					obj_t BgL_auxz00_12840;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12841;

						BgL_tmpz00_12841 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7493));
						BgL_auxz00_12840 = BGL_OBJECT_WIDENING(BgL_tmpz00_12841);
					}
					BgL_auxz00_12839 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12840);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12839))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &lambda2569 */
	obj_t BGl_z62lambda2569z62zzcfa_info2z00(obj_t BgL_envz00_7494,
		obj_t BgL_oz00_7495, obj_t BgL_vz00_7496)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12847;

				{
					obj_t BgL_auxz00_12848;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12849;

						BgL_tmpz00_12849 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7495));
						BgL_auxz00_12848 = BGL_OBJECT_WIDENING(BgL_tmpz00_12849);
					}
					BgL_auxz00_12847 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12848);
				}
				return
					((((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12847))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7496)), BUNSPEC);
			}
		}

	}



/* &lambda2568 */
	BgL_approxz00_bglt BGl_z62lambda2568z62zzcfa_info2z00(obj_t BgL_envz00_7497,
		obj_t BgL_oz00_7498)
	{
		{	/* Cfa/cinfo2.scm 134 */
			{
				BgL_makezd2structzd2appz00_bglt BgL_auxz00_12856;

				{
					obj_t BgL_auxz00_12857;

					{	/* Cfa/cinfo2.scm 134 */
						BgL_objectz00_bglt BgL_tmpz00_12858;

						BgL_tmpz00_12858 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7498));
						BgL_auxz00_12857 = BGL_OBJECT_WIDENING(BgL_tmpz00_12858);
					}
					BgL_auxz00_12856 =
						((BgL_makezd2structzd2appz00_bglt) BgL_auxz00_12857);
				}
				return
					(((BgL_makezd2structzd2appz00_bglt) COBJECT(BgL_auxz00_12856))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2534 */
	BgL_appz00_bglt BGl_z62lambda2534z62zzcfa_info2z00(obj_t BgL_envz00_7499,
		obj_t BgL_o1414z00_7500)
	{
		{	/* Cfa/cinfo2.scm 132 */
			{	/* Cfa/cinfo2.scm 132 */
				long BgL_arg2535z00_8300;

				{	/* Cfa/cinfo2.scm 132 */
					obj_t BgL_arg2536z00_8301;

					{	/* Cfa/cinfo2.scm 132 */
						obj_t BgL_arg2538z00_8302;

						{	/* Cfa/cinfo2.scm 132 */
							long BgL_arg1816z00_8303;

							{	/* Cfa/cinfo2.scm 132 */
								long BgL_arg1817z00_8304;

								{	/* Cfa/cinfo2.scm 132 */
									long BgL_res2958z00_8305;

									BgL_res2958z00_8305 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1414z00_7500)));
									BgL_arg1817z00_8304 = BgL_res2958z00_8305;
								}
								BgL_arg1816z00_8303 = (BgL_arg1817z00_8304 - OBJECT_TYPE);
							}
							BgL_arg2538z00_8302 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8303);
						}
						BgL_arg2536z00_8301 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2538z00_8302);
					}
					{	/* Cfa/cinfo2.scm 132 */
						long BgL_res2960z00_8306;

						{	/* Cfa/cinfo2.scm 132 */
							obj_t BgL_tmpz00_12870;

							BgL_tmpz00_12870 = ((obj_t) BgL_arg2536z00_8301);
							BgL_res2960z00_8306 = BGL_CLASS_INDEX(BgL_tmpz00_12870);
						}
						BgL_arg2535z00_8300 = BgL_res2960z00_8306;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1414z00_7500)), BgL_arg2535z00_8300);
			}
			{	/* Cfa/cinfo2.scm 132 */
				BgL_objectz00_bglt BgL_tmpz00_12876;

				BgL_tmpz00_12876 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1414z00_7500));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12876, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1414z00_7500));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1414z00_7500));
		}

	}



/* &<@anonymous:2533> */
	obj_t BGl_z62zc3z04anonymousza32533ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7501,
		obj_t BgL_new1413z00_7502)
	{
		{	/* Cfa/cinfo2.scm 132 */
			{
				BgL_appz00_bglt BgL_auxz00_12884;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1413z00_7502))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_12888;

					{	/* Cfa/cinfo2.scm 132 */
						obj_t BgL_classz00_8308;

						BgL_classz00_8308 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 132 */
							obj_t BgL__ortest_1106z00_8309;

							BgL__ortest_1106z00_8309 = BGL_CLASS_NIL(BgL_classz00_8308);
							if (CBOOL(BgL__ortest_1106z00_8309))
								{	/* Cfa/cinfo2.scm 132 */
									BgL_auxz00_12888 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8309);
								}
							else
								{	/* Cfa/cinfo2.scm 132 */
									BgL_auxz00_12888 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8308));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1413z00_7502))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_12888), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1413z00_7502))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1413z00_7502))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_12904;

					{	/* Cfa/cinfo2.scm 132 */
						obj_t BgL_classz00_8310;

						BgL_classz00_8310 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 132 */
							obj_t BgL__ortest_1106z00_8311;

							BgL__ortest_1106z00_8311 = BGL_CLASS_NIL(BgL_classz00_8310);
							if (CBOOL(BgL__ortest_1106z00_8311))
								{	/* Cfa/cinfo2.scm 132 */
									BgL_auxz00_12904 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8311);
								}
							else
								{	/* Cfa/cinfo2.scm 132 */
									BgL_auxz00_12904 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8310));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1413z00_7502))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_12904), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1413z00_7502))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1413z00_7502))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_12884 = ((BgL_appz00_bglt) BgL_new1413z00_7502);
				return ((obj_t) BgL_auxz00_12884);
			}
		}

	}



/* &lambda2531 */
	BgL_appz00_bglt BGl_z62lambda2531z62zzcfa_info2z00(obj_t BgL_envz00_7503,
		obj_t BgL_o1410z00_7504)
	{
		{	/* Cfa/cinfo2.scm 132 */
			{	/* Cfa/cinfo2.scm 132 */
				BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_wide1412z00_8313;

				BgL_wide1412z00_8313 =
					((BgL_prezd2structzd2setz12zd2appzc0_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2structzd2setz12zd2appzc0_bgl))));
				{	/* Cfa/cinfo2.scm 132 */
					obj_t BgL_auxz00_12927;
					BgL_objectz00_bglt BgL_tmpz00_12923;

					BgL_auxz00_12927 = ((obj_t) BgL_wide1412z00_8313);
					BgL_tmpz00_12923 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1410z00_7504)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12923, BgL_auxz00_12927);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1410z00_7504)));
				{	/* Cfa/cinfo2.scm 132 */
					long BgL_arg2532z00_8314;

					{	/* Cfa/cinfo2.scm 132 */
						long BgL_res2957z00_8315;

						BgL_res2957z00_8315 =
							BGL_CLASS_INDEX(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
						BgL_arg2532z00_8314 = BgL_res2957z00_8315;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1410z00_7504))), BgL_arg2532z00_8314);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1410z00_7504)));
			}
		}

	}



/* &lambda2528 */
	BgL_appz00_bglt BGl_z62lambda2528z62zzcfa_info2z00(obj_t BgL_envz00_7505,
		obj_t BgL_loc1403z00_7506, obj_t BgL_type1404z00_7507,
		obj_t BgL_sidezd2effect1405zd2_7508, obj_t BgL_key1406z00_7509,
		obj_t BgL_fun1407z00_7510, obj_t BgL_args1408z00_7511,
		obj_t BgL_stackable1409z00_7512)
	{
		{	/* Cfa/cinfo2.scm 132 */
			{	/* Cfa/cinfo2.scm 132 */
				BgL_appz00_bglt BgL_new1642z00_8318;

				{	/* Cfa/cinfo2.scm 132 */
					BgL_appz00_bglt BgL_tmp1640z00_8319;
					BgL_prezd2structzd2setz12zd2appzc0_bglt BgL_wide1641z00_8320;

					{
						BgL_appz00_bglt BgL_auxz00_12941;

						{	/* Cfa/cinfo2.scm 132 */
							BgL_appz00_bglt BgL_new1639z00_8321;

							BgL_new1639z00_8321 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 132 */
								long BgL_arg2530z00_8322;

								{	/* Cfa/cinfo2.scm 132 */
									long BgL_res2955z00_8323;

									BgL_res2955z00_8323 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2530z00_8322 = BgL_res2955z00_8323;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1639z00_8321),
									BgL_arg2530z00_8322);
							}
							{	/* Cfa/cinfo2.scm 132 */
								BgL_objectz00_bglt BgL_tmpz00_12946;

								BgL_tmpz00_12946 = ((BgL_objectz00_bglt) BgL_new1639z00_8321);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12946, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1639z00_8321);
							BgL_auxz00_12941 = BgL_new1639z00_8321;
						}
						BgL_tmp1640z00_8319 = ((BgL_appz00_bglt) BgL_auxz00_12941);
					}
					BgL_wide1641z00_8320 =
						((BgL_prezd2structzd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2structzd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.scm 132 */
						obj_t BgL_auxz00_12954;
						BgL_objectz00_bglt BgL_tmpz00_12952;

						BgL_auxz00_12954 = ((obj_t) BgL_wide1641z00_8320);
						BgL_tmpz00_12952 = ((BgL_objectz00_bglt) BgL_tmp1640z00_8319);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12952, BgL_auxz00_12954);
					}
					((BgL_objectz00_bglt) BgL_tmp1640z00_8319);
					{	/* Cfa/cinfo2.scm 132 */
						long BgL_arg2529z00_8324;

						{	/* Cfa/cinfo2.scm 132 */
							long BgL_res2956z00_8325;

							BgL_res2956z00_8325 =
								BGL_CLASS_INDEX
								(BGl_prezd2structzd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg2529z00_8324 = BgL_res2956z00_8325;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1640z00_8319), BgL_arg2529z00_8324);
					}
					BgL_new1642z00_8318 = ((BgL_appz00_bglt) BgL_tmp1640z00_8319);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1642z00_8318)))->BgL_locz00) =
					((obj_t) BgL_loc1403z00_7506), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1642z00_8318)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1404z00_7507)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1642z00_8318)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1405zd2_7508), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1642z00_8318)))->BgL_keyz00) =
					((obj_t) BgL_key1406z00_7509), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1642z00_8318)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1407z00_7510)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1642z00_8318)))->
						BgL_argsz00) = ((obj_t) BgL_args1408z00_7511), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1642z00_8318)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1409z00_7512), BUNSPEC);
				return BgL_new1642z00_8318;
			}
		}

	}



/* &lambda2517 */
	BgL_appz00_bglt BGl_z62lambda2517z62zzcfa_info2z00(obj_t BgL_envz00_7513,
		obj_t BgL_o1401z00_7514)
	{
		{	/* Cfa/cinfo2.scm 131 */
			{	/* Cfa/cinfo2.scm 131 */
				long BgL_arg2518z00_8327;

				{	/* Cfa/cinfo2.scm 131 */
					obj_t BgL_arg2519z00_8328;

					{	/* Cfa/cinfo2.scm 131 */
						obj_t BgL_arg2520z00_8329;

						{	/* Cfa/cinfo2.scm 131 */
							long BgL_arg1816z00_8330;

							{	/* Cfa/cinfo2.scm 131 */
								long BgL_arg1817z00_8331;

								{	/* Cfa/cinfo2.scm 131 */
									long BgL_res2952z00_8332;

									BgL_res2952z00_8332 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1401z00_7514)));
									BgL_arg1817z00_8331 = BgL_res2952z00_8332;
								}
								BgL_arg1816z00_8330 = (BgL_arg1817z00_8331 - OBJECT_TYPE);
							}
							BgL_arg2520z00_8329 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8330);
						}
						BgL_arg2519z00_8328 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2520z00_8329);
					}
					{	/* Cfa/cinfo2.scm 131 */
						long BgL_res2954z00_8333;

						{	/* Cfa/cinfo2.scm 131 */
							obj_t BgL_tmpz00_12984;

							BgL_tmpz00_12984 = ((obj_t) BgL_arg2519z00_8328);
							BgL_res2954z00_8333 = BGL_CLASS_INDEX(BgL_tmpz00_12984);
						}
						BgL_arg2518z00_8327 = BgL_res2954z00_8333;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1401z00_7514)), BgL_arg2518z00_8327);
			}
			{	/* Cfa/cinfo2.scm 131 */
				BgL_objectz00_bglt BgL_tmpz00_12990;

				BgL_tmpz00_12990 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1401z00_7514));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_12990, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1401z00_7514));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1401z00_7514));
		}

	}



/* &<@anonymous:2516> */
	obj_t BGl_z62zc3z04anonymousza32516ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7515,
		obj_t BgL_new1400z00_7516)
	{
		{	/* Cfa/cinfo2.scm 131 */
			{
				BgL_appz00_bglt BgL_auxz00_12998;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1400z00_7516))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13002;

					{	/* Cfa/cinfo2.scm 131 */
						obj_t BgL_classz00_8335;

						BgL_classz00_8335 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 131 */
							obj_t BgL__ortest_1106z00_8336;

							BgL__ortest_1106z00_8336 = BGL_CLASS_NIL(BgL_classz00_8335);
							if (CBOOL(BgL__ortest_1106z00_8336))
								{	/* Cfa/cinfo2.scm 131 */
									BgL_auxz00_13002 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8336);
								}
							else
								{	/* Cfa/cinfo2.scm 131 */
									BgL_auxz00_13002 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8335));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1400z00_7516))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13002), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1400z00_7516))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1400z00_7516))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13018;

					{	/* Cfa/cinfo2.scm 131 */
						obj_t BgL_classz00_8337;

						BgL_classz00_8337 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 131 */
							obj_t BgL__ortest_1106z00_8338;

							BgL__ortest_1106z00_8338 = BGL_CLASS_NIL(BgL_classz00_8337);
							if (CBOOL(BgL__ortest_1106z00_8338))
								{	/* Cfa/cinfo2.scm 131 */
									BgL_auxz00_13018 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8338);
								}
							else
								{	/* Cfa/cinfo2.scm 131 */
									BgL_auxz00_13018 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8337));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1400z00_7516))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13018), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1400z00_7516))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1400z00_7516))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_12998 = ((BgL_appz00_bglt) BgL_new1400z00_7516);
				return ((obj_t) BgL_auxz00_12998);
			}
		}

	}



/* &lambda2513 */
	BgL_appz00_bglt BGl_z62lambda2513z62zzcfa_info2z00(obj_t BgL_envz00_7517,
		obj_t BgL_o1397z00_7518)
	{
		{	/* Cfa/cinfo2.scm 131 */
			{	/* Cfa/cinfo2.scm 131 */
				BgL_prezd2structzd2refzd2appzd2_bglt BgL_wide1399z00_8340;

				BgL_wide1399z00_8340 =
					((BgL_prezd2structzd2refzd2appzd2_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2structzd2refzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 131 */
					obj_t BgL_auxz00_13041;
					BgL_objectz00_bglt BgL_tmpz00_13037;

					BgL_auxz00_13041 = ((obj_t) BgL_wide1399z00_8340);
					BgL_tmpz00_13037 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1397z00_7518)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13037, BgL_auxz00_13041);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1397z00_7518)));
				{	/* Cfa/cinfo2.scm 131 */
					long BgL_arg2515z00_8341;

					{	/* Cfa/cinfo2.scm 131 */
						long BgL_res2951z00_8342;

						BgL_res2951z00_8342 =
							BGL_CLASS_INDEX(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
						BgL_arg2515z00_8341 = BgL_res2951z00_8342;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1397z00_7518))), BgL_arg2515z00_8341);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1397z00_7518)));
			}
		}

	}



/* &lambda2507 */
	BgL_appz00_bglt BGl_z62lambda2507z62zzcfa_info2z00(obj_t BgL_envz00_7519,
		obj_t BgL_loc1390z00_7520, obj_t BgL_type1391z00_7521,
		obj_t BgL_sidezd2effect1392zd2_7522, obj_t BgL_key1393z00_7523,
		obj_t BgL_fun1394z00_7524, obj_t BgL_args1395z00_7525,
		obj_t BgL_stackable1396z00_7526)
	{
		{	/* Cfa/cinfo2.scm 131 */
			{	/* Cfa/cinfo2.scm 131 */
				BgL_appz00_bglt BgL_new1637z00_8345;

				{	/* Cfa/cinfo2.scm 131 */
					BgL_appz00_bglt BgL_tmp1635z00_8346;
					BgL_prezd2structzd2refzd2appzd2_bglt BgL_wide1636z00_8347;

					{
						BgL_appz00_bglt BgL_auxz00_13055;

						{	/* Cfa/cinfo2.scm 131 */
							BgL_appz00_bglt BgL_new1634z00_8348;

							BgL_new1634z00_8348 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 131 */
								long BgL_arg2512z00_8349;

								{	/* Cfa/cinfo2.scm 131 */
									long BgL_res2949z00_8350;

									BgL_res2949z00_8350 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2512z00_8349 = BgL_res2949z00_8350;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1634z00_8348),
									BgL_arg2512z00_8349);
							}
							{	/* Cfa/cinfo2.scm 131 */
								BgL_objectz00_bglt BgL_tmpz00_13060;

								BgL_tmpz00_13060 = ((BgL_objectz00_bglt) BgL_new1634z00_8348);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13060, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1634z00_8348);
							BgL_auxz00_13055 = BgL_new1634z00_8348;
						}
						BgL_tmp1635z00_8346 = ((BgL_appz00_bglt) BgL_auxz00_13055);
					}
					BgL_wide1636z00_8347 =
						((BgL_prezd2structzd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2structzd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 131 */
						obj_t BgL_auxz00_13068;
						BgL_objectz00_bglt BgL_tmpz00_13066;

						BgL_auxz00_13068 = ((obj_t) BgL_wide1636z00_8347);
						BgL_tmpz00_13066 = ((BgL_objectz00_bglt) BgL_tmp1635z00_8346);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13066, BgL_auxz00_13068);
					}
					((BgL_objectz00_bglt) BgL_tmp1635z00_8346);
					{	/* Cfa/cinfo2.scm 131 */
						long BgL_arg2508z00_8351;

						{	/* Cfa/cinfo2.scm 131 */
							long BgL_res2950z00_8352;

							BgL_res2950z00_8352 =
								BGL_CLASS_INDEX(BGl_prezd2structzd2refzd2appzd2zzcfa_info2z00);
							BgL_arg2508z00_8351 = BgL_res2950z00_8352;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1635z00_8346), BgL_arg2508z00_8351);
					}
					BgL_new1637z00_8345 = ((BgL_appz00_bglt) BgL_tmp1635z00_8346);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1637z00_8345)))->BgL_locz00) =
					((obj_t) BgL_loc1390z00_7520), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1637z00_8345)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1391z00_7521)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1637z00_8345)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1392zd2_7522), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1637z00_8345)))->BgL_keyz00) =
					((obj_t) BgL_key1393z00_7523), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1637z00_8345)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1394z00_7524)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1637z00_8345)))->
						BgL_argsz00) = ((obj_t) BgL_args1395z00_7525), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1637z00_8345)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1396z00_7526), BUNSPEC);
				return BgL_new1637z00_8345;
			}
		}

	}



/* &lambda2486 */
	BgL_appz00_bglt BGl_z62lambda2486z62zzcfa_info2z00(obj_t BgL_envz00_7527,
		obj_t BgL_o1388z00_7528)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{	/* Cfa/cinfo2.scm 128 */
				long BgL_arg2487z00_8354;

				{	/* Cfa/cinfo2.scm 128 */
					obj_t BgL_arg2488z00_8355;

					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_arg2491z00_8356;

						{	/* Cfa/cinfo2.scm 128 */
							long BgL_arg1816z00_8357;

							{	/* Cfa/cinfo2.scm 128 */
								long BgL_arg1817z00_8358;

								{	/* Cfa/cinfo2.scm 128 */
									long BgL_res2946z00_8359;

									BgL_res2946z00_8359 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1388z00_7528)));
									BgL_arg1817z00_8358 = BgL_res2946z00_8359;
								}
								BgL_arg1816z00_8357 = (BgL_arg1817z00_8358 - OBJECT_TYPE);
							}
							BgL_arg2491z00_8356 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8357);
						}
						BgL_arg2488z00_8355 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2491z00_8356);
					}
					{	/* Cfa/cinfo2.scm 128 */
						long BgL_res2948z00_8360;

						{	/* Cfa/cinfo2.scm 128 */
							obj_t BgL_tmpz00_13098;

							BgL_tmpz00_13098 = ((obj_t) BgL_arg2488z00_8355);
							BgL_res2948z00_8360 = BGL_CLASS_INDEX(BgL_tmpz00_13098);
						}
						BgL_arg2487z00_8354 = BgL_res2948z00_8360;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1388z00_7528)), BgL_arg2487z00_8354);
			}
			{	/* Cfa/cinfo2.scm 128 */
				BgL_objectz00_bglt BgL_tmpz00_13104;

				BgL_tmpz00_13104 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1388z00_7528));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13104, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1388z00_7528));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1388z00_7528));
		}

	}



/* &<@anonymous:2485> */
	obj_t BGl_z62zc3z04anonymousza32485ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7529,
		obj_t BgL_new1387z00_7530)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{
				BgL_appz00_bglt BgL_auxz00_13112;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1387z00_7530))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13116;

					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_classz00_8362;

						BgL_classz00_8362 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 128 */
							obj_t BgL__ortest_1106z00_8363;

							BgL__ortest_1106z00_8363 = BGL_CLASS_NIL(BgL_classz00_8362);
							if (CBOOL(BgL__ortest_1106z00_8363))
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13116 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8363);
								}
							else
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13116 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8362));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1387z00_7530))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13116), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1387z00_7530))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1387z00_7530))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13132;

					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_classz00_8364;

						BgL_classz00_8364 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 128 */
							obj_t BgL__ortest_1106z00_8365;

							BgL__ortest_1106z00_8365 = BGL_CLASS_NIL(BgL_classz00_8364);
							if (CBOOL(BgL__ortest_1106z00_8365))
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13132 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8365);
								}
							else
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13132 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8364));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1387z00_7530))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13132), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1387z00_7530))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1387z00_7530))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_variablez00_bglt BgL_auxz00_13155;
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_13148;

					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_classz00_8366;

						BgL_classz00_8366 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 128 */
							obj_t BgL__ortest_1106z00_8367;

							BgL__ortest_1106z00_8367 = BGL_CLASS_NIL(BgL_classz00_8366);
							if (CBOOL(BgL__ortest_1106z00_8367))
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13155 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8367);
								}
							else
								{	/* Cfa/cinfo2.scm 128 */
									BgL_auxz00_13155 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8366));
								}
						}
					}
					{
						obj_t BgL_auxz00_13149;

						{	/* Cfa/cinfo2.scm 128 */
							BgL_objectz00_bglt BgL_tmpz00_13150;

							BgL_tmpz00_13150 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1387z00_7530));
							BgL_auxz00_13149 = BGL_OBJECT_WIDENING(BgL_tmpz00_13150);
						}
						BgL_auxz00_13148 =
							((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_13149);
					}
					((((BgL_prezd2makezd2structzd2appzd2_bglt)
								COBJECT(BgL_auxz00_13148))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_13155), BUNSPEC);
				}
				BgL_auxz00_13112 = ((BgL_appz00_bglt) BgL_new1387z00_7530);
				return ((obj_t) BgL_auxz00_13112);
			}
		}

	}



/* &lambda2483 */
	BgL_appz00_bglt BGl_z62lambda2483z62zzcfa_info2z00(obj_t BgL_envz00_7531,
		obj_t BgL_o1384z00_7532)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{	/* Cfa/cinfo2.scm 128 */
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_wide1386z00_8369;

				BgL_wide1386z00_8369 =
					((BgL_prezd2makezd2structzd2appzd2_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2structzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 128 */
					obj_t BgL_auxz00_13170;
					BgL_objectz00_bglt BgL_tmpz00_13166;

					BgL_auxz00_13170 = ((obj_t) BgL_wide1386z00_8369);
					BgL_tmpz00_13166 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1384z00_7532)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13166, BgL_auxz00_13170);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1384z00_7532)));
				{	/* Cfa/cinfo2.scm 128 */
					long BgL_arg2484z00_8370;

					{	/* Cfa/cinfo2.scm 128 */
						long BgL_res2945z00_8371;

						BgL_res2945z00_8371 =
							BGL_CLASS_INDEX(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
						BgL_arg2484z00_8370 = BgL_res2945z00_8371;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1384z00_7532))), BgL_arg2484z00_8370);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1384z00_7532)));
			}
		}

	}



/* &lambda2480 */
	BgL_appz00_bglt BGl_z62lambda2480z62zzcfa_info2z00(obj_t BgL_envz00_7533,
		obj_t BgL_loc1376z00_7534, obj_t BgL_type1377z00_7535,
		obj_t BgL_sidezd2effect1378zd2_7536, obj_t BgL_key1379z00_7537,
		obj_t BgL_fun1380z00_7538, obj_t BgL_args1381z00_7539,
		obj_t BgL_stackable1382z00_7540, obj_t BgL_owner1383z00_7541)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{	/* Cfa/cinfo2.scm 128 */
				BgL_appz00_bglt BgL_new1632z00_8375;

				{	/* Cfa/cinfo2.scm 128 */
					BgL_appz00_bglt BgL_tmp1630z00_8376;
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_wide1631z00_8377;

					{
						BgL_appz00_bglt BgL_auxz00_13184;

						{	/* Cfa/cinfo2.scm 128 */
							BgL_appz00_bglt BgL_new1629z00_8378;

							BgL_new1629z00_8378 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 128 */
								long BgL_arg2482z00_8379;

								{	/* Cfa/cinfo2.scm 128 */
									long BgL_res2943z00_8380;

									BgL_res2943z00_8380 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2482z00_8379 = BgL_res2943z00_8380;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1629z00_8378),
									BgL_arg2482z00_8379);
							}
							{	/* Cfa/cinfo2.scm 128 */
								BgL_objectz00_bglt BgL_tmpz00_13189;

								BgL_tmpz00_13189 = ((BgL_objectz00_bglt) BgL_new1629z00_8378);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13189, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1629z00_8378);
							BgL_auxz00_13184 = BgL_new1629z00_8378;
						}
						BgL_tmp1630z00_8376 = ((BgL_appz00_bglt) BgL_auxz00_13184);
					}
					BgL_wide1631z00_8377 =
						((BgL_prezd2makezd2structzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2structzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 128 */
						obj_t BgL_auxz00_13197;
						BgL_objectz00_bglt BgL_tmpz00_13195;

						BgL_auxz00_13197 = ((obj_t) BgL_wide1631z00_8377);
						BgL_tmpz00_13195 = ((BgL_objectz00_bglt) BgL_tmp1630z00_8376);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13195, BgL_auxz00_13197);
					}
					((BgL_objectz00_bglt) BgL_tmp1630z00_8376);
					{	/* Cfa/cinfo2.scm 128 */
						long BgL_arg2481z00_8381;

						{	/* Cfa/cinfo2.scm 128 */
							long BgL_res2944z00_8382;

							BgL_res2944z00_8382 =
								BGL_CLASS_INDEX(BGl_prezd2makezd2structzd2appzd2zzcfa_info2z00);
							BgL_arg2481z00_8381 = BgL_res2944z00_8382;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1630z00_8376), BgL_arg2481z00_8381);
					}
					BgL_new1632z00_8375 = ((BgL_appz00_bglt) BgL_tmp1630z00_8376);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1632z00_8375)))->BgL_locz00) =
					((obj_t) BgL_loc1376z00_7534), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1632z00_8375)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1377z00_7535)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1632z00_8375)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1378zd2_7536), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1632z00_8375)))->BgL_keyz00) =
					((obj_t) BgL_key1379z00_7537), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1632z00_8375)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1380z00_7538)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1632z00_8375)))->
						BgL_argsz00) = ((obj_t) BgL_args1381z00_7539), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1632z00_8375)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1382z00_7540), BUNSPEC);
				{
					BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_13221;

					{
						obj_t BgL_auxz00_13222;

						{	/* Cfa/cinfo2.scm 128 */
							BgL_objectz00_bglt BgL_tmpz00_13223;

							BgL_tmpz00_13223 = ((BgL_objectz00_bglt) BgL_new1632z00_8375);
							BgL_auxz00_13222 = BGL_OBJECT_WIDENING(BgL_tmpz00_13223);
						}
						BgL_auxz00_13221 =
							((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_13222);
					}
					((((BgL_prezd2makezd2structzd2appzd2_bglt)
								COBJECT(BgL_auxz00_13221))->BgL_ownerz00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
								BgL_owner1383z00_7541)), BUNSPEC);
				}
				return BgL_new1632z00_8375;
			}
		}

	}



/* &lambda2499 */
	obj_t BGl_z62lambda2499z62zzcfa_info2z00(obj_t BgL_envz00_7542,
		obj_t BgL_oz00_7543, obj_t BgL_vz00_7544)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_13229;

				{
					obj_t BgL_auxz00_13230;

					{	/* Cfa/cinfo2.scm 128 */
						BgL_objectz00_bglt BgL_tmpz00_13231;

						BgL_tmpz00_13231 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7543));
						BgL_auxz00_13230 = BGL_OBJECT_WIDENING(BgL_tmpz00_13231);
					}
					BgL_auxz00_13229 =
						((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_13230);
				}
				return
					((((BgL_prezd2makezd2structzd2appzd2_bglt)
							COBJECT(BgL_auxz00_13229))->BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7544)),
					BUNSPEC);
			}
		}

	}



/* &lambda2498 */
	BgL_variablez00_bglt BGl_z62lambda2498z62zzcfa_info2z00(obj_t BgL_envz00_7545,
		obj_t BgL_oz00_7546)
	{
		{	/* Cfa/cinfo2.scm 128 */
			{
				BgL_prezd2makezd2structzd2appzd2_bglt BgL_auxz00_13238;

				{
					obj_t BgL_auxz00_13239;

					{	/* Cfa/cinfo2.scm 128 */
						BgL_objectz00_bglt BgL_tmpz00_13240;

						BgL_tmpz00_13240 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7546));
						BgL_auxz00_13239 = BGL_OBJECT_WIDENING(BgL_tmpz00_13240);
					}
					BgL_auxz00_13238 =
						((BgL_prezd2makezd2structzd2appzd2_bglt) BgL_auxz00_13239);
				}
				return
					(((BgL_prezd2makezd2structzd2appzd2_bglt) COBJECT(BgL_auxz00_13238))->
					BgL_ownerz00);
			}
		}

	}



/* &lambda2455 */
	BgL_appz00_bglt BGl_z62lambda2455z62zzcfa_info2z00(obj_t BgL_envz00_7547,
		obj_t BgL_o1374z00_7548)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{	/* Cfa/cinfo2.scm 123 */
				long BgL_arg2456z00_8387;

				{	/* Cfa/cinfo2.scm 123 */
					obj_t BgL_arg2457z00_8388;

					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_arg2458z00_8389;

						{	/* Cfa/cinfo2.scm 123 */
							long BgL_arg1816z00_8390;

							{	/* Cfa/cinfo2.scm 123 */
								long BgL_arg1817z00_8391;

								{	/* Cfa/cinfo2.scm 123 */
									long BgL_res2940z00_8392;

									BgL_res2940z00_8392 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1374z00_7548)));
									BgL_arg1817z00_8391 = BgL_res2940z00_8392;
								}
								BgL_arg1816z00_8390 = (BgL_arg1817z00_8391 - OBJECT_TYPE);
							}
							BgL_arg2458z00_8389 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8390);
						}
						BgL_arg2457z00_8388 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2458z00_8389);
					}
					{	/* Cfa/cinfo2.scm 123 */
						long BgL_res2942z00_8393;

						{	/* Cfa/cinfo2.scm 123 */
							obj_t BgL_tmpz00_13252;

							BgL_tmpz00_13252 = ((obj_t) BgL_arg2457z00_8388);
							BgL_res2942z00_8393 = BGL_CLASS_INDEX(BgL_tmpz00_13252);
						}
						BgL_arg2456z00_8387 = BgL_res2942z00_8393;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1374z00_7548)), BgL_arg2456z00_8387);
			}
			{	/* Cfa/cinfo2.scm 123 */
				BgL_objectz00_bglt BgL_tmpz00_13258;

				BgL_tmpz00_13258 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1374z00_7548));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13258, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1374z00_7548));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1374z00_7548));
		}

	}



/* &<@anonymous:2454> */
	obj_t BGl_z62zc3z04anonymousza32454ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7549,
		obj_t BgL_new1373z00_7550)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{
				BgL_appz00_bglt BgL_auxz00_13266;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1373z00_7550))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13270;

					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_classz00_8395;

						BgL_classz00_8395 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 123 */
							obj_t BgL__ortest_1106z00_8396;

							BgL__ortest_1106z00_8396 = BGL_CLASS_NIL(BgL_classz00_8395);
							if (CBOOL(BgL__ortest_1106z00_8396))
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13270 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8396);
								}
							else
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13270 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8395));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1373z00_7550))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13270), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1373z00_7550))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1373z00_7550))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13286;

					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_classz00_8397;

						BgL_classz00_8397 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 123 */
							obj_t BgL__ortest_1106z00_8398;

							BgL__ortest_1106z00_8398 = BGL_CLASS_NIL(BgL_classz00_8397);
							if (CBOOL(BgL__ortest_1106z00_8398))
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13286 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8398);
								}
							else
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13286 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8397));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1373z00_7550))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13286), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1373z00_7550))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1373z00_7550))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_13309;
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13302;

					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_classz00_8399;

						BgL_classz00_8399 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 123 */
							obj_t BgL__ortest_1106z00_8400;

							BgL__ortest_1106z00_8400 = BGL_CLASS_NIL(BgL_classz00_8399);
							if (CBOOL(BgL__ortest_1106z00_8400))
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13309 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8400);
								}
							else
								{	/* Cfa/cinfo2.scm 123 */
									BgL_auxz00_13309 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8399));
								}
						}
					}
					{
						obj_t BgL_auxz00_13303;

						{	/* Cfa/cinfo2.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_13304;

							BgL_tmpz00_13304 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1373z00_7550));
							BgL_auxz00_13303 = BGL_OBJECT_WIDENING(BgL_tmpz00_13304);
						}
						BgL_auxz00_13302 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13303);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13302))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_13309), BUNSPEC);
				}
				{
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13317;

					{
						obj_t BgL_auxz00_13318;

						{	/* Cfa/cinfo2.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_13319;

							BgL_tmpz00_13319 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1373z00_7550));
							BgL_auxz00_13318 = BGL_OBJECT_WIDENING(BgL_tmpz00_13319);
						}
						BgL_auxz00_13317 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13318);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13317))->
							BgL_getz00) =
						((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				}
				BgL_auxz00_13266 = ((BgL_appz00_bglt) BgL_new1373z00_7550);
				return ((obj_t) BgL_auxz00_13266);
			}
		}

	}



/* &lambda2452 */
	BgL_appz00_bglt BGl_z62lambda2452z62zzcfa_info2z00(obj_t BgL_envz00_7551,
		obj_t BgL_o1370z00_7552)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{	/* Cfa/cinfo2.scm 123 */
				BgL_conszd2setz12zd2appz12_bglt BgL_wide1372z00_8402;

				BgL_wide1372z00_8402 =
					((BgL_conszd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_conszd2setz12zd2appz12_bgl))));
				{	/* Cfa/cinfo2.scm 123 */
					obj_t BgL_auxz00_13332;
					BgL_objectz00_bglt BgL_tmpz00_13328;

					BgL_auxz00_13332 = ((obj_t) BgL_wide1372z00_8402);
					BgL_tmpz00_13328 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1370z00_7552)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13328, BgL_auxz00_13332);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1370z00_7552)));
				{	/* Cfa/cinfo2.scm 123 */
					long BgL_arg2453z00_8403;

					{	/* Cfa/cinfo2.scm 123 */
						long BgL_res2939z00_8404;

						BgL_res2939z00_8404 =
							BGL_CLASS_INDEX(BGl_conszd2setz12zd2appz12zzcfa_info2z00);
						BgL_arg2453z00_8403 = BgL_res2939z00_8404;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1370z00_7552))), BgL_arg2453z00_8403);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1370z00_7552)));
			}
		}

	}



/* &lambda2449 */
	BgL_appz00_bglt BGl_z62lambda2449z62zzcfa_info2z00(obj_t BgL_envz00_7553,
		obj_t BgL_loc1361z00_7554, obj_t BgL_type1362z00_7555,
		obj_t BgL_sidezd2effect1363zd2_7556, obj_t BgL_key1364z00_7557,
		obj_t BgL_fun1365z00_7558, obj_t BgL_args1366z00_7559,
		obj_t BgL_stackable1367z00_7560, obj_t BgL_approx1368z00_7561,
		obj_t BgL_get1369z00_7562)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{	/* Cfa/cinfo2.scm 123 */
				BgL_appz00_bglt BgL_new1627z00_8409;

				{	/* Cfa/cinfo2.scm 123 */
					BgL_appz00_bglt BgL_tmp1625z00_8410;
					BgL_conszd2setz12zd2appz12_bglt BgL_wide1626z00_8411;

					{
						BgL_appz00_bglt BgL_auxz00_13346;

						{	/* Cfa/cinfo2.scm 123 */
							BgL_appz00_bglt BgL_new1624z00_8412;

							BgL_new1624z00_8412 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 123 */
								long BgL_arg2451z00_8413;

								{	/* Cfa/cinfo2.scm 123 */
									long BgL_res2937z00_8414;

									BgL_res2937z00_8414 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2451z00_8413 = BgL_res2937z00_8414;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1624z00_8412),
									BgL_arg2451z00_8413);
							}
							{	/* Cfa/cinfo2.scm 123 */
								BgL_objectz00_bglt BgL_tmpz00_13351;

								BgL_tmpz00_13351 = ((BgL_objectz00_bglt) BgL_new1624z00_8412);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13351, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1624z00_8412);
							BgL_auxz00_13346 = BgL_new1624z00_8412;
						}
						BgL_tmp1625z00_8410 = ((BgL_appz00_bglt) BgL_auxz00_13346);
					}
					BgL_wide1626z00_8411 =
						((BgL_conszd2setz12zd2appz12_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conszd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.scm 123 */
						obj_t BgL_auxz00_13359;
						BgL_objectz00_bglt BgL_tmpz00_13357;

						BgL_auxz00_13359 = ((obj_t) BgL_wide1626z00_8411);
						BgL_tmpz00_13357 = ((BgL_objectz00_bglt) BgL_tmp1625z00_8410);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13357, BgL_auxz00_13359);
					}
					((BgL_objectz00_bglt) BgL_tmp1625z00_8410);
					{	/* Cfa/cinfo2.scm 123 */
						long BgL_arg2450z00_8415;

						{	/* Cfa/cinfo2.scm 123 */
							long BgL_res2938z00_8416;

							BgL_res2938z00_8416 =
								BGL_CLASS_INDEX(BGl_conszd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg2450z00_8415 = BgL_res2938z00_8416;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1625z00_8410), BgL_arg2450z00_8415);
					}
					BgL_new1627z00_8409 = ((BgL_appz00_bglt) BgL_tmp1625z00_8410);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1627z00_8409)))->BgL_locz00) =
					((obj_t) BgL_loc1361z00_7554), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1627z00_8409)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1362z00_7555)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1627z00_8409)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1363zd2_7556), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1627z00_8409)))->BgL_keyz00) =
					((obj_t) BgL_key1364z00_7557), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1627z00_8409)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1365z00_7558)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1627z00_8409)))->
						BgL_argsz00) = ((obj_t) BgL_args1366z00_7559), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1627z00_8409)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1367z00_7560), BUNSPEC);
				{
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13383;

					{
						obj_t BgL_auxz00_13384;

						{	/* Cfa/cinfo2.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_13385;

							BgL_tmpz00_13385 = ((BgL_objectz00_bglt) BgL_new1627z00_8409);
							BgL_auxz00_13384 = BGL_OBJECT_WIDENING(BgL_tmpz00_13385);
						}
						BgL_auxz00_13383 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13384);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13383))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1368z00_7561)), BUNSPEC);
				}
				{
					BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13391;

					{
						obj_t BgL_auxz00_13392;

						{	/* Cfa/cinfo2.scm 123 */
							BgL_objectz00_bglt BgL_tmpz00_13393;

							BgL_tmpz00_13393 = ((BgL_objectz00_bglt) BgL_new1627z00_8409);
							BgL_auxz00_13392 = BGL_OBJECT_WIDENING(BgL_tmpz00_13393);
						}
						BgL_auxz00_13391 =
							((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13392);
					}
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13391))->
							BgL_getz00) = ((obj_t) ((obj_t) BgL_get1369z00_7562)), BUNSPEC);
				}
				return BgL_new1627z00_8409;
			}
		}

	}



/* &lambda2471 */
	obj_t BGl_z62lambda2471z62zzcfa_info2z00(obj_t BgL_envz00_7563,
		obj_t BgL_oz00_7564, obj_t BgL_vz00_7565)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13399;

				{
					obj_t BgL_auxz00_13400;

					{	/* Cfa/cinfo2.scm 123 */
						BgL_objectz00_bglt BgL_tmpz00_13401;

						BgL_tmpz00_13401 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7564));
						BgL_auxz00_13400 = BGL_OBJECT_WIDENING(BgL_tmpz00_13401);
					}
					BgL_auxz00_13399 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13400);
				}
				return
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13399))->
						BgL_getz00) = ((obj_t) ((obj_t) BgL_vz00_7565)), BUNSPEC);
			}
		}

	}



/* &lambda2470 */
	obj_t BGl_z62lambda2470z62zzcfa_info2z00(obj_t BgL_envz00_7566,
		obj_t BgL_oz00_7567)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13408;

				{
					obj_t BgL_auxz00_13409;

					{	/* Cfa/cinfo2.scm 123 */
						BgL_objectz00_bglt BgL_tmpz00_13410;

						BgL_tmpz00_13410 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7567));
						BgL_auxz00_13409 = BGL_OBJECT_WIDENING(BgL_tmpz00_13410);
					}
					BgL_auxz00_13408 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13409);
				}
				return
					(((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13408))->
					BgL_getz00);
			}
		}

	}



/* &lambda2464 */
	obj_t BGl_z62lambda2464z62zzcfa_info2z00(obj_t BgL_envz00_7568,
		obj_t BgL_oz00_7569, obj_t BgL_vz00_7570)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13416;

				{
					obj_t BgL_auxz00_13417;

					{	/* Cfa/cinfo2.scm 123 */
						BgL_objectz00_bglt BgL_tmpz00_13418;

						BgL_tmpz00_13418 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7569));
						BgL_auxz00_13417 = BGL_OBJECT_WIDENING(BgL_tmpz00_13418);
					}
					BgL_auxz00_13416 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13417);
				}
				return
					((((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13416))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7570)), BUNSPEC);
			}
		}

	}



/* &lambda2463 */
	BgL_approxz00_bglt BGl_z62lambda2463z62zzcfa_info2z00(obj_t BgL_envz00_7571,
		obj_t BgL_oz00_7572)
	{
		{	/* Cfa/cinfo2.scm 123 */
			{
				BgL_conszd2setz12zd2appz12_bglt BgL_auxz00_13425;

				{
					obj_t BgL_auxz00_13426;

					{	/* Cfa/cinfo2.scm 123 */
						BgL_objectz00_bglt BgL_tmpz00_13427;

						BgL_tmpz00_13427 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7572));
						BgL_auxz00_13426 = BGL_OBJECT_WIDENING(BgL_tmpz00_13427);
					}
					BgL_auxz00_13425 =
						((BgL_conszd2setz12zd2appz12_bglt) BgL_auxz00_13426);
				}
				return
					(((BgL_conszd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_13425))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2423 */
	BgL_appz00_bglt BGl_z62lambda2423z62zzcfa_info2z00(obj_t BgL_envz00_7573,
		obj_t BgL_o1359z00_7574)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{	/* Cfa/cinfo2.scm 120 */
				long BgL_arg2424z00_8424;

				{	/* Cfa/cinfo2.scm 120 */
					obj_t BgL_arg2425z00_8425;

					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_arg2426z00_8426;

						{	/* Cfa/cinfo2.scm 120 */
							long BgL_arg1816z00_8427;

							{	/* Cfa/cinfo2.scm 120 */
								long BgL_arg1817z00_8428;

								{	/* Cfa/cinfo2.scm 120 */
									long BgL_res2934z00_8429;

									BgL_res2934z00_8429 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1359z00_7574)));
									BgL_arg1817z00_8428 = BgL_res2934z00_8429;
								}
								BgL_arg1816z00_8427 = (BgL_arg1817z00_8428 - OBJECT_TYPE);
							}
							BgL_arg2426z00_8426 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8427);
						}
						BgL_arg2425z00_8425 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2426z00_8426);
					}
					{	/* Cfa/cinfo2.scm 120 */
						long BgL_res2936z00_8430;

						{	/* Cfa/cinfo2.scm 120 */
							obj_t BgL_tmpz00_13439;

							BgL_tmpz00_13439 = ((obj_t) BgL_arg2425z00_8425);
							BgL_res2936z00_8430 = BGL_CLASS_INDEX(BgL_tmpz00_13439);
						}
						BgL_arg2424z00_8424 = BgL_res2936z00_8430;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1359z00_7574)), BgL_arg2424z00_8424);
			}
			{	/* Cfa/cinfo2.scm 120 */
				BgL_objectz00_bglt BgL_tmpz00_13445;

				BgL_tmpz00_13445 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1359z00_7574));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13445, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1359z00_7574));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1359z00_7574));
		}

	}



/* &<@anonymous:2422> */
	obj_t BGl_z62zc3z04anonymousza32422ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7575,
		obj_t BgL_new1358z00_7576)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{
				BgL_appz00_bglt BgL_auxz00_13453;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1358z00_7576))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13457;

					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_classz00_8432;

						BgL_classz00_8432 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 120 */
							obj_t BgL__ortest_1106z00_8433;

							BgL__ortest_1106z00_8433 = BGL_CLASS_NIL(BgL_classz00_8432);
							if (CBOOL(BgL__ortest_1106z00_8433))
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13457 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8433);
								}
							else
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13457 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8432));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1358z00_7576))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13457), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1358z00_7576))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1358z00_7576))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13473;

					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_classz00_8434;

						BgL_classz00_8434 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 120 */
							obj_t BgL__ortest_1106z00_8435;

							BgL__ortest_1106z00_8435 = BGL_CLASS_NIL(BgL_classz00_8434);
							if (CBOOL(BgL__ortest_1106z00_8435))
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13473 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8435);
								}
							else
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13473 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8434));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1358z00_7576))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13473), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1358z00_7576))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1358z00_7576))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_13496;
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_13489;

					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_classz00_8436;

						BgL_classz00_8436 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 120 */
							obj_t BgL__ortest_1106z00_8437;

							BgL__ortest_1106z00_8437 = BGL_CLASS_NIL(BgL_classz00_8436);
							if (CBOOL(BgL__ortest_1106z00_8437))
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13496 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8437);
								}
							else
								{	/* Cfa/cinfo2.scm 120 */
									BgL_auxz00_13496 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8436));
								}
						}
					}
					{
						obj_t BgL_auxz00_13490;

						{	/* Cfa/cinfo2.scm 120 */
							BgL_objectz00_bglt BgL_tmpz00_13491;

							BgL_tmpz00_13491 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1358z00_7576));
							BgL_auxz00_13490 = BGL_OBJECT_WIDENING(BgL_tmpz00_13491);
						}
						BgL_auxz00_13489 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13490);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13489))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_13496), BUNSPEC);
				}
				{
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_13504;

					{
						obj_t BgL_auxz00_13505;

						{	/* Cfa/cinfo2.scm 120 */
							BgL_objectz00_bglt BgL_tmpz00_13506;

							BgL_tmpz00_13506 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1358z00_7576));
							BgL_auxz00_13505 = BGL_OBJECT_WIDENING(BgL_tmpz00_13506);
						}
						BgL_auxz00_13504 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13505);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13504))->
							BgL_getz00) =
						((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				}
				BgL_auxz00_13453 = ((BgL_appz00_bglt) BgL_new1358z00_7576);
				return ((obj_t) BgL_auxz00_13453);
			}
		}

	}



/* &lambda2420 */
	BgL_appz00_bglt BGl_z62lambda2420z62zzcfa_info2z00(obj_t BgL_envz00_7577,
		obj_t BgL_o1355z00_7578)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{	/* Cfa/cinfo2.scm 120 */
				BgL_conszd2refzd2appz00_bglt BgL_wide1357z00_8439;

				BgL_wide1357z00_8439 =
					((BgL_conszd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_conszd2refzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 120 */
					obj_t BgL_auxz00_13519;
					BgL_objectz00_bglt BgL_tmpz00_13515;

					BgL_auxz00_13519 = ((obj_t) BgL_wide1357z00_8439);
					BgL_tmpz00_13515 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1355z00_7578)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13515, BgL_auxz00_13519);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1355z00_7578)));
				{	/* Cfa/cinfo2.scm 120 */
					long BgL_arg2421z00_8440;

					{	/* Cfa/cinfo2.scm 120 */
						long BgL_res2933z00_8441;

						BgL_res2933z00_8441 =
							BGL_CLASS_INDEX(BGl_conszd2refzd2appz00zzcfa_info2z00);
						BgL_arg2421z00_8440 = BgL_res2933z00_8441;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1355z00_7578))), BgL_arg2421z00_8440);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1355z00_7578)));
			}
		}

	}



/* &lambda2416 */
	BgL_appz00_bglt BGl_z62lambda2416z62zzcfa_info2z00(obj_t BgL_envz00_7579,
		obj_t BgL_loc1346z00_7580, obj_t BgL_type1347z00_7581,
		obj_t BgL_sidezd2effect1348zd2_7582, obj_t BgL_key1349z00_7583,
		obj_t BgL_fun1350z00_7584, obj_t BgL_args1351z00_7585,
		obj_t BgL_stackable1352z00_7586, obj_t BgL_approx1353z00_7587,
		obj_t BgL_get1354z00_7588)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{	/* Cfa/cinfo2.scm 120 */
				BgL_appz00_bglt BgL_new1622z00_8446;

				{	/* Cfa/cinfo2.scm 120 */
					BgL_appz00_bglt BgL_tmp1620z00_8447;
					BgL_conszd2refzd2appz00_bglt BgL_wide1621z00_8448;

					{
						BgL_appz00_bglt BgL_auxz00_13533;

						{	/* Cfa/cinfo2.scm 120 */
							BgL_appz00_bglt BgL_new1619z00_8449;

							BgL_new1619z00_8449 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 120 */
								long BgL_arg2419z00_8450;

								{	/* Cfa/cinfo2.scm 120 */
									long BgL_res2931z00_8451;

									BgL_res2931z00_8451 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2419z00_8450 = BgL_res2931z00_8451;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1619z00_8449),
									BgL_arg2419z00_8450);
							}
							{	/* Cfa/cinfo2.scm 120 */
								BgL_objectz00_bglt BgL_tmpz00_13538;

								BgL_tmpz00_13538 = ((BgL_objectz00_bglt) BgL_new1619z00_8449);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13538, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1619z00_8449);
							BgL_auxz00_13533 = BgL_new1619z00_8449;
						}
						BgL_tmp1620z00_8447 = ((BgL_appz00_bglt) BgL_auxz00_13533);
					}
					BgL_wide1621z00_8448 =
						((BgL_conszd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_conszd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.scm 120 */
						obj_t BgL_auxz00_13546;
						BgL_objectz00_bglt BgL_tmpz00_13544;

						BgL_auxz00_13546 = ((obj_t) BgL_wide1621z00_8448);
						BgL_tmpz00_13544 = ((BgL_objectz00_bglt) BgL_tmp1620z00_8447);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13544, BgL_auxz00_13546);
					}
					((BgL_objectz00_bglt) BgL_tmp1620z00_8447);
					{	/* Cfa/cinfo2.scm 120 */
						long BgL_arg2418z00_8452;

						{	/* Cfa/cinfo2.scm 120 */
							long BgL_res2932z00_8453;

							BgL_res2932z00_8453 =
								BGL_CLASS_INDEX(BGl_conszd2refzd2appz00zzcfa_info2z00);
							BgL_arg2418z00_8452 = BgL_res2932z00_8453;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1620z00_8447), BgL_arg2418z00_8452);
					}
					BgL_new1622z00_8446 = ((BgL_appz00_bglt) BgL_tmp1620z00_8447);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1622z00_8446)))->BgL_locz00) =
					((obj_t) BgL_loc1346z00_7580), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1622z00_8446)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1347z00_7581)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1622z00_8446)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1348zd2_7582), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1622z00_8446)))->BgL_keyz00) =
					((obj_t) BgL_key1349z00_7583), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1622z00_8446)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1350z00_7584)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1622z00_8446)))->
						BgL_argsz00) = ((obj_t) BgL_args1351z00_7585), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1622z00_8446)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1352z00_7586), BUNSPEC);
				{
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_13570;

					{
						obj_t BgL_auxz00_13571;

						{	/* Cfa/cinfo2.scm 120 */
							BgL_objectz00_bglt BgL_tmpz00_13572;

							BgL_tmpz00_13572 = ((BgL_objectz00_bglt) BgL_new1622z00_8446);
							BgL_auxz00_13571 = BGL_OBJECT_WIDENING(BgL_tmpz00_13572);
						}
						BgL_auxz00_13570 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13571);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13570))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1353z00_7587)), BUNSPEC);
				}
				{
					BgL_conszd2refzd2appz00_bglt BgL_auxz00_13578;

					{
						obj_t BgL_auxz00_13579;

						{	/* Cfa/cinfo2.scm 120 */
							BgL_objectz00_bglt BgL_tmpz00_13580;

							BgL_tmpz00_13580 = ((BgL_objectz00_bglt) BgL_new1622z00_8446);
							BgL_auxz00_13579 = BGL_OBJECT_WIDENING(BgL_tmpz00_13580);
						}
						BgL_auxz00_13578 =
							((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13579);
					}
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13578))->
							BgL_getz00) = ((obj_t) ((obj_t) BgL_get1354z00_7588)), BUNSPEC);
				}
				return BgL_new1622z00_8446;
			}
		}

	}



/* &lambda2439 */
	obj_t BGl_z62lambda2439z62zzcfa_info2z00(obj_t BgL_envz00_7589,
		obj_t BgL_oz00_7590, obj_t BgL_vz00_7591)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_13586;

				{
					obj_t BgL_auxz00_13587;

					{	/* Cfa/cinfo2.scm 120 */
						BgL_objectz00_bglt BgL_tmpz00_13588;

						BgL_tmpz00_13588 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7590));
						BgL_auxz00_13587 = BGL_OBJECT_WIDENING(BgL_tmpz00_13588);
					}
					BgL_auxz00_13586 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13587);
				}
				return
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13586))->
						BgL_getz00) = ((obj_t) ((obj_t) BgL_vz00_7591)), BUNSPEC);
			}
		}

	}



/* &lambda2438 */
	obj_t BGl_z62lambda2438z62zzcfa_info2z00(obj_t BgL_envz00_7592,
		obj_t BgL_oz00_7593)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_13595;

				{
					obj_t BgL_auxz00_13596;

					{	/* Cfa/cinfo2.scm 120 */
						BgL_objectz00_bglt BgL_tmpz00_13597;

						BgL_tmpz00_13597 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7593));
						BgL_auxz00_13596 = BGL_OBJECT_WIDENING(BgL_tmpz00_13597);
					}
					BgL_auxz00_13595 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13596);
				}
				return
					(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13595))->
					BgL_getz00);
			}
		}

	}



/* &lambda2432 */
	obj_t BGl_z62lambda2432z62zzcfa_info2z00(obj_t BgL_envz00_7594,
		obj_t BgL_oz00_7595, obj_t BgL_vz00_7596)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_13603;

				{
					obj_t BgL_auxz00_13604;

					{	/* Cfa/cinfo2.scm 120 */
						BgL_objectz00_bglt BgL_tmpz00_13605;

						BgL_tmpz00_13605 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7595));
						BgL_auxz00_13604 = BGL_OBJECT_WIDENING(BgL_tmpz00_13605);
					}
					BgL_auxz00_13603 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13604);
				}
				return
					((((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13603))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7596)), BUNSPEC);
			}
		}

	}



/* &lambda2431 */
	BgL_approxz00_bglt BGl_z62lambda2431z62zzcfa_info2z00(obj_t BgL_envz00_7597,
		obj_t BgL_oz00_7598)
	{
		{	/* Cfa/cinfo2.scm 120 */
			{
				BgL_conszd2refzd2appz00_bglt BgL_auxz00_13612;

				{
					obj_t BgL_auxz00_13613;

					{	/* Cfa/cinfo2.scm 120 */
						BgL_objectz00_bglt BgL_tmpz00_13614;

						BgL_tmpz00_13614 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7598));
						BgL_auxz00_13613 = BGL_OBJECT_WIDENING(BgL_tmpz00_13614);
					}
					BgL_auxz00_13612 = ((BgL_conszd2refzd2appz00_bglt) BgL_auxz00_13613);
				}
				return
					(((BgL_conszd2refzd2appz00_bglt) COBJECT(BgL_auxz00_13612))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2361 */
	BgL_appz00_bglt BGl_z62lambda2361z62zzcfa_info2z00(obj_t BgL_envz00_7599,
		obj_t BgL_o1344z00_7600)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				long BgL_arg2362z00_8461;

				{	/* Cfa/cinfo2.scm 99 */
					obj_t BgL_arg2363z00_8462;

					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_arg2364z00_8463;

						{	/* Cfa/cinfo2.scm 99 */
							long BgL_arg1816z00_8464;

							{	/* Cfa/cinfo2.scm 99 */
								long BgL_arg1817z00_8465;

								{	/* Cfa/cinfo2.scm 99 */
									long BgL_res2928z00_8466;

									BgL_res2928z00_8466 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1344z00_7600)));
									BgL_arg1817z00_8465 = BgL_res2928z00_8466;
								}
								BgL_arg1816z00_8464 = (BgL_arg1817z00_8465 - OBJECT_TYPE);
							}
							BgL_arg2364z00_8463 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8464);
						}
						BgL_arg2363z00_8462 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2364z00_8463);
					}
					{	/* Cfa/cinfo2.scm 99 */
						long BgL_res2930z00_8467;

						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL_tmpz00_13626;

							BgL_tmpz00_13626 = ((obj_t) BgL_arg2363z00_8462);
							BgL_res2930z00_8467 = BGL_CLASS_INDEX(BgL_tmpz00_13626);
						}
						BgL_arg2362z00_8461 = BgL_res2930z00_8467;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1344z00_7600)), BgL_arg2362z00_8461);
			}
			{	/* Cfa/cinfo2.scm 99 */
				BgL_objectz00_bglt BgL_tmpz00_13632;

				BgL_tmpz00_13632 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1344z00_7600));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13632, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1344z00_7600));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1344z00_7600));
		}

	}



/* &<@anonymous:2360> */
	obj_t BGl_z62zc3z04anonymousza32360ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7601,
		obj_t BgL_new1343z00_7602)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_appz00_bglt BgL_auxz00_13640;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1343z00_7602))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13644;

					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_classz00_8469;

						BgL_classz00_8469 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL__ortest_1106z00_8470;

							BgL__ortest_1106z00_8470 = BGL_CLASS_NIL(BgL_classz00_8469);
							if (CBOOL(BgL__ortest_1106z00_8470))
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13644 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8470);
								}
							else
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13644 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8469));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1343z00_7602))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13644), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1343z00_7602))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1343z00_7602))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13660;

					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_classz00_8471;

						BgL_classz00_8471 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL__ortest_1106z00_8472;

							BgL__ortest_1106z00_8472 = BGL_CLASS_NIL(BgL_classz00_8471);
							if (CBOOL(BgL__ortest_1106z00_8472))
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13660 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8472);
								}
							else
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13660 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8471));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1343z00_7602))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13660), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1343z00_7602))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1343z00_7602))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_13683;
					BgL_conszd2appzd2_bglt BgL_auxz00_13676;

					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_classz00_8473;

						BgL_classz00_8473 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL__ortest_1106z00_8474;

							BgL__ortest_1106z00_8474 = BGL_CLASS_NIL(BgL_classz00_8473);
							if (CBOOL(BgL__ortest_1106z00_8474))
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13683 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8474);
								}
							else
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13683 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8473));
								}
						}
					}
					{
						obj_t BgL_auxz00_13677;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13678;

							BgL_tmpz00_13678 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13677 = BGL_OBJECT_WIDENING(BgL_tmpz00_13678);
						}
						BgL_auxz00_13676 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13677);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13676))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_13683), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13691;

					{
						obj_t BgL_auxz00_13692;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13693;

							BgL_tmpz00_13693 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13692 = BGL_OBJECT_WIDENING(BgL_tmpz00_13693);
						}
						BgL_auxz00_13691 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13692);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13691))->
							BgL_approxesz00) =
						((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13700;

					{
						obj_t BgL_auxz00_13701;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13702;

							BgL_tmpz00_13702 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13701 = BGL_OBJECT_WIDENING(BgL_tmpz00_13702);
						}
						BgL_auxz00_13700 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13701);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13700))->
							BgL_lostzd2stampzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_13715;
					BgL_conszd2appzd2_bglt BgL_auxz00_13708;

					{	/* Cfa/cinfo2.scm 99 */
						obj_t BgL_classz00_8475;

						BgL_classz00_8475 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL__ortest_1106z00_8476;

							BgL__ortest_1106z00_8476 = BGL_CLASS_NIL(BgL_classz00_8475);
							if (CBOOL(BgL__ortest_1106z00_8476))
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13715 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8476);
								}
							else
								{	/* Cfa/cinfo2.scm 99 */
									BgL_auxz00_13715 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8475));
								}
						}
					}
					{
						obj_t BgL_auxz00_13709;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13710;

							BgL_tmpz00_13710 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13709 = BGL_OBJECT_WIDENING(BgL_tmpz00_13710);
						}
						BgL_auxz00_13708 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13709);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13708))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_13715), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13723;

					{
						obj_t BgL_auxz00_13724;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13725;

							BgL_tmpz00_13725 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13724 = BGL_OBJECT_WIDENING(BgL_tmpz00_13725);
						}
						BgL_auxz00_13723 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13724);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13723))->
							BgL_stackzd2stampzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13731;

					{
						obj_t BgL_auxz00_13732;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13733;

							BgL_tmpz00_13733 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1343z00_7602));
							BgL_auxz00_13732 = BGL_OBJECT_WIDENING(BgL_tmpz00_13733);
						}
						BgL_auxz00_13731 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13732);
					}
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13731))->
							BgL_seenzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_13640 = ((BgL_appz00_bglt) BgL_new1343z00_7602);
				return ((obj_t) BgL_auxz00_13640);
			}
		}

	}



/* &lambda2358 */
	BgL_appz00_bglt BGl_z62lambda2358z62zzcfa_info2z00(obj_t BgL_envz00_7603,
		obj_t BgL_o1340z00_7604)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				BgL_conszd2appzd2_bglt BgL_wide1342z00_8478;

				BgL_wide1342z00_8478 =
					((BgL_conszd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_conszd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 99 */
					obj_t BgL_auxz00_13746;
					BgL_objectz00_bglt BgL_tmpz00_13742;

					BgL_auxz00_13746 = ((obj_t) BgL_wide1342z00_8478);
					BgL_tmpz00_13742 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1340z00_7604)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13742, BgL_auxz00_13746);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1340z00_7604)));
				{	/* Cfa/cinfo2.scm 99 */
					long BgL_arg2359z00_8479;

					{	/* Cfa/cinfo2.scm 99 */
						long BgL_res2927z00_8480;

						BgL_res2927z00_8480 =
							BGL_CLASS_INDEX(BGl_conszd2appzd2zzcfa_info2z00);
						BgL_arg2359z00_8479 = BgL_res2927z00_8480;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1340z00_7604))), BgL_arg2359z00_8479);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1340z00_7604)));
			}
		}

	}



/* &lambda2355 */
	BgL_appz00_bglt BGl_z62lambda2355z62zzcfa_info2z00(obj_t BgL_envz00_7605,
		obj_t BgL_loc1327z00_7606, obj_t BgL_type1328z00_7607,
		obj_t BgL_sidezd2effect1329zd2_7608, obj_t BgL_key1330z00_7609,
		obj_t BgL_fun1331z00_7610, obj_t BgL_args1332z00_7611,
		obj_t BgL_stackable1333z00_7612, obj_t BgL_approx1334z00_7613,
		obj_t BgL_approxes1335z00_7614, obj_t BgL_lostzd2stamp1336zd2_7615,
		obj_t BgL_owner1337z00_7616, obj_t BgL_stackzd2stamp1338zd2_7617,
		obj_t BgL_seenzf31339zf3_7618)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				long BgL_lostzd2stamp1336zd2_8485;
				bool_t BgL_seenzf31339zf3_8487;

				BgL_lostzd2stamp1336zd2_8485 =
					(long) CINT(BgL_lostzd2stamp1336zd2_7615);
				BgL_seenzf31339zf3_8487 = CBOOL(BgL_seenzf31339zf3_7618);
				{	/* Cfa/cinfo2.scm 99 */
					BgL_appz00_bglt BgL_new1617z00_8488;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_appz00_bglt BgL_tmp1615z00_8489;
						BgL_conszd2appzd2_bglt BgL_wide1616z00_8490;

						{
							BgL_appz00_bglt BgL_auxz00_13762;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_appz00_bglt BgL_new1614z00_8491;

								BgL_new1614z00_8491 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Cfa/cinfo2.scm 99 */
									long BgL_arg2357z00_8492;

									{	/* Cfa/cinfo2.scm 99 */
										long BgL_res2925z00_8493;

										BgL_res2925z00_8493 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg2357z00_8492 = BgL_res2925z00_8493;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1614z00_8491),
										BgL_arg2357z00_8492);
								}
								{	/* Cfa/cinfo2.scm 99 */
									BgL_objectz00_bglt BgL_tmpz00_13767;

									BgL_tmpz00_13767 = ((BgL_objectz00_bglt) BgL_new1614z00_8491);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13767, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1614z00_8491);
								BgL_auxz00_13762 = BgL_new1614z00_8491;
							}
							BgL_tmp1615z00_8489 = ((BgL_appz00_bglt) BgL_auxz00_13762);
						}
						BgL_wide1616z00_8490 =
							((BgL_conszd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_conszd2appzd2_bgl))));
						{	/* Cfa/cinfo2.scm 99 */
							obj_t BgL_auxz00_13775;
							BgL_objectz00_bglt BgL_tmpz00_13773;

							BgL_auxz00_13775 = ((obj_t) BgL_wide1616z00_8490);
							BgL_tmpz00_13773 = ((BgL_objectz00_bglt) BgL_tmp1615z00_8489);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13773, BgL_auxz00_13775);
						}
						((BgL_objectz00_bglt) BgL_tmp1615z00_8489);
						{	/* Cfa/cinfo2.scm 99 */
							long BgL_arg2356z00_8494;

							{	/* Cfa/cinfo2.scm 99 */
								long BgL_res2926z00_8495;

								BgL_res2926z00_8495 =
									BGL_CLASS_INDEX(BGl_conszd2appzd2zzcfa_info2z00);
								BgL_arg2356z00_8494 = BgL_res2926z00_8495;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1615z00_8489),
								BgL_arg2356z00_8494);
						}
						BgL_new1617z00_8488 = ((BgL_appz00_bglt) BgL_tmp1615z00_8489);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1617z00_8488)))->BgL_locz00) =
						((obj_t) BgL_loc1327z00_7606), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1617z00_8488)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1328z00_7607)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1617z00_8488)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1329zd2_7608), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1617z00_8488)))->BgL_keyz00) =
						((obj_t) BgL_key1330z00_7609), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1617z00_8488)))->BgL_funz00) =
						((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1331z00_7610)),
						BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1617z00_8488)))->BgL_argsz00) =
						((obj_t) BgL_args1332z00_7611), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1617z00_8488)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1333z00_7612), BUNSPEC);
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13799;

						{
							obj_t BgL_auxz00_13800;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13801;

								BgL_tmpz00_13801 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13800 = BGL_OBJECT_WIDENING(BgL_tmpz00_13801);
							}
							BgL_auxz00_13799 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13800);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13799))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1334z00_7613)), BUNSPEC);
					}
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13807;

						{
							obj_t BgL_auxz00_13808;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13809;

								BgL_tmpz00_13809 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13808 = BGL_OBJECT_WIDENING(BgL_tmpz00_13809);
							}
							BgL_auxz00_13807 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13808);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13807))->
								BgL_approxesz00) =
							((obj_t) ((obj_t) BgL_approxes1335z00_7614)), BUNSPEC);
					}
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13815;

						{
							obj_t BgL_auxz00_13816;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13817;

								BgL_tmpz00_13817 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13816 = BGL_OBJECT_WIDENING(BgL_tmpz00_13817);
							}
							BgL_auxz00_13815 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13816);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13815))->
								BgL_lostzd2stampzd2) =
							((long) BgL_lostzd2stamp1336zd2_8485), BUNSPEC);
					}
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13822;

						{
							obj_t BgL_auxz00_13823;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13824;

								BgL_tmpz00_13824 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13823 = BGL_OBJECT_WIDENING(BgL_tmpz00_13824);
							}
							BgL_auxz00_13822 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13823);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13822))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_owner1337z00_7616)), BUNSPEC);
					}
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13830;

						{
							obj_t BgL_auxz00_13831;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13832;

								BgL_tmpz00_13832 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13831 = BGL_OBJECT_WIDENING(BgL_tmpz00_13832);
							}
							BgL_auxz00_13830 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13831);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13830))->
								BgL_stackzd2stampzd2) =
							((obj_t) BgL_stackzd2stamp1338zd2_7617), BUNSPEC);
					}
					{
						BgL_conszd2appzd2_bglt BgL_auxz00_13837;

						{
							obj_t BgL_auxz00_13838;

							{	/* Cfa/cinfo2.scm 99 */
								BgL_objectz00_bglt BgL_tmpz00_13839;

								BgL_tmpz00_13839 = ((BgL_objectz00_bglt) BgL_new1617z00_8488);
								BgL_auxz00_13838 = BGL_OBJECT_WIDENING(BgL_tmpz00_13839);
							}
							BgL_auxz00_13837 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13838);
						}
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13837))->
								BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31339zf3_8487), BUNSPEC);
					}
					return BgL_new1617z00_8488;
				}
			}
		}

	}



/* &<@anonymous:2408> */
	obj_t BGl_z62zc3z04anonymousza32408ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7619)
	{
		{	/* Cfa/cinfo2.scm 99 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2407 */
	obj_t BGl_z62lambda2407z62zzcfa_info2z00(obj_t BgL_envz00_7620,
		obj_t BgL_oz00_7621, obj_t BgL_vz00_7622)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				bool_t BgL_vz00_8497;

				BgL_vz00_8497 = CBOOL(BgL_vz00_7622);
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13846;

					{
						obj_t BgL_auxz00_13847;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13848;

							BgL_tmpz00_13848 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7621));
							BgL_auxz00_13847 = BGL_OBJECT_WIDENING(BgL_tmpz00_13848);
						}
						BgL_auxz00_13846 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13847);
					}
					return
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13846))->
							BgL_seenzf3zf3) = ((bool_t) BgL_vz00_8497), BUNSPEC);
				}
			}
		}

	}



/* &lambda2406 */
	obj_t BGl_z62lambda2406z62zzcfa_info2z00(obj_t BgL_envz00_7623,
		obj_t BgL_oz00_7624)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				bool_t BgL_tmpz00_13854;

				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13855;

					{
						obj_t BgL_auxz00_13856;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13857;

							BgL_tmpz00_13857 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7624));
							BgL_auxz00_13856 = BGL_OBJECT_WIDENING(BgL_tmpz00_13857);
						}
						BgL_auxz00_13855 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13856);
					}
					BgL_tmpz00_13854 =
						(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13855))->
						BgL_seenzf3zf3);
				}
				return BBOOL(BgL_tmpz00_13854);
			}
		}

	}



/* &<@anonymous:2398> */
	obj_t BGl_z62zc3z04anonymousza32398ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7625)
	{
		{	/* Cfa/cinfo2.scm 99 */
			return BNIL;
		}

	}



/* &lambda2397 */
	obj_t BGl_z62lambda2397z62zzcfa_info2z00(obj_t BgL_envz00_7626,
		obj_t BgL_oz00_7627, obj_t BgL_vz00_7628)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13864;

				{
					obj_t BgL_auxz00_13865;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13866;

						BgL_tmpz00_13866 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7627));
						BgL_auxz00_13865 = BGL_OBJECT_WIDENING(BgL_tmpz00_13866);
					}
					BgL_auxz00_13864 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13865);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13864))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_7628), BUNSPEC);
			}
		}

	}



/* &lambda2396 */
	obj_t BGl_z62lambda2396z62zzcfa_info2z00(obj_t BgL_envz00_7629,
		obj_t BgL_oz00_7630)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13872;

				{
					obj_t BgL_auxz00_13873;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13874;

						BgL_tmpz00_13874 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7630));
						BgL_auxz00_13873 = BGL_OBJECT_WIDENING(BgL_tmpz00_13874);
					}
					BgL_auxz00_13872 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13873);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13872))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &lambda2390 */
	obj_t BGl_z62lambda2390z62zzcfa_info2z00(obj_t BgL_envz00_7631,
		obj_t BgL_oz00_7632, obj_t BgL_vz00_7633)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13880;

				{
					obj_t BgL_auxz00_13881;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13882;

						BgL_tmpz00_13882 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7632));
						BgL_auxz00_13881 = BGL_OBJECT_WIDENING(BgL_tmpz00_13882);
					}
					BgL_auxz00_13880 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13881);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13880))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7633)),
					BUNSPEC);
			}
		}

	}



/* &lambda2389 */
	BgL_variablez00_bglt BGl_z62lambda2389z62zzcfa_info2z00(obj_t BgL_envz00_7634,
		obj_t BgL_oz00_7635)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13889;

				{
					obj_t BgL_auxz00_13890;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13891;

						BgL_tmpz00_13891 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7635));
						BgL_auxz00_13890 = BGL_OBJECT_WIDENING(BgL_tmpz00_13891);
					}
					BgL_auxz00_13889 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13890);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13889))->BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:2383> */
	obj_t BGl_z62zc3z04anonymousza32383ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7636)
	{
		{	/* Cfa/cinfo2.scm 99 */
			return BINT(((long) -1));
		}

	}



/* &lambda2382 */
	obj_t BGl_z62lambda2382z62zzcfa_info2z00(obj_t BgL_envz00_7637,
		obj_t BgL_oz00_7638, obj_t BgL_vz00_7639)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				long BgL_vz00_8505;

				BgL_vz00_8505 = (long) CINT(BgL_vz00_7639);
				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13899;

					{
						obj_t BgL_auxz00_13900;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13901;

							BgL_tmpz00_13901 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7638));
							BgL_auxz00_13900 = BGL_OBJECT_WIDENING(BgL_tmpz00_13901);
						}
						BgL_auxz00_13899 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13900);
					}
					return
						((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13899))->
							BgL_lostzd2stampzd2) = ((long) BgL_vz00_8505), BUNSPEC);
		}}}

	}



/* &lambda2381 */
	obj_t BGl_z62lambda2381z62zzcfa_info2z00(obj_t BgL_envz00_7640,
		obj_t BgL_oz00_7641)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{	/* Cfa/cinfo2.scm 99 */
				long BgL_tmpz00_13907;

				{
					BgL_conszd2appzd2_bglt BgL_auxz00_13908;

					{
						obj_t BgL_auxz00_13909;

						{	/* Cfa/cinfo2.scm 99 */
							BgL_objectz00_bglt BgL_tmpz00_13910;

							BgL_tmpz00_13910 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7641));
							BgL_auxz00_13909 = BGL_OBJECT_WIDENING(BgL_tmpz00_13910);
						}
						BgL_auxz00_13908 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13909);
					}
					BgL_tmpz00_13907 =
						(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13908))->
						BgL_lostzd2stampzd2);
				}
				return BINT(BgL_tmpz00_13907);
			}
		}

	}



/* &lambda2374 */
	obj_t BGl_z62lambda2374z62zzcfa_info2z00(obj_t BgL_envz00_7642,
		obj_t BgL_oz00_7643, obj_t BgL_vz00_7644)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13917;

				{
					obj_t BgL_auxz00_13918;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13919;

						BgL_tmpz00_13919 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7643));
						BgL_auxz00_13918 = BGL_OBJECT_WIDENING(BgL_tmpz00_13919);
					}
					BgL_auxz00_13917 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13918);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13917))->
						BgL_approxesz00) = ((obj_t) ((obj_t) BgL_vz00_7644)), BUNSPEC);
			}
		}

	}



/* &lambda2373 */
	obj_t BGl_z62lambda2373z62zzcfa_info2z00(obj_t BgL_envz00_7645,
		obj_t BgL_oz00_7646)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13926;

				{
					obj_t BgL_auxz00_13927;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13928;

						BgL_tmpz00_13928 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7646));
						BgL_auxz00_13927 = BGL_OBJECT_WIDENING(BgL_tmpz00_13928);
					}
					BgL_auxz00_13926 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13927);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13926))->
					BgL_approxesz00);
			}
		}

	}



/* &lambda2369 */
	obj_t BGl_z62lambda2369z62zzcfa_info2z00(obj_t BgL_envz00_7647,
		obj_t BgL_oz00_7648, obj_t BgL_vz00_7649)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13934;

				{
					obj_t BgL_auxz00_13935;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13936;

						BgL_tmpz00_13936 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7648));
						BgL_auxz00_13935 = BGL_OBJECT_WIDENING(BgL_tmpz00_13936);
					}
					BgL_auxz00_13934 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13935);
				}
				return
					((((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13934))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7649)), BUNSPEC);
			}
		}

	}



/* &lambda2368 */
	BgL_approxz00_bglt BGl_z62lambda2368z62zzcfa_info2z00(obj_t BgL_envz00_7650,
		obj_t BgL_oz00_7651)
	{
		{	/* Cfa/cinfo2.scm 99 */
			{
				BgL_conszd2appzd2_bglt BgL_auxz00_13943;

				{
					obj_t BgL_auxz00_13944;

					{	/* Cfa/cinfo2.scm 99 */
						BgL_objectz00_bglt BgL_tmpz00_13945;

						BgL_tmpz00_13945 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7651));
						BgL_auxz00_13944 = BGL_OBJECT_WIDENING(BgL_tmpz00_13945);
					}
					BgL_auxz00_13943 = ((BgL_conszd2appzd2_bglt) BgL_auxz00_13944);
				}
				return
					(((BgL_conszd2appzd2_bglt) COBJECT(BgL_auxz00_13943))->BgL_approxz00);
			}
		}

	}



/* &lambda2339 */
	BgL_appz00_bglt BGl_z62lambda2339z62zzcfa_info2z00(obj_t BgL_envz00_7652,
		obj_t BgL_o1325z00_7653)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{	/* Cfa/cinfo2.scm 96 */
				long BgL_arg2340z00_8514;

				{	/* Cfa/cinfo2.scm 96 */
					obj_t BgL_arg2341z00_8515;

					{	/* Cfa/cinfo2.scm 96 */
						obj_t BgL_arg2342z00_8516;

						{	/* Cfa/cinfo2.scm 96 */
							long BgL_arg1816z00_8517;

							{	/* Cfa/cinfo2.scm 96 */
								long BgL_arg1817z00_8518;

								{	/* Cfa/cinfo2.scm 96 */
									long BgL_res2922z00_8519;

									BgL_res2922z00_8519 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1325z00_7653)));
									BgL_arg1817z00_8518 = BgL_res2922z00_8519;
								}
								BgL_arg1816z00_8517 = (BgL_arg1817z00_8518 - OBJECT_TYPE);
							}
							BgL_arg2342z00_8516 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8517);
						}
						BgL_arg2341z00_8515 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2342z00_8516);
					}
					{	/* Cfa/cinfo2.scm 96 */
						long BgL_res2924z00_8520;

						{	/* Cfa/cinfo2.scm 96 */
							obj_t BgL_tmpz00_13957;

							BgL_tmpz00_13957 = ((obj_t) BgL_arg2341z00_8515);
							BgL_res2924z00_8520 = BGL_CLASS_INDEX(BgL_tmpz00_13957);
						}
						BgL_arg2340z00_8514 = BgL_res2924z00_8520;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1325z00_7653)), BgL_arg2340z00_8514);
			}
			{	/* Cfa/cinfo2.scm 96 */
				BgL_objectz00_bglt BgL_tmpz00_13963;

				BgL_tmpz00_13963 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1325z00_7653));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_13963, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1325z00_7653));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1325z00_7653));
		}

	}



/* &<@anonymous:2338> */
	obj_t BGl_z62zc3z04anonymousza32338ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7654,
		obj_t BgL_new1324z00_7655)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{
				BgL_appz00_bglt BgL_auxz00_13971;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1324z00_7655))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_13975;

					{	/* Cfa/cinfo2.scm 96 */
						obj_t BgL_classz00_8522;

						BgL_classz00_8522 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 96 */
							obj_t BgL__ortest_1106z00_8523;

							BgL__ortest_1106z00_8523 = BGL_CLASS_NIL(BgL_classz00_8522);
							if (CBOOL(BgL__ortest_1106z00_8523))
								{	/* Cfa/cinfo2.scm 96 */
									BgL_auxz00_13975 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8523);
								}
							else
								{	/* Cfa/cinfo2.scm 96 */
									BgL_auxz00_13975 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8522));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1324z00_7655))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_13975), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1324z00_7655))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1324z00_7655))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_13991;

					{	/* Cfa/cinfo2.scm 96 */
						obj_t BgL_classz00_8524;

						BgL_classz00_8524 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 96 */
							obj_t BgL__ortest_1106z00_8525;

							BgL__ortest_1106z00_8525 = BGL_CLASS_NIL(BgL_classz00_8524);
							if (CBOOL(BgL__ortest_1106z00_8525))
								{	/* Cfa/cinfo2.scm 96 */
									BgL_auxz00_13991 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8525);
								}
							else
								{	/* Cfa/cinfo2.scm 96 */
									BgL_auxz00_13991 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8524));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1324z00_7655))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_13991), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1324z00_7655))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1324z00_7655))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_14007;

					{
						obj_t BgL_auxz00_14008;

						{	/* Cfa/cinfo2.scm 96 */
							BgL_objectz00_bglt BgL_tmpz00_14009;

							BgL_tmpz00_14009 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1324z00_7655));
							BgL_auxz00_14008 = BGL_OBJECT_WIDENING(BgL_tmpz00_14009);
						}
						BgL_auxz00_14007 =
							((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_14008);
					}
					((((BgL_prezd2conszd2setz12zd2appzc0_bglt)
								COBJECT(BgL_auxz00_14007))->BgL_getz00) =
						((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				}
				BgL_auxz00_13971 = ((BgL_appz00_bglt) BgL_new1324z00_7655);
				return ((obj_t) BgL_auxz00_13971);
			}
		}

	}



/* &lambda2336 */
	BgL_appz00_bglt BGl_z62lambda2336z62zzcfa_info2z00(obj_t BgL_envz00_7656,
		obj_t BgL_o1321z00_7657)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{	/* Cfa/cinfo2.scm 96 */
				BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_wide1323z00_8527;

				BgL_wide1323z00_8527 =
					((BgL_prezd2conszd2setz12zd2appzc0_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2conszd2setz12zd2appzc0_bgl))));
				{	/* Cfa/cinfo2.scm 96 */
					obj_t BgL_auxz00_14022;
					BgL_objectz00_bglt BgL_tmpz00_14018;

					BgL_auxz00_14022 = ((obj_t) BgL_wide1323z00_8527);
					BgL_tmpz00_14018 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1321z00_7657)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14018, BgL_auxz00_14022);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1321z00_7657)));
				{	/* Cfa/cinfo2.scm 96 */
					long BgL_arg2337z00_8528;

					{	/* Cfa/cinfo2.scm 96 */
						long BgL_res2921z00_8529;

						BgL_res2921z00_8529 =
							BGL_CLASS_INDEX(BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
						BgL_arg2337z00_8528 = BgL_res2921z00_8529;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1321z00_7657))), BgL_arg2337z00_8528);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1321z00_7657)));
			}
		}

	}



/* &lambda2333 */
	BgL_appz00_bglt BGl_z62lambda2333z62zzcfa_info2z00(obj_t BgL_envz00_7658,
		obj_t BgL_loc1313z00_7659, obj_t BgL_type1314z00_7660,
		obj_t BgL_sidezd2effect1315zd2_7661, obj_t BgL_key1316z00_7662,
		obj_t BgL_fun1317z00_7663, obj_t BgL_args1318z00_7664,
		obj_t BgL_stackable1319z00_7665, obj_t BgL_get1320z00_7666)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{	/* Cfa/cinfo2.scm 96 */
				BgL_appz00_bglt BgL_new1612z00_8533;

				{	/* Cfa/cinfo2.scm 96 */
					BgL_appz00_bglt BgL_tmp1610z00_8534;
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_wide1611z00_8535;

					{
						BgL_appz00_bglt BgL_auxz00_14036;

						{	/* Cfa/cinfo2.scm 96 */
							BgL_appz00_bglt BgL_new1609z00_8536;

							BgL_new1609z00_8536 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 96 */
								long BgL_arg2335z00_8537;

								{	/* Cfa/cinfo2.scm 96 */
									long BgL_res2919z00_8538;

									BgL_res2919z00_8538 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2335z00_8537 = BgL_res2919z00_8538;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1609z00_8536),
									BgL_arg2335z00_8537);
							}
							{	/* Cfa/cinfo2.scm 96 */
								BgL_objectz00_bglt BgL_tmpz00_14041;

								BgL_tmpz00_14041 = ((BgL_objectz00_bglt) BgL_new1609z00_8536);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14041, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1609z00_8536);
							BgL_auxz00_14036 = BgL_new1609z00_8536;
						}
						BgL_tmp1610z00_8534 = ((BgL_appz00_bglt) BgL_auxz00_14036);
					}
					BgL_wide1611z00_8535 =
						((BgL_prezd2conszd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.scm 96 */
						obj_t BgL_auxz00_14049;
						BgL_objectz00_bglt BgL_tmpz00_14047;

						BgL_auxz00_14049 = ((obj_t) BgL_wide1611z00_8535);
						BgL_tmpz00_14047 = ((BgL_objectz00_bglt) BgL_tmp1610z00_8534);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14047, BgL_auxz00_14049);
					}
					((BgL_objectz00_bglt) BgL_tmp1610z00_8534);
					{	/* Cfa/cinfo2.scm 96 */
						long BgL_arg2334z00_8539;

						{	/* Cfa/cinfo2.scm 96 */
							long BgL_res2920z00_8540;

							BgL_res2920z00_8540 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg2334z00_8539 = BgL_res2920z00_8540;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1610z00_8534), BgL_arg2334z00_8539);
					}
					BgL_new1612z00_8533 = ((BgL_appz00_bglt) BgL_tmp1610z00_8534);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1612z00_8533)))->BgL_locz00) =
					((obj_t) BgL_loc1313z00_7659), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1612z00_8533)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1314z00_7660)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1612z00_8533)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1315zd2_7661), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1612z00_8533)))->BgL_keyz00) =
					((obj_t) BgL_key1316z00_7662), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1612z00_8533)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1317z00_7663)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1612z00_8533)))->
						BgL_argsz00) = ((obj_t) BgL_args1318z00_7664), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1612z00_8533)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1319z00_7665), BUNSPEC);
				{
					BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_14073;

					{
						obj_t BgL_auxz00_14074;

						{	/* Cfa/cinfo2.scm 96 */
							BgL_objectz00_bglt BgL_tmpz00_14075;

							BgL_tmpz00_14075 = ((BgL_objectz00_bglt) BgL_new1612z00_8533);
							BgL_auxz00_14074 = BGL_OBJECT_WIDENING(BgL_tmpz00_14075);
						}
						BgL_auxz00_14073 =
							((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_14074);
					}
					((((BgL_prezd2conszd2setz12zd2appzc0_bglt)
								COBJECT(BgL_auxz00_14073))->BgL_getz00) =
						((obj_t) ((obj_t) BgL_get1320z00_7666)), BUNSPEC);
				}
				return BgL_new1612z00_8533;
			}
		}

	}



/* &lambda2348 */
	obj_t BGl_z62lambda2348z62zzcfa_info2z00(obj_t BgL_envz00_7667,
		obj_t BgL_oz00_7668, obj_t BgL_vz00_7669)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{
				BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_14081;

				{
					obj_t BgL_auxz00_14082;

					{	/* Cfa/cinfo2.scm 96 */
						BgL_objectz00_bglt BgL_tmpz00_14083;

						BgL_tmpz00_14083 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7668));
						BgL_auxz00_14082 = BGL_OBJECT_WIDENING(BgL_tmpz00_14083);
					}
					BgL_auxz00_14081 =
						((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_14082);
				}
				return
					((((BgL_prezd2conszd2setz12zd2appzc0_bglt)
							COBJECT(BgL_auxz00_14081))->BgL_getz00) =
					((obj_t) ((obj_t) BgL_vz00_7669)), BUNSPEC);
			}
		}

	}



/* &lambda2347 */
	obj_t BGl_z62lambda2347z62zzcfa_info2z00(obj_t BgL_envz00_7670,
		obj_t BgL_oz00_7671)
	{
		{	/* Cfa/cinfo2.scm 96 */
			{
				BgL_prezd2conszd2setz12zd2appzc0_bglt BgL_auxz00_14090;

				{
					obj_t BgL_auxz00_14091;

					{	/* Cfa/cinfo2.scm 96 */
						BgL_objectz00_bglt BgL_tmpz00_14092;

						BgL_tmpz00_14092 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7671));
						BgL_auxz00_14091 = BGL_OBJECT_WIDENING(BgL_tmpz00_14092);
					}
					BgL_auxz00_14090 =
						((BgL_prezd2conszd2setz12zd2appzc0_bglt) BgL_auxz00_14091);
				}
				return
					(((BgL_prezd2conszd2setz12zd2appzc0_bglt) COBJECT(BgL_auxz00_14090))->
					BgL_getz00);
			}
		}

	}



/* &lambda2316 */
	BgL_appz00_bglt BGl_z62lambda2316z62zzcfa_info2z00(obj_t BgL_envz00_7672,
		obj_t BgL_o1311z00_7673)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{	/* Cfa/cinfo2.scm 94 */
				long BgL_arg2318z00_8545;

				{	/* Cfa/cinfo2.scm 94 */
					obj_t BgL_arg2319z00_8546;

					{	/* Cfa/cinfo2.scm 94 */
						obj_t BgL_arg2320z00_8547;

						{	/* Cfa/cinfo2.scm 94 */
							long BgL_arg1816z00_8548;

							{	/* Cfa/cinfo2.scm 94 */
								long BgL_arg1817z00_8549;

								{	/* Cfa/cinfo2.scm 94 */
									long BgL_res2916z00_8550;

									BgL_res2916z00_8550 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1311z00_7673)));
									BgL_arg1817z00_8549 = BgL_res2916z00_8550;
								}
								BgL_arg1816z00_8548 = (BgL_arg1817z00_8549 - OBJECT_TYPE);
							}
							BgL_arg2320z00_8547 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8548);
						}
						BgL_arg2319z00_8546 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2320z00_8547);
					}
					{	/* Cfa/cinfo2.scm 94 */
						long BgL_res2918z00_8551;

						{	/* Cfa/cinfo2.scm 94 */
							obj_t BgL_tmpz00_14104;

							BgL_tmpz00_14104 = ((obj_t) BgL_arg2319z00_8546);
							BgL_res2918z00_8551 = BGL_CLASS_INDEX(BgL_tmpz00_14104);
						}
						BgL_arg2318z00_8545 = BgL_res2918z00_8551;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1311z00_7673)), BgL_arg2318z00_8545);
			}
			{	/* Cfa/cinfo2.scm 94 */
				BgL_objectz00_bglt BgL_tmpz00_14110;

				BgL_tmpz00_14110 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1311z00_7673));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14110, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1311z00_7673));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1311z00_7673));
		}

	}



/* &<@anonymous:2315> */
	obj_t BGl_z62zc3z04anonymousza32315ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7674,
		obj_t BgL_new1310z00_7675)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{
				BgL_appz00_bglt BgL_auxz00_14118;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1310z00_7675))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_14122;

					{	/* Cfa/cinfo2.scm 94 */
						obj_t BgL_classz00_8553;

						BgL_classz00_8553 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 94 */
							obj_t BgL__ortest_1106z00_8554;

							BgL__ortest_1106z00_8554 = BGL_CLASS_NIL(BgL_classz00_8553);
							if (CBOOL(BgL__ortest_1106z00_8554))
								{	/* Cfa/cinfo2.scm 94 */
									BgL_auxz00_14122 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8554);
								}
							else
								{	/* Cfa/cinfo2.scm 94 */
									BgL_auxz00_14122 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8553));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1310z00_7675))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_14122), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1310z00_7675))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1310z00_7675))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_14138;

					{	/* Cfa/cinfo2.scm 94 */
						obj_t BgL_classz00_8555;

						BgL_classz00_8555 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 94 */
							obj_t BgL__ortest_1106z00_8556;

							BgL__ortest_1106z00_8556 = BGL_CLASS_NIL(BgL_classz00_8555);
							if (CBOOL(BgL__ortest_1106z00_8556))
								{	/* Cfa/cinfo2.scm 94 */
									BgL_auxz00_14138 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8556);
								}
							else
								{	/* Cfa/cinfo2.scm 94 */
									BgL_auxz00_14138 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8555));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1310z00_7675))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_14138), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1310z00_7675))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1310z00_7675))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_14154;

					{
						obj_t BgL_auxz00_14155;

						{	/* Cfa/cinfo2.scm 94 */
							BgL_objectz00_bglt BgL_tmpz00_14156;

							BgL_tmpz00_14156 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1310z00_7675));
							BgL_auxz00_14155 = BGL_OBJECT_WIDENING(BgL_tmpz00_14156);
						}
						BgL_auxz00_14154 =
							((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_14155);
					}
					((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_14154))->
							BgL_getz00) =
						((obj_t) BGl_conszd2envzd2zz__r4_pairs_and_lists_6_3z00), BUNSPEC);
				}
				BgL_auxz00_14118 = ((BgL_appz00_bglt) BgL_new1310z00_7675);
				return ((obj_t) BgL_auxz00_14118);
			}
		}

	}



/* &lambda2313 */
	BgL_appz00_bglt BGl_z62lambda2313z62zzcfa_info2z00(obj_t BgL_envz00_7676,
		obj_t BgL_o1307z00_7677)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{	/* Cfa/cinfo2.scm 94 */
				BgL_prezd2conszd2refzd2appzd2_bglt BgL_wide1309z00_8558;

				BgL_wide1309z00_8558 =
					((BgL_prezd2conszd2refzd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2conszd2refzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 94 */
					obj_t BgL_auxz00_14169;
					BgL_objectz00_bglt BgL_tmpz00_14165;

					BgL_auxz00_14169 = ((obj_t) BgL_wide1309z00_8558);
					BgL_tmpz00_14165 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1307z00_7677)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14165, BgL_auxz00_14169);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1307z00_7677)));
				{	/* Cfa/cinfo2.scm 94 */
					long BgL_arg2314z00_8559;

					{	/* Cfa/cinfo2.scm 94 */
						long BgL_res2915z00_8560;

						BgL_res2915z00_8560 =
							BGL_CLASS_INDEX(BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
						BgL_arg2314z00_8559 = BgL_res2915z00_8560;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1307z00_7677))), BgL_arg2314z00_8559);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1307z00_7677)));
			}
		}

	}



/* &lambda2310 */
	BgL_appz00_bglt BGl_z62lambda2310z62zzcfa_info2z00(obj_t BgL_envz00_7678,
		obj_t BgL_loc1299z00_7679, obj_t BgL_type1300z00_7680,
		obj_t BgL_sidezd2effect1301zd2_7681, obj_t BgL_key1302z00_7682,
		obj_t BgL_fun1303z00_7683, obj_t BgL_args1304z00_7684,
		obj_t BgL_stackable1305z00_7685, obj_t BgL_get1306z00_7686)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{	/* Cfa/cinfo2.scm 94 */
				BgL_appz00_bglt BgL_new1607z00_8564;

				{	/* Cfa/cinfo2.scm 94 */
					BgL_appz00_bglt BgL_tmp1605z00_8565;
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_wide1606z00_8566;

					{
						BgL_appz00_bglt BgL_auxz00_14183;

						{	/* Cfa/cinfo2.scm 94 */
							BgL_appz00_bglt BgL_new1604z00_8567;

							BgL_new1604z00_8567 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 94 */
								long BgL_arg2312z00_8568;

								{	/* Cfa/cinfo2.scm 94 */
									long BgL_res2913z00_8569;

									BgL_res2913z00_8569 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2312z00_8568 = BgL_res2913z00_8569;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1604z00_8567),
									BgL_arg2312z00_8568);
							}
							{	/* Cfa/cinfo2.scm 94 */
								BgL_objectz00_bglt BgL_tmpz00_14188;

								BgL_tmpz00_14188 = ((BgL_objectz00_bglt) BgL_new1604z00_8567);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14188, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1604z00_8567);
							BgL_auxz00_14183 = BgL_new1604z00_8567;
						}
						BgL_tmp1605z00_8565 = ((BgL_appz00_bglt) BgL_auxz00_14183);
					}
					BgL_wide1606z00_8566 =
						((BgL_prezd2conszd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 94 */
						obj_t BgL_auxz00_14196;
						BgL_objectz00_bglt BgL_tmpz00_14194;

						BgL_auxz00_14196 = ((obj_t) BgL_wide1606z00_8566);
						BgL_tmpz00_14194 = ((BgL_objectz00_bglt) BgL_tmp1605z00_8565);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14194, BgL_auxz00_14196);
					}
					((BgL_objectz00_bglt) BgL_tmp1605z00_8565);
					{	/* Cfa/cinfo2.scm 94 */
						long BgL_arg2311z00_8570;

						{	/* Cfa/cinfo2.scm 94 */
							long BgL_res2914z00_8571;

							BgL_res2914z00_8571 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2refzd2appzd2zzcfa_info2z00);
							BgL_arg2311z00_8570 = BgL_res2914z00_8571;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1605z00_8565), BgL_arg2311z00_8570);
					}
					BgL_new1607z00_8564 = ((BgL_appz00_bglt) BgL_tmp1605z00_8565);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1607z00_8564)))->BgL_locz00) =
					((obj_t) BgL_loc1299z00_7679), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1607z00_8564)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1300z00_7680)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1607z00_8564)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1301zd2_7681), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1607z00_8564)))->BgL_keyz00) =
					((obj_t) BgL_key1302z00_7682), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1607z00_8564)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1303z00_7683)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1607z00_8564)))->
						BgL_argsz00) = ((obj_t) BgL_args1304z00_7684), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1607z00_8564)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1305z00_7685), BUNSPEC);
				{
					BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_14220;

					{
						obj_t BgL_auxz00_14221;

						{	/* Cfa/cinfo2.scm 94 */
							BgL_objectz00_bglt BgL_tmpz00_14222;

							BgL_tmpz00_14222 = ((BgL_objectz00_bglt) BgL_new1607z00_8564);
							BgL_auxz00_14221 = BGL_OBJECT_WIDENING(BgL_tmpz00_14222);
						}
						BgL_auxz00_14220 =
							((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_14221);
					}
					((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_14220))->
							BgL_getz00) = ((obj_t) ((obj_t) BgL_get1306z00_7686)), BUNSPEC);
				}
				return BgL_new1607z00_8564;
			}
		}

	}



/* &lambda2325 */
	obj_t BGl_z62lambda2325z62zzcfa_info2z00(obj_t BgL_envz00_7687,
		obj_t BgL_oz00_7688, obj_t BgL_vz00_7689)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{
				BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_14228;

				{
					obj_t BgL_auxz00_14229;

					{	/* Cfa/cinfo2.scm 94 */
						BgL_objectz00_bglt BgL_tmpz00_14230;

						BgL_tmpz00_14230 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7688));
						BgL_auxz00_14229 = BGL_OBJECT_WIDENING(BgL_tmpz00_14230);
					}
					BgL_auxz00_14228 =
						((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_14229);
				}
				return
					((((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_14228))->
						BgL_getz00) = ((obj_t) ((obj_t) BgL_vz00_7689)), BUNSPEC);
			}
		}

	}



/* &lambda2324 */
	obj_t BGl_z62lambda2324z62zzcfa_info2z00(obj_t BgL_envz00_7690,
		obj_t BgL_oz00_7691)
	{
		{	/* Cfa/cinfo2.scm 94 */
			{
				BgL_prezd2conszd2refzd2appzd2_bglt BgL_auxz00_14237;

				{
					obj_t BgL_auxz00_14238;

					{	/* Cfa/cinfo2.scm 94 */
						BgL_objectz00_bglt BgL_tmpz00_14239;

						BgL_tmpz00_14239 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7691));
						BgL_auxz00_14238 = BGL_OBJECT_WIDENING(BgL_tmpz00_14239);
					}
					BgL_auxz00_14237 =
						((BgL_prezd2conszd2refzd2appzd2_bglt) BgL_auxz00_14238);
				}
				return
					(((BgL_prezd2conszd2refzd2appzd2_bglt) COBJECT(BgL_auxz00_14237))->
					BgL_getz00);
			}
		}

	}



/* &lambda2294 */
	BgL_appz00_bglt BGl_z62lambda2294z62zzcfa_info2z00(obj_t BgL_envz00_7692,
		obj_t BgL_o1297z00_7693)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{	/* Cfa/cinfo2.scm 91 */
				long BgL_arg2295z00_8576;

				{	/* Cfa/cinfo2.scm 91 */
					obj_t BgL_arg2296z00_8577;

					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_arg2297z00_8578;

						{	/* Cfa/cinfo2.scm 91 */
							long BgL_arg1816z00_8579;

							{	/* Cfa/cinfo2.scm 91 */
								long BgL_arg1817z00_8580;

								{	/* Cfa/cinfo2.scm 91 */
									long BgL_res2910z00_8581;

									BgL_res2910z00_8581 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1297z00_7693)));
									BgL_arg1817z00_8580 = BgL_res2910z00_8581;
								}
								BgL_arg1816z00_8579 = (BgL_arg1817z00_8580 - OBJECT_TYPE);
							}
							BgL_arg2297z00_8578 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8579);
						}
						BgL_arg2296z00_8577 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2297z00_8578);
					}
					{	/* Cfa/cinfo2.scm 91 */
						long BgL_res2912z00_8582;

						{	/* Cfa/cinfo2.scm 91 */
							obj_t BgL_tmpz00_14251;

							BgL_tmpz00_14251 = ((obj_t) BgL_arg2296z00_8577);
							BgL_res2912z00_8582 = BGL_CLASS_INDEX(BgL_tmpz00_14251);
						}
						BgL_arg2295z00_8576 = BgL_res2912z00_8582;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1297z00_7693)), BgL_arg2295z00_8576);
			}
			{	/* Cfa/cinfo2.scm 91 */
				BgL_objectz00_bglt BgL_tmpz00_14257;

				BgL_tmpz00_14257 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1297z00_7693));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14257, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1297z00_7693));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1297z00_7693));
		}

	}



/* &<@anonymous:2293> */
	obj_t BGl_z62zc3z04anonymousza32293ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7694,
		obj_t BgL_new1296z00_7695)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{
				BgL_appz00_bglt BgL_auxz00_14265;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1296z00_7695))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_14269;

					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_classz00_8584;

						BgL_classz00_8584 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 91 */
							obj_t BgL__ortest_1106z00_8585;

							BgL__ortest_1106z00_8585 = BGL_CLASS_NIL(BgL_classz00_8584);
							if (CBOOL(BgL__ortest_1106z00_8585))
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14269 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8585);
								}
							else
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14269 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8584));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1296z00_7695))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_14269), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1296z00_7695))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1296z00_7695))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_14285;

					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_classz00_8586;

						BgL_classz00_8586 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 91 */
							obj_t BgL__ortest_1106z00_8587;

							BgL__ortest_1106z00_8587 = BGL_CLASS_NIL(BgL_classz00_8586);
							if (CBOOL(BgL__ortest_1106z00_8587))
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14285 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8587);
								}
							else
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14285 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8586));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1296z00_7695))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_14285), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1296z00_7695))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1296z00_7695))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_variablez00_bglt BgL_auxz00_14308;
					BgL_prezd2conszd2appz00_bglt BgL_auxz00_14301;

					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_classz00_8588;

						BgL_classz00_8588 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 91 */
							obj_t BgL__ortest_1106z00_8589;

							BgL__ortest_1106z00_8589 = BGL_CLASS_NIL(BgL_classz00_8588);
							if (CBOOL(BgL__ortest_1106z00_8589))
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14308 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8589);
								}
							else
								{	/* Cfa/cinfo2.scm 91 */
									BgL_auxz00_14308 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8588));
								}
						}
					}
					{
						obj_t BgL_auxz00_14302;

						{	/* Cfa/cinfo2.scm 91 */
							BgL_objectz00_bglt BgL_tmpz00_14303;

							BgL_tmpz00_14303 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1296z00_7695));
							BgL_auxz00_14302 = BGL_OBJECT_WIDENING(BgL_tmpz00_14303);
						}
						BgL_auxz00_14301 =
							((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_14302);
					}
					((((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_14301))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_14308), BUNSPEC);
				}
				BgL_auxz00_14265 = ((BgL_appz00_bglt) BgL_new1296z00_7695);
				return ((obj_t) BgL_auxz00_14265);
			}
		}

	}



/* &lambda2291 */
	BgL_appz00_bglt BGl_z62lambda2291z62zzcfa_info2z00(obj_t BgL_envz00_7696,
		obj_t BgL_o1293z00_7697)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{	/* Cfa/cinfo2.scm 91 */
				BgL_prezd2conszd2appz00_bglt BgL_wide1295z00_8591;

				BgL_wide1295z00_8591 =
					((BgL_prezd2conszd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2conszd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 91 */
					obj_t BgL_auxz00_14323;
					BgL_objectz00_bglt BgL_tmpz00_14319;

					BgL_auxz00_14323 = ((obj_t) BgL_wide1295z00_8591);
					BgL_tmpz00_14319 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1293z00_7697)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14319, BgL_auxz00_14323);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1293z00_7697)));
				{	/* Cfa/cinfo2.scm 91 */
					long BgL_arg2292z00_8592;

					{	/* Cfa/cinfo2.scm 91 */
						long BgL_res2909z00_8593;

						BgL_res2909z00_8593 =
							BGL_CLASS_INDEX(BGl_prezd2conszd2appz00zzcfa_info2z00);
						BgL_arg2292z00_8592 = BgL_res2909z00_8593;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1293z00_7697))), BgL_arg2292z00_8592);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1293z00_7697)));
			}
		}

	}



/* &lambda2288 */
	BgL_appz00_bglt BGl_z62lambda2288z62zzcfa_info2z00(obj_t BgL_envz00_7698,
		obj_t BgL_loc1285z00_7699, obj_t BgL_type1286z00_7700,
		obj_t BgL_sidezd2effect1287zd2_7701, obj_t BgL_key1288z00_7702,
		obj_t BgL_fun1289z00_7703, obj_t BgL_args1290z00_7704,
		obj_t BgL_stackable1291z00_7705, obj_t BgL_owner1292z00_7706)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{	/* Cfa/cinfo2.scm 91 */
				BgL_appz00_bglt BgL_new1602z00_8597;

				{	/* Cfa/cinfo2.scm 91 */
					BgL_appz00_bglt BgL_tmp1600z00_8598;
					BgL_prezd2conszd2appz00_bglt BgL_wide1601z00_8599;

					{
						BgL_appz00_bglt BgL_auxz00_14337;

						{	/* Cfa/cinfo2.scm 91 */
							BgL_appz00_bglt BgL_new1599z00_8600;

							BgL_new1599z00_8600 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 91 */
								long BgL_arg2290z00_8601;

								{	/* Cfa/cinfo2.scm 91 */
									long BgL_res2907z00_8602;

									BgL_res2907z00_8602 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2290z00_8601 = BgL_res2907z00_8602;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1599z00_8600),
									BgL_arg2290z00_8601);
							}
							{	/* Cfa/cinfo2.scm 91 */
								BgL_objectz00_bglt BgL_tmpz00_14342;

								BgL_tmpz00_14342 = ((BgL_objectz00_bglt) BgL_new1599z00_8600);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14342, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1599z00_8600);
							BgL_auxz00_14337 = BgL_new1599z00_8600;
						}
						BgL_tmp1600z00_8598 = ((BgL_appz00_bglt) BgL_auxz00_14337);
					}
					BgL_wide1601z00_8599 =
						((BgL_prezd2conszd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2conszd2appz00_bgl))));
					{	/* Cfa/cinfo2.scm 91 */
						obj_t BgL_auxz00_14350;
						BgL_objectz00_bglt BgL_tmpz00_14348;

						BgL_auxz00_14350 = ((obj_t) BgL_wide1601z00_8599);
						BgL_tmpz00_14348 = ((BgL_objectz00_bglt) BgL_tmp1600z00_8598);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14348, BgL_auxz00_14350);
					}
					((BgL_objectz00_bglt) BgL_tmp1600z00_8598);
					{	/* Cfa/cinfo2.scm 91 */
						long BgL_arg2289z00_8603;

						{	/* Cfa/cinfo2.scm 91 */
							long BgL_res2908z00_8604;

							BgL_res2908z00_8604 =
								BGL_CLASS_INDEX(BGl_prezd2conszd2appz00zzcfa_info2z00);
							BgL_arg2289z00_8603 = BgL_res2908z00_8604;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1600z00_8598), BgL_arg2289z00_8603);
					}
					BgL_new1602z00_8597 = ((BgL_appz00_bglt) BgL_tmp1600z00_8598);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1602z00_8597)))->BgL_locz00) =
					((obj_t) BgL_loc1285z00_7699), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1602z00_8597)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1286z00_7700)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1602z00_8597)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1287zd2_7701), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1602z00_8597)))->BgL_keyz00) =
					((obj_t) BgL_key1288z00_7702), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1602z00_8597)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1289z00_7703)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1602z00_8597)))->
						BgL_argsz00) = ((obj_t) BgL_args1290z00_7704), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1602z00_8597)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1291z00_7705), BUNSPEC);
				{
					BgL_prezd2conszd2appz00_bglt BgL_auxz00_14374;

					{
						obj_t BgL_auxz00_14375;

						{	/* Cfa/cinfo2.scm 91 */
							BgL_objectz00_bglt BgL_tmpz00_14376;

							BgL_tmpz00_14376 = ((BgL_objectz00_bglt) BgL_new1602z00_8597);
							BgL_auxz00_14375 = BGL_OBJECT_WIDENING(BgL_tmpz00_14376);
						}
						BgL_auxz00_14374 =
							((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_14375);
					}
					((((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_14374))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
								BgL_owner1292z00_7706)), BUNSPEC);
				}
				return BgL_new1602z00_8597;
			}
		}

	}



/* &lambda2302 */
	obj_t BGl_z62lambda2302z62zzcfa_info2z00(obj_t BgL_envz00_7707,
		obj_t BgL_oz00_7708, obj_t BgL_vz00_7709)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{
				BgL_prezd2conszd2appz00_bglt BgL_auxz00_14382;

				{
					obj_t BgL_auxz00_14383;

					{	/* Cfa/cinfo2.scm 91 */
						BgL_objectz00_bglt BgL_tmpz00_14384;

						BgL_tmpz00_14384 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7708));
						BgL_auxz00_14383 = BGL_OBJECT_WIDENING(BgL_tmpz00_14384);
					}
					BgL_auxz00_14382 = ((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_14383);
				}
				return
					((((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_14382))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7709)),
					BUNSPEC);
			}
		}

	}



/* &lambda2301 */
	BgL_variablez00_bglt BGl_z62lambda2301z62zzcfa_info2z00(obj_t BgL_envz00_7710,
		obj_t BgL_oz00_7711)
	{
		{	/* Cfa/cinfo2.scm 91 */
			{
				BgL_prezd2conszd2appz00_bglt BgL_auxz00_14391;

				{
					obj_t BgL_auxz00_14392;

					{	/* Cfa/cinfo2.scm 91 */
						BgL_objectz00_bglt BgL_tmpz00_14393;

						BgL_tmpz00_14393 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7711));
						BgL_auxz00_14392 = BGL_OBJECT_WIDENING(BgL_tmpz00_14393);
					}
					BgL_auxz00_14391 = ((BgL_prezd2conszd2appz00_bglt) BgL_auxz00_14392);
				}
				return
					(((BgL_prezd2conszd2appz00_bglt) COBJECT(BgL_auxz00_14391))->
					BgL_ownerz00);
			}
		}

	}



/* &lambda2239 */
	BgL_appz00_bglt BGl_z62lambda2239z62zzcfa_info2z00(obj_t BgL_envz00_7712,
		obj_t BgL_o1283z00_7713)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				long BgL_arg2240z00_8609;

				{	/* Cfa/cinfo2.scm 68 */
					obj_t BgL_arg2241z00_8610;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_arg2242z00_8611;

						{	/* Cfa/cinfo2.scm 68 */
							long BgL_arg1816z00_8612;

							{	/* Cfa/cinfo2.scm 68 */
								long BgL_arg1817z00_8613;

								{	/* Cfa/cinfo2.scm 68 */
									long BgL_res2904z00_8614;

									BgL_res2904z00_8614 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1283z00_7713)));
									BgL_arg1817z00_8613 = BgL_res2904z00_8614;
								}
								BgL_arg1816z00_8612 = (BgL_arg1817z00_8613 - OBJECT_TYPE);
							}
							BgL_arg2242z00_8611 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8612);
						}
						BgL_arg2241z00_8610 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2242z00_8611);
					}
					{	/* Cfa/cinfo2.scm 68 */
						long BgL_res2906z00_8615;

						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL_tmpz00_14405;

							BgL_tmpz00_14405 = ((obj_t) BgL_arg2241z00_8610);
							BgL_res2906z00_8615 = BGL_CLASS_INDEX(BgL_tmpz00_14405);
						}
						BgL_arg2240z00_8609 = BgL_res2906z00_8615;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1283z00_7713)), BgL_arg2240z00_8609);
			}
			{	/* Cfa/cinfo2.scm 68 */
				BgL_objectz00_bglt BgL_tmpz00_14411;

				BgL_tmpz00_14411 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1283z00_7713));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14411, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1283z00_7713));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1283z00_7713));
		}

	}



/* &<@anonymous:2238> */
	obj_t BGl_z62zc3z04anonymousza32238ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7714,
		obj_t BgL_new1282z00_7715)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_appz00_bglt BgL_auxz00_14419;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1282z00_7715))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_14423;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_classz00_8617;

						BgL_classz00_8617 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL__ortest_1106z00_8618;

							BgL__ortest_1106z00_8618 = BGL_CLASS_NIL(BgL_classz00_8617);
							if (CBOOL(BgL__ortest_1106z00_8618))
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14423 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8618);
								}
							else
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14423 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8617));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1282z00_7715))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_14423), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1282z00_7715))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1282z00_7715))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_14439;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_classz00_8619;

						BgL_classz00_8619 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL__ortest_1106z00_8620;

							BgL__ortest_1106z00_8620 = BGL_CLASS_NIL(BgL_classz00_8619);
							if (CBOOL(BgL__ortest_1106z00_8620))
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14439 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8620);
								}
							else
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14439 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8619));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1282z00_7715))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_14439), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1282z00_7715))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1282z00_7715))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_14462;
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14455;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_classz00_8621;

						BgL_classz00_8621 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL__ortest_1106z00_8622;

							BgL__ortest_1106z00_8622 = BGL_CLASS_NIL(BgL_classz00_8621);
							if (CBOOL(BgL__ortest_1106z00_8622))
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14462 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8622);
								}
							else
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14462 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8621));
								}
						}
					}
					{
						obj_t BgL_auxz00_14456;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14457;

							BgL_tmpz00_14457 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14456 = BGL_OBJECT_WIDENING(BgL_tmpz00_14457);
						}
						BgL_auxz00_14455 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14456);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14455))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_14462), BUNSPEC);
				}
				{
					BgL_approxz00_bglt BgL_auxz00_14477;
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14470;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_classz00_8623;

						BgL_classz00_8623 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL__ortest_1106z00_8624;

							BgL__ortest_1106z00_8624 = BGL_CLASS_NIL(BgL_classz00_8623);
							if (CBOOL(BgL__ortest_1106z00_8624))
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14477 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8624);
								}
							else
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14477 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8623));
								}
						}
					}
					{
						obj_t BgL_auxz00_14471;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14472;

							BgL_tmpz00_14472 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14471 = BGL_OBJECT_WIDENING(BgL_tmpz00_14472);
						}
						BgL_auxz00_14470 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14471);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14470))->
							BgL_valuezd2approxzd2) =
						((BgL_approxz00_bglt) BgL_auxz00_14477), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14485;

					{
						obj_t BgL_auxz00_14486;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14487;

							BgL_tmpz00_14487 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14486 = BGL_OBJECT_WIDENING(BgL_tmpz00_14487);
						}
						BgL_auxz00_14485 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14486);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14485))->
							BgL_lostzd2stampzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_14500;
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14493;

					{	/* Cfa/cinfo2.scm 68 */
						obj_t BgL_classz00_8625;

						BgL_classz00_8625 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL__ortest_1106z00_8626;

							BgL__ortest_1106z00_8626 = BGL_CLASS_NIL(BgL_classz00_8625);
							if (CBOOL(BgL__ortest_1106z00_8626))
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14500 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8626);
								}
							else
								{	/* Cfa/cinfo2.scm 68 */
									BgL_auxz00_14500 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8625));
								}
						}
					}
					{
						obj_t BgL_auxz00_14494;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14495;

							BgL_tmpz00_14495 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14494 = BGL_OBJECT_WIDENING(BgL_tmpz00_14495);
						}
						BgL_auxz00_14493 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14494);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14493))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_14500), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14508;

					{
						obj_t BgL_auxz00_14509;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14510;

							BgL_tmpz00_14510 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14509 = BGL_OBJECT_WIDENING(BgL_tmpz00_14510);
						}
						BgL_auxz00_14508 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14509);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14508))->
							BgL_stackzd2stampzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14516;

					{
						obj_t BgL_auxz00_14517;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14518;

							BgL_tmpz00_14518 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1282z00_7715));
							BgL_auxz00_14517 = BGL_OBJECT_WIDENING(BgL_tmpz00_14518);
						}
						BgL_auxz00_14516 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14517);
					}
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14516))->
							BgL_seenzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_14419 = ((BgL_appz00_bglt) BgL_new1282z00_7715);
				return ((obj_t) BgL_auxz00_14419);
			}
		}

	}



/* &lambda2236 */
	BgL_appz00_bglt BGl_z62lambda2236z62zzcfa_info2z00(obj_t BgL_envz00_7716,
		obj_t BgL_o1279z00_7717)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				BgL_makezd2vectorzd2appz00_bglt BgL_wide1281z00_8628;

				BgL_wide1281z00_8628 =
					((BgL_makezd2vectorzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_makezd2vectorzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 68 */
					obj_t BgL_auxz00_14531;
					BgL_objectz00_bglt BgL_tmpz00_14527;

					BgL_auxz00_14531 = ((obj_t) BgL_wide1281z00_8628);
					BgL_tmpz00_14527 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1279z00_7717)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14527, BgL_auxz00_14531);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1279z00_7717)));
				{	/* Cfa/cinfo2.scm 68 */
					long BgL_arg2237z00_8629;

					{	/* Cfa/cinfo2.scm 68 */
						long BgL_res2903z00_8630;

						BgL_res2903z00_8630 =
							BGL_CLASS_INDEX(BGl_makezd2vectorzd2appz00zzcfa_info2z00);
						BgL_arg2237z00_8629 = BgL_res2903z00_8630;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1279z00_7717))), BgL_arg2237z00_8629);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1279z00_7717)));
			}
		}

	}



/* &lambda2233 */
	BgL_appz00_bglt BGl_z62lambda2233z62zzcfa_info2z00(obj_t BgL_envz00_7718,
		obj_t BgL_loc1266z00_7719, obj_t BgL_type1267z00_7720,
		obj_t BgL_sidezd2effect1268zd2_7721, obj_t BgL_key1269z00_7722,
		obj_t BgL_fun1270z00_7723, obj_t BgL_args1271z00_7724,
		obj_t BgL_stackable1272z00_7725, obj_t BgL_approx1273z00_7726,
		obj_t BgL_valuezd2approx1274zd2_7727, obj_t BgL_lostzd2stamp1275zd2_7728,
		obj_t BgL_owner1276z00_7729, obj_t BgL_stackzd2stamp1277zd2_7730,
		obj_t BgL_seenzf31278zf3_7731)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				long BgL_lostzd2stamp1275zd2_8635;
				bool_t BgL_seenzf31278zf3_8637;

				BgL_lostzd2stamp1275zd2_8635 =
					(long) CINT(BgL_lostzd2stamp1275zd2_7728);
				BgL_seenzf31278zf3_8637 = CBOOL(BgL_seenzf31278zf3_7731);
				{	/* Cfa/cinfo2.scm 68 */
					BgL_appz00_bglt BgL_new1597z00_8638;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_appz00_bglt BgL_tmp1595z00_8639;
						BgL_makezd2vectorzd2appz00_bglt BgL_wide1596z00_8640;

						{
							BgL_appz00_bglt BgL_auxz00_14547;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_appz00_bglt BgL_new1594z00_8641;

								BgL_new1594z00_8641 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Cfa/cinfo2.scm 68 */
									long BgL_arg2235z00_8642;

									{	/* Cfa/cinfo2.scm 68 */
										long BgL_res2901z00_8643;

										BgL_res2901z00_8643 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg2235z00_8642 = BgL_res2901z00_8643;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1594z00_8641),
										BgL_arg2235z00_8642);
								}
								{	/* Cfa/cinfo2.scm 68 */
									BgL_objectz00_bglt BgL_tmpz00_14552;

									BgL_tmpz00_14552 = ((BgL_objectz00_bglt) BgL_new1594z00_8641);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14552, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1594z00_8641);
								BgL_auxz00_14547 = BgL_new1594z00_8641;
							}
							BgL_tmp1595z00_8639 = ((BgL_appz00_bglt) BgL_auxz00_14547);
						}
						BgL_wide1596z00_8640 =
							((BgL_makezd2vectorzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_makezd2vectorzd2appz00_bgl))));
						{	/* Cfa/cinfo2.scm 68 */
							obj_t BgL_auxz00_14560;
							BgL_objectz00_bglt BgL_tmpz00_14558;

							BgL_auxz00_14560 = ((obj_t) BgL_wide1596z00_8640);
							BgL_tmpz00_14558 = ((BgL_objectz00_bglt) BgL_tmp1595z00_8639);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14558, BgL_auxz00_14560);
						}
						((BgL_objectz00_bglt) BgL_tmp1595z00_8639);
						{	/* Cfa/cinfo2.scm 68 */
							long BgL_arg2234z00_8644;

							{	/* Cfa/cinfo2.scm 68 */
								long BgL_res2902z00_8645;

								BgL_res2902z00_8645 =
									BGL_CLASS_INDEX(BGl_makezd2vectorzd2appz00zzcfa_info2z00);
								BgL_arg2234z00_8644 = BgL_res2902z00_8645;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1595z00_8639),
								BgL_arg2234z00_8644);
						}
						BgL_new1597z00_8638 = ((BgL_appz00_bglt) BgL_tmp1595z00_8639);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1597z00_8638)))->BgL_locz00) =
						((obj_t) BgL_loc1266z00_7719), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1597z00_8638)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1267z00_7720)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1597z00_8638)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1268zd2_7721), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1597z00_8638)))->BgL_keyz00) =
						((obj_t) BgL_key1269z00_7722), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1597z00_8638)))->BgL_funz00) =
						((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1270z00_7723)),
						BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1597z00_8638)))->BgL_argsz00) =
						((obj_t) BgL_args1271z00_7724), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1597z00_8638)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1272z00_7725), BUNSPEC);
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14584;

						{
							obj_t BgL_auxz00_14585;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14586;

								BgL_tmpz00_14586 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14585 = BGL_OBJECT_WIDENING(BgL_tmpz00_14586);
							}
							BgL_auxz00_14584 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14585);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14584))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1273z00_7726)), BUNSPEC);
					}
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14592;

						{
							obj_t BgL_auxz00_14593;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14594;

								BgL_tmpz00_14594 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14593 = BGL_OBJECT_WIDENING(BgL_tmpz00_14594);
							}
							BgL_auxz00_14592 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14593);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14592))->
								BgL_valuezd2approxzd2) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_valuezd2approx1274zd2_7727)), BUNSPEC);
					}
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14600;

						{
							obj_t BgL_auxz00_14601;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14602;

								BgL_tmpz00_14602 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14601 = BGL_OBJECT_WIDENING(BgL_tmpz00_14602);
							}
							BgL_auxz00_14600 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14601);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14600))->
								BgL_lostzd2stampzd2) =
							((long) BgL_lostzd2stamp1275zd2_8635), BUNSPEC);
					}
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14607;

						{
							obj_t BgL_auxz00_14608;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14609;

								BgL_tmpz00_14609 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14608 = BGL_OBJECT_WIDENING(BgL_tmpz00_14609);
							}
							BgL_auxz00_14607 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14608);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14607))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_owner1276z00_7729)), BUNSPEC);
					}
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14615;

						{
							obj_t BgL_auxz00_14616;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14617;

								BgL_tmpz00_14617 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14616 = BGL_OBJECT_WIDENING(BgL_tmpz00_14617);
							}
							BgL_auxz00_14615 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14616);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14615))->
								BgL_stackzd2stampzd2) =
							((obj_t) BgL_stackzd2stamp1277zd2_7730), BUNSPEC);
					}
					{
						BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14622;

						{
							obj_t BgL_auxz00_14623;

							{	/* Cfa/cinfo2.scm 68 */
								BgL_objectz00_bglt BgL_tmpz00_14624;

								BgL_tmpz00_14624 = ((BgL_objectz00_bglt) BgL_new1597z00_8638);
								BgL_auxz00_14623 = BGL_OBJECT_WIDENING(BgL_tmpz00_14624);
							}
							BgL_auxz00_14622 =
								((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14623);
						}
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14622))->
								BgL_seenzf3zf3) = ((bool_t) BgL_seenzf31278zf3_8637), BUNSPEC);
					}
					return BgL_new1597z00_8638;
				}
			}
		}

	}



/* &<@anonymous:2281> */
	obj_t BGl_z62zc3z04anonymousza32281ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7732)
	{
		{	/* Cfa/cinfo2.scm 68 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2280 */
	obj_t BGl_z62lambda2280z62zzcfa_info2z00(obj_t BgL_envz00_7733,
		obj_t BgL_oz00_7734, obj_t BgL_vz00_7735)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				bool_t BgL_vz00_8647;

				BgL_vz00_8647 = CBOOL(BgL_vz00_7735);
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14631;

					{
						obj_t BgL_auxz00_14632;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14633;

							BgL_tmpz00_14633 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7734));
							BgL_auxz00_14632 = BGL_OBJECT_WIDENING(BgL_tmpz00_14633);
						}
						BgL_auxz00_14631 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14632);
					}
					return
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14631))->
							BgL_seenzf3zf3) = ((bool_t) BgL_vz00_8647), BUNSPEC);
				}
			}
		}

	}



/* &lambda2279 */
	obj_t BGl_z62lambda2279z62zzcfa_info2z00(obj_t BgL_envz00_7736,
		obj_t BgL_oz00_7737)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				bool_t BgL_tmpz00_14639;

				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14640;

					{
						obj_t BgL_auxz00_14641;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14642;

							BgL_tmpz00_14642 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7737));
							BgL_auxz00_14641 = BGL_OBJECT_WIDENING(BgL_tmpz00_14642);
						}
						BgL_auxz00_14640 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14641);
					}
					BgL_tmpz00_14639 =
						(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14640))->
						BgL_seenzf3zf3);
				}
				return BBOOL(BgL_tmpz00_14639);
			}
		}

	}



/* &<@anonymous:2273> */
	obj_t BGl_z62zc3z04anonymousza32273ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7738)
	{
		{	/* Cfa/cinfo2.scm 68 */
			return BNIL;
		}

	}



/* &lambda2272 */
	obj_t BGl_z62lambda2272z62zzcfa_info2z00(obj_t BgL_envz00_7739,
		obj_t BgL_oz00_7740, obj_t BgL_vz00_7741)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14649;

				{
					obj_t BgL_auxz00_14650;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14651;

						BgL_tmpz00_14651 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7740));
						BgL_auxz00_14650 = BGL_OBJECT_WIDENING(BgL_tmpz00_14651);
					}
					BgL_auxz00_14649 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14650);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14649))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_7741), BUNSPEC);
			}
		}

	}



/* &lambda2271 */
	obj_t BGl_z62lambda2271z62zzcfa_info2z00(obj_t BgL_envz00_7742,
		obj_t BgL_oz00_7743)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14657;

				{
					obj_t BgL_auxz00_14658;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14659;

						BgL_tmpz00_14659 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7743));
						BgL_auxz00_14658 = BGL_OBJECT_WIDENING(BgL_tmpz00_14659);
					}
					BgL_auxz00_14657 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14658);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14657))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &lambda2265 */
	obj_t BGl_z62lambda2265z62zzcfa_info2z00(obj_t BgL_envz00_7744,
		obj_t BgL_oz00_7745, obj_t BgL_vz00_7746)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14665;

				{
					obj_t BgL_auxz00_14666;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14667;

						BgL_tmpz00_14667 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7745));
						BgL_auxz00_14666 = BGL_OBJECT_WIDENING(BgL_tmpz00_14667);
					}
					BgL_auxz00_14665 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14666);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14665))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7746)),
					BUNSPEC);
			}
		}

	}



/* &lambda2264 */
	BgL_variablez00_bglt BGl_z62lambda2264z62zzcfa_info2z00(obj_t BgL_envz00_7747,
		obj_t BgL_oz00_7748)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14674;

				{
					obj_t BgL_auxz00_14675;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14676;

						BgL_tmpz00_14676 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7748));
						BgL_auxz00_14675 = BGL_OBJECT_WIDENING(BgL_tmpz00_14676);
					}
					BgL_auxz00_14674 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14675);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14674))->
					BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:2260> */
	obj_t BGl_z62zc3z04anonymousza32260ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7749)
	{
		{	/* Cfa/cinfo2.scm 68 */
			return BINT(((long) -1));
		}

	}



/* &lambda2259 */
	obj_t BGl_z62lambda2259z62zzcfa_info2z00(obj_t BgL_envz00_7750,
		obj_t BgL_oz00_7751, obj_t BgL_vz00_7752)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				long BgL_vz00_8655;

				BgL_vz00_8655 = (long) CINT(BgL_vz00_7752);
				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14684;

					{
						obj_t BgL_auxz00_14685;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14686;

							BgL_tmpz00_14686 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7751));
							BgL_auxz00_14685 = BGL_OBJECT_WIDENING(BgL_tmpz00_14686);
						}
						BgL_auxz00_14684 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14685);
					}
					return
						((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14684))->
							BgL_lostzd2stampzd2) = ((long) BgL_vz00_8655), BUNSPEC);
		}}}

	}



/* &lambda2258 */
	obj_t BGl_z62lambda2258z62zzcfa_info2z00(obj_t BgL_envz00_7753,
		obj_t BgL_oz00_7754)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{	/* Cfa/cinfo2.scm 68 */
				long BgL_tmpz00_14692;

				{
					BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14693;

					{
						obj_t BgL_auxz00_14694;

						{	/* Cfa/cinfo2.scm 68 */
							BgL_objectz00_bglt BgL_tmpz00_14695;

							BgL_tmpz00_14695 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7754));
							BgL_auxz00_14694 = BGL_OBJECT_WIDENING(BgL_tmpz00_14695);
						}
						BgL_auxz00_14693 =
							((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14694);
					}
					BgL_tmpz00_14692 =
						(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14693))->
						BgL_lostzd2stampzd2);
				}
				return BINT(BgL_tmpz00_14692);
			}
		}

	}



/* &lambda2252 */
	obj_t BGl_z62lambda2252z62zzcfa_info2z00(obj_t BgL_envz00_7755,
		obj_t BgL_oz00_7756, obj_t BgL_vz00_7757)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14702;

				{
					obj_t BgL_auxz00_14703;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14704;

						BgL_tmpz00_14704 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7756));
						BgL_auxz00_14703 = BGL_OBJECT_WIDENING(BgL_tmpz00_14704);
					}
					BgL_auxz00_14702 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14703);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14702))->
						BgL_valuezd2approxzd2) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7757)), BUNSPEC);
			}
		}

	}



/* &lambda2251 */
	BgL_approxz00_bglt BGl_z62lambda2251z62zzcfa_info2z00(obj_t BgL_envz00_7758,
		obj_t BgL_oz00_7759)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14711;

				{
					obj_t BgL_auxz00_14712;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14713;

						BgL_tmpz00_14713 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7759));
						BgL_auxz00_14712 = BGL_OBJECT_WIDENING(BgL_tmpz00_14713);
					}
					BgL_auxz00_14711 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14712);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14711))->
					BgL_valuezd2approxzd2);
			}
		}

	}



/* &lambda2247 */
	obj_t BGl_z62lambda2247z62zzcfa_info2z00(obj_t BgL_envz00_7760,
		obj_t BgL_oz00_7761, obj_t BgL_vz00_7762)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14719;

				{
					obj_t BgL_auxz00_14720;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14721;

						BgL_tmpz00_14721 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7761));
						BgL_auxz00_14720 = BGL_OBJECT_WIDENING(BgL_tmpz00_14721);
					}
					BgL_auxz00_14719 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14720);
				}
				return
					((((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14719))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7762)), BUNSPEC);
			}
		}

	}



/* &lambda2246 */
	BgL_approxz00_bglt BGl_z62lambda2246z62zzcfa_info2z00(obj_t BgL_envz00_7763,
		obj_t BgL_oz00_7764)
	{
		{	/* Cfa/cinfo2.scm 68 */
			{
				BgL_makezd2vectorzd2appz00_bglt BgL_auxz00_14728;

				{
					obj_t BgL_auxz00_14729;

					{	/* Cfa/cinfo2.scm 68 */
						BgL_objectz00_bglt BgL_tmpz00_14730;

						BgL_tmpz00_14730 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7764));
						BgL_auxz00_14729 = BGL_OBJECT_WIDENING(BgL_tmpz00_14730);
					}
					BgL_auxz00_14728 =
						((BgL_makezd2vectorzd2appz00_bglt) BgL_auxz00_14729);
				}
				return
					(((BgL_makezd2vectorzd2appz00_bglt) COBJECT(BgL_auxz00_14728))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2218 */
	BgL_appz00_bglt BGl_z62lambda2218z62zzcfa_info2z00(obj_t BgL_envz00_7765,
		obj_t BgL_o1264z00_7766)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{	/* Cfa/cinfo2.scm 64 */
				long BgL_arg2219z00_8664;

				{	/* Cfa/cinfo2.scm 64 */
					obj_t BgL_arg2220z00_8665;

					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_arg2221z00_8666;

						{	/* Cfa/cinfo2.scm 64 */
							long BgL_arg1816z00_8667;

							{	/* Cfa/cinfo2.scm 64 */
								long BgL_arg1817z00_8668;

								{	/* Cfa/cinfo2.scm 64 */
									long BgL_res2898z00_8669;

									BgL_res2898z00_8669 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1264z00_7766)));
									BgL_arg1817z00_8668 = BgL_res2898z00_8669;
								}
								BgL_arg1816z00_8667 = (BgL_arg1817z00_8668 - OBJECT_TYPE);
							}
							BgL_arg2221z00_8666 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8667);
						}
						BgL_arg2220z00_8665 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2221z00_8666);
					}
					{	/* Cfa/cinfo2.scm 64 */
						long BgL_res2900z00_8670;

						{	/* Cfa/cinfo2.scm 64 */
							obj_t BgL_tmpz00_14742;

							BgL_tmpz00_14742 = ((obj_t) BgL_arg2220z00_8665);
							BgL_res2900z00_8670 = BGL_CLASS_INDEX(BgL_tmpz00_14742);
						}
						BgL_arg2219z00_8664 = BgL_res2900z00_8670;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1264z00_7766)), BgL_arg2219z00_8664);
			}
			{	/* Cfa/cinfo2.scm 64 */
				BgL_objectz00_bglt BgL_tmpz00_14748;

				BgL_tmpz00_14748 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1264z00_7766));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14748, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1264z00_7766));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1264z00_7766));
		}

	}



/* &<@anonymous:2217> */
	obj_t BGl_z62zc3z04anonymousza32217ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7767,
		obj_t BgL_new1263z00_7768)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{
				BgL_appz00_bglt BgL_auxz00_14756;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1263z00_7768))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_14760;

					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_classz00_8672;

						BgL_classz00_8672 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 64 */
							obj_t BgL__ortest_1106z00_8673;

							BgL__ortest_1106z00_8673 = BGL_CLASS_NIL(BgL_classz00_8672);
							if (CBOOL(BgL__ortest_1106z00_8673))
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14760 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8673);
								}
							else
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14760 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8672));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1263z00_7768))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_14760), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1263z00_7768))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1263z00_7768))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_14776;

					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_classz00_8674;

						BgL_classz00_8674 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 64 */
							obj_t BgL__ortest_1106z00_8675;

							BgL__ortest_1106z00_8675 = BGL_CLASS_NIL(BgL_classz00_8674);
							if (CBOOL(BgL__ortest_1106z00_8675))
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14776 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8675);
								}
							else
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14776 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8674));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1263z00_7768))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_14776), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1263z00_7768))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1263z00_7768))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_variablez00_bglt BgL_auxz00_14799;
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_14792;

					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_classz00_8676;

						BgL_classz00_8676 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 64 */
							obj_t BgL__ortest_1106z00_8677;

							BgL__ortest_1106z00_8677 = BGL_CLASS_NIL(BgL_classz00_8676);
							if (CBOOL(BgL__ortest_1106z00_8677))
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14799 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8677);
								}
							else
								{	/* Cfa/cinfo2.scm 64 */
									BgL_auxz00_14799 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8676));
								}
						}
					}
					{
						obj_t BgL_auxz00_14793;

						{	/* Cfa/cinfo2.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_14794;

							BgL_tmpz00_14794 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1263z00_7768));
							BgL_auxz00_14793 = BGL_OBJECT_WIDENING(BgL_tmpz00_14794);
						}
						BgL_auxz00_14792 =
							((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_14793);
					}
					((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
								COBJECT(BgL_auxz00_14792))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_14799), BUNSPEC);
				}
				BgL_auxz00_14756 = ((BgL_appz00_bglt) BgL_new1263z00_7768);
				return ((obj_t) BgL_auxz00_14756);
			}
		}

	}



/* &lambda2215 */
	BgL_appz00_bglt BGl_z62lambda2215z62zzcfa_info2z00(obj_t BgL_envz00_7769,
		obj_t BgL_o1260z00_7770)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{	/* Cfa/cinfo2.scm 64 */
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_wide1262z00_8679;

				BgL_wide1262z00_8679 =
					((BgL_prezd2makezd2vectorzd2appzd2_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2vectorzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 64 */
					obj_t BgL_auxz00_14814;
					BgL_objectz00_bglt BgL_tmpz00_14810;

					BgL_auxz00_14814 = ((obj_t) BgL_wide1262z00_8679);
					BgL_tmpz00_14810 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1260z00_7770)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14810, BgL_auxz00_14814);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1260z00_7770)));
				{	/* Cfa/cinfo2.scm 64 */
					long BgL_arg2216z00_8680;

					{	/* Cfa/cinfo2.scm 64 */
						long BgL_res2897z00_8681;

						BgL_res2897z00_8681 =
							BGL_CLASS_INDEX(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
						BgL_arg2216z00_8680 = BgL_res2897z00_8681;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1260z00_7770))), BgL_arg2216z00_8680);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1260z00_7770)));
			}
		}

	}



/* &lambda2212 */
	BgL_appz00_bglt BGl_z62lambda2212z62zzcfa_info2z00(obj_t BgL_envz00_7771,
		obj_t BgL_loc1252z00_7772, obj_t BgL_type1253z00_7773,
		obj_t BgL_sidezd2effect1254zd2_7774, obj_t BgL_key1255z00_7775,
		obj_t BgL_fun1256z00_7776, obj_t BgL_args1257z00_7777,
		obj_t BgL_stackable1258z00_7778, obj_t BgL_owner1259z00_7779)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{	/* Cfa/cinfo2.scm 64 */
				BgL_appz00_bglt BgL_new1592z00_8685;

				{	/* Cfa/cinfo2.scm 64 */
					BgL_appz00_bglt BgL_tmp1590z00_8686;
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_wide1591z00_8687;

					{
						BgL_appz00_bglt BgL_auxz00_14828;

						{	/* Cfa/cinfo2.scm 64 */
							BgL_appz00_bglt BgL_new1589z00_8688;

							BgL_new1589z00_8688 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 64 */
								long BgL_arg2214z00_8689;

								{	/* Cfa/cinfo2.scm 64 */
									long BgL_res2895z00_8690;

									BgL_res2895z00_8690 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2214z00_8689 = BgL_res2895z00_8690;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1589z00_8688),
									BgL_arg2214z00_8689);
							}
							{	/* Cfa/cinfo2.scm 64 */
								BgL_objectz00_bglt BgL_tmpz00_14833;

								BgL_tmpz00_14833 = ((BgL_objectz00_bglt) BgL_new1589z00_8688);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14833, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1589z00_8688);
							BgL_auxz00_14828 = BgL_new1589z00_8688;
						}
						BgL_tmp1590z00_8686 = ((BgL_appz00_bglt) BgL_auxz00_14828);
					}
					BgL_wide1591z00_8687 =
						((BgL_prezd2makezd2vectorzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2vectorzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 64 */
						obj_t BgL_auxz00_14841;
						BgL_objectz00_bglt BgL_tmpz00_14839;

						BgL_auxz00_14841 = ((obj_t) BgL_wide1591z00_8687);
						BgL_tmpz00_14839 = ((BgL_objectz00_bglt) BgL_tmp1590z00_8686);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14839, BgL_auxz00_14841);
					}
					((BgL_objectz00_bglt) BgL_tmp1590z00_8686);
					{	/* Cfa/cinfo2.scm 64 */
						long BgL_arg2213z00_8691;

						{	/* Cfa/cinfo2.scm 64 */
							long BgL_res2896z00_8692;

							BgL_res2896z00_8692 =
								BGL_CLASS_INDEX(BGl_prezd2makezd2vectorzd2appzd2zzcfa_info2z00);
							BgL_arg2213z00_8691 = BgL_res2896z00_8692;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1590z00_8686), BgL_arg2213z00_8691);
					}
					BgL_new1592z00_8685 = ((BgL_appz00_bglt) BgL_tmp1590z00_8686);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1592z00_8685)))->BgL_locz00) =
					((obj_t) BgL_loc1252z00_7772), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1592z00_8685)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1253z00_7773)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1592z00_8685)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1254zd2_7774), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1592z00_8685)))->BgL_keyz00) =
					((obj_t) BgL_key1255z00_7775), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1592z00_8685)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1256z00_7776)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1592z00_8685)))->
						BgL_argsz00) = ((obj_t) BgL_args1257z00_7777), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1592z00_8685)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1258z00_7778), BUNSPEC);
				{
					BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_14865;

					{
						obj_t BgL_auxz00_14866;

						{	/* Cfa/cinfo2.scm 64 */
							BgL_objectz00_bglt BgL_tmpz00_14867;

							BgL_tmpz00_14867 = ((BgL_objectz00_bglt) BgL_new1592z00_8685);
							BgL_auxz00_14866 = BGL_OBJECT_WIDENING(BgL_tmpz00_14867);
						}
						BgL_auxz00_14865 =
							((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_14866);
					}
					((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
								COBJECT(BgL_auxz00_14865))->BgL_ownerz00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
								BgL_owner1259z00_7779)), BUNSPEC);
				}
				return BgL_new1592z00_8685;
			}
		}

	}



/* &lambda2226 */
	obj_t BGl_z62lambda2226z62zzcfa_info2z00(obj_t BgL_envz00_7780,
		obj_t BgL_oz00_7781, obj_t BgL_vz00_7782)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_14873;

				{
					obj_t BgL_auxz00_14874;

					{	/* Cfa/cinfo2.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_14875;

						BgL_tmpz00_14875 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7781));
						BgL_auxz00_14874 = BGL_OBJECT_WIDENING(BgL_tmpz00_14875);
					}
					BgL_auxz00_14873 =
						((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_14874);
				}
				return
					((((BgL_prezd2makezd2vectorzd2appzd2_bglt)
							COBJECT(BgL_auxz00_14873))->BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7782)),
					BUNSPEC);
			}
		}

	}



/* &lambda2225 */
	BgL_variablez00_bglt BGl_z62lambda2225z62zzcfa_info2z00(obj_t BgL_envz00_7783,
		obj_t BgL_oz00_7784)
	{
		{	/* Cfa/cinfo2.scm 64 */
			{
				BgL_prezd2makezd2vectorzd2appzd2_bglt BgL_auxz00_14882;

				{
					obj_t BgL_auxz00_14883;

					{	/* Cfa/cinfo2.scm 64 */
						BgL_objectz00_bglt BgL_tmpz00_14884;

						BgL_tmpz00_14884 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7784));
						BgL_auxz00_14883 = BGL_OBJECT_WIDENING(BgL_tmpz00_14884);
					}
					BgL_auxz00_14882 =
						((BgL_prezd2makezd2vectorzd2appzd2_bglt) BgL_auxz00_14883);
				}
				return
					(((BgL_prezd2makezd2vectorzd2appzd2_bglt) COBJECT(BgL_auxz00_14882))->
					BgL_ownerz00);
			}
		}

	}



/* &lambda2192 */
	BgL_appz00_bglt BGl_z62lambda2192z62zzcfa_info2z00(obj_t BgL_envz00_7785,
		obj_t BgL_o1250z00_7786)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				long BgL_arg2193z00_8697;

				{	/* Cfa/cinfo2.scm 59 */
					obj_t BgL_arg2194z00_8698;

					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_arg2195z00_8699;

						{	/* Cfa/cinfo2.scm 59 */
							long BgL_arg1816z00_8700;

							{	/* Cfa/cinfo2.scm 59 */
								long BgL_arg1817z00_8701;

								{	/* Cfa/cinfo2.scm 59 */
									long BgL_res2892z00_8702;

									BgL_res2892z00_8702 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1250z00_7786)));
									BgL_arg1817z00_8701 = BgL_res2892z00_8702;
								}
								BgL_arg1816z00_8700 = (BgL_arg1817z00_8701 - OBJECT_TYPE);
							}
							BgL_arg2195z00_8699 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8700);
						}
						BgL_arg2194z00_8698 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2195z00_8699);
					}
					{	/* Cfa/cinfo2.scm 59 */
						long BgL_res2894z00_8703;

						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL_tmpz00_14896;

							BgL_tmpz00_14896 = ((obj_t) BgL_arg2194z00_8698);
							BgL_res2894z00_8703 = BGL_CLASS_INDEX(BgL_tmpz00_14896);
						}
						BgL_arg2193z00_8697 = BgL_res2894z00_8703;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1250z00_7786)), BgL_arg2193z00_8697);
			}
			{	/* Cfa/cinfo2.scm 59 */
				BgL_objectz00_bglt BgL_tmpz00_14902;

				BgL_tmpz00_14902 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1250z00_7786));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14902, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1250z00_7786));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1250z00_7786));
		}

	}



/* &<@anonymous:2191> */
	obj_t BGl_z62zc3z04anonymousza32191ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7787,
		obj_t BgL_new1249z00_7788)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_appz00_bglt BgL_auxz00_14910;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1249z00_7788))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_14914;

					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_classz00_8705;

						BgL_classz00_8705 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL__ortest_1106z00_8706;

							BgL__ortest_1106z00_8706 = BGL_CLASS_NIL(BgL_classz00_8705);
							if (CBOOL(BgL__ortest_1106z00_8706))
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14914 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8706);
								}
							else
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14914 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8705));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1249z00_7788))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_14914), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1249z00_7788))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1249z00_7788))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_14930;

					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_classz00_8707;

						BgL_classz00_8707 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL__ortest_1106z00_8708;

							BgL__ortest_1106z00_8708 = BGL_CLASS_NIL(BgL_classz00_8707);
							if (CBOOL(BgL__ortest_1106z00_8708))
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14930 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8708);
								}
							else
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14930 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8707));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1249z00_7788))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_14930), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1249z00_7788))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1249z00_7788))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_14953;
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_14946;

					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_classz00_8709;

						BgL_classz00_8709 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 59 */
							obj_t BgL__ortest_1106z00_8710;

							BgL__ortest_1106z00_8710 = BGL_CLASS_NIL(BgL_classz00_8709);
							if (CBOOL(BgL__ortest_1106z00_8710))
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14953 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8710);
								}
							else
								{	/* Cfa/cinfo2.scm 59 */
									BgL_auxz00_14953 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8709));
								}
						}
					}
					{
						obj_t BgL_auxz00_14947;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_14948;

							BgL_tmpz00_14948 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1249z00_7788));
							BgL_auxz00_14947 = BGL_OBJECT_WIDENING(BgL_tmpz00_14948);
						}
						BgL_auxz00_14946 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_14947);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_14946))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_14953), BUNSPEC);
				}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_14961;

					{
						obj_t BgL_auxz00_14962;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_14963;

							BgL_tmpz00_14963 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1249z00_7788));
							BgL_auxz00_14962 = BGL_OBJECT_WIDENING(BgL_tmpz00_14963);
						}
						BgL_auxz00_14961 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_14962);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_14961))->
							BgL_vapproxz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_14910 = ((BgL_appz00_bglt) BgL_new1249z00_7788);
				return ((obj_t) BgL_auxz00_14910);
			}
		}

	}



/* &lambda2189 */
	BgL_appz00_bglt BGl_z62lambda2189z62zzcfa_info2z00(obj_t BgL_envz00_7789,
		obj_t BgL_o1246z00_7790)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_procedurezd2setz12zd2appz12_bglt BgL_wide1248z00_8712;

				BgL_wide1248z00_8712 =
					((BgL_procedurezd2setz12zd2appz12_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_procedurezd2setz12zd2appz12_bgl))));
				{	/* Cfa/cinfo2.scm 59 */
					obj_t BgL_auxz00_14976;
					BgL_objectz00_bglt BgL_tmpz00_14972;

					BgL_auxz00_14976 = ((obj_t) BgL_wide1248z00_8712);
					BgL_tmpz00_14972 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1246z00_7790)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14972, BgL_auxz00_14976);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1246z00_7790)));
				{	/* Cfa/cinfo2.scm 59 */
					long BgL_arg2190z00_8713;

					{	/* Cfa/cinfo2.scm 59 */
						long BgL_res2891z00_8714;

						BgL_res2891z00_8714 =
							BGL_CLASS_INDEX(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
						BgL_arg2190z00_8713 = BgL_res2891z00_8714;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1246z00_7790))), BgL_arg2190z00_8713);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1246z00_7790)));
			}
		}

	}



/* &lambda2186 */
	BgL_appz00_bglt BGl_z62lambda2186z62zzcfa_info2z00(obj_t BgL_envz00_7791,
		obj_t BgL_loc1237z00_7792, obj_t BgL_type1238z00_7793,
		obj_t BgL_sidezd2effect1239zd2_7794, obj_t BgL_key1240z00_7795,
		obj_t BgL_fun1241z00_7796, obj_t BgL_args1242z00_7797,
		obj_t BgL_stackable1243z00_7798, obj_t BgL_approx1244z00_7799,
		obj_t BgL_vapprox1245z00_7800)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{	/* Cfa/cinfo2.scm 59 */
				BgL_appz00_bglt BgL_new1587z00_8718;

				{	/* Cfa/cinfo2.scm 59 */
					BgL_appz00_bglt BgL_tmp1585z00_8719;
					BgL_procedurezd2setz12zd2appz12_bglt BgL_wide1586z00_8720;

					{
						BgL_appz00_bglt BgL_auxz00_14990;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_appz00_bglt BgL_new1584z00_8721;

							BgL_new1584z00_8721 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 59 */
								long BgL_arg2188z00_8722;

								{	/* Cfa/cinfo2.scm 59 */
									long BgL_res2889z00_8723;

									BgL_res2889z00_8723 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2188z00_8722 = BgL_res2889z00_8723;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1584z00_8721),
									BgL_arg2188z00_8722);
							}
							{	/* Cfa/cinfo2.scm 59 */
								BgL_objectz00_bglt BgL_tmpz00_14995;

								BgL_tmpz00_14995 = ((BgL_objectz00_bglt) BgL_new1584z00_8721);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_14995, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1584z00_8721);
							BgL_auxz00_14990 = BgL_new1584z00_8721;
						}
						BgL_tmp1585z00_8719 = ((BgL_appz00_bglt) BgL_auxz00_14990);
					}
					BgL_wide1586z00_8720 =
						((BgL_procedurezd2setz12zd2appz12_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2setz12zd2appz12_bgl))));
					{	/* Cfa/cinfo2.scm 59 */
						obj_t BgL_auxz00_15003;
						BgL_objectz00_bglt BgL_tmpz00_15001;

						BgL_auxz00_15003 = ((obj_t) BgL_wide1586z00_8720);
						BgL_tmpz00_15001 = ((BgL_objectz00_bglt) BgL_tmp1585z00_8719);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15001, BgL_auxz00_15003);
					}
					((BgL_objectz00_bglt) BgL_tmp1585z00_8719);
					{	/* Cfa/cinfo2.scm 59 */
						long BgL_arg2187z00_8724;

						{	/* Cfa/cinfo2.scm 59 */
							long BgL_res2890z00_8725;

							BgL_res2890z00_8725 =
								BGL_CLASS_INDEX(BGl_procedurezd2setz12zd2appz12zzcfa_info2z00);
							BgL_arg2187z00_8724 = BgL_res2890z00_8725;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1585z00_8719), BgL_arg2187z00_8724);
					}
					BgL_new1587z00_8718 = ((BgL_appz00_bglt) BgL_tmp1585z00_8719);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1587z00_8718)))->BgL_locz00) =
					((obj_t) BgL_loc1237z00_7792), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1587z00_8718)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1238z00_7793)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1587z00_8718)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1239zd2_7794), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1587z00_8718)))->BgL_keyz00) =
					((obj_t) BgL_key1240z00_7795), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1587z00_8718)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1241z00_7796)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1587z00_8718)))->
						BgL_argsz00) = ((obj_t) BgL_args1242z00_7797), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1587z00_8718)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1243z00_7798), BUNSPEC);
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15027;

					{
						obj_t BgL_auxz00_15028;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_15029;

							BgL_tmpz00_15029 = ((BgL_objectz00_bglt) BgL_new1587z00_8718);
							BgL_auxz00_15028 = BGL_OBJECT_WIDENING(BgL_tmpz00_15029);
						}
						BgL_auxz00_15027 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15028);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15027))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1244z00_7799)), BUNSPEC);
				}
				{
					BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15035;

					{
						obj_t BgL_auxz00_15036;

						{	/* Cfa/cinfo2.scm 59 */
							BgL_objectz00_bglt BgL_tmpz00_15037;

							BgL_tmpz00_15037 = ((BgL_objectz00_bglt) BgL_new1587z00_8718);
							BgL_auxz00_15036 = BGL_OBJECT_WIDENING(BgL_tmpz00_15037);
						}
						BgL_auxz00_15035 =
							((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15036);
					}
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15035))->
							BgL_vapproxz00) = ((obj_t) BgL_vapprox1245z00_7800), BUNSPEC);
				}
				return BgL_new1587z00_8718;
			}
		}

	}



/* &lambda2205 */
	obj_t BGl_z62lambda2205z62zzcfa_info2z00(obj_t BgL_envz00_7801,
		obj_t BgL_oz00_7802, obj_t BgL_vz00_7803)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15042;

				{
					obj_t BgL_auxz00_15043;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_objectz00_bglt BgL_tmpz00_15044;

						BgL_tmpz00_15044 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7802));
						BgL_auxz00_15043 = BGL_OBJECT_WIDENING(BgL_tmpz00_15044);
					}
					BgL_auxz00_15042 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15043);
				}
				return
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15042))->
						BgL_vapproxz00) = ((obj_t) BgL_vz00_7803), BUNSPEC);
			}
		}

	}



/* &lambda2204 */
	obj_t BGl_z62lambda2204z62zzcfa_info2z00(obj_t BgL_envz00_7804,
		obj_t BgL_oz00_7805)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15050;

				{
					obj_t BgL_auxz00_15051;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_objectz00_bglt BgL_tmpz00_15052;

						BgL_tmpz00_15052 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7805));
						BgL_auxz00_15051 = BGL_OBJECT_WIDENING(BgL_tmpz00_15052);
					}
					BgL_auxz00_15050 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15051);
				}
				return
					(((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15050))->
					BgL_vapproxz00);
			}
		}

	}



/* &lambda2200 */
	obj_t BGl_z62lambda2200z62zzcfa_info2z00(obj_t BgL_envz00_7806,
		obj_t BgL_oz00_7807, obj_t BgL_vz00_7808)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15058;

				{
					obj_t BgL_auxz00_15059;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_objectz00_bglt BgL_tmpz00_15060;

						BgL_tmpz00_15060 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7807));
						BgL_auxz00_15059 = BGL_OBJECT_WIDENING(BgL_tmpz00_15060);
					}
					BgL_auxz00_15058 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15059);
				}
				return
					((((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15058))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7808)), BUNSPEC);
			}
		}

	}



/* &lambda2199 */
	BgL_approxz00_bglt BGl_z62lambda2199z62zzcfa_info2z00(obj_t BgL_envz00_7809,
		obj_t BgL_oz00_7810)
	{
		{	/* Cfa/cinfo2.scm 59 */
			{
				BgL_procedurezd2setz12zd2appz12_bglt BgL_auxz00_15067;

				{
					obj_t BgL_auxz00_15068;

					{	/* Cfa/cinfo2.scm 59 */
						BgL_objectz00_bglt BgL_tmpz00_15069;

						BgL_tmpz00_15069 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7810));
						BgL_auxz00_15068 = BGL_OBJECT_WIDENING(BgL_tmpz00_15069);
					}
					BgL_auxz00_15067 =
						((BgL_procedurezd2setz12zd2appz12_bglt) BgL_auxz00_15068);
				}
				return
					(((BgL_procedurezd2setz12zd2appz12_bglt) COBJECT(BgL_auxz00_15067))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2171 */
	BgL_appz00_bglt BGl_z62lambda2171z62zzcfa_info2z00(obj_t BgL_envz00_7811,
		obj_t BgL_o1235z00_7812)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{	/* Cfa/cinfo2.scm 57 */
				long BgL_arg2172z00_8732;

				{	/* Cfa/cinfo2.scm 57 */
					obj_t BgL_arg2173z00_8733;

					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_arg2174z00_8734;

						{	/* Cfa/cinfo2.scm 57 */
							long BgL_arg1816z00_8735;

							{	/* Cfa/cinfo2.scm 57 */
								long BgL_arg1817z00_8736;

								{	/* Cfa/cinfo2.scm 57 */
									long BgL_res2886z00_8737;

									BgL_res2886z00_8737 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1235z00_7812)));
									BgL_arg1817z00_8736 = BgL_res2886z00_8737;
								}
								BgL_arg1816z00_8735 = (BgL_arg1817z00_8736 - OBJECT_TYPE);
							}
							BgL_arg2174z00_8734 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8735);
						}
						BgL_arg2173z00_8733 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2174z00_8734);
					}
					{	/* Cfa/cinfo2.scm 57 */
						long BgL_res2888z00_8738;

						{	/* Cfa/cinfo2.scm 57 */
							obj_t BgL_tmpz00_15081;

							BgL_tmpz00_15081 = ((obj_t) BgL_arg2173z00_8733);
							BgL_res2888z00_8738 = BGL_CLASS_INDEX(BgL_tmpz00_15081);
						}
						BgL_arg2172z00_8732 = BgL_res2888z00_8738;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1235z00_7812)), BgL_arg2172z00_8732);
			}
			{	/* Cfa/cinfo2.scm 57 */
				BgL_objectz00_bglt BgL_tmpz00_15087;

				BgL_tmpz00_15087 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1235z00_7812));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15087, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1235z00_7812));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1235z00_7812));
		}

	}



/* &<@anonymous:2170> */
	obj_t BGl_z62zc3z04anonymousza32170ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7813,
		obj_t BgL_new1234z00_7814)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{
				BgL_appz00_bglt BgL_auxz00_15095;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1234z00_7814))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_15099;

					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_classz00_8740;

						BgL_classz00_8740 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 57 */
							obj_t BgL__ortest_1106z00_8741;

							BgL__ortest_1106z00_8741 = BGL_CLASS_NIL(BgL_classz00_8740);
							if (CBOOL(BgL__ortest_1106z00_8741))
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15099 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8741);
								}
							else
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15099 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8740));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1234z00_7814))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_15099), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1234z00_7814))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1234z00_7814))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_15115;

					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_classz00_8742;

						BgL_classz00_8742 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 57 */
							obj_t BgL__ortest_1106z00_8743;

							BgL__ortest_1106z00_8743 = BGL_CLASS_NIL(BgL_classz00_8742);
							if (CBOOL(BgL__ortest_1106z00_8743))
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15115 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8743);
								}
							else
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15115 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8742));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1234z00_7814))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_15115), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1234z00_7814))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1234z00_7814))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_15138;
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_15131;

					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_classz00_8744;

						BgL_classz00_8744 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 57 */
							obj_t BgL__ortest_1106z00_8745;

							BgL__ortest_1106z00_8745 = BGL_CLASS_NIL(BgL_classz00_8744);
							if (CBOOL(BgL__ortest_1106z00_8745))
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15138 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8745);
								}
							else
								{	/* Cfa/cinfo2.scm 57 */
									BgL_auxz00_15138 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8744));
								}
						}
					}
					{
						obj_t BgL_auxz00_15132;

						{	/* Cfa/cinfo2.scm 57 */
							BgL_objectz00_bglt BgL_tmpz00_15133;

							BgL_tmpz00_15133 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1234z00_7814));
							BgL_auxz00_15132 = BGL_OBJECT_WIDENING(BgL_tmpz00_15133);
						}
						BgL_auxz00_15131 =
							((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_15132);
					}
					((((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_15131))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_15138), BUNSPEC);
				}
				BgL_auxz00_15095 = ((BgL_appz00_bglt) BgL_new1234z00_7814);
				return ((obj_t) BgL_auxz00_15095);
			}
		}

	}



/* &lambda2168 */
	BgL_appz00_bglt BGl_z62lambda2168z62zzcfa_info2z00(obj_t BgL_envz00_7815,
		obj_t BgL_o1231z00_7816)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{	/* Cfa/cinfo2.scm 57 */
				BgL_procedurezd2refzd2appz00_bglt BgL_wide1233z00_8747;

				BgL_wide1233z00_8747 =
					((BgL_procedurezd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_procedurezd2refzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 57 */
					obj_t BgL_auxz00_15153;
					BgL_objectz00_bglt BgL_tmpz00_15149;

					BgL_auxz00_15153 = ((obj_t) BgL_wide1233z00_8747);
					BgL_tmpz00_15149 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1231z00_7816)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15149, BgL_auxz00_15153);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1231z00_7816)));
				{	/* Cfa/cinfo2.scm 57 */
					long BgL_arg2169z00_8748;

					{	/* Cfa/cinfo2.scm 57 */
						long BgL_res2885z00_8749;

						BgL_res2885z00_8749 =
							BGL_CLASS_INDEX(BGl_procedurezd2refzd2appz00zzcfa_info2z00);
						BgL_arg2169z00_8748 = BgL_res2885z00_8749;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1231z00_7816))), BgL_arg2169z00_8748);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1231z00_7816)));
			}
		}

	}



/* &lambda2165 */
	BgL_appz00_bglt BGl_z62lambda2165z62zzcfa_info2z00(obj_t BgL_envz00_7817,
		obj_t BgL_loc1222z00_7818, obj_t BgL_type1223z00_7819,
		obj_t BgL_sidezd2effect1224zd2_7820, obj_t BgL_key1225z00_7821,
		obj_t BgL_fun1226z00_7822, obj_t BgL_args1227z00_7823,
		obj_t BgL_stackable1229z00_7824, obj_t BgL_approx1230z00_7825)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{	/* Cfa/cinfo2.scm 57 */
				BgL_appz00_bglt BgL_new1582z00_8753;

				{	/* Cfa/cinfo2.scm 57 */
					BgL_appz00_bglt BgL_tmp1580z00_8754;
					BgL_procedurezd2refzd2appz00_bglt BgL_wide1581z00_8755;

					{
						BgL_appz00_bglt BgL_auxz00_15167;

						{	/* Cfa/cinfo2.scm 57 */
							BgL_appz00_bglt BgL_new1579z00_8756;

							BgL_new1579z00_8756 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 57 */
								long BgL_arg2167z00_8757;

								{	/* Cfa/cinfo2.scm 57 */
									long BgL_res2883z00_8758;

									BgL_res2883z00_8758 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2167z00_8757 = BgL_res2883z00_8758;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1579z00_8756),
									BgL_arg2167z00_8757);
							}
							{	/* Cfa/cinfo2.scm 57 */
								BgL_objectz00_bglt BgL_tmpz00_15172;

								BgL_tmpz00_15172 = ((BgL_objectz00_bglt) BgL_new1579z00_8756);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15172, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1579z00_8756);
							BgL_auxz00_15167 = BgL_new1579z00_8756;
						}
						BgL_tmp1580z00_8754 = ((BgL_appz00_bglt) BgL_auxz00_15167);
					}
					BgL_wide1581z00_8755 =
						((BgL_procedurezd2refzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_procedurezd2refzd2appz00_bgl))));
					{	/* Cfa/cinfo2.scm 57 */
						obj_t BgL_auxz00_15180;
						BgL_objectz00_bglt BgL_tmpz00_15178;

						BgL_auxz00_15180 = ((obj_t) BgL_wide1581z00_8755);
						BgL_tmpz00_15178 = ((BgL_objectz00_bglt) BgL_tmp1580z00_8754);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15178, BgL_auxz00_15180);
					}
					((BgL_objectz00_bglt) BgL_tmp1580z00_8754);
					{	/* Cfa/cinfo2.scm 57 */
						long BgL_arg2166z00_8759;

						{	/* Cfa/cinfo2.scm 57 */
							long BgL_res2884z00_8760;

							BgL_res2884z00_8760 =
								BGL_CLASS_INDEX(BGl_procedurezd2refzd2appz00zzcfa_info2z00);
							BgL_arg2166z00_8759 = BgL_res2884z00_8760;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1580z00_8754), BgL_arg2166z00_8759);
					}
					BgL_new1582z00_8753 = ((BgL_appz00_bglt) BgL_tmp1580z00_8754);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1582z00_8753)))->BgL_locz00) =
					((obj_t) BgL_loc1222z00_7818), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1582z00_8753)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1223z00_7819)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1582z00_8753)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1224zd2_7820), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1582z00_8753)))->BgL_keyz00) =
					((obj_t) BgL_key1225z00_7821), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1582z00_8753)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1226z00_7822)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1582z00_8753)))->
						BgL_argsz00) = ((obj_t) BgL_args1227z00_7823), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1582z00_8753)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1229z00_7824), BUNSPEC);
				{
					BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_15204;

					{
						obj_t BgL_auxz00_15205;

						{	/* Cfa/cinfo2.scm 57 */
							BgL_objectz00_bglt BgL_tmpz00_15206;

							BgL_tmpz00_15206 = ((BgL_objectz00_bglt) BgL_new1582z00_8753);
							BgL_auxz00_15205 = BGL_OBJECT_WIDENING(BgL_tmpz00_15206);
						}
						BgL_auxz00_15204 =
							((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_15205);
					}
					((((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_15204))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1230z00_7825)), BUNSPEC);
				}
				return BgL_new1582z00_8753;
			}
		}

	}



/* &lambda2179 */
	obj_t BGl_z62lambda2179z62zzcfa_info2z00(obj_t BgL_envz00_7826,
		obj_t BgL_oz00_7827, obj_t BgL_vz00_7828)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_15212;

				{
					obj_t BgL_auxz00_15213;

					{	/* Cfa/cinfo2.scm 57 */
						BgL_objectz00_bglt BgL_tmpz00_15214;

						BgL_tmpz00_15214 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7827));
						BgL_auxz00_15213 = BGL_OBJECT_WIDENING(BgL_tmpz00_15214);
					}
					BgL_auxz00_15212 =
						((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_15213);
				}
				return
					((((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_15212))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7828)), BUNSPEC);
			}
		}

	}



/* &lambda2178 */
	BgL_approxz00_bglt BGl_z62lambda2178z62zzcfa_info2z00(obj_t BgL_envz00_7829,
		obj_t BgL_oz00_7830)
	{
		{	/* Cfa/cinfo2.scm 57 */
			{
				BgL_procedurezd2refzd2appz00_bglt BgL_auxz00_15221;

				{
					obj_t BgL_auxz00_15222;

					{	/* Cfa/cinfo2.scm 57 */
						BgL_objectz00_bglt BgL_tmpz00_15223;

						BgL_tmpz00_15223 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7830));
						BgL_auxz00_15222 = BGL_OBJECT_WIDENING(BgL_tmpz00_15223);
					}
					BgL_auxz00_15221 =
						((BgL_procedurezd2refzd2appz00_bglt) BgL_auxz00_15222);
				}
				return
					(((BgL_procedurezd2refzd2appz00_bglt) COBJECT(BgL_auxz00_15221))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2105 */
	BgL_appz00_bglt BGl_z62lambda2105z62zzcfa_info2z00(obj_t BgL_envz00_7831,
		obj_t BgL_o1220z00_7832)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				long BgL_arg2106z00_8765;

				{	/* Cfa/cinfo2.scm 40 */
					obj_t BgL_arg2107z00_8766;

					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_arg2108z00_8767;

						{	/* Cfa/cinfo2.scm 40 */
							long BgL_arg1816z00_8768;

							{	/* Cfa/cinfo2.scm 40 */
								long BgL_arg1817z00_8769;

								{	/* Cfa/cinfo2.scm 40 */
									long BgL_res2880z00_8770;

									BgL_res2880z00_8770 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1220z00_7832)));
									BgL_arg1817z00_8769 = BgL_res2880z00_8770;
								}
								BgL_arg1816z00_8768 = (BgL_arg1817z00_8769 - OBJECT_TYPE);
							}
							BgL_arg2108z00_8767 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8768);
						}
						BgL_arg2107z00_8766 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2108z00_8767);
					}
					{	/* Cfa/cinfo2.scm 40 */
						long BgL_res2882z00_8771;

						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL_tmpz00_15235;

							BgL_tmpz00_15235 = ((obj_t) BgL_arg2107z00_8766);
							BgL_res2882z00_8771 = BGL_CLASS_INDEX(BgL_tmpz00_15235);
						}
						BgL_arg2106z00_8765 = BgL_res2882z00_8771;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1220z00_7832)), BgL_arg2106z00_8765);
			}
			{	/* Cfa/cinfo2.scm 40 */
				BgL_objectz00_bglt BgL_tmpz00_15241;

				BgL_tmpz00_15241 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1220z00_7832));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15241, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1220z00_7832));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1220z00_7832));
		}

	}



/* &<@anonymous:2104> */
	obj_t BGl_z62zc3z04anonymousza32104ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7833,
		obj_t BgL_new1219z00_7834)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_appz00_bglt BgL_auxz00_15249;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1219z00_7834))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_15253;

					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_classz00_8773;

						BgL_classz00_8773 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL__ortest_1106z00_8774;

							BgL__ortest_1106z00_8774 = BGL_CLASS_NIL(BgL_classz00_8773);
							if (CBOOL(BgL__ortest_1106z00_8774))
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15253 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8774);
								}
							else
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15253 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8773));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1219z00_7834))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_15253), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1219z00_7834))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1219z00_7834))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_15269;

					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_classz00_8775;

						BgL_classz00_8775 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL__ortest_1106z00_8776;

							BgL__ortest_1106z00_8776 = BGL_CLASS_NIL(BgL_classz00_8775);
							if (CBOOL(BgL__ortest_1106z00_8776))
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15269 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8776);
								}
							else
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15269 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8775));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1219z00_7834))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_15269), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1219z00_7834))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1219z00_7834))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_15292;
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15285;

					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_classz00_8777;

						BgL_classz00_8777 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL__ortest_1106z00_8778;

							BgL__ortest_1106z00_8778 = BGL_CLASS_NIL(BgL_classz00_8777);
							if (CBOOL(BgL__ortest_1106z00_8778))
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15292 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8778);
								}
							else
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15292 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8777));
								}
						}
					}
					{
						obj_t BgL_auxz00_15286;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15287;

							BgL_tmpz00_15287 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15286 = BGL_OBJECT_WIDENING(BgL_tmpz00_15287);
						}
						BgL_auxz00_15285 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15286);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15285))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_15292), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15300;

					{
						obj_t BgL_auxz00_15301;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15302;

							BgL_tmpz00_15302 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15301 = BGL_OBJECT_WIDENING(BgL_tmpz00_15302);
						}
						BgL_auxz00_15300 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15301);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15300))->
							BgL_valueszd2approxzd2) =
						((obj_t) CNST_TABLE_REF(((long) 43))), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15309;

					{
						obj_t BgL_auxz00_15310;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15311;

							BgL_tmpz00_15311 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15310 = BGL_OBJECT_WIDENING(BgL_tmpz00_15311);
						}
						BgL_auxz00_15309 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15310);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15309))->
							BgL_lostzd2stampzd2) = ((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15317;

					{
						obj_t BgL_auxz00_15318;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15319;

							BgL_tmpz00_15319 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15318 = BGL_OBJECT_WIDENING(BgL_tmpz00_15319);
						}
						BgL_auxz00_15317 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15318);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15317))->
							BgL_xzd2tzf3z21) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15325;

					{
						obj_t BgL_auxz00_15326;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15327;

							BgL_tmpz00_15327 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15326 = BGL_OBJECT_WIDENING(BgL_tmpz00_15327);
						}
						BgL_auxz00_15325 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15326);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15325))->
							BgL_xz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15333;

					{
						obj_t BgL_auxz00_15334;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15335;

							BgL_tmpz00_15335 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15334 = BGL_OBJECT_WIDENING(BgL_tmpz00_15335);
						}
						BgL_auxz00_15333 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15334);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15333))->
							BgL_tz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_variablez00_bglt BgL_auxz00_15348;
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15341;

					{	/* Cfa/cinfo2.scm 40 */
						obj_t BgL_classz00_8779;

						BgL_classz00_8779 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL__ortest_1106z00_8780;

							BgL__ortest_1106z00_8780 = BGL_CLASS_NIL(BgL_classz00_8779);
							if (CBOOL(BgL__ortest_1106z00_8780))
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15348 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8780);
								}
							else
								{	/* Cfa/cinfo2.scm 40 */
									BgL_auxz00_15348 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8779));
								}
						}
					}
					{
						obj_t BgL_auxz00_15342;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15343;

							BgL_tmpz00_15343 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15342 = BGL_OBJECT_WIDENING(BgL_tmpz00_15343);
						}
						BgL_auxz00_15341 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15342);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15341))->
							BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_15348), BUNSPEC);
				}
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15356;

					{
						obj_t BgL_auxz00_15357;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15358;

							BgL_tmpz00_15358 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1219z00_7834));
							BgL_auxz00_15357 = BGL_OBJECT_WIDENING(BgL_tmpz00_15358);
						}
						BgL_auxz00_15356 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15357);
					}
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15356))->
							BgL_stackzd2stampzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_15249 = ((BgL_appz00_bglt) BgL_new1219z00_7834);
				return ((obj_t) BgL_auxz00_15249);
			}
		}

	}



/* &lambda2102 */
	BgL_appz00_bglt BGl_z62lambda2102z62zzcfa_info2z00(obj_t BgL_envz00_7835,
		obj_t BgL_o1216z00_7836)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				BgL_makezd2procedurezd2appz00_bglt BgL_wide1218z00_8782;

				BgL_wide1218z00_8782 =
					((BgL_makezd2procedurezd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_makezd2procedurezd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 40 */
					obj_t BgL_auxz00_15371;
					BgL_objectz00_bglt BgL_tmpz00_15367;

					BgL_auxz00_15371 = ((obj_t) BgL_wide1218z00_8782);
					BgL_tmpz00_15367 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1216z00_7836)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15367, BgL_auxz00_15371);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1216z00_7836)));
				{	/* Cfa/cinfo2.scm 40 */
					long BgL_arg2103z00_8783;

					{	/* Cfa/cinfo2.scm 40 */
						long BgL_res2879z00_8784;

						BgL_res2879z00_8784 =
							BGL_CLASS_INDEX(BGl_makezd2procedurezd2appz00zzcfa_info2z00);
						BgL_arg2103z00_8783 = BgL_res2879z00_8784;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1216z00_7836))), BgL_arg2103z00_8783);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1216z00_7836)));
			}
		}

	}



/* &lambda2098 */
	BgL_appz00_bglt BGl_z62lambda2098z62zzcfa_info2z00(obj_t BgL_envz00_7837,
		obj_t BgL_loc1201z00_7838, obj_t BgL_type1202z00_7839,
		obj_t BgL_sidezd2effect1203zd2_7840, obj_t BgL_key1204z00_7841,
		obj_t BgL_fun1205z00_7842, obj_t BgL_args1206z00_7843,
		obj_t BgL_stackable1207z00_7844, obj_t BgL_approx1208z00_7845,
		obj_t BgL_valueszd2approx1209zd2_7846, obj_t BgL_lostzd2stamp1210zd2_7847,
		obj_t BgL_xzd2tzf31211z21_7848, obj_t BgL_x1212z00_7849,
		obj_t BgL_t1213z00_7850, obj_t BgL_owner1214z00_7851,
		obj_t BgL_stackzd2stamp1215zd2_7852)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				long BgL_lostzd2stamp1210zd2_8789;
				bool_t BgL_xzd2tzf31211z21_8790;
				bool_t BgL_x1212z00_8791;
				bool_t BgL_t1213z00_8792;

				BgL_lostzd2stamp1210zd2_8789 =
					(long) CINT(BgL_lostzd2stamp1210zd2_7847);
				BgL_xzd2tzf31211z21_8790 = CBOOL(BgL_xzd2tzf31211z21_7848);
				BgL_x1212z00_8791 = CBOOL(BgL_x1212z00_7849);
				BgL_t1213z00_8792 = CBOOL(BgL_t1213z00_7850);
				{	/* Cfa/cinfo2.scm 40 */
					BgL_appz00_bglt BgL_new1577z00_8794;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_appz00_bglt BgL_tmp1575z00_8795;
						BgL_makezd2procedurezd2appz00_bglt BgL_wide1576z00_8796;

						{
							BgL_appz00_bglt BgL_auxz00_15389;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_appz00_bglt BgL_new1574z00_8797;

								BgL_new1574z00_8797 =
									((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_appz00_bgl))));
								{	/* Cfa/cinfo2.scm 40 */
									long BgL_arg2101z00_8798;

									{	/* Cfa/cinfo2.scm 40 */
										long BgL_res2877z00_8799;

										BgL_res2877z00_8799 =
											BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
										BgL_arg2101z00_8798 = BgL_res2877z00_8799;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1574z00_8797),
										BgL_arg2101z00_8798);
								}
								{	/* Cfa/cinfo2.scm 40 */
									BgL_objectz00_bglt BgL_tmpz00_15394;

									BgL_tmpz00_15394 = ((BgL_objectz00_bglt) BgL_new1574z00_8797);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15394, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1574z00_8797);
								BgL_auxz00_15389 = BgL_new1574z00_8797;
							}
							BgL_tmp1575z00_8795 = ((BgL_appz00_bglt) BgL_auxz00_15389);
						}
						BgL_wide1576z00_8796 =
							((BgL_makezd2procedurezd2appz00_bglt)
							BOBJECT(GC_MALLOC(sizeof(struct
										BgL_makezd2procedurezd2appz00_bgl))));
						{	/* Cfa/cinfo2.scm 40 */
							obj_t BgL_auxz00_15402;
							BgL_objectz00_bglt BgL_tmpz00_15400;

							BgL_auxz00_15402 = ((obj_t) BgL_wide1576z00_8796);
							BgL_tmpz00_15400 = ((BgL_objectz00_bglt) BgL_tmp1575z00_8795);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15400, BgL_auxz00_15402);
						}
						((BgL_objectz00_bglt) BgL_tmp1575z00_8795);
						{	/* Cfa/cinfo2.scm 40 */
							long BgL_arg2100z00_8800;

							{	/* Cfa/cinfo2.scm 40 */
								long BgL_res2878z00_8801;

								BgL_res2878z00_8801 =
									BGL_CLASS_INDEX(BGl_makezd2procedurezd2appz00zzcfa_info2z00);
								BgL_arg2100z00_8800 = BgL_res2878z00_8801;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1575z00_8795),
								BgL_arg2100z00_8800);
						}
						BgL_new1577z00_8794 = ((BgL_appz00_bglt) BgL_tmp1575z00_8795);
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt) BgL_new1577z00_8794)))->BgL_locz00) =
						((obj_t) BgL_loc1201z00_7838), BUNSPEC);
					((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
										BgL_new1577z00_8794)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1202z00_7839)),
						BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1577z00_8794)))->BgL_sidezd2effectzd2) =
						((obj_t) BgL_sidezd2effect1203zd2_7840), BUNSPEC);
					((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
										BgL_new1577z00_8794)))->BgL_keyz00) =
						((obj_t) BgL_key1204z00_7841), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1577z00_8794)))->BgL_funz00) =
						((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1205z00_7842)),
						BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1577z00_8794)))->BgL_argsz00) =
						((obj_t) BgL_args1206z00_7843), BUNSPEC);
					((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt)
										BgL_new1577z00_8794)))->BgL_stackablez00) =
						((obj_t) BgL_stackable1207z00_7844), BUNSPEC);
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15426;

						{
							obj_t BgL_auxz00_15427;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15428;

								BgL_tmpz00_15428 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15427 = BGL_OBJECT_WIDENING(BgL_tmpz00_15428);
							}
							BgL_auxz00_15426 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15427);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15426))->
								BgL_approxz00) =
							((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
									BgL_approx1208z00_7845)), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15434;

						{
							obj_t BgL_auxz00_15435;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15436;

								BgL_tmpz00_15436 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15435 = BGL_OBJECT_WIDENING(BgL_tmpz00_15436);
							}
							BgL_auxz00_15434 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15435);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15434))->
								BgL_valueszd2approxzd2) =
							((obj_t) ((obj_t) BgL_valueszd2approx1209zd2_7846)), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15442;

						{
							obj_t BgL_auxz00_15443;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15444;

								BgL_tmpz00_15444 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15443 = BGL_OBJECT_WIDENING(BgL_tmpz00_15444);
							}
							BgL_auxz00_15442 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15443);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15442))->
								BgL_lostzd2stampzd2) =
							((long) BgL_lostzd2stamp1210zd2_8789), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15449;

						{
							obj_t BgL_auxz00_15450;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15451;

								BgL_tmpz00_15451 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15450 = BGL_OBJECT_WIDENING(BgL_tmpz00_15451);
							}
							BgL_auxz00_15449 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15450);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15449))->
								BgL_xzd2tzf3z21) =
							((bool_t) BgL_xzd2tzf31211z21_8790), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15456;

						{
							obj_t BgL_auxz00_15457;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15458;

								BgL_tmpz00_15458 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15457 = BGL_OBJECT_WIDENING(BgL_tmpz00_15458);
							}
							BgL_auxz00_15456 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15457);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15456))->
								BgL_xz00) = ((bool_t) BgL_x1212z00_8791), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15463;

						{
							obj_t BgL_auxz00_15464;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15465;

								BgL_tmpz00_15465 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15464 = BGL_OBJECT_WIDENING(BgL_tmpz00_15465);
							}
							BgL_auxz00_15463 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15464);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15463))->
								BgL_tz00) = ((bool_t) BgL_t1213z00_8792), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15470;

						{
							obj_t BgL_auxz00_15471;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15472;

								BgL_tmpz00_15472 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15471 = BGL_OBJECT_WIDENING(BgL_tmpz00_15472);
							}
							BgL_auxz00_15470 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15471);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15470))->
								BgL_ownerz00) =
							((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
									BgL_owner1214z00_7851)), BUNSPEC);
					}
					{
						BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15478;

						{
							obj_t BgL_auxz00_15479;

							{	/* Cfa/cinfo2.scm 40 */
								BgL_objectz00_bglt BgL_tmpz00_15480;

								BgL_tmpz00_15480 = ((BgL_objectz00_bglt) BgL_new1577z00_8794);
								BgL_auxz00_15479 = BGL_OBJECT_WIDENING(BgL_tmpz00_15480);
							}
							BgL_auxz00_15478 =
								((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15479);
						}
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15478))->
								BgL_stackzd2stampzd2) =
							((obj_t) BgL_stackzd2stamp1215zd2_7852), BUNSPEC);
					}
					return BgL_new1577z00_8794;
				}
			}
		}

	}



/* &<@anonymous:2158> */
	obj_t BGl_z62zc3z04anonymousza32158ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7853)
	{
		{	/* Cfa/cinfo2.scm 40 */
			return BNIL;
		}

	}



/* &lambda2157 */
	obj_t BGl_z62lambda2157z62zzcfa_info2z00(obj_t BgL_envz00_7854,
		obj_t BgL_oz00_7855, obj_t BgL_vz00_7856)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15485;

				{
					obj_t BgL_auxz00_15486;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15487;

						BgL_tmpz00_15487 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7855));
						BgL_auxz00_15486 = BGL_OBJECT_WIDENING(BgL_tmpz00_15487);
					}
					BgL_auxz00_15485 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15486);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15485))->
						BgL_stackzd2stampzd2) = ((obj_t) BgL_vz00_7856), BUNSPEC);
			}
		}

	}



/* &lambda2156 */
	obj_t BGl_z62lambda2156z62zzcfa_info2z00(obj_t BgL_envz00_7857,
		obj_t BgL_oz00_7858)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15493;

				{
					obj_t BgL_auxz00_15494;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15495;

						BgL_tmpz00_15495 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7858));
						BgL_auxz00_15494 = BGL_OBJECT_WIDENING(BgL_tmpz00_15495);
					}
					BgL_auxz00_15493 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15494);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15493))->
					BgL_stackzd2stampzd2);
			}
		}

	}



/* &lambda2151 */
	obj_t BGl_z62lambda2151z62zzcfa_info2z00(obj_t BgL_envz00_7859,
		obj_t BgL_oz00_7860, obj_t BgL_vz00_7861)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15501;

				{
					obj_t BgL_auxz00_15502;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15503;

						BgL_tmpz00_15503 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7860));
						BgL_auxz00_15502 = BGL_OBJECT_WIDENING(BgL_tmpz00_15503);
					}
					BgL_auxz00_15501 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15502);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15501))->
						BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7861)),
					BUNSPEC);
			}
		}

	}



/* &lambda2150 */
	BgL_variablez00_bglt BGl_z62lambda2150z62zzcfa_info2z00(obj_t BgL_envz00_7862,
		obj_t BgL_oz00_7863)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15510;

				{
					obj_t BgL_auxz00_15511;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15512;

						BgL_tmpz00_15512 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7863));
						BgL_auxz00_15511 = BGL_OBJECT_WIDENING(BgL_tmpz00_15512);
					}
					BgL_auxz00_15510 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15511);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15510))->
					BgL_ownerz00);
			}
		}

	}



/* &<@anonymous:2146> */
	obj_t BGl_z62zc3z04anonymousza32146ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7864)
	{
		{	/* Cfa/cinfo2.scm 40 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2145 */
	obj_t BGl_z62lambda2145z62zzcfa_info2z00(obj_t BgL_envz00_7865,
		obj_t BgL_oz00_7866, obj_t BgL_vz00_7867)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_vz00_8808;

				BgL_vz00_8808 = CBOOL(BgL_vz00_7867);
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15520;

					{
						obj_t BgL_auxz00_15521;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15522;

							BgL_tmpz00_15522 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7866));
							BgL_auxz00_15521 = BGL_OBJECT_WIDENING(BgL_tmpz00_15522);
						}
						BgL_auxz00_15520 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15521);
					}
					return
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15520))->
							BgL_tz00) = ((bool_t) BgL_vz00_8808), BUNSPEC);
				}
			}
		}

	}



/* &lambda2144 */
	obj_t BGl_z62lambda2144z62zzcfa_info2z00(obj_t BgL_envz00_7868,
		obj_t BgL_oz00_7869)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_tmpz00_15528;

				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15529;

					{
						obj_t BgL_auxz00_15530;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15531;

							BgL_tmpz00_15531 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7869));
							BgL_auxz00_15530 = BGL_OBJECT_WIDENING(BgL_tmpz00_15531);
						}
						BgL_auxz00_15529 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15530);
					}
					BgL_tmpz00_15528 =
						(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15529))->
						BgL_tz00);
				}
				return BBOOL(BgL_tmpz00_15528);
			}
		}

	}



/* &<@anonymous:2139> */
	obj_t BGl_z62zc3z04anonymousza32139ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7870)
	{
		{	/* Cfa/cinfo2.scm 40 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2138 */
	obj_t BGl_z62lambda2138z62zzcfa_info2z00(obj_t BgL_envz00_7871,
		obj_t BgL_oz00_7872, obj_t BgL_vz00_7873)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_vz00_8811;

				BgL_vz00_8811 = CBOOL(BgL_vz00_7873);
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15540;

					{
						obj_t BgL_auxz00_15541;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15542;

							BgL_tmpz00_15542 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7872));
							BgL_auxz00_15541 = BGL_OBJECT_WIDENING(BgL_tmpz00_15542);
						}
						BgL_auxz00_15540 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15541);
					}
					return
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15540))->
							BgL_xz00) = ((bool_t) BgL_vz00_8811), BUNSPEC);
				}
			}
		}

	}



/* &lambda2137 */
	obj_t BGl_z62lambda2137z62zzcfa_info2z00(obj_t BgL_envz00_7874,
		obj_t BgL_oz00_7875)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_tmpz00_15548;

				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15549;

					{
						obj_t BgL_auxz00_15550;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15551;

							BgL_tmpz00_15551 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7875));
							BgL_auxz00_15550 = BGL_OBJECT_WIDENING(BgL_tmpz00_15551);
						}
						BgL_auxz00_15549 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15550);
					}
					BgL_tmpz00_15548 =
						(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15549))->
						BgL_xz00);
				}
				return BBOOL(BgL_tmpz00_15548);
			}
		}

	}



/* &<@anonymous:2132> */
	obj_t BGl_z62zc3z04anonymousza32132ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7876)
	{
		{	/* Cfa/cinfo2.scm 40 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda2131 */
	obj_t BGl_z62lambda2131z62zzcfa_info2z00(obj_t BgL_envz00_7877,
		obj_t BgL_oz00_7878, obj_t BgL_vz00_7879)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_vz00_8814;

				BgL_vz00_8814 = CBOOL(BgL_vz00_7879);
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15560;

					{
						obj_t BgL_auxz00_15561;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15562;

							BgL_tmpz00_15562 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7878));
							BgL_auxz00_15561 = BGL_OBJECT_WIDENING(BgL_tmpz00_15562);
						}
						BgL_auxz00_15560 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15561);
					}
					return
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15560))->
							BgL_xzd2tzf3z21) = ((bool_t) BgL_vz00_8814), BUNSPEC);
				}
			}
		}

	}



/* &lambda2130 */
	obj_t BGl_z62lambda2130z62zzcfa_info2z00(obj_t BgL_envz00_7880,
		obj_t BgL_oz00_7881)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				bool_t BgL_tmpz00_15568;

				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15569;

					{
						obj_t BgL_auxz00_15570;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15571;

							BgL_tmpz00_15571 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7881));
							BgL_auxz00_15570 = BGL_OBJECT_WIDENING(BgL_tmpz00_15571);
						}
						BgL_auxz00_15569 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15570);
					}
					BgL_tmpz00_15568 =
						(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15569))->
						BgL_xzd2tzf3z21);
				}
				return BBOOL(BgL_tmpz00_15568);
			}
		}

	}



/* &<@anonymous:2125> */
	obj_t BGl_z62zc3z04anonymousza32125ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7882)
	{
		{	/* Cfa/cinfo2.scm 40 */
			return BINT(((long) -1));
		}

	}



/* &lambda2124 */
	obj_t BGl_z62lambda2124z62zzcfa_info2z00(obj_t BgL_envz00_7883,
		obj_t BgL_oz00_7884, obj_t BgL_vz00_7885)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				long BgL_vz00_8817;

				BgL_vz00_8817 = (long) CINT(BgL_vz00_7885);
				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15580;

					{
						obj_t BgL_auxz00_15581;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15582;

							BgL_tmpz00_15582 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7884));
							BgL_auxz00_15581 = BGL_OBJECT_WIDENING(BgL_tmpz00_15582);
						}
						BgL_auxz00_15580 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15581);
					}
					return
						((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15580))->
							BgL_lostzd2stampzd2) = ((long) BgL_vz00_8817), BUNSPEC);
		}}}

	}



/* &lambda2123 */
	obj_t BGl_z62lambda2123z62zzcfa_info2z00(obj_t BgL_envz00_7886,
		obj_t BgL_oz00_7887)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{	/* Cfa/cinfo2.scm 40 */
				long BgL_tmpz00_15588;

				{
					BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15589;

					{
						obj_t BgL_auxz00_15590;

						{	/* Cfa/cinfo2.scm 40 */
							BgL_objectz00_bglt BgL_tmpz00_15591;

							BgL_tmpz00_15591 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7887));
							BgL_auxz00_15590 = BGL_OBJECT_WIDENING(BgL_tmpz00_15591);
						}
						BgL_auxz00_15589 =
							((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15590);
					}
					BgL_tmpz00_15588 =
						(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15589))->
						BgL_lostzd2stampzd2);
				}
				return BINT(BgL_tmpz00_15588);
			}
		}

	}



/* &lambda2118 */
	obj_t BGl_z62lambda2118z62zzcfa_info2z00(obj_t BgL_envz00_7888,
		obj_t BgL_oz00_7889, obj_t BgL_vz00_7890)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15598;

				{
					obj_t BgL_auxz00_15599;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15600;

						BgL_tmpz00_15600 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7889));
						BgL_auxz00_15599 = BGL_OBJECT_WIDENING(BgL_tmpz00_15600);
					}
					BgL_auxz00_15598 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15599);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15598))->
						BgL_valueszd2approxzd2) =
					((obj_t) ((obj_t) BgL_vz00_7890)), BUNSPEC);
			}
		}

	}



/* &lambda2117 */
	obj_t BGl_z62lambda2117z62zzcfa_info2z00(obj_t BgL_envz00_7891,
		obj_t BgL_oz00_7892)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15607;

				{
					obj_t BgL_auxz00_15608;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15609;

						BgL_tmpz00_15609 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7892));
						BgL_auxz00_15608 = BGL_OBJECT_WIDENING(BgL_tmpz00_15609);
					}
					BgL_auxz00_15607 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15608);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15607))->
					BgL_valueszd2approxzd2);
			}
		}

	}



/* &lambda2113 */
	obj_t BGl_z62lambda2113z62zzcfa_info2z00(obj_t BgL_envz00_7893,
		obj_t BgL_oz00_7894, obj_t BgL_vz00_7895)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15615;

				{
					obj_t BgL_auxz00_15616;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15617;

						BgL_tmpz00_15617 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7894));
						BgL_auxz00_15616 = BGL_OBJECT_WIDENING(BgL_tmpz00_15617);
					}
					BgL_auxz00_15615 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15616);
				}
				return
					((((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15615))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7895)), BUNSPEC);
			}
		}

	}



/* &lambda2112 */
	BgL_approxz00_bglt BGl_z62lambda2112z62zzcfa_info2z00(obj_t BgL_envz00_7896,
		obj_t BgL_oz00_7897)
	{
		{	/* Cfa/cinfo2.scm 40 */
			{
				BgL_makezd2procedurezd2appz00_bglt BgL_auxz00_15624;

				{
					obj_t BgL_auxz00_15625;

					{	/* Cfa/cinfo2.scm 40 */
						BgL_objectz00_bglt BgL_tmpz00_15626;

						BgL_tmpz00_15626 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7897));
						BgL_auxz00_15625 = BGL_OBJECT_WIDENING(BgL_tmpz00_15626);
					}
					BgL_auxz00_15624 =
						((BgL_makezd2procedurezd2appz00_bglt) BgL_auxz00_15625);
				}
				return
					(((BgL_makezd2procedurezd2appz00_bglt) COBJECT(BgL_auxz00_15624))->
					BgL_approxz00);
			}
		}

	}



/* &lambda2088 */
	BgL_appz00_bglt BGl_z62lambda2088z62zzcfa_info2z00(obj_t BgL_envz00_7898,
		obj_t BgL_o1199z00_7899)
	{
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				long BgL_arg2089z00_8826;

				{	/* Cfa/cinfo2.scm 38 */
					obj_t BgL_arg2090z00_8827;

					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_arg2091z00_8828;

						{	/* Cfa/cinfo2.scm 38 */
							long BgL_arg1816z00_8829;

							{	/* Cfa/cinfo2.scm 38 */
								long BgL_arg1817z00_8830;

								{	/* Cfa/cinfo2.scm 38 */
									long BgL_res2874z00_8831;

									BgL_res2874z00_8831 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1199z00_7899)));
									BgL_arg1817z00_8830 = BgL_res2874z00_8831;
								}
								BgL_arg1816z00_8829 = (BgL_arg1817z00_8830 - OBJECT_TYPE);
							}
							BgL_arg2091z00_8828 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8829);
						}
						BgL_arg2090z00_8827 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2091z00_8828);
					}
					{	/* Cfa/cinfo2.scm 38 */
						long BgL_res2876z00_8832;

						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL_tmpz00_15638;

							BgL_tmpz00_15638 = ((obj_t) BgL_arg2090z00_8827);
							BgL_res2876z00_8832 = BGL_CLASS_INDEX(BgL_tmpz00_15638);
						}
						BgL_arg2089z00_8826 = BgL_res2876z00_8832;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1199z00_7899)), BgL_arg2089z00_8826);
			}
			{	/* Cfa/cinfo2.scm 38 */
				BgL_objectz00_bglt BgL_tmpz00_15644;

				BgL_tmpz00_15644 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1199z00_7899));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15644, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1199z00_7899));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1199z00_7899));
		}

	}



/* &<@anonymous:2087> */
	obj_t BGl_z62zc3z04anonymousza32087ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7900,
		obj_t BgL_new1198z00_7901)
	{
		{	/* Cfa/cinfo2.scm 38 */
			{
				BgL_appz00_bglt BgL_auxz00_15652;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1198z00_7901))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_15656;

					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_classz00_8834;

						BgL_classz00_8834 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL__ortest_1106z00_8835;

							BgL__ortest_1106z00_8835 = BGL_CLASS_NIL(BgL_classz00_8834);
							if (CBOOL(BgL__ortest_1106z00_8835))
								{	/* Cfa/cinfo2.scm 38 */
									BgL_auxz00_15656 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8835);
								}
							else
								{	/* Cfa/cinfo2.scm 38 */
									BgL_auxz00_15656 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8834));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1198z00_7901))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_15656), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1198z00_7901))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1198z00_7901))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_15672;

					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_classz00_8836;

						BgL_classz00_8836 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 38 */
							obj_t BgL__ortest_1106z00_8837;

							BgL__ortest_1106z00_8837 = BGL_CLASS_NIL(BgL_classz00_8836);
							if (CBOOL(BgL__ortest_1106z00_8837))
								{	/* Cfa/cinfo2.scm 38 */
									BgL_auxz00_15672 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8837);
								}
							else
								{	/* Cfa/cinfo2.scm 38 */
									BgL_auxz00_15672 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8836));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1198z00_7901))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_15672), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1198z00_7901))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1198z00_7901))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_15652 = ((BgL_appz00_bglt) BgL_new1198z00_7901);
				return ((obj_t) BgL_auxz00_15652);
			}
		}

	}



/* &lambda2085 */
	BgL_appz00_bglt BGl_z62lambda2085z62zzcfa_info2z00(obj_t BgL_envz00_7902,
		obj_t BgL_o1195z00_7903)
	{
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_wide1197z00_8839;

				BgL_wide1197z00_8839 =
					((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2procedurezd2setz12zd2appzc0_bgl))));
				{	/* Cfa/cinfo2.scm 38 */
					obj_t BgL_auxz00_15695;
					BgL_objectz00_bglt BgL_tmpz00_15691;

					BgL_auxz00_15695 = ((obj_t) BgL_wide1197z00_8839);
					BgL_tmpz00_15691 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1195z00_7903)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15691, BgL_auxz00_15695);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1195z00_7903)));
				{	/* Cfa/cinfo2.scm 38 */
					long BgL_arg2086z00_8840;

					{	/* Cfa/cinfo2.scm 38 */
						long BgL_res2873z00_8841;

						BgL_res2873z00_8841 =
							BGL_CLASS_INDEX
							(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
						BgL_arg2086z00_8840 = BgL_res2873z00_8841;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1195z00_7903))), BgL_arg2086z00_8840);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1195z00_7903)));
			}
		}

	}



/* &lambda2082 */
	BgL_appz00_bglt BGl_z62lambda2082z62zzcfa_info2z00(obj_t BgL_envz00_7904,
		obj_t BgL_loc1188z00_7905, obj_t BgL_type1189z00_7906,
		obj_t BgL_sidezd2effect1190zd2_7907, obj_t BgL_key1191z00_7908,
		obj_t BgL_fun1192z00_7909, obj_t BgL_args1193z00_7910,
		obj_t BgL_stackable1194z00_7911)
	{
		{	/* Cfa/cinfo2.scm 38 */
			{	/* Cfa/cinfo2.scm 38 */
				BgL_appz00_bglt BgL_new1572z00_8844;

				{	/* Cfa/cinfo2.scm 38 */
					BgL_appz00_bglt BgL_tmp1570z00_8845;
					BgL_prezd2procedurezd2setz12zd2appzc0_bglt BgL_wide1571z00_8846;

					{
						BgL_appz00_bglt BgL_auxz00_15709;

						{	/* Cfa/cinfo2.scm 38 */
							BgL_appz00_bglt BgL_new1569z00_8847;

							BgL_new1569z00_8847 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 38 */
								long BgL_arg2084z00_8848;

								{	/* Cfa/cinfo2.scm 38 */
									long BgL_res2871z00_8849;

									BgL_res2871z00_8849 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2084z00_8848 = BgL_res2871z00_8849;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1569z00_8847),
									BgL_arg2084z00_8848);
							}
							{	/* Cfa/cinfo2.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_15714;

								BgL_tmpz00_15714 = ((BgL_objectz00_bglt) BgL_new1569z00_8847);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15714, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1569z00_8847);
							BgL_auxz00_15709 = BgL_new1569z00_8847;
						}
						BgL_tmp1570z00_8845 = ((BgL_appz00_bglt) BgL_auxz00_15709);
					}
					BgL_wide1571z00_8846 =
						((BgL_prezd2procedurezd2setz12zd2appzc0_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2procedurezd2setz12zd2appzc0_bgl))));
					{	/* Cfa/cinfo2.scm 38 */
						obj_t BgL_auxz00_15722;
						BgL_objectz00_bglt BgL_tmpz00_15720;

						BgL_auxz00_15722 = ((obj_t) BgL_wide1571z00_8846);
						BgL_tmpz00_15720 = ((BgL_objectz00_bglt) BgL_tmp1570z00_8845);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15720, BgL_auxz00_15722);
					}
					((BgL_objectz00_bglt) BgL_tmp1570z00_8845);
					{	/* Cfa/cinfo2.scm 38 */
						long BgL_arg2083z00_8850;

						{	/* Cfa/cinfo2.scm 38 */
							long BgL_res2872z00_8851;

							BgL_res2872z00_8851 =
								BGL_CLASS_INDEX
								(BGl_prezd2procedurezd2setz12zd2appzc0zzcfa_info2z00);
							BgL_arg2083z00_8850 = BgL_res2872z00_8851;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1570z00_8845), BgL_arg2083z00_8850);
					}
					BgL_new1572z00_8844 = ((BgL_appz00_bglt) BgL_tmp1570z00_8845);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1572z00_8844)))->BgL_locz00) =
					((obj_t) BgL_loc1188z00_7905), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1572z00_8844)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1189z00_7906)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1572z00_8844)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1190zd2_7907), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1572z00_8844)))->BgL_keyz00) =
					((obj_t) BgL_key1191z00_7908), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1572z00_8844)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1192z00_7909)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1572z00_8844)))->
						BgL_argsz00) = ((obj_t) BgL_args1193z00_7910), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1572z00_8844)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1194z00_7911), BUNSPEC);
				return BgL_new1572z00_8844;
			}
		}

	}



/* &lambda2070 */
	BgL_appz00_bglt BGl_z62lambda2070z62zzcfa_info2z00(obj_t BgL_envz00_7912,
		obj_t BgL_o1186z00_7913)
	{
		{	/* Cfa/cinfo2.scm 37 */
			{	/* Cfa/cinfo2.scm 37 */
				long BgL_arg2071z00_8853;

				{	/* Cfa/cinfo2.scm 37 */
					obj_t BgL_arg2072z00_8854;

					{	/* Cfa/cinfo2.scm 37 */
						obj_t BgL_arg2075z00_8855;

						{	/* Cfa/cinfo2.scm 37 */
							long BgL_arg1816z00_8856;

							{	/* Cfa/cinfo2.scm 37 */
								long BgL_arg1817z00_8857;

								{	/* Cfa/cinfo2.scm 37 */
									long BgL_res2868z00_8858;

									BgL_res2868z00_8858 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1186z00_7913)));
									BgL_arg1817z00_8857 = BgL_res2868z00_8858;
								}
								BgL_arg1816z00_8856 = (BgL_arg1817z00_8857 - OBJECT_TYPE);
							}
							BgL_arg2075z00_8855 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8856);
						}
						BgL_arg2072z00_8854 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2075z00_8855);
					}
					{	/* Cfa/cinfo2.scm 37 */
						long BgL_res2870z00_8859;

						{	/* Cfa/cinfo2.scm 37 */
							obj_t BgL_tmpz00_15752;

							BgL_tmpz00_15752 = ((obj_t) BgL_arg2072z00_8854);
							BgL_res2870z00_8859 = BGL_CLASS_INDEX(BgL_tmpz00_15752);
						}
						BgL_arg2071z00_8853 = BgL_res2870z00_8859;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1186z00_7913)), BgL_arg2071z00_8853);
			}
			{	/* Cfa/cinfo2.scm 37 */
				BgL_objectz00_bglt BgL_tmpz00_15758;

				BgL_tmpz00_15758 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1186z00_7913));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15758, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1186z00_7913));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1186z00_7913));
		}

	}



/* &<@anonymous:2069> */
	obj_t BGl_z62zc3z04anonymousza32069ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7914,
		obj_t BgL_new1185z00_7915)
	{
		{	/* Cfa/cinfo2.scm 37 */
			{
				BgL_appz00_bglt BgL_auxz00_15766;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1185z00_7915))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_15770;

					{	/* Cfa/cinfo2.scm 37 */
						obj_t BgL_classz00_8861;

						BgL_classz00_8861 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 37 */
							obj_t BgL__ortest_1106z00_8862;

							BgL__ortest_1106z00_8862 = BGL_CLASS_NIL(BgL_classz00_8861);
							if (CBOOL(BgL__ortest_1106z00_8862))
								{	/* Cfa/cinfo2.scm 37 */
									BgL_auxz00_15770 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8862);
								}
							else
								{	/* Cfa/cinfo2.scm 37 */
									BgL_auxz00_15770 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8861));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1185z00_7915))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_15770), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1185z00_7915))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1185z00_7915))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_15786;

					{	/* Cfa/cinfo2.scm 37 */
						obj_t BgL_classz00_8863;

						BgL_classz00_8863 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 37 */
							obj_t BgL__ortest_1106z00_8864;

							BgL__ortest_1106z00_8864 = BGL_CLASS_NIL(BgL_classz00_8863);
							if (CBOOL(BgL__ortest_1106z00_8864))
								{	/* Cfa/cinfo2.scm 37 */
									BgL_auxz00_15786 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8864);
								}
							else
								{	/* Cfa/cinfo2.scm 37 */
									BgL_auxz00_15786 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8863));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1185z00_7915))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_15786), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1185z00_7915))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1185z00_7915))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_15766 = ((BgL_appz00_bglt) BgL_new1185z00_7915);
				return ((obj_t) BgL_auxz00_15766);
			}
		}

	}



/* &lambda2066 */
	BgL_appz00_bglt BGl_z62lambda2066z62zzcfa_info2z00(obj_t BgL_envz00_7916,
		obj_t BgL_o1182z00_7917)
	{
		{	/* Cfa/cinfo2.scm 37 */
			{	/* Cfa/cinfo2.scm 37 */
				BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_wide1184z00_8866;

				BgL_wide1184z00_8866 =
					((BgL_prezd2procedurezd2refzd2appzd2_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2procedurezd2refzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 37 */
					obj_t BgL_auxz00_15809;
					BgL_objectz00_bglt BgL_tmpz00_15805;

					BgL_auxz00_15809 = ((obj_t) BgL_wide1184z00_8866);
					BgL_tmpz00_15805 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1182z00_7917)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15805, BgL_auxz00_15809);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1182z00_7917)));
				{	/* Cfa/cinfo2.scm 37 */
					long BgL_arg2068z00_8867;

					{	/* Cfa/cinfo2.scm 37 */
						long BgL_res2867z00_8868;

						BgL_res2867z00_8868 =
							BGL_CLASS_INDEX(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
						BgL_arg2068z00_8867 = BgL_res2867z00_8868;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1182z00_7917))), BgL_arg2068z00_8867);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1182z00_7917)));
			}
		}

	}



/* &lambda2062 */
	BgL_appz00_bglt BGl_z62lambda2062z62zzcfa_info2z00(obj_t BgL_envz00_7918,
		obj_t BgL_loc1175z00_7919, obj_t BgL_type1176z00_7920,
		obj_t BgL_sidezd2effect1177zd2_7921, obj_t BgL_key1178z00_7922,
		obj_t BgL_fun1179z00_7923, obj_t BgL_args1180z00_7924,
		obj_t BgL_stackable1181z00_7925)
	{
		{	/* Cfa/cinfo2.scm 37 */
			{	/* Cfa/cinfo2.scm 37 */
				BgL_appz00_bglt BgL_new1567z00_8871;

				{	/* Cfa/cinfo2.scm 37 */
					BgL_appz00_bglt BgL_tmp1565z00_8872;
					BgL_prezd2procedurezd2refzd2appzd2_bglt BgL_wide1566z00_8873;

					{
						BgL_appz00_bglt BgL_auxz00_15823;

						{	/* Cfa/cinfo2.scm 37 */
							BgL_appz00_bglt BgL_new1564z00_8874;

							BgL_new1564z00_8874 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 37 */
								long BgL_arg2065z00_8875;

								{	/* Cfa/cinfo2.scm 37 */
									long BgL_res2865z00_8876;

									BgL_res2865z00_8876 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2065z00_8875 = BgL_res2865z00_8876;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1564z00_8874),
									BgL_arg2065z00_8875);
							}
							{	/* Cfa/cinfo2.scm 37 */
								BgL_objectz00_bglt BgL_tmpz00_15828;

								BgL_tmpz00_15828 = ((BgL_objectz00_bglt) BgL_new1564z00_8874);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15828, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1564z00_8874);
							BgL_auxz00_15823 = BgL_new1564z00_8874;
						}
						BgL_tmp1565z00_8872 = ((BgL_appz00_bglt) BgL_auxz00_15823);
					}
					BgL_wide1566z00_8873 =
						((BgL_prezd2procedurezd2refzd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2procedurezd2refzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 37 */
						obj_t BgL_auxz00_15836;
						BgL_objectz00_bglt BgL_tmpz00_15834;

						BgL_auxz00_15836 = ((obj_t) BgL_wide1566z00_8873);
						BgL_tmpz00_15834 = ((BgL_objectz00_bglt) BgL_tmp1565z00_8872);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15834, BgL_auxz00_15836);
					}
					((BgL_objectz00_bglt) BgL_tmp1565z00_8872);
					{	/* Cfa/cinfo2.scm 37 */
						long BgL_arg2063z00_8877;

						{	/* Cfa/cinfo2.scm 37 */
							long BgL_res2866z00_8878;

							BgL_res2866z00_8878 =
								BGL_CLASS_INDEX
								(BGl_prezd2procedurezd2refzd2appzd2zzcfa_info2z00);
							BgL_arg2063z00_8877 = BgL_res2866z00_8878;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1565z00_8872), BgL_arg2063z00_8877);
					}
					BgL_new1567z00_8871 = ((BgL_appz00_bglt) BgL_tmp1565z00_8872);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1567z00_8871)))->BgL_locz00) =
					((obj_t) BgL_loc1175z00_7919), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1567z00_8871)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1176z00_7920)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1567z00_8871)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1177zd2_7921), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1567z00_8871)))->BgL_keyz00) =
					((obj_t) BgL_key1178z00_7922), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1567z00_8871)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1179z00_7923)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1567z00_8871)))->
						BgL_argsz00) = ((obj_t) BgL_args1180z00_7924), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1567z00_8871)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1181z00_7925), BUNSPEC);
				return BgL_new1567z00_8871;
			}
		}

	}



/* &lambda2045 */
	BgL_appz00_bglt BGl_z62lambda2045z62zzcfa_info2z00(obj_t BgL_envz00_7926,
		obj_t BgL_o1173z00_7927)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{	/* Cfa/cinfo2.scm 34 */
				long BgL_arg2046z00_8880;

				{	/* Cfa/cinfo2.scm 34 */
					obj_t BgL_arg2047z00_8881;

					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_arg2048z00_8882;

						{	/* Cfa/cinfo2.scm 34 */
							long BgL_arg1816z00_8883;

							{	/* Cfa/cinfo2.scm 34 */
								long BgL_arg1817z00_8884;

								{	/* Cfa/cinfo2.scm 34 */
									long BgL_res2862z00_8885;

									BgL_res2862z00_8885 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1173z00_7927)));
									BgL_arg1817z00_8884 = BgL_res2862z00_8885;
								}
								BgL_arg1816z00_8883 = (BgL_arg1817z00_8884 - OBJECT_TYPE);
							}
							BgL_arg2048z00_8882 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8883);
						}
						BgL_arg2047z00_8881 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2048z00_8882);
					}
					{	/* Cfa/cinfo2.scm 34 */
						long BgL_res2864z00_8886;

						{	/* Cfa/cinfo2.scm 34 */
							obj_t BgL_tmpz00_15866;

							BgL_tmpz00_15866 = ((obj_t) BgL_arg2047z00_8881);
							BgL_res2864z00_8886 = BGL_CLASS_INDEX(BgL_tmpz00_15866);
						}
						BgL_arg2046z00_8880 = BgL_res2864z00_8886;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1173z00_7927)), BgL_arg2046z00_8880);
			}
			{	/* Cfa/cinfo2.scm 34 */
				BgL_objectz00_bglt BgL_tmpz00_15872;

				BgL_tmpz00_15872 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1173z00_7927));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15872, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1173z00_7927));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1173z00_7927));
		}

	}



/* &<@anonymous:2044> */
	obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7928,
		obj_t BgL_new1172z00_7929)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{
				BgL_appz00_bglt BgL_auxz00_15880;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1172z00_7929))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_15884;

					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_classz00_8888;

						BgL_classz00_8888 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 34 */
							obj_t BgL__ortest_1106z00_8889;

							BgL__ortest_1106z00_8889 = BGL_CLASS_NIL(BgL_classz00_8888);
							if (CBOOL(BgL__ortest_1106z00_8889))
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15884 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8889);
								}
							else
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15884 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8888));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1172z00_7929))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_15884), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1172z00_7929))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1172z00_7929))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_15900;

					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_classz00_8890;

						BgL_classz00_8890 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 34 */
							obj_t BgL__ortest_1106z00_8891;

							BgL__ortest_1106z00_8891 = BGL_CLASS_NIL(BgL_classz00_8890);
							if (CBOOL(BgL__ortest_1106z00_8891))
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15900 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8891);
								}
							else
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15900 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8890));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1172z00_7929))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_15900), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1172z00_7929))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1172z00_7929))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_variablez00_bglt BgL_auxz00_15923;
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_15916;

					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_classz00_8892;

						BgL_classz00_8892 = BGl_variablez00zzast_varz00;
						{	/* Cfa/cinfo2.scm 34 */
							obj_t BgL__ortest_1106z00_8893;

							BgL__ortest_1106z00_8893 = BGL_CLASS_NIL(BgL_classz00_8892);
							if (CBOOL(BgL__ortest_1106z00_8893))
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15923 =
										((BgL_variablez00_bglt) BgL__ortest_1106z00_8893);
								}
							else
								{	/* Cfa/cinfo2.scm 34 */
									BgL_auxz00_15923 =
										((BgL_variablez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8892));
								}
						}
					}
					{
						obj_t BgL_auxz00_15917;

						{	/* Cfa/cinfo2.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_15918;

							BgL_tmpz00_15918 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1172z00_7929));
							BgL_auxz00_15917 = BGL_OBJECT_WIDENING(BgL_tmpz00_15918);
						}
						BgL_auxz00_15916 =
							((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_15917);
					}
					((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
								COBJECT(BgL_auxz00_15916))->BgL_ownerz00) =
						((BgL_variablez00_bglt) BgL_auxz00_15923), BUNSPEC);
				}
				BgL_auxz00_15880 = ((BgL_appz00_bglt) BgL_new1172z00_7929);
				return ((obj_t) BgL_auxz00_15880);
			}
		}

	}



/* &lambda2042 */
	BgL_appz00_bglt BGl_z62lambda2042z62zzcfa_info2z00(obj_t BgL_envz00_7930,
		obj_t BgL_o1169z00_7931)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{	/* Cfa/cinfo2.scm 34 */
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_wide1171z00_8895;

				BgL_wide1171z00_8895 =
					((BgL_prezd2makezd2procedurezd2appzd2_bglt)
					BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2makezd2procedurezd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 34 */
					obj_t BgL_auxz00_15938;
					BgL_objectz00_bglt BgL_tmpz00_15934;

					BgL_auxz00_15938 = ((obj_t) BgL_wide1171z00_8895);
					BgL_tmpz00_15934 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1169z00_7931)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15934, BgL_auxz00_15938);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1169z00_7931)));
				{	/* Cfa/cinfo2.scm 34 */
					long BgL_arg2043z00_8896;

					{	/* Cfa/cinfo2.scm 34 */
						long BgL_res2861z00_8897;

						BgL_res2861z00_8897 =
							BGL_CLASS_INDEX
							(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
						BgL_arg2043z00_8896 = BgL_res2861z00_8897;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1169z00_7931))), BgL_arg2043z00_8896);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1169z00_7931)));
			}
		}

	}



/* &lambda2039 */
	BgL_appz00_bglt BGl_z62lambda2039z62zzcfa_info2z00(obj_t BgL_envz00_7932,
		obj_t BgL_loc1161z00_7933, obj_t BgL_type1162z00_7934,
		obj_t BgL_sidezd2effect1163zd2_7935, obj_t BgL_key1164z00_7936,
		obj_t BgL_fun1165z00_7937, obj_t BgL_args1166z00_7938,
		obj_t BgL_stackable1167z00_7939, obj_t BgL_owner1168z00_7940)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{	/* Cfa/cinfo2.scm 34 */
				BgL_appz00_bglt BgL_new1562z00_8901;

				{	/* Cfa/cinfo2.scm 34 */
					BgL_appz00_bglt BgL_tmp1560z00_8902;
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_wide1561z00_8903;

					{
						BgL_appz00_bglt BgL_auxz00_15952;

						{	/* Cfa/cinfo2.scm 34 */
							BgL_appz00_bglt BgL_new1559z00_8904;

							BgL_new1559z00_8904 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 34 */
								long BgL_arg2041z00_8905;

								{	/* Cfa/cinfo2.scm 34 */
									long BgL_res2859z00_8906;

									BgL_res2859z00_8906 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2041z00_8905 = BgL_res2859z00_8906;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1559z00_8904),
									BgL_arg2041z00_8905);
							}
							{	/* Cfa/cinfo2.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_15957;

								BgL_tmpz00_15957 = ((BgL_objectz00_bglt) BgL_new1559z00_8904);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15957, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1559z00_8904);
							BgL_auxz00_15952 = BgL_new1559z00_8904;
						}
						BgL_tmp1560z00_8902 = ((BgL_appz00_bglt) BgL_auxz00_15952);
					}
					BgL_wide1561z00_8903 =
						((BgL_prezd2makezd2procedurezd2appzd2_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2makezd2procedurezd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 34 */
						obj_t BgL_auxz00_15965;
						BgL_objectz00_bglt BgL_tmpz00_15963;

						BgL_auxz00_15965 = ((obj_t) BgL_wide1561z00_8903);
						BgL_tmpz00_15963 = ((BgL_objectz00_bglt) BgL_tmp1560z00_8902);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_15963, BgL_auxz00_15965);
					}
					((BgL_objectz00_bglt) BgL_tmp1560z00_8902);
					{	/* Cfa/cinfo2.scm 34 */
						long BgL_arg2040z00_8907;

						{	/* Cfa/cinfo2.scm 34 */
							long BgL_res2860z00_8908;

							BgL_res2860z00_8908 =
								BGL_CLASS_INDEX
								(BGl_prezd2makezd2procedurezd2appzd2zzcfa_info2z00);
							BgL_arg2040z00_8907 = BgL_res2860z00_8908;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1560z00_8902), BgL_arg2040z00_8907);
					}
					BgL_new1562z00_8901 = ((BgL_appz00_bglt) BgL_tmp1560z00_8902);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1562z00_8901)))->BgL_locz00) =
					((obj_t) BgL_loc1161z00_7933), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1562z00_8901)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1162z00_7934)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1562z00_8901)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1163zd2_7935), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1562z00_8901)))->BgL_keyz00) =
					((obj_t) BgL_key1164z00_7936), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1562z00_8901)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1165z00_7937)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1562z00_8901)))->
						BgL_argsz00) = ((obj_t) BgL_args1166z00_7938), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1562z00_8901)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1167z00_7939), BUNSPEC);
				{
					BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_15989;

					{
						obj_t BgL_auxz00_15990;

						{	/* Cfa/cinfo2.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_15991;

							BgL_tmpz00_15991 = ((BgL_objectz00_bglt) BgL_new1562z00_8901);
							BgL_auxz00_15990 = BGL_OBJECT_WIDENING(BgL_tmpz00_15991);
						}
						BgL_auxz00_15989 =
							((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_15990);
					}
					((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
								COBJECT(BgL_auxz00_15989))->BgL_ownerz00) =
						((BgL_variablez00_bglt) ((BgL_variablez00_bglt)
								BgL_owner1168z00_7940)), BUNSPEC);
				}
				return BgL_new1562z00_8901;
			}
		}

	}



/* &lambda2053 */
	obj_t BGl_z62lambda2053z62zzcfa_info2z00(obj_t BgL_envz00_7941,
		obj_t BgL_oz00_7942, obj_t BgL_vz00_7943)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_15997;

				{
					obj_t BgL_auxz00_15998;

					{	/* Cfa/cinfo2.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_15999;

						BgL_tmpz00_15999 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7942));
						BgL_auxz00_15998 = BGL_OBJECT_WIDENING(BgL_tmpz00_15999);
					}
					BgL_auxz00_15997 =
						((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_15998);
				}
				return
					((((BgL_prezd2makezd2procedurezd2appzd2_bglt)
							COBJECT(BgL_auxz00_15997))->BgL_ownerz00) =
					((BgL_variablez00_bglt) ((BgL_variablez00_bglt) BgL_vz00_7943)),
					BUNSPEC);
			}
		}

	}



/* &lambda2052 */
	BgL_variablez00_bglt BGl_z62lambda2052z62zzcfa_info2z00(obj_t BgL_envz00_7944,
		obj_t BgL_oz00_7945)
	{
		{	/* Cfa/cinfo2.scm 34 */
			{
				BgL_prezd2makezd2procedurezd2appzd2_bglt BgL_auxz00_16006;

				{
					obj_t BgL_auxz00_16007;

					{	/* Cfa/cinfo2.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_16008;

						BgL_tmpz00_16008 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7945));
						BgL_auxz00_16007 = BGL_OBJECT_WIDENING(BgL_tmpz00_16008);
					}
					BgL_auxz00_16006 =
						((BgL_prezd2makezd2procedurezd2appzd2_bglt) BgL_auxz00_16007);
				}
				return
					(((BgL_prezd2makezd2procedurezd2appzd2_bglt)
						COBJECT(BgL_auxz00_16006))->BgL_ownerz00);
			}
		}

	}



/* &lambda2015 */
	BgL_appz00_bglt BGl_z62lambda2015z62zzcfa_info2z00(obj_t BgL_envz00_7946,
		obj_t BgL_o1159z00_7947)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{	/* Cfa/cinfo2.scm 29 */
				long BgL_arg2016z00_8913;

				{	/* Cfa/cinfo2.scm 29 */
					obj_t BgL_arg2017z00_8914;

					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_arg2018z00_8915;

						{	/* Cfa/cinfo2.scm 29 */
							long BgL_arg1816z00_8916;

							{	/* Cfa/cinfo2.scm 29 */
								long BgL_arg1817z00_8917;

								{	/* Cfa/cinfo2.scm 29 */
									long BgL_res2856z00_8918;

									BgL_res2856z00_8918 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1159z00_7947)));
									BgL_arg1817z00_8917 = BgL_res2856z00_8918;
								}
								BgL_arg1816z00_8916 = (BgL_arg1817z00_8917 - OBJECT_TYPE);
							}
							BgL_arg2018z00_8915 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8916);
						}
						BgL_arg2017z00_8914 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2018z00_8915);
					}
					{	/* Cfa/cinfo2.scm 29 */
						long BgL_res2858z00_8919;

						{	/* Cfa/cinfo2.scm 29 */
							obj_t BgL_tmpz00_16020;

							BgL_tmpz00_16020 = ((obj_t) BgL_arg2017z00_8914);
							BgL_res2858z00_8919 = BGL_CLASS_INDEX(BgL_tmpz00_16020);
						}
						BgL_arg2016z00_8913 = BgL_res2858z00_8919;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1159z00_7947)), BgL_arg2016z00_8913);
			}
			{	/* Cfa/cinfo2.scm 29 */
				BgL_objectz00_bglt BgL_tmpz00_16026;

				BgL_tmpz00_16026 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1159z00_7947));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16026, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1159z00_7947));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1159z00_7947));
		}

	}



/* &<@anonymous:2014> */
	obj_t BGl_z62zc3z04anonymousza32014ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7948,
		obj_t BgL_new1158z00_7949)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{
				BgL_appz00_bglt BgL_auxz00_16034;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1158z00_7949))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_16038;

					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_classz00_8921;

						BgL_classz00_8921 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 29 */
							obj_t BgL__ortest_1106z00_8922;

							BgL__ortest_1106z00_8922 = BGL_CLASS_NIL(BgL_classz00_8921);
							if (CBOOL(BgL__ortest_1106z00_8922))
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16038 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8922);
								}
							else
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16038 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8921));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1158z00_7949))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_16038), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1158z00_7949))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1158z00_7949))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_16054;

					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_classz00_8923;

						BgL_classz00_8923 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 29 */
							obj_t BgL__ortest_1106z00_8924;

							BgL__ortest_1106z00_8924 = BGL_CLASS_NIL(BgL_classz00_8923);
							if (CBOOL(BgL__ortest_1106z00_8924))
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16054 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8924);
								}
							else
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16054 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8923));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1158z00_7949))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_16054), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1158z00_7949))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1158z00_7949))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_approxz00_bglt BgL_auxz00_16077;
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16070;

					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_classz00_8925;

						BgL_classz00_8925 = BGl_approxz00zzcfa_infoz00;
						{	/* Cfa/cinfo2.scm 29 */
							obj_t BgL__ortest_1106z00_8926;

							BgL__ortest_1106z00_8926 = BGL_CLASS_NIL(BgL_classz00_8925);
							if (CBOOL(BgL__ortest_1106z00_8926))
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16077 =
										((BgL_approxz00_bglt) BgL__ortest_1106z00_8926);
								}
							else
								{	/* Cfa/cinfo2.scm 29 */
									BgL_auxz00_16077 =
										((BgL_approxz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8925));
								}
						}
					}
					{
						obj_t BgL_auxz00_16071;

						{	/* Cfa/cinfo2.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_16072;

							BgL_tmpz00_16072 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1158z00_7949));
							BgL_auxz00_16071 = BGL_OBJECT_WIDENING(BgL_tmpz00_16072);
						}
						BgL_auxz00_16070 =
							((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16071);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16070))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) BgL_auxz00_16077), BUNSPEC);
				}
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16085;

					{
						obj_t BgL_auxz00_16086;

						{	/* Cfa/cinfo2.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_16087;

							BgL_tmpz00_16087 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1158z00_7949));
							BgL_auxz00_16086 = BGL_OBJECT_WIDENING(BgL_tmpz00_16087);
						}
						BgL_auxz00_16085 =
							((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16086);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16085))->
							BgL_speczd2typeszd2) =
						((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				}
				BgL_auxz00_16034 = ((BgL_appz00_bglt) BgL_new1158z00_7949);
				return ((obj_t) BgL_auxz00_16034);
			}
		}

	}



/* &lambda2012 */
	BgL_appz00_bglt BGl_z62lambda2012z62zzcfa_info2z00(obj_t BgL_envz00_7950,
		obj_t BgL_o1155z00_7951)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{	/* Cfa/cinfo2.scm 29 */
				BgL_arithmeticzd2appzd2_bglt BgL_wide1157z00_8928;

				BgL_wide1157z00_8928 =
					((BgL_arithmeticzd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_arithmeticzd2appzd2_bgl))));
				{	/* Cfa/cinfo2.scm 29 */
					obj_t BgL_auxz00_16101;
					BgL_objectz00_bglt BgL_tmpz00_16097;

					BgL_auxz00_16101 = ((obj_t) BgL_wide1157z00_8928);
					BgL_tmpz00_16097 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1155z00_7951)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16097, BgL_auxz00_16101);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1155z00_7951)));
				{	/* Cfa/cinfo2.scm 29 */
					long BgL_arg2013z00_8929;

					{	/* Cfa/cinfo2.scm 29 */
						long BgL_res2855z00_8930;

						BgL_res2855z00_8930 =
							BGL_CLASS_INDEX(BGl_arithmeticzd2appzd2zzcfa_info2z00);
						BgL_arg2013z00_8929 = BgL_res2855z00_8930;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1155z00_7951))), BgL_arg2013z00_8929);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1155z00_7951)));
			}
		}

	}



/* &lambda2009 */
	BgL_appz00_bglt BGl_z62lambda2009z62zzcfa_info2z00(obj_t BgL_envz00_7952,
		obj_t BgL_loc1146z00_7953, obj_t BgL_type1147z00_7954,
		obj_t BgL_sidezd2effect1148zd2_7955, obj_t BgL_key1149z00_7956,
		obj_t BgL_fun1150z00_7957, obj_t BgL_args1151z00_7958,
		obj_t BgL_stackable1152z00_7959, obj_t BgL_approx1153z00_7960,
		obj_t BgL_speczd2types1154zd2_7961)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{	/* Cfa/cinfo2.scm 29 */
				BgL_appz00_bglt BgL_new1557z00_8935;

				{	/* Cfa/cinfo2.scm 29 */
					BgL_appz00_bglt BgL_tmp1555z00_8936;
					BgL_arithmeticzd2appzd2_bglt BgL_wide1556z00_8937;

					{
						BgL_appz00_bglt BgL_auxz00_16115;

						{	/* Cfa/cinfo2.scm 29 */
							BgL_appz00_bglt BgL_new1554z00_8938;

							BgL_new1554z00_8938 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 29 */
								long BgL_arg2011z00_8939;

								{	/* Cfa/cinfo2.scm 29 */
									long BgL_res2853z00_8940;

									BgL_res2853z00_8940 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg2011z00_8939 = BgL_res2853z00_8940;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1554z00_8938),
									BgL_arg2011z00_8939);
							}
							{	/* Cfa/cinfo2.scm 29 */
								BgL_objectz00_bglt BgL_tmpz00_16120;

								BgL_tmpz00_16120 = ((BgL_objectz00_bglt) BgL_new1554z00_8938);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16120, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1554z00_8938);
							BgL_auxz00_16115 = BgL_new1554z00_8938;
						}
						BgL_tmp1555z00_8936 = ((BgL_appz00_bglt) BgL_auxz00_16115);
					}
					BgL_wide1556z00_8937 =
						((BgL_arithmeticzd2appzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_arithmeticzd2appzd2_bgl))));
					{	/* Cfa/cinfo2.scm 29 */
						obj_t BgL_auxz00_16128;
						BgL_objectz00_bglt BgL_tmpz00_16126;

						BgL_auxz00_16128 = ((obj_t) BgL_wide1556z00_8937);
						BgL_tmpz00_16126 = ((BgL_objectz00_bglt) BgL_tmp1555z00_8936);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16126, BgL_auxz00_16128);
					}
					((BgL_objectz00_bglt) BgL_tmp1555z00_8936);
					{	/* Cfa/cinfo2.scm 29 */
						long BgL_arg2010z00_8941;

						{	/* Cfa/cinfo2.scm 29 */
							long BgL_res2854z00_8942;

							BgL_res2854z00_8942 =
								BGL_CLASS_INDEX(BGl_arithmeticzd2appzd2zzcfa_info2z00);
							BgL_arg2010z00_8941 = BgL_res2854z00_8942;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1555z00_8936), BgL_arg2010z00_8941);
					}
					BgL_new1557z00_8935 = ((BgL_appz00_bglt) BgL_tmp1555z00_8936);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1557z00_8935)))->BgL_locz00) =
					((obj_t) BgL_loc1146z00_7953), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1557z00_8935)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1147z00_7954)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1557z00_8935)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1148zd2_7955), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1557z00_8935)))->BgL_keyz00) =
					((obj_t) BgL_key1149z00_7956), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1557z00_8935)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1150z00_7957)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1557z00_8935)))->
						BgL_argsz00) = ((obj_t) BgL_args1151z00_7958), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1557z00_8935)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1152z00_7959), BUNSPEC);
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16152;

					{
						obj_t BgL_auxz00_16153;

						{	/* Cfa/cinfo2.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_16154;

							BgL_tmpz00_16154 = ((BgL_objectz00_bglt) BgL_new1557z00_8935);
							BgL_auxz00_16153 = BGL_OBJECT_WIDENING(BgL_tmpz00_16154);
						}
						BgL_auxz00_16152 =
							((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16153);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16152))->
							BgL_approxz00) =
						((BgL_approxz00_bglt) ((BgL_approxz00_bglt)
								BgL_approx1153z00_7960)), BUNSPEC);
				}
				{
					BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16160;

					{
						obj_t BgL_auxz00_16161;

						{	/* Cfa/cinfo2.scm 29 */
							BgL_objectz00_bglt BgL_tmpz00_16162;

							BgL_tmpz00_16162 = ((BgL_objectz00_bglt) BgL_new1557z00_8935);
							BgL_auxz00_16161 = BGL_OBJECT_WIDENING(BgL_tmpz00_16162);
						}
						BgL_auxz00_16160 =
							((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16161);
					}
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16160))->
							BgL_speczd2typeszd2) =
						((obj_t) ((obj_t) BgL_speczd2types1154zd2_7961)), BUNSPEC);
				}
				return BgL_new1557z00_8935;
			}
		}

	}



/* &lambda2031 */
	obj_t BGl_z62lambda2031z62zzcfa_info2z00(obj_t BgL_envz00_7962,
		obj_t BgL_oz00_7963, obj_t BgL_vz00_7964)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16168;

				{
					obj_t BgL_auxz00_16169;

					{	/* Cfa/cinfo2.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_16170;

						BgL_tmpz00_16170 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7963));
						BgL_auxz00_16169 = BGL_OBJECT_WIDENING(BgL_tmpz00_16170);
					}
					BgL_auxz00_16168 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16169);
				}
				return
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16168))->
						BgL_speczd2typeszd2) = ((obj_t) ((obj_t) BgL_vz00_7964)), BUNSPEC);
			}
		}

	}



/* &lambda2030 */
	obj_t BGl_z62lambda2030z62zzcfa_info2z00(obj_t BgL_envz00_7965,
		obj_t BgL_oz00_7966)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16177;

				{
					obj_t BgL_auxz00_16178;

					{	/* Cfa/cinfo2.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_16179;

						BgL_tmpz00_16179 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7966));
						BgL_auxz00_16178 = BGL_OBJECT_WIDENING(BgL_tmpz00_16179);
					}
					BgL_auxz00_16177 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16178);
				}
				return
					(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16177))->
					BgL_speczd2typeszd2);
			}
		}

	}



/* &lambda2024 */
	obj_t BGl_z62lambda2024z62zzcfa_info2z00(obj_t BgL_envz00_7967,
		obj_t BgL_oz00_7968, obj_t BgL_vz00_7969)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16185;

				{
					obj_t BgL_auxz00_16186;

					{	/* Cfa/cinfo2.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_16187;

						BgL_tmpz00_16187 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7968));
						BgL_auxz00_16186 = BGL_OBJECT_WIDENING(BgL_tmpz00_16187);
					}
					BgL_auxz00_16185 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16186);
				}
				return
					((((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16185))->
						BgL_approxz00) =
					((BgL_approxz00_bglt) ((BgL_approxz00_bglt) BgL_vz00_7969)), BUNSPEC);
			}
		}

	}



/* &lambda2023 */
	BgL_approxz00_bglt BGl_z62lambda2023z62zzcfa_info2z00(obj_t BgL_envz00_7970,
		obj_t BgL_oz00_7971)
	{
		{	/* Cfa/cinfo2.scm 29 */
			{
				BgL_arithmeticzd2appzd2_bglt BgL_auxz00_16194;

				{
					obj_t BgL_auxz00_16195;

					{	/* Cfa/cinfo2.scm 29 */
						BgL_objectz00_bglt BgL_tmpz00_16196;

						BgL_tmpz00_16196 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7971));
						BgL_auxz00_16195 = BGL_OBJECT_WIDENING(BgL_tmpz00_16196);
					}
					BgL_auxz00_16194 = ((BgL_arithmeticzd2appzd2_bglt) BgL_auxz00_16195);
				}
				return
					(((BgL_arithmeticzd2appzd2_bglt) COBJECT(BgL_auxz00_16194))->
					BgL_approxz00);
			}
		}

	}



/* &lambda1992 */
	BgL_appz00_bglt BGl_z62lambda1992z62zzcfa_info2z00(obj_t BgL_envz00_7972,
		obj_t BgL_o1144z00_7973)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				long BgL_arg1993z00_8950;

				{	/* Cfa/cinfo2.scm 27 */
					obj_t BgL_arg1995z00_8951;

					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_arg1996z00_8952;

						{	/* Cfa/cinfo2.scm 27 */
							long BgL_arg1816z00_8953;

							{	/* Cfa/cinfo2.scm 27 */
								long BgL_arg1817z00_8954;

								{	/* Cfa/cinfo2.scm 27 */
									long BgL_res2850z00_8955;

									BgL_res2850z00_8955 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_appz00_bglt) BgL_o1144z00_7973)));
									BgL_arg1817z00_8954 = BgL_res2850z00_8955;
								}
								BgL_arg1816z00_8953 = (BgL_arg1817z00_8954 - OBJECT_TYPE);
							}
							BgL_arg1996z00_8952 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_8953);
						}
						BgL_arg1995z00_8951 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1996z00_8952);
					}
					{	/* Cfa/cinfo2.scm 27 */
						long BgL_res2852z00_8956;

						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL_tmpz00_16208;

							BgL_tmpz00_16208 = ((obj_t) BgL_arg1995z00_8951);
							BgL_res2852z00_8956 = BGL_CLASS_INDEX(BgL_tmpz00_16208);
						}
						BgL_arg1993z00_8950 = BgL_res2852z00_8956;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_appz00_bglt) BgL_o1144z00_7973)), BgL_arg1993z00_8950);
			}
			{	/* Cfa/cinfo2.scm 27 */
				BgL_objectz00_bglt BgL_tmpz00_16214;

				BgL_tmpz00_16214 =
					((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1144z00_7973));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16214, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_o1144z00_7973));
			return ((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1144z00_7973));
		}

	}



/* &<@anonymous:1991> */
	obj_t BGl_z62zc3z04anonymousza31991ze3ze5zzcfa_info2z00(obj_t BgL_envz00_7974,
		obj_t BgL_new1143z00_7975)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{
				BgL_appz00_bglt BgL_auxz00_16222;

				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt)
									((BgL_appz00_bglt) BgL_new1143z00_7975))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_16226;

					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_classz00_8958;

						BgL_classz00_8958 = BGl_typez00zztype_typez00;
						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL__ortest_1106z00_8959;

							BgL__ortest_1106z00_8959 = BGL_CLASS_NIL(BgL_classz00_8958);
							if (CBOOL(BgL__ortest_1106z00_8959))
								{	/* Cfa/cinfo2.scm 27 */
									BgL_auxz00_16226 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_8959);
								}
							else
								{	/* Cfa/cinfo2.scm 27 */
									BgL_auxz00_16226 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8958));
								}
						}
					}
					((((BgL_nodez00_bglt) COBJECT(
									((BgL_nodez00_bglt)
										((BgL_appz00_bglt) BgL_new1143z00_7975))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_16226), BUNSPEC);
				}
				((((BgL_nodezf2effectzf2_bglt) COBJECT(
								((BgL_nodezf2effectzf2_bglt)
									((BgL_appz00_bglt) BgL_new1143z00_7975))))->
						BgL_sidezd2effectzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt)
							COBJECT(((BgL_nodezf2effectzf2_bglt) ((BgL_appz00_bglt)
										BgL_new1143z00_7975))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_varz00_bglt BgL_auxz00_16242;

					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_classz00_8960;

						BgL_classz00_8960 = BGl_varz00zzast_nodez00;
						{	/* Cfa/cinfo2.scm 27 */
							obj_t BgL__ortest_1106z00_8961;

							BgL__ortest_1106z00_8961 = BGL_CLASS_NIL(BgL_classz00_8960);
							if (CBOOL(BgL__ortest_1106z00_8961))
								{	/* Cfa/cinfo2.scm 27 */
									BgL_auxz00_16242 =
										((BgL_varz00_bglt) BgL__ortest_1106z00_8961);
								}
							else
								{	/* Cfa/cinfo2.scm 27 */
									BgL_auxz00_16242 =
										((BgL_varz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_8960));
								}
						}
					}
					((((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt)
										((BgL_appz00_bglt) BgL_new1143z00_7975))))->BgL_funz00) =
						((BgL_varz00_bglt) BgL_auxz00_16242), BUNSPEC);
				}
				((((BgL_appz00_bglt) COBJECT(
								((BgL_appz00_bglt)
									((BgL_appz00_bglt) BgL_new1143z00_7975))))->BgL_argsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) ((BgL_appz00_bglt)
										BgL_new1143z00_7975))))->BgL_stackablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_16258;

					{
						obj_t BgL_auxz00_16259;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_16260;

							BgL_tmpz00_16260 =
								((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_new1143z00_7975));
							BgL_auxz00_16259 = BGL_OBJECT_WIDENING(BgL_tmpz00_16260);
						}
						BgL_auxz00_16258 =
							((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_16259);
					}
					((((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_16258))->
							BgL_speczd2typeszd2) =
						((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				}
				BgL_auxz00_16222 = ((BgL_appz00_bglt) BgL_new1143z00_7975);
				return ((obj_t) BgL_auxz00_16222);
			}
		}

	}



/* &lambda1989 */
	BgL_appz00_bglt BGl_z62lambda1989z62zzcfa_info2z00(obj_t BgL_envz00_7976,
		obj_t BgL_o1140z00_7977)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_prezd2arithmeticzd2appz00_bglt BgL_wide1142z00_8963;

				BgL_wide1142z00_8963 =
					((BgL_prezd2arithmeticzd2appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_prezd2arithmeticzd2appz00_bgl))));
				{	/* Cfa/cinfo2.scm 27 */
					obj_t BgL_auxz00_16274;
					BgL_objectz00_bglt BgL_tmpz00_16270;

					BgL_auxz00_16274 = ((obj_t) BgL_wide1142z00_8963);
					BgL_tmpz00_16270 =
						((BgL_objectz00_bglt)
						((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1140z00_7977)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16270, BgL_auxz00_16274);
				}
				((BgL_objectz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1140z00_7977)));
				{	/* Cfa/cinfo2.scm 27 */
					long BgL_arg1990z00_8964;

					{	/* Cfa/cinfo2.scm 27 */
						long BgL_res2849z00_8965;

						BgL_res2849z00_8965 =
							BGL_CLASS_INDEX(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
						BgL_arg1990z00_8964 = BgL_res2849z00_8965;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_appz00_bglt)
								((BgL_appz00_bglt) BgL_o1140z00_7977))), BgL_arg1990z00_8964);
				}
				return
					((BgL_appz00_bglt)
					((BgL_appz00_bglt) ((BgL_appz00_bglt) BgL_o1140z00_7977)));
			}
		}

	}



/* &lambda1986 */
	BgL_appz00_bglt BGl_z62lambda1986z62zzcfa_info2z00(obj_t BgL_envz00_7978,
		obj_t BgL_loc1132z00_7979, obj_t BgL_type1133z00_7980,
		obj_t BgL_sidezd2effect1134zd2_7981, obj_t BgL_key1135z00_7982,
		obj_t BgL_fun1136z00_7983, obj_t BgL_args1137z00_7984,
		obj_t BgL_stackable1138z00_7985, obj_t BgL_speczd2types1139zd2_7986)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{	/* Cfa/cinfo2.scm 27 */
				BgL_appz00_bglt BgL_new1552z00_8969;

				{	/* Cfa/cinfo2.scm 27 */
					BgL_appz00_bglt BgL_tmp1550z00_8970;
					BgL_prezd2arithmeticzd2appz00_bglt BgL_wide1551z00_8971;

					{
						BgL_appz00_bglt BgL_auxz00_16288;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_appz00_bglt BgL_new1549z00_8972;

							BgL_new1549z00_8972 =
								((BgL_appz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_appz00_bgl))));
							{	/* Cfa/cinfo2.scm 27 */
								long BgL_arg1988z00_8973;

								{	/* Cfa/cinfo2.scm 27 */
									long BgL_res2847z00_8974;

									BgL_res2847z00_8974 =
										BGL_CLASS_INDEX(BGl_appz00zzast_nodez00);
									BgL_arg1988z00_8973 = BgL_res2847z00_8974;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1549z00_8972),
									BgL_arg1988z00_8973);
							}
							{	/* Cfa/cinfo2.scm 27 */
								BgL_objectz00_bglt BgL_tmpz00_16293;

								BgL_tmpz00_16293 = ((BgL_objectz00_bglt) BgL_new1549z00_8972);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16293, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1549z00_8972);
							BgL_auxz00_16288 = BgL_new1549z00_8972;
						}
						BgL_tmp1550z00_8970 = ((BgL_appz00_bglt) BgL_auxz00_16288);
					}
					BgL_wide1551z00_8971 =
						((BgL_prezd2arithmeticzd2appz00_bglt)
						BOBJECT(GC_MALLOC(sizeof(struct
									BgL_prezd2arithmeticzd2appz00_bgl))));
					{	/* Cfa/cinfo2.scm 27 */
						obj_t BgL_auxz00_16301;
						BgL_objectz00_bglt BgL_tmpz00_16299;

						BgL_auxz00_16301 = ((obj_t) BgL_wide1551z00_8971);
						BgL_tmpz00_16299 = ((BgL_objectz00_bglt) BgL_tmp1550z00_8970);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_16299, BgL_auxz00_16301);
					}
					((BgL_objectz00_bglt) BgL_tmp1550z00_8970);
					{	/* Cfa/cinfo2.scm 27 */
						long BgL_arg1987z00_8975;

						{	/* Cfa/cinfo2.scm 27 */
							long BgL_res2848z00_8976;

							BgL_res2848z00_8976 =
								BGL_CLASS_INDEX(BGl_prezd2arithmeticzd2appz00zzcfa_info2z00);
							BgL_arg1987z00_8975 = BgL_res2848z00_8976;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1550z00_8970), BgL_arg1987z00_8975);
					}
					BgL_new1552z00_8969 = ((BgL_appz00_bglt) BgL_tmp1550z00_8970);
				}
				((((BgL_nodez00_bglt) COBJECT(
								((BgL_nodez00_bglt) BgL_new1552z00_8969)))->BgL_locz00) =
					((obj_t) BgL_loc1132z00_7979), BUNSPEC);
				((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
									BgL_new1552z00_8969)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1133z00_7980)),
					BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1552z00_8969)))->BgL_sidezd2effectzd2) =
					((obj_t) BgL_sidezd2effect1134zd2_7981), BUNSPEC);
				((((BgL_nodezf2effectzf2_bglt) COBJECT(((BgL_nodezf2effectzf2_bglt)
									BgL_new1552z00_8969)))->BgL_keyz00) =
					((obj_t) BgL_key1135z00_7982), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1552z00_8969)))->
						BgL_funz00) =
					((BgL_varz00_bglt) ((BgL_varz00_bglt) BgL_fun1136z00_7983)), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1552z00_8969)))->
						BgL_argsz00) = ((obj_t) BgL_args1137z00_7984), BUNSPEC);
				((((BgL_appz00_bglt) COBJECT(((BgL_appz00_bglt) BgL_new1552z00_8969)))->
						BgL_stackablez00) = ((obj_t) BgL_stackable1138z00_7985), BUNSPEC);
				{
					BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_16325;

					{
						obj_t BgL_auxz00_16326;

						{	/* Cfa/cinfo2.scm 27 */
							BgL_objectz00_bglt BgL_tmpz00_16327;

							BgL_tmpz00_16327 = ((BgL_objectz00_bglt) BgL_new1552z00_8969);
							BgL_auxz00_16326 = BGL_OBJECT_WIDENING(BgL_tmpz00_16327);
						}
						BgL_auxz00_16325 =
							((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_16326);
					}
					((((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_16325))->
							BgL_speczd2typeszd2) =
						((obj_t) ((obj_t) BgL_speczd2types1139zd2_7986)), BUNSPEC);
				}
				return BgL_new1552z00_8969;
			}
		}

	}



/* &lambda2001 */
	obj_t BGl_z62lambda2001z62zzcfa_info2z00(obj_t BgL_envz00_7987,
		obj_t BgL_oz00_7988, obj_t BgL_vz00_7989)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_16333;

				{
					obj_t BgL_auxz00_16334;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_16335;

						BgL_tmpz00_16335 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7988));
						BgL_auxz00_16334 = BGL_OBJECT_WIDENING(BgL_tmpz00_16335);
					}
					BgL_auxz00_16333 =
						((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_16334);
				}
				return
					((((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_16333))->
						BgL_speczd2typeszd2) = ((obj_t) ((obj_t) BgL_vz00_7989)), BUNSPEC);
			}
		}

	}



/* &lambda2000 */
	obj_t BGl_z62lambda2000z62zzcfa_info2z00(obj_t BgL_envz00_7990,
		obj_t BgL_oz00_7991)
	{
		{	/* Cfa/cinfo2.scm 27 */
			{
				BgL_prezd2arithmeticzd2appz00_bglt BgL_auxz00_16342;

				{
					obj_t BgL_auxz00_16343;

					{	/* Cfa/cinfo2.scm 27 */
						BgL_objectz00_bglt BgL_tmpz00_16344;

						BgL_tmpz00_16344 =
							((BgL_objectz00_bglt) ((BgL_appz00_bglt) BgL_oz00_7991));
						BgL_auxz00_16343 = BGL_OBJECT_WIDENING(BgL_tmpz00_16344);
					}
					BgL_auxz00_16342 =
						((BgL_prezd2arithmeticzd2appz00_bglt) BgL_auxz00_16343);
				}
				return
					(((BgL_prezd2arithmeticzd2appz00_bglt) COBJECT(BgL_auxz00_16342))->
					BgL_speczd2typeszd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcfa_info2z00()
	{
		{	/* Cfa/cinfo2.scm 16 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3167z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string3167z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3167z00zzcfa_info2z00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3167z00zzcfa_info2z00));
			return
				BGl_modulezd2initializa7ationz75zzcfa_infoz00(((long) 3788706),
				BSTRING_TO_STRING(BGl_string3167z00zzcfa_info2z00));
		}

	}

#ifdef __cplusplus
}
#endif
