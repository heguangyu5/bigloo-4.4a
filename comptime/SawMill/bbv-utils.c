/*===========================================================================*/
/*   (SawMill/bbv-utils.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/bbv-utils.scm) */
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

	typedef struct BgL_rtl_ifeqz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifeqz00_bglt;

	typedef struct BgL_rtl_ifnez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_thenz00;
	}                  *BgL_rtl_ifnez00_bglt;

	typedef struct BgL_rtl_goz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_blockz00_bgl *BgL_toz00;
	}                *BgL_rtl_goz00_bglt;

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

	typedef struct BgL_blocksz00_bgl
	{
		obj_t BgL_ictxz00;
		obj_t BgL_octxsz00;
		long BgL_z52markz52;
		obj_t BgL_z52parentz52;
		obj_t BgL_z52hashz52;
		obj_t BgL_z52blacklistz52;
	}                *BgL_blocksz00_bglt;

	typedef struct BgL_rtl_inszf2bbvzf2_bgl
	{
		obj_t BgL_defz00;
		obj_t BgL_outz00;
		obj_t BgL_inz00;
		obj_t BgL_z52hashz52;
	}                       *BgL_rtl_inszf2bbvzf2_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_removezd2inszd2tempsz12ze70zf5zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_bbsetzd2consza2z70zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62normaliza7ezd2gotoz12z05zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2utilszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	extern obj_t BGl_regsetz00zzsaw_regsetz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt,
		obj_t);
	extern bool_t
		BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static bool_t BGl_gotozd2blockzf3ze70zc6zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_bbvzd2utilszd2();
	static obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t BGl_z62simplifyzd2branchz12za2zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern bool_t BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_z62removezd2tempsz12za2zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	extern obj_t BGl_blockSz00zzsaw_bbvzd2typeszd2;
	static obj_t BGl_z62genlabelz62zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt,
		obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	extern obj_t
		BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static long BGl_za2labelza2z00zzsaw_bbvzd2utilszd2;
	static obj_t
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2maxzd2labelz12z12zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2utilszd2();
	static obj_t BGl_makezd2emptyzd2bbsetz00zzsaw_bbvzd2utilszd2();
	BGL_IMPORT obj_t BGl_filterz12z12zz__r4_control_features_6_9z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_bbvzd2utilszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_genlabelz00zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_removezd2nopz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62redirectzd2blockz12za2zzsaw_bbvzd2utilszd2(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_loopze70ze7zzsaw_bbvzd2utilszd2(obj_t, obj_t, obj_t);
	extern bool_t
		BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	extern BgL_regsetz00_bglt BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	extern bool_t
		BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static long BGl_za2bbzd2markza2zd2zzsaw_bbvzd2utilszd2;
	extern obj_t BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt,
		int);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_bbvzd2utilszd2 = BUNSPEC;
	extern bool_t
		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_normaliza7ezd2gotoz12z67zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	static obj_t BGl_z62removezd2nopz12za2zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2utilszd2(int, int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2utilszd2(BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	static bool_t BGl_collapsezd2branchze70z35zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2utilszd2();
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_simplifyzd2branchz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62blockzd2ze3blockzd2listz81zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2utilszd2();
	BGL_IMPORT obj_t BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t BGl_z62setzd2maxzd2labelz12z70zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2();
	static BgL_blockz00_bglt
		BGl_makezd2gozd2blockze70ze7zzsaw_bbvzd2utilszd2(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2utilszd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regsetz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32175ze3ze5zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2utilszd2();
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, int);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, obj_t);
	extern bool_t
		BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2utilszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_z62getzd2bbzd2markz62zzsaw_bbvzd2utilszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt,
		BgL_blockz00_bglt, BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_regsetzd2nilzd2zzsaw_bbvzd2utilszd2();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_removezd2tempsz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2utilszd2(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2utilszd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2(obj_t,
		BgL_blockz00_bglt);
	static BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2utilszd2(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt);
	static obj_t __cnst[1];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72392za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2nilza72393za7,
		BGl_z62regsetzd2nilzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockzd2ze3blockzd2listzd2envz31zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762blockza7d2za7e3bl2394za7,
		BGl_z62blockzd2ze3blockzd2listz81zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_redirectzd2blockz12zd2envz12zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762redirectza7d2bl2395z00,
		BGl_z62redirectzd2blockz12za2zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72396za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2utilszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2regvzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2regv2397z00,
		BGl_z62regsetzd2regvzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2leng2398z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2,
		BgL_bgl_string2387za700za7za7s2399za7, "saw_bbv-utils", 13);
	      DEFINE_STRING(BGl_string2388z00zzsaw_bbvzd2utilszd2,
		BgL_bgl_string2388za700za7za7s2400za7, "bbset ", 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72401za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72402za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72403za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72404za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2stri2405z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razf3zd2envzd3zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72406za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72407za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72408za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762makeza7d2regset2409z00,
		BGl_z62makezd2regsetzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7f3za791za72410z00,
		BGl_z62regsetzf3z91zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2nopz12zd2envz12zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762removeza7d2nopza72411za7,
		BGl_z62removezd2nopz12za2zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72412za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2utilszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2reglzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2regl2413z00,
		BGl_z62regsetzd2reglzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_genlabelzd2envzd2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762genlabelza762za7za72414z00,
		BGl_z62genlabelz62zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2gotoz12zd2envzb5zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762normaliza7a7eza7d2415za7,
		BGl_z62normaliza7ezd2gotoz12z05zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72416za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72417za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72418za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2utilszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72419za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72420za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2utilszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_simplifyzd2branchz12zd2envz12zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762simplifyza7d2br2421z00,
		BGl_z62simplifyzd2branchz12za2zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2maxzd2labelz12zd2envzc0zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762setza7d2maxza7d2l2422za7,
		BGl_z62setzd2maxzd2labelz12z70zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2msiza7ezd2envza7zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2msiza72423za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72424za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762za7c3za704anonymo2425za7,
		BGl_z62zc3z04anonymousza32175ze3ze5zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_removezd2tempsz12zd2envz12zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762removeza7d2temp2426z00,
		BGl_z62removezd2tempsz12za2zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72427za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72428za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72429za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2utilszd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2stri2430z00,
		BGl_z62regsetzd2stringzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72431za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2utilszd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762makeza7d2rtl_re2432z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2envz00zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762regsetza7d2leng2433z00,
		BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2bbzd2markzd2envzd2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762getza7d2bbza7d2ma2434za7,
		BGl_z62getzd2bbzd2markz62zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72435za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_bbvzd2utilszd2,
		BgL_bgl_za762rtl_regza7f2raza72436za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2utilszd2, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_bbvzd2utilszd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2utilszd2(long
		BgL_checksumz00_3755, char *BgL_fromz00_3756)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_bbvzd2utilszd2))
				{
					BGl_requirezd2initializa7ationz75zzsaw_bbvzd2utilszd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_bbvzd2utilszd2();
					BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2utilszd2();
					BGl_cnstzd2initzd2zzsaw_bbvzd2utilszd2();
					BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2utilszd2();
					return BGl_toplevelzd2initzd2zzsaw_bbvzd2utilszd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_bbv-utils");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_bbv-utils");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			{	/* SawMill/bbv-utils.scm 15 */
				obj_t BgL_cportz00_3717;

				{	/* SawMill/bbv-utils.scm 15 */
					obj_t BgL_stringz00_3725;

					BgL_stringz00_3725 = BGl_string2388z00zzsaw_bbvzd2utilszd2;
					{	/* SawMill/bbv-utils.scm 15 */
						obj_t BgL_startz00_3726;

						BgL_startz00_3726 = BINT(((long) 0));
						{	/* SawMill/bbv-utils.scm 15 */
							obj_t BgL_endz00_3727;

							BgL_endz00_3727 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3725)));
							{	/* SawMill/bbv-utils.scm 15 */

								BgL_cportz00_3717 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3725, BgL_startz00_3726, BgL_endz00_3727);
				}}}}
				{
					long BgL_iz00_3718;

					BgL_iz00_3718 = ((long) 0);
				BgL_loopz00_3719:
					if ((BgL_iz00_3718 == ((long) -1)))
						{	/* SawMill/bbv-utils.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/bbv-utils.scm 15 */
							{	/* SawMill/bbv-utils.scm 15 */
								obj_t BgL_arg2390z00_3721;

								{	/* SawMill/bbv-utils.scm 15 */

									{	/* SawMill/bbv-utils.scm 15 */
										obj_t BgL_locationz00_3723;

										BgL_locationz00_3723 = BBOOL(((bool_t) 0));
										{	/* SawMill/bbv-utils.scm 15 */

											BgL_arg2390z00_3721 =
												BGl_readz00zz__readerz00(BgL_cportz00_3717,
												BgL_locationz00_3723);
										}
									}
								}
								{	/* SawMill/bbv-utils.scm 15 */
									int BgL_tmpz00_3783;

									BgL_tmpz00_3783 = (int) (BgL_iz00_3718);
									CNST_TABLE_SET(BgL_tmpz00_3783, BgL_arg2390z00_3721);
							}}
							{	/* SawMill/bbv-utils.scm 15 */
								int BgL_auxz00_3724;

								BgL_auxz00_3724 = (int) ((BgL_iz00_3718 - ((long) 1)));
								{
									long BgL_iz00_3788;

									BgL_iz00_3788 = (long) (BgL_auxz00_3724);
									BgL_iz00_3718 = BgL_iz00_3788;
									goto BgL_loopz00_3719;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			BGl_za2labelza2z00zzsaw_bbvzd2utilszd2 = ((long) 0);
			BGl_za2bbzd2markza2zd2zzsaw_bbvzd2utilszd2 = ((long) -1);
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2037;

				BgL_headz00_2037 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2038;
					obj_t BgL_tailz00_2039;

					BgL_prevz00_2038 = BgL_headz00_2037;
					BgL_tailz00_2039 = BgL_l1z00_1;
				BgL_loopz00_2040:
					if (PAIRP(BgL_tailz00_2039))
						{
							obj_t BgL_newzd2prevzd2_2042;

							BgL_newzd2prevzd2_2042 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2039), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2038, BgL_newzd2prevzd2_2042);
							{
								obj_t BgL_tailz00_3798;
								obj_t BgL_prevz00_3797;

								BgL_prevz00_3797 = BgL_newzd2prevzd2_2042;
								BgL_tailz00_3798 = CDR(BgL_tailz00_2039);
								BgL_tailz00_2039 = BgL_tailz00_3798;
								BgL_prevz00_2038 = BgL_prevz00_3797;
								goto BgL_loopz00_2040;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2037);
				}
			}
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2utilszd2(BgL_typez00_bglt
		BgL_type1179z00_3, obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1160z00_3730;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1158z00_3731;
					BgL_rtl_regzf2razf2_bglt BgL_wide1159z00_3732;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_3801;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1157z00_3733;

							BgL_new1157z00_3733 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1552z00_3734;

								{	/* SawMill/regset.sch 55 */
									long BgL_res2315z00_3735;

									BgL_res2315z00_3735 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1552z00_3734 = BgL_res2315z00_3735;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1157z00_3733),
									BgL_arg1552z00_3734);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_3806;

								BgL_tmpz00_3806 = ((BgL_objectz00_bglt) BgL_new1157z00_3733);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3806, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1157z00_3733);
							BgL_auxz00_3801 = BgL_new1157z00_3733;
						}
						BgL_tmp1158z00_3731 = ((BgL_rtl_regz00_bglt) BgL_auxz00_3801);
					}
					BgL_wide1159z00_3732 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_3814;
						BgL_objectz00_bglt BgL_tmpz00_3812;

						BgL_auxz00_3814 = ((obj_t) BgL_wide1159z00_3732);
						BgL_tmpz00_3812 = ((BgL_objectz00_bglt) BgL_tmp1158z00_3731);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3812, BgL_auxz00_3814);
					}
					((BgL_objectz00_bglt) BgL_tmp1158z00_3731);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1540z00_3736;

						{	/* SawMill/regset.sch 55 */
							long BgL_res2316z00_3737;

							BgL_res2316z00_3737 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1540z00_3736 = BgL_res2316z00_3737;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1158z00_3731), BgL_arg1540z00_3736);
					}
					BgL_new1160z00_3730 = ((BgL_rtl_regz00_bglt) BgL_tmp1158z00_3731);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1160z00_3730)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3730)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3730)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3730)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3730)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3730)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3834;

					{
						obj_t BgL_auxz00_3835;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3836;

							BgL_tmpz00_3836 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3835 = BGL_OBJECT_WIDENING(BgL_tmpz00_3836);
						}
						BgL_auxz00_3834 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3835);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3834))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3841;

					{
						obj_t BgL_auxz00_3842;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3843;

							BgL_tmpz00_3843 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3842 = BGL_OBJECT_WIDENING(BgL_tmpz00_3843);
						}
						BgL_auxz00_3841 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3842);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3841))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3848;

					{
						obj_t BgL_auxz00_3849;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3850;

							BgL_tmpz00_3850 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3849 = BGL_OBJECT_WIDENING(BgL_tmpz00_3850);
						}
						BgL_auxz00_3848 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3849);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3848))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3855;

					{
						obj_t BgL_auxz00_3856;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3857;

							BgL_tmpz00_3857 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3856 = BGL_OBJECT_WIDENING(BgL_tmpz00_3857);
						}
						BgL_auxz00_3855 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3856);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3855))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3862;

					{
						obj_t BgL_auxz00_3863;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3864;

							BgL_tmpz00_3864 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3863 = BGL_OBJECT_WIDENING(BgL_tmpz00_3864);
						}
						BgL_auxz00_3862 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3863);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3862))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_3869;

					{
						obj_t BgL_auxz00_3870;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_3871;

							BgL_tmpz00_3871 = ((BgL_objectz00_bglt) BgL_new1160z00_3730);
							BgL_auxz00_3870 = BGL_OBJECT_WIDENING(BgL_tmpz00_3871);
						}
						BgL_auxz00_3869 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3870);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3869))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1160z00_3730;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3602, obj_t BgL_type1179z00_3603, obj_t BgL_var1180z00_3604,
		obj_t BgL_onexprzf31181zf3_3605, obj_t BgL_name1182z00_3606,
		obj_t BgL_key1183z00_3607, obj_t BgL_hardware1184z00_3608,
		obj_t BgL_num1185z00_3609, obj_t BgL_color1186z00_3610,
		obj_t BgL_coalesce1187z00_3611, obj_t BgL_occurrences1188z00_3612,
		obj_t BgL_interfere1189z00_3613, obj_t BgL_interfere21190z00_3614)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2utilszd2(
				((BgL_typez00_bglt) BgL_type1179z00_3603), BgL_var1180z00_3604,
				BgL_onexprzf31181zf3_3605, BgL_name1182z00_3606, BgL_key1183z00_3607,
				BgL_hardware1184z00_3608, CINT(BgL_num1185z00_3609),
				BgL_color1186z00_3610, BgL_coalesce1187z00_3611,
				CINT(BgL_occurrences1188z00_3612), BgL_interfere1189z00_3613,
				BgL_interfere21190z00_3614);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvzd2utilszd2(obj_t
		BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3615,
		obj_t BgL_objz00_3616)
	{
		{	/* SawMill/regset.sch 56 */
			return BBOOL(BGl_rtl_regzf2razf3z01zzsaw_bbvzd2utilszd2(BgL_objz00_3616));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_3123;

				BgL_classz00_3123 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_3124;

					BgL__ortest_1106z00_3124 = BGL_CLASS_NIL(BgL_classz00_3123);
					if (CBOOL(BgL__ortest_1106z00_3124))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_3124);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3123));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3617)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2utilszd2();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3890;

				{
					obj_t BgL_auxz00_3891;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_3892;

						BgL_tmpz00_3892 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_3891 = BGL_OBJECT_WIDENING(BgL_tmpz00_3892);
					}
					BgL_auxz00_3890 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3891);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3890))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3618, obj_t BgL_oz00_3619)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3619));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3899;

				{
					obj_t BgL_auxz00_3900;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_3901;

						BgL_tmpz00_3901 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_3900 = BGL_OBJECT_WIDENING(BgL_tmpz00_3901);
					}
					BgL_auxz00_3899 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3900);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3899))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3620, obj_t BgL_oz00_3621, obj_t BgL_vz00_3622)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3621), BgL_vz00_3622);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3908;

				{
					obj_t BgL_auxz00_3909;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_3910;

						BgL_tmpz00_3910 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_3909 = BGL_OBJECT_WIDENING(BgL_tmpz00_3910);
					}
					BgL_auxz00_3908 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3909);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3908))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3623, obj_t BgL_oz00_3624)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3624));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3917;

				{
					obj_t BgL_auxz00_3918;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_3919;

						BgL_tmpz00_3919 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_3918 = BGL_OBJECT_WIDENING(BgL_tmpz00_3919);
					}
					BgL_auxz00_3917 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3918);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3917))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3625, obj_t BgL_oz00_3626, obj_t BgL_vz00_3627)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3626), BgL_vz00_3627);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3926;

				{
					obj_t BgL_auxz00_3927;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_3928;

						BgL_tmpz00_3928 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_3927 = BGL_OBJECT_WIDENING(BgL_tmpz00_3928);
					}
					BgL_auxz00_3926 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3927);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3926))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3628, obj_t BgL_oz00_3629)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2utilszd2(
					((BgL_rtl_regz00_bglt) BgL_oz00_3629)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3936;

				{
					obj_t BgL_auxz00_3937;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_3938;

						BgL_tmpz00_3938 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_3937 = BGL_OBJECT_WIDENING(BgL_tmpz00_3938);
					}
					BgL_auxz00_3936 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3937);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3936))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3630, obj_t BgL_oz00_3631, obj_t BgL_vz00_3632)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3631), CINT(BgL_vz00_3632));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3946;

				{
					obj_t BgL_auxz00_3947;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_3948;

						BgL_tmpz00_3948 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_3947 = BGL_OBJECT_WIDENING(BgL_tmpz00_3948);
					}
					BgL_auxz00_3946 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3947);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3946))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3633, obj_t BgL_oz00_3634)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3634));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2utilszd2
		(BgL_rtl_regz00_bglt BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3955;

				{
					obj_t BgL_auxz00_3956;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_3957;

						BgL_tmpz00_3957 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_3956 = BGL_OBJECT_WIDENING(BgL_tmpz00_3957);
					}
					BgL_auxz00_3955 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3956);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3955))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3635, obj_t BgL_oz00_3636, obj_t BgL_vz00_3637)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3636), BgL_vz00_3637);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3964;

				{
					obj_t BgL_auxz00_3965;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_3966;

						BgL_tmpz00_3966 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_3965 = BGL_OBJECT_WIDENING(BgL_tmpz00_3966);
					}
					BgL_auxz00_3964 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3965);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3964))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3638, obj_t BgL_oz00_3639)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3639));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3973;

				{
					obj_t BgL_auxz00_3974;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_3975;

						BgL_tmpz00_3975 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_3974 = BGL_OBJECT_WIDENING(BgL_tmpz00_3975);
					}
					BgL_auxz00_3973 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3974);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3973))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3640, obj_t BgL_oz00_3641, obj_t BgL_vz00_3642)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3641), BgL_vz00_3642);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_3982;

				{
					obj_t BgL_auxz00_3983;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_3984;

						BgL_tmpz00_3984 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_3983 = BGL_OBJECT_WIDENING(BgL_tmpz00_3984);
					}
					BgL_auxz00_3982 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_3983);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_3982))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3643,
		obj_t BgL_oz00_3644)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2utilszd2(
					((BgL_rtl_regz00_bglt) BgL_oz00_3644)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3645, obj_t BgL_oz00_3646)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3646));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3647,
		obj_t BgL_oz00_3648)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3648));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3649,
		obj_t BgL_oz00_3650)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3650));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3651, obj_t BgL_oz00_3652)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3652));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2utilszd2
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
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3653, obj_t BgL_oz00_3654, obj_t BgL_vz00_3655)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3654), BgL_vz00_3655);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3656,
		obj_t BgL_oz00_3657)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3657));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3658, obj_t BgL_oz00_3659, obj_t BgL_vz00_3660)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3659), BgL_vz00_3660);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
		BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3661, obj_t BgL_oz00_3662)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3662));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2utilszd2(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3663, obj_t BgL_oz00_3664, obj_t BgL_vz00_3665)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2utilszd2(
				((BgL_rtl_regz00_bglt) BgL_oz00_3664),
				((BgL_typez00_bglt) BgL_vz00_3665));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2utilszd2(int BgL_length1172z00_52,
		int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1162z00_3738;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1161z00_3739;

					BgL_new1161z00_3739 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1558z00_3740;

						{	/* SawMill/regset.sch 84 */
							long BgL_res2317z00_3741;

							BgL_res2317z00_3741 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1558z00_3740 = BgL_res2317z00_3741;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1161z00_3739), BgL_arg1558z00_3740);
					}
					BgL_new1162z00_3738 = BgL_new1161z00_3739;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3738))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3738))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3738))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3738))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3738))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1162z00_3738;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3666, obj_t BgL_length1172z00_3667,
		obj_t BgL_msiza7e1173za7_3668, obj_t BgL_regv1174z00_3669,
		obj_t BgL_regl1175z00_3670, obj_t BgL_string1176z00_3671)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_bbvzd2utilszd2(CINT(BgL_length1172z00_3667),
				CINT(BgL_msiza7e1173za7_3668), BgL_regv1174z00_3669,
				BgL_regl1175z00_3670, BgL_string1176z00_3671);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_bbvzd2utilszd2(obj_t
		BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3672,
		obj_t BgL_objz00_3673)
	{
		{	/* SawMill/regset.sch 85 */
			return BBOOL(BGl_regsetzf3zf3zzsaw_bbvzd2utilszd2(BgL_objz00_3673));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_3143;

				BgL_classz00_3143 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_3144;

					BgL__ortest_1106z00_3144 = BGL_CLASS_NIL(BgL_classz00_3143);
					if (CBOOL(BgL__ortest_1106z00_3144))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_3144);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3143));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3674)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_bbvzd2utilszd2();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3675,
		obj_t BgL_oz00_3676)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_bbvzd2utilszd2(
				((BgL_regsetz00_bglt) BgL_oz00_3676));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3677, obj_t BgL_oz00_3678, obj_t BgL_vz00_3679)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2utilszd2(
				((BgL_regsetz00_bglt) BgL_oz00_3678), BgL_vz00_3679);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3680,
		obj_t BgL_oz00_3681)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_bbvzd2utilszd2(
				((BgL_regsetz00_bglt) BgL_oz00_3681));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3682,
		obj_t BgL_oz00_3683)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_bbvzd2utilszd2(
				((BgL_regsetz00_bglt) BgL_oz00_3683));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3684,
		obj_t BgL_oz00_3685)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_bbvzd2utilszd2(
					((BgL_regsetz00_bglt) BgL_oz00_3685)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3686,
		obj_t BgL_oz00_3687)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_bbvzd2utilszd2(
					((BgL_regsetz00_bglt) BgL_oz00_3687)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2utilszd2(BgL_regsetz00_bglt
		BgL_oz00_71, int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3688, obj_t BgL_oz00_3689, obj_t BgL_vz00_3690)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2utilszd2(
				((BgL_regsetz00_bglt) BgL_oz00_3689), CINT(BgL_vz00_3690));
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzsaw_bbvzd2utilszd2(obj_t BgL_oldz00_3715,
		obj_t BgL_newz00_3714, obj_t BgL_lz00_2055)
	{
		{	/* SawMill/bbv-utils.scm 50 */
			if (NULLP(BgL_lz00_2055))
				{	/* SawMill/bbv-utils.scm 52 */
					return BgL_lz00_2055;
				}
			else
				{	/* SawMill/bbv-utils.scm 52 */
					if ((CAR(((obj_t) BgL_lz00_2055)) == BgL_oldz00_3715))
						{	/* SawMill/bbv-utils.scm 53 */
							obj_t BgL_arg1564z00_2060;

							BgL_arg1564z00_2060 = CDR(((obj_t) BgL_lz00_2055));
							return MAKE_YOUNG_PAIR(BgL_newz00_3714, BgL_arg1564z00_2060);
						}
					else
						{	/* SawMill/bbv-utils.scm 54 */
							obj_t BgL_arg1565z00_2061;
							obj_t BgL_arg1573z00_2062;

							BgL_arg1565z00_2061 = CAR(((obj_t) BgL_lz00_2055));
							{	/* SawMill/bbv-utils.scm 54 */
								obj_t BgL_arg1575z00_2063;

								BgL_arg1575z00_2063 = CDR(((obj_t) BgL_lz00_2055));
								BgL_arg1573z00_2062 =
									BGl_loopze70ze7zzsaw_bbvzd2utilszd2(BgL_oldz00_3715,
									BgL_newz00_3714, BgL_arg1575z00_2063);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1565z00_2061, BgL_arg1573z00_2062);
						}
				}
		}

	}



/* genlabel */
	BGL_EXPORTED_DEF obj_t BGl_genlabelz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 60 */
			BGl_za2labelza2z00zzsaw_bbvzd2utilszd2 =
				(((long) 1) + BGl_za2labelza2z00zzsaw_bbvzd2utilszd2);
			return BINT(BGl_za2labelza2z00zzsaw_bbvzd2utilszd2);
		}

	}



/* &genlabel */
	obj_t BGl_z62genlabelz62zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3691)
	{
		{	/* SawMill/bbv-utils.scm 60 */
			return BGl_genlabelz00zzsaw_bbvzd2utilszd2();
		}

	}



/* set-max-label! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2maxzd2labelz12z12zzsaw_bbvzd2utilszd2(obj_t
		BgL_blocksz00_76)
	{
		{	/* SawMill/bbv-utils.scm 67 */
			BGl_za2labelza2z00zzsaw_bbvzd2utilszd2 = ((long) 0);
			{
				obj_t BgL_l1519z00_2067;

				{	/* SawMill/bbv-utils.scm 69 */
					bool_t BgL_tmpz00_4093;

					BgL_l1519z00_2067 = BgL_blocksz00_76;
				BgL_zc3z04anonymousza31579ze3z87_2068:
					if (PAIRP(BgL_l1519z00_2067))
						{	/* SawMill/bbv-utils.scm 69 */
							{	/* SawMill/bbv-utils.scm 70 */
								obj_t BgL_bz00_2070;

								BgL_bz00_2070 = CAR(BgL_l1519z00_2067);
								{	/* SawMill/bbv-utils.scm 71 */
									bool_t BgL_test2445z00_4097;

									{	/* SawMill/bbv-utils.scm 71 */
										long BgL_n2z00_3155;

										BgL_n2z00_3155 = BGl_za2labelza2z00zzsaw_bbvzd2utilszd2;
										BgL_test2445z00_4097 =
											(
											(long) (
												(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt) BgL_bz00_2070)))->
													BgL_labelz00)) > BgL_n2z00_3155);
									}
									if (BgL_test2445z00_4097)
										{	/* SawMill/bbv-utils.scm 71 */
											BGl_za2labelza2z00zzsaw_bbvzd2utilszd2 =
												(long) (
												(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt) BgL_bz00_2070)))->
													BgL_labelz00));
										}
									else
										{	/* SawMill/bbv-utils.scm 71 */
											BFALSE;
										}
								}
							}
							{
								obj_t BgL_l1519z00_4105;

								BgL_l1519z00_4105 = CDR(BgL_l1519z00_2067);
								BgL_l1519z00_2067 = BgL_l1519z00_4105;
								goto BgL_zc3z04anonymousza31579ze3z87_2068;
							}
						}
					else
						{	/* SawMill/bbv-utils.scm 69 */
							BgL_tmpz00_4093 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_4093);
				}
			}
		}

	}



/* &set-max-label! */
	obj_t BGl_z62setzd2maxzd2labelz12z70zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3692, obj_t BgL_blocksz00_3693)
	{
		{	/* SawMill/bbv-utils.scm 67 */
			return
				BGl_setzd2maxzd2labelz12z12zzsaw_bbvzd2utilszd2(BgL_blocksz00_3693);
		}

	}



/* get-bb-mark */
	BGL_EXPORTED_DEF obj_t BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 83 */
			BGl_za2bbzd2markza2zd2zzsaw_bbvzd2utilszd2 =
				(((long) 1) + BGl_za2bbzd2markza2zd2zzsaw_bbvzd2utilszd2);
			return BINT(BGl_za2bbzd2markza2zd2zzsaw_bbvzd2utilszd2);
		}

	}



/* &get-bb-mark */
	obj_t BGl_z62getzd2bbzd2markz62zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3694)
	{
		{	/* SawMill/bbv-utils.scm 83 */
			return BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2();
		}

	}



/* make-empty-bbset */
	obj_t BGl_makezd2emptyzd2bbsetz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 95 */
			{	/* SawMill/bbv-utils.scm 96 */
				obj_t BgL_arg1611z00_2088;

				BgL_arg1611z00_2088 = BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2();
				{	/* SawMill/bbv-utils.scm 90 */
					obj_t BgL_newz00_3167;

					BgL_newz00_3167 =
						create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
					{	/* SawMill/bbv-utils.scm 90 */
						int BgL_tmpz00_4116;

						BgL_tmpz00_4116 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_3167, BgL_tmpz00_4116, BNIL);
					}
					{	/* SawMill/bbv-utils.scm 90 */
						int BgL_tmpz00_4119;

						BgL_tmpz00_4119 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_3167, BgL_tmpz00_4119, BgL_arg1611z00_2088);
					}
					return BgL_newz00_3167;
				}
			}
		}

	}



/* bbset-cons */
	obj_t BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt BgL_bz00_89,
		obj_t BgL_setz00_90)
	{
		{	/* SawMill/bbv-utils.scm 108 */
			{	/* SawMill/bbv-utils.scm 109 */
				obj_t BgL_mz00_2092;

				BgL_mz00_2092 = STRUCT_REF(BgL_setz00_90, (int) (((long) 0)));
				{
					BgL_blocksz00_bglt BgL_auxz00_4124;

					{
						obj_t BgL_auxz00_4125;

						{	/* SawMill/bbv-utils.scm 111 */
							BgL_objectz00_bglt BgL_tmpz00_4126;

							BgL_tmpz00_4126 = ((BgL_objectz00_bglt) BgL_bz00_89);
							BgL_auxz00_4125 = BGL_OBJECT_WIDENING(BgL_tmpz00_4126);
						}
						BgL_auxz00_4124 = ((BgL_blocksz00_bglt) BgL_auxz00_4125);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4124))->BgL_z52markz52) =
						((long) (long) CINT(BgL_mz00_2092)), BUNSPEC);
				}
				{	/* SawMill/bbv-utils.scm 112 */
					obj_t BgL_arg1624z00_2094;

					{	/* SawMill/bbv-utils.scm 112 */
						obj_t BgL_arg1626z00_2095;

						BgL_arg1626z00_2095 = STRUCT_REF(BgL_setz00_90, (int) (((long) 1)));
						BgL_arg1624z00_2094 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_89), BgL_arg1626z00_2095);
					}
					{	/* SawMill/bbv-utils.scm 90 */
						int BgL_tmpz00_4136;

						BgL_tmpz00_4136 = (int) (((long) 1));
						STRUCT_SET(BgL_setz00_90, BgL_tmpz00_4136, BgL_arg1624z00_2094);
				}}
				return BgL_setz00_90;
			}
		}

	}



/* bbset-cons* */
	obj_t BGl_bbsetzd2consza2z70zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt
		BgL_bz00_91, obj_t BgL_restz00_92)
	{
		{	/* SawMill/bbv-utils.scm 118 */
			if (NULLP(CDR(((obj_t) BgL_restz00_92))))
				{	/* SawMill/bbv-utils.scm 121 */
					obj_t BgL_arg1631z00_2098;

					BgL_arg1631z00_2098 = CAR(((obj_t) BgL_restz00_92));
					return
						BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(BgL_bz00_91,
						BgL_arg1631z00_2098);
				}
			else
				{	/* SawMill/bbv-utils.scm 122 */
					bool_t BgL_test2447z00_4146;

					{	/* SawMill/bbv-utils.scm 122 */
						obj_t BgL_tmpz00_4147;

						{	/* SawMill/bbv-utils.scm 122 */
							obj_t BgL_pairz00_3185;

							BgL_pairz00_3185 = CDR(((obj_t) BgL_restz00_92));
							BgL_tmpz00_4147 = CDR(BgL_pairz00_3185);
						}
						BgL_test2447z00_4146 = NULLP(BgL_tmpz00_4147);
					}
					if (BgL_test2447z00_4146)
						{	/* SawMill/bbv-utils.scm 123 */
							obj_t BgL_arg1639z00_2101;

							{	/* SawMill/bbv-utils.scm 123 */
								obj_t BgL_arg1640z00_2102;
								obj_t BgL_arg1641z00_2103;

								BgL_arg1640z00_2102 = CAR(((obj_t) BgL_restz00_92));
								{	/* SawMill/bbv-utils.scm 123 */
									obj_t BgL_pairz00_3191;

									BgL_pairz00_3191 = CDR(((obj_t) BgL_restz00_92));
									BgL_arg1641z00_2103 = CAR(BgL_pairz00_3191);
								}
								BgL_arg1639z00_2101 =
									BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
									((BgL_blockz00_bglt) BgL_arg1640z00_2102),
									BgL_arg1641z00_2103);
							}
							return
								BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(BgL_bz00_91,
								BgL_arg1639z00_2101);
						}
					else
						{	/* SawMill/bbv-utils.scm 125 */
							obj_t BgL_arg1644z00_2104;

							{	/* SawMill/bbv-utils.scm 125 */
								obj_t BgL_runner1646z00_2106;

								BgL_runner1646z00_2106 = BgL_restz00_92;
								{	/* SawMill/bbv-utils.scm 125 */
									BgL_blockz00_bglt BgL_aux1645z00_2105;

									{	/* SawMill/bbv-utils.scm 125 */
										obj_t BgL_pairz00_3192;

										BgL_pairz00_3192 = BgL_runner1646z00_2106;
										BgL_aux1645z00_2105 =
											((BgL_blockz00_bglt) CAR(BgL_pairz00_3192));
									}
									BgL_runner1646z00_2106 = CDR(BgL_runner1646z00_2106);
									BgL_arg1644z00_2104 =
										BGl_bbsetzd2consza2z70zzsaw_bbvzd2utilszd2
										(BgL_aux1645z00_2105, BgL_runner1646z00_2106);
								}
							}
							return
								BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(BgL_bz00_91,
								BgL_arg1644z00_2104);
						}
				}
		}

	}



/* block->block-list */
	BGL_EXPORTED_DEF obj_t
		BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2(obj_t BgL_regsz00_95,
		BgL_blockz00_bglt BgL_bz00_96)
	{
		{	/* SawMill/bbv-utils.scm 142 */
			{	/* SawMill/bbv-utils.scm 182 */
				obj_t BgL_g1189z00_2125;
				obj_t BgL_g1192z00_2126;

				{	/* SawMill/bbv-utils.scm 182 */
					obj_t BgL_list1885z00_2282;

					BgL_list1885z00_2282 = MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_96), BNIL);
					BgL_g1189z00_2125 = BgL_list1885z00_2282;
				}
				BgL_g1192z00_2126 = BGl_makezd2emptyzd2bbsetz00zzsaw_bbvzd2utilszd2();
				{
					obj_t BgL_bsz00_2128;
					obj_t BgL_accz00_2129;

					BgL_bsz00_2128 = BgL_g1189z00_2125;
					BgL_accz00_2129 = BgL_g1192z00_2126;
				BgL_zc3z04anonymousza31673ze3z87_2130:
					if (NULLP(BgL_bsz00_2128))
						{	/* SawMill/bbv-utils.scm 185 */
							return
								bgl_reverse_bang(STRUCT_REF(BgL_accz00_2129,
									(int) (((long) 1))));
						}
					else
						{	/* SawMill/bbv-utils.scm 187 */
							bool_t BgL_test2449z00_4173;

							{	/* SawMill/bbv-utils.scm 187 */
								bool_t BgL_res2336z00_3251;

								{	/* SawMill/bbv-utils.scm 187 */
									BgL_blockz00_bglt BgL_blockz00_3244;

									BgL_blockz00_3244 =
										((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2128)));
									{	/* SawMill/bbv-utils.scm 103 */
										long BgL_arg1612z00_3247;
										obj_t BgL_arg1613z00_3248;

										{
											BgL_blocksz00_bglt BgL_auxz00_4177;

											{
												obj_t BgL_auxz00_4178;

												{	/* SawMill/bbv-utils.scm 103 */
													BgL_objectz00_bglt BgL_tmpz00_4179;

													BgL_tmpz00_4179 =
														((BgL_objectz00_bglt) BgL_blockz00_3244);
													BgL_auxz00_4178 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4179);
												}
												BgL_auxz00_4177 =
													((BgL_blocksz00_bglt) BgL_auxz00_4178);
											}
											BgL_arg1612z00_3247 =
												(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4177))->
												BgL_z52markz52);
										}
										BgL_arg1613z00_3248 =
											STRUCT_REF(BgL_accz00_2129, (int) (((long) 0)));
										BgL_res2336z00_3251 =
											(BINT(BgL_arg1612z00_3247) == BgL_arg1613z00_3248);
								}}
								BgL_test2449z00_4173 = BgL_res2336z00_3251;
							}
							if (BgL_test2449z00_4173)
								{	/* SawMill/bbv-utils.scm 188 */
									obj_t BgL_arg1687z00_2135;

									BgL_arg1687z00_2135 = CDR(((obj_t) BgL_bsz00_2128));
									{
										obj_t BgL_bsz00_4190;

										BgL_bsz00_4190 = BgL_arg1687z00_2135;
										BgL_bsz00_2128 = BgL_bsz00_4190;
										goto BgL_zc3z04anonymousza31673ze3z87_2130;
									}
								}
							else
								{	/* SawMill/bbv-utils.scm 190 */
									BgL_blockz00_bglt BgL_i1193z00_2136;

									BgL_i1193z00_2136 =
										((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2128)));
									if (NULLP(
											(((BgL_blockz00_bglt) COBJECT(BgL_i1193z00_2136))->
												BgL_succsz00)))
										{	/* SawMill/bbv-utils.scm 193 */
											obj_t BgL_arg1692z00_2139;
											obj_t BgL_arg1695z00_2140;

											BgL_arg1692z00_2139 = CDR(((obj_t) BgL_bsz00_2128));
											{	/* SawMill/bbv-utils.scm 193 */
												obj_t BgL_arg1696z00_2141;

												BgL_arg1696z00_2141 = CAR(((obj_t) BgL_bsz00_2128));
												BgL_arg1695z00_2140 =
													BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
													((BgL_blockz00_bglt) BgL_arg1696z00_2141),
													BgL_accz00_2129);
											}
											{
												obj_t BgL_accz00_4204;
												obj_t BgL_bsz00_4203;

												BgL_bsz00_4203 = BgL_arg1692z00_2139;
												BgL_accz00_4204 = BgL_arg1695z00_2140;
												BgL_accz00_2129 = BgL_accz00_4204;
												BgL_bsz00_2128 = BgL_bsz00_4203;
												goto BgL_zc3z04anonymousza31673ze3z87_2130;
											}
										}
									else
										{	/* SawMill/bbv-utils.scm 194 */
											bool_t BgL_test2451z00_4205;

											if (BGl_gotozd2blockzf3ze70zc6zzsaw_bbvzd2utilszd2(CAR(
														((obj_t) BgL_bsz00_2128))))
												{	/* SawMill/bbv-utils.scm 158 */
													BgL_test2451z00_4205 = ((bool_t) 0);
												}
											else
												{	/* SawMill/bbv-utils.scm 158 */
													BgL_test2451z00_4205 = ((bool_t) 1);
												}
											if (BgL_test2451z00_4205)
												{	/* SawMill/bbv-utils.scm 195 */
													obj_t BgL_lpz00_2144;

													BgL_lpz00_2144 =
														BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
														(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt)
																		CAR(
																			((obj_t) BgL_bsz00_2128)))))->
															BgL_firstz00));
													{	/* SawMill/bbv-utils.scm 195 */
														obj_t BgL_lastz00_2145;

														BgL_lastz00_2145 = CAR(BgL_lpz00_2144);
														{	/* SawMill/bbv-utils.scm 196 */
															obj_t BgL_succsz00_2146;

															BgL_succsz00_2146 =
																(((BgL_blockz00_bglt) COBJECT(
																		((BgL_blockz00_bglt)
																			CAR(
																				((obj_t) BgL_bsz00_2128)))))->
																BgL_succsz00);
															{	/* SawMill/bbv-utils.scm 197 */

																if (BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2
																	(((BgL_rtl_insz00_bglt) BgL_lastz00_2145)))
																	{	/* SawMill/bbv-utils.scm 201 */
																		bool_t BgL_test2454z00_4223;

																		if (BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75(((BgL_rtl_insz00_bglt) BgL_lastz00_2145)))
																			{	/* SawMill/bbv-utils.scm 202 */
																				bool_t BgL_test2456z00_4227;

																				{	/* SawMill/bbv-utils.scm 202 */
																					bool_t BgL_res2338z00_3272;

																					{	/* SawMill/bbv-utils.scm 202 */
																						BgL_blockz00_bglt BgL_blockz00_3265;

																						BgL_blockz00_3265 =
																							((BgL_blockz00_bglt)
																							CAR(((obj_t) BgL_succsz00_2146)));
																						{	/* SawMill/bbv-utils.scm 103 */
																							long BgL_arg1612z00_3268;
																							obj_t BgL_arg1613z00_3269;

																							{
																								BgL_blocksz00_bglt
																									BgL_auxz00_4231;
																								{
																									obj_t BgL_auxz00_4232;

																									{	/* SawMill/bbv-utils.scm 103 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4233;
																										BgL_tmpz00_4233 =
																											((BgL_objectz00_bglt)
																											BgL_blockz00_3265);
																										BgL_auxz00_4232 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4233);
																									}
																									BgL_auxz00_4231 =
																										((BgL_blocksz00_bglt)
																										BgL_auxz00_4232);
																								}
																								BgL_arg1612z00_3268 =
																									(((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_4231))->
																									BgL_z52markz52);
																							}
																							BgL_arg1613z00_3269 =
																								STRUCT_REF(BgL_accz00_2129,
																								(int) (((long) 0)));
																							BgL_res2338z00_3272 =
																								(BINT(BgL_arg1612z00_3268) ==
																								BgL_arg1613z00_3269);
																					}}
																					BgL_test2456z00_4227 =
																						BgL_res2338z00_3272;
																				}
																				if (BgL_test2456z00_4227)
																					{	/* SawMill/bbv-utils.scm 202 */
																						BgL_test2454z00_4223 = ((bool_t) 0);
																					}
																				else
																					{	/* SawMill/bbv-utils.scm 202 */
																						BgL_test2454z00_4223 = ((bool_t) 1);
																					}
																			}
																		else
																			{	/* SawMill/bbv-utils.scm 201 */
																				BgL_test2454z00_4223 = ((bool_t) 0);
																			}
																		if (BgL_test2454z00_4223)
																			{	/* SawMill/bbv-utils.scm 201 */
																				{
																					BgL_rtl_funz00_bglt BgL_auxz00_4242;

																					{	/* SawMill/bbv-utils.scm 206 */
																						BgL_rtl_ifeqz00_bglt
																							BgL_new1196z00_2154;
																						{	/* SawMill/bbv-utils.scm 207 */
																							BgL_rtl_ifeqz00_bglt
																								BgL_new1195z00_2155;
																							BgL_new1195z00_2155 =
																								((BgL_rtl_ifeqz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_rtl_ifeqz00_bgl))));
																							{	/* SawMill/bbv-utils.scm 207 */
																								long BgL_arg1711z00_2156;

																								{	/* SawMill/bbv-utils.scm 207 */
																									long BgL_res2339z00_3274;

																									{	/* SawMill/bbv-utils.scm 207 */
																										obj_t BgL_classz00_3273;

																										BgL_classz00_3273 =
																											BGl_rtl_ifeqz00zzsaw_defsz00;
																										BgL_res2339z00_3274 =
																											BGL_CLASS_INDEX
																											(BgL_classz00_3273);
																									}
																									BgL_arg1711z00_2156 =
																										BgL_res2339z00_3274;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1195z00_2155),
																									BgL_arg1711z00_2156);
																							}
																							BgL_new1196z00_2154 =
																								BgL_new1195z00_2155;
																						}
																						((((BgL_rtl_funz00_bglt) COBJECT(
																										((BgL_rtl_funz00_bglt)
																											BgL_new1196z00_2154)))->
																								BgL_locz00) =
																							((obj_t) BFALSE), BUNSPEC);
																						{
																							BgL_blockz00_bglt BgL_auxz00_4250;

																							{	/* SawMill/bbv-utils.scm 207 */
																								obj_t BgL_pairz00_3280;

																								BgL_pairz00_3280 =
																									CDR(
																									((obj_t) BgL_succsz00_2146));
																								BgL_auxz00_4250 =
																									((BgL_blockz00_bglt)
																									CAR(BgL_pairz00_3280));
																							}
																							((((BgL_rtl_ifeqz00_bglt)
																										COBJECT
																										(BgL_new1196z00_2154))->
																									BgL_thenz00) =
																								((BgL_blockz00_bglt)
																									BgL_auxz00_4250), BUNSPEC);
																						}
																						BgL_auxz00_4242 =
																							((BgL_rtl_funz00_bglt)
																							BgL_new1196z00_2154);
																					}
																					((((BgL_rtl_insz00_bglt) COBJECT(
																									((BgL_rtl_insz00_bglt)
																										BgL_lastz00_2145)))->
																							BgL_funz00) =
																						((BgL_rtl_funz00_bglt)
																							BgL_auxz00_4242), BUNSPEC);
																				}
																				{

																					goto
																						BgL_zc3z04anonymousza31673ze3z87_2130;
																				}
																			}
																		else
																			{	/* SawMill/bbv-utils.scm 209 */
																				bool_t BgL_test2457z00_4258;

																				{	/* SawMill/bbv-utils.scm 209 */
																					bool_t BgL_res2340z00_3292;

																					{	/* SawMill/bbv-utils.scm 209 */
																						BgL_blockz00_bglt BgL_blockz00_3285;

																						{	/* SawMill/bbv-utils.scm 209 */
																							obj_t BgL_pairz00_3284;

																							BgL_pairz00_3284 =
																								CDR(
																								((obj_t) BgL_succsz00_2146));
																							BgL_blockz00_3285 =
																								((BgL_blockz00_bglt)
																								CAR(BgL_pairz00_3284));
																						}
																						{	/* SawMill/bbv-utils.scm 103 */
																							long BgL_arg1612z00_3288;
																							obj_t BgL_arg1613z00_3289;

																							{
																								BgL_blocksz00_bglt
																									BgL_auxz00_4263;
																								{
																									obj_t BgL_auxz00_4264;

																									{	/* SawMill/bbv-utils.scm 103 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4265;
																										BgL_tmpz00_4265 =
																											((BgL_objectz00_bglt)
																											BgL_blockz00_3285);
																										BgL_auxz00_4264 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4265);
																									}
																									BgL_auxz00_4263 =
																										((BgL_blocksz00_bglt)
																										BgL_auxz00_4264);
																								}
																								BgL_arg1612z00_3288 =
																									(((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_4263))->
																									BgL_z52markz52);
																							}
																							BgL_arg1613z00_3289 =
																								STRUCT_REF(BgL_accz00_2129,
																								(int) (((long) 0)));
																							BgL_res2340z00_3292 =
																								(BINT(BgL_arg1612z00_3288) ==
																								BgL_arg1613z00_3289);
																					}}
																					BgL_test2457z00_4258 =
																						BgL_res2340z00_3292;
																				}
																				if (BgL_test2457z00_4258)
																					{	/* SawMill/bbv-utils.scm 210 */
																						BgL_blockz00_bglt BgL_hopz00_2159;

																						{	/* SawMill/bbv-utils.scm 210 */
																							obj_t BgL_arg1739z00_2171;
																							obj_t BgL_arg1740z00_2172;

																							BgL_arg1739z00_2171 =
																								CAR(((obj_t) BgL_bsz00_2128));
																							{	/* SawMill/bbv-utils.scm 210 */
																								obj_t BgL_pairz00_3297;

																								BgL_pairz00_3297 =
																									CDR(
																									((obj_t) BgL_succsz00_2146));
																								BgL_arg1740z00_2172 =
																									CAR(BgL_pairz00_3297);
																							}
																							BgL_hopz00_2159 =
																								BGl_makezd2gozd2blockze70ze7zzsaw_bbvzd2utilszd2
																								(BgL_regsz00_95,
																								BgL_arg1739z00_2171,
																								BgL_arg1740z00_2172);
																						}
																						{	/* SawMill/bbv-utils.scm 211 */
																							BgL_blockz00_bglt
																								BgL_i1197z00_2160;
																							BgL_i1197z00_2160 =
																								((BgL_blockz00_bglt)
																								CAR(((obj_t)
																										BgL_succsz00_2146)));
																							{
																								obj_t BgL_auxz00_4283;

																								{	/* SawMill/bbv-utils.scm 213 */
																									obj_t BgL_arg1719z00_2161;
																									obj_t BgL_arg1725z00_2162;

																									BgL_arg1719z00_2161 =
																										(((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1197z00_2160))->
																										BgL_predsz00);
																									BgL_arg1725z00_2162 =
																										CAR(((obj_t)
																											BgL_bsz00_2128));
																									BgL_auxz00_4283 =
																										BGl_loopze70ze7zzsaw_bbvzd2utilszd2
																										(BgL_arg1725z00_2162,
																										((obj_t) BgL_hopz00_2159),
																										BgL_arg1719z00_2161);
																								}
																								((((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1197z00_2160))->
																										BgL_predsz00) =
																									((obj_t) BgL_auxz00_4283),
																									BUNSPEC);
																							}
																							{	/* SawMill/bbv-utils.scm 214 */
																								obj_t BgL_arg1726z00_2163;

																								BgL_arg1726z00_2163 =
																									CDR(
																									((obj_t) BgL_succsz00_2146));
																								{	/* SawMill/bbv-utils.scm 214 */
																									obj_t BgL_auxz00_4294;
																									obj_t BgL_tmpz00_4292;

																									BgL_auxz00_4294 =
																										((obj_t) BgL_hopz00_2159);
																									BgL_tmpz00_4292 =
																										((obj_t)
																										BgL_arg1726z00_2163);
																									SET_CAR(BgL_tmpz00_4292,
																										BgL_auxz00_4294);
																								}
																							}
																						}
																						{	/* SawMill/bbv-utils.scm 215 */
																							obj_t BgL_arg1727z00_2164;
																							obj_t BgL_arg1728z00_2165;

																							{	/* SawMill/bbv-utils.scm 215 */
																								obj_t BgL_arg1729z00_2166;
																								obj_t BgL_arg1731z00_2167;

																								BgL_arg1729z00_2166 =
																									CAR(
																									((obj_t) BgL_succsz00_2146));
																								BgL_arg1731z00_2167 =
																									CDR(((obj_t) BgL_bsz00_2128));
																								BgL_arg1727z00_2164 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1729z00_2166,
																									BgL_arg1731z00_2167);
																							}
																							{	/* SawMill/bbv-utils.scm 216 */
																								obj_t BgL_arg1732z00_2168;

																								BgL_arg1732z00_2168 =
																									CAR(((obj_t) BgL_bsz00_2128));
																								{	/* SawMill/bbv-utils.scm 216 */
																									obj_t BgL_list1733z00_2169;

																									{	/* SawMill/bbv-utils.scm 216 */
																										obj_t BgL_arg1738z00_2170;

																										BgL_arg1738z00_2170 =
																											MAKE_YOUNG_PAIR
																											(BgL_accz00_2129, BNIL);
																										BgL_list1733z00_2169 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1732z00_2168,
																											BgL_arg1738z00_2170);
																									}
																									BgL_arg1728z00_2165 =
																										BGl_bbsetzd2consza2z70zzsaw_bbvzd2utilszd2
																										(BgL_hopz00_2159,
																										BgL_list1733z00_2169);
																								}
																							}
																							{
																								obj_t BgL_accz00_4308;
																								obj_t BgL_bsz00_4307;

																								BgL_bsz00_4307 =
																									BgL_arg1727z00_2164;
																								BgL_accz00_4308 =
																									BgL_arg1728z00_2165;
																								BgL_accz00_2129 =
																									BgL_accz00_4308;
																								BgL_bsz00_2128 = BgL_bsz00_4307;
																								goto
																									BgL_zc3z04anonymousza31673ze3z87_2130;
																							}
																						}
																					}
																				else
																					{	/* SawMill/bbv-utils.scm 218 */
																						obj_t BgL_arg1741z00_2173;
																						obj_t BgL_arg1742z00_2174;

																						{	/* SawMill/bbv-utils.scm 218 */
																							obj_t BgL_arg1743z00_2175;
																							obj_t BgL_arg1744z00_2176;

																							BgL_arg1743z00_2175 =
																								bgl_reverse(BgL_succsz00_2146);
																							BgL_arg1744z00_2176 =
																								CDR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1741z00_2173 =
																								BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																								(BgL_arg1743z00_2175,
																								BgL_arg1744z00_2176);
																						}
																						{	/* SawMill/bbv-utils.scm 219 */
																							obj_t BgL_arg1745z00_2177;

																							BgL_arg1745z00_2177 =
																								CAR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1742z00_2174 =
																								BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2
																								(((BgL_blockz00_bglt)
																									BgL_arg1745z00_2177),
																								BgL_accz00_2129);
																						}
																						{
																							obj_t BgL_accz00_4318;
																							obj_t BgL_bsz00_4317;

																							BgL_bsz00_4317 =
																								BgL_arg1741z00_2173;
																							BgL_accz00_4318 =
																								BgL_arg1742z00_2174;
																							BgL_accz00_2129 = BgL_accz00_4318;
																							BgL_bsz00_2128 = BgL_bsz00_4317;
																							goto
																								BgL_zc3z04anonymousza31673ze3z87_2130;
																						}
																					}
																			}
																	}
																else
																	{	/* SawMill/bbv-utils.scm 199 */
																		if (BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(((BgL_rtl_insz00_bglt) BgL_lastz00_2145)))
																			{	/* SawMill/bbv-utils.scm 221 */
																				bool_t BgL_test2459z00_4322;

																				{	/* SawMill/bbv-utils.scm 221 */
																					bool_t BgL_res2341z00_3315;

																					{	/* SawMill/bbv-utils.scm 221 */
																						BgL_blockz00_bglt BgL_blockz00_3308;

																						BgL_blockz00_3308 =
																							((BgL_blockz00_bglt)
																							CAR(((obj_t) BgL_succsz00_2146)));
																						{	/* SawMill/bbv-utils.scm 103 */
																							long BgL_arg1612z00_3311;
																							obj_t BgL_arg1613z00_3312;

																							{
																								BgL_blocksz00_bglt
																									BgL_auxz00_4326;
																								{
																									obj_t BgL_auxz00_4327;

																									{	/* SawMill/bbv-utils.scm 103 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4328;
																										BgL_tmpz00_4328 =
																											((BgL_objectz00_bglt)
																											BgL_blockz00_3308);
																										BgL_auxz00_4327 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4328);
																									}
																									BgL_auxz00_4326 =
																										((BgL_blocksz00_bglt)
																										BgL_auxz00_4327);
																								}
																								BgL_arg1612z00_3311 =
																									(((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_4326))->
																									BgL_z52markz52);
																							}
																							BgL_arg1613z00_3312 =
																								STRUCT_REF(BgL_accz00_2129,
																								(int) (((long) 0)));
																							BgL_res2341z00_3315 =
																								(BINT(BgL_arg1612z00_3311) ==
																								BgL_arg1613z00_3312);
																					}}
																					BgL_test2459z00_4322 =
																						BgL_res2341z00_3315;
																				}
																				if (BgL_test2459z00_4322)
																					{	/* SawMill/bbv-utils.scm 222 */
																						BgL_blockz00_bglt BgL_hopz00_2185;

																						{	/* SawMill/bbv-utils.scm 222 */
																							obj_t BgL_arg1778z00_2196;
																							obj_t BgL_arg1779z00_2197;

																							BgL_arg1778z00_2196 =
																								CAR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1779z00_2197 =
																								CAR(
																								((obj_t) BgL_succsz00_2146));
																							BgL_hopz00_2185 =
																								BGl_makezd2gozd2blockze70ze7zzsaw_bbvzd2utilszd2
																								(BgL_regsz00_95,
																								BgL_arg1778z00_2196,
																								BgL_arg1779z00_2197);
																						}
																						{	/* SawMill/bbv-utils.scm 223 */
																							BgL_blockz00_bglt
																								BgL_i1198z00_2186;
																							BgL_i1198z00_2186 =
																								((BgL_blockz00_bglt)
																								CAR(((obj_t)
																										BgL_succsz00_2146)));
																							{
																								obj_t BgL_auxz00_4345;

																								{	/* SawMill/bbv-utils.scm 225 */
																									obj_t BgL_arg1756z00_2187;
																									obj_t BgL_arg1757z00_2188;

																									BgL_arg1756z00_2187 =
																										(((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1198z00_2186))->
																										BgL_predsz00);
																									BgL_arg1757z00_2188 =
																										CAR(((obj_t)
																											BgL_bsz00_2128));
																									BgL_auxz00_4345 =
																										BGl_loopze70ze7zzsaw_bbvzd2utilszd2
																										(BgL_arg1757z00_2188,
																										((obj_t) BgL_hopz00_2185),
																										BgL_arg1756z00_2187);
																								}
																								((((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1198z00_2186))->
																										BgL_predsz00) =
																									((obj_t) BgL_auxz00_4345),
																									BUNSPEC);
																							}
																							{	/* SawMill/bbv-utils.scm 226 */
																								obj_t BgL_auxz00_4354;
																								obj_t BgL_tmpz00_4352;

																								BgL_auxz00_4354 =
																									((obj_t) BgL_hopz00_2185);
																								BgL_tmpz00_4352 =
																									((obj_t) BgL_succsz00_2146);
																								SET_CAR(BgL_tmpz00_4352,
																									BgL_auxz00_4354);
																							}
																						}
																						{	/* SawMill/bbv-utils.scm 227 */
																							obj_t BgL_arg1759z00_2189;
																							obj_t BgL_arg1760z00_2190;

																							{	/* SawMill/bbv-utils.scm 227 */
																								obj_t BgL_arg1761z00_2191;
																								obj_t BgL_arg1768z00_2192;

																								{	/* SawMill/bbv-utils.scm 227 */
																									obj_t BgL_pairz00_3324;

																									BgL_pairz00_3324 =
																										CDR(
																										((obj_t)
																											BgL_succsz00_2146));
																									BgL_arg1761z00_2191 =
																										CAR(BgL_pairz00_3324);
																								}
																								BgL_arg1768z00_2192 =
																									CDR(((obj_t) BgL_bsz00_2128));
																								BgL_arg1759z00_2189 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1761z00_2191,
																									BgL_arg1768z00_2192);
																							}
																							{	/* SawMill/bbv-utils.scm 228 */
																								obj_t BgL_arg1771z00_2193;

																								BgL_arg1771z00_2193 =
																									CAR(((obj_t) BgL_bsz00_2128));
																								{	/* SawMill/bbv-utils.scm 228 */
																									obj_t BgL_list1772z00_2194;

																									{	/* SawMill/bbv-utils.scm 228 */
																										obj_t BgL_arg1775z00_2195;

																										BgL_arg1775z00_2195 =
																											MAKE_YOUNG_PAIR
																											(BgL_accz00_2129, BNIL);
																										BgL_list1772z00_2194 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1771z00_2193,
																											BgL_arg1775z00_2195);
																									}
																									BgL_arg1760z00_2190 =
																										BGl_bbsetzd2consza2z70zzsaw_bbvzd2utilszd2
																										(BgL_hopz00_2185,
																										BgL_list1772z00_2194);
																								}
																							}
																							{
																								obj_t BgL_accz00_4369;
																								obj_t BgL_bsz00_4368;

																								BgL_bsz00_4368 =
																									BgL_arg1759z00_2189;
																								BgL_accz00_4369 =
																									BgL_arg1760z00_2190;
																								BgL_accz00_2129 =
																									BgL_accz00_4369;
																								BgL_bsz00_2128 = BgL_bsz00_4368;
																								goto
																									BgL_zc3z04anonymousza31673ze3z87_2130;
																							}
																						}
																					}
																				else
																					{	/* SawMill/bbv-utils.scm 229 */
																						obj_t BgL_arg1782z00_2198;
																						obj_t BgL_arg1784z00_2199;

																						{	/* SawMill/bbv-utils.scm 229 */
																							obj_t BgL_arg1790z00_2200;

																							BgL_arg1790z00_2200 =
																								CDR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1782z00_2198 =
																								BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																								(BgL_succsz00_2146,
																								BgL_arg1790z00_2200);
																						}
																						{	/* SawMill/bbv-utils.scm 230 */
																							obj_t BgL_arg1796z00_2201;

																							BgL_arg1796z00_2201 =
																								CAR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1784z00_2199 =
																								BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2
																								(((BgL_blockz00_bglt)
																									BgL_arg1796z00_2201),
																								BgL_accz00_2129);
																						}
																						{
																							obj_t BgL_accz00_4378;
																							obj_t BgL_bsz00_4377;

																							BgL_bsz00_4377 =
																								BgL_arg1782z00_2198;
																							BgL_accz00_4378 =
																								BgL_arg1784z00_2199;
																							BgL_accz00_2129 = BgL_accz00_4378;
																							BgL_bsz00_2128 = BgL_bsz00_4377;
																							goto
																								BgL_zc3z04anonymousza31673ze3z87_2130;
																						}
																					}
																			}
																		else
																			{	/* SawMill/bbv-utils.scm 231 */
																				bool_t BgL_test2460z00_4379;

																				{	/* SawMill/bbv-utils.scm 231 */
																					bool_t BgL_res2342z00_3337;

																					{	/* SawMill/bbv-utils.scm 231 */
																						BgL_blockz00_bglt BgL_blockz00_3330;

																						BgL_blockz00_3330 =
																							((BgL_blockz00_bglt)
																							CAR(((obj_t) BgL_succsz00_2146)));
																						{	/* SawMill/bbv-utils.scm 103 */
																							long BgL_arg1612z00_3333;
																							obj_t BgL_arg1613z00_3334;

																							{
																								BgL_blocksz00_bglt
																									BgL_auxz00_4383;
																								{
																									obj_t BgL_auxz00_4384;

																									{	/* SawMill/bbv-utils.scm 103 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4385;
																										BgL_tmpz00_4385 =
																											((BgL_objectz00_bglt)
																											BgL_blockz00_3330);
																										BgL_auxz00_4384 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4385);
																									}
																									BgL_auxz00_4383 =
																										((BgL_blocksz00_bglt)
																										BgL_auxz00_4384);
																								}
																								BgL_arg1612z00_3333 =
																									(((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_4383))->
																									BgL_z52markz52);
																							}
																							BgL_arg1613z00_3334 =
																								STRUCT_REF(BgL_accz00_2129,
																								(int) (((long) 0)));
																							BgL_res2342z00_3337 =
																								(BINT(BgL_arg1612z00_3333) ==
																								BgL_arg1613z00_3334);
																					}}
																					BgL_test2460z00_4379 =
																						BgL_res2342z00_3337;
																				}
																				if (BgL_test2460z00_4379)
																					{	/* SawMill/bbv-utils.scm 232 */
																						BgL_blockz00_bglt BgL_i1199z00_2205;

																						BgL_i1199z00_2205 =
																							((BgL_blockz00_bglt)
																							CAR(((obj_t) BgL_bsz00_2128)));
																						{	/* SawMill/bbv-utils.scm 233 */
																							obj_t BgL_lpz00_2206;
																							BgL_rtl_insz00_bglt
																								BgL_goz00_2207;
																							BgL_lpz00_2206 =
																								BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																								((((BgL_blockz00_bglt)
																										COBJECT
																										(BgL_i1199z00_2205))->
																									BgL_firstz00));
																							{	/* SawMill/bbv-utils.scm 234 */
																								BgL_rtl_insz00_bglt
																									BgL_new1203z00_2214;
																								{	/* SawMill/bbv-utils.scm 234 */
																									BgL_rtl_insz00_bglt
																										BgL_tmp1201z00_2218;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_wide1202z00_2219;
																									{
																										BgL_rtl_insz00_bglt
																											BgL_auxz00_4399;
																										{	/* SawMill/bbv-utils.scm 234 */
																											BgL_rtl_insz00_bglt
																												BgL_new1200z00_2221;
																											BgL_new1200z00_2221 =
																												((BgL_rtl_insz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_rtl_insz00_bgl))));
																											{	/* SawMill/bbv-utils.scm 234 */
																												long
																													BgL_arg1824z00_2222;
																												{	/* SawMill/bbv-utils.scm 234 */
																													long
																														BgL_res2343z00_3340;
																													BgL_res2343z00_3340 =
																														BGL_CLASS_INDEX
																														(BGl_rtl_insz00zzsaw_defsz00);
																													BgL_arg1824z00_2222 =
																														BgL_res2343z00_3340;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1200z00_2221),
																													BgL_arg1824z00_2222);
																											}
																											{	/* SawMill/bbv-utils.scm 234 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_4404;
																												BgL_tmpz00_4404 =
																													((BgL_objectz00_bglt)
																													BgL_new1200z00_2221);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_4404,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1200z00_2221);
																											BgL_auxz00_4399 =
																												BgL_new1200z00_2221;
																										}
																										BgL_tmp1201z00_2218 =
																											((BgL_rtl_insz00_bglt)
																											BgL_auxz00_4399);
																									}
																									BgL_wide1202z00_2219 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_rtl_inszf2bbvzf2_bgl))));
																									{	/* SawMill/bbv-utils.scm 234 */
																										obj_t BgL_auxz00_4412;
																										BgL_objectz00_bglt
																											BgL_tmpz00_4410;
																										BgL_auxz00_4412 =
																											((obj_t)
																											BgL_wide1202z00_2219);
																										BgL_tmpz00_4410 =
																											((BgL_objectz00_bglt)
																											BgL_tmp1201z00_2218);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_4410,
																											BgL_auxz00_4412);
																									}
																									((BgL_objectz00_bglt)
																										BgL_tmp1201z00_2218);
																									{	/* SawMill/bbv-utils.scm 234 */
																										long BgL_arg1823z00_2220;

																										{	/* SawMill/bbv-utils.scm 234 */
																											long BgL_res2344z00_3346;

																											BgL_res2344z00_3346 =
																												BGL_CLASS_INDEX
																												(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																											BgL_arg1823z00_2220 =
																												BgL_res2344z00_3346;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_tmp1201z00_2218),
																											BgL_arg1823z00_2220);
																									}
																									BgL_new1203z00_2214 =
																										((BgL_rtl_insz00_bglt)
																										BgL_tmp1201z00_2218);
																								}
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1203z00_2214)))->
																										BgL_locz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1203z00_2214)))->
																										BgL_z52spillz52) =
																									((obj_t) BNIL), BUNSPEC);
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1203z00_2214)))->
																										BgL_destz00) =
																									((obj_t) BFALSE), BUNSPEC);
																								{
																									BgL_rtl_funz00_bglt
																										BgL_auxz00_4426;
																									{	/* SawMill/bbv-utils.scm 235 */
																										BgL_rtl_goz00_bglt
																											BgL_new1205z00_2215;
																										{	/* SawMill/bbv-utils.scm 235 */
																											BgL_rtl_goz00_bglt
																												BgL_new1204z00_2216;
																											BgL_new1204z00_2216 =
																												((BgL_rtl_goz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_rtl_goz00_bgl))));
																											{	/* SawMill/bbv-utils.scm 235 */
																												long
																													BgL_arg1822z00_2217;
																												{	/* SawMill/bbv-utils.scm 235 */
																													long
																														BgL_res2345z00_3350;
																													{	/* SawMill/bbv-utils.scm 235 */
																														obj_t
																															BgL_classz00_3349;
																														BgL_classz00_3349 =
																															BGl_rtl_goz00zzsaw_defsz00;
																														BgL_res2345z00_3350
																															=
																															BGL_CLASS_INDEX
																															(BgL_classz00_3349);
																													}
																													BgL_arg1822z00_2217 =
																														BgL_res2345z00_3350;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1204z00_2216),
																													BgL_arg1822z00_2217);
																											}
																											BgL_new1205z00_2215 =
																												BgL_new1204z00_2216;
																										}
																										((((BgL_rtl_funz00_bglt)
																													COBJECT((
																															(BgL_rtl_funz00_bglt)
																															BgL_new1205z00_2215)))->
																												BgL_locz00) =
																											((obj_t) BFALSE),
																											BUNSPEC);
																										((((BgL_rtl_goz00_bglt)
																													COBJECT
																													(BgL_new1205z00_2215))->
																												BgL_toz00) =
																											((BgL_blockz00_bglt) (
																													(BgL_blockz00_bglt)
																													CAR(((obj_t)
																															BgL_succsz00_2146)))),
																											BUNSPEC);
																										BgL_auxz00_4426 =
																											((BgL_rtl_funz00_bglt)
																											BgL_new1205z00_2215);
																									}
																									((((BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_new1203z00_2214)))->
																											BgL_funz00) =
																										((BgL_rtl_funz00_bglt)
																											BgL_auxz00_4426),
																										BUNSPEC);
																								}
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1203z00_2214)))->
																										BgL_argsz00) =
																									((obj_t) BNIL), BUNSPEC);
																								{
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_4442;
																									{
																										obj_t BgL_auxz00_4443;

																										{	/* SawMill/bbv-utils.scm 239 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4444;
																											BgL_tmpz00_4444 =
																												((BgL_objectz00_bglt)
																												BgL_new1203z00_2214);
																											BgL_auxz00_4443 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_4444);
																										}
																										BgL_auxz00_4442 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_4443);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_4442))->
																											BgL_defz00) =
																										((obj_t) ((obj_t)
																												BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																												(BgL_regsz00_95))),
																										BUNSPEC);
																								}
																								{
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_4451;
																									{
																										obj_t BgL_auxz00_4452;

																										{	/* SawMill/bbv-utils.scm 241 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4453;
																											BgL_tmpz00_4453 =
																												((BgL_objectz00_bglt)
																												BgL_new1203z00_2214);
																											BgL_auxz00_4452 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_4453);
																										}
																										BgL_auxz00_4451 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_4452);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_4451))->
																											BgL_outz00) =
																										((obj_t) ((obj_t)
																												BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																												(BgL_regsz00_95))),
																										BUNSPEC);
																								}
																								{
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_4460;
																									{
																										obj_t BgL_auxz00_4461;

																										{	/* SawMill/bbv-utils.scm 240 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4462;
																											BgL_tmpz00_4462 =
																												((BgL_objectz00_bglt)
																												BgL_new1203z00_2214);
																											BgL_auxz00_4461 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_4462);
																										}
																										BgL_auxz00_4460 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_4461);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_4460))->
																											BgL_inz00) =
																										((obj_t) ((obj_t)
																												BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																												(BgL_regsz00_95))),
																										BUNSPEC);
																								}
																								{
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_4469;
																									{
																										obj_t BgL_auxz00_4470;

																										{	/* SawMill/bbv-utils.scm 240 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_4471;
																											BgL_tmpz00_4471 =
																												((BgL_objectz00_bglt)
																												BgL_new1203z00_2214);
																											BgL_auxz00_4470 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_4471);
																										}
																										BgL_auxz00_4469 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_4470);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_4469))->
																											BgL_z52hashz52) =
																										((obj_t) BFALSE), BUNSPEC);
																								}
																								BgL_goz00_2207 =
																									BgL_new1203z00_2214;
																							}
																							{	/* SawMill/bbv-utils.scm 242 */
																								bool_t BgL_test2461z00_4476;

																								{	/* SawMill/bbv-utils.scm 242 */
																									obj_t BgL_arg1820z00_2212;

																									BgL_arg1820z00_2212 =
																										CAR(BgL_lpz00_2206);
																									BgL_test2461z00_4476 =
																										BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2
																										(((BgL_rtl_insz00_bglt)
																											BgL_arg1820z00_2212));
																								}
																								if (BgL_test2461z00_4476)
																									{	/* SawMill/bbv-utils.scm 243 */
																										obj_t BgL_tmpz00_4480;

																										BgL_tmpz00_4480 =
																											((obj_t) BgL_goz00_2207);
																										SET_CAR(BgL_lpz00_2206,
																											BgL_tmpz00_4480);
																									}
																								else
																									{	/* SawMill/bbv-utils.scm 244 */
																										obj_t BgL_arg1811z00_2210;

																										{	/* SawMill/bbv-utils.scm 244 */
																											obj_t
																												BgL_list1812z00_2211;
																											BgL_list1812z00_2211 =
																												MAKE_YOUNG_PAIR(((obj_t)
																													BgL_goz00_2207),
																												BNIL);
																											BgL_arg1811z00_2210 =
																												BgL_list1812z00_2211;
																										}
																										SET_CDR(BgL_lpz00_2206,
																											BgL_arg1811z00_2210);
																									}
																							}
																						}
																						{	/* SawMill/bbv-utils.scm 245 */
																							obj_t BgL_arg1825z00_2223;
																							obj_t BgL_arg1826z00_2224;

																							BgL_arg1825z00_2223 =
																								CDR(((obj_t) BgL_bsz00_2128));
																							{	/* SawMill/bbv-utils.scm 245 */
																								obj_t BgL_arg1827z00_2225;

																								BgL_arg1827z00_2225 =
																									CAR(((obj_t) BgL_bsz00_2128));
																								BgL_arg1826z00_2224 =
																									BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2
																									(((BgL_blockz00_bglt)
																										BgL_arg1827z00_2225),
																									BgL_accz00_2129);
																							}
																							{
																								obj_t BgL_accz00_4493;
																								obj_t BgL_bsz00_4492;

																								BgL_bsz00_4492 =
																									BgL_arg1825z00_2223;
																								BgL_accz00_4493 =
																									BgL_arg1826z00_2224;
																								BgL_accz00_2129 =
																									BgL_accz00_4493;
																								BgL_bsz00_2128 = BgL_bsz00_4492;
																								goto
																									BgL_zc3z04anonymousza31673ze3z87_2130;
																							}
																						}
																					}
																				else
																					{	/* SawMill/bbv-utils.scm 247 */
																						obj_t BgL_arg1828z00_2226;
																						obj_t BgL_arg1829z00_2227;

																						{	/* SawMill/bbv-utils.scm 247 */
																							obj_t BgL_arg1830z00_2228;

																							BgL_arg1830z00_2228 =
																								CDR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1828z00_2226 =
																								BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																								(BgL_succsz00_2146,
																								BgL_arg1830z00_2228);
																						}
																						{	/* SawMill/bbv-utils.scm 248 */
																							obj_t BgL_arg1831z00_2229;

																							BgL_arg1831z00_2229 =
																								CAR(((obj_t) BgL_bsz00_2128));
																							BgL_arg1829z00_2227 =
																								BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2
																								(((BgL_blockz00_bglt)
																									BgL_arg1831z00_2229),
																								BgL_accz00_2129);
																						}
																						{
																							obj_t BgL_accz00_4502;
																							obj_t BgL_bsz00_4501;

																							BgL_bsz00_4501 =
																								BgL_arg1828z00_2226;
																							BgL_accz00_4502 =
																								BgL_arg1829z00_2227;
																							BgL_accz00_2129 = BgL_accz00_4502;
																							BgL_bsz00_2128 = BgL_bsz00_4501;
																							goto
																								BgL_zc3z04anonymousza31673ze3z87_2130;
																						}
																					}
																			}
																	}
															}
														}
													}
												}
											else
												{	/* SawMill/bbv-utils.scm 249 */
													bool_t BgL_test2462z00_4503;

													{	/* SawMill/bbv-utils.scm 249 */
														bool_t BgL_test2463z00_4504;

														{	/* SawMill/bbv-utils.scm 249 */
															obj_t BgL_arg1881z00_2277;

															BgL_arg1881z00_2277 =
																CAR(((obj_t) BgL_bsz00_2128));
															BgL_test2463z00_4504 =
																BGl_gotozd2blockzf3ze70zc6zzsaw_bbvzd2utilszd2
																(BgL_arg1881z00_2277);
														}
														if (BgL_test2463z00_4504)
															{	/* SawMill/bbv-utils.scm 249 */
																bool_t BgL_test2464z00_4508;

																{	/* SawMill/bbv-utils.scm 249 */
																	bool_t BgL_res2347z00_3375;

																	{	/* SawMill/bbv-utils.scm 249 */
																		BgL_blockz00_bglt BgL_blockz00_3368;

																		{	/* SawMill/bbv-utils.scm 249 */
																			obj_t BgL_pairz00_3367;

																			BgL_pairz00_3367 =
																				(((BgL_blockz00_bglt)
																					COBJECT(BgL_i1193z00_2136))->
																				BgL_succsz00);
																			BgL_blockz00_3368 =
																				((BgL_blockz00_bglt)
																				CAR(BgL_pairz00_3367));
																		}
																		{	/* SawMill/bbv-utils.scm 103 */
																			long BgL_arg1612z00_3371;
																			obj_t BgL_arg1613z00_3372;

																			{
																				BgL_blocksz00_bglt BgL_auxz00_4512;

																				{
																					obj_t BgL_auxz00_4513;

																					{	/* SawMill/bbv-utils.scm 103 */
																						BgL_objectz00_bglt BgL_tmpz00_4514;

																						BgL_tmpz00_4514 =
																							((BgL_objectz00_bglt)
																							BgL_blockz00_3368);
																						BgL_auxz00_4513 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4514);
																					}
																					BgL_auxz00_4512 =
																						((BgL_blocksz00_bglt)
																						BgL_auxz00_4513);
																				}
																				BgL_arg1612z00_3371 =
																					(((BgL_blocksz00_bglt)
																						COBJECT(BgL_auxz00_4512))->
																					BgL_z52markz52);
																			}
																			BgL_arg1613z00_3372 =
																				STRUCT_REF(BgL_accz00_2129,
																				(int) (((long) 0)));
																			BgL_res2347z00_3375 =
																				(BINT(BgL_arg1612z00_3371) ==
																				BgL_arg1613z00_3372);
																	}}
																	BgL_test2464z00_4508 = BgL_res2347z00_3375;
																}
																if (BgL_test2464z00_4508)
																	{	/* SawMill/bbv-utils.scm 249 */
																		BgL_test2462z00_4503 = ((bool_t) 0);
																	}
																else
																	{	/* SawMill/bbv-utils.scm 249 */
																		BgL_test2462z00_4503 = ((bool_t) 1);
																	}
															}
														else
															{	/* SawMill/bbv-utils.scm 249 */
																BgL_test2462z00_4503 = ((bool_t) 0);
															}
													}
													if (BgL_test2462z00_4503)
														{	/* SawMill/bbv-utils.scm 250 */
															BgL_blockz00_bglt BgL_i1206z00_2243;

															BgL_i1206z00_2243 =
																((BgL_blockz00_bglt)
																CAR(((obj_t) BgL_bsz00_2128)));
															{
																obj_t BgL_auxz00_4526;

																if (NULLP(CDR(
																			(((BgL_blockz00_bglt)
																					COBJECT(BgL_i1206z00_2243))->
																				BgL_firstz00))))
																	{	/* SawMill/bbv-utils.scm 253 */
																		BgL_rtl_insz00_bglt BgL_arg1853z00_2247;

																		{	/* SawMill/bbv-utils.scm 253 */
																			BgL_rtl_insz00_bglt BgL_new1210z00_2249;

																			{	/* SawMill/bbv-utils.scm 258 */
																				BgL_rtl_insz00_bglt BgL_tmp1208z00_2253;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_wide1209z00_2254;
																				{
																					BgL_rtl_insz00_bglt BgL_auxz00_4531;

																					{	/* SawMill/bbv-utils.scm 258 */
																						BgL_rtl_insz00_bglt
																							BgL_new1207z00_2256;
																						BgL_new1207z00_2256 =
																							((BgL_rtl_insz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_rtl_insz00_bgl))));
																						{	/* SawMill/bbv-utils.scm 258 */
																							long BgL_arg1857z00_2257;

																							{	/* SawMill/bbv-utils.scm 258 */
																								long BgL_res2349z00_3380;

																								{	/* SawMill/bbv-utils.scm 258 */
																									obj_t BgL_classz00_3379;

																									BgL_classz00_3379 =
																										BGl_rtl_insz00zzsaw_defsz00;
																									BgL_res2349z00_3380 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_3379);
																								}
																								BgL_arg1857z00_2257 =
																									BgL_res2349z00_3380;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1207z00_2256),
																								BgL_arg1857z00_2257);
																						}
																						{	/* SawMill/bbv-utils.scm 258 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_4536;
																							BgL_tmpz00_4536 =
																								((BgL_objectz00_bglt)
																								BgL_new1207z00_2256);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_4536, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1207z00_2256);
																						BgL_auxz00_4531 =
																							BgL_new1207z00_2256;
																					}
																					BgL_tmp1208z00_2253 =
																						((BgL_rtl_insz00_bglt)
																						BgL_auxz00_4531);
																				}
																				BgL_wide1209z00_2254 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_rtl_inszf2bbvzf2_bgl))));
																				{	/* SawMill/bbv-utils.scm 258 */
																					obj_t BgL_auxz00_4544;
																					BgL_objectz00_bglt BgL_tmpz00_4542;

																					BgL_auxz00_4544 =
																						((obj_t) BgL_wide1209z00_2254);
																					BgL_tmpz00_4542 =
																						((BgL_objectz00_bglt)
																						BgL_tmp1208z00_2253);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_4542, BgL_auxz00_4544);
																				}
																				((BgL_objectz00_bglt)
																					BgL_tmp1208z00_2253);
																				{	/* SawMill/bbv-utils.scm 258 */
																					long BgL_arg1856z00_2255;

																					{	/* SawMill/bbv-utils.scm 258 */
																						long BgL_res2350z00_3386;

																						{	/* SawMill/bbv-utils.scm 258 */
																							obj_t BgL_classz00_3385;

																							BgL_classz00_3385 =
																								BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
																							BgL_res2350z00_3386 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_3385);
																						}
																						BgL_arg1856z00_2255 =
																							BgL_res2350z00_3386;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_tmp1208z00_2253),
																						BgL_arg1856z00_2255);
																				}
																				BgL_new1210z00_2249 =
																					((BgL_rtl_insz00_bglt)
																					BgL_tmp1208z00_2253);
																			}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1210z00_2249)))->
																					BgL_locz00) =
																				((obj_t) BFALSE), BUNSPEC);
																			((((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_new1210z00_2249)))->
																					BgL_z52spillz52) =
																				((obj_t) BNIL), BUNSPEC);
																			((((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_new1210z00_2249)))->
																					BgL_destz00) =
																				((obj_t) BFALSE), BUNSPEC);
																			{
																				BgL_rtl_funz00_bglt BgL_auxz00_4558;

																				{	/* SawMill/bbv-utils.scm 254 */
																					BgL_rtl_nopz00_bglt
																						BgL_new1212z00_2250;
																					{	/* SawMill/bbv-utils.scm 254 */
																						BgL_rtl_nopz00_bglt
																							BgL_new1211z00_2251;
																						BgL_new1211z00_2251 =
																							((BgL_rtl_nopz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_rtl_nopz00_bgl))));
																						{	/* SawMill/bbv-utils.scm 254 */
																							long BgL_arg1855z00_2252;

																							{	/* SawMill/bbv-utils.scm 254 */
																								long BgL_res2351z00_3390;

																								{	/* SawMill/bbv-utils.scm 254 */
																									obj_t BgL_classz00_3389;

																									BgL_classz00_3389 =
																										BGl_rtl_nopz00zzsaw_defsz00;
																									BgL_res2351z00_3390 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_3389);
																								}
																								BgL_arg1855z00_2252 =
																									BgL_res2351z00_3390;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1211z00_2251),
																								BgL_arg1855z00_2252);
																						}
																						BgL_new1212z00_2250 =
																							BgL_new1211z00_2251;
																					}
																					((((BgL_rtl_funz00_bglt) COBJECT(
																									((BgL_rtl_funz00_bglt)
																										BgL_new1212z00_2250)))->
																							BgL_locz00) =
																						((obj_t) BFALSE), BUNSPEC);
																					BgL_auxz00_4558 =
																						((BgL_rtl_funz00_bglt)
																						BgL_new1212z00_2250);
																				}
																				((((BgL_rtl_insz00_bglt) COBJECT(
																								((BgL_rtl_insz00_bglt)
																									BgL_new1210z00_2249)))->
																						BgL_funz00) =
																					((BgL_rtl_funz00_bglt)
																						BgL_auxz00_4558), BUNSPEC);
																			}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1210z00_2249)))->
																					BgL_argsz00) =
																				((obj_t) BNIL), BUNSPEC);
																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_4570;
																				{
																					obj_t BgL_auxz00_4571;

																					{	/* SawMill/bbv-utils.scm 257 */
																						BgL_objectz00_bglt BgL_tmpz00_4572;

																						BgL_tmpz00_4572 =
																							((BgL_objectz00_bglt)
																							BgL_new1210z00_2249);
																						BgL_auxz00_4571 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4572);
																					}
																					BgL_auxz00_4570 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_4571);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_4570))->
																						BgL_defz00) =
																					((obj_t) ((obj_t)
																							BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																							(BgL_regsz00_95))), BUNSPEC);
																			}
																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_4579;
																				{
																					obj_t BgL_auxz00_4580;

																					{	/* SawMill/bbv-utils.scm 259 */
																						BgL_objectz00_bglt BgL_tmpz00_4581;

																						BgL_tmpz00_4581 =
																							((BgL_objectz00_bglt)
																							BgL_new1210z00_2249);
																						BgL_auxz00_4580 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4581);
																					}
																					BgL_auxz00_4579 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_4580);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_4579))->
																						BgL_outz00) =
																					((obj_t) ((obj_t)
																							BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																							(BgL_regsz00_95))), BUNSPEC);
																			}
																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_4588;
																				{
																					obj_t BgL_auxz00_4589;

																					{	/* SawMill/bbv-utils.scm 258 */
																						BgL_objectz00_bglt BgL_tmpz00_4590;

																						BgL_tmpz00_4590 =
																							((BgL_objectz00_bglt)
																							BgL_new1210z00_2249);
																						BgL_auxz00_4589 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4590);
																					}
																					BgL_auxz00_4588 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_4589);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_4588))->
																						BgL_inz00) =
																					((obj_t) ((obj_t)
																							BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																							(BgL_regsz00_95))), BUNSPEC);
																			}
																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_4597;
																				{
																					obj_t BgL_auxz00_4598;

																					{	/* SawMill/bbv-utils.scm 258 */
																						BgL_objectz00_bglt BgL_tmpz00_4599;

																						BgL_tmpz00_4599 =
																							((BgL_objectz00_bglt)
																							BgL_new1210z00_2249);
																						BgL_auxz00_4598 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_4599);
																					}
																					BgL_auxz00_4597 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_4598);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_4597))->
																						BgL_z52hashz52) =
																					((obj_t) BFALSE), BUNSPEC);
																			}
																			BgL_arg1853z00_2247 = BgL_new1210z00_2249;
																		}
																		{	/* SawMill/bbv-utils.scm 253 */
																			obj_t BgL_list1854z00_2248;

																			BgL_list1854z00_2248 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1853z00_2247), BNIL);
																			BgL_auxz00_4526 = BgL_list1854z00_2248;
																	}}
																else
																	{	/* SawMill/bbv-utils.scm 260 */
																		obj_t BgL_auxz00_4606;

																		{	/* SawMill/bbv-utils.scm 260 */
																			obj_t BgL_pairz00_3398;

																			BgL_pairz00_3398 =
																				bgl_reverse(
																				(((BgL_blockz00_bglt)
																						COBJECT(BgL_i1206z00_2243))->
																					BgL_firstz00));
																			BgL_auxz00_4606 = CDR(BgL_pairz00_3398);
																		}
																		BgL_auxz00_4526 =
																			bgl_reverse(BgL_auxz00_4606);
																	}
																((((BgL_blockz00_bglt)
																			COBJECT(BgL_i1206z00_2243))->
																		BgL_firstz00) =
																	((obj_t) BgL_auxz00_4526), BUNSPEC);
															}
															{	/* SawMill/bbv-utils.scm 261 */
																obj_t BgL_arg1865z00_2263;
																obj_t BgL_arg1866z00_2264;

																{	/* SawMill/bbv-utils.scm 261 */
																	obj_t BgL_arg1868z00_2265;
																	obj_t BgL_arg1870z00_2266;

																	BgL_arg1868z00_2265 =
																		(((BgL_blockz00_bglt)
																			COBJECT(BgL_i1193z00_2136))->
																		BgL_succsz00);
																	BgL_arg1870z00_2266 =
																		CDR(((obj_t) BgL_bsz00_2128));
																	BgL_arg1865z00_2263 =
																		BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																		(BgL_arg1868z00_2265, BgL_arg1870z00_2266);
																}
																{	/* SawMill/bbv-utils.scm 262 */
																	obj_t BgL_arg1871z00_2267;

																	BgL_arg1871z00_2267 =
																		CAR(((obj_t) BgL_bsz00_2128));
																	BgL_arg1866z00_2264 =
																		BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
																		((BgL_blockz00_bglt) BgL_arg1871z00_2267),
																		BgL_accz00_2129);
																}
																{
																	obj_t BgL_accz00_4621;
																	obj_t BgL_bsz00_4620;

																	BgL_bsz00_4620 = BgL_arg1865z00_2263;
																	BgL_accz00_4621 = BgL_arg1866z00_2264;
																	BgL_accz00_2129 = BgL_accz00_4621;
																	BgL_bsz00_2128 = BgL_bsz00_4620;
																	goto BgL_zc3z04anonymousza31673ze3z87_2130;
																}
															}
														}
													else
														{	/* SawMill/bbv-utils.scm 264 */
															obj_t BgL_arg1872z00_2268;
															obj_t BgL_arg1873z00_2269;

															{	/* SawMill/bbv-utils.scm 264 */
																obj_t BgL_arg1874z00_2270;
																obj_t BgL_arg1876z00_2271;

																BgL_arg1874z00_2270 =
																	(((BgL_blockz00_bglt)
																		COBJECT(BgL_i1193z00_2136))->BgL_succsz00);
																BgL_arg1876z00_2271 =
																	CDR(((obj_t) BgL_bsz00_2128));
																BgL_arg1872z00_2268 =
																	BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																	(BgL_arg1874z00_2270, BgL_arg1876z00_2271);
															}
															{	/* SawMill/bbv-utils.scm 265 */
																obj_t BgL_arg1877z00_2272;

																BgL_arg1877z00_2272 =
																	CAR(((obj_t) BgL_bsz00_2128));
																BgL_arg1873z00_2269 =
																	BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
																	((BgL_blockz00_bglt) BgL_arg1877z00_2272),
																	BgL_accz00_2129);
															}
															{
																obj_t BgL_accz00_4631;
																obj_t BgL_bsz00_4630;

																BgL_bsz00_4630 = BgL_arg1872z00_2268;
																BgL_accz00_4631 = BgL_arg1873z00_2269;
																BgL_accz00_2129 = BgL_accz00_4631;
																BgL_bsz00_2128 = BgL_bsz00_4630;
																goto BgL_zc3z04anonymousza31673ze3z87_2130;
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



/* goto-block?~0 */
	bool_t BGl_gotozd2blockzf3ze70zc6zzsaw_bbvzd2utilszd2(obj_t BgL_bz00_2292)
	{
		{	/* SawMill/bbv-utils.scm 154 */
			{	/* SawMill/bbv-utils.scm 153 */
				obj_t BgL_iz00_2297;

				BgL_iz00_2297 =
					CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
						(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_bz00_2292)))->BgL_firstz00)));
				return
					BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
					((BgL_rtl_insz00_bglt) BgL_iz00_2297));
			}
		}

	}



/* make-go-block~0 */
	BgL_blockz00_bglt BGl_makezd2gozd2blockze70ze7zzsaw_bbvzd2utilszd2(obj_t
		BgL_regsz00_3713, obj_t BgL_bsz00_2314, obj_t BgL_toz00_2315)
	{
		{	/* SawMill/bbv-utils.scm 180 */
			{	/* SawMill/bbv-utils.scm 168 */
				BgL_blockz00_bglt BgL_new1171z00_2318;

				{	/* SawMill/bbv-utils.scm 169 */
					BgL_blockz00_bglt BgL_tmp1181z00_2338;
					BgL_blocksz00_bglt BgL_wide1182z00_2339;

					{
						BgL_blockz00_bglt BgL_auxz00_4638;

						{	/* SawMill/bbv-utils.scm 169 */
							BgL_blockz00_bglt BgL_new1180z00_2341;

							BgL_new1180z00_2341 =
								((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							{	/* SawMill/bbv-utils.scm 169 */
								long BgL_arg1919z00_2342;

								{	/* SawMill/bbv-utils.scm 169 */
									long BgL_res2326z00_3198;

									BgL_res2326z00_3198 =
										BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
									BgL_arg1919z00_2342 = BgL_res2326z00_3198;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1180z00_2341),
									BgL_arg1919z00_2342);
							}
							{	/* SawMill/bbv-utils.scm 169 */
								BgL_objectz00_bglt BgL_tmpz00_4643;

								BgL_tmpz00_4643 = ((BgL_objectz00_bglt) BgL_new1180z00_2341);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4643, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1180z00_2341);
							BgL_auxz00_4638 = BgL_new1180z00_2341;
						}
						BgL_tmp1181z00_2338 = ((BgL_blockz00_bglt) BgL_auxz00_4638);
					}
					BgL_wide1182z00_2339 =
						((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_blocksz00_bgl))));
					{	/* SawMill/bbv-utils.scm 169 */
						obj_t BgL_auxz00_4651;
						BgL_objectz00_bglt BgL_tmpz00_4649;

						BgL_auxz00_4651 = ((obj_t) BgL_wide1182z00_2339);
						BgL_tmpz00_4649 = ((BgL_objectz00_bglt) BgL_tmp1181z00_2338);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4649, BgL_auxz00_4651);
					}
					((BgL_objectz00_bglt) BgL_tmp1181z00_2338);
					{	/* SawMill/bbv-utils.scm 169 */
						long BgL_arg1918z00_2340;

						{	/* SawMill/bbv-utils.scm 169 */
							long BgL_res2327z00_3204;

							BgL_res2327z00_3204 =
								BGL_CLASS_INDEX(BGl_blockSz00zzsaw_bbvzd2typeszd2);
							BgL_arg1918z00_2340 = BgL_res2327z00_3204;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1181z00_2338), BgL_arg1918z00_2340);
					}
					BgL_new1171z00_2318 = ((BgL_blockz00_bglt) BgL_tmp1181z00_2338);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_new1171z00_2318)))->BgL_labelz00) =
					((int) CINT(BGl_genlabelz00zzsaw_bbvzd2utilszd2())), BUNSPEC);
				{
					obj_t BgL_auxz00_4663;

					{	/* SawMill/bbv-utils.scm 180 */
						obj_t BgL_list1911z00_2319;

						BgL_list1911z00_2319 = MAKE_YOUNG_PAIR(BgL_bsz00_2314, BNIL);
						BgL_auxz00_4663 = BgL_list1911z00_2319;
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1171z00_2318)))->BgL_predsz00) =
						((obj_t) BgL_auxz00_4663), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4667;

					{	/* SawMill/bbv-utils.scm 179 */
						obj_t BgL_list1912z00_2320;

						BgL_list1912z00_2320 = MAKE_YOUNG_PAIR(BgL_toz00_2315, BNIL);
						BgL_auxz00_4667 = BgL_list1912z00_2320;
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1171z00_2318)))->BgL_succsz00) =
						((obj_t) BgL_auxz00_4667), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4671;

					{	/* SawMill/bbv-utils.scm 171 */
						BgL_rtl_insz00_bglt BgL_arg1913z00_2321;

						{	/* SawMill/bbv-utils.scm 171 */
							BgL_rtl_insz00_bglt BgL_new1186z00_2323;

							{	/* SawMill/bbv-utils.scm 171 */
								BgL_rtl_insz00_bglt BgL_tmp1184z00_2327;
								BgL_rtl_inszf2bbvzf2_bglt BgL_wide1185z00_2328;

								{
									BgL_rtl_insz00_bglt BgL_auxz00_4673;

									{	/* SawMill/bbv-utils.scm 171 */
										BgL_rtl_insz00_bglt BgL_new1183z00_2330;

										BgL_new1183z00_2330 =
											((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_insz00_bgl))));
										{	/* SawMill/bbv-utils.scm 171 */
											long BgL_arg1917z00_2331;

											{	/* SawMill/bbv-utils.scm 171 */
												long BgL_res2330z00_3210;

												{	/* SawMill/bbv-utils.scm 171 */
													obj_t BgL_classz00_3209;

													BgL_classz00_3209 = BGl_rtl_insz00zzsaw_defsz00;
													BgL_res2330z00_3210 =
														BGL_CLASS_INDEX(BgL_classz00_3209);
												}
												BgL_arg1917z00_2331 = BgL_res2330z00_3210;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1183z00_2330),
												BgL_arg1917z00_2331);
										}
										{	/* SawMill/bbv-utils.scm 171 */
											BgL_objectz00_bglt BgL_tmpz00_4678;

											BgL_tmpz00_4678 =
												((BgL_objectz00_bglt) BgL_new1183z00_2330);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4678, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1183z00_2330);
										BgL_auxz00_4673 = BgL_new1183z00_2330;
									}
									BgL_tmp1184z00_2327 = ((BgL_rtl_insz00_bglt) BgL_auxz00_4673);
								}
								BgL_wide1185z00_2328 =
									((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_rtl_inszf2bbvzf2_bgl))));
								{	/* SawMill/bbv-utils.scm 171 */
									obj_t BgL_auxz00_4686;
									BgL_objectz00_bglt BgL_tmpz00_4684;

									BgL_auxz00_4686 = ((obj_t) BgL_wide1185z00_2328);
									BgL_tmpz00_4684 = ((BgL_objectz00_bglt) BgL_tmp1184z00_2327);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4684, BgL_auxz00_4686);
								}
								((BgL_objectz00_bglt) BgL_tmp1184z00_2327);
								{	/* SawMill/bbv-utils.scm 171 */
									long BgL_arg1916z00_2329;

									{	/* SawMill/bbv-utils.scm 171 */
										long BgL_res2331z00_3216;

										{	/* SawMill/bbv-utils.scm 171 */
											obj_t BgL_classz00_3215;

											BgL_classz00_3215 =
												BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
											BgL_res2331z00_3216 = BGL_CLASS_INDEX(BgL_classz00_3215);
										}
										BgL_arg1916z00_2329 = BgL_res2331z00_3216;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_tmp1184z00_2327),
										BgL_arg1916z00_2329);
								}
								BgL_new1186z00_2323 =
									((BgL_rtl_insz00_bglt) BgL_tmp1184z00_2327);
							}
							((((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_new1186z00_2323)))->
									BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
							((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
												BgL_new1186z00_2323)))->BgL_z52spillz52) =
								((obj_t) BNIL), BUNSPEC);
							((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
												BgL_new1186z00_2323)))->BgL_destz00) =
								((obj_t) BFALSE), BUNSPEC);
							{
								BgL_rtl_funz00_bglt BgL_auxz00_4700;

								{	/* SawMill/bbv-utils.scm 172 */
									BgL_rtl_goz00_bglt BgL_new1188z00_2324;

									{	/* SawMill/bbv-utils.scm 172 */
										BgL_rtl_goz00_bglt BgL_new1187z00_2325;

										BgL_new1187z00_2325 =
											((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_goz00_bgl))));
										{	/* SawMill/bbv-utils.scm 172 */
											long BgL_arg1915z00_2326;

											{	/* SawMill/bbv-utils.scm 172 */
												long BgL_res2332z00_3220;

												{	/* SawMill/bbv-utils.scm 172 */
													obj_t BgL_classz00_3219;

													BgL_classz00_3219 = BGl_rtl_goz00zzsaw_defsz00;
													BgL_res2332z00_3220 =
														BGL_CLASS_INDEX(BgL_classz00_3219);
												}
												BgL_arg1915z00_2326 = BgL_res2332z00_3220;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1187z00_2325),
												BgL_arg1915z00_2326);
										}
										BgL_new1188z00_2324 = BgL_new1187z00_2325;
									}
									((((BgL_rtl_funz00_bglt) COBJECT(
													((BgL_rtl_funz00_bglt) BgL_new1188z00_2324)))->
											BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
									((((BgL_rtl_goz00_bglt) COBJECT(BgL_new1188z00_2324))->
											BgL_toz00) =
										((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_toz00_2315)),
										BUNSPEC);
									BgL_auxz00_4700 = ((BgL_rtl_funz00_bglt) BgL_new1188z00_2324);
								}
								((((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_new1186z00_2323)))->
										BgL_funz00) =
									((BgL_rtl_funz00_bglt) BgL_auxz00_4700), BUNSPEC);
							}
							((((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_new1186z00_2323)))->
									BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4714;

								{
									obj_t BgL_auxz00_4715;

									{	/* SawMill/bbv-utils.scm 176 */
										BgL_objectz00_bglt BgL_tmpz00_4716;

										BgL_tmpz00_4716 =
											((BgL_objectz00_bglt) BgL_new1186z00_2323);
										BgL_auxz00_4715 = BGL_OBJECT_WIDENING(BgL_tmpz00_4716);
									}
									BgL_auxz00_4714 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4715);
								}
								((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4714))->
										BgL_defz00) =
									((obj_t) ((obj_t)
											BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
											(BgL_regsz00_3713))), BUNSPEC);
							}
							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4723;

								{
									obj_t BgL_auxz00_4724;

									{	/* SawMill/bbv-utils.scm 178 */
										BgL_objectz00_bglt BgL_tmpz00_4725;

										BgL_tmpz00_4725 =
											((BgL_objectz00_bglt) BgL_new1186z00_2323);
										BgL_auxz00_4724 = BGL_OBJECT_WIDENING(BgL_tmpz00_4725);
									}
									BgL_auxz00_4723 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4724);
								}
								((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4723))->
										BgL_outz00) =
									((obj_t) ((obj_t)
											BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
											(BgL_regsz00_3713))), BUNSPEC);
							}
							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4732;

								{
									obj_t BgL_auxz00_4733;

									{	/* SawMill/bbv-utils.scm 177 */
										BgL_objectz00_bglt BgL_tmpz00_4734;

										BgL_tmpz00_4734 =
											((BgL_objectz00_bglt) BgL_new1186z00_2323);
										BgL_auxz00_4733 = BGL_OBJECT_WIDENING(BgL_tmpz00_4734);
									}
									BgL_auxz00_4732 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4733);
								}
								((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4732))->
										BgL_inz00) =
									((obj_t) ((obj_t)
											BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
											(BgL_regsz00_3713))), BUNSPEC);
							}
							{
								BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4741;

								{
									obj_t BgL_auxz00_4742;

									{	/* SawMill/bbv-utils.scm 177 */
										BgL_objectz00_bglt BgL_tmpz00_4743;

										BgL_tmpz00_4743 =
											((BgL_objectz00_bglt) BgL_new1186z00_2323);
										BgL_auxz00_4742 = BGL_OBJECT_WIDENING(BgL_tmpz00_4743);
									}
									BgL_auxz00_4741 =
										((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4742);
								}
								((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4741))->
										BgL_z52hashz52) = ((obj_t) BFALSE), BUNSPEC);
							}
							BgL_arg1913z00_2321 = BgL_new1186z00_2323;
						}
						{	/* SawMill/bbv-utils.scm 170 */
							obj_t BgL_list1914z00_2322;

							BgL_list1914z00_2322 =
								MAKE_YOUNG_PAIR(((obj_t) BgL_arg1913z00_2321), BNIL);
							BgL_auxz00_4671 = BgL_list1914z00_2322;
					}}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1171z00_2318)))->BgL_firstz00) =
						((obj_t) BgL_auxz00_4671), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4757;
					BgL_blocksz00_bglt BgL_auxz00_4751;

					{
						BgL_blocksz00_bglt BgL_auxz00_4758;

						{
							obj_t BgL_auxz00_4759;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4760;

								BgL_tmpz00_4760 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4759 = BGL_OBJECT_WIDENING(BgL_tmpz00_4760);
							}
							BgL_auxz00_4758 = ((BgL_blocksz00_bglt) BgL_auxz00_4759);
						}
						BgL_auxz00_4757 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4758))->BgL_ictxz00);
					}
					{
						obj_t BgL_auxz00_4752;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4753;

							BgL_tmpz00_4753 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4752 = BGL_OBJECT_WIDENING(BgL_tmpz00_4753);
						}
						BgL_auxz00_4751 = ((BgL_blocksz00_bglt) BgL_auxz00_4752);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4751))->BgL_ictxz00) =
						((obj_t) BgL_auxz00_4757), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4774;
					BgL_blocksz00_bglt BgL_auxz00_4768;

					{
						BgL_blocksz00_bglt BgL_auxz00_4775;

						{
							obj_t BgL_auxz00_4776;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4777;

								BgL_tmpz00_4777 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4776 = BGL_OBJECT_WIDENING(BgL_tmpz00_4777);
							}
							BgL_auxz00_4775 = ((BgL_blocksz00_bglt) BgL_auxz00_4776);
						}
						BgL_auxz00_4774 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4775))->BgL_octxsz00);
					}
					{
						obj_t BgL_auxz00_4769;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4770;

							BgL_tmpz00_4770 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4769 = BGL_OBJECT_WIDENING(BgL_tmpz00_4770);
						}
						BgL_auxz00_4768 = ((BgL_blocksz00_bglt) BgL_auxz00_4769);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4768))->BgL_octxsz00) =
						((obj_t) BgL_auxz00_4774), BUNSPEC);
				}
				{
					long BgL_auxz00_4791;
					BgL_blocksz00_bglt BgL_auxz00_4785;

					{
						BgL_blocksz00_bglt BgL_auxz00_4792;

						{
							obj_t BgL_auxz00_4793;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4794;

								BgL_tmpz00_4794 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4793 = BGL_OBJECT_WIDENING(BgL_tmpz00_4794);
							}
							BgL_auxz00_4792 = ((BgL_blocksz00_bglt) BgL_auxz00_4793);
						}
						BgL_auxz00_4791 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4792))->BgL_z52markz52);
					}
					{
						obj_t BgL_auxz00_4786;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4787;

							BgL_tmpz00_4787 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4786 = BGL_OBJECT_WIDENING(BgL_tmpz00_4787);
						}
						BgL_auxz00_4785 = ((BgL_blocksz00_bglt) BgL_auxz00_4786);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4785))->BgL_z52markz52) =
						((long) BgL_auxz00_4791), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4808;
					BgL_blocksz00_bglt BgL_auxz00_4802;

					{
						BgL_blocksz00_bglt BgL_auxz00_4809;

						{
							obj_t BgL_auxz00_4810;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4811;

								BgL_tmpz00_4811 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4810 = BGL_OBJECT_WIDENING(BgL_tmpz00_4811);
							}
							BgL_auxz00_4809 = ((BgL_blocksz00_bglt) BgL_auxz00_4810);
						}
						BgL_auxz00_4808 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4809))->
							BgL_z52parentz52);
					}
					{
						obj_t BgL_auxz00_4803;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4804;

							BgL_tmpz00_4804 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4803 = BGL_OBJECT_WIDENING(BgL_tmpz00_4804);
						}
						BgL_auxz00_4802 = ((BgL_blocksz00_bglt) BgL_auxz00_4803);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4802))->BgL_z52parentz52) =
						((obj_t) BgL_auxz00_4808), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4825;
					BgL_blocksz00_bglt BgL_auxz00_4819;

					{
						BgL_blocksz00_bglt BgL_auxz00_4826;

						{
							obj_t BgL_auxz00_4827;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4828;

								BgL_tmpz00_4828 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4827 = BGL_OBJECT_WIDENING(BgL_tmpz00_4828);
							}
							BgL_auxz00_4826 = ((BgL_blocksz00_bglt) BgL_auxz00_4827);
						}
						BgL_auxz00_4825 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4826))->BgL_z52hashz52);
					}
					{
						obj_t BgL_auxz00_4820;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4821;

							BgL_tmpz00_4821 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4820 = BGL_OBJECT_WIDENING(BgL_tmpz00_4821);
						}
						BgL_auxz00_4819 = ((BgL_blocksz00_bglt) BgL_auxz00_4820);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4819))->BgL_z52hashz52) =
						((obj_t) BgL_auxz00_4825), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4842;
					BgL_blocksz00_bglt BgL_auxz00_4836;

					{
						BgL_blocksz00_bglt BgL_auxz00_4843;

						{
							obj_t BgL_auxz00_4844;

							{	/* SawMill/bbv-utils.scm 170 */
								BgL_objectz00_bglt BgL_tmpz00_4845;

								BgL_tmpz00_4845 =
									((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_bsz00_2314)));
								BgL_auxz00_4844 = BGL_OBJECT_WIDENING(BgL_tmpz00_4845);
							}
							BgL_auxz00_4843 = ((BgL_blocksz00_bglt) BgL_auxz00_4844);
						}
						BgL_auxz00_4842 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4843))->
							BgL_z52blacklistz52);
					}
					{
						obj_t BgL_auxz00_4837;

						{	/* SawMill/bbv-utils.scm 170 */
							BgL_objectz00_bglt BgL_tmpz00_4838;

							BgL_tmpz00_4838 = ((BgL_objectz00_bglt) BgL_new1171z00_2318);
							BgL_auxz00_4837 = BGL_OBJECT_WIDENING(BgL_tmpz00_4838);
						}
						BgL_auxz00_4836 = ((BgL_blocksz00_bglt) BgL_auxz00_4837);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4836))->
							BgL_z52blacklistz52) = ((obj_t) BgL_auxz00_4842), BUNSPEC);
				}
				return BgL_new1171z00_2318;
			}
		}

	}



/* &block->block-list */
	obj_t BGl_z62blockzd2ze3blockzd2listz81zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3695, obj_t BgL_regsz00_3696, obj_t BgL_bz00_3697)
	{
		{	/* SawMill/bbv-utils.scm 142 */
			return
				BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2(BgL_regsz00_3696,
				((BgL_blockz00_bglt) BgL_bz00_3697));
		}

	}



/* normalize-goto! */
	BGL_EXPORTED_DEF obj_t
		BGl_normaliza7ezd2gotoz12z67zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt
		BgL_bz00_97)
	{
		{	/* SawMill/bbv-utils.scm 270 */
			{	/* SawMill/bbv-utils.scm 287 */
				obj_t BgL_g1213z00_2349;

				{	/* SawMill/bbv-utils.scm 287 */
					obj_t BgL_list2001z00_2449;

					BgL_list2001z00_2449 = MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_97), BNIL);
					BgL_g1213z00_2349 = BgL_list2001z00_2449;
				}
				{
					obj_t BgL_bsz00_2352;
					obj_t BgL_accz00_2353;

					BgL_bsz00_2352 = BgL_g1213z00_2349;
					BgL_accz00_2353 = BNIL;
				BgL_zc3z04anonymousza31920ze3z87_2354:
					if (NULLP(BgL_bsz00_2352))
						{	/* SawMill/bbv-utils.scm 290 */
							return bgl_reverse(BgL_accz00_2353);
						}
					else
						{	/* SawMill/bbv-utils.scm 290 */
							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
											((obj_t) BgL_bsz00_2352)), BgL_accz00_2353)))
								{	/* SawMill/bbv-utils.scm 293 */
									obj_t BgL_arg1925z00_2358;

									BgL_arg1925z00_2358 = CDR(((obj_t) BgL_bsz00_2352));
									{
										obj_t BgL_bsz00_4867;

										BgL_bsz00_4867 = BgL_arg1925z00_2358;
										BgL_bsz00_2352 = BgL_bsz00_4867;
										goto BgL_zc3z04anonymousza31920ze3z87_2354;
									}
								}
							else
								{	/* SawMill/bbv-utils.scm 295 */
									BgL_blockz00_bglt BgL_i1215z00_2359;

									BgL_i1215z00_2359 =
										((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2352)));
									{
										obj_t BgL_firstz00_2362;

										BgL_firstz00_2362 =
											(((BgL_blockz00_bglt) COBJECT(BgL_i1215z00_2359))->
											BgL_firstz00);
									BgL_zc3z04anonymousza31927ze3z87_2363:
										if (NULLP(BgL_firstz00_2362))
											{	/* SawMill/bbv-utils.scm 299 */
												obj_t BgL_arg1929z00_2365;
												obj_t BgL_arg1930z00_2366;

												{	/* SawMill/bbv-utils.scm 299 */
													obj_t BgL_arg1931z00_2367;
													obj_t BgL_arg1932z00_2368;

													BgL_arg1931z00_2367 =
														(((BgL_blockz00_bglt) COBJECT(BgL_i1215z00_2359))->
														BgL_succsz00);
													BgL_arg1932z00_2368 = CDR(((obj_t) BgL_bsz00_2352));
													BgL_arg1929z00_2365 =
														BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
														(BgL_arg1931z00_2367, BgL_arg1932z00_2368);
												}
												{	/* SawMill/bbv-utils.scm 299 */
													obj_t BgL_arg1933z00_2369;

													BgL_arg1933z00_2369 = CAR(((obj_t) BgL_bsz00_2352));
													BgL_arg1930z00_2366 =
														MAKE_YOUNG_PAIR(BgL_arg1933z00_2369,
														BgL_accz00_2353);
												}
												{
													obj_t BgL_accz00_4881;
													obj_t BgL_bsz00_4880;

													BgL_bsz00_4880 = BgL_arg1929z00_2365;
													BgL_accz00_4881 = BgL_arg1930z00_2366;
													BgL_accz00_2353 = BgL_accz00_4881;
													BgL_bsz00_2352 = BgL_bsz00_4880;
													goto BgL_zc3z04anonymousza31920ze3z87_2354;
												}
											}
										else
											{	/* SawMill/bbv-utils.scm 300 */
												bool_t BgL_test2469z00_4882;

												{	/* SawMill/bbv-utils.scm 300 */
													obj_t BgL_arg1999z00_2445;

													BgL_arg1999z00_2445 =
														CAR(((obj_t) BgL_firstz00_2362));
													BgL_test2469z00_4882 =
														BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
														((BgL_rtl_insz00_bglt) BgL_arg1999z00_2445));
												}
												if (BgL_test2469z00_4882)
													{	/* SawMill/bbv-utils.scm 300 */
														{	/* SawMill/bbv-utils.scm 301 */
															obj_t BgL_arg1936z00_2372;

															BgL_arg1936z00_2372 =
																CAR(((obj_t) BgL_bsz00_2352));
															BGl_collapsezd2branchze70z35zzsaw_bbvzd2utilszd2
																(BgL_arg1936z00_2372, BgL_firstz00_2362);
														}
														{	/* SawMill/bbv-utils.scm 302 */
															obj_t BgL_arg1937z00_2373;
															obj_t BgL_arg1938z00_2374;

															{	/* SawMill/bbv-utils.scm 302 */
																obj_t BgL_arg1939z00_2375;
																obj_t BgL_arg1940z00_2376;

																BgL_arg1939z00_2375 =
																	(((BgL_blockz00_bglt)
																		COBJECT(BgL_i1215z00_2359))->BgL_succsz00);
																BgL_arg1940z00_2376 =
																	CDR(((obj_t) BgL_bsz00_2352));
																BgL_arg1937z00_2373 =
																	BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																	(BgL_arg1939z00_2375, BgL_arg1940z00_2376);
															}
															{	/* SawMill/bbv-utils.scm 302 */
																obj_t BgL_arg1941z00_2377;

																BgL_arg1941z00_2377 =
																	CAR(((obj_t) BgL_bsz00_2352));
																BgL_arg1938z00_2374 =
																	MAKE_YOUNG_PAIR(BgL_arg1941z00_2377,
																	BgL_accz00_2353);
															}
															{
																obj_t BgL_accz00_4898;
																obj_t BgL_bsz00_4897;

																BgL_bsz00_4897 = BgL_arg1937z00_2373;
																BgL_accz00_4898 = BgL_arg1938z00_2374;
																BgL_accz00_2353 = BgL_accz00_4898;
																BgL_bsz00_2352 = BgL_bsz00_4897;
																goto BgL_zc3z04anonymousza31920ze3z87_2354;
															}
														}
													}
												else
													{	/* SawMill/bbv-utils.scm 300 */
														if (NULLP(CDR(((obj_t) BgL_firstz00_2362))))
															{	/* SawMill/bbv-utils.scm 303 */
																{	/* SawMill/bbv-utils.scm 304 */
																	bool_t BgL_test2471z00_4903;

																	{	/* SawMill/bbv-utils.scm 304 */
																		bool_t BgL_test2472z00_4904;

																		{	/* SawMill/bbv-utils.scm 304 */
																			obj_t BgL_arg1954z00_2390;

																			BgL_arg1954z00_2390 =
																				CAR(((obj_t) BgL_firstz00_2362));
																			BgL_test2472z00_4904 =
																				CBOOL
																				(BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2
																				(((BgL_rtl_insz00_bglt)
																						BgL_arg1954z00_2390)));
																		}
																		if (BgL_test2472z00_4904)
																			{	/* SawMill/bbv-utils.scm 304 */
																				BgL_test2471z00_4903 = ((bool_t) 0);
																			}
																		else
																			{	/* SawMill/bbv-utils.scm 305 */
																				obj_t BgL_tmpz00_4910;

																				BgL_tmpz00_4910 =
																					(((BgL_blockz00_bglt) COBJECT(
																							((BgL_blockz00_bglt)
																								CAR(
																									((obj_t) BgL_bsz00_2352)))))->
																					BgL_succsz00);
																				BgL_test2471z00_4903 =
																					PAIRP(BgL_tmpz00_4910);
																			}
																	}
																	if (BgL_test2471z00_4903)
																		{	/* SawMill/bbv-utils.scm 306 */
																			obj_t BgL_arg1951z00_2386;

																			BgL_arg1951z00_2386 =
																				CAR(((obj_t) BgL_bsz00_2352));
																			BGl_collapsezd2branchze70z35zzsaw_bbvzd2utilszd2
																				(BgL_arg1951z00_2386,
																				BgL_firstz00_2362);
																		}
																	else
																		{	/* SawMill/bbv-utils.scm 304 */
																			((bool_t) 0);
																		}
																}
																{	/* SawMill/bbv-utils.scm 307 */
																	obj_t BgL_arg1955z00_2391;
																	obj_t BgL_arg1956z00_2392;

																	{	/* SawMill/bbv-utils.scm 307 */
																		obj_t BgL_arg1957z00_2393;
																		obj_t BgL_arg1958z00_2394;

																		BgL_arg1957z00_2393 =
																			(((BgL_blockz00_bglt)
																				COBJECT(BgL_i1215z00_2359))->
																			BgL_succsz00);
																		BgL_arg1958z00_2394 =
																			CDR(((obj_t) BgL_bsz00_2352));
																		BgL_arg1955z00_2391 =
																			BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																			(BgL_arg1957z00_2393,
																			BgL_arg1958z00_2394);
																	}
																	{	/* SawMill/bbv-utils.scm 307 */
																		obj_t BgL_arg1959z00_2395;

																		BgL_arg1959z00_2395 =
																			CAR(((obj_t) BgL_bsz00_2352));
																		BgL_arg1956z00_2392 =
																			MAKE_YOUNG_PAIR(BgL_arg1959z00_2395,
																			BgL_accz00_2353);
																	}
																	{
																		obj_t BgL_accz00_4927;
																		obj_t BgL_bsz00_4926;

																		BgL_bsz00_4926 = BgL_arg1955z00_2391;
																		BgL_accz00_4927 = BgL_arg1956z00_2392;
																		BgL_accz00_2353 = BgL_accz00_4927;
																		BgL_bsz00_2352 = BgL_bsz00_4926;
																		goto BgL_zc3z04anonymousza31920ze3z87_2354;
																	}
																}
															}
														else
															{	/* SawMill/bbv-utils.scm 308 */
																bool_t BgL_test2473z00_4928;

																{	/* SawMill/bbv-utils.scm 308 */
																	obj_t BgL_arg1997z00_2443;

																	BgL_arg1997z00_2443 =
																		CAR(((obj_t) BgL_firstz00_2362));
																	BgL_test2473z00_4928 =
																		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2
																		(((BgL_rtl_insz00_bglt)
																			BgL_arg1997z00_2443));
																}
																if (BgL_test2473z00_4928)
																	{	/* SawMill/bbv-utils.scm 310 */
																		BgL_rtl_insz00_bglt BgL_i1216z00_2398;

																		BgL_i1216z00_2398 =
																			((BgL_rtl_insz00_bglt)
																			CAR(((obj_t) BgL_firstz00_2362)));
																		{	/* SawMill/bbv-utils.scm 311 */
																			BgL_rtl_ifeqz00_bglt BgL_i1217z00_2399;

																			BgL_i1217z00_2399 =
																				((BgL_rtl_ifeqz00_bglt)
																				(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_i1216z00_2398))->
																					BgL_funz00));
																			{	/* SawMill/bbv-utils.scm 312 */
																				BgL_blockz00_bglt BgL_nbz00_2400;

																				{	/* SawMill/bbv-utils.scm 312 */
																					BgL_blockz00_bglt BgL_new1219z00_2411;

																					{	/* SawMill/bbv-utils.scm 313 */
																						BgL_blockz00_bglt
																							BgL_new1218z00_2416;
																						BgL_new1218z00_2416 =
																							((BgL_blockz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_blockz00_bgl))));
																						{	/* SawMill/bbv-utils.scm 313 */
																							long BgL_arg1975z00_2417;

																							{	/* SawMill/bbv-utils.scm 313 */
																								long BgL_res2360z00_3452;

																								BgL_res2360z00_3452 =
																									BGL_CLASS_INDEX
																									(BGl_blockz00zzsaw_defsz00);
																								BgL_arg1975z00_2417 =
																									BgL_res2360z00_3452;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1218z00_2416),
																								BgL_arg1975z00_2417);
																						}
																						{	/* SawMill/bbv-utils.scm 313 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_4942;
																							BgL_tmpz00_4942 =
																								((BgL_objectz00_bglt)
																								BgL_new1218z00_2416);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_4942, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1218z00_2416);
																						BgL_new1219z00_2411 =
																							BgL_new1218z00_2416;
																					}
																					((((BgL_blockz00_bglt)
																								COBJECT(BgL_new1219z00_2411))->
																							BgL_labelz00) =
																						((int)
																							CINT
																							(BGl_genlabelz00zzsaw_bbvzd2utilszd2
																								())), BUNSPEC);
																					{
																						obj_t BgL_auxz00_4949;

																						{	/* SawMill/bbv-utils.scm 315 */
																							obj_t BgL_arg1971z00_2412;

																							BgL_arg1971z00_2412 =
																								CAR(((obj_t) BgL_bsz00_2352));
																							{	/* SawMill/bbv-utils.scm 315 */
																								obj_t BgL_list1972z00_2413;

																								BgL_list1972z00_2413 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1971z00_2412, BNIL);
																								BgL_auxz00_4949 =
																									BgL_list1972z00_2413;
																						}}
																						((((BgL_blockz00_bglt)
																									COBJECT
																									(BgL_new1219z00_2411))->
																								BgL_predsz00) =
																							((obj_t) BgL_auxz00_4949),
																							BUNSPEC);
																					}
																					{
																						obj_t BgL_auxz00_4954;

																						{	/* SawMill/bbv-utils.scm 316 */
																							BgL_blockz00_bglt
																								BgL_arg1973z00_2414;
																							BgL_arg1973z00_2414 =
																								(((BgL_rtl_ifeqz00_bglt)
																									COBJECT(BgL_i1217z00_2399))->
																								BgL_thenz00);
																							{	/* SawMill/bbv-utils.scm 316 */
																								obj_t BgL_list1974z00_2415;

																								BgL_list1974z00_2415 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_arg1973z00_2414),
																									BNIL);
																								BgL_auxz00_4954 =
																									BgL_list1974z00_2415;
																						}}
																						((((BgL_blockz00_bglt)
																									COBJECT
																									(BgL_new1219z00_2411))->
																								BgL_succsz00) =
																							((obj_t) BgL_auxz00_4954),
																							BUNSPEC);
																					}
																					((((BgL_blockz00_bglt)
																								COBJECT(BgL_new1219z00_2411))->
																							BgL_firstz00) =
																						((obj_t) CDR(((obj_t)
																									BgL_firstz00_2362))),
																						BUNSPEC);
																					BgL_nbz00_2400 = BgL_new1219z00_2411;
																				}
																				{	/* SawMill/bbv-utils.scm 317 */
																					obj_t BgL_arg1962z00_2401;

																					BgL_arg1962z00_2401 =
																						(((BgL_blockz00_bglt)
																							COBJECT(BgL_i1215z00_2359))->
																						BgL_succsz00);
																					{	/* SawMill/bbv-utils.scm 317 */
																						obj_t BgL_auxz00_4965;
																						obj_t BgL_tmpz00_4963;

																						BgL_auxz00_4965 =
																							((obj_t) BgL_nbz00_2400);
																						BgL_tmpz00_4963 =
																							((obj_t) BgL_arg1962z00_2401);
																						SET_CAR(BgL_tmpz00_4963,
																							BgL_auxz00_4965);
																				}}
																				{	/* SawMill/bbv-utils.scm 318 */
																					obj_t BgL_tmpz00_4968;

																					BgL_tmpz00_4968 =
																						((obj_t) BgL_firstz00_2362);
																					SET_CDR(BgL_tmpz00_4968, BNIL);
																				}
																				{	/* SawMill/bbv-utils.scm 319 */
																					BgL_blockz00_bglt BgL_i1220z00_2402;

																					BgL_i1220z00_2402 =
																						(((BgL_rtl_ifeqz00_bglt)
																							COBJECT(BgL_i1217z00_2399))->
																						BgL_thenz00);
																					{
																						obj_t BgL_auxz00_4972;

																						{	/* SawMill/bbv-utils.scm 320 */
																							obj_t BgL_arg1963z00_2403;
																							obj_t BgL_arg1964z00_2404;

																							BgL_arg1963z00_2403 =
																								(((BgL_blockz00_bglt)
																									COBJECT(BgL_i1220z00_2402))->
																								BgL_predsz00);
																							BgL_arg1964z00_2404 =
																								CAR(((obj_t) BgL_bsz00_2352));
																							BgL_auxz00_4972 =
																								BGl_loopze70ze7zzsaw_bbvzd2utilszd2
																								(BgL_arg1964z00_2404,
																								((obj_t) BgL_nbz00_2400),
																								BgL_arg1963z00_2403);
																						}
																						((((BgL_blockz00_bglt)
																									COBJECT(BgL_i1220z00_2402))->
																								BgL_predsz00) =
																							((obj_t) BgL_auxz00_4972),
																							BUNSPEC);
																				}}
																				{	/* SawMill/bbv-utils.scm 321 */
																					obj_t BgL_arg1965z00_2405;
																					obj_t BgL_arg1966z00_2406;

																					{	/* SawMill/bbv-utils.scm 321 */
																						obj_t BgL_arg1967z00_2407;
																						obj_t BgL_arg1968z00_2408;

																						BgL_arg1967z00_2407 =
																							bgl_reverse(
																							(((BgL_blockz00_bglt)
																									COBJECT(BgL_i1215z00_2359))->
																								BgL_succsz00));
																						BgL_arg1968z00_2408 =
																							CDR(((obj_t) BgL_bsz00_2352));
																						BgL_arg1965z00_2405 =
																							BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																							(BgL_arg1967z00_2407,
																							BgL_arg1968z00_2408);
																					}
																					{	/* SawMill/bbv-utils.scm 322 */
																						obj_t BgL_arg1970z00_2410;

																						BgL_arg1970z00_2410 =
																							CAR(((obj_t) BgL_bsz00_2352));
																						BgL_arg1966z00_2406 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1970z00_2410,
																							BgL_accz00_2353);
																					}
																					{
																						obj_t BgL_accz00_4988;
																						obj_t BgL_bsz00_4987;

																						BgL_bsz00_4987 =
																							BgL_arg1965z00_2405;
																						BgL_accz00_4988 =
																							BgL_arg1966z00_2406;
																						BgL_accz00_2353 = BgL_accz00_4988;
																						BgL_bsz00_2352 = BgL_bsz00_4987;
																						goto
																							BgL_zc3z04anonymousza31920ze3z87_2354;
																					}
																				}
																			}
																		}
																	}
																else
																	{	/* SawMill/bbv-utils.scm 323 */
																		bool_t BgL_test2474z00_4989;

																		{	/* SawMill/bbv-utils.scm 323 */
																			obj_t BgL_arg1996z00_2442;

																			BgL_arg1996z00_2442 =
																				CAR(((obj_t) BgL_firstz00_2362));
																			BgL_test2474z00_4989 =
																				BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2
																				(((BgL_rtl_insz00_bglt)
																					BgL_arg1996z00_2442));
																		}
																		if (BgL_test2474z00_4989)
																			{	/* SawMill/bbv-utils.scm 325 */
																				BgL_rtl_insz00_bglt BgL_i1221z00_2420;

																				BgL_i1221z00_2420 =
																					((BgL_rtl_insz00_bglt)
																					CAR(((obj_t) BgL_firstz00_2362)));
																				{	/* SawMill/bbv-utils.scm 326 */
																					BgL_rtl_ifnez00_bglt
																						BgL_i1222z00_2421;
																					BgL_i1222z00_2421 =
																						((BgL_rtl_ifnez00_bglt) ((
																								(BgL_rtl_insz00_bglt)
																								COBJECT(BgL_i1221z00_2420))->
																							BgL_funz00));
																					{	/* SawMill/bbv-utils.scm 327 */
																						BgL_blockz00_bglt BgL_nbz00_2422;

																						{	/* SawMill/bbv-utils.scm 327 */
																							BgL_blockz00_bglt
																								BgL_new1224z00_2434;
																							{	/* SawMill/bbv-utils.scm 328 */
																								BgL_blockz00_bglt
																									BgL_new1223z00_2439;
																								BgL_new1223z00_2439 =
																									((BgL_blockz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_blockz00_bgl))));
																								{	/* SawMill/bbv-utils.scm 328 */
																									long BgL_arg1993z00_2440;

																									{	/* SawMill/bbv-utils.scm 328 */
																										long BgL_res2363z00_3468;

																										BgL_res2363z00_3468 =
																											BGL_CLASS_INDEX
																											(BGl_blockz00zzsaw_defsz00);
																										BgL_arg1993z00_2440 =
																											BgL_res2363z00_3468;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1223z00_2439),
																										BgL_arg1993z00_2440);
																								}
																								{	/* SawMill/bbv-utils.scm 328 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_5003;
																									BgL_tmpz00_5003 =
																										((BgL_objectz00_bglt)
																										BgL_new1223z00_2439);
																									BGL_OBJECT_WIDENING_SET
																										(BgL_tmpz00_5003, BFALSE);
																								}
																								((BgL_objectz00_bglt)
																									BgL_new1223z00_2439);
																								BgL_new1224z00_2434 =
																									BgL_new1223z00_2439;
																							}
																							((((BgL_blockz00_bglt)
																										COBJECT
																										(BgL_new1224z00_2434))->
																									BgL_labelz00) =
																								((int)
																									CINT
																									(BGl_genlabelz00zzsaw_bbvzd2utilszd2
																										())), BUNSPEC);
																							{
																								obj_t BgL_auxz00_5010;

																								{	/* SawMill/bbv-utils.scm 330 */
																									obj_t BgL_arg1989z00_2435;

																									BgL_arg1989z00_2435 =
																										CAR(
																										((obj_t) BgL_bsz00_2352));
																									{	/* SawMill/bbv-utils.scm 330 */
																										obj_t BgL_list1990z00_2436;

																										BgL_list1990z00_2436 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1989z00_2435,
																											BNIL);
																										BgL_auxz00_5010 =
																											BgL_list1990z00_2436;
																								}}
																								((((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_new1224z00_2434))->
																										BgL_predsz00) =
																									((obj_t) BgL_auxz00_5010),
																									BUNSPEC);
																							}
																							{
																								obj_t BgL_auxz00_5015;

																								{	/* SawMill/bbv-utils.scm 331 */
																									BgL_blockz00_bglt
																										BgL_arg1991z00_2437;
																									BgL_arg1991z00_2437 =
																										(((BgL_rtl_ifnez00_bglt)
																											COBJECT
																											(BgL_i1222z00_2421))->
																										BgL_thenz00);
																									{	/* SawMill/bbv-utils.scm 331 */
																										obj_t BgL_list1992z00_2438;

																										BgL_list1992z00_2438 =
																											MAKE_YOUNG_PAIR(
																											((obj_t)
																												BgL_arg1991z00_2437),
																											BNIL);
																										BgL_auxz00_5015 =
																											BgL_list1992z00_2438;
																								}}
																								((((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_new1224z00_2434))->
																										BgL_succsz00) =
																									((obj_t) BgL_auxz00_5015),
																									BUNSPEC);
																							}
																							((((BgL_blockz00_bglt)
																										COBJECT
																										(BgL_new1224z00_2434))->
																									BgL_firstz00) =
																								((obj_t) CDR(((obj_t)
																											BgL_firstz00_2362))),
																								BUNSPEC);
																							BgL_nbz00_2422 =
																								BgL_new1224z00_2434;
																						}
																						{	/* SawMill/bbv-utils.scm 332 */
																							obj_t BgL_arg1979z00_2423;

																							BgL_arg1979z00_2423 =
																								CDR(
																								(((BgL_blockz00_bglt)
																										COBJECT
																										(BgL_i1215z00_2359))->
																									BgL_succsz00));
																							{	/* SawMill/bbv-utils.scm 332 */
																								obj_t BgL_auxz00_5027;
																								obj_t BgL_tmpz00_5025;

																								BgL_auxz00_5027 =
																									((obj_t) BgL_nbz00_2422);
																								BgL_tmpz00_5025 =
																									((obj_t) BgL_arg1979z00_2423);
																								SET_CAR(BgL_tmpz00_5025,
																									BgL_auxz00_5027);
																						}}
																						{	/* SawMill/bbv-utils.scm 333 */
																							obj_t BgL_tmpz00_5030;

																							BgL_tmpz00_5030 =
																								((obj_t) BgL_firstz00_2362);
																							SET_CDR(BgL_tmpz00_5030, BNIL);
																						}
																						{	/* SawMill/bbv-utils.scm 334 */
																							BgL_blockz00_bglt
																								BgL_i1225z00_2425;
																							BgL_i1225z00_2425 =
																								(((BgL_rtl_ifnez00_bglt)
																									COBJECT(BgL_i1222z00_2421))->
																								BgL_thenz00);
																							{
																								obj_t BgL_auxz00_5034;

																								{	/* SawMill/bbv-utils.scm 335 */
																									obj_t BgL_arg1981z00_2426;
																									obj_t BgL_arg1982z00_2427;

																									BgL_arg1981z00_2426 =
																										(((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1225z00_2425))->
																										BgL_predsz00);
																									BgL_arg1982z00_2427 =
																										CAR(((obj_t)
																											BgL_bsz00_2352));
																									BgL_auxz00_5034 =
																										BGl_loopze70ze7zzsaw_bbvzd2utilszd2
																										(BgL_arg1982z00_2427,
																										((obj_t) BgL_nbz00_2422),
																										BgL_arg1981z00_2426);
																								}
																								((((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1225z00_2425))->
																										BgL_predsz00) =
																									((obj_t) BgL_auxz00_5034),
																									BUNSPEC);
																						}}
																						{	/* SawMill/bbv-utils.scm 336 */
																							obj_t BgL_arg1983z00_2428;
																							obj_t BgL_arg1984z00_2429;

																							{	/* SawMill/bbv-utils.scm 336 */
																								obj_t BgL_arg1985z00_2430;
																								obj_t BgL_arg1986z00_2431;

																								BgL_arg1985z00_2430 =
																									bgl_reverse(
																									(((BgL_blockz00_bglt)
																											COBJECT
																											(BgL_i1215z00_2359))->
																										BgL_succsz00));
																								BgL_arg1986z00_2431 =
																									CDR(((obj_t) BgL_bsz00_2352));
																								BgL_arg1983z00_2428 =
																									BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																									(BgL_arg1985z00_2430,
																									BgL_arg1986z00_2431);
																							}
																							{	/* SawMill/bbv-utils.scm 337 */
																								obj_t BgL_arg1988z00_2433;

																								BgL_arg1988z00_2433 =
																									CAR(((obj_t) BgL_bsz00_2352));
																								BgL_arg1984z00_2429 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1988z00_2433,
																									BgL_accz00_2353);
																							}
																							{
																								obj_t BgL_accz00_5050;
																								obj_t BgL_bsz00_5049;

																								BgL_bsz00_5049 =
																									BgL_arg1983z00_2428;
																								BgL_accz00_5050 =
																									BgL_arg1984z00_2429;
																								BgL_accz00_2353 =
																									BgL_accz00_5050;
																								BgL_bsz00_2352 = BgL_bsz00_5049;
																								goto
																									BgL_zc3z04anonymousza31920ze3z87_2354;
																							}
																						}
																					}
																				}
																			}
																		else
																			{	/* SawMill/bbv-utils.scm 339 */
																				obj_t BgL_arg1995z00_2441;

																				BgL_arg1995z00_2441 =
																					CDR(((obj_t) BgL_firstz00_2362));
																				{
																					obj_t BgL_firstz00_5053;

																					BgL_firstz00_5053 =
																						BgL_arg1995z00_2441;
																					BgL_firstz00_2362 = BgL_firstz00_5053;
																					goto
																						BgL_zc3z04anonymousza31927ze3z87_2363;
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



/* collapse-branch~0 */
	bool_t BGl_collapsezd2branchze70z35zzsaw_bbvzd2utilszd2(obj_t BgL_bz00_2450,
		obj_t BgL_firstz00_2451)
	{
		{	/* SawMill/bbv-utils.scm 285 */
			{	/* SawMill/bbv-utils.scm 273 */
				obj_t BgL_nextz00_2453;

				{	/* SawMill/bbv-utils.scm 273 */
					obj_t BgL_pairz00_3404;

					BgL_pairz00_3404 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_2450)))->BgL_succsz00);
					BgL_nextz00_2453 = CAR(BgL_pairz00_3404);
				}
				{	/* SawMill/bbv-utils.scm 274 */
					bool_t BgL_test2475z00_5058;

					{	/* SawMill/bbv-utils.scm 274 */
						bool_t BgL_test2476z00_5059;

						{	/* SawMill/bbv-utils.scm 274 */
							obj_t BgL_arg2034z00_2483;

							BgL_arg2034z00_2483 =
								CAR(
								(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_nextz00_2453)))->BgL_firstz00));
							BgL_test2476z00_5059 =
								CBOOL(BGl_rtl_inszd2branchzf3z21zzsaw_bbvzd2typeszd2(
									((BgL_rtl_insz00_bglt) BgL_arg2034z00_2483)));
						}
						if (BgL_test2476z00_5059)
							{	/* SawMill/bbv-utils.scm 274 */
								BgL_test2475z00_5058 =
									NULLP(CDR(
										(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_nextz00_2453)))->
											BgL_firstz00)));
							}
						else
							{	/* SawMill/bbv-utils.scm 274 */
								BgL_test2475z00_5058 = ((bool_t) 0);
							}
					}
					if (BgL_test2475z00_5058)
						{	/* SawMill/bbv-utils.scm 276 */
							obj_t BgL_nsuccsz00_2462;

							BgL_nsuccsz00_2462 =
								(((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt) BgL_nextz00_2453)))->BgL_succsz00);
							{	/* SawMill/bbv-utils.scm 277 */
								bool_t BgL_test2477z00_5072;

								{	/* SawMill/bbv-utils.scm 277 */
									obj_t BgL_arg2020z00_2468;

									BgL_arg2020z00_2468 = CAR(((obj_t) BgL_firstz00_2451));
									BgL_test2477z00_5072 =
										BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
										((BgL_rtl_insz00_bglt) BgL_arg2020z00_2468));
								}
								if (BgL_test2477z00_5072)
									{	/* SawMill/bbv-utils.scm 278 */
										obj_t BgL_arg2016z00_2465;

										BgL_arg2016z00_2465 =
											CAR(
											(((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_nextz00_2453)))->
												BgL_firstz00));
										{	/* SawMill/bbv-utils.scm 278 */
											obj_t BgL_tmpz00_5080;

											BgL_tmpz00_5080 = ((obj_t) BgL_firstz00_2451);
											SET_CAR(BgL_tmpz00_5080, BgL_arg2016z00_2465);
										}
									}
								else
									{	/* SawMill/bbv-utils.scm 279 */
										obj_t BgL_arg2018z00_2467;

										BgL_arg2018z00_2467 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_nextz00_2453)))->
											BgL_firstz00);
										{	/* SawMill/bbv-utils.scm 279 */
											obj_t BgL_tmpz00_5085;

											BgL_tmpz00_5085 = ((obj_t) BgL_firstz00_2451);
											SET_CDR(BgL_tmpz00_5085, BgL_arg2018z00_2467);
										}
									}
							}
							{	/* SawMill/bbv-utils.scm 280 */
								obj_t BgL_arg2021z00_2469;

								{	/* SawMill/bbv-utils.scm 280 */
									obj_t BgL_arg2022z00_2470;

									BgL_arg2022z00_2470 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_nextz00_2453)))->BgL_predsz00);
									BgL_arg2021z00_2469 =
										bgl_remq_bang(BgL_bz00_2450, BgL_arg2022z00_2470);
								}
								((((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_nextz00_2453)))->
										BgL_predsz00) = ((obj_t) BgL_arg2021z00_2469), BUNSPEC);
							}
							((((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_2450)))->BgL_succsz00) =
								((obj_t) BgL_nsuccsz00_2462), BUNSPEC);
							{
								obj_t BgL_l1523z00_2472;

								BgL_l1523z00_2472 = BgL_nsuccsz00_2462;
							BgL_zc3z04anonymousza32023ze3z87_2473:
								if (PAIRP(BgL_l1523z00_2472))
									{	/* SawMill/bbv-utils.scm 282 */
										{	/* SawMill/bbv-utils.scm 283 */
											obj_t BgL_nsz00_2475;

											BgL_nsz00_2475 = CAR(BgL_l1523z00_2472);
											{	/* SawMill/bbv-utils.scm 284 */
												obj_t BgL_arg2026z00_2476;

												{	/* SawMill/bbv-utils.scm 284 */
													obj_t BgL_arg2028z00_2477;

													BgL_arg2028z00_2477 =
														(((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_nsz00_2475)))->
														BgL_predsz00);
													BgL_arg2026z00_2476 =
														BGl_loopze70ze7zzsaw_bbvzd2utilszd2
														(BgL_nextz00_2453, BgL_bz00_2450,
														BgL_arg2028z00_2477);
												}
												((((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_nsz00_2475)))->
														BgL_predsz00) =
													((obj_t) BgL_arg2026z00_2476), BUNSPEC);
											}
										}
										{
											obj_t BgL_l1523z00_5103;

											BgL_l1523z00_5103 = CDR(BgL_l1523z00_2472);
											BgL_l1523z00_2472 = BgL_l1523z00_5103;
											goto BgL_zc3z04anonymousza32023ze3z87_2473;
										}
									}
								else
									{	/* SawMill/bbv-utils.scm 282 */
										return ((bool_t) 1);
									}
							}
						}
					else
						{	/* SawMill/bbv-utils.scm 274 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* &normalize-goto! */
	obj_t BGl_z62normaliza7ezd2gotoz12z05zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3698, obj_t BgL_bz00_3699)
	{
		{	/* SawMill/bbv-utils.scm 270 */
			return
				BGl_normaliza7ezd2gotoz12z67zzsaw_bbvzd2utilszd2(
				((BgL_blockz00_bglt) BgL_bz00_3699));
		}

	}



/* remove-temps! */
	BGL_EXPORTED_DEF obj_t
		BGl_removezd2tempsz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt BgL_bz00_98)
	{
		{	/* SawMill/bbv-utils.scm 344 */
			{
				BgL_blockz00_bglt BgL_bz00_2530;

				{	/* SawMill/bbv-utils.scm 367 */
					obj_t BgL_g1230z00_2489;

					{	/* SawMill/bbv-utils.scm 367 */
						obj_t BgL_list2050z00_2508;

						BgL_list2050z00_2508 = MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_98), BNIL);
						BgL_g1230z00_2489 = BgL_list2050z00_2508;
					}
					{
						obj_t BgL_bsz00_2492;
						obj_t BgL_accz00_2493;

						{
							BgL_blockz00_bglt BgL_auxz00_5109;

							BgL_bsz00_2492 = BgL_g1230z00_2489;
							BgL_accz00_2493 = BNIL;
						BgL_zc3z04anonymousza32037ze3z87_2494:
							if (NULLP(BgL_bsz00_2492))
								{	/* SawMill/bbv-utils.scm 370 */
									BgL_auxz00_5109 = BgL_bz00_98;
								}
							else
								{	/* SawMill/bbv-utils.scm 370 */
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
													((obj_t) BgL_bsz00_2492)), BgL_accz00_2493)))
										{	/* SawMill/bbv-utils.scm 373 */
											obj_t BgL_arg2041z00_2498;

											BgL_arg2041z00_2498 = CDR(((obj_t) BgL_bsz00_2492));
											{
												obj_t BgL_bsz00_5119;

												BgL_bsz00_5119 = BgL_arg2041z00_2498;
												BgL_bsz00_2492 = BgL_bsz00_5119;
												goto BgL_zc3z04anonymousza32037ze3z87_2494;
											}
										}
									else
										{	/* SawMill/bbv-utils.scm 375 */
											BgL_blockz00_bglt BgL_i1232z00_2499;

											BgL_i1232z00_2499 =
												((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2492)));
											{	/* SawMill/bbv-utils.scm 376 */
												obj_t BgL_arg2043z00_2500;

												BgL_arg2043z00_2500 = CAR(((obj_t) BgL_bsz00_2492));
												BgL_bz00_2530 =
													((BgL_blockz00_bglt) BgL_arg2043z00_2500);
												{
													obj_t BgL_auxz00_5125;

													{	/* SawMill/bbv-utils.scm 365 */
														obj_t BgL_l01527z00_2533;

														BgL_l01527z00_2533 =
															(((BgL_blockz00_bglt) COBJECT(BgL_bz00_2530))->
															BgL_firstz00);
														{
															obj_t BgL_l1526z00_2535;

															BgL_l1526z00_2535 = BgL_l01527z00_2533;
														BgL_zc3z04anonymousza32064ze3z87_2536:
															if (NULLP(BgL_l1526z00_2535))
																{	/* SawMill/bbv-utils.scm 365 */
																	BgL_auxz00_5125 = BgL_l01527z00_2533;
																}
															else
																{	/* SawMill/bbv-utils.scm 365 */
																	{	/* SawMill/bbv-utils.scm 365 */
																		obj_t BgL_arg2066z00_2538;

																		{	/* SawMill/bbv-utils.scm 365 */
																			obj_t BgL_arg2068z00_2539;

																			BgL_arg2068z00_2539 =
																				CAR(((obj_t) BgL_l1526z00_2535));
																			BgL_arg2066z00_2538 =
																				BGl_removezd2inszd2tempsz12ze70zf5zzsaw_bbvzd2utilszd2
																				(BgL_arg2068z00_2539);
																		}
																		{	/* SawMill/bbv-utils.scm 365 */
																			obj_t BgL_tmpz00_5132;

																			BgL_tmpz00_5132 =
																				((obj_t) BgL_l1526z00_2535);
																			SET_CAR(BgL_tmpz00_5132,
																				BgL_arg2066z00_2538);
																		}
																	}
																	{	/* SawMill/bbv-utils.scm 365 */
																		obj_t BgL_arg2069z00_2540;

																		BgL_arg2069z00_2540 =
																			CDR(((obj_t) BgL_l1526z00_2535));
																		{
																			obj_t BgL_l1526z00_5137;

																			BgL_l1526z00_5137 = BgL_arg2069z00_2540;
																			BgL_l1526z00_2535 = BgL_l1526z00_5137;
																			goto
																				BgL_zc3z04anonymousza32064ze3z87_2536;
																		}
																	}
																}
														}
													}
													((((BgL_blockz00_bglt) COBJECT(BgL_bz00_2530))->
															BgL_firstz00) =
														((obj_t) BgL_auxz00_5125), BUNSPEC);
												}
											}
											{	/* SawMill/bbv-utils.scm 377 */
												obj_t BgL_arg2044z00_2501;
												obj_t BgL_arg2045z00_2502;

												{	/* SawMill/bbv-utils.scm 377 */
													obj_t BgL_arg2046z00_2503;
													obj_t BgL_arg2047z00_2504;

													BgL_arg2046z00_2503 =
														(((BgL_blockz00_bglt) COBJECT(BgL_i1232z00_2499))->
														BgL_succsz00);
													BgL_arg2047z00_2504 = CDR(((obj_t) BgL_bsz00_2492));
													BgL_arg2044z00_2501 =
														BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
														(BgL_arg2046z00_2503, BgL_arg2047z00_2504);
												}
												{	/* SawMill/bbv-utils.scm 377 */
													obj_t BgL_arg2048z00_2505;

													BgL_arg2048z00_2505 = CAR(((obj_t) BgL_bsz00_2492));
													BgL_arg2045z00_2502 =
														MAKE_YOUNG_PAIR(BgL_arg2048z00_2505,
														BgL_accz00_2493);
												}
												{
													obj_t BgL_accz00_5148;
													obj_t BgL_bsz00_5147;

													BgL_bsz00_5147 = BgL_arg2044z00_2501;
													BgL_accz00_5148 = BgL_arg2045z00_2502;
													BgL_accz00_2493 = BgL_accz00_5148;
													BgL_bsz00_2492 = BgL_bsz00_5147;
													goto BgL_zc3z04anonymousza32037ze3z87_2494;
												}
											}
										}
								}
							return ((obj_t) BgL_auxz00_5109);
						}
					}
				}
			}
		}

	}



/* remove-ins-temps!~0 */
	obj_t BGl_removezd2inszd2tempsz12ze70zf5zzsaw_bbvzd2utilszd2(obj_t
		BgL_iz00_2509)
	{
		{	/* SawMill/bbv-utils.scm 361 */
			{
				obj_t BgL_argsz00_2514;

				{	/* SawMill/bbv-utils.scm 348 */
					obj_t BgL_arg2053z00_2513;

					BgL_arg2053z00_2513 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_iz00_2509)))->BgL_argsz00);
					BgL_argsz00_2514 = BgL_arg2053z00_2513;
				BgL_zc3z04anonymousza32054ze3z87_2515:
					if (NULLP(BgL_argsz00_2514))
						{	/* SawMill/bbv-utils.scm 349 */
							return BgL_iz00_2509;
						}
					else
						{	/* SawMill/bbv-utils.scm 351 */
							obj_t BgL_g1227z00_2517;

							BgL_g1227z00_2517 = CAR(((obj_t) BgL_argsz00_2514));
							{
								obj_t BgL_argz00_2519;

								BgL_argz00_2519 = BgL_g1227z00_2517;
							BgL_zc3z04anonymousza32056ze3z87_2520:
								if (BGl_isazf3zf3zz__objectz00(BgL_argz00_2519,
										BGl_rtl_insz00zzsaw_defsz00))
									{	/* SawMill/bbv-utils.scm 352 */
										if (BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(
												((BgL_rtl_insz00_bglt) BgL_argz00_2519)))
											{	/* SawMill/bbv-utils.scm 355 */
												obj_t BgL_arg2059z00_2524;

												{	/* SawMill/bbv-utils.scm 355 */
													obj_t BgL_pairz00_3485;

													BgL_pairz00_3485 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_argz00_2519)))->
														BgL_argsz00);
													BgL_arg2059z00_2524 = CAR(BgL_pairz00_3485);
												}
												{
													obj_t BgL_argz00_5164;

													BgL_argz00_5164 = BgL_arg2059z00_2524;
													BgL_argz00_2519 = BgL_argz00_5164;
													goto BgL_zc3z04anonymousza32056ze3z87_2520;
												}
											}
										else
											{	/* SawMill/bbv-utils.scm 353 */
												BGl_removezd2inszd2tempsz12ze70zf5zzsaw_bbvzd2utilszd2
													(BgL_argz00_2519);
												{	/* SawMill/bbv-utils.scm 358 */
													obj_t BgL_arg2061z00_2526;

													BgL_arg2061z00_2526 = CDR(((obj_t) BgL_argsz00_2514));
													{
														obj_t BgL_argsz00_5168;

														BgL_argsz00_5168 = BgL_arg2061z00_2526;
														BgL_argsz00_2514 = BgL_argsz00_5168;
														goto BgL_zc3z04anonymousza32054ze3z87_2515;
													}
												}
											}
									}
								else
									{	/* SawMill/bbv-utils.scm 352 */
										{	/* SawMill/bbv-utils.scm 360 */
											obj_t BgL_tmpz00_5169;

											BgL_tmpz00_5169 = ((obj_t) BgL_argsz00_2514);
											SET_CAR(BgL_tmpz00_5169, BgL_argz00_2519);
										}
										{	/* SawMill/bbv-utils.scm 361 */
											obj_t BgL_arg2062z00_2527;

											BgL_arg2062z00_2527 = CDR(((obj_t) BgL_argsz00_2514));
											{
												obj_t BgL_argsz00_5174;

												BgL_argsz00_5174 = BgL_arg2062z00_2527;
												BgL_argsz00_2514 = BgL_argsz00_5174;
												goto BgL_zc3z04anonymousza32054ze3z87_2515;
											}
										}
									}
							}
						}
				}
			}
		}

	}



/* &remove-temps! */
	obj_t BGl_z62removezd2tempsz12za2zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3700,
		obj_t BgL_bz00_3701)
	{
		{	/* SawMill/bbv-utils.scm 344 */
			return
				BGl_removezd2tempsz12zc0zzsaw_bbvzd2utilszd2(
				((BgL_blockz00_bglt) BgL_bz00_3701));
		}

	}



/* simplify-branch! */
	BGL_EXPORTED_DEF obj_t
		BGl_simplifyzd2branchz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt
		BgL_bz00_99)
	{
		{	/* SawMill/bbv-utils.scm 382 */
			{
				obj_t BgL_bz00_2646;

				{	/* SawMill/bbv-utils.scm 389 */
					obj_t BgL_g1235z00_2545;
					obj_t BgL_g1236z00_2546;

					{	/* SawMill/bbv-utils.scm 389 */
						obj_t BgL_list2153z00_2645;

						BgL_list2153z00_2645 = MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_99), BNIL);
						BgL_g1235z00_2545 = BgL_list2153z00_2645;
					}
					BgL_g1236z00_2546 = BGl_makezd2emptyzd2bbsetz00zzsaw_bbvzd2utilszd2();
					{
						obj_t BgL_bsz00_2548;
						obj_t BgL_accz00_2549;

						{
							BgL_blockz00_bglt BgL_auxz00_5180;

							BgL_bsz00_2548 = BgL_g1235z00_2545;
							BgL_accz00_2549 = BgL_g1236z00_2546;
						BgL_zc3z04anonymousza32070ze3z87_2550:
							if (NULLP(BgL_bsz00_2548))
								{	/* SawMill/bbv-utils.scm 392 */
									BgL_auxz00_5180 = BgL_bz00_99;
								}
							else
								{	/* SawMill/bbv-utils.scm 394 */
									bool_t BgL_test2486z00_5183;

									{	/* SawMill/bbv-utils.scm 394 */
										bool_t BgL_res2373z00_3514;

										{	/* SawMill/bbv-utils.scm 394 */
											BgL_blockz00_bglt BgL_blockz00_3507;

											BgL_blockz00_3507 =
												((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2548)));
											{	/* SawMill/bbv-utils.scm 103 */
												long BgL_arg1612z00_3510;
												obj_t BgL_arg1613z00_3511;

												{
													BgL_blocksz00_bglt BgL_auxz00_5187;

													{
														obj_t BgL_auxz00_5188;

														{	/* SawMill/bbv-utils.scm 103 */
															BgL_objectz00_bglt BgL_tmpz00_5189;

															BgL_tmpz00_5189 =
																((BgL_objectz00_bglt) BgL_blockz00_3507);
															BgL_auxz00_5188 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5189);
														}
														BgL_auxz00_5187 =
															((BgL_blocksz00_bglt) BgL_auxz00_5188);
													}
													BgL_arg1612z00_3510 =
														(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5187))->
														BgL_z52markz52);
												}
												BgL_arg1613z00_3511 =
													STRUCT_REF(BgL_accz00_2549, (int) (((long) 0)));
												BgL_res2373z00_3514 =
													(BINT(BgL_arg1612z00_3510) == BgL_arg1613z00_3511);
										}}
										BgL_test2486z00_5183 = BgL_res2373z00_3514;
									}
									if (BgL_test2486z00_5183)
										{	/* SawMill/bbv-utils.scm 395 */
											obj_t BgL_arg2075z00_2554;

											BgL_arg2075z00_2554 = CDR(((obj_t) BgL_bsz00_2548));
											{
												obj_t BgL_bsz00_5200;

												BgL_bsz00_5200 = BgL_arg2075z00_2554;
												BgL_bsz00_2548 = BgL_bsz00_5200;
												goto BgL_zc3z04anonymousza32070ze3z87_2550;
											}
										}
									else
										{	/* SawMill/bbv-utils.scm 397 */
											BgL_blockz00_bglt BgL_i1237z00_2555;

											BgL_i1237z00_2555 =
												((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2548)));
											if (
												(bgl_list_length(
														(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_i1237z00_2555)))->
															BgL_succsz00)) == ((long) 1)))
												{	/* SawMill/bbv-utils.scm 400 */
													bool_t BgL_test2488z00_5209;

													{	/* SawMill/bbv-utils.scm 400 */
														long BgL_tmpz00_5210;

														{	/* SawMill/bbv-utils.scm 400 */
															obj_t BgL_auxz00_5211;

															{
																BgL_blockz00_bglt BgL_auxz00_5212;

																{	/* SawMill/bbv-utils.scm 400 */
																	obj_t BgL_pairz00_3519;

																	BgL_pairz00_3519 =
																		(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt)
																					BgL_i1237z00_2555)))->BgL_succsz00);
																	BgL_auxz00_5212 =
																		((BgL_blockz00_bglt) CAR(BgL_pairz00_3519));
																}
																BgL_auxz00_5211 =
																	(((BgL_blockz00_bglt)
																		COBJECT(BgL_auxz00_5212))->BgL_predsz00);
															}
															BgL_tmpz00_5210 =
																bgl_list_length(BgL_auxz00_5211);
														}
														BgL_test2488z00_5209 =
															(BgL_tmpz00_5210 == ((long) 1));
													}
													if (BgL_test2488z00_5209)
														{	/* SawMill/bbv-utils.scm 402 */
															obj_t BgL_sz00_2564;

															{	/* SawMill/bbv-utils.scm 402 */
																obj_t BgL_pairz00_3523;

																BgL_pairz00_3523 =
																	(((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt)
																				BgL_i1237z00_2555)))->BgL_succsz00);
																BgL_sz00_2564 = CAR(BgL_pairz00_3523);
															}
															{	/* SawMill/bbv-utils.scm 403 */
																obj_t BgL_g1534z00_2565;

																BgL_g1534z00_2565 =
																	(((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt) BgL_sz00_2564)))->
																	BgL_succsz00);
																{
																	obj_t BgL_l1532z00_2567;

																	BgL_l1532z00_2567 = BgL_g1534z00_2565;
																BgL_zc3z04anonymousza32084ze3z87_2568:
																	if (PAIRP(BgL_l1532z00_2567))
																		{	/* SawMill/bbv-utils.scm 406 */
																			{	/* SawMill/bbv-utils.scm 404 */
																				obj_t BgL_nsz00_2570;

																				BgL_nsz00_2570 = CAR(BgL_l1532z00_2567);
																				{	/* SawMill/bbv-utils.scm 405 */
																					obj_t BgL_arg2086z00_2571;

																					{	/* SawMill/bbv-utils.scm 405 */
																						obj_t BgL_arg2087z00_2572;
																						obj_t BgL_arg2088z00_2573;

																						BgL_arg2087z00_2572 =
																							(((BgL_blockz00_bglt) COBJECT(
																									((BgL_blockz00_bglt)
																										BgL_nsz00_2570)))->
																							BgL_predsz00);
																						BgL_arg2088z00_2573 =
																							CAR(((obj_t) BgL_bsz00_2548));
																						BgL_arg2086z00_2571 =
																							BGl_loopze70ze7zzsaw_bbvzd2utilszd2
																							(BgL_sz00_2564,
																							BgL_arg2088z00_2573,
																							BgL_arg2087z00_2572);
																					}
																					((((BgL_blockz00_bglt) COBJECT(
																									((BgL_blockz00_bglt)
																										BgL_nsz00_2570)))->
																							BgL_predsz00) =
																						((obj_t) BgL_arg2086z00_2571),
																						BUNSPEC);
																				}
																			}
																			{
																				obj_t BgL_l1532z00_5235;

																				BgL_l1532z00_5235 =
																					CDR(BgL_l1532z00_2567);
																				BgL_l1532z00_2567 = BgL_l1532z00_5235;
																				goto
																					BgL_zc3z04anonymousza32084ze3z87_2568;
																			}
																		}
																	else
																		{	/* SawMill/bbv-utils.scm 406 */
																			((bool_t) 1);
																		}
																}
															}
															((((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt)
																				BgL_i1237z00_2555)))->BgL_succsz00) =
																((obj_t) (((BgL_blockz00_bglt)
																			COBJECT(((BgL_blockz00_bglt)
																					BgL_sz00_2564)))->BgL_succsz00)),
																BUNSPEC);
															{	/* SawMill/bbv-utils.scm 408 */
																obj_t BgL_lpz00_2576;

																BgL_lpz00_2576 =
																	BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00
																	((((BgL_blockz00_bglt)
																			COBJECT(((BgL_blockz00_bglt)
																					BgL_i1237z00_2555)))->BgL_firstz00));
																{	/* SawMill/bbv-utils.scm 409 */
																	bool_t BgL_test2490z00_5244;

																	{	/* SawMill/bbv-utils.scm 409 */
																		obj_t BgL_arg2098z00_2585;

																		BgL_arg2098z00_2585 = CAR(BgL_lpz00_2576);
																		BgL_test2490z00_5244 =
																			BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2
																			(((BgL_rtl_insz00_bglt)
																				BgL_arg2098z00_2585));
																	}
																	if (BgL_test2490z00_5244)
																		{	/* SawMill/bbv-utils.scm 409 */
																			{	/* SawMill/bbv-utils.scm 411 */
																				obj_t BgL_arg2092z00_2579;

																				BgL_arg2092z00_2579 =
																					CAR(
																					(((BgL_blockz00_bglt) COBJECT(
																								((BgL_blockz00_bglt)
																									BgL_sz00_2564)))->
																						BgL_firstz00));
																				SET_CAR(BgL_lpz00_2576,
																					BgL_arg2092z00_2579);
																			}
																			{	/* SawMill/bbv-utils.scm 412 */
																				obj_t BgL_arg2094z00_2581;

																				BgL_arg2094z00_2581 =
																					CDR(
																					(((BgL_blockz00_bglt) COBJECT(
																								((BgL_blockz00_bglt)
																									BgL_sz00_2564)))->
																						BgL_firstz00));
																				SET_CDR(BgL_lpz00_2576,
																					BgL_arg2094z00_2581);
																			}
																		}
																	else
																		{
																			obj_t BgL_auxz00_5256;

																			{	/* SawMill/bbv-utils.scm 413 */
																				obj_t BgL_arg2096z00_2583;
																				obj_t BgL_arg2097z00_2584;

																				BgL_arg2096z00_2583 =
																					(((BgL_blockz00_bglt) COBJECT(
																							((BgL_blockz00_bglt)
																								BgL_i1237z00_2555)))->
																					BgL_firstz00);
																				BgL_arg2097z00_2584 =
																					(((BgL_blockz00_bglt)
																						COBJECT(((BgL_blockz00_bglt)
																								BgL_sz00_2564)))->BgL_firstz00);
																				BgL_auxz00_5256 =
																					BGl_appendzd22z12zc0zz__r4_pairs_and_lists_6_3z00
																					(BgL_arg2096z00_2583,
																					BgL_arg2097z00_2584);
																			}
																			((((BgL_blockz00_bglt) COBJECT(
																							((BgL_blockz00_bglt)
																								BgL_i1237z00_2555)))->
																					BgL_firstz00) =
																				((obj_t) BgL_auxz00_5256), BUNSPEC);
																		}
																}
															}
															{
																obj_t BgL_auxz00_5270;
																BgL_blocksz00_bglt BgL_auxz00_5264;

																{
																	BgL_blocksz00_bglt BgL_auxz00_5271;

																	{
																		obj_t BgL_auxz00_5272;

																		{	/* SawMill/bbv-utils.scm 414 */
																			BgL_objectz00_bglt BgL_tmpz00_5273;

																			BgL_tmpz00_5273 =
																				((BgL_objectz00_bglt)
																				((BgL_blockz00_bglt) BgL_sz00_2564));
																			BgL_auxz00_5272 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_5273);
																		}
																		BgL_auxz00_5271 =
																			((BgL_blocksz00_bglt) BgL_auxz00_5272);
																	}
																	BgL_auxz00_5270 =
																		(((BgL_blocksz00_bglt)
																			COBJECT(BgL_auxz00_5271))->BgL_octxsz00);
																}
																{
																	obj_t BgL_auxz00_5265;

																	{	/* SawMill/bbv-utils.scm 414 */
																		BgL_objectz00_bglt BgL_tmpz00_5266;

																		BgL_tmpz00_5266 =
																			((BgL_objectz00_bglt) BgL_i1237z00_2555);
																		BgL_auxz00_5265 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5266);
																	}
																	BgL_auxz00_5264 =
																		((BgL_blocksz00_bglt) BgL_auxz00_5265);
																}
																((((BgL_blocksz00_bglt)
																			COBJECT(BgL_auxz00_5264))->BgL_octxsz00) =
																	((obj_t) BgL_auxz00_5270), BUNSPEC);
															}
															{

																goto BgL_zc3z04anonymousza32070ze3z87_2550;
															}
														}
													else
														{	/* SawMill/bbv-utils.scm 416 */
															obj_t BgL_arg2102z00_2588;
															obj_t BgL_arg2103z00_2589;

															{	/* SawMill/bbv-utils.scm 416 */
																obj_t BgL_arg2104z00_2590;
																obj_t BgL_arg2105z00_2591;

																{	/* SawMill/bbv-utils.scm 416 */
																	obj_t BgL_pairz00_3544;

																	BgL_pairz00_3544 =
																		(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt)
																					BgL_i1237z00_2555)))->BgL_succsz00);
																	BgL_arg2104z00_2590 = CAR(BgL_pairz00_3544);
																}
																BgL_arg2105z00_2591 =
																	CDR(((obj_t) BgL_bsz00_2548));
																BgL_arg2102z00_2588 =
																	MAKE_YOUNG_PAIR(BgL_arg2104z00_2590,
																	BgL_arg2105z00_2591);
															}
															{	/* SawMill/bbv-utils.scm 417 */
																obj_t BgL_arg2107z00_2593;

																BgL_arg2107z00_2593 =
																	CAR(((obj_t) BgL_bsz00_2548));
																BgL_arg2103z00_2589 =
																	BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
																	((BgL_blockz00_bglt) BgL_arg2107z00_2593),
																	BgL_accz00_2549);
															}
															{
																obj_t BgL_accz00_5291;
																obj_t BgL_bsz00_5290;

																BgL_bsz00_5290 = BgL_arg2102z00_2588;
																BgL_accz00_5291 = BgL_arg2103z00_2589;
																BgL_accz00_2549 = BgL_accz00_5291;
																BgL_bsz00_2548 = BgL_bsz00_5290;
																goto BgL_zc3z04anonymousza32070ze3z87_2550;
															}
														}
												}
											else
												{
													obj_t BgL_ssz00_2601;
													obj_t BgL_nsuccsz00_2602;

													{	/* SawMill/bbv-utils.scm 418 */
														obj_t BgL_arg2112z00_2600;

														BgL_arg2112z00_2600 =
															(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_i1237z00_2555)))->
															BgL_succsz00);
														BgL_ssz00_2601 = BgL_arg2112z00_2600;
														BgL_nsuccsz00_2602 = BNIL;
													BgL_zc3z04anonymousza32113ze3z87_2603:
														if (NULLP(BgL_ssz00_2601))
															{	/* SawMill/bbv-utils.scm 421 */
																obj_t BgL_arg2115z00_2605;
																obj_t BgL_arg2116z00_2606;

																{	/* SawMill/bbv-utils.scm 421 */
																	obj_t BgL_arg2117z00_2607;
																	obj_t BgL_arg2118z00_2608;

																	BgL_arg2117z00_2607 =
																		bgl_reverse(
																		(((BgL_blockz00_bglt) COBJECT(
																					((BgL_blockz00_bglt)
																						BgL_i1237z00_2555)))->
																			BgL_succsz00));
																	BgL_arg2118z00_2608 =
																		CDR(((obj_t) BgL_bsz00_2548));
																	BgL_arg2115z00_2605 =
																		BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
																		(BgL_arg2117z00_2607, BgL_arg2118z00_2608);
																}
																{	/* SawMill/bbv-utils.scm 422 */
																	obj_t BgL_arg2120z00_2610;

																	BgL_arg2120z00_2610 =
																		CAR(((obj_t) BgL_bsz00_2548));
																	BgL_arg2116z00_2606 =
																		BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
																		((BgL_blockz00_bglt) BgL_arg2120z00_2610),
																		BgL_accz00_2549);
																}
																{
																	obj_t BgL_accz00_5307;
																	obj_t BgL_bsz00_5306;

																	BgL_bsz00_5306 = BgL_arg2115z00_2605;
																	BgL_accz00_5307 = BgL_arg2116z00_2606;
																	BgL_accz00_2549 = BgL_accz00_5307;
																	BgL_bsz00_2548 = BgL_bsz00_5306;
																	goto BgL_zc3z04anonymousza32070ze3z87_2550;
																}
															}
														else
															{	/* SawMill/bbv-utils.scm 423 */
																obj_t BgL_sz00_2611;

																BgL_sz00_2611 = CAR(((obj_t) BgL_ssz00_2601));
																{	/* SawMill/bbv-utils.scm 424 */
																	bool_t BgL_test2492z00_5310;

																	BgL_bz00_2646 = BgL_sz00_2611;
																	{	/* SawMill/bbv-utils.scm 387 */
																		obj_t BgL_g1530z00_2649;

																		BgL_g1530z00_2649 =
																			(((BgL_blockz00_bglt) COBJECT(
																					((BgL_blockz00_bglt)
																						BgL_bz00_2646)))->BgL_firstz00);
																		{
																			obj_t BgL_l1528z00_2651;

																			BgL_l1528z00_2651 = BgL_g1530z00_2649;
																		BgL_zc3z04anonymousza32155ze3z87_2652:
																			if (NULLP(BgL_l1528z00_2651))
																				{	/* SawMill/bbv-utils.scm 387 */
																					BgL_test2492z00_5310 = ((bool_t) 1);
																				}
																			else
																				{	/* SawMill/bbv-utils.scm 387 */
																					bool_t BgL_test2494z00_5315;

																					{	/* SawMill/bbv-utils.scm 387 */
																						obj_t BgL_iz00_2657;

																						BgL_iz00_2657 =
																							CAR(((obj_t) BgL_l1528z00_2651));
																						{	/* SawMill/bbv-utils.scm 387 */
																							bool_t BgL__ortest_1234z00_2658;

																							BgL__ortest_1234z00_2658 =
																								BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2
																								(((BgL_rtl_insz00_bglt)
																									BgL_iz00_2657));
																							if (BgL__ortest_1234z00_2658)
																								{	/* SawMill/bbv-utils.scm 387 */
																									BgL_test2494z00_5315 =
																										BgL__ortest_1234z00_2658;
																								}
																							else
																								{	/* SawMill/bbv-utils.scm 387 */
																									BgL_test2494z00_5315 =
																										BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2
																										(((BgL_rtl_insz00_bglt)
																											BgL_iz00_2657));
																								}
																						}
																					}
																					if (BgL_test2494z00_5315)
																						{	/* SawMill/bbv-utils.scm 387 */
																							obj_t BgL_arg2157z00_2656;

																							BgL_arg2157z00_2656 =
																								CDR(
																								((obj_t) BgL_l1528z00_2651));
																							{
																								obj_t BgL_l1528z00_5325;

																								BgL_l1528z00_5325 =
																									BgL_arg2157z00_2656;
																								BgL_l1528z00_2651 =
																									BgL_l1528z00_5325;
																								goto
																									BgL_zc3z04anonymousza32155ze3z87_2652;
																							}
																						}
																					else
																						{	/* SawMill/bbv-utils.scm 387 */
																							BgL_test2492z00_5310 =
																								((bool_t) 0);
																						}
																				}
																		}
																	}
																	if (BgL_test2492z00_5310)
																		{	/* SawMill/bbv-utils.scm 425 */
																			obj_t BgL_tz00_2613;

																			{	/* SawMill/bbv-utils.scm 425 */
																				obj_t BgL_pairz00_3552;

																				BgL_pairz00_3552 =
																					(((BgL_blockz00_bglt) COBJECT(
																							((BgL_blockz00_bglt)
																								BgL_sz00_2611)))->BgL_succsz00);
																				BgL_tz00_2613 = CAR(BgL_pairz00_3552);
																			}
																			if (
																				(bgl_list_length(
																						(((BgL_blockz00_bglt) COBJECT(
																									((BgL_blockz00_bglt)
																										BgL_sz00_2611)))->
																							BgL_predsz00)) == ((long) 1)))
																				{	/* SawMill/bbv-utils.scm 426 */
																					{	/* SawMill/bbv-utils.scm 429 */
																						obj_t BgL_arg2125z00_2617;

																						BgL_arg2125z00_2617 =
																							bgl_remq(BgL_sz00_2611,
																							(((BgL_blockz00_bglt) COBJECT(
																										((BgL_blockz00_bglt)
																											BgL_tz00_2613)))->
																								BgL_predsz00));
																						((((BgL_blockz00_bglt)
																									COBJECT(((BgL_blockz00_bglt)
																											BgL_tz00_2613)))->
																								BgL_predsz00) =
																							((obj_t) BgL_arg2125z00_2617),
																							BUNSPEC);
																					}
																					{	/* SawMill/bbv-utils.scm 430 */
																						obj_t BgL_arg2127z00_2619;

																						BgL_arg2127z00_2619 =
																							CAR(((obj_t) BgL_bsz00_2548));
																						BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2
																							(((BgL_blockz00_bglt)
																								BgL_arg2127z00_2619),
																							((BgL_blockz00_bglt)
																								BgL_sz00_2611),
																							((BgL_blockz00_bglt)
																								BgL_tz00_2613));
																					}
																					{	/* SawMill/bbv-utils.scm 431 */
																						obj_t BgL_vz00_3561;

																						BgL_vz00_3561 = BNIL;
																						((((BgL_blockz00_bglt) COBJECT(
																										((BgL_blockz00_bglt)
																											BgL_sz00_2611)))->
																								BgL_predsz00) =
																							((obj_t) BgL_vz00_3561), BUNSPEC);
																					}
																					{	/* SawMill/bbv-utils.scm 432 */
																						obj_t BgL_arg2128z00_2620;
																						obj_t BgL_arg2129z00_2621;

																						BgL_arg2128z00_2620 =
																							CDR(((obj_t) BgL_ssz00_2601));
																						BgL_arg2129z00_2621 =
																							MAKE_YOUNG_PAIR(BgL_tz00_2613,
																							BgL_nsuccsz00_2602);
																						{
																							obj_t BgL_nsuccsz00_5351;
																							obj_t BgL_ssz00_5350;

																							BgL_ssz00_5350 =
																								BgL_arg2128z00_2620;
																							BgL_nsuccsz00_5351 =
																								BgL_arg2129z00_2621;
																							BgL_nsuccsz00_2602 =
																								BgL_nsuccsz00_5351;
																							BgL_ssz00_2601 = BgL_ssz00_5350;
																							goto
																								BgL_zc3z04anonymousza32113ze3z87_2603;
																						}
																					}
																				}
																			else
																				{	/* SawMill/bbv-utils.scm 426 */
																					{	/* SawMill/bbv-utils.scm 434 */
																						obj_t BgL_arg2130z00_2622;
																						obj_t BgL_arg2131z00_2623;

																						BgL_arg2130z00_2622 =
																							CAR(((obj_t) BgL_bsz00_2548));
																						{	/* SawMill/bbv-utils.scm 436 */
																							obj_t BgL_arg2132z00_2624;

																							BgL_arg2132z00_2624 =
																								bgl_remq(BgL_sz00_2611,
																								(((BgL_blockz00_bglt) COBJECT(
																											((BgL_blockz00_bglt)
																												CAR(
																													((obj_t)
																														BgL_bsz00_2548)))))->
																									BgL_succsz00));
																							BgL_arg2131z00_2623 =
																								MAKE_YOUNG_PAIR(BgL_tz00_2613,
																								BgL_arg2132z00_2624);
																						}
																						{	/* SawMill/bbv-utils.scm 434 */
																							obj_t BgL_vz00_3567;

																							BgL_vz00_3567 =
																								BgL_arg2131z00_2623;
																							((((BgL_blockz00_bglt)
																										COBJECT(((BgL_blockz00_bglt)
																												BgL_arg2130z00_2622)))->
																									BgL_succsz00) =
																								((obj_t) BgL_vz00_3567),
																								BUNSPEC);
																						}
																					}
																					{	/* SawMill/bbv-utils.scm 438 */
																						obj_t BgL_arg2135z00_2627;

																						BgL_arg2135z00_2627 =
																							bgl_remq(CAR(
																								((obj_t) BgL_bsz00_2548)),
																							(((BgL_blockz00_bglt) COBJECT(
																										((BgL_blockz00_bglt)
																											BgL_sz00_2611)))->
																								BgL_predsz00));
																						((((BgL_blockz00_bglt)
																									COBJECT(((BgL_blockz00_bglt)
																											BgL_sz00_2611)))->
																								BgL_predsz00) =
																							((obj_t) BgL_arg2135z00_2627),
																							BUNSPEC);
																					}
																					{	/* SawMill/bbv-utils.scm 440 */
																						obj_t BgL_arg2138z00_2630;

																						{	/* SawMill/bbv-utils.scm 440 */
																							obj_t BgL_arg2140z00_2631;
																							obj_t BgL_arg2141z00_2632;

																							BgL_arg2140z00_2631 =
																								CAR(((obj_t) BgL_bsz00_2548));
																							BgL_arg2141z00_2632 =
																								(((BgL_blockz00_bglt) COBJECT(
																										((BgL_blockz00_bglt)
																											BgL_tz00_2613)))->
																								BgL_predsz00);
																							BgL_arg2138z00_2630 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2140z00_2631,
																								BgL_arg2141z00_2632);
																						}
																						{	/* SawMill/bbv-utils.scm 439 */
																							obj_t BgL_vz00_3575;

																							BgL_vz00_3575 =
																								BgL_arg2138z00_2630;
																							((((BgL_blockz00_bglt)
																										COBJECT(((BgL_blockz00_bglt)
																												BgL_tz00_2613)))->
																									BgL_predsz00) =
																								((obj_t) BgL_vz00_3575),
																								BUNSPEC);
																						}
																					}
																					{	/* SawMill/bbv-utils.scm 442 */
																						obj_t BgL_arg2142z00_2633;
																						obj_t BgL_arg2143z00_2634;

																						BgL_arg2142z00_2633 =
																							CDR(((obj_t) BgL_ssz00_2601));
																						BgL_arg2143z00_2634 =
																							MAKE_YOUNG_PAIR(BgL_sz00_2611,
																							BgL_nsuccsz00_2602);
																						{
																							obj_t BgL_nsuccsz00_5380;
																							obj_t BgL_ssz00_5379;

																							BgL_ssz00_5379 =
																								BgL_arg2142z00_2633;
																							BgL_nsuccsz00_5380 =
																								BgL_arg2143z00_2634;
																							BgL_nsuccsz00_2602 =
																								BgL_nsuccsz00_5380;
																							BgL_ssz00_2601 = BgL_ssz00_5379;
																							goto
																								BgL_zc3z04anonymousza32113ze3z87_2603;
																						}
																					}
																				}
																		}
																	else
																		{	/* SawMill/bbv-utils.scm 443 */
																			obj_t BgL_arg2147z00_2638;
																			obj_t BgL_arg2148z00_2639;

																			BgL_arg2147z00_2638 =
																				CDR(((obj_t) BgL_ssz00_2601));
																			BgL_arg2148z00_2639 =
																				MAKE_YOUNG_PAIR(BgL_sz00_2611,
																				BgL_nsuccsz00_2602);
																			{
																				obj_t BgL_nsuccsz00_5385;
																				obj_t BgL_ssz00_5384;

																				BgL_ssz00_5384 = BgL_arg2147z00_2638;
																				BgL_nsuccsz00_5385 =
																					BgL_arg2148z00_2639;
																				BgL_nsuccsz00_2602 = BgL_nsuccsz00_5385;
																				BgL_ssz00_2601 = BgL_ssz00_5384;
																				goto
																					BgL_zc3z04anonymousza32113ze3z87_2603;
																			}
																		}
																}
															}
													}
												}
										}
								}
							return ((obj_t) BgL_auxz00_5180);
						}
					}
				}
			}
		}

	}



/* &simplify-branch! */
	obj_t BGl_z62simplifyzd2branchz12za2zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3702, obj_t BgL_bz00_3703)
	{
		{	/* SawMill/bbv-utils.scm 382 */
			return
				BGl_simplifyzd2branchz12zc0zzsaw_bbvzd2utilszd2(
				((BgL_blockz00_bglt) BgL_bz00_3703));
		}

	}



/* remove-nop! */
	BGL_EXPORTED_DEF obj_t
		BGl_removezd2nopz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt BgL_bz00_100)
	{
		{	/* SawMill/bbv-utils.scm 448 */
			{	/* SawMill/bbv-utils.scm 449 */
				obj_t BgL_g1239z00_2661;
				obj_t BgL_g1240z00_2662;

				{	/* SawMill/bbv-utils.scm 449 */
					obj_t BgL_list2186z00_2700;

					BgL_list2186z00_2700 = MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_100), BNIL);
					BgL_g1239z00_2661 = BgL_list2186z00_2700;
				}
				BgL_g1240z00_2662 = BGl_makezd2emptyzd2bbsetz00zzsaw_bbvzd2utilszd2();
				{
					obj_t BgL_bsz00_2664;
					obj_t BgL_accz00_2665;

					{
						BgL_blockz00_bglt BgL_auxz00_5392;

						BgL_bsz00_2664 = BgL_g1239z00_2661;
						BgL_accz00_2665 = BgL_g1240z00_2662;
					BgL_zc3z04anonymousza32158ze3z87_2666:
						if (NULLP(BgL_bsz00_2664))
							{	/* SawMill/bbv-utils.scm 452 */
								BgL_auxz00_5392 = BgL_bz00_100;
							}
						else
							{	/* SawMill/bbv-utils.scm 454 */
								bool_t BgL_test2498z00_5395;

								{	/* SawMill/bbv-utils.scm 454 */
									bool_t BgL_res2381z00_3588;

									{	/* SawMill/bbv-utils.scm 454 */
										BgL_blockz00_bglt BgL_blockz00_3581;

										BgL_blockz00_3581 =
											((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2664)));
										{	/* SawMill/bbv-utils.scm 103 */
											long BgL_arg1612z00_3584;
											obj_t BgL_arg1613z00_3585;

											{
												BgL_blocksz00_bglt BgL_auxz00_5399;

												{
													obj_t BgL_auxz00_5400;

													{	/* SawMill/bbv-utils.scm 103 */
														BgL_objectz00_bglt BgL_tmpz00_5401;

														BgL_tmpz00_5401 =
															((BgL_objectz00_bglt) BgL_blockz00_3581);
														BgL_auxz00_5400 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5401);
													}
													BgL_auxz00_5399 =
														((BgL_blocksz00_bglt) BgL_auxz00_5400);
												}
												BgL_arg1612z00_3584 =
													(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5399))->
													BgL_z52markz52);
											}
											BgL_arg1613z00_3585 =
												STRUCT_REF(BgL_accz00_2665, (int) (((long) 0)));
											BgL_res2381z00_3588 =
												(BINT(BgL_arg1612z00_3584) == BgL_arg1613z00_3585);
									}}
									BgL_test2498z00_5395 = BgL_res2381z00_3588;
								}
								if (BgL_test2498z00_5395)
									{	/* SawMill/bbv-utils.scm 455 */
										obj_t BgL_arg2162z00_2670;

										BgL_arg2162z00_2670 = CDR(((obj_t) BgL_bsz00_2664));
										{
											obj_t BgL_bsz00_5412;

											BgL_bsz00_5412 = BgL_arg2162z00_2670;
											BgL_bsz00_2664 = BgL_bsz00_5412;
											goto BgL_zc3z04anonymousza32158ze3z87_2666;
										}
									}
								else
									{	/* SawMill/bbv-utils.scm 457 */
										BgL_blockz00_bglt BgL_i1241z00_2671;

										BgL_i1241z00_2671 =
											((BgL_blockz00_bglt) CAR(((obj_t) BgL_bsz00_2664)));
										{	/* SawMill/bbv-utils.scm 458 */
											bool_t BgL_test2499z00_5416;

											{	/* SawMill/bbv-utils.scm 458 */
												obj_t BgL_tmpz00_5417;

												BgL_tmpz00_5417 =
													CDR(
													(((BgL_blockz00_bglt) COBJECT(BgL_i1241z00_2671))->
														BgL_firstz00));
												BgL_test2499z00_5416 = PAIRP(BgL_tmpz00_5417);
											}
											if (BgL_test2499z00_5416)
												{	/* SawMill/bbv-utils.scm 459 */
													obj_t BgL_fz00_2678;

													BgL_fz00_2678 =
														BGl_filterz12z12zz__r4_control_features_6_9z00
														(BGl_proc2386z00zzsaw_bbvzd2utilszd2,
														(((BgL_blockz00_bglt) COBJECT(BgL_i1241z00_2671))->
															BgL_firstz00));
													{
														obj_t BgL_auxz00_5423;

														if (NULLP(BgL_fz00_2678))
															{	/* SawMill/bbv-utils.scm 462 */
																obj_t BgL_arg2170z00_2680;

																BgL_arg2170z00_2680 =
																	CAR(
																	(((BgL_blockz00_bglt)
																			COBJECT(BgL_i1241z00_2671))->
																		BgL_firstz00));
																{	/* SawMill/bbv-utils.scm 462 */
																	obj_t BgL_list2171z00_2681;

																	BgL_list2171z00_2681 =
																		MAKE_YOUNG_PAIR(BgL_arg2170z00_2680, BNIL);
																	BgL_auxz00_5423 = BgL_list2171z00_2681;
																}
															}
														else
															{	/* SawMill/bbv-utils.scm 461 */
																BgL_auxz00_5423 = BgL_fz00_2678;
															}
														((((BgL_blockz00_bglt) COBJECT(BgL_i1241z00_2671))->
																BgL_firstz00) =
															((obj_t) BgL_auxz00_5423), BUNSPEC);
													}
												}
											else
												{	/* SawMill/bbv-utils.scm 458 */
													BFALSE;
												}
										}
										{	/* SawMill/bbv-utils.scm 464 */
											obj_t BgL_arg2180z00_2693;
											obj_t BgL_arg2181z00_2694;

											{	/* SawMill/bbv-utils.scm 464 */
												obj_t BgL_arg2182z00_2695;
												obj_t BgL_arg2183z00_2696;

												BgL_arg2182z00_2695 =
													(((BgL_blockz00_bglt) COBJECT(BgL_i1241z00_2671))->
													BgL_succsz00);
												BgL_arg2183z00_2696 = CDR(((obj_t) BgL_bsz00_2664));
												BgL_arg2180z00_2693 =
													BGl_appendzd221011zd2zzsaw_bbvzd2utilszd2
													(BgL_arg2182z00_2695, BgL_arg2183z00_2696);
											}
											{	/* SawMill/bbv-utils.scm 464 */
												obj_t BgL_arg2184z00_2697;

												BgL_arg2184z00_2697 = CAR(((obj_t) BgL_bsz00_2664));
												BgL_arg2181z00_2694 =
													BGl_bbsetzd2conszd2zzsaw_bbvzd2utilszd2(
													((BgL_blockz00_bglt) BgL_arg2184z00_2697),
													BgL_accz00_2665);
											}
											{
												obj_t BgL_accz00_5439;
												obj_t BgL_bsz00_5438;

												BgL_bsz00_5438 = BgL_arg2180z00_2693;
												BgL_accz00_5439 = BgL_arg2181z00_2694;
												BgL_accz00_2665 = BgL_accz00_5439;
												BgL_bsz00_2664 = BgL_bsz00_5438;
												goto BgL_zc3z04anonymousza32158ze3z87_2666;
											}
										}
									}
							}
						return ((obj_t) BgL_auxz00_5392);
					}
				}
			}
		}

	}



/* &remove-nop! */
	obj_t BGl_z62removezd2nopz12za2zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3705,
		obj_t BgL_bz00_3706)
	{
		{	/* SawMill/bbv-utils.scm 448 */
			return
				BGl_removezd2nopz12zc0zzsaw_bbvzd2utilszd2(
				((BgL_blockz00_bglt) BgL_bz00_3706));
		}

	}



/* &<@anonymous:2175> */
	obj_t BGl_z62zc3z04anonymousza32175ze3ze5zzsaw_bbvzd2utilszd2(obj_t
		BgL_envz00_3707, obj_t BgL_iz00_3708)
	{
		{	/* SawMill/bbv-utils.scm 459 */
			{	/* SawMill/bbv-utils.scm 459 */
				bool_t BgL_tmpz00_5443;

				if (BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(
						((BgL_rtl_insz00_bglt) BgL_iz00_3708)))
					{	/* SawMill/bbv-utils.scm 459 */
						BgL_tmpz00_5443 = ((bool_t) 0);
					}
				else
					{	/* SawMill/bbv-utils.scm 459 */
						BgL_tmpz00_5443 = ((bool_t) 1);
					}
				return BBOOL(BgL_tmpz00_5443);
			}
		}

	}



/* redirect-block! */
	BGL_EXPORTED_DEF obj_t
		BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt
		BgL_bz00_101, BgL_blockz00_bglt BgL_oldz00_102,
		BgL_blockz00_bglt BgL_newz00_103)
	{
		{	/* SawMill/bbv-utils.scm 469 */
			{
				obj_t BgL_auxz00_5448;

				{	/* SawMill/bbv-utils.scm 477 */
					obj_t BgL_arg2187z00_2702;

					BgL_arg2187z00_2702 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_101)))->BgL_succsz00);
					BgL_auxz00_5448 =
						BGl_loopze70ze7zzsaw_bbvzd2utilszd2(
						((obj_t) BgL_oldz00_102),
						((obj_t) BgL_newz00_103), BgL_arg2187z00_2702);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_101)))->BgL_succsz00) =
					((obj_t) BgL_auxz00_5448), BUNSPEC);
			}
			{
				obj_t BgL_auxz00_5456;

				{	/* SawMill/bbv-utils.scm 479 */
					obj_t BgL_arg2188z00_2704;

					BgL_arg2188z00_2704 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oldz00_102)))->BgL_predsz00);
					BgL_auxz00_5456 =
						bgl_remq_bang(((obj_t) BgL_bz00_101), BgL_arg2188z00_2704);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_oldz00_102)))->BgL_predsz00) =
					((obj_t) BgL_auxz00_5456), BUNSPEC);
			}
			{
				obj_t BgL_auxz00_5463;

				{	/* SawMill/bbv-utils.scm 481 */
					obj_t BgL_arg2189z00_2706;

					BgL_arg2189z00_2706 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_newz00_103)))->BgL_predsz00);
					BgL_auxz00_5463 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_101), BgL_arg2189z00_2706);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_newz00_103)))->BgL_predsz00) =
					((obj_t) BgL_auxz00_5463), BUNSPEC);
			}
			{	/* SawMill/bbv-utils.scm 482 */
				obj_t BgL_lastz00_2707;

				BgL_lastz00_2707 =
					CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
						(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_bz00_101)))->BgL_firstz00)));
				if (BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(
						((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))
					{	/* SawMill/bbv-utils.scm 486 */
						BgL_rtl_ifeqz00_bglt BgL_i1246z00_2710;

						BgL_i1246z00_2710 =
							((BgL_rtl_ifeqz00_bglt)
							(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))->BgL_funz00));
						if (
							(((obj_t)
									(((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_i1246z00_2710))->
										BgL_thenz00)) == ((obj_t) BgL_oldz00_102)))
							{	/* SawMill/bbv-utils.scm 487 */
								((((BgL_rtl_ifeqz00_bglt) COBJECT(BgL_i1246z00_2710))->
										BgL_thenz00) =
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_newz00_103)),
									BUNSPEC);
							}
						else
							{	/* SawMill/bbv-utils.scm 487 */
								BFALSE;
							}
					}
				else
					{	/* SawMill/bbv-utils.scm 484 */
						if (BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(
								((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))
							{	/* SawMill/bbv-utils.scm 491 */
								BgL_rtl_ifnez00_bglt BgL_i1248z00_2716;

								BgL_i1248z00_2716 =
									((BgL_rtl_ifnez00_bglt)
									(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))->
										BgL_funz00));
								if ((((obj_t) (((BgL_rtl_ifnez00_bglt)
													COBJECT(BgL_i1248z00_2716))->BgL_thenz00)) ==
										((obj_t) BgL_oldz00_102)))
									{	/* SawMill/bbv-utils.scm 492 */
										((((BgL_rtl_ifnez00_bglt) COBJECT(BgL_i1248z00_2716))->
												BgL_thenz00) =
											((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
													BgL_newz00_103)), BUNSPEC);
									}
								else
									{	/* SawMill/bbv-utils.scm 492 */
										BFALSE;
									}
							}
						else
							{	/* SawMill/bbv-utils.scm 489 */
								if (BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
										((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))
									{	/* SawMill/bbv-utils.scm 496 */
										BgL_rtl_goz00_bglt BgL_i1250z00_2722;

										BgL_i1250z00_2722 =
											((BgL_rtl_goz00_bglt)
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_lastz00_2707)))->
												BgL_funz00));
										((((BgL_rtl_goz00_bglt) COBJECT(BgL_i1250z00_2722))->
												BgL_toz00) =
											((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
													BgL_newz00_103)), BUNSPEC);
									}
								else
									{	/* SawMill/bbv-utils.scm 494 */
										BFALSE;
									}
							}
					}
			}
			return ((obj_t) BgL_bz00_101);
		}

	}



/* &redirect-block! */
	obj_t BGl_z62redirectzd2blockz12za2zzsaw_bbvzd2utilszd2(obj_t BgL_envz00_3709,
		obj_t BgL_bz00_3710, obj_t BgL_oldz00_3711, obj_t BgL_newz00_3712)
	{
		{	/* SawMill/bbv-utils.scm 469 */
			return
				BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2(
				((BgL_blockz00_bglt) BgL_bz00_3710),
				((BgL_blockz00_bglt) BgL_oldz00_3711),
				((BgL_blockz00_bglt) BgL_newz00_3712));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2utilszd2()
	{
		{	/* SawMill/bbv-utils.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(((long) 237915310),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(((long) 241613701),
				BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75(((long)
					174034012), BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
			return BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(((long)
					486661379), BSTRING_TO_STRING(BGl_string2387z00zzsaw_bbvzd2utilszd2));
		}

	}

#ifdef __cplusplus
}
#endif
