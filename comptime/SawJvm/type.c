/*===========================================================================*/
/*   (SawJvm/type.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/type.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

	typedef struct BgL_rtl_loadgz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                   *BgL_rtl_loadgz00_bglt;

	typedef struct BgL_rtl_getfieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_objtypez00;
		struct BgL_typez00_bgl *BgL_typez00;
	}                      *BgL_rtl_getfieldz00_bglt;

	typedef struct BgL_rtl_vrefz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_typez00_bgl *BgL_vtypez00;
	}                  *BgL_rtl_vrefz00_bglt;

	typedef struct BgL_rtl_callz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_globalz00_bgl *BgL_varz00;
	}                  *BgL_rtl_callz00_bglt;

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


	extern obj_t BGl_rtl_funcallz00zzsaw_defsz00;
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_vr1565z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_ge1563z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_lo1559z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static int BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(BgL_rtl_funz00_bglt,
		BgL_rtl_insz00_bglt);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_lo1561z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_vrefz00zzsaw_defsz00;
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_typez00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_mo1557z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_lightfuncallz00zzsaw_defsz00;
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_la1549z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_typez00();
	static obj_t BGl_z62typeSiza7ezc5zzsaw_jvm_typez00(obj_t, obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_no1551z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_ap1569z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	BGL_EXPORTED_DECL int BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_typez00_bglt);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_typez00();
	static obj_t BGl_z62siza7ezd2destzd2funzc5zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62siza7ezd2destz17zzsaw_jvm_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2namezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t);
	static BgL_typez00_bglt
		BGl_typezd2destzd2funz00zzsaw_jvm_typez00(BgL_rtl_funz00_bglt);
	extern obj_t BGl_rtl_effectz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_ca1575z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_rtl_newz00zzsaw_defsz00;
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62typezd2destzd2funzd2rtl_ca1579zb0zzsaw_jvm_typez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_typez00();
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_ne1567z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_purez00zzsaw_defsz00;
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static obj_t BGl_z62typezd2destzd2fun1576z62zzsaw_jvm_typez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_li1571z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00 = BUNSPEC;
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_pu1555z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62typezd2destzd2funz62zzsaw_jvm_typez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	extern obj_t BGl_rtl_lastz00zzsaw_defsz00;
	static obj_t BGl_z62siza7ezd2destzd2fun1546zc5zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_applyz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	extern obj_t BGl_rtl_loadgz00zzsaw_defsz00;
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	extern obj_t BGl_rtl_notseqz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_typez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00();
	extern obj_t BGl_rtl_castz00zzsaw_defsz00;
	extern obj_t BGl_rtl_getfieldz00zzsaw_defsz00;
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_ef1553z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62siza7ezd2destzd2funzd2rtl_fu1573z17zzsaw_jvm_typez00(obj_t, obj_t,
		obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1900z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1919za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_pu1555z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1901z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1920za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_mo1557z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1902z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1921za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_lo1559z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1903z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1922za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_lo1561z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1904z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1923za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_ge1563z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1905z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1924za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_vr1565z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1906z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1925za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_ne1567z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1908z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1926za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_ap1569z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1909z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1927za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_li1571z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1910z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1928za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_fu1573z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1911z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1929za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_ca1575z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1912z00zzsaw_jvm_typez00,
		BgL_bgl_za762typeza7d2destza7d1930za7,
		BGl_z62typezd2destzd2funzd2rtl_ca1579zb0zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
		BgL_bgl_za762typeza7d2destza7d1931za7,
		BGl_z62typezd2destzd2funz62zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1892z00zzsaw_jvm_typez00,
		BgL_bgl_string1892za700za7za7s1932za7, "size-dest-fun1546", 17);
	      DEFINE_STRING(BGl_string1894z00zzsaw_jvm_typez00,
		BgL_bgl_string1894za700za7za7s1933za7, "type-dest-fun1576", 17);
	      DEFINE_STRING(BGl_string1895z00zzsaw_jvm_typez00,
		BgL_bgl_string1895za700za7za7s1934za7, "no method for", 13);
	      DEFINE_STRING(BGl_string1897z00zzsaw_jvm_typez00,
		BgL_bgl_string1897za700za7za7s1935za7, "size-dest-fun::int", 18);
	     
		DEFINE_STATIC_BGL_GENERIC(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1936za7,
		BGl_z62siza7ezd2destzd2funzc5zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_siza7ezd2destzd2envza7zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1937za7,
		BGl_z62siza7ezd2destz17zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_typeSiza7ezd2envz75zzsaw_jvm_typez00,
		BgL_bgl_za762typesiza7a7eza7c51938za7,
		BGl_z62typeSiza7ezc5zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1907z00zzsaw_jvm_typez00,
		BgL_bgl_string1907za700za7za7s1939za7, "size-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string1913z00zzsaw_jvm_typez00,
		BgL_bgl_string1913za700za7za7s1940za7, "type-dest-fun::type", 19);
	      DEFINE_STRING(BGl_string1914z00zzsaw_jvm_typez00,
		BgL_bgl_string1914za700za7za7s1941za7, "saw_jvm_type", 12);
	      DEFINE_STRING(BGl_string1915z00zzsaw_jvm_typez00,
		BgL_bgl_string1915za700za7za7s1942za7,
		"size-dest-fun void (elong llong uelong ullong double int64 uint64) ", 67);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1891z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1943za7,
		BGl_z62siza7ezd2destzd2fun1546zc5zzsaw_jvm_typez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1893z00zzsaw_jvm_typez00,
		BgL_bgl_za762typeza7d2destza7d1944za7,
		BGl_z62typezd2destzd2fun1576z62zzsaw_jvm_typez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1896z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1945za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_la1549z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1898z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1946za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_no1551z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1899z00zzsaw_jvm_typez00,
		BgL_bgl_za762siza7a7eza7d2dest1947za7,
		BGl_z62siza7ezd2destzd2funzd2rtl_ef1553z17zzsaw_jvm_typez00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00));
		     ADD_ROOT((void *) (&BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_typez00(long
		BgL_checksumz00_2996, char *BgL_fromz00_2997)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_typez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_typez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00();
					BGl_cnstzd2initzd2zzsaw_jvm_typez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00();
					BGl_genericzd2initzd2zzsaw_jvm_typez00();
					BGl_methodzd2initzd2zzsaw_jvm_typez00();
					return BGl_toplevelzd2initzd2zzsaw_jvm_typez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_type");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_type");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			{	/* SawJvm/type.scm 1 */
				obj_t BgL_cportz00_2954;

				{	/* SawJvm/type.scm 1 */
					obj_t BgL_stringz00_2962;

					BgL_stringz00_2962 = BGl_string1915z00zzsaw_jvm_typez00;
					{	/* SawJvm/type.scm 1 */
						obj_t BgL_startz00_2963;

						BgL_startz00_2963 = BINT(((long) 0));
						{	/* SawJvm/type.scm 1 */
							obj_t BgL_endz00_2964;

							BgL_endz00_2964 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2962)));
							{	/* SawJvm/type.scm 1 */

								BgL_cportz00_2954 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2962, BgL_startz00_2963, BgL_endz00_2964);
				}}}}
				{
					long BgL_iz00_2955;

					BgL_iz00_2955 = ((long) 2);
				BgL_loopz00_2956:
					if ((BgL_iz00_2955 == ((long) -1)))
						{	/* SawJvm/type.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/type.scm 1 */
							{	/* SawJvm/type.scm 1 */
								obj_t BgL_arg1917z00_2958;

								{	/* SawJvm/type.scm 1 */

									{	/* SawJvm/type.scm 1 */
										obj_t BgL_locationz00_2960;

										BgL_locationz00_2960 = BBOOL(((bool_t) 0));
										{	/* SawJvm/type.scm 1 */

											BgL_arg1917z00_2958 =
												BGl_readz00zz__readerz00(BgL_cportz00_2954,
												BgL_locationz00_2960);
										}
									}
								}
								{	/* SawJvm/type.scm 1 */
									int BgL_tmpz00_3027;

									BgL_tmpz00_3027 = (int) (BgL_iz00_2955);
									CNST_TABLE_SET(BgL_tmpz00_3027, BgL_arg1917z00_2958);
							}}
							{	/* SawJvm/type.scm 1 */
								int BgL_auxz00_2961;

								BgL_auxz00_2961 = (int) ((BgL_iz00_2955 - ((long) 1)));
								{
									long BgL_iz00_3032;

									BgL_iz00_3032 = (long) (BgL_auxz00_2961);
									BgL_iz00_2955 = BgL_iz00_3032;
									goto BgL_loopz00_2956;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			BGl_za2za2longzd2typesza2za2zd2zzsaw_jvm_typez00 =
				CNST_TABLE_REF(((long) 0));
			return BUNSPEC;
		}

	}



/* typeSize */
	BGL_EXPORTED_DEF int BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_typez00_bglt
		BgL_typez00_3)
	{
		{	/* SawJvm/type.scm 18 */
			{	/* SawJvm/type.scm 19 */
				obj_t BgL_idz00_2168;

				BgL_idz00_2168 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_3))->BgL_idz00);
				if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_2168,
							CNST_TABLE_REF(((long) 0)))))
					{	/* SawJvm/type.scm 20 */
						return (int) (((long) 2));
					}
				else
					{	/* SawJvm/type.scm 20 */
						if ((BgL_idz00_2168 == CNST_TABLE_REF(((long) 1))))
							{	/* SawJvm/type.scm 21 */
								return (int) (((long) 0));
							}
						else
							{	/* SawJvm/type.scm 21 */
								return (int) (((long) 1));
		}}}}

	}



/* &typeSize */
	obj_t BGl_z62typeSiza7ezc5zzsaw_jvm_typez00(obj_t BgL_envz00_2879,
		obj_t BgL_typez00_2880)
	{
		{	/* SawJvm/type.scm 18 */
			return
				BINT(BGl_typeSiza7eza7zzsaw_jvm_typez00(
					((BgL_typez00_bglt) BgL_typez00_2880)));
		}

	}



/* size-dest */
	BGL_EXPORTED_DEF int BGl_siza7ezd2destz75zzsaw_jvm_typez00(obj_t BgL_insz00_4)
	{
		{	/* SawJvm/type.scm 24 */
			if (BGl_isazf3zf3zz__objectz00(BgL_insz00_4, BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawJvm/type.scm 26 */
					BgL_typez00_bglt BgL_arg1588z00_2172;

					BgL_arg1588z00_2172 =
						(((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_insz00_4)))->BgL_typez00);
					return BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_arg1588z00_2172);
				}
			else
				{	/* SawJvm/type.scm 25 */
					if (CBOOL(
							(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_4)))->BgL_destz00)))
						{	/* SawJvm/type.scm 29 */
							BgL_typez00_bglt BgL_arg1592z00_2175;

							BgL_arg1592z00_2175 =
								(((BgL_rtl_regz00_bglt) COBJECT(
										((BgL_rtl_regz00_bglt)
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_insz00_4)))->
												BgL_destz00))))->BgL_typez00);
							return BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_arg1592z00_2175);
						}
					else
						{	/* SawJvm/type.scm 30 */
							BgL_rtl_funz00_bglt BgL_arg1597z00_2177;

							BgL_arg1597z00_2177 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_insz00_4)))->BgL_funz00);
							return
								BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(BgL_arg1597z00_2177,
								((BgL_rtl_insz00_bglt) BgL_insz00_4));
						}
				}
		}

	}



/* &size-dest */
	obj_t BGl_z62siza7ezd2destz17zzsaw_jvm_typez00(obj_t BgL_envz00_2881,
		obj_t BgL_insz00_2882)
	{
		{	/* SawJvm/type.scm 24 */
			return BINT(BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_insz00_2882));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_proc1891z00zzsaw_jvm_typez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string1892z00zzsaw_jvm_typez00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
				BGl_proc1893z00zzsaw_jvm_typez00, BGl_rtl_funz00zzsaw_defsz00,
				BGl_string1894z00zzsaw_jvm_typez00);
		}

	}



/* &type-dest-fun1576 */
	obj_t BGl_z62typezd2destzd2fun1576z62zzsaw_jvm_typez00(obj_t BgL_envz00_2885,
		obj_t BgL_funz00_2886)
	{
		{	/* SawJvm/type.scm 74 */
			{	/* SawJvm/type.scm 76 */
				obj_t BgL_arg1606z00_2968;

				{	/* SawJvm/type.scm 76 */
					obj_t BgL_arg1611z00_2969;

					{	/* SawJvm/type.scm 76 */
						long BgL_arg1816z00_2970;

						{	/* SawJvm/type.scm 76 */
							long BgL_arg1817z00_2971;

							{	/* SawJvm/type.scm 76 */
								long BgL_res1867z00_2972;

								BgL_res1867z00_2972 =
									BGL_OBJECT_CLASS_NUM(
									((BgL_objectz00_bglt)
										((BgL_rtl_funz00_bglt) BgL_funz00_2886)));
								BgL_arg1817z00_2971 = BgL_res1867z00_2972;
							}
							BgL_arg1816z00_2970 = (BgL_arg1817z00_2971 - OBJECT_TYPE);
						}
						BgL_arg1611z00_2969 =
							VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
							BgL_arg1816z00_2970);
					}
					BgL_arg1606z00_2968 =
						BGl_classzd2namezd2zz__objectz00(BgL_arg1611z00_2969);
				}
				return
					BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 2)),
					BGl_string1895z00zzsaw_jvm_typez00, BgL_arg1606z00_2968);
		}}

	}



/* &size-dest-fun1546 */
	obj_t BGl_z62siza7ezd2destzd2fun1546zc5zzsaw_jvm_typez00(obj_t
		BgL_envz00_2887, obj_t BgL_funz00_2888, obj_t BgL_insz00_2889)
	{
		{	/* SawJvm/type.scm 35 */
			return
				BINT(BGl_typeSiza7eza7zzsaw_jvm_typez00
				(BGl_typezd2destzd2funz00zzsaw_jvm_typez00(((BgL_rtl_funz00_bglt)
							BgL_funz00_2888))));
		}

	}



/* size-dest-fun */
	int BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_5, BgL_rtl_insz00_bglt BgL_insz00_6)
	{
		{	/* SawJvm/type.scm 35 */
			{	/* SawJvm/type.scm 35 */
				obj_t BgL_method1547z00_2190;

				{	/* SawJvm/type.scm 35 */
					obj_t BgL_res1879z00_2823;

					{	/* SawJvm/type.scm 35 */
						long BgL_objzd2classzd2numz00_2788;

						{	/* SawJvm/type.scm 35 */
							long BgL_res1869z00_2791;

							BgL_res1869z00_2791 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_5));
							BgL_objzd2classzd2numz00_2788 = BgL_res1869z00_2791;
						}
						{	/* SawJvm/type.scm 35 */
							obj_t BgL_arg1813z00_2789;

							BgL_arg1813z00_2789 =
								PROCEDURE_REF(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
								(int) (((long) 1)));
							{	/* SawJvm/type.scm 35 */
								int BgL_offsetz00_2793;

								BgL_offsetz00_2793 = (int) (BgL_objzd2classzd2numz00_2788);
								{	/* SawJvm/type.scm 35 */
									long BgL_offsetz00_2794;

									BgL_offsetz00_2794 =
										((long) (BgL_offsetz00_2793) - OBJECT_TYPE);
									{	/* SawJvm/type.scm 35 */
										long BgL_modz00_2795;

										BgL_modz00_2795 =
											(BgL_offsetz00_2794 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/type.scm 35 */
											long BgL_restz00_2797;

											BgL_restz00_2797 =
												(BgL_offsetz00_2794 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/type.scm 35 */

												{	/* SawJvm/type.scm 35 */
													obj_t BgL_bucketz00_2799;

													BgL_bucketz00_2799 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2789), BgL_modz00_2795);
													BgL_res1879z00_2823 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2799), BgL_restz00_2797);
					}}}}}}}}
					BgL_method1547z00_2190 = BgL_res1879z00_2823;
				}
				return
					CINT(PROCEDURE_ENTRY(BgL_method1547z00_2190) (BgL_method1547z00_2190,
						((obj_t) BgL_funz00_5), ((obj_t) BgL_insz00_6), BEOA));
			}
		}

	}



/* &size-dest-fun */
	obj_t BGl_z62siza7ezd2destzd2funzc5zzsaw_jvm_typez00(obj_t BgL_envz00_2890,
		obj_t BgL_funz00_2891, obj_t BgL_insz00_2892)
	{
		{	/* SawJvm/type.scm 35 */
			return
				BINT(BGl_siza7ezd2destzd2funza7zzsaw_jvm_typez00(
					((BgL_rtl_funz00_bglt) BgL_funz00_2891),
					((BgL_rtl_insz00_bglt) BgL_insz00_2892)));
		}

	}



/* type-dest-fun */
	BgL_typez00_bglt BGl_typezd2destzd2funz00zzsaw_jvm_typez00(BgL_rtl_funz00_bglt
		BgL_funz00_35)
	{
		{	/* SawJvm/type.scm 74 */
			{	/* SawJvm/type.scm 74 */
				obj_t BgL_method1577z00_2191;

				{	/* SawJvm/type.scm 74 */
					obj_t BgL_res1890z00_2860;

					{	/* SawJvm/type.scm 74 */
						long BgL_objzd2classzd2numz00_2825;

						{	/* SawJvm/type.scm 74 */
							long BgL_res1880z00_2828;

							BgL_res1880z00_2828 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_funz00_35));
							BgL_objzd2classzd2numz00_2825 = BgL_res1880z00_2828;
						}
						{	/* SawJvm/type.scm 74 */
							obj_t BgL_arg1813z00_2826;

							BgL_arg1813z00_2826 =
								PROCEDURE_REF(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
								(int) (((long) 1)));
							{	/* SawJvm/type.scm 74 */
								int BgL_offsetz00_2830;

								BgL_offsetz00_2830 = (int) (BgL_objzd2classzd2numz00_2825);
								{	/* SawJvm/type.scm 74 */
									long BgL_offsetz00_2831;

									BgL_offsetz00_2831 =
										((long) (BgL_offsetz00_2830) - OBJECT_TYPE);
									{	/* SawJvm/type.scm 74 */
										long BgL_modz00_2832;

										BgL_modz00_2832 =
											(BgL_offsetz00_2831 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawJvm/type.scm 74 */
											long BgL_restz00_2834;

											BgL_restz00_2834 =
												(BgL_offsetz00_2831 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawJvm/type.scm 74 */

												{	/* SawJvm/type.scm 74 */
													obj_t BgL_bucketz00_2836;

													BgL_bucketz00_2836 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_2826), BgL_modz00_2832);
													BgL_res1890z00_2860 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_2836), BgL_restz00_2834);
					}}}}}}}}
					BgL_method1577z00_2191 = BgL_res1890z00_2860;
				}
				return
					((BgL_typez00_bglt)
					PROCEDURE_ENTRY(BgL_method1577z00_2191) (BgL_method1577z00_2191,
						((obj_t) BgL_funz00_35), BEOA));
			}
		}

	}



/* &type-dest-fun */
	BgL_typez00_bglt BGl_z62typezd2destzd2funz62zzsaw_jvm_typez00(obj_t
		BgL_envz00_2893, obj_t BgL_funz00_2894)
	{
		{	/* SawJvm/type.scm 74 */
			return
				BGl_typezd2destzd2funz00zzsaw_jvm_typez00(
				((BgL_rtl_funz00_bglt) BgL_funz00_2894));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_lastz00zzsaw_defsz00, BGl_proc1896z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_notseqz00zzsaw_defsz00, BGl_proc1898z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_effectz00zzsaw_defsz00, BGl_proc1899z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_purez00zzsaw_defsz00, BGl_proc1900z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_movz00zzsaw_defsz00, BGl_proc1901z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_loadiz00zzsaw_defsz00, BGl_proc1902z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_loadgz00zzsaw_defsz00, BGl_proc1903z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_getfieldz00zzsaw_defsz00, BGl_proc1904z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_vrefz00zzsaw_defsz00, BGl_proc1905z00zzsaw_jvm_typez00,
				BGl_string1897z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_newz00zzsaw_defsz00, BGl_proc1906z00zzsaw_jvm_typez00,
				BGl_string1907z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_applyz00zzsaw_defsz00, BGl_proc1908z00zzsaw_jvm_typez00,
				BGl_string1907z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_lightfuncallz00zzsaw_defsz00, BGl_proc1909z00zzsaw_jvm_typez00,
				BGl_string1907z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_funcallz00zzsaw_defsz00, BGl_proc1910z00zzsaw_jvm_typez00,
				BGl_string1907z00zzsaw_jvm_typez00);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_siza7ezd2destzd2funzd2envz75zzsaw_jvm_typez00,
				BGl_rtl_castz00zzsaw_defsz00, BGl_proc1911z00zzsaw_jvm_typez00,
				BGl_string1907z00zzsaw_jvm_typez00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2destzd2funzd2envzd2zzsaw_jvm_typez00,
				BGl_rtl_callz00zzsaw_defsz00, BGl_proc1912z00zzsaw_jvm_typez00,
				BGl_string1913z00zzsaw_jvm_typez00);
		}

	}



/* &type-dest-fun-rtl_ca1579 */
	BgL_typez00_bglt
		BGl_z62typezd2destzd2funzd2rtl_ca1579zb0zzsaw_jvm_typez00(obj_t
		BgL_envz00_2910, obj_t BgL_funz00_2911)
	{
		{	/* SawJvm/type.scm 78 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt)
							(((BgL_rtl_callz00_bglt) COBJECT(
										((BgL_rtl_callz00_bglt) BgL_funz00_2911)))->BgL_varz00))))->
				BgL_typez00);
		}

	}



/* &size-dest-fun-rtl_ca1575 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_ca1575z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2912, obj_t BgL_funz00_2913, obj_t BgL_insz00_2914)
	{
		{	/* SawJvm/type.scm 70 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_fu1573 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_fu1573z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2915, obj_t BgL_funz00_2916, obj_t BgL_insz00_2917)
	{
		{	/* SawJvm/type.scm 69 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_li1571 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_li1571z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2918, obj_t BgL_funz00_2919, obj_t BgL_insz00_2920)
	{
		{	/* SawJvm/type.scm 68 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_ap1569 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_ap1569z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2921, obj_t BgL_funz00_2922, obj_t BgL_insz00_2923)
	{
		{	/* SawJvm/type.scm 67 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_ne1567 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_ne1567z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2924, obj_t BgL_funz00_2925, obj_t BgL_insz00_2926)
	{
		{	/* SawJvm/type.scm 66 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_vr1565 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_vr1565z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2927, obj_t BgL_funz00_2928, obj_t BgL_insz00_2929)
	{
		{	/* SawJvm/type.scm 62 */
			return
				BINT(BGl_typeSiza7eza7zzsaw_jvm_typez00(
					(((BgL_rtl_vrefz00_bglt) COBJECT(
								((BgL_rtl_vrefz00_bglt) BgL_funz00_2928)))->BgL_typez00)));
		}

	}



/* &size-dest-fun-rtl_ge1563 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_ge1563z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2930, obj_t BgL_funz00_2931, obj_t BgL_insz00_2932)
	{
		{	/* SawJvm/type.scm 59 */
			return
				BINT(BGl_typeSiza7eza7zzsaw_jvm_typez00(
					(((BgL_rtl_getfieldz00_bglt) COBJECT(
								((BgL_rtl_getfieldz00_bglt) BgL_funz00_2931)))->BgL_typez00)));
		}

	}



/* &size-dest-fun-rtl_lo1561 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_lo1561z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2933, obj_t BgL_funz00_2934, obj_t BgL_insz00_2935)
	{
		{	/* SawJvm/type.scm 56 */
			{	/* SawJvm/type.scm 57 */
				int BgL_tmpz00_3186;

				{	/* SawJvm/type.scm 57 */
					BgL_typez00_bglt BgL_arg1626z00_2984;

					BgL_arg1626z00_2984 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									(((BgL_rtl_loadgz00_bglt) COBJECT(
												((BgL_rtl_loadgz00_bglt) BgL_funz00_2934)))->
										BgL_varz00))))->BgL_typez00);
					BgL_tmpz00_3186 =
						BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_arg1626z00_2984);
				}
				return BINT(BgL_tmpz00_3186);
			}
		}

	}



/* &size-dest-fun-rtl_lo1559 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_lo1559z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2936, obj_t BgL_funz00_2937, obj_t BgL_insz00_2938)
	{
		{	/* SawJvm/type.scm 49 */
			{	/* SawJvm/type.scm 50 */
				int BgL_tmpz00_3193;

				{	/* SawJvm/type.scm 50 */
					BgL_atomz00_bglt BgL_constantz00_2986;

					BgL_constantz00_2986 =
						(((BgL_rtl_loadiz00_bglt) COBJECT(
								((BgL_rtl_loadiz00_bglt) BgL_funz00_2937)))->BgL_constantz00);
					{	/* SawJvm/type.scm 51 */
						obj_t BgL_valuez00_2987;

						BgL_valuez00_2987 =
							(((BgL_atomz00_bglt) COBJECT(BgL_constantz00_2986))->
							BgL_valuez00);
						if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_valuez00_2987))
							{	/* SawJvm/type.scm 53 */
								BgL_typez00_bglt BgL_arg1624z00_2988;

								BgL_arg1624z00_2988 =
									(((BgL_nodez00_bglt) COBJECT(
											((BgL_nodez00_bglt) BgL_constantz00_2986)))->BgL_typez00);
								BgL_tmpz00_3193 =
									BGl_typeSiza7eza7zzsaw_jvm_typez00(BgL_arg1624z00_2988);
							}
						else
							{	/* SawJvm/type.scm 52 */
								BgL_tmpz00_3193 = (int) (((long) 1));
				}}}
				return BINT(BgL_tmpz00_3193);
			}
		}

	}



/* &size-dest-fun-rtl_mo1557 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_mo1557z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2939, obj_t BgL_funz00_2940, obj_t BgL_insz00_2941)
	{
		{	/* SawJvm/type.scm 46 */
			{	/* SawJvm/type.scm 47 */
				int BgL_tmpz00_3204;

				{	/* SawJvm/type.scm 47 */
					obj_t BgL_arg1612z00_2990;

					{	/* SawJvm/type.scm 47 */
						obj_t BgL_pairz00_2991;

						BgL_pairz00_2991 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_insz00_2941)))->BgL_argsz00);
						BgL_arg1612z00_2990 = CAR(BgL_pairz00_2991);
					}
					BgL_tmpz00_3204 =
						BGl_siza7ezd2destz75zzsaw_jvm_typez00(BgL_arg1612z00_2990);
				}
				return BINT(BgL_tmpz00_3204);
			}
		}

	}



/* &size-dest-fun-rtl_pu1555 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_pu1555z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2942, obj_t BgL_funz00_2943, obj_t BgL_insz00_2944)
	{
		{	/* SawJvm/type.scm 44 */
			return BINT(((long) 1));
		}

	}



/* &size-dest-fun-rtl_ef1553 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_ef1553z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2945, obj_t BgL_funz00_2946, obj_t BgL_insz00_2947)
	{
		{	/* SawJvm/type.scm 41 */
			return BINT(((long) 0));
		}

	}



/* &size-dest-fun-rtl_no1551 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_no1551z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2948, obj_t BgL_funz00_2949, obj_t BgL_insz00_2950)
	{
		{	/* SawJvm/type.scm 40 */
			return BINT(((long) 0));
		}

	}



/* &size-dest-fun-rtl_la1549 */
	obj_t BGl_z62siza7ezd2destzd2funzd2rtl_la1549z17zzsaw_jvm_typez00(obj_t
		BgL_envz00_2951, obj_t BgL_funz00_2952, obj_t BgL_insz00_2953)
	{
		{	/* SawJvm/type.scm 39 */
			return BINT(((long) 0));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_typez00()
	{
		{	/* SawJvm/type.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(((long) 179871455),
				BSTRING_TO_STRING(BGl_string1914z00zzsaw_jvm_typez00));
		}

	}

#ifdef __cplusplus
}
#endif
