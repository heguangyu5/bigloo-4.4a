/*===========================================================================*/
/*   (SawMill/bbv-specialize.scm)                                            */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/bbv-specialize.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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

	typedef struct BgL_literalz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}                 *BgL_literalz00_bglt;

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

	typedef struct BgL_rtl_movz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}                 *BgL_rtl_movz00_bglt;

	typedef struct BgL_rtl_loadiz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_atomz00_bgl *BgL_constantz00;
	}                   *BgL_rtl_loadiz00_bglt;

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

	typedef struct BgL_blockvz00_bgl
	{
		obj_t BgL_versionsz00;
		long BgL_z52markz52;
	}                *BgL_blockvz00_bglt;

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

	typedef struct BgL_bbvzd2ctxentryzd2_bgl
	{
		header_t header;
		obj_t widening;
		struct BgL_rtl_regz00_bgl *BgL_regz00;
		struct BgL_typez00_bgl *BgL_typz00;
		bool_t BgL_flagz00;
		obj_t BgL_valuez00;
		obj_t BgL_aliasesz00;
	}                        *BgL_bbvzd2ctxentryzd2_bglt;


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	extern obj_t BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2;
	static obj_t BGl_z62blockSzd2ictxzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2minz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2firstzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t BGl_z62blockVzd2firstzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszf2bbvzd2defz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62rtl_inszf2bbvzd2argsz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL long
		BGl_blockSzd2z52markz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2argszd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	static obj_t BGl_z62blockVzd2z52markze2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_blockVzd2labelzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	extern bool_t
		BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static BgL_rtl_regz00_bglt
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2inz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2outzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2z52spillzd2setz12zb2zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t
		BGl_z62blockSzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2z52hashz72zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2outzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl_z62blockVzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_bbvzd2specializa7ez75();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2funzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2argszd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	extern obj_t BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_invzd2opze70z35zzsaw_bbvzd2specializa7ez75(obj_t);
	extern obj_t BGl_regsetz00zzsaw_regsetz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	extern bool_t
		BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_inszf2bbvzd2outz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_bbvzd2ctxentryzd2typz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2funzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, BgL_rtl_funz00_bglt);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bbvzd2ctxentryzd2valuez00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2succszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t BGl_z62blockVzd2succszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_bbvzd2specializa7ez75();
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2predszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	extern obj_t BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2;
	extern obj_t BGl_rtl_goz00zzsaw_defsz00;
	extern bool_t
		BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern bool_t BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static bool_t BGl_intervalzd3zf3z20zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_inszd2typecheckzf3z43zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_z62blockSzd2firstzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt);
	extern obj_t BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2;
	BGL_EXPORTED_DECL bool_t
		BGl_bbvzd2ctxentryzf3z21zzsaw_bbvzd2specializa7ez75(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62bbvzd2ctxentryzd2aliaseszd2setz12za2zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_makezd2rtl_inszf2bbvz20zzsaw_bbvzd2specializa7ez75(obj_t, obj_t, obj_t,
		BgL_rtl_funz00_bglt, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(obj_t, BgL_rtl_regz00_bglt);
	extern obj_t BGl_blockSz00zzsaw_bbvzd2typeszd2;
	extern obj_t BGl_blockVz00zzsaw_bbvzd2typeszd2;
	static obj_t
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62blockSzd2z52markze2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_blockSzd2labelzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_regsetz00_bglt, obj_t);
	static obj_t BGl_z62blockVzd2versionszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_z62blockVzd2labelzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	extern obj_t BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2;
	static obj_t BGl_z62rtl_inszd2intcmpzf3z43zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62bbvzd2ctxentryzd2nilz62zzsaw_bbvzd2specializa7ez75(obj_t);
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_regze70ze7zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_blockSzd2nilzd2zzsaw_bbvzd2specializa7ez75();
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52hashz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t BGl_z62blockSzd2z52parentze2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2z52spillzd2setz12zd0zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2inzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2loczd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62blockSzd2z52hashzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static BgL_rtl_regz00_bglt
		BGl_z62bbvzd2ctxentryzd2regz62zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static BgL_rtl_funz00_bglt
		BGl_z62rtl_inszf2bbvzd2funz42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2specializa7ez75();
	static BgL_blockz00_bglt
		BGl_z62blockSzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2destz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t BGl_specializa7ezf2opze70zb2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2loczd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2specializa7ezd2intcmpza7zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_inszd2specializa7ez17zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2;
	extern obj_t BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2;
	static obj_t BGl_z62blockSzd2succszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2z52hashzd2setz12zb2zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		int);
	static BgL_rtl_insz00_bglt
		BGl_z62rtl_inszf2bbvzd2nilz42zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2predszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		int);
	static obj_t BGl_za2infinityzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt);
	static obj_t BGl_z62blockVzd2predszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static BgL_rtl_loadiz00_bglt BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75();
	static obj_t BGl_z62bbvzd2ctxentryzd2flagz62zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62blockSzd2z52blacklistze2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszf2bbvzd2locz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2octxszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2argsz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t BGl_za2lengthzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	extern bool_t
		BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2inzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	extern obj_t BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
	static obj_t BGl_intervalzd2eqzd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t
		BGl_z62blockSzd2ictxzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_inszf2bbvzd2inz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_regsetz00_bglt, int);
	static obj_t BGl_z62blockSzd2labelzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static bool_t BGl_za2typezd2callza2zd2zzsaw_bbvzd2specializa7ez75;
	static obj_t BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		int);
	static obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_blockVzd2nilzd2zzsaw_bbvzd2specializa7ez75();
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2defz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75 =
		BUNSPEC;
	extern obj_t BGl_funz00zzast_varz00;
	extern bool_t
		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static BgL_blockz00_bglt
		BGl_z62blockVzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t);
	static obj_t BGl_z62blockSzd2z52hashze2zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2z52hashzd2setz12zd0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bbvzd2ctxentryzf3z43zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62blockVzd2versionszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62blockSzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2specializa7ez75(int, int, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2specializa7ez75(BgL_typez00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2z52spillz10zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2specializa7ez75();
	static obj_t
		BGl_z62blockSzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_ifeqz00zzsaw_defsz00;
	static obj_t
		BGl_z62blockVzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62blockSzd2octxszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2versionszd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt, obj_t);
	static obj_t
		BGl_z62blockVzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	extern bool_t
		BGl_rtl_inszd2vlenzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_bbvzd2specializa7ez75();
	static obj_t BGl_z62blockSzf3z91zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	extern obj_t BGl_za2boolza2z00zztype_cachez00;
	static obj_t
		BGl_z62blockSzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t
		BGl_z62blockVzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2outz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62blockSzd2predszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_z62blockVzf3z91zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszf2bbvzf3z01zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52hashzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62makezd2bbvzd2ctxentryz62zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62blockSzd2octxszb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static BgL_rtl_insz00_bglt
		BGl_rtl_inszd2specializa7ezd2vlengthza7zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	extern obj_t
		BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2;
	static BgL_regsetz00_bglt
		BGl_z62makezd2regsetzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bbvzd2ctxentryzd2_bglt
		BGl_bbvzd2ctxentryzd2nilz00zzsaw_bbvzd2specializa7ez75();
	extern obj_t BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2specializa7ez75();
	extern obj_t BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2;
	static BgL_rtl_loadiz00_bglt BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75();
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_makezd2blockSzd2zzsaw_bbvzd2specializa7ez75(int, obj_t, obj_t, obj_t,
		obj_t, obj_t, long, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_blockz00_bglt
		BGl_makezd2blockVzd2zzsaw_bbvzd2specializa7ez75(int, obj_t, obj_t, obj_t,
		obj_t, long);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2destzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	extern obj_t
		BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52blacklistzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt, obj_t);
	extern obj_t BGl_rtl_ifnez00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	static obj_t
		BGl_z62bbvzd2ctxentryzd2aliasesz62zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bbvzd2ctxentryzd2flagz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static BgL_typez00_bglt
		BGl_z62bbvzd2ctxentryzd2typz62zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	extern obj_t BGl_rtl_callz00zzsaw_defsz00;
	static BgL_rtl_insz00_bglt
		BGl_rtl_inszd2specializa7ezd2typecheckza7zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52blacklistz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_bbvzd2ctxentryzd2regz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bbvzd2ctxentryzd2aliasesz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2defzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt);
	extern obj_t BGl_extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2versionszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2destzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_inszd2intcmpzf3z21zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2z52spillz72zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2defzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	static obj_t
		BGl_z62rtl_inszf2bbvzd2z52hashz10zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	extern obj_t BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2;
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2firstzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62rtl_inszd2specializa7ezd2intcmpzc5zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bbvzd2ctxentryzd2aliaseszd2setz12zc0zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	static BgL_blockz00_bglt
		BGl_z62makezd2blockSzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_rtl_regzf2razf3z01zzsaw_bbvzd2specializa7ez75(obj_t);
	static BgL_blockz00_bglt
		BGl_z62makezd2blockVzb0zzsaw_bbvzd2specializa7ez75(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	BGL_EXPORTED_DECL long
		BGl_blockVzd2z52markz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	extern obj_t BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t,
		BgL_rtl_regz00_bglt, BgL_rtl_regz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2specializa7ez75();
	BGL_EXPORTED_DECL bool_t BGl_blockSzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL BgL_rtl_funz00_bglt
		BGl_rtl_inszf2bbvzd2funz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	static obj_t BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		int);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75();
	static bool_t BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75(obj_t);
	static bool_t BGl_regzf3ze71z14zzsaw_bbvzd2specializa7ez75(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75();
	static BgL_rtl_insz00_bglt
		BGl_z62makezd2rtl_inszf2bbvz42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62rtl_inszf2bbvzf3z63zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	static obj_t
		BGl_z62blockSzd2z52blacklistzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2;
	extern obj_t BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2;
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2ictxzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2ictxzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t BGl_2maxz00zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2octxszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t BGl_blockVzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_rtl_insz00_bglt
		BGl_rtl_inszf2bbvzd2nilz20zzsaw_bbvzd2specializa7ez75();
	static obj_t BGl_za2fixnumzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 = BUNSPEC;
	static obj_t
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_blockSzd2z52parentz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	extern obj_t BGl_literalz00zzast_nodez00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_inszf2bbvzd2locz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt
		BGl_regsetzd2nilzd2zzsaw_bbvzd2specializa7ez75();
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt, obj_t);
	static obj_t
		BGl_z62bbvzd2ctxentryzd2valuez62zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_blockVzd2succszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt);
	static obj_t
		BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t
		BGl_z62blockSzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_inszf2bbvzd2destz42zzsaw_bbvzd2specializa7ez75(obj_t,
		obj_t);
	static obj_t BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_bbvzd2ctxentryzd2_bglt
		BGl_makezd2bbvzd2ctxentryz00zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt, bool_t, obj_t, obj_t);
	static obj_t
		BGl_z62blockVzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t, obj_t,
		obj_t);
	static BgL_regsetz00_bglt
		BGl_z62regsetzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t);
	static obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2specializa7ez75
		(obj_t, obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt);
	static obj_t __cnst[13];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2defzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2747z00,
		BGl_z62rtl_inszf2bbvzd2defz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52hashzd2setz12zd2envz92zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752h2748za7,
		BGl_z62blockSzd2z52hashzd2setz12z22zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72749za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52parentzd2envz52zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752p2750za7,
		BGl_z62blockSzd2z52parentze2zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2argszd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2751z00,
		BGl_z62rtl_inszf2bbvzd2argszd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2nilzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2nilza72752za7,
		BGl_z62regsetzd2nilzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2inzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2753z00,
		BGl_z62rtl_inszf2bbvzd2inz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2nilzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2nilza72754za7,
		BGl_z62blockVzd2nilzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52hashzd2envz52zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752h2755za7,
		BGl_z62blockSzd2z52hashze2zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2inzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2756z00,
		BGl_z62rtl_inszf2bbvzd2inzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2z52hashzd2setz12zd2envz60zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2757z00,
		BGl_z62rtl_inszf2bbvzd2z52hashzd2setz12zd0zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2versionszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2vers2758z00,
		BGl_z62blockVzd2versionszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72759za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2regvzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2regv2760z00,
		BGl_z62regsetzd2regvzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2specializa7ezd2envza7zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7d2spe2761z00,
		BGl_z62rtl_inszd2specializa7ez17zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzf3zd2envz21zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7f3za791za72762z00,
		BGl_z62blockSzf3z91zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2flagzd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2763z00,
		BGl_z62bbvzd2ctxentryzd2flagz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2leng2764z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzf3zd2envzf3zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2765z00,
		BGl_z62bbvzd2ctxentryzf3z43zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2ictxzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2ictx2766z00,
		BGl_z62blockSzd2ictxzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72767za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2z52markzd2envz52zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2za752m2768za7,
		BGl_z62blockVzd2z52markze2zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72769za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2labelzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2labe2770z00,
		BGl_z62blockSzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2z52hashzd2envza0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2771z00,
		BGl_z62rtl_inszf2bbvzd2z52hashz10zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52markzd2envz52zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752m2772za7,
		BGl_z62blockSzd2z52markze2zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_string2741za700za7za7s2773za7, "saw_bbv-specialize", 18);
	      DEFINE_STRING(BGl_string2742z00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_string2742za700za7za7s2774za7,
		"!== != === == = > >= <= < _ false true interval ", 48);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72775za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72776za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2stri2777z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razf3zd2envzd3zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72778za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzf3zd2envzd3zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2779z00,
		BGl_z62rtl_inszf2bbvzf3z63zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	      DEFINE_LLONG(BGl_llong2740z00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_llong2740za700za7za7sa2780za7, ((BGL_LONGLONG_T) 0));
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72781za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2loczd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2782z00,
		BGl_z62rtl_inszf2bbvzd2locz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72783za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2regsetzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2regset2784z00,
		BGl_z62makezd2regsetzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2aliaseszd2setz12zd2envz12zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2785z00,
		BGl_z62bbvzd2ctxentryzd2aliaseszd2setz12za2zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2typecheckzf3zd2envzf3zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7d2typ2786z00,
		BGl_z62rtl_inszd2typecheckzf3z43zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2succszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2succ2787z00,
		BGl_z62blockVzd2succszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzf3zd2envz21zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7f3za791za72788z00,
		BGl_z62blockVzf3z91zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52blacklistzd2setz12zd2envz92zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752b2789za7,
		BGl_z62blockSzd2z52blacklistzd2setz12z22zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2intcmpzf3zd2envzf3zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7d2int2790z00,
		BGl_z62rtl_inszd2intcmpzf3z43zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2succszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2succ2791z00,
		BGl_z62blockSzd2succszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2labelzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2labe2792z00,
		BGl_z62blockVzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2labelzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2labe2793z00,
		BGl_z62blockVzd2labelzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2loczd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2794z00,
		BGl_z62rtl_inszf2bbvzd2loczd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszd2specializa7ezd2intcmpzd2envz75zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7d2spe2795z00,
		BGl_z62rtl_inszd2specializa7ezd2intcmpzc5zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2regzd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2796z00,
		BGl_z62bbvzd2ctxentryzd2regz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2predszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2pred2797z00,
		BGl_z62blockVzd2predszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzf3zd2envz21zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7f3za791za72798z00,
		BGl_z62regsetzf3z91zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2labelzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2labe2799z00,
		BGl_z62blockSzd2labelzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2predszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2pred2800z00,
		BGl_z62blockSzd2predszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72801za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2reglzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2regl2802z00,
		BGl_z62regsetzd2reglzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2ictxzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2ictx2803z00,
		BGl_z62blockSzd2ictxzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2predszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2pred2804z00,
		BGl_z62blockSzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2firstzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2firs2805z00,
		BGl_z62blockSzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72806za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72807za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72808za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72809za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72810za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2specializa7ez75,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2nilzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2811z00,
		BGl_z62rtl_inszf2bbvzd2nilz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2bbvzd2ctxentryzd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2bbvza7d22812za7,
		BGl_z62makezd2bbvzd2ctxentryz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2firstzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2firs2813z00,
		BGl_z62blockVzd2firstzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2msiza7ezd2envza7zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2msiza72814za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2nilzd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2815z00,
		BGl_z62bbvzd2ctxentryzd2nilz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2octxszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2octx2816z00,
		BGl_z62blockSzd2octxszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2aliaseszd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2817z00,
		BGl_z62bbvzd2ctxentryzd2aliasesz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72818za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2outzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2819z00,
		BGl_z62rtl_inszf2bbvzd2outz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2nilzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2nilza72820za7,
		BGl_z62blockSzd2nilzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_inszf2bbvzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2rtl_in2821z00,
		BGl_z62makezd2rtl_inszf2bbvz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2firstzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2firs2822z00,
		BGl_z62blockSzd2firstzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2versionszd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2vers2823z00,
		BGl_z62blockVzd2versionszb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52markzd2setz12zd2envz92zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752m2824za7,
		BGl_z62blockSzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2succszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2succ2825z00,
		BGl_z62blockSzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2blockSzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2blocks2826z00,
		BGl_z62makezd2blockSzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72827za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2typzd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2828z00,
		BGl_z62bbvzd2ctxentryzd2typz62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2octxszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2octx2829z00,
		BGl_z62blockSzd2octxszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2predszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2pred2830z00,
		BGl_z62blockVzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2firstzd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2firs2831z00,
		BGl_z62blockVzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bbvzd2ctxentryzd2valuezd2envzd2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762bbvza7d2ctxentr2832z00,
		BGl_z62bbvzd2ctxentryzd2valuez62zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72833za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72834za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2outzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2835z00,
		BGl_z62rtl_inszf2bbvzd2outzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2stri2836z00,
		BGl_z62regsetzd2stringzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockSzd2z52blacklistzd2envz52zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blocksza7d2za752b2837za7,
		BGl_z62blockSzd2z52blacklistze2zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72838za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2rtl_re2839z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2argszd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2840z00,
		BGl_z62rtl_inszf2bbvzd2argsz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762regsetza7d2leng2841z00,
		BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2z52spillzd2setz12zd2envz60zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2842z00,
		BGl_z62rtl_inszf2bbvzd2z52spillzd2setz12zd0zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72843za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2funzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2844z00,
		BGl_z62rtl_inszf2bbvzd2funzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2destzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2845z00,
		BGl_z62rtl_inszf2bbvzd2destzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2z52spillzd2envza0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2846z00,
		BGl_z62rtl_inszf2bbvzd2z52spillz10zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2defzd2setz12zd2envz32zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2847z00,
		BGl_z62rtl_inszf2bbvzd2defzd2setz12z82zzsaw_bbvzd2specializa7ez75, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2destzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2848z00,
		BGl_z62rtl_inszf2bbvzd2destz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2z52markzd2setz12zd2envz92zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2za752m2849za7,
		BGl_z62blockVzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2blockVzd2envz00zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762makeza7d2blockv2850z00,
		BGl_z62makezd2blockVzb0zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_blockVzd2succszd2setz12zd2envzc0zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762blockvza7d2succ2851z00,
		BGl_z62blockVzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_inszf2bbvzd2funzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_insza7f2bbv2852z00,
		BGl_z62rtl_inszf2bbvzd2funz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_bbvzd2specializa7ez75,
		BgL_bgl_za762rtl_regza7f2raza72853za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2specializa7ez75, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2infinityzd2intvza2zd2zzsaw_bbvzd2specializa7ez75));
		     ADD_ROOT((void
				*) (&BGl_za2lengthzd2intvza2zd2zzsaw_bbvzd2specializa7ez75));
		     ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75));
		     ADD_ROOT((void
				*) (&BGl_za2fixnumzd2intvza2zd2zzsaw_bbvzd2specializa7ez75));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75(long
		BgL_checksumz00_4797, char *BgL_fromz00_4798)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75))
				{
					BGl_requirezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_bbvzd2specializa7ez75();
					BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75();
					BGl_cnstzd2initzd2zzsaw_bbvzd2specializa7ez75();
					BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75();
					return BGl_toplevelzd2initzd2zzsaw_bbvzd2specializa7ez75();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"saw_bbv-specialize");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_bbv-specialize");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			{	/* SawMill/bbv-specialize.scm 15 */
				obj_t BgL_cportz00_4744;

				{	/* SawMill/bbv-specialize.scm 15 */
					obj_t BgL_stringz00_4752;

					BgL_stringz00_4752 = BGl_string2742z00zzsaw_bbvzd2specializa7ez75;
					{	/* SawMill/bbv-specialize.scm 15 */
						obj_t BgL_startz00_4753;

						BgL_startz00_4753 = BINT(((long) 0));
						{	/* SawMill/bbv-specialize.scm 15 */
							obj_t BgL_endz00_4754;

							BgL_endz00_4754 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4752)));
							{	/* SawMill/bbv-specialize.scm 15 */

								BgL_cportz00_4744 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4752, BgL_startz00_4753, BgL_endz00_4754);
				}}}}
				{
					long BgL_iz00_4745;

					BgL_iz00_4745 = ((long) 12);
				BgL_loopz00_4746:
					if ((BgL_iz00_4745 == ((long) -1)))
						{	/* SawMill/bbv-specialize.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/bbv-specialize.scm 15 */
							{	/* SawMill/bbv-specialize.scm 15 */
								obj_t BgL_arg2745z00_4748;

								{	/* SawMill/bbv-specialize.scm 15 */

									{	/* SawMill/bbv-specialize.scm 15 */
										obj_t BgL_locationz00_4750;

										BgL_locationz00_4750 = BBOOL(((bool_t) 0));
										{	/* SawMill/bbv-specialize.scm 15 */

											BgL_arg2745z00_4748 =
												BGl_readz00zz__readerz00(BgL_cportz00_4744,
												BgL_locationz00_4750);
										}
									}
								}
								{	/* SawMill/bbv-specialize.scm 15 */
									int BgL_tmpz00_4828;

									BgL_tmpz00_4828 = (int) (BgL_iz00_4745);
									CNST_TABLE_SET(BgL_tmpz00_4828, BgL_arg2745z00_4748);
							}}
							{	/* SawMill/bbv-specialize.scm 15 */
								int BgL_auxz00_4751;

								BgL_auxz00_4751 = (int) ((BgL_iz00_4745 - ((long) 1)));
								{
									long BgL_iz00_4833;

									BgL_iz00_4833 = (long) (BgL_auxz00_4751);
									BgL_iz00_4745 = BgL_iz00_4833;
									goto BgL_loopz00_4746;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			BGl_za2typezd2callza2zd2zzsaw_bbvzd2specializa7ez75 = ((bool_t) 1);
			{	/* SawMill/bbv-specialize.scm 50 */
				obj_t BgL_minz00_3551;
				obj_t BgL_maxz00_3552;

				BgL_minz00_3551 = BGl_za2zd2infze20za2z30zzsaw_bbvzd2typeszd2;
				BgL_maxz00_3552 = BGl_za2zb2infze20za2z50zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-specialize.scm 50 */
					obj_t BgL_newz00_3553;

					BgL_newz00_3553 =
						create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
					{	/* SawMill/bbv-specialize.scm 50 */
						int BgL_tmpz00_4839;

						BgL_tmpz00_4839 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_3553, BgL_tmpz00_4839, BgL_maxz00_3552);
					}
					{	/* SawMill/bbv-specialize.scm 50 */
						int BgL_tmpz00_4842;

						BgL_tmpz00_4842 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_3553, BgL_tmpz00_4842, BgL_minz00_3551);
					}
					BGl_za2infinityzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 =
						BgL_newz00_3553;
			}}
			{	/* SawMill/bbv-specialize.scm 51 */
				obj_t BgL_maxz00_3556;

				BgL_maxz00_3556 = BGl_za2maxzd2lengthza2zd2zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-specialize.scm 51 */
					obj_t BgL_newz00_3557;

					BgL_newz00_3557 =
						create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
					{	/* SawMill/bbv-specialize.scm 51 */
						int BgL_tmpz00_4848;

						BgL_tmpz00_4848 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_3557, BgL_tmpz00_4848, BgL_maxz00_3556);
					}
					{	/* SawMill/bbv-specialize.scm 51 */
						int BgL_tmpz00_4851;

						BgL_tmpz00_4851 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_3557, BgL_tmpz00_4851,
							BGl_llong2740z00zzsaw_bbvzd2specializa7ez75);
					}
					BGl_za2lengthzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 =
						BgL_newz00_3557;
			}}
			{	/* SawMill/bbv-specialize.scm 52 */
				obj_t BgL_minz00_3560;
				obj_t BgL_maxz00_3561;

				BgL_minz00_3560 = BGl_za2minzd2fixnumza2zd2zzsaw_bbvzd2typeszd2;
				BgL_maxz00_3561 = BGl_za2maxzd2fixnumza2zd2zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-specialize.scm 52 */
					obj_t BgL_newz00_3562;

					BgL_newz00_3562 =
						create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
					{	/* SawMill/bbv-specialize.scm 52 */
						int BgL_tmpz00_4857;

						BgL_tmpz00_4857 = (int) (((long) 1));
						STRUCT_SET(BgL_newz00_3562, BgL_tmpz00_4857, BgL_maxz00_3561);
					}
					{	/* SawMill/bbv-specialize.scm 52 */
						int BgL_tmpz00_4860;

						BgL_tmpz00_4860 = (int) (((long) 0));
						STRUCT_SET(BgL_newz00_3562, BgL_tmpz00_4860, BgL_minz00_3560);
					}
					return (BGl_za2fixnumzd2intvza2zd2zzsaw_bbvzd2specializa7ez75 =
						BgL_newz00_3562, BUNSPEC);
				}
			}
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2071;

				BgL_headz00_2071 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2072;
					obj_t BgL_tailz00_2073;

					BgL_prevz00_2072 = BgL_headz00_2071;
					BgL_tailz00_2073 = BgL_l1z00_1;
				BgL_loopz00_2074:
					if (PAIRP(BgL_tailz00_2073))
						{
							obj_t BgL_newzd2prevzd2_2076;

							BgL_newzd2prevzd2_2076 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2073), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2072, BgL_newzd2prevzd2_2076);
							{
								obj_t BgL_tailz00_4870;
								obj_t BgL_prevz00_4869;

								BgL_prevz00_4869 = BgL_newzd2prevzd2_2076;
								BgL_tailz00_4870 = CDR(BgL_tailz00_2073);
								BgL_tailz00_2073 = BgL_tailz00_4870;
								BgL_prevz00_2072 = BgL_prevz00_4869;
								goto BgL_loopz00_2074;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2071);
				}
			}
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2specializa7ez75(BgL_typez00_bglt
		BgL_type1179z00_3, obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1160z00_4757;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1158z00_4758;
					BgL_rtl_regzf2razf2_bglt BgL_wide1159z00_4759;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4873;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1157z00_4760;

							BgL_new1157z00_4760 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1895z00_4761;

								{	/* SawMill/regset.sch 55 */
									long BgL_res2567z00_4762;

									BgL_res2567z00_4762 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1895z00_4761 = BgL_res2567z00_4762;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1157z00_4760),
									BgL_arg1895z00_4761);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_4878;

								BgL_tmpz00_4878 = ((BgL_objectz00_bglt) BgL_new1157z00_4760);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4878, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1157z00_4760);
							BgL_auxz00_4873 = BgL_new1157z00_4760;
						}
						BgL_tmp1158z00_4758 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4873);
					}
					BgL_wide1159z00_4759 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_4886;
						BgL_objectz00_bglt BgL_tmpz00_4884;

						BgL_auxz00_4886 = ((obj_t) BgL_wide1159z00_4759);
						BgL_tmpz00_4884 = ((BgL_objectz00_bglt) BgL_tmp1158z00_4758);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4884, BgL_auxz00_4886);
					}
					((BgL_objectz00_bglt) BgL_tmp1158z00_4758);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1893z00_4763;

						{	/* SawMill/regset.sch 55 */
							long BgL_res2568z00_4764;

							BgL_res2568z00_4764 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1893z00_4763 = BgL_res2568z00_4764;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1158z00_4758), BgL_arg1893z00_4763);
					}
					BgL_new1160z00_4757 = ((BgL_rtl_regz00_bglt) BgL_tmp1158z00_4758);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1160z00_4757)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_4757)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_4757)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_4757)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_4757)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_4757)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4906;

					{
						obj_t BgL_auxz00_4907;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4908;

							BgL_tmpz00_4908 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4907 = BGL_OBJECT_WIDENING(BgL_tmpz00_4908);
						}
						BgL_auxz00_4906 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4907);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4906))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4913;

					{
						obj_t BgL_auxz00_4914;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4915;

							BgL_tmpz00_4915 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4914 = BGL_OBJECT_WIDENING(BgL_tmpz00_4915);
						}
						BgL_auxz00_4913 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4914);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4913))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4920;

					{
						obj_t BgL_auxz00_4921;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4922;

							BgL_tmpz00_4922 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4921 = BGL_OBJECT_WIDENING(BgL_tmpz00_4922);
						}
						BgL_auxz00_4920 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4921);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4920))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4927;

					{
						obj_t BgL_auxz00_4928;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4929;

							BgL_tmpz00_4929 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4928 = BGL_OBJECT_WIDENING(BgL_tmpz00_4929);
						}
						BgL_auxz00_4927 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4928);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4927))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4934;

					{
						obj_t BgL_auxz00_4935;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4936;

							BgL_tmpz00_4936 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4935 = BGL_OBJECT_WIDENING(BgL_tmpz00_4936);
						}
						BgL_auxz00_4934 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4935);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4934))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4941;

					{
						obj_t BgL_auxz00_4942;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4943;

							BgL_tmpz00_4943 = ((BgL_objectz00_bglt) BgL_new1160z00_4757);
							BgL_auxz00_4942 = BGL_OBJECT_WIDENING(BgL_tmpz00_4943);
						}
						BgL_auxz00_4941 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4942);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4941))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1160z00_4757;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4463, obj_t BgL_type1179z00_4464, obj_t BgL_var1180z00_4465,
		obj_t BgL_onexprzf31181zf3_4466, obj_t BgL_name1182z00_4467,
		obj_t BgL_key1183z00_4468, obj_t BgL_hardware1184z00_4469,
		obj_t BgL_num1185z00_4470, obj_t BgL_color1186z00_4471,
		obj_t BgL_coalesce1187z00_4472, obj_t BgL_occurrences1188z00_4473,
		obj_t BgL_interfere1189z00_4474, obj_t BgL_interfere21190z00_4475)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_bbvzd2specializa7ez75(
				((BgL_typez00_bglt) BgL_type1179z00_4464), BgL_var1180z00_4465,
				BgL_onexprzf31181zf3_4466, BgL_name1182z00_4467, BgL_key1183z00_4468,
				BgL_hardware1184z00_4469, CINT(BgL_num1185z00_4470),
				BgL_color1186z00_4471, BgL_coalesce1187z00_4472,
				CINT(BgL_occurrences1188z00_4473), BgL_interfere1189z00_4474,
				BgL_interfere21190z00_4475);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_regzf2razf3z01zzsaw_bbvzd2specializa7ez75(obj_t BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4476, obj_t BgL_objz00_4477)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BBOOL(BGl_rtl_regzf2razf3z01zzsaw_bbvzd2specializa7ez75
				(BgL_objz00_4477));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_3592;

				BgL_classz00_3592 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_3593;

					BgL__ortest_1106z00_3593 = BGL_CLASS_NIL(BgL_classz00_3592);
					if (CBOOL(BgL__ortest_1106z00_3593))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_3593);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3592));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4478)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_bbvzd2specializa7ez75();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4962;

				{
					obj_t BgL_auxz00_4963;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_4964;

						BgL_tmpz00_4964 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_4963 = BGL_OBJECT_WIDENING(BgL_tmpz00_4964);
					}
					BgL_auxz00_4962 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4963);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4962))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4479, obj_t BgL_oz00_4480)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4480));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4971;

				{
					obj_t BgL_auxz00_4972;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_4973;

						BgL_tmpz00_4973 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_4972 = BGL_OBJECT_WIDENING(BgL_tmpz00_4973);
					}
					BgL_auxz00_4971 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4972);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4971))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvzd2specializa7ez75
		(obj_t BgL_envz00_4481, obj_t BgL_oz00_4482, obj_t BgL_vz00_4483)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4482), BgL_vz00_4483);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4980;

				{
					obj_t BgL_auxz00_4981;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_4982;

						BgL_tmpz00_4982 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_4981 = BGL_OBJECT_WIDENING(BgL_tmpz00_4982);
					}
					BgL_auxz00_4980 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4981);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4980))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4484, obj_t BgL_oz00_4485)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4485));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4989;

				{
					obj_t BgL_auxz00_4990;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_4991;

						BgL_tmpz00_4991 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_4990 = BGL_OBJECT_WIDENING(BgL_tmpz00_4991);
					}
					BgL_auxz00_4989 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4990);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4989))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4486, obj_t BgL_oz00_4487, obj_t BgL_vz00_4488)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4487), BgL_vz00_4488);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4998;

				{
					obj_t BgL_auxz00_4999;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_5000;

						BgL_tmpz00_5000 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_4999 = BGL_OBJECT_WIDENING(BgL_tmpz00_5000);
					}
					BgL_auxz00_4998 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4999);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4998))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4489, obj_t BgL_oz00_4490)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvzd2specializa7ez75(
					((BgL_rtl_regz00_bglt) BgL_oz00_4490)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5008;

				{
					obj_t BgL_auxz00_5009;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_5010;

						BgL_tmpz00_5010 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_5009 = BGL_OBJECT_WIDENING(BgL_tmpz00_5010);
					}
					BgL_auxz00_5008 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5009);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5008))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvzd2specializa7ez75
		(obj_t BgL_envz00_4491, obj_t BgL_oz00_4492, obj_t BgL_vz00_4493)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4492), CINT(BgL_vz00_4493));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5018;

				{
					obj_t BgL_auxz00_5019;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_5020;

						BgL_tmpz00_5020 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_5019 = BGL_OBJECT_WIDENING(BgL_tmpz00_5020);
					}
					BgL_auxz00_5018 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5019);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5018))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4494, obj_t BgL_oz00_4495)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4495));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5027;

				{
					obj_t BgL_auxz00_5028;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_5029;

						BgL_tmpz00_5029 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_5028 = BGL_OBJECT_WIDENING(BgL_tmpz00_5029);
					}
					BgL_auxz00_5027 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5028);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5027))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4496, obj_t BgL_oz00_4497, obj_t BgL_vz00_4498)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4497), BgL_vz00_4498);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5036;

				{
					obj_t BgL_auxz00_5037;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_5038;

						BgL_tmpz00_5038 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_5037 = BGL_OBJECT_WIDENING(BgL_tmpz00_5038);
					}
					BgL_auxz00_5036 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5037);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5036))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4499, obj_t BgL_oz00_4500)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4500));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5045;

				{
					obj_t BgL_auxz00_5046;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_5047;

						BgL_tmpz00_5047 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_5046 = BGL_OBJECT_WIDENING(BgL_tmpz00_5047);
					}
					BgL_auxz00_5045 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5046);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5045))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4501, obj_t BgL_oz00_4502, obj_t BgL_vz00_4503)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4502), BgL_vz00_4503);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_5054;

				{
					obj_t BgL_auxz00_5055;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_5056;

						BgL_tmpz00_5056 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_5055 = BGL_OBJECT_WIDENING(BgL_tmpz00_5056);
					}
					BgL_auxz00_5054 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5055);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_5054))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4504, obj_t BgL_oz00_4505)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_bbvzd2specializa7ez75(
					((BgL_rtl_regz00_bglt) BgL_oz00_4505)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4506, obj_t BgL_oz00_4507)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4507));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4508, obj_t BgL_oz00_4509)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4509));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4510, obj_t BgL_oz00_4511)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4511));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4512, obj_t BgL_oz00_4513)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4513));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2specializa7ez75
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
	obj_t
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4514, obj_t BgL_oz00_4515, obj_t BgL_vz00_4516)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4515), BgL_vz00_4516);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4517, obj_t BgL_oz00_4518)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4518));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* SawMill/regset.sch 79 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_47)))->BgL_varz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &rtl_reg/ra-var-set! */
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4519, obj_t BgL_oz00_4520, obj_t BgL_vz00_4521)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4520), BgL_vz00_4521);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4522, obj_t BgL_oz00_4523)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4523));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_regz00_bglt BgL_oz00_50, BgL_typez00_bglt BgL_vz00_51)
	{
		{	/* SawMill/regset.sch 81 */
			return
				((((BgL_rtl_regz00_bglt) COBJECT(
							((BgL_rtl_regz00_bglt) BgL_oz00_50)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_51), BUNSPEC);
		}

	}



/* &rtl_reg/ra-type-set! */
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4524, obj_t BgL_oz00_4525, obj_t BgL_vz00_4526)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_oz00_4525),
				((BgL_typez00_bglt) BgL_vz00_4526));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_makezd2regsetzd2zzsaw_bbvzd2specializa7ez75(int BgL_length1172z00_52,
		int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1162z00_4765;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1161z00_4766;

					BgL_new1161z00_4766 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1896z00_4767;

						{	/* SawMill/regset.sch 84 */
							long BgL_res2569z00_4768;

							BgL_res2569z00_4768 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1896z00_4767 = BgL_res2569z00_4768;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1161z00_4766), BgL_arg1896z00_4767);
					}
					BgL_new1162z00_4765 = BgL_new1161z00_4766;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_4765))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_4765))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_4765))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_4765))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_4765))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1162z00_4765;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4527, obj_t BgL_length1172z00_4528,
		obj_t BgL_msiza7e1173za7_4529, obj_t BgL_regv1174z00_4530,
		obj_t BgL_regl1175z00_4531, obj_t BgL_string1176z00_4532)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_bbvzd2specializa7ez75(CINT
				(BgL_length1172z00_4528), CINT(BgL_msiza7e1173za7_4529),
				BgL_regv1174z00_4530, BgL_regl1175z00_4531, BgL_string1176z00_4532);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_bbvzd2specializa7ez75(obj_t BgL_envz00_4533,
		obj_t BgL_objz00_4534)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BBOOL(BGl_regsetzf3zf3zzsaw_bbvzd2specializa7ez75(BgL_objz00_4534));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt
		BGl_regsetzd2nilzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_3612;

				BgL_classz00_3612 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_3613;

					BgL__ortest_1106z00_3613 = BGL_CLASS_NIL(BgL_classz00_3612);
					if (CBOOL(BgL__ortest_1106z00_3613))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_3613);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3612));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4535)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_bbvzd2specializa7ez75();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt
		BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4536, obj_t BgL_oz00_4537)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_regsetz00_bglt) BgL_oz00_4537));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_regsetz00_bglt BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4538, obj_t BgL_oz00_4539, obj_t BgL_vz00_4540)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_regsetz00_bglt) BgL_oz00_4539), BgL_vz00_4540);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2reglzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt
		BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4541, obj_t BgL_oz00_4542)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_regsetz00_bglt) BgL_oz00_4542));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2regvzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt
		BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4543, obj_t BgL_oz00_4544)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_regsetz00_bglt) BgL_oz00_4544));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2msiza7ez75zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt
		BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4545, obj_t BgL_oz00_4546)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_bbvzd2specializa7ez75(
					((BgL_regsetz00_bglt) BgL_oz00_4546)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int
		BGl_regsetzd2lengthzd2zzsaw_bbvzd2specializa7ez75(BgL_regsetz00_bglt
		BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4547, obj_t BgL_oz00_4548)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_bbvzd2specializa7ez75(
					((BgL_regsetz00_bglt) BgL_oz00_4548)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_regsetz00_bglt BgL_oz00_71, int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4549, obj_t BgL_oz00_4550, obj_t BgL_vz00_4551)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_regsetz00_bglt) BgL_oz00_4550), CINT(BgL_vz00_4551));
		}

	}



/* make-blockV */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_makezd2blockVzd2zzsaw_bbvzd2specializa7ez75(int BgL_label1226z00_73,
		obj_t BgL_preds1227z00_74, obj_t BgL_succs1228z00_75,
		obj_t BgL_first1229z00_76, obj_t BgL_versions1230z00_77,
		long BgL_z52mark1231z52_78)
	{
		{	/* SawMill/bbv-types.sch 97 */
			{	/* SawMill/bbv-types.sch 97 */
				BgL_blockz00_bglt BgL_new1166z00_4769;

				{	/* SawMill/bbv-types.sch 97 */
					BgL_blockz00_bglt BgL_tmp1164z00_4770;
					BgL_blockvz00_bglt BgL_wide1165z00_4771;

					{
						BgL_blockz00_bglt BgL_auxz00_5147;

						{	/* SawMill/bbv-types.sch 97 */
							BgL_blockz00_bglt BgL_new1163z00_4772;

							BgL_new1163z00_4772 =
								((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							{	/* SawMill/bbv-types.sch 97 */
								long BgL_arg1898z00_4773;

								{	/* SawMill/bbv-types.sch 97 */
									long BgL_res2570z00_4774;

									BgL_res2570z00_4774 =
										BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
									BgL_arg1898z00_4773 = BgL_res2570z00_4774;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1163z00_4772),
									BgL_arg1898z00_4773);
							}
							{	/* SawMill/bbv-types.sch 97 */
								BgL_objectz00_bglt BgL_tmpz00_5152;

								BgL_tmpz00_5152 = ((BgL_objectz00_bglt) BgL_new1163z00_4772);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5152, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1163z00_4772);
							BgL_auxz00_5147 = BgL_new1163z00_4772;
						}
						BgL_tmp1164z00_4770 = ((BgL_blockz00_bglt) BgL_auxz00_5147);
					}
					BgL_wide1165z00_4771 =
						((BgL_blockvz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_blockvz00_bgl))));
					{	/* SawMill/bbv-types.sch 97 */
						obj_t BgL_auxz00_5160;
						BgL_objectz00_bglt BgL_tmpz00_5158;

						BgL_auxz00_5160 = ((obj_t) BgL_wide1165z00_4771);
						BgL_tmpz00_5158 = ((BgL_objectz00_bglt) BgL_tmp1164z00_4770);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5158, BgL_auxz00_5160);
					}
					((BgL_objectz00_bglt) BgL_tmp1164z00_4770);
					{	/* SawMill/bbv-types.sch 97 */
						long BgL_arg1897z00_4775;

						{	/* SawMill/bbv-types.sch 97 */
							long BgL_res2571z00_4776;

							BgL_res2571z00_4776 =
								BGL_CLASS_INDEX(BGl_blockVz00zzsaw_bbvzd2typeszd2);
							BgL_arg1897z00_4775 = BgL_res2571z00_4776;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1164z00_4770), BgL_arg1897z00_4775);
					}
					BgL_new1166z00_4769 = ((BgL_blockz00_bglt) BgL_tmp1164z00_4770);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_new1166z00_4769)))->BgL_labelz00) =
					((int) BgL_label1226z00_73), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1166z00_4769)))->BgL_predsz00) =
					((obj_t) BgL_preds1227z00_74), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1166z00_4769)))->BgL_succsz00) =
					((obj_t) BgL_succs1228z00_75), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1166z00_4769)))->BgL_firstz00) =
					((obj_t) BgL_first1229z00_76), BUNSPEC);
				{
					BgL_blockvz00_bglt BgL_auxz00_5176;

					{
						obj_t BgL_auxz00_5177;

						{	/* SawMill/bbv-types.sch 97 */
							BgL_objectz00_bglt BgL_tmpz00_5178;

							BgL_tmpz00_5178 = ((BgL_objectz00_bglt) BgL_new1166z00_4769);
							BgL_auxz00_5177 = BGL_OBJECT_WIDENING(BgL_tmpz00_5178);
						}
						BgL_auxz00_5176 = ((BgL_blockvz00_bglt) BgL_auxz00_5177);
					}
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5176))->BgL_versionsz00) =
						((obj_t) BgL_versions1230z00_77), BUNSPEC);
				}
				{
					BgL_blockvz00_bglt BgL_auxz00_5183;

					{
						obj_t BgL_auxz00_5184;

						{	/* SawMill/bbv-types.sch 97 */
							BgL_objectz00_bglt BgL_tmpz00_5185;

							BgL_tmpz00_5185 = ((BgL_objectz00_bglt) BgL_new1166z00_4769);
							BgL_auxz00_5184 = BGL_OBJECT_WIDENING(BgL_tmpz00_5185);
						}
						BgL_auxz00_5183 = ((BgL_blockvz00_bglt) BgL_auxz00_5184);
					}
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5183))->BgL_z52markz52) =
						((long) BgL_z52mark1231z52_78), BUNSPEC);
				}
				return BgL_new1166z00_4769;
			}
		}

	}



/* &make-blockV */
	BgL_blockz00_bglt BGl_z62makezd2blockVzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4552, obj_t BgL_label1226z00_4553, obj_t BgL_preds1227z00_4554,
		obj_t BgL_succs1228z00_4555, obj_t BgL_first1229z00_4556,
		obj_t BgL_versions1230z00_4557, obj_t BgL_z52mark1231z52_4558)
	{
		{	/* SawMill/bbv-types.sch 97 */
			return
				BGl_makezd2blockVzd2zzsaw_bbvzd2specializa7ez75(CINT
				(BgL_label1226z00_4553), BgL_preds1227z00_4554, BgL_succs1228z00_4555,
				BgL_first1229z00_4556, BgL_versions1230z00_4557,
				(long) CINT(BgL_z52mark1231z52_4558));
		}

	}



/* blockV? */
	BGL_EXPORTED_DEF bool_t BGl_blockVzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_objz00_79)
	{
		{	/* SawMill/bbv-types.sch 98 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_79,
				BGl_blockVz00zzsaw_bbvzd2typeszd2);
		}

	}



/* &blockV? */
	obj_t BGl_z62blockVzf3z91zzsaw_bbvzd2specializa7ez75(obj_t BgL_envz00_4559,
		obj_t BgL_objz00_4560)
	{
		{	/* SawMill/bbv-types.sch 98 */
			return
				BBOOL(BGl_blockVzf3zf3zzsaw_bbvzd2specializa7ez75(BgL_objz00_4560));
		}

	}



/* blockV-nil */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_blockVzd2nilzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-types.sch 99 */
			{	/* SawMill/bbv-types.sch 99 */
				obj_t BgL_classz00_3632;

				BgL_classz00_3632 = BGl_blockVz00zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-types.sch 99 */
					obj_t BgL__ortest_1106z00_3633;

					BgL__ortest_1106z00_3633 = BGL_CLASS_NIL(BgL_classz00_3632);
					if (CBOOL(BgL__ortest_1106z00_3633))
						{	/* SawMill/bbv-types.sch 99 */
							return ((BgL_blockz00_bglt) BgL__ortest_1106z00_3633);
						}
					else
						{	/* SawMill/bbv-types.sch 99 */
							return
								((BgL_blockz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3632));
						}
				}
			}
		}

	}



/* &blockV-nil */
	BgL_blockz00_bglt BGl_z62blockVzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4561)
	{
		{	/* SawMill/bbv-types.sch 99 */
			return BGl_blockVzd2nilzd2zzsaw_bbvzd2specializa7ez75();
		}

	}



/* blockV-%mark */
	BGL_EXPORTED_DEF long
		BGl_blockVzd2z52markz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_80)
	{
		{	/* SawMill/bbv-types.sch 100 */
			{
				BgL_blockvz00_bglt BgL_auxz00_5203;

				{
					obj_t BgL_auxz00_5204;

					{	/* SawMill/bbv-types.sch 100 */
						BgL_objectz00_bglt BgL_tmpz00_5205;

						BgL_tmpz00_5205 = ((BgL_objectz00_bglt) BgL_oz00_80);
						BgL_auxz00_5204 = BGL_OBJECT_WIDENING(BgL_tmpz00_5205);
					}
					BgL_auxz00_5203 = ((BgL_blockvz00_bglt) BgL_auxz00_5204);
				}
				return
					(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5203))->BgL_z52markz52);
			}
		}

	}



/* &blockV-%mark */
	obj_t BGl_z62blockVzd2z52markze2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4562, obj_t BgL_oz00_4563)
	{
		{	/* SawMill/bbv-types.sch 100 */
			return
				BINT(BGl_blockVzd2z52markz80zzsaw_bbvzd2specializa7ez75(
					((BgL_blockz00_bglt) BgL_oz00_4563)));
		}

	}



/* blockV-%mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt BgL_oz00_81, long BgL_vz00_82)
	{
		{	/* SawMill/bbv-types.sch 101 */
			{
				BgL_blockvz00_bglt BgL_auxz00_5213;

				{
					obj_t BgL_auxz00_5214;

					{	/* SawMill/bbv-types.sch 101 */
						BgL_objectz00_bglt BgL_tmpz00_5215;

						BgL_tmpz00_5215 = ((BgL_objectz00_bglt) BgL_oz00_81);
						BgL_auxz00_5214 = BGL_OBJECT_WIDENING(BgL_tmpz00_5215);
					}
					BgL_auxz00_5213 = ((BgL_blockvz00_bglt) BgL_auxz00_5214);
				}
				return
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5213))->BgL_z52markz52) =
					((long) BgL_vz00_82), BUNSPEC);
		}}

	}



/* &blockV-%mark-set! */
	obj_t BGl_z62blockVzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4564, obj_t BgL_oz00_4565, obj_t BgL_vz00_4566)
	{
		{	/* SawMill/bbv-types.sch 101 */
			return
				BGl_blockVzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4565), (long) CINT(BgL_vz00_4566));
		}

	}



/* blockV-versions */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2versionszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_83)
	{
		{	/* SawMill/bbv-types.sch 102 */
			{
				BgL_blockvz00_bglt BgL_auxz00_5223;

				{
					obj_t BgL_auxz00_5224;

					{	/* SawMill/bbv-types.sch 102 */
						BgL_objectz00_bglt BgL_tmpz00_5225;

						BgL_tmpz00_5225 = ((BgL_objectz00_bglt) BgL_oz00_83);
						BgL_auxz00_5224 = BGL_OBJECT_WIDENING(BgL_tmpz00_5225);
					}
					BgL_auxz00_5223 = ((BgL_blockvz00_bglt) BgL_auxz00_5224);
				}
				return
					(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5223))->BgL_versionsz00);
			}
		}

	}



/* &blockV-versions */
	obj_t BGl_z62blockVzd2versionszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4567, obj_t BgL_oz00_4568)
	{
		{	/* SawMill/bbv-types.sch 102 */
			return
				BGl_blockVzd2versionszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4568));
		}

	}



/* blockV-versions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2versionszd2setz12z12zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt BgL_oz00_84, obj_t BgL_vz00_85)
	{
		{	/* SawMill/bbv-types.sch 103 */
			{
				BgL_blockvz00_bglt BgL_auxz00_5232;

				{
					obj_t BgL_auxz00_5233;

					{	/* SawMill/bbv-types.sch 103 */
						BgL_objectz00_bglt BgL_tmpz00_5234;

						BgL_tmpz00_5234 = ((BgL_objectz00_bglt) BgL_oz00_84);
						BgL_auxz00_5233 = BGL_OBJECT_WIDENING(BgL_tmpz00_5234);
					}
					BgL_auxz00_5232 = ((BgL_blockvz00_bglt) BgL_auxz00_5233);
				}
				return
					((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5232))->BgL_versionsz00) =
					((obj_t) BgL_vz00_85), BUNSPEC);
			}
		}

	}



/* &blockV-versions-set! */
	obj_t BGl_z62blockVzd2versionszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4569, obj_t BgL_oz00_4570, obj_t BgL_vz00_4571)
	{
		{	/* SawMill/bbv-types.sch 103 */
			return
				BGl_blockVzd2versionszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4570), BgL_vz00_4571);
		}

	}



/* blockV-first */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2firstzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_86)
	{
		{	/* SawMill/bbv-types.sch 104 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_86)))->BgL_firstz00);
		}

	}



/* &blockV-first */
	obj_t BGl_z62blockVzd2firstzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4572, obj_t BgL_oz00_4573)
	{
		{	/* SawMill/bbv-types.sch 104 */
			return
				BGl_blockVzd2firstzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4573));
		}

	}



/* blockV-first-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_87, obj_t BgL_vz00_88)
	{
		{	/* SawMill/bbv-types.sch 105 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_87)))->BgL_firstz00) =
				((obj_t) BgL_vz00_88), BUNSPEC);
		}

	}



/* &blockV-first-set! */
	obj_t BGl_z62blockVzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4574, obj_t BgL_oz00_4575, obj_t BgL_vz00_4576)
	{
		{	/* SawMill/bbv-types.sch 105 */
			return
				BGl_blockVzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4575), BgL_vz00_4576);
		}

	}



/* blockV-succs */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2succszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_89)
	{
		{	/* SawMill/bbv-types.sch 106 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_89)))->BgL_succsz00);
		}

	}



/* &blockV-succs */
	obj_t BGl_z62blockVzd2succszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4577, obj_t BgL_oz00_4578)
	{
		{	/* SawMill/bbv-types.sch 106 */
			return
				BGl_blockVzd2succszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4578));
		}

	}



/* blockV-succs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_90, obj_t BgL_vz00_91)
	{
		{	/* SawMill/bbv-types.sch 107 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_90)))->BgL_succsz00) =
				((obj_t) BgL_vz00_91), BUNSPEC);
		}

	}



/* &blockV-succs-set! */
	obj_t BGl_z62blockVzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4579, obj_t BgL_oz00_4580, obj_t BgL_vz00_4581)
	{
		{	/* SawMill/bbv-types.sch 107 */
			return
				BGl_blockVzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4580), BgL_vz00_4581);
		}

	}



/* blockV-preds */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2predszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_92)
	{
		{	/* SawMill/bbv-types.sch 108 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_92)))->BgL_predsz00);
		}

	}



/* &blockV-preds */
	obj_t BGl_z62blockVzd2predszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4582, obj_t BgL_oz00_4583)
	{
		{	/* SawMill/bbv-types.sch 108 */
			return
				BGl_blockVzd2predszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4583));
		}

	}



/* blockV-preds-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_93, obj_t BgL_vz00_94)
	{
		{	/* SawMill/bbv-types.sch 109 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_93)))->BgL_predsz00) =
				((obj_t) BgL_vz00_94), BUNSPEC);
		}

	}



/* &blockV-preds-set! */
	obj_t BGl_z62blockVzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4584, obj_t BgL_oz00_4585, obj_t BgL_vz00_4586)
	{
		{	/* SawMill/bbv-types.sch 109 */
			return
				BGl_blockVzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4585), BgL_vz00_4586);
		}

	}



/* blockV-label */
	BGL_EXPORTED_DEF int
		BGl_blockVzd2labelzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_95)
	{
		{	/* SawMill/bbv-types.sch 110 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_95)))->BgL_labelz00);
		}

	}



/* &blockV-label */
	obj_t BGl_z62blockVzd2labelzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4587, obj_t BgL_oz00_4588)
	{
		{	/* SawMill/bbv-types.sch 110 */
			return
				BINT(BGl_blockVzd2labelzd2zzsaw_bbvzd2specializa7ez75(
					((BgL_blockz00_bglt) BgL_oz00_4588)));
		}

	}



/* blockV-label-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockVzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_96, int BgL_vz00_97)
	{
		{	/* SawMill/bbv-types.sch 111 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_96)))->BgL_labelz00) =
				((int) BgL_vz00_97), BUNSPEC);
		}

	}



/* &blockV-label-set! */
	obj_t BGl_z62blockVzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4589, obj_t BgL_oz00_4590, obj_t BgL_vz00_4591)
	{
		{	/* SawMill/bbv-types.sch 111 */
			return
				BGl_blockVzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4590), CINT(BgL_vz00_4591));
		}

	}



/* make-blockS */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_makezd2blockSzd2zzsaw_bbvzd2specializa7ez75(int BgL_label1215z00_98,
		obj_t BgL_preds1216z00_99, obj_t BgL_succs1217z00_100,
		obj_t BgL_first1218z00_101, obj_t BgL_ictx1219z00_102,
		obj_t BgL_octxs1220z00_103, long BgL_z52mark1221z52_104,
		obj_t BgL_z52parent1222z52_105, obj_t BgL_z52hash1223z52_106,
		obj_t BgL_z52blacklist1224z52_107)
	{
		{	/* SawMill/bbv-types.sch 114 */
			{	/* SawMill/bbv-types.sch 114 */
				BgL_blockz00_bglt BgL_new1170z00_4777;

				{	/* SawMill/bbv-types.sch 114 */
					BgL_blockz00_bglt BgL_tmp1168z00_4778;
					BgL_blocksz00_bglt BgL_wide1169z00_4779;

					{
						BgL_blockz00_bglt BgL_auxz00_5275;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_blockz00_bglt BgL_new1167z00_4780;

							BgL_new1167z00_4780 =
								((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_blockz00_bgl))));
							{	/* SawMill/bbv-types.sch 114 */
								long BgL_arg1902z00_4781;

								{	/* SawMill/bbv-types.sch 114 */
									long BgL_res2572z00_4782;

									BgL_res2572z00_4782 =
										BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
									BgL_arg1902z00_4781 = BgL_res2572z00_4782;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1167z00_4780),
									BgL_arg1902z00_4781);
							}
							{	/* SawMill/bbv-types.sch 114 */
								BgL_objectz00_bglt BgL_tmpz00_5280;

								BgL_tmpz00_5280 = ((BgL_objectz00_bglt) BgL_new1167z00_4780);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5280, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1167z00_4780);
							BgL_auxz00_5275 = BgL_new1167z00_4780;
						}
						BgL_tmp1168z00_4778 = ((BgL_blockz00_bglt) BgL_auxz00_5275);
					}
					BgL_wide1169z00_4779 =
						((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_blocksz00_bgl))));
					{	/* SawMill/bbv-types.sch 114 */
						obj_t BgL_auxz00_5288;
						BgL_objectz00_bglt BgL_tmpz00_5286;

						BgL_auxz00_5288 = ((obj_t) BgL_wide1169z00_4779);
						BgL_tmpz00_5286 = ((BgL_objectz00_bglt) BgL_tmp1168z00_4778);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5286, BgL_auxz00_5288);
					}
					((BgL_objectz00_bglt) BgL_tmp1168z00_4778);
					{	/* SawMill/bbv-types.sch 114 */
						long BgL_arg1901z00_4783;

						{	/* SawMill/bbv-types.sch 114 */
							long BgL_res2573z00_4784;

							BgL_res2573z00_4784 =
								BGL_CLASS_INDEX(BGl_blockSz00zzsaw_bbvzd2typeszd2);
							BgL_arg1901z00_4783 = BgL_res2573z00_4784;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1168z00_4778), BgL_arg1901z00_4783);
					}
					BgL_new1170z00_4777 = ((BgL_blockz00_bglt) BgL_tmp1168z00_4778);
				}
				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_new1170z00_4777)))->BgL_labelz00) =
					((int) BgL_label1215z00_98), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1170z00_4777)))->BgL_predsz00) =
					((obj_t) BgL_preds1216z00_99), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1170z00_4777)))->BgL_succsz00) =
					((obj_t) BgL_succs1217z00_100), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
									BgL_new1170z00_4777)))->BgL_firstz00) =
					((obj_t) BgL_first1218z00_101), BUNSPEC);
				{
					BgL_blocksz00_bglt BgL_auxz00_5304;

					{
						obj_t BgL_auxz00_5305;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5306;

							BgL_tmpz00_5306 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5305 = BGL_OBJECT_WIDENING(BgL_tmpz00_5306);
						}
						BgL_auxz00_5304 = ((BgL_blocksz00_bglt) BgL_auxz00_5305);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5304))->BgL_ictxz00) =
						((obj_t) BgL_ictx1219z00_102), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_5311;

					{
						obj_t BgL_auxz00_5312;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5313;

							BgL_tmpz00_5313 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5312 = BGL_OBJECT_WIDENING(BgL_tmpz00_5313);
						}
						BgL_auxz00_5311 = ((BgL_blocksz00_bglt) BgL_auxz00_5312);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5311))->BgL_octxsz00) =
						((obj_t) BgL_octxs1220z00_103), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_5318;

					{
						obj_t BgL_auxz00_5319;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5320;

							BgL_tmpz00_5320 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5319 = BGL_OBJECT_WIDENING(BgL_tmpz00_5320);
						}
						BgL_auxz00_5318 = ((BgL_blocksz00_bglt) BgL_auxz00_5319);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5318))->BgL_z52markz52) =
						((long) BgL_z52mark1221z52_104), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_5325;

					{
						obj_t BgL_auxz00_5326;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5327;

							BgL_tmpz00_5327 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5326 = BGL_OBJECT_WIDENING(BgL_tmpz00_5327);
						}
						BgL_auxz00_5325 = ((BgL_blocksz00_bglt) BgL_auxz00_5326);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5325))->BgL_z52parentz52) =
						((obj_t) BgL_z52parent1222z52_105), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_5332;

					{
						obj_t BgL_auxz00_5333;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5334;

							BgL_tmpz00_5334 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5333 = BGL_OBJECT_WIDENING(BgL_tmpz00_5334);
						}
						BgL_auxz00_5332 = ((BgL_blocksz00_bglt) BgL_auxz00_5333);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5332))->BgL_z52hashz52) =
						((obj_t) BgL_z52hash1223z52_106), BUNSPEC);
				}
				{
					BgL_blocksz00_bglt BgL_auxz00_5339;

					{
						obj_t BgL_auxz00_5340;

						{	/* SawMill/bbv-types.sch 114 */
							BgL_objectz00_bglt BgL_tmpz00_5341;

							BgL_tmpz00_5341 = ((BgL_objectz00_bglt) BgL_new1170z00_4777);
							BgL_auxz00_5340 = BGL_OBJECT_WIDENING(BgL_tmpz00_5341);
						}
						BgL_auxz00_5339 = ((BgL_blocksz00_bglt) BgL_auxz00_5340);
					}
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5339))->
							BgL_z52blacklistz52) =
						((obj_t) BgL_z52blacklist1224z52_107), BUNSPEC);
				}
				return BgL_new1170z00_4777;
			}
		}

	}



/* &make-blockS */
	BgL_blockz00_bglt BGl_z62makezd2blockSzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4592, obj_t BgL_label1215z00_4593, obj_t BgL_preds1216z00_4594,
		obj_t BgL_succs1217z00_4595, obj_t BgL_first1218z00_4596,
		obj_t BgL_ictx1219z00_4597, obj_t BgL_octxs1220z00_4598,
		obj_t BgL_z52mark1221z52_4599, obj_t BgL_z52parent1222z52_4600,
		obj_t BgL_z52hash1223z52_4601, obj_t BgL_z52blacklist1224z52_4602)
	{
		{	/* SawMill/bbv-types.sch 114 */
			return
				BGl_makezd2blockSzd2zzsaw_bbvzd2specializa7ez75(CINT
				(BgL_label1215z00_4593), BgL_preds1216z00_4594, BgL_succs1217z00_4595,
				BgL_first1218z00_4596, BgL_ictx1219z00_4597, BgL_octxs1220z00_4598,
				(long) CINT(BgL_z52mark1221z52_4599), BgL_z52parent1222z52_4600,
				BgL_z52hash1223z52_4601, BgL_z52blacklist1224z52_4602);
		}

	}



/* blockS? */
	BGL_EXPORTED_DEF bool_t BGl_blockSzf3zf3zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_objz00_108)
	{
		{	/* SawMill/bbv-types.sch 115 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_108,
				BGl_blockSz00zzsaw_bbvzd2typeszd2);
		}

	}



/* &blockS? */
	obj_t BGl_z62blockSzf3z91zzsaw_bbvzd2specializa7ez75(obj_t BgL_envz00_4603,
		obj_t BgL_objz00_4604)
	{
		{	/* SawMill/bbv-types.sch 115 */
			return
				BBOOL(BGl_blockSzf3zf3zzsaw_bbvzd2specializa7ez75(BgL_objz00_4604));
		}

	}



/* blockS-nil */
	BGL_EXPORTED_DEF BgL_blockz00_bglt
		BGl_blockSzd2nilzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-types.sch 116 */
			{	/* SawMill/bbv-types.sch 116 */
				obj_t BgL_classz00_3660;

				BgL_classz00_3660 = BGl_blockSz00zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-types.sch 116 */
					obj_t BgL__ortest_1106z00_3661;

					BgL__ortest_1106z00_3661 = BGL_CLASS_NIL(BgL_classz00_3660);
					if (CBOOL(BgL__ortest_1106z00_3661))
						{	/* SawMill/bbv-types.sch 116 */
							return ((BgL_blockz00_bglt) BgL__ortest_1106z00_3661);
						}
					else
						{	/* SawMill/bbv-types.sch 116 */
							return
								((BgL_blockz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3660));
						}
				}
			}
		}

	}



/* &blockS-nil */
	BgL_blockz00_bglt BGl_z62blockSzd2nilzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4605)
	{
		{	/* SawMill/bbv-types.sch 116 */
			return BGl_blockSzd2nilzd2zzsaw_bbvzd2specializa7ez75();
		}

	}



/* blockS-%blacklist */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52blacklistz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_109)
	{
		{	/* SawMill/bbv-types.sch 117 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5359;

				{
					obj_t BgL_auxz00_5360;

					{	/* SawMill/bbv-types.sch 117 */
						BgL_objectz00_bglt BgL_tmpz00_5361;

						BgL_tmpz00_5361 = ((BgL_objectz00_bglt) BgL_oz00_109);
						BgL_auxz00_5360 = BGL_OBJECT_WIDENING(BgL_tmpz00_5361);
					}
					BgL_auxz00_5359 = ((BgL_blocksz00_bglt) BgL_auxz00_5360);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5359))->
					BgL_z52blacklistz52);
			}
		}

	}



/* &blockS-%blacklist */
	obj_t BGl_z62blockSzd2z52blacklistze2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4606, obj_t BgL_oz00_4607)
	{
		{	/* SawMill/bbv-types.sch 117 */
			return
				BGl_blockSzd2z52blacklistz80zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4607));
		}

	}



/* blockS-%blacklist-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52blacklistzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt BgL_oz00_110, obj_t BgL_vz00_111)
	{
		{	/* SawMill/bbv-types.sch 118 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5368;

				{
					obj_t BgL_auxz00_5369;

					{	/* SawMill/bbv-types.sch 118 */
						BgL_objectz00_bglt BgL_tmpz00_5370;

						BgL_tmpz00_5370 = ((BgL_objectz00_bglt) BgL_oz00_110);
						BgL_auxz00_5369 = BGL_OBJECT_WIDENING(BgL_tmpz00_5370);
					}
					BgL_auxz00_5368 = ((BgL_blocksz00_bglt) BgL_auxz00_5369);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5368))->
						BgL_z52blacklistz52) = ((obj_t) BgL_vz00_111), BUNSPEC);
			}
		}

	}



/* &blockS-%blacklist-set! */
	obj_t
		BGl_z62blockSzd2z52blacklistzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4608, obj_t BgL_oz00_4609, obj_t BgL_vz00_4610)
	{
		{	/* SawMill/bbv-types.sch 118 */
			return
				BGl_blockSzd2z52blacklistzd2setz12z40zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4609), BgL_vz00_4610);
		}

	}



/* blockS-%hash */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52hashz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_112)
	{
		{	/* SawMill/bbv-types.sch 119 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5377;

				{
					obj_t BgL_auxz00_5378;

					{	/* SawMill/bbv-types.sch 119 */
						BgL_objectz00_bglt BgL_tmpz00_5379;

						BgL_tmpz00_5379 = ((BgL_objectz00_bglt) BgL_oz00_112);
						BgL_auxz00_5378 = BGL_OBJECT_WIDENING(BgL_tmpz00_5379);
					}
					BgL_auxz00_5377 = ((BgL_blocksz00_bglt) BgL_auxz00_5378);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5377))->BgL_z52hashz52);
			}
		}

	}



/* &blockS-%hash */
	obj_t BGl_z62blockSzd2z52hashze2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4611, obj_t BgL_oz00_4612)
	{
		{	/* SawMill/bbv-types.sch 119 */
			return
				BGl_blockSzd2z52hashz80zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4612));
		}

	}



/* blockS-%hash-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52hashzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt BgL_oz00_113, obj_t BgL_vz00_114)
	{
		{	/* SawMill/bbv-types.sch 120 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5386;

				{
					obj_t BgL_auxz00_5387;

					{	/* SawMill/bbv-types.sch 120 */
						BgL_objectz00_bglt BgL_tmpz00_5388;

						BgL_tmpz00_5388 = ((BgL_objectz00_bglt) BgL_oz00_113);
						BgL_auxz00_5387 = BGL_OBJECT_WIDENING(BgL_tmpz00_5388);
					}
					BgL_auxz00_5386 = ((BgL_blocksz00_bglt) BgL_auxz00_5387);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5386))->BgL_z52hashz52) =
					((obj_t) BgL_vz00_114), BUNSPEC);
			}
		}

	}



/* &blockS-%hash-set! */
	obj_t BGl_z62blockSzd2z52hashzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4613, obj_t BgL_oz00_4614, obj_t BgL_vz00_4615)
	{
		{	/* SawMill/bbv-types.sch 120 */
			return
				BGl_blockSzd2z52hashzd2setz12z40zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4614), BgL_vz00_4615);
		}

	}



/* blockS-%parent */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52parentz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_115)
	{
		{	/* SawMill/bbv-types.sch 121 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5395;

				{
					obj_t BgL_auxz00_5396;

					{	/* SawMill/bbv-types.sch 121 */
						BgL_objectz00_bglt BgL_tmpz00_5397;

						BgL_tmpz00_5397 = ((BgL_objectz00_bglt) BgL_oz00_115);
						BgL_auxz00_5396 = BGL_OBJECT_WIDENING(BgL_tmpz00_5397);
					}
					BgL_auxz00_5395 = ((BgL_blocksz00_bglt) BgL_auxz00_5396);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5395))->BgL_z52parentz52);
			}
		}

	}



/* &blockS-%parent */
	obj_t BGl_z62blockSzd2z52parentze2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4616, obj_t BgL_oz00_4617)
	{
		{	/* SawMill/bbv-types.sch 121 */
			return
				BGl_blockSzd2z52parentz80zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4617));
		}

	}



/* blockS-%mark */
	BGL_EXPORTED_DEF long
		BGl_blockSzd2z52markz80zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_118)
	{
		{	/* SawMill/bbv-types.sch 123 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5404;

				{
					obj_t BgL_auxz00_5405;

					{	/* SawMill/bbv-types.sch 123 */
						BgL_objectz00_bglt BgL_tmpz00_5406;

						BgL_tmpz00_5406 = ((BgL_objectz00_bglt) BgL_oz00_118);
						BgL_auxz00_5405 = BGL_OBJECT_WIDENING(BgL_tmpz00_5406);
					}
					BgL_auxz00_5404 = ((BgL_blocksz00_bglt) BgL_auxz00_5405);
				}
				return
					(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5404))->BgL_z52markz52);
			}
		}

	}



/* &blockS-%mark */
	obj_t BGl_z62blockSzd2z52markze2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4618, obj_t BgL_oz00_4619)
	{
		{	/* SawMill/bbv-types.sch 123 */
			return
				BINT(BGl_blockSzd2z52markz80zzsaw_bbvzd2specializa7ez75(
					((BgL_blockz00_bglt) BgL_oz00_4619)));
		}

	}



/* blockS-%mark-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75
		(BgL_blockz00_bglt BgL_oz00_119, long BgL_vz00_120)
	{
		{	/* SawMill/bbv-types.sch 124 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5414;

				{
					obj_t BgL_auxz00_5415;

					{	/* SawMill/bbv-types.sch 124 */
						BgL_objectz00_bglt BgL_tmpz00_5416;

						BgL_tmpz00_5416 = ((BgL_objectz00_bglt) BgL_oz00_119);
						BgL_auxz00_5415 = BGL_OBJECT_WIDENING(BgL_tmpz00_5416);
					}
					BgL_auxz00_5414 = ((BgL_blocksz00_bglt) BgL_auxz00_5415);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5414))->BgL_z52markz52) =
					((long) BgL_vz00_120), BUNSPEC);
		}}

	}



/* &blockS-%mark-set! */
	obj_t BGl_z62blockSzd2z52markzd2setz12z22zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4620, obj_t BgL_oz00_4621, obj_t BgL_vz00_4622)
	{
		{	/* SawMill/bbv-types.sch 124 */
			return
				BGl_blockSzd2z52markzd2setz12z40zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4621), (long) CINT(BgL_vz00_4622));
		}

	}



/* blockS-octxs */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2octxszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_121)
	{
		{	/* SawMill/bbv-types.sch 125 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5424;

				{
					obj_t BgL_auxz00_5425;

					{	/* SawMill/bbv-types.sch 125 */
						BgL_objectz00_bglt BgL_tmpz00_5426;

						BgL_tmpz00_5426 = ((BgL_objectz00_bglt) BgL_oz00_121);
						BgL_auxz00_5425 = BGL_OBJECT_WIDENING(BgL_tmpz00_5426);
					}
					BgL_auxz00_5424 = ((BgL_blocksz00_bglt) BgL_auxz00_5425);
				}
				return (((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5424))->BgL_octxsz00);
			}
		}

	}



/* &blockS-octxs */
	obj_t BGl_z62blockSzd2octxszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4623, obj_t BgL_oz00_4624)
	{
		{	/* SawMill/bbv-types.sch 125 */
			return
				BGl_blockSzd2octxszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4624));
		}

	}



/* blockS-octxs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2octxszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_122, obj_t BgL_vz00_123)
	{
		{	/* SawMill/bbv-types.sch 126 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5433;

				{
					obj_t BgL_auxz00_5434;

					{	/* SawMill/bbv-types.sch 126 */
						BgL_objectz00_bglt BgL_tmpz00_5435;

						BgL_tmpz00_5435 = ((BgL_objectz00_bglt) BgL_oz00_122);
						BgL_auxz00_5434 = BGL_OBJECT_WIDENING(BgL_tmpz00_5435);
					}
					BgL_auxz00_5433 = ((BgL_blocksz00_bglt) BgL_auxz00_5434);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5433))->BgL_octxsz00) =
					((obj_t) BgL_vz00_123), BUNSPEC);
			}
		}

	}



/* &blockS-octxs-set! */
	obj_t BGl_z62blockSzd2octxszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4625, obj_t BgL_oz00_4626, obj_t BgL_vz00_4627)
	{
		{	/* SawMill/bbv-types.sch 126 */
			return
				BGl_blockSzd2octxszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4626), BgL_vz00_4627);
		}

	}



/* blockS-ictx */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2ictxzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_124)
	{
		{	/* SawMill/bbv-types.sch 127 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5442;

				{
					obj_t BgL_auxz00_5443;

					{	/* SawMill/bbv-types.sch 127 */
						BgL_objectz00_bglt BgL_tmpz00_5444;

						BgL_tmpz00_5444 = ((BgL_objectz00_bglt) BgL_oz00_124);
						BgL_auxz00_5443 = BGL_OBJECT_WIDENING(BgL_tmpz00_5444);
					}
					BgL_auxz00_5442 = ((BgL_blocksz00_bglt) BgL_auxz00_5443);
				}
				return (((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5442))->BgL_ictxz00);
			}
		}

	}



/* &blockS-ictx */
	obj_t BGl_z62blockSzd2ictxzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4628, obj_t BgL_oz00_4629)
	{
		{	/* SawMill/bbv-types.sch 127 */
			return
				BGl_blockSzd2ictxzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4629));
		}

	}



/* blockS-ictx-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2ictxzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_125, obj_t BgL_vz00_126)
	{
		{	/* SawMill/bbv-types.sch 128 */
			{
				BgL_blocksz00_bglt BgL_auxz00_5451;

				{
					obj_t BgL_auxz00_5452;

					{	/* SawMill/bbv-types.sch 128 */
						BgL_objectz00_bglt BgL_tmpz00_5453;

						BgL_tmpz00_5453 = ((BgL_objectz00_bglt) BgL_oz00_125);
						BgL_auxz00_5452 = BGL_OBJECT_WIDENING(BgL_tmpz00_5453);
					}
					BgL_auxz00_5451 = ((BgL_blocksz00_bglt) BgL_auxz00_5452);
				}
				return
					((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5451))->BgL_ictxz00) =
					((obj_t) BgL_vz00_126), BUNSPEC);
			}
		}

	}



/* &blockS-ictx-set! */
	obj_t BGl_z62blockSzd2ictxzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4630, obj_t BgL_oz00_4631, obj_t BgL_vz00_4632)
	{
		{	/* SawMill/bbv-types.sch 128 */
			return
				BGl_blockSzd2ictxzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4631), BgL_vz00_4632);
		}

	}



/* blockS-first */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2firstzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_127)
	{
		{	/* SawMill/bbv-types.sch 129 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_127)))->BgL_firstz00);
		}

	}



/* &blockS-first */
	obj_t BGl_z62blockSzd2firstzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4633, obj_t BgL_oz00_4634)
	{
		{	/* SawMill/bbv-types.sch 129 */
			return
				BGl_blockSzd2firstzd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4634));
		}

	}



/* blockS-first-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_128, obj_t BgL_vz00_129)
	{
		{	/* SawMill/bbv-types.sch 130 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_128)))->BgL_firstz00) =
				((obj_t) BgL_vz00_129), BUNSPEC);
		}

	}



/* &blockS-first-set! */
	obj_t BGl_z62blockSzd2firstzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4635, obj_t BgL_oz00_4636, obj_t BgL_vz00_4637)
	{
		{	/* SawMill/bbv-types.sch 130 */
			return
				BGl_blockSzd2firstzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4636), BgL_vz00_4637);
		}

	}



/* blockS-succs */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2succszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_130)
	{
		{	/* SawMill/bbv-types.sch 131 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_130)))->BgL_succsz00);
		}

	}



/* &blockS-succs */
	obj_t BGl_z62blockSzd2succszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4638, obj_t BgL_oz00_4639)
	{
		{	/* SawMill/bbv-types.sch 131 */
			return
				BGl_blockSzd2succszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4639));
		}

	}



/* blockS-succs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_131, obj_t BgL_vz00_132)
	{
		{	/* SawMill/bbv-types.sch 132 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_131)))->BgL_succsz00) =
				((obj_t) BgL_vz00_132), BUNSPEC);
		}

	}



/* &blockS-succs-set! */
	obj_t BGl_z62blockSzd2succszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4640, obj_t BgL_oz00_4641, obj_t BgL_vz00_4642)
	{
		{	/* SawMill/bbv-types.sch 132 */
			return
				BGl_blockSzd2succszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4641), BgL_vz00_4642);
		}

	}



/* blockS-preds */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2predszd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_133)
	{
		{	/* SawMill/bbv-types.sch 133 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_133)))->BgL_predsz00);
		}

	}



/* &blockS-preds */
	obj_t BGl_z62blockSzd2predszb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4643, obj_t BgL_oz00_4644)
	{
		{	/* SawMill/bbv-types.sch 133 */
			return
				BGl_blockSzd2predszd2zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4644));
		}

	}



/* blockS-preds-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_134, obj_t BgL_vz00_135)
	{
		{	/* SawMill/bbv-types.sch 134 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_134)))->BgL_predsz00) =
				((obj_t) BgL_vz00_135), BUNSPEC);
		}

	}



/* &blockS-preds-set! */
	obj_t BGl_z62blockSzd2predszd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4645, obj_t BgL_oz00_4646, obj_t BgL_vz00_4647)
	{
		{	/* SawMill/bbv-types.sch 134 */
			return
				BGl_blockSzd2predszd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4646), BgL_vz00_4647);
		}

	}



/* blockS-label */
	BGL_EXPORTED_DEF int
		BGl_blockSzd2labelzd2zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_136)
	{
		{	/* SawMill/bbv-types.sch 135 */
			return
				(((BgL_blockz00_bglt) COBJECT(
						((BgL_blockz00_bglt) BgL_oz00_136)))->BgL_labelz00);
		}

	}



/* &blockS-label */
	obj_t BGl_z62blockSzd2labelzb0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4648, obj_t BgL_oz00_4649)
	{
		{	/* SawMill/bbv-types.sch 135 */
			return
				BINT(BGl_blockSzd2labelzd2zzsaw_bbvzd2specializa7ez75(
					((BgL_blockz00_bglt) BgL_oz00_4649)));
		}

	}



/* blockS-label-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_blockSzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(BgL_blockz00_bglt
		BgL_oz00_137, int BgL_vz00_138)
	{
		{	/* SawMill/bbv-types.sch 136 */
			return
				((((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_137)))->BgL_labelz00) =
				((int) BgL_vz00_138), BUNSPEC);
		}

	}



/* &blockS-label-set! */
	obj_t BGl_z62blockSzd2labelzd2setz12z70zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4650, obj_t BgL_oz00_4651, obj_t BgL_vz00_4652)
	{
		{	/* SawMill/bbv-types.sch 136 */
			return
				BGl_blockSzd2labelzd2setz12z12zzsaw_bbvzd2specializa7ez75(
				((BgL_blockz00_bglt) BgL_oz00_4651), CINT(BgL_vz00_4652));
		}

	}



/* make-rtl_ins/bbv */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt
		BGl_makezd2rtl_inszf2bbvz20zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_loc1205z00_139, obj_t BgL_z52spill1206z52_140,
		obj_t BgL_dest1207z00_141, BgL_rtl_funz00_bglt BgL_fun1208z00_142,
		obj_t BgL_args1209z00_143, obj_t BgL_def1210z00_144,
		obj_t BgL_out1211z00_145, obj_t BgL_in1212z00_146,
		obj_t BgL_z52hash1213z52_147)
	{
		{	/* SawMill/bbv-types.sch 139 */
			{	/* SawMill/bbv-types.sch 139 */
				BgL_rtl_insz00_bglt BgL_new1174z00_4785;

				{	/* SawMill/bbv-types.sch 139 */
					BgL_rtl_insz00_bglt BgL_tmp1172z00_4786;
					BgL_rtl_inszf2bbvzf2_bglt BgL_wide1173z00_4787;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_5494;

						{	/* SawMill/bbv-types.sch 139 */
							BgL_rtl_insz00_bglt BgL_new1171z00_4788;

							BgL_new1171z00_4788 =
								((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							{	/* SawMill/bbv-types.sch 139 */
								long BgL_arg1904z00_4789;

								{	/* SawMill/bbv-types.sch 139 */
									long BgL_res2574z00_4790;

									BgL_res2574z00_4790 =
										BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
									BgL_arg1904z00_4789 = BgL_res2574z00_4790;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1171z00_4788),
									BgL_arg1904z00_4789);
							}
							{	/* SawMill/bbv-types.sch 139 */
								BgL_objectz00_bglt BgL_tmpz00_5499;

								BgL_tmpz00_5499 = ((BgL_objectz00_bglt) BgL_new1171z00_4788);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5499, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1171z00_4788);
							BgL_auxz00_5494 = BgL_new1171z00_4788;
						}
						BgL_tmp1172z00_4786 = ((BgL_rtl_insz00_bglt) BgL_auxz00_5494);
					}
					BgL_wide1173z00_4787 =
						((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_inszf2bbvzf2_bgl))));
					{	/* SawMill/bbv-types.sch 139 */
						obj_t BgL_auxz00_5507;
						BgL_objectz00_bglt BgL_tmpz00_5505;

						BgL_auxz00_5507 = ((obj_t) BgL_wide1173z00_4787);
						BgL_tmpz00_5505 = ((BgL_objectz00_bglt) BgL_tmp1172z00_4786);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5505, BgL_auxz00_5507);
					}
					((BgL_objectz00_bglt) BgL_tmp1172z00_4786);
					{	/* SawMill/bbv-types.sch 139 */
						long BgL_arg1903z00_4791;

						{	/* SawMill/bbv-types.sch 139 */
							long BgL_res2575z00_4792;

							BgL_res2575z00_4792 =
								BGL_CLASS_INDEX(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
							BgL_arg1903z00_4791 = BgL_res2575z00_4792;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1172z00_4786), BgL_arg1903z00_4791);
					}
					BgL_new1174z00_4785 = ((BgL_rtl_insz00_bglt) BgL_tmp1172z00_4786);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1174z00_4785)))->BgL_locz00) =
					((obj_t) BgL_loc1205z00_139), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1174z00_4785)))->BgL_z52spillz52) =
					((obj_t) BgL_z52spill1206z52_140), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1174z00_4785)))->BgL_destz00) =
					((obj_t) BgL_dest1207z00_141), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1174z00_4785)))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) BgL_fun1208z00_142), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1174z00_4785)))->BgL_argsz00) =
					((obj_t) BgL_args1209z00_143), BUNSPEC);
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5525;

					{
						obj_t BgL_auxz00_5526;

						{	/* SawMill/bbv-types.sch 139 */
							BgL_objectz00_bglt BgL_tmpz00_5527;

							BgL_tmpz00_5527 = ((BgL_objectz00_bglt) BgL_new1174z00_4785);
							BgL_auxz00_5526 = BGL_OBJECT_WIDENING(BgL_tmpz00_5527);
						}
						BgL_auxz00_5525 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5526);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5525))->
							BgL_defz00) = ((obj_t) BgL_def1210z00_144), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5532;

					{
						obj_t BgL_auxz00_5533;

						{	/* SawMill/bbv-types.sch 139 */
							BgL_objectz00_bglt BgL_tmpz00_5534;

							BgL_tmpz00_5534 = ((BgL_objectz00_bglt) BgL_new1174z00_4785);
							BgL_auxz00_5533 = BGL_OBJECT_WIDENING(BgL_tmpz00_5534);
						}
						BgL_auxz00_5532 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5533);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5532))->
							BgL_outz00) = ((obj_t) BgL_out1211z00_145), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5539;

					{
						obj_t BgL_auxz00_5540;

						{	/* SawMill/bbv-types.sch 139 */
							BgL_objectz00_bglt BgL_tmpz00_5541;

							BgL_tmpz00_5541 = ((BgL_objectz00_bglt) BgL_new1174z00_4785);
							BgL_auxz00_5540 = BGL_OBJECT_WIDENING(BgL_tmpz00_5541);
						}
						BgL_auxz00_5539 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5540);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5539))->BgL_inz00) =
						((obj_t) BgL_in1212z00_146), BUNSPEC);
				}
				{
					BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5546;

					{
						obj_t BgL_auxz00_5547;

						{	/* SawMill/bbv-types.sch 139 */
							BgL_objectz00_bglt BgL_tmpz00_5548;

							BgL_tmpz00_5548 = ((BgL_objectz00_bglt) BgL_new1174z00_4785);
							BgL_auxz00_5547 = BGL_OBJECT_WIDENING(BgL_tmpz00_5548);
						}
						BgL_auxz00_5546 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5547);
					}
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5546))->
							BgL_z52hashz52) = ((obj_t) BgL_z52hash1213z52_147), BUNSPEC);
				}
				return BgL_new1174z00_4785;
			}
		}

	}



/* &make-rtl_ins/bbv */
	BgL_rtl_insz00_bglt
		BGl_z62makezd2rtl_inszf2bbvz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4653, obj_t BgL_loc1205z00_4654, obj_t BgL_z52spill1206z52_4655,
		obj_t BgL_dest1207z00_4656, obj_t BgL_fun1208z00_4657,
		obj_t BgL_args1209z00_4658, obj_t BgL_def1210z00_4659,
		obj_t BgL_out1211z00_4660, obj_t BgL_in1212z00_4661,
		obj_t BgL_z52hash1213z52_4662)
	{
		{	/* SawMill/bbv-types.sch 139 */
			return
				BGl_makezd2rtl_inszf2bbvz20zzsaw_bbvzd2specializa7ez75
				(BgL_loc1205z00_4654, BgL_z52spill1206z52_4655, BgL_dest1207z00_4656,
				((BgL_rtl_funz00_bglt) BgL_fun1208z00_4657), BgL_args1209z00_4658,
				BgL_def1210z00_4659, BgL_out1211z00_4660, BgL_in1212z00_4661,
				BgL_z52hash1213z52_4662);
		}

	}



/* rtl_ins/bbv? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszf2bbvzf3z01zzsaw_bbvzd2specializa7ez75(obj_t BgL_objz00_148)
	{
		{	/* SawMill/bbv-types.sch 140 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_148,
				BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
		}

	}



/* &rtl_ins/bbv? */
	obj_t BGl_z62rtl_inszf2bbvzf3z63zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4663, obj_t BgL_objz00_4664)
	{
		{	/* SawMill/bbv-types.sch 140 */
			return
				BBOOL(BGl_rtl_inszf2bbvzf3z01zzsaw_bbvzd2specializa7ez75
				(BgL_objz00_4664));
		}

	}



/* rtl_ins/bbv-nil */
	BGL_EXPORTED_DEF BgL_rtl_insz00_bglt
		BGl_rtl_inszf2bbvzd2nilz20zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-types.sch 141 */
			{	/* SawMill/bbv-types.sch 141 */
				obj_t BgL_classz00_3693;

				BgL_classz00_3693 = BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-types.sch 141 */
					obj_t BgL__ortest_1106z00_3694;

					BgL__ortest_1106z00_3694 = BGL_CLASS_NIL(BgL_classz00_3693);
					if (CBOOL(BgL__ortest_1106z00_3694))
						{	/* SawMill/bbv-types.sch 141 */
							return ((BgL_rtl_insz00_bglt) BgL__ortest_1106z00_3694);
						}
					else
						{	/* SawMill/bbv-types.sch 141 */
							return
								((BgL_rtl_insz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3693));
						}
				}
			}
		}

	}



/* &rtl_ins/bbv-nil */
	BgL_rtl_insz00_bglt
		BGl_z62rtl_inszf2bbvzd2nilz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4665)
	{
		{	/* SawMill/bbv-types.sch 141 */
			return BGl_rtl_inszf2bbvzd2nilz20zzsaw_bbvzd2specializa7ez75();
		}

	}



/* rtl_ins/bbv-%hash */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2z52hashz72zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_149)
	{
		{	/* SawMill/bbv-types.sch 142 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5565;

				{
					obj_t BgL_auxz00_5566;

					{	/* SawMill/bbv-types.sch 142 */
						BgL_objectz00_bglt BgL_tmpz00_5567;

						BgL_tmpz00_5567 = ((BgL_objectz00_bglt) BgL_oz00_149);
						BgL_auxz00_5566 = BGL_OBJECT_WIDENING(BgL_tmpz00_5567);
					}
					BgL_auxz00_5565 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5566);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5565))->
					BgL_z52hashz52);
			}
		}

	}



/* &rtl_ins/bbv-%hash */
	obj_t BGl_z62rtl_inszf2bbvzd2z52hashz10zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4666, obj_t BgL_oz00_4667)
	{
		{	/* SawMill/bbv-types.sch 142 */
			return
				BGl_rtl_inszf2bbvzd2z52hashz72zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4667));
		}

	}



/* rtl_ins/bbv-%hash-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2z52hashzd2setz12zb2zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_150, obj_t BgL_vz00_151)
	{
		{	/* SawMill/bbv-types.sch 143 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5574;

				{
					obj_t BgL_auxz00_5575;

					{	/* SawMill/bbv-types.sch 143 */
						BgL_objectz00_bglt BgL_tmpz00_5576;

						BgL_tmpz00_5576 = ((BgL_objectz00_bglt) BgL_oz00_150);
						BgL_auxz00_5575 = BGL_OBJECT_WIDENING(BgL_tmpz00_5576);
					}
					BgL_auxz00_5574 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5575);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5574))->
						BgL_z52hashz52) = ((obj_t) BgL_vz00_151), BUNSPEC);
			}
		}

	}



/* &rtl_ins/bbv-%hash-set! */
	obj_t
		BGl_z62rtl_inszf2bbvzd2z52hashzd2setz12zd0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4668, obj_t BgL_oz00_4669, obj_t BgL_vz00_4670)
	{
		{	/* SawMill/bbv-types.sch 143 */
			return
				BGl_rtl_inszf2bbvzd2z52hashzd2setz12zb2zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4669), BgL_vz00_4670);
		}

	}



/* rtl_ins/bbv-in */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2inz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_152)
	{
		{	/* SawMill/bbv-types.sch 144 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5583;

				{
					obj_t BgL_auxz00_5584;

					{	/* SawMill/bbv-types.sch 144 */
						BgL_objectz00_bglt BgL_tmpz00_5585;

						BgL_tmpz00_5585 = ((BgL_objectz00_bglt) BgL_oz00_152);
						BgL_auxz00_5584 = BGL_OBJECT_WIDENING(BgL_tmpz00_5585);
					}
					BgL_auxz00_5583 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5584);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5583))->BgL_inz00);
			}
		}

	}



/* &rtl_ins/bbv-in */
	obj_t BGl_z62rtl_inszf2bbvzd2inz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4671, obj_t BgL_oz00_4672)
	{
		{	/* SawMill/bbv-types.sch 144 */
			return
				BGl_rtl_inszf2bbvzd2inz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4672));
		}

	}



/* rtl_ins/bbv-in-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2inzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_153, obj_t BgL_vz00_154)
	{
		{	/* SawMill/bbv-types.sch 145 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5592;

				{
					obj_t BgL_auxz00_5593;

					{	/* SawMill/bbv-types.sch 145 */
						BgL_objectz00_bglt BgL_tmpz00_5594;

						BgL_tmpz00_5594 = ((BgL_objectz00_bglt) BgL_oz00_153);
						BgL_auxz00_5593 = BGL_OBJECT_WIDENING(BgL_tmpz00_5594);
					}
					BgL_auxz00_5592 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5593);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5592))->BgL_inz00) =
					((obj_t) BgL_vz00_154), BUNSPEC);
			}
		}

	}



/* &rtl_ins/bbv-in-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2inzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4673, obj_t BgL_oz00_4674, obj_t BgL_vz00_4675)
	{
		{	/* SawMill/bbv-types.sch 145 */
			return
				BGl_rtl_inszf2bbvzd2inzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4674), BgL_vz00_4675);
		}

	}



/* rtl_ins/bbv-out */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2outz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_155)
	{
		{	/* SawMill/bbv-types.sch 146 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5601;

				{
					obj_t BgL_auxz00_5602;

					{	/* SawMill/bbv-types.sch 146 */
						BgL_objectz00_bglt BgL_tmpz00_5603;

						BgL_tmpz00_5603 = ((BgL_objectz00_bglt) BgL_oz00_155);
						BgL_auxz00_5602 = BGL_OBJECT_WIDENING(BgL_tmpz00_5603);
					}
					BgL_auxz00_5601 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5602);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5601))->BgL_outz00);
			}
		}

	}



/* &rtl_ins/bbv-out */
	obj_t BGl_z62rtl_inszf2bbvzd2outz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4676, obj_t BgL_oz00_4677)
	{
		{	/* SawMill/bbv-types.sch 146 */
			return
				BGl_rtl_inszf2bbvzd2outz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4677));
		}

	}



/* rtl_ins/bbv-out-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2outzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_156, obj_t BgL_vz00_157)
	{
		{	/* SawMill/bbv-types.sch 147 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5610;

				{
					obj_t BgL_auxz00_5611;

					{	/* SawMill/bbv-types.sch 147 */
						BgL_objectz00_bglt BgL_tmpz00_5612;

						BgL_tmpz00_5612 = ((BgL_objectz00_bglt) BgL_oz00_156);
						BgL_auxz00_5611 = BGL_OBJECT_WIDENING(BgL_tmpz00_5612);
					}
					BgL_auxz00_5610 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5611);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5610))->
						BgL_outz00) = ((obj_t) BgL_vz00_157), BUNSPEC);
			}
		}

	}



/* &rtl_ins/bbv-out-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2outzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4678, obj_t BgL_oz00_4679, obj_t BgL_vz00_4680)
	{
		{	/* SawMill/bbv-types.sch 147 */
			return
				BGl_rtl_inszf2bbvzd2outzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4679), BgL_vz00_4680);
		}

	}



/* rtl_ins/bbv-def */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2defz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_158)
	{
		{	/* SawMill/bbv-types.sch 148 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5619;

				{
					obj_t BgL_auxz00_5620;

					{	/* SawMill/bbv-types.sch 148 */
						BgL_objectz00_bglt BgL_tmpz00_5621;

						BgL_tmpz00_5621 = ((BgL_objectz00_bglt) BgL_oz00_158);
						BgL_auxz00_5620 = BGL_OBJECT_WIDENING(BgL_tmpz00_5621);
					}
					BgL_auxz00_5619 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5620);
				}
				return
					(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5619))->BgL_defz00);
			}
		}

	}



/* &rtl_ins/bbv-def */
	obj_t BGl_z62rtl_inszf2bbvzd2defz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4681, obj_t BgL_oz00_4682)
	{
		{	/* SawMill/bbv-types.sch 148 */
			return
				BGl_rtl_inszf2bbvzd2defz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4682));
		}

	}



/* rtl_ins/bbv-def-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2defzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_159, obj_t BgL_vz00_160)
	{
		{	/* SawMill/bbv-types.sch 149 */
			{
				BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5628;

				{
					obj_t BgL_auxz00_5629;

					{	/* SawMill/bbv-types.sch 149 */
						BgL_objectz00_bglt BgL_tmpz00_5630;

						BgL_tmpz00_5630 = ((BgL_objectz00_bglt) BgL_oz00_159);
						BgL_auxz00_5629 = BGL_OBJECT_WIDENING(BgL_tmpz00_5630);
					}
					BgL_auxz00_5628 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5629);
				}
				return
					((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5628))->
						BgL_defz00) = ((obj_t) BgL_vz00_160), BUNSPEC);
			}
		}

	}



/* &rtl_ins/bbv-def-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2defzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4683, obj_t BgL_oz00_4684, obj_t BgL_vz00_4685)
	{
		{	/* SawMill/bbv-types.sch 149 */
			return
				BGl_rtl_inszf2bbvzd2defzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4684), BgL_vz00_4685);
		}

	}



/* rtl_ins/bbv-args */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2argsz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_161)
	{
		{	/* SawMill/bbv-types.sch 150 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_161)))->BgL_argsz00);
		}

	}



/* &rtl_ins/bbv-args */
	obj_t BGl_z62rtl_inszf2bbvzd2argsz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4686, obj_t BgL_oz00_4687)
	{
		{	/* SawMill/bbv-types.sch 150 */
			return
				BGl_rtl_inszf2bbvzd2argsz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4687));
		}

	}



/* rtl_ins/bbv-args-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2argszd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_162, obj_t BgL_vz00_163)
	{
		{	/* SawMill/bbv-types.sch 151 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_162)))->BgL_argsz00) =
				((obj_t) BgL_vz00_163), BUNSPEC);
		}

	}



/* &rtl_ins/bbv-args-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2argszd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4688, obj_t BgL_oz00_4689, obj_t BgL_vz00_4690)
	{
		{	/* SawMill/bbv-types.sch 151 */
			return
				BGl_rtl_inszf2bbvzd2argszd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4689), BgL_vz00_4690);
		}

	}



/* rtl_ins/bbv-fun */
	BGL_EXPORTED_DEF BgL_rtl_funz00_bglt
		BGl_rtl_inszf2bbvzd2funz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_164)
	{
		{	/* SawMill/bbv-types.sch 152 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_164)))->BgL_funz00);
		}

	}



/* &rtl_ins/bbv-fun */
	BgL_rtl_funz00_bglt
		BGl_z62rtl_inszf2bbvzd2funz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4691, obj_t BgL_oz00_4692)
	{
		{	/* SawMill/bbv-types.sch 152 */
			return
				BGl_rtl_inszf2bbvzd2funz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4692));
		}

	}



/* rtl_ins/bbv-fun-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2funzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_165, BgL_rtl_funz00_bglt BgL_vz00_166)
	{
		{	/* SawMill/bbv-types.sch 153 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_165)))->BgL_funz00) =
				((BgL_rtl_funz00_bglt) BgL_vz00_166), BUNSPEC);
		}

	}



/* &rtl_ins/bbv-fun-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2funzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4693, obj_t BgL_oz00_4694, obj_t BgL_vz00_4695)
	{
		{	/* SawMill/bbv-types.sch 153 */
			return
				BGl_rtl_inszf2bbvzd2funzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4694),
				((BgL_rtl_funz00_bglt) BgL_vz00_4695));
		}

	}



/* rtl_ins/bbv-dest */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2destz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_167)
	{
		{	/* SawMill/bbv-types.sch 154 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_167)))->BgL_destz00);
		}

	}



/* &rtl_ins/bbv-dest */
	obj_t BGl_z62rtl_inszf2bbvzd2destz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4696, obj_t BgL_oz00_4697)
	{
		{	/* SawMill/bbv-types.sch 154 */
			return
				BGl_rtl_inszf2bbvzd2destz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4697));
		}

	}



/* rtl_ins/bbv-dest-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2destzd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_168, obj_t BgL_vz00_169)
	{
		{	/* SawMill/bbv-types.sch 155 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_168)))->BgL_destz00) =
				((obj_t) BgL_vz00_169), BUNSPEC);
		}

	}



/* &rtl_ins/bbv-dest-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2destzd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4698, obj_t BgL_oz00_4699, obj_t BgL_vz00_4700)
	{
		{	/* SawMill/bbv-types.sch 155 */
			return
				BGl_rtl_inszf2bbvzd2destzd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4699), BgL_vz00_4700);
		}

	}



/* rtl_ins/bbv-%spill */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2z52spillz72zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_170)
	{
		{	/* SawMill/bbv-types.sch 156 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_170)))->BgL_z52spillz52);
		}

	}



/* &rtl_ins/bbv-%spill */
	obj_t BGl_z62rtl_inszf2bbvzd2z52spillz10zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4701, obj_t BgL_oz00_4702)
	{
		{	/* SawMill/bbv-types.sch 156 */
			return
				BGl_rtl_inszf2bbvzd2z52spillz72zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4702));
		}

	}



/* rtl_ins/bbv-%spill-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2z52spillzd2setz12zb2zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_171, obj_t BgL_vz00_172)
	{
		{	/* SawMill/bbv-types.sch 157 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_171)))->BgL_z52spillz52) =
				((obj_t) BgL_vz00_172), BUNSPEC);
		}

	}



/* &rtl_ins/bbv-%spill-set! */
	obj_t
		BGl_z62rtl_inszf2bbvzd2z52spillzd2setz12zd0zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4703, obj_t BgL_oz00_4704, obj_t BgL_vz00_4705)
	{
		{	/* SawMill/bbv-types.sch 157 */
			return
				BGl_rtl_inszf2bbvzd2z52spillzd2setz12zb2zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4704), BgL_vz00_4705);
		}

	}



/* rtl_ins/bbv-loc */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2locz20zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_oz00_173)
	{
		{	/* SawMill/bbv-types.sch 158 */
			return
				(((BgL_rtl_insz00_bglt) COBJECT(
						((BgL_rtl_insz00_bglt) BgL_oz00_173)))->BgL_locz00);
		}

	}



/* &rtl_ins/bbv-loc */
	obj_t BGl_z62rtl_inszf2bbvzd2locz42zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4706, obj_t BgL_oz00_4707)
	{
		{	/* SawMill/bbv-types.sch 158 */
			return
				BGl_rtl_inszf2bbvzd2locz20zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4707));
		}

	}



/* rtl_ins/bbv-loc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszf2bbvzd2loczd2setz12ze0zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_oz00_174, obj_t BgL_vz00_175)
	{
		{	/* SawMill/bbv-types.sch 159 */
			return
				((((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_oz00_174)))->BgL_locz00) =
				((obj_t) BgL_vz00_175), BUNSPEC);
		}

	}



/* &rtl_ins/bbv-loc-set! */
	obj_t BGl_z62rtl_inszf2bbvzd2loczd2setz12z82zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4708, obj_t BgL_oz00_4709, obj_t BgL_vz00_4710)
	{
		{	/* SawMill/bbv-types.sch 159 */
			return
				BGl_rtl_inszf2bbvzd2loczd2setz12ze0zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_oz00_4709), BgL_vz00_4710);
		}

	}



/* make-bbv-ctxentry */
	BGL_EXPORTED_DEF BgL_bbvzd2ctxentryzd2_bglt
		BGl_makezd2bbvzd2ctxentryz00zzsaw_bbvzd2specializa7ez75(BgL_rtl_regz00_bglt
		BgL_reg1199z00_176, BgL_typez00_bglt BgL_typ1200z00_177,
		bool_t BgL_flag1201z00_178, obj_t BgL_value1202z00_179,
		obj_t BgL_aliases1203z00_180)
	{
		{	/* SawMill/bbv-types.sch 162 */
			{	/* SawMill/bbv-types.sch 162 */
				BgL_bbvzd2ctxentryzd2_bglt BgL_new1176z00_4793;

				{	/* SawMill/bbv-types.sch 162 */
					BgL_bbvzd2ctxentryzd2_bglt BgL_new1175z00_4794;

					BgL_new1175z00_4794 =
						((BgL_bbvzd2ctxentryzd2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_bbvzd2ctxentryzd2_bgl))));
					{	/* SawMill/bbv-types.sch 162 */
						long BgL_arg1905z00_4795;

						{	/* SawMill/bbv-types.sch 162 */
							long BgL_res2576z00_4796;

							BgL_res2576z00_4796 =
								BGL_CLASS_INDEX(BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
							BgL_arg1905z00_4795 = BgL_res2576z00_4796;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1175z00_4794), BgL_arg1905z00_4795);
					}
					BgL_new1176z00_4793 = BgL_new1175z00_4794;
				}
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1176z00_4793))->
						BgL_regz00) = ((BgL_rtl_regz00_bglt) BgL_reg1199z00_176), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1176z00_4793))->
						BgL_typz00) = ((BgL_typez00_bglt) BgL_typ1200z00_177), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1176z00_4793))->
						BgL_flagz00) = ((bool_t) BgL_flag1201z00_178), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1176z00_4793))->
						BgL_valuez00) = ((obj_t) BgL_value1202z00_179), BUNSPEC);
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_new1176z00_4793))->
						BgL_aliasesz00) = ((obj_t) BgL_aliases1203z00_180), BUNSPEC);
				return BgL_new1176z00_4793;
			}
		}

	}



/* &make-bbv-ctxentry */
	BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62makezd2bbvzd2ctxentryz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4711, obj_t BgL_reg1199z00_4712, obj_t BgL_typ1200z00_4713,
		obj_t BgL_flag1201z00_4714, obj_t BgL_value1202z00_4715,
		obj_t BgL_aliases1203z00_4716)
	{
		{	/* SawMill/bbv-types.sch 162 */
			return
				BGl_makezd2bbvzd2ctxentryz00zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_regz00_bglt) BgL_reg1199z00_4712),
				((BgL_typez00_bglt) BgL_typ1200z00_4713),
				CBOOL(BgL_flag1201z00_4714), BgL_value1202z00_4715,
				BgL_aliases1203z00_4716);
		}

	}



/* bbv-ctxentry? */
	BGL_EXPORTED_DEF bool_t
		BGl_bbvzd2ctxentryzf3z21zzsaw_bbvzd2specializa7ez75(obj_t BgL_objz00_181)
	{
		{	/* SawMill/bbv-types.sch 163 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_181,
				BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2);
		}

	}



/* &bbv-ctxentry? */
	obj_t BGl_z62bbvzd2ctxentryzf3z43zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4717, obj_t BgL_objz00_4718)
	{
		{	/* SawMill/bbv-types.sch 163 */
			return
				BBOOL(BGl_bbvzd2ctxentryzf3z21zzsaw_bbvzd2specializa7ez75
				(BgL_objz00_4718));
		}

	}



/* bbv-ctxentry-nil */
	BGL_EXPORTED_DEF BgL_bbvzd2ctxentryzd2_bglt
		BGl_bbvzd2ctxentryzd2nilz00zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-types.sch 164 */
			{	/* SawMill/bbv-types.sch 164 */
				obj_t BgL_classz00_3710;

				BgL_classz00_3710 = BGl_bbvzd2ctxentryzd2zzsaw_bbvzd2typeszd2;
				{	/* SawMill/bbv-types.sch 164 */
					obj_t BgL__ortest_1106z00_3711;

					BgL__ortest_1106z00_3711 = BGL_CLASS_NIL(BgL_classz00_3710);
					if (CBOOL(BgL__ortest_1106z00_3711))
						{	/* SawMill/bbv-types.sch 164 */
							return ((BgL_bbvzd2ctxentryzd2_bglt) BgL__ortest_1106z00_3711);
						}
					else
						{	/* SawMill/bbv-types.sch 164 */
							return
								((BgL_bbvzd2ctxentryzd2_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3710));
						}
				}
			}
		}

	}



/* &bbv-ctxentry-nil */
	BgL_bbvzd2ctxentryzd2_bglt
		BGl_z62bbvzd2ctxentryzd2nilz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4719)
	{
		{	/* SawMill/bbv-types.sch 164 */
			return BGl_bbvzd2ctxentryzd2nilz00zzsaw_bbvzd2specializa7ez75();
		}

	}



/* bbv-ctxentry-aliases */
	BGL_EXPORTED_DEF obj_t
		BGl_bbvzd2ctxentryzd2aliasesz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_182)
	{
		{	/* SawMill/bbv-types.sch 165 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_182))->BgL_aliasesz00);
		}

	}



/* &bbv-ctxentry-aliases */
	obj_t BGl_z62bbvzd2ctxentryzd2aliasesz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4720, obj_t BgL_oz00_4721)
	{
		{	/* SawMill/bbv-types.sch 165 */
			return
				BGl_bbvzd2ctxentryzd2aliasesz00zzsaw_bbvzd2specializa7ez75(
				((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4721));
		}

	}



/* bbv-ctxentry-aliases-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bbvzd2ctxentryzd2aliaseszd2setz12zc0zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_183, obj_t BgL_vz00_184)
	{
		{	/* SawMill/bbv-types.sch 166 */
			return
				((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_183))->
					BgL_aliasesz00) = ((obj_t) BgL_vz00_184), BUNSPEC);
		}

	}



/* &bbv-ctxentry-aliases-set! */
	obj_t
		BGl_z62bbvzd2ctxentryzd2aliaseszd2setz12za2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4722, obj_t BgL_oz00_4723, obj_t BgL_vz00_4724)
	{
		{	/* SawMill/bbv-types.sch 166 */
			return
				BGl_bbvzd2ctxentryzd2aliaseszd2setz12zc0zzsaw_bbvzd2specializa7ez75(
				((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4723), BgL_vz00_4724);
		}

	}



/* bbv-ctxentry-value */
	BGL_EXPORTED_DEF obj_t
		BGl_bbvzd2ctxentryzd2valuez00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_185)
	{
		{	/* SawMill/bbv-types.sch 167 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_185))->BgL_valuez00);
		}

	}



/* &bbv-ctxentry-value */
	obj_t BGl_z62bbvzd2ctxentryzd2valuez62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4725, obj_t BgL_oz00_4726)
	{
		{	/* SawMill/bbv-types.sch 167 */
			return
				BGl_bbvzd2ctxentryzd2valuez00zzsaw_bbvzd2specializa7ez75(
				((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4726));
		}

	}



/* bbv-ctxentry-flag */
	BGL_EXPORTED_DEF bool_t
		BGl_bbvzd2ctxentryzd2flagz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_188)
	{
		{	/* SawMill/bbv-types.sch 169 */
			return
				(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_188))->BgL_flagz00);
		}

	}



/* &bbv-ctxentry-flag */
	obj_t BGl_z62bbvzd2ctxentryzd2flagz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4727, obj_t BgL_oz00_4728)
	{
		{	/* SawMill/bbv-types.sch 169 */
			return
				BBOOL(BGl_bbvzd2ctxentryzd2flagz00zzsaw_bbvzd2specializa7ez75(
					((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4728)));
		}

	}



/* bbv-ctxentry-typ */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_bbvzd2ctxentryzd2typz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_191)
	{
		{	/* SawMill/bbv-types.sch 171 */
			return (((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_191))->BgL_typz00);
		}

	}



/* &bbv-ctxentry-typ */
	BgL_typez00_bglt
		BGl_z62bbvzd2ctxentryzd2typz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4729, obj_t BgL_oz00_4730)
	{
		{	/* SawMill/bbv-types.sch 171 */
			return
				BGl_bbvzd2ctxentryzd2typz00zzsaw_bbvzd2specializa7ez75(
				((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4730));
		}

	}



/* bbv-ctxentry-reg */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_bbvzd2ctxentryzd2regz00zzsaw_bbvzd2specializa7ez75
		(BgL_bbvzd2ctxentryzd2_bglt BgL_oz00_194)
	{
		{	/* SawMill/bbv-types.sch 173 */
			return (((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(BgL_oz00_194))->BgL_regz00);
		}

	}



/* &bbv-ctxentry-reg */
	BgL_rtl_regz00_bglt
		BGl_z62bbvzd2ctxentryzd2regz62zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4731, obj_t BgL_oz00_4732)
	{
		{	/* SawMill/bbv-types.sch 173 */
			return
				BGl_bbvzd2ctxentryzd2regz00zzsaw_bbvzd2specializa7ez75(
				((BgL_bbvzd2ctxentryzd2_bglt) BgL_oz00_4732));
		}

	}



/* rtl_ins-specialize */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_iz00_207, obj_t BgL_ctxz00_208)
	{
		{	/* SawMill/bbv-specialize.scm 60 */
			if (BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75
				(BgL_iz00_207))
				{	/* SawMill/bbv-specialize.scm 66 */
					return
						((obj_t)
						BGl_rtl_inszd2specializa7ezd2typecheckza7zzsaw_bbvzd2specializa7ez75
						(BgL_iz00_207, BgL_ctxz00_208));
				}
			else
				{	/* SawMill/bbv-specialize.scm 66 */
					if (BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_iz00_207))
						{	/* SawMill/bbv-specialize.scm 75 */
							BgL_rtl_insz00_bglt BgL_sz00_2123;

							{	/* SawMill/bbv-specialize.scm 75 */
								BgL_rtl_insz00_bglt BgL_new1178z00_2127;

								{	/* SawMill/bbv-specialize.scm 75 */
									BgL_rtl_insz00_bglt BgL_tmp1186z00_2137;
									BgL_rtl_inszf2bbvzf2_bglt BgL_wide1187z00_2138;

									{
										BgL_rtl_insz00_bglt BgL_auxz00_5726;

										{	/* SawMill/bbv-specialize.scm 75 */
											BgL_rtl_insz00_bglt BgL_new1185z00_2140;

											BgL_new1185z00_2140 =
												((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_insz00_bgl))));
											{	/* SawMill/bbv-specialize.scm 75 */
												long BgL_arg1920z00_2141;

												{	/* SawMill/bbv-specialize.scm 75 */
													long BgL_res2579z00_3725;

													BgL_res2579z00_3725 =
														BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
													BgL_arg1920z00_2141 = BgL_res2579z00_3725;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1185z00_2140),
													BgL_arg1920z00_2141);
											}
											{	/* SawMill/bbv-specialize.scm 75 */
												BgL_objectz00_bglt BgL_tmpz00_5731;

												BgL_tmpz00_5731 =
													((BgL_objectz00_bglt) BgL_new1185z00_2140);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5731, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1185z00_2140);
											BgL_auxz00_5726 = BgL_new1185z00_2140;
										}
										BgL_tmp1186z00_2137 =
											((BgL_rtl_insz00_bglt) BgL_auxz00_5726);
									}
									BgL_wide1187z00_2138 =
										((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_rtl_inszf2bbvzf2_bgl))));
									{	/* SawMill/bbv-specialize.scm 75 */
										obj_t BgL_auxz00_5739;
										BgL_objectz00_bglt BgL_tmpz00_5737;

										BgL_auxz00_5739 = ((obj_t) BgL_wide1187z00_2138);
										BgL_tmpz00_5737 =
											((BgL_objectz00_bglt) BgL_tmp1186z00_2137);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5737, BgL_auxz00_5739);
									}
									((BgL_objectz00_bglt) BgL_tmp1186z00_2137);
									{	/* SawMill/bbv-specialize.scm 75 */
										long BgL_arg1919z00_2139;

										{	/* SawMill/bbv-specialize.scm 75 */
											long BgL_res2580z00_3731;

											BgL_res2580z00_3731 =
												BGL_CLASS_INDEX
												(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
											BgL_arg1919z00_2139 = BgL_res2580z00_3731;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_tmp1186z00_2137),
											BgL_arg1919z00_2139);
									}
									BgL_new1178z00_2127 =
										((BgL_rtl_insz00_bglt) BgL_tmp1186z00_2137);
								}
								((((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_new1178z00_2127)))->
										BgL_locz00) =
									((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
											BgL_locz00)), BUNSPEC);
								((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
													BgL_new1178z00_2127)))->BgL_z52spillz52) =
									((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
											BgL_z52spillz52)), BUNSPEC);
								((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
													BgL_new1178z00_2127)))->BgL_destz00) =
									((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
											BgL_destz00)), BUNSPEC);
								{
									BgL_rtl_funz00_bglt BgL_auxz00_5756;

									{	/* SawMill/bbv-specialize.scm 76 */
										BgL_rtl_funz00_bglt BgL_duplicated1190z00_2128;
										BgL_rtl_goz00_bglt BgL_new1188z00_2129;

										BgL_duplicated1190z00_2128 =
											(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
											BgL_funz00);
										{	/* SawMill/bbv-specialize.scm 76 */
											BgL_rtl_goz00_bglt BgL_new1192z00_2131;

											BgL_new1192z00_2131 =
												((BgL_rtl_goz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_goz00_bgl))));
											{	/* SawMill/bbv-specialize.scm 76 */
												long BgL_arg1918z00_2132;

												{	/* SawMill/bbv-specialize.scm 76 */
													long BgL_res2581z00_3735;

													{	/* SawMill/bbv-specialize.scm 76 */
														obj_t BgL_classz00_3734;

														BgL_classz00_3734 = BGl_rtl_goz00zzsaw_defsz00;
														BgL_res2581z00_3735 =
															BGL_CLASS_INDEX(BgL_classz00_3734);
													}
													BgL_arg1918z00_2132 = BgL_res2581z00_3735;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1192z00_2131),
													BgL_arg1918z00_2132);
											}
											BgL_new1188z00_2129 = BgL_new1192z00_2131;
										}
										((((BgL_rtl_funz00_bglt) COBJECT(
														((BgL_rtl_funz00_bglt) BgL_new1188z00_2129)))->
												BgL_locz00) =
											((obj_t) (((BgL_rtl_funz00_bglt)
														COBJECT(BgL_duplicated1190z00_2128))->BgL_locz00)),
											BUNSPEC);
										((((BgL_rtl_goz00_bglt) COBJECT(BgL_new1188z00_2129))->
												BgL_toz00) =
											((BgL_blockz00_bglt) (((BgL_rtl_goz00_bglt)
														COBJECT(((BgL_rtl_goz00_bglt)
																BgL_duplicated1190z00_2128)))->BgL_toz00)),
											BUNSPEC);
										BgL_auxz00_5756 =
											((BgL_rtl_funz00_bglt) BgL_new1188z00_2129);
									}
									((((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_new1178z00_2127)))->
											BgL_funz00) =
										((BgL_rtl_funz00_bglt) BgL_auxz00_5756), BUNSPEC);
								}
								((((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_new1178z00_2127)))->
										BgL_argsz00) =
									((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
											BgL_argsz00)), BUNSPEC);
								{
									obj_t BgL_auxz00_5780;
									BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5774;

									{
										BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5781;

										{
											obj_t BgL_auxz00_5782;

											{	/* SawMill/bbv-specialize.scm 76 */
												BgL_objectz00_bglt BgL_tmpz00_5783;

												BgL_tmpz00_5783 =
													((BgL_objectz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_iz00_207));
												BgL_auxz00_5782 = BGL_OBJECT_WIDENING(BgL_tmpz00_5783);
											}
											BgL_auxz00_5781 =
												((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5782);
										}
										BgL_auxz00_5780 =
											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5781))->
											BgL_defz00);
									}
									{
										obj_t BgL_auxz00_5775;

										{	/* SawMill/bbv-specialize.scm 76 */
											BgL_objectz00_bglt BgL_tmpz00_5776;

											BgL_tmpz00_5776 =
												((BgL_objectz00_bglt) BgL_new1178z00_2127);
											BgL_auxz00_5775 = BGL_OBJECT_WIDENING(BgL_tmpz00_5776);
										}
										BgL_auxz00_5774 =
											((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5775);
									}
									((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5774))->
											BgL_defz00) = ((obj_t) BgL_auxz00_5780), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_5796;
									BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5790;

									{
										BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5797;

										{
											obj_t BgL_auxz00_5798;

											{	/* SawMill/bbv-specialize.scm 76 */
												BgL_objectz00_bglt BgL_tmpz00_5799;

												BgL_tmpz00_5799 =
													((BgL_objectz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_iz00_207));
												BgL_auxz00_5798 = BGL_OBJECT_WIDENING(BgL_tmpz00_5799);
											}
											BgL_auxz00_5797 =
												((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5798);
										}
										BgL_auxz00_5796 =
											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5797))->
											BgL_outz00);
									}
									{
										obj_t BgL_auxz00_5791;

										{	/* SawMill/bbv-specialize.scm 76 */
											BgL_objectz00_bglt BgL_tmpz00_5792;

											BgL_tmpz00_5792 =
												((BgL_objectz00_bglt) BgL_new1178z00_2127);
											BgL_auxz00_5791 = BGL_OBJECT_WIDENING(BgL_tmpz00_5792);
										}
										BgL_auxz00_5790 =
											((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5791);
									}
									((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5790))->
											BgL_outz00) = ((obj_t) BgL_auxz00_5796), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_5812;
									BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5806;

									{
										BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5813;

										{
											obj_t BgL_auxz00_5814;

											{	/* SawMill/bbv-specialize.scm 76 */
												BgL_objectz00_bglt BgL_tmpz00_5815;

												BgL_tmpz00_5815 =
													((BgL_objectz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_iz00_207));
												BgL_auxz00_5814 = BGL_OBJECT_WIDENING(BgL_tmpz00_5815);
											}
											BgL_auxz00_5813 =
												((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5814);
										}
										BgL_auxz00_5812 =
											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5813))->
											BgL_inz00);
									}
									{
										obj_t BgL_auxz00_5807;

										{	/* SawMill/bbv-specialize.scm 76 */
											BgL_objectz00_bglt BgL_tmpz00_5808;

											BgL_tmpz00_5808 =
												((BgL_objectz00_bglt) BgL_new1178z00_2127);
											BgL_auxz00_5807 = BGL_OBJECT_WIDENING(BgL_tmpz00_5808);
										}
										BgL_auxz00_5806 =
											((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5807);
									}
									((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5806))->
											BgL_inz00) = ((obj_t) BgL_auxz00_5812), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_5828;
									BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5822;

									{
										BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5829;

										{
											obj_t BgL_auxz00_5830;

											{	/* SawMill/bbv-specialize.scm 76 */
												BgL_objectz00_bglt BgL_tmpz00_5831;

												BgL_tmpz00_5831 =
													((BgL_objectz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_iz00_207));
												BgL_auxz00_5830 = BGL_OBJECT_WIDENING(BgL_tmpz00_5831);
											}
											BgL_auxz00_5829 =
												((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5830);
										}
										BgL_auxz00_5828 =
											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5829))->
											BgL_z52hashz52);
									}
									{
										obj_t BgL_auxz00_5823;

										{	/* SawMill/bbv-specialize.scm 76 */
											BgL_objectz00_bglt BgL_tmpz00_5824;

											BgL_tmpz00_5824 =
												((BgL_objectz00_bglt) BgL_new1178z00_2127);
											BgL_auxz00_5823 = BGL_OBJECT_WIDENING(BgL_tmpz00_5824);
										}
										BgL_auxz00_5822 =
											((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5823);
									}
									((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_5822))->
											BgL_z52hashz52) = ((obj_t) BgL_auxz00_5828), BUNSPEC);
								}
								BgL_sz00_2123 = BgL_new1178z00_2127;
							}
							{	/* SawMill/bbv-specialize.scm 77 */
								int BgL_res2582z00_3746;

								{	/* SawMill/bbv-specialize.scm 77 */
									int BgL_tmpz00_5838;

									BgL_tmpz00_5838 = (int) (((long) 2));
									BgL_res2582z00_3746 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5838);
								} BgL_res2582z00_3746;
							}
							{	/* SawMill/bbv-specialize.scm 77 */
								int BgL_tmpz00_5841;

								BgL_tmpz00_5841 = (int) (((long) 1));
								BGL_MVALUES_VAL_SET(BgL_tmpz00_5841, BgL_ctxz00_208);
							}
							return ((obj_t) BgL_sz00_2123);
						}
					else
						{	/* SawMill/bbv-specialize.scm 72 */
							if (BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_iz00_207))
								{	/* SawMill/bbv-specialize.scm 80 */
									obj_t BgL_casezd2valuezd2_2143;

									BgL_casezd2valuezd2_2143 =
										BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75(CAR(
											(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
												BgL_argsz00)), BgL_ctxz00_208);
									if ((BgL_casezd2valuezd2_2143 == CNST_TABLE_REF(((long) 1))))
										{	/* SawMill/bbv-specialize.scm 82 */
											BgL_rtl_insz00_bglt BgL_sz00_2145;

											{	/* SawMill/bbv-specialize.scm 82 */
												BgL_rtl_insz00_bglt BgL_new1193z00_2149;

												{	/* SawMill/bbv-specialize.scm 82 */
													BgL_rtl_insz00_bglt BgL_tmp1201z00_2157;
													BgL_rtl_inszf2bbvzf2_bglt BgL_wide1202z00_2158;

													{
														BgL_rtl_insz00_bglt BgL_auxz00_5853;

														{	/* SawMill/bbv-specialize.scm 82 */
															BgL_rtl_insz00_bglt BgL_new1200z00_2160;

															BgL_new1200z00_2160 =
																((BgL_rtl_insz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_insz00_bgl))));
															{	/* SawMill/bbv-specialize.scm 82 */
																long BgL_arg1925z00_2161;

																{	/* SawMill/bbv-specialize.scm 82 */
																	long BgL_res2584z00_3752;

																	BgL_res2584z00_3752 =
																		BGL_CLASS_INDEX
																		(BGl_rtl_insz00zzsaw_defsz00);
																	BgL_arg1925z00_2161 = BgL_res2584z00_3752;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1200z00_2160),
																	BgL_arg1925z00_2161);
															}
															{	/* SawMill/bbv-specialize.scm 82 */
																BgL_objectz00_bglt BgL_tmpz00_5858;

																BgL_tmpz00_5858 =
																	((BgL_objectz00_bglt) BgL_new1200z00_2160);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5858,
																	BFALSE);
															}
															((BgL_objectz00_bglt) BgL_new1200z00_2160);
															BgL_auxz00_5853 = BgL_new1200z00_2160;
														}
														BgL_tmp1201z00_2157 =
															((BgL_rtl_insz00_bglt) BgL_auxz00_5853);
													}
													BgL_wide1202z00_2158 =
														((BgL_rtl_inszf2bbvzf2_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_rtl_inszf2bbvzf2_bgl))));
													{	/* SawMill/bbv-specialize.scm 82 */
														obj_t BgL_auxz00_5866;
														BgL_objectz00_bglt BgL_tmpz00_5864;

														BgL_auxz00_5866 = ((obj_t) BgL_wide1202z00_2158);
														BgL_tmpz00_5864 =
															((BgL_objectz00_bglt) BgL_tmp1201z00_2157);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5864,
															BgL_auxz00_5866);
													}
													((BgL_objectz00_bglt) BgL_tmp1201z00_2157);
													{	/* SawMill/bbv-specialize.scm 82 */
														long BgL_arg1924z00_2159;

														{	/* SawMill/bbv-specialize.scm 82 */
															long BgL_res2585z00_3758;

															BgL_res2585z00_3758 =
																BGL_CLASS_INDEX
																(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
															BgL_arg1924z00_2159 = BgL_res2585z00_3758;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_tmp1201z00_2157),
															BgL_arg1924z00_2159);
													}
													BgL_new1193z00_2149 =
														((BgL_rtl_insz00_bglt) BgL_tmp1201z00_2157);
												}
												((((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_new1193z00_2149)))->
														BgL_locz00) =
													((obj_t) (((BgL_rtl_insz00_bglt)
																COBJECT(BgL_iz00_207))->BgL_locz00)), BUNSPEC);
												((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
																	BgL_new1193z00_2149)))->BgL_z52spillz52) =
													((obj_t) (((BgL_rtl_insz00_bglt)
																COBJECT(BgL_iz00_207))->BgL_z52spillz52)),
													BUNSPEC);
												((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
																	BgL_new1193z00_2149)))->BgL_destz00) =
													((obj_t) (((BgL_rtl_insz00_bglt)
																COBJECT(BgL_iz00_207))->BgL_destz00)), BUNSPEC);
												{
													BgL_rtl_funz00_bglt BgL_auxz00_5883;

													{	/* SawMill/bbv-specialize.scm 83 */
														BgL_rtl_nopz00_bglt BgL_new1204z00_2150;

														{	/* SawMill/bbv-specialize.scm 83 */
															BgL_rtl_nopz00_bglt BgL_new1203z00_2151;

															BgL_new1203z00_2151 =
																((BgL_rtl_nopz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_nopz00_bgl))));
															{	/* SawMill/bbv-specialize.scm 83 */
																long BgL_arg1923z00_2152;

																{	/* SawMill/bbv-specialize.scm 83 */
																	long BgL_res2586z00_3762;

																	{	/* SawMill/bbv-specialize.scm 83 */
																		obj_t BgL_classz00_3761;

																		BgL_classz00_3761 =
																			BGl_rtl_nopz00zzsaw_defsz00;
																		BgL_res2586z00_3762 =
																			BGL_CLASS_INDEX(BgL_classz00_3761);
																	}
																	BgL_arg1923z00_2152 = BgL_res2586z00_3762;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1203z00_2151),
																	BgL_arg1923z00_2152);
															}
															BgL_new1204z00_2150 = BgL_new1203z00_2151;
														}
														((((BgL_rtl_funz00_bglt) COBJECT(
																		((BgL_rtl_funz00_bglt)
																			BgL_new1204z00_2150)))->BgL_locz00) =
															((obj_t) BFALSE), BUNSPEC);
														BgL_auxz00_5883 =
															((BgL_rtl_funz00_bglt) BgL_new1204z00_2150);
													}
													((((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt)
																		BgL_new1193z00_2149)))->BgL_funz00) =
														((BgL_rtl_funz00_bglt) BgL_auxz00_5883), BUNSPEC);
												}
												((((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_new1193z00_2149)))->
														BgL_argsz00) =
													((obj_t) (((BgL_rtl_insz00_bglt)
																COBJECT(BgL_iz00_207))->BgL_argsz00)), BUNSPEC);
												{
													obj_t BgL_auxz00_5902;
													BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5896;

													{
														BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5903;

														{
															obj_t BgL_auxz00_5904;

															{	/* SawMill/bbv-specialize.scm 83 */
																BgL_objectz00_bglt BgL_tmpz00_5905;

																BgL_tmpz00_5905 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_207));
																BgL_auxz00_5904 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5905);
															}
															BgL_auxz00_5903 =
																((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5904);
														}
														BgL_auxz00_5902 =
															(((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5903))->BgL_defz00);
													}
													{
														obj_t BgL_auxz00_5897;

														{	/* SawMill/bbv-specialize.scm 83 */
															BgL_objectz00_bglt BgL_tmpz00_5898;

															BgL_tmpz00_5898 =
																((BgL_objectz00_bglt) BgL_new1193z00_2149);
															BgL_auxz00_5897 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5898);
														}
														BgL_auxz00_5896 =
															((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5897);
													}
													((((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5896))->BgL_defz00) =
														((obj_t) BgL_auxz00_5902), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_5918;
													BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5912;

													{
														BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5919;

														{
															obj_t BgL_auxz00_5920;

															{	/* SawMill/bbv-specialize.scm 83 */
																BgL_objectz00_bglt BgL_tmpz00_5921;

																BgL_tmpz00_5921 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_207));
																BgL_auxz00_5920 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5921);
															}
															BgL_auxz00_5919 =
																((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5920);
														}
														BgL_auxz00_5918 =
															(((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5919))->BgL_outz00);
													}
													{
														obj_t BgL_auxz00_5913;

														{	/* SawMill/bbv-specialize.scm 83 */
															BgL_objectz00_bglt BgL_tmpz00_5914;

															BgL_tmpz00_5914 =
																((BgL_objectz00_bglt) BgL_new1193z00_2149);
															BgL_auxz00_5913 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5914);
														}
														BgL_auxz00_5912 =
															((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5913);
													}
													((((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5912))->BgL_outz00) =
														((obj_t) BgL_auxz00_5918), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_5934;
													BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5928;

													{
														BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5935;

														{
															obj_t BgL_auxz00_5936;

															{	/* SawMill/bbv-specialize.scm 83 */
																BgL_objectz00_bglt BgL_tmpz00_5937;

																BgL_tmpz00_5937 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_207));
																BgL_auxz00_5936 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5937);
															}
															BgL_auxz00_5935 =
																((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5936);
														}
														BgL_auxz00_5934 =
															(((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5935))->BgL_inz00);
													}
													{
														obj_t BgL_auxz00_5929;

														{	/* SawMill/bbv-specialize.scm 83 */
															BgL_objectz00_bglt BgL_tmpz00_5930;

															BgL_tmpz00_5930 =
																((BgL_objectz00_bglt) BgL_new1193z00_2149);
															BgL_auxz00_5929 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5930);
														}
														BgL_auxz00_5928 =
															((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5929);
													}
													((((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5928))->BgL_inz00) =
														((obj_t) BgL_auxz00_5934), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_5950;
													BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5944;

													{
														BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5951;

														{
															obj_t BgL_auxz00_5952;

															{	/* SawMill/bbv-specialize.scm 83 */
																BgL_objectz00_bglt BgL_tmpz00_5953;

																BgL_tmpz00_5953 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_207));
																BgL_auxz00_5952 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5953);
															}
															BgL_auxz00_5951 =
																((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5952);
														}
														BgL_auxz00_5950 =
															(((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5951))->BgL_z52hashz52);
													}
													{
														obj_t BgL_auxz00_5945;

														{	/* SawMill/bbv-specialize.scm 83 */
															BgL_objectz00_bglt BgL_tmpz00_5946;

															BgL_tmpz00_5946 =
																((BgL_objectz00_bglt) BgL_new1193z00_2149);
															BgL_auxz00_5945 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5946);
														}
														BgL_auxz00_5944 =
															((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5945);
													}
													((((BgL_rtl_inszf2bbvzf2_bglt)
																COBJECT(BgL_auxz00_5944))->BgL_z52hashz52) =
														((obj_t) BgL_auxz00_5950), BUNSPEC);
												}
												BgL_sz00_2145 = BgL_new1193z00_2149;
											}
											{	/* SawMill/bbv-specialize.scm 84 */
												int BgL_res2587z00_3773;

												{	/* SawMill/bbv-specialize.scm 84 */
													int BgL_tmpz00_5960;

													BgL_tmpz00_5960 = (int) (((long) 2));
													BgL_res2587z00_3773 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_5960);
												} BgL_res2587z00_3773;
											}
											{	/* SawMill/bbv-specialize.scm 84 */
												int BgL_tmpz00_5963;

												BgL_tmpz00_5963 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_5963, BgL_ctxz00_208);
											}
											return ((obj_t) BgL_sz00_2145);
										}
									else
										{	/* SawMill/bbv-specialize.scm 80 */
											if (
												(BgL_casezd2valuezd2_2143 ==
													CNST_TABLE_REF(((long) 2))))
												{	/* SawMill/bbv-specialize.scm 87 */
													BgL_rtl_ifeqz00_bglt BgL_i1206z00_2164;

													BgL_i1206z00_2164 =
														((BgL_rtl_ifeqz00_bglt)
														(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
															BgL_funz00));
													{	/* SawMill/bbv-specialize.scm 88 */
														BgL_rtl_insz00_bglt BgL_sz00_2165;

														{	/* SawMill/bbv-specialize.scm 88 */
															BgL_rtl_insz00_bglt BgL_new1207z00_2169;

															{	/* SawMill/bbv-specialize.scm 88 */
																BgL_rtl_insz00_bglt BgL_tmp1215z00_2177;
																BgL_rtl_inszf2bbvzf2_bglt BgL_wide1216z00_2178;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_5972;

																	{	/* SawMill/bbv-specialize.scm 88 */
																		BgL_rtl_insz00_bglt BgL_new1214z00_2180;

																		BgL_new1214z00_2180 =
																			((BgL_rtl_insz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_insz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 88 */
																			long BgL_arg1929z00_2181;

																			{	/* SawMill/bbv-specialize.scm 88 */
																				long BgL_res2589z00_3777;

																				BgL_res2589z00_3777 =
																					BGL_CLASS_INDEX
																					(BGl_rtl_insz00zzsaw_defsz00);
																				BgL_arg1929z00_2181 =
																					BgL_res2589z00_3777;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1214z00_2180),
																				BgL_arg1929z00_2181);
																		}
																		{	/* SawMill/bbv-specialize.scm 88 */
																			BgL_objectz00_bglt BgL_tmpz00_5977;

																			BgL_tmpz00_5977 =
																				((BgL_objectz00_bglt)
																				BgL_new1214z00_2180);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5977,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1214z00_2180);
																		BgL_auxz00_5972 = BgL_new1214z00_2180;
																	}
																	BgL_tmp1215z00_2177 =
																		((BgL_rtl_insz00_bglt) BgL_auxz00_5972);
																}
																BgL_wide1216z00_2178 =
																	((BgL_rtl_inszf2bbvzf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_rtl_inszf2bbvzf2_bgl))));
																{	/* SawMill/bbv-specialize.scm 88 */
																	obj_t BgL_auxz00_5985;
																	BgL_objectz00_bglt BgL_tmpz00_5983;

																	BgL_auxz00_5985 =
																		((obj_t) BgL_wide1216z00_2178);
																	BgL_tmpz00_5983 =
																		((BgL_objectz00_bglt) BgL_tmp1215z00_2177);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5983,
																		BgL_auxz00_5985);
																}
																((BgL_objectz00_bglt) BgL_tmp1215z00_2177);
																{	/* SawMill/bbv-specialize.scm 88 */
																	long BgL_arg1928z00_2179;

																	{	/* SawMill/bbv-specialize.scm 88 */
																		long BgL_res2590z00_3783;

																		BgL_res2590z00_3783 =
																			BGL_CLASS_INDEX
																			(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																		BgL_arg1928z00_2179 = BgL_res2590z00_3783;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_tmp1215z00_2177),
																		BgL_arg1928z00_2179);
																}
																BgL_new1207z00_2169 =
																	((BgL_rtl_insz00_bglt) BgL_tmp1215z00_2177);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1207z00_2169)))->BgL_locz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_locz00)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1207z00_2169)))->
																	BgL_z52spillz52) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_z52spillz52)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1207z00_2169)))->BgL_destz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_destz00)),
																BUNSPEC);
															{
																BgL_rtl_funz00_bglt BgL_auxz00_6002;

																{	/* SawMill/bbv-specialize.scm 89 */
																	BgL_rtl_goz00_bglt BgL_new1218z00_2170;

																	{	/* SawMill/bbv-specialize.scm 89 */
																		BgL_rtl_goz00_bglt BgL_new1217z00_2171;

																		BgL_new1217z00_2171 =
																			((BgL_rtl_goz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_goz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 89 */
																			long BgL_arg1927z00_2172;

																			{	/* SawMill/bbv-specialize.scm 89 */
																				long BgL_res2591z00_3787;

																				{	/* SawMill/bbv-specialize.scm 89 */
																					obj_t BgL_classz00_3786;

																					BgL_classz00_3786 =
																						BGl_rtl_goz00zzsaw_defsz00;
																					BgL_res2591z00_3787 =
																						BGL_CLASS_INDEX(BgL_classz00_3786);
																				}
																				BgL_arg1927z00_2172 =
																					BgL_res2591z00_3787;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1217z00_2171),
																				BgL_arg1927z00_2172);
																		}
																		BgL_new1218z00_2170 = BgL_new1217z00_2171;
																	}
																	((((BgL_rtl_funz00_bglt) COBJECT(
																					((BgL_rtl_funz00_bglt)
																						BgL_new1218z00_2170)))->
																			BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
																	((((BgL_rtl_goz00_bglt)
																				COBJECT(BgL_new1218z00_2170))->
																			BgL_toz00) =
																		((BgL_blockz00_bglt) ((
																					(BgL_rtl_ifeqz00_bglt)
																					COBJECT(BgL_i1206z00_2164))->
																				BgL_thenz00)), BUNSPEC);
																	BgL_auxz00_6002 =
																		((BgL_rtl_funz00_bglt) BgL_new1218z00_2170);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1207z00_2169)))->BgL_funz00) =
																	((BgL_rtl_funz00_bglt) BgL_auxz00_6002),
																	BUNSPEC);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1207z00_2169)))->BgL_argsz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_argsz00)),
																BUNSPEC);
															{
																obj_t BgL_auxz00_6023;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6017;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6024;

																	{
																		obj_t BgL_auxz00_6025;

																		{	/* SawMill/bbv-specialize.scm 89 */
																			BgL_objectz00_bglt BgL_tmpz00_6026;

																			BgL_tmpz00_6026 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6025 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6026);
																		}
																		BgL_auxz00_6024 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6025);
																	}
																	BgL_auxz00_6023 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6024))->BgL_defz00);
																}
																{
																	obj_t BgL_auxz00_6018;

																	{	/* SawMill/bbv-specialize.scm 89 */
																		BgL_objectz00_bglt BgL_tmpz00_6019;

																		BgL_tmpz00_6019 =
																			((BgL_objectz00_bglt)
																			BgL_new1207z00_2169);
																		BgL_auxz00_6018 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6019);
																	}
																	BgL_auxz00_6017 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6018);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6017))->BgL_defz00) =
																	((obj_t) BgL_auxz00_6023), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6039;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6033;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6040;

																	{
																		obj_t BgL_auxz00_6041;

																		{	/* SawMill/bbv-specialize.scm 89 */
																			BgL_objectz00_bglt BgL_tmpz00_6042;

																			BgL_tmpz00_6042 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6041 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6042);
																		}
																		BgL_auxz00_6040 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6041);
																	}
																	BgL_auxz00_6039 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6040))->BgL_outz00);
																}
																{
																	obj_t BgL_auxz00_6034;

																	{	/* SawMill/bbv-specialize.scm 89 */
																		BgL_objectz00_bglt BgL_tmpz00_6035;

																		BgL_tmpz00_6035 =
																			((BgL_objectz00_bglt)
																			BgL_new1207z00_2169);
																		BgL_auxz00_6034 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6035);
																	}
																	BgL_auxz00_6033 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6034);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6033))->BgL_outz00) =
																	((obj_t) BgL_auxz00_6039), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6055;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6049;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6056;

																	{
																		obj_t BgL_auxz00_6057;

																		{	/* SawMill/bbv-specialize.scm 89 */
																			BgL_objectz00_bglt BgL_tmpz00_6058;

																			BgL_tmpz00_6058 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6057 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6058);
																		}
																		BgL_auxz00_6056 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6057);
																	}
																	BgL_auxz00_6055 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6056))->BgL_inz00);
																}
																{
																	obj_t BgL_auxz00_6050;

																	{	/* SawMill/bbv-specialize.scm 89 */
																		BgL_objectz00_bglt BgL_tmpz00_6051;

																		BgL_tmpz00_6051 =
																			((BgL_objectz00_bglt)
																			BgL_new1207z00_2169);
																		BgL_auxz00_6050 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6051);
																	}
																	BgL_auxz00_6049 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6050);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6049))->BgL_inz00) =
																	((obj_t) BgL_auxz00_6055), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6071;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6065;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6072;

																	{
																		obj_t BgL_auxz00_6073;

																		{	/* SawMill/bbv-specialize.scm 89 */
																			BgL_objectz00_bglt BgL_tmpz00_6074;

																			BgL_tmpz00_6074 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6073 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6074);
																		}
																		BgL_auxz00_6072 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6073);
																	}
																	BgL_auxz00_6071 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6072))->
																		BgL_z52hashz52);
																}
																{
																	obj_t BgL_auxz00_6066;

																	{	/* SawMill/bbv-specialize.scm 89 */
																		BgL_objectz00_bglt BgL_tmpz00_6067;

																		BgL_tmpz00_6067 =
																			((BgL_objectz00_bglt)
																			BgL_new1207z00_2169);
																		BgL_auxz00_6066 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6067);
																	}
																	BgL_auxz00_6065 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6066);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6065))->
																		BgL_z52hashz52) =
																	((obj_t) BgL_auxz00_6071), BUNSPEC);
															}
															BgL_sz00_2165 = BgL_new1207z00_2169;
														}
														{	/* SawMill/bbv-specialize.scm 91 */
															int BgL_res2592z00_3798;

															{	/* SawMill/bbv-specialize.scm 91 */
																int BgL_tmpz00_6081;

																BgL_tmpz00_6081 = (int) (((long) 2));
																BgL_res2592z00_3798 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6081);
															} BgL_res2592z00_3798;
														}
														{	/* SawMill/bbv-specialize.scm 91 */
															int BgL_tmpz00_6084;

															BgL_tmpz00_6084 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_6084,
																BgL_ctxz00_208);
														}
														return ((obj_t) BgL_sz00_2165);
													}
												}
											else
												{	/* SawMill/bbv-specialize.scm 94 */
													BgL_rtl_insz00_bglt BgL_sz00_2183;

													{	/* SawMill/bbv-specialize.scm 94 */
														BgL_rtl_insz00_bglt BgL_new1220z00_2187;

														{	/* SawMill/bbv-specialize.scm 94 */
															BgL_rtl_insz00_bglt BgL_tmp1228z00_2197;
															BgL_rtl_inszf2bbvzf2_bglt BgL_wide1229z00_2198;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_6088;

																{	/* SawMill/bbv-specialize.scm 94 */
																	BgL_rtl_insz00_bglt BgL_new1227z00_2200;

																	BgL_new1227z00_2200 =
																		((BgL_rtl_insz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_insz00_bgl))));
																	{	/* SawMill/bbv-specialize.scm 94 */
																		long BgL_arg1932z00_2201;

																		{	/* SawMill/bbv-specialize.scm 94 */
																			long BgL_res2593z00_3800;

																			BgL_res2593z00_3800 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_insz00zzsaw_defsz00);
																			BgL_arg1932z00_2201 = BgL_res2593z00_3800;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1227z00_2200),
																			BgL_arg1932z00_2201);
																	}
																	{	/* SawMill/bbv-specialize.scm 94 */
																		BgL_objectz00_bglt BgL_tmpz00_6093;

																		BgL_tmpz00_6093 =
																			((BgL_objectz00_bglt)
																			BgL_new1227z00_2200);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6093,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1227z00_2200);
																	BgL_auxz00_6088 = BgL_new1227z00_2200;
																}
																BgL_tmp1228z00_2197 =
																	((BgL_rtl_insz00_bglt) BgL_auxz00_6088);
															}
															BgL_wide1229z00_2198 =
																((BgL_rtl_inszf2bbvzf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_inszf2bbvzf2_bgl))));
															{	/* SawMill/bbv-specialize.scm 94 */
																obj_t BgL_auxz00_6101;
																BgL_objectz00_bglt BgL_tmpz00_6099;

																BgL_auxz00_6101 =
																	((obj_t) BgL_wide1229z00_2198);
																BgL_tmpz00_6099 =
																	((BgL_objectz00_bglt) BgL_tmp1228z00_2197);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6099,
																	BgL_auxz00_6101);
															}
															((BgL_objectz00_bglt) BgL_tmp1228z00_2197);
															{	/* SawMill/bbv-specialize.scm 94 */
																long BgL_arg1931z00_2199;

																{	/* SawMill/bbv-specialize.scm 94 */
																	long BgL_res2594z00_3806;

																	BgL_res2594z00_3806 =
																		BGL_CLASS_INDEX
																		(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																	BgL_arg1931z00_2199 = BgL_res2594z00_3806;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_tmp1228z00_2197),
																	BgL_arg1931z00_2199);
															}
															BgL_new1220z00_2187 =
																((BgL_rtl_insz00_bglt) BgL_tmp1228z00_2197);
														}
														((((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			BgL_new1220z00_2187)))->BgL_locz00) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_207))->BgL_locz00)),
															BUNSPEC);
														((((BgL_rtl_insz00_bglt)
																	COBJECT(((BgL_rtl_insz00_bglt)
																			BgL_new1220z00_2187)))->BgL_z52spillz52) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_207))->BgL_z52spillz52)),
															BUNSPEC);
														((((BgL_rtl_insz00_bglt)
																	COBJECT(((BgL_rtl_insz00_bglt)
																			BgL_new1220z00_2187)))->BgL_destz00) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_207))->BgL_destz00)),
															BUNSPEC);
														{
															BgL_rtl_funz00_bglt BgL_auxz00_6118;

															{	/* SawMill/bbv-specialize.scm 95 */
																BgL_rtl_funz00_bglt BgL_duplicated1232z00_2188;
																BgL_rtl_ifeqz00_bglt BgL_new1230z00_2189;

																BgL_duplicated1232z00_2188 =
																	(((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_207))->BgL_funz00);
																{	/* SawMill/bbv-specialize.scm 95 */
																	BgL_rtl_ifeqz00_bglt BgL_new1234z00_2191;

																	BgL_new1234z00_2191 =
																		((BgL_rtl_ifeqz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_ifeqz00_bgl))));
																	{	/* SawMill/bbv-specialize.scm 95 */
																		long BgL_arg1930z00_2192;

																		{	/* SawMill/bbv-specialize.scm 95 */
																			long BgL_res2595z00_3810;

																			{	/* SawMill/bbv-specialize.scm 95 */
																				obj_t BgL_classz00_3809;

																				BgL_classz00_3809 =
																					BGl_rtl_ifeqz00zzsaw_defsz00;
																				BgL_res2595z00_3810 =
																					BGL_CLASS_INDEX(BgL_classz00_3809);
																			}
																			BgL_arg1930z00_2192 = BgL_res2595z00_3810;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1234z00_2191),
																			BgL_arg1930z00_2192);
																	}
																	BgL_new1230z00_2189 = BgL_new1234z00_2191;
																}
																((((BgL_rtl_funz00_bglt) COBJECT(
																				((BgL_rtl_funz00_bglt)
																					BgL_new1230z00_2189)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_funz00_bglt)
																				COBJECT(BgL_duplicated1232z00_2188))->
																			BgL_locz00)), BUNSPEC);
																((((BgL_rtl_ifeqz00_bglt)
																			COBJECT(BgL_new1230z00_2189))->
																		BgL_thenz00) =
																	((BgL_blockz00_bglt) (((BgL_rtl_ifeqz00_bglt)
																				COBJECT(((BgL_rtl_ifeqz00_bglt)
																						BgL_duplicated1232z00_2188)))->
																			BgL_thenz00)), BUNSPEC);
																BgL_auxz00_6118 =
																	((BgL_rtl_funz00_bglt) BgL_new1230z00_2189);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1220z00_2187)))->BgL_funz00) =
																((BgL_rtl_funz00_bglt) BgL_auxz00_6118),
																BUNSPEC);
														}
														((((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			BgL_new1220z00_2187)))->BgL_argsz00) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_207))->BgL_argsz00)),
															BUNSPEC);
														{
															obj_t BgL_auxz00_6142;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6136;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6143;

																{
																	obj_t BgL_auxz00_6144;

																	{	/* SawMill/bbv-specialize.scm 95 */
																		BgL_objectz00_bglt BgL_tmpz00_6145;

																		BgL_tmpz00_6145 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_207));
																		BgL_auxz00_6144 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6145);
																	}
																	BgL_auxz00_6143 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6144);
																}
																BgL_auxz00_6142 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6143))->BgL_defz00);
															}
															{
																obj_t BgL_auxz00_6137;

																{	/* SawMill/bbv-specialize.scm 95 */
																	BgL_objectz00_bglt BgL_tmpz00_6138;

																	BgL_tmpz00_6138 =
																		((BgL_objectz00_bglt) BgL_new1220z00_2187);
																	BgL_auxz00_6137 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6138);
																}
																BgL_auxz00_6136 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6137);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6136))->BgL_defz00) =
																((obj_t) BgL_auxz00_6142), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6158;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6152;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6159;

																{
																	obj_t BgL_auxz00_6160;

																	{	/* SawMill/bbv-specialize.scm 95 */
																		BgL_objectz00_bglt BgL_tmpz00_6161;

																		BgL_tmpz00_6161 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_207));
																		BgL_auxz00_6160 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6161);
																	}
																	BgL_auxz00_6159 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6160);
																}
																BgL_auxz00_6158 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6159))->BgL_outz00);
															}
															{
																obj_t BgL_auxz00_6153;

																{	/* SawMill/bbv-specialize.scm 95 */
																	BgL_objectz00_bglt BgL_tmpz00_6154;

																	BgL_tmpz00_6154 =
																		((BgL_objectz00_bglt) BgL_new1220z00_2187);
																	BgL_auxz00_6153 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6154);
																}
																BgL_auxz00_6152 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6153);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6152))->BgL_outz00) =
																((obj_t) BgL_auxz00_6158), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6174;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6168;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6175;

																{
																	obj_t BgL_auxz00_6176;

																	{	/* SawMill/bbv-specialize.scm 95 */
																		BgL_objectz00_bglt BgL_tmpz00_6177;

																		BgL_tmpz00_6177 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_207));
																		BgL_auxz00_6176 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6177);
																	}
																	BgL_auxz00_6175 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6176);
																}
																BgL_auxz00_6174 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6175))->BgL_inz00);
															}
															{
																obj_t BgL_auxz00_6169;

																{	/* SawMill/bbv-specialize.scm 95 */
																	BgL_objectz00_bglt BgL_tmpz00_6170;

																	BgL_tmpz00_6170 =
																		((BgL_objectz00_bglt) BgL_new1220z00_2187);
																	BgL_auxz00_6169 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6170);
																}
																BgL_auxz00_6168 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6169);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6168))->BgL_inz00) =
																((obj_t) BgL_auxz00_6174), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6190;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6184;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6191;

																{
																	obj_t BgL_auxz00_6192;

																	{	/* SawMill/bbv-specialize.scm 95 */
																		BgL_objectz00_bglt BgL_tmpz00_6193;

																		BgL_tmpz00_6193 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_207));
																		BgL_auxz00_6192 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6193);
																	}
																	BgL_auxz00_6191 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6192);
																}
																BgL_auxz00_6190 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6191))->BgL_z52hashz52);
															}
															{
																obj_t BgL_auxz00_6185;

																{	/* SawMill/bbv-specialize.scm 95 */
																	BgL_objectz00_bglt BgL_tmpz00_6186;

																	BgL_tmpz00_6186 =
																		((BgL_objectz00_bglt) BgL_new1220z00_2187);
																	BgL_auxz00_6185 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6186);
																}
																BgL_auxz00_6184 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6185);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6184))->BgL_z52hashz52) =
																((obj_t) BgL_auxz00_6190), BUNSPEC);
														}
														BgL_sz00_2183 = BgL_new1220z00_2187;
													}
													{	/* SawMill/bbv-specialize.scm 96 */
														int BgL_res2596z00_3821;

														{	/* SawMill/bbv-specialize.scm 96 */
															int BgL_tmpz00_6200;

															BgL_tmpz00_6200 = (int) (((long) 2));
															BgL_res2596z00_3821 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6200);
														} BgL_res2596z00_3821;
													}
													{	/* SawMill/bbv-specialize.scm 96 */
														int BgL_tmpz00_6203;

														BgL_tmpz00_6203 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_6203,
															BgL_ctxz00_208);
													}
													return ((obj_t) BgL_sz00_2183);
												}
										}
								}
							else
								{	/* SawMill/bbv-specialize.scm 78 */
									if (BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2
										(BgL_iz00_207))
										{	/* SawMill/bbv-specialize.scm 99 */
											obj_t BgL_casezd2valuezd2_2205;

											BgL_casezd2valuezd2_2205 =
												BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75(CAR(
													(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
														BgL_argsz00)), BgL_ctxz00_208);
											if ((BgL_casezd2valuezd2_2205 ==
													CNST_TABLE_REF(((long) 1))))
												{	/* SawMill/bbv-specialize.scm 102 */
													BgL_rtl_ifeqz00_bglt BgL_i1236z00_2208;

													BgL_i1236z00_2208 =
														((BgL_rtl_ifeqz00_bglt)
														(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
															BgL_funz00));
													{	/* SawMill/bbv-specialize.scm 103 */
														BgL_rtl_insz00_bglt BgL_sz00_2209;

														{	/* SawMill/bbv-specialize.scm 103 */
															BgL_rtl_insz00_bglt BgL_new1237z00_2213;

															{	/* SawMill/bbv-specialize.scm 103 */
																BgL_rtl_insz00_bglt BgL_tmp1246z00_2221;
																BgL_rtl_inszf2bbvzf2_bglt BgL_wide1247z00_2222;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6217;

																	{	/* SawMill/bbv-specialize.scm 103 */
																		BgL_rtl_insz00_bglt BgL_new1245z00_2224;

																		BgL_new1245z00_2224 =
																			((BgL_rtl_insz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_insz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 103 */
																			long BgL_arg1939z00_2225;

																			{	/* SawMill/bbv-specialize.scm 103 */
																				long BgL_res2598z00_3827;

																				BgL_res2598z00_3827 =
																					BGL_CLASS_INDEX
																					(BGl_rtl_insz00zzsaw_defsz00);
																				BgL_arg1939z00_2225 =
																					BgL_res2598z00_3827;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1245z00_2224),
																				BgL_arg1939z00_2225);
																		}
																		{	/* SawMill/bbv-specialize.scm 103 */
																			BgL_objectz00_bglt BgL_tmpz00_6222;

																			BgL_tmpz00_6222 =
																				((BgL_objectz00_bglt)
																				BgL_new1245z00_2224);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6222,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1245z00_2224);
																		BgL_auxz00_6217 = BgL_new1245z00_2224;
																	}
																	BgL_tmp1246z00_2221 =
																		((BgL_rtl_insz00_bglt) BgL_auxz00_6217);
																}
																BgL_wide1247z00_2222 =
																	((BgL_rtl_inszf2bbvzf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_rtl_inszf2bbvzf2_bgl))));
																{	/* SawMill/bbv-specialize.scm 103 */
																	obj_t BgL_auxz00_6230;
																	BgL_objectz00_bglt BgL_tmpz00_6228;

																	BgL_auxz00_6230 =
																		((obj_t) BgL_wide1247z00_2222);
																	BgL_tmpz00_6228 =
																		((BgL_objectz00_bglt) BgL_tmp1246z00_2221);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6228,
																		BgL_auxz00_6230);
																}
																((BgL_objectz00_bglt) BgL_tmp1246z00_2221);
																{	/* SawMill/bbv-specialize.scm 103 */
																	long BgL_arg1938z00_2223;

																	{	/* SawMill/bbv-specialize.scm 103 */
																		long BgL_res2599z00_3833;

																		BgL_res2599z00_3833 =
																			BGL_CLASS_INDEX
																			(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																		BgL_arg1938z00_2223 = BgL_res2599z00_3833;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_tmp1246z00_2221),
																		BgL_arg1938z00_2223);
																}
																BgL_new1237z00_2213 =
																	((BgL_rtl_insz00_bglt) BgL_tmp1246z00_2221);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1237z00_2213)))->BgL_locz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_locz00)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1237z00_2213)))->
																	BgL_z52spillz52) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_z52spillz52)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1237z00_2213)))->BgL_destz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_destz00)),
																BUNSPEC);
															{
																BgL_rtl_funz00_bglt BgL_auxz00_6247;

																{	/* SawMill/bbv-specialize.scm 104 */
																	BgL_rtl_goz00_bglt BgL_new1249z00_2214;

																	{	/* SawMill/bbv-specialize.scm 104 */
																		BgL_rtl_goz00_bglt BgL_new1248z00_2215;

																		BgL_new1248z00_2215 =
																			((BgL_rtl_goz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_goz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 104 */
																			long BgL_arg1937z00_2216;

																			{	/* SawMill/bbv-specialize.scm 104 */
																				long BgL_res2600z00_3837;

																				{	/* SawMill/bbv-specialize.scm 104 */
																					obj_t BgL_classz00_3836;

																					BgL_classz00_3836 =
																						BGl_rtl_goz00zzsaw_defsz00;
																					BgL_res2600z00_3837 =
																						BGL_CLASS_INDEX(BgL_classz00_3836);
																				}
																				BgL_arg1937z00_2216 =
																					BgL_res2600z00_3837;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1248z00_2215),
																				BgL_arg1937z00_2216);
																		}
																		BgL_new1249z00_2214 = BgL_new1248z00_2215;
																	}
																	((((BgL_rtl_funz00_bglt) COBJECT(
																					((BgL_rtl_funz00_bglt)
																						BgL_new1249z00_2214)))->
																			BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
																	((((BgL_rtl_goz00_bglt)
																				COBJECT(BgL_new1249z00_2214))->
																			BgL_toz00) =
																		((BgL_blockz00_bglt) ((
																					(BgL_rtl_ifeqz00_bglt)
																					COBJECT(BgL_i1236z00_2208))->
																				BgL_thenz00)), BUNSPEC);
																	BgL_auxz00_6247 =
																		((BgL_rtl_funz00_bglt) BgL_new1249z00_2214);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1237z00_2213)))->BgL_funz00) =
																	((BgL_rtl_funz00_bglt) BgL_auxz00_6247),
																	BUNSPEC);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1237z00_2213)))->BgL_argsz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_argsz00)),
																BUNSPEC);
															{
																obj_t BgL_auxz00_6268;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6262;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6269;

																	{
																		obj_t BgL_auxz00_6270;

																		{	/* SawMill/bbv-specialize.scm 104 */
																			BgL_objectz00_bglt BgL_tmpz00_6271;

																			BgL_tmpz00_6271 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6270 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6271);
																		}
																		BgL_auxz00_6269 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6270);
																	}
																	BgL_auxz00_6268 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6269))->BgL_defz00);
																}
																{
																	obj_t BgL_auxz00_6263;

																	{	/* SawMill/bbv-specialize.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_6264;

																		BgL_tmpz00_6264 =
																			((BgL_objectz00_bglt)
																			BgL_new1237z00_2213);
																		BgL_auxz00_6263 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6264);
																	}
																	BgL_auxz00_6262 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6263);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6262))->BgL_defz00) =
																	((obj_t) BgL_auxz00_6268), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6284;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6278;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6285;

																	{
																		obj_t BgL_auxz00_6286;

																		{	/* SawMill/bbv-specialize.scm 104 */
																			BgL_objectz00_bglt BgL_tmpz00_6287;

																			BgL_tmpz00_6287 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6286 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6287);
																		}
																		BgL_auxz00_6285 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6286);
																	}
																	BgL_auxz00_6284 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6285))->BgL_outz00);
																}
																{
																	obj_t BgL_auxz00_6279;

																	{	/* SawMill/bbv-specialize.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_6280;

																		BgL_tmpz00_6280 =
																			((BgL_objectz00_bglt)
																			BgL_new1237z00_2213);
																		BgL_auxz00_6279 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6280);
																	}
																	BgL_auxz00_6278 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6279);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6278))->BgL_outz00) =
																	((obj_t) BgL_auxz00_6284), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6300;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6294;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6301;

																	{
																		obj_t BgL_auxz00_6302;

																		{	/* SawMill/bbv-specialize.scm 104 */
																			BgL_objectz00_bglt BgL_tmpz00_6303;

																			BgL_tmpz00_6303 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6302 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6303);
																		}
																		BgL_auxz00_6301 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6302);
																	}
																	BgL_auxz00_6300 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6301))->BgL_inz00);
																}
																{
																	obj_t BgL_auxz00_6295;

																	{	/* SawMill/bbv-specialize.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_6296;

																		BgL_tmpz00_6296 =
																			((BgL_objectz00_bglt)
																			BgL_new1237z00_2213);
																		BgL_auxz00_6295 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6296);
																	}
																	BgL_auxz00_6294 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6295);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6294))->BgL_inz00) =
																	((obj_t) BgL_auxz00_6300), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_6316;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6310;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6317;

																	{
																		obj_t BgL_auxz00_6318;

																		{	/* SawMill/bbv-specialize.scm 104 */
																			BgL_objectz00_bglt BgL_tmpz00_6319;

																			BgL_tmpz00_6319 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_207));
																			BgL_auxz00_6318 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6319);
																		}
																		BgL_auxz00_6317 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6318);
																	}
																	BgL_auxz00_6316 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6317))->
																		BgL_z52hashz52);
																}
																{
																	obj_t BgL_auxz00_6311;

																	{	/* SawMill/bbv-specialize.scm 104 */
																		BgL_objectz00_bglt BgL_tmpz00_6312;

																		BgL_tmpz00_6312 =
																			((BgL_objectz00_bglt)
																			BgL_new1237z00_2213);
																		BgL_auxz00_6311 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6312);
																	}
																	BgL_auxz00_6310 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6311);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_6310))->
																		BgL_z52hashz52) =
																	((obj_t) BgL_auxz00_6316), BUNSPEC);
															}
															BgL_sz00_2209 = BgL_new1237z00_2213;
														}
														{	/* SawMill/bbv-specialize.scm 106 */
															int BgL_res2601z00_3848;

															{	/* SawMill/bbv-specialize.scm 106 */
																int BgL_tmpz00_6326;

																BgL_tmpz00_6326 = (int) (((long) 2));
																BgL_res2601z00_3848 =
																	BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6326);
															} BgL_res2601z00_3848;
														}
														{	/* SawMill/bbv-specialize.scm 106 */
															int BgL_tmpz00_6329;

															BgL_tmpz00_6329 = (int) (((long) 1));
															BGL_MVALUES_VAL_SET(BgL_tmpz00_6329,
																BgL_ctxz00_208);
														}
														return ((obj_t) BgL_sz00_2209);
													}
												}
											else
												{	/* SawMill/bbv-specialize.scm 99 */
													if (
														(BgL_casezd2valuezd2_2205 ==
															CNST_TABLE_REF(((long) 2))))
														{	/* SawMill/bbv-specialize.scm 108 */
															BgL_rtl_insz00_bglt BgL_sz00_2227;

															{	/* SawMill/bbv-specialize.scm 108 */
																BgL_rtl_insz00_bglt BgL_new1250z00_2231;

																{	/* SawMill/bbv-specialize.scm 108 */
																	BgL_rtl_insz00_bglt BgL_tmp1258z00_2239;
																	BgL_rtl_inszf2bbvzf2_bglt
																		BgL_wide1259z00_2240;
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_6336;

																		{	/* SawMill/bbv-specialize.scm 108 */
																			BgL_rtl_insz00_bglt BgL_new1257z00_2242;

																			BgL_new1257z00_2242 =
																				((BgL_rtl_insz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_insz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 108 */
																				long BgL_arg1943z00_2243;

																				{	/* SawMill/bbv-specialize.scm 108 */
																					long BgL_res2603z00_3852;

																					BgL_res2603z00_3852 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_insz00zzsaw_defsz00);
																					BgL_arg1943z00_2243 =
																						BgL_res2603z00_3852;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1257z00_2242),
																					BgL_arg1943z00_2243);
																			}
																			{	/* SawMill/bbv-specialize.scm 108 */
																				BgL_objectz00_bglt BgL_tmpz00_6341;

																				BgL_tmpz00_6341 =
																					((BgL_objectz00_bglt)
																					BgL_new1257z00_2242);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6341,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1257z00_2242);
																			BgL_auxz00_6336 = BgL_new1257z00_2242;
																		}
																		BgL_tmp1258z00_2239 =
																			((BgL_rtl_insz00_bglt) BgL_auxz00_6336);
																	}
																	BgL_wide1259z00_2240 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_inszf2bbvzf2_bgl))));
																	{	/* SawMill/bbv-specialize.scm 108 */
																		obj_t BgL_auxz00_6349;
																		BgL_objectz00_bglt BgL_tmpz00_6347;

																		BgL_auxz00_6349 =
																			((obj_t) BgL_wide1259z00_2240);
																		BgL_tmpz00_6347 =
																			((BgL_objectz00_bglt)
																			BgL_tmp1258z00_2239);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6347,
																			BgL_auxz00_6349);
																	}
																	((BgL_objectz00_bglt) BgL_tmp1258z00_2239);
																	{	/* SawMill/bbv-specialize.scm 108 */
																		long BgL_arg1942z00_2241;

																		{	/* SawMill/bbv-specialize.scm 108 */
																			long BgL_res2604z00_3858;

																			BgL_res2604z00_3858 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																			BgL_arg1942z00_2241 = BgL_res2604z00_3858;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_tmp1258z00_2239),
																			BgL_arg1942z00_2241);
																	}
																	BgL_new1250z00_2231 =
																		((BgL_rtl_insz00_bglt) BgL_tmp1258z00_2239);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1250z00_2231)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1250z00_2231)))->
																		BgL_z52spillz52) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->
																			BgL_z52spillz52)), BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1250z00_2231)))->BgL_destz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_destz00)),
																	BUNSPEC);
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_6366;

																	{	/* SawMill/bbv-specialize.scm 109 */
																		BgL_rtl_nopz00_bglt BgL_new1261z00_2232;

																		{	/* SawMill/bbv-specialize.scm 109 */
																			BgL_rtl_nopz00_bglt BgL_new1260z00_2233;

																			BgL_new1260z00_2233 =
																				((BgL_rtl_nopz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_nopz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 109 */
																				long BgL_arg1941z00_2234;

																				{	/* SawMill/bbv-specialize.scm 109 */
																					long BgL_res2605z00_3862;

																					{	/* SawMill/bbv-specialize.scm 109 */
																						obj_t BgL_classz00_3861;

																						BgL_classz00_3861 =
																							BGl_rtl_nopz00zzsaw_defsz00;
																						BgL_res2605z00_3862 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_3861);
																					}
																					BgL_arg1941z00_2234 =
																						BgL_res2605z00_3862;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1260z00_2233),
																					BgL_arg1941z00_2234);
																			}
																			BgL_new1261z00_2232 = BgL_new1260z00_2233;
																		}
																		((((BgL_rtl_funz00_bglt) COBJECT(
																						((BgL_rtl_funz00_bglt)
																							BgL_new1261z00_2232)))->
																				BgL_locz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		BgL_auxz00_6366 =
																			((BgL_rtl_funz00_bglt)
																			BgL_new1261z00_2232);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1250z00_2231)))->
																			BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_6366),
																		BUNSPEC);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1250z00_2231)))->BgL_argsz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_argsz00)),
																	BUNSPEC);
																{
																	obj_t BgL_auxz00_6385;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6379;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6386;

																		{
																			obj_t BgL_auxz00_6387;

																			{	/* SawMill/bbv-specialize.scm 109 */
																				BgL_objectz00_bglt BgL_tmpz00_6388;

																				BgL_tmpz00_6388 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6387 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6388);
																			}
																			BgL_auxz00_6386 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6387);
																		}
																		BgL_auxz00_6385 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6386))->BgL_defz00);
																	}
																	{
																		obj_t BgL_auxz00_6380;

																		{	/* SawMill/bbv-specialize.scm 109 */
																			BgL_objectz00_bglt BgL_tmpz00_6381;

																			BgL_tmpz00_6381 =
																				((BgL_objectz00_bglt)
																				BgL_new1250z00_2231);
																			BgL_auxz00_6380 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6381);
																		}
																		BgL_auxz00_6379 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6380);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6379))->BgL_defz00) =
																		((obj_t) BgL_auxz00_6385), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6401;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6395;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6402;

																		{
																			obj_t BgL_auxz00_6403;

																			{	/* SawMill/bbv-specialize.scm 109 */
																				BgL_objectz00_bglt BgL_tmpz00_6404;

																				BgL_tmpz00_6404 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6403 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6404);
																			}
																			BgL_auxz00_6402 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6403);
																		}
																		BgL_auxz00_6401 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6402))->BgL_outz00);
																	}
																	{
																		obj_t BgL_auxz00_6396;

																		{	/* SawMill/bbv-specialize.scm 109 */
																			BgL_objectz00_bglt BgL_tmpz00_6397;

																			BgL_tmpz00_6397 =
																				((BgL_objectz00_bglt)
																				BgL_new1250z00_2231);
																			BgL_auxz00_6396 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6397);
																		}
																		BgL_auxz00_6395 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6396);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6395))->BgL_outz00) =
																		((obj_t) BgL_auxz00_6401), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6417;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6411;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6418;

																		{
																			obj_t BgL_auxz00_6419;

																			{	/* SawMill/bbv-specialize.scm 109 */
																				BgL_objectz00_bglt BgL_tmpz00_6420;

																				BgL_tmpz00_6420 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6419 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6420);
																			}
																			BgL_auxz00_6418 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6419);
																		}
																		BgL_auxz00_6417 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6418))->BgL_inz00);
																	}
																	{
																		obj_t BgL_auxz00_6412;

																		{	/* SawMill/bbv-specialize.scm 109 */
																			BgL_objectz00_bglt BgL_tmpz00_6413;

																			BgL_tmpz00_6413 =
																				((BgL_objectz00_bglt)
																				BgL_new1250z00_2231);
																			BgL_auxz00_6412 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6413);
																		}
																		BgL_auxz00_6411 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6412);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6411))->BgL_inz00) =
																		((obj_t) BgL_auxz00_6417), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6433;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6427;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6434;

																		{
																			obj_t BgL_auxz00_6435;

																			{	/* SawMill/bbv-specialize.scm 109 */
																				BgL_objectz00_bglt BgL_tmpz00_6436;

																				BgL_tmpz00_6436 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6435 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6436);
																			}
																			BgL_auxz00_6434 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6435);
																		}
																		BgL_auxz00_6433 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6434))->
																			BgL_z52hashz52);
																	}
																	{
																		obj_t BgL_auxz00_6428;

																		{	/* SawMill/bbv-specialize.scm 109 */
																			BgL_objectz00_bglt BgL_tmpz00_6429;

																			BgL_tmpz00_6429 =
																				((BgL_objectz00_bglt)
																				BgL_new1250z00_2231);
																			BgL_auxz00_6428 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6429);
																		}
																		BgL_auxz00_6427 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6428);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6427))->
																			BgL_z52hashz52) =
																		((obj_t) BgL_auxz00_6433), BUNSPEC);
																}
																BgL_sz00_2227 = BgL_new1250z00_2231;
															}
															{	/* SawMill/bbv-specialize.scm 110 */
																int BgL_res2606z00_3873;

																{	/* SawMill/bbv-specialize.scm 110 */
																	int BgL_tmpz00_6443;

																	BgL_tmpz00_6443 = (int) (((long) 2));
																	BgL_res2606z00_3873 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6443);
																} BgL_res2606z00_3873;
															}
															{	/* SawMill/bbv-specialize.scm 110 */
																int BgL_tmpz00_6446;

																BgL_tmpz00_6446 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_6446,
																	BgL_ctxz00_208);
															}
															return ((obj_t) BgL_sz00_2227);
														}
													else
														{	/* SawMill/bbv-specialize.scm 113 */
															BgL_rtl_insz00_bglt BgL_sz00_2245;

															{	/* SawMill/bbv-specialize.scm 113 */
																BgL_rtl_insz00_bglt BgL_new1263z00_2249;

																{	/* SawMill/bbv-specialize.scm 113 */
																	BgL_rtl_insz00_bglt BgL_tmp1271z00_2259;
																	BgL_rtl_inszf2bbvzf2_bglt
																		BgL_wide1272z00_2260;
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_6450;

																		{	/* SawMill/bbv-specialize.scm 113 */
																			BgL_rtl_insz00_bglt BgL_new1270z00_2262;

																			BgL_new1270z00_2262 =
																				((BgL_rtl_insz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_insz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 113 */
																				long BgL_arg1946z00_2263;

																				{	/* SawMill/bbv-specialize.scm 113 */
																					long BgL_res2607z00_3875;

																					BgL_res2607z00_3875 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_insz00zzsaw_defsz00);
																					BgL_arg1946z00_2263 =
																						BgL_res2607z00_3875;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1270z00_2262),
																					BgL_arg1946z00_2263);
																			}
																			{	/* SawMill/bbv-specialize.scm 113 */
																				BgL_objectz00_bglt BgL_tmpz00_6455;

																				BgL_tmpz00_6455 =
																					((BgL_objectz00_bglt)
																					BgL_new1270z00_2262);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6455,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1270z00_2262);
																			BgL_auxz00_6450 = BgL_new1270z00_2262;
																		}
																		BgL_tmp1271z00_2259 =
																			((BgL_rtl_insz00_bglt) BgL_auxz00_6450);
																	}
																	BgL_wide1272z00_2260 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_inszf2bbvzf2_bgl))));
																	{	/* SawMill/bbv-specialize.scm 113 */
																		obj_t BgL_auxz00_6463;
																		BgL_objectz00_bglt BgL_tmpz00_6461;

																		BgL_auxz00_6463 =
																			((obj_t) BgL_wide1272z00_2260);
																		BgL_tmpz00_6461 =
																			((BgL_objectz00_bglt)
																			BgL_tmp1271z00_2259);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6461,
																			BgL_auxz00_6463);
																	}
																	((BgL_objectz00_bglt) BgL_tmp1271z00_2259);
																	{	/* SawMill/bbv-specialize.scm 113 */
																		long BgL_arg1945z00_2261;

																		{	/* SawMill/bbv-specialize.scm 113 */
																			long BgL_res2608z00_3881;

																			BgL_res2608z00_3881 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																			BgL_arg1945z00_2261 = BgL_res2608z00_3881;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_tmp1271z00_2259),
																			BgL_arg1945z00_2261);
																	}
																	BgL_new1263z00_2249 =
																		((BgL_rtl_insz00_bglt) BgL_tmp1271z00_2259);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1263z00_2249)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1263z00_2249)))->
																		BgL_z52spillz52) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->
																			BgL_z52spillz52)), BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1263z00_2249)))->BgL_destz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_destz00)),
																	BUNSPEC);
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_6480;

																	{	/* SawMill/bbv-specialize.scm 114 */
																		BgL_rtl_funz00_bglt
																			BgL_duplicated1275z00_2250;
																		BgL_rtl_ifnez00_bglt BgL_new1273z00_2251;

																		BgL_duplicated1275z00_2250 =
																			(((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_funz00);
																		{	/* SawMill/bbv-specialize.scm 114 */
																			BgL_rtl_ifnez00_bglt BgL_new1277z00_2253;

																			BgL_new1277z00_2253 =
																				((BgL_rtl_ifnez00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_ifnez00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 114 */
																				long BgL_arg1944z00_2254;

																				{	/* SawMill/bbv-specialize.scm 114 */
																					long BgL_res2609z00_3885;

																					{	/* SawMill/bbv-specialize.scm 114 */
																						obj_t BgL_classz00_3884;

																						BgL_classz00_3884 =
																							BGl_rtl_ifnez00zzsaw_defsz00;
																						BgL_res2609z00_3885 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_3884);
																					}
																					BgL_arg1944z00_2254 =
																						BgL_res2609z00_3885;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1277z00_2253),
																					BgL_arg1944z00_2254);
																			}
																			BgL_new1273z00_2251 = BgL_new1277z00_2253;
																		}
																		((((BgL_rtl_funz00_bglt) COBJECT(
																						((BgL_rtl_funz00_bglt)
																							BgL_new1273z00_2251)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_rtl_funz00_bglt)
																						COBJECT
																						(BgL_duplicated1275z00_2250))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_rtl_ifnez00_bglt)
																					COBJECT(BgL_new1273z00_2251))->
																				BgL_thenz00) =
																			((BgL_blockz00_bglt) ((
																						(BgL_rtl_ifnez00_bglt)
																						COBJECT(((BgL_rtl_ifnez00_bglt)
																								BgL_duplicated1275z00_2250)))->
																					BgL_thenz00)), BUNSPEC);
																		BgL_auxz00_6480 =
																			((BgL_rtl_funz00_bglt)
																			BgL_new1273z00_2251);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1263z00_2249)))->
																			BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_6480),
																		BUNSPEC);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1263z00_2249)))->BgL_argsz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_argsz00)),
																	BUNSPEC);
																{
																	obj_t BgL_auxz00_6504;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6498;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6505;

																		{
																			obj_t BgL_auxz00_6506;

																			{	/* SawMill/bbv-specialize.scm 114 */
																				BgL_objectz00_bglt BgL_tmpz00_6507;

																				BgL_tmpz00_6507 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6506 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6507);
																			}
																			BgL_auxz00_6505 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6506);
																		}
																		BgL_auxz00_6504 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6505))->BgL_defz00);
																	}
																	{
																		obj_t BgL_auxz00_6499;

																		{	/* SawMill/bbv-specialize.scm 114 */
																			BgL_objectz00_bglt BgL_tmpz00_6500;

																			BgL_tmpz00_6500 =
																				((BgL_objectz00_bglt)
																				BgL_new1263z00_2249);
																			BgL_auxz00_6499 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6500);
																		}
																		BgL_auxz00_6498 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6499);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6498))->BgL_defz00) =
																		((obj_t) BgL_auxz00_6504), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6520;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6514;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6521;

																		{
																			obj_t BgL_auxz00_6522;

																			{	/* SawMill/bbv-specialize.scm 114 */
																				BgL_objectz00_bglt BgL_tmpz00_6523;

																				BgL_tmpz00_6523 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6522 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6523);
																			}
																			BgL_auxz00_6521 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6522);
																		}
																		BgL_auxz00_6520 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6521))->BgL_outz00);
																	}
																	{
																		obj_t BgL_auxz00_6515;

																		{	/* SawMill/bbv-specialize.scm 114 */
																			BgL_objectz00_bglt BgL_tmpz00_6516;

																			BgL_tmpz00_6516 =
																				((BgL_objectz00_bglt)
																				BgL_new1263z00_2249);
																			BgL_auxz00_6515 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6516);
																		}
																		BgL_auxz00_6514 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6515);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6514))->BgL_outz00) =
																		((obj_t) BgL_auxz00_6520), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6536;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6530;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6537;

																		{
																			obj_t BgL_auxz00_6538;

																			{	/* SawMill/bbv-specialize.scm 114 */
																				BgL_objectz00_bglt BgL_tmpz00_6539;

																				BgL_tmpz00_6539 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6538 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6539);
																			}
																			BgL_auxz00_6537 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6538);
																		}
																		BgL_auxz00_6536 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6537))->BgL_inz00);
																	}
																	{
																		obj_t BgL_auxz00_6531;

																		{	/* SawMill/bbv-specialize.scm 114 */
																			BgL_objectz00_bglt BgL_tmpz00_6532;

																			BgL_tmpz00_6532 =
																				((BgL_objectz00_bglt)
																				BgL_new1263z00_2249);
																			BgL_auxz00_6531 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6532);
																		}
																		BgL_auxz00_6530 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6531);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6530))->BgL_inz00) =
																		((obj_t) BgL_auxz00_6536), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_6552;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6546;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6553;

																		{
																			obj_t BgL_auxz00_6554;

																			{	/* SawMill/bbv-specialize.scm 114 */
																				BgL_objectz00_bglt BgL_tmpz00_6555;

																				BgL_tmpz00_6555 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_207));
																				BgL_auxz00_6554 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6555);
																			}
																			BgL_auxz00_6553 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_6554);
																		}
																		BgL_auxz00_6552 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6553))->
																			BgL_z52hashz52);
																	}
																	{
																		obj_t BgL_auxz00_6547;

																		{	/* SawMill/bbv-specialize.scm 114 */
																			BgL_objectz00_bglt BgL_tmpz00_6548;

																			BgL_tmpz00_6548 =
																				((BgL_objectz00_bglt)
																				BgL_new1263z00_2249);
																			BgL_auxz00_6547 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6548);
																		}
																		BgL_auxz00_6546 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_6547);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_6546))->
																			BgL_z52hashz52) =
																		((obj_t) BgL_auxz00_6552), BUNSPEC);
																}
																BgL_sz00_2245 = BgL_new1263z00_2249;
															}
															{	/* SawMill/bbv-specialize.scm 115 */
																int BgL_res2610z00_3896;

																{	/* SawMill/bbv-specialize.scm 115 */
																	int BgL_tmpz00_6562;

																	BgL_tmpz00_6562 = (int) (((long) 2));
																	BgL_res2610z00_3896 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6562);
																} BgL_res2610z00_3896;
															}
															{	/* SawMill/bbv-specialize.scm 115 */
																int BgL_tmpz00_6565;

																BgL_tmpz00_6565 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_6565,
																	BgL_ctxz00_208);
															}
															return ((obj_t) BgL_sz00_2245);
														}
												}
										}
									else
										{	/* SawMill/bbv-specialize.scm 116 */
											bool_t BgL_test2871z00_6569;

											{	/* SawMill/bbv-specialize.scm 116 */
												obj_t BgL_arg2003z00_2359;

												BgL_arg2003z00_2359 =
													(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_207))->
													BgL_destz00);
												BgL_test2871z00_6569 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2003z00_2359,
													BGl_rtl_regz00zzsaw_defsz00);
											}
											if (BgL_test2871z00_6569)
												{	/* SawMill/bbv-specialize.scm 116 */
													if (BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2
														(BgL_iz00_207))
														{	/* SawMill/bbv-specialize.scm 121 */
															bool_t BgL_test2873z00_6574;

															if (NULLP(
																	(((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_207))->BgL_argsz00)))
																{	/* SawMill/bbv-specialize.scm 121 */
																	BgL_test2873z00_6574 = ((bool_t) 0);
																}
															else
																{	/* SawMill/bbv-specialize.scm 121 */
																	if (NULLP(CDR(
																				(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_argsz00))))
																		{	/* SawMill/bbv-specialize.scm 121 */
																			obj_t BgL_arg1988z00_2319;

																			BgL_arg1988z00_2319 =
																				CAR(
																				(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_argsz00));
																			BgL_test2873z00_6574 =
																				BGl_isazf3zf3zz__objectz00
																				(BgL_arg1988z00_2319,
																				BGl_rtl_regzf2razf2zzsaw_regsetz00);
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 121 */
																			BgL_test2873z00_6574 = ((bool_t) 0);
																		}
																}
															if (BgL_test2873z00_6574)
																{	/* SawMill/bbv-specialize.scm 122 */
																	obj_t BgL_val1_1816z00_2282;

																	{	/* SawMill/bbv-specialize.scm 122 */
																		obj_t BgL_arg1963z00_2283;
																		obj_t BgL_arg1964z00_2284;

																		BgL_arg1963z00_2283 =
																			(((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_destz00);
																		BgL_arg1964z00_2284 =
																			CAR((((BgL_rtl_insz00_bglt)
																					COBJECT(BgL_iz00_207))->BgL_argsz00));
																		BgL_val1_1816z00_2282 =
																			BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2
																			(BgL_ctxz00_208,
																			((BgL_rtl_regz00_bglt)
																				BgL_arg1963z00_2283),
																			((BgL_rtl_regz00_bglt)
																				BgL_arg1964z00_2284));
																	}
																	{	/* SawMill/bbv-specialize.scm 122 */
																		int BgL_res2615z00_3905;

																		{	/* SawMill/bbv-specialize.scm 122 */
																			int BgL_tmpz00_6591;

																			BgL_tmpz00_6591 = (int) (((long) 2));
																			BgL_res2615z00_3905 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6591);
																		} BgL_res2615z00_3905;
																	}
																	{	/* SawMill/bbv-specialize.scm 122 */
																		int BgL_tmpz00_6594;

																		BgL_tmpz00_6594 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_6594,
																			BgL_val1_1816z00_2282);
																	}
																	return ((obj_t) BgL_iz00_207);
																}
															else
																{	/* SawMill/bbv-specialize.scm 123 */
																	bool_t BgL_test2876z00_6598;

																	if (NULLP(
																			(((BgL_rtl_insz00_bglt)
																					COBJECT(BgL_iz00_207))->BgL_argsz00)))
																		{	/* SawMill/bbv-specialize.scm 123 */
																			BgL_test2876z00_6598 = ((bool_t) 0);
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 123 */
																			obj_t BgL_arg1985z00_2314;

																			BgL_arg1985z00_2314 =
																				CAR(
																				(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_argsz00));
																			BgL_test2876z00_6598 =
																				BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2
																				(((BgL_rtl_insz00_bglt)
																					BgL_arg1985z00_2314));
																		}
																	if (BgL_test2876z00_6598)
																		{	/* SawMill/bbv-specialize.scm 124 */
																			BgL_rtl_insz00_bglt BgL_i1279z00_2292;

																			{	/* SawMill/bbv-specialize.scm 124 */
																				obj_t BgL_pairz00_3908;

																				BgL_pairz00_3908 =
																					(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_argsz00);
																				BgL_i1279z00_2292 =
																					((BgL_rtl_insz00_bglt)
																					CAR(BgL_pairz00_3908));
																			}
																			{	/* SawMill/bbv-specialize.scm 125 */
																				BgL_rtl_callz00_bglt BgL_i1280z00_2293;

																				BgL_i1280z00_2293 =
																					((BgL_rtl_callz00_bglt)
																					(((BgL_rtl_insz00_bglt)
																							COBJECT(BgL_i1279z00_2292))->
																						BgL_funz00));
																				{	/* SawMill/bbv-specialize.scm 126 */
																					BgL_globalz00_bglt BgL_i1281z00_2294;

																					BgL_i1281z00_2294 =
																						(((BgL_rtl_callz00_bglt)
																							COBJECT(BgL_i1280z00_2293))->
																						BgL_varz00);
																					{	/* SawMill/bbv-specialize.scm 127 */
																						obj_t BgL_val1_1818z00_2296;

																						{	/* SawMill/bbv-specialize.scm 127 */
																							obj_t BgL_arg1972z00_2297;
																							BgL_typez00_bglt
																								BgL_arg1973z00_2298;
																							BgL_arg1972z00_2297 =
																								(((BgL_rtl_insz00_bglt)
																									COBJECT(BgL_iz00_207))->
																								BgL_destz00);
																							BgL_arg1973z00_2298 =
																								(((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_i1281z00_2294)))->
																								BgL_typez00);
																							{	/* SawMill/bbv-types.scm 71 */
																								obj_t BgL_valuez00_2303;

																								BgL_valuez00_2303 =
																									CNST_TABLE_REF(((long) 3));
																								{	/* SawMill/bbv-types.scm 71 */

																									BgL_val1_1818z00_2296 =
																										BGl_extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2
																										(BgL_ctxz00_208,
																										BgL_arg1972z00_2297,
																										((obj_t)
																											BgL_arg1973z00_2298),
																										BTRUE, BgL_valuez00_2303);
																						}}}
																						{	/* SawMill/bbv-specialize.scm 127 */
																							int BgL_res2617z00_3909;

																							{	/* SawMill/bbv-specialize.scm 127 */
																								int BgL_tmpz00_6618;

																								BgL_tmpz00_6618 =
																									(int) (((long) 2));
																								BgL_res2617z00_3909 =
																									BGL_MVALUES_NUMBER_SET
																									(BgL_tmpz00_6618);
																							} BgL_res2617z00_3909;
																						}
																						{	/* SawMill/bbv-specialize.scm 127 */
																							int BgL_tmpz00_6621;

																							BgL_tmpz00_6621 =
																								(int) (((long) 1));
																							BGL_MVALUES_VAL_SET
																								(BgL_tmpz00_6621,
																								BgL_val1_1818z00_2296);
																						}
																						return ((obj_t) BgL_iz00_207);
																					}
																				}
																			}
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 129 */
																			obj_t BgL_val1_1820z00_2306;

																			{	/* SawMill/bbv-specialize.scm 129 */
																				obj_t BgL_arg1980z00_2307;

																				BgL_arg1980z00_2307 =
																					(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_destz00);
																				{	/* SawMill/bbv-specialize.scm 129 */
																					obj_t BgL_g1983z00_2310;

																					BgL_g1983z00_2310 =
																						BGl_za2objza2z00zztype_cachez00;
																					{	/* SawMill/bbv-types.scm 69 */
																						obj_t BgL_valuez00_2312;

																						BgL_valuez00_2312 =
																							CNST_TABLE_REF(((long) 3));
																						{	/* SawMill/bbv-types.scm 69 */

																							BgL_val1_1820z00_2306 =
																								BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																								(BgL_ctxz00_208,
																								BgL_arg1980z00_2307,
																								BgL_g1983z00_2310, BTRUE,
																								BgL_valuez00_2312);
																			}}}}
																			{	/* SawMill/bbv-specialize.scm 129 */
																				int BgL_res2618z00_3910;

																				{	/* SawMill/bbv-specialize.scm 129 */
																					int BgL_tmpz00_6628;

																					BgL_tmpz00_6628 = (int) (((long) 2));
																					BgL_res2618z00_3910 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_6628);
																				} BgL_res2618z00_3910;
																			}
																			{	/* SawMill/bbv-specialize.scm 129 */
																				int BgL_tmpz00_6631;

																				BgL_tmpz00_6631 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_6631,
																					BgL_val1_1820z00_2306);
																			}
																			return ((obj_t) BgL_iz00_207);
																		}
																}
														}
													else
														{	/* SawMill/bbv-specialize.scm 118 */
															if (BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2
																(BgL_iz00_207))
																{	/* SawMill/bbv-specialize.scm 132 */
																	BgL_rtl_callz00_bglt BgL_i1283z00_2326;

																	BgL_i1283z00_2326 =
																		((BgL_rtl_callz00_bglt)
																		(((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_207))->BgL_funz00));
																	{	/* SawMill/bbv-specialize.scm 133 */
																		BgL_globalz00_bglt BgL_i1284z00_2327;

																		BgL_i1284z00_2327 =
																			(((BgL_rtl_callz00_bglt)
																				COBJECT(BgL_i1283z00_2326))->
																			BgL_varz00);
																		{	/* SawMill/bbv-specialize.scm 134 */
																			bool_t BgL_test2879z00_6640;

																			{	/* SawMill/bbv-specialize.scm 134 */
																				BgL_valuez00_bglt BgL_arg2000z00_2347;

																				BgL_arg2000z00_2347 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_i1284z00_2327)))->
																					BgL_valuez00);
																				{	/* SawMill/bbv-specialize.scm 134 */
																					bool_t BgL_res2619z00_3911;

																					BgL_res2619z00_3911 =
																						BGl_isazf3zf3zz__objectz00(
																						((obj_t) BgL_arg2000z00_2347),
																						BGl_funz00zzast_varz00);
																					BgL_test2879z00_6640 =
																						BgL_res2619z00_3911;
																				}
																			}
																			if (BgL_test2879z00_6640)
																				{	/* SawMill/bbv-specialize.scm 135 */
																					obj_t BgL_val1_1822z00_2331;

																					{	/* SawMill/bbv-specialize.scm 135 */
																						obj_t BgL_arg1997z00_2332;
																						BgL_typez00_bglt
																							BgL_arg1998z00_2333;
																						BgL_arg1997z00_2332 =
																							(((BgL_rtl_insz00_bglt)
																								COBJECT(BgL_iz00_207))->
																							BgL_destz00);
																						BgL_arg1998z00_2333 =
																							(((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_i1284z00_2327)))->
																							BgL_typez00);
																						{	/* SawMill/bbv-types.scm 71 */
																							obj_t BgL_valuez00_2338;

																							BgL_valuez00_2338 =
																								CNST_TABLE_REF(((long) 3));
																							{	/* SawMill/bbv-types.scm 71 */

																								BgL_val1_1822z00_2331 =
																									BGl_extendzd2normaliza7ezd2ctxza7zzsaw_bbvzd2typeszd2
																									(BgL_ctxz00_208,
																									BgL_arg1997z00_2332,
																									((obj_t) BgL_arg1998z00_2333),
																									BTRUE, BgL_valuez00_2338);
																					}}}
																					{	/* SawMill/bbv-specialize.scm 135 */
																						int BgL_res2620z00_3912;

																						{	/* SawMill/bbv-specialize.scm 135 */
																							int BgL_tmpz00_6651;

																							BgL_tmpz00_6651 =
																								(int) (((long) 2));
																							BgL_res2620z00_3912 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_6651);
																						} BgL_res2620z00_3912;
																					}
																					{	/* SawMill/bbv-specialize.scm 135 */
																						int BgL_tmpz00_6654;

																						BgL_tmpz00_6654 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6654,
																							BgL_val1_1822z00_2331);
																					}
																					return ((obj_t) BgL_iz00_207);
																				}
																			else
																				{	/* SawMill/bbv-specialize.scm 136 */
																					obj_t BgL_val1_1824z00_2340;

																					{	/* SawMill/bbv-specialize.scm 136 */
																						obj_t BgL_arg1999z00_2341;

																						BgL_arg1999z00_2341 =
																							(((BgL_rtl_insz00_bglt)
																								COBJECT(BgL_iz00_207))->
																							BgL_destz00);
																						{	/* SawMill/bbv-specialize.scm 136 */
																							obj_t BgL_g1983z00_2344;

																							BgL_g1983z00_2344 =
																								BGl_za2objza2z00zztype_cachez00;
																							{	/* SawMill/bbv-types.scm 69 */
																								obj_t BgL_valuez00_2346;

																								BgL_valuez00_2346 =
																									CNST_TABLE_REF(((long) 3));
																								{	/* SawMill/bbv-types.scm 69 */

																									BgL_val1_1824z00_2340 =
																										BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																										(BgL_ctxz00_208,
																										BgL_arg1999z00_2341,
																										BgL_g1983z00_2344, BTRUE,
																										BgL_valuez00_2346);
																					}}}}
																					{	/* SawMill/bbv-specialize.scm 136 */
																						int BgL_res2621z00_3913;

																						{	/* SawMill/bbv-specialize.scm 136 */
																							int BgL_tmpz00_6661;

																							BgL_tmpz00_6661 =
																								(int) (((long) 2));
																							BgL_res2621z00_3913 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_6661);
																						} BgL_res2621z00_3913;
																					}
																					{	/* SawMill/bbv-specialize.scm 136 */
																						int BgL_tmpz00_6664;

																						BgL_tmpz00_6664 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6664,
																							BgL_val1_1824z00_2340);
																					}
																					return ((obj_t) BgL_iz00_207);
																				}
																		}
																	}
																}
															else
																{	/* SawMill/bbv-specialize.scm 130 */
																	if (BGl_rtl_inszd2vlenzf3z21zzsaw_bbvzd2typeszd2(BgL_iz00_207))
																		{	/* SawMill/bbv-specialize.scm 137 */
																			return
																				((obj_t)
																				BGl_rtl_inszd2specializa7ezd2vlengthza7zzsaw_bbvzd2specializa7ez75
																				(BgL_iz00_207, BgL_ctxz00_208));
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 140 */
																			obj_t BgL_val1_1826z00_2350;

																			{	/* SawMill/bbv-specialize.scm 140 */
																				obj_t BgL_arg2002z00_2351;

																				BgL_arg2002z00_2351 =
																					(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_207))->
																					BgL_destz00);
																				{	/* SawMill/bbv-specialize.scm 140 */
																					obj_t BgL_g1983z00_2354;

																					BgL_g1983z00_2354 =
																						BGl_za2objza2z00zztype_cachez00;
																					{	/* SawMill/bbv-types.scm 69 */
																						obj_t BgL_valuez00_2356;

																						BgL_valuez00_2356 =
																							CNST_TABLE_REF(((long) 3));
																						{	/* SawMill/bbv-types.scm 69 */

																							BgL_val1_1826z00_2350 =
																								BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																								(BgL_ctxz00_208,
																								BgL_arg2002z00_2351,
																								BgL_g1983z00_2354, BTRUE,
																								BgL_valuez00_2356);
																			}}}}
																			{	/* SawMill/bbv-specialize.scm 140 */
																				int BgL_res2622z00_3915;

																				{	/* SawMill/bbv-specialize.scm 140 */
																					int BgL_tmpz00_6675;

																					BgL_tmpz00_6675 = (int) (((long) 2));
																					BgL_res2622z00_3915 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_6675);
																				} BgL_res2622z00_3915;
																			}
																			{	/* SawMill/bbv-specialize.scm 140 */
																				int BgL_tmpz00_6678;

																				BgL_tmpz00_6678 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_6678,
																					BgL_val1_1826z00_2350);
																			}
																			return ((obj_t) BgL_iz00_207);
																		}
																}
														}
												}
											else
												{	/* SawMill/bbv-specialize.scm 116 */
													{	/* SawMill/bbv-specialize.scm 117 */
														int BgL_res2623z00_3916;

														{	/* SawMill/bbv-specialize.scm 117 */
															int BgL_tmpz00_6682;

															BgL_tmpz00_6682 = (int) (((long) 2));
															BgL_res2623z00_3916 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6682);
														} BgL_res2623z00_3916;
													}
													{	/* SawMill/bbv-specialize.scm 117 */
														int BgL_tmpz00_6685;

														BgL_tmpz00_6685 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_6685,
															BgL_ctxz00_208);
													}
													return ((obj_t) BgL_iz00_207);
												}
										}
								}
						}
				}
		}

	}



/* &rtl_ins-specialize */
	obj_t BGl_z62rtl_inszd2specializa7ez17zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4733, obj_t BgL_iz00_4734, obj_t BgL_ctxz00_4735)
	{
		{	/* SawMill/bbv-specialize.scm 60 */
			return
				BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75(
				((BgL_rtl_insz00_bglt) BgL_iz00_4734), BgL_ctxz00_4735);
		}

	}



/* rtl_ins-typecheck? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_iz00_209)
	{
		{	/* SawMill/bbv-specialize.scm 147 */
			{	/* SawMill/bbv-specialize.scm 148 */
				bool_t BgL_test2881z00_6691;

				if (BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_iz00_209))
					{	/* SawMill/bbv-specialize.scm 148 */
						BgL_test2881z00_6691 = ((bool_t) 1);
					}
				else
					{	/* SawMill/bbv-specialize.scm 148 */
						BgL_test2881z00_6691 =
							BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_iz00_209);
					}
				if (BgL_test2881z00_6691)
					{	/* SawMill/bbv-specialize.scm 150 */
						bool_t BgL_test2883z00_6695;

						{	/* SawMill/bbv-specialize.scm 150 */
							bool_t BgL_test2884z00_6696;

							{	/* SawMill/bbv-specialize.scm 150 */
								obj_t BgL_arg2023z00_2382;

								BgL_arg2023z00_2382 =
									CAR(
									(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_209))->BgL_argsz00));
								BgL_test2884z00_6696 =
									BGl_isazf3zf3zz__objectz00(BgL_arg2023z00_2382,
									BGl_rtl_insz00zzsaw_defsz00);
							}
							if (BgL_test2884z00_6696)
								{	/* SawMill/bbv-specialize.scm 150 */
									obj_t BgL_arg2021z00_2380;

									BgL_arg2021z00_2380 =
										CAR(
										(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_209))->
											BgL_argsz00));
									BgL_test2883z00_6695 =
										BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2((
											(BgL_rtl_insz00_bglt) BgL_arg2021z00_2380));
								}
							else
								{	/* SawMill/bbv-specialize.scm 150 */
									BgL_test2883z00_6695 = ((bool_t) 0);
								}
						}
						if (BgL_test2883z00_6695)
							{	/* SawMill/bbv-specialize.scm 151 */
								obj_t BgL_typz00_2371;

								{	/* SawMill/bbv-specialize.scm 151 */
									obj_t BgL_arg2018z00_2377;

									BgL_arg2018z00_2377 =
										CAR(
										(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_209))->
											BgL_argsz00));
									BgL_typz00_2371 =
										BGl_rtl_callzd2predicatezd2zzsaw_bbvzd2typeszd2((
											(BgL_rtl_insz00_bglt) BgL_arg2018z00_2377));
								}
								if (CBOOL(BgL_typz00_2371))
									{	/* SawMill/bbv-specialize.scm 153 */
										obj_t BgL_argsz00_2372;

										BgL_argsz00_2372 =
											BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_iz00_209);
										if (NULLP(BgL_argsz00_2372))
											{	/* SawMill/bbv-specialize.scm 154 */
												return ((bool_t) 0);
											}
										else
											{	/* SawMill/bbv-specialize.scm 154 */
												if (NULLP(CDR(BgL_argsz00_2372)))
													{	/* SawMill/bbv-specialize.scm 154 */
														obj_t BgL_arg2016z00_2375;

														BgL_arg2016z00_2375 = CAR(BgL_argsz00_2372);
														return
															BGl_isazf3zf3zz__objectz00(BgL_arg2016z00_2375,
															BGl_rtl_regz00zzsaw_defsz00);
													}
												else
													{	/* SawMill/bbv-specialize.scm 154 */
														return ((bool_t) 0);
													}
											}
									}
								else
									{	/* SawMill/bbv-specialize.scm 152 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 150 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-specialize.scm 148 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &rtl_ins-typecheck? */
	obj_t BGl_z62rtl_inszd2typecheckzf3z43zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4736, obj_t BgL_iz00_4737)
	{
		{	/* SawMill/bbv-specialize.scm 147 */
			return
				BBOOL(BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75(
					((BgL_rtl_insz00_bglt) BgL_iz00_4737)));
		}

	}



/* rtl_ins-specialize-typecheck */
	BgL_rtl_insz00_bglt
		BGl_rtl_inszd2specializa7ezd2typecheckza7zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_iz00_210, obj_t BgL_ctxz00_211)
	{
		{	/* SawMill/bbv-specialize.scm 159 */
			{	/* SawMill/bbv-specialize.scm 160 */
				obj_t BgL_regz00_2385;

				BgL_regz00_2385 =
					BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(BgL_iz00_210);
				{	/* SawMill/bbv-specialize.scm 161 */
					obj_t BgL_typez00_2386;
					obj_t BgL_flagz00_2387;

					{	/* SawMill/bbv-specialize.scm 163 */
						int BgL_tmpz00_6722;

						BgL_tmpz00_6722 = (int) (((long) 1));
						BgL_typez00_2386 = BGL_MVALUES_VAL(BgL_tmpz00_6722);
					}
					{	/* SawMill/bbv-specialize.scm 163 */
						int BgL_tmpz00_6725;

						BgL_tmpz00_6725 = (int) (((long) 2));
						BgL_flagz00_2387 = BGL_MVALUES_VAL(BgL_tmpz00_6725);
					}
					{	/* SawMill/bbv-specialize.scm 163 */
						obj_t BgL_ez00_2388;

						BgL_ez00_2388 =
							BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_211,
							((BgL_rtl_regz00_bglt) BgL_regz00_2385));
						{	/* SawMill/bbv-specialize.scm 165 */
							bool_t BgL_test2888z00_6730;

							if (CBOOL(BgL_ez00_2388))
								{	/* SawMill/bbv-specialize.scm 165 */
									BgL_typez00_bglt BgL_arg2094z00_2575;

									BgL_arg2094z00_2575 =
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
												((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2388)))->
										BgL_typz00);
									BgL_test2888z00_6730 =
										(((obj_t) BgL_arg2094z00_2575) ==
										BGl_za2objza2z00zztype_cachez00);
								}
							else
								{	/* SawMill/bbv-specialize.scm 165 */
									BgL_test2888z00_6730 = ((bool_t) 1);
								}
							if (BgL_test2888z00_6730)
								{	/* SawMill/bbv-specialize.scm 167 */
									BgL_rtl_insz00_bglt BgL_sz00_2392;

									{	/* SawMill/bbv-specialize.scm 167 */
										BgL_rtl_insz00_bglt BgL_new1289z00_2396;

										{	/* SawMill/bbv-specialize.scm 167 */
											BgL_rtl_insz00_bglt BgL_tmp1297z00_2414;
											BgL_rtl_inszf2bbvzf2_bglt BgL_wide1298z00_2415;

											{
												BgL_rtl_insz00_bglt BgL_auxz00_6737;

												{	/* SawMill/bbv-specialize.scm 167 */
													BgL_rtl_insz00_bglt BgL_new1296z00_2417;

													BgL_new1296z00_2417 =
														((BgL_rtl_insz00_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_rtl_insz00_bgl))));
													{	/* SawMill/bbv-specialize.scm 167 */
														long BgL_arg2037z00_2418;

														{	/* SawMill/bbv-specialize.scm 167 */
															long BgL_res2627z00_3927;

															BgL_res2627z00_3927 =
																BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
															BgL_arg2037z00_2418 = BgL_res2627z00_3927;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1296z00_2417),
															BgL_arg2037z00_2418);
													}
													{	/* SawMill/bbv-specialize.scm 167 */
														BgL_objectz00_bglt BgL_tmpz00_6742;

														BgL_tmpz00_6742 =
															((BgL_objectz00_bglt) BgL_new1296z00_2417);
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6742, BFALSE);
													}
													((BgL_objectz00_bglt) BgL_new1296z00_2417);
													BgL_auxz00_6737 = BgL_new1296z00_2417;
												}
												BgL_tmp1297z00_2414 =
													((BgL_rtl_insz00_bglt) BgL_auxz00_6737);
											}
											BgL_wide1298z00_2415 =
												((BgL_rtl_inszf2bbvzf2_bglt)
												BOBJECT(GC_MALLOC(sizeof(struct
															BgL_rtl_inszf2bbvzf2_bgl))));
											{	/* SawMill/bbv-specialize.scm 167 */
												obj_t BgL_auxz00_6750;
												BgL_objectz00_bglt BgL_tmpz00_6748;

												BgL_auxz00_6750 = ((obj_t) BgL_wide1298z00_2415);
												BgL_tmpz00_6748 =
													((BgL_objectz00_bglt) BgL_tmp1297z00_2414);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6748,
													BgL_auxz00_6750);
											}
											((BgL_objectz00_bglt) BgL_tmp1297z00_2414);
											{	/* SawMill/bbv-specialize.scm 167 */
												long BgL_arg2036z00_2416;

												{	/* SawMill/bbv-specialize.scm 167 */
													long BgL_res2628z00_3933;

													BgL_res2628z00_3933 =
														BGL_CLASS_INDEX
														(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
													BgL_arg2036z00_2416 = BgL_res2628z00_3933;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_tmp1297z00_2414),
													BgL_arg2036z00_2416);
											}
											BgL_new1289z00_2396 =
												((BgL_rtl_insz00_bglt) BgL_tmp1297z00_2414);
										}
										((((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_new1289z00_2396)))->
												BgL_locz00) =
											((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
													BgL_locz00)), BUNSPEC);
										((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
															BgL_new1289z00_2396)))->BgL_z52spillz52) =
											((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
													BgL_z52spillz52)), BUNSPEC);
										((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
															BgL_new1289z00_2396)))->BgL_destz00) =
											((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
													BgL_destz00)), BUNSPEC);
										{
											BgL_rtl_funz00_bglt BgL_auxz00_6767;

											{	/* SawMill/bbv-specialize.scm 168 */
												bool_t BgL_test2890z00_6769;

												{	/* SawMill/bbv-specialize.scm 168 */
													BgL_rtl_funz00_bglt BgL_arg2035z00_2409;

													BgL_arg2035z00_2409 =
														(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
														BgL_funz00);
													BgL_test2890z00_6769 =
														BGl_isazf3zf3zz__objectz00(((obj_t)
															BgL_arg2035z00_2409),
														BGl_rtl_ifeqz00zzsaw_defsz00);
												}
												if (BgL_test2890z00_6769)
													{	/* SawMill/bbv-specialize.scm 169 */
														BgL_rtl_funz00_bglt BgL_duplicated1301z00_2399;
														BgL_rtl_ifeqz00_bglt BgL_new1299z00_2400;

														BgL_duplicated1301z00_2399 =
															(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
															BgL_funz00);
														{	/* SawMill/bbv-specialize.scm 169 */
															BgL_rtl_ifeqz00_bglt BgL_new1303z00_2402;

															BgL_new1303z00_2402 =
																((BgL_rtl_ifeqz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_ifeqz00_bgl))));
															{	/* SawMill/bbv-specialize.scm 169 */
																long BgL_arg2033z00_2403;

																{	/* SawMill/bbv-specialize.scm 169 */
																	long BgL_res2629z00_3937;

																	{	/* SawMill/bbv-specialize.scm 169 */
																		obj_t BgL_classz00_3936;

																		BgL_classz00_3936 =
																			BGl_rtl_ifeqz00zzsaw_defsz00;
																		BgL_res2629z00_3937 =
																			BGL_CLASS_INDEX(BgL_classz00_3936);
																	}
																	BgL_arg2033z00_2403 = BgL_res2629z00_3937;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1303z00_2402),
																	BgL_arg2033z00_2403);
															}
															BgL_new1299z00_2400 = BgL_new1303z00_2402;
														}
														((((BgL_rtl_funz00_bglt) COBJECT(
																		((BgL_rtl_funz00_bglt)
																			BgL_new1299z00_2400)))->BgL_locz00) =
															((obj_t) (((BgL_rtl_funz00_bglt)
																		COBJECT(BgL_duplicated1301z00_2399))->
																	BgL_locz00)), BUNSPEC);
														((((BgL_rtl_ifeqz00_bglt)
																	COBJECT(BgL_new1299z00_2400))->BgL_thenz00) =
															((BgL_blockz00_bglt) (((BgL_rtl_ifeqz00_bglt)
																		COBJECT(((BgL_rtl_ifeqz00_bglt)
																				BgL_duplicated1301z00_2399)))->
																	BgL_thenz00)), BUNSPEC);
														BgL_auxz00_6767 =
															((BgL_rtl_funz00_bglt) BgL_new1299z00_2400);
													}
												else
													{	/* SawMill/bbv-specialize.scm 170 */
														BgL_rtl_funz00_bglt BgL_duplicated1306z00_2404;
														BgL_rtl_ifnez00_bglt BgL_new1304z00_2405;

														BgL_duplicated1306z00_2404 =
															(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
															BgL_funz00);
														{	/* SawMill/bbv-specialize.scm 170 */
															BgL_rtl_ifnez00_bglt BgL_new1308z00_2407;

															BgL_new1308z00_2407 =
																((BgL_rtl_ifnez00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_ifnez00_bgl))));
															{	/* SawMill/bbv-specialize.scm 170 */
																long BgL_arg2034z00_2408;

																{	/* SawMill/bbv-specialize.scm 170 */
																	long BgL_res2630z00_3941;

																	{	/* SawMill/bbv-specialize.scm 170 */
																		obj_t BgL_classz00_3940;

																		BgL_classz00_3940 =
																			BGl_rtl_ifnez00zzsaw_defsz00;
																		BgL_res2630z00_3941 =
																			BGL_CLASS_INDEX(BgL_classz00_3940);
																	}
																	BgL_arg2034z00_2408 = BgL_res2630z00_3941;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1308z00_2407),
																	BgL_arg2034z00_2408);
															}
															BgL_new1304z00_2405 = BgL_new1308z00_2407;
														}
														((((BgL_rtl_funz00_bglt) COBJECT(
																		((BgL_rtl_funz00_bglt)
																			BgL_new1304z00_2405)))->BgL_locz00) =
															((obj_t) (((BgL_rtl_funz00_bglt)
																		COBJECT(BgL_duplicated1306z00_2404))->
																	BgL_locz00)), BUNSPEC);
														((((BgL_rtl_ifnez00_bglt)
																	COBJECT(BgL_new1304z00_2405))->BgL_thenz00) =
															((BgL_blockz00_bglt) (((BgL_rtl_ifnez00_bglt)
																		COBJECT(((BgL_rtl_ifnez00_bglt)
																				BgL_duplicated1306z00_2404)))->
																	BgL_thenz00)), BUNSPEC);
														BgL_auxz00_6767 =
															((BgL_rtl_funz00_bglt) BgL_new1304z00_2405);
											}}
											((((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_new1289z00_2396)))->
													BgL_funz00) =
												((BgL_rtl_funz00_bglt) BgL_auxz00_6767), BUNSPEC);
										}
										((((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_new1289z00_2396)))->
												BgL_argsz00) =
											((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_210))->
													BgL_argsz00)), BUNSPEC);
										{
											obj_t BgL_auxz00_6807;
											BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6801;

											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6808;

												{
													obj_t BgL_auxz00_6809;

													{	/* SawMill/bbv-specialize.scm 168 */
														BgL_objectz00_bglt BgL_tmpz00_6810;

														BgL_tmpz00_6810 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_iz00_210));
														BgL_auxz00_6809 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6810);
													}
													BgL_auxz00_6808 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6809);
												}
												BgL_auxz00_6807 =
													(((BgL_rtl_inszf2bbvzf2_bglt)
														COBJECT(BgL_auxz00_6808))->BgL_defz00);
											}
											{
												obj_t BgL_auxz00_6802;

												{	/* SawMill/bbv-specialize.scm 168 */
													BgL_objectz00_bglt BgL_tmpz00_6803;

													BgL_tmpz00_6803 =
														((BgL_objectz00_bglt) BgL_new1289z00_2396);
													BgL_auxz00_6802 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6803);
												}
												BgL_auxz00_6801 =
													((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6802);
											}
											((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_6801))->
													BgL_defz00) = ((obj_t) BgL_auxz00_6807), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_6823;
											BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6817;

											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6824;

												{
													obj_t BgL_auxz00_6825;

													{	/* SawMill/bbv-specialize.scm 168 */
														BgL_objectz00_bglt BgL_tmpz00_6826;

														BgL_tmpz00_6826 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_iz00_210));
														BgL_auxz00_6825 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6826);
													}
													BgL_auxz00_6824 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6825);
												}
												BgL_auxz00_6823 =
													(((BgL_rtl_inszf2bbvzf2_bglt)
														COBJECT(BgL_auxz00_6824))->BgL_outz00);
											}
											{
												obj_t BgL_auxz00_6818;

												{	/* SawMill/bbv-specialize.scm 168 */
													BgL_objectz00_bglt BgL_tmpz00_6819;

													BgL_tmpz00_6819 =
														((BgL_objectz00_bglt) BgL_new1289z00_2396);
													BgL_auxz00_6818 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6819);
												}
												BgL_auxz00_6817 =
													((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6818);
											}
											((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_6817))->
													BgL_outz00) = ((obj_t) BgL_auxz00_6823), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_6839;
											BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6833;

											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6840;

												{
													obj_t BgL_auxz00_6841;

													{	/* SawMill/bbv-specialize.scm 168 */
														BgL_objectz00_bglt BgL_tmpz00_6842;

														BgL_tmpz00_6842 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_iz00_210));
														BgL_auxz00_6841 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6842);
													}
													BgL_auxz00_6840 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6841);
												}
												BgL_auxz00_6839 =
													(((BgL_rtl_inszf2bbvzf2_bglt)
														COBJECT(BgL_auxz00_6840))->BgL_inz00);
											}
											{
												obj_t BgL_auxz00_6834;

												{	/* SawMill/bbv-specialize.scm 168 */
													BgL_objectz00_bglt BgL_tmpz00_6835;

													BgL_tmpz00_6835 =
														((BgL_objectz00_bglt) BgL_new1289z00_2396);
													BgL_auxz00_6834 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6835);
												}
												BgL_auxz00_6833 =
													((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6834);
											}
											((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_6833))->
													BgL_inz00) = ((obj_t) BgL_auxz00_6839), BUNSPEC);
										}
										{
											obj_t BgL_auxz00_6855;
											BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6849;

											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6856;

												{
													obj_t BgL_auxz00_6857;

													{	/* SawMill/bbv-specialize.scm 168 */
														BgL_objectz00_bglt BgL_tmpz00_6858;

														BgL_tmpz00_6858 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_iz00_210));
														BgL_auxz00_6857 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_6858);
													}
													BgL_auxz00_6856 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6857);
												}
												BgL_auxz00_6855 =
													(((BgL_rtl_inszf2bbvzf2_bglt)
														COBJECT(BgL_auxz00_6856))->BgL_z52hashz52);
											}
											{
												obj_t BgL_auxz00_6850;

												{	/* SawMill/bbv-specialize.scm 168 */
													BgL_objectz00_bglt BgL_tmpz00_6851;

													BgL_tmpz00_6851 =
														((BgL_objectz00_bglt) BgL_new1289z00_2396);
													BgL_auxz00_6850 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6851);
												}
												BgL_auxz00_6849 =
													((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6850);
											}
											((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_6849))->
													BgL_z52hashz52) = ((obj_t) BgL_auxz00_6855), BUNSPEC);
										}
										BgL_sz00_2392 = BgL_new1289z00_2396;
									}
									{	/* SawMill/bbv-specialize.scm 171 */
										int BgL_res2631z00_3952;

										{	/* SawMill/bbv-specialize.scm 171 */
											int BgL_tmpz00_6865;

											BgL_tmpz00_6865 = (int) (((long) 2));
											BgL_res2631z00_3952 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6865);
										} BgL_res2631z00_3952;
									}
									{	/* SawMill/bbv-specialize.scm 171 */
										int BgL_tmpz00_6868;

										BgL_tmpz00_6868 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_6868, BgL_ctxz00_211);
									}
									return BgL_sz00_2392;
								}
							else
								{	/* SawMill/bbv-specialize.scm 172 */
									bool_t BgL_test2891z00_6871;

									if (
										(((obj_t)
												(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
															((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2388)))->
													BgL_typz00)) == BgL_typez00_2386))
										{	/* SawMill/bbv-specialize.scm 172 */
											BgL_test2891z00_6871 =
												(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
														((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2388)))->
												BgL_flagz00);
										}
									else
										{	/* SawMill/bbv-specialize.scm 172 */
											BgL_test2891z00_6871 = ((bool_t) 0);
										}
									if (BgL_test2891z00_6871)
										{	/* SawMill/bbv-specialize.scm 174 */
											BgL_rtl_insz00_bglt BgL_sz00_2424;

											{	/* SawMill/bbv-specialize.scm 174 */
												bool_t BgL_test2893z00_6879;

												{	/* SawMill/bbv-specialize.scm 174 */
													BgL_rtl_funz00_bglt BgL_arg2051z00_2458;

													BgL_arg2051z00_2458 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_210))))->
														BgL_funz00);
													BgL_test2893z00_6879 =
														BGl_isazf3zf3zz__objectz00(((obj_t)
															BgL_arg2051z00_2458),
														BGl_rtl_ifeqz00zzsaw_defsz00);
												}
												if (BgL_test2893z00_6879)
													{	/* SawMill/bbv-specialize.scm 175 */
														BgL_rtl_insz00_bglt BgL_new1310z00_2430;

														{	/* SawMill/bbv-specialize.scm 175 */
															BgL_rtl_insz00_bglt BgL_tmp1318z00_2438;
															BgL_rtl_inszf2bbvzf2_bglt BgL_wide1319z00_2439;

															{
																BgL_rtl_insz00_bglt BgL_auxz00_6885;

																{	/* SawMill/bbv-specialize.scm 175 */
																	BgL_rtl_insz00_bglt BgL_new1317z00_2441;

																	BgL_new1317z00_2441 =
																		((BgL_rtl_insz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_insz00_bgl))));
																	{	/* SawMill/bbv-specialize.scm 175 */
																		long BgL_arg2047z00_2442;

																		{	/* SawMill/bbv-specialize.scm 175 */
																			long BgL_res2632z00_3956;

																			BgL_res2632z00_3956 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_insz00zzsaw_defsz00);
																			BgL_arg2047z00_2442 = BgL_res2632z00_3956;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1317z00_2441),
																			BgL_arg2047z00_2442);
																	}
																	{	/* SawMill/bbv-specialize.scm 175 */
																		BgL_objectz00_bglt BgL_tmpz00_6890;

																		BgL_tmpz00_6890 =
																			((BgL_objectz00_bglt)
																			BgL_new1317z00_2441);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6890,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1317z00_2441);
																	BgL_auxz00_6885 = BgL_new1317z00_2441;
																}
																BgL_tmp1318z00_2438 =
																	((BgL_rtl_insz00_bglt) BgL_auxz00_6885);
															}
															BgL_wide1319z00_2439 =
																((BgL_rtl_inszf2bbvzf2_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_rtl_inszf2bbvzf2_bgl))));
															{	/* SawMill/bbv-specialize.scm 175 */
																obj_t BgL_auxz00_6898;
																BgL_objectz00_bglt BgL_tmpz00_6896;

																BgL_auxz00_6898 =
																	((obj_t) BgL_wide1319z00_2439);
																BgL_tmpz00_6896 =
																	((BgL_objectz00_bglt) BgL_tmp1318z00_2438);
																BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6896,
																	BgL_auxz00_6898);
															}
															((BgL_objectz00_bglt) BgL_tmp1318z00_2438);
															{	/* SawMill/bbv-specialize.scm 175 */
																long BgL_arg2046z00_2440;

																{	/* SawMill/bbv-specialize.scm 175 */
																	long BgL_res2633z00_3962;

																	BgL_res2633z00_3962 =
																		BGL_CLASS_INDEX
																		(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																	BgL_arg2046z00_2440 = BgL_res2633z00_3962;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_tmp1318z00_2438),
																	BgL_arg2046z00_2440);
															}
															BgL_new1310z00_2430 =
																((BgL_rtl_insz00_bglt) BgL_tmp1318z00_2438);
														}
														((((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			BgL_new1310z00_2430)))->BgL_locz00) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_210))->BgL_locz00)),
															BUNSPEC);
														((((BgL_rtl_insz00_bglt)
																	COBJECT(((BgL_rtl_insz00_bglt)
																			BgL_new1310z00_2430)))->BgL_z52spillz52) =
															((obj_t) (((BgL_rtl_insz00_bglt)
																		COBJECT(BgL_iz00_210))->BgL_z52spillz52)),
															BUNSPEC);
														((((BgL_rtl_insz00_bglt)
																	COBJECT(((BgL_rtl_insz00_bglt)
																			BgL_new1310z00_2430)))->BgL_destz00) =
															((obj_t) BFALSE), BUNSPEC);
														{
															BgL_rtl_funz00_bglt BgL_auxz00_6914;

															{	/* SawMill/bbv-specialize.scm 176 */
																BgL_rtl_nopz00_bglt BgL_new1321z00_2431;

																{	/* SawMill/bbv-specialize.scm 176 */
																	BgL_rtl_nopz00_bglt BgL_new1320z00_2432;

																	BgL_new1320z00_2432 =
																		((BgL_rtl_nopz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_nopz00_bgl))));
																	{	/* SawMill/bbv-specialize.scm 176 */
																		long BgL_arg2045z00_2433;

																		{	/* SawMill/bbv-specialize.scm 176 */
																			long BgL_res2634z00_3966;

																			{	/* SawMill/bbv-specialize.scm 176 */
																				obj_t BgL_classz00_3965;

																				BgL_classz00_3965 =
																					BGl_rtl_nopz00zzsaw_defsz00;
																				BgL_res2634z00_3966 =
																					BGL_CLASS_INDEX(BgL_classz00_3965);
																			}
																			BgL_arg2045z00_2433 = BgL_res2634z00_3966;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1320z00_2432),
																			BgL_arg2045z00_2433);
																	}
																	BgL_new1321z00_2431 = BgL_new1320z00_2432;
																}
																((((BgL_rtl_funz00_bglt) COBJECT(
																				((BgL_rtl_funz00_bglt)
																					BgL_new1321z00_2431)))->BgL_locz00) =
																	((obj_t) BFALSE), BUNSPEC);
																BgL_auxz00_6914 =
																	((BgL_rtl_funz00_bglt) BgL_new1321z00_2431);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1310z00_2430)))->BgL_funz00) =
																((BgL_rtl_funz00_bglt) BgL_auxz00_6914),
																BUNSPEC);
														}
														((((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			BgL_new1310z00_2430)))->BgL_argsz00) =
															((obj_t) BNIL), BUNSPEC);
														{
															obj_t BgL_auxz00_6932;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6926;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6933;

																{
																	obj_t BgL_auxz00_6934;

																	{	/* SawMill/bbv-specialize.scm 178 */
																		BgL_objectz00_bglt BgL_tmpz00_6935;

																		BgL_tmpz00_6935 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210));
																		BgL_auxz00_6934 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6935);
																	}
																	BgL_auxz00_6933 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6934);
																}
																BgL_auxz00_6932 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6933))->BgL_defz00);
															}
															{
																obj_t BgL_auxz00_6927;

																{	/* SawMill/bbv-specialize.scm 178 */
																	BgL_objectz00_bglt BgL_tmpz00_6928;

																	BgL_tmpz00_6928 =
																		((BgL_objectz00_bglt) BgL_new1310z00_2430);
																	BgL_auxz00_6927 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6928);
																}
																BgL_auxz00_6926 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6927);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6926))->BgL_defz00) =
																((obj_t) BgL_auxz00_6932), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6948;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6942;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6949;

																{
																	obj_t BgL_auxz00_6950;

																	{	/* SawMill/bbv-specialize.scm 178 */
																		BgL_objectz00_bglt BgL_tmpz00_6951;

																		BgL_tmpz00_6951 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210));
																		BgL_auxz00_6950 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6951);
																	}
																	BgL_auxz00_6949 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6950);
																}
																BgL_auxz00_6948 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6949))->BgL_outz00);
															}
															{
																obj_t BgL_auxz00_6943;

																{	/* SawMill/bbv-specialize.scm 178 */
																	BgL_objectz00_bglt BgL_tmpz00_6944;

																	BgL_tmpz00_6944 =
																		((BgL_objectz00_bglt) BgL_new1310z00_2430);
																	BgL_auxz00_6943 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6944);
																}
																BgL_auxz00_6942 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6943);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6942))->BgL_outz00) =
																((obj_t) BgL_auxz00_6948), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6964;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6958;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6965;

																{
																	obj_t BgL_auxz00_6966;

																	{	/* SawMill/bbv-specialize.scm 178 */
																		BgL_objectz00_bglt BgL_tmpz00_6967;

																		BgL_tmpz00_6967 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210));
																		BgL_auxz00_6966 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6967);
																	}
																	BgL_auxz00_6965 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6966);
																}
																BgL_auxz00_6964 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6965))->BgL_inz00);
															}
															{
																obj_t BgL_auxz00_6959;

																{	/* SawMill/bbv-specialize.scm 178 */
																	BgL_objectz00_bglt BgL_tmpz00_6960;

																	BgL_tmpz00_6960 =
																		((BgL_objectz00_bglt) BgL_new1310z00_2430);
																	BgL_auxz00_6959 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6960);
																}
																BgL_auxz00_6958 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6959);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6958))->BgL_inz00) =
																((obj_t) BgL_auxz00_6964), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6980;
															BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6974;

															{
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_6981;

																{
																	obj_t BgL_auxz00_6982;

																	{	/* SawMill/bbv-specialize.scm 178 */
																		BgL_objectz00_bglt BgL_tmpz00_6983;

																		BgL_tmpz00_6983 =
																			((BgL_objectz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210));
																		BgL_auxz00_6982 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_6983);
																	}
																	BgL_auxz00_6981 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_6982);
																}
																BgL_auxz00_6980 =
																	(((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6981))->BgL_z52hashz52);
															}
															{
																obj_t BgL_auxz00_6975;

																{	/* SawMill/bbv-specialize.scm 178 */
																	BgL_objectz00_bglt BgL_tmpz00_6976;

																	BgL_tmpz00_6976 =
																		((BgL_objectz00_bglt) BgL_new1310z00_2430);
																	BgL_auxz00_6975 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6976);
																}
																BgL_auxz00_6974 =
																	((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_6975);
															}
															((((BgL_rtl_inszf2bbvzf2_bglt)
																		COBJECT(BgL_auxz00_6974))->BgL_z52hashz52) =
																((obj_t) BgL_auxz00_6980), BUNSPEC);
														}
														BgL_sz00_2424 = BgL_new1310z00_2430;
													}
												else
													{	/* SawMill/bbv-specialize.scm 179 */
														BgL_rtl_ifnez00_bglt BgL_i1322z00_2443;

														BgL_i1322z00_2443 =
															((BgL_rtl_ifnez00_bglt)
															(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210))))->
																BgL_funz00));
														{	/* SawMill/bbv-specialize.scm 180 */
															BgL_rtl_insz00_bglt BgL_new1323z00_2445;

															{	/* SawMill/bbv-specialize.scm 180 */
																BgL_rtl_insz00_bglt BgL_tmp1331z00_2453;
																BgL_rtl_inszf2bbvzf2_bglt BgL_wide1332z00_2454;

																{
																	BgL_rtl_insz00_bglt BgL_auxz00_6994;

																	{	/* SawMill/bbv-specialize.scm 180 */
																		BgL_rtl_insz00_bglt BgL_new1330z00_2456;

																		BgL_new1330z00_2456 =
																			((BgL_rtl_insz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_insz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 180 */
																			long BgL_arg2050z00_2457;

																			{	/* SawMill/bbv-specialize.scm 180 */
																				long BgL_res2635z00_3978;

																				BgL_res2635z00_3978 =
																					BGL_CLASS_INDEX
																					(BGl_rtl_insz00zzsaw_defsz00);
																				BgL_arg2050z00_2457 =
																					BgL_res2635z00_3978;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1330z00_2456),
																				BgL_arg2050z00_2457);
																		}
																		{	/* SawMill/bbv-specialize.scm 180 */
																			BgL_objectz00_bglt BgL_tmpz00_6999;

																			BgL_tmpz00_6999 =
																				((BgL_objectz00_bglt)
																				BgL_new1330z00_2456);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6999,
																				BFALSE);
																		}
																		((BgL_objectz00_bglt) BgL_new1330z00_2456);
																		BgL_auxz00_6994 = BgL_new1330z00_2456;
																	}
																	BgL_tmp1331z00_2453 =
																		((BgL_rtl_insz00_bglt) BgL_auxz00_6994);
																}
																BgL_wide1332z00_2454 =
																	((BgL_rtl_inszf2bbvzf2_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_rtl_inszf2bbvzf2_bgl))));
																{	/* SawMill/bbv-specialize.scm 180 */
																	obj_t BgL_auxz00_7007;
																	BgL_objectz00_bglt BgL_tmpz00_7005;

																	BgL_auxz00_7007 =
																		((obj_t) BgL_wide1332z00_2454);
																	BgL_tmpz00_7005 =
																		((BgL_objectz00_bglt) BgL_tmp1331z00_2453);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7005,
																		BgL_auxz00_7007);
																}
																((BgL_objectz00_bglt) BgL_tmp1331z00_2453);
																{	/* SawMill/bbv-specialize.scm 180 */
																	long BgL_arg2049z00_2455;

																	{	/* SawMill/bbv-specialize.scm 180 */
																		long BgL_res2636z00_3984;

																		BgL_res2636z00_3984 =
																			BGL_CLASS_INDEX
																			(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																		BgL_arg2049z00_2455 = BgL_res2636z00_3984;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_tmp1331z00_2453),
																		BgL_arg2049z00_2455);
																}
																BgL_new1323z00_2445 =
																	((BgL_rtl_insz00_bglt) BgL_tmp1331z00_2453);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1323z00_2445)))->BgL_locz00) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_210))->BgL_locz00)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1323z00_2445)))->
																	BgL_z52spillz52) =
																((obj_t) (((BgL_rtl_insz00_bglt)
																			COBJECT(BgL_iz00_210))->BgL_z52spillz52)),
																BUNSPEC);
															((((BgL_rtl_insz00_bglt)
																		COBJECT(((BgL_rtl_insz00_bglt)
																				BgL_new1323z00_2445)))->BgL_destz00) =
																((obj_t) BFALSE), BUNSPEC);
															{
																BgL_rtl_funz00_bglt BgL_auxz00_7023;

																{	/* SawMill/bbv-specialize.scm 181 */
																	BgL_rtl_goz00_bglt BgL_new1334z00_2446;

																	{	/* SawMill/bbv-specialize.scm 181 */
																		BgL_rtl_goz00_bglt BgL_new1333z00_2447;

																		BgL_new1333z00_2447 =
																			((BgL_rtl_goz00_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_goz00_bgl))));
																		{	/* SawMill/bbv-specialize.scm 181 */
																			long BgL_arg2048z00_2448;

																			{	/* SawMill/bbv-specialize.scm 181 */
																				long BgL_res2637z00_3988;

																				{	/* SawMill/bbv-specialize.scm 181 */
																					obj_t BgL_classz00_3987;

																					BgL_classz00_3987 =
																						BGl_rtl_goz00zzsaw_defsz00;
																					BgL_res2637z00_3988 =
																						BGL_CLASS_INDEX(BgL_classz00_3987);
																				}
																				BgL_arg2048z00_2448 =
																					BgL_res2637z00_3988;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_new1333z00_2447),
																				BgL_arg2048z00_2448);
																		}
																		BgL_new1334z00_2446 = BgL_new1333z00_2447;
																	}
																	((((BgL_rtl_funz00_bglt) COBJECT(
																					((BgL_rtl_funz00_bglt)
																						BgL_new1334z00_2446)))->
																			BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
																	((((BgL_rtl_goz00_bglt)
																				COBJECT(BgL_new1334z00_2446))->
																			BgL_toz00) =
																		((BgL_blockz00_bglt) ((
																					(BgL_rtl_ifnez00_bglt)
																					COBJECT(BgL_i1322z00_2443))->
																				BgL_thenz00)), BUNSPEC);
																	BgL_auxz00_7023 =
																		((BgL_rtl_funz00_bglt) BgL_new1334z00_2446);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1323z00_2445)))->BgL_funz00) =
																	((BgL_rtl_funz00_bglt) BgL_auxz00_7023),
																	BUNSPEC);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_new1323z00_2445)))->BgL_argsz00) =
																((obj_t) BNIL), BUNSPEC);
															{
																obj_t BgL_auxz00_7043;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7037;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7044;

																	{
																		obj_t BgL_auxz00_7045;

																		{	/* SawMill/bbv-specialize.scm 183 */
																			BgL_objectz00_bglt BgL_tmpz00_7046;

																			BgL_tmpz00_7046 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_210));
																			BgL_auxz00_7045 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7046);
																		}
																		BgL_auxz00_7044 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7045);
																	}
																	BgL_auxz00_7043 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7044))->BgL_defz00);
																}
																{
																	obj_t BgL_auxz00_7038;

																	{	/* SawMill/bbv-specialize.scm 183 */
																		BgL_objectz00_bglt BgL_tmpz00_7039;

																		BgL_tmpz00_7039 =
																			((BgL_objectz00_bglt)
																			BgL_new1323z00_2445);
																		BgL_auxz00_7038 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_7039);
																	}
																	BgL_auxz00_7037 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_7038);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7037))->BgL_defz00) =
																	((obj_t) BgL_auxz00_7043), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_7059;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7053;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7060;

																	{
																		obj_t BgL_auxz00_7061;

																		{	/* SawMill/bbv-specialize.scm 183 */
																			BgL_objectz00_bglt BgL_tmpz00_7062;

																			BgL_tmpz00_7062 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_210));
																			BgL_auxz00_7061 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7062);
																		}
																		BgL_auxz00_7060 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7061);
																	}
																	BgL_auxz00_7059 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7060))->BgL_outz00);
																}
																{
																	obj_t BgL_auxz00_7054;

																	{	/* SawMill/bbv-specialize.scm 183 */
																		BgL_objectz00_bglt BgL_tmpz00_7055;

																		BgL_tmpz00_7055 =
																			((BgL_objectz00_bglt)
																			BgL_new1323z00_2445);
																		BgL_auxz00_7054 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_7055);
																	}
																	BgL_auxz00_7053 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_7054);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7053))->BgL_outz00) =
																	((obj_t) BgL_auxz00_7059), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_7075;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7069;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7076;

																	{
																		obj_t BgL_auxz00_7077;

																		{	/* SawMill/bbv-specialize.scm 183 */
																			BgL_objectz00_bglt BgL_tmpz00_7078;

																			BgL_tmpz00_7078 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_210));
																			BgL_auxz00_7077 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7078);
																		}
																		BgL_auxz00_7076 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7077);
																	}
																	BgL_auxz00_7075 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7076))->BgL_inz00);
																}
																{
																	obj_t BgL_auxz00_7070;

																	{	/* SawMill/bbv-specialize.scm 183 */
																		BgL_objectz00_bglt BgL_tmpz00_7071;

																		BgL_tmpz00_7071 =
																			((BgL_objectz00_bglt)
																			BgL_new1323z00_2445);
																		BgL_auxz00_7070 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_7071);
																	}
																	BgL_auxz00_7069 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_7070);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7069))->BgL_inz00) =
																	((obj_t) BgL_auxz00_7075), BUNSPEC);
															}
															{
																obj_t BgL_auxz00_7091;
																BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7085;

																{
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7092;

																	{
																		obj_t BgL_auxz00_7093;

																		{	/* SawMill/bbv-specialize.scm 183 */
																			BgL_objectz00_bglt BgL_tmpz00_7094;

																			BgL_tmpz00_7094 =
																				((BgL_objectz00_bglt)
																				((BgL_rtl_insz00_bglt) BgL_iz00_210));
																			BgL_auxz00_7093 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7094);
																		}
																		BgL_auxz00_7092 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7093);
																	}
																	BgL_auxz00_7091 =
																		(((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7092))->
																		BgL_z52hashz52);
																}
																{
																	obj_t BgL_auxz00_7086;

																	{	/* SawMill/bbv-specialize.scm 183 */
																		BgL_objectz00_bglt BgL_tmpz00_7087;

																		BgL_tmpz00_7087 =
																			((BgL_objectz00_bglt)
																			BgL_new1323z00_2445);
																		BgL_auxz00_7086 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_7087);
																	}
																	BgL_auxz00_7085 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BgL_auxz00_7086);
																}
																((((BgL_rtl_inszf2bbvzf2_bglt)
																			COBJECT(BgL_auxz00_7085))->
																		BgL_z52hashz52) =
																	((obj_t) BgL_auxz00_7091), BUNSPEC);
															}
															BgL_sz00_2424 = BgL_new1323z00_2445;
											}}}
											{	/* SawMill/bbv-specialize.scm 184 */
												int BgL_res2638z00_3999;

												{	/* SawMill/bbv-specialize.scm 184 */
													int BgL_tmpz00_7101;

													BgL_tmpz00_7101 = (int) (((long) 2));
													BgL_res2638z00_3999 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7101);
												} BgL_res2638z00_3999;
											}
											{	/* SawMill/bbv-specialize.scm 184 */
												int BgL_tmpz00_7104;

												BgL_tmpz00_7104 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_7104, BgL_ctxz00_211);
											}
											return BgL_sz00_2424;
										}
									else
										{	/* SawMill/bbv-specialize.scm 185 */
											bool_t BgL_test2894z00_7107;

											if (
												(((obj_t)
														(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																	((BgL_bbvzd2ctxentryzd2_bglt)
																		BgL_ez00_2388)))->BgL_typz00)) ==
													BgL_typez00_2386))
												{	/* SawMill/bbv-specialize.scm 185 */
													if (
														(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																	((BgL_bbvzd2ctxentryzd2_bglt)
																		BgL_ez00_2388)))->BgL_flagz00))
														{	/* SawMill/bbv-specialize.scm 185 */
															BgL_test2894z00_7107 = ((bool_t) 0);
														}
													else
														{	/* SawMill/bbv-specialize.scm 185 */
															BgL_test2894z00_7107 = ((bool_t) 1);
														}
												}
											else
												{	/* SawMill/bbv-specialize.scm 185 */
													BgL_test2894z00_7107 = ((bool_t) 0);
												}
											if (BgL_test2894z00_7107)
												{	/* SawMill/bbv-specialize.scm 187 */
													BgL_rtl_insz00_bglt BgL_sz00_2465;

													{	/* SawMill/bbv-specialize.scm 187 */
														bool_t BgL_test2897z00_7116;

														{	/* SawMill/bbv-specialize.scm 187 */
															BgL_rtl_funz00_bglt BgL_arg2069z00_2499;

															BgL_arg2069z00_2499 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_210))))->
																BgL_funz00);
															BgL_test2897z00_7116 =
																BGl_isazf3zf3zz__objectz00(((obj_t)
																	BgL_arg2069z00_2499),
																BGl_rtl_ifeqz00zzsaw_defsz00);
														}
														if (BgL_test2897z00_7116)
															{	/* SawMill/bbv-specialize.scm 188 */
																BgL_rtl_ifeqz00_bglt BgL_i1336z00_2470;

																BgL_i1336z00_2470 =
																	((BgL_rtl_ifeqz00_bglt)
																	(((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						BgL_iz00_210))))->BgL_funz00));
																{	/* SawMill/bbv-specialize.scm 189 */
																	BgL_rtl_insz00_bglt BgL_new1337z00_2472;

																	{	/* SawMill/bbv-specialize.scm 189 */
																		BgL_rtl_insz00_bglt BgL_tmp1345z00_2480;
																		BgL_rtl_inszf2bbvzf2_bglt
																			BgL_wide1346z00_2481;
																		{
																			BgL_rtl_insz00_bglt BgL_auxz00_7126;

																			{	/* SawMill/bbv-specialize.scm 189 */
																				BgL_rtl_insz00_bglt BgL_new1344z00_2483;

																				BgL_new1344z00_2483 =
																					((BgL_rtl_insz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_rtl_insz00_bgl))));
																				{	/* SawMill/bbv-specialize.scm 189 */
																					long BgL_arg2063z00_2484;

																					{	/* SawMill/bbv-specialize.scm 189 */
																						long BgL_res2639z00_4003;

																						BgL_res2639z00_4003 =
																							BGL_CLASS_INDEX
																							(BGl_rtl_insz00zzsaw_defsz00);
																						BgL_arg2063z00_2484 =
																							BgL_res2639z00_4003;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1344z00_2483),
																						BgL_arg2063z00_2484);
																				}
																				{	/* SawMill/bbv-specialize.scm 189 */
																					BgL_objectz00_bglt BgL_tmpz00_7131;

																					BgL_tmpz00_7131 =
																						((BgL_objectz00_bglt)
																						BgL_new1344z00_2483);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_7131, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1344z00_2483);
																				BgL_auxz00_7126 = BgL_new1344z00_2483;
																			}
																			BgL_tmp1345z00_2480 =
																				((BgL_rtl_insz00_bglt) BgL_auxz00_7126);
																		}
																		BgL_wide1346z00_2481 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_inszf2bbvzf2_bgl))));
																		{	/* SawMill/bbv-specialize.scm 189 */
																			obj_t BgL_auxz00_7139;
																			BgL_objectz00_bglt BgL_tmpz00_7137;

																			BgL_auxz00_7139 =
																				((obj_t) BgL_wide1346z00_2481);
																			BgL_tmpz00_7137 =
																				((BgL_objectz00_bglt)
																				BgL_tmp1345z00_2480);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7137,
																				BgL_auxz00_7139);
																		}
																		((BgL_objectz00_bglt) BgL_tmp1345z00_2480);
																		{	/* SawMill/bbv-specialize.scm 189 */
																			long BgL_arg2062z00_2482;

																			{	/* SawMill/bbv-specialize.scm 189 */
																				long BgL_res2640z00_4009;

																				BgL_res2640z00_4009 =
																					BGL_CLASS_INDEX
																					(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																				BgL_arg2062z00_2482 =
																					BgL_res2640z00_4009;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_tmp1345z00_2480),
																				BgL_arg2062z00_2482);
																		}
																		BgL_new1337z00_2472 =
																			((BgL_rtl_insz00_bglt)
																			BgL_tmp1345z00_2480);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1337z00_2472)))->
																			BgL_locz00) =
																		((obj_t) (((BgL_rtl_insz00_bglt)
																					COBJECT(BgL_iz00_210))->BgL_locz00)),
																		BUNSPEC);
																	((((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_new1337z00_2472)))->
																			BgL_z52spillz52) =
																		((obj_t) (((BgL_rtl_insz00_bglt)
																					COBJECT(BgL_iz00_210))->
																				BgL_z52spillz52)), BUNSPEC);
																	((((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_new1337z00_2472)))->
																			BgL_destz00) = ((obj_t) BFALSE), BUNSPEC);
																	{
																		BgL_rtl_funz00_bglt BgL_auxz00_7155;

																		{	/* SawMill/bbv-specialize.scm 190 */
																			BgL_rtl_goz00_bglt BgL_new1348z00_2473;

																			{	/* SawMill/bbv-specialize.scm 190 */
																				BgL_rtl_goz00_bglt BgL_new1347z00_2474;

																				BgL_new1347z00_2474 =
																					((BgL_rtl_goz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_rtl_goz00_bgl))));
																				{	/* SawMill/bbv-specialize.scm 190 */
																					long BgL_arg2061z00_2475;

																					{	/* SawMill/bbv-specialize.scm 190 */
																						long BgL_res2641z00_4013;

																						{	/* SawMill/bbv-specialize.scm 190 */
																							obj_t BgL_classz00_4012;

																							BgL_classz00_4012 =
																								BGl_rtl_goz00zzsaw_defsz00;
																							BgL_res2641z00_4013 =
																								BGL_CLASS_INDEX
																								(BgL_classz00_4012);
																						}
																						BgL_arg2061z00_2475 =
																							BgL_res2641z00_4013;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1347z00_2474),
																						BgL_arg2061z00_2475);
																				}
																				BgL_new1348z00_2473 =
																					BgL_new1347z00_2474;
																			}
																			((((BgL_rtl_funz00_bglt) COBJECT(
																							((BgL_rtl_funz00_bglt)
																								BgL_new1348z00_2473)))->
																					BgL_locz00) =
																				((obj_t) BFALSE), BUNSPEC);
																			((((BgL_rtl_goz00_bglt)
																						COBJECT(BgL_new1348z00_2473))->
																					BgL_toz00) =
																				((BgL_blockz00_bglt) ((
																							(BgL_rtl_ifeqz00_bglt)
																							COBJECT(BgL_i1336z00_2470))->
																						BgL_thenz00)), BUNSPEC);
																			BgL_auxz00_7155 =
																				((BgL_rtl_funz00_bglt)
																				BgL_new1348z00_2473);
																		}
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_new1337z00_2472)))->
																				BgL_funz00) =
																			((BgL_rtl_funz00_bglt) BgL_auxz00_7155),
																			BUNSPEC);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1337z00_2472)))->
																			BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
																	{
																		obj_t BgL_auxz00_7175;
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7169;

																		{
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7176;

																			{
																				obj_t BgL_auxz00_7177;

																				{	/* SawMill/bbv-specialize.scm 192 */
																					BgL_objectz00_bglt BgL_tmpz00_7178;

																					BgL_tmpz00_7178 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_210));
																					BgL_auxz00_7177 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7178);
																				}
																				BgL_auxz00_7176 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7177);
																			}
																			BgL_auxz00_7175 =
																				(((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7176))->
																				BgL_defz00);
																		}
																		{
																			obj_t BgL_auxz00_7170;

																			{	/* SawMill/bbv-specialize.scm 192 */
																				BgL_objectz00_bglt BgL_tmpz00_7171;

																				BgL_tmpz00_7171 =
																					((BgL_objectz00_bglt)
																					BgL_new1337z00_2472);
																				BgL_auxz00_7170 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7171);
																			}
																			BgL_auxz00_7169 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7170);
																		}
																		((((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7169))->
																				BgL_defz00) =
																			((obj_t) BgL_auxz00_7175), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7191;
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7185;

																		{
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7192;

																			{
																				obj_t BgL_auxz00_7193;

																				{	/* SawMill/bbv-specialize.scm 192 */
																					BgL_objectz00_bglt BgL_tmpz00_7194;

																					BgL_tmpz00_7194 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_210));
																					BgL_auxz00_7193 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7194);
																				}
																				BgL_auxz00_7192 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7193);
																			}
																			BgL_auxz00_7191 =
																				(((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7192))->
																				BgL_outz00);
																		}
																		{
																			obj_t BgL_auxz00_7186;

																			{	/* SawMill/bbv-specialize.scm 192 */
																				BgL_objectz00_bglt BgL_tmpz00_7187;

																				BgL_tmpz00_7187 =
																					((BgL_objectz00_bglt)
																					BgL_new1337z00_2472);
																				BgL_auxz00_7186 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7187);
																			}
																			BgL_auxz00_7185 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7186);
																		}
																		((((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7185))->
																				BgL_outz00) =
																			((obj_t) BgL_auxz00_7191), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7207;
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7201;

																		{
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7208;

																			{
																				obj_t BgL_auxz00_7209;

																				{	/* SawMill/bbv-specialize.scm 192 */
																					BgL_objectz00_bglt BgL_tmpz00_7210;

																					BgL_tmpz00_7210 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_210));
																					BgL_auxz00_7209 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7210);
																				}
																				BgL_auxz00_7208 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7209);
																			}
																			BgL_auxz00_7207 =
																				(((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7208))->BgL_inz00);
																		}
																		{
																			obj_t BgL_auxz00_7202;

																			{	/* SawMill/bbv-specialize.scm 192 */
																				BgL_objectz00_bglt BgL_tmpz00_7203;

																				BgL_tmpz00_7203 =
																					((BgL_objectz00_bglt)
																					BgL_new1337z00_2472);
																				BgL_auxz00_7202 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7203);
																			}
																			BgL_auxz00_7201 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7202);
																		}
																		((((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7201))->
																				BgL_inz00) =
																			((obj_t) BgL_auxz00_7207), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7223;
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7217;

																		{
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7224;

																			{
																				obj_t BgL_auxz00_7225;

																				{	/* SawMill/bbv-specialize.scm 192 */
																					BgL_objectz00_bglt BgL_tmpz00_7226;

																					BgL_tmpz00_7226 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_210));
																					BgL_auxz00_7225 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7226);
																				}
																				BgL_auxz00_7224 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7225);
																			}
																			BgL_auxz00_7223 =
																				(((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7224))->
																				BgL_z52hashz52);
																		}
																		{
																			obj_t BgL_auxz00_7218;

																			{	/* SawMill/bbv-specialize.scm 192 */
																				BgL_objectz00_bglt BgL_tmpz00_7219;

																				BgL_tmpz00_7219 =
																					((BgL_objectz00_bglt)
																					BgL_new1337z00_2472);
																				BgL_auxz00_7218 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7219);
																			}
																			BgL_auxz00_7217 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7218);
																		}
																		((((BgL_rtl_inszf2bbvzf2_bglt)
																					COBJECT(BgL_auxz00_7217))->
																				BgL_z52hashz52) =
																			((obj_t) BgL_auxz00_7223), BUNSPEC);
																	}
																	BgL_sz00_2465 = BgL_new1337z00_2472;
															}}
														else
															{	/* SawMill/bbv-specialize.scm 193 */
																BgL_rtl_insz00_bglt BgL_new1349z00_2486;

																{	/* SawMill/bbv-specialize.scm 193 */
																	BgL_rtl_insz00_bglt BgL_tmp1357z00_2494;
																	BgL_rtl_inszf2bbvzf2_bglt
																		BgL_wide1358z00_2495;
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_7233;

																		{	/* SawMill/bbv-specialize.scm 193 */
																			BgL_rtl_insz00_bglt BgL_new1356z00_2497;

																			BgL_new1356z00_2497 =
																				((BgL_rtl_insz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_insz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 193 */
																				long BgL_arg2068z00_2498;

																				{	/* SawMill/bbv-specialize.scm 193 */
																					long BgL_res2642z00_4025;

																					BgL_res2642z00_4025 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_insz00zzsaw_defsz00);
																					BgL_arg2068z00_2498 =
																						BgL_res2642z00_4025;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1356z00_2497),
																					BgL_arg2068z00_2498);
																			}
																			{	/* SawMill/bbv-specialize.scm 193 */
																				BgL_objectz00_bglt BgL_tmpz00_7238;

																				BgL_tmpz00_7238 =
																					((BgL_objectz00_bglt)
																					BgL_new1356z00_2497);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7238,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1356z00_2497);
																			BgL_auxz00_7233 = BgL_new1356z00_2497;
																		}
																		BgL_tmp1357z00_2494 =
																			((BgL_rtl_insz00_bglt) BgL_auxz00_7233);
																	}
																	BgL_wide1358z00_2495 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_inszf2bbvzf2_bgl))));
																	{	/* SawMill/bbv-specialize.scm 193 */
																		obj_t BgL_auxz00_7246;
																		BgL_objectz00_bglt BgL_tmpz00_7244;

																		BgL_auxz00_7246 =
																			((obj_t) BgL_wide1358z00_2495);
																		BgL_tmpz00_7244 =
																			((BgL_objectz00_bglt)
																			BgL_tmp1357z00_2494);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7244,
																			BgL_auxz00_7246);
																	}
																	((BgL_objectz00_bglt) BgL_tmp1357z00_2494);
																	{	/* SawMill/bbv-specialize.scm 193 */
																		long BgL_arg2066z00_2496;

																		{	/* SawMill/bbv-specialize.scm 193 */
																			long BgL_res2643z00_4031;

																			BgL_res2643z00_4031 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																			BgL_arg2066z00_2496 = BgL_res2643z00_4031;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_tmp1357z00_2494),
																			BgL_arg2066z00_2496);
																	}
																	BgL_new1349z00_2486 =
																		((BgL_rtl_insz00_bglt) BgL_tmp1357z00_2494);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1349z00_2486)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1349z00_2486)))->
																		BgL_z52spillz52) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->
																			BgL_z52spillz52)), BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1349z00_2486)))->BgL_destz00) =
																	((obj_t) BFALSE), BUNSPEC);
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_7262;

																	{	/* SawMill/bbv-specialize.scm 194 */
																		BgL_rtl_nopz00_bglt BgL_new1360z00_2487;

																		{	/* SawMill/bbv-specialize.scm 194 */
																			BgL_rtl_nopz00_bglt BgL_new1359z00_2488;

																			BgL_new1359z00_2488 =
																				((BgL_rtl_nopz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_nopz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 194 */
																				long BgL_arg2065z00_2489;

																				{	/* SawMill/bbv-specialize.scm 194 */
																					long BgL_res2644z00_4035;

																					{	/* SawMill/bbv-specialize.scm 194 */
																						obj_t BgL_classz00_4034;

																						BgL_classz00_4034 =
																							BGl_rtl_nopz00zzsaw_defsz00;
																						BgL_res2644z00_4035 =
																							BGL_CLASS_INDEX
																							(BgL_classz00_4034);
																					}
																					BgL_arg2065z00_2489 =
																						BgL_res2644z00_4035;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1359z00_2488),
																					BgL_arg2065z00_2489);
																			}
																			BgL_new1360z00_2487 = BgL_new1359z00_2488;
																		}
																		((((BgL_rtl_funz00_bglt) COBJECT(
																						((BgL_rtl_funz00_bglt)
																							BgL_new1360z00_2487)))->
																				BgL_locz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		BgL_auxz00_7262 =
																			((BgL_rtl_funz00_bglt)
																			BgL_new1360z00_2487);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1349z00_2486)))->
																			BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_7262),
																		BUNSPEC);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1349z00_2486)))->BgL_argsz00) =
																	((obj_t) BNIL), BUNSPEC);
																{
																	obj_t BgL_auxz00_7280;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7274;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7281;

																		{
																			obj_t BgL_auxz00_7282;

																			{	/* SawMill/bbv-specialize.scm 196 */
																				BgL_objectz00_bglt BgL_tmpz00_7283;

																				BgL_tmpz00_7283 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7282 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7283);
																			}
																			BgL_auxz00_7281 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7282);
																		}
																		BgL_auxz00_7280 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7281))->BgL_defz00);
																	}
																	{
																		obj_t BgL_auxz00_7275;

																		{	/* SawMill/bbv-specialize.scm 196 */
																			BgL_objectz00_bglt BgL_tmpz00_7276;

																			BgL_tmpz00_7276 =
																				((BgL_objectz00_bglt)
																				BgL_new1349z00_2486);
																			BgL_auxz00_7275 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7276);
																		}
																		BgL_auxz00_7274 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7275);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7274))->BgL_defz00) =
																		((obj_t) BgL_auxz00_7280), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7296;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7290;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7297;

																		{
																			obj_t BgL_auxz00_7298;

																			{	/* SawMill/bbv-specialize.scm 196 */
																				BgL_objectz00_bglt BgL_tmpz00_7299;

																				BgL_tmpz00_7299 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7298 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7299);
																			}
																			BgL_auxz00_7297 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7298);
																		}
																		BgL_auxz00_7296 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7297))->BgL_outz00);
																	}
																	{
																		obj_t BgL_auxz00_7291;

																		{	/* SawMill/bbv-specialize.scm 196 */
																			BgL_objectz00_bglt BgL_tmpz00_7292;

																			BgL_tmpz00_7292 =
																				((BgL_objectz00_bglt)
																				BgL_new1349z00_2486);
																			BgL_auxz00_7291 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7292);
																		}
																		BgL_auxz00_7290 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7291);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7290))->BgL_outz00) =
																		((obj_t) BgL_auxz00_7296), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7312;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7306;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7313;

																		{
																			obj_t BgL_auxz00_7314;

																			{	/* SawMill/bbv-specialize.scm 196 */
																				BgL_objectz00_bglt BgL_tmpz00_7315;

																				BgL_tmpz00_7315 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7314 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7315);
																			}
																			BgL_auxz00_7313 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7314);
																		}
																		BgL_auxz00_7312 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7313))->BgL_inz00);
																	}
																	{
																		obj_t BgL_auxz00_7307;

																		{	/* SawMill/bbv-specialize.scm 196 */
																			BgL_objectz00_bglt BgL_tmpz00_7308;

																			BgL_tmpz00_7308 =
																				((BgL_objectz00_bglt)
																				BgL_new1349z00_2486);
																			BgL_auxz00_7307 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7308);
																		}
																		BgL_auxz00_7306 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7307);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7306))->BgL_inz00) =
																		((obj_t) BgL_auxz00_7312), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7328;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7322;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7329;

																		{
																			obj_t BgL_auxz00_7330;

																			{	/* SawMill/bbv-specialize.scm 196 */
																				BgL_objectz00_bglt BgL_tmpz00_7331;

																				BgL_tmpz00_7331 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7330 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7331);
																			}
																			BgL_auxz00_7329 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7330);
																		}
																		BgL_auxz00_7328 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7329))->
																			BgL_z52hashz52);
																	}
																	{
																		obj_t BgL_auxz00_7323;

																		{	/* SawMill/bbv-specialize.scm 196 */
																			BgL_objectz00_bglt BgL_tmpz00_7324;

																			BgL_tmpz00_7324 =
																				((BgL_objectz00_bglt)
																				BgL_new1349z00_2486);
																			BgL_auxz00_7323 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7324);
																		}
																		BgL_auxz00_7322 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7323);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7322))->
																			BgL_z52hashz52) =
																		((obj_t) BgL_auxz00_7328), BUNSPEC);
																}
																BgL_sz00_2465 = BgL_new1349z00_2486;
													}}
													{	/* SawMill/bbv-specialize.scm 197 */
														int BgL_res2645z00_4046;

														{	/* SawMill/bbv-specialize.scm 197 */
															int BgL_tmpz00_7338;

															BgL_tmpz00_7338 = (int) (((long) 2));
															BgL_res2645z00_4046 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7338);
														} BgL_res2645z00_4046;
													}
													{	/* SawMill/bbv-specialize.scm 197 */
														int BgL_tmpz00_7341;

														BgL_tmpz00_7341 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_7341,
															BgL_ctxz00_211);
													}
													return BgL_sz00_2465;
												}
											else
												{	/* SawMill/bbv-specialize.scm 198 */
													bool_t BgL_test2898z00_7344;

													if (
														(((obj_t)
																(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																			((BgL_bbvzd2ctxentryzd2_bglt)
																				BgL_ez00_2388)))->BgL_typz00)) ==
															BgL_typez00_2386))
														{	/* SawMill/bbv-specialize.scm 198 */
															BgL_test2898z00_7344 = ((bool_t) 0);
														}
													else
														{	/* SawMill/bbv-specialize.scm 198 */
															BgL_test2898z00_7344 =
																(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																		((BgL_bbvzd2ctxentryzd2_bglt)
																			BgL_ez00_2388)))->BgL_flagz00);
														}
													if (BgL_test2898z00_7344)
														{	/* SawMill/bbv-specialize.scm 200 */
															BgL_rtl_insz00_bglt BgL_sz00_2505;

															{	/* SawMill/bbv-specialize.scm 200 */
																bool_t BgL_test2900z00_7352;

																{	/* SawMill/bbv-specialize.scm 200 */
																	BgL_rtl_funz00_bglt BgL_arg2083z00_2539;

																	BgL_arg2083z00_2539 =
																		(((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						BgL_iz00_210))))->BgL_funz00);
																	BgL_test2900z00_7352 =
																		BGl_isazf3zf3zz__objectz00(((obj_t)
																			BgL_arg2083z00_2539),
																		BGl_rtl_ifnez00zzsaw_defsz00);
																}
																if (BgL_test2900z00_7352)
																	{	/* SawMill/bbv-specialize.scm 201 */
																		BgL_rtl_insz00_bglt BgL_new1362z00_2511;

																		{	/* SawMill/bbv-specialize.scm 201 */
																			BgL_rtl_insz00_bglt BgL_tmp1370z00_2519;
																			BgL_rtl_inszf2bbvzf2_bglt
																				BgL_wide1371z00_2520;
																			{
																				BgL_rtl_insz00_bglt BgL_auxz00_7358;

																				{	/* SawMill/bbv-specialize.scm 201 */
																					BgL_rtl_insz00_bglt
																						BgL_new1369z00_2522;
																					BgL_new1369z00_2522 =
																						((BgL_rtl_insz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_insz00_bgl))));
																					{	/* SawMill/bbv-specialize.scm 201 */
																						long BgL_arg2079z00_2523;

																						{	/* SawMill/bbv-specialize.scm 201 */
																							long BgL_res2646z00_4050;

																							BgL_res2646z00_4050 =
																								BGL_CLASS_INDEX
																								(BGl_rtl_insz00zzsaw_defsz00);
																							BgL_arg2079z00_2523 =
																								BgL_res2646z00_4050;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1369z00_2522),
																							BgL_arg2079z00_2523);
																					}
																					{	/* SawMill/bbv-specialize.scm 201 */
																						BgL_objectz00_bglt BgL_tmpz00_7363;

																						BgL_tmpz00_7363 =
																							((BgL_objectz00_bglt)
																							BgL_new1369z00_2522);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_7363, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1369z00_2522);
																					BgL_auxz00_7358 = BgL_new1369z00_2522;
																				}
																				BgL_tmp1370z00_2519 =
																					((BgL_rtl_insz00_bglt)
																					BgL_auxz00_7358);
																			}
																			BgL_wide1371z00_2520 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_inszf2bbvzf2_bgl))));
																			{	/* SawMill/bbv-specialize.scm 201 */
																				obj_t BgL_auxz00_7371;
																				BgL_objectz00_bglt BgL_tmpz00_7369;

																				BgL_auxz00_7371 =
																					((obj_t) BgL_wide1371z00_2520);
																				BgL_tmpz00_7369 =
																					((BgL_objectz00_bglt)
																					BgL_tmp1370z00_2519);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7369,
																					BgL_auxz00_7371);
																			}
																			((BgL_objectz00_bglt)
																				BgL_tmp1370z00_2519);
																			{	/* SawMill/bbv-specialize.scm 201 */
																				long BgL_arg2078z00_2521;

																				{	/* SawMill/bbv-specialize.scm 201 */
																					long BgL_res2647z00_4056;

																					BgL_res2647z00_4056 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																					BgL_arg2078z00_2521 =
																						BgL_res2647z00_4056;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_tmp1370z00_2519),
																					BgL_arg2078z00_2521);
																			}
																			BgL_new1362z00_2511 =
																				((BgL_rtl_insz00_bglt)
																				BgL_tmp1370z00_2519);
																		}
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_new1362z00_2511)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_210))->
																					BgL_locz00)), BUNSPEC);
																		((((BgL_rtl_insz00_bglt)
																					COBJECT(((BgL_rtl_insz00_bglt)
																							BgL_new1362z00_2511)))->
																				BgL_z52spillz52) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_210))->
																					BgL_z52spillz52)), BUNSPEC);
																		((((BgL_rtl_insz00_bglt)
																					COBJECT(((BgL_rtl_insz00_bglt)
																							BgL_new1362z00_2511)))->
																				BgL_destz00) =
																			((obj_t) BFALSE), BUNSPEC);
																		{
																			BgL_rtl_funz00_bglt BgL_auxz00_7387;

																			{	/* SawMill/bbv-specialize.scm 202 */
																				BgL_rtl_nopz00_bglt BgL_new1373z00_2512;

																				{	/* SawMill/bbv-specialize.scm 202 */
																					BgL_rtl_nopz00_bglt
																						BgL_new1372z00_2513;
																					BgL_new1372z00_2513 =
																						((BgL_rtl_nopz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_nopz00_bgl))));
																					{	/* SawMill/bbv-specialize.scm 202 */
																						long BgL_arg2077z00_2514;

																						{	/* SawMill/bbv-specialize.scm 202 */
																							long BgL_res2648z00_4060;

																							{	/* SawMill/bbv-specialize.scm 202 */
																								obj_t BgL_classz00_4059;

																								BgL_classz00_4059 =
																									BGl_rtl_nopz00zzsaw_defsz00;
																								BgL_res2648z00_4060 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_4059);
																							}
																							BgL_arg2077z00_2514 =
																								BgL_res2648z00_4060;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1372z00_2513),
																							BgL_arg2077z00_2514);
																					}
																					BgL_new1373z00_2512 =
																						BgL_new1372z00_2513;
																				}
																				((((BgL_rtl_funz00_bglt) COBJECT(
																								((BgL_rtl_funz00_bglt)
																									BgL_new1373z00_2512)))->
																						BgL_locz00) =
																					((obj_t) BFALSE), BUNSPEC);
																				BgL_auxz00_7387 =
																					((BgL_rtl_funz00_bglt)
																					BgL_new1373z00_2512);
																			}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1362z00_2511)))->
																					BgL_funz00) =
																				((BgL_rtl_funz00_bglt) BgL_auxz00_7387),
																				BUNSPEC);
																		}
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_new1362z00_2511)))->
																				BgL_argsz00) = ((obj_t) BNIL), BUNSPEC);
																		{
																			obj_t BgL_auxz00_7405;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7399;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7406;
																				{
																					obj_t BgL_auxz00_7407;

																					{	/* SawMill/bbv-specialize.scm 204 */
																						BgL_objectz00_bglt BgL_tmpz00_7408;

																						BgL_tmpz00_7408 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_210));
																						BgL_auxz00_7407 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7408);
																					}
																					BgL_auxz00_7406 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7407);
																				}
																				BgL_auxz00_7405 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7406))->
																					BgL_defz00);
																			}
																			{
																				obj_t BgL_auxz00_7400;

																				{	/* SawMill/bbv-specialize.scm 204 */
																					BgL_objectz00_bglt BgL_tmpz00_7401;

																					BgL_tmpz00_7401 =
																						((BgL_objectz00_bglt)
																						BgL_new1362z00_2511);
																					BgL_auxz00_7400 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7401);
																				}
																				BgL_auxz00_7399 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7400);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7399))->
																					BgL_defz00) =
																				((obj_t) BgL_auxz00_7405), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_7421;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7415;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7422;
																				{
																					obj_t BgL_auxz00_7423;

																					{	/* SawMill/bbv-specialize.scm 204 */
																						BgL_objectz00_bglt BgL_tmpz00_7424;

																						BgL_tmpz00_7424 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_210));
																						BgL_auxz00_7423 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7424);
																					}
																					BgL_auxz00_7422 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7423);
																				}
																				BgL_auxz00_7421 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7422))->
																					BgL_outz00);
																			}
																			{
																				obj_t BgL_auxz00_7416;

																				{	/* SawMill/bbv-specialize.scm 204 */
																					BgL_objectz00_bglt BgL_tmpz00_7417;

																					BgL_tmpz00_7417 =
																						((BgL_objectz00_bglt)
																						BgL_new1362z00_2511);
																					BgL_auxz00_7416 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7417);
																				}
																				BgL_auxz00_7415 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7416);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7415))->
																					BgL_outz00) =
																				((obj_t) BgL_auxz00_7421), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_7437;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7431;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7438;
																				{
																					obj_t BgL_auxz00_7439;

																					{	/* SawMill/bbv-specialize.scm 204 */
																						BgL_objectz00_bglt BgL_tmpz00_7440;

																						BgL_tmpz00_7440 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_210));
																						BgL_auxz00_7439 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7440);
																					}
																					BgL_auxz00_7438 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7439);
																				}
																				BgL_auxz00_7437 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7438))->
																					BgL_inz00);
																			}
																			{
																				obj_t BgL_auxz00_7432;

																				{	/* SawMill/bbv-specialize.scm 204 */
																					BgL_objectz00_bglt BgL_tmpz00_7433;

																					BgL_tmpz00_7433 =
																						((BgL_objectz00_bglt)
																						BgL_new1362z00_2511);
																					BgL_auxz00_7432 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7433);
																				}
																				BgL_auxz00_7431 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7432);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7431))->
																					BgL_inz00) =
																				((obj_t) BgL_auxz00_7437), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_7453;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7447;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7454;
																				{
																					obj_t BgL_auxz00_7455;

																					{	/* SawMill/bbv-specialize.scm 204 */
																						BgL_objectz00_bglt BgL_tmpz00_7456;

																						BgL_tmpz00_7456 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_210));
																						BgL_auxz00_7455 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7456);
																					}
																					BgL_auxz00_7454 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7455);
																				}
																				BgL_auxz00_7453 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7454))->
																					BgL_z52hashz52);
																			}
																			{
																				obj_t BgL_auxz00_7448;

																				{	/* SawMill/bbv-specialize.scm 204 */
																					BgL_objectz00_bglt BgL_tmpz00_7449;

																					BgL_tmpz00_7449 =
																						((BgL_objectz00_bglt)
																						BgL_new1362z00_2511);
																					BgL_auxz00_7448 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7449);
																				}
																				BgL_auxz00_7447 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_7448);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_7447))->
																					BgL_z52hashz52) =
																				((obj_t) BgL_auxz00_7453), BUNSPEC);
																		}
																		BgL_sz00_2505 = BgL_new1362z00_2511;
																	}
																else
																	{	/* SawMill/bbv-specialize.scm 205 */
																		BgL_rtl_ifeqz00_bglt BgL_i1374z00_2524;

																		BgL_i1374z00_2524 =
																			((BgL_rtl_ifeqz00_bglt)
																			(((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_210))))->BgL_funz00));
																		{	/* SawMill/bbv-specialize.scm 206 */
																			BgL_rtl_insz00_bglt BgL_new1375z00_2526;

																			{	/* SawMill/bbv-specialize.scm 206 */
																				BgL_rtl_insz00_bglt BgL_tmp1383z00_2534;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_wide1384z00_2535;
																				{
																					BgL_rtl_insz00_bglt BgL_auxz00_7467;

																					{	/* SawMill/bbv-specialize.scm 206 */
																						BgL_rtl_insz00_bglt
																							BgL_new1382z00_2537;
																						BgL_new1382z00_2537 =
																							((BgL_rtl_insz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_rtl_insz00_bgl))));
																						{	/* SawMill/bbv-specialize.scm 206 */
																							long BgL_arg2082z00_2538;

																							{	/* SawMill/bbv-specialize.scm 206 */
																								long BgL_res2649z00_4072;

																								BgL_res2649z00_4072 =
																									BGL_CLASS_INDEX
																									(BGl_rtl_insz00zzsaw_defsz00);
																								BgL_arg2082z00_2538 =
																									BgL_res2649z00_4072;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1382z00_2537),
																								BgL_arg2082z00_2538);
																						}
																						{	/* SawMill/bbv-specialize.scm 206 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7472;
																							BgL_tmpz00_7472 =
																								((BgL_objectz00_bglt)
																								BgL_new1382z00_2537);
																							BGL_OBJECT_WIDENING_SET
																								(BgL_tmpz00_7472, BFALSE);
																						}
																						((BgL_objectz00_bglt)
																							BgL_new1382z00_2537);
																						BgL_auxz00_7467 =
																							BgL_new1382z00_2537;
																					}
																					BgL_tmp1383z00_2534 =
																						((BgL_rtl_insz00_bglt)
																						BgL_auxz00_7467);
																				}
																				BgL_wide1384z00_2535 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_rtl_inszf2bbvzf2_bgl))));
																				{	/* SawMill/bbv-specialize.scm 206 */
																					obj_t BgL_auxz00_7480;
																					BgL_objectz00_bglt BgL_tmpz00_7478;

																					BgL_auxz00_7480 =
																						((obj_t) BgL_wide1384z00_2535);
																					BgL_tmpz00_7478 =
																						((BgL_objectz00_bglt)
																						BgL_tmp1383z00_2534);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_7478, BgL_auxz00_7480);
																				}
																				((BgL_objectz00_bglt)
																					BgL_tmp1383z00_2534);
																				{	/* SawMill/bbv-specialize.scm 206 */
																					long BgL_arg2081z00_2536;

																					{	/* SawMill/bbv-specialize.scm 206 */
																						long BgL_res2650z00_4078;

																						BgL_res2650z00_4078 =
																							BGL_CLASS_INDEX
																							(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																						BgL_arg2081z00_2536 =
																							BgL_res2650z00_4078;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_tmp1383z00_2534),
																						BgL_arg2081z00_2536);
																				}
																				BgL_new1375z00_2526 =
																					((BgL_rtl_insz00_bglt)
																					BgL_tmp1383z00_2534);
																			}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1375z00_2526)))->
																					BgL_locz00) =
																				((obj_t) (((BgL_rtl_insz00_bglt)
																							COBJECT(BgL_iz00_210))->
																						BgL_locz00)), BUNSPEC);
																			((((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_new1375z00_2526)))->
																					BgL_z52spillz52) =
																				((obj_t) (((BgL_rtl_insz00_bglt)
																							COBJECT(BgL_iz00_210))->
																						BgL_z52spillz52)), BUNSPEC);
																			((((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_new1375z00_2526)))->
																					BgL_destz00) =
																				((obj_t) BFALSE), BUNSPEC);
																			{
																				BgL_rtl_funz00_bglt BgL_auxz00_7496;

																				{	/* SawMill/bbv-specialize.scm 207 */
																					BgL_rtl_goz00_bglt
																						BgL_new1386z00_2527;
																					{	/* SawMill/bbv-specialize.scm 207 */
																						BgL_rtl_goz00_bglt
																							BgL_new1385z00_2528;
																						BgL_new1385z00_2528 =
																							((BgL_rtl_goz00_bglt)
																							BOBJECT(GC_MALLOC(sizeof(struct
																										BgL_rtl_goz00_bgl))));
																						{	/* SawMill/bbv-specialize.scm 207 */
																							long BgL_arg2080z00_2529;

																							{	/* SawMill/bbv-specialize.scm 207 */
																								long BgL_res2651z00_4082;

																								{	/* SawMill/bbv-specialize.scm 207 */
																									obj_t BgL_classz00_4081;

																									BgL_classz00_4081 =
																										BGl_rtl_goz00zzsaw_defsz00;
																									BgL_res2651z00_4082 =
																										BGL_CLASS_INDEX
																										(BgL_classz00_4081);
																								}
																								BgL_arg2080z00_2529 =
																									BgL_res2651z00_4082;
																							}
																							BGL_OBJECT_CLASS_NUM_SET(
																								((BgL_objectz00_bglt)
																									BgL_new1385z00_2528),
																								BgL_arg2080z00_2529);
																						}
																						BgL_new1386z00_2527 =
																							BgL_new1385z00_2528;
																					}
																					((((BgL_rtl_funz00_bglt) COBJECT(
																									((BgL_rtl_funz00_bglt)
																										BgL_new1386z00_2527)))->
																							BgL_locz00) =
																						((obj_t) BFALSE), BUNSPEC);
																					((((BgL_rtl_goz00_bglt)
																								COBJECT(BgL_new1386z00_2527))->
																							BgL_toz00) =
																						((BgL_blockz00_bglt) ((
																									(BgL_rtl_ifeqz00_bglt)
																									COBJECT(BgL_i1374z00_2524))->
																								BgL_thenz00)), BUNSPEC);
																					BgL_auxz00_7496 =
																						((BgL_rtl_funz00_bglt)
																						BgL_new1386z00_2527);
																				}
																				((((BgL_rtl_insz00_bglt) COBJECT(
																								((BgL_rtl_insz00_bglt)
																									BgL_new1375z00_2526)))->
																						BgL_funz00) =
																					((BgL_rtl_funz00_bglt)
																						BgL_auxz00_7496), BUNSPEC);
																			}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1375z00_2526)))->
																					BgL_argsz00) =
																				((obj_t) BNIL), BUNSPEC);
																			{
																				obj_t BgL_auxz00_7516;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7510;
																				{
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_7517;
																					{
																						obj_t BgL_auxz00_7518;

																						{	/* SawMill/bbv-specialize.scm 209 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7519;
																							BgL_tmpz00_7519 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_insz00_bglt)
																									BgL_iz00_210));
																							BgL_auxz00_7518 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_7519);
																						}
																						BgL_auxz00_7517 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_7518);
																					}
																					BgL_auxz00_7516 =
																						(((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7517))->
																						BgL_defz00);
																				}
																				{
																					obj_t BgL_auxz00_7511;

																					{	/* SawMill/bbv-specialize.scm 209 */
																						BgL_objectz00_bglt BgL_tmpz00_7512;

																						BgL_tmpz00_7512 =
																							((BgL_objectz00_bglt)
																							BgL_new1375z00_2526);
																						BgL_auxz00_7511 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7512);
																					}
																					BgL_auxz00_7510 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7511);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7510))->
																						BgL_defz00) =
																					((obj_t) BgL_auxz00_7516), BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_7532;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7526;
																				{
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_7533;
																					{
																						obj_t BgL_auxz00_7534;

																						{	/* SawMill/bbv-specialize.scm 209 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7535;
																							BgL_tmpz00_7535 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_insz00_bglt)
																									BgL_iz00_210));
																							BgL_auxz00_7534 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_7535);
																						}
																						BgL_auxz00_7533 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_7534);
																					}
																					BgL_auxz00_7532 =
																						(((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7533))->
																						BgL_outz00);
																				}
																				{
																					obj_t BgL_auxz00_7527;

																					{	/* SawMill/bbv-specialize.scm 209 */
																						BgL_objectz00_bglt BgL_tmpz00_7528;

																						BgL_tmpz00_7528 =
																							((BgL_objectz00_bglt)
																							BgL_new1375z00_2526);
																						BgL_auxz00_7527 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7528);
																					}
																					BgL_auxz00_7526 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7527);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7526))->
																						BgL_outz00) =
																					((obj_t) BgL_auxz00_7532), BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_7548;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7542;
																				{
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_7549;
																					{
																						obj_t BgL_auxz00_7550;

																						{	/* SawMill/bbv-specialize.scm 209 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7551;
																							BgL_tmpz00_7551 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_insz00_bglt)
																									BgL_iz00_210));
																							BgL_auxz00_7550 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_7551);
																						}
																						BgL_auxz00_7549 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_7550);
																					}
																					BgL_auxz00_7548 =
																						(((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7549))->
																						BgL_inz00);
																				}
																				{
																					obj_t BgL_auxz00_7543;

																					{	/* SawMill/bbv-specialize.scm 209 */
																						BgL_objectz00_bglt BgL_tmpz00_7544;

																						BgL_tmpz00_7544 =
																							((BgL_objectz00_bglt)
																							BgL_new1375z00_2526);
																						BgL_auxz00_7543 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7544);
																					}
																					BgL_auxz00_7542 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7543);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7542))->
																						BgL_inz00) =
																					((obj_t) BgL_auxz00_7548), BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_7564;
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_7558;
																				{
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_7565;
																					{
																						obj_t BgL_auxz00_7566;

																						{	/* SawMill/bbv-specialize.scm 209 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_7567;
																							BgL_tmpz00_7567 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_insz00_bglt)
																									BgL_iz00_210));
																							BgL_auxz00_7566 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_7567);
																						}
																						BgL_auxz00_7565 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_7566);
																					}
																					BgL_auxz00_7564 =
																						(((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7565))->
																						BgL_z52hashz52);
																				}
																				{
																					obj_t BgL_auxz00_7559;

																					{	/* SawMill/bbv-specialize.scm 209 */
																						BgL_objectz00_bglt BgL_tmpz00_7560;

																						BgL_tmpz00_7560 =
																							((BgL_objectz00_bglt)
																							BgL_new1375z00_2526);
																						BgL_auxz00_7559 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_7560);
																					}
																					BgL_auxz00_7558 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_7559);
																				}
																				((((BgL_rtl_inszf2bbvzf2_bglt)
																							COBJECT(BgL_auxz00_7558))->
																						BgL_z52hashz52) =
																					((obj_t) BgL_auxz00_7564), BUNSPEC);
																			}
																			BgL_sz00_2505 = BgL_new1375z00_2526;
															}}}
															{	/* SawMill/bbv-specialize.scm 210 */
																int BgL_res2652z00_4093;

																{	/* SawMill/bbv-specialize.scm 210 */
																	int BgL_tmpz00_7574;

																	BgL_tmpz00_7574 = (int) (((long) 2));
																	BgL_res2652z00_4093 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7574);
																} BgL_res2652z00_4093;
															}
															{	/* SawMill/bbv-specialize.scm 210 */
																int BgL_tmpz00_7577;

																BgL_tmpz00_7577 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_7577,
																	BgL_ctxz00_211);
															}
															return BgL_sz00_2505;
														}
													else
														{	/* SawMill/bbv-specialize.scm 215 */
															BgL_rtl_insz00_bglt BgL_sz00_2541;

															{	/* SawMill/bbv-specialize.scm 215 */
																BgL_rtl_insz00_bglt BgL_new1388z00_2545;

																{	/* SawMill/bbv-specialize.scm 215 */
																	BgL_rtl_insz00_bglt BgL_tmp1396z00_2563;
																	BgL_rtl_inszf2bbvzf2_bglt
																		BgL_wide1397z00_2564;
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_7580;

																		{	/* SawMill/bbv-specialize.scm 215 */
																			BgL_rtl_insz00_bglt BgL_new1395z00_2566;

																			BgL_new1395z00_2566 =
																				((BgL_rtl_insz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_insz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 215 */
																				long BgL_arg2090z00_2567;

																				{	/* SawMill/bbv-specialize.scm 215 */
																					long BgL_res2653z00_4095;

																					BgL_res2653z00_4095 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_insz00zzsaw_defsz00);
																					BgL_arg2090z00_2567 =
																						BgL_res2653z00_4095;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1395z00_2566),
																					BgL_arg2090z00_2567);
																			}
																			{	/* SawMill/bbv-specialize.scm 215 */
																				BgL_objectz00_bglt BgL_tmpz00_7585;

																				BgL_tmpz00_7585 =
																					((BgL_objectz00_bglt)
																					BgL_new1395z00_2566);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7585,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1395z00_2566);
																			BgL_auxz00_7580 = BgL_new1395z00_2566;
																		}
																		BgL_tmp1396z00_2563 =
																			((BgL_rtl_insz00_bglt) BgL_auxz00_7580);
																	}
																	BgL_wide1397z00_2564 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_inszf2bbvzf2_bgl))));
																	{	/* SawMill/bbv-specialize.scm 215 */
																		obj_t BgL_auxz00_7593;
																		BgL_objectz00_bglt BgL_tmpz00_7591;

																		BgL_auxz00_7593 =
																			((obj_t) BgL_wide1397z00_2564);
																		BgL_tmpz00_7591 =
																			((BgL_objectz00_bglt)
																			BgL_tmp1396z00_2563);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7591,
																			BgL_auxz00_7593);
																	}
																	((BgL_objectz00_bglt) BgL_tmp1396z00_2563);
																	{	/* SawMill/bbv-specialize.scm 215 */
																		long BgL_arg2089z00_2565;

																		{	/* SawMill/bbv-specialize.scm 215 */
																			long BgL_res2654z00_4101;

																			BgL_res2654z00_4101 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																			BgL_arg2089z00_2565 = BgL_res2654z00_4101;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_tmp1396z00_2563),
																			BgL_arg2089z00_2565);
																	}
																	BgL_new1388z00_2545 =
																		((BgL_rtl_insz00_bglt) BgL_tmp1396z00_2563);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1388z00_2545)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1388z00_2545)))->
																		BgL_z52spillz52) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->
																			BgL_z52spillz52)), BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1388z00_2545)))->BgL_destz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->BgL_destz00)),
																	BUNSPEC);
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_7610;

																	{	/* SawMill/bbv-specialize.scm 216 */
																		bool_t BgL_test2901z00_7612;

																		{	/* SawMill/bbv-specialize.scm 216 */
																			BgL_rtl_funz00_bglt BgL_arg2088z00_2558;

																			BgL_arg2088z00_2558 =
																				(((BgL_rtl_insz00_bglt)
																					COBJECT(BgL_iz00_210))->BgL_funz00);
																			BgL_test2901z00_7612 =
																				BGl_isazf3zf3zz__objectz00(((obj_t)
																					BgL_arg2088z00_2558),
																				BGl_rtl_ifeqz00zzsaw_defsz00);
																		}
																		if (BgL_test2901z00_7612)
																			{	/* SawMill/bbv-specialize.scm 217 */
																				BgL_rtl_funz00_bglt
																					BgL_duplicated1400z00_2548;
																				BgL_rtl_ifeqz00_bglt
																					BgL_new1398z00_2549;
																				BgL_duplicated1400z00_2548 =
																					(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_210))->BgL_funz00);
																				{	/* SawMill/bbv-specialize.scm 217 */
																					BgL_rtl_ifeqz00_bglt
																						BgL_new1402z00_2551;
																					BgL_new1402z00_2551 =
																						((BgL_rtl_ifeqz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_ifeqz00_bgl))));
																					{	/* SawMill/bbv-specialize.scm 217 */
																						long BgL_arg2086z00_2552;

																						{	/* SawMill/bbv-specialize.scm 217 */
																							long BgL_res2655z00_4105;

																							{	/* SawMill/bbv-specialize.scm 217 */
																								obj_t BgL_classz00_4104;

																								BgL_classz00_4104 =
																									BGl_rtl_ifeqz00zzsaw_defsz00;
																								BgL_res2655z00_4105 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_4104);
																							}
																							BgL_arg2086z00_2552 =
																								BgL_res2655z00_4105;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1402z00_2551),
																							BgL_arg2086z00_2552);
																					}
																					BgL_new1398z00_2549 =
																						BgL_new1402z00_2551;
																				}
																				((((BgL_rtl_funz00_bglt) COBJECT(
																								((BgL_rtl_funz00_bglt)
																									BgL_new1398z00_2549)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_rtl_funz00_bglt)
																								COBJECT
																								(BgL_duplicated1400z00_2548))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_rtl_ifeqz00_bglt)
																							COBJECT(BgL_new1398z00_2549))->
																						BgL_thenz00) =
																					((BgL_blockz00_bglt) ((
																								(BgL_rtl_ifeqz00_bglt)
																								COBJECT(((BgL_rtl_ifeqz00_bglt)
																										BgL_duplicated1400z00_2548)))->
																							BgL_thenz00)), BUNSPEC);
																				BgL_auxz00_7610 =
																					((BgL_rtl_funz00_bglt)
																					BgL_new1398z00_2549);
																			}
																		else
																			{	/* SawMill/bbv-specialize.scm 218 */
																				BgL_rtl_funz00_bglt
																					BgL_duplicated1405z00_2553;
																				BgL_rtl_ifnez00_bglt
																					BgL_new1403z00_2554;
																				BgL_duplicated1405z00_2553 =
																					(((BgL_rtl_insz00_bglt)
																						COBJECT(BgL_iz00_210))->BgL_funz00);
																				{	/* SawMill/bbv-specialize.scm 218 */
																					BgL_rtl_ifnez00_bglt
																						BgL_new1407z00_2556;
																					BgL_new1407z00_2556 =
																						((BgL_rtl_ifnez00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_ifnez00_bgl))));
																					{	/* SawMill/bbv-specialize.scm 218 */
																						long BgL_arg2087z00_2557;

																						{	/* SawMill/bbv-specialize.scm 218 */
																							long BgL_res2656z00_4109;

																							{	/* SawMill/bbv-specialize.scm 218 */
																								obj_t BgL_classz00_4108;

																								BgL_classz00_4108 =
																									BGl_rtl_ifnez00zzsaw_defsz00;
																								BgL_res2656z00_4109 =
																									BGL_CLASS_INDEX
																									(BgL_classz00_4108);
																							}
																							BgL_arg2087z00_2557 =
																								BgL_res2656z00_4109;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1407z00_2556),
																							BgL_arg2087z00_2557);
																					}
																					BgL_new1403z00_2554 =
																						BgL_new1407z00_2556;
																				}
																				((((BgL_rtl_funz00_bglt) COBJECT(
																								((BgL_rtl_funz00_bglt)
																									BgL_new1403z00_2554)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_rtl_funz00_bglt)
																								COBJECT
																								(BgL_duplicated1405z00_2553))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_rtl_ifnez00_bglt)
																							COBJECT(BgL_new1403z00_2554))->
																						BgL_thenz00) =
																					((BgL_blockz00_bglt) ((
																								(BgL_rtl_ifnez00_bglt)
																								COBJECT(((BgL_rtl_ifnez00_bglt)
																										BgL_duplicated1405z00_2553)))->
																							BgL_thenz00)), BUNSPEC);
																				BgL_auxz00_7610 =
																					((BgL_rtl_funz00_bglt)
																					BgL_new1403z00_2554);
																	}}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1388z00_2545)))->
																			BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_7610),
																		BUNSPEC);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1388z00_2545)))->BgL_argsz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(BgL_iz00_210))->BgL_argsz00)),
																	BUNSPEC);
																{
																	obj_t BgL_auxz00_7650;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7644;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7651;

																		{
																			obj_t BgL_auxz00_7652;

																			{	/* SawMill/bbv-specialize.scm 216 */
																				BgL_objectz00_bglt BgL_tmpz00_7653;

																				BgL_tmpz00_7653 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7652 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7653);
																			}
																			BgL_auxz00_7651 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7652);
																		}
																		BgL_auxz00_7650 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7651))->BgL_defz00);
																	}
																	{
																		obj_t BgL_auxz00_7645;

																		{	/* SawMill/bbv-specialize.scm 216 */
																			BgL_objectz00_bglt BgL_tmpz00_7646;

																			BgL_tmpz00_7646 =
																				((BgL_objectz00_bglt)
																				BgL_new1388z00_2545);
																			BgL_auxz00_7645 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7646);
																		}
																		BgL_auxz00_7644 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7645);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7644))->BgL_defz00) =
																		((obj_t) BgL_auxz00_7650), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7666;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7660;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7667;

																		{
																			obj_t BgL_auxz00_7668;

																			{	/* SawMill/bbv-specialize.scm 216 */
																				BgL_objectz00_bglt BgL_tmpz00_7669;

																				BgL_tmpz00_7669 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7668 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7669);
																			}
																			BgL_auxz00_7667 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7668);
																		}
																		BgL_auxz00_7666 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7667))->BgL_outz00);
																	}
																	{
																		obj_t BgL_auxz00_7661;

																		{	/* SawMill/bbv-specialize.scm 216 */
																			BgL_objectz00_bglt BgL_tmpz00_7662;

																			BgL_tmpz00_7662 =
																				((BgL_objectz00_bglt)
																				BgL_new1388z00_2545);
																			BgL_auxz00_7661 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7662);
																		}
																		BgL_auxz00_7660 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7661);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7660))->BgL_outz00) =
																		((obj_t) BgL_auxz00_7666), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7682;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7676;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7683;

																		{
																			obj_t BgL_auxz00_7684;

																			{	/* SawMill/bbv-specialize.scm 216 */
																				BgL_objectz00_bglt BgL_tmpz00_7685;

																				BgL_tmpz00_7685 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7684 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7685);
																			}
																			BgL_auxz00_7683 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7684);
																		}
																		BgL_auxz00_7682 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7683))->BgL_inz00);
																	}
																	{
																		obj_t BgL_auxz00_7677;

																		{	/* SawMill/bbv-specialize.scm 216 */
																			BgL_objectz00_bglt BgL_tmpz00_7678;

																			BgL_tmpz00_7678 =
																				((BgL_objectz00_bglt)
																				BgL_new1388z00_2545);
																			BgL_auxz00_7677 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7678);
																		}
																		BgL_auxz00_7676 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7677);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7676))->BgL_inz00) =
																		((obj_t) BgL_auxz00_7682), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_7698;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7692;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_7699;

																		{
																			obj_t BgL_auxz00_7700;

																			{	/* SawMill/bbv-specialize.scm 216 */
																				BgL_objectz00_bglt BgL_tmpz00_7701;

																				BgL_tmpz00_7701 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt) BgL_iz00_210));
																				BgL_auxz00_7700 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7701);
																			}
																			BgL_auxz00_7699 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_7700);
																		}
																		BgL_auxz00_7698 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7699))->
																			BgL_z52hashz52);
																	}
																	{
																		obj_t BgL_auxz00_7693;

																		{	/* SawMill/bbv-specialize.scm 216 */
																			BgL_objectz00_bglt BgL_tmpz00_7694;

																			BgL_tmpz00_7694 =
																				((BgL_objectz00_bglt)
																				BgL_new1388z00_2545);
																			BgL_auxz00_7693 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_7694);
																		}
																		BgL_auxz00_7692 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_7693);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_7692))->
																			BgL_z52hashz52) =
																		((obj_t) BgL_auxz00_7698), BUNSPEC);
																}
																BgL_sz00_2541 = BgL_new1388z00_2545;
															}
															{	/* SawMill/bbv-specialize.scm 219 */
																int BgL_res2657z00_4120;

																{	/* SawMill/bbv-specialize.scm 219 */
																	int BgL_tmpz00_7708;

																	BgL_tmpz00_7708 = (int) (((long) 2));
																	BgL_res2657z00_4120 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7708);
																} BgL_res2657z00_4120;
															}
															{	/* SawMill/bbv-specialize.scm 219 */
																int BgL_tmpz00_7711;

																BgL_tmpz00_7711 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_7711,
																	BgL_ctxz00_211);
															}
															return BgL_sz00_2541;
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



/* interval-value */
	obj_t BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_iz00_214,
		obj_t BgL_ctxz00_215)
	{
		{	/* SawMill/bbv-specialize.scm 260 */
		BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75:
			if (BGl_isazf3zf3zz__objectz00(BgL_iz00_214, BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMill/bbv-specialize.scm 263 */
					obj_t BgL_ez00_2673;

					BgL_ez00_2673 =
						BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_215,
						((BgL_rtl_regz00_bglt) BgL_iz00_214));
					{	/* SawMill/bbv-specialize.scm 264 */
						bool_t BgL_test2903z00_7718;

						if (CBOOL(BgL_ez00_2673))
							{	/* SawMill/bbv-specialize.scm 264 */
								BgL_typez00_bglt BgL_arg2135z00_2679;

								BgL_arg2135z00_2679 =
									(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2673)))->
									BgL_typz00);
								BgL_test2903z00_7718 =
									(((obj_t) BgL_arg2135z00_2679) ==
									BGl_za2intza2z00zztype_cachez00);
							}
						else
							{	/* SawMill/bbv-specialize.scm 264 */
								BgL_test2903z00_7718 = ((bool_t) 0);
							}
						if (BgL_test2903z00_7718)
							{	/* SawMill/bbv-specialize.scm 265 */
								obj_t BgL_vz00_2676;

								BgL_vz00_2676 =
									(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
											((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2673)))->
									BgL_valuez00);
								{	/* SawMill/bbv-specialize.scm 267 */
									bool_t BgL_test2905z00_7727;

									if (STRUCTP(BgL_vz00_2676))
										{	/* SawMill/bbv-specialize.scm 267 */
											BgL_test2905z00_7727 =
												(STRUCT_KEY(BgL_vz00_2676) ==
												CNST_TABLE_REF(((long) 0)));
										}
									else
										{	/* SawMill/bbv-specialize.scm 267 */
											BgL_test2905z00_7727 = ((bool_t) 0);
										}
									if (BgL_test2905z00_7727)
										{	/* SawMill/bbv-specialize.scm 267 */
											return BgL_vz00_2676;
										}
									else
										{	/* SawMill/bbv-specialize.scm 267 */
											if (VECTORP(BgL_vz00_2676))
												{	/* SawMill/bbv-specialize.scm 268 */
													return
														BGl_za2lengthzd2intvza2zd2zzsaw_bbvzd2specializa7ez75;
												}
											else
												{	/* SawMill/bbv-specialize.scm 268 */
													return BFALSE;
												}
										}
								}
							}
						else
							{	/* SawMill/bbv-specialize.scm 264 */
								return BFALSE;
							}
					}
				}
			else
				{	/* SawMill/bbv-specialize.scm 262 */
					if (BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(
							((BgL_rtl_insz00_bglt) BgL_iz00_214)))
						{	/* SawMill/bbv-specialize.scm 270 */
							obj_t BgL_arg2137z00_2681;

							{	/* SawMill/bbv-specialize.scm 270 */
								obj_t BgL_pairz00_4130;

								BgL_pairz00_4130 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_iz00_214)))->BgL_argsz00);
								BgL_arg2137z00_2681 = CAR(BgL_pairz00_4130);
							}
							{
								obj_t BgL_iz00_7741;

								BgL_iz00_7741 = BgL_arg2137z00_2681;
								BgL_iz00_214 = BgL_iz00_7741;
								goto BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75;
							}
						}
					else
						{	/* SawMill/bbv-specialize.scm 269 */
							if (BGl_rtl_inszd2callzf3z21zzsaw_bbvzd2typeszd2(
									((BgL_rtl_insz00_bglt) BgL_iz00_214)))
								{	/* SawMill/bbv-specialize.scm 273 */
									BgL_rtl_callz00_bglt BgL_i1440z00_2685;

									BgL_i1440z00_2685 =
										((BgL_rtl_callz00_bglt)
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_iz00_214)))->BgL_funz00));
									{	/* SawMill/bbv-specialize.scm 275 */
										bool_t BgL_test2910z00_7748;

										{	/* SawMill/bbv-specialize.scm 275 */
											BgL_globalz00_bglt BgL_arg2144z00_2690;

											BgL_arg2144z00_2690 =
												(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1440z00_2685))->
												BgL_varz00);
											BgL_test2910z00_7748 =
												(((obj_t) BgL_arg2144z00_2690) ==
												BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2);
										}
										if (BgL_test2910z00_7748)
											{	/* SawMill/bbv-specialize.scm 276 */
												obj_t BgL_arg2142z00_2688;

												{	/* SawMill/bbv-specialize.scm 276 */
													obj_t BgL_pairz00_4132;

													BgL_pairz00_4132 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_iz00_214)))->
														BgL_argsz00);
													BgL_arg2142z00_2688 = CAR(BgL_pairz00_4132);
												}
												{
													obj_t BgL_iz00_7755;

													BgL_iz00_7755 = BgL_arg2142z00_2688;
													BgL_iz00_214 = BgL_iz00_7755;
													goto
														BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75;
												}
											}
										else
											{	/* SawMill/bbv-specialize.scm 275 */
												return BFALSE;
											}
									}
								}
							else
								{	/* SawMill/bbv-specialize.scm 271 */
									return BFALSE;
								}
						}
				}
		}

	}



/* bool-value */
	obj_t BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_iz00_216,
		obj_t BgL_ctxz00_217)
	{
		{	/* SawMill/bbv-specialize.scm 285 */
		BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75:
			if (BGl_isazf3zf3zz__objectz00(BgL_iz00_216, BGl_rtl_regz00zzsaw_defsz00))
				{	/* SawMill/bbv-specialize.scm 288 */
					obj_t BgL_ez00_2692;

					BgL_ez00_2692 =
						BGl_ctxzd2getzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_217,
						((BgL_rtl_regz00_bglt) BgL_iz00_216));
					{	/* SawMill/bbv-specialize.scm 290 */
						bool_t BgL_test2912z00_7760;

						if (CBOOL(BgL_ez00_2692))
							{	/* SawMill/bbv-specialize.scm 290 */
								bool_t BgL_test2914z00_7763;

								{	/* SawMill/bbv-specialize.scm 290 */
									BgL_typez00_bglt BgL_arg2156z00_2704;

									BgL_arg2156z00_2704 =
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
												((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2692)))->
										BgL_typz00);
									BgL_test2914z00_7763 =
										(((obj_t) BgL_arg2156z00_2704) ==
										BGl_za2boolza2z00zztype_cachez00);
								}
								if (BgL_test2914z00_7763)
									{	/* SawMill/bbv-specialize.scm 290 */
										BgL_test2912z00_7760 = ((bool_t) 0);
									}
								else
									{	/* SawMill/bbv-specialize.scm 290 */
										BgL_test2912z00_7760 = ((bool_t) 1);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 290 */
								BgL_test2912z00_7760 = ((bool_t) 1);
							}
						if (BgL_test2912z00_7760)
							{	/* SawMill/bbv-specialize.scm 290 */
								return CNST_TABLE_REF(((long) 3));
							}
						else
							{	/* SawMill/bbv-specialize.scm 290 */
								if (
									((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
													((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2692)))->
											BgL_valuez00) == BTRUE))
									{	/* SawMill/bbv-specialize.scm 291 */
										return CNST_TABLE_REF(((long) 1));
									}
								else
									{	/* SawMill/bbv-specialize.scm 291 */
										if (
											((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
															((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2692)))->
													BgL_valuez00) == BFALSE))
											{	/* SawMill/bbv-specialize.scm 292 */
												return CNST_TABLE_REF(((long) 2));
											}
										else
											{	/* SawMill/bbv-specialize.scm 292 */
												return CNST_TABLE_REF(((long) 3));
				}}}}}
			else
				{	/* SawMill/bbv-specialize.scm 287 */
					if (BGl_rtl_inszd2movzf3z21zzsaw_bbvzd2typeszd2(
							((BgL_rtl_insz00_bglt) BgL_iz00_216)))
						{	/* SawMill/bbv-specialize.scm 295 */
							obj_t BgL_arg2158z00_2706;

							{	/* SawMill/bbv-specialize.scm 295 */
								obj_t BgL_pairz00_4137;

								BgL_pairz00_4137 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_iz00_216)))->BgL_argsz00);
								BgL_arg2158z00_2706 = CAR(BgL_pairz00_4137);
							}
							{
								obj_t BgL_iz00_7786;

								BgL_iz00_7786 = BgL_arg2158z00_2706;
								BgL_iz00_216 = BgL_iz00_7786;
								goto BGl_boolzd2valuezd2zzsaw_bbvzd2specializa7ez75;
							}
						}
					else
						{	/* SawMill/bbv-specialize.scm 294 */
							if (BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(
									((BgL_rtl_insz00_bglt) BgL_iz00_216)))
								{	/* SawMill/bbv-specialize.scm 298 */
									BgL_rtl_loadiz00_bglt BgL_i1442z00_2710;

									BgL_i1442z00_2710 =
										((BgL_rtl_loadiz00_bglt)
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_iz00_216)))->BgL_funz00));
									{	/* SawMill/bbv-specialize.scm 300 */
										bool_t BgL_test2919z00_7793;

										{	/* SawMill/bbv-specialize.scm 300 */
											BgL_atomz00_bglt BgL_arg2174z00_2723;

											BgL_arg2174z00_2723 =
												(((BgL_rtl_loadiz00_bglt) COBJECT(BgL_i1442z00_2710))->
												BgL_constantz00);
											BgL_test2919z00_7793 =
												BGl_isazf3zf3zz__objectz00(((obj_t)
													BgL_arg2174z00_2723), BGl_literalz00zzast_nodez00);
										}
										if (BgL_test2919z00_7793)
											{	/* SawMill/bbv-specialize.scm 300 */
												if (
													((((BgL_atomz00_bglt) COBJECT(
																	((BgL_atomz00_bglt)
																		((BgL_literalz00_bglt)
																			(((BgL_rtl_loadiz00_bglt)
																					COBJECT(BgL_i1442z00_2710))->
																				BgL_constantz00)))))->BgL_valuez00) ==
														BTRUE))
													{	/* SawMill/bbv-specialize.scm 301 */
														return CNST_TABLE_REF(((long) 1));
													}
												else
													{	/* SawMill/bbv-specialize.scm 301 */
														if (
															((((BgL_atomz00_bglt) COBJECT(
																			((BgL_atomz00_bglt)
																				((BgL_literalz00_bglt)
																					(((BgL_rtl_loadiz00_bglt)
																							COBJECT(BgL_i1442z00_2710))->
																						BgL_constantz00)))))->
																	BgL_valuez00) == BFALSE))
															{	/* SawMill/bbv-specialize.scm 302 */
																return CNST_TABLE_REF(((long) 2));
															}
														else
															{	/* SawMill/bbv-specialize.scm 302 */
																return CNST_TABLE_REF(((long) 3));
											}}}
										else
											{	/* SawMill/bbv-specialize.scm 300 */
												return CNST_TABLE_REF(((long) 3));
								}}}
							else
								{	/* SawMill/bbv-specialize.scm 296 */
									return CNST_TABLE_REF(((long) 3));
		}}}}

	}



/* rtl_ins-specialize-vlength */
	BgL_rtl_insz00_bglt
		BGl_rtl_inszd2specializa7ezd2vlengthza7zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt BgL_iz00_218, obj_t BgL_ctxz00_219)
	{
		{	/* SawMill/bbv-specialize.scm 310 */
			{	/* SawMill/bbv-specialize.scm 313 */
				bool_t BgL_test2922z00_7814;

				{	/* SawMill/bbv-specialize.scm 313 */
					obj_t BgL_arg2202z00_2778;

					BgL_arg2202z00_2778 =
						CAR((((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->BgL_argsz00));
					BgL_test2922z00_7814 =
						BGl_isazf3zf3zz__objectz00(BgL_arg2202z00_2778,
						BGl_rtl_regz00zzsaw_defsz00);
				}
				if (BgL_test2922z00_7814)
					{	/* SawMill/bbv-specialize.scm 315 */
						obj_t BgL_g1447z00_2728;

						{
							obj_t BgL_list1850z00_2751;

							BgL_list1850z00_2751 = BgL_ctxz00_219;
						BgL_zc3z04anonymousza32187ze3z87_2752:
							if (PAIRP(BgL_list1850z00_2751))
								{	/* SawMill/bbv-specialize.scm 315 */
									bool_t BgL_test2924z00_7820;

									{	/* SawMill/bbv-specialize.scm 316 */
										obj_t BgL_ez00_2765;

										BgL_ez00_2765 = CAR(BgL_list1850z00_2751);
										if (
											(BGl_typez00zztype_typez00 ==
												BGl_za2intza2z00zztype_cachez00))
											{	/* SawMill/bbv-specialize.scm 318 */
												bool_t BgL_test2926z00_7824;

												{	/* SawMill/bbv-specialize.scm 318 */
													obj_t BgL_tmpz00_7825;

													BgL_tmpz00_7825 =
														(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2765)))->
														BgL_valuez00);
													BgL_test2926z00_7824 = VECTORP(BgL_tmpz00_7825);
												}
												if (BgL_test2926z00_7824)
													{	/* SawMill/bbv-specialize.scm 319 */
														obj_t BgL_arg2196z00_2769;
														obj_t BgL_arg2197z00_2770;

														{	/* SawMill/bbv-specialize.scm 319 */
															obj_t BgL_arg2198z00_2771;

															BgL_arg2198z00_2771 =
																(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																		((BgL_bbvzd2ctxentryzd2_bglt)
																			BgL_ez00_2765)))->BgL_valuez00);
															BgL_arg2196z00_2769 =
																VECTOR_REF(((obj_t) BgL_arg2198z00_2771),
																((long) 0));
														}
														BgL_arg2197z00_2770 =
															CAR(
															(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
																BgL_argsz00));
														BgL_test2924z00_7820 =
															(BgL_arg2196z00_2769 == BgL_arg2197z00_2770);
													}
												else
													{	/* SawMill/bbv-specialize.scm 318 */
														BgL_test2924z00_7820 = ((bool_t) 0);
													}
											}
										else
											{	/* SawMill/bbv-specialize.scm 317 */
												BgL_test2924z00_7820 = ((bool_t) 0);
											}
									}
									if (BgL_test2924z00_7820)
										{	/* SawMill/bbv-specialize.scm 315 */
											BgL_g1447z00_2728 = CAR(BgL_list1850z00_2751);
										}
									else
										{
											obj_t BgL_list1850z00_7837;

											BgL_list1850z00_7837 = CDR(BgL_list1850z00_2751);
											BgL_list1850z00_2751 = BgL_list1850z00_7837;
											goto BgL_zc3z04anonymousza32187ze3z87_2752;
										}
								}
							else
								{	/* SawMill/bbv-specialize.scm 315 */
									BgL_g1447z00_2728 = BFALSE;
								}
						}
						if (CBOOL(BgL_g1447z00_2728))
							{	/* SawMill/bbv-specialize.scm 323 */
								BgL_rtl_insz00_bglt BgL_val0_1851z00_2731;
								obj_t BgL_val1_1852z00_2732;

								{	/* SawMill/bbv-specialize.scm 323 */
									BgL_rtl_insz00_bglt BgL_new1449z00_2734;

									{	/* SawMill/bbv-specialize.scm 324 */
										BgL_rtl_insz00_bglt BgL_new1452z00_2738;

										BgL_new1452z00_2738 =
											((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_rtl_insz00_bgl))));
										{	/* SawMill/bbv-specialize.scm 324 */
											long BgL_arg2179z00_2739;

											{	/* SawMill/bbv-specialize.scm 324 */
												long BgL_res2664z00_4150;

												BgL_res2664z00_4150 =
													BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
												BgL_arg2179z00_2739 = BgL_res2664z00_4150;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1452z00_2738),
												BgL_arg2179z00_2739);
										}
										{	/* SawMill/bbv-specialize.scm 324 */
											BgL_objectz00_bglt BgL_tmpz00_7845;

											BgL_tmpz00_7845 =
												((BgL_objectz00_bglt) BgL_new1452z00_2738);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7845, BFALSE);
										}
										((BgL_objectz00_bglt) BgL_new1452z00_2738);
										BgL_new1449z00_2734 = BgL_new1452z00_2738;
									}
									((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1449z00_2734))->
											BgL_locz00) =
										((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
												BgL_locz00)), BUNSPEC);
									((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1449z00_2734))->
											BgL_z52spillz52) =
										((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
												BgL_z52spillz52)), BUNSPEC);
									((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1449z00_2734))->
											BgL_destz00) =
										((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
												BgL_destz00)), BUNSPEC);
									{
										BgL_rtl_funz00_bglt BgL_auxz00_7855;

										{	/* SawMill/bbv-specialize.scm 324 */
											BgL_rtl_movz00_bglt BgL_new1454z00_2735;

											{	/* SawMill/bbv-specialize.scm 324 */
												BgL_rtl_movz00_bglt BgL_new1453z00_2736;

												BgL_new1453z00_2736 =
													((BgL_rtl_movz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_rtl_movz00_bgl))));
												{	/* SawMill/bbv-specialize.scm 324 */
													long BgL_arg2178z00_2737;

													{	/* SawMill/bbv-specialize.scm 324 */
														long BgL_res2665z00_4155;

														{	/* SawMill/bbv-specialize.scm 324 */
															obj_t BgL_classz00_4154;

															BgL_classz00_4154 = BGl_rtl_movz00zzsaw_defsz00;
															BgL_res2665z00_4155 =
																BGL_CLASS_INDEX(BgL_classz00_4154);
														}
														BgL_arg2178z00_2737 = BgL_res2665z00_4155;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1453z00_2736),
														BgL_arg2178z00_2737);
												}
												BgL_new1454z00_2735 = BgL_new1453z00_2736;
											}
											((((BgL_rtl_funz00_bglt) COBJECT(
															((BgL_rtl_funz00_bglt) BgL_new1454z00_2735)))->
													BgL_locz00) = ((obj_t) BFALSE), BUNSPEC);
											BgL_auxz00_7855 =
												((BgL_rtl_funz00_bglt) BgL_new1454z00_2735);
										}
										((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1449z00_2734))->
												BgL_funz00) =
											((BgL_rtl_funz00_bglt) BgL_auxz00_7855), BUNSPEC);
									}
									((((BgL_rtl_insz00_bglt) COBJECT(BgL_new1449z00_2734))->
											BgL_argsz00) =
										((obj_t) (((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
												BgL_argsz00)), BUNSPEC);
									BgL_val0_1851z00_2731 = BgL_new1449z00_2734;
								}
								{	/* SawMill/bbv-specialize.scm 325 */
									obj_t BgL_arg2180z00_2740;
									obj_t BgL_arg2181z00_2741;

									BgL_arg2180z00_2740 =
										(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
										BgL_destz00);
									BgL_arg2181z00_2741 =
										CAR((((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
											BgL_argsz00));
									BgL_val1_1852z00_2732 =
										BGl_aliaszd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_219,
										((BgL_rtl_regz00_bglt) BgL_arg2180z00_2740),
										((BgL_rtl_regz00_bglt) BgL_arg2181z00_2741));
								}
								{	/* SawMill/bbv-specialize.scm 323 */
									int BgL_res2666z00_4159;

									{	/* SawMill/bbv-specialize.scm 323 */
										int BgL_tmpz00_7872;

										BgL_tmpz00_7872 = (int) (((long) 2));
										BgL_res2666z00_4159 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7872);
									} BgL_res2666z00_4159;
								}
								{	/* SawMill/bbv-specialize.scm 323 */
									int BgL_tmpz00_7875;

									BgL_tmpz00_7875 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_7875, BgL_val1_1852z00_2732);
								}
								return BgL_val0_1851z00_2731;
							}
						else
							{	/* SawMill/bbv-specialize.scm 327 */
								obj_t BgL_val1_1855z00_2744;

								{	/* SawMill/bbv-specialize.scm 327 */
									obj_t BgL_arg2183z00_2745;
									obj_t BgL_arg2184z00_2746;

									BgL_arg2183z00_2745 =
										(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
										BgL_destz00);
									{	/* SawMill/bbv-specialize.scm 327 */
										obj_t BgL_v1853z00_2747;

										BgL_v1853z00_2747 = create_vector(((long) 1));
										VECTOR_SET(BgL_v1853z00_2747, ((long) 0),
											CAR(
												(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->
													BgL_argsz00)));
										BgL_arg2184z00_2746 = BgL_v1853z00_2747;
									}
									BgL_val1_1855z00_2744 =
										BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_219,
										BgL_arg2183z00_2745, BGl_za2intza2z00zztype_cachez00, BTRUE,
										BgL_arg2184z00_2746);
								}
								{	/* SawMill/bbv-specialize.scm 327 */
									int BgL_res2667z00_4162;

									{	/* SawMill/bbv-specialize.scm 327 */
										int BgL_tmpz00_7884;

										BgL_tmpz00_7884 = (int) (((long) 2));
										BgL_res2667z00_4162 =
											BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7884);
									} BgL_res2667z00_4162;
								}
								{	/* SawMill/bbv-specialize.scm 327 */
									int BgL_tmpz00_7887;

									BgL_tmpz00_7887 = (int) (((long) 1));
									BGL_MVALUES_VAL_SET(BgL_tmpz00_7887, BgL_val1_1855z00_2744);
								}
								return BgL_iz00_218;
							}
					}
				else
					{	/* SawMill/bbv-specialize.scm 314 */
						obj_t BgL_val1_1848z00_2776;

						{	/* SawMill/bbv-specialize.scm 314 */
							obj_t BgL_arg2201z00_2777;

							BgL_arg2201z00_2777 =
								(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_218))->BgL_destz00);
							BgL_val1_1848z00_2776 =
								BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_219,
								BgL_arg2201z00_2777, BGl_za2intza2z00zztype_cachez00, BTRUE,
								BGl_za2lengthzd2intvza2zd2zzsaw_bbvzd2specializa7ez75);
						}
						{	/* SawMill/bbv-specialize.scm 314 */
							int BgL_res2668z00_4163;

							{	/* SawMill/bbv-specialize.scm 314 */
								int BgL_tmpz00_7892;

								BgL_tmpz00_7892 = (int) (((long) 2));
								BgL_res2668z00_4163 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_7892);
							} BgL_res2668z00_4163;
						}
						{	/* SawMill/bbv-specialize.scm 314 */
							int BgL_tmpz00_7895;

							BgL_tmpz00_7895 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_7895, BgL_val1_1848z00_2776);
						}
						return BgL_iz00_218;
					}
			}
		}

	}



/* rtl_ins-intcmp? */
	BGL_EXPORTED_DEF bool_t
		BGl_rtl_inszd2intcmpzf3z21zzsaw_bbvzd2specializa7ez75(BgL_rtl_insz00_bglt
		BgL_iz00_220)
	{
		{	/* SawMill/bbv-specialize.scm 332 */
			{	/* SawMill/bbv-specialize.scm 342 */
				bool_t BgL_test2928z00_7898;

				{	/* SawMill/bbv-specialize.scm 342 */
					BgL_rtl_funz00_bglt BgL_arg2221z00_2809;

					BgL_arg2221z00_2809 =
						(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->BgL_funz00);
					BgL_test2928z00_7898 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_arg2221z00_2809), BGl_rtl_callz00zzsaw_defsz00);
				}
				if (BgL_test2928z00_7898)
					{	/* SawMill/bbv-specialize.scm 343 */
						BgL_rtl_callz00_bglt BgL_i1459z00_2784;

						BgL_i1459z00_2784 =
							((BgL_rtl_callz00_bglt)
							(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->BgL_funz00));
						if (
							(bgl_list_length(
									(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->
										BgL_argsz00)) == ((long) 2)))
							{	/* SawMill/bbv-specialize.scm 345 */
								bool_t BgL_test2930z00_7908;

								{	/* SawMill/bbv-specialize.scm 345 */
									bool_t BgL__ortest_1463z00_2798;

									{	/* SawMill/bbv-specialize.scm 345 */
										BgL_globalz00_bglt BgL_arg2218z00_2806;

										BgL_arg2218z00_2806 =
											(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1459z00_2784))->
											BgL_varz00);
										BgL__ortest_1463z00_2798 =
											(((obj_t) BgL_arg2218z00_2806) ==
											BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2);
									}
									if (BgL__ortest_1463z00_2798)
										{	/* SawMill/bbv-specialize.scm 345 */
											BgL_test2930z00_7908 = BgL__ortest_1463z00_2798;
										}
									else
										{	/* SawMill/bbv-specialize.scm 345 */
											bool_t BgL__ortest_1464z00_2799;

											{	/* SawMill/bbv-specialize.scm 345 */
												BgL_globalz00_bglt BgL_arg2217z00_2805;

												BgL_arg2217z00_2805 =
													(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1459z00_2784))->
													BgL_varz00);
												BgL__ortest_1464z00_2799 =
													(((obj_t) BgL_arg2217z00_2805) ==
													BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2);
											}
											if (BgL__ortest_1464z00_2799)
												{	/* SawMill/bbv-specialize.scm 345 */
													BgL_test2930z00_7908 = BgL__ortest_1464z00_2799;
												}
											else
												{	/* SawMill/bbv-specialize.scm 346 */
													bool_t BgL__ortest_1465z00_2800;

													{	/* SawMill/bbv-specialize.scm 346 */
														BgL_globalz00_bglt BgL_arg2216z00_2804;

														BgL_arg2216z00_2804 =
															(((BgL_rtl_callz00_bglt)
																COBJECT(BgL_i1459z00_2784))->BgL_varz00);
														BgL__ortest_1465z00_2800 =
															(((obj_t) BgL_arg2216z00_2804) ==
															BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2);
													}
													if (BgL__ortest_1465z00_2800)
														{	/* SawMill/bbv-specialize.scm 346 */
															BgL_test2930z00_7908 = BgL__ortest_1465z00_2800;
														}
													else
														{	/* SawMill/bbv-specialize.scm 346 */
															bool_t BgL__ortest_1466z00_2801;

															{	/* SawMill/bbv-specialize.scm 346 */
																BgL_globalz00_bglt BgL_arg2215z00_2803;

																BgL_arg2215z00_2803 =
																	(((BgL_rtl_callz00_bglt)
																		COBJECT(BgL_i1459z00_2784))->BgL_varz00);
																BgL__ortest_1466z00_2801 =
																	(((obj_t) BgL_arg2215z00_2803) ==
																	BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2);
															}
															if (BgL__ortest_1466z00_2801)
																{	/* SawMill/bbv-specialize.scm 346 */
																	BgL_test2930z00_7908 =
																		BgL__ortest_1466z00_2801;
																}
															else
																{	/* SawMill/bbv-specialize.scm 347 */
																	BgL_globalz00_bglt BgL_arg2214z00_2802;

																	BgL_arg2214z00_2802 =
																		(((BgL_rtl_callz00_bglt)
																			COBJECT(BgL_i1459z00_2784))->BgL_varz00);
																	BgL_test2930z00_7908 =
																		(((obj_t) BgL_arg2214z00_2802) ==
																		BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2);
																}
														}
												}
										}
								}
								if (BgL_test2930z00_7908)
									{	/* SawMill/bbv-specialize.scm 348 */
										bool_t BgL_test2935z00_7928;

										{	/* SawMill/bbv-specialize.scm 348 */
											bool_t BgL__ortest_1467z00_2793;

											BgL__ortest_1467z00_2793 =
												BGl_regzf3ze71z14zzsaw_bbvzd2specializa7ez75(CAR(
													(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->
														BgL_argsz00)));
											if (BgL__ortest_1467z00_2793)
												{	/* SawMill/bbv-specialize.scm 348 */
													BgL_test2935z00_7928 = BgL__ortest_1467z00_2793;
												}
											else
												{	/* SawMill/bbv-specialize.scm 348 */
													obj_t BgL_arg2210z00_2794;

													BgL_arg2210z00_2794 =
														CAR(
														(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->
															BgL_argsz00));
													BgL_test2935z00_7928 =
														BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2((
															(BgL_rtl_insz00_bglt) BgL_arg2210z00_2794));
												}
										}
										if (BgL_test2935z00_7928)
											{	/* SawMill/bbv-specialize.scm 349 */
												bool_t BgL__ortest_1468z00_2788;

												{	/* SawMill/bbv-specialize.scm 349 */
													obj_t BgL_arg2208z00_2791;

													{	/* SawMill/bbv-specialize.scm 349 */
														obj_t BgL_pairz00_4171;

														BgL_pairz00_4171 =
															(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->
															BgL_argsz00);
														BgL_arg2208z00_2791 = CAR(CDR(BgL_pairz00_4171));
													}
													BgL__ortest_1468z00_2788 =
														BGl_regzf3ze71z14zzsaw_bbvzd2specializa7ez75
														(BgL_arg2208z00_2791);
												}
												if (BgL__ortest_1468z00_2788)
													{	/* SawMill/bbv-specialize.scm 349 */
														return BgL__ortest_1468z00_2788;
													}
												else
													{	/* SawMill/bbv-specialize.scm 349 */
														obj_t BgL_arg2206z00_2789;

														{	/* SawMill/bbv-specialize.scm 349 */
															obj_t BgL_pairz00_4175;

															BgL_pairz00_4175 =
																(((BgL_rtl_insz00_bglt) COBJECT(BgL_iz00_220))->
																BgL_argsz00);
															BgL_arg2206z00_2789 = CAR(CDR(BgL_pairz00_4175));
														}
														return
															BGl_rtl_inszd2loadizf3z21zzsaw_bbvzd2typeszd2(
															((BgL_rtl_insz00_bglt) BgL_arg2206z00_2789));
													}
											}
										else
											{	/* SawMill/bbv-specialize.scm 348 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* SawMill/bbv-specialize.scm 345 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 344 */
								return ((bool_t) 0);
							}
					}
				else
					{	/* SawMill/bbv-specialize.scm 342 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* reg?~1 */
	bool_t BGl_regzf3ze71z14zzsaw_bbvzd2specializa7ez75(obj_t BgL_az00_2810)
	{
		{	/* SawMill/bbv-specialize.scm 339 */
			{	/* SawMill/bbv-specialize.scm 335 */
				bool_t BgL__ortest_1455z00_2812;

				BgL__ortest_1455z00_2812 =
					BGl_isazf3zf3zz__objectz00(BgL_az00_2810,
					BGl_rtl_regz00zzsaw_defsz00);
				if (BgL__ortest_1455z00_2812)
					{	/* SawMill/bbv-specialize.scm 335 */
						return BgL__ortest_1455z00_2812;
					}
				else
					{	/* SawMill/bbv-specialize.scm 335 */
						if (BGl_isazf3zf3zz__objectz00(BgL_az00_2810,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/bbv-specialize.scm 338 */
								bool_t BgL_test2940z00_7951;

								{	/* SawMill/bbv-specialize.scm 338 */
									BgL_rtl_funz00_bglt BgL_arg2226z00_2818;

									BgL_arg2226z00_2818 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_az00_2810)))->BgL_funz00);
									BgL_test2940z00_7951 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg2226z00_2818),
										BGl_rtl_callz00zzsaw_defsz00);
								}
								if (BgL_test2940z00_7951)
									{	/* SawMill/bbv-specialize.scm 339 */
										obj_t BgL_arg2225z00_2817;

										BgL_arg2225z00_2817 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_az00_2810)))->BgL_destz00);
										return
											BGl_isazf3zf3zz__objectz00(BgL_arg2225z00_2817,
											BGl_rtl_regz00zzsaw_defsz00);
									}
								else
									{	/* SawMill/bbv-specialize.scm 338 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 336 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* &rtl_ins-intcmp? */
	obj_t BGl_z62rtl_inszd2intcmpzf3z43zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4738, obj_t BgL_iz00_4739)
	{
		{	/* SawMill/bbv-specialize.scm 332 */
			return
				BBOOL(BGl_rtl_inszd2intcmpzf3z21zzsaw_bbvzd2specializa7ez75(
					((BgL_rtl_insz00_bglt) BgL_iz00_4739)));
		}

	}



/* rtl_ins-specialize-intcmp */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_inszd2specializa7ezd2intcmpza7zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_iz00_221, obj_t BgL_ctxz00_222)
	{
		{	/* SawMill/bbv-specialize.scm 354 */
			{
				obj_t BgL_iz00_2915;
				obj_t BgL_iz00_2941;
				obj_t BgL_opz00_2942;
				obj_t BgL_intlz00_2943;
				obj_t BgL_intrz00_2944;

				{	/* SawMill/bbv-specialize.scm 482 */
					obj_t BgL_lhsz00_2832;

					{	/* SawMill/bbv-specialize.scm 482 */
						obj_t BgL_pairz00_4380;

						BgL_pairz00_4380 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_iz00_221)))->BgL_argsz00);
						BgL_lhsz00_2832 = CAR(BgL_pairz00_4380);
					}
					{	/* SawMill/bbv-specialize.scm 482 */
						obj_t BgL_rhsz00_2833;

						{	/* SawMill/bbv-specialize.scm 483 */
							obj_t BgL_pairz00_4381;

							BgL_pairz00_4381 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_iz00_221)))->BgL_argsz00);
							BgL_rhsz00_2833 = CAR(CDR(BgL_pairz00_4381));
						}
						{	/* SawMill/bbv-specialize.scm 483 */
							obj_t BgL_intlz00_2834;

							BgL_intlz00_2834 =
								BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75
								(BgL_lhsz00_2832, BgL_ctxz00_222);
							{	/* SawMill/bbv-specialize.scm 484 */
								obj_t BgL_intrz00_2835;

								BgL_intrz00_2835 =
									BGl_intervalzd2valuezd2zzsaw_bbvzd2specializa7ez75
									(BgL_rhsz00_2833, BgL_ctxz00_222);
								{	/* SawMill/bbv-specialize.scm 485 */
									obj_t BgL_sctxz00_2836;

									{	/* SawMill/bbv-specialize.scm 486 */
										obj_t BgL_arg2231z00_2864;

										BgL_arg2231z00_2864 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_iz00_221)))->BgL_destz00);
										{	/* SawMill/bbv-specialize.scm 486 */
											obj_t BgL_g1983z00_2867;

											BgL_g1983z00_2867 = BGl_za2boolza2z00zztype_cachez00;
											{	/* SawMill/bbv-types.scm 69 */
												obj_t BgL_valuez00_2869;

												BgL_valuez00_2869 = CNST_TABLE_REF(((long) 3));
												{	/* SawMill/bbv-types.scm 69 */

													BgL_sctxz00_2836 =
														BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
														(BgL_ctxz00_222, BgL_arg2231z00_2864,
														BgL_g1983z00_2867, BTRUE, BgL_valuez00_2869);
									}}}}
									{	/* SawMill/bbv-specialize.scm 486 */
										obj_t BgL_opz00_2837;

										BgL_iz00_2915 = BgL_iz00_221;
										{	/* SawMill/bbv-specialize.scm 389 */
											BgL_rtl_callz00_bglt BgL_i1484z00_2918;

											BgL_i1484z00_2918 =
												((BgL_rtl_callz00_bglt)
												(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_iz00_2915)))->
													BgL_funz00));
											{	/* SawMill/bbv-specialize.scm 391 */
												bool_t BgL_test2941z00_7978;

												{	/* SawMill/bbv-specialize.scm 391 */
													BgL_globalz00_bglt BgL_arg2280z00_2933;

													BgL_arg2280z00_2933 =
														(((BgL_rtl_callz00_bglt)
															COBJECT(BgL_i1484z00_2918))->BgL_varz00);
													BgL_test2941z00_7978 =
														(((obj_t) BgL_arg2280z00_2933) ==
														BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2);
												}
												if (BgL_test2941z00_7978)
													{	/* SawMill/bbv-specialize.scm 391 */
														BgL_opz00_2837 = CNST_TABLE_REF(((long) 4));
													}
												else
													{	/* SawMill/bbv-specialize.scm 392 */
														bool_t BgL_test2942z00_7983;

														{	/* SawMill/bbv-specialize.scm 392 */
															BgL_globalz00_bglt BgL_arg2278z00_2932;

															BgL_arg2278z00_2932 =
																(((BgL_rtl_callz00_bglt)
																	COBJECT(BgL_i1484z00_2918))->BgL_varz00);
															BgL_test2942z00_7983 =
																(((obj_t) BgL_arg2278z00_2932) ==
																BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2);
														}
														if (BgL_test2942z00_7983)
															{	/* SawMill/bbv-specialize.scm 392 */
																BgL_opz00_2837 = CNST_TABLE_REF(((long) 5));
															}
														else
															{	/* SawMill/bbv-specialize.scm 393 */
																bool_t BgL_test2943z00_7988;

																{	/* SawMill/bbv-specialize.scm 393 */
																	BgL_globalz00_bglt BgL_arg2277z00_2931;

																	BgL_arg2277z00_2931 =
																		(((BgL_rtl_callz00_bglt)
																			COBJECT(BgL_i1484z00_2918))->BgL_varz00);
																	BgL_test2943z00_7988 =
																		(((obj_t) BgL_arg2277z00_2931) ==
																		BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2);
																}
																if (BgL_test2943z00_7988)
																	{	/* SawMill/bbv-specialize.scm 393 */
																		BgL_opz00_2837 = CNST_TABLE_REF(((long) 7));
																	}
																else
																	{	/* SawMill/bbv-specialize.scm 394 */
																		bool_t BgL_test2944z00_7993;

																		{	/* SawMill/bbv-specialize.scm 394 */
																			BgL_globalz00_bglt BgL_arg2276z00_2930;

																			BgL_arg2276z00_2930 =
																				(((BgL_rtl_callz00_bglt)
																					COBJECT(BgL_i1484z00_2918))->
																				BgL_varz00);
																			BgL_test2944z00_7993 =
																				(((obj_t) BgL_arg2276z00_2930) ==
																				BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2);
																		}
																		if (BgL_test2944z00_7993)
																			{	/* SawMill/bbv-specialize.scm 394 */
																				BgL_opz00_2837 =
																					CNST_TABLE_REF(((long) 6));
																			}
																		else
																			{	/* SawMill/bbv-specialize.scm 395 */
																				bool_t BgL_test2945z00_7998;

																				{	/* SawMill/bbv-specialize.scm 395 */
																					BgL_globalz00_bglt
																						BgL_arg2275z00_2929;
																					BgL_arg2275z00_2929 =
																						(((BgL_rtl_callz00_bglt)
																							COBJECT(BgL_i1484z00_2918))->
																						BgL_varz00);
																					BgL_test2945z00_7998 =
																						(((obj_t) BgL_arg2275z00_2929) ==
																						BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2);
																				}
																				if (BgL_test2945z00_7998)
																					{	/* SawMill/bbv-specialize.scm 395 */
																						BgL_opz00_2837 =
																							CNST_TABLE_REF(((long) 8));
																					}
																				else
																					{	/* SawMill/bbv-specialize.scm 395 */
																						BgL_opz00_2837 = BFALSE;
																					}
																			}
																	}
															}
													}
											}
										}
										{	/* SawMill/bbv-specialize.scm 487 */

											{	/* SawMill/bbv-specialize.scm 489 */
												bool_t BgL_test2946z00_8003;

												{	/* SawMill/bbv-specialize.scm 489 */
													bool_t BgL_test2947z00_8004;

													if (STRUCTP(BgL_intlz00_2834))
														{	/* SawMill/bbv-specialize.scm 489 */
															BgL_test2947z00_8004 =
																(STRUCT_KEY(BgL_intlz00_2834) ==
																CNST_TABLE_REF(((long) 0)));
														}
													else
														{	/* SawMill/bbv-specialize.scm 489 */
															BgL_test2947z00_8004 = ((bool_t) 0);
														}
													if (BgL_test2947z00_8004)
														{	/* SawMill/bbv-specialize.scm 489 */
															if (STRUCTP(BgL_intrz00_2835))
																{	/* SawMill/bbv-specialize.scm 489 */
																	BgL_test2946z00_8003 =
																		(STRUCT_KEY(BgL_intrz00_2835) ==
																		CNST_TABLE_REF(((long) 0)));
																}
															else
																{	/* SawMill/bbv-specialize.scm 489 */
																	BgL_test2946z00_8003 = ((bool_t) 0);
																}
														}
													else
														{	/* SawMill/bbv-specialize.scm 489 */
															BgL_test2946z00_8003 = ((bool_t) 0);
														}
												}
												if (BgL_test2946z00_8003)
													{	/* SawMill/bbv-specialize.scm 494 */
														obj_t BgL_g1541z00_2840;

														BgL_iz00_2941 = BgL_iz00_221;
														BgL_opz00_2942 = BgL_opz00_2837;
														BgL_intlz00_2943 = BgL_intlz00_2834;
														BgL_intrz00_2944 = BgL_intrz00_2835;
														if ((BgL_opz00_2942 == CNST_TABLE_REF(((long) 4))))
															{	/* SawMill/bbv-specialize.scm 408 */
																BgL_rtl_insz00_bglt BgL_new1485z00_2949;

																{	/* SawMill/bbv-specialize.scm 408 */
																	BgL_rtl_insz00_bglt BgL_tmp1493z00_2955;
																	BgL_rtl_inszf2bbvzf2_bglt
																		BgL_wide1494z00_2956;
																	{
																		BgL_rtl_insz00_bglt BgL_auxz00_8018;

																		{	/* SawMill/bbv-specialize.scm 408 */
																			BgL_rtl_insz00_bglt BgL_new1492z00_2958;

																			BgL_new1492z00_2958 =
																				((BgL_rtl_insz00_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_insz00_bgl))));
																			{	/* SawMill/bbv-specialize.scm 408 */
																				long BgL_arg2290z00_2959;

																				{	/* SawMill/bbv-specialize.scm 408 */
																					long BgL_res2687z00_4217;

																					BgL_res2687z00_4217 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_insz00zzsaw_defsz00);
																					BgL_arg2290z00_2959 =
																						BgL_res2687z00_4217;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_new1492z00_2958),
																					BgL_arg2290z00_2959);
																			}
																			{	/* SawMill/bbv-specialize.scm 408 */
																				BgL_objectz00_bglt BgL_tmpz00_8023;

																				BgL_tmpz00_8023 =
																					((BgL_objectz00_bglt)
																					BgL_new1492z00_2958);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8023,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt)
																				BgL_new1492z00_2958);
																			BgL_auxz00_8018 = BgL_new1492z00_2958;
																		}
																		BgL_tmp1493z00_2955 =
																			((BgL_rtl_insz00_bglt) BgL_auxz00_8018);
																	}
																	BgL_wide1494z00_2956 =
																		((BgL_rtl_inszf2bbvzf2_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_inszf2bbvzf2_bgl))));
																	{	/* SawMill/bbv-specialize.scm 408 */
																		obj_t BgL_auxz00_8031;
																		BgL_objectz00_bglt BgL_tmpz00_8029;

																		BgL_auxz00_8031 =
																			((obj_t) BgL_wide1494z00_2956);
																		BgL_tmpz00_8029 =
																			((BgL_objectz00_bglt)
																			BgL_tmp1493z00_2955);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8029,
																			BgL_auxz00_8031);
																	}
																	((BgL_objectz00_bglt) BgL_tmp1493z00_2955);
																	{	/* SawMill/bbv-specialize.scm 408 */
																		long BgL_arg2289z00_2957;

																		{	/* SawMill/bbv-specialize.scm 408 */
																			long BgL_res2688z00_4223;

																			BgL_res2688z00_4223 =
																				BGL_CLASS_INDEX
																				(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																			BgL_arg2289z00_2957 = BgL_res2688z00_4223;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_tmp1493z00_2955),
																			BgL_arg2289z00_2957);
																	}
																	BgL_new1485z00_2949 =
																		((BgL_rtl_insz00_bglt) BgL_tmp1493z00_2955);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1485z00_2949)))->BgL_locz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_iz00_2941)))->BgL_locz00)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1485z00_2949)))->
																		BgL_z52spillz52) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_iz00_2941)))->BgL_z52spillz52)),
																	BUNSPEC);
																((((BgL_rtl_insz00_bglt)
																			COBJECT(((BgL_rtl_insz00_bglt)
																					BgL_new1485z00_2949)))->BgL_destz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_iz00_2941)))->BgL_destz00)),
																	BUNSPEC);
																{
																	BgL_rtl_funz00_bglt BgL_auxz00_8051;

																	if (
																		((long) CINT(STRUCT_REF(BgL_intlz00_2943,
																					(int) (((long) 1)))) <
																			(long) CINT(STRUCT_REF(BgL_intrz00_2944,
																					(int) (((long) 0))))))
																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_auxz00_8051 =
																				((BgL_rtl_funz00_bglt)
																				BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75
																				());
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_auxz00_8051 =
																				((BgL_rtl_funz00_bglt)
																				BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75
																				());
																		}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_new1485z00_2949)))->
																			BgL_funz00) =
																		((BgL_rtl_funz00_bglt) BgL_auxz00_8051),
																		BUNSPEC);
																}
																((((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_new1485z00_2949)))->BgL_argsz00) =
																	((obj_t) (((BgL_rtl_insz00_bglt)
																				COBJECT(((BgL_rtl_insz00_bglt)
																						BgL_iz00_2941)))->BgL_argsz00)),
																	BUNSPEC);
																{
																	obj_t BgL_auxz00_8076;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8070;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8077;

																		{
																			obj_t BgL_auxz00_8078;

																			{	/* SawMill/bbv-specialize.scm 409 */
																				BgL_objectz00_bglt BgL_tmpz00_8079;

																				BgL_tmpz00_8079 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2941)));
																				BgL_auxz00_8078 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_8079);
																			}
																			BgL_auxz00_8077 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_8078);
																		}
																		BgL_auxz00_8076 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8077))->BgL_defz00);
																	}
																	{
																		obj_t BgL_auxz00_8071;

																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_objectz00_bglt BgL_tmpz00_8072;

																			BgL_tmpz00_8072 =
																				((BgL_objectz00_bglt)
																				BgL_new1485z00_2949);
																			BgL_auxz00_8071 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_8072);
																		}
																		BgL_auxz00_8070 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_8071);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8070))->BgL_defz00) =
																		((obj_t) BgL_auxz00_8076), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_8093;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8087;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8094;

																		{
																			obj_t BgL_auxz00_8095;

																			{	/* SawMill/bbv-specialize.scm 409 */
																				BgL_objectz00_bglt BgL_tmpz00_8096;

																				BgL_tmpz00_8096 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2941)));
																				BgL_auxz00_8095 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_8096);
																			}
																			BgL_auxz00_8094 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_8095);
																		}
																		BgL_auxz00_8093 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8094))->BgL_outz00);
																	}
																	{
																		obj_t BgL_auxz00_8088;

																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_objectz00_bglt BgL_tmpz00_8089;

																			BgL_tmpz00_8089 =
																				((BgL_objectz00_bglt)
																				BgL_new1485z00_2949);
																			BgL_auxz00_8088 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_8089);
																		}
																		BgL_auxz00_8087 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_8088);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8087))->BgL_outz00) =
																		((obj_t) BgL_auxz00_8093), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_8110;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8104;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8111;

																		{
																			obj_t BgL_auxz00_8112;

																			{	/* SawMill/bbv-specialize.scm 409 */
																				BgL_objectz00_bglt BgL_tmpz00_8113;

																				BgL_tmpz00_8113 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2941)));
																				BgL_auxz00_8112 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_8113);
																			}
																			BgL_auxz00_8111 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_8112);
																		}
																		BgL_auxz00_8110 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8111))->BgL_inz00);
																	}
																	{
																		obj_t BgL_auxz00_8105;

																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_objectz00_bglt BgL_tmpz00_8106;

																			BgL_tmpz00_8106 =
																				((BgL_objectz00_bglt)
																				BgL_new1485z00_2949);
																			BgL_auxz00_8105 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_8106);
																		}
																		BgL_auxz00_8104 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_8105);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8104))->BgL_inz00) =
																		((obj_t) BgL_auxz00_8110), BUNSPEC);
																}
																{
																	obj_t BgL_auxz00_8127;
																	BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8121;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8128;

																		{
																			obj_t BgL_auxz00_8129;

																			{	/* SawMill/bbv-specialize.scm 409 */
																				BgL_objectz00_bglt BgL_tmpz00_8130;

																				BgL_tmpz00_8130 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2941)));
																				BgL_auxz00_8129 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_8130);
																			}
																			BgL_auxz00_8128 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_8129);
																		}
																		BgL_auxz00_8127 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8128))->
																			BgL_z52hashz52);
																	}
																	{
																		obj_t BgL_auxz00_8122;

																		{	/* SawMill/bbv-specialize.scm 409 */
																			BgL_objectz00_bglt BgL_tmpz00_8123;

																			BgL_tmpz00_8123 =
																				((BgL_objectz00_bglt)
																				BgL_new1485z00_2949);
																			BgL_auxz00_8122 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_8123);
																		}
																		BgL_auxz00_8121 =
																			((BgL_rtl_inszf2bbvzf2_bglt)
																			BgL_auxz00_8122);
																	}
																	((((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_8121))->
																			BgL_z52hashz52) =
																		((obj_t) BgL_auxz00_8127), BUNSPEC);
																}
																BgL_g1541z00_2840 =
																	((obj_t) BgL_new1485z00_2949);
															}
														else
															{	/* SawMill/bbv-specialize.scm 406 */
																if (
																	(BgL_opz00_2942 ==
																		CNST_TABLE_REF(((long) 5))))
																	{	/* SawMill/bbv-specialize.scm 411 */
																		BgL_rtl_insz00_bglt BgL_new1495z00_2962;

																		{	/* SawMill/bbv-specialize.scm 411 */
																			BgL_rtl_insz00_bglt BgL_tmp1503z00_2968;
																			BgL_rtl_inszf2bbvzf2_bglt
																				BgL_wide1504z00_2969;
																			{
																				BgL_rtl_insz00_bglt BgL_auxz00_8142;

																				{	/* SawMill/bbv-specialize.scm 411 */
																					BgL_rtl_insz00_bglt
																						BgL_new1502z00_2971;
																					BgL_new1502z00_2971 =
																						((BgL_rtl_insz00_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_insz00_bgl))));
																					{	/* SawMill/bbv-specialize.scm 411 */
																						long BgL_arg2295z00_2972;

																						{	/* SawMill/bbv-specialize.scm 411 */
																							long BgL_res2691z00_4244;

																							BgL_res2691z00_4244 =
																								BGL_CLASS_INDEX
																								(BGl_rtl_insz00zzsaw_defsz00);
																							BgL_arg2295z00_2972 =
																								BgL_res2691z00_4244;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_new1502z00_2971),
																							BgL_arg2295z00_2972);
																					}
																					{	/* SawMill/bbv-specialize.scm 411 */
																						BgL_objectz00_bglt BgL_tmpz00_8147;

																						BgL_tmpz00_8147 =
																							((BgL_objectz00_bglt)
																							BgL_new1502z00_2971);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_8147, BFALSE);
																					}
																					((BgL_objectz00_bglt)
																						BgL_new1502z00_2971);
																					BgL_auxz00_8142 = BgL_new1502z00_2971;
																				}
																				BgL_tmp1503z00_2968 =
																					((BgL_rtl_insz00_bglt)
																					BgL_auxz00_8142);
																			}
																			BgL_wide1504z00_2969 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BOBJECT(GC_MALLOC(sizeof(struct
																							BgL_rtl_inszf2bbvzf2_bgl))));
																			{	/* SawMill/bbv-specialize.scm 411 */
																				obj_t BgL_auxz00_8155;
																				BgL_objectz00_bglt BgL_tmpz00_8153;

																				BgL_auxz00_8155 =
																					((obj_t) BgL_wide1504z00_2969);
																				BgL_tmpz00_8153 =
																					((BgL_objectz00_bglt)
																					BgL_tmp1503z00_2968);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8153,
																					BgL_auxz00_8155);
																			}
																			((BgL_objectz00_bglt)
																				BgL_tmp1503z00_2968);
																			{	/* SawMill/bbv-specialize.scm 411 */
																				long BgL_arg2294z00_2970;

																				{	/* SawMill/bbv-specialize.scm 411 */
																					long BgL_res2692z00_4250;

																					BgL_res2692z00_4250 =
																						BGL_CLASS_INDEX
																						(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																					BgL_arg2294z00_2970 =
																						BgL_res2692z00_4250;
																				}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt)
																						BgL_tmp1503z00_2968),
																					BgL_arg2294z00_2970);
																			}
																			BgL_new1495z00_2962 =
																				((BgL_rtl_insz00_bglt)
																				BgL_tmp1503z00_2968);
																		}
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_new1495z00_2962)))->
																				BgL_locz00) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_iz00_2941)))->BgL_locz00)),
																			BUNSPEC);
																		((((BgL_rtl_insz00_bglt)
																					COBJECT(((BgL_rtl_insz00_bglt)
																							BgL_new1495z00_2962)))->
																				BgL_z52spillz52) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_iz00_2941)))->
																					BgL_z52spillz52)), BUNSPEC);
																		((((BgL_rtl_insz00_bglt)
																					COBJECT(((BgL_rtl_insz00_bglt)
																							BgL_new1495z00_2962)))->
																				BgL_destz00) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_iz00_2941)))->BgL_destz00)),
																			BUNSPEC);
																		{
																			BgL_rtl_funz00_bglt BgL_auxz00_8175;

																			if (
																				((long)
																					CINT(STRUCT_REF(BgL_intlz00_2943,
																							(int) (((long) 1)))) <=
																					(long)
																					CINT(STRUCT_REF(BgL_intrz00_2944,
																							(int) (((long) 0))))))
																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_auxz00_8175 =
																						((BgL_rtl_funz00_bglt)
																						BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75
																						());
																				}
																			else
																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_auxz00_8175 =
																						((BgL_rtl_funz00_bglt)
																						BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75
																						());
																				}
																			((((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_new1495z00_2962)))->
																					BgL_funz00) =
																				((BgL_rtl_funz00_bglt) BgL_auxz00_8175),
																				BUNSPEC);
																		}
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_new1495z00_2962)))->
																				BgL_argsz00) =
																			((obj_t) (((BgL_rtl_insz00_bglt)
																						COBJECT(((BgL_rtl_insz00_bglt)
																								BgL_iz00_2941)))->BgL_argsz00)),
																			BUNSPEC);
																		{
																			obj_t BgL_auxz00_8200;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8194;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_8201;
																				{
																					obj_t BgL_auxz00_8202;

																					{	/* SawMill/bbv-specialize.scm 412 */
																						BgL_objectz00_bglt BgL_tmpz00_8203;

																						BgL_tmpz00_8203 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								((BgL_rtl_insz00_bglt)
																									BgL_iz00_2941)));
																						BgL_auxz00_8202 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_8203);
																					}
																					BgL_auxz00_8201 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_8202);
																				}
																				BgL_auxz00_8200 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8201))->
																					BgL_defz00);
																			}
																			{
																				obj_t BgL_auxz00_8195;

																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_objectz00_bglt BgL_tmpz00_8196;

																					BgL_tmpz00_8196 =
																						((BgL_objectz00_bglt)
																						BgL_new1495z00_2962);
																					BgL_auxz00_8195 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_8196);
																				}
																				BgL_auxz00_8194 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_8195);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8194))->
																					BgL_defz00) =
																				((obj_t) BgL_auxz00_8200), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_8217;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8211;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_8218;
																				{
																					obj_t BgL_auxz00_8219;

																					{	/* SawMill/bbv-specialize.scm 412 */
																						BgL_objectz00_bglt BgL_tmpz00_8220;

																						BgL_tmpz00_8220 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								((BgL_rtl_insz00_bglt)
																									BgL_iz00_2941)));
																						BgL_auxz00_8219 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_8220);
																					}
																					BgL_auxz00_8218 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_8219);
																				}
																				BgL_auxz00_8217 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8218))->
																					BgL_outz00);
																			}
																			{
																				obj_t BgL_auxz00_8212;

																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_objectz00_bglt BgL_tmpz00_8213;

																					BgL_tmpz00_8213 =
																						((BgL_objectz00_bglt)
																						BgL_new1495z00_2962);
																					BgL_auxz00_8212 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_8213);
																				}
																				BgL_auxz00_8211 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_8212);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8211))->
																					BgL_outz00) =
																				((obj_t) BgL_auxz00_8217), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_8234;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8228;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_8235;
																				{
																					obj_t BgL_auxz00_8236;

																					{	/* SawMill/bbv-specialize.scm 412 */
																						BgL_objectz00_bglt BgL_tmpz00_8237;

																						BgL_tmpz00_8237 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								((BgL_rtl_insz00_bglt)
																									BgL_iz00_2941)));
																						BgL_auxz00_8236 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_8237);
																					}
																					BgL_auxz00_8235 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_8236);
																				}
																				BgL_auxz00_8234 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8235))->
																					BgL_inz00);
																			}
																			{
																				obj_t BgL_auxz00_8229;

																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_objectz00_bglt BgL_tmpz00_8230;

																					BgL_tmpz00_8230 =
																						((BgL_objectz00_bglt)
																						BgL_new1495z00_2962);
																					BgL_auxz00_8229 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_8230);
																				}
																				BgL_auxz00_8228 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_8229);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8228))->
																					BgL_inz00) =
																				((obj_t) BgL_auxz00_8234), BUNSPEC);
																		}
																		{
																			obj_t BgL_auxz00_8251;
																			BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_8245;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_8252;
																				{
																					obj_t BgL_auxz00_8253;

																					{	/* SawMill/bbv-specialize.scm 412 */
																						BgL_objectz00_bglt BgL_tmpz00_8254;

																						BgL_tmpz00_8254 =
																							((BgL_objectz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								((BgL_rtl_insz00_bglt)
																									BgL_iz00_2941)));
																						BgL_auxz00_8253 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_8254);
																					}
																					BgL_auxz00_8252 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_8253);
																				}
																				BgL_auxz00_8251 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8252))->
																					BgL_z52hashz52);
																			}
																			{
																				obj_t BgL_auxz00_8246;

																				{	/* SawMill/bbv-specialize.scm 412 */
																					BgL_objectz00_bglt BgL_tmpz00_8247;

																					BgL_tmpz00_8247 =
																						((BgL_objectz00_bglt)
																						BgL_new1495z00_2962);
																					BgL_auxz00_8246 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_8247);
																				}
																				BgL_auxz00_8245 =
																					((BgL_rtl_inszf2bbvzf2_bglt)
																					BgL_auxz00_8246);
																			}
																			((((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_8245))->
																					BgL_z52hashz52) =
																				((obj_t) BgL_auxz00_8251), BUNSPEC);
																		}
																		BgL_g1541z00_2840 =
																			((obj_t) BgL_new1495z00_2962);
																	}
																else
																	{	/* SawMill/bbv-specialize.scm 406 */
																		if (
																			(BgL_opz00_2942 ==
																				CNST_TABLE_REF(((long) 6))))
																			{	/* SawMill/bbv-specialize.scm 414 */
																				BgL_rtl_insz00_bglt BgL_new1505z00_2975;

																				{	/* SawMill/bbv-specialize.scm 414 */
																					BgL_rtl_insz00_bglt
																						BgL_tmp1513z00_2981;
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_wide1514z00_2982;
																					{
																						BgL_rtl_insz00_bglt BgL_auxz00_8266;

																						{	/* SawMill/bbv-specialize.scm 414 */
																							BgL_rtl_insz00_bglt
																								BgL_new1512z00_2984;
																							BgL_new1512z00_2984 =
																								((BgL_rtl_insz00_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_rtl_insz00_bgl))));
																							{	/* SawMill/bbv-specialize.scm 414 */
																								long BgL_arg2299z00_2985;

																								{	/* SawMill/bbv-specialize.scm 414 */
																									long BgL_res2695z00_4271;

																									BgL_res2695z00_4271 =
																										BGL_CLASS_INDEX
																										(BGl_rtl_insz00zzsaw_defsz00);
																									BgL_arg2299z00_2985 =
																										BgL_res2695z00_4271;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_new1512z00_2984),
																									BgL_arg2299z00_2985);
																							}
																							{	/* SawMill/bbv-specialize.scm 414 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_8271;
																								BgL_tmpz00_8271 =
																									((BgL_objectz00_bglt)
																									BgL_new1512z00_2984);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_8271, BFALSE);
																							}
																							((BgL_objectz00_bglt)
																								BgL_new1512z00_2984);
																							BgL_auxz00_8266 =
																								BgL_new1512z00_2984;
																						}
																						BgL_tmp1513z00_2981 =
																							((BgL_rtl_insz00_bglt)
																							BgL_auxz00_8266);
																					}
																					BgL_wide1514z00_2982 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BOBJECT(GC_MALLOC(sizeof(struct
																									BgL_rtl_inszf2bbvzf2_bgl))));
																					{	/* SawMill/bbv-specialize.scm 414 */
																						obj_t BgL_auxz00_8279;
																						BgL_objectz00_bglt BgL_tmpz00_8277;

																						BgL_auxz00_8279 =
																							((obj_t) BgL_wide1514z00_2982);
																						BgL_tmpz00_8277 =
																							((BgL_objectz00_bglt)
																							BgL_tmp1513z00_2981);
																						BGL_OBJECT_WIDENING_SET
																							(BgL_tmpz00_8277,
																							BgL_auxz00_8279);
																					}
																					((BgL_objectz00_bglt)
																						BgL_tmp1513z00_2981);
																					{	/* SawMill/bbv-specialize.scm 414 */
																						long BgL_arg2298z00_2983;

																						{	/* SawMill/bbv-specialize.scm 414 */
																							long BgL_res2696z00_4277;

																							BgL_res2696z00_4277 =
																								BGL_CLASS_INDEX
																								(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																							BgL_arg2298z00_2983 =
																								BgL_res2696z00_4277;
																						}
																						BGL_OBJECT_CLASS_NUM_SET(
																							((BgL_objectz00_bglt)
																								BgL_tmp1513z00_2981),
																							BgL_arg2298z00_2983);
																					}
																					BgL_new1505z00_2975 =
																						((BgL_rtl_insz00_bglt)
																						BgL_tmp1513z00_2981);
																				}
																				((((BgL_rtl_insz00_bglt) COBJECT(
																								((BgL_rtl_insz00_bglt)
																									BgL_new1505z00_2975)))->
																						BgL_locz00) =
																					((obj_t) (((BgL_rtl_insz00_bglt)
																								COBJECT(((BgL_rtl_insz00_bglt)
																										BgL_iz00_2941)))->
																							BgL_locz00)), BUNSPEC);
																				((((BgL_rtl_insz00_bglt)
																							COBJECT(((BgL_rtl_insz00_bglt)
																									BgL_new1505z00_2975)))->
																						BgL_z52spillz52) =
																					((obj_t) (((BgL_rtl_insz00_bglt)
																								COBJECT(((BgL_rtl_insz00_bglt)
																										BgL_iz00_2941)))->
																							BgL_z52spillz52)), BUNSPEC);
																				((((BgL_rtl_insz00_bglt)
																							COBJECT(((BgL_rtl_insz00_bglt)
																									BgL_new1505z00_2975)))->
																						BgL_destz00) =
																					((obj_t) (((BgL_rtl_insz00_bglt)
																								COBJECT(((BgL_rtl_insz00_bglt)
																										BgL_iz00_2941)))->
																							BgL_destz00)), BUNSPEC);
																				{
																					BgL_rtl_funz00_bglt BgL_auxz00_8299;

																					if (
																						((long)
																							CINT(STRUCT_REF(BgL_intlz00_2943,
																									(int) (((long) 0)))) >=
																							(long)
																							CINT(STRUCT_REF(BgL_intrz00_2944,
																									(int) (((long) 1))))))
																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_auxz00_8299 =
																								((BgL_rtl_funz00_bglt)
																								BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75
																								());
																						}
																					else
																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_auxz00_8299 =
																								((BgL_rtl_funz00_bglt)
																								BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75
																								());
																						}
																					((((BgL_rtl_insz00_bglt) COBJECT(
																									((BgL_rtl_insz00_bglt)
																										BgL_new1505z00_2975)))->
																							BgL_funz00) =
																						((BgL_rtl_funz00_bglt)
																							BgL_auxz00_8299), BUNSPEC);
																				}
																				((((BgL_rtl_insz00_bglt) COBJECT(
																								((BgL_rtl_insz00_bglt)
																									BgL_new1505z00_2975)))->
																						BgL_argsz00) =
																					((obj_t) (((BgL_rtl_insz00_bglt)
																								COBJECT(((BgL_rtl_insz00_bglt)
																										BgL_iz00_2941)))->
																							BgL_argsz00)), BUNSPEC);
																				{
																					obj_t BgL_auxz00_8324;
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_8318;
																					{
																						BgL_rtl_inszf2bbvzf2_bglt
																							BgL_auxz00_8325;
																						{
																							obj_t BgL_auxz00_8326;

																							{	/* SawMill/bbv-specialize.scm 415 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_8327;
																								BgL_tmpz00_8327 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_insz00_bglt) (
																											(BgL_rtl_insz00_bglt)
																											BgL_iz00_2941)));
																								BgL_auxz00_8326 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_8327);
																							}
																							BgL_auxz00_8325 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BgL_auxz00_8326);
																						}
																						BgL_auxz00_8324 =
																							(((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8325))->
																							BgL_defz00);
																					}
																					{
																						obj_t BgL_auxz00_8319;

																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_8320;
																							BgL_tmpz00_8320 =
																								((BgL_objectz00_bglt)
																								BgL_new1505z00_2975);
																							BgL_auxz00_8319 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_8320);
																						}
																						BgL_auxz00_8318 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_8319);
																					}
																					((((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8318))->
																							BgL_defz00) =
																						((obj_t) BgL_auxz00_8324), BUNSPEC);
																				}
																				{
																					obj_t BgL_auxz00_8341;
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_8335;
																					{
																						BgL_rtl_inszf2bbvzf2_bglt
																							BgL_auxz00_8342;
																						{
																							obj_t BgL_auxz00_8343;

																							{	/* SawMill/bbv-specialize.scm 415 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_8344;
																								BgL_tmpz00_8344 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_insz00_bglt) (
																											(BgL_rtl_insz00_bglt)
																											BgL_iz00_2941)));
																								BgL_auxz00_8343 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_8344);
																							}
																							BgL_auxz00_8342 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BgL_auxz00_8343);
																						}
																						BgL_auxz00_8341 =
																							(((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8342))->
																							BgL_outz00);
																					}
																					{
																						obj_t BgL_auxz00_8336;

																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_8337;
																							BgL_tmpz00_8337 =
																								((BgL_objectz00_bglt)
																								BgL_new1505z00_2975);
																							BgL_auxz00_8336 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_8337);
																						}
																						BgL_auxz00_8335 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_8336);
																					}
																					((((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8335))->
																							BgL_outz00) =
																						((obj_t) BgL_auxz00_8341), BUNSPEC);
																				}
																				{
																					obj_t BgL_auxz00_8358;
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_8352;
																					{
																						BgL_rtl_inszf2bbvzf2_bglt
																							BgL_auxz00_8359;
																						{
																							obj_t BgL_auxz00_8360;

																							{	/* SawMill/bbv-specialize.scm 415 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_8361;
																								BgL_tmpz00_8361 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_insz00_bglt) (
																											(BgL_rtl_insz00_bglt)
																											BgL_iz00_2941)));
																								BgL_auxz00_8360 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_8361);
																							}
																							BgL_auxz00_8359 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BgL_auxz00_8360);
																						}
																						BgL_auxz00_8358 =
																							(((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8359))->
																							BgL_inz00);
																					}
																					{
																						obj_t BgL_auxz00_8353;

																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_8354;
																							BgL_tmpz00_8354 =
																								((BgL_objectz00_bglt)
																								BgL_new1505z00_2975);
																							BgL_auxz00_8353 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_8354);
																						}
																						BgL_auxz00_8352 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_8353);
																					}
																					((((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8352))->
																							BgL_inz00) =
																						((obj_t) BgL_auxz00_8358), BUNSPEC);
																				}
																				{
																					obj_t BgL_auxz00_8375;
																					BgL_rtl_inszf2bbvzf2_bglt
																						BgL_auxz00_8369;
																					{
																						BgL_rtl_inszf2bbvzf2_bglt
																							BgL_auxz00_8376;
																						{
																							obj_t BgL_auxz00_8377;

																							{	/* SawMill/bbv-specialize.scm 415 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_8378;
																								BgL_tmpz00_8378 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_insz00_bglt) (
																											(BgL_rtl_insz00_bglt)
																											BgL_iz00_2941)));
																								BgL_auxz00_8377 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_8378);
																							}
																							BgL_auxz00_8376 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BgL_auxz00_8377);
																						}
																						BgL_auxz00_8375 =
																							(((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8376))->
																							BgL_z52hashz52);
																					}
																					{
																						obj_t BgL_auxz00_8370;

																						{	/* SawMill/bbv-specialize.scm 415 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_8371;
																							BgL_tmpz00_8371 =
																								((BgL_objectz00_bglt)
																								BgL_new1505z00_2975);
																							BgL_auxz00_8370 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_8371);
																						}
																						BgL_auxz00_8369 =
																							((BgL_rtl_inszf2bbvzf2_bglt)
																							BgL_auxz00_8370);
																					}
																					((((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_8369))->
																							BgL_z52hashz52) =
																						((obj_t) BgL_auxz00_8375), BUNSPEC);
																				}
																				BgL_g1541z00_2840 =
																					((obj_t) BgL_new1505z00_2975);
																			}
																		else
																			{	/* SawMill/bbv-specialize.scm 406 */
																				if (
																					(BgL_opz00_2942 ==
																						CNST_TABLE_REF(((long) 7))))
																					{	/* SawMill/bbv-specialize.scm 417 */
																						BgL_rtl_insz00_bglt
																							BgL_new1515z00_2988;
																						{	/* SawMill/bbv-specialize.scm 417 */
																							BgL_rtl_insz00_bglt
																								BgL_tmp1523z00_2994;
																							BgL_rtl_inszf2bbvzf2_bglt
																								BgL_wide1524z00_2995;
																							{
																								BgL_rtl_insz00_bglt
																									BgL_auxz00_8390;
																								{	/* SawMill/bbv-specialize.scm 417 */
																									BgL_rtl_insz00_bglt
																										BgL_new1522z00_2997;
																									BgL_new1522z00_2997 =
																										((BgL_rtl_insz00_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_rtl_insz00_bgl))));
																									{	/* SawMill/bbv-specialize.scm 417 */
																										long BgL_arg2303z00_2998;

																										{	/* SawMill/bbv-specialize.scm 417 */
																											long BgL_res2699z00_4298;

																											BgL_res2699z00_4298 =
																												BGL_CLASS_INDEX
																												(BGl_rtl_insz00zzsaw_defsz00);
																											BgL_arg2303z00_2998 =
																												BgL_res2699z00_4298;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_new1522z00_2997),
																											BgL_arg2303z00_2998);
																									}
																									{	/* SawMill/bbv-specialize.scm 417 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_8395;
																										BgL_tmpz00_8395 =
																											((BgL_objectz00_bglt)
																											BgL_new1522z00_2997);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_8395, BFALSE);
																									}
																									((BgL_objectz00_bglt)
																										BgL_new1522z00_2997);
																									BgL_auxz00_8390 =
																										BgL_new1522z00_2997;
																								}
																								BgL_tmp1523z00_2994 =
																									((BgL_rtl_insz00_bglt)
																									BgL_auxz00_8390);
																							}
																							BgL_wide1524z00_2995 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BOBJECT(GC_MALLOC(sizeof(struct
																											BgL_rtl_inszf2bbvzf2_bgl))));
																							{	/* SawMill/bbv-specialize.scm 417 */
																								obj_t BgL_auxz00_8403;
																								BgL_objectz00_bglt
																									BgL_tmpz00_8401;
																								BgL_auxz00_8403 =
																									((obj_t)
																									BgL_wide1524z00_2995);
																								BgL_tmpz00_8401 =
																									((BgL_objectz00_bglt)
																									BgL_tmp1523z00_2994);
																								BGL_OBJECT_WIDENING_SET
																									(BgL_tmpz00_8401,
																									BgL_auxz00_8403);
																							}
																							((BgL_objectz00_bglt)
																								BgL_tmp1523z00_2994);
																							{	/* SawMill/bbv-specialize.scm 417 */
																								long BgL_arg2302z00_2996;

																								{	/* SawMill/bbv-specialize.scm 417 */
																									long BgL_res2700z00_4304;

																									BgL_res2700z00_4304 =
																										BGL_CLASS_INDEX
																										(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																									BgL_arg2302z00_2996 =
																										BgL_res2700z00_4304;
																								}
																								BGL_OBJECT_CLASS_NUM_SET(
																									((BgL_objectz00_bglt)
																										BgL_tmp1523z00_2994),
																									BgL_arg2302z00_2996);
																							}
																							BgL_new1515z00_2988 =
																								((BgL_rtl_insz00_bglt)
																								BgL_tmp1523z00_2994);
																						}
																						((((BgL_rtl_insz00_bglt) COBJECT(
																										((BgL_rtl_insz00_bglt)
																											BgL_new1515z00_2988)))->
																								BgL_locz00) =
																							((obj_t) (((BgL_rtl_insz00_bglt)
																										COBJECT((
																												(BgL_rtl_insz00_bglt)
																												BgL_iz00_2941)))->
																									BgL_locz00)), BUNSPEC);
																						((((BgL_rtl_insz00_bglt)
																									COBJECT(((BgL_rtl_insz00_bglt)
																											BgL_new1515z00_2988)))->
																								BgL_z52spillz52) =
																							((obj_t) (((BgL_rtl_insz00_bglt)
																										COBJECT((
																												(BgL_rtl_insz00_bglt)
																												BgL_iz00_2941)))->
																									BgL_z52spillz52)), BUNSPEC);
																						((((BgL_rtl_insz00_bglt)
																									COBJECT(((BgL_rtl_insz00_bglt)
																											BgL_new1515z00_2988)))->
																								BgL_destz00) =
																							((obj_t) (((BgL_rtl_insz00_bglt)
																										COBJECT((
																												(BgL_rtl_insz00_bglt)
																												BgL_iz00_2941)))->
																									BgL_destz00)), BUNSPEC);
																						{
																							BgL_rtl_funz00_bglt
																								BgL_auxz00_8423;
																							if (((long)
																									CINT(STRUCT_REF
																										(BgL_intlz00_2943,
																											(int) (((long) 0)))) >
																									(long)
																									CINT(STRUCT_REF
																										(BgL_intrz00_2944,
																											(int) (((long) 1))))))
																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_auxz00_8423 =
																										((BgL_rtl_funz00_bglt)
																										BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75
																										());
																								}
																							else
																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_auxz00_8423 =
																										((BgL_rtl_funz00_bglt)
																										BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75
																										());
																								}
																							((((BgL_rtl_insz00_bglt) COBJECT(
																											((BgL_rtl_insz00_bglt)
																												BgL_new1515z00_2988)))->
																									BgL_funz00) =
																								((BgL_rtl_funz00_bglt)
																									BgL_auxz00_8423), BUNSPEC);
																						}
																						((((BgL_rtl_insz00_bglt) COBJECT(
																										((BgL_rtl_insz00_bglt)
																											BgL_new1515z00_2988)))->
																								BgL_argsz00) =
																							((obj_t) (((BgL_rtl_insz00_bglt)
																										COBJECT((
																												(BgL_rtl_insz00_bglt)
																												BgL_iz00_2941)))->
																									BgL_argsz00)), BUNSPEC);
																						{
																							obj_t BgL_auxz00_8448;
																							BgL_rtl_inszf2bbvzf2_bglt
																								BgL_auxz00_8442;
																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_8449;
																								{
																									obj_t BgL_auxz00_8450;

																									{	/* SawMill/bbv-specialize.scm 418 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_8451;
																										BgL_tmpz00_8451 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_insz00_bglt) (
																													(BgL_rtl_insz00_bglt)
																													BgL_iz00_2941)));
																										BgL_auxz00_8450 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_8451);
																									}
																									BgL_auxz00_8449 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_8450);
																								}
																								BgL_auxz00_8448 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8449))->
																									BgL_defz00);
																							}
																							{
																								obj_t BgL_auxz00_8443;

																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_8444;
																									BgL_tmpz00_8444 =
																										((BgL_objectz00_bglt)
																										BgL_new1515z00_2988);
																									BgL_auxz00_8443 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_8444);
																								}
																								BgL_auxz00_8442 =
																									((BgL_rtl_inszf2bbvzf2_bglt)
																									BgL_auxz00_8443);
																							}
																							((((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8442))->
																									BgL_defz00) =
																								((obj_t) BgL_auxz00_8448),
																								BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_8465;
																							BgL_rtl_inszf2bbvzf2_bglt
																								BgL_auxz00_8459;
																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_8466;
																								{
																									obj_t BgL_auxz00_8467;

																									{	/* SawMill/bbv-specialize.scm 418 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_8468;
																										BgL_tmpz00_8468 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_insz00_bglt) (
																													(BgL_rtl_insz00_bglt)
																													BgL_iz00_2941)));
																										BgL_auxz00_8467 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_8468);
																									}
																									BgL_auxz00_8466 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_8467);
																								}
																								BgL_auxz00_8465 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8466))->
																									BgL_outz00);
																							}
																							{
																								obj_t BgL_auxz00_8460;

																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_8461;
																									BgL_tmpz00_8461 =
																										((BgL_objectz00_bglt)
																										BgL_new1515z00_2988);
																									BgL_auxz00_8460 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_8461);
																								}
																								BgL_auxz00_8459 =
																									((BgL_rtl_inszf2bbvzf2_bglt)
																									BgL_auxz00_8460);
																							}
																							((((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8459))->
																									BgL_outz00) =
																								((obj_t) BgL_auxz00_8465),
																								BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_8482;
																							BgL_rtl_inszf2bbvzf2_bglt
																								BgL_auxz00_8476;
																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_8483;
																								{
																									obj_t BgL_auxz00_8484;

																									{	/* SawMill/bbv-specialize.scm 418 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_8485;
																										BgL_tmpz00_8485 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_insz00_bglt) (
																													(BgL_rtl_insz00_bglt)
																													BgL_iz00_2941)));
																										BgL_auxz00_8484 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_8485);
																									}
																									BgL_auxz00_8483 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_8484);
																								}
																								BgL_auxz00_8482 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8483))->
																									BgL_inz00);
																							}
																							{
																								obj_t BgL_auxz00_8477;

																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_8478;
																									BgL_tmpz00_8478 =
																										((BgL_objectz00_bglt)
																										BgL_new1515z00_2988);
																									BgL_auxz00_8477 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_8478);
																								}
																								BgL_auxz00_8476 =
																									((BgL_rtl_inszf2bbvzf2_bglt)
																									BgL_auxz00_8477);
																							}
																							((((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8476))->
																									BgL_inz00) =
																								((obj_t) BgL_auxz00_8482),
																								BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_8499;
																							BgL_rtl_inszf2bbvzf2_bglt
																								BgL_auxz00_8493;
																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_8500;
																								{
																									obj_t BgL_auxz00_8501;

																									{	/* SawMill/bbv-specialize.scm 418 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_8502;
																										BgL_tmpz00_8502 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_insz00_bglt) (
																													(BgL_rtl_insz00_bglt)
																													BgL_iz00_2941)));
																										BgL_auxz00_8501 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_8502);
																									}
																									BgL_auxz00_8500 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_8501);
																								}
																								BgL_auxz00_8499 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8500))->
																									BgL_z52hashz52);
																							}
																							{
																								obj_t BgL_auxz00_8494;

																								{	/* SawMill/bbv-specialize.scm 418 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_8495;
																									BgL_tmpz00_8495 =
																										((BgL_objectz00_bglt)
																										BgL_new1515z00_2988);
																									BgL_auxz00_8494 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_8495);
																								}
																								BgL_auxz00_8493 =
																									((BgL_rtl_inszf2bbvzf2_bglt)
																									BgL_auxz00_8494);
																							}
																							((((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_8493))->
																									BgL_z52hashz52) =
																								((obj_t) BgL_auxz00_8499),
																								BUNSPEC);
																						}
																						BgL_g1541z00_2840 =
																							((obj_t) BgL_new1515z00_2988);
																					}
																				else
																					{	/* SawMill/bbv-specialize.scm 406 */
																						if (
																							(BgL_opz00_2942 ==
																								CNST_TABLE_REF(((long) 8))))
																							{	/* SawMill/bbv-specialize.scm 420 */
																								BgL_rtl_insz00_bglt
																									BgL_new1525z00_3001;
																								{	/* SawMill/bbv-specialize.scm 420 */
																									BgL_rtl_insz00_bglt
																										BgL_tmp1533z00_3007;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_wide1534z00_3008;
																									{
																										BgL_rtl_insz00_bglt
																											BgL_auxz00_8514;
																										{	/* SawMill/bbv-specialize.scm 420 */
																											BgL_rtl_insz00_bglt
																												BgL_new1532z00_3010;
																											BgL_new1532z00_3010 =
																												((BgL_rtl_insz00_bglt)
																												BOBJECT(GC_MALLOC(sizeof
																														(struct
																															BgL_rtl_insz00_bgl))));
																											{	/* SawMill/bbv-specialize.scm 420 */
																												long
																													BgL_arg2307z00_3011;
																												{	/* SawMill/bbv-specialize.scm 420 */
																													long
																														BgL_res2703z00_4325;
																													BgL_res2703z00_4325 =
																														BGL_CLASS_INDEX
																														(BGl_rtl_insz00zzsaw_defsz00);
																													BgL_arg2307z00_3011 =
																														BgL_res2703z00_4325;
																												}
																												BGL_OBJECT_CLASS_NUM_SET
																													(((BgL_objectz00_bglt)
																														BgL_new1532z00_3010),
																													BgL_arg2307z00_3011);
																											}
																											{	/* SawMill/bbv-specialize.scm 420 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_8519;
																												BgL_tmpz00_8519 =
																													((BgL_objectz00_bglt)
																													BgL_new1532z00_3010);
																												BGL_OBJECT_WIDENING_SET
																													(BgL_tmpz00_8519,
																													BFALSE);
																											}
																											((BgL_objectz00_bglt)
																												BgL_new1532z00_3010);
																											BgL_auxz00_8514 =
																												BgL_new1532z00_3010;
																										}
																										BgL_tmp1533z00_3007 =
																											((BgL_rtl_insz00_bglt)
																											BgL_auxz00_8514);
																									}
																									BgL_wide1534z00_3008 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BOBJECT(GC_MALLOC(sizeof
																												(struct
																													BgL_rtl_inszf2bbvzf2_bgl))));
																									{	/* SawMill/bbv-specialize.scm 420 */
																										obj_t BgL_auxz00_8527;
																										BgL_objectz00_bglt
																											BgL_tmpz00_8525;
																										BgL_auxz00_8527 =
																											((obj_t)
																											BgL_wide1534z00_3008);
																										BgL_tmpz00_8525 =
																											((BgL_objectz00_bglt)
																											BgL_tmp1533z00_3007);
																										BGL_OBJECT_WIDENING_SET
																											(BgL_tmpz00_8525,
																											BgL_auxz00_8527);
																									}
																									((BgL_objectz00_bglt)
																										BgL_tmp1533z00_3007);
																									{	/* SawMill/bbv-specialize.scm 420 */
																										long BgL_arg2306z00_3009;

																										{	/* SawMill/bbv-specialize.scm 420 */
																											long BgL_res2704z00_4331;

																											BgL_res2704z00_4331 =
																												BGL_CLASS_INDEX
																												(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
																											BgL_arg2306z00_3009 =
																												BgL_res2704z00_4331;
																										}
																										BGL_OBJECT_CLASS_NUM_SET(
																											((BgL_objectz00_bglt)
																												BgL_tmp1533z00_3007),
																											BgL_arg2306z00_3009);
																									}
																									BgL_new1525z00_3001 =
																										((BgL_rtl_insz00_bglt)
																										BgL_tmp1533z00_3007);
																								}
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1525z00_3001)))->
																										BgL_locz00) =
																									((obj_t) ((
																												(BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_iz00_2941)))->
																											BgL_locz00)), BUNSPEC);
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1525z00_3001)))->
																										BgL_z52spillz52) =
																									((obj_t) ((
																												(BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_iz00_2941)))->
																											BgL_z52spillz52)),
																									BUNSPEC);
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1525z00_3001)))->
																										BgL_destz00) =
																									((obj_t) ((
																												(BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_iz00_2941)))->
																											BgL_destz00)), BUNSPEC);
																								{
																									BgL_rtl_funz00_bglt
																										BgL_auxz00_8547;
																									if (BGl_intervalzd3zf3z20zzsaw_bbvzd2specializa7ez75(BgL_intlz00_2943, BgL_intrz00_2944))
																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_auxz00_8547 =
																												((BgL_rtl_funz00_bglt)
																												BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75
																												());
																										}
																									else
																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_auxz00_8547 =
																												((BgL_rtl_funz00_bglt)
																												BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75
																												());
																										}
																									((((BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_new1525z00_3001)))->
																											BgL_funz00) =
																										((BgL_rtl_funz00_bglt)
																											BgL_auxz00_8547),
																										BUNSPEC);
																								}
																								((((BgL_rtl_insz00_bglt)
																											COBJECT((
																													(BgL_rtl_insz00_bglt)
																													BgL_new1525z00_3001)))->
																										BgL_argsz00) =
																									((obj_t) ((
																												(BgL_rtl_insz00_bglt)
																												COBJECT((
																														(BgL_rtl_insz00_bglt)
																														BgL_iz00_2941)))->
																											BgL_argsz00)), BUNSPEC);
																								{
																									obj_t BgL_auxz00_8566;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_8560;
																									{
																										BgL_rtl_inszf2bbvzf2_bglt
																											BgL_auxz00_8567;
																										{
																											obj_t BgL_auxz00_8568;

																											{	/* SawMill/bbv-specialize.scm 421 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_8569;
																												BgL_tmpz00_8569 =
																													((BgL_objectz00_bglt)
																													((BgL_rtl_insz00_bglt)
																														((BgL_rtl_insz00_bglt) BgL_iz00_2941)));
																												BgL_auxz00_8568 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_8569);
																											}
																											BgL_auxz00_8567 =
																												(
																												(BgL_rtl_inszf2bbvzf2_bglt)
																												BgL_auxz00_8568);
																										}
																										BgL_auxz00_8566 =
																											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_8567))->BgL_defz00);
																									}
																									{
																										obj_t BgL_auxz00_8561;

																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_8562;
																											BgL_tmpz00_8562 =
																												((BgL_objectz00_bglt)
																												BgL_new1525z00_3001);
																											BgL_auxz00_8561 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_8562);
																										}
																										BgL_auxz00_8560 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_8561);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_8560))->
																											BgL_defz00) =
																										((obj_t) BgL_auxz00_8566),
																										BUNSPEC);
																								}
																								{
																									obj_t BgL_auxz00_8583;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_8577;
																									{
																										BgL_rtl_inszf2bbvzf2_bglt
																											BgL_auxz00_8584;
																										{
																											obj_t BgL_auxz00_8585;

																											{	/* SawMill/bbv-specialize.scm 421 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_8586;
																												BgL_tmpz00_8586 =
																													((BgL_objectz00_bglt)
																													((BgL_rtl_insz00_bglt)
																														((BgL_rtl_insz00_bglt) BgL_iz00_2941)));
																												BgL_auxz00_8585 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_8586);
																											}
																											BgL_auxz00_8584 =
																												(
																												(BgL_rtl_inszf2bbvzf2_bglt)
																												BgL_auxz00_8585);
																										}
																										BgL_auxz00_8583 =
																											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_8584))->BgL_outz00);
																									}
																									{
																										obj_t BgL_auxz00_8578;

																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_8579;
																											BgL_tmpz00_8579 =
																												((BgL_objectz00_bglt)
																												BgL_new1525z00_3001);
																											BgL_auxz00_8578 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_8579);
																										}
																										BgL_auxz00_8577 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_8578);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_8577))->
																											BgL_outz00) =
																										((obj_t) BgL_auxz00_8583),
																										BUNSPEC);
																								}
																								{
																									obj_t BgL_auxz00_8600;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_8594;
																									{
																										BgL_rtl_inszf2bbvzf2_bglt
																											BgL_auxz00_8601;
																										{
																											obj_t BgL_auxz00_8602;

																											{	/* SawMill/bbv-specialize.scm 421 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_8603;
																												BgL_tmpz00_8603 =
																													((BgL_objectz00_bglt)
																													((BgL_rtl_insz00_bglt)
																														((BgL_rtl_insz00_bglt) BgL_iz00_2941)));
																												BgL_auxz00_8602 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_8603);
																											}
																											BgL_auxz00_8601 =
																												(
																												(BgL_rtl_inszf2bbvzf2_bglt)
																												BgL_auxz00_8602);
																										}
																										BgL_auxz00_8600 =
																											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_8601))->BgL_inz00);
																									}
																									{
																										obj_t BgL_auxz00_8595;

																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_8596;
																											BgL_tmpz00_8596 =
																												((BgL_objectz00_bglt)
																												BgL_new1525z00_3001);
																											BgL_auxz00_8595 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_8596);
																										}
																										BgL_auxz00_8594 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_8595);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_8594))->
																											BgL_inz00) =
																										((obj_t) BgL_auxz00_8600),
																										BUNSPEC);
																								}
																								{
																									obj_t BgL_auxz00_8617;
																									BgL_rtl_inszf2bbvzf2_bglt
																										BgL_auxz00_8611;
																									{
																										BgL_rtl_inszf2bbvzf2_bglt
																											BgL_auxz00_8618;
																										{
																											obj_t BgL_auxz00_8619;

																											{	/* SawMill/bbv-specialize.scm 421 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_8620;
																												BgL_tmpz00_8620 =
																													((BgL_objectz00_bglt)
																													((BgL_rtl_insz00_bglt)
																														((BgL_rtl_insz00_bglt) BgL_iz00_2941)));
																												BgL_auxz00_8619 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_8620);
																											}
																											BgL_auxz00_8618 =
																												(
																												(BgL_rtl_inszf2bbvzf2_bglt)
																												BgL_auxz00_8619);
																										}
																										BgL_auxz00_8617 =
																											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_8618))->BgL_z52hashz52);
																									}
																									{
																										obj_t BgL_auxz00_8612;

																										{	/* SawMill/bbv-specialize.scm 421 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_8613;
																											BgL_tmpz00_8613 =
																												((BgL_objectz00_bglt)
																												BgL_new1525z00_3001);
																											BgL_auxz00_8612 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_8613);
																										}
																										BgL_auxz00_8611 =
																											(
																											(BgL_rtl_inszf2bbvzf2_bglt)
																											BgL_auxz00_8612);
																									}
																									((((BgL_rtl_inszf2bbvzf2_bglt)
																												COBJECT
																												(BgL_auxz00_8611))->
																											BgL_z52hashz52) =
																										((obj_t) BgL_auxz00_8617),
																										BUNSPEC);
																								}
																								BgL_g1541z00_2840 =
																									((obj_t) BgL_new1525z00_3001);
																							}
																						else
																							{	/* SawMill/bbv-specialize.scm 406 */
																								BgL_g1541z00_2840 = BFALSE;
																							}
																					}
																			}
																	}
															}
														if (CBOOL(BgL_g1541z00_2840))
															{	/* SawMill/bbv-specialize.scm 494 */
																{	/* SawMill/bbv-specialize.scm 496 */
																	int BgL_res2731z00_4395;

																	{	/* SawMill/bbv-specialize.scm 496 */
																		int BgL_tmpz00_8631;

																		BgL_tmpz00_8631 = (int) (((long) 4));
																		BgL_res2731z00_4395 =
																			BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8631);
																	} BgL_res2731z00_4395;
																}
																{	/* SawMill/bbv-specialize.scm 496 */
																	int BgL_tmpz00_8634;

																	BgL_tmpz00_8634 = (int) (((long) 1));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_8634,
																		BgL_sctxz00_2836);
																}
																{	/* SawMill/bbv-specialize.scm 496 */
																	int BgL_tmpz00_8637;

																	BgL_tmpz00_8637 = (int) (((long) 2));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_8637, BFALSE);
																}
																{	/* SawMill/bbv-specialize.scm 496 */
																	int BgL_tmpz00_8640;

																	BgL_tmpz00_8640 = (int) (((long) 3));
																	BGL_MVALUES_VAL_SET(BgL_tmpz00_8640, BFALSE);
																}
																return BgL_g1541z00_2840;
															}
														else
															{	/* SawMill/bbv-specialize.scm 498 */
																obj_t BgL_ctxtz00_2847;

																BgL_ctxtz00_2847 =
																	BGl_specializa7ezf2opze70zb2zzsaw_bbvzd2specializa7ez75
																	(BgL_opz00_2837, BgL_lhsz00_2832,
																	BgL_intlz00_2834, BgL_rhsz00_2833,
																	BgL_intrz00_2835, BgL_sctxz00_2836);
																{	/* SawMill/bbv-specialize.scm 499 */
																	obj_t BgL_ctxoz00_2848;

																	{	/* SawMill/bbv-specialize.scm 500 */
																		int BgL_tmpz00_8644;

																		BgL_tmpz00_8644 = (int) (((long) 1));
																		BgL_ctxoz00_2848 =
																			BGL_MVALUES_VAL(BgL_tmpz00_8644);
																	}
																	{	/* SawMill/bbv-specialize.scm 500 */
																		int BgL_res2732z00_4396;

																		{	/* SawMill/bbv-specialize.scm 500 */
																			int BgL_tmpz00_8647;

																			BgL_tmpz00_8647 = (int) (((long) 4));
																			BgL_res2732z00_4396 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8647);
																		} BgL_res2732z00_4396;
																	}
																	{	/* SawMill/bbv-specialize.scm 500 */
																		int BgL_tmpz00_8650;

																		BgL_tmpz00_8650 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_8650,
																			BgL_sctxz00_2836);
																	}
																	{	/* SawMill/bbv-specialize.scm 500 */
																		int BgL_tmpz00_8653;

																		BgL_tmpz00_8653 = (int) (((long) 2));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_8653,
																			BgL_ctxtz00_2847);
																	}
																	{	/* SawMill/bbv-specialize.scm 500 */
																		int BgL_tmpz00_8656;

																		BgL_tmpz00_8656 = (int) (((long) 3));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_8656,
																			BgL_ctxoz00_2848);
																	}
																	return BgL_iz00_221;
																}
															}
													}
												else
													{	/* SawMill/bbv-specialize.scm 490 */
														obj_t BgL_ctxtz00_2853;

														{	/* SawMill/bbv-specialize.scm 491 */
															obj_t BgL_arg2229z00_2859;
															obj_t BgL_arg2230z00_2860;

															if (CBOOL(BgL_intlz00_2834))
																{	/* SawMill/bbv-specialize.scm 491 */
																	BgL_arg2229z00_2859 = BgL_intlz00_2834;
																}
															else
																{	/* SawMill/bbv-specialize.scm 491 */
																	BgL_arg2229z00_2859 =
																		BGl_za2fixnumzd2intvza2zd2zzsaw_bbvzd2specializa7ez75;
																}
															if (CBOOL(BgL_intrz00_2835))
																{	/* SawMill/bbv-specialize.scm 492 */
																	BgL_arg2230z00_2860 = BgL_intrz00_2835;
																}
															else
																{	/* SawMill/bbv-specialize.scm 492 */
																	BgL_arg2230z00_2860 =
																		BGl_za2fixnumzd2intvza2zd2zzsaw_bbvzd2specializa7ez75;
																}
															BgL_ctxtz00_2853 =
																BGl_specializa7ezf2opze70zb2zzsaw_bbvzd2specializa7ez75
																(BgL_opz00_2837, BgL_lhsz00_2832,
																BgL_arg2229z00_2859, BgL_rhsz00_2833,
																BgL_arg2230z00_2860, BgL_sctxz00_2836);
														}
														{	/* SawMill/bbv-specialize.scm 491 */
															obj_t BgL_ctxoz00_2854;

															{	/* SawMill/bbv-specialize.scm 493 */
																int BgL_tmpz00_8664;

																BgL_tmpz00_8664 = (int) (((long) 1));
																BgL_ctxoz00_2854 =
																	BGL_MVALUES_VAL(BgL_tmpz00_8664);
															}
															{	/* SawMill/bbv-specialize.scm 493 */
																int BgL_res2733z00_4397;

																{	/* SawMill/bbv-specialize.scm 493 */
																	int BgL_tmpz00_8667;

																	BgL_tmpz00_8667 = (int) (((long) 4));
																	BgL_res2733z00_4397 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8667);
																} BgL_res2733z00_4397;
															}
															{	/* SawMill/bbv-specialize.scm 493 */
																int BgL_tmpz00_8670;

																BgL_tmpz00_8670 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_8670,
																	BgL_sctxz00_2836);
															}
															{	/* SawMill/bbv-specialize.scm 493 */
																int BgL_tmpz00_8673;

																BgL_tmpz00_8673 = (int) (((long) 2));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_8673,
																	BgL_ctxtz00_2853);
															}
															{	/* SawMill/bbv-specialize.scm 493 */
																int BgL_tmpz00_8676;

																BgL_tmpz00_8676 = (int) (((long) 3));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_8676,
																	BgL_ctxoz00_2854);
															}
															return BgL_iz00_221;
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



/* false~0 */
	BgL_rtl_loadiz00_bglt BGl_falseze70ze7zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 362 */
			{	/* SawMill/bbv-specialize.scm 361 */
				BgL_rtl_loadiz00_bglt BgL_new1474z00_2880;

				{	/* SawMill/bbv-specialize.scm 361 */
					BgL_rtl_loadiz00_bglt BgL_new1473z00_2884;

					BgL_new1473z00_2884 =
						((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadiz00_bgl))));
					{	/* SawMill/bbv-specialize.scm 361 */
						long BgL_arg2239z00_2885;

						{	/* SawMill/bbv-specialize.scm 361 */
							long BgL_res2675z00_4189;

							BgL_res2675z00_4189 =
								BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
							BgL_arg2239z00_2885 = BgL_res2675z00_4189;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1473z00_2884), BgL_arg2239z00_2885);
					}
					BgL_new1474z00_2880 = BgL_new1473z00_2884;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1474z00_2880)))->BgL_locz00) =
					((obj_t) BFALSE), BUNSPEC);
				{
					BgL_atomz00_bglt BgL_auxz00_8685;

					{	/* SawMill/bbv-specialize.scm 362 */
						BgL_literalz00_bglt BgL_new1476z00_2881;

						{	/* SawMill/bbv-specialize.scm 362 */
							BgL_literalz00_bglt BgL_new1475z00_2882;

							BgL_new1475z00_2882 =
								((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_literalz00_bgl))));
							{	/* SawMill/bbv-specialize.scm 362 */
								long BgL_arg2238z00_2883;

								{	/* SawMill/bbv-specialize.scm 362 */
									long BgL_res2676z00_4193;

									{	/* SawMill/bbv-specialize.scm 362 */
										obj_t BgL_classz00_4192;

										BgL_classz00_4192 = BGl_literalz00zzast_nodez00;
										BgL_res2676z00_4193 = BGL_CLASS_INDEX(BgL_classz00_4192);
									}
									BgL_arg2238z00_2883 = BgL_res2676z00_4193;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1475z00_2882),
									BgL_arg2238z00_2883);
							}
							{	/* SawMill/bbv-specialize.scm 362 */
								BgL_objectz00_bglt BgL_tmpz00_8690;

								BgL_tmpz00_8690 = ((BgL_objectz00_bglt) BgL_new1475z00_2882);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8690, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1475z00_2882);
							BgL_new1476z00_2881 = BgL_new1475z00_2882;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1476z00_2881)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1476z00_2881)))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_za2boolza2z00zztype_cachez00)), BUNSPEC);
						((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
											BgL_new1476z00_2881)))->BgL_valuez00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_auxz00_8685 = ((BgL_atomz00_bglt) BgL_new1476z00_2881);
					}
					((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_new1474z00_2880))->
							BgL_constantz00) = ((BgL_atomz00_bglt) BgL_auxz00_8685), BUNSPEC);
				}
				return BgL_new1474z00_2880;
			}
		}

	}



/* true~0 */
	BgL_rtl_loadiz00_bglt BGl_trueze70ze7zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 358 */
			{	/* SawMill/bbv-specialize.scm 357 */
				BgL_rtl_loadiz00_bglt BgL_new1470z00_2873;

				{	/* SawMill/bbv-specialize.scm 357 */
					BgL_rtl_loadiz00_bglt BgL_new1469z00_2877;

					BgL_new1469z00_2877 =
						((BgL_rtl_loadiz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_loadiz00_bgl))));
					{	/* SawMill/bbv-specialize.scm 357 */
						long BgL_arg2236z00_2878;

						{	/* SawMill/bbv-specialize.scm 357 */
							long BgL_res2673z00_4180;

							BgL_res2673z00_4180 =
								BGL_CLASS_INDEX(BGl_rtl_loadiz00zzsaw_defsz00);
							BgL_arg2236z00_2878 = BgL_res2673z00_4180;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1469z00_2877), BgL_arg2236z00_2878);
					}
					BgL_new1470z00_2873 = BgL_new1469z00_2877;
				}
				((((BgL_rtl_funz00_bglt) COBJECT(
								((BgL_rtl_funz00_bglt) BgL_new1470z00_2873)))->BgL_locz00) =
					((obj_t) BFALSE), BUNSPEC);
				{
					BgL_atomz00_bglt BgL_auxz00_8709;

					{	/* SawMill/bbv-specialize.scm 358 */
						BgL_literalz00_bglt BgL_new1472z00_2874;

						{	/* SawMill/bbv-specialize.scm 358 */
							BgL_literalz00_bglt BgL_new1471z00_2875;

							BgL_new1471z00_2875 =
								((BgL_literalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_literalz00_bgl))));
							{	/* SawMill/bbv-specialize.scm 358 */
								long BgL_arg2235z00_2876;

								{	/* SawMill/bbv-specialize.scm 358 */
									long BgL_res2674z00_4184;

									{	/* SawMill/bbv-specialize.scm 358 */
										obj_t BgL_classz00_4183;

										BgL_classz00_4183 = BGl_literalz00zzast_nodez00;
										BgL_res2674z00_4184 = BGL_CLASS_INDEX(BgL_classz00_4183);
									}
									BgL_arg2235z00_2876 = BgL_res2674z00_4184;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1471z00_2875),
									BgL_arg2235z00_2876);
							}
							{	/* SawMill/bbv-specialize.scm 358 */
								BgL_objectz00_bglt BgL_tmpz00_8714;

								BgL_tmpz00_8714 = ((BgL_objectz00_bglt) BgL_new1471z00_2875);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_8714, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1471z00_2875);
							BgL_new1472z00_2874 = BgL_new1471z00_2875;
						}
						((((BgL_nodez00_bglt) COBJECT(
										((BgL_nodez00_bglt) BgL_new1472z00_2874)))->BgL_locz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_nodez00_bglt) COBJECT(((BgL_nodez00_bglt)
											BgL_new1472z00_2874)))->BgL_typez00) =
							((BgL_typez00_bglt) ((BgL_typez00_bglt)
									BGl_za2boolza2z00zztype_cachez00)), BUNSPEC);
						((((BgL_atomz00_bglt) COBJECT(((BgL_atomz00_bglt)
											BgL_new1472z00_2874)))->BgL_valuez00) =
							((obj_t) BTRUE), BUNSPEC);
						BgL_auxz00_8709 = ((BgL_atomz00_bglt) BgL_new1472z00_2874);
					}
					((((BgL_rtl_loadiz00_bglt) COBJECT(BgL_new1470z00_2873))->
							BgL_constantz00) = ((BgL_atomz00_bglt) BgL_auxz00_8709), BUNSPEC);
				}
				return BgL_new1470z00_2873;
			}
		}

	}



/* reg?~0 */
	bool_t BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75(obj_t BgL_az00_2895)
	{
		{	/* SawMill/bbv-specialize.scm 379 */
			{	/* SawMill/bbv-specialize.scm 372 */
				bool_t BgL__ortest_1479z00_2897;

				BgL__ortest_1479z00_2897 =
					BGl_isazf3zf3zz__objectz00(BgL_az00_2895,
					BGl_rtl_regz00zzsaw_defsz00);
				if (BgL__ortest_1479z00_2897)
					{	/* SawMill/bbv-specialize.scm 372 */
						return BgL__ortest_1479z00_2897;
					}
				else
					{	/* SawMill/bbv-specialize.scm 372 */
						if (BGl_isazf3zf3zz__objectz00(BgL_az00_2895,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/bbv-specialize.scm 375 */
								bool_t BgL_test2965z00_8731;

								{	/* SawMill/bbv-specialize.scm 375 */
									BgL_rtl_funz00_bglt BgL_arg2256z00_2909;

									BgL_arg2256z00_2909 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_az00_2895)))->BgL_funz00);
									BgL_test2965z00_8731 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg2256z00_2909),
										BGl_rtl_callz00zzsaw_defsz00);
								}
								if (BgL_test2965z00_8731)
									{	/* SawMill/bbv-specialize.scm 376 */
										BgL_rtl_callz00_bglt BgL_i1482z00_2902;

										BgL_i1482z00_2902 =
											((BgL_rtl_callz00_bglt)
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_az00_2895)))->
												BgL_funz00));
										{	/* SawMill/bbv-specialize.scm 377 */
											bool_t BgL_test2966z00_8739;

											{	/* SawMill/bbv-specialize.scm 377 */
												BgL_globalz00_bglt BgL_arg2254z00_2908;

												BgL_arg2254z00_2908 =
													(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1482z00_2902))->
													BgL_varz00);
												BgL_test2966z00_8739 =
													(((obj_t) BgL_arg2254z00_2908) ==
													BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2);
											}
											if (BgL_test2966z00_8739)
												{	/* SawMill/bbv-specialize.scm 378 */
													obj_t BgL_arg2251z00_2905;

													{	/* SawMill/bbv-specialize.scm 378 */
														obj_t BgL_pairz00_4199;

														BgL_pairz00_4199 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_az00_2895)))->
															BgL_argsz00);
														BgL_arg2251z00_2905 = CAR(BgL_pairz00_4199);
													}
													return
														BGl_isazf3zf3zz__objectz00(BgL_arg2251z00_2905,
														BGl_rtl_regz00zzsaw_defsz00);
												}
											else
												{	/* SawMill/bbv-specialize.scm 379 */
													obj_t BgL_arg2253z00_2907;

													BgL_arg2253z00_2907 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_az00_2895)))->
														BgL_destz00);
													return BGl_isazf3zf3zz__objectz00(BgL_arg2253z00_2907,
														BGl_rtl_regz00zzsaw_defsz00);
												}
										}
									}
								else
									{	/* SawMill/bbv-specialize.scm 375 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 373 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* reg~0 */
	obj_t BGl_regze70ze7zzsaw_bbvzd2specializa7ez75(obj_t BgL_az00_2910)
	{
		{	/* SawMill/bbv-specialize.scm 385 */
			{
				obj_t BgL_az00_2886;

				if (BGl_isazf3zf3zz__objectz00(BgL_az00_2910,
						BGl_rtl_regz00zzsaw_defsz00))
					{	/* SawMill/bbv-specialize.scm 383 */
						return BgL_az00_2910;
					}
				else
					{	/* SawMill/bbv-specialize.scm 384 */
						bool_t BgL_test2968z00_8752;

						BgL_az00_2886 = BgL_az00_2910;
						if (BGl_isazf3zf3zz__objectz00(BgL_az00_2886,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/bbv-specialize.scm 367 */
								bool_t BgL_test2970z00_8755;

								{	/* SawMill/bbv-specialize.scm 367 */
									BgL_rtl_funz00_bglt BgL_arg2245z00_2894;

									BgL_arg2245z00_2894 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_az00_2886)))->BgL_funz00);
									BgL_test2970z00_8755 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg2245z00_2894),
										BGl_rtl_callz00zzsaw_defsz00);
								}
								if (BgL_test2970z00_8755)
									{	/* SawMill/bbv-specialize.scm 368 */
										BgL_rtl_callz00_bglt BgL_i1478z00_2892;

										BgL_i1478z00_2892 =
											((BgL_rtl_callz00_bglt)
											(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_az00_2886)))->
												BgL_funz00));
										{	/* SawMill/bbv-specialize.scm 369 */
											BgL_globalz00_bglt BgL_arg2244z00_2893;

											BgL_arg2244z00_2893 =
												(((BgL_rtl_callz00_bglt) COBJECT(BgL_i1478z00_2892))->
												BgL_varz00);
											BgL_test2968z00_8752 =
												(((obj_t) BgL_arg2244z00_2893) ==
												BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2);
										}
									}
								else
									{	/* SawMill/bbv-specialize.scm 367 */
										BgL_test2968z00_8752 = ((bool_t) 0);
									}
							}
						else
							{	/* SawMill/bbv-specialize.scm 365 */
								BgL_test2968z00_8752 = ((bool_t) 0);
							}
						if (BgL_test2968z00_8752)
							{	/* SawMill/bbv-specialize.scm 384 */
								obj_t BgL_pairz00_4204;

								BgL_pairz00_4204 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_az00_2910)))->BgL_argsz00);
								return CAR(BgL_pairz00_4204);
							}
						else
							{	/* SawMill/bbv-specialize.scm 384 */
								return
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_az00_2910)))->BgL_destz00);
							}
					}
			}
		}

	}



/* inv-op~0 */
	obj_t BGl_invzd2opze70z35zzsaw_bbvzd2specializa7ez75(obj_t BgL_opz00_2934)
	{
		{	/* SawMill/bbv-specialize.scm 403 */
			if ((BgL_opz00_2934 == CNST_TABLE_REF(((long) 4))))
				{	/* SawMill/bbv-specialize.scm 398 */
					return CNST_TABLE_REF(((long) 7));
				}
			else
				{	/* SawMill/bbv-specialize.scm 398 */
					if ((BgL_opz00_2934 == CNST_TABLE_REF(((long) 5))))
						{	/* SawMill/bbv-specialize.scm 398 */
							return CNST_TABLE_REF(((long) 6));
						}
					else
						{	/* SawMill/bbv-specialize.scm 398 */
							if ((BgL_opz00_2934 == CNST_TABLE_REF(((long) 7))))
								{	/* SawMill/bbv-specialize.scm 398 */
									return CNST_TABLE_REF(((long) 4));
								}
							else
								{	/* SawMill/bbv-specialize.scm 398 */
									if ((BgL_opz00_2934 == CNST_TABLE_REF(((long) 6))))
										{	/* SawMill/bbv-specialize.scm 398 */
											return CNST_TABLE_REF(((long) 5));
										}
									else
										{	/* SawMill/bbv-specialize.scm 398 */
											return BgL_opz00_2934;
										}
								}
						}
				}
		}

	}



/* test-ctxs-ref~0 */
	obj_t BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_regz00_3012, obj_t BgL_intlz00_3013, obj_t BgL_intrz00_3014,
		obj_t BgL_opz00_3015, obj_t BgL_ctxz00_3016)
	{
		{	/* SawMill/bbv-specialize.scm 463 */
			{	/* SawMill/bbv-specialize.scm 426 */
				bool_t BgL_test2975z00_8787;

				{	/* SawMill/bbv-specialize.scm 426 */
					bool_t BgL_test2976z00_8788;

					if (STRUCTP(BgL_intlz00_3013))
						{	/* SawMill/bbv-specialize.scm 426 */
							BgL_test2976z00_8788 =
								(STRUCT_KEY(BgL_intlz00_3013) == CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* SawMill/bbv-specialize.scm 426 */
							BgL_test2976z00_8788 = ((bool_t) 0);
						}
					if (BgL_test2976z00_8788)
						{	/* SawMill/bbv-specialize.scm 426 */
							bool_t BgL_test2978z00_8794;

							if (STRUCTP(BgL_intrz00_3014))
								{	/* SawMill/bbv-specialize.scm 426 */
									BgL_test2978z00_8794 =
										(STRUCT_KEY(BgL_intrz00_3014) ==
										CNST_TABLE_REF(((long) 0)));
								}
							else
								{	/* SawMill/bbv-specialize.scm 426 */
									BgL_test2978z00_8794 = ((bool_t) 0);
								}
							if (BgL_test2978z00_8794)
								{	/* SawMill/bbv-specialize.scm 426 */
									BgL_test2975z00_8787 = ((bool_t) 0);
								}
							else
								{	/* SawMill/bbv-specialize.scm 426 */
									BgL_test2975z00_8787 = ((bool_t) 1);
								}
						}
					else
						{	/* SawMill/bbv-specialize.scm 426 */
							BgL_test2975z00_8787 = ((bool_t) 1);
						}
				}
				if (BgL_test2975z00_8787)
					{	/* SawMill/bbv-specialize.scm 426 */
						{	/* SawMill/bbv-specialize.scm 427 */
							int BgL_res2709z00_4352;

							{	/* SawMill/bbv-specialize.scm 427 */
								int BgL_tmpz00_8800;

								BgL_tmpz00_8800 = (int) (((long) 2));
								BgL_res2709z00_4352 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8800);
							} BgL_res2709z00_4352;
						}
						{	/* SawMill/bbv-specialize.scm 427 */
							int BgL_tmpz00_8803;

							BgL_tmpz00_8803 = (int) (((long) 1));
							BGL_MVALUES_VAL_SET(BgL_tmpz00_8803, BgL_ctxz00_3016);
						}
						return BgL_ctxz00_3016;
					}
				else
					{	/* SawMill/bbv-specialize.scm 426 */
						if ((BgL_opz00_3015 == CNST_TABLE_REF(((long) 4))))
							{	/* SawMill/bbv-specialize.scm 430 */
								obj_t BgL_intrtz00_3025;
								obj_t BgL_introz00_3026;

								BgL_intrtz00_3025 =
									BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75
									(BgL_intlz00_3013, BgL_intrz00_3014, (int) (((long) 1)));
								BgL_introz00_3026 =
									BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75
									(BgL_intlz00_3013, BgL_intrz00_3014, (int) (((long) 0)));
								{	/* SawMill/bbv-specialize.scm 432 */
									obj_t BgL_val0_1858z00_3027;
									obj_t BgL_val1_1859z00_3028;

									BgL_val0_1858z00_3027 =
										BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_3016,
										BgL_regz00_3012, BGl_za2intza2z00zztype_cachez00, BTRUE,
										BgL_intrtz00_3025);
									BgL_val1_1859z00_3028 =
										BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_3016,
										BgL_regz00_3012, BGl_za2intza2z00zztype_cachez00, BTRUE,
										BgL_introz00_3026);
									{	/* SawMill/bbv-specialize.scm 432 */
										int BgL_res2711z00_4355;

										{	/* SawMill/bbv-specialize.scm 432 */
											int BgL_tmpz00_8815;

											BgL_tmpz00_8815 = (int) (((long) 2));
											BgL_res2711z00_4355 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8815);
										} BgL_res2711z00_4355;
									}
									{	/* SawMill/bbv-specialize.scm 432 */
										int BgL_tmpz00_8818;

										BgL_tmpz00_8818 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_8818, BgL_val1_1859z00_3028);
									}
									return BgL_val0_1858z00_3027;
								}
							}
						else
							{	/* SawMill/bbv-specialize.scm 428 */
								if ((BgL_opz00_3015 == CNST_TABLE_REF(((long) 5))))
									{	/* SawMill/bbv-specialize.scm 435 */
										obj_t BgL_intrtz00_3030;
										obj_t BgL_introz00_3031;

										BgL_intrtz00_3030 =
											BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75
											(BgL_intlz00_3013, BgL_intrz00_3014, (int) (((long) 0)));
										BgL_introz00_3031 =
											BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75
											(BgL_intlz00_3013, BgL_intrz00_3014, (int) (((long) 1)));
										{	/* SawMill/bbv-specialize.scm 437 */
											obj_t BgL_val0_1860z00_3032;
											obj_t BgL_val1_1861z00_3033;

											BgL_val0_1860z00_3032 =
												BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_3016,
												BgL_regz00_3012, BGl_za2intza2z00zztype_cachez00, BTRUE,
												BgL_intrtz00_3030);
											BgL_val1_1861z00_3033 =
												BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2(BgL_ctxz00_3016,
												BgL_regz00_3012, BGl_za2intza2z00zztype_cachez00, BTRUE,
												BgL_introz00_3031);
											{	/* SawMill/bbv-specialize.scm 437 */
												int BgL_res2713z00_4358;

												{	/* SawMill/bbv-specialize.scm 437 */
													int BgL_tmpz00_8830;

													BgL_tmpz00_8830 = (int) (((long) 2));
													BgL_res2713z00_4358 =
														BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8830);
												} BgL_res2713z00_4358;
											}
											{	/* SawMill/bbv-specialize.scm 437 */
												int BgL_tmpz00_8833;

												BgL_tmpz00_8833 = (int) (((long) 1));
												BGL_MVALUES_VAL_SET(BgL_tmpz00_8833,
													BgL_val1_1861z00_3033);
											}
											return BgL_val0_1860z00_3032;
										}
									}
								else
									{	/* SawMill/bbv-specialize.scm 428 */
										if ((BgL_opz00_3015 == CNST_TABLE_REF(((long) 7))))
											{	/* SawMill/bbv-specialize.scm 440 */
												obj_t BgL_intrtz00_3035;
												obj_t BgL_introz00_3036;

												BgL_intrtz00_3035 =
													BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75
													(BgL_intlz00_3013, BgL_intrz00_3014,
													(int) (((long) 1)));
												BgL_introz00_3036 =
													BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75
													(BgL_intlz00_3013, BgL_intrz00_3014,
													(int) (((long) 0)));
												{	/* SawMill/bbv-specialize.scm 442 */
													obj_t BgL_val0_1862z00_3037;
													obj_t BgL_val1_1863z00_3038;

													BgL_val0_1862z00_3037 =
														BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
														(BgL_ctxz00_3016, BgL_regz00_3012,
														BGl_za2intza2z00zztype_cachez00, BTRUE,
														BgL_intrtz00_3035);
													BgL_val1_1863z00_3038 =
														BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
														(BgL_ctxz00_3016, BgL_regz00_3012,
														BGl_za2intza2z00zztype_cachez00, BTRUE,
														BgL_introz00_3036);
													{	/* SawMill/bbv-specialize.scm 442 */
														int BgL_res2715z00_4361;

														{	/* SawMill/bbv-specialize.scm 442 */
															int BgL_tmpz00_8845;

															BgL_tmpz00_8845 = (int) (((long) 2));
															BgL_res2715z00_4361 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8845);
														} BgL_res2715z00_4361;
													}
													{	/* SawMill/bbv-specialize.scm 442 */
														int BgL_tmpz00_8848;

														BgL_tmpz00_8848 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_8848,
															BgL_val1_1863z00_3038);
													}
													return BgL_val0_1862z00_3037;
												}
											}
										else
											{	/* SawMill/bbv-specialize.scm 428 */
												if ((BgL_opz00_3015 == CNST_TABLE_REF(((long) 6))))
													{	/* SawMill/bbv-specialize.scm 445 */
														obj_t BgL_intrtz00_3040;
														obj_t BgL_introz00_3041;

														BgL_intrtz00_3040 =
															BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75
															(BgL_intlz00_3013, BgL_intrz00_3014,
															(int) (((long) 0)));
														BgL_introz00_3041 =
															BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75
															(BgL_intlz00_3013, BgL_intrz00_3014,
															(int) (((long) 1)));
														{	/* SawMill/bbv-specialize.scm 447 */
															obj_t BgL_val0_1864z00_3042;
															obj_t BgL_val1_1865z00_3043;

															BgL_val0_1864z00_3042 =
																BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																(BgL_ctxz00_3016, BgL_regz00_3012,
																BGl_za2intza2z00zztype_cachez00, BTRUE,
																BgL_intrtz00_3040);
															BgL_val1_1865z00_3043 =
																BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																(BgL_ctxz00_3016, BgL_regz00_3012,
																BGl_za2intza2z00zztype_cachez00, BTRUE,
																BgL_introz00_3041);
															{	/* SawMill/bbv-specialize.scm 447 */
																int BgL_res2717z00_4364;

																{	/* SawMill/bbv-specialize.scm 447 */
																	int BgL_tmpz00_8860;

																	BgL_tmpz00_8860 = (int) (((long) 2));
																	BgL_res2717z00_4364 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8860);
																} BgL_res2717z00_4364;
															}
															{	/* SawMill/bbv-specialize.scm 447 */
																int BgL_tmpz00_8863;

																BgL_tmpz00_8863 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_8863,
																	BgL_val1_1865z00_3043);
															}
															return BgL_val0_1864z00_3042;
														}
													}
												else
													{	/* SawMill/bbv-specialize.scm 428 */
														bool_t BgL_test2984z00_8866;

														{	/* SawMill/bbv-specialize.scm 428 */
															bool_t BgL__ortest_1535z00_3059;

															BgL__ortest_1535z00_3059 =
																(BgL_opz00_3015 == CNST_TABLE_REF(((long) 9)));
															if (BgL__ortest_1535z00_3059)
																{	/* SawMill/bbv-specialize.scm 428 */
																	BgL_test2984z00_8866 =
																		BgL__ortest_1535z00_3059;
																}
															else
																{	/* SawMill/bbv-specialize.scm 428 */
																	BgL_test2984z00_8866 =
																		(BgL_opz00_3015 ==
																		CNST_TABLE_REF(((long) 10)));
														}}
														if (BgL_test2984z00_8866)
															{	/* SawMill/bbv-specialize.scm 450 */
																obj_t BgL_ieqz00_3046;

																BgL_ieqz00_3046 =
																	BGl_intervalzd2eqzd2zzsaw_bbvzd2specializa7ez75
																	(BgL_intlz00_3013, BgL_intrz00_3014);
																{	/* SawMill/bbv-specialize.scm 451 */
																	obj_t BgL_val0_1866z00_3047;

																	{	/* SawMill/bbv-specialize.scm 451 */
																		bool_t BgL_test2986z00_8873;

																		if (STRUCTP(BgL_ieqz00_3046))
																			{	/* SawMill/bbv-specialize.scm 451 */
																				BgL_test2986z00_8873 =
																					(STRUCT_KEY(BgL_ieqz00_3046) ==
																					CNST_TABLE_REF(((long) 0)));
																			}
																		else
																			{	/* SawMill/bbv-specialize.scm 451 */
																				BgL_test2986z00_8873 = ((bool_t) 0);
																			}
																		if (BgL_test2986z00_8873)
																			{	/* SawMill/bbv-specialize.scm 451 */
																				BgL_val0_1866z00_3047 =
																					BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																					(BgL_ctxz00_3016, BgL_regz00_3012,
																					BGl_za2intza2z00zztype_cachez00,
																					BTRUE, BgL_ieqz00_3046);
																			}
																		else
																			{	/* SawMill/bbv-specialize.scm 451 */
																				BgL_val0_1866z00_3047 = BgL_ctxz00_3016;
																			}
																	}
																	{	/* SawMill/bbv-specialize.scm 451 */
																		int BgL_res2720z00_4370;

																		{	/* SawMill/bbv-specialize.scm 451 */
																			int BgL_tmpz00_8880;

																			BgL_tmpz00_8880 = (int) (((long) 2));
																			BgL_res2720z00_4370 =
																				BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8880);
																		} BgL_res2720z00_4370;
																	}
																	{	/* SawMill/bbv-specialize.scm 451 */
																		int BgL_tmpz00_8883;

																		BgL_tmpz00_8883 = (int) (((long) 1));
																		BGL_MVALUES_VAL_SET(BgL_tmpz00_8883,
																			BgL_ctxz00_3016);
																	}
																	return BgL_val0_1866z00_3047;
																}
															}
														else
															{	/* SawMill/bbv-specialize.scm 428 */
																bool_t BgL_test2988z00_8886;

																{	/* SawMill/bbv-specialize.scm 428 */
																	bool_t BgL__ortest_1536z00_3058;

																	BgL__ortest_1536z00_3058 =
																		(BgL_opz00_3015 ==
																		CNST_TABLE_REF(((long) 11)));
																	if (BgL__ortest_1536z00_3058)
																		{	/* SawMill/bbv-specialize.scm 428 */
																			BgL_test2988z00_8886 =
																				BgL__ortest_1536z00_3058;
																		}
																	else
																		{	/* SawMill/bbv-specialize.scm 428 */
																			BgL_test2988z00_8886 =
																				(BgL_opz00_3015 ==
																				CNST_TABLE_REF(((long) 12)));
																}}
																if (BgL_test2988z00_8886)
																	{	/* SawMill/bbv-specialize.scm 456 */
																		obj_t BgL_ieqz00_3052;

																		BgL_ieqz00_3052 =
																			BGl_intervalzd2eqzd2zzsaw_bbvzd2specializa7ez75
																			(BgL_intlz00_3013, BgL_intrz00_3014);
																		{	/* SawMill/bbv-specialize.scm 457 */
																			obj_t BgL_val1_1869z00_3054;

																			{	/* SawMill/bbv-specialize.scm 459 */
																				bool_t BgL_test2990z00_8893;

																				if (STRUCTP(BgL_ieqz00_3052))
																					{	/* SawMill/bbv-specialize.scm 459 */
																						BgL_test2990z00_8893 =
																							(STRUCT_KEY(BgL_ieqz00_3052) ==
																							CNST_TABLE_REF(((long) 0)));
																					}
																				else
																					{	/* SawMill/bbv-specialize.scm 459 */
																						BgL_test2990z00_8893 = ((bool_t) 0);
																					}
																				if (BgL_test2990z00_8893)
																					{	/* SawMill/bbv-specialize.scm 459 */
																						BgL_val1_1869z00_3054 =
																							BGl_extendzd2ctxzd2zzsaw_bbvzd2typeszd2
																							(BgL_ctxz00_3016, BgL_regz00_3012,
																							BGl_za2intza2z00zztype_cachez00,
																							BTRUE, BgL_ieqz00_3052);
																					}
																				else
																					{	/* SawMill/bbv-specialize.scm 459 */
																						BgL_val1_1869z00_3054 =
																							BgL_ctxz00_3016;
																					}
																			}
																			{	/* SawMill/bbv-specialize.scm 457 */
																				int BgL_res2723z00_4376;

																				{	/* SawMill/bbv-specialize.scm 457 */
																					int BgL_tmpz00_8900;

																					BgL_tmpz00_8900 = (int) (((long) 2));
																					BgL_res2723z00_4376 =
																						BGL_MVALUES_NUMBER_SET
																						(BgL_tmpz00_8900);
																				} BgL_res2723z00_4376;
																			}
																			{	/* SawMill/bbv-specialize.scm 457 */
																				int BgL_tmpz00_8903;

																				BgL_tmpz00_8903 = (int) (((long) 1));
																				BGL_MVALUES_VAL_SET(BgL_tmpz00_8903,
																					BgL_val1_1869z00_3054);
																			}
																			return BgL_ctxz00_3016;
																		}
																	}
																else
																	{	/* SawMill/bbv-specialize.scm 428 */
																		{	/* SawMill/bbv-specialize.scm 463 */
																			int BgL_res2724z00_4377;

																			{	/* SawMill/bbv-specialize.scm 463 */
																				int BgL_tmpz00_8906;

																				BgL_tmpz00_8906 = (int) (((long) 2));
																				BgL_res2724z00_4377 =
																					BGL_MVALUES_NUMBER_SET
																					(BgL_tmpz00_8906);
																			} BgL_res2724z00_4377;
																		}
																		{	/* SawMill/bbv-specialize.scm 463 */
																			int BgL_tmpz00_8909;

																			BgL_tmpz00_8909 = (int) (((long) 1));
																			BGL_MVALUES_VAL_SET(BgL_tmpz00_8909,
																				BgL_ctxz00_3016);
																		}
																		return BgL_ctxz00_3016;
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



/* specialize/op~0 */
	obj_t BGl_specializa7ezf2opze70zb2zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_opz00_3062, obj_t BgL_lhsz00_3063, obj_t BgL_intlz00_3064,
		obj_t BgL_rhsz00_3065, obj_t BgL_intrz00_3066, obj_t BgL_sctxz00_3067)
	{
		{	/* SawMill/bbv-specialize.scm 478 */
			{	/* SawMill/bbv-specialize.scm 467 */
				bool_t BgL_test2992z00_8912;

				if (BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75(BgL_lhsz00_3063))
					{	/* SawMill/bbv-specialize.scm 467 */
						BgL_test2992z00_8912 =
							BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75(BgL_rhsz00_3065);
					}
				else
					{	/* SawMill/bbv-specialize.scm 467 */
						BgL_test2992z00_8912 = ((bool_t) 0);
					}
				if (BgL_test2992z00_8912)
					{	/* SawMill/bbv-specialize.scm 468 */
						obj_t BgL_lctxtz00_3071;

						BgL_lctxtz00_3071 =
							BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75
							(BGl_regze70ze7zzsaw_bbvzd2specializa7ez75(BgL_lhsz00_3063),
							BgL_intlz00_3064, BgL_intrz00_3066, BgL_opz00_3062,
							BgL_sctxz00_3067);
						{	/* SawMill/bbv-specialize.scm 469 */
							obj_t BgL_lctxoz00_3072;

							{	/* SawMill/bbv-specialize.scm 470 */
								int BgL_tmpz00_8918;

								BgL_tmpz00_8918 = (int) (((long) 1));
								BgL_lctxoz00_3072 = BGL_MVALUES_VAL(BgL_tmpz00_8918);
							}
							{	/* SawMill/bbv-specialize.scm 470 */
								obj_t BgL_rctxtz00_3073;

								BgL_rctxtz00_3073 =
									BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75
									(BGl_regze70ze7zzsaw_bbvzd2specializa7ez75(BgL_rhsz00_3065),
									BgL_intrz00_3066, BgL_intlz00_3064,
									BGl_invzd2opze70z35zzsaw_bbvzd2specializa7ez75
									(BgL_opz00_3062), BNIL);
								{	/* SawMill/bbv-specialize.scm 471 */
									obj_t BgL_rctxoz00_3074;

									{	/* SawMill/bbv-specialize.scm 472 */
										int BgL_tmpz00_8924;

										BgL_tmpz00_8924 = (int) (((long) 1));
										BgL_rctxoz00_3074 = BGL_MVALUES_VAL(BgL_tmpz00_8924);
									}
									{	/* SawMill/bbv-specialize.scm 472 */
										obj_t BgL_val0_1872z00_3075;
										obj_t BgL_val1_1873z00_3076;

										BgL_val0_1872z00_3075 =
											BGl_appendzd221011zd2zzsaw_bbvzd2specializa7ez75
											(BgL_rctxtz00_3073, BgL_lctxtz00_3071);
										BgL_val1_1873z00_3076 =
											BGl_appendzd221011zd2zzsaw_bbvzd2specializa7ez75
											(BgL_rctxoz00_3074, BgL_lctxoz00_3072);
										{	/* SawMill/bbv-specialize.scm 472 */
											int BgL_res2725z00_4378;

											{	/* SawMill/bbv-specialize.scm 472 */
												int BgL_tmpz00_8929;

												BgL_tmpz00_8929 = (int) (((long) 2));
												BgL_res2725z00_4378 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8929);
											} BgL_res2725z00_4378;
										}
										{	/* SawMill/bbv-specialize.scm 472 */
											int BgL_tmpz00_8932;

											BgL_tmpz00_8932 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_8932,
												BgL_val1_1873z00_3076);
										}
										return BgL_val0_1872z00_3075;
									}
								}
							}
						}
					}
				else
					{	/* SawMill/bbv-specialize.scm 467 */
						if (BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75(BgL_lhsz00_3063))
							{	/* SawMill/bbv-specialize.scm 473 */
								return
									BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75
									(BGl_regze70ze7zzsaw_bbvzd2specializa7ez75(BgL_lhsz00_3063),
									BgL_intlz00_3064, BgL_intrz00_3066, BgL_opz00_3062,
									BgL_sctxz00_3067);
							}
						else
							{	/* SawMill/bbv-specialize.scm 473 */
								if (BGl_regzf3ze70z14zzsaw_bbvzd2specializa7ez75
									(BgL_rhsz00_3065))
									{	/* SawMill/bbv-specialize.scm 475 */
										return
											BGl_testzd2ctxszd2refze70ze7zzsaw_bbvzd2specializa7ez75
											(BGl_regze70ze7zzsaw_bbvzd2specializa7ez75
											(BgL_rhsz00_3065), BgL_intrz00_3066, BgL_intlz00_3064,
											BGl_invzd2opze70z35zzsaw_bbvzd2specializa7ez75
											(BgL_opz00_3062), BgL_sctxz00_3067);
									}
								else
									{	/* SawMill/bbv-specialize.scm 475 */
										{	/* SawMill/bbv-specialize.scm 478 */
											int BgL_res2726z00_4379;

											{	/* SawMill/bbv-specialize.scm 478 */
												int BgL_tmpz00_8944;

												BgL_tmpz00_8944 = (int) (((long) 2));
												BgL_res2726z00_4379 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_8944);
											} BgL_res2726z00_4379;
										}
										{	/* SawMill/bbv-specialize.scm 478 */
											int BgL_tmpz00_8947;

											BgL_tmpz00_8947 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_8947, BFALSE);
										}
										return BFALSE;
									}
							}
					}
			}
		}

	}



/* &rtl_ins-specialize-intcmp */
	obj_t
		BGl_z62rtl_inszd2specializa7ezd2intcmpzc5zzsaw_bbvzd2specializa7ez75(obj_t
		BgL_envz00_4740, obj_t BgL_iz00_4741, obj_t BgL_ctxz00_4742)
	{
		{	/* SawMill/bbv-specialize.scm 354 */
			return
				BGl_rtl_inszd2specializa7ezd2intcmpza7zzsaw_bbvzd2specializa7ez75
				(BgL_iz00_4741, BgL_ctxz00_4742);
		}

	}



/* interval=? */
	bool_t BGl_intervalzd3zf3z20zzsaw_bbvzd2specializa7ez75(obj_t BgL_leftz00_231,
		obj_t BgL_rightz00_232)
	{
		{	/* SawMill/bbv-specialize.scm 529 */
			if (
				((long) CINT(STRUCT_REF(BgL_leftz00_231,
							(int) (((long) 0)))) ==
					(long) CINT(STRUCT_REF(BgL_rightz00_232, (int) (((long) 0))))))
				{	/* SawMill/bbv-specialize.scm 530 */
					return
						(
						(long) CINT(STRUCT_REF(BgL_leftz00_231,
								(int) (((long) 1)))) ==
						(long) CINT(STRUCT_REF(BgL_rightz00_232, (int) (((long) 1)))));
				}
			else
				{	/* SawMill/bbv-specialize.scm 530 */
					return ((bool_t) 0);
				}
		}

	}



/* interval-lts */
	obj_t BGl_intervalzd2ltszd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_leftz00_233,
		obj_t BgL_rightz00_234, int BgL_shiftz00_235)
	{
		{	/* SawMill/bbv-specialize.scm 536 */
			{	/* SawMill/bbv-specialize.scm 537 */
				obj_t BgL_raz00_3111;

				BgL_raz00_3111 =
					BGl_2zd2zd2zz__r4_numbers_6_5z00(STRUCT_REF(BgL_rightz00_234,
						(int) (((long) 1))), BINT(BgL_shiftz00_235));
				if (BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_raz00_3111,
						STRUCT_REF(BgL_leftz00_233, (int) (((long) 1)))))
					{	/* SawMill/bbv-specialize.scm 538 */
						if (BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_raz00_3111,
								STRUCT_REF(BgL_leftz00_233, (int) (((long) 0)))))
							{	/* SawMill/bbv-specialize.scm 540 */
								obj_t BgL_arg2351z00_3116;

								BgL_arg2351z00_3116 =
									BGl_2minz00zz__r4_numbers_6_5z00(STRUCT_REF(BgL_leftz00_233,
										(int) (((long) 0))), BgL_raz00_3111);
								{	/* SawMill/bbv-specialize.scm 540 */
									obj_t BgL_newz00_4440;

									BgL_newz00_4440 =
										create_struct(CNST_TABLE_REF(((long) 0)),
										(int) (((long) 2)));
									{	/* SawMill/bbv-specialize.scm 540 */
										int BgL_tmpz00_8984;

										BgL_tmpz00_8984 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4440, BgL_tmpz00_8984,
											BgL_raz00_3111);
									}
									{	/* SawMill/bbv-specialize.scm 540 */
										int BgL_tmpz00_8987;

										BgL_tmpz00_8987 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4440, BgL_tmpz00_8987,
											BgL_arg2351z00_3116);
									}
									return BgL_newz00_4440;
								}
							}
						else
							{	/* SawMill/bbv-specialize.scm 541 */
								obj_t BgL_newz00_4443;

								BgL_newz00_4443 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
								{	/* SawMill/bbv-specialize.scm 541 */
									int BgL_tmpz00_8993;

									BgL_tmpz00_8993 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_4443, BgL_tmpz00_8993, BgL_raz00_3111);
								}
								{	/* SawMill/bbv-specialize.scm 541 */
									int BgL_tmpz00_8996;

									BgL_tmpz00_8996 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_4443, BgL_tmpz00_8996, BgL_raz00_3111);
								}
								return BgL_newz00_4443;
							}
					}
				else
					{	/* SawMill/bbv-specialize.scm 538 */
						return BgL_leftz00_233;
					}
			}
		}

	}



/* interval-gts */
	obj_t BGl_intervalzd2gtszd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_leftz00_240,
		obj_t BgL_rightz00_241, int BgL_shiftz00_242)
	{
		{	/* SawMill/bbv-specialize.scm 553 */
			{	/* SawMill/bbv-specialize.scm 554 */
				obj_t BgL_riz00_3122;

				BgL_riz00_3122 =
					BGl_2zb2zb2zz__r4_numbers_6_5z00(STRUCT_REF(BgL_rightz00_241,
						(int) (((long) 0))), BINT(BgL_shiftz00_242));
				if (BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_riz00_3122,
						STRUCT_REF(BgL_leftz00_240, (int) (((long) 0)))))
					{	/* SawMill/bbv-specialize.scm 555 */
						if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_riz00_3122,
								STRUCT_REF(BgL_leftz00_240, (int) (((long) 1)))))
							{	/* SawMill/bbv-specialize.scm 557 */
								obj_t BgL_arg2359z00_3127;

								BgL_arg2359z00_3127 =
									BGl_2maxz00zz__r4_numbers_6_5z00(STRUCT_REF(BgL_leftz00_240,
										(int) (((long) 1))), BgL_riz00_3122);
								{	/* SawMill/bbv-specialize.scm 557 */
									obj_t BgL_newz00_4450;

									BgL_newz00_4450 =
										create_struct(CNST_TABLE_REF(((long) 0)),
										(int) (((long) 2)));
									{	/* SawMill/bbv-specialize.scm 557 */
										int BgL_tmpz00_9017;

										BgL_tmpz00_9017 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_4450, BgL_tmpz00_9017,
											BgL_arg2359z00_3127);
									}
									{	/* SawMill/bbv-specialize.scm 557 */
										int BgL_tmpz00_9020;

										BgL_tmpz00_9020 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_4450, BgL_tmpz00_9020,
											BgL_riz00_3122);
									}
									return BgL_newz00_4450;
								}
							}
						else
							{	/* SawMill/bbv-specialize.scm 558 */
								obj_t BgL_newz00_4453;

								BgL_newz00_4453 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 2)));
								{	/* SawMill/bbv-specialize.scm 558 */
									int BgL_tmpz00_9026;

									BgL_tmpz00_9026 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_4453, BgL_tmpz00_9026, BgL_riz00_3122);
								}
								{	/* SawMill/bbv-specialize.scm 558 */
									int BgL_tmpz00_9029;

									BgL_tmpz00_9029 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_4453, BgL_tmpz00_9029, BgL_riz00_3122);
								}
								return BgL_newz00_4453;
							}
					}
				else
					{	/* SawMill/bbv-specialize.scm 555 */
						return BgL_leftz00_240;
					}
			}
		}

	}



/* interval-eq */
	obj_t BGl_intervalzd2eqzd2zzsaw_bbvzd2specializa7ez75(obj_t BgL_leftz00_247,
		obj_t BgL_rightz00_248)
	{
		{	/* SawMill/bbv-specialize.scm 570 */
			{	/* SawMill/bbv-specialize.scm 571 */
				obj_t BgL_riz00_3133;

				BgL_riz00_3133 = STRUCT_REF(BgL_rightz00_248, (int) (((long) 0)));
				{	/* SawMill/bbv-specialize.scm 571 */
					obj_t BgL_raz00_3134;

					BgL_raz00_3134 = STRUCT_REF(BgL_rightz00_248, (int) (((long) 1)));
					{	/* SawMill/bbv-specialize.scm 572 */
						obj_t BgL_liz00_3135;

						BgL_liz00_3135 = STRUCT_REF(BgL_leftz00_247, (int) (((long) 0)));
						{	/* SawMill/bbv-specialize.scm 573 */
							obj_t BgL_laz00_3136;

							BgL_laz00_3136 = STRUCT_REF(BgL_leftz00_247, (int) (((long) 1)));
							{	/* SawMill/bbv-specialize.scm 574 */
								obj_t BgL_oiz00_3137;

								BgL_oiz00_3137 =
									BGl_2maxz00zz__r4_numbers_6_5z00(BgL_riz00_3133,
									BgL_liz00_3135);
								{	/* SawMill/bbv-specialize.scm 575 */
									obj_t BgL_oaz00_3138;

									BgL_oaz00_3138 =
										BGl_2minz00zz__r4_numbers_6_5z00(BgL_raz00_3134,
										BgL_laz00_3136);
									{	/* SawMill/bbv-specialize.scm 576 */

										if (BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_oiz00_3137,
												BgL_oaz00_3138))
											{	/* SawMill/bbv-specialize.scm 578 */
												obj_t BgL_newz00_4460;

												BgL_newz00_4460 =
													create_struct(CNST_TABLE_REF(((long) 0)),
													(int) (((long) 2)));
												{	/* SawMill/bbv-specialize.scm 578 */
													int BgL_tmpz00_9047;

													BgL_tmpz00_9047 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_4460, BgL_tmpz00_9047,
														BgL_oaz00_3138);
												}
												{	/* SawMill/bbv-specialize.scm 578 */
													int BgL_tmpz00_9050;

													BgL_tmpz00_9050 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_4460, BgL_tmpz00_9050,
														BgL_oiz00_3137);
												}
												return BgL_newz00_4460;
											}
										else
											{	/* SawMill/bbv-specialize.scm 577 */
												return BFALSE;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2specializa7ez75()
	{
		{	/* SawMill/bbv-specialize.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(((long) 237915310),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(((long) 241613701),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
			return
				BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(((long) 486661379),
				BSTRING_TO_STRING(BGl_string2741z00zzsaw_bbvzd2specializa7ez75));
		}

	}

#ifdef __cplusplus
}
#endif
