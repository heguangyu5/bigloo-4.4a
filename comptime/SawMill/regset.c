/*===========================================================================*/
/*   (SawMill/regset.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/regset.scm) */
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

	typedef struct BgL_rtl_regzf2razf2_bgl
	{
		int BgL_numz00;
		obj_t BgL_colorz00;
		obj_t BgL_coalescez00;
		int BgL_occurrencesz00;
		obj_t BgL_interferez00;
		obj_t BgL_interfere2z00;
	}                      *BgL_rtl_regzf2razf2_bglt;

	typedef struct BgL_regsetz00_bgl
	{
		header_t header;
		obj_t widening;
		int BgL_lengthz00;
		int BgL_msiza7eza7;
		obj_t BgL_regvz00;
		obj_t BgL_reglz00;
		obj_t BgL_stringz00;
	}                *BgL_regsetz00_bglt;


	static obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62regsetzd2dumpzb0zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_regsetz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_regsetz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_regsetz00(obj_t);
	static obj_t BGl_z62regsetzd2emptyzf3z43zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_regsetz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31868ze3ze5zzsaw_regsetz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_regsetz00zzsaw_regsetz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		obj_t);
	static BgL_regsetz00_bglt
		BGl_z62makezd2emptyzd2regsetz62zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzf3z91zzsaw_regsetz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_regsetz00(obj_t);
	BGL_IMPORT obj_t make_vector(long, obj_t);
	static obj_t BGl_z62regsetzd2addz12za2zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_regsetz00();
	static obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_string(long, unsigned char);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2msiza7ez75zzsaw_regsetz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		BgL_regsetz00_bglt);
	static obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2addza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_regsetz00();
	static obj_t BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_regsetz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1802z62zzsaw_regsetz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regsetz00
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_loopze70ze7zzsaw_regsetz00(obj_t, BgL_regsetz00_bglt, long);
	static obj_t BGl_z62regsetzd2filterzb0zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00 = BUNSPEC;
	static BgL_rtl_regz00_bglt BGl_z62lambda1810z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_regsetz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62lambda1813z62zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31834ze3ze5zzsaw_regsetz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1826z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1827z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_regsetz00(obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1832z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1833z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_regsetz00(BgL_regsetz00_bglt, int);
	static obj_t BGl_z62lambda1841z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1842z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1849z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regsetz00(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2addza2z12z00zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1850z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1857z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1858z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1866z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_regsetz00 = BUNSPEC;
	static obj_t BGl_z62lambda1867z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62lambda1875z62zzsaw_regsetz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62lambda1877z62zzsaw_regsetz00(obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	static obj_t BGl_z62regsetzd2removez12za2zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_regsetz00(int,
		int, obj_t, obj_t, obj_t);
	static obj_t BGl_z62regsetzd2ze3listz53zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1885z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1886z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_regsetz00(BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_regsetz00();
	static obj_t BGl_z62lambda1892z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1893z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1898z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1899z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62shapezd2rtl_regzf2ra1462z42zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2unionza2z12z00zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_regsetz00();
	static obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzsaw_regsetz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2memberzf3z43zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_regsetz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_regsetz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_regsetz00();
	extern obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2unionz12za2zzsaw_regsetz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62dumpzd2rtl_regzf2ra1464z42zzsaw_regsetz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2lengthzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf2razf3z01zzsaw_regsetz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_regsetz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_regsetz00();
	static obj_t BGl_z62regsetzd2forzd2eachz62zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regsetz00
		(BgL_rtl_regz00_bglt, int);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2dumpzd2zzsaw_regsetz00(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31912ze3ze5zzsaw_regsetz00(obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_regsetz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regsetz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_regsetz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_regsetz00(obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62duplicatezd2regsetzb0zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2reglzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2regvzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62lambda1904z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1905z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62listzd2ze3regsetz53zzsaw_regsetz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzsaw_regsetz00(obj_t);
	static BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_regsetz00(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regsetz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_regsetz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62lambda1910z62zzsaw_regsetz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1911z62zzsaw_regsetz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[20];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2emptyzd2regsetzd2envzd2zzsaw_regsetz00,
		BgL_bgl_za762makeza7d2emptyza72189za7,
		BGl_z62makezd2emptyzd2regsetz62zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2removez12zd2envz12zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2remo2190z00,
		BGl_z62regsetzd2removez12za2zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72191za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2138z00zzsaw_regsetz00,
		BgL_bgl_string2138za700za7za7s2192za7, "{", 1);
	      DEFINE_STRING(BGl_string2139z00zzsaw_regsetz00,
		BgL_bgl_string2139za700za7za7s2193za7, "}", 1);
	      DEFINE_STRING(BGl_string2140z00zzsaw_regsetz00,
		BgL_bgl_string2140za700za7za7s2194za7, " ", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2nilza72195za7,
		BGl_z62regsetzd2nilzb0zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2177z00zzsaw_regsetz00,
		BgL_bgl_string2177za700za7za7s2196za7, "", 0);
	      DEFINE_STRING(BGl_string2179z00zzsaw_regsetz00,
		BgL_bgl_string2179za700za7za7s2197za7, "shape", 5);
	      DEFINE_STRING(BGl_string2181z00zzsaw_regsetz00,
		BgL_bgl_string2181za700za7za7s2198za7, "dump", 4);
	      DEFINE_STRING(BGl_string2182z00zzsaw_regsetz00,
		BgL_bgl_string2182za700za7za7s2199za7, "=", 1);
	      DEFINE_STRING(BGl_string2183z00zzsaw_regsetz00,
		BgL_bgl_string2183za700za7za7s2200za7, ":=", 2);
	      DEFINE_STRING(BGl_string2184z00zzsaw_regsetz00,
		BgL_bgl_string2184za700za7za7s2201za7, "saw_regset", 10);
	      DEFINE_STRING(BGl_string2185z00zzsaw_regsetz00,
		BgL_bgl_string2185za700za7za7s2202za7,
		"#() regset bstring string pair-nil regl vector regv msize length saw_regset rtl_reg/ra interfere2 interfere occurrences coalesce obj color int num ",
		147);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72203za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2regvzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2regv2204z00, BGl_z62regsetzd2regvzb0zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2leng2205z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regsetz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72206za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72207za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2dumpzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2dump2208z00, va_generic_entry,
		BGl_z62regsetzd2dumpzb0zzsaw_regsetz00, BUNSPEC, -2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72209za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_regsetz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72210za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2stri2211z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_listzd2ze3regsetzd2envze3zzsaw_regsetz00,
		BgL_bgl_za762listza7d2za7e3reg2212za7,
		BGl_z62listzd2ze3regsetz53zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razf3zd2envzd3zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72213za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72214za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2unionza2z12zd2envzb0zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2unio2215z00,
		BGl_z62regsetzd2unionza2z12z00zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72216za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762makeza7d2regset2217z00, BGl_z62makezd2regsetzb0zzsaw_regsetz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2filterzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2filt2218z00,
		BGl_z62regsetzd2filterzb0zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_regsetz00,
		BgL_bgl_za762regsetza7f3za791za72219z00, BGl_z62regsetzf3z91zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2addza2z12zd2envzb0zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2addza72220za7,
		BGl_z62regsetzd2addza2z12z00zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72221za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2reglzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2regl2222z00, BGl_z62regsetzd2reglzb0zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2141z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1827za7622223z00, BGl_z62lambda1827z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2142z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1826za7622224z00, BGl_z62lambda1826z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2143z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2225za7,
		BGl_z62zc3z04anonymousza31834ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2144z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1833za7622226z00, BGl_z62lambda1833z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2145z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1832za7622227z00, BGl_z62lambda1832z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2228za7,
		BGl_z62zc3z04anonymousza31843ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1842za7622229z00, BGl_z62lambda1842z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1841za7622230z00, BGl_z62lambda1841z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2231za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_dumpzd2envzd2zzsaw_defsz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1850za7622232z00, BGl_z62lambda1850z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1849za7622233z00, BGl_z62lambda1849z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2234za7,
		BGl_z62zc3z04anonymousza31859ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1858za7622235z00, BGl_z62lambda1858z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1857za7622236z00, BGl_z62lambda1857z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72237za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2238za7,
		BGl_z62zc3z04anonymousza31868ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1867za7622239z00, BGl_z62lambda1867z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1866za7622240z00, BGl_z62lambda1866z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1813za7622241z00, BGl_z62lambda1813z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2242za7,
		BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1810za7622243z00, BGl_z62lambda1810z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1802za7622244z00, BGl_z62lambda1802z62zzsaw_regsetz00,
		0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2addz12zd2envz12zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2addza72245za7,
		BGl_z62regsetzd2addz12za2zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2246za7,
		BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1886za7622247z00, BGl_z62lambda1886z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1885za7622248z00, BGl_z62lambda1885z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2165z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1893za7622249z00, BGl_z62lambda1893z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2166z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1892za7622250z00, BGl_z62lambda1892z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1899za7622251z00, BGl_z62lambda1899z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2emptyzf3zd2envzf3zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2empt2252z00,
		BGl_z62regsetzd2emptyzf3z43zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1898za7622253z00, BGl_z62lambda1898z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2169z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1905za7622254z00, BGl_z62lambda1905z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72255za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2forzd2eachzd2envzd2zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2forza72256za7,
		BGl_z62regsetzd2forzd2eachz62zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1904za7622257z00, BGl_z62lambda1904z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2258za7,
		BGl_z62zc3z04anonymousza31912ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1911za7622259z00, BGl_z62lambda1911z62zzsaw_regsetz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1910za7622260z00, BGl_z62lambda1910z62zzsaw_regsetz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zzsaw_regsetz00,
		BgL_bgl_za762za7c3za704anonymo2261za7,
		BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_regsetz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1877za7622262z00, BGl_z62lambda1877z62zzsaw_regsetz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzsaw_regsetz00,
		BgL_bgl_za762lambda1875za7622263z00, BGl_z62lambda1875z62zzsaw_regsetz00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzsaw_regsetz00,
		BgL_bgl_za762shapeza7d2rtl_r2264z00,
		BGl_z62shapezd2rtl_regzf2ra1462z42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2memberzf3zd2envzf3zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2memb2265z00,
		BGl_z62regsetzd2memberzf3z43zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72266za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzsaw_regsetz00,
		BgL_bgl_za762dumpza7d2rtl_re2267z00,
		BGl_z62dumpzd2rtl_regzf2ra1464z42zzsaw_regsetz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72268za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72269za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2msiza7ezd2envza7zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2msiza72270za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72271za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72272za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72273za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72274za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2stringzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2stri2275z00,
		BGl_z62regsetzd2stringzb0zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72276za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regsetz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762makeza7d2rtl_re2277z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_regsetz00, 0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2lengthzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2leng2278z00,
		BGl_z62regsetzd2lengthzb0zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72279za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2ze3listzd2envze3zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2za7e3l2280za7,
		BGl_z62regsetzd2ze3listz53zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_regsetz00,
		BgL_bgl_za762rtl_regza7f2raza72281za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_duplicatezd2regsetzd2envz00zzsaw_regsetz00,
		BgL_bgl_za762duplicateza7d2r2282z00,
		BGl_z62duplicatezd2regsetzb0zzsaw_regsetz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2unionz12zd2envz12zzsaw_regsetz00,
		BgL_bgl_za762regsetza7d2unio2283z00,
		BGl_z62regsetzd2unionz12za2zzsaw_regsetz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00));
		     ADD_ROOT((void *) (&BGl_regsetz00zzsaw_regsetz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00));
		     ADD_ROOT((void *) (&BGl_rtl_regzf2razf2zzsaw_regsetz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_regsetz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long
		BgL_checksumz00_3509, char *BgL_fromz00_3510)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_regsetz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_regsetz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_regsetz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00();
					BGl_cnstzd2initzd2zzsaw_regsetz00();
					BGl_importedzd2moduleszd2initz00zzsaw_regsetz00();
					BGl_objectzd2initzd2zzsaw_regsetz00();
					BGl_methodzd2initzd2zzsaw_regsetz00();
					return BGl_toplevelzd2initzd2zzsaw_regsetz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"saw_regset");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_regset");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			{	/* SawMill/regset.scm 15 */
				obj_t BgL_cportz00_3403;

				{	/* SawMill/regset.scm 15 */
					obj_t BgL_stringz00_3411;

					BgL_stringz00_3411 = BGl_string2185z00zzsaw_regsetz00;
					{	/* SawMill/regset.scm 15 */
						obj_t BgL_startz00_3412;

						BgL_startz00_3412 = BINT(((long) 0));
						{	/* SawMill/regset.scm 15 */
							obj_t BgL_endz00_3413;

							BgL_endz00_3413 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3411)));
							{	/* SawMill/regset.scm 15 */

								BgL_cportz00_3403 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3411, BgL_startz00_3412, BgL_endz00_3413);
				}}}}
				{
					long BgL_iz00_3404;

					BgL_iz00_3404 = ((long) 19);
				BgL_loopz00_3405:
					if ((BgL_iz00_3404 == ((long) -1)))
						{	/* SawMill/regset.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/regset.scm 15 */
							{	/* SawMill/regset.scm 15 */
								obj_t BgL_arg2187z00_3407;

								{	/* SawMill/regset.scm 15 */

									{	/* SawMill/regset.scm 15 */
										obj_t BgL_locationz00_3409;

										BgL_locationz00_3409 = BBOOL(((bool_t) 0));
										{	/* SawMill/regset.scm 15 */

											BgL_arg2187z00_3407 =
												BGl_readz00zz__readerz00(BgL_cportz00_3403,
												BgL_locationz00_3409);
										}
									}
								}
								{	/* SawMill/regset.scm 15 */
									int BgL_tmpz00_3541;

									BgL_tmpz00_3541 = (int) (BgL_iz00_3404);
									CNST_TABLE_SET(BgL_tmpz00_3541, BgL_arg2187z00_3407);
							}}
							{	/* SawMill/regset.scm 15 */
								int BgL_auxz00_3410;

								BgL_auxz00_3410 = (int) ((BgL_iz00_3404 - ((long) 1)));
								{
									long BgL_iz00_3546;

									BgL_iz00_3546 = (long) (BgL_auxz00_3410);
									BgL_iz00_3404 = BgL_iz00_3546;
									goto BgL_loopz00_3405;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BFALSE;
			BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 = BFALSE;
			return BUNSPEC;
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_regsetz00(BgL_typez00_bglt
		BgL_type1179z00_3, obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1174z00_3416;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1172z00_3417;
					BgL_rtl_regzf2razf2_bglt BgL_wide1173z00_3418;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_3549;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1171z00_3419;

							BgL_new1171z00_3419 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1489z00_3420;

								{	/* SawMill/regset.sch 55 */
									long BgL_res2032z00_3421;

									BgL_res2032z00_3421 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1489z00_3420 = BgL_res2032z00_3421;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1171z00_3419),
									BgL_arg1489z00_3420);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_3554;

								BgL_tmpz00_3554 = ((BgL_objectz00_bglt) BgL_new1171z00_3419);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3554, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1171z00_3419);
							BgL_auxz00_3549 = BgL_new1171z00_3419;
						}
						BgL_tmp1172z00_3417 = ((BgL_rtl_regz00_bglt) BgL_auxz00_3549);
					}
					BgL_wide1173z00_3418 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_3562;
						BgL_objectz00_bglt BgL_tmpz00_3560;

						BgL_auxz00_3562 = ((obj_t) BgL_wide1173z00_3418);
						BgL_tmpz00_3560 = ((BgL_objectz00_bglt) BgL_tmp1172z00_3417);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3560, BgL_auxz00_3562);
					}
					((BgL_objectz00_bglt) BgL_tmp1172z00_3417);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1477z00_3422;

						{	/* SawMill/regset.sch 55 */
							long BgL_res2033z00_3423;

							BgL_res2033z00_3423 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1477z00_3422 = BgL_res2033z00_3423;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1172z00_3417), BgL_arg1477z00_3422);
					}
					BgL_new1174z00_3416 = ((BgL_rtl_regz00_bglt) BgL_tmp1172z00_3417);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1174z00_3416)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1174z00_3416)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1174z00_3416)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1174z00_3416)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1174z00_3416)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1174z00_3416)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3582;

					{
						obj_t BgL_auxz00_3583;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3584;

							BgL_tmpz00_3584 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3583 = BGL_OBJECT_WIDENING(BgL_tmpz00_3584);
						}
						BgL_auxz00_3582 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3583);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3582))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3589;

					{
						obj_t BgL_auxz00_3590;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3591;

							BgL_tmpz00_3591 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3590 = BGL_OBJECT_WIDENING(BgL_tmpz00_3591);
						}
						BgL_auxz00_3589 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3590);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3589))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3596;

					{
						obj_t BgL_auxz00_3597;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3598;

							BgL_tmpz00_3598 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3597 = BGL_OBJECT_WIDENING(BgL_tmpz00_3598);
						}
						BgL_auxz00_3596 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3597);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3596))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3603;

					{
						obj_t BgL_auxz00_3604;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3605;

							BgL_tmpz00_3605 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3604 = BGL_OBJECT_WIDENING(BgL_tmpz00_3605);
						}
						BgL_auxz00_3603 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3604);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3603))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3610;

					{
						obj_t BgL_auxz00_3611;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3612;

							BgL_tmpz00_3612 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3611 = BGL_OBJECT_WIDENING(BgL_tmpz00_3612);
						}
						BgL_auxz00_3610 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3611);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3610))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3617;

					{
						obj_t BgL_auxz00_3618;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3619;

							BgL_tmpz00_3619 = ((BgL_objectz00_bglt) BgL_new1174z00_3416);
							BgL_auxz00_3618 = BGL_OBJECT_WIDENING(BgL_tmpz00_3619);
						}
						BgL_auxz00_3617 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3618);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3617))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1174z00_3416;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_regsetz00(obj_t
		BgL_envz00_3120, obj_t BgL_type1179z00_3121, obj_t BgL_var1180z00_3122,
		obj_t BgL_onexprzf31181zf3_3123, obj_t BgL_name1182z00_3124,
		obj_t BgL_key1183z00_3125, obj_t BgL_hardware1184z00_3126,
		obj_t BgL_num1185z00_3127, obj_t BgL_color1186z00_3128,
		obj_t BgL_coalesce1187z00_3129, obj_t BgL_occurrences1188z00_3130,
		obj_t BgL_interfere1189z00_3131, obj_t BgL_interfere21190z00_3132)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_regsetz00(
				((BgL_typez00_bglt) BgL_type1179z00_3121), BgL_var1180z00_3122,
				BgL_onexprzf31181zf3_3123, BgL_name1182z00_3124, BgL_key1183z00_3125,
				BgL_hardware1184z00_3126, CINT(BgL_num1185z00_3127),
				BgL_color1186z00_3128, BgL_coalesce1187z00_3129,
				CINT(BgL_occurrences1188z00_3130), BgL_interfere1189z00_3131,
				BgL_interfere21190z00_3132);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf2razf3z01zzsaw_regsetz00(obj_t
		BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_regsetz00(obj_t BgL_envz00_3133,
		obj_t BgL_objz00_3134)
	{
		{	/* SawMill/regset.sch 56 */
			return BBOOL(BGl_rtl_regzf2razf3z01zzsaw_regsetz00(BgL_objz00_3134));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_regsetz00()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_2719;

				BgL_classz00_2719 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_2720;

					BgL__ortest_1106z00_2720 = BGL_CLASS_NIL(BgL_classz00_2719);
					if (CBOOL(BgL__ortest_1106z00_2720))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_2720);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2719));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_regsetz00(obj_t
		BgL_envz00_3135)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_regsetz00();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3638;

				{
					obj_t BgL_auxz00_3639;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_3640;

						BgL_tmpz00_3640 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_3639 = BGL_OBJECT_WIDENING(BgL_tmpz00_3640);
					}
					BgL_auxz00_3638 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3639);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3638))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regsetz00(obj_t
		BgL_envz00_3136, obj_t BgL_oz00_3137)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3137));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3647;

				{
					obj_t BgL_auxz00_3648;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_3649;

						BgL_tmpz00_3649 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_3648 = BGL_OBJECT_WIDENING(BgL_tmpz00_3649);
					}
					BgL_auxz00_3647 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3648);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3647))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3138, obj_t BgL_oz00_3139, obj_t BgL_vz00_3140)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3139), BgL_vz00_3140);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3656;

				{
					obj_t BgL_auxz00_3657;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_3658;

						BgL_tmpz00_3658 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_3657 = BGL_OBJECT_WIDENING(BgL_tmpz00_3658);
					}
					BgL_auxz00_3656 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3657);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3656))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_regsetz00(obj_t BgL_envz00_3141,
		obj_t BgL_oz00_3142)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3142));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3665;

				{
					obj_t BgL_auxz00_3666;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_3667;

						BgL_tmpz00_3667 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_3666 = BGL_OBJECT_WIDENING(BgL_tmpz00_3667);
					}
					BgL_auxz00_3665 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3666);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3665))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3143, obj_t BgL_oz00_3144, obj_t BgL_vz00_3145)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3144), BgL_vz00_3145);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3674;

				{
					obj_t BgL_auxz00_3675;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_3676;

						BgL_tmpz00_3676 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_3675 = BGL_OBJECT_WIDENING(BgL_tmpz00_3676);
					}
					BgL_auxz00_3674 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3675);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3674))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regsetz00(obj_t
		BgL_envz00_3146, obj_t BgL_oz00_3147)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_regsetz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_3147)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regsetz00
		(BgL_rtl_regz00_bglt BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3684;

				{
					obj_t BgL_auxz00_3685;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_3686;

						BgL_tmpz00_3686 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_3685 = BGL_OBJECT_WIDENING(BgL_tmpz00_3686);
					}
					BgL_auxz00_3684 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3685);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3684))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3148, obj_t BgL_oz00_3149, obj_t BgL_vz00_3150)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3149), CINT(BgL_vz00_3150));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3694;

				{
					obj_t BgL_auxz00_3695;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_3696;

						BgL_tmpz00_3696 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_3695 = BGL_OBJECT_WIDENING(BgL_tmpz00_3696);
					}
					BgL_auxz00_3694 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3695);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3694))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_regsetz00(obj_t BgL_envz00_3151,
		obj_t BgL_oz00_3152)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3152));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3703;

				{
					obj_t BgL_auxz00_3704;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_3705;

						BgL_tmpz00_3705 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_3704 = BGL_OBJECT_WIDENING(BgL_tmpz00_3705);
					}
					BgL_auxz00_3703 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3704);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3703))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3153, obj_t BgL_oz00_3154, obj_t BgL_vz00_3155)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3154), BgL_vz00_3155);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3712;

				{
					obj_t BgL_auxz00_3713;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_3714;

						BgL_tmpz00_3714 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_3713 = BGL_OBJECT_WIDENING(BgL_tmpz00_3714);
					}
					BgL_auxz00_3712 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3713);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3712))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_regsetz00(obj_t BgL_envz00_3156,
		obj_t BgL_oz00_3157)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3157));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3721;

				{
					obj_t BgL_auxz00_3722;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_3723;

						BgL_tmpz00_3723 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_3722 = BGL_OBJECT_WIDENING(BgL_tmpz00_3723);
					}
					BgL_auxz00_3721 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3722);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3721))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3158, obj_t BgL_oz00_3159, obj_t BgL_vz00_3160)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3159), BgL_vz00_3160);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2numz20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3730;

				{
					obj_t BgL_auxz00_3731;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_3732;

						BgL_tmpz00_3732 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_3731 = BGL_OBJECT_WIDENING(BgL_tmpz00_3732);
					}
					BgL_auxz00_3730 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3731);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3730))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_regsetz00(obj_t BgL_envz00_3161,
		obj_t BgL_oz00_3162)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_regsetz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_3162)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regsetz00(obj_t BgL_envz00_3163,
		obj_t BgL_oz00_3164)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3164));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_regsetz00(obj_t BgL_envz00_3165,
		obj_t BgL_oz00_3166)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3166));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_regsetz00(obj_t BgL_envz00_3167,
		obj_t BgL_oz00_3168)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3168));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regsetz00(obj_t BgL_envz00_3169,
		obj_t BgL_oz00_3170)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3170));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_44, obj_t BgL_vz00_45)
	{
		{	/* SawMill/regset.sch 77 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_44)))->BgL_onexprzf3zf3) =
				((obj_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &rtl_reg/ra-onexpr?-set! */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regsetz00(obj_t
		BgL_envz00_3171, obj_t BgL_oz00_3172, obj_t BgL_vz00_3173)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3172), BgL_vz00_3173);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_regsetz00(obj_t BgL_envz00_3174,
		obj_t BgL_oz00_3175)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3175));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* SawMill/regset.sch 79 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_47)))->BgL_varz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &rtl_reg/ra-var-set! */
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3176, obj_t BgL_oz00_3177, obj_t BgL_vz00_3178)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3177), BgL_vz00_3178);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_regsetz00(obj_t
		BgL_envz00_3179, obj_t BgL_oz00_3180)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3180));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regsetz00(BgL_rtl_regz00_bglt
		BgL_oz00_50, BgL_typez00_bglt BgL_vz00_51)
	{
		{	/* SawMill/regset.sch 81 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_50)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_51), BUNSPEC);
		}

	}



/* &rtl_reg/ra-type-set! */
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regsetz00(obj_t
		BgL_envz00_3181, obj_t BgL_oz00_3182, obj_t BgL_vz00_3183)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regsetz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3182),
				((BgL_typez00_bglt) BgL_vz00_3183));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_regsetz00(int
		BgL_length1172z00_52, int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1176z00_3424;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1175z00_3425;

					BgL_new1175z00_3425 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1493z00_3426;

						{	/* SawMill/regset.sch 84 */
							long BgL_res2034z00_3427;

							BgL_res2034z00_3427 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1493z00_3426 = BgL_res2034z00_3427;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1175z00_3425), BgL_arg1493z00_3426);
					}
					BgL_new1176z00_3424 = BgL_new1175z00_3425;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1176z00_3424))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1176z00_3424))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1176z00_3424))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1176z00_3424))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1176z00_3424))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1176z00_3424;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_regsetz00(obj_t
		BgL_envz00_3184, obj_t BgL_length1172z00_3185,
		obj_t BgL_msiza7e1173za7_3186, obj_t BgL_regv1174z00_3187,
		obj_t BgL_regl1175z00_3188, obj_t BgL_string1176z00_3189)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_regsetz00(CINT(BgL_length1172z00_3185),
				CINT(BgL_msiza7e1173za7_3186), BgL_regv1174z00_3187,
				BgL_regl1175z00_3188, BgL_string1176z00_3189);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_regsetz00(obj_t BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_regsetz00(obj_t BgL_envz00_3190,
		obj_t BgL_objz00_3191)
	{
		{	/* SawMill/regset.sch 85 */
			return BBOOL(BGl_regsetzf3zf3zzsaw_regsetz00(BgL_objz00_3191));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_2739;

				BgL_classz00_2739 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_2740;

					BgL__ortest_1106z00_2740 = BGL_CLASS_NIL(BgL_classz00_2739);
					if (CBOOL(BgL__ortest_1106z00_2740))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_2740);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2739));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_regsetz00(obj_t
		BgL_envz00_3192)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_regsetz00();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2zzsaw_regsetz00(BgL_regsetz00_bglt BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_regsetz00(obj_t BgL_envz00_3193,
		obj_t BgL_oz00_3194)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_oz00_3194));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_regsetz00(obj_t BgL_envz00_3195,
		obj_t BgL_oz00_3196, obj_t BgL_vz00_3197)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_oz00_3196), BgL_vz00_3197);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2reglzd2zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_regsetz00(obj_t BgL_envz00_3198,
		obj_t BgL_oz00_3199)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_oz00_3199));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2regvzd2zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_regsetz00(obj_t BgL_envz00_3200,
		obj_t BgL_oz00_3201)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_oz00_3201));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int BGl_regsetzd2msiza7ez75zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_regsetz00(obj_t BgL_envz00_3202,
		obj_t BgL_oz00_3203)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_oz00_3203)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int BGl_regsetzd2lengthzd2zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_regsetz00(obj_t BgL_envz00_3204,
		obj_t BgL_oz00_3205)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_oz00_3205)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_oz00_71, int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regsetz00(obj_t BgL_envz00_3206,
		obj_t BgL_oz00_3207, obj_t BgL_vz00_3208)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_oz00_3207), CINT(BgL_vz00_3208));
		}

	}



/* make-empty-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t BgL_registersz00_78)
	{
		{	/* SawMill/regset.scm 81 */
			{	/* SawMill/regset.scm 82 */
				long BgL_lz00_1948;

				BgL_lz00_1948 = bgl_list_length(BgL_registersz00_78);
				{	/* SawMill/regset.scm 82 */
					obj_t BgL_vecz00_1949;

					if (
						(BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 ==
							BgL_registersz00_78))
						{	/* SawMill/regset.scm 83 */
							BgL_vecz00_1949 =
								BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00;
						}
					else
						{	/* SawMill/regset.scm 85 */
							obj_t BgL_vz00_1956;

							BgL_vz00_1956 = make_vector(BgL_lz00_1948, BUNSPEC);
							{
								obj_t BgL_l1451z00_1958;

								BgL_l1451z00_1958 = BgL_registersz00_78;
							BgL_zc3z04anonymousza31539ze3z87_1959:
								if (PAIRP(BgL_l1451z00_1958))
									{	/* SawMill/regset.scm 86 */
										{	/* SawMill/regset.scm 87 */
											obj_t BgL_rz00_1961;

											BgL_rz00_1961 = CAR(BgL_l1451z00_1958);
											{	/* SawMill/regset.scm 87 */
												int BgL_arg1552z00_1962;

												{
													BgL_rtl_regzf2razf2_bglt BgL_auxz00_3830;

													{
														obj_t BgL_auxz00_3831;

														{	/* SawMill/regset.scm 87 */
															BgL_objectz00_bglt BgL_tmpz00_3832;

															BgL_tmpz00_3832 =
																((BgL_objectz00_bglt)
																((BgL_rtl_regz00_bglt) BgL_rz00_1961));
															BgL_auxz00_3831 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3832);
														}
														BgL_auxz00_3830 =
															((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3831);
													}
													BgL_arg1552z00_1962 =
														(((BgL_rtl_regzf2razf2_bglt)
															COBJECT(BgL_auxz00_3830))->BgL_numz00);
												}
												VECTOR_SET(BgL_vz00_1956,
													(long) (BgL_arg1552z00_1962), BgL_rz00_1961);
										}}
										{
											obj_t BgL_l1451z00_3840;

											BgL_l1451z00_3840 = CDR(BgL_l1451z00_1958);
											BgL_l1451z00_1958 = BgL_l1451z00_3840;
											goto BgL_zc3z04anonymousza31539ze3z87_1959;
										}
									}
								else
									{	/* SawMill/regset.scm 86 */
										((bool_t) 1);
									}
							}
							BgL_vecz00_1949 = BgL_vz00_1956;
						}
					{	/* SawMill/regset.scm 83 */

						BGl_za2registerzd2cacheza2zd2zzsaw_regsetz00 = BgL_registersz00_78;
						BGl_za2registerzd2cachezd2cachedza2z00zzsaw_regsetz00 =
							BgL_vecz00_1949;
						{	/* SawMill/regset.scm 94 */
							BgL_regsetz00_bglt BgL_new1178z00_1950;

							{	/* SawMill/regset.scm 95 */
								BgL_regsetz00_bglt BgL_new1177z00_1953;

								BgL_new1177z00_1953 =
									((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_regsetz00_bgl))));
								{	/* SawMill/regset.scm 95 */
									long BgL_arg1537z00_1954;

									{	/* SawMill/regset.scm 95 */
										long BgL_res2040z00_2766;

										BgL_res2040z00_2766 =
											BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
										BgL_arg1537z00_1954 = BgL_res2040z00_2766;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1177z00_1953),
										BgL_arg1537z00_1954);
								}
								BgL_new1178z00_1950 = BgL_new1177z00_1953;
							}
							((((BgL_regsetz00_bglt) COBJECT(BgL_new1178z00_1950))->
									BgL_lengthz00) = ((int) (int) (((long) 0))), BUNSPEC);
							((((BgL_regsetz00_bglt) COBJECT(BgL_new1178z00_1950))->
									BgL_msiza7eza7) = ((int) (int) (BgL_lz00_1948)), BUNSPEC);
							((((BgL_regsetz00_bglt) COBJECT(BgL_new1178z00_1950))->
									BgL_regvz00) = ((obj_t) BgL_vecz00_1949), BUNSPEC);
							((((BgL_regsetz00_bglt) COBJECT(BgL_new1178z00_1950))->
									BgL_reglz00) = ((obj_t) BgL_registersz00_78), BUNSPEC);
							{
								obj_t BgL_auxz00_3852;

								{	/* SawMill/regset.scm 97 */
									long BgL_arg1528z00_1951;

									BgL_arg1528z00_1951 =
										(((long) 1) + (BgL_lz00_1948 / ((long) 8)));
									{	/* SawMill/regset.scm 97 */
										obj_t BgL_res2043z00_2774;

										BgL_res2043z00_2774 =
											make_string(BgL_arg1528z00_1951,
											((unsigned char) '\000'));
										BgL_auxz00_3852 = BgL_res2043z00_2774;
								}}
								((((BgL_regsetz00_bglt) COBJECT(BgL_new1178z00_1950))->
										BgL_stringz00) = ((obj_t) BgL_auxz00_3852), BUNSPEC);
							}
							return BgL_new1178z00_1950;
						}
					}
				}
			}
		}

	}



/* &make-empty-regset */
	BgL_regsetz00_bglt BGl_z62makezd2emptyzd2regsetz62zzsaw_regsetz00(obj_t
		BgL_envz00_3209, obj_t BgL_registersz00_3210)
	{
		{	/* SawMill/regset.scm 81 */
			return BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_registersz00_3210);
		}

	}



/* list->regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t BgL_lstz00_79,
		obj_t BgL_registersz00_80)
	{
		{	/* SawMill/regset.scm 104 */
			{	/* SawMill/regset.scm 105 */
				BgL_regsetz00_bglt BgL_sz00_1966;

				BgL_sz00_1966 =
					BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(BgL_registersz00_80);
				{
					obj_t BgL_l1453z00_1968;

					BgL_l1453z00_1968 = BgL_lstz00_79;
				BgL_zc3z04anonymousza31562ze3z87_1969:
					if (PAIRP(BgL_l1453z00_1968))
						{	/* SawMill/regset.scm 106 */
							{	/* SawMill/regset.scm 106 */
								obj_t BgL_ez00_1971;

								BgL_ez00_1971 = CAR(BgL_l1453z00_1968);
								BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_sz00_1966,
									((BgL_rtl_regz00_bglt) BgL_ez00_1971));
							}
							{
								obj_t BgL_l1453z00_3864;

								BgL_l1453z00_3864 = CDR(BgL_l1453z00_1968);
								BgL_l1453z00_1968 = BgL_l1453z00_3864;
								goto BgL_zc3z04anonymousza31562ze3z87_1969;
							}
						}
					else
						{	/* SawMill/regset.scm 106 */
							((bool_t) 1);
						}
				}
				return BgL_sz00_1966;
			}
		}

	}



/* &list->regset */
	BgL_regsetz00_bglt BGl_z62listzd2ze3regsetz53zzsaw_regsetz00(obj_t
		BgL_envz00_3211, obj_t BgL_lstz00_3212, obj_t BgL_registersz00_3213)
	{
		{	/* SawMill/regset.scm 104 */
			return
				BGl_listzd2ze3regsetz31zzsaw_regsetz00(BgL_lstz00_3212,
				BgL_registersz00_3213);
		}

	}



/* regset->list */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_81)
	{
		{	/* SawMill/regset.scm 112 */
			{	/* SawMill/regset.scm 113 */
				obj_t BgL_rz00_3221;

				BgL_rz00_3221 = MAKE_CELL(BNIL);
				{	/* SawMill/regset.scm 114 */
					obj_t BgL_zc3z04anonymousza31566ze3z87_3214;

					BgL_zc3z04anonymousza31566ze3z87_3214 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31566ze3ze5zzsaw_regsetz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31566ze3z87_3214,
						(int) (((long) 0)), ((obj_t) BgL_rz00_3221));
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3z04anonymousza31566ze3z87_3214, BgL_sz00_81);
				}
				return bgl_reverse_bang(CELL_REF(BgL_rz00_3221));
			}
		}

	}



/* &regset->list */
	obj_t BGl_z62regsetzd2ze3listz53zzsaw_regsetz00(obj_t BgL_envz00_3215,
		obj_t BgL_sz00_3216)
	{
		{	/* SawMill/regset.scm 112 */
			return
				BGl_regsetzd2ze3listz31zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_sz00_3216));
		}

	}



/* &<@anonymous:1566> */
	obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3217, obj_t BgL_ez00_3219)
	{
		{	/* SawMill/regset.scm 114 */
			{	/* SawMill/regset.scm 114 */
				obj_t BgL_rz00_3218;

				BgL_rz00_3218 = PROCEDURE_REF(BgL_envz00_3217, (int) (((long) 0)));
				{	/* SawMill/regset.scm 114 */
					obj_t BgL_auxz00_3428;

					BgL_auxz00_3428 =
						MAKE_YOUNG_PAIR(BgL_ez00_3219, CELL_REF(BgL_rz00_3218));
					return CELL_SET(BgL_rz00_3218, BgL_auxz00_3428);
				}
			}
		}

	}



/* duplicate-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt BgL_s0z00_82)
	{
		{	/* SawMill/regset.scm 120 */
			{	/* SawMill/regset.scm 121 */
				BgL_regsetz00_bglt BgL_sz00_1979;

				BgL_sz00_1979 =
					BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(
					(((BgL_regsetz00_bglt) COBJECT(BgL_s0z00_82))->BgL_reglz00));
				BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_1979, BgL_s0z00_82);
				return BgL_sz00_1979;
			}
		}

	}



/* &duplicate-regset */
	BgL_regsetz00_bglt BGl_z62duplicatezd2regsetzb0zzsaw_regsetz00(obj_t
		BgL_envz00_3223, obj_t BgL_s0z00_3224)
	{
		{	/* SawMill/regset.scm 120 */
			return
				BGl_duplicatezd2regsetzd2zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_s0z00_3224));
		}

	}



/* regset-member? */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regz00_bglt BgL_regz00_83,
		BgL_regsetz00_bglt BgL_sz00_84)
	{
		{	/* SawMill/regset.scm 128 */
			{	/* SawMill/regset.scm 130 */
				long BgL_basez00_1982;
				long BgL_bitz00_1983;

				{	/* SawMill/regset.scm 130 */
					int BgL_arg1593z00_1992;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_3885;

						{
							obj_t BgL_auxz00_3886;

							{	/* SawMill/regset.scm 130 */
								BgL_objectz00_bglt BgL_tmpz00_3887;

								BgL_tmpz00_3887 = ((BgL_objectz00_bglt) BgL_regz00_83);
								BgL_auxz00_3886 = BGL_OBJECT_WIDENING(BgL_tmpz00_3887);
							}
							BgL_auxz00_3885 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3886);
						}
						BgL_arg1593z00_1992 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3885))->
							BgL_numz00);
					}
					BgL_basez00_1982 = ((long) (BgL_arg1593z00_1992) / ((long) 8));
				}
				{	/* SawMill/regset.scm 131 */
					int BgL_arg1597z00_1993;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_3894;

						{
							obj_t BgL_auxz00_3895;

							{	/* SawMill/regset.scm 131 */
								BgL_objectz00_bglt BgL_tmpz00_3896;

								BgL_tmpz00_3896 = ((BgL_objectz00_bglt) BgL_regz00_83);
								BgL_auxz00_3895 = BGL_OBJECT_WIDENING(BgL_tmpz00_3896);
							}
							BgL_auxz00_3894 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3895);
						}
						BgL_arg1597z00_1993 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3894))->
							BgL_numz00);
					}
					{	/* SawMill/regset.scm 131 */
						long BgL_res2051z00_2801;

						{	/* SawMill/regset.scm 131 */
							long BgL_n1z00_2783;
							long BgL_n2z00_2784;

							BgL_n1z00_2783 = (long) (BgL_arg1597z00_1993);
							BgL_n2z00_2784 = ((long) 8);
							{	/* SawMill/regset.scm 131 */
								bool_t BgL_test2291z00_3902;

								{	/* SawMill/regset.scm 131 */
									long BgL_arg1356z00_2786;

									BgL_arg1356z00_2786 =
										(((BgL_n1z00_2783) | (BgL_n2z00_2784)) & -2147483648);
									BgL_test2291z00_3902 = (BgL_arg1356z00_2786 == ((long) 0));
								}
								if (BgL_test2291z00_3902)
									{	/* SawMill/regset.scm 131 */
										int32_t BgL_arg1353z00_2787;

										{	/* SawMill/regset.scm 131 */
											int32_t BgL_arg1354z00_2788;
											int32_t BgL_arg1355z00_2789;

											{	/* SawMill/regset.scm 131 */
												int32_t BgL_res2047z00_2793;

												BgL_res2047z00_2793 = (int32_t) (BgL_n1z00_2783);
												BgL_arg1354z00_2788 = BgL_res2047z00_2793;
											}
											{	/* SawMill/regset.scm 131 */
												int32_t BgL_res2048z00_2795;

												BgL_res2048z00_2795 = (int32_t) (BgL_n2z00_2784);
												BgL_arg1355z00_2789 = BgL_res2048z00_2795;
											}
											BgL_arg1353z00_2787 =
												(BgL_arg1354z00_2788 % BgL_arg1355z00_2789);
										}
										{	/* SawMill/regset.scm 131 */
											long BgL_res2050z00_2800;

											{	/* SawMill/regset.scm 131 */
												long BgL_arg1456z00_2797;

												BgL_arg1456z00_2797 = (long) (BgL_arg1353z00_2787);
												{	/* SawMill/regset.scm 131 */
													long BgL_res2049z00_2799;

													BgL_res2049z00_2799 = (long) (BgL_arg1456z00_2797);
													BgL_res2050z00_2800 = BgL_res2049z00_2799;
											}}
											BgL_res2051z00_2801 = BgL_res2050z00_2800;
									}}
								else
									{	/* SawMill/regset.scm 131 */
										BgL_res2051z00_2801 = (BgL_n1z00_2783 % BgL_n2z00_2784);
									}
							}
						}
						BgL_bitz00_1983 = BgL_res2051z00_2801;
					}
				}
				if (
					(BgL_basez00_1982 <
						STRING_LENGTH(
							(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_84))->BgL_stringz00))))
					{	/* SawMill/regset.scm 132 */
						return
							(
							((STRING_REF(
										(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_84))->
											BgL_stringz00),
										BgL_basez00_1982)) & (((long) 1) <<
									(int) (BgL_bitz00_1983))) > ((long) 0));
					}
				else
					{	/* SawMill/regset.scm 132 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &regset-member? */
	obj_t BGl_z62regsetzd2memberzf3z43zzsaw_regsetz00(obj_t BgL_envz00_3225,
		obj_t BgL_regz00_3226, obj_t BgL_sz00_3227)
	{
		{	/* SawMill/regset.scm 128 */
			return
				BBOOL(BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
					((BgL_rtl_regz00_bglt) BgL_regz00_3226),
					((BgL_regsetz00_bglt) BgL_sz00_3227)));
		}

	}



/* regset-empty? */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_85)
	{
		{	/* SawMill/regset.scm 138 */
			return
				BBOOL(
				((long) (
						(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_85))->BgL_lengthz00)) ==
					((long) 0)));
		}

	}



/* &regset-empty? */
	obj_t BGl_z62regsetzd2emptyzf3z43zzsaw_regsetz00(obj_t BgL_envz00_3228,
		obj_t BgL_sz00_3229)
	{
		{	/* SawMill/regset.scm 138 */
			return
				BGl_regsetzd2emptyzf3z21zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_sz00_3229));
		}

	}



/* regset-add! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_86,
		BgL_rtl_regz00_bglt BgL_regz00_87)
	{
		{	/* SawMill/regset.scm 144 */
			if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_regz00_87, BgL_sz00_86))
				{	/* SawMill/regset.scm 145 */
					return ((bool_t) 0);
				}
			else
				{	/* SawMill/regset.scm 147 */
					long BgL_basez00_1997;
					long BgL_bitz00_1998;

					{	/* SawMill/regset.scm 147 */
						int BgL_arg1611z00_2004;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_3934;

							{
								obj_t BgL_auxz00_3935;

								{	/* SawMill/regset.scm 147 */
									BgL_objectz00_bglt BgL_tmpz00_3936;

									BgL_tmpz00_3936 = ((BgL_objectz00_bglt) BgL_regz00_87);
									BgL_auxz00_3935 = BGL_OBJECT_WIDENING(BgL_tmpz00_3936);
								}
								BgL_auxz00_3934 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3935);
							}
							BgL_arg1611z00_2004 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3934))->
								BgL_numz00);
						}
						BgL_basez00_1997 = ((long) (BgL_arg1611z00_2004) / ((long) 8));
					}
					{	/* SawMill/regset.scm 148 */
						int BgL_arg1612z00_2005;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_3943;

							{
								obj_t BgL_auxz00_3944;

								{	/* SawMill/regset.scm 148 */
									BgL_objectz00_bglt BgL_tmpz00_3945;

									BgL_tmpz00_3945 = ((BgL_objectz00_bglt) BgL_regz00_87);
									BgL_auxz00_3944 = BGL_OBJECT_WIDENING(BgL_tmpz00_3945);
								}
								BgL_auxz00_3943 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3944);
							}
							BgL_arg1612z00_2005 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3943))->
								BgL_numz00);
						}
						{	/* SawMill/regset.scm 148 */
							long BgL_res2066z00_2849;

							{	/* SawMill/regset.scm 148 */
								long BgL_n1z00_2831;
								long BgL_n2z00_2832;

								BgL_n1z00_2831 = (long) (BgL_arg1612z00_2005);
								BgL_n2z00_2832 = ((long) 8);
								{	/* SawMill/regset.scm 148 */
									bool_t BgL_test2294z00_3951;

									{	/* SawMill/regset.scm 148 */
										long BgL_arg1356z00_2834;

										BgL_arg1356z00_2834 =
											(((BgL_n1z00_2831) | (BgL_n2z00_2832)) & -2147483648);
										BgL_test2294z00_3951 = (BgL_arg1356z00_2834 == ((long) 0));
									}
									if (BgL_test2294z00_3951)
										{	/* SawMill/regset.scm 148 */
											int32_t BgL_arg1353z00_2835;

											{	/* SawMill/regset.scm 148 */
												int32_t BgL_arg1354z00_2836;
												int32_t BgL_arg1355z00_2837;

												{	/* SawMill/regset.scm 148 */
													int32_t BgL_res2062z00_2841;

													BgL_res2062z00_2841 = (int32_t) (BgL_n1z00_2831);
													BgL_arg1354z00_2836 = BgL_res2062z00_2841;
												}
												{	/* SawMill/regset.scm 148 */
													int32_t BgL_res2063z00_2843;

													BgL_res2063z00_2843 = (int32_t) (BgL_n2z00_2832);
													BgL_arg1355z00_2837 = BgL_res2063z00_2843;
												}
												BgL_arg1353z00_2835 =
													(BgL_arg1354z00_2836 % BgL_arg1355z00_2837);
											}
											{	/* SawMill/regset.scm 148 */
												long BgL_res2065z00_2848;

												{	/* SawMill/regset.scm 148 */
													long BgL_arg1456z00_2845;

													BgL_arg1456z00_2845 = (long) (BgL_arg1353z00_2835);
													{	/* SawMill/regset.scm 148 */
														long BgL_res2064z00_2847;

														BgL_res2064z00_2847 = (long) (BgL_arg1456z00_2845);
														BgL_res2065z00_2848 = BgL_res2064z00_2847;
												}}
												BgL_res2066z00_2849 = BgL_res2065z00_2848;
										}}
									else
										{	/* SawMill/regset.scm 148 */
											BgL_res2066z00_2849 = (BgL_n1z00_2831 % BgL_n2z00_2832);
										}
								}
							}
							BgL_bitz00_1998 = BgL_res2066z00_2849;
						}
					}
					((((BgL_regsetz00_bglt) COBJECT(BgL_sz00_86))->BgL_lengthz00) = ((int)
							(int) (
								((long) (
										(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_86))->
											BgL_lengthz00)) + ((long) 1)))), BUNSPEC);
					{	/* SawMill/regset.scm 151 */
						long BgL_nvalz00_2001;

						BgL_nvalz00_2001 =
							(
							(STRING_REF(
									(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_86))->BgL_stringz00),
									BgL_basez00_1997)) | (((long) 1) << (int) (BgL_bitz00_1998)));
						{	/* SawMill/regset.scm 76 */
							unsigned char BgL_auxz00_3973;
							obj_t BgL_tmpz00_3971;

							BgL_auxz00_3973 = (BgL_nvalz00_2001);
							BgL_tmpz00_3971 =
								(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_86))->BgL_stringz00);
							STRING_SET(BgL_tmpz00_3971, BgL_basez00_1997, BgL_auxz00_3973);
						}
						return ((bool_t) 1);
					}
				}
		}

	}



/* &regset-add! */
	obj_t BGl_z62regsetzd2addz12za2zzsaw_regsetz00(obj_t BgL_envz00_3230,
		obj_t BgL_sz00_3231, obj_t BgL_regz00_3232)
	{
		{	/* SawMill/regset.scm 144 */
			return
				BBOOL(BGl_regsetzd2addz12zc0zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_sz00_3231),
					((BgL_rtl_regz00_bglt) BgL_regz00_3232)));
		}

	}



/* regset-add*! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2addza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_88,
		obj_t BgL_regsz00_89)
	{
		{	/* SawMill/regset.scm 158 */
			{
				obj_t BgL_l1455z00_2007;

				BgL_l1455z00_2007 = BgL_regsz00_89;
			BgL_zc3z04anonymousza31613ze3z87_2008:
				if (PAIRP(BgL_l1455z00_2007))
					{	/* SawMill/regset.scm 159 */
						{	/* SawMill/regset.scm 159 */
							obj_t BgL_rz00_2010;

							BgL_rz00_2010 = CAR(BgL_l1455z00_2007);
							BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_sz00_88,
								((BgL_rtl_regz00_bglt) BgL_rz00_2010));
						}
						{
							obj_t BgL_l1455z00_3985;

							BgL_l1455z00_3985 = CDR(BgL_l1455z00_2007);
							BgL_l1455z00_2007 = BgL_l1455z00_3985;
							goto BgL_zc3z04anonymousza31613ze3z87_2008;
						}
					}
				else
					{	/* SawMill/regset.scm 159 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* &regset-add*! */
	obj_t BGl_z62regsetzd2addza2z12z00zzsaw_regsetz00(obj_t BgL_envz00_3233,
		obj_t BgL_sz00_3234, obj_t BgL_regsz00_3235)
	{
		{	/* SawMill/regset.scm 158 */
			return
				BBOOL(BGl_regsetzd2addza2z12z62zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_sz00_3234), BgL_regsz00_3235));
		}

	}



/* regset-remove! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_90,
		BgL_rtl_regz00_bglt BgL_regz00_91)
	{
		{	/* SawMill/regset.scm 164 */
			if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_regz00_91, BgL_sz00_90))
				{	/* SawMill/regset.scm 167 */
					long BgL_basez00_2015;
					long BgL_bitz00_2016;

					{	/* SawMill/regset.scm 167 */
						int BgL_arg1639z00_2023;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_3992;

							{
								obj_t BgL_auxz00_3993;

								{	/* SawMill/regset.scm 167 */
									BgL_objectz00_bglt BgL_tmpz00_3994;

									BgL_tmpz00_3994 = ((BgL_objectz00_bglt) BgL_regz00_91);
									BgL_auxz00_3993 = BGL_OBJECT_WIDENING(BgL_tmpz00_3994);
								}
								BgL_auxz00_3992 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3993);
							}
							BgL_arg1639z00_2023 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3992))->
								BgL_numz00);
						}
						BgL_basez00_2015 = ((long) (BgL_arg1639z00_2023) / ((long) 8));
					}
					{	/* SawMill/regset.scm 168 */
						int BgL_arg1640z00_2024;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_4001;

							{
								obj_t BgL_auxz00_4002;

								{	/* SawMill/regset.scm 168 */
									BgL_objectz00_bglt BgL_tmpz00_4003;

									BgL_tmpz00_4003 = ((BgL_objectz00_bglt) BgL_regz00_91);
									BgL_auxz00_4002 = BGL_OBJECT_WIDENING(BgL_tmpz00_4003);
								}
								BgL_auxz00_4001 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4002);
							}
							BgL_arg1640z00_2024 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4001))->
								BgL_numz00);
						}
						{	/* SawMill/regset.scm 168 */
							long BgL_res2080z00_2898;

							{	/* SawMill/regset.scm 168 */
								long BgL_n1z00_2880;
								long BgL_n2z00_2881;

								BgL_n1z00_2880 = (long) (BgL_arg1640z00_2024);
								BgL_n2z00_2881 = ((long) 8);
								{	/* SawMill/regset.scm 168 */
									bool_t BgL_test2297z00_4009;

									{	/* SawMill/regset.scm 168 */
										long BgL_arg1356z00_2883;

										BgL_arg1356z00_2883 =
											(((BgL_n1z00_2880) | (BgL_n2z00_2881)) & -2147483648);
										BgL_test2297z00_4009 = (BgL_arg1356z00_2883 == ((long) 0));
									}
									if (BgL_test2297z00_4009)
										{	/* SawMill/regset.scm 168 */
											int32_t BgL_arg1353z00_2884;

											{	/* SawMill/regset.scm 168 */
												int32_t BgL_arg1354z00_2885;
												int32_t BgL_arg1355z00_2886;

												{	/* SawMill/regset.scm 168 */
													int32_t BgL_res2076z00_2890;

													BgL_res2076z00_2890 = (int32_t) (BgL_n1z00_2880);
													BgL_arg1354z00_2885 = BgL_res2076z00_2890;
												}
												{	/* SawMill/regset.scm 168 */
													int32_t BgL_res2077z00_2892;

													BgL_res2077z00_2892 = (int32_t) (BgL_n2z00_2881);
													BgL_arg1355z00_2886 = BgL_res2077z00_2892;
												}
												BgL_arg1353z00_2884 =
													(BgL_arg1354z00_2885 % BgL_arg1355z00_2886);
											}
											{	/* SawMill/regset.scm 168 */
												long BgL_res2079z00_2897;

												{	/* SawMill/regset.scm 168 */
													long BgL_arg1456z00_2894;

													BgL_arg1456z00_2894 = (long) (BgL_arg1353z00_2884);
													{	/* SawMill/regset.scm 168 */
														long BgL_res2078z00_2896;

														BgL_res2078z00_2896 = (long) (BgL_arg1456z00_2894);
														BgL_res2079z00_2897 = BgL_res2078z00_2896;
												}}
												BgL_res2080z00_2898 = BgL_res2079z00_2897;
										}}
									else
										{	/* SawMill/regset.scm 168 */
											BgL_res2080z00_2898 = (BgL_n1z00_2880 % BgL_n2z00_2881);
										}
								}
							}
							BgL_bitz00_2016 = BgL_res2080z00_2898;
						}
					}
					((((BgL_regsetz00_bglt) COBJECT(BgL_sz00_90))->BgL_lengthz00) = ((int)
							(int) (
								((long) (
										(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_90))->
											BgL_lengthz00)) - ((long) 1)))), BUNSPEC);
					{	/* SawMill/regset.scm 171 */
						long BgL_nvalz00_2019;

						BgL_nvalz00_2019 =
							(
							(STRING_REF(
									(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_90))->BgL_stringz00),
									BgL_basez00_2015)) & ~((((long) 1) <<
									(int) (BgL_bitz00_2016))));
						{	/* SawMill/regset.scm 76 */
							unsigned char BgL_auxz00_4032;
							obj_t BgL_tmpz00_4030;

							BgL_auxz00_4032 = (BgL_nvalz00_2019);
							BgL_tmpz00_4030 =
								(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_90))->BgL_stringz00);
							STRING_SET(BgL_tmpz00_4030, BgL_basez00_2015, BgL_auxz00_4032);
						}
						return ((bool_t) 1);
					}
				}
			else
				{	/* SawMill/regset.scm 165 */
					return ((bool_t) 0);
				}
		}

	}



/* &regset-remove! */
	obj_t BGl_z62regsetzd2removez12za2zzsaw_regsetz00(obj_t BgL_envz00_3236,
		obj_t BgL_sz00_3237, obj_t BgL_regz00_3238)
	{
		{	/* SawMill/regset.scm 164 */
			return
				BBOOL(BGl_regsetzd2removez12zc0zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_sz00_3237),
					((BgL_rtl_regz00_bglt) BgL_regz00_3238)));
		}

	}



/* regset-union! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt BgL_s1z00_92,
		BgL_regsetz00_bglt BgL_s2z00_93)
	{
		{	/* SawMill/regset.scm 179 */
			{	/* SawMill/regset.scm 180 */
				obj_t BgL_st1z00_2025;
				obj_t BgL_st2z00_2026;

				BgL_st1z00_2025 =
					(((BgL_regsetz00_bglt) COBJECT(BgL_s1z00_92))->BgL_stringz00);
				BgL_st2z00_2026 =
					(((BgL_regsetz00_bglt) COBJECT(BgL_s2z00_93))->BgL_stringz00);
				{	/* SawMill/regset.scm 182 */
					long BgL_g1186z00_2027;

					BgL_g1186z00_2027 = (STRING_LENGTH(BgL_st1z00_2025) - ((long) 1));
					{
						long BgL_iz00_2029;
						bool_t BgL_resz00_2030;

						BgL_iz00_2029 = BgL_g1186z00_2027;
						BgL_resz00_2030 = ((bool_t) 0);
					BgL_zc3z04anonymousza31641ze3z87_2031:
						if ((BgL_iz00_2029 == ((long) -1)))
							{	/* SawMill/regset.scm 185 */
								return BgL_resz00_2030;
							}
						else
							{	/* SawMill/regset.scm 185 */
								if (
									(STRING_REF(BgL_st1z00_2025, BgL_iz00_2029) ==
										STRING_REF(BgL_st2z00_2026, BgL_iz00_2029)))
									{
										long BgL_iz00_4049;

										BgL_iz00_4049 = (BgL_iz00_2029 - ((long) 1));
										BgL_iz00_2029 = BgL_iz00_4049;
										goto BgL_zc3z04anonymousza31641ze3z87_2031;
									}
								else
									{	/* SawMill/regset.scm 190 */
										long BgL_n2z00_2037;

										BgL_n2z00_2037 =
											(STRING_REF(
												(((BgL_regsetz00_bglt) COBJECT(BgL_s2z00_93))->
													BgL_stringz00), BgL_iz00_2029));
										{	/* SawMill/regset.scm 191 */
											long BgL_g1187z00_2038;

											BgL_g1187z00_2038 =
												(STRING_REF(
													(((BgL_regsetz00_bglt) COBJECT(BgL_s1z00_92))->
														BgL_stringz00), BgL_iz00_2029));
											{
												long BgL_jz00_2040;
												bool_t BgL_resz00_2041;
												long BgL_n1z00_2042;

												BgL_jz00_2040 = ((long) 1);
												BgL_resz00_2041 = BgL_resz00_2030;
												BgL_n1z00_2042 = BgL_g1187z00_2038;
											BgL_zc3z04anonymousza31663ze3z87_2043:
												if ((BgL_jz00_2040 == ((long) 256)))
													{
														bool_t BgL_resz00_4061;
														long BgL_iz00_4059;

														BgL_iz00_4059 = (BgL_iz00_2029 - ((long) 1));
														BgL_resz00_4061 = BgL_resz00_2041;
														BgL_resz00_2030 = BgL_resz00_4061;
														BgL_iz00_2029 = BgL_iz00_4059;
														goto BgL_zc3z04anonymousza31641ze3z87_2031;
													}
												else
													{	/* SawMill/regset.scm 195 */
														if (
															((BgL_n1z00_2042 & BgL_jz00_2040) ==
																(BgL_n2z00_2037 & BgL_jz00_2040)))
															{
																long BgL_jz00_4066;

																BgL_jz00_4066 =
																	(BgL_jz00_2040 << (int) (((long) 1)));
																BgL_jz00_2040 = BgL_jz00_4066;
																goto BgL_zc3z04anonymousza31663ze3z87_2043;
															}
														else
															{	/* SawMill/regset.scm 197 */
																if (
																	((BgL_n1z00_2042 & BgL_jz00_2040) ==
																		((long) 0)))
																	{	/* SawMill/regset.scm 199 */
																		((((BgL_regsetz00_bglt)
																					COBJECT(BgL_s1z00_92))->
																				BgL_lengthz00) =
																			((int) (int) (((long) (((
																									(BgL_regsetz00_bglt)
																									COBJECT(BgL_s1z00_92))->
																								BgL_lengthz00)) + ((long) 1)))),
																			BUNSPEC);
																		{	/* SawMill/regset.scm 202 */
																			long BgL_n1z00_2054;

																			BgL_n1z00_2054 =
																				(BgL_n1z00_2042 | BgL_jz00_2040);
																			{	/* SawMill/regset.scm 76 */
																				unsigned char BgL_auxz00_4080;
																				obj_t BgL_tmpz00_4078;

																				BgL_auxz00_4080 = (BgL_n1z00_2054);
																				BgL_tmpz00_4078 =
																					(((BgL_regsetz00_bglt)
																						COBJECT(BgL_s1z00_92))->
																					BgL_stringz00);
																				STRING_SET(BgL_tmpz00_4078,
																					BgL_iz00_2029, BgL_auxz00_4080);
																			}
																			{
																				long BgL_n1z00_4087;
																				bool_t BgL_resz00_4086;
																				long BgL_jz00_4083;

																				BgL_jz00_4083 =
																					(BgL_jz00_2040 << (int) (((long) 1)));
																				BgL_resz00_4086 = ((bool_t) 1);
																				BgL_n1z00_4087 = BgL_n1z00_2054;
																				BgL_n1z00_2042 = BgL_n1z00_4087;
																				BgL_resz00_2041 = BgL_resz00_4086;
																				BgL_jz00_2040 = BgL_jz00_4083;
																				goto
																					BgL_zc3z04anonymousza31663ze3z87_2043;
																			}
																		}
																	}
																else
																	{
																		long BgL_jz00_4088;

																		BgL_jz00_4088 =
																			(BgL_jz00_2040 << (int) (((long) 1)));
																		BgL_jz00_2040 = BgL_jz00_4088;
																		goto BgL_zc3z04anonymousza31663ze3z87_2043;
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



/* &regset-union! */
	obj_t BGl_z62regsetzd2unionz12za2zzsaw_regsetz00(obj_t BgL_envz00_3239,
		obj_t BgL_s1z00_3240, obj_t BgL_s2z00_3241)
	{
		{	/* SawMill/regset.scm 179 */
			return
				BBOOL(BGl_regsetzd2unionz12zc0zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_s1z00_3240),
					((BgL_regsetz00_bglt) BgL_s2z00_3241)));
		}

	}



/* regset-union*! */
	BGL_EXPORTED_DEF bool_t
		BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt BgL_sz00_94,
		obj_t BgL_ssz00_95)
	{
		{	/* SawMill/regset.scm 211 */
			if (NULLP(BgL_ssz00_95))
				{	/* SawMill/regset.scm 213 */
					return ((bool_t) 0);
				}
			else
				{	/* SawMill/regset.scm 213 */
					if (NULLP(CDR(BgL_ssz00_95)))
						{	/* SawMill/regset.scm 216 */
							obj_t BgL_arg1719z00_2068;

							BgL_arg1719z00_2068 = CAR(BgL_ssz00_95);
							return
								BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_94,
								((BgL_regsetz00_bglt) BgL_arg1719z00_2068));
						}
					else
						{
							obj_t BgL_ssz00_2070;
							bool_t BgL_resz00_2071;

							BgL_ssz00_2070 = BgL_ssz00_95;
							BgL_resz00_2071 = ((bool_t) 0);
						BgL_zc3z04anonymousza31720ze3z87_2072:
							if (NULLP(BgL_ssz00_2070))
								{	/* SawMill/regset.scm 220 */
									return BgL_resz00_2071;
								}
							else
								{	/* SawMill/regset.scm 222 */
									obj_t BgL_arg1725z00_2074;
									bool_t BgL_arg1726z00_2075;

									BgL_arg1725z00_2074 = CDR(((obj_t) BgL_ssz00_2070));
									{	/* SawMill/regset.scm 222 */
										bool_t BgL__ortest_1189z00_2076;

										{	/* SawMill/regset.scm 222 */
											obj_t BgL_arg1727z00_2077;

											BgL_arg1727z00_2077 = CAR(((obj_t) BgL_ssz00_2070));
											BgL__ortest_1189z00_2076 =
												BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_sz00_94,
												((BgL_regsetz00_bglt) BgL_arg1727z00_2077));
										}
										if (BgL__ortest_1189z00_2076)
											{	/* SawMill/regset.scm 222 */
												BgL_arg1726z00_2075 = BgL__ortest_1189z00_2076;
											}
										else
											{	/* SawMill/regset.scm 222 */
												BgL_arg1726z00_2075 = BgL_resz00_2071;
											}
									}
									{
										bool_t BgL_resz00_4113;
										obj_t BgL_ssz00_4112;

										BgL_ssz00_4112 = BgL_arg1725z00_2074;
										BgL_resz00_4113 = BgL_arg1726z00_2075;
										BgL_resz00_2071 = BgL_resz00_4113;
										BgL_ssz00_2070 = BgL_ssz00_4112;
										goto BgL_zc3z04anonymousza31720ze3z87_2072;
									}
								}
						}
				}
		}

	}



/* &regset-union*! */
	obj_t BGl_z62regsetzd2unionza2z12z00zzsaw_regsetz00(obj_t BgL_envz00_3242,
		obj_t BgL_sz00_3243, obj_t BgL_ssz00_3244)
	{
		{	/* SawMill/regset.scm 211 */
			return
				BBOOL(BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(
					((BgL_regsetz00_bglt) BgL_sz00_3243), BgL_ssz00_3244));
		}

	}



/* regset-for-each */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t
		BgL_procz00_96, BgL_regsetz00_bglt BgL_sz00_97)
	{
		{	/* SawMill/regset.scm 227 */
			{
				long BgL_iz00_2081;

				{	/* SawMill/regset.scm 228 */
					bool_t BgL_tmpz00_4117;

					BgL_iz00_2081 = ((long) 0);
				BgL_zc3z04anonymousza31729ze3z87_2082:
					if (
						(BgL_iz00_2081 <
							(long) (
								(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_97))->BgL_msiza7eza7))))
						{	/* SawMill/regset.scm 230 */
							obj_t BgL_ez00_2085;

							BgL_ez00_2085 =
								VECTOR_REF(
								(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_97))->BgL_regvz00),
								BgL_iz00_2081);
							if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00((
										(BgL_rtl_regz00_bglt) BgL_ez00_2085), BgL_sz00_97))
								{	/* SawMill/regset.scm 231 */
									PROCEDURE_ENTRY(BgL_procz00_96) (BgL_procz00_96,
										BgL_ez00_2085, BEOA);
								}
							else
								{	/* SawMill/regset.scm 231 */
									BFALSE;
								}
							{
								long BgL_iz00_4131;

								BgL_iz00_4131 = (BgL_iz00_2081 + ((long) 1));
								BgL_iz00_2081 = BgL_iz00_4131;
								goto BgL_zc3z04anonymousza31729ze3z87_2082;
							}
						}
					else
						{	/* SawMill/regset.scm 229 */
							BgL_tmpz00_4117 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_4117);
				}
			}
		}

	}



/* &regset-for-each */
	obj_t BGl_z62regsetzd2forzd2eachz62zzsaw_regsetz00(obj_t BgL_envz00_3245,
		obj_t BgL_procz00_3246, obj_t BgL_sz00_3247)
	{
		{	/* SawMill/regset.scm 227 */
			return
				BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(BgL_procz00_3246,
				((BgL_regsetz00_bglt) BgL_sz00_3247));
		}

	}



/* regset-filter */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t
		BgL_procz00_98, BgL_regsetz00_bglt BgL_sz00_99)
	{
		{	/* SawMill/regset.scm 237 */
			return
				BGl_loopze70ze7zzsaw_regsetz00(BgL_procz00_98, BgL_sz00_99, ((long) 0));
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzsaw_regsetz00(obj_t BgL_procz00_3401,
		BgL_regsetz00_bglt BgL_sz00_3400, long BgL_iz00_2092)
	{
		{	/* SawMill/regset.scm 238 */
		BGl_loopze70ze7zzsaw_regsetz00:
			if (
				(BgL_iz00_2092 <
					(long) (
						(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_3400))->BgL_msiza7eza7))))
				{	/* SawMill/regset.scm 240 */
					obj_t BgL_ez00_2096;

					BgL_ez00_2096 =
						VECTOR_REF(
						(((BgL_regsetz00_bglt) COBJECT(BgL_sz00_3400))->BgL_regvz00),
						BgL_iz00_2092);
					{	/* SawMill/regset.scm 241 */
						bool_t BgL_test2310z00_4143;

						if (BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
								((BgL_rtl_regz00_bglt) BgL_ez00_2096), BgL_sz00_3400))
							{	/* SawMill/regset.scm 241 */
								BgL_test2310z00_4143 =
									CBOOL(PROCEDURE_ENTRY(BgL_procz00_3401) (BgL_procz00_3401,
										BgL_ez00_2096, BEOA));
							}
						else
							{	/* SawMill/regset.scm 241 */
								BgL_test2310z00_4143 = ((bool_t) 0);
							}
						if (BgL_test2310z00_4143)
							{	/* SawMill/regset.scm 241 */
								return
									MAKE_YOUNG_PAIR(BgL_ez00_2096,
									BGl_loopze70ze7zzsaw_regsetz00(BgL_procz00_3401,
										BgL_sz00_3400, (BgL_iz00_2092 + ((long) 1))));
							}
						else
							{
								long BgL_iz00_4155;

								BgL_iz00_4155 = (BgL_iz00_2092 + ((long) 1));
								BgL_iz00_2092 = BgL_iz00_4155;
								goto BGl_loopze70ze7zzsaw_regsetz00;
							}
					}
				}
			else
				{	/* SawMill/regset.scm 239 */
					return BNIL;
				}
		}

	}



/* &regset-filter */
	obj_t BGl_z62regsetzd2filterzb0zzsaw_regsetz00(obj_t BgL_envz00_3248,
		obj_t BgL_procz00_3249, obj_t BgL_sz00_3250)
	{
		{	/* SawMill/regset.scm 237 */
			return
				BGl_regsetzd2filterzd2zzsaw_regsetz00(BgL_procz00_3249,
				((BgL_regsetz00_bglt) BgL_sz00_3250));
		}

	}



/* regset-dump */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2dumpzd2zzsaw_regsetz00(BgL_regsetz00_bglt
		BgL_sz00_102, obj_t BgL_pz00_103)
	{
		{	/* SawMill/regset.scm 261 */
			{	/* SawMill/regset.scm 262 */
				obj_t BgL_pz00_2119;

				if (PAIRP(BgL_pz00_103))
					{	/* SawMill/regset.scm 262 */
						BgL_pz00_2119 = CAR(BgL_pz00_103);
					}
				else
					{	/* SawMill/regset.scm 262 */
						obj_t BgL_res2121z00_3026;

						{	/* SawMill/regset.scm 262 */
							obj_t BgL_tmpz00_4162;

							BgL_tmpz00_4162 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res2121z00_3026 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_4162);
						}
						BgL_pz00_2119 = BgL_res2121z00_3026;
					}
				{	/* SawMill/regset.scm 263 */
					obj_t BgL_tmpz00_4165;

					BgL_tmpz00_4165 = ((obj_t) BgL_pz00_2119);
					bgl_display_string(BGl_string2138z00zzsaw_regsetz00, BgL_tmpz00_4165);
				}
				{	/* SawMill/regset.scm 265 */
					obj_t BgL_zc3z04anonymousza31779ze3z87_3251;

					BgL_zc3z04anonymousza31779ze3z87_3251 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_regsetz00,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31779ze3z87_3251,
						(int) (((long) 0)), BgL_pz00_2119);
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3z04anonymousza31779ze3z87_3251, BgL_sz00_102);
				}
				{	/* SawMill/regset.scm 268 */
					obj_t BgL_tmpz00_4174;

					BgL_tmpz00_4174 = ((obj_t) BgL_pz00_2119);
					return
						bgl_display_string(BGl_string2139z00zzsaw_regsetz00,
						BgL_tmpz00_4174);
				}
			}
		}

	}



/* &regset-dump */
	obj_t BGl_z62regsetzd2dumpzb0zzsaw_regsetz00(obj_t BgL_envz00_3252,
		obj_t BgL_sz00_3253, obj_t BgL_pz00_3254)
	{
		{	/* SawMill/regset.scm 261 */
			return
				BGl_regsetzd2dumpzd2zzsaw_regsetz00(
				((BgL_regsetz00_bglt) BgL_sz00_3253), BgL_pz00_3254);
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3255, obj_t BgL_ez00_3257)
	{
		{	/* SawMill/regset.scm 264 */
			{	/* SawMill/regset.scm 265 */
				obj_t BgL_pz00_3256;

				BgL_pz00_3256 = PROCEDURE_REF(BgL_envz00_3255, (int) (((long) 0)));
				{	/* SawMill/regset.scm 265 */
					obj_t BgL_tmpz00_4181;

					BgL_tmpz00_4181 = ((obj_t) BgL_pz00_3256);
					bgl_display_string(BGl_string2140z00zzsaw_regsetz00, BgL_tmpz00_4181);
				}
				return
					BGl_dumpz00zzsaw_defsz00(BgL_ez00_3257, BgL_pz00_3256,
					(int) (((long) 0)));
		}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			{	/* SawMill/regset.scm 30 */
				obj_t BgL_arg1798z00_2129;
				obj_t BgL_arg1801z00_2130;

				{	/* SawMill/regset.scm 30 */
					obj_t BgL_v1457z00_2163;

					BgL_v1457z00_2163 = create_vector(((long) 6));
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1823z00_2164;

						BgL_arg1823z00_2164 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc2142z00zzsaw_regsetz00,
							BGl_proc2141z00zzsaw_regsetz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 0), BgL_arg1823z00_2164);
					}
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1828z00_2174;

						BgL_arg1828z00_2174 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc2145z00zzsaw_regsetz00,
							BGl_proc2144z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2143z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 1), BgL_arg1828z00_2174);
					}
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1835z00_2187;

						BgL_arg1835z00_2187 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc2148z00zzsaw_regsetz00,
							BGl_proc2147z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2146z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 2), BgL_arg1835z00_2187);
					}
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1845z00_2200;

						BgL_arg1845z00_2200 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc2151z00zzsaw_regsetz00,
							BGl_proc2150z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2149z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 3), BgL_arg1845z00_2200);
					}
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1852z00_2213;

						BgL_arg1852z00_2213 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc2154z00zzsaw_regsetz00,
							BGl_proc2153z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2152z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 4), BgL_arg1852z00_2213);
					}
					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1861z00_2226;

						BgL_arg1861z00_2226 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc2157z00zzsaw_regsetz00,
							BGl_proc2156z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2155z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 3)));
						VECTOR_SET(BgL_v1457z00_2163, ((long) 5), BgL_arg1861z00_2226);
					}
					BgL_arg1798z00_2129 = BgL_v1457z00_2163;
				}
				{	/* SawMill/regset.scm 30 */
					obj_t BgL_v1458z00_2239;

					BgL_v1458z00_2239 = create_vector(((long) 0));
					BgL_arg1801z00_2130 = BgL_v1458z00_2239;
				}
				BGl_rtl_regzf2razf2zzsaw_regsetz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 8)),
					CNST_TABLE_REF(((long) 9)), BGl_rtl_regz00zzsaw_defsz00,
					((long) 60046), BGl_proc2161z00zzsaw_regsetz00,
					BGl_proc2160z00zzsaw_regsetz00, BFALSE,
					BGl_proc2159z00zzsaw_regsetz00, BGl_proc2158z00zzsaw_regsetz00,
					BgL_arg1798z00_2129, BgL_arg1801z00_2130);
			}
			{	/* SawMill/regset.scm 38 */
				obj_t BgL_arg1873z00_2247;
				obj_t BgL_arg1874z00_2248;

				{	/* SawMill/regset.scm 38 */
					obj_t BgL_v1459z00_2263;

					BgL_v1459z00_2263 = create_vector(((long) 5));
					{	/* SawMill/regset.scm 38 */
						obj_t BgL_arg1881z00_2264;

						BgL_arg1881z00_2264 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2164z00zzsaw_regsetz00,
							BGl_proc2163z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2162z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1459z00_2263, ((long) 0), BgL_arg1881z00_2264);
					}
					{	/* SawMill/regset.scm 38 */
						obj_t BgL_arg1888z00_2277;

						BgL_arg1888z00_2277 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc2166z00zzsaw_regsetz00,
							BGl_proc2165z00zzsaw_regsetz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1459z00_2263, ((long) 1), BgL_arg1888z00_2277);
					}
					{	/* SawMill/regset.scm 38 */
						obj_t BgL_arg1895z00_2287;

						BgL_arg1895z00_2287 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc2168z00zzsaw_regsetz00,
							BGl_proc2167z00zzsaw_regsetz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1459z00_2263, ((long) 2), BgL_arg1895z00_2287);
					}
					{	/* SawMill/regset.scm 38 */
						obj_t BgL_arg1901z00_2297;

						BgL_arg1901z00_2297 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc2170z00zzsaw_regsetz00,
							BGl_proc2169z00zzsaw_regsetz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1459z00_2263, ((long) 3), BgL_arg1901z00_2297);
					}
					{	/* SawMill/regset.scm 38 */
						obj_t BgL_arg1906z00_2307;

						BgL_arg1906z00_2307 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2173z00zzsaw_regsetz00,
							BGl_proc2172z00zzsaw_regsetz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2171z00zzsaw_regsetz00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1459z00_2263, ((long) 4), BgL_arg1906z00_2307);
					}
					BgL_arg1873z00_2247 = BgL_v1459z00_2263;
				}
				{	/* SawMill/regset.scm 38 */
					obj_t BgL_v1460z00_2320;

					BgL_v1460z00_2320 = create_vector(((long) 0));
					BgL_arg1874z00_2248 = BgL_v1460z00_2320;
				}
				return (BGl_regsetz00zzsaw_regsetz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 18)),
						CNST_TABLE_REF(((long) 9)), BGl_objectz00zz__objectz00,
						((long) 59053), BGl_proc2176z00zzsaw_regsetz00,
						BGl_proc2175z00zzsaw_regsetz00, BFALSE,
						BGl_proc2174z00zzsaw_regsetz00, BFALSE, BgL_arg1873z00_2247,
						BgL_arg1874z00_2248), BUNSPEC);
		}}

	}



/* &<@anonymous:1879> */
	obj_t BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3294, obj_t BgL_new1170z00_3295)
	{
		{	/* SawMill/regset.scm 38 */
			{
				BgL_regsetz00_bglt BgL_auxz00_4240;

				((((BgL_regsetz00_bglt) COBJECT(
								((BgL_regsetz00_bglt) BgL_new1170z00_3295)))->BgL_lengthz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(((BgL_regsetz00_bglt)
									BgL_new1170z00_3295)))->BgL_msiza7eza7) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(((BgL_regsetz00_bglt)
									BgL_new1170z00_3295)))->BgL_regvz00) =
					((obj_t) CNST_TABLE_REF(((long) 19))), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(((BgL_regsetz00_bglt)
									BgL_new1170z00_3295)))->BgL_reglz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(((BgL_regsetz00_bglt)
									BgL_new1170z00_3295)))->BgL_stringz00) =
					((obj_t) BGl_string2177z00zzsaw_regsetz00), BUNSPEC);
				BgL_auxz00_4240 = ((BgL_regsetz00_bglt) BgL_new1170z00_3295);
				return ((obj_t) BgL_auxz00_4240);
			}
		}

	}



/* &lambda1877 */
	BgL_regsetz00_bglt BGl_z62lambda1877z62zzsaw_regsetz00(obj_t BgL_envz00_3296)
	{
		{	/* SawMill/regset.scm 38 */
			{	/* SawMill/regset.scm 38 */
				BgL_regsetz00_bglt BgL_new1169z00_3430;

				BgL_new1169z00_3430 =
					((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_regsetz00_bgl))));
				{	/* SawMill/regset.scm 38 */
					long BgL_arg1878z00_3431;

					{	/* SawMill/regset.scm 38 */
						long BgL_res2129z00_3432;

						BgL_res2129z00_3432 = BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
						BgL_arg1878z00_3431 = BgL_res2129z00_3432;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1169z00_3430), BgL_arg1878z00_3431);
				}
				return BgL_new1169z00_3430;
			}
		}

	}



/* &lambda1875 */
	BgL_regsetz00_bglt BGl_z62lambda1875z62zzsaw_regsetz00(obj_t BgL_envz00_3297,
		obj_t BgL_length1164z00_3298, obj_t BgL_msiza7e1165za7_3299,
		obj_t BgL_regv1166z00_3300, obj_t BgL_regl1167z00_3301,
		obj_t BgL_string1168z00_3302)
	{
		{	/* SawMill/regset.scm 38 */
			{	/* SawMill/regset.scm 38 */
				int BgL_length1164z00_3433;
				int BgL_msiza7e1165za7_3434;

				BgL_length1164z00_3433 = CINT(BgL_length1164z00_3298);
				BgL_msiza7e1165za7_3434 = CINT(BgL_msiza7e1165za7_3299);
				{	/* SawMill/regset.scm 38 */
					BgL_regsetz00_bglt BgL_new1197z00_3438;

					{	/* SawMill/regset.scm 38 */
						BgL_regsetz00_bglt BgL_new1196z00_3439;

						BgL_new1196z00_3439 =
							((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_regsetz00_bgl))));
						{	/* SawMill/regset.scm 38 */
							long BgL_arg1876z00_3440;

							{	/* SawMill/regset.scm 38 */
								long BgL_res2128z00_3441;

								BgL_res2128z00_3441 =
									BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
								BgL_arg1876z00_3440 = BgL_res2128z00_3441;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1196z00_3439),
								BgL_arg1876z00_3440);
						}
						BgL_new1197z00_3438 = BgL_new1196z00_3439;
					}
					((((BgL_regsetz00_bglt) COBJECT(BgL_new1197z00_3438))->
							BgL_lengthz00) = ((int) BgL_length1164z00_3433), BUNSPEC);
					((((BgL_regsetz00_bglt) COBJECT(BgL_new1197z00_3438))->
							BgL_msiza7eza7) = ((int) BgL_msiza7e1165za7_3434), BUNSPEC);
					((((BgL_regsetz00_bglt) COBJECT(BgL_new1197z00_3438))->BgL_regvz00) =
						((obj_t) ((obj_t) BgL_regv1166z00_3300)), BUNSPEC);
					((((BgL_regsetz00_bglt) COBJECT(BgL_new1197z00_3438))->BgL_reglz00) =
						((obj_t) ((obj_t) BgL_regl1167z00_3301)), BUNSPEC);
					((((BgL_regsetz00_bglt) COBJECT(BgL_new1197z00_3438))->
							BgL_stringz00) =
						((obj_t) ((obj_t) BgL_string1168z00_3302)), BUNSPEC);
					return BgL_new1197z00_3438;
				}
			}
		}

	}



/* &<@anonymous:1912> */
	obj_t BGl_z62zc3z04anonymousza31912ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3303)
	{
		{	/* SawMill/regset.scm 38 */
			return CNST_TABLE_REF(((long) 19));
		}

	}



/* &lambda1911 */
	obj_t BGl_z62lambda1911z62zzsaw_regsetz00(obj_t BgL_envz00_3304,
		obj_t BgL_oz00_3305, obj_t BgL_vz00_3306)
	{
		{	/* SawMill/regset.scm 38 */
			return
				((((BgL_regsetz00_bglt) COBJECT(
							((BgL_regsetz00_bglt) BgL_oz00_3305)))->BgL_stringz00) = ((obj_t)
					((obj_t) BgL_vz00_3306)), BUNSPEC);
		}

	}



/* &lambda1910 */
	obj_t BGl_z62lambda1910z62zzsaw_regsetz00(obj_t BgL_envz00_3307,
		obj_t BgL_oz00_3308)
	{
		{	/* SawMill/regset.scm 38 */
			return
				(((BgL_regsetz00_bglt) COBJECT(
						((BgL_regsetz00_bglt) BgL_oz00_3308)))->BgL_stringz00);
		}

	}



/* &lambda1905 */
	obj_t BGl_z62lambda1905z62zzsaw_regsetz00(obj_t BgL_envz00_3309,
		obj_t BgL_oz00_3310, obj_t BgL_vz00_3311)
	{
		{	/* SawMill/regset.scm 38 */
			return
				((((BgL_regsetz00_bglt) COBJECT(
							((BgL_regsetz00_bglt) BgL_oz00_3310)))->BgL_reglz00) = ((obj_t)
					((obj_t) BgL_vz00_3311)), BUNSPEC);
		}

	}



/* &lambda1904 */
	obj_t BGl_z62lambda1904z62zzsaw_regsetz00(obj_t BgL_envz00_3312,
		obj_t BgL_oz00_3313)
	{
		{	/* SawMill/regset.scm 38 */
			return
				(((BgL_regsetz00_bglt) COBJECT(
						((BgL_regsetz00_bglt) BgL_oz00_3313)))->BgL_reglz00);
		}

	}



/* &lambda1899 */
	obj_t BGl_z62lambda1899z62zzsaw_regsetz00(obj_t BgL_envz00_3314,
		obj_t BgL_oz00_3315, obj_t BgL_vz00_3316)
	{
		{	/* SawMill/regset.scm 38 */
			return
				((((BgL_regsetz00_bglt) COBJECT(
							((BgL_regsetz00_bglt) BgL_oz00_3315)))->BgL_regvz00) = ((obj_t)
					((obj_t) BgL_vz00_3316)), BUNSPEC);
		}

	}



/* &lambda1898 */
	obj_t BGl_z62lambda1898z62zzsaw_regsetz00(obj_t BgL_envz00_3317,
		obj_t BgL_oz00_3318)
	{
		{	/* SawMill/regset.scm 38 */
			return
				(((BgL_regsetz00_bglt) COBJECT(
						((BgL_regsetz00_bglt) BgL_oz00_3318)))->BgL_regvz00);
		}

	}



/* &lambda1893 */
	obj_t BGl_z62lambda1893z62zzsaw_regsetz00(obj_t BgL_envz00_3319,
		obj_t BgL_oz00_3320, obj_t BgL_vz00_3321)
	{
		{	/* SawMill/regset.scm 38 */
			{	/* SawMill/regset.scm 38 */
				int BgL_vz00_3452;

				BgL_vz00_3452 = CINT(BgL_vz00_3321);
				return
					((((BgL_regsetz00_bglt) COBJECT(
								((BgL_regsetz00_bglt) BgL_oz00_3320)))->BgL_msiza7eza7) =
					((int) BgL_vz00_3452), BUNSPEC);
		}}

	}



/* &lambda1892 */
	obj_t BGl_z62lambda1892z62zzsaw_regsetz00(obj_t BgL_envz00_3322,
		obj_t BgL_oz00_3323)
	{
		{	/* SawMill/regset.scm 38 */
			return
				BINT(
				(((BgL_regsetz00_bglt) COBJECT(
							((BgL_regsetz00_bglt) BgL_oz00_3323)))->BgL_msiza7eza7));
		}

	}



/* &<@anonymous:1887> */
	obj_t BGl_z62zc3z04anonymousza31887ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3324)
	{
		{	/* SawMill/regset.scm 38 */
			return BINT(((long) 0));
		}

	}



/* &lambda1886 */
	obj_t BGl_z62lambda1886z62zzsaw_regsetz00(obj_t BgL_envz00_3325,
		obj_t BgL_oz00_3326, obj_t BgL_vz00_3327)
	{
		{	/* SawMill/regset.scm 38 */
			{	/* SawMill/regset.scm 38 */
				int BgL_vz00_3455;

				BgL_vz00_3455 = CINT(BgL_vz00_3327);
				return
					((((BgL_regsetz00_bglt) COBJECT(
								((BgL_regsetz00_bglt) BgL_oz00_3326)))->BgL_lengthz00) =
					((int) BgL_vz00_3455), BUNSPEC);
		}}

	}



/* &lambda1885 */
	obj_t BGl_z62lambda1885z62zzsaw_regsetz00(obj_t BgL_envz00_3328,
		obj_t BgL_oz00_3329)
	{
		{	/* SawMill/regset.scm 38 */
			return
				BINT(
				(((BgL_regsetz00_bglt) COBJECT(
							((BgL_regsetz00_bglt) BgL_oz00_3329)))->BgL_lengthz00));
		}

	}



/* &lambda1813 */
	BgL_rtl_regz00_bglt BGl_z62lambda1813z62zzsaw_regsetz00(obj_t BgL_envz00_3330,
		obj_t BgL_o1162z00_3331)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				long BgL_arg1820z00_3458;

				{	/* SawMill/regset.scm 30 */
					obj_t BgL_arg1821z00_3459;

					{	/* SawMill/regset.scm 30 */
						obj_t BgL_arg1822z00_3460;

						{	/* SawMill/regset.scm 30 */
							long BgL_arg1816z00_3461;

							{	/* SawMill/regset.scm 30 */
								long BgL_arg1817z00_3462;

								{	/* SawMill/regset.scm 30 */
									long BgL_res2125z00_3463;

									BgL_res2125z00_3463 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_o1162z00_3331)));
									BgL_arg1817z00_3462 = BgL_res2125z00_3463;
								}
								BgL_arg1816z00_3461 = (BgL_arg1817z00_3462 - OBJECT_TYPE);
							}
							BgL_arg1822z00_3460 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_3461);
						}
						BgL_arg1821z00_3459 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1822z00_3460);
					}
					{	/* SawMill/regset.scm 30 */
						long BgL_res2127z00_3464;

						{	/* SawMill/regset.scm 30 */
							obj_t BgL_tmpz00_4309;

							BgL_tmpz00_4309 = ((obj_t) BgL_arg1821z00_3459);
							BgL_res2127z00_3464 = BGL_CLASS_INDEX(BgL_tmpz00_4309);
						}
						BgL_arg1820z00_3458 = BgL_res2127z00_3464;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) BgL_o1162z00_3331)), BgL_arg1820z00_3458);
			}
			{	/* SawMill/regset.scm 30 */
				BgL_objectz00_bglt BgL_tmpz00_4315;

				BgL_tmpz00_4315 =
					((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_3331));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4315, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_3331));
			return ((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1162z00_3331));
		}

	}



/* &<@anonymous:1812> */
	obj_t BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3332, obj_t BgL_new1161z00_3333)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regz00_bglt BgL_auxz00_4323;

				{
					BgL_typez00_bglt BgL_auxz00_4324;

					{	/* SawMill/regset.scm 30 */
						obj_t BgL_classz00_3466;

						BgL_classz00_3466 = BGl_typez00zztype_typez00;
						{	/* SawMill/regset.scm 30 */
							obj_t BgL__ortest_1106z00_3467;

							BgL__ortest_1106z00_3467 = BGL_CLASS_NIL(BgL_classz00_3466);
							if (CBOOL(BgL__ortest_1106z00_3467))
								{	/* SawMill/regset.scm 30 */
									BgL_auxz00_4324 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_3467);
								}
							else
								{	/* SawMill/regset.scm 30 */
									BgL_auxz00_4324 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3466));
								}
						}
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_new1161z00_3333))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_4324), BUNSPEC);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt)
									((BgL_rtl_regz00_bglt) BgL_new1161z00_3333))))->BgL_varz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1161z00_3333))))->BgL_onexprzf3zf3) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1161z00_3333))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1161z00_3333))))->BgL_keyz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_regz00_bglt)
							COBJECT(((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt)
										BgL_new1161z00_3333))))->BgL_hardwarez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4349;

					{
						obj_t BgL_auxz00_4350;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4351;

							BgL_tmpz00_4351 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4350 = BGL_OBJECT_WIDENING(BgL_tmpz00_4351);
						}
						BgL_auxz00_4349 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4350);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4349))->BgL_numz00) =
						((int) (int) (((long) 0))), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4358;

					{
						obj_t BgL_auxz00_4359;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4360;

							BgL_tmpz00_4360 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4359 = BGL_OBJECT_WIDENING(BgL_tmpz00_4360);
						}
						BgL_auxz00_4358 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4359);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4358))->
							BgL_colorz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4366;

					{
						obj_t BgL_auxz00_4367;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4368;

							BgL_tmpz00_4368 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4367 = BGL_OBJECT_WIDENING(BgL_tmpz00_4368);
						}
						BgL_auxz00_4366 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4367);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4366))->
							BgL_coalescez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4374;

					{
						obj_t BgL_auxz00_4375;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4376;

							BgL_tmpz00_4376 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4375 = BGL_OBJECT_WIDENING(BgL_tmpz00_4376);
						}
						BgL_auxz00_4374 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4375);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4374))->
							BgL_occurrencesz00) = ((int) (int) (((long) 0))), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4383;

					{
						obj_t BgL_auxz00_4384;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4385;

							BgL_tmpz00_4385 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4384 = BGL_OBJECT_WIDENING(BgL_tmpz00_4385);
						}
						BgL_auxz00_4383 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4384);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4383))->
							BgL_interferez00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4391;

					{
						obj_t BgL_auxz00_4392;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4393;

							BgL_tmpz00_4393 =
								((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_new1161z00_3333));
							BgL_auxz00_4392 = BGL_OBJECT_WIDENING(BgL_tmpz00_4393);
						}
						BgL_auxz00_4391 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4392);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4391))->
							BgL_interfere2z00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_4323 = ((BgL_rtl_regz00_bglt) BgL_new1161z00_3333);
				return ((obj_t) BgL_auxz00_4323);
			}
		}

	}



/* &lambda1810 */
	BgL_rtl_regz00_bglt BGl_z62lambda1810z62zzsaw_regsetz00(obj_t BgL_envz00_3334,
		obj_t BgL_o1158z00_3335)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				BgL_rtl_regzf2razf2_bglt BgL_wide1160z00_3469;

				BgL_wide1160z00_3469 =
					((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_regzf2razf2_bgl))));
				{	/* SawMill/regset.scm 30 */
					obj_t BgL_auxz00_4406;
					BgL_objectz00_bglt BgL_tmpz00_4402;

					BgL_auxz00_4406 = ((obj_t) BgL_wide1160z00_3469);
					BgL_tmpz00_4402 =
						((BgL_objectz00_bglt)
						((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3335)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4402, BgL_auxz00_4406);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3335)));
				{	/* SawMill/regset.scm 30 */
					long BgL_arg1811z00_3470;

					{	/* SawMill/regset.scm 30 */
						long BgL_res2124z00_3471;

						BgL_res2124z00_3471 =
							BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
						BgL_arg1811z00_3470 = BgL_res2124z00_3471;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_regz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_o1158z00_3335))),
						BgL_arg1811z00_3470);
				}
				return
					((BgL_rtl_regz00_bglt)
					((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_o1158z00_3335)));
			}
		}

	}



/* &lambda1802 */
	BgL_rtl_regz00_bglt BGl_z62lambda1802z62zzsaw_regsetz00(obj_t BgL_envz00_3336,
		obj_t BgL_type1146z00_3337, obj_t BgL_var1147z00_3338,
		obj_t BgL_onexprzf31148zf3_3339, obj_t BgL_name1149z00_3340,
		obj_t BgL_key1150z00_3341, obj_t BgL_hardware1151z00_3342,
		obj_t BgL_num1152z00_3343, obj_t BgL_color1153z00_3344,
		obj_t BgL_coalesce1154z00_3345, obj_t BgL_occurrences1155z00_3346,
		obj_t BgL_interfere1156z00_3347, obj_t BgL_interfere21157z00_3348)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				int BgL_num1152z00_3473;
				int BgL_occurrences1155z00_3474;

				BgL_num1152z00_3473 = CINT(BgL_num1152z00_3343);
				BgL_occurrences1155z00_3474 = CINT(BgL_occurrences1155z00_3346);
				{	/* SawMill/regset.scm 30 */
					BgL_rtl_regz00_bglt BgL_new1194z00_3475;

					{	/* SawMill/regset.scm 30 */
						BgL_rtl_regz00_bglt BgL_tmp1192z00_3476;
						BgL_rtl_regzf2razf2_bglt BgL_wide1193z00_3477;

						{
							BgL_rtl_regz00_bglt BgL_auxz00_4422;

							{	/* SawMill/regset.scm 30 */
								BgL_rtl_regz00_bglt BgL_new1191z00_3478;

								BgL_new1191z00_3478 =
									((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_regz00_bgl))));
								{	/* SawMill/regset.scm 30 */
									long BgL_arg1809z00_3479;

									{	/* SawMill/regset.scm 30 */
										long BgL_res2122z00_3480;

										BgL_res2122z00_3480 =
											BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
										BgL_arg1809z00_3479 = BgL_res2122z00_3480;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1191z00_3478),
										BgL_arg1809z00_3479);
								}
								{	/* SawMill/regset.scm 30 */
									BgL_objectz00_bglt BgL_tmpz00_4427;

									BgL_tmpz00_4427 = ((BgL_objectz00_bglt) BgL_new1191z00_3478);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4427, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1191z00_3478);
								BgL_auxz00_4422 = BgL_new1191z00_3478;
							}
							BgL_tmp1192z00_3476 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4422);
						}
						BgL_wide1193z00_3477 =
							((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_regzf2razf2_bgl))));
						{	/* SawMill/regset.scm 30 */
							obj_t BgL_auxz00_4435;
							BgL_objectz00_bglt BgL_tmpz00_4433;

							BgL_auxz00_4435 = ((obj_t) BgL_wide1193z00_3477);
							BgL_tmpz00_4433 = ((BgL_objectz00_bglt) BgL_tmp1192z00_3476);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4433, BgL_auxz00_4435);
						}
						((BgL_objectz00_bglt) BgL_tmp1192z00_3476);
						{	/* SawMill/regset.scm 30 */
							long BgL_arg1808z00_3481;

							{	/* SawMill/regset.scm 30 */
								long BgL_res2123z00_3482;

								BgL_res2123z00_3482 =
									BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
								BgL_arg1808z00_3481 = BgL_res2123z00_3482;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1192z00_3476),
								BgL_arg1808z00_3481);
						}
						BgL_new1194z00_3475 = ((BgL_rtl_regz00_bglt) BgL_tmp1192z00_3476);
					}
					((((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt) BgL_new1194z00_3475)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1146z00_3337)),
						BUNSPEC);
					((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_new1194z00_3475)))->BgL_varz00) =
						((obj_t) BgL_var1147z00_3338), BUNSPEC);
					((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_new1194z00_3475)))->BgL_onexprzf3zf3) =
						((obj_t) BgL_onexprzf31148zf3_3339), BUNSPEC);
					((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_new1194z00_3475)))->BgL_namez00) =
						((obj_t) BgL_name1149z00_3340), BUNSPEC);
					((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_new1194z00_3475)))->BgL_keyz00) =
						((obj_t) BgL_key1150z00_3341), BUNSPEC);
					((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
										BgL_new1194z00_3475)))->BgL_hardwarez00) =
						((obj_t) BgL_hardware1151z00_3342), BUNSPEC);
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4456;

						{
							obj_t BgL_auxz00_4457;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4458;

								BgL_tmpz00_4458 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4457 = BGL_OBJECT_WIDENING(BgL_tmpz00_4458);
							}
							BgL_auxz00_4456 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4457);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4456))->
								BgL_numz00) = ((int) BgL_num1152z00_3473), BUNSPEC);
					}
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4463;

						{
							obj_t BgL_auxz00_4464;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4465;

								BgL_tmpz00_4465 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4464 = BGL_OBJECT_WIDENING(BgL_tmpz00_4465);
							}
							BgL_auxz00_4463 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4464);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4463))->
								BgL_colorz00) = ((obj_t) BgL_color1153z00_3344), BUNSPEC);
					}
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4470;

						{
							obj_t BgL_auxz00_4471;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4472;

								BgL_tmpz00_4472 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4471 = BGL_OBJECT_WIDENING(BgL_tmpz00_4472);
							}
							BgL_auxz00_4470 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4471);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4470))->
								BgL_coalescez00) = ((obj_t) BgL_coalesce1154z00_3345), BUNSPEC);
					}
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4477;

						{
							obj_t BgL_auxz00_4478;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4479;

								BgL_tmpz00_4479 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4478 = BGL_OBJECT_WIDENING(BgL_tmpz00_4479);
							}
							BgL_auxz00_4477 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4478);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4477))->
								BgL_occurrencesz00) =
							((int) BgL_occurrences1155z00_3474), BUNSPEC);
					}
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4484;

						{
							obj_t BgL_auxz00_4485;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4486;

								BgL_tmpz00_4486 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4485 = BGL_OBJECT_WIDENING(BgL_tmpz00_4486);
							}
							BgL_auxz00_4484 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4485);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4484))->
								BgL_interferez00) =
							((obj_t) BgL_interfere1156z00_3347), BUNSPEC);
					}
					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_4491;

						{
							obj_t BgL_auxz00_4492;

							{	/* SawMill/regset.scm 30 */
								BgL_objectz00_bglt BgL_tmpz00_4493;

								BgL_tmpz00_4493 = ((BgL_objectz00_bglt) BgL_new1194z00_3475);
								BgL_auxz00_4492 = BGL_OBJECT_WIDENING(BgL_tmpz00_4493);
							}
							BgL_auxz00_4491 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4492);
						}
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4491))->
								BgL_interfere2z00) =
							((obj_t) BgL_interfere21157z00_3348), BUNSPEC);
					}
					return BgL_new1194z00_3475;
				}
			}
		}

	}



/* &<@anonymous:1868> */
	obj_t BGl_z62zc3z04anonymousza31868ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3349)
	{
		{	/* SawMill/regset.scm 30 */
			return BUNSPEC;
		}

	}



/* &lambda1867 */
	obj_t BGl_z62lambda1867z62zzsaw_regsetz00(obj_t BgL_envz00_3350,
		obj_t BgL_oz00_3351, obj_t BgL_vz00_3352)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4498;

				{
					obj_t BgL_auxz00_4499;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4500;

						BgL_tmpz00_4500 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3351));
						BgL_auxz00_4499 = BGL_OBJECT_WIDENING(BgL_tmpz00_4500);
					}
					BgL_auxz00_4498 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4499);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4498))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_3352), BUNSPEC);
			}
		}

	}



/* &lambda1866 */
	obj_t BGl_z62lambda1866z62zzsaw_regsetz00(obj_t BgL_envz00_3353,
		obj_t BgL_oz00_3354)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4506;

				{
					obj_t BgL_auxz00_4507;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4508;

						BgL_tmpz00_4508 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3354));
						BgL_auxz00_4507 = BGL_OBJECT_WIDENING(BgL_tmpz00_4508);
					}
					BgL_auxz00_4506 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4507);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4506))->
					BgL_interfere2z00);
			}
		}

	}



/* &<@anonymous:1859> */
	obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3355)
	{
		{	/* SawMill/regset.scm 30 */
			return BUNSPEC;
		}

	}



/* &lambda1858 */
	obj_t BGl_z62lambda1858z62zzsaw_regsetz00(obj_t BgL_envz00_3356,
		obj_t BgL_oz00_3357, obj_t BgL_vz00_3358)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4514;

				{
					obj_t BgL_auxz00_4515;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4516;

						BgL_tmpz00_4516 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3357));
						BgL_auxz00_4515 = BGL_OBJECT_WIDENING(BgL_tmpz00_4516);
					}
					BgL_auxz00_4514 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4515);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4514))->
						BgL_interferez00) = ((obj_t) BgL_vz00_3358), BUNSPEC);
			}
		}

	}



/* &lambda1857 */
	obj_t BGl_z62lambda1857z62zzsaw_regsetz00(obj_t BgL_envz00_3359,
		obj_t BgL_oz00_3360)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4522;

				{
					obj_t BgL_auxz00_4523;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4524;

						BgL_tmpz00_4524 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3360));
						BgL_auxz00_4523 = BGL_OBJECT_WIDENING(BgL_tmpz00_4524);
					}
					BgL_auxz00_4522 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4523);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4522))->
					BgL_interferez00);
			}
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3361)
	{
		{	/* SawMill/regset.scm 30 */
			return BINT(((long) 0));
		}

	}



/* &lambda1850 */
	obj_t BGl_z62lambda1850z62zzsaw_regsetz00(obj_t BgL_envz00_3362,
		obj_t BgL_oz00_3363, obj_t BgL_vz00_3364)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				int BgL_vz00_3488;

				BgL_vz00_3488 = CINT(BgL_vz00_3364);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4532;

					{
						obj_t BgL_auxz00_4533;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4534;

							BgL_tmpz00_4534 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3363));
							BgL_auxz00_4533 = BGL_OBJECT_WIDENING(BgL_tmpz00_4534);
						}
						BgL_auxz00_4532 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4533);
					}
					return
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4532))->
							BgL_occurrencesz00) = ((int) BgL_vz00_3488), BUNSPEC);
		}}}

	}



/* &lambda1849 */
	obj_t BGl_z62lambda1849z62zzsaw_regsetz00(obj_t BgL_envz00_3365,
		obj_t BgL_oz00_3366)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				int BgL_tmpz00_4540;

				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4541;

					{
						obj_t BgL_auxz00_4542;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4543;

							BgL_tmpz00_4543 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3366));
							BgL_auxz00_4542 = BGL_OBJECT_WIDENING(BgL_tmpz00_4543);
						}
						BgL_auxz00_4541 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4542);
					}
					BgL_tmpz00_4540 =
						(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4541))->
						BgL_occurrencesz00);
				}
				return BINT(BgL_tmpz00_4540);
			}
		}

	}



/* &<@anonymous:1843> */
	obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3367)
	{
		{	/* SawMill/regset.scm 30 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1842 */
	obj_t BGl_z62lambda1842z62zzsaw_regsetz00(obj_t BgL_envz00_3368,
		obj_t BgL_oz00_3369, obj_t BgL_vz00_3370)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4551;

				{
					obj_t BgL_auxz00_4552;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4553;

						BgL_tmpz00_4553 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3369));
						BgL_auxz00_4552 = BGL_OBJECT_WIDENING(BgL_tmpz00_4553);
					}
					BgL_auxz00_4551 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4552);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4551))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_3370), BUNSPEC);
			}
		}

	}



/* &lambda1841 */
	obj_t BGl_z62lambda1841z62zzsaw_regsetz00(obj_t BgL_envz00_3371,
		obj_t BgL_oz00_3372)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4559;

				{
					obj_t BgL_auxz00_4560;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4561;

						BgL_tmpz00_4561 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3372));
						BgL_auxz00_4560 = BGL_OBJECT_WIDENING(BgL_tmpz00_4561);
					}
					BgL_auxz00_4559 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4560);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4559))->
					BgL_coalescez00);
			}
		}

	}



/* &<@anonymous:1834> */
	obj_t BGl_z62zc3z04anonymousza31834ze3ze5zzsaw_regsetz00(obj_t
		BgL_envz00_3373)
	{
		{	/* SawMill/regset.scm 30 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1833 */
	obj_t BGl_z62lambda1833z62zzsaw_regsetz00(obj_t BgL_envz00_3374,
		obj_t BgL_oz00_3375, obj_t BgL_vz00_3376)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4568;

				{
					obj_t BgL_auxz00_4569;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4570;

						BgL_tmpz00_4570 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3375));
						BgL_auxz00_4569 = BGL_OBJECT_WIDENING(BgL_tmpz00_4570);
					}
					BgL_auxz00_4568 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4569);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4568))->
						BgL_colorz00) = ((obj_t) BgL_vz00_3376), BUNSPEC);
			}
		}

	}



/* &lambda1832 */
	obj_t BGl_z62lambda1832z62zzsaw_regsetz00(obj_t BgL_envz00_3377,
		obj_t BgL_oz00_3378)
	{
		{	/* SawMill/regset.scm 30 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4576;

				{
					obj_t BgL_auxz00_4577;

					{	/* SawMill/regset.scm 30 */
						BgL_objectz00_bglt BgL_tmpz00_4578;

						BgL_tmpz00_4578 =
							((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3378));
						BgL_auxz00_4577 = BGL_OBJECT_WIDENING(BgL_tmpz00_4578);
					}
					BgL_auxz00_4576 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4577);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4576))->BgL_colorz00);
			}
		}

	}



/* &lambda1827 */
	obj_t BGl_z62lambda1827z62zzsaw_regsetz00(obj_t BgL_envz00_3379,
		obj_t BgL_oz00_3380, obj_t BgL_vz00_3381)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				int BgL_vz00_3495;

				BgL_vz00_3495 = CINT(BgL_vz00_3381);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4585;

					{
						obj_t BgL_auxz00_4586;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4587;

							BgL_tmpz00_4587 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3380));
							BgL_auxz00_4586 = BGL_OBJECT_WIDENING(BgL_tmpz00_4587);
						}
						BgL_auxz00_4585 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4586);
					}
					return
						((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4585))->
							BgL_numz00) = ((int) BgL_vz00_3495), BUNSPEC);
		}}}

	}



/* &lambda1826 */
	obj_t BGl_z62lambda1826z62zzsaw_regsetz00(obj_t BgL_envz00_3382,
		obj_t BgL_oz00_3383)
	{
		{	/* SawMill/regset.scm 30 */
			{	/* SawMill/regset.scm 30 */
				int BgL_tmpz00_4593;

				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4594;

					{
						obj_t BgL_auxz00_4595;

						{	/* SawMill/regset.scm 30 */
							BgL_objectz00_bglt BgL_tmpz00_4596;

							BgL_tmpz00_4596 =
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_3383));
							BgL_auxz00_4595 = BGL_OBJECT_WIDENING(BgL_tmpz00_4596);
						}
						BgL_auxz00_4594 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4595);
					}
					BgL_tmpz00_4593 =
						(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4594))->BgL_numz00);
				}
				return BINT(BgL_tmpz00_4593);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_rtl_regzf2razf2zzsaw_regsetz00,
				BGl_proc2178z00zzsaw_regsetz00, BGl_string2179z00zzsaw_regsetz00);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00, BGl_rtl_regzf2razf2zzsaw_regsetz00,
				BGl_proc2180z00zzsaw_regsetz00, BGl_string2181z00zzsaw_regsetz00);
		}

	}



/* &dump-rtl_reg/ra1464 */
	obj_t BGl_z62dumpzd2rtl_regzf2ra1464z42zzsaw_regsetz00(obj_t BgL_envz00_3388,
		obj_t BgL_oz00_3389, obj_t BgL_pz00_3390, obj_t BgL_mz00_3391)
	{
		{	/* SawMill/regset.scm 293 */
			{	/* SawMill/regset.scm 294 */
				obj_t BgL_arg1923z00_3498;

				BgL_arg1923z00_3498 =
					BGl_shapez00zztools_shapez00(
					((obj_t) ((BgL_rtl_regz00_bglt) BgL_oz00_3389)));
				return bgl_display_obj(BgL_arg1923z00_3498, BgL_pz00_3390);
			}
		}

	}



/* &shape-rtl_reg/ra1462 */
	obj_t BGl_z62shapezd2rtl_regzf2ra1462z42zzsaw_regsetz00(obj_t BgL_envz00_3392,
		obj_t BgL_oz00_3393)
	{
		{	/* SawMill/regset.scm 273 */
			{

				{	/* SawMill/regset.scm 275 */
					obj_t BgL_sz00_3502;

					{	/* SawMill/regset.scm 273 */
						obj_t BgL_nextzd2method1461zd2_3501;

						BgL_nextzd2method1461zd2_3501 =
							BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
							((BgL_objectz00_bglt)
								((BgL_rtl_regz00_bglt) BgL_oz00_3393)),
							BGl_shapezd2envzd2zztools_shapez00,
							BGl_rtl_regzf2razf2zzsaw_regsetz00);
						BgL_sz00_3502 =
							PROCEDURE_ENTRY(BgL_nextzd2method1461zd2_3501)
							(BgL_nextzd2method1461zd2_3501,
							((obj_t) ((BgL_rtl_regz00_bglt) BgL_oz00_3393)), BEOA);
					}
					{	/* SawMill/regset.scm 276 */
						obj_t BgL_pz00_3503;

						{	/* SawMill/regset.scm 276 */

							{	/* SawMill/regset.scm 276 */

								BgL_pz00_3503 =
									BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(BTRUE);
							}
						}
						{	/* SawMill/regset.scm 278 */
							bool_t BgL_test2314z00_4619;

							{	/* SawMill/regset.scm 278 */
								obj_t BgL_arg1921z00_3504;

								{
									BgL_rtl_regzf2razf2_bglt BgL_auxz00_4620;

									{
										obj_t BgL_auxz00_4621;

										{	/* SawMill/regset.scm 278 */
											BgL_objectz00_bglt BgL_tmpz00_4622;

											BgL_tmpz00_4622 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_oz00_3393));
											BgL_auxz00_4621 = BGL_OBJECT_WIDENING(BgL_tmpz00_4622);
										}
										BgL_auxz00_4620 =
											((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4621);
									}
									BgL_arg1921z00_3504 =
										(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4620))->
										BgL_colorz00);
								}
								BgL_test2314z00_4619 = INTEGERP(BgL_arg1921z00_3504);
							}
							if (BgL_test2314z00_4619)
								{	/* SawMill/regset.scm 278 */
									bgl_display_obj(BgL_sz00_3502, BgL_pz00_3503);
									bgl_display_string(BGl_string2182z00zzsaw_regsetz00,
										BgL_pz00_3503);
									{	/* SawMill/regset.scm 281 */
										obj_t BgL_arg1915z00_3505;

										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_4631;

											{
												obj_t BgL_auxz00_4632;

												{	/* SawMill/regset.scm 281 */
													BgL_objectz00_bglt BgL_tmpz00_4633;

													BgL_tmpz00_4633 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_oz00_3393));
													BgL_auxz00_4632 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4633);
												}
												BgL_auxz00_4631 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4632);
											}
											BgL_arg1915z00_3505 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4631))->
												BgL_colorz00);
										}
										bgl_display_obj(BgL_arg1915z00_3505, BgL_pz00_3503);
									}
								}
							else
								{	/* SawMill/regset.scm 282 */
									bool_t BgL_test2315z00_4640;

									{	/* SawMill/regset.scm 282 */
										obj_t BgL_arg1920z00_3506;

										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_4641;

											{
												obj_t BgL_auxz00_4642;

												{	/* SawMill/regset.scm 282 */
													BgL_objectz00_bglt BgL_tmpz00_4643;

													BgL_tmpz00_4643 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_oz00_3393));
													BgL_auxz00_4642 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4643);
												}
												BgL_auxz00_4641 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4642);
											}
											BgL_arg1920z00_3506 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4641))->
												BgL_colorz00);
										}
										BgL_test2315z00_4640 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1920z00_3506,
											BGl_rtl_regz00zzsaw_defsz00);
									}
									if (BgL_test2315z00_4640)
										{	/* SawMill/regset.scm 282 */
											bgl_display_obj(BgL_sz00_3502, BgL_pz00_3503);
											bgl_display_string(BGl_string2183z00zzsaw_regsetz00,
												BgL_pz00_3503);
											{	/* SawMill/regset.scm 285 */
												obj_t BgL_arg1918z00_3507;

												{	/* SawMill/regset.scm 285 */
													obj_t BgL_arg1919z00_3508;

													{
														BgL_rtl_regzf2razf2_bglt BgL_auxz00_4652;

														{
															obj_t BgL_auxz00_4653;

															{	/* SawMill/regset.scm 285 */
																BgL_objectz00_bglt BgL_tmpz00_4654;

																BgL_tmpz00_4654 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_oz00_3393));
																BgL_auxz00_4653 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4654);
															}
															BgL_auxz00_4652 =
																((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4653);
														}
														BgL_arg1919z00_3508 =
															(((BgL_rtl_regzf2razf2_bglt)
																COBJECT(BgL_auxz00_4652))->BgL_colorz00);
													}
													BgL_arg1918z00_3507 =
														BGl_shapez00zztools_shapez00(BgL_arg1919z00_3508);
												}
												bgl_display_obj(BgL_arg1918z00_3507, BgL_pz00_3503);
											}
										}
									else
										{	/* SawMill/regset.scm 282 */
											bgl_display_obj(BgL_sz00_3502, BgL_pz00_3503);
										}
								}
						}
						return bgl_close_output_port(BgL_pz00_3503);
					}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_regsetz00()
	{
		{	/* SawMill/regset.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(((long)
					250697389), BSTRING_TO_STRING(BGl_string2184z00zzsaw_regsetz00));
		}

	}

#ifdef __cplusplus
}
#endif
