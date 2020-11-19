/*===========================================================================*/
/*   (Foreign/jtype.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Foreign/jtype.scm) */
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

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;


	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62jarrayzd2siza7ez17zzforeign_jtypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2initzf3zd2setz12ze1zzforeign_jtypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jarrayzd2initzf3z21zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2siza7ezd2setz12zd7zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2locationzd2setz12z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62jarrayzd2pointedzd2tozd2byzd2setz12z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2jarrayzd2zzforeign_jtypez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	static obj_t BGl_objectzd2initzd2zzforeign_jtypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2locationzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt,
		obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2tvectorzd2zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2aliaszd2setz12z70zzforeign_jtypez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzforeign_jtypez00();
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	static obj_t BGl_z62jarrayzf3z91zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31251ze3ze5zzforeign_jtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62jarrayzd2locationzb0zzforeign_jtypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2aliaszd2zzforeign_jtypez00(BgL_typez00_bglt);
	extern obj_t
		BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00(obj_t);
	static BgL_typez00_bglt BGl_z62makezd2jarrayzb0zzforeign_jtypez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_jarrayzd2itemzd2typez00zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2classzd2setz12z70zzforeign_jtypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2namezd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jarrayzd2magiczf3z43zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2coercezd2toz62zzforeign_jtypez00(obj_t, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62makezd2ctypezd2accessesz121139z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2initzf3z43zzforeign_jtypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1244z62zzforeign_jtypez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1247z62zzforeign_jtypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1252z62zzforeign_jtypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1269z62zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2parentszb0zzforeign_jtypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1270z62zzforeign_jtypez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzforeign_jtypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2classzd2zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2occurrencezd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt,
		int);
	static obj_t BGl_z62jarrayzd2occurrencezb0zzforeign_jtypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_jarrayzd2nilzd2zzforeign_jtypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2importzd2locationz00zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_jarrayzf3zf3zzforeign_jtypez00(obj_t);
	static obj_t BGl_z62jarrayzd2aliaszb0zzforeign_jtypez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2idzb0zzforeign_jtypez00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62jarrayzd2nilzb0zzforeign_jtypez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2aliaszd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2siza7ezd2setz12zb5zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2idzd2zzforeign_jtypez00(BgL_typez00_bglt);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzforeign_jtypez00 = BUNSPEC;
	static obj_t BGl_z62jarrayzd2occurrencezd2setz12z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2parentszd2setz12z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2tvectorzd2setz12z70zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2tvectorzb0zzforeign_jtypez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2classzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzforeign_jtypez00();
	static obj_t BGl_z62jarrayzd2importzd2locationz62zzforeign_jtypez00(obj_t,
		obj_t);
	static obj_t BGl_z62jarrayzd2classzb0zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzforeign_jtypez00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62jarrayzd2importzd2locationzd2setz12za2zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2z42zd2setz12z50zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2pointedzd2tozd2byzd2setz12z12zzforeign_jtypez00
		(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jarrayz00zzforeign_jtypez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2locationzd2zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2parentszd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2coercezd2toz00zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2tvectorzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL int
		BGl_jarrayzd2occurrencezd2zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2namezd2zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2z42zf2zzforeign_jtypez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2magiczf3zd2setz12z83zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jarrayzd2initzf3zd2setz12z83zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2coercezd2tozd2setz12zc0zzforeign_jtypez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62jarrayzd2pointedzd2tozd2byzb0zzforeign_jtypez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62jarrayzd2coercezd2tozd2setz12za2zzforeign_jtypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2pointedzd2tozd2byzd2zzforeign_jtypez00(BgL_typez00_bglt);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jarrayzd2namezb0zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzforeign_jtypez00();
	static BgL_typez00_bglt
		BGl_z62jarrayzd2itemzd2typez62zzforeign_jtypez00(obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzforeign_jtypez00();
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2z42z90zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2namezd2setz12z70zzforeign_jtypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2siza7ez75zzforeign_jtypez00(BgL_typez00_bglt);
	extern BgL_typez00_bglt BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2parentszd2zzforeign_jtypez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2magiczf3zd2setz12ze1zzforeign_jtypez00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jarrayzd2magiczf3z21zzforeign_jtypez00(BgL_typez00_bglt);
	static obj_t BGl_z62jarrayzd2z42zd2setz12z32zzforeign_jtypez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jarrayzd2importzd2locationzd2setz12zc0zzforeign_jtypez00
		(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt
		BGl_z62declarezd2jvmzd2typez12z70zzforeign_jtypez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t __cnst[37];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2locationzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2loca1746z00,
		BGl_z62jarrayzd2locationzb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2occurrencezd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2occu1747z00,
		BGl_z62jarrayzd2occurrencezb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2initzf3zd2envzf3zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2init1748z00,
		BGl_z62jarrayzd2initzf3z43zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2locationzd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2loca1749z00,
		BGl_z62jarrayzd2locationzd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2idzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2idza7b1750za7,
		BGl_z62jarrayzd2idzb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1731z00zzforeign_jtypez00,
		BgL_bgl_za762lambda1270za7621751z00, BGl_z62lambda1270z62zzforeign_jtypez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1732z00zzforeign_jtypez00,
		BgL_bgl_za762lambda1269za7621752z00, BGl_z62lambda1269z62zzforeign_jtypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1733z00zzforeign_jtypez00,
		BgL_bgl_za762lambda1252za7621753z00, BGl_z62lambda1252z62zzforeign_jtypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1734z00zzforeign_jtypez00,
		BgL_bgl_za762za7c3za704anonymo1754za7,
		BGl_z62zc3z04anonymousza31251ze3ze5zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1735z00zzforeign_jtypez00,
		BgL_bgl_za762lambda1247za7621755z00, BGl_z62lambda1247z62zzforeign_jtypez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1736z00zzforeign_jtypez00,
		BgL_bgl_za762lambda1244za7621756z00, BGl_z62lambda1244z62zzforeign_jtypez00,
		0L, BUNSPEC, 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1737z00zzforeign_jtypez00,
		BgL_bgl_za762makeza7d2ctypeza71757za7,
		BGl_z62makezd2ctypezd2accessesz121139z70zzforeign_jtypez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2coercezd2tozd2setz12zd2envz12zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2coer1758z00,
		BGl_z62jarrayzd2coercezd2tozd2setz12za2zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2importzd2locationzd2envzd2zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2impo1759z00,
		BGl_z62jarrayzd2importzd2locationz62zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2pointedzd2tozd2byzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2poin1760z00,
		BGl_z62jarrayzd2pointedzd2tozd2byzb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2z42zd2setz12zd2envz82zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2za742za71761z00,
		BGl_z62jarrayzd2z42zd2setz12z32zzforeign_jtypez00, 0L, BUNSPEC, 2);
	extern obj_t BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2jvmzd2typez12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762declareza7d2jvm1762z00,
		BGl_z62declarezd2jvmzd2typez12z70zzforeign_jtypez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzf3zd2envz21zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7f3za791za71763z00,
		BGl_z62jarrayzf3z91zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2occurrencezd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2occu1764z00,
		BGl_z62jarrayzd2occurrencezd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2classzd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2clas1765z00,
		BGl_z62jarrayzd2classzd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2magiczf3zd2setz12zd2envz33zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2magi1766z00,
		BGl_z62jarrayzd2magiczf3zd2setz12z83zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2siza7ezd2envza7zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2siza7a1767za7,
		BGl_z62jarrayzd2siza7ez17zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2tvectorzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2tvec1768z00,
		BGl_z62jarrayzd2tvectorzb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2nilzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2nilza71769za7,
		BGl_z62jarrayzd2nilzb0zzforeign_jtypez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2importzd2locationzd2setz12zd2envz12zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2impo1770z00,
		BGl_z62jarrayzd2importzd2locationzd2setz12za2zzforeign_jtypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2aliaszd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2alia1771z00,
		BGl_z62jarrayzd2aliaszd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2classzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2clas1772z00,
		BGl_z62jarrayzd2classzb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2parentszd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2pare1773z00,
		BGl_z62jarrayzd2parentszb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2coercezd2tozd2envzd2zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2coer1774z00,
		BGl_z62jarrayzd2coercezd2toz62zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2tvectorzd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2tvec1775z00,
		BGl_z62jarrayzd2tvectorzd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2namezd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2name1776z00,
		BGl_z62jarrayzd2namezb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1738z00zzforeign_jtypez00,
		BgL_bgl_string1738za700za7za7f1777za7, "make-ctype-accesses!", 20);
	      DEFINE_STRING(BGl_string1739z00zzforeign_jtypez00,
		BgL_bgl_string1739za700za7za7f1778za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2siza7ezd2setz12zd2envz67zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2siza7a1779za7,
		BGl_z62jarrayzd2siza7ezd2setz12zd7zzforeign_jtypez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1740z00zzforeign_jtypez00,
		BgL_bgl_string1740za700za7za7f1780za7, "foreign_jtype", 13);
	      DEFINE_STRING(BGl_string1741z00zzforeign_jtypez00,
		BgL_bgl_string1741za700za7za7f1781za7,
		"static ::int ::obj inline object cast instanceof o::obj vlength valloc len len::int vref define-inline vset! offset offset::int -set! -ref make- val int -length bool ->obj o _ foreign_jtype jarray item-type type ? coerce obj bigloo (obj) obj-> ",
		244);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2aliaszd2envz00zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2alia1782z00,
		BGl_z62jarrayzd2aliaszb0zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2initzf3zd2setz12zd2envz33zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2init1783z00,
		BGl_z62jarrayzd2initzf3zd2setz12z83zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2namezd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2name1784z00,
		BGl_z62jarrayzd2namezd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2magiczf3zd2envzf3zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2magi1785z00,
		BGl_z62jarrayzd2magiczf3z43zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2pointedzd2tozd2byzd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2poin1786z00,
		BGl_z62jarrayzd2pointedzd2tozd2byzd2setz12z70zzforeign_jtypez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jarrayzd2envz00zzforeign_jtypez00,
		BgL_bgl_za762makeza7d2jarray1787z00,
		BGl_z62makezd2jarrayzb0zzforeign_jtypez00, 0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jarrayzd2z42zd2envz42zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2za742za71788z00,
		BGl_z62jarrayzd2z42zf2zzforeign_jtypez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2parentszd2setz12zd2envzc0zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2pare1789z00,
		BGl_z62jarrayzd2parentszd2setz12z70zzforeign_jtypez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jarrayzd2itemzd2typezd2envzd2zzforeign_jtypez00,
		BgL_bgl_za762jarrayza7d2item1790z00,
		BGl_z62jarrayzd2itemzd2typez62zzforeign_jtypez00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzforeign_jtypez00));
		     ADD_ROOT((void *) (&BGl_jarrayz00zzforeign_jtypez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long
		BgL_checksumz00_1460, char *BgL_fromz00_1461)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzforeign_jtypez00))
				{
					BGl_requirezd2initializa7ationz75zzforeign_jtypez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzforeign_jtypez00();
					BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00();
					BGl_cnstzd2initzd2zzforeign_jtypez00();
					BGl_importedzd2moduleszd2initz00zzforeign_jtypez00();
					BGl_objectzd2initzd2zzforeign_jtypez00();
					BGl_methodzd2initzd2zzforeign_jtypez00();
					return BGl_toplevelzd2initzd2zzforeign_jtypez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"foreign_jtype");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"foreign_jtype");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			{	/* Foreign/jtype.scm 17 */
				obj_t BgL_cportz00_1211;

				{	/* Foreign/jtype.scm 17 */
					obj_t BgL_stringz00_1219;

					BgL_stringz00_1219 = BGl_string1741z00zzforeign_jtypez00;
					{	/* Foreign/jtype.scm 17 */
						obj_t BgL_startz00_1220;

						BgL_startz00_1220 = BINT(((long) 0));
						{	/* Foreign/jtype.scm 17 */
							obj_t BgL_endz00_1221;

							BgL_endz00_1221 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1219)));
							{	/* Foreign/jtype.scm 17 */

								BgL_cportz00_1211 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1219, BgL_startz00_1220, BgL_endz00_1221);
				}}}}
				{
					long BgL_iz00_1212;

					BgL_iz00_1212 = ((long) 36);
				BgL_loopz00_1213:
					if ((BgL_iz00_1212 == ((long) -1)))
						{	/* Foreign/jtype.scm 17 */
							return BUNSPEC;
						}
					else
						{	/* Foreign/jtype.scm 17 */
							{	/* Foreign/jtype.scm 17 */
								obj_t BgL_arg1744z00_1215;

								{	/* Foreign/jtype.scm 17 */

									{	/* Foreign/jtype.scm 17 */
										obj_t BgL_locationz00_1217;

										BgL_locationz00_1217 = BBOOL(((bool_t) 0));
										{	/* Foreign/jtype.scm 17 */

											BgL_arg1744z00_1215 =
												BGl_readz00zz__readerz00(BgL_cportz00_1211,
												BgL_locationz00_1217);
										}
									}
								}
								{	/* Foreign/jtype.scm 17 */
									int BgL_tmpz00_1489;

									BgL_tmpz00_1489 = (int) (BgL_iz00_1212);
									CNST_TABLE_SET(BgL_tmpz00_1489, BgL_arg1744z00_1215);
							}}
							{	/* Foreign/jtype.scm 17 */
								int BgL_auxz00_1218;

								BgL_auxz00_1218 = (int) ((BgL_iz00_1212 - ((long) 1)));
								{
									long BgL_iz00_1494;

									BgL_iz00_1494 = (long) (BgL_auxz00_1218);
									BgL_iz00_1212 = BgL_iz00_1494;
									goto BgL_loopz00_1213;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			return BUNSPEC;
		}

	}



/* make-jarray */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2jarrayzd2zzforeign_jtypez00(obj_t
		BgL_id1078z00_3, obj_t BgL_name1079z00_4, obj_t BgL_siza7e1080za7_5,
		obj_t BgL_class1081z00_6, obj_t BgL_coercezd2to1082zd2_7,
		obj_t BgL_parents1083z00_8, bool_t BgL_initzf31084zf3_9,
		bool_t BgL_magiczf31085zf3_10, obj_t BgL_z421086z42_11,
		obj_t BgL_alias1087z00_12, obj_t BgL_pointedzd2tozd2by1088z00_13,
		obj_t BgL_tvector1089z00_14, obj_t BgL_location1090z00_15,
		obj_t BgL_importzd2location1091zd2_16, int BgL_occurrence1092z00_17,
		BgL_typez00_bglt BgL_itemzd2type1093zd2_18)
	{
		{	/* Foreign/jtype.sch 51 */
			{	/* Foreign/jtype.sch 51 */
				BgL_typez00_bglt BgL_new1090z00_1224;

				{	/* Foreign/jtype.sch 51 */
					BgL_typez00_bglt BgL_tmp1088z00_1225;
					BgL_jarrayz00_bglt BgL_wide1089z00_1226;

					{
						BgL_typez00_bglt BgL_auxz00_1497;

						{	/* Foreign/jtype.sch 51 */
							BgL_typez00_bglt BgL_new1087z00_1227;

							BgL_new1087z00_1227 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Foreign/jtype.sch 51 */
								long BgL_arg1156z00_1228;

								{	/* Foreign/jtype.sch 51 */
									long BgL_res1689z00_1229;

									BgL_res1689z00_1229 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1156z00_1228 = BgL_res1689z00_1229;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1087z00_1227),
									BgL_arg1156z00_1228);
							}
							{	/* Foreign/jtype.sch 51 */
								BgL_objectz00_bglt BgL_tmpz00_1502;

								BgL_tmpz00_1502 = ((BgL_objectz00_bglt) BgL_new1087z00_1227);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1502, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1087z00_1227);
							BgL_auxz00_1497 = BgL_new1087z00_1227;
						}
						BgL_tmp1088z00_1225 = ((BgL_typez00_bglt) BgL_auxz00_1497);
					}
					BgL_wide1089z00_1226 =
						((BgL_jarrayz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jarrayz00_bgl))));
					{	/* Foreign/jtype.sch 51 */
						obj_t BgL_auxz00_1510;
						BgL_objectz00_bglt BgL_tmpz00_1508;

						BgL_auxz00_1510 = ((obj_t) BgL_wide1089z00_1226);
						BgL_tmpz00_1508 = ((BgL_objectz00_bglt) BgL_tmp1088z00_1225);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1508, BgL_auxz00_1510);
					}
					((BgL_objectz00_bglt) BgL_tmp1088z00_1225);
					{	/* Foreign/jtype.sch 51 */
						long BgL_arg1155z00_1230;

						{	/* Foreign/jtype.sch 51 */
							long BgL_res1690z00_1231;

							BgL_res1690z00_1231 =
								BGL_CLASS_INDEX(BGl_jarrayz00zzforeign_jtypez00);
							BgL_arg1155z00_1230 = BgL_res1690z00_1231;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1088z00_1225), BgL_arg1155z00_1230);
					}
					BgL_new1090z00_1224 = ((BgL_typez00_bglt) BgL_tmp1088z00_1225);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1090z00_1224)))->BgL_idz00) =
					((obj_t) BgL_id1078z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_namez00) =
					((obj_t) BgL_name1079z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1080za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_classz00) =
					((obj_t) BgL_class1081z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1082zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_parentsz00) =
					((obj_t) BgL_parents1083z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31084zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31085zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_z42z42) =
					((obj_t) BgL_z421086z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_aliasz00) =
					((obj_t) BgL_alias1087z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1088z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1089z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_locationz00) =
					((obj_t) BgL_location1090z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1091zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1090z00_1224)))->BgL_occurrencez00) =
					((int) BgL_occurrence1092z00_17), BUNSPEC);
				{
					BgL_jarrayz00_bglt BgL_auxz00_1548;

					{
						obj_t BgL_auxz00_1549;

						{	/* Foreign/jtype.sch 51 */
							BgL_objectz00_bglt BgL_tmpz00_1550;

							BgL_tmpz00_1550 = ((BgL_objectz00_bglt) BgL_new1090z00_1224);
							BgL_auxz00_1549 = BGL_OBJECT_WIDENING(BgL_tmpz00_1550);
						}
						BgL_auxz00_1548 = ((BgL_jarrayz00_bglt) BgL_auxz00_1549);
					}
					((((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1548))->
							BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_itemzd2type1093zd2_18), BUNSPEC);
				}
				return BgL_new1090z00_1224;
			}
		}

	}



/* &make-jarray */
	BgL_typez00_bglt BGl_z62makezd2jarrayzb0zzforeign_jtypez00(obj_t
		BgL_envz00_1070, obj_t BgL_id1078z00_1071, obj_t BgL_name1079z00_1072,
		obj_t BgL_siza7e1080za7_1073, obj_t BgL_class1081z00_1074,
		obj_t BgL_coercezd2to1082zd2_1075, obj_t BgL_parents1083z00_1076,
		obj_t BgL_initzf31084zf3_1077, obj_t BgL_magiczf31085zf3_1078,
		obj_t BgL_z421086z42_1079, obj_t BgL_alias1087z00_1080,
		obj_t BgL_pointedzd2tozd2by1088z00_1081, obj_t BgL_tvector1089z00_1082,
		obj_t BgL_location1090z00_1083, obj_t BgL_importzd2location1091zd2_1084,
		obj_t BgL_occurrence1092z00_1085, obj_t BgL_itemzd2type1093zd2_1086)
	{
		{	/* Foreign/jtype.sch 51 */
			return
				BGl_makezd2jarrayzd2zzforeign_jtypez00(BgL_id1078z00_1071,
				BgL_name1079z00_1072, BgL_siza7e1080za7_1073, BgL_class1081z00_1074,
				BgL_coercezd2to1082zd2_1075, BgL_parents1083z00_1076,
				CBOOL(BgL_initzf31084zf3_1077), CBOOL(BgL_magiczf31085zf3_1078),
				BgL_z421086z42_1079, BgL_alias1087z00_1080,
				BgL_pointedzd2tozd2by1088z00_1081, BgL_tvector1089z00_1082,
				BgL_location1090z00_1083, BgL_importzd2location1091zd2_1084,
				CINT(BgL_occurrence1092z00_1085),
				((BgL_typez00_bglt) BgL_itemzd2type1093zd2_1086));
		}

	}



/* jarray? */
	BGL_EXPORTED_DEF bool_t BGl_jarrayzf3zf3zzforeign_jtypez00(obj_t
		BgL_objz00_19)
	{
		{	/* Foreign/jtype.sch 52 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_19,
				BGl_jarrayz00zzforeign_jtypez00);
		}

	}



/* &jarray? */
	obj_t BGl_z62jarrayzf3z91zzforeign_jtypez00(obj_t BgL_envz00_1087,
		obj_t BgL_objz00_1088)
	{
		{	/* Foreign/jtype.sch 52 */
			return BBOOL(BGl_jarrayzf3zf3zzforeign_jtypez00(BgL_objz00_1088));
		}

	}



/* jarray-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_jarrayzd2nilzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.sch 53 */
			{	/* Foreign/jtype.sch 53 */
				obj_t BgL_classz00_941;

				BgL_classz00_941 = BGl_jarrayz00zzforeign_jtypez00;
				{	/* Foreign/jtype.sch 53 */
					obj_t BgL__ortest_1106z00_942;

					BgL__ortest_1106z00_942 = BGL_CLASS_NIL(BgL_classz00_941);
					if (CBOOL(BgL__ortest_1106z00_942))
						{	/* Foreign/jtype.sch 53 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_942);
						}
					else
						{	/* Foreign/jtype.sch 53 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_941));
						}
				}
			}
		}

	}



/* &jarray-nil */
	BgL_typez00_bglt BGl_z62jarrayzd2nilzb0zzforeign_jtypez00(obj_t
		BgL_envz00_1089)
	{
		{	/* Foreign/jtype.sch 53 */
			return BGl_jarrayzd2nilzd2zzforeign_jtypez00();
		}

	}



/* jarray-item-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_jarrayzd2itemzd2typez00zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_20)
	{
		{	/* Foreign/jtype.sch 54 */
			{
				BgL_jarrayz00_bglt BgL_auxz00_1570;

				{
					obj_t BgL_auxz00_1571;

					{	/* Foreign/jtype.sch 54 */
						BgL_objectz00_bglt BgL_tmpz00_1572;

						BgL_tmpz00_1572 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_1571 = BGL_OBJECT_WIDENING(BgL_tmpz00_1572);
					}
					BgL_auxz00_1570 = ((BgL_jarrayz00_bglt) BgL_auxz00_1571);
				}
				return
					(((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1570))->BgL_itemzd2typezd2);
			}
		}

	}



/* &jarray-item-type */
	BgL_typez00_bglt BGl_z62jarrayzd2itemzd2typez62zzforeign_jtypez00(obj_t
		BgL_envz00_1090, obj_t BgL_oz00_1091)
	{
		{	/* Foreign/jtype.sch 54 */
			return
				BGl_jarrayzd2itemzd2typez00zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1091));
		}

	}



/* jarray-occurrence */
	BGL_EXPORTED_DEF int
		BGl_jarrayzd2occurrencezd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_23)
	{
		{	/* Foreign/jtype.sch 56 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_23)))->BgL_occurrencez00);
		}

	}



/* &jarray-occurrence */
	obj_t BGl_z62jarrayzd2occurrencezb0zzforeign_jtypez00(obj_t BgL_envz00_1092,
		obj_t BgL_oz00_1093)
	{
		{	/* Foreign/jtype.sch 56 */
			return
				BINT(BGl_jarrayzd2occurrencezd2zzforeign_jtypez00(
					((BgL_typez00_bglt) BgL_oz00_1093)));
		}

	}



/* jarray-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2occurrencezd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_24, int BgL_vz00_25)
	{
		{	/* Foreign/jtype.sch 57 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_24)))->BgL_occurrencez00) =
				((int) BgL_vz00_25), BUNSPEC);
		}

	}



/* &jarray-occurrence-set! */
	obj_t BGl_z62jarrayzd2occurrencezd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1094, obj_t BgL_oz00_1095, obj_t BgL_vz00_1096)
	{
		{	/* Foreign/jtype.sch 57 */
			return
				BGl_jarrayzd2occurrencezd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1095), CINT(BgL_vz00_1096));
		}

	}



/* jarray-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2importzd2locationz00zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_26)
	{
		{	/* Foreign/jtype.sch 58 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_26)))->BgL_importzd2locationzd2);
		}

	}



/* &jarray-import-location */
	obj_t BGl_z62jarrayzd2importzd2locationz62zzforeign_jtypez00(obj_t
		BgL_envz00_1097, obj_t BgL_oz00_1098)
	{
		{	/* Foreign/jtype.sch 58 */
			return
				BGl_jarrayzd2importzd2locationz00zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1098));
		}

	}



/* jarray-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2importzd2locationzd2setz12zc0zzforeign_jtypez00
		(BgL_typez00_bglt BgL_oz00_27, obj_t BgL_vz00_28)
	{
		{	/* Foreign/jtype.sch 59 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_27)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_28), BUNSPEC);
		}

	}



/* &jarray-import-location-set! */
	obj_t BGl_z62jarrayzd2importzd2locationzd2setz12za2zzforeign_jtypez00(obj_t
		BgL_envz00_1099, obj_t BgL_oz00_1100, obj_t BgL_vz00_1101)
	{
		{	/* Foreign/jtype.sch 59 */
			return
				BGl_jarrayzd2importzd2locationzd2setz12zc0zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1100), BgL_vz00_1101);
		}

	}



/* jarray-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2locationzd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_29)
	{
		{	/* Foreign/jtype.sch 60 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_29)))->BgL_locationz00);
		}

	}



/* &jarray-location */
	obj_t BGl_z62jarrayzd2locationzb0zzforeign_jtypez00(obj_t BgL_envz00_1102,
		obj_t BgL_oz00_1103)
	{
		{	/* Foreign/jtype.sch 60 */
			return
				BGl_jarrayzd2locationzd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1103));
		}

	}



/* jarray-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2locationzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_30, obj_t BgL_vz00_31)
	{
		{	/* Foreign/jtype.sch 61 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_30)))->BgL_locationz00) =
				((obj_t) BgL_vz00_31), BUNSPEC);
		}

	}



/* &jarray-location-set! */
	obj_t BGl_z62jarrayzd2locationzd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1104, obj_t BgL_oz00_1105, obj_t BgL_vz00_1106)
	{
		{	/* Foreign/jtype.sch 61 */
			return
				BGl_jarrayzd2locationzd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1105), BgL_vz00_1106);
		}

	}



/* jarray-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2tvectorzd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_32)
	{
		{	/* Foreign/jtype.sch 62 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_32)))->BgL_tvectorz00);
		}

	}



/* &jarray-tvector */
	obj_t BGl_z62jarrayzd2tvectorzb0zzforeign_jtypez00(obj_t BgL_envz00_1107,
		obj_t BgL_oz00_1108)
	{
		{	/* Foreign/jtype.sch 62 */
			return
				BGl_jarrayzd2tvectorzd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1108));
		}

	}



/* jarray-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2tvectorzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_33, obj_t BgL_vz00_34)
	{
		{	/* Foreign/jtype.sch 63 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_33)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_34), BUNSPEC);
		}

	}



/* &jarray-tvector-set! */
	obj_t BGl_z62jarrayzd2tvectorzd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1109, obj_t BgL_oz00_1110, obj_t BgL_vz00_1111)
	{
		{	/* Foreign/jtype.sch 63 */
			return
				BGl_jarrayzd2tvectorzd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1110), BgL_vz00_1111);
		}

	}



/* jarray-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2pointedzd2tozd2byzd2zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_35)
	{
		{	/* Foreign/jtype.sch 64 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_35)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &jarray-pointed-to-by */
	obj_t BGl_z62jarrayzd2pointedzd2tozd2byzb0zzforeign_jtypez00(obj_t
		BgL_envz00_1112, obj_t BgL_oz00_1113)
	{
		{	/* Foreign/jtype.sch 64 */
			return
				BGl_jarrayzd2pointedzd2tozd2byzd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1113));
		}

	}



/* jarray-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2pointedzd2tozd2byzd2setz12z12zzforeign_jtypez00
		(BgL_typez00_bglt BgL_oz00_36, obj_t BgL_vz00_37)
	{
		{	/* Foreign/jtype.sch 65 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_36)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_37), BUNSPEC);
		}

	}



/* &jarray-pointed-to-by-set! */
	obj_t BGl_z62jarrayzd2pointedzd2tozd2byzd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1114, obj_t BgL_oz00_1115, obj_t BgL_vz00_1116)
	{
		{	/* Foreign/jtype.sch 65 */
			return
				BGl_jarrayzd2pointedzd2tozd2byzd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1115), BgL_vz00_1116);
		}

	}



/* jarray-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2aliaszd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_38)
	{
		{	/* Foreign/jtype.sch 66 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_38)))->BgL_aliasz00);
		}

	}



/* &jarray-alias */
	obj_t BGl_z62jarrayzd2aliaszb0zzforeign_jtypez00(obj_t BgL_envz00_1117,
		obj_t BgL_oz00_1118)
	{
		{	/* Foreign/jtype.sch 66 */
			return
				BGl_jarrayzd2aliaszd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1118));
		}

	}



/* jarray-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2aliaszd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_39, obj_t BgL_vz00_40)
	{
		{	/* Foreign/jtype.sch 67 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_39)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_40), BUNSPEC);
		}

	}



/* &jarray-alias-set! */
	obj_t BGl_z62jarrayzd2aliaszd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1119, obj_t BgL_oz00_1120, obj_t BgL_vz00_1121)
	{
		{	/* Foreign/jtype.sch 67 */
			return
				BGl_jarrayzd2aliaszd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1120), BgL_vz00_1121);
		}

	}



/* jarray-$ */
	BGL_EXPORTED_DEF obj_t BGl_jarrayzd2z42z90zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_41)
	{
		{	/* Foreign/jtype.sch 68 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_41)))->BgL_z42z42);
		}

	}



/* &jarray-$ */
	obj_t BGl_z62jarrayzd2z42zf2zzforeign_jtypez00(obj_t BgL_envz00_1122,
		obj_t BgL_oz00_1123)
	{
		{	/* Foreign/jtype.sch 68 */
			return
				BGl_jarrayzd2z42z90zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1123));
		}

	}



/* jarray-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2z42zd2setz12z50zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_42,
		obj_t BgL_vz00_43)
	{
		{	/* Foreign/jtype.sch 69 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_42)))->BgL_z42z42) =
				((obj_t) BgL_vz00_43), BUNSPEC);
		}

	}



/* &jarray-$-set! */
	obj_t BGl_z62jarrayzd2z42zd2setz12z32zzforeign_jtypez00(obj_t BgL_envz00_1124,
		obj_t BgL_oz00_1125, obj_t BgL_vz00_1126)
	{
		{	/* Foreign/jtype.sch 69 */
			return
				BGl_jarrayzd2z42zd2setz12z50zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1125), BgL_vz00_1126);
		}

	}



/* jarray-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_jarrayzd2magiczf3z21zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_44)
	{
		{	/* Foreign/jtype.sch 70 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_44)))->BgL_magiczf3zf3);
		}

	}



/* &jarray-magic? */
	obj_t BGl_z62jarrayzd2magiczf3z43zzforeign_jtypez00(obj_t BgL_envz00_1127,
		obj_t BgL_oz00_1128)
	{
		{	/* Foreign/jtype.sch 70 */
			return
				BBOOL(BGl_jarrayzd2magiczf3z21zzforeign_jtypez00(
					((BgL_typez00_bglt) BgL_oz00_1128)));
		}

	}



/* jarray-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2magiczf3zd2setz12ze1zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_45, bool_t BgL_vz00_46)
	{
		{	/* Foreign/jtype.sch 71 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_45)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_46), BUNSPEC);
		}

	}



/* &jarray-magic?-set! */
	obj_t BGl_z62jarrayzd2magiczf3zd2setz12z83zzforeign_jtypez00(obj_t
		BgL_envz00_1129, obj_t BgL_oz00_1130, obj_t BgL_vz00_1131)
	{
		{	/* Foreign/jtype.sch 71 */
			return
				BGl_jarrayzd2magiczf3zd2setz12ze1zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1130), CBOOL(BgL_vz00_1131));
		}

	}



/* jarray-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_jarrayzd2initzf3z21zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_47)
	{
		{	/* Foreign/jtype.sch 72 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_47)))->BgL_initzf3zf3);
		}

	}



/* &jarray-init? */
	obj_t BGl_z62jarrayzd2initzf3z43zzforeign_jtypez00(obj_t BgL_envz00_1132,
		obj_t BgL_oz00_1133)
	{
		{	/* Foreign/jtype.sch 72 */
			return
				BBOOL(BGl_jarrayzd2initzf3z21zzforeign_jtypez00(
					((BgL_typez00_bglt) BgL_oz00_1133)));
		}

	}



/* jarray-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2initzf3zd2setz12ze1zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_48, bool_t BgL_vz00_49)
	{
		{	/* Foreign/jtype.sch 73 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_48)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_49), BUNSPEC);
		}

	}



/* &jarray-init?-set! */
	obj_t BGl_z62jarrayzd2initzf3zd2setz12z83zzforeign_jtypez00(obj_t
		BgL_envz00_1134, obj_t BgL_oz00_1135, obj_t BgL_vz00_1136)
	{
		{	/* Foreign/jtype.sch 73 */
			return
				BGl_jarrayzd2initzf3zd2setz12ze1zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1135), CBOOL(BgL_vz00_1136));
		}

	}



/* jarray-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2parentszd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_50)
	{
		{	/* Foreign/jtype.sch 74 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_50)))->BgL_parentsz00);
		}

	}



/* &jarray-parents */
	obj_t BGl_z62jarrayzd2parentszb0zzforeign_jtypez00(obj_t BgL_envz00_1137,
		obj_t BgL_oz00_1138)
	{
		{	/* Foreign/jtype.sch 74 */
			return
				BGl_jarrayzd2parentszd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1138));
		}

	}



/* jarray-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2parentszd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_51, obj_t BgL_vz00_52)
	{
		{	/* Foreign/jtype.sch 75 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_51)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_52), BUNSPEC);
		}

	}



/* &jarray-parents-set! */
	obj_t BGl_z62jarrayzd2parentszd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1139, obj_t BgL_oz00_1140, obj_t BgL_vz00_1141)
	{
		{	/* Foreign/jtype.sch 75 */
			return
				BGl_jarrayzd2parentszd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1140), BgL_vz00_1141);
		}

	}



/* jarray-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2coercezd2toz00zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_53)
	{
		{	/* Foreign/jtype.sch 76 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_53)))->BgL_coercezd2tozd2);
		}

	}



/* &jarray-coerce-to */
	obj_t BGl_z62jarrayzd2coercezd2toz62zzforeign_jtypez00(obj_t BgL_envz00_1142,
		obj_t BgL_oz00_1143)
	{
		{	/* Foreign/jtype.sch 76 */
			return
				BGl_jarrayzd2coercezd2toz00zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1143));
		}

	}



/* jarray-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2coercezd2tozd2setz12zc0zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_54, obj_t BgL_vz00_55)
	{
		{	/* Foreign/jtype.sch 77 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_54)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_55), BUNSPEC);
		}

	}



/* &jarray-coerce-to-set! */
	obj_t BGl_z62jarrayzd2coercezd2tozd2setz12za2zzforeign_jtypez00(obj_t
		BgL_envz00_1144, obj_t BgL_oz00_1145, obj_t BgL_vz00_1146)
	{
		{	/* Foreign/jtype.sch 77 */
			return
				BGl_jarrayzd2coercezd2tozd2setz12zc0zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1145), BgL_vz00_1146);
		}

	}



/* jarray-class */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2classzd2zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_56)
	{
		{	/* Foreign/jtype.sch 78 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_56)))->BgL_classz00);
		}

	}



/* &jarray-class */
	obj_t BGl_z62jarrayzd2classzb0zzforeign_jtypez00(obj_t BgL_envz00_1147,
		obj_t BgL_oz00_1148)
	{
		{	/* Foreign/jtype.sch 78 */
			return
				BGl_jarrayzd2classzd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1148));
		}

	}



/* jarray-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2classzd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_57, obj_t BgL_vz00_58)
	{
		{	/* Foreign/jtype.sch 79 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_57)))->BgL_classz00) =
				((obj_t) BgL_vz00_58), BUNSPEC);
		}

	}



/* &jarray-class-set! */
	obj_t BGl_z62jarrayzd2classzd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1149, obj_t BgL_oz00_1150, obj_t BgL_vz00_1151)
	{
		{	/* Foreign/jtype.sch 79 */
			return
				BGl_jarrayzd2classzd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1150), BgL_vz00_1151);
		}

	}



/* jarray-size */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2siza7ez75zzforeign_jtypez00(BgL_typez00_bglt BgL_oz00_59)
	{
		{	/* Foreign/jtype.sch 80 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_59)))->BgL_siza7eza7);
		}

	}



/* &jarray-size */
	obj_t BGl_z62jarrayzd2siza7ez17zzforeign_jtypez00(obj_t BgL_envz00_1152,
		obj_t BgL_oz00_1153)
	{
		{	/* Foreign/jtype.sch 80 */
			return
				BGl_jarrayzd2siza7ez75zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1153));
		}

	}



/* jarray-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2siza7ezd2setz12zb5zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_60, obj_t BgL_vz00_61)
	{
		{	/* Foreign/jtype.sch 81 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_60)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_61), BUNSPEC);
		}

	}



/* &jarray-size-set! */
	obj_t BGl_z62jarrayzd2siza7ezd2setz12zd7zzforeign_jtypez00(obj_t
		BgL_envz00_1154, obj_t BgL_oz00_1155, obj_t BgL_vz00_1156)
	{
		{	/* Foreign/jtype.sch 81 */
			return
				BGl_jarrayzd2siza7ezd2setz12zb5zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1155), BgL_vz00_1156);
		}

	}



/* jarray-name */
	BGL_EXPORTED_DEF obj_t BGl_jarrayzd2namezd2zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_62)
	{
		{	/* Foreign/jtype.sch 82 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_62)))->BgL_namez00);
		}

	}



/* &jarray-name */
	obj_t BGl_z62jarrayzd2namezb0zzforeign_jtypez00(obj_t BgL_envz00_1157,
		obj_t BgL_oz00_1158)
	{
		{	/* Foreign/jtype.sch 82 */
			return
				BGl_jarrayzd2namezd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1158));
		}

	}



/* jarray-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jarrayzd2namezd2setz12z12zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_63, obj_t BgL_vz00_64)
	{
		{	/* Foreign/jtype.sch 83 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_63)))->BgL_namez00) =
				((obj_t) BgL_vz00_64), BUNSPEC);
		}

	}



/* &jarray-name-set! */
	obj_t BGl_z62jarrayzd2namezd2setz12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1159, obj_t BgL_oz00_1160, obj_t BgL_vz00_1161)
	{
		{	/* Foreign/jtype.sch 83 */
			return
				BGl_jarrayzd2namezd2setz12z12zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1160), BgL_vz00_1161);
		}

	}



/* jarray-id */
	BGL_EXPORTED_DEF obj_t BGl_jarrayzd2idzd2zzforeign_jtypez00(BgL_typez00_bglt
		BgL_oz00_65)
	{
		{	/* Foreign/jtype.sch 84 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_65)))->BgL_idz00);
		}

	}



/* &jarray-id */
	obj_t BGl_z62jarrayzd2idzb0zzforeign_jtypez00(obj_t BgL_envz00_1162,
		obj_t BgL_oz00_1163)
	{
		{	/* Foreign/jtype.sch 84 */
			return
				BGl_jarrayzd2idzd2zzforeign_jtypez00(
				((BgL_typez00_bglt) BgL_oz00_1163));
		}

	}



/* declare-jvm-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t BgL_idz00_68,
		obj_t BgL_ofz00_69, obj_t BgL_srcz00_70)
	{
		{	/* Foreign/jtype.scm 46 */
			{	/* Foreign/jtype.scm 48 */
				BgL_typez00_bglt BgL_pointedz00_605;

				BgL_pointedz00_605 =
					BGl_usezd2typez12zc0zztype_envz00(BgL_ofz00_69,
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_70));
				{	/* Foreign/jtype.scm 48 */
					obj_t BgL_pointerz00_606;

					BgL_pointerz00_606 =
						(((BgL_typez00_bglt) COBJECT(BgL_pointedz00_605))->
						BgL_pointedzd2tozd2byz00);
					{	/* Foreign/jtype.scm 49 */
						obj_t BgL_namez00_607;

						{	/* Foreign/jtype.scm 50 */
							obj_t BgL_res1691z00_947;

							{	/* Foreign/jtype.scm 50 */
								obj_t BgL_arg1466z00_946;

								BgL_arg1466z00_946 = SYMBOL_TO_STRING(BgL_idz00_68);
								BgL_res1691z00_947 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_946);
							}
							BgL_namez00_607 = BgL_res1691z00_947;
						}
						{	/* Foreign/jtype.scm 50 */
							obj_t BgL_objzd2ze3idz31_608;

							{	/* Foreign/jtype.scm 51 */
								obj_t BgL_arg1216z00_634;

								{	/* Foreign/jtype.scm 51 */
									obj_t BgL_arg1221z00_635;
									obj_t BgL_arg1223z00_636;

									{	/* Foreign/jtype.scm 51 */
										obj_t BgL_res1692z00_950;

										{	/* Foreign/jtype.scm 51 */
											obj_t BgL_symbolz00_948;

											BgL_symbolz00_948 = CNST_TABLE_REF(((long) 0));
											{	/* Foreign/jtype.scm 51 */
												obj_t BgL_arg1466z00_949;

												BgL_arg1466z00_949 =
													SYMBOL_TO_STRING(BgL_symbolz00_948);
												BgL_res1692z00_950 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_949);
										}}
										BgL_arg1221z00_635 = BgL_res1692z00_950;
									}
									{	/* Foreign/jtype.scm 51 */
										obj_t BgL_res1693z00_953;

										{	/* Foreign/jtype.scm 51 */
											obj_t BgL_arg1466z00_952;

											BgL_arg1466z00_952 = SYMBOL_TO_STRING(BgL_idz00_68);
											BgL_res1693z00_953 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_952);
										}
										BgL_arg1223z00_636 = BgL_res1693z00_953;
									}
									BgL_arg1216z00_634 =
										string_append(BgL_arg1221z00_635, BgL_arg1223z00_636);
								}
								BgL_objzd2ze3idz31_608 = bstring_to_symbol(BgL_arg1216z00_634);
							}
							{	/* Foreign/jtype.scm 51 */

								if (BGl_isazf3zf3zz__objectz00(BgL_pointerz00_606,
										BGl_typez00zztype_typez00))
									{	/* Foreign/jtype.scm 54 */
										return
											BGl_declarezd2czd2aliasz12z12zzforeign_ctypez00
											(BgL_idz00_68, BgL_ofz00_69, BgL_namez00_607);
									}
								else
									{	/* Foreign/jtype.scm 58 */
										BgL_typez00_bglt BgL_typez00_610;

										BgL_typez00_610 =
											BGl_declarezd2subtypez12zc0zztype_envz00(BgL_idz00_68,
											BgL_namez00_607, CNST_TABLE_REF(((long) 1)),
											CNST_TABLE_REF(((long) 2)));
										{	/* Foreign/jtype.scm 58 */

											{	/* Foreign/jtype.scm 61 */
												obj_t BgL_arg1165z00_611;

												{	/* Foreign/jtype.scm 61 */
													obj_t BgL_arg1166z00_612;

													{	/* Foreign/jtype.scm 61 */
														obj_t BgL_arg1167z00_613;
														obj_t BgL_arg1169z00_614;

														{	/* Foreign/jtype.scm 61 */
															obj_t BgL_arg1170z00_615;

															{	/* Foreign/jtype.scm 61 */
																obj_t BgL_arg1172z00_616;

																{	/* Foreign/jtype.scm 61 */
																	obj_t BgL_arg1174z00_617;

																	{	/* Foreign/jtype.scm 61 */
																		obj_t BgL_arg1175z00_618;

																		BgL_arg1175z00_618 =
																			MAKE_YOUNG_PAIR(BNIL, BNIL);
																		BgL_arg1174z00_617 =
																			MAKE_YOUNG_PAIR(BNIL, BgL_arg1175z00_618);
																	}
																	BgL_arg1172z00_616 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																		BgL_arg1174z00_617);
																}
																BgL_arg1170z00_615 =
																	MAKE_YOUNG_PAIR(BgL_idz00_68,
																	BgL_arg1172z00_616);
															}
															BgL_arg1167z00_613 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																BgL_arg1170z00_615);
														}
														{	/* Foreign/jtype.scm 62 */
															obj_t BgL_arg1176z00_619;

															{	/* Foreign/jtype.scm 62 */
																obj_t BgL_arg1177z00_620;

																{	/* Foreign/jtype.scm 62 */
																	obj_t BgL_arg1178z00_621;

																	{	/* Foreign/jtype.scm 62 */
																		obj_t BgL_arg1179z00_622;

																		{	/* Foreign/jtype.scm 62 */
																			obj_t BgL_arg1186z00_623;
																			obj_t BgL_arg1190z00_624;

																			{	/* Foreign/jtype.scm 62 */
																				obj_t BgL_arg1194z00_625;

																				{	/* Foreign/jtype.scm 62 */
																					obj_t BgL_arg1197z00_626;

																					{	/* Foreign/jtype.scm 62 */
																						obj_t BgL_arg1201z00_627;
																						obj_t BgL_arg1208z00_628;

																						{	/* Foreign/jtype.scm 62 */
																							obj_t BgL_res1696z00_959;

																							{	/* Foreign/jtype.scm 62 */
																								obj_t BgL_arg1466z00_958;

																								BgL_arg1466z00_958 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_68);
																								BgL_res1696z00_959 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_958);
																							}
																							BgL_arg1201z00_627 =
																								BgL_res1696z00_959;
																						}
																						{	/* Foreign/jtype.scm 62 */
																							obj_t BgL_res1697z00_962;

																							{	/* Foreign/jtype.scm 62 */
																								obj_t BgL_symbolz00_960;

																								BgL_symbolz00_960 =
																									CNST_TABLE_REF(((long) 5));
																								{	/* Foreign/jtype.scm 62 */
																									obj_t BgL_arg1466z00_961;

																									BgL_arg1466z00_961 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_960);
																									BgL_res1697z00_962 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_961);
																							}}
																							BgL_arg1208z00_628 =
																								BgL_res1697z00_962;
																						}
																						BgL_arg1197z00_626 =
																							string_append(BgL_arg1201z00_627,
																							BgL_arg1208z00_628);
																					}
																					BgL_arg1194z00_625 =
																						bstring_to_symbol
																						(BgL_arg1197z00_626);
																				}
																				BgL_arg1186z00_623 =
																					MAKE_YOUNG_PAIR(BgL_arg1194z00_625,
																					BNIL);
																			}
																			BgL_arg1190z00_624 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BgL_arg1179z00_622 =
																				MAKE_YOUNG_PAIR(BgL_arg1186z00_623,
																				BgL_arg1190z00_624);
																		}
																		BgL_arg1178z00_621 =
																			MAKE_YOUNG_PAIR(BgL_idz00_68,
																			BgL_arg1179z00_622);
																	}
																	BgL_arg1177z00_620 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																		BgL_arg1178z00_621);
																}
																BgL_arg1176z00_619 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																	BgL_arg1177z00_620);
															}
															BgL_arg1169z00_614 =
																MAKE_YOUNG_PAIR(BgL_arg1176z00_619, BNIL);
														}
														BgL_arg1166z00_612 =
															MAKE_YOUNG_PAIR(BgL_arg1167z00_613,
															BgL_arg1169z00_614);
													}
													BgL_arg1165z00_611 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
														BgL_arg1166z00_612);
												}
												BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
													(BgL_arg1165z00_611);
											}
											((((BgL_typez00_bglt) COBJECT(BgL_pointedz00_605))->
													BgL_pointedzd2tozd2byz00) =
												((obj_t) ((obj_t) BgL_typez00_610)), BUNSPEC);
											{	/* Foreign/jtype.scm 65 */
												BgL_jarrayz00_bglt BgL_wide1093z00_631;

												BgL_wide1093z00_631 =
													((BgL_jarrayz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_jarrayz00_bgl))));
												{	/* Foreign/jtype.scm 65 */
													obj_t BgL_auxz00_1752;
													BgL_objectz00_bglt BgL_tmpz00_1749;

													BgL_auxz00_1752 = ((obj_t) BgL_wide1093z00_631);
													BgL_tmpz00_1749 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_typez00_610));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1749,
														BgL_auxz00_1752);
												}
												((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_typez00_610));
												{	/* Foreign/jtype.scm 65 */
													long BgL_arg1211z00_632;

													{	/* Foreign/jtype.scm 65 */
														long BgL_res1699z00_968;

														BgL_res1699z00_968 =
															BGL_CLASS_INDEX(BGl_jarrayz00zzforeign_jtypez00);
														BgL_arg1211z00_632 = BgL_res1699z00_968;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_610)),
														BgL_arg1211z00_632);
												}
												((BgL_typez00_bglt)
													((BgL_typez00_bglt) BgL_typez00_610));
											}
											{
												BgL_jarrayz00_bglt BgL_auxz00_1763;

												{
													obj_t BgL_auxz00_1764;

													{	/* Foreign/jtype.scm 66 */
														BgL_objectz00_bglt BgL_tmpz00_1765;

														BgL_tmpz00_1765 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_610));
														BgL_auxz00_1764 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_1765);
													}
													BgL_auxz00_1763 =
														((BgL_jarrayz00_bglt) BgL_auxz00_1764);
												}
												((((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1763))->
														BgL_itemzd2typezd2) =
													((BgL_typez00_bglt) BgL_pointedz00_605), BUNSPEC);
											}
											((BgL_typez00_bglt) BgL_typez00_610);
											return BgL_typez00_610;
										}
									}
							}
						}
					}
				}
			}
		}

	}



/* &declare-jvm-type! */
	BgL_typez00_bglt BGl_z62declarezd2jvmzd2typez12z70zzforeign_jtypez00(obj_t
		BgL_envz00_1164, obj_t BgL_idz00_1165, obj_t BgL_ofz00_1166,
		obj_t BgL_srcz00_1167)
	{
		{	/* Foreign/jtype.scm 46 */
			return
				BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(BgL_idz00_1165,
				BgL_ofz00_1166, BgL_srcz00_1167);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			{	/* Foreign/jtype.scm 38 */
				obj_t BgL_arg1242z00_642;
				obj_t BgL_arg1243z00_643;

				{	/* Foreign/jtype.scm 38 */
					obj_t BgL_v1136z00_680;

					BgL_v1136z00_680 = create_vector(((long) 1));
					{	/* Foreign/jtype.scm 38 */
						obj_t BgL_arg1258z00_681;

						BgL_arg1258z00_681 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc1732z00zzforeign_jtypez00,
							BGl_proc1731z00zzforeign_jtypez00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1136z00_680, ((long) 0), BgL_arg1258z00_681);
					}
					BgL_arg1242z00_642 = BgL_v1136z00_680;
				}
				{	/* Foreign/jtype.scm 38 */
					obj_t BgL_v1137z00_691;

					BgL_v1137z00_691 = create_vector(((long) 0));
					BgL_arg1243z00_643 = BgL_v1137z00_691;
				}
				return (BGl_jarrayz00zzforeign_jtypez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 8)),
						CNST_TABLE_REF(((long) 9)), BGl_typez00zztype_typez00,
						((long) 10425), BGl_proc1736z00zzforeign_jtypez00,
						BGl_proc1735z00zzforeign_jtypez00, BFALSE,
						BGl_proc1734z00zzforeign_jtypez00,
						BGl_proc1733z00zzforeign_jtypez00, BgL_arg1242z00_642,
						BgL_arg1243z00_643), BUNSPEC);
		}}

	}



/* &lambda1252 */
	BgL_typez00_bglt BGl_z62lambda1252z62zzforeign_jtypez00(obj_t BgL_envz00_1174,
		obj_t BgL_o1076z00_1175)
	{
		{	/* Foreign/jtype.scm 38 */
			{	/* Foreign/jtype.scm 38 */
				long BgL_arg1253z00_1233;

				{	/* Foreign/jtype.scm 38 */
					obj_t BgL_arg1254z00_1234;

					{	/* Foreign/jtype.scm 38 */
						obj_t BgL_arg1256z00_1235;

						{	/* Foreign/jtype.scm 38 */
							long BgL_arg1816z00_1236;

							{	/* Foreign/jtype.scm 38 */
								long BgL_arg1817z00_1237;

								{	/* Foreign/jtype.scm 38 */
									long BgL_res1703z00_1238;

									BgL_res1703z00_1238 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1076z00_1175)));
									BgL_arg1817z00_1237 = BgL_res1703z00_1238;
								}
								BgL_arg1816z00_1236 = (BgL_arg1817z00_1237 - OBJECT_TYPE);
							}
							BgL_arg1256z00_1235 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_1236);
						}
						BgL_arg1254z00_1234 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1256z00_1235);
					}
					{	/* Foreign/jtype.scm 38 */
						long BgL_res1705z00_1239;

						{	/* Foreign/jtype.scm 38 */
							obj_t BgL_tmpz00_1787;

							BgL_tmpz00_1787 = ((obj_t) BgL_arg1254z00_1234);
							BgL_res1705z00_1239 = BGL_CLASS_INDEX(BgL_tmpz00_1787);
						}
						BgL_arg1253z00_1233 = BgL_res1705z00_1239;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1076z00_1175)), BgL_arg1253z00_1233);
			}
			{	/* Foreign/jtype.scm 38 */
				BgL_objectz00_bglt BgL_tmpz00_1793;

				BgL_tmpz00_1793 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1076z00_1175));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1793, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1076z00_1175));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1076z00_1175));
		}

	}



/* &<@anonymous:1251> */
	obj_t BGl_z62zc3z04anonymousza31251ze3ze5zzforeign_jtypez00(obj_t
		BgL_envz00_1176, obj_t BgL_new1075z00_1177)
	{
		{	/* Foreign/jtype.scm 38 */
			{
				BgL_typez00_bglt BgL_auxz00_1801;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1075z00_1177))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 10))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1075z00_1177))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_1856;
					BgL_jarrayz00_bglt BgL_auxz00_1849;

					{	/* Foreign/jtype.scm 38 */
						obj_t BgL_classz00_1241;

						BgL_classz00_1241 = BGl_typez00zztype_typez00;
						{	/* Foreign/jtype.scm 38 */
							obj_t BgL__ortest_1106z00_1242;

							BgL__ortest_1106z00_1242 = BGL_CLASS_NIL(BgL_classz00_1241);
							if (CBOOL(BgL__ortest_1106z00_1242))
								{	/* Foreign/jtype.scm 38 */
									BgL_auxz00_1856 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_1242);
								}
							else
								{	/* Foreign/jtype.scm 38 */
									BgL_auxz00_1856 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_1241));
								}
						}
					}
					{
						obj_t BgL_auxz00_1850;

						{	/* Foreign/jtype.scm 38 */
							BgL_objectz00_bglt BgL_tmpz00_1851;

							BgL_tmpz00_1851 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1075z00_1177));
							BgL_auxz00_1850 = BGL_OBJECT_WIDENING(BgL_tmpz00_1851);
						}
						BgL_auxz00_1849 = ((BgL_jarrayz00_bglt) BgL_auxz00_1850);
					}
					((((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1849))->
							BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_auxz00_1856), BUNSPEC);
				}
				BgL_auxz00_1801 = ((BgL_typez00_bglt) BgL_new1075z00_1177);
				return ((obj_t) BgL_auxz00_1801);
			}
		}

	}



/* &lambda1247 */
	BgL_typez00_bglt BGl_z62lambda1247z62zzforeign_jtypez00(obj_t BgL_envz00_1178,
		obj_t BgL_o1072z00_1179)
	{
		{	/* Foreign/jtype.scm 38 */
			{	/* Foreign/jtype.scm 38 */
				BgL_jarrayz00_bglt BgL_wide1074z00_1244;

				BgL_wide1074z00_1244 =
					((BgL_jarrayz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jarrayz00_bgl))));
				{	/* Foreign/jtype.scm 38 */
					obj_t BgL_auxz00_1871;
					BgL_objectz00_bglt BgL_tmpz00_1867;

					BgL_auxz00_1871 = ((obj_t) BgL_wide1074z00_1244);
					BgL_tmpz00_1867 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1072z00_1179)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1867, BgL_auxz00_1871);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1072z00_1179)));
				{	/* Foreign/jtype.scm 38 */
					long BgL_arg1250z00_1245;

					{	/* Foreign/jtype.scm 38 */
						long BgL_res1702z00_1246;

						BgL_res1702z00_1246 =
							BGL_CLASS_INDEX(BGl_jarrayz00zzforeign_jtypez00);
						BgL_arg1250z00_1245 = BgL_res1702z00_1246;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1072z00_1179))), BgL_arg1250z00_1245);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1072z00_1179)));
			}
		}

	}



/* &lambda1244 */
	BgL_typez00_bglt BGl_z62lambda1244z62zzforeign_jtypez00(obj_t BgL_envz00_1180,
		obj_t BgL_id1056z00_1181, obj_t BgL_name1057z00_1182,
		obj_t BgL_siza7e1058za7_1183, obj_t BgL_class1059z00_1184,
		obj_t BgL_coercezd2to1060zd2_1185, obj_t BgL_parents1061z00_1186,
		obj_t BgL_initzf31062zf3_1187, obj_t BgL_magiczf31063zf3_1188,
		obj_t BgL_z421064z42_1189, obj_t BgL_alias1065z00_1190,
		obj_t BgL_pointedzd2tozd2by1066z00_1191, obj_t BgL_tvector1067z00_1192,
		obj_t BgL_location1068z00_1193, obj_t BgL_importzd2location1069zd2_1194,
		obj_t BgL_occurrence1070z00_1195, obj_t BgL_itemzd2type1071zd2_1196)
	{
		{	/* Foreign/jtype.scm 38 */
			{	/* Foreign/jtype.scm 38 */
				bool_t BgL_initzf31062zf3_1248;
				bool_t BgL_magiczf31063zf3_1249;
				int BgL_occurrence1070z00_1250;

				BgL_initzf31062zf3_1248 = CBOOL(BgL_initzf31062zf3_1187);
				BgL_magiczf31063zf3_1249 = CBOOL(BgL_magiczf31063zf3_1188);
				BgL_occurrence1070z00_1250 = CINT(BgL_occurrence1070z00_1195);
				{	/* Foreign/jtype.scm 38 */
					BgL_typez00_bglt BgL_new1098z00_1252;

					{	/* Foreign/jtype.scm 38 */
						BgL_typez00_bglt BgL_tmp1096z00_1253;
						BgL_jarrayz00_bglt BgL_wide1097z00_1254;

						{
							BgL_typez00_bglt BgL_auxz00_1888;

							{	/* Foreign/jtype.scm 38 */
								BgL_typez00_bglt BgL_new1095z00_1255;

								BgL_new1095z00_1255 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Foreign/jtype.scm 38 */
									long BgL_arg1246z00_1256;

									{	/* Foreign/jtype.scm 38 */
										long BgL_res1700z00_1257;

										BgL_res1700z00_1257 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1246z00_1256 = BgL_res1700z00_1257;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1095z00_1255),
										BgL_arg1246z00_1256);
								}
								{	/* Foreign/jtype.scm 38 */
									BgL_objectz00_bglt BgL_tmpz00_1893;

									BgL_tmpz00_1893 = ((BgL_objectz00_bglt) BgL_new1095z00_1255);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1893, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1095z00_1255);
								BgL_auxz00_1888 = BgL_new1095z00_1255;
							}
							BgL_tmp1096z00_1253 = ((BgL_typez00_bglt) BgL_auxz00_1888);
						}
						BgL_wide1097z00_1254 =
							((BgL_jarrayz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jarrayz00_bgl))));
						{	/* Foreign/jtype.scm 38 */
							obj_t BgL_auxz00_1901;
							BgL_objectz00_bglt BgL_tmpz00_1899;

							BgL_auxz00_1901 = ((obj_t) BgL_wide1097z00_1254);
							BgL_tmpz00_1899 = ((BgL_objectz00_bglt) BgL_tmp1096z00_1253);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1899, BgL_auxz00_1901);
						}
						((BgL_objectz00_bglt) BgL_tmp1096z00_1253);
						{	/* Foreign/jtype.scm 38 */
							long BgL_arg1245z00_1258;

							{	/* Foreign/jtype.scm 38 */
								long BgL_res1701z00_1259;

								BgL_res1701z00_1259 =
									BGL_CLASS_INDEX(BGl_jarrayz00zzforeign_jtypez00);
								BgL_arg1245z00_1258 = BgL_res1701z00_1259;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1096z00_1253),
								BgL_arg1245z00_1258);
						}
						BgL_new1098z00_1252 = ((BgL_typez00_bglt) BgL_tmp1096z00_1253);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1098z00_1252)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1056z00_1181)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_namez00) =
						((obj_t) BgL_name1057z00_1182), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1058za7_1183), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_classz00) =
						((obj_t) BgL_class1059z00_1184), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1060zd2_1185), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_parentsz00) =
						((obj_t) BgL_parents1061z00_1186), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31062zf3_1248), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31063zf3_1249), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_z42z42) =
						((obj_t) BgL_z421064z42_1189), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_aliasz00) =
						((obj_t) BgL_alias1065z00_1190), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1066z00_1191), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1067z00_1192), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_locationz00) =
						((obj_t) BgL_location1068z00_1193), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1069zd2_1194), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1098z00_1252)))->BgL_occurrencez00) =
						((int) BgL_occurrence1070z00_1250), BUNSPEC);
					{
						BgL_jarrayz00_bglt BgL_auxz00_1940;

						{
							obj_t BgL_auxz00_1941;

							{	/* Foreign/jtype.scm 38 */
								BgL_objectz00_bglt BgL_tmpz00_1942;

								BgL_tmpz00_1942 = ((BgL_objectz00_bglt) BgL_new1098z00_1252);
								BgL_auxz00_1941 = BGL_OBJECT_WIDENING(BgL_tmpz00_1942);
							}
							BgL_auxz00_1940 = ((BgL_jarrayz00_bglt) BgL_auxz00_1941);
						}
						((((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1940))->
								BgL_itemzd2typezd2) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BgL_itemzd2type1071zd2_1196)), BUNSPEC);
					}
					return BgL_new1098z00_1252;
				}
			}
		}

	}



/* &lambda1270 */
	obj_t BGl_z62lambda1270z62zzforeign_jtypez00(obj_t BgL_envz00_1197,
		obj_t BgL_oz00_1198, obj_t BgL_vz00_1199)
	{
		{	/* Foreign/jtype.scm 38 */
			{
				BgL_jarrayz00_bglt BgL_auxz00_1948;

				{
					obj_t BgL_auxz00_1949;

					{	/* Foreign/jtype.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_1950;

						BgL_tmpz00_1950 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_1198));
						BgL_auxz00_1949 = BGL_OBJECT_WIDENING(BgL_tmpz00_1950);
					}
					BgL_auxz00_1948 = ((BgL_jarrayz00_bglt) BgL_auxz00_1949);
				}
				return
					((((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1948))->
						BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_1199)), BUNSPEC);
			}
		}

	}



/* &lambda1269 */
	BgL_typez00_bglt BGl_z62lambda1269z62zzforeign_jtypez00(obj_t BgL_envz00_1200,
		obj_t BgL_oz00_1201)
	{
		{	/* Foreign/jtype.scm 38 */
			{
				BgL_jarrayz00_bglt BgL_auxz00_1957;

				{
					obj_t BgL_auxz00_1958;

					{	/* Foreign/jtype.scm 38 */
						BgL_objectz00_bglt BgL_tmpz00_1959;

						BgL_tmpz00_1959 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_1201));
						BgL_auxz00_1958 = BGL_OBJECT_WIDENING(BgL_tmpz00_1959);
					}
					BgL_auxz00_1957 = ((BgL_jarrayz00_bglt) BgL_auxz00_1958);
				}
				return
					(((BgL_jarrayz00_bglt) COBJECT(BgL_auxz00_1957))->BgL_itemzd2typezd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_makezd2ctypezd2accessesz12zd2envzc0zzforeign_accessz00,
				BGl_jarrayz00zzforeign_jtypez00, BGl_proc1737z00zzforeign_jtypez00,
				BGl_string1738z00zzforeign_jtypez00);
		}

	}



/* &make-ctype-accesses!1139 */
	obj_t BGl_z62makezd2ctypezd2accessesz121139z70zzforeign_jtypez00(obj_t
		BgL_envz00_1203, obj_t BgL_whatz00_1204, obj_t BgL_whoz00_1205,
		obj_t BgL_locz00_1206)
	{
		{	/* Foreign/jtype.scm 72 */
			{	/* Tools/trace.sch 53 */
				obj_t BgL_idz00_1265;

				BgL_idz00_1265 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_whatz00_1204))))->BgL_idz00);
				{	/* Tools/trace.sch 53 */
					obj_t BgL_oidz00_1266;

					BgL_oidz00_1266 =
						BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
								11)), BgL_idz00_1265);
					{	/* Tools/trace.sch 53 */
						obj_t BgL_tidz00_1267;

						BgL_tidz00_1267 =
							BGl_makezd2typedzd2formalz00zzast_identz00(BgL_idz00_1265);
						{	/* Tools/trace.sch 53 */
							obj_t BgL_idzd2ze3objz31_1268;

							{	/* Tools/trace.sch 53 */
								obj_t BgL_arg1627z00_1269;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1631z00_1270;
									obj_t BgL_arg1634z00_1271;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_res1706z00_1272;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1466z00_1273;

											BgL_arg1466z00_1273 = SYMBOL_TO_STRING(BgL_idz00_1265);
											BgL_res1706z00_1272 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1273);
										}
										BgL_arg1631z00_1270 = BgL_res1706z00_1272;
									}
									{	/* Tools/trace.sch 53 */
										obj_t BgL_res1707z00_1274;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_symbolz00_1275;

											BgL_symbolz00_1275 = CNST_TABLE_REF(((long) 12));
											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1466z00_1276;

												BgL_arg1466z00_1276 =
													SYMBOL_TO_STRING(BgL_symbolz00_1275);
												BgL_res1707z00_1274 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1276);
										}}
										BgL_arg1634z00_1271 = BgL_res1707z00_1274;
									}
									BgL_arg1627z00_1269 =
										string_append(BgL_arg1631z00_1270, BgL_arg1634z00_1271);
								}
								BgL_idzd2ze3objz31_1268 =
									bstring_to_symbol(BgL_arg1627z00_1269);
							}
							{	/* Tools/trace.sch 53 */
								obj_t BgL_objzd2ze3idz31_1277;

								{	/* Tools/trace.sch 53 */
									obj_t BgL_arg1613z00_1278;

									{	/* Tools/trace.sch 53 */
										obj_t BgL_arg1624z00_1279;
										obj_t BgL_arg1626z00_1280;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_res1709z00_1281;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_symbolz00_1282;

												BgL_symbolz00_1282 = CNST_TABLE_REF(((long) 0));
												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1466z00_1283;

													BgL_arg1466z00_1283 =
														SYMBOL_TO_STRING(BgL_symbolz00_1282);
													BgL_res1709z00_1281 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_1283);
											}}
											BgL_arg1624z00_1279 = BgL_res1709z00_1281;
										}
										{	/* Tools/trace.sch 53 */
											obj_t BgL_res1710z00_1284;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1466z00_1285;

												BgL_arg1466z00_1285 = SYMBOL_TO_STRING(BgL_idz00_1265);
												BgL_res1710z00_1284 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1285);
											}
											BgL_arg1626z00_1280 = BgL_res1710z00_1284;
										}
										BgL_arg1613z00_1278 =
											string_append(BgL_arg1624z00_1279, BgL_arg1626z00_1280);
									}
									BgL_objzd2ze3idz31_1277 =
										bstring_to_symbol(BgL_arg1613z00_1278);
								}
								{	/* Tools/trace.sch 53 */
									obj_t BgL_tobjzd2ze3idz31_1286;

									BgL_tobjzd2ze3idz31_1286 =
										BGl_makezd2typedzd2identz00zzast_identz00
										(BgL_objzd2ze3idz31_1277, BgL_idz00_1265);
									{	/* Tools/trace.sch 53 */
										obj_t BgL_idzf3zf3_1287;

										{	/* Tools/trace.sch 53 */
											obj_t BgL_arg1606z00_1288;

											{	/* Tools/trace.sch 53 */
												obj_t BgL_arg1611z00_1289;
												obj_t BgL_arg1612z00_1290;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1712z00_1291;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1466z00_1292;

														BgL_arg1466z00_1292 =
															SYMBOL_TO_STRING(BgL_idz00_1265);
														BgL_res1712z00_1291 =
															BGl_stringzd2copyzd2zz__r4_strings_6_7z00
															(BgL_arg1466z00_1292);
													}
													BgL_arg1611z00_1289 = BgL_res1712z00_1291;
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_res1713z00_1293;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_symbolz00_1294;

														BgL_symbolz00_1294 = CNST_TABLE_REF(((long) 5));
														{	/* Tools/trace.sch 53 */
															obj_t BgL_arg1466z00_1295;

															BgL_arg1466z00_1295 =
																SYMBOL_TO_STRING(BgL_symbolz00_1294);
															BgL_res1713z00_1293 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1295);
													}}
													BgL_arg1612z00_1290 = BgL_res1713z00_1293;
												}
												BgL_arg1606z00_1288 =
													string_append(BgL_arg1611z00_1289,
													BgL_arg1612z00_1290);
											}
											BgL_idzf3zf3_1287 =
												bstring_to_symbol(BgL_arg1606z00_1288);
										}
										{	/* Tools/trace.sch 53 */
											obj_t BgL_tidzf3zf3_1296;

											BgL_tidzf3zf3_1296 =
												BGl_makezd2typedzd2identz00zzast_identz00
												(BgL_idzf3zf3_1287, CNST_TABLE_REF(((long) 13)));
											{	/* Tools/trace.sch 53 */
												obj_t BgL_idzd2lengthzd2_1297;

												{	/* Tools/trace.sch 53 */
													obj_t BgL_arg1599z00_1298;

													{	/* Tools/trace.sch 53 */
														obj_t BgL_arg1604z00_1299;
														obj_t BgL_arg1605z00_1300;

														{	/* Tools/trace.sch 53 */
															obj_t BgL_res1715z00_1301;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_arg1466z00_1302;

																BgL_arg1466z00_1302 =
																	SYMBOL_TO_STRING(BgL_idz00_1265);
																BgL_res1715z00_1301 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_1302);
															}
															BgL_arg1604z00_1299 = BgL_res1715z00_1301;
														}
														{	/* Tools/trace.sch 53 */
															obj_t BgL_res1716z00_1303;

															{	/* Tools/trace.sch 53 */
																obj_t BgL_symbolz00_1304;

																BgL_symbolz00_1304 =
																	CNST_TABLE_REF(((long) 14));
																{	/* Tools/trace.sch 53 */
																	obj_t BgL_arg1466z00_1305;

																	BgL_arg1466z00_1305 =
																		SYMBOL_TO_STRING(BgL_symbolz00_1304);
																	BgL_res1716z00_1303 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_1305);
															}}
															BgL_arg1605z00_1300 = BgL_res1716z00_1303;
														}
														BgL_arg1599z00_1298 =
															string_append(BgL_arg1604z00_1299,
															BgL_arg1605z00_1300);
													}
													BgL_idzd2lengthzd2_1297 =
														bstring_to_symbol(BgL_arg1599z00_1298);
												}
												{	/* Tools/trace.sch 53 */
													obj_t BgL_tidzd2lengthzd2_1306;

													BgL_tidzd2lengthzd2_1306 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_idzd2lengthzd2_1297,
														CNST_TABLE_REF(((long) 15)));
													{	/* Tools/trace.sch 53 */
														BgL_typez00_bglt BgL_itemzd2typezd2_1307;

														{
															BgL_jarrayz00_bglt BgL_auxz00_2005;

															{
																obj_t BgL_auxz00_2006;

																{	/* Tools/trace.sch 53 */
																	BgL_objectz00_bglt BgL_tmpz00_2007;

																	BgL_tmpz00_2007 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_whatz00_1204));
																	BgL_auxz00_2006 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2007);
																}
																BgL_auxz00_2005 =
																	((BgL_jarrayz00_bglt) BgL_auxz00_2006);
															}
															BgL_itemzd2typezd2_1307 =
																(((BgL_jarrayz00_bglt)
																	COBJECT(BgL_auxz00_2005))->
																BgL_itemzd2typezd2);
														}
														{	/* Tools/trace.sch 53 */
															obj_t BgL_itemzd2typezd2idz00_1308;

															BgL_itemzd2typezd2idz00_1308 =
																(((BgL_typez00_bglt)
																	COBJECT(BgL_itemzd2typezd2_1307))->BgL_idz00);
															{	/* Tools/trace.sch 53 */
																obj_t BgL_fitemzd2typezd2idz00_1309;

																BgL_fitemzd2typezd2idz00_1309 =
																	BGl_makezd2typedzd2formalz00zzast_identz00
																	(BgL_itemzd2typezd2idz00_1308);
																{	/* Tools/trace.sch 53 */
																	obj_t BgL_oitemzd2typezd2idz00_1310;

																	BgL_oitemzd2typezd2idz00_1310 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(CNST_TABLE_REF(((long) 16)),
																		BgL_itemzd2typezd2idz00_1308);
																	{	/* Tools/trace.sch 53 */
																		obj_t BgL_makezd2idzd2_1311;

																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_arg1592z00_1312;

																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_arg1593z00_1313;
																				obj_t BgL_arg1597z00_1314;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1718z00_1315;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_symbolz00_1316;

																						BgL_symbolz00_1316 =
																							CNST_TABLE_REF(((long) 17));
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1466z00_1317;

																							BgL_arg1466z00_1317 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_1316);
																							BgL_res1718z00_1315 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_1317);
																					}}
																					BgL_arg1593z00_1313 =
																						BgL_res1718z00_1315;
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_res1719z00_1318;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1466z00_1319;

																						BgL_arg1466z00_1319 =
																							SYMBOL_TO_STRING(BgL_idz00_1265);
																						BgL_res1719z00_1318 =
																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																							(BgL_arg1466z00_1319);
																					}
																					BgL_arg1597z00_1314 =
																						BgL_res1719z00_1318;
																				}
																				BgL_arg1592z00_1312 =
																					string_append(BgL_arg1593z00_1313,
																					BgL_arg1597z00_1314);
																			}
																			BgL_makezd2idzd2_1311 =
																				bstring_to_symbol(BgL_arg1592z00_1312);
																		}
																		{	/* Tools/trace.sch 53 */
																			obj_t BgL_tmakezd2idzd2_1320;

																			BgL_tmakezd2idzd2_1320 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(BgL_makezd2idzd2_1311, BgL_idz00_1265);
																			{	/* Tools/trace.sch 53 */
																				obj_t BgL_idzd2refzd2_1321;

																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_arg1584z00_1322;

																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_arg1588z00_1323;
																						obj_t BgL_arg1589z00_1324;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_res1721z00_1325;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1466z00_1326;

																								BgL_arg1466z00_1326 =
																									SYMBOL_TO_STRING
																									(BgL_idz00_1265);
																								BgL_res1721z00_1325 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_1326);
																							}
																							BgL_arg1588z00_1323 =
																								BgL_res1721z00_1325;
																						}
																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_res1722z00_1327;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_symbolz00_1328;

																								BgL_symbolz00_1328 =
																									CNST_TABLE_REF(((long) 18));
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1466z00_1329;

																									BgL_arg1466z00_1329 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_1328);
																									BgL_res1722z00_1327 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_1329);
																							}}
																							BgL_arg1589z00_1324 =
																								BgL_res1722z00_1327;
																						}
																						BgL_arg1584z00_1322 =
																							string_append(BgL_arg1588z00_1323,
																							BgL_arg1589z00_1324);
																					}
																					BgL_idzd2refzd2_1321 =
																						bstring_to_symbol
																						(BgL_arg1584z00_1322);
																				}
																				{	/* Tools/trace.sch 53 */
																					obj_t BgL_tidzd2refzd2_1330;

																					BgL_tidzd2refzd2_1330 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(BgL_idzd2refzd2_1321,
																						BgL_itemzd2typezd2idz00_1308);
																					{	/* Tools/trace.sch 53 */
																						obj_t BgL_idzd2setz12zc0_1331;

																						{	/* Tools/trace.sch 53 */
																							obj_t BgL_arg1575z00_1332;

																							{	/* Tools/trace.sch 53 */
																								obj_t BgL_arg1578z00_1333;
																								obj_t BgL_arg1582z00_1334;

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_res1724z00_1335;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1466z00_1336;

																										BgL_arg1466z00_1336 =
																											SYMBOL_TO_STRING
																											(BgL_idz00_1265);
																										BgL_res1724z00_1335 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg1466z00_1336);
																									}
																									BgL_arg1578z00_1333 =
																										BgL_res1724z00_1335;
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_res1725z00_1337;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_symbolz00_1338;

																										BgL_symbolz00_1338 =
																											CNST_TABLE_REF(((long)
																												19));
																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1466z00_1339;

																											BgL_arg1466z00_1339 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_1338);
																											BgL_res1725z00_1337 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1466z00_1339);
																									}}
																									BgL_arg1582z00_1334 =
																										BgL_res1725z00_1337;
																								}
																								BgL_arg1575z00_1332 =
																									string_append
																									(BgL_arg1578z00_1333,
																									BgL_arg1582z00_1334);
																							}
																							BgL_idzd2setz12zc0_1331 =
																								bstring_to_symbol
																								(BgL_arg1575z00_1332);
																						}
																						{	/* Tools/trace.sch 53 */

																							{

																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_list1271z00_1409;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1273z00_1410;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1274z00_1411;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1275z00_1412;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1276z00_1413;
																													BgL_arg1276z00_1413 =
																														MAKE_YOUNG_PAIR
																														(BgL_idzd2setz12zc0_1331,
																														BNIL);
																													BgL_arg1275z00_1412 =
																														MAKE_YOUNG_PAIR
																														(BgL_idzd2refzd2_1321,
																														BgL_arg1276z00_1413);
																												}
																												BgL_arg1274z00_1411 =
																													MAKE_YOUNG_PAIR
																													(BgL_makezd2idzd2_1311,
																													BgL_arg1275z00_1412);
																											}
																											BgL_arg1273z00_1410 =
																												MAKE_YOUNG_PAIR
																												(BgL_idzd2lengthzd2_1297,
																												BgL_arg1274z00_1411);
																										}
																										BgL_list1271z00_1409 =
																											MAKE_YOUNG_PAIR
																											(BgL_idzf3zf3_1287,
																											BgL_arg1273z00_1410);
																									}
																									BGl_registerzd2foreignzd2accesszd2identsz12zc0zzforeign_libraryz00
																										(BgL_list1271z00_1409);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1277z00_1414;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1280z00_1415;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1281z00_1416;
																											obj_t BgL_arg1282z00_1417;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1284z00_1418;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1285z00_1419;
																													BgL_arg1285z00_1419 =
																														MAKE_YOUNG_PAIR
																														(BgL_tidz00_1267,
																														BNIL);
																													BgL_arg1284z00_1418 =
																														MAKE_YOUNG_PAIR
																														(BgL_idzd2ze3objz31_1268,
																														BgL_arg1285z00_1419);
																												}
																												BgL_arg1281z00_1416 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 33)),
																													BgL_arg1284z00_1418);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1286z00_1420;
																												obj_t
																													BgL_arg1287z00_1421;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1288z00_1422;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1289z00_1423;
																														BgL_arg1289z00_1423
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 34)),
																															BNIL);
																														BgL_arg1288z00_1422
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_tobjzd2ze3idz31_1286,
																															BgL_arg1289z00_1423);
																													}
																													BgL_arg1286z00_1420 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 33)),
																														BgL_arg1288z00_1422);
																												}
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1290z00_1424;
																													obj_t
																														BgL_arg1291z00_1425;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1292z00_1426;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1295z00_1427;
																															BgL_arg1295z00_1427
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 34)),
																																BNIL);
																															BgL_arg1292z00_1426
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_tidzf3zf3_1296,
																																BgL_arg1295z00_1427);
																														}
																														BgL_arg1290z00_1424
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 33)),
																															BgL_arg1292z00_1426);
																													}
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1296z00_1428;
																														obj_t
																															BgL_arg1297z00_1429;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1298z00_1430;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1299z00_1431;
																																BgL_arg1299z00_1431
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_tidz00_1267,
																																	BNIL);
																																BgL_arg1298z00_1430
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_tidzd2lengthzd2_1306,
																																	BgL_arg1299z00_1431);
																															}
																															BgL_arg1296z00_1428
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 33)),
																																BgL_arg1298z00_1430);
																														}
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1300z00_1432;
																															obj_t
																																BgL_arg1301z00_1433;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1303z00_1434;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1304z00_1435;
																																	BgL_arg1304z00_1435
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				35)),
																																		BNIL);
																																	BgL_arg1303z00_1434
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_tmakezd2idzd2_1320,
																																		BgL_arg1304z00_1435);
																																}
																																BgL_arg1300z00_1432
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 33)),
																																	BgL_arg1303z00_1434);
																															}
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1306z00_1436;
																																obj_t
																																	BgL_arg1307z00_1437;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1308z00_1438;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_arg1309z00_1439;
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_arg1310z00_1440;
																																			BgL_arg1310z00_1440
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						35)),
																																				BNIL);
																																			BgL_arg1309z00_1439
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_tidz00_1267,
																																				BgL_arg1310z00_1440);
																																		}
																																		BgL_arg1308z00_1438
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_tidzd2refzd2_1330,
																																			BgL_arg1309z00_1439);
																																	}
																																	BgL_arg1306z00_1436
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				33)),
																																		BgL_arg1308z00_1438);
																																}
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1311z00_1441;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_arg1312z00_1442;
																																		{	/* Tools/trace.sch 53 */
																																			obj_t
																																				BgL_arg1314z00_1443;
																																			{	/* Tools/trace.sch 53 */
																																				obj_t
																																					BgL_arg1315z00_1444;
																																				{	/* Tools/trace.sch 53 */
																																					obj_t
																																						BgL_arg1316z00_1445;
																																					BgL_arg1316z00_1445
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_fitemzd2typezd2idz00_1309,
																																						BNIL);
																																					BgL_arg1315z00_1444
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 35)), BgL_arg1316z00_1445);
																																				}
																																				BgL_arg1314z00_1443
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_tidz00_1267,
																																					BgL_arg1315z00_1444);
																																			}
																																			BgL_arg1312z00_1442
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_idzd2setz12zc0_1331,
																																				BgL_arg1314z00_1443);
																																		}
																																		BgL_arg1311z00_1441
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					33)),
																																			BgL_arg1312z00_1442);
																																	}
																																	BgL_arg1307z00_1437
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1311z00_1441,
																																		BNIL);
																																}
																																BgL_arg1301z00_1433
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1306z00_1436,
																																	BgL_arg1307z00_1437);
																															}
																															BgL_arg1297z00_1429
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1300z00_1432,
																																BgL_arg1301z00_1433);
																														}
																														BgL_arg1291z00_1425
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1296z00_1428,
																															BgL_arg1297z00_1429);
																													}
																													BgL_arg1287z00_1421 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1290z00_1424,
																														BgL_arg1291z00_1425);
																												}
																												BgL_arg1282z00_1417 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1286z00_1420,
																													BgL_arg1287z00_1421);
																											}
																											BgL_arg1280z00_1415 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1281z00_1416,
																												BgL_arg1282z00_1417);
																										}
																										BgL_arg1277z00_1414 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													36)),
																											BgL_arg1280z00_1415);
																									}
																									BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
																										(BgL_arg1277z00_1414);
																								}
																								{	/* Tools/trace.sch 53 */
																									obj_t BgL_arg1317z00_1446;
																									obj_t BgL_arg1319z00_1447;
																									obj_t BgL_arg1322z00_1448;
																									obj_t BgL_arg1324z00_1449;
																									obj_t BgL_arg1325z00_1450;
																									obj_t BgL_arg1326z00_1451;
																									obj_t BgL_arg1327z00_1452;

																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1339z00_1403;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1340z00_1404;
																											obj_t BgL_arg1344z00_1405;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1345z00_1406;
																												BgL_arg1345z00_1406 =
																													MAKE_YOUNG_PAIR
																													(BgL_oidz00_1266,
																													BNIL);
																												BgL_arg1340z00_1404 =
																													MAKE_YOUNG_PAIR
																													(BgL_idzd2ze3objz31_1268,
																													BgL_arg1345z00_1406);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1346z00_1407;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1347z00_1408;
																													BgL_list1347z00_1408 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BNIL);
																													BgL_arg1346z00_1407 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 31)),
																														CNST_TABLE_REF((
																																(long) 32)),
																														BgL_list1347z00_1408);
																												}
																												BgL_arg1344z00_1405 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1346z00_1407,
																													BNIL);
																											}
																											BgL_arg1339z00_1403 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1340z00_1404,
																												BgL_arg1344z00_1405);
																										}
																										BgL_arg1317z00_1446 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1339z00_1403);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1351z00_1397;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1352z00_1398;
																											obj_t BgL_arg1357z00_1399;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1360z00_1400;
																												BgL_arg1360z00_1400 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 11)),
																													BNIL);
																												BgL_arg1352z00_1398 =
																													MAKE_YOUNG_PAIR
																													(BgL_tobjzd2ze3idz31_1286,
																													BgL_arg1360z00_1400);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1361z00_1401;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1362z00_1402;
																													BgL_list1362z00_1402 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BNIL);
																													BgL_arg1361z00_1401 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 31)),
																														BgL_idz00_1265,
																														BgL_list1362z00_1402);
																												}
																												BgL_arg1357z00_1399 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1361z00_1401,
																													BNIL);
																											}
																											BgL_arg1351z00_1397 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1352z00_1398,
																												BgL_arg1357z00_1399);
																										}
																										BgL_arg1319z00_1447 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1351z00_1397);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1364z00_1391;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1367z00_1392;
																											obj_t BgL_arg1370z00_1393;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1371z00_1394;
																												BgL_arg1371z00_1394 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 29)),
																													BNIL);
																												BgL_arg1367z00_1392 =
																													MAKE_YOUNG_PAIR
																													(BgL_tidzf3zf3_1296,
																													BgL_arg1371z00_1394);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1372z00_1395;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1373z00_1396;
																													BgL_list1373z00_1396 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BNIL);
																													BgL_arg1372z00_1395 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 30)),
																														BgL_idz00_1265,
																														BgL_list1373z00_1396);
																												}
																												BgL_arg1370z00_1393 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1372z00_1395,
																													BNIL);
																											}
																											BgL_arg1364z00_1391 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1367z00_1392,
																												BgL_arg1370z00_1393);
																										}
																										BgL_arg1322z00_1448 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1364z00_1391);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1381z00_1382;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1382z00_1383;
																											obj_t BgL_arg1383z00_1384;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1384z00_1385;
																												BgL_arg1384z00_1385 =
																													MAKE_YOUNG_PAIR
																													(BgL_oidz00_1266,
																													BNIL);
																												BgL_arg1382z00_1383 =
																													MAKE_YOUNG_PAIR
																													(BgL_tidzd2lengthzd2_1306,
																													BgL_arg1384z00_1385);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1385z00_1386;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1386z00_1387;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1387z00_1388;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1388z00_1389;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1394z00_1390;
																																BgL_arg1394z00_1390
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 11)),
																																	BNIL);
																																BgL_arg1388z00_1389
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1739z00zzforeign_jtypez00,
																																	BgL_arg1394z00_1390);
																															}
																															BgL_arg1387z00_1388
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 15)),
																																BgL_arg1388z00_1389);
																														}
																														BgL_list1386z00_1387
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_itemzd2typezd2idz00_1308,
																															BgL_arg1387z00_1388);
																													}
																													BgL_arg1385z00_1386 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 28)),
																														BgL_idz00_1265,
																														BgL_list1386z00_1387);
																												}
																												BgL_arg1383z00_1384 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1385z00_1386,
																													BNIL);
																											}
																											BgL_arg1381z00_1382 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1382z00_1383,
																												BgL_arg1383z00_1384);
																										}
																										BgL_arg1324z00_1449 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1381z00_1382);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1396z00_1371;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1417z00_1372;
																											obj_t BgL_arg1418z00_1373;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1421z00_1374;
																												BgL_arg1421z00_1374 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 25)),
																													BNIL);
																												BgL_arg1417z00_1372 =
																													MAKE_YOUNG_PAIR
																													(BgL_tmakezd2idzd2_1320,
																													BgL_arg1421z00_1374);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1422z00_1375;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1423z00_1376;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1441z00_1377;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1442z00_1378;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1448z00_1379;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1449z00_1380;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_arg1461z00_1381;
																																		BgL_arg1461z00_1381
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					26)),
																																			BNIL);
																																		BgL_arg1449z00_1380
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BFALSE,
																																			BgL_arg1461z00_1381);
																																	}
																																	BgL_arg1448z00_1379
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1739z00zzforeign_jtypez00,
																																		BgL_arg1449z00_1380);
																																}
																																BgL_arg1442z00_1378
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1739z00zzforeign_jtypez00,
																																	BgL_arg1448z00_1379);
																															}
																															BgL_arg1441z00_1377
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 15)),
																																BgL_arg1442z00_1378);
																														}
																														BgL_list1423z00_1376
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_itemzd2typezd2idz00_1308,
																															BgL_arg1441z00_1377);
																													}
																													BgL_arg1422z00_1375 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 27)),
																														BgL_idz00_1265,
																														BgL_list1423z00_1376);
																												}
																												BgL_arg1418z00_1373 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1422z00_1375,
																													BNIL);
																											}
																											BgL_arg1396z00_1371 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1417z00_1372,
																												BgL_arg1418z00_1373);
																										}
																										BgL_arg1325z00_1450 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1396z00_1371);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1464z00_1360;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1465z00_1361;
																											obj_t BgL_arg1474z00_1362;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1476z00_1363;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1477z00_1364;
																													BgL_arg1477z00_1364 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 20)),
																														BNIL);
																													BgL_arg1476z00_1363 =
																														MAKE_YOUNG_PAIR
																														(BgL_oidz00_1266,
																														BgL_arg1477z00_1364);
																												}
																												BgL_arg1465z00_1361 =
																													MAKE_YOUNG_PAIR
																													(BgL_tidzd2refzd2_1330,
																													BgL_arg1476z00_1363);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1489z00_1365;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1490z00_1366;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1493z00_1367;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1495z00_1368;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1497z00_1369;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1518z00_1370;
																																	BgL_arg1518z00_1370
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				21)),
																																		BNIL);
																																	BgL_arg1497z00_1369
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				11)),
																																		BgL_arg1518z00_1370);
																																}
																																BgL_arg1495z00_1368
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1739z00zzforeign_jtypez00,
																																	BgL_arg1497z00_1369);
																															}
																															BgL_arg1493z00_1367
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 15)),
																																BgL_arg1495z00_1368);
																														}
																														BgL_list1490z00_1366
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_itemzd2typezd2idz00_1308,
																															BgL_arg1493z00_1367);
																													}
																													BgL_arg1489z00_1365 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 24)),
																														BgL_idz00_1265,
																														BgL_list1490z00_1366);
																												}
																												BgL_arg1474z00_1362 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1489z00_1365,
																													BNIL);
																											}
																											BgL_arg1464z00_1360 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1465z00_1361,
																												BgL_arg1474z00_1362);
																										}
																										BgL_arg1326z00_1451 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1464z00_1360);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_arg1521z00_1347;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1528z00_1348;
																											obj_t BgL_arg1536z00_1349;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1537z00_1350;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1540z00_1351;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1552z00_1352;
																														BgL_arg1552z00_1352
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_oitemzd2typezd2idz00_1310,
																															BNIL);
																														BgL_arg1540z00_1351
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 20)),
																															BgL_arg1552z00_1352);
																													}
																													BgL_arg1537z00_1350 =
																														MAKE_YOUNG_PAIR
																														(BgL_oidz00_1266,
																														BgL_arg1540z00_1351);
																												}
																												BgL_arg1528z00_1348 =
																													MAKE_YOUNG_PAIR
																													(BgL_idzd2setz12zc0_1331,
																													BgL_arg1537z00_1350);
																											}
																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1553z00_1353;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_list1554z00_1354;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1558z00_1355;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1561z00_1356;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1564z00_1357;
																																{	/* Tools/trace.sch 53 */
																																	obj_t
																																		BgL_arg1565z00_1358;
																																	{	/* Tools/trace.sch 53 */
																																		obj_t
																																			BgL_arg1573z00_1359;
																																		BgL_arg1573z00_1359
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					16)),
																																			BNIL);
																																		BgL_arg1565z00_1358
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					21)),
																																			BgL_arg1573z00_1359);
																																	}
																																	BgL_arg1564z00_1357
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				11)),
																																		BgL_arg1565z00_1358);
																																}
																																BgL_arg1561z00_1356
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1739z00zzforeign_jtypez00,
																																	BgL_arg1564z00_1357);
																															}
																															BgL_arg1558z00_1355
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 15)),
																																BgL_arg1561z00_1356);
																														}
																														BgL_list1554z00_1354
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_itemzd2typezd2idz00_1308,
																															BgL_arg1558z00_1355);
																													}
																													BgL_arg1553z00_1353 =
																														BGl_makezd2privatezd2sexpz00zzast_privatez00
																														(CNST_TABLE_REF((
																																(long) 22)),
																														BgL_idz00_1265,
																														BgL_list1554z00_1354);
																												}
																												BgL_arg1536z00_1349 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1553z00_1353,
																													BNIL);
																											}
																											BgL_arg1521z00_1347 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1528z00_1348,
																												BgL_arg1536z00_1349);
																										}
																										BgL_arg1327z00_1452 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													23)),
																											BgL_arg1521z00_1347);
																									}
																									{	/* Tools/trace.sch 53 */
																										obj_t BgL_list1328z00_1453;

																										{	/* Tools/trace.sch 53 */
																											obj_t BgL_arg1329z00_1454;

																											{	/* Tools/trace.sch 53 */
																												obj_t
																													BgL_arg1330z00_1455;
																												{	/* Tools/trace.sch 53 */
																													obj_t
																														BgL_arg1331z00_1456;
																													{	/* Tools/trace.sch 53 */
																														obj_t
																															BgL_arg1334z00_1457;
																														{	/* Tools/trace.sch 53 */
																															obj_t
																																BgL_arg1335z00_1458;
																															{	/* Tools/trace.sch 53 */
																																obj_t
																																	BgL_arg1337z00_1459;
																																BgL_arg1337z00_1459
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1327z00_1452,
																																	BNIL);
																																BgL_arg1335z00_1458
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1326z00_1451,
																																	BgL_arg1337z00_1459);
																															}
																															BgL_arg1334z00_1457
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1325z00_1450,
																																BgL_arg1335z00_1458);
																														}
																														BgL_arg1331z00_1456
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1324z00_1449,
																															BgL_arg1334z00_1457);
																													}
																													BgL_arg1330z00_1455 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1322z00_1448,
																														BgL_arg1331z00_1456);
																												}
																												BgL_arg1329z00_1454 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1319z00_1447,
																													BgL_arg1330z00_1455);
																											}
																											BgL_list1328z00_1453 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1317z00_1446,
																												BgL_arg1329z00_1454);
																										}
																										return BgL_list1328z00_1453;
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

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzforeign_jtypez00()
	{
		{	/* Foreign/jtype.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
			return
				BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1740z00zzforeign_jtypez00));
		}

	}

#ifdef __cplusplus
}
#endif
