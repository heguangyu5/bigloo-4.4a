/*===========================================================================*/
/*   (SawJvm/funcall.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/funcall.scm) */
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

	typedef struct BgL_varz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_variablez00_bgl *BgL_variablez00;
	}             *BgL_varz00_bglt;

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

	typedef struct BgL_jvmz00_bgl
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
		obj_t BgL_qnamez00;
		obj_t BgL_classesz00;
		obj_t BgL_currentzd2classzd2;
		obj_t BgL_declarationsz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_codez00;
		obj_t BgL_lightzd2funcallszd2;
		obj_t BgL_inlinez00;
	}             *BgL_jvmz00_bglt;

	typedef struct BgL_rtl_lightfuncallz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		obj_t BgL_namez00;
		obj_t BgL_funsz00;
		obj_t BgL_rettypez00;
	}                          *BgL_rtl_lightfuncallz00_bglt;

	typedef struct BgL_indexedz00_bgl
	{
		int BgL_indexz00;
	}                 *BgL_indexedz00_bglt;


	static BgL_typez00_bglt BGl_z62indexedzd2typezb0zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62indexedzd2initzb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2removablezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00();
	static obj_t BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2fastzd2alphaz00zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_getzd2labsze70z35zzsaw_jvm_funcallz00(long, obj_t, obj_t);
	static obj_t BGl_getzd2labsze71z35zzsaw_jvm_funcallz00(long, obj_t, obj_t);
	static obj_t BGl_getzd2labsze72z35zzsaw_jvm_funcallz00(long, obj_t);
	extern obj_t BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt);
	extern obj_t BGl_sfunz00zzast_varz00;
	static bool_t BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(obj_t);
	static BgL_valuez00_bglt BGl_z62indexedzd2valuezb0zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_z62indexedzd2userzf3z43zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2evalzf3zd2setz12ze1zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		bool_t);
	static BgL_globalz00_bglt BGl_z62makezd2indexedzb0zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_2zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_funcallz00();
	BGL_IMPORT bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2namezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_typez00_bglt);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62indexedzd2nilzb0zzsaw_jvm_funcallz00(obj_t);
	static obj_t
		BGl_z62indexedzd2evaluablezf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_funcallz00();
	static obj_t BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt, long,
		obj_t);
	static obj_t BGl_z62indexedzd2removablezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_indexedzd2evalzf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2initzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_funcallzd2lightzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t
		BGl_z62indexedzd2fastzd2alphazd2setz12za2zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62indexedzd2pragmazb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32073ze3ze5zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62indexedzd2accesszb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static bool_t BGl_neededzf3ze70z14zzsaw_jvm_funcallz00(long, BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2occurrencewzd2setz12z12zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2typezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		BgL_typez00_bglt);
	static BgL_globalz00_bglt BGl_z62lambda2127z62zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62indexedzd2occurrencewzb0zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62lambda2130z62zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62lambda2133z62zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2srczd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt, long,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2141z62zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2142z62zzsaw_jvm_funcallz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_funcallz00();
	static obj_t BGl_z62indexedzd2importzd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2jvmzd2typezd2namezd2setz12z12zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2typeze70z35zzsaw_jvm_funcallz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL long
		BGl_indexedzd2occurrencewzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	extern obj_t BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62indexedzd2pragmazd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static bool_t
		BGl_funcallzd2lightzd2switchz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2libraryzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_z62modulezd2lightzd2funcallz62zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2modulezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2occurrencezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		long);
	static obj_t BGl_z62indexedzd2aliaszd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2lightzd2funcallz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62indexedzd2accesszd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2importzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_z62indexedzd2evalzf3z43zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2importzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2aliaszd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31946ze3ze5zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2pragmazd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_indexedzd2indexzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_xx_globalzd2arityze70z35zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_z62indexedzd2evaluablezf3z43zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_z62indexedzd2indexzd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2removablezb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_funcallz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2accesszd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t
		BGl_z62indexedzd2occurrencewzd2setz12z70zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32132ze3ze5zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62modulezd2funcallzf2applyz42zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2namezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_z62indexedzd2valuezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2modulezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2aliaszd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	extern obj_t BGl_labelz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62indexedzd2occurrencezb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static bool_t
		BGl_iszd2lightzd2procedurezf3zf3zzsaw_jvm_funcallz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_forzd2eachzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_zd2zd2zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_globalzd2entryzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2idzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2jvmzd2typezd2namezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t
		BGl_z62indexedzd2occurrencezd2setz12z70zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t);
	extern bool_t BGl_globalzd2optionalzf3z21zzast_varz00(obj_t);
	static obj_t BGl_z62indexedzf3z91zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_z62indexedzd2userzf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2idzb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_nameze70ze7zzsaw_jvm_funcallz00(long);
	BGL_EXPORTED_DECL BgL_valuez00_bglt
		BGl_indexedzd2valuezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_indexedzd2userzf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_indexedzd2typezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_indexedz00zzsaw_jvm_funcallz00 = BUNSPEC;
	extern bool_t BGl_globalzd2keyzf3z21zzast_varz00(obj_t);
	BGL_IMPORT obj_t BGl_sortz00zz__r4_vectors_6_8z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2initzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_indexedzd2evaluablezf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_libz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2indexzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		int);
	static obj_t BGl_z62indexedzd2jvmzd2typezd2namezb0zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	static obj_t BGl_z62indexedzd2namezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2modulezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_Lze70ze7zzsaw_jvm_funcallz00(long);
	BGL_IMPORT obj_t BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00(long,
		long);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2srczd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_z62indexedzd2fastzd2alphaz62zzsaw_jvm_funcallz00(obj_t,
		obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2pragmazd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_funcallz00();
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2accesszd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00();
	extern obj_t BGl_globalzd2arityzd2zzbackend_cplibz00(BgL_globalz00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00();
	static obj_t BGl_z62indexedzd2evalzf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2aliaszb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t, obj_t, BgL_typez00_bglt,
		BgL_valuez00_bglt, obj_t, obj_t, obj_t, long, long, bool_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int);
	static obj_t BGl_z62indexedzd2indexzb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_z62indexedzd2modulezb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2valuezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		BgL_valuez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2removablezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	static obj_t BGl_z62indexedzd2namezb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	extern obj_t BGl_valuez00zzast_varz00;
	static obj_t BGl_z62indexedzd2srczd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_indexedzf3zf3zzsaw_jvm_funcallz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2evaluablezf3zd2setz12ze1zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt, bool_t);
	static obj_t
		BGl_z62indexedzd2jvmzd2typezd2namezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2initzd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_indexedzd2occurrencezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt);
	extern obj_t BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_z62indexedzd2libraryzd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62indexedzd2importzb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_getzd2procedureszd2zzsaw_proceduresz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62indexedzd2srczb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	extern obj_t BGl_declarezd2methodzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2libraryzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		obj_t);
	static obj_t BGl_z62indexedzd2libraryzb0zzsaw_jvm_funcallz00(obj_t, obj_t);
	static obj_t BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3zd3z30zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2userzf3zd2setz12ze1zzsaw_jvm_funcallz00(BgL_globalz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_indexedzd2fastzd2alphazd2setz12zc0zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt, obj_t);
	static obj_t BGl_z62indexedzd2typezd2setz12z70zzsaw_jvm_funcallz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[53];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2funcallzf2applyzd2envzf2zzsaw_jvm_funcallz00,
		BgL_bgl_za762moduleza7d2func2376z00,
		BGl_z62modulezd2funcallzf2applyz42zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2userzf3zd2envzf3zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2use2377z00,
		BGl_z62indexedzd2userzf3z43zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2fastzd2alphazd2setz12zd2envz12zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2fas2378z00,
		BGl_z62indexedzd2fastzd2alphazd2setz12za2zzsaw_jvm_funcallz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2occurrencezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2occ2379z00,
		BGl_z62indexedzd2occurrencezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2pragmazd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2pra2380z00,
		BGl_z62indexedzd2pragmazd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2removablezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2rem2381z00,
		BGl_z62indexedzd2removablezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2namezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2nam2382z00,
		BGl_z62indexedzd2namezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2357z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2357za700za7za7s2383za7, "unknown type", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2indexedzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762makeza7d2indexe2384z00,
		BGl_z62makezd2indexedzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 21);
	      DEFINE_STRING(BGl_string2358z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2358za700za7za7s2385za7, "funcall light", 13);
	      DEFINE_STRING(BGl_string2359z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2359za700za7za7s2386za7, "internal error", 14);
	      DEFINE_STRING(BGl_string2360z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2360za700za7za7s2387za7, "L", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2libraryzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2lib2388z00,
		BGl_z62indexedzd2libraryzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2361z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2361za700za7za7s2389za7, "funcall", 7);
	      DEFINE_STRING(BGl_string2362z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2362za700za7za7s2390za7, "p", 1);
	      DEFINE_STRING(BGl_string2363z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2363za700za7za7s2391za7, "make_vector", 11);
	      DEFINE_STRING(BGl_string2370z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2370za700za7za7s2392za7, "", 0);
	      DEFINE_STRING(BGl_string2371z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2371za700za7za7s2393za7, "saw_jvm_funcall", 15);
	      DEFINE_STRING(BGl_string2372z00zzsaw_jvm_funcallz00,
		BgL_bgl_string2372za700za7za7s2394za7,
		"_ saw_jvm_funcall indexed index (invokestatic list_to_vector) (astore l) (dup) (getfield cdr) (getfield car) (checkcast pair) (invokespecial papply) (aload l) (this l) apply (getstatic *nil*) invokestatic putstatic getstatic (pop) (invokestatic cons) invokespecial (aload this) this light checkcast dload fload lload iload (athrow) (invokestatic fail) tableswitch err (areturn) (dreturn) double (freturn) float (lreturn) long (ireturn) int short char byte boolean (return) void compile-bad-type (getfield procindex) aload (private static) me ",
		542);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2evaluablezf3zd2envzf3zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2eva2395z00,
		BGl_z62indexedzd2evaluablezf3z43zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2importzd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2imp2396z00,
		BGl_z62indexedzd2importzd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2namezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2nam2397z00,
		BGl_z62indexedzd2namezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2modulezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2mod2398z00,
		BGl_z62indexedzd2modulezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2modulezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2mod2399z00,
		BGl_z62indexedzd2modulezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2libraryzd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2lib2400z00,
		BGl_z62indexedzd2libraryzd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2typezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2typ2401z00,
		BGl_z62indexedzd2typezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2occurrencewzd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2occ2402z00,
		BGl_z62indexedzd2occurrencewzd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2indexzd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ind2403z00,
		BGl_z62indexedzd2indexzd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2aliaszd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ali2404z00,
		BGl_z62indexedzd2aliaszd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2accesszd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2acc2405z00,
		BGl_z62indexedzd2accesszb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzf3zd2envz21zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7f3za7912406za7,
		BGl_z62indexedzf3z91zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2typezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2typ2407z00,
		BGl_z62indexedzd2typezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2initzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ini2408z00,
		BGl_z62indexedzd2initzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2indexzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ind2409z00,
		BGl_z62indexedzd2indexzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2initzd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ini2410z00,
		BGl_z62indexedzd2initzd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2fastzd2alphazd2envzd2zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2fas2411z00,
		BGl_z62indexedzd2fastzd2alphaz62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2evalzf3zd2setz12zd2envz33zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2eva2412z00,
		BGl_z62indexedzd2evalzf3zd2setz12z83zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2aliaszd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2ali2413z00,
		BGl_z62indexedzd2aliaszb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2importzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2imp2414z00,
		BGl_z62indexedzd2importzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2nilzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2nil2415z00,
		BGl_z62indexedzd2nilzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2364z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762lambda2142za7622416z00,
		BGl_z62lambda2142z62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2365z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762lambda2141za7622417z00,
		BGl_z62lambda2141z62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762lambda2133za7622418z00,
		BGl_z62lambda2133z62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2367z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762za7c3za704anonymo2419za7,
		BGl_z62zc3z04anonymousza32132ze3ze5zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2368z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762lambda2130za7622420z00,
		BGl_z62lambda2130z62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2369z00zzsaw_jvm_funcallz00,
		BgL_bgl_za762lambda2127za7622421z00,
		BGl_z62lambda2127z62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2srczd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2src2422z00,
		BGl_z62indexedzd2srczb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2pragmazd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2pra2423z00,
		BGl_z62indexedzd2pragmazb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2valuezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2val2424z00,
		BGl_z62indexedzd2valuezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2accesszd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2acc2425z00,
		BGl_z62indexedzd2accesszd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2jvmzd2typezd2namezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2jvm2426z00,
		BGl_z62indexedzd2jvmzd2typezd2namezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2occurrencewzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2occ2427z00,
		BGl_z62indexedzd2occurrencewzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2lightzd2funcallzd2envzd2zzsaw_jvm_funcallz00,
		BgL_bgl_za762moduleza7d2ligh2428z00,
		BGl_z62modulezd2lightzd2funcallz62zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2srczd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2src2429z00,
		BGl_z62indexedzd2srczd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2removablezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2rem2430z00,
		BGl_z62indexedzd2removablezd2setz12z70zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2userzf3zd2setz12zd2envz33zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2use2431z00,
		BGl_z62indexedzd2userzf3zd2setz12z83zzsaw_jvm_funcallz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2occurrencezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2occ2432z00,
		BGl_z62indexedzd2occurrencezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2evaluablezf3zd2setz12zd2envz33zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2eva2433z00,
		BGl_z62indexedzd2evaluablezf3zd2setz12z83zzsaw_jvm_funcallz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_indexedzd2idzd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2idza72434za7,
		BGl_z62indexedzd2idzb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2valuezd2envz00zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2val2435z00,
		BGl_z62indexedzd2valuezb0zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_zc3zd2envz11zz__r4_numbers_6_5z00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2evalzf3zd2envzf3zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2eva2436z00,
		BGl_z62indexedzd2evalzf3z43zzsaw_jvm_funcallz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_indexedzd2jvmzd2typezd2namezd2setz12zd2envzc0zzsaw_jvm_funcallz00,
		BgL_bgl_za762indexedza7d2jvm2437z00,
		BGl_z62indexedzd2jvmzd2typezd2namezd2setz12z70zzsaw_jvm_funcallz00, 0L,
		BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00));
		     ADD_ROOT((void *) (&BGl_indexedz00zzsaw_jvm_funcallz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_funcallz00(long
		BgL_checksumz00_4290, char *BgL_fromz00_4291)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_funcallz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_funcallz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00();
					BGl_cnstzd2initzd2zzsaw_jvm_funcallz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00();
					BGl_objectzd2initzd2zzsaw_jvm_funcallz00();
					return BGl_methodzd2initzd2zzsaw_jvm_funcallz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_funcall");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"saw_jvm_funcall");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			{	/* SawJvm/funcall.scm 1 */
				obj_t BgL_cportz00_4216;

				{	/* SawJvm/funcall.scm 1 */
					obj_t BgL_stringz00_4224;

					BgL_stringz00_4224 = BGl_string2372z00zzsaw_jvm_funcallz00;
					{	/* SawJvm/funcall.scm 1 */
						obj_t BgL_startz00_4225;

						BgL_startz00_4225 = BINT(((long) 0));
						{	/* SawJvm/funcall.scm 1 */
							obj_t BgL_endz00_4226;

							BgL_endz00_4226 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_4224)));
							{	/* SawJvm/funcall.scm 1 */

								BgL_cportz00_4216 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_4224, BgL_startz00_4225, BgL_endz00_4226);
				}}}}
				{
					long BgL_iz00_4217;

					BgL_iz00_4217 = ((long) 52);
				BgL_loopz00_4218:
					if ((BgL_iz00_4217 == ((long) -1)))
						{	/* SawJvm/funcall.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/funcall.scm 1 */
							{	/* SawJvm/funcall.scm 1 */
								obj_t BgL_arg2374z00_4220;

								{	/* SawJvm/funcall.scm 1 */

									{	/* SawJvm/funcall.scm 1 */
										obj_t BgL_locationz00_4222;

										BgL_locationz00_4222 = BBOOL(((bool_t) 0));
										{	/* SawJvm/funcall.scm 1 */

											BgL_arg2374z00_4220 =
												BGl_readz00zz__readerz00(BgL_cportz00_4216,
												BgL_locationz00_4222);
										}
									}
								}
								{	/* SawJvm/funcall.scm 1 */
									int BgL_tmpz00_4322;

									BgL_tmpz00_4322 = (int) (BgL_iz00_4217);
									CNST_TABLE_SET(BgL_tmpz00_4322, BgL_arg2374z00_4220);
							}}
							{	/* SawJvm/funcall.scm 1 */
								int BgL_auxz00_4223;

								BgL_auxz00_4223 = (int) ((BgL_iz00_4217 - ((long) 1)));
								{
									long BgL_iz00_4327;

									BgL_iz00_4327 = (long) (BgL_auxz00_4223);
									BgL_iz00_4217 = BgL_iz00_4327;
									goto BgL_loopz00_4218;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* make-indexed */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(obj_t BgL_id1175z00_3,
		obj_t BgL_name1176z00_4, BgL_typez00_bglt BgL_type1177z00_5,
		BgL_valuez00_bglt BgL_value1178z00_6, obj_t BgL_access1179z00_7,
		obj_t BgL_fastzd2alpha1180zd2_8, obj_t BgL_removable1181z00_9,
		long BgL_occurrence1182z00_10, long BgL_occurrencew1183z00_11,
		bool_t BgL_userzf31184zf3_12, obj_t BgL_module1185z00_13,
		obj_t BgL_import1186z00_14, bool_t BgL_evaluablezf31187zf3_15,
		bool_t BgL_evalzf31188zf3_16, obj_t BgL_library1189z00_17,
		obj_t BgL_pragma1190z00_18, obj_t BgL_src1191z00_19,
		obj_t BgL_jvmzd2typezd2name1192z00_20, obj_t BgL_init1193z00_21,
		obj_t BgL_alias1194z00_22, int BgL_index1195z00_23)
	{
		{	/* SawJvm/funcall.sch 62 */
			{	/* SawJvm/funcall.sch 62 */
				BgL_globalz00_bglt BgL_new1181z00_4229;

				{	/* SawJvm/funcall.sch 62 */
					BgL_globalz00_bglt BgL_tmp1179z00_4230;
					BgL_indexedz00_bglt BgL_wide1180z00_4231;

					{
						BgL_globalz00_bglt BgL_auxz00_4330;

						{	/* SawJvm/funcall.sch 62 */
							BgL_globalz00_bglt BgL_new1178z00_4232;

							BgL_new1178z00_4232 =
								((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_globalz00_bgl))));
							{	/* SawJvm/funcall.sch 62 */
								long BgL_arg1704z00_4233;

								{	/* SawJvm/funcall.sch 62 */
									long BgL_res2251z00_4234;

									BgL_res2251z00_4234 =
										BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
									BgL_arg1704z00_4233 = BgL_res2251z00_4234;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1178z00_4232),
									BgL_arg1704z00_4233);
							}
							{	/* SawJvm/funcall.sch 62 */
								BgL_objectz00_bglt BgL_tmpz00_4335;

								BgL_tmpz00_4335 = ((BgL_objectz00_bglt) BgL_new1178z00_4232);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4335, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1178z00_4232);
							BgL_auxz00_4330 = BgL_new1178z00_4232;
						}
						BgL_tmp1179z00_4230 = ((BgL_globalz00_bglt) BgL_auxz00_4330);
					}
					BgL_wide1180z00_4231 =
						((BgL_indexedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_indexedz00_bgl))));
					{	/* SawJvm/funcall.sch 62 */
						obj_t BgL_auxz00_4343;
						BgL_objectz00_bglt BgL_tmpz00_4341;

						BgL_auxz00_4343 = ((obj_t) BgL_wide1180z00_4231);
						BgL_tmpz00_4341 = ((BgL_objectz00_bglt) BgL_tmp1179z00_4230);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4341, BgL_auxz00_4343);
					}
					((BgL_objectz00_bglt) BgL_tmp1179z00_4230);
					{	/* SawJvm/funcall.sch 62 */
						long BgL_arg1697z00_4235;

						{	/* SawJvm/funcall.sch 62 */
							long BgL_res2252z00_4236;

							BgL_res2252z00_4236 =
								BGL_CLASS_INDEX(BGl_indexedz00zzsaw_jvm_funcallz00);
							BgL_arg1697z00_4235 = BgL_res2252z00_4236;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1179z00_4230), BgL_arg1697z00_4235);
					}
					BgL_new1181z00_4229 = ((BgL_globalz00_bglt) BgL_tmp1179z00_4230);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_new1181z00_4229)))->BgL_idz00) =
					((obj_t) BgL_id1175z00_3), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_namez00) =
					((obj_t) BgL_name1176z00_4), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_typez00) =
					((BgL_typez00_bglt) BgL_type1177z00_5), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_valuez00) =
					((BgL_valuez00_bglt) BgL_value1178z00_6), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_accessz00) =
					((obj_t) BgL_access1179z00_7), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_fastzd2alphazd2) =
					((obj_t) BgL_fastzd2alpha1180zd2_8), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_removablez00) =
					((obj_t) BgL_removable1181z00_9), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_occurrencez00) =
					((long) BgL_occurrence1182z00_10), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_occurrencewz00) =
					((long) BgL_occurrencew1183z00_11), BUNSPEC);
				((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
									BgL_new1181z00_4229)))->BgL_userzf3zf3) =
					((bool_t) BgL_userzf31184zf3_12), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_modulez00) =
					((obj_t) BgL_module1185z00_13), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_importz00) =
					((obj_t) BgL_import1186z00_14), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_evaluablezf3zf3) =
					((bool_t) BgL_evaluablezf31187zf3_15), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_evalzf3zf3) =
					((bool_t) BgL_evalzf31188zf3_16), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_libraryz00) =
					((obj_t) BgL_library1189z00_17), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_pragmaz00) =
					((obj_t) BgL_pragma1190z00_18), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_srcz00) =
					((obj_t) BgL_src1191z00_19), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BgL_jvmzd2typezd2name1192z00_20), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_initz00) =
					((obj_t) BgL_init1193z00_21), BUNSPEC);
				((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
									BgL_new1181z00_4229)))->BgL_aliasz00) =
					((obj_t) BgL_alias1194z00_22), BUNSPEC);
				{
					BgL_indexedz00_bglt BgL_auxz00_4391;

					{
						obj_t BgL_auxz00_4392;

						{	/* SawJvm/funcall.sch 62 */
							BgL_objectz00_bglt BgL_tmpz00_4393;

							BgL_tmpz00_4393 = ((BgL_objectz00_bglt) BgL_new1181z00_4229);
							BgL_auxz00_4392 = BGL_OBJECT_WIDENING(BgL_tmpz00_4393);
						}
						BgL_auxz00_4391 = ((BgL_indexedz00_bglt) BgL_auxz00_4392);
					}
					((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_4391))->BgL_indexz00) =
						((int) BgL_index1195z00_23), BUNSPEC);
				}
				return BgL_new1181z00_4229;
			}
		}

	}



/* &make-indexed */
	BgL_globalz00_bglt BGl_z62makezd2indexedzb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4019, obj_t BgL_id1175z00_4020, obj_t BgL_name1176z00_4021,
		obj_t BgL_type1177z00_4022, obj_t BgL_value1178z00_4023,
		obj_t BgL_access1179z00_4024, obj_t BgL_fastzd2alpha1180zd2_4025,
		obj_t BgL_removable1181z00_4026, obj_t BgL_occurrence1182z00_4027,
		obj_t BgL_occurrencew1183z00_4028, obj_t BgL_userzf31184zf3_4029,
		obj_t BgL_module1185z00_4030, obj_t BgL_import1186z00_4031,
		obj_t BgL_evaluablezf31187zf3_4032, obj_t BgL_evalzf31188zf3_4033,
		obj_t BgL_library1189z00_4034, obj_t BgL_pragma1190z00_4035,
		obj_t BgL_src1191z00_4036, obj_t BgL_jvmzd2typezd2name1192z00_4037,
		obj_t BgL_init1193z00_4038, obj_t BgL_alias1194z00_4039,
		obj_t BgL_index1195z00_4040)
	{
		{	/* SawJvm/funcall.sch 62 */
			return
				BGl_makezd2indexedzd2zzsaw_jvm_funcallz00(BgL_id1175z00_4020,
				BgL_name1176z00_4021, ((BgL_typez00_bglt) BgL_type1177z00_4022),
				((BgL_valuez00_bglt) BgL_value1178z00_4023), BgL_access1179z00_4024,
				BgL_fastzd2alpha1180zd2_4025, BgL_removable1181z00_4026,
				(long) CINT(BgL_occurrence1182z00_4027),
				(long) CINT(BgL_occurrencew1183z00_4028),
				CBOOL(BgL_userzf31184zf3_4029), BgL_module1185z00_4030,
				BgL_import1186z00_4031, CBOOL(BgL_evaluablezf31187zf3_4032),
				CBOOL(BgL_evalzf31188zf3_4033), BgL_library1189z00_4034,
				BgL_pragma1190z00_4035, BgL_src1191z00_4036,
				BgL_jvmzd2typezd2name1192z00_4037, BgL_init1193z00_4038,
				BgL_alias1194z00_4039, CINT(BgL_index1195z00_4040));
		}

	}



/* indexed? */
	BGL_EXPORTED_DEF bool_t BGl_indexedzf3zf3zzsaw_jvm_funcallz00(obj_t
		BgL_objz00_24)
	{
		{	/* SawJvm/funcall.sch 63 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_24,
				BGl_indexedz00zzsaw_jvm_funcallz00);
		}

	}



/* &indexed? */
	obj_t BGl_z62indexedzf3z91zzsaw_jvm_funcallz00(obj_t BgL_envz00_4041,
		obj_t BgL_objz00_4042)
	{
		{	/* SawJvm/funcall.sch 63 */
			return BBOOL(BGl_indexedzf3zf3zzsaw_jvm_funcallz00(BgL_objz00_4042));
		}

	}



/* indexed-nil */
	BGL_EXPORTED_DEF BgL_globalz00_bglt BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.sch 64 */
			{	/* SawJvm/funcall.sch 64 */
				obj_t BgL_classz00_3703;

				BgL_classz00_3703 = BGl_indexedz00zzsaw_jvm_funcallz00;
				{	/* SawJvm/funcall.sch 64 */
					obj_t BgL__ortest_1106z00_3704;

					BgL__ortest_1106z00_3704 = BGL_CLASS_NIL(BgL_classz00_3703);
					if (CBOOL(BgL__ortest_1106z00_3704))
						{	/* SawJvm/funcall.sch 64 */
							return ((BgL_globalz00_bglt) BgL__ortest_1106z00_3704);
						}
					else
						{	/* SawJvm/funcall.sch 64 */
							return
								((BgL_globalz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_3703));
						}
				}
			}
		}

	}



/* &indexed-nil */
	BgL_globalz00_bglt BGl_z62indexedzd2nilzb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4043)
	{
		{	/* SawJvm/funcall.sch 64 */
			return BGl_indexedzd2nilzd2zzsaw_jvm_funcallz00();
		}

	}



/* indexed-index */
	BGL_EXPORTED_DEF int
		BGl_indexedzd2indexzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_25)
	{
		{	/* SawJvm/funcall.sch 65 */
			{
				BgL_indexedz00_bglt BgL_auxz00_4417;

				{
					obj_t BgL_auxz00_4418;

					{	/* SawJvm/funcall.sch 65 */
						BgL_objectz00_bglt BgL_tmpz00_4419;

						BgL_tmpz00_4419 = ((BgL_objectz00_bglt) BgL_oz00_25);
						BgL_auxz00_4418 = BGL_OBJECT_WIDENING(BgL_tmpz00_4419);
					}
					BgL_auxz00_4417 = ((BgL_indexedz00_bglt) BgL_auxz00_4418);
				}
				return (((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_4417))->BgL_indexz00);
			}
		}

	}



/* &indexed-index */
	obj_t BGl_z62indexedzd2indexzb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4044,
		obj_t BgL_oz00_4045)
	{
		{	/* SawJvm/funcall.sch 65 */
			return
				BINT(BGl_indexedzd2indexzd2zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4045)));
		}

	}



/* indexed-index-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2indexzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_26, int BgL_vz00_27)
	{
		{	/* SawJvm/funcall.sch 66 */
			{
				BgL_indexedz00_bglt BgL_auxz00_4427;

				{
					obj_t BgL_auxz00_4428;

					{	/* SawJvm/funcall.sch 66 */
						BgL_objectz00_bglt BgL_tmpz00_4429;

						BgL_tmpz00_4429 = ((BgL_objectz00_bglt) BgL_oz00_26);
						BgL_auxz00_4428 = BGL_OBJECT_WIDENING(BgL_tmpz00_4429);
					}
					BgL_auxz00_4427 = ((BgL_indexedz00_bglt) BgL_auxz00_4428);
				}
				return
					((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_4427))->BgL_indexz00) =
					((int) BgL_vz00_27), BUNSPEC);
		}}

	}



/* &indexed-index-set! */
	obj_t BGl_z62indexedzd2indexzd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4046, obj_t BgL_oz00_4047, obj_t BgL_vz00_4048)
	{
		{	/* SawJvm/funcall.sch 66 */
			return
				BGl_indexedzd2indexzd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4047), CINT(BgL_vz00_4048));
		}

	}



/* indexed-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2aliaszd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_28)
	{
		{	/* SawJvm/funcall.sch 67 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_28)))->BgL_aliasz00);
		}

	}



/* &indexed-alias */
	obj_t BGl_z62indexedzd2aliaszb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4049,
		obj_t BgL_oz00_4050)
	{
		{	/* SawJvm/funcall.sch 67 */
			return
				BGl_indexedzd2aliaszd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4050));
		}

	}



/* indexed-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2aliaszd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawJvm/funcall.sch 68 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_29)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &indexed-alias-set! */
	obj_t BGl_z62indexedzd2aliaszd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4051, obj_t BgL_oz00_4052, obj_t BgL_vz00_4053)
	{
		{	/* SawJvm/funcall.sch 68 */
			return
				BGl_indexedzd2aliaszd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4052), BgL_vz00_4053);
		}

	}



/* indexed-init */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2initzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_31)
	{
		{	/* SawJvm/funcall.sch 69 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_31)))->BgL_initz00);
		}

	}



/* &indexed-init */
	obj_t BGl_z62indexedzd2initzb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4054,
		obj_t BgL_oz00_4055)
	{
		{	/* SawJvm/funcall.sch 69 */
			return
				BGl_indexedzd2initzd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4055));
		}

	}



/* indexed-init-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2initzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* SawJvm/funcall.sch 70 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_32)))->BgL_initz00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &indexed-init-set! */
	obj_t BGl_z62indexedzd2initzd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4056, obj_t BgL_oz00_4057, obj_t BgL_vz00_4058)
	{
		{	/* SawJvm/funcall.sch 70 */
			return
				BGl_indexedzd2initzd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4057), BgL_vz00_4058);
		}

	}



/* indexed-jvm-type-name */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2jvmzd2typezd2namezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_34)
	{
		{	/* SawJvm/funcall.sch 71 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_34)))->BgL_jvmzd2typezd2namez00);
		}

	}



/* &indexed-jvm-type-name */
	obj_t BGl_z62indexedzd2jvmzd2typezd2namezb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4059, obj_t BgL_oz00_4060)
	{
		{	/* SawJvm/funcall.sch 71 */
			return
				BGl_indexedzd2jvmzd2typezd2namezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4060));
		}

	}



/* indexed-jvm-type-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2jvmzd2typezd2namezd2setz12z12zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt BgL_oz00_35, obj_t BgL_vz00_36)
	{
		{	/* SawJvm/funcall.sch 72 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_35)))->BgL_jvmzd2typezd2namez00) =
				((obj_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &indexed-jvm-type-name-set! */
	obj_t BGl_z62indexedzd2jvmzd2typezd2namezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4061, obj_t BgL_oz00_4062, obj_t BgL_vz00_4063)
	{
		{	/* SawJvm/funcall.sch 72 */
			return
				BGl_indexedzd2jvmzd2typezd2namezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4062), BgL_vz00_4063);
		}

	}



/* indexed-src */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2srczd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_37)
	{
		{	/* SawJvm/funcall.sch 73 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_37)))->BgL_srcz00);
		}

	}



/* &indexed-src */
	obj_t BGl_z62indexedzd2srczb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4064,
		obj_t BgL_oz00_4065)
	{
		{	/* SawJvm/funcall.sch 73 */
			return
				BGl_indexedzd2srczd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4065));
		}

	}



/* indexed-src-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2srczd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_38, obj_t BgL_vz00_39)
	{
		{	/* SawJvm/funcall.sch 74 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_38)))->BgL_srcz00) =
				((obj_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &indexed-src-set! */
	obj_t BGl_z62indexedzd2srczd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4066, obj_t BgL_oz00_4067, obj_t BgL_vz00_4068)
	{
		{	/* SawJvm/funcall.sch 74 */
			return
				BGl_indexedzd2srczd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4067), BgL_vz00_4068);
		}

	}



/* indexed-pragma */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2pragmazd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_40)
	{
		{	/* SawJvm/funcall.sch 75 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_40)))->BgL_pragmaz00);
		}

	}



/* &indexed-pragma */
	obj_t BGl_z62indexedzd2pragmazb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4069,
		obj_t BgL_oz00_4070)
	{
		{	/* SawJvm/funcall.sch 75 */
			return
				BGl_indexedzd2pragmazd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4070));
		}

	}



/* indexed-pragma-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2pragmazd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_41, obj_t BgL_vz00_42)
	{
		{	/* SawJvm/funcall.sch 76 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_41)))->BgL_pragmaz00) =
				((obj_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &indexed-pragma-set! */
	obj_t BGl_z62indexedzd2pragmazd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4071, obj_t BgL_oz00_4072, obj_t BgL_vz00_4073)
	{
		{	/* SawJvm/funcall.sch 76 */
			return
				BGl_indexedzd2pragmazd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4072), BgL_vz00_4073);
		}

	}



/* indexed-library */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2libraryzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_43)
	{
		{	/* SawJvm/funcall.sch 77 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_43)))->BgL_libraryz00);
		}

	}



/* &indexed-library */
	obj_t BGl_z62indexedzd2libraryzb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4074,
		obj_t BgL_oz00_4075)
	{
		{	/* SawJvm/funcall.sch 77 */
			return
				BGl_indexedzd2libraryzd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4075));
		}

	}



/* indexed-library-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2libraryzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_44, obj_t BgL_vz00_45)
	{
		{	/* SawJvm/funcall.sch 78 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_44)))->BgL_libraryz00) =
				((obj_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &indexed-library-set! */
	obj_t BGl_z62indexedzd2libraryzd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4076, obj_t BgL_oz00_4077, obj_t BgL_vz00_4078)
	{
		{	/* SawJvm/funcall.sch 78 */
			return
				BGl_indexedzd2libraryzd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4077), BgL_vz00_4078);
		}

	}



/* indexed-eval? */
	BGL_EXPORTED_DEF bool_t
		BGl_indexedzd2evalzf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_46)
	{
		{	/* SawJvm/funcall.sch 79 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_46)))->BgL_evalzf3zf3);
		}

	}



/* &indexed-eval? */
	obj_t BGl_z62indexedzd2evalzf3z43zzsaw_jvm_funcallz00(obj_t BgL_envz00_4079,
		obj_t BgL_oz00_4080)
	{
		{	/* SawJvm/funcall.sch 79 */
			return
				BBOOL(BGl_indexedzd2evalzf3z21zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4080)));
		}

	}



/* indexed-eval?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2evalzf3zd2setz12ze1zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_47, bool_t BgL_vz00_48)
	{
		{	/* SawJvm/funcall.sch 80 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_47)))->BgL_evalzf3zf3) =
				((bool_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &indexed-eval?-set! */
	obj_t BGl_z62indexedzd2evalzf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4081, obj_t BgL_oz00_4082, obj_t BgL_vz00_4083)
	{
		{	/* SawJvm/funcall.sch 80 */
			return
				BGl_indexedzd2evalzf3zd2setz12ze1zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4082), CBOOL(BgL_vz00_4083));
		}

	}



/* indexed-evaluable? */
	BGL_EXPORTED_DEF bool_t
		BGl_indexedzd2evaluablezf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_49)
	{
		{	/* SawJvm/funcall.sch 81 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_49)))->BgL_evaluablezf3zf3);
		}

	}



/* &indexed-evaluable? */
	obj_t BGl_z62indexedzd2evaluablezf3z43zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4084, obj_t BgL_oz00_4085)
	{
		{	/* SawJvm/funcall.sch 81 */
			return
				BBOOL(BGl_indexedzd2evaluablezf3z21zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4085)));
		}

	}



/* indexed-evaluable?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2evaluablezf3zd2setz12ze1zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt BgL_oz00_50, bool_t BgL_vz00_51)
	{
		{	/* SawJvm/funcall.sch 82 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_50)))->BgL_evaluablezf3zf3) =
				((bool_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &indexed-evaluable?-set! */
	obj_t BGl_z62indexedzd2evaluablezf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4086, obj_t BgL_oz00_4087, obj_t BgL_vz00_4088)
	{
		{	/* SawJvm/funcall.sch 82 */
			return
				BGl_indexedzd2evaluablezf3zd2setz12ze1zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4087), CBOOL(BgL_vz00_4088));
		}

	}



/* indexed-import */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2importzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_52)
	{
		{	/* SawJvm/funcall.sch 83 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_52)))->BgL_importz00);
		}

	}



/* &indexed-import */
	obj_t BGl_z62indexedzd2importzb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4089,
		obj_t BgL_oz00_4090)
	{
		{	/* SawJvm/funcall.sch 83 */
			return
				BGl_indexedzd2importzd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4090));
		}

	}



/* indexed-import-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2importzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_53, obj_t BgL_vz00_54)
	{
		{	/* SawJvm/funcall.sch 84 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_53)))->BgL_importz00) =
				((obj_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &indexed-import-set! */
	obj_t BGl_z62indexedzd2importzd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4091, obj_t BgL_oz00_4092, obj_t BgL_vz00_4093)
	{
		{	/* SawJvm/funcall.sch 84 */
			return
				BGl_indexedzd2importzd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4092), BgL_vz00_4093);
		}

	}



/* indexed-module */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2modulezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_55)
	{
		{	/* SawJvm/funcall.sch 85 */
			return
				(((BgL_globalz00_bglt) COBJECT(
						((BgL_globalz00_bglt) BgL_oz00_55)))->BgL_modulez00);
		}

	}



/* &indexed-module */
	obj_t BGl_z62indexedzd2modulezb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4094,
		obj_t BgL_oz00_4095)
	{
		{	/* SawJvm/funcall.sch 85 */
			return
				BGl_indexedzd2modulezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4095));
		}

	}



/* indexed-module-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2modulezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* SawJvm/funcall.sch 86 */
			return
				((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_oz00_56)))->BgL_modulez00) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &indexed-module-set! */
	obj_t BGl_z62indexedzd2modulezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4096, obj_t BgL_oz00_4097, obj_t BgL_vz00_4098)
	{
		{	/* SawJvm/funcall.sch 86 */
			return
				BGl_indexedzd2modulezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4097), BgL_vz00_4098);
		}

	}



/* indexed-user? */
	BGL_EXPORTED_DEF bool_t
		BGl_indexedzd2userzf3z21zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_58)
	{
		{	/* SawJvm/funcall.sch 87 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_58)))->BgL_userzf3zf3);
		}

	}



/* &indexed-user? */
	obj_t BGl_z62indexedzd2userzf3z43zzsaw_jvm_funcallz00(obj_t BgL_envz00_4099,
		obj_t BgL_oz00_4100)
	{
		{	/* SawJvm/funcall.sch 87 */
			return
				BBOOL(BGl_indexedzd2userzf3z21zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4100)));
		}

	}



/* indexed-user?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2userzf3zd2setz12ze1zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_59, bool_t BgL_vz00_60)
	{
		{	/* SawJvm/funcall.sch 88 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_59)))->BgL_userzf3zf3) =
				((bool_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &indexed-user?-set! */
	obj_t BGl_z62indexedzd2userzf3zd2setz12z83zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4101, obj_t BgL_oz00_4102, obj_t BgL_vz00_4103)
	{
		{	/* SawJvm/funcall.sch 88 */
			return
				BGl_indexedzd2userzf3zd2setz12ze1zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4102), CBOOL(BgL_vz00_4103));
		}

	}



/* indexed-occurrencew */
	BGL_EXPORTED_DEF long
		BGl_indexedzd2occurrencewzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_61)
	{
		{	/* SawJvm/funcall.sch 89 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_61)))->BgL_occurrencewz00);
		}

	}



/* &indexed-occurrencew */
	obj_t BGl_z62indexedzd2occurrencewzb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4104, obj_t BgL_oz00_4105)
	{
		{	/* SawJvm/funcall.sch 89 */
			return
				BINT(BGl_indexedzd2occurrencewzd2zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4105)));
		}

	}



/* indexed-occurrencew-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2occurrencewzd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_62, long BgL_vz00_63)
	{
		{	/* SawJvm/funcall.sch 90 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_62)))->BgL_occurrencewz00) =
				((long) BgL_vz00_63), BUNSPEC);
		}

	}



/* &indexed-occurrencew-set! */
	obj_t BGl_z62indexedzd2occurrencewzd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4106, obj_t BgL_oz00_4107, obj_t BgL_vz00_4108)
	{
		{	/* SawJvm/funcall.sch 90 */
			return
				BGl_indexedzd2occurrencewzd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4107), (long) CINT(BgL_vz00_4108));
		}

	}



/* indexed-occurrence */
	BGL_EXPORTED_DEF long
		BGl_indexedzd2occurrencezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_64)
	{
		{	/* SawJvm/funcall.sch 91 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_64)))->BgL_occurrencez00);
		}

	}



/* &indexed-occurrence */
	obj_t BGl_z62indexedzd2occurrencezb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4109, obj_t BgL_oz00_4110)
	{
		{	/* SawJvm/funcall.sch 91 */
			return
				BINT(BGl_indexedzd2occurrencezd2zzsaw_jvm_funcallz00(
					((BgL_globalz00_bglt) BgL_oz00_4110)));
		}

	}



/* indexed-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2occurrencezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_65, long BgL_vz00_66)
	{
		{	/* SawJvm/funcall.sch 92 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_65)))->BgL_occurrencez00) =
				((long) BgL_vz00_66), BUNSPEC);
		}

	}



/* &indexed-occurrence-set! */
	obj_t BGl_z62indexedzd2occurrencezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4111, obj_t BgL_oz00_4112, obj_t BgL_vz00_4113)
	{
		{	/* SawJvm/funcall.sch 92 */
			return
				BGl_indexedzd2occurrencezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4112), (long) CINT(BgL_vz00_4113));
		}

	}



/* indexed-removable */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2removablezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_67)
	{
		{	/* SawJvm/funcall.sch 93 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_67)))->BgL_removablez00);
		}

	}



/* &indexed-removable */
	obj_t BGl_z62indexedzd2removablezb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4114,
		obj_t BgL_oz00_4115)
	{
		{	/* SawJvm/funcall.sch 93 */
			return
				BGl_indexedzd2removablezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4115));
		}

	}



/* indexed-removable-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2removablezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_68, obj_t BgL_vz00_69)
	{
		{	/* SawJvm/funcall.sch 94 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_68)))->BgL_removablez00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &indexed-removable-set! */
	obj_t BGl_z62indexedzd2removablezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4116, obj_t BgL_oz00_4117, obj_t BgL_vz00_4118)
	{
		{	/* SawJvm/funcall.sch 94 */
			return
				BGl_indexedzd2removablezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4117), BgL_vz00_4118);
		}

	}



/* indexed-fast-alpha */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2fastzd2alphaz00zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_70)
	{
		{	/* SawJvm/funcall.sch 95 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_70)))->BgL_fastzd2alphazd2);
		}

	}



/* &indexed-fast-alpha */
	obj_t BGl_z62indexedzd2fastzd2alphaz62zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4119, obj_t BgL_oz00_4120)
	{
		{	/* SawJvm/funcall.sch 95 */
			return
				BGl_indexedzd2fastzd2alphaz00zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4120));
		}

	}



/* indexed-fast-alpha-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2fastzd2alphazd2setz12zc0zzsaw_jvm_funcallz00
		(BgL_globalz00_bglt BgL_oz00_71, obj_t BgL_vz00_72)
	{
		{	/* SawJvm/funcall.sch 96 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_71)))->BgL_fastzd2alphazd2) =
				((obj_t) BgL_vz00_72), BUNSPEC);
		}

	}



/* &indexed-fast-alpha-set! */
	obj_t BGl_z62indexedzd2fastzd2alphazd2setz12za2zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4121, obj_t BgL_oz00_4122, obj_t BgL_vz00_4123)
	{
		{	/* SawJvm/funcall.sch 96 */
			return
				BGl_indexedzd2fastzd2alphazd2setz12zc0zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4122), BgL_vz00_4123);
		}

	}



/* indexed-access */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2accesszd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_73)
	{
		{	/* SawJvm/funcall.sch 97 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_73)))->BgL_accessz00);
		}

	}



/* &indexed-access */
	obj_t BGl_z62indexedzd2accesszb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4124,
		obj_t BgL_oz00_4125)
	{
		{	/* SawJvm/funcall.sch 97 */
			return
				BGl_indexedzd2accesszd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4125));
		}

	}



/* indexed-access-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2accesszd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_74, obj_t BgL_vz00_75)
	{
		{	/* SawJvm/funcall.sch 98 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_74)))->BgL_accessz00) =
				((obj_t) BgL_vz00_75), BUNSPEC);
		}

	}



/* &indexed-access-set! */
	obj_t BGl_z62indexedzd2accesszd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4126, obj_t BgL_oz00_4127, obj_t BgL_vz00_4128)
	{
		{	/* SawJvm/funcall.sch 98 */
			return
				BGl_indexedzd2accesszd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4127), BgL_vz00_4128);
		}

	}



/* indexed-value */
	BGL_EXPORTED_DEF BgL_valuez00_bglt
		BGl_indexedzd2valuezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_76)
	{
		{	/* SawJvm/funcall.sch 99 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_76)))->BgL_valuez00);
		}

	}



/* &indexed-value */
	BgL_valuez00_bglt BGl_z62indexedzd2valuezb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4129, obj_t BgL_oz00_4130)
	{
		{	/* SawJvm/funcall.sch 99 */
			return
				BGl_indexedzd2valuezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4130));
		}

	}



/* indexed-value-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2valuezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_77, BgL_valuez00_bglt BgL_vz00_78)
	{
		{	/* SawJvm/funcall.sch 100 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_77)))->BgL_valuez00) =
				((BgL_valuez00_bglt) BgL_vz00_78), BUNSPEC);
		}

	}



/* &indexed-value-set! */
	obj_t BGl_z62indexedzd2valuezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4131, obj_t BgL_oz00_4132, obj_t BgL_vz00_4133)
	{
		{	/* SawJvm/funcall.sch 100 */
			return
				BGl_indexedzd2valuezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4132),
				((BgL_valuez00_bglt) BgL_vz00_4133));
		}

	}



/* indexed-type */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_indexedzd2typezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_79)
	{
		{	/* SawJvm/funcall.sch 101 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_79)))->BgL_typez00);
		}

	}



/* &indexed-type */
	BgL_typez00_bglt BGl_z62indexedzd2typezb0zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4134, obj_t BgL_oz00_4135)
	{
		{	/* SawJvm/funcall.sch 101 */
			return
				BGl_indexedzd2typezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4135));
		}

	}



/* indexed-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2typezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_80, BgL_typez00_bglt BgL_vz00_81)
	{
		{	/* SawJvm/funcall.sch 102 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_80)))->BgL_typez00) =
				((BgL_typez00_bglt) BgL_vz00_81), BUNSPEC);
		}

	}



/* &indexed-type-set! */
	obj_t BGl_z62indexedzd2typezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4136, obj_t BgL_oz00_4137, obj_t BgL_vz00_4138)
	{
		{	/* SawJvm/funcall.sch 102 */
			return
				BGl_indexedzd2typezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4137),
				((BgL_typez00_bglt) BgL_vz00_4138));
		}

	}



/* indexed-name */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2namezd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_82)
	{
		{	/* SawJvm/funcall.sch 103 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_82)))->BgL_namez00);
		}

	}



/* &indexed-name */
	obj_t BGl_z62indexedzd2namezb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4139,
		obj_t BgL_oz00_4140)
	{
		{	/* SawJvm/funcall.sch 103 */
			return
				BGl_indexedzd2namezd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4140));
		}

	}



/* indexed-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2namezd2setz12z12zzsaw_jvm_funcallz00(BgL_globalz00_bglt
		BgL_oz00_83, obj_t BgL_vz00_84)
	{
		{	/* SawJvm/funcall.sch 104 */
			return
				((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oz00_83)))->BgL_namez00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &indexed-name-set! */
	obj_t BGl_z62indexedzd2namezd2setz12z70zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4141, obj_t BgL_oz00_4142, obj_t BgL_vz00_4143)
	{
		{	/* SawJvm/funcall.sch 104 */
			return
				BGl_indexedzd2namezd2setz12z12zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4142), BgL_vz00_4143);
		}

	}



/* indexed-id */
	BGL_EXPORTED_DEF obj_t
		BGl_indexedzd2idzd2zzsaw_jvm_funcallz00(BgL_globalz00_bglt BgL_oz00_85)
	{
		{	/* SawJvm/funcall.sch 105 */
			return
				(((BgL_variablez00_bglt) COBJECT(
						((BgL_variablez00_bglt) BgL_oz00_85)))->BgL_idz00);
		}

	}



/* &indexed-id */
	obj_t BGl_z62indexedzd2idzb0zzsaw_jvm_funcallz00(obj_t BgL_envz00_4144,
		obj_t BgL_oz00_4145)
	{
		{	/* SawJvm/funcall.sch 105 */
			return
				BGl_indexedzd2idzd2zzsaw_jvm_funcallz00(
				((BgL_globalz00_bglt) BgL_oz00_4145));
		}

	}



/* key-opt? */
	bool_t BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(obj_t BgL_vz00_88)
	{
		{	/* SawJvm/funcall.scm 22 */
			{	/* SawJvm/funcall.scm 23 */
				BgL_globalz00_bglt BgL_vz00_2463;

				BgL_vz00_2463 =
					BGl_globalzd2entryzd2zzbackend_cplibz00(
					((BgL_globalz00_bglt) BgL_vz00_88));
				{	/* SawJvm/funcall.scm 24 */
					BgL_valuez00_bglt BgL_valz00_2464;

					BgL_valz00_2464 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt) BgL_vz00_2463)))->BgL_valuez00);
					{	/* SawJvm/funcall.scm 25 */
						bool_t BgL_test2441z00_4609;

						{	/* SawJvm/funcall.scm 25 */
							bool_t BgL_res2253z00_3708;

							BgL_res2253z00_3708 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_valz00_2464), BGl_sfunz00zzast_varz00);
							BgL_test2441z00_4609 = BgL_res2253z00_3708;
						}
						if (BgL_test2441z00_4609)
							{	/* SawJvm/funcall.scm 26 */
								obj_t BgL_cloz00_2466;

								BgL_cloz00_2466 =
									(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_valz00_2464)))->
									BgL_thezd2closurezd2globalz00);
								{	/* SawJvm/funcall.scm 27 */
									bool_t BgL_oz00_2467;
									bool_t BgL_kz00_2468;

									BgL_oz00_2467 =
										BGl_globalzd2optionalzf3z21zzast_varz00(BgL_cloz00_2466);
									BgL_kz00_2468 =
										BGl_globalzd2keyzf3z21zzast_varz00(BgL_cloz00_2466);
									if (BgL_oz00_2467)
										{	/* SawJvm/funcall.scm 28 */
											return BgL_oz00_2467;
										}
									else
										{	/* SawJvm/funcall.scm 28 */
											return BgL_kz00_2468;
										}
								}
							}
						else
							{	/* SawJvm/funcall.scm 25 */
								return ((bool_t) 0);
							}
					}
				}
			}
		}

	}



/* module-light-funcall */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2lightzd2funcallz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_89)
	{
		{	/* SawJvm/funcall.scm 32 */
			{	/* SawJvm/funcall.scm 34 */
				obj_t BgL_g1624z00_2471;

				BgL_g1624z00_2471 =
					(((BgL_jvmz00_bglt) COBJECT(BgL_mez00_89))->BgL_lightzd2funcallszd2);
				{
					obj_t BgL_l1622z00_2473;

					{	/* SawJvm/funcall.scm 34 */
						bool_t BgL_tmpz00_4618;

						BgL_l1622z00_2473 = BgL_g1624z00_2471;
					BgL_zc3z04anonymousza31706ze3z87_2474:
						if (PAIRP(BgL_l1622z00_2473))
							{	/* SawJvm/funcall.scm 34 */
								{	/* SawJvm/funcall.scm 35 */
									obj_t BgL_insz00_2476;

									BgL_insz00_2476 = CAR(BgL_l1622z00_2473);
									{	/* SawJvm/funcall.scm 36 */
										obj_t BgL_arg1708z00_2478;
										obj_t BgL_arg1711z00_2479;
										obj_t BgL_arg1712z00_2480;

										BgL_arg1708z00_2478 =
											(((BgL_rtl_lightfuncallz00_bglt) COBJECT(
													((BgL_rtl_lightfuncallz00_bglt) BgL_insz00_2476)))->
											BgL_namez00);
										BgL_arg1711z00_2479 =
											(((BgL_rtl_lightfuncallz00_bglt)
												COBJECT(((BgL_rtl_lightfuncallz00_bglt)
														BgL_insz00_2476)))->BgL_funsz00);
										BgL_arg1712z00_2480 =
											(((BgL_rtl_lightfuncallz00_bglt)
												COBJECT(((BgL_rtl_lightfuncallz00_bglt)
														BgL_insz00_2476)))->BgL_rettypez00);
										BGl_funcallzd2lightzd2zzsaw_jvm_funcallz00(BgL_mez00_89,
											BgL_arg1708z00_2478, BgL_arg1711z00_2479,
											BgL_arg1712z00_2480);
									}
								}
								{
									obj_t BgL_l1622z00_4629;

									BgL_l1622z00_4629 = CDR(BgL_l1622z00_2473);
									BgL_l1622z00_2473 = BgL_l1622z00_4629;
									goto BgL_zc3z04anonymousza31706ze3z87_2474;
								}
							}
						else
							{	/* SawJvm/funcall.scm 34 */
								BgL_tmpz00_4618 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_4618);
					}
				}
			}
		}

	}



/* &module-light-funcall */
	obj_t BGl_z62modulezd2lightzd2funcallz62zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4146, obj_t BgL_mez00_4147)
	{
		{	/* SawJvm/funcall.scm 32 */
			return
				BGl_modulezd2lightzd2funcallz00zzsaw_jvm_funcallz00(
				((BgL_jvmz00_bglt) BgL_mez00_4147));
		}

	}



/* funcall-light */
	obj_t BGl_funcallzd2lightzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_90,
		obj_t BgL_namez00_91, obj_t BgL_funsz00_92, obj_t BgL_rettypez00_93)
	{
		{	/* SawJvm/funcall.scm 39 */
			{
				obj_t BgL_tz00_2513;
				BgL_variablez00_bglt BgL_gz00_2552;

				{	/* SawJvm/funcall.scm 70 */
					obj_t BgL_fz00_2490;

					BgL_fz00_2490 = CAR(((obj_t) BgL_funsz00_92));
					{	/* SawJvm/funcall.scm 70 */
						BgL_variablez00_bglt BgL_gz00_2491;

						BgL_gz00_2491 =
							(((BgL_varz00_bglt) COBJECT(
									((BgL_varz00_bglt) BgL_fz00_2490)))->BgL_variablez00);
						{	/* SawJvm/funcall.scm 71 */
							obj_t BgL_trz00_2492;

							BgL_trz00_2492 =
								BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_mez00_90,
								((BgL_typez00_bglt) BgL_rettypez00_93));
							{	/* SawJvm/funcall.scm 72 */
								obj_t BgL_talz00_2493;

								BgL_gz00_2552 = BgL_gz00_2491;
								{	/* SawJvm/funcall.scm 66 */
									obj_t BgL_argsz00_2554;

									BgL_argsz00_2554 =
										(((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_gz00_2552))))->
														BgL_valuez00))))->BgL_argsz00);
									{	/* SawJvm/funcall.scm 67 */
										obj_t BgL_arg1771z00_2555;
										obj_t BgL_arg1775z00_2556;

										{	/* SawJvm/funcall.scm 67 */
											obj_t BgL_arg1778z00_2557;

											BgL_arg1778z00_2557 = CAR(((obj_t) BgL_argsz00_2554));
											{	/* SawJvm/funcall.scm 52 */
												obj_t BgL_arg1746z00_3725;

												BgL_arg1746z00_3725 =
													BGl_getzd2typeze70z35zzsaw_jvm_funcallz00
													(BgL_arg1778z00_2557);
												BgL_arg1771z00_2555 =
													BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_mez00_90,
													((BgL_typez00_bglt) BgL_arg1746z00_3725));
											}
										}
										{	/* SawJvm/funcall.scm 68 */
											obj_t BgL_l1625z00_2558;

											BgL_l1625z00_2558 = CDR(((obj_t) BgL_argsz00_2554));
											if (NULLP(BgL_l1625z00_2558))
												{	/* SawJvm/funcall.scm 68 */
													BgL_arg1775z00_2556 = BNIL;
												}
											else
												{	/* SawJvm/funcall.scm 68 */
													obj_t BgL_head1627z00_2560;

													{	/* SawJvm/funcall.scm 68 */
														obj_t BgL_res2258z00_3728;

														BgL_res2258z00_3728 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1627z00_2560 = BgL_res2258z00_3728;
													}
													{
														obj_t BgL_l1625z00_2562;
														obj_t BgL_tail1628z00_2563;

														BgL_l1625z00_2562 = BgL_l1625z00_2558;
														BgL_tail1628z00_2563 = BgL_head1627z00_2560;
													BgL_zc3z04anonymousza31781ze3z87_2564:
														if (NULLP(BgL_l1625z00_2562))
															{	/* SawJvm/funcall.scm 68 */
																BgL_arg1775z00_2556 = CDR(BgL_head1627z00_2560);
															}
														else
															{	/* SawJvm/funcall.scm 68 */
																obj_t BgL_newtail1629z00_2566;

																{	/* SawJvm/funcall.scm 68 */
																	obj_t BgL_arg1790z00_2568;

																	{	/* SawJvm/funcall.scm 68 */
																		obj_t BgL_az00_2569;

																		BgL_az00_2569 =
																			CAR(((obj_t) BgL_l1625z00_2562));
																		{	/* SawJvm/funcall.scm 54 */
																			obj_t BgL_arg1754z00_3733;

																			BgL_tz00_2513 =
																				BGl_getzd2typeze70z35zzsaw_jvm_funcallz00
																				(BgL_az00_2569);
																			if (BGl_bigloozd2typezf3z21zztype_typez00(
																					((BgL_typez00_bglt) BgL_tz00_2513)))
																				{	/* SawJvm/funcall.scm 41 */
																					BgL_arg1754z00_3733 =
																						BGl_za2objza2z00zztype_cachez00;
																				}
																			else
																				{	/* SawJvm/funcall.scm 41 */
																					BgL_arg1754z00_3733 = BgL_tz00_2513;
																				}
																			BgL_arg1790z00_2568 =
																				BGl_compilezd2typezd2zzsaw_jvm_outz00
																				(BgL_mez00_90,
																				((BgL_typez00_bglt)
																					BgL_arg1754z00_3733));
																		}
																	}
																	{	/* SawJvm/funcall.scm 68 */
																		obj_t BgL_res2260z00_3735;

																		BgL_res2260z00_3735 =
																			MAKE_YOUNG_PAIR(BgL_arg1790z00_2568,
																			BNIL);
																		BgL_newtail1629z00_2566 =
																			BgL_res2260z00_3735;
																	}
																}
																SET_CDR(BgL_tail1628z00_2563,
																	BgL_newtail1629z00_2566);
																{	/* SawJvm/funcall.scm 68 */
																	obj_t BgL_arg1784z00_2567;

																	BgL_arg1784z00_2567 =
																		CDR(((obj_t) BgL_l1625z00_2562));
																	{
																		obj_t BgL_tail1628z00_4671;
																		obj_t BgL_l1625z00_4670;

																		BgL_l1625z00_4670 = BgL_arg1784z00_2567;
																		BgL_tail1628z00_4671 =
																			BgL_newtail1629z00_2566;
																		BgL_tail1628z00_2563 = BgL_tail1628z00_4671;
																		BgL_l1625z00_2562 = BgL_l1625z00_4670;
																		goto BgL_zc3z04anonymousza31781ze3z87_2564;
																	}
																}
															}
													}
												}
										}
										BgL_talz00_2493 =
											MAKE_YOUNG_PAIR(BgL_arg1771z00_2555, BgL_arg1775z00_2556);
									}
								}
								{	/* SawJvm/funcall.scm 73 */
									obj_t BgL_pz00_2494;

									{	/* SawJvm/funcall.scm 74 */
										obj_t BgL_head1632z00_2501;

										{	/* SawJvm/funcall.scm 74 */
											obj_t BgL_res2262z00_3741;

											BgL_res2262z00_3741 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											BgL_head1632z00_2501 = BgL_res2262z00_3741;
										}
										{
											obj_t BgL_l1630z00_2503;
											obj_t BgL_tail1633z00_2504;

											BgL_l1630z00_2503 = BgL_talz00_2493;
											BgL_tail1633z00_2504 = BgL_head1632z00_2501;
										BgL_zc3z04anonymousza31731ze3z87_2505:
											if (NULLP(BgL_l1630z00_2503))
												{	/* SawJvm/funcall.scm 74 */
													BgL_pz00_2494 = CDR(BgL_head1632z00_2501);
												}
											else
												{	/* SawJvm/funcall.scm 74 */
													obj_t BgL_newtail1634z00_2507;

													{	/* SawJvm/funcall.scm 74 */
														obj_t BgL_arg1738z00_2509;

														{	/* SawJvm/funcall.scm 74 */

															{	/* SawJvm/funcall.scm 74 */

																BgL_arg1738z00_2509 =
																	BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
															}
														}
														{	/* SawJvm/funcall.scm 74 */
															obj_t BgL_res2264z00_3745;

															BgL_res2264z00_3745 =
																MAKE_YOUNG_PAIR(BgL_arg1738z00_2509, BNIL);
															BgL_newtail1634z00_2507 = BgL_res2264z00_3745;
														}
													}
													SET_CDR(BgL_tail1633z00_2504,
														BgL_newtail1634z00_2507);
													{	/* SawJvm/funcall.scm 74 */
														obj_t BgL_arg1733z00_2508;

														BgL_arg1733z00_2508 =
															CDR(((obj_t) BgL_l1630z00_2503));
														{
															obj_t BgL_tail1633z00_4683;
															obj_t BgL_l1630z00_4682;

															BgL_l1630z00_4682 = BgL_arg1733z00_2508;
															BgL_tail1633z00_4683 = BgL_newtail1634z00_2507;
															BgL_tail1633z00_2504 = BgL_tail1633z00_4683;
															BgL_l1630z00_2503 = BgL_l1630z00_4682;
															goto BgL_zc3z04anonymousza31731ze3z87_2505;
														}
													}
												}
										}
									}
									{	/* SawJvm/funcall.scm 74 */

										{	/* SawJvm/funcall.scm 76 */
											obj_t BgL_arg1725z00_2495;

											{	/* SawJvm/funcall.scm 76 */
												obj_t BgL_res2265z00_3750;

												{	/* SawJvm/funcall.scm 76 */
													obj_t BgL_arg1466z00_3749;

													BgL_arg1466z00_3749 =
														SYMBOL_TO_STRING(BgL_namez00_91);
													BgL_res2265z00_3750 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_3749);
												}
												BgL_arg1725z00_2495 = BgL_res2265z00_3750;
											}
											BGl_declarezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_90,
												BgL_namez00_91, CNST_TABLE_REF(((long) 0)),
												CNST_TABLE_REF(((long) 1)), BgL_trz00_2492,
												BgL_arg1725z00_2495, BgL_talz00_2493);
										}
										BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_90,
											BgL_namez00_91);
										BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_90,
											BgL_pz00_2494, BNIL);
										{	/* SawJvm/funcall.scm 80 */
											obj_t BgL_arg1726z00_2496;

											{	/* SawJvm/funcall.scm 80 */
												obj_t BgL_arg1727z00_2497;

												{	/* SawJvm/funcall.scm 80 */
													obj_t BgL_arg1728z00_2498;

													BgL_arg1728z00_2498 = CAR(((obj_t) BgL_pz00_2494));
													BgL_arg1727z00_2497 =
														MAKE_YOUNG_PAIR(BgL_arg1728z00_2498, BNIL);
												}
												BgL_arg1726z00_2496 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
													BgL_arg1727z00_2497);
											}
											BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_90,
												BgL_arg1726z00_2496);
										}
										BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_90,
											CNST_TABLE_REF(((long) 3)));
										BGl_funcallzd2lightzd2switchz00zzsaw_jvm_funcallz00
											(BgL_mez00_90, BgL_funsz00_92, BgL_trz00_2492,
											BgL_pz00_2494, BgL_talz00_2493);
										return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_90);
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* get-type~0 */
	obj_t BGl_getzd2typeze70z35zzsaw_jvm_funcallz00(obj_t BgL_tz00_2516)
	{
		{	/* SawJvm/funcall.scm 50 */
			if (BGl_isazf3zf3zz__objectz00(BgL_tz00_2516, BGl_localz00zzast_varz00))
				{	/* SawJvm/funcall.scm 46 */
					return
						((obj_t)
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_localz00_bglt) BgL_tz00_2516))))->BgL_typez00));
				}
			else
				{	/* SawJvm/funcall.scm 46 */
					if (BGl_isazf3zf3zz__objectz00(BgL_tz00_2516,
							BGl_typez00zztype_typez00))
						{	/* SawJvm/funcall.scm 48 */
							return BgL_tz00_2516;
						}
					else
						{	/* SawJvm/funcall.scm 48 */
							return
								BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 4)),
								BGl_string2357z00zzsaw_jvm_funcallz00, BgL_tz00_2516);
		}}}

	}



/* funcall-light-switch */
	bool_t BGl_funcallzd2lightzd2switchz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_94, obj_t BgL_funsz00_95, obj_t BgL_trz00_96, obj_t BgL_pz00_97,
		obj_t BgL_talz00_98)
	{
		{	/* SawJvm/funcall.scm 85 */
			{
				obj_t BgL_tz00_2626;
				obj_t BgL_lz00_2643;

				{	/* SawJvm/funcall.scm 113 */
					obj_t BgL_thisz00_2584;

					BgL_thisz00_2584 = CAR(((obj_t) BgL_pz00_97));
					{	/* SawJvm/funcall.scm 113 */
						obj_t BgL_iza2za2_2585;

						BgL_lz00_2643 = BgL_funsz00_95;
						if (NULLP(BgL_funsz00_95))
							{	/* SawJvm/funcall.scm 96 */
								BgL_iza2za2_2585 = BNIL;
							}
						else
							{	/* SawJvm/funcall.scm 96 */
								obj_t BgL_head1637z00_2647;

								{	/* SawJvm/funcall.scm 96 */
									obj_t BgL_res2271z00_3761;

									BgL_res2271z00_3761 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1637z00_2647 = BgL_res2271z00_3761;
								}
								{
									obj_t BgL_l1635z00_2649;
									obj_t BgL_tail1638z00_2650;

									BgL_l1635z00_2649 = BgL_funsz00_95;
									BgL_tail1638z00_2650 = BgL_head1637z00_2647;
								BgL_zc3z04anonymousza31855ze3z87_2651:
									if (NULLP(BgL_l1635z00_2649))
										{	/* SawJvm/funcall.scm 96 */
											BgL_iza2za2_2585 = CDR(BgL_head1637z00_2647);
										}
									else
										{	/* SawJvm/funcall.scm 96 */
											obj_t BgL_newtail1639z00_2653;

											{	/* SawJvm/funcall.scm 96 */
												int BgL_arg1858z00_2655;

												{	/* SawJvm/funcall.scm 96 */
													BgL_globalz00_bglt BgL_oz00_3766;

													BgL_oz00_3766 =
														((BgL_globalz00_bglt)
														(((BgL_varz00_bglt) COBJECT(
																	((BgL_varz00_bglt)
																		CAR(
																			((obj_t) BgL_l1635z00_2649)))))->
															BgL_variablez00));
													{
														BgL_indexedz00_bglt BgL_auxz00_4724;

														{
															obj_t BgL_auxz00_4725;

															{	/* SawJvm/funcall.scm 96 */
																BgL_objectz00_bglt BgL_tmpz00_4726;

																BgL_tmpz00_4726 =
																	((BgL_objectz00_bglt) BgL_oz00_3766);
																BgL_auxz00_4725 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4726);
															}
															BgL_auxz00_4724 =
																((BgL_indexedz00_bglt) BgL_auxz00_4725);
														}
														BgL_arg1858z00_2655 =
															(((BgL_indexedz00_bglt)
																COBJECT(BgL_auxz00_4724))->BgL_indexz00);
												}}
												{	/* SawJvm/funcall.scm 96 */
													obj_t BgL_res2273z00_3768;

													BgL_res2273z00_3768 =
														MAKE_YOUNG_PAIR(BINT(BgL_arg1858z00_2655), BNIL);
													BgL_newtail1639z00_2653 = BgL_res2273z00_3768;
											}}
											SET_CDR(BgL_tail1638z00_2650, BgL_newtail1639z00_2653);
											{	/* SawJvm/funcall.scm 96 */
												obj_t BgL_arg1857z00_2654;

												BgL_arg1857z00_2654 = CDR(((obj_t) BgL_l1635z00_2649));
												{
													obj_t BgL_tail1638z00_4737;
													obj_t BgL_l1635z00_4736;

													BgL_l1635z00_4736 = BgL_arg1857z00_2654;
													BgL_tail1638z00_4737 = BgL_newtail1639z00_2653;
													BgL_tail1638z00_2650 = BgL_tail1638z00_4737;
													BgL_l1635z00_2649 = BgL_l1635z00_4736;
													goto BgL_zc3z04anonymousza31855ze3z87_2651;
												}
											}
										}
								}
							}
						{	/* SawJvm/funcall.scm 114 */
							obj_t BgL_labsz00_2586;

							BgL_labsz00_2586 =
								BGl_getzd2labsze72z35zzsaw_jvm_funcallz00(((long) 0),
								BGl_sortz00zz__r4_vectors_6_8z00(BgL_iza2za2_2585,
									BGl_zc3zd2envz11zz__r4_numbers_6_5z00));
							{	/* SawJvm/funcall.scm 115 */

								{	/* SawJvm/funcall.scm 118 */
									obj_t BgL_arg1798z00_2587;

									{	/* SawJvm/funcall.scm 118 */
										obj_t BgL_arg1801z00_2588;

										{	/* SawJvm/funcall.scm 118 */
											obj_t BgL_arg1808z00_2589;

											BgL_arg1808z00_2589 =
												MAKE_YOUNG_PAIR(BINT(((long) 0)),
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_labsz00_2586, BNIL));
											BgL_arg1801z00_2588 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
												BgL_arg1808z00_2589);
										}
										BgL_arg1798z00_2587 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
											BgL_arg1801z00_2588);
									}
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_94,
										BgL_arg1798z00_2587);
								}
								BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_94,
									CNST_TABLE_REF(((long) 20)));
								BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_mez00_94,
									BGl_string2358z00zzsaw_jvm_funcallz00);
								BGl_pushzd2stringzd2zzsaw_jvm_outz00(BgL_mez00_94,
									BGl_string2359z00zzsaw_jvm_funcallz00);
								{	/* SawJvm/funcall.scm 122 */
									obj_t BgL_arg1811z00_2591;

									{	/* SawJvm/funcall.scm 122 */
										obj_t BgL_arg1820z00_2592;

										BgL_arg1820z00_2592 =
											MAKE_YOUNG_PAIR(BgL_thisz00_2584, BNIL);
										BgL_arg1811z00_2591 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
											BgL_arg1820z00_2592);
									}
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_94,
										BgL_arg1811z00_2591);
								}
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_94,
									CNST_TABLE_REF(((long) 22)));
								BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_94,
									CNST_TABLE_REF(((long) 23)));
								{
									obj_t BgL_l1640z00_2594;

									BgL_l1640z00_2594 = BgL_funsz00_95;
								BgL_zc3z04anonymousza31821ze3z87_2595:
									if (PAIRP(BgL_l1640z00_2594))
										{	/* SawJvm/funcall.scm 125 */
											{	/* SawJvm/funcall.scm 126 */
												obj_t BgL_fz00_2597;

												BgL_fz00_2597 = CAR(BgL_l1640z00_2594);
												{	/* SawJvm/funcall.scm 126 */
													BgL_variablez00_bglt BgL_gz00_2598;

													BgL_gz00_2598 =
														(((BgL_varz00_bglt) COBJECT(
																((BgL_varz00_bglt) BgL_fz00_2597)))->
														BgL_variablez00);
													{	/* SawJvm/funcall.scm 127 */
														obj_t BgL_arg1824z00_2599;

														{	/* SawJvm/funcall.scm 127 */
															int BgL_arg1825z00_2600;

															{
																BgL_indexedz00_bglt BgL_auxz00_4765;

																{
																	obj_t BgL_auxz00_4766;

																	{	/* SawJvm/funcall.scm 127 */
																		BgL_objectz00_bglt BgL_tmpz00_4767;

																		BgL_tmpz00_4767 =
																			((BgL_objectz00_bglt)
																			((BgL_globalz00_bglt) BgL_gz00_2598));
																		BgL_auxz00_4766 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4767);
																	}
																	BgL_auxz00_4765 =
																		((BgL_indexedz00_bglt) BgL_auxz00_4766);
																}
																BgL_arg1825z00_2600 =
																	(((BgL_indexedz00_bglt)
																		COBJECT(BgL_auxz00_4765))->BgL_indexz00);
															}
															BgL_arg1824z00_2599 =
																BGl_Lze70ze7zzsaw_jvm_funcallz00(
																(long) (BgL_arg1825z00_2600));
														}
														BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_94,
															BgL_arg1824z00_2599);
													}
													{	/* SawJvm/funcall.scm 128 */
														obj_t BgL_arg1827z00_2602;

														BgL_arg1827z00_2602 =
															(((BgL_sfunz00_bglt) COBJECT(
																	((BgL_sfunz00_bglt)
																		(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						((BgL_globalz00_bglt)
																							BgL_gz00_2598))))->
																			BgL_valuez00))))->BgL_argsz00);
														{	/* SawJvm/funcall.scm 129 */
															obj_t BgL_zc3z04anonymousza31831ze3z87_4148;

															BgL_zc3z04anonymousza31831ze3z87_4148 =
																MAKE_FX_PROCEDURE
																(BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_funcallz00,
																(int) (((long) 3)), (int) (((long) 1)));
															PROCEDURE_SET
																(BgL_zc3z04anonymousza31831ze3z87_4148,
																(int) (((long) 0)), ((obj_t) BgL_mez00_94));
															{	/* SawJvm/funcall.scm 128 */
																obj_t BgL_list1828z00_2603;

																{	/* SawJvm/funcall.scm 128 */
																	obj_t BgL_arg1829z00_2604;

																	{	/* SawJvm/funcall.scm 128 */
																		obj_t BgL_arg1830z00_2605;

																		BgL_arg1830z00_2605 =
																			MAKE_YOUNG_PAIR(BgL_arg1827z00_2602,
																			BNIL);
																		BgL_arg1829z00_2604 =
																			MAKE_YOUNG_PAIR(BgL_pz00_97,
																			BgL_arg1830z00_2605);
																	}
																	BgL_list1828z00_2603 =
																		MAKE_YOUNG_PAIR(BgL_talz00_98,
																		BgL_arg1829z00_2604);
																}
																BGl_forzd2eachzd2zz__r4_control_features_6_9z00
																	(BgL_zc3z04anonymousza31831ze3z87_4148,
																	BgL_list1828z00_2603);
													}}}
													{	/* SawJvm/funcall.scm 134 */
														BgL_globalz00_bglt BgL_arg1841z00_2622;

														BgL_arg1841z00_2622 =
															BGl_globalzd2entryzd2zzbackend_cplibz00(
															((BgL_globalz00_bglt) BgL_gz00_2598));
														BGl_callzd2globalzd2zzsaw_jvm_outz00(BgL_mez00_94,
															BgL_arg1841z00_2622);
													}
													BgL_tz00_2626 = BgL_trz00_96;
													{	/* SawJvm/funcall.scm 88 */
														obj_t BgL_arg1847z00_2628;

														if ((BgL_tz00_2626 == CNST_TABLE_REF(((long) 5))))
															{	/* SawJvm/funcall.scm 88 */
																BgL_arg1847z00_2628 =
																	CNST_TABLE_REF(((long) 6));
															}
														else
															{	/* SawJvm/funcall.scm 88 */
																bool_t BgL_test2454z00_4798;

																{	/* SawJvm/funcall.scm 88 */
																	bool_t BgL__ortest_1189z00_2639;

																	BgL__ortest_1189z00_2639 =
																		(BgL_tz00_2626 ==
																		CNST_TABLE_REF(((long) 7)));
																	if (BgL__ortest_1189z00_2639)
																		{	/* SawJvm/funcall.scm 88 */
																			BgL_test2454z00_4798 =
																				BgL__ortest_1189z00_2639;
																		}
																	else
																		{	/* SawJvm/funcall.scm 88 */
																			bool_t BgL__ortest_1190z00_2640;

																			BgL__ortest_1190z00_2640 =
																				(BgL_tz00_2626 ==
																				CNST_TABLE_REF(((long) 8)));
																			if (BgL__ortest_1190z00_2640)
																				{	/* SawJvm/funcall.scm 88 */
																					BgL_test2454z00_4798 =
																						BgL__ortest_1190z00_2640;
																				}
																			else
																				{	/* SawJvm/funcall.scm 88 */
																					bool_t BgL__ortest_1191z00_2641;

																					BgL__ortest_1191z00_2641 =
																						(BgL_tz00_2626 ==
																						CNST_TABLE_REF(((long) 9)));
																					if (BgL__ortest_1191z00_2641)
																						{	/* SawJvm/funcall.scm 88 */
																							BgL_test2454z00_4798 =
																								BgL__ortest_1191z00_2641;
																						}
																					else
																						{	/* SawJvm/funcall.scm 88 */
																							bool_t BgL__ortest_1192z00_2642;

																							BgL__ortest_1192z00_2642 =
																								(BgL_tz00_2626 ==
																								CNST_TABLE_REF(((long) 10)));
																							if (BgL__ortest_1192z00_2642)
																								{	/* SawJvm/funcall.scm 88 */
																									BgL_test2454z00_4798 =
																										BgL__ortest_1192z00_2642;
																								}
																							else
																								{	/* SawJvm/funcall.scm 88 */
																									BgL_test2454z00_4798 =
																										(BgL_tz00_2626 ==
																										CNST_TABLE_REF(((long)
																												11)));
																}}}}}
																if (BgL_test2454z00_4798)
																	{	/* SawJvm/funcall.scm 88 */
																		BgL_arg1847z00_2628 =
																			CNST_TABLE_REF(((long) 12));
																	}
																else
																	{	/* SawJvm/funcall.scm 88 */
																		if (
																			(BgL_tz00_2626 ==
																				CNST_TABLE_REF(((long) 13))))
																			{	/* SawJvm/funcall.scm 88 */
																				BgL_arg1847z00_2628 =
																					CNST_TABLE_REF(((long) 14));
																			}
																		else
																			{	/* SawJvm/funcall.scm 88 */
																				if (
																					(BgL_tz00_2626 ==
																						CNST_TABLE_REF(((long) 15))))
																					{	/* SawJvm/funcall.scm 88 */
																						BgL_arg1847z00_2628 =
																							CNST_TABLE_REF(((long) 16));
																					}
																				else
																					{	/* SawJvm/funcall.scm 88 */
																						if (
																							(BgL_tz00_2626 ==
																								CNST_TABLE_REF(((long) 17))))
																							{	/* SawJvm/funcall.scm 88 */
																								BgL_arg1847z00_2628 =
																									CNST_TABLE_REF(((long) 18));
																							}
																						else
																							{	/* SawJvm/funcall.scm 88 */
																								BgL_arg1847z00_2628 =
																									CNST_TABLE_REF(((long) 19));
															}}}}}
														BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_94,
															BgL_arg1847z00_2628);
											}}}
											{
												obj_t BgL_l1640z00_4828;

												BgL_l1640z00_4828 = CDR(BgL_l1640z00_2594);
												BgL_l1640z00_2594 = BgL_l1640z00_4828;
												goto BgL_zc3z04anonymousza31821ze3z87_2595;
											}
										}
									else
										{	/* SawJvm/funcall.scm 125 */
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



/* get-labs~2 */
	obj_t BGl_getzd2labsze72z35zzsaw_jvm_funcallz00(long BgL_iz00_2665,
		obj_t BgL_lz00_2666)
	{
		{	/* SawJvm/funcall.scm 103 */
			if (NULLP(BgL_lz00_2666))
				{	/* SawJvm/funcall.scm 100 */
					return BNIL;
				}
			else
				{	/* SawJvm/funcall.scm 100 */
					if ((BgL_iz00_2665 == (long) CINT(CAR(((obj_t) BgL_lz00_2666)))))
						{	/* SawJvm/funcall.scm 102 */
							obj_t BgL_arg1868z00_2671;
							obj_t BgL_arg1870z00_2672;

							BgL_arg1868z00_2671 =
								BGl_Lze70ze7zzsaw_jvm_funcallz00(BgL_iz00_2665);
							{	/* SawJvm/funcall.scm 102 */
								long BgL_arg1871z00_2673;
								obj_t BgL_arg1872z00_2674;

								BgL_arg1871z00_2673 = (BgL_iz00_2665 + ((long) 1));
								BgL_arg1872z00_2674 = CDR(((obj_t) BgL_lz00_2666));
								BgL_arg1870z00_2672 =
									BGl_getzd2labsze72z35zzsaw_jvm_funcallz00(BgL_arg1871z00_2673,
									BgL_arg1872z00_2674);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1868z00_2671, BgL_arg1870z00_2672);
						}
					else
						{	/* SawJvm/funcall.scm 103 */
							obj_t BgL_arg1873z00_2675;

							BgL_arg1873z00_2675 =
								BGl_getzd2labsze72z35zzsaw_jvm_funcallz00(
								(BgL_iz00_2665 + ((long) 1)), BgL_lz00_2666);
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
								BgL_arg1873z00_2675);
		}}}

	}



/* L~0 */
	obj_t BGl_Lze70ze7zzsaw_jvm_funcallz00(long BgL_nz00_2659)
	{
		{	/* SawJvm/funcall.scm 97 */
			{	/* SawJvm/funcall.scm 97 */
				obj_t BgL_arg1861z00_2661;

				{	/* SawJvm/funcall.scm 97 */
					obj_t BgL_arg1862z00_2662;

					{	/* SawJvm/funcall.scm 97 */

						BgL_arg1862z00_2662 =
							BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
							(BgL_nz00_2659, ((long) 10));
					}
					BgL_arg1861z00_2661 =
						string_append(BGl_string2360z00zzsaw_jvm_funcallz00,
						BgL_arg1862z00_2662);
				}
				return bstring_to_symbol(BgL_arg1861z00_2661);
			}
		}

	}



/* &<@anonymous:1831> */
	obj_t BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4149, obj_t BgL_tz00_4151, obj_t BgL_vz00_4152,
		obj_t BgL_az00_4153)
	{
		{	/* SawJvm/funcall.scm 128 */
			{	/* SawJvm/funcall.scm 129 */
				BgL_jvmz00_bglt BgL_mez00_4150;

				BgL_mez00_4150 =
					((BgL_jvmz00_bglt)
					PROCEDURE_REF(BgL_envz00_4149, (int) (((long) 0))));
				{
					obj_t BgL_tz00_4238;
					obj_t BgL_vz00_4239;

					{	/* SawJvm/funcall.scm 129 */
						obj_t BgL_taz00_4247;

						if (BGl_isazf3zf3zz__objectz00(BgL_az00_4153,
								BGl_localz00zzast_varz00))
							{	/* SawJvm/funcall.scm 129 */
								BgL_taz00_4247 =
									((obj_t)
									(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt)
													((BgL_localz00_bglt) BgL_az00_4153))))->BgL_typez00));
							}
						else
							{	/* SawJvm/funcall.scm 129 */
								BgL_taz00_4247 = BgL_az00_4153;
							}
						BgL_tz00_4238 = BgL_tz00_4151;
						BgL_vz00_4239 = BgL_vz00_4152;
						{	/* SawJvm/funcall.scm 106 */
							obj_t BgL_arg1878z00_4240;

							{	/* SawJvm/funcall.scm 106 */
								obj_t BgL_arg1879z00_4241;
								obj_t BgL_arg1881z00_4242;

								{	/* SawJvm/funcall.scm 106 */
									bool_t BgL_test2465z00_4859;

									{	/* SawJvm/funcall.scm 106 */
										bool_t BgL__ortest_1193z00_4243;

										BgL__ortest_1193z00_4243 =
											(BgL_tz00_4238 == CNST_TABLE_REF(((long) 7)));
										if (BgL__ortest_1193z00_4243)
											{	/* SawJvm/funcall.scm 106 */
												BgL_test2465z00_4859 = BgL__ortest_1193z00_4243;
											}
										else
											{	/* SawJvm/funcall.scm 106 */
												bool_t BgL__ortest_1194z00_4244;

												BgL__ortest_1194z00_4244 =
													(BgL_tz00_4238 == CNST_TABLE_REF(((long) 8)));
												if (BgL__ortest_1194z00_4244)
													{	/* SawJvm/funcall.scm 106 */
														BgL_test2465z00_4859 = BgL__ortest_1194z00_4244;
													}
												else
													{	/* SawJvm/funcall.scm 106 */
														bool_t BgL__ortest_1195z00_4245;

														BgL__ortest_1195z00_4245 =
															(BgL_tz00_4238 == CNST_TABLE_REF(((long) 9)));
														if (BgL__ortest_1195z00_4245)
															{	/* SawJvm/funcall.scm 106 */
																BgL_test2465z00_4859 = BgL__ortest_1195z00_4245;
															}
														else
															{	/* SawJvm/funcall.scm 106 */
																bool_t BgL__ortest_1196z00_4246;

																BgL__ortest_1196z00_4246 =
																	(BgL_tz00_4238 ==
																	CNST_TABLE_REF(((long) 10)));
																if (BgL__ortest_1196z00_4246)
																	{	/* SawJvm/funcall.scm 106 */
																		BgL_test2465z00_4859 =
																			BgL__ortest_1196z00_4246;
																	}
																else
																	{	/* SawJvm/funcall.scm 106 */
																		BgL_test2465z00_4859 =
																			(BgL_tz00_4238 ==
																			CNST_TABLE_REF(((long) 11)));
									}}}}}
									if (BgL_test2465z00_4859)
										{	/* SawJvm/funcall.scm 106 */
											BgL_arg1879z00_4241 = CNST_TABLE_REF(((long) 24));
										}
									else
										{	/* SawJvm/funcall.scm 106 */
											if ((BgL_tz00_4238 == CNST_TABLE_REF(((long) 13))))
												{	/* SawJvm/funcall.scm 106 */
													BgL_arg1879z00_4241 = CNST_TABLE_REF(((long) 25));
												}
											else
												{	/* SawJvm/funcall.scm 106 */
													if ((BgL_tz00_4238 == CNST_TABLE_REF(((long) 15))))
														{	/* SawJvm/funcall.scm 106 */
															BgL_arg1879z00_4241 = CNST_TABLE_REF(((long) 26));
														}
													else
														{	/* SawJvm/funcall.scm 106 */
															if (
																(BgL_tz00_4238 == CNST_TABLE_REF(((long) 17))))
																{	/* SawJvm/funcall.scm 106 */
																	BgL_arg1879z00_4241 =
																		CNST_TABLE_REF(((long) 27));
																}
															else
																{	/* SawJvm/funcall.scm 106 */
																	BgL_arg1879z00_4241 =
																		CNST_TABLE_REF(((long) 2));
								}}}}}
								BgL_arg1881z00_4242 = MAKE_YOUNG_PAIR(BgL_vz00_4239, BNIL);
								BgL_arg1878z00_4240 =
									MAKE_YOUNG_PAIR(BgL_arg1879z00_4241, BgL_arg1881z00_4242);
							}
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_4150,
								BgL_arg1878z00_4240);
						}
						{	/* SawJvm/funcall.scm 131 */
							bool_t BgL_test2473z00_4891;

							if (BGl_bigloozd2typezf3z21zztype_typez00(
									((BgL_typez00_bglt) BgL_taz00_4247)))
								{	/* SawJvm/funcall.scm 131 */
									if ((BgL_taz00_4247 == BGl_za2objza2z00zztype_cachez00))
										{	/* SawJvm/funcall.scm 131 */
											BgL_test2473z00_4891 = ((bool_t) 0);
										}
									else
										{	/* SawJvm/funcall.scm 131 */
											BgL_test2473z00_4891 = ((bool_t) 1);
										}
								}
							else
								{	/* SawJvm/funcall.scm 131 */
									BgL_test2473z00_4891 = ((bool_t) 0);
								}
							if (BgL_test2473z00_4891)
								{	/* SawJvm/funcall.scm 132 */
									obj_t BgL_arg1835z00_4248;

									{	/* SawJvm/funcall.scm 132 */
										obj_t BgL_arg1836z00_4249;

										{	/* SawJvm/funcall.scm 132 */
											obj_t BgL_arg1838z00_4250;

											BgL_arg1838z00_4250 =
												BGl_compilezd2typezd2zzsaw_jvm_outz00(BgL_mez00_4150,
												((BgL_typez00_bglt) BgL_taz00_4247));
											BgL_arg1836z00_4249 =
												MAKE_YOUNG_PAIR(BgL_arg1838z00_4250, BNIL);
										}
										BgL_arg1835z00_4248 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 28)),
											BgL_arg1836z00_4249);
									}
									return
										BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_4150,
										BgL_arg1835z00_4248);
								}
							else
								{	/* SawJvm/funcall.scm 131 */
									return BFALSE;
								}
						}
					}
				}
			}
		}

	}



/* module-funcall/apply */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_99)
	{
		{	/* SawJvm/funcall.scm 141 */
			{	/* SawJvm/funcall.scm 142 */
				obj_t BgL_pz00_2703;

				{	/* SawJvm/funcall.scm 142 */
					obj_t BgL_arg1893z00_2723;

					{	/* SawJvm/funcall.scm 142 */
						obj_t BgL_arg1895z00_2724;

						BgL_arg1895z00_2724 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_mez00_99)))->BgL_functionsz00);
						BgL_arg1893z00_2723 =
							BGl_getzd2procedureszd2zzsaw_proceduresz00(BgL_arg1895z00_2724);
					}
					BgL_pz00_2703 = bgl_reverse_bang(BgL_arg1893z00_2723);
				}
				{	/* SawJvm/funcall.scm 144 */
					long BgL_nz00_2704;

					BgL_nz00_2704 = ((long) 0);
					{
						obj_t BgL_l1642z00_2706;

						BgL_l1642z00_2706 = BgL_pz00_2703;
					BgL_zc3z04anonymousza31886ze3z87_2707:
						if (PAIRP(BgL_l1642z00_2706))
							{	/* SawJvm/funcall.scm 145 */
								{	/* SawJvm/funcall.scm 146 */
									obj_t BgL_varz00_2709;

									BgL_varz00_2709 = CAR(BgL_l1642z00_2706);
									{	/* SawJvm/funcall.scm 146 */
										BgL_indexedz00_bglt BgL_wide1199z00_2712;

										BgL_wide1199z00_2712 =
											((BgL_indexedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_indexedz00_bgl))));
										{	/* SawJvm/funcall.scm 146 */
											obj_t BgL_auxz00_4915;
											BgL_objectz00_bglt BgL_tmpz00_4911;

											BgL_auxz00_4915 = ((obj_t) BgL_wide1199z00_2712);
											BgL_tmpz00_4911 =
												((BgL_objectz00_bglt)
												((BgL_globalz00_bglt)
													((BgL_globalz00_bglt) BgL_varz00_2709)));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4911, BgL_auxz00_4915);
										}
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_varz00_2709)));
										{	/* SawJvm/funcall.scm 146 */
											long BgL_arg1888z00_2713;

											{	/* SawJvm/funcall.scm 146 */
												long BgL_res2285z00_3806;

												BgL_res2285z00_3806 =
													BGL_CLASS_INDEX(BGl_indexedz00zzsaw_jvm_funcallz00);
												BgL_arg1888z00_2713 = BgL_res2285z00_3806;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_globalz00_bglt)
														((BgL_globalz00_bglt) BgL_varz00_2709))),
												BgL_arg1888z00_2713);
										}
										((BgL_globalz00_bglt)
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_varz00_2709)));
									}
									{
										BgL_indexedz00_bglt BgL_auxz00_4929;

										{
											obj_t BgL_auxz00_4930;

											{	/* SawJvm/funcall.scm 146 */
												BgL_objectz00_bglt BgL_tmpz00_4931;

												BgL_tmpz00_4931 =
													((BgL_objectz00_bglt)
													((BgL_globalz00_bglt)
														((BgL_globalz00_bglt) BgL_varz00_2709)));
												BgL_auxz00_4930 = BGL_OBJECT_WIDENING(BgL_tmpz00_4931);
											}
											BgL_auxz00_4929 = ((BgL_indexedz00_bglt) BgL_auxz00_4930);
										}
										((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_4929))->
												BgL_indexz00) = ((int) (int) (BgL_nz00_2704)), BUNSPEC);
									}
									((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_varz00_2709));
									{	/* SawJvm/funcall.scm 147 */
										BgL_globalz00_bglt BgL_tmp1201z00_2715;

										BgL_tmp1201z00_2715 =
											BGl_globalzd2entryzd2zzbackend_cplibz00(
											((BgL_globalz00_bglt) BgL_varz00_2709));
										{	/* SawJvm/funcall.scm 147 */
											BgL_indexedz00_bglt BgL_wide1203z00_2717;

											BgL_wide1203z00_2717 =
												((BgL_indexedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_indexedz00_bgl))));
											{	/* SawJvm/funcall.scm 147 */
												obj_t BgL_auxz00_4947;
												BgL_objectz00_bglt BgL_tmpz00_4944;

												BgL_auxz00_4947 = ((obj_t) BgL_wide1203z00_2717);
												BgL_tmpz00_4944 =
													((BgL_objectz00_bglt)
													((BgL_globalz00_bglt) BgL_tmp1201z00_2715));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4944,
													BgL_auxz00_4947);
											}
											((BgL_objectz00_bglt)
												((BgL_globalz00_bglt) BgL_tmp1201z00_2715));
											{	/* SawJvm/funcall.scm 147 */
												long BgL_arg1889z00_2718;

												{	/* SawJvm/funcall.scm 147 */
													long BgL_res2286z00_3812;

													BgL_res2286z00_3812 =
														BGL_CLASS_INDEX(BGl_indexedz00zzsaw_jvm_funcallz00);
													BgL_arg1889z00_2718 = BgL_res2286z00_3812;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_globalz00_bglt) BgL_tmp1201z00_2715)),
													BgL_arg1889z00_2718);
											}
											((BgL_globalz00_bglt)
												((BgL_globalz00_bglt) BgL_tmp1201z00_2715));
										}
										{
											BgL_indexedz00_bglt BgL_auxz00_4958;

											{
												obj_t BgL_auxz00_4959;

												{	/* SawJvm/funcall.scm 147 */
													BgL_objectz00_bglt BgL_tmpz00_4960;

													BgL_tmpz00_4960 =
														((BgL_objectz00_bglt)
														((BgL_globalz00_bglt) BgL_tmp1201z00_2715));
													BgL_auxz00_4959 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4960);
												}
												BgL_auxz00_4958 =
													((BgL_indexedz00_bglt) BgL_auxz00_4959);
											}
											((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_4958))->
													BgL_indexz00) =
												((int) (int) (BgL_nz00_2704)), BUNSPEC);
										}
										((BgL_globalz00_bglt) BgL_tmp1201z00_2715);
									}
									BgL_nz00_2704 = (BgL_nz00_2704 + ((long) 1));
								}
								{
									obj_t BgL_l1642z00_4969;

									BgL_l1642z00_4969 = CDR(BgL_l1642z00_2706);
									BgL_l1642z00_2706 = BgL_l1642z00_4969;
									goto BgL_zc3z04anonymousza31886ze3z87_2707;
								}
							}
						else
							{	/* SawJvm/funcall.scm 145 */
								((bool_t) 1);
							}
					}
				}
				if (NULLP(BgL_pz00_2703))
					{	/* SawJvm/funcall.scm 150 */
						return BFALSE;
					}
				else
					{	/* SawJvm/funcall.scm 150 */
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_99, ((long) 0),
							BgL_pz00_2703);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_99, ((long) 1),
							BgL_pz00_2703);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_99, ((long) 2),
							BgL_pz00_2703);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_99, ((long) 3),
							BgL_pz00_2703);
						BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_mez00_99, ((long) 4),
							BgL_pz00_2703);
						return BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_mez00_99,
							BgL_pz00_2703);
					}
			}
		}

	}



/* &module-funcall/apply */
	obj_t BGl_z62modulezd2funcallzf2applyz42zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4158, obj_t BgL_mez00_4159)
	{
		{	/* SawJvm/funcall.scm 141 */
			return
				BGl_modulezd2funcallzf2applyz20zzsaw_jvm_funcallz00(
				((BgL_jvmz00_bglt) BgL_mez00_4159));
		}

	}



/* is-light-procedure? */
	bool_t BGl_iszd2lightzd2procedurezf3zf3zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_103, obj_t BgL_gz00_104)
	{
		{	/* SawJvm/funcall.scm 164 */
			{	/* SawJvm/funcall.scm 165 */
				BgL_valuez00_bglt BgL_vz00_2729;

				BgL_vz00_2729 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_gz00_104))))->BgL_valuez00);
				{	/* SawJvm/funcall.scm 166 */
					bool_t BgL_test2478z00_4984;

					{	/* SawJvm/funcall.scm 166 */
						bool_t BgL_res2289z00_3821;

						BgL_res2289z00_3821 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_vz00_2729), BGl_sfunz00zzast_varz00);
						BgL_test2478z00_4984 = BgL_res2289z00_3821;
					}
					if (BgL_test2478z00_4984)
						{	/* SawJvm/funcall.scm 166 */
							return
								(
								(((BgL_sfunz00_bglt) COBJECT(
											((BgL_sfunz00_bglt) BgL_vz00_2729)))->BgL_strengthz00) ==
								CNST_TABLE_REF(((long) 29)));
						}
					else
						{	/* SawJvm/funcall.scm 166 */
							return ((bool_t) 0);
						}
				}
			}
		}

	}



/* funcalli */
	obj_t BGl_funcalliz00zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_105,
		long BgL_iz00_106, obj_t BgL_procsz00_107)
	{
		{	/* SawJvm/funcall.scm 172 */
			{	/* SawJvm/funcall.scm 184 */
				obj_t BgL_needz00_2734;

				if (NULLP(BgL_procsz00_107))
					{	/* SawJvm/funcall.scm 184 */
						BgL_needz00_2734 = BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 184 */
						obj_t BgL_head1646z00_2763;

						{	/* SawJvm/funcall.scm 184 */
							bool_t BgL_arg1915z00_2775;

							BgL_arg1915z00_2775 =
								BGl_neededzf3ze70z14zzsaw_jvm_funcallz00(BgL_iz00_106,
								BgL_mez00_105, CAR(BgL_procsz00_107));
							{	/* SawJvm/funcall.scm 184 */
								obj_t BgL_res2299z00_3840;

								BgL_res2299z00_3840 =
									MAKE_YOUNG_PAIR(BBOOL(BgL_arg1915z00_2775), BNIL);
								BgL_head1646z00_2763 = BgL_res2299z00_3840;
							}
						}
						{	/* SawJvm/funcall.scm 184 */
							obj_t BgL_g1649z00_2764;

							BgL_g1649z00_2764 = CDR(BgL_procsz00_107);
							{
								obj_t BgL_l1644z00_2766;
								obj_t BgL_tail1647z00_2767;

								BgL_l1644z00_2766 = BgL_g1649z00_2764;
								BgL_tail1647z00_2767 = BgL_head1646z00_2763;
							BgL_zc3z04anonymousza31910ze3z87_2768:
								if (NULLP(BgL_l1644z00_2766))
									{	/* SawJvm/funcall.scm 184 */
										BgL_needz00_2734 = BgL_head1646z00_2763;
									}
								else
									{	/* SawJvm/funcall.scm 184 */
										obj_t BgL_newtail1648z00_2770;

										{	/* SawJvm/funcall.scm 184 */
											bool_t BgL_arg1913z00_2772;

											{	/* SawJvm/funcall.scm 184 */
												obj_t BgL_arg1914z00_2773;

												BgL_arg1914z00_2773 = CAR(((obj_t) BgL_l1644z00_2766));
												BgL_arg1913z00_2772 =
													BGl_neededzf3ze70z14zzsaw_jvm_funcallz00(BgL_iz00_106,
													BgL_mez00_105, BgL_arg1914z00_2773);
											}
											{	/* SawJvm/funcall.scm 184 */
												obj_t BgL_res2301z00_3844;

												BgL_res2301z00_3844 =
													MAKE_YOUNG_PAIR(BBOOL(BgL_arg1913z00_2772), BNIL);
												BgL_newtail1648z00_2770 = BgL_res2301z00_3844;
											}
										}
										SET_CDR(BgL_tail1647z00_2767, BgL_newtail1648z00_2770);
										{	/* SawJvm/funcall.scm 184 */
											obj_t BgL_arg1912z00_2771;

											BgL_arg1912z00_2771 = CDR(((obj_t) BgL_l1644z00_2766));
											{
												obj_t BgL_tail1647z00_5009;
												obj_t BgL_l1644z00_5008;

												BgL_l1644z00_5008 = BgL_arg1912z00_2771;
												BgL_tail1647z00_5009 = BgL_newtail1648z00_2770;
												BgL_tail1647z00_2767 = BgL_tail1647z00_5009;
												BgL_l1644z00_2766 = BgL_l1644z00_5008;
												goto BgL_zc3z04anonymousza31910ze3z87_2768;
											}
										}
									}
							}
						}
					}
				{	/* SawJvm/funcall.scm 185 */
					bool_t BgL_test2481z00_5010;

					{
						obj_t BgL_l1650z00_2753;

						BgL_l1650z00_2753 = BgL_needz00_2734;
					BgL_zc3z04anonymousza31907ze3z87_2754:
						if (NULLP(BgL_l1650z00_2753))
							{	/* SawJvm/funcall.scm 185 */
								BgL_test2481z00_5010 = ((bool_t) 1);
							}
						else
							{	/* SawJvm/funcall.scm 185 */
								bool_t BgL_test2483z00_5013;

								if (CBOOL(CAR(((obj_t) BgL_l1650z00_2753))))
									{	/* SawJvm/funcall.scm 185 */
										BgL_test2483z00_5013 = ((bool_t) 0);
									}
								else
									{	/* SawJvm/funcall.scm 185 */
										BgL_test2483z00_5013 = ((bool_t) 1);
									}
								if (BgL_test2483z00_5013)
									{
										obj_t BgL_l1650z00_5018;

										BgL_l1650z00_5018 = CDR(((obj_t) BgL_l1650z00_2753));
										BgL_l1650z00_2753 = BgL_l1650z00_5018;
										goto BgL_zc3z04anonymousza31907ze3z87_2754;
									}
								else
									{	/* SawJvm/funcall.scm 185 */
										BgL_test2481z00_5010 = ((bool_t) 0);
									}
							}
					}
					if (BgL_test2481z00_5010)
						{	/* SawJvm/funcall.scm 185 */
							return BFALSE;
						}
					else
						{	/* SawJvm/funcall.scm 186 */
							obj_t BgL_fnamez00_2745;

							{	/* SawJvm/funcall.scm 186 */
								obj_t BgL_arg1906z00_2749;

								{	/* SawJvm/funcall.scm 186 */

									BgL_arg1906z00_2749 =
										BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
										(BgL_iz00_106, ((long) 10));
								}
								BgL_fnamez00_2745 =
									string_append(BGl_string2361z00zzsaw_jvm_funcallz00,
									BgL_arg1906z00_2749);
							}
							{	/* SawJvm/funcall.scm 186 */
								obj_t BgL_pz00_2746;

								{	/* SawJvm/funcall.scm 187 */
									obj_t BgL_arg1905z00_2748;

									BgL_arg1905z00_2748 =
										BGl_nameze70ze7zzsaw_jvm_funcallz00(BgL_iz00_106);
									BgL_pz00_2746 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 30)),
										BgL_arg1905z00_2748);
								}
								{	/* SawJvm/funcall.scm 187 */

									BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_105,
										bstring_to_symbol(BgL_fnamez00_2745));
									BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_105,
										BgL_pz00_2746, BNIL);
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_105,
										CNST_TABLE_REF(((long) 31)));
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_105,
										CNST_TABLE_REF(((long) 3)));
									BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_mez00_105,
										BgL_iz00_106, BgL_needz00_2734, BgL_procsz00_107,
										BgL_fnamez00_2745, BgL_pz00_2746);
									return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_105);
								}
							}
						}
				}
			}
		}

	}



/* needed?~0 */
	bool_t BGl_neededzf3ze70z14zzsaw_jvm_funcallz00(long BgL_iz00_4215,
		BgL_jvmz00_bglt BgL_mez00_4214, obj_t BgL_pz00_2777)
	{
		{	/* SawJvm/funcall.scm 182 */
			{	/* SawJvm/funcall.scm 174 */
				bool_t BgL_test2485z00_5035;

				{	/* SawJvm/funcall.scm 174 */
					BgL_globalz00_bglt BgL_arg1923z00_2788;

					BgL_arg1923z00_2788 =
						BGl_globalzd2entryzd2zzbackend_cplibz00(
						((BgL_globalz00_bglt) BgL_pz00_2777));
					BgL_test2485z00_5035 =
						BGl_iszd2lightzd2procedurezf3zf3zzsaw_jvm_funcallz00(BgL_mez00_4214,
						((obj_t) BgL_arg1923z00_2788));
				}
				if (BgL_test2485z00_5035)
					{	/* SawJvm/funcall.scm 174 */
						return ((bool_t) 0);
					}
				else
					{	/* SawJvm/funcall.scm 175 */
						obj_t BgL_arityz00_2780;

						BgL_arityz00_2780 =
							BGl_globalzd2arityzd2zzbackend_cplibz00(
							((BgL_globalz00_bglt) BgL_pz00_2777));
						if (CBOOL(BgL_arityz00_2780))
							{	/* SawJvm/funcall.scm 177 */
								bool_t BgL__ortest_1206z00_2781;

								if (((long) CINT(BgL_arityz00_2780) >= ((long) 0)))
									{	/* SawJvm/funcall.scm 177 */
										if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(BgL_pz00_2777))
											{	/* SawJvm/funcall.scm 178 */
												BgL__ortest_1206z00_2781 =
													BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_arityz00_2780,
													BINT(BgL_iz00_4215));
											}
										else
											{	/* SawJvm/funcall.scm 178 */
												BgL__ortest_1206z00_2781 =
													((long) CINT(BgL_arityz00_2780) == BgL_iz00_4215);
									}}
								else
									{	/* SawJvm/funcall.scm 177 */
										BgL__ortest_1206z00_2781 = ((bool_t) 0);
									}
								if (BgL__ortest_1206z00_2781)
									{	/* SawJvm/funcall.scm 177 */
										return BgL__ortest_1206z00_2781;
									}
								else
									{	/* SawJvm/funcall.scm 177 */
										if (((long) CINT(BgL_arityz00_2780) < ((long) 0)))
											{	/* SawJvm/funcall.scm 181 */
												obj_t BgL_arg1918z00_2783;

												BgL_arg1918z00_2783 =
													BGL_SAFE_MINUS_FX(((long) -1), BgL_iz00_4215);
												return
													BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_2780,
													BgL_arg1918z00_2783);
											}
										else
											{	/* SawJvm/funcall.scm 181 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* SawJvm/funcall.scm 176 */
								return (BgL_iz00_4215 <= ((long) 1));
		}}}}

	}



/* name~0 */
	obj_t BGl_nameze70ze7zzsaw_jvm_funcallz00(long BgL_nz00_2789)
	{
		{	/* SawJvm/funcall.scm 183 */
			if ((BgL_nz00_2789 == ((long) 0)))
				{	/* SawJvm/funcall.scm 183 */
					return BNIL;
				}
			else
				{	/* SawJvm/funcall.scm 183 */
					obj_t BgL_arg1926z00_2792;
					obj_t BgL_arg1927z00_2793;

					{	/* SawJvm/funcall.scm 183 */

						{	/* SawJvm/funcall.scm 183 */

							BgL_arg1926z00_2792 = BGl_gensymz00zz__r4_symbols_6_4z00(BFALSE);
						}
					}
					BgL_arg1927z00_2793 =
						BGl_nameze70ze7zzsaw_jvm_funcallz00((BgL_nz00_2789 - ((long) 1)));
					return MAKE_YOUNG_PAIR(BgL_arg1926z00_2792, BgL_arg1927z00_2793);
				}
		}

	}



/* compile-funi */
	obj_t BGl_compilezd2funizd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt BgL_mez00_108,
		long BgL_iz00_109, obj_t BgL_needz00_110, obj_t BgL_procsz00_111,
		obj_t BgL_fnamez00_112, obj_t BgL_paramsz00_113)
	{
		{	/* SawJvm/funcall.scm 196 */
			{	/* SawJvm/funcall.scm 203 */
				obj_t BgL_labsz00_2800;

				BgL_labsz00_2800 =
					BGl_getzd2labsze71z35zzsaw_jvm_funcallz00(((long) 0), BgL_needz00_110,
					BgL_procsz00_111);
				{	/* SawJvm/funcall.scm 204 */
					obj_t BgL_arg1929z00_2801;

					{	/* SawJvm/funcall.scm 204 */
						obj_t BgL_arg1930z00_2802;

						{	/* SawJvm/funcall.scm 204 */
							obj_t BgL_arg1931z00_2803;

							BgL_arg1931z00_2803 =
								MAKE_YOUNG_PAIR(BINT(((long) 0)),
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_labsz00_2800, BNIL));
							BgL_arg1930z00_2802 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
								BgL_arg1931z00_2803);
						}
						BgL_arg1929z00_2801 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)), BgL_arg1930z00_2802);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_108, BgL_arg1929z00_2801);
				}
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_108,
					CNST_TABLE_REF(((long) 20)));
				{
					obj_t BgL_l1653z00_2806;

					BgL_l1653z00_2806 = BgL_paramsz00_113;
				BgL_zc3z04anonymousza31933ze3z87_2807:
					if (PAIRP(BgL_l1653z00_2806))
						{	/* SawJvm/funcall.scm 206 */
							{	/* SawJvm/funcall.scm 206 */
								obj_t BgL_vz00_2809;

								BgL_vz00_2809 = CAR(BgL_l1653z00_2806);
								{	/* SawJvm/funcall.scm 206 */
									obj_t BgL_arg1935z00_2810;

									{	/* SawJvm/funcall.scm 206 */
										obj_t BgL_arg1936z00_2811;

										BgL_arg1936z00_2811 = MAKE_YOUNG_PAIR(BgL_vz00_2809, BNIL);
										BgL_arg1935z00_2810 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
											BgL_arg1936z00_2811);
									}
									BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_108,
										BgL_arg1935z00_2810);
							}}
							{
								obj_t BgL_l1653z00_5084;

								BgL_l1653z00_5084 = CDR(BgL_l1653z00_2806);
								BgL_l1653z00_2806 = BgL_l1653z00_5084;
								goto BgL_zc3z04anonymousza31933ze3z87_2807;
							}
						}
					else
						{	/* SawJvm/funcall.scm 206 */
							((bool_t) 1);
						}
				}
				{	/* SawJvm/funcall.scm 207 */
					obj_t BgL_arg1938z00_2814;

					{	/* SawJvm/funcall.scm 207 */
						obj_t BgL_arg1939z00_2815;

						BgL_arg1939z00_2815 =
							MAKE_YOUNG_PAIR(bstring_to_symbol(string_append
								(BGl_string2362z00zzsaw_jvm_funcallz00, BgL_fnamez00_112)),
							BNIL);
						BgL_arg1938z00_2814 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 32)), BgL_arg1939z00_2815);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_108, BgL_arg1938z00_2814);
				}
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_108,
					CNST_TABLE_REF(((long) 19)));
				{	/* SawJvm/funcall.scm 210 */
					obj_t BgL_zc3z04anonymousza31946ze3z87_4160;

					BgL_zc3z04anonymousza31946ze3z87_4160 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza31946ze3ze5zzsaw_jvm_funcallz00,
						(int) (((long) 3)), (int) (((long) 3)));
					PROCEDURE_SET(BgL_zc3z04anonymousza31946ze3z87_4160,
						(int) (((long) 0)), ((obj_t) BgL_mez00_108));
					PROCEDURE_SET(BgL_zc3z04anonymousza31946ze3z87_4160,
						(int) (((long) 1)), BINT(BgL_iz00_109));
					PROCEDURE_SET(BgL_zc3z04anonymousza31946ze3z87_4160,
						(int) (((long) 2)), BgL_paramsz00_113);
					{	/* SawJvm/funcall.scm 209 */
						obj_t BgL_list1943z00_2819;

						{	/* SawJvm/funcall.scm 209 */
							obj_t BgL_arg1944z00_2820;

							{	/* SawJvm/funcall.scm 209 */
								obj_t BgL_arg1945z00_2821;

								BgL_arg1945z00_2821 = MAKE_YOUNG_PAIR(BgL_procsz00_111, BNIL);
								BgL_arg1944z00_2820 =
									MAKE_YOUNG_PAIR(BgL_labsz00_2800, BgL_arg1945z00_2821);
							}
							BgL_list1943z00_2819 =
								MAKE_YOUNG_PAIR(BgL_needz00_110, BgL_arg1944z00_2820);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3z04anonymousza31946ze3z87_4160, BgL_list1943z00_2819);
					}
				}
			}
		}

	}



/* get-labs~1 */
	obj_t BGl_getzd2labsze71z35zzsaw_jvm_funcallz00(long BgL_iz00_2833,
		obj_t BgL_nsz00_2834, obj_t BgL_psz00_2835)
	{
		{	/* SawJvm/funcall.scm 202 */
			{
				long BgL_nz00_2827;

				if (NULLP(BgL_nsz00_2834))
					{	/* SawJvm/funcall.scm 199 */
						return BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 201 */
						obj_t BgL_arg1952z00_2838;
						obj_t BgL_arg1953z00_2839;

						if (CBOOL(CAR(((obj_t) BgL_nsz00_2834))))
							{	/* SawJvm/funcall.scm 201 */
								BgL_nz00_2827 = BgL_iz00_2833;
								{	/* SawJvm/funcall.scm 197 */
									obj_t BgL_arg1948z00_2829;

									{	/* SawJvm/funcall.scm 197 */
										obj_t BgL_arg1949z00_2830;

										{	/* SawJvm/funcall.scm 197 */

											BgL_arg1949z00_2830 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_nz00_2827, ((long) 10));
										}
										BgL_arg1948z00_2829 =
											string_append(BGl_string2360z00zzsaw_jvm_funcallz00,
											BgL_arg1949z00_2830);
									}
									BgL_arg1952z00_2838 = bstring_to_symbol(BgL_arg1948z00_2829);
							}}
						else
							{	/* SawJvm/funcall.scm 201 */
								BgL_arg1952z00_2838 = CNST_TABLE_REF(((long) 20));
							}
						{	/* SawJvm/funcall.scm 202 */
							long BgL_arg1955z00_2841;
							obj_t BgL_arg1956z00_2842;
							obj_t BgL_arg1957z00_2843;

							BgL_arg1955z00_2841 = (BgL_iz00_2833 + ((long) 1));
							BgL_arg1956z00_2842 = CDR(((obj_t) BgL_nsz00_2834));
							BgL_arg1957z00_2843 = CDR(((obj_t) BgL_psz00_2835));
							BgL_arg1953z00_2839 =
								BGl_getzd2labsze71z35zzsaw_jvm_funcallz00(BgL_arg1955z00_2841,
								BgL_arg1956z00_2842, BgL_arg1957z00_2843);
						}
						return MAKE_YOUNG_PAIR(BgL_arg1952z00_2838, BgL_arg1953z00_2839);
					}
			}
		}

	}



/* &<@anonymous:1946> */
	obj_t BGl_z62zc3z04anonymousza31946ze3ze5zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4161, obj_t BgL_nzf3zf3_4165, obj_t BgL_labz00_4166,
		obj_t BgL_pz00_4167)
	{
		{	/* SawJvm/funcall.scm 209 */
			{	/* SawJvm/funcall.scm 210 */
				BgL_jvmz00_bglt BgL_mez00_4162;
				long BgL_iz00_4163;
				obj_t BgL_paramsz00_4164;

				BgL_mez00_4162 =
					((BgL_jvmz00_bglt)
					PROCEDURE_REF(BgL_envz00_4161, (int) (((long) 0))));
				BgL_iz00_4163 =
					(long) CINT(PROCEDURE_REF(BgL_envz00_4161, (int) (((long) 1))));
				BgL_paramsz00_4164 =
					((obj_t) PROCEDURE_REF(BgL_envz00_4161, (int) (((long) 2))));
				if (CBOOL(BgL_nzf3zf3_4165))
					{	/* SawJvm/funcall.scm 210 */
						return
							BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00(
							((obj_t) BgL_mez00_4162),
							BINT(BgL_iz00_4163), BgL_labz00_4166, BgL_pz00_4167,
							BgL_paramsz00_4164);
					}
				else
					{	/* SawJvm/funcall.scm 210 */
						return BFALSE;
					}
			}
		}

	}



/* compile-for-funcalli */
	obj_t BGl_compilezd2forzd2funcalliz00zzsaw_jvm_funcallz00(obj_t BgL_mez00_114,
		obj_t BgL_iz00_115, obj_t BgL_labz00_116, obj_t BgL_pz00_117,
		obj_t BgL_paramsz00_118)
	{
		{	/* SawJvm/funcall.scm 216 */
			{	/* SawJvm/funcall.scm 217 */
				obj_t BgL_arityz00_2846;

				BgL_arityz00_2846 =
					BGl_globalzd2arityzd2zzbackend_cplibz00(
					((BgL_globalz00_bglt) BgL_pz00_117));
				{	/* SawJvm/funcall.scm 217 */
					BgL_globalz00_bglt BgL_entryz00_2847;

					BgL_entryz00_2847 =
						BGl_globalzd2entryzd2zzbackend_cplibz00(
						((BgL_globalz00_bglt) BgL_pz00_117));
					{	/* SawJvm/funcall.scm 218 */

						{
							obj_t BgL_nz00_2974;
							obj_t BgL_iz00_2968;

							BGl_labelz00zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_114), BgL_labz00_116);
							if ((BgL_arityz00_2846 == BFALSE))
								{	/* SawJvm/funcall.scm 228 */
									{
										obj_t BgL_l1655z00_2852;

										BgL_l1655z00_2852 = BgL_paramsz00_118;
									BgL_zc3z04anonymousza31959ze3z87_2853:
										if (PAIRP(BgL_l1655z00_2852))
											{	/* SawJvm/funcall.scm 229 */
												{	/* SawJvm/funcall.scm 229 */
													obj_t BgL_vz00_2855;

													BgL_vz00_2855 = CAR(BgL_l1655z00_2852);
													{	/* SawJvm/funcall.scm 229 */
														obj_t BgL_arg1961z00_2856;

														{	/* SawJvm/funcall.scm 229 */
															obj_t BgL_arg1962z00_2857;

															BgL_arg1962z00_2857 =
																MAKE_YOUNG_PAIR(BgL_vz00_2855, BNIL);
															BgL_arg1961z00_2856 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
																BgL_arg1962z00_2857);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_114),
															BgL_arg1961z00_2856);
												}}
												{
													obj_t BgL_l1655z00_5156;

													BgL_l1655z00_5156 = CDR(BgL_l1655z00_2852);
													BgL_l1655z00_2852 = BgL_l1655z00_5156;
													goto BgL_zc3z04anonymousza31959ze3z87_2853;
												}
											}
										else
											{	/* SawJvm/funcall.scm 229 */
												((bool_t) 1);
											}
									}
									if (((long) CINT(BgL_iz00_115) == ((long) 0)))
										{	/* SawJvm/funcall.scm 230 */
											BGl_codez12z12zzsaw_jvm_outz00(
												((BgL_jvmz00_bglt) BgL_mez00_114),
												CNST_TABLE_REF(((long) 34)));
											{	/* SawJvm/funcall.scm 232 */
												obj_t BgL_arg1965z00_2861;

												{	/* SawJvm/funcall.scm 232 */
													obj_t BgL_arg1966z00_2862;

													{	/* SawJvm/funcall.scm 232 */
														obj_t BgL_arg1967z00_2863;

														BgL_arg1967z00_2863 =
															BGl_declarezd2globalzd2zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_114),
															((BgL_globalz00_bglt) BgL_pz00_117));
														BgL_arg1966z00_2862 =
															MAKE_YOUNG_PAIR(BgL_arg1967z00_2863, BNIL);
													}
													BgL_arg1965z00_2861 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
														BgL_arg1966z00_2862);
												}
												BGl_codez12z12zzsaw_jvm_outz00(
													((BgL_jvmz00_bglt) BgL_mez00_114),
													BgL_arg1965z00_2861);
										}}
									else
										{	/* SawJvm/funcall.scm 233 */
											obj_t BgL_arg1968z00_2864;

											{	/* SawJvm/funcall.scm 233 */
												obj_t BgL_arg1969z00_2865;

												{	/* SawJvm/funcall.scm 233 */
													obj_t BgL_arg1970z00_2866;

													BgL_arg1970z00_2866 =
														BGl_declarezd2globalzd2zzsaw_jvm_outz00(
														((BgL_jvmz00_bglt) BgL_mez00_114),
														((BgL_globalz00_bglt) BgL_pz00_117));
													BgL_arg1969z00_2865 =
														MAKE_YOUNG_PAIR(BgL_arg1970z00_2866, BNIL);
												}
												BgL_arg1968z00_2864 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 36)),
													BgL_arg1969z00_2865);
											}
											BGl_codez12z12zzsaw_jvm_outz00(
												((BgL_jvmz00_bglt) BgL_mez00_114), BgL_arg1968z00_2864);
								}}
							else
								{	/* SawJvm/funcall.scm 228 */
									if (((long) CINT(BgL_arityz00_2846) >= ((long) 0)))
										{	/* SawJvm/funcall.scm 234 */
											if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00(BgL_pz00_117))
												{	/* SawJvm/funcall.scm 235 */
													{
														obj_t BgL_l1657z00_2871;

														BgL_l1657z00_2871 = BgL_paramsz00_118;
													BgL_zc3z04anonymousza31973ze3z87_2872:
														if (PAIRP(BgL_l1657z00_2871))
															{	/* SawJvm/funcall.scm 237 */
																{	/* SawJvm/funcall.scm 237 */
																	obj_t BgL_vz00_2874;

																	BgL_vz00_2874 = CAR(BgL_l1657z00_2871);
																	{	/* SawJvm/funcall.scm 237 */
																		obj_t BgL_arg1975z00_2875;

																		{	/* SawJvm/funcall.scm 237 */
																			obj_t BgL_arg1976z00_2876;

																			BgL_arg1976z00_2876 =
																				MAKE_YOUNG_PAIR(BgL_vz00_2874, BNIL);
																			BgL_arg1975z00_2875 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						2)), BgL_arg1976z00_2876);
																		}
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_114),
																			BgL_arg1975z00_2875);
																}}
																{
																	obj_t BgL_l1657z00_5193;

																	BgL_l1657z00_5193 = CDR(BgL_l1657z00_2871);
																	BgL_l1657z00_2871 = BgL_l1657z00_5193;
																	goto BgL_zc3z04anonymousza31973ze3z87_2872;
																}
															}
														else
															{	/* SawJvm/funcall.scm 237 */
																((bool_t) 1);
															}
													}
													{	/* SawJvm/funcall.scm 238 */
														obj_t BgL_arg1979z00_2879;

														{	/* SawJvm/funcall.scm 238 */
															obj_t BgL_arg1980z00_2880;

															{	/* SawJvm/funcall.scm 238 */
																obj_t BgL_tmpz00_5195;

																BgL_iz00_2968 = BgL_iz00_115;
																{	/* SawJvm/funcall.scm 220 */
																	obj_t BgL_arg2039z00_2970;

																	{	/* SawJvm/funcall.scm 220 */
																		obj_t BgL_arg2040z00_2971;

																		{	/* SawJvm/funcall.scm 220 */

																			BgL_arg2040z00_2971 =
																				BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
																				((long) CINT(BgL_iz00_2968),
																				((long) 10));
																		}
																		BgL_arg2039z00_2970 =
																			string_append
																			(BGl_string2363z00zzsaw_jvm_funcallz00,
																			BgL_arg2040z00_2971);
																	}
																	BgL_tmpz00_5195 =
																		bstring_to_symbol(BgL_arg2039z00_2970);
																}
																BgL_arg1980z00_2880 =
																	MAKE_YOUNG_PAIR(BgL_tmpz00_5195, BNIL);
															}
															BgL_arg1979z00_2879 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
																BgL_arg1980z00_2880);
														}
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_114),
															BgL_arg1979z00_2879);
													}
													BGl_callzd2globalzd2zzsaw_jvm_outz00(
														((BgL_jvmz00_bglt) BgL_mez00_114),
														BgL_entryz00_2847);
												}
											else
												{	/* SawJvm/funcall.scm 240 */
													obj_t BgL_argsz00_2882;

													BgL_argsz00_2882 =
														(((BgL_sfunz00_bglt) COBJECT(
																((BgL_sfunz00_bglt)
																	(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_entryz00_2847)))->
																		BgL_valuez00))))->BgL_argsz00);
													{	/* SawJvm/funcall.scm 240 */
														obj_t BgL_typesz00_2883;

														if (NULLP(BgL_argsz00_2882))
															{	/* SawJvm/funcall.scm 241 */
																BgL_typesz00_2883 = BNIL;
															}
														else
															{	/* SawJvm/funcall.scm 241 */
																obj_t BgL_head1661z00_2902;

																{	/* SawJvm/funcall.scm 241 */
																	BgL_typez00_bglt BgL_arg1998z00_2914;

																	BgL_arg1998z00_2914 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						CAR(
																							((obj_t) BgL_argsz00_2882))))))->
																		BgL_typez00);
																	{	/* SawJvm/funcall.scm 241 */
																		obj_t BgL_res2318z00_3887;

																		BgL_res2318z00_3887 =
																			MAKE_YOUNG_PAIR(
																			((obj_t) BgL_arg1998z00_2914), BNIL);
																		BgL_head1661z00_2902 = BgL_res2318z00_3887;
																	}
																}
																{	/* SawJvm/funcall.scm 241 */
																	obj_t BgL_g1664z00_2903;

																	BgL_g1664z00_2903 =
																		CDR(((obj_t) BgL_argsz00_2882));
																	{
																		obj_t BgL_l1659z00_2905;
																		obj_t BgL_tail1662z00_2906;

																		BgL_l1659z00_2905 = BgL_g1664z00_2903;
																		BgL_tail1662z00_2906 = BgL_head1661z00_2902;
																	BgL_zc3z04anonymousza31993ze3z87_2907:
																		if (NULLP(BgL_l1659z00_2905))
																			{	/* SawJvm/funcall.scm 241 */
																				BgL_typesz00_2883 =
																					BgL_head1661z00_2902;
																			}
																		else
																			{	/* SawJvm/funcall.scm 241 */
																				obj_t BgL_newtail1663z00_2909;

																				{	/* SawJvm/funcall.scm 241 */
																					BgL_typez00_bglt BgL_arg1996z00_2911;

																					BgL_arg1996z00_2911 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										CAR(
																											((obj_t)
																												BgL_l1659z00_2905))))))->
																						BgL_typez00);
																					{	/* SawJvm/funcall.scm 241 */
																						obj_t BgL_res2320z00_3892;

																						BgL_res2320z00_3892 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_arg1996z00_2911),
																							BNIL);
																						BgL_newtail1663z00_2909 =
																							BgL_res2320z00_3892;
																					}
																				}
																				SET_CDR(BgL_tail1662z00_2906,
																					BgL_newtail1663z00_2909);
																				{	/* SawJvm/funcall.scm 241 */
																					obj_t BgL_arg1995z00_2910;

																					BgL_arg1995z00_2910 =
																						CDR(((obj_t) BgL_l1659z00_2905));
																					{
																						obj_t BgL_tail1662z00_5235;
																						obj_t BgL_l1659z00_5234;

																						BgL_l1659z00_5234 =
																							BgL_arg1995z00_2910;
																						BgL_tail1662z00_5235 =
																							BgL_newtail1663z00_2909;
																						BgL_tail1662z00_2906 =
																							BgL_tail1662z00_5235;
																						BgL_l1659z00_2905 =
																							BgL_l1659z00_5234;
																						goto
																							BgL_zc3z04anonymousza31993ze3z87_2907;
																					}
																				}
																			}
																	}
																}
															}
														{	/* SawJvm/funcall.scm 241 */

															{
																obj_t BgL_ll1665z00_2885;
																obj_t BgL_ll1666z00_2886;

																BgL_ll1665z00_2885 = BgL_paramsz00_118;
																BgL_ll1666z00_2886 = BgL_typesz00_2883;
															BgL_zc3z04anonymousza31982ze3z87_2887:
																if (NULLP(BgL_ll1665z00_2885))
																	{	/* SawJvm/funcall.scm 242 */
																		((bool_t) 1);
																	}
																else
																	{	/* SawJvm/funcall.scm 242 */
																		{	/* SawJvm/funcall.scm 243 */
																			obj_t BgL_vz00_2889;
																			obj_t BgL_tz00_2890;

																			BgL_vz00_2889 =
																				CAR(((obj_t) BgL_ll1665z00_2885));
																			BgL_tz00_2890 =
																				CAR(((obj_t) BgL_ll1666z00_2886));
																			{	/* SawJvm/funcall.scm 243 */
																				obj_t BgL_arg1984z00_2891;

																				{	/* SawJvm/funcall.scm 243 */
																					obj_t BgL_arg1985z00_2892;

																					BgL_arg1985z00_2892 =
																						MAKE_YOUNG_PAIR(BgL_vz00_2889,
																						BNIL);
																					BgL_arg1984z00_2891 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 2)),
																						BgL_arg1985z00_2892);
																				}
																				BGl_codez12z12zzsaw_jvm_outz00(
																					((BgL_jvmz00_bglt) BgL_mez00_114),
																					BgL_arg1984z00_2891);
																			}
																			if (
																				(BgL_tz00_2890 ==
																					BGl_za2objza2z00zztype_cachez00))
																				{	/* SawJvm/funcall.scm 244 */
																					BFALSE;
																				}
																			else
																				{	/* SawJvm/funcall.scm 245 */
																					obj_t BgL_arg1987z00_2894;

																					{	/* SawJvm/funcall.scm 245 */
																						obj_t BgL_arg1988z00_2895;

																						{	/* SawJvm/funcall.scm 245 */
																							obj_t BgL_arg1989z00_2896;

																							BgL_arg1989z00_2896 =
																								BGl_compilezd2typezd2zzsaw_jvm_outz00
																								(((BgL_jvmz00_bglt)
																									BgL_mez00_114),
																								((BgL_typez00_bglt)
																									BgL_tz00_2890));
																							BgL_arg1988z00_2895 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1989z00_2896, BNIL);
																						}
																						BgL_arg1987z00_2894 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 28)),
																							BgL_arg1988z00_2895);
																					}
																					BGl_codez12z12zzsaw_jvm_outz00(
																						((BgL_jvmz00_bglt) BgL_mez00_114),
																						BgL_arg1987z00_2894);
																		}}
																		{	/* SawJvm/funcall.scm 242 */
																			obj_t BgL_arg1990z00_2897;
																			obj_t BgL_arg1991z00_2898;

																			BgL_arg1990z00_2897 =
																				CDR(((obj_t) BgL_ll1665z00_2885));
																			BgL_arg1991z00_2898 =
																				CDR(((obj_t) BgL_ll1666z00_2886));
																			{
																				obj_t BgL_ll1666z00_5262;
																				obj_t BgL_ll1665z00_5261;

																				BgL_ll1665z00_5261 =
																					BgL_arg1990z00_2897;
																				BgL_ll1666z00_5262 =
																					BgL_arg1991z00_2898;
																				BgL_ll1666z00_2886 = BgL_ll1666z00_5262;
																				BgL_ll1665z00_2885 = BgL_ll1665z00_5261;
																				goto
																					BgL_zc3z04anonymousza31982ze3z87_2887;
																			}
																		}
																	}
															}
															BGl_callzd2globalzd2zzsaw_jvm_outz00(
																((BgL_jvmz00_bglt) BgL_mez00_114),
																BgL_entryz00_2847);
														}
													}
												}
										}
									else
										{	/* SawJvm/funcall.scm 234 */
											{	/* SawJvm/funcall.scm 249 */
												obj_t BgL_argsz00_2917;

												BgL_argsz00_2917 =
													(((BgL_sfunz00_bglt) COBJECT(
															((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_entryz00_2847)))->BgL_valuez00))))->
													BgL_argsz00);
												{	/* SawJvm/funcall.scm 249 */
													obj_t BgL_typesz00_2918;

													if (NULLP(BgL_argsz00_2917))
														{	/* SawJvm/funcall.scm 250 */
															BgL_typesz00_2918 = BNIL;
														}
													else
														{	/* SawJvm/funcall.scm 250 */
															obj_t BgL_head1670z00_2950;

															{	/* SawJvm/funcall.scm 250 */
																BgL_typez00_bglt BgL_arg2031z00_2962;

																BgL_arg2031z00_2962 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_argsz00_2917))))))->
																	BgL_typez00);
																{	/* SawJvm/funcall.scm 250 */
																	obj_t BgL_res2323z00_3905;

																	BgL_res2323z00_3905 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg2031z00_2962), BNIL);
																	BgL_head1670z00_2950 = BgL_res2323z00_3905;
																}
															}
															{	/* SawJvm/funcall.scm 250 */
																obj_t BgL_g1673z00_2951;

																BgL_g1673z00_2951 =
																	CDR(((obj_t) BgL_argsz00_2917));
																{
																	obj_t BgL_l1668z00_2953;
																	obj_t BgL_tail1671z00_2954;

																	BgL_l1668z00_2953 = BgL_g1673z00_2951;
																	BgL_tail1671z00_2954 = BgL_head1670z00_2950;
																BgL_zc3z04anonymousza32023ze3z87_2955:
																	if (NULLP(BgL_l1668z00_2953))
																		{	/* SawJvm/funcall.scm 250 */
																			BgL_typesz00_2918 = BgL_head1670z00_2950;
																		}
																	else
																		{	/* SawJvm/funcall.scm 250 */
																			obj_t BgL_newtail1672z00_2957;

																			{	/* SawJvm/funcall.scm 250 */
																				BgL_typez00_bglt BgL_arg2028z00_2959;

																				BgL_arg2028z00_2959 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_localz00_bglt)
																									CAR(
																										((obj_t)
																											BgL_l1668z00_2953))))))->
																					BgL_typez00);
																				{	/* SawJvm/funcall.scm 250 */
																					obj_t BgL_res2325z00_3910;

																					BgL_res2325z00_3910 =
																						MAKE_YOUNG_PAIR(
																						((obj_t) BgL_arg2028z00_2959),
																						BNIL);
																					BgL_newtail1672z00_2957 =
																						BgL_res2325z00_3910;
																				}
																			}
																			SET_CDR(BgL_tail1671z00_2954,
																				BgL_newtail1672z00_2957);
																			{	/* SawJvm/funcall.scm 250 */
																				obj_t BgL_arg2026z00_2958;

																				BgL_arg2026z00_2958 =
																					CDR(((obj_t) BgL_l1668z00_2953));
																				{
																					obj_t BgL_tail1671z00_5293;
																					obj_t BgL_l1668z00_5292;

																					BgL_l1668z00_5292 =
																						BgL_arg2026z00_2958;
																					BgL_tail1671z00_5293 =
																						BgL_newtail1672z00_2957;
																					BgL_tail1671z00_2954 =
																						BgL_tail1671z00_5293;
																					BgL_l1668z00_2953 = BgL_l1668z00_5292;
																					goto
																						BgL_zc3z04anonymousza32023ze3z87_2955;
																				}
																			}
																		}
																}
															}
														}
													{	/* SawJvm/funcall.scm 250 */

														{	/* SawJvm/funcall.scm 251 */
															obj_t BgL_g1209z00_2919;

															BgL_g1209z00_2919 =
																BGl_zd2zd2zz__r4_numbers_6_5z00
																(BgL_arityz00_2846, BNIL);
															{
																obj_t BgL_iz00_2921;
																obj_t BgL_paramsz00_2922;
																obj_t BgL_typesz00_2923;

																BgL_iz00_2921 = BgL_g1209z00_2919;
																BgL_paramsz00_2922 = BgL_paramsz00_118;
																BgL_typesz00_2923 = BgL_typesz00_2918;
															BgL_zc3z04anonymousza32001ze3z87_2924:
																if (((long) CINT(BgL_iz00_2921) == ((long) 0)))
																	{
																		obj_t BgL_l1674z00_2927;

																		BgL_l1674z00_2927 = BgL_paramsz00_2922;
																	BgL_zc3z04anonymousza32003ze3z87_2928:
																		if (PAIRP(BgL_l1674z00_2927))
																			{	/* SawJvm/funcall.scm 255 */
																				{	/* SawJvm/funcall.scm 255 */
																					obj_t BgL_vz00_2930;

																					BgL_vz00_2930 =
																						CAR(BgL_l1674z00_2927);
																					{	/* SawJvm/funcall.scm 255 */
																						obj_t BgL_arg2005z00_2931;

																						{	/* SawJvm/funcall.scm 255 */
																							obj_t BgL_arg2007z00_2932;

																							BgL_arg2007z00_2932 =
																								MAKE_YOUNG_PAIR(BgL_vz00_2930,
																								BNIL);
																							BgL_arg2005z00_2931 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 2)),
																								BgL_arg2007z00_2932);
																						}
																						BGl_codez12z12zzsaw_jvm_outz00(
																							((BgL_jvmz00_bglt) BgL_mez00_114),
																							BgL_arg2005z00_2931);
																				}}
																				{
																					obj_t BgL_l1674z00_5306;

																					BgL_l1674z00_5306 =
																						CDR(BgL_l1674z00_2927);
																					BgL_l1674z00_2927 = BgL_l1674z00_5306;
																					goto
																						BgL_zc3z04anonymousza32003ze3z87_2928;
																				}
																			}
																		else
																			{	/* SawJvm/funcall.scm 255 */
																				((bool_t) 1);
																			}
																	}
																else
																	{	/* SawJvm/funcall.scm 256 */
																		obj_t BgL_vz00_2935;
																		obj_t BgL_tz00_2936;

																		BgL_vz00_2935 =
																			CAR(((obj_t) BgL_paramsz00_2922));
																		BgL_tz00_2936 =
																			CAR(((obj_t) BgL_typesz00_2923));
																		{	/* SawJvm/funcall.scm 258 */
																			obj_t BgL_arg2010z00_2937;

																			{	/* SawJvm/funcall.scm 258 */
																				obj_t BgL_arg2011z00_2938;

																				BgL_arg2011z00_2938 =
																					MAKE_YOUNG_PAIR(BgL_vz00_2935, BNIL);
																				BgL_arg2010z00_2937 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							2)), BgL_arg2011z00_2938);
																			}
																			BGl_codez12z12zzsaw_jvm_outz00(
																				((BgL_jvmz00_bglt) BgL_mez00_114),
																				BgL_arg2010z00_2937);
																		}
																		if (
																			(BgL_tz00_2936 ==
																				BGl_za2objza2z00zztype_cachez00))
																			{	/* SawJvm/funcall.scm 259 */
																				BFALSE;
																			}
																		else
																			{	/* SawJvm/funcall.scm 260 */
																				obj_t BgL_arg2013z00_2940;

																				{	/* SawJvm/funcall.scm 260 */
																					obj_t BgL_arg2014z00_2941;

																					{	/* SawJvm/funcall.scm 260 */
																						obj_t BgL_arg2016z00_2942;

																						BgL_arg2016z00_2942 =
																							BGl_compilezd2typezd2zzsaw_jvm_outz00
																							(((BgL_jvmz00_bglt)
																								BgL_mez00_114),
																							((BgL_typez00_bglt)
																								BgL_tz00_2936));
																						BgL_arg2014z00_2941 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2016z00_2942, BNIL);
																					}
																					BgL_arg2013z00_2940 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 28)),
																						BgL_arg2014z00_2941);
																				}
																				BGl_codez12z12zzsaw_jvm_outz00(
																					((BgL_jvmz00_bglt) BgL_mez00_114),
																					BgL_arg2013z00_2940);
																			}
																		{	/* SawJvm/funcall.scm 261 */
																			long BgL_arg2017z00_2943;
																			obj_t BgL_arg2018z00_2944;
																			obj_t BgL_arg2020z00_2945;

																			BgL_arg2017z00_2943 =
																				(
																				(long) CINT(BgL_iz00_2921) -
																				((long) 1));
																			BgL_arg2018z00_2944 =
																				CDR(((obj_t) BgL_paramsz00_2922));
																			BgL_arg2020z00_2945 =
																				CDR(((obj_t) BgL_typesz00_2923));
																			{
																				obj_t BgL_typesz00_5336;
																				obj_t BgL_paramsz00_5335;
																				obj_t BgL_iz00_5333;

																				BgL_iz00_5333 =
																					BINT(BgL_arg2017z00_2943);
																				BgL_paramsz00_5335 =
																					BgL_arg2018z00_2944;
																				BgL_typesz00_5336 = BgL_arg2020z00_2945;
																				BgL_typesz00_2923 = BgL_typesz00_5336;
																				BgL_paramsz00_2922 = BgL_paramsz00_5335;
																				BgL_iz00_2921 = BgL_iz00_5333;
																				goto
																					BgL_zc3z04anonymousza32001ze3z87_2924;
																			}
																		}
																	}
															}
														}
													}
												}
											}
											BGl_codez12z12zzsaw_jvm_outz00(
												((BgL_jvmz00_bglt) BgL_mez00_114),
												CNST_TABLE_REF(((long) 38)));
											{	/* SawJvm/funcall.scm 263 */
												obj_t BgL_arg2035z00_2965;

												{	/* SawJvm/funcall.scm 263 */
													obj_t BgL_arg2036z00_2966;

													if (INTEGERP(BgL_arityz00_2846))
														{	/* SawJvm/funcall.scm 263 */
															long BgL_tmpz00_5342;

															BgL_tmpz00_5342 = (long) CINT(BgL_arityz00_2846);
															BgL_arg2036z00_2966 =
																BGL_SAFE_PLUS_FX(((long) 1), BgL_tmpz00_5342);
														}
													else
														{	/* SawJvm/funcall.scm 263 */
															BgL_arg2036z00_2966 =
																BGl_2zb2zb2zz__r4_numbers_6_5z00(BINT(((long)
																		1)), BgL_arityz00_2846);
														}
													BgL_arg2035z00_2965 =
														BGl_2zb2zb2zz__r4_numbers_6_5z00(BgL_iz00_115,
														BgL_arg2036z00_2966);
												}
												BgL_nz00_2974 = BgL_arg2035z00_2965;
											BgL_zc3z04anonymousza32041ze3z87_2975:
												{	/* SawJvm/funcall.scm 222 */
													bool_t BgL_test2512z00_5348;

													if (INTEGERP(BgL_nz00_2974))
														{	/* SawJvm/funcall.scm 222 */
															BgL_test2512z00_5348 =
																((long) CINT(BgL_nz00_2974) == ((long) 0));
														}
													else
														{	/* SawJvm/funcall.scm 222 */
															BgL_test2512z00_5348 =
																BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_nz00_2974,
																BINT(((long) 0)));
														}
													if (BgL_test2512z00_5348)
														{	/* SawJvm/funcall.scm 222 */
															BGl_callzd2globalzd2zzsaw_jvm_outz00(
																((BgL_jvmz00_bglt) BgL_mez00_114),
																BgL_entryz00_2847);
														}
													else
														{	/* SawJvm/funcall.scm 222 */
															BGl_codez12z12zzsaw_jvm_outz00(
																((BgL_jvmz00_bglt) BgL_mez00_114),
																CNST_TABLE_REF(((long) 33)));
															{	/* SawJvm/funcall.scm 225 */
																long BgL_arg2044z00_2978;

																BgL_arg2044z00_2978 =
																	((long) CINT(BgL_nz00_2974) - ((long) 1));
																{
																	obj_t BgL_nz00_5362;

																	BgL_nz00_5362 = BINT(BgL_arg2044z00_2978);
																	BgL_nz00_2974 = BgL_nz00_5362;
																	goto BgL_zc3z04anonymousza32041ze3z87_2975;
																}
															}
														}
												}
											}
										}
								}
							return
								BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_114), CNST_TABLE_REF(((long) 19)));
		}}}}}

	}



/* compile-apply */
	obj_t BGl_compilezd2applyzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_119, obj_t BgL_procsz00_120)
	{
		{	/* SawJvm/funcall.scm 269 */
			{	/* SawJvm/funcall.scm 274 */
				obj_t BgL_needz00_2983;

				if (NULLP(BgL_procsz00_120))
					{	/* SawJvm/funcall.scm 274 */
						BgL_needz00_2983 = BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 274 */
						obj_t BgL_head1678z00_3005;

						{	/* SawJvm/funcall.scm 274 */
							obj_t BgL_arg2059z00_3017;

							BgL_arg2059z00_3017 =
								BGl_xx_globalzd2arityze70z35zzsaw_jvm_funcallz00(BgL_mez00_119,
								CAR(BgL_procsz00_120));
							{	/* SawJvm/funcall.scm 274 */
								obj_t BgL_res2331z00_3927;

								BgL_res2331z00_3927 =
									MAKE_YOUNG_PAIR(BgL_arg2059z00_3017, BNIL);
								BgL_head1678z00_3005 = BgL_res2331z00_3927;
							}
						}
						{	/* SawJvm/funcall.scm 274 */
							obj_t BgL_g1681z00_3006;

							BgL_g1681z00_3006 = CDR(BgL_procsz00_120);
							{
								obj_t BgL_l1676z00_3008;
								obj_t BgL_tail1679z00_3009;

								BgL_l1676z00_3008 = BgL_g1681z00_3006;
								BgL_tail1679z00_3009 = BgL_head1678z00_3005;
							BgL_zc3z04anonymousza32053ze3z87_3010:
								if (NULLP(BgL_l1676z00_3008))
									{	/* SawJvm/funcall.scm 274 */
										BgL_needz00_2983 = BgL_head1678z00_3005;
									}
								else
									{	/* SawJvm/funcall.scm 274 */
										obj_t BgL_newtail1680z00_3012;

										{	/* SawJvm/funcall.scm 274 */
											obj_t BgL_arg2056z00_3014;

											{	/* SawJvm/funcall.scm 274 */
												obj_t BgL_arg2057z00_3015;

												BgL_arg2057z00_3015 = CAR(((obj_t) BgL_l1676z00_3008));
												BgL_arg2056z00_3014 =
													BGl_xx_globalzd2arityze70z35zzsaw_jvm_funcallz00
													(BgL_mez00_119, BgL_arg2057z00_3015);
											}
											{	/* SawJvm/funcall.scm 274 */
												obj_t BgL_res2333z00_3931;

												BgL_res2333z00_3931 =
													MAKE_YOUNG_PAIR(BgL_arg2056z00_3014, BNIL);
												BgL_newtail1680z00_3012 = BgL_res2333z00_3931;
											}
										}
										SET_CDR(BgL_tail1679z00_3009, BgL_newtail1680z00_3012);
										{	/* SawJvm/funcall.scm 274 */
											obj_t BgL_arg2055z00_3013;

											BgL_arg2055z00_3013 = CDR(((obj_t) BgL_l1676z00_3008));
											{
												obj_t BgL_tail1679z00_5383;
												obj_t BgL_l1676z00_5382;

												BgL_l1676z00_5382 = BgL_arg2055z00_3013;
												BgL_tail1679z00_5383 = BgL_newtail1680z00_3012;
												BgL_tail1679z00_3009 = BgL_tail1679z00_5383;
												BgL_l1676z00_3008 = BgL_l1676z00_5382;
												goto BgL_zc3z04anonymousza32053ze3z87_3010;
											}
										}
									}
							}
						}
					}
				{	/* SawJvm/funcall.scm 275 */
					bool_t BgL_test2516z00_5384;

					{
						obj_t BgL_l1682z00_2995;

						BgL_l1682z00_2995 = BgL_needz00_2983;
					BgL_zc3z04anonymousza32050ze3z87_2996:
						if (NULLP(BgL_l1682z00_2995))
							{	/* SawJvm/funcall.scm 275 */
								BgL_test2516z00_5384 = ((bool_t) 1);
							}
						else
							{	/* SawJvm/funcall.scm 275 */
								bool_t BgL_test2518z00_5387;

								if (CBOOL(CAR(((obj_t) BgL_l1682z00_2995))))
									{	/* SawJvm/funcall.scm 275 */
										BgL_test2518z00_5387 = ((bool_t) 0);
									}
								else
									{	/* SawJvm/funcall.scm 275 */
										BgL_test2518z00_5387 = ((bool_t) 1);
									}
								if (BgL_test2518z00_5387)
									{
										obj_t BgL_l1682z00_5392;

										BgL_l1682z00_5392 = CDR(((obj_t) BgL_l1682z00_2995));
										BgL_l1682z00_2995 = BgL_l1682z00_5392;
										goto BgL_zc3z04anonymousza32050ze3z87_2996;
									}
								else
									{	/* SawJvm/funcall.scm 275 */
										BgL_test2516z00_5384 = ((bool_t) 0);
									}
							}
					}
					if (BgL_test2516z00_5384)
						{	/* SawJvm/funcall.scm 275 */
							return BFALSE;
						}
					else
						{	/* SawJvm/funcall.scm 275 */
							BGl_openzd2libzd2methodz00zzsaw_jvm_outz00(BgL_mez00_119,
								CNST_TABLE_REF(((long) 39)));
							BGl_declarezd2localszd2zzsaw_jvm_outz00(BgL_mez00_119,
								CNST_TABLE_REF(((long) 40)), BNIL);
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_119,
								CNST_TABLE_REF(((long) 31)));
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_119,
								CNST_TABLE_REF(((long) 31)));
							BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_119,
								CNST_TABLE_REF(((long) 3)));
							BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_mez00_119,
								BgL_needz00_2983, BgL_procsz00_120);
							return BGl_closezd2methodzd2zzsaw_jvm_outz00(BgL_mez00_119);
						}
				}
			}
		}

	}



/* xx_global-arity~0 */
	obj_t BGl_xx_globalzd2arityze70z35zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_4213, obj_t BgL_pz00_3019)
	{
		{	/* SawJvm/funcall.scm 273 */
			if (BGl_iszd2lightzd2procedurezf3zf3zzsaw_jvm_funcallz00(BgL_mez00_4213,
					BgL_pz00_3019))
				{	/* SawJvm/funcall.scm 271 */
					return BFALSE;
				}
			else
				{	/* SawJvm/funcall.scm 272 */
					bool_t BgL_test2521z00_5409;

					{	/* SawJvm/funcall.scm 272 */
						BgL_globalz00_bglt BgL_arg2062z00_3023;

						BgL_arg2062z00_3023 =
							BGl_globalzd2entryzd2zzbackend_cplibz00(
							((BgL_globalz00_bglt) BgL_pz00_3019));
						BgL_test2521z00_5409 =
							BGl_iszd2lightzd2procedurezf3zf3zzsaw_jvm_funcallz00
							(BgL_mez00_4213, ((obj_t) BgL_arg2062z00_3023));
					}
					if (BgL_test2521z00_5409)
						{	/* SawJvm/funcall.scm 272 */
							return BFALSE;
						}
					else
						{	/* SawJvm/funcall.scm 272 */
							return
								BGl_globalzd2arityzd2zzbackend_cplibz00(
								((BgL_globalz00_bglt) BgL_pz00_3019));
						}
				}
		}

	}



/* compile-dispatch */
	obj_t BGl_compilezd2dispatchzd2zzsaw_jvm_funcallz00(BgL_jvmz00_bglt
		BgL_mez00_121, obj_t BgL_needz00_122, obj_t BgL_procsz00_123)
	{
		{	/* SawJvm/funcall.scm 284 */
			{	/* SawJvm/funcall.scm 291 */
				obj_t BgL_labsz00_3027;

				BgL_labsz00_3027 =
					BGl_getzd2labsze70z35zzsaw_jvm_funcallz00(((long) 0), BgL_needz00_122,
					BgL_procsz00_123);
				{	/* SawJvm/funcall.scm 292 */
					obj_t BgL_arg2063z00_3028;

					{	/* SawJvm/funcall.scm 292 */
						obj_t BgL_arg2065z00_3029;

						{	/* SawJvm/funcall.scm 292 */
							obj_t BgL_arg2066z00_3030;

							BgL_arg2066z00_3030 =
								MAKE_YOUNG_PAIR(BINT(((long) 0)),
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_labsz00_3027, BNIL));
							BgL_arg2065z00_3029 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
								BgL_arg2066z00_3030);
						}
						BgL_arg2063z00_3028 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)), BgL_arg2065z00_3029);
					}
					BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_121, BgL_arg2063z00_3028);
				}
				BGl_labelz00zzsaw_jvm_outz00(BgL_mez00_121,
					CNST_TABLE_REF(((long) 20)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_121,
					CNST_TABLE_REF(((long) 41)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_121,
					CNST_TABLE_REF(((long) 42)));
				BGl_codez12z12zzsaw_jvm_outz00(BgL_mez00_121,
					CNST_TABLE_REF(((long) 19)));
				{	/* SawJvm/funcall.scm 297 */
					obj_t BgL_zc3z04anonymousza32073ze3z87_4168;

					BgL_zc3z04anonymousza32073ze3z87_4168 =
						MAKE_FX_PROCEDURE
						(BGl_z62zc3z04anonymousza32073ze3ze5zzsaw_jvm_funcallz00,
						(int) (((long) 3)), (int) (((long) 1)));
					PROCEDURE_SET(BgL_zc3z04anonymousza32073ze3z87_4168,
						(int) (((long) 0)), ((obj_t) BgL_mez00_121));
					{	/* SawJvm/funcall.scm 297 */
						obj_t BgL_list2070z00_3033;

						{	/* SawJvm/funcall.scm 297 */
							obj_t BgL_arg2071z00_3034;

							{	/* SawJvm/funcall.scm 297 */
								obj_t BgL_arg2072z00_3035;

								BgL_arg2072z00_3035 = MAKE_YOUNG_PAIR(BgL_procsz00_123, BNIL);
								BgL_arg2071z00_3034 =
									MAKE_YOUNG_PAIR(BgL_labsz00_3027, BgL_arg2072z00_3035);
							}
							BgL_list2070z00_3033 =
								MAKE_YOUNG_PAIR(BgL_needz00_122, BgL_arg2071z00_3034);
						}
						return
							BGl_forzd2eachzd2zz__r4_control_features_6_9z00
							(BgL_zc3z04anonymousza32073ze3z87_4168, BgL_list2070z00_3033);
					}
				}
			}
		}

	}



/* get-labs~0 */
	obj_t BGl_getzd2labsze70z35zzsaw_jvm_funcallz00(long BgL_iz00_3047,
		obj_t BgL_nsz00_3048, obj_t BgL_psz00_3049)
	{
		{	/* SawJvm/funcall.scm 290 */
			{
				long BgL_nz00_3041;

				if (NULLP(BgL_nsz00_3048))
					{	/* SawJvm/funcall.scm 287 */
						return BNIL;
					}
				else
					{	/* SawJvm/funcall.scm 289 */
						obj_t BgL_arg2079z00_3052;
						obj_t BgL_arg2080z00_3053;

						if (CBOOL(CAR(((obj_t) BgL_nsz00_3048))))
							{	/* SawJvm/funcall.scm 289 */
								BgL_nz00_3041 = BgL_iz00_3047;
								{	/* SawJvm/funcall.scm 285 */
									obj_t BgL_arg2075z00_3043;

									{	/* SawJvm/funcall.scm 285 */
										obj_t BgL_arg2076z00_3044;

										{	/* SawJvm/funcall.scm 285 */

											BgL_arg2076z00_3044 =
												BGl_integerzd2ze3stringz31zz__r4_numbers_6_5_fixnumz00
												(BgL_nz00_3041, ((long) 10));
										}
										BgL_arg2075z00_3043 =
											string_append(BGl_string2360z00zzsaw_jvm_funcallz00,
											BgL_arg2076z00_3044);
									}
									BgL_arg2079z00_3052 = bstring_to_symbol(BgL_arg2075z00_3043);
							}}
						else
							{	/* SawJvm/funcall.scm 289 */
								BgL_arg2079z00_3052 = CNST_TABLE_REF(((long) 20));
							}
						{	/* SawJvm/funcall.scm 290 */
							long BgL_arg2082z00_3055;
							obj_t BgL_arg2083z00_3056;
							obj_t BgL_arg2084z00_3057;

							BgL_arg2082z00_3055 = (BgL_iz00_3047 + ((long) 1));
							BgL_arg2083z00_3056 = CDR(((obj_t) BgL_nsz00_3048));
							BgL_arg2084z00_3057 = CDR(((obj_t) BgL_psz00_3049));
							BgL_arg2080z00_3053 =
								BGl_getzd2labsze70z35zzsaw_jvm_funcallz00(BgL_arg2082z00_3055,
								BgL_arg2083z00_3056, BgL_arg2084z00_3057);
						}
						return MAKE_YOUNG_PAIR(BgL_arg2079z00_3052, BgL_arg2080z00_3053);
					}
			}
		}

	}



/* &<@anonymous:2073> */
	obj_t BGl_z62zc3z04anonymousza32073ze3ze5zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4169, obj_t BgL_nzf3zf3_4171, obj_t BgL_labz00_4172,
		obj_t BgL_pz00_4173)
	{
		{	/* SawJvm/funcall.scm 297 */
			{	/* SawJvm/funcall.scm 297 */
				BgL_jvmz00_bglt BgL_mez00_4170;

				BgL_mez00_4170 =
					((BgL_jvmz00_bglt)
					PROCEDURE_REF(BgL_envz00_4169, (int) (((long) 0))));
				if (CBOOL(BgL_nzf3zf3_4171))
					{	/* SawJvm/funcall.scm 297 */
						return
							BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(
							((obj_t) BgL_mez00_4170), BgL_labz00_4172, BgL_pz00_4173);
					}
				else
					{	/* SawJvm/funcall.scm 297 */
						return BFALSE;
					}
			}
		}

	}



/* compile-for-apply */
	obj_t BGl_compilezd2forzd2applyz00zzsaw_jvm_funcallz00(obj_t BgL_mez00_124,
		obj_t BgL_labz00_125, obj_t BgL_pz00_126)
	{
		{	/* SawJvm/funcall.scm 302 */
			{
				obj_t BgL_mez00_3088;
				obj_t BgL_nz00_3089;
				bool_t BgL_fixedarityzf3zf3_3090;
				obj_t BgL_typesz00_3091;

				{	/* SawJvm/funcall.scm 328 */
					obj_t BgL_arityz00_3061;

					BgL_arityz00_3061 =
						BGl_globalzd2arityzd2zzbackend_cplibz00(
						((BgL_globalz00_bglt) BgL_pz00_126));
					{	/* SawJvm/funcall.scm 328 */
						BgL_globalz00_bglt BgL_entryz00_3062;

						BgL_entryz00_3062 =
							BGl_globalzd2entryzd2zzbackend_cplibz00(
							((BgL_globalz00_bglt) BgL_pz00_126));
						{	/* SawJvm/funcall.scm 329 */
							obj_t BgL_argsz00_3063;

							BgL_argsz00_3063 =
								(((BgL_sfunz00_bglt) COBJECT(
										((BgL_sfunz00_bglt)
											(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_entryz00_3062)))->
												BgL_valuez00))))->BgL_argsz00);
							{	/* SawJvm/funcall.scm 330 */
								obj_t BgL_typesz00_3064;

								{	/* SawJvm/funcall.scm 331 */
									obj_t BgL_l1685z00_3071;

									BgL_l1685z00_3071 = CDR(((obj_t) BgL_argsz00_3063));
									if (NULLP(BgL_l1685z00_3071))
										{	/* SawJvm/funcall.scm 331 */
											BgL_typesz00_3064 = BNIL;
										}
									else
										{	/* SawJvm/funcall.scm 331 */
											obj_t BgL_head1687z00_3073;

											{	/* SawJvm/funcall.scm 331 */
												BgL_typez00_bglt BgL_arg2096z00_3085;

												BgL_arg2096z00_3085 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt)
																	CAR(
																		((obj_t) BgL_l1685z00_3071))))))->
													BgL_typez00);
												{	/* SawJvm/funcall.scm 331 */
													obj_t BgL_res2342z00_3961;

													BgL_res2342z00_3961 =
														MAKE_YOUNG_PAIR(
														((obj_t) BgL_arg2096z00_3085), BNIL);
													BgL_head1687z00_3073 = BgL_res2342z00_3961;
												}
											}
											{	/* SawJvm/funcall.scm 331 */
												obj_t BgL_g1690z00_3074;

												BgL_g1690z00_3074 = CDR(((obj_t) BgL_l1685z00_3071));
												{
													obj_t BgL_l1685z00_3076;
													obj_t BgL_tail1688z00_3077;

													BgL_l1685z00_3076 = BgL_g1690z00_3074;
													BgL_tail1688z00_3077 = BgL_head1687z00_3073;
												BgL_zc3z04anonymousza32091ze3z87_3078:
													if (NULLP(BgL_l1685z00_3076))
														{	/* SawJvm/funcall.scm 331 */
															BgL_typesz00_3064 = BgL_head1687z00_3073;
														}
													else
														{	/* SawJvm/funcall.scm 331 */
															obj_t BgL_newtail1689z00_3080;

															{	/* SawJvm/funcall.scm 331 */
																BgL_typez00_bglt BgL_arg2094z00_3082;

																BgL_arg2094z00_3082 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_l1685z00_3076))))))->
																	BgL_typez00);
																{	/* SawJvm/funcall.scm 331 */
																	obj_t BgL_res2344z00_3966;

																	BgL_res2344z00_3966 =
																		MAKE_YOUNG_PAIR(
																		((obj_t) BgL_arg2094z00_3082), BNIL);
																	BgL_newtail1689z00_3080 = BgL_res2344z00_3966;
																}
															}
															SET_CDR(BgL_tail1688z00_3077,
																BgL_newtail1689z00_3080);
															{	/* SawJvm/funcall.scm 331 */
																obj_t BgL_arg2093z00_3081;

																BgL_arg2093z00_3081 =
																	CDR(((obj_t) BgL_l1685z00_3076));
																{
																	obj_t BgL_tail1688z00_5501;
																	obj_t BgL_l1685z00_5500;

																	BgL_l1685z00_5500 = BgL_arg2093z00_3081;
																	BgL_tail1688z00_5501 =
																		BgL_newtail1689z00_3080;
																	BgL_tail1688z00_3077 = BgL_tail1688z00_5501;
																	BgL_l1685z00_3076 = BgL_l1685z00_5500;
																	goto BgL_zc3z04anonymousza32091ze3z87_3078;
																}
															}
														}
												}
											}
										}
								}
								{	/* SawJvm/funcall.scm 331 */

									BGl_labelz00zzsaw_jvm_outz00(
										((BgL_jvmz00_bglt) BgL_mez00_124), BgL_labz00_125);
									{	/* SawJvm/funcall.scm 333 */
										bool_t BgL_test2527z00_5504;

										if (INTEGERP(BgL_arityz00_3061))
											{	/* SawJvm/funcall.scm 333 */
												BgL_test2527z00_5504 =
													((long) CINT(BgL_arityz00_3061) >= ((long) 0));
											}
										else
											{	/* SawJvm/funcall.scm 333 */
												BgL_test2527z00_5504 =
													BGl_2ze3zd3z30zz__r4_numbers_6_5z00(BgL_arityz00_3061,
													BINT(((long) 0)));
											}
										if (BgL_test2527z00_5504)
											{	/* SawJvm/funcall.scm 333 */
												if (BGl_keyzd2optzf3z21zzsaw_jvm_funcallz00
													(BgL_pz00_126))
													{	/* SawJvm/funcall.scm 334 */
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_124),
															CNST_TABLE_REF(((long) 41)));
														BGl_codez12z12zzsaw_jvm_outz00(
															((BgL_jvmz00_bglt) BgL_mez00_124),
															CNST_TABLE_REF(((long) 48)));
													}
												else
													{	/* SawJvm/funcall.scm 334 */
														BgL_mez00_3088 = BgL_mez00_124;
														BgL_nz00_3089 = BgL_arityz00_3061;
														BgL_fixedarityzf3zf3_3090 = ((bool_t) 1);
														BgL_typesz00_3091 = BgL_typesz00_3064;
													BgL_zc3z04anonymousza32099ze3z87_3092:
														if (((long) CINT(BgL_nz00_3089) == ((long) 0)))
															{	/* SawJvm/funcall.scm 305 */
																if (BgL_fixedarityzf3zf3_3090)
																	{	/* SawJvm/funcall.scm 306 */
																		BFALSE;
																	}
																else
																	{	/* SawJvm/funcall.scm 306 */
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 41)));
															}}
														else
															{	/* SawJvm/funcall.scm 305 */
																if (((long) CINT(BgL_nz00_3089) == ((long) 1)))
																	{	/* SawJvm/funcall.scm 308 */
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 41)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 43)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 44)));
																		{	/* SawJvm/funcall.scm 312 */
																			bool_t BgL_test2533z00_5538;

																			{	/* SawJvm/funcall.scm 312 */
																				obj_t BgL_arg2108z00_3101;

																				BgL_arg2108z00_3101 =
																					CAR(((obj_t) BgL_typesz00_3091));
																				BgL_test2533z00_5538 =
																					(BgL_arg2108z00_3101 ==
																					BGl_za2objza2z00zztype_cachez00);
																			}
																			if (BgL_test2533z00_5538)
																				{	/* SawJvm/funcall.scm 312 */
																					BFALSE;
																				}
																			else
																				{	/* SawJvm/funcall.scm 313 */
																					obj_t BgL_arg2104z00_3097;

																					{	/* SawJvm/funcall.scm 313 */
																						obj_t BgL_arg2105z00_3098;

																						{	/* SawJvm/funcall.scm 313 */
																							obj_t BgL_arg2106z00_3099;

																							{	/* SawJvm/funcall.scm 313 */
																								obj_t BgL_arg2107z00_3100;

																								BgL_arg2107z00_3100 =
																									CAR(
																									((obj_t) BgL_typesz00_3091));
																								BgL_arg2106z00_3099 =
																									BGl_compilezd2typezd2zzsaw_jvm_outz00
																									(((BgL_jvmz00_bglt)
																										BgL_mez00_3088),
																									((BgL_typez00_bglt)
																										BgL_arg2107z00_3100));
																							}
																							BgL_arg2105z00_3098 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2106z00_3099, BNIL);
																						}
																						BgL_arg2104z00_3097 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 28)),
																							BgL_arg2105z00_3098);
																					}
																					BGl_codez12z12zzsaw_jvm_outz00(
																						((BgL_jvmz00_bglt) BgL_mez00_3088),
																						BgL_arg2104z00_3097);
																		}}
																		if (BgL_fixedarityzf3zf3_3090)
																			{	/* SawJvm/funcall.scm 314 */
																				BFALSE;
																			}
																		else
																			{	/* SawJvm/funcall.scm 314 */
																				BGl_codez12z12zzsaw_jvm_outz00(
																					((BgL_jvmz00_bglt) BgL_mez00_3088),
																					CNST_TABLE_REF(((long) 41)));
																				BGl_codez12z12zzsaw_jvm_outz00(
																					((BgL_jvmz00_bglt) BgL_mez00_3088),
																					CNST_TABLE_REF(((long) 43)));
																				BGl_codez12z12zzsaw_jvm_outz00(
																					((BgL_jvmz00_bglt) BgL_mez00_3088),
																					CNST_TABLE_REF(((long) 45)));
																	}}
																else
																	{	/* SawJvm/funcall.scm 308 */
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 41)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 43)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 46)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 45)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 47)));
																		BGl_codez12z12zzsaw_jvm_outz00(
																			((BgL_jvmz00_bglt) BgL_mez00_3088),
																			CNST_TABLE_REF(((long) 44)));
																		{	/* SawJvm/funcall.scm 325 */
																			bool_t BgL_test2535z00_5580;

																			{	/* SawJvm/funcall.scm 325 */
																				obj_t BgL_arg2116z00_3108;

																				BgL_arg2116z00_3108 =
																					CAR(((obj_t) BgL_typesz00_3091));
																				BgL_test2535z00_5580 =
																					(BgL_arg2116z00_3108 ==
																					BGl_za2objza2z00zztype_cachez00);
																			}
																			if (BgL_test2535z00_5580)
																				{	/* SawJvm/funcall.scm 325 */
																					BFALSE;
																				}
																			else
																				{	/* SawJvm/funcall.scm 326 */
																					obj_t BgL_arg2111z00_3104;

																					{	/* SawJvm/funcall.scm 326 */
																						obj_t BgL_arg2112z00_3105;

																						{	/* SawJvm/funcall.scm 326 */
																							obj_t BgL_arg2114z00_3106;

																							{	/* SawJvm/funcall.scm 326 */
																								obj_t BgL_arg2115z00_3107;

																								BgL_arg2115z00_3107 =
																									CAR(
																									((obj_t) BgL_typesz00_3091));
																								BgL_arg2114z00_3106 =
																									BGl_compilezd2typezd2zzsaw_jvm_outz00
																									(((BgL_jvmz00_bglt)
																										BgL_mez00_3088),
																									((BgL_typez00_bglt)
																										BgL_arg2115z00_3107));
																							}
																							BgL_arg2112z00_3105 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg2114z00_3106, BNIL);
																						}
																						BgL_arg2111z00_3104 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 28)),
																							BgL_arg2112z00_3105);
																					}
																					BGl_codez12z12zzsaw_jvm_outz00(
																						((BgL_jvmz00_bglt) BgL_mez00_3088),
																						BgL_arg2111z00_3104);
																		}}
																		{	/* SawJvm/funcall.scm 327 */
																			obj_t BgL_arg2117z00_3109;
																			obj_t BgL_arg2118z00_3110;

																			if (INTEGERP(BgL_nz00_3089))
																				{	/* SawJvm/funcall.scm 327 */
																					long BgL_tmpz00_5596;

																					BgL_tmpz00_5596 =
																						(long) CINT(BgL_nz00_3089);
																					BgL_arg2117z00_3109 =
																						BGL_SAFE_MINUS_FX(BgL_tmpz00_5596,
																						((long) 1));
																				}
																			else
																				{	/* SawJvm/funcall.scm 327 */
																					BgL_arg2117z00_3109 =
																						BGl_2zd2zd2zz__r4_numbers_6_5z00
																						(BgL_nz00_3089, BINT(((long) 1)));
																				}
																			BgL_arg2118z00_3110 =
																				CDR(((obj_t) BgL_typesz00_3091));
																			{
																				obj_t BgL_typesz00_5604;
																				obj_t BgL_nz00_5603;

																				BgL_nz00_5603 = BgL_arg2117z00_3109;
																				BgL_typesz00_5604 = BgL_arg2118z00_3110;
																				BgL_typesz00_3091 = BgL_typesz00_5604;
																				BgL_nz00_3089 = BgL_nz00_5603;
																				goto
																					BgL_zc3z04anonymousza32099ze3z87_3092;
																			}
																		}
																	}
															}
													}
											}
										else
											{	/* SawJvm/funcall.scm 338 */
												obj_t BgL_arg2088z00_3068;

												if (INTEGERP(BgL_arityz00_3061))
													{	/* SawJvm/funcall.scm 338 */
														long BgL_tmpz00_5607;

														BgL_tmpz00_5607 = (long) CINT(BgL_arityz00_3061);
														BgL_arg2088z00_3068 =
															BGL_SAFE_MINUS_FX(((long) -1), BgL_tmpz00_5607);
													}
												else
													{	/* SawJvm/funcall.scm 338 */
														BgL_arg2088z00_3068 =
															BGl_2zd2zd2zz__r4_numbers_6_5z00(BINT(((long)
																	-1)), BgL_arityz00_3061);
													}
												{
													obj_t BgL_typesz00_5615;
													bool_t BgL_fixedarityzf3zf3_5614;
													obj_t BgL_nz00_5613;
													obj_t BgL_mez00_5612;

													BgL_mez00_5612 = BgL_mez00_124;
													BgL_nz00_5613 = BgL_arg2088z00_3068;
													BgL_fixedarityzf3zf3_5614 = ((bool_t) 0);
													BgL_typesz00_5615 = BgL_typesz00_3064;
													BgL_typesz00_3091 = BgL_typesz00_5615;
													BgL_fixedarityzf3zf3_3090 = BgL_fixedarityzf3zf3_5614;
													BgL_nz00_3089 = BgL_nz00_5613;
													BgL_mez00_3088 = BgL_mez00_5612;
													goto BgL_zc3z04anonymousza32099ze3z87_3092;
												}
											}
									}
									BGl_callzd2globalzd2zzsaw_jvm_outz00(
										((BgL_jvmz00_bglt) BgL_mez00_124), BgL_entryz00_3062);
									return
										BGl_codez12z12zzsaw_jvm_outz00(
										((BgL_jvmz00_bglt) BgL_mez00_124),
										CNST_TABLE_REF(((long) 19)));
		}}}}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			{	/* SawJvm/funcall.scm 19 */
				obj_t BgL_arg2125z00_3117;
				obj_t BgL_arg2126z00_3118;

				{	/* SawJvm/funcall.scm 19 */
					obj_t BgL_v1691z00_3160;

					BgL_v1691z00_3160 = create_vector(((long) 1));
					{	/* SawJvm/funcall.scm 19 */
						obj_t BgL_arg2137z00_3161;

						BgL_arg2137z00_3161 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									49)), BGl_proc2365z00zzsaw_jvm_funcallz00,
							BGl_proc2364z00zzsaw_jvm_funcallz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 11)));
						VECTOR_SET(BgL_v1691z00_3160, ((long) 0), BgL_arg2137z00_3161);
					}
					BgL_arg2125z00_3117 = BgL_v1691z00_3160;
				}
				{	/* SawJvm/funcall.scm 19 */
					obj_t BgL_v1692z00_3171;

					BgL_v1692z00_3171 = create_vector(((long) 0));
					BgL_arg2126z00_3118 = BgL_v1692z00_3171;
				}
				return (BGl_indexedz00zzsaw_jvm_funcallz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 50)),
						CNST_TABLE_REF(((long) 51)), BGl_globalz00zzast_varz00,
						((long) 1351), BGl_proc2369z00zzsaw_jvm_funcallz00,
						BGl_proc2368z00zzsaw_jvm_funcallz00, BFALSE,
						BGl_proc2367z00zzsaw_jvm_funcallz00,
						BGl_proc2366z00zzsaw_jvm_funcallz00, BgL_arg2125z00_3117,
						BgL_arg2126z00_3118), BUNSPEC);
		}}

	}



/* &lambda2133 */
	BgL_globalz00_bglt BGl_z62lambda2133z62zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4180, obj_t BgL_o1177z00_4181)
	{
		{	/* SawJvm/funcall.scm 19 */
			{	/* SawJvm/funcall.scm 19 */
				long BgL_arg2134z00_4252;

				{	/* SawJvm/funcall.scm 19 */
					obj_t BgL_arg2135z00_4253;

					{	/* SawJvm/funcall.scm 19 */
						obj_t BgL_arg2136z00_4254;

						{	/* SawJvm/funcall.scm 19 */
							long BgL_arg1816z00_4255;

							{	/* SawJvm/funcall.scm 19 */
								long BgL_arg1817z00_4256;

								{	/* SawJvm/funcall.scm 19 */
									long BgL_res2351z00_4257;

									BgL_res2351z00_4257 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_globalz00_bglt) BgL_o1177z00_4181)));
									BgL_arg1817z00_4256 = BgL_res2351z00_4257;
								}
								BgL_arg1816z00_4255 = (BgL_arg1817z00_4256 - OBJECT_TYPE);
							}
							BgL_arg2136z00_4254 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_4255);
						}
						BgL_arg2135z00_4253 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg2136z00_4254);
					}
					{	/* SawJvm/funcall.scm 19 */
						long BgL_res2353z00_4258;

						{	/* SawJvm/funcall.scm 19 */
							obj_t BgL_tmpz00_5636;

							BgL_tmpz00_5636 = ((obj_t) BgL_arg2135z00_4253);
							BgL_res2353z00_4258 = BGL_CLASS_INDEX(BgL_tmpz00_5636);
						}
						BgL_arg2134z00_4252 = BgL_res2353z00_4258;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) BgL_o1177z00_4181)), BgL_arg2134z00_4252);
			}
			{	/* SawJvm/funcall.scm 19 */
				BgL_objectz00_bglt BgL_tmpz00_5642;

				BgL_tmpz00_5642 =
					((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1177z00_4181));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5642, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_o1177z00_4181));
			return ((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1177z00_4181));
		}

	}



/* &<@anonymous:2132> */
	obj_t BGl_z62zc3z04anonymousza32132ze3ze5zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4182, obj_t BgL_new1176z00_4183)
	{
		{	/* SawJvm/funcall.scm 19 */
			{
				BgL_globalz00_bglt BgL_auxz00_5650;

				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1176z00_4183))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 52))), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_typez00_bglt BgL_auxz00_5658;

					{	/* SawJvm/funcall.scm 19 */
						obj_t BgL_classz00_4260;

						BgL_classz00_4260 = BGl_typez00zztype_typez00;
						{	/* SawJvm/funcall.scm 19 */
							obj_t BgL__ortest_1106z00_4261;

							BgL__ortest_1106z00_4261 = BGL_CLASS_NIL(BgL_classz00_4260);
							if (CBOOL(BgL__ortest_1106z00_4261))
								{	/* SawJvm/funcall.scm 19 */
									BgL_auxz00_5658 =
										((BgL_typez00_bglt) BgL__ortest_1106z00_4261);
								}
							else
								{	/* SawJvm/funcall.scm 19 */
									BgL_auxz00_5658 =
										((BgL_typez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4260));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1176z00_4183))))->
							BgL_typez00) = ((BgL_typez00_bglt) BgL_auxz00_5658), BUNSPEC);
				}
				{
					BgL_valuez00_bglt BgL_auxz00_5668;

					{	/* SawJvm/funcall.scm 19 */
						obj_t BgL_classz00_4262;

						BgL_classz00_4262 = BGl_valuez00zzast_varz00;
						{	/* SawJvm/funcall.scm 19 */
							obj_t BgL__ortest_1106z00_4263;

							BgL__ortest_1106z00_4263 = BGL_CLASS_NIL(BgL_classz00_4262);
							if (CBOOL(BgL__ortest_1106z00_4263))
								{	/* SawJvm/funcall.scm 19 */
									BgL_auxz00_5668 =
										((BgL_valuez00_bglt) BgL__ortest_1106z00_4263);
								}
							else
								{	/* SawJvm/funcall.scm 19 */
									BgL_auxz00_5668 =
										((BgL_valuez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_4262));
								}
						}
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_new1176z00_4183))))->
							BgL_valuez00) = ((BgL_valuez00_bglt) BgL_auxz00_5668), BUNSPEC);
				}
				((((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_new1176z00_4183))))->
						BgL_accessz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_fastzd2alphazd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_removablez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_occurrencez00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_occurrencewz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_variablez00_bglt)
							COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_userzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_modulez00) =
					((obj_t) CNST_TABLE_REF(((long) 52))), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_importz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_evaluablezf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_evalzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_libraryz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_pragmaz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_jvmzd2typezd2namez00) =
					((obj_t) BGl_string2370z00zzsaw_jvm_funcallz00), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_initz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_globalz00_bglt)
							COBJECT(((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
										BgL_new1176z00_4183))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_indexedz00_bglt BgL_auxz00_5727;

					{
						obj_t BgL_auxz00_5728;

						{	/* SawJvm/funcall.scm 19 */
							BgL_objectz00_bglt BgL_tmpz00_5729;

							BgL_tmpz00_5729 =
								((BgL_objectz00_bglt)
								((BgL_globalz00_bglt) BgL_new1176z00_4183));
							BgL_auxz00_5728 = BGL_OBJECT_WIDENING(BgL_tmpz00_5729);
						}
						BgL_auxz00_5727 = ((BgL_indexedz00_bglt) BgL_auxz00_5728);
					}
					((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_5727))->BgL_indexz00) =
						((int) (int) (((long) 0))), BUNSPEC);
				}
				BgL_auxz00_5650 = ((BgL_globalz00_bglt) BgL_new1176z00_4183);
				return ((obj_t) BgL_auxz00_5650);
			}
		}

	}



/* &lambda2130 */
	BgL_globalz00_bglt BGl_z62lambda2130z62zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4184, obj_t BgL_o1173z00_4185)
	{
		{	/* SawJvm/funcall.scm 19 */
			{	/* SawJvm/funcall.scm 19 */
				BgL_indexedz00_bglt BgL_wide1175z00_4265;

				BgL_wide1175z00_4265 =
					((BgL_indexedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_indexedz00_bgl))));
				{	/* SawJvm/funcall.scm 19 */
					obj_t BgL_auxz00_5743;
					BgL_objectz00_bglt BgL_tmpz00_5739;

					BgL_auxz00_5743 = ((obj_t) BgL_wide1175z00_4265);
					BgL_tmpz00_5739 =
						((BgL_objectz00_bglt)
						((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1173z00_4185)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5739, BgL_auxz00_5743);
				}
				((BgL_objectz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1173z00_4185)));
				{	/* SawJvm/funcall.scm 19 */
					long BgL_arg2131z00_4266;

					{	/* SawJvm/funcall.scm 19 */
						long BgL_res2350z00_4267;

						BgL_res2350z00_4267 =
							BGL_CLASS_INDEX(BGl_indexedz00zzsaw_jvm_funcallz00);
						BgL_arg2131z00_4266 = BgL_res2350z00_4267;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_globalz00_bglt)
								((BgL_globalz00_bglt) BgL_o1173z00_4185))),
						BgL_arg2131z00_4266);
				}
				return
					((BgL_globalz00_bglt)
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_o1173z00_4185)));
			}
		}

	}



/* &lambda2127 */
	BgL_globalz00_bglt BGl_z62lambda2127z62zzsaw_jvm_funcallz00(obj_t
		BgL_envz00_4186, obj_t BgL_id1152z00_4187, obj_t BgL_name1153z00_4188,
		obj_t BgL_type1154z00_4189, obj_t BgL_value1155z00_4190,
		obj_t BgL_access1156z00_4191, obj_t BgL_fastzd2alpha1157zd2_4192,
		obj_t BgL_removable1158z00_4193, obj_t BgL_occurrence1159z00_4194,
		obj_t BgL_occurrencew1160z00_4195, obj_t BgL_userzf31161zf3_4196,
		obj_t BgL_module1162z00_4197, obj_t BgL_import1163z00_4198,
		obj_t BgL_evaluablezf31164zf3_4199, obj_t BgL_evalzf31165zf3_4200,
		obj_t BgL_library1166z00_4201, obj_t BgL_pragma1167z00_4202,
		obj_t BgL_src1168z00_4203, obj_t BgL_jvmzd2typezd2name1169z00_4204,
		obj_t BgL_init1170z00_4205, obj_t BgL_alias1171z00_4206,
		obj_t BgL_index1172z00_4207)
	{
		{	/* SawJvm/funcall.scm 19 */
			{	/* SawJvm/funcall.scm 19 */
				long BgL_occurrence1159z00_4271;
				long BgL_occurrencew1160z00_4272;
				bool_t BgL_userzf31161zf3_4273;
				bool_t BgL_evaluablezf31164zf3_4275;
				bool_t BgL_evalzf31165zf3_4276;
				int BgL_index1172z00_4278;

				BgL_occurrence1159z00_4271 = (long) CINT(BgL_occurrence1159z00_4194);
				BgL_occurrencew1160z00_4272 = (long) CINT(BgL_occurrencew1160z00_4195);
				BgL_userzf31161zf3_4273 = CBOOL(BgL_userzf31161zf3_4196);
				BgL_evaluablezf31164zf3_4275 = CBOOL(BgL_evaluablezf31164zf3_4199);
				BgL_evalzf31165zf3_4276 = CBOOL(BgL_evalzf31165zf3_4200);
				BgL_index1172z00_4278 = CINT(BgL_index1172z00_4207);
				{	/* SawJvm/funcall.scm 19 */
					BgL_globalz00_bglt BgL_new1215z00_4279;

					{	/* SawJvm/funcall.scm 19 */
						BgL_globalz00_bglt BgL_tmp1213z00_4280;
						BgL_indexedz00_bglt BgL_wide1214z00_4281;

						{
							BgL_globalz00_bglt BgL_auxz00_5763;

							{	/* SawJvm/funcall.scm 19 */
								BgL_globalz00_bglt BgL_new1212z00_4282;

								BgL_new1212z00_4282 =
									((BgL_globalz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_globalz00_bgl))));
								{	/* SawJvm/funcall.scm 19 */
									long BgL_arg2129z00_4283;

									{	/* SawJvm/funcall.scm 19 */
										long BgL_res2348z00_4284;

										BgL_res2348z00_4284 =
											BGL_CLASS_INDEX(BGl_globalz00zzast_varz00);
										BgL_arg2129z00_4283 = BgL_res2348z00_4284;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1212z00_4282),
										BgL_arg2129z00_4283);
								}
								{	/* SawJvm/funcall.scm 19 */
									BgL_objectz00_bglt BgL_tmpz00_5768;

									BgL_tmpz00_5768 = ((BgL_objectz00_bglt) BgL_new1212z00_4282);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5768, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1212z00_4282);
								BgL_auxz00_5763 = BgL_new1212z00_4282;
							}
							BgL_tmp1213z00_4280 = ((BgL_globalz00_bglt) BgL_auxz00_5763);
						}
						BgL_wide1214z00_4281 =
							((BgL_indexedz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_indexedz00_bgl))));
						{	/* SawJvm/funcall.scm 19 */
							obj_t BgL_auxz00_5776;
							BgL_objectz00_bglt BgL_tmpz00_5774;

							BgL_auxz00_5776 = ((obj_t) BgL_wide1214z00_4281);
							BgL_tmpz00_5774 = ((BgL_objectz00_bglt) BgL_tmp1213z00_4280);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5774, BgL_auxz00_5776);
						}
						((BgL_objectz00_bglt) BgL_tmp1213z00_4280);
						{	/* SawJvm/funcall.scm 19 */
							long BgL_arg2128z00_4285;

							{	/* SawJvm/funcall.scm 19 */
								long BgL_res2349z00_4286;

								BgL_res2349z00_4286 =
									BGL_CLASS_INDEX(BGl_indexedz00zzsaw_jvm_funcallz00);
								BgL_arg2128z00_4285 = BgL_res2349z00_4286;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1213z00_4280),
								BgL_arg2128z00_4285);
						}
						BgL_new1215z00_4279 = ((BgL_globalz00_bglt) BgL_tmp1213z00_4280);
					}
					((((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_new1215z00_4279)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1152z00_4187)), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_namez00) =
						((obj_t) BgL_name1153z00_4188), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_typez00) =
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_type1154z00_4189)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_valuez00) =
						((BgL_valuez00_bglt) ((BgL_valuez00_bglt) BgL_value1155z00_4190)),
						BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_accessz00) =
						((obj_t) BgL_access1156z00_4191), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_fastzd2alphazd2) =
						((obj_t) BgL_fastzd2alpha1157zd2_4192), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_removablez00) =
						((obj_t) BgL_removable1158z00_4193), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_occurrencez00) =
						((long) BgL_occurrence1159z00_4271), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_occurrencewz00) =
						((long) BgL_occurrencew1160z00_4272), BUNSPEC);
					((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
										BgL_new1215z00_4279)))->BgL_userzf3zf3) =
						((bool_t) BgL_userzf31161zf3_4273), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_modulez00) =
						((obj_t) ((obj_t) BgL_module1162z00_4197)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_importz00) =
						((obj_t) BgL_import1163z00_4198), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_evaluablezf3zf3) =
						((bool_t) BgL_evaluablezf31164zf3_4275), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_evalzf3zf3) =
						((bool_t) BgL_evalzf31165zf3_4276), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_libraryz00) =
						((obj_t) BgL_library1166z00_4201), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_pragmaz00) =
						((obj_t) BgL_pragma1167z00_4202), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_srcz00) =
						((obj_t) BgL_src1168z00_4203), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_jvmzd2typezd2namez00) =
						((obj_t) ((obj_t) BgL_jvmzd2typezd2name1169z00_4204)), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_initz00) =
						((obj_t) BgL_init1170z00_4205), BUNSPEC);
					((((BgL_globalz00_bglt) COBJECT(((BgL_globalz00_bglt)
										BgL_new1215z00_4279)))->BgL_aliasz00) =
						((obj_t) BgL_alias1171z00_4206), BUNSPEC);
					{
						BgL_indexedz00_bglt BgL_auxz00_5829;

						{
							obj_t BgL_auxz00_5830;

							{	/* SawJvm/funcall.scm 19 */
								BgL_objectz00_bglt BgL_tmpz00_5831;

								BgL_tmpz00_5831 = ((BgL_objectz00_bglt) BgL_new1215z00_4279);
								BgL_auxz00_5830 = BGL_OBJECT_WIDENING(BgL_tmpz00_5831);
							}
							BgL_auxz00_5829 = ((BgL_indexedz00_bglt) BgL_auxz00_5830);
						}
						((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_5829))->BgL_indexz00) =
							((int) BgL_index1172z00_4278), BUNSPEC);
					}
					return BgL_new1215z00_4279;
				}
			}
		}

	}



/* &lambda2142 */
	obj_t BGl_z62lambda2142z62zzsaw_jvm_funcallz00(obj_t BgL_envz00_4208,
		obj_t BgL_oz00_4209, obj_t BgL_vz00_4210)
	{
		{	/* SawJvm/funcall.scm 19 */
			{	/* SawJvm/funcall.scm 19 */
				int BgL_vz00_4288;

				BgL_vz00_4288 = CINT(BgL_vz00_4210);
				{
					BgL_indexedz00_bglt BgL_auxz00_5837;

					{
						obj_t BgL_auxz00_5838;

						{	/* SawJvm/funcall.scm 19 */
							BgL_objectz00_bglt BgL_tmpz00_5839;

							BgL_tmpz00_5839 =
								((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_4209));
							BgL_auxz00_5838 = BGL_OBJECT_WIDENING(BgL_tmpz00_5839);
						}
						BgL_auxz00_5837 = ((BgL_indexedz00_bglt) BgL_auxz00_5838);
					}
					return
						((((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_5837))->BgL_indexz00) =
						((int) BgL_vz00_4288), BUNSPEC);
		}}}

	}



/* &lambda2141 */
	obj_t BGl_z62lambda2141z62zzsaw_jvm_funcallz00(obj_t BgL_envz00_4211,
		obj_t BgL_oz00_4212)
	{
		{	/* SawJvm/funcall.scm 19 */
			{	/* SawJvm/funcall.scm 19 */
				int BgL_tmpz00_5845;

				{
					BgL_indexedz00_bglt BgL_auxz00_5846;

					{
						obj_t BgL_auxz00_5847;

						{	/* SawJvm/funcall.scm 19 */
							BgL_objectz00_bglt BgL_tmpz00_5848;

							BgL_tmpz00_5848 =
								((BgL_objectz00_bglt) ((BgL_globalz00_bglt) BgL_oz00_4212));
							BgL_auxz00_5847 = BGL_OBJECT_WIDENING(BgL_tmpz00_5848);
						}
						BgL_auxz00_5846 = ((BgL_indexedz00_bglt) BgL_auxz00_5847);
					}
					BgL_tmpz00_5845 =
						(((BgL_indexedz00_bglt) COBJECT(BgL_auxz00_5846))->BgL_indexz00);
				}
				return BINT(BgL_tmpz00_5845);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_funcallz00()
	{
		{	/* SawJvm/funcall.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_libz00(((long) 321177294),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			BGl_modulezd2initializa7ationz75zzsaw_proceduresz00(((long) 401547373),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
			return
				BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 441640642),
				BSTRING_TO_STRING(BGl_string2371z00zzsaw_jvm_funcallz00));
		}

	}

#ifdef __cplusplus
}
#endif
