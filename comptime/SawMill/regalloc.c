/*===========================================================================*/
/*   (SawMill/regalloc.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/regalloc.scm) */
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

	typedef struct BgL_blockzf2razf2_bgl
	{
		obj_t BgL_lastz00;
	}                    *BgL_blockzf2razf2_bglt;

	typedef struct BgL_rtl_inszf2razf2_bgl
	{
		obj_t BgL_defz00;
		obj_t BgL_outz00;
		obj_t BgL_inz00;
		obj_t BgL_spillz00;
	}                      *BgL_rtl_inszf2razf2_bglt;


	static obj_t
		BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static BgL_blockz00_bglt
		BGl_z62lambda2492z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static BgL_blockz00_bglt
		BGl_z62lambda2496z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32559ze3ze5zzsaw_registerzd2allocationzd2(obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern bool_t BGl_regsetzd2addz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regz00_bglt);
	static obj_t
		BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00;
	static obj_t
		BGl_z62zc3z04anonymousza32102ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static bool_t
		BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2(obj_t);
	BGL_IMPORT obj_t BGl_assocz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t
		BGl_z62protectzd2interferencez12za2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32014ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_rtl_protectz00zzsaw_defsz00;
	static obj_t
		BGl_z62typezd2interferencez12za2zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62registerzd2allocationzb0zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32105ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_interferencez12z12zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_regsetzd2filterzd2zzsaw_regsetz00(obj_t, BgL_regsetz00_bglt);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	extern bool_t BGl_regsetzd2removez12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_rtl_regz00_bglt);
	static obj_t
		BGl_z62zc3z04anonymousza32108ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32019ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	BGL_IMPORT obj_t make_vector(long, obj_t);
	static bool_t
		BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
		(obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2();
	extern bool_t BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(BgL_regsetz00_bglt,
		obj_t);
	static bool_t
		BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_livenessz12z12zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	extern bool_t BGl_regsetzd2memberzf3z21zzsaw_regsetz00(BgL_rtl_regz00_bglt,
		BgL_regsetz00_bglt);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_IMPORT obj_t BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_remq_bang(obj_t, obj_t);
	static BgL_rtl_regz00_bglt
		BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2(BgL_rtl_regz00_bglt);
	static bool_t
		BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_globalz00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	extern obj_t BGl_regsetzd2ze3listz31zzsaw_regsetz00(BgL_regsetz00_bglt);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t
		BGl_z62typezd2interferencez121751za2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_z62zc3z04anonymousza32541ze3ze5zzsaw_registerzd2allocationzd2(obj_t);
	extern BgL_regsetz00_bglt
		BGl_duplicatezd2regsetzd2zzsaw_regsetz00(BgL_regsetz00_bglt);
	extern obj_t BGl_regsetzd2forzd2eachz00zzsaw_regsetz00(obj_t,
		BgL_regsetz00_bglt);
	static obj_t
		BGl_z62protectzd2interference1749zb0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32526ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2504z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2505z62zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static bool_t BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32187ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static bool_t
		BGl_inszd2funcallzd2spillz12ze70zf5zzsaw_registerzd2allocationzd2
		(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static BgL_rtl_insz00_bglt
		BGl_z62lambda2520z62zzsaw_registerzd2allocationzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_rtl_insz00_bglt
		BGl_z62lambda2523z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static bool_t BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static BgL_rtl_insz00_bglt
		BGl_z62lambda2527z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	extern bool_t BGl_regsetzd2unionz12zc0zzsaw_regsetz00(BgL_regsetz00_bglt,
		BgL_regsetz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda2539z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t
		BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2
		(BgL_rtl_insz00_bglt);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	extern obj_t BGl_rtl_regzf2razf2zzsaw_regsetz00;
	static obj_t BGl_z62lambda2540z62zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	extern BgL_regsetz00_bglt BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00(obj_t);
	static long BGl_removezd2blockz12ze70z27zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t BGl_z62lambda2549z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2550z62zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2557z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2558z62zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2567z62zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_z62lambda2568z62zzsaw_registerzd2allocationzd2(obj_t, obj_t,
		obj_t);
	static bool_t
		BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, obj_t);
	extern obj_t BGl_rtl_funz00zzsaw_defsz00;
	extern obj_t BGl_za2optimza2z00zzengine_paramz00;
	static obj_t
		BGl_z62dumpzd2rtl_inszf2ra1760z42zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t
		BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2 =
		BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza32495ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_collectzd2registersz12zc0zzsaw_regutilsz00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza31961ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32569ze3ze5zzsaw_registerzd2allocationzd2(obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t
		BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(BgL_rtl_regz00_bglt);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t BGl_blockzf2razf2zzsaw_registerzd2allocationzd2 = BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_rtl_regz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static bool_t
		BGl_inszd2hardwarezd2interferencez12ze70zf5zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt, BgL_rtl_insz00_bglt, obj_t, obj_t);
	extern obj_t BGl_rtl_nopz00zzsaw_defsz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62rtlzd2siza7ez17zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_rtl_inszd2argsza2z70zzsaw_defsz00(BgL_rtl_insz00_bglt);
	BGL_IMPORT obj_t BGl_zb2zb2zz__r4_numbers_6_5z00(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32420ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern BgL_regsetz00_bglt BGl_listzd2ze3regsetz31zzsaw_regsetz00(obj_t,
		obj_t);
	static obj_t BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
		(obj_t);
	static obj_t BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32260ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62zc3z04anonymousza32173ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(long, char *);
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
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
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
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00(obj_t, obj_t,
		long, long);
	extern obj_t BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00;
	static obj_t BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl_z62rtlzd2siza7ezd2rtl_ins1758zc5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
	BGL_IMPORT obj_t bgl_remq(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
	static obj_t
		BGl_z62zc3z04anonymousza32282ze3ze5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t BGl_backendz00zzbackend_backendz00;
	extern obj_t
		BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00;
	static obj_t BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2 = BUNSPEC;
	static obj_t
		BGl_z62zc3z04anonymousza32551ze3ze5zzsaw_registerzd2allocationzd2(obj_t);
	static bool_t
		BGl_argszd2widenzd2raz12ze70zf5zzsaw_registerzd2allocationzd2(obj_t, obj_t);
	static obj_t BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t
		BGl_z62rtlzd2siza7ezd2block1756zc5zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_z62rtlzd2siza7e1753z17zzsaw_registerzd2allocationzd2(obj_t,
		obj_t);
	extern obj_t
		BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_blockz00zzsaw_defsz00;
	static obj_t
		BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2(obj_t);
	static BgL_blockz00_bglt
		BGl_z62lambda2487z62zzsaw_registerzd2allocationzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2argsze70z35zzsaw_registerzd2allocationzd2(obj_t);
	static obj_t __cnst[10];


	   
		 
		DEFINE_STRING(BGl_string3016z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3016za700za7za7s3083za7, " instrs]: too large\n", 20);
	      DEFINE_STRING(BGl_string3017z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3017za700za7za7s3084za7, " [size=", 7);
	      DEFINE_STRING(BGl_string3018z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3018za700za7za7s3085za7, "        NOT reg. alloc. ", 24);
	      DEFINE_STRING(BGl_string3019z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3019za700za7za7s3086za7, " instrs]:\n", 10);
	      DEFINE_STRING(BGl_string3020z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3020za700za7za7s3087za7, "        reg. alloc. ", 20);
	      DEFINE_STRING(BGl_string3021z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3021za700za7za7s3088za7, "\n", 1);
	      DEFINE_STRING(BGl_string3022z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3022za700za7za7s3089za7, "          number of registers... ",
		33);
	      DEFINE_STRING(BGl_string3023z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3023za700za7za7s3090za7, "          number of parameters... ",
		34);
	      DEFINE_STRING(BGl_string3024z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3024za700za7za7s3091za7,
		"          number of temporaries... ", 35);
	      DEFINE_STRING(BGl_string3025z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3025za700za7za7s3092za7, "          liveness..", 20);
	      DEFINE_STRING(BGl_string3026z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3026za700za7za7s3093za7, ".", 1);
	      DEFINE_STRING(BGl_string3027z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3027za700za7za7s3094za7, " done\n", 6);
	      DEFINE_STRING(BGl_string3028z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3028za700za7za7s3095za7, "          graph interference... ",
		32);
	      DEFINE_STRING(BGl_string3029z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3029za700za7za7s3096za7, "done\n", 5);
	      DEFINE_STRING(BGl_string3030z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3030za700za7za7s3097za7,
		"          removed useless dest. registers... ", 45);
	      DEFINE_STRING(BGl_string3032z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3032za700za7za7s3098za7, " registers\n", 11);
	      DEFINE_STRING(BGl_string3033z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3033za700za7za7s3099za7, ")", 1);
	      DEFINE_STRING(BGl_string3034z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3034za700za7za7s3100za7, " (of ", 5);
	      DEFINE_STRING(BGl_string3035z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3035za700za7za7s3101za7, "          stack coloring... ", 28);
	      DEFINE_STRING(BGl_string3036z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3036za700za7za7s3102za7, " spills", 7);
	      DEFINE_STRING(BGl_string3037z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3037za700za7za7s3103za7, " regs, ", 7);
	      DEFINE_STRING(BGl_string3038z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3038za700za7za7s3104za7, " temps -> ", 10);
	      DEFINE_STRING(BGl_string3039z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3039za700za7za7s3105za7, " h-regs, ", 9);
	     
		DEFINE_STATIC_BGL_GENERIC
		(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762protectza7d2int3106z00,
		BGl_z62protectzd2interferencez12za2zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	      DEFINE_STRING(BGl_string3040z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3040za700za7za7s3107za7, "          register coloring... ",
		31);
	      DEFINE_STRING(BGl_string3041z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3041za700za7za7s3108za7, " removed\n", 9);
	      DEFINE_STRING(BGl_string3042z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3042za700za7za7s3109za7, "          move... ", 18);
	      DEFINE_STRING(BGl_string3066z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3066za700za7za7s3110za7, "protect-interference1749", 24);
	      DEFINE_STRING(BGl_string3068z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3068za700za7za7s3111za7, "type-interference!1751", 22);
	      DEFINE_STRING(BGl_string3070z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3070za700za7za7s3112za7, "rtl-size1753", 12);
	      DEFINE_STRING(BGl_string3072z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3072za700za7za7s3113za7, "rtl-size", 8);
	      DEFINE_STRING(BGl_string3075z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3075za700za7za7s3114za7, "dump", 4);
	      DEFINE_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3076za700za7za7s3115za7, "saw_register-allocation", 23);
	      DEFINE_STRING(BGl_string3077z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_string3077za700za7za7s3116za7,
		"rtl_ins/ra spill in out obj def saw_register-allocation block/ra pair-nil last ",
		79);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2allocationzd2envz00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762registerza7d2al3117z00,
		BGl_z62registerzd2allocationzb0zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		4);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762typeza7d2interf3118z00,
		BGl_z62typezd2interferencez12za2zzsaw_registerzd2allocationzd2, 0L, BUNSPEC,
		2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3031z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3119za7,
		BGl_z62zc3z04anonymousza32173ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	extern obj_t BGl_dumpzd2envzd2zzsaw_defsz00;
	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3043z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2505za7623120z00,
		BGl_z62lambda2505z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3044z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2504za7623121z00,
		BGl_z62lambda2504z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3045z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2496za7623122z00,
		BGl_z62lambda2496z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3046z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3123za7,
		BGl_z62zc3z04anonymousza32495ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3047z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2492za7623124z00,
		BGl_z62lambda2492z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3048z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2487za7623125z00,
		BGl_z62lambda2487z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 5);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3049z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3126za7,
		BGl_z62zc3z04anonymousza32541ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3050z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2540za7623127z00,
		BGl_z62lambda2540z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3051z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2539za7623128z00,
		BGl_z62lambda2539z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3052z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3129za7,
		BGl_z62zc3z04anonymousza32551ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3053z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2550za7623130z00,
		BGl_z62lambda2550z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3054z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2549za7623131z00,
		BGl_z62lambda2549z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3055z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3132za7,
		BGl_z62zc3z04anonymousza32559ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3056z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2558za7623133z00,
		BGl_z62lambda2558z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3057z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2557za7623134z00,
		BGl_z62lambda2557z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3058z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3135za7,
		BGl_z62zc3z04anonymousza32569ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3059z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2568za7623136z00,
		BGl_z62lambda2568z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3060z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2567za7623137z00,
		BGl_z62lambda2567z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3061z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2527za7623138z00,
		BGl_z62lambda2527z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3062z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762za7c3za704anonymo3139za7,
		BGl_z62zc3z04anonymousza32526ze3ze5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3063z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2523za7623140z00,
		BGl_z62lambda2523z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3064z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762lambda2520za7623141z00,
		BGl_z62lambda2520z62zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 9);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3065z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762protectza7d2int3142z00,
		BGl_z62protectzd2interference1749zb0zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3067z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762typeza7d2interf3143z00,
		BGl_z62typezd2interferencez121751za2zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3069z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762rtlza7d2siza7a7e13144za7,
		BGl_z62rtlzd2siza7e1753z17zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3071z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762rtlza7d2siza7a7eza73145z00,
		BGl_z62rtlzd2siza7ezd2block1756zc5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3073z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762rtlza7d2siza7a7eza73146z00,
		BGl_z62rtlzd2siza7ezd2rtl_ins1758zc5zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc3074z00zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762dumpza7d2rtl_in3147z00,
		BGl_z62dumpzd2rtl_inszf2ra1760z42zzsaw_registerzd2allocationzd2, 0L,
		BUNSPEC, 3);
	extern obj_t BGl_collectzd2registerz12zd2envz12zzsaw_regutilsz00;
	   
		 
		DEFINE_STATIC_BGL_GENERIC
		(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
		BgL_bgl_za762rtlza7d2siza7a7eza73148z00,
		BGl_z62rtlzd2siza7ez17zzsaw_registerzd2allocationzd2, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2));
		     ADD_ROOT((void *) (&BGl_blockzf2razf2zzsaw_registerzd2allocationzd2));
		   
			 ADD_ROOT((void *) (&BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_registerzd2allocationzd2(long
		BgL_checksumz00_5072, char *BgL_fromz00_5073)
	{
		{
			if (CBOOL
				(BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2))
				{
					BGl_requirezd2initializa7ationz75zzsaw_registerzd2allocationzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_registerzd2allocationzd2();
					BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
					BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2();
					BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2();
					BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2();
					return BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"saw_register-allocation");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_register-allocation");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			{	/* SawMill/regalloc.scm 15 */
				obj_t BgL_cportz00_4921;

				{	/* SawMill/regalloc.scm 15 */
					obj_t BgL_stringz00_4929;

					BgL_stringz00_4929 = BGl_string3077z00zzsaw_registerzd2allocationzd2;
					{	/* SawMill/regalloc.scm 15 */
						obj_t BgL_startz00_4930;

						BgL_startz00_4930 = BINT(((long) 0));
						{	/* SawMill/regalloc.scm 15 */
							obj_t BgL_endz00_4931;

							BgL_endz00_4931 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4929)));
							{	/* SawMill/regalloc.scm 15 */

								BgL_cportz00_4921 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4929, BgL_startz00_4930, BgL_endz00_4931);
				}}}}
				{
					long BgL_iz00_4922;

					BgL_iz00_4922 = ((long) 9);
				BgL_loopz00_4923:
					if ((BgL_iz00_4922 == ((long) -1)))
						{	/* SawMill/regalloc.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/regalloc.scm 15 */
							{	/* SawMill/regalloc.scm 15 */
								obj_t BgL_arg3081z00_4925;

								{	/* SawMill/regalloc.scm 15 */

									{	/* SawMill/regalloc.scm 15 */
										obj_t BgL_locationz00_4927;

										BgL_locationz00_4927 = BBOOL(((bool_t) 0));
										{	/* SawMill/regalloc.scm 15 */

											BgL_arg3081z00_4925 =
												BGl_readz00zz__readerz00(BgL_cportz00_4921,
												BgL_locationz00_4927);
										}
									}
								}
								{	/* SawMill/regalloc.scm 15 */
									int BgL_tmpz00_5108;

									BgL_tmpz00_5108 = (int) (BgL_iz00_4922);
									CNST_TABLE_SET(BgL_tmpz00_5108, BgL_arg3081z00_4925);
							}}
							{	/* SawMill/regalloc.scm 15 */
								int BgL_auxz00_4928;

								BgL_auxz00_4928 = (int) ((BgL_iz00_4922 - ((long) 1)));
								{
									long BgL_iz00_5113;

									BgL_iz00_5113 = (long) (BgL_auxz00_4928);
									BgL_iz00_4922 = BgL_iz00_5113;
									goto BgL_loopz00_4923;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_registerzd2allocationzd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1988;

				BgL_headz00_1988 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1989;
					obj_t BgL_tailz00_1990;

					BgL_prevz00_1989 = BgL_headz00_1988;
					BgL_tailz00_1990 = BgL_l1z00_1;
				BgL_loopz00_1991:
					if (PAIRP(BgL_tailz00_1990))
						{
							obj_t BgL_newzd2prevzd2_1993;

							BgL_newzd2prevzd2_1993 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1990), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1989, BgL_newzd2prevzd2_1993);
							{
								obj_t BgL_tailz00_5123;
								obj_t BgL_prevz00_5122;

								BgL_prevz00_5122 = BgL_newzd2prevzd2_1993;
								BgL_tailz00_5123 = CDR(BgL_tailz00_1990);
								BgL_tailz00_1990 = BgL_tailz00_5123;
								BgL_prevz00_1989 = BgL_prevz00_5122;
								goto BgL_loopz00_1991;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1988);
				}
			}
		}

	}



/* register-allocation */
	BGL_EXPORTED_DEF obj_t
		BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_61, BgL_globalz00_bglt BgL_globalz00_62,
		obj_t BgL_paramsz00_63, obj_t BgL_blocksz00_64)
	{
		{	/* SawMill/regalloc.scm 50 */
			{	/* SawMill/regalloc.scm 51 */
				obj_t BgL_idz00_2008;

				BgL_idz00_2008 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_globalz00_62)))->BgL_idz00);
				{	/* SawMill/regalloc.scm 51 */
					obj_t BgL_pz00_2009;

					{	/* SawMill/regalloc.scm 52 */
						obj_t BgL__andtest_1185z00_2017;

						BgL__andtest_1185z00_2017 =
							BGl_za2sawzd2registerzd2allocationzf3za2zf3zzengine_paramz00;
						if (CBOOL(BgL__andtest_1185z00_2017))
							{	/* SawMill/regalloc.scm 53 */
								obj_t BgL__andtest_1186z00_2018;

								BgL__andtest_1186z00_2018 =
									BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_idz00_2008,
									BGl_za2sawzd2nozd2registerzd2allocationzd2functionsza2z00zzengine_paramz00);
								if (CBOOL(BgL__andtest_1186z00_2018))
									{	/* SawMill/regalloc.scm 53 */
										BgL_pz00_2009 = BFALSE;
									}
								else
									{	/* SawMill/regalloc.scm 53 */
										if (PAIRP
											(BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00))
											{	/* SawMill/regalloc.scm 54 */
												BgL_pz00_2009 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_idz00_2008,
													BGl_za2sawzd2registerzd2allocationzd2functionsza2zd2zzengine_paramz00);
											}
										else
											{	/* SawMill/regalloc.scm 56 */
												bool_t BgL__ortest_1187z00_2020;

												BgL__ortest_1187z00_2020 =
													(
													(long)
													CINT
													(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00)
													< ((long) 0));
												if (BgL__ortest_1187z00_2020)
													{	/* SawMill/regalloc.scm 56 */
														BgL_pz00_2009 = BBOOL(BgL__ortest_1187z00_2020);
													}
												else
													{	/* SawMill/regalloc.scm 57 */
														obj_t BgL_arg1811z00_2021;

														BgL_arg1811z00_2021 =
															BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
															(BgL_blocksz00_64);
														{	/* SawMill/regalloc.scm 57 */
															long BgL_n1z00_3829;
															long BgL_n2z00_3830;

															BgL_n1z00_3829 = (long) CINT(BgL_arg1811z00_2021);
															BgL_n2z00_3830 =
																(long)
																CINT
																(BGl_za2sawzd2registerzd2allocationzd2maxzd2siza7eza2za7zzengine_paramz00);
															BgL_pz00_2009 =
																BBOOL((BgL_n1z00_3829 < BgL_n2z00_3830));
							}}}}}
						else
							{	/* SawMill/regalloc.scm 52 */
								BgL_pz00_2009 = BFALSE;
							}
					}
					{	/* SawMill/regalloc.scm 52 */

						if (CBOOL(BgL_pz00_2009))
							{	/* SawMill/regalloc.scm 59 */
								BBOOL
									(BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
									(BgL_backz00_61, BgL_globalz00_62, BgL_paramsz00_63,
										BgL_blocksz00_64));
							}
						else
							{	/* SawMill/regalloc.scm 62 */
								obj_t BgL_arg1784z00_2010;
								obj_t BgL_arg1790z00_2011;

								BgL_arg1784z00_2010 =
									BGl_shapez00zztools_shapez00(((obj_t) BgL_globalz00_62));
								BgL_arg1790z00_2011 =
									BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
									(BgL_blocksz00_64);
								{	/* SawMill/regalloc.scm 61 */
									obj_t BgL_list1791z00_2012;

									{	/* SawMill/regalloc.scm 61 */
										obj_t BgL_arg1796z00_2013;

										{	/* SawMill/regalloc.scm 61 */
											obj_t BgL_arg1798z00_2014;

											{	/* SawMill/regalloc.scm 61 */
												obj_t BgL_arg1801z00_2015;

												{	/* SawMill/regalloc.scm 61 */
													obj_t BgL_arg1808z00_2016;

													BgL_arg1808z00_2016 =
														MAKE_YOUNG_PAIR
														(BGl_string3016z00zzsaw_registerzd2allocationzd2,
														BNIL);
													BgL_arg1801z00_2015 =
														MAKE_YOUNG_PAIR(BgL_arg1790z00_2011,
														BgL_arg1808z00_2016);
												}
												BgL_arg1798z00_2014 =
													MAKE_YOUNG_PAIR
													(BGl_string3017z00zzsaw_registerzd2allocationzd2,
													BgL_arg1801z00_2015);
											}
											BgL_arg1796z00_2013 =
												MAKE_YOUNG_PAIR(BgL_arg1784z00_2010,
												BgL_arg1798z00_2014);
										}
										BgL_list1791z00_2012 =
											MAKE_YOUNG_PAIR
											(BGl_string3018z00zzsaw_registerzd2allocationzd2,
											BgL_arg1796z00_2013);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1791z00_2012);
							}}
						return BgL_blocksz00_64;
					}
				}
			}
		}

	}



/* &register-allocation */
	obj_t BGl_z62registerzd2allocationzb0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4740, obj_t BgL_backz00_4741, obj_t BgL_globalz00_4742,
		obj_t BgL_paramsz00_4743, obj_t BgL_blocksz00_4744)
	{
		{	/* SawMill/regalloc.scm 50 */
			return
				BGl_registerzd2allocationzd2zzsaw_registerzd2allocationzd2(
				((BgL_backendz00_bglt) BgL_backz00_4741),
				((BgL_globalz00_bglt) BgL_globalz00_4742), BgL_paramsz00_4743,
				BgL_blocksz00_4744);
		}

	}



/* %register-allocation */
	bool_t
		BGl_z52registerzd2allocationz80zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_65, BgL_globalz00_bglt BgL_globalz00_66,
		obj_t BgL_paramsz00_67, obj_t BgL_blocksz00_68)
	{
		{	/* SawMill/regalloc.scm 69 */
			{	/* SawMill/regalloc.scm 71 */
				obj_t BgL_arg1820z00_2022;
				obj_t BgL_arg1821z00_2023;

				BgL_arg1820z00_2022 =
					BGl_shapez00zztools_shapez00(((obj_t) BgL_globalz00_66));
				BgL_arg1821z00_2023 =
					BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(BgL_blocksz00_68);
				{	/* SawMill/regalloc.scm 70 */
					obj_t BgL_list1822z00_2024;

					{	/* SawMill/regalloc.scm 70 */
						obj_t BgL_arg1823z00_2025;

						{	/* SawMill/regalloc.scm 70 */
							obj_t BgL_arg1824z00_2026;

							{	/* SawMill/regalloc.scm 70 */
								obj_t BgL_arg1825z00_2027;

								{	/* SawMill/regalloc.scm 70 */
									obj_t BgL_arg1826z00_2028;

									BgL_arg1826z00_2028 =
										MAKE_YOUNG_PAIR
										(BGl_string3019z00zzsaw_registerzd2allocationzd2, BNIL);
									BgL_arg1825z00_2027 =
										MAKE_YOUNG_PAIR(BgL_arg1821z00_2023, BgL_arg1826z00_2028);
								}
								BgL_arg1824z00_2026 =
									MAKE_YOUNG_PAIR
									(BGl_string3017z00zzsaw_registerzd2allocationzd2,
									BgL_arg1825z00_2027);
							}
							BgL_arg1823z00_2025 =
								MAKE_YOUNG_PAIR(BgL_arg1820z00_2022, BgL_arg1824z00_2026);
						}
						BgL_list1822z00_2024 =
							MAKE_YOUNG_PAIR(BGl_string3020z00zzsaw_registerzd2allocationzd2,
							BgL_arg1823z00_2025);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
						BgL_list1822z00_2024);
			}}
			BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2
				(BgL_blocksz00_68);
			{	/* SawMill/regalloc.scm 75 */
				obj_t BgL_cregsz00_2029;

				BgL_cregsz00_2029 =
					BGl_collectzd2registersz12zc0zzsaw_regutilsz00(BgL_blocksz00_68);
				{	/* SawMill/regalloc.scm 75 */
					obj_t BgL_hregsz00_2030;

					{	/* SawMill/regalloc.scm 76 */
						obj_t BgL_arg1873z00_2091;

						BgL_arg1873z00_2091 =
							(((BgL_backendz00_bglt) COBJECT(BgL_backz00_65))->
							BgL_registersz00);
						{	/* SawMill/regalloc.scm 76 */
							obj_t BgL_list1874z00_2092;

							BgL_list1874z00_2092 = MAKE_YOUNG_PAIR(BgL_arg1873z00_2091, BNIL);
							BgL_hregsz00_2030 =
								BGl_appendzd2mapz12zc0zz__r4_control_features_6_9z00
								(BGl_collectzd2registerz12zd2envz12zzsaw_regutilsz00,
								BgL_list1874z00_2092);
					}}
					{	/* SawMill/regalloc.scm 76 */
						obj_t BgL_pregsz00_2031;

						{	/* SawMill/regalloc.scm 77 */
							obj_t BgL_hook1544z00_2077;

							BgL_hook1544z00_2077 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							{
								obj_t BgL_l1541z00_2079;
								obj_t BgL_h1542z00_2080;

								BgL_l1541z00_2079 = BgL_paramsz00_67;
								BgL_h1542z00_2080 = BgL_hook1544z00_2077;
							BgL_zc3z04anonymousza31862ze3z87_2081:
								if (NULLP(BgL_l1541z00_2079))
									{	/* SawMill/regalloc.scm 77 */
										BgL_pregsz00_2031 = CDR(BgL_hook1544z00_2077);
									}
								else
									{	/* SawMill/regalloc.scm 77 */
										bool_t BgL_test3158z00_5181;

										{	/* SawMill/regalloc.scm 77 */
											obj_t BgL_arg1872z00_2089;

											BgL_arg1872z00_2089 = CAR(((obj_t) BgL_l1541z00_2079));
											BgL_test3158z00_5181 =
												BGl_isazf3zf3zz__objectz00(BgL_arg1872z00_2089,
												BGl_rtl_regzf2razf2zzsaw_regsetz00);
										}
										if (BgL_test3158z00_5181)
											{	/* SawMill/regalloc.scm 77 */
												obj_t BgL_nh1543z00_2085;

												{	/* SawMill/regalloc.scm 77 */
													obj_t BgL_arg1870z00_2087;

													BgL_arg1870z00_2087 =
														CAR(((obj_t) BgL_l1541z00_2079));
													{	/* SawMill/regalloc.scm 77 */
														obj_t BgL_res2758z00_3840;

														BgL_res2758z00_3840 =
															MAKE_YOUNG_PAIR(BgL_arg1870z00_2087, BNIL);
														BgL_nh1543z00_2085 = BgL_res2758z00_3840;
													}
												}
												SET_CDR(BgL_h1542z00_2080, BgL_nh1543z00_2085);
												{	/* SawMill/regalloc.scm 77 */
													obj_t BgL_arg1868z00_2086;

													BgL_arg1868z00_2086 =
														CDR(((obj_t) BgL_l1541z00_2079));
													{
														obj_t BgL_h1542z00_5192;
														obj_t BgL_l1541z00_5191;

														BgL_l1541z00_5191 = BgL_arg1868z00_2086;
														BgL_h1542z00_5192 = BgL_nh1543z00_2085;
														BgL_h1542z00_2080 = BgL_h1542z00_5192;
														BgL_l1541z00_2079 = BgL_l1541z00_5191;
														goto BgL_zc3z04anonymousza31862ze3z87_2081;
													}
												}
											}
										else
											{	/* SawMill/regalloc.scm 77 */
												obj_t BgL_arg1871z00_2088;

												BgL_arg1871z00_2088 = CDR(((obj_t) BgL_l1541z00_2079));
												{
													obj_t BgL_l1541z00_5195;

													BgL_l1541z00_5195 = BgL_arg1871z00_2088;
													BgL_l1541z00_2079 = BgL_l1541z00_5195;
													goto BgL_zc3z04anonymousza31862ze3z87_2081;
												}
											}
									}
							}
						}
						{	/* SawMill/regalloc.scm 77 */
							obj_t BgL_regsz00_2032;

							BgL_regsz00_2032 =
								BGl_appendzd221011zd2zzsaw_registerzd2allocationzd2
								(BgL_hregsz00_2030, BgL_cregsz00_2029);
							{	/* SawMill/regalloc.scm 78 */

								if (NULLP(BgL_cregsz00_2029))
									{	/* SawMill/regalloc.scm 79 */
										BFALSE;
									}
								else
									{	/* SawMill/regalloc.scm 79 */
										{
											obj_t BgL_l1545z00_2035;

											BgL_l1545z00_2035 = BgL_regsz00_2032;
										BgL_zc3z04anonymousza31828ze3z87_2036:
											if (PAIRP(BgL_l1545z00_2035))
												{	/* SawMill/regalloc.scm 81 */
													{	/* SawMill/regalloc.scm 82 */
														obj_t BgL_rz00_2038;

														BgL_rz00_2038 = CAR(BgL_l1545z00_2035);
														{
															BgL_rtl_regzf2razf2_bglt BgL_auxz00_5202;

															{
																obj_t BgL_auxz00_5203;

																{	/* SawMill/regalloc.scm 83 */
																	BgL_objectz00_bglt BgL_tmpz00_5204;

																	BgL_tmpz00_5204 =
																		((BgL_objectz00_bglt)
																		((BgL_rtl_regz00_bglt) BgL_rz00_2038));
																	BgL_auxz00_5203 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5204);
																}
																BgL_auxz00_5202 =
																	((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_5203);
															}
															((((BgL_rtl_regzf2razf2_bglt)
																		COBJECT(BgL_auxz00_5202))->
																	BgL_interferez00) =
																((obj_t) ((obj_t)
																		BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																		(BgL_regsz00_2032))), BUNSPEC);
														}
													}
													{
														obj_t BgL_l1545z00_5212;

														BgL_l1545z00_5212 = CDR(BgL_l1545z00_2035);
														BgL_l1545z00_2035 = BgL_l1545z00_5212;
														goto BgL_zc3z04anonymousza31828ze3z87_2036;
													}
												}
											else
												{	/* SawMill/regalloc.scm 81 */
													((bool_t) 1);
												}
										}
										{	/* SawMill/regalloc.scm 85 */
											long BgL_arg1831z00_2042;

											BgL_arg1831z00_2042 = bgl_list_length(BgL_hregsz00_2030);
											{	/* SawMill/regalloc.scm 85 */
												obj_t BgL_list1832z00_2043;

												{	/* SawMill/regalloc.scm 85 */
													obj_t BgL_arg1833z00_2044;

													{	/* SawMill/regalloc.scm 85 */
														obj_t BgL_arg1835z00_2045;

														BgL_arg1835z00_2045 =
															MAKE_YOUNG_PAIR
															(BGl_string3021z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg1833z00_2044 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1831z00_2042),
															BgL_arg1835z00_2045);
													}
													BgL_list1832z00_2043 =
														MAKE_YOUNG_PAIR
														(BGl_string3022z00zzsaw_registerzd2allocationzd2,
														BgL_arg1833z00_2044);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list1832z00_2043);
										}}
										{	/* SawMill/regalloc.scm 86 */
											long BgL_arg1836z00_2046;

											BgL_arg1836z00_2046 = bgl_list_length(BgL_pregsz00_2031);
											{	/* SawMill/regalloc.scm 86 */
												obj_t BgL_list1837z00_2047;

												{	/* SawMill/regalloc.scm 86 */
													obj_t BgL_arg1838z00_2048;

													{	/* SawMill/regalloc.scm 86 */
														obj_t BgL_arg1840z00_2049;

														BgL_arg1840z00_2049 =
															MAKE_YOUNG_PAIR
															(BGl_string3021z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg1838z00_2048 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1836z00_2046),
															BgL_arg1840z00_2049);
													}
													BgL_list1837z00_2047 =
														MAKE_YOUNG_PAIR
														(BGl_string3023z00zzsaw_registerzd2allocationzd2,
														BgL_arg1838z00_2048);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list1837z00_2047);
										}}
										{	/* SawMill/regalloc.scm 87 */
											long BgL_arg1841z00_2050;

											BgL_arg1841z00_2050 = bgl_list_length(BgL_cregsz00_2029);
											{	/* SawMill/regalloc.scm 87 */
												obj_t BgL_list1842z00_2051;

												{	/* SawMill/regalloc.scm 87 */
													obj_t BgL_arg1845z00_2052;

													{	/* SawMill/regalloc.scm 87 */
														obj_t BgL_arg1846z00_2053;

														BgL_arg1846z00_2053 =
															MAKE_YOUNG_PAIR
															(BGl_string3021z00zzsaw_registerzd2allocationzd2,
															BNIL);
														BgL_arg1845z00_2052 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg1841z00_2050),
															BgL_arg1846z00_2053);
													}
													BgL_list1842z00_2051 =
														MAKE_YOUNG_PAIR
														(BGl_string3024z00zzsaw_registerzd2allocationzd2,
														BgL_arg1845z00_2052);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
													BgL_list1842z00_2051);
										}}
										BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_68, BgL_regsz00_2032);
										BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_68, BgL_regsz00_2032);
										BGl_livenessz12z12zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_68, BgL_pregsz00_2031);
										BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_hregsz00_2030);
										BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_backz00_65, BgL_pregsz00_2031);
										BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
											(BgL_backz00_65, BgL_blocksz00_68);
										BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2
											(BgL_backz00_65, BgL_regsz00_2032);
										BGl_interferencez12z12zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_68, BgL_regsz00_2032);
										BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2
											(BgL_blocksz00_68);
										BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2
											(BgL_pregsz00_2031, BgL_hregsz00_2030, BgL_cregsz00_2029);
										BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2
											(BgL_hregsz00_2030, BgL_blocksz00_68);
										BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2
											(BgL_pregsz00_2031, BgL_cregsz00_2029, BgL_blocksz00_68);
										if (((long) CINT(BGl_za2optimza2z00zzengine_paramz00) >
												((long) 1)))
											{	/* SawMill/regalloc.scm 115 */
												BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2
													(BgL_blocksz00_68);
											}
										else
											{	/* SawMill/regalloc.scm 115 */
												BFALSE;
											}
									}
								{
									obj_t BgL_l1547z00_2056;

									BgL_l1547z00_2056 = BgL_regsz00_2032;
								BgL_zc3z04anonymousza31848ze3z87_2057:
									if (PAIRP(BgL_l1547z00_2056))
										{	/* SawMill/regalloc.scm 120 */
											{	/* SawMill/regalloc.scm 120 */
												obj_t BgL_o1549z00_2059;

												BgL_o1549z00_2059 = CAR(BgL_l1547z00_2056);
												{	/* SawMill/regalloc.scm 120 */
													long BgL_arg1850z00_2060;

													{	/* SawMill/regalloc.scm 120 */
														obj_t BgL_arg1851z00_2061;

														{	/* SawMill/regalloc.scm 120 */
															obj_t BgL_arg1852z00_2062;

															{	/* SawMill/regalloc.scm 120 */
																long BgL_arg1816z00_3854;

																{	/* SawMill/regalloc.scm 120 */
																	long BgL_arg1817z00_3855;

																	{	/* SawMill/regalloc.scm 120 */
																		long BgL_res2763z00_3857;

																		BgL_res2763z00_3857 =
																			BGL_OBJECT_CLASS_NUM(
																			((BgL_objectz00_bglt) BgL_o1549z00_2059));
																		BgL_arg1817z00_3855 = BgL_res2763z00_3857;
																	}
																	BgL_arg1816z00_3854 =
																		(BgL_arg1817z00_3855 - OBJECT_TYPE);
																}
																BgL_arg1852z00_2062 =
																	VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
																	BgL_arg1816z00_3854);
															}
															BgL_arg1851z00_2061 =
																BGl_classzd2superzd2zz__objectz00
																(BgL_arg1852z00_2062);
														}
														{	/* SawMill/regalloc.scm 120 */
															long BgL_res2765z00_3864;

															{	/* SawMill/regalloc.scm 120 */
																obj_t BgL_tmpz00_5259;

																BgL_tmpz00_5259 = ((obj_t) BgL_arg1851z00_2061);
																BgL_res2765z00_3864 =
																	BGL_CLASS_INDEX(BgL_tmpz00_5259);
															}
															BgL_arg1850z00_2060 = BgL_res2765z00_3864;
													}}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_o1549z00_2059),
														BgL_arg1850z00_2060);
												}
												{	/* SawMill/regalloc.scm 120 */
													BgL_objectz00_bglt BgL_tmpz00_5264;

													BgL_tmpz00_5264 =
														((BgL_objectz00_bglt) BgL_o1549z00_2059);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5264, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_o1549z00_2059);
												BgL_o1549z00_2059;
											}
											{
												obj_t BgL_l1547z00_5268;

												BgL_l1547z00_5268 = CDR(BgL_l1547z00_2056);
												BgL_l1547z00_2056 = BgL_l1547z00_5268;
												goto BgL_zc3z04anonymousza31848ze3z87_2057;
											}
										}
									else
										{	/* SawMill/regalloc.scm 120 */
											((bool_t) 1);
										}
								}
								{
									obj_t BgL_l1550z00_2066;

									BgL_l1550z00_2066 = BgL_pregsz00_2031;
								BgL_zc3z04anonymousza31854ze3z87_2067:
									if (PAIRP(BgL_l1550z00_2066))
										{	/* SawMill/regalloc.scm 121 */
											{	/* SawMill/regalloc.scm 121 */
												obj_t BgL_rz00_2069;

												BgL_rz00_2069 = CAR(BgL_l1550z00_2066);
												if (BGl_isazf3zf3zz__objectz00(BgL_rz00_2069,
														BGl_rtl_regzf2razf2zzsaw_regsetz00))
													{	/* SawMill/regalloc.scm 121 */
														{	/* SawMill/regalloc.scm 121 */
															long BgL_arg1857z00_2072;

															{	/* SawMill/regalloc.scm 121 */
																obj_t BgL_arg1858z00_2073;

																{	/* SawMill/regalloc.scm 121 */
																	obj_t BgL_arg1859z00_2074;

																	{	/* SawMill/regalloc.scm 121 */
																		long BgL_arg1816z00_3872;

																		{	/* SawMill/regalloc.scm 121 */
																			long BgL_arg1817z00_3873;

																			{	/* SawMill/regalloc.scm 121 */
																				long BgL_res2767z00_3875;

																				BgL_res2767z00_3875 =
																					BGL_OBJECT_CLASS_NUM(
																					((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_rz00_2069)));
																				BgL_arg1817z00_3873 =
																					BgL_res2767z00_3875;
																			}
																			BgL_arg1816z00_3872 =
																				(BgL_arg1817z00_3873 - OBJECT_TYPE);
																		}
																		BgL_arg1859z00_2074 =
																			VECTOR_REF
																			(BGl_za2classesza2z00zz__objectz00,
																			BgL_arg1816z00_3872);
																	}
																	BgL_arg1858z00_2073 =
																		BGl_classzd2superzd2zz__objectz00
																		(BgL_arg1859z00_2074);
																}
																{	/* SawMill/regalloc.scm 121 */
																	long BgL_res2769z00_3882;

																	{	/* SawMill/regalloc.scm 121 */
																		obj_t BgL_tmpz00_5281;

																		BgL_tmpz00_5281 =
																			((obj_t) BgL_arg1858z00_2073);
																		BgL_res2769z00_3882 =
																			BGL_CLASS_INDEX(BgL_tmpz00_5281);
																	}
																	BgL_arg1857z00_2072 = BgL_res2769z00_3882;
															}}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_rz00_2069)),
																BgL_arg1857z00_2072);
														}
														{	/* SawMill/regalloc.scm 121 */
															BgL_objectz00_bglt BgL_tmpz00_5287;

															BgL_tmpz00_5287 =
																((BgL_objectz00_bglt)
																((BgL_rtl_regz00_bglt) BgL_rz00_2069));
															BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5287, BFALSE);
														}
														((BgL_objectz00_bglt)
															((BgL_rtl_regz00_bglt) BgL_rz00_2069));
														((obj_t) ((BgL_rtl_regz00_bglt) BgL_rz00_2069));
													}
												else
													{	/* SawMill/regalloc.scm 121 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1550z00_5295;

												BgL_l1550z00_5295 = CDR(BgL_l1550z00_2066);
												BgL_l1550z00_2066 = BgL_l1550z00_5295;
												goto BgL_zc3z04anonymousza31854ze3z87_2067;
											}
										}
									else
										{	/* SawMill/regalloc.scm 121 */
											return ((bool_t) 1);
										}
								}
							}
						}
					}
				}
			}
		}

	}



/* widen-ra! */
	bool_t BGl_widenzd2raz12zc0zzsaw_registerzd2allocationzd2(obj_t BgL_oz00_69,
		obj_t BgL_regsz00_70)
	{
		{	/* SawMill/regalloc.scm 129 */
			{
				obj_t BgL_oz00_2155;
				obj_t BgL_oz00_2197;

				{
					obj_t BgL_l1579z00_2098;

					BgL_l1579z00_2098 = BgL_oz00_69;
				BgL_zc3z04anonymousza31875ze3z87_2099:
					if (PAIRP(BgL_l1579z00_2098))
						{	/* SawMill/regalloc.scm 157 */
							BgL_oz00_2197 = CAR(BgL_l1579z00_2098);
							{	/* SawMill/regalloc.scm 153 */
								obj_t BgL_lastz00_2200;

								BgL_lastz00_2200 =
									bgl_reverse(
									(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_oz00_2197)))->BgL_firstz00));
								{	/* SawMill/regalloc.scm 154 */
									obj_t BgL_g1578z00_2201;

									BgL_g1578z00_2201 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_oz00_2197)))->BgL_firstz00);
									{
										obj_t BgL_l1576z00_2203;

										BgL_l1576z00_2203 = BgL_g1578z00_2201;
									BgL_zc3z04anonymousza31932ze3z87_2204:
										if (PAIRP(BgL_l1576z00_2203))
											{	/* SawMill/regalloc.scm 154 */
												BgL_oz00_2155 = CAR(BgL_l1576z00_2203);
												{	/* SawMill/regalloc.scm 143 */
													BgL_rtl_inszf2razf2_bglt BgL_wide1198z00_2160;

													BgL_wide1198z00_2160 =
														((BgL_rtl_inszf2razf2_bglt)
														BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_rtl_inszf2razf2_bgl))));
													{	/* SawMill/regalloc.scm 143 */
														obj_t BgL_auxz00_5311;
														BgL_objectz00_bglt BgL_tmpz00_5307;

														BgL_auxz00_5311 = ((obj_t) BgL_wide1198z00_2160);
														BgL_tmpz00_5307 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt)
																((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
														BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5307,
															BgL_auxz00_5311);
													}
													((BgL_objectz00_bglt)
														((BgL_rtl_insz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
													{	/* SawMill/regalloc.scm 143 */
														long BgL_arg1908z00_2161;

														{	/* SawMill/regalloc.scm 143 */
															long BgL_res2780z00_3920;

															BgL_res2780z00_3920 =
																BGL_CLASS_INDEX
																(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
															BgL_arg1908z00_2161 = BgL_res2780z00_3920;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2155))),
															BgL_arg1908z00_2161);
													}
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
												}
												{
													obj_t BgL_auxz00_5333;
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5325;

													{	/* SawMill/regalloc.scm 144 */
														bool_t BgL_test3167z00_5334;

														if (CBOOL(
																(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt) BgL_oz00_2155)))->
																	BgL_destz00)))
															{	/* SawMill/regalloc.scm 144 */
																BgL_test3167z00_5334 =
																	CBOOL(
																	(((BgL_rtl_regz00_bglt) COBJECT(
																				((BgL_rtl_regz00_bglt)
																					(((BgL_rtl_insz00_bglt) COBJECT(
																								((BgL_rtl_insz00_bglt)
																									BgL_oz00_2155)))->
																						BgL_destz00))))->BgL_onexprzf3zf3));
															}
														else
															{	/* SawMill/regalloc.scm 144 */
																BgL_test3167z00_5334 = ((bool_t) 1);
															}
														if (BgL_test3167z00_5334)
															{	/* SawMill/regalloc.scm 144 */
																BgL_auxz00_5333 =
																	((obj_t)
																	BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																	(BgL_regsz00_70));
															}
														else
															{	/* SawMill/regalloc.scm 146 */
																obj_t BgL_arg1912z00_2166;

																{	/* SawMill/regalloc.scm 146 */
																	BgL_rtl_regz00_bglt BgL_arg1913z00_2167;

																	{	/* SawMill/regalloc.scm 146 */
																		obj_t BgL_arg1915z00_2169;

																		BgL_arg1915z00_2169 =
																			(((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						BgL_oz00_2155)))->BgL_destz00);
																		BgL_arg1913z00_2167 =
																			BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																			(((BgL_rtl_regz00_bglt)
																				BgL_arg1915z00_2169));
																	}
																	{	/* SawMill/regalloc.scm 146 */
																		obj_t BgL_list1914z00_2168;

																		BgL_list1914z00_2168 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg1913z00_2167), BNIL);
																		BgL_arg1912z00_2166 = BgL_list1914z00_2168;
																	}
																}
																BgL_auxz00_5333 =
																	((obj_t)
																	BGl_listzd2ze3regsetz31zzsaw_regsetz00
																	(BgL_arg1912z00_2166, BgL_regsz00_70));
															}
													}
													{
														obj_t BgL_auxz00_5326;

														{	/* SawMill/regalloc.scm 144 */
															BgL_objectz00_bglt BgL_tmpz00_5327;

															BgL_tmpz00_5327 =
																((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
															BgL_auxz00_5326 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5327);
														}
														BgL_auxz00_5325 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5326);
													}
													((((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5325))->BgL_defz00) =
														((obj_t) BgL_auxz00_5333), BUNSPEC);
												}
												{
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5355;

													{
														obj_t BgL_auxz00_5356;

														{	/* SawMill/regalloc.scm 148 */
															BgL_objectz00_bglt BgL_tmpz00_5357;

															BgL_tmpz00_5357 =
																((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
															BgL_auxz00_5356 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5357);
														}
														BgL_auxz00_5355 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5356);
													}
													((((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5355))->BgL_outz00) =
														((obj_t) ((obj_t)
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_70))), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_5374;
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5366;

													{	/* SawMill/regalloc.scm 147 */
														obj_t BgL_arg1917z00_2172;

														{	/* SawMill/regalloc.scm 147 */
															obj_t BgL_l1567z00_2173;

															BgL_l1567z00_2173 =
																BGl_getzd2argsze70z35zzsaw_registerzd2allocationzd2
																(BgL_oz00_2155);
															if (NULLP(BgL_l1567z00_2173))
																{	/* SawMill/regalloc.scm 147 */
																	BgL_arg1917z00_2172 = BNIL;
																}
															else
																{	/* SawMill/regalloc.scm 147 */
																	obj_t BgL_head1569z00_2175;

																	{	/* SawMill/regalloc.scm 147 */
																		BgL_rtl_regz00_bglt BgL_arg1925z00_2187;

																		{	/* SawMill/regalloc.scm 147 */
																			obj_t BgL_arg1926z00_2188;

																			BgL_arg1926z00_2188 =
																				CAR(((obj_t) BgL_l1567z00_2173));
																			BgL_arg1925z00_2187 =
																				BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																				(((BgL_rtl_regz00_bglt)
																					BgL_arg1926z00_2188));
																		}
																		{	/* SawMill/regalloc.scm 147 */
																			obj_t BgL_res2783z00_3930;

																			BgL_res2783z00_3930 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1925z00_2187), BNIL);
																			BgL_head1569z00_2175 =
																				BgL_res2783z00_3930;
																		}
																	}
																	{	/* SawMill/regalloc.scm 147 */
																		obj_t BgL_g1572z00_2176;

																		BgL_g1572z00_2176 =
																			CDR(((obj_t) BgL_l1567z00_2173));
																		{
																			obj_t BgL_l1567z00_2178;
																			obj_t BgL_tail1570z00_2179;

																			BgL_l1567z00_2178 = BgL_g1572z00_2176;
																			BgL_tail1570z00_2179 =
																				BgL_head1569z00_2175;
																		BgL_zc3z04anonymousza31919ze3z87_2180:
																			if (NULLP(BgL_l1567z00_2178))
																				{	/* SawMill/regalloc.scm 147 */
																					BgL_arg1917z00_2172 =
																						BgL_head1569z00_2175;
																				}
																			else
																				{	/* SawMill/regalloc.scm 147 */
																					obj_t BgL_newtail1571z00_2182;

																					{	/* SawMill/regalloc.scm 147 */
																						BgL_rtl_regz00_bglt
																							BgL_arg1923z00_2184;
																						{	/* SawMill/regalloc.scm 147 */
																							obj_t BgL_arg1924z00_2185;

																							BgL_arg1924z00_2185 =
																								CAR(
																								((obj_t) BgL_l1567z00_2178));
																							BgL_arg1923z00_2184 =
																								BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																								(((BgL_rtl_regz00_bglt)
																									BgL_arg1924z00_2185));
																						}
																						{	/* SawMill/regalloc.scm 147 */
																							obj_t BgL_res2785z00_3934;

																							BgL_res2785z00_3934 =
																								MAKE_YOUNG_PAIR(
																								((obj_t) BgL_arg1923z00_2184),
																								BNIL);
																							BgL_newtail1571z00_2182 =
																								BgL_res2785z00_3934;
																						}
																					}
																					SET_CDR(BgL_tail1570z00_2179,
																						BgL_newtail1571z00_2182);
																					{	/* SawMill/regalloc.scm 147 */
																						obj_t BgL_arg1921z00_2183;

																						BgL_arg1921z00_2183 =
																							CDR(((obj_t) BgL_l1567z00_2178));
																						{
																							obj_t BgL_tail1570z00_5398;
																							obj_t BgL_l1567z00_5397;

																							BgL_l1567z00_5397 =
																								BgL_arg1921z00_2183;
																							BgL_tail1570z00_5398 =
																								BgL_newtail1571z00_2182;
																							BgL_tail1570z00_2179 =
																								BgL_tail1570z00_5398;
																							BgL_l1567z00_2178 =
																								BgL_l1567z00_5397;
																							goto
																								BgL_zc3z04anonymousza31919ze3z87_2180;
																						}
																					}
																				}
																		}
																	}
																}
														}
														BgL_auxz00_5374 =
															((obj_t)
															BGl_listzd2ze3regsetz31zzsaw_regsetz00
															(BgL_arg1917z00_2172, BgL_regsz00_70));
													}
													{
														obj_t BgL_auxz00_5367;

														{	/* SawMill/regalloc.scm 147 */
															BgL_objectz00_bglt BgL_tmpz00_5368;

															BgL_tmpz00_5368 =
																((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
															BgL_auxz00_5367 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5368);
														}
														BgL_auxz00_5366 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5367);
													}
													((((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5366))->BgL_inz00) =
														((obj_t) BgL_auxz00_5374), BUNSPEC);
												}
												{
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5402;

													{
														obj_t BgL_auxz00_5403;

														{	/* SawMill/regalloc.scm 149 */
															BgL_objectz00_bglt BgL_tmpz00_5404;

															BgL_tmpz00_5404 =
																((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2155)));
															BgL_auxz00_5403 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5404);
														}
														BgL_auxz00_5402 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5403);
													}
													((((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5402))->BgL_spillz00) =
														((obj_t) ((obj_t)
																BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
																(BgL_regsz00_70))), BUNSPEC);
												}
												((BgL_rtl_insz00_bglt)
													((BgL_rtl_insz00_bglt) BgL_oz00_2155));
												{	/* SawMill/regalloc.scm 150 */
													obj_t BgL_g1575z00_2189;

													BgL_g1575z00_2189 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_oz00_2155)))->
														BgL_argsz00);
													{
														obj_t BgL_l1573z00_2191;

														BgL_l1573z00_2191 = BgL_g1575z00_2189;
													BgL_zc3z04anonymousza31927ze3z87_2192:
														if (PAIRP(BgL_l1573z00_2191))
															{	/* SawMill/regalloc.scm 150 */
																BGl_argszd2widenzd2raz12ze70zf5zzsaw_registerzd2allocationzd2
																	(BgL_regsz00_70, CAR(BgL_l1573z00_2191));
																{
																	obj_t BgL_l1573z00_5421;

																	BgL_l1573z00_5421 = CDR(BgL_l1573z00_2191);
																	BgL_l1573z00_2191 = BgL_l1573z00_5421;
																	goto BgL_zc3z04anonymousza31927ze3z87_2192;
																}
															}
														else
															{	/* SawMill/regalloc.scm 150 */
																((bool_t) 1);
															}
													}
												}
												{
													obj_t BgL_l1576z00_5424;

													BgL_l1576z00_5424 = CDR(BgL_l1576z00_2203);
													BgL_l1576z00_2203 = BgL_l1576z00_5424;
													goto BgL_zc3z04anonymousza31932ze3z87_2204;
												}
											}
										else
											{	/* SawMill/regalloc.scm 154 */
												((bool_t) 1);
											}
									}
								}
								{	/* SawMill/regalloc.scm 155 */
									BgL_blockzf2razf2_bglt BgL_wide1203z00_2211;

									BgL_wide1203z00_2211 =
										((BgL_blockzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_blockzf2razf2_bgl))));
									{	/* SawMill/regalloc.scm 155 */
										obj_t BgL_auxz00_5431;
										BgL_objectz00_bglt BgL_tmpz00_5427;

										BgL_auxz00_5431 = ((obj_t) BgL_wide1203z00_2211);
										BgL_tmpz00_5427 =
											((BgL_objectz00_bglt)
											((BgL_blockz00_bglt)
												((BgL_blockz00_bglt) BgL_oz00_2197)));
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5427, BgL_auxz00_5431);
									}
									((BgL_objectz00_bglt)
										((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2197)));
									{	/* SawMill/regalloc.scm 155 */
										long BgL_arg1936z00_2212;

										{	/* SawMill/regalloc.scm 155 */
											long BgL_res2788z00_3946;

											BgL_res2788z00_3946 =
												BGL_CLASS_INDEX
												(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
											BgL_arg1936z00_2212 = BgL_res2788z00_3946;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt)
												((BgL_blockz00_bglt)
													((BgL_blockz00_bglt) BgL_oz00_2197))),
											BgL_arg1936z00_2212);
									}
									((BgL_blockz00_bglt)
										((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2197)));
								}
								{
									BgL_blockzf2razf2_bglt BgL_auxz00_5445;

									{
										obj_t BgL_auxz00_5446;

										{	/* SawMill/regalloc.scm 156 */
											BgL_objectz00_bglt BgL_tmpz00_5447;

											BgL_tmpz00_5447 =
												((BgL_objectz00_bglt)
												((BgL_blockz00_bglt)
													((BgL_blockz00_bglt) BgL_oz00_2197)));
											BgL_auxz00_5446 = BGL_OBJECT_WIDENING(BgL_tmpz00_5447);
										}
										BgL_auxz00_5445 =
											((BgL_blockzf2razf2_bglt) BgL_auxz00_5446);
									}
									((((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_5445))->
											BgL_lastz00) = ((obj_t) BgL_lastz00_2200), BUNSPEC);
								}
								((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_2197));
							}
							{
								obj_t BgL_l1579z00_5457;

								BgL_l1579z00_5457 = CDR(BgL_l1579z00_2098);
								BgL_l1579z00_2098 = BgL_l1579z00_5457;
								goto BgL_zc3z04anonymousza31875ze3z87_2099;
							}
						}
					else
						{	/* SawMill/regalloc.scm 157 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* get-args~0 */
	obj_t BGl_getzd2argsze70z35zzsaw_registerzd2allocationzd2(obj_t BgL_oz00_2104)
	{
		{	/* SawMill/regalloc.scm 131 */
			{	/* SawMill/regalloc.scm 131 */
				obj_t BgL_hook1556z00_2106;

				BgL_hook1556z00_2106 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
				{	/* SawMill/regalloc.scm 131 */
					obj_t BgL_g1557z00_2107;

					BgL_g1557z00_2107 =
						BGl_rtl_inszd2argsza2z70zzsaw_defsz00(
						((BgL_rtl_insz00_bglt) BgL_oz00_2104));
					{
						obj_t BgL_l1553z00_2109;
						obj_t BgL_h1554z00_2110;

						BgL_l1553z00_2109 = BgL_g1557z00_2107;
						BgL_h1554z00_2110 = BgL_hook1556z00_2106;
					BgL_zc3z04anonymousza31880ze3z87_2111:
						if (NULLP(BgL_l1553z00_2109))
							{	/* SawMill/regalloc.scm 131 */
								return CDR(BgL_hook1556z00_2106);
							}
						else
							{	/* SawMill/regalloc.scm 131 */
								bool_t BgL_test3173z00_5465;

								{	/* SawMill/regalloc.scm 131 */
									obj_t BgL_arg1887z00_2119;

									BgL_arg1887z00_2119 = CAR(((obj_t) BgL_l1553z00_2109));
									BgL_test3173z00_5465 =
										BGl_isazf3zf3zz__objectz00(BgL_arg1887z00_2119,
										BGl_rtl_regzf2razf2zzsaw_regsetz00);
								}
								if (BgL_test3173z00_5465)
									{	/* SawMill/regalloc.scm 131 */
										obj_t BgL_nh1555z00_2115;

										{	/* SawMill/regalloc.scm 131 */
											obj_t BgL_arg1885z00_2117;

											BgL_arg1885z00_2117 = CAR(((obj_t) BgL_l1553z00_2109));
											{	/* SawMill/regalloc.scm 131 */
												obj_t BgL_res2772z00_3892;

												BgL_res2772z00_3892 =
													MAKE_YOUNG_PAIR(BgL_arg1885z00_2117, BNIL);
												BgL_nh1555z00_2115 = BgL_res2772z00_3892;
											}
										}
										SET_CDR(BgL_h1554z00_2110, BgL_nh1555z00_2115);
										{	/* SawMill/regalloc.scm 131 */
											obj_t BgL_arg1884z00_2116;

											BgL_arg1884z00_2116 = CDR(((obj_t) BgL_l1553z00_2109));
											{
												obj_t BgL_h1554z00_5476;
												obj_t BgL_l1553z00_5475;

												BgL_l1553z00_5475 = BgL_arg1884z00_2116;
												BgL_h1554z00_5476 = BgL_nh1555z00_2115;
												BgL_h1554z00_2110 = BgL_h1554z00_5476;
												BgL_l1553z00_2109 = BgL_l1553z00_5475;
												goto BgL_zc3z04anonymousza31880ze3z87_2111;
											}
										}
									}
								else
									{	/* SawMill/regalloc.scm 131 */
										obj_t BgL_arg1886z00_2118;

										BgL_arg1886z00_2118 = CDR(((obj_t) BgL_l1553z00_2109));
										{
											obj_t BgL_l1553z00_5479;

											BgL_l1553z00_5479 = BgL_arg1886z00_2118;
											BgL_l1553z00_2109 = BgL_l1553z00_5479;
											goto BgL_zc3z04anonymousza31880ze3z87_2111;
										}
									}
							}
					}
				}
			}
		}

	}



/* args-widen-ra!~0 */
	bool_t BGl_argszd2widenzd2raz12ze70zf5zzsaw_registerzd2allocationzd2(obj_t
		BgL_regsz00_4919, obj_t BgL_oz00_2121)
	{
		{	/* SawMill/regalloc.scm 140 */
			if (BGl_isazf3zf3zz__objectz00(BgL_oz00_2121,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMill/regalloc.scm 133 */
					{	/* SawMill/regalloc.scm 135 */
						BgL_rtl_inszf2razf2_bglt BgL_wide1193z00_2127;

						BgL_wide1193z00_2127 =
							((BgL_rtl_inszf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_rtl_inszf2razf2_bgl))));
						{	/* SawMill/regalloc.scm 135 */
							obj_t BgL_auxz00_5487;
							BgL_objectz00_bglt BgL_tmpz00_5483;

							BgL_auxz00_5487 = ((obj_t) BgL_wide1193z00_2127);
							BgL_tmpz00_5483 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5483, BgL_auxz00_5487);
						}
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
						{	/* SawMill/regalloc.scm 135 */
							long BgL_arg1891z00_2128;

							{	/* SawMill/regalloc.scm 135 */
								long BgL_res2774z00_3899;

								BgL_res2774z00_3899 =
									BGL_CLASS_INDEX
									(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
								BgL_arg1891z00_2128 = BgL_res2774z00_3899;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2121))),
								BgL_arg1891z00_2128);
						}
						((BgL_rtl_insz00_bglt)
							((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
					}
					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_5501;

						{
							obj_t BgL_auxz00_5502;

							{	/* SawMill/regalloc.scm 136 */
								BgL_objectz00_bglt BgL_tmpz00_5503;

								BgL_tmpz00_5503 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
								BgL_auxz00_5502 = BGL_OBJECT_WIDENING(BgL_tmpz00_5503);
							}
							BgL_auxz00_5501 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5502);
						}
						((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5501))->
								BgL_defz00) =
							((obj_t) ((obj_t)
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
									(BgL_regsz00_4919))), BUNSPEC);
					}
					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_5512;

						{
							obj_t BgL_auxz00_5513;

							{	/* SawMill/regalloc.scm 138 */
								BgL_objectz00_bglt BgL_tmpz00_5514;

								BgL_tmpz00_5514 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
								BgL_auxz00_5513 = BGL_OBJECT_WIDENING(BgL_tmpz00_5514);
							}
							BgL_auxz00_5512 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5513);
						}
						((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5512))->
								BgL_outz00) =
							((obj_t) ((obj_t)
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
									(BgL_regsz00_4919))), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_5531;
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_5523;

						{	/* SawMill/regalloc.scm 137 */
							obj_t BgL_arg1892z00_2130;

							{	/* SawMill/regalloc.scm 137 */
								obj_t BgL_l1558z00_2131;

								BgL_l1558z00_2131 =
									BGl_getzd2argsze70z35zzsaw_registerzd2allocationzd2
									(BgL_oz00_2121);
								if (NULLP(BgL_l1558z00_2131))
									{	/* SawMill/regalloc.scm 137 */
										BgL_arg1892z00_2130 = BNIL;
									}
								else
									{	/* SawMill/regalloc.scm 137 */
										obj_t BgL_head1560z00_2133;

										{	/* SawMill/regalloc.scm 137 */
											BgL_rtl_regz00_bglt BgL_arg1901z00_2145;

											{	/* SawMill/regalloc.scm 137 */
												obj_t BgL_arg1902z00_2146;

												BgL_arg1902z00_2146 = CAR(((obj_t) BgL_l1558z00_2131));
												BgL_arg1901z00_2145 =
													BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
													(((BgL_rtl_regz00_bglt) BgL_arg1902z00_2146));
											}
											{	/* SawMill/regalloc.scm 137 */
												obj_t BgL_res2776z00_3907;

												BgL_res2776z00_3907 =
													MAKE_YOUNG_PAIR(((obj_t) BgL_arg1901z00_2145), BNIL);
												BgL_head1560z00_2133 = BgL_res2776z00_3907;
											}
										}
										{	/* SawMill/regalloc.scm 137 */
											obj_t BgL_g1563z00_2134;

											BgL_g1563z00_2134 = CDR(((obj_t) BgL_l1558z00_2131));
											{
												obj_t BgL_l1558z00_2136;
												obj_t BgL_tail1561z00_2137;

												BgL_l1558z00_2136 = BgL_g1563z00_2134;
												BgL_tail1561z00_2137 = BgL_head1560z00_2133;
											BgL_zc3z04anonymousza31894ze3z87_2138:
												if (NULLP(BgL_l1558z00_2136))
													{	/* SawMill/regalloc.scm 137 */
														BgL_arg1892z00_2130 = BgL_head1560z00_2133;
													}
												else
													{	/* SawMill/regalloc.scm 137 */
														obj_t BgL_newtail1562z00_2140;

														{	/* SawMill/regalloc.scm 137 */
															BgL_rtl_regz00_bglt BgL_arg1897z00_2142;

															{	/* SawMill/regalloc.scm 137 */
																obj_t BgL_arg1898z00_2143;

																BgL_arg1898z00_2143 =
																	CAR(((obj_t) BgL_l1558z00_2136));
																BgL_arg1897z00_2142 =
																	BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2
																	(((BgL_rtl_regz00_bglt) BgL_arg1898z00_2143));
															}
															{	/* SawMill/regalloc.scm 137 */
																obj_t BgL_res2778z00_3911;

																BgL_res2778z00_3911 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1897z00_2142), BNIL);
																BgL_newtail1562z00_2140 = BgL_res2778z00_3911;
															}
														}
														SET_CDR(BgL_tail1561z00_2137,
															BgL_newtail1562z00_2140);
														{	/* SawMill/regalloc.scm 137 */
															obj_t BgL_arg1896z00_2141;

															BgL_arg1896z00_2141 =
																CDR(((obj_t) BgL_l1558z00_2136));
															{
																obj_t BgL_tail1561z00_5555;
																obj_t BgL_l1558z00_5554;

																BgL_l1558z00_5554 = BgL_arg1896z00_2141;
																BgL_tail1561z00_5555 = BgL_newtail1562z00_2140;
																BgL_tail1561z00_2137 = BgL_tail1561z00_5555;
																BgL_l1558z00_2136 = BgL_l1558z00_5554;
																goto BgL_zc3z04anonymousza31894ze3z87_2138;
															}
														}
													}
											}
										}
									}
							}
							BgL_auxz00_5531 =
								((obj_t)
								BGl_listzd2ze3regsetz31zzsaw_regsetz00(BgL_arg1892z00_2130,
									BgL_regsz00_4919));
						}
						{
							obj_t BgL_auxz00_5524;

							{	/* SawMill/regalloc.scm 137 */
								BgL_objectz00_bglt BgL_tmpz00_5525;

								BgL_tmpz00_5525 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
								BgL_auxz00_5524 = BGL_OBJECT_WIDENING(BgL_tmpz00_5525);
							}
							BgL_auxz00_5523 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5524);
						}
						((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5523))->
								BgL_inz00) = ((obj_t) BgL_auxz00_5531), BUNSPEC);
					}
					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_5559;

						{
							obj_t BgL_auxz00_5560;

							{	/* SawMill/regalloc.scm 139 */
								BgL_objectz00_bglt BgL_tmpz00_5561;

								BgL_tmpz00_5561 =
									((BgL_objectz00_bglt)
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_oz00_2121)));
								BgL_auxz00_5560 = BGL_OBJECT_WIDENING(BgL_tmpz00_5561);
							}
							BgL_auxz00_5559 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5560);
						}
						((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5559))->
								BgL_spillz00) =
							((obj_t) ((obj_t)
									BGl_makezd2emptyzd2regsetz00zzsaw_regsetz00
									(BgL_regsz00_4919))), BUNSPEC);
					}
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_2121));
					{	/* SawMill/regalloc.scm 140 */
						obj_t BgL_g1566z00_2147;

						BgL_g1566z00_2147 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_2121)))->BgL_argsz00);
						{
							obj_t BgL_l1564z00_2149;

							BgL_l1564z00_2149 = BgL_g1566z00_2147;
						BgL_zc3z04anonymousza31903ze3z87_2150:
							if (PAIRP(BgL_l1564z00_2149))
								{	/* SawMill/regalloc.scm 140 */
									BGl_argszd2widenzd2raz12ze70zf5zzsaw_registerzd2allocationzd2
										(BgL_regsz00_4919, CAR(BgL_l1564z00_2149));
									{
										obj_t BgL_l1564z00_5578;

										BgL_l1564z00_5578 = CDR(BgL_l1564z00_2149);
										BgL_l1564z00_2149 = BgL_l1564z00_5578;
										goto BgL_zc3z04anonymousza31903ze3z87_2150;
									}
								}
							else
								{	/* SawMill/regalloc.scm 140 */
									return ((bool_t) 1);
								}
						}
					}
				}
			else
				{	/* SawMill/regalloc.scm 133 */
					return ((bool_t) 0);
				}
		}

	}



/* liveness! */
	obj_t BGl_livenessz12z12zzsaw_registerzd2allocationzd2(obj_t BgL_blocksz00_71,
		obj_t BgL_argsz00_72)
	{
		{	/* SawMill/regalloc.scm 165 */
			{	/* SawMill/regalloc.scm 166 */
				obj_t BgL_list1938z00_2219;

				BgL_list1938z00_2219 =
					MAKE_YOUNG_PAIR(BGl_string3025z00zzsaw_registerzd2allocationzd2,
					BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list1938z00_2219);
			}
			if (NULLP(BgL_blocksz00_71))
				{	/* SawMill/regalloc.scm 169 */
					((bool_t) 0);
				}
			else
				{	/* SawMill/regalloc.scm 170 */
					obj_t BgL_inssz00_2221;

					BgL_inssz00_2221 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) CAR(BgL_blocksz00_71))))->BgL_firstz00);
					{	/* SawMill/regalloc.scm 172 */
						obj_t BgL_insz00_2223;

						BgL_insz00_2223 = CAR(BgL_inssz00_2221);
						{
							obj_t BgL_l1581z00_2226;

							BgL_l1581z00_2226 = BgL_argsz00_72;
						BgL_zc3z04anonymousza31941ze3z87_2227:
							if (PAIRP(BgL_l1581z00_2226))
								{	/* SawMill/regalloc.scm 174 */
									{	/* SawMill/regalloc.scm 174 */
										obj_t BgL_az00_2229;

										BgL_az00_2229 = CAR(BgL_l1581z00_2226);
										{	/* SawMill/regalloc.scm 174 */
											obj_t BgL_arg1943z00_2230;

											{
												BgL_rtl_inszf2razf2_bglt BgL_auxz00_5592;

												{
													obj_t BgL_auxz00_5593;

													{	/* SawMill/regalloc.scm 174 */
														BgL_objectz00_bglt BgL_tmpz00_5594;

														BgL_tmpz00_5594 =
															((BgL_objectz00_bglt)
															((BgL_rtl_insz00_bglt) BgL_insz00_2223));
														BgL_auxz00_5593 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_5594);
													}
													BgL_auxz00_5592 =
														((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5593);
												}
												BgL_arg1943z00_2230 =
													(((BgL_rtl_inszf2razf2_bglt)
														COBJECT(BgL_auxz00_5592))->BgL_inz00);
											}
											BGl_regsetzd2addz12zc0zzsaw_regsetz00(
												((BgL_regsetz00_bglt) BgL_arg1943z00_2230),
												((BgL_rtl_regz00_bglt) BgL_az00_2229));
										}
									}
									{
										obj_t BgL_l1581z00_5603;

										BgL_l1581z00_5603 = CDR(BgL_l1581z00_2226);
										BgL_l1581z00_2226 = BgL_l1581z00_5603;
										goto BgL_zc3z04anonymousza31941ze3z87_2227;
									}
								}
							else
								{	/* SawMill/regalloc.scm 174 */
									((bool_t) 1);
								}
						}
					}
				}
			{
				long BgL_iz00_2235;

				BgL_iz00_2235 = ((long) 0);
			BgL_zc3z04anonymousza31946ze3z87_2236:
				{	/* SawMill/regalloc.scm 177 */
					obj_t BgL_list1947z00_2237;

					{	/* SawMill/regalloc.scm 177 */
						obj_t BgL_arg1948z00_2238;

						BgL_arg1948z00_2238 = MAKE_YOUNG_PAIR(BINT(BgL_iz00_2235), BNIL);
						BgL_list1947z00_2237 =
							MAKE_YOUNG_PAIR(BGl_string3026z00zzsaw_registerzd2allocationzd2,
							BgL_arg1948z00_2238);
					}
					BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list1947z00_2237);
				}
				{
					obj_t BgL_bsz00_2240;
					obj_t BgL_tz00_2241;

					BgL_bsz00_2240 = BgL_blocksz00_71;
					BgL_tz00_2241 = BFALSE;
				BgL_zc3z04anonymousza31949ze3z87_2242:
					if (NULLP(BgL_bsz00_2240))
						{	/* SawMill/regalloc.scm 180 */
							if (CBOOL(BgL_tz00_2241))
								{
									long BgL_iz00_5614;

									BgL_iz00_5614 = (BgL_iz00_2235 + ((long) 1));
									BgL_iz00_2235 = BgL_iz00_5614;
									goto BgL_zc3z04anonymousza31946ze3z87_2236;
								}
							else
								{	/* SawMill/regalloc.scm 181 */
									((bool_t) 0);
								}
						}
					else
						{	/* SawMill/regalloc.scm 184 */
							obj_t BgL_arg1952z00_2245;
							obj_t BgL_arg1953z00_2246;

							BgL_arg1952z00_2245 = CDR(((obj_t) BgL_bsz00_2240));
							{	/* SawMill/regalloc.scm 184 */
								obj_t BgL__ortest_1206z00_2247;

								{	/* SawMill/regalloc.scm 184 */
									obj_t BgL_arg1954z00_2248;

									BgL_arg1954z00_2248 = CAR(((obj_t) BgL_bsz00_2240));
									BgL__ortest_1206z00_2247 =
										BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2
										(BgL_arg1954z00_2248);
								}
								if (CBOOL(BgL__ortest_1206z00_2247))
									{	/* SawMill/regalloc.scm 184 */
										BgL_arg1953z00_2246 = BgL__ortest_1206z00_2247;
									}
								else
									{	/* SawMill/regalloc.scm 184 */
										BgL_arg1953z00_2246 = BgL_tz00_2241;
									}
							}
							{
								obj_t BgL_tz00_5624;
								obj_t BgL_bsz00_5623;

								BgL_bsz00_5623 = BgL_arg1952z00_2245;
								BgL_tz00_5624 = BgL_arg1953z00_2246;
								BgL_tz00_2241 = BgL_tz00_5624;
								BgL_bsz00_2240 = BgL_bsz00_5623;
								goto BgL_zc3z04anonymousza31949ze3z87_2242;
							}
						}
				}
			}
			{	/* SawMill/regalloc.scm 185 */
				obj_t BgL_list1955z00_2251;

				BgL_list1955z00_2251 =
					MAKE_YOUNG_PAIR(BGl_string3027z00zzsaw_registerzd2allocationzd2,
					BNIL);
				return BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
					BgL_list1955z00_2251);
		}}

	}



/* liveness-block! */
	obj_t BGl_livenesszd2blockz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_blockz00_73)
	{
		{	/* SawMill/regalloc.scm 190 */
			{	/* SawMill/regalloc.scm 192 */
				obj_t BgL_g1208z00_2253;

				{	/* SawMill/regalloc.scm 193 */
					obj_t BgL_l1583z00_2300;

					BgL_l1583z00_2300 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_blockz00_73))))->BgL_succsz00);
					if (NULLP(BgL_l1583z00_2300))
						{	/* SawMill/regalloc.scm 193 */
							BgL_g1208z00_2253 = BNIL;
						}
					else
						{	/* SawMill/regalloc.scm 193 */
							obj_t BgL_head1585z00_2302;

							{	/* SawMill/regalloc.scm 193 */
								obj_t BgL_res2796z00_3968;

								BgL_res2796z00_3968 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1585z00_2302 = BgL_res2796z00_3968;
							}
							{
								obj_t BgL_l1583z00_2304;
								obj_t BgL_tail1586z00_2305;

								BgL_l1583z00_2304 = BgL_l1583z00_2300;
								BgL_tail1586z00_2305 = BgL_head1585z00_2302;
							BgL_zc3z04anonymousza31985ze3z87_2306:
								if (NULLP(BgL_l1583z00_2304))
									{	/* SawMill/regalloc.scm 193 */
										BgL_g1208z00_2253 = CDR(BgL_head1585z00_2302);
									}
								else
									{	/* SawMill/regalloc.scm 193 */
										obj_t BgL_newtail1587z00_2308;

										{	/* SawMill/regalloc.scm 193 */
											obj_t BgL_arg1988z00_2310;

											BgL_arg1988z00_2310 =
												CAR(
												(((BgL_blockz00_bglt) COBJECT(
															((BgL_blockz00_bglt)
																CAR(
																	((obj_t) BgL_l1583z00_2304)))))->
													BgL_firstz00));
											{	/* SawMill/regalloc.scm 193 */
												obj_t BgL_res2798z00_3974;

												BgL_res2798z00_3974 =
													MAKE_YOUNG_PAIR(BgL_arg1988z00_2310, BNIL);
												BgL_newtail1587z00_2308 = BgL_res2798z00_3974;
											}
										}
										SET_CDR(BgL_tail1586z00_2305, BgL_newtail1587z00_2308);
										{	/* SawMill/regalloc.scm 193 */
											obj_t BgL_arg1987z00_2309;

											BgL_arg1987z00_2309 = CDR(((obj_t) BgL_l1583z00_2304));
											{
												obj_t BgL_tail1586z00_5647;
												obj_t BgL_l1583z00_5646;

												BgL_l1583z00_5646 = BgL_arg1987z00_2309;
												BgL_tail1586z00_5647 = BgL_newtail1587z00_2308;
												BgL_tail1586z00_2305 = BgL_tail1586z00_5647;
												BgL_l1583z00_2304 = BgL_l1583z00_5646;
												goto BgL_zc3z04anonymousza31985ze3z87_2306;
											}
										}
									}
							}
						}
				}
				{
					obj_t BgL_inssz00_2256;
					obj_t BgL_succz00_2257;
					obj_t BgL_tz00_2258;

					{	/* SawMill/regalloc.scm 192 */
						obj_t BgL_arg1956z00_2255;

						{
							BgL_blockzf2razf2_bglt BgL_auxz00_5648;

							{
								obj_t BgL_auxz00_5649;

								{	/* SawMill/regalloc.scm 192 */
									BgL_objectz00_bglt BgL_tmpz00_5650;

									BgL_tmpz00_5650 =
										((BgL_objectz00_bglt)
										((BgL_blockz00_bglt) BgL_blockz00_73));
									BgL_auxz00_5649 = BGL_OBJECT_WIDENING(BgL_tmpz00_5650);
								}
								BgL_auxz00_5648 = ((BgL_blockzf2razf2_bglt) BgL_auxz00_5649);
							}
							BgL_arg1956z00_2255 =
								(((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_5648))->
								BgL_lastz00);
						}
						BgL_inssz00_2256 = BgL_arg1956z00_2255;
						BgL_succz00_2257 = BgL_g1208z00_2253;
						BgL_tz00_2258 = BFALSE;
					BgL_zc3z04anonymousza31957ze3z87_2259:
						if (PAIRP(BgL_inssz00_2256))
							{	/* SawMill/regalloc.scm 196 */
								BgL_rtl_insz00_bglt BgL_i1209z00_2261;

								BgL_i1209z00_2261 =
									((BgL_rtl_insz00_bglt) CAR(BgL_inssz00_2256));
								{	/* SawMill/regalloc.scm 197 */
									obj_t BgL_uz00_4753;

									{	/* SawMill/regalloc.scm 198 */
										obj_t BgL_cellvalz00_5660;

										if (BGl_isazf3zf3zz__objectz00(BgL_succz00_2257,
												BGl_rtl_insz00zzsaw_defsz00))
											{	/* SawMill/regalloc.scm 199 */
												obj_t BgL_arg1970z00_2278;
												obj_t BgL_arg1971z00_2279;

												{
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5663;

													{
														obj_t BgL_auxz00_5664;

														{	/* SawMill/regalloc.scm 199 */
															BgL_objectz00_bglt BgL_tmpz00_5665;

															BgL_tmpz00_5665 =
																((BgL_objectz00_bglt) BgL_i1209z00_2261);
															BgL_auxz00_5664 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5665);
														}
														BgL_auxz00_5663 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5664);
													}
													BgL_arg1970z00_2278 =
														(((BgL_rtl_inszf2razf2_bglt)
															COBJECT(BgL_auxz00_5663))->BgL_outz00);
												}
												{
													BgL_rtl_inszf2razf2_bglt BgL_auxz00_5670;

													{
														obj_t BgL_auxz00_5671;

														{	/* SawMill/regalloc.scm 199 */
															BgL_objectz00_bglt BgL_tmpz00_5672;

															BgL_tmpz00_5672 =
																((BgL_objectz00_bglt)
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_succz00_2257)));
															BgL_auxz00_5671 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_5672);
														}
														BgL_auxz00_5670 =
															((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5671);
													}
													BgL_arg1971z00_2279 =
														(((BgL_rtl_inszf2razf2_bglt)
															COBJECT(BgL_auxz00_5670))->BgL_inz00);
												}
												BgL_cellvalz00_5660 =
													BBOOL(BGl_regsetzd2unionz12zc0zzsaw_regsetz00(
														((BgL_regsetz00_bglt) BgL_arg1970z00_2278),
														((BgL_regsetz00_bglt) BgL_arg1971z00_2279)));
											}
										else
											{	/* SawMill/regalloc.scm 198 */
												if (PAIRP(BgL_succz00_2257))
													{	/* SawMill/regalloc.scm 201 */
														obj_t BgL_arg1973z00_2281;
														obj_t BgL_arg1974z00_2282;

														{
															BgL_rtl_inszf2razf2_bglt BgL_auxz00_5685;

															{
																obj_t BgL_auxz00_5686;

																{	/* SawMill/regalloc.scm 201 */
																	BgL_objectz00_bglt BgL_tmpz00_5687;

																	BgL_tmpz00_5687 =
																		((BgL_objectz00_bglt) BgL_i1209z00_2261);
																	BgL_auxz00_5686 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_5687);
																}
																BgL_auxz00_5685 =
																	((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5686);
															}
															BgL_arg1973z00_2281 =
																(((BgL_rtl_inszf2razf2_bglt)
																	COBJECT(BgL_auxz00_5685))->BgL_outz00);
														}
														{	/* SawMill/regalloc.scm 201 */
															obj_t BgL_head1590z00_2285;

															{	/* SawMill/regalloc.scm 201 */
																obj_t BgL_arg1982z00_2297;

																{	/* SawMill/regalloc.scm 201 */
																	BgL_rtl_insz00_bglt BgL_oz00_3987;

																	BgL_oz00_3987 =
																		((BgL_rtl_insz00_bglt)
																		CAR(BgL_succz00_2257));
																	{
																		BgL_rtl_inszf2razf2_bglt BgL_auxz00_5694;

																		{
																			obj_t BgL_auxz00_5695;

																			{	/* SawMill/regalloc.scm 201 */
																				BgL_objectz00_bglt BgL_tmpz00_5696;

																				BgL_tmpz00_5696 =
																					((BgL_objectz00_bglt) BgL_oz00_3987);
																				BgL_auxz00_5695 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_5696);
																			}
																			BgL_auxz00_5694 =
																				((BgL_rtl_inszf2razf2_bglt)
																				BgL_auxz00_5695);
																		}
																		BgL_arg1982z00_2297 =
																			(((BgL_rtl_inszf2razf2_bglt)
																				COBJECT(BgL_auxz00_5694))->BgL_inz00);
																	}
																}
																{	/* SawMill/regalloc.scm 201 */
																	obj_t BgL_res2803z00_3989;

																	BgL_res2803z00_3989 =
																		MAKE_YOUNG_PAIR(BgL_arg1982z00_2297, BNIL);
																	BgL_head1590z00_2285 = BgL_res2803z00_3989;
																}
															}
															{	/* SawMill/regalloc.scm 201 */
																obj_t BgL_g1593z00_2286;

																BgL_g1593z00_2286 = CDR(BgL_succz00_2257);
																{
																	obj_t BgL_l1588z00_2288;
																	obj_t BgL_tail1591z00_2289;

																	BgL_l1588z00_2288 = BgL_g1593z00_2286;
																	BgL_tail1591z00_2289 = BgL_head1590z00_2285;
																BgL_zc3z04anonymousza31976ze3z87_2290:
																	if (NULLP(BgL_l1588z00_2288))
																		{	/* SawMill/regalloc.scm 201 */
																			BgL_arg1974z00_2282 =
																				BgL_head1590z00_2285;
																		}
																	else
																		{	/* SawMill/regalloc.scm 201 */
																			obj_t BgL_newtail1592z00_2292;

																			{	/* SawMill/regalloc.scm 201 */
																				obj_t BgL_arg1980z00_2294;

																				{	/* SawMill/regalloc.scm 201 */
																					BgL_rtl_insz00_bglt BgL_oz00_3993;

																					BgL_oz00_3993 =
																						((BgL_rtl_insz00_bglt)
																						CAR(((obj_t) BgL_l1588z00_2288)));
																					{
																						BgL_rtl_inszf2razf2_bglt
																							BgL_auxz00_5708;
																						{
																							obj_t BgL_auxz00_5709;

																							{	/* SawMill/regalloc.scm 201 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_5710;
																								BgL_tmpz00_5710 =
																									((BgL_objectz00_bglt)
																									BgL_oz00_3993);
																								BgL_auxz00_5709 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_5710);
																							}
																							BgL_auxz00_5708 =
																								((BgL_rtl_inszf2razf2_bglt)
																								BgL_auxz00_5709);
																						}
																						BgL_arg1980z00_2294 =
																							(((BgL_rtl_inszf2razf2_bglt)
																								COBJECT(BgL_auxz00_5708))->
																							BgL_inz00);
																					}
																				}
																				{	/* SawMill/regalloc.scm 201 */
																					obj_t BgL_res2805z00_3995;

																					BgL_res2805z00_3995 =
																						MAKE_YOUNG_PAIR(BgL_arg1980z00_2294,
																						BNIL);
																					BgL_newtail1592z00_2292 =
																						BgL_res2805z00_3995;
																				}
																			}
																			SET_CDR(BgL_tail1591z00_2289,
																				BgL_newtail1592z00_2292);
																			{	/* SawMill/regalloc.scm 201 */
																				obj_t BgL_arg1979z00_2293;

																				BgL_arg1979z00_2293 =
																					CDR(((obj_t) BgL_l1588z00_2288));
																				{
																					obj_t BgL_tail1591z00_5720;
																					obj_t BgL_l1588z00_5719;

																					BgL_l1588z00_5719 =
																						BgL_arg1979z00_2293;
																					BgL_tail1591z00_5720 =
																						BgL_newtail1592z00_2292;
																					BgL_tail1591z00_2289 =
																						BgL_tail1591z00_5720;
																					BgL_l1588z00_2288 = BgL_l1588z00_5719;
																					goto
																						BgL_zc3z04anonymousza31976ze3z87_2290;
																				}
																			}
																		}
																}
															}
														}
														BgL_cellvalz00_5660 =
															BBOOL(BGl_regsetzd2unionza2z12z62zzsaw_regsetz00(
																((BgL_regsetz00_bglt) BgL_arg1973z00_2281),
																BgL_arg1974z00_2282));
													}
												else
													{	/* SawMill/regalloc.scm 200 */
														BgL_cellvalz00_5660 = BFALSE;
													}
											}
										BgL_uz00_4753 = MAKE_CELL(BgL_cellvalz00_5660);
									}
									{	/* SawMill/regalloc.scm 204 */
										obj_t BgL_arg1960z00_2264;

										{
											BgL_rtl_inszf2razf2_bglt BgL_auxz00_5724;

											{
												obj_t BgL_auxz00_5725;

												{	/* SawMill/regalloc.scm 204 */
													BgL_objectz00_bglt BgL_tmpz00_5726;

													BgL_tmpz00_5726 =
														((BgL_objectz00_bglt) BgL_i1209z00_2261);
													BgL_auxz00_5725 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5726);
												}
												BgL_auxz00_5724 =
													((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5725);
											}
											BgL_arg1960z00_2264 =
												(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5724))->
												BgL_outz00);
										}
										{	/* SawMill/regalloc.scm 205 */
											obj_t BgL_zc3z04anonymousza31961ze3z87_4747;

											BgL_zc3z04anonymousza31961ze3z87_4747 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31961ze3ze5zzsaw_registerzd2allocationzd2,
												(int) (((long) 1)), (int) (((long) 2)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31961ze3z87_4747,
												(int) (((long) 0)), ((obj_t) BgL_i1209z00_2261));
											PROCEDURE_SET(BgL_zc3z04anonymousza31961ze3z87_4747,
												(int) (((long) 1)), ((obj_t) BgL_uz00_4753));
											BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
												(BgL_zc3z04anonymousza31961ze3z87_4747,
												((BgL_regsetz00_bglt) BgL_arg1960z00_2264));
									}}
									{	/* SawMill/regalloc.scm 208 */
										obj_t BgL_arg1966z00_2273;
										obj_t BgL_arg1967z00_2274;
										obj_t BgL_arg1968z00_2275;

										BgL_arg1966z00_2273 = CDR(BgL_inssz00_2256);
										BgL_arg1967z00_2274 = CAR(BgL_inssz00_2256);
										if (CBOOL(BgL_tz00_2258))
											{	/* SawMill/regalloc.scm 208 */
												BgL_arg1968z00_2275 = BgL_tz00_2258;
											}
										else
											{	/* SawMill/regalloc.scm 208 */
												BgL_arg1968z00_2275 = CELL_REF(BgL_uz00_4753);
											}
										{
											obj_t BgL_tz00_5748;
											obj_t BgL_succz00_5747;
											obj_t BgL_inssz00_5746;

											BgL_inssz00_5746 = BgL_arg1966z00_2273;
											BgL_succz00_5747 = BgL_arg1967z00_2274;
											BgL_tz00_5748 = BgL_arg1968z00_2275;
											BgL_tz00_2258 = BgL_tz00_5748;
											BgL_succz00_2257 = BgL_succz00_5747;
											BgL_inssz00_2256 = BgL_inssz00_5746;
											goto BgL_zc3z04anonymousza31957ze3z87_2259;
										}
									}
								}
							}
						else
							{	/* SawMill/regalloc.scm 195 */
								return BgL_tz00_2258;
							}
					}
				}
			}
		}

	}



/* &<@anonymous:1961> */
	obj_t BGl_z62zc3z04anonymousza31961ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4748, obj_t BgL_rz00_4751)
	{
		{	/* SawMill/regalloc.scm 204 */
			{	/* SawMill/regalloc.scm 205 */
				BgL_rtl_insz00_bglt BgL_i1209z00_4749;
				obj_t BgL_uz00_4750;

				BgL_i1209z00_4749 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_4748, (int) (((long) 0))));
				BgL_uz00_4750 = PROCEDURE_REF(BgL_envz00_4748, (int) (((long) 1)));
				{	/* SawMill/regalloc.scm 205 */
					bool_t BgL_test3190z00_5754;

					{	/* SawMill/regalloc.scm 205 */
						obj_t BgL_arg1965z00_4934;

						{
							BgL_rtl_inszf2razf2_bglt BgL_auxz00_5755;

							{
								obj_t BgL_auxz00_5756;

								{	/* SawMill/regalloc.scm 205 */
									BgL_objectz00_bglt BgL_tmpz00_5757;

									BgL_tmpz00_5757 = ((BgL_objectz00_bglt) BgL_i1209z00_4749);
									BgL_auxz00_5756 = BGL_OBJECT_WIDENING(BgL_tmpz00_5757);
								}
								BgL_auxz00_5755 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5756);
							}
							BgL_arg1965z00_4934 =
								(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5755))->
								BgL_defz00);
						}
						BgL_test3190z00_5754 =
							BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
							((BgL_rtl_regz00_bglt) BgL_rz00_4751),
							((BgL_regsetz00_bglt) BgL_arg1965z00_4934));
					}
					if (BgL_test3190z00_5754)
						{	/* SawMill/regalloc.scm 205 */
							return BFALSE;
						}
					else
						{	/* SawMill/regalloc.scm 206 */
							obj_t BgL_auxz00_4935;

							{	/* SawMill/regalloc.scm 206 */
								bool_t BgL__ortest_1210z00_4936;

								{	/* SawMill/regalloc.scm 206 */
									obj_t BgL_arg1964z00_4937;

									{
										BgL_rtl_inszf2razf2_bglt BgL_auxz00_5765;

										{
											obj_t BgL_auxz00_5766;

											{	/* SawMill/regalloc.scm 206 */
												BgL_objectz00_bglt BgL_tmpz00_5767;

												BgL_tmpz00_5767 =
													((BgL_objectz00_bglt) BgL_i1209z00_4749);
												BgL_auxz00_5766 = BGL_OBJECT_WIDENING(BgL_tmpz00_5767);
											}
											BgL_auxz00_5765 =
												((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5766);
										}
										BgL_arg1964z00_4937 =
											(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5765))->
											BgL_inz00);
									}
									BgL__ortest_1210z00_4936 =
										BGl_regsetzd2addz12zc0zzsaw_regsetz00(
										((BgL_regsetz00_bglt) BgL_arg1964z00_4937),
										((BgL_rtl_regz00_bglt) BgL_rz00_4751));
								}
								if (BgL__ortest_1210z00_4936)
									{	/* SawMill/regalloc.scm 206 */
										BgL_auxz00_4935 = BBOOL(BgL__ortest_1210z00_4936);
									}
								else
									{	/* SawMill/regalloc.scm 206 */
										BgL_auxz00_4935 = CELL_REF(BgL_uz00_4750);
									}
							}
							return CELL_SET(BgL_uz00_4750, BgL_auxz00_4935);
						}
				}
			}
		}

	}



/* hardware-mutual-interference! */
	bool_t
		BGl_hardwarezd2mutualzd2interferencez12z12zzsaw_registerzd2allocationzd2
		(obj_t BgL_regsz00_76)
	{
		{	/* SawMill/regalloc.scm 231 */
			{
				obj_t BgL_rz00_2315;

				BgL_rz00_2315 = BgL_regsz00_76;
			BgL_zc3z04anonymousza31990ze3z87_2316:
				if (PAIRP(BgL_rz00_2315))
					{	/* SawMill/regalloc.scm 234 */
						obj_t BgL_r1z00_2318;

						BgL_r1z00_2318 = CAR(BgL_rz00_2315);
						{	/* SawMill/regalloc.scm 235 */
							obj_t BgL_g1603z00_2319;

							BgL_g1603z00_2319 = CDR(BgL_rz00_2315);
							{
								obj_t BgL_l1601z00_2321;

								BgL_l1601z00_2321 = BgL_g1603z00_2319;
							BgL_zc3z04anonymousza31992ze3z87_2322:
								if (PAIRP(BgL_l1601z00_2321))
									{	/* SawMill/regalloc.scm 235 */
										BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
											(BgL_r1z00_2318, CAR(BgL_l1601z00_2321));
										{
											obj_t BgL_l1601z00_5785;

											BgL_l1601z00_5785 = CDR(BgL_l1601z00_2321);
											BgL_l1601z00_2321 = BgL_l1601z00_5785;
											goto BgL_zc3z04anonymousza31992ze3z87_2322;
										}
									}
								else
									{	/* SawMill/regalloc.scm 235 */
										((bool_t) 1);
									}
							}
						}
						{
							obj_t BgL_rz00_5787;

							BgL_rz00_5787 = CDR(BgL_rz00_2315);
							BgL_rz00_2315 = BgL_rz00_5787;
							goto BgL_zc3z04anonymousza31990ze3z87_2316;
						}
					}
				else
					{	/* SawMill/regalloc.scm 233 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* hardware-parameters-interference! */
	bool_t
		BGl_hardwarezd2parameterszd2interferencez12z12zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_77, obj_t BgL_pregsz00_78)
	{
		{	/* SawMill/regalloc.scm 248 */
			{	/* SawMill/regalloc.scm 250 */
				obj_t BgL_g1608z00_2330;

				BgL_g1608z00_2330 =
					(((BgL_backendz00_bglt) COBJECT(BgL_backz00_77))->BgL_registersz00);
				{
					obj_t BgL_l1606z00_2332;

					BgL_l1606z00_2332 = BgL_g1608z00_2330;
				BgL_zc3z04anonymousza31997ze3z87_2333:
					if (PAIRP(BgL_l1606z00_2332))
						{	/* SawMill/regalloc.scm 250 */
							{	/* SawMill/regalloc.scm 251 */
								obj_t BgL_rz00_2335;

								BgL_rz00_2335 = CAR(BgL_l1606z00_2332);
								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_rz00_2335,
											(((BgL_backendz00_bglt) COBJECT(BgL_backz00_77))->
												BgL_pregistersz00))))
									{	/* SawMill/regalloc.scm 251 */
										((bool_t) 0);
									}
								else
									{
										obj_t BgL_l1604z00_2339;

										BgL_l1604z00_2339 = BgL_pregsz00_78;
									BgL_zc3z04anonymousza32001ze3z87_2340:
										if (PAIRP(BgL_l1604z00_2339))
											{	/* SawMill/regalloc.scm 252 */
												BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
													(CAR(BgL_l1604z00_2339), BgL_rz00_2335);
												{
													obj_t BgL_l1604z00_5801;

													BgL_l1604z00_5801 = CDR(BgL_l1604z00_2339);
													BgL_l1604z00_2339 = BgL_l1604z00_5801;
													goto BgL_zc3z04anonymousza32001ze3z87_2340;
												}
											}
										else
											{	/* SawMill/regalloc.scm 252 */
												((bool_t) 1);
											}
									}
							}
							{
								obj_t BgL_l1606z00_5803;

								BgL_l1606z00_5803 = CDR(BgL_l1606z00_2332);
								BgL_l1606z00_2332 = BgL_l1606z00_5803;
								goto BgL_zc3z04anonymousza31997ze3z87_2333;
							}
						}
					else
						{	/* SawMill/regalloc.scm 250 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* hardware-interference! */
	bool_t
		BGl_hardwarezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_79, obj_t BgL_oz00_80)
	{
		{	/* SawMill/regalloc.scm 263 */
			{
				obj_t BgL_oz00_2477;

				{
					obj_t BgL_l1630z00_2351;

					BgL_l1630z00_2351 = BgL_oz00_80;
				BgL_zc3z04anonymousza32006ze3z87_2352:
					if (PAIRP(BgL_l1630z00_2351))
						{	/* SawMill/regalloc.scm 311 */
							BgL_oz00_2477 = CAR(BgL_l1630z00_2351);
							{	/* SawMill/regalloc.scm 307 */
								obj_t BgL_g1629z00_2479;

								BgL_g1629z00_2479 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_oz00_2477)))->BgL_firstz00);
								{
									obj_t BgL_l1627z00_2481;

									BgL_l1627z00_2481 = BgL_g1629z00_2479;
								BgL_zc3z04anonymousza32087ze3z87_2482:
									if (PAIRP(BgL_l1627z00_2481))
										{	/* SawMill/regalloc.scm 310 */
											{	/* SawMill/regalloc.scm 308 */
												obj_t BgL_oz00_2484;

												BgL_oz00_2484 = CAR(BgL_l1627z00_2481);
												{	/* SawMill/regalloc.scm 309 */
													obj_t BgL_arg2089z00_2486;
													obj_t BgL_arg2090z00_2487;

													{
														BgL_rtl_inszf2razf2_bglt BgL_auxz00_5812;

														{
															obj_t BgL_auxz00_5813;

															{	/* SawMill/regalloc.scm 309 */
																BgL_objectz00_bglt BgL_tmpz00_5814;

																BgL_tmpz00_5814 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2484));
																BgL_auxz00_5813 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5814);
															}
															BgL_auxz00_5812 =
																((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5813);
														}
														BgL_arg2089z00_2486 =
															(((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5812))->BgL_inz00);
													}
													{
														BgL_rtl_inszf2razf2_bglt BgL_auxz00_5820;

														{
															obj_t BgL_auxz00_5821;

															{	/* SawMill/regalloc.scm 309 */
																BgL_objectz00_bglt BgL_tmpz00_5822;

																BgL_tmpz00_5822 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_oz00_2484));
																BgL_auxz00_5821 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_5822);
															}
															BgL_auxz00_5820 =
																((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5821);
														}
														BgL_arg2090z00_2487 =
															(((BgL_rtl_inszf2razf2_bglt)
																COBJECT(BgL_auxz00_5820))->BgL_outz00);
													}
													BGl_inszd2hardwarezd2interferencez12ze70zf5zzsaw_registerzd2allocationzd2
														(BgL_backz00_79,
														((BgL_rtl_insz00_bglt) BgL_oz00_2484),
														BgL_arg2089z00_2486, BgL_arg2090z00_2487);
												}
											}
											{
												obj_t BgL_l1627z00_5830;

												BgL_l1627z00_5830 = CDR(BgL_l1627z00_2481);
												BgL_l1627z00_2481 = BgL_l1627z00_5830;
												goto BgL_zc3z04anonymousza32087ze3z87_2482;
											}
										}
									else
										{	/* SawMill/regalloc.scm 310 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l1630z00_5833;

								BgL_l1630z00_5833 = CDR(BgL_l1630z00_2351);
								BgL_l1630z00_2351 = BgL_l1630z00_5833;
								goto BgL_zc3z04anonymousza32006ze3z87_2352;
							}
						}
					else
						{	/* SawMill/regalloc.scm 311 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* ins-hardware-interference!~0 */
	bool_t
		BGl_inszd2hardwarezd2interferencez12ze70zf5zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_4918, BgL_rtl_insz00_bglt BgL_oz00_2357,
		obj_t BgL_inz00_2358, obj_t BgL_outz00_2359)
	{
		{	/* SawMill/regalloc.scm 305 */
			{	/* SawMill/regalloc.scm 265 */
				obj_t BgL_resetz00_2361;

				BgL_resetz00_2361 =
					BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
					(BgL_backz00_4918, ((obj_t) BgL_oz00_2357));
				{	/* SawMill/regalloc.scm 266 */
					obj_t BgL_spillz00_2362;
					obj_t BgL_rdestz00_2363;
					obj_t BgL_a0z00_2364;
					obj_t BgL_a1z00_2365;

					{	/* SawMill/regalloc.scm 275 */
						int BgL_tmpz00_5837;

						BgL_tmpz00_5837 = (int) (((long) 1));
						BgL_spillz00_2362 = BGL_MVALUES_VAL(BgL_tmpz00_5837);
					}
					{	/* SawMill/regalloc.scm 275 */
						int BgL_tmpz00_5840;

						BgL_tmpz00_5840 = (int) (((long) 2));
						BgL_rdestz00_2363 = BGL_MVALUES_VAL(BgL_tmpz00_5840);
					}
					{	/* SawMill/regalloc.scm 275 */
						int BgL_tmpz00_5843;

						BgL_tmpz00_5843 = (int) (((long) 3));
						BgL_a0z00_2364 = BGL_MVALUES_VAL(BgL_tmpz00_5843);
					}
					{	/* SawMill/regalloc.scm 275 */
						int BgL_tmpz00_5846;

						BgL_tmpz00_5846 = (int) (((long) 4));
						BgL_a1z00_2365 = BGL_MVALUES_VAL(BgL_tmpz00_5846);
					}
					if (NULLP(BgL_resetz00_2361))
						{	/* SawMill/regalloc.scm 267 */
							BFALSE;
						}
					else
						{	/* SawMill/regalloc.scm 267 */
							{	/* SawMill/regalloc.scm 269 */
								obj_t BgL_zc3z04anonymousza32014ze3z87_4756;

								BgL_zc3z04anonymousza32014ze3z87_4756 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza32014ze3ze5zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza32014ze3z87_4756,
									(int) (((long) 0)), BgL_resetz00_2361);
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
									(BgL_zc3z04anonymousza32014ze3z87_4756,
									((BgL_regsetz00_bglt) BgL_inz00_2358));
							}
							{	/* SawMill/regalloc.scm 273 */
								obj_t BgL_zc3z04anonymousza32019ze3z87_4755;

								BgL_zc3z04anonymousza32019ze3z87_4755 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza32019ze3ze5zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)), (int) (((long) 1)));
								PROCEDURE_SET(BgL_zc3z04anonymousza32019ze3z87_4755,
									(int) (((long) 0)), BgL_resetz00_2361);
								BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
									(BgL_zc3z04anonymousza32019ze3z87_4755,
									((BgL_regsetz00_bglt) BgL_outz00_2359));
						}}
					{	/* SawMill/regalloc.scm 279 */
						bool_t BgL_test3200z00_5865;

						if (PAIRP(BgL_rdestz00_2363))
							{	/* SawMill/regalloc.scm 279 */
								obj_t BgL_arg2034z00_2405;

								BgL_arg2034z00_2405 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->BgL_destz00);
								BgL_test3200z00_5865 =
									BGl_isazf3zf3zz__objectz00(BgL_arg2034z00_2405,
									BGl_rtl_regzf2razf2zzsaw_regsetz00);
							}
						else
							{	/* SawMill/regalloc.scm 279 */
								BgL_test3200z00_5865 = ((bool_t) 0);
							}
						if (BgL_test3200z00_5865)
							{	/* SawMill/regalloc.scm 280 */
								obj_t BgL_g1615z00_2394;

								BgL_g1615z00_2394 =
									(((BgL_backendz00_bglt) COBJECT(BgL_backz00_4918))->
									BgL_registersz00);
								{
									obj_t BgL_l1613z00_2396;

									BgL_l1613z00_2396 = BgL_g1615z00_2394;
								BgL_zc3z04anonymousza32028ze3z87_2397:
									if (PAIRP(BgL_l1613z00_2396))
										{	/* SawMill/regalloc.scm 280 */
											{	/* SawMill/regalloc.scm 281 */
												obj_t BgL_rz00_2399;

												BgL_rz00_2399 = CAR(BgL_l1613z00_2396);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_2399, BgL_rdestz00_2363)))
													{	/* SawMill/regalloc.scm 281 */
														((bool_t) 0);
													}
												else
													{	/* SawMill/regalloc.scm 282 */
														obj_t BgL_arg2031z00_2401;

														BgL_arg2031z00_2401 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
															BgL_destz00);
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_arg2031z00_2401, BgL_rz00_2399);
													}
											}
											{
												obj_t BgL_l1613z00_5881;

												BgL_l1613z00_5881 = CDR(BgL_l1613z00_2396);
												BgL_l1613z00_2396 = BgL_l1613z00_5881;
												goto BgL_zc3z04anonymousza32028ze3z87_2397;
											}
										}
									else
										{	/* SawMill/regalloc.scm 280 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 279 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 285 */
						bool_t BgL_test3204z00_5883;

						if (PAIRP(BgL_a0z00_2364))
							{	/* SawMill/regalloc.scm 285 */
								if (NULLP(
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
											BgL_argsz00)))
									{	/* SawMill/regalloc.scm 285 */
										BgL_test3204z00_5883 = ((bool_t) 0);
									}
								else
									{	/* SawMill/regalloc.scm 285 */
										obj_t BgL_arg2048z00_2426;

										{	/* SawMill/regalloc.scm 285 */
											obj_t BgL_pairz00_4031;

											BgL_pairz00_4031 =
												(((BgL_rtl_insz00_bglt) COBJECT(
														((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
												BgL_argsz00);
											BgL_arg2048z00_2426 = CAR(BgL_pairz00_4031);
										}
										BgL_test3204z00_5883 =
											BGl_isazf3zf3zz__objectz00(BgL_arg2048z00_2426,
											BGl_rtl_regzf2razf2zzsaw_regsetz00);
									}
							}
						else
							{	/* SawMill/regalloc.scm 285 */
								BgL_test3204z00_5883 = ((bool_t) 0);
							}
						if (BgL_test3204z00_5883)
							{	/* SawMill/regalloc.scm 286 */
								obj_t BgL_g1618z00_2413;

								BgL_g1618z00_2413 =
									(((BgL_backendz00_bglt) COBJECT(BgL_backz00_4918))->
									BgL_registersz00);
								{
									obj_t BgL_l1616z00_2415;

									BgL_l1616z00_2415 = BgL_g1618z00_2413;
								BgL_zc3z04anonymousza32042ze3z87_2416:
									if (PAIRP(BgL_l1616z00_2415))
										{	/* SawMill/regalloc.scm 286 */
											{	/* SawMill/regalloc.scm 287 */
												obj_t BgL_rz00_2418;

												BgL_rz00_2418 = CAR(BgL_l1616z00_2415);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_2418, BgL_a0z00_2364)))
													{	/* SawMill/regalloc.scm 287 */
														((bool_t) 0);
													}
												else
													{	/* SawMill/regalloc.scm 288 */
														obj_t BgL_arg2045z00_2420;

														{	/* SawMill/regalloc.scm 288 */
															obj_t BgL_pairz00_4035;

															BgL_pairz00_4035 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
																BgL_argsz00);
															BgL_arg2045z00_2420 = CAR(BgL_pairz00_4035);
														}
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_rz00_2418, BgL_arg2045z00_2420);
													}
											}
											{
												obj_t BgL_l1616z00_5905;

												BgL_l1616z00_5905 = CDR(BgL_l1616z00_2415);
												BgL_l1616z00_2415 = BgL_l1616z00_5905;
												goto BgL_zc3z04anonymousza32042ze3z87_2416;
											}
										}
									else
										{	/* SawMill/regalloc.scm 286 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 285 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 291 */
						bool_t BgL_test3209z00_5907;

						if (PAIRP(BgL_a1z00_2365))
							{	/* SawMill/regalloc.scm 291 */
								if (NULLP(
										(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
											BgL_argsz00)))
									{	/* SawMill/regalloc.scm 292 */
										BgL_test3209z00_5907 = ((bool_t) 0);
									}
								else
									{	/* SawMill/regalloc.scm 292 */
										bool_t BgL_test3212z00_5914;

										{	/* SawMill/regalloc.scm 292 */
											obj_t BgL_tmpz00_5915;

											{	/* SawMill/regalloc.scm 292 */
												obj_t BgL_pairz00_4039;

												BgL_pairz00_4039 =
													(((BgL_rtl_insz00_bglt) COBJECT(
															((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
													BgL_argsz00);
												BgL_tmpz00_5915 = CDR(BgL_pairz00_4039);
											}
											BgL_test3212z00_5914 = PAIRP(BgL_tmpz00_5915);
										}
										if (BgL_test3212z00_5914)
											{	/* SawMill/regalloc.scm 293 */
												obj_t BgL_arg2071z00_2455;

												{	/* SawMill/regalloc.scm 293 */
													obj_t BgL_pairz00_4041;

													BgL_pairz00_4041 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
														BgL_argsz00);
													BgL_arg2071z00_2455 = CAR(CDR(BgL_pairz00_4041));
												}
												BgL_test3209z00_5907 =
													BGl_isazf3zf3zz__objectz00(BgL_arg2071z00_2455,
													BGl_rtl_regzf2razf2zzsaw_regsetz00);
											}
										else
											{	/* SawMill/regalloc.scm 292 */
												BgL_test3209z00_5907 = ((bool_t) 0);
											}
									}
							}
						else
							{	/* SawMill/regalloc.scm 291 */
								BgL_test3209z00_5907 = ((bool_t) 0);
							}
						if (BgL_test3209z00_5907)
							{	/* SawMill/regalloc.scm 294 */
								obj_t BgL_g1621z00_2441;

								BgL_g1621z00_2441 =
									(((BgL_backendz00_bglt) COBJECT(BgL_backz00_4918))->
									BgL_registersz00);
								{
									obj_t BgL_l1619z00_2443;

									BgL_l1619z00_2443 = BgL_g1621z00_2441;
								BgL_zc3z04anonymousza32065ze3z87_2444:
									if (PAIRP(BgL_l1619z00_2443))
										{	/* SawMill/regalloc.scm 294 */
											{	/* SawMill/regalloc.scm 295 */
												obj_t BgL_rz00_2446;

												BgL_rz00_2446 = CAR(BgL_l1619z00_2443);
												if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
														(BgL_rz00_2446, BgL_a1z00_2365)))
													{	/* SawMill/regalloc.scm 295 */
														((bool_t) 0);
													}
												else
													{	/* SawMill/regalloc.scm 296 */
														obj_t BgL_arg2068z00_2448;

														{	/* SawMill/regalloc.scm 296 */
															obj_t BgL_pairz00_4048;

															BgL_pairz00_4048 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->
																BgL_argsz00);
															BgL_arg2068z00_2448 = CAR(CDR(BgL_pairz00_4048));
														}
														BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
															(BgL_rz00_2446, BgL_arg2068z00_2448);
													}
											}
											{
												obj_t BgL_l1619z00_5937;

												BgL_l1619z00_5937 = CDR(BgL_l1619z00_2443);
												BgL_l1619z00_2443 = BgL_l1619z00_5937;
												goto BgL_zc3z04anonymousza32065ze3z87_2444;
											}
										}
									else
										{	/* SawMill/regalloc.scm 294 */
											((bool_t) 1);
										}
								}
							}
						else
							{	/* SawMill/regalloc.scm 291 */
								((bool_t) 0);
							}
					}
					{	/* SawMill/regalloc.scm 299 */
						obj_t BgL_g1624z00_2460;

						BgL_g1624z00_2460 =
							(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_2357)))->BgL_argsz00);
						{
							obj_t BgL_l1622z00_2462;

							BgL_l1622z00_2462 = BgL_g1624z00_2460;
						BgL_zc3z04anonymousza32078ze3z87_2463:
							if (PAIRP(BgL_l1622z00_2462))
								{	/* SawMill/regalloc.scm 299 */
									{	/* SawMill/regalloc.scm 300 */
										obj_t BgL_az00_2465;

										BgL_az00_2465 = CAR(BgL_l1622z00_2462);
										if (BGl_isazf3zf3zz__objectz00(BgL_az00_2465,
												BGl_rtl_insz00zzsaw_defsz00))
											{	/* SawMill/regalloc.scm 300 */
												BGl_inszd2hardwarezd2interferencez12ze70zf5zzsaw_registerzd2allocationzd2
													(BgL_backz00_4918,
													((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
															BgL_az00_2465)), BgL_inz00_2358, BgL_outz00_2359);
											}
										else
											{	/* SawMill/regalloc.scm 300 */
												((bool_t) 0);
											}
									}
									{
										obj_t BgL_l1622z00_5949;

										BgL_l1622z00_5949 = CDR(BgL_l1622z00_2462);
										BgL_l1622z00_2462 = BgL_l1622z00_5949;
										goto BgL_zc3z04anonymousza32078ze3z87_2463;
									}
								}
							else
								{	/* SawMill/regalloc.scm 299 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_l1625z00_2470;

						BgL_l1625z00_2470 = BgL_spillz00_2362;
					BgL_zc3z04anonymousza32082ze3z87_2471:
						if (PAIRP(BgL_l1625z00_2470))
							{	/* SawMill/regalloc.scm 303 */
								{	/* SawMill/regalloc.scm 304 */
									obj_t BgL_rz00_2473;

									BgL_rz00_2473 = CAR(BgL_l1625z00_2470);
									{	/* SawMill/regalloc.scm 304 */
										obj_t BgL_arg2084z00_2474;

										{
											BgL_rtl_inszf2razf2_bglt BgL_auxz00_5954;

											{
												obj_t BgL_auxz00_5955;

												{	/* SawMill/regalloc.scm 304 */
													BgL_objectz00_bglt BgL_tmpz00_5956;

													BgL_tmpz00_5956 =
														((BgL_objectz00_bglt) BgL_oz00_2357);
													BgL_auxz00_5955 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_5956);
												}
												BgL_auxz00_5954 =
													((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_5955);
											}
											BgL_arg2084z00_2474 =
												(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_5954))->
												BgL_spillz00);
										}
										BGl_regsetzd2addz12zc0zzsaw_regsetz00(
											((BgL_regsetz00_bglt) BgL_arg2084z00_2474),
											((BgL_rtl_regz00_bglt) BgL_rz00_2473));
									}
								}
								{
									obj_t BgL_l1625z00_5964;

									BgL_l1625z00_5964 = CDR(BgL_l1625z00_2470);
									BgL_l1625z00_2470 = BgL_l1625z00_5964;
									goto BgL_zc3z04anonymousza32082ze3z87_2471;
								}
							}
						else
							{	/* SawMill/regalloc.scm 303 */
								return ((bool_t) 1);
							}
					}
				}
			}
		}

	}



/* &<@anonymous:2019> */
	obj_t BGl_z62zc3z04anonymousza32019ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4757, obj_t BgL_r1z00_4759)
	{
		{	/* SawMill/regalloc.scm 272 */
			{	/* SawMill/regalloc.scm 273 */
				obj_t BgL_resetz00_4758;

				BgL_resetz00_4758 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4757, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 273 */
					bool_t BgL_tmpz00_5969;

					{
						obj_t BgL_l1611z00_4939;

						BgL_l1611z00_4939 = BgL_resetz00_4758;
					BgL_zc3z04anonymousza32020ze3z87_4938:
						if (PAIRP(BgL_l1611z00_4939))
							{	/* SawMill/regalloc.scm 273 */
								BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
									(BgL_r1z00_4759, CAR(BgL_l1611z00_4939));
								{
									obj_t BgL_l1611z00_5974;

									BgL_l1611z00_5974 = CDR(BgL_l1611z00_4939);
									BgL_l1611z00_4939 = BgL_l1611z00_5974;
									goto BgL_zc3z04anonymousza32020ze3z87_4938;
								}
							}
						else
							{	/* SawMill/regalloc.scm 273 */
								BgL_tmpz00_5969 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_5969);
				}
			}
		}

	}



/* &<@anonymous:2014> */
	obj_t BGl_z62zc3z04anonymousza32014ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4760, obj_t BgL_r1z00_4762)
	{
		{	/* SawMill/regalloc.scm 268 */
			{	/* SawMill/regalloc.scm 269 */
				obj_t BgL_resetz00_4761;

				BgL_resetz00_4761 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4760, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 269 */
					bool_t BgL_tmpz00_5980;

					{
						obj_t BgL_l1609z00_4941;

						BgL_l1609z00_4941 = BgL_resetz00_4761;
					BgL_zc3z04anonymousza32015ze3z87_4940:
						if (PAIRP(BgL_l1609z00_4941))
							{	/* SawMill/regalloc.scm 269 */
								BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
									(BgL_r1z00_4762, CAR(BgL_l1609z00_4941));
								{
									obj_t BgL_l1609z00_5985;

									BgL_l1609z00_5985 = CDR(BgL_l1609z00_4941);
									BgL_l1609z00_4941 = BgL_l1609z00_5985;
									goto BgL_zc3z04anonymousza32015ze3z87_4940;
								}
							}
						else
							{	/* SawMill/regalloc.scm 269 */
								BgL_tmpz00_5980 = ((bool_t) 1);
							}
					}
					return BBOOL(BgL_tmpz00_5980);
				}
			}
		}

	}



/* interference! */
	obj_t BGl_interferencez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_83, obj_t BgL_regsz00_84)
	{
		{	/* SawMill/regalloc.scm 344 */
			{	/* SawMill/regalloc.scm 345 */
				obj_t BgL_list2092z00_2492;

				BgL_list2092z00_2492 =
					MAKE_YOUNG_PAIR(BGl_string3028z00zzsaw_registerzd2allocationzd2,
					BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list2092z00_2492);
			}
			{
				obj_t BgL_l1638z00_2494;

				BgL_l1638z00_2494 = BgL_blocksz00_83;
			BgL_zc3z04anonymousza32093ze3z87_2495:
				if (PAIRP(BgL_l1638z00_2494))
					{	/* SawMill/regalloc.scm 347 */
						{	/* SawMill/regalloc.scm 348 */
							obj_t BgL_bz00_2497;

							BgL_bz00_2497 = CAR(BgL_l1638z00_2494);
							{	/* SawMill/regalloc.scm 348 */
								obj_t BgL_g1637z00_2498;

								BgL_g1637z00_2498 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_2497)))->BgL_firstz00);
								{
									obj_t BgL_l1635z00_2500;

									BgL_l1635z00_2500 = BgL_g1637z00_2498;
								BgL_zc3z04anonymousza32095ze3z87_2501:
									if (PAIRP(BgL_l1635z00_2500))
										{	/* SawMill/regalloc.scm 348 */
											{	/* SawMill/regalloc.scm 348 */
												obj_t BgL_iz00_2503;

												BgL_iz00_2503 = CAR(BgL_l1635z00_2500);
												BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2(
													((BgL_rtl_insz00_bglt) BgL_iz00_2503));
											}
											{
												obj_t BgL_l1635z00_6001;

												BgL_l1635z00_6001 = CDR(BgL_l1635z00_2500);
												BgL_l1635z00_2500 = BgL_l1635z00_6001;
												goto BgL_zc3z04anonymousza32095ze3z87_2501;
											}
										}
									else
										{	/* SawMill/regalloc.scm 348 */
											((bool_t) 1);
										}
								}
							}
						}
						{
							obj_t BgL_l1638z00_6003;

							BgL_l1638z00_6003 = CDR(BgL_l1638z00_2494);
							BgL_l1638z00_2494 = BgL_l1638z00_6003;
							goto BgL_zc3z04anonymousza32093ze3z87_2495;
						}
					}
				else
					{	/* SawMill/regalloc.scm 347 */
						((bool_t) 1);
					}
			}
			{	/* SawMill/regalloc.scm 350 */
				obj_t BgL_list2099z00_2508;

				BgL_list2099z00_2508 =
					MAKE_YOUNG_PAIR(BGl_string3029z00zzsaw_registerzd2allocationzd2,
					BNIL);
				return BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
					BgL_list2099z00_2508);
		}}

	}



/* interfere-ins! */
	obj_t
		BGl_interferezd2insz12zc0zzsaw_registerzd2allocationzd2(BgL_rtl_insz00_bglt
		BgL_iz00_85)
	{
		{	/* SawMill/regalloc.scm 355 */
			{	/* SawMill/regalloc.scm 358 */
				obj_t BgL_arg2101z00_2511;

				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_6008;

					{
						obj_t BgL_auxz00_6009;

						{	/* SawMill/regalloc.scm 357 */
							BgL_objectz00_bglt BgL_tmpz00_6010;

							BgL_tmpz00_6010 = ((BgL_objectz00_bglt) BgL_iz00_85);
							BgL_auxz00_6009 = BGL_OBJECT_WIDENING(BgL_tmpz00_6010);
						}
						BgL_auxz00_6008 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_6009);
					}
					BgL_arg2101z00_2511 =
						(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_6008))->BgL_inz00);
				}
				{	/* SawMill/regalloc.scm 360 */
					obj_t BgL_zc3z04anonymousza32102ze3z87_4766;

					BgL_zc3z04anonymousza32102ze3z87_4766 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32102ze3ze5zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32102ze3z87_4766,
						(int) (((long) 0)), ((obj_t) BgL_iz00_85));
					BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3z04anonymousza32102ze3z87_4766,
						((BgL_regsetz00_bglt) BgL_arg2101z00_2511));
			}}
			{	/* SawMill/regalloc.scm 365 */
				obj_t BgL_arg2107z00_2521;

				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_6023;

					{
						obj_t BgL_auxz00_6024;

						{	/* SawMill/regalloc.scm 364 */
							BgL_objectz00_bglt BgL_tmpz00_6025;

							BgL_tmpz00_6025 = ((BgL_objectz00_bglt) BgL_iz00_85);
							BgL_auxz00_6024 = BGL_OBJECT_WIDENING(BgL_tmpz00_6025);
						}
						BgL_auxz00_6023 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_6024);
					}
					BgL_arg2107z00_2521 =
						(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_6023))->BgL_outz00);
				}
				{	/* SawMill/regalloc.scm 367 */
					obj_t BgL_zc3z04anonymousza32108ze3z87_4764;

					BgL_zc3z04anonymousza32108ze3z87_4764 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32108ze3ze5zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32108ze3z87_4764,
						(int) (((long) 0)), ((obj_t) BgL_iz00_85));
					return
						BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3z04anonymousza32108ze3z87_4764,
						((BgL_regsetz00_bglt) BgL_arg2107z00_2521));
				}
			}
		}

	}



/* &<@anonymous:2108> */
	obj_t BGl_z62zc3z04anonymousza32108ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4767, obj_t BgL_r1z00_4769)
	{
		{	/* SawMill/regalloc.scm 365 */
			{	/* SawMill/regalloc.scm 367 */
				BgL_rtl_insz00_bglt BgL_i1218z00_4768;

				BgL_i1218z00_4768 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_4767, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 367 */
					obj_t BgL_arg2110z00_4942;

					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_6041;

						{
							obj_t BgL_auxz00_6042;

							{	/* SawMill/regalloc.scm 366 */
								BgL_objectz00_bglt BgL_tmpz00_6043;

								BgL_tmpz00_6043 = ((BgL_objectz00_bglt) BgL_i1218z00_4768);
								BgL_auxz00_6042 = BGL_OBJECT_WIDENING(BgL_tmpz00_6043);
							}
							BgL_auxz00_6041 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_6042);
						}
						BgL_arg2110z00_4942 =
							(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_6041))->
							BgL_outz00);
					}
					{	/* SawMill/regalloc.scm 368 */
						obj_t BgL_zc3z04anonymousza32111ze3z87_4943;

						BgL_zc3z04anonymousza32111ze3z87_4943 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_registerzd2allocationzd2,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32111ze3z87_4943,
							(int) (((long) 0)), BgL_r1z00_4769);
						return
							BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
							(BgL_zc3z04anonymousza32111ze3z87_4943,
							((BgL_regsetz00_bglt) BgL_arg2110z00_4942));
					}
				}
			}
		}

	}



/* &<@anonymous:2111> */
	obj_t BGl_z62zc3z04anonymousza32111ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4770, obj_t BgL_r2z00_4772)
	{
		{	/* SawMill/regalloc.scm 367 */
			{	/* SawMill/regalloc.scm 368 */
				obj_t BgL_r1z00_4771;

				BgL_r1z00_4771 = PROCEDURE_REF(BgL_envz00_4770, (int) (((long) 0)));
				return
					BBOOL(BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
					(BgL_r1z00_4771, BgL_r2z00_4772));
			}
		}

	}



/* &<@anonymous:2102> */
	obj_t BGl_z62zc3z04anonymousza32102ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4773, obj_t BgL_r1z00_4775)
	{
		{	/* SawMill/regalloc.scm 358 */
			{	/* SawMill/regalloc.scm 360 */
				BgL_rtl_insz00_bglt BgL_i1218z00_4774;

				BgL_i1218z00_4774 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_4773, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 360 */
					obj_t BgL_arg2104z00_4944;

					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_6062;

						{
							obj_t BgL_auxz00_6063;

							{	/* SawMill/regalloc.scm 359 */
								BgL_objectz00_bglt BgL_tmpz00_6064;

								BgL_tmpz00_6064 = ((BgL_objectz00_bglt) BgL_i1218z00_4774);
								BgL_auxz00_6063 = BGL_OBJECT_WIDENING(BgL_tmpz00_6064);
							}
							BgL_auxz00_6062 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_6063);
						}
						BgL_arg2104z00_4944 =
							(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_6062))->
							BgL_inz00);
					}
					{	/* SawMill/regalloc.scm 361 */
						obj_t BgL_zc3z04anonymousza32105ze3z87_4945;

						BgL_zc3z04anonymousza32105ze3z87_4945 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32105ze3ze5zzsaw_registerzd2allocationzd2,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32105ze3z87_4945,
							(int) (((long) 0)), BgL_r1z00_4775);
						return
							BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
							(BgL_zc3z04anonymousza32105ze3z87_4945,
							((BgL_regsetz00_bglt) BgL_arg2104z00_4944));
					}
				}
			}
		}

	}



/* &<@anonymous:2105> */
	obj_t BGl_z62zc3z04anonymousza32105ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4776, obj_t BgL_r2z00_4778)
	{
		{	/* SawMill/regalloc.scm 360 */
			{	/* SawMill/regalloc.scm 361 */
				obj_t BgL_r1z00_4777;

				BgL_r1z00_4777 = PROCEDURE_REF(BgL_envz00_4776, (int) (((long) 0)));
				return
					BBOOL(BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
					(BgL_r1z00_4777, BgL_r2z00_4778));
			}
		}

	}



/* interfere-reg! */
	bool_t BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_r1z00_86, obj_t BgL_r2z00_87)
	{
		{	/* SawMill/regalloc.scm 375 */
			{	/* SawMill/regalloc.scm 376 */
				bool_t BgL_test3222z00_6080;

				if ((BgL_r1z00_86 == BgL_r2z00_87))
					{	/* SawMill/regalloc.scm 376 */
						BgL_test3222z00_6080 = ((bool_t) 1);
					}
				else
					{	/* SawMill/regalloc.scm 376 */
						obj_t BgL_arg2118z00_2536;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6083;

							{
								obj_t BgL_auxz00_6084;

								{	/* SawMill/regalloc.scm 376 */
									BgL_objectz00_bglt BgL_tmpz00_6085;

									BgL_tmpz00_6085 =
										((BgL_objectz00_bglt) ((BgL_rtl_regz00_bglt) BgL_r1z00_86));
									BgL_auxz00_6084 = BGL_OBJECT_WIDENING(BgL_tmpz00_6085);
								}
								BgL_auxz00_6083 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6084);
							}
							BgL_arg2118z00_2536 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6083))->
								BgL_interferez00);
						}
						BgL_test3222z00_6080 =
							BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
							((BgL_rtl_regz00_bglt) BgL_r2z00_87),
							((BgL_regsetz00_bglt) BgL_arg2118z00_2536));
					}
				if (BgL_test3222z00_6080)
					{	/* SawMill/regalloc.scm 376 */
						return ((bool_t) 0);
					}
				else
					{	/* SawMill/regalloc.scm 376 */
						{	/* SawMill/regalloc.scm 377 */
							obj_t BgL_arg2116z00_2533;

							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6094;

								{
									obj_t BgL_auxz00_6095;

									{	/* SawMill/regalloc.scm 377 */
										BgL_objectz00_bglt BgL_tmpz00_6096;

										BgL_tmpz00_6096 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_r1z00_86));
										BgL_auxz00_6095 = BGL_OBJECT_WIDENING(BgL_tmpz00_6096);
									}
									BgL_auxz00_6094 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6095);
								}
								BgL_arg2116z00_2533 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6094))->
									BgL_interferez00);
							}
							BGl_regsetzd2addz12zc0zzsaw_regsetz00(
								((BgL_regsetz00_bglt) BgL_arg2116z00_2533),
								((BgL_rtl_regz00_bglt) BgL_r2z00_87));
						}
						{	/* SawMill/regalloc.scm 378 */
							obj_t BgL_arg2117z00_2534;

							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6105;

								{
									obj_t BgL_auxz00_6106;

									{	/* SawMill/regalloc.scm 378 */
										BgL_objectz00_bglt BgL_tmpz00_6107;

										BgL_tmpz00_6107 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_r2z00_87));
										BgL_auxz00_6106 = BGL_OBJECT_WIDENING(BgL_tmpz00_6107);
									}
									BgL_auxz00_6105 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6106);
								}
								BgL_arg2117z00_2534 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6105))->
									BgL_interferez00);
							}
							return
								BGl_regsetzd2addz12zc0zzsaw_regsetz00(
								((BgL_regsetz00_bglt) BgL_arg2117z00_2534),
								((BgL_rtl_regz00_bglt) BgL_r1z00_86));
						}
					}
			}
		}

	}



/* cleanup-dest! */
	obj_t BGl_cleanupzd2destz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_88)
	{
		{	/* SawMill/regalloc.scm 383 */
			{	/* SawMill/regalloc.scm 384 */
				obj_t BgL_list2119z00_2537;

				BgL_list2119z00_2537 =
					MAKE_YOUNG_PAIR(BGl_string3030z00zzsaw_registerzd2allocationzd2,
					BNIL);
				BGl_verbosez00zztools_speekz00(BINT(((long) 3)), BgL_list2119z00_2537);
			}
			{	/* SawMill/regalloc.scm 385 */
				long BgL_nz00_2538;

				BgL_nz00_2538 = ((long) 0);
				{
					obj_t BgL_l1643z00_2540;

					BgL_l1643z00_2540 = BgL_blocksz00_88;
				BgL_zc3z04anonymousza32120ze3z87_2541:
					if (PAIRP(BgL_l1643z00_2540))
						{	/* SawMill/regalloc.scm 386 */
							{	/* SawMill/regalloc.scm 387 */
								obj_t BgL_bz00_2543;

								BgL_bz00_2543 = CAR(BgL_l1643z00_2540);
								{	/* SawMill/regalloc.scm 387 */
									obj_t BgL_g1642z00_2544;

									BgL_g1642z00_2544 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_bz00_2543)))->BgL_firstz00);
									{
										obj_t BgL_l1640z00_2546;

										BgL_l1640z00_2546 = BgL_g1642z00_2544;
									BgL_zc3z04anonymousza32122ze3z87_2547:
										if (PAIRP(BgL_l1640z00_2546))
											{	/* SawMill/regalloc.scm 393 */
												{	/* SawMill/regalloc.scm 388 */
													obj_t BgL_iz00_2549;

													BgL_iz00_2549 = CAR(BgL_l1640z00_2546);
													{	/* SawMill/regalloc.scm 389 */
														bool_t BgL_test3226z00_6127;

														{	/* SawMill/regalloc.scm 389 */
															obj_t BgL_arg2132z00_2558;

															BgL_arg2132z00_2558 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_2549))))->
																BgL_destz00);
															BgL_test3226z00_6127 =
																BGl_isazf3zf3zz__objectz00(BgL_arg2132z00_2558,
																BGl_rtl_regzf2razf2zzsaw_regsetz00);
														}
														if (BgL_test3226z00_6127)
															{	/* SawMill/regalloc.scm 390 */
																bool_t BgL_test3227z00_6132;

																{	/* SawMill/regalloc.scm 390 */
																	obj_t BgL_arg2130z00_2556;
																	obj_t BgL_arg2131z00_2557;

																	BgL_arg2130z00_2556 =
																		(((BgL_rtl_insz00_bglt) COBJECT(
																				((BgL_rtl_insz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						BgL_iz00_2549))))->BgL_destz00);
																	{
																		BgL_rtl_inszf2razf2_bglt BgL_auxz00_6136;

																		{
																			obj_t BgL_auxz00_6137;

																			{	/* SawMill/regalloc.scm 390 */
																				BgL_objectz00_bglt BgL_tmpz00_6138;

																				BgL_tmpz00_6138 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_insz00_bglt)
																						BgL_iz00_2549));
																				BgL_auxz00_6137 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6138);
																			}
																			BgL_auxz00_6136 =
																				((BgL_rtl_inszf2razf2_bglt)
																				BgL_auxz00_6137);
																		}
																		BgL_arg2131z00_2557 =
																			(((BgL_rtl_inszf2razf2_bglt)
																				COBJECT(BgL_auxz00_6136))->BgL_outz00);
																	}
																	BgL_test3227z00_6132 =
																		BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
																		((BgL_rtl_regz00_bglt) BgL_arg2130z00_2556),
																		((BgL_regsetz00_bglt) BgL_arg2131z00_2557));
																}
																if (BgL_test3227z00_6132)
																	{	/* SawMill/regalloc.scm 390 */
																		BFALSE;
																	}
																else
																	{	/* SawMill/regalloc.scm 390 */
																		BgL_nz00_2538 =
																			(BgL_nz00_2538 + ((long) 1));
																		((((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							((BgL_rtl_insz00_bglt)
																								BgL_iz00_2549))))->
																				BgL_destz00) =
																			((obj_t) BFALSE), BUNSPEC);
															}}
														else
															{	/* SawMill/regalloc.scm 389 */
																BFALSE;
															}
													}
												}
												{
													obj_t BgL_l1640z00_6151;

													BgL_l1640z00_6151 = CDR(BgL_l1640z00_2546);
													BgL_l1640z00_2546 = BgL_l1640z00_6151;
													goto BgL_zc3z04anonymousza32122ze3z87_2547;
												}
											}
										else
											{	/* SawMill/regalloc.scm 393 */
												((bool_t) 1);
											}
									}
								}
							}
							{
								obj_t BgL_l1643z00_6153;

								BgL_l1643z00_6153 = CDR(BgL_l1643z00_2540);
								BgL_l1643z00_2540 = BgL_l1643z00_6153;
								goto BgL_zc3z04anonymousza32120ze3z87_2541;
							}
						}
					else
						{	/* SawMill/regalloc.scm 386 */
							((bool_t) 1);
						}
				}
				{	/* SawMill/regalloc.scm 395 */
					obj_t BgL_list2135z00_2563;

					{	/* SawMill/regalloc.scm 395 */
						obj_t BgL_arg2136z00_2564;

						BgL_arg2136z00_2564 =
							MAKE_YOUNG_PAIR(BGl_string3021z00zzsaw_registerzd2allocationzd2,
							BNIL);
						BgL_list2135z00_2563 =
							MAKE_YOUNG_PAIR(BINT(BgL_nz00_2538), BgL_arg2136z00_2564);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list2135z00_2563);
		}}}

	}



/* register-coloring */
	obj_t BGl_registerzd2coloringzd2zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_89, obj_t BgL_hregsz00_90, obj_t BgL_cregsz00_91)
	{
		{	/* SawMill/regalloc.scm 400 */
			{	/* SawMill/regalloc.scm 402 */
				obj_t BgL_g1647z00_2565;

				{	/* SawMill/regalloc.scm 405 */
					obj_t BgL_list2142z00_2575;

					{	/* SawMill/regalloc.scm 405 */
						obj_t BgL_arg2143z00_2576;

						{	/* SawMill/regalloc.scm 405 */
							obj_t BgL_arg2144z00_2577;

							BgL_arg2144z00_2577 = MAKE_YOUNG_PAIR(BgL_cregsz00_91, BNIL);
							BgL_arg2143z00_2576 =
								MAKE_YOUNG_PAIR(BgL_hregsz00_90, BgL_arg2144z00_2577);
						}
						BgL_list2142z00_2575 =
							MAKE_YOUNG_PAIR(BgL_pregsz00_89, BgL_arg2143z00_2576);
					}
					BgL_g1647z00_2565 =
						BGl_appendz00zz__r4_pairs_and_lists_6_3z00(BgL_list2142z00_2575);
				}
				{
					obj_t BgL_l1645z00_2567;

					BgL_l1645z00_2567 = BgL_g1647z00_2565;
				BgL_zc3z04anonymousza32137ze3z87_2568:
					if (PAIRP(BgL_l1645z00_2567))
						{	/* SawMill/regalloc.scm 405 */
							{	/* SawMill/regalloc.scm 403 */
								obj_t BgL_rz00_2570;

								BgL_rz00_2570 = CAR(BgL_l1645z00_2567);
								{
									obj_t BgL_auxz00_6174;
									BgL_rtl_regzf2razf2_bglt BgL_auxz00_6167;

									{	/* SawMill/regalloc.scm 404 */
										obj_t BgL_arg2140z00_2572;

										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_6175;

											{
												obj_t BgL_auxz00_6176;

												{	/* SawMill/regalloc.scm 404 */
													BgL_objectz00_bglt BgL_tmpz00_6177;

													BgL_tmpz00_6177 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_rz00_2570));
													BgL_auxz00_6176 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6177);
												}
												BgL_auxz00_6175 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6176);
											}
											BgL_arg2140z00_2572 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6175))->
												BgL_interferez00);
										}
										BgL_auxz00_6174 =
											((obj_t)
											BGl_duplicatezd2regsetzd2zzsaw_regsetz00(
												((BgL_regsetz00_bglt) BgL_arg2140z00_2572)));
									}
									{
										obj_t BgL_auxz00_6168;

										{	/* SawMill/regalloc.scm 404 */
											BgL_objectz00_bglt BgL_tmpz00_6169;

											BgL_tmpz00_6169 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_rz00_2570));
											BgL_auxz00_6168 = BGL_OBJECT_WIDENING(BgL_tmpz00_6169);
										}
										BgL_auxz00_6167 =
											((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6168);
									}
									((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6167))->
											BgL_interfere2z00) = ((obj_t) BgL_auxz00_6174), BUNSPEC);
								}
							}
							{
								obj_t BgL_l1645z00_6187;

								BgL_l1645z00_6187 = CDR(BgL_l1645z00_2567);
								BgL_l1645z00_2567 = BgL_l1645z00_6187;
								goto BgL_zc3z04anonymousza32137ze3z87_2568;
							}
						}
					else
						{	/* SawMill/regalloc.scm 405 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawMill/regalloc.scm 407 */
				obj_t BgL_cregsz00_2578;

				{	/* SawMill/regalloc.scm 407 */
					obj_t BgL_hook1652z00_2582;

					BgL_hook1652z00_2582 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{
						obj_t BgL_l1649z00_2584;
						obj_t BgL_h1650z00_2585;

						BgL_l1649z00_2584 = BgL_cregsz00_91;
						BgL_h1650z00_2585 = BgL_hook1652z00_2582;
					BgL_zc3z04anonymousza32148ze3z87_2586:
						if (NULLP(BgL_l1649z00_2584))
							{	/* SawMill/regalloc.scm 407 */
								BgL_cregsz00_2578 = CDR(BgL_hook1652z00_2582);
							}
						else
							{	/* SawMill/regalloc.scm 407 */
								bool_t BgL_test3230z00_6193;

								{	/* SawMill/regalloc.scm 407 */
									obj_t BgL_arg2155z00_2596;

									{	/* SawMill/regalloc.scm 407 */
										BgL_rtl_regz00_bglt BgL_oz00_4107;

										BgL_oz00_4107 =
											((BgL_rtl_regz00_bglt) CAR(((obj_t) BgL_l1649z00_2584)));
										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_6197;

											{
												obj_t BgL_auxz00_6198;

												{	/* SawMill/regalloc.scm 407 */
													BgL_objectz00_bglt BgL_tmpz00_6199;

													BgL_tmpz00_6199 =
														((BgL_objectz00_bglt) BgL_oz00_4107);
													BgL_auxz00_6198 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6199);
												}
												BgL_auxz00_6197 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6198);
											}
											BgL_arg2155z00_2596 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6197))->
												BgL_colorz00);
										}
									}
									BgL_test3230z00_6193 = (BgL_arg2155z00_2596 == BFALSE);
								}
								if (BgL_test3230z00_6193)
									{	/* SawMill/regalloc.scm 407 */
										obj_t BgL_nh1651z00_2591;

										{	/* SawMill/regalloc.scm 407 */
											obj_t BgL_arg2153z00_2593;

											BgL_arg2153z00_2593 = CAR(((obj_t) BgL_l1649z00_2584));
											{	/* SawMill/regalloc.scm 407 */
												obj_t BgL_res2838z00_4110;

												BgL_res2838z00_4110 =
													MAKE_YOUNG_PAIR(BgL_arg2153z00_2593, BNIL);
												BgL_nh1651z00_2591 = BgL_res2838z00_4110;
											}
										}
										SET_CDR(BgL_h1650z00_2585, BgL_nh1651z00_2591);
										{	/* SawMill/regalloc.scm 407 */
											obj_t BgL_arg2152z00_2592;

											BgL_arg2152z00_2592 = CDR(((obj_t) BgL_l1649z00_2584));
											{
												obj_t BgL_h1650z00_6212;
												obj_t BgL_l1649z00_6211;

												BgL_l1649z00_6211 = BgL_arg2152z00_2592;
												BgL_h1650z00_6212 = BgL_nh1651z00_2591;
												BgL_h1650z00_2585 = BgL_h1650z00_6212;
												BgL_l1649z00_2584 = BgL_l1649z00_6211;
												goto BgL_zc3z04anonymousza32148ze3z87_2586;
											}
										}
									}
								else
									{	/* SawMill/regalloc.scm 407 */
										obj_t BgL_arg2154z00_2594;

										BgL_arg2154z00_2594 = CDR(((obj_t) BgL_l1649z00_2584));
										{
											obj_t BgL_l1649z00_6215;

											BgL_l1649z00_6215 = BgL_arg2154z00_2594;
											BgL_l1649z00_2584 = BgL_l1649z00_6215;
											goto BgL_zc3z04anonymousza32148ze3z87_2586;
										}
									}
							}
					}
				}
				if (PAIRP(BgL_cregsz00_2578))
					{	/* SawMill/regalloc.scm 408 */
						if (NULLP(BgL_hregsz00_90))
							{	/* SawMill/regalloc.scm 410 */
								return
									BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2
									(BgL_pregsz00_89, BgL_cregsz00_2578);
							}
						else
							{	/* SawMill/regalloc.scm 410 */
								return
									BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2
									(BgL_pregsz00_89, BgL_hregsz00_90, BgL_cregsz00_2578);
							}
					}
				else
					{	/* SawMill/regalloc.scm 408 */
						return BFALSE;
					}
			}
		}

	}



/* register-stack-coloring */
	obj_t BGl_registerzd2stackzd2coloringz00zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_92, obj_t BgL_cregsz00_93)
	{
		{	/* SawMill/regalloc.scm 418 */
			{
				obj_t BgL_registersz00_2686;
				obj_t BgL_siza7eza7_2687;

				{	/* SawMill/regalloc.scm 445 */
					obj_t BgL_colorsz00_2599;

					BgL_colorsz00_2599 =
						make_vector(bgl_list_length
						(BGl_appendzd221011zd2zzsaw_registerzd2allocationzd2
							(BgL_pregsz00_92, BgL_cregsz00_93)), BFALSE);
					{
						obj_t BgL_interferez00_2658;
						long BgL_maxz00_2659;

						{
							long BgL_minz00_2641;
							obj_t BgL_stackz00_2642;

							{	/* SawMill/regalloc.scm 468 */
								long BgL_nz00_2602;

								BgL_nz00_2602 = ((long) 0);
								{
									obj_t BgL_l1662z00_2604;

									BgL_l1662z00_2604 = BgL_pregsz00_92;
								BgL_zc3z04anonymousza32156ze3z87_2605:
									if (PAIRP(BgL_l1662z00_2604))
										{	/* SawMill/regalloc.scm 469 */
											{	/* SawMill/regalloc.scm 470 */
												obj_t BgL_rz00_2607;

												BgL_rz00_2607 = CAR(BgL_l1662z00_2604);
												BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
													((BgL_rtl_regz00_bglt) BgL_rz00_2607));
												{	/* SawMill/regalloc.scm 471 */
													obj_t BgL_vz00_4213;

													BgL_vz00_4213 = BINT(BgL_nz00_2602);
													{
														BgL_rtl_regzf2razf2_bglt BgL_auxz00_6231;

														{
															obj_t BgL_auxz00_6232;

															{	/* SawMill/regalloc.scm 471 */
																BgL_objectz00_bglt BgL_tmpz00_6233;

																BgL_tmpz00_6233 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_rz00_2607));
																BgL_auxz00_6232 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_6233);
															}
															BgL_auxz00_6231 =
																((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6232);
														}
														((((BgL_rtl_regzf2razf2_bglt)
																	COBJECT(BgL_auxz00_6231))->BgL_colorz00) =
															((obj_t) BgL_vz00_4213), BUNSPEC);
													}
												}
												BgL_nz00_2602 = (BgL_nz00_2602 + ((long) 1));
											}
											{
												obj_t BgL_l1662z00_6240;

												BgL_l1662z00_6240 = CDR(BgL_l1662z00_2604);
												BgL_l1662z00_2604 = BgL_l1662z00_6240;
												goto BgL_zc3z04anonymousza32156ze3z87_2605;
											}
										}
									else
										{	/* SawMill/regalloc.scm 469 */
											((bool_t) 1);
										}
								}
							}
							{	/* SawMill/regalloc.scm 475 */
								long BgL_minz00_2610;
								obj_t BgL_sregsz00_2611;

								BgL_minz00_2610 = bgl_list_length(BgL_pregsz00_92);
								BgL_sregsz00_2611 =
									BGl_sortz00zz__r4_vectors_6_8z00(BgL_cregsz00_93,
									BGl_proc3031z00zzsaw_registerzd2allocationzd2);
								{
									obj_t BgL_regsz00_2614;
									obj_t BgL_stackz00_2615;
									obj_t BgL_siza7eza7_2616;

									BgL_regsz00_2614 = BgL_sregsz00_2611;
									BgL_stackz00_2615 = BNIL;
									BgL_siza7eza7_2616 = BINT(((long) 0));
								BgL_zc3z04anonymousza32159ze3z87_2617:
									if (NULLP(BgL_regsz00_2614))
										{	/* SawMill/regalloc.scm 484 */
											long BgL_nz00_2619;

											BgL_minz00_2641 = BgL_minz00_2610;
											BgL_stackz00_2642 = BgL_stackz00_2615;
											{
												obj_t BgL_stackz00_2645;
												long BgL_maxz00_2646;

												BgL_stackz00_2645 = BgL_stackz00_2642;
												BgL_maxz00_2646 = BgL_minz00_2641;
											BgL_zc3z04anonymousza32177ze3z87_2647:
												if (PAIRP(BgL_stackz00_2645))
													{	/* SawMill/regalloc.scm 463 */
														BgL_rtl_regz00_bglt BgL_i1223z00_2649;

														BgL_i1223z00_2649 =
															((BgL_rtl_regz00_bglt) CAR(BgL_stackz00_2645));
														{
															obj_t BgL_auxz00_6256;
															BgL_rtl_regzf2razf2_bglt BgL_auxz00_6250;

															{	/* SawMill/regalloc.scm 464 */
																obj_t BgL_arg2179z00_2650;

																{
																	BgL_rtl_regzf2razf2_bglt BgL_auxz00_6257;

																	{
																		obj_t BgL_auxz00_6258;

																		{	/* SawMill/regalloc.scm 464 */
																			BgL_objectz00_bglt BgL_tmpz00_6259;

																			BgL_tmpz00_6259 =
																				((BgL_objectz00_bglt)
																				BgL_i1223z00_2649);
																			BgL_auxz00_6258 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6259);
																		}
																		BgL_auxz00_6257 =
																			((BgL_rtl_regzf2razf2_bglt)
																			BgL_auxz00_6258);
																	}
																	BgL_arg2179z00_2650 =
																		(((BgL_rtl_regzf2razf2_bglt)
																			COBJECT(BgL_auxz00_6257))->
																		BgL_interferez00);
																}
																{	/* SawMill/regalloc.scm 464 */
																	long BgL_tmpz00_6264;

																	BgL_interferez00_2658 = BgL_arg2179z00_2650;
																	BgL_maxz00_2659 = BgL_maxz00_2646;
																	{	/* SawMill/regalloc.scm 447 */

																		BGl_vectorzd2fillz12zc0zz__r4_vectors_6_8z00
																			(BgL_colorsz00_2599, BFALSE, ((long) 0),
																			VECTOR_LENGTH(BgL_colorsz00_2599));
																	}
																	{	/* SawMill/regalloc.scm 449 */
																		obj_t BgL_zc3z04anonymousza32187ze3z87_4780;

																		BgL_zc3z04anonymousza32187ze3z87_4780 =
																			MAKE_FX_PROCEDURE
																			(BGl_z62zc3z04anonymousza32187ze3ze5zzsaw_registerzd2allocationzd2,
																			(int) (((long) 1)), (int) (((long) 1)));
																		PROCEDURE_SET
																			(BgL_zc3z04anonymousza32187ze3z87_4780,
																			(int) (((long) 0)), BgL_colorsz00_2599);
																		BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
																			(BgL_zc3z04anonymousza32187ze3z87_4780,
																			((BgL_regsetz00_bglt)
																				BgL_interferez00_2658));
																	}
																	if (
																		(VECTOR_LENGTH(BgL_colorsz00_2599) ==
																			BgL_maxz00_2659))
																		{	/* SawMill/regalloc.scm 453 */
																			BgL_tmpz00_6264 = BgL_maxz00_2659;
																		}
																	else
																		{
																			long BgL_iz00_4192;

																			BgL_iz00_4192 = ((long) 0);
																		BgL_loopz00_4191:
																			if (CBOOL(VECTOR_REF(BgL_colorsz00_2599,
																						BgL_iz00_4192)))
																				{
																					long BgL_iz00_6280;

																					BgL_iz00_6280 =
																						(BgL_iz00_4192 + ((long) 1));
																					BgL_iz00_4192 = BgL_iz00_6280;
																					goto BgL_loopz00_4191;
																				}
																			else
																				{	/* SawMill/regalloc.scm 456 */
																					BgL_tmpz00_6264 = BgL_iz00_4192;
																				}
																		}
																	BgL_auxz00_6256 = BINT(BgL_tmpz00_6264);
																}
															}
															{
																obj_t BgL_auxz00_6251;

																{	/* SawMill/regalloc.scm 464 */
																	BgL_objectz00_bglt BgL_tmpz00_6252;

																	BgL_tmpz00_6252 =
																		((BgL_objectz00_bglt) BgL_i1223z00_2649);
																	BgL_auxz00_6251 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_6252);
																}
																BgL_auxz00_6250 =
																	((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6251);
															}
															((((BgL_rtl_regzf2razf2_bglt)
																		COBJECT(BgL_auxz00_6250))->BgL_colorz00) =
																((obj_t) BgL_auxz00_6256), BUNSPEC);
														}
														{	/* SawMill/regalloc.scm 465 */
															obj_t BgL_arg2180z00_2651;
															long BgL_arg2181z00_2652;

															BgL_arg2180z00_2651 = CDR(BgL_stackz00_2645);
															{	/* SawMill/regalloc.scm 465 */
																bool_t BgL_test3238z00_6285;

																{	/* SawMill/regalloc.scm 465 */
																	obj_t BgL_arg2184z00_2655;

																	{
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_6286;

																		{
																			obj_t BgL_auxz00_6287;

																			{	/* SawMill/regalloc.scm 465 */
																				BgL_objectz00_bglt BgL_tmpz00_6288;

																				BgL_tmpz00_6288 =
																					((BgL_objectz00_bglt)
																					BgL_i1223z00_2649);
																				BgL_auxz00_6287 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6288);
																			}
																			BgL_auxz00_6286 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_6287);
																		}
																		BgL_arg2184z00_2655 =
																			(((BgL_rtl_regzf2razf2_bglt)
																				COBJECT(BgL_auxz00_6286))->
																			BgL_colorz00);
																	}
																	BgL_test3238z00_6285 =
																		(
																		(long) CINT(BgL_arg2184z00_2655) ==
																		BgL_maxz00_2646);
																}
																if (BgL_test3238z00_6285)
																	{	/* SawMill/regalloc.scm 465 */
																		BgL_arg2181z00_2652 =
																			(BgL_maxz00_2646 + ((long) 1));
																	}
																else
																	{	/* SawMill/regalloc.scm 465 */
																		BgL_arg2181z00_2652 = BgL_maxz00_2646;
																	}
															}
															{
																long BgL_maxz00_6297;
																obj_t BgL_stackz00_6296;

																BgL_stackz00_6296 = BgL_arg2180z00_2651;
																BgL_maxz00_6297 = BgL_arg2181z00_2652;
																BgL_maxz00_2646 = BgL_maxz00_6297;
																BgL_stackz00_2645 = BgL_stackz00_6296;
																goto BgL_zc3z04anonymousza32177ze3z87_2647;
															}
														}
													}
												else
													{	/* SawMill/regalloc.scm 462 */
														BgL_nz00_2619 = BgL_maxz00_2646;
													}
											}
											{	/* SawMill/regalloc.scm 486 */
												obj_t BgL_arg2161z00_2620;

												BgL_arg2161z00_2620 =
													BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(bgl_list_length
														(BgL_pregsz00_92)),
													BINT(bgl_list_length(BgL_cregsz00_93)));
												{	/* SawMill/regalloc.scm 485 */
													obj_t BgL_list2162z00_2621;

													{	/* SawMill/regalloc.scm 485 */
														obj_t BgL_arg2163z00_2622;

														{	/* SawMill/regalloc.scm 485 */
															obj_t BgL_arg2164z00_2623;

															{	/* SawMill/regalloc.scm 485 */
																obj_t BgL_arg2165z00_2624;

																{	/* SawMill/regalloc.scm 485 */
																	obj_t BgL_arg2166z00_2625;

																	{	/* SawMill/regalloc.scm 485 */
																		obj_t BgL_arg2167z00_2626;

																		BgL_arg2167z00_2626 =
																			MAKE_YOUNG_PAIR
																			(BGl_string3032z00zzsaw_registerzd2allocationzd2,
																			BNIL);
																		BgL_arg2166z00_2625 =
																			MAKE_YOUNG_PAIR
																			(BGl_string3033z00zzsaw_registerzd2allocationzd2,
																			BgL_arg2167z00_2626);
																	}
																	BgL_arg2165z00_2624 =
																		MAKE_YOUNG_PAIR(BgL_arg2161z00_2620,
																		BgL_arg2166z00_2625);
																}
																BgL_arg2164z00_2623 =
																	MAKE_YOUNG_PAIR
																	(BGl_string3034z00zzsaw_registerzd2allocationzd2,
																	BgL_arg2165z00_2624);
															}
															BgL_arg2163z00_2622 =
																MAKE_YOUNG_PAIR(BINT(BgL_nz00_2619),
																BgL_arg2164z00_2623);
														}
														BgL_list2162z00_2621 =
															MAKE_YOUNG_PAIR
															(BGl_string3035z00zzsaw_registerzd2allocationzd2,
															BgL_arg2163z00_2622);
													}
													return
														BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
														BgL_list2162z00_2621);
										}}}
									else
										{	/* SawMill/regalloc.scm 488 */
											obj_t BgL_regz00_2629;

											BgL_registersz00_2686 = BgL_regsz00_2614;
											BgL_siza7eza7_2687 = BgL_siza7eza7_2616;
											{	/* SawMill/regalloc.scm 420 */
												long BgL_g1221z00_2689;

												{	/* SawMill/regalloc.scm 422 */
													int BgL_arg2220z00_2726;

													{	/* SawMill/regalloc.scm 422 */
														int BgL_res2842z00_4123;

														{	/* SawMill/regalloc.scm 422 */
															BgL_rtl_regz00_bglt BgL_regz00_4118;

															BgL_regz00_4118 =
																((BgL_rtl_regz00_bglt)
																CAR(((obj_t) BgL_registersz00_2686)));
															{	/* SawMill/regalloc.scm 585 */
																obj_t BgL_arg2278z00_4119;

																{
																	BgL_rtl_regzf2razf2_bglt BgL_auxz00_6315;

																	{
																		obj_t BgL_auxz00_6316;

																		{	/* SawMill/regalloc.scm 585 */
																			BgL_objectz00_bglt BgL_tmpz00_6317;

																			BgL_tmpz00_6317 =
																				((BgL_objectz00_bglt) BgL_regz00_4118);
																			BgL_auxz00_6316 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_6317);
																		}
																		BgL_auxz00_6315 =
																			((BgL_rtl_regzf2razf2_bglt)
																			BgL_auxz00_6316);
																	}
																	BgL_arg2278z00_4119 =
																		(((BgL_rtl_regzf2razf2_bglt)
																			COBJECT(BgL_auxz00_6315))->
																		BgL_interfere2z00);
																}
																BgL_res2842z00_4123 =
																	(((BgL_regsetz00_bglt) COBJECT(
																			((BgL_regsetz00_bglt)
																				BgL_arg2278z00_4119)))->BgL_lengthz00);
														}}
														BgL_arg2220z00_2726 = BgL_res2842z00_4123;
													}
													BgL_g1221z00_2689 =
														((long) (BgL_arg2220z00_2726) + ((long) 1));
												}
												{
													obj_t BgL_regsz00_2691;
													obj_t BgL_minz00_2692;
													long BgL_mvalz00_2693;
													obj_t BgL_prevz00_2694;

													BgL_regsz00_2691 = BgL_registersz00_2686;
													BgL_minz00_2692 = BFALSE;
													BgL_mvalz00_2693 = BgL_g1221z00_2689;
													BgL_prevz00_2694 = BFALSE;
												BgL_zc3z04anonymousza32201ze3z87_2695:
													if (NULLP(BgL_regsz00_2691))
														{	/* SawMill/regalloc.scm 426 */
															int BgL_val1_1654z00_2698;
															obj_t BgL_val2_1655z00_2699;

															{	/* SawMill/regalloc.scm 426 */
																int BgL_res2845z00_4132;

																{	/* SawMill/regalloc.scm 585 */
																	obj_t BgL_arg2278z00_4128;

																	{
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_6328;

																		{
																			obj_t BgL_auxz00_6329;

																			{	/* SawMill/regalloc.scm 585 */
																				BgL_objectz00_bglt BgL_tmpz00_6330;

																				BgL_tmpz00_6330 =
																					((BgL_objectz00_bglt)
																					((BgL_rtl_regz00_bglt)
																						BgL_minz00_2692));
																				BgL_auxz00_6329 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6330);
																			}
																			BgL_auxz00_6328 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_6329);
																		}
																		BgL_arg2278z00_4128 =
																			(((BgL_rtl_regzf2razf2_bglt)
																				COBJECT(BgL_auxz00_6328))->
																			BgL_interfere2z00);
																	}
																	BgL_res2845z00_4132 =
																		(((BgL_regsetz00_bglt) COBJECT(
																				((BgL_regsetz00_bglt)
																					BgL_arg2278z00_4128)))->
																		BgL_lengthz00);
																}
																BgL_val1_1654z00_2698 = BgL_res2845z00_4132;
															}
															BgL_val2_1655z00_2699 =
																bgl_remq_bang(BgL_minz00_2692,
																BgL_registersz00_2686);
															{	/* SawMill/regalloc.scm 426 */
																int BgL_res2846z00_4133;

																{	/* SawMill/regalloc.scm 426 */
																	int BgL_tmpz00_6339;

																	BgL_tmpz00_6339 = (int) (((long) 3));
																	BgL_res2846z00_4133 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_6339);
																} BgL_res2846z00_4133;
															}
															{	/* SawMill/regalloc.scm 426 */
																obj_t BgL_auxz00_6344;
																int BgL_tmpz00_6342;

																BgL_auxz00_6344 = BINT(BgL_val1_1654z00_2698);
																BgL_tmpz00_6342 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_6342,
																	BgL_auxz00_6344);
															}
															{	/* SawMill/regalloc.scm 426 */
																int BgL_tmpz00_6347;

																BgL_tmpz00_6347 = (int) (((long) 2));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_6347,
																	BgL_val2_1655z00_2699);
															}
															BgL_regz00_2629 = BgL_minz00_2692;
														}
													else
														{	/* SawMill/regalloc.scm 427 */
															bool_t BgL_test3240z00_6350;

															{	/* SawMill/regalloc.scm 427 */
																int BgL_arg2218z00_2723;

																{	/* SawMill/regalloc.scm 427 */
																	int BgL_res2847z00_4140;

																	{	/* SawMill/regalloc.scm 427 */
																		BgL_rtl_regz00_bglt BgL_regz00_4135;

																		BgL_regz00_4135 =
																			((BgL_rtl_regz00_bglt)
																			CAR(((obj_t) BgL_regsz00_2691)));
																		{	/* SawMill/regalloc.scm 585 */
																			obj_t BgL_arg2278z00_4136;

																			{
																				BgL_rtl_regzf2razf2_bglt
																					BgL_auxz00_6354;
																				{
																					obj_t BgL_auxz00_6355;

																					{	/* SawMill/regalloc.scm 585 */
																						BgL_objectz00_bglt BgL_tmpz00_6356;

																						BgL_tmpz00_6356 =
																							((BgL_objectz00_bglt)
																							BgL_regz00_4135);
																						BgL_auxz00_6355 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_6356);
																					}
																					BgL_auxz00_6354 =
																						((BgL_rtl_regzf2razf2_bglt)
																						BgL_auxz00_6355);
																				}
																				BgL_arg2278z00_4136 =
																					(((BgL_rtl_regzf2razf2_bglt)
																						COBJECT(BgL_auxz00_6354))->
																					BgL_interfere2z00);
																			}
																			BgL_res2847z00_4140 =
																				(((BgL_regsetz00_bglt) COBJECT(
																						((BgL_regsetz00_bglt)
																							BgL_arg2278z00_4136)))->
																				BgL_lengthz00);
																	}}
																	BgL_arg2218z00_2723 = BgL_res2847z00_4140;
																}
																BgL_test3240z00_6350 =
																	(
																	(long) (BgL_arg2218z00_2723) <
																	(long) CINT(BgL_siza7eza7_2687));
															}
															if (BgL_test3240z00_6350)
																{	/* SawMill/regalloc.scm 428 */
																	obj_t BgL_regz00_2703;

																	BgL_regz00_2703 =
																		CAR(((obj_t) BgL_regsz00_2691));
																	{	/* SawMill/regalloc.scm 428 */
																		int BgL_sza7za7_2704;

																		{	/* SawMill/regalloc.scm 429 */
																			int BgL_res2849z00_4150;

																			{	/* SawMill/regalloc.scm 585 */
																				obj_t BgL_arg2278z00_4146;

																				{
																					BgL_rtl_regzf2razf2_bglt
																						BgL_auxz00_6368;
																					{
																						obj_t BgL_auxz00_6369;

																						{	/* SawMill/regalloc.scm 585 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_6370;
																							BgL_tmpz00_6370 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_regz00_bglt)
																									BgL_regz00_2703));
																							BgL_auxz00_6369 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_6370);
																						}
																						BgL_auxz00_6368 =
																							((BgL_rtl_regzf2razf2_bglt)
																							BgL_auxz00_6369);
																					}
																					BgL_arg2278z00_4146 =
																						(((BgL_rtl_regzf2razf2_bglt)
																							COBJECT(BgL_auxz00_6368))->
																						BgL_interfere2z00);
																				}
																				BgL_res2849z00_4150 =
																					(((BgL_regsetz00_bglt) COBJECT(
																							((BgL_regsetz00_bglt)
																								BgL_arg2278z00_4146)))->
																					BgL_lengthz00);
																			}
																			BgL_sza7za7_2704 = BgL_res2849z00_4150;
																		}
																		{	/* SawMill/regalloc.scm 429 */

																			if (PAIRP(BgL_prevz00_2694))
																				{	/* SawMill/regalloc.scm 430 */
																					{	/* SawMill/regalloc.scm 432 */
																						obj_t BgL_arg2207z00_2706;

																						BgL_arg2207z00_2706 =
																							CDR(((obj_t) BgL_regsz00_2691));
																						SET_CDR(BgL_prevz00_2694,
																							BgL_arg2207z00_2706);
																					}
																					{	/* SawMill/regalloc.scm 433 */
																						int BgL_res2851z00_4154;

																						{	/* SawMill/regalloc.scm 433 */
																							int BgL_tmpz00_6383;

																							BgL_tmpz00_6383 =
																								(int) (((long) 3));
																							BgL_res2851z00_4154 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_6383);
																						} BgL_res2851z00_4154;
																					}
																					{	/* SawMill/regalloc.scm 433 */
																						obj_t BgL_auxz00_6388;
																						int BgL_tmpz00_6386;

																						BgL_auxz00_6388 =
																							BINT(BgL_sza7za7_2704);
																						BgL_tmpz00_6386 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6386,
																							BgL_auxz00_6388);
																					}
																					{	/* SawMill/regalloc.scm 433 */
																						int BgL_tmpz00_6391;

																						BgL_tmpz00_6391 =
																							(int) (((long) 2));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6391,
																							BgL_registersz00_2686);
																					}
																					BgL_regz00_2629 = BgL_regz00_2703;
																				}
																			else
																				{	/* SawMill/regalloc.scm 434 */
																					obj_t BgL_val2_1661z00_2712;

																					BgL_val2_1661z00_2712 =
																						CDR(((obj_t) BgL_regsz00_2691));
																					{	/* SawMill/regalloc.scm 434 */
																						int BgL_res2852z00_4156;

																						{	/* SawMill/regalloc.scm 434 */
																							int BgL_tmpz00_6396;

																							BgL_tmpz00_6396 =
																								(int) (((long) 3));
																							BgL_res2852z00_4156 =
																								BGL_MVALUES_NUMBER_SET
																								(BgL_tmpz00_6396);
																						} BgL_res2852z00_4156;
																					}
																					{	/* SawMill/regalloc.scm 434 */
																						obj_t BgL_auxz00_6401;
																						int BgL_tmpz00_6399;

																						BgL_auxz00_6401 =
																							BINT(BgL_sza7za7_2704);
																						BgL_tmpz00_6399 =
																							(int) (((long) 1));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6399,
																							BgL_auxz00_6401);
																					}
																					{	/* SawMill/regalloc.scm 434 */
																						int BgL_tmpz00_6404;

																						BgL_tmpz00_6404 =
																							(int) (((long) 2));
																						BGL_MVALUES_VAL_SET(BgL_tmpz00_6404,
																							BgL_val2_1661z00_2712);
																					}
																					BgL_regz00_2629 = BgL_regz00_2703;
																}}}}
															else
																{	/* SawMill/regalloc.scm 435 */
																	bool_t BgL_test3242z00_6407;

																	{	/* SawMill/regalloc.scm 435 */
																		int BgL_arg2216z00_2721;

																		{	/* SawMill/regalloc.scm 435 */
																			int BgL_res2853z00_4163;

																			{	/* SawMill/regalloc.scm 435 */
																				BgL_rtl_regz00_bglt BgL_regz00_4158;

																				BgL_regz00_4158 =
																					((BgL_rtl_regz00_bglt)
																					CAR(((obj_t) BgL_regsz00_2691)));
																				{	/* SawMill/regalloc.scm 585 */
																					obj_t BgL_arg2278z00_4159;

																					{
																						BgL_rtl_regzf2razf2_bglt
																							BgL_auxz00_6411;
																						{
																							obj_t BgL_auxz00_6412;

																							{	/* SawMill/regalloc.scm 585 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_6413;
																								BgL_tmpz00_6413 =
																									((BgL_objectz00_bglt)
																									BgL_regz00_4158);
																								BgL_auxz00_6412 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_6413);
																							}
																							BgL_auxz00_6411 =
																								((BgL_rtl_regzf2razf2_bglt)
																								BgL_auxz00_6412);
																						}
																						BgL_arg2278z00_4159 =
																							(((BgL_rtl_regzf2razf2_bglt)
																								COBJECT(BgL_auxz00_6411))->
																							BgL_interfere2z00);
																					}
																					BgL_res2853z00_4163 =
																						(((BgL_regsetz00_bglt) COBJECT(
																								((BgL_regsetz00_bglt)
																									BgL_arg2278z00_4159)))->
																						BgL_lengthz00);
																			}}
																			BgL_arg2216z00_2721 = BgL_res2853z00_4163;
																		}
																		BgL_test3242z00_6407 =
																			(
																			(long) (BgL_arg2216z00_2721) <
																			BgL_mvalz00_2693);
																	}
																	if (BgL_test3242z00_6407)
																		{	/* SawMill/regalloc.scm 436 */
																			obj_t BgL_arg2211z00_2716;
																			obj_t BgL_arg2212z00_2717;
																			int BgL_arg2213z00_2718;

																			BgL_arg2211z00_2716 =
																				CDR(((obj_t) BgL_regsz00_2691));
																			BgL_arg2212z00_2717 =
																				CAR(((obj_t) BgL_regsz00_2691));
																			{	/* SawMill/regalloc.scm 438 */
																				int BgL_res2855z00_4175;

																				{	/* SawMill/regalloc.scm 438 */
																					BgL_rtl_regz00_bglt BgL_regz00_4170;

																					BgL_regz00_4170 =
																						((BgL_rtl_regz00_bglt)
																						CAR(((obj_t) BgL_regsz00_2691)));
																					{	/* SawMill/regalloc.scm 585 */
																						obj_t BgL_arg2278z00_4171;

																						{
																							BgL_rtl_regzf2razf2_bglt
																								BgL_auxz00_6429;
																							{
																								obj_t BgL_auxz00_6430;

																								{	/* SawMill/regalloc.scm 585 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_6431;
																									BgL_tmpz00_6431 =
																										((BgL_objectz00_bglt)
																										BgL_regz00_4170);
																									BgL_auxz00_6430 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_6431);
																								}
																								BgL_auxz00_6429 =
																									((BgL_rtl_regzf2razf2_bglt)
																									BgL_auxz00_6430);
																							}
																							BgL_arg2278z00_4171 =
																								(((BgL_rtl_regzf2razf2_bglt)
																									COBJECT(BgL_auxz00_6429))->
																								BgL_interfere2z00);
																						}
																						BgL_res2855z00_4175 =
																							(((BgL_regsetz00_bglt) COBJECT(
																									((BgL_regsetz00_bglt)
																										BgL_arg2278z00_4171)))->
																							BgL_lengthz00);
																				}}
																				BgL_arg2213z00_2718 =
																					BgL_res2855z00_4175;
																			}
																			{
																				obj_t BgL_prevz00_6442;
																				long BgL_mvalz00_6440;
																				obj_t BgL_minz00_6439;
																				obj_t BgL_regsz00_6438;

																				BgL_regsz00_6438 = BgL_arg2211z00_2716;
																				BgL_minz00_6439 = BgL_arg2212z00_2717;
																				BgL_mvalz00_6440 =
																					(long) (BgL_arg2213z00_2718);
																				BgL_prevz00_6442 = BgL_regsz00_2691;
																				BgL_prevz00_2694 = BgL_prevz00_6442;
																				BgL_mvalz00_2693 = BgL_mvalz00_6440;
																				BgL_minz00_2692 = BgL_minz00_6439;
																				BgL_regsz00_2691 = BgL_regsz00_6438;
																				goto
																					BgL_zc3z04anonymousza32201ze3z87_2695;
																			}
																		}
																	else
																		{	/* SawMill/regalloc.scm 441 */
																			obj_t BgL_arg2215z00_2720;

																			BgL_arg2215z00_2720 =
																				CDR(((obj_t) BgL_regsz00_2691));
																			{
																				obj_t BgL_prevz00_6446;
																				obj_t BgL_regsz00_6445;

																				BgL_regsz00_6445 = BgL_arg2215z00_2720;
																				BgL_prevz00_6446 = BgL_regsz00_2691;
																				BgL_prevz00_2694 = BgL_prevz00_6446;
																				BgL_regsz00_2691 = BgL_regsz00_6445;
																				goto
																					BgL_zc3z04anonymousza32201ze3z87_2695;
																			}
																		}
																}
														}
												}
											}
											{	/* SawMill/regalloc.scm 489 */
												obj_t BgL_nsiza7eza7_2630;
												obj_t BgL_regsz00_2631;

												{	/* SawMill/regalloc.scm 490 */
													int BgL_tmpz00_6447;

													BgL_tmpz00_6447 = (int) (((long) 1));
													BgL_nsiza7eza7_2630 =
														BGL_MVALUES_VAL(BgL_tmpz00_6447);
												}
												{	/* SawMill/regalloc.scm 490 */
													int BgL_tmpz00_6450;

													BgL_tmpz00_6450 = (int) (((long) 2));
													BgL_regsz00_2631 = BGL_MVALUES_VAL(BgL_tmpz00_6450);
												}
												BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
													((BgL_rtl_regz00_bglt) BgL_regz00_2629));
												{	/* SawMill/regalloc.scm 491 */
													obj_t BgL_arg2170z00_2632;

													BgL_arg2170z00_2632 =
														MAKE_YOUNG_PAIR(BgL_regz00_2629, BgL_stackz00_2615);
													{
														obj_t BgL_siza7eza7_6458;
														obj_t BgL_stackz00_6457;
														obj_t BgL_regsz00_6456;

														BgL_regsz00_6456 = BgL_regsz00_2631;
														BgL_stackz00_6457 = BgL_arg2170z00_2632;
														BgL_siza7eza7_6458 = BgL_nsiza7eza7_2630;
														BgL_siza7eza7_2616 = BgL_siza7eza7_6458;
														BgL_stackz00_2615 = BgL_stackz00_6457;
														BgL_regsz00_2614 = BgL_regsz00_6456;
														goto BgL_zc3z04anonymousza32159ze3z87_2617;
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



/* &<@anonymous:2173> */
	obj_t BGl_z62zc3z04anonymousza32173ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4781, obj_t BgL_r1z00_4782, obj_t BgL_r2z00_4783)
	{
		{	/* SawMill/regalloc.scm 477 */
			{	/* SawMill/regalloc.scm 478 */
				bool_t BgL_tmpz00_6460;

				{	/* SawMill/regalloc.scm 478 */
					int BgL_arg2174z00_4946;
					int BgL_arg2175z00_4947;

					{	/* SawMill/regalloc.scm 478 */
						int BgL_res2864z00_4948;

						{	/* SawMill/regalloc.scm 585 */
							obj_t BgL_arg2278z00_4949;

							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6461;

								{
									obj_t BgL_auxz00_6462;

									{	/* SawMill/regalloc.scm 585 */
										BgL_objectz00_bglt BgL_tmpz00_6463;

										BgL_tmpz00_6463 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_r1z00_4782));
										BgL_auxz00_6462 = BGL_OBJECT_WIDENING(BgL_tmpz00_6463);
									}
									BgL_auxz00_6461 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6462);
								}
								BgL_arg2278z00_4949 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6461))->
									BgL_interfere2z00);
							}
							BgL_res2864z00_4948 =
								(((BgL_regsetz00_bglt) COBJECT(
										((BgL_regsetz00_bglt) BgL_arg2278z00_4949)))->
								BgL_lengthz00);
						}
						BgL_arg2174z00_4946 = BgL_res2864z00_4948;
					}
					{	/* SawMill/regalloc.scm 479 */
						int BgL_res2865z00_4950;

						{	/* SawMill/regalloc.scm 585 */
							obj_t BgL_arg2278z00_4951;

							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6471;

								{
									obj_t BgL_auxz00_6472;

									{	/* SawMill/regalloc.scm 585 */
										BgL_objectz00_bglt BgL_tmpz00_6473;

										BgL_tmpz00_6473 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_r2z00_4783));
										BgL_auxz00_6472 = BGL_OBJECT_WIDENING(BgL_tmpz00_6473);
									}
									BgL_auxz00_6471 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6472);
								}
								BgL_arg2278z00_4951 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6471))->
									BgL_interfere2z00);
							}
							BgL_res2865z00_4950 =
								(((BgL_regsetz00_bglt) COBJECT(
										((BgL_regsetz00_bglt) BgL_arg2278z00_4951)))->
								BgL_lengthz00);
						}
						BgL_arg2175z00_4947 = BgL_res2865z00_4950;
					}
					BgL_tmpz00_6460 =
						((long) (BgL_arg2174z00_4946) < (long) (BgL_arg2175z00_4947));
				}
				return BBOOL(BgL_tmpz00_6460);
			}
		}

	}



/* &<@anonymous:2187> */
	obj_t BGl_z62zc3z04anonymousza32187ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4784, obj_t BgL_rz00_4786)
	{
		{	/* SawMill/regalloc.scm 448 */
			{	/* SawMill/regalloc.scm 449 */
				obj_t BgL_colorsz00_4785;

				BgL_colorsz00_4785 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4784, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 450 */
					bool_t BgL_test3243z00_6488;

					{	/* SawMill/regalloc.scm 450 */
						obj_t BgL_arg2191z00_4952;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6489;

							{
								obj_t BgL_auxz00_6490;

								{	/* SawMill/regalloc.scm 450 */
									BgL_objectz00_bglt BgL_tmpz00_6491;

									BgL_tmpz00_6491 =
										((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_rz00_4786));
									BgL_auxz00_6490 = BGL_OBJECT_WIDENING(BgL_tmpz00_6491);
								}
								BgL_auxz00_6489 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6490);
							}
							BgL_arg2191z00_4952 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6489))->
								BgL_colorz00);
						}
						BgL_test3243z00_6488 = INTEGERP(BgL_arg2191z00_4952);
					}
					if (BgL_test3243z00_6488)
						{	/* SawMill/regalloc.scm 451 */
							obj_t BgL_arg2190z00_4953;

							{
								BgL_rtl_regzf2razf2_bglt BgL_auxz00_6498;

								{
									obj_t BgL_auxz00_6499;

									{	/* SawMill/regalloc.scm 451 */
										BgL_objectz00_bglt BgL_tmpz00_6500;

										BgL_tmpz00_6500 =
											((BgL_objectz00_bglt)
											((BgL_rtl_regz00_bglt) BgL_rz00_4786));
										BgL_auxz00_6499 = BGL_OBJECT_WIDENING(BgL_tmpz00_6500);
									}
									BgL_auxz00_6498 =
										((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6499);
								}
								BgL_arg2190z00_4953 =
									(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6498))->
									BgL_colorz00);
							}
							{	/* SawMill/regalloc.scm 451 */
								long BgL_kz00_4954;

								BgL_kz00_4954 = (long) CINT(BgL_arg2190z00_4953);
								return
									VECTOR_SET(
									((obj_t) BgL_colorsz00_4785), BgL_kz00_4954, BTRUE);
							}
						}
					else
						{	/* SawMill/regalloc.scm 450 */
							return BFALSE;
						}
				}
			}
		}

	}



/* register-hardware-coloring */
	obj_t
		BGl_registerzd2hardwarezd2coloringz00zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_94, obj_t BgL_hregsz00_95, obj_t BgL_cregsz00_96)
	{
		{	/* SawMill/regalloc.scm 496 */
			{
				obj_t BgL_stackz00_2832;
				obj_t BgL_rz00_2798;
				obj_t BgL_regsz00_2776;
				obj_t BgL_regsz00_2762;
				int BgL_kz00_2763;

				{	/* SawMill/regalloc.scm 536 */
					long BgL_kz00_2733;

					BgL_kz00_2733 = bgl_list_length(BgL_hregsz00_95);
					{
						obj_t BgL_regsz00_2736;
						obj_t BgL_stackz00_2737;
						long BgL_sz00_2738;
						long BgL_nz00_2739;

						BgL_regsz00_2736 = BgL_cregsz00_96;
						BgL_stackz00_2737 = BNIL;
						BgL_sz00_2738 = ((long) 0);
						BgL_nz00_2739 = ((long) 0);
					BgL_zc3z04anonymousza32222ze3z87_2740:
						if (NULLP(BgL_regsz00_2736))
							{	/* SawMill/regalloc.scm 559 */
								BgL_stackz00_2832 = BgL_stackz00_2737;
								{
									obj_t BgL_l1674z00_2835;

									BgL_l1674z00_2835 = BgL_stackz00_2832;
								BgL_zc3z04anonymousza32274ze3z87_2836:
									if (PAIRP(BgL_l1674z00_2835))
										{	/* SawMill/regalloc.scm 535 */
											BgL_rz00_2798 = CAR(BgL_l1674z00_2835);
											{	/* SawMill/regalloc.scm 520 */
												obj_t BgL_nrz00_2801;

												{
													obj_t BgL_l1671z00_2809;

													BgL_l1671z00_2809 = BgL_hregsz00_95;
												BgL_zc3z04anonymousza32262ze3z87_2810:
													if (NULLP(BgL_l1671z00_2809))
														{	/* SawMill/regalloc.scm 520 */
															BgL_nrz00_2801 = BFALSE;
														}
													else
														{	/* SawMill/regalloc.scm 521 */
															obj_t BgL__ortest_1673z00_2812;

															{	/* SawMill/regalloc.scm 521 */
																obj_t BgL_regz00_2814;

																BgL_regz00_2814 =
																	CAR(((obj_t) BgL_l1671z00_2809));
																{	/* SawMill/regalloc.scm 521 */
																	bool_t BgL_test3247z00_6518;

																	{	/* SawMill/regalloc.scm 521 */
																		obj_t BgL_arg2272z00_2830;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_6519;

																			{
																				obj_t BgL_auxz00_6520;

																				{	/* SawMill/regalloc.scm 521 */
																					BgL_objectz00_bglt BgL_tmpz00_6521;

																					BgL_tmpz00_6521 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_rz00_2798));
																					BgL_auxz00_6520 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_6521);
																				}
																				BgL_auxz00_6519 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_6520);
																			}
																			BgL_arg2272z00_2830 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6519))->
																				BgL_interferez00);
																		}
																		BgL_test3247z00_6518 =
																			BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
																			((BgL_rtl_regz00_bglt) BgL_regz00_2814),
																			((BgL_regsetz00_bglt)
																				BgL_arg2272z00_2830));
																	}
																	if (BgL_test3247z00_6518)
																		{	/* SawMill/regalloc.scm 521 */
																			BgL__ortest_1673z00_2812 = BFALSE;
																		}
																	else
																		{	/* SawMill/regalloc.scm 522 */
																			bool_t BgL_test3248z00_6530;

																			{	/* SawMill/regalloc.scm 522 */
																				obj_t BgL_g1669z00_2819;

																				{	/* SawMill/regalloc.scm 524 */
																					obj_t BgL_arg2270z00_2829;

																					{
																						BgL_rtl_regzf2razf2_bglt
																							BgL_auxz00_6531;
																						{
																							obj_t BgL_auxz00_6532;

																							{	/* SawMill/regalloc.scm 524 */
																								BgL_objectz00_bglt
																									BgL_tmpz00_6533;
																								BgL_tmpz00_6533 =
																									((BgL_objectz00_bglt) (
																										(BgL_rtl_regz00_bglt)
																										BgL_rz00_2798));
																								BgL_auxz00_6532 =
																									BGL_OBJECT_WIDENING
																									(BgL_tmpz00_6533);
																							}
																							BgL_auxz00_6531 =
																								((BgL_rtl_regzf2razf2_bglt)
																								BgL_auxz00_6532);
																						}
																						BgL_arg2270z00_2829 =
																							(((BgL_rtl_regzf2razf2_bglt)
																								COBJECT(BgL_auxz00_6531))->
																							BgL_interferez00);
																					}
																					BgL_g1669z00_2819 =
																						BGl_regsetzd2ze3listz31zzsaw_regsetz00
																						(((BgL_regsetz00_bglt)
																							BgL_arg2270z00_2829));
																				}
																				{
																					obj_t BgL_l1667z00_2821;

																					BgL_l1667z00_2821 = BgL_g1669z00_2819;
																				BgL_zc3z04anonymousza32266ze3z87_2822:
																					if (NULLP(BgL_l1667z00_2821))
																						{	/* SawMill/regalloc.scm 524 */
																							BgL_test3248z00_6530 =
																								((bool_t) 0);
																						}
																					else
																						{	/* SawMill/regalloc.scm 523 */
																							bool_t BgL__ortest_1670z00_2824;

																							{	/* SawMill/regalloc.scm 523 */
																								obj_t BgL_arg2269z00_2827;

																								{	/* SawMill/regalloc.scm 523 */
																									BgL_rtl_regz00_bglt
																										BgL_oz00_4277;
																									BgL_oz00_4277 =
																										((BgL_rtl_regz00_bglt)
																										CAR(((obj_t)
																												BgL_l1667z00_2821)));
																									{
																										BgL_rtl_regzf2razf2_bglt
																											BgL_auxz00_6546;
																										{
																											obj_t BgL_auxz00_6547;

																											{	/* SawMill/regalloc.scm 523 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_6548;
																												BgL_tmpz00_6548 =
																													((BgL_objectz00_bglt)
																													BgL_oz00_4277);
																												BgL_auxz00_6547 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_6548);
																											}
																											BgL_auxz00_6546 =
																												(
																												(BgL_rtl_regzf2razf2_bglt)
																												BgL_auxz00_6547);
																										}
																										BgL_arg2269z00_2827 =
																											(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6546))->BgL_colorz00);
																									}
																								}
																								BgL__ortest_1670z00_2824 =
																									(BgL_arg2269z00_2827 ==
																									BgL_regz00_2814);
																							}
																							if (BgL__ortest_1670z00_2824)
																								{	/* SawMill/regalloc.scm 524 */
																									BgL_test3248z00_6530 =
																										BgL__ortest_1670z00_2824;
																								}
																							else
																								{	/* SawMill/regalloc.scm 524 */
																									obj_t BgL_arg2268z00_2825;

																									BgL_arg2268z00_2825 =
																										CDR(
																										((obj_t)
																											BgL_l1667z00_2821));
																									{
																										obj_t BgL_l1667z00_6557;

																										BgL_l1667z00_6557 =
																											BgL_arg2268z00_2825;
																										BgL_l1667z00_2821 =
																											BgL_l1667z00_6557;
																										goto
																											BgL_zc3z04anonymousza32266ze3z87_2822;
																									}
																								}
																						}
																				}
																			}
																			if (BgL_test3248z00_6530)
																				{	/* SawMill/regalloc.scm 522 */
																					BgL__ortest_1673z00_2812 = BFALSE;
																				}
																			else
																				{	/* SawMill/regalloc.scm 525 */
																					bool_t BgL_test3251z00_6558;

																					{	/* SawMill/regalloc.scm 527 */
																						obj_t BgL_arg2265z00_2818;

																						{
																							BgL_rtl_regzf2razf2_bglt
																								BgL_auxz00_6559;
																							{
																								obj_t BgL_auxz00_6560;

																								{	/* SawMill/regalloc.scm 527 */
																									BgL_objectz00_bglt
																										BgL_tmpz00_6561;
																									BgL_tmpz00_6561 =
																										((BgL_objectz00_bglt) (
																											(BgL_rtl_regz00_bglt)
																											BgL_regz00_2814));
																									BgL_auxz00_6560 =
																										BGL_OBJECT_WIDENING
																										(BgL_tmpz00_6561);
																								}
																								BgL_auxz00_6559 =
																									((BgL_rtl_regzf2razf2_bglt)
																									BgL_auxz00_6560);
																							}
																							BgL_arg2265z00_2818 =
																								(((BgL_rtl_regzf2razf2_bglt)
																									COBJECT(BgL_auxz00_6559))->
																								BgL_interfere2z00);
																						}
																						BgL_test3251z00_6558 =
																							BGl_regsetzd2memberzf3z21zzsaw_regsetz00
																							(((BgL_rtl_regz00_bglt)
																								BgL_rz00_2798),
																							((BgL_regsetz00_bglt)
																								BgL_arg2265z00_2818));
																					}
																					if (BgL_test3251z00_6558)
																						{	/* SawMill/regalloc.scm 525 */
																							BgL__ortest_1673z00_2812 = BFALSE;
																						}
																					else
																						{	/* SawMill/regalloc.scm 525 */
																							BgL__ortest_1673z00_2812 =
																								BgL_regz00_2814;
																						}
																				}
																		}
																}
															}
															if (CBOOL(BgL__ortest_1673z00_2812))
																{	/* SawMill/regalloc.scm 520 */
																	BgL_nrz00_2801 = BgL__ortest_1673z00_2812;
																}
															else
																{	/* SawMill/regalloc.scm 520 */
																	obj_t BgL_arg2264z00_2813;

																	BgL_arg2264z00_2813 =
																		CDR(((obj_t) BgL_l1671z00_2809));
																	{
																		obj_t BgL_l1671z00_6574;

																		BgL_l1671z00_6574 = BgL_arg2264z00_2813;
																		BgL_l1671z00_2809 = BgL_l1671z00_6574;
																		goto BgL_zc3z04anonymousza32262ze3z87_2810;
																	}
																}
														}
												}
												{	/* SawMill/regalloc.scm 530 */
													obj_t BgL_arg2259z00_2803;

													{
														BgL_rtl_regzf2razf2_bglt BgL_auxz00_6575;

														{
															obj_t BgL_auxz00_6576;

															{	/* SawMill/regalloc.scm 532 */
																BgL_objectz00_bglt BgL_tmpz00_6577;

																BgL_tmpz00_6577 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_rz00_2798));
																BgL_auxz00_6576 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_6577);
															}
															BgL_auxz00_6575 =
																((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6576);
														}
														BgL_arg2259z00_2803 =
															(((BgL_rtl_regzf2razf2_bglt)
																COBJECT(BgL_auxz00_6575))->BgL_interferez00);
													}
													{	/* SawMill/regalloc.scm 531 */
														obj_t BgL_zc3z04anonymousza32260ze3z87_4787;

														BgL_zc3z04anonymousza32260ze3z87_4787 =
															MAKE_FX_PROCEDURE
															(BGl_z62zc3z04anonymousza32260ze3ze5zzsaw_registerzd2allocationzd2,
															(int) (((long) 1)), (int) (((long) 1)));
														PROCEDURE_SET(BgL_zc3z04anonymousza32260ze3z87_4787,
															(int) (((long) 0)), BgL_nrz00_2801);
														BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
															(BgL_zc3z04anonymousza32260ze3z87_4787,
															((BgL_regsetz00_bglt) BgL_arg2259z00_2803));
												}}
												{
													BgL_rtl_regzf2razf2_bglt BgL_auxz00_6590;

													{
														obj_t BgL_auxz00_6591;

														{	/* SawMill/regalloc.scm 533 */
															BgL_objectz00_bglt BgL_tmpz00_6592;

															BgL_tmpz00_6592 =
																((BgL_objectz00_bglt)
																((BgL_rtl_regz00_bglt) BgL_rz00_2798));
															BgL_auxz00_6591 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_6592);
														}
														BgL_auxz00_6590 =
															((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6591);
													}
													((((BgL_rtl_regzf2razf2_bglt)
																COBJECT(BgL_auxz00_6590))->BgL_colorz00) =
														((obj_t) BgL_nrz00_2801), BUNSPEC);
											}}
											{
												obj_t BgL_l1674z00_6599;

												BgL_l1674z00_6599 = CDR(BgL_l1674z00_2835);
												BgL_l1674z00_2835 = BgL_l1674z00_6599;
												goto BgL_zc3z04anonymousza32274ze3z87_2836;
											}
										}
									else
										{	/* SawMill/regalloc.scm 535 */
											((bool_t) 1);
										}
								}
								{	/* SawMill/regalloc.scm 564 */
									long BgL_arg2224z00_2742;

									BgL_arg2224z00_2742 = bgl_list_length(BgL_cregsz00_96);
									{	/* SawMill/regalloc.scm 562 */
										obj_t BgL_list2225z00_2743;

										{	/* SawMill/regalloc.scm 562 */
											obj_t BgL_arg2226z00_2744;

											{	/* SawMill/regalloc.scm 562 */
												obj_t BgL_arg2227z00_2745;

												{	/* SawMill/regalloc.scm 562 */
													obj_t BgL_arg2228z00_2746;

													{	/* SawMill/regalloc.scm 562 */
														obj_t BgL_arg2229z00_2747;

														{	/* SawMill/regalloc.scm 562 */
															obj_t BgL_arg2230z00_2748;

															{	/* SawMill/regalloc.scm 562 */
																obj_t BgL_arg2231z00_2749;

																{	/* SawMill/regalloc.scm 562 */
																	obj_t BgL_arg2232z00_2750;

																	{	/* SawMill/regalloc.scm 562 */
																		obj_t BgL_arg2233z00_2751;

																		{	/* SawMill/regalloc.scm 562 */
																			obj_t BgL_arg2234z00_2752;

																			BgL_arg2234z00_2752 =
																				MAKE_YOUNG_PAIR
																				(BGl_string3021z00zzsaw_registerzd2allocationzd2,
																				BNIL);
																			BgL_arg2233z00_2751 =
																				MAKE_YOUNG_PAIR
																				(BGl_string3036z00zzsaw_registerzd2allocationzd2,
																				BgL_arg2234z00_2752);
																		}
																		BgL_arg2232z00_2750 =
																			MAKE_YOUNG_PAIR(BINT(BgL_sz00_2738),
																			BgL_arg2233z00_2751);
																	}
																	BgL_arg2231z00_2749 =
																		MAKE_YOUNG_PAIR
																		(BGl_string3037z00zzsaw_registerzd2allocationzd2,
																		BgL_arg2232z00_2750);
																}
																BgL_arg2230z00_2748 =
																	MAKE_YOUNG_PAIR(BINT(BgL_nz00_2739),
																	BgL_arg2231z00_2749);
															}
															BgL_arg2229z00_2747 =
																MAKE_YOUNG_PAIR
																(BGl_string3038z00zzsaw_registerzd2allocationzd2,
																BgL_arg2230z00_2748);
														}
														BgL_arg2228z00_2746 =
															MAKE_YOUNG_PAIR(BINT(BgL_arg2224z00_2742),
															BgL_arg2229z00_2747);
													}
													BgL_arg2227z00_2745 =
														MAKE_YOUNG_PAIR
														(BGl_string3039z00zzsaw_registerzd2allocationzd2,
														BgL_arg2228z00_2746);
												}
												BgL_arg2226z00_2744 =
													MAKE_YOUNG_PAIR(BINT(BgL_kz00_2733),
													BgL_arg2227z00_2745);
											}
											BgL_list2225z00_2743 =
												MAKE_YOUNG_PAIR
												(BGl_string3040z00zzsaw_registerzd2allocationzd2,
												BgL_arg2226z00_2744);
										}
										return
											BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
											BgL_list2225z00_2743);
							}}}
						else
							{	/* SawMill/regalloc.scm 567 */
								obj_t BgL_srz00_2753;

								BgL_regsz00_2762 = BgL_regsz00_2736;
								BgL_kz00_2763 = (int) (BgL_kz00_2733);
								{
									obj_t BgL_l1664z00_2766;

									BgL_l1664z00_2766 = BgL_regsz00_2762;
								BgL_zc3z04anonymousza32241ze3z87_2767:
									if (NULLP(BgL_l1664z00_2766))
										{	/* SawMill/regalloc.scm 498 */
											BgL_srz00_2753 = BFALSE;
										}
									else
										{	/* SawMill/regalloc.scm 499 */
											obj_t BgL__ortest_1666z00_2769;

											{	/* SawMill/regalloc.scm 499 */
												obj_t BgL_rz00_2771;

												BgL_rz00_2771 = CAR(((obj_t) BgL_l1664z00_2766));
												{	/* SawMill/regalloc.scm 499 */
													obj_t BgL__andtest_1225z00_2772;

													BgL__andtest_1225z00_2772 =
														(((BgL_rtl_regz00_bglt) COBJECT(
																((BgL_rtl_regz00_bglt) BgL_rz00_2771)))->
														BgL_hardwarez00);
													if (CBOOL(BgL__andtest_1225z00_2772))
														{	/* SawMill/regalloc.scm 499 */
															BgL__ortest_1666z00_2769 = BFALSE;
														}
													else
														{	/* SawMill/regalloc.scm 500 */
															bool_t BgL_test3255z00_6626;

															{	/* SawMill/regalloc.scm 500 */
																int BgL_arg2244z00_2774;

																{	/* SawMill/regalloc.scm 500 */
																	int BgL_res2869z00_4244;

																	{	/* SawMill/regalloc.scm 585 */
																		obj_t BgL_arg2278z00_4240;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_6627;

																			{
																				obj_t BgL_auxz00_6628;

																				{	/* SawMill/regalloc.scm 585 */
																					BgL_objectz00_bglt BgL_tmpz00_6629;

																					BgL_tmpz00_6629 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_rz00_2771));
																					BgL_auxz00_6628 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_6629);
																				}
																				BgL_auxz00_6627 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_6628);
																			}
																			BgL_arg2278z00_4240 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6627))->
																				BgL_interfere2z00);
																		}
																		BgL_res2869z00_4244 =
																			(((BgL_regsetz00_bglt) COBJECT(
																					((BgL_regsetz00_bglt)
																						BgL_arg2278z00_4240)))->
																			BgL_lengthz00);
																	}
																	BgL_arg2244z00_2774 = BgL_res2869z00_4244;
																}
																BgL_test3255z00_6626 =
																	(
																	(long) (BgL_arg2244z00_2774) <
																	(long) (BgL_kz00_2763));
															}
															if (BgL_test3255z00_6626)
																{	/* SawMill/regalloc.scm 500 */
																	BgL__ortest_1666z00_2769 = BgL_rz00_2771;
																}
															else
																{	/* SawMill/regalloc.scm 500 */
																	BgL__ortest_1666z00_2769 = BFALSE;
																}
														}
												}
											}
											if (CBOOL(BgL__ortest_1666z00_2769))
												{	/* SawMill/regalloc.scm 498 */
													BgL_srz00_2753 = BgL__ortest_1666z00_2769;
												}
											else
												{	/* SawMill/regalloc.scm 498 */
													obj_t BgL_arg2243z00_2770;

													BgL_arg2243z00_2770 =
														CDR(((obj_t) BgL_l1664z00_2766));
													{
														obj_t BgL_l1664z00_6644;

														BgL_l1664z00_6644 = BgL_arg2243z00_2770;
														BgL_l1664z00_2766 = BgL_l1664z00_6644;
														goto BgL_zc3z04anonymousza32241ze3z87_2767;
													}
												}
										}
								}
								if (CBOOL(BgL_srz00_2753))
									{	/* SawMill/regalloc.scm 568 */
										BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(
											((BgL_rtl_regz00_bglt) BgL_srz00_2753));
										{	/* SawMill/regalloc.scm 572 */
											obj_t BgL_arg2235z00_2754;
											obj_t BgL_arg2236z00_2755;
											long BgL_arg2237z00_2756;

											BgL_arg2235z00_2754 =
												bgl_remq(BgL_srz00_2753, BgL_regsz00_2736);
											BgL_arg2236z00_2755 =
												MAKE_YOUNG_PAIR(BgL_srz00_2753, BgL_stackz00_2737);
											BgL_arg2237z00_2756 = (((long) 1) + BgL_nz00_2739);
											{
												long BgL_nz00_6655;
												obj_t BgL_stackz00_6654;
												obj_t BgL_regsz00_6653;

												BgL_regsz00_6653 = BgL_arg2235z00_2754;
												BgL_stackz00_6654 = BgL_arg2236z00_2755;
												BgL_nz00_6655 = BgL_arg2237z00_2756;
												BgL_nz00_2739 = BgL_nz00_6655;
												BgL_stackz00_2737 = BgL_stackz00_6654;
												BgL_regsz00_2736 = BgL_regsz00_6653;
												goto BgL_zc3z04anonymousza32222ze3z87_2740;
											}
										}
									}
								else
									{	/* SawMill/regalloc.scm 574 */
										BgL_rtl_regz00_bglt BgL_rz00_2757;

										BgL_regsz00_2776 = BgL_regsz00_2736;
										{
											obj_t BgL_regz00_2791;

											{
												obj_t BgL_regsz00_2780;
												obj_t BgL_regz00_2781;
												double BgL_msz00_2782;

												{
													obj_t BgL_auxz00_6656;

													BgL_regsz00_2780 = BgL_regsz00_2776;
													BgL_regz00_2781 = BUNSPEC;
													BgL_msz00_2782 = ((double) 0.0);
												BgL_zc3z04anonymousza32246ze3z87_2783:
													if (NULLP(BgL_regsz00_2780))
														{	/* SawMill/regalloc.scm 511 */
															BgL_auxz00_6656 = BgL_regz00_2781;
														}
													else
														{	/* SawMill/regalloc.scm 513 */
															obj_t BgL_rz00_2785;

															BgL_rz00_2785 = CAR(((obj_t) BgL_regsz00_2780));
															{	/* SawMill/regalloc.scm 513 */
																double BgL_sz00_2786;

																BgL_regz00_2791 = BgL_rz00_2785;
																{	/* SawMill/regalloc.scm 506 */
																	double BgL_arg2252z00_2793;
																	double BgL_arg2253z00_2794;

																	{	/* SawMill/regalloc.scm 506 */
																		int BgL_arg2254z00_2795;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_6661;

																			{
																				obj_t BgL_auxz00_6662;

																				{	/* SawMill/regalloc.scm 506 */
																					BgL_objectz00_bglt BgL_tmpz00_6663;

																					BgL_tmpz00_6663 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_regz00_2791));
																					BgL_auxz00_6662 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_6663);
																				}
																				BgL_auxz00_6661 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_6662);
																			}
																			BgL_arg2254z00_2795 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6661))->
																				BgL_occurrencesz00);
																		}
																		BgL_arg2252z00_2793 =
																			(double) ((long) (BgL_arg2254z00_2795));
																	}
																	{	/* SawMill/regalloc.scm 507 */
																		int BgL_arg2256z00_2796;

																		{	/* SawMill/regalloc.scm 507 */
																			int BgL_res2872z00_4258;

																			{	/* SawMill/regalloc.scm 585 */
																				obj_t BgL_arg2278z00_4254;

																				{
																					BgL_rtl_regzf2razf2_bglt
																						BgL_auxz00_6671;
																					{
																						obj_t BgL_auxz00_6672;

																						{	/* SawMill/regalloc.scm 585 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_6673;
																							BgL_tmpz00_6673 =
																								((BgL_objectz00_bglt) (
																									(BgL_rtl_regz00_bglt)
																									BgL_regz00_2791));
																							BgL_auxz00_6672 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_6673);
																						}
																						BgL_auxz00_6671 =
																							((BgL_rtl_regzf2razf2_bglt)
																							BgL_auxz00_6672);
																					}
																					BgL_arg2278z00_4254 =
																						(((BgL_rtl_regzf2razf2_bglt)
																							COBJECT(BgL_auxz00_6671))->
																						BgL_interfere2z00);
																				}
																				BgL_res2872z00_4258 =
																					(((BgL_regsetz00_bglt) COBJECT(
																							((BgL_regsetz00_bglt)
																								BgL_arg2278z00_4254)))->
																					BgL_lengthz00);
																			}
																			BgL_arg2256z00_2796 = BgL_res2872z00_4258;
																		}
																		BgL_arg2253z00_2794 =
																			(double) ((long) (BgL_arg2256z00_2796));
																	}
																	BgL_sz00_2786 =
																		(BgL_arg2252z00_2793 / BgL_arg2253z00_2794);
																}
																{	/* SawMill/regalloc.scm 514 */

																	if ((BgL_sz00_2786 > BgL_msz00_2782))
																		{	/* SawMill/regalloc.scm 516 */
																			obj_t BgL_arg2249z00_2788;

																			BgL_arg2249z00_2788 =
																				CDR(((obj_t) BgL_regsz00_2780));
																			{
																				double BgL_msz00_6690;
																				obj_t BgL_regz00_6689;
																				obj_t BgL_regsz00_6688;

																				BgL_regsz00_6688 = BgL_arg2249z00_2788;
																				BgL_regz00_6689 = BgL_rz00_2785;
																				BgL_msz00_6690 = BgL_sz00_2786;
																				BgL_msz00_2782 = BgL_msz00_6690;
																				BgL_regz00_2781 = BgL_regz00_6689;
																				BgL_regsz00_2780 = BgL_regsz00_6688;
																				goto
																					BgL_zc3z04anonymousza32246ze3z87_2783;
																			}
																		}
																	else
																		{	/* SawMill/regalloc.scm 517 */
																			obj_t BgL_arg2250z00_2789;

																			BgL_arg2250z00_2789 =
																				CDR(((obj_t) BgL_regsz00_2780));
																			{
																				obj_t BgL_regsz00_6693;

																				BgL_regsz00_6693 = BgL_arg2250z00_2789;
																				BgL_regsz00_2780 = BgL_regsz00_6693;
																				goto
																					BgL_zc3z04anonymousza32246ze3z87_2783;
																			}
																		}
																}
															}
														}
													BgL_rz00_2757 =
														((BgL_rtl_regz00_bglt) BgL_auxz00_6656);
												}
											}
										}
										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_6695;

											{
												obj_t BgL_auxz00_6696;

												{	/* SawMill/regalloc.scm 576 */
													BgL_objectz00_bglt BgL_tmpz00_6697;

													BgL_tmpz00_6697 =
														((BgL_objectz00_bglt) BgL_rz00_2757);
													BgL_auxz00_6696 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6697);
												}
												BgL_auxz00_6695 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6696);
											}
											((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6695))->
													BgL_colorz00) = ((obj_t) BUNSPEC), BUNSPEC);
										}
										{	/* SawMill/regalloc.scm 577 */
											obj_t BgL_arg2238z00_2759;
											long BgL_arg2239z00_2760;

											BgL_arg2238z00_2759 =
												bgl_remq(((obj_t) BgL_rz00_2757), BgL_regsz00_2736);
											BgL_arg2239z00_2760 = (((long) 1) + BgL_sz00_2738);
											{
												long BgL_sz00_6706;
												obj_t BgL_regsz00_6705;

												BgL_regsz00_6705 = BgL_arg2238z00_2759;
												BgL_sz00_6706 = BgL_arg2239z00_2760;
												BgL_sz00_2738 = BgL_sz00_6706;
												BgL_regsz00_2736 = BgL_regsz00_6705;
												goto BgL_zc3z04anonymousza32222ze3z87_2740;
											}
										}
									}
							}
					}
				}
			}
		}

	}



/* &<@anonymous:2260> */
	obj_t BGl_z62zc3z04anonymousza32260ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4788, obj_t BgL_riz00_4790)
	{
		{	/* SawMill/regalloc.scm 530 */
			{	/* SawMill/regalloc.scm 531 */
				obj_t BgL_nrz00_4789;

				BgL_nrz00_4789 = PROCEDURE_REF(BgL_envz00_4788, (int) (((long) 0)));
				{	/* SawMill/regalloc.scm 531 */
					bool_t BgL_tmpz00_6709;

					{	/* SawMill/regalloc.scm 531 */
						obj_t BgL_arg2261z00_4955;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6710;

							{
								obj_t BgL_auxz00_6711;

								{	/* SawMill/regalloc.scm 531 */
									BgL_objectz00_bglt BgL_tmpz00_6712;

									BgL_tmpz00_6712 =
										((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_nrz00_4789));
									BgL_auxz00_6711 = BGL_OBJECT_WIDENING(BgL_tmpz00_6712);
								}
								BgL_auxz00_6710 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6711);
							}
							BgL_arg2261z00_4955 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6710))->
								BgL_interfere2z00);
						}
						BgL_tmpz00_6709 =
							BGl_regsetzd2addz12zc0zzsaw_regsetz00(
							((BgL_regsetz00_bglt) BgL_arg2261z00_4955),
							((BgL_rtl_regz00_bglt) BgL_riz00_4790));
					}
					return BBOOL(BgL_tmpz00_6709);
				}
			}
		}

	}



/* simplify-reg! */
	obj_t
		BGl_simplifyzd2regz12zc0zzsaw_registerzd2allocationzd2(BgL_rtl_regz00_bglt
		BgL_rz00_98)
	{
		{	/* SawMill/regalloc.scm 593 */
			{	/* SawMill/regalloc.scm 595 */
				obj_t BgL_arg2281z00_2848;

				{
					BgL_rtl_regzf2razf2_bglt BgL_auxz00_6722;

					{
						obj_t BgL_auxz00_6723;

						{	/* SawMill/regalloc.scm 595 */
							BgL_objectz00_bglt BgL_tmpz00_6724;

							BgL_tmpz00_6724 = ((BgL_objectz00_bglt) BgL_rz00_98);
							BgL_auxz00_6723 = BGL_OBJECT_WIDENING(BgL_tmpz00_6724);
						}
						BgL_auxz00_6722 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6723);
					}
					BgL_arg2281z00_2848 =
						(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6722))->
						BgL_interfere2z00);
				}
				{	/* SawMill/regalloc.scm 596 */
					obj_t BgL_zc3z04anonymousza32282ze3z87_4791;

					BgL_zc3z04anonymousza32282ze3z87_4791 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32282ze3ze5zzsaw_registerzd2allocationzd2,
						(int) (((long) 1)), (int) (((long) 2)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32282ze3z87_4791,
						(int) (((long) 0)), ((obj_t) BgL_rz00_98));
					PROCEDURE_SET(BgL_zc3z04anonymousza32282ze3z87_4791,
						(int) (((long) 1)), ((obj_t) BgL_rz00_98));
					return
						BGl_regsetzd2forzd2eachz00zzsaw_regsetz00
						(BgL_zc3z04anonymousza32282ze3z87_4791,
						((BgL_regsetz00_bglt) BgL_arg2281z00_2848));
				}
			}
		}

	}



/* &<@anonymous:2282> */
	obj_t BGl_z62zc3z04anonymousza32282ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4792, obj_t BgL_r2z00_4795)
	{
		{	/* SawMill/regalloc.scm 595 */
			{	/* SawMill/regalloc.scm 596 */
				BgL_rtl_regz00_bglt BgL_rz00_4793;
				BgL_rtl_regz00_bglt BgL_i1233z00_4794;

				BgL_rz00_4793 =
					((BgL_rtl_regz00_bglt)
					PROCEDURE_REF(BgL_envz00_4792, (int) (((long) 0))));
				BgL_i1233z00_4794 =
					((BgL_rtl_regz00_bglt)
					PROCEDURE_REF(BgL_envz00_4792, (int) (((long) 1))));
				{	/* SawMill/regalloc.scm 596 */
					bool_t BgL_tmpz00_6746;

					{	/* SawMill/regalloc.scm 596 */
						obj_t BgL_arg2283z00_4956;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6747;

							{
								obj_t BgL_auxz00_6748;

								{	/* SawMill/regalloc.scm 596 */
									BgL_objectz00_bglt BgL_tmpz00_6749;

									BgL_tmpz00_6749 =
										((BgL_objectz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_r2z00_4795));
									BgL_auxz00_6748 = BGL_OBJECT_WIDENING(BgL_tmpz00_6749);
								}
								BgL_auxz00_6747 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6748);
							}
							BgL_arg2283z00_4956 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6747))->
								BgL_interfere2z00);
						}
						BGl_regsetzd2removez12zc0zzsaw_regsetz00(
							((BgL_regsetz00_bglt) BgL_arg2283z00_4956), BgL_rz00_4793);
					}
					{	/* SawMill/regalloc.scm 597 */
						obj_t BgL_arg2284z00_4957;

						{
							BgL_rtl_regzf2razf2_bglt BgL_auxz00_6757;

							{
								obj_t BgL_auxz00_6758;

								{	/* SawMill/regalloc.scm 597 */
									BgL_objectz00_bglt BgL_tmpz00_6759;

									BgL_tmpz00_6759 = ((BgL_objectz00_bglt) BgL_i1233z00_4794);
									BgL_auxz00_6758 = BGL_OBJECT_WIDENING(BgL_tmpz00_6759);
								}
								BgL_auxz00_6757 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6758);
							}
							BgL_arg2284z00_4957 =
								(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6757))->
								BgL_interfere2z00);
						}
						BgL_tmpz00_6746 =
							BGl_regsetzd2removez12zc0zzsaw_regsetz00(
							((BgL_regsetz00_bglt) BgL_arg2284z00_4957),
							((BgL_rtl_regz00_bglt) BgL_r2z00_4795));
					}
					return BBOOL(BgL_tmpz00_6746);
				}
			}
		}

	}



/* rtl-map-registers! */
	obj_t BGl_rtlzd2mapzd2registersz12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_pregsz00_99, obj_t BgL_cregsz00_100, obj_t BgL_blocksz00_101)
	{
		{	/* SawMill/regalloc.scm 608 */
			{	/* SawMill/regalloc.scm 609 */
				obj_t BgL_colorsz00_2854;

				BgL_colorsz00_2854 =
					make_vector(
					(bgl_list_length(BgL_pregsz00_99) +
						bgl_list_length(BgL_cregsz00_100)), BUNSPEC);
				{	/* SawMill/regalloc.scm 615 */
					struct bgl_cell BgL_box3260_4916z00;
					obj_t BgL_mappingz00_4916;

					BgL_mappingz00_4916 = MAKE_CELL_STACK(BNIL, BgL_box3260_4916z00);
					{	/* SawMill/regalloc.scm 610 */
						obj_t BgL_g1690z00_2858;

						BgL_g1690z00_2858 =
							BGl_appendzd221011zd2zzsaw_registerzd2allocationzd2
							(BgL_cregsz00_100, BgL_pregsz00_99);
						{
							obj_t BgL_l1688z00_2860;

							BgL_l1688z00_2860 = BgL_g1690z00_2858;
						BgL_zc3z04anonymousza32285ze3z87_2861:
							if (PAIRP(BgL_l1688z00_2860))
								{	/* SawMill/regalloc.scm 614 */
									{	/* SawMill/regalloc.scm 611 */
										obj_t BgL_rz00_2863;

										BgL_rz00_2863 = CAR(BgL_l1688z00_2860);
										{	/* SawMill/regalloc.scm 612 */
											bool_t BgL_test3262z00_6776;

											{	/* SawMill/regalloc.scm 612 */
												obj_t BgL_arg2290z00_2868;

												{
													BgL_rtl_regzf2razf2_bglt BgL_auxz00_6777;

													{
														obj_t BgL_auxz00_6778;

														{	/* SawMill/regalloc.scm 612 */
															BgL_objectz00_bglt BgL_tmpz00_6779;

															BgL_tmpz00_6779 =
																((BgL_objectz00_bglt)
																((BgL_rtl_regz00_bglt) BgL_rz00_2863));
															BgL_auxz00_6778 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_6779);
														}
														BgL_auxz00_6777 =
															((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6778);
													}
													BgL_arg2290z00_2868 =
														(((BgL_rtl_regzf2razf2_bglt)
															COBJECT(BgL_auxz00_6777))->BgL_colorz00);
												}
												BgL_test3262z00_6776 = INTEGERP(BgL_arg2290z00_2868);
											}
											if (BgL_test3262z00_6776)
												{	/* SawMill/regalloc.scm 613 */
													obj_t BgL_arg2289z00_2867;

													{
														BgL_rtl_regzf2razf2_bglt BgL_auxz00_6786;

														{
															obj_t BgL_auxz00_6787;

															{	/* SawMill/regalloc.scm 613 */
																BgL_objectz00_bglt BgL_tmpz00_6788;

																BgL_tmpz00_6788 =
																	((BgL_objectz00_bglt)
																	((BgL_rtl_regz00_bglt) BgL_rz00_2863));
																BgL_auxz00_6787 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_6788);
															}
															BgL_auxz00_6786 =
																((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6787);
														}
														BgL_arg2289z00_2867 =
															(((BgL_rtl_regzf2razf2_bglt)
																COBJECT(BgL_auxz00_6786))->BgL_colorz00);
													}
													VECTOR_SET(BgL_colorsz00_2854,
														(long) CINT(BgL_arg2289z00_2867), BgL_rz00_2863);
												}
											else
												{	/* SawMill/regalloc.scm 612 */
													BFALSE;
												}
										}
									}
									{
										obj_t BgL_l1688z00_6796;

										BgL_l1688z00_6796 = CDR(BgL_l1688z00_2860);
										BgL_l1688z00_2860 = BgL_l1688z00_6796;
										goto BgL_zc3z04anonymousza32285ze3z87_2861;
									}
								}
							else
								{	/* SawMill/regalloc.scm 614 */
									((bool_t) 1);
								}
						}
					}
					{
						obj_t BgL_l1706z00_2872;

						BgL_l1706z00_2872 = BgL_blocksz00_101;
					BgL_zc3z04anonymousza32292ze3z87_2873:
						if (PAIRP(BgL_l1706z00_2872))
							{	/* SawMill/regalloc.scm 654 */
								{	/* SawMill/regalloc.scm 655 */
									obj_t BgL_bz00_2875;

									BgL_bz00_2875 = CAR(BgL_l1706z00_2872);
									{	/* SawMill/regalloc.scm 655 */
										obj_t BgL_g1705z00_2876;

										BgL_g1705z00_2876 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_2875)))->BgL_firstz00);
										{
											obj_t BgL_l1703z00_2878;

											BgL_l1703z00_2878 = BgL_g1705z00_2876;
										BgL_zc3z04anonymousza32294ze3z87_2879:
											if (PAIRP(BgL_l1703z00_2878))
												{	/* SawMill/regalloc.scm 661 */
													{	/* SawMill/regalloc.scm 656 */
														obj_t BgL_iz00_2881;

														BgL_iz00_2881 = CAR(BgL_l1703z00_2878);
														{	/* SawMill/regalloc.scm 657 */
															bool_t BgL_test3265z00_6806;

															{	/* SawMill/regalloc.scm 657 */
																obj_t BgL_arg2299z00_2886;

																BgL_arg2299z00_2886 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_2881))))->BgL_destz00);
																BgL_test3265z00_6806 =
																	BGl_isazf3zf3zz__objectz00
																	(BgL_arg2299z00_2886,
																	BGl_rtl_regzf2razf2zzsaw_regsetz00);
															}
															if (BgL_test3265z00_6806)
																{
																	obj_t BgL_auxz00_6811;

																	{	/* SawMill/regalloc.scm 658 */
																		obj_t BgL_arg2298z00_2885;

																		BgL_arg2298z00_2885 =
																			(((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2881))))->BgL_destz00);
																		BgL_auxz00_6811 =
																			BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_2854, BgL_mappingz00_4916,
																			BgL_arg2298z00_2885);
																	}
																	((((BgL_rtl_insz00_bglt) COBJECT(
																					((BgL_rtl_insz00_bglt)
																						((BgL_rtl_insz00_bglt)
																							BgL_iz00_2881))))->BgL_destz00) =
																		((obj_t) BgL_auxz00_6811), BUNSPEC);
																}
															else
																{	/* SawMill/regalloc.scm 657 */
																	BFALSE;
																}
														}
														{
															obj_t BgL_auxz00_6819;

															{	/* SawMill/regalloc.scm 659 */
																obj_t BgL_l1691z00_2887;

																BgL_l1691z00_2887 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_2881))))->BgL_z52spillz52);
																if (NULLP(BgL_l1691z00_2887))
																	{	/* SawMill/regalloc.scm 659 */
																		BgL_auxz00_6819 = BNIL;
																	}
																else
																	{	/* SawMill/regalloc.scm 659 */
																		obj_t BgL_head1693z00_2889;

																		{	/* SawMill/regalloc.scm 659 */
																			obj_t BgL_arg2307z00_2901;

																			{	/* SawMill/regalloc.scm 659 */
																				obj_t BgL_arg2308z00_2902;

																				BgL_arg2308z00_2902 =
																					CAR(BgL_l1691z00_2887);
																				BgL_arg2307z00_2901 =
																					BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																					(BgL_colorsz00_2854,
																					BgL_mappingz00_4916,
																					BgL_arg2308z00_2902);
																			}
																			{	/* SawMill/regalloc.scm 659 */
																				obj_t BgL_res2907z00_4382;

																				BgL_res2907z00_4382 =
																					MAKE_YOUNG_PAIR(BgL_arg2307z00_2901,
																					BNIL);
																				BgL_head1693z00_2889 =
																					BgL_res2907z00_4382;
																			}
																		}
																		{	/* SawMill/regalloc.scm 659 */
																			obj_t BgL_g1696z00_2890;

																			BgL_g1696z00_2890 =
																				CDR(BgL_l1691z00_2887);
																			{
																				obj_t BgL_l1691z00_2892;
																				obj_t BgL_tail1694z00_2893;

																				BgL_l1691z00_2892 = BgL_g1696z00_2890;
																				BgL_tail1694z00_2893 =
																					BgL_head1693z00_2889;
																			BgL_zc3z04anonymousza32301ze3z87_2894:
																				if (NULLP(BgL_l1691z00_2892))
																					{	/* SawMill/regalloc.scm 659 */
																						BgL_auxz00_6819 =
																							BgL_head1693z00_2889;
																					}
																				else
																					{	/* SawMill/regalloc.scm 659 */
																						obj_t BgL_newtail1695z00_2896;

																						{	/* SawMill/regalloc.scm 659 */
																							obj_t BgL_arg2305z00_2898;

																							{	/* SawMill/regalloc.scm 659 */
																								obj_t BgL_arg2306z00_2899;

																								BgL_arg2306z00_2899 =
																									CAR(
																									((obj_t) BgL_l1691z00_2892));
																								BgL_arg2305z00_2898 =
																									BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																									(BgL_colorsz00_2854,
																									BgL_mappingz00_4916,
																									BgL_arg2306z00_2899);
																							}
																							{	/* SawMill/regalloc.scm 659 */
																								obj_t BgL_res2909z00_4386;

																								BgL_res2909z00_4386 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2305z00_2898, BNIL);
																								BgL_newtail1695z00_2896 =
																									BgL_res2909z00_4386;
																							}
																						}
																						SET_CDR(BgL_tail1694z00_2893,
																							BgL_newtail1695z00_2896);
																						{	/* SawMill/regalloc.scm 659 */
																							obj_t BgL_arg2303z00_2897;

																							BgL_arg2303z00_2897 =
																								CDR(
																								((obj_t) BgL_l1691z00_2892));
																							{
																								obj_t BgL_tail1694z00_6841;
																								obj_t BgL_l1691z00_6840;

																								BgL_l1691z00_6840 =
																									BgL_arg2303z00_2897;
																								BgL_tail1694z00_6841 =
																									BgL_newtail1695z00_2896;
																								BgL_tail1694z00_2893 =
																									BgL_tail1694z00_6841;
																								BgL_l1691z00_2892 =
																									BgL_l1691z00_6840;
																								goto
																									BgL_zc3z04anonymousza32301ze3z87_2894;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_2881))))->BgL_z52spillz52) =
																((obj_t) BgL_auxz00_6819), BUNSPEC);
														}
														{
															obj_t BgL_auxz00_6843;

															{	/* SawMill/regalloc.scm 660 */
																obj_t BgL_l1697z00_2903;

																BgL_l1697z00_2903 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_2881))))->BgL_argsz00);
																if (NULLP(BgL_l1697z00_2903))
																	{	/* SawMill/regalloc.scm 660 */
																		BgL_auxz00_6843 = BNIL;
																	}
																else
																	{	/* SawMill/regalloc.scm 660 */
																		obj_t BgL_head1699z00_2905;

																		{	/* SawMill/regalloc.scm 660 */
																			obj_t BgL_arg2316z00_2917;

																			{	/* SawMill/regalloc.scm 660 */
																				obj_t BgL_arg2318z00_2918;

																				BgL_arg2318z00_2918 =
																					CAR(BgL_l1697z00_2903);
																				BgL_arg2316z00_2917 =
																					BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																					(BgL_colorsz00_2854,
																					BgL_mappingz00_4916,
																					BgL_arg2318z00_2918);
																			}
																			{	/* SawMill/regalloc.scm 660 */
																				obj_t BgL_res2911z00_4391;

																				BgL_res2911z00_4391 =
																					MAKE_YOUNG_PAIR(BgL_arg2316z00_2917,
																					BNIL);
																				BgL_head1699z00_2905 =
																					BgL_res2911z00_4391;
																			}
																		}
																		{	/* SawMill/regalloc.scm 660 */
																			obj_t BgL_g1702z00_2906;

																			BgL_g1702z00_2906 =
																				CDR(BgL_l1697z00_2903);
																			{
																				obj_t BgL_l1697z00_2908;
																				obj_t BgL_tail1700z00_2909;

																				BgL_l1697z00_2908 = BgL_g1702z00_2906;
																				BgL_tail1700z00_2909 =
																					BgL_head1699z00_2905;
																			BgL_zc3z04anonymousza32310ze3z87_2910:
																				if (NULLP(BgL_l1697z00_2908))
																					{	/* SawMill/regalloc.scm 660 */
																						BgL_auxz00_6843 =
																							BgL_head1699z00_2905;
																					}
																				else
																					{	/* SawMill/regalloc.scm 660 */
																						obj_t BgL_newtail1701z00_2912;

																						{	/* SawMill/regalloc.scm 660 */
																							obj_t BgL_arg2313z00_2914;

																							{	/* SawMill/regalloc.scm 660 */
																								obj_t BgL_arg2314z00_2915;

																								BgL_arg2314z00_2915 =
																									CAR(
																									((obj_t) BgL_l1697z00_2908));
																								BgL_arg2313z00_2914 =
																									BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																									(BgL_colorsz00_2854,
																									BgL_mappingz00_4916,
																									BgL_arg2314z00_2915);
																							}
																							{	/* SawMill/regalloc.scm 660 */
																								obj_t BgL_res2913z00_4395;

																								BgL_res2913z00_4395 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2313z00_2914, BNIL);
																								BgL_newtail1701z00_2912 =
																									BgL_res2913z00_4395;
																							}
																						}
																						SET_CDR(BgL_tail1700z00_2909,
																							BgL_newtail1701z00_2912);
																						{	/* SawMill/regalloc.scm 660 */
																							obj_t BgL_arg2312z00_2913;

																							BgL_arg2312z00_2913 =
																								CDR(
																								((obj_t) BgL_l1697z00_2908));
																							{
																								obj_t BgL_tail1700z00_6865;
																								obj_t BgL_l1697z00_6864;

																								BgL_l1697z00_6864 =
																									BgL_arg2312z00_2913;
																								BgL_tail1700z00_6865 =
																									BgL_newtail1701z00_2912;
																								BgL_tail1700z00_2909 =
																									BgL_tail1700z00_6865;
																								BgL_l1697z00_2908 =
																									BgL_l1697z00_6864;
																								goto
																									BgL_zc3z04anonymousza32310ze3z87_2910;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_2881))))->BgL_argsz00) =
																((obj_t) BgL_auxz00_6843), BUNSPEC);
														}
													}
													{
														obj_t BgL_l1703z00_6867;

														BgL_l1703z00_6867 = CDR(BgL_l1703z00_2878);
														BgL_l1703z00_2878 = BgL_l1703z00_6867;
														goto BgL_zc3z04anonymousza32294ze3z87_2879;
													}
												}
											else
												{	/* SawMill/regalloc.scm 661 */
													((bool_t) 1);
												}
										}
									}
								}
								{
									obj_t BgL_l1706z00_6869;

									BgL_l1706z00_6869 = CDR(BgL_l1706z00_2872);
									BgL_l1706z00_2872 = BgL_l1706z00_6869;
									goto BgL_zc3z04anonymousza32292ze3z87_2873;
								}
							}
						else
							{	/* SawMill/regalloc.scm 654 */
								((bool_t) 1);
							}
					}
					return BgL_blocksz00_101;
				}
			}
		}

	}



/* map-register~0 */
	obj_t BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2(obj_t
		BgL_colorsz00_4914, obj_t BgL_mappingz00_4913, obj_t BgL_oz00_2948)
	{
		{	/* SawMill/regalloc.scm 653 */
			{
				BgL_typez00_bglt BgL_tyz00_2923;
				BgL_rtl_regz00_bglt BgL_rz00_2924;

				if (BGl_isazf3zf3zz__objectz00(BgL_oz00_2948,
						BGl_rtl_regzf2razf2zzsaw_regsetz00))
					{	/* SawMill/regalloc.scm 638 */
						BgL_typez00_bglt BgL_arg2331z00_2951;
						obj_t BgL_arg2332z00_2952;

						BgL_arg2331z00_2951 =
							(((BgL_rtl_regz00_bglt) COBJECT(
									((BgL_rtl_regz00_bglt)
										((BgL_rtl_regz00_bglt) BgL_oz00_2948))))->BgL_typez00);
						{	/* SawMill/regalloc.scm 641 */
							bool_t BgL_test3271z00_6876;

							{	/* SawMill/regalloc.scm 641 */
								obj_t BgL_arg2340z00_2960;

								{
									BgL_rtl_regzf2razf2_bglt BgL_auxz00_6877;

									{
										obj_t BgL_auxz00_6878;

										{	/* SawMill/regalloc.scm 641 */
											BgL_objectz00_bglt BgL_tmpz00_6879;

											BgL_tmpz00_6879 =
												((BgL_objectz00_bglt)
												((BgL_rtl_regz00_bglt) BgL_oz00_2948));
											BgL_auxz00_6878 = BGL_OBJECT_WIDENING(BgL_tmpz00_6879);
										}
										BgL_auxz00_6877 =
											((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6878);
									}
									BgL_arg2340z00_2960 =
										(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6877))->
										BgL_colorz00);
								}
								BgL_test3271z00_6876 = INTEGERP(BgL_arg2340z00_2960);
							}
							if (BgL_test3271z00_6876)
								{	/* SawMill/regalloc.scm 642 */
									obj_t BgL_arg2336z00_2956;

									{
										BgL_rtl_regzf2razf2_bglt BgL_auxz00_6886;

										{
											obj_t BgL_auxz00_6887;

											{	/* SawMill/regalloc.scm 642 */
												BgL_objectz00_bglt BgL_tmpz00_6888;

												BgL_tmpz00_6888 =
													((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_oz00_2948));
												BgL_auxz00_6887 = BGL_OBJECT_WIDENING(BgL_tmpz00_6888);
											}
											BgL_auxz00_6886 =
												((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6887);
										}
										BgL_arg2336z00_2956 =
											(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6886))->
											BgL_colorz00);
									}
									BgL_arg2332z00_2952 =
										VECTOR_REF(BgL_colorsz00_4914,
										(long) CINT(BgL_arg2336z00_2956));
								}
							else
								{	/* SawMill/regalloc.scm 643 */
									bool_t BgL_test3272z00_6896;

									{	/* SawMill/regalloc.scm 643 */
										obj_t BgL_arg2339z00_2959;

										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_6897;

											{
												obj_t BgL_auxz00_6898;

												{	/* SawMill/regalloc.scm 643 */
													BgL_objectz00_bglt BgL_tmpz00_6899;

													BgL_tmpz00_6899 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_oz00_2948));
													BgL_auxz00_6898 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6899);
												}
												BgL_auxz00_6897 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6898);
											}
											BgL_arg2339z00_2959 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6897))->
												BgL_colorz00);
										}
										BgL_test3272z00_6896 =
											BGl_isazf3zf3zz__objectz00(BgL_arg2339z00_2959,
											BGl_rtl_regz00zzsaw_defsz00);
									}
									if (BgL_test3272z00_6896)
										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_6906;

											{
												obj_t BgL_auxz00_6907;

												{	/* SawMill/regalloc.scm 644 */
													BgL_objectz00_bglt BgL_tmpz00_6908;

													BgL_tmpz00_6908 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_oz00_2948));
													BgL_auxz00_6907 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_6908);
												}
												BgL_auxz00_6906 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_6907);
											}
											BgL_arg2332z00_2952 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_6906))->
												BgL_colorz00);
										}
									else
										{	/* SawMill/regalloc.scm 643 */
											BgL_arg2332z00_2952 = BgL_oz00_2948;
										}
								}
						}
						BgL_tyz00_2923 = BgL_arg2331z00_2951;
						BgL_rz00_2924 = ((BgL_rtl_regz00_bglt) BgL_arg2332z00_2952);
						{	/* SawMill/regalloc.scm 618 */
							bool_t BgL_test3273z00_6914;

							{	/* SawMill/regalloc.scm 618 */
								bool_t BgL_res2885z00_4310;

								BgL_res2885z00_4310 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_rz00_2924), BGl_rtl_regzf2razf2zzsaw_regsetz00);
								BgL_test3273z00_6914 = BgL_res2885z00_4310;
							}
							if (BgL_test3273z00_6914)
								{	/* SawMill/regalloc.scm 618 */
									if (CBOOL(
											(((BgL_rtl_regz00_bglt) COBJECT(BgL_rz00_2924))->
												BgL_hardwarez00)))
										{	/* SawMill/regalloc.scm 620 */
											if (
												(((obj_t) BgL_tyz00_2923) ==
													BGl_za2objza2z00zztype_cachez00))
												{	/* SawMill/regalloc.scm 622 */
													return ((obj_t) BgL_rz00_2924);
												}
											else
												{	/* SawMill/regalloc.scm 625 */
													obj_t BgL_kz00_2929;

													BgL_kz00_2929 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_rz00_2924), ((obj_t) BgL_tyz00_2923));
													{	/* SawMill/regalloc.scm 626 */
														obj_t BgL_cz00_2930;

														BgL_cz00_2930 =
															BGl_assocz00zz__r4_pairs_and_lists_6_3z00
															(BgL_kz00_2929, CELL_REF(BgL_mappingz00_4913));
														if (PAIRP(BgL_cz00_2930))
															{	/* SawMill/regalloc.scm 627 */
																return CDR(BgL_cz00_2930);
															}
														else
															{	/* SawMill/regalloc.scm 629 */
																BgL_rtl_regz00_bglt BgL_newrz00_2932;

																{	/* SawMill/regalloc.scm 629 */
																	BgL_rtl_regz00_bglt
																		BgL_duplicated1237z00_2934;
																	BgL_rtl_regz00_bglt BgL_new1235z00_2935;

																	BgL_duplicated1237z00_2934 = BgL_rz00_2924;
																	{	/* SawMill/regalloc.scm 631 */
																		BgL_rtl_regz00_bglt BgL_tmp1246z00_2943;
																		BgL_rtl_regzf2razf2_bglt
																			BgL_wide1247z00_2944;
																		{
																			BgL_rtl_regz00_bglt BgL_auxz00_6931;

																			{	/* SawMill/regalloc.scm 631 */
																				BgL_rtl_regz00_bglt BgL_new1245z00_2946;

																				BgL_new1245z00_2946 =
																					((BgL_rtl_regz00_bglt)
																					BOBJECT(GC_MALLOC(sizeof(struct
																								BgL_rtl_regz00_bgl))));
																				{	/* SawMill/regalloc.scm 631 */
																					long BgL_arg2328z00_2947;

																					{	/* SawMill/regalloc.scm 631 */
																						long BgL_res2887z00_4315;

																						BgL_res2887z00_4315 =
																							BGL_CLASS_INDEX
																							(BGl_rtl_regz00zzsaw_defsz00);
																						BgL_arg2328z00_2947 =
																							BgL_res2887z00_4315;
																					}
																					BGL_OBJECT_CLASS_NUM_SET(
																						((BgL_objectz00_bglt)
																							BgL_new1245z00_2946),
																						BgL_arg2328z00_2947);
																				}
																				{	/* SawMill/regalloc.scm 631 */
																					BgL_objectz00_bglt BgL_tmpz00_6936;

																					BgL_tmpz00_6936 =
																						((BgL_objectz00_bglt)
																						BgL_new1245z00_2946);
																					BGL_OBJECT_WIDENING_SET
																						(BgL_tmpz00_6936, BFALSE);
																				}
																				((BgL_objectz00_bglt)
																					BgL_new1245z00_2946);
																				BgL_auxz00_6931 = BgL_new1245z00_2946;
																			}
																			BgL_tmp1246z00_2943 =
																				((BgL_rtl_regz00_bglt) BgL_auxz00_6931);
																		}
																		BgL_wide1247z00_2944 =
																			((BgL_rtl_regzf2razf2_bglt)
																			BOBJECT(GC_MALLOC(sizeof(struct
																						BgL_rtl_regzf2razf2_bgl))));
																		{	/* SawMill/regalloc.scm 631 */
																			obj_t BgL_auxz00_6944;
																			BgL_objectz00_bglt BgL_tmpz00_6942;

																			BgL_auxz00_6944 =
																				((obj_t) BgL_wide1247z00_2944);
																			BgL_tmpz00_6942 =
																				((BgL_objectz00_bglt)
																				BgL_tmp1246z00_2943);
																			BGL_OBJECT_WIDENING_SET(BgL_tmpz00_6942,
																				BgL_auxz00_6944);
																		}
																		((BgL_objectz00_bglt) BgL_tmp1246z00_2943);
																		{	/* SawMill/regalloc.scm 631 */
																			long BgL_arg2327z00_2945;

																			{	/* SawMill/regalloc.scm 631 */
																				long BgL_res2888z00_4321;

																				BgL_res2888z00_4321 =
																					BGL_CLASS_INDEX
																					(BGl_rtl_regzf2razf2zzsaw_regsetz00);
																				BgL_arg2327z00_2945 =
																					BgL_res2888z00_4321;
																			}
																			BGL_OBJECT_CLASS_NUM_SET(
																				((BgL_objectz00_bglt)
																					BgL_tmp1246z00_2943),
																				BgL_arg2327z00_2945);
																		}
																		BgL_new1235z00_2935 =
																			((BgL_rtl_regz00_bglt)
																			BgL_tmp1246z00_2943);
																	}
																	((((BgL_rtl_regz00_bglt) COBJECT(
																					((BgL_rtl_regz00_bglt)
																						BgL_new1235z00_2935)))->
																			BgL_typez00) =
																		((BgL_typez00_bglt) BgL_tyz00_2923),
																		BUNSPEC);
																	((((BgL_rtl_regz00_bglt)
																				COBJECT(((BgL_rtl_regz00_bglt)
																						BgL_new1235z00_2935)))->
																			BgL_varz00) =
																		((obj_t) (((BgL_rtl_regz00_bglt)
																					COBJECT(BgL_duplicated1237z00_2934))->
																				BgL_varz00)), BUNSPEC);
																	((((BgL_rtl_regz00_bglt)
																				COBJECT(((BgL_rtl_regz00_bglt)
																						BgL_new1235z00_2935)))->
																			BgL_onexprzf3zf3) =
																		((obj_t) (((BgL_rtl_regz00_bglt)
																					COBJECT(BgL_duplicated1237z00_2934))->
																				BgL_onexprzf3zf3)), BUNSPEC);
																	((((BgL_rtl_regz00_bglt)
																				COBJECT(((BgL_rtl_regz00_bglt)
																						BgL_new1235z00_2935)))->
																			BgL_namez00) =
																		((obj_t) (((BgL_rtl_regz00_bglt)
																					COBJECT(BgL_duplicated1237z00_2934))->
																				BgL_namez00)), BUNSPEC);
																	{
																		obj_t BgL_auxz00_6963;

																		{	/* SawMill/regalloc.scm 630 */

																			{	/* SawMill/regalloc.scm 630 */

																				BgL_auxz00_6963 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(BFALSE);
																		}}
																		((((BgL_rtl_regz00_bglt) COBJECT(
																						((BgL_rtl_regz00_bglt)
																							BgL_new1235z00_2935)))->
																				BgL_keyz00) =
																			((obj_t) BgL_auxz00_6963), BUNSPEC);
																	}
																	((((BgL_rtl_regz00_bglt) COBJECT(
																					((BgL_rtl_regz00_bglt)
																						BgL_new1235z00_2935)))->
																			BgL_hardwarez00) =
																		((obj_t) (((BgL_rtl_regz00_bglt)
																					COBJECT(BgL_duplicated1237z00_2934))->
																				BgL_hardwarez00)), BUNSPEC);
																	{
																		int BgL_auxz00_6976;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_6970;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_6977;

																			{
																				obj_t BgL_auxz00_6978;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_6979;

																					BgL_tmpz00_6979 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_6978 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_6979);
																				}
																				BgL_auxz00_6977 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_6978);
																			}
																			BgL_auxz00_6976 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6977))->
																				BgL_numz00);
																		}
																		{
																			obj_t BgL_auxz00_6971;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_6972;

																				BgL_tmpz00_6972 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_6971 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6972);
																			}
																			BgL_auxz00_6970 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_6971);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6970))->
																				BgL_numz00) =
																			((int) BgL_auxz00_6976), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_6992;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_6986;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_6993;

																			{
																				obj_t BgL_auxz00_6994;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_6995;

																					BgL_tmpz00_6995 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_6994 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_6995);
																				}
																				BgL_auxz00_6993 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_6994);
																			}
																			BgL_auxz00_6992 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6993))->
																				BgL_colorz00);
																		}
																		{
																			obj_t BgL_auxz00_6987;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_6988;

																				BgL_tmpz00_6988 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_6987 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_6988);
																			}
																			BgL_auxz00_6986 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_6987);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_6986))->
																				BgL_colorz00) =
																			((obj_t) BgL_auxz00_6992), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7008;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_7002;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_7009;

																			{
																				obj_t BgL_auxz00_7010;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_7011;

																					BgL_tmpz00_7011 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_7010 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7011);
																				}
																				BgL_auxz00_7009 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_7010);
																			}
																			BgL_auxz00_7008 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7009))->
																				BgL_coalescez00);
																		}
																		{
																			obj_t BgL_auxz00_7003;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_7004;

																				BgL_tmpz00_7004 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_7003 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7004);
																			}
																			BgL_auxz00_7002 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_7003);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7002))->
																				BgL_coalescez00) =
																			((obj_t) BgL_auxz00_7008), BUNSPEC);
																	}
																	{
																		int BgL_auxz00_7024;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_7018;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_7025;

																			{
																				obj_t BgL_auxz00_7026;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_7027;

																					BgL_tmpz00_7027 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_7026 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7027);
																				}
																				BgL_auxz00_7025 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_7026);
																			}
																			BgL_auxz00_7024 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7025))->
																				BgL_occurrencesz00);
																		}
																		{
																			obj_t BgL_auxz00_7019;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_7020;

																				BgL_tmpz00_7020 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_7019 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7020);
																			}
																			BgL_auxz00_7018 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_7019);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7018))->
																				BgL_occurrencesz00) =
																			((int) BgL_auxz00_7024), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7040;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_7034;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_7041;

																			{
																				obj_t BgL_auxz00_7042;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_7043;

																					BgL_tmpz00_7043 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_7042 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7043);
																				}
																				BgL_auxz00_7041 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_7042);
																			}
																			BgL_auxz00_7040 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7041))->
																				BgL_interferez00);
																		}
																		{
																			obj_t BgL_auxz00_7035;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_7036;

																				BgL_tmpz00_7036 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_7035 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7036);
																			}
																			BgL_auxz00_7034 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_7035);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7034))->
																				BgL_interferez00) =
																			((obj_t) BgL_auxz00_7040), BUNSPEC);
																	}
																	{
																		obj_t BgL_auxz00_7056;
																		BgL_rtl_regzf2razf2_bglt BgL_auxz00_7050;

																		{
																			BgL_rtl_regzf2razf2_bglt BgL_auxz00_7057;

																			{
																				obj_t BgL_auxz00_7058;

																				{	/* SawMill/regalloc.scm 630 */
																					BgL_objectz00_bglt BgL_tmpz00_7059;

																					BgL_tmpz00_7059 =
																						((BgL_objectz00_bglt)
																						((BgL_rtl_regz00_bglt)
																							BgL_duplicated1237z00_2934));
																					BgL_auxz00_7058 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_7059);
																				}
																				BgL_auxz00_7057 =
																					((BgL_rtl_regzf2razf2_bglt)
																					BgL_auxz00_7058);
																			}
																			BgL_auxz00_7056 =
																				(((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7057))->
																				BgL_interfere2z00);
																		}
																		{
																			obj_t BgL_auxz00_7051;

																			{	/* SawMill/regalloc.scm 630 */
																				BgL_objectz00_bglt BgL_tmpz00_7052;

																				BgL_tmpz00_7052 =
																					((BgL_objectz00_bglt)
																					BgL_new1235z00_2935);
																				BgL_auxz00_7051 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_7052);
																			}
																			BgL_auxz00_7050 =
																				((BgL_rtl_regzf2razf2_bglt)
																				BgL_auxz00_7051);
																		}
																		((((BgL_rtl_regzf2razf2_bglt)
																					COBJECT(BgL_auxz00_7050))->
																				BgL_interfere2z00) =
																			((obj_t) BgL_auxz00_7056), BUNSPEC);
																	}
																	BgL_newrz00_2932 = BgL_new1235z00_2935;
																}
																{	/* SawMill/regalloc.scm 632 */
																	obj_t BgL_auxz00_4915;

																	{	/* SawMill/regalloc.scm 632 */
																		obj_t BgL_arg2326z00_2933;

																		BgL_arg2326z00_2933 =
																			MAKE_YOUNG_PAIR(BgL_kz00_2929,
																			((obj_t) BgL_newrz00_2932));
																		BgL_auxz00_4915 =
																			MAKE_YOUNG_PAIR(BgL_arg2326z00_2933,
																			CELL_REF(BgL_mappingz00_4913));
																	}
																	CELL_SET(BgL_mappingz00_4913,
																		BgL_auxz00_4915);
																}
																return ((obj_t) BgL_newrz00_2932);
															}
													}
												}
										}
									else
										{	/* SawMill/regalloc.scm 620 */
											return ((obj_t) BgL_rz00_2924);
										}
								}
							else
								{	/* SawMill/regalloc.scm 618 */
									return ((obj_t) BgL_rz00_2924);
								}
						}
					}
				else
					{	/* SawMill/regalloc.scm 636 */
						if (BGl_isazf3zf3zz__objectz00(BgL_oz00_2948,
								BGl_rtl_insz00zzsaw_defsz00))
							{	/* SawMill/regalloc.scm 647 */
								{
									obj_t BgL_auxz00_7075;

									{	/* SawMill/regalloc.scm 649 */
										obj_t BgL_l1676z00_2963;

										BgL_l1676z00_2963 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2948)))->
											BgL_z52spillz52);
										if (NULLP(BgL_l1676z00_2963))
											{	/* SawMill/regalloc.scm 649 */
												BgL_auxz00_7075 = BNIL;
											}
										else
											{	/* SawMill/regalloc.scm 649 */
												obj_t BgL_head1678z00_2965;

												{	/* SawMill/regalloc.scm 649 */
													obj_t BgL_arg2349z00_2977;

													{	/* SawMill/regalloc.scm 649 */
														obj_t BgL_arg2350z00_2978;

														BgL_arg2350z00_2978 = CAR(BgL_l1676z00_2963);
														BgL_arg2349z00_2977 =
															BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
															(BgL_colorsz00_4914, BgL_mappingz00_4913,
															BgL_arg2350z00_2978);
													}
													{	/* SawMill/regalloc.scm 649 */
														obj_t BgL_res2894z00_4349;

														BgL_res2894z00_4349 =
															MAKE_YOUNG_PAIR(BgL_arg2349z00_2977, BNIL);
														BgL_head1678z00_2965 = BgL_res2894z00_4349;
													}
												}
												{	/* SawMill/regalloc.scm 649 */
													obj_t BgL_g1681z00_2966;

													BgL_g1681z00_2966 = CDR(BgL_l1676z00_2963);
													{
														obj_t BgL_l1676z00_2968;
														obj_t BgL_tail1679z00_2969;

														BgL_l1676z00_2968 = BgL_g1681z00_2966;
														BgL_tail1679z00_2969 = BgL_head1678z00_2965;
													BgL_zc3z04anonymousza32343ze3z87_2970:
														if (NULLP(BgL_l1676z00_2968))
															{	/* SawMill/regalloc.scm 649 */
																BgL_auxz00_7075 = BgL_head1678z00_2965;
															}
														else
															{	/* SawMill/regalloc.scm 649 */
																obj_t BgL_newtail1680z00_2972;

																{	/* SawMill/regalloc.scm 649 */
																	obj_t BgL_arg2346z00_2974;

																	{	/* SawMill/regalloc.scm 649 */
																		obj_t BgL_arg2347z00_2975;

																		BgL_arg2347z00_2975 =
																			CAR(((obj_t) BgL_l1676z00_2968));
																		BgL_arg2346z00_2974 =
																			BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_4914, BgL_mappingz00_4913,
																			BgL_arg2347z00_2975);
																	}
																	{	/* SawMill/regalloc.scm 649 */
																		obj_t BgL_res2896z00_4353;

																		BgL_res2896z00_4353 =
																			MAKE_YOUNG_PAIR(BgL_arg2346z00_2974,
																			BNIL);
																		BgL_newtail1680z00_2972 =
																			BgL_res2896z00_4353;
																	}
																}
																SET_CDR(BgL_tail1679z00_2969,
																	BgL_newtail1680z00_2972);
																{	/* SawMill/regalloc.scm 649 */
																	obj_t BgL_arg2345z00_2973;

																	BgL_arg2345z00_2973 =
																		CDR(((obj_t) BgL_l1676z00_2968));
																	{
																		obj_t BgL_tail1679z00_7095;
																		obj_t BgL_l1676z00_7094;

																		BgL_l1676z00_7094 = BgL_arg2345z00_2973;
																		BgL_tail1679z00_7095 =
																			BgL_newtail1680z00_2972;
																		BgL_tail1679z00_2969 = BgL_tail1679z00_7095;
																		BgL_l1676z00_2968 = BgL_l1676z00_7094;
																		goto BgL_zc3z04anonymousza32343ze3z87_2970;
																	}
																}
															}
													}
												}
											}
									}
									((((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2948)))->
											BgL_z52spillz52) = ((obj_t) BgL_auxz00_7075), BUNSPEC);
								}
								{
									obj_t BgL_auxz00_7097;

									{	/* SawMill/regalloc.scm 650 */
										obj_t BgL_l1682z00_2979;

										BgL_l1682z00_2979 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2948)))->BgL_argsz00);
										if (NULLP(BgL_l1682z00_2979))
											{	/* SawMill/regalloc.scm 650 */
												BgL_auxz00_7097 = BNIL;
											}
										else
											{	/* SawMill/regalloc.scm 650 */
												obj_t BgL_head1684z00_2981;

												{	/* SawMill/regalloc.scm 650 */
													obj_t BgL_arg2357z00_2993;

													{	/* SawMill/regalloc.scm 650 */
														obj_t BgL_arg2358z00_2994;

														BgL_arg2358z00_2994 = CAR(BgL_l1682z00_2979);
														BgL_arg2357z00_2993 =
															BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
															(BgL_colorsz00_4914, BgL_mappingz00_4913,
															BgL_arg2358z00_2994);
													}
													{	/* SawMill/regalloc.scm 650 */
														obj_t BgL_res2898z00_4358;

														BgL_res2898z00_4358 =
															MAKE_YOUNG_PAIR(BgL_arg2357z00_2993, BNIL);
														BgL_head1684z00_2981 = BgL_res2898z00_4358;
													}
												}
												{	/* SawMill/regalloc.scm 650 */
													obj_t BgL_g1687z00_2982;

													BgL_g1687z00_2982 = CDR(BgL_l1682z00_2979);
													{
														obj_t BgL_l1682z00_2984;
														obj_t BgL_tail1685z00_2985;

														BgL_l1682z00_2984 = BgL_g1687z00_2982;
														BgL_tail1685z00_2985 = BgL_head1684z00_2981;
													BgL_zc3z04anonymousza32352ze3z87_2986:
														if (NULLP(BgL_l1682z00_2984))
															{	/* SawMill/regalloc.scm 650 */
																BgL_auxz00_7097 = BgL_head1684z00_2981;
															}
														else
															{	/* SawMill/regalloc.scm 650 */
																obj_t BgL_newtail1686z00_2988;

																{	/* SawMill/regalloc.scm 650 */
																	obj_t BgL_arg2355z00_2990;

																	{	/* SawMill/regalloc.scm 650 */
																		obj_t BgL_arg2356z00_2991;

																		BgL_arg2356z00_2991 =
																			CAR(((obj_t) BgL_l1682z00_2984));
																		BgL_arg2355z00_2990 =
																			BGl_mapzd2registerze70z35zzsaw_registerzd2allocationzd2
																			(BgL_colorsz00_4914, BgL_mappingz00_4913,
																			BgL_arg2356z00_2991);
																	}
																	{	/* SawMill/regalloc.scm 650 */
																		obj_t BgL_res2900z00_4362;

																		BgL_res2900z00_4362 =
																			MAKE_YOUNG_PAIR(BgL_arg2355z00_2990,
																			BNIL);
																		BgL_newtail1686z00_2988 =
																			BgL_res2900z00_4362;
																	}
																}
																SET_CDR(BgL_tail1685z00_2985,
																	BgL_newtail1686z00_2988);
																{	/* SawMill/regalloc.scm 650 */
																	obj_t BgL_arg2354z00_2989;

																	BgL_arg2354z00_2989 =
																		CDR(((obj_t) BgL_l1682z00_2984));
																	{
																		obj_t BgL_tail1685z00_7117;
																		obj_t BgL_l1682z00_7116;

																		BgL_l1682z00_7116 = BgL_arg2354z00_2989;
																		BgL_tail1685z00_7117 =
																			BgL_newtail1686z00_2988;
																		BgL_tail1685z00_2985 = BgL_tail1685z00_7117;
																		BgL_l1682z00_2984 = BgL_l1682z00_7116;
																		goto BgL_zc3z04anonymousza32352ze3z87_2986;
																	}
																}
															}
													}
												}
											}
									}
									((((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt) BgL_oz00_2948)))->
											BgL_argsz00) = ((obj_t) BgL_auxz00_7097), BUNSPEC);
								}
								return BgL_oz00_2948;
							}
						else
							{	/* SawMill/regalloc.scm 647 */
								return BgL_oz00_2948;
							}
					}
			}
		}

	}



/* remove-nop-move! */
	obj_t BGl_removezd2nopzd2movez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_102)
	{
		{	/* SawMill/regalloc.scm 670 */
			{	/* SawMill/regalloc.scm 698 */
				obj_t BgL_nz00_3003;

				{	/* SawMill/regalloc.scm 698 */
					obj_t BgL_runner2375z00_3023;

					if (NULLP(BgL_blocksz00_102))
						{	/* SawMill/regalloc.scm 698 */
							BgL_runner2375z00_3023 = BNIL;
						}
					else
						{	/* SawMill/regalloc.scm 698 */
							obj_t BgL_head1710z00_3009;

							{	/* SawMill/regalloc.scm 698 */
								long BgL_arg2372z00_3021;

								BgL_arg2372z00_3021 =
									BGl_removezd2blockz12ze70z27zzsaw_registerzd2allocationzd2(CAR
									(BgL_blocksz00_102));
								{	/* SawMill/regalloc.scm 698 */
									obj_t BgL_res2925z00_4432;

									BgL_res2925z00_4432 =
										MAKE_YOUNG_PAIR(BINT(BgL_arg2372z00_3021), BNIL);
									BgL_head1710z00_3009 = BgL_res2925z00_4432;
							}}
							{	/* SawMill/regalloc.scm 698 */
								obj_t BgL_g1713z00_3010;

								BgL_g1713z00_3010 = CDR(BgL_blocksz00_102);
								{
									obj_t BgL_l1708z00_3012;
									obj_t BgL_tail1711z00_3013;

									BgL_l1708z00_3012 = BgL_g1713z00_3010;
									BgL_tail1711z00_3013 = BgL_head1710z00_3009;
								BgL_zc3z04anonymousza32367ze3z87_3014:
									if (NULLP(BgL_l1708z00_3012))
										{	/* SawMill/regalloc.scm 698 */
											BgL_runner2375z00_3023 = BgL_head1710z00_3009;
										}
									else
										{	/* SawMill/regalloc.scm 698 */
											obj_t BgL_newtail1712z00_3016;

											{	/* SawMill/regalloc.scm 698 */
												long BgL_arg2370z00_3018;

												{	/* SawMill/regalloc.scm 698 */
													obj_t BgL_arg2371z00_3019;

													BgL_arg2371z00_3019 =
														CAR(((obj_t) BgL_l1708z00_3012));
													BgL_arg2370z00_3018 =
														BGl_removezd2blockz12ze70z27zzsaw_registerzd2allocationzd2
														(BgL_arg2371z00_3019);
												}
												{	/* SawMill/regalloc.scm 698 */
													obj_t BgL_res2927z00_4436;

													BgL_res2927z00_4436 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg2370z00_3018), BNIL);
													BgL_newtail1712z00_3016 = BgL_res2927z00_4436;
											}}
											SET_CDR(BgL_tail1711z00_3013, BgL_newtail1712z00_3016);
											{	/* SawMill/regalloc.scm 698 */
												obj_t BgL_arg2369z00_3017;

												BgL_arg2369z00_3017 = CDR(((obj_t) BgL_l1708z00_3012));
												{
													obj_t BgL_tail1711z00_7137;
													obj_t BgL_l1708z00_7136;

													BgL_l1708z00_7136 = BgL_arg2369z00_3017;
													BgL_tail1711z00_7137 = BgL_newtail1712z00_3016;
													BgL_tail1711z00_3013 = BgL_tail1711z00_7137;
													BgL_l1708z00_3012 = BgL_l1708z00_7136;
													goto BgL_zc3z04anonymousza32367ze3z87_3014;
												}
											}
										}
								}
							}
						}
					BgL_nz00_3003 =
						BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner2375z00_3023);
				}
				{	/* SawMill/regalloc.scm 699 */
					obj_t BgL_list2363z00_3004;

					{	/* SawMill/regalloc.scm 699 */
						obj_t BgL_arg2364z00_3005;

						{	/* SawMill/regalloc.scm 699 */
							obj_t BgL_arg2365z00_3006;

							BgL_arg2365z00_3006 =
								MAKE_YOUNG_PAIR(BGl_string3041z00zzsaw_registerzd2allocationzd2,
								BNIL);
							BgL_arg2364z00_3005 =
								MAKE_YOUNG_PAIR(BgL_nz00_3003, BgL_arg2365z00_3006);
						}
						BgL_list2363z00_3004 =
							MAKE_YOUNG_PAIR(BGl_string3042z00zzsaw_registerzd2allocationzd2,
							BgL_arg2364z00_3005);
					}
					return
						BGl_verbosez00zztools_speekz00(BINT(((long) 3)),
						BgL_list2363z00_3004);
		}}}

	}



/* remove-block!~0 */
	long BGl_removezd2blockz12ze70z27zzsaw_registerzd2allocationzd2(obj_t
		BgL_bz00_3037)
	{
		{	/* SawMill/regalloc.scm 697 */
			{
				obj_t BgL_iz00_3024;

				{	/* SawMill/regalloc.scm 678 */
					obj_t BgL_g1255z00_3039;

					BgL_g1255z00_3039 =
						(((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt) BgL_bz00_3037)))->BgL_firstz00);
					{
						obj_t BgL_insz00_3041;
						obj_t BgL_prevz00_3042;
						long BgL_nz00_3043;

						BgL_insz00_3041 = BgL_g1255z00_3039;
						BgL_prevz00_3042 = BFALSE;
						BgL_nz00_3043 = ((long) 0);
					BgL_zc3z04anonymousza32386ze3z87_3044:
						if (PAIRP(BgL_insz00_3041))
							{	/* SawMill/regalloc.scm 682 */
								bool_t BgL_test3285z00_7148;

								BgL_iz00_3024 = CAR(BgL_insz00_3041);
								{	/* SawMill/regalloc.scm 673 */
									bool_t BgL_test3286z00_7149;

									{	/* SawMill/regalloc.scm 673 */
										BgL_rtl_funz00_bglt BgL_arg2384z00_3036;

										BgL_arg2384z00_3036 =
											(((BgL_rtl_insz00_bglt) COBJECT(
													((BgL_rtl_insz00_bglt)
														((BgL_rtl_insz00_bglt) BgL_iz00_3024))))->
											BgL_funz00);
										{	/* SawMill/regalloc.scm 673 */
											bool_t BgL_res2914z00_4400;

											BgL_res2914z00_4400 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_arg2384z00_3036),
												BGl_rtl_movz00zzsaw_defsz00);
											BgL_test3286z00_7149 = BgL_res2914z00_4400;
										}
									}
									if (BgL_test3286z00_7149)
										{	/* SawMill/regalloc.scm 673 */
											if (NULLP(
													(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt)
																	((BgL_rtl_insz00_bglt) BgL_iz00_3024))))->
														BgL_argsz00)))
												{	/* SawMill/regalloc.scm 674 */
													BgL_test3285z00_7148 = ((bool_t) 0);
												}
											else
												{	/* SawMill/regalloc.scm 675 */
													bool_t BgL_test3288z00_7160;

													{	/* SawMill/regalloc.scm 675 */
														obj_t BgL_tmpz00_7161;

														{	/* SawMill/regalloc.scm 675 */
															obj_t BgL_pairz00_4402;

															BgL_pairz00_4402 =
																(((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			((BgL_rtl_insz00_bglt) BgL_iz00_3024))))->
																BgL_argsz00);
															BgL_tmpz00_7161 = CDR(BgL_pairz00_4402);
														}
														BgL_test3288z00_7160 = NULLP(BgL_tmpz00_7161);
													}
													if (BgL_test3288z00_7160)
														{	/* SawMill/regalloc.scm 676 */
															obj_t BgL_tmpz00_7167;

															{	/* SawMill/regalloc.scm 676 */
																obj_t BgL_pairz00_4404;

																BgL_pairz00_4404 =
																	(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_3024))))->BgL_argsz00);
																BgL_tmpz00_7167 = CAR(BgL_pairz00_4404);
															}
															BgL_test3285z00_7148 =
																(
																(((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				((BgL_rtl_insz00_bglt)
																					BgL_iz00_3024))))->BgL_destz00) ==
																BgL_tmpz00_7167);
														}
													else
														{	/* SawMill/regalloc.scm 675 */
															BgL_test3285z00_7148 = ((bool_t) 0);
														}
												}
										}
									else
										{	/* SawMill/regalloc.scm 673 */
											BgL_test3285z00_7148 = ((bool_t) 0);
										}
								}
								if (BgL_test3285z00_7148)
									{	/* SawMill/regalloc.scm 683 */
										BgL_rtl_insz00_bglt BgL_i1256z00_3048;

										BgL_i1256z00_3048 =
											((BgL_rtl_insz00_bglt) CAR(BgL_insz00_3041));
										if (PAIRP(BgL_prevz00_3042))
											{	/* SawMill/regalloc.scm 685 */
												{	/* SawMill/regalloc.scm 686 */
													obj_t BgL_tmpz00_7181;

													BgL_tmpz00_7181 = CDR(BgL_insz00_3041);
													SET_CDR(BgL_prevz00_3042, BgL_tmpz00_7181);
												}
												{
													long BgL_nz00_7186;
													obj_t BgL_insz00_7184;

													BgL_insz00_7184 = CDR(BgL_insz00_3041);
													BgL_nz00_7186 = (((long) 1) + BgL_nz00_3043);
													BgL_nz00_3043 = BgL_nz00_7186;
													BgL_insz00_3041 = BgL_insz00_7184;
													goto BgL_zc3z04anonymousza32386ze3z87_3044;
												}
											}
										else
											{	/* SawMill/regalloc.scm 685 */
												if (NULLP(CDR(BgL_insz00_3041)))
													{	/* SawMill/regalloc.scm 688 */
														{
															BgL_rtl_funz00_bglt BgL_auxz00_7191;

															{	/* SawMill/regalloc.scm 689 */
																BgL_rtl_nopz00_bglt BgL_new1258z00_3055;

																{	/* SawMill/regalloc.scm 689 */
																	BgL_rtl_nopz00_bglt BgL_new1257z00_3056;

																	BgL_new1257z00_3056 =
																		((BgL_rtl_nopz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_rtl_nopz00_bgl))));
																	{	/* SawMill/regalloc.scm 689 */
																		long BgL_arg2397z00_3057;

																		{	/* SawMill/regalloc.scm 689 */
																			long BgL_res2921z00_4418;

																			{	/* SawMill/regalloc.scm 689 */
																				obj_t BgL_classz00_4417;

																				BgL_classz00_4417 =
																					BGl_rtl_nopz00zzsaw_defsz00;
																				BgL_res2921z00_4418 =
																					BGL_CLASS_INDEX(BgL_classz00_4417);
																			}
																			BgL_arg2397z00_3057 = BgL_res2921z00_4418;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1257z00_3056),
																			BgL_arg2397z00_3057);
																	}
																	BgL_new1258z00_3055 = BgL_new1257z00_3056;
																}
																((((BgL_rtl_funz00_bglt) COBJECT(
																				((BgL_rtl_funz00_bglt)
																					BgL_new1258z00_3055)))->BgL_locz00) =
																	((obj_t) BFALSE), BUNSPEC);
																BgL_auxz00_7191 =
																	((BgL_rtl_funz00_bglt) BgL_new1258z00_3055);
															}
															((((BgL_rtl_insz00_bglt) COBJECT(
																			((BgL_rtl_insz00_bglt)
																				BgL_i1256z00_3048)))->BgL_funz00) =
																((BgL_rtl_funz00_bglt) BgL_auxz00_7191),
																BUNSPEC);
														}
														((((BgL_rtl_insz00_bglt) COBJECT(
																		((BgL_rtl_insz00_bglt)
																			BgL_i1256z00_3048)))->BgL_destz00) =
															((obj_t) BFALSE), BUNSPEC);
														((((BgL_rtl_insz00_bglt)
																	COBJECT(((BgL_rtl_insz00_bglt)
																			BgL_i1256z00_3048)))->BgL_argsz00) =
															((obj_t) BNIL), BUNSPEC);
														return (((long) 1) + BgL_nz00_3043);
													}
												else
													{	/* SawMill/regalloc.scm 688 */
														{	/* SawMill/regalloc.scm 694 */
															obj_t BgL_arg2398z00_3058;

															BgL_arg2398z00_3058 = CDR(BgL_insz00_3041);
															((((BgL_blockz00_bglt) COBJECT(
																			((BgL_blockz00_bglt) BgL_bz00_3037)))->
																	BgL_firstz00) =
																((obj_t) ((obj_t) BgL_arg2398z00_3058)),
																BUNSPEC);
														}
														{
															long BgL_nz00_7212;
															obj_t BgL_insz00_7210;

															BgL_insz00_7210 = CDR(BgL_insz00_3041);
															BgL_nz00_7212 = (((long) 1) + BgL_nz00_3043);
															BgL_nz00_3043 = BgL_nz00_7212;
															BgL_insz00_3041 = BgL_insz00_7210;
															goto BgL_zc3z04anonymousza32386ze3z87_3044;
														}
													}
											}
									}
								else
									{
										obj_t BgL_prevz00_7216;
										obj_t BgL_insz00_7214;

										BgL_insz00_7214 = CDR(BgL_insz00_3041);
										BgL_prevz00_7216 = BgL_insz00_3041;
										BgL_prevz00_3042 = BgL_prevz00_7216;
										BgL_insz00_3041 = BgL_insz00_7214;
										goto BgL_zc3z04anonymousza32386ze3z87_3044;
									}
							}
						else
							{	/* SawMill/regalloc.scm 681 */
								return BgL_nz00_3043;
							}
					}
				}
			}
		}

	}



/* funcall-spill! */
	obj_t BGl_funcallzd2spillz12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_hregsz00_103, obj_t BgL_blocksz00_104)
	{
		{	/* SawMill/regalloc.scm 709 */
			{
				obj_t BgL_bz00_3106;

				if (NULLP(BgL_hregsz00_103))
					{	/* SawMill/regalloc.scm 728 */
						return BgL_blocksz00_104;
					}
				else
					{
						obj_t BgL_l1720z00_3072;

						{	/* SawMill/regalloc.scm 730 */
							bool_t BgL_tmpz00_7219;

							BgL_l1720z00_3072 = BgL_blocksz00_104;
						BgL_zc3z04anonymousza32408ze3z87_3073:
							if (PAIRP(BgL_l1720z00_3072))
								{	/* SawMill/regalloc.scm 730 */
									BgL_bz00_3106 = CAR(BgL_l1720z00_3072);
									{	/* SawMill/regalloc.scm 727 */
										obj_t BgL_g1719z00_3109;

										BgL_g1719z00_3109 =
											(((BgL_blockz00_bglt) COBJECT(
													((BgL_blockz00_bglt) BgL_bz00_3106)))->BgL_firstz00);
										{
											obj_t BgL_l1717z00_3111;

											BgL_l1717z00_3111 = BgL_g1719z00_3109;
										BgL_zc3z04anonymousza32432ze3z87_3112:
											if (PAIRP(BgL_l1717z00_3111))
												{	/* SawMill/regalloc.scm 727 */
													{	/* SawMill/regalloc.scm 727 */
														obj_t BgL_arg2435z00_3114;

														BgL_arg2435z00_3114 = CAR(BgL_l1717z00_3111);
														BGl_inszd2funcallzd2spillz12ze70zf5zzsaw_registerzd2allocationzd2
															(((BgL_rtl_insz00_bglt) BgL_arg2435z00_3114));
													}
													{
														obj_t BgL_l1717z00_7229;

														BgL_l1717z00_7229 = CDR(BgL_l1717z00_3111);
														BgL_l1717z00_3111 = BgL_l1717z00_7229;
														goto BgL_zc3z04anonymousza32432ze3z87_3112;
													}
												}
											else
												{	/* SawMill/regalloc.scm 727 */
													((bool_t) 1);
												}
										}
									}
									{
										obj_t BgL_l1720z00_7232;

										BgL_l1720z00_7232 = CDR(BgL_l1720z00_3072);
										BgL_l1720z00_3072 = BgL_l1720z00_7232;
										goto BgL_zc3z04anonymousza32408ze3z87_3073;
									}
								}
							else
								{	/* SawMill/regalloc.scm 730 */
									BgL_tmpz00_7219 = ((bool_t) 1);
								}
							return BBOOL(BgL_tmpz00_7219);
						}
					}
			}
		}

	}



/* ins-funcall-spill!~0 */
	bool_t
		BGl_inszd2funcallzd2spillz12ze70zf5zzsaw_registerzd2allocationzd2
		(BgL_rtl_insz00_bglt BgL_iz00_3081)
	{
		{	/* SawMill/regalloc.scm 724 */
			{	/* SawMill/regalloc.scm 715 */
				obj_t BgL_aspillz00_3084;

				{	/* SawMill/regalloc.scm 716 */
					obj_t BgL_arg2419z00_3087;

					{
						BgL_rtl_inszf2razf2_bglt BgL_auxz00_7235;

						{
							obj_t BgL_auxz00_7236;

							{	/* SawMill/regalloc.scm 715 */
								BgL_objectz00_bglt BgL_tmpz00_7237;

								BgL_tmpz00_7237 = ((BgL_objectz00_bglt) BgL_iz00_3081);
								BgL_auxz00_7236 = BGL_OBJECT_WIDENING(BgL_tmpz00_7237);
							}
							BgL_auxz00_7235 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7236);
						}
						BgL_arg2419z00_3087 =
							(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7235))->
							BgL_outz00);
					}
					{	/* SawMill/regalloc.scm 717 */
						obj_t BgL_zc3z04anonymousza32420ze3z87_4796;

						BgL_zc3z04anonymousza32420ze3z87_4796 =
							MAKE_FX_PROCEDURE
							(BGl_z62zc3z04anonymousza32420ze3ze5zzsaw_registerzd2allocationzd2,
							(int) (((long) 1)), (int) (((long) 1)));
						PROCEDURE_SET(BgL_zc3z04anonymousza32420ze3z87_4796,
							(int) (((long) 0)), ((obj_t) BgL_iz00_3081));
						BgL_aspillz00_3084 =
							BGl_regsetzd2filterzd2zzsaw_regsetz00
							(BgL_zc3z04anonymousza32420ze3z87_4796,
							((BgL_regsetz00_bglt) BgL_arg2419z00_3087));
				}}
				if (NULLP(BgL_aspillz00_3084))
					{	/* SawMill/regalloc.scm 722 */
						BFALSE;
					}
				else
					{	/* SawMill/regalloc.scm 723 */
						obj_t BgL_vz00_4449;

						BgL_vz00_4449 = BgL_aspillz00_3084;
						((((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_iz00_3081)))->BgL_z52spillz52) =
							((obj_t) BgL_vz00_4449), BUNSPEC);
					}
			}
			{	/* SawMill/regalloc.scm 724 */
				obj_t BgL_g1716z00_3098;

				BgL_g1716z00_3098 =
					(((BgL_rtl_insz00_bglt) COBJECT(
							((BgL_rtl_insz00_bglt) BgL_iz00_3081)))->BgL_argsz00);
				{
					obj_t BgL_l1714z00_3100;

					BgL_l1714z00_3100 = BgL_g1716z00_3098;
				BgL_zc3z04anonymousza32426ze3z87_3101:
					if (PAIRP(BgL_l1714z00_3100))
						{	/* SawMill/regalloc.scm 724 */
							{	/* SawMill/regalloc.scm 724 */
								obj_t BgL_arg2428z00_3103;

								BgL_arg2428z00_3103 = CAR(BgL_l1714z00_3100);
								if (BGl_isazf3zf3zz__objectz00(BgL_arg2428z00_3103,
										BGl_rtl_insz00zzsaw_defsz00))
									{	/* SawMill/regalloc.scm 711 */
										BGl_inszd2funcallzd2spillz12ze70zf5zzsaw_registerzd2allocationzd2
											(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
													BgL_arg2428z00_3103)));
									}
								else
									{	/* SawMill/regalloc.scm 711 */
										((bool_t) 0);
									}
							}
							{
								obj_t BgL_l1714z00_7264;

								BgL_l1714z00_7264 = CDR(BgL_l1714z00_3100);
								BgL_l1714z00_3100 = BgL_l1714z00_7264;
								goto BgL_zc3z04anonymousza32426ze3z87_3101;
							}
						}
					else
						{	/* SawMill/regalloc.scm 724 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* &<@anonymous:2420> */
	obj_t BGl_z62zc3z04anonymousza32420ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4797, obj_t BgL_rz00_4799)
	{
		{	/* SawMill/regalloc.scm 716 */
			{	/* SawMill/regalloc.scm 717 */
				BgL_rtl_insz00_bglt BgL_i1259z00_4798;

				BgL_i1259z00_4798 =
					((BgL_rtl_insz00_bglt)
					PROCEDURE_REF(BgL_envz00_4797, (int) (((long) 0))));
				{	/* SawMill/regalloc.scm 717 */
					bool_t BgL_tmpz00_7269;

					{	/* SawMill/regalloc.scm 717 */
						bool_t BgL_test3297z00_7270;

						{	/* SawMill/regalloc.scm 717 */
							obj_t BgL_arg2425z00_4958;

							{
								BgL_rtl_inszf2razf2_bglt BgL_auxz00_7271;

								{
									obj_t BgL_auxz00_7272;

									{	/* SawMill/regalloc.scm 717 */
										BgL_objectz00_bglt BgL_tmpz00_7273;

										BgL_tmpz00_7273 = ((BgL_objectz00_bglt) BgL_i1259z00_4798);
										BgL_auxz00_7272 = BGL_OBJECT_WIDENING(BgL_tmpz00_7273);
									}
									BgL_auxz00_7271 =
										((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7272);
								}
								BgL_arg2425z00_4958 =
									(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7271))->
									BgL_defz00);
							}
							BgL_test3297z00_7270 =
								BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
								((BgL_rtl_regz00_bglt) BgL_rz00_4799),
								((BgL_regsetz00_bglt) BgL_arg2425z00_4958));
						}
						if (BgL_test3297z00_7270)
							{	/* SawMill/regalloc.scm 717 */
								BgL_tmpz00_7269 = ((bool_t) 0);
							}
						else
							{	/* SawMill/regalloc.scm 719 */
								bool_t BgL_test3298z00_7281;

								{	/* SawMill/regalloc.scm 719 */
									obj_t BgL_arg2424z00_4959;

									{
										BgL_rtl_regzf2razf2_bglt BgL_auxz00_7282;

										{
											obj_t BgL_auxz00_7283;

											{	/* SawMill/regalloc.scm 719 */
												BgL_objectz00_bglt BgL_tmpz00_7284;

												BgL_tmpz00_7284 =
													((BgL_objectz00_bglt)
													((BgL_rtl_regz00_bglt) BgL_rz00_4799));
												BgL_auxz00_7283 = BGL_OBJECT_WIDENING(BgL_tmpz00_7284);
											}
											BgL_auxz00_7282 =
												((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_7283);
										}
										BgL_arg2424z00_4959 =
											(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_7282))->
											BgL_colorz00);
									}
									BgL_test3298z00_7281 =
										BGl_isazf3zf3zz__objectz00(BgL_arg2424z00_4959,
										BGl_rtl_regz00zzsaw_defsz00);
								}
								if (BgL_test3298z00_7281)
									{	/* SawMill/regalloc.scm 720 */
										obj_t BgL_arg2421z00_4960;
										obj_t BgL_arg2422z00_4961;

										{
											BgL_rtl_regzf2razf2_bglt BgL_auxz00_7291;

											{
												obj_t BgL_auxz00_7292;

												{	/* SawMill/regalloc.scm 720 */
													BgL_objectz00_bglt BgL_tmpz00_7293;

													BgL_tmpz00_7293 =
														((BgL_objectz00_bglt)
														((BgL_rtl_regz00_bglt) BgL_rz00_4799));
													BgL_auxz00_7292 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_7293);
												}
												BgL_auxz00_7291 =
													((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_7292);
											}
											BgL_arg2421z00_4960 =
												(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_7291))->
												BgL_colorz00);
										}
										{
											BgL_rtl_inszf2razf2_bglt BgL_auxz00_7299;

											{
												obj_t BgL_auxz00_7300;

												{	/* SawMill/regalloc.scm 720 */
													BgL_objectz00_bglt BgL_tmpz00_7301;

													BgL_tmpz00_7301 =
														((BgL_objectz00_bglt) BgL_i1259z00_4798);
													BgL_auxz00_7300 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_7301);
												}
												BgL_auxz00_7299 =
													((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7300);
											}
											BgL_arg2422z00_4961 =
												(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7299))->
												BgL_spillz00);
										}
										BgL_tmpz00_7269 =
											BGl_regsetzd2memberzf3z21zzsaw_regsetz00(
											((BgL_rtl_regz00_bglt) BgL_arg2421z00_4960),
											((BgL_regsetz00_bglt) BgL_arg2422z00_4961));
									}
								else
									{	/* SawMill/regalloc.scm 719 */
										BgL_tmpz00_7269 = ((bool_t) 0);
									}
							}
					}
					return BBOOL(BgL_tmpz00_7269);
				}
			}
		}

	}



/* cleanup-move-tree! */
	bool_t BGl_cleanupzd2movezd2treez12z12zzsaw_registerzd2allocationzd2(obj_t
		BgL_blocksz00_105)
	{
		{	/* SawMill/regalloc.scm 737 */
			{
				obj_t BgL_iz00_3159;
				obj_t BgL_bz00_3178;

				{
					obj_t BgL_l1737z00_3125;

					BgL_l1737z00_3125 = BgL_blocksz00_105;
				BgL_zc3z04anonymousza32438ze3z87_3126:
					if (PAIRP(BgL_l1737z00_3125))
						{	/* SawMill/regalloc.scm 761 */
							BgL_bz00_3178 = CAR(BgL_l1737z00_3125);
							{	/* SawMill/regalloc.scm 759 */
								obj_t BgL_g1736z00_3181;

								BgL_g1736z00_3181 =
									(((BgL_blockz00_bglt) COBJECT(
											((BgL_blockz00_bglt) BgL_bz00_3178)))->BgL_firstz00);
								{
									obj_t BgL_l1734z00_3183;

									BgL_l1734z00_3183 = BgL_g1736z00_3181;
								BgL_zc3z04anonymousza32473ze3z87_3184:
									if (PAIRP(BgL_l1734z00_3183))
										{	/* SawMill/regalloc.scm 759 */
											BgL_iz00_3159 = CAR(BgL_l1734z00_3183);
											{
												obj_t BgL_auxz00_7316;

												{	/* SawMill/regalloc.scm 754 */
													obj_t BgL_l1728z00_3162;

													BgL_l1728z00_3162 =
														(((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_iz00_3159)))->
														BgL_argsz00);
													if (NULLP(BgL_l1728z00_3162))
														{	/* SawMill/regalloc.scm 754 */
															BgL_auxz00_7316 = BNIL;
														}
													else
														{	/* SawMill/regalloc.scm 754 */
															obj_t BgL_head1730z00_3164;

															{	/* SawMill/regalloc.scm 754 */
																obj_t BgL_arg2470z00_3176;

																{	/* SawMill/regalloc.scm 754 */
																	obj_t BgL_arg2471z00_3177;

																	BgL_arg2471z00_3177 = CAR(BgL_l1728z00_3162);
																	BgL_arg2470z00_3176 =
																		BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
																		(BgL_arg2471z00_3177);
																}
																{	/* SawMill/regalloc.scm 754 */
																	obj_t BgL_res2943z00_4476;

																	BgL_res2943z00_4476 =
																		MAKE_YOUNG_PAIR(BgL_arg2470z00_3176, BNIL);
																	BgL_head1730z00_3164 = BgL_res2943z00_4476;
																}
															}
															{	/* SawMill/regalloc.scm 754 */
																obj_t BgL_g1733z00_3165;

																BgL_g1733z00_3165 = CDR(BgL_l1728z00_3162);
																{
																	obj_t BgL_l1728z00_3167;
																	obj_t BgL_tail1731z00_3168;

																	BgL_l1728z00_3167 = BgL_g1733z00_3165;
																	BgL_tail1731z00_3168 = BgL_head1730z00_3164;
																BgL_zc3z04anonymousza32464ze3z87_3169:
																	if (NULLP(BgL_l1728z00_3167))
																		{	/* SawMill/regalloc.scm 754 */
																			BgL_auxz00_7316 = BgL_head1730z00_3164;
																		}
																	else
																		{	/* SawMill/regalloc.scm 754 */
																			obj_t BgL_newtail1732z00_3171;

																			{	/* SawMill/regalloc.scm 754 */
																				obj_t BgL_arg2467z00_3173;

																				{	/* SawMill/regalloc.scm 754 */
																					obj_t BgL_arg2469z00_3174;

																					BgL_arg2469z00_3174 =
																						CAR(((obj_t) BgL_l1728z00_3167));
																					BgL_arg2467z00_3173 =
																						BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
																						(BgL_arg2469z00_3174);
																				}
																				{	/* SawMill/regalloc.scm 754 */
																					obj_t BgL_res2945z00_4480;

																					BgL_res2945z00_4480 =
																						MAKE_YOUNG_PAIR(BgL_arg2467z00_3173,
																						BNIL);
																					BgL_newtail1732z00_3171 =
																						BgL_res2945z00_4480;
																				}
																			}
																			SET_CDR(BgL_tail1731z00_3168,
																				BgL_newtail1732z00_3171);
																			{	/* SawMill/regalloc.scm 754 */
																				obj_t BgL_arg2466z00_3172;

																				BgL_arg2466z00_3172 =
																					CDR(((obj_t) BgL_l1728z00_3167));
																				{
																					obj_t BgL_tail1731z00_7336;
																					obj_t BgL_l1728z00_7335;

																					BgL_l1728z00_7335 =
																						BgL_arg2466z00_3172;
																					BgL_tail1731z00_7336 =
																						BgL_newtail1732z00_3171;
																					BgL_tail1731z00_3168 =
																						BgL_tail1731z00_7336;
																					BgL_l1728z00_3167 = BgL_l1728z00_7335;
																					goto
																						BgL_zc3z04anonymousza32464ze3z87_3169;
																				}
																			}
																		}
																}
															}
														}
												}
												((((BgL_rtl_insz00_bglt) COBJECT(
																((BgL_rtl_insz00_bglt) BgL_iz00_3159)))->
														BgL_argsz00) = ((obj_t) BgL_auxz00_7316), BUNSPEC);
											}
											BgL_iz00_3159;
											{
												obj_t BgL_l1734z00_7339;

												BgL_l1734z00_7339 = CDR(BgL_l1734z00_3183);
												BgL_l1734z00_3183 = BgL_l1734z00_7339;
												goto BgL_zc3z04anonymousza32473ze3z87_3184;
											}
										}
									else
										{	/* SawMill/regalloc.scm 759 */
											((bool_t) 1);
										}
								}
							}
							{
								obj_t BgL_l1737z00_7342;

								BgL_l1737z00_7342 = CDR(BgL_l1737z00_3125);
								BgL_l1737z00_3125 = BgL_l1737z00_7342;
								goto BgL_zc3z04anonymousza32438ze3z87_3126;
							}
						}
					else
						{	/* SawMill/regalloc.scm 761 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* args-cleanup-move-tree!~0 */
	obj_t
		BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
		(obj_t BgL_az00_3135)
	{
		{	/* SawMill/regalloc.scm 750 */
			if (BGl_isazf3zf3zz__objectz00(BgL_az00_3135,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawMill/regalloc.scm 744 */
					{
						obj_t BgL_auxz00_7346;

						{	/* SawMill/regalloc.scm 746 */
							obj_t BgL_l1722z00_3139;

							BgL_l1722z00_3139 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_az00_3135)))->BgL_argsz00);
							if (NULLP(BgL_l1722z00_3139))
								{	/* SawMill/regalloc.scm 746 */
									BgL_auxz00_7346 = BNIL;
								}
							else
								{	/* SawMill/regalloc.scm 746 */
									obj_t BgL_head1724z00_3141;

									{	/* SawMill/regalloc.scm 746 */
										obj_t BgL_arg2456z00_3153;

										{	/* SawMill/regalloc.scm 746 */
											obj_t BgL_arg2457z00_3154;

											BgL_arg2457z00_3154 = CAR(BgL_l1722z00_3139);
											BgL_arg2456z00_3153 =
												BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
												(BgL_arg2457z00_3154);
										}
										{	/* SawMill/regalloc.scm 746 */
											obj_t BgL_res2938z00_4465;

											BgL_res2938z00_4465 =
												MAKE_YOUNG_PAIR(BgL_arg2456z00_3153, BNIL);
											BgL_head1724z00_3141 = BgL_res2938z00_4465;
										}
									}
									{	/* SawMill/regalloc.scm 746 */
										obj_t BgL_g1727z00_3142;

										BgL_g1727z00_3142 = CDR(BgL_l1722z00_3139);
										{
											obj_t BgL_l1722z00_3144;
											obj_t BgL_tail1725z00_3145;

											BgL_l1722z00_3144 = BgL_g1727z00_3142;
											BgL_tail1725z00_3145 = BgL_head1724z00_3141;
										BgL_zc3z04anonymousza32450ze3z87_3146:
											if (NULLP(BgL_l1722z00_3144))
												{	/* SawMill/regalloc.scm 746 */
													BgL_auxz00_7346 = BgL_head1724z00_3141;
												}
											else
												{	/* SawMill/regalloc.scm 746 */
													obj_t BgL_newtail1726z00_3148;

													{	/* SawMill/regalloc.scm 746 */
														obj_t BgL_arg2453z00_3150;

														{	/* SawMill/regalloc.scm 746 */
															obj_t BgL_arg2455z00_3151;

															BgL_arg2455z00_3151 =
																CAR(((obj_t) BgL_l1722z00_3144));
															BgL_arg2453z00_3150 =
																BGl_argszd2cleanupzd2movezd2treez12ze70z27zzsaw_registerzd2allocationzd2
																(BgL_arg2455z00_3151);
														}
														{	/* SawMill/regalloc.scm 746 */
															obj_t BgL_res2940z00_4469;

															BgL_res2940z00_4469 =
																MAKE_YOUNG_PAIR(BgL_arg2453z00_3150, BNIL);
															BgL_newtail1726z00_3148 = BgL_res2940z00_4469;
														}
													}
													SET_CDR(BgL_tail1725z00_3145,
														BgL_newtail1726z00_3148);
													{	/* SawMill/regalloc.scm 746 */
														obj_t BgL_arg2452z00_3149;

														BgL_arg2452z00_3149 =
															CDR(((obj_t) BgL_l1722z00_3144));
														{
															obj_t BgL_tail1725z00_7366;
															obj_t BgL_l1722z00_7365;

															BgL_l1722z00_7365 = BgL_arg2452z00_3149;
															BgL_tail1725z00_7366 = BgL_newtail1726z00_3148;
															BgL_tail1725z00_3145 = BgL_tail1725z00_7366;
															BgL_l1722z00_3144 = BgL_l1722z00_7365;
															goto BgL_zc3z04anonymousza32450ze3z87_3146;
														}
													}
												}
										}
									}
								}
						}
						((((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_az00_3135)))->BgL_argsz00) =
							((obj_t) BgL_auxz00_7346), BUNSPEC);
					}
					{	/* SawMill/regalloc.scm 747 */
						bool_t BgL_test3306z00_7368;

						{	/* SawMill/regalloc.scm 747 */
							BgL_rtl_funz00_bglt BgL_arg2461z00_3158;

							BgL_arg2461z00_3158 =
								(((BgL_rtl_insz00_bglt) COBJECT(
										((BgL_rtl_insz00_bglt) BgL_az00_3135)))->BgL_funz00);
							{	/* SawMill/regalloc.scm 747 */
								bool_t BgL_res2941z00_4472;

								BgL_res2941z00_4472 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_arg2461z00_3158), BGl_rtl_movz00zzsaw_defsz00);
								BgL_test3306z00_7368 = BgL_res2941z00_4472;
							}
						}
						if (BgL_test3306z00_7368)
							{	/* SawMill/regalloc.scm 748 */
								obj_t BgL_pairz00_4473;

								BgL_pairz00_4473 =
									(((BgL_rtl_insz00_bglt) COBJECT(
											((BgL_rtl_insz00_bglt) BgL_az00_3135)))->BgL_argsz00);
								return CAR(BgL_pairz00_4473);
							}
						else
							{	/* SawMill/regalloc.scm 747 */
								return BgL_az00_3135;
							}
					}
				}
			else
				{	/* SawMill/regalloc.scm 744 */
					return BgL_az00_3135;
				}
		}

	}



/* use-register! */
	BgL_rtl_regz00_bglt
		BGl_usezd2registerz12zc0zzsaw_registerzd2allocationzd2(BgL_rtl_regz00_bglt
		BgL_regz00_106)
	{
		{	/* SawMill/regalloc.scm 770 */
			{
				int BgL_auxz00_7382;
				BgL_rtl_regzf2razf2_bglt BgL_auxz00_7376;

				{	/* SawMill/regalloc.scm 772 */
					int BgL_arg2477z00_3194;

					{
						BgL_rtl_regzf2razf2_bglt BgL_auxz00_7383;

						{
							obj_t BgL_auxz00_7384;

							{	/* SawMill/regalloc.scm 772 */
								BgL_objectz00_bglt BgL_tmpz00_7385;

								BgL_tmpz00_7385 = ((BgL_objectz00_bglt) BgL_regz00_106);
								BgL_auxz00_7384 = BGL_OBJECT_WIDENING(BgL_tmpz00_7385);
							}
							BgL_auxz00_7383 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_7384);
						}
						BgL_arg2477z00_3194 =
							(((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_7383))->
							BgL_occurrencesz00);
					}
					BgL_auxz00_7382 = (int) ((((long) 1) + (long) (BgL_arg2477z00_3194)));
				}
				{
					obj_t BgL_auxz00_7377;

					{	/* SawMill/regalloc.scm 772 */
						BgL_objectz00_bglt BgL_tmpz00_7378;

						BgL_tmpz00_7378 = ((BgL_objectz00_bglt) BgL_regz00_106);
						BgL_auxz00_7377 = BGL_OBJECT_WIDENING(BgL_tmpz00_7378);
					}
					BgL_auxz00_7376 = ((BgL_rtl_regzf2razf2_bglt) BgL_auxz00_7377);
				}
				((((BgL_rtl_regzf2razf2_bglt) COBJECT(BgL_auxz00_7376))->
						BgL_occurrencesz00) = ((int) BgL_auxz00_7382), BUNSPEC);
			}
			return BgL_regz00_106;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			{	/* SawMill/regalloc.scm 34 */
				obj_t BgL_arg2484z00_3199;
				obj_t BgL_arg2486z00_3200;

				{	/* SawMill/regalloc.scm 34 */
					obj_t BgL_v1745z00_3226;

					BgL_v1745z00_3226 = create_vector(((long) 1));
					{	/* SawMill/regalloc.scm 34 */
						obj_t BgL_arg2501z00_3227;

						BgL_arg2501z00_3227 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc3044z00zzsaw_registerzd2allocationzd2,
							BGl_proc3043z00zzsaw_registerzd2allocationzd2, ((bool_t) 0),
							((bool_t) 0), BFALSE, BFALSE, CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1745z00_3226, ((long) 0), BgL_arg2501z00_3227);
					}
					BgL_arg2484z00_3199 = BgL_v1745z00_3226;
				}
				{	/* SawMill/regalloc.scm 34 */
					obj_t BgL_v1746z00_3237;

					BgL_v1746z00_3237 = create_vector(((long) 0));
					BgL_arg2486z00_3200 = BgL_v1746z00_3237;
				}
				BGl_blockzf2razf2zzsaw_registerzd2allocationzd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 2)),
					CNST_TABLE_REF(((long) 3)), BGl_blockz00zzsaw_defsz00, ((long) 29378),
					BGl_proc3048z00zzsaw_registerzd2allocationzd2,
					BGl_proc3047z00zzsaw_registerzd2allocationzd2, BFALSE,
					BGl_proc3046z00zzsaw_registerzd2allocationzd2,
					BGl_proc3045z00zzsaw_registerzd2allocationzd2, BgL_arg2484z00_3199,
					BgL_arg2486z00_3200);
			}
			{	/* SawMill/regalloc.scm 37 */
				obj_t BgL_arg2518z00_3246;
				obj_t BgL_arg2519z00_3247;

				{	/* SawMill/regalloc.scm 37 */
					obj_t BgL_v1747z00_3277;

					BgL_v1747z00_3277 = create_vector(((long) 4));
					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_arg2533z00_3278;

						BgL_arg2533z00_3278 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc3051z00zzsaw_registerzd2allocationzd2,
							BGl_proc3050z00zzsaw_registerzd2allocationzd2, ((bool_t) 0),
							((bool_t) 0), BFALSE,
							BGl_proc3049z00zzsaw_registerzd2allocationzd2,
							CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1747z00_3277, ((long) 0), BgL_arg2533z00_3278);
					}
					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_arg2542z00_3291;

						BgL_arg2542z00_3291 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc3054z00zzsaw_registerzd2allocationzd2,
							BGl_proc3053z00zzsaw_registerzd2allocationzd2, ((bool_t) 0),
							((bool_t) 0), BFALSE,
							BGl_proc3052z00zzsaw_registerzd2allocationzd2,
							CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1747z00_3277, ((long) 1), BgL_arg2542z00_3291);
					}
					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_arg2552z00_3304;

						BgL_arg2552z00_3304 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc3057z00zzsaw_registerzd2allocationzd2,
							BGl_proc3056z00zzsaw_registerzd2allocationzd2, ((bool_t) 0),
							((bool_t) 0), BFALSE,
							BGl_proc3055z00zzsaw_registerzd2allocationzd2,
							CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1747z00_3277, ((long) 2), BgL_arg2552z00_3304);
					}
					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_arg2562z00_3317;

						BgL_arg2562z00_3317 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc3060z00zzsaw_registerzd2allocationzd2,
							BGl_proc3059z00zzsaw_registerzd2allocationzd2, ((bool_t) 0),
							((bool_t) 0), BFALSE,
							BGl_proc3058z00zzsaw_registerzd2allocationzd2,
							CNST_TABLE_REF(((long) 5)));
						VECTOR_SET(BgL_v1747z00_3277, ((long) 3), BgL_arg2562z00_3317);
					}
					BgL_arg2518z00_3246 = BgL_v1747z00_3277;
				}
				{	/* SawMill/regalloc.scm 37 */
					obj_t BgL_v1748z00_3330;

					BgL_v1748z00_3330 = create_vector(((long) 0));
					BgL_arg2519z00_3247 = BgL_v1748z00_3330;
				}
				return (BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 9)),
						CNST_TABLE_REF(((long) 3)), BGl_rtl_insz00zzsaw_defsz00,
						((long) 22329), BGl_proc3064z00zzsaw_registerzd2allocationzd2,
						BGl_proc3063z00zzsaw_registerzd2allocationzd2, BFALSE,
						BGl_proc3062z00zzsaw_registerzd2allocationzd2,
						BGl_proc3061z00zzsaw_registerzd2allocationzd2, BgL_arg2518z00_3246,
						BgL_arg2519z00_3247), BUNSPEC);
		}}

	}



/* &lambda2527 */
	BgL_rtl_insz00_bglt BGl_z62lambda2527z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4822, obj_t BgL_o1172z00_4823)
	{
		{	/* SawMill/regalloc.scm 37 */
			{	/* SawMill/regalloc.scm 37 */
				long BgL_arg2529z00_4963;

				{	/* SawMill/regalloc.scm 37 */
					obj_t BgL_arg2530z00_4964;

					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_arg2532z00_4965;

						{	/* SawMill/regalloc.scm 37 */
							long BgL_arg1816z00_4966;

							{	/* SawMill/regalloc.scm 37 */
								long BgL_arg1817z00_4967;

								{	/* SawMill/regalloc.scm 37 */
									long BgL_res2958z00_4968;

									BgL_res2958z00_4968 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_rtl_insz00_bglt) BgL_o1172z00_4823)));
									BgL_arg1817z00_4967 = BgL_res2958z00_4968;
								}
								BgL_arg1816z00_4966 = (BgL_arg1817z00_4967 - OBJECT_TYPE);
							}
							BgL_arg2532z00_4965 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4966);
						}
						BgL_arg2530z00_4964 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2532z00_4965);
					}
					{	/* SawMill/regalloc.scm 37 */
						long BgL_res2960z00_4969;

						{	/* SawMill/regalloc.scm 37 */
							obj_t BgL_tmpz00_7430;

							BgL_tmpz00_7430 = ((obj_t) BgL_arg2530z00_4964);
							BgL_res2960z00_4969 = BGL_CLASS_INDEX(BgL_tmpz00_7430);
						}
						BgL_arg2529z00_4963 = BgL_res2960z00_4969;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) BgL_o1172z00_4823)), BgL_arg2529z00_4963);
			}
			{	/* SawMill/regalloc.scm 37 */
				BgL_objectz00_bglt BgL_tmpz00_7436;

				BgL_tmpz00_7436 =
					((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1172z00_4823));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7436, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1172z00_4823));
			return ((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1172z00_4823));
		}

	}



/* &<@anonymous:2526> */
	obj_t BGl_z62zc3z04anonymousza32526ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4824, obj_t BgL_new1171z00_4825)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_insz00_bglt BgL_auxz00_7444;

				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1171z00_4825))))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1171z00_4825))))->BgL_z52spillz52) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_rtl_insz00_bglt)
							COBJECT(((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt)
										BgL_new1171z00_4825))))->BgL_destz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_rtl_funz00_bglt BgL_auxz00_7454;

					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_classz00_4971;

						BgL_classz00_4971 = BGl_rtl_funz00zzsaw_defsz00;
						{	/* SawMill/regalloc.scm 37 */
							obj_t BgL__ortest_1106z00_4972;

							BgL__ortest_1106z00_4972 = BGL_CLASS_NIL(BgL_classz00_4971);
							if (CBOOL(BgL__ortest_1106z00_4972))
								{	/* SawMill/regalloc.scm 37 */
									BgL_auxz00_7454 =
										((BgL_rtl_funz00_bglt) BgL__ortest_1106z00_4972);
								}
							else
								{	/* SawMill/regalloc.scm 37 */
									BgL_auxz00_7454 =
										((BgL_rtl_funz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4971));
								}
						}
					}
					((((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt)
										((BgL_rtl_insz00_bglt) BgL_new1171z00_4825))))->
							BgL_funz00) = ((BgL_rtl_funz00_bglt) BgL_auxz00_7454), BUNSPEC);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt)
									((BgL_rtl_insz00_bglt) BgL_new1171z00_4825))))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7467;

					{
						obj_t BgL_auxz00_7468;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7469;

							BgL_tmpz00_7469 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1171z00_4825));
							BgL_auxz00_7468 = BGL_OBJECT_WIDENING(BgL_tmpz00_7469);
						}
						BgL_auxz00_7467 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7468);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7467))->BgL_defz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7475;

					{
						obj_t BgL_auxz00_7476;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7477;

							BgL_tmpz00_7477 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1171z00_4825));
							BgL_auxz00_7476 = BGL_OBJECT_WIDENING(BgL_tmpz00_7477);
						}
						BgL_auxz00_7475 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7476);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7475))->BgL_outz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7483;

					{
						obj_t BgL_auxz00_7484;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7485;

							BgL_tmpz00_7485 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1171z00_4825));
							BgL_auxz00_7484 = BGL_OBJECT_WIDENING(BgL_tmpz00_7485);
						}
						BgL_auxz00_7483 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7484);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7483))->BgL_inz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7491;

					{
						obj_t BgL_auxz00_7492;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7493;

							BgL_tmpz00_7493 =
								((BgL_objectz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_new1171z00_4825));
							BgL_auxz00_7492 = BGL_OBJECT_WIDENING(BgL_tmpz00_7493);
						}
						BgL_auxz00_7491 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7492);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7491))->
							BgL_spillz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_7444 = ((BgL_rtl_insz00_bglt) BgL_new1171z00_4825);
				return ((obj_t) BgL_auxz00_7444);
			}
		}

	}



/* &lambda2523 */
	BgL_rtl_insz00_bglt BGl_z62lambda2523z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4826, obj_t BgL_o1168z00_4827)
	{
		{	/* SawMill/regalloc.scm 37 */
			{	/* SawMill/regalloc.scm 37 */
				BgL_rtl_inszf2razf2_bglt BgL_wide1170z00_4974;

				BgL_wide1170z00_4974 =
					((BgL_rtl_inszf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_rtl_inszf2razf2_bgl))));
				{	/* SawMill/regalloc.scm 37 */
					obj_t BgL_auxz00_7506;
					BgL_objectz00_bglt BgL_tmpz00_7502;

					BgL_auxz00_7506 = ((obj_t) BgL_wide1170z00_4974);
					BgL_tmpz00_7502 =
						((BgL_objectz00_bglt)
						((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1168z00_4827)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7502, BgL_auxz00_7506);
				}
				((BgL_objectz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1168z00_4827)));
				{	/* SawMill/regalloc.scm 37 */
					long BgL_arg2525z00_4975;

					{	/* SawMill/regalloc.scm 37 */
						long BgL_res2957z00_4976;

						BgL_res2957z00_4976 =
							BGL_CLASS_INDEX
							(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
						BgL_arg2525z00_4975 = BgL_res2957z00_4976;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt)
								((BgL_rtl_insz00_bglt) BgL_o1168z00_4827))),
						BgL_arg2525z00_4975);
				}
				return
					((BgL_rtl_insz00_bglt)
					((BgL_rtl_insz00_bglt) ((BgL_rtl_insz00_bglt) BgL_o1168z00_4827)));
			}
		}

	}



/* &lambda2520 */
	BgL_rtl_insz00_bglt BGl_z62lambda2520z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4828, obj_t BgL_loc1159z00_4829, obj_t BgL_z52spill1160z52_4830,
		obj_t BgL_dest1161z00_4831, obj_t BgL_fun1162z00_4832,
		obj_t BgL_args1163z00_4833, obj_t BgL_def1164z00_4834,
		obj_t BgL_out1165z00_4835, obj_t BgL_in1166z00_4836,
		obj_t BgL_spill1167z00_4837)
	{
		{	/* SawMill/regalloc.scm 37 */
			{	/* SawMill/regalloc.scm 37 */
				BgL_rtl_insz00_bglt BgL_new1278z00_4980;

				{	/* SawMill/regalloc.scm 37 */
					BgL_rtl_insz00_bglt BgL_tmp1276z00_4981;
					BgL_rtl_inszf2razf2_bglt BgL_wide1277z00_4982;

					{
						BgL_rtl_insz00_bglt BgL_auxz00_7520;

						{	/* SawMill/regalloc.scm 37 */
							BgL_rtl_insz00_bglt BgL_new1275z00_4983;

							BgL_new1275z00_4983 =
								((BgL_rtl_insz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_rtl_insz00_bgl))));
							{	/* SawMill/regalloc.scm 37 */
								long BgL_arg2522z00_4984;

								{	/* SawMill/regalloc.scm 37 */
									long BgL_res2955z00_4985;

									BgL_res2955z00_4985 =
										BGL_CLASS_INDEX(BGl_rtl_insz00zzsaw_defsz00);
									BgL_arg2522z00_4984 = BgL_res2955z00_4985;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1275z00_4983),
									BgL_arg2522z00_4984);
							}
							{	/* SawMill/regalloc.scm 37 */
								BgL_objectz00_bglt BgL_tmpz00_7525;

								BgL_tmpz00_7525 = ((BgL_objectz00_bglt) BgL_new1275z00_4983);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7525, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1275z00_4983);
							BgL_auxz00_7520 = BgL_new1275z00_4983;
						}
						BgL_tmp1276z00_4981 = ((BgL_rtl_insz00_bglt) BgL_auxz00_7520);
					}
					BgL_wide1277z00_4982 =
						((BgL_rtl_inszf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_rtl_inszf2razf2_bgl))));
					{	/* SawMill/regalloc.scm 37 */
						obj_t BgL_auxz00_7533;
						BgL_objectz00_bglt BgL_tmpz00_7531;

						BgL_auxz00_7533 = ((obj_t) BgL_wide1277z00_4982);
						BgL_tmpz00_7531 = ((BgL_objectz00_bglt) BgL_tmp1276z00_4981);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7531, BgL_auxz00_7533);
					}
					((BgL_objectz00_bglt) BgL_tmp1276z00_4981);
					{	/* SawMill/regalloc.scm 37 */
						long BgL_arg2521z00_4986;

						{	/* SawMill/regalloc.scm 37 */
							long BgL_res2956z00_4987;

							BgL_res2956z00_4987 =
								BGL_CLASS_INDEX
								(BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
							BgL_arg2521z00_4986 = BgL_res2956z00_4987;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1276z00_4981), BgL_arg2521z00_4986);
					}
					BgL_new1278z00_4980 = ((BgL_rtl_insz00_bglt) BgL_tmp1276z00_4981);
				}
				((((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_new1278z00_4980)))->BgL_locz00) =
					((obj_t) BgL_loc1159z00_4829), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_4980)))->BgL_z52spillz52) =
					((obj_t) ((obj_t) BgL_z52spill1160z52_4830)), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_4980)))->BgL_destz00) =
					((obj_t) BgL_dest1161z00_4831), BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_4980)))->BgL_funz00) =
					((BgL_rtl_funz00_bglt) ((BgL_rtl_funz00_bglt) BgL_fun1162z00_4832)),
					BUNSPEC);
				((((BgL_rtl_insz00_bglt) COBJECT(((BgL_rtl_insz00_bglt)
									BgL_new1278z00_4980)))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1163z00_4833)), BUNSPEC);
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7554;

					{
						obj_t BgL_auxz00_7555;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7556;

							BgL_tmpz00_7556 = ((BgL_objectz00_bglt) BgL_new1278z00_4980);
							BgL_auxz00_7555 = BGL_OBJECT_WIDENING(BgL_tmpz00_7556);
						}
						BgL_auxz00_7554 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7555);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7554))->BgL_defz00) =
						((obj_t) BgL_def1164z00_4834), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7561;

					{
						obj_t BgL_auxz00_7562;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7563;

							BgL_tmpz00_7563 = ((BgL_objectz00_bglt) BgL_new1278z00_4980);
							BgL_auxz00_7562 = BGL_OBJECT_WIDENING(BgL_tmpz00_7563);
						}
						BgL_auxz00_7561 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7562);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7561))->BgL_outz00) =
						((obj_t) BgL_out1165z00_4835), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7568;

					{
						obj_t BgL_auxz00_7569;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7570;

							BgL_tmpz00_7570 = ((BgL_objectz00_bglt) BgL_new1278z00_4980);
							BgL_auxz00_7569 = BGL_OBJECT_WIDENING(BgL_tmpz00_7570);
						}
						BgL_auxz00_7568 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7569);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7568))->BgL_inz00) =
						((obj_t) BgL_in1166z00_4836), BUNSPEC);
				}
				{
					BgL_rtl_inszf2razf2_bglt BgL_auxz00_7575;

					{
						obj_t BgL_auxz00_7576;

						{	/* SawMill/regalloc.scm 37 */
							BgL_objectz00_bglt BgL_tmpz00_7577;

							BgL_tmpz00_7577 = ((BgL_objectz00_bglt) BgL_new1278z00_4980);
							BgL_auxz00_7576 = BGL_OBJECT_WIDENING(BgL_tmpz00_7577);
						}
						BgL_auxz00_7575 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7576);
					}
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7575))->
							BgL_spillz00) = ((obj_t) BgL_spill1167z00_4837), BUNSPEC);
				}
				return BgL_new1278z00_4980;
			}
		}

	}



/* &<@anonymous:2569> */
	obj_t BGl_z62zc3z04anonymousza32569ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4838)
	{
		{	/* SawMill/regalloc.scm 37 */
			return BUNSPEC;
		}

	}



/* &lambda2568 */
	obj_t BGl_z62lambda2568z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4839, obj_t BgL_oz00_4840, obj_t BgL_vz00_4841)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7582;

				{
					obj_t BgL_auxz00_7583;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7584;

						BgL_tmpz00_7584 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4840));
						BgL_auxz00_7583 = BGL_OBJECT_WIDENING(BgL_tmpz00_7584);
					}
					BgL_auxz00_7582 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7583);
				}
				return
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7582))->
						BgL_spillz00) = ((obj_t) BgL_vz00_4841), BUNSPEC);
			}
		}

	}



/* &lambda2567 */
	obj_t BGl_z62lambda2567z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4842, obj_t BgL_oz00_4843)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7590;

				{
					obj_t BgL_auxz00_7591;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7592;

						BgL_tmpz00_7592 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4843));
						BgL_auxz00_7591 = BGL_OBJECT_WIDENING(BgL_tmpz00_7592);
					}
					BgL_auxz00_7590 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7591);
				}
				return
					(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7590))->BgL_spillz00);
			}
		}

	}



/* &<@anonymous:2559> */
	obj_t BGl_z62zc3z04anonymousza32559ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4844)
	{
		{	/* SawMill/regalloc.scm 37 */
			return BUNSPEC;
		}

	}



/* &lambda2558 */
	obj_t BGl_z62lambda2558z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4845, obj_t BgL_oz00_4846, obj_t BgL_vz00_4847)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7598;

				{
					obj_t BgL_auxz00_7599;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7600;

						BgL_tmpz00_7600 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4846));
						BgL_auxz00_7599 = BGL_OBJECT_WIDENING(BgL_tmpz00_7600);
					}
					BgL_auxz00_7598 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7599);
				}
				return
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7598))->BgL_inz00) =
					((obj_t) BgL_vz00_4847), BUNSPEC);
			}
		}

	}



/* &lambda2557 */
	obj_t BGl_z62lambda2557z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4848, obj_t BgL_oz00_4849)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7606;

				{
					obj_t BgL_auxz00_7607;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7608;

						BgL_tmpz00_7608 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4849));
						BgL_auxz00_7607 = BGL_OBJECT_WIDENING(BgL_tmpz00_7608);
					}
					BgL_auxz00_7606 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7607);
				}
				return
					(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7606))->BgL_inz00);
			}
		}

	}



/* &<@anonymous:2551> */
	obj_t BGl_z62zc3z04anonymousza32551ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4850)
	{
		{	/* SawMill/regalloc.scm 37 */
			return BUNSPEC;
		}

	}



/* &lambda2550 */
	obj_t BGl_z62lambda2550z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4851, obj_t BgL_oz00_4852, obj_t BgL_vz00_4853)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7614;

				{
					obj_t BgL_auxz00_7615;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7616;

						BgL_tmpz00_7616 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4852));
						BgL_auxz00_7615 = BGL_OBJECT_WIDENING(BgL_tmpz00_7616);
					}
					BgL_auxz00_7614 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7615);
				}
				return
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7614))->BgL_outz00) =
					((obj_t) BgL_vz00_4853), BUNSPEC);
			}
		}

	}



/* &lambda2549 */
	obj_t BGl_z62lambda2549z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4854, obj_t BgL_oz00_4855)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7622;

				{
					obj_t BgL_auxz00_7623;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7624;

						BgL_tmpz00_7624 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4855));
						BgL_auxz00_7623 = BGL_OBJECT_WIDENING(BgL_tmpz00_7624);
					}
					BgL_auxz00_7622 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7623);
				}
				return
					(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7622))->BgL_outz00);
			}
		}

	}



/* &<@anonymous:2541> */
	obj_t BGl_z62zc3z04anonymousza32541ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4856)
	{
		{	/* SawMill/regalloc.scm 37 */
			return BUNSPEC;
		}

	}



/* &lambda2540 */
	obj_t BGl_z62lambda2540z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4857, obj_t BgL_oz00_4858, obj_t BgL_vz00_4859)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7630;

				{
					obj_t BgL_auxz00_7631;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7632;

						BgL_tmpz00_7632 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4858));
						BgL_auxz00_7631 = BGL_OBJECT_WIDENING(BgL_tmpz00_7632);
					}
					BgL_auxz00_7630 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7631);
				}
				return
					((((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7630))->BgL_defz00) =
					((obj_t) BgL_vz00_4859), BUNSPEC);
			}
		}

	}



/* &lambda2539 */
	obj_t BGl_z62lambda2539z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4860, obj_t BgL_oz00_4861)
	{
		{	/* SawMill/regalloc.scm 37 */
			{
				BgL_rtl_inszf2razf2_bglt BgL_auxz00_7638;

				{
					obj_t BgL_auxz00_7639;

					{	/* SawMill/regalloc.scm 37 */
						BgL_objectz00_bglt BgL_tmpz00_7640;

						BgL_tmpz00_7640 =
							((BgL_objectz00_bglt) ((BgL_rtl_insz00_bglt) BgL_oz00_4861));
						BgL_auxz00_7639 = BGL_OBJECT_WIDENING(BgL_tmpz00_7640);
					}
					BgL_auxz00_7638 = ((BgL_rtl_inszf2razf2_bglt) BgL_auxz00_7639);
				}
				return
					(((BgL_rtl_inszf2razf2_bglt) COBJECT(BgL_auxz00_7638))->BgL_defz00);
			}
		}

	}



/* &lambda2496 */
	BgL_blockz00_bglt BGl_z62lambda2496z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4862, obj_t BgL_o1157z00_4863)
	{
		{	/* SawMill/regalloc.scm 34 */
			{	/* SawMill/regalloc.scm 34 */
				long BgL_arg2497z00_4997;

				{	/* SawMill/regalloc.scm 34 */
					obj_t BgL_arg2499z00_4998;

					{	/* SawMill/regalloc.scm 34 */
						obj_t BgL_arg2500z00_4999;

						{	/* SawMill/regalloc.scm 34 */
							long BgL_arg1816z00_5000;

							{	/* SawMill/regalloc.scm 34 */
								long BgL_arg1817z00_5001;

								{	/* SawMill/regalloc.scm 34 */
									long BgL_res2952z00_5002;

									BgL_res2952z00_5002 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_blockz00_bglt) BgL_o1157z00_4863)));
									BgL_arg1817z00_5001 = BgL_res2952z00_5002;
								}
								BgL_arg1816z00_5000 = (BgL_arg1817z00_5001 - OBJECT_TYPE);
							}
							BgL_arg2500z00_4999 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_5000);
						}
						BgL_arg2499z00_4998 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2500z00_4999);
					}
					{	/* SawMill/regalloc.scm 34 */
						long BgL_res2954z00_5003;

						{	/* SawMill/regalloc.scm 34 */
							obj_t BgL_tmpz00_7652;

							BgL_tmpz00_7652 = ((obj_t) BgL_arg2499z00_4998);
							BgL_res2954z00_5003 = BGL_CLASS_INDEX(BgL_tmpz00_7652);
						}
						BgL_arg2497z00_4997 = BgL_res2954z00_5003;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) BgL_o1157z00_4863)), BgL_arg2497z00_4997);
			}
			{	/* SawMill/regalloc.scm 34 */
				BgL_objectz00_bglt BgL_tmpz00_7658;

				BgL_tmpz00_7658 =
					((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1157z00_4863));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7658, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_o1157z00_4863));
			return ((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1157z00_4863));
		}

	}



/* &<@anonymous:2495> */
	obj_t BGl_z62zc3z04anonymousza32495ze3ze5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4864, obj_t BgL_new1156z00_4865)
	{
		{	/* SawMill/regalloc.scm 34 */
			{
				BgL_blockz00_bglt BgL_auxz00_7666;

				((((BgL_blockz00_bglt) COBJECT(
								((BgL_blockz00_bglt)
									((BgL_blockz00_bglt) BgL_new1156z00_4865))))->BgL_labelz00) =
					((int) (int) (((long) 0))), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1156z00_4865))))->BgL_predsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1156z00_4865))))->BgL_succsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt) ((BgL_blockz00_bglt)
										BgL_new1156z00_4865))))->BgL_firstz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				{
					BgL_blockzf2razf2_bglt BgL_auxz00_7681;

					{
						obj_t BgL_auxz00_7682;

						{	/* SawMill/regalloc.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_7683;

							BgL_tmpz00_7683 =
								((BgL_objectz00_bglt)
								((BgL_blockz00_bglt) BgL_new1156z00_4865));
							BgL_auxz00_7682 = BGL_OBJECT_WIDENING(BgL_tmpz00_7683);
						}
						BgL_auxz00_7681 = ((BgL_blockzf2razf2_bglt) BgL_auxz00_7682);
					}
					((((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_7681))->BgL_lastz00) =
						((obj_t) BNIL), BUNSPEC);
				}
				BgL_auxz00_7666 = ((BgL_blockz00_bglt) BgL_new1156z00_4865);
				return ((obj_t) BgL_auxz00_7666);
			}
		}

	}



/* &lambda2492 */
	BgL_blockz00_bglt BGl_z62lambda2492z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4866, obj_t BgL_o1153z00_4867)
	{
		{	/* SawMill/regalloc.scm 34 */
			{	/* SawMill/regalloc.scm 34 */
				BgL_blockzf2razf2_bglt BgL_wide1155z00_5006;

				BgL_wide1155z00_5006 =
					((BgL_blockzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_blockzf2razf2_bgl))));
				{	/* SawMill/regalloc.scm 34 */
					obj_t BgL_auxz00_7696;
					BgL_objectz00_bglt BgL_tmpz00_7692;

					BgL_auxz00_7696 = ((obj_t) BgL_wide1155z00_5006);
					BgL_tmpz00_7692 =
						((BgL_objectz00_bglt)
						((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_4867)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7692, BgL_auxz00_7696);
				}
				((BgL_objectz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_4867)));
				{	/* SawMill/regalloc.scm 34 */
					long BgL_arg2494z00_5007;

					{	/* SawMill/regalloc.scm 34 */
						long BgL_res2951z00_5008;

						BgL_res2951z00_5008 =
							BGL_CLASS_INDEX(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
						BgL_arg2494z00_5007 = BgL_res2951z00_5008;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_blockz00_bglt)
								((BgL_blockz00_bglt) BgL_o1153z00_4867))), BgL_arg2494z00_5007);
				}
				return
					((BgL_blockz00_bglt)
					((BgL_blockz00_bglt) ((BgL_blockz00_bglt) BgL_o1153z00_4867)));
			}
		}

	}



/* &lambda2487 */
	BgL_blockz00_bglt BGl_z62lambda2487z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4868, obj_t BgL_label1148z00_4869, obj_t BgL_preds1149z00_4870,
		obj_t BgL_succs1150z00_4871, obj_t BgL_first1151z00_4872,
		obj_t BgL_last1152z00_4873)
	{
		{	/* SawMill/regalloc.scm 34 */
			{	/* SawMill/regalloc.scm 34 */
				int BgL_label1148z00_5009;

				BgL_label1148z00_5009 = CINT(BgL_label1148z00_4869);
				{	/* SawMill/regalloc.scm 34 */
					BgL_blockz00_bglt BgL_new1273z00_5014;

					{	/* SawMill/regalloc.scm 34 */
						BgL_blockz00_bglt BgL_tmp1271z00_5015;
						BgL_blockzf2razf2_bglt BgL_wide1272z00_5016;

						{
							BgL_blockz00_bglt BgL_auxz00_7711;

							{	/* SawMill/regalloc.scm 34 */
								BgL_blockz00_bglt BgL_new1270z00_5017;

								BgL_new1270z00_5017 =
									((BgL_blockz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_blockz00_bgl))));
								{	/* SawMill/regalloc.scm 34 */
									long BgL_arg2491z00_5018;

									{	/* SawMill/regalloc.scm 34 */
										long BgL_res2949z00_5019;

										BgL_res2949z00_5019 =
											BGL_CLASS_INDEX(BGl_blockz00zzsaw_defsz00);
										BgL_arg2491z00_5018 = BgL_res2949z00_5019;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1270z00_5017),
										BgL_arg2491z00_5018);
								}
								{	/* SawMill/regalloc.scm 34 */
									BgL_objectz00_bglt BgL_tmpz00_7716;

									BgL_tmpz00_7716 = ((BgL_objectz00_bglt) BgL_new1270z00_5017);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7716, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1270z00_5017);
								BgL_auxz00_7711 = BgL_new1270z00_5017;
							}
							BgL_tmp1271z00_5015 = ((BgL_blockz00_bglt) BgL_auxz00_7711);
						}
						BgL_wide1272z00_5016 =
							((BgL_blockzf2razf2_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_blockzf2razf2_bgl))));
						{	/* SawMill/regalloc.scm 34 */
							obj_t BgL_auxz00_7724;
							BgL_objectz00_bglt BgL_tmpz00_7722;

							BgL_auxz00_7724 = ((obj_t) BgL_wide1272z00_5016);
							BgL_tmpz00_7722 = ((BgL_objectz00_bglt) BgL_tmp1271z00_5015);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_7722, BgL_auxz00_7724);
						}
						((BgL_objectz00_bglt) BgL_tmp1271z00_5015);
						{	/* SawMill/regalloc.scm 34 */
							long BgL_arg2488z00_5020;

							{	/* SawMill/regalloc.scm 34 */
								long BgL_res2950z00_5021;

								BgL_res2950z00_5021 =
									BGL_CLASS_INDEX
									(BGl_blockzf2razf2zzsaw_registerzd2allocationzd2);
								BgL_arg2488z00_5020 = BgL_res2950z00_5021;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1271z00_5015),
								BgL_arg2488z00_5020);
						}
						BgL_new1273z00_5014 = ((BgL_blockz00_bglt) BgL_tmp1271z00_5015);
					}
					((((BgL_blockz00_bglt) COBJECT(
									((BgL_blockz00_bglt) BgL_new1273z00_5014)))->BgL_labelz00) =
						((int) BgL_label1148z00_5009), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1273z00_5014)))->BgL_predsz00) =
						((obj_t) ((obj_t) BgL_preds1149z00_4870)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1273z00_5014)))->BgL_succsz00) =
						((obj_t) ((obj_t) BgL_succs1150z00_4871)), BUNSPEC);
					((((BgL_blockz00_bglt) COBJECT(((BgL_blockz00_bglt)
										BgL_new1273z00_5014)))->BgL_firstz00) =
						((obj_t) ((obj_t) BgL_first1151z00_4872)), BUNSPEC);
					{
						BgL_blockzf2razf2_bglt BgL_auxz00_7743;

						{
							obj_t BgL_auxz00_7744;

							{	/* SawMill/regalloc.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_7745;

								BgL_tmpz00_7745 = ((BgL_objectz00_bglt) BgL_new1273z00_5014);
								BgL_auxz00_7744 = BGL_OBJECT_WIDENING(BgL_tmpz00_7745);
							}
							BgL_auxz00_7743 = ((BgL_blockzf2razf2_bglt) BgL_auxz00_7744);
						}
						((((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_7743))->
								BgL_lastz00) =
							((obj_t) ((obj_t) BgL_last1152z00_4873)), BUNSPEC);
					}
					return BgL_new1273z00_5014;
				}
			}
		}

	}



/* &lambda2505 */
	obj_t BGl_z62lambda2505z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4874, obj_t BgL_oz00_4875, obj_t BgL_vz00_4876)
	{
		{	/* SawMill/regalloc.scm 34 */
			{
				BgL_blockzf2razf2_bglt BgL_auxz00_7751;

				{
					obj_t BgL_auxz00_7752;

					{	/* SawMill/regalloc.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_7753;

						BgL_tmpz00_7753 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4875));
						BgL_auxz00_7752 = BGL_OBJECT_WIDENING(BgL_tmpz00_7753);
					}
					BgL_auxz00_7751 = ((BgL_blockzf2razf2_bglt) BgL_auxz00_7752);
				}
				return
					((((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_7751))->BgL_lastz00) =
					((obj_t) ((obj_t) BgL_vz00_4876)), BUNSPEC);
			}
		}

	}



/* &lambda2504 */
	obj_t BGl_z62lambda2504z62zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4877, obj_t BgL_oz00_4878)
	{
		{	/* SawMill/regalloc.scm 34 */
			{
				BgL_blockzf2razf2_bglt BgL_auxz00_7760;

				{
					obj_t BgL_auxz00_7761;

					{	/* SawMill/regalloc.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_7762;

						BgL_tmpz00_7762 =
							((BgL_objectz00_bglt) ((BgL_blockz00_bglt) BgL_oz00_4878));
						BgL_auxz00_7761 = BGL_OBJECT_WIDENING(BgL_tmpz00_7762);
					}
					BgL_auxz00_7760 = ((BgL_blockzf2razf2_bglt) BgL_auxz00_7761);
				}
				return
					(((BgL_blockzf2razf2_bglt) COBJECT(BgL_auxz00_7760))->BgL_lastz00);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
				BGl_proc3065z00zzsaw_registerzd2allocationzd2, BFALSE,
				BGl_string3066z00zzsaw_registerzd2allocationzd2);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
				BGl_proc3067z00zzsaw_registerzd2allocationzd2,
				BGl_backendz00zzbackend_backendz00,
				BGl_string3068z00zzsaw_registerzd2allocationzd2);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_proc3069z00zzsaw_registerzd2allocationzd2, BFALSE,
				BGl_string3070z00zzsaw_registerzd2allocationzd2);
		}

	}



/* &rtl-size1753 */
	obj_t BGl_z62rtlzd2siza7e1753z17zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4882, obj_t BgL_oz00_4883)
	{
		{	/* SawMill/regalloc.scm 778 */
			if (PAIRP(BgL_oz00_4883))
				{	/* SawMill/regalloc.scm 780 */
					obj_t BgL_runner2616z00_5025;

					{	/* SawMill/regalloc.scm 780 */
						obj_t BgL_head1741z00_5026;

						{	/* SawMill/regalloc.scm 780 */
							obj_t BgL_arg2614z00_5027;

							BgL_arg2614z00_5027 =
								BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(CAR
								(BgL_oz00_4883));
							{	/* SawMill/regalloc.scm 780 */
								obj_t BgL_res2971z00_5028;

								BgL_res2971z00_5028 =
									MAKE_YOUNG_PAIR(BgL_arg2614z00_5027, BNIL);
								BgL_head1741z00_5026 = BgL_res2971z00_5028;
							}
						}
						{	/* SawMill/regalloc.scm 780 */
							obj_t BgL_g1744z00_5029;

							BgL_g1744z00_5029 = CDR(BgL_oz00_4883);
							{
								obj_t BgL_l1739z00_5031;
								obj_t BgL_tail1742z00_5032;

								BgL_l1739z00_5031 = BgL_g1744z00_5029;
								BgL_tail1742z00_5032 = BgL_head1741z00_5026;
							BgL_zc3z04anonymousza32609ze3z87_5030:
								if (NULLP(BgL_l1739z00_5031))
									{	/* SawMill/regalloc.scm 780 */
										BgL_runner2616z00_5025 = BgL_head1741z00_5026;
									}
								else
									{	/* SawMill/regalloc.scm 780 */
										obj_t BgL_newtail1743z00_5033;

										{	/* SawMill/regalloc.scm 780 */
											obj_t BgL_arg2612z00_5034;

											{	/* SawMill/regalloc.scm 780 */
												obj_t BgL_arg2613z00_5035;

												BgL_arg2613z00_5035 = CAR(((obj_t) BgL_l1739z00_5031));
												BgL_arg2612z00_5034 =
													BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2
													(BgL_arg2613z00_5035);
											}
											{	/* SawMill/regalloc.scm 780 */
												obj_t BgL_res2973z00_5036;

												BgL_res2973z00_5036 =
													MAKE_YOUNG_PAIR(BgL_arg2612z00_5034, BNIL);
												BgL_newtail1743z00_5033 = BgL_res2973z00_5036;
											}
										}
										SET_CDR(BgL_tail1742z00_5032, BgL_newtail1743z00_5033);
										{	/* SawMill/regalloc.scm 780 */
											obj_t BgL_arg2611z00_5037;

											BgL_arg2611z00_5037 = CDR(((obj_t) BgL_l1739z00_5031));
											{
												obj_t BgL_tail1742z00_7787;
												obj_t BgL_l1739z00_7786;

												BgL_l1739z00_7786 = BgL_arg2611z00_5037;
												BgL_tail1742z00_7787 = BgL_newtail1743z00_5033;
												BgL_tail1742z00_5032 = BgL_tail1742z00_7787;
												BgL_l1739z00_5031 = BgL_l1739z00_7786;
												goto BgL_zc3z04anonymousza32609ze3z87_5030;
											}
										}
									}
							}
						}
					}
					return BGl_zb2zb2zz__r4_numbers_6_5z00(BgL_runner2616z00_5025);
				}
			else
				{	/* SawMill/regalloc.scm 779 */
					return BINT(((long) 1));
		}}

	}



/* &type-interference!1751 */
	obj_t BGl_z62typezd2interferencez121751za2zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4884, obj_t BgL_backz00_4885, obj_t BgL_regsz00_4886)
	{
		{	/* SawMill/regalloc.scm 320 */
			{	/* SawMill/regalloc.scm 321 */
				bool_t BgL_tmpz00_7790;

				if (NULLP(((obj_t) BgL_regsz00_4886)))
					{	/* SawMill/regalloc.scm 321 */
						BgL_tmpz00_7790 = ((bool_t) 0);
					}
				else
					{
						obj_t BgL_regsz00_5041;

						BgL_regsz00_5041 = ((obj_t) BgL_regsz00_4886);
					BgL_loopz00_5040:
						{	/* SawMill/regalloc.scm 323 */
							bool_t BgL_test3311z00_7794;

							{	/* SawMill/regalloc.scm 323 */
								obj_t BgL_tmpz00_7795;

								BgL_tmpz00_7795 = CDR(((obj_t) BgL_regsz00_5041));
								BgL_test3311z00_7794 = PAIRP(BgL_tmpz00_7795);
							}
							if (BgL_test3311z00_7794)
								{	/* SawMill/regalloc.scm 324 */
									obj_t BgL_r1z00_5042;

									BgL_r1z00_5042 = CAR(((obj_t) BgL_regsz00_5041));
									{	/* SawMill/regalloc.scm 324 */
										BgL_typez00_bglt BgL_t1z00_5043;

										BgL_t1z00_5043 =
											(((BgL_rtl_regz00_bglt) COBJECT(
													((BgL_rtl_regz00_bglt) BgL_r1z00_5042)))->
											BgL_typez00);
										{	/* SawMill/regalloc.scm 325 */

											{	/* SawMill/regalloc.scm 327 */
												obj_t BgL_g1634z00_5044;

												BgL_g1634z00_5044 = CDR(((obj_t) BgL_regsz00_5041));
												{
													obj_t BgL_l1632z00_5046;

													BgL_l1632z00_5046 = BgL_g1634z00_5044;
												BgL_zc3z04anonymousza32597ze3z87_5045:
													if (PAIRP(BgL_l1632z00_5046))
														{	/* SawMill/regalloc.scm 335 */
															{	/* SawMill/regalloc.scm 328 */
																obj_t BgL_r2z00_5047;

																BgL_r2z00_5047 = CAR(BgL_l1632z00_5046);
																{	/* SawMill/regalloc.scm 328 */
																	BgL_typez00_bglt BgL_t2z00_5048;

																	BgL_t2z00_5048 =
																		(((BgL_rtl_regz00_bglt) COBJECT(
																				((BgL_rtl_regz00_bglt)
																					BgL_r2z00_5047)))->BgL_typez00);
																	{	/* SawMill/regalloc.scm 329 */
																		bool_t BgL_test3313z00_7810;

																		if (
																			(((obj_t) BgL_t1z00_5043) ==
																				((obj_t) BgL_t2z00_5048)))
																			{	/* SawMill/regalloc.scm 329 */
																				BgL_test3313z00_7810 = ((bool_t) 1);
																			}
																		else
																			{	/* SawMill/regalloc.scm 330 */
																				bool_t BgL_test3315z00_7815;

																				if (
																					(((obj_t) BgL_t1z00_5043) ==
																						BGl_za2objza2z00zztype_cachez00))
																					{	/* SawMill/regalloc.scm 330 */
																						BgL_test3315z00_7815 =
																							BGl_bigloozd2typezf3z21zztype_typez00
																							(BgL_t2z00_5048);
																					}
																				else
																					{	/* SawMill/regalloc.scm 330 */
																						BgL_test3315z00_7815 = ((bool_t) 0);
																					}
																				if (BgL_test3315z00_7815)
																					{	/* SawMill/regalloc.scm 330 */
																						BgL_test3313z00_7810 = ((bool_t) 1);
																					}
																				else
																					{	/* SawMill/regalloc.scm 330 */
																						if (
																							(((obj_t) BgL_t2z00_5048) ==
																								BGl_za2objza2z00zztype_cachez00))
																							{	/* SawMill/regalloc.scm 332 */
																								BgL_test3313z00_7810 =
																									BGl_bigloozd2typezf3z21zztype_typez00
																									(BgL_t1z00_5043);
																							}
																						else
																							{	/* SawMill/regalloc.scm 332 */
																								BgL_test3313z00_7810 =
																									((bool_t) 0);
																							}
																					}
																			}
																		if (BgL_test3313z00_7810)
																			{	/* SawMill/regalloc.scm 329 */
																				((bool_t) 0);
																			}
																		else
																			{	/* SawMill/regalloc.scm 329 */
																				BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
																					(BgL_r1z00_5042, BgL_r2z00_5047);
																			}
																	}
																}
															}
															{
																obj_t BgL_l1632z00_7825;

																BgL_l1632z00_7825 = CDR(BgL_l1632z00_5046);
																BgL_l1632z00_5046 = BgL_l1632z00_7825;
																goto BgL_zc3z04anonymousza32597ze3z87_5045;
															}
														}
													else
														{	/* SawMill/regalloc.scm 335 */
															((bool_t) 1);
														}
												}
											}
											{	/* SawMill/regalloc.scm 336 */
												obj_t BgL_arg2604z00_5049;

												BgL_arg2604z00_5049 = CDR(((obj_t) BgL_regsz00_5041));
												{
													obj_t BgL_regsz00_7829;

													BgL_regsz00_7829 = BgL_arg2604z00_5049;
													BgL_regsz00_5041 = BgL_regsz00_7829;
													goto BgL_loopz00_5040;
												}
											}
										}
									}
								}
							else
								{	/* SawMill/regalloc.scm 323 */
									BgL_tmpz00_7790 = ((bool_t) 0);
								}
						}
					}
				return BBOOL(BgL_tmpz00_7790);
			}
		}

	}



/* &protect-interference1749 */
	obj_t BGl_z62protectzd2interference1749zb0zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4887, obj_t BgL_oz00_4888, obj_t BgL_regsz00_4889)
	{
		{	/* SawMill/regalloc.scm 216 */
			{	/* SawMill/regalloc.scm 218 */
				bool_t BgL_tmpz00_7832;

				{
					obj_t BgL_oz00_5057;
					obj_t BgL_oz00_5053;

					{
						obj_t BgL_l1599z00_5065;

						BgL_l1599z00_5065 = BgL_oz00_4888;
					BgL_zc3z04anonymousza32572ze3z87_5064:
						if (PAIRP(BgL_l1599z00_5065))
							{	/* SawMill/regalloc.scm 224 */
								BgL_oz00_5053 = CAR(BgL_l1599z00_5065);
								{	/* SawMill/regalloc.scm 223 */
									obj_t BgL_g1598z00_5054;

									BgL_g1598z00_5054 =
										(((BgL_blockz00_bglt) COBJECT(
												((BgL_blockz00_bglt) BgL_oz00_5053)))->BgL_firstz00);
									{
										obj_t BgL_l1596z00_5056;

										BgL_l1596z00_5056 = BgL_g1598z00_5054;
									BgL_zc3z04anonymousza32586ze3z87_5055:
										if (PAIRP(BgL_l1596z00_5056))
											{	/* SawMill/regalloc.scm 223 */
												BgL_oz00_5057 = CAR(BgL_l1596z00_5056);
												{	/* SawMill/regalloc.scm 219 */
													bool_t BgL_test3320z00_7839;

													{	/* SawMill/regalloc.scm 219 */
														BgL_rtl_funz00_bglt BgL_arg2584z00_5058;

														BgL_arg2584z00_5058 =
															(((BgL_rtl_insz00_bglt) COBJECT(
																	((BgL_rtl_insz00_bglt) BgL_oz00_5057)))->
															BgL_funz00);
														{	/* SawMill/regalloc.scm 219 */
															bool_t BgL_res2961z00_5059;

															BgL_res2961z00_5059 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg2584z00_5058),
																BGl_rtl_protectz00zzsaw_defsz00);
															BgL_test3320z00_7839 = BgL_res2961z00_5059;
														}
													}
													if (BgL_test3320z00_7839)
														{
															obj_t BgL_l1594z00_5061;

															BgL_l1594z00_5061 = ((obj_t) BgL_regsz00_4889);
														BgL_zc3z04anonymousza32579ze3z87_5060:
															if (PAIRP(BgL_l1594z00_5061))
																{	/* SawMill/regalloc.scm 221 */
																	{	/* SawMill/regalloc.scm 221 */
																		obj_t BgL_rz00_5062;

																		BgL_rz00_5062 = CAR(BgL_l1594z00_5061);
																		{	/* SawMill/regalloc.scm 221 */
																			obj_t BgL_arg2581z00_5063;

																			BgL_arg2581z00_5063 =
																				(((BgL_rtl_insz00_bglt) COBJECT(
																						((BgL_rtl_insz00_bglt)
																							BgL_oz00_5057)))->BgL_destz00);
																			BGl_interferezd2regz12zc0zzsaw_registerzd2allocationzd2
																				(BgL_arg2581z00_5063, BgL_rz00_5062);
																		}
																	}
																	{
																		obj_t BgL_l1594z00_7850;

																		BgL_l1594z00_7850 = CDR(BgL_l1594z00_5061);
																		BgL_l1594z00_5061 = BgL_l1594z00_7850;
																		goto BgL_zc3z04anonymousza32579ze3z87_5060;
																	}
																}
															else
																{	/* SawMill/regalloc.scm 221 */
																	((bool_t) 1);
																}
														}
													else
														{	/* SawMill/regalloc.scm 219 */
															((bool_t) 0);
														}
												}
												{
													obj_t BgL_l1596z00_7854;

													BgL_l1596z00_7854 = CDR(BgL_l1596z00_5056);
													BgL_l1596z00_5056 = BgL_l1596z00_7854;
													goto BgL_zc3z04anonymousza32586ze3z87_5055;
												}
											}
										else
											{	/* SawMill/regalloc.scm 223 */
												((bool_t) 1);
											}
									}
								}
								{
									obj_t BgL_l1599z00_7857;

									BgL_l1599z00_7857 = CDR(BgL_l1599z00_5065);
									BgL_l1599z00_5065 = BgL_l1599z00_7857;
									goto BgL_zc3z04anonymousza32572ze3z87_5064;
								}
							}
						else
							{	/* SawMill/regalloc.scm 224 */
								BgL_tmpz00_7832 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_7832);
			}
		}

	}



/* protect-interference! */
	obj_t BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2(obj_t
		BgL_oz00_74, obj_t BgL_regsz00_75)
	{
		{	/* SawMill/regalloc.scm 216 */
			if (BGL_OBJECTP(BgL_oz00_74))
				{	/* SawMill/regalloc.scm 216 */
					obj_t BgL_method1750z00_3434;

					{	/* SawMill/regalloc.scm 216 */
						obj_t BgL_res2985z00_4650;

						{	/* SawMill/regalloc.scm 216 */
							long BgL_objzd2classzd2numz00_4615;

							{	/* SawMill/regalloc.scm 216 */
								long BgL_res2975z00_4618;

								BgL_res2975z00_4618 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_74));
								BgL_objzd2classzd2numz00_4615 = BgL_res2975z00_4618;
							}
							{	/* SawMill/regalloc.scm 216 */
								obj_t BgL_arg1813z00_4616;

								BgL_arg1813z00_4616 =
									PROCEDURE_REF
									(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)));
								{	/* SawMill/regalloc.scm 216 */
									int BgL_offsetz00_4620;

									BgL_offsetz00_4620 = (int) (BgL_objzd2classzd2numz00_4615);
									{	/* SawMill/regalloc.scm 216 */
										long BgL_offsetz00_4621;

										BgL_offsetz00_4621 =
											((long) (BgL_offsetz00_4620) - OBJECT_TYPE);
										{	/* SawMill/regalloc.scm 216 */
											long BgL_modz00_4622;

											BgL_modz00_4622 =
												(BgL_offsetz00_4621 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* SawMill/regalloc.scm 216 */
												long BgL_restz00_4624;

												BgL_restz00_4624 =
													(BgL_offsetz00_4621 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* SawMill/regalloc.scm 216 */

													{	/* SawMill/regalloc.scm 216 */
														obj_t BgL_bucketz00_4626;

														BgL_bucketz00_4626 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_4616), BgL_modz00_4622);
														BgL_res2985z00_4650 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4626), BgL_restz00_4624);
						}}}}}}}}
						BgL_method1750z00_3434 = BgL_res2985z00_4650;
					}
					return
						PROCEDURE_ENTRY(BgL_method1750z00_3434) (BgL_method1750z00_3434,
						BgL_oz00_74, BgL_regsz00_75, BEOA);
				}
			else
				{	/* SawMill/regalloc.scm 216 */
					obj_t BgL_fun2618z00_3435;

					BgL_fun2618z00_3435 =
						PROCEDURE_REF
						(BGl_protectzd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
						(int) (((long) 0)));
					return PROCEDURE_ENTRY(BgL_fun2618z00_3435) (BgL_fun2618z00_3435,
						BgL_oz00_74, BgL_regsz00_75, BEOA);
				}
		}

	}



/* &protect-interference! */
	obj_t BGl_z62protectzd2interferencez12za2zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4890, obj_t BgL_oz00_4891, obj_t BgL_regsz00_4892)
	{
		{	/* SawMill/regalloc.scm 216 */
			return
				BGl_protectzd2interferencez12zc0zzsaw_registerzd2allocationzd2
				(BgL_oz00_4891, BgL_regsz00_4892);
		}

	}



/* type-interference! */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2
		(BgL_backendz00_bglt BgL_backz00_81, obj_t BgL_regsz00_82)
	{
		{	/* SawMill/regalloc.scm 320 */
			{	/* SawMill/regalloc.scm 320 */
				obj_t BgL_method1752z00_3436;

				{	/* SawMill/regalloc.scm 320 */
					obj_t BgL_res2997z00_4688;

					{	/* SawMill/regalloc.scm 320 */
						long BgL_objzd2classzd2numz00_4653;

						{	/* SawMill/regalloc.scm 320 */
							long BgL_res2987z00_4656;

							BgL_res2987z00_4656 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_backz00_81));
							BgL_objzd2classzd2numz00_4653 = BgL_res2987z00_4656;
						}
						{	/* SawMill/regalloc.scm 320 */
							obj_t BgL_arg1813z00_4654;

							BgL_arg1813z00_4654 =
								PROCEDURE_REF
								(BGl_typezd2interferencez12zd2envz12zzsaw_registerzd2allocationzd2,
								(int) (((long) 1)));
							{	/* SawMill/regalloc.scm 320 */
								int BgL_offsetz00_4658;

								BgL_offsetz00_4658 = (int) (BgL_objzd2classzd2numz00_4653);
								{	/* SawMill/regalloc.scm 320 */
									long BgL_offsetz00_4659;

									BgL_offsetz00_4659 =
										((long) (BgL_offsetz00_4658) - OBJECT_TYPE);
									{	/* SawMill/regalloc.scm 320 */
										long BgL_modz00_4660;

										BgL_modz00_4660 =
											(BgL_offsetz00_4659 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* SawMill/regalloc.scm 320 */
											long BgL_restz00_4662;

											BgL_restz00_4662 =
												(BgL_offsetz00_4659 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* SawMill/regalloc.scm 320 */

												{	/* SawMill/regalloc.scm 320 */
													obj_t BgL_bucketz00_4664;

													BgL_bucketz00_4664 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_4654), BgL_modz00_4660);
													BgL_res2997z00_4688 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_4664), BgL_restz00_4662);
					}}}}}}}}
					BgL_method1752z00_3436 = BgL_res2997z00_4688;
				}
				return
					PROCEDURE_ENTRY(BgL_method1752z00_3436) (BgL_method1752z00_3436,
					((obj_t) BgL_backz00_81), BgL_regsz00_82, BEOA);
			}
		}

	}



/* &type-interference! */
	obj_t BGl_z62typezd2interferencez12za2zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4893, obj_t BgL_backz00_4894, obj_t BgL_regsz00_4895)
	{
		{	/* SawMill/regalloc.scm 320 */
			return
				BGl_typezd2interferencez12zc0zzsaw_registerzd2allocationzd2(
				((BgL_backendz00_bglt) BgL_backz00_4894), BgL_regsz00_4895);
		}

	}



/* rtl-size */
	obj_t BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(obj_t BgL_oz00_107)
	{
		{	/* SawMill/regalloc.scm 778 */
			if (BGL_OBJECTP(BgL_oz00_107))
				{	/* SawMill/regalloc.scm 778 */
					obj_t BgL_method1754z00_3438;

					{	/* SawMill/regalloc.scm 778 */
						obj_t BgL_res3009z00_4726;

						{	/* SawMill/regalloc.scm 778 */
							long BgL_objzd2classzd2numz00_4691;

							{	/* SawMill/regalloc.scm 778 */
								long BgL_res2999z00_4694;

								BgL_res2999z00_4694 =
									BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_oz00_107));
								BgL_objzd2classzd2numz00_4691 = BgL_res2999z00_4694;
							}
							{	/* SawMill/regalloc.scm 778 */
								obj_t BgL_arg1813z00_4692;

								BgL_arg1813z00_4692 =
									PROCEDURE_REF
									(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
									(int) (((long) 1)));
								{	/* SawMill/regalloc.scm 778 */
									int BgL_offsetz00_4696;

									BgL_offsetz00_4696 = (int) (BgL_objzd2classzd2numz00_4691);
									{	/* SawMill/regalloc.scm 778 */
										long BgL_offsetz00_4697;

										BgL_offsetz00_4697 =
											((long) (BgL_offsetz00_4696) - OBJECT_TYPE);
										{	/* SawMill/regalloc.scm 778 */
											long BgL_modz00_4698;

											BgL_modz00_4698 =
												(BgL_offsetz00_4697 >>
												(int) ((long) ((int) (((long) 4)))));
											{	/* SawMill/regalloc.scm 778 */
												long BgL_restz00_4700;

												BgL_restz00_4700 =
													(BgL_offsetz00_4697 &
													(long) (
														(int) (
															((long) (
																	(int) (
																		(((long) 1) <<
																			(int) (
																				(long) (
																					(int) (((long) 4))))))) -
																((long) 1)))));
												{	/* SawMill/regalloc.scm 778 */

													{	/* SawMill/regalloc.scm 778 */
														obj_t BgL_bucketz00_4702;

														BgL_bucketz00_4702 =
															VECTOR_REF(
															((obj_t) BgL_arg1813z00_4692), BgL_modz00_4698);
														BgL_res3009z00_4726 =
															VECTOR_REF(
															((obj_t) BgL_bucketz00_4702), BgL_restz00_4700);
						}}}}}}}}
						BgL_method1754z00_3438 = BgL_res3009z00_4726;
					}
					return
						PROCEDURE_ENTRY(BgL_method1754z00_3438) (BgL_method1754z00_3438,
						BgL_oz00_107, BEOA);
				}
			else
				{	/* SawMill/regalloc.scm 778 */
					obj_t BgL_fun2620z00_3439;

					BgL_fun2620z00_3439 =
						PROCEDURE_REF
						(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
						(int) (((long) 0)));
					return PROCEDURE_ENTRY(BgL_fun2620z00_3439) (BgL_fun2620z00_3439,
						BgL_oz00_107, BEOA);
				}
		}

	}



/* &rtl-size */
	obj_t BGl_z62rtlzd2siza7ez17zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4896, obj_t BgL_oz00_4897)
	{
		{	/* SawMill/regalloc.scm 778 */
			return BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(BgL_oz00_4897);
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_blockz00zzsaw_defsz00,
				BGl_proc3071z00zzsaw_registerzd2allocationzd2,
				BGl_string3072z00zzsaw_registerzd2allocationzd2);
			BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_rtlzd2siza7ezd2envza7zzsaw_registerzd2allocationzd2,
				BGl_rtl_insz00zzsaw_defsz00,
				BGl_proc3073z00zzsaw_registerzd2allocationzd2,
				BGl_string3072z00zzsaw_registerzd2allocationzd2);
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_dumpzd2envzd2zzsaw_defsz00,
				BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2,
				BGl_proc3074z00zzsaw_registerzd2allocationzd2,
				BGl_string3075z00zzsaw_registerzd2allocationzd2);
		}

	}



/* &dump-rtl_ins/ra1760 */
	obj_t BGl_z62dumpzd2rtl_inszf2ra1760z42zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4905, obj_t BgL_oz00_4906, obj_t BgL_pz00_4907,
		obj_t BgL_mz00_4908)
	{
		{	/* SawMill/regalloc.scm 795 */
			{

				{	/* SawMill/regalloc.scm 795 */
					obj_t BgL_nextzd2method1759zd2_5068;

					BgL_nextzd2method1759zd2_5068 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_rtl_insz00_bglt) BgL_oz00_4906)),
						BGl_dumpzd2envzd2zzsaw_defsz00,
						BGl_rtl_inszf2razf2zzsaw_registerzd2allocationzd2);
					PROCEDURE_ENTRY(BgL_nextzd2method1759zd2_5068)
						(BgL_nextzd2method1759zd2_5068,
						((obj_t) ((BgL_rtl_insz00_bglt) BgL_oz00_4906)), BgL_pz00_4907,
						BgL_mz00_4908, BEOA);
				}
				return BNIL;
			}
		}

	}



/* &rtl-size-rtl_ins1758 */
	obj_t BGl_z62rtlzd2siza7ezd2rtl_ins1758zc5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4909, obj_t BgL_oz00_4910)
	{
		{	/* SawMill/regalloc.scm 788 */
			{	/* SawMill/regalloc.scm 789 */
				long BgL_tmpz00_7985;

				{	/* SawMill/regalloc.scm 790 */
					obj_t BgL_arg2622z00_5070;

					BgL_arg2622z00_5070 =
						BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(
						(((BgL_rtl_insz00_bglt) COBJECT(
									((BgL_rtl_insz00_bglt) BgL_oz00_4910)))->BgL_argsz00));
					BgL_tmpz00_7985 = (((long) 1) + (long) CINT(BgL_arg2622z00_5070));
				}
				return BINT(BgL_tmpz00_7985);
			}
		}

	}



/* &rtl-size-block1756 */
	obj_t BGl_z62rtlzd2siza7ezd2block1756zc5zzsaw_registerzd2allocationzd2(obj_t
		BgL_envz00_4911, obj_t BgL_oz00_4912)
	{
		{	/* SawMill/regalloc.scm 784 */
			return
				BGl_rtlzd2siza7ez75zzsaw_registerzd2allocationzd2(
				(((BgL_blockz00_bglt) COBJECT(
							((BgL_blockz00_bglt) BgL_oz00_4912)))->BgL_firstz00));
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_registerzd2allocationzd2()
	{
		{	/* SawMill/regalloc.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_libz00(((long) 57049159),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_node2rtlz00(((long) 20930013),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			BGl_modulezd2initializa7ationz75zzsaw_regsetz00(((long) 454038717),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
			return
				BGl_modulezd2initializa7ationz75zzsaw_regutilsz00(((long) 237915310),
				BSTRING_TO_STRING(BGl_string3076z00zzsaw_registerzd2allocationzd2));
		}

	}

#ifdef __cplusplus
}
#endif
