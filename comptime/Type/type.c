/*===========================================================================*/
/*   (Type/type.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Type/type.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_typezd2aliaszd2zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_typezd2parentszd2zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62typezd2namezd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62typezd2aliaszb0zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2locationzd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2coercezd2toz00zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2coercezd2tozd2setz12zc0zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31301ze3ze5zztype_typez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2z42z90zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31124ze3ze5zztype_typez00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztype_typez00();
	BGL_EXPORTED_DECL obj_t BGl_typezd2idzd2zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2importzd2locationzd2setz12zc0zztype_typez00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2locationzd2zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2magiczf3z21zztype_typez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62makezd2typezb0zztype_typez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2classzd2zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_methodzd2initzd2zztype_typez00();
	static obj_t BGl_z62typezd2magiczf3zd2setz12z83zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31219ze3ze5zztype_typez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62typezd2classzb0zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2aliaszd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31148ze3ze5zztype_typez00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_foreignzd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62typezd2parentszb0zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2tvectorzd2zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31271ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31255ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2siza7ezd2setz12zd7zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1217z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1218z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1226z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1227z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezd2magiczf3z43zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31169ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2initzf3zd2setz12z83zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1243z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1244z62zztype_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2classzd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62lambda1253z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1254z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62typezf3z91zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1269z62zztype_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1270z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztype_typez00();
	static obj_t BGl_z62lambda1277z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1278z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31294ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62lambda1285z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1286z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31279ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62lambda1292z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1293z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1299z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2parentszd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62typezd2tvectorzd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_typezd2occurrencezd2zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62typezd2coercezd2toz62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2tvectorzb0zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2locationzb0zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2pointedzd2tozd2byzb0zztype_typez00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztype_typez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2pointedzd2tozd2byzd2setz12z12zztype_typez00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62foreignzd2typezf3z43zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2namezb0zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2occurrencezd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62getzd2aliasedzd2typez62zztype_typez00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zztype_typez00();
	static obj_t BGl_z62zc3z04anonymousza31131ze3ze5zztype_typez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2occurrencezd2setz12z12zztype_typez00(BgL_typez00_bglt, int);
	static obj_t BGl_z62typezd2importzd2locationzd2setz12za2zztype_typez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2magiczf3zd2setz12ze1zztype_typez00(BgL_typez00_bglt, bool_t);
	static obj_t BGl_z62zc3z04anonymousza31310ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_genericzd2initzd2zztype_typez00();
	static obj_t BGl_z62typezd2importzd2locationz62zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_typezd2namezd2zztype_typez00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2namezd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2importzd2locationz00zztype_typez00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_typez00zztype_typez00 = BUNSPEC;
	static obj_t BGl_z62typezd2occurrencezd2incr1071z62zztype_typez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62bigloozd2typezf3z43zztype_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2parentszd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31245ze3ze5zztype_typez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2tvectorzd2setz12z12zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62typezd2aliaszd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62typezd2occurrencezd2incrementz12z70zztype_typez00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62lambda1118z62zztype_typez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2pointedzd2tozd2byzd2zztype_typez00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1122z62zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2siza7ez17zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1129z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2z42zf2zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1130z62zztype_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_typezf3zf3zztype_typez00(obj_t);
	static obj_t BGl_z62lambda1300z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1146z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1308z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1147z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1309z62zztype_typez00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62typezd2nilzb0zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2pointedzd2tozd2byzd2setz12z70zztype_typez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2initzf3zd2setz12ze1zztype_typez00(BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_EXPORTED_DECL obj_t BGl_typezd2siza7ez75zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda1167z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1168z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31178ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2classzd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62typezd2locationzd2setz12z70zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1176z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1177z62zztype_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2z42zd2setz12z50zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_cnstzd2initzd2zztype_typez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztype_typez00();
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2siza7ezd2setz12zb5zztype_typez00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zztype_typez00();
	static obj_t BGl_z62lambda1195z62zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1196z62zztype_typez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31197ze3ze5zztype_typez00(obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62zc3z04anonymousza31287ze3ze5zztype_typez00(obj_t);
	static obj_t BGl_z62typezd2idzb0zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2initzf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62typezd2initzf3z43zztype_typez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00();
	static obj_t BGl_z62typezd2coercezd2tozd2setz12za2zztype_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62typezd2occurrencezb0zztype_typez00(obj_t, obj_t);
	static obj_t BGl_z62typezd2z42zd2setz12z32zztype_typez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt);
	static obj_t __cnst[24];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2initzf3zd2setz12zd2envz33zztype_typez00,
		BgL_bgl_za762typeza7d2initza7f1383za7,
		BGl_z62typezd2initzf3zd2setz12z83zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1329z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1384za7,
		BGl_z62zc3z04anonymousza31131ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2aliaszd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2aliasza71385za7, BGl_z62typezd2aliaszb0zztype_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1330z00zztype_typez00,
		BgL_bgl_za762lambda1130za7621386z00, BGl_z62lambda1130z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1331z00zztype_typez00,
		BgL_bgl_za762lambda1129za7621387z00, BGl_z62lambda1129z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1332z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1388za7,
		BGl_z62zc3z04anonymousza31148ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1333z00zztype_typez00,
		BgL_bgl_za762lambda1147za7621389z00, BGl_z62lambda1147z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1334z00zztype_typez00,
		BgL_bgl_za762lambda1146za7621390z00, BGl_z62lambda1146z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1335z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1391za7,
		BGl_z62zc3z04anonymousza31169ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1336z00zztype_typez00,
		BgL_bgl_za762lambda1168za7621392z00, BGl_z62lambda1168z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1337z00zztype_typez00,
		BgL_bgl_za762lambda1167za7621393z00, BGl_z62lambda1167z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1338z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1394za7,
		BGl_z62zc3z04anonymousza31178ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1339z00zztype_typez00,
		BgL_bgl_za762lambda1177za7621395z00, BGl_z62lambda1177z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1340z00zztype_typez00,
		BgL_bgl_za762lambda1176za7621396z00, BGl_z62lambda1176z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1341z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1397za7,
		BGl_z62zc3z04anonymousza31197ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1342z00zztype_typez00,
		BgL_bgl_za762lambda1196za7621398z00, BGl_z62lambda1196z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1343z00zztype_typez00,
		BgL_bgl_za762lambda1195za7621399z00, BGl_z62lambda1195z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1344z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1400za7,
		BGl_z62zc3z04anonymousza31219ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1345z00zztype_typez00,
		BgL_bgl_za762lambda1218za7621401z00, BGl_z62lambda1218z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1346z00zztype_typez00,
		BgL_bgl_za762lambda1217za7621402z00, BGl_z62lambda1217z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1347z00zztype_typez00,
		BgL_bgl_za762lambda1227za7621403z00, BGl_z62lambda1227z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1348z00zztype_typez00,
		BgL_bgl_za762lambda1226za7621404z00, BGl_z62lambda1226z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1349z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1405za7,
		BGl_z62zc3z04anonymousza31245ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1350z00zztype_typez00,
		BgL_bgl_za762lambda1244za7621406z00, BGl_z62lambda1244z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1351z00zztype_typez00,
		BgL_bgl_za762lambda1243za7621407z00, BGl_z62lambda1243z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1352z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1408za7,
		BGl_z62zc3z04anonymousza31255ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1353z00zztype_typez00,
		BgL_bgl_za762lambda1254za7621409z00, BGl_z62lambda1254z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1354z00zztype_typez00,
		BgL_bgl_za762lambda1253za7621410z00, BGl_z62lambda1253z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1355z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1411za7,
		BGl_z62zc3z04anonymousza31271ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1356z00zztype_typez00,
		BgL_bgl_za762lambda1270za7621412z00, BGl_z62lambda1270z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1357z00zztype_typez00,
		BgL_bgl_za762lambda1269za7621413z00, BGl_z62lambda1269z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1358z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1414za7,
		BGl_z62zc3z04anonymousza31279ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1359z00zztype_typez00,
		BgL_bgl_za762lambda1278za7621415z00, BGl_z62lambda1278z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2namezd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2nameza7b1416za7, BGl_z62typezd2namezb0zztype_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2tvectorzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2tvecto1417z00, BGl_z62typezd2tvectorzb0zztype_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1360z00zztype_typez00,
		BgL_bgl_za762lambda1277za7621418z00, BGl_z62lambda1277z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1361z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1419za7,
		BGl_z62zc3z04anonymousza31287ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1362z00zztype_typez00,
		BgL_bgl_za762lambda1286za7621420z00, BGl_z62lambda1286z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1363z00zztype_typez00,
		BgL_bgl_za762lambda1285za7621421z00, BGl_z62lambda1285z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1364z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1422za7,
		BGl_z62zc3z04anonymousza31294ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1365z00zztype_typez00,
		BgL_bgl_za762lambda1293za7621423z00, BGl_z62lambda1293z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1366z00zztype_typez00,
		BgL_bgl_za762lambda1292za7621424z00, BGl_z62lambda1292z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1367z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1425za7,
		BGl_z62zc3z04anonymousza31301ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1368z00zztype_typez00,
		BgL_bgl_za762lambda1300za7621426z00, BGl_z62lambda1300z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1369z00zztype_typez00,
		BgL_bgl_za762lambda1299za7621427z00, BGl_z62lambda1299z62zztype_typez00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2importzd2locationzd2envzd2zztype_typez00,
		BgL_bgl_za762typeza7d2import1428z00,
		BGl_z62typezd2importzd2locationz62zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1370z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1429za7,
		BGl_z62zc3z04anonymousza31310ze3ze5zztype_typez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1371z00zztype_typez00,
		BgL_bgl_za762lambda1309za7621430z00, BGl_z62lambda1309z62zztype_typez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1372z00zztype_typez00,
		BgL_bgl_za762lambda1308za7621431z00, BGl_z62lambda1308z62zztype_typez00, 0L,
		BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1373z00zztype_typez00,
		BgL_bgl_za762za7c3za704anonymo1432za7,
		BGl_z62zc3z04anonymousza31124ze3ze5zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1374z00zztype_typez00,
		BgL_bgl_za762lambda1122za7621433z00, BGl_z62lambda1122z62zztype_typez00, 0L,
		BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1375z00zztype_typez00,
		BgL_bgl_za762lambda1118za7621434z00, BGl_z62lambda1118z62zztype_typez00, 0L,
		BUNSPEC, 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1376z00zztype_typez00,
		BgL_bgl_za762typeza7d2occurr1435z00,
		BGl_z62typezd2occurrencezd2incr1071z62zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2locationzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2locati1436z00,
		BGl_z62typezd2locationzb0zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2z42zd2setz12zd2envz82zztype_typez00,
		BgL_bgl_za762typeza7d2za742za7d21437z00,
		BGl_z62typezd2z42zd2setz12z32zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2coercezd2tozd2setz12zd2envz12zztype_typez00,
		BgL_bgl_za762typeza7d2coerce1438z00,
		BGl_z62typezd2coercezd2tozd2setz12za2zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2occurrencezd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2occurr1439z00,
		BGl_z62typezd2occurrencezd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2tvectorzd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2tvecto1440z00,
		BGl_z62typezd2tvectorzd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_foreignzd2typezf3zd2envzf3zztype_typez00,
		BgL_bgl_za762foreignza7d2typ1441z00,
		BGl_z62foreignzd2typezf3z43zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2parentszd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2parent1442z00, BGl_z62typezd2parentszb0zztype_typez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2importzd2locationzd2setz12zd2envz12zztype_typez00,
		BgL_bgl_za762typeza7d2import1443z00,
		BGl_z62typezd2importzd2locationzd2setz12za2zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2pointedzd2tozd2byzd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2pointe1444z00,
		BGl_z62typezd2pointedzd2tozd2byzd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezf3zd2envz21zztype_typez00,
		BgL_bgl_za762typeza7f3za791za7za7t1445za7, BGl_z62typezf3z91zztype_typez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2idzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2idza7b0za71446z00, BGl_z62typezd2idzb0zztype_typez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2occurr1447z00,
		BGl_z62typezd2occurrencezd2incrementz12z70zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_getzd2aliasedzd2typezd2envzd2zztype_typez00,
		BgL_bgl_za762getza7d2aliased1448z00,
		BGl_z62getzd2aliasedzd2typez62zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2occurrencezd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2occurr1449z00,
		BGl_z62typezd2occurrencezb0zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2initzf3zd2envzf3zztype_typez00,
		BgL_bgl_za762typeza7d2initza7f1450za7,
		BGl_z62typezd2initzf3z43zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2typezd2envz00zztype_typez00,
		BgL_bgl_za762makeza7d2typeza7b1451za7, BGl_z62makezd2typezb0zztype_typez00,
		0L, BUNSPEC, 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2coercezd2tozd2envzd2zztype_typez00,
		BgL_bgl_za762typeza7d2coerce1452z00,
		BGl_z62typezd2coercezd2toz62zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2nilzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2nilza7b01453za7, BGl_z62typezd2nilzb0zztype_typez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2typezf3zd2envzf3zztype_typez00,
		BgL_bgl_za762biglooza7d2type1454z00,
		BGl_z62bigloozd2typezf3z43zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2parentszd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2parent1455z00,
		BGl_z62typezd2parentszd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2magiczf3zd2envzf3zztype_typez00,
		BgL_bgl_za762typeza7d2magicza71456za7,
		BGl_z62typezd2magiczf3z43zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2siza7ezd2setz12zd2envz67zztype_typez00,
		BgL_bgl_za762typeza7d2siza7a7e1457za7,
		BGl_z62typezd2siza7ezd2setz12zd7zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1377z00zztype_typez00,
		BgL_bgl_string1377za700za7za7t1458za7, "type-occurrence-incr1071", 24);
	      DEFINE_STRING(BGl_string1378z00zztype_typez00,
		BgL_bgl_string1378za700za7za7t1459za7, "type_type", 9);
	      DEFINE_STRING(BGl_string1379z00zztype_typez00,
		BgL_bgl_string1379za700za7za7t1460za7,
		"_ type_type type int occurrence import-location location tvector pointed-to-by alias $ magic? bool init? parents coerce-to class size obj name symbol id C bigloo ",
		162);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2magiczf3zd2setz12zd2envz33zztype_typez00,
		BgL_bgl_za762typeza7d2magicza71461za7,
		BGl_z62typezd2magiczf3zd2setz12z83zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2locationzd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2locati1462z00,
		BGl_z62typezd2locationzd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2namezd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2nameza7d1463za7,
		BGl_z62typezd2namezd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2classzd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2classza71464za7,
		BGl_z62typezd2classzd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2z42zd2envz42zztype_typez00,
		BgL_bgl_za762typeza7d2za742za7f21465z00, BGl_z62typezd2z42zf2zztype_typez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2pointedzd2tozd2byzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2pointe1466z00,
		BGl_z62typezd2pointedzd2tozd2byzb0zztype_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2aliaszd2setz12zd2envzc0zztype_typez00,
		BgL_bgl_za762typeza7d2aliasza71467za7,
		BGl_z62typezd2aliaszd2setz12z70zztype_typez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2siza7ezd2envza7zztype_typez00,
		BgL_bgl_za762typeza7d2siza7a7e1468za7,
		BGl_z62typezd2siza7ez17zztype_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2classzd2envz00zztype_typez00,
		BgL_bgl_za762typeza7d2classza71469za7, BGl_z62typezd2classzb0zztype_typez00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztype_typez00));
		     ADD_ROOT((void *) (&BGl_typez00zztype_typez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long
		BgL_checksumz00_727, char *BgL_fromz00_728)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztype_typez00))
				{
					BGl_requirezd2initializa7ationz75zztype_typez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztype_typez00();
					BGl_libraryzd2moduleszd2initz00zztype_typez00();
					BGl_cnstzd2initzd2zztype_typez00();
					BGl_importedzd2moduleszd2initz00zztype_typez00();
					BGl_objectzd2initzd2zztype_typez00();
					BGl_genericzd2initzd2zztype_typez00();
					return BGl_toplevelzd2initzd2zztype_typez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "type_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "type_type");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"type_type");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"type_type");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "type_type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"type_type");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"type_type");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			{	/* Type/type.scm 15 */
				obj_t BgL_cportz00_663;

				{	/* Type/type.scm 15 */
					obj_t BgL_stringz00_671;

					BgL_stringz00_671 = BGl_string1379z00zztype_typez00;
					{	/* Type/type.scm 15 */
						obj_t BgL_startz00_672;

						BgL_startz00_672 = BINT(((long) 0));
						{	/* Type/type.scm 15 */
							obj_t BgL_endz00_673;

							BgL_endz00_673 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_671)));
							{	/* Type/type.scm 15 */

								BgL_cportz00_663 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_671, BgL_startz00_672, BgL_endz00_673);
				}}}}
				{
					long BgL_iz00_664;

					BgL_iz00_664 = ((long) 23);
				BgL_loopz00_665:
					if ((BgL_iz00_664 == ((long) -1)))
						{	/* Type/type.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Type/type.scm 15 */
							{	/* Type/type.scm 15 */
								obj_t BgL_arg1381z00_667;

								{	/* Type/type.scm 15 */

									{	/* Type/type.scm 15 */
										obj_t BgL_locationz00_669;

										BgL_locationz00_669 = BBOOL(((bool_t) 0));
										{	/* Type/type.scm 15 */

											BgL_arg1381z00_667 =
												BGl_readz00zz__readerz00(BgL_cportz00_663,
												BgL_locationz00_669);
										}
									}
								}
								{	/* Type/type.scm 15 */
									int BgL_tmpz00_755;

									BgL_tmpz00_755 = (int) (BgL_iz00_664);
									CNST_TABLE_SET(BgL_tmpz00_755, BgL_arg1381z00_667);
							}}
							{	/* Type/type.scm 15 */
								int BgL_auxz00_670;

								BgL_auxz00_670 = (int) ((BgL_iz00_664 - ((long) 1)));
								{
									long BgL_iz00_760;

									BgL_iz00_760 = (long) (BgL_auxz00_670);
									BgL_iz00_664 = BgL_iz00_760;
									goto BgL_loopz00_665;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			return BUNSPEC;
		}

	}



/* make-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2typezd2zztype_typez00(obj_t
		BgL_id1030z00_3, obj_t BgL_name1031z00_4, obj_t BgL_siza7e1032za7_5,
		obj_t BgL_class1033z00_6, obj_t BgL_coercezd2to1034zd2_7,
		obj_t BgL_parents1035z00_8, bool_t BgL_initzf31036zf3_9,
		bool_t BgL_magiczf31037zf3_10, obj_t BgL_z421038z42_11,
		obj_t BgL_alias1039z00_12, obj_t BgL_pointedzd2tozd2by1040z00_13,
		obj_t BgL_tvector1041z00_14, obj_t BgL_location1042z00_15,
		obj_t BgL_importzd2location1043zd2_16, int BgL_occurrence1044z00_17)
	{
		{	/* Type/type.sch 50 */
			{	/* Type/type.sch 50 */
				BgL_typez00_bglt BgL_new1065z00_676;

				{	/* Type/type.sch 50 */
					BgL_typez00_bglt BgL_new1064z00_677;

					BgL_new1064z00_677 =
						((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_typez00_bgl))));
					{	/* Type/type.sch 50 */
						long BgL_arg1095z00_678;

						{	/* Type/type.sch 50 */
							long BgL_res1313z00_679;

							BgL_res1313z00_679 = BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
							BgL_arg1095z00_678 = BgL_res1313z00_679;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1064z00_677), BgL_arg1095z00_678);
					}
					{	/* Type/type.sch 50 */
						BgL_objectz00_bglt BgL_tmpz00_767;

						BgL_tmpz00_767 = ((BgL_objectz00_bglt) BgL_new1064z00_677);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_767, BFALSE);
					}
					((BgL_objectz00_bglt) BgL_new1064z00_677);
					BgL_new1065z00_676 = BgL_new1064z00_677;
				}
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_idz00) =
					((obj_t) BgL_id1030z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_namez00) =
					((obj_t) BgL_name1031z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1032za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_classz00) =
					((obj_t) BgL_class1033z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->
						BgL_coercezd2tozd2) = ((obj_t) BgL_coercezd2to1034zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_parentsz00) =
					((obj_t) BgL_parents1035z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31036zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31037zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_z42z42) =
					((obj_t) BgL_z421038z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_aliasz00) =
					((obj_t) BgL_alias1039z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->
						BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1040z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1041z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_locationz00) =
					((obj_t) BgL_location1042z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->
						BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1043zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(BgL_new1065z00_676))->BgL_occurrencez00) =
					((int) BgL_occurrence1044z00_17), BUNSPEC);
				return BgL_new1065z00_676;
			}
		}

	}



/* &make-type */
	BgL_typez00_bglt BGl_z62makezd2typezb0zztype_typez00(obj_t BgL_envz00_406,
		obj_t BgL_id1030z00_407, obj_t BgL_name1031z00_408,
		obj_t BgL_siza7e1032za7_409, obj_t BgL_class1033z00_410,
		obj_t BgL_coercezd2to1034zd2_411, obj_t BgL_parents1035z00_412,
		obj_t BgL_initzf31036zf3_413, obj_t BgL_magiczf31037zf3_414,
		obj_t BgL_z421038z42_415, obj_t BgL_alias1039z00_416,
		obj_t BgL_pointedzd2tozd2by1040z00_417, obj_t BgL_tvector1041z00_418,
		obj_t BgL_location1042z00_419, obj_t BgL_importzd2location1043zd2_420,
		obj_t BgL_occurrence1044z00_421)
	{
		{	/* Type/type.sch 50 */
			return
				BGl_makezd2typezd2zztype_typez00(BgL_id1030z00_407, BgL_name1031z00_408,
				BgL_siza7e1032za7_409, BgL_class1033z00_410, BgL_coercezd2to1034zd2_411,
				BgL_parents1035z00_412, CBOOL(BgL_initzf31036zf3_413),
				CBOOL(BgL_magiczf31037zf3_414), BgL_z421038z42_415,
				BgL_alias1039z00_416, BgL_pointedzd2tozd2by1040z00_417,
				BgL_tvector1041z00_418, BgL_location1042z00_419,
				BgL_importzd2location1043zd2_420, CINT(BgL_occurrence1044z00_421));
		}

	}



/* type? */
	BGL_EXPORTED_DEF bool_t BGl_typezf3zf3zztype_typez00(obj_t BgL_objz00_18)
	{
		{	/* Type/type.sch 51 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_18, BGl_typez00zztype_typez00);
		}

	}



/* &type? */
	obj_t BGl_z62typezf3z91zztype_typez00(obj_t BgL_envz00_422,
		obj_t BgL_objz00_423)
	{
		{	/* Type/type.sch 51 */
			return BBOOL(BGl_typezf3zf3zztype_typez00(BgL_objz00_423));
		}

	}



/* type-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_typezd2nilzd2zztype_typez00()
	{
		{	/* Type/type.sch 52 */
			{	/* Type/type.sch 52 */
				obj_t BgL_classz00_330;

				BgL_classz00_330 = BGl_typez00zztype_typez00;
				{	/* Type/type.sch 52 */
					obj_t BgL__ortest_1106z00_331;

					BgL__ortest_1106z00_331 = BGL_CLASS_NIL(BgL_classz00_330);
					if (CBOOL(BgL__ortest_1106z00_331))
						{	/* Type/type.sch 52 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_331);
						}
					else
						{	/* Type/type.sch 52 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_330));
						}
				}
			}
		}

	}



/* &type-nil */
	BgL_typez00_bglt BGl_z62typezd2nilzb0zztype_typez00(obj_t BgL_envz00_424)
	{
		{	/* Type/type.sch 52 */
			return BGl_typezd2nilzd2zztype_typez00();
		}

	}



/* type-occurrence */
	BGL_EXPORTED_DEF int BGl_typezd2occurrencezd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_19)
	{
		{	/* Type/type.sch 53 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_19))->BgL_occurrencez00);
		}

	}



/* &type-occurrence */
	obj_t BGl_z62typezd2occurrencezb0zztype_typez00(obj_t BgL_envz00_425,
		obj_t BgL_oz00_426)
	{
		{	/* Type/type.sch 53 */
			return
				BINT(BGl_typezd2occurrencezd2zztype_typez00(
					((BgL_typez00_bglt) BgL_oz00_426)));
		}

	}



/* type-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2occurrencezd2setz12z12zztype_typez00(BgL_typez00_bglt
		BgL_oz00_20, int BgL_vz00_21)
	{
		{	/* Type/type.sch 54 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_20))->BgL_occurrencez00) =
				((int) BgL_vz00_21), BUNSPEC);
		}

	}



/* &type-occurrence-set! */
	obj_t BGl_z62typezd2occurrencezd2setz12z70zztype_typez00(obj_t BgL_envz00_427,
		obj_t BgL_oz00_428, obj_t BgL_vz00_429)
	{
		{	/* Type/type.sch 54 */
			return
				BGl_typezd2occurrencezd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_428), CINT(BgL_vz00_429));
		}

	}



/* type-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2importzd2locationz00zztype_typez00(BgL_typez00_bglt BgL_oz00_22)
	{
		{	/* Type/type.sch 55 */
			return
				(((BgL_typez00_bglt) COBJECT(BgL_oz00_22))->BgL_importzd2locationzd2);
		}

	}



/* &type-import-location */
	obj_t BGl_z62typezd2importzd2locationz62zztype_typez00(obj_t BgL_envz00_430,
		obj_t BgL_oz00_431)
	{
		{	/* Type/type.sch 55 */
			return
				BGl_typezd2importzd2locationz00zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_431));
		}

	}



/* type-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2importzd2locationzd2setz12zc0zztype_typez00(BgL_typez00_bglt
		BgL_oz00_23, obj_t BgL_vz00_24)
	{
		{	/* Type/type.sch 56 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_23))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &type-import-location-set! */
	obj_t BGl_z62typezd2importzd2locationzd2setz12za2zztype_typez00(obj_t
		BgL_envz00_432, obj_t BgL_oz00_433, obj_t BgL_vz00_434)
	{
		{	/* Type/type.sch 56 */
			return
				BGl_typezd2importzd2locationzd2setz12zc0zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_433), BgL_vz00_434);
		}

	}



/* type-location */
	BGL_EXPORTED_DEF obj_t BGl_typezd2locationzd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_25)
	{
		{	/* Type/type.sch 57 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_25))->BgL_locationz00);
		}

	}



/* &type-location */
	obj_t BGl_z62typezd2locationzb0zztype_typez00(obj_t BgL_envz00_435,
		obj_t BgL_oz00_436)
	{
		{	/* Type/type.sch 57 */
			return
				BGl_typezd2locationzd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_436));
		}

	}



/* type-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2locationzd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_26,
		obj_t BgL_vz00_27)
	{
		{	/* Type/type.sch 58 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_26))->BgL_locationz00) =
				((obj_t) BgL_vz00_27), BUNSPEC);
		}

	}



/* &type-location-set! */
	obj_t BGl_z62typezd2locationzd2setz12z70zztype_typez00(obj_t BgL_envz00_437,
		obj_t BgL_oz00_438, obj_t BgL_vz00_439)
	{
		{	/* Type/type.sch 58 */
			return
				BGl_typezd2locationzd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_438), BgL_vz00_439);
		}

	}



/* type-tvector */
	BGL_EXPORTED_DEF obj_t BGl_typezd2tvectorzd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_28)
	{
		{	/* Type/type.sch 59 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_28))->BgL_tvectorz00);
		}

	}



/* &type-tvector */
	obj_t BGl_z62typezd2tvectorzb0zztype_typez00(obj_t BgL_envz00_440,
		obj_t BgL_oz00_441)
	{
		{	/* Type/type.sch 59 */
			return
				BGl_typezd2tvectorzd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_441));
		}

	}



/* type-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2tvectorzd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_29,
		obj_t BgL_vz00_30)
	{
		{	/* Type/type.sch 60 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_29))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &type-tvector-set! */
	obj_t BGl_z62typezd2tvectorzd2setz12z70zztype_typez00(obj_t BgL_envz00_442,
		obj_t BgL_oz00_443, obj_t BgL_vz00_444)
	{
		{	/* Type/type.sch 60 */
			return
				BGl_typezd2tvectorzd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_443), BgL_vz00_444);
		}

	}



/* type-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2pointedzd2tozd2byzd2zztype_typez00(BgL_typez00_bglt BgL_oz00_31)
	{
		{	/* Type/type.sch 61 */
			return
				(((BgL_typez00_bglt) COBJECT(BgL_oz00_31))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &type-pointed-to-by */
	obj_t BGl_z62typezd2pointedzd2tozd2byzb0zztype_typez00(obj_t BgL_envz00_445,
		obj_t BgL_oz00_446)
	{
		{	/* Type/type.sch 61 */
			return
				BGl_typezd2pointedzd2tozd2byzd2zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_446));
		}

	}



/* type-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2pointedzd2tozd2byzd2setz12z12zztype_typez00(BgL_typez00_bglt
		BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* Type/type.sch 62 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_32))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &type-pointed-to-by-set! */
	obj_t BGl_z62typezd2pointedzd2tozd2byzd2setz12z70zztype_typez00(obj_t
		BgL_envz00_447, obj_t BgL_oz00_448, obj_t BgL_vz00_449)
	{
		{	/* Type/type.sch 62 */
			return
				BGl_typezd2pointedzd2tozd2byzd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_448), BgL_vz00_449);
		}

	}



/* type-alias */
	BGL_EXPORTED_DEF obj_t BGl_typezd2aliaszd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_34)
	{
		{	/* Type/type.sch 63 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_34))->BgL_aliasz00);
		}

	}



/* &type-alias */
	obj_t BGl_z62typezd2aliaszb0zztype_typez00(obj_t BgL_envz00_450,
		obj_t BgL_oz00_451)
	{
		{	/* Type/type.sch 63 */
			return
				BGl_typezd2aliaszd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_451));
		}

	}



/* type-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2aliaszd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_35,
		obj_t BgL_vz00_36)
	{
		{	/* Type/type.sch 64 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_35))->BgL_aliasz00) =
				((obj_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &type-alias-set! */
	obj_t BGl_z62typezd2aliaszd2setz12z70zztype_typez00(obj_t BgL_envz00_452,
		obj_t BgL_oz00_453, obj_t BgL_vz00_454)
	{
		{	/* Type/type.sch 64 */
			return
				BGl_typezd2aliaszd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_453), BgL_vz00_454);
		}

	}



/* type-$ */
	BGL_EXPORTED_DEF obj_t BGl_typezd2z42z90zztype_typez00(BgL_typez00_bglt
		BgL_oz00_37)
	{
		{	/* Type/type.sch 65 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_37))->BgL_z42z42);
		}

	}



/* &type-$ */
	obj_t BGl_z62typezd2z42zf2zztype_typez00(obj_t BgL_envz00_455,
		obj_t BgL_oz00_456)
	{
		{	/* Type/type.sch 65 */
			return BGl_typezd2z42z90zztype_typez00(((BgL_typez00_bglt) BgL_oz00_456));
		}

	}



/* type-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2z42zd2setz12z50zztype_typez00(BgL_typez00_bglt BgL_oz00_38,
		obj_t BgL_vz00_39)
	{
		{	/* Type/type.sch 66 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_38))->BgL_z42z42) =
				((obj_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &type-$-set! */
	obj_t BGl_z62typezd2z42zd2setz12z32zztype_typez00(obj_t BgL_envz00_457,
		obj_t BgL_oz00_458, obj_t BgL_vz00_459)
	{
		{	/* Type/type.sch 66 */
			return
				BGl_typezd2z42zd2setz12z50zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_458), BgL_vz00_459);
		}

	}



/* type-magic? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2magiczf3z21zztype_typez00(BgL_typez00_bglt
		BgL_oz00_40)
	{
		{	/* Type/type.sch 67 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_40))->BgL_magiczf3zf3);
		}

	}



/* &type-magic? */
	obj_t BGl_z62typezd2magiczf3z43zztype_typez00(obj_t BgL_envz00_460,
		obj_t BgL_oz00_461)
	{
		{	/* Type/type.sch 67 */
			return
				BBOOL(BGl_typezd2magiczf3z21zztype_typez00(
					((BgL_typez00_bglt) BgL_oz00_461)));
		}

	}



/* type-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2magiczf3zd2setz12ze1zztype_typez00(BgL_typez00_bglt BgL_oz00_41,
		bool_t BgL_vz00_42)
	{
		{	/* Type/type.sch 68 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_41))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &type-magic?-set! */
	obj_t BGl_z62typezd2magiczf3zd2setz12z83zztype_typez00(obj_t BgL_envz00_462,
		obj_t BgL_oz00_463, obj_t BgL_vz00_464)
	{
		{	/* Type/type.sch 68 */
			return
				BGl_typezd2magiczf3zd2setz12ze1zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_463), CBOOL(BgL_vz00_464));
		}

	}



/* type-init? */
	BGL_EXPORTED_DEF bool_t BGl_typezd2initzf3z21zztype_typez00(BgL_typez00_bglt
		BgL_oz00_43)
	{
		{	/* Type/type.sch 69 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_43))->BgL_initzf3zf3);
		}

	}



/* &type-init? */
	obj_t BGl_z62typezd2initzf3z43zztype_typez00(obj_t BgL_envz00_465,
		obj_t BgL_oz00_466)
	{
		{	/* Type/type.sch 69 */
			return
				BBOOL(BGl_typezd2initzf3z21zztype_typez00(
					((BgL_typez00_bglt) BgL_oz00_466)));
		}

	}



/* type-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2initzf3zd2setz12ze1zztype_typez00(BgL_typez00_bglt BgL_oz00_44,
		bool_t BgL_vz00_45)
	{
		{	/* Type/type.sch 70 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_44))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &type-init?-set! */
	obj_t BGl_z62typezd2initzf3zd2setz12z83zztype_typez00(obj_t BgL_envz00_467,
		obj_t BgL_oz00_468, obj_t BgL_vz00_469)
	{
		{	/* Type/type.sch 70 */
			return
				BGl_typezd2initzf3zd2setz12ze1zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_468), CBOOL(BgL_vz00_469));
		}

	}



/* type-parents */
	BGL_EXPORTED_DEF obj_t BGl_typezd2parentszd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_46)
	{
		{	/* Type/type.sch 71 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_46))->BgL_parentsz00);
		}

	}



/* &type-parents */
	obj_t BGl_z62typezd2parentszb0zztype_typez00(obj_t BgL_envz00_470,
		obj_t BgL_oz00_471)
	{
		{	/* Type/type.sch 71 */
			return
				BGl_typezd2parentszd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_471));
		}

	}



/* type-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2parentszd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_47,
		obj_t BgL_vz00_48)
	{
		{	/* Type/type.sch 72 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_47))->BgL_parentsz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &type-parents-set! */
	obj_t BGl_z62typezd2parentszd2setz12z70zztype_typez00(obj_t BgL_envz00_472,
		obj_t BgL_oz00_473, obj_t BgL_vz00_474)
	{
		{	/* Type/type.sch 72 */
			return
				BGl_typezd2parentszd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_473), BgL_vz00_474);
		}

	}



/* type-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2coercezd2toz00zztype_typez00(BgL_typez00_bglt BgL_oz00_49)
	{
		{	/* Type/type.sch 73 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_49))->BgL_coercezd2tozd2);
		}

	}



/* &type-coerce-to */
	obj_t BGl_z62typezd2coercezd2toz62zztype_typez00(obj_t BgL_envz00_475,
		obj_t BgL_oz00_476)
	{
		{	/* Type/type.sch 73 */
			return
				BGl_typezd2coercezd2toz00zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_476));
		}

	}



/* type-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2coercezd2tozd2setz12zc0zztype_typez00(BgL_typez00_bglt
		BgL_oz00_50, obj_t BgL_vz00_51)
	{
		{	/* Type/type.sch 74 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_50))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &type-coerce-to-set! */
	obj_t BGl_z62typezd2coercezd2tozd2setz12za2zztype_typez00(obj_t
		BgL_envz00_477, obj_t BgL_oz00_478, obj_t BgL_vz00_479)
	{
		{	/* Type/type.sch 74 */
			return
				BGl_typezd2coercezd2tozd2setz12zc0zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_478), BgL_vz00_479);
		}

	}



/* type-class */
	BGL_EXPORTED_DEF obj_t BGl_typezd2classzd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_52)
	{
		{	/* Type/type.sch 75 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_52))->BgL_classz00);
		}

	}



/* &type-class */
	obj_t BGl_z62typezd2classzb0zztype_typez00(obj_t BgL_envz00_480,
		obj_t BgL_oz00_481)
	{
		{	/* Type/type.sch 75 */
			return
				BGl_typezd2classzd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_481));
		}

	}



/* type-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2classzd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_53,
		obj_t BgL_vz00_54)
	{
		{	/* Type/type.sch 76 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_53))->BgL_classz00) =
				((obj_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &type-class-set! */
	obj_t BGl_z62typezd2classzd2setz12z70zztype_typez00(obj_t BgL_envz00_482,
		obj_t BgL_oz00_483, obj_t BgL_vz00_484)
	{
		{	/* Type/type.sch 76 */
			return
				BGl_typezd2classzd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_483), BgL_vz00_484);
		}

	}



/* type-size */
	BGL_EXPORTED_DEF obj_t BGl_typezd2siza7ez75zztype_typez00(BgL_typez00_bglt
		BgL_oz00_55)
	{
		{	/* Type/type.sch 77 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_55))->BgL_siza7eza7);
		}

	}



/* &type-size */
	obj_t BGl_z62typezd2siza7ez17zztype_typez00(obj_t BgL_envz00_485,
		obj_t BgL_oz00_486)
	{
		{	/* Type/type.sch 77 */
			return
				BGl_typezd2siza7ez75zztype_typez00(((BgL_typez00_bglt) BgL_oz00_486));
		}

	}



/* type-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2siza7ezd2setz12zb5zztype_typez00(BgL_typez00_bglt BgL_oz00_56,
		obj_t BgL_vz00_57)
	{
		{	/* Type/type.sch 78 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_56))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &type-size-set! */
	obj_t BGl_z62typezd2siza7ezd2setz12zd7zztype_typez00(obj_t BgL_envz00_487,
		obj_t BgL_oz00_488, obj_t BgL_vz00_489)
	{
		{	/* Type/type.sch 78 */
			return
				BGl_typezd2siza7ezd2setz12zb5zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_488), BgL_vz00_489);
		}

	}



/* type-name */
	BGL_EXPORTED_DEF obj_t BGl_typezd2namezd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_58)
	{
		{	/* Type/type.sch 79 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_58))->BgL_namez00);
		}

	}



/* &type-name */
	obj_t BGl_z62typezd2namezb0zztype_typez00(obj_t BgL_envz00_490,
		obj_t BgL_oz00_491)
	{
		{	/* Type/type.sch 79 */
			return
				BGl_typezd2namezd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_491));
		}

	}



/* type-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2namezd2setz12z12zztype_typez00(BgL_typez00_bglt BgL_oz00_59,
		obj_t BgL_vz00_60)
	{
		{	/* Type/type.sch 80 */
			return
				((((BgL_typez00_bglt) COBJECT(BgL_oz00_59))->BgL_namez00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &type-name-set! */
	obj_t BGl_z62typezd2namezd2setz12z70zztype_typez00(obj_t BgL_envz00_492,
		obj_t BgL_oz00_493, obj_t BgL_vz00_494)
	{
		{	/* Type/type.sch 80 */
			return
				BGl_typezd2namezd2setz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_oz00_493), BgL_vz00_494);
		}

	}



/* type-id */
	BGL_EXPORTED_DEF obj_t BGl_typezd2idzd2zztype_typez00(BgL_typez00_bglt
		BgL_oz00_61)
	{
		{	/* Type/type.sch 81 */
			return (((BgL_typez00_bglt) COBJECT(BgL_oz00_61))->BgL_idz00);
		}

	}



/* &type-id */
	obj_t BGl_z62typezd2idzb0zztype_typez00(obj_t BgL_envz00_495,
		obj_t BgL_oz00_496)
	{
		{	/* Type/type.sch 81 */
			return BGl_typezd2idzd2zztype_typez00(((BgL_typez00_bglt) BgL_oz00_496));
		}

	}



/* get-aliased-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_getzd2aliasedzd2typez00zztype_typez00(BgL_typez00_bglt BgL_typez00_64)
	{
		{	/* Type/type.scm 62 */
			{
				obj_t BgL_typez00_80;

				{
					obj_t BgL_auxz00_893;

					BgL_typez00_80 = ((obj_t) BgL_typez00_64);
				BgL_zc3z04anonymousza31096ze3z87_81:
					{	/* Type/type.scm 64 */
						bool_t BgL_test1473z00_894;

						{	/* Type/type.scm 64 */
							obj_t BgL_arg1103z00_85;

							BgL_arg1103z00_85 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_typez00_80)))->BgL_aliasz00);
							BgL_test1473z00_894 =
								BGl_isazf3zf3zz__objectz00(BgL_arg1103z00_85,
								BGl_typez00zztype_typez00);
						}
						if (BgL_test1473z00_894)
							{
								obj_t BgL_typez00_898;

								BgL_typez00_898 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_typez00_80)))->BgL_aliasz00);
								BgL_typez00_80 = BgL_typez00_898;
								goto BgL_zc3z04anonymousza31096ze3z87_81;
							}
						else
							{	/* Type/type.scm 64 */
								BgL_auxz00_893 = BgL_typez00_80;
							}
					}
					return ((BgL_typez00_bglt) BgL_auxz00_893);
				}
			}
		}

	}



/* &get-aliased-type */
	BgL_typez00_bglt BGl_z62getzd2aliasedzd2typez62zztype_typez00(obj_t
		BgL_envz00_497, obj_t BgL_typez00_498)
	{
		{	/* Type/type.scm 62 */
			return
				BGl_getzd2aliasedzd2typez00zztype_typez00(
				((BgL_typez00_bglt) BgL_typez00_498));
		}

	}



/* bigloo-type? */
	BGL_EXPORTED_DEF bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt
		BgL_typez00_65)
	{
		{	/* Type/type.scm 71 */
			return
				(
				(((BgL_typez00_bglt) COBJECT(BgL_typez00_65))->BgL_classz00) ==
				CNST_TABLE_REF(((long) 0)));
		}

	}



/* &bigloo-type? */
	obj_t BGl_z62bigloozd2typezf3z43zztype_typez00(obj_t BgL_envz00_499,
		obj_t BgL_typez00_500)
	{
		{	/* Type/type.scm 71 */
			return
				BBOOL(BGl_bigloozd2typezf3z21zztype_typez00(
					((BgL_typez00_bglt) BgL_typez00_500)));
		}

	}



/* foreign-type? */
	BGL_EXPORTED_DEF bool_t
		BGl_foreignzd2typezf3z21zztype_typez00(BgL_typez00_bglt BgL_typez00_66)
	{
		{	/* Type/type.scm 77 */
			return
				(
				(((BgL_typez00_bglt) COBJECT(BgL_typez00_66))->BgL_classz00) ==
				CNST_TABLE_REF(((long) 1)));
		}

	}



/* &foreign-type? */
	obj_t BGl_z62foreignzd2typezf3z43zztype_typez00(obj_t BgL_envz00_501,
		obj_t BgL_typez00_502)
	{
		{	/* Type/type.scm 77 */
			return
				BBOOL(BGl_foreignzd2typezf3z21zztype_typez00(
					((BgL_typez00_bglt) BgL_typez00_502)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			{	/* Type/type.scm 21 */
				obj_t BgL_arg1116z00_92;
				obj_t BgL_arg1117z00_93;

				{	/* Type/type.scm 21 */
					obj_t BgL_v1069z00_118;

					BgL_v1069z00_118 = create_vector(((long) 15));
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1125z00_119;

						BgL_arg1125z00_119 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1331z00zztype_typez00,
							BGl_proc1330z00zztype_typez00, ((bool_t) 1), ((bool_t) 0), BFALSE,
							BGl_proc1329z00zztype_typez00, CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 0), BgL_arg1125z00_119);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1133z00_132;

						BgL_arg1133z00_132 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc1334z00zztype_typez00,
							BGl_proc1333z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1332z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 1), BgL_arg1133z00_132);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1155z00_145;

						BgL_arg1155z00_145 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc1337z00zztype_typez00,
							BGl_proc1336z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1335z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 2), BgL_arg1155z00_145);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1170z00_158;

						BgL_arg1170z00_158 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc1340z00zztype_typez00,
							BGl_proc1339z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1338z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 3), BgL_arg1170z00_158);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1179z00_171;

						BgL_arg1179z00_171 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc1343z00zztype_typez00,
							BGl_proc1342z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1341z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 4), BgL_arg1179z00_171);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1201z00_184;

						BgL_arg1201z00_184 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc1346z00zztype_typez00,
							BGl_proc1345z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1344z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 5), BgL_arg1201z00_184);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1221z00_197;

						BgL_arg1221z00_197 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc1348z00zztype_typez00,
							BGl_proc1347z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BFALSE, CNST_TABLE_REF(((long) 11)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 6), BgL_arg1221z00_197);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1229z00_207;

						BgL_arg1229z00_207 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc1351z00zztype_typez00,
							BGl_proc1350z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1349z00zztype_typez00, CNST_TABLE_REF(((long) 11)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 7), BgL_arg1229z00_207);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1246z00_220;

						BgL_arg1246z00_220 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									13)), BGl_proc1354z00zztype_typez00,
							BGl_proc1353z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1352z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 8), BgL_arg1246z00_220);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1256z00_233;

						BgL_arg1256z00_233 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc1357z00zztype_typez00,
							BGl_proc1356z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1355z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 9), BgL_arg1256z00_233);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1273z00_246;

						BgL_arg1273z00_246 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc1360z00zztype_typez00,
							BGl_proc1359z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1358z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 10), BgL_arg1273z00_246);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1280z00_259;

						BgL_arg1280z00_259 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc1363z00zztype_typez00,
							BGl_proc1362z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1361z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 11), BgL_arg1280z00_259);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1288z00_272;

						BgL_arg1288z00_272 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc1366z00zztype_typez00,
							BGl_proc1365z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1364z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 12), BgL_arg1288z00_272);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1295z00_285;

						BgL_arg1295z00_285 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc1369z00zztype_typez00,
							BGl_proc1368z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1367z00zztype_typez00, CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 13), BgL_arg1295z00_285);
					}
					{	/* Type/type.scm 21 */
						obj_t BgL_arg1303z00_298;

						BgL_arg1303z00_298 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc1372z00zztype_typez00,
							BGl_proc1371z00zztype_typez00, ((bool_t) 0), ((bool_t) 0), BFALSE,
							BGl_proc1370z00zztype_typez00, CNST_TABLE_REF(((long) 20)));
						VECTOR_SET(BgL_v1069z00_118, ((long) 14), BgL_arg1303z00_298);
					}
					BgL_arg1116z00_92 = BgL_v1069z00_118;
				}
				{	/* Type/type.scm 21 */
					obj_t BgL_v1070z00_311;

					BgL_v1070z00_311 = create_vector(((long) 0));
					BgL_arg1117z00_93 = BgL_v1070z00_311;
				}
				return (BGl_typez00zztype_typez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 21)),
						CNST_TABLE_REF(((long) 22)), BGl_objectz00zz__objectz00,
						((long) 17548), BGl_proc1375z00zztype_typez00,
						BGl_proc1374z00zztype_typez00, BFALSE,
						BGl_proc1373z00zztype_typez00, BFALSE, BgL_arg1116z00_92,
						BgL_arg1117z00_93), BUNSPEC);
		}}

	}



/* &<@anonymous:1124> */
	obj_t BGl_z62zc3z04anonymousza31124ze3ze5zztype_typez00(obj_t BgL_envz00_550,
		obj_t BgL_new1063z00_551)
	{
		{	/* Type/type.scm 21 */
			{
				BgL_typez00_bglt BgL_auxz00_982;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1063z00_551)))->BgL_idz00) = ((obj_t)
						CNST_TABLE_REF(((long) 23))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1063z00_551)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1063z00_551)))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				BgL_auxz00_982 = ((BgL_typez00_bglt) BgL_new1063z00_551);
				return ((obj_t) BgL_auxz00_982);
			}
		}

	}



/* &lambda1122 */
	BgL_typez00_bglt BGl_z62lambda1122z62zztype_typez00(obj_t BgL_envz00_552)
	{
		{	/* Type/type.scm 21 */
			{	/* Type/type.scm 21 */
				BgL_typez00_bglt BgL_new1062z00_681;

				BgL_new1062z00_681 =
					((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_typez00_bgl))));
				{	/* Type/type.scm 21 */
					long BgL_arg1123z00_682;

					{	/* Type/type.scm 21 */
						long BgL_res1316z00_683;

						BgL_res1316z00_683 = BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
						BgL_arg1123z00_682 = BgL_res1316z00_683;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1062z00_681), BgL_arg1123z00_682);
				}
				{	/* Type/type.scm 21 */
					BgL_objectz00_bglt BgL_tmpz00_1021;

					BgL_tmpz00_1021 = ((BgL_objectz00_bglt) BgL_new1062z00_681);
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1021, BFALSE);
				}
				((BgL_objectz00_bglt) BgL_new1062z00_681);
				return BgL_new1062z00_681;
			}
		}

	}



/* &lambda1118 */
	BgL_typez00_bglt BGl_z62lambda1118z62zztype_typez00(obj_t BgL_envz00_553,
		obj_t BgL_id1047z00_554, obj_t BgL_name1048z00_555,
		obj_t BgL_siza7e1049za7_556, obj_t BgL_class1050z00_557,
		obj_t BgL_coercezd2to1051zd2_558, obj_t BgL_parents1052z00_559,
		obj_t BgL_initzf31053zf3_560, obj_t BgL_magiczf31054zf3_561,
		obj_t BgL_z421055z42_562, obj_t BgL_alias1056z00_563,
		obj_t BgL_pointedzd2tozd2by1057z00_564, obj_t BgL_tvector1058z00_565,
		obj_t BgL_location1059z00_566, obj_t BgL_importzd2location1060zd2_567,
		obj_t BgL_occurrence1061z00_568)
	{
		{	/* Type/type.scm 21 */
			{	/* Type/type.scm 21 */
				bool_t BgL_initzf31053zf3_685;
				bool_t BgL_magiczf31054zf3_686;
				int BgL_occurrence1061z00_687;

				BgL_initzf31053zf3_685 = CBOOL(BgL_initzf31053zf3_560);
				BgL_magiczf31054zf3_686 = CBOOL(BgL_magiczf31054zf3_561);
				BgL_occurrence1061z00_687 = CINT(BgL_occurrence1061z00_568);
				{	/* Type/type.scm 21 */
					BgL_typez00_bglt BgL_new1068z00_688;

					{	/* Type/type.scm 21 */
						BgL_typez00_bglt BgL_new1067z00_689;

						BgL_new1067z00_689 =
							((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_typez00_bgl))));
						{	/* Type/type.scm 21 */
							long BgL_arg1121z00_690;

							{	/* Type/type.scm 21 */
								long BgL_res1315z00_691;

								BgL_res1315z00_691 = BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
								BgL_arg1121z00_690 = BgL_res1315z00_691;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1067z00_689), BgL_arg1121z00_690);
						}
						{	/* Type/type.scm 21 */
							BgL_objectz00_bglt BgL_tmpz00_1032;

							BgL_tmpz00_1032 = ((BgL_objectz00_bglt) BgL_new1067z00_689);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1032, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_new1067z00_689);
						BgL_new1068z00_688 = BgL_new1067z00_689;
					}
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1047z00_554)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_namez00) =
						((obj_t) BgL_name1048z00_555), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1049za7_556), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_classz00) =
						((obj_t) BgL_class1050z00_557), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->
							BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1051zd2_558), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_parentsz00) =
						((obj_t) BgL_parents1052z00_559), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31053zf3_685), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31054zf3_686), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_z42z42) =
						((obj_t) BgL_z421055z42_562), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_aliasz00) =
						((obj_t) BgL_alias1056z00_563), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->
							BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1057z00_564), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1058z00_565), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->BgL_locationz00) =
						((obj_t) BgL_location1059z00_566), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->
							BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1060zd2_567), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(BgL_new1068z00_688))->
							BgL_occurrencez00) = ((int) BgL_occurrence1061z00_687), BUNSPEC);
					return BgL_new1068z00_688;
				}
			}
		}

	}



/* &<@anonymous:1310> */
	obj_t BGl_z62zc3z04anonymousza31310ze3ze5zztype_typez00(obj_t BgL_envz00_569)
	{
		{	/* Type/type.scm 21 */
			return BINT(((long) 0));
		}

	}



/* &lambda1309 */
	obj_t BGl_z62lambda1309z62zztype_typez00(obj_t BgL_envz00_570,
		obj_t BgL_oz00_571, obj_t BgL_vz00_572)
	{
		{	/* Type/type.scm 21 */
			{	/* Type/type.scm 21 */
				int BgL_vz00_693;

				BgL_vz00_693 = CINT(BgL_vz00_572);
				return
					((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_oz00_571)))->BgL_occurrencez00) =
					((int) BgL_vz00_693), BUNSPEC);
		}}

	}



/* &lambda1308 */
	obj_t BGl_z62lambda1308z62zztype_typez00(obj_t BgL_envz00_573,
		obj_t BgL_oz00_574)
	{
		{	/* Type/type.scm 21 */
			return
				BINT(
				(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_574)))->BgL_occurrencez00));
		}

	}



/* &<@anonymous:1301> */
	obj_t BGl_z62zc3z04anonymousza31301ze3ze5zztype_typez00(obj_t BgL_envz00_575)
	{
		{	/* Type/type.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1300 */
	obj_t BGl_z62lambda1300z62zztype_typez00(obj_t BgL_envz00_576,
		obj_t BgL_oz00_577, obj_t BgL_vz00_578)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_577)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_578), BUNSPEC);
		}

	}



/* &lambda1299 */
	obj_t BGl_z62lambda1299z62zztype_typez00(obj_t BgL_envz00_579,
		obj_t BgL_oz00_580)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_580)))->BgL_importzd2locationzd2);
		}

	}



/* &<@anonymous:1294> */
	obj_t BGl_z62zc3z04anonymousza31294ze3ze5zztype_typez00(obj_t BgL_envz00_581)
	{
		{	/* Type/type.scm 21 */
			return BUNSPEC;
		}

	}



/* &lambda1293 */
	obj_t BGl_z62lambda1293z62zztype_typez00(obj_t BgL_envz00_582,
		obj_t BgL_oz00_583, obj_t BgL_vz00_584)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_583)))->BgL_locationz00) =
				((obj_t) BgL_vz00_584), BUNSPEC);
		}

	}



/* &lambda1292 */
	obj_t BGl_z62lambda1292z62zztype_typez00(obj_t BgL_envz00_585,
		obj_t BgL_oz00_586)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_586)))->BgL_locationz00);
		}

	}



/* &<@anonymous:1287> */
	obj_t BGl_z62zc3z04anonymousza31287ze3ze5zztype_typez00(obj_t BgL_envz00_587)
	{
		{	/* Type/type.scm 21 */
			return BUNSPEC;
		}

	}



/* &lambda1286 */
	obj_t BGl_z62lambda1286z62zztype_typez00(obj_t BgL_envz00_588,
		obj_t BgL_oz00_589, obj_t BgL_vz00_590)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_589)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_590), BUNSPEC);
		}

	}



/* &lambda1285 */
	obj_t BGl_z62lambda1285z62zztype_typez00(obj_t BgL_envz00_591,
		obj_t BgL_oz00_592)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_592)))->BgL_tvectorz00);
		}

	}



/* &<@anonymous:1279> */
	obj_t BGl_z62zc3z04anonymousza31279ze3ze5zztype_typez00(obj_t BgL_envz00_593)
	{
		{	/* Type/type.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1278 */
	obj_t BGl_z62lambda1278z62zztype_typez00(obj_t BgL_envz00_594,
		obj_t BgL_oz00_595, obj_t BgL_vz00_596)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_595)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_596), BUNSPEC);
		}

	}



/* &lambda1277 */
	obj_t BGl_z62lambda1277z62zztype_typez00(obj_t BgL_envz00_597,
		obj_t BgL_oz00_598)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_598)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &<@anonymous:1271> */
	obj_t BGl_z62zc3z04anonymousza31271ze3ze5zztype_typez00(obj_t BgL_envz00_599)
	{
		{	/* Type/type.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1270 */
	obj_t BGl_z62lambda1270z62zztype_typez00(obj_t BgL_envz00_600,
		obj_t BgL_oz00_601, obj_t BgL_vz00_602)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_601)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_602), BUNSPEC);
		}

	}



/* &lambda1269 */
	obj_t BGl_z62lambda1269z62zztype_typez00(obj_t BgL_envz00_603,
		obj_t BgL_oz00_604)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_604)))->BgL_aliasz00);
		}

	}



/* &<@anonymous:1255> */
	obj_t BGl_z62zc3z04anonymousza31255ze3ze5zztype_typez00(obj_t BgL_envz00_605)
	{
		{	/* Type/type.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1254 */
	obj_t BGl_z62lambda1254z62zztype_typez00(obj_t BgL_envz00_606,
		obj_t BgL_oz00_607, obj_t BgL_vz00_608)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_607)))->BgL_z42z42) =
				((obj_t) BgL_vz00_608), BUNSPEC);
		}

	}



/* &lambda1253 */
	obj_t BGl_z62lambda1253z62zztype_typez00(obj_t BgL_envz00_609,
		obj_t BgL_oz00_610)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_610)))->BgL_z42z42);
		}

	}



/* &<@anonymous:1245> */
	obj_t BGl_z62zc3z04anonymousza31245ze3ze5zztype_typez00(obj_t BgL_envz00_611)
	{
		{	/* Type/type.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1244 */
	obj_t BGl_z62lambda1244z62zztype_typez00(obj_t BgL_envz00_612,
		obj_t BgL_oz00_613, obj_t BgL_vz00_614)
	{
		{	/* Type/type.scm 21 */
			{	/* Type/type.scm 21 */
				bool_t BgL_vz00_708;

				BgL_vz00_708 = CBOOL(BgL_vz00_614);
				return
					((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_oz00_613)))->BgL_magiczf3zf3) =
					((bool_t) BgL_vz00_708), BUNSPEC);
			}
		}

	}



/* &lambda1243 */
	obj_t BGl_z62lambda1243z62zztype_typez00(obj_t BgL_envz00_615,
		obj_t BgL_oz00_616)
	{
		{	/* Type/type.scm 21 */
			return
				BBOOL(
				(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_616)))->BgL_magiczf3zf3));
		}

	}



/* &lambda1227 */
	obj_t BGl_z62lambda1227z62zztype_typez00(obj_t BgL_envz00_617,
		obj_t BgL_oz00_618, obj_t BgL_vz00_619)
	{
		{	/* Type/type.scm 21 */
			{	/* Type/type.scm 21 */
				bool_t BgL_vz00_711;

				BgL_vz00_711 = CBOOL(BgL_vz00_619);
				return
					((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_oz00_618)))->BgL_initzf3zf3) =
					((bool_t) BgL_vz00_711), BUNSPEC);
			}
		}

	}



/* &lambda1226 */
	obj_t BGl_z62lambda1226z62zztype_typez00(obj_t BgL_envz00_620,
		obj_t BgL_oz00_621)
	{
		{	/* Type/type.scm 21 */
			return
				BBOOL(
				(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_621)))->BgL_initzf3zf3));
		}

	}



/* &<@anonymous:1219> */
	obj_t BGl_z62zc3z04anonymousza31219ze3ze5zztype_typez00(obj_t BgL_envz00_622)
	{
		{	/* Type/type.scm 21 */
			return BNIL;
		}

	}



/* &lambda1218 */
	obj_t BGl_z62lambda1218z62zztype_typez00(obj_t BgL_envz00_623,
		obj_t BgL_oz00_624, obj_t BgL_vz00_625)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_624)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_625), BUNSPEC);
		}

	}



/* &lambda1217 */
	obj_t BGl_z62lambda1217z62zztype_typez00(obj_t BgL_envz00_626,
		obj_t BgL_oz00_627)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_627)))->BgL_parentsz00);
		}

	}



/* &<@anonymous:1197> */
	obj_t BGl_z62zc3z04anonymousza31197ze3ze5zztype_typez00(obj_t BgL_envz00_628)
	{
		{	/* Type/type.scm 21 */
			return BNIL;
		}

	}



/* &lambda1196 */
	obj_t BGl_z62lambda1196z62zztype_typez00(obj_t BgL_envz00_629,
		obj_t BgL_oz00_630, obj_t BgL_vz00_631)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_630)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_631), BUNSPEC);
		}

	}



/* &lambda1195 */
	obj_t BGl_z62lambda1195z62zztype_typez00(obj_t BgL_envz00_632,
		obj_t BgL_oz00_633)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_633)))->BgL_coercezd2tozd2);
		}

	}



/* &<@anonymous:1178> */
	obj_t BGl_z62zc3z04anonymousza31178ze3ze5zztype_typez00(obj_t BgL_envz00_634)
	{
		{	/* Type/type.scm 21 */
			return CNST_TABLE_REF(((long) 0));
		}

	}



/* &lambda1177 */
	obj_t BGl_z62lambda1177z62zztype_typez00(obj_t BgL_envz00_635,
		obj_t BgL_oz00_636, obj_t BgL_vz00_637)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_636)))->BgL_classz00) =
				((obj_t) BgL_vz00_637), BUNSPEC);
		}

	}



/* &lambda1176 */
	obj_t BGl_z62lambda1176z62zztype_typez00(obj_t BgL_envz00_638,
		obj_t BgL_oz00_639)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_639)))->BgL_classz00);
		}

	}



/* &<@anonymous:1169> */
	obj_t BGl_z62zc3z04anonymousza31169ze3ze5zztype_typez00(obj_t BgL_envz00_640)
	{
		{	/* Type/type.scm 21 */
			return BUNSPEC;
		}

	}



/* &lambda1168 */
	obj_t BGl_z62lambda1168z62zztype_typez00(obj_t BgL_envz00_641,
		obj_t BgL_oz00_642, obj_t BgL_vz00_643)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_642)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_643), BUNSPEC);
		}

	}



/* &lambda1167 */
	obj_t BGl_z62lambda1167z62zztype_typez00(obj_t BgL_envz00_644,
		obj_t BgL_oz00_645)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_645)))->BgL_siza7eza7);
		}

	}



/* &<@anonymous:1148> */
	obj_t BGl_z62zc3z04anonymousza31148ze3ze5zztype_typez00(obj_t BgL_envz00_646)
	{
		{	/* Type/type.scm 21 */
			return BUNSPEC;
		}

	}



/* &lambda1147 */
	obj_t BGl_z62lambda1147z62zztype_typez00(obj_t BgL_envz00_647,
		obj_t BgL_oz00_648, obj_t BgL_vz00_649)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_648)))->BgL_namez00) =
				((obj_t) BgL_vz00_649), BUNSPEC);
		}

	}



/* &lambda1146 */
	obj_t BGl_z62lambda1146z62zztype_typez00(obj_t BgL_envz00_650,
		obj_t BgL_oz00_651)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_651)))->BgL_namez00);
		}

	}



/* &<@anonymous:1131> */
	obj_t BGl_z62zc3z04anonymousza31131ze3ze5zztype_typez00(obj_t BgL_envz00_652)
	{
		{	/* Type/type.scm 21 */
			return CNST_TABLE_REF(((long) 23));
		}

	}



/* &lambda1130 */
	obj_t BGl_z62lambda1130z62zztype_typez00(obj_t BgL_envz00_653,
		obj_t BgL_oz00_654, obj_t BgL_vz00_655)
	{
		{	/* Type/type.scm 21 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_654)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_655)), BUNSPEC);
		}

	}



/* &lambda1129 */
	obj_t BGl_z62lambda1129z62zztype_typez00(obj_t BgL_envz00_656,
		obj_t BgL_oz00_657)
	{
		{	/* Type/type.scm 21 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_657)))->BgL_idz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
				BGl_proc1376z00zztype_typez00, BGl_typez00zztype_typez00,
				BGl_string1377z00zztype_typez00);
		}

	}



/* &type-occurrence-incr1071 */
	obj_t BGl_z62typezd2occurrencezd2incr1071z62zztype_typez00(obj_t
		BgL_envz00_659, obj_t BgL_tz00_660)
	{
		{	/* Type/type.scm 83 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_tz00_660)))->BgL_occurrencez00) = ((int)
					(int) (
						(((long) 1) +
							(long) (
								(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_tz00_660)))->
									BgL_occurrencez00))))), BUNSPEC);
		}

	}



/* type-occurrence-increment! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt
		BgL_tz00_67)
	{
		{	/* Type/type.scm 83 */
			{	/* Type/type.scm 83 */
				obj_t BgL_method1072z00_321;

				{	/* Type/type.scm 83 */
					obj_t BgL_res1328z00_405;

					{	/* Type/type.scm 83 */
						long BgL_objzd2classzd2numz00_370;

						{	/* Type/type.scm 83 */
							long BgL_res1318z00_373;

							BgL_res1318z00_373 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_tz00_67));
							BgL_objzd2classzd2numz00_370 = BgL_res1318z00_373;
						}
						{	/* Type/type.scm 83 */
							obj_t BgL_arg1813z00_371;

							BgL_arg1813z00_371 =
								PROCEDURE_REF
								(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
								(int) (((long) 1)));
							{	/* Type/type.scm 83 */
								int BgL_offsetz00_375;

								BgL_offsetz00_375 = (int) (BgL_objzd2classzd2numz00_370);
								{	/* Type/type.scm 83 */
									long BgL_offsetz00_376;

									BgL_offsetz00_376 =
										((long) (BgL_offsetz00_375) - OBJECT_TYPE);
									{	/* Type/type.scm 83 */
										long BgL_modz00_377;

										BgL_modz00_377 =
											(BgL_offsetz00_376 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Type/type.scm 83 */
											long BgL_restz00_379;

											BgL_restz00_379 =
												(BgL_offsetz00_376 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Type/type.scm 83 */

												{	/* Type/type.scm 83 */
													obj_t BgL_bucketz00_381;

													BgL_bucketz00_381 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_371), BgL_modz00_377);
													BgL_res1328z00_405 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_381), BgL_restz00_379);
					}}}}}}}}
					BgL_method1072z00_321 = BgL_res1328z00_405;
				}
				return
					PROCEDURE_ENTRY(BgL_method1072z00_321) (BgL_method1072z00_321,
					((obj_t) BgL_tz00_67), BEOA);
			}
		}

	}



/* &type-occurrence-increment! */
	obj_t BGl_z62typezd2occurrencezd2incrementz12z70zztype_typez00(obj_t
		BgL_envz00_661, obj_t BgL_tz00_662)
	{
		{	/* Type/type.scm 83 */
			return
				BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
				((BgL_typez00_bglt) BgL_tz00_662));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztype_typez00()
	{
		{	/* Type/type.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1378z00zztype_typez00));
		}

	}

#ifdef __cplusplus
}
#endif
