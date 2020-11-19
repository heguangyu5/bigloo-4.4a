/*===========================================================================*/
/*   (Uncell/walk.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Uncell/walk.scm) */
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

	typedef struct BgL_setqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
	}              *BgL_setqz00_bglt;

	typedef struct BgL_letzd2varzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		obj_t BgL_bindingsz00;
		struct BgL_nodez00_bgl *BgL_bodyz00;
		bool_t BgL_removablezf3zf3;
	}                   *BgL_letzd2varzd2_bglt;

	typedef struct BgL_makezd2boxzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
		obj_t BgL_stackablez00;
	}                    *BgL_makezd2boxzd2_bglt;

	typedef struct BgL_boxzd2refzd2_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_keyz00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                   *BgL_boxzd2refzd2_bglt;

	typedef struct BgL_boxzd2setz12zc0_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_varz00_bgl *BgL_varz00;
		struct BgL_nodez00_bgl *BgL_valuez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                      *BgL_boxzd2setz12zc0_bglt;

	typedef struct BgL_localzf2infozf2_bgl
	{
		bool_t BgL_escapez00;
	}                      *BgL_localzf2infozf2_bglt;


	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62markzd2cellzd2boxzd2ref1339zb0zzuncell_walkz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62uncellz121342z70zzuncell_walkz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00(obj_t);
	extern obj_t BGl_letzd2varzd2zzast_nodez00;
	static obj_t BGl_objectzd2initzd2zzuncell_walkz00();
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_boxzd2refzd2zzast_nodez00;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzuncell_walkz00();
	static obj_t BGl_localzf2infozf2zzuncell_walkz00 = BUNSPEC;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static BgL_nodez00_bglt
		BGl_z62uncellz12zd2letzd2var1345z70zzuncell_walkz00(obj_t, obj_t);
	static BgL_nodez00_bglt BGl_z62uncellz12z70zzuncell_walkz00(obj_t, obj_t);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_z62markzd2cellzd2var1335z62zzuncell_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzuncell_walkz00();
	static obj_t BGl_z62zc3z04anonymousza31529ze3ze5zzuncell_walkz00(obj_t,
		obj_t);
	static obj_t BGl_z62markzd2cellzd2boxzd2setz121341za2zzuncell_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31567ze3ze5zzuncell_walkz00(obj_t);
	static BgL_localz00_bglt BGl_z62lambda1498z62zzuncell_walkz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_uncellzd2walkz12zc0zzuncell_walkz00(obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62markzd2cellzd2letzd2var1337zb0zzuncell_walkz00(obj_t,
		obj_t);
	extern obj_t BGl_setqz00zzast_nodez00;
	static obj_t BGl_requirezd2initializa7ationz75zzuncell_walkz00 = BUNSPEC;
	static BgL_nodez00_bglt BGl_uncellz12z12zzuncell_walkz00(BgL_nodez00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzuncell_walkz00();
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzuncell_walkz00();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62uncellzd2walkz12za2zzuncell_walkz00(obj_t, obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_uncellzd2funz12zc0zzuncell_walkz00(obj_t);
	extern obj_t BGl_varz00zzast_nodez00;
	extern obj_t BGl_makezd2boxzd2zzast_nodez00;
	static obj_t BGl_z62markzd2cell1332zb0zzuncell_walkz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	extern obj_t BGl_walk0z00zzast_walkz00(BgL_nodez00_bglt, obj_t);
	static obj_t BGl_z62markzd2cellzb0zzuncell_walkz00(obj_t, obj_t);
	extern obj_t BGl_boxzd2setz12zc0zzast_nodez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzuncell_walkz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_walkz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_dumpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_lvtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static BgL_nodez00_bglt
		BGl_z62uncellz12zd2boxzd2ref1347z70zzuncell_walkz00(obj_t, obj_t);
	extern obj_t BGl_nodez00zzast_nodez00;
	extern obj_t BGl_localz00zzast_varz00;
	static BgL_nodez00_bglt
		BGl_z62uncellz12zd2boxzd2setz121349z62zzuncell_walkz00(obj_t, obj_t);
	static obj_t BGl_markzd2cellzd2zzuncell_walkz00(BgL_nodez00_bglt);
	static obj_t BGl_cnstzd2initzd2zzuncell_walkz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzuncell_walkz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzuncell_walkz00();
	extern BgL_nodez00_bglt BGl_walk0z12z12zzast_walkz00(BgL_nodez00_bglt, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1522z62zzuncell_walkz00(obj_t, obj_t);
	static BgL_localz00_bglt BGl_z62lambda1530z62zzuncell_walkz00(obj_t, obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	extern obj_t BGl_za2unspecza2z00zztype_cachez00;
	static obj_t BGl_z62lambda1565z62zzuncell_walkz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1566z62zzuncell_walkz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t __cnst[7];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzuncell_walkz00,
		BgL_bgl_za762uncellza712za7d2l1909za7,
		BGl_z62uncellz12zd2letzd2var1345z70zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzuncell_walkz00,
		BgL_bgl_za762uncellza712za7d2b1910za7,
		BGl_z62uncellz12zd2boxzd2ref1347z70zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzuncell_walkz00,
		BgL_bgl_za762uncellza712za7d2b1911za7,
		BGl_z62uncellz12zd2boxzd2setz121349z62zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1876z00zzuncell_walkz00,
		BgL_bgl_string1876za700za7za7u1912za7, "Uncell", 6);
	      DEFINE_STRING(BGl_string1877z00zzuncell_walkz00,
		BgL_bgl_string1877za700za7za7u1913za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1878z00zzuncell_walkz00,
		BgL_bgl_string1878za700za7za7u1914za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1879z00zzuncell_walkz00,
		BgL_bgl_string1879za700za7za7u1915za7, " error", 6);
	      DEFINE_STRING(BGl_string1880z00zzuncell_walkz00,
		BgL_bgl_string1880za700za7za7u1916za7, "s", 1);
	      DEFINE_STRING(BGl_string1881z00zzuncell_walkz00,
		BgL_bgl_string1881za700za7za7u1917za7, "", 0);
	      DEFINE_STRING(BGl_string1882z00zzuncell_walkz00,
		BgL_bgl_string1882za700za7za7u1918za7, " occured, ending ...", 20);
	      DEFINE_STRING(BGl_string1883z00zzuncell_walkz00,
		BgL_bgl_string1883za700za7za7u1919za7, "failure during postlude hook", 28);
	      DEFINE_STATIC_BGL_GENERIC(BGl_uncellz12zd2envzc0zzuncell_walkz00,
		BgL_bgl_za762uncellza712za770za71920z00,
		BGl_z62uncellz12z70zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1892z00zzuncell_walkz00,
		BgL_bgl_string1892za700za7za7u1921za7, "mark-cell1332", 13);
	      DEFINE_STRING(BGl_string1894z00zzuncell_walkz00,
		BgL_bgl_string1894za700za7za7u1922za7, "uncell!1342", 11);
	      DEFINE_STRING(BGl_string1896z00zzuncell_walkz00,
		BgL_bgl_string1896za700za7za7u1923za7, "mark-cell", 9);
	      DEFINE_STRING(BGl_string1901z00zzuncell_walkz00,
		BgL_bgl_string1901za700za7za7u1924za7, "uncell!::node", 13);
	      DEFINE_STRING(BGl_string1904z00zzuncell_walkz00,
		BgL_bgl_string1904za700za7za7u1925za7, "uncell_walk", 11);
	      DEFINE_STRING(BGl_string1905z00zzuncell_walkz00,
		BgL_bgl_string1905za700za7za7u1926za7,
		"read _ uncell_walk local/info bool escape pass-started ", 55);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1884z00zzuncell_walkz00,
		BgL_bgl_za762za7c3za704anonymo1927za7,
		BGl_z62zc3z04anonymousza31567ze3ze5zzuncell_walkz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1885z00zzuncell_walkz00,
		BgL_bgl_za762lambda1566za7621928z00, BGl_z62lambda1566z62zzuncell_walkz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1886z00zzuncell_walkz00,
		BgL_bgl_za762lambda1565za7621929z00, BGl_z62lambda1565z62zzuncell_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1887z00zzuncell_walkz00,
		BgL_bgl_za762lambda1530za7621930z00, BGl_z62lambda1530z62zzuncell_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1888z00zzuncell_walkz00,
		BgL_bgl_za762za7c3za704anonymo1931za7,
		BGl_z62zc3z04anonymousza31529ze3ze5zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1889z00zzuncell_walkz00,
		BgL_bgl_za762lambda1522za7621932z00, BGl_z62lambda1522z62zzuncell_walkz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1890z00zzuncell_walkz00,
		BgL_bgl_za762lambda1498za7621933z00, BGl_z62lambda1498z62zzuncell_walkz00,
		0L, BUNSPEC, 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cell131934z00,
		BGl_z62markzd2cell1332zb0zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzuncell_walkz00,
		BgL_bgl_za762uncellza71213421935z00,
		BGl_z62uncellz121342z70zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1895z00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cellza7d1936za7,
		BGl_z62markzd2cellzd2var1335z62zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1897z00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cellza7d1937za7,
		BGl_z62markzd2cellzd2letzd2var1337zb0zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cellza7d1938za7,
		BGl_z62markzd2cellzd2boxzd2ref1339zb0zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cellza7d1939za7,
		BGl_z62markzd2cellzd2boxzd2setz121341za2zzuncell_walkz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_GENERIC(BGl_markzd2cellzd2envz00zzuncell_walkz00,
		BgL_bgl_za762markza7d2cellza7b1940za7,
		BGl_z62markzd2cellzb0zzuncell_walkz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_uncellzd2walkz12zd2envz12zzuncell_walkz00,
		BgL_bgl_za762uncellza7d2walk1941z00,
		BGl_z62uncellzd2walkz12za2zzuncell_walkz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_localzf2infozf2zzuncell_walkz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzuncell_walkz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzuncell_walkz00(long
		BgL_checksumz00_2322, char *BgL_fromz00_2323)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzuncell_walkz00))
				{
					BGl_requirezd2initializa7ationz75zzuncell_walkz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzuncell_walkz00();
					BGl_libraryzd2moduleszd2initz00zzuncell_walkz00();
					BGl_cnstzd2initzd2zzuncell_walkz00();
					BGl_importedzd2moduleszd2initz00zzuncell_walkz00();
					BGl_objectzd2initzd2zzuncell_walkz00();
					BGl_genericzd2initzd2zzuncell_walkz00();
					BGl_methodzd2initzd2zzuncell_walkz00();
					return BGl_toplevelzd2initzd2zzuncell_walkz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"uncell_walk");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "uncell_walk");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			{	/* Uncell/walk.scm 16 */
				obj_t BgL_cportz00_2239;

				{	/* Uncell/walk.scm 16 */
					obj_t BgL_stringz00_2247;

					BgL_stringz00_2247 = BGl_string1905z00zzuncell_walkz00;
					{	/* Uncell/walk.scm 16 */
						obj_t BgL_startz00_2248;

						BgL_startz00_2248 = BINT(((long) 0));
						{	/* Uncell/walk.scm 16 */
							obj_t BgL_endz00_2249;

							BgL_endz00_2249 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2247)));
							{	/* Uncell/walk.scm 16 */

								BgL_cportz00_2239 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2247, BgL_startz00_2248, BgL_endz00_2249);
				}}}}
				{
					long BgL_iz00_2240;

					BgL_iz00_2240 = ((long) 6);
				BgL_loopz00_2241:
					if ((BgL_iz00_2240 == ((long) -1)))
						{	/* Uncell/walk.scm 16 */
							return BUNSPEC;
						}
					else
						{	/* Uncell/walk.scm 16 */
							{	/* Uncell/walk.scm 16 */
								obj_t BgL_arg1907z00_2243;

								{	/* Uncell/walk.scm 16 */

									{	/* Uncell/walk.scm 16 */
										obj_t BgL_locationz00_2245;

										BgL_locationz00_2245 = BBOOL(((bool_t) 0));
										{	/* Uncell/walk.scm 16 */

											BgL_arg1907z00_2243 =
												BGl_readz00zz__readerz00(BgL_cportz00_2239,
												BgL_locationz00_2245);
										}
									}
								}
								{	/* Uncell/walk.scm 16 */
									int BgL_tmpz00_2356;

									BgL_tmpz00_2356 = (int) (BgL_iz00_2240);
									CNST_TABLE_SET(BgL_tmpz00_2356, BgL_arg1907z00_2243);
							}}
							{	/* Uncell/walk.scm 16 */
								int BgL_auxz00_2246;

								BgL_auxz00_2246 = (int) ((BgL_iz00_2240 - ((long) 1)));
								{
									long BgL_iz00_2361;

									BgL_iz00_2361 = (long) (BgL_auxz00_2246);
									BgL_iz00_2240 = BgL_iz00_2361;
									goto BgL_loopz00_2241;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			return BUNSPEC;
		}

	}



/* uncell-walk! */
	BGL_EXPORTED_DEF obj_t BGl_uncellzd2walkz12zc0zzuncell_walkz00(obj_t
		BgL_globalsz00_17)
	{
		{	/* Uncell/walk.scm 41 */
			{	/* Uncell/walk.scm 42 */
				obj_t BgL_list1371z00_1449;

				{	/* Uncell/walk.scm 42 */
					obj_t BgL_arg1372z00_1450;

					{	/* Uncell/walk.scm 42 */
						obj_t BgL_arg1381z00_1451;

						BgL_arg1381z00_1451 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1372z00_1450 =
							MAKE_YOUNG_PAIR(BGl_string1876z00zzuncell_walkz00,
							BgL_arg1381z00_1451);
					}
					BgL_list1371z00_1449 =
						MAKE_YOUNG_PAIR(BGl_string1877z00zzuncell_walkz00,
						BgL_arg1372z00_1450);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1371z00_1449);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1876z00zzuncell_walkz00;
			{	/* Uncell/walk.scm 42 */
				obj_t BgL_g1133z00_1452;

				BgL_g1133z00_1452 = BNIL;
				{
					obj_t BgL_hooksz00_1455;
					obj_t BgL_hnamesz00_1456;

					BgL_hooksz00_1455 = BgL_g1133z00_1452;
					BgL_hnamesz00_1456 = BNIL;
				BgL_zc3z04anonymousza31382ze3z87_1457:
					if (NULLP(BgL_hooksz00_1455))
						{	/* Uncell/walk.scm 42 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Uncell/walk.scm 42 */
							bool_t BgL_test1945z00_2374;

							{	/* Uncell/walk.scm 42 */
								obj_t BgL_fun1418z00_1464;

								BgL_fun1418z00_1464 = CAR(((obj_t) BgL_hooksz00_1455));
								BgL_test1945z00_2374 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1418z00_1464)
									(BgL_fun1418z00_1464, BEOA));
							}
							if (BgL_test1945z00_2374)
								{	/* Uncell/walk.scm 42 */
									obj_t BgL_arg1394z00_1461;
									obj_t BgL_arg1396z00_1462;

									BgL_arg1394z00_1461 = CDR(((obj_t) BgL_hooksz00_1455));
									BgL_arg1396z00_1462 = CDR(((obj_t) BgL_hnamesz00_1456));
									{
										obj_t BgL_hnamesz00_2386;
										obj_t BgL_hooksz00_2385;

										BgL_hooksz00_2385 = BgL_arg1394z00_1461;
										BgL_hnamesz00_2386 = BgL_arg1396z00_1462;
										BgL_hnamesz00_1456 = BgL_hnamesz00_2386;
										BgL_hooksz00_1455 = BgL_hooksz00_2385;
										goto BgL_zc3z04anonymousza31382ze3z87_1457;
									}
								}
							else
								{	/* Uncell/walk.scm 42 */
									obj_t BgL_arg1417z00_1463;

									BgL_arg1417z00_1463 = CAR(((obj_t) BgL_hnamesz00_1456));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1876z00zzuncell_walkz00,
										BGl_string1878z00zzuncell_walkz00, BgL_arg1417z00_1463);
								}
						}
				}
			}
			{
				obj_t BgL_l1321z00_1468;

				BgL_l1321z00_1468 = BgL_globalsz00_17;
			BgL_zc3z04anonymousza31420ze3z87_1469:
				if (PAIRP(BgL_l1321z00_1468))
					{	/* Uncell/walk.scm 43 */
						BGl_uncellzd2funz12zc0zzuncell_walkz00(CAR(BgL_l1321z00_1468));
						{
							obj_t BgL_l1321z00_2394;

							BgL_l1321z00_2394 = CDR(BgL_l1321z00_1468);
							BgL_l1321z00_1468 = BgL_l1321z00_2394;
							goto BgL_zc3z04anonymousza31420ze3z87_1469;
						}
					}
				else
					{	/* Uncell/walk.scm 43 */
						((bool_t) 1);
					}
			}
			if (
				((long) CINT(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00) >
					((long) 0)))
				{	/* Uncell/walk.scm 44 */
					{	/* Uncell/walk.scm 44 */
						obj_t BgL_port1323z00_1476;

						{	/* Uncell/walk.scm 44 */
							obj_t BgL_res1837z00_1994;

							{	/* Uncell/walk.scm 44 */
								obj_t BgL_tmpz00_2399;

								BgL_tmpz00_2399 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1837z00_1994 =
									BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2399);
							}
							BgL_port1323z00_1476 = BgL_res1837z00_1994;
						}
						bgl_display_obj(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
							BgL_port1323z00_1476);
						bgl_display_string(BGl_string1879z00zzuncell_walkz00,
							BgL_port1323z00_1476);
						{	/* Uncell/walk.scm 44 */
							obj_t BgL_arg1448z00_1477;

							{	/* Uncell/walk.scm 44 */
								bool_t BgL_test1948z00_2404;

								if (BGl_integerzf3zf3zz__r4_numbers_6_5_fixnumz00
									(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
									{	/* Uncell/walk.scm 44 */
										if (INTEGERP
											(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00))
											{	/* Uncell/walk.scm 44 */
												BgL_test1948z00_2404 =
													(
													(long)
													CINT
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00)
													> ((long) 1));
											}
										else
											{	/* Uncell/walk.scm 44 */
												BgL_test1948z00_2404 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00
													(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
													BINT(((long) 1)));
									}}
								else
									{	/* Uncell/walk.scm 44 */
										BgL_test1948z00_2404 = ((bool_t) 0);
									}
								if (BgL_test1948z00_2404)
									{	/* Uncell/walk.scm 44 */
										BgL_arg1448z00_1477 = BGl_string1880z00zzuncell_walkz00;
									}
								else
									{	/* Uncell/walk.scm 44 */
										BgL_arg1448z00_1477 = BGl_string1881z00zzuncell_walkz00;
									}
							}
							bgl_display_obj(BgL_arg1448z00_1477, BgL_port1323z00_1476);
						}
						bgl_display_string(BGl_string1882z00zzuncell_walkz00,
							BgL_port1323z00_1476);
						bgl_display_char(((unsigned char) 10), BgL_port1323z00_1476);
					}
					{	/* Uncell/walk.scm 44 */
						obj_t BgL_list1452z00_1483;

						BgL_list1452z00_1483 = MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1452z00_1483);
					}
				}
			else
				{	/* Uncell/walk.scm 44 */
					obj_t BgL_g1135z00_1484;

					BgL_g1135z00_1484 = BNIL;
					{
						obj_t BgL_hooksz00_1487;
						obj_t BgL_hnamesz00_1488;

						BgL_hooksz00_1487 = BgL_g1135z00_1484;
						BgL_hnamesz00_1488 = BNIL;
					BgL_zc3z04anonymousza31453ze3z87_1489:
						if (NULLP(BgL_hooksz00_1487))
							{	/* Uncell/walk.scm 44 */
								return BgL_globalsz00_17;
							}
						else
							{	/* Uncell/walk.scm 44 */
								bool_t BgL_test1952z00_2421;

								{	/* Uncell/walk.scm 44 */
									obj_t BgL_fun1465z00_1496;

									BgL_fun1465z00_1496 = CAR(((obj_t) BgL_hooksz00_1487));
									BgL_test1952z00_2421 =
										CBOOL(PROCEDURE_ENTRY(BgL_fun1465z00_1496)
										(BgL_fun1465z00_1496, BEOA));
								}
								if (BgL_test1952z00_2421)
									{	/* Uncell/walk.scm 44 */
										obj_t BgL_arg1461z00_1493;
										obj_t BgL_arg1462z00_1494;

										BgL_arg1461z00_1493 = CDR(((obj_t) BgL_hooksz00_1487));
										BgL_arg1462z00_1494 = CDR(((obj_t) BgL_hnamesz00_1488));
										{
											obj_t BgL_hnamesz00_2433;
											obj_t BgL_hooksz00_2432;

											BgL_hooksz00_2432 = BgL_arg1461z00_1493;
											BgL_hnamesz00_2433 = BgL_arg1462z00_1494;
											BgL_hnamesz00_1488 = BgL_hnamesz00_2433;
											BgL_hooksz00_1487 = BgL_hooksz00_2432;
											goto BgL_zc3z04anonymousza31453ze3z87_1489;
										}
									}
								else
									{	/* Uncell/walk.scm 44 */
										obj_t BgL_arg1464z00_1495;

										BgL_arg1464z00_1495 = CAR(((obj_t) BgL_hnamesz00_1488));
										return
											BGl_internalzd2errorzd2zztools_errorz00
											(BGl_za2currentzd2passza2zd2zzengine_passz00,
											BGl_string1883z00zzuncell_walkz00, BgL_arg1464z00_1495);
									}
							}
					}
				}
		}

	}



/* &uncell-walk! */
	obj_t BGl_z62uncellzd2walkz12za2zzuncell_walkz00(obj_t BgL_envz00_2173,
		obj_t BgL_globalsz00_2174)
	{
		{	/* Uncell/walk.scm 41 */
			return BGl_uncellzd2walkz12zc0zzuncell_walkz00(BgL_globalsz00_2174);
		}

	}



/* uncell-fun! */
	obj_t BGl_uncellzd2funz12zc0zzuncell_walkz00(obj_t BgL_varz00_18)
	{
		{	/* Uncell/walk.scm 49 */
			{	/* Uncell/walk.scm 50 */
				obj_t BgL_arg1474z00_1499;

				BgL_arg1474z00_1499 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_idz00);
				BGl_enterzd2functionzd2zztools_errorz00(BgL_arg1474z00_1499);
			}
			{	/* Uncell/walk.scm 51 */
				BgL_valuez00_bglt BgL_funz00_1500;

				BgL_funz00_1500 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_varz00_18)))->BgL_valuez00);
				{	/* Uncell/walk.scm 51 */
					obj_t BgL_bodyz00_1501;

					BgL_bodyz00_1501 =
						(((BgL_sfunz00_bglt) COBJECT(
								((BgL_sfunz00_bglt) BgL_funz00_1500)))->BgL_bodyz00);
					{	/* Uncell/walk.scm 52 */

						BGl_markzd2cellzd2zzuncell_walkz00(
							((BgL_nodez00_bglt) BgL_bodyz00_1501));
						BGl_uncellz12z12zzuncell_walkz00(
							((BgL_nodez00_bglt) BgL_bodyz00_1501));
						BGl_leavezd2functionzd2zztools_errorz00();
						return BgL_varz00_18;
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			{	/* Uncell/walk.scm 35 */
				obj_t BgL_arg1495z00_1506;
				obj_t BgL_arg1497z00_1507;

				{	/* Uncell/walk.scm 35 */
					obj_t BgL_v1330z00_1540;

					BgL_v1330z00_1540 = create_vector(((long) 1));
					{	/* Uncell/walk.scm 35 */
						obj_t BgL_arg1552z00_1541;

						BgL_arg1552z00_1541 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc1886z00zzuncell_walkz00,
							BGl_proc1885z00zzuncell_walkz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1884z00zzuncell_walkz00,
							CNST_TABLE_REF(((long) 2)));
						VECTOR_SET(BgL_v1330z00_1540, ((long) 0), BgL_arg1552z00_1541);
					}
					BgL_arg1495z00_1506 = BgL_v1330z00_1540;
				}
				{	/* Uncell/walk.scm 35 */
					obj_t BgL_v1331z00_1554;

					BgL_v1331z00_1554 = create_vector(((long) 0));
					BgL_arg1497z00_1507 = BgL_v1331z00_1554;
				}
				return (BGl_localzf2infozf2zzuncell_walkz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 4)), BGl_localz00zzast_varz00, ((long) 1451),
						BGl_proc1890z00zzuncell_walkz00, BGl_proc1889z00zzuncell_walkz00,
						BFALSE, BGl_proc1888z00zzuncell_walkz00,
						BGl_proc1887z00zzuncell_walkz00, BgL_arg1495z00_1506,
						BgL_arg1497z00_1507), BUNSPEC);
		}}

	}



/* &lambda1530 */
	BgL_localz00_bglt BGl_z62lambda1530z62zzuncell_walkz00(obj_t BgL_envz00_2182,
		obj_t BgL_o1118z00_2183)
	{
		{	/* Uncell/walk.scm 35 */
			{	/* Uncell/walk.scm 35 */
				long BgL_arg1536z00_2253;

				{	/* Uncell/walk.scm 35 */
					obj_t BgL_arg1537z00_2254;

					{	/* Uncell/walk.scm 35 */
						obj_t BgL_arg1540z00_2255;

						{	/* Uncell/walk.scm 35 */
							long BgL_arg1816z00_2256;

							{	/* Uncell/walk.scm 35 */
								long BgL_arg1817z00_2257;

								{	/* Uncell/walk.scm 35 */
									long BgL_res1845z00_2258;

									BgL_res1845z00_2258 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_localz00_bglt) BgL_o1118z00_2183)));
									BgL_arg1817z00_2257 = BgL_res1845z00_2258;
								}
								BgL_arg1816z00_2256 = (BgL_arg1817z00_2257 - OBJECT_TYPE);
							}
							BgL_arg1540z00_2255 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2256);
						}
						BgL_arg1537z00_2254 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1540z00_2255);
					}
					{	/* Uncell/walk.scm 35 */
						long BgL_res1847z00_2259;

						{	/* Uncell/walk.scm 35 */
							obj_t BgL_tmpz00_2465;

							BgL_tmpz00_2465 = ((obj_t) BgL_arg1537z00_2254);
							BgL_res1847z00_2259 = BGL_CLASS_INDEX(BgL_tmpz00_2465);
						}
						BgL_arg1536z00_2253 = BgL_res1847z00_2259;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_localz00_bglt) BgL_o1118z00_2183)), BgL_arg1536z00_2253);
			}
			{	/* Uncell/walk.scm 35 */
				BgL_objectz00_bglt BgL_tmpz00_2471;

				BgL_tmpz00_2471 =
					((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1118z00_2183));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2471, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_o1118z00_2183));
			return ((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1118z00_2183));
		}

	}



/* &<@anonymous:1529> */
	obj_t BGl_z62zc3z04anonymousza31529ze3ze5zzuncell_walkz00(obj_t
		BgL_envz00_2184, obj_t BgL_new1117z00_2185)
	{
		{	/* Uncell/walk.scm 35 */
			{
				BgL_localz00_bglt BgL_auxz00_2479;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1117z00_2185))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_2487;

					{	/* Uncell/walk.scm 35 */
						obj_t BgL_classz00_2261;

						BgL_classz00_2261 = BGl_typez00zztype_typez00;
						{	/* Uncell/walk.scm 35 */
							obj_t BgL__ortest_1106z00_2262;

							BgL__ortest_1106z00_2262 = BGL_CLASS_NIL(BgL_classz00_2261);
							if (CBOOL(BgL__ortest_1106z00_2262))
								{	/* Uncell/walk.scm 35 */
									BgL_auxz00_2487 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_2262);
								}
							else
								{	/* Uncell/walk.scm 35 */
									BgL_auxz00_2487 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2261));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1117z00_2185))))->BgL_typez00) =
						((BgL_typez00_bglt) BgL_auxz00_2487), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_2497;

					{	/* Uncell/walk.scm 35 */
						obj_t BgL_classz00_2263;

						BgL_classz00_2263 = BGl_valuez00zzast_varz00;
						{	/* Uncell/walk.scm 35 */
							obj_t BgL__ortest_1106z00_2264;

							BgL__ortest_1106z00_2264 = BGL_CLASS_NIL(BgL_classz00_2263);
							if (CBOOL(BgL__ortest_1106z00_2264))
								{	/* Uncell/walk.scm 35 */
									BgL_auxz00_2497 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_2264);
								}
							else
								{	/* Uncell/walk.scm 35 */
									BgL_auxz00_2497 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2263));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_new1117z00_2185))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_2497), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_localz00_bglt) BgL_new1117z00_2185))))->BgL_accessz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt) ((BgL_localz00_bglt)
										BgL_new1117z00_2185))))->BgL_keyz00) =
					((long) ((long) 0)), BUNSPEC);
				{
					BgL_localzf2infozf2_bglt BgL_auxz00_2528;

					{
						obj_t BgL_auxz00_2529;

						{	/* Uncell/walk.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_2530;

							BgL_tmpz00_2530 =
								((BgL_objectz00_bglt)
								((BgL_localz00_bglt) BgL_new1117z00_2185));
							BgL_auxz00_2529 = BGL_OBJECT_WIDENING(BgL_tmpz00_2530);
						}
						BgL_auxz00_2528 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2529);
					}
					((((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2528))->
							BgL_escapez00) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				BgL_auxz00_2479 = ((BgL_localz00_bglt) BgL_new1117z00_2185);
				return ((obj_t) BgL_auxz00_2479);
			}
		}

	}



/* &lambda1522 */
	BgL_localz00_bglt BGl_z62lambda1522z62zzuncell_walkz00(obj_t BgL_envz00_2186,
		obj_t BgL_o1114z00_2187)
	{
		{	/* Uncell/walk.scm 35 */
			{	/* Uncell/walk.scm 35 */
				BgL_localzf2infozf2_bglt BgL_wide1116z00_2266;

				BgL_wide1116z00_2266 =
					((BgL_localzf2infozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_localzf2infozf2_bgl))));
				{	/* Uncell/walk.scm 35 */
					obj_t BgL_auxz00_2543;
					BgL_objectz00_bglt BgL_tmpz00_2539;

					BgL_auxz00_2543 = ((obj_t) BgL_wide1116z00_2266);
					BgL_tmpz00_2539 =
						((BgL_objectz00_bglt)
						((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1114z00_2187)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2539, BgL_auxz00_2543);
				}
				((BgL_objectz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1114z00_2187)));
				{	/* Uncell/walk.scm 35 */
					long BgL_arg1528z00_2267;

					{	/* Uncell/walk.scm 35 */
						long BgL_res1844z00_2268;

						BgL_res1844z00_2268 =
							BGL_CLASS_INDEX(BGl_localzf2infozf2zzuncell_walkz00);
						BgL_arg1528z00_2267 = BgL_res1844z00_2268;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_localz00_bglt)
								((BgL_localz00_bglt) BgL_o1114z00_2187))), BgL_arg1528z00_2267);
				}
				return
					((BgL_localz00_bglt)
					((BgL_localz00_bglt) ((BgL_localz00_bglt) BgL_o1114z00_2187)));
			}
		}

	}



/* &lambda1498 */
	BgL_localz00_bglt BGl_z62lambda1498z62zzuncell_walkz00(obj_t BgL_envz00_2188,
		obj_t BgL_id1102z00_2189, obj_t BgL_name1103z00_2190,
		obj_t BgL_type1104z00_2191, obj_t BgL_value1105z00_2192,
		obj_t BgL_access1106z00_2193, obj_t BgL_fastzd2alpha1107zd2_2194,
		obj_t BgL_removable1108z00_2195, obj_t BgL_occurrence1109z00_2196,
		obj_t BgL_occurrencew1110z00_2197, obj_t BgL_userzf31111zf3_2198,
		obj_t BgL_key1112z00_2199, obj_t BgL_escape1113z00_2200)
	{
		{	/* Uncell/walk.scm 35 */
			{	/* Uncell/walk.scm 35 */
				long BgL_occurrence1109z00_2272;
				long BgL_occurrencew1110z00_2273;
				bool_t BgL_userzf31111zf3_2274;
				long BgL_key1112z00_2275;
				bool_t BgL_escape1113z00_2276;

				BgL_occurrence1109z00_2272 = (long) CINT(BgL_occurrence1109z00_2196);
				BgL_occurrencew1110z00_2273 = (long) CINT(BgL_occurrencew1110z00_2197);
				BgL_userzf31111zf3_2274 = CBOOL(BgL_userzf31111zf3_2198);
				BgL_key1112z00_2275 = (long) CINT(BgL_key1112z00_2199);
				BgL_escape1113z00_2276 = CBOOL(BgL_escape1113z00_2200);
				{	/* Uncell/walk.scm 35 */
					BgL_localz00_bglt BgL_new1152z00_2277;

					{	/* Uncell/walk.scm 35 */
						BgL_localz00_bglt BgL_tmp1150z00_2278;
						BgL_localzf2infozf2_bglt BgL_wide1151z00_2279;

						{
							BgL_localz00_bglt BgL_auxz00_2562;

							{	/* Uncell/walk.scm 35 */
								BgL_localz00_bglt BgL_new1149z00_2280;

								BgL_new1149z00_2280 =
									((BgL_localz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_localz00_bgl))));
								{	/* Uncell/walk.scm 35 */
									long BgL_arg1521z00_2281;

									{	/* Uncell/walk.scm 35 */
										long BgL_res1842z00_2282;

										BgL_res1842z00_2282 =
											BGL_CLASS_INDEX(BGl_localz00zzast_varz00);
										BgL_arg1521z00_2281 = BgL_res1842z00_2282;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1149z00_2280),
										BgL_arg1521z00_2281);
								}
								{	/* Uncell/walk.scm 35 */
									BgL_objectz00_bglt BgL_tmpz00_2567;

									BgL_tmpz00_2567 = ((BgL_objectz00_bglt) BgL_new1149z00_2280);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2567, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1149z00_2280);
								BgL_auxz00_2562 = BgL_new1149z00_2280;
							}
							BgL_tmp1150z00_2278 = ((BgL_localz00_bglt) BgL_auxz00_2562);
						}
						BgL_wide1151z00_2279 =
							((BgL_localzf2infozf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_localzf2infozf2_bgl))));
						{	/* Uncell/walk.scm 35 */
							obj_t BgL_auxz00_2575;
							BgL_objectz00_bglt BgL_tmpz00_2573;

							BgL_auxz00_2575 = ((obj_t) BgL_wide1151z00_2279);
							BgL_tmpz00_2573 = ((BgL_objectz00_bglt) BgL_tmp1150z00_2278);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2573, BgL_auxz00_2575);
						}
						((BgL_objectz00_bglt) BgL_tmp1150z00_2278);
						{	/* Uncell/walk.scm 35 */
							long BgL_arg1518z00_2283;

							{	/* Uncell/walk.scm 35 */
								long BgL_res1843z00_2284;

								BgL_res1843z00_2284 =
									BGL_CLASS_INDEX(BGl_localzf2infozf2zzuncell_walkz00);
								BgL_arg1518z00_2283 = BgL_res1843z00_2284;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1150z00_2278),
								BgL_arg1518z00_2283);
						}
						BgL_new1152z00_2277 = ((BgL_localz00_bglt) BgL_tmp1150z00_2278);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1152z00_2277)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1102z00_2189)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_namez00) =
						((obj_t) BgL_name1103z00_2190), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1104z00_2191)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1105z00_2192)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_accessz00) =
						((obj_t) BgL_access1106z00_2193), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1107zd2_2194), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_removablez00) =
						((obj_t) BgL_removable1108z00_2195), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_occurrencez00) =
						((long) BgL_occurrence1109z00_2272), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1110z00_2273), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1152z00_2277)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31111zf3_2274), BUNSPEC);
					((((BgL_localz00_bglt) COBJECT(((BgL_localz00_bglt)
										BgL_new1152z00_2277)))->BgL_keyz00) =
						((long) BgL_key1112z00_2275), BUNSPEC);
					{
						BgL_localzf2infozf2_bglt BgL_auxz00_2608;

						{
							obj_t BgL_auxz00_2609;

							{	/* Uncell/walk.scm 35 */
								BgL_objectz00_bglt BgL_tmpz00_2610;

								BgL_tmpz00_2610 = ((BgL_objectz00_bglt) BgL_new1152z00_2277);
								BgL_auxz00_2609 = BGL_OBJECT_WIDENING(BgL_tmpz00_2610);
							}
							BgL_auxz00_2608 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2609);
						}
						((((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2608))->
								BgL_escapez00) = ((bool_t) BgL_escape1113z00_2276), BUNSPEC);
					}
					return BgL_new1152z00_2277;
				}
			}
		}

	}



/* &<@anonymous:1567> */
	obj_t BGl_z62zc3z04anonymousza31567ze3ze5zzuncell_walkz00(obj_t
		BgL_envz00_2201)
	{
		{	/* Uncell/walk.scm 35 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1566 */
	obj_t BGl_z62lambda1566z62zzuncell_walkz00(obj_t BgL_envz00_2202,
		obj_t BgL_oz00_2203, obj_t BgL_vz00_2204)
	{
		{	/* Uncell/walk.scm 35 */
			{	/* Uncell/walk.scm 35 */
				bool_t BgL_vz00_2286;

				BgL_vz00_2286 = CBOOL(BgL_vz00_2204);
				{
					BgL_localzf2infozf2_bglt BgL_auxz00_2617;

					{
						obj_t BgL_auxz00_2618;

						{	/* Uncell/walk.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_2619;

							BgL_tmpz00_2619 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2203));
							BgL_auxz00_2618 = BGL_OBJECT_WIDENING(BgL_tmpz00_2619);
						}
						BgL_auxz00_2617 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2618);
					}
					return
						((((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2617))->
							BgL_escapez00) = ((bool_t) BgL_vz00_2286), BUNSPEC);
				}
			}
		}

	}



/* &lambda1565 */
	obj_t BGl_z62lambda1565z62zzuncell_walkz00(obj_t BgL_envz00_2205,
		obj_t BgL_oz00_2206)
	{
		{	/* Uncell/walk.scm 35 */
			{	/* Uncell/walk.scm 35 */
				bool_t BgL_tmpz00_2625;

				{
					BgL_localzf2infozf2_bglt BgL_auxz00_2626;

					{
						obj_t BgL_auxz00_2627;

						{	/* Uncell/walk.scm 35 */
							BgL_objectz00_bglt BgL_tmpz00_2628;

							BgL_tmpz00_2628 =
								((BgL_objectz00_bglt) ((BgL_localz00_bglt) BgL_oz00_2206));
							BgL_auxz00_2627 = BGL_OBJECT_WIDENING(BgL_tmpz00_2628);
						}
						BgL_auxz00_2626 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2627);
					}
					BgL_tmpz00_2625 =
						(((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2626))->
						BgL_escapez00);
				}
				return BBOOL(BgL_tmpz00_2625);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_markzd2cellzd2envz00zzuncell_walkz00,
				BGl_proc1891z00zzuncell_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1892z00zzuncell_walkz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_uncellz12zd2envzc0zzuncell_walkz00,
				BGl_proc1893z00zzuncell_walkz00, BGl_nodez00zzast_nodez00,
				BGl_string1894z00zzuncell_walkz00);
		}

	}



/* &uncell!1342 */
	obj_t BGl_z62uncellz121342z70zzuncell_walkz00(obj_t BgL_envz00_2213,
		obj_t BgL_nodez00_2214)
	{
		{	/* Uncell/walk.scm 104 */
			return
				((obj_t)
				BGl_walk0z12z12zzast_walkz00(
					((BgL_nodez00_bglt) BgL_nodez00_2214),
					BGl_uncellz12zd2envzc0zzuncell_walkz00));
		}

	}



/* &mark-cell1332 */
	obj_t BGl_z62markzd2cell1332zb0zzuncell_walkz00(obj_t BgL_envz00_2215,
		obj_t BgL_nodez00_2216)
	{
		{	/* Uncell/walk.scm 64 */
			return
				BGl_walk0z00zzast_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2216),
				BGl_markzd2cellzd2envz00zzuncell_walkz00);
		}

	}



/* mark-cell */
	obj_t BGl_markzd2cellzd2zzuncell_walkz00(BgL_nodez00_bglt BgL_nodez00_19)
	{
		{	/* Uncell/walk.scm 64 */
			{	/* Uncell/walk.scm 64 */
				obj_t BgL_method1333z00_1589;

				{	/* Uncell/walk.scm 64 */
					obj_t BgL_res1858z00_2090;

					{	/* Uncell/walk.scm 64 */
						long BgL_objzd2classzd2numz00_2055;

						{	/* Uncell/walk.scm 64 */
							long BgL_res1848z00_2058;

							BgL_res1848z00_2058 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_19));
							BgL_objzd2classzd2numz00_2055 = BgL_res1848z00_2058;
						}
						{	/* Uncell/walk.scm 64 */
							obj_t BgL_arg1813z00_2056;

							BgL_arg1813z00_2056 =
								PROCEDURE_REF(BGl_markzd2cellzd2envz00zzuncell_walkz00,
								(int) (((long) 1)));
							{	/* Uncell/walk.scm 64 */
								int BgL_offsetz00_2060;

								BgL_offsetz00_2060 = (int) (BgL_objzd2classzd2numz00_2055);
								{	/* Uncell/walk.scm 64 */
									long BgL_offsetz00_2061;

									BgL_offsetz00_2061 =
										((long) (BgL_offsetz00_2060) - OBJECT_TYPE);
									{	/* Uncell/walk.scm 64 */
										long BgL_modz00_2062;

										BgL_modz00_2062 =
											(BgL_offsetz00_2061 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Uncell/walk.scm 64 */
											long BgL_restz00_2064;

											BgL_restz00_2064 =
												(BgL_offsetz00_2061 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Uncell/walk.scm 64 */

												{	/* Uncell/walk.scm 64 */
													obj_t BgL_bucketz00_2066;

													BgL_bucketz00_2066 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2056), BgL_modz00_2062);
													BgL_res1858z00_2090 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2066), BgL_restz00_2064);
					}}}}}}}}
					BgL_method1333z00_1589 = BgL_res1858z00_2090;
				}
				return
					PROCEDURE_ENTRY(BgL_method1333z00_1589) (BgL_method1333z00_1589,
					((obj_t) BgL_nodez00_19), BEOA);
			}
		}

	}



/* &mark-cell */
	obj_t BGl_z62markzd2cellzb0zzuncell_walkz00(obj_t BgL_envz00_2211,
		obj_t BgL_nodez00_2212)
	{
		{	/* Uncell/walk.scm 64 */
			return
				BGl_markzd2cellzd2zzuncell_walkz00(
				((BgL_nodez00_bglt) BgL_nodez00_2212));
		}

	}



/* uncell! */
	BgL_nodez00_bglt BGl_uncellz12z12zzuncell_walkz00(BgL_nodez00_bglt
		BgL_nodez00_24)
	{
		{	/* Uncell/walk.scm 104 */
			{	/* Uncell/walk.scm 104 */
				obj_t BgL_method1343z00_1590;

				{	/* Uncell/walk.scm 104 */
					obj_t BgL_res1869z00_2127;

					{	/* Uncell/walk.scm 104 */
						long BgL_objzd2classzd2numz00_2092;

						{	/* Uncell/walk.scm 104 */
							long BgL_res1859z00_2095;

							BgL_res1859z00_2095 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_nodez00_24));
							BgL_objzd2classzd2numz00_2092 = BgL_res1859z00_2095;
						}
						{	/* Uncell/walk.scm 104 */
							obj_t BgL_arg1813z00_2093;

							BgL_arg1813z00_2093 =
								PROCEDURE_REF(BGl_uncellz12zd2envzc0zzuncell_walkz00,
								(int) (((long) 1)));
							{	/* Uncell/walk.scm 104 */
								int BgL_offsetz00_2097;

								BgL_offsetz00_2097 = (int) (BgL_objzd2classzd2numz00_2092);
								{	/* Uncell/walk.scm 104 */
									long BgL_offsetz00_2098;

									BgL_offsetz00_2098 =
										((long) (BgL_offsetz00_2097) - OBJECT_TYPE);
									{	/* Uncell/walk.scm 104 */
										long BgL_modz00_2099;

										BgL_modz00_2099 =
											(BgL_offsetz00_2098 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* Uncell/walk.scm 104 */
											long BgL_restz00_2101;

											BgL_restz00_2101 =
												(BgL_offsetz00_2098 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* Uncell/walk.scm 104 */

												{	/* Uncell/walk.scm 104 */
													obj_t BgL_bucketz00_2103;

													BgL_bucketz00_2103 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2093), BgL_modz00_2099);
													BgL_res1869z00_2127 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2103), BgL_restz00_2101);
					}}}}}}}}
					BgL_method1343z00_1590 = BgL_res1869z00_2127;
				}
				return
					((BgL_nodez00_bglt)
					PROCEDURE_ENTRY(BgL_method1343z00_1590) (BgL_method1343z00_1590,
						((obj_t) BgL_nodez00_24), BEOA));
			}
		}

	}



/* &uncell! */
	BgL_nodez00_bglt BGl_z62uncellz12z70zzuncell_walkz00(obj_t BgL_envz00_2208,
		obj_t BgL_nodez00_2209)
	{
		{	/* Uncell/walk.scm 104 */
			return
				BGl_uncellz12z12zzuncell_walkz00(((BgL_nodez00_bglt) BgL_nodez00_2209));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_markzd2cellzd2envz00zzuncell_walkz00, BGl_varz00zzast_nodez00,
				BGl_proc1895z00zzuncell_walkz00, BGl_string1896z00zzuncell_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_markzd2cellzd2envz00zzuncell_walkz00,
				BGl_letzd2varzd2zzast_nodez00, BGl_proc1897z00zzuncell_walkz00,
				BGl_string1896z00zzuncell_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_markzd2cellzd2envz00zzuncell_walkz00,
				BGl_boxzd2refzd2zzast_nodez00, BGl_proc1898z00zzuncell_walkz00,
				BGl_string1896z00zzuncell_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_markzd2cellzd2envz00zzuncell_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1899z00zzuncell_walkz00,
				BGl_string1896z00zzuncell_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncellz12zd2envzc0zzuncell_walkz00, BGl_letzd2varzd2zzast_nodez00,
				BGl_proc1900z00zzuncell_walkz00, BGl_string1901z00zzuncell_walkz00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncellz12zd2envzc0zzuncell_walkz00, BGl_boxzd2refzd2zzast_nodez00,
				BGl_proc1902z00zzuncell_walkz00, BGl_string1901z00zzuncell_walkz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_uncellz12zd2envzc0zzuncell_walkz00,
				BGl_boxzd2setz12zc0zzast_nodez00, BGl_proc1903z00zzuncell_walkz00,
				BGl_string1901z00zzuncell_walkz00);
		}

	}



/* &uncell!-box-set!1349 */
	BgL_nodez00_bglt BGl_z62uncellz12zd2boxzd2setz121349z62zzuncell_walkz00(obj_t
		BgL_envz00_2224, obj_t BgL_nodez00_2225)
	{
		{	/* Uncell/walk.scm 137 */
			{	/* Uncell/walk.scm 138 */
				BgL_variablez00_bglt BgL_varz00_2291;

				BgL_varz00_2291 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_boxzd2setz12zc0_bglt) COBJECT(
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2225)))->
								BgL_varz00)))->BgL_variablez00);
				if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_varz00_2291),
						BGl_localzf2infozf2zzuncell_walkz00))
					{	/* Uncell/walk.scm 141 */
						bool_t BgL_test1956z00_2720;

						{
							BgL_localzf2infozf2_bglt BgL_auxz00_2721;

							{
								obj_t BgL_auxz00_2722;

								{	/* Uncell/walk.scm 141 */
									BgL_objectz00_bglt BgL_tmpz00_2723;

									BgL_tmpz00_2723 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_2291));
									BgL_auxz00_2722 = BGL_OBJECT_WIDENING(BgL_tmpz00_2723);
								}
								BgL_auxz00_2721 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2722);
							}
							BgL_test1956z00_2720 =
								(((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2721))->
								BgL_escapez00);
						}
						if (BgL_test1956z00_2720)
							{	/* Uncell/walk.scm 141 */
								return
									BGl_walk0z12z12zzast_walkz00(
									((BgL_nodez00_bglt)
										((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2225)),
									BGl_uncellz12zd2envzc0zzuncell_walkz00);
							}
						else
							{	/* Uncell/walk.scm 143 */
								BgL_setqz00_bglt BgL_new1148z00_2292;

								{	/* Uncell/walk.scm 143 */
									BgL_setqz00_bglt BgL_new1147z00_2293;

									BgL_new1147z00_2293 =
										((BgL_setqz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_setqz00_bgl))));
									{	/* Uncell/walk.scm 143 */
										long BgL_arg1707z00_2294;

										{	/* Uncell/walk.scm 143 */
											long BgL_res1875z00_2295;

											BgL_res1875z00_2295 =
												BGL_CLASS_INDEX(BGl_setqz00zzast_nodez00);
											BgL_arg1707z00_2294 = BgL_res1875z00_2295;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1147z00_2293),
											BgL_arg1707z00_2294);
									}
									{	/* Uncell/walk.scm 143 */
										BgL_objectz00_bglt BgL_tmpz00_2736;

										BgL_tmpz00_2736 =
											((BgL_objectz00_bglt) BgL_new1147z00_2293);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2736, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1147z00_2293);
									BgL_new1148z00_2292 = BgL_new1147z00_2293;
								}
								((((BgL_nodez00_bglt) COBJECT(
												((BgL_nodez00_bglt) BgL_new1148z00_2292)))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
													BgL_new1148z00_2292)))->BgL_typez00) =
									((BgL_typez00_bglt) ((BgL_typez00_bglt)
											BGl_za2unspecza2z00zztype_cachez00)), BUNSPEC);
								((((BgL_setqz00_bglt) COBJECT(BgL_new1148z00_2292))->
										BgL_varz00) =
									((BgL_varz00_bglt) (((BgL_boxzd2setz12zc0_bglt)
												COBJECT(((BgL_boxzd2setz12zc0_bglt)
														BgL_nodez00_2225)))->BgL_varz00)), BUNSPEC);
								{
									BgL_nodez00_bglt BgL_auxz00_2748;

									{	/* Uncell/walk.scm 146 */
										BgL_nodez00_bglt BgL_arg1704z00_2296;

										BgL_arg1704z00_2296 =
											(((BgL_boxzd2setz12zc0_bglt) COBJECT(
													((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2225)))->
											BgL_valuez00);
										BgL_auxz00_2748 =
											BGl_uncellz12z12zzuncell_walkz00(BgL_arg1704z00_2296);
									}
									((((BgL_setqz00_bglt) COBJECT(BgL_new1148z00_2292))->
											BgL_valuez00) =
										((BgL_nodez00_bglt) BgL_auxz00_2748), BUNSPEC);
								}
								return ((BgL_nodez00_bglt) BgL_new1148z00_2292);
							}
					}
				else
					{	/* Uncell/walk.scm 139 */
						return
							BGl_walk0z12z12zzast_walkz00(
							((BgL_nodez00_bglt)
								((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2225)),
							BGl_uncellz12zd2envzc0zzuncell_walkz00);
					}
			}
		}

	}



/* &uncell!-box-ref1347 */
	BgL_nodez00_bglt BGl_z62uncellz12zd2boxzd2ref1347z70zzuncell_walkz00(obj_t
		BgL_envz00_2226, obj_t BgL_nodez00_2227)
	{
		{	/* Uncell/walk.scm 125 */
			{	/* Uncell/walk.scm 126 */
				BgL_variablez00_bglt BgL_varz00_2298;

				BgL_varz00_2298 =
					(((BgL_varz00_bglt) COBJECT(
							(((BgL_boxzd2refzd2_bglt) COBJECT(
										((BgL_boxzd2refzd2_bglt) BgL_nodez00_2227)))->
								BgL_varz00)))->BgL_variablez00);
				if (BGl_isazf3zf3zz__objectz00(((obj_t) BgL_varz00_2298),
						BGl_localzf2infozf2zzuncell_walkz00))
					{	/* Uncell/walk.scm 129 */
						bool_t BgL_test1958z00_2763;

						{
							BgL_localzf2infozf2_bglt BgL_auxz00_2764;

							{
								obj_t BgL_auxz00_2765;

								{	/* Uncell/walk.scm 129 */
									BgL_objectz00_bglt BgL_tmpz00_2766;

									BgL_tmpz00_2766 =
										((BgL_objectz00_bglt)
										((BgL_localz00_bglt) BgL_varz00_2298));
									BgL_auxz00_2765 = BGL_OBJECT_WIDENING(BgL_tmpz00_2766);
								}
								BgL_auxz00_2764 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2765);
							}
							BgL_test1958z00_2763 =
								(((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2764))->
								BgL_escapez00);
						}
						if (BgL_test1958z00_2763)
							{	/* Uncell/walk.scm 129 */
								return
									((BgL_nodez00_bglt)
									((BgL_boxzd2refzd2_bglt) BgL_nodez00_2227));
							}
						else
							{	/* Uncell/walk.scm 129 */
								return
									((BgL_nodez00_bglt)
									(((BgL_boxzd2refzd2_bglt) COBJECT(
												((BgL_boxzd2refzd2_bglt) BgL_nodez00_2227)))->
										BgL_varz00));
							}
					}
				else
					{	/* Uncell/walk.scm 127 */
						return
							((BgL_nodez00_bglt) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2227));
					}
			}
		}

	}



/* &uncell!-let-var1345 */
	BgL_nodez00_bglt BGl_z62uncellz12zd2letzd2var1345z70zzuncell_walkz00(obj_t
		BgL_envz00_2228, obj_t BgL_nodez00_2229)
	{
		{	/* Uncell/walk.scm 110 */
			{	/* Uncell/walk.scm 112 */
				obj_t BgL_g1329z00_2300;

				BgL_g1329z00_2300 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2229)))->BgL_bindingsz00);
				{
					obj_t BgL_l1327z00_2302;

					BgL_l1327z00_2302 = BgL_g1329z00_2300;
				BgL_zc3z04anonymousza31635ze3z87_2301:
					if (PAIRP(BgL_l1327z00_2302))
						{	/* Uncell/walk.scm 112 */
							{	/* Uncell/walk.scm 113 */
								obj_t BgL_bindingz00_2303;

								BgL_bindingz00_2303 = CAR(BgL_l1327z00_2302);
								{	/* Uncell/walk.scm 113 */
									bool_t BgL_test1960z00_2784;

									if (
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															CAR(
																((obj_t) BgL_bindingz00_2303)))))->
												BgL_accessz00) == CNST_TABLE_REF(((long) 6))))
										{	/* Uncell/walk.scm 114 */
											obj_t BgL_arg1672z00_2304;

											BgL_arg1672z00_2304 = CDR(((obj_t) BgL_bindingz00_2303));
											BgL_test1960z00_2784 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1672z00_2304,
												BGl_makezd2boxzd2zzast_nodez00);
										}
									else
										{	/* Uncell/walk.scm 113 */
											BgL_test1960z00_2784 = ((bool_t) 0);
										}
									if (BgL_test1960z00_2784)
										{	/* Uncell/walk.scm 115 */
											BgL_localz00_bglt BgL_i1144z00_2305;

											BgL_i1144z00_2305 =
												((BgL_localz00_bglt)
												CAR(((obj_t) BgL_bindingz00_2303)));
											{	/* Uncell/walk.scm 116 */
												bool_t BgL_test1962z00_2798;

												{
													BgL_localzf2infozf2_bglt BgL_auxz00_2799;

													{
														obj_t BgL_auxz00_2800;

														{	/* Uncell/walk.scm 116 */
															BgL_objectz00_bglt BgL_tmpz00_2801;

															BgL_tmpz00_2801 =
																((BgL_objectz00_bglt) BgL_i1144z00_2305);
															BgL_auxz00_2800 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2801);
														}
														BgL_auxz00_2799 =
															((BgL_localzf2infozf2_bglt) BgL_auxz00_2800);
													}
													BgL_test1962z00_2798 =
														(((BgL_localzf2infozf2_bglt)
															COBJECT(BgL_auxz00_2799))->BgL_escapez00);
												}
												if (BgL_test1962z00_2798)
													{	/* Uncell/walk.scm 116 */
														BFALSE;
													}
												else
													{	/* Uncell/walk.scm 116 */
														{	/* Uncell/walk.scm 117 */
															BgL_nodez00_bglt BgL_arg1667z00_2306;

															BgL_arg1667z00_2306 =
																(((BgL_makezd2boxzd2_bglt) COBJECT(
																		((BgL_makezd2boxzd2_bglt)
																			CDR(
																				((obj_t) BgL_bindingz00_2303)))))->
																BgL_valuez00);
															{	/* Uncell/walk.scm 117 */
																obj_t BgL_auxz00_2812;
																obj_t BgL_tmpz00_2810;

																BgL_auxz00_2812 = ((obj_t) BgL_arg1667z00_2306);
																BgL_tmpz00_2810 = ((obj_t) BgL_bindingz00_2303);
																SET_CDR(BgL_tmpz00_2810, BgL_auxz00_2812);
															}
														}
														((((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_i1144z00_2305)))->BgL_typez00) =
															((BgL_typez00_bglt) ((BgL_typez00_bglt)
																	BGl_za2objza2z00zztype_cachez00)), BUNSPEC);
													}
											}
										}
									else
										{	/* Uncell/walk.scm 113 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1327z00_2818;

								BgL_l1327z00_2818 = CDR(BgL_l1327z00_2302);
								BgL_l1327z00_2302 = BgL_l1327z00_2818;
								goto BgL_zc3z04anonymousza31635ze3z87_2301;
							}
						}
					else
						{	/* Uncell/walk.scm 112 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_walk0z12z12zzast_walkz00(
				((BgL_nodez00_bglt)
					((BgL_letzd2varzd2_bglt) BgL_nodez00_2229)),
				BGl_uncellz12zd2envzc0zzuncell_walkz00);
		}

	}



/* &mark-cell-box-set!1341 */
	obj_t BGl_z62markzd2cellzd2boxzd2setz121341za2zzuncell_walkz00(obj_t
		BgL_envz00_2230, obj_t BgL_nodez00_2231)
	{
		{	/* Uncell/walk.scm 96 */
			return
				BGl_markzd2cellzd2zzuncell_walkz00(
				(((BgL_boxzd2setz12zc0_bglt) COBJECT(
							((BgL_boxzd2setz12zc0_bglt) BgL_nodez00_2231)))->BgL_valuez00));
		}

	}



/* &mark-cell-box-ref1339 */
	obj_t BGl_z62markzd2cellzd2boxzd2ref1339zb0zzuncell_walkz00(obj_t
		BgL_envz00_2232, obj_t BgL_nodez00_2233)
	{
		{	/* Uncell/walk.scm 90 */
			return ((obj_t) ((BgL_boxzd2refzd2_bglt) BgL_nodez00_2233));
		}

	}



/* &mark-cell-let-var1337 */
	obj_t BGl_z62markzd2cellzd2letzd2var1337zb0zzuncell_walkz00(obj_t
		BgL_envz00_2234, obj_t BgL_nodez00_2235)
	{
		{	/* Uncell/walk.scm 78 */
			{	/* Uncell/walk.scm 80 */
				obj_t BgL_g1326z00_2310;

				BgL_g1326z00_2310 =
					(((BgL_letzd2varzd2_bglt) COBJECT(
							((BgL_letzd2varzd2_bglt) BgL_nodez00_2235)))->BgL_bindingsz00);
				{
					obj_t BgL_l1324z00_2312;

					BgL_l1324z00_2312 = BgL_g1326z00_2310;
				BgL_zc3z04anonymousza31588ze3z87_2311:
					if (PAIRP(BgL_l1324z00_2312))
						{	/* Uncell/walk.scm 80 */
							{	/* Uncell/walk.scm 81 */
								obj_t BgL_bindingz00_2313;

								BgL_bindingz00_2313 = CAR(BgL_l1324z00_2312);
								{	/* Uncell/walk.scm 81 */
									bool_t BgL_test1964z00_2833;

									if (
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															CAR(
																((obj_t) BgL_bindingz00_2313)))))->
												BgL_accessz00) == CNST_TABLE_REF(((long) 6))))
										{	/* Uncell/walk.scm 82 */
											obj_t BgL_arg1611z00_2314;

											BgL_arg1611z00_2314 = CDR(((obj_t) BgL_bindingz00_2313));
											BgL_test1964z00_2833 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1611z00_2314,
												BGl_makezd2boxzd2zzast_nodez00);
										}
									else
										{	/* Uncell/walk.scm 81 */
											BgL_test1964z00_2833 = ((bool_t) 0);
										}
									if (BgL_test1964z00_2833)
										{	/* Uncell/walk.scm 83 */
											BgL_localz00_bglt BgL_tmp1139z00_2315;

											BgL_tmp1139z00_2315 =
												((BgL_localz00_bglt)
												CAR(((obj_t) BgL_bindingz00_2313)));
											{	/* Uncell/walk.scm 83 */
												BgL_localzf2infozf2_bglt BgL_wide1141z00_2316;

												BgL_wide1141z00_2316 =
													((BgL_localzf2infozf2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_localzf2infozf2_bgl))));
												{	/* Uncell/walk.scm 83 */
													obj_t BgL_auxz00_2851;
													BgL_objectz00_bglt BgL_tmpz00_2848;

													BgL_auxz00_2851 = ((obj_t) BgL_wide1141z00_2316);
													BgL_tmpz00_2848 =
														((BgL_objectz00_bglt)
														((BgL_localz00_bglt) BgL_tmp1139z00_2315));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2848,
														BgL_auxz00_2851);
												}
												((BgL_objectz00_bglt)
													((BgL_localz00_bglt) BgL_tmp1139z00_2315));
												{	/* Uncell/walk.scm 83 */
													long BgL_arg1606z00_2317;

													{	/* Uncell/walk.scm 83 */
														long BgL_res1872z00_2318;

														BgL_res1872z00_2318 =
															BGL_CLASS_INDEX
															(BGl_localzf2infozf2zzuncell_walkz00);
														BgL_arg1606z00_2317 = BgL_res1872z00_2318;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_localz00_bglt) BgL_tmp1139z00_2315)),
														BgL_arg1606z00_2317);
												}
												((BgL_localz00_bglt)
													((BgL_localz00_bglt) BgL_tmp1139z00_2315));
											}
											{
												BgL_localzf2infozf2_bglt BgL_auxz00_2862;

												{
													obj_t BgL_auxz00_2863;

													{	/* Uncell/walk.scm 83 */
														BgL_objectz00_bglt BgL_tmpz00_2864;

														BgL_tmpz00_2864 =
															((BgL_objectz00_bglt)
															((BgL_localz00_bglt) BgL_tmp1139z00_2315));
														BgL_auxz00_2863 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2864);
													}
													BgL_auxz00_2862 =
														((BgL_localzf2infozf2_bglt) BgL_auxz00_2863);
												}
												((((BgL_localzf2infozf2_bglt)
															COBJECT(BgL_auxz00_2862))->BgL_escapez00) =
													((bool_t) ((bool_t) 0)), BUNSPEC);
											}
											((obj_t) ((BgL_localz00_bglt) BgL_tmp1139z00_2315));
										}
									else
										{	/* Uncell/walk.scm 81 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1324z00_2872;

								BgL_l1324z00_2872 = CDR(BgL_l1324z00_2312);
								BgL_l1324z00_2312 = BgL_l1324z00_2872;
								goto BgL_zc3z04anonymousza31588ze3z87_2311;
							}
						}
					else
						{	/* Uncell/walk.scm 80 */
							((bool_t) 1);
						}
				}
			}
			return
				BGl_walk0z00zzast_walkz00(
				((BgL_nodez00_bglt)
					((BgL_letzd2varzd2_bglt) BgL_nodez00_2235)),
				BGl_markzd2cellzd2envz00zzuncell_walkz00);
		}

	}



/* &mark-cell-var1335 */
	obj_t BGl_z62markzd2cellzd2var1335z62zzuncell_walkz00(obj_t BgL_envz00_2236,
		obj_t BgL_nodez00_2237)
	{
		{	/* Uncell/walk.scm 70 */
			{	/* Uncell/walk.scm 71 */
				bool_t BgL_test1966z00_2877;

				{	/* Uncell/walk.scm 71 */
					BgL_variablez00_bglt BgL_arg1584z00_2320;

					BgL_arg1584z00_2320 =
						(((BgL_varz00_bglt) COBJECT(
								((BgL_varz00_bglt) BgL_nodez00_2237)))->BgL_variablez00);
					BgL_test1966z00_2877 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_arg1584z00_2320), BGl_localzf2infozf2zzuncell_walkz00);
				}
				if (BgL_test1966z00_2877)
					{	/* Uncell/walk.scm 72 */
						BgL_localz00_bglt BgL_i1137z00_2321;

						BgL_i1137z00_2321 =
							((BgL_localz00_bglt)
							(((BgL_varz00_bglt) COBJECT(
										((BgL_varz00_bglt) BgL_nodez00_2237)))->BgL_variablez00));
						{
							BgL_localzf2infozf2_bglt BgL_auxz00_2885;

							{
								obj_t BgL_auxz00_2886;

								{	/* Uncell/walk.scm 73 */
									BgL_objectz00_bglt BgL_tmpz00_2887;

									BgL_tmpz00_2887 = ((BgL_objectz00_bglt) BgL_i1137z00_2321);
									BgL_auxz00_2886 = BGL_OBJECT_WIDENING(BgL_tmpz00_2887);
								}
								BgL_auxz00_2885 = ((BgL_localzf2infozf2_bglt) BgL_auxz00_2886);
							}
							return
								((((BgL_localzf2infozf2_bglt) COBJECT(BgL_auxz00_2885))->
									BgL_escapez00) = ((bool_t) ((bool_t) 1)), BUNSPEC);
						}
					}
				else
					{	/* Uncell/walk.scm 71 */
						return BFALSE;
					}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzuncell_walkz00()
	{
		{	/* Uncell/walk.scm 16 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_lvtypez00(((long) 189769760),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_dumpz00(((long) 271707736),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzast_walkz00(((long) 343174175),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1904z00zzuncell_walkz00));
		}

	}

#ifdef __cplusplus
}
#endif
