/*===========================================================================*/
/*   (Inline/variant.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Inline/variant.scm) */
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

	typedef struct BgL_localzf2variantzf2_bgl
	{
		bool_t BgL_variantz00;
	}                         *BgL_localzf2variantzf2_bglt;


	static obj_t BGl_z62variantzd2argszb0zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2typezd2setz12ze0zzinline_variantz00(BgL_localz00_bglt,
		BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2fastzd2alphazd2setz12z32zzinline_variantz00
		(BgL_localz00_bglt, obj_t);
	static obj_t BGl_z62localzf2variantzd2occurrencewz42zzinline_variantz00(obj_t,
		obj_t);
	static obj_t BGl_z62localzf2variantzd2idz42zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2occurrencewzd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, long);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62shrinkzd2argsz12za2zzinline_variantz00(obj_t, obj_t);
	static obj_t
		BGl_z62localzf2variantzd2removablezd2setz12z82zzinline_variantz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2variantzd2variantz20zzinline_variantz00(BgL_localz00_bglt);
	static obj_t
		BGl_z62localzf2variantzd2namezd2setz12z82zzinline_variantz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzinline_variantz00();
	static BgL_localz00_bglt
		BGl_z62localzf2variantzd2nilz42zzinline_variantz00(obj_t);
	static obj_t BGl_z62localzf2variantzd2variantz42zzinline_variantz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_localzf2variantzf3z01zzinline_variantz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzinline_variantz00();
	static obj_t BGl_z62substitutionsz62zzinline_variantz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2variantzd2variantzd2setz12z82zzinline_variantz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62localzf2variantzd2accesszd2setz12z82zzinline_variantz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62localzf2variantzd2typezd2setz12z82zzinline_variantz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_localzf2variantzf2zzinline_variantz00 = BUNSPEC;
	static obj_t
		BGl_z62localzf2variantzd2occurrencezd2setz12z82zzinline_variantz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2valuezd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, BgL_valuez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2removablezd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzinline_variantz00();
	BGL_EXPORTED_DECL long
		BGl_localzf2variantzd2occurrencez20zzinline_variantz00(BgL_localz00_bglt);
	static obj_t BGl_z62lambda1600z62zzinline_variantz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1601z62zzinline_variantz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62localzf2variantzd2accessz42zzinline_variantz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2accessz20zzinline_variantz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2userzf3zd2setz12z13zzinline_variantz00
		(BgL_localz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2idz20zzinline_variantz00(BgL_localz00_bglt);
	static BgL_appz00_bglt
		BGl_z62removezd2invariantzd2argsz12z70zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_localzf2variantzd2nilz20zzinline_variantz00();
	static obj_t BGl_z62localzf2variantzd2keyz42zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2fastzd2alphazf2zzinline_variantz00(BgL_localz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzinline_variantz00(obj_t,
		obj_t);
	static BgL_valuez00_bglt
		BGl_z62localzf2variantzd2valuez42zzinline_variantz00(obj_t, obj_t);
	static obj_t BGl_z62localzf2variantzd2userzf3zb1zzinline_variantz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt,
		BgL_variablez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2occurrencezd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, long);
	static obj_t BGl_requirezd2initializa7ationz75zzinline_variantz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_atomz00zzast_nodez00;
	static obj_t BGl_z62localzf2variantzf3z63zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2variantzd2occurrencewz20zzinline_variantz00(BgL_localz00_bglt);
	static obj_t BGl_z62localzf2variantzd2namez42zzinline_variantz00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzinline_variantz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_localzf2variantzd2valuez20zzinline_variantz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_localzf2variantzd2userzf3zd3zzinline_variantz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2removablez20zzinline_variantz00(BgL_localz00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2variantzd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62localzf2variantzd2valuezd2setz12z82zzinline_variantz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62localzf2variantzd2typez42zzinline_variantz00(obj_t, obj_t);
	static obj_t BGl_z62localzf2variantzd2occurrencez42zzinline_variantz00(obj_t,
		obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	static BgL_localz00_bglt
		BGl_z62makezd2localzf2variantz42zzinline_variantz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62localzf2variantzd2userzf3zd2setz12z71zzinline_variantz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2accesszd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt, obj_t);
	BGL_EXPORTED_DECL long
		BGl_localzf2variantzd2keyz20zzinline_variantz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2namez20zzinline_variantz00(BgL_localz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzinline_variantz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_EXPORTED_DECL obj_t
		BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt);
	static obj_t
		BGl_z62localzf2variantzd2fastzd2alphazd2setz12z50zzinline_variantz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62localzf2variantzd2fastzd2alphaz90zzinline_variantz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_localzf2variantzd2namezd2setz12ze0zzinline_variantz00(BgL_localz00_bglt,
		obj_t);
	extern obj_t BGl_kwotez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzinline_variantz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzinline_variantz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinline_variantz00();
	static obj_t BGl_z62localzf2variantzd2removablez42zzinline_variantz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_localzf2variantzd2typez20zzinline_variantz00(BgL_localz00_bglt);
	static obj_t BGl_z62invariantzd2argszb0zzinline_variantz00(obj_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t
		BGl_z62localzf2variantzd2occurrencewzd2setz12z82zzinline_variantz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_localz00_bglt
		BGl_makezd2localzf2variantz20zzinline_variantz00(obj_t, obj_t,
		BgL_typez00_bglt, BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long,
		bool_t, long, bool_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_localz00_bglt BGl_z62lambda1576z62zzinline_variantz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda1583z62zzinline_variantz00(obj_t,
		obj_t);
	static BgL_localz00_bglt BGl_z62lambda1586z62zzinline_variantz00(obj_t,
		obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2valuezd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1792z00,
		BGl_z62localzf2variantzd2valuezd2setz12z82zzinline_variantz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2removablezd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1793z00,
		BGl_z62localzf2variantzd2removablezd2setz12z82zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2localzf2variantzd2envzf2zzinline_variantz00,
		BgL_bgl_za762makeza7d2localza71794za7,
		BGl_z62makezd2localzf2variantz42zzinline_variantz00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2namezd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1795z00,
		BGl_z62localzf2variantzd2namez42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2userzf3zd2setz12zd2envzc1zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1796z00,
		BGl_z62localzf2variantzd2userzf3zd2setz12z71zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2occurrencezd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1797z00,
		BGl_z62localzf2variantzd2occurrencez42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_variantzd2argszd2envz00zzinline_variantz00,
		BgL_bgl_za762variantza7d2arg1798z00,
		BGl_z62variantzd2argszb0zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1776z00zzinline_variantz00,
		BgL_bgl_za762lambda1601za7621799z00,
		BGl_z62lambda1601z62zzinline_variantz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1777z00zzinline_variantz00,
		BgL_bgl_za762lambda1600za7621800z00,
		BGl_z62lambda1600z62zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1778z00zzinline_variantz00,
		BgL_bgl_za762lambda1586za7621801z00,
		BGl_z62lambda1586z62zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1779z00zzinline_variantz00,
		BgL_bgl_za762za7c3za704anonymo1802za7,
		BGl_z62zc3z04anonymousza31585ze3ze5zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2typezd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1803z00,
		BGl_z62localzf2variantzd2typez42zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1780z00zzinline_variantz00,
		BgL_bgl_za762lambda1583za7621804z00,
		BGl_z62lambda1583z62zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1781z00zzinline_variantz00,
		BgL_bgl_za762lambda1576za7621805z00,
		BGl_z62lambda1576z62zzinline_variantz00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_invariantzd2argszd2envz00zzinline_variantz00,
		BgL_bgl_za762invariantza7d2a1806z00,
		BGl_z62invariantzd2argszb0zzinline_variantz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substitutionszd2envzd2zzinline_variantz00,
		BgL_bgl_za762substitutions1807za7,
		BGl_z62substitutionsz62zzinline_variantz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2idzd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1808z00,
		BGl_z62localzf2variantzd2idz42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzf3zd2envzd3zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1809z00,
		BGl_z62localzf2variantzf3z63zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2keyzd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1810z00,
		BGl_z62localzf2variantzd2keyz42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2variantzd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1811z00,
		BGl_z62localzf2variantzd2variantz42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2valuezd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1812z00,
		BGl_z62localzf2variantzd2valuez42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2removablezd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1813z00,
		BGl_z62localzf2variantzd2removablez42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2userzf3zd2envz01zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1814z00,
		BGl_z62localzf2variantzd2userzf3zb1zzinline_variantz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1782z00zzinline_variantz00,
		BgL_bgl_string1782za700za7za7i1815za7, "inline_variant", 14);
	      DEFINE_STRING(BGl_string1783z00zzinline_variantz00,
		BgL_bgl_string1783za700za7za7i1816za7,
		"_ inline_variant local/variant bool variant done read ", 54);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2accesszd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1817z00,
		BGl_z62localzf2variantzd2accesszd2setz12z82zzinline_variantz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2namezd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1818z00,
		BGl_z62localzf2variantzd2namezd2setz12z82zzinline_variantz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2accesszd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1819z00,
		BGl_z62localzf2variantzd2accessz42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2fastzd2alphazd2envz20zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1820z00,
		BGl_z62localzf2variantzd2fastzd2alphaz90zzinline_variantz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2occurrencewzd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1821z00,
		BGl_z62localzf2variantzd2occurrencewz42zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2variantzd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1822z00,
		BGl_z62localzf2variantzd2variantzd2setz12z82zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2nilzd2envzf2zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1823z00,
		BGl_z62localzf2variantzd2nilz42zzinline_variantz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2invariantzd2argsz12zd2envzc0zzinline_variantz00,
		BgL_bgl_za762removeza7d2inva1824z00,
		BGl_z62removezd2invariantzd2argsz12z70zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2occurrencewzd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1825z00,
		BGl_z62localzf2variantzd2occurrencewzd2setz12z82zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_shrinkzd2argsz12zd2envz12zzinline_variantz00,
		BgL_bgl_za762shrinkza7d2args1826z00,
		BGl_z62shrinkzd2argsz12za2zzinline_variantz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2fastzd2alphazd2setz12zd2envze0zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1827z00,
		BGl_z62localzf2variantzd2fastzd2alphazd2setz12z50zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2occurrencezd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1828z00,
		BGl_z62localzf2variantzd2occurrencezd2setz12z82zzinline_variantz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_localzf2variantzd2typezd2setz12zd2envz32zzinline_variantz00,
		BgL_bgl_za762localza7f2varia1829z00,
		BGl_z62localzf2variantzd2typezd2setz12z82zzinline_variantz00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_localzf2variantzf2zzinline_variantz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzinline_variantz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzinline_variantz00(long
		BgL_checksumz00_2130, char *BgL_fromz00_2131)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinline_variantz00))
				{
					BGl_requirezd2initializa7ationz75zzinline_variantz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinline_variantz00();
					BGl_libraryzd2moduleszd2initz00zzinline_variantz00();
					BGl_cnstzd2initzd2zzinline_variantz00();
					BGl_importedzd2moduleszd2initz00zzinline_variantz00();
					BGl_objectzd2initzd2zzinline_variantz00();
					return BGl_methodzd2initzd2zzinline_variantz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"inline_variant");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"inline_variant");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			{	/* Inline/variant.scm 15 */
				obj_t BgL_cportz00_2073;

				{	/* Inline/variant.scm 15 */
					obj_t BgL_stringz00_2081;

					BgL_stringz00_2081 = BGl_string1783z00zzinline_variantz00;
					{	/* Inline/variant.scm 15 */
						obj_t BgL_startz00_2082;

						BgL_startz00_2082 = BINT(((long) 0));
						{	/* Inline/variant.scm 15 */
							obj_t BgL_endz00_2083;

							BgL_endz00_2083 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2081)));
							{	/* Inline/variant.scm 15 */

								BgL_cportz00_2073 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2081, BgL_startz00_2082, BgL_endz00_2083);
				}}}}
				{
					long BgL_iz00_2074;

					BgL_iz00_2074 = ((long) 6);
				BgL_loopz00_2075:
					if ((BgL_iz00_2074 == ((long) -1)))
						{	/* Inline/variant.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Inline/variant.scm 15 */
							{	/* Inline/variant.scm 15 */
								obj_t BgL_arg1790z00_2077;

								{	/* Inline/variant.scm 15 */

									{	/* Inline/variant.scm 15 */
										obj_t BgL_locationz00_2079;

										BgL_locationz00_2079 = BBOOL(((bool_t) 0));
										{	/* Inline/variant.scm 15 */

											BgL_arg1790z00_2077 =
												BGl_readz00zz__readerz00(BgL_cportz00_2073,
												BgL_locationz00_2079);
										}
									}
								}
								{	/* Inline/variant.scm 15 */
									int BgL_tmpz00_2157;

									BgL_tmpz00_2157 = (int) (BgL_iz00_2074);
									CNST_TABLE_SET(BgL_tmpz00_2157, BgL_arg1790z00_2077);
							}}
							{	/* Inline/variant.scm 15 */
								int BgL_auxz00_2080;

								BgL_auxz00_2080 = (int) ((BgL_iz00_2074 - ((long) 1)));
								{
									long BgL_iz00_2162;

									BgL_iz00_2162 = (long) (BgL_auxz00_2080);
									BgL_iz00_2074 = BgL_iz00_2162;
									goto BgL_loopz00_2075;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-local/variant */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_makezd2localzf2variantz20zzinline_variantz00(obj_t BgL_id1114z00_3,
		obj_t BgL_name1115z00_4, BgL_typez00_bglt BgL_type1116z00_5,
		BgL_valuez00_bglt BgL_value1117z00_6, obj_t BgL_access1118z00_7,
		obj_t BgL_fastzd2alpha1119zd2_8, obj_t BgL_removable1120z00_9,
		long BgL_occurrence1121z00_10, long BgL_occurrencew1122z00_11,
		bool_t BgL_userzf31123zf3_12, long BgL_key1124z00_13,
		bool_t BgL_variant1125z00_14)
	{
		{	/* Inline/variant.sch 43 */
			{	/* Inline/variant.sch 43 */
				BgL_localz00_bglt BgL_new1125z00_2086;

				{	/* Inline/variant.sch 43 */
					BgL_localz00_bglt BgL_tmp1123z00_2087;
					BgL_localzf2variantzf2_bglt BgL_wide1124z00_2088;

					{
						BgL_localz00_bglt BgL_auxz00_2165;

						{	/* Inline/variant.sch 43 */
							BgL_localz00_bglt BgL_new1122z00_2089;

							BgL_new1122z00_2089 =
								((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_localz00_bgl))));
							{	/* Inline/variant.sch 43 */
								long BgL_arg1280z00_2090;

								{	/* Inline/variant.sch 43 */
									long BgL_res1746z00_2091;

									BgL_res1746z00_2091 =
										BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
									BgL_arg1280z00_2090 = BgL_res1746z00_2091;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1122z00_2089),
									BgL_arg1280z00_2090);
							}
							{	/* Inline/variant.sch 43 */
								BgL_objectz00_bglt BgL_tmpz00_2170;

								BgL_tmpz00_2170 = ((BgL_objectz00_bglt) BgL_new1122z00_2089);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2170, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1122z00_2089);
							BgL_auxz00_2165 = BgL_new1122z00_2089;
						}
						BgL_tmp1123z00_2087 = ((BgL_localz00_bglt) BgL_auxz00_2165);
					}
					BgL_wide1124z00_2088 =
						((BgL_localzf2variantzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_localzf2variantzf2_bgl))));
					{	/* Inline/variant.sch 43 */
						obj_t BgL_auxz00_2178;
						BgL_objectz00_bglt BgL_tmpz00_2176;

						BgL_auxz00_2178 = ((obj_t) BgL_wide1124z00_2088);
						BgL_tmpz00_2176 = ((BgL_objectz00_bglt) BgL_tmp1123z00_2087);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2176, BgL_auxz00_2178);
					}
					((BgL_objectz00_bglt) BgL_tmp1123z00_2087);
					{	/* Inline/variant.sch 43 */
						long BgL_arg1277z00_2092;

						{	/* Inline/variant.sch 43 */
							long BgL_res1747z00_2093;

							BgL_res1747z00_2093 =
								BGL_CLASS_INDEX(BGl_localzf2variantzf2zzinline_variantz00);
							BgL_arg1277z00_2092 = BgL_res1747z00_2093;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1123z00_2087), BgL_arg1277z00_2092);
					}
					BgL_new1125z00_2086 = ((BgL_localz00_bglt) BgL_tmp1123z00_2087);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1125z00_2086)))->BgL_idz00) =
					((obj_t) BgL_id1114z00_3), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_namez00) =
					((obj_t) BgL_name1115z00_4), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1116z00_5), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1117z00_6), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_accessz00) =
					((obj_t) BgL_access1118z00_7), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1119zd2_8), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_removablez00) =
					((obj_t) BgL_removable1120z00_9), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_occurrencez00) =
					((long) BgL_occurrence1121z00_10), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1122z00_11), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1125z00_2086)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31123zf3_12), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
									BgL_new1125z00_2086)))->BgL_keyz00) =
					((long) BgL_key1124z00_13), BUNSPEC);
				{
					BgL_localzf2variantzf2_bglt BgL_auxz00_2208;

					{
						obj_t BgL_auxz00_2209;

						{	/* Inline/variant.sch 43 */
							BgL_objectz00_bglt BgL_tmpz00_2210;

							BgL_tmpz00_2210 = ((BgL_objectz00_bglt) BgL_new1125z00_2086);
							BgL_auxz00_2209 = BGL_OBJECT_WIDENING(BgL_tmpz00_2210);
						}
						BgL_auxz00_2208 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2209);
					}
					((((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2208))->
							BgL_variantz00) = ((bool_t) BgL_variant1125z00_14), BUNSPEC);
				}
				return BgL_new1125z00_2086;
			}
		}

	}



/* &make-local/variant */
	BgL_localz00_bglt BGl_z62makezd2localzf2variantz42zzinline_variantz00(obj_t
		BgL_envz00_1959, obj_t BgL_id1114z00_1960, obj_t BgL_name1115z00_1961,
		obj_t BgL_type1116z00_1962, obj_t BgL_value1117z00_1963,
		obj_t BgL_access1118z00_1964, obj_t BgL_fastzd2alpha1119zd2_1965,
		obj_t BgL_removable1120z00_1966, obj_t BgL_occurrence1121z00_1967,
		obj_t BgL_occurrencew1122z00_1968, obj_t BgL_userzf31123zf3_1969,
		obj_t BgL_key1124z00_1970, obj_t BgL_variant1125z00_1971)
	{
		{	/* Inline/variant.sch 43 */
			return
				BGl_makezd2localzf2variantz20zzinline_variantz00(BgL_id1114z00_1960,
				BgL_name1115z00_1961, ((BgL_typez00_bglt) BgL_type1116z00_1962),
				((BgL_valuez00_bglt) BgL_value1117z00_1963), BgL_access1118z00_1964,
				BgL_fastzd2alpha1119zd2_1965, BgL_removable1120z00_1966,
				(long) CINT(BgL_occurrence1121z00_1967),
				(long) CINT(BgL_occurrencew1122z00_1968),
				CBOOL(BgL_userzf31123zf3_1969), (long) CINT(BgL_key1124z00_1970),
				CBOOL(BgL_variant1125z00_1971));
		}

	}



/* local/variant? */
	BGL_EXPORTED_DEF bool_t BGl_localzf2variantzf3z01zzinline_variantz00(obj_t
		BgL_objz00_15)
	{
		{	/* Inline/variant.sch 44 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_localzf2variantzf2zzinline_variantz00);
		}

	}



/* &local/variant? */
	obj_t BGl_z62localzf2variantzf3z63zzinline_variantz00(obj_t BgL_envz00_1972,
		obj_t BgL_objz00_1973)
	{
		{	/* Inline/variant.sch 44 */
			return
				BBOOL(BGl_localzf2variantzf3z01zzinline_variantz00(BgL_objz00_1973));
		}

	}



/* local/variant-nil */
	BGL_EXPORTED_DEF BgL_localz00_bglt
		BGl_localzf2variantzd2nilz20zzinline_variantz00()
	{
		{	/* Inline/variant.sch 45 */
			{	/* Inline/variant.sch 45 */
				obj_t BgL_classz00_1796;

				BgL_classz00_1796 = BGl_localzf2variantzf2zzinline_variantz00;
				{	/* Inline/variant.sch 45 */
					obj_t BgL__ortest_1106z00_1797;

					BgL__ortest_1106z00_1797 = BGL_CLASS_NIL(BgL_classz00_1796);
					if (CBOOL(BgL__ortest_1106z00_1797))
						{	/* Inline/variant.sch 45 */
							return ((BgL_localz00_bglt) BgL__ortest_1106z00_1797);
						}
					else
						{	/* Inline/variant.sch 45 */
							return
								((BgL_localz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1796));
						}
				}
			}
		}

	}



/* &local/variant-nil */
	BgL_localz00_bglt BGl_z62localzf2variantzd2nilz42zzinline_variantz00(obj_t
		BgL_envz00_1974)
	{
		{	/* Inline/variant.sch 45 */
			return BGl_localzf2variantzd2nilz20zzinline_variantz00();
		}

	}



/* local/variant-variant */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2variantzd2variantz20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_16)
	{
		{	/* Inline/variant.sch 46 */
			{
				BgL_localzf2variantzf2_bglt BgL_auxz00_2233;

				{
					obj_t BgL_auxz00_2234;

					{	/* Inline/variant.sch 46 */
						BgL_objectz00_bglt BgL_tmpz00_2235;

						BgL_tmpz00_2235 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_2234 = BGL_OBJECT_WIDENING(BgL_tmpz00_2235);
					}
					BgL_auxz00_2233 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2234);
				}
				return
					(((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2233))->
					BgL_variantz00);
			}
		}

	}



/* &local/variant-variant */
	obj_t BGl_z62localzf2variantzd2variantz42zzinline_variantz00(obj_t
		BgL_envz00_1975, obj_t BgL_oz00_1976)
	{
		{	/* Inline/variant.sch 46 */
			return
				BBOOL(BGl_localzf2variantzd2variantz20zzinline_variantz00(
					((BgL_localz00_bglt) BgL_oz00_1976)));
		}

	}



/* local/variant-variant-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2variantzd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_17, bool_t BgL_vz00_18)
	{
		{	/* Inline/variant.sch 47 */
			{
				BgL_localzf2variantzf2_bglt BgL_auxz00_2243;

				{
					obj_t BgL_auxz00_2244;

					{	/* Inline/variant.sch 47 */
						BgL_objectz00_bglt BgL_tmpz00_2245;

						BgL_tmpz00_2245 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_2244 = BGL_OBJECT_WIDENING(BgL_tmpz00_2245);
					}
					BgL_auxz00_2243 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2244);
				}
				return
					((((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2243))->
						BgL_variantz00) = ((bool_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &local/variant-variant-set! */
	obj_t BGl_z62localzf2variantzd2variantzd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_1977, obj_t BgL_oz00_1978, obj_t BgL_vz00_1979)
	{
		{	/* Inline/variant.sch 47 */
			return
				BGl_localzf2variantzd2variantzd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_1978), CBOOL(BgL_vz00_1979));
		}

	}



/* local/variant-key */
	BGL_EXPORTED_DEF long
		BGl_localzf2variantzd2keyz20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_19)
	{
		{	/* Inline/variant.sch 48 */
			return
				(((BgL_localz00_bglt) COBJECT(
						((BgL_localz00_bglt) BgL_oz00_19)))->BgL_keyz00);
		}

	}



/* &local/variant-key */
	obj_t BGl_z62localzf2variantzd2keyz42zzinline_variantz00(obj_t
		BgL_envz00_1980, obj_t BgL_oz00_1981)
	{
		{	/* Inline/variant.sch 48 */
			return
				BINT(BGl_localzf2variantzd2keyz20zzinline_variantz00(
					((BgL_localz00_bglt) BgL_oz00_1981)));
		}

	}



/* local/variant-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_localzf2variantzd2userzf3zd3zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_22)
	{
		{	/* Inline/variant.sch 50 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_22)))->BgL_userzf3zf3);
		}

	}



/* &local/variant-user? */
	obj_t BGl_z62localzf2variantzd2userzf3zb1zzinline_variantz00(obj_t
		BgL_envz00_1982, obj_t BgL_oz00_1983)
	{
		{	/* Inline/variant.sch 50 */
			return
				BBOOL(BGl_localzf2variantzd2userzf3zd3zzinline_variantz00(
					((BgL_localz00_bglt) BgL_oz00_1983)));
		}

	}



/* local/variant-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2userzf3zd2setz12z13zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_23, bool_t BgL_vz00_24)
	{
		{	/* Inline/variant.sch 51 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_23)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &local/variant-user?-set! */
	obj_t BGl_z62localzf2variantzd2userzf3zd2setz12z71zzinline_variantz00(obj_t
		BgL_envz00_1984, obj_t BgL_oz00_1985, obj_t BgL_vz00_1986)
	{
		{	/* Inline/variant.sch 51 */
			return
				BGl_localzf2variantzd2userzf3zd2setz12z13zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_1985), CBOOL(BgL_vz00_1986));
		}

	}



/* local/variant-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_localzf2variantzd2occurrencewz20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_25)
	{
		{	/* Inline/variant.sch 52 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_25)))->BgL_occurrencewz00);
		}

	}



/* &local/variant-occurrencew */
	obj_t BGl_z62localzf2variantzd2occurrencewz42zzinline_variantz00(obj_t
		BgL_envz00_1987, obj_t BgL_oz00_1988)
	{
		{	/* Inline/variant.sch 52 */
			return
				BINT(BGl_localzf2variantzd2occurrencewz20zzinline_variantz00(
					((BgL_localz00_bglt) BgL_oz00_1988)));
		}

	}



/* local/variant-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2occurrencewzd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_26, long BgL_vz00_27)
	{
		{	/* Inline/variant.sch 53 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_26)))->BgL_occurrencewz00) =
				((long) BgL_vz00_27), BUNSPEC);
		}

	}



/* &local/variant-occurrencew-set! */
	obj_t
		BGl_z62localzf2variantzd2occurrencewzd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_1989, obj_t BgL_oz00_1990, obj_t BgL_vz00_1991)
	{
		{	/* Inline/variant.sch 53 */
			return
				BGl_localzf2variantzd2occurrencewzd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_1990), (long) CINT(BgL_vz00_1991));
		}

	}



/* local/variant-occurrence */
	BGL_EXPORTED_DEF long
		BGl_localzf2variantzd2occurrencez20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_28)
	{
		{	/* Inline/variant.sch 54 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_28)))->BgL_occurrencez00);
		}

	}



/* &local/variant-occurrence */
	obj_t BGl_z62localzf2variantzd2occurrencez42zzinline_variantz00(obj_t
		BgL_envz00_1992, obj_t BgL_oz00_1993)
	{
		{	/* Inline/variant.sch 54 */
			return
				BINT(BGl_localzf2variantzd2occurrencez20zzinline_variantz00(
					((BgL_localz00_bglt) BgL_oz00_1993)));
		}

	}



/* local/variant-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2occurrencezd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_29, long BgL_vz00_30)
	{
		{	/* Inline/variant.sch 55 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_29)))->BgL_occurrencez00) =
				((long) BgL_vz00_30), BUNSPEC);
		}

	}



/* &local/variant-occurrence-set! */
	obj_t BGl_z62localzf2variantzd2occurrencezd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_1994, obj_t BgL_oz00_1995, obj_t BgL_vz00_1996)
	{
		{	/* Inline/variant.sch 55 */
			return
				BGl_localzf2variantzd2occurrencezd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_1995), (long) CINT(BgL_vz00_1996));
		}

	}



/* local/variant-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2removablez20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_31)
	{
		{	/* Inline/variant.sch 56 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_31)))->BgL_removablez00);
		}

	}



/* &local/variant-removable */
	obj_t BGl_z62localzf2variantzd2removablez42zzinline_variantz00(obj_t
		BgL_envz00_1997, obj_t BgL_oz00_1998)
	{
		{	/* Inline/variant.sch 56 */
			return
				BGl_localzf2variantzd2removablez20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_1998));
		}

	}



/* local/variant-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2removablezd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* Inline/variant.sch 57 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_32)))->BgL_removablez00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &local/variant-removable-set! */
	obj_t BGl_z62localzf2variantzd2removablezd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_1999, obj_t BgL_oz00_2000, obj_t BgL_vz00_2001)
	{
		{	/* Inline/variant.sch 57 */
			return
				BGl_localzf2variantzd2removablezd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2000), BgL_vz00_2001);
		}

	}



/* local/variant-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2fastzd2alphazf2zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_34)
	{
		{	/* Inline/variant.sch 58 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_34)))->BgL_fastzd2alphazd2);
		}

	}



/* &local/variant-fast-alpha */
	obj_t BGl_z62localzf2variantzd2fastzd2alphaz90zzinline_variantz00(obj_t
		BgL_envz00_2002, obj_t BgL_oz00_2003)
	{
		{	/* Inline/variant.sch 58 */
			return
				BGl_localzf2variantzd2fastzd2alphazf2zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2003));
		}

	}



/* local/variant-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2fastzd2alphazd2setz12z32zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_35, obj_t BgL_vz00_36)
	{
		{	/* Inline/variant.sch 59 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_35)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &local/variant-fast-alpha-set! */
	obj_t
		BGl_z62localzf2variantzd2fastzd2alphazd2setz12z50zzinline_variantz00(obj_t
		BgL_envz00_2004, obj_t BgL_oz00_2005, obj_t BgL_vz00_2006)
	{
		{	/* Inline/variant.sch 59 */
			return
				BGl_localzf2variantzd2fastzd2alphazd2setz12z32zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2005), BgL_vz00_2006);
		}

	}



/* local/variant-access */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2accessz20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_37)
	{
		{	/* Inline/variant.sch 60 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_37)))->BgL_accessz00);
		}

	}



/* &local/variant-access */
	obj_t BGl_z62localzf2variantzd2accessz42zzinline_variantz00(obj_t
		BgL_envz00_2007, obj_t BgL_oz00_2008)
	{
		{	/* Inline/variant.sch 60 */
			return
				BGl_localzf2variantzd2accessz20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2008));
		}

	}



/* local/variant-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2accesszd2setz12ze0zzinline_variantz00
		(BgL_localz00_bglt BgL_oz00_38, obj_t BgL_vz00_39)
	{
		{	/* Inline/variant.sch 61 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_38)))->BgL_accessz00) =
				((obj_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &local/variant-access-set! */
	obj_t BGl_z62localzf2variantzd2accesszd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_2009, obj_t BgL_oz00_2010, obj_t BgL_vz00_2011)
	{
		{	/* Inline/variant.sch 61 */
			return
				BGl_localzf2variantzd2accesszd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2010), BgL_vz00_2011);
		}

	}



/* local/variant-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_localzf2variantzd2valuez20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_40)
	{
		{	/* Inline/variant.sch 62 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_40)))->BgL_valuez00);
		}

	}



/* &local/variant-value */
	BgL_valuez00_bglt BGl_z62localzf2variantzd2valuez42zzinline_variantz00(obj_t
		BgL_envz00_2012, obj_t BgL_oz00_2013)
	{
		{	/* Inline/variant.sch 62 */
			return
				BGl_localzf2variantzd2valuez20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2013));
		}

	}



/* local/variant-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2valuezd2setz12ze0zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_41, BgL_valuez00_bglt BgL_vz00_42)
	{
		{	/* Inline/variant.sch 63 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_41)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_42), BUNSPEC);
		}

	}



/* &local/variant-value-set! */
	obj_t BGl_z62localzf2variantzd2valuezd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_2014, obj_t BgL_oz00_2015, obj_t BgL_vz00_2016)
	{
		{	/* Inline/variant.sch 63 */
			return
				BGl_localzf2variantzd2valuezd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2015),
				((BgL_valuez00_bglt) BgL_vz00_2016));
		}

	}



/* local/variant-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_localzf2variantzd2typez20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_43)
	{
		{	/* Inline/variant.sch 64 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_43)))->BgL_typez00);
		}

	}



/* &local/variant-type */
	BgL_typez00_bglt BGl_z62localzf2variantzd2typez42zzinline_variantz00(obj_t
		BgL_envz00_2017, obj_t BgL_oz00_2018)
	{
		{	/* Inline/variant.sch 64 */
			return
				BGl_localzf2variantzd2typez20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2018));
		}

	}



/* local/variant-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2typezd2setz12ze0zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_44, BgL_typez00_bglt BgL_vz00_45)
	{
		{	/* Inline/variant.sch 65 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_44)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_45), BUNSPEC);
		}

	}



/* &local/variant-type-set! */
	obj_t BGl_z62localzf2variantzd2typezd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_2019, obj_t BgL_oz00_2020, obj_t BgL_vz00_2021)
	{
		{	/* Inline/variant.sch 65 */
			return
				BGl_localzf2variantzd2typezd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2020),
				((BgL_typez00_bglt) BgL_vz00_2021));
		}

	}



/* local/variant-name */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2namez20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_46)
	{
		{	/* Inline/variant.sch 66 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_46)))->BgL_namez00);
		}

	}



/* &local/variant-name */
	obj_t BGl_z62localzf2variantzd2namez42zzinline_variantz00(obj_t
		BgL_envz00_2022, obj_t BgL_oz00_2023)
	{
		{	/* Inline/variant.sch 66 */
			return
				BGl_localzf2variantzd2namez20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2023));
		}

	}



/* local/variant-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2namezd2setz12ze0zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* Inline/variant.sch 67 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_47)))->BgL_namez00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &local/variant-name-set! */
	obj_t BGl_z62localzf2variantzd2namezd2setz12z82zzinline_variantz00(obj_t
		BgL_envz00_2024, obj_t BgL_oz00_2025, obj_t BgL_vz00_2026)
	{
		{	/* Inline/variant.sch 67 */
			return
				BGl_localzf2variantzd2namezd2setz12ze0zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2025), BgL_vz00_2026);
		}

	}



/* local/variant-id */
	BGL_EXPORTED_DEF obj_t
		BGl_localzf2variantzd2idz20zzinline_variantz00(BgL_localz00_bglt
		BgL_oz00_49)
	{
		{	/* Inline/variant.sch 68 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_49)))->BgL_idz00);
		}

	}



/* &local/variant-id */
	obj_t BGl_z62localzf2variantzd2idz42zzinline_variantz00(obj_t BgL_envz00_2027,
		obj_t BgL_oz00_2028)
	{
		{	/* Inline/variant.sch 68 */
			return
				BGl_localzf2variantzd2idz20zzinline_variantz00(
				((BgL_localz00_bglt) BgL_oz00_2028));
		}

	}



/* invariant-args */
	BGL_EXPORTED_DEF obj_t
		BGl_invariantzd2argszd2zzinline_variantz00(BgL_nodez00_bglt BgL_nodez00_52,
		BgL_variablez00_bglt BgL_varz00_53, obj_t BgL_callsz00_54)
	{
		{	/* Inline/variant.scm 36 */
			{	/* Inline/variant.scm 37 */
				BgL_valuez00_bglt BgL_funz00_1388;

				BgL_funz00_1388 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_53))->BgL_valuez00);
				{	/* Inline/variant.scm 37 */
					obj_t BgL_argsz00_1389;

					BgL_argsz00_1389 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1388)))->BgL_argsz00);
					{	/* Inline/variant.scm 38 */
						obj_t BgL_valsz00_1390;

						BgL_valsz00_1390 =
							(((BgL_appz00_bglt) COBJECT(
									((BgL_appz00_bglt) BgL_nodez00_52)))->BgL_argsz00);
						{	/* Inline/variant.scm 39 */

							{
								obj_t BgL_ll1263z00_1392;
								obj_t BgL_ll1264z00_1393;

								BgL_ll1263z00_1392 = BgL_argsz00_1389;
								BgL_ll1264z00_1393 = BgL_valsz00_1390;
							BgL_zc3z04anonymousza31281ze3z87_1394:
								if (NULLP(BgL_ll1263z00_1392))
									{	/* Inline/variant.scm 42 */
										((bool_t) 1);
									}
								else
									{	/* Inline/variant.scm 42 */
										{	/* Inline/variant.scm 43 */
											obj_t BgL_localz00_1396;
											obj_t BgL_valz00_1397;

											BgL_localz00_1396 = CAR(((obj_t) BgL_ll1263z00_1392));
											BgL_valz00_1397 = CAR(((obj_t) BgL_ll1264z00_1393));
											{	/* Inline/variant.scm 43 */
												bool_t BgL_test1834z00_2353;

												if (
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_1396))))->
															BgL_accessz00) == CNST_TABLE_REF(((long) 0))))
													{	/* Inline/variant.scm 44 */
														bool_t BgL__ortest_1126z00_1418;

														BgL__ortest_1126z00_1418 =
															BGl_isazf3zf3zz__objectz00(BgL_valz00_1397,
															BGl_atomz00zzast_nodez00);
														if (BgL__ortest_1126z00_1418)
															{	/* Inline/variant.scm 44 */
																BgL_test1834z00_2353 = BgL__ortest_1126z00_1418;
															}
														else
															{	/* Inline/variant.scm 45 */
																bool_t BgL__ortest_1127z00_1419;

																BgL__ortest_1127z00_1419 =
																	BGl_isazf3zf3zz__objectz00(BgL_valz00_1397,
																	BGl_kwotez00zzast_nodez00);
																if (BgL__ortest_1127z00_1419)
																	{	/* Inline/variant.scm 45 */
																		BgL_test1834z00_2353 =
																			BgL__ortest_1127z00_1419;
																	}
																else
																	{	/* Inline/variant.scm 45 */
																		if (BGl_isazf3zf3zz__objectz00
																			(BgL_valz00_1397,
																				BGl_varz00zzast_nodez00))
																			{	/* Inline/variant.scm 46 */
																				BgL_test1834z00_2353 =
																					(
																					(((BgL_variablez00_bglt) COBJECT(
																								(((BgL_varz00_bglt) COBJECT(
																											((BgL_varz00_bglt)
																												BgL_valz00_1397)))->
																									BgL_variablez00)))->
																						BgL_accessz00) ==
																					CNST_TABLE_REF(((long) 0)));
																			}
																		else
																			{	/* Inline/variant.scm 46 */
																				BgL_test1834z00_2353 = ((bool_t) 0);
																			}
																	}
															}
													}
												else
													{	/* Inline/variant.scm 43 */
														BgL_test1834z00_2353 = ((bool_t) 0);
													}
												if (BgL_test1834z00_2353)
													{	/* Inline/variant.scm 43 */
														{	/* Inline/variant.scm 49 */
															BgL_localzf2variantzf2_bglt BgL_wide1131z00_1409;

															BgL_wide1131z00_1409 =
																((BgL_localzf2variantzf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzf2variantzf2_bgl))));
															{	/* Inline/variant.scm 49 */
																obj_t BgL_auxz00_2376;
																BgL_objectz00_bglt BgL_tmpz00_2372;

																BgL_auxz00_2376 =
																	((obj_t) BgL_wide1131z00_1409);
																BgL_tmpz00_2372 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_1396)));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2372,
																	BgL_auxz00_2376);
															}
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_1396)));
															{	/* Inline/variant.scm 49 */
																long BgL_arg1290z00_1410;

																{	/* Inline/variant.scm 49 */
																	long BgL_res1752z00_1814;

																	BgL_res1752z00_1814 =
																		BGL_CLASS_INDEX
																		(BGl_localzf2variantzf2zzinline_variantz00);
																	BgL_arg1290z00_1410 = BgL_res1752z00_1814;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_1396))),
																	BgL_arg1290z00_1410);
															}
															((BgL_localz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_1396)));
														}
														{
															BgL_localzf2variantzf2_bglt BgL_auxz00_2390;

															{
																obj_t BgL_auxz00_2391;

																{	/* Inline/variant.scm 49 */
																	BgL_objectz00_bglt BgL_tmpz00_2392;

																	BgL_tmpz00_2392 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_1396)));
																	BgL_auxz00_2391 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2392);
																}
																BgL_auxz00_2390 =
																	((BgL_localzf2variantzf2_bglt)
																	BgL_auxz00_2391);
															}
															((((BgL_localzf2variantzf2_bglt)
																		COBJECT(BgL_auxz00_2390))->BgL_variantz00) =
																((bool_t) ((bool_t) 0)), BUNSPEC);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_localz00_1396));
													}
												else
													{	/* Inline/variant.scm 43 */
														{	/* Inline/variant.scm 50 */
															BgL_localzf2variantzf2_bglt BgL_wide1136z00_1414;

															BgL_wide1136z00_1414 =
																((BgL_localzf2variantzf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_localzf2variantzf2_bgl))));
															{	/* Inline/variant.scm 50 */
																obj_t BgL_auxz00_2406;
																BgL_objectz00_bglt BgL_tmpz00_2402;

																BgL_auxz00_2406 =
																	((obj_t) BgL_wide1136z00_1414);
																BgL_tmpz00_2402 =
																	((BgL_objectz00_bglt)
																	((BgL_localz00_bglt)
																		((BgL_localz00_bglt) BgL_localz00_1396)));
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2402,
																	BgL_auxz00_2406);
															}
															((BgL_objectz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_1396)));
															{	/* Inline/variant.scm 50 */
																long BgL_arg1291z00_1415;

																{	/* Inline/variant.scm 50 */
																	long BgL_res1753z00_1820;

																	BgL_res1753z00_1820 =
																		BGL_CLASS_INDEX
																		(BGl_localzf2variantzf2zzinline_variantz00);
																	BgL_arg1291z00_1415 = BgL_res1753z00_1820;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_1396))),
																	BgL_arg1291z00_1415);
															}
															((BgL_localz00_bglt)
																((BgL_localz00_bglt)
																	((BgL_localz00_bglt) BgL_localz00_1396)));
														}
														{
															BgL_localzf2variantzf2_bglt BgL_auxz00_2420;

															{
																obj_t BgL_auxz00_2421;

																{	/* Inline/variant.scm 50 */
																	BgL_objectz00_bglt BgL_tmpz00_2422;

																	BgL_tmpz00_2422 =
																		((BgL_objectz00_bglt)
																		((BgL_localz00_bglt)
																			((BgL_localz00_bglt) BgL_localz00_1396)));
																	BgL_auxz00_2421 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2422);
																}
																BgL_auxz00_2420 =
																	((BgL_localzf2variantzf2_bglt)
																	BgL_auxz00_2421);
															}
															((((BgL_localzf2variantzf2_bglt)
																		COBJECT(BgL_auxz00_2420))->BgL_variantz00) =
																((bool_t) ((bool_t) 1)), BUNSPEC);
														}
														((BgL_localz00_bglt)
															((BgL_localz00_bglt) BgL_localz00_1396));
										}}}
										{	/* Inline/variant.scm 42 */
											obj_t BgL_arg1297z00_1424;
											obj_t BgL_arg1298z00_1425;

											BgL_arg1297z00_1424 = CDR(((obj_t) BgL_ll1263z00_1392));
											BgL_arg1298z00_1425 = CDR(((obj_t) BgL_ll1264z00_1393));
											{
												obj_t BgL_ll1264z00_2436;
												obj_t BgL_ll1263z00_2435;

												BgL_ll1263z00_2435 = BgL_arg1297z00_1424;
												BgL_ll1264z00_2436 = BgL_arg1298z00_1425;
												BgL_ll1264z00_1393 = BgL_ll1264z00_2436;
												BgL_ll1263z00_1392 = BgL_ll1263z00_2435;
												goto BgL_zc3z04anonymousza31281ze3z87_1394;
											}
										}
									}
							}
							{
								obj_t BgL_l1268z00_1428;

								BgL_l1268z00_1428 = BgL_callsz00_54;
							BgL_zc3z04anonymousza31299ze3z87_1429:
								if (PAIRP(BgL_l1268z00_1428))
									{	/* Inline/variant.scm 53 */
										{	/* Inline/variant.scm 54 */
											BgL_appz00_bglt BgL_appz00_1431;

											BgL_appz00_1431 =
												((BgL_appz00_bglt) CAR(BgL_l1268z00_1428));
											{	/* Inline/variant.scm 54 */
												obj_t BgL_g1139z00_1432;

												BgL_g1139z00_1432 =
													(((BgL_appz00_bglt) COBJECT(BgL_appz00_1431))->
													BgL_argsz00);
												{
													obj_t BgL_actualsz00_1434;
													obj_t BgL_argsz00_1435;

													BgL_actualsz00_1434 = BgL_g1139z00_1432;
													BgL_argsz00_1435 = BgL_argsz00_1389;
												BgL_zc3z04anonymousza31301ze3z87_1436:
													if (NULLP(BgL_argsz00_1435))
														{	/* Inline/variant.scm 57 */
															CNST_TABLE_REF(((long) 1));
														}
													else
														{	/* Inline/variant.scm 57 */
															if (NULLP(BgL_actualsz00_1434))
																{
																	obj_t BgL_l1266z00_1440;

																	{	/* Inline/variant.scm 60 */
																		bool_t BgL_tmpz00_2447;

																		BgL_l1266z00_1440 = BgL_argsz00_1435;
																	BgL_zc3z04anonymousza31304ze3z87_1441:
																		if (PAIRP(BgL_l1266z00_1440))
																			{	/* Inline/variant.scm 60 */
																				{	/* Inline/variant.scm 61 */
																					obj_t BgL_localz00_1443;

																					BgL_localz00_1443 =
																						CAR(BgL_l1266z00_1440);
																					{
																						BgL_localzf2variantzf2_bglt
																							BgL_auxz00_2451;
																						{
																							obj_t BgL_auxz00_2452;

																							{	/* Inline/variant.scm 61 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_2453;
																								BgL_tmpz00_2453 =
																									((BgL_objectz00_bglt) (
																										(BgL_localz00_bglt)
																										BgL_localz00_1443));
																								BgL_auxz00_2452 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_2453);
																							}
																							BgL_auxz00_2451 =
																								((BgL_localzf2variantzf2_bglt)
																								BgL_auxz00_2452);
																						}
																						((((BgL_localzf2variantzf2_bglt)
																									COBJECT(BgL_auxz00_2451))->
																								BgL_variantz00) =
																							((bool_t) ((bool_t) 1)), BUNSPEC);
																					}
																				}
																				{
																					obj_t BgL_l1266z00_2459;

																					BgL_l1266z00_2459 =
																						CDR(BgL_l1266z00_1440);
																					BgL_l1266z00_1440 = BgL_l1266z00_2459;
																					goto
																						BgL_zc3z04anonymousza31304ze3z87_1441;
																				}
																			}
																		else
																			{	/* Inline/variant.scm 60 */
																				BgL_tmpz00_2447 = ((bool_t) 1);
																			}
																		BBOOL(BgL_tmpz00_2447);
																	}
																}
															else
																{	/* Inline/variant.scm 63 */
																	bool_t BgL_test1843z00_2462;

																	{	/* Inline/variant.scm 63 */
																		bool_t BgL_test1844z00_2463;

																		{	/* Inline/variant.scm 63 */
																			obj_t BgL_arg1326z00_1462;

																			BgL_arg1326z00_1462 =
																				CAR(((obj_t) BgL_actualsz00_1434));
																			BgL_test1844z00_2463 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_arg1326z00_1462,
																				BGl_varz00zzast_nodez00);
																		}
																		if (BgL_test1844z00_2463)
																			{	/* Inline/variant.scm 63 */
																				BgL_test1843z00_2462 =
																					(
																					((obj_t)
																						(((BgL_varz00_bglt) COBJECT(
																									((BgL_varz00_bglt)
																										CAR(
																											((obj_t)
																												BgL_actualsz00_1434)))))->
																							BgL_variablez00)) ==
																					CAR(((obj_t) BgL_argsz00_1435)));
																			}
																		else
																			{	/* Inline/variant.scm 63 */
																				BgL_test1843z00_2462 = ((bool_t) 0);
																			}
																	}
																	if (BgL_test1843z00_2462)
																		{	/* Inline/variant.scm 65 */
																			obj_t BgL_arg1314z00_1453;
																			obj_t BgL_arg1315z00_1454;

																			BgL_arg1314z00_1453 =
																				CDR(((obj_t) BgL_actualsz00_1434));
																			BgL_arg1315z00_1454 =
																				CDR(((obj_t) BgL_argsz00_1435));
																			{
																				obj_t BgL_argsz00_2480;
																				obj_t BgL_actualsz00_2479;

																				BgL_actualsz00_2479 =
																					BgL_arg1314z00_1453;
																				BgL_argsz00_2480 = BgL_arg1315z00_1454;
																				BgL_argsz00_1435 = BgL_argsz00_2480;
																				BgL_actualsz00_1434 =
																					BgL_actualsz00_2479;
																				goto
																					BgL_zc3z04anonymousza31301ze3z87_1436;
																			}
																		}
																	else
																		{	/* Inline/variant.scm 63 */
																			{	/* Inline/variant.scm 67 */
																				obj_t BgL_arg1316z00_1455;

																				BgL_arg1316z00_1455 =
																					CAR(((obj_t) BgL_argsz00_1435));
																				{
																					BgL_localzf2variantzf2_bglt
																						BgL_auxz00_2483;
																					{
																						obj_t BgL_auxz00_2484;

																						{	/* Inline/variant.scm 67 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_2485;
																							BgL_tmpz00_2485 =
																								((BgL_objectz00_bglt) (
																									(BgL_localz00_bglt)
																									BgL_arg1316z00_1455));
																							BgL_auxz00_2484 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_2485);
																						}
																						BgL_auxz00_2483 =
																							((BgL_localzf2variantzf2_bglt)
																							BgL_auxz00_2484);
																					}
																					((((BgL_localzf2variantzf2_bglt)
																								COBJECT(BgL_auxz00_2483))->
																							BgL_variantz00) =
																						((bool_t) ((bool_t) 1)), BUNSPEC);
																				}
																			}
																			{	/* Inline/variant.scm 68 */
																				obj_t BgL_arg1317z00_1456;
																				obj_t BgL_arg1319z00_1457;

																				BgL_arg1317z00_1456 =
																					CDR(((obj_t) BgL_actualsz00_1434));
																				BgL_arg1319z00_1457 =
																					CDR(((obj_t) BgL_argsz00_1435));
																				{
																					obj_t BgL_argsz00_2496;
																					obj_t BgL_actualsz00_2495;

																					BgL_actualsz00_2495 =
																						BgL_arg1317z00_1456;
																					BgL_argsz00_2496 =
																						BgL_arg1319z00_1457;
																					BgL_argsz00_1435 = BgL_argsz00_2496;
																					BgL_actualsz00_1434 =
																						BgL_actualsz00_2495;
																					goto
																						BgL_zc3z04anonymousza31301ze3z87_1436;
																				}
																			}
																		}
																}
														}
												}
											}
										}
										{
											obj_t BgL_l1268z00_2497;

											BgL_l1268z00_2497 = CDR(BgL_l1268z00_1428);
											BgL_l1268z00_1428 = BgL_l1268z00_2497;
											goto BgL_zc3z04anonymousza31299ze3z87_1429;
										}
									}
								else
									{	/* Inline/variant.scm 53 */
										((bool_t) 1);
									}
							}
							{
								obj_t BgL_argsz00_1468;
								obj_t BgL_invariantz00_1469;

								BgL_argsz00_1468 = BgL_argsz00_1389;
								BgL_invariantz00_1469 = BNIL;
							BgL_zc3z04anonymousza31328ze3z87_1470:
								if (NULLP(BgL_argsz00_1468))
									{	/* Inline/variant.scm 73 */
										return bgl_reverse_bang(BgL_invariantz00_1469);
									}
								else
									{	/* Inline/variant.scm 75 */
										obj_t BgL_arg1330z00_1472;
										obj_t BgL_arg1331z00_1473;

										BgL_arg1330z00_1472 = CDR(((obj_t) BgL_argsz00_1468));
										{	/* Inline/variant.scm 76 */
											bool_t BgL_test1846z00_2504;

											{	/* Inline/variant.scm 76 */
												BgL_localz00_bglt BgL_oz00_1854;

												BgL_oz00_1854 =
													((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_1468)));
												{
													BgL_localzf2variantzf2_bglt BgL_auxz00_2508;

													{
														obj_t BgL_auxz00_2509;

														{	/* Inline/variant.scm 76 */
															BgL_objectz00_bglt BgL_tmpz00_2510;

															BgL_tmpz00_2510 =
																((BgL_objectz00_bglt) BgL_oz00_1854);
															BgL_auxz00_2509 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2510);
														}
														BgL_auxz00_2508 =
															((BgL_localzf2variantzf2_bglt) BgL_auxz00_2509);
													}
													BgL_test1846z00_2504 =
														(((BgL_localzf2variantzf2_bglt)
															COBJECT(BgL_auxz00_2508))->BgL_variantz00);
												}
											}
											if (BgL_test1846z00_2504)
												{	/* Inline/variant.scm 76 */
													BgL_arg1331z00_1473 = BgL_invariantz00_1469;
												}
											else
												{	/* Inline/variant.scm 78 */
													obj_t BgL_arg1337z00_1476;

													BgL_arg1337z00_1476 = CAR(((obj_t) BgL_argsz00_1468));
													BgL_arg1331z00_1473 =
														MAKE_YOUNG_PAIR(BgL_arg1337z00_1476,
														BgL_invariantz00_1469);
												}
										}
										{
											obj_t BgL_invariantz00_2519;
											obj_t BgL_argsz00_2518;

											BgL_argsz00_2518 = BgL_arg1330z00_1472;
											BgL_invariantz00_2519 = BgL_arg1331z00_1473;
											BgL_invariantz00_1469 = BgL_invariantz00_2519;
											BgL_argsz00_1468 = BgL_argsz00_2518;
											goto BgL_zc3z04anonymousza31328ze3z87_1470;
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* &invariant-args */
	obj_t BGl_z62invariantzd2argszb0zzinline_variantz00(obj_t BgL_envz00_2029,
		obj_t BgL_nodez00_2030, obj_t BgL_varz00_2031, obj_t BgL_callsz00_2032)
	{
		{	/* Inline/variant.scm 36 */
			return
				BGl_invariantzd2argszd2zzinline_variantz00(
				((BgL_nodez00_bglt) BgL_nodez00_2030),
				((BgL_variablez00_bglt) BgL_varz00_2031), BgL_callsz00_2032);
		}

	}



/* variant-args */
	BGL_EXPORTED_DEF obj_t
		BGl_variantzd2argszd2zzinline_variantz00(BgL_variablez00_bglt BgL_varz00_55)
	{
		{	/* Inline/variant.scm 85 */
			{	/* Inline/variant.scm 86 */
				BgL_valuez00_bglt BgL_funz00_1479;

				BgL_funz00_1479 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_55))->BgL_valuez00);
				{	/* Inline/variant.scm 86 */
					obj_t BgL_argsz00_1480;

					BgL_argsz00_1480 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1479)))->BgL_argsz00);
					{	/* Inline/variant.scm 87 */

						{
							obj_t BgL_argsz00_1483;
							obj_t BgL_variantz00_1484;

							BgL_argsz00_1483 = BgL_argsz00_1480;
							BgL_variantz00_1484 = BNIL;
						BgL_zc3z04anonymousza31339ze3z87_1485:
							if (NULLP(BgL_argsz00_1483))
								{	/* Inline/variant.scm 90 */
									return bgl_reverse_bang(BgL_variantz00_1484);
								}
							else
								{	/* Inline/variant.scm 92 */
									obj_t BgL_arg1344z00_1487;
									obj_t BgL_arg1345z00_1488;

									BgL_arg1344z00_1487 = CDR(((obj_t) BgL_argsz00_1483));
									{	/* Inline/variant.scm 93 */
										bool_t BgL_test1848z00_2531;

										{	/* Inline/variant.scm 93 */
											BgL_localz00_bglt BgL_oz00_1862;

											BgL_oz00_1862 =
												((BgL_localz00_bglt) CAR(((obj_t) BgL_argsz00_1483)));
											{
												BgL_localzf2variantzf2_bglt BgL_auxz00_2535;

												{
													obj_t BgL_auxz00_2536;

													{	/* Inline/variant.scm 93 */
														BgL_objectz00_bglt BgL_tmpz00_2537;

														BgL_tmpz00_2537 =
															((BgL_objectz00_bglt) BgL_oz00_1862);
														BgL_auxz00_2536 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2537);
													}
													BgL_auxz00_2535 =
														((BgL_localzf2variantzf2_bglt) BgL_auxz00_2536);
												}
												BgL_test1848z00_2531 =
													(((BgL_localzf2variantzf2_bglt)
														COBJECT(BgL_auxz00_2535))->BgL_variantz00);
											}
										}
										if (BgL_test1848z00_2531)
											{	/* Inline/variant.scm 94 */
												obj_t BgL_arg1351z00_1491;

												BgL_arg1351z00_1491 = CAR(((obj_t) BgL_argsz00_1483));
												BgL_arg1345z00_1488 =
													MAKE_YOUNG_PAIR(BgL_arg1351z00_1491,
													BgL_variantz00_1484);
											}
										else
											{	/* Inline/variant.scm 93 */
												BgL_arg1345z00_1488 = BgL_variantz00_1484;
											}
									}
									{
										obj_t BgL_variantz00_2546;
										obj_t BgL_argsz00_2545;

										BgL_argsz00_2545 = BgL_arg1344z00_1487;
										BgL_variantz00_2546 = BgL_arg1345z00_1488;
										BgL_variantz00_1484 = BgL_variantz00_2546;
										BgL_argsz00_1483 = BgL_argsz00_2545;
										goto BgL_zc3z04anonymousza31339ze3z87_1485;
									}
								}
						}
					}
				}
			}
		}

	}



/* &variant-args */
	obj_t BGl_z62variantzd2argszb0zzinline_variantz00(obj_t BgL_envz00_2033,
		obj_t BgL_varz00_2034)
	{
		{	/* Inline/variant.scm 85 */
			return
				BGl_variantzd2argszd2zzinline_variantz00(
				((BgL_variablez00_bglt) BgL_varz00_2034));
		}

	}



/* substitutions */
	BGL_EXPORTED_DEF obj_t
		BGl_substitutionsz00zzinline_variantz00(BgL_variablez00_bglt BgL_varz00_56,
		obj_t BgL_actualsz00_57, obj_t BgL_varzd2argszd2_58)
	{
		{	/* Inline/variant.scm 100 */
			{	/* Inline/variant.scm 101 */
				BgL_valuez00_bglt BgL_funz00_1494;

				BgL_funz00_1494 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_56))->BgL_valuez00);
				{	/* Inline/variant.scm 101 */
					obj_t BgL_allzd2argszd2_1495;

					BgL_allzd2argszd2_1495 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1494)))->BgL_argsz00);
					{	/* Inline/variant.scm 102 */

						{
							obj_t BgL_actualsz00_1498;
							obj_t BgL_allzd2argszd2_1499;
							obj_t BgL_varzd2argszd2_1500;
							obj_t BgL_substitutionsz00_1501;

							BgL_actualsz00_1498 = BgL_actualsz00_57;
							BgL_allzd2argszd2_1499 = BgL_allzd2argszd2_1495;
							BgL_varzd2argszd2_1500 = BgL_varzd2argszd2_58;
							BgL_substitutionsz00_1501 = BNIL;
						BgL_zc3z04anonymousza31353ze3z87_1502:
							if (NULLP(BgL_allzd2argszd2_1499))
								{	/* Inline/variant.scm 108 */
									return bgl_reverse_bang(BgL_substitutionsz00_1501);
								}
							else
								{	/* Inline/variant.scm 110 */
									bool_t BgL_test1850z00_2555;

									{	/* Inline/variant.scm 110 */
										BgL_localz00_bglt BgL_oz00_1869;

										BgL_oz00_1869 =
											((BgL_localz00_bglt)
											CAR(((obj_t) BgL_allzd2argszd2_1499)));
										{
											BgL_localzf2variantzf2_bglt BgL_auxz00_2559;

											{
												obj_t BgL_auxz00_2560;

												{	/* Inline/variant.scm 110 */
													BgL_objectz00_bglt BgL_tmpz00_2561;

													BgL_tmpz00_2561 =
														((BgL_objectz00_bglt) BgL_oz00_1869);
													BgL_auxz00_2560 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2561);
												}
												BgL_auxz00_2559 =
													((BgL_localzf2variantzf2_bglt) BgL_auxz00_2560);
											}
											BgL_test1850z00_2555 =
												(((BgL_localzf2variantzf2_bglt)
													COBJECT(BgL_auxz00_2559))->BgL_variantz00);
										}
									}
									if (BgL_test1850z00_2555)
										{	/* Inline/variant.scm 111 */
											obj_t BgL_arg1360z00_1506;
											obj_t BgL_arg1361z00_1507;
											obj_t BgL_arg1363z00_1508;
											obj_t BgL_arg1364z00_1509;

											BgL_arg1360z00_1506 = CDR(((obj_t) BgL_actualsz00_1498));
											BgL_arg1361z00_1507 =
												CDR(((obj_t) BgL_allzd2argszd2_1499));
											BgL_arg1363z00_1508 =
												CDR(((obj_t) BgL_varzd2argszd2_1500));
											{	/* Inline/variant.scm 114 */
												obj_t BgL_arg1367z00_1510;

												BgL_arg1367z00_1510 =
													CAR(((obj_t) BgL_varzd2argszd2_1500));
												BgL_arg1364z00_1509 =
													MAKE_YOUNG_PAIR(BgL_arg1367z00_1510,
													BgL_substitutionsz00_1501);
											}
											{
												obj_t BgL_substitutionsz00_2578;
												obj_t BgL_varzd2argszd2_2577;
												obj_t BgL_allzd2argszd2_2576;
												obj_t BgL_actualsz00_2575;

												BgL_actualsz00_2575 = BgL_arg1360z00_1506;
												BgL_allzd2argszd2_2576 = BgL_arg1361z00_1507;
												BgL_varzd2argszd2_2577 = BgL_arg1363z00_1508;
												BgL_substitutionsz00_2578 = BgL_arg1364z00_1509;
												BgL_substitutionsz00_1501 = BgL_substitutionsz00_2578;
												BgL_varzd2argszd2_1500 = BgL_varzd2argszd2_2577;
												BgL_allzd2argszd2_1499 = BgL_allzd2argszd2_2576;
												BgL_actualsz00_1498 = BgL_actualsz00_2575;
												goto BgL_zc3z04anonymousza31353ze3z87_1502;
											}
										}
									else
										{	/* Inline/variant.scm 116 */
											obj_t BgL_arg1370z00_1511;
											obj_t BgL_arg1371z00_1512;
											obj_t BgL_arg1372z00_1513;

											BgL_arg1370z00_1511 = CDR(((obj_t) BgL_actualsz00_1498));
											BgL_arg1371z00_1512 =
												CDR(((obj_t) BgL_allzd2argszd2_1499));
											{	/* Inline/variant.scm 119 */
												obj_t BgL_arg1381z00_1514;

												{	/* Inline/variant.scm 119 */
													bool_t BgL_test1851z00_2583;

													{	/* Inline/variant.scm 119 */
														obj_t BgL_arg1396z00_1518;

														BgL_arg1396z00_1518 =
															CAR(((obj_t) BgL_actualsz00_1498));
														BgL_test1851z00_2583 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1396z00_1518,
															BGl_varz00zzast_nodez00);
													}
													if (BgL_test1851z00_2583)
														{	/* Inline/variant.scm 119 */
															BgL_arg1381z00_1514 =
																((obj_t)
																(((BgL_varz00_bglt) COBJECT(
																			((BgL_varz00_bglt)
																				CAR(
																					((obj_t) BgL_actualsz00_1498)))))->
																	BgL_variablez00));
														}
													else
														{	/* Inline/variant.scm 119 */
															BgL_arg1381z00_1514 =
																CAR(((obj_t) BgL_actualsz00_1498));
														}
												}
												BgL_arg1372z00_1513 =
													MAKE_YOUNG_PAIR(BgL_arg1381z00_1514,
													BgL_substitutionsz00_1501);
											}
											{
												obj_t BgL_substitutionsz00_2597;
												obj_t BgL_allzd2argszd2_2596;
												obj_t BgL_actualsz00_2595;

												BgL_actualsz00_2595 = BgL_arg1370z00_1511;
												BgL_allzd2argszd2_2596 = BgL_arg1371z00_1512;
												BgL_substitutionsz00_2597 = BgL_arg1372z00_1513;
												BgL_substitutionsz00_1501 = BgL_substitutionsz00_2597;
												BgL_allzd2argszd2_1499 = BgL_allzd2argszd2_2596;
												BgL_actualsz00_1498 = BgL_actualsz00_2595;
												goto BgL_zc3z04anonymousza31353ze3z87_1502;
											}
										}
								}
						}
					}
				}
			}
		}

	}



/* &substitutions */
	obj_t BGl_z62substitutionsz62zzinline_variantz00(obj_t BgL_envz00_2035,
		obj_t BgL_varz00_2036, obj_t BgL_actualsz00_2037,
		obj_t BgL_varzd2argszd2_2038)
	{
		{	/* Inline/variant.scm 100 */
			return
				BGl_substitutionsz00zzinline_variantz00(
				((BgL_variablez00_bglt) BgL_varz00_2036), BgL_actualsz00_2037,
				BgL_varzd2argszd2_2038);
		}

	}



/* shrink-args! */
	BGL_EXPORTED_DEF obj_t
		BGl_shrinkzd2argsz12zc0zzinline_variantz00(BgL_variablez00_bglt
		BgL_varz00_59)
	{
		{	/* Inline/variant.scm 127 */
			{	/* Inline/variant.scm 128 */
				BgL_valuez00_bglt BgL_funz00_1521;

				BgL_funz00_1521 =
					(((BgL_variablez00_bglt) COBJECT(BgL_varz00_59))->BgL_valuez00);
				{	/* Inline/variant.scm 128 */
					obj_t BgL_argsz00_1522;

					BgL_argsz00_1522 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1521)))->BgL_argsz00);
					{	/* Inline/variant.scm 129 */

						{
							obj_t BgL_l1270z00_1524;

							{	/* Inline/variant.scm 130 */
								bool_t BgL_tmpz00_2603;

								BgL_l1270z00_1524 = BgL_argsz00_1522;
							BgL_zc3z04anonymousza31418ze3z87_1525:
								if (PAIRP(BgL_l1270z00_1524))
									{	/* Inline/variant.scm 130 */
										{	/* Inline/variant.scm 130 */
											obj_t BgL_az00_1527;

											BgL_az00_1527 = CAR(BgL_l1270z00_1524);
											{	/* Inline/variant.scm 130 */
												bool_t BgL_test1853z00_2607;

												{	/* Inline/variant.scm 130 */
													bool_t BgL_res1764z00_1889;

													{	/* Inline/variant.scm 130 */
														obj_t BgL_tmpz00_2608;

														{	/* Inline/variant.scm 130 */
															BgL_objectz00_bglt BgL_tmpz00_2609;

															BgL_tmpz00_2609 =
																((BgL_objectz00_bglt) BgL_az00_1527);
															BgL_tmpz00_2608 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2609);
														}
														BgL_res1764z00_1889 = CBOOL(BgL_tmpz00_2608);
													}
													BgL_test1853z00_2607 = BgL_res1764z00_1889;
												}
												if (BgL_test1853z00_2607)
													{	/* Inline/variant.scm 130 */
														{	/* Inline/variant.scm 130 */
															long BgL_arg1421z00_1530;

															{	/* Inline/variant.scm 130 */
																obj_t BgL_arg1422z00_1531;

																{	/* Inline/variant.scm 130 */
																	obj_t BgL_arg1441z00_1532;

																	{	/* Inline/variant.scm 130 */
																		long BgL_arg1816z00_1891;

																		{	/* Inline/variant.scm 130 */
																			long BgL_arg1817z00_1892;

																			{	/* Inline/variant.scm 130 */
																				long BgL_res1765z00_1894;

																				BgL_res1765z00_1894 =
																					BGL_OBJECT_CLASS_NUM(
																					((BgL_objectz00_bglt) BgL_az00_1527));
																				BgL_arg1817z00_1892 =
																					BgL_res1765z00_1894;
																			}
																			BgL_arg1816z00_1891 =
																				(BgL_arg1817z00_1892 - OBJECT_TYPE);
																		}
																		BgL_arg1441z00_1532 =
																			VECTOR_REF
																			(BGl_za2classesza2z00zz__objectz00,
																			BgL_arg1816z00_1891);
																	}
																	BgL_arg1422z00_1531 =
																		BGl_classzd2superzd2zz__objectz00
																		(BgL_arg1441z00_1532);
																}
																{	/* Inline/variant.scm 130 */
																	long BgL_res1767z00_1901;

																	{	/* Inline/variant.scm 130 */
																		obj_t BgL_tmpz00_2618;

																		BgL_tmpz00_2618 =
																			((obj_t) BgL_arg1422z00_1531);
																		BgL_res1767z00_1901 =
																			BGL_CLASS_INDEX(BgL_tmpz00_2618);
																	}
																	BgL_arg1421z00_1530 = BgL_res1767z00_1901;
															}}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_az00_1527),
																BgL_arg1421z00_1530);
														}
														{	/* Inline/variant.scm 130 */
															BgL_objectz00_bglt BgL_tmpz00_2623;

															BgL_tmpz00_2623 =
																((BgL_objectz00_bglt) BgL_az00_1527);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2623, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_az00_1527);
														BgL_az00_1527;
													}
												else
													{	/* Inline/variant.scm 130 */
														BFALSE;
													}
											}
										}
										{
											obj_t BgL_l1270z00_2627;

											BgL_l1270z00_2627 = CDR(BgL_l1270z00_1524);
											BgL_l1270z00_1524 = BgL_l1270z00_2627;
											goto BgL_zc3z04anonymousza31418ze3z87_1525;
										}
									}
								else
									{	/* Inline/variant.scm 130 */
										BgL_tmpz00_2603 = ((bool_t) 1);
									}
								return BBOOL(BgL_tmpz00_2603);
							}
						}
					}
				}
			}
		}

	}



/* &shrink-args! */
	obj_t BGl_z62shrinkzd2argsz12za2zzinline_variantz00(obj_t BgL_envz00_2039,
		obj_t BgL_varz00_2040)
	{
		{	/* Inline/variant.scm 127 */
			return
				BGl_shrinkzd2argsz12zc0zzinline_variantz00(
				((BgL_variablez00_bglt) BgL_varz00_2040));
		}

	}



/* remove-invariant-args! */
	BGL_EXPORTED_DEF BgL_appz00_bglt
		BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(BgL_appz00_bglt
		BgL_appz00_60)
	{
		{	/* Inline/variant.scm 141 */
			{	/* Inline/variant.scm 143 */
				obj_t BgL_g1146z00_1536;

				BgL_g1146z00_1536 =
					(((BgL_sfunz00_bglt) COBJECT(
							((BgL_sfunz00_bglt)
								(((BgL_variablez00_bglt) COBJECT(
											(((BgL_varz00_bglt) COBJECT(
														(((BgL_appz00_bglt) COBJECT(BgL_appz00_60))->
															BgL_funz00)))->BgL_variablez00)))->
									BgL_valuez00))))->BgL_argsz00);
				{
					obj_t BgL_formalsz00_1540;
					obj_t BgL_oldzd2argszd2_1541;
					obj_t BgL_newzd2argszd2_1542;

					BgL_formalsz00_1540 = BgL_g1146z00_1536;
					BgL_oldzd2argszd2_1541 =
						(((BgL_appz00_bglt) COBJECT(BgL_appz00_60))->BgL_argsz00);
					BgL_newzd2argszd2_1542 = BNIL;
				BgL_zc3z04anonymousza31449ze3z87_1543:
					if (NULLP(BgL_oldzd2argszd2_1541))
						{	/* Inline/variant.scm 147 */
							((((BgL_appz00_bglt) COBJECT(BgL_appz00_60))->BgL_argsz00) =
								((obj_t) bgl_reverse_bang(BgL_newzd2argszd2_1542)), BUNSPEC);
							return BgL_appz00_60;
						}
					else
						{	/* Inline/variant.scm 150 */
							bool_t BgL_test1855z00_2641;

							{	/* Inline/variant.scm 150 */
								bool_t BgL_test1856z00_2642;

								{	/* Inline/variant.scm 150 */
									obj_t BgL_arg1536z00_1561;

									BgL_arg1536z00_1561 = CAR(((obj_t) BgL_formalsz00_1540));
									BgL_test1856z00_2642 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1536z00_1561,
										BGl_localzf2variantzf2zzinline_variantz00);
								}
								if (BgL_test1856z00_2642)
									{	/* Inline/variant.scm 151 */
										bool_t BgL_test1857z00_2646;

										{	/* Inline/variant.scm 151 */
											BgL_localz00_bglt BgL_oz00_1913;

											BgL_oz00_1913 =
												((BgL_localz00_bglt)
												CAR(((obj_t) BgL_formalsz00_1540)));
											{
												BgL_localzf2variantzf2_bglt BgL_auxz00_2650;

												{
													obj_t BgL_auxz00_2651;

													{	/* Inline/variant.scm 151 */
														BgL_objectz00_bglt BgL_tmpz00_2652;

														BgL_tmpz00_2652 =
															((BgL_objectz00_bglt) BgL_oz00_1913);
														BgL_auxz00_2651 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2652);
													}
													BgL_auxz00_2650 =
														((BgL_localzf2variantzf2_bglt) BgL_auxz00_2651);
												}
												BgL_test1857z00_2646 =
													(((BgL_localzf2variantzf2_bglt)
														COBJECT(BgL_auxz00_2650))->BgL_variantz00);
											}
										}
										if (BgL_test1857z00_2646)
											{	/* Inline/variant.scm 151 */
												BgL_test1855z00_2641 = ((bool_t) 0);
											}
										else
											{	/* Inline/variant.scm 151 */
												BgL_test1855z00_2641 = ((bool_t) 1);
											}
									}
								else
									{	/* Inline/variant.scm 150 */
										BgL_test1855z00_2641 = ((bool_t) 0);
									}
							}
							if (BgL_test1855z00_2641)
								{	/* Inline/variant.scm 152 */
									obj_t BgL_arg1489z00_1552;
									obj_t BgL_arg1493z00_1553;

									BgL_arg1489z00_1552 = CDR(((obj_t) BgL_formalsz00_1540));
									BgL_arg1493z00_1553 = CDR(((obj_t) BgL_oldzd2argszd2_1541));
									{
										obj_t BgL_oldzd2argszd2_2662;
										obj_t BgL_formalsz00_2661;

										BgL_formalsz00_2661 = BgL_arg1489z00_1552;
										BgL_oldzd2argszd2_2662 = BgL_arg1493z00_1553;
										BgL_oldzd2argszd2_1541 = BgL_oldzd2argszd2_2662;
										BgL_formalsz00_1540 = BgL_formalsz00_2661;
										goto BgL_zc3z04anonymousza31449ze3z87_1543;
									}
								}
							else
								{	/* Inline/variant.scm 156 */
									obj_t BgL_arg1495z00_1554;
									obj_t BgL_arg1497z00_1555;
									obj_t BgL_arg1518z00_1556;

									BgL_arg1495z00_1554 = CDR(((obj_t) BgL_formalsz00_1540));
									BgL_arg1497z00_1555 = CDR(((obj_t) BgL_oldzd2argszd2_1541));
									{	/* Inline/variant.scm 158 */
										obj_t BgL_arg1521z00_1557;

										BgL_arg1521z00_1557 = CAR(((obj_t) BgL_oldzd2argszd2_1541));
										BgL_arg1518z00_1556 =
											MAKE_YOUNG_PAIR(BgL_arg1521z00_1557,
											BgL_newzd2argszd2_1542);
									}
									{
										obj_t BgL_newzd2argszd2_2672;
										obj_t BgL_oldzd2argszd2_2671;
										obj_t BgL_formalsz00_2670;

										BgL_formalsz00_2670 = BgL_arg1495z00_1554;
										BgL_oldzd2argszd2_2671 = BgL_arg1497z00_1555;
										BgL_newzd2argszd2_2672 = BgL_arg1518z00_1556;
										BgL_newzd2argszd2_1542 = BgL_newzd2argszd2_2672;
										BgL_oldzd2argszd2_1541 = BgL_oldzd2argszd2_2671;
										BgL_formalsz00_1540 = BgL_formalsz00_2670;
										goto BgL_zc3z04anonymousza31449ze3z87_1543;
									}
								}
						}
				}
			}
		}

	}



/* &remove-invariant-args! */
	BgL_appz00_bglt
		BGl_z62removezd2invariantzd2argsz12z70zzinline_variantz00(obj_t
		BgL_envz00_2041, obj_t BgL_appz00_2042)
	{
		{	/* Inline/variant.scm 141 */
			return
				BGl_removezd2invariantzd2argsz12z12zzinline_variantz00(
				((BgL_appz00_bglt) BgL_appz00_2042));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			{	/* Inline/variant.scm 22 */
				obj_t BgL_arg1573z00_1570;
				obj_t BgL_arg1575z00_1571;

				{	/* Inline/variant.scm 22 */
					obj_t BgL_v1272z00_1604;

					BgL_v1272z00_1604 = create_vector(((long) 1));
					{	/* Inline/variant.scm 22 */
						obj_t BgL_arg1593z00_1605;

						BgL_arg1593z00_1605 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1777z00zzinline_variantz00,
							BGl_proc1776z00zzinline_variantz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1272z00_1604, ((long) 0), BgL_arg1593z00_1605);
					}
					BgL_arg1573z00_1570 = BgL_v1272z00_1604;
				}
				{	/* Inline/variant.scm 22 */
					obj_t BgL_v1273z00_1615;

					BgL_v1273z00_1615 = create_vector(((long) 0));
					BgL_arg1575z00_1571 = BgL_v1273z00_1615;
				}
				return (BGl_localzf2variantzf2zzinline_variantz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 5)), BGl_localz00zzast_varz00,
						((long) 37115), BGl_proc1781z00zzinline_variantz00,
						BGl_proc1780z00zzinline_variantz00, BFALSE,
						BGl_proc1779z00zzinline_variantz00,
						BGl_proc1778z00zzinline_variantz00, BgL_arg1573z00_1570,
						BgL_arg1575z00_1571), BUNSPEC);
		}}

	}



/* &lambda1586 */
	BgL_localz00_bglt BGl_z62lambda1586z62zzinline_variantz00(obj_t
		BgL_envz00_2049, obj_t BgL_o1117z00_2050)
	{
		{	/* Inline/variant.scm 22 */
			{	/* Inline/variant.scm 22 */
				long BgL_arg1588z00_2095;

				{	/* Inline/variant.scm 22 */
					obj_t BgL_arg1589z00_2096;

					{	/* Inline/variant.scm 22 */
						obj_t BgL_arg1592z00_2097;

						{	/* Inline/variant.scm 22 */
							long BgL_arg1816z00_2098;

							{	/* Inline/variant.scm 22 */
								long BgL_arg1817z00_2099;

								{	/* Inline/variant.scm 22 */
									long BgL_res1773z00_2100;

									BgL_res1773z00_2100 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1117z00_2050)));
									BgL_arg1817z00_2099 = BgL_res1773z00_2100;
								}
								BgL_arg1816z00_2098 = (BgL_arg1817z00_2099 - OBJECT_TYPE);
							}
							BgL_arg1592z00_2097 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2098);
						}
						BgL_arg1589z00_2096 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1592z00_2097);
					}
					{	/* Inline/variant.scm 22 */
						long BgL_res1775z00_2101;

						{	/* Inline/variant.scm 22 */
							obj_t BgL_tmpz00_2691;

							BgL_tmpz00_2691 = ((obj_t) BgL_arg1589z00_2096);
							BgL_res1775z00_2101 = BGL_CLASS_INDEX(BgL_tmpz00_2691);
						}
						BgL_arg1588z00_2095 = BgL_res1775z00_2101;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1117z00_2050)), BgL_arg1588z00_2095);
			}
			{	/* Inline/variant.scm 22 */
				BgL_objectz00_bglt BgL_tmpz00_2697;

				BgL_tmpz00_2697 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2050));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2697, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2050));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1117z00_2050));
		}

	}



/* &<@anonymous:1585> */
	obj_t BGl_z62zc3z04anonymousza31585ze3ze5zzinline_variantz00(obj_t
		BgL_envz00_2051, obj_t BgL_new1116z00_2052)
	{
		{	/* Inline/variant.scm 22 */
			{
				BgL_localz00_bglt BgL_auxz00_2705;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2052))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 6))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2713;

					{	/* Inline/variant.scm 22 */
						obj_t BgL_classz00_2103;

						BgL_classz00_2103 = BGl_typez00zztype_typez00;
						{	/* Inline/variant.scm 22 */
							obj_t BgL__ortest_1106z00_2104;

							BgL__ortest_1106z00_2104 = BGL_CLASS_NIL(BgL_classz00_2103);
							if (CBOOL(BgL__ortest_1106z00_2104))
								{	/* Inline/variant.scm 22 */
									BgL_auxz00_2713 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2104);
								}
							else
								{	/* Inline/variant.scm 22 */
									BgL_auxz00_2713 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2103));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2052))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2713), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_2723;

					{	/* Inline/variant.scm 22 */
						obj_t BgL_classz00_2105;

						BgL_classz00_2105 = BGl_valuez00zzast_varz00;
						{	/* Inline/variant.scm 22 */
							obj_t BgL__ortest_1106z00_2106;

							BgL__ortest_1106z00_2106 = BGL_CLASS_NIL(BgL_classz00_2105);
							if (CBOOL(BgL__ortest_1106z00_2106))
								{	/* Inline/variant.scm 22 */
									BgL_auxz00_2723 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2106);
								}
							else
								{	/* Inline/variant.scm 22 */
									BgL_auxz00_2723 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2105));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1116z00_2052))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_2723), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1116z00_2052))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1116z00_2052))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_localzf2variantzf2_bglt BgL_auxz00_2754;

					{
						obj_t BgL_auxz00_2755;

						{	/* Inline/variant.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_2756;

							BgL_tmpz00_2756 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1116z00_2052));
							BgL_auxz00_2755 = BGL_OBJECT_WIDENING(BgL_tmpz00_2756);
						}
						BgL_auxz00_2754 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2755);
					}
					((((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2754))->
							BgL_variantz00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_2705 = ((BgL_localz00_bglt) BgL_new1116z00_2052);
				return ((obj_t) BgL_auxz00_2705);
			}
		}

	}



/* &lambda1583 */
	BgL_localz00_bglt BGl_z62lambda1583z62zzinline_variantz00(obj_t
		BgL_envz00_2053, obj_t BgL_o1113z00_2054)
	{
		{	/* Inline/variant.scm 22 */
			{	/* Inline/variant.scm 22 */
				BgL_localzf2variantzf2_bglt BgL_wide1115z00_2108;

				BgL_wide1115z00_2108 =
					((BgL_localzf2variantzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2variantzf2_bgl))));
				{	/* Inline/variant.scm 22 */
					obj_t BgL_auxz00_2769;
					BgL_objectz00_bglt BgL_tmpz00_2765;

					BgL_auxz00_2769 = ((obj_t) BgL_wide1115z00_2108);
					BgL_tmpz00_2765 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2054)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2765, BgL_auxz00_2769);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2054)));
				{	/* Inline/variant.scm 22 */
					long BgL_arg1584z00_2109;

					{	/* Inline/variant.scm 22 */
						long BgL_res1772z00_2110;

						BgL_res1772z00_2110 =
							BGL_CLASS_INDEX(BGl_localzf2variantzf2zzinline_variantz00);
						BgL_arg1584z00_2109 = BgL_res1772z00_2110;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1113z00_2054))), BgL_arg1584z00_2109);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1113z00_2054)));
			}
		}

	}



/* &lambda1576 */
	BgL_localz00_bglt BGl_z62lambda1576z62zzinline_variantz00(obj_t
		BgL_envz00_2055, obj_t BgL_id1101z00_2056, obj_t BgL_name1102z00_2057,
		obj_t BgL_type1103z00_2058, obj_t BgL_value1104z00_2059,
		obj_t BgL_access1105z00_2060, obj_t BgL_fastzd2alpha1106zd2_2061,
		obj_t BgL_removable1107z00_2062, obj_t BgL_occurrence1108z00_2063,
		obj_t BgL_occurrencew1109z00_2064, obj_t BgL_userzf31110zf3_2065,
		obj_t BgL_key1111z00_2066, obj_t BgL_variant1112z00_2067)
	{
		{	/* Inline/variant.scm 22 */
			{	/* Inline/variant.scm 22 */
				long BgL_occurrence1108z00_2114;
				long BgL_occurrencew1109z00_2115;
				bool_t BgL_userzf31110zf3_2116;
				long BgL_key1111z00_2117;
				bool_t BgL_variant1112z00_2118;

				BgL_occurrence1108z00_2114 = (long) CINT(BgL_occurrence1108z00_2063);
				BgL_occurrencew1109z00_2115 = (long) CINT(BgL_occurrencew1109z00_2064);
				BgL_userzf31110zf3_2116 = CBOOL(BgL_userzf31110zf3_2065);
				BgL_key1111z00_2117 = (long) CINT(BgL_key1111z00_2066);
				BgL_variant1112z00_2118 = CBOOL(BgL_variant1112z00_2067);
				{	/* Inline/variant.scm 22 */
					BgL_localz00_bglt BgL_new1151z00_2119;

					{	/* Inline/variant.scm 22 */
						BgL_localz00_bglt BgL_tmp1149z00_2120;
						BgL_localzf2variantzf2_bglt BgL_wide1150z00_2121;

						{
							BgL_localz00_bglt BgL_auxz00_2788;

							{	/* Inline/variant.scm 22 */
								BgL_localz00_bglt BgL_new1148z00_2122;

								BgL_new1148z00_2122 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Inline/variant.scm 22 */
									long BgL_arg1582z00_2123;

									{	/* Inline/variant.scm 22 */
										long BgL_res1770z00_2124;

										BgL_res1770z00_2124 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1582z00_2123 = BgL_res1770z00_2124;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1148z00_2122),
										BgL_arg1582z00_2123);
								}
								{	/* Inline/variant.scm 22 */
									BgL_objectz00_bglt BgL_tmpz00_2793;

									BgL_tmpz00_2793 = ((BgL_objectz00_bglt) BgL_new1148z00_2122);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2793, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1148z00_2122);
								BgL_auxz00_2788 = BgL_new1148z00_2122;
							}
							BgL_tmp1149z00_2120 = ((BgL_localz00_bglt) BgL_auxz00_2788);
						}
						BgL_wide1150z00_2121 =
							((BgL_localzf2variantzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2variantzf2_bgl))));
						{	/* Inline/variant.scm 22 */
							obj_t BgL_auxz00_2801;
							BgL_objectz00_bglt BgL_tmpz00_2799;

							BgL_auxz00_2801 = ((obj_t) BgL_wide1150z00_2121);
							BgL_tmpz00_2799 = ((BgL_objectz00_bglt) BgL_tmp1149z00_2120);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2799, BgL_auxz00_2801);
						}
						((BgL_objectz00_bglt) BgL_tmp1149z00_2120);
						{	/* Inline/variant.scm 22 */
							long BgL_arg1578z00_2125;

							{	/* Inline/variant.scm 22 */
								long BgL_res1771z00_2126;

								BgL_res1771z00_2126 =
									BGL_CLASS_INDEX(BGl_localzf2variantzf2zzinline_variantz00);
								BgL_arg1578z00_2125 = BgL_res1771z00_2126;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1149z00_2120),
								BgL_arg1578z00_2125);
						}
						BgL_new1151z00_2119 = ((BgL_localz00_bglt) BgL_tmp1149z00_2120);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1151z00_2119)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1101z00_2056)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_namez00) =
						((obj_t) BgL_name1102z00_2057), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1103z00_2058)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1104z00_2059)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_accessz00) =
						((obj_t) BgL_access1105z00_2060), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1106zd2_2061), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_removablez00) =
						((obj_t) BgL_removable1107z00_2062), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_occurrencez00) =
						((long) BgL_occurrence1108z00_2114), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1109z00_2115), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1151z00_2119)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31110zf3_2116), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1151z00_2119)))->BgL_keyz00) =
						((long) BgL_key1111z00_2117), BUNSPEC);
					{
						BgL_localzf2variantzf2_bglt BgL_auxz00_2834;

						{
							obj_t BgL_auxz00_2835;

							{	/* Inline/variant.scm 22 */
								BgL_objectz00_bglt BgL_tmpz00_2836;

								BgL_tmpz00_2836 = ((BgL_objectz00_bglt) BgL_new1151z00_2119);
								BgL_auxz00_2835 = BGL_OBJECT_WIDENING(BgL_tmpz00_2836);
							}
							BgL_auxz00_2834 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2835);
						}
						((((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2834))->
								BgL_variantz00) = ((bool_t) BgL_variant1112z00_2118), BUNSPEC);
					}
					return BgL_new1151z00_2119;
				}
			}
		}

	}



/* &lambda1601 */
	obj_t BGl_z62lambda1601z62zzinline_variantz00(obj_t BgL_envz00_2068,
		obj_t BgL_oz00_2069, obj_t BgL_vz00_2070)
	{
		{	/* Inline/variant.scm 22 */
			{	/* Inline/variant.scm 22 */
				bool_t BgL_vz00_2128;

				BgL_vz00_2128 = CBOOL(BgL_vz00_2070);
				{
					BgL_localzf2variantzf2_bglt BgL_auxz00_2842;

					{
						obj_t BgL_auxz00_2843;

						{	/* Inline/variant.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_2844;

							BgL_tmpz00_2844 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2069));
							BgL_auxz00_2843 = BGL_OBJECT_WIDENING(BgL_tmpz00_2844);
						}
						BgL_auxz00_2842 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2843);
					}
					return
						((((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2842))->
							BgL_variantz00) = ((bool_t) BgL_vz00_2128), BUNSPEC);
				}
			}
		}

	}



/* &lambda1600 */
	obj_t BGl_z62lambda1600z62zzinline_variantz00(obj_t BgL_envz00_2071,
		obj_t BgL_oz00_2072)
	{
		{	/* Inline/variant.scm 22 */
			{	/* Inline/variant.scm 22 */
				bool_t BgL_tmpz00_2850;

				{
					BgL_localzf2variantzf2_bglt BgL_auxz00_2851;

					{
						obj_t BgL_auxz00_2852;

						{	/* Inline/variant.scm 22 */
							BgL_objectz00_bglt BgL_tmpz00_2853;

							BgL_tmpz00_2853 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2072));
							BgL_auxz00_2852 = BGL_OBJECT_WIDENING(BgL_tmpz00_2853);
						}
						BgL_auxz00_2851 = ((BgL_localzf2variantzf2_bglt) BgL_auxz00_2852);
					}
					BgL_tmpz00_2850 =
						(((BgL_localzf2variantzf2_bglt) COBJECT(BgL_auxz00_2851))->
						BgL_variantz00);
				}
				return BBOOL(BgL_tmpz00_2850);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinline_variantz00()
	{
		{	/* Inline/variant.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1782z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1782z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1782z00zzinline_variantz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1782z00zzinline_variantz00));
			return
				BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1782z00zzinline_variantz00));
		}

	}

#ifdef __cplusplus
}
#endif
