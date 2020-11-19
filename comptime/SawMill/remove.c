/*===========================================================================*/
/*   (SawMill/remove.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/remove.scm) */
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

	typedef struct BgL_rtl_regz00_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_varz00;
		obj_t BgL_onexprzf3zf3;
		obj_t BgL_namez00;
		obj_t BgL_keyz00;
		obj_t BgL_hardwarez00;
	}                 *BgL_rtl_regz00_bglt;

	typedef struct BgL_rtl_funz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_funz00_bglt;

	typedef struct BgL_rtl_nopz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_nopz00_bglt;

	typedef struct BgL_rtl_insz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_z52spillz52;
		obj_t BgL_destz00;
		struct BgL_rtl_funz00_bgl *BgL_funz00;
		obj_t BgL_argsz00;
	}                 *BgL_rtl_insz00_bglt;

	typedef struct BgL_blockz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_labelz00;
		obj_t BgL_predsz00;
		obj_t BgL_succsz00;
		obj_t BgL_firstz00;
	}               *BgL_blockz00_bglt;

	typedef struct BgL_defcollectz00_bgl
	{
	}                    *BgL_defcollectz00_bglt;

	typedef struct BgL_rcollectz00_bgl
	{
	}                  *BgL_rcollectz00_bglt;

	typedef struct BgL_ucollectz00_bgl
	{
	}                  *BgL_ucollectz00_bglt;

	typedef struct BgL_removedz00_bgl
	{
	}                 *BgL_removedz00_bglt;

	typedef struct BgL_visitedz00_bgl
	{
	}                 *BgL_visitedz00_bglt;

	typedef struct BgL_bremovedz00_bgl
	{
	}                  *BgL_bremovedz00_bglt;

	typedef struct BgL_cregz00_bgl
	{
		obj_t BgL_defsz00;
		obj_t BgL_nbusesz00;
	}              *BgL_cregz00_bglt;


	static BgL_blockz00_bglt BGl_z62lambda1921z62zzsaw_removez00(obj_t, obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static BgL_blockz00_bglt BGl_z62lambda1925z62zzsaw_removez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1935z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1938z62zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1941z62zzsaw_removez00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1952z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1955z62zzsaw_removez00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1958z62zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1965z62zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1966z62zzsaw_removez00(obj_t, obj_t, obj_t);
	static bool_t BGl_rcollectze70ze7zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1970z62zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1971z62zzsaw_removez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_removez00();
	static obj_t BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_visitedz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_removez00();
	static BgL_blockz00_bglt BGl_z62removez62zzsaw_removez00(obj_t, obj_t);
	static bool_t BGl_removablezf3zf3zzsaw_removez00(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_removez00(obj_t, obj_t);
	static bool_t BGl_dfsze70ze7zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_removez00();
	static bool_t BGl_fixzd2removezd2zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_regzd2ze3cregze70zd6zzsaw_removez00(obj_t);
	BGL_IMPORT obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	static obj_t BGl_removedz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_cregz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_blockzd2removezd2zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t BGl_ucollectz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31940ze3ze5zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_removez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_removez00(obj_t, obj_t);
	static bool_t BGl_ucollectze70ze7zzsaw_removez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1846z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1849z62zzsaw_removez00(obj_t, obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	static BgL_blockz00_bglt BGl_z62lambda1852z62zzsaw_removez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1864z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_removez00 = BUNSPEC;
	static BgL_blockz00_bglt BGl_z62lambda1867z62zzsaw_removez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1870z62zzsaw_removez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_removez00zzsaw_removez00(BgL_blockz00_bglt);
	static BgL_blockz00_bglt BGl_z62lambda1882z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1885z62zzsaw_removez00(obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1888z62zzsaw_removez00(obj_t, obj_t);
	extern obj_t BGl_rtl_purez00zzsaw_defsz00;
	static obj_t BGl_genericzd2initzd2zzsaw_removez00();
	static bool_t BGl_defcollectze70ze7zzsaw_removez00(obj_t);
	static obj_t BGl_rcollectz00zzsaw_removez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_defcollectz00zzsaw_removez00 = BUNSPEC;
	static obj_t BGl_bremovedz00zzsaw_removez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	static obj_t BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzsaw_removez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_removez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_removez00();
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda1902z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda1905z62zzsaw_removez00(obj_t, obj_t);
	static BgL_rtl_insz00_bglt BGl_z62lambda1908z62zzsaw_removez00(obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	extern obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t, obj_t);
	static BgL_blockz00_bglt BGl_z62lambda1918z62zzsaw_removez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_blockz00_bglt);
	static obj_t __cnst[12];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zzsaw_removez00,
		BgL_bgl_za762lambda1958za7622209z00, BGl_z62lambda1958z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2210za7,
		BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zzsaw_removez00,
		BgL_bgl_za762lambda1955za7622211z00, BGl_z62lambda1955z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zzsaw_removez00,
		BgL_bgl_za762lambda1952za7622212z00, BGl_z62lambda1952z62zzsaw_removez00,
		0L, BUNSPEC, 8);
	      DEFINE_STRING(BGl_string2171z00zzsaw_removez00,
		BgL_bgl_string2171za700za7za7s2213za7, "must have only one successor", 28);
	      DEFINE_STRING(BGl_string2204z00zzsaw_removez00,
		BgL_bgl_string2204za700za7za7s2214za7, "saw_remove", 10);
	      DEFINE_STRING(BGl_string2205z00zzsaw_removez00,
		BgL_bgl_string2205za700za7za7s2215za7,
		"creg nbuses obj defs bremoved visited removed ucollect rcollect saw_remove defcollect unlink! ",
		94);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2216za7,
		BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zzsaw_removez00,
		BgL_bgl_za762lambda1852za7622217z00, BGl_z62lambda1852z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2218za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zzsaw_removez00,
		BgL_bgl_za762lambda1849za7622219z00, BGl_z62lambda1849z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzsaw_removez00,
		BgL_bgl_za762lambda1846za7622220z00, BGl_z62lambda1846z62zzsaw_removez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzsaw_removez00,
		BgL_bgl_za762lambda1870za7622221z00, BGl_z62lambda1870z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2222za7,
		BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzsaw_removez00,
		BgL_bgl_za762lambda1867za7622223z00, BGl_z62lambda1867z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zzsaw_removez00,
		BgL_bgl_za762lambda1864za7622224z00, BGl_z62lambda1864z62zzsaw_removez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzsaw_removez00,
		BgL_bgl_za762lambda1888za7622225z00, BGl_z62lambda1888z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2226za7,
		BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zzsaw_removez00,
		BgL_bgl_za762lambda1885za7622227z00, BGl_z62lambda1885z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zzsaw_removez00,
		BgL_bgl_za762lambda1882za7622228z00, BGl_z62lambda1882z62zzsaw_removez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zzsaw_removez00,
		BgL_bgl_za762lambda1908za7622229z00, BGl_z62lambda1908z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2230za7,
		BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zzsaw_removez00,
		BgL_bgl_za762lambda1905za7622231z00, BGl_z62lambda1905z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zzsaw_removez00,
		BgL_bgl_za762lambda1902za7622232z00, BGl_z62lambda1902z62zzsaw_removez00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zzsaw_removez00,
		BgL_bgl_za762lambda1925za7622233z00, BGl_z62lambda1925z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2234za7,
		BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zzsaw_removez00,
		BgL_bgl_za762lambda1921za7622235z00, BGl_z62lambda1921z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2191z00zzsaw_removez00,
		BgL_bgl_za762lambda1918za7622236z00, BGl_z62lambda1918z62zzsaw_removez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzsaw_removez00,
		BgL_bgl_za762lambda1941za7622237z00, BGl_z62lambda1941z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zzsaw_removez00,
		BgL_bgl_za762za7c3za704anonymo2238za7,
		BGl_z62zc3z04anonymousza31940ze3ze5zzsaw_removez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zzsaw_removez00,
		BgL_bgl_za762lambda1938za7622239z00, BGl_z62lambda1938z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zzsaw_removez00,
		BgL_bgl_za762lambda1935za7622240z00, BGl_z62lambda1935z62zzsaw_removez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zzsaw_removez00,
		BgL_bgl_za762lambda1966za7622241z00, BGl_z62lambda1966z62zzsaw_removez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zzsaw_removez00,
		BgL_bgl_za762lambda1965za7622242z00, BGl_z62lambda1965z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zzsaw_removez00,
		BgL_bgl_za762lambda1971za7622243z00, BGl_z62lambda1971z62zzsaw_removez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zzsaw_removez00,
		BgL_bgl_za762lambda1970za7622244z00, BGl_z62lambda1970z62zzsaw_removez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_removezd2envzd2zzsaw_removez00,
		BgL_bgl_za762removeza762za7za7sa2245z00, BGl_z62removez62zzsaw_removez00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_visitedz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_removedz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_cregz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_ucollectz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_rcollectz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_defcollectz00zzsaw_removez00));
		     ADD_ROOT((void *) (&BGl_bremovedz00zzsaw_removez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_removez00(long
		BgL_checksumz00_3459, char *BgL_fromz00_3460)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_removez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_removez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_removez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_removez00();
					BGl_cnstzd2initzd2zzsaw_removez00();
					BGl_importedzd2moduleszd2initz00zzsaw_removez00();
					BGl_objectzd2initzd2zzsaw_removez00();
					return BGl_methodzd2initzd2zzsaw_removez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_remove");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_remove");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			{	/* SawMill/remove.scm 1 */
				obj_t BgL_cportz00_3266;

				{	/* SawMill/remove.scm 1 */
					obj_t BgL_stringz00_3274;

					BgL_stringz00_3274 = BGl_string2205z00zzsaw_removez00;
					{	/* SawMill/remove.scm 1 */
						obj_t BgL_startz00_3275;

						BgL_startz00_3275 = BINT(((long) 0));
						{	/* SawMill/remove.scm 1 */
							obj_t BgL_endz00_3276;

							BgL_endz00_3276 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3274)));
							{	/* SawMill/remove.scm 1 */

								BgL_cportz00_3266 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3274, BgL_startz00_3275, BgL_endz00_3276);
				}}}}
				{
					long BgL_iz00_3267;

					BgL_iz00_3267 = ((long) 11);
				BgL_loopz00_3268:
					if ((BgL_iz00_3267 == ((long) -1)))
						{	/* SawMill/remove.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/remove.scm 1 */
							{	/* SawMill/remove.scm 1 */
								obj_t BgL_arg2207z00_3270;

								{	/* SawMill/remove.scm 1 */

									{	/* SawMill/remove.scm 1 */
										obj_t BgL_locationz00_3272;

										BgL_locationz00_3272 = BBOOL(((bool_t) 0));
										{	/* SawMill/remove.scm 1 */

											BgL_arg2207z00_3270 =
												BGl_readz00zz__readerz00(BgL_cportz00_3266,
												BgL_locationz00_3272);
										}
									}
								}
								{	/* SawMill/remove.scm 1 */
									int BgL_tmpz00_3488;

									BgL_tmpz00_3488 = (int) (BgL_iz00_3267);
									CNST_TABLE_SET(BgL_tmpz00_3488, BgL_arg2207z00_3270);
							}}
							{	/* SawMill/remove.scm 1 */
								int BgL_auxz00_3273;

								BgL_auxz00_3273 = (int) ((BgL_iz00_3267 - ((long) 1)));
								{
									long BgL_iz00_3493;

									BgL_iz00_3493 = (long) (BgL_auxz00_3273);
									BgL_iz00_3267 = BgL_iz00_3493;
									goto BgL_loopz00_3268;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* remove */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_removez00zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_142)
	{
		{	/* SawMill/remove.scm 17 */
			BGl_defcollectze70ze7zzsaw_removez00(((obj_t) BgL_bz00_142));
			BGl_fixzd2removezd2zzsaw_removez00
				(BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_bz00_142),
				BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_bz00_142));
			BGl_dfsze70ze7zzsaw_removez00(((obj_t) BgL_bz00_142));
			{
				obj_t BgL_bz00_1962;

				{
					obj_t BgL_auxz00_3503;

					BgL_bz00_1962 = ((obj_t) BgL_bz00_142);
				BgL_zc3z04anonymousza31640ze3z87_1963:
					if (BGl_isazf3zf3zz__objectz00(BgL_bz00_1962,
							BGl_bremovedz00zzsaw_removez00))
						{	/* SawMill/remove.scm 32 */
							obj_t BgL_sz00_1965;

							{	/* SawMill/remove.scm 32 */
								obj_t BgL_pairz00_2776;

								BgL_pairz00_2776 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_bz00_1962))))->BgL_succsz00);
								BgL_sz00_1965 = CAR(BgL_pairz00_2776);
							}
							if ((BgL_bz00_1962 == BgL_sz00_1965))
								{	/* SawMill/remove.scm 33 */
									BgL_auxz00_3503 = BgL_bz00_1962;
								}
							else
								{
									obj_t BgL_bz00_3512;

									BgL_bz00_3512 = BgL_sz00_1965;
									BgL_bz00_1962 = BgL_bz00_3512;
									goto BgL_zc3z04anonymousza31640ze3z87_1963;
								}
						}
					else
						{	/* SawMill/remove.scm 30 */
							BgL_auxz00_3503 = BgL_bz00_1962;
						}
					return ((BgL_blockz00_bglt) BgL_auxz00_3503);
				}
			}
		}

	}



/* dfs~0 */
	bool_t BGl_dfsze70ze7zzsaw_removez00(obj_t BgL_bz00_1934)
	{
		{	/* SawMill/remove.scm 20 */
			{	/* SawMill/remove.scm 21 */
				BgL_visitedz00_bglt BgL_wide1249z00_1938;

				BgL_wide1249z00_1938 =
					((BgL_visitedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_visitedz00_bgl))));
				{	/* SawMill/remove.scm 21 */
					obj_t BgL_auxz00_3520;
					BgL_objectz00_bglt BgL_tmpz00_3516;

					BgL_auxz00_3520 = ((obj_t) BgL_wide1249z00_1938);
					BgL_tmpz00_3516 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1934)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3516, BgL_auxz00_3520);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1934)));
				{	/* SawMill/remove.scm 21 */
					long BgL_arg1626z00_1939;

					{	/* SawMill/remove.scm 21 */
						long BgL_res2088z00_2759;

						BgL_res2088z00_2759 =
							BGL_CLASS_INDEX(BGl_visitedz00zzsaw_removez00);
						BgL_arg1626z00_1939 = BgL_res2088z00_2759;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_1934))), BgL_arg1626z00_1939);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1934)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_1934));
			{	/* SawMill/remove.scm 22 */
				obj_t BgL_lz00_1941;

				BgL_lz00_1941 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1934)))->BgL_firstz00);
				{	/* SawMill/remove.scm 23 */
					obj_t BgL_nlz00_1942;

					BgL_nlz00_1942 =
						BGl_filterz12z12zz__r4_control_features_6_9z00
						(BGl_proc2170z00zzsaw_removez00, BgL_lz00_1941);
					if (NULLP(BgL_nlz00_1942))
						{	/* SawMill/remove.scm 24 */
							BGl_blockzd2removezd2zzsaw_removez00(
								((BgL_blockz00_bglt) BgL_bz00_1934));
						}
					else
						{	/* SawMill/remove.scm 24 */
							((((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_1934)))->BgL_firstz00) =
								((obj_t) BgL_nlz00_1942), BUNSPEC);
						}
				}
			}
			{	/* SawMill/remove.scm 27 */
				obj_t BgL_g1518z00_1949;

				BgL_g1518z00_1949 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_1934)))->BgL_succsz00);
				{
					obj_t BgL_l1516z00_1951;

					BgL_l1516z00_1951 = BgL_g1518z00_1949;
				BgL_zc3z04anonymousza31634ze3z87_1952:
					if (PAIRP(BgL_l1516z00_1951))
						{	/* SawMill/remove.scm 28 */
							{	/* SawMill/remove.scm 27 */
								obj_t BgL_sz00_1954;

								BgL_sz00_1954 = CAR(BgL_l1516z00_1951);
								{	/* SawMill/remove.scm 27 */
									bool_t BgL_test2252z00_3550;

									if (BGl_isazf3zf3zz__objectz00(BgL_sz00_1954,
											BGl_visitedz00zzsaw_removez00))
										{	/* SawMill/remove.scm 27 */
											BgL_test2252z00_3550 = ((bool_t) 1);
										}
									else
										{	/* SawMill/remove.scm 27 */
											BgL_test2252z00_3550 =
												BGl_isazf3zf3zz__objectz00(BgL_sz00_1954,
												BGl_bremovedz00zzsaw_removez00);
										}
									if (BgL_test2252z00_3550)
										{	/* SawMill/remove.scm 27 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/remove.scm 27 */
											BGl_dfsze70ze7zzsaw_removez00(BgL_sz00_1954);
										}
								}
							}
							{
								obj_t BgL_l1516z00_3555;

								BgL_l1516z00_3555 = CDR(BgL_l1516z00_1951);
								BgL_l1516z00_1951 = BgL_l1516z00_3555;
								goto BgL_zc3z04anonymousza31634ze3z87_1952;
							}
						}
					else
						{	/* SawMill/remove.scm 28 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* &remove */
	BgL_blockz00_bglt BGl_z62removez62zzsaw_removez00(obj_t BgL_envz00_3130,
		obj_t BgL_bz00_3131)
	{
		{	/* SawMill/remove.scm 17 */
			return BGl_removez00zzsaw_removez00(((BgL_blockz00_bglt) BgL_bz00_3131));
		}

	}



/* &<@anonymous:1632> */
	obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3132, obj_t BgL_insz00_3133)
	{
		{	/* SawMill/remove.scm 23 */
			{	/* SawMill/remove.scm 23 */
				bool_t BgL_tmpz00_3559;

				if (BGl_isazf3zf3zz__objectz00(BgL_insz00_3133,
						BGl_removedz00zzsaw_removez00))
					{	/* SawMill/remove.scm 23 */
						BgL_tmpz00_3559 = ((bool_t) 0);
					}
				else
					{	/* SawMill/remove.scm 23 */
						BgL_tmpz00_3559 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_3559);
			}
		}

	}



/* block-remove */
	obj_t BGl_blockzd2removezd2zzsaw_removez00(BgL_blockz00_bglt BgL_bz00_143)
	{
		{	/* SawMill/remove.scm 37 */
			{	/* SawMill/remove.scm 39 */
				bool_t BgL_test2255z00_3563;

				if (NULLP((((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_succsz00)))
					{	/* SawMill/remove.scm 39 */
						BgL_test2255z00_3563 = ((bool_t) 1);
					}
				else
					{	/* SawMill/remove.scm 39 */
						obj_t BgL_tmpz00_3567;

						BgL_tmpz00_3567 =
							CDR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_succsz00));
						BgL_test2255z00_3563 = PAIRP(BgL_tmpz00_3567);
					}
				if (BgL_test2255z00_3563)
					{	/* SawMill/remove.scm 39 */
						BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 0)),
							BGl_string2171z00zzsaw_removez00, ((obj_t) BgL_bz00_143));
					}
				else
					{	/* SawMill/remove.scm 39 */
						BFALSE;
					}
			}
			{	/* SawMill/remove.scm 41 */
				obj_t BgL_sz00_1980;

				BgL_sz00_1980 =
					CAR((((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_succsz00));
				if ((((obj_t) BgL_bz00_143) == BgL_sz00_1980))
					{	/* SawMill/remove.scm 44 */
						obj_t BgL_arg1684z00_1982;

						{	/* SawMill/remove.scm 44 */
							BgL_rtl_insz00_bglt BgL_arg1685z00_1983;

							{	/* SawMill/remove.scm 44 */
								BgL_rtl_insz00_bglt BgL_new1253z00_1985;

								{	/* SawMill/remove.scm 44 */
									BgL_rtl_insz00_bglt BgL_new1252z00_1989;

									BgL_new1252z00_1989 =
										((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_insz00_bgl))));
									{	/* SawMill/remove.scm 44 */
										long BgL_arg1688z00_1990;

										{	/* SawMill/remove.scm 44 */
											long BgL_res2097z00_2782;

											BgL_res2097z00_2782 =
												BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
											BgL_arg1688z00_1990 = BgL_res2097z00_2782;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1252z00_1989),
											BgL_arg1688z00_1990);
									}
									{	/* SawMill/remove.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_3583;

										BgL_tmpz00_3583 =
											((BgL_objectz00_bglt) BgL_new1252z00_1989);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3583, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1252z00_1989);
									BgL_new1253z00_1985 = BgL_new1252z00_1989;
								}
								((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1253z00_1985))->
										BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
								((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1253z00_1985))->
										BgL_z52spillz52) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1253z00_1985))->
										BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
								{
									BgL_rtl_funz00_bglt BgL_auxz00_3590;

									{	/* SawMill/remove.scm 45 */
										BgL_rtl_nopz00_bglt BgL_new1255z00_1986;

										{	/* SawMill/remove.scm 45 */
											BgL_rtl_nopz00_bglt BgL_new1254z00_1987;

											BgL_new1254z00_1987 =
												((BgL_rtl_nopz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_nopz00_bgl))));
											{	/* SawMill/remove.scm 45 */
												long BgL_arg1687z00_1988;

												{	/* SawMill/remove.scm 45 */
													long BgL_res2098z00_2787;

													{	/* SawMill/remove.scm 45 */
														obj_t BgL_classz00_2786;

														BgL_classz00_2786 = BGl_rtl_nopz00zzsaw_defsz00;
														BgL_res2098z00_2787 =
															BGL_CLASS_INDEX(BgL_classz00_2786);
													}
													BgL_arg1687z00_1988 = BgL_res2098z00_2787;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1254z00_1987),
													BgL_arg1687z00_1988);
											}
											BgL_new1255z00_1986 = BgL_new1254z00_1987;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1255z00_1986)))->
												BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
										BgL_auxz00_3590 =
											((BgL_rtl_funz00_bglt) BgL_new1255z00_1986);
									}
									((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1253z00_1985))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_auxz00_3590), BUNSPEC);
								}
								((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1253z00_1985))->
										BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
								BgL_arg1685z00_1983 = BgL_new1253z00_1985;
							}
							{	/* SawMill/remove.scm 44 */
								obj_t BgL_list1686z00_1984;

								BgL_list1686z00_1984 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1685z00_1983), BNIL);
								BgL_arg1684z00_1982 = BgL_list1686z00_1984;
						}}
						return
							((((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_firstz00) =
							((obj_t) ((obj_t) BgL_arg1684z00_1982)), BUNSPEC);
					}
				else
					{	/* SawMill/remove.scm 42 */
						{	/* SawMill/remove.scm 47 */
							BgL_bremovedz00_bglt BgL_wide1258z00_1993;

							BgL_wide1258z00_1993 =
								((BgL_bremovedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_bremovedz00_bgl))));
							{	/* SawMill/remove.scm 47 */
								obj_t BgL_auxz00_3608;
								BgL_objectz00_bglt BgL_tmpz00_3605;

								BgL_auxz00_3608 = ((obj_t) BgL_wide1258z00_1993);
								BgL_tmpz00_3605 =
									((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_143));
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3605, BgL_auxz00_3608);
							}
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_143));
							{	/* SawMill/remove.scm 47 */
								long BgL_arg1692z00_1994;

								{	/* SawMill/remove.scm 47 */
									long BgL_res2100z00_2795;

									BgL_res2100z00_2795 =
										BGL_CLASS_INDEX(BGl_bremovedz00zzsaw_removez00);
									BgL_arg1692z00_1994 = BgL_res2100z00_2795;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt)
										((BgL_blockz00_bglt) BgL_bz00_143)), BgL_arg1692z00_1994);
							}
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_143));
						}
						((BgL_blockz00_bglt) BgL_bz00_143);
						{	/* SawMill/remove.scm 48 */
							obj_t BgL_g1521z00_1996;

							BgL_g1521z00_1996 =
								(((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_predsz00);
							{
								obj_t BgL_l1519z00_1998;

								BgL_l1519z00_1998 = BgL_g1521z00_1996;
							BgL_zc3z04anonymousza31693ze3z87_1999:
								if (PAIRP(BgL_l1519z00_1998))
									{	/* SawMill/remove.scm 48 */
										{	/* SawMill/remove.scm 48 */
											obj_t BgL_pz00_2001;

											BgL_pz00_2001 = CAR(BgL_l1519z00_1998);
											{
												obj_t BgL_auxz00_3624;

												{	/* SawMill/remove.scm 49 */
													obj_t BgL_arg1695z00_2003;

													BgL_arg1695z00_2003 =
														(((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_pz00_2001)))->
														BgL_succsz00);
													BgL_auxz00_3624 =
														BGl_substz00zzsaw_libz00(BgL_arg1695z00_2003,
														((obj_t) BgL_bz00_143), BgL_sz00_1980);
												}
												((((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_pz00_2001)))->
														BgL_succsz00) = ((obj_t) BgL_auxz00_3624), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1519z00_3631;

											BgL_l1519z00_3631 = CDR(BgL_l1519z00_1998);
											BgL_l1519z00_1998 = BgL_l1519z00_3631;
											goto BgL_zc3z04anonymousza31693ze3z87_1999;
										}
									}
								else
									{	/* SawMill/remove.scm 48 */
										((bool_t) 1);
									}
							}
						}
						{	/* SawMill/remove.scm 51 */
							obj_t BgL_npredsz00_2006;

							{	/* SawMill/remove.scm 51 */
								obj_t BgL_arg1697z00_2007;
								obj_t BgL_arg1704z00_2008;

								BgL_arg1697z00_2007 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_sz00_1980)))->BgL_predsz00);
								BgL_arg1704z00_2008 =
									(((BgL_blockz00_bglt) COBJECT(BgL_bz00_143))->BgL_predsz00);
								BgL_npredsz00_2006 =
									BGl_substzd2appendzd2zzsaw_libz00(BgL_arg1697z00_2007,
									((obj_t) BgL_bz00_143), BgL_arg1704z00_2008);
							}
							return
								((((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_sz00_1980)))->BgL_predsz00) =
								((obj_t) BgL_npredsz00_2006), BUNSPEC);
						}
					}
			}
		}

	}



/* reg->creg~0 */
	obj_t BGl_regzd2ze3cregze70zd6zzsaw_removez00(obj_t BgL_rz00_2050)
	{
		{	/* SawMill/remove.scm 57 */
			if (BGl_isazf3zf3zz__objectz00(BgL_rz00_2050, BGl_cregz00zzsaw_removez00))
				{	/* SawMill/remove.scm 56 */
					BFALSE;
				}
			else
				{	/* SawMill/remove.scm 56 */
					{	/* SawMill/remove.scm 57 */
						BgL_cregz00_bglt BgL_wide1263z00_2055;

						BgL_wide1263z00_2055 =
							((BgL_cregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_cregz00_bgl))));
						{	/* SawMill/remove.scm 57 */
							obj_t BgL_auxz00_3647;
							BgL_objectz00_bglt BgL_tmpz00_3643;

							BgL_auxz00_3647 = ((obj_t) BgL_wide1263z00_2055);
							BgL_tmpz00_3643 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3643, BgL_auxz00_3647);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
						{	/* SawMill/remove.scm 57 */
							long BgL_arg1738z00_2056;

							{	/* SawMill/remove.scm 57 */
								long BgL_res2103z00_2807;

								BgL_res2103z00_2807 =
									BGL_CLASS_INDEX(BGl_cregz00zzsaw_removez00);
								BgL_arg1738z00_2056 = BgL_res2103z00_2807;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2050))),
								BgL_arg1738z00_2056);
						}
						((BgL_rtl_regz00_bglt)
							((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
					}
					{
						BgL_cregz00_bglt BgL_auxz00_3661;

						{
							obj_t BgL_auxz00_3662;

							{	/* SawMill/remove.scm 57 */
								BgL_objectz00_bglt BgL_tmpz00_3663;

								BgL_tmpz00_3663 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
								BgL_auxz00_3662 = BGL_OBJECT_WIDENING(BgL_tmpz00_3663);
							}
							BgL_auxz00_3661 = ((BgL_cregz00_bglt) BgL_auxz00_3662);
						}
						((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3661))->BgL_defsz00) =
							((obj_t) BNIL), BUNSPEC);
					}
					{
						BgL_cregz00_bglt BgL_auxz00_3670;

						{
							obj_t BgL_auxz00_3671;

							{	/* SawMill/remove.scm 57 */
								BgL_objectz00_bglt BgL_tmpz00_3672;

								BgL_tmpz00_3672 =
									((BgL_objectz00_bglt)
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
								BgL_auxz00_3671 = BGL_OBJECT_WIDENING(BgL_tmpz00_3672);
							}
							BgL_auxz00_3670 = ((BgL_cregz00_bglt) BgL_auxz00_3671);
						}
						((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3670))->BgL_nbusesz00) =
							((obj_t) BINT(((long) 0))), BUNSPEC);
					}
					((obj_t)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_rz00_2050)));
				}
			return BgL_rz00_2050;
		}

	}



/* defcollect~0 */
	bool_t BGl_defcollectze70ze7zzsaw_removez00(obj_t BgL_bz00_2014)
	{
		{	/* SawMill/remove.scm 65 */
			{
				obj_t BgL_rz00_2058;

				{	/* SawMill/remove.scm 66 */
					BgL_defcollectz00_bglt BgL_wide1269z00_2018;

					BgL_wide1269z00_2018 =
						((BgL_defcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_defcollectz00_bgl))));
					{	/* SawMill/remove.scm 66 */
						obj_t BgL_auxz00_3688;
						BgL_objectz00_bglt BgL_tmpz00_3684;

						BgL_auxz00_3688 = ((obj_t) BgL_wide1269z00_2018);
						BgL_tmpz00_3684 =
							((BgL_objectz00_bglt)
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2014)));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3684, BgL_auxz00_3688);
					}
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2014)));
					{	/* SawMill/remove.scm 66 */
						long BgL_arg1711z00_2019;

						{	/* SawMill/remove.scm 66 */
							long BgL_res2105z00_2822;

							BgL_res2105z00_2822 =
								BGL_CLASS_INDEX(BGl_defcollectz00zzsaw_removez00);
							BgL_arg1711z00_2019 = BgL_res2105z00_2822;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_bz00_2014))), BgL_arg1711z00_2019);
					}
					((BgL_blockz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2014)));
				}
				((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2014));
				{	/* SawMill/remove.scm 67 */
					obj_t BgL_g1527z00_2021;

					BgL_g1527z00_2021 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_2014)))->BgL_firstz00);
					{
						obj_t BgL_l1525z00_2023;

						BgL_l1525z00_2023 = BgL_g1527z00_2021;
					BgL_zc3z04anonymousza31712ze3z87_2024:
						if (PAIRP(BgL_l1525z00_2023))
							{	/* SawMill/remove.scm 71 */
								{	/* SawMill/remove.scm 68 */
									obj_t BgL_insz00_2026;

									BgL_insz00_2026 = CAR(BgL_l1525z00_2023);
									if (CBOOL(
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_2026)))->
												BgL_destz00)))
										{	/* SawMill/remove.scm 69 */
											obj_t BgL_arg1719z00_2029;

											BgL_arg1719z00_2029 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_2026)))->
												BgL_destz00);
											{	/* SawMill/remove.scm 63 */
												BgL_rtl_regz00_bglt BgL_i1266z00_2828;

												BgL_i1266z00_2828 =
													((BgL_rtl_regz00_bglt)
													BGl_regzd2ze3cregze70zd6zzsaw_removez00
													(BgL_arg1719z00_2029));
												{
													obj_t BgL_auxz00_3723;
													BgL_cregz00_bglt BgL_auxz00_3717;

													{	/* SawMill/remove.scm 64 */
														obj_t BgL_arg1742z00_2829;

														{
															BgL_cregz00_bglt BgL_auxz00_3724;

															{
																obj_t BgL_auxz00_3725;

																{	/* SawMill/remove.scm 64 */
																	BgL_objectz00_bglt BgL_tmpz00_3726;

																	BgL_tmpz00_3726 =
																		((BgL_objectz00_bglt) BgL_i1266z00_2828);
																	BgL_auxz00_3725 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3726);
																}
																BgL_auxz00_3724 =
																	((BgL_cregz00_bglt) BgL_auxz00_3725);
															}
															BgL_arg1742z00_2829 =
																(((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3724))->
																BgL_defsz00);
														}
														BgL_auxz00_3723 =
															MAKE_YOUNG_PAIR(BgL_insz00_2026,
															BgL_arg1742z00_2829);
													}
													{
														obj_t BgL_auxz00_3718;

														{	/* SawMill/remove.scm 64 */
															BgL_objectz00_bglt BgL_tmpz00_3719;

															BgL_tmpz00_3719 =
																((BgL_objectz00_bglt) BgL_i1266z00_2828);
															BgL_auxz00_3718 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3719);
														}
														BgL_auxz00_3717 =
															((BgL_cregz00_bglt) BgL_auxz00_3718);
													}
													((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3717))->
															BgL_defsz00) =
														((obj_t) BgL_auxz00_3723), BUNSPEC);
												}
											}
										}
									else
										{	/* SawMill/remove.scm 69 */
											BFALSE;
										}
									{	/* SawMill/remove.scm 70 */
										obj_t BgL_g1524z00_2030;

										BgL_g1524z00_2030 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_insz00_2026)))->
											BgL_argsz00);
										{
											obj_t BgL_l1522z00_2032;

											BgL_l1522z00_2032 = BgL_g1524z00_2030;
										BgL_zc3z04anonymousza31720ze3z87_2033:
											if (PAIRP(BgL_l1522z00_2032))
												{	/* SawMill/remove.scm 70 */
													BgL_rz00_2058 = CAR(BgL_l1522z00_2032);
													{	/* SawMill/remove.scm 60 */
														BgL_rtl_regz00_bglt BgL_i1265z00_2060;

														BgL_i1265z00_2060 =
															((BgL_rtl_regz00_bglt)
															BGl_regzd2ze3cregze70zd6zzsaw_removez00
															(BgL_rz00_2058));
														{
															obj_t BgL_auxz00_3745;
															BgL_cregz00_bglt BgL_auxz00_3739;

															{	/* SawMill/remove.scm 61 */
																obj_t BgL_arg1740z00_2061;

																{
																	BgL_cregz00_bglt BgL_auxz00_3746;

																	{
																		obj_t BgL_auxz00_3747;

																		{	/* SawMill/remove.scm 61 */
																			BgL_objectz00_bglt BgL_tmpz00_3748;

																			BgL_tmpz00_3748 =
																				((BgL_objectz00_bglt)
																				BgL_i1265z00_2060);
																			BgL_auxz00_3747 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_3748);
																		}
																		BgL_auxz00_3746 =
																			((BgL_cregz00_bglt) BgL_auxz00_3747);
																	}
																	BgL_arg1740z00_2061 =
																		(((BgL_cregz00_bglt)
																			COBJECT(BgL_auxz00_3746))->BgL_nbusesz00);
																}
																BgL_auxz00_3745 =
																	ADDFX(BINT(((long) 1)), BgL_arg1740z00_2061);
															}
															{
																obj_t BgL_auxz00_3740;

																{	/* SawMill/remove.scm 61 */
																	BgL_objectz00_bglt BgL_tmpz00_3741;

																	BgL_tmpz00_3741 =
																		((BgL_objectz00_bglt) BgL_i1265z00_2060);
																	BgL_auxz00_3740 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3741);
																}
																BgL_auxz00_3739 =
																	((BgL_cregz00_bglt) BgL_auxz00_3740);
															}
															((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3739))->
																	BgL_nbusesz00) =
																((obj_t) BgL_auxz00_3745), BUNSPEC);
													}}
													{
														obj_t BgL_l1522z00_3757;

														BgL_l1522z00_3757 = CDR(BgL_l1522z00_2032);
														BgL_l1522z00_2032 = BgL_l1522z00_3757;
														goto BgL_zc3z04anonymousza31720ze3z87_2033;
													}
												}
											else
												{	/* SawMill/remove.scm 70 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1525z00_3759;

									BgL_l1525z00_3759 = CDR(BgL_l1525z00_2023);
									BgL_l1525z00_2023 = BgL_l1525z00_3759;
									goto BgL_zc3z04anonymousza31712ze3z87_2024;
								}
							}
						else
							{	/* SawMill/remove.scm 71 */
								((bool_t) 1);
							}
					}
				}
				{	/* SawMill/remove.scm 72 */
					obj_t BgL_g1530z00_2040;

					BgL_g1530z00_2040 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_2014)))->BgL_succsz00);
					{
						obj_t BgL_l1528z00_2042;

						BgL_l1528z00_2042 = BgL_g1530z00_2040;
					BgL_zc3z04anonymousza31728ze3z87_2043:
						if (PAIRP(BgL_l1528z00_2042))
							{	/* SawMill/remove.scm 73 */
								{	/* SawMill/remove.scm 72 */
									obj_t BgL_sz00_2045;

									BgL_sz00_2045 = CAR(BgL_l1528z00_2042);
									if (BGl_isazf3zf3zz__objectz00(BgL_sz00_2045,
											BGl_defcollectz00zzsaw_removez00))
										{	/* SawMill/remove.scm 72 */
											((bool_t) 0);
										}
									else
										{	/* SawMill/remove.scm 72 */
											BGl_defcollectze70ze7zzsaw_removez00(BgL_sz00_2045);
										}
								}
								{
									obj_t BgL_l1528z00_3769;

									BgL_l1528z00_3769 = CDR(BgL_l1528z00_2042);
									BgL_l1528z00_2042 = BgL_l1528z00_3769;
									goto BgL_zc3z04anonymousza31728ze3z87_2043;
								}
							}
						else
							{	/* SawMill/remove.scm 73 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}

	}



/* get-first-removable */
	obj_t BGl_getzd2firstzd2removablez00zzsaw_removez00(BgL_blockz00_bglt
		BgL_bz00_145)
	{
		{	/* SawMill/remove.scm 75 */
			{	/* SawMill/remove.scm 76 */
				struct bgl_cell BgL_box2265_3264z00;
				obj_t BgL_rmz00_3264;

				BgL_rmz00_3264 = MAKE_CELL_STACK(BNIL, BgL_box2265_3264z00);
				BGl_rcollectze70ze7zzsaw_removez00(BgL_rmz00_3264,
					((obj_t) BgL_bz00_145));
				return CELL_REF(BgL_rmz00_3264);
			}
		}

	}



/* rcollect~0 */
	bool_t BGl_rcollectze70ze7zzsaw_removez00(obj_t BgL_rmz00_3262,
		obj_t BgL_bz00_2072)
	{
		{	/* SawMill/remove.scm 77 */
			{	/* SawMill/remove.scm 78 */
				BgL_rcollectz00_bglt BgL_wide1274z00_2076;

				BgL_wide1274z00_2076 =
					((BgL_rcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rcollectz00_bgl))));
				{	/* SawMill/remove.scm 78 */
					obj_t BgL_auxz00_3778;
					BgL_objectz00_bglt BgL_tmpz00_3774;

					BgL_auxz00_3778 = ((obj_t) BgL_wide1274z00_2076);
					BgL_tmpz00_3774 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2072)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3774, BgL_auxz00_3778);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2072)));
				{	/* SawMill/remove.scm 78 */
					long BgL_arg1744z00_2077;

					{	/* SawMill/remove.scm 78 */
						long BgL_res2110z00_2843;

						BgL_res2110z00_2843 =
							BGL_CLASS_INDEX(BGl_rcollectz00zzsaw_removez00);
						BgL_arg1744z00_2077 = BgL_res2110z00_2843;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_2072))), BgL_arg1744z00_2077);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2072)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2072));
			{	/* SawMill/remove.scm 79 */
				obj_t BgL_g1533z00_2079;

				BgL_g1533z00_2079 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_2072)))->BgL_firstz00);
				{
					obj_t BgL_l1531z00_2081;

					BgL_l1531z00_2081 = BgL_g1533z00_2079;
				BgL_zc3z04anonymousza31745ze3z87_2082:
					if (PAIRP(BgL_l1531z00_2081))
						{	/* SawMill/remove.scm 80 */
							{	/* SawMill/remove.scm 79 */
								obj_t BgL_insz00_2084;

								BgL_insz00_2084 = CAR(BgL_l1531z00_2081);
								if (BGl_removablezf3zf3zzsaw_removez00(
										((BgL_rtl_insz00_bglt) BgL_insz00_2084)))
									{	/* SawMill/remove.scm 79 */
										obj_t BgL_auxz00_3263;

										BgL_auxz00_3263 =
											MAKE_YOUNG_PAIR(BgL_insz00_2084,
											CELL_REF(BgL_rmz00_3262));
										CELL_SET(BgL_rmz00_3262, BgL_auxz00_3263);
									}
								else
									{	/* SawMill/remove.scm 79 */
										BFALSE;
									}
							}
							{
								obj_t BgL_l1531z00_3803;

								BgL_l1531z00_3803 = CDR(BgL_l1531z00_2081);
								BgL_l1531z00_2081 = BgL_l1531z00_3803;
								goto BgL_zc3z04anonymousza31745ze3z87_2082;
							}
						}
					else
						{	/* SawMill/remove.scm 80 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/remove.scm 81 */
				obj_t BgL_g1536z00_2088;

				BgL_g1536z00_2088 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_2072)))->BgL_succsz00);
				{
					obj_t BgL_l1534z00_2090;

					BgL_l1534z00_2090 = BgL_g1536z00_2088;
				BgL_zc3z04anonymousza31755ze3z87_2091:
					if (PAIRP(BgL_l1534z00_2090))
						{	/* SawMill/remove.scm 82 */
							{	/* SawMill/remove.scm 81 */
								obj_t BgL_sz00_2093;

								BgL_sz00_2093 = CAR(BgL_l1534z00_2090);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_2093,
										BGl_rcollectz00zzsaw_removez00))
									{	/* SawMill/remove.scm 81 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/remove.scm 81 */
										BGl_rcollectze70ze7zzsaw_removez00(BgL_rmz00_3262,
											BgL_sz00_2093);
									}
							}
							{
								obj_t BgL_l1534z00_3813;

								BgL_l1534z00_3813 = CDR(BgL_l1534z00_2090);
								BgL_l1534z00_2090 = BgL_l1534z00_3813;
								goto BgL_zc3z04anonymousza31755ze3z87_2091;
							}
						}
					else
						{	/* SawMill/remove.scm 82 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* get-first-unused */
	obj_t BGl_getzd2firstzd2unusedz00zzsaw_removez00(BgL_blockz00_bglt
		BgL_bz00_146)
	{
		{	/* SawMill/remove.scm 85 */
			{	/* SawMill/remove.scm 86 */
				struct bgl_cell BgL_box2270_3260z00;
				obj_t BgL_unusedz00_3260;

				BgL_unusedz00_3260 = MAKE_CELL_STACK(BNIL, BgL_box2270_3260z00);
				BGl_ucollectze70ze7zzsaw_removez00(BgL_unusedz00_3260,
					((obj_t) BgL_bz00_146));
				return CELL_REF(BgL_unusedz00_3260);
			}
		}

	}



/* ucollect~0 */
	bool_t BGl_ucollectze70ze7zzsaw_removez00(obj_t BgL_unusedz00_3258,
		obj_t BgL_bz00_2100)
	{
		{	/* SawMill/remove.scm 87 */
			{	/* SawMill/remove.scm 88 */
				BgL_ucollectz00_bglt BgL_wide1278z00_2104;

				BgL_wide1278z00_2104 =
					((BgL_ucollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ucollectz00_bgl))));
				{	/* SawMill/remove.scm 88 */
					obj_t BgL_auxz00_3822;
					BgL_objectz00_bglt BgL_tmpz00_3818;

					BgL_auxz00_3822 = ((obj_t) BgL_wide1278z00_2104);
					BgL_tmpz00_3818 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2100)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3818, BgL_auxz00_3822);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2100)));
				{	/* SawMill/remove.scm 88 */
					long BgL_arg1761z00_2105;

					{	/* SawMill/remove.scm 88 */
						long BgL_res2114z00_2857;

						BgL_res2114z00_2857 =
							BGL_CLASS_INDEX(BGl_ucollectz00zzsaw_removez00);
						BgL_arg1761z00_2105 = BgL_res2114z00_2857;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_bz00_2100))), BgL_arg1761z00_2105);
				}
				((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2100)));
			}
			((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bz00_2100));
			{	/* SawMill/remove.scm 89 */
				obj_t BgL_g1539z00_2107;

				BgL_g1539z00_2107 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_2100)))->BgL_firstz00);
				{
					obj_t BgL_l1537z00_2109;

					BgL_l1537z00_2109 = BgL_g1539z00_2107;
				BgL_zc3z04anonymousza31762ze3z87_2110:
					if (PAIRP(BgL_l1537z00_2109))
						{	/* SawMill/remove.scm 96 */
							{	/* SawMill/remove.scm 90 */
								obj_t BgL_insz00_2112;

								BgL_insz00_2112 = CAR(BgL_l1537z00_2109);
								{	/* SawMill/remove.scm 92 */
									bool_t BgL_test2272z00_3843;

									if (CBOOL(
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_2112)))->
												BgL_destz00)))
										{	/* SawMill/remove.scm 93 */
											bool_t BgL_test2274z00_3848;

											{	/* SawMill/remove.scm 93 */
												obj_t BgL_arg1796z00_2129;

												{	/* SawMill/remove.scm 93 */
													BgL_rtl_regz00_bglt BgL_oz00_2863;

													BgL_oz00_2863 =
														((BgL_rtl_regz00_bglt)
														(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_insz00_2112)))->
															BgL_destz00));
													{
														BgL_cregz00_bglt BgL_auxz00_3852;

														{
															obj_t BgL_auxz00_3853;

															{	/* SawMill/remove.scm 93 */
																BgL_objectz00_bglt BgL_tmpz00_3854;

																BgL_tmpz00_3854 =
																	((BgL_objectz00_bglt) BgL_oz00_2863);
																BgL_auxz00_3853 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3854);
															}
															BgL_auxz00_3852 =
																((BgL_cregz00_bglt) BgL_auxz00_3853);
														}
														BgL_arg1796z00_2129 =
															(((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3852))->
															BgL_nbusesz00);
													}
												}
												BgL_test2274z00_3848 =
													((long) CINT(BgL_arg1796z00_2129) == ((long) 0));
											}
											if (BgL_test2274z00_3848)
												{	/* SawMill/remove.scm 94 */
													bool_t BgL_test2275z00_3861;

													{	/* SawMill/remove.scm 94 */
														obj_t BgL_arg1790z00_2128;

														BgL_arg1790z00_2128 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_insz00_2112)))->
															BgL_destz00);
														BgL_test2275z00_3861 =
															CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_arg1790z00_2128,
																CELL_REF(BgL_unusedz00_3258)));
													}
													if (BgL_test2275z00_3861)
														{	/* SawMill/remove.scm 94 */
															BgL_test2272z00_3843 = ((bool_t) 0);
														}
													else
														{	/* SawMill/remove.scm 94 */
															BgL_test2272z00_3843 = ((bool_t) 1);
														}
												}
											else
												{	/* SawMill/remove.scm 93 */
													BgL_test2272z00_3843 = ((bool_t) 0);
												}
										}
									else
										{	/* SawMill/remove.scm 92 */
											BgL_test2272z00_3843 = ((bool_t) 0);
										}
									if (BgL_test2272z00_3843)
										{	/* SawMill/remove.scm 95 */
											obj_t BgL_auxz00_3259;

											{	/* SawMill/remove.scm 95 */
												obj_t BgL_arg1784z00_2124;

												BgL_arg1784z00_2124 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_insz00_2112)))->
													BgL_destz00);
												BgL_auxz00_3259 =
													MAKE_YOUNG_PAIR(BgL_arg1784z00_2124,
													CELL_REF(BgL_unusedz00_3258));
											}
											CELL_SET(BgL_unusedz00_3258, BgL_auxz00_3259);
										}
									else
										{	/* SawMill/remove.scm 92 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1537z00_3869;

								BgL_l1537z00_3869 = CDR(BgL_l1537z00_2109);
								BgL_l1537z00_2109 = BgL_l1537z00_3869;
								goto BgL_zc3z04anonymousza31762ze3z87_2110;
							}
						}
					else
						{	/* SawMill/remove.scm 96 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/remove.scm 97 */
				obj_t BgL_g1542z00_2133;

				BgL_g1542z00_2133 =
					(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_bz00_2100)))->BgL_succsz00);
				{
					obj_t BgL_l1540z00_2135;

					BgL_l1540z00_2135 = BgL_g1542z00_2133;
				BgL_zc3z04anonymousza31802ze3z87_2136:
					if (PAIRP(BgL_l1540z00_2135))
						{	/* SawMill/remove.scm 98 */
							{	/* SawMill/remove.scm 97 */
								obj_t BgL_sz00_2138;

								BgL_sz00_2138 = CAR(BgL_l1540z00_2135);
								if (BGl_isazf3zf3zz__objectz00(BgL_sz00_2138,
										BGl_ucollectz00zzsaw_removez00))
									{	/* SawMill/remove.scm 97 */
										((bool_t) 0);
									}
								else
									{	/* SawMill/remove.scm 97 */
										BGl_ucollectze70ze7zzsaw_removez00(BgL_unusedz00_3258,
											BgL_sz00_2138);
									}
							}
							{
								obj_t BgL_l1540z00_3879;

								BgL_l1540z00_3879 = CDR(BgL_l1540z00_2135);
								BgL_l1540z00_2135 = BgL_l1540z00_3879;
								goto BgL_zc3z04anonymousza31802ze3z87_2136;
							}
						}
					else
						{	/* SawMill/remove.scm 98 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* fix-remove */
	bool_t BGl_fixzd2removezd2zzsaw_removez00(obj_t BgL_unusedz00_147,
		obj_t BgL_rmz00_148)
	{
		{	/* SawMill/remove.scm 104 */
		BGl_fixzd2removezd2zzsaw_removez00:
			{
				obj_t BgL_l1546z00_2144;

				BgL_l1546z00_2144 = BgL_rmz00_148;
			BgL_zc3z04anonymousza31809ze3z87_2145:
				if (PAIRP(BgL_l1546z00_2144))
					{	/* SawMill/remove.scm 106 */
						{	/* SawMill/remove.scm 107 */
							obj_t BgL_insz00_2147;

							BgL_insz00_2147 = CAR(BgL_l1546z00_2144);
							{	/* SawMill/remove.scm 107 */
								BgL_removedz00_bglt BgL_wide1283z00_2150;

								BgL_wide1283z00_2150 =
									((BgL_removedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_removedz00_bgl))));
								{	/* SawMill/remove.scm 107 */
									obj_t BgL_auxz00_3889;
									BgL_objectz00_bglt BgL_tmpz00_3885;

									BgL_auxz00_3889 = ((obj_t) BgL_wide1283z00_2150);
									BgL_tmpz00_3885 =
										((BgL_objectz00_bglt)
										((BgL_rtl_insz00_bglt)
											((BgL_rtl_insz00_bglt) BgL_insz00_2147)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3885, BgL_auxz00_3889);
								}
								((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_insz00_2147)));
								{	/* SawMill/remove.scm 107 */
									long BgL_arg1811z00_2151;

									{	/* SawMill/remove.scm 107 */
										long BgL_res2120z00_2877;

										BgL_res2120z00_2877 =
											BGL_CLASS_INDEX(BGl_removedz00zzsaw_removez00);
										BgL_arg1811z00_2151 = BgL_res2120z00_2877;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_rtl_insz00_bglt)
												((BgL_rtl_insz00_bglt) BgL_insz00_2147))),
										BgL_arg1811z00_2151);
								}
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_insz00_2147)));
							}
							((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_insz00_2147));
							{	/* SawMill/remove.scm 108 */
								obj_t BgL_g1545z00_2153;

								BgL_g1545z00_2153 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_insz00_2147)))->BgL_argsz00);
								{
									obj_t BgL_l1543z00_2155;

									BgL_l1543z00_2155 = BgL_g1545z00_2153;
								BgL_zc3z04anonymousza31812ze3z87_2156:
									if (PAIRP(BgL_l1543z00_2155))
										{	/* SawMill/remove.scm 113 */
											{	/* SawMill/remove.scm 109 */
												obj_t BgL_rz00_2158;

												BgL_rz00_2158 = CAR(BgL_l1543z00_2155);
												{	/* SawMill/remove.scm 109 */
													obj_t BgL_nz00_2159;

													{
														BgL_cregz00_bglt BgL_auxz00_3910;

														{
															obj_t BgL_auxz00_3911;

															{	/* SawMill/remove.scm 109 */
																BgL_objectz00_bglt BgL_tmpz00_3912;

																BgL_tmpz00_3912 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_rz00_2158));
																BgL_auxz00_3911 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3912);
															}
															BgL_auxz00_3910 =
																((BgL_cregz00_bglt) BgL_auxz00_3911);
														}
														BgL_nz00_2159 =
															(((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3910))->
															BgL_nbusesz00);
													}
													{	/* SawMill/remove.scm 110 */
														long BgL_arg1820z00_2160;

														BgL_arg1820z00_2160 =
															((long) CINT(BgL_nz00_2159) - ((long) 1));
														{
															BgL_cregz00_bglt BgL_auxz00_3920;

															{
																obj_t BgL_auxz00_3921;

																{	/* SawMill/remove.scm 110 */
																	BgL_objectz00_bglt BgL_tmpz00_3922;

																	BgL_tmpz00_3922 =
																		((BgL_objectz00_bglt)
																		((BgL_rtl_regz00_bglt) BgL_rz00_2158));
																	BgL_auxz00_3921 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3922);
																}
																BgL_auxz00_3920 =
																	((BgL_cregz00_bglt) BgL_auxz00_3921);
															}
															((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3920))->
																	BgL_nbusesz00) =
																((obj_t) BINT(BgL_arg1820z00_2160)), BUNSPEC);
													}}
													if (((long) CINT(BgL_nz00_2159) == ((long) 1)))
														{	/* SawMill/remove.scm 111 */
															BgL_unusedz00_147 =
																MAKE_YOUNG_PAIR(BgL_rz00_2158,
																BgL_unusedz00_147);
														}
													else
														{	/* SawMill/remove.scm 111 */
															BFALSE;
														}
												}
											}
											{
												obj_t BgL_l1543z00_3933;

												BgL_l1543z00_3933 = CDR(BgL_l1543z00_2155);
												BgL_l1543z00_2155 = BgL_l1543z00_3933;
												goto BgL_zc3z04anonymousza31812ze3z87_2156;
											}
										}
									else
										{	/* SawMill/remove.scm 113 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l1546z00_3935;

							BgL_l1546z00_3935 = CDR(BgL_l1546z00_2144);
							BgL_l1546z00_2144 = BgL_l1546z00_3935;
							goto BgL_zc3z04anonymousza31809ze3z87_2145;
						}
					}
				else
					{	/* SawMill/remove.scm 106 */
						((bool_t) 1);
					}
			}
			BgL_rmz00_148 = BNIL;
			{
				obj_t BgL_l1551z00_2167;

				BgL_l1551z00_2167 = BgL_unusedz00_147;
			BgL_zc3z04anonymousza31826ze3z87_2168:
				if (PAIRP(BgL_l1551z00_2167))
					{	/* SawMill/remove.scm 117 */
						{	/* SawMill/remove.scm 118 */
							obj_t BgL_rz00_2170;

							BgL_rz00_2170 = CAR(BgL_l1551z00_2167);
							{	/* SawMill/remove.scm 118 */
								obj_t BgL_g1550z00_2171;

								{
									BgL_cregz00_bglt BgL_auxz00_3940;

									{
										obj_t BgL_auxz00_3941;

										{	/* SawMill/remove.scm 121 */
											BgL_objectz00_bglt BgL_tmpz00_3942;

											BgL_tmpz00_3942 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2170));
											BgL_auxz00_3941 = BGL_OBJECT_WIDENING(BgL_tmpz00_3942);
										}
										BgL_auxz00_3940 = ((BgL_cregz00_bglt) BgL_auxz00_3941);
									}
									BgL_g1550z00_2171 =
										(((BgL_cregz00_bglt) COBJECT(BgL_auxz00_3940))->
										BgL_defsz00);
								}
								{
									obj_t BgL_l1548z00_2173;

									BgL_l1548z00_2173 = BgL_g1550z00_2171;
								BgL_zc3z04anonymousza31828ze3z87_2174:
									if (PAIRP(BgL_l1548z00_2173))
										{	/* SawMill/remove.scm 121 */
											{	/* SawMill/remove.scm 119 */
												obj_t BgL_insz00_2176;

												BgL_insz00_2176 = CAR(BgL_l1548z00_2173);
												((((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_insz00_2176)))->
														BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
												if (BGl_removablezf3zf3zzsaw_removez00((
															(BgL_rtl_insz00_bglt) BgL_insz00_2176)))
													{	/* SawMill/remove.scm 120 */
														BgL_rmz00_148 =
															MAKE_YOUNG_PAIR(BgL_insz00_2176, BgL_rmz00_148);
													}
												else
													{	/* SawMill/remove.scm 120 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1548z00_3957;

												BgL_l1548z00_3957 = CDR(BgL_l1548z00_2173);
												BgL_l1548z00_2173 = BgL_l1548z00_3957;
												goto BgL_zc3z04anonymousza31828ze3z87_2174;
											}
										}
									else
										{	/* SawMill/remove.scm 121 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l1551z00_3959;

							BgL_l1551z00_3959 = CDR(BgL_l1551z00_2167);
							BgL_l1551z00_2167 = BgL_l1551z00_3959;
							goto BgL_zc3z04anonymousza31826ze3z87_2168;
						}
					}
				else
					{	/* SawMill/remove.scm 117 */
						((bool_t) 1);
					}
			}
			if (NULLP(BgL_rmz00_148))
				{	/* SawMill/remove.scm 124 */
					return ((bool_t) 0);
				}
			else
				{
					obj_t BgL_unusedz00_3963;

					BgL_unusedz00_3963 = BNIL;
					BgL_unusedz00_147 = BgL_unusedz00_3963;
					goto BGl_fixzd2removezd2zzsaw_removez00;
				}
		}

	}



/* removable? */
	bool_t BGl_removablezf3zf3zzsaw_removez00(BgL_rtl_insz00_bglt BgL_insz00_149)
	{
		{	/* SawMill/remove.scm 129 */
			if (CBOOL((((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_149))->BgL_destz00)))
				{	/* SawMill/remove.scm 131 */
					return ((bool_t) 0);
				}
			else
				{	/* SawMill/remove.scm 132 */
					BgL_rtl_funz00_bglt BgL_arg1835z00_2185;

					BgL_arg1835z00_2185 =
						(((BgL_rtl_insz00_bglt) COBJECT(BgL_insz00_149))->BgL_funz00);
					{	/* SawMill/remove.scm 132 */
						bool_t BgL_res2127z00_2904;

						BgL_res2127z00_2904 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_arg1835z00_2185), BGl_rtl_purez00zzsaw_defsz00);
						return BgL_res2127z00_2904;
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			{	/* SawMill/remove.scm 8 */
				obj_t BgL_arg1842z00_2190;
				obj_t BgL_arg1845z00_2191;

				{	/* SawMill/remove.scm 8 */
					obj_t BgL_v1553z00_2216;

					BgL_v1553z00_2216 = create_vector(((long) 0));
					BgL_arg1842z00_2190 = BgL_v1553z00_2216;
				}
				{	/* SawMill/remove.scm 8 */
					obj_t BgL_v1554z00_2217;

					BgL_v1554z00_2217 = create_vector(((long) 0));
					BgL_arg1845z00_2191 = BgL_v1554z00_2217;
				}
				BGl_defcollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 1)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 10302),
					BGl_proc2175z00zzsaw_removez00, BGl_proc2174z00zzsaw_removez00,
					BFALSE, BGl_proc2173z00zzsaw_removez00,
					BGl_proc2172z00zzsaw_removez00, BgL_arg1842z00_2190,
					BgL_arg1845z00_2191);
			}
			{	/* SawMill/remove.scm 9 */
				obj_t BgL_arg1862z00_2226;
				obj_t BgL_arg1863z00_2227;

				{	/* SawMill/remove.scm 9 */
					obj_t BgL_v1555z00_2252;

					BgL_v1555z00_2252 = create_vector(((long) 0));
					BgL_arg1862z00_2226 = BgL_v1555z00_2252;
				}
				{	/* SawMill/remove.scm 9 */
					obj_t BgL_v1556z00_2253;

					BgL_v1556z00_2253 = create_vector(((long) 0));
					BgL_arg1863z00_2227 = BgL_v1556z00_2253;
				}
				BGl_rcollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 3)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 28313),
					BGl_proc2179z00zzsaw_removez00, BGl_proc2178z00zzsaw_removez00,
					BFALSE, BGl_proc2177z00zzsaw_removez00,
					BGl_proc2176z00zzsaw_removez00, BgL_arg1862z00_2226,
					BgL_arg1863z00_2227);
			}
			{	/* SawMill/remove.scm 10 */
				obj_t BgL_arg1879z00_2262;
				obj_t BgL_arg1881z00_2263;

				{	/* SawMill/remove.scm 10 */
					obj_t BgL_v1557z00_2288;

					BgL_v1557z00_2288 = create_vector(((long) 0));
					BgL_arg1879z00_2262 = BgL_v1557z00_2288;
				}
				{	/* SawMill/remove.scm 10 */
					obj_t BgL_v1558z00_2289;

					BgL_v1558z00_2289 = create_vector(((long) 0));
					BgL_arg1881z00_2263 = BgL_v1558z00_2289;
				}
				BGl_ucollectz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 4)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 55258),
					BGl_proc2183z00zzsaw_removez00, BGl_proc2182z00zzsaw_removez00,
					BFALSE, BGl_proc2181z00zzsaw_removez00,
					BGl_proc2180z00zzsaw_removez00, BgL_arg1879z00_2262,
					BgL_arg1881z00_2263);
			}
			{	/* SawMill/remove.scm 11 */
				obj_t BgL_arg1898z00_2298;
				obj_t BgL_arg1901z00_2299;

				{	/* SawMill/remove.scm 11 */
					obj_t BgL_v1559z00_2325;

					BgL_v1559z00_2325 = create_vector(((long) 0));
					BgL_arg1898z00_2298 = BgL_v1559z00_2325;
				}
				{	/* SawMill/remove.scm 11 */
					obj_t BgL_v1560z00_2326;

					BgL_v1560z00_2326 = create_vector(((long) 0));
					BgL_arg1901z00_2299 = BgL_v1560z00_2326;
				}
				BGl_removedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 2)), BGl_rtl_insz00zzsaw_defsz00,
					((long) 19522), BGl_proc2187z00zzsaw_removez00,
					BGl_proc2186z00zzsaw_removez00, BFALSE,
					BGl_proc2185z00zzsaw_removez00, BGl_proc2184z00zzsaw_removez00,
					BgL_arg1898z00_2298, BgL_arg1901z00_2299);
			}
			{	/* SawMill/remove.scm 12 */
				obj_t BgL_arg1916z00_2335;
				obj_t BgL_arg1917z00_2336;

				{	/* SawMill/remove.scm 12 */
					obj_t BgL_v1561z00_2361;

					BgL_v1561z00_2361 = create_vector(((long) 0));
					BgL_arg1916z00_2335 = BgL_v1561z00_2361;
				}
				{	/* SawMill/remove.scm 12 */
					obj_t BgL_v1562z00_2362;

					BgL_v1562z00_2362 = create_vector(((long) 0));
					BgL_arg1917z00_2336 = BgL_v1562z00_2362;
				}
				BGl_visitedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 6)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 59134),
					BGl_proc2191z00zzsaw_removez00, BGl_proc2190z00zzsaw_removez00,
					BFALSE, BGl_proc2189z00zzsaw_removez00,
					BGl_proc2188z00zzsaw_removez00, BgL_arg1916z00_2335,
					BgL_arg1917z00_2336);
			}
			{	/* SawMill/remove.scm 13 */
				obj_t BgL_arg1933z00_2371;
				obj_t BgL_arg1934z00_2372;

				{	/* SawMill/remove.scm 13 */
					obj_t BgL_v1563z00_2397;

					BgL_v1563z00_2397 = create_vector(((long) 0));
					BgL_arg1933z00_2371 = BgL_v1563z00_2397;
				}
				{	/* SawMill/remove.scm 13 */
					obj_t BgL_v1564z00_2398;

					BgL_v1564z00_2398 = create_vector(((long) 0));
					BgL_arg1934z00_2372 = BgL_v1564z00_2398;
				}
				BGl_bremovedz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
					CNST_TABLE_REF(((long) 2)), BGl_blockz00zzsaw_defsz00, ((long) 18301),
					BGl_proc2195z00zzsaw_removez00, BGl_proc2194z00zzsaw_removez00,
					BFALSE, BGl_proc2193z00zzsaw_removez00,
					BGl_proc2192z00zzsaw_removez00, BgL_arg1933z00_2371,
					BgL_arg1934z00_2372);
			}
			{	/* SawMill/remove.scm 14 */
				obj_t BgL_arg1949z00_2407;
				obj_t BgL_arg1951z00_2408;

				{	/* SawMill/remove.scm 14 */
					obj_t BgL_v1565z00_2437;

					BgL_v1565z00_2437 = create_vector(((long) 2));
					{	/* SawMill/remove.scm 14 */
						obj_t BgL_arg1962z00_2438;

						BgL_arg1962z00_2438 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2197z00zzsaw_removez00,
							BGl_proc2196z00zzsaw_removez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1565z00_2437, ((long) 0), BgL_arg1962z00_2438);
					}
					{	/* SawMill/remove.scm 14 */
						obj_t BgL_arg1967z00_2448;

						BgL_arg1967z00_2448 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2199z00zzsaw_removez00,
							BGl_proc2198z00zzsaw_removez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1565z00_2437, ((long) 1), BgL_arg1967z00_2448);
					}
					BgL_arg1949z00_2407 = BgL_v1565z00_2437;
				}
				{	/* SawMill/remove.scm 14 */
					obj_t BgL_v1566z00_2458;

					BgL_v1566z00_2458 = create_vector(((long) 0));
					BgL_arg1951z00_2408 = BgL_v1566z00_2458;
				}
				return (BGl_cregz00zzsaw_removez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
						CNST_TABLE_REF(((long) 2)), BGl_rtl_regz00zzsaw_defsz00,
						((long) 9554), BGl_proc2203z00zzsaw_removez00,
						BGl_proc2202z00zzsaw_removez00, BFALSE,
						BGl_proc2201z00zzsaw_removez00, BGl_proc2200z00zzsaw_removez00,
						BgL_arg1949z00_2407, BgL_arg1951z00_2408), BUNSPEC);
		}}

	}



/* &lambda1958 */
	BgL_rtl_regz00_bglt BGl_z62lambda1958z62zzsaw_removez00(obj_t BgL_envz00_3166,
		obj_t BgL_o1218z00_3167)
	{
		{	/* SawMill/remove.scm 14 */
			{	/* SawMill/remove.scm 14 */
				long BgL_arg1959z00_3281;

				{	/* SawMill/remove.scm 14 */
					obj_t BgL_arg1960z00_3282;

					{	/* SawMill/remove.scm 14 */
						obj_t BgL_arg1961z00_3283;

						{	/* SawMill/remove.scm 14 */
							long BgL_arg1816z00_3284;

							{	/* SawMill/remove.scm 14 */
								long BgL_arg1817z00_3285;

								{	/* SawMill/remove.scm 14 */
									long BgL_res2167z00_3286;

									BgL_res2167z00_3286 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1218z00_3167)));
									BgL_arg1817z00_3285 = BgL_res2167z00_3286;
								}
								BgL_arg1816z00_3284 = (BgL_arg1817z00_3285 - OBJECT_TYPE);
							}
							BgL_arg1961z00_3283 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3284);
						}
						BgL_arg1960z00_3282 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1961z00_3283);
					}
					{	/* SawMill/remove.scm 14 */
						long BgL_res2169z00_3287;

						{	/* SawMill/remove.scm 14 */
							obj_t BgL_tmpz00_4019;

							BgL_tmpz00_4019 = ((obj_t) BgL_arg1960z00_3282);
							BgL_res2169z00_3287 = BGL_CLASS_INDEX(BgL_tmpz00_4019);
						}
						BgL_arg1959z00_3281 = BgL_res2169z00_3287;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1218z00_3167)), BgL_arg1959z00_3281);
			}
			{	/* SawMill/remove.scm 14 */
				BgL_objectz00_bglt BgL_tmpz00_4025;

				BgL_tmpz00_4025 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1218z00_3167));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4025, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1218z00_3167));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1218z00_3167));
		}

	}



/* &<@anonymous:1957> */
	obj_t BGl_z62zc3z04anonymousza31957ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3168, obj_t BgL_new1217z00_3169)
	{
		{	/* SawMill/remove.scm 14 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_4033;

				{
					BgL_typez00_bglt BgL_auxz00_4034;

					{	/* SawMill/remove.scm 14 */
						obj_t BgL_classz00_3289;

						BgL_classz00_3289 = BGl_typez00zztype_typez00;
						{	/* SawMill/remove.scm 14 */
							obj_t BgL__ortest_1106z00_3290;

							BgL__ortest_1106z00_3290 = BGL_CLASS_NIL(BgL_classz00_3289);
							if (CBOOL(BgL__ortest_1106z00_3290))
								{	/* SawMill/remove.scm 14 */
									BgL_auxz00_4034 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3290);
								}
							else
								{	/* SawMill/remove.scm 14 */
									BgL_auxz00_4034 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3289));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1217z00_3169))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_4034), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1217z00_3169))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1217z00_3169))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1217z00_3169))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1217z00_3169))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1217z00_3169))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_cregz00_bglt BgL_auxz00_4059;

					{
						obj_t BgL_auxz00_4060;

						{	/* SawMill/remove.scm 14 */
							BgL_objectz00_bglt BgL_tmpz00_4061;

							BgL_tmpz00_4061 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1217z00_3169));
							BgL_auxz00_4060 = BGL_OBJECT_WIDENING(BgL_tmpz00_4061);
						}
						BgL_auxz00_4059 = ((BgL_cregz00_bglt) BgL_auxz00_4060);
					}
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4059))->BgL_defsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_cregz00_bglt BgL_auxz00_4067;

					{
						obj_t BgL_auxz00_4068;

						{	/* SawMill/remove.scm 14 */
							BgL_objectz00_bglt BgL_tmpz00_4069;

							BgL_tmpz00_4069 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1217z00_3169));
							BgL_auxz00_4068 = BGL_OBJECT_WIDENING(BgL_tmpz00_4069);
						}
						BgL_auxz00_4067 = ((BgL_cregz00_bglt) BgL_auxz00_4068);
					}
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4067))->BgL_nbusesz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_4033 = ((BgL_rtl_regz00_bglt) BgL_new1217z00_3169);
				return ((obj_t) BgL_auxz00_4033);
			}
		}

	}



/* &lambda1955 */
	BgL_rtl_regz00_bglt BGl_z62lambda1955z62zzsaw_removez00(obj_t BgL_envz00_3170,
		obj_t BgL_o1214z00_3171)
	{
		{	/* SawMill/remove.scm 14 */
			{	/* SawMill/remove.scm 14 */
				BgL_cregz00_bglt BgL_wide1216z00_3292;

				BgL_wide1216z00_3292 =
					((BgL_cregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_cregz00_bgl))));
				{	/* SawMill/remove.scm 14 */
					obj_t BgL_auxz00_4082;
					BgL_objectz00_bglt BgL_tmpz00_4078;

					BgL_auxz00_4082 = ((obj_t) BgL_wide1216z00_3292);
					BgL_tmpz00_4078 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1214z00_3171)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4078, BgL_auxz00_4082);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1214z00_3171)));
				{	/* SawMill/remove.scm 14 */
					long BgL_arg1956z00_3293;

					{	/* SawMill/remove.scm 14 */
						long BgL_res2166z00_3294;

						BgL_res2166z00_3294 = BGL_CLASS_INDEX(BGl_cregz00zzsaw_removez00);
						BgL_arg1956z00_3293 = BgL_res2166z00_3294;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1214z00_3171))),
						BgL_arg1956z00_3293);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1214z00_3171)));
			}
		}

	}



/* &lambda1952 */
	BgL_rtl_regz00_bglt BGl_z62lambda1952z62zzsaw_removez00(obj_t BgL_envz00_3172,
		obj_t BgL_type1206z00_3173, obj_t BgL_var1207z00_3174,
		obj_t BgL_onexprzf31208zf3_3175, obj_t BgL_name1209z00_3176,
		obj_t BgL_key1210z00_3177, obj_t BgL_hardware1211z00_3178,
		obj_t BgL_defs1212z00_3179, obj_t BgL_nbuses1213z00_3180)
	{
		{	/* SawMill/remove.scm 14 */
			{	/* SawMill/remove.scm 14 */
				BgL_rtl_regz00_bglt BgL_new1320z00_3296;

				{	/* SawMill/remove.scm 14 */
					BgL_rtl_regz00_bglt BgL_tmp1318z00_3297;
					BgL_cregz00_bglt BgL_wide1319z00_3298;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4096;

						{	/* SawMill/remove.scm 14 */
							BgL_rtl_regz00_bglt BgL_new1317z00_3299;

							BgL_new1317z00_3299 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/remove.scm 14 */
								long BgL_arg1954z00_3300;

								{	/* SawMill/remove.scm 14 */
									long BgL_res2164z00_3301;

									BgL_res2164z00_3301 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1954z00_3300 = BgL_res2164z00_3301;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1317z00_3299),
									BgL_arg1954z00_3300);
							}
							{	/* SawMill/remove.scm 14 */
								BgL_objectz00_bglt BgL_tmpz00_4101;

								BgL_tmpz00_4101 = ((BgL_objectz00_bglt) BgL_new1317z00_3299);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4101, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1317z00_3299);
							BgL_auxz00_4096 = BgL_new1317z00_3299;
						}
						BgL_tmp1318z00_3297 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4096);
					}
					BgL_wide1319z00_3298 =
						((BgL_cregz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_cregz00_bgl))));
					{	/* SawMill/remove.scm 14 */
						obj_t BgL_auxz00_4109;
						BgL_objectz00_bglt BgL_tmpz00_4107;

						BgL_auxz00_4109 = ((obj_t) BgL_wide1319z00_3298);
						BgL_tmpz00_4107 = ((BgL_objectz00_bglt) BgL_tmp1318z00_3297);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4107, BgL_auxz00_4109);
					}
					((BgL_objectz00_bglt) BgL_tmp1318z00_3297);
					{	/* SawMill/remove.scm 14 */
						long BgL_arg1953z00_3302;

						{	/* SawMill/remove.scm 14 */
							long BgL_res2165z00_3303;

							BgL_res2165z00_3303 = BGL_CLASS_INDEX(BGl_cregz00zzsaw_removez00);
							BgL_arg1953z00_3302 = BgL_res2165z00_3303;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1318z00_3297), BgL_arg1953z00_3302);
					}
					BgL_new1320z00_3296 = ((BgL_rtl_regz00_bglt) BgL_tmp1318z00_3297);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1320z00_3296)))->BgL_typez00) =
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1206z00_3173)),
					BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1320z00_3296)))->BgL_varz00) =
					((obj_t) BgL_var1207z00_3174), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1320z00_3296)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31208zf3_3175), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1320z00_3296)))->BgL_namez00) =
					((obj_t) BgL_name1209z00_3176), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1320z00_3296)))->BgL_keyz00) =
					((obj_t) BgL_key1210z00_3177), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1320z00_3296)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1211z00_3178), BUNSPEC);
				{
					BgL_cregz00_bglt BgL_auxz00_4130;

					{
						obj_t BgL_auxz00_4131;

						{	/* SawMill/remove.scm 14 */
							BgL_objectz00_bglt BgL_tmpz00_4132;

							BgL_tmpz00_4132 = ((BgL_objectz00_bglt) BgL_new1320z00_3296);
							BgL_auxz00_4131 = BGL_OBJECT_WIDENING(BgL_tmpz00_4132);
						}
						BgL_auxz00_4130 = ((BgL_cregz00_bglt) BgL_auxz00_4131);
					}
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4130))->BgL_defsz00) =
						((obj_t) BgL_defs1212z00_3179), BUNSPEC);
				}
				{
					BgL_cregz00_bglt BgL_auxz00_4137;

					{
						obj_t BgL_auxz00_4138;

						{	/* SawMill/remove.scm 14 */
							BgL_objectz00_bglt BgL_tmpz00_4139;

							BgL_tmpz00_4139 = ((BgL_objectz00_bglt) BgL_new1320z00_3296);
							BgL_auxz00_4138 = BGL_OBJECT_WIDENING(BgL_tmpz00_4139);
						}
						BgL_auxz00_4137 = ((BgL_cregz00_bglt) BgL_auxz00_4138);
					}
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4137))->BgL_nbusesz00) =
						((obj_t) BgL_nbuses1213z00_3180), BUNSPEC);
				}
				return BgL_new1320z00_3296;
			}
		}

	}



/* &lambda1971 */
	obj_t BGl_z62lambda1971z62zzsaw_removez00(obj_t BgL_envz00_3181,
		obj_t BgL_oz00_3182, obj_t BgL_vz00_3183)
	{
		{	/* SawMill/remove.scm 14 */
			{
				BgL_cregz00_bglt BgL_auxz00_4144;

				{
					obj_t BgL_auxz00_4145;

					{	/* SawMill/remove.scm 14 */
						BgL_objectz00_bglt BgL_tmpz00_4146;

						BgL_tmpz00_4146 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3182));
						BgL_auxz00_4145 = BGL_OBJECT_WIDENING(BgL_tmpz00_4146);
					}
					BgL_auxz00_4144 = ((BgL_cregz00_bglt) BgL_auxz00_4145);
				}
				return
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4144))->BgL_nbusesz00) =
					((obj_t) BgL_vz00_3183), BUNSPEC);
			}
		}

	}



/* &lambda1970 */
	obj_t BGl_z62lambda1970z62zzsaw_removez00(obj_t BgL_envz00_3184,
		obj_t BgL_oz00_3185)
	{
		{	/* SawMill/remove.scm 14 */
			{
				BgL_cregz00_bglt BgL_auxz00_4152;

				{
					obj_t BgL_auxz00_4153;

					{	/* SawMill/remove.scm 14 */
						BgL_objectz00_bglt BgL_tmpz00_4154;

						BgL_tmpz00_4154 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3185));
						BgL_auxz00_4153 = BGL_OBJECT_WIDENING(BgL_tmpz00_4154);
					}
					BgL_auxz00_4152 = ((BgL_cregz00_bglt) BgL_auxz00_4153);
				}
				return (((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4152))->BgL_nbusesz00);
			}
		}

	}



/* &lambda1966 */
	obj_t BGl_z62lambda1966z62zzsaw_removez00(obj_t BgL_envz00_3186,
		obj_t BgL_oz00_3187, obj_t BgL_vz00_3188)
	{
		{	/* SawMill/remove.scm 14 */
			{
				BgL_cregz00_bglt BgL_auxz00_4160;

				{
					obj_t BgL_auxz00_4161;

					{	/* SawMill/remove.scm 14 */
						BgL_objectz00_bglt BgL_tmpz00_4162;

						BgL_tmpz00_4162 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3187));
						BgL_auxz00_4161 = BGL_OBJECT_WIDENING(BgL_tmpz00_4162);
					}
					BgL_auxz00_4160 = ((BgL_cregz00_bglt) BgL_auxz00_4161);
				}
				return
					((((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4160))->BgL_defsz00) =
					((obj_t) BgL_vz00_3188), BUNSPEC);
			}
		}

	}



/* &lambda1965 */
	obj_t BGl_z62lambda1965z62zzsaw_removez00(obj_t BgL_envz00_3189,
		obj_t BgL_oz00_3190)
	{
		{	/* SawMill/remove.scm 14 */
			{
				BgL_cregz00_bglt BgL_auxz00_4168;

				{
					obj_t BgL_auxz00_4169;

					{	/* SawMill/remove.scm 14 */
						BgL_objectz00_bglt BgL_tmpz00_4170;

						BgL_tmpz00_4170 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3190));
						BgL_auxz00_4169 = BGL_OBJECT_WIDENING(BgL_tmpz00_4170);
					}
					BgL_auxz00_4168 = ((BgL_cregz00_bglt) BgL_auxz00_4169);
				}
				return (((BgL_cregz00_bglt) COBJECT(BgL_auxz00_4168))->BgL_defsz00);
			}
		}

	}



/* &lambda1941 */
	BgL_blockz00_bglt BGl_z62lambda1941z62zzsaw_removez00(obj_t BgL_envz00_3191,
		obj_t BgL_o1204z00_3192)
	{
		{	/* SawMill/remove.scm 13 */
			{	/* SawMill/remove.scm 13 */
				long BgL_arg1942z00_3309;

				{	/* SawMill/remove.scm 13 */
					obj_t BgL_arg1943z00_3310;

					{	/* SawMill/remove.scm 13 */
						obj_t BgL_arg1944z00_3311;

						{	/* SawMill/remove.scm 13 */
							long BgL_arg1816z00_3312;

							{	/* SawMill/remove.scm 13 */
								long BgL_arg1817z00_3313;

								{	/* SawMill/remove.scm 13 */
									long BgL_res2161z00_3314;

									BgL_res2161z00_3314 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1204z00_3192)));
									BgL_arg1817z00_3313 = BgL_res2161z00_3314;
								}
								BgL_arg1816z00_3312 = (BgL_arg1817z00_3313 - OBJECT_TYPE);
							}
							BgL_arg1944z00_3311 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3312);
						}
						BgL_arg1943z00_3310 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1944z00_3311);
					}
					{	/* SawMill/remove.scm 13 */
						long BgL_res2163z00_3315;

						{	/* SawMill/remove.scm 13 */
							obj_t BgL_tmpz00_4182;

							BgL_tmpz00_4182 = ((obj_t) BgL_arg1943z00_3310);
							BgL_res2163z00_3315 = BGL_CLASS_INDEX(BgL_tmpz00_4182);
						}
						BgL_arg1942z00_3309 = BgL_res2163z00_3315;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1204z00_3192)), BgL_arg1942z00_3309);
			}
			{	/* SawMill/remove.scm 13 */
				BgL_objectz00_bglt BgL_tmpz00_4188;

				BgL_tmpz00_4188 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1204z00_3192));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4188, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1204z00_3192));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1204z00_3192));
		}

	}



/* &<@anonymous:1940> */
	obj_t BGl_z62zc3z04anonymousza31940ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3193, obj_t BgL_new1203z00_3194)
	{
		{	/* SawMill/remove.scm 13 */
			{
				BgL_blockz00_bglt BgL_auxz00_4196;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1203z00_3194))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1203z00_3194))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1203z00_3194))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1203z00_3194))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_4196 = ((BgL_blockz00_bglt) BgL_new1203z00_3194);
				return ((obj_t) BgL_auxz00_4196);
			}
		}

	}



/* &lambda1938 */
	BgL_blockz00_bglt BGl_z62lambda1938z62zzsaw_removez00(obj_t BgL_envz00_3195,
		obj_t BgL_o1200z00_3196)
	{
		{	/* SawMill/remove.scm 13 */
			{	/* SawMill/remove.scm 13 */
				BgL_bremovedz00_bglt BgL_wide1202z00_3318;

				BgL_wide1202z00_3318 =
					((BgL_bremovedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_bremovedz00_bgl))));
				{	/* SawMill/remove.scm 13 */
					obj_t BgL_auxz00_4218;
					BgL_objectz00_bglt BgL_tmpz00_4214;

					BgL_auxz00_4218 = ((obj_t) BgL_wide1202z00_3318);
					BgL_tmpz00_4214 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1200z00_3196)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4214, BgL_auxz00_4218);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1200z00_3196)));
				{	/* SawMill/remove.scm 13 */
					long BgL_arg1939z00_3319;

					{	/* SawMill/remove.scm 13 */
						long BgL_res2160z00_3320;

						BgL_res2160z00_3320 =
							BGL_CLASS_INDEX(BGl_bremovedz00zzsaw_removez00);
						BgL_arg1939z00_3319 = BgL_res2160z00_3320;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1200z00_3196))), BgL_arg1939z00_3319);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1200z00_3196)));
			}
		}

	}



/* &lambda1935 */
	BgL_blockz00_bglt BGl_z62lambda1935z62zzsaw_removez00(obj_t BgL_envz00_3197,
		obj_t BgL_label1196z00_3198, obj_t BgL_preds1197z00_3199,
		obj_t BgL_succs1198z00_3200, obj_t BgL_first1199z00_3201)
	{
		{	/* SawMill/remove.scm 13 */
			{	/* SawMill/remove.scm 13 */
				int BgL_label1196z00_3321;

				BgL_label1196z00_3321 = CINT(BgL_label1196z00_3198);
				{	/* SawMill/remove.scm 13 */
					BgL_blockz00_bglt BgL_new1315z00_3325;

					{	/* SawMill/remove.scm 13 */
						BgL_blockz00_bglt BgL_tmp1313z00_3326;
						BgL_bremovedz00_bglt BgL_wide1314z00_3327;

						{
							BgL_blockz00_bglt BgL_auxz00_4233;

							{	/* SawMill/remove.scm 13 */
								BgL_blockz00_bglt BgL_new1312z00_3328;

								BgL_new1312z00_3328 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/remove.scm 13 */
									long BgL_arg1937z00_3329;

									{	/* SawMill/remove.scm 13 */
										long BgL_res2158z00_3330;

										BgL_res2158z00_3330 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1937z00_3329 = BgL_res2158z00_3330;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1312z00_3328),
										BgL_arg1937z00_3329);
								}
								{	/* SawMill/remove.scm 13 */
									BgL_objectz00_bglt BgL_tmpz00_4238;

									BgL_tmpz00_4238 = ((BgL_objectz00_bglt) BgL_new1312z00_3328);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4238, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1312z00_3328);
								BgL_auxz00_4233 = BgL_new1312z00_3328;
							}
							BgL_tmp1313z00_3326 = ((BgL_blockz00_bglt) BgL_auxz00_4233);
						}
						BgL_wide1314z00_3327 =
							((BgL_bremovedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_bremovedz00_bgl))));
						{	/* SawMill/remove.scm 13 */
							obj_t BgL_auxz00_4246;
							BgL_objectz00_bglt BgL_tmpz00_4244;

							BgL_auxz00_4246 = ((obj_t) BgL_wide1314z00_3327);
							BgL_tmpz00_4244 = ((BgL_objectz00_bglt) BgL_tmp1313z00_3326);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4244, BgL_auxz00_4246);
						}
						((BgL_objectz00_bglt) BgL_tmp1313z00_3326);
						{	/* SawMill/remove.scm 13 */
							long BgL_arg1936z00_3331;

							{	/* SawMill/remove.scm 13 */
								long BgL_res2159z00_3332;

								BgL_res2159z00_3332 =
									BGL_CLASS_INDEX(BGl_bremovedz00zzsaw_removez00);
								BgL_arg1936z00_3331 = BgL_res2159z00_3332;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1313z00_3326),
								BgL_arg1936z00_3331);
						}
						BgL_new1315z00_3325 = ((BgL_blockz00_bglt) BgL_tmp1313z00_3326);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1315z00_3325)))->BgL_labelz00) =
						((int) BgL_label1196z00_3321), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_3325)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1197z00_3199)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_3325)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1198z00_3200)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1315z00_3325)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1199z00_3201)), BUNSPEC);
					return BgL_new1315z00_3325;
				}
			}
		}

	}



/* &lambda1925 */
	BgL_blockz00_bglt BGl_z62lambda1925z62zzsaw_removez00(obj_t BgL_envz00_3202,
		obj_t BgL_o1194z00_3203)
	{
		{	/* SawMill/remove.scm 12 */
			{	/* SawMill/remove.scm 12 */
				long BgL_arg1926z00_3334;

				{	/* SawMill/remove.scm 12 */
					obj_t BgL_arg1927z00_3335;

					{	/* SawMill/remove.scm 12 */
						obj_t BgL_arg1928z00_3336;

						{	/* SawMill/remove.scm 12 */
							long BgL_arg1816z00_3337;

							{	/* SawMill/remove.scm 12 */
								long BgL_arg1817z00_3338;

								{	/* SawMill/remove.scm 12 */
									long BgL_res2155z00_3339;

									BgL_res2155z00_3339 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1194z00_3203)));
									BgL_arg1817z00_3338 = BgL_res2155z00_3339;
								}
								BgL_arg1816z00_3337 = (BgL_arg1817z00_3338 - OBJECT_TYPE);
							}
							BgL_arg1928z00_3336 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3337);
						}
						BgL_arg1927z00_3335 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1928z00_3336);
					}
					{	/* SawMill/remove.scm 12 */
						long BgL_res2157z00_3340;

						{	/* SawMill/remove.scm 12 */
							obj_t BgL_tmpz00_4271;

							BgL_tmpz00_4271 = ((obj_t) BgL_arg1927z00_3335);
							BgL_res2157z00_3340 = BGL_CLASS_INDEX(BgL_tmpz00_4271);
						}
						BgL_arg1926z00_3334 = BgL_res2157z00_3340;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1194z00_3203)), BgL_arg1926z00_3334);
			}
			{	/* SawMill/remove.scm 12 */
				BgL_objectz00_bglt BgL_tmpz00_4277;

				BgL_tmpz00_4277 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1194z00_3203));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4277, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1194z00_3203));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1194z00_3203));
		}

	}



/* &<@anonymous:1924> */
	obj_t BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3204, obj_t BgL_new1193z00_3205)
	{
		{	/* SawMill/remove.scm 12 */
			{
				BgL_blockz00_bglt BgL_auxz00_4285;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1193z00_3205))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1193z00_3205))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1193z00_3205))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1193z00_3205))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_4285 = ((BgL_blockz00_bglt) BgL_new1193z00_3205);
				return ((obj_t) BgL_auxz00_4285);
			}
		}

	}



/* &lambda1921 */
	BgL_blockz00_bglt BGl_z62lambda1921z62zzsaw_removez00(obj_t BgL_envz00_3206,
		obj_t BgL_o1190z00_3207)
	{
		{	/* SawMill/remove.scm 12 */
			{	/* SawMill/remove.scm 12 */
				BgL_visitedz00_bglt BgL_wide1192z00_3343;

				BgL_wide1192z00_3343 =
					((BgL_visitedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_visitedz00_bgl))));
				{	/* SawMill/remove.scm 12 */
					obj_t BgL_auxz00_4307;
					BgL_objectz00_bglt BgL_tmpz00_4303;

					BgL_auxz00_4307 = ((obj_t) BgL_wide1192z00_3343);
					BgL_tmpz00_4303 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1190z00_3207)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4303, BgL_auxz00_4307);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1190z00_3207)));
				{	/* SawMill/remove.scm 12 */
					long BgL_arg1923z00_3344;

					{	/* SawMill/remove.scm 12 */
						long BgL_res2154z00_3345;

						BgL_res2154z00_3345 =
							BGL_CLASS_INDEX(BGl_visitedz00zzsaw_removez00);
						BgL_arg1923z00_3344 = BgL_res2154z00_3345;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1190z00_3207))), BgL_arg1923z00_3344);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1190z00_3207)));
			}
		}

	}



/* &lambda1918 */
	BgL_blockz00_bglt BGl_z62lambda1918z62zzsaw_removez00(obj_t BgL_envz00_3208,
		obj_t BgL_label1186z00_3209, obj_t BgL_preds1187z00_3210,
		obj_t BgL_succs1188z00_3211, obj_t BgL_first1189z00_3212)
	{
		{	/* SawMill/remove.scm 12 */
			{	/* SawMill/remove.scm 12 */
				int BgL_label1186z00_3346;

				BgL_label1186z00_3346 = CINT(BgL_label1186z00_3209);
				{	/* SawMill/remove.scm 12 */
					BgL_blockz00_bglt BgL_new1310z00_3350;

					{	/* SawMill/remove.scm 12 */
						BgL_blockz00_bglt BgL_tmp1308z00_3351;
						BgL_visitedz00_bglt BgL_wide1309z00_3352;

						{
							BgL_blockz00_bglt BgL_auxz00_4322;

							{	/* SawMill/remove.scm 12 */
								BgL_blockz00_bglt BgL_new1307z00_3353;

								BgL_new1307z00_3353 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/remove.scm 12 */
									long BgL_arg1920z00_3354;

									{	/* SawMill/remove.scm 12 */
										long BgL_res2152z00_3355;

										BgL_res2152z00_3355 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1920z00_3354 = BgL_res2152z00_3355;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1307z00_3353),
										BgL_arg1920z00_3354);
								}
								{	/* SawMill/remove.scm 12 */
									BgL_objectz00_bglt BgL_tmpz00_4327;

									BgL_tmpz00_4327 = ((BgL_objectz00_bglt) BgL_new1307z00_3353);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4327, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1307z00_3353);
								BgL_auxz00_4322 = BgL_new1307z00_3353;
							}
							BgL_tmp1308z00_3351 = ((BgL_blockz00_bglt) BgL_auxz00_4322);
						}
						BgL_wide1309z00_3352 =
							((BgL_visitedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_visitedz00_bgl))));
						{	/* SawMill/remove.scm 12 */
							obj_t BgL_auxz00_4335;
							BgL_objectz00_bglt BgL_tmpz00_4333;

							BgL_auxz00_4335 = ((obj_t) BgL_wide1309z00_3352);
							BgL_tmpz00_4333 = ((BgL_objectz00_bglt) BgL_tmp1308z00_3351);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4333, BgL_auxz00_4335);
						}
						((BgL_objectz00_bglt) BgL_tmp1308z00_3351);
						{	/* SawMill/remove.scm 12 */
							long BgL_arg1919z00_3356;

							{	/* SawMill/remove.scm 12 */
								long BgL_res2153z00_3357;

								BgL_res2153z00_3357 =
									BGL_CLASS_INDEX(BGl_visitedz00zzsaw_removez00);
								BgL_arg1919z00_3356 = BgL_res2153z00_3357;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1308z00_3351),
								BgL_arg1919z00_3356);
						}
						BgL_new1310z00_3350 = ((BgL_blockz00_bglt) BgL_tmp1308z00_3351);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1310z00_3350)))->BgL_labelz00) =
						((int) BgL_label1186z00_3346), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1310z00_3350)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1187z00_3210)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1310z00_3350)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1188z00_3211)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1310z00_3350)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1189z00_3212)), BUNSPEC);
					return BgL_new1310z00_3350;
				}
			}
		}

	}



/* &lambda1908 */
	BgL_rtl_insz00_bglt BGl_z62lambda1908z62zzsaw_removez00(obj_t BgL_envz00_3213,
		obj_t BgL_o1184z00_3214)
	{
		{	/* SawMill/remove.scm 11 */
			{	/* SawMill/remove.scm 11 */
				long BgL_arg1909z00_3359;

				{	/* SawMill/remove.scm 11 */
					obj_t BgL_arg1910z00_3360;

					{	/* SawMill/remove.scm 11 */
						obj_t BgL_arg1911z00_3361;

						{	/* SawMill/remove.scm 11 */
							long BgL_arg1816z00_3362;

							{	/* SawMill/remove.scm 11 */
								long BgL_arg1817z00_3363;

								{	/* SawMill/remove.scm 11 */
									long BgL_res2149z00_3364;

									BgL_res2149z00_3364 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_insz00_bglt) BgL_o1184z00_3214)));
									BgL_arg1817z00_3363 = BgL_res2149z00_3364;
								}
								BgL_arg1816z00_3362 = (BgL_arg1817z00_3363 - OBJECT_TYPE);
							}
							BgL_arg1911z00_3361 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3362);
						}
						BgL_arg1910z00_3360 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1911z00_3361);
					}
					{	/* SawMill/remove.scm 11 */
						long BgL_res2151z00_3365;

						{	/* SawMill/remove.scm 11 */
							obj_t BgL_tmpz00_4360;

							BgL_tmpz00_4360 = ((obj_t) BgL_arg1910z00_3360);
							BgL_res2151z00_3365 = BGL_CLASS_INDEX(BgL_tmpz00_4360);
						}
						BgL_arg1909z00_3359 = BgL_res2151z00_3365;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) BgL_o1184z00_3214)), BgL_arg1909z00_3359);
			}
			{	/* SawMill/remove.scm 11 */
				BgL_objectz00_bglt BgL_tmpz00_4366;

				BgL_tmpz00_4366 =
					((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3214));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4366, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3214));
			return ((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1184z00_3214));
		}

	}



/* &<@anonymous:1907> */
	obj_t BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3215, obj_t BgL_new1183z00_3216)
	{
		{	/* SawMill/remove.scm 11 */
			{
				BgL_rtl_insz00_bglt BgL_auxz00_4374;

				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1183z00_3216))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1183z00_3216))))->BgL_z52spillz52) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1183z00_3216))))->BgL_destz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_4384;

					{	/* SawMill/remove.scm 11 */
						obj_t BgL_classz00_3367;

						BgL_classz00_3367 = BGl_rtl_funz00zzsaw_defsz00;
						{	/* SawMill/remove.scm 11 */
							obj_t BgL__ortest_1106z00_3368;

							BgL__ortest_1106z00_3368 = BGL_CLASS_NIL(BgL_classz00_3367);
							if (CBOOL(BgL__ortest_1106z00_3368))
								{	/* SawMill/remove.scm 11 */
									BgL_auxz00_4384 =
										((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_3368);
								}
							else
								{	/* SawMill/remove.scm 11 */
									BgL_auxz00_4384 =
										((BgL_rtl_funz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3367));
								}
						}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_new1183z00_3216))))->
							BgL_funz00) = ((BgL_rtl_funz00_bglt) BgL_auxz00_4384), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1183z00_3216))))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_4374 = ((BgL_rtl_insz00_bglt) BgL_new1183z00_3216);
				return ((obj_t) BgL_auxz00_4374);
			}
		}

	}



/* &lambda1905 */
	BgL_rtl_insz00_bglt BGl_z62lambda1905z62zzsaw_removez00(obj_t BgL_envz00_3217,
		obj_t BgL_o1180z00_3218)
	{
		{	/* SawMill/remove.scm 11 */
			{	/* SawMill/remove.scm 11 */
				BgL_removedz00_bglt BgL_wide1182z00_3370;

				BgL_wide1182z00_3370 =
					((BgL_removedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_removedz00_bgl))));
				{	/* SawMill/remove.scm 11 */
					obj_t BgL_auxz00_4404;
					BgL_objectz00_bglt BgL_tmpz00_4400;

					BgL_auxz00_4404 = ((obj_t) BgL_wide1182z00_3370);
					BgL_tmpz00_4400 =
						((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1180z00_3218)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4400, BgL_auxz00_4404);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1180z00_3218)));
				{	/* SawMill/remove.scm 11 */
					long BgL_arg1906z00_3371;

					{	/* SawMill/remove.scm 11 */
						long BgL_res2148z00_3372;

						BgL_res2148z00_3372 =
							BGL_CLASS_INDEX(BGl_removedz00zzsaw_removez00);
						BgL_arg1906z00_3371 = BgL_res2148z00_3372;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_o1180z00_3218))),
						BgL_arg1906z00_3371);
				}
				return
					((BgL_rtl_insz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1180z00_3218)));
			}
		}

	}



/* &lambda1902 */
	BgL_rtl_insz00_bglt BGl_z62lambda1902z62zzsaw_removez00(obj_t BgL_envz00_3219,
		obj_t BgL_loc1175z00_3220, obj_t BgL_z52spill1176z52_3221,
		obj_t BgL_dest1177z00_3222, obj_t BgL_fun1178z00_3223,
		obj_t BgL_args1179z00_3224)
	{
		{	/* SawMill/remove.scm 11 */
			{	/* SawMill/remove.scm 11 */
				BgL_rtl_insz00_bglt BgL_new1305z00_3376;

				{	/* SawMill/remove.scm 11 */
					BgL_rtl_insz00_bglt BgL_tmp1303z00_3377;
					BgL_removedz00_bglt BgL_wide1304z00_3378;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_4418;

						{	/* SawMill/remove.scm 11 */
							BgL_rtl_insz00_bglt BgL_new1302z00_3379;

							BgL_new1302z00_3379 =
								((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							{	/* SawMill/remove.scm 11 */
								long BgL_arg1904z00_3380;

								{	/* SawMill/remove.scm 11 */
									long BgL_res2146z00_3381;

									BgL_res2146z00_3381 =
										BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
									BgL_arg1904z00_3380 = BgL_res2146z00_3381;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1302z00_3379),
									BgL_arg1904z00_3380);
							}
							{	/* SawMill/remove.scm 11 */
								BgL_objectz00_bglt BgL_tmpz00_4423;

								BgL_tmpz00_4423 = ((BgL_objectz00_bglt) BgL_new1302z00_3379);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4423, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1302z00_3379);
							BgL_auxz00_4418 = BgL_new1302z00_3379;
						}
						BgL_tmp1303z00_3377 = ((BgL_rtl_insz00_bglt) BgL_auxz00_4418);
					}
					BgL_wide1304z00_3378 =
						((BgL_removedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_removedz00_bgl))));
					{	/* SawMill/remove.scm 11 */
						obj_t BgL_auxz00_4431;
						BgL_objectz00_bglt BgL_tmpz00_4429;

						BgL_auxz00_4431 = ((obj_t) BgL_wide1304z00_3378);
						BgL_tmpz00_4429 = ((BgL_objectz00_bglt) BgL_tmp1303z00_3377);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4429, BgL_auxz00_4431);
					}
					((BgL_objectz00_bglt) BgL_tmp1303z00_3377);
					{	/* SawMill/remove.scm 11 */
						long BgL_arg1903z00_3382;

						{	/* SawMill/remove.scm 11 */
							long BgL_res2147z00_3383;

							BgL_res2147z00_3383 =
								BGL_CLASS_INDEX(BGl_removedz00zzsaw_removez00);
							BgL_arg1903z00_3382 = BgL_res2147z00_3383;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1303z00_3377), BgL_arg1903z00_3382);
					}
					BgL_new1305z00_3376 = ((BgL_rtl_insz00_bglt) BgL_tmp1303z00_3377);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1305z00_3376)))->BgL_locz00) =
					((obj_t) BgL_loc1175z00_3220), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1305z00_3376)))->BgL_z52spillz52) =
					((obj_t) ((obj_t) BgL_z52spill1176z52_3221)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1305z00_3376)))->BgL_destz00) =
					((obj_t) BgL_dest1177z00_3222), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1305z00_3376)))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_fun1178z00_3223)),
					BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1305z00_3376)))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1179z00_3224)), BUNSPEC);
				return BgL_new1305z00_3376;
			}
		}

	}



/* &lambda1888 */
	BgL_blockz00_bglt BGl_z62lambda1888z62zzsaw_removez00(obj_t BgL_envz00_3225,
		obj_t BgL_o1173z00_3226)
	{
		{	/* SawMill/remove.scm 10 */
			{	/* SawMill/remove.scm 10 */
				long BgL_arg1889z00_3385;

				{	/* SawMill/remove.scm 10 */
					obj_t BgL_arg1891z00_3386;

					{	/* SawMill/remove.scm 10 */
						obj_t BgL_arg1892z00_3387;

						{	/* SawMill/remove.scm 10 */
							long BgL_arg1816z00_3388;

							{	/* SawMill/remove.scm 10 */
								long BgL_arg1817z00_3389;

								{	/* SawMill/remove.scm 10 */
									long BgL_res2143z00_3390;

									BgL_res2143z00_3390 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1173z00_3226)));
									BgL_arg1817z00_3389 = BgL_res2143z00_3390;
								}
								BgL_arg1816z00_3388 = (BgL_arg1817z00_3389 - OBJECT_TYPE);
							}
							BgL_arg1892z00_3387 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3388);
						}
						BgL_arg1891z00_3386 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1892z00_3387);
					}
					{	/* SawMill/remove.scm 10 */
						long BgL_res2145z00_3391;

						{	/* SawMill/remove.scm 10 */
							obj_t BgL_tmpz00_4458;

							BgL_tmpz00_4458 = ((obj_t) BgL_arg1891z00_3386);
							BgL_res2145z00_3391 = BGL_CLASS_INDEX(BgL_tmpz00_4458);
						}
						BgL_arg1889z00_3385 = BgL_res2145z00_3391;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1173z00_3226)), BgL_arg1889z00_3385);
			}
			{	/* SawMill/remove.scm 10 */
				BgL_objectz00_bglt BgL_tmpz00_4464;

				BgL_tmpz00_4464 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1173z00_3226));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4464, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1173z00_3226));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1173z00_3226));
		}

	}



/* &<@anonymous:1887> */
	obj_t BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3227, obj_t BgL_new1172z00_3228)
	{
		{	/* SawMill/remove.scm 10 */
			{
				BgL_blockz00_bglt BgL_auxz00_4472;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1172z00_3228))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1172z00_3228))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1172z00_3228))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1172z00_3228))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_4472 = ((BgL_blockz00_bglt) BgL_new1172z00_3228);
				return ((obj_t) BgL_auxz00_4472);
			}
		}

	}



/* &lambda1885 */
	BgL_blockz00_bglt BGl_z62lambda1885z62zzsaw_removez00(obj_t BgL_envz00_3229,
		obj_t BgL_o1169z00_3230)
	{
		{	/* SawMill/remove.scm 10 */
			{	/* SawMill/remove.scm 10 */
				BgL_ucollectz00_bglt BgL_wide1171z00_3394;

				BgL_wide1171z00_3394 =
					((BgL_ucollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_ucollectz00_bgl))));
				{	/* SawMill/remove.scm 10 */
					obj_t BgL_auxz00_4494;
					BgL_objectz00_bglt BgL_tmpz00_4490;

					BgL_auxz00_4494 = ((obj_t) BgL_wide1171z00_3394);
					BgL_tmpz00_4490 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1169z00_3230)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4490, BgL_auxz00_4494);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1169z00_3230)));
				{	/* SawMill/remove.scm 10 */
					long BgL_arg1886z00_3395;

					{	/* SawMill/remove.scm 10 */
						long BgL_res2142z00_3396;

						BgL_res2142z00_3396 =
							BGL_CLASS_INDEX(BGl_ucollectz00zzsaw_removez00);
						BgL_arg1886z00_3395 = BgL_res2142z00_3396;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1169z00_3230))), BgL_arg1886z00_3395);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1169z00_3230)));
			}
		}

	}



/* &lambda1882 */
	BgL_blockz00_bglt BGl_z62lambda1882z62zzsaw_removez00(obj_t BgL_envz00_3231,
		obj_t BgL_label1165z00_3232, obj_t BgL_preds1166z00_3233,
		obj_t BgL_succs1167z00_3234, obj_t BgL_first1168z00_3235)
	{
		{	/* SawMill/remove.scm 10 */
			{	/* SawMill/remove.scm 10 */
				int BgL_label1165z00_3397;

				BgL_label1165z00_3397 = CINT(BgL_label1165z00_3232);
				{	/* SawMill/remove.scm 10 */
					BgL_blockz00_bglt BgL_new1300z00_3401;

					{	/* SawMill/remove.scm 10 */
						BgL_blockz00_bglt BgL_tmp1298z00_3402;
						BgL_ucollectz00_bglt BgL_wide1299z00_3403;

						{
							BgL_blockz00_bglt BgL_auxz00_4509;

							{	/* SawMill/remove.scm 10 */
								BgL_blockz00_bglt BgL_new1297z00_3404;

								BgL_new1297z00_3404 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/remove.scm 10 */
									long BgL_arg1884z00_3405;

									{	/* SawMill/remove.scm 10 */
										long BgL_res2140z00_3406;

										BgL_res2140z00_3406 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1884z00_3405 = BgL_res2140z00_3406;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1297z00_3404),
										BgL_arg1884z00_3405);
								}
								{	/* SawMill/remove.scm 10 */
									BgL_objectz00_bglt BgL_tmpz00_4514;

									BgL_tmpz00_4514 = ((BgL_objectz00_bglt) BgL_new1297z00_3404);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4514, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1297z00_3404);
								BgL_auxz00_4509 = BgL_new1297z00_3404;
							}
							BgL_tmp1298z00_3402 = ((BgL_blockz00_bglt) BgL_auxz00_4509);
						}
						BgL_wide1299z00_3403 =
							((BgL_ucollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_ucollectz00_bgl))));
						{	/* SawMill/remove.scm 10 */
							obj_t BgL_auxz00_4522;
							BgL_objectz00_bglt BgL_tmpz00_4520;

							BgL_auxz00_4522 = ((obj_t) BgL_wide1299z00_3403);
							BgL_tmpz00_4520 = ((BgL_objectz00_bglt) BgL_tmp1298z00_3402);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4520, BgL_auxz00_4522);
						}
						((BgL_objectz00_bglt) BgL_tmp1298z00_3402);
						{	/* SawMill/remove.scm 10 */
							long BgL_arg1883z00_3407;

							{	/* SawMill/remove.scm 10 */
								long BgL_res2141z00_3408;

								BgL_res2141z00_3408 =
									BGL_CLASS_INDEX(BGl_ucollectz00zzsaw_removez00);
								BgL_arg1883z00_3407 = BgL_res2141z00_3408;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1298z00_3402),
								BgL_arg1883z00_3407);
						}
						BgL_new1300z00_3401 = ((BgL_blockz00_bglt) BgL_tmp1298z00_3402);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1300z00_3401)))->BgL_labelz00) =
						((int) BgL_label1165z00_3397), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1300z00_3401)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1166z00_3233)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1300z00_3401)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1167z00_3234)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1300z00_3401)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1168z00_3235)), BUNSPEC);
					return BgL_new1300z00_3401;
				}
			}
		}

	}



/* &lambda1870 */
	BgL_blockz00_bglt BGl_z62lambda1870z62zzsaw_removez00(obj_t BgL_envz00_3236,
		obj_t BgL_o1163z00_3237)
	{
		{	/* SawMill/remove.scm 9 */
			{	/* SawMill/remove.scm 9 */
				long BgL_arg1871z00_3410;

				{	/* SawMill/remove.scm 9 */
					obj_t BgL_arg1872z00_3411;

					{	/* SawMill/remove.scm 9 */
						obj_t BgL_arg1873z00_3412;

						{	/* SawMill/remove.scm 9 */
							long BgL_arg1816z00_3413;

							{	/* SawMill/remove.scm 9 */
								long BgL_arg1817z00_3414;

								{	/* SawMill/remove.scm 9 */
									long BgL_res2137z00_3415;

									BgL_res2137z00_3415 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1163z00_3237)));
									BgL_arg1817z00_3414 = BgL_res2137z00_3415;
								}
								BgL_arg1816z00_3413 = (BgL_arg1817z00_3414 - OBJECT_TYPE);
							}
							BgL_arg1873z00_3412 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3413);
						}
						BgL_arg1872z00_3411 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1873z00_3412);
					}
					{	/* SawMill/remove.scm 9 */
						long BgL_res2139z00_3416;

						{	/* SawMill/remove.scm 9 */
							obj_t BgL_tmpz00_4547;

							BgL_tmpz00_4547 = ((obj_t) BgL_arg1872z00_3411);
							BgL_res2139z00_3416 = BGL_CLASS_INDEX(BgL_tmpz00_4547);
						}
						BgL_arg1871z00_3410 = BgL_res2139z00_3416;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1163z00_3237)), BgL_arg1871z00_3410);
			}
			{	/* SawMill/remove.scm 9 */
				BgL_objectz00_bglt BgL_tmpz00_4553;

				BgL_tmpz00_4553 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_3237));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4553, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_3237));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1163z00_3237));
		}

	}



/* &<@anonymous:1869> */
	obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3238, obj_t BgL_new1162z00_3239)
	{
		{	/* SawMill/remove.scm 9 */
			{
				BgL_blockz00_bglt BgL_auxz00_4561;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1162z00_3239))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_3239))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_3239))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1162z00_3239))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_4561 = ((BgL_blockz00_bglt) BgL_new1162z00_3239);
				return ((obj_t) BgL_auxz00_4561);
			}
		}

	}



/* &lambda1867 */
	BgL_blockz00_bglt BGl_z62lambda1867z62zzsaw_removez00(obj_t BgL_envz00_3240,
		obj_t BgL_o1159z00_3241)
	{
		{	/* SawMill/remove.scm 9 */
			{	/* SawMill/remove.scm 9 */
				BgL_rcollectz00_bglt BgL_wide1161z00_3419;

				BgL_wide1161z00_3419 =
					((BgL_rcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rcollectz00_bgl))));
				{	/* SawMill/remove.scm 9 */
					obj_t BgL_auxz00_4583;
					BgL_objectz00_bglt BgL_tmpz00_4579;

					BgL_auxz00_4583 = ((obj_t) BgL_wide1161z00_3419);
					BgL_tmpz00_4579 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_3241)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4579, BgL_auxz00_4583);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_3241)));
				{	/* SawMill/remove.scm 9 */
					long BgL_arg1868z00_3420;

					{	/* SawMill/remove.scm 9 */
						long BgL_res2136z00_3421;

						BgL_res2136z00_3421 =
							BGL_CLASS_INDEX(BGl_rcollectz00zzsaw_removez00);
						BgL_arg1868z00_3420 = BgL_res2136z00_3421;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1159z00_3241))), BgL_arg1868z00_3420);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1159z00_3241)));
			}
		}

	}



/* &lambda1864 */
	BgL_blockz00_bglt BGl_z62lambda1864z62zzsaw_removez00(obj_t BgL_envz00_3242,
		obj_t BgL_label1155z00_3243, obj_t BgL_preds1156z00_3244,
		obj_t BgL_succs1157z00_3245, obj_t BgL_first1158z00_3246)
	{
		{	/* SawMill/remove.scm 9 */
			{	/* SawMill/remove.scm 9 */
				int BgL_label1155z00_3422;

				BgL_label1155z00_3422 = CINT(BgL_label1155z00_3243);
				{	/* SawMill/remove.scm 9 */
					BgL_blockz00_bglt BgL_new1295z00_3426;

					{	/* SawMill/remove.scm 9 */
						BgL_blockz00_bglt BgL_tmp1293z00_3427;
						BgL_rcollectz00_bglt BgL_wide1294z00_3428;

						{
							BgL_blockz00_bglt BgL_auxz00_4598;

							{	/* SawMill/remove.scm 9 */
								BgL_blockz00_bglt BgL_new1292z00_3429;

								BgL_new1292z00_3429 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/remove.scm 9 */
									long BgL_arg1866z00_3430;

									{	/* SawMill/remove.scm 9 */
										long BgL_res2134z00_3431;

										BgL_res2134z00_3431 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1866z00_3430 = BgL_res2134z00_3431;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1292z00_3429),
										BgL_arg1866z00_3430);
								}
								{	/* SawMill/remove.scm 9 */
									BgL_objectz00_bglt BgL_tmpz00_4603;

									BgL_tmpz00_4603 = ((BgL_objectz00_bglt) BgL_new1292z00_3429);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4603, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1292z00_3429);
								BgL_auxz00_4598 = BgL_new1292z00_3429;
							}
							BgL_tmp1293z00_3427 = ((BgL_blockz00_bglt) BgL_auxz00_4598);
						}
						BgL_wide1294z00_3428 =
							((BgL_rcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rcollectz00_bgl))));
						{	/* SawMill/remove.scm 9 */
							obj_t BgL_auxz00_4611;
							BgL_objectz00_bglt BgL_tmpz00_4609;

							BgL_auxz00_4611 = ((obj_t) BgL_wide1294z00_3428);
							BgL_tmpz00_4609 = ((BgL_objectz00_bglt) BgL_tmp1293z00_3427);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4609, BgL_auxz00_4611);
						}
						((BgL_objectz00_bglt) BgL_tmp1293z00_3427);
						{	/* SawMill/remove.scm 9 */
							long BgL_arg1865z00_3432;

							{	/* SawMill/remove.scm 9 */
								long BgL_res2135z00_3433;

								BgL_res2135z00_3433 =
									BGL_CLASS_INDEX(BGl_rcollectz00zzsaw_removez00);
								BgL_arg1865z00_3432 = BgL_res2135z00_3433;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1293z00_3427),
								BgL_arg1865z00_3432);
						}
						BgL_new1295z00_3426 = ((BgL_blockz00_bglt) BgL_tmp1293z00_3427);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1295z00_3426)))->BgL_labelz00) =
						((int) BgL_label1155z00_3422), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1295z00_3426)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1156z00_3244)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1295z00_3426)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1157z00_3245)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1295z00_3426)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1158z00_3246)), BUNSPEC);
					return BgL_new1295z00_3426;
				}
			}
		}

	}



/* &lambda1852 */
	BgL_blockz00_bglt BGl_z62lambda1852z62zzsaw_removez00(obj_t BgL_envz00_3247,
		obj_t BgL_o1153z00_3248)
	{
		{	/* SawMill/remove.scm 8 */
			{	/* SawMill/remove.scm 8 */
				long BgL_arg1853z00_3435;

				{	/* SawMill/remove.scm 8 */
					obj_t BgL_arg1855z00_3436;

					{	/* SawMill/remove.scm 8 */
						obj_t BgL_arg1856z00_3437;

						{	/* SawMill/remove.scm 8 */
							long BgL_arg1816z00_3438;

							{	/* SawMill/remove.scm 8 */
								long BgL_arg1817z00_3439;

								{	/* SawMill/remove.scm 8 */
									long BgL_res2131z00_3440;

									BgL_res2131z00_3440 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1153z00_3248)));
									BgL_arg1817z00_3439 = BgL_res2131z00_3440;
								}
								BgL_arg1816z00_3438 = (BgL_arg1817z00_3439 - OBJECT_TYPE);
							}
							BgL_arg1856z00_3437 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3438);
						}
						BgL_arg1855z00_3436 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1856z00_3437);
					}
					{	/* SawMill/remove.scm 8 */
						long BgL_res2133z00_3441;

						{	/* SawMill/remove.scm 8 */
							obj_t BgL_tmpz00_4636;

							BgL_tmpz00_4636 = ((obj_t) BgL_arg1855z00_3436);
							BgL_res2133z00_3441 = BGL_CLASS_INDEX(BgL_tmpz00_4636);
						}
						BgL_arg1853z00_3435 = BgL_res2133z00_3441;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1153z00_3248)), BgL_arg1853z00_3435);
			}
			{	/* SawMill/remove.scm 8 */
				BgL_objectz00_bglt BgL_tmpz00_4642;

				BgL_tmpz00_4642 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_3248));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4642, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_3248));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_3248));
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_removez00(obj_t
		BgL_envz00_3249, obj_t BgL_new1152z00_3250)
	{
		{	/* SawMill/remove.scm 8 */
			{
				BgL_blockz00_bglt BgL_auxz00_4650;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1152z00_3250))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_3250))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_3250))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1152z00_3250))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				BgL_auxz00_4650 = ((BgL_blockz00_bglt) BgL_new1152z00_3250);
				return ((obj_t) BgL_auxz00_4650);
			}
		}

	}



/* &lambda1849 */
	BgL_blockz00_bglt BGl_z62lambda1849z62zzsaw_removez00(obj_t BgL_envz00_3251,
		obj_t BgL_o1149z00_3252)
	{
		{	/* SawMill/remove.scm 8 */
			{	/* SawMill/remove.scm 8 */
				BgL_defcollectz00_bglt BgL_wide1151z00_3444;

				BgL_wide1151z00_3444 =
					((BgL_defcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_defcollectz00_bgl))));
				{	/* SawMill/remove.scm 8 */
					obj_t BgL_auxz00_4672;
					BgL_objectz00_bglt BgL_tmpz00_4668;

					BgL_auxz00_4672 = ((obj_t) BgL_wide1151z00_3444);
					BgL_tmpz00_4668 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_3252)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4668, BgL_auxz00_4672);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_3252)));
				{	/* SawMill/remove.scm 8 */
					long BgL_arg1850z00_3445;

					{	/* SawMill/remove.scm 8 */
						long BgL_res2130z00_3446;

						BgL_res2130z00_3446 =
							BGL_CLASS_INDEX(BGl_defcollectz00zzsaw_removez00);
						BgL_arg1850z00_3445 = BgL_res2130z00_3446;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1149z00_3252))), BgL_arg1850z00_3445);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1149z00_3252)));
			}
		}

	}



/* &lambda1846 */
	BgL_blockz00_bglt BGl_z62lambda1846z62zzsaw_removez00(obj_t BgL_envz00_3253,
		obj_t BgL_label1145z00_3254, obj_t BgL_preds1146z00_3255,
		obj_t BgL_succs1147z00_3256, obj_t BgL_first1148z00_3257)
	{
		{	/* SawMill/remove.scm 8 */
			{	/* SawMill/remove.scm 8 */
				int BgL_label1145z00_3447;

				BgL_label1145z00_3447 = CINT(BgL_label1145z00_3254);
				{	/* SawMill/remove.scm 8 */
					BgL_blockz00_bglt BgL_new1290z00_3451;

					{	/* SawMill/remove.scm 8 */
						BgL_blockz00_bglt BgL_tmp1288z00_3452;
						BgL_defcollectz00_bglt BgL_wide1289z00_3453;

						{
							BgL_blockz00_bglt BgL_auxz00_4687;

							{	/* SawMill/remove.scm 8 */
								BgL_blockz00_bglt BgL_new1287z00_3454;

								BgL_new1287z00_3454 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/remove.scm 8 */
									long BgL_arg1848z00_3455;

									{	/* SawMill/remove.scm 8 */
										long BgL_res2128z00_3456;

										BgL_res2128z00_3456 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg1848z00_3455 = BgL_res2128z00_3456;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1287z00_3454),
										BgL_arg1848z00_3455);
								}
								{	/* SawMill/remove.scm 8 */
									BgL_objectz00_bglt BgL_tmpz00_4692;

									BgL_tmpz00_4692 = ((BgL_objectz00_bglt) BgL_new1287z00_3454);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4692, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1287z00_3454);
								BgL_auxz00_4687 = BgL_new1287z00_3454;
							}
							BgL_tmp1288z00_3452 = ((BgL_blockz00_bglt) BgL_auxz00_4687);
						}
						BgL_wide1289z00_3453 =
							((BgL_defcollectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_defcollectz00_bgl))));
						{	/* SawMill/remove.scm 8 */
							obj_t BgL_auxz00_4700;
							BgL_objectz00_bglt BgL_tmpz00_4698;

							BgL_auxz00_4700 = ((obj_t) BgL_wide1289z00_3453);
							BgL_tmpz00_4698 = ((BgL_objectz00_bglt) BgL_tmp1288z00_3452);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4698, BgL_auxz00_4700);
						}
						((BgL_objectz00_bglt) BgL_tmp1288z00_3452);
						{	/* SawMill/remove.scm 8 */
							long BgL_arg1847z00_3457;

							{	/* SawMill/remove.scm 8 */
								long BgL_res2129z00_3458;

								BgL_res2129z00_3458 =
									BGL_CLASS_INDEX(BGl_defcollectz00zzsaw_removez00);
								BgL_arg1847z00_3457 = BgL_res2129z00_3458;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1288z00_3452),
								BgL_arg1847z00_3457);
						}
						BgL_new1290z00_3451 = ((BgL_blockz00_bglt) BgL_tmp1288z00_3452);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1290z00_3451)))->BgL_labelz00) =
						((int) BgL_label1145z00_3447), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1290z00_3451)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1146z00_3255)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1290z00_3451)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1147z00_3256)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1290z00_3451)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1148z00_3257)), BUNSPEC);
					return BgL_new1290z00_3451;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_removez00()
	{
		{	/* SawMill/remove.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2204z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2204z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2204z00zzsaw_removez00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string2204z00zzsaw_removez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2204z00zzsaw_removez00));
		}

	}

#ifdef __cplusplus
}
#endif
