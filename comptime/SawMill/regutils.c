/*===========================================================================*/
/*   (SawMill/regutils.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/regutils.scm) */
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


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regutilsz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62makezd2rtl_regzf2raz42zzsaw_regutilsz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_regutilsz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62rtl_regzf2razd2nilz42zzsaw_regutilsz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_regutilsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	extern obj_t BGl_regsetz00zzsaw_regsetz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_z62regsetzf3z91zzsaw_regutilsz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_regutilsz00();
	static obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2msiza7ez75zzsaw_regutilsz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t BGl_z62blockzd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_regutilsz00(BgL_regsetz00_bglt, obj_t);
	static long BGl_za2registerzd2countza2zd2zzsaw_regutilsz00;
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t BGl_argszd2collectzd2registersz12ze70zf5zzsaw_regutilsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62collectzd2registersz12za2zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_regutilsz00();
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_regutilsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_regutilsz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62collectzd2registerz12za2zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regutilsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt, obj_t);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_regutilsz00(BgL_regsetz00_bglt, int);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_regutilsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_collectzd2registersz12zc0zzsaw_regutilsz00(obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_regutilsz00(int, int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_regutilsz00(BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_regutilsz00();
	static obj_t BGl_genericzd2initzd2zzsaw_regutilsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static obj_t BGl_z62argszd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t,
		obj_t);
	static BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_regutilsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_regutilsz00();
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_collectzd2registerz12zc0zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2lengthzd2zzsaw_regutilsz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf2razf3z01zzsaw_regutilsz00(obj_t);
	static obj_t BGl_z62inszd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regutilsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_regutilsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt, int);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regutilsz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_regutilsz00(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regutilsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_regutilsz00(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_regutilsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2reglzd2zzsaw_regutilsz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2regvzd2zzsaw_regutilsz00(BgL_regsetz00_bglt);
	static BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_regutilsz00(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regutilsz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71832za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2nilza71833za7,
		BGl_z62regsetzd2nilzb0zzsaw_regutilsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71834za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2regvzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2regv1835z00,
		BGl_z62regsetzd2regvzb0zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2leng1836z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regutilsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71837za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71838za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1831z00zzsaw_regutilsz00,
		BgL_bgl_string1831za700za7za7s1839za7, "saw_regutils", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71840za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_regutilsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71841za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2stri1842z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_regutilsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razf3zd2envzd3zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71843za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71844za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71845za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762makeza7d2regset1846z00,
		BGl_z62makezd2regsetzb0zzsaw_regutilsz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7f3za791za71847z00,
		BGl_z62regsetzf3z91zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71848za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC,
		2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2reglzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2regl1849z00,
		BGl_z62regsetzd2reglzb0zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71850za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71851za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71852za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regutilsz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71853za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71854za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2msiza7ezd2envza7zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2msiza71855za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71856za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1830z00zzsaw_regutilsz00,
		BgL_bgl_za762argsza7d2collec1857z00,
		BGl_z62argszd2collectzd2registersz12z70zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71858za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71859za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71860za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2stringzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2stri1861z00,
		BGl_z62regsetzd2stringzb0zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_collectzd2registersz12zd2envz12zzsaw_regutilsz00,
		BgL_bgl_za762collectza7d2reg1862z00,
		BGl_z62collectzd2registersz12za2zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_collectzd2registerz12zd2envz12zzsaw_regutilsz00,
		BgL_bgl_za762collectza7d2reg1863z00,
		BGl_z62collectzd2registerz12za2zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71864za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regutilsz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762makeza7d2rtl_re1865z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_regutilsz00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2lengthzd2envz00zzsaw_regutilsz00,
		BgL_bgl_za762regsetza7d2leng1866z00,
		BGl_z62regsetzd2lengthzb0zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71867za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regutilsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_regutilsz00,
		BgL_bgl_za762rtl_regza7f2raza71868za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_regutilsz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_regutilsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(long
		BgL_checksumz00_2489, char *BgL_fromz00_2490)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_regutilsz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_regutilsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_regutilsz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_regutilsz00();
					BGl_importedzd2moduleszd2initz00zzsaw_regutilsz00();
					return BGl_toplevelzd2initzd2zzsaw_regutilsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_regutils");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_regutils");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_regutils");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_regutils");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_regutils");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			return (BGl_za2registerzd2countza2zd2zzsaw_regutilsz00 =
				((long) -1), BUNSPEC);
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_regutilsz00(BgL_typez00_bglt
		BgL_type1179z00_3, obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1157z00_2468;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1155z00_2469;
					BgL_rtl_regzf2razf2_bglt BgL_wide1156z00_2470;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_2504;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1154z00_2471;

							BgL_new1154z00_2471 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1448z00_2472;

								{	/* SawMill/regset.sch 55 */
									long BgL_res1821z00_2473;

									BgL_res1821z00_2473 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1448z00_2472 = BgL_res1821z00_2473;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1154z00_2471),
									BgL_arg1448z00_2472);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_2509;

								BgL_tmpz00_2509 = ((BgL_objectz00_bglt) BgL_new1154z00_2471);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2509, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1154z00_2471);
							BgL_auxz00_2504 = BgL_new1154z00_2471;
						}
						BgL_tmp1155z00_2469 = ((BgL_rtl_regz00_bglt) BgL_auxz00_2504);
					}
					BgL_wide1156z00_2470 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_2517;
						BgL_objectz00_bglt BgL_tmpz00_2515;

						BgL_auxz00_2517 = ((obj_t) BgL_wide1156z00_2470);
						BgL_tmpz00_2515 = ((BgL_objectz00_bglt) BgL_tmp1155z00_2469);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2515, BgL_auxz00_2517);
					}
					((BgL_objectz00_bglt) BgL_tmp1155z00_2469);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1442z00_2474;

						{	/* SawMill/regset.sch 55 */
							long BgL_res1822z00_2475;

							BgL_res1822z00_2475 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1442z00_2474 = BgL_res1822z00_2475;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1155z00_2469), BgL_arg1442z00_2474);
					}
					BgL_new1157z00_2468 = ((BgL_rtl_regz00_bglt) BgL_tmp1155z00_2469);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1157z00_2468)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1157z00_2468)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1157z00_2468)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1157z00_2468)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1157z00_2468)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1157z00_2468)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2537;

					{
						obj_t BgL_auxz00_2538;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2539;

							BgL_tmpz00_2539 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2538 = BGL_OBJECT_WIDENING(BgL_tmpz00_2539);
						}
						BgL_auxz00_2537 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2538);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2537))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2544;

					{
						obj_t BgL_auxz00_2545;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2546;

							BgL_tmpz00_2546 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2545 = BGL_OBJECT_WIDENING(BgL_tmpz00_2546);
						}
						BgL_auxz00_2544 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2545);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2544))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2551;

					{
						obj_t BgL_auxz00_2552;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2553;

							BgL_tmpz00_2553 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2552 = BGL_OBJECT_WIDENING(BgL_tmpz00_2553);
						}
						BgL_auxz00_2551 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2552);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2551))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2558;

					{
						obj_t BgL_auxz00_2559;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2560;

							BgL_tmpz00_2560 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2559 = BGL_OBJECT_WIDENING(BgL_tmpz00_2560);
						}
						BgL_auxz00_2558 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2559);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2558))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2565;

					{
						obj_t BgL_auxz00_2566;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2567;

							BgL_tmpz00_2567 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2566 = BGL_OBJECT_WIDENING(BgL_tmpz00_2567);
						}
						BgL_auxz00_2565 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2566);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2565))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_2572;

					{
						obj_t BgL_auxz00_2573;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_2574;

							BgL_tmpz00_2574 = ((BgL_objectz00_bglt) BgL_new1157z00_2468);
							BgL_auxz00_2573 = BGL_OBJECT_WIDENING(BgL_tmpz00_2574);
						}
						BgL_auxz00_2572 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2573);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2572))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1157z00_2468;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_regutilsz00(obj_t
		BgL_envz00_2362, obj_t BgL_type1179z00_2363, obj_t BgL_var1180z00_2364,
		obj_t BgL_onexprzf31181zf3_2365, obj_t BgL_name1182z00_2366,
		obj_t BgL_key1183z00_2367, obj_t BgL_hardware1184z00_2368,
		obj_t BgL_num1185z00_2369, obj_t BgL_color1186z00_2370,
		obj_t BgL_coalesce1187z00_2371, obj_t BgL_occurrences1188z00_2372,
		obj_t BgL_interfere1189z00_2373, obj_t BgL_interfere21190z00_2374)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_regutilsz00(
				((BgL_typez00_bglt) BgL_type1179z00_2363), BgL_var1180z00_2364,
				BgL_onexprzf31181zf3_2365, BgL_name1182z00_2366, BgL_key1183z00_2367,
				BgL_hardware1184z00_2368, CINT(BgL_num1185z00_2369),
				BgL_color1186z00_2370, BgL_coalesce1187z00_2371,
				CINT(BgL_occurrences1188z00_2372), BgL_interfere1189z00_2373,
				BgL_interfere21190z00_2374);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf2razf3z01zzsaw_regutilsz00(obj_t
		BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_regutilsz00(obj_t BgL_envz00_2375,
		obj_t BgL_objz00_2376)
	{
		{	/* SawMill/regset.sch 56 */
			return BBOOL(BGl_rtl_regzf2razf3z01zzsaw_regutilsz00(BgL_objz00_2376));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_regutilsz00()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_2321;

				BgL_classz00_2321 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_2322;

					BgL__ortest_1106z00_2322 = BGL_CLASS_NIL(BgL_classz00_2321);
					if (CBOOL(BgL__ortest_1106z00_2322))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_2322);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2321));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_regutilsz00(obj_t
		BgL_envz00_2377)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_regutilsz00();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2593;

				{
					obj_t BgL_auxz00_2594;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_2595;

						BgL_tmpz00_2595 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_2594 = BGL_OBJECT_WIDENING(BgL_tmpz00_2595);
					}
					BgL_auxz00_2593 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2594);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2593))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_regutilsz00(obj_t
		BgL_envz00_2378, obj_t BgL_oz00_2379)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2379));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2602;

				{
					obj_t BgL_auxz00_2603;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_2604;

						BgL_tmpz00_2604 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_2603 = BGL_OBJECT_WIDENING(BgL_tmpz00_2604);
					}
					BgL_auxz00_2602 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2603);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2602))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2380, obj_t BgL_oz00_2381, obj_t BgL_vz00_2382)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2381), BgL_vz00_2382);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2611;

				{
					obj_t BgL_auxz00_2612;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_2613;

						BgL_tmpz00_2613 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_2612 = BGL_OBJECT_WIDENING(BgL_tmpz00_2613);
					}
					BgL_auxz00_2611 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2612);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2611))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_regutilsz00(obj_t
		BgL_envz00_2383, obj_t BgL_oz00_2384)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2384));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2620;

				{
					obj_t BgL_auxz00_2621;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_2622;

						BgL_tmpz00_2622 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_2621 = BGL_OBJECT_WIDENING(BgL_tmpz00_2622);
					}
					BgL_auxz00_2620 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2621);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2620))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2385, obj_t BgL_oz00_2386, obj_t BgL_vz00_2387)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2386), BgL_vz00_2387);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2629;

				{
					obj_t BgL_auxz00_2630;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_2631;

						BgL_tmpz00_2631 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_2630 = BGL_OBJECT_WIDENING(BgL_tmpz00_2631);
					}
					BgL_auxz00_2629 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2630);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2629))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_regutilsz00(obj_t
		BgL_envz00_2388, obj_t BgL_oz00_2389)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_regutilsz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_2389)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2639;

				{
					obj_t BgL_auxz00_2640;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_2641;

						BgL_tmpz00_2641 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_2640 = BGL_OBJECT_WIDENING(BgL_tmpz00_2641);
					}
					BgL_auxz00_2639 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2640);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2639))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2390, obj_t BgL_oz00_2391, obj_t BgL_vz00_2392)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2391), CINT(BgL_vz00_2392));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2649;

				{
					obj_t BgL_auxz00_2650;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_2651;

						BgL_tmpz00_2651 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_2650 = BGL_OBJECT_WIDENING(BgL_tmpz00_2651);
					}
					BgL_auxz00_2649 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2650);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2649))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_regutilsz00(obj_t
		BgL_envz00_2393, obj_t BgL_oz00_2394)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2394));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2658;

				{
					obj_t BgL_auxz00_2659;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_2660;

						BgL_tmpz00_2660 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_2659 = BGL_OBJECT_WIDENING(BgL_tmpz00_2660);
					}
					BgL_auxz00_2658 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2659);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2658))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2395, obj_t BgL_oz00_2396, obj_t BgL_vz00_2397)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2396), BgL_vz00_2397);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2667;

				{
					obj_t BgL_auxz00_2668;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_2669;

						BgL_tmpz00_2669 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_2668 = BGL_OBJECT_WIDENING(BgL_tmpz00_2669);
					}
					BgL_auxz00_2667 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2668);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2667))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_regutilsz00(obj_t BgL_envz00_2398,
		obj_t BgL_oz00_2399)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2399));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2676;

				{
					obj_t BgL_auxz00_2677;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_2678;

						BgL_tmpz00_2678 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_2677 = BGL_OBJECT_WIDENING(BgL_tmpz00_2678);
					}
					BgL_auxz00_2676 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2677);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2676))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2400, obj_t BgL_oz00_2401, obj_t BgL_vz00_2402)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2401), BgL_vz00_2402);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2numz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_2685;

				{
					obj_t BgL_auxz00_2686;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_2687;

						BgL_tmpz00_2687 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_2686 = BGL_OBJECT_WIDENING(BgL_tmpz00_2687);
					}
					BgL_auxz00_2685 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2686);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2685))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_regutilsz00(obj_t BgL_envz00_2403,
		obj_t BgL_oz00_2404)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_regutilsz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_2404)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_regutilsz00(obj_t
		BgL_envz00_2405, obj_t BgL_oz00_2406)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2406));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_regutilsz00(obj_t BgL_envz00_2407,
		obj_t BgL_oz00_2408)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2408));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_regutilsz00(obj_t BgL_envz00_2409,
		obj_t BgL_oz00_2410)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2410));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_regutilsz00(obj_t
		BgL_envz00_2411, obj_t BgL_oz00_2412)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2412));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regutilsz00
		(BgL_rtl_regz00_bglt BgL_oz00_44, obj_t BgL_vz00_45)
	{
		{	/* SawMill/regset.sch 77 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_44)))->BgL_onexprzf3zf3) =
				((obj_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &rtl_reg/ra-onexpr?-set! */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_regutilsz00(obj_t
		BgL_envz00_2413, obj_t BgL_oz00_2414, obj_t BgL_vz00_2415)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2414), BgL_vz00_2415);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_regutilsz00(BgL_rtl_regz00_bglt BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_regutilsz00(obj_t BgL_envz00_2416,
		obj_t BgL_oz00_2417)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2417));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2418, obj_t BgL_oz00_2419, obj_t BgL_vz00_2420)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2419), BgL_vz00_2420);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_regutilsz00(BgL_rtl_regz00_bglt BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_regutilsz00(obj_t
		BgL_envz00_2421, obj_t BgL_oz00_2422)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2422));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regutilsz00(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_regutilsz00(obj_t
		BgL_envz00_2423, obj_t BgL_oz00_2424, obj_t BgL_vz00_2425)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2424),
				((BgL_typez00_bglt) BgL_vz00_2425));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_regutilsz00(int
		BgL_length1172z00_52, int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1159z00_2476;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1158z00_2477;

					BgL_new1158z00_2477 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1449z00_2478;

						{	/* SawMill/regset.sch 84 */
							long BgL_res1823z00_2479;

							BgL_res1823z00_2479 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1449z00_2478 = BgL_res1823z00_2479;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1158z00_2477), BgL_arg1449z00_2478);
					}
					BgL_new1159z00_2476 = BgL_new1158z00_2477;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1159z00_2476))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1159z00_2476))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1159z00_2476))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1159z00_2476))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1159z00_2476))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1159z00_2476;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_regutilsz00(obj_t
		BgL_envz00_2426, obj_t BgL_length1172z00_2427,
		obj_t BgL_msiza7e1173za7_2428, obj_t BgL_regv1174z00_2429,
		obj_t BgL_regl1175z00_2430, obj_t BgL_string1176z00_2431)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_regutilsz00(CINT(BgL_length1172z00_2427),
				CINT(BgL_msiza7e1173za7_2428), BgL_regv1174z00_2429,
				BgL_regl1175z00_2430, BgL_string1176z00_2431);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_regutilsz00(obj_t BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_regutilsz00(obj_t BgL_envz00_2432,
		obj_t BgL_objz00_2433)
	{
		{	/* SawMill/regset.sch 85 */
			return BBOOL(BGl_regsetzf3zf3zzsaw_regutilsz00(BgL_objz00_2433));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_regutilsz00()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_2341;

				BgL_classz00_2341 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_2342;

					BgL__ortest_1106z00_2342 = BGL_CLASS_NIL(BgL_classz00_2341);
					if (CBOOL(BgL__ortest_1106z00_2342))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_2342);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2341));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_regutilsz00(obj_t
		BgL_envz00_2434)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_regutilsz00();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2zzsaw_regutilsz00(BgL_regsetz00_bglt BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_regutilsz00(obj_t BgL_envz00_2435,
		obj_t BgL_oz00_2436)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_regutilsz00(
				((BgL_regsetz00_bglt) BgL_oz00_2436));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_regutilsz00(BgL_regsetz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_regutilsz00(obj_t
		BgL_envz00_2437, obj_t BgL_oz00_2438, obj_t BgL_vz00_2439)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_regutilsz00(
				((BgL_regsetz00_bglt) BgL_oz00_2438), BgL_vz00_2439);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2reglzd2zzsaw_regutilsz00(BgL_regsetz00_bglt BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_regutilsz00(obj_t BgL_envz00_2440,
		obj_t BgL_oz00_2441)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_regutilsz00(
				((BgL_regsetz00_bglt) BgL_oz00_2441));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2regvzd2zzsaw_regutilsz00(BgL_regsetz00_bglt BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_regutilsz00(obj_t BgL_envz00_2442,
		obj_t BgL_oz00_2443)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_regutilsz00(
				((BgL_regsetz00_bglt) BgL_oz00_2443));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2msiza7ez75zzsaw_regutilsz00(BgL_regsetz00_bglt BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_regutilsz00(obj_t BgL_envz00_2444,
		obj_t BgL_oz00_2445)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_regutilsz00(
					((BgL_regsetz00_bglt) BgL_oz00_2445)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2lengthzd2zzsaw_regutilsz00(BgL_regsetz00_bglt BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_regutilsz00(obj_t BgL_envz00_2446,
		obj_t BgL_oz00_2447)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_regutilsz00(
					((BgL_regsetz00_bglt) BgL_oz00_2447)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_regutilsz00(BgL_regsetz00_bglt
		BgL_oz00_71, int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_regutilsz00(obj_t
		BgL_envz00_2448, obj_t BgL_oz00_2449, obj_t BgL_vz00_2450)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_regutilsz00(
				((BgL_regsetz00_bglt) BgL_oz00_2449), CINT(BgL_vz00_2450));
		}

	}



/* collect-register! */
	BGL_EXPORTED_DEF obj_t
		BGl_collectzd2registerz12zc0zzsaw_regutilsz00(BgL_rtl_regz00_bglt
		BgL_oz00_73)
	{
		{	/* SawMill/regutils.scm 39 */
			{	/* SawMill/regutils.scm 40 */
				bool_t BgL_test1872z00_2778;

				{	/* SawMill/regutils.scm 40 */
					bool_t BgL_test1873z00_2779;

					{	/* SawMill/regutils.scm 40 */
						bool_t BgL_res1824z00_2343;

						BgL_res1824z00_2343 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_oz00_73), BGl_rtl_regzf2razf2zzsaw_regsetz00);
						BgL_test1873z00_2779 = BgL_res1824z00_2343;
					}
					if (BgL_test1873z00_2779)
						{	/* SawMill/regutils.scm 40 */
							BgL_test1872z00_2778 = ((bool_t) 1);
						}
					else
						{	/* SawMill/regutils.scm 40 */
							BgL_test1872z00_2778 =
								CBOOL(
								(((BgL_rtl_regz00_bglt) COBJECT(BgL_oz00_73))->
									BgL_onexprzf3zf3));
						}
				}
				if (BgL_test1872z00_2778)
					{	/* SawMill/regutils.scm 40 */
						return BNIL;
					}
				else
					{	/* SawMill/regutils.scm 40 */
						BGl_za2registerzd2countza2zd2zzsaw_regutilsz00 =
							(((long) 1) + BGl_za2registerzd2countza2zd2zzsaw_regutilsz00);
						{	/* SawMill/regutils.scm 44 */
							BgL_rtl_regz00_bglt BgL_arg1461z00_1913;

							{	/* SawMill/regutils.scm 44 */
								BgL_rtl_regzf2razf2_bglt BgL_wide1162z00_1917;

								BgL_wide1162z00_1917 =
									((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_regzf2razf2_bgl))));
								{	/* SawMill/regutils.scm 44 */
									obj_t BgL_auxz00_2789;
									BgL_objectz00_bglt BgL_tmpz00_2786;

									BgL_auxz00_2789 = ((obj_t) BgL_wide1162z00_1917);
									BgL_tmpz00_2786 =
										((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_73));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2786, BgL_auxz00_2789);
								}
								((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_73));
								{	/* SawMill/regutils.scm 44 */
									long BgL_arg1464z00_1918;

									{	/* SawMill/regutils.scm 44 */
										long BgL_res1826z00_2349;

										BgL_res1826z00_2349 =
											BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
										BgL_arg1464z00_1918 = BgL_res1826z00_2349;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73)),
										BgL_arg1464z00_1918);
								}
								((BgL_rtl_regz00_bglt) ((BgL_rtl_regz00_bglt) BgL_oz00_73));
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2800;

								{
									obj_t BgL_auxz00_2801;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2802;

										BgL_tmpz00_2802 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2801 = BGL_OBJECT_WIDENING(BgL_tmpz00_2802);
									}
									BgL_auxz00_2800 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2801);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2800))->
										BgL_numz00) =
									((int) (int)
										(BGl_za2registerzd2countza2zd2zzsaw_regutilsz00)), BUNSPEC);
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2809;

								{
									obj_t BgL_auxz00_2810;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2811;

										BgL_tmpz00_2811 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2810 = BGL_OBJECT_WIDENING(BgL_tmpz00_2811);
									}
									BgL_auxz00_2809 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2810);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2809))->
										BgL_colorz00) = ((obj_t) BFALSE), BUNSPEC);
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2817;

								{
									obj_t BgL_auxz00_2818;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2819;

										BgL_tmpz00_2819 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2818 = BGL_OBJECT_WIDENING(BgL_tmpz00_2819);
									}
									BgL_auxz00_2817 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2818);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2817))->
										BgL_coalescez00) = ((obj_t) BFALSE), BUNSPEC);
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2825;

								{
									obj_t BgL_auxz00_2826;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2827;

										BgL_tmpz00_2827 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2826 = BGL_OBJECT_WIDENING(BgL_tmpz00_2827);
									}
									BgL_auxz00_2825 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2826);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2825))->
										BgL_occurrencesz00) = ((int) (int) (((long) 0))), BUNSPEC);
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2834;

								{
									obj_t BgL_auxz00_2835;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2836;

										BgL_tmpz00_2836 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2835 = BGL_OBJECT_WIDENING(BgL_tmpz00_2836);
									}
									BgL_auxz00_2834 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2835);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2834))->
										BgL_interferez00) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_2842;

								{
									obj_t BgL_auxz00_2843;

									{	/* SawMill/regutils.scm 44 */
										BgL_objectz00_bglt BgL_tmpz00_2844;

										BgL_tmpz00_2844 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_oz00_73));
										BgL_auxz00_2843 = BGL_OBJECT_WIDENING(BgL_tmpz00_2844);
									}
									BgL_auxz00_2842 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_2843);
								}
								((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_2842))->
										BgL_interfere2z00) = ((obj_t) BUNSPEC), BUNSPEC);
							}
							BgL_arg1461z00_1913 = ((BgL_rtl_regz00_bglt) BgL_oz00_73);
							{	/* SawMill/regutils.scm 44 */
								obj_t BgL_list1462z00_1914;

								BgL_list1462z00_1914 =
									MAKE_YOUNG_PAIR(((obj_t) BgL_arg1461z00_1913), BNIL);
								return BgL_list1462z00_1914;
							}
						}
					}
			}
		}

	}



/* &collect-register! */
	obj_t BGl_z62collectzd2registerz12za2zzsaw_regutilsz00(obj_t BgL_envz00_2451,
		obj_t BgL_oz00_2452)
	{
		{	/* SawMill/regutils.scm 39 */
			return
				BGl_collectzd2registerz12zc0zzsaw_regutilsz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_2452));
		}

	}



/* collect-registers! */
	BGL_EXPORTED_DEF obj_t BGl_collectzd2registersz12zc0zzsaw_regutilsz00(obj_t
		BgL_oz00_74)
	{
		{	/* SawMill/regutils.scm 56 */
			{	/* SawMill/regutils.scm 60 */
				obj_t BgL_blockzd2collectzd2registersz12z12_2455;
				obj_t BgL_inszd2collectzd2registersz12z12_2454;

				BgL_blockzd2collectzd2registersz12z12_2455 =
					MAKE_FX_PROCEDURE
					(BGl_z62blockzd2collectzd2registersz12z70zzsaw_regutilsz00,
					(int) (((long) 1)), (int) (((long) 2)));
				BgL_inszd2collectzd2registersz12z12_2454 =
					MAKE_FX_PROCEDURE
					(BGl_z62inszd2collectzd2registersz12z70zzsaw_regutilsz00,
					(int) (((long) 1)), (int) (((long) 1)));
				PROCEDURE_SET(BgL_blockzd2collectzd2registersz12z12_2455,
					(int) (((long) 0)), BGl_proc1830z00zzsaw_regutilsz00);
				PROCEDURE_SET(BgL_blockzd2collectzd2registersz12z12_2455,
					(int) (((long) 1)), BgL_inszd2collectzd2registersz12z12_2454);
				PROCEDURE_SET(BgL_inszd2collectzd2registersz12z12_2454,
					(int) (((long) 0)), BGl_proc1830z00zzsaw_regutilsz00);
				BGl_za2registerzd2countza2zd2zzsaw_regutilsz00 = ((long) -1);
				{	/* SawMill/regutils.scm 78 */
					obj_t BgL_list1465z00_1924;

					BgL_list1465z00_1924 = MAKE_YOUNG_PAIR(BgL_oz00_74, BNIL);
					return
						BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
						(BgL_blockzd2collectzd2registersz12z12_2455, BgL_list1465z00_1924);
				}
			}
		}

	}



/* &collect-registers! */
	obj_t BGl_z62collectzd2registersz12za2zzsaw_regutilsz00(obj_t BgL_envz00_2456,
		obj_t BgL_oz00_2457)
	{
		{	/* SawMill/regutils.scm 56 */
			return BGl_collectzd2registersz12zc0zzsaw_regutilsz00(BgL_oz00_2457);
		}

	}



/* &block-collect-registers! */
	obj_t BGl_z62blockzd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t
		BgL_envz00_2458, obj_t BgL_oz00_2461)
	{
		{	/* SawMill/regutils.scm 75 */
			{	/* SawMill/regutils.scm 75 */
				obj_t BgL_inszd2collectzd2registersz12z12_2460;

				BgL_inszd2collectzd2registersz12z12_2460 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2458, (int) (((long) 1))));
				{	/* SawMill/regutils.scm 75 */
					obj_t BgL_arg1521z00_2480;

					BgL_arg1521z00_2480 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oz00_2461)))->BgL_firstz00);
					{	/* SawMill/regutils.scm 75 */
						obj_t BgL_list1522z00_2481;

						BgL_list1522z00_2481 = MAKE_YOUNG_PAIR(BgL_arg1521z00_2480, BNIL);
						return
							BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
							(BgL_inszd2collectzd2registersz12z12_2460, BgL_list1522z00_2481);
					}
				}
			}
		}

	}



/* &ins-collect-registers! */
	obj_t BGl_z62inszd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t
		BgL_envz00_2462, obj_t BgL_oz00_2464)
	{
		{	/* SawMill/regutils.scm 72 */
			{	/* SawMill/regutils.scm 70 */
				obj_t BgL_argszd2collectzd2registersz12z12_2463;

				BgL_argszd2collectzd2registersz12z12_2463 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2462, (int) (((long) 0))));
				{	/* SawMill/regutils.scm 71 */
					obj_t BgL_arg1493z00_2483;
					obj_t BgL_arg1495z00_2484;

					{	/* SawMill/regutils.scm 71 */
						obj_t BgL_arg1497z00_2485;

						BgL_arg1497z00_2485 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_2464)))->BgL_destz00);
						BgL_arg1493z00_2483 =
							BGl_argszd2collectzd2registersz12ze70zf5zzsaw_regutilsz00
							(BgL_argszd2collectzd2registersz12z12_2463, BgL_arg1497z00_2485);
					}
					{	/* SawMill/regutils.scm 72 */
						obj_t BgL_arg1518z00_2487;

						BgL_arg1518z00_2487 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_2464)))->BgL_argsz00);
						{	/* SawMill/regutils.scm 72 */
							obj_t BgL_list1519z00_2488;

							BgL_list1519z00_2488 = MAKE_YOUNG_PAIR(BgL_arg1518z00_2487, BNIL);
							BgL_arg1495z00_2484 =
								BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
								(BgL_argszd2collectzd2registersz12z12_2463,
								BgL_list1519z00_2488);
					}}
					return
						BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
						(BgL_arg1493z00_2483, BgL_arg1495z00_2484);
				}
			}
		}

	}



/* &args-collect-registers! */
	obj_t BGl_z62argszd2collectzd2registersz12z70zzsaw_regutilsz00(obj_t
		BgL_envz00_2465, obj_t BgL_oz00_2466)
	{
		{	/* SawMill/regutils.scm 67 */
			return
				BGl_argszd2collectzd2registersz12ze70zf5zzsaw_regutilsz00
				(BgL_envz00_2465, BgL_oz00_2466);
		}

	}



/* args-collect-registers!~0 */
	obj_t BGl_argszd2collectzd2registersz12ze70zf5zzsaw_regutilsz00(obj_t
		BgL_envz00_2467, obj_t BgL_oz00_1925)
	{
		{	/* SawMill/regutils.scm 67 */
			if (BGl_isazf3zf3zz__objectz00(BgL_oz00_1925,
					BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMill/regutils.scm 60 */
					return
						BGl_collectzd2registerz12zc0zzsaw_regutilsz00(
						((BgL_rtl_regz00_bglt) BgL_oz00_1925));
				}
			else
				{	/* SawMill/regutils.scm 60 */
					if (BGl_isazf3zf3zz__objectz00(BgL_oz00_1925,
							BGl_rtl_insz00zzsaw_defsz00))
						{	/* SawMill/regutils.scm 64 */
							obj_t BgL_arg1474z00_1930;
							obj_t BgL_arg1476z00_1931;

							{	/* SawMill/regutils.scm 64 */
								obj_t BgL_arg1477z00_1932;

								BgL_arg1477z00_1932 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_oz00_1925)))->BgL_destz00);
								BgL_arg1474z00_1930 =
									BGl_argszd2collectzd2registersz12ze70zf5zzsaw_regutilsz00
									(BgL_envz00_2467, BgL_arg1477z00_1932);
							}
							{	/* SawMill/regutils.scm 65 */
								obj_t BgL_arg1489z00_1933;

								BgL_arg1489z00_1933 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_oz00_1925)))->BgL_argsz00);
								{	/* SawMill/regutils.scm 65 */
									obj_t BgL_list1490z00_1934;

									BgL_list1490z00_1934 =
										MAKE_YOUNG_PAIR(BgL_arg1489z00_1933, BNIL);
									BgL_arg1476z00_1931 =
										BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
										(BgL_envz00_2467, BgL_list1490z00_1934);
								}
							}
							return
								BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1474z00_1930, BgL_arg1476z00_1931);
						}
					else
						{	/* SawMill/regutils.scm 62 */
							return BNIL;
						}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_regutilsz00()
	{
		{	/* SawMill/regutils.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string1831z00zzsaw_regutilsz00));
		}

	}

#ifdef __cplusplus
}
#endif
