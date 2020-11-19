/*===========================================================================*/
/*   (SawMill/bbv.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/bbv.scm) */
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

	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;

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
	static obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static bool_t BGl_widenzd2bbvz12zc0zzsaw_bbvz00(obj_t, obj_t);
	extern bool_t BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	static BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvz00(obj_t, obj_t);
	static BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bbvz00zzsaw_bbvz00(BgL_backendz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_bbvz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_bbvz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	extern obj_t BGl_regsetz00zzsaw_regsetz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt, obj_t);
	extern bool_t
		BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static BgL_blockz00_bglt
		BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00(BgL_blockz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_z62regsetzf3z91zzsaw_bbvz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_bbvz00();
	static obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_mergezd2blockz12zc0zzsaw_bbvz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt,
		obj_t);
	extern bool_t BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvz00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_bbvz00(obj_t,
		obj_t);
	static obj_t BGl_livenessz12z12zzsaw_bbvz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	extern bool_t BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL int BGl_regsetzd2msiza7ez75zzsaw_bbvz00(BgL_regsetz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvz00(obj_t, obj_t);
	extern bool_t BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		BgL_regsetz00_bglt);
	extern obj_t BGl_blockSz00zzsaw_bbvzd2typeszd2;
	extern obj_t BGl_blockVz00zzsaw_bbvzd2typeszd2;
	static obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvz00(BgL_regsetz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static BgL_blockz00_bglt
		BGl_getzd2specializa7ezd2blockza7zzsaw_bbvz00(BgL_blockz00_bglt, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_IMPORT int bgl_debug();
	static BgL_blockz00_bglt BGl_mergez12z12zzsaw_bbvz00(obj_t,
		BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32095ze3ze5zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_mergezf3zf3zzsaw_bbvz00(BgL_blockz00_bglt, BgL_blockz00_bglt,
		obj_t);
	extern obj_t BGl_setzd2maxzd2labelz12z12zzsaw_bbvzd2utilszd2(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_bbvz00();
	extern obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_regsetzf3zf3zzsaw_bbvz00(obj_t);
	extern obj_t BGl_startzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2stringzd2zzsaw_bbvz00(BgL_regsetz00_bglt);
	extern obj_t BGl_genlabelz00zzsaw_bbvzd2utilszd2();
	extern bool_t BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_regsetz00_bglt);
	extern obj_t BGl_removezd2nopz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		obj_t);
	extern bool_t
		BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvz00(obj_t, obj_t);
	extern BgL_regsetz00_bglt BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	static bool_t BGl_za2cleanupza2z00zzsaw_bbvz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvz00(obj_t, obj_t);
	extern obj_t BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bbvz62zzsaw_bbvz00(obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvz00(BgL_regsetz00_bglt, int);
	static obj_t BGl_z62zc3z04anonymousza31925ze3ze5zzsaw_bbvz00(obj_t, obj_t);
	extern bool_t
		BGl_rtl_inszd2lastzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_bbvz00 = BUNSPEC;
	extern bool_t
		BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	extern obj_t BGl_collectzd2registersz12zc0zzsaw_regutilsz00(obj_t);
	extern obj_t
		BGl_normaliza7ezd2gotoz12z67zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_bbvz00(int,
		int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvz00(BgL_typez00_bglt, obj_t, obj_t,
		obj_t, obj_t, obj_t, int, obj_t, obj_t, int, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_everyz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_bbvz00();
	static obj_t BGl_dumpzd2blockszd2zzsaw_bbvz00(BgL_globalz00_bglt, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_filterzd2livezd2regsz00zzsaw_bbvz00(BgL_rtl_insz00_bglt,
		obj_t);
	extern obj_t
		BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75
		(BgL_rtl_insz00_bglt, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_bbvz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	extern obj_t
		BGl_simplifyzd2branchz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32009ze3ze5zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	static bool_t BGl_argszd2widenzd2bbvz12ze70zf5zzsaw_bbvz00(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL BgL_rtl_regz00_bglt BGl_rtl_regzf2razd2nilz20zzsaw_bbvz00();
	extern obj_t BGl_dumpz00zzsaw_defsz00(obj_t, obj_t, int);
	static obj_t BGl_z62dumpzd2blockszb0zzsaw_bbvz00(obj_t, obj_t);
	extern obj_t
		BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvz00(obj_t, obj_t);
	extern BgL_regsetz00_bglt BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int BGl_regsetzd2lengthzd2zzsaw_bbvz00(BgL_regsetz00_bglt);
	extern obj_t BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(obj_t);
	extern obj_t BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2();
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvzd2utilszd2(long,
		char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvz00(obj_t);
	BGL_IMPORT obj_t BGl_tprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_bbvz00();
	extern obj_t BGl_paramszd2ze3ctxz31zzsaw_bbvzd2typeszd2(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvz00();
	static BgL_blockz00_bglt
		BGl_specializa7ezd2blockz12z67zzsaw_bbvz00(BgL_blockz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		int);
	BGL_EXPORTED_DECL int
		BGl_rtl_regzf2razd2numz20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		obj_t);
	extern bool_t
		BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(BgL_rtl_insz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvz00(obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvz00(obj_t, obj_t);
	extern obj_t BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt,
		BgL_blockz00_bglt, BgL_blockz00_bglt);
	BGL_EXPORTED_DECL BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_bbvz00();
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvz00(BgL_rtl_regz00_bglt,
		obj_t);
	extern obj_t BGl_removezd2tempsz12zc0zzsaw_bbvzd2utilszd2(BgL_blockz00_bglt);
	static obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2reglzd2zzsaw_bbvz00(BgL_regsetz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_regsetzd2regvzd2zzsaw_bbvz00(BgL_regsetz00_bglt);
	BGL_IMPORT obj_t BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(obj_t);
	extern obj_t BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2(obj_t,
		BgL_blockz00_bglt);
	static BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvz00(obj_t);
	static obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	BGL_EXPORTED_DECL obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvz00(BgL_rtl_regz00_bglt);
	static obj_t BGl_getzd2argsze70z35zzsaw_bbvz00(obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2namezd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72517za7,
		BGl_z62rtl_regzf2razd2namez42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2nilzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2nilza72518za7, BGl_z62regsetzd2nilzb0zzsaw_bbvz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2500z00zzsaw_bbvz00,
		BgL_bgl_string2500za700za7za7s2519za7, "SawMill/bbv.scm", 15);
	      DEFINE_STRING(BGl_string2501z00zzsaw_bbvz00,
		BgL_bgl_string2501za700za7za7s2520za7, "<<< ", 4);
	      DEFINE_STRING(BGl_string2502z00zzsaw_bbvz00,
		BgL_bgl_string2502za700za7za7s2521za7, " -> ", 4);
	      DEFINE_STRING(BGl_string2503z00zzsaw_bbvz00,
		BgL_bgl_string2503za700za7za7s2522za7, " ", 1);
	      DEFINE_STRING(BGl_string2504z00zzsaw_bbvz00,
		BgL_bgl_string2504za700za7za7s2523za7, "\n", 1);
	      DEFINE_STRING(BGl_string2505z00zzsaw_bbvz00,
		BgL_bgl_string2505za700za7za7s2524za7, ".spec.bb", 8);
	      DEFINE_STRING(BGl_string2506z00zzsaw_bbvz00,
		BgL_bgl_string2506za700za7za7s2525za7, ".bb", 3);
	      DEFINE_STRING(BGl_string2507z00zzsaw_bbvz00,
		BgL_bgl_string2507za700za7za7s2526za7, "~a-~a~a", 7);
	      DEFINE_STRING(BGl_string2508z00zzsaw_bbvz00,
		BgL_bgl_string2508za700za7za7s2527za7, ";; -*- mode: bee -*-", 20);
	      DEFINE_STRING(BGl_string2509z00zzsaw_bbvz00,
		BgL_bgl_string2509za700za7za7s2528za7, ";; *** ", 7);
	      DEFINE_STRING(BGl_string2510z00zzsaw_bbvz00,
		BgL_bgl_string2510za700za7za7s2529za7, ";; ", 3);
	      DEFINE_STRING(BGl_string2512z00zzsaw_bbvz00,
		BgL_bgl_string2512za700za7za7s2530za7, "saw_bbv", 7);
	      DEFINE_STRING(BGl_string2513z00zzsaw_bbvz00,
		BgL_bgl_string2513za700za7za7s2531za7, "_ * ", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72532za7,
		BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2regvzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2regv2533z00, BGl_z62regsetzd2regvzb0zzsaw_bbvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2lengthzd2setz12zd2envzc0zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2leng2534z00,
		BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2typezd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72535za7,
		BGl_z62rtl_regzf2razd2typez42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72536za7,
		BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bbvzd2envzd2zzsaw_bbvz00,
		BgL_bgl_za762bbvza762za7za7saw_b2537z00, BGl_z62bbvz62zzsaw_bbvz00, 0L,
		BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2nilzd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72538za7,
		BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2numzd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72539za7,
		BGl_z62rtl_regzf2razd2numz42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_regsetzd2stringzd2setz12zd2envzc0zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2stri2540z00,
		BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razf3zd2envzd3zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72541za7,
		BGl_z62rtl_regzf2razf3z63zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72542za7,
		BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2hardwarezd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72543za7,
		BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2regsetzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762makeza7d2regset2544z00, BGl_z62makezd2regsetzb0zzsaw_bbvz00,
		0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzf3zd2envz21zzsaw_bbvz00,
		BgL_bgl_za762regsetza7f3za791za72545z00, BGl_z62regsetzf3z91zzsaw_bbvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2coalescezd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72546za7,
		BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2reglzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2regl2547z00, BGl_z62regsetzd2reglzb0zzsaw_bbvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2typezd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72548za7,
		BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interferezd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72549za7,
		BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2setz12zd2envzc1zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72550za7,
		BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2colorzd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72551za7,
		BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2occurrenceszd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72552za7,
		BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2511z00zzsaw_bbvz00,
		BgL_bgl_za762za7c3za704anonymo2553za7,
		BGl_z62zc3z04anonymousza32009ze3ze5zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2msiza7ezd2envza7zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2msiza72554za7,
		BGl_z62regsetzd2msiza7ez17zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2varzd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72555za7,
		BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2494z00zzsaw_bbvz00,
		BgL_bgl_string2494za700za7za7s2556za7, "        bbv ", 12);
	      DEFINE_STRING(BGl_string2495z00zzsaw_bbvz00,
		BgL_bgl_string2495za700za7za7s2557za7, ".plain.bb", 9);
	      DEFINE_STRING(BGl_string2496z00zzsaw_bbvz00,
		BgL_bgl_string2496za700za7za7s2558za7, ".norm.bb", 8);
	      DEFINE_STRING(BGl_string2497z00zzsaw_bbvz00,
		BgL_bgl_string2497za700za7za7s2559za7, ">>> ", 4);
	      DEFINE_STRING(BGl_string2498z00zzsaw_bbvz00,
		BgL_bgl_string2498za700za7za7s2560za7, ":", 1);
	      DEFINE_STRING(BGl_string2499z00zzsaw_bbvz00,
		BgL_bgl_string2499za700za7za7s2561za7, ",", 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2varzd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72562za7,
		BGl_z62rtl_regzf2razd2varz42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2onexprzf3zd2envz01zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72563za7,
		BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2colorzd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72564za7,
		BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2stringzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2stri2565z00, BGl_z62regsetzd2stringzb0zzsaw_bbvz00,
		0L, BUNSPEC, 1);
	extern obj_t BGl_collectzd2registerz12zd2envz12zzsaw_regutilsz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2setz12zd2envz32zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72566za7,
		BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2rtl_regzf2razd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762makeza7d2rtl_re2567z00,
		BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvz00, 0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_regsetzd2lengthzd2envz00zzsaw_bbvz00,
		BgL_bgl_za762regsetza7d2leng2568z00, BGl_z62regsetzd2lengthzb0zzsaw_bbvz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_rtl_regzf2razd2interfere2zd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72569za7,
		BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_rtl_regzf2razd2keyzd2envzf2zzsaw_bbvz00,
		BgL_bgl_za762rtl_regza7f2raza72570za7,
		BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_bbvz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_bbvz00(long
		BgL_checksumz00_3980, char *BgL_fromz00_3981)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_bbvz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_bbvz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_bbvz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_bbvz00();
					BGl_cnstzd2initzd2zzsaw_bbvz00();
					BGl_importedzd2moduleszd2initz00zzsaw_bbvz00();
					return BGl_toplevelzd2initzd2zzsaw_bbvz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "saw_bbv");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_bbv");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_bbv");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			{	/* SawMill/bbv.scm 15 */
				obj_t BgL_cportz00_3922;

				{	/* SawMill/bbv.scm 15 */
					obj_t BgL_stringz00_3930;

					BgL_stringz00_3930 = BGl_string2513z00zzsaw_bbvz00;
					{	/* SawMill/bbv.scm 15 */
						obj_t BgL_startz00_3931;

						BgL_startz00_3931 = BINT(((long) 0));
						{	/* SawMill/bbv.scm 15 */
							obj_t BgL_endz00_3932;

							BgL_endz00_3932 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3930)));
							{	/* SawMill/bbv.scm 15 */

								BgL_cportz00_3922 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3930, BgL_startz00_3931, BgL_endz00_3932);
				}}}}
				{
					long BgL_iz00_3923;

					BgL_iz00_3923 = ((long) 1);
				BgL_loopz00_3924:
					if ((BgL_iz00_3923 == ((long) -1)))
						{	/* SawMill/bbv.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/bbv.scm 15 */
							{	/* SawMill/bbv.scm 15 */
								obj_t BgL_arg2515z00_3926;

								{	/* SawMill/bbv.scm 15 */

									{	/* SawMill/bbv.scm 15 */
										obj_t BgL_locationz00_3928;

										BgL_locationz00_3928 = BBOOL(((bool_t) 0));
										{	/* SawMill/bbv.scm 15 */

											BgL_arg2515z00_3926 =
												BGl_readz00zz__readerz00(BgL_cportz00_3922,
												BgL_locationz00_3928);
										}
									}
								}
								{	/* SawMill/bbv.scm 15 */
									int BgL_tmpz00_4012;

									BgL_tmpz00_4012 = (int) (BgL_iz00_3923);
									CNST_TABLE_SET(BgL_tmpz00_4012, BgL_arg2515z00_3926);
							}}
							{	/* SawMill/bbv.scm 15 */
								int BgL_auxz00_3929;

								BgL_auxz00_3929 = (int) ((BgL_iz00_3923 - ((long) 1)));
								{
									long BgL_iz00_4017;

									BgL_iz00_4017 = (long) (BgL_auxz00_3929);
									BgL_iz00_3923 = BgL_iz00_4017;
									goto BgL_loopz00_3924;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			return (BGl_za2cleanupza2z00zzsaw_bbvz00 = ((bool_t) 1), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_bbvz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_2036;

				BgL_headz00_2036 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_2037;
					obj_t BgL_tailz00_2038;

					BgL_prevz00_2037 = BgL_headz00_2036;
					BgL_tailz00_2038 = BgL_l1z00_1;
				BgL_loopz00_2039:
					if (PAIRP(BgL_tailz00_2038))
						{
							obj_t BgL_newzd2prevzd2_2041;

							BgL_newzd2prevzd2_2041 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_2038), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_2037, BgL_newzd2prevzd2_2041);
							{
								obj_t BgL_tailz00_4027;
								obj_t BgL_prevz00_4026;

								BgL_prevz00_4026 = BgL_newzd2prevzd2_2041;
								BgL_tailz00_4027 = CDR(BgL_tailz00_2038);
								BgL_tailz00_2038 = BgL_tailz00_4027;
								BgL_prevz00_2037 = BgL_prevz00_4026;
								goto BgL_loopz00_2039;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_2036);
				}
			}
		}

	}



/* make-rtl_reg/ra */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt
		BGl_makezd2rtl_regzf2raz20zzsaw_bbvz00(BgL_typez00_bglt BgL_type1179z00_3,
		obj_t BgL_var1180z00_4, obj_t BgL_onexprzf31181zf3_5,
		obj_t BgL_name1182z00_6, obj_t BgL_key1183z00_7,
		obj_t BgL_hardware1184z00_8, int BgL_num1185z00_9,
		obj_t BgL_color1186z00_10, obj_t BgL_coalesce1187z00_11,
		int BgL_occurrences1188z00_12, obj_t BgL_interfere1189z00_13,
		obj_t BgL_interfere21190z00_14)
	{
		{	/* SawMill/regset.sch 55 */
			{	/* SawMill/regset.sch 55 */
				BgL_rtl_regz00_bglt BgL_new1160z00_3935;

				{	/* SawMill/regset.sch 55 */
					BgL_rtl_regz00_bglt BgL_tmp1158z00_3936;
					BgL_rtl_regzf2razf2_bglt BgL_wide1159z00_3937;

					{
						BgL_rtl_regz00_bglt BgL_auxz00_4030;

						{	/* SawMill/regset.sch 55 */
							BgL_rtl_regz00_bglt BgL_new1157z00_3938;

							BgL_new1157z00_3938 =
								((BgL_rtl_regz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_regz00_bgl))));
							{	/* SawMill/regset.sch 55 */
								long BgL_arg1631z00_3939;

								{	/* SawMill/regset.sch 55 */
									long BgL_res2386z00_3940;

									BgL_res2386z00_3940 =
										BGL_CLASS_INDEX(BGl_rtl_regz00zzsaw_defsz00);
									BgL_arg1631z00_3939 = BgL_res2386z00_3940;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1157z00_3938),
									BgL_arg1631z00_3939);
							}
							{	/* SawMill/regset.sch 55 */
								BgL_objectz00_bglt BgL_tmpz00_4035;

								BgL_tmpz00_4035 = ((BgL_objectz00_bglt) BgL_new1157z00_3938);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4035, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1157z00_3938);
							BgL_auxz00_4030 = BgL_new1157z00_3938;
						}
						BgL_tmp1158z00_3936 = ((BgL_rtl_regz00_bglt) BgL_auxz00_4030);
					}
					BgL_wide1159z00_3937 =
						((BgL_rtl_regzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_regzf2razf2_bgl))));
					{	/* SawMill/regset.sch 55 */
						obj_t BgL_auxz00_4043;
						BgL_objectz00_bglt BgL_tmpz00_4041;

						BgL_auxz00_4043 = ((obj_t) BgL_wide1159z00_3937);
						BgL_tmpz00_4041 = ((BgL_objectz00_bglt) BgL_tmp1158z00_3936);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4041, BgL_auxz00_4043);
					}
					((BgL_objectz00_bglt) BgL_tmp1158z00_3936);
					{	/* SawMill/regset.sch 55 */
						long BgL_arg1627z00_3941;

						{	/* SawMill/regset.sch 55 */
							long BgL_res2387z00_3942;

							BgL_res2387z00_3942 =
								BGL_CLASS_INDEX(BGl_rtl_regzf2razf2zzsaw_regsetz00);
							BgL_arg1627z00_3941 = BgL_res2387z00_3942;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1158z00_3936), BgL_arg1627z00_3941);
					}
					BgL_new1160z00_3935 = ((BgL_rtl_regz00_bglt) BgL_tmp1158z00_3936);
				}
				((((BgL_rtl_regz00_bglt) COBJECT(
								((BgL_rtl_regz00_bglt) BgL_new1160z00_3935)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1179z00_3), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3935)))->BgL_varz00) =
					((obj_t) BgL_var1180z00_4), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3935)))->BgL_onexprzf3zf3) =
					((obj_t) BgL_onexprzf31181zf3_5), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3935)))->BgL_namez00) =
					((obj_t) BgL_name1182z00_6), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3935)))->BgL_keyz00) =
					((obj_t) BgL_key1183z00_7), BUNSPEC);
				((((BgL_rtl_regz00_bglt) COBJECT(((BgL_rtl_regz00_bglt)
									BgL_new1160z00_3935)))->BgL_hardwarez00) =
					((obj_t) BgL_hardware1184z00_8), BUNSPEC);
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4063;

					{
						obj_t BgL_auxz00_4064;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4065;

							BgL_tmpz00_4065 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4064 = BGL_OBJECT_WIDENING(BgL_tmpz00_4065);
						}
						BgL_auxz00_4063 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4064);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4063))->BgL_numz00) =
						((int) BgL_num1185z00_9), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4070;

					{
						obj_t BgL_auxz00_4071;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4072;

							BgL_tmpz00_4072 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4071 = BGL_OBJECT_WIDENING(BgL_tmpz00_4072);
						}
						BgL_auxz00_4070 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4071);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4070))->
							BgL_colorz00) = ((obj_t) BgL_color1186z00_10), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4077;

					{
						obj_t BgL_auxz00_4078;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4079;

							BgL_tmpz00_4079 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4078 = BGL_OBJECT_WIDENING(BgL_tmpz00_4079);
						}
						BgL_auxz00_4077 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4078);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4077))->
							BgL_coalescez00) = ((obj_t) BgL_coalesce1187z00_11), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4084;

					{
						obj_t BgL_auxz00_4085;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4086;

							BgL_tmpz00_4086 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4085 = BGL_OBJECT_WIDENING(BgL_tmpz00_4086);
						}
						BgL_auxz00_4084 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4085);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4084))->
							BgL_occurrencesz00) = ((int) BgL_occurrences1188z00_12), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4091;

					{
						obj_t BgL_auxz00_4092;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4093;

							BgL_tmpz00_4093 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4092 = BGL_OBJECT_WIDENING(BgL_tmpz00_4093);
						}
						BgL_auxz00_4091 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4092);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4091))->
							BgL_interferez00) = ((obj_t) BgL_interfere1189z00_13), BUNSPEC);
				}
				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_4098;

					{
						obj_t BgL_auxz00_4099;

						{	/* SawMill/regset.sch 55 */
							BgL_objectz00_bglt BgL_tmpz00_4100;

							BgL_tmpz00_4100 = ((BgL_objectz00_bglt) BgL_new1160z00_3935);
							BgL_auxz00_4099 = BGL_OBJECT_WIDENING(BgL_tmpz00_4100);
						}
						BgL_auxz00_4098 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4099);
					}
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4098))->
							BgL_interfere2z00) = ((obj_t) BgL_interfere21190z00_14), BUNSPEC);
				}
				return BgL_new1160z00_3935;
			}
		}

	}



/* &make-rtl_reg/ra */
	BgL_rtl_regz00_bglt BGl_z62makezd2rtl_regzf2raz42zzsaw_bbvz00(obj_t
		BgL_envz00_3798, obj_t BgL_type1179z00_3799, obj_t BgL_var1180z00_3800,
		obj_t BgL_onexprzf31181zf3_3801, obj_t BgL_name1182z00_3802,
		obj_t BgL_key1183z00_3803, obj_t BgL_hardware1184z00_3804,
		obj_t BgL_num1185z00_3805, obj_t BgL_color1186z00_3806,
		obj_t BgL_coalesce1187z00_3807, obj_t BgL_occurrences1188z00_3808,
		obj_t BgL_interfere1189z00_3809, obj_t BgL_interfere21190z00_3810)
	{
		{	/* SawMill/regset.sch 55 */
			return
				BGl_makezd2rtl_regzf2raz20zzsaw_bbvz00(
				((BgL_typez00_bglt) BgL_type1179z00_3799), BgL_var1180z00_3800,
				BgL_onexprzf31181zf3_3801, BgL_name1182z00_3802, BgL_key1183z00_3803,
				BgL_hardware1184z00_3804, CINT(BgL_num1185z00_3805),
				BgL_color1186z00_3806, BgL_coalesce1187z00_3807,
				CINT(BgL_occurrences1188z00_3808), BgL_interfere1189z00_3809,
				BgL_interfere21190z00_3810);
		}

	}



/* rtl_reg/ra? */
	BGL_EXPORTED_DEF bool_t BGl_rtl_regzf2razf3z01zzsaw_bbvz00(obj_t
		BgL_objz00_15)
	{
		{	/* SawMill/regset.sch 56 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_15,
				BGl_rtl_regzf2razf2zzsaw_regsetz00);
		}

	}



/* &rtl_reg/ra? */
	obj_t BGl_z62rtl_regzf2razf3z63zzsaw_bbvz00(obj_t BgL_envz00_3811,
		obj_t BgL_objz00_3812)
	{
		{	/* SawMill/regset.sch 56 */
			return BBOOL(BGl_rtl_regzf2razf3z01zzsaw_bbvz00(BgL_objz00_3812));
		}

	}



/* rtl_reg/ra-nil */
	BGL_EXPORTED_DEF BgL_rtl_regz00_bglt BGl_rtl_regzf2razd2nilz20zzsaw_bbvz00()
	{
		{	/* SawMill/regset.sch 57 */
			{	/* SawMill/regset.sch 57 */
				obj_t BgL_classz00_3304;

				BgL_classz00_3304 = BGl_rtl_regzf2razf2zzsaw_regsetz00;
				{	/* SawMill/regset.sch 57 */
					obj_t BgL__ortest_1106z00_3305;

					BgL__ortest_1106z00_3305 = BGL_CLASS_NIL(BgL_classz00_3304);
					if (CBOOL(BgL__ortest_1106z00_3305))
						{	/* SawMill/regset.sch 57 */
							return ((BgL_rtl_regz00_bglt) BgL__ortest_1106z00_3305);
						}
					else
						{	/* SawMill/regset.sch 57 */
							return
								((BgL_rtl_regz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3304));
						}
				}
			}
		}

	}



/* &rtl_reg/ra-nil */
	BgL_rtl_regz00_bglt BGl_z62rtl_regzf2razd2nilz42zzsaw_bbvz00(obj_t
		BgL_envz00_3813)
	{
		{	/* SawMill/regset.sch 57 */
			return BGl_rtl_regzf2razd2nilz20zzsaw_bbvz00();
		}

	}



/* rtl_reg/ra-interfere2 */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_16)
	{
		{	/* SawMill/regset.sch 58 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4119;

				{
					obj_t BgL_auxz00_4120;

					{	/* SawMill/regset.sch 58 */
						BgL_objectz00_bglt BgL_tmpz00_4121;

						BgL_tmpz00_4121 = ((BgL_objectz00_bglt) BgL_oz00_16);
						BgL_auxz00_4120 = BGL_OBJECT_WIDENING(BgL_tmpz00_4121);
					}
					BgL_auxz00_4119 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4120);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4119))->
					BgL_interfere2z00);
			}
		}

	}



/* &rtl_reg/ra-interfere2 */
	obj_t BGl_z62rtl_regzf2razd2interfere2z42zzsaw_bbvz00(obj_t BgL_envz00_3814,
		obj_t BgL_oz00_3815)
	{
		{	/* SawMill/regset.sch 58 */
			return
				BGl_rtl_regzf2razd2interfere2z20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3815));
		}

	}



/* rtl_reg/ra-interfere2-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* SawMill/regset.sch 59 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4128;

				{
					obj_t BgL_auxz00_4129;

					{	/* SawMill/regset.sch 59 */
						BgL_objectz00_bglt BgL_tmpz00_4130;

						BgL_tmpz00_4130 = ((BgL_objectz00_bglt) BgL_oz00_17);
						BgL_auxz00_4129 = BGL_OBJECT_WIDENING(BgL_tmpz00_4130);
					}
					BgL_auxz00_4128 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4129);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4128))->
						BgL_interfere2z00) = ((obj_t) BgL_vz00_18), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere2-set! */
	obj_t BGl_z62rtl_regzf2razd2interfere2zd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3816, obj_t BgL_oz00_3817, obj_t BgL_vz00_3818)
	{
		{	/* SawMill/regset.sch 59 */
			return
				BGl_rtl_regzf2razd2interfere2zd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3817), BgL_vz00_3818);
		}

	}



/* rtl_reg/ra-interfere */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferez20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_19)
	{
		{	/* SawMill/regset.sch 60 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4137;

				{
					obj_t BgL_auxz00_4138;

					{	/* SawMill/regset.sch 60 */
						BgL_objectz00_bglt BgL_tmpz00_4139;

						BgL_tmpz00_4139 = ((BgL_objectz00_bglt) BgL_oz00_19);
						BgL_auxz00_4138 = BGL_OBJECT_WIDENING(BgL_tmpz00_4139);
					}
					BgL_auxz00_4137 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4138);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4137))->
					BgL_interferez00);
			}
		}

	}



/* &rtl_reg/ra-interfere */
	obj_t BGl_z62rtl_regzf2razd2interferez42zzsaw_bbvz00(obj_t BgL_envz00_3819,
		obj_t BgL_oz00_3820)
	{
		{	/* SawMill/regset.sch 60 */
			return
				BGl_rtl_regzf2razd2interferez20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3820));
		}

	}



/* rtl_reg/ra-interfere-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_20, obj_t BgL_vz00_21)
	{
		{	/* SawMill/regset.sch 61 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4146;

				{
					obj_t BgL_auxz00_4147;

					{	/* SawMill/regset.sch 61 */
						BgL_objectz00_bglt BgL_tmpz00_4148;

						BgL_tmpz00_4148 = ((BgL_objectz00_bglt) BgL_oz00_20);
						BgL_auxz00_4147 = BGL_OBJECT_WIDENING(BgL_tmpz00_4148);
					}
					BgL_auxz00_4146 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4147);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4146))->
						BgL_interferez00) = ((obj_t) BgL_vz00_21), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-interfere-set! */
	obj_t BGl_z62rtl_regzf2razd2interferezd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3821, obj_t BgL_oz00_3822, obj_t BgL_vz00_3823)
	{
		{	/* SawMill/regset.sch 61 */
			return
				BGl_rtl_regzf2razd2interferezd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3822), BgL_vz00_3823);
		}

	}



/* rtl_reg/ra-occurrences */
	BGL_EXPORTED_DEF int
		BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_22)
	{
		{	/* SawMill/regset.sch 62 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4155;

				{
					obj_t BgL_auxz00_4156;

					{	/* SawMill/regset.sch 62 */
						BgL_objectz00_bglt BgL_tmpz00_4157;

						BgL_tmpz00_4157 = ((BgL_objectz00_bglt) BgL_oz00_22);
						BgL_auxz00_4156 = BGL_OBJECT_WIDENING(BgL_tmpz00_4157);
					}
					BgL_auxz00_4155 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4156);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4155))->
					BgL_occurrencesz00);
			}
		}

	}



/* &rtl_reg/ra-occurrences */
	obj_t BGl_z62rtl_regzf2razd2occurrencesz42zzsaw_bbvz00(obj_t BgL_envz00_3824,
		obj_t BgL_oz00_3825)
	{
		{	/* SawMill/regset.sch 62 */
			return
				BINT(BGl_rtl_regzf2razd2occurrencesz20zzsaw_bbvz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_3825)));
		}

	}



/* rtl_reg/ra-occurrences-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_23, int BgL_vz00_24)
	{
		{	/* SawMill/regset.sch 63 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4165;

				{
					obj_t BgL_auxz00_4166;

					{	/* SawMill/regset.sch 63 */
						BgL_objectz00_bglt BgL_tmpz00_4167;

						BgL_tmpz00_4167 = ((BgL_objectz00_bglt) BgL_oz00_23);
						BgL_auxz00_4166 = BGL_OBJECT_WIDENING(BgL_tmpz00_4167);
					}
					BgL_auxz00_4165 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4166);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4165))->
						BgL_occurrencesz00) = ((int) BgL_vz00_24), BUNSPEC);
		}}

	}



/* &rtl_reg/ra-occurrences-set! */
	obj_t BGl_z62rtl_regzf2razd2occurrenceszd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3826, obj_t BgL_oz00_3827, obj_t BgL_vz00_3828)
	{
		{	/* SawMill/regset.sch 63 */
			return
				BGl_rtl_regzf2razd2occurrenceszd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3827), CINT(BgL_vz00_3828));
		}

	}



/* rtl_reg/ra-coalesce */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescez20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_25)
	{
		{	/* SawMill/regset.sch 64 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4175;

				{
					obj_t BgL_auxz00_4176;

					{	/* SawMill/regset.sch 64 */
						BgL_objectz00_bglt BgL_tmpz00_4177;

						BgL_tmpz00_4177 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_4176 = BGL_OBJECT_WIDENING(BgL_tmpz00_4177);
					}
					BgL_auxz00_4175 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4176);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4175))->
					BgL_coalescez00);
			}
		}

	}



/* &rtl_reg/ra-coalesce */
	obj_t BGl_z62rtl_regzf2razd2coalescez42zzsaw_bbvz00(obj_t BgL_envz00_3829,
		obj_t BgL_oz00_3830)
	{
		{	/* SawMill/regset.sch 64 */
			return
				BGl_rtl_regzf2razd2coalescez20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3830));
		}

	}



/* rtl_reg/ra-coalesce-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawMill/regset.sch 65 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4184;

				{
					obj_t BgL_auxz00_4185;

					{	/* SawMill/regset.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_4186;

						BgL_tmpz00_4186 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_4185 = BGL_OBJECT_WIDENING(BgL_tmpz00_4186);
					}
					BgL_auxz00_4184 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4185);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4184))->
						BgL_coalescez00) = ((obj_t) BgL_vz00_27), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-coalesce-set! */
	obj_t BGl_z62rtl_regzf2razd2coalescezd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3831, obj_t BgL_oz00_3832, obj_t BgL_vz00_3833)
	{
		{	/* SawMill/regset.sch 65 */
			return
				BGl_rtl_regzf2razd2coalescezd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3832), BgL_vz00_3833);
		}

	}



/* rtl_reg/ra-color */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorz20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_28)
	{
		{	/* SawMill/regset.sch 66 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4193;

				{
					obj_t BgL_auxz00_4194;

					{	/* SawMill/regset.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_4195;

						BgL_tmpz00_4195 = ((BgL_objectz00_bglt) BgL_oz00_28);
						BgL_auxz00_4194 = BGL_OBJECT_WIDENING(BgL_tmpz00_4195);
					}
					BgL_auxz00_4193 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4194);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4193))->BgL_colorz00);
			}
		}

	}



/* &rtl_reg/ra-color */
	obj_t BGl_z62rtl_regzf2razd2colorz42zzsaw_bbvz00(obj_t BgL_envz00_3834,
		obj_t BgL_oz00_3835)
	{
		{	/* SawMill/regset.sch 66 */
			return
				BGl_rtl_regzf2razd2colorz20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3835));
		}

	}



/* rtl_reg/ra-color-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawMill/regset.sch 67 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4202;

				{
					obj_t BgL_auxz00_4203;

					{	/* SawMill/regset.sch 67 */
						BgL_objectz00_bglt BgL_tmpz00_4204;

						BgL_tmpz00_4204 = ((BgL_objectz00_bglt) BgL_oz00_29);
						BgL_auxz00_4203 = BGL_OBJECT_WIDENING(BgL_tmpz00_4204);
					}
					BgL_auxz00_4202 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4203);
				}
				return
					((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4202))->
						BgL_colorz00) = ((obj_t) BgL_vz00_30), BUNSPEC);
			}
		}

	}



/* &rtl_reg/ra-color-set! */
	obj_t BGl_z62rtl_regzf2razd2colorzd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3836, obj_t BgL_oz00_3837, obj_t BgL_vz00_3838)
	{
		{	/* SawMill/regset.sch 67 */
			return
				BGl_rtl_regzf2razd2colorzd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3837), BgL_vz00_3838);
		}

	}



/* rtl_reg/ra-num */
	BGL_EXPORTED_DEF int BGl_rtl_regzf2razd2numz20zzsaw_bbvz00(BgL_rtl_regz00_bglt
		BgL_oz00_31)
	{
		{	/* SawMill/regset.sch 68 */
			{
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_4211;

				{
					obj_t BgL_auxz00_4212;

					{	/* SawMill/regset.sch 68 */
						BgL_objectz00_bglt BgL_tmpz00_4213;

						BgL_tmpz00_4213 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_4212 = BGL_OBJECT_WIDENING(BgL_tmpz00_4213);
					}
					BgL_auxz00_4211 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_4212);
				}
				return
					(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_4211))->BgL_numz00);
			}
		}

	}



/* &rtl_reg/ra-num */
	obj_t BGl_z62rtl_regzf2razd2numz42zzsaw_bbvz00(obj_t BgL_envz00_3839,
		obj_t BgL_oz00_3840)
	{
		{	/* SawMill/regset.sch 68 */
			return
				BINT(BGl_rtl_regzf2razd2numz20zzsaw_bbvz00(
					((BgL_rtl_regz00_bglt) BgL_oz00_3840)));
		}

	}



/* rtl_reg/ra-hardware */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_34)
	{
		{	/* SawMill/regset.sch 70 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_34)))->BgL_hardwarez00);
		}

	}



/* &rtl_reg/ra-hardware */
	obj_t BGl_z62rtl_regzf2razd2hardwarez42zzsaw_bbvz00(obj_t BgL_envz00_3841,
		obj_t BgL_oz00_3842)
	{
		{	/* SawMill/regset.sch 70 */
			return
				BGl_rtl_regzf2razd2hardwarez20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3842));
		}

	}



/* rtl_reg/ra-key */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2keyz20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_37)
	{
		{	/* SawMill/regset.sch 72 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_37)))->BgL_keyz00);
		}

	}



/* &rtl_reg/ra-key */
	obj_t BGl_z62rtl_regzf2razd2keyz42zzsaw_bbvz00(obj_t BgL_envz00_3843,
		obj_t BgL_oz00_3844)
	{
		{	/* SawMill/regset.sch 72 */
			return
				BGl_rtl_regzf2razd2keyz20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3844));
		}

	}



/* rtl_reg/ra-name */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2namez20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_40)
	{
		{	/* SawMill/regset.sch 74 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_40)))->BgL_namez00);
		}

	}



/* &rtl_reg/ra-name */
	obj_t BGl_z62rtl_regzf2razd2namez42zzsaw_bbvz00(obj_t BgL_envz00_3845,
		obj_t BgL_oz00_3846)
	{
		{	/* SawMill/regset.sch 74 */
			return
				BGl_rtl_regzf2razd2namez20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3846));
		}

	}



/* rtl_reg/ra-onexpr? */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_43)
	{
		{	/* SawMill/regset.sch 76 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_43)))->BgL_onexprzf3zf3);
		}

	}



/* &rtl_reg/ra-onexpr? */
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zb1zzsaw_bbvz00(obj_t BgL_envz00_3847,
		obj_t BgL_oz00_3848)
	{
		{	/* SawMill/regset.sch 76 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd3zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3848));
		}

	}



/* rtl_reg/ra-onexpr?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvz00(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2onexprzf3zd2setz12z71zzsaw_bbvz00(obj_t
		BgL_envz00_3849, obj_t BgL_oz00_3850, obj_t BgL_vz00_3851)
	{
		{	/* SawMill/regset.sch 77 */
			return
				BGl_rtl_regzf2razd2onexprzf3zd2setz12z13zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3850), BgL_vz00_3851);
		}

	}



/* rtl_reg/ra-var */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varz20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_46)
	{
		{	/* SawMill/regset.sch 78 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_46)))->BgL_varz00);
		}

	}



/* &rtl_reg/ra-var */
	obj_t BGl_z62rtl_regzf2razd2varz42zzsaw_bbvz00(obj_t BgL_envz00_3852,
		obj_t BgL_oz00_3853)
	{
		{	/* SawMill/regset.sch 78 */
			return
				BGl_rtl_regzf2razd2varz20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3853));
		}

	}



/* rtl_reg/ra-var-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2varzd2setz12z82zzsaw_bbvz00(obj_t BgL_envz00_3854,
		obj_t BgL_oz00_3855, obj_t BgL_vz00_3856)
	{
		{	/* SawMill/regset.sch 79 */
			return
				BGl_rtl_regzf2razd2varzd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3855), BgL_vz00_3856);
		}

	}



/* rtl_reg/ra-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_rtl_regzf2razd2typez20zzsaw_bbvz00(BgL_rtl_regz00_bglt BgL_oz00_49)
	{
		{	/* SawMill/regset.sch 80 */
			return
				(((BgL_rtl_regz00_bglt) COBJECT(
						((BgL_rtl_regz00_bglt) BgL_oz00_49)))->BgL_typez00);
		}

	}



/* &rtl_reg/ra-type */
	BgL_typez00_bglt BGl_z62rtl_regzf2razd2typez42zzsaw_bbvz00(obj_t
		BgL_envz00_3857, obj_t BgL_oz00_3858)
	{
		{	/* SawMill/regset.sch 80 */
			return
				BGl_rtl_regzf2razd2typez20zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3858));
		}

	}



/* rtl_reg/ra-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvz00(BgL_rtl_regz00_bglt
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
	obj_t BGl_z62rtl_regzf2razd2typezd2setz12z82zzsaw_bbvz00(obj_t
		BgL_envz00_3859, obj_t BgL_oz00_3860, obj_t BgL_vz00_3861)
	{
		{	/* SawMill/regset.sch 81 */
			return
				BGl_rtl_regzf2razd2typezd2setz12ze0zzsaw_bbvz00(
				((BgL_rtl_regz00_bglt) BgL_oz00_3860),
				((BgL_typez00_bglt) BgL_vz00_3861));
		}

	}



/* make-regset */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_makezd2regsetzd2zzsaw_bbvz00(int
		BgL_length1172z00_52, int BgL_msiza7e1173za7_53, obj_t BgL_regv1174z00_54,
		obj_t BgL_regl1175z00_55, obj_t BgL_string1176z00_56)
	{
		{	/* SawMill/regset.sch 84 */
			{	/* SawMill/regset.sch 84 */
				BgL_regsetz00_bglt BgL_new1162z00_3943;

				{	/* SawMill/regset.sch 84 */
					BgL_regsetz00_bglt BgL_new1161z00_3944;

					BgL_new1161z00_3944 =
						((BgL_regsetz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_regsetz00_bgl))));
					{	/* SawMill/regset.sch 84 */
						long BgL_arg1634z00_3945;

						{	/* SawMill/regset.sch 84 */
							long BgL_res2388z00_3946;

							BgL_res2388z00_3946 =
								BGL_CLASS_INDEX(BGl_regsetz00zzsaw_regsetz00);
							BgL_arg1634z00_3945 = BgL_res2388z00_3946;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1161z00_3944), BgL_arg1634z00_3945);
					}
					BgL_new1162z00_3943 = BgL_new1161z00_3944;
				}
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3943))->BgL_lengthz00) =
					((int) BgL_length1172z00_52), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3943))->BgL_msiza7eza7) =
					((int) BgL_msiza7e1173za7_53), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3943))->BgL_regvz00) =
					((obj_t) BgL_regv1174z00_54), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3943))->BgL_reglz00) =
					((obj_t) BgL_regl1175z00_55), BUNSPEC);
				((((BgL_regsetz00_bglt) COBJECT(BgL_new1162z00_3943))->BgL_stringz00) =
					((obj_t) BgL_string1176z00_56), BUNSPEC);
				return BgL_new1162z00_3943;
			}
		}

	}



/* &make-regset */
	BgL_regsetz00_bglt BGl_z62makezd2regsetzb0zzsaw_bbvz00(obj_t BgL_envz00_3862,
		obj_t BgL_length1172z00_3863, obj_t BgL_msiza7e1173za7_3864,
		obj_t BgL_regv1174z00_3865, obj_t BgL_regl1175z00_3866,
		obj_t BgL_string1176z00_3867)
	{
		{	/* SawMill/regset.sch 84 */
			return
				BGl_makezd2regsetzd2zzsaw_bbvz00(CINT(BgL_length1172z00_3863),
				CINT(BgL_msiza7e1173za7_3864), BgL_regv1174z00_3865,
				BgL_regl1175z00_3866, BgL_string1176z00_3867);
		}

	}



/* regset? */
	BGL_EXPORTED_DEF bool_t BGl_regsetzf3zf3zzsaw_bbvz00(obj_t BgL_objz00_57)
	{
		{	/* SawMill/regset.sch 85 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_57, BGl_regsetz00zzsaw_regsetz00);
		}

	}



/* &regset? */
	obj_t BGl_z62regsetzf3z91zzsaw_bbvz00(obj_t BgL_envz00_3868,
		obj_t BgL_objz00_3869)
	{
		{	/* SawMill/regset.sch 85 */
			return BBOOL(BGl_regsetzf3zf3zzsaw_bbvz00(BgL_objz00_3869));
		}

	}



/* regset-nil */
	BGL_EXPORTED_DEF BgL_regsetz00_bglt BGl_regsetzd2nilzd2zzsaw_bbvz00()
	{
		{	/* SawMill/regset.sch 86 */
			{	/* SawMill/regset.sch 86 */
				obj_t BgL_classz00_3324;

				BgL_classz00_3324 = BGl_regsetz00zzsaw_regsetz00;
				{	/* SawMill/regset.sch 86 */
					obj_t BgL__ortest_1106z00_3325;

					BgL__ortest_1106z00_3325 = BGL_CLASS_NIL(BgL_classz00_3324);
					if (CBOOL(BgL__ortest_1106z00_3325))
						{	/* SawMill/regset.sch 86 */
							return ((BgL_regsetz00_bglt) BgL__ortest_1106z00_3325);
						}
					else
						{	/* SawMill/regset.sch 86 */
							return
								((BgL_regsetz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3324));
						}
				}
			}
		}

	}



/* &regset-nil */
	BgL_regsetz00_bglt BGl_z62regsetzd2nilzb0zzsaw_bbvz00(obj_t BgL_envz00_3870)
	{
		{	/* SawMill/regset.sch 86 */
			return BGl_regsetzd2nilzd2zzsaw_bbvz00();
		}

	}



/* regset-string */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2stringzd2zzsaw_bbvz00(BgL_regsetz00_bglt
		BgL_oz00_58)
	{
		{	/* SawMill/regset.sch 87 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_58))->BgL_stringz00);
		}

	}



/* &regset-string */
	obj_t BGl_z62regsetzd2stringzb0zzsaw_bbvz00(obj_t BgL_envz00_3871,
		obj_t BgL_oz00_3872)
	{
		{	/* SawMill/regset.sch 87 */
			return
				BGl_regsetzd2stringzd2zzsaw_bbvz00(
				((BgL_regsetz00_bglt) BgL_oz00_3872));
		}

	}



/* regset-string-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2stringzd2setz12z12zzsaw_bbvz00(BgL_regsetz00_bglt BgL_oz00_59,
		obj_t BgL_vz00_60)
	{
		{	/* SawMill/regset.sch 88 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_59))->BgL_stringz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &regset-string-set! */
	obj_t BGl_z62regsetzd2stringzd2setz12z70zzsaw_bbvz00(obj_t BgL_envz00_3873,
		obj_t BgL_oz00_3874, obj_t BgL_vz00_3875)
	{
		{	/* SawMill/regset.sch 88 */
			return
				BGl_regsetzd2stringzd2setz12z12zzsaw_bbvz00(
				((BgL_regsetz00_bglt) BgL_oz00_3874), BgL_vz00_3875);
		}

	}



/* regset-regl */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2reglzd2zzsaw_bbvz00(BgL_regsetz00_bglt
		BgL_oz00_61)
	{
		{	/* SawMill/regset.sch 89 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_61))->BgL_reglz00);
		}

	}



/* &regset-regl */
	obj_t BGl_z62regsetzd2reglzb0zzsaw_bbvz00(obj_t BgL_envz00_3876,
		obj_t BgL_oz00_3877)
	{
		{	/* SawMill/regset.sch 89 */
			return
				BGl_regsetzd2reglzd2zzsaw_bbvz00(((BgL_regsetz00_bglt) BgL_oz00_3877));
		}

	}



/* regset-regv */
	BGL_EXPORTED_DEF obj_t BGl_regsetzd2regvzd2zzsaw_bbvz00(BgL_regsetz00_bglt
		BgL_oz00_64)
	{
		{	/* SawMill/regset.sch 91 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_64))->BgL_regvz00);
		}

	}



/* &regset-regv */
	obj_t BGl_z62regsetzd2regvzb0zzsaw_bbvz00(obj_t BgL_envz00_3878,
		obj_t BgL_oz00_3879)
	{
		{	/* SawMill/regset.sch 91 */
			return
				BGl_regsetzd2regvzd2zzsaw_bbvz00(((BgL_regsetz00_bglt) BgL_oz00_3879));
		}

	}



/* regset-msize */
	BGL_EXPORTED_DEF int BGl_regsetzd2msiza7ez75zzsaw_bbvz00(BgL_regsetz00_bglt
		BgL_oz00_67)
	{
		{	/* SawMill/regset.sch 93 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_67))->BgL_msiza7eza7);
		}

	}



/* &regset-msize */
	obj_t BGl_z62regsetzd2msiza7ez17zzsaw_bbvz00(obj_t BgL_envz00_3880,
		obj_t BgL_oz00_3881)
	{
		{	/* SawMill/regset.sch 93 */
			return
				BINT(BGl_regsetzd2msiza7ez75zzsaw_bbvz00(
					((BgL_regsetz00_bglt) BgL_oz00_3881)));
		}

	}



/* regset-length */
	BGL_EXPORTED_DEF int BGl_regsetzd2lengthzd2zzsaw_bbvz00(BgL_regsetz00_bglt
		BgL_oz00_70)
	{
		{	/* SawMill/regset.sch 95 */
			return (((BgL_regsetz00_bglt) COBJECT(BgL_oz00_70))->BgL_lengthz00);
		}

	}



/* &regset-length */
	obj_t BGl_z62regsetzd2lengthzb0zzsaw_bbvz00(obj_t BgL_envz00_3882,
		obj_t BgL_oz00_3883)
	{
		{	/* SawMill/regset.sch 95 */
			return
				BINT(BGl_regsetzd2lengthzd2zzsaw_bbvz00(
					((BgL_regsetz00_bglt) BgL_oz00_3883)));
		}

	}



/* regset-length-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvz00(BgL_regsetz00_bglt BgL_oz00_71,
		int BgL_vz00_72)
	{
		{	/* SawMill/regset.sch 96 */
			return
				((((BgL_regsetz00_bglt) COBJECT(BgL_oz00_71))->BgL_lengthz00) =
				((int) BgL_vz00_72), BUNSPEC);
		}

	}



/* &regset-length-set! */
	obj_t BGl_z62regsetzd2lengthzd2setz12z70zzsaw_bbvz00(obj_t BgL_envz00_3884,
		obj_t BgL_oz00_3885, obj_t BgL_vz00_3886)
	{
		{	/* SawMill/regset.sch 96 */
			return
				BGl_regsetzd2lengthzd2setz12z12zzsaw_bbvz00(
				((BgL_regsetz00_bglt) BgL_oz00_3885), CINT(BgL_vz00_3886));
		}

	}



/* bbv */
	BGL_EXPORTED_DEF obj_t BGl_bbvz00zzsaw_bbvz00(BgL_backendz00_bglt
		BgL_backz00_76, BgL_globalz00_bglt BgL_globalz00_77, obj_t BgL_paramsz00_78,
		obj_t BgL_blocksz00_79)
	{
		{	/* SawMill/bbv.scm 57 */
			if (CBOOL(BGl_za2sawzd2bbvzf3za2z21zzengine_paramz00))
				{	/* SawMill/bbv.scm 58 */
					BGl_startzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
					{	/* SawMill/bbv.scm 61 */
						obj_t BgL_arg1667z00_2065;

						BgL_arg1667z00_2065 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_globalz00_77)))->BgL_idz00);
						{	/* SawMill/bbv.scm 61 */
							obj_t BgL_list1668z00_2066;

							{	/* SawMill/bbv.scm 61 */
								obj_t BgL_arg1669z00_2067;

								BgL_arg1669z00_2067 =
									MAKE_YOUNG_PAIR(BgL_arg1667z00_2065, BNIL);
								BgL_list1668z00_2066 =
									MAKE_YOUNG_PAIR(BGl_string2494z00zzsaw_bbvz00,
									BgL_arg1669z00_2067);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list1668z00_2066);
					}}
					{	/* SawMill/bbv.scm 62 */
						bool_t BgL_test2577z00_4313;

						{	/* SawMill/bbv.scm 62 */
							int BgL_arg1684z00_2070;

							BgL_arg1684z00_2070 = bgl_debug();
							BgL_test2577z00_4313 =
								((long) (BgL_arg1684z00_2070) >= ((long) 1));
						}
						if (BgL_test2577z00_4313)
							{	/* SawMill/bbv.scm 62 */
								BGl_dumpzd2blockszd2zzsaw_bbvz00(BgL_globalz00_77,
									BgL_paramsz00_78, BgL_blocksz00_79,
									BGl_string2495z00zzsaw_bbvz00);
							}
						else
							{	/* SawMill/bbv.scm 62 */
								BFALSE;
							}
					}
					BGl_setzd2maxzd2labelz12z12zzsaw_bbvzd2utilszd2(BgL_blocksz00_79);
					{	/* SawMill/bbv.scm 65 */
						obj_t BgL_blocksz00_2071;

						{	/* SawMill/bbv.scm 65 */
							obj_t BgL_arg1798z00_2141;

							{	/* SawMill/bbv.scm 65 */
								obj_t BgL_arg1801z00_2142;

								BgL_arg1801z00_2142 = CAR(((obj_t) BgL_blocksz00_79));
								BgL_arg1798z00_2141 =
									BGl_removezd2tempsz12zc0zzsaw_bbvzd2utilszd2(
									((BgL_blockz00_bglt) BgL_arg1801z00_2142));
							}
							BgL_blocksz00_2071 =
								BGl_normaliza7ezd2gotoz12z67zzsaw_bbvzd2utilszd2(
								((BgL_blockz00_bglt) BgL_arg1798z00_2141));
						}
						{	/* SawMill/bbv.scm 66 */
							bool_t BgL_test2578z00_4325;

							{	/* SawMill/bbv.scm 66 */
								int BgL_arg1687z00_2074;

								BgL_arg1687z00_2074 = bgl_debug();
								BgL_test2578z00_4325 =
									((long) (BgL_arg1687z00_2074) >= ((long) 1));
							}
							if (BgL_test2578z00_4325)
								{	/* SawMill/bbv.scm 66 */
									BGl_dumpzd2blockszd2zzsaw_bbvz00(BgL_globalz00_77,
										BgL_paramsz00_78, BgL_blocksz00_2071,
										BGl_string2496z00zzsaw_bbvz00);
								}
							else
								{	/* SawMill/bbv.scm 66 */
									BFALSE;
								}
						}
						{	/* SawMill/bbv.scm 68 */
							obj_t BgL_regsz00_2075;

							BgL_regsz00_2075 =
								BGl_livenessz12z12zzsaw_bbvz00(BgL_backz00_76,
								BgL_blocksz00_2071, BgL_paramsz00_78);
							{	/* SawMill/bbv.scm 69 */
								obj_t BgL_arg1688z00_2076;
								obj_t BgL_arg1692z00_2077;

								{	/* SawMill/bbv.scm 69 */
									obj_t BgL_res2391z00_3333;

									{	/* SawMill/bbv.scm 69 */
										obj_t BgL_tmpz00_4331;

										BgL_tmpz00_4331 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res2391z00_3333 =
											BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4331);
									}
									BgL_arg1688z00_2076 = BgL_res2391z00_3333;
								}
								BgL_arg1692z00_2077 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_globalz00_77)))->BgL_idz00);
								{	/* SawMill/bbv.scm 69 */
									obj_t BgL_list1693z00_2078;

									{	/* SawMill/bbv.scm 69 */
										obj_t BgL_arg1695z00_2079;

										{	/* SawMill/bbv.scm 69 */
											obj_t BgL_arg1696z00_2080;

											{	/* SawMill/bbv.scm 69 */
												obj_t BgL_arg1697z00_2081;

												{	/* SawMill/bbv.scm 69 */
													obj_t BgL_arg1704z00_2082;

													{	/* SawMill/bbv.scm 69 */
														obj_t BgL_arg1707z00_2083;

														BgL_arg1707z00_2083 =
															MAKE_YOUNG_PAIR(BgL_arg1692z00_2077, BNIL);
														BgL_arg1704z00_2082 =
															MAKE_YOUNG_PAIR(BGl_string2497z00zzsaw_bbvz00,
															BgL_arg1707z00_2083);
													}
													BgL_arg1697z00_2081 =
														MAKE_YOUNG_PAIR(BGl_string2498z00zzsaw_bbvz00,
														BgL_arg1704z00_2082);
												}
												BgL_arg1696z00_2080 =
													MAKE_YOUNG_PAIR(BINT(((long) 69)),
													BgL_arg1697z00_2081);
											}
											BgL_arg1695z00_2079 =
												MAKE_YOUNG_PAIR(BGl_string2499z00zzsaw_bbvz00,
												BgL_arg1696z00_2080);
										}
										BgL_list1693z00_2078 =
											MAKE_YOUNG_PAIR(BGl_string2500z00zzsaw_bbvz00,
											BgL_arg1695z00_2079);
									}
									BGl_tprintz00zz__r4_output_6_10_3z00(BgL_arg1688z00_2076,
										BgL_list1693z00_2078);
							}}
							{	/* SawMill/bbv.scm 70 */
								obj_t BgL_exitd1163z00_2084;

								BgL_exitd1163z00_2084 = BGL_EXITD_TOP_AS_OBJ();
								{	/* SawMill/bbv.scm 93 */
									obj_t BgL_zc3z04anonymousza31779ze3z87_3887;

									BgL_zc3z04anonymousza31779ze3z87_3887 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_bbvz00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31779ze3z87_3887,
										(int) (((long) 0)), BgL_regsz00_2075);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1163z00_2084,
										BgL_zc3z04anonymousza31779ze3z87_3887);
									{	/* SawMill/bbv.scm 71 */
										obj_t BgL_tmp1165z00_2086;

										if (NULLP(BgL_blocksz00_2071))
											{	/* SawMill/bbv.scm 71 */
												BgL_tmp1165z00_2086 = BNIL;
											}
										else
											{	/* SawMill/bbv.scm 73 */
												BgL_blockz00_bglt BgL_sz00_2088;

												{	/* SawMill/bbv.scm 73 */
													obj_t BgL_arg1775z00_2126;
													obj_t BgL_arg1778z00_2127;

													BgL_arg1775z00_2126 =
														CAR(((obj_t) BgL_blocksz00_2071));
													BgL_arg1778z00_2127 =
														BGl_paramszd2ze3ctxz31zzsaw_bbvzd2typeszd2
														(BgL_paramsz00_78);
													BgL_sz00_2088 =
														BGl_getzd2specializa7ezd2blockza7zzsaw_bbvz00((
															(BgL_blockz00_bglt) BgL_arg1775z00_2126),
														BgL_arg1778z00_2127);
												}
												{	/* SawMill/bbv.scm 73 */
													obj_t BgL_bz00_2089;

													{	/* SawMill/bbv.scm 76 */
														obj_t BgL_arg1760z00_2122;

														{	/* SawMill/bbv.scm 79 */
															obj_t BgL_arg1761z00_2123;

															{	/* SawMill/bbv.scm 79 */
																BgL_blockz00_bglt BgL_arg1768z00_2124;

																BgL_arg1768z00_2124 =
																	BGl_mergez12z12zzsaw_bbvz00
																	(BGl_getzd2bbzd2markz00zzsaw_bbvzd2utilszd2(),
																	BgL_sz00_2088);
																BgL_arg1761z00_2123 =
																	BGl_simplifyzd2branchz12zc0zzsaw_bbvzd2utilszd2
																	(((BgL_blockz00_bglt) BgL_arg1768z00_2124));
															}
															BgL_arg1760z00_2122 =
																BGl_removezd2nopz12zc0zzsaw_bbvzd2utilszd2(
																((BgL_blockz00_bglt) BgL_arg1761z00_2123));
														}
														BgL_bz00_2089 =
															BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2
															(BgL_regsz00_2075,
															((BgL_blockz00_bglt) BgL_arg1760z00_2122));
													}
													{	/* SawMill/bbv.scm 75 */

														{	/* SawMill/bbv.scm 82 */
															obj_t BgL_arg1711z00_2090;
															obj_t BgL_arg1712z00_2091;

															{	/* SawMill/bbv.scm 82 */
																obj_t BgL_res2397z00_3356;

																{	/* SawMill/bbv.scm 82 */
																	obj_t BgL_tmpz00_4366;

																	BgL_tmpz00_4366 = BGL_CURRENT_DYNAMIC_ENV();
																	BgL_res2397z00_3356 =
																		BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4366);
																}
																BgL_arg1711z00_2090 = BgL_res2397z00_3356;
															}
															BgL_arg1712z00_2091 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_globalz00_77)))->BgL_idz00);
															{	/* SawMill/bbv.scm 82 */
																obj_t BgL_list1713z00_2092;

																{	/* SawMill/bbv.scm 82 */
																	obj_t BgL_arg1719z00_2093;

																	{	/* SawMill/bbv.scm 82 */
																		obj_t BgL_arg1725z00_2094;

																		{	/* SawMill/bbv.scm 82 */
																			obj_t BgL_arg1726z00_2095;

																			{	/* SawMill/bbv.scm 82 */
																				obj_t BgL_arg1727z00_2096;

																				{	/* SawMill/bbv.scm 82 */
																					obj_t BgL_arg1728z00_2097;

																					BgL_arg1728z00_2097 =
																						MAKE_YOUNG_PAIR(BgL_arg1712z00_2091,
																						BNIL);
																					BgL_arg1727z00_2096 =
																						MAKE_YOUNG_PAIR
																						(BGl_string2501z00zzsaw_bbvz00,
																						BgL_arg1728z00_2097);
																				}
																				BgL_arg1726z00_2095 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2498z00zzsaw_bbvz00,
																					BgL_arg1727z00_2096);
																			}
																			BgL_arg1725z00_2094 =
																				MAKE_YOUNG_PAIR(BINT(((long) 82)),
																				BgL_arg1726z00_2095);
																		}
																		BgL_arg1719z00_2093 =
																			MAKE_YOUNG_PAIR
																			(BGl_string2499z00zzsaw_bbvz00,
																			BgL_arg1725z00_2094);
																	}
																	BgL_list1713z00_2092 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2500z00zzsaw_bbvz00,
																		BgL_arg1719z00_2093);
																}
																BGl_tprintz00zz__r4_output_6_10_3z00
																	(BgL_arg1711z00_2090, BgL_list1713z00_2092);
														}}
														{	/* SawMill/bbv.scm 83 */
															long BgL_arg1729z00_2098;
															long BgL_arg1731z00_2099;

															BgL_arg1729z00_2098 =
																bgl_list_length(BgL_blocksz00_2071);
															BgL_arg1731z00_2099 =
																bgl_list_length(BgL_bz00_2089);
															{	/* SawMill/bbv.scm 83 */
																obj_t BgL_list1732z00_2100;

																{	/* SawMill/bbv.scm 83 */
																	obj_t BgL_arg1733z00_2101;

																	{	/* SawMill/bbv.scm 83 */
																		obj_t BgL_arg1738z00_2102;

																		{	/* SawMill/bbv.scm 83 */
																			obj_t BgL_arg1739z00_2103;

																			BgL_arg1739z00_2103 =
																				MAKE_YOUNG_PAIR(BINT
																				(BgL_arg1731z00_2099), BNIL);
																			BgL_arg1738z00_2102 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2502z00zzsaw_bbvz00,
																				BgL_arg1739z00_2103);
																		}
																		BgL_arg1733z00_2101 =
																			MAKE_YOUNG_PAIR(BINT(BgL_arg1729z00_2098),
																			BgL_arg1738z00_2102);
																	}
																	BgL_list1732z00_2100 =
																		MAKE_YOUNG_PAIR
																		(BGl_string2503z00zzsaw_bbvz00,
																		BgL_arg1733z00_2101);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
																	BgL_list1732z00_2100);
														}}
														{	/* SawMill/bbv.scm 84 */
															obj_t BgL_list1740z00_2104;

															BgL_list1740z00_2104 =
																MAKE_YOUNG_PAIR(BGl_string2504z00zzsaw_bbvz00,
																BNIL);
															BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
																BgL_list1740z00_2104);
														}
														{	/* SawMill/bbv.scm 85 */
															bool_t BgL_test2580z00_4392;

															{	/* SawMill/bbv.scm 85 */
																int BgL_arg1745z00_2108;

																BgL_arg1745z00_2108 = bgl_debug();
																BgL_test2580z00_4392 =
																	((long) (BgL_arg1745z00_2108) >= ((long) 1));
															}
															if (BgL_test2580z00_4392)
																{	/* SawMill/bbv.scm 85 */
																	{	/* SawMill/bbv.scm 87 */
																		obj_t BgL_arg1744z00_2107;

																		BgL_arg1744z00_2107 =
																			BGl_blockzd2ze3blockzd2listze3zzsaw_bbvzd2utilszd2
																			(BgL_regsz00_2075,
																			((BgL_blockz00_bglt) BgL_sz00_2088));
																		BGl_dumpzd2blockszd2zzsaw_bbvz00
																			(BgL_globalz00_77, BgL_paramsz00_78,
																			BgL_arg1744z00_2107,
																			BGl_string2505z00zzsaw_bbvz00);
																	}
																	BGl_dumpzd2blockszd2zzsaw_bbvz00
																		(BgL_globalz00_77, BgL_paramsz00_78,
																		BgL_bz00_2089,
																		BGl_string2506z00zzsaw_bbvz00);
																}
															else
																{	/* SawMill/bbv.scm 85 */
																	BFALSE;
																}
														}
														{
															obj_t BgL_l1531z00_2111;

															BgL_l1531z00_2111 = BgL_bz00_2089;
														BgL_zc3z04anonymousza31746ze3z87_2112:
															if (NULLP(BgL_l1531z00_2111))
																{	/* SawMill/bbv.scm 90 */
																	BgL_bz00_2089;
																}
															else
																{	/* SawMill/bbv.scm 90 */
																	{	/* SawMill/bbv.scm 90 */
																		obj_t BgL_arg1754z00_2114;

																		{	/* SawMill/bbv.scm 90 */
																			obj_t BgL_bz00_2115;

																			BgL_bz00_2115 =
																				CAR(((obj_t) BgL_l1531z00_2111));
																			{	/* SawMill/bbv.scm 90 */
																				long BgL_arg1755z00_2117;

																				{	/* SawMill/bbv.scm 90 */
																					obj_t BgL_arg1756z00_2118;

																					{	/* SawMill/bbv.scm 90 */
																						obj_t BgL_arg1757z00_2119;

																						{	/* SawMill/bbv.scm 90 */
																							long BgL_arg1816z00_3363;

																							{	/* SawMill/bbv.scm 90 */
																								long BgL_arg1817z00_3364;

																								{	/* SawMill/bbv.scm 90 */
																									long BgL_res2400z00_3366;

																									BgL_res2400z00_3366 =
																										BGL_OBJECT_CLASS_NUM(
																										((BgL_objectz00_bglt)
																											BgL_bz00_2115));
																									BgL_arg1817z00_3364 =
																										BgL_res2400z00_3366;
																								}
																								BgL_arg1816z00_3363 =
																									(BgL_arg1817z00_3364 -
																									OBJECT_TYPE);
																							}
																							BgL_arg1757z00_2119 =
																								VECTOR_REF
																								(BGl_za2classesza2z00zz__objectz00,
																								BgL_arg1816z00_3363);
																						}
																						BgL_arg1756z00_2118 =
																							BGl_classzd2superzd2zz__objectz00
																							(BgL_arg1757z00_2119);
																					}
																					{	/* SawMill/bbv.scm 90 */
																						long BgL_res2402z00_3373;

																						{	/* SawMill/bbv.scm 90 */
																							obj_t BgL_tmpz00_4409;

																							BgL_tmpz00_4409 =
																								((obj_t) BgL_arg1756z00_2118);
																							BgL_res2402z00_3373 =
																								BGL_CLASS_INDEX
																								(BgL_tmpz00_4409);
																						}
																						BgL_arg1755z00_2117 =
																							BgL_res2402z00_3373;
																				}}
																				BGL_OBJECT_CLASS_NUM_SET(
																					((BgL_objectz00_bglt) BgL_bz00_2115),
																					BgL_arg1755z00_2117);
																			}
																			{	/* SawMill/bbv.scm 90 */
																				BgL_objectz00_bglt BgL_tmpz00_4414;

																				BgL_tmpz00_4414 =
																					((BgL_objectz00_bglt) BgL_bz00_2115);
																				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4414,
																					BFALSE);
																			}
																			((BgL_objectz00_bglt) BgL_bz00_2115);
																			BgL_arg1754z00_2114 = BgL_bz00_2115;
																		}
																		{	/* SawMill/bbv.scm 90 */
																			obj_t BgL_tmpz00_4418;

																			BgL_tmpz00_4418 =
																				((obj_t) BgL_l1531z00_2111);
																			SET_CAR(BgL_tmpz00_4418,
																				BgL_arg1754z00_2114);
																	}}
																	{	/* SawMill/bbv.scm 90 */
																		obj_t BgL_arg1759z00_2120;

																		BgL_arg1759z00_2120 =
																			CDR(((obj_t) BgL_l1531z00_2111));
																		{
																			obj_t BgL_l1531z00_4423;

																			BgL_l1531z00_4423 = BgL_arg1759z00_2120;
																			BgL_l1531z00_2111 = BgL_l1531z00_4423;
																			goto
																				BgL_zc3z04anonymousza31746ze3z87_2112;
																		}
																	}
																}
														}
														BgL_tmp1165z00_2086 = BgL_bz00_2089;
													}
												}
											}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1163z00_2084);
										BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_bbvz00
											(BgL_zc3z04anonymousza31779ze3z87_3887);
										return BgL_tmp1165z00_2086;
									}
								}
							}
						}
					}
				}
			else
				{	/* SawMill/bbv.scm 58 */
					return BgL_blocksz00_79;
				}
		}

	}



/* &bbv */
	obj_t BGl_z62bbvz62zzsaw_bbvz00(obj_t BgL_envz00_3888, obj_t BgL_backz00_3889,
		obj_t BgL_globalz00_3890, obj_t BgL_paramsz00_3891,
		obj_t BgL_blocksz00_3892)
	{
		{	/* SawMill/bbv.scm 57 */
			return
				BGl_bbvz00zzsaw_bbvz00(
				((BgL_backendz00_bglt) BgL_backz00_3889),
				((BgL_globalz00_bglt) BgL_globalz00_3890), BgL_paramsz00_3891,
				BgL_blocksz00_3892);
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_bbvz00(obj_t BgL_envz00_3893)
	{
		{	/* SawMill/bbv.scm 70 */
			{	/* SawMill/bbv.scm 93 */
				obj_t BgL_regsz00_3894;

				BgL_regsz00_3894 = PROCEDURE_REF(BgL_envz00_3893, (int) (((long) 0)));
				{	/* SawMill/bbv.scm 93 */
					bool_t BgL_tmpz00_4431;

					{
						obj_t BgL_l1528z00_3948;

						BgL_l1528z00_3948 = BgL_regsz00_3894;
					BgL_zc3z04anonymousza31780ze3z87_3947:
						if (PAIRP(BgL_l1528z00_3948))
							{	/* SawMill/bbv.scm 93 */
								{	/* SawMill/bbv.scm 93 */
									obj_t BgL_rz00_3949;

									BgL_rz00_3949 = CAR(BgL_l1528z00_3948);
									{	/* SawMill/bbv.scm 93 */
										long BgL_arg1782z00_3950;

										{	/* SawMill/bbv.scm 93 */
											obj_t BgL_arg1784z00_3951;

											{	/* SawMill/bbv.scm 93 */
												obj_t BgL_arg1790z00_3952;

												{	/* SawMill/bbv.scm 93 */
													long BgL_arg1816z00_3953;

													{	/* SawMill/bbv.scm 93 */
														long BgL_arg1817z00_3954;

														{	/* SawMill/bbv.scm 93 */
															long BgL_res2393z00_3955;

															BgL_res2393z00_3955 =
																BGL_OBJECT_CLASS_NUM(
																((BgL_objectz00_bglt) BgL_rz00_3949));
															BgL_arg1817z00_3954 = BgL_res2393z00_3955;
														}
														BgL_arg1816z00_3953 =
															(BgL_arg1817z00_3954 - OBJECT_TYPE);
													}
													BgL_arg1790z00_3952 =
														VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
														BgL_arg1816z00_3953);
												}
												BgL_arg1784z00_3951 =
													BGl_classzd2superzd2zz__objectz00
													(BgL_arg1790z00_3952);
											}
											{	/* SawMill/bbv.scm 93 */
												long BgL_res2395z00_3956;

												{	/* SawMill/bbv.scm 93 */
													obj_t BgL_tmpz00_4440;

													BgL_tmpz00_4440 = ((obj_t) BgL_arg1784z00_3951);
													BgL_res2395z00_3956 =
														BGL_CLASS_INDEX(BgL_tmpz00_4440);
												}
												BgL_arg1782z00_3950 = BgL_res2395z00_3956;
										}}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_rz00_3949),
											BgL_arg1782z00_3950);
									}
									{	/* SawMill/bbv.scm 93 */
										BgL_objectz00_bglt BgL_tmpz00_4445;

										BgL_tmpz00_4445 = ((BgL_objectz00_bglt) BgL_rz00_3949);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4445, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_rz00_3949);
									BgL_rz00_3949;
								}
								{
									obj_t BgL_l1528z00_4449;

									BgL_l1528z00_4449 = CDR(BgL_l1528z00_3948);
									BgL_l1528z00_3948 = BgL_l1528z00_4449;
									goto BgL_zc3z04anonymousza31780ze3z87_3947;
								}
							}
						else
							{	/* SawMill/bbv.scm 93 */
								BgL_tmpz00_4431 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_4431);
				}
			}
		}

	}



/* dump-blocks */
	obj_t BGl_dumpzd2blockszd2zzsaw_bbvz00(BgL_globalz00_bglt BgL_globalz00_80,
		obj_t BgL_paramsz00_81, obj_t BgL_blocksz00_82, obj_t BgL_suffixz00_83)
	{
		{	/* SawMill/bbv.scm 99 */
			{	/* SawMill/bbv.scm 102 */
				obj_t BgL_dumpzd2blockszd2_3895;

				BgL_dumpzd2blockszd2_3895 =
					MAKE_FX_PROCEDURE(BGl_z62dumpzd2blockszb0zzsaw_bbvz00,
					(int) (((long) 1)), (int) (((long) 3)));
				PROCEDURE_SET(BgL_dumpzd2blockszd2_3895,
					(int) (((long) 0)), ((obj_t) BgL_globalz00_80));
				PROCEDURE_SET(BgL_dumpzd2blockszd2_3895,
					(int) (((long) 1)), BgL_paramsz00_81);
				PROCEDURE_SET(BgL_dumpzd2blockszd2_3895,
					(int) (((long) 2)), BgL_blocksz00_82);
				{	/* SawMill/bbv.scm 112 */
					obj_t BgL_onamez00_2144;
					obj_t BgL_idz00_2145;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* SawMill/bbv.scm 112 */
							BgL_onamez00_2144 = BGl_za2destza2z00zzengine_paramz00;
						}
					else
						{	/* SawMill/bbv.scm 114 */
							bool_t BgL_test2584z00_4464;

							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* SawMill/bbv.scm 114 */
									obj_t BgL_tmpz00_4467;

									BgL_tmpz00_4467 =
										CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
									BgL_test2584z00_4464 = STRINGP(BgL_tmpz00_4467);
								}
							else
								{	/* SawMill/bbv.scm 114 */
									BgL_test2584z00_4464 = ((bool_t) 0);
								}
							if (BgL_test2584z00_4464)
								{	/* SawMill/bbv.scm 114 */
									BgL_onamez00_2144 =
										BGl_prefixz00zz__osz00(CAR
										(BGl_za2srczd2filesza2zd2zzengine_paramz00));
								}
							else
								{	/* SawMill/bbv.scm 114 */
									BgL_onamez00_2144 = BFALSE;
								}
						}
					BgL_idz00_2145 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_80)))->BgL_idz00);
					if (CBOOL(BgL_onamez00_2144))
						{	/* SawMill/bbv.scm 119 */
							obj_t BgL_arg1808z00_2146;

							{	/* SawMill/bbv.scm 119 */
								obj_t BgL_list1809z00_2147;

								{	/* SawMill/bbv.scm 119 */
									obj_t BgL_arg1811z00_2148;

									{	/* SawMill/bbv.scm 119 */
										obj_t BgL_arg1820z00_2149;

										BgL_arg1820z00_2149 =
											MAKE_YOUNG_PAIR(BgL_suffixz00_83, BNIL);
										BgL_arg1811z00_2148 =
											MAKE_YOUNG_PAIR(BgL_idz00_2145, BgL_arg1820z00_2149);
									}
									BgL_list1809z00_2147 =
										MAKE_YOUNG_PAIR(BgL_onamez00_2144, BgL_arg1811z00_2148);
								}
								BgL_arg1808z00_2146 =
									BGl_formatz00zz__r4_output_6_10_3z00
									(BGl_string2507z00zzsaw_bbvz00, BgL_list1809z00_2147);
							}
							return
								BGl_callzd2withzd2outputzd2filezd2zz__r4_ports_6_10_1z00
								(BgL_arg1808z00_2146, BgL_dumpzd2blockszd2_3895);
						}
					else
						{	/* SawMill/bbv.scm 120 */
							obj_t BgL_arg1821z00_2150;

							{	/* SawMill/bbv.scm 120 */
								obj_t BgL_res2411z00_3413;

								{	/* SawMill/bbv.scm 120 */
									obj_t BgL_tmpz00_4481;

									BgL_tmpz00_4481 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res2411z00_3413 =
										BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_4481);
								}
								BgL_arg1821z00_2150 = BgL_res2411z00_3413;
							}
							return
								BGl_z62dumpzd2blockszb0zzsaw_bbvz00(BgL_dumpzd2blockszd2_3895,
								BgL_arg1821z00_2150);
						}
				}
			}
		}

	}



/* &dump-blocks */
	obj_t BGl_z62dumpzd2blockszb0zzsaw_bbvz00(obj_t BgL_envz00_3896,
		obj_t BgL_portz00_3900)
	{
		{	/* SawMill/bbv.scm 110 */
			{	/* SawMill/bbv.scm 102 */
				BgL_globalz00_bglt BgL_globalz00_3897;
				obj_t BgL_paramsz00_3898;
				obj_t BgL_blocksz00_3899;

				BgL_globalz00_3897 =
					((BgL_globalz00_bglt)
					PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 0))));
				BgL_paramsz00_3898 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 1))));
				BgL_blocksz00_3899 = PROCEDURE_REF(BgL_envz00_3896, (int) (((long) 2)));
				{	/* SawMill/bbv.scm 102 */
					obj_t BgL_idz00_3957;

					BgL_idz00_3957 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_globalz00_3897)))->BgL_idz00);
					{	/* SawMill/bbv.scm 102 */

						{	/* SawMill/bbv.scm 103 */
							obj_t BgL_tmpz00_4495;

							BgL_tmpz00_4495 = ((obj_t) BgL_portz00_3900);
							bgl_display_string(BGl_string2508z00zzsaw_bbvz00,
								BgL_tmpz00_4495);
						}
						{	/* SawMill/bbv.scm 103 */
							obj_t BgL_tmpz00_4498;

							BgL_tmpz00_4498 = ((obj_t) BgL_portz00_3900);
							bgl_display_char(((unsigned char) 10), BgL_tmpz00_4498);
						}
						{	/* SawMill/bbv.scm 104 */
							obj_t BgL_tmpz00_4501;

							BgL_tmpz00_4501 = ((obj_t) BgL_portz00_3900);
							bgl_display_string(BGl_string2509z00zzsaw_bbvz00,
								BgL_tmpz00_4501);
						}
						bgl_display_obj(BgL_idz00_3957, BgL_portz00_3900);
						{	/* SawMill/bbv.scm 104 */
							obj_t BgL_tmpz00_4505;

							BgL_tmpz00_4505 = ((obj_t) BgL_portz00_3900);
							bgl_display_string(BGl_string2498z00zzsaw_bbvz00,
								BgL_tmpz00_4505);
						}
						{	/* SawMill/bbv.scm 104 */
							obj_t BgL_tmpz00_4508;

							BgL_tmpz00_4508 = ((obj_t) BgL_portz00_3900);
							bgl_display_char(((unsigned char) 10), BgL_tmpz00_4508);
						}
						{	/* SawMill/bbv.scm 105 */
							obj_t BgL_tmpz00_4511;

							BgL_tmpz00_4511 = ((obj_t) BgL_portz00_3900);
							bgl_display_string(BGl_string2510z00zzsaw_bbvz00,
								BgL_tmpz00_4511);
						}
						{	/* SawMill/bbv.scm 105 */
							obj_t BgL_arg1830z00_3958;

							{	/* SawMill/bbv.scm 105 */
								obj_t BgL_l1535z00_3959;

								BgL_l1535z00_3959 = BgL_paramsz00_3898;
								if (NULLP(BgL_l1535z00_3959))
									{	/* SawMill/bbv.scm 105 */
										BgL_arg1830z00_3958 = BNIL;
									}
								else
									{	/* SawMill/bbv.scm 105 */
										obj_t BgL_head1537z00_3960;

										{	/* SawMill/bbv.scm 105 */
											obj_t BgL_arg1840z00_3961;

											{	/* SawMill/bbv.scm 105 */
												obj_t BgL_arg1841z00_3962;

												BgL_arg1841z00_3962 = CAR(((obj_t) BgL_l1535z00_3959));
												BgL_arg1840z00_3961 =
													BGl_shapez00zztools_shapez00(BgL_arg1841z00_3962);
											}
											{	/* SawMill/bbv.scm 105 */
												obj_t BgL_res2404z00_3963;

												BgL_res2404z00_3963 =
													MAKE_YOUNG_PAIR(BgL_arg1840z00_3961, BNIL);
												BgL_head1537z00_3960 = BgL_res2404z00_3963;
											}
										}
										{	/* SawMill/bbv.scm 105 */
											obj_t BgL_g1540z00_3964;

											BgL_g1540z00_3964 = CDR(((obj_t) BgL_l1535z00_3959));
											{
												obj_t BgL_l1535z00_3966;
												obj_t BgL_tail1538z00_3967;

												BgL_l1535z00_3966 = BgL_g1540z00_3964;
												BgL_tail1538z00_3967 = BgL_head1537z00_3960;
											BgL_zc3z04anonymousza31832ze3z87_3965:
												if (NULLP(BgL_l1535z00_3966))
													{	/* SawMill/bbv.scm 105 */
														BgL_arg1830z00_3958 = BgL_head1537z00_3960;
													}
												else
													{	/* SawMill/bbv.scm 105 */
														obj_t BgL_newtail1539z00_3968;

														{	/* SawMill/bbv.scm 105 */
															obj_t BgL_arg1836z00_3969;

															{	/* SawMill/bbv.scm 105 */
																obj_t BgL_arg1838z00_3970;

																BgL_arg1838z00_3970 =
																	CAR(((obj_t) BgL_l1535z00_3966));
																BgL_arg1836z00_3969 =
																	BGl_shapez00zztools_shapez00
																	(BgL_arg1838z00_3970);
															}
															{	/* SawMill/bbv.scm 105 */
																obj_t BgL_res2406z00_3971;

																BgL_res2406z00_3971 =
																	MAKE_YOUNG_PAIR(BgL_arg1836z00_3969, BNIL);
																BgL_newtail1539z00_3968 = BgL_res2406z00_3971;
															}
														}
														SET_CDR(BgL_tail1538z00_3967,
															BgL_newtail1539z00_3968);
														{	/* SawMill/bbv.scm 105 */
															obj_t BgL_arg1835z00_3972;

															BgL_arg1835z00_3972 =
																CDR(((obj_t) BgL_l1535z00_3966));
															{
																obj_t BgL_tail1538z00_4532;
																obj_t BgL_l1535z00_4531;

																BgL_l1535z00_4531 = BgL_arg1835z00_3972;
																BgL_tail1538z00_4532 = BgL_newtail1539z00_3968;
																BgL_tail1538z00_3967 = BgL_tail1538z00_4532;
																BgL_l1535z00_3966 = BgL_l1535z00_4531;
																goto BgL_zc3z04anonymousza31832ze3z87_3965;
															}
														}
													}
											}
										}
									}
							}
							bgl_display_obj(BgL_arg1830z00_3958, BgL_portz00_3900);
						}
						{	/* SawMill/bbv.scm 105 */
							obj_t BgL_tmpz00_4534;

							BgL_tmpz00_4534 = ((obj_t) BgL_portz00_3900);
							bgl_display_char(((unsigned char) 10), BgL_tmpz00_4534);
						}
						{
							obj_t BgL_l1542z00_3974;

							BgL_l1542z00_3974 = BgL_blocksz00_3899;
						BgL_zc3z04anonymousza31842ze3z87_3973:
							if (PAIRP(BgL_l1542z00_3974))
								{	/* SawMill/bbv.scm 106 */
									{	/* SawMill/bbv.scm 107 */
										obj_t BgL_bz00_3975;

										BgL_bz00_3975 = CAR(BgL_l1542z00_3974);
										BGl_dumpz00zzsaw_defsz00(BgL_bz00_3975, BgL_portz00_3900,
											(int) (((long) 0)));
										{	/* SawMill/bbv.scm 108 */
											obj_t BgL_tmpz00_4542;

											BgL_tmpz00_4542 = ((obj_t) BgL_portz00_3900);
											bgl_display_char(((unsigned char) 10), BgL_tmpz00_4542);
									}}
									{
										obj_t BgL_l1542z00_4545;

										BgL_l1542z00_4545 = CDR(BgL_l1542z00_3974);
										BgL_l1542z00_3974 = BgL_l1542z00_4545;
										goto BgL_zc3z04anonymousza31842ze3z87_3973;
									}
								}
							else
								{	/* SawMill/bbv.scm 106 */
									((bool_t) 1);
								}
						}
						return BgL_idz00_3957;
					}
				}
			}
		}

	}



/* widen-bbv! */
	bool_t BGl_widenzd2bbvz12zc0zzsaw_bbvz00(obj_t BgL_oz00_84,
		obj_t BgL_regsz00_85)
	{
		{	/* SawMill/bbv.scm 128 */
			{
				obj_t BgL_oz00_2235;
				obj_t BgL_oz00_2260;

				{
					obj_t BgL_l1559z00_2194;

					BgL_l1559z00_2194 = BgL_oz00_84;
				BgL_zc3z04anonymousza31846ze3z87_2195:
					if (PAIRP(BgL_l1559z00_2194))
						{	/* SawMill/bbv.scm 157 */
							BgL_oz00_2260 = CAR(BgL_l1559z00_2194);
							{	/* SawMill/bbv.scm 153 */
								BgL_blockvz00_bglt BgL_wide1180z00_2264;

								BgL_wide1180z00_2264 =
									((BgL_blockvz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockvz00_bgl))));
								{	/* SawMill/bbv.scm 153 */
									obj_t BgL_auxz00_4554;
									BgL_objectz00_bglt BgL_tmpz00_4550;

									BgL_auxz00_4554 = ((obj_t) BgL_wide1180z00_2264);
									BgL_tmpz00_4550 =
										((BgL_objectz00_bglt)
										((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2260)));
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4550, BgL_auxz00_4554);
								}
								((BgL_objectz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2260)));
								{	/* SawMill/bbv.scm 153 */
									long BgL_arg1888z00_2265;

									{	/* SawMill/bbv.scm 153 */
										long BgL_res2421z00_3452;

										BgL_res2421z00_3452 =
											BGL_CLASS_INDEX(BGl_blockVz00zzsaw_bbvzd2typeszd2);
										BgL_arg1888z00_2265 = BgL_res2421z00_3452;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_oz00_2260))),
										BgL_arg1888z00_2265);
								}
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2260)));
							}
							{
								BgL_blockvz00_bglt BgL_auxz00_4568;

								{
									obj_t BgL_auxz00_4569;

									{	/* SawMill/bbv-types.scm 36 */
										BgL_objectz00_bglt BgL_tmpz00_4570;

										BgL_tmpz00_4570 =
											((BgL_objectz00_bglt)
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_oz00_2260)));
										BgL_auxz00_4569 = BGL_OBJECT_WIDENING(BgL_tmpz00_4570);
									}
									BgL_auxz00_4568 = ((BgL_blockvz00_bglt) BgL_auxz00_4569);
								}
								((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_4568))->
										BgL_versionsz00) = ((obj_t) BNIL), BUNSPEC);
							}
							{
								BgL_blockvz00_bglt BgL_auxz00_4577;

								{
									obj_t BgL_auxz00_4578;

									{	/* SawMill/bbv-types.scm 36 */
										BgL_objectz00_bglt BgL_tmpz00_4579;

										BgL_tmpz00_4579 =
											((BgL_objectz00_bglt)
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_oz00_2260)));
										BgL_auxz00_4578 = BGL_OBJECT_WIDENING(BgL_tmpz00_4579);
									}
									BgL_auxz00_4577 = ((BgL_blockvz00_bglt) BgL_auxz00_4578);
								}
								((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_4577))->
										BgL_z52markz52) = ((long) ((long) -1)), BUNSPEC);
							}
							((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2260));
							{	/* SawMill/bbv.scm 155 */
								obj_t BgL_g1558z00_2268;

								BgL_g1558z00_2268 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_oz00_2260)))->BgL_firstz00);
								{
									obj_t BgL_l1556z00_2270;

									BgL_l1556z00_2270 = BgL_g1558z00_2268;
								BgL_zc3z04anonymousza31889ze3z87_2271:
									if (PAIRP(BgL_l1556z00_2270))
										{	/* SawMill/bbv.scm 155 */
											BgL_oz00_2235 = CAR(BgL_l1556z00_2270);
											{	/* SawMill/bbv.scm 144 */
												BgL_rtl_inszf2bbvzf2_bglt BgL_wide1176z00_2240;

												BgL_wide1176z00_2240 =
													((BgL_rtl_inszf2bbvzf2_bglt)
													BOBJECT(GC_MALLOC(sizeof(struct
																BgL_rtl_inszf2bbvzf2_bgl))));
												{	/* SawMill/bbv.scm 144 */
													obj_t BgL_auxz00_4597;
													BgL_objectz00_bglt BgL_tmpz00_4593;

													BgL_auxz00_4597 = ((obj_t) BgL_wide1176z00_2240);
													BgL_tmpz00_4593 =
														((BgL_objectz00_bglt)
														((BgL_rtl_insz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4593,
														BgL_auxz00_4597);
												}
												((BgL_objectz00_bglt)
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
												{	/* SawMill/bbv.scm 144 */
													long BgL_arg1873z00_2241;

													{	/* SawMill/bbv.scm 144 */
														long BgL_res2418z00_3438;

														BgL_res2418z00_3438 =
															BGL_CLASS_INDEX
															(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
														BgL_arg1873z00_2241 = BgL_res2418z00_3438;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2235))),
														BgL_arg1873z00_2241);
												}
												((BgL_rtl_insz00_bglt)
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
											}
											{
												obj_t BgL_auxz00_4619;
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4611;

												{	/* SawMill/bbv.scm 145 */
													bool_t BgL_test2592z00_4620;

													if (CBOOL(
															(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_oz00_2235)))->
																BgL_destz00)))
														{	/* SawMill/bbv.scm 145 */
															BgL_test2592z00_4620 =
																CBOOL(
																(((BgL_rtl_regz00_bglt) COBJECT(
																			((BgL_rtl_regz00_bglt)
																				(((BgL_rtl_insz00_bglt) COBJECT(
																							((BgL_rtl_insz00_bglt)
																								BgL_oz00_2235)))->
																					BgL_destz00))))->BgL_onexprzf3zf3));
														}
													else
														{	/* SawMill/bbv.scm 145 */
															BgL_test2592z00_4620 = ((bool_t) 1);
														}
													if (BgL_test2592z00_4620)
														{	/* SawMill/bbv.scm 145 */
															BgL_auxz00_4619 =
																((obj_t)
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_85));
														}
													else
														{	/* SawMill/bbv.scm 147 */
															obj_t BgL_arg1878z00_2246;

															{	/* SawMill/bbv.scm 147 */
																obj_t BgL_arg1879z00_2247;

																BgL_arg1879z00_2247 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt) BgL_oz00_2235)))->
																	BgL_destz00);
																{	/* SawMill/bbv.scm 147 */
																	obj_t BgL_list1880z00_2248;

																	BgL_list1880z00_2248 =
																		MAKE_YOUNG_PAIR(BgL_arg1879z00_2247, BNIL);
																	BgL_arg1878z00_2246 = BgL_list1880z00_2248;
																}
															}
															BgL_auxz00_4619 =
																((obj_t)
																BGl_listzd2ze3regsetz31zzsaw_regsetz00
																(BgL_arg1878z00_2246, BgL_regsz00_85));
														}
												}
												{
													obj_t BgL_auxz00_4612;

													{	/* SawMill/bbv.scm 145 */
														BgL_objectz00_bglt BgL_tmpz00_4613;

														BgL_tmpz00_4613 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
														BgL_auxz00_4612 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4613);
													}
													BgL_auxz00_4611 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4612);
												}
												((((BgL_rtl_inszf2bbvzf2_bglt)
															COBJECT(BgL_auxz00_4611))->BgL_defz00) =
													((obj_t) BgL_auxz00_4619), BUNSPEC);
											}
											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4638;

												{
													obj_t BgL_auxz00_4639;

													{	/* SawMill/bbv.scm 149 */
														BgL_objectz00_bglt BgL_tmpz00_4640;

														BgL_tmpz00_4640 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
														BgL_auxz00_4639 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4640);
													}
													BgL_auxz00_4638 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4639);
												}
												((((BgL_rtl_inszf2bbvzf2_bglt)
															COBJECT(BgL_auxz00_4638))->BgL_outz00) =
													((obj_t) ((obj_t)
															BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
															(BgL_regsz00_85))), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_4657;
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4649;

												{	/* SawMill/bbv.scm 148 */
													obj_t BgL_arg1882z00_2251;

													BgL_arg1882z00_2251 =
														BGl_getzd2argsze70z35zzsaw_bbvz00(BgL_oz00_2235);
													BgL_auxz00_4657 =
														((obj_t)
														BGl_listzd2ze3regsetz31zzsaw_regsetz00
														(BgL_arg1882z00_2251, BgL_regsz00_85));
												}
												{
													obj_t BgL_auxz00_4650;

													{	/* SawMill/bbv.scm 148 */
														BgL_objectz00_bglt BgL_tmpz00_4651;

														BgL_tmpz00_4651 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
														BgL_auxz00_4650 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4651);
													}
													BgL_auxz00_4649 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4650);
												}
												((((BgL_rtl_inszf2bbvzf2_bglt)
															COBJECT(BgL_auxz00_4649))->BgL_inz00) =
													((obj_t) BgL_auxz00_4657), BUNSPEC);
											}
											{
												BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4662;

												{
													obj_t BgL_auxz00_4663;

													{	/* SawMill/bbv.scm 148 */
														BgL_objectz00_bglt BgL_tmpz00_4664;

														BgL_tmpz00_4664 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2235)));
														BgL_auxz00_4663 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4664);
													}
													BgL_auxz00_4662 =
														((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4663);
												}
												((((BgL_rtl_inszf2bbvzf2_bglt)
															COBJECT(BgL_auxz00_4662))->BgL_z52hashz52) =
													((obj_t) BFALSE), BUNSPEC);
											}
											((BgL_rtl_insz00_bglt)
												((BgL_rtl_insz00_bglt) BgL_oz00_2235));
											{	/* SawMill/bbv.scm 150 */
												obj_t BgL_g1555z00_2252;

												BgL_g1555z00_2252 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_oz00_2235)))->
													BgL_argsz00);
												{
													obj_t BgL_l1553z00_2254;

													BgL_l1553z00_2254 = BgL_g1555z00_2252;
												BgL_zc3z04anonymousza31883ze3z87_2255:
													if (PAIRP(BgL_l1553z00_2254))
														{	/* SawMill/bbv.scm 150 */
															BGl_argszd2widenzd2bbvz12ze70zf5zzsaw_bbvz00
																(BgL_regsz00_85, CAR(BgL_l1553z00_2254));
															{
																obj_t BgL_l1553z00_4679;

																BgL_l1553z00_4679 = CDR(BgL_l1553z00_2254);
																BgL_l1553z00_2254 = BgL_l1553z00_4679;
																goto BgL_zc3z04anonymousza31883ze3z87_2255;
															}
														}
													else
														{	/* SawMill/bbv.scm 150 */
															((bool_t) 1);
														}
												}
											}
											{
												obj_t BgL_l1556z00_4682;

												BgL_l1556z00_4682 = CDR(BgL_l1556z00_2270);
												BgL_l1556z00_2270 = BgL_l1556z00_4682;
												goto BgL_zc3z04anonymousza31889ze3z87_2271;
											}
										}
									else
										{	/* SawMill/bbv.scm 155 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l1559z00_4685;

								BgL_l1559z00_4685 = CDR(BgL_l1559z00_2194);
								BgL_l1559z00_2194 = BgL_l1559z00_4685;
								goto BgL_zc3z04anonymousza31846ze3z87_2195;
							}
						}
					else
						{	/* SawMill/bbv.scm 157 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* get-args~0 */
	obj_t BGl_getzd2argsze70z35zzsaw_bbvz00(obj_t BgL_oz00_2200)
	{
		{	/* SawMill/bbv.scm 131 */
			{	/* SawMill/bbv.scm 131 */
				obj_t BgL_hook1548z00_2202;

				BgL_hook1548z00_2202 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
				{	/* SawMill/bbv.scm 131 */
					obj_t BgL_g1549z00_2203;

					BgL_g1549z00_2203 =
						BGl_rtl_inszd2argsza2z70zzsaw_defsz00(
						((BgL_rtl_insz00_bglt) BgL_oz00_2200));
					{
						obj_t BgL_l1545z00_2205;
						obj_t BgL_h1546z00_2206;

						BgL_l1545z00_2205 = BgL_g1549z00_2203;
						BgL_h1546z00_2206 = BgL_hook1548z00_2202;
					BgL_zc3z04anonymousza31852ze3z87_2207:
						if (NULLP(BgL_l1545z00_2205))
							{	/* SawMill/bbv.scm 131 */
								return CDR(BgL_hook1548z00_2202);
							}
						else
							{	/* SawMill/bbv.scm 131 */
								bool_t BgL_test2596z00_4693;

								{	/* SawMill/bbv.scm 131 */
									obj_t BgL_arg1861z00_2215;

									BgL_arg1861z00_2215 = CAR(((obj_t) BgL_l1545z00_2205));
									BgL_test2596z00_4693 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1861z00_2215,
										BGl_rtl_regzf2razf2zzsaw_regsetz00);
								}
								if (BgL_test2596z00_4693)
									{	/* SawMill/bbv.scm 131 */
										obj_t BgL_nh1547z00_2211;

										{	/* SawMill/bbv.scm 131 */
											obj_t BgL_arg1858z00_2213;

											BgL_arg1858z00_2213 = CAR(((obj_t) BgL_l1545z00_2205));
											{	/* SawMill/bbv.scm 131 */
												obj_t BgL_res2414z00_3419;

												BgL_res2414z00_3419 =
													MAKE_YOUNG_PAIR(BgL_arg1858z00_2213, BNIL);
												BgL_nh1547z00_2211 = BgL_res2414z00_3419;
											}
										}
										SET_CDR(BgL_h1546z00_2206, BgL_nh1547z00_2211);
										{	/* SawMill/bbv.scm 131 */
											obj_t BgL_arg1857z00_2212;

											BgL_arg1857z00_2212 = CDR(((obj_t) BgL_l1545z00_2205));
											{
												obj_t BgL_h1546z00_4704;
												obj_t BgL_l1545z00_4703;

												BgL_l1545z00_4703 = BgL_arg1857z00_2212;
												BgL_h1546z00_4704 = BgL_nh1547z00_2211;
												BgL_h1546z00_2206 = BgL_h1546z00_4704;
												BgL_l1545z00_2205 = BgL_l1545z00_4703;
												goto BgL_zc3z04anonymousza31852ze3z87_2207;
											}
										}
									}
								else
									{	/* SawMill/bbv.scm 131 */
										obj_t BgL_arg1859z00_2214;

										BgL_arg1859z00_2214 = CDR(((obj_t) BgL_l1545z00_2205));
										{
											obj_t BgL_l1545z00_4707;

											BgL_l1545z00_4707 = BgL_arg1859z00_2214;
											BgL_l1545z00_2205 = BgL_l1545z00_4707;
											goto BgL_zc3z04anonymousza31852ze3z87_2207;
										}
									}
							}
					}
				}
			}
		}

	}



/* args-widen-bbv!~0 */
	bool_t BGl_argszd2widenzd2bbvz12ze70zf5zzsaw_bbvz00(obj_t BgL_regsz00_3920,
		obj_t BgL_oz00_2217)
	{
		{	/* SawMill/bbv.scm 140 */
			if (BGl_isazf3zf3zz__objectz00(BgL_oz00_2217,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMill/bbv.scm 134 */
					{	/* SawMill/bbv.scm 136 */
						BgL_rtl_inszf2bbvzf2_bglt BgL_wide1171z00_2223;

						BgL_wide1171z00_2223 =
							((BgL_rtl_inszf2bbvzf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_inszf2bbvzf2_bgl))));
						{	/* SawMill/bbv.scm 136 */
							obj_t BgL_auxz00_4715;
							BgL_objectz00_bglt BgL_tmpz00_4711;

							BgL_auxz00_4715 = ((obj_t) BgL_wide1171z00_2223);
							BgL_tmpz00_4711 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4711, BgL_auxz00_4715);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
						{	/* SawMill/bbv.scm 136 */
							long BgL_arg1865z00_2224;

							{	/* SawMill/bbv.scm 136 */
								long BgL_res2416z00_3426;

								BgL_res2416z00_3426 =
									BGL_CLASS_INDEX(BGl_rtl_inszf2bbvzf2zzsaw_bbvzd2typeszd2);
								BgL_arg1865z00_2224 = BgL_res2416z00_3426;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2217))),
								BgL_arg1865z00_2224);
						}
						((BgL_rtl_insz00_bglt)
							((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
					}
					{
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4729;

						{
							obj_t BgL_auxz00_4730;

							{	/* SawMill/bbv.scm 137 */
								BgL_objectz00_bglt BgL_tmpz00_4731;

								BgL_tmpz00_4731 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
								BgL_auxz00_4730 = BGL_OBJECT_WIDENING(BgL_tmpz00_4731);
							}
							BgL_auxz00_4729 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4730);
						}
						((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4729))->
								BgL_defz00) =
							((obj_t) ((obj_t)
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
									(BgL_regsz00_3920))), BUNSPEC);
					}
					{
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4740;

						{
							obj_t BgL_auxz00_4741;

							{	/* SawMill/bbv.scm 139 */
								BgL_objectz00_bglt BgL_tmpz00_4742;

								BgL_tmpz00_4742 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
								BgL_auxz00_4741 = BGL_OBJECT_WIDENING(BgL_tmpz00_4742);
							}
							BgL_auxz00_4740 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4741);
						}
						((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4740))->
								BgL_outz00) =
							((obj_t) ((obj_t)
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
									(BgL_regsz00_3920))), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4759;
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4751;

						{	/* SawMill/bbv.scm 138 */
							obj_t BgL_arg1866z00_2226;

							BgL_arg1866z00_2226 =
								BGl_getzd2argsze70z35zzsaw_bbvz00(BgL_oz00_2217);
							BgL_auxz00_4759 =
								((obj_t)
								BGl_listzd2ze3regsetz31zzsaw_regsetz00(BgL_arg1866z00_2226,
									BgL_regsz00_3920));
						}
						{
							obj_t BgL_auxz00_4752;

							{	/* SawMill/bbv.scm 138 */
								BgL_objectz00_bglt BgL_tmpz00_4753;

								BgL_tmpz00_4753 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
								BgL_auxz00_4752 = BGL_OBJECT_WIDENING(BgL_tmpz00_4753);
							}
							BgL_auxz00_4751 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4752);
						}
						((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4751))->
								BgL_inz00) = ((obj_t) BgL_auxz00_4759), BUNSPEC);
					}
					{
						BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4764;

						{
							obj_t BgL_auxz00_4765;

							{	/* SawMill/bbv.scm 138 */
								BgL_objectz00_bglt BgL_tmpz00_4766;

								BgL_tmpz00_4766 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2217)));
								BgL_auxz00_4765 = BGL_OBJECT_WIDENING(BgL_tmpz00_4766);
							}
							BgL_auxz00_4764 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4765);
						}
						((((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4764))->
								BgL_z52hashz52) = ((obj_t) BFALSE), BUNSPEC);
					}
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2217));
					{	/* SawMill/bbv.scm 140 */
						obj_t BgL_g1552z00_2227;

						BgL_g1552z00_2227 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_2217)))->BgL_argsz00);
						{
							obj_t BgL_l1550z00_2229;

							BgL_l1550z00_2229 = BgL_g1552z00_2227;
						BgL_zc3z04anonymousza31867ze3z87_2230:
							if (PAIRP(BgL_l1550z00_2229))
								{	/* SawMill/bbv.scm 140 */
									BGl_argszd2widenzd2bbvz12ze70zf5zzsaw_bbvz00(BgL_regsz00_3920,
										CAR(BgL_l1550z00_2229));
									{
										obj_t BgL_l1550z00_4781;

										BgL_l1550z00_4781 = CDR(BgL_l1550z00_2229);
										BgL_l1550z00_2229 = BgL_l1550z00_4781;
										goto BgL_zc3z04anonymousza31867ze3z87_2230;
									}
								}
							else
								{	/* SawMill/bbv.scm 140 */
									return ((bool_t) 1);
								}
						}
					}
				}
			else
				{	/* SawMill/bbv.scm 134 */
					return ((bool_t) 0);
				}
		}

	}



/* liveness! */
	obj_t BGl_livenessz12z12zzsaw_bbvz00(BgL_backendz00_bglt BgL_backz00_86,
		obj_t BgL_blocksz00_87, obj_t BgL_paramsz00_88)
	{
		{	/* SawMill/bbv.scm 165 */
			{
				obj_t BgL_blockz00_2334;

				{	/* SawMill/bbv.scm 194 */
					obj_t BgL_cregsz00_2282;

					BgL_cregsz00_2282 =
						BGl_collectzd2registersz12zc0zzsaw_regutilsz00(BgL_blocksz00_87);
					{	/* SawMill/bbv.scm 194 */
						obj_t BgL_hregsz00_2283;

						{	/* SawMill/bbv.scm 195 */
							obj_t BgL_arg1917z00_2329;

							BgL_arg1917z00_2329 =
								(((BgL_backendz00_bglt) COBJECT(BgL_backz00_86))->
								BgL_registersz00);
							{	/* SawMill/bbv.scm 195 */
								obj_t BgL_list1918z00_2330;

								BgL_list1918z00_2330 =
									MAKE_YOUNG_PAIR(BgL_arg1917z00_2329, BNIL);
								BgL_hregsz00_2283 =
									BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
									(BGl_collectzd2registerz12zd2envz12zzsaw_regutilsz00,
									BgL_list1918z00_2330);
							}
						}
						{	/* SawMill/bbv.scm 195 */
							obj_t BgL_pregsz00_2284;

							{	/* SawMill/bbv.scm 196 */
								obj_t BgL_hook1576z00_2315;

								BgL_hook1576z00_2315 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
								{
									obj_t BgL_l1573z00_2317;
									obj_t BgL_h1574z00_2318;

									BgL_l1573z00_2317 = BgL_paramsz00_88;
									BgL_h1574z00_2318 = BgL_hook1576z00_2315;
								BgL_zc3z04anonymousza31909ze3z87_2319:
									if (NULLP(BgL_l1573z00_2317))
										{	/* SawMill/bbv.scm 196 */
											BgL_pregsz00_2284 = CDR(BgL_hook1576z00_2315);
										}
									else
										{	/* SawMill/bbv.scm 196 */
											bool_t BgL_test2600z00_4791;

											{	/* SawMill/bbv.scm 196 */
												obj_t BgL_arg1916z00_2327;

												BgL_arg1916z00_2327 = CAR(((obj_t) BgL_l1573z00_2317));
												BgL_test2600z00_4791 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1916z00_2327,
													BGl_rtl_regzf2razf2zzsaw_regsetz00);
											}
											if (BgL_test2600z00_4791)
												{	/* SawMill/bbv.scm 196 */
													obj_t BgL_nh1575z00_2323;

													{	/* SawMill/bbv.scm 196 */
														obj_t BgL_arg1914z00_2325;

														BgL_arg1914z00_2325 =
															CAR(((obj_t) BgL_l1573z00_2317));
														{	/* SawMill/bbv.scm 196 */
															obj_t BgL_res2438z00_3509;

															BgL_res2438z00_3509 =
																MAKE_YOUNG_PAIR(BgL_arg1914z00_2325, BNIL);
															BgL_nh1575z00_2323 = BgL_res2438z00_3509;
														}
													}
													SET_CDR(BgL_h1574z00_2318, BgL_nh1575z00_2323);
													{	/* SawMill/bbv.scm 196 */
														obj_t BgL_arg1913z00_2324;

														BgL_arg1913z00_2324 =
															CDR(((obj_t) BgL_l1573z00_2317));
														{
															obj_t BgL_h1574z00_4802;
															obj_t BgL_l1573z00_4801;

															BgL_l1573z00_4801 = BgL_arg1913z00_2324;
															BgL_h1574z00_4802 = BgL_nh1575z00_2323;
															BgL_h1574z00_2318 = BgL_h1574z00_4802;
															BgL_l1573z00_2317 = BgL_l1573z00_4801;
															goto BgL_zc3z04anonymousza31909ze3z87_2319;
														}
													}
												}
											else
												{	/* SawMill/bbv.scm 196 */
													obj_t BgL_arg1915z00_2326;

													BgL_arg1915z00_2326 =
														CDR(((obj_t) BgL_l1573z00_2317));
													{
														obj_t BgL_l1573z00_4805;

														BgL_l1573z00_4805 = BgL_arg1915z00_2326;
														BgL_l1573z00_2317 = BgL_l1573z00_4805;
														goto BgL_zc3z04anonymousza31909ze3z87_2319;
													}
												}
										}
								}
							}
							{	/* SawMill/bbv.scm 196 */
								obj_t BgL_regsz00_2285;

								BgL_regsz00_2285 =
									BGl_appendzd221011zd2zzsaw_bbvz00(BgL_hregsz00_2283,
									BgL_cregsz00_2282);
								{	/* SawMill/bbv.scm 197 */

									BGl_widenzd2bbvz12zc0zzsaw_bbvz00(BgL_blocksz00_87,
										BgL_regsz00_2285);
									if (PAIRP(BgL_blocksz00_87))
										{	/* SawMill/bbv.scm 203 */
											obj_t BgL_inssz00_2287;

											BgL_inssz00_2287 =
												(((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt)
															CAR(BgL_blocksz00_87))))->BgL_firstz00);
											{	/* SawMill/bbv.scm 205 */
												obj_t BgL_insz00_2289;

												BgL_insz00_2289 = CAR(BgL_inssz00_2287);
												{
													obj_t BgL_l1577z00_2292;

													BgL_l1577z00_2292 = BgL_pregsz00_2284;
												BgL_zc3z04anonymousza31895ze3z87_2293:
													if (PAIRP(BgL_l1577z00_2292))
														{	/* SawMill/bbv.scm 207 */
															{	/* SawMill/bbv.scm 207 */
																obj_t BgL_az00_2295;

																BgL_az00_2295 = CAR(BgL_l1577z00_2292);
																{	/* SawMill/bbv.scm 207 */
																	obj_t BgL_arg1897z00_2296;

																	{
																		BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4817;

																		{
																			obj_t BgL_auxz00_4818;

																			{	/* SawMill/bbv.scm 207 */
																				BgL_objectz00_bglt BgL_tmpz00_4819;

																				BgL_tmpz00_4819 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						BgL_insz00_2289));
																				BgL_auxz00_4818 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_4819);
																			}
																			BgL_auxz00_4817 =
																				((BgL_rtl_inszf2bbvzf2_bglt)
																				BgL_auxz00_4818);
																		}
																		BgL_arg1897z00_2296 =
																			(((BgL_rtl_inszf2bbvzf2_bglt)
																				COBJECT(BgL_auxz00_4817))->BgL_inz00);
																	}
																	BGl_regsetzd2addz12zc0zzsaw_regsetz00(
																		((BgL_regsetz00_bglt) BgL_arg1897z00_2296),
																		((BgL_rtl_regz00_bglt) BgL_az00_2295));
																}
															}
															{
																obj_t BgL_l1577z00_4828;

																BgL_l1577z00_4828 = CDR(BgL_l1577z00_2292);
																BgL_l1577z00_2292 = BgL_l1577z00_4828;
																goto BgL_zc3z04anonymousza31895ze3z87_2293;
															}
														}
													else
														{	/* SawMill/bbv.scm 207 */
															((bool_t) 1);
														}
												}
											}
										}
									else
										{	/* SawMill/bbv.scm 202 */
											((bool_t) 0);
										}
									{
										long BgL_iz00_2301;

										BgL_iz00_2301 = ((long) 0);
									BgL_zc3z04anonymousza31902ze3z87_2302:
										{
											obj_t BgL_bsz00_2304;
											obj_t BgL_tz00_2305;

											BgL_bsz00_2304 = BgL_blocksz00_87;
											BgL_tz00_2305 = BFALSE;
										BgL_zc3z04anonymousza31903ze3z87_2306:
											if (NULLP(BgL_bsz00_2304))
												{	/* SawMill/bbv.scm 212 */
													if (CBOOL(BgL_tz00_2305))
														{
															long BgL_iz00_4834;

															BgL_iz00_4834 = (BgL_iz00_2301 + ((long) 1));
															BgL_iz00_2301 = BgL_iz00_4834;
															goto BgL_zc3z04anonymousza31902ze3z87_2302;
														}
													else
														{	/* SawMill/bbv.scm 213 */
															return BgL_regsz00_2285;
														}
												}
											else
												{	/* SawMill/bbv.scm 216 */
													obj_t BgL_arg1906z00_2309;
													obj_t BgL_arg1907z00_2310;

													BgL_arg1906z00_2309 = CDR(((obj_t) BgL_bsz00_2304));
													{	/* SawMill/bbv.scm 216 */
														obj_t BgL__ortest_1192z00_2311;

														{	/* SawMill/bbv.scm 216 */
															obj_t BgL_arg1908z00_2312;

															BgL_arg1908z00_2312 =
																CAR(((obj_t) BgL_bsz00_2304));
															BgL_blockz00_2334 = BgL_arg1908z00_2312;
															{	/* SawMill/bbv.scm 173 */
																obj_t BgL_g1186z00_2337;
																obj_t BgL_g1187z00_2338;

																BgL_g1186z00_2337 =
																	bgl_reverse(
																	(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt)
																					BgL_blockz00_2334)))->BgL_firstz00));
																{	/* SawMill/bbv.scm 174 */
																	obj_t BgL_l1561z00_2385;

																	BgL_l1561z00_2385 =
																		(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt)
																					BgL_blockz00_2334)))->BgL_succsz00);
																	if (NULLP(BgL_l1561z00_2385))
																		{	/* SawMill/bbv.scm 174 */
																			BgL_g1187z00_2338 = BNIL;
																		}
																	else
																		{	/* SawMill/bbv.scm 174 */
																			obj_t BgL_head1563z00_2387;

																			{	/* SawMill/bbv.scm 174 */
																				obj_t BgL_res2425z00_3466;

																				BgL_res2425z00_3466 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_head1563z00_2387 =
																					BgL_res2425z00_3466;
																			}
																			{
																				obj_t BgL_l1561z00_2389;
																				obj_t BgL_tail1564z00_2390;

																				BgL_l1561z00_2389 = BgL_l1561z00_2385;
																				BgL_tail1564z00_2390 =
																					BgL_head1563z00_2387;
																			BgL_zc3z04anonymousza31949ze3z87_2391:
																				if (NULLP(BgL_l1561z00_2389))
																					{	/* SawMill/bbv.scm 174 */
																						BgL_g1187z00_2338 =
																							CDR(BgL_head1563z00_2387);
																					}
																				else
																					{	/* SawMill/bbv.scm 174 */
																						obj_t BgL_newtail1565z00_2393;

																						{	/* SawMill/bbv.scm 174 */
																							obj_t BgL_arg1952z00_2395;

																							BgL_arg1952z00_2395 =
																								CAR(
																								(((BgL_blockz00_bglt) COBJECT(
																											((BgL_blockz00_bglt)
																												CAR(
																													((obj_t)
																														BgL_l1561z00_2389)))))->
																									BgL_firstz00));
																							{	/* SawMill/bbv.scm 174 */
																								obj_t BgL_res2427z00_3472;

																								BgL_res2427z00_3472 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1952z00_2395, BNIL);
																								BgL_newtail1565z00_2393 =
																									BgL_res2427z00_3472;
																							}
																						}
																						SET_CDR(BgL_tail1564z00_2390,
																							BgL_newtail1565z00_2393);
																						{	/* SawMill/bbv.scm 174 */
																							obj_t BgL_arg1951z00_2394;

																							BgL_arg1951z00_2394 =
																								CDR(
																								((obj_t) BgL_l1561z00_2389));
																							{
																								obj_t BgL_tail1564z00_4861;
																								obj_t BgL_l1561z00_4860;

																								BgL_l1561z00_4860 =
																									BgL_arg1951z00_2394;
																								BgL_tail1564z00_4861 =
																									BgL_newtail1565z00_2393;
																								BgL_tail1564z00_2390 =
																									BgL_tail1564z00_4861;
																								BgL_l1561z00_2389 =
																									BgL_l1561z00_4860;
																								goto
																									BgL_zc3z04anonymousza31949ze3z87_2391;
																							}
																						}
																					}
																			}
																		}
																}
																{
																	obj_t BgL_inssz00_2340;
																	obj_t BgL_succz00_2341;
																	obj_t BgL_tz00_2342;

																	BgL_inssz00_2340 = BgL_g1186z00_2337;
																	BgL_succz00_2341 = BgL_g1187z00_2338;
																	BgL_tz00_2342 = BFALSE;
																BgL_zc3z04anonymousza31921ze3z87_2343:
																	if (PAIRP(BgL_inssz00_2340))
																		{	/* SawMill/bbv.scm 177 */
																			BgL_rtl_insz00_bglt BgL_i1188z00_2345;

																			BgL_i1188z00_2345 =
																				((BgL_rtl_insz00_bglt)
																				CAR(BgL_inssz00_2340));
																			{	/* SawMill/bbv.scm 178 */
																				obj_t BgL_uz00_3909;

																				{	/* SawMill/bbv.scm 179 */
																					obj_t BgL_cellvalz00_4866;

																					if (BGl_isazf3zf3zz__objectz00
																						(BgL_succz00_2341,
																							BGl_rtl_insz00zzsaw_defsz00))
																						{	/* SawMill/bbv.scm 180 */
																							obj_t BgL_arg1934z00_2362;
																							obj_t BgL_arg1935z00_2363;

																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_4869;
																								{
																									obj_t BgL_auxz00_4870;

																									{	/* SawMill/bbv.scm 180 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4871;
																										BgL_tmpz00_4871 =
																											((BgL_objectz00_bglt)
																											BgL_i1188z00_2345);
																										BgL_auxz00_4870 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4871);
																									}
																									BgL_auxz00_4869 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_4870);
																								}
																								BgL_arg1934z00_2362 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_4869))->
																									BgL_outz00);
																							}
																							{
																								BgL_rtl_inszf2bbvzf2_bglt
																									BgL_auxz00_4876;
																								{
																									obj_t BgL_auxz00_4877;

																									{	/* SawMill/bbv.scm 168 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_4878;
																										BgL_tmpz00_4878 =
																											((BgL_objectz00_bglt) (
																												(BgL_rtl_insz00_bglt) (
																													(BgL_rtl_insz00_bglt)
																													BgL_succz00_2341)));
																										BgL_auxz00_4877 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_4878);
																									}
																									BgL_auxz00_4876 =
																										((BgL_rtl_inszf2bbvzf2_bglt)
																										BgL_auxz00_4877);
																								}
																								BgL_arg1935z00_2363 =
																									(((BgL_rtl_inszf2bbvzf2_bglt)
																										COBJECT(BgL_auxz00_4876))->
																									BgL_inz00);
																							}
																							BgL_cellvalz00_4866 =
																								BBOOL
																								(BGl_regsetzd2unionz12zc0zzsaw_regsetz00
																								(((BgL_regsetz00_bglt)
																										BgL_arg1934z00_2362),
																									((BgL_regsetz00_bglt)
																										BgL_arg1935z00_2363)));
																						}
																					else
																						{	/* SawMill/bbv.scm 179 */
																							if (PAIRP(BgL_succz00_2341))
																								{	/* SawMill/bbv.scm 182 */
																									obj_t BgL_arg1937z00_2365;
																									obj_t BgL_arg1938z00_2366;

																									{
																										BgL_rtl_inszf2bbvzf2_bglt
																											BgL_auxz00_4891;
																										{
																											obj_t BgL_auxz00_4892;

																											{	/* SawMill/bbv.scm 182 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_4893;
																												BgL_tmpz00_4893 =
																													((BgL_objectz00_bglt)
																													BgL_i1188z00_2345);
																												BgL_auxz00_4892 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_4893);
																											}
																											BgL_auxz00_4891 =
																												(
																												(BgL_rtl_inszf2bbvzf2_bglt)
																												BgL_auxz00_4892);
																										}
																										BgL_arg1937z00_2365 =
																											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4891))->BgL_outz00);
																									}
																									{	/* SawMill/bbv.scm 182 */
																										obj_t BgL_head1568z00_2369;

																										{	/* SawMill/bbv.scm 182 */
																											obj_t BgL_arg1945z00_2381;

																											{	/* SawMill/bbv.scm 168 */
																												BgL_rtl_insz00_bglt
																													BgL_i1183z00_3485;
																												BgL_i1183z00_3485 =
																													((BgL_rtl_insz00_bglt)
																													CAR
																													(BgL_succz00_2341));
																												{
																													BgL_rtl_inszf2bbvzf2_bglt
																														BgL_auxz00_4900;
																													{
																														obj_t
																															BgL_auxz00_4901;
																														{	/* SawMill/bbv.scm 168 */
																															BgL_objectz00_bglt
																																BgL_tmpz00_4902;
																															BgL_tmpz00_4902 =
																																(
																																(BgL_objectz00_bglt)
																																BgL_i1183z00_3485);
																															BgL_auxz00_4901 =
																																BGL_OBJECT_WIDENING
																																(BgL_tmpz00_4902);
																														}
																														BgL_auxz00_4900 =
																															(
																															(BgL_rtl_inszf2bbvzf2_bglt)
																															BgL_auxz00_4901);
																													}
																													BgL_arg1945z00_2381 =
																														(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4900))->BgL_inz00);
																												}
																											}
																											{	/* SawMill/bbv.scm 182 */
																												obj_t
																													BgL_res2432z00_3487;
																												BgL_res2432z00_3487 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1945z00_2381,
																													BNIL);
																												BgL_head1568z00_2369 =
																													BgL_res2432z00_3487;
																											}
																										}
																										{	/* SawMill/bbv.scm 182 */
																											obj_t BgL_g1571z00_2370;

																											BgL_g1571z00_2370 =
																												CDR(BgL_succz00_2341);
																											{
																												obj_t BgL_l1566z00_2372;
																												obj_t
																													BgL_tail1569z00_2373;
																												BgL_l1566z00_2372 =
																													BgL_g1571z00_2370;
																												BgL_tail1569z00_2373 =
																													BgL_head1568z00_2369;
																											BgL_zc3z04anonymousza31940ze3z87_2374:
																												if (NULLP
																													(BgL_l1566z00_2372))
																													{	/* SawMill/bbv.scm 182 */
																														BgL_arg1938z00_2366
																															=
																															BgL_head1568z00_2369;
																													}
																												else
																													{	/* SawMill/bbv.scm 182 */
																														obj_t
																															BgL_newtail1570z00_2376;
																														{	/* SawMill/bbv.scm 182 */
																															obj_t
																																BgL_arg1943z00_2378;
																															{	/* SawMill/bbv.scm 168 */
																																BgL_rtl_insz00_bglt
																																	BgL_i1183z00_3491;
																																BgL_i1183z00_3491
																																	=
																																	(
																																	(BgL_rtl_insz00_bglt)
																																	CAR(((obj_t)
																																			BgL_l1566z00_2372)));
																																{
																																	BgL_rtl_inszf2bbvzf2_bglt
																																		BgL_auxz00_4914;
																																	{
																																		obj_t
																																			BgL_auxz00_4915;
																																		{	/* SawMill/bbv.scm 168 */
																																			BgL_objectz00_bglt
																																				BgL_tmpz00_4916;
																																			BgL_tmpz00_4916
																																				=
																																				(
																																				(BgL_objectz00_bglt)
																																				BgL_i1183z00_3491);
																																			BgL_auxz00_4915
																																				=
																																				BGL_OBJECT_WIDENING
																																				(BgL_tmpz00_4916);
																																		}
																																		BgL_auxz00_4914
																																			=
																																			(
																																			(BgL_rtl_inszf2bbvzf2_bglt)
																																			BgL_auxz00_4915);
																																	}
																																	BgL_arg1943z00_2378
																																		=
																																		(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4914))->BgL_inz00);
																																}
																															}
																															{	/* SawMill/bbv.scm 182 */
																																obj_t
																																	BgL_res2434z00_3493;
																																BgL_res2434z00_3493
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1943z00_2378,
																																	BNIL);
																																BgL_newtail1570z00_2376
																																	=
																																	BgL_res2434z00_3493;
																															}
																														}
																														SET_CDR
																															(BgL_tail1569z00_2373,
																															BgL_newtail1570z00_2376);
																														{	/* SawMill/bbv.scm 182 */
																															obj_t
																																BgL_arg1942z00_2377;
																															BgL_arg1942z00_2377
																																=
																																CDR(((obj_t)
																																	BgL_l1566z00_2372));
																															{
																																obj_t
																																	BgL_tail1569z00_4926;
																																obj_t
																																	BgL_l1566z00_4925;
																																BgL_l1566z00_4925
																																	=
																																	BgL_arg1942z00_2377;
																																BgL_tail1569z00_4926
																																	=
																																	BgL_newtail1570z00_2376;
																																BgL_tail1569z00_2373
																																	=
																																	BgL_tail1569z00_4926;
																																BgL_l1566z00_2372
																																	=
																																	BgL_l1566z00_4925;
																																goto
																																	BgL_zc3z04anonymousza31940ze3z87_2374;
																															}
																														}
																													}
																											}
																										}
																									}
																									BgL_cellvalz00_4866 =
																										BBOOL
																										(BGl_regsetzd2unionza2z12z62zzsaw_regsetz00
																										(((BgL_regsetz00_bglt)
																												BgL_arg1937z00_2365),
																											BgL_arg1938z00_2366));
																								}
																							else
																								{	/* SawMill/bbv.scm 181 */
																									BgL_cellvalz00_4866 = BFALSE;
																								}
																						}
																					BgL_uz00_3909 =
																						MAKE_CELL(BgL_cellvalz00_4866);
																				}
																				{	/* SawMill/bbv.scm 186 */
																					obj_t BgL_arg1924z00_2348;

																					{
																						BgL_rtl_inszf2bbvzf2_bglt
																							BgL_auxz00_4930;
																						{
																							obj_t BgL_auxz00_4931;

																							{	/* SawMill/bbv.scm 185 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_4932;
																								BgL_tmpz00_4932 =
																									((BgL_objectz00_bglt)
																									BgL_i1188z00_2345);
																								BgL_auxz00_4931 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_4932);
																							}
																							BgL_auxz00_4930 =
																								((BgL_rtl_inszf2bbvzf2_bglt)
																								BgL_auxz00_4931);
																						}
																						BgL_arg1924z00_2348 =
																							(((BgL_rtl_inszf2bbvzf2_bglt)
																								COBJECT(BgL_auxz00_4930))->
																							BgL_outz00);
																					}
																					{	/* SawMill/bbv.scm 187 */
																						obj_t
																							BgL_zc3z04anonymousza31925ze3z87_3901;
																						BgL_zc3z04anonymousza31925ze3z87_3901
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza31925ze3ze5zzsaw_bbvz00,
																							(int) (((long) 1)),
																							(int) (((long) 2)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31925ze3z87_3901,
																							(int) (((long) 0)),
																							((obj_t) BgL_i1188z00_2345));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza31925ze3z87_3901,
																							(int) (((long) 1)),
																							((obj_t) BgL_uz00_3909));
																						BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
																							(BgL_zc3z04anonymousza31925ze3z87_3901,
																							((BgL_regsetz00_bglt)
																								BgL_arg1924z00_2348));
																				}}
																				{	/* SawMill/bbv.scm 190 */
																					obj_t BgL_arg1930z00_2357;
																					obj_t BgL_arg1931z00_2358;
																					obj_t BgL_arg1932z00_2359;

																					BgL_arg1930z00_2357 =
																						CDR(BgL_inssz00_2340);
																					BgL_arg1931z00_2358 =
																						CAR(BgL_inssz00_2340);
																					if (CBOOL(BgL_tz00_2342))
																						{	/* SawMill/bbv.scm 190 */
																							BgL_arg1932z00_2359 =
																								BgL_tz00_2342;
																						}
																					else
																						{	/* SawMill/bbv.scm 190 */
																							BgL_arg1932z00_2359 =
																								CELL_REF(BgL_uz00_3909);
																						}
																					{
																						obj_t BgL_tz00_4954;
																						obj_t BgL_succz00_4953;
																						obj_t BgL_inssz00_4952;

																						BgL_inssz00_4952 =
																							BgL_arg1930z00_2357;
																						BgL_succz00_4953 =
																							BgL_arg1931z00_2358;
																						BgL_tz00_4954 = BgL_arg1932z00_2359;
																						BgL_tz00_2342 = BgL_tz00_4954;
																						BgL_succz00_2341 = BgL_succz00_4953;
																						BgL_inssz00_2340 = BgL_inssz00_4952;
																						goto
																							BgL_zc3z04anonymousza31921ze3z87_2343;
																					}
																				}
																			}
																		}
																	else
																		{	/* SawMill/bbv.scm 176 */
																			BgL__ortest_1192z00_2311 = BgL_tz00_2342;
																		}
																}
															}
														}
														if (CBOOL(BgL__ortest_1192z00_2311))
															{	/* SawMill/bbv.scm 216 */
																BgL_arg1907z00_2310 = BgL__ortest_1192z00_2311;
															}
														else
															{	/* SawMill/bbv.scm 216 */
																BgL_arg1907z00_2310 = BgL_tz00_2305;
															}
													}
													{
														obj_t BgL_tz00_4958;
														obj_t BgL_bsz00_4957;

														BgL_bsz00_4957 = BgL_arg1906z00_2309;
														BgL_tz00_4958 = BgL_arg1907z00_2310;
														BgL_tz00_2305 = BgL_tz00_4958;
														BgL_bsz00_2304 = BgL_bsz00_4957;
														goto BgL_zc3z04anonymousza31903ze3z87_2306;
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



/* &<@anonymous:1925> */
	obj_t BGl_z62zc3z04anonymousza31925ze3ze5zzsaw_bbvz00(obj_t BgL_envz00_3902,
		obj_t BgL_rz00_3905)
	{
		{	/* SawMill/bbv.scm 186 */
			{	/* SawMill/bbv.scm 187 */
				BgL_rtl_insz00_bglt BgL_i1188z00_3903;
				obj_t BgL_uz00_3904;

				BgL_i1188z00_3903 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_3902, (int) (((long) 0))));
				BgL_uz00_3904 = PROCEDURE_REF(BgL_envz00_3902, (int) (((long) 1)));
				{	/* SawMill/bbv.scm 187 */
					bool_t BgL_test2613z00_4964;

					{	/* SawMill/bbv.scm 187 */
						obj_t BgL_arg1929z00_3976;

						{
							BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4965;

							{
								obj_t BgL_auxz00_4966;

								{	/* SawMill/bbv.scm 187 */
									BgL_objectz00_bglt BgL_tmpz00_4967;

									BgL_tmpz00_4967 = ((BgL_objectz00_bglt) BgL_i1188z00_3903);
									BgL_auxz00_4966 = BGL_OBJECT_WIDENING(BgL_tmpz00_4967);
								}
								BgL_auxz00_4965 = ((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4966);
							}
							BgL_arg1929z00_3976 =
								(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4965))->
								BgL_defz00);
						}
						BgL_test2613z00_4964 =
							BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
							((BgL_rtl_regz00_bglt) BgL_rz00_3905),
							((BgL_regsetz00_bglt) BgL_arg1929z00_3976));
					}
					if (BgL_test2613z00_4964)
						{	/* SawMill/bbv.scm 187 */
							return BFALSE;
						}
					else
						{	/* SawMill/bbv.scm 188 */
							obj_t BgL_auxz00_3977;

							{	/* SawMill/bbv.scm 188 */
								bool_t BgL__ortest_1189z00_3978;

								{	/* SawMill/bbv.scm 188 */
									obj_t BgL_arg1928z00_3979;

									{
										BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_4975;

										{
											obj_t BgL_auxz00_4976;

											{	/* SawMill/bbv.scm 188 */
												BgL_objectz00_bglt BgL_tmpz00_4977;

												BgL_tmpz00_4977 =
													((BgL_objectz00_bglt) BgL_i1188z00_3903);
												BgL_auxz00_4976 = BGL_OBJECT_WIDENING(BgL_tmpz00_4977);
											}
											BgL_auxz00_4975 =
												((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_4976);
										}
										BgL_arg1928z00_3979 =
											(((BgL_rtl_inszf2bbvzf2_bglt) COBJECT(BgL_auxz00_4975))->
											BgL_inz00);
									}
									BgL__ortest_1189z00_3978 =
										BGl_regsetzd2addz12zc0zzsaw_regsetz00(
										((BgL_regsetz00_bglt) BgL_arg1928z00_3979),
										((BgL_rtl_regz00_bglt) BgL_rz00_3905));
								}
								if (BgL__ortest_1189z00_3978)
									{	/* SawMill/bbv.scm 188 */
										BgL_auxz00_3977 = BBOOL(BgL__ortest_1189z00_3978);
									}
								else
									{	/* SawMill/bbv.scm 188 */
										BgL_auxz00_3977 = CELL_REF(BgL_uz00_3904);
									}
							}
							return CELL_SET(BgL_uz00_3904, BgL_auxz00_3977);
						}
				}
			}
		}

	}



/* merge! */
	BgL_blockz00_bglt BGl_mergez12z12zzsaw_bbvz00(obj_t BgL_markz00_89,
		BgL_blockz00_bglt BgL_bz00_90)
	{
		{	/* SawMill/bbv.scm 223 */
			{	/* SawMill/bbv.scm 225 */
				BgL_blockz00_bglt BgL_i1194z00_2402;

				{
					obj_t BgL_auxz00_4987;

					{
						BgL_blocksz00_bglt BgL_auxz00_4988;

						{
							obj_t BgL_auxz00_4989;

							{	/* SawMill/bbv.scm 226 */
								BgL_objectz00_bglt BgL_tmpz00_4990;

								BgL_tmpz00_4990 = ((BgL_objectz00_bglt) BgL_bz00_90);
								BgL_auxz00_4989 = BGL_OBJECT_WIDENING(BgL_tmpz00_4990);
							}
							BgL_auxz00_4988 = ((BgL_blocksz00_bglt) BgL_auxz00_4989);
						}
						BgL_auxz00_4987 =
							(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_4988))->
							BgL_z52parentz52);
					}
					BgL_i1194z00_2402 = ((BgL_blockz00_bglt) BgL_auxz00_4987);
				}
				{	/* SawMill/bbv.scm 226 */
					bool_t BgL_test2615z00_4996;

					{	/* SawMill/bbv.scm 226 */
						long BgL_arg2028z00_2502;

						{
							BgL_blockvz00_bglt BgL_auxz00_4997;

							{
								obj_t BgL_auxz00_4998;

								{	/* SawMill/bbv.scm 226 */
									BgL_objectz00_bglt BgL_tmpz00_4999;

									BgL_tmpz00_4999 = ((BgL_objectz00_bglt) BgL_i1194z00_2402);
									BgL_auxz00_4998 = BGL_OBJECT_WIDENING(BgL_tmpz00_4999);
								}
								BgL_auxz00_4997 = ((BgL_blockvz00_bglt) BgL_auxz00_4998);
							}
							BgL_arg2028z00_2502 =
								(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_4997))->
								BgL_z52markz52);
						}
						BgL_test2615z00_4996 =
							((long) CINT(BgL_markz00_89) == BgL_arg2028z00_2502);
					}
					if (BgL_test2615z00_4996)
						{	/* SawMill/bbv.scm 226 */
							((bool_t) 0);
						}
					else
						{	/* SawMill/bbv.scm 226 */
							{
								BgL_blockvz00_bglt BgL_auxz00_5006;

								{
									obj_t BgL_auxz00_5007;

									{	/* SawMill/bbv.scm 227 */
										BgL_objectz00_bglt BgL_tmpz00_5008;

										BgL_tmpz00_5008 = ((BgL_objectz00_bglt) BgL_i1194z00_2402);
										BgL_auxz00_5007 = BGL_OBJECT_WIDENING(BgL_tmpz00_5008);
									}
									BgL_auxz00_5006 = ((BgL_blockvz00_bglt) BgL_auxz00_5007);
								}
								((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5006))->
										BgL_z52markz52) =
									((long) (long) CINT(BgL_markz00_89)), BUNSPEC);
							}
							{	/* SawMill/bbv.scm 230 */
								bool_t BgL_test2616z00_5014;

								{	/* SawMill/bbv.scm 230 */
									bool_t BgL_test2617z00_5015;

									{	/* SawMill/bbv.scm 230 */
										obj_t BgL_arg2026z00_2501;

										{
											BgL_blockvz00_bglt BgL_auxz00_5016;

											{
												obj_t BgL_auxz00_5017;

												{	/* SawMill/bbv.scm 230 */
													BgL_objectz00_bglt BgL_tmpz00_5018;

													BgL_tmpz00_5018 =
														((BgL_objectz00_bglt) BgL_i1194z00_2402);
													BgL_auxz00_5017 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5018);
												}
												BgL_auxz00_5016 =
													((BgL_blockvz00_bglt) BgL_auxz00_5017);
											}
											BgL_arg2026z00_2501 =
												(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5016))->
												BgL_versionsz00);
										}
										BgL_test2617z00_5015 = NULLP(BgL_arg2026z00_2501);
									}
									if (BgL_test2617z00_5015)
										{	/* SawMill/bbv.scm 230 */
											BgL_test2616z00_5014 = ((bool_t) 1);
										}
									else
										{	/* SawMill/bbv.scm 230 */
											obj_t BgL_arg2022z00_2499;

											{	/* SawMill/bbv.scm 230 */
												obj_t BgL_arg2023z00_2500;

												{
													BgL_blockvz00_bglt BgL_auxz00_5024;

													{
														obj_t BgL_auxz00_5025;

														{	/* SawMill/bbv.scm 230 */
															BgL_objectz00_bglt BgL_tmpz00_5026;

															BgL_tmpz00_5026 =
																((BgL_objectz00_bglt) BgL_i1194z00_2402);
															BgL_auxz00_5025 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5026);
														}
														BgL_auxz00_5024 =
															((BgL_blockvz00_bglt) BgL_auxz00_5025);
													}
													BgL_arg2023z00_2500 =
														(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5024))->
														BgL_versionsz00);
												}
												BgL_arg2022z00_2499 =
													CDR(((obj_t) BgL_arg2023z00_2500));
											}
											BgL_test2616z00_5014 = NULLP(BgL_arg2022z00_2499);
										}
								}
								if (BgL_test2616z00_5014)
									{	/* SawMill/bbv.scm 231 */
										obj_t BgL_g1581z00_2411;

										BgL_g1581z00_2411 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_90)))->BgL_succsz00);
										{
											obj_t BgL_l1579z00_2413;

											BgL_l1579z00_2413 = BgL_g1581z00_2411;
										BgL_zc3z04anonymousza31962ze3z87_2414:
											if (PAIRP(BgL_l1579z00_2413))
												{	/* SawMill/bbv.scm 231 */
													{	/* SawMill/bbv.scm 231 */
														obj_t BgL_sz00_2416;

														BgL_sz00_2416 = CAR(BgL_l1579z00_2413);
														BGl_mergez12z12zzsaw_bbvz00(BgL_markz00_89,
															((BgL_blockz00_bglt) BgL_sz00_2416));
													}
													{
														obj_t BgL_l1579z00_5041;

														BgL_l1579z00_5041 = CDR(BgL_l1579z00_2413);
														BgL_l1579z00_2413 = BgL_l1579z00_5041;
														goto BgL_zc3z04anonymousza31962ze3z87_2414;
													}
												}
											else
												{	/* SawMill/bbv.scm 231 */
													((bool_t) 1);
												}
										}
									}
								else
									{	/* SawMill/bbv.scm 232 */
										obj_t BgL_ksz00_2419;

										{	/* SawMill/bbv.scm 232 */
											obj_t BgL_arg2008z00_2475;

											{	/* SawMill/bbv.scm 234 */
												obj_t BgL_l1582z00_2481;

												{
													BgL_blockvz00_bglt BgL_auxz00_5043;

													{
														obj_t BgL_auxz00_5044;

														{	/* SawMill/bbv.scm 234 */
															BgL_objectz00_bglt BgL_tmpz00_5045;

															BgL_tmpz00_5045 =
																((BgL_objectz00_bglt) BgL_i1194z00_2402);
															BgL_auxz00_5044 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5045);
														}
														BgL_auxz00_5043 =
															((BgL_blockvz00_bglt) BgL_auxz00_5044);
													}
													BgL_l1582z00_2481 =
														(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5043))->
														BgL_versionsz00);
												}
												if (NULLP(BgL_l1582z00_2481))
													{	/* SawMill/bbv.scm 234 */
														BgL_arg2008z00_2475 = BNIL;
													}
												else
													{	/* SawMill/bbv.scm 234 */
														obj_t BgL_head1584z00_2483;

														{	/* SawMill/bbv.scm 234 */
															obj_t BgL_res2449z00_3543;

															BgL_res2449z00_3543 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1584z00_2483 = BgL_res2449z00_3543;
														}
														{
															obj_t BgL_l1582z00_2485;
															obj_t BgL_tail1585z00_2486;

															BgL_l1582z00_2485 = BgL_l1582z00_2481;
															BgL_tail1585z00_2486 = BgL_head1584z00_2483;
														BgL_zc3z04anonymousza32013ze3z87_2487:
															if (NULLP(BgL_l1582z00_2485))
																{	/* SawMill/bbv.scm 234 */
																	BgL_arg2008z00_2475 =
																		CDR(BgL_head1584z00_2483);
																}
															else
																{	/* SawMill/bbv.scm 234 */
																	obj_t BgL_newtail1586z00_2489;

																	{	/* SawMill/bbv.scm 234 */
																		obj_t BgL_arg2017z00_2491;

																		{	/* SawMill/bbv.scm 234 */
																			obj_t BgL_vz00_2492;

																			BgL_vz00_2492 =
																				CAR(((obj_t) BgL_l1582z00_2485));
																			{	/* SawMill/bbv.scm 235 */
																				obj_t BgL_arg2018z00_2493;
																				obj_t BgL_arg2020z00_2494;

																				{	/* SawMill/bbv.scm 235 */
																					obj_t BgL_arg2021z00_2495;

																					BgL_arg2021z00_2495 =
																						CDR(((obj_t) BgL_vz00_2492));
																					BgL_arg2018z00_2493 =
																						BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2
																						(BgL_arg2021z00_2495);
																				}
																				BgL_arg2020z00_2494 =
																					CDR(((obj_t) BgL_vz00_2492));
																				BgL_arg2017z00_2491 =
																					MAKE_YOUNG_PAIR(BgL_arg2018z00_2493,
																					BgL_arg2020z00_2494);
																			}
																		}
																		{	/* SawMill/bbv.scm 234 */
																			obj_t BgL_res2451z00_3549;

																			BgL_res2451z00_3549 =
																				MAKE_YOUNG_PAIR(BgL_arg2017z00_2491,
																				BNIL);
																			BgL_newtail1586z00_2489 =
																				BgL_res2451z00_3549;
																		}
																	}
																	SET_CDR(BgL_tail1585z00_2486,
																		BgL_newtail1586z00_2489);
																	{	/* SawMill/bbv.scm 234 */
																		obj_t BgL_arg2016z00_2490;

																		BgL_arg2016z00_2490 =
																			CDR(((obj_t) BgL_l1582z00_2485));
																		{
																			obj_t BgL_tail1585z00_5069;
																			obj_t BgL_l1582z00_5068;

																			BgL_l1582z00_5068 = BgL_arg2016z00_2490;
																			BgL_tail1585z00_5069 =
																				BgL_newtail1586z00_2489;
																			BgL_tail1585z00_2486 =
																				BgL_tail1585z00_5069;
																			BgL_l1582z00_2485 = BgL_l1582z00_5068;
																			goto
																				BgL_zc3z04anonymousza32013ze3z87_2487;
																		}
																	}
																}
														}
													}
											}
											BgL_ksz00_2419 =
												BGl_sortz00zz__r4_vectors_6_8z00
												(BGl_proc2511z00zzsaw_bbvz00, BgL_arg2008z00_2475);
										}
										{
											obj_t BgL_ksz00_2421;

											BgL_ksz00_2421 = BgL_ksz00_2419;
										BgL_zc3z04anonymousza31965ze3z87_2422:
											if (NULLP(CDR(((obj_t) BgL_ksz00_2421))))
												{	/* SawMill/bbv.scm 244 */
													obj_t BgL_g1589z00_2425;

													BgL_g1589z00_2425 =
														(((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_bz00_90)))->
														BgL_succsz00);
													{
														obj_t BgL_l1587z00_2427;

														BgL_l1587z00_2427 = BgL_g1589z00_2425;
													BgL_zc3z04anonymousza31968ze3z87_2428:
														if (PAIRP(BgL_l1587z00_2427))
															{	/* SawMill/bbv.scm 244 */
																{	/* SawMill/bbv.scm 244 */
																	obj_t BgL_sz00_2430;

																	BgL_sz00_2430 = CAR(BgL_l1587z00_2427);
																	BGl_mergez12z12zzsaw_bbvz00(BgL_markz00_89,
																		((BgL_blockz00_bglt) BgL_sz00_2430));
																}
																{
																	obj_t BgL_l1587z00_5082;

																	BgL_l1587z00_5082 = CDR(BgL_l1587z00_2427);
																	BgL_l1587z00_2427 = BgL_l1587z00_5082;
																	goto BgL_zc3z04anonymousza31968ze3z87_2428;
																}
															}
														else
															{	/* SawMill/bbv.scm 244 */
																((bool_t) 1);
															}
													}
												}
											else
												{	/* SawMill/bbv.scm 245 */
													bool_t BgL_test2623z00_5084;

													{	/* SawMill/bbv.scm 245 */
														long BgL_arg2003z00_2470;

														{	/* SawMill/bbv.scm 245 */
															BgL_blockz00_bglt BgL_oz00_3568;

															{	/* SawMill/bbv.scm 245 */
																obj_t BgL_pairz00_3567;

																BgL_pairz00_3567 =
																	CAR(((obj_t) BgL_ksz00_2421));
																BgL_oz00_3568 =
																	((BgL_blockz00_bglt) CDR(BgL_pairz00_3567));
															}
															{
																BgL_blocksz00_bglt BgL_auxz00_5089;

																{
																	obj_t BgL_auxz00_5090;

																	{	/* SawMill/bbv.scm 245 */
																		BgL_objectz00_bglt BgL_tmpz00_5091;

																		BgL_tmpz00_5091 =
																			((BgL_objectz00_bglt) BgL_oz00_3568);
																		BgL_auxz00_5090 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5091);
																	}
																	BgL_auxz00_5089 =
																		((BgL_blocksz00_bglt) BgL_auxz00_5090);
																}
																BgL_arg2003z00_2470 =
																	(((BgL_blocksz00_bglt)
																		COBJECT(BgL_auxz00_5089))->BgL_z52markz52);
														}}
														BgL_test2623z00_5084 =
															(BgL_arg2003z00_2470 >=
															(long) CINT(BgL_markz00_89));
													}
													if (BgL_test2623z00_5084)
														{	/* SawMill/bbv.scm 246 */
															obj_t BgL_arg1974z00_2436;

															BgL_arg1974z00_2436 =
																CDR(((obj_t) BgL_ksz00_2421));
															{
																obj_t BgL_ksz00_5100;

																BgL_ksz00_5100 = BgL_arg1974z00_2436;
																BgL_ksz00_2421 = BgL_ksz00_5100;
																goto BgL_zc3z04anonymousza31965ze3z87_2422;
															}
														}
													else
														{	/* SawMill/bbv.scm 248 */
															obj_t BgL_kz00_2437;

															BgL_kz00_2437 = CAR(((obj_t) BgL_ksz00_2421));
															{	/* SawMill/bbv.scm 249 */
																obj_t BgL_g1195z00_2438;

																BgL_g1195z00_2438 =
																	CDR(((obj_t) BgL_ksz00_2421));
																{
																	obj_t BgL_lsz00_2440;

																	BgL_lsz00_2440 = BgL_g1195z00_2438;
																BgL_zc3z04anonymousza31975ze3z87_2441:
																	if (NULLP(BgL_lsz00_2440))
																		{	/* SawMill/bbv.scm 252 */
																			obj_t BgL_arg1977z00_2443;

																			BgL_arg1977z00_2443 =
																				CDR(((obj_t) BgL_ksz00_2421));
																			{
																				obj_t BgL_ksz00_5109;

																				BgL_ksz00_5109 = BgL_arg1977z00_2443;
																				BgL_ksz00_2421 = BgL_ksz00_5109;
																				goto
																					BgL_zc3z04anonymousza31965ze3z87_2422;
																			}
																		}
																	else
																		{	/* SawMill/bbv.scm 253 */
																			bool_t BgL_test2625z00_5110;

																			{	/* SawMill/bbv.scm 253 */
																				bool_t BgL_test2626z00_5111;

																				{	/* SawMill/bbv.scm 253 */
																					long BgL_tmpz00_5112;

																					{	/* SawMill/bbv.scm 253 */
																						obj_t BgL_pairz00_3582;

																						BgL_pairz00_3582 =
																							CAR(((obj_t) BgL_lsz00_2440));
																						BgL_tmpz00_5112 =
																							(long)
																							CINT(CAR(BgL_pairz00_3582));
																					}
																					BgL_test2626z00_5111 =
																						(
																						(long) CINT(CAR(
																								((obj_t) BgL_kz00_2437))) ==
																						BgL_tmpz00_5112);
																				}
																				if (BgL_test2626z00_5111)
																					{	/* SawMill/bbv.scm 254 */
																						bool_t BgL_test2627z00_5121;

																						{	/* SawMill/bbv.scm 254 */
																							obj_t BgL_tmpz00_5122;

																							{	/* SawMill/bbv.scm 254 */
																								obj_t BgL_pairz00_3590;

																								BgL_pairz00_3590 =
																									CAR(((obj_t) BgL_lsz00_2440));
																								BgL_tmpz00_5122 =
																									CDR(BgL_pairz00_3590);
																							}
																							BgL_test2627z00_5121 =
																								(CDR(
																									((obj_t) BgL_kz00_2437)) ==
																								BgL_tmpz00_5122);
																						}
																						if (BgL_test2627z00_5121)
																							{	/* SawMill/bbv.scm 254 */
																								BgL_test2625z00_5110 =
																									((bool_t) 0);
																							}
																						else
																							{	/* SawMill/bbv.scm 255 */
																								obj_t BgL_arg1997z00_2463;
																								obj_t BgL_arg1998z00_2464;

																								BgL_arg1997z00_2463 =
																									CDR(((obj_t) BgL_kz00_2437));
																								{	/* SawMill/bbv.scm 255 */
																									obj_t BgL_pairz00_3595;

																									BgL_pairz00_3595 =
																										CAR(
																										((obj_t) BgL_lsz00_2440));
																									BgL_arg1998z00_2464 =
																										CDR(BgL_pairz00_3595);
																								}
																								BgL_test2625z00_5110 =
																									CBOOL
																									(BGl_mergezf3zf3zzsaw_bbvz00((
																											(BgL_blockz00_bglt)
																											BgL_arg1997z00_2463),
																										((BgL_blockz00_bglt)
																											BgL_arg1998z00_2464),
																										BNIL));
																							}
																					}
																				else
																					{	/* SawMill/bbv.scm 253 */
																						BgL_test2625z00_5110 = ((bool_t) 0);
																					}
																			}
																			if (BgL_test2625z00_5110)
																				{	/* SawMill/bbv.scm 253 */
																					{	/* SawMill/bbv.scm 256 */
																						obj_t BgL_arg1992z00_2457;
																						obj_t BgL_arg1993z00_2458;

																						BgL_arg1992z00_2457 =
																							CDR(((obj_t) BgL_kz00_2437));
																						{	/* SawMill/bbv.scm 256 */
																							obj_t BgL_pairz00_3600;

																							BgL_pairz00_3600 =
																								CAR(((obj_t) BgL_lsz00_2440));
																							BgL_arg1993z00_2458 =
																								CDR(BgL_pairz00_3600);
																						}
																						BGl_mergezd2blockz12zc0zzsaw_bbvz00
																							(BgL_markz00_89,
																							BgL_arg1992z00_2457,
																							BgL_arg1993z00_2458);
																					}
																					{	/* SawMill/bbv.scm 257 */
																						obj_t BgL_arg1995z00_2459;

																						BgL_arg1995z00_2459 =
																							CDR(((obj_t) BgL_lsz00_2440));
																						{
																							obj_t BgL_lsz00_5146;

																							BgL_lsz00_5146 =
																								BgL_arg1995z00_2459;
																							BgL_lsz00_2440 = BgL_lsz00_5146;
																							goto
																								BgL_zc3z04anonymousza31975ze3z87_2441;
																						}
																					}
																				}
																			else
																				{	/* SawMill/bbv.scm 259 */
																					obj_t BgL_arg1996z00_2460;

																					BgL_arg1996z00_2460 =
																						CDR(((obj_t) BgL_lsz00_2440));
																					{
																						obj_t BgL_lsz00_5149;

																						BgL_lsz00_5149 =
																							BgL_arg1996z00_2460;
																						BgL_lsz00_2440 = BgL_lsz00_5149;
																						goto
																							BgL_zc3z04anonymousza31975ze3z87_2441;
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
			return BgL_bz00_90;
		}

	}



/* &<@anonymous:2009> */
	obj_t BGl_z62zc3z04anonymousza32009ze3ze5zzsaw_bbvz00(obj_t BgL_envz00_3912,
		obj_t BgL_v1z00_3913, obj_t BgL_v2z00_3914)
	{
		{	/* SawMill/bbv.scm 232 */
			return
				BBOOL(
				((long) CINT(CAR(
							((obj_t) BgL_v1z00_3913))) <=
					(long) CINT(CAR(((obj_t) BgL_v2z00_3914)))));
		}

	}



/* merge-block! */
	obj_t BGl_mergezd2blockz12zc0zzsaw_bbvz00(obj_t BgL_markz00_91,
		obj_t BgL_bz00_92, obj_t BgL_byz00_93)
	{
		{	/* SawMill/bbv.scm 265 */
			{	/* SawMill/bbv.scm 269 */
				obj_t BgL_g1196z00_2503;
				obj_t BgL_g1197z00_2504;

				{	/* SawMill/bbv.scm 269 */
					obj_t BgL_list2054z00_2539;

					BgL_list2054z00_2539 = MAKE_YOUNG_PAIR(BgL_byz00_93, BNIL);
					BgL_g1196z00_2503 = BgL_list2054z00_2539;
				}
				{	/* SawMill/bbv.scm 270 */
					obj_t BgL_list2055z00_2540;

					BgL_list2055z00_2540 = MAKE_YOUNG_PAIR(BgL_bz00_92, BNIL);
					BgL_g1197z00_2504 = BgL_list2055z00_2540;
				}
				{
					obj_t BgL_byz00_2506;
					obj_t BgL_bxz00_2507;

					BgL_byz00_2506 = BgL_g1196z00_2503;
					BgL_bxz00_2507 = BgL_g1197z00_2504;
				BgL_zc3z04anonymousza32029ze3z87_2508:
					if (NULLP(BgL_byz00_2506))
						{	/* SawMill/bbv.scm 272 */
							return BgL_bz00_92;
						}
					else
						{	/* SawMill/bbv.scm 274 */
							bool_t BgL_test2629z00_5162;

							{	/* SawMill/bbv.scm 274 */
								long BgL_arg2051z00_2536;

								{	/* SawMill/bbv.scm 274 */
									BgL_blockz00_bglt BgL_oz00_3607;

									BgL_oz00_3607 = ((BgL_blockz00_bglt) CAR(BgL_byz00_2506));
									{
										BgL_blocksz00_bglt BgL_auxz00_5165;

										{
											obj_t BgL_auxz00_5166;

											{	/* SawMill/bbv.scm 274 */
												BgL_objectz00_bglt BgL_tmpz00_5167;

												BgL_tmpz00_5167 = ((BgL_objectz00_bglt) BgL_oz00_3607);
												BgL_auxz00_5166 = BGL_OBJECT_WIDENING(BgL_tmpz00_5167);
											}
											BgL_auxz00_5165 = ((BgL_blocksz00_bglt) BgL_auxz00_5166);
										}
										BgL_arg2051z00_2536 =
											(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5165))->
											BgL_z52markz52);
								}}
								BgL_test2629z00_5162 =
									(BgL_arg2051z00_2536 == (long) CINT(BgL_markz00_91));
							}
							if (BgL_test2629z00_5162)
								{	/* SawMill/bbv.scm 274 */
									return BgL_bz00_92;
								}
							else
								{	/* SawMill/bbv.scm 274 */
									if ((CAR(BgL_byz00_2506) == CAR(((obj_t) BgL_bxz00_2507))))
										{	/* SawMill/bbv.scm 276 */
											return BgL_bz00_92;
										}
									else
										{	/* SawMill/bbv.scm 279 */
											BgL_blockz00_bglt BgL_i1198z00_2516;

											BgL_i1198z00_2516 =
												((BgL_blockz00_bglt) CAR(BgL_byz00_2506));
											{
												BgL_blocksz00_bglt BgL_auxz00_5181;

												{
													obj_t BgL_auxz00_5182;

													{	/* SawMill/bbv.scm 280 */
														BgL_objectz00_bglt BgL_tmpz00_5183;

														BgL_tmpz00_5183 =
															((BgL_objectz00_bglt) BgL_i1198z00_2516);
														BgL_auxz00_5182 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5183);
													}
													BgL_auxz00_5181 =
														((BgL_blocksz00_bglt) BgL_auxz00_5182);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5181))->
														BgL_z52markz52) =
													((long) (long) CINT(BgL_markz00_91)), BUNSPEC);
											}
											{	/* SawMill/bbv.scm 281 */
												obj_t BgL_g1592z00_2517;

												BgL_g1592z00_2517 =
													(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt) BgL_i1198z00_2516)))->
													BgL_predsz00);
												{
													obj_t BgL_l1590z00_2519;

													BgL_l1590z00_2519 = BgL_g1592z00_2517;
												BgL_zc3z04anonymousza32038ze3z87_2520:
													if (PAIRP(BgL_l1590z00_2519))
														{	/* SawMill/bbv.scm 281 */
															{	/* SawMill/bbv.scm 282 */
																obj_t BgL_dz00_2522;

																BgL_dz00_2522 = CAR(BgL_l1590z00_2519);
																{	/* SawMill/bbv.scm 283 */
																	bool_t BgL_test2632z00_5194;

																	{	/* SawMill/bbv.scm 283 */
																		long BgL_arg2045z00_2528;

																		{
																			BgL_blocksz00_bglt BgL_auxz00_5195;

																			{
																				obj_t BgL_auxz00_5196;

																				{	/* SawMill/bbv.scm 283 */
																					BgL_objectz00_bglt BgL_tmpz00_5197;

																					BgL_tmpz00_5197 =
																						((BgL_objectz00_bglt)
																						((BgL_blockz00_bglt)
																							BgL_dz00_2522));
																					BgL_auxz00_5196 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_5197);
																				}
																				BgL_auxz00_5195 =
																					((BgL_blocksz00_bglt)
																					BgL_auxz00_5196);
																			}
																			BgL_arg2045z00_2528 =
																				(((BgL_blocksz00_bglt)
																					COBJECT(BgL_auxz00_5195))->
																				BgL_z52markz52);
																		}
																		BgL_test2632z00_5194 =
																			(
																			(long) CINT(BgL_markz00_91) ==
																			BgL_arg2045z00_2528);
																	}
																	if (BgL_test2632z00_5194)
																		{	/* SawMill/bbv.scm 283 */
																			BFALSE;
																		}
																	else
																		{	/* SawMill/bbv.scm 284 */
																			obj_t BgL_arg2043z00_2526;
																			obj_t BgL_arg2044z00_2527;

																			BgL_arg2043z00_2526 =
																				CAR(((obj_t) BgL_byz00_2506));
																			BgL_arg2044z00_2527 =
																				CAR(((obj_t) BgL_bxz00_2507));
																			BGl_redirectzd2blockz12zc0zzsaw_bbvzd2utilszd2
																				(((BgL_blockz00_bglt) BgL_dz00_2522),
																				((BgL_blockz00_bglt)
																					BgL_arg2043z00_2526),
																				((BgL_blockz00_bglt)
																					BgL_arg2044z00_2527));
																		}
																}
															}
															{
																obj_t BgL_l1590z00_5213;

																BgL_l1590z00_5213 = CDR(BgL_l1590z00_2519);
																BgL_l1590z00_2519 = BgL_l1590z00_5213;
																goto BgL_zc3z04anonymousza32038ze3z87_2520;
															}
														}
													else
														{	/* SawMill/bbv.scm 281 */
															((bool_t) 1);
														}
												}
											}
											{	/* SawMill/bbv.scm 286 */
												BgL_blockz00_bglt BgL_i1200z00_2531;

												BgL_i1200z00_2531 =
													((BgL_blockz00_bglt) CAR(((obj_t) BgL_bxz00_2507)));
												{	/* SawMill/bbv.scm 287 */
													obj_t BgL_arg2047z00_2532;
													obj_t BgL_arg2048z00_2533;

													BgL_arg2047z00_2532 =
														(((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_i1198z00_2516)))->
														BgL_succsz00);
													BgL_arg2048z00_2533 =
														(((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																	BgL_i1200z00_2531)))->BgL_succsz00);
													{
														obj_t BgL_bxz00_5223;
														obj_t BgL_byz00_5222;

														BgL_byz00_5222 = BgL_arg2047z00_2532;
														BgL_bxz00_5223 = BgL_arg2048z00_2533;
														BgL_bxz00_2507 = BgL_bxz00_5223;
														BgL_byz00_2506 = BgL_byz00_5222;
														goto BgL_zc3z04anonymousza32029ze3z87_2508;
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



/* merge? */
	obj_t BGl_mergezf3zf3zzsaw_bbvz00(BgL_blockz00_bglt BgL_bxz00_94,
		BgL_blockz00_bglt BgL_byz00_95, obj_t BgL_stackz00_96)
	{
		{	/* SawMill/bbv.scm 294 */
			if ((((obj_t) BgL_bxz00_94) == ((obj_t) BgL_byz00_95)))
				{	/* SawMill/bbv.scm 298 */
					return BTRUE;
				}
			else
				{	/* SawMill/bbv.scm 300 */
					bool_t BgL_test2634z00_5228;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								((obj_t) BgL_bxz00_94), BgL_stackz00_96)))
						{	/* SawMill/bbv.scm 300 */
							BgL_test2634z00_5228 =
								CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
									((obj_t) BgL_byz00_95), BgL_stackz00_96));
						}
					else
						{	/* SawMill/bbv.scm 300 */
							BgL_test2634z00_5228 = ((bool_t) 0);
						}
					if (BgL_test2634z00_5228)
						{	/* SawMill/bbv.scm 300 */
							return BTRUE;
						}
					else
						{	/* SawMill/bbv.scm 302 */
							bool_t BgL_test2636z00_5236;

							{	/* SawMill/bbv.scm 302 */
								obj_t BgL_arg2112z00_2604;
								obj_t BgL_arg2114z00_2605;

								BgL_arg2112z00_2604 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t) BgL_bxz00_94));
								BgL_arg2114z00_2605 =
									BGl_bbvzd2hashzd2zzsaw_bbvzd2typeszd2(((obj_t) BgL_byz00_95));
								BgL_test2636z00_5236 =
									(
									(long) CINT(BgL_arg2112z00_2604) ==
									(long) CINT(BgL_arg2114z00_2605));
							}
							if (BgL_test2636z00_5236)
								{	/* SawMill/bbv.scm 302 */
									if (BGl_bbvzd2equalzf3z21zzsaw_bbvzd2typeszd2(
											((obj_t) BgL_bxz00_94), ((obj_t) BgL_byz00_95)))
										{	/* SawMill/bbv.scm 306 */
											bool_t BgL_test2638z00_5248;

											{	/* SawMill/bbv.scm 306 */
												bool_t BgL_test2639z00_5249;

												{	/* SawMill/bbv.scm 306 */
													obj_t BgL_arg2111z00_2603;

													{
														BgL_blocksz00_bglt BgL_auxz00_5250;

														{
															obj_t BgL_auxz00_5251;

															{	/* SawMill/bbv.scm 306 */
																BgL_objectz00_bglt BgL_tmpz00_5252;

																BgL_tmpz00_5252 =
																	((BgL_objectz00_bglt) BgL_bxz00_94);
																BgL_auxz00_5251 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5252);
															}
															BgL_auxz00_5250 =
																((BgL_blocksz00_bglt) BgL_auxz00_5251);
														}
														BgL_arg2111z00_2603 =
															(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5250))->
															BgL_z52blacklistz52);
													}
													BgL_test2639z00_5249 =
														(BgL_arg2111z00_2603 == CNST_TABLE_REF(((long) 0)));
												}
												if (BgL_test2639z00_5249)
													{	/* SawMill/bbv.scm 306 */
														BgL_test2638z00_5248 = ((bool_t) 1);
													}
												else
													{	/* SawMill/bbv.scm 306 */
														obj_t BgL_arg2110z00_2602;

														{
															BgL_blocksz00_bglt BgL_auxz00_5259;

															{
																obj_t BgL_auxz00_5260;

																{	/* SawMill/bbv.scm 306 */
																	BgL_objectz00_bglt BgL_tmpz00_5261;

																	BgL_tmpz00_5261 =
																		((BgL_objectz00_bglt) BgL_byz00_95);
																	BgL_auxz00_5260 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5261);
																}
																BgL_auxz00_5259 =
																	((BgL_blocksz00_bglt) BgL_auxz00_5260);
															}
															BgL_arg2110z00_2602 =
																(((BgL_blocksz00_bglt)
																	COBJECT(BgL_auxz00_5259))->
																BgL_z52blacklistz52);
														}
														BgL_test2638z00_5248 =
															(BgL_arg2110z00_2602 ==
															CNST_TABLE_REF(((long) 0)));
											}}
											if (BgL_test2638z00_5248)
												{	/* SawMill/bbv.scm 306 */
													return BFALSE;
												}
											else
												{	/* SawMill/bbv.scm 308 */
													bool_t BgL_test2640z00_5268;

													{	/* SawMill/bbv.scm 308 */
														bool_t BgL_test2641z00_5269;

														{	/* SawMill/bbv.scm 308 */
															obj_t BgL_arg2109z00_2600;

															{
																BgL_blocksz00_bglt BgL_auxz00_5270;

																{
																	obj_t BgL_auxz00_5271;

																	{	/* SawMill/bbv.scm 308 */
																		BgL_objectz00_bglt BgL_tmpz00_5272;

																		BgL_tmpz00_5272 =
																			((BgL_objectz00_bglt) BgL_byz00_95);
																		BgL_auxz00_5271 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5272);
																	}
																	BgL_auxz00_5270 =
																		((BgL_blocksz00_bglt) BgL_auxz00_5271);
																}
																BgL_arg2109z00_2600 =
																	(((BgL_blocksz00_bglt)
																		COBJECT(BgL_auxz00_5270))->
																	BgL_z52blacklistz52);
															}
															BgL_test2641z00_5269 =
																CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
																	((obj_t) BgL_bxz00_94), BgL_arg2109z00_2600));
														}
														if (BgL_test2641z00_5269)
															{	/* SawMill/bbv.scm 308 */
																BgL_test2640z00_5268 = ((bool_t) 1);
															}
														else
															{	/* SawMill/bbv.scm 308 */
																obj_t BgL_arg2108z00_2599;

																{
																	BgL_blocksz00_bglt BgL_auxz00_5280;

																	{
																		obj_t BgL_auxz00_5281;

																		{	/* SawMill/bbv.scm 308 */
																			BgL_objectz00_bglt BgL_tmpz00_5282;

																			BgL_tmpz00_5282 =
																				((BgL_objectz00_bglt) BgL_bxz00_94);
																			BgL_auxz00_5281 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_5282);
																		}
																		BgL_auxz00_5280 =
																			((BgL_blocksz00_bglt) BgL_auxz00_5281);
																	}
																	BgL_arg2108z00_2599 =
																		(((BgL_blocksz00_bglt)
																			COBJECT(BgL_auxz00_5280))->
																		BgL_z52blacklistz52);
																}
																BgL_test2640z00_5268 =
																	CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																	(((obj_t) BgL_byz00_95),
																		BgL_arg2108z00_2599));
															}
													}
													if (BgL_test2640z00_5268)
														{	/* SawMill/bbv.scm 308 */
															return BFALSE;
														}
													else
														{	/* SawMill/bbv.scm 310 */
															bool_t BgL_test2642z00_5290;

															if (
																(bgl_list_length(
																		(((BgL_blockz00_bglt) COBJECT(
																					((BgL_blockz00_bglt) BgL_byz00_95)))->
																			BgL_succsz00)) == ((long) 0)))
																{	/* SawMill/bbv.scm 310 */
																	BgL_test2642z00_5290 =
																		(bgl_list_length(
																			(((BgL_blockz00_bglt) COBJECT(
																						((BgL_blockz00_bglt)
																							BgL_byz00_95)))->BgL_firstz00)) ==
																		((long) 1));
																}
															else
																{	/* SawMill/bbv.scm 310 */
																	BgL_test2642z00_5290 = ((bool_t) 0);
																}
															if (BgL_test2642z00_5290)
																{	/* SawMill/bbv.scm 310 */
																	return BFALSE;
																}
															else
																{	/* SawMill/bbv.scm 310 */
																	if (
																		(bgl_list_length(
																				(((BgL_blockz00_bglt) COBJECT(
																							((BgL_blockz00_bglt)
																								BgL_byz00_95)))->
																					BgL_succsz00)) ==
																			bgl_list_length((((BgL_blockz00_bglt)
																						COBJECT(((BgL_blockz00_bglt)
																								BgL_bxz00_94)))->
																					BgL_succsz00))))
																		{	/* SawMill/bbv.scm 313 */
																			obj_t BgL_nsz00_2573;

																			{	/* SawMill/bbv.scm 313 */
																				obj_t BgL_arg2096z00_2586;

																				BgL_arg2096z00_2586 =
																					MAKE_YOUNG_PAIR(
																					((obj_t) BgL_byz00_95),
																					BgL_stackz00_96);
																				BgL_nsz00_2573 =
																					MAKE_YOUNG_PAIR(((obj_t)
																						BgL_bxz00_94), BgL_arg2096z00_2586);
																			}
																			{	/* SawMill/bbv.scm 314 */
																				obj_t BgL__ortest_1203z00_2574;

																				{	/* SawMill/bbv.scm 314 */
																					obj_t BgL_arg2091z00_2578;
																					obj_t BgL_arg2092z00_2579;

																					BgL_arg2091z00_2578 =
																						(((BgL_blockz00_bglt) COBJECT(
																								((BgL_blockz00_bglt)
																									BgL_bxz00_94)))->
																						BgL_succsz00);
																					BgL_arg2092z00_2579 =
																						(((BgL_blockz00_bglt)
																							COBJECT(((BgL_blockz00_bglt)
																									BgL_byz00_95)))->
																						BgL_succsz00);
																					{	/* SawMill/bbv.scm 314 */
																						obj_t
																							BgL_zc3z04anonymousza32095ze3z87_3915;
																						BgL_zc3z04anonymousza32095ze3z87_3915
																							=
																							MAKE_FX_PROCEDURE
																							(BGl_z62zc3z04anonymousza32095ze3ze5zzsaw_bbvz00,
																							(int) (((long) 2)),
																							(int) (((long) 1)));
																						PROCEDURE_SET
																							(BgL_zc3z04anonymousza32095ze3z87_3915,
																							(int) (((long) 0)),
																							BgL_nsz00_2573);
																						{	/* SawMill/bbv.scm 314 */
																							obj_t BgL_list2093z00_2580;

																							{	/* SawMill/bbv.scm 314 */
																								obj_t BgL_arg2094z00_2581;

																								BgL_arg2094z00_2581 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2092z00_2579, BNIL);
																								BgL_list2093z00_2580 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2091z00_2578,
																									BgL_arg2094z00_2581);
																							}
																							BgL__ortest_1203z00_2574 =
																								BGl_everyz00zz__r4_pairs_and_lists_6_3z00
																								(BgL_zc3z04anonymousza32095ze3z87_3915,
																								BgL_list2093z00_2580);
																				}}}
																				if (CBOOL(BgL__ortest_1203z00_2574))
																					{	/* SawMill/bbv.scm 314 */
																						return BgL__ortest_1203z00_2574;
																					}
																				else
																					{	/* SawMill/bbv.scm 314 */
																						{
																							obj_t BgL_auxz00_5332;
																							BgL_blocksz00_bglt
																								BgL_auxz00_5326;
																							{	/* SawMill/bbv.scm 316 */
																								obj_t BgL_arg2088z00_2575;

																								{
																									BgL_blocksz00_bglt
																										BgL_auxz00_5333;
																									{
																										obj_t BgL_auxz00_5334;

																										{	/* SawMill/bbv.scm 316 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_5335;
																											BgL_tmpz00_5335 =
																												((BgL_objectz00_bglt)
																												BgL_bxz00_94);
																											BgL_auxz00_5334 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_5335);
																										}
																										BgL_auxz00_5333 =
																											((BgL_blocksz00_bglt)
																											BgL_auxz00_5334);
																									}
																									BgL_arg2088z00_2575 =
																										(((BgL_blocksz00_bglt)
																											COBJECT
																											(BgL_auxz00_5333))->
																										BgL_z52blacklistz52);
																								}
																								BgL_auxz00_5332 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_byz00_95),
																									BgL_arg2088z00_2575);
																							}
																							{
																								obj_t BgL_auxz00_5327;

																								{	/* SawMill/bbv.scm 316 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_5328;
																									BgL_tmpz00_5328 =
																										((BgL_objectz00_bglt)
																										BgL_bxz00_94);
																									BgL_auxz00_5327 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_5328);
																								}
																								BgL_auxz00_5326 =
																									((BgL_blocksz00_bglt)
																									BgL_auxz00_5327);
																							}
																							((((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_5326))->
																									BgL_z52blacklistz52) =
																								((obj_t) BgL_auxz00_5332),
																								BUNSPEC);
																						}
																						{
																							obj_t BgL_auxz00_5349;
																							BgL_blocksz00_bglt
																								BgL_auxz00_5343;
																							{	/* SawMill/bbv.scm 317 */
																								obj_t BgL_arg2089z00_2576;

																								{
																									BgL_blocksz00_bglt
																										BgL_auxz00_5350;
																									{
																										obj_t BgL_auxz00_5351;

																										{	/* SawMill/bbv.scm 317 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_5352;
																											BgL_tmpz00_5352 =
																												((BgL_objectz00_bglt)
																												BgL_byz00_95);
																											BgL_auxz00_5351 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_5352);
																										}
																										BgL_auxz00_5350 =
																											((BgL_blocksz00_bglt)
																											BgL_auxz00_5351);
																									}
																									BgL_arg2089z00_2576 =
																										(((BgL_blocksz00_bglt)
																											COBJECT
																											(BgL_auxz00_5350))->
																										BgL_z52blacklistz52);
																								}
																								BgL_auxz00_5349 =
																									MAKE_YOUNG_PAIR(
																									((obj_t) BgL_bxz00_94),
																									BgL_arg2089z00_2576);
																							}
																							{
																								obj_t BgL_auxz00_5344;

																								{	/* SawMill/bbv.scm 317 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_5345;
																									BgL_tmpz00_5345 =
																										((BgL_objectz00_bglt)
																										BgL_byz00_95);
																									BgL_auxz00_5344 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_5345);
																								}
																								BgL_auxz00_5343 =
																									((BgL_blocksz00_bglt)
																									BgL_auxz00_5344);
																							}
																							((((BgL_blocksz00_bglt)
																										COBJECT(BgL_auxz00_5343))->
																									BgL_z52blacklistz52) =
																								((obj_t) BgL_auxz00_5349),
																								BUNSPEC);
																						}
																						return BFALSE;
																					}
																			}
																		}
																	else
																		{	/* SawMill/bbv.scm 312 */
																			{
																				obj_t BgL_auxz00_5366;
																				BgL_blocksz00_bglt BgL_auxz00_5360;

																				{	/* SawMill/bbv.scm 321 */
																					obj_t BgL_arg2097z00_2587;

																					{
																						BgL_blocksz00_bglt BgL_auxz00_5367;

																						{
																							obj_t BgL_auxz00_5368;

																							{	/* SawMill/bbv.scm 321 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_5369;
																								BgL_tmpz00_5369 =
																									((BgL_objectz00_bglt)
																									BgL_bxz00_94);
																								BgL_auxz00_5368 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_5369);
																							}
																							BgL_auxz00_5367 =
																								((BgL_blocksz00_bglt)
																								BgL_auxz00_5368);
																						}
																						BgL_arg2097z00_2587 =
																							(((BgL_blocksz00_bglt)
																								COBJECT(BgL_auxz00_5367))->
																							BgL_z52blacklistz52);
																					}
																					BgL_auxz00_5366 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_byz00_95),
																						BgL_arg2097z00_2587);
																				}
																				{
																					obj_t BgL_auxz00_5361;

																					{	/* SawMill/bbv.scm 321 */
																						BgL_objectz00_bglt BgL_tmpz00_5362;

																						BgL_tmpz00_5362 =
																							((BgL_objectz00_bglt)
																							BgL_bxz00_94);
																						BgL_auxz00_5361 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_5362);
																					}
																					BgL_auxz00_5360 =
																						((BgL_blocksz00_bglt)
																						BgL_auxz00_5361);
																				}
																				((((BgL_blocksz00_bglt)
																							COBJECT(BgL_auxz00_5360))->
																						BgL_z52blacklistz52) =
																					((obj_t) BgL_auxz00_5366), BUNSPEC);
																			}
																			{
																				obj_t BgL_auxz00_5383;
																				BgL_blocksz00_bglt BgL_auxz00_5377;

																				{	/* SawMill/bbv.scm 322 */
																					obj_t BgL_arg2098z00_2588;

																					{
																						BgL_blocksz00_bglt BgL_auxz00_5384;

																						{
																							obj_t BgL_auxz00_5385;

																							{	/* SawMill/bbv.scm 322 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_5386;
																								BgL_tmpz00_5386 =
																									((BgL_objectz00_bglt)
																									BgL_byz00_95);
																								BgL_auxz00_5385 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_5386);
																							}
																							BgL_auxz00_5384 =
																								((BgL_blocksz00_bglt)
																								BgL_auxz00_5385);
																						}
																						BgL_arg2098z00_2588 =
																							(((BgL_blocksz00_bglt)
																								COBJECT(BgL_auxz00_5384))->
																							BgL_z52blacklistz52);
																					}
																					BgL_auxz00_5383 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_bxz00_94),
																						BgL_arg2098z00_2588);
																				}
																				{
																					obj_t BgL_auxz00_5378;

																					{	/* SawMill/bbv.scm 322 */
																						BgL_objectz00_bglt BgL_tmpz00_5379;

																						BgL_tmpz00_5379 =
																							((BgL_objectz00_bglt)
																							BgL_byz00_95);
																						BgL_auxz00_5378 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_5379);
																					}
																					BgL_auxz00_5377 =
																						((BgL_blocksz00_bglt)
																						BgL_auxz00_5378);
																				}
																				((((BgL_blocksz00_bglt)
																							COBJECT(BgL_auxz00_5377))->
																						BgL_z52blacklistz52) =
																					((obj_t) BgL_auxz00_5383), BUNSPEC);
																			}
																			return BFALSE;
																		}
																}
														}
												}
										}
									else
										{	/* SawMill/bbv.scm 304 */
											return BFALSE;
										}
								}
							else
								{	/* SawMill/bbv.scm 302 */
									return BFALSE;
								}
						}
				}
		}

	}



/* &<@anonymous:2095> */
	obj_t BGl_z62zc3z04anonymousza32095ze3ze5zzsaw_bbvz00(obj_t BgL_envz00_3916,
		obj_t BgL_xz00_3918, obj_t BgL_yz00_3919)
	{
		{	/* SawMill/bbv.scm 314 */
			{	/* SawMill/bbv.scm 314 */
				obj_t BgL_nsz00_3917;

				BgL_nsz00_3917 =
					((obj_t) PROCEDURE_REF(BgL_envz00_3916, (int) (((long) 0))));
				return
					BGl_mergezf3zf3zzsaw_bbvz00(
					((BgL_blockz00_bglt) BgL_xz00_3918),
					((BgL_blockz00_bglt) BgL_yz00_3919), BgL_nsz00_3917);
			}
		}

	}



/* get-specialize-block */
	BgL_blockz00_bglt
		BGl_getzd2specializa7ezd2blockza7zzsaw_bbvz00(BgL_blockz00_bglt BgL_bz00_97,
		obj_t BgL_ctxz00_98)
	{
		{	/* SawMill/bbv.scm 328 */
			{	/* SawMill/bbv.scm 341 */
				obj_t BgL_oldz00_2609;

				{	/* SawMill/bbv.scm 341 */
					obj_t BgL_arg2174z00_2691;

					{
						BgL_blockvz00_bglt BgL_auxz00_5400;

						{
							obj_t BgL_auxz00_5401;

							{	/* SawMill/bbv.scm 341 */
								BgL_objectz00_bglt BgL_tmpz00_5402;

								BgL_tmpz00_5402 = ((BgL_objectz00_bglt) BgL_bz00_97);
								BgL_auxz00_5401 = BGL_OBJECT_WIDENING(BgL_tmpz00_5402);
							}
							BgL_auxz00_5400 = ((BgL_blockvz00_bglt) BgL_auxz00_5401);
						}
						BgL_arg2174z00_2691 =
							(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5400))->
							BgL_versionsz00);
					}
					BgL_oldz00_2609 =
						BGl_assocz00zz__r4_pairs_and_lists_6_3z00(BgL_ctxz00_98,
						BgL_arg2174z00_2691);
				}
				if (PAIRP(BgL_oldz00_2609))
					{	/* SawMill/bbv.scm 342 */
						return ((BgL_blockz00_bglt) CDR(BgL_oldz00_2609));
					}
				else
					{	/* SawMill/bbv.scm 344 */
						BgL_blockz00_bglt BgL_sz00_2611;

						BgL_sz00_2611 =
							BGl_specializa7ezd2blockz12z67zzsaw_bbvz00(
							((BgL_blockz00_bglt) BgL_bz00_97), BgL_ctxz00_98);
						{
							obj_t BgL_auxz00_5420;
							BgL_blockvz00_bglt BgL_auxz00_5414;

							{	/* SawMill/bbv.scm 346 */
								obj_t BgL_arg2116z00_2612;
								obj_t BgL_arg2117z00_2613;

								BgL_arg2116z00_2612 =
									MAKE_YOUNG_PAIR(BgL_ctxz00_98, ((obj_t) BgL_sz00_2611));
								{
									BgL_blockvz00_bglt BgL_auxz00_5423;

									{
										obj_t BgL_auxz00_5424;

										{	/* SawMill/bbv.scm 346 */
											BgL_objectz00_bglt BgL_tmpz00_5425;

											BgL_tmpz00_5425 = ((BgL_objectz00_bglt) BgL_bz00_97);
											BgL_auxz00_5424 = BGL_OBJECT_WIDENING(BgL_tmpz00_5425);
										}
										BgL_auxz00_5423 = ((BgL_blockvz00_bglt) BgL_auxz00_5424);
									}
									BgL_arg2117z00_2613 =
										(((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5423))->
										BgL_versionsz00);
								}
								BgL_auxz00_5420 =
									MAKE_YOUNG_PAIR(BgL_arg2116z00_2612, BgL_arg2117z00_2613);
							}
							{
								obj_t BgL_auxz00_5415;

								{	/* SawMill/bbv.scm 346 */
									BgL_objectz00_bglt BgL_tmpz00_5416;

									BgL_tmpz00_5416 = ((BgL_objectz00_bglt) BgL_bz00_97);
									BgL_auxz00_5415 = BGL_OBJECT_WIDENING(BgL_tmpz00_5416);
								}
								BgL_auxz00_5414 = ((BgL_blockvz00_bglt) BgL_auxz00_5415);
							}
							((((BgL_blockvz00_bglt) COBJECT(BgL_auxz00_5414))->
									BgL_versionsz00) = ((obj_t) BgL_auxz00_5420), BUNSPEC);
						}
						{	/* SawMill/bbv.scm 349 */
							obj_t BgL_lastz00_2617;

							BgL_lastz00_2617 =
								CAR(BGl_lastzd2pairzd2zz__r4_pairs_and_lists_6_3z00(
									(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_sz00_2611)))->BgL_firstz00)));
							if (BGl_rtl_inszd2gozf3z21zzsaw_bbvzd2typeszd2(
									((BgL_rtl_insz00_bglt) BgL_lastz00_2617)))
								{	/* SawMill/bbv.scm 353 */
									BgL_rtl_goz00_bglt BgL_i1207z00_2620;

									BgL_i1207z00_2620 =
										((BgL_rtl_goz00_bglt)
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_lastz00_2617)))->
											BgL_funz00));
									{	/* SawMill/bbv.scm 354 */
										BgL_blockz00_bglt BgL_nz00_2621;

										{	/* SawMill/bbv.scm 354 */
											BgL_blockz00_bglt BgL_arg2125z00_2625;
											obj_t BgL_arg2126z00_2626;

											BgL_arg2125z00_2625 =
												(((BgL_rtl_goz00_bglt) COBJECT(BgL_i1207z00_2620))->
												BgL_toz00);
											{	/* SawMill/bbv.scm 355 */
												obj_t BgL_arg2127z00_2627;

												{
													BgL_blocksz00_bglt BgL_auxz00_5443;

													{
														obj_t BgL_auxz00_5444;

														{	/* SawMill/bbv.scm 355 */
															BgL_objectz00_bglt BgL_tmpz00_5445;

															BgL_tmpz00_5445 =
																((BgL_objectz00_bglt) BgL_sz00_2611);
															BgL_auxz00_5444 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5445);
														}
														BgL_auxz00_5443 =
															((BgL_blocksz00_bglt) BgL_auxz00_5444);
													}
													BgL_arg2127z00_2627 =
														(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5443))->
														BgL_octxsz00);
												}
												BgL_arg2126z00_2626 =
													CAR(((obj_t) BgL_arg2127z00_2627));
											}
											BgL_nz00_2621 =
												BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
												(BgL_sz00_2611, ((obj_t) BgL_arg2125z00_2625),
												BgL_arg2126z00_2626);
										}
										((((BgL_rtl_goz00_bglt) COBJECT(BgL_i1207z00_2620))->
												BgL_toz00) =
											((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_nz00_2621)),
											BUNSPEC);
										{
											obj_t BgL_auxz00_5462;
											BgL_blocksz00_bglt BgL_auxz00_5456;

											{	/* SawMill/bbv.scm 357 */
												obj_t BgL_arg2121z00_2622;

												{	/* SawMill/bbv.scm 357 */
													obj_t BgL_arg2123z00_2624;

													{
														BgL_blocksz00_bglt BgL_auxz00_5463;

														{
															obj_t BgL_auxz00_5464;

															{	/* SawMill/bbv.scm 357 */
																BgL_objectz00_bglt BgL_tmpz00_5465;

																BgL_tmpz00_5465 =
																	((BgL_objectz00_bglt) BgL_sz00_2611);
																BgL_auxz00_5464 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5465);
															}
															BgL_auxz00_5463 =
																((BgL_blocksz00_bglt) BgL_auxz00_5464);
														}
														BgL_arg2123z00_2624 =
															(((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5463))->
															BgL_octxsz00);
													}
													BgL_arg2121z00_2622 =
														CAR(((obj_t) BgL_arg2123z00_2624));
												}
												{	/* SawMill/bbv.scm 357 */
													obj_t BgL_list2122z00_2623;

													BgL_list2122z00_2623 =
														MAKE_YOUNG_PAIR(BgL_arg2121z00_2622, BNIL);
													BgL_auxz00_5462 = BgL_list2122z00_2623;
												}
											}
											{
												obj_t BgL_auxz00_5457;

												{	/* SawMill/bbv.scm 357 */
													BgL_objectz00_bglt BgL_tmpz00_5458;

													BgL_tmpz00_5458 =
														((BgL_objectz00_bglt) BgL_sz00_2611);
													BgL_auxz00_5457 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5458);
												}
												BgL_auxz00_5456 =
													((BgL_blocksz00_bglt) BgL_auxz00_5457);
											}
											((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5456))->
													BgL_octxsz00) = ((obj_t) BgL_auxz00_5462), BUNSPEC);
										}
									}
								}
							else
								{	/* SawMill/bbv.scm 351 */
									if (BGl_rtl_inszd2nopzf3z21zzsaw_bbvzd2typeszd2(
											((BgL_rtl_insz00_bglt) BgL_lastz00_2617)))
										{	/* SawMill/bbv.scm 358 */
											if (NULLP(CDR(
														(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_sz00_2611)))->
															BgL_firstz00))))
												{	/* SawMill/bbv.scm 359 */
													BFALSE;
												}
											else
												{
													obj_t BgL_auxz00_5482;

													{	/* SawMill/bbv.scm 360 */
														obj_t BgL_arg2132z00_2632;

														BgL_arg2132z00_2632 =
															(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_sz00_2611)))->
															BgL_firstz00);
														BgL_auxz00_5482 =
															bgl_remq_bang(BgL_lastz00_2617,
															BgL_arg2132z00_2632);
													}
													((((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_sz00_2611)))->
															BgL_firstz00) =
														((obj_t) BgL_auxz00_5482), BUNSPEC);
												}
											{	/* SawMill/bbv.scm 361 */
												BgL_blockz00_bglt BgL_nz00_2635;

												{	/* SawMill/bbv.scm 362 */
													obj_t BgL_arg2138z00_2639;
													obj_t BgL_arg2140z00_2640;

													{	/* SawMill/bbv.scm 362 */
														obj_t BgL_pairz00_3669;

														BgL_pairz00_3669 =
															(((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_bz00_97)))->
															BgL_succsz00);
														BgL_arg2138z00_2639 = CAR(BgL_pairz00_3669);
													}
													{	/* SawMill/bbv.scm 362 */
														obj_t BgL_arg2142z00_2642;

														{
															BgL_blocksz00_bglt BgL_auxz00_5491;

															{
																obj_t BgL_auxz00_5492;

																{	/* SawMill/bbv.scm 362 */
																	BgL_objectz00_bglt BgL_tmpz00_5493;

																	BgL_tmpz00_5493 =
																		((BgL_objectz00_bglt) BgL_sz00_2611);
																	BgL_auxz00_5492 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5493);
																}
																BgL_auxz00_5491 =
																	((BgL_blocksz00_bglt) BgL_auxz00_5492);
															}
															BgL_arg2142z00_2642 =
																(((BgL_blocksz00_bglt)
																	COBJECT(BgL_auxz00_5491))->BgL_octxsz00);
														}
														BgL_arg2140z00_2640 =
															CAR(((obj_t) BgL_arg2142z00_2642));
													}
													BgL_nz00_2635 =
														BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
														(BgL_sz00_2611, BgL_arg2138z00_2639,
														BgL_arg2140z00_2640);
												}
												{
													obj_t BgL_auxz00_5507;
													BgL_blocksz00_bglt BgL_auxz00_5501;

													{	/* SawMill/bbv.scm 363 */
														obj_t BgL_arg2135z00_2636;

														{	/* SawMill/bbv.scm 363 */
															obj_t BgL_arg2137z00_2638;

															{
																BgL_blocksz00_bglt BgL_auxz00_5508;

																{
																	obj_t BgL_auxz00_5509;

																	{	/* SawMill/bbv.scm 363 */
																		BgL_objectz00_bglt BgL_tmpz00_5510;

																		BgL_tmpz00_5510 =
																			((BgL_objectz00_bglt) BgL_sz00_2611);
																		BgL_auxz00_5509 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5510);
																	}
																	BgL_auxz00_5508 =
																		((BgL_blocksz00_bglt) BgL_auxz00_5509);
																}
																BgL_arg2137z00_2638 =
																	(((BgL_blocksz00_bglt)
																		COBJECT(BgL_auxz00_5508))->BgL_octxsz00);
															}
															BgL_arg2135z00_2636 =
																CAR(((obj_t) BgL_arg2137z00_2638));
														}
														{	/* SawMill/bbv.scm 363 */
															obj_t BgL_list2136z00_2637;

															BgL_list2136z00_2637 =
																MAKE_YOUNG_PAIR(BgL_arg2135z00_2636, BNIL);
															BgL_auxz00_5507 = BgL_list2136z00_2637;
														}
													}
													{
														obj_t BgL_auxz00_5502;

														{	/* SawMill/bbv.scm 363 */
															BgL_objectz00_bglt BgL_tmpz00_5503;

															BgL_tmpz00_5503 =
																((BgL_objectz00_bglt) BgL_sz00_2611);
															BgL_auxz00_5502 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5503);
														}
														BgL_auxz00_5501 =
															((BgL_blocksz00_bglt) BgL_auxz00_5502);
													}
													((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5501))->
															BgL_octxsz00) =
														((obj_t) BgL_auxz00_5507), BUNSPEC);
												}
											}
										}
									else
										{	/* SawMill/bbv.scm 358 */
											if (BGl_rtl_inszd2ifeqzf3z21zzsaw_bbvzd2typeszd2(
													((BgL_rtl_insz00_bglt) BgL_lastz00_2617)))
												{	/* SawMill/bbv.scm 365 */
													BgL_blockz00_bglt BgL_n2z00_2644;

													{	/* SawMill/bbv.scm 366 */
														obj_t BgL_arg2148z00_2652;
														obj_t BgL_arg2149z00_2653;

														{	/* SawMill/bbv.scm 366 */
															obj_t BgL_pairz00_3676;

															BgL_pairz00_3676 =
																(((BgL_blockz00_bglt) COBJECT(
																		((BgL_blockz00_bglt) BgL_bz00_97)))->
																BgL_succsz00);
															BgL_arg2148z00_2652 = CAR(CDR(BgL_pairz00_3676));
														}
														{	/* SawMill/bbv.scm 366 */
															obj_t BgL_arg2152z00_2655;

															{
																BgL_blocksz00_bglt BgL_auxz00_5526;

																{
																	obj_t BgL_auxz00_5527;

																	{	/* SawMill/bbv.scm 366 */
																		BgL_objectz00_bglt BgL_tmpz00_5528;

																		BgL_tmpz00_5528 =
																			((BgL_objectz00_bglt) BgL_sz00_2611);
																		BgL_auxz00_5527 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_5528);
																	}
																	BgL_auxz00_5526 =
																		((BgL_blocksz00_bglt) BgL_auxz00_5527);
																}
																BgL_arg2152z00_2655 =
																	(((BgL_blocksz00_bglt)
																		COBJECT(BgL_auxz00_5526))->BgL_octxsz00);
															}
															{	/* SawMill/bbv.scm 366 */
																obj_t BgL_pairz00_3684;

																BgL_pairz00_3684 =
																	CDR(((obj_t) BgL_arg2152z00_2655));
																BgL_arg2149z00_2653 = CAR(BgL_pairz00_3684);
															}
														}
														BgL_n2z00_2644 =
															BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
															(BgL_sz00_2611, BgL_arg2148z00_2652,
															BgL_arg2149z00_2653);
													}
													{	/* SawMill/bbv.scm 365 */
														BgL_blockz00_bglt BgL_n1z00_2645;

														{	/* SawMill/bbv.scm 368 */
															obj_t BgL_arg2144z00_2648;
															obj_t BgL_arg2145z00_2649;

															{	/* SawMill/bbv.scm 368 */
																obj_t BgL_pairz00_3685;

																BgL_pairz00_3685 =
																	(((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt) BgL_bz00_97)))->
																	BgL_succsz00);
																BgL_arg2144z00_2648 = CAR(BgL_pairz00_3685);
															}
															{	/* SawMill/bbv.scm 368 */
																obj_t BgL_arg2147z00_2651;

																{
																	BgL_blocksz00_bglt BgL_auxz00_5540;

																	{
																		obj_t BgL_auxz00_5541;

																		{	/* SawMill/bbv.scm 368 */
																			BgL_objectz00_bglt BgL_tmpz00_5542;

																			BgL_tmpz00_5542 =
																				((BgL_objectz00_bglt) BgL_sz00_2611);
																			BgL_auxz00_5541 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_5542);
																		}
																		BgL_auxz00_5540 =
																			((BgL_blocksz00_bglt) BgL_auxz00_5541);
																	}
																	BgL_arg2147z00_2651 =
																		(((BgL_blocksz00_bglt)
																			COBJECT(BgL_auxz00_5540))->BgL_octxsz00);
																}
																BgL_arg2145z00_2649 =
																	CAR(((obj_t) BgL_arg2147z00_2651));
															}
															BgL_n1z00_2645 =
																BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
																(BgL_sz00_2611, BgL_arg2144z00_2648,
																BgL_arg2145z00_2649);
														}
														{	/* SawMill/bbv.scm 367 */

															{	/* SawMill/bbv.scm 370 */
																BgL_rtl_ifeqz00_bglt BgL_i1209z00_2647;

																BgL_i1209z00_2647 =
																	((BgL_rtl_ifeqz00_bglt)
																	(((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					BgL_lastz00_2617)))->BgL_funz00));
																((((BgL_rtl_ifeqz00_bglt)
																			COBJECT(BgL_i1209z00_2647))->
																		BgL_thenz00) =
																	((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
																			BgL_n2z00_2644)), BUNSPEC);
															}
														}
													}
												}
											else
												{	/* SawMill/bbv.scm 364 */
													if (BGl_rtl_inszd2ifnezf3z21zzsaw_bbvzd2typeszd2(
															((BgL_rtl_insz00_bglt) BgL_lastz00_2617)))
														{	/* SawMill/bbv.scm 373 */
															BgL_blockz00_bglt BgL_n2z00_2657;

															{	/* SawMill/bbv.scm 374 */
																obj_t BgL_arg2158z00_2665;
																obj_t BgL_arg2159z00_2666;

																{	/* SawMill/bbv.scm 374 */
																	obj_t BgL_pairz00_3688;

																	BgL_pairz00_3688 =
																		(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt) BgL_bz00_97)))->
																		BgL_succsz00);
																	BgL_arg2158z00_2665 =
																		CAR(CDR(BgL_pairz00_3688));
																}
																{	/* SawMill/bbv.scm 374 */
																	obj_t BgL_arg2161z00_2668;

																	{
																		BgL_blocksz00_bglt BgL_auxz00_5562;

																		{
																			obj_t BgL_auxz00_5563;

																			{	/* SawMill/bbv.scm 374 */
																				BgL_objectz00_bglt BgL_tmpz00_5564;

																				BgL_tmpz00_5564 =
																					((BgL_objectz00_bglt) BgL_sz00_2611);
																				BgL_auxz00_5563 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_5564);
																			}
																			BgL_auxz00_5562 =
																				((BgL_blocksz00_bglt) BgL_auxz00_5563);
																		}
																		BgL_arg2161z00_2668 =
																			(((BgL_blocksz00_bglt)
																				COBJECT(BgL_auxz00_5562))->
																			BgL_octxsz00);
																	}
																	{	/* SawMill/bbv.scm 374 */
																		obj_t BgL_pairz00_3696;

																		BgL_pairz00_3696 =
																			CDR(((obj_t) BgL_arg2161z00_2668));
																		BgL_arg2159z00_2666 = CAR(BgL_pairz00_3696);
																	}
																}
																BgL_n2z00_2657 =
																	BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
																	(BgL_sz00_2611, BgL_arg2158z00_2665,
																	BgL_arg2159z00_2666);
															}
															{	/* SawMill/bbv.scm 373 */
																BgL_blockz00_bglt BgL_n1z00_2658;

																{	/* SawMill/bbv.scm 376 */
																	obj_t BgL_arg2154z00_2661;
																	obj_t BgL_arg2155z00_2662;

																	{	/* SawMill/bbv.scm 376 */
																		obj_t BgL_pairz00_3697;

																		BgL_pairz00_3697 =
																			(((BgL_blockz00_bglt) COBJECT(
																					((BgL_blockz00_bglt) BgL_bz00_97)))->
																			BgL_succsz00);
																		BgL_arg2154z00_2661 = CAR(BgL_pairz00_3697);
																	}
																	{	/* SawMill/bbv.scm 376 */
																		obj_t BgL_arg2157z00_2664;

																		{
																			BgL_blocksz00_bglt BgL_auxz00_5576;

																			{
																				obj_t BgL_auxz00_5577;

																				{	/* SawMill/bbv.scm 376 */
																					BgL_objectz00_bglt BgL_tmpz00_5578;

																					BgL_tmpz00_5578 =
																						((BgL_objectz00_bglt)
																						BgL_sz00_2611);
																					BgL_auxz00_5577 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_5578);
																				}
																				BgL_auxz00_5576 =
																					((BgL_blocksz00_bglt)
																					BgL_auxz00_5577);
																			}
																			BgL_arg2157z00_2664 =
																				(((BgL_blocksz00_bglt)
																					COBJECT(BgL_auxz00_5576))->
																				BgL_octxsz00);
																		}
																		BgL_arg2155z00_2662 =
																			CAR(((obj_t) BgL_arg2157z00_2664));
																	}
																	BgL_n1z00_2658 =
																		BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
																		(BgL_sz00_2611, BgL_arg2154z00_2661,
																		BgL_arg2155z00_2662);
																}
																{	/* SawMill/bbv.scm 375 */

																	{	/* SawMill/bbv.scm 378 */
																		BgL_rtl_ifnez00_bglt BgL_i1211z00_2660;

																		BgL_i1211z00_2660 =
																			((BgL_rtl_ifnez00_bglt)
																			(((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_lastz00_2617)))->BgL_funz00));
																		((((BgL_rtl_ifnez00_bglt)
																					COBJECT(BgL_i1211z00_2660))->
																				BgL_thenz00) =
																			((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
																					BgL_n1z00_2658)), BUNSPEC);
																	}
																}
															}
														}
													else
														{
															obj_t BgL_auxz00_5591;

															{	/* SawMill/bbv.scm 382 */
																obj_t BgL_ll1593z00_2669;
																obj_t BgL_ll1594z00_2670;

																BgL_ll1593z00_2669 =
																	bgl_reverse(
																	(((BgL_blockz00_bglt) COBJECT(
																				((BgL_blockz00_bglt) BgL_bz00_97)))->
																		BgL_succsz00));
																{	/* SawMill/bbv.scm 385 */
																	obj_t BgL_arg2169z00_2687;

																	{
																		BgL_blocksz00_bglt BgL_auxz00_5596;

																		{
																			obj_t BgL_auxz00_5597;

																			{	/* SawMill/bbv.scm 385 */
																				BgL_objectz00_bglt BgL_tmpz00_5598;

																				BgL_tmpz00_5598 =
																					((BgL_objectz00_bglt) BgL_sz00_2611);
																				BgL_auxz00_5597 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_5598);
																			}
																			BgL_auxz00_5596 =
																				((BgL_blocksz00_bglt) BgL_auxz00_5597);
																		}
																		BgL_arg2169z00_2687 =
																			(((BgL_blocksz00_bglt)
																				COBJECT(BgL_auxz00_5596))->
																			BgL_octxsz00);
																	}
																	BgL_ll1594z00_2670 =
																		bgl_reverse(BgL_arg2169z00_2687);
																}
																if (NULLP(BgL_ll1593z00_2669))
																	{	/* SawMill/bbv.scm 382 */
																		BgL_auxz00_5591 = BNIL;
																	}
																else
																	{	/* SawMill/bbv.scm 382 */
																		obj_t BgL_head1595z00_2672;

																		{	/* SawMill/bbv.scm 382 */
																			obj_t BgL_res2474z00_3702;

																			BgL_res2474z00_3702 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BgL_head1595z00_2672 =
																				BgL_res2474z00_3702;
																		}
																		{
																			obj_t BgL_ll1593z00_2674;
																			obj_t BgL_ll1594z00_2675;
																			obj_t BgL_tail1596z00_2676;

																			BgL_ll1593z00_2674 = BgL_ll1593z00_2669;
																			BgL_ll1594z00_2675 = BgL_ll1594z00_2670;
																			BgL_tail1596z00_2676 =
																				BgL_head1595z00_2672;
																		BgL_zc3z04anonymousza32163ze3z87_2677:
																			if (NULLP(BgL_ll1593z00_2674))
																				{	/* SawMill/bbv.scm 382 */
																					BgL_auxz00_5591 =
																						CDR(BgL_head1595z00_2672);
																				}
																			else
																				{	/* SawMill/bbv.scm 382 */
																					obj_t BgL_newtail1597z00_2679;

																					{	/* SawMill/bbv.scm 382 */
																						BgL_blockz00_bglt
																							BgL_arg2167z00_2682;
																						{	/* SawMill/bbv.scm 382 */
																							obj_t BgL_uz00_2683;
																							obj_t BgL_cz00_2684;

																							BgL_uz00_2683 =
																								CAR(
																								((obj_t) BgL_ll1593z00_2674));
																							BgL_cz00_2684 =
																								CAR(
																								((obj_t) BgL_ll1594z00_2675));
																							BgL_arg2167z00_2682 =
																								BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00
																								(BgL_sz00_2611, BgL_uz00_2683,
																								BgL_cz00_2684);
																						}
																						{	/* SawMill/bbv.scm 382 */
																							obj_t BgL_res2476z00_3707;

																							BgL_res2476z00_3707 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg2167z00_2682),
																								BNIL);
																							BgL_newtail1597z00_2679 =
																								BgL_res2476z00_3707;
																						}
																					}
																					SET_CDR(BgL_tail1596z00_2676,
																						BgL_newtail1597z00_2679);
																					{	/* SawMill/bbv.scm 382 */
																						obj_t BgL_arg2165z00_2680;
																						obj_t BgL_arg2166z00_2681;

																						BgL_arg2165z00_2680 =
																							CDR(((obj_t) BgL_ll1593z00_2674));
																						BgL_arg2166z00_2681 =
																							CDR(((obj_t) BgL_ll1594z00_2675));
																						{
																							obj_t BgL_tail1596z00_5624;
																							obj_t BgL_ll1594z00_5623;
																							obj_t BgL_ll1593z00_5622;

																							BgL_ll1593z00_5622 =
																								BgL_arg2165z00_2680;
																							BgL_ll1594z00_5623 =
																								BgL_arg2166z00_2681;
																							BgL_tail1596z00_5624 =
																								BgL_newtail1597z00_2679;
																							BgL_tail1596z00_2676 =
																								BgL_tail1596z00_5624;
																							BgL_ll1594z00_2675 =
																								BgL_ll1594z00_5623;
																							BgL_ll1593z00_2674 =
																								BgL_ll1593z00_5622;
																							goto
																								BgL_zc3z04anonymousza32163ze3z87_2677;
																						}
																					}
																				}
																		}
																	}
															}
															((((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt) BgL_sz00_2611)))->
																	BgL_succsz00) =
																((obj_t) BgL_auxz00_5591), BUNSPEC);
														}
												}
										}
								}
						}
						return BgL_sz00_2611;
					}
			}
		}

	}



/* get-specialize-succ!~0 */
	BgL_blockz00_bglt
		BGl_getzd2specializa7ezd2succz12ze70z52zzsaw_bbvz00(BgL_blockz00_bglt
		BgL_bz00_2692, obj_t BgL_sz00_2693, obj_t BgL_ctxz00_2694)
	{
		{	/* SawMill/bbv.scm 334 */
			{	/* SawMill/bbv.scm 331 */
				BgL_blockz00_bglt BgL_nz00_2696;

				BgL_nz00_2696 =
					BGl_getzd2specializa7ezd2blockza7zzsaw_bbvz00(
					((BgL_blockz00_bglt) BgL_sz00_2693), BgL_ctxz00_2694);
				{	/* SawMill/bbv.scm 332 */
					obj_t BgL_arg2176z00_2697;

					{	/* SawMill/bbv.scm 332 */
						obj_t BgL_arg2177z00_2698;

						BgL_arg2177z00_2698 =
							(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_bz00_2692)))->BgL_succsz00);
						BgL_arg2176z00_2697 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_nz00_2696), BgL_arg2177z00_2698);
					}
					{	/* SawMill/bbv.scm 332 */
						obj_t BgL_vz00_3650;

						BgL_vz00_3650 = BgL_arg2176z00_2697;
						((((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt) BgL_bz00_2692)))->BgL_succsz00) =
							((obj_t) BgL_vz00_3650), BUNSPEC);
					}
				}
				{	/* SawMill/bbv.scm 333 */
					obj_t BgL_arg2178z00_2699;

					{	/* SawMill/bbv.scm 333 */
						obj_t BgL_arg2179z00_2700;

						BgL_arg2179z00_2700 =
							(((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_nz00_2696)))->BgL_predsz00);
						BgL_arg2178z00_2699 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_bz00_2692), BgL_arg2179z00_2700);
					}
					{	/* SawMill/bbv.scm 333 */
						obj_t BgL_vz00_3653;

						BgL_vz00_3653 = BgL_arg2178z00_2699;
						((((BgL_blockz00_bglt) COBJECT(
										((BgL_blockz00_bglt) BgL_nz00_2696)))->BgL_predsz00) =
							((obj_t) BgL_vz00_3653), BUNSPEC);
					}
				}
				return BgL_nz00_2696;
			}
		}

	}



/* specialize-block! */
	BgL_blockz00_bglt BGl_specializa7ezd2blockz12z67zzsaw_bbvz00(BgL_blockz00_bglt
		BgL_bz00_99, obj_t BgL_ctx0z00_100)
	{
		{	/* SawMill/bbv.scm 391 */
			{
				obj_t BgL_oisz00_2708;
				obj_t BgL_sisz00_2709;
				obj_t BgL_ctxz00_2710;

				BgL_oisz00_2708 =
					(((BgL_blockz00_bglt) COBJECT(BgL_bz00_99))->BgL_firstz00);
				BgL_sisz00_2709 = BNIL;
				BgL_ctxz00_2710 = BgL_ctx0z00_100;
			BgL_zc3z04anonymousza32181ze3z87_2711:
				if (NULLP(CDR(((obj_t) BgL_oisz00_2708))))
					{	/* SawMill/bbv.scm 421 */
						obj_t BgL_sinz00_2714;

						{	/* SawMill/bbv.scm 422 */
							obj_t BgL_arg2210z00_2771;

							BgL_arg2210z00_2771 = CAR(((obj_t) BgL_oisz00_2708));
							BgL_sinz00_2714 =
								BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75(
								((BgL_rtl_insz00_bglt) BgL_arg2210z00_2771), BgL_ctxz00_2710);
						}
						{	/* SawMill/bbv.scm 422 */
							obj_t BgL_sctxz00_2715;

							{	/* SawMill/bbv.scm 424 */
								int BgL_tmpz00_5648;

								BgL_tmpz00_5648 = (int) (((long) 1));
								BgL_sctxz00_2715 = BGL_MVALUES_VAL(BgL_tmpz00_5648);
							}
							if (BGl_rtl_inszd2lastzf3z21zzsaw_bbvzd2typeszd2(
									((BgL_rtl_insz00_bglt) BgL_sinz00_2714)))
								{	/* SawMill/bbv.scm 425 */
									BgL_blockz00_bglt BgL_new1246z00_2717;

									{	/* SawMill/bbv.scm 427 */
										BgL_blockz00_bglt BgL_tmp1244z00_2719;
										BgL_blocksz00_bglt BgL_wide1245z00_2720;

										{
											BgL_blockz00_bglt BgL_auxz00_5654;

											{	/* SawMill/bbv.scm 427 */
												BgL_blockz00_bglt BgL_new1243z00_2722;

												BgL_new1243z00_2722 =
													((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_blockz00_bgl))));
												{	/* SawMill/bbv.scm 427 */
													long BgL_arg2187z00_2723;

													{	/* SawMill/bbv.scm 427 */
														long BgL_res2478z00_3715;

														BgL_res2478z00_3715 =
															BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
														BgL_arg2187z00_2723 = BgL_res2478z00_3715;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1243z00_2722),
														BgL_arg2187z00_2723);
												}
												{	/* SawMill/bbv.scm 427 */
													BgL_objectz00_bglt BgL_tmpz00_5659;

													BgL_tmpz00_5659 =
														((BgL_objectz00_bglt) BgL_new1243z00_2722);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5659, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1243z00_2722);
												BgL_auxz00_5654 = BgL_new1243z00_2722;
											}
											BgL_tmp1244z00_2719 =
												((BgL_blockz00_bglt) BgL_auxz00_5654);
										}
										BgL_wide1245z00_2720 =
											((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_blocksz00_bgl))));
										{	/* SawMill/bbv.scm 427 */
											obj_t BgL_auxz00_5667;
											BgL_objectz00_bglt BgL_tmpz00_5665;

											BgL_auxz00_5667 = ((obj_t) BgL_wide1245z00_2720);
											BgL_tmpz00_5665 =
												((BgL_objectz00_bglt) BgL_tmp1244z00_2719);
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5665, BgL_auxz00_5667);
										}
										((BgL_objectz00_bglt) BgL_tmp1244z00_2719);
										{	/* SawMill/bbv.scm 427 */
											long BgL_arg2186z00_2721;

											{	/* SawMill/bbv.scm 427 */
												long BgL_res2479z00_3721;

												BgL_res2479z00_3721 =
													BGL_CLASS_INDEX(BGl_blockSz00zzsaw_bbvzd2typeszd2);
												BgL_arg2186z00_2721 = BgL_res2479z00_3721;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_tmp1244z00_2719),
												BgL_arg2186z00_2721);
										}
										BgL_new1246z00_2717 =
											((BgL_blockz00_bglt) BgL_tmp1244z00_2719);
									}
									((((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_new1246z00_2717)))->
											BgL_labelz00) =
										((int) CINT(BGl_genlabelz00zzsaw_bbvzd2utilszd2())),
										BUNSPEC);
									((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
														BgL_new1246z00_2717)))->BgL_predsz00) =
										((obj_t) BNIL), BUNSPEC);
									((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
														BgL_new1246z00_2717)))->BgL_succsz00) =
										((obj_t) BNIL), BUNSPEC);
									{
										obj_t BgL_auxz00_5683;

										{	/* SawMill/bbv.scm 428 */
											obj_t BgL_arg2185z00_2718;

											BgL_arg2185z00_2718 =
												MAKE_YOUNG_PAIR(BgL_sinz00_2714, BgL_sisz00_2709);
											BgL_auxz00_5683 = bgl_reverse_bang(BgL_arg2185z00_2718);
										}
										((((BgL_blockz00_bglt) COBJECT(
														((BgL_blockz00_bglt) BgL_new1246z00_2717)))->
												BgL_firstz00) = ((obj_t) BgL_auxz00_5683), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5688;

										{
											obj_t BgL_auxz00_5689;

											{	/* SawMill/bbv.scm 429 */
												BgL_objectz00_bglt BgL_tmpz00_5690;

												BgL_tmpz00_5690 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5689 = BGL_OBJECT_WIDENING(BgL_tmpz00_5690);
											}
											BgL_auxz00_5688 = ((BgL_blocksz00_bglt) BgL_auxz00_5689);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5688))->
												BgL_ictxz00) = ((obj_t) BgL_ctx0z00_100), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5695;

										{
											obj_t BgL_auxz00_5696;

											{	/* SawMill/bbv-types.scm 40 */
												BgL_objectz00_bglt BgL_tmpz00_5697;

												BgL_tmpz00_5697 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5696 = BGL_OBJECT_WIDENING(BgL_tmpz00_5697);
											}
											BgL_auxz00_5695 = ((BgL_blocksz00_bglt) BgL_auxz00_5696);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5695))->
												BgL_octxsz00) = ((obj_t) BNIL), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5702;

										{
											obj_t BgL_auxz00_5703;

											{	/* SawMill/bbv-types.scm 40 */
												BgL_objectz00_bglt BgL_tmpz00_5704;

												BgL_tmpz00_5704 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5703 = BGL_OBJECT_WIDENING(BgL_tmpz00_5704);
											}
											BgL_auxz00_5702 = ((BgL_blocksz00_bglt) BgL_auxz00_5703);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5702))->
												BgL_z52markz52) = ((long) ((long) -1)), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5709;

										{
											obj_t BgL_auxz00_5710;

											{	/* SawMill/bbv.scm 426 */
												BgL_objectz00_bglt BgL_tmpz00_5711;

												BgL_tmpz00_5711 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5710 = BGL_OBJECT_WIDENING(BgL_tmpz00_5711);
											}
											BgL_auxz00_5709 = ((BgL_blocksz00_bglt) BgL_auxz00_5710);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5709))->
												BgL_z52parentz52) =
											((obj_t) ((obj_t) BgL_bz00_99)), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5717;

										{
											obj_t BgL_auxz00_5718;

											{	/* SawMill/bbv.scm 426 */
												BgL_objectz00_bglt BgL_tmpz00_5719;

												BgL_tmpz00_5719 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5718 = BGL_OBJECT_WIDENING(BgL_tmpz00_5719);
											}
											BgL_auxz00_5717 = ((BgL_blocksz00_bglt) BgL_auxz00_5718);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5717))->
												BgL_z52hashz52) = ((obj_t) BFALSE), BUNSPEC);
									}
									{
										BgL_blocksz00_bglt BgL_auxz00_5724;

										{
											obj_t BgL_auxz00_5725;

											{	/* SawMill/bbv-types.scm 44 */
												BgL_objectz00_bglt BgL_tmpz00_5726;

												BgL_tmpz00_5726 =
													((BgL_objectz00_bglt) BgL_new1246z00_2717);
												BgL_auxz00_5725 = BGL_OBJECT_WIDENING(BgL_tmpz00_5726);
											}
											BgL_auxz00_5724 = ((BgL_blocksz00_bglt) BgL_auxz00_5725);
										}
										((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5724))->
												BgL_z52blacklistz52) = ((obj_t) BNIL), BUNSPEC);
									}
									return BgL_new1246z00_2717;
								}
							else
								{	/* SawMill/bbv.scm 424 */
									if (BGl_rtl_inszd2typecheckzf3z21zzsaw_bbvzd2specializa7ez75(
											((BgL_rtl_insz00_bglt) BgL_sinz00_2714)))
										{	/* SawMill/bbv.scm 431 */
											obj_t BgL_regz00_2725;

											BgL_regz00_2725 =
												BGl_rtl_inszd2typecheckzd2zzsaw_bbvzd2typeszd2(
												((BgL_rtl_insz00_bglt) BgL_sinz00_2714));
											{	/* SawMill/bbv.scm 432 */
												obj_t BgL_typez00_2726;
												obj_t BgL_flagz00_2727;

												{	/* SawMill/bbv.scm 436 */
													int BgL_tmpz00_5736;

													BgL_tmpz00_5736 = (int) (((long) 1));
													BgL_typez00_2726 = BGL_MVALUES_VAL(BgL_tmpz00_5736);
												}
												{	/* SawMill/bbv.scm 436 */
													int BgL_tmpz00_5739;

													BgL_tmpz00_5739 = (int) (((long) 2));
													BgL_flagz00_2727 = BGL_MVALUES_VAL(BgL_tmpz00_5739);
												}
												{	/* SawMill/bbv.scm 436 */
													BgL_blockz00_bglt BgL_new1250z00_2728;

													{	/* SawMill/bbv.scm 438 */
														BgL_blockz00_bglt BgL_tmp1248z00_2746;
														BgL_blocksz00_bglt BgL_wide1249z00_2747;

														{
															BgL_blockz00_bglt BgL_auxz00_5742;

															{	/* SawMill/bbv.scm 438 */
																BgL_blockz00_bglt BgL_new1247z00_2749;

																BgL_new1247z00_2749 =
																	((BgL_blockz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_blockz00_bgl))));
																{	/* SawMill/bbv.scm 438 */
																	long BgL_arg2201z00_2750;

																	{	/* SawMill/bbv.scm 438 */
																		long BgL_res2480z00_3731;

																		BgL_res2480z00_3731 =
																			BGL_CLASS_INDEX
																			(BGl_blockz00zzsaw_defsz00);
																		BgL_arg2201z00_2750 = BgL_res2480z00_3731;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt) BgL_new1247z00_2749),
																		BgL_arg2201z00_2750);
																}
																{	/* SawMill/bbv.scm 438 */
																	BgL_objectz00_bglt BgL_tmpz00_5747;

																	BgL_tmpz00_5747 =
																		((BgL_objectz00_bglt) BgL_new1247z00_2749);
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5747,
																		BFALSE);
																}
																((BgL_objectz00_bglt) BgL_new1247z00_2749);
																BgL_auxz00_5742 = BgL_new1247z00_2749;
															}
															BgL_tmp1248z00_2746 =
																((BgL_blockz00_bglt) BgL_auxz00_5742);
														}
														BgL_wide1249z00_2747 =
															((BgL_blocksz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_blocksz00_bgl))));
														{	/* SawMill/bbv.scm 438 */
															obj_t BgL_auxz00_5755;
															BgL_objectz00_bglt BgL_tmpz00_5753;

															BgL_auxz00_5755 = ((obj_t) BgL_wide1249z00_2747);
															BgL_tmpz00_5753 =
																((BgL_objectz00_bglt) BgL_tmp1248z00_2746);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5753,
																BgL_auxz00_5755);
														}
														((BgL_objectz00_bglt) BgL_tmp1248z00_2746);
														{	/* SawMill/bbv.scm 438 */
															long BgL_arg2200z00_2748;

															{	/* SawMill/bbv.scm 438 */
																long BgL_res2481z00_3737;

																BgL_res2481z00_3737 =
																	BGL_CLASS_INDEX
																	(BGl_blockSz00zzsaw_bbvzd2typeszd2);
																BgL_arg2200z00_2748 = BgL_res2481z00_3737;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_tmp1248z00_2746),
																BgL_arg2200z00_2748);
														}
														BgL_new1250z00_2728 =
															((BgL_blockz00_bglt) BgL_tmp1248z00_2746);
													}
													((((BgL_blockz00_bglt) COBJECT(
																	((BgL_blockz00_bglt) BgL_new1250z00_2728)))->
															BgL_labelz00) =
														((int) CINT(BGl_genlabelz00zzsaw_bbvzd2utilszd2())),
														BUNSPEC);
													((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																		BgL_new1250z00_2728)))->BgL_predsz00) =
														((obj_t) BNIL), BUNSPEC);
													((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																		BgL_new1250z00_2728)))->BgL_succsz00) =
														((obj_t) BNIL), BUNSPEC);
													{
														obj_t BgL_auxz00_5771;

														{	/* SawMill/bbv.scm 439 */
															obj_t BgL_arg2189z00_2729;

															BgL_arg2189z00_2729 =
																MAKE_YOUNG_PAIR(BgL_sinz00_2714,
																BgL_sisz00_2709);
															BgL_auxz00_5771 =
																bgl_reverse_bang(BgL_arg2189z00_2729);
														}
														((((BgL_blockz00_bglt) COBJECT(
																		((BgL_blockz00_bglt)
																			BgL_new1250z00_2728)))->BgL_firstz00) =
															((obj_t) BgL_auxz00_5771), BUNSPEC);
													}
													{
														BgL_blocksz00_bglt BgL_auxz00_5776;

														{
															obj_t BgL_auxz00_5777;

															{	/* SawMill/bbv.scm 440 */
																BgL_objectz00_bglt BgL_tmpz00_5778;

																BgL_tmpz00_5778 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5777 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5778);
															}
															BgL_auxz00_5776 =
																((BgL_blocksz00_bglt) BgL_auxz00_5777);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5776))->
																BgL_ictxz00) =
															((obj_t) BgL_ctx0z00_100), BUNSPEC);
													}
													{
														obj_t BgL_auxz00_5789;
														BgL_blocksz00_bglt BgL_auxz00_5783;

														{	/* SawMill/bbv.scm 443 */
															obj_t BgL_arg2190z00_2730;
															obj_t BgL_arg2191z00_2731;

															{	/* SawMill/bbv.scm 443 */
																obj_t BgL_arg2194z00_2734;

																{	/* SawMill/bbv-types.scm 73 */
																	obj_t BgL_valuez00_2739;

																	BgL_valuez00_2739 =
																		CNST_TABLE_REF(((long) 1));
																	{	/* SawMill/bbv-types.scm 73 */

																		BgL_arg2194z00_2734 =
																			BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2
																			(BgL_sctxz00_2715, BgL_regz00_2725,
																			BgL_typez00_2726, BTRUE,
																			BgL_valuez00_2739);
																}}
																BgL_arg2190z00_2730 =
																	BGl_filterzd2livezd2regsz00zzsaw_bbvz00(
																	((BgL_rtl_insz00_bglt) BgL_sinz00_2714),
																	BgL_arg2194z00_2734);
															}
															{	/* SawMill/bbv.scm 445 */
																obj_t BgL_arg2199z00_2740;

																{	/* SawMill/bbv-types.scm 73 */
																	obj_t BgL_valuez00_2745;

																	BgL_valuez00_2745 =
																		CNST_TABLE_REF(((long) 1));
																	{	/* SawMill/bbv-types.scm 73 */

																		BgL_arg2199z00_2740 =
																			BGl_refinezd2ctxzd2zzsaw_bbvzd2typeszd2
																			(BgL_sctxz00_2715, BgL_regz00_2725,
																			BgL_typez00_2726, BFALSE,
																			BgL_valuez00_2745);
																}}
																BgL_arg2191z00_2731 =
																	BGl_filterzd2livezd2regsz00zzsaw_bbvz00(
																	((BgL_rtl_insz00_bglt) BgL_sinz00_2714),
																	BgL_arg2199z00_2740);
															}
															{	/* SawMill/bbv.scm 441 */
																obj_t BgL_list2192z00_2732;

																{	/* SawMill/bbv.scm 441 */
																	obj_t BgL_arg2193z00_2733;

																	BgL_arg2193z00_2733 =
																		MAKE_YOUNG_PAIR(BgL_arg2191z00_2731, BNIL);
																	BgL_list2192z00_2732 =
																		MAKE_YOUNG_PAIR(BgL_arg2190z00_2730,
																		BgL_arg2193z00_2733);
																}
																BgL_auxz00_5789 = BgL_list2192z00_2732;
														}}
														{
															obj_t BgL_auxz00_5784;

															{	/* SawMill/bbv.scm 441 */
																BgL_objectz00_bglt BgL_tmpz00_5785;

																BgL_tmpz00_5785 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5784 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5785);
															}
															BgL_auxz00_5783 =
																((BgL_blocksz00_bglt) BgL_auxz00_5784);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5783))->
																BgL_octxsz00) =
															((obj_t) BgL_auxz00_5789), BUNSPEC);
													}
													{
														BgL_blocksz00_bglt BgL_auxz00_5801;

														{
															obj_t BgL_auxz00_5802;

															{	/* SawMill/bbv.scm 441 */
																BgL_objectz00_bglt BgL_tmpz00_5803;

																BgL_tmpz00_5803 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5802 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5803);
															}
															BgL_auxz00_5801 =
																((BgL_blocksz00_bglt) BgL_auxz00_5802);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5801))->
																BgL_z52markz52) =
															((long) ((long) -1)), BUNSPEC);
													}
													{
														BgL_blocksz00_bglt BgL_auxz00_5808;

														{
															obj_t BgL_auxz00_5809;

															{	/* SawMill/bbv.scm 437 */
																BgL_objectz00_bglt BgL_tmpz00_5810;

																BgL_tmpz00_5810 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5809 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5810);
															}
															BgL_auxz00_5808 =
																((BgL_blocksz00_bglt) BgL_auxz00_5809);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5808))->
																BgL_z52parentz52) =
															((obj_t) ((obj_t) BgL_bz00_99)), BUNSPEC);
													}
													{
														BgL_blocksz00_bglt BgL_auxz00_5816;

														{
															obj_t BgL_auxz00_5817;

															{	/* SawMill/bbv.scm 437 */
																BgL_objectz00_bglt BgL_tmpz00_5818;

																BgL_tmpz00_5818 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5817 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5818);
															}
															BgL_auxz00_5816 =
																((BgL_blocksz00_bglt) BgL_auxz00_5817);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5816))->
																BgL_z52hashz52) = ((obj_t) BFALSE), BUNSPEC);
													}
													{
														BgL_blocksz00_bglt BgL_auxz00_5823;

														{
															obj_t BgL_auxz00_5824;

															{	/* SawMill/bbv-types.scm 44 */
																BgL_objectz00_bglt BgL_tmpz00_5825;

																BgL_tmpz00_5825 =
																	((BgL_objectz00_bglt) BgL_new1250z00_2728);
																BgL_auxz00_5824 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5825);
															}
															BgL_auxz00_5823 =
																((BgL_blocksz00_bglt) BgL_auxz00_5824);
														}
														((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5823))->
																BgL_z52blacklistz52) = ((obj_t) BNIL), BUNSPEC);
													}
													return BgL_new1250z00_2728;
												}
											}
										}
									else
										{	/* SawMill/bbv.scm 447 */
											BgL_blockz00_bglt BgL_new1254z00_2751;

											{	/* SawMill/bbv.scm 449 */
												BgL_blockz00_bglt BgL_tmp1252z00_2766;
												BgL_blocksz00_bglt BgL_wide1253z00_2767;

												{
													BgL_blockz00_bglt BgL_auxz00_5830;

													{	/* SawMill/bbv.scm 449 */
														BgL_blockz00_bglt BgL_new1251z00_2769;

														BgL_new1251z00_2769 =
															((BgL_blockz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_blockz00_bgl))));
														{	/* SawMill/bbv.scm 449 */
															long BgL_arg2209z00_2770;

															{	/* SawMill/bbv.scm 449 */
																long BgL_res2483z00_3748;

																BgL_res2483z00_3748 =
																	BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
																BgL_arg2209z00_2770 = BgL_res2483z00_3748;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1251z00_2769),
																BgL_arg2209z00_2770);
														}
														{	/* SawMill/bbv.scm 449 */
															BgL_objectz00_bglt BgL_tmpz00_5835;

															BgL_tmpz00_5835 =
																((BgL_objectz00_bglt) BgL_new1251z00_2769);
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5835, BFALSE);
														}
														((BgL_objectz00_bglt) BgL_new1251z00_2769);
														BgL_auxz00_5830 = BgL_new1251z00_2769;
													}
													BgL_tmp1252z00_2766 =
														((BgL_blockz00_bglt) BgL_auxz00_5830);
												}
												BgL_wide1253z00_2767 =
													((BgL_blocksz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_blocksz00_bgl))));
												{	/* SawMill/bbv.scm 449 */
													obj_t BgL_auxz00_5843;
													BgL_objectz00_bglt BgL_tmpz00_5841;

													BgL_auxz00_5843 = ((obj_t) BgL_wide1253z00_2767);
													BgL_tmpz00_5841 =
														((BgL_objectz00_bglt) BgL_tmp1252z00_2766);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5841,
														BgL_auxz00_5843);
												}
												((BgL_objectz00_bglt) BgL_tmp1252z00_2766);
												{	/* SawMill/bbv.scm 449 */
													long BgL_arg2208z00_2768;

													{	/* SawMill/bbv.scm 449 */
														long BgL_res2484z00_3754;

														BgL_res2484z00_3754 =
															BGL_CLASS_INDEX
															(BGl_blockSz00zzsaw_bbvzd2typeszd2);
														BgL_arg2208z00_2768 = BgL_res2484z00_3754;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_tmp1252z00_2766),
														BgL_arg2208z00_2768);
												}
												BgL_new1254z00_2751 =
													((BgL_blockz00_bglt) BgL_tmp1252z00_2766);
											}
											((((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt) BgL_new1254z00_2751)))->
													BgL_labelz00) =
												((int) CINT(BGl_genlabelz00zzsaw_bbvzd2utilszd2())),
												BUNSPEC);
											((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																BgL_new1254z00_2751)))->BgL_predsz00) =
												((obj_t) BNIL), BUNSPEC);
											((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
																BgL_new1254z00_2751)))->BgL_succsz00) =
												((obj_t) BNIL), BUNSPEC);
											{
												obj_t BgL_auxz00_5859;

												{	/* SawMill/bbv.scm 450 */
													obj_t BgL_arg2202z00_2752;

													BgL_arg2202z00_2752 =
														MAKE_YOUNG_PAIR(BgL_sinz00_2714, BgL_sisz00_2709);
													BgL_auxz00_5859 =
														bgl_reverse_bang(BgL_arg2202z00_2752);
												}
												((((BgL_blockz00_bglt) COBJECT(
																((BgL_blockz00_bglt) BgL_new1254z00_2751)))->
														BgL_firstz00) = ((obj_t) BgL_auxz00_5859), BUNSPEC);
											}
											{
												BgL_blocksz00_bglt BgL_auxz00_5864;

												{
													obj_t BgL_auxz00_5865;

													{	/* SawMill/bbv.scm 451 */
														BgL_objectz00_bglt BgL_tmpz00_5866;

														BgL_tmpz00_5866 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5865 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5866);
													}
													BgL_auxz00_5864 =
														((BgL_blocksz00_bglt) BgL_auxz00_5865);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5864))->
														BgL_ictxz00) = ((obj_t) BgL_ctx0z00_100), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_5877;
												BgL_blocksz00_bglt BgL_auxz00_5871;

												{	/* SawMill/bbv.scm 452 */
													obj_t BgL_l1599z00_2753;

													BgL_l1599z00_2753 =
														(((BgL_blockz00_bglt) COBJECT(BgL_bz00_99))->
														BgL_succsz00);
													if (NULLP(BgL_l1599z00_2753))
														{	/* SawMill/bbv.scm 452 */
															BgL_auxz00_5877 = BNIL;
														}
													else
														{	/* SawMill/bbv.scm 452 */
															obj_t BgL_head1601z00_2755;

															{	/* SawMill/bbv.scm 452 */
																obj_t BgL_res2486z00_3760;

																BgL_res2486z00_3760 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1601z00_2755 = BgL_res2486z00_3760;
															}
															{
																obj_t BgL_l1599z00_2757;
																obj_t BgL_tail1602z00_2758;

																BgL_l1599z00_2757 = BgL_l1599z00_2753;
																BgL_tail1602z00_2758 = BgL_head1601z00_2755;
															BgL_zc3z04anonymousza32204ze3z87_2759:
																if (NULLP(BgL_l1599z00_2757))
																	{	/* SawMill/bbv.scm 452 */
																		BgL_auxz00_5877 = CDR(BgL_head1601z00_2755);
																	}
																else
																	{	/* SawMill/bbv.scm 452 */
																		obj_t BgL_newtail1603z00_2761;

																		{	/* SawMill/bbv.scm 452 */
																			obj_t BgL_arg2207z00_2763;

																			BgL_arg2207z00_2763 =
																				BGl_filterzd2livezd2regsz00zzsaw_bbvz00(
																				((BgL_rtl_insz00_bglt) BgL_sinz00_2714),
																				BgL_sctxz00_2715);
																			{	/* SawMill/bbv.scm 452 */
																				obj_t BgL_res2488z00_3764;

																				BgL_res2488z00_3764 =
																					MAKE_YOUNG_PAIR(BgL_arg2207z00_2763,
																					BNIL);
																				BgL_newtail1603z00_2761 =
																					BgL_res2488z00_3764;
																			}
																		}
																		SET_CDR(BgL_tail1602z00_2758,
																			BgL_newtail1603z00_2761);
																		{	/* SawMill/bbv.scm 452 */
																			obj_t BgL_arg2206z00_2762;

																			BgL_arg2206z00_2762 =
																				CDR(((obj_t) BgL_l1599z00_2757));
																			{
																				obj_t BgL_tail1602z00_5892;
																				obj_t BgL_l1599z00_5891;

																				BgL_l1599z00_5891 = BgL_arg2206z00_2762;
																				BgL_tail1602z00_5892 =
																					BgL_newtail1603z00_2761;
																				BgL_tail1602z00_2758 =
																					BgL_tail1602z00_5892;
																				BgL_l1599z00_2757 = BgL_l1599z00_5891;
																				goto
																					BgL_zc3z04anonymousza32204ze3z87_2759;
																			}
																		}
																	}
															}
														}
												}
												{
													obj_t BgL_auxz00_5872;

													{	/* SawMill/bbv.scm 452 */
														BgL_objectz00_bglt BgL_tmpz00_5873;

														BgL_tmpz00_5873 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5872 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5873);
													}
													BgL_auxz00_5871 =
														((BgL_blocksz00_bglt) BgL_auxz00_5872);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5871))->
														BgL_octxsz00) = ((obj_t) BgL_auxz00_5877), BUNSPEC);
											}
											{
												BgL_blocksz00_bglt BgL_auxz00_5894;

												{
													obj_t BgL_auxz00_5895;

													{	/* SawMill/bbv.scm 452 */
														BgL_objectz00_bglt BgL_tmpz00_5896;

														BgL_tmpz00_5896 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5895 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5896);
													}
													BgL_auxz00_5894 =
														((BgL_blocksz00_bglt) BgL_auxz00_5895);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5894))->
														BgL_z52markz52) = ((long) ((long) -1)), BUNSPEC);
											}
											{
												BgL_blocksz00_bglt BgL_auxz00_5901;

												{
													obj_t BgL_auxz00_5902;

													{	/* SawMill/bbv.scm 448 */
														BgL_objectz00_bglt BgL_tmpz00_5903;

														BgL_tmpz00_5903 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5902 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5903);
													}
													BgL_auxz00_5901 =
														((BgL_blocksz00_bglt) BgL_auxz00_5902);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5901))->
														BgL_z52parentz52) =
													((obj_t) ((obj_t) BgL_bz00_99)), BUNSPEC);
											}
											{
												BgL_blocksz00_bglt BgL_auxz00_5909;

												{
													obj_t BgL_auxz00_5910;

													{	/* SawMill/bbv.scm 448 */
														BgL_objectz00_bglt BgL_tmpz00_5911;

														BgL_tmpz00_5911 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5910 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5911);
													}
													BgL_auxz00_5909 =
														((BgL_blocksz00_bglt) BgL_auxz00_5910);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5909))->
														BgL_z52hashz52) = ((obj_t) BFALSE), BUNSPEC);
											}
											{
												BgL_blocksz00_bglt BgL_auxz00_5916;

												{
													obj_t BgL_auxz00_5917;

													{	/* SawMill/bbv-types.scm 44 */
														BgL_objectz00_bglt BgL_tmpz00_5918;

														BgL_tmpz00_5918 =
															((BgL_objectz00_bglt) BgL_new1254z00_2751);
														BgL_auxz00_5917 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5918);
													}
													BgL_auxz00_5916 =
														((BgL_blocksz00_bglt) BgL_auxz00_5917);
												}
												((((BgL_blocksz00_bglt) COBJECT(BgL_auxz00_5916))->
														BgL_z52blacklistz52) = ((obj_t) BNIL), BUNSPEC);
											}
											return BgL_new1254z00_2751;
										}
								}
						}
					}
				else
					{	/* SawMill/bbv.scm 498 */
						obj_t BgL_sinz00_2773;

						{	/* SawMill/bbv.scm 499 */
							obj_t BgL_arg2213z00_2777;

							BgL_arg2213z00_2777 = CAR(((obj_t) BgL_oisz00_2708));
							BgL_sinz00_2773 =
								BGl_rtl_inszd2specializa7ez75zzsaw_bbvzd2specializa7ez75(
								((BgL_rtl_insz00_bglt) BgL_arg2213z00_2777), BgL_ctxz00_2710);
						}
						{	/* SawMill/bbv.scm 499 */
							obj_t BgL_sctxz00_2774;

							{	/* SawMill/bbv.scm 500 */
								int BgL_tmpz00_5927;

								BgL_tmpz00_5927 = (int) (((long) 1));
								BgL_sctxz00_2774 = BGL_MVALUES_VAL(BgL_tmpz00_5927);
							}
							{	/* SawMill/bbv.scm 500 */
								obj_t BgL_arg2211z00_2775;
								obj_t BgL_arg2212z00_2776;

								BgL_arg2211z00_2775 = CDR(((obj_t) BgL_oisz00_2708));
								BgL_arg2212z00_2776 =
									MAKE_YOUNG_PAIR(BgL_sinz00_2773, BgL_sisz00_2709);
								{
									obj_t BgL_ctxz00_5935;
									obj_t BgL_sisz00_5934;
									obj_t BgL_oisz00_5933;

									BgL_oisz00_5933 = BgL_arg2211z00_2775;
									BgL_sisz00_5934 = BgL_arg2212z00_2776;
									BgL_ctxz00_5935 = BgL_sctxz00_2774;
									BgL_ctxz00_2710 = BgL_ctxz00_5935;
									BgL_sisz00_2709 = BgL_sisz00_5934;
									BgL_oisz00_2708 = BgL_oisz00_5933;
									goto BgL_zc3z04anonymousza32181ze3z87_2711;
								}
							}
						}
					}
			}
		}

	}



/* filter-live-regs */
	obj_t BGl_filterzd2livezd2regsz00zzsaw_bbvz00(BgL_rtl_insz00_bglt
		BgL_insz00_101, obj_t BgL_ctxz00_102)
	{
		{	/* SawMill/bbv.scm 505 */
			{	/* SawMill/bbv.scm 507 */
				obj_t BgL_hook1614z00_2849;

				BgL_hook1614z00_2849 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
				{
					obj_t BgL_l1611z00_2851;
					obj_t BgL_h1612z00_2852;

					BgL_l1611z00_2851 = BgL_ctxz00_102;
					BgL_h1612z00_2852 = BgL_hook1614z00_2849;
				BgL_zc3z04anonymousza32238ze3z87_2853:
					if (NULLP(BgL_l1611z00_2851))
						{	/* SawMill/bbv.scm 507 */
							return CDR(BgL_hook1614z00_2849);
						}
					else
						{	/* SawMill/bbv.scm 507 */
							bool_t BgL_test2660z00_5941;

							{	/* SawMill/bbv.scm 508 */
								obj_t BgL_ez00_2885;

								BgL_ez00_2885 = CAR(((obj_t) BgL_l1611z00_2851));
								{	/* SawMill/bbv.scm 508 */
									BgL_rtl_regz00_bglt BgL_regz00_2886;

									BgL_regz00_2886 =
										(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
												((BgL_bbvzd2ctxentryzd2_bglt) BgL_ez00_2885)))->
										BgL_regz00);
									{	/* SawMill/bbv.scm 509 */
										bool_t BgL_test2661z00_5946;

										if (BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_regz00_2886),
												BGl_rtl_regzf2razf2zzsaw_regsetz00))
											{	/* SawMill/bbv.scm 510 */
												obj_t BgL_arg2264z00_2905;

												{
													BgL_rtl_inszf2bbvzf2_bglt BgL_auxz00_5950;

													{
														obj_t BgL_auxz00_5951;

														{	/* SawMill/bbv.scm 510 */
															BgL_objectz00_bglt BgL_tmpz00_5952;

															BgL_tmpz00_5952 =
																((BgL_objectz00_bglt) BgL_insz00_101);
															BgL_auxz00_5951 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5952);
														}
														BgL_auxz00_5950 =
															((BgL_rtl_inszf2bbvzf2_bglt) BgL_auxz00_5951);
													}
													BgL_arg2264z00_2905 =
														(((BgL_rtl_inszf2bbvzf2_bglt)
															COBJECT(BgL_auxz00_5950))->BgL_outz00);
												}
												BgL_test2661z00_5946 =
													BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
													((BgL_rtl_regz00_bglt) BgL_regz00_2886),
													((BgL_regsetz00_bglt) BgL_arg2264z00_2905));
											}
										else
											{	/* SawMill/bbv.scm 509 */
												BgL_test2661z00_5946 = ((bool_t) 1);
											}
										if (BgL_test2661z00_5946)
											{	/* SawMill/bbv.scm 512 */
												obj_t BgL_arg2258z00_2888;

												{	/* SawMill/bbv.scm 512 */
													obj_t BgL_hook1608z00_2889;

													BgL_hook1608z00_2889 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													{	/* SawMill/bbv.scm 514 */
														obj_t BgL_g1609z00_2890;

														BgL_g1609z00_2890 =
															(((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																	((BgL_bbvzd2ctxentryzd2_bglt)
																		BgL_ez00_2885)))->BgL_aliasesz00);
														{
															obj_t BgL_l1605z00_2892;
															obj_t BgL_h1606z00_2893;

															BgL_l1605z00_2892 = BgL_g1609z00_2890;
															BgL_h1606z00_2893 = BgL_hook1608z00_2889;
														BgL_zc3z04anonymousza32259ze3z87_2894:
															if (NULLP(BgL_l1605z00_2892))
																{	/* SawMill/bbv.scm 514 */
																	BgL_arg2258z00_2888 =
																		CDR(BgL_hook1608z00_2889);
																}
															else
																{	/* SawMill/bbv.scm 514 */
																	bool_t BgL_test2664z00_5966;

																	{	/* SawMill/bbv.scm 513 */
																		obj_t BgL_regz00_2901;

																		BgL_regz00_2901 =
																			CAR(((obj_t) BgL_l1605z00_2892));
																		{	/* SawMill/bbv.scm 513 */
																			obj_t BgL_arg2263z00_2902;

																			{
																				BgL_rtl_inszf2bbvzf2_bglt
																					BgL_auxz00_5969;
																				{
																					obj_t BgL_auxz00_5970;

																					{	/* SawMill/bbv.scm 513 */
																						BgL_objectz00_bglt BgL_tmpz00_5971;

																						BgL_tmpz00_5971 =
																							((BgL_objectz00_bglt)
																							BgL_insz00_101);
																						BgL_auxz00_5970 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_5971);
																					}
																					BgL_auxz00_5969 =
																						((BgL_rtl_inszf2bbvzf2_bglt)
																						BgL_auxz00_5970);
																				}
																				BgL_arg2263z00_2902 =
																					(((BgL_rtl_inszf2bbvzf2_bglt)
																						COBJECT(BgL_auxz00_5969))->
																					BgL_outz00);
																			}
																			BgL_test2664z00_5966 =
																				BGl_regsetzd2memberzf3z21zzsaw_regsetz00
																				(((BgL_rtl_regz00_bglt)
																					BgL_regz00_2901),
																				((BgL_regsetz00_bglt)
																					BgL_arg2263z00_2902));
																		}
																	}
																	if (BgL_test2664z00_5966)
																		{	/* SawMill/bbv.scm 514 */
																			obj_t BgL_nh1607z00_2897;

																			{	/* SawMill/bbv.scm 514 */
																				obj_t BgL_arg2261z00_2899;

																				BgL_arg2261z00_2899 =
																					CAR(((obj_t) BgL_l1605z00_2892));
																				{	/* SawMill/bbv.scm 514 */
																					obj_t BgL_res2491z00_3785;

																					BgL_res2491z00_3785 =
																						MAKE_YOUNG_PAIR(BgL_arg2261z00_2899,
																						BNIL);
																					BgL_nh1607z00_2897 =
																						BgL_res2491z00_3785;
																				}
																			}
																			SET_CDR(BgL_h1606z00_2893,
																				BgL_nh1607z00_2897);
																			{	/* SawMill/bbv.scm 514 */
																				obj_t BgL_arg2260z00_2898;

																				BgL_arg2260z00_2898 =
																					CDR(((obj_t) BgL_l1605z00_2892));
																				{
																					obj_t BgL_h1606z00_5986;
																					obj_t BgL_l1605z00_5985;

																					BgL_l1605z00_5985 =
																						BgL_arg2260z00_2898;
																					BgL_h1606z00_5986 =
																						BgL_nh1607z00_2897;
																					BgL_h1606z00_2893 = BgL_h1606z00_5986;
																					BgL_l1605z00_2892 = BgL_l1605z00_5985;
																					goto
																						BgL_zc3z04anonymousza32259ze3z87_2894;
																				}
																			}
																		}
																	else
																		{	/* SawMill/bbv.scm 514 */
																			obj_t BgL_arg2262z00_2900;

																			BgL_arg2262z00_2900 =
																				CDR(((obj_t) BgL_l1605z00_2892));
																			{
																				obj_t BgL_l1605z00_5989;

																				BgL_l1605z00_5989 = BgL_arg2262z00_2900;
																				BgL_l1605z00_2892 = BgL_l1605z00_5989;
																				goto
																					BgL_zc3z04anonymousza32259ze3z87_2894;
																			}
																		}
																}
														}
													}
												}
												{	/* SawMill/bbv.scm 511 */
													obj_t BgL_xz00_3921;

													BgL_xz00_3921 =
														((((BgL_bbvzd2ctxentryzd2_bglt) COBJECT(
																	((BgL_bbvzd2ctxentryzd2_bglt)
																		BgL_ez00_2885)))->BgL_aliasesz00) =
														((obj_t) ((obj_t) BgL_arg2258z00_2888)), BUNSPEC);
													BgL_test2660z00_5941 = ((bool_t) 1);
												}
											}
										else
											{	/* SawMill/bbv.scm 509 */
												BgL_test2660z00_5941 = ((bool_t) 0);
											}
									}
								}
							}
							if (BgL_test2660z00_5941)
								{	/* SawMill/bbv.scm 507 */
									obj_t BgL_nh1613z00_2881;

									{	/* SawMill/bbv.scm 507 */
										obj_t BgL_arg2256z00_2883;

										BgL_arg2256z00_2883 = CAR(((obj_t) BgL_l1611z00_2851));
										{	/* SawMill/bbv.scm 507 */
											obj_t BgL_res2492z00_3792;

											BgL_res2492z00_3792 =
												MAKE_YOUNG_PAIR(BgL_arg2256z00_2883, BNIL);
											BgL_nh1613z00_2881 = BgL_res2492z00_3792;
										}
									}
									SET_CDR(BgL_h1612z00_2852, BgL_nh1613z00_2881);
									{	/* SawMill/bbv.scm 507 */
										obj_t BgL_arg2254z00_2882;

										BgL_arg2254z00_2882 = CDR(((obj_t) BgL_l1611z00_2851));
										{
											obj_t BgL_h1612z00_6000;
											obj_t BgL_l1611z00_5999;

											BgL_l1611z00_5999 = BgL_arg2254z00_2882;
											BgL_h1612z00_6000 = BgL_nh1613z00_2881;
											BgL_h1612z00_2852 = BgL_h1612z00_6000;
											BgL_l1611z00_2851 = BgL_l1611z00_5999;
											goto BgL_zc3z04anonymousza32238ze3z87_2853;
										}
									}
								}
							else
								{	/* SawMill/bbv.scm 507 */
									obj_t BgL_arg2257z00_2884;

									BgL_arg2257z00_2884 = CDR(((obj_t) BgL_l1611z00_2851));
									{
										obj_t BgL_l1611z00_6003;

										BgL_l1611z00_6003 = BgL_arg2257z00_2884;
										BgL_l1611z00_2851 = BgL_l1611z00_6003;
										goto BgL_zc3z04anonymousza32238ze3z87_2853;
									}
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvz00()
	{
		{	/* SawMill/bbv.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(((long) 237915310),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2typeszd2(((long) 241613701),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2specializa7ez75(((long)
					174034012), BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(((long) 486661379),
				BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
			return BGl_modulezd2initializa7ationz75zzsaw_bbvzd2utilszd2(((long)
					250590870), BSTRING_TO_STRING(BGl_string2512z00zzsaw_bbvz00));
		}

	}

#ifdef __cplusplus
}
#endif
