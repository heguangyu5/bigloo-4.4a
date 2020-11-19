/*===========================================================================*/
/*   (Tvector/tvector.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tvector/tvector.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;


	static BgL_typez00_bglt BGl_z62tveczd2nilzb0zztvector_tvectorz00(obj_t);
	static obj_t BGl_z62emitzd2tvectorzd2typesz62zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62tveczd2namezb0zztvector_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2coercezd2tozd2setz12zc0zztvector_tvectorz00(BgL_typez00_bglt,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t
		BGl_z62tveczd2importzd2locationzd2setz12za2zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2namezd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2idzd2zztvector_tvectorz00(BgL_typez00_bglt);
	static obj_t BGl_objectzd2initzd2zztvector_tvectorz00();
	BGL_EXPORTED_DECL bool_t
		BGl_tveczd2magiczf3z21zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_tveczd2nilzd2zztvector_tvectorz00();
	static obj_t BGl_methodzd2initzd2zztvector_tvectorz00();
	static obj_t BGl_z62tveczd2coercezd2toz62zztvector_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2parentszd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2tvectorzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2aliaszd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31180ze3ze5zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62tveczd2siza7ez17zztvector_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t);
	static obj_t BGl_z62addzd2tvectorzd2typez12z70zztvector_tvectorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2parentszd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_tveczf3zf3zztvector_tvectorz00(obj_t);
	static BgL_typez00_bglt BGl_z62lambda1209z62zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62tveczd2pointedzd2tozd2byzb0zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_z62tveczd2magiczf3z43zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1210z62zztvector_tvectorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62tveczd2initzf3zd2setz12z83zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2siza7ez75zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2classzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_tveczd2itemzd2typez00zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2namezd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztvector_tvectorz00();
	BGL_IMPORT obj_t bigloo_mangle(obj_t);
	static BgL_typez00_bglt BGl_z62makezd2tveczb0zztvector_tvectorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62tveczd2magiczf3zd2setz12z83zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_tveczd2occurrencezd2zztvector_tvectorz00(BgL_typez00_bglt);
	extern BgL_typez00_bglt BGl_usezd2typez12zc0zztype_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2tveczd2zztvector_tvectorz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		BgL_typez00_bglt);
	static obj_t BGl_z62tveczd2parentszb0zztvector_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2tvectorzd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2pointedzd2tozd2byzd2zztvector_tvectorz00(BgL_typez00_bglt);
	static obj_t BGl_z62tveczd2z42zf2zztvector_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2pointedzd2tozd2byzd2setz12z12zztvector_tvectorz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztvector_tvectorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_typez00_bglt);
	static obj_t BGl_z62tveczd2locationzd2setz12z70zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern BgL_typez00_bglt BGl_declarezd2subtypez12zc0zztype_envz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztvector_tvectorz00();
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2siza7ezd2setz12zb5zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zztvector_tvectorz00();
	static obj_t BGl_makezd2coercionzd2clausez00zztvector_tvectorz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_tveczd2initzf3z21zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2importzd2locationzd2setz12zc0zztvector_tvectorz00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2locationzd2zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62tveczd2initzf3z43zztvector_tvectorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tveczd2tvectorzb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62tveczd2aliaszd2setz12z70zztvector_tvectorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2aliaszd2zztvector_tvectorz00(BgL_typez00_bglt);
	static BgL_typez00_bglt
		BGl_z62tveczd2itemzd2typez62zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62tveczd2namezd2setz12z70zztvector_tvectorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tveczd2aliaszb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t
		BGl_z62tveczd2pointedzd2tozd2byzd2setz12z70zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2locationzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2coercezd2toz00zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2initzf3zd2setz12ze1zztvector_tvectorz00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_z62tveczd2occurrencezd2setz12z70zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tveczd2classzd2setz12z70zztvector_tvectorz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2occurrencezd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt,
		int);
	static obj_t BGl_z62tveczf3z91zztvector_tvectorz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2z42zd2setz12z50zztvector_tvectorz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2magiczf3zd2setz12ze1zztvector_tvectorz00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2z42z90zztvector_tvectorz00(BgL_typez00_bglt);
	static obj_t BGl_z62tveczd2importzd2locationz62zztvector_tvectorz00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1175z62zztvector_tvectorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1178z62zztvector_tvectorz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1181z62zztvector_tvectorz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zztvector_tvectorz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00();
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2importzd2locationz00zztvector_tvectorz00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_tvecz00zztvector_tvectorz00 = BUNSPEC;
	static obj_t BGl_z62tveczd2idzb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztvector_tvectorz00();
	static obj_t BGl_z62tveczd2parentszd2setz12z70zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tveczd2tvectorzd2setz12z70zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tveczd2classzd2zztvector_tvectorz00(BgL_typez00_bglt);
	static BgL_typez00_bglt
		BGl_z62declarezd2tvectorzd2typez12z70zztvector_tvectorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tveczd2coercezd2tozd2setz12za2zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	static obj_t BGl_z62tveczd2occurrencezb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62tveczd2classzb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62tveczd2locationzb0zztvector_tvectorz00(obj_t, obj_t);
	static obj_t BGl_z62tveczd2z42zd2setz12z32zztvector_tvectorz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62tveczd2siza7ezd2setz12zd7zztvector_tvectorz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[9];


	   
		 
		DEFINE_STRING(BGl_string1231z00zztvector_tvectorz00,
		BgL_bgl_string1231za700za7za7t1252za7, "/* Tvector type definitions */",
		30);
	      DEFINE_STRING(BGl_string1232z00zztvector_tvectorz00,
		BgL_bgl_string1232za700za7za7t1253za7, "struct bgl_tvector_of_", 22);
	      DEFINE_STRING(BGl_string1233z00zztvector_tvectorz00,
		BgL_bgl_string1233za700za7za7t1254za7, " {", 2);
	      DEFINE_STRING(BGl_string1234z00zztvector_tvectorz00,
		BgL_bgl_string1234za700za7za7t1255za7, "   header_t header;", 19);
	      DEFINE_STRING(BGl_string1235z00zztvector_tvectorz00,
		BgL_bgl_string1235za700za7za7t1256za7, "   long     length;", 19);
	      DEFINE_STRING(BGl_string1236z00zztvector_tvectorz00,
		BgL_bgl_string1236za700za7za7t1257za7, "   obj_t    descr;", 18);
	      DEFINE_STRING(BGl_string1237z00zztvector_tvectorz00,
		BgL_bgl_string1237za700za7za7t1258za7, "   ", 3);
	      DEFINE_STRING(BGl_string1238z00zztvector_tvectorz00,
		BgL_bgl_string1238za700za7za7t1259za7, " el0;", 5);
	      DEFINE_STRING(BGl_string1239z00zztvector_tvectorz00,
		BgL_bgl_string1239za700za7za7t1260za7, "};\n", 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2initzf3zd2setz12zd2envz33zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2initza7f1261za7,
		BGl_z62tveczd2initzf3zd2setz12z83zztvector_tvectorz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1246z00zztvector_tvectorz00,
		BgL_bgl_string1246za700za7za7t1262za7, "tvector_tvector", 15);
	      DEFINE_STRING(BGl_string1247z00zztvector_tvectorz00,
		BgL_bgl_string1247za700za7za7t1263za7,
		"_ tvector_tvector tvec item-type type coerce tvector bigloo obj ", 64);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_emitzd2tvectorzd2typeszd2envzd2zztvector_tvectorz00,
		BgL_bgl_za762emitza7d2tvecto1264z00,
		BGl_z62emitzd2tvectorzd2typesz62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2parentszd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2parent1265z00,
		BGl_z62tveczd2parentszd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2z42zd2setz12zd2envz82zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2za742za7d21266z00,
		BGl_z62tveczd2z42zd2setz12z32zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2coercezd2tozd2setz12zd2envz12zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2coerce1267z00,
		BGl_z62tveczd2coercezd2tozd2setz12za2zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2initzf3zd2envzf3zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2initza7f1268za7,
		BGl_z62tveczd2initzf3z43zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2pointedzd2tozd2byzd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2pointe1269z00,
		BGl_z62tveczd2pointedzd2tozd2byzd2setz12z70zztvector_tvectorz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2coercezd2tozd2envzd2zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2coerce1270z00,
		BGl_z62tveczd2coercezd2toz62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2siza7ezd2setz12zd2envz67zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2siza7a7e1271za7,
		BGl_z62tveczd2siza7ezd2setz12zd7zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2tvectorzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2tvecto1272z00,
		BGl_z62tveczd2tvectorzb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2idzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2idza7b0za71273z00,
		BGl_z62tveczd2idzb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2importzd2locationzd2envzd2zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2import1274z00,
		BGl_z62tveczd2importzd2locationz62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2locationzd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2locati1275z00,
		BGl_z62tveczd2locationzd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2siza7ezd2envza7zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2siza7a7e1276za7,
		BGl_z62tveczd2siza7ez17zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2occurrencezd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2occurr1277z00,
		BGl_z62tveczd2occurrencezb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2occurrencezd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2occurr1278z00,
		BGl_z62tveczd2occurrencezd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2namezd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2nameza7d1279za7,
		BGl_z62tveczd2namezd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2parentszd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2parent1280z00,
		BGl_z62tveczd2parentszb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2z42zd2envz42zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2za742za7f21281z00,
		BGl_z62tveczd2z42zf2zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1240z00zztvector_tvectorz00,
		BgL_bgl_za762lambda1210za7621282z00,
		BGl_z62lambda1210z62zztvector_tvectorz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1241z00zztvector_tvectorz00,
		BgL_bgl_za762lambda1209za7621283z00,
		BGl_z62lambda1209z62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1242z00zztvector_tvectorz00,
		BgL_bgl_za762lambda1181za7621284z00,
		BGl_z62lambda1181z62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1243z00zztvector_tvectorz00,
		BgL_bgl_za762za7c3za704anonymo1285za7,
		BGl_z62zc3z04anonymousza31180ze3ze5zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1244z00zztvector_tvectorz00,
		BgL_bgl_za762lambda1178za7621286z00,
		BGl_z62lambda1178z62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1245z00zztvector_tvectorz00,
		BgL_bgl_za762lambda1175za7621287z00,
		BGl_z62lambda1175z62zztvector_tvectorz00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2magiczf3zd2envzf3zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2magicza71288za7,
		BGl_z62tveczd2magiczf3z43zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2tvectorzd2typez12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762declareza7d2tve1289z00,
		BGl_z62declarezd2tvectorzd2typez12z70zztvector_tvectorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2namezd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2nameza7b1290za7,
		BGl_z62tveczd2namezb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2pointedzd2tozd2byzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2pointe1291z00,
		BGl_z62tveczd2pointedzd2tozd2byzb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2locationzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2locati1292z00,
		BGl_z62tveczd2locationzb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2itemzd2typezd2envzd2zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2itemza7d1293za7,
		BGl_z62tveczd2itemzd2typez62zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2tvectorzd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2tvecto1294z00,
		BGl_z62tveczd2tvectorzd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2classzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2classza71295za7,
		BGl_z62tveczd2classzb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2classzd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2classza71296za7,
		BGl_z62tveczd2classzd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2importzd2locationzd2setz12zd2envz12zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2import1297z00,
		BGl_z62tveczd2importzd2locationzd2setz12za2zztvector_tvectorz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tveczd2envz00zztvector_tvectorz00,
		BgL_bgl_za762makeza7d2tvecza7b1298za7,
		BGl_z62makezd2tveczb0zztvector_tvectorz00, 0L, BUNSPEC, 16);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2nilzd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2nilza7b01299za7,
		BGl_z62tveczd2nilzb0zztvector_tvectorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczd2aliaszd2envz00zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2aliasza71300za7,
		BGl_z62tveczd2aliaszb0zztvector_tvectorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tveczf3zd2envz21zztvector_tvectorz00,
		BgL_bgl_za762tvecza7f3za791za7za7t1301za7,
		BGl_z62tveczf3z91zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2tvectorzd2typez12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762addza7d2tvector1302z00,
		BGl_z62addzd2tvectorzd2typez12z70zztvector_tvectorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2magiczf3zd2setz12zd2envz33zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2magicza71303za7,
		BGl_z62tveczd2magiczf3zd2setz12z83zztvector_tvectorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tveczd2aliaszd2setz12zd2envzc0zztvector_tvectorz00,
		BgL_bgl_za762tvecza7d2aliasza71304za7,
		BGl_z62tveczd2aliaszd2setz12z70zztvector_tvectorz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zztvector_tvectorz00));
		     ADD_ROOT((void
				*) (&BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00));
		     ADD_ROOT((void *) (&BGl_tvecz00zztvector_tvectorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long
		BgL_checksumz00_560, char *BgL_fromz00_561)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztvector_tvectorz00))
				{
					BGl_requirezd2initializa7ationz75zztvector_tvectorz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztvector_tvectorz00();
					BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00();
					BGl_cnstzd2initzd2zztvector_tvectorz00();
					BGl_importedzd2moduleszd2initz00zztvector_tvectorz00();
					BGl_objectzd2initzd2zztvector_tvectorz00();
					return BGl_toplevelzd2initzd2zztvector_tvectorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tvector_tvector");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tvector_tvector");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			{	/* Tvector/tvector.scm 15 */
				obj_t BgL_cportz00_508;

				{	/* Tvector/tvector.scm 15 */
					obj_t BgL_stringz00_516;

					BgL_stringz00_516 = BGl_string1247z00zztvector_tvectorz00;
					{	/* Tvector/tvector.scm 15 */
						obj_t BgL_startz00_517;

						BgL_startz00_517 = BINT(((long) 0));
						{	/* Tvector/tvector.scm 15 */
							obj_t BgL_endz00_518;

							BgL_endz00_518 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_516)));
							{	/* Tvector/tvector.scm 15 */

								BgL_cportz00_508 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_516, BgL_startz00_517, BgL_endz00_518);
				}}}}
				{
					long BgL_iz00_509;

					BgL_iz00_509 = ((long) 8);
				BgL_loopz00_510:
					if ((BgL_iz00_509 == ((long) -1)))
						{	/* Tvector/tvector.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tvector/tvector.scm 15 */
							{	/* Tvector/tvector.scm 15 */
								obj_t BgL_arg1250z00_512;

								{	/* Tvector/tvector.scm 15 */

									{	/* Tvector/tvector.scm 15 */
										obj_t BgL_locationz00_514;

										BgL_locationz00_514 = BBOOL(((bool_t) 0));
										{	/* Tvector/tvector.scm 15 */

											BgL_arg1250z00_512 =
												BGl_readz00zz__readerz00(BgL_cportz00_508,
												BgL_locationz00_514);
										}
									}
								}
								{	/* Tvector/tvector.scm 15 */
									int BgL_tmpz00_589;

									BgL_tmpz00_589 = (int) (BgL_iz00_509);
									CNST_TABLE_SET(BgL_tmpz00_589, BgL_arg1250z00_512);
							}}
							{	/* Tvector/tvector.scm 15 */
								int BgL_auxz00_515;

								BgL_auxz00_515 = (int) ((BgL_iz00_509 - ((long) 1)));
								{
									long BgL_iz00_594;

									BgL_iz00_594 = (long) (BgL_auxz00_515);
									BgL_iz00_509 = BgL_iz00_594;
									goto BgL_loopz00_510;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			return (BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
				BNIL, BUNSPEC);
		}

	}



/* make-tvec */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2tveczd2zztvector_tvectorz00(obj_t
		BgL_id1071z00_3, obj_t BgL_name1072z00_4, obj_t BgL_siza7e1073za7_5,
		obj_t BgL_class1074z00_6, obj_t BgL_coercezd2to1075zd2_7,
		obj_t BgL_parents1076z00_8, bool_t BgL_initzf31077zf3_9,
		bool_t BgL_magiczf31078zf3_10, obj_t BgL_z421079z42_11,
		obj_t BgL_alias1080z00_12, obj_t BgL_pointedzd2tozd2by1081z00_13,
		obj_t BgL_tvector1082z00_14, obj_t BgL_location1083z00_15,
		obj_t BgL_importzd2location1084zd2_16, int BgL_occurrence1085z00_17,
		BgL_typez00_bglt BgL_itemzd2type1086zd2_18)
	{
		{	/* Tvector/tvectortype.sch 51 */
			{	/* Tvector/tvectortype.sch 51 */
				BgL_typez00_bglt BgL_new1073z00_521;

				{	/* Tvector/tvectortype.sch 51 */
					BgL_typez00_bglt BgL_tmp1071z00_522;
					BgL_tvecz00_bglt BgL_wide1072z00_523;

					{
						BgL_typez00_bglt BgL_auxz00_597;

						{	/* Tvector/tvectortype.sch 51 */
							BgL_typez00_bglt BgL_new1070z00_524;

							BgL_new1070z00_524 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Tvector/tvectortype.sch 51 */
								long BgL_arg1109z00_525;

								{	/* Tvector/tvectortype.sch 51 */
									long BgL_res1217z00_526;

									BgL_res1217z00_526 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1109z00_525 = BgL_res1217z00_526;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1070z00_524),
									BgL_arg1109z00_525);
							}
							{	/* Tvector/tvectortype.sch 51 */
								BgL_objectz00_bglt BgL_tmpz00_602;

								BgL_tmpz00_602 = ((BgL_objectz00_bglt) BgL_new1070z00_524);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_602, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1070z00_524);
							BgL_auxz00_597 = BgL_new1070z00_524;
						}
						BgL_tmp1071z00_522 = ((BgL_typez00_bglt) BgL_auxz00_597);
					}
					BgL_wide1072z00_523 =
						((BgL_tvecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_tvecz00_bgl))));
					{	/* Tvector/tvectortype.sch 51 */
						obj_t BgL_auxz00_610;
						BgL_objectz00_bglt BgL_tmpz00_608;

						BgL_auxz00_610 = ((obj_t) BgL_wide1072z00_523);
						BgL_tmpz00_608 = ((BgL_objectz00_bglt) BgL_tmp1071z00_522);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_608, BgL_auxz00_610);
					}
					((BgL_objectz00_bglt) BgL_tmp1071z00_522);
					{	/* Tvector/tvectortype.sch 51 */
						long BgL_arg1103z00_527;

						{	/* Tvector/tvectortype.sch 51 */
							long BgL_res1218z00_528;

							BgL_res1218z00_528 =
								BGL_CLASS_INDEX(BGl_tvecz00zztvector_tvectorz00);
							BgL_arg1103z00_527 = BgL_res1218z00_528;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1071z00_522), BgL_arg1103z00_527);
					}
					BgL_new1073z00_521 = ((BgL_typez00_bglt) BgL_tmp1071z00_522);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1073z00_521)))->BgL_idz00) =
					((obj_t) BgL_id1071z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_namez00) =
					((obj_t) BgL_name1072z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1073za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_classz00) =
					((obj_t) BgL_class1074z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1075zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_parentsz00) =
					((obj_t) BgL_parents1076z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31077zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31078zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_z42z42) =
					((obj_t) BgL_z421079z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_aliasz00) =
					((obj_t) BgL_alias1080z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1081z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1082z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_locationz00) =
					((obj_t) BgL_location1083z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1084zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1073z00_521)))->BgL_occurrencez00) =
					((int) BgL_occurrence1085z00_17), BUNSPEC);
				{
					BgL_tvecz00_bglt BgL_auxz00_648;

					{
						obj_t BgL_auxz00_649;

						{	/* Tvector/tvectortype.sch 51 */
							BgL_objectz00_bglt BgL_tmpz00_650;

							BgL_tmpz00_650 = ((BgL_objectz00_bglt) BgL_new1073z00_521);
							BgL_auxz00_649 = BGL_OBJECT_WIDENING(BgL_tmpz00_650);
						}
						BgL_auxz00_648 = ((BgL_tvecz00_bglt) BgL_auxz00_649);
					}
					((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_648))->BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_itemzd2type1086zd2_18), BUNSPEC);
				}
				return BgL_new1073z00_521;
			}
		}

	}



/* &make-tvec */
	BgL_typez00_bglt BGl_z62makezd2tveczb0zztvector_tvectorz00(obj_t
		BgL_envz00_370, obj_t BgL_id1071z00_371, obj_t BgL_name1072z00_372,
		obj_t BgL_siza7e1073za7_373, obj_t BgL_class1074z00_374,
		obj_t BgL_coercezd2to1075zd2_375, obj_t BgL_parents1076z00_376,
		obj_t BgL_initzf31077zf3_377, obj_t BgL_magiczf31078zf3_378,
		obj_t BgL_z421079z42_379, obj_t BgL_alias1080z00_380,
		obj_t BgL_pointedzd2tozd2by1081z00_381, obj_t BgL_tvector1082z00_382,
		obj_t BgL_location1083z00_383, obj_t BgL_importzd2location1084zd2_384,
		obj_t BgL_occurrence1085z00_385, obj_t BgL_itemzd2type1086zd2_386)
	{
		{	/* Tvector/tvectortype.sch 51 */
			return
				BGl_makezd2tveczd2zztvector_tvectorz00(BgL_id1071z00_371,
				BgL_name1072z00_372, BgL_siza7e1073za7_373, BgL_class1074z00_374,
				BgL_coercezd2to1075zd2_375, BgL_parents1076z00_376,
				CBOOL(BgL_initzf31077zf3_377), CBOOL(BgL_magiczf31078zf3_378),
				BgL_z421079z42_379, BgL_alias1080z00_380,
				BgL_pointedzd2tozd2by1081z00_381, BgL_tvector1082z00_382,
				BgL_location1083z00_383, BgL_importzd2location1084zd2_384,
				CINT(BgL_occurrence1085z00_385),
				((BgL_typez00_bglt) BgL_itemzd2type1086zd2_386));
		}

	}



/* tvec? */
	BGL_EXPORTED_DEF bool_t BGl_tveczf3zf3zztvector_tvectorz00(obj_t
		BgL_objz00_19)
	{
		{	/* Tvector/tvectortype.sch 52 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_19,
				BGl_tvecz00zztvector_tvectorz00);
		}

	}



/* &tvec? */
	obj_t BGl_z62tveczf3z91zztvector_tvectorz00(obj_t BgL_envz00_387,
		obj_t BgL_objz00_388)
	{
		{	/* Tvector/tvectortype.sch 52 */
			return BBOOL(BGl_tveczf3zf3zztvector_tvectorz00(BgL_objz00_388));
		}

	}



/* tvec-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_tveczd2nilzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvectortype.sch 53 */
			{	/* Tvector/tvectortype.sch 53 */
				obj_t BgL_classz00_283;

				BgL_classz00_283 = BGl_tvecz00zztvector_tvectorz00;
				{	/* Tvector/tvectortype.sch 53 */
					obj_t BgL__ortest_1106z00_284;

					BgL__ortest_1106z00_284 = BGL_CLASS_NIL(BgL_classz00_283);
					if (CBOOL(BgL__ortest_1106z00_284))
						{	/* Tvector/tvectortype.sch 53 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_284);
						}
					else
						{	/* Tvector/tvectortype.sch 53 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_283));
						}
				}
			}
		}

	}



/* &tvec-nil */
	BgL_typez00_bglt BGl_z62tveczd2nilzb0zztvector_tvectorz00(obj_t
		BgL_envz00_389)
	{
		{	/* Tvector/tvectortype.sch 53 */
			return BGl_tveczd2nilzd2zztvector_tvectorz00();
		}

	}



/* tvec-item-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_tveczd2itemzd2typez00zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_20)
	{
		{	/* Tvector/tvectortype.sch 54 */
			{
				BgL_tvecz00_bglt BgL_auxz00_670;

				{
					obj_t BgL_auxz00_671;

					{	/* Tvector/tvectortype.sch 54 */
						BgL_objectz00_bglt BgL_tmpz00_672;

						BgL_tmpz00_672 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_671 = BGL_OBJECT_WIDENING(BgL_tmpz00_672);
					}
					BgL_auxz00_670 = ((BgL_tvecz00_bglt) BgL_auxz00_671);
				}
				return
					(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_670))->BgL_itemzd2typezd2);
			}
		}

	}



/* &tvec-item-type */
	BgL_typez00_bglt BGl_z62tveczd2itemzd2typez62zztvector_tvectorz00(obj_t
		BgL_envz00_390, obj_t BgL_oz00_391)
	{
		{	/* Tvector/tvectortype.sch 54 */
			return
				BGl_tveczd2itemzd2typez00zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_391));
		}

	}



/* tvec-occurrence */
	BGL_EXPORTED_DEF int
		BGl_tveczd2occurrencezd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_23)
	{
		{	/* Tvector/tvectortype.sch 56 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_23)))->BgL_occurrencez00);
		}

	}



/* &tvec-occurrence */
	obj_t BGl_z62tveczd2occurrencezb0zztvector_tvectorz00(obj_t BgL_envz00_392,
		obj_t BgL_oz00_393)
	{
		{	/* Tvector/tvectortype.sch 56 */
			return
				BINT(BGl_tveczd2occurrencezd2zztvector_tvectorz00(
					((BgL_typez00_bglt) BgL_oz00_393)));
		}

	}



/* tvec-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2occurrencezd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_24, int BgL_vz00_25)
	{
		{	/* Tvector/tvectortype.sch 57 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_24)))->BgL_occurrencez00) =
				((int) BgL_vz00_25), BUNSPEC);
		}

	}



/* &tvec-occurrence-set! */
	obj_t BGl_z62tveczd2occurrencezd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_394, obj_t BgL_oz00_395, obj_t BgL_vz00_396)
	{
		{	/* Tvector/tvectortype.sch 57 */
			return
				BGl_tveczd2occurrencezd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_395), CINT(BgL_vz00_396));
		}

	}



/* tvec-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2importzd2locationz00zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_26)
	{
		{	/* Tvector/tvectortype.sch 58 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_26)))->BgL_importzd2locationzd2);
		}

	}



/* &tvec-import-location */
	obj_t BGl_z62tveczd2importzd2locationz62zztvector_tvectorz00(obj_t
		BgL_envz00_397, obj_t BgL_oz00_398)
	{
		{	/* Tvector/tvectortype.sch 58 */
			return
				BGl_tveczd2importzd2locationz00zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_398));
		}

	}



/* tvec-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2importzd2locationzd2setz12zc0zztvector_tvectorz00
		(BgL_typez00_bglt BgL_oz00_27, obj_t BgL_vz00_28)
	{
		{	/* Tvector/tvectortype.sch 59 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_27)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_28), BUNSPEC);
		}

	}



/* &tvec-import-location-set! */
	obj_t BGl_z62tveczd2importzd2locationzd2setz12za2zztvector_tvectorz00(obj_t
		BgL_envz00_399, obj_t BgL_oz00_400, obj_t BgL_vz00_401)
	{
		{	/* Tvector/tvectortype.sch 59 */
			return
				BGl_tveczd2importzd2locationzd2setz12zc0zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_400), BgL_vz00_401);
		}

	}



/* tvec-location */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2locationzd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_29)
	{
		{	/* Tvector/tvectortype.sch 60 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_29)))->BgL_locationz00);
		}

	}



/* &tvec-location */
	obj_t BGl_z62tveczd2locationzb0zztvector_tvectorz00(obj_t BgL_envz00_402,
		obj_t BgL_oz00_403)
	{
		{	/* Tvector/tvectortype.sch 60 */
			return
				BGl_tveczd2locationzd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_403));
		}

	}



/* tvec-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2locationzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_30, obj_t BgL_vz00_31)
	{
		{	/* Tvector/tvectortype.sch 61 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_30)))->BgL_locationz00) =
				((obj_t) BgL_vz00_31), BUNSPEC);
		}

	}



/* &tvec-location-set! */
	obj_t BGl_z62tveczd2locationzd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_404, obj_t BgL_oz00_405, obj_t BgL_vz00_406)
	{
		{	/* Tvector/tvectortype.sch 61 */
			return
				BGl_tveczd2locationzd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_405), BgL_vz00_406);
		}

	}



/* tvec-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2tvectorzd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_32)
	{
		{	/* Tvector/tvectortype.sch 62 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_32)))->BgL_tvectorz00);
		}

	}



/* &tvec-tvector */
	obj_t BGl_z62tveczd2tvectorzb0zztvector_tvectorz00(obj_t BgL_envz00_407,
		obj_t BgL_oz00_408)
	{
		{	/* Tvector/tvectortype.sch 62 */
			return
				BGl_tveczd2tvectorzd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_408));
		}

	}



/* tvec-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2tvectorzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_33, obj_t BgL_vz00_34)
	{
		{	/* Tvector/tvectortype.sch 63 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_33)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_34), BUNSPEC);
		}

	}



/* &tvec-tvector-set! */
	obj_t BGl_z62tveczd2tvectorzd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_409, obj_t BgL_oz00_410, obj_t BgL_vz00_411)
	{
		{	/* Tvector/tvectortype.sch 63 */
			return
				BGl_tveczd2tvectorzd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_410), BgL_vz00_411);
		}

	}



/* tvec-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2pointedzd2tozd2byzd2zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_35)
	{
		{	/* Tvector/tvectortype.sch 64 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_35)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &tvec-pointed-to-by */
	obj_t BGl_z62tveczd2pointedzd2tozd2byzb0zztvector_tvectorz00(obj_t
		BgL_envz00_412, obj_t BgL_oz00_413)
	{
		{	/* Tvector/tvectortype.sch 64 */
			return
				BGl_tveczd2pointedzd2tozd2byzd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_413));
		}

	}



/* tvec-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2pointedzd2tozd2byzd2setz12z12zztvector_tvectorz00
		(BgL_typez00_bglt BgL_oz00_36, obj_t BgL_vz00_37)
	{
		{	/* Tvector/tvectortype.sch 65 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_36)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_37), BUNSPEC);
		}

	}



/* &tvec-pointed-to-by-set! */
	obj_t BGl_z62tveczd2pointedzd2tozd2byzd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_414, obj_t BgL_oz00_415, obj_t BgL_vz00_416)
	{
		{	/* Tvector/tvectortype.sch 65 */
			return
				BGl_tveczd2pointedzd2tozd2byzd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_415), BgL_vz00_416);
		}

	}



/* tvec-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2aliaszd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_38)
	{
		{	/* Tvector/tvectortype.sch 66 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_38)))->BgL_aliasz00);
		}

	}



/* &tvec-alias */
	obj_t BGl_z62tveczd2aliaszb0zztvector_tvectorz00(obj_t BgL_envz00_417,
		obj_t BgL_oz00_418)
	{
		{	/* Tvector/tvectortype.sch 66 */
			return
				BGl_tveczd2aliaszd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_418));
		}

	}



/* tvec-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2aliaszd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_39, obj_t BgL_vz00_40)
	{
		{	/* Tvector/tvectortype.sch 67 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_39)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_40), BUNSPEC);
		}

	}



/* &tvec-alias-set! */
	obj_t BGl_z62tveczd2aliaszd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_419, obj_t BgL_oz00_420, obj_t BgL_vz00_421)
	{
		{	/* Tvector/tvectortype.sch 67 */
			return
				BGl_tveczd2aliaszd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_420), BgL_vz00_421);
		}

	}



/* tvec-$ */
	BGL_EXPORTED_DEF obj_t BGl_tveczd2z42z90zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_41)
	{
		{	/* Tvector/tvectortype.sch 68 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_41)))->BgL_z42z42);
		}

	}



/* &tvec-$ */
	obj_t BGl_z62tveczd2z42zf2zztvector_tvectorz00(obj_t BgL_envz00_422,
		obj_t BgL_oz00_423)
	{
		{	/* Tvector/tvectortype.sch 68 */
			return
				BGl_tveczd2z42z90zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_423));
		}

	}



/* tvec-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2z42zd2setz12z50zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_42,
		obj_t BgL_vz00_43)
	{
		{	/* Tvector/tvectortype.sch 69 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_42)))->BgL_z42z42) =
				((obj_t) BgL_vz00_43), BUNSPEC);
		}

	}



/* &tvec-$-set! */
	obj_t BGl_z62tveczd2z42zd2setz12z32zztvector_tvectorz00(obj_t BgL_envz00_424,
		obj_t BgL_oz00_425, obj_t BgL_vz00_426)
	{
		{	/* Tvector/tvectortype.sch 69 */
			return
				BGl_tveczd2z42zd2setz12z50zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_425), BgL_vz00_426);
		}

	}



/* tvec-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_tveczd2magiczf3z21zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_44)
	{
		{	/* Tvector/tvectortype.sch 70 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_44)))->BgL_magiczf3zf3);
		}

	}



/* &tvec-magic? */
	obj_t BGl_z62tveczd2magiczf3z43zztvector_tvectorz00(obj_t BgL_envz00_427,
		obj_t BgL_oz00_428)
	{
		{	/* Tvector/tvectortype.sch 70 */
			return
				BBOOL(BGl_tveczd2magiczf3z21zztvector_tvectorz00(
					((BgL_typez00_bglt) BgL_oz00_428)));
		}

	}



/* tvec-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2magiczf3zd2setz12ze1zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_45, bool_t BgL_vz00_46)
	{
		{	/* Tvector/tvectortype.sch 71 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_45)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_46), BUNSPEC);
		}

	}



/* &tvec-magic?-set! */
	obj_t BGl_z62tveczd2magiczf3zd2setz12z83zztvector_tvectorz00(obj_t
		BgL_envz00_429, obj_t BgL_oz00_430, obj_t BgL_vz00_431)
	{
		{	/* Tvector/tvectortype.sch 71 */
			return
				BGl_tveczd2magiczf3zd2setz12ze1zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_430), CBOOL(BgL_vz00_431));
		}

	}



/* tvec-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_tveczd2initzf3z21zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_47)
	{
		{	/* Tvector/tvectortype.sch 72 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_47)))->BgL_initzf3zf3);
		}

	}



/* &tvec-init? */
	obj_t BGl_z62tveczd2initzf3z43zztvector_tvectorz00(obj_t BgL_envz00_432,
		obj_t BgL_oz00_433)
	{
		{	/* Tvector/tvectortype.sch 72 */
			return
				BBOOL(BGl_tveczd2initzf3z21zztvector_tvectorz00(
					((BgL_typez00_bglt) BgL_oz00_433)));
		}

	}



/* tvec-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2initzf3zd2setz12ze1zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_48, bool_t BgL_vz00_49)
	{
		{	/* Tvector/tvectortype.sch 73 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_48)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_49), BUNSPEC);
		}

	}



/* &tvec-init?-set! */
	obj_t BGl_z62tveczd2initzf3zd2setz12z83zztvector_tvectorz00(obj_t
		BgL_envz00_434, obj_t BgL_oz00_435, obj_t BgL_vz00_436)
	{
		{	/* Tvector/tvectortype.sch 73 */
			return
				BGl_tveczd2initzf3zd2setz12ze1zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_435), CBOOL(BgL_vz00_436));
		}

	}



/* tvec-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2parentszd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_50)
	{
		{	/* Tvector/tvectortype.sch 74 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_50)))->BgL_parentsz00);
		}

	}



/* &tvec-parents */
	obj_t BGl_z62tveczd2parentszb0zztvector_tvectorz00(obj_t BgL_envz00_437,
		obj_t BgL_oz00_438)
	{
		{	/* Tvector/tvectortype.sch 74 */
			return
				BGl_tveczd2parentszd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_438));
		}

	}



/* tvec-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2parentszd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_51, obj_t BgL_vz00_52)
	{
		{	/* Tvector/tvectortype.sch 75 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_51)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_52), BUNSPEC);
		}

	}



/* &tvec-parents-set! */
	obj_t BGl_z62tveczd2parentszd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_439, obj_t BgL_oz00_440, obj_t BgL_vz00_441)
	{
		{	/* Tvector/tvectortype.sch 75 */
			return
				BGl_tveczd2parentszd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_440), BgL_vz00_441);
		}

	}



/* tvec-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2coercezd2toz00zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_53)
	{
		{	/* Tvector/tvectortype.sch 76 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_53)))->BgL_coercezd2tozd2);
		}

	}



/* &tvec-coerce-to */
	obj_t BGl_z62tveczd2coercezd2toz62zztvector_tvectorz00(obj_t BgL_envz00_442,
		obj_t BgL_oz00_443)
	{
		{	/* Tvector/tvectortype.sch 76 */
			return
				BGl_tveczd2coercezd2toz00zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_443));
		}

	}



/* tvec-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2coercezd2tozd2setz12zc0zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_54, obj_t BgL_vz00_55)
	{
		{	/* Tvector/tvectortype.sch 77 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_54)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_55), BUNSPEC);
		}

	}



/* &tvec-coerce-to-set! */
	obj_t BGl_z62tveczd2coercezd2tozd2setz12za2zztvector_tvectorz00(obj_t
		BgL_envz00_444, obj_t BgL_oz00_445, obj_t BgL_vz00_446)
	{
		{	/* Tvector/tvectortype.sch 77 */
			return
				BGl_tveczd2coercezd2tozd2setz12zc0zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_445), BgL_vz00_446);
		}

	}



/* tvec-class */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2classzd2zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_56)
	{
		{	/* Tvector/tvectortype.sch 78 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_56)))->BgL_classz00);
		}

	}



/* &tvec-class */
	obj_t BGl_z62tveczd2classzb0zztvector_tvectorz00(obj_t BgL_envz00_447,
		obj_t BgL_oz00_448)
	{
		{	/* Tvector/tvectortype.sch 78 */
			return
				BGl_tveczd2classzd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_448));
		}

	}



/* tvec-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2classzd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_57, obj_t BgL_vz00_58)
	{
		{	/* Tvector/tvectortype.sch 79 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_57)))->BgL_classz00) =
				((obj_t) BgL_vz00_58), BUNSPEC);
		}

	}



/* &tvec-class-set! */
	obj_t BGl_z62tveczd2classzd2setz12z70zztvector_tvectorz00(obj_t
		BgL_envz00_449, obj_t BgL_oz00_450, obj_t BgL_vz00_451)
	{
		{	/* Tvector/tvectortype.sch 79 */
			return
				BGl_tveczd2classzd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_450), BgL_vz00_451);
		}

	}



/* tvec-size */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2siza7ez75zztvector_tvectorz00(BgL_typez00_bglt BgL_oz00_59)
	{
		{	/* Tvector/tvectortype.sch 80 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_59)))->BgL_siza7eza7);
		}

	}



/* &tvec-size */
	obj_t BGl_z62tveczd2siza7ez17zztvector_tvectorz00(obj_t BgL_envz00_452,
		obj_t BgL_oz00_453)
	{
		{	/* Tvector/tvectortype.sch 80 */
			return
				BGl_tveczd2siza7ez75zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_453));
		}

	}



/* tvec-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2siza7ezd2setz12zb5zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_60, obj_t BgL_vz00_61)
	{
		{	/* Tvector/tvectortype.sch 81 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_60)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_61), BUNSPEC);
		}

	}



/* &tvec-size-set! */
	obj_t BGl_z62tveczd2siza7ezd2setz12zd7zztvector_tvectorz00(obj_t
		BgL_envz00_454, obj_t BgL_oz00_455, obj_t BgL_vz00_456)
	{
		{	/* Tvector/tvectortype.sch 81 */
			return
				BGl_tveczd2siza7ezd2setz12zb5zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_455), BgL_vz00_456);
		}

	}



/* tvec-name */
	BGL_EXPORTED_DEF obj_t BGl_tveczd2namezd2zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_62)
	{
		{	/* Tvector/tvectortype.sch 82 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_62)))->BgL_namez00);
		}

	}



/* &tvec-name */
	obj_t BGl_z62tveczd2namezb0zztvector_tvectorz00(obj_t BgL_envz00_457,
		obj_t BgL_oz00_458)
	{
		{	/* Tvector/tvectortype.sch 82 */
			return
				BGl_tveczd2namezd2zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_458));
		}

	}



/* tvec-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tveczd2namezd2setz12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_63, obj_t BgL_vz00_64)
	{
		{	/* Tvector/tvectortype.sch 83 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_63)))->BgL_namez00) =
				((obj_t) BgL_vz00_64), BUNSPEC);
		}

	}



/* &tvec-name-set! */
	obj_t BGl_z62tveczd2namezd2setz12z70zztvector_tvectorz00(obj_t BgL_envz00_459,
		obj_t BgL_oz00_460, obj_t BgL_vz00_461)
	{
		{	/* Tvector/tvectortype.sch 83 */
			return
				BGl_tveczd2namezd2setz12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_oz00_460), BgL_vz00_461);
		}

	}



/* tvec-id */
	BGL_EXPORTED_DEF obj_t BGl_tveczd2idzd2zztvector_tvectorz00(BgL_typez00_bglt
		BgL_oz00_65)
	{
		{	/* Tvector/tvectortype.sch 84 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_65)))->BgL_idz00);
		}

	}



/* &tvec-id */
	obj_t BGl_z62tveczd2idzb0zztvector_tvectorz00(obj_t BgL_envz00_462,
		obj_t BgL_oz00_463)
	{
		{	/* Tvector/tvectortype.sch 84 */
			return
				BGl_tveczd2idzd2zztvector_tvectorz00(((BgL_typez00_bglt) BgL_oz00_463));
		}

	}



/* add-tvector-type! */
	BGL_EXPORTED_DEF obj_t
		BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(BgL_typez00_bglt
		BgL_typez00_68)
	{
		{	/* Tvector/tvector.scm 41 */
			return (BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_typez00_68),
					BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00), BUNSPEC);
		}

	}



/* &add-tvector-type! */
	obj_t BGl_z62addzd2tvectorzd2typez12z70zztvector_tvectorz00(obj_t
		BgL_envz00_464, obj_t BgL_typez00_465)
	{
		{	/* Tvector/tvector.scm 41 */
			return
				BGl_addzd2tvectorzd2typez12z12zztvector_tvectorz00(
				((BgL_typez00_bglt) BgL_typez00_465));
		}

	}



/* declare-tvector-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00(obj_t
		BgL_tvectzd2idzd2_69, obj_t BgL_itemzd2idzd2_70, obj_t BgL_srcz00_71)
	{
		{	/* Tvector/tvector.scm 47 */
			{	/* Tvector/tvector.scm 48 */
				BgL_typez00_bglt BgL_objz00_156;

				BgL_objz00_156 =
					BGl_findzd2typezd2zztype_envz00(CNST_TABLE_REF(((long) 0)));
				{	/* Tvector/tvector.scm 51 */
					BgL_typez00_bglt BgL_typez00_158;
					BgL_typez00_bglt BgL_itemzd2typezd2_159;

					{	/* Tvector/tvector.scm 52 */
						obj_t BgL_arg1115z00_166;
						obj_t BgL_arg1116z00_167;

						BgL_arg1115z00_166 =
							(((BgL_typez00_bglt) COBJECT(BgL_objz00_156))->BgL_namez00);
						{	/* Tvector/tvector.scm 53 */
							obj_t BgL_list1117z00_168;

							BgL_list1117z00_168 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)), BNIL);
							BgL_arg1116z00_167 = BgL_list1117z00_168;
						}
						BgL_typez00_158 =
							BGl_declarezd2subtypez12zc0zztype_envz00(BgL_tvectzd2idzd2_69,
							BgL_arg1115z00_166, BgL_arg1116z00_167,
							CNST_TABLE_REF(((long) 1)));
					}
					BgL_itemzd2typezd2_159 =
						BGl_usezd2typez12zc0zztype_envz00(BgL_itemzd2idzd2_70,
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_71));
					{	/* Tvector/tvector.scm 57 */
						BgL_tvecz00_bglt BgL_wide1076z00_162;

						BgL_wide1076z00_162 =
							((BgL_tvecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_tvecz00_bgl))));
						{	/* Tvector/tvector.scm 57 */
							obj_t BgL_auxz00_818;
							BgL_objectz00_bglt BgL_tmpz00_815;

							BgL_auxz00_818 = ((obj_t) BgL_wide1076z00_162);
							BgL_tmpz00_815 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_158));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_815, BgL_auxz00_818);
						}
						((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_158));
						{	/* Tvector/tvector.scm 57 */
							long BgL_arg1113z00_163;

							{	/* Tvector/tvector.scm 57 */
								long BgL_res1221z00_291;

								BgL_res1221z00_291 =
									BGL_CLASS_INDEX(BGl_tvecz00zztvector_tvectorz00);
								BgL_arg1113z00_163 = BgL_res1221z00_291;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_typez00_bglt) BgL_typez00_158)), BgL_arg1113z00_163);
						}
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typez00_158));
					}
					{
						BgL_tvecz00_bglt BgL_auxz00_829;

						{
							obj_t BgL_auxz00_830;

							{	/* Tvector/tvector.scm 57 */
								BgL_objectz00_bglt BgL_tmpz00_831;

								BgL_tmpz00_831 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_158));
								BgL_auxz00_830 = BGL_OBJECT_WIDENING(BgL_tmpz00_831);
							}
							BgL_auxz00_829 = ((BgL_tvecz00_bglt) BgL_auxz00_830);
						}
						((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_829))->
								BgL_itemzd2typezd2) =
							((BgL_typez00_bglt) BgL_itemzd2typezd2_159), BUNSPEC);
					}
					((BgL_typez00_bglt) BgL_typez00_158);
					BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
						(BGl_makezd2coercionzd2clausez00zztvector_tvectorz00
						(BgL_tvectzd2idzd2_69));
					BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00 =
						MAKE_YOUNG_PAIR(((obj_t) ((BgL_typez00_bglt) BgL_typez00_158)),
						BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00);
					((((BgL_typez00_bglt) COBJECT(BgL_itemzd2typezd2_159))->
							BgL_tvectorz00) = ((obj_t) ((obj_t) BgL_typez00_158)), BUNSPEC);
					return ((BgL_typez00_bglt) BgL_typez00_158);
				}
			}
		}

	}



/* &declare-tvector-type! */
	BgL_typez00_bglt
		BGl_z62declarezd2tvectorzd2typez12z70zztvector_tvectorz00(obj_t
		BgL_envz00_466, obj_t BgL_tvectzd2idzd2_467, obj_t BgL_itemzd2idzd2_468,
		obj_t BgL_srcz00_469)
	{
		{	/* Tvector/tvector.scm 47 */
			return
				BGl_declarezd2tvectorzd2typez12z12zztvector_tvectorz00
				(BgL_tvectzd2idzd2_467, BgL_itemzd2idzd2_468, BgL_srcz00_469);
		}

	}



/* emit-tvector-types */
	BGL_EXPORTED_DEF obj_t BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(obj_t
		BgL_oportz00_72)
	{
		{	/* Tvector/tvector.scm 70 */
			if (NULLP(BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00))
				{	/* Tvector/tvector.scm 71 */
					BFALSE;
				}
			else
				{	/* Tvector/tvector.scm 71 */
					bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
					bgl_display_string(BGl_string1231z00zztvector_tvectorz00,
						BgL_oportz00_72);
					bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
				}
			{	/* Tvector/tvector.scm 73 */
				obj_t BgL_g1096z00_173;

				BgL_g1096z00_173 =
					bgl_reverse_bang
					(BGl_za2tvectorzd2typezd2listza2z00zztvector_tvectorz00);
				{
					obj_t BgL_l1094z00_175;

					BgL_l1094z00_175 = BgL_g1096z00_173;
				BgL_zc3z04anonymousza31121ze3z87_176:
					if (PAIRP(BgL_l1094z00_175))
						{	/* Tvector/tvector.scm 82 */
							{	/* Tvector/tvector.scm 74 */
								obj_t BgL_tvectorz00_178;

								BgL_tvectorz00_178 = CAR(BgL_l1094z00_175);
								{	/* Tvector/tvector.scm 74 */
									obj_t BgL_itemzd2typezd2namez00_179;

									{	/* Tvector/tvector.scm 74 */
										BgL_typez00_bglt BgL_arg1124z00_187;

										{
											BgL_tvecz00_bglt BgL_auxz00_856;

											{
												obj_t BgL_auxz00_857;

												{	/* Tvector/tvector.scm 74 */
													BgL_objectz00_bglt BgL_tmpz00_858;

													BgL_tmpz00_858 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_tvectorz00_178));
													BgL_auxz00_857 = BGL_OBJECT_WIDENING(BgL_tmpz00_858);
												}
												BgL_auxz00_856 = ((BgL_tvecz00_bglt) BgL_auxz00_857);
											}
											BgL_arg1124z00_187 =
												(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_856))->
												BgL_itemzd2typezd2);
										}
										BgL_itemzd2typezd2namez00_179 =
											(((BgL_typez00_bglt) COBJECT(BgL_arg1124z00_187))->
											BgL_namez00);
									}
									bgl_display_string(BGl_string1232z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_obj(bigloo_mangle(BgL_itemzd2typezd2namez00_179),
										BgL_oportz00_72);
									bgl_display_string(BGl_string1233z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
									bgl_display_string(BGl_string1234z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
									bgl_display_string(BGl_string1235z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
									bgl_display_string(BGl_string1236z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
									bgl_display_string(BGl_string1237z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_obj(BgL_itemzd2typezd2namez00_179,
										BgL_oportz00_72);
									bgl_display_string(BGl_string1238z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
									bgl_display_string(BGl_string1239z00zztvector_tvectorz00,
										BgL_oportz00_72);
									bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
							}}
							{
								obj_t BgL_l1094z00_882;

								BgL_l1094z00_882 = CDR(BgL_l1094z00_175);
								BgL_l1094z00_175 = BgL_l1094z00_882;
								goto BgL_zc3z04anonymousza31121ze3z87_176;
							}
						}
					else
						{	/* Tvector/tvector.scm 82 */
							((bool_t) 1);
						}
				}
			}
			return bgl_display_char(((unsigned char) 10), BgL_oportz00_72);
		}

	}



/* &emit-tvector-types */
	obj_t BGl_z62emitzd2tvectorzd2typesz62zztvector_tvectorz00(obj_t
		BgL_envz00_472, obj_t BgL_oportz00_473)
	{
		{	/* Tvector/tvector.scm 70 */
			return
				BGl_emitzd2tvectorzd2typesz00zztvector_tvectorz00(BgL_oportz00_473);
		}

	}



/* make-coercion-clause */
	obj_t BGl_makezd2coercionzd2clausez00zztvector_tvectorz00(obj_t
		BgL_tvectzd2idzd2_73)
	{
		{	/* Tvector/tvector.scm 88 */
			{	/* Tvector/tvector.scm 89 */
				obj_t BgL_arg1126z00_190;

				{	/* Tvector/tvector.scm 89 */
					obj_t BgL_arg1127z00_191;
					obj_t BgL_arg1128z00_192;

					{	/* Tvector/tvector.scm 89 */
						obj_t BgL_arg1129z00_193;

						{	/* Tvector/tvector.scm 89 */
							obj_t BgL_arg1133z00_194;

							{	/* Tvector/tvector.scm 89 */
								obj_t BgL_arg1134z00_195;

								{	/* Tvector/tvector.scm 89 */
									obj_t BgL_arg1140z00_196;

									BgL_arg1140z00_196 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_arg1134z00_195 =
										MAKE_YOUNG_PAIR(BNIL, BgL_arg1140z00_196);
								}
								BgL_arg1133z00_194 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
									BgL_arg1134z00_195);
							}
							BgL_arg1129z00_193 =
								MAKE_YOUNG_PAIR(BgL_tvectzd2idzd2_73, BgL_arg1133z00_194);
						}
						BgL_arg1127z00_191 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1129z00_193);
					}
					{	/* Tvector/tvector.scm 90 */
						obj_t BgL_arg1145z00_197;

						{	/* Tvector/tvector.scm 90 */
							obj_t BgL_arg1146z00_198;

							{	/* Tvector/tvector.scm 90 */
								obj_t BgL_arg1155z00_199;

								{	/* Tvector/tvector.scm 90 */
									obj_t BgL_arg1156z00_200;

									{	/* Tvector/tvector.scm 90 */
										obj_t BgL_arg1165z00_201;

										BgL_arg1165z00_201 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_arg1156z00_200 =
											MAKE_YOUNG_PAIR(BNIL, BgL_arg1165z00_201);
									}
									BgL_arg1155z00_199 =
										MAKE_YOUNG_PAIR(BgL_tvectzd2idzd2_73, BgL_arg1156z00_200);
								}
								BgL_arg1146z00_198 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
									BgL_arg1155z00_199);
							}
							BgL_arg1145z00_197 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)), BgL_arg1146z00_198);
						}
						BgL_arg1128z00_192 = MAKE_YOUNG_PAIR(BgL_arg1145z00_197, BNIL);
					}
					BgL_arg1126z00_190 =
						MAKE_YOUNG_PAIR(BgL_arg1127z00_191, BgL_arg1128z00_192);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BgL_arg1126z00_190);
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			{	/* Tvector/tvector.scm 25 */
				obj_t BgL_arg1172z00_206;
				obj_t BgL_arg1174z00_207;

				{	/* Tvector/tvector.scm 25 */
					obj_t BgL_v1097z00_244;

					BgL_v1097z00_244 = create_vector(((long) 1));
					{	/* Tvector/tvector.scm 25 */
						obj_t BgL_arg1197z00_245;

						BgL_arg1197z00_245 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1241z00zztvector_tvectorz00,
							BGl_proc1240z00zztvector_tvectorz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_typez00zztype_typez00);
						VECTOR_SET(BgL_v1097z00_244, ((long) 0), BgL_arg1197z00_245);
					}
					BgL_arg1172z00_206 = BgL_v1097z00_244;
				}
				{	/* Tvector/tvector.scm 25 */
					obj_t BgL_v1098z00_255;

					BgL_v1098z00_255 = create_vector(((long) 0));
					BgL_arg1174z00_207 = BgL_v1098z00_255;
				}
				return (BGl_tvecz00zztvector_tvectorz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 6)),
						CNST_TABLE_REF(((long) 7)), BGl_typez00zztype_typez00,
						((long) 21712), BGl_proc1245z00zztvector_tvectorz00,
						BGl_proc1244z00zztvector_tvectorz00, BFALSE,
						BGl_proc1243z00zztvector_tvectorz00,
						BGl_proc1242z00zztvector_tvectorz00, BgL_arg1172z00_206,
						BgL_arg1174z00_207), BUNSPEC);
		}}

	}



/* &lambda1181 */
	BgL_typez00_bglt BGl_z62lambda1181z62zztvector_tvectorz00(obj_t
		BgL_envz00_480, obj_t BgL_o1069z00_481)
	{
		{	/* Tvector/tvector.scm 25 */
			{	/* Tvector/tvector.scm 25 */
				long BgL_arg1186z00_530;

				{	/* Tvector/tvector.scm 25 */
					obj_t BgL_arg1190z00_531;

					{	/* Tvector/tvector.scm 25 */
						obj_t BgL_arg1194z00_532;

						{	/* Tvector/tvector.scm 25 */
							long BgL_arg1816z00_533;

							{	/* Tvector/tvector.scm 25 */
								long BgL_arg1817z00_534;

								{	/* Tvector/tvector.scm 25 */
									long BgL_res1227z00_535;

									BgL_res1227z00_535 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1069z00_481)));
									BgL_arg1817z00_534 = BgL_res1227z00_535;
								}
								BgL_arg1816z00_533 = (BgL_arg1817z00_534 - OBJECT_TYPE);
							}
							BgL_arg1194z00_532 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_533);
						}
						BgL_arg1190z00_531 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1194z00_532);
					}
					{	/* Tvector/tvector.scm 25 */
						long BgL_res1229z00_536;

						{	/* Tvector/tvector.scm 25 */
							obj_t BgL_tmpz00_918;

							BgL_tmpz00_918 = ((obj_t) BgL_arg1190z00_531);
							BgL_res1229z00_536 = BGL_CLASS_INDEX(BgL_tmpz00_918);
						}
						BgL_arg1186z00_530 = BgL_res1229z00_536;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1069z00_481)), BgL_arg1186z00_530);
			}
			{	/* Tvector/tvector.scm 25 */
				BgL_objectz00_bglt BgL_tmpz00_924;

				BgL_tmpz00_924 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_481));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_924, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_481));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1069z00_481));
		}

	}



/* &<@anonymous:1180> */
	obj_t BGl_z62zc3z04anonymousza31180ze3ze5zztvector_tvectorz00(obj_t
		BgL_envz00_482, obj_t BgL_new1068z00_483)
	{
		{	/* Tvector/tvector.scm 25 */
			{
				BgL_typez00_bglt BgL_auxz00_932;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1068z00_483))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 8))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1068z00_483))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_987;
					BgL_tvecz00_bglt BgL_auxz00_980;

					{	/* Tvector/tvector.scm 25 */
						obj_t BgL_classz00_538;

						BgL_classz00_538 = BGl_typez00zztype_typez00;
						{	/* Tvector/tvector.scm 25 */
							obj_t BgL__ortest_1106z00_539;

							BgL__ortest_1106z00_539 = BGL_CLASS_NIL(BgL_classz00_538);
							if (CBOOL(BgL__ortest_1106z00_539))
								{	/* Tvector/tvector.scm 25 */
									BgL_auxz00_987 = ((BgL_typez00_bglt) BgL__ortest_1106z00_539);
								}
							else
								{	/* Tvector/tvector.scm 25 */
									BgL_auxz00_987 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_538));
								}
						}
					}
					{
						obj_t BgL_auxz00_981;

						{	/* Tvector/tvector.scm 25 */
							BgL_objectz00_bglt BgL_tmpz00_982;

							BgL_tmpz00_982 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1068z00_483));
							BgL_auxz00_981 = BGL_OBJECT_WIDENING(BgL_tmpz00_982);
						}
						BgL_auxz00_980 = ((BgL_tvecz00_bglt) BgL_auxz00_981);
					}
					((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_980))->BgL_itemzd2typezd2) =
						((BgL_typez00_bglt) BgL_auxz00_987), BUNSPEC);
				}
				BgL_auxz00_932 = ((BgL_typez00_bglt) BgL_new1068z00_483);
				return ((obj_t) BgL_auxz00_932);
			}
		}

	}



/* &lambda1178 */
	BgL_typez00_bglt BGl_z62lambda1178z62zztvector_tvectorz00(obj_t
		BgL_envz00_484, obj_t BgL_o1065z00_485)
	{
		{	/* Tvector/tvector.scm 25 */
			{	/* Tvector/tvector.scm 25 */
				BgL_tvecz00_bglt BgL_wide1067z00_541;

				BgL_wide1067z00_541 =
					((BgL_tvecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_tvecz00_bgl))));
				{	/* Tvector/tvector.scm 25 */
					obj_t BgL_auxz00_1002;
					BgL_objectz00_bglt BgL_tmpz00_998;

					BgL_auxz00_1002 = ((obj_t) BgL_wide1067z00_541);
					BgL_tmpz00_998 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_485)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_998, BgL_auxz00_1002);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_485)));
				{	/* Tvector/tvector.scm 25 */
					long BgL_arg1179z00_542;

					{	/* Tvector/tvector.scm 25 */
						long BgL_res1226z00_543;

						BgL_res1226z00_543 =
							BGL_CLASS_INDEX(BGl_tvecz00zztvector_tvectorz00);
						BgL_arg1179z00_542 = BgL_res1226z00_543;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1065z00_485))), BgL_arg1179z00_542);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1065z00_485)));
			}
		}

	}



/* &lambda1175 */
	BgL_typez00_bglt BGl_z62lambda1175z62zztvector_tvectorz00(obj_t
		BgL_envz00_486, obj_t BgL_id1049z00_487, obj_t BgL_name1050z00_488,
		obj_t BgL_siza7e1051za7_489, obj_t BgL_class1052z00_490,
		obj_t BgL_coercezd2to1053zd2_491, obj_t BgL_parents1054z00_492,
		obj_t BgL_initzf31055zf3_493, obj_t BgL_magiczf31056zf3_494,
		obj_t BgL_z421057z42_495, obj_t BgL_alias1058z00_496,
		obj_t BgL_pointedzd2tozd2by1059z00_497, obj_t BgL_tvector1060z00_498,
		obj_t BgL_location1061z00_499, obj_t BgL_importzd2location1062zd2_500,
		obj_t BgL_occurrence1063z00_501, obj_t BgL_itemzd2type1064zd2_502)
	{
		{	/* Tvector/tvector.scm 25 */
			{	/* Tvector/tvector.scm 25 */
				bool_t BgL_initzf31055zf3_545;
				bool_t BgL_magiczf31056zf3_546;
				int BgL_occurrence1063z00_547;

				BgL_initzf31055zf3_545 = CBOOL(BgL_initzf31055zf3_493);
				BgL_magiczf31056zf3_546 = CBOOL(BgL_magiczf31056zf3_494);
				BgL_occurrence1063z00_547 = CINT(BgL_occurrence1063z00_501);
				{	/* Tvector/tvector.scm 25 */
					BgL_typez00_bglt BgL_new1081z00_549;

					{	/* Tvector/tvector.scm 25 */
						BgL_typez00_bglt BgL_tmp1079z00_550;
						BgL_tvecz00_bglt BgL_wide1080z00_551;

						{
							BgL_typez00_bglt BgL_auxz00_1019;

							{	/* Tvector/tvector.scm 25 */
								BgL_typez00_bglt BgL_new1078z00_552;

								BgL_new1078z00_552 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Tvector/tvector.scm 25 */
									long BgL_arg1177z00_553;

									{	/* Tvector/tvector.scm 25 */
										long BgL_res1224z00_554;

										BgL_res1224z00_554 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1177z00_553 = BgL_res1224z00_554;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1078z00_552),
										BgL_arg1177z00_553);
								}
								{	/* Tvector/tvector.scm 25 */
									BgL_objectz00_bglt BgL_tmpz00_1024;

									BgL_tmpz00_1024 = ((BgL_objectz00_bglt) BgL_new1078z00_552);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1024, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1078z00_552);
								BgL_auxz00_1019 = BgL_new1078z00_552;
							}
							BgL_tmp1079z00_550 = ((BgL_typez00_bglt) BgL_auxz00_1019);
						}
						BgL_wide1080z00_551 =
							((BgL_tvecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_tvecz00_bgl))));
						{	/* Tvector/tvector.scm 25 */
							obj_t BgL_auxz00_1032;
							BgL_objectz00_bglt BgL_tmpz00_1030;

							BgL_auxz00_1032 = ((obj_t) BgL_wide1080z00_551);
							BgL_tmpz00_1030 = ((BgL_objectz00_bglt) BgL_tmp1079z00_550);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1030, BgL_auxz00_1032);
						}
						((BgL_objectz00_bglt) BgL_tmp1079z00_550);
						{	/* Tvector/tvector.scm 25 */
							long BgL_arg1176z00_555;

							{	/* Tvector/tvector.scm 25 */
								long BgL_res1225z00_556;

								BgL_res1225z00_556 =
									BGL_CLASS_INDEX(BGl_tvecz00zztvector_tvectorz00);
								BgL_arg1176z00_555 = BgL_res1225z00_556;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1079z00_550), BgL_arg1176z00_555);
						}
						BgL_new1081z00_549 = ((BgL_typez00_bglt) BgL_tmp1079z00_550);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1081z00_549)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1049z00_487)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_namez00) =
						((obj_t) BgL_name1050z00_488), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1051za7_489), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_classz00) =
						((obj_t) BgL_class1052z00_490), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1053zd2_491), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_parentsz00) =
						((obj_t) BgL_parents1054z00_492), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31055zf3_545), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31056zf3_546), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_z42z42) =
						((obj_t) BgL_z421057z42_495), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_aliasz00) =
						((obj_t) BgL_alias1058z00_496), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1059z00_497), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1060z00_498), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_locationz00) =
						((obj_t) BgL_location1061z00_499), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1062zd2_500), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1081z00_549)))->BgL_occurrencez00) =
						((int) BgL_occurrence1063z00_547), BUNSPEC);
					{
						BgL_tvecz00_bglt BgL_auxz00_1071;

						{
							obj_t BgL_auxz00_1072;

							{	/* Tvector/tvector.scm 25 */
								BgL_objectz00_bglt BgL_tmpz00_1073;

								BgL_tmpz00_1073 = ((BgL_objectz00_bglt) BgL_new1081z00_549);
								BgL_auxz00_1072 = BGL_OBJECT_WIDENING(BgL_tmpz00_1073);
							}
							BgL_auxz00_1071 = ((BgL_tvecz00_bglt) BgL_auxz00_1072);
						}
						((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_1071))->
								BgL_itemzd2typezd2) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BgL_itemzd2type1064zd2_502)), BUNSPEC);
					}
					return BgL_new1081z00_549;
				}
			}
		}

	}



/* &lambda1210 */
	obj_t BGl_z62lambda1210z62zztvector_tvectorz00(obj_t BgL_envz00_503,
		obj_t BgL_oz00_504, obj_t BgL_vz00_505)
	{
		{	/* Tvector/tvector.scm 25 */
			{
				BgL_tvecz00_bglt BgL_auxz00_1079;

				{
					obj_t BgL_auxz00_1080;

					{	/* Tvector/tvector.scm 25 */
						BgL_objectz00_bglt BgL_tmpz00_1081;

						BgL_tmpz00_1081 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_504));
						BgL_auxz00_1080 = BGL_OBJECT_WIDENING(BgL_tmpz00_1081);
					}
					BgL_auxz00_1079 = ((BgL_tvecz00_bglt) BgL_auxz00_1080);
				}
				return
					((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_1079))->BgL_itemzd2typezd2) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_vz00_505)), BUNSPEC);
			}
		}

	}



/* &lambda1209 */
	BgL_typez00_bglt BGl_z62lambda1209z62zztvector_tvectorz00(obj_t
		BgL_envz00_506, obj_t BgL_oz00_507)
	{
		{	/* Tvector/tvector.scm 25 */
			{
				BgL_tvecz00_bglt BgL_auxz00_1088;

				{
					obj_t BgL_auxz00_1089;

					{	/* Tvector/tvector.scm 25 */
						BgL_objectz00_bglt BgL_tmpz00_1090;

						BgL_tmpz00_1090 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_507));
						BgL_auxz00_1089 = BGL_OBJECT_WIDENING(BgL_tmpz00_1090);
					}
					BgL_auxz00_1088 = ((BgL_tvecz00_bglt) BgL_auxz00_1089);
				}
				return
					(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_1088))->BgL_itemzd2typezd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztvector_tvectorz00()
	{
		{	/* Tvector/tvector.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1246z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1246z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1246z00zztvector_tvectorz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1246z00zztvector_tvectorz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1246z00zztvector_tvectorz00));
		}

	}

#ifdef __cplusplus
}
#endif
