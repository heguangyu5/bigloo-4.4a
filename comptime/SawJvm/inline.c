/*===========================================================================*/
/*   (SawJvm/inline.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/inline.scm) */
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

	typedef struct BgL_atomz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
		obj_t BgL_valuez00;
	}              *BgL_atomz00_bglt;

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


	extern obj_t BGl_rtl_insz00zzsaw_defsz00;
	static obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31829ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31935ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31919ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31668ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31952ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31863ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31847ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31758ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62inlinezd2predicatezf3z43zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31937ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31686ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31970ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31954ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31598ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31882ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31866ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31939ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31972ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31956ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	extern obj_t BGl_rtl_movz00zzsaw_defsz00;
	static obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31797ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31976ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31888ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31978ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62inlinezd2callzf3z43zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t);
	extern obj_t BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31614ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31904ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31921ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31670ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62inlinezd2callzd2withzd2argszf3z43zzsaw_jvm_inlinez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31761ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31729ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31673ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_za2toozd2hardza2zd2zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31941ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31836ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31926ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31943ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31854ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_genzd2exprzd2zzsaw_jvm_codez00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31871ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31928ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31945ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31962ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31873ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31857ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31890ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31785ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31947ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31892ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31949ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31966ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31877ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31983ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31894ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31968ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31896ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31898ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	extern obj_t BGl_branchz00zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t, obj_t);
	static obj_t BGl_skipzd2movzd2zzsaw_jvm_inlinez00(obj_t);
	extern obj_t BGl_declarezd2globalzd2zzsaw_jvm_outz00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzsaw_defsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcnst_allocz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	extern obj_t BGl_codez12z12zzsaw_jvm_outz00(BgL_jvmz00_bglt, obj_t);
	extern obj_t BGl_rtl_loadiz00zzsaw_defsz00;
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_inlinez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00();
	static obj_t BGl_z62zc3z04anonymousza31642ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31821ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31823ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31913ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62checkzd2jvmzd2inlinesz62zzsaw_jvm_inlinez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31930ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31825ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31809ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31932ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31916ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31755ze3ze5zzsaw_jvm_inlinez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt,
		BgL_globalz00_bglt);
	static obj_t __cnst[184];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2200z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2252za7,
		BGl_z62zc3z04anonymousza31882ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2201z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2253za7,
		BGl_z62zc3z04anonymousza31884ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2202z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2254za7,
		BGl_z62zc3z04anonymousza31886ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2203z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2255za7,
		BGl_z62zc3z04anonymousza31888ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2256za7,
		BGl_z62zc3z04anonymousza31890ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2257za7,
		BGl_z62zc3z04anonymousza31892ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2258za7,
		BGl_z62zc3z04anonymousza31894ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2259za7,
		BGl_z62zc3z04anonymousza31896ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2260za7,
		BGl_z62zc3z04anonymousza31898ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2261za7,
		BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2262za7,
		BGl_z62zc3z04anonymousza31904ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2263za7,
		BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2264za7,
		BGl_z62zc3z04anonymousza31910ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2265za7,
		BGl_z62zc3z04anonymousza31913ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2266za7,
		BGl_z62zc3z04anonymousza31916ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2267za7,
		BGl_z62zc3z04anonymousza31919ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2268za7,
		BGl_z62zc3z04anonymousza31921ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2269za7,
		BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2270za7,
		BGl_z62zc3z04anonymousza31926ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2271za7,
		BGl_z62zc3z04anonymousza31928ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2272za7,
		BGl_z62zc3z04anonymousza31930ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2273za7,
		BGl_z62zc3z04anonymousza31932ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2274za7,
		BGl_z62zc3z04anonymousza31935ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2275za7,
		BGl_z62zc3z04anonymousza31937ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2276za7,
		BGl_z62zc3z04anonymousza31939ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2277za7,
		BGl_z62zc3z04anonymousza31941ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2278za7,
		BGl_z62zc3z04anonymousza31943ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2279za7,
		BGl_z62zc3z04anonymousza31945ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2228z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2280za7,
		BGl_z62zc3z04anonymousza31947ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2229z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2281za7,
		BGl_z62zc3z04anonymousza31949ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2230z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2282za7,
		BGl_z62zc3z04anonymousza31952ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2231z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2283za7,
		BGl_z62zc3z04anonymousza31954ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2284za7,
		BGl_z62zc3z04anonymousza31956ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2285za7,
		BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2286za7,
		BGl_z62zc3z04anonymousza31960ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2287za7,
		BGl_z62zc3z04anonymousza31962ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2288za7,
		BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2289za7,
		BGl_z62zc3z04anonymousza31966ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2290za7,
		BGl_z62zc3z04anonymousza31968ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2291za7,
		BGl_z62zc3z04anonymousza31970ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2292za7,
		BGl_z62zc3z04anonymousza31972ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2293za7,
		BGl_z62zc3z04anonymousza31974ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2294za7,
		BGl_z62zc3z04anonymousza31976ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2295za7,
		BGl_z62zc3z04anonymousza31978ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2296za7,
		BGl_z62zc3z04anonymousza31983ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2jvmzd2inlineszd2envzd2zzsaw_jvm_inlinez00,
		BgL_bgl_za762checkza7d2jvmza7d2297za7,
		BGl_z62checkzd2jvmzd2inlinesz62zzsaw_jvm_inlinez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2callzd2withzd2argszf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl_za762inlineza7d2call2298z00,
		BGl_z62inlinezd2callzd2withzd2argszf3z43zzsaw_jvm_inlinez00, 0L, BUNSPEC,
		3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2147z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2299za7,
		BGl_z62zc3z04anonymousza31583ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2148z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2300za7,
		BGl_z62zc3z04anonymousza31598ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2301za7,
		BGl_z62zc3z04anonymousza31614ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2150z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2302za7,
		BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2151z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2303za7,
		BGl_z62zc3z04anonymousza31642ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2152z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2304za7,
		BGl_z62zc3z04anonymousza31663ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2153z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2305za7,
		BGl_z62zc3z04anonymousza31665ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2154z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2306za7,
		BGl_z62zc3z04anonymousza31668ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2155z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2307za7,
		BGl_z62zc3z04anonymousza31670ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2156z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2308za7,
		BGl_z62zc3z04anonymousza31673ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2157z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2309za7,
		BGl_z62zc3z04anonymousza31686ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2158z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2310za7,
		BGl_z62zc3z04anonymousza31712ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2159z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2311za7,
		BGl_z62zc3z04anonymousza31726ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STRING(BGl_string2245z00zzsaw_jvm_inlinez00,
		BgL_bgl_string2245za700za7za7s2312za7, "I", 1);
	      DEFINE_STRING(BGl_string2246z00zzsaw_jvm_inlinez00,
		BgL_bgl_string2246za700za7za7s2313za7, "Cannot find inlined functions", 29);
	      DEFINE_STRING(BGl_string2247z00zzsaw_jvm_inlinez00,
		BgL_bgl_string2247za700za7za7s2314za7, "saw_jvm_inline", 14);
	      DEFINE_STRING(BGl_string2248z00zzsaw_jvm_inlinez00,
		BgL_bgl_string2248za700za7za7s2315za7,
		"(iconst_0) SawJvm (putfield procarity) (putfield procenv) (putfield procindex) (invokespecial init) (dup) (new me) (anewarray obj) (instanceof bbool) goto (getstatic faux) (getstatic vrai) not-inlined (instanceof bchar) getstatic bchar_allocated (getfield bchar_value) getfield bchar_value (instanceof bint) (instanceof belong) (i2s) (i2b) (getfield bint_value) if_icmpne if_icmpeq if_icmple if_icmpgt if_icmplt if_icmpge (iadd) (isub) (imul) (idiv) (irem) (ior) (ixor) (ineg) (iconst_1) (instanceof real) (getfield real_value) (i2d) (d2i) (l2d) (d2l) ifne ifeq (dcmpl) ifle ifgt iflt ifge (dcmpg) (dadd) (dsub) (dmul) (ddiv) (dneg) if_acmpne if_acmpeq (getstatic *nil*) (instanceof (vector byte)) ok (iand) (sipush 255) (baload) (bastore) (arraylength) (newarray byte) (instanceof symbol) (getfield symbol_string) (putfield ccar) (getfield ccar) (instanceof pair) (getfield car) (getfield cdr) (putfield car) (putfield cdr) (instanceof extended_pair) (getfield cer) (putfield cer) (instanceof (vector obj)) (instanceof proc"
		"edure) no-value (aastore) (aaload) (getfield procenv) procedure-ref procedure-set! c-procedure? $vector? $set-cer! $cer $epair? $set-cdr! $set-car! $cdr $car $pair? cell-ref cell-set! c-symbol->string c-symbol? $make-string/wo-fill $string-length $string-set! $string-ref $bstring->string $string->bstring $string? $null? c-negfl c-/fl c-*fl c--fl c-+fl c->=fl c->fl c-<=fl c-<fl c-=fl $flonum->llong $llong->flonum $flonum->elong $elong->flonum $flonum->fixnum $fixnum->flonum $real->double c-flonum? c-bitnot c-bitxor c-bitand c-bitor c-remainderfx c-quotientfx c-/fx c-*fx c--fx c-+fx c-oddfx? c-evenfx? c->=fx c->fx c-<=fx c-<fx c-=fx $bint->int $long->int $int->long $bint->long $short->int $int->byte $int->short char->integer c-elong? c-fixnum? c-char>=? c-char>? c-char<=? c-char<? c-char=? $uchar->char $bchar->uchar $bchar->char $uchar->bchar c-char? c-eq? c-boxed-eq? $bool->bbool saw_jvm_inline_predicate $obj->bool c-boolean? procedure-el-set! procedure-el-ref saw_jvm_inline_function make-el-procedure make-l-p"
		"rocedure make-va-procedure make-fx-procedure cnst-table-set! saw_jvm_inline_function_args cnst-table-ref (%exit long->bint $cons c-write-char) ",
		2191);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2160z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2316za7,
		BGl_z62zc3z04anonymousza31729ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2161z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2317za7,
		BGl_z62zc3z04anonymousza31732ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2162z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2318za7,
		BGl_z62zc3z04anonymousza31741ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2predicatezf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl_za762inlineza7d2pred2319z00,
		BGl_z62inlinezd2predicatezf3z43zzsaw_jvm_inlinez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2163z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2320za7,
		BGl_z62zc3z04anonymousza31743ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2164z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2321za7,
		BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2165z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2322za7,
		BGl_z62zc3z04anonymousza31755ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2166z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2323za7,
		BGl_z62zc3z04anonymousza31758ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2167z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2324za7,
		BGl_z62zc3z04anonymousza31761ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2168z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2325za7,
		BGl_z62zc3z04anonymousza31772ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2169z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2326za7,
		BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2170z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2327za7,
		BGl_z62zc3z04anonymousza31785ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2171z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2328za7,
		BGl_z62zc3z04anonymousza31791ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2172z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2329za7,
		BGl_z62zc3z04anonymousza31797ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2173z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2330za7,
		BGl_z62zc3z04anonymousza31799ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2174z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2331za7,
		BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2175z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2332za7,
		BGl_z62zc3z04anonymousza31809ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2176z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2333za7,
		BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2334za7,
		BGl_z62zc3z04anonymousza31821ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2335za7,
		BGl_z62zc3z04anonymousza31823ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2179z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2336za7,
		BGl_z62zc3z04anonymousza31825ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2180z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2337za7,
		BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2181z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2338za7,
		BGl_z62zc3z04anonymousza31829ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2182z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2339za7,
		BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2183z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2340za7,
		BGl_z62zc3z04anonymousza31833ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2184z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2341za7,
		BGl_z62zc3z04anonymousza31836ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2185z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2342za7,
		BGl_z62zc3z04anonymousza31839ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2186z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2343za7,
		BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2187z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2344za7,
		BGl_z62zc3z04anonymousza31847ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2188z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2345za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2189z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2346za7,
		BGl_z62zc3z04anonymousza31854ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2190z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2347za7,
		BGl_z62zc3z04anonymousza31857ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2191z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2348za7,
		BGl_z62zc3z04anonymousza31860ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2192z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2349za7,
		BGl_z62zc3z04anonymousza31863ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2193z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2350za7,
		BGl_z62zc3z04anonymousza31866ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2194z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2351za7,
		BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2195z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2352za7,
		BGl_z62zc3z04anonymousza31871ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2196z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2353za7,
		BGl_z62zc3z04anonymousza31873ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2197z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2354za7,
		BGl_z62zc3z04anonymousza31875ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2198z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2355za7,
		BGl_z62zc3z04anonymousza31877ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2199z00zzsaw_jvm_inlinez00,
		BgL_bgl_za762za7c3za704anonymo2356za7,
		BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_jvm_inlinez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_inlinezd2callzf3zd2envzf3zzsaw_jvm_inlinez00,
		BgL_bgl_za762inlineza7d2call2357z00,
		BGl_z62inlinezd2callzf3z43zzsaw_jvm_inlinez00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2toozd2hardza2zd2zzsaw_jvm_inlinez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_inlinez00(long
		BgL_checksumz00_3963, char *BgL_fromz00_3964)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_inlinez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_inlinez00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00();
					BGl_cnstzd2initzd2zzsaw_jvm_inlinez00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00();
					return BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_inline");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_inline");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			{	/* SawJvm/inline.scm 1 */
				obj_t BgL_cportz00_3879;

				{	/* SawJvm/inline.scm 1 */
					obj_t BgL_stringz00_3887;

					BgL_stringz00_3887 = BGl_string2248z00zzsaw_jvm_inlinez00;
					{	/* SawJvm/inline.scm 1 */
						obj_t BgL_startz00_3888;

						BgL_startz00_3888 = BINT(((long) 0));
						{	/* SawJvm/inline.scm 1 */
							obj_t BgL_endz00_3889;

							BgL_endz00_3889 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3887)));
							{	/* SawJvm/inline.scm 1 */

								BgL_cportz00_3879 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3887, BgL_startz00_3888, BgL_endz00_3889);
				}}}}
				{
					long BgL_iz00_3880;

					BgL_iz00_3880 = ((long) 183);
				BgL_loopz00_3881:
					if ((BgL_iz00_3880 == ((long) -1)))
						{	/* SawJvm/inline.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/inline.scm 1 */
							{	/* SawJvm/inline.scm 1 */
								obj_t BgL_arg2250z00_3883;

								{	/* SawJvm/inline.scm 1 */

									{	/* SawJvm/inline.scm 1 */
										obj_t BgL_locationz00_3885;

										BgL_locationz00_3885 = BBOOL(((bool_t) 0));
										{	/* SawJvm/inline.scm 1 */

											BgL_arg2250z00_3883 =
												BGl_readz00zz__readerz00(BgL_cportz00_3879,
												BgL_locationz00_3885);
										}
									}
								}
								{	/* SawJvm/inline.scm 1 */
									int BgL_tmpz00_3989;

									BgL_tmpz00_3989 = (int) (BgL_iz00_3880);
									CNST_TABLE_SET(BgL_tmpz00_3989, BgL_arg2250z00_3883);
							}}
							{	/* SawJvm/inline.scm 1 */
								int BgL_auxz00_3886;

								BgL_auxz00_3886 = (int) ((BgL_iz00_3880 - ((long) 1)));
								{
									long BgL_iz00_3994;

									BgL_iz00_3994 = (long) (BgL_auxz00_3886);
									BgL_iz00_3880 = BgL_iz00_3994;
									goto BgL_loopz00_3881;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			BGl_za2jvmzd2inlinesza2zd2zzsaw_jvm_inlinez00 = BNIL;
			BGl_za2toozd2hardza2zd2zzsaw_jvm_inlinez00 = CNST_TABLE_REF(((long) 0));
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 1)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2147z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 3)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2148z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 4)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2149z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 5)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2150z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 6)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2151z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 7)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2152z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 9)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2153z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 10)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2154z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 11)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2155z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 12)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2156z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 14)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2157z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 15)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2158z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 16)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2159z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 17)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2160z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 18)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2161z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 19)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2162z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 20)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2163z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 21)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2164z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 22)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2165z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 23)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2166z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 24)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2167z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 25)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2168z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 26)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2169z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 27)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2170z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 28)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2171z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 29)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2172z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 30)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2173z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 31)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2174z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 32)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2175z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 33)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2176z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 34)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2177z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 35)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2178z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 36)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2179z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 37)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2180z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 38)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2181z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 39)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2182z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 40)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2183z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 41)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2184z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 37)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2185z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 38)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2186z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 39)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2187z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 40)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2188z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 41)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2189z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 42)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2190z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 43)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2191z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 44)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2192z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 45)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2193z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 46)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2194z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 47)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2195z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 48)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2196z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 49)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2197z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 50)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2198z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 51)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2199z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 52)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2200z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 53)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2201z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 54)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2202z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 55)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2203z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 56)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2204z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 57)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2205z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 58)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2206z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 59)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2207z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 60)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2208z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 61)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2209z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 62)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2210z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 63)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2211z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 64)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2212z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 65)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2213z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 66)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2214z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 67)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2215z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 68)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2216z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 69)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2217z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 70)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2218z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 71)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2219z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 72)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2220z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 72)),
				CNST_TABLE_REF(((long) 13)), BGl_proc2221z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 73)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2222z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 74)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2223z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 75)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2224z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 76)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2225z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 77)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2226z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 78)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2227z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 79)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2228z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 80)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2229z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 81)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2230z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 82)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2231z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 83)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2232z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 84)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2233z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 85)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2234z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 86)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2235z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 87)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2236z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 88)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2237z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 89)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2238z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 90)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2239z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 91)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2240z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 92)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2241z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 93)),
				CNST_TABLE_REF(((long) 8)), BGl_proc2242z00zzsaw_jvm_inlinez00);
			BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 94)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2243z00zzsaw_jvm_inlinez00);
			return
				BGl_putpropz12z12zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 95)),
				CNST_TABLE_REF(((long) 2)), BGl_proc2244z00zzsaw_jvm_inlinez00);
		}

	}



/* &<@anonymous:1983> */
	obj_t BGl_z62zc3z04anonymousza31983ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3619, obj_t BgL_mez00_3620, obj_t BgL_argsz00_3621)
	{
		{	/* SawJvm/inline.scm 548 */
			{	/* SawJvm/inline.scm 549 */
				obj_t BgL_arg1984z00_3892;

				BgL_arg1984z00_3892 = CAR(((obj_t) BgL_argsz00_3621));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3620), BgL_arg1984z00_3892);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3620), CNST_TABLE_REF(((long) 96)));
			{	/* SawJvm/inline.scm 551 */
				obj_t BgL_arg1985z00_3893;

				{	/* SawJvm/inline.scm 551 */
					obj_t BgL_pairz00_3894;

					BgL_pairz00_3894 = CDR(((obj_t) BgL_argsz00_3621));
					BgL_arg1985z00_3893 = CAR(BgL_pairz00_3894);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3620), BgL_arg1985z00_3893);
			}
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3620), CNST_TABLE_REF(((long) 97)));
		}

	}



/* &<@anonymous:1978> */
	obj_t BGl_z62zc3z04anonymousza31978ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3622, obj_t BgL_mez00_3623, obj_t BgL_argsz00_3624)
	{
		{	/* SawJvm/inline.scm 540 */
			{	/* SawJvm/inline.scm 541 */
				obj_t BgL_arg1979z00_3895;

				BgL_arg1979z00_3895 = CAR(((obj_t) BgL_argsz00_3624));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3623), BgL_arg1979z00_3895);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3623), CNST_TABLE_REF(((long) 96)));
			{	/* SawJvm/inline.scm 543 */
				obj_t BgL_arg1980z00_3896;

				{	/* SawJvm/inline.scm 543 */
					obj_t BgL_pairz00_3897;

					BgL_pairz00_3897 = CDR(((obj_t) BgL_argsz00_3624));
					BgL_arg1980z00_3896 = CAR(BgL_pairz00_3897);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3623), BgL_arg1980z00_3896);
			}
			{	/* SawJvm/inline.scm 544 */
				obj_t BgL_arg1981z00_3898;

				{	/* SawJvm/inline.scm 544 */
					obj_t BgL_pairz00_3899;

					{	/* SawJvm/inline.scm 544 */
						obj_t BgL_pairz00_3900;

						BgL_pairz00_3900 = CDR(((obj_t) BgL_argsz00_3624));
						BgL_pairz00_3899 = CDR(BgL_pairz00_3900);
					}
					BgL_arg1981z00_3898 = CAR(BgL_pairz00_3899);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3623), BgL_arg1981z00_3898);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3623), CNST_TABLE_REF(((long) 98)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1976> */
	obj_t BGl_z62zc3z04anonymousza31976ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3625, obj_t BgL_mez00_3626)
	{
		{	/* SawJvm/inline.scm 537 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3626), CNST_TABLE_REF(((long) 100)));
		}

	}



/* &<@anonymous:1974> */
	obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3627, obj_t BgL_mez00_3628)
	{
		{	/* SawJvm/inline.scm 519 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3628), CNST_TABLE_REF(((long) 101)));
		}

	}



/* &<@anonymous:1972> */
	obj_t BGl_z62zc3z04anonymousza31972ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3629, obj_t BgL_mez00_3630)
	{
		{	/* SawJvm/inline.scm 512 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3630), CNST_TABLE_REF(((long) 102)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1970> */
	obj_t BGl_z62zc3z04anonymousza31970ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3631, obj_t BgL_mez00_3632)
	{
		{	/* SawJvm/inline.scm 509 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3632), CNST_TABLE_REF(((long) 103)));
		}

	}



/* &<@anonymous:1968> */
	obj_t BGl_z62zc3z04anonymousza31968ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3633, obj_t BgL_mez00_3634)
	{
		{	/* SawJvm/inline.scm 506 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3634), CNST_TABLE_REF(((long) 104)));
		}

	}



/* &<@anonymous:1966> */
	obj_t BGl_z62zc3z04anonymousza31966ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3635, obj_t BgL_mez00_3636)
	{
		{	/* SawJvm/inline.scm 499 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3636), CNST_TABLE_REF(((long) 105)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1964> */
	obj_t BGl_z62zc3z04anonymousza31964ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3637, obj_t BgL_mez00_3638)
	{
		{	/* SawJvm/inline.scm 495 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3638), CNST_TABLE_REF(((long) 106)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1962> */
	obj_t BGl_z62zc3z04anonymousza31962ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3639, obj_t BgL_mez00_3640)
	{
		{	/* SawJvm/inline.scm 492 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3640), CNST_TABLE_REF(((long) 107)));
		}

	}



/* &<@anonymous:1960> */
	obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3641, obj_t BgL_mez00_3642)
	{
		{	/* SawJvm/inline.scm 489 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3642), CNST_TABLE_REF(((long) 108)));
		}

	}



/* &<@anonymous:1958> */
	obj_t BGl_z62zc3z04anonymousza31958ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3643, obj_t BgL_mez00_3644)
	{
		{	/* SawJvm/inline.scm 486 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3644), CNST_TABLE_REF(((long) 109)));
		}

	}



/* &<@anonymous:1956> */
	obj_t BGl_z62zc3z04anonymousza31956ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3645, obj_t BgL_mez00_3646)
	{
		{	/* SawJvm/inline.scm 470 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3646), CNST_TABLE_REF(((long) 110)));
		}

	}



/* &<@anonymous:1954> */
	obj_t BGl_z62zc3z04anonymousza31954ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3647, obj_t BgL_mez00_3648)
	{
		{	/* SawJvm/inline.scm 466 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3648), CNST_TABLE_REF(((long) 111)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1952> */
	obj_t BGl_z62zc3z04anonymousza31952ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3649, obj_t BgL_mez00_3650)
	{
		{	/* SawJvm/inline.scm 460 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3650), CNST_TABLE_REF(((long) 112)));
		}

	}



/* &<@anonymous:1949> */
	obj_t BGl_z62zc3z04anonymousza31949ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3651, obj_t BgL_mez00_3652)
	{
		{	/* SawJvm/inline.scm 457 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3652), CNST_TABLE_REF(((long) 113)));
		}

	}



/* &<@anonymous:1947> */
	obj_t BGl_z62zc3z04anonymousza31947ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3653, obj_t BgL_mez00_3654)
	{
		{	/* SawJvm/inline.scm 438 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3654), CNST_TABLE_REF(((long) 114)));
		}

	}



/* &<@anonymous:1945> */
	obj_t BGl_z62zc3z04anonymousza31945ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3655, obj_t BgL_mez00_3656)
	{
		{	/* SawJvm/inline.scm 435 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3656), CNST_TABLE_REF(((long) 115)));
		}

	}



/* &<@anonymous:1943> */
	obj_t BGl_z62zc3z04anonymousza31943ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3657, obj_t BgL_mez00_3658)
	{
		{	/* SawJvm/inline.scm 431 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3658), CNST_TABLE_REF(((long) 116)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1941> */
	obj_t BGl_z62zc3z04anonymousza31941ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3659, obj_t BgL_mez00_3660)
	{
		{	/* SawJvm/inline.scm 426 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3660), CNST_TABLE_REF(((long) 117)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3660), CNST_TABLE_REF(((long) 118)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3660), CNST_TABLE_REF(((long) 119)));
		}

	}



/* &<@anonymous:1939> */
	obj_t BGl_z62zc3z04anonymousza31939ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3661, obj_t BgL_mez00_3662)
	{
		{	/* SawJvm/inline.scm 423 */
			return CNST_TABLE_REF(((long) 120));
		}

	}



/* &<@anonymous:1937> */
	obj_t BGl_z62zc3z04anonymousza31937ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3663, obj_t BgL_mez00_3664)
	{
		{	/* SawJvm/inline.scm 420 */
			return CNST_TABLE_REF(((long) 120));
		}

	}



/* &<@anonymous:1935> */
	obj_t BGl_z62zc3z04anonymousza31935ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3665, obj_t BgL_mez00_3666)
	{
		{	/* SawJvm/inline.scm 417 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3666), CNST_TABLE_REF(((long) 121)));
		}

	}



/* &<@anonymous:1932> */
	obj_t BGl_z62zc3z04anonymousza31932ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3667, obj_t BgL_mez00_3668, obj_t BgL_onzf3zf3_3669,
		obj_t BgL_labz00_3670)
	{
		{	/* SawJvm/inline.scm 392 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3668), CNST_TABLE_REF(((long) 122)));
			{	/* SawJvm/inline.scm 394 */
				obj_t BgL_arg1933z00_3901;

				if (CBOOL(BgL_onzf3zf3_3669))
					{	/* SawJvm/inline.scm 394 */
						BgL_arg1933z00_3901 = CNST_TABLE_REF(((long) 123));
					}
				else
					{	/* SawJvm/inline.scm 394 */
						BgL_arg1933z00_3901 = CNST_TABLE_REF(((long) 124));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3668), BgL_arg1933z00_3901,
					BgL_labz00_3670);
			}
		}

	}



/* &<@anonymous:1930> */
	obj_t BGl_z62zc3z04anonymousza31930ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3671, obj_t BgL_mez00_3672)
	{
		{	/* SawJvm/inline.scm 388 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3672), CNST_TABLE_REF(((long) 122)));
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3672,
				CNST_TABLE_REF(((long) 123)));
		}

	}



/* &<@anonymous:1928> */
	obj_t BGl_z62zc3z04anonymousza31928ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3673, obj_t BgL_mez00_3674)
	{
		{	/* SawJvm/inline.scm 380 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3674), CNST_TABLE_REF(((long) 125)));
		}

	}



/* &<@anonymous:1926> */
	obj_t BGl_z62zc3z04anonymousza31926ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3675, obj_t BgL_mez00_3676)
	{
		{	/* SawJvm/inline.scm 379 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3676), CNST_TABLE_REF(((long) 126)));
		}

	}



/* &<@anonymous:1924> */
	obj_t BGl_z62zc3z04anonymousza31924ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3677, obj_t BgL_mez00_3678)
	{
		{	/* SawJvm/inline.scm 378 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3678), CNST_TABLE_REF(((long) 127)));
		}

	}



/* &<@anonymous:1921> */
	obj_t BGl_z62zc3z04anonymousza31921ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3679, obj_t BgL_mez00_3680)
	{
		{	/* SawJvm/inline.scm 377 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3680), CNST_TABLE_REF(((long) 128)));
		}

	}



/* &<@anonymous:1919> */
	obj_t BGl_z62zc3z04anonymousza31919ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3681, obj_t BgL_mez00_3682)
	{
		{	/* SawJvm/inline.scm 376 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3682), CNST_TABLE_REF(((long) 129)));
		}

	}



/* &<@anonymous:1916> */
	obj_t BGl_z62zc3z04anonymousza31916ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3683, obj_t BgL_mez00_3684, obj_t BgL_onzf3zf3_3685,
		obj_t BgL_labz00_3686)
	{
		{	/* SawJvm/inline.scm 372 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3684), CNST_TABLE_REF(((long) 130)));
			{	/* SawJvm/inline.scm 374 */
				obj_t BgL_arg1917z00_3902;

				if (CBOOL(BgL_onzf3zf3_3685))
					{	/* SawJvm/inline.scm 374 */
						BgL_arg1917z00_3902 = CNST_TABLE_REF(((long) 131));
					}
				else
					{	/* SawJvm/inline.scm 374 */
						BgL_arg1917z00_3902 = CNST_TABLE_REF(((long) 132));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3684), BgL_arg1917z00_3902,
					BgL_labz00_3686);
			}
		}

	}



/* &<@anonymous:1913> */
	obj_t BGl_z62zc3z04anonymousza31913ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3687, obj_t BgL_mez00_3688, obj_t BgL_onzf3zf3_3689,
		obj_t BgL_labz00_3690)
	{
		{	/* SawJvm/inline.scm 368 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3688), CNST_TABLE_REF(((long) 130)));
			{	/* SawJvm/inline.scm 370 */
				obj_t BgL_arg1914z00_3903;

				if (CBOOL(BgL_onzf3zf3_3689))
					{	/* SawJvm/inline.scm 370 */
						BgL_arg1914z00_3903 = CNST_TABLE_REF(((long) 133));
					}
				else
					{	/* SawJvm/inline.scm 370 */
						BgL_arg1914z00_3903 = CNST_TABLE_REF(((long) 134));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3688), BgL_arg1914z00_3903,
					BgL_labz00_3690);
			}
		}

	}



/* &<@anonymous:1910> */
	obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3691, obj_t BgL_mez00_3692, obj_t BgL_onzf3zf3_3693,
		obj_t BgL_labz00_3694)
	{
		{	/* SawJvm/inline.scm 364 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3692), CNST_TABLE_REF(((long) 135)));
			{	/* SawJvm/inline.scm 366 */
				obj_t BgL_arg1911z00_3904;

				if (CBOOL(BgL_onzf3zf3_3693))
					{	/* SawJvm/inline.scm 366 */
						BgL_arg1911z00_3904 = CNST_TABLE_REF(((long) 134));
					}
				else
					{	/* SawJvm/inline.scm 366 */
						BgL_arg1911z00_3904 = CNST_TABLE_REF(((long) 133));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3692), BgL_arg1911z00_3904,
					BgL_labz00_3694);
			}
		}

	}



/* &<@anonymous:1907> */
	obj_t BGl_z62zc3z04anonymousza31907ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3695, obj_t BgL_mez00_3696, obj_t BgL_onzf3zf3_3697,
		obj_t BgL_labz00_3698)
	{
		{	/* SawJvm/inline.scm 360 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3696), CNST_TABLE_REF(((long) 135)));
			{	/* SawJvm/inline.scm 362 */
				obj_t BgL_arg1908z00_3905;

				if (CBOOL(BgL_onzf3zf3_3697))
					{	/* SawJvm/inline.scm 362 */
						BgL_arg1908z00_3905 = CNST_TABLE_REF(((long) 132));
					}
				else
					{	/* SawJvm/inline.scm 362 */
						BgL_arg1908z00_3905 = CNST_TABLE_REF(((long) 131));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3696), BgL_arg1908z00_3905,
					BgL_labz00_3698);
			}
		}

	}



/* &<@anonymous:1904> */
	obj_t BGl_z62zc3z04anonymousza31904ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3699, obj_t BgL_mez00_3700, obj_t BgL_onzf3zf3_3701,
		obj_t BgL_labz00_3702)
	{
		{	/* SawJvm/inline.scm 356 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3700), CNST_TABLE_REF(((long) 130)));
			{	/* SawJvm/inline.scm 358 */
				obj_t BgL_arg1905z00_3906;

				if (CBOOL(BgL_onzf3zf3_3701))
					{	/* SawJvm/inline.scm 358 */
						BgL_arg1905z00_3906 = CNST_TABLE_REF(((long) 136));
					}
				else
					{	/* SawJvm/inline.scm 358 */
						BgL_arg1905z00_3906 = CNST_TABLE_REF(((long) 137));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3700), BgL_arg1905z00_3906,
					BgL_labz00_3702);
			}
		}

	}



/* &<@anonymous:1902> */
	obj_t BGl_z62zc3z04anonymousza31902ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3703, obj_t BgL_mez00_3704)
	{
		{	/* SawJvm/inline.scm 353 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3704), CNST_TABLE_REF(((long) 138)));
		}

	}



/* &<@anonymous:1898> */
	obj_t BGl_z62zc3z04anonymousza31898ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3705, obj_t BgL_mez00_3706)
	{
		{	/* SawJvm/inline.scm 350 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3706), CNST_TABLE_REF(((long) 139)));
		}

	}



/* &<@anonymous:1896> */
	obj_t BGl_z62zc3z04anonymousza31896ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3707, obj_t BgL_mez00_3708)
	{
		{	/* SawJvm/inline.scm 347 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3708), CNST_TABLE_REF(((long) 138)));
		}

	}



/* &<@anonymous:1894> */
	obj_t BGl_z62zc3z04anonymousza31894ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3709, obj_t BgL_mez00_3710)
	{
		{	/* SawJvm/inline.scm 344 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3710), CNST_TABLE_REF(((long) 139)));
		}

	}



/* &<@anonymous:1892> */
	obj_t BGl_z62zc3z04anonymousza31892ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3711, obj_t BgL_mez00_3712)
	{
		{	/* SawJvm/inline.scm 341 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3712), CNST_TABLE_REF(((long) 140)));
		}

	}



/* &<@anonymous:1890> */
	obj_t BGl_z62zc3z04anonymousza31890ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3713, obj_t BgL_mez00_3714)
	{
		{	/* SawJvm/inline.scm 338 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3714), CNST_TABLE_REF(((long) 141)));
		}

	}



/* &<@anonymous:1888> */
	obj_t BGl_z62zc3z04anonymousza31888ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3715, obj_t BgL_mez00_3716)
	{
		{	/* SawJvm/inline.scm 335 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3716), CNST_TABLE_REF(((long) 142)));
		}

	}



/* &<@anonymous:1886> */
	obj_t BGl_z62zc3z04anonymousza31886ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3717, obj_t BgL_mez00_3718)
	{
		{	/* SawJvm/inline.scm 332 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3718), CNST_TABLE_REF(((long) 143)));
		}

	}



/* &<@anonymous:1884> */
	obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3719, obj_t BgL_mez00_3720)
	{
		{	/* SawJvm/inline.scm 324 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3720), CNST_TABLE_REF(((long) 144)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3720), CNST_TABLE_REF(((long) 145)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3720), CNST_TABLE_REF(((long) 146)));
		}

	}



/* &<@anonymous:1882> */
	obj_t BGl_z62zc3z04anonymousza31882ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3721, obj_t BgL_mez00_3722)
	{
		{	/* SawJvm/inline.scm 323 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3722), CNST_TABLE_REF(((long) 146)));
		}

	}



/* &<@anonymous:1879> */
	obj_t BGl_z62zc3z04anonymousza31879ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3723, obj_t BgL_mez00_3724)
	{
		{	/* SawJvm/inline.scm 322 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3724), CNST_TABLE_REF(((long) 119)));
		}

	}



/* &<@anonymous:1877> */
	obj_t BGl_z62zc3z04anonymousza31877ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3725, obj_t BgL_mez00_3726)
	{
		{	/* SawJvm/inline.scm 321 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3726), CNST_TABLE_REF(((long) 147)));
		}

	}



/* &<@anonymous:1875> */
	obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3727, obj_t BgL_mez00_3728)
	{
		{	/* SawJvm/inline.scm 320 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3728), CNST_TABLE_REF(((long) 148)));
		}

	}



/* &<@anonymous:1873> */
	obj_t BGl_z62zc3z04anonymousza31873ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3729, obj_t BgL_mez00_3730)
	{
		{	/* SawJvm/inline.scm 319 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3730), CNST_TABLE_REF(((long) 149)));
		}

	}



/* &<@anonymous:1871> */
	obj_t BGl_z62zc3z04anonymousza31871ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3731, obj_t BgL_mez00_3732)
	{
		{	/* SawJvm/inline.scm 318 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3732), CNST_TABLE_REF(((long) 149)));
		}

	}



/* &<@anonymous:1869> */
	obj_t BGl_z62zc3z04anonymousza31869ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3733, obj_t BgL_mez00_3734)
	{
		{	/* SawJvm/inline.scm 317 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3734), CNST_TABLE_REF(((long) 150)));
		}

	}



/* &<@anonymous:1866> */
	obj_t BGl_z62zc3z04anonymousza31866ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3735, obj_t BgL_mez00_3736)
	{
		{	/* SawJvm/inline.scm 316 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3736), CNST_TABLE_REF(((long) 151)));
		}

	}



/* &<@anonymous:1863> */
	obj_t BGl_z62zc3z04anonymousza31863ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3737, obj_t BgL_mez00_3738)
	{
		{	/* SawJvm/inline.scm 315 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3738), CNST_TABLE_REF(((long) 152)));
		}

	}



/* &<@anonymous:1860> */
	obj_t BGl_z62zc3z04anonymousza31860ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3739, obj_t BgL_mez00_3740, obj_t BgL_onzf3zf3_3741,
		obj_t BgL_labz00_3742)
	{
		{	/* SawJvm/inline.scm 310 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3740), CNST_TABLE_REF(((long) 144)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3740), CNST_TABLE_REF(((long) 119)));
			{	/* SawJvm/inline.scm 313 */
				obj_t BgL_arg1861z00_3907;

				if (CBOOL(BgL_onzf3zf3_3741))
					{	/* SawJvm/inline.scm 313 */
						BgL_arg1861z00_3907 = CNST_TABLE_REF(((long) 137));
					}
				else
					{	/* SawJvm/inline.scm 313 */
						BgL_arg1861z00_3907 = CNST_TABLE_REF(((long) 136));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3740), BgL_arg1861z00_3907,
					BgL_labz00_3742);
			}
		}

	}



/* &<@anonymous:1857> */
	obj_t BGl_z62zc3z04anonymousza31857ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3743, obj_t BgL_mez00_3744, obj_t BgL_onzf3zf3_3745,
		obj_t BgL_labz00_3746)
	{
		{	/* SawJvm/inline.scm 305 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3744), CNST_TABLE_REF(((long) 144)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3744), CNST_TABLE_REF(((long) 119)));
			{	/* SawJvm/inline.scm 308 */
				obj_t BgL_arg1858z00_3908;

				if (CBOOL(BgL_onzf3zf3_3745))
					{	/* SawJvm/inline.scm 308 */
						BgL_arg1858z00_3908 = CNST_TABLE_REF(((long) 136));
					}
				else
					{	/* SawJvm/inline.scm 308 */
						BgL_arg1858z00_3908 = CNST_TABLE_REF(((long) 137));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3744), BgL_arg1858z00_3908,
					BgL_labz00_3746);
			}
		}

	}



/* &<@anonymous:1854> */
	obj_t BGl_z62zc3z04anonymousza31854ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3747, obj_t BgL_mez00_3748, obj_t BgL_onzf3zf3_3749,
		obj_t BgL_labz00_3750)
	{
		{	/* SawJvm/inline.scm 302 */
			{	/* SawJvm/inline.scm 303 */
				obj_t BgL_arg1855z00_3909;

				if (CBOOL(BgL_onzf3zf3_3749))
					{	/* SawJvm/inline.scm 303 */
						BgL_arg1855z00_3909 = CNST_TABLE_REF(((long) 153));
					}
				else
					{	/* SawJvm/inline.scm 303 */
						BgL_arg1855z00_3909 = CNST_TABLE_REF(((long) 154));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3748), BgL_arg1855z00_3909,
					BgL_labz00_3750);
			}
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3751, obj_t BgL_mez00_3752, obj_t BgL_onzf3zf3_3753,
		obj_t BgL_labz00_3754)
	{
		{	/* SawJvm/inline.scm 299 */
			{	/* SawJvm/inline.scm 300 */
				obj_t BgL_arg1852z00_3910;

				if (CBOOL(BgL_onzf3zf3_3753))
					{	/* SawJvm/inline.scm 300 */
						BgL_arg1852z00_3910 = CNST_TABLE_REF(((long) 155));
					}
				else
					{	/* SawJvm/inline.scm 300 */
						BgL_arg1852z00_3910 = CNST_TABLE_REF(((long) 156));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3752), BgL_arg1852z00_3910,
					BgL_labz00_3754);
			}
		}

	}



/* &<@anonymous:1847> */
	obj_t BGl_z62zc3z04anonymousza31847ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3755, obj_t BgL_mez00_3756, obj_t BgL_onzf3zf3_3757,
		obj_t BgL_labz00_3758)
	{
		{	/* SawJvm/inline.scm 296 */
			{	/* SawJvm/inline.scm 297 */
				obj_t BgL_arg1848z00_3911;

				if (CBOOL(BgL_onzf3zf3_3757))
					{	/* SawJvm/inline.scm 297 */
						BgL_arg1848z00_3911 = CNST_TABLE_REF(((long) 156));
					}
				else
					{	/* SawJvm/inline.scm 297 */
						BgL_arg1848z00_3911 = CNST_TABLE_REF(((long) 155));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3756), BgL_arg1848z00_3911,
					BgL_labz00_3758);
			}
		}

	}



/* &<@anonymous:1842> */
	obj_t BGl_z62zc3z04anonymousza31842ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3759, obj_t BgL_mez00_3760, obj_t BgL_onzf3zf3_3761,
		obj_t BgL_labz00_3762)
	{
		{	/* SawJvm/inline.scm 293 */
			{	/* SawJvm/inline.scm 294 */
				obj_t BgL_arg1845z00_3912;

				if (CBOOL(BgL_onzf3zf3_3761))
					{	/* SawJvm/inline.scm 294 */
						BgL_arg1845z00_3912 = CNST_TABLE_REF(((long) 154));
					}
				else
					{	/* SawJvm/inline.scm 294 */
						BgL_arg1845z00_3912 = CNST_TABLE_REF(((long) 153));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3760), BgL_arg1845z00_3912,
					BgL_labz00_3762);
			}
		}

	}



/* &<@anonymous:1839> */
	obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3763, obj_t BgL_mez00_3764, obj_t BgL_onzf3zf3_3765,
		obj_t BgL_labz00_3766)
	{
		{	/* SawJvm/inline.scm 290 */
			{	/* SawJvm/inline.scm 291 */
				obj_t BgL_arg1840z00_3913;

				if (CBOOL(BgL_onzf3zf3_3765))
					{	/* SawJvm/inline.scm 291 */
						BgL_arg1840z00_3913 = CNST_TABLE_REF(((long) 157));
					}
				else
					{	/* SawJvm/inline.scm 291 */
						BgL_arg1840z00_3913 = CNST_TABLE_REF(((long) 158));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3764), BgL_arg1840z00_3913,
					BgL_labz00_3766);
			}
		}

	}



/* &<@anonymous:1836> */
	obj_t BGl_z62zc3z04anonymousza31836ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3767, obj_t BgL_mez00_3768)
	{
		{	/* SawJvm/inline.scm 287 */
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3768,
				CNST_TABLE_REF(((long) 153)));
		}

	}



/* &<@anonymous:1833> */
	obj_t BGl_z62zc3z04anonymousza31833ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3769, obj_t BgL_mez00_3770)
	{
		{	/* SawJvm/inline.scm 284 */
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3770,
				CNST_TABLE_REF(((long) 155)));
		}

	}



/* &<@anonymous:1831> */
	obj_t BGl_z62zc3z04anonymousza31831ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3771, obj_t BgL_mez00_3772)
	{
		{	/* SawJvm/inline.scm 281 */
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3772,
				CNST_TABLE_REF(((long) 156)));
		}

	}



/* &<@anonymous:1829> */
	obj_t BGl_z62zc3z04anonymousza31829ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3773, obj_t BgL_mez00_3774)
	{
		{	/* SawJvm/inline.scm 278 */
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3774,
				CNST_TABLE_REF(((long) 154)));
		}

	}



/* &<@anonymous:1827> */
	obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3775, obj_t BgL_mez00_3776)
	{
		{	/* SawJvm/inline.scm 275 */
			return
				BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(BgL_mez00_3776,
				CNST_TABLE_REF(((long) 157)));
		}

	}



/* &<@anonymous:1825> */
	obj_t BGl_z62zc3z04anonymousza31825ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3777, obj_t BgL_mez00_3778)
	{
		{	/* SawJvm/inline.scm 262 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3778), CNST_TABLE_REF(((long) 159)));
		}

	}



/* &<@anonymous:1823> */
	obj_t BGl_z62zc3z04anonymousza31823ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3779, obj_t BgL_mez00_3780)
	{
		{	/* SawJvm/inline.scm 259 */
			return CNST_TABLE_REF(((long) 120));
		}

	}



/* &<@anonymous:1821> */
	obj_t BGl_z62zc3z04anonymousza31821ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3781, obj_t BgL_mez00_3782)
	{
		{	/* SawJvm/inline.scm 256 */
			return CNST_TABLE_REF(((long) 120));
		}

	}



/* &<@anonymous:1812> */
	obj_t BGl_z62zc3z04anonymousza31812ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3783, obj_t BgL_mez00_3784)
	{
		{	/* SawJvm/inline.scm 250 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3784), CNST_TABLE_REF(((long) 159)));
		}

	}



/* &<@anonymous:1809> */
	obj_t BGl_z62zc3z04anonymousza31809ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3785, obj_t BgL_mez00_3786)
	{
		{	/* SawJvm/inline.scm 247 */
			return CNST_TABLE_REF(((long) 120));
		}

	}



/* &<@anonymous:1802> */
	obj_t BGl_z62zc3z04anonymousza31802ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3787, obj_t BgL_mez00_3788)
	{
		{	/* SawJvm/inline.scm 244 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3788), CNST_TABLE_REF(((long) 160)));
		}

	}



/* &<@anonymous:1799> */
	obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3789, obj_t BgL_mez00_3790)
	{
		{	/* SawJvm/inline.scm 241 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3790), CNST_TABLE_REF(((long) 161)));
		}

	}



/* &<@anonymous:1797> */
	obj_t BGl_z62zc3z04anonymousza31797ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3791, obj_t BgL_mez00_3792)
	{
		{	/* SawJvm/inline.scm 237 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3792), CNST_TABLE_REF(((long) 118)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3792), CNST_TABLE_REF(((long) 119)));
		}

	}



/* &<@anonymous:1791> */
	obj_t BGl_z62zc3z04anonymousza31791ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3793, obj_t BgL_mez00_3794)
	{
		{	/* SawJvm/inline.scm 234 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3794), CNST_TABLE_REF(((long) 162)));
		}

	}



/* &<@anonymous:1785> */
	obj_t BGl_z62zc3z04anonymousza31785ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3795, obj_t BgL_mez00_3796)
	{
		{	/* SawJvm/inline.scm 231 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3796), CNST_TABLE_REF(((long) 163)));
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3797, obj_t BgL_mez00_3798, obj_t BgL_onzf3zf3_3799,
		obj_t BgL_labz00_3800)
	{
		{	/* SawJvm/inline.scm 225 */
			{	/* SawJvm/inline.scm 226 */
				obj_t BgL_arg1782z00_3914;

				if (CBOOL(BgL_onzf3zf3_3799))
					{	/* SawJvm/inline.scm 226 */
						BgL_arg1782z00_3914 = CNST_TABLE_REF(((long) 153));
					}
				else
					{	/* SawJvm/inline.scm 226 */
						BgL_arg1782z00_3914 = CNST_TABLE_REF(((long) 154));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3798), BgL_arg1782z00_3914,
					BgL_labz00_3800);
			}
		}

	}



/* &<@anonymous:1772> */
	obj_t BGl_z62zc3z04anonymousza31772ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3801, obj_t BgL_mez00_3802, obj_t BgL_onzf3zf3_3803,
		obj_t BgL_labz00_3804)
	{
		{	/* SawJvm/inline.scm 222 */
			{	/* SawJvm/inline.scm 223 */
				obj_t BgL_arg1775z00_3915;

				if (CBOOL(BgL_onzf3zf3_3803))
					{	/* SawJvm/inline.scm 223 */
						BgL_arg1775z00_3915 = CNST_TABLE_REF(((long) 155));
					}
				else
					{	/* SawJvm/inline.scm 223 */
						BgL_arg1775z00_3915 = CNST_TABLE_REF(((long) 156));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3802), BgL_arg1775z00_3915,
					BgL_labz00_3804);
			}
		}

	}



/* &<@anonymous:1761> */
	obj_t BGl_z62zc3z04anonymousza31761ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3805, obj_t BgL_mez00_3806, obj_t BgL_onzf3zf3_3807,
		obj_t BgL_labz00_3808)
	{
		{	/* SawJvm/inline.scm 219 */
			{	/* SawJvm/inline.scm 220 */
				obj_t BgL_arg1768z00_3916;

				if (CBOOL(BgL_onzf3zf3_3807))
					{	/* SawJvm/inline.scm 220 */
						BgL_arg1768z00_3916 = CNST_TABLE_REF(((long) 156));
					}
				else
					{	/* SawJvm/inline.scm 220 */
						BgL_arg1768z00_3916 = CNST_TABLE_REF(((long) 155));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3806), BgL_arg1768z00_3916,
					BgL_labz00_3808);
			}
		}

	}



/* &<@anonymous:1758> */
	obj_t BGl_z62zc3z04anonymousza31758ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3809, obj_t BgL_mez00_3810, obj_t BgL_onzf3zf3_3811,
		obj_t BgL_labz00_3812)
	{
		{	/* SawJvm/inline.scm 216 */
			{	/* SawJvm/inline.scm 217 */
				obj_t BgL_arg1759z00_3917;

				if (CBOOL(BgL_onzf3zf3_3811))
					{	/* SawJvm/inline.scm 217 */
						BgL_arg1759z00_3917 = CNST_TABLE_REF(((long) 154));
					}
				else
					{	/* SawJvm/inline.scm 217 */
						BgL_arg1759z00_3917 = CNST_TABLE_REF(((long) 153));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3810), BgL_arg1759z00_3917,
					BgL_labz00_3812);
			}
		}

	}



/* &<@anonymous:1755> */
	obj_t BGl_z62zc3z04anonymousza31755ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3813, obj_t BgL_mez00_3814, obj_t BgL_onzf3zf3_3815,
		obj_t BgL_labz00_3816)
	{
		{	/* SawJvm/inline.scm 213 */
			{	/* SawJvm/inline.scm 214 */
				obj_t BgL_arg1756z00_3918;

				if (CBOOL(BgL_onzf3zf3_3815))
					{	/* SawJvm/inline.scm 214 */
						BgL_arg1756z00_3918 = CNST_TABLE_REF(((long) 157));
					}
				else
					{	/* SawJvm/inline.scm 214 */
						BgL_arg1756z00_3918 = CNST_TABLE_REF(((long) 158));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3814), BgL_arg1756z00_3918,
					BgL_labz00_3816);
			}
		}

	}



/* &<@anonymous:1747> */
	obj_t BGl_z62zc3z04anonymousza31747ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3817, obj_t BgL_mez00_3818)
	{
		{	/* SawJvm/inline.scm 210 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3818), CNST_TABLE_REF(((long) 160)));
		}

	}



/* &<@anonymous:1743> */
	obj_t BGl_z62zc3z04anonymousza31743ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3819, obj_t BgL_mez00_3820)
	{
		{	/* SawJvm/inline.scm 205 */
			{	/* SawJvm/inline.scm 206 */
				obj_t BgL_arg1744z00_3919;

				{	/* SawJvm/inline.scm 206 */
					obj_t BgL_arg1745z00_3920;

					BgL_arg1745z00_3920 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 164)), BNIL);
					BgL_arg1744z00_3919 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 165)), BgL_arg1745z00_3920);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3820), BgL_arg1744z00_3919);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3820), CNST_TABLE_REF(((long) 118)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3820), CNST_TABLE_REF(((long) 119)));
		}

	}



/* &<@anonymous:1741> */
	obj_t BGl_z62zc3z04anonymousza31741ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3821, obj_t BgL_mez00_3822)
	{
		{	/* SawJvm/inline.scm 202 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3822), CNST_TABLE_REF(((long) 166)));
		}

	}



/* &<@anonymous:1732> */
	obj_t BGl_z62zc3z04anonymousza31732ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3823, obj_t BgL_mez00_3824, obj_t BgL_argsz00_3825)
	{
		{	/* SawJvm/inline.scm 195 */
			{	/* SawJvm/inline.scm 196 */
				obj_t BgL_arg1733z00_3921;

				{	/* SawJvm/inline.scm 196 */
					obj_t BgL_arg1738z00_3922;

					BgL_arg1738z00_3922 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 167)), BNIL);
					BgL_arg1733z00_3921 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 168)), BgL_arg1738z00_3922);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3824), BgL_arg1733z00_3921);
			}
			{	/* SawJvm/inline.scm 197 */
				obj_t BgL_arg1739z00_3923;

				BgL_arg1739z00_3923 = CAR(((obj_t) BgL_argsz00_3825));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3824), BgL_arg1739z00_3923);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3824), CNST_TABLE_REF(((long) 118)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3824), CNST_TABLE_REF(((long) 119)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3824), CNST_TABLE_REF(((long) 97)));
		}

	}



/* &<@anonymous:1729> */
	obj_t BGl_z62zc3z04anonymousza31729ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3826, obj_t BgL_mez00_3827)
	{
		{	/* SawJvm/inline.scm 192 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3827), CNST_TABLE_REF(((long) 169)));
		}

	}



/* &<@anonymous:1726> */
	obj_t BGl_z62zc3z04anonymousza31726ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3828, obj_t BgL_mez00_3829, obj_t BgL_onzf3zf3_3830,
		obj_t BgL_labz00_3831)
	{
		{	/* SawJvm/inline.scm 184 */
			if (CBOOL(BGl_za2optimzd2jvmzd2fasteqza2z00zzengine_paramz00))
				{	/* SawJvm/inline.scm 186 */
					obj_t BgL_arg1727z00_3924;

					if (CBOOL(BgL_onzf3zf3_3830))
						{	/* SawJvm/inline.scm 186 */
							BgL_arg1727z00_3924 = CNST_TABLE_REF(((long) 123));
						}
					else
						{	/* SawJvm/inline.scm 186 */
							BgL_arg1727z00_3924 = CNST_TABLE_REF(((long) 124));
						}
					return
						BGl_branchz00zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_3829), BgL_arg1727z00_3924,
						BgL_labz00_3831);
				}
			else
				{	/* SawJvm/inline.scm 185 */
					return CNST_TABLE_REF(((long) 170));
		}}

	}



/* &<@anonymous:1712> */
	obj_t BGl_z62zc3z04anonymousza31712ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3832, obj_t BgL_mez00_3833, obj_t BgL_onzf3zf3_3834,
		obj_t BgL_labz00_3835)
	{
		{	/* SawJvm/inline.scm 181 */
			{	/* SawJvm/inline.scm 182 */
				obj_t BgL_arg1719z00_3925;

				if (CBOOL(BgL_onzf3zf3_3834))
					{	/* SawJvm/inline.scm 182 */
						BgL_arg1719z00_3925 = CNST_TABLE_REF(((long) 123));
					}
				else
					{	/* SawJvm/inline.scm 182 */
						BgL_arg1719z00_3925 = CNST_TABLE_REF(((long) 124));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3833), BgL_arg1719z00_3925,
					BgL_labz00_3835);
			}
		}

	}



/* &<@anonymous:1686> */
	obj_t BGl_z62zc3z04anonymousza31686ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3836, obj_t BgL_mez00_3837, obj_t BgL_argsz00_3838)
	{
		{	/* SawJvm/inline.scm 166 */
			{	/* SawJvm/inline.scm 167 */
				obj_t BgL_funz00_3926;

				{	/* SawJvm/inline.scm 167 */
					obj_t BgL_arg1708z00_3927;

					BgL_arg1708z00_3927 = CAR(((obj_t) BgL_argsz00_3838));
					BgL_funz00_3926 =
						BGl_skipzd2movzd2zzsaw_jvm_inlinez00(BgL_arg1708z00_3927);
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_funz00_3926,
						BGl_rtl_loadiz00zzsaw_defsz00))
					{	/* SawJvm/inline.scm 168 */
						if (CBOOL(
								(((BgL_atomz00_bglt) COBJECT(
											(((BgL_rtl_loadiz00_bglt) COBJECT(
														((BgL_rtl_loadiz00_bglt) BgL_funz00_3926)))->
												BgL_constantz00)))->BgL_valuez00)))
							{	/* SawJvm/inline.scm 169 */
								return
									BGl_codez12z12zzsaw_jvm_outz00(
									((BgL_jvmz00_bglt) BgL_mez00_3837),
									CNST_TABLE_REF(((long) 171)));
							}
						else
							{	/* SawJvm/inline.scm 169 */
								return
									BGl_codez12z12zzsaw_jvm_outz00(
									((BgL_jvmz00_bglt) BgL_mez00_3837),
									CNST_TABLE_REF(((long) 172)));
					}}
				else
					{	/* SawJvm/inline.scm 172 */
						obj_t BgL_l1z00_3928;
						obj_t BgL_l2z00_3929;

						BgL_l1z00_3928 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_string2245z00zzsaw_jvm_inlinez00);
						BgL_l2z00_3929 =
							BGl_gensymz00zz__r4_symbols_6_4z00
							(BGl_string2245z00zzsaw_jvm_inlinez00);
						{	/* SawJvm/inline.scm 173 */
							obj_t BgL_arg1695z00_3930;

							BgL_arg1695z00_3930 = CAR(((obj_t) BgL_argsz00_3838));
							BGl_genzd2exprzd2zzsaw_jvm_codez00(
								((BgL_jvmz00_bglt) BgL_mez00_3837), BgL_arg1695z00_3930);
						}
						{	/* SawJvm/inline.scm 174 */
							obj_t BgL_arg1696z00_3931;

							{	/* SawJvm/inline.scm 174 */
								obj_t BgL_arg1697z00_3932;

								BgL_arg1697z00_3932 = MAKE_YOUNG_PAIR(BgL_l1z00_3928, BNIL);
								BgL_arg1696z00_3931 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 136)),
									BgL_arg1697z00_3932);
							}
							BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_3837), BgL_arg1696z00_3931);
						}
						BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_3837), CNST_TABLE_REF(((long) 171)));
						{	/* SawJvm/inline.scm 176 */
							obj_t BgL_arg1704z00_3933;

							{	/* SawJvm/inline.scm 176 */
								obj_t BgL_arg1707z00_3934;

								BgL_arg1707z00_3934 = MAKE_YOUNG_PAIR(BgL_l2z00_3929, BNIL);
								BgL_arg1704z00_3933 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 173)),
									BgL_arg1707z00_3934);
							}
							BGl_codez12z12zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_3837), BgL_arg1704z00_3933);
						}
						BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_3837), BgL_l1z00_3928);
						BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_3837), CNST_TABLE_REF(((long) 172)));
						return
							BGl_codez12z12zzsaw_jvm_outz00(
							((BgL_jvmz00_bglt) BgL_mez00_3837), BgL_l2z00_3929);
					}
			}
		}

	}



/* &<@anonymous:1673> */
	obj_t BGl_z62zc3z04anonymousza31673ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3839, obj_t BgL_mez00_3840, obj_t BgL_onzf3zf3_3841,
		obj_t BgL_labz00_3842)
	{
		{	/* SawJvm/inline.scm 162 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3840), CNST_TABLE_REF(((long) 172)));
			{	/* SawJvm/inline.scm 164 */
				obj_t BgL_arg1684z00_3935;

				if (CBOOL(BgL_onzf3zf3_3841))
					{	/* SawJvm/inline.scm 164 */
						BgL_arg1684z00_3935 = CNST_TABLE_REF(((long) 124));
					}
				else
					{	/* SawJvm/inline.scm 164 */
						BgL_arg1684z00_3935 = CNST_TABLE_REF(((long) 123));
					}
				return
					BGl_branchz00zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3840), BgL_arg1684z00_3935,
					BgL_labz00_3842);
			}
		}

	}



/* &<@anonymous:1670> */
	obj_t BGl_z62zc3z04anonymousza31670ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3843, obj_t BgL_mez00_3844)
	{
		{	/* SawJvm/inline.scm 159 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3844), CNST_TABLE_REF(((long) 174)));
		}

	}



/* &<@anonymous:1668> */
	obj_t BGl_z62zc3z04anonymousza31668ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3845, obj_t BgL_mez00_3846)
	{
		{	/* SawJvm/inline.scm 151 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3846), CNST_TABLE_REF(((long) 98)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1665> */
	obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3847, obj_t BgL_mez00_3848)
	{
		{	/* SawJvm/inline.scm 148 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3848), CNST_TABLE_REF(((long) 97)));
		}

	}



/* &<@anonymous:1663> */
	obj_t BGl_z62zc3z04anonymousza31663ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3849, obj_t BgL_mez00_3850)
	{
		{	/* SawJvm/inline.scm 145 */
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3850), CNST_TABLE_REF(((long) 175)));
		}

	}



/* &<@anonymous:1642> */
	obj_t BGl_z62zc3z04anonymousza31642ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3851, obj_t BgL_mez00_3852, obj_t BgL_argsz00_3853)
	{
		{	/* SawJvm/inline.scm 133 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 176)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 177)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 178)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 138 */
				obj_t BgL_arg1644z00_3936;

				BgL_arg1644z00_3936 = CAR(((obj_t) BgL_argsz00_3853));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3852), BgL_arg1644z00_3936);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 179)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 141 */
				obj_t BgL_arg1652z00_3937;

				{	/* SawJvm/inline.scm 141 */
					obj_t BgL_pairz00_3938;

					BgL_pairz00_3938 = CDR(((obj_t) BgL_argsz00_3853));
					BgL_arg1652z00_3937 = CAR(BgL_pairz00_3938);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3852), BgL_arg1652z00_3937);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 175)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3852), CNST_TABLE_REF(((long) 180)));
		}

	}



/* &<@anonymous:1632> */
	obj_t BGl_z62zc3z04anonymousza31632ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3854, obj_t BgL_mez00_3855, obj_t BgL_argsz00_3856)
	{
		{	/* SawJvm/inline.scm 118 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 176)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 177)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 178)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 123 */
				obj_t BgL_arg1634z00_3939;

				BgL_arg1634z00_3939 = CAR(((obj_t) BgL_argsz00_3856));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3855), BgL_arg1634z00_3939);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 179)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 126 */
				obj_t BgL_arg1639z00_3940;

				{	/* SawJvm/inline.scm 126 */
					obj_t BgL_pairz00_3941;

					BgL_pairz00_3941 = CDR(((obj_t) BgL_argsz00_3856));
					BgL_arg1639z00_3940 = CAR(BgL_pairz00_3941);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3855), BgL_arg1639z00_3940);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 181)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 129 */
				obj_t BgL_arg1640z00_3942;

				{	/* SawJvm/inline.scm 129 */
					obj_t BgL_pairz00_3943;

					{	/* SawJvm/inline.scm 129 */
						obj_t BgL_pairz00_3944;

						BgL_pairz00_3944 = CDR(((obj_t) BgL_argsz00_3856));
						BgL_pairz00_3943 = CDR(BgL_pairz00_3944);
					}
					BgL_arg1640z00_3942 = CAR(BgL_pairz00_3943);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3855), BgL_arg1640z00_3942);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 175)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3855), CNST_TABLE_REF(((long) 180)));
		}

	}



/* &<@anonymous:1614> */
	obj_t BGl_z62zc3z04anonymousza31614ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3857, obj_t BgL_mez00_3858, obj_t BgL_argsz00_3859)
	{
		{	/* SawJvm/inline.scm 103 */
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 176)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 177)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 178)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 108 */
				obj_t BgL_arg1624z00_3945;

				BgL_arg1624z00_3945 = CAR(((obj_t) BgL_argsz00_3859));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3858), BgL_arg1624z00_3945);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 179)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 111 */
				obj_t BgL_arg1626z00_3946;

				{	/* SawJvm/inline.scm 111 */
					obj_t BgL_pairz00_3947;

					BgL_pairz00_3947 = CDR(((obj_t) BgL_argsz00_3859));
					BgL_arg1626z00_3946 = CAR(BgL_pairz00_3947);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3858), BgL_arg1626z00_3946);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 181)));
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 177)));
			{	/* SawJvm/inline.scm 114 */
				obj_t BgL_arg1627z00_3948;

				{	/* SawJvm/inline.scm 114 */
					obj_t BgL_pairz00_3949;

					{	/* SawJvm/inline.scm 114 */
						obj_t BgL_pairz00_3950;

						BgL_pairz00_3950 = CDR(((obj_t) BgL_argsz00_3859));
						BgL_pairz00_3949 = CDR(BgL_pairz00_3950);
					}
					BgL_arg1627z00_3948 = CAR(BgL_pairz00_3949);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3858), BgL_arg1627z00_3948);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 175)));
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3858), CNST_TABLE_REF(((long) 180)));
		}

	}



/* &<@anonymous:1598> */
	obj_t BGl_z62zc3z04anonymousza31598ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3860, obj_t BgL_mez00_3861, obj_t BgL_argsz00_3862)
	{
		{	/* SawJvm/inline.scm 96 */
			{	/* SawJvm/inline.scm 97 */
				obj_t BgL_arg1599z00_3951;

				{	/* SawJvm/inline.scm 97 */
					obj_t BgL_arg1604z00_3952;

					{	/* SawJvm/inline.scm 97 */
						obj_t BgL_arg1605z00_3953;

						{	/* SawJvm/inline.scm 97 */
							obj_t BgL_arg1606z00_3954;

							BgL_arg1606z00_3954 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
							BgL_arg1605z00_3953 =
								BGl_declarezd2globalzd2zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_3861),
								((BgL_globalz00_bglt) BgL_arg1606z00_3954));
						}
						BgL_arg1604z00_3952 = MAKE_YOUNG_PAIR(BgL_arg1605z00_3953, BNIL);
					}
					BgL_arg1599z00_3951 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 168)), BgL_arg1604z00_3952);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3861), BgL_arg1599z00_3951);
			}
			{	/* SawJvm/inline.scm 98 */
				obj_t BgL_arg1611z00_3955;

				BgL_arg1611z00_3955 = CAR(((obj_t) BgL_argsz00_3862));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3861), BgL_arg1611z00_3955);
			}
			{	/* SawJvm/inline.scm 99 */
				obj_t BgL_arg1612z00_3956;

				{	/* SawJvm/inline.scm 99 */
					obj_t BgL_pairz00_3957;

					BgL_pairz00_3957 = CDR(((obj_t) BgL_argsz00_3862));
					BgL_arg1612z00_3956 = CAR(BgL_pairz00_3957);
				}
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3861), BgL_arg1612z00_3956);
			}
			BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3861), CNST_TABLE_REF(((long) 98)));
			return CNST_TABLE_REF(((long) 99));
		}

	}



/* &<@anonymous:1583> */
	obj_t BGl_z62zc3z04anonymousza31583ze3ze5zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3863, obj_t BgL_mez00_3864, obj_t BgL_argsz00_3865)
	{
		{	/* SawJvm/inline.scm 91 */
			{	/* SawJvm/inline.scm 92 */
				obj_t BgL_arg1584z00_3958;

				{	/* SawJvm/inline.scm 92 */
					obj_t BgL_arg1588z00_3959;

					{	/* SawJvm/inline.scm 92 */
						obj_t BgL_arg1589z00_3960;

						{	/* SawJvm/inline.scm 92 */
							obj_t BgL_arg1592z00_3961;

							BgL_arg1592z00_3961 = BGl_getzd2cnstzd2tablez00zzcnst_allocz00();
							BgL_arg1589z00_3960 =
								BGl_declarezd2globalzd2zzsaw_jvm_outz00(
								((BgL_jvmz00_bglt) BgL_mez00_3864),
								((BgL_globalz00_bglt) BgL_arg1592z00_3961));
						}
						BgL_arg1588z00_3959 = MAKE_YOUNG_PAIR(BgL_arg1589z00_3960, BNIL);
					}
					BgL_arg1584z00_3958 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 168)), BgL_arg1588z00_3959);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_3864), BgL_arg1584z00_3958);
			}
			{	/* SawJvm/inline.scm 93 */
				obj_t BgL_arg1593z00_3962;

				BgL_arg1593z00_3962 = CAR(((obj_t) BgL_argsz00_3865));
				BGl_genzd2exprzd2zzsaw_jvm_codez00(
					((BgL_jvmz00_bglt) BgL_mez00_3864), BgL_arg1593z00_3962);
			}
			return
				BGl_codez12z12zzsaw_jvm_outz00(
				((BgL_jvmz00_bglt) BgL_mez00_3864), CNST_TABLE_REF(((long) 97)));
		}

	}



/* check-jvm-inlines */
	BGL_EXPORTED_DEF obj_t BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 24 */
			{	/* SawJvm/inline.scm 25 */
				obj_t BgL_unresolvedz00_2860;

				{	/* SawJvm/inline.scm 25 */
					obj_t BgL_hook1578z00_2862;

					BgL_hook1578z00_2862 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
					{
						obj_t BgL_l1575z00_2864;
						obj_t BgL_h1576z00_2865;

						BgL_l1575z00_2864 = BNIL;
						BgL_h1576z00_2865 = BgL_hook1578z00_2862;
					BgL_zc3z04anonymousza31990ze3z87_2866:
						if (NULLP(BgL_l1575z00_2864))
							{	/* SawJvm/inline.scm 25 */
								BgL_unresolvedz00_2860 = CDR(BgL_hook1578z00_2862);
							}
						else
							{	/* SawJvm/inline.scm 25 */
								bool_t BgL_test2385z00_4938;

								if (CBOOL(BGl_findzd2globalzd2zzast_envz00(CAR(
												((obj_t) BgL_l1575z00_2864)), BNIL)))
									{	/* SawJvm/inline.scm 25 */
										BgL_test2385z00_4938 = ((bool_t) 0);
									}
								else
									{	/* SawJvm/inline.scm 25 */
										BgL_test2385z00_4938 = ((bool_t) 1);
									}
								if (BgL_test2385z00_4938)
									{	/* SawJvm/inline.scm 25 */
										obj_t BgL_nh1577z00_2873;

										{	/* SawJvm/inline.scm 25 */
											obj_t BgL_arg1997z00_2875;

											BgL_arg1997z00_2875 = CAR(((obj_t) BgL_l1575z00_2864));
											{	/* SawJvm/inline.scm 25 */
												obj_t BgL_res2143z00_3496;

												BgL_res2143z00_3496 =
													MAKE_YOUNG_PAIR(BgL_arg1997z00_2875, BNIL);
												BgL_nh1577z00_2873 = BgL_res2143z00_3496;
											}
										}
										SET_CDR(BgL_h1576z00_2865, BgL_nh1577z00_2873);
										{	/* SawJvm/inline.scm 25 */
											obj_t BgL_arg1996z00_2874;

											BgL_arg1996z00_2874 = CDR(((obj_t) BgL_l1575z00_2864));
											{
												obj_t BgL_h1576z00_4951;
												obj_t BgL_l1575z00_4950;

												BgL_l1575z00_4950 = BgL_arg1996z00_2874;
												BgL_h1576z00_4951 = BgL_nh1577z00_2873;
												BgL_h1576z00_2865 = BgL_h1576z00_4951;
												BgL_l1575z00_2864 = BgL_l1575z00_4950;
												goto BgL_zc3z04anonymousza31990ze3z87_2866;
											}
										}
									}
								else
									{	/* SawJvm/inline.scm 25 */
										obj_t BgL_arg1998z00_2876;

										BgL_arg1998z00_2876 = CDR(((obj_t) BgL_l1575z00_2864));
										{
											obj_t BgL_l1575z00_4954;

											BgL_l1575z00_4954 = BgL_arg1998z00_2876;
											BgL_l1575z00_2864 = BgL_l1575z00_4954;
											goto BgL_zc3z04anonymousza31990ze3z87_2866;
										}
									}
							}
					}
				}
				if (PAIRP(BgL_unresolvedz00_2860))
					{	/* SawJvm/inline.scm 27 */
						return
							BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 182)),
							BGl_string2246z00zzsaw_jvm_inlinez00, BgL_unresolvedz00_2860);
					}
				else
					{	/* SawJvm/inline.scm 27 */
						return BFALSE;
					}
			}
		}

	}



/* &check-jvm-inlines */
	obj_t BGl_z62checkzd2jvmzd2inlinesz62zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3866)
	{
		{	/* SawJvm/inline.scm 24 */
			return BGl_checkzd2jvmzd2inlinesz00zzsaw_jvm_inlinez00();
		}

	}



/* inline-call? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt BgL_mez00_3,
		BgL_globalz00_bglt BgL_varz00_4)
	{
		{	/* SawJvm/inline.scm 35 */
			if (CBOOL((((BgL_jvmz00_bglt) COBJECT(BgL_mez00_3))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 37 */
					obj_t BgL_funz00_2882;

					BgL_funz00_2882 =
						BGl_getpropz00zz__r4_symbols_6_4z00(
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_4)))->BgL_idz00),
						CNST_TABLE_REF(((long) 8)));
					if (CBOOL(BgL_funz00_2882))
						{	/* SawJvm/inline.scm 38 */
							return
								PROCEDURE_ENTRY(BgL_funz00_2882) (BgL_funz00_2882,
								((obj_t) BgL_mez00_3), BEOA);
						}
					else
						{	/* SawJvm/inline.scm 38 */
							return CNST_TABLE_REF(((long) 170));
				}}
			else
				{	/* SawJvm/inline.scm 36 */
					return BFALSE;
				}
		}

	}



/* &inline-call? */
	obj_t BGl_z62inlinezd2callzf3z43zzsaw_jvm_inlinez00(obj_t BgL_envz00_3867,
		obj_t BgL_mez00_3868, obj_t BgL_varz00_3869)
	{
		{	/* SawJvm/inline.scm 35 */
			return
				BGl_inlinezd2callzf3z21zzsaw_jvm_inlinez00(
				((BgL_jvmz00_bglt) BgL_mez00_3868),
				((BgL_globalz00_bglt) BgL_varz00_3869));
		}

	}



/* inline-call-with-args? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt
		BgL_mez00_5, BgL_globalz00_bglt BgL_varz00_6, obj_t BgL_argsz00_7)
	{
		{	/* SawJvm/inline.scm 52 */
			if (CBOOL((((BgL_jvmz00_bglt) COBJECT(BgL_mez00_5))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 54 */
					obj_t BgL_funz00_2887;

					BgL_funz00_2887 =
						BGl_getpropz00zz__r4_symbols_6_4z00(
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_6)))->BgL_idz00),
						CNST_TABLE_REF(((long) 2)));
					if (CBOOL(BgL_funz00_2887))
						{	/* SawJvm/inline.scm 55 */
							return
								PROCEDURE_ENTRY(BgL_funz00_2887) (BgL_funz00_2887,
								((obj_t) BgL_mez00_5), BgL_argsz00_7, BEOA);
						}
					else
						{	/* SawJvm/inline.scm 55 */
							return CNST_TABLE_REF(((long) 170));
				}}
			else
				{	/* SawJvm/inline.scm 53 */
					return BFALSE;
				}
		}

	}



/* &inline-call-with-args? */
	obj_t BGl_z62inlinezd2callzd2withzd2argszf3z43zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3870, obj_t BgL_mez00_3871, obj_t BgL_varz00_3872,
		obj_t BgL_argsz00_3873)
	{
		{	/* SawJvm/inline.scm 52 */
			return
				BGl_inlinezd2callzd2withzd2argszf3z21zzsaw_jvm_inlinez00(
				((BgL_jvmz00_bglt) BgL_mez00_3871),
				((BgL_globalz00_bglt) BgL_varz00_3872), BgL_argsz00_3873);
		}

	}



/* inline-predicate? */
	BGL_EXPORTED_DEF obj_t
		BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(BgL_jvmz00_bglt BgL_mez00_8,
		BgL_globalz00_bglt BgL_varz00_9, obj_t BgL_onzf3zf3_10, obj_t BgL_labz00_11)
	{
		{	/* SawJvm/inline.scm 66 */
			if (CBOOL((((BgL_jvmz00_bglt) COBJECT(BgL_mez00_8))->BgL_inlinez00)))
				{	/* SawJvm/inline.scm 68 */
					obj_t BgL_funz00_3510;

					BgL_funz00_3510 =
						BGl_getpropz00zz__r4_symbols_6_4z00(
						(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt) BgL_varz00_9)))->BgL_idz00),
						CNST_TABLE_REF(((long) 13)));
					if (CBOOL(BgL_funz00_3510))
						{	/* SawJvm/inline.scm 69 */
							return
								PROCEDURE_ENTRY(BgL_funz00_3510) (BgL_funz00_3510,
								((obj_t) BgL_mez00_8), BgL_onzf3zf3_10, BgL_labz00_11, BEOA);
						}
					else
						{	/* SawJvm/inline.scm 69 */
							return CNST_TABLE_REF(((long) 170));
				}}
			else
				{	/* SawJvm/inline.scm 67 */
					return BFALSE;
				}
		}

	}



/* &inline-predicate? */
	obj_t BGl_z62inlinezd2predicatezf3z43zzsaw_jvm_inlinez00(obj_t
		BgL_envz00_3874, obj_t BgL_mez00_3875, obj_t BgL_varz00_3876,
		obj_t BgL_onzf3zf3_3877, obj_t BgL_labz00_3878)
	{
		{	/* SawJvm/inline.scm 66 */
			return
				BGl_inlinezd2predicatezf3z21zzsaw_jvm_inlinez00(
				((BgL_jvmz00_bglt) BgL_mez00_3875),
				((BgL_globalz00_bglt) BgL_varz00_3876), BgL_onzf3zf3_3877,
				BgL_labz00_3878);
		}

	}



/* skip-mov */
	obj_t BGl_skipzd2movzd2zzsaw_jvm_inlinez00(obj_t BgL_argz00_12)
	{
		{	/* SawJvm/inline.scm 80 */
		BGl_skipzd2movzd2zzsaw_jvm_inlinez00:
			if (BGl_isazf3zf3zz__objectz00(BgL_argz00_12,
					BGl_rtl_insz00zzsaw_defsz00))
				{	/* SawJvm/inline.scm 82 */
					BgL_rtl_funz00_bglt BgL_funz00_2893;

					BgL_funz00_2893 =
						(((BgL_rtl_insz00_bglt) COBJECT(
								((BgL_rtl_insz00_bglt) BgL_argz00_12)))->BgL_funz00);
					{	/* SawJvm/inline.scm 83 */
						bool_t BgL_test2395z00_5021;

						{	/* SawJvm/inline.scm 83 */
							bool_t BgL_res2146z00_3517;

							BgL_res2146z00_3517 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_funz00_2893), BGl_rtl_movz00zzsaw_defsz00);
							BgL_test2395z00_5021 = BgL_res2146z00_3517;
						}
						if (BgL_test2395z00_5021)
							{	/* SawJvm/inline.scm 84 */
								obj_t BgL_arg2008z00_2895;

								{	/* SawJvm/inline.scm 84 */
									obj_t BgL_pairz00_3519;

									BgL_pairz00_3519 =
										(((BgL_rtl_insz00_bglt) COBJECT(
												((BgL_rtl_insz00_bglt) BgL_argz00_12)))->BgL_argsz00);
									BgL_arg2008z00_2895 = CAR(BgL_pairz00_3519);
								}
								{
									obj_t BgL_argz00_5027;

									BgL_argz00_5027 = BgL_arg2008z00_2895;
									BgL_argz00_12 = BgL_argz00_5027;
									goto BGl_skipzd2movzd2zzsaw_jvm_inlinez00;
								}
							}
						else
							{	/* SawJvm/inline.scm 83 */
								return ((obj_t) BgL_funz00_2893);
							}
					}
				}
			else
				{	/* SawJvm/inline.scm 81 */
					return BgL_argz00_12;
				}
		}

	}



/* compute-boolean */
	obj_t BGl_computezd2booleanzd2zzsaw_jvm_inlinez00(obj_t BgL_mez00_13,
		obj_t BgL_copz00_14)
	{
		{	/* SawJvm/inline.scm 265 */
			{	/* SawJvm/inline.scm 267 */
				obj_t BgL_l1z00_2897;
				obj_t BgL_l2z00_2898;

				BgL_l1z00_2897 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string2245z00zzsaw_jvm_inlinez00);
				BgL_l2z00_2898 =
					BGl_gensymz00zz__r4_symbols_6_4z00
					(BGl_string2245z00zzsaw_jvm_inlinez00);
				{	/* SawJvm/inline.scm 268 */
					obj_t BgL_arg2011z00_2899;

					{	/* SawJvm/inline.scm 268 */
						obj_t BgL_arg2012z00_2900;

						BgL_arg2012z00_2900 = MAKE_YOUNG_PAIR(BgL_l1z00_2897, BNIL);
						BgL_arg2011z00_2899 =
							MAKE_YOUNG_PAIR(BgL_copz00_14, BgL_arg2012z00_2900);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_13), BgL_arg2011z00_2899);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_13), CNST_TABLE_REF(((long) 183)));
				{	/* SawJvm/inline.scm 270 */
					obj_t BgL_arg2013z00_2901;

					{	/* SawJvm/inline.scm 270 */
						obj_t BgL_arg2014z00_2902;

						BgL_arg2014z00_2902 = MAKE_YOUNG_PAIR(BgL_l2z00_2898, BNIL);
						BgL_arg2013z00_2901 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 173)),
							BgL_arg2014z00_2902);
					}
					BGl_codez12z12zzsaw_jvm_outz00(
						((BgL_jvmz00_bglt) BgL_mez00_13), BgL_arg2013z00_2901);
				}
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_13), BgL_l1z00_2897);
				BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_13), CNST_TABLE_REF(((long) 144)));
				return
					BGl_codez12z12zzsaw_jvm_outz00(
					((BgL_jvmz00_bglt) BgL_mez00_13), BgL_l2z00_2898);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_inlinez00()
	{
		{	/* SawJvm/inline.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzcnst_allocz00(((long) 192700095),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_defsz00(((long) 79516843),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_outz00(((long) 441640642),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			BGl_modulezd2initializa7ationz75zzsaw_jvm_codez00(((long) 44766332),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2247z00zzsaw_jvm_inlinez00));
		}

	}

#ifdef __cplusplus
}
#endif
