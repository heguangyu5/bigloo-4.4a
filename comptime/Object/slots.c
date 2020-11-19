/*===========================================================================*/
/*   (Object/slots.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/slots.scm) */
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

	typedef struct BgL_tclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		struct BgL_globalz00_bgl *BgL_holderz00;
		obj_t BgL_wideningz00;
		long BgL_depthz00;
		bool_t BgL_finalzf3zf3;
		obj_t BgL_constructorz00;
		obj_t BgL_virtualzd2slotszd2numberz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_widezd2typezd2;
		obj_t BgL_subclassesz00;
	}                *BgL_tclassz00_bglt;

	typedef struct BgL_jclassz00_bgl
	{
		obj_t BgL_itszd2superzd2;
		obj_t BgL_slotsz00;
		obj_t BgL_packagez00;
	}                *BgL_jclassz00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

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

	typedef struct BgL_slotz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_srcz00;
		obj_t BgL_classzd2ownerzd2;
		long BgL_indexz00;
		obj_t BgL_typez00;
		bool_t BgL_readzd2onlyzf3z21;
		obj_t BgL_defaultzd2valuezd2;
		obj_t BgL_virtualzd2numzd2;
		bool_t BgL_virtualzd2overridezd2;
		obj_t BgL_getterz00;
		obj_t BgL_setterz00;
		obj_t BgL_userzd2infozd2;
	}              *BgL_slotz00_bglt;


	static BgL_slotz00_bglt BGl_z62lambda1769z62zzobject_slotsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(BgL_typez00_bglt, obj_t);
	static BgL_slotz00_bglt BGl_z62lambda1772z62zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	extern obj_t BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00;
	static obj_t BGl_z62lambda1783z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1784z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1799z62zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31776ze3ze5zzobject_slotsz00(obj_t,
		obj_t);
	static obj_t BGl_z62slotzd2classzd2ownerz62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_slotzd2inlinezd2markz00zzobject_slotsz00 = BUNSPEC;
	static obj_t BGl_z62slotzd2namezb0zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_IMPORT obj_t BGl_2zb2zb2zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2virtualzd2numz00zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_objectzd2initzd2zzobject_slotsz00();
	static obj_t BGl_z62slotzd2srczb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzobject_slotsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31868ze3ze5zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2classzd2slotsz62zzobject_slotsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62slotzd2virtualzf3z43zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_slotzd2namezd2zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_slotz00zzobject_slotsz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2setterzd2setz12z12zzobject_slotsz00(BgL_slotz00_bglt, obj_t);
	static obj_t BGl_z62slotzd2typezb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_slotzd2memberzf3ze70zc6zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_slotsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2defaultzd2inlinezd2valuezd2zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_slotzd2typezd2zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t
		BGl_z62getzd2localzd2virtualzd2slotszd2numberz62zzobject_slotsz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	BGL_EXPORTED_DECL obj_t BGl_slotzd2srczd2zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2getterzd2setz12z12zzobject_slotsz00(BgL_slotz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_slotzf3zf3zzobject_slotsz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static BgL_slotz00_bglt BGl_z62slotzd2nilzb0zzobject_slotsz00(obj_t);
	static obj_t BGl_z62makezd2classzd2makezd2formalszb0zzobject_slotsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_typez00_bglt, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_slotsz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2virtualzd2numzd2setz12zc0zzobject_slotsz00(BgL_slotz00_bglt,
		obj_t);
	static obj_t BGl_z62shapezd2slot1167zb0zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2userzd2infoz00zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62slotzd2idzb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62slotzd2readzd2onlyzf3z91zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62slotzd2inlinezd2defaultzf3z91zzobject_slotsz00(obj_t,
		obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62slotzd2virtualzd2numzd2setz12za2zzobject_slotsz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2setterzd2zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62slotzd2defaultzd2valuez62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1800z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopze70ze7zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2inlinezd2defaultzf3zf3zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62lambda1810z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1811z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_typez00_bglt, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_slotz00_bglt BGl_slotzd2nilzd2zzobject_slotsz00();
	static obj_t BGl_z62lambda1823z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1824z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzobject_slotsz00(obj_t);
	static obj_t BGl_z62lambda1828z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1829z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2classzd2ownerz00zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62lambda1833z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1834z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2getterzd2zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62lambda1841z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1842z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1849z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1850z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1857z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1858z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	static obj_t BGl_z62makezd2javazd2classzd2slotszb0zzobject_slotsz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_typez00_bglt, obj_t, obj_t,
		int, obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1866z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_slotsz00 = BUNSPEC;
	static obj_t BGl_z62lambda1867z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL long BGl_slotzd2indexzd2zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62lambda1874z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1875z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_z62slotzd2setterzb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1882z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1883z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1889z62zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62slotzd2indexzb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzobject_slotsz00();
	static obj_t BGl_z62lambda1890z62zzobject_slotsz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31891ze3ze5zzobject_slotsz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_slotsz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62slotzd2defaultzf3z43zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31876ze3ze5zzobject_slotsz00(obj_t);
	static obj_t BGl_z62slotzd2getterzb0zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_findzd2slotzd2typez00zzobject_slotsz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2virtualzd2overridez00zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t BGl_z62slotzd2defaultzd2inlinezd2valuezb0zzobject_slotsz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_slotzd2defaultzd2valuez00zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_slotzd2idzd2zzobject_slotsz00(BgL_slotz00_bglt);
	static obj_t
		BGl_z62makezd2classzd2makezd2typedzd2formalsz62zzobject_slotsz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_slotz00_bglt BGl_z62makezd2slotzb0zzobject_slotsz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62slotzd2virtualzd2overridez62zzobject_slotsz00(obj_t,
		obj_t);
	static obj_t BGl_z62slotzd2virtualzd2numz62zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_slotz00_bglt BGl_makezd2slotzd2zzobject_slotsz00(obj_t,
		obj_t, obj_t, obj_t, long, obj_t, bool_t, obj_t, obj_t, bool_t, obj_t,
		obj_t, obj_t);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	static obj_t BGl_z62slotzd2setterzd2setz12z70zzobject_slotsz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_z62slotzd2userzd2infoz62zzobject_slotsz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_slotsz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_slotsz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_slotsz00();
	static obj_t BGl_z62slotzf3z91zzobject_slotsz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62slotzd2getterzd2setz12z70zzobject_slotsz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_slotzd2readzd2onlyzf3zf3zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzobject_slotsz00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2downcasezd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_makezd2attributezd2slotze70ze7zzobject_slotsz00(BgL_typez00_bglt, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, bool_t, long);
	static obj_t __cnst[31];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2030z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2059za7,
		BGl_z62zc3z04anonymousza31868ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2031z00zzobject_slotsz00,
		BgL_bgl_za762lambda1867za7622060z00, BGl_z62lambda1867z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2032z00zzobject_slotsz00,
		BgL_bgl_za762lambda1866za7622061z00, BGl_z62lambda1866z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2033z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2062za7,
		BGl_z62zc3z04anonymousza31876ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2034z00zzobject_slotsz00,
		BgL_bgl_za762lambda1875za7622063z00, BGl_z62lambda1875z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2035z00zzobject_slotsz00,
		BgL_bgl_za762lambda1874za7622064z00, BGl_z62lambda1874z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2036z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2065za7,
		BGl_z62zc3z04anonymousza31884ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2037z00zzobject_slotsz00,
		BgL_bgl_za762lambda1883za7622066z00, BGl_z62lambda1883z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2038z00zzobject_slotsz00,
		BgL_bgl_za762lambda1882za7622067z00, BGl_z62lambda1882z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2039z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2068za7,
		BGl_z62zc3z04anonymousza31891ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2defaultzd2valuezd2envzd2zzobject_slotsz00,
		BgL_bgl_za762slotza7d2defaul2069z00,
		BGl_z62slotzd2defaultzd2valuez62zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2getterzd2setz12zd2envzc0zzobject_slotsz00,
		BgL_bgl_za762slotza7d2getter2070z00,
		BGl_z62slotzd2getterzd2setz12z70zzobject_slotsz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2040z00zzobject_slotsz00,
		BgL_bgl_za762lambda1890za7622071z00, BGl_z62lambda1890z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2041z00zzobject_slotsz00,
		BgL_bgl_za762lambda1889za7622072z00, BGl_z62lambda1889z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2042z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2073za7,
		BGl_z62zc3z04anonymousza31776ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2043z00zzobject_slotsz00,
		BgL_bgl_za762lambda1772za7622074z00, BGl_z62lambda1772z62zzobject_slotsz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2044z00zzobject_slotsz00,
		BgL_bgl_za762lambda1769za7622075z00, BGl_z62lambda1769z62zzobject_slotsz00,
		0L, BUNSPEC, 13);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2046z00zzobject_slotsz00,
		BgL_bgl_za762shapeza7d2slot12076z00,
		BGl_z62shapezd2slot1167zb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2slotzd2envz00zzobject_slotsz00,
		BgL_bgl_za762makeza7d2slotza7b2077za7,
		BGl_z62makezd2slotzb0zzobject_slotsz00, 0L, BUNSPEC, 13);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2localzd2virtualzd2slotszd2numberzd2envzd2zzobject_slotsz00,
		BgL_bgl_za762getza7d2localza7d2078za7,
		BGl_z62getzd2localzd2virtualzd2slotszd2numberz62zzobject_slotsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2javazd2classzd2slotszd2envz00zzobject_slotsz00,
		BgL_bgl_za762makeza7d2javaza7d2079za7,
		BGl_z62makezd2javazd2classzd2slotszb0zzobject_slotsz00, 0L, BUNSPEC, 4);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2nilzd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2nilza7b02080za7,
		BGl_z62slotzd2nilzb0zzobject_slotsz00, 0L, BUNSPEC, 0);
	extern obj_t BGl_shapezd2envzd2zztools_shapez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2srczd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2srcza7b02081za7,
		BGl_z62slotzd2srczb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2slotszd2envzd2zzobject_slotsz00,
		BgL_bgl_za762makeza7d2classza72082za7,
		BGl_z62makezd2classzd2slotsz62zzobject_slotsz00, 0L, BUNSPEC, 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2setterzd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2setter2083z00,
		BGl_z62slotzd2setterzb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2virtualzd2overridezd2envzd2zzobject_slotsz00,
		BgL_bgl_za762slotza7d2virtua2084z00,
		BGl_z62slotzd2virtualzd2overridez62zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2defaultzd2inlinezd2valuezd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2defaul2085z00,
		BGl_z62slotzd2defaultzd2inlinezd2valuezb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2userzd2infozd2envzd2zzobject_slotsz00,
		BgL_bgl_za762slotza7d2userza7d2086za7,
		BGl_z62slotzd2userzd2infoz62zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2makezd2typedzd2formalszd2envzd2zzobject_slotsz00,
		BgL_bgl_za762makeza7d2classza72087za7,
		BGl_z62makezd2classzd2makezd2typedzd2formalsz62zzobject_slotsz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2classzd2makezd2formalszd2envz00zzobject_slotsz00,
		BgL_bgl_za762makeza7d2classza72088za7,
		BGl_z62makezd2classzd2makezd2formalszb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2001z00zzobject_slotsz00,
		BgL_bgl_string2001za700za7za7o2089za7, "Can't find type definition", 26);
	      DEFINE_STRING(BGl_string2002z00zzobject_slotsz00,
		BgL_bgl_string2002za700za7za7o2090za7,
		"slot already defined in super class", 35);
	      DEFINE_STRING(BGl_string2003z00zzobject_slotsz00,
		BgL_bgl_string2003za700za7za7o2091za7, "Illegal slot", 12);
	      DEFINE_STRING(BGl_string2004z00zzobject_slotsz00,
		BgL_bgl_string2004za700za7za7o2092za7, "Illegal duplicated virtual slot",
		31);
	      DEFINE_STRING(BGl_string2005z00zzobject_slotsz00,
		BgL_bgl_string2005za700za7za7o2093za7, "Overriden \"~a\" virtual slot", 27);
	      DEFINE_STRING(BGl_string2006z00zzobject_slotsz00,
		BgL_bgl_string2006za700za7za7o2094za7,
		"Illegal virtual slot (missing getter)", 37);
	      DEFINE_STRING(BGl_string2007z00zzobject_slotsz00,
		BgL_bgl_string2007za700za7za7o2095za7, "Illegal virtual slot (read-only)",
		32);
	      DEFINE_STRING(BGl_string2008z00zzobject_slotsz00,
		BgL_bgl_string2008za700za7za7o2096za7,
		"Illegal virtual slot (missing setter)", 37);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2indexzd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2indexza72097za7,
		BGl_z62slotzd2indexzb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2045z00zzobject_slotsz00,
		BgL_bgl_string2045za700za7za7o2098za7, "", 0);
	      DEFINE_STRING(BGl_string2047z00zzobject_slotsz00,
		BgL_bgl_string2047za700za7za7o2099za7, "shape", 5);
	      DEFINE_STRING(BGl_string2048z00zzobject_slotsz00,
		BgL_bgl_string2048za700za7za7o2100za7, ")", 1);
	      DEFINE_STRING(BGl_string2049z00zzobject_slotsz00,
		BgL_bgl_string2049za700za7za7o2101za7, " type: ", 7);
	      DEFINE_STRING(BGl_string2050z00zzobject_slotsz00,
		BgL_bgl_string2050za700za7za7o2102za7, " owner: ", 8);
	      DEFINE_STRING(BGl_string2051z00zzobject_slotsz00,
		BgL_bgl_string2051za700za7za7o2103za7, " (", 2);
	      DEFINE_STRING(BGl_string2052z00zzobject_slotsz00,
		BgL_bgl_string2052za700za7za7o2104za7, "(", 1);
	      DEFINE_STRING(BGl_string2053z00zzobject_slotsz00,
		BgL_bgl_string2053za700za7za7o2105za7, "object_slots", 12);
	      DEFINE_STRING(BGl_string2054z00zzobject_slotsz00,
		BgL_bgl_string2054za700za7za7o2106za7,
		"_ object_slots slot user-info setter getter virtual-override virtual-num default-value bool read-only? type long index class-owner obj src bstring name symbol static final - foreign read-only inline-default default info id set get ",
		231);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2getterzd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2getter2107z00,
		BGl_z62slotzd2getterzb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2virtualzf3zd2envzf3zzobject_slotsz00,
		BgL_bgl_za762slotza7d2virtua2108z00,
		BGl_z62slotzd2virtualzf3z43zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2namezd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2nameza7b2109za7,
		BGl_z62slotzd2namezb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2setterzd2setz12zd2envzc0zzobject_slotsz00,
		BgL_bgl_za762slotza7d2setter2110z00,
		BGl_z62slotzd2setterzd2setz12z70zzobject_slotsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2virtualzd2numzd2setz12zd2envz12zzobject_slotsz00,
		BgL_bgl_za762slotza7d2virtua2111z00,
		BGl_z62slotzd2virtualzd2numzd2setz12za2zzobject_slotsz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2classzd2ownerzd2envzd2zzobject_slotsz00,
		BgL_bgl_za762slotza7d2classza72112za7,
		BGl_z62slotzd2classzd2ownerz62zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2typezd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2typeza7b2113za7,
		BGl_z62slotzd2typezb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2virtualzd2numzd2envzd2zzobject_slotsz00,
		BgL_bgl_za762slotza7d2virtua2114z00,
		BGl_z62slotzd2virtualzd2numz62zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzf3zd2envz21zzobject_slotsz00,
		BgL_bgl_za762slotza7f3za791za7za7o2115za7,
		BGl_z62slotzf3z91zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2inlinezd2defaultzf3zd2envz21zzobject_slotsz00,
		BgL_bgl_za762slotza7d2inline2116z00,
		BGl_z62slotzd2inlinezd2defaultzf3z91zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2idzd2envz00zzobject_slotsz00,
		BgL_bgl_za762slotza7d2idza7b0za72117z00,
		BGl_z62slotzd2idzb0zzobject_slotsz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_slotzd2readzd2onlyzf3zd2envz21zzobject_slotsz00,
		BgL_bgl_za762slotza7d2readza7d2118za7,
		BGl_z62slotzd2readzd2onlyzf3z91zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zzobject_slotsz00,
		BgL_bgl_za762lambda1784za7622119z00, BGl_z62lambda1784z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_slotzd2defaultzf3zd2envzf3zzobject_slotsz00,
		BgL_bgl_za762slotza7d2defaul2120z00,
		BGl_z62slotzd2defaultzf3z43zzobject_slotsz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zzobject_slotsz00,
		BgL_bgl_za762lambda1783za7622121z00, BGl_z62lambda1783z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zzobject_slotsz00,
		BgL_bgl_za762lambda1800za7622122z00, BGl_z62lambda1800z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzobject_slotsz00,
		BgL_bgl_za762lambda1799za7622123z00, BGl_z62lambda1799z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zzobject_slotsz00,
		BgL_bgl_za762lambda1811za7622124z00, BGl_z62lambda1811z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zzobject_slotsz00,
		BgL_bgl_za762lambda1810za7622125z00, BGl_z62lambda1810z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zzobject_slotsz00,
		BgL_bgl_za762lambda1824za7622126z00, BGl_z62lambda1824z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zzobject_slotsz00,
		BgL_bgl_za762lambda1823za7622127z00, BGl_z62lambda1823z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zzobject_slotsz00,
		BgL_bgl_za762lambda1829za7622128z00, BGl_z62lambda1829z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2018z00zzobject_slotsz00,
		BgL_bgl_za762lambda1828za7622129z00, BGl_z62lambda1828z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2019z00zzobject_slotsz00,
		BgL_bgl_za762lambda1834za7622130z00, BGl_z62lambda1834z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2020z00zzobject_slotsz00,
		BgL_bgl_za762lambda1833za7622131z00, BGl_z62lambda1833z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2021z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2132za7,
		BGl_z62zc3z04anonymousza31843ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2022z00zzobject_slotsz00,
		BgL_bgl_za762lambda1842za7622133z00, BGl_z62lambda1842z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2023z00zzobject_slotsz00,
		BgL_bgl_za762lambda1841za7622134z00, BGl_z62lambda1841z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2024z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2135za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2025z00zzobject_slotsz00,
		BgL_bgl_za762lambda1850za7622136z00, BGl_z62lambda1850z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2026z00zzobject_slotsz00,
		BgL_bgl_za762lambda1849za7622137z00, BGl_z62lambda1849z62zzobject_slotsz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2027z00zzobject_slotsz00,
		BgL_bgl_za762za7c3za704anonymo2138za7,
		BGl_z62zc3z04anonymousza31859ze3ze5zzobject_slotsz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2028z00zzobject_slotsz00,
		BgL_bgl_za762lambda1858za7622139z00, BGl_z62lambda1858z62zzobject_slotsz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2029z00zzobject_slotsz00,
		BgL_bgl_za762lambda1857za7622140z00, BGl_z62lambda1857z62zzobject_slotsz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_slotzd2inlinezd2markz00zzobject_slotsz00));
		     ADD_ROOT((void *) (&BGl_slotz00zzobject_slotsz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzobject_slotsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long
		BgL_checksumz00_2088, char *BgL_fromz00_2089)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_slotsz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_slotsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_slotsz00();
					BGl_libraryzd2moduleszd2initz00zzobject_slotsz00();
					BGl_cnstzd2initzd2zzobject_slotsz00();
					BGl_importedzd2moduleszd2initz00zzobject_slotsz00();
					BGl_objectzd2initzd2zzobject_slotsz00();
					BGl_methodzd2initzd2zzobject_slotsz00();
					return BGl_toplevelzd2initzd2zzobject_slotsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"object_slots");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_slots");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			{	/* Object/slots.scm 15 */
				obj_t BgL_cportz00_2006;

				{	/* Object/slots.scm 15 */
					obj_t BgL_stringz00_2014;

					BgL_stringz00_2014 = BGl_string2054z00zzobject_slotsz00;
					{	/* Object/slots.scm 15 */
						obj_t BgL_startz00_2015;

						BgL_startz00_2015 = BINT(((long) 0));
						{	/* Object/slots.scm 15 */
							obj_t BgL_endz00_2016;

							BgL_endz00_2016 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2014)));
							{	/* Object/slots.scm 15 */

								BgL_cportz00_2006 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2014, BgL_startz00_2015, BgL_endz00_2016);
				}}}}
				{
					long BgL_iz00_2007;

					BgL_iz00_2007 = ((long) 30);
				BgL_loopz00_2008:
					if ((BgL_iz00_2007 == ((long) -1)))
						{	/* Object/slots.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/slots.scm 15 */
							{	/* Object/slots.scm 15 */
								obj_t BgL_arg2056z00_2010;

								{	/* Object/slots.scm 15 */

									{	/* Object/slots.scm 15 */
										obj_t BgL_locationz00_2012;

										BgL_locationz00_2012 = BBOOL(((bool_t) 0));
										{	/* Object/slots.scm 15 */

											BgL_arg2056z00_2010 =
												BGl_readz00zz__readerz00(BgL_cportz00_2006,
												BgL_locationz00_2012);
										}
									}
								}
								{	/* Object/slots.scm 15 */
									int BgL_tmpz00_2122;

									BgL_tmpz00_2122 = (int) (BgL_iz00_2007);
									CNST_TABLE_SET(BgL_tmpz00_2122, BgL_arg2056z00_2010);
							}}
							{	/* Object/slots.scm 15 */
								int BgL_auxz00_2013;

								BgL_auxz00_2013 = (int) ((BgL_iz00_2007 - ((long) 1)));
								{
									long BgL_iz00_2127;

									BgL_iz00_2127 = (long) (BgL_auxz00_2013);
									BgL_iz00_2007 = BgL_iz00_2127;
									goto BgL_loopz00_2008;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			BGl_slotzd2inlinezd2markz00zzobject_slotsz00 =
				MAKE_YOUNG_PAIR(BINT(((long) 3)), BINT(((long) 4)));
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzobject_slotsz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_781;

				BgL_headz00_781 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_782;
					obj_t BgL_tailz00_783;

					BgL_prevz00_782 = BgL_headz00_781;
					BgL_tailz00_783 = BgL_l1z00_1;
				BgL_loopz00_784:
					if (PAIRP(BgL_tailz00_783))
						{
							obj_t BgL_newzd2prevzd2_786;

							BgL_newzd2prevzd2_786 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_783), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_782, BgL_newzd2prevzd2_786);
							{
								obj_t BgL_tailz00_2140;
								obj_t BgL_prevz00_2139;

								BgL_prevz00_2139 = BgL_newzd2prevzd2_786;
								BgL_tailz00_2140 = CDR(BgL_tailz00_783);
								BgL_tailz00_783 = BgL_tailz00_2140;
								BgL_prevz00_782 = BgL_prevz00_2139;
								goto BgL_loopz00_784;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_781);
				}
			}
		}

	}



/* make-slot */
	BGL_EXPORTED_DEF BgL_slotz00_bglt BGl_makezd2slotzd2zzobject_slotsz00(obj_t
		BgL_id1080z00_3, obj_t BgL_name1081z00_4, obj_t BgL_src1082z00_5,
		obj_t BgL_classzd2owner1083zd2_6, long BgL_index1084z00_7,
		obj_t BgL_type1085z00_8, bool_t BgL_readzd2onlyzf31086z21_9,
		obj_t BgL_defaultzd2value1087zd2_10, obj_t BgL_virtualzd2num1088zd2_11,
		bool_t BgL_virtualzd2override1089zd2_12, obj_t BgL_getter1090z00_13,
		obj_t BgL_setter1091z00_14, obj_t BgL_userzd2info1092zd2_15)
	{
		{	/* Object/slots.sch 37 */
			{	/* Object/slots.sch 37 */
				BgL_slotz00_bglt BgL_new1090z00_2019;

				{	/* Object/slots.sch 37 */
					BgL_slotz00_bglt BgL_new1089z00_2020;

					BgL_new1089z00_2020 =
						((BgL_slotz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_slotz00_bgl))));
					{	/* Object/slots.sch 37 */
						long BgL_arg1172z00_2021;

						{	/* Object/slots.sch 37 */
							long BgL_res1935z00_2022;

							BgL_res1935z00_2022 =
								BGL_CLASS_INDEX(BGl_slotz00zzobject_slotsz00);
							BgL_arg1172z00_2021 = BgL_res1935z00_2022;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1089z00_2020), BgL_arg1172z00_2021);
					}
					BgL_new1090z00_2019 = BgL_new1089z00_2020;
				}
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_idz00) =
					((obj_t) BgL_id1080z00_3), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_namez00) =
					((obj_t) BgL_name1081z00_4), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_srcz00) =
					((obj_t) BgL_src1082z00_5), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_classzd2ownerzd2) =
					((obj_t) BgL_classzd2owner1083zd2_6), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_indexz00) =
					((long) BgL_index1084z00_7), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_typez00) =
					((obj_t) BgL_type1085z00_8), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_readzd2onlyzf3z21) =
					((bool_t) BgL_readzd2onlyzf31086z21_9), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_defaultzd2valuezd2) =
					((obj_t) BgL_defaultzd2value1087zd2_10), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_virtualzd2numzd2) =
					((obj_t) BgL_virtualzd2num1088zd2_11), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_virtualzd2overridezd2) =
					((bool_t) BgL_virtualzd2override1089zd2_12), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_getterz00) =
					((obj_t) BgL_getter1090z00_13), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->BgL_setterz00) =
					((obj_t) BgL_setter1091z00_14), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(BgL_new1090z00_2019))->
						BgL_userzd2infozd2) = ((obj_t) BgL_userzd2info1092zd2_15), BUNSPEC);
				return BgL_new1090z00_2019;
			}
		}

	}



/* &make-slot */
	BgL_slotz00_bglt BGl_z62makezd2slotzb0zzobject_slotsz00(obj_t BgL_envz00_1794,
		obj_t BgL_id1080z00_1795, obj_t BgL_name1081z00_1796,
		obj_t BgL_src1082z00_1797, obj_t BgL_classzd2owner1083zd2_1798,
		obj_t BgL_index1084z00_1799, obj_t BgL_type1085z00_1800,
		obj_t BgL_readzd2onlyzf31086z21_1801, obj_t BgL_defaultzd2value1087zd2_1802,
		obj_t BgL_virtualzd2num1088zd2_1803,
		obj_t BgL_virtualzd2override1089zd2_1804, obj_t BgL_getter1090z00_1805,
		obj_t BgL_setter1091z00_1806, obj_t BgL_userzd2info1092zd2_1807)
	{
		{	/* Object/slots.sch 37 */
			return
				BGl_makezd2slotzd2zzobject_slotsz00(BgL_id1080z00_1795,
				BgL_name1081z00_1796, BgL_src1082z00_1797,
				BgL_classzd2owner1083zd2_1798, (long) CINT(BgL_index1084z00_1799),
				BgL_type1085z00_1800, CBOOL(BgL_readzd2onlyzf31086z21_1801),
				BgL_defaultzd2value1087zd2_1802, BgL_virtualzd2num1088zd2_1803,
				CBOOL(BgL_virtualzd2override1089zd2_1804), BgL_getter1090z00_1805,
				BgL_setter1091z00_1806, BgL_userzd2info1092zd2_1807);
		}

	}



/* slot? */
	BGL_EXPORTED_DEF bool_t BGl_slotzf3zf3zzobject_slotsz00(obj_t BgL_objz00_16)
	{
		{	/* Object/slots.sch 38 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_16, BGl_slotz00zzobject_slotsz00);
		}

	}



/* &slot? */
	obj_t BGl_z62slotzf3z91zzobject_slotsz00(obj_t BgL_envz00_1808,
		obj_t BgL_objz00_1809)
	{
		{	/* Object/slots.sch 38 */
			return BBOOL(BGl_slotzf3zf3zzobject_slotsz00(BgL_objz00_1809));
		}

	}



/* slot-nil */
	BGL_EXPORTED_DEF BgL_slotz00_bglt BGl_slotzd2nilzd2zzobject_slotsz00()
	{
		{	/* Object/slots.sch 39 */
			{	/* Object/slots.sch 39 */
				obj_t BgL_classz00_1514;

				BgL_classz00_1514 = BGl_slotz00zzobject_slotsz00;
				{	/* Object/slots.sch 39 */
					obj_t BgL__ortest_1106z00_1515;

					BgL__ortest_1106z00_1515 = BGL_CLASS_NIL(BgL_classz00_1514);
					if (CBOOL(BgL__ortest_1106z00_1515))
						{	/* Object/slots.sch 39 */
							return ((BgL_slotz00_bglt) BgL__ortest_1106z00_1515);
						}
					else
						{	/* Object/slots.sch 39 */
							return
								((BgL_slotz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1514));
						}
				}
			}
		}

	}



/* &slot-nil */
	BgL_slotz00_bglt BGl_z62slotzd2nilzb0zzobject_slotsz00(obj_t BgL_envz00_1810)
	{
		{	/* Object/slots.sch 39 */
			return BGl_slotzd2nilzd2zzobject_slotsz00();
		}

	}



/* slot-user-info */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2userzd2infoz00zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_17)
	{
		{	/* Object/slots.sch 40 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_17))->BgL_userzd2infozd2);
		}

	}



/* &slot-user-info */
	obj_t BGl_z62slotzd2userzd2infoz62zzobject_slotsz00(obj_t BgL_envz00_1811,
		obj_t BgL_oz00_1812)
	{
		{	/* Object/slots.sch 40 */
			return
				BGl_slotzd2userzd2infoz00zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1812));
		}

	}



/* slot-setter */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2setterzd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_20)
	{
		{	/* Object/slots.sch 42 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_20))->BgL_setterz00);
		}

	}



/* &slot-setter */
	obj_t BGl_z62slotzd2setterzb0zzobject_slotsz00(obj_t BgL_envz00_1813,
		obj_t BgL_oz00_1814)
	{
		{	/* Object/slots.sch 42 */
			return
				BGl_slotzd2setterzd2zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1814));
		}

	}



/* slot-setter-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2setterzd2setz12z12zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_21,
		obj_t BgL_vz00_22)
	{
		{	/* Object/slots.sch 43 */
			return
				((((BgL_slotz00_bglt) COBJECT(BgL_oz00_21))->BgL_setterz00) =
				((obj_t) BgL_vz00_22), BUNSPEC);
		}

	}



/* &slot-setter-set! */
	obj_t BGl_z62slotzd2setterzd2setz12z70zzobject_slotsz00(obj_t BgL_envz00_1815,
		obj_t BgL_oz00_1816, obj_t BgL_vz00_1817)
	{
		{	/* Object/slots.sch 43 */
			return
				BGl_slotzd2setterzd2setz12z12zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1816), BgL_vz00_1817);
		}

	}



/* slot-getter */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2getterzd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_23)
	{
		{	/* Object/slots.sch 44 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_23))->BgL_getterz00);
		}

	}



/* &slot-getter */
	obj_t BGl_z62slotzd2getterzb0zzobject_slotsz00(obj_t BgL_envz00_1818,
		obj_t BgL_oz00_1819)
	{
		{	/* Object/slots.sch 44 */
			return
				BGl_slotzd2getterzd2zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1819));
		}

	}



/* slot-getter-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2getterzd2setz12z12zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_24,
		obj_t BgL_vz00_25)
	{
		{	/* Object/slots.sch 45 */
			return
				((((BgL_slotz00_bglt) COBJECT(BgL_oz00_24))->BgL_getterz00) =
				((obj_t) BgL_vz00_25), BUNSPEC);
		}

	}



/* &slot-getter-set! */
	obj_t BGl_z62slotzd2getterzd2setz12z70zzobject_slotsz00(obj_t BgL_envz00_1820,
		obj_t BgL_oz00_1821, obj_t BgL_vz00_1822)
	{
		{	/* Object/slots.sch 45 */
			return
				BGl_slotzd2getterzd2setz12z12zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1821), BgL_vz00_1822);
		}

	}



/* slot-virtual-override */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2virtualzd2overridez00zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_26)
	{
		{	/* Object/slots.sch 46 */
			return
				(((BgL_slotz00_bglt) COBJECT(BgL_oz00_26))->BgL_virtualzd2overridezd2);
		}

	}



/* &slot-virtual-override */
	obj_t BGl_z62slotzd2virtualzd2overridez62zzobject_slotsz00(obj_t
		BgL_envz00_1823, obj_t BgL_oz00_1824)
	{
		{	/* Object/slots.sch 46 */
			return
				BBOOL(BGl_slotzd2virtualzd2overridez00zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_oz00_1824)));
		}

	}



/* slot-virtual-num */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2virtualzd2numz00zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_29)
	{
		{	/* Object/slots.sch 48 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_29))->BgL_virtualzd2numzd2);
		}

	}



/* &slot-virtual-num */
	obj_t BGl_z62slotzd2virtualzd2numz62zzobject_slotsz00(obj_t BgL_envz00_1825,
		obj_t BgL_oz00_1826)
	{
		{	/* Object/slots.sch 48 */
			return
				BGl_slotzd2virtualzd2numz00zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1826));
		}

	}



/* slot-virtual-num-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2virtualzd2numzd2setz12zc0zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_30, obj_t BgL_vz00_31)
	{
		{	/* Object/slots.sch 49 */
			return
				((((BgL_slotz00_bglt) COBJECT(BgL_oz00_30))->BgL_virtualzd2numzd2) =
				((obj_t) BgL_vz00_31), BUNSPEC);
		}

	}



/* &slot-virtual-num-set! */
	obj_t BGl_z62slotzd2virtualzd2numzd2setz12za2zzobject_slotsz00(obj_t
		BgL_envz00_1827, obj_t BgL_oz00_1828, obj_t BgL_vz00_1829)
	{
		{	/* Object/slots.sch 49 */
			return
				BGl_slotzd2virtualzd2numzd2setz12zc0zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1828), BgL_vz00_1829);
		}

	}



/* slot-default-value */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2defaultzd2valuez00zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_32)
	{
		{	/* Object/slots.sch 50 */
			return
				(((BgL_slotz00_bglt) COBJECT(BgL_oz00_32))->BgL_defaultzd2valuezd2);
		}

	}



/* &slot-default-value */
	obj_t BGl_z62slotzd2defaultzd2valuez62zzobject_slotsz00(obj_t BgL_envz00_1830,
		obj_t BgL_oz00_1831)
	{
		{	/* Object/slots.sch 50 */
			return
				BGl_slotzd2defaultzd2valuez00zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1831));
		}

	}



/* slot-read-only? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2readzd2onlyzf3zf3zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_35)
	{
		{	/* Object/slots.sch 52 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_35))->BgL_readzd2onlyzf3z21);
		}

	}



/* &slot-read-only? */
	obj_t BGl_z62slotzd2readzd2onlyzf3z91zzobject_slotsz00(obj_t BgL_envz00_1832,
		obj_t BgL_oz00_1833)
	{
		{	/* Object/slots.sch 52 */
			return
				BBOOL(BGl_slotzd2readzd2onlyzf3zf3zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_oz00_1833)));
		}

	}



/* slot-type */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2typezd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_38)
	{
		{	/* Object/slots.sch 54 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_38))->BgL_typez00);
		}

	}



/* &slot-type */
	obj_t BGl_z62slotzd2typezb0zzobject_slotsz00(obj_t BgL_envz00_1834,
		obj_t BgL_oz00_1835)
	{
		{	/* Object/slots.sch 54 */
			return
				BGl_slotzd2typezd2zzobject_slotsz00(((BgL_slotz00_bglt) BgL_oz00_1835));
		}

	}



/* slot-index */
	BGL_EXPORTED_DEF long BGl_slotzd2indexzd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_41)
	{
		{	/* Object/slots.sch 56 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_41))->BgL_indexz00);
		}

	}



/* &slot-index */
	obj_t BGl_z62slotzd2indexzb0zzobject_slotsz00(obj_t BgL_envz00_1836,
		obj_t BgL_oz00_1837)
	{
		{	/* Object/slots.sch 56 */
			return
				BINT(BGl_slotzd2indexzd2zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_oz00_1837)));
		}

	}



/* slot-class-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2classzd2ownerz00zzobject_slotsz00(BgL_slotz00_bglt BgL_oz00_44)
	{
		{	/* Object/slots.sch 58 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_44))->BgL_classzd2ownerzd2);
		}

	}



/* &slot-class-owner */
	obj_t BGl_z62slotzd2classzd2ownerz62zzobject_slotsz00(obj_t BgL_envz00_1838,
		obj_t BgL_oz00_1839)
	{
		{	/* Object/slots.sch 58 */
			return
				BGl_slotzd2classzd2ownerz00zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_oz00_1839));
		}

	}



/* slot-src */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2srczd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_47)
	{
		{	/* Object/slots.sch 60 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_47))->BgL_srcz00);
		}

	}



/* &slot-src */
	obj_t BGl_z62slotzd2srczb0zzobject_slotsz00(obj_t BgL_envz00_1840,
		obj_t BgL_oz00_1841)
	{
		{	/* Object/slots.sch 60 */
			return
				BGl_slotzd2srczd2zzobject_slotsz00(((BgL_slotz00_bglt) BgL_oz00_1841));
		}

	}



/* slot-name */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2namezd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_50)
	{
		{	/* Object/slots.sch 62 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_50))->BgL_namez00);
		}

	}



/* &slot-name */
	obj_t BGl_z62slotzd2namezb0zzobject_slotsz00(obj_t BgL_envz00_1842,
		obj_t BgL_oz00_1843)
	{
		{	/* Object/slots.sch 62 */
			return
				BGl_slotzd2namezd2zzobject_slotsz00(((BgL_slotz00_bglt) BgL_oz00_1843));
		}

	}



/* slot-id */
	BGL_EXPORTED_DEF obj_t BGl_slotzd2idzd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_oz00_53)
	{
		{	/* Object/slots.sch 64 */
			return (((BgL_slotz00_bglt) COBJECT(BgL_oz00_53))->BgL_idz00);
		}

	}



/* &slot-id */
	obj_t BGl_z62slotzd2idzb0zzobject_slotsz00(obj_t BgL_envz00_1844,
		obj_t BgL_oz00_1845)
	{
		{	/* Object/slots.sch 64 */
			return
				BGl_slotzd2idzd2zzobject_slotsz00(((BgL_slotz00_bglt) BgL_oz00_1845));
		}

	}



/* slot-default? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt BgL_slotz00_57)
	{
		{	/* Object/slots.scm 96 */
			{	/* Object/slots.scm 97 */
				bool_t BgL_test2145z00_2225;

				{	/* Object/slots.scm 97 */
					obj_t BgL_arg1177z00_795;
					obj_t BgL_arg1178z00_796;

					BgL_arg1177z00_795 =
						(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_57))->
						BgL_defaultzd2valuezd2);
					BgL_arg1178z00_796 =
						MAKE_YOUNG_PAIR(BINT(((long) 1)), BINT(((long) 2)));
					BgL_test2145z00_2225 =
						BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_arg1177z00_795,
						BgL_arg1178z00_796);
				}
				if (BgL_test2145z00_2225)
					{	/* Object/slots.scm 97 */
						return ((bool_t) 0);
					}
				else
					{	/* Object/slots.scm 97 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* &slot-default? */
	obj_t BGl_z62slotzd2defaultzf3z43zzobject_slotsz00(obj_t BgL_envz00_1846,
		obj_t BgL_slotz00_1847)
	{
		{	/* Object/slots.scm 96 */
			return
				BBOOL(BGl_slotzd2defaultzf3z21zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_slotz00_1847)));
		}

	}



/* slot-virtual? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt BgL_slotz00_58)
	{
		{	/* Object/slots.scm 102 */
			return
				(
				(long) CINT(
					(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_58))->
						BgL_virtualzd2numzd2)) >= ((long) 0));
		}

	}



/* &slot-virtual? */
	obj_t BGl_z62slotzd2virtualzf3z43zzobject_slotsz00(obj_t BgL_envz00_1848,
		obj_t BgL_slotz00_1849)
	{
		{	/* Object/slots.scm 102 */
			return
				BBOOL(BGl_slotzd2virtualzf3z21zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_slotz00_1849)));
		}

	}



/* slot-inline-default? */
	BGL_EXPORTED_DEF bool_t
		BGl_slotzd2inlinezd2defaultzf3zf3zzobject_slotsz00(BgL_slotz00_bglt
		BgL_slotz00_59)
	{
		{	/* Object/slots.scm 108 */
			{	/* Object/slots.scm 109 */
				bool_t BgL_test2146z00_2240;

				{	/* Object/slots.scm 109 */
					obj_t BgL_tmpz00_2241;

					BgL_tmpz00_2241 =
						(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_59))->
						BgL_defaultzd2valuezd2);
					BgL_test2146z00_2240 = PAIRP(BgL_tmpz00_2241);
				}
				if (BgL_test2146z00_2240)
					{	/* Object/slots.scm 110 */
						obj_t BgL_arg1186z00_799;

						BgL_arg1186z00_799 =
							CAR(
							(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_59))->
								BgL_defaultzd2valuezd2));
						return (BgL_arg1186z00_799 ==
							BGl_slotzd2inlinezd2markz00zzobject_slotsz00);
					}
				else
					{	/* Object/slots.scm 109 */
						return ((bool_t) 0);
					}
			}
		}

	}



/* &slot-inline-default? */
	obj_t BGl_z62slotzd2inlinezd2defaultzf3z91zzobject_slotsz00(obj_t
		BgL_envz00_1850, obj_t BgL_slotz00_1851)
	{
		{	/* Object/slots.scm 108 */
			return
				BBOOL(BGl_slotzd2inlinezd2defaultzf3zf3zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_slotz00_1851)));
		}

	}



/* slot-default-inline-value */
	BGL_EXPORTED_DEF obj_t
		BGl_slotzd2defaultzd2inlinezd2valuezd2zzobject_slotsz00(BgL_slotz00_bglt
		BgL_slotz00_60)
	{
		{	/* Object/slots.scm 115 */
			return
				CDR(
				(((BgL_slotz00_bglt) COBJECT(BgL_slotz00_60))->BgL_defaultzd2valuezd2));
		}

	}



/* &slot-default-inline-value */
	obj_t BGl_z62slotzd2defaultzd2inlinezd2valuezb0zzobject_slotsz00(obj_t
		BgL_envz00_1852, obj_t BgL_slotz00_1853)
	{
		{	/* Object/slots.scm 115 */
			return
				BGl_slotzd2defaultzd2inlinezd2valuezd2zzobject_slotsz00(
				((BgL_slotz00_bglt) BgL_slotz00_1853));
		}

	}



/* ensure-type-defined! */
	obj_t BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(BgL_typez00_bglt
		BgL_typez00_61, obj_t BgL_srcz00_62)
	{
		{	/* Object/slots.scm 121 */
			if ((((BgL_typez00_bglt) COBJECT(BgL_typez00_61))->BgL_initzf3zf3))
				{	/* Object/slots.scm 122 */
					return BFALSE;
				}
			else
				{	/* Object/slots.scm 122 */
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string2001z00zzobject_slotsz00,
						(((BgL_typez00_bglt) COBJECT(BgL_typez00_61))->BgL_idz00),
						BgL_srcz00_62, BNIL);
				}
		}

	}



/* make-class-slots */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_typez00_bglt
		BgL_classz00_63, obj_t BgL_clausesz00_64, obj_t BgL_superz00_65,
		int BgL_vnumz00_66, obj_t BgL_srcz00_67)
	{
		{	/* Object/slots.scm 128 */
			{
				obj_t BgL_attrz00_953;
				obj_t BgL_nslotz00_1035;
				obj_t BgL_sslotsz00_1036;
				BgL_typez00_bglt BgL_classz00_1037;
				obj_t BgL_nslotsz00_1064;
				obj_t BgL_sslotsz00_1065;
				BgL_typez00_bglt BgL_classz00_1066;
				obj_t BgL_slotzd2idzd2_1091;
				long BgL_indexz00_1092;

				{	/* Object/slots.scm 254 */
					obj_t BgL_sslotsz00_815;

					if (BGl_isazf3zf3zz__objectz00(BgL_superz00_65,
							BGl_typez00zztype_typez00))
						{	/* Object/slots.scm 255 */
							if (BGl_isazf3zf3zz__objectz00(BgL_superz00_65,
									BGl_tclassz00zzobject_classz00))
								{
									BgL_tclassz00_bglt BgL_auxz00_2262;

									{
										obj_t BgL_auxz00_2263;

										{	/* Object/slots.scm 260 */
											BgL_objectz00_bglt BgL_tmpz00_2264;

											BgL_tmpz00_2264 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_superz00_65));
											BgL_auxz00_2263 = BGL_OBJECT_WIDENING(BgL_tmpz00_2264);
										}
										BgL_auxz00_2262 = ((BgL_tclassz00_bglt) BgL_auxz00_2263);
									}
									BgL_sslotsz00_815 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2262))->
										BgL_slotsz00);
								}
							else
								{	/* Object/slots.scm 257 */
									BgL_sslotsz00_815 = BNIL;
								}
						}
					else
						{	/* Object/slots.scm 255 */
							BgL_sslotsz00_815 = BNIL;
						}
					{	/* Object/slots.scm 261 */
						long BgL_g1098z00_817;

						BgL_g1098z00_817 = bgl_list_length(BgL_sslotsz00_815);
						{
							obj_t BgL_clausesz00_819;
							obj_t BgL_nslotsz00_820;
							obj_t BgL_sslotsz00_821;
							obj_t BgL_vnumz00_822;
							long BgL_indexz00_823;

							BgL_clausesz00_819 = BgL_clausesz00_64;
							BgL_nslotsz00_820 = BNIL;
							BgL_sslotsz00_821 = BgL_sslotsz00_815;
							BgL_vnumz00_822 = BINT(BgL_vnumz00_66);
							BgL_indexz00_823 = BgL_g1098z00_817;
						BgL_zc3z04anonymousza31203ze3z87_824:
							if (NULLP(BgL_clausesz00_819))
								{	/* Object/slots.scm 266 */
									BgL_nslotsz00_1064 = BgL_nslotsz00_820;
									BgL_sslotsz00_1065 = BgL_sslotsz00_821;
									BgL_classz00_1066 = BgL_classz00_63;
									{
										obj_t BgL_l1162z00_1069;

										BgL_l1162z00_1069 = BgL_nslotsz00_1064;
									BgL_zc3z04anonymousza31555ze3z87_1070:
										if (PAIRP(BgL_l1162z00_1069))
											{	/* Object/slots.scm 228 */
												BgL_nslotz00_1035 = CAR(BgL_l1162z00_1069);
												BgL_sslotsz00_1036 = BgL_sslotsz00_1065;
												BgL_classz00_1037 = BgL_classz00_1066;
												if (
													((long) CINT(
															(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_nslotz00_1035)))->
																BgL_virtualzd2numzd2)) >= ((long) 0)))
													{	/* Object/slots.scm 219 */
														BFALSE;
													}
												else
													{	/* Object/slots.scm 220 */
														obj_t BgL_idz00_1040;

														BgL_idz00_1040 =
															(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt) BgL_nslotz00_1035)))->
															BgL_idz00);
														{	/* Object/slots.scm 221 */
															bool_t BgL_test2153z00_2282;

															{
																obj_t BgL_l1159z00_1056;

																BgL_l1159z00_1056 = BgL_sslotsz00_1036;
															BgL_zc3z04anonymousza31541ze3z87_1057:
																if (NULLP(BgL_l1159z00_1056))
																	{	/* Object/slots.scm 221 */
																		BgL_test2153z00_2282 = ((bool_t) 0);
																	}
																else
																	{	/* Object/slots.scm 221 */
																		bool_t BgL__ortest_1161z00_1059;

																		BgL__ortest_1161z00_1059 =
																			(
																			(((BgL_slotz00_bglt) COBJECT(
																						((BgL_slotz00_bglt)
																							CAR(
																								((obj_t)
																									BgL_l1159z00_1056)))))->
																				BgL_idz00) == BgL_idz00_1040);
																		if (BgL__ortest_1161z00_1059)
																			{	/* Object/slots.scm 221 */
																				BgL_test2153z00_2282 =
																					BgL__ortest_1161z00_1059;
																			}
																		else
																			{
																				obj_t BgL_l1159z00_2291;

																				BgL_l1159z00_2291 =
																					CDR(((obj_t) BgL_l1159z00_1056));
																				BgL_l1159z00_1056 = BgL_l1159z00_2291;
																				goto
																					BgL_zc3z04anonymousza31541ze3z87_1057;
																			}
																	}
															}
															if (BgL_test2153z00_2282)
																{	/* Object/slots.scm 222 */
																	obj_t BgL_arg1528z00_1051;
																	obj_t BgL_arg1536z00_1052;

																	{	/* Object/slots.scm 222 */
																		obj_t BgL_arg1540z00_1054;

																		BgL_arg1540z00_1054 =
																			(((BgL_slotz00_bglt) COBJECT(
																					((BgL_slotz00_bglt)
																						BgL_nslotz00_1035)))->BgL_srcz00);
																		BgL_arg1528z00_1051 =
																			BGl_findzd2locationzd2zztools_locationz00
																			(BgL_arg1540z00_1054);
																	}
																	BgL_arg1536z00_1052 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					BgL_classz00_1037)))->BgL_idz00);
																	BGl_userzd2errorzf2locationz20zztools_errorz00
																		(BgL_arg1528z00_1051, BgL_arg1536z00_1052,
																		BGl_string2002z00zzobject_slotsz00,
																		BgL_idz00_1040, BNIL);
																}
															else
																{	/* Object/slots.scm 221 */
																	BFALSE;
																}
														}
													}
												{
													obj_t BgL_l1162z00_2301;

													BgL_l1162z00_2301 = CDR(BgL_l1162z00_1069);
													BgL_l1162z00_1069 = BgL_l1162z00_2301;
													goto BgL_zc3z04anonymousza31555ze3z87_1070;
												}
											}
										else
											{	/* Object/slots.scm 228 */
												((bool_t) 1);
											}
									}
									return
										BGl_appendzd221011zd2zzobject_slotsz00(BgL_sslotsz00_821,
										bgl_reverse(BgL_nslotsz00_820));
								}
							else
								{	/* Object/slots.scm 271 */
									obj_t BgL_sz00_827;

									BgL_sz00_827 = CAR(((obj_t) BgL_clausesz00_819));
									{
										obj_t BgL_idz00_828;
										obj_t BgL_attrz00_829;
										obj_t BgL_idz00_831;

										if (PAIRP(BgL_sz00_827))
											{	/* Object/slots.scm 272 */
												obj_t BgL_carzd2431zd2_836;

												BgL_carzd2431zd2_836 = CAR(BgL_sz00_827);
												if (PAIRP(BgL_carzd2431zd2_836))
													{	/* Object/slots.scm 272 */
														obj_t BgL_cdrzd2435zd2_838;

														BgL_cdrzd2435zd2_838 = CDR(BgL_carzd2431zd2_836);
														if (
															(CAR(BgL_carzd2431zd2_836) ==
																CNST_TABLE_REF(((long) 2))))
															{	/* Object/slots.scm 272 */
																if (PAIRP(BgL_cdrzd2435zd2_838))
																	{	/* Object/slots.scm 272 */
																		if (NULLP(CDR(BgL_cdrzd2435zd2_838)))
																			{	/* Object/slots.scm 272 */
																				BgL_idz00_828 =
																					CAR(BgL_cdrzd2435zd2_838);
																				BgL_attrz00_829 = CDR(BgL_sz00_827);
																				{	/* Object/slots.scm 274 */
																					obj_t BgL_vgetz00_857;

																					BgL_attrz00_953 = BgL_attrz00_829;
																					{
																						obj_t BgL_attrz00_956;
																						obj_t BgL_getz00_957;
																						obj_t BgL_setz00_958;

																						BgL_attrz00_956 = BgL_attrz00_953;
																						BgL_getz00_957 = BFALSE;
																						BgL_setz00_958 = BFALSE;
																					BgL_zc3z04anonymousza31340ze3z87_959:
																						if (PAIRP(BgL_attrz00_956))
																							{

																								{	/* Object/slots.scm 159 */
																									obj_t BgL_ezd2399zd2_966;

																									BgL_ezd2399zd2_966 =
																										CAR(BgL_attrz00_956);
																									if (PAIRP(BgL_ezd2399zd2_966))
																										{	/* Object/slots.scm 159 */
																											obj_t
																												BgL_cdrzd2404zd2_968;
																											BgL_cdrzd2404zd2_968 =
																												CDR(BgL_ezd2399zd2_966);
																											if ((CAR
																													(BgL_ezd2399zd2_966)
																													==
																													CNST_TABLE_REF(((long)
																															0))))
																												{	/* Object/slots.scm 159 */
																													if (PAIRP
																														(BgL_cdrzd2404zd2_968))
																														{	/* Object/slots.scm 159 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2404zd2_968)))
																																{
																																	obj_t
																																		BgL_getz00_2339;
																																	obj_t
																																		BgL_attrz00_2337;
																																	BgL_attrz00_2337
																																		=
																																		CDR
																																		(BgL_attrz00_956);
																																	BgL_getz00_2339
																																		=
																																		CAR
																																		(BgL_cdrzd2404zd2_968);
																																	BgL_getz00_957
																																		=
																																		BgL_getz00_2339;
																																	BgL_attrz00_956
																																		=
																																		BgL_attrz00_2337;
																																	goto
																																		BgL_zc3z04anonymousza31340ze3z87_959;
																																}
																															else
																																{	/* Object/slots.scm 159 */
																																BgL_tagzd2398zd2_965:
																																	{	/* Object/slots.scm 165 */
																																		obj_t
																																			BgL_arg1383z00_988;
																																		BgL_arg1383z00_988
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_attrz00_956));
																																		{
																																			obj_t
																																				BgL_attrz00_2343;
																																			BgL_attrz00_2343
																																				=
																																				BgL_arg1383z00_988;
																																			BgL_attrz00_956
																																				=
																																				BgL_attrz00_2343;
																																			goto
																																				BgL_zc3z04anonymousza31340ze3z87_959;
																																		}
																																	}
																																}
																														}
																													else
																														{	/* Object/slots.scm 159 */
																															goto
																																BgL_tagzd2398zd2_965;
																														}
																												}
																											else
																												{	/* Object/slots.scm 159 */
																													if (
																														(CAR
																															(BgL_ezd2399zd2_966)
																															==
																															CNST_TABLE_REF((
																																	(long) 1))))
																														{	/* Object/slots.scm 159 */
																															if (PAIRP
																																(BgL_cdrzd2404zd2_968))
																																{	/* Object/slots.scm 159 */
																																	if (NULLP(CDR
																																			(BgL_cdrzd2404zd2_968)))
																																		{
																																			obj_t
																																				BgL_setz00_2355;
																																			obj_t
																																				BgL_attrz00_2353;
																																			BgL_attrz00_2353
																																				=
																																				CDR
																																				(BgL_attrz00_956);
																																			BgL_setz00_2355
																																				=
																																				CAR
																																				(BgL_cdrzd2404zd2_968);
																																			BgL_setz00_958
																																				=
																																				BgL_setz00_2355;
																																			BgL_attrz00_956
																																				=
																																				BgL_attrz00_2353;
																																			goto
																																				BgL_zc3z04anonymousza31340ze3z87_959;
																																		}
																																	else
																																		{	/* Object/slots.scm 159 */
																																			goto
																																				BgL_tagzd2398zd2_965;
																																		}
																																}
																															else
																																{	/* Object/slots.scm 159 */
																																	goto
																																		BgL_tagzd2398zd2_965;
																																}
																														}
																													else
																														{	/* Object/slots.scm 159 */
																															goto
																																BgL_tagzd2398zd2_965;
																														}
																												}
																										}
																									else
																										{	/* Object/slots.scm 159 */
																											goto BgL_tagzd2398zd2_965;
																										}
																								}
																							}
																						else
																							{	/* Object/slots.scm 157 */
																								{	/* Object/slots.scm 158 */
																									int BgL_res1956z00_1580;

																									{	/* Object/slots.scm 158 */
																										int BgL_tmpz00_2357;

																										BgL_tmpz00_2357 =
																											(int) (((long) 2));
																										BgL_res1956z00_1580 =
																											BGL_MVALUES_NUMBER_SET
																											(BgL_tmpz00_2357);
																									} BgL_res1956z00_1580;
																								}
																								{	/* Object/slots.scm 158 */
																									int BgL_tmpz00_2360;

																									BgL_tmpz00_2360 =
																										(int) (((long) 1));
																									BGL_MVALUES_VAL_SET
																										(BgL_tmpz00_2360,
																										BgL_setz00_958);
																								}
																								BgL_vgetz00_857 =
																									BgL_getz00_957;
																					}}
																					{	/* Object/slots.scm 275 */
																						obj_t BgL_vsetz00_858;

																						{	/* Object/slots.scm 277 */
																							int BgL_tmpz00_2363;

																							BgL_tmpz00_2363 =
																								(int) (((long) 1));
																							BgL_vsetz00_858 =
																								BGL_MVALUES_VAL
																								(BgL_tmpz00_2363);
																						}
																						{	/* Object/slots.scm 277 */
																							bool_t BgL_test2169z00_2366;

																							if (CBOOL(BgL_vgetz00_857))
																								{	/* Object/slots.scm 277 */
																									BgL_test2169z00_2366 =
																										CBOOL
																										(BGl_slotzd2memberzf3ze70zc6zzobject_slotsz00
																										(CAR(((obj_t)
																													BgL_idz00_828)),
																											BgL_nslotsz00_820));
																								}
																							else
																								{	/* Object/slots.scm 277 */
																									BgL_test2169z00_2366 =
																										((bool_t) 0);
																								}
																							if (BgL_test2169z00_2366)
																								{	/* Object/slots.scm 278 */
																									obj_t BgL_arg1247z00_861;
																									obj_t BgL_arg1250z00_862;
																									obj_t BgL_arg1252z00_863;

																									BgL_arg1247z00_861 =
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_sz00_827);
																									BgL_arg1250z00_862 =
																										CAR(((obj_t)
																											BgL_idz00_828));
																									BgL_arg1252z00_863 =
																										CAR(((obj_t)
																											BgL_idz00_828));
																									return
																										BGl_userzd2errorzf2locationz20zztools_errorz00
																										(BgL_arg1247z00_861,
																										BgL_arg1250z00_862,
																										BGl_string2004z00zzobject_slotsz00,
																										BgL_arg1252z00_863, BNIL);
																								}
																							else
																								{	/* Object/slots.scm 282 */
																									obj_t BgL_g1100z00_865;

																									if (CBOOL(BgL_vgetz00_857))
																										{	/* Object/slots.scm 282 */
																											BgL_g1100z00_865 =
																												BGl_slotzd2memberzf3ze70zc6zzobject_slotsz00
																												(CAR(((obj_t)
																														BgL_idz00_828)),
																												BgL_sslotsz00_821);
																										}
																									else
																										{	/* Object/slots.scm 282 */
																											BgL_g1100z00_865 = BFALSE;
																										}
																									if (CBOOL(BgL_g1100z00_865))
																										{	/* Object/slots.scm 282 */
																											{	/* Object/slots.scm 285 */
																												bool_t
																													BgL_test2173z00_2386;
																												{	/* Object/slots.scm 285 */
																													bool_t
																														BgL_test2174z00_2387;
																													{	/* Object/slots.scm 285 */
																														int
																															BgL_arg1274z00_880;
																														BgL_arg1274z00_880 =
																															BGl_bigloozd2warningzd2zz__paramz00
																															();
																														BgL_test2174z00_2387
																															=
																															((long)
																															(BgL_arg1274z00_880)
																															>= ((long) 2));
																													}
																													if (BgL_test2174z00_2387)
																														{	/* Object/slots.scm 285 */
																															BgL_test2173z00_2386
																																=
																																CBOOL
																																(BGl_za2warningzd2overridenzd2slotsza2z00zzengine_paramz00);
																														}
																													else
																														{	/* Object/slots.scm 285 */
																															BgL_test2173z00_2386
																																= ((bool_t) 0);
																														}
																												}
																												if (BgL_test2173z00_2386)
																													{	/* Object/slots.scm 287 */
																														obj_t
																															BgL_arg1258z00_872;
																														obj_t
																															BgL_arg1263z00_873;
																														obj_t
																															BgL_arg1268z00_874;
																														obj_t
																															BgL_arg1270z00_875;
																														BgL_arg1258z00_872 =
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_sz00_827);
																														BgL_arg1263z00_873 =
																															CAR(((obj_t)
																																BgL_idz00_828));
																														{	/* Object/slots.scm 290 */
																															obj_t
																																BgL_arg1271z00_876;
																															BgL_arg1271z00_876
																																=
																																(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) (((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt) BgL_g1100z00_865)))->BgL_classzd2ownerzd2))))->BgL_idz00);
																															{	/* Object/slots.scm 289 */
																																obj_t
																																	BgL_list1272z00_877;
																																BgL_list1272z00_877
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1271z00_876,
																																	BNIL);
																																BgL_arg1268z00_874
																																	=
																																	BGl_formatz00zz__r4_output_6_10_3z00
																																	(BGl_string2005z00zzobject_slotsz00,
																																	BgL_list1272z00_877);
																															}
																														}
																														BgL_arg1270z00_875 =
																															CAR(
																															((obj_t)
																																BgL_idz00_828));
																														BGl_userzd2warningzf2locationz20zztools_errorz00
																															(BgL_arg1258z00_872,
																															BgL_arg1263z00_873,
																															BgL_arg1268z00_874,
																															BgL_arg1270z00_875);
																													}
																												else
																													{	/* Object/slots.scm 285 */
																														BFALSE;
																													}
																											}
																											{	/* Object/slots.scm 292 */
																												obj_t BgL_vnz00_881;
																												long BgL_viz00_882;

																												BgL_vnz00_881 =
																													(((BgL_slotz00_bglt)
																														COBJECT((
																																(BgL_slotz00_bglt)
																																BgL_g1100z00_865)))->
																													BgL_virtualzd2numzd2);
																												BgL_viz00_882 =
																													(((BgL_slotz00_bglt)
																														COBJECT((
																																(BgL_slotz00_bglt)
																																BgL_g1100z00_865)))->
																													BgL_indexz00);
																												{	/* Object/slots.scm 294 */
																													obj_t
																														BgL_arg1275z00_883;
																													obj_t
																														BgL_arg1276z00_884;
																													BgL_arg1275z00_883 =
																														CDR(((obj_t)
																															BgL_clausesz00_819));
																													BgL_arg1276z00_884 =
																														BGl_loopze70ze7zzobject_slotsz00
																														(BgL_g1100z00_865,
																														BGl_makezd2attributezd2slotze70ze7zzobject_slotsz00
																														(BgL_classz00_63,
																															BgL_sz00_827,
																															BgL_idz00_828,
																															BgL_attrz00_829,
																															BgL_vgetz00_857,
																															BgL_vsetz00_858,
																															BgL_vnz00_881,
																															((bool_t) 1),
																															BgL_viz00_882),
																														BgL_sslotsz00_821);
																													{
																														obj_t
																															BgL_sslotsz00_2413;
																														obj_t
																															BgL_clausesz00_2412;
																														BgL_clausesz00_2412
																															=
																															BgL_arg1275z00_883;
																														BgL_sslotsz00_2413 =
																															BgL_arg1276z00_884;
																														BgL_sslotsz00_821 =
																															BgL_sslotsz00_2413;
																														BgL_clausesz00_819 =
																															BgL_clausesz00_2412;
																														goto
																															BgL_zc3z04anonymousza31203ze3z87_824;
																													}
																												}
																											}
																										}
																									else
																										{	/* Object/slots.scm 302 */
																											obj_t BgL_arg1280z00_886;
																											obj_t BgL_arg1281z00_887;
																											obj_t BgL_arg1282z00_888;
																											long BgL_arg1284z00_889;

																											BgL_arg1280z00_886 =
																												CDR(
																												((obj_t)
																													BgL_clausesz00_819));
																											BgL_arg1281z00_887 =
																												MAKE_YOUNG_PAIR
																												(BGl_makezd2attributezd2slotze70ze7zzobject_slotsz00
																												(BgL_classz00_63,
																													BgL_sz00_827,
																													BgL_idz00_828,
																													BgL_attrz00_829,
																													BgL_vgetz00_857,
																													BgL_vsetz00_858,
																													BgL_vnumz00_822,
																													((bool_t) 0),
																													BgL_indexz00_823),
																												BgL_nslotsz00_820);
																											{	/* Object/slots.scm 306 */
																												bool_t
																													BgL_test2175z00_2418;
																												if (CBOOL
																													(BgL_vgetz00_857))
																													{	/* Object/slots.scm 306 */
																														BgL_test2175z00_2418
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Object/slots.scm 306 */
																														BgL_test2175z00_2418
																															=
																															CBOOL
																															(BgL_vsetz00_858);
																													}
																												if (BgL_test2175z00_2418)
																													{	/* Object/slots.scm 306 */
																														if (INTEGERP
																															(BgL_vnumz00_822))
																															{	/* Object/slots.scm 306 */
																																long
																																	BgL_tmpz00_2424;
																																BgL_tmpz00_2424
																																	=
																																	(long)
																																	CINT
																																	(BgL_vnumz00_822);
																																BgL_arg1282z00_888
																																	=
																																	BGL_SAFE_PLUS_FX
																																	(BgL_tmpz00_2424,
																																	((long) 1));
																															}
																														else
																															{	/* Object/slots.scm 306 */
																																BgL_arg1282z00_888
																																	=
																																	BGl_2zb2zb2zz__r4_numbers_6_5z00
																																	(BgL_vnumz00_822,
																																	BINT(((long)
																																			1)));
																													}}
																												else
																													{	/* Object/slots.scm 306 */
																														BgL_arg1282z00_888 =
																															BgL_vnumz00_822;
																													}
																											}
																											BgL_arg1284z00_889 =
																												(BgL_indexz00_823 +
																												((long) 1));
																											{
																												long BgL_indexz00_2433;
																												obj_t BgL_vnumz00_2432;
																												obj_t
																													BgL_nslotsz00_2431;
																												obj_t
																													BgL_clausesz00_2430;
																												BgL_clausesz00_2430 =
																													BgL_arg1280z00_886;
																												BgL_nslotsz00_2431 =
																													BgL_arg1281z00_887;
																												BgL_vnumz00_2432 =
																													BgL_arg1282z00_888;
																												BgL_indexz00_2433 =
																													BgL_arg1284z00_889;
																												BgL_indexz00_823 =
																													BgL_indexz00_2433;
																												BgL_vnumz00_822 =
																													BgL_vnumz00_2432;
																												BgL_nslotsz00_820 =
																													BgL_nslotsz00_2431;
																												BgL_clausesz00_819 =
																													BgL_clausesz00_2430;
																												goto
																													BgL_zc3z04anonymousza31203ze3z87_824;
																											}
																										}
																								}
																						}
																					}
																				}
																			}
																		else
																			{	/* Object/slots.scm 272 */
																			BgL_tagzd2425zd2_833:
																				{	/* Object/slots.scm 315 */
																					obj_t BgL_arg1296z00_900;
																					obj_t BgL_arg1297z00_901;

																					BgL_arg1296z00_900 =
																						BGl_findzd2locationzd2zztools_locationz00
																						(BgL_sz00_827);
																					BgL_arg1297z00_901 =
																						(((BgL_typez00_bglt)
																							COBJECT(((BgL_typez00_bglt)
																									BgL_classz00_63)))->
																						BgL_idz00);
																					return
																						BGl_userzd2errorzf2locationz20zztools_errorz00
																						(BgL_arg1296z00_900,
																						BgL_arg1297z00_901,
																						BGl_string2003z00zzobject_slotsz00,
																						BgL_sz00_827, BNIL);
																				}
																			}
																	}
																else
																	{	/* Object/slots.scm 272 */
																		goto BgL_tagzd2425zd2_833;
																	}
															}
														else
															{	/* Object/slots.scm 272 */
																goto BgL_tagzd2425zd2_833;
															}
													}
												else
													{	/* Object/slots.scm 272 */
														obj_t BgL_cdrzd2450zd2_848;

														BgL_cdrzd2450zd2_848 = CDR(BgL_sz00_827);
														if (
															(BgL_carzd2431zd2_836 ==
																CNST_TABLE_REF(((long) 2))))
															{	/* Object/slots.scm 272 */
																if (PAIRP(BgL_cdrzd2450zd2_848))
																	{	/* Object/slots.scm 272 */
																		if (NULLP(CDR(BgL_cdrzd2450zd2_848)))
																			{	/* Object/slots.scm 272 */
																				BgL_idz00_831 =
																					CAR(BgL_cdrzd2450zd2_848);
																				{	/* Object/slots.scm 309 */
																					obj_t BgL_arg1290z00_896;
																					obj_t BgL_arg1291z00_897;
																					long BgL_arg1292z00_898;

																					BgL_arg1290z00_896 =
																						CDR(((obj_t) BgL_clausesz00_819));
																					{	/* Object/slots.scm 310 */
																						BgL_slotz00_bglt BgL_arg1295z00_899;

																						BgL_slotzd2idzd2_1091 =
																							BgL_idz00_831;
																						BgL_indexz00_1092 =
																							BgL_indexz00_823;
																						{	/* Object/slots.scm 244 */
																							BgL_slotz00_bglt
																								BgL_new1096z00_1094;
																							{	/* Object/slots.scm 245 */
																								BgL_slotz00_bglt
																									BgL_new1095z00_1098;
																								BgL_new1095z00_1098 =
																									((BgL_slotz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_slotz00_bgl))));
																								{	/* Object/slots.scm 245 */
																									long BgL_arg1593z00_1099;

																									{	/* Object/slots.scm 245 */
																										long BgL_res1964z00_1620;

																										BgL_res1964z00_1620 =
																											BGL_CLASS_INDEX
																											(BGl_slotz00zzobject_slotsz00);
																										BgL_arg1593z00_1099 =
																											BgL_res1964z00_1620;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1095z00_1098),
																										BgL_arg1593z00_1099);
																								}
																								BgL_new1096z00_1094 =
																									BgL_new1095z00_1098;
																							}
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_idz00) =
																								((obj_t) CAR(((obj_t)
																											BgL_slotzd2idzd2_1091))),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_2458;

																								{	/* Object/slots.scm 247 */
																									obj_t BgL_arg1588z00_1095;

																									BgL_arg1588z00_1095 =
																										CAR(
																										((obj_t)
																											BgL_slotzd2idzd2_1091));
																									BgL_auxz00_2458 =
																										BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
																										(BgL_arg1588z00_1095);
																								}
																								((((BgL_slotz00_bglt)
																											COBJECT
																											(BgL_new1096z00_1094))->
																										BgL_namez00) =
																									((obj_t) BgL_auxz00_2458),
																									BUNSPEC);
																							}
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_srcz00) =
																								((obj_t) BgL_slotzd2idzd2_1091),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_classzd2ownerzd2) =
																								((obj_t) ((obj_t)
																										BgL_classz00_63)), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_indexz00) =
																								((long) BgL_indexz00_1092),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_typez00) =
																								((obj_t)
																									BGl_findzd2slotzd2typez00zzobject_slotsz00
																									(BgL_slotzd2idzd2_1091,
																										BgL_srcz00_67)), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_readzd2onlyzf3z21) =
																								((bool_t) ((bool_t) 0)),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_2470;

																								{	/* Object/slots.scm 251 */
																									obj_t BgL_arg1589z00_1096;

																									{	/* Object/slots.scm 251 */
																										obj_t BgL_arg1592z00_1097;

																										{	/* Object/slots.scm 251 */
																											obj_t BgL_res1965z00_1626;

																											{	/* Object/slots.scm 251 */
																												obj_t BgL_classz00_1625;

																												BgL_classz00_1625 =
																													BGl_slotz00zzobject_slotsz00;
																												BgL_res1965z00_1626 =
																													BGL_CLASS_ALL_FIELDS
																													(BgL_classz00_1625);
																											}
																											BgL_arg1592z00_1097 =
																												BgL_res1965z00_1626;
																										}
																										BgL_arg1589z00_1096 =
																											VECTOR_REF
																											(BgL_arg1592z00_1097,
																											((long) 7));
																									}
																									BgL_auxz00_2470 =
																										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																										(BgL_arg1589z00_1096);
																								}
																								((((BgL_slotz00_bglt)
																											COBJECT
																											(BgL_new1096z00_1094))->
																										BgL_defaultzd2valuezd2) =
																									((obj_t) BgL_auxz00_2470),
																									BUNSPEC);
																							}
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_virtualzd2numzd2) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_virtualzd2overridezd2) =
																								((bool_t) ((bool_t) 0)),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_getterz00) =
																								((obj_t) BFALSE), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_setterz00) =
																								((obj_t) BFALSE), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1096z00_1094))->
																									BgL_userzd2infozd2) =
																								((obj_t) BFALSE), BUNSPEC);
																							BgL_arg1295z00_899 =
																								BgL_new1096z00_1094;
																						}
																						BgL_arg1291z00_897 =
																							MAKE_YOUNG_PAIR(
																							((obj_t) BgL_arg1295z00_899),
																							BgL_nslotsz00_820);
																					}
																					BgL_arg1292z00_898 =
																						(BgL_indexz00_823 + ((long) 1));
																					{
																						long BgL_indexz00_2486;
																						obj_t BgL_nslotsz00_2485;
																						obj_t BgL_clausesz00_2484;

																						BgL_clausesz00_2484 =
																							BgL_arg1290z00_896;
																						BgL_nslotsz00_2485 =
																							BgL_arg1291z00_897;
																						BgL_indexz00_2486 =
																							BgL_arg1292z00_898;
																						BgL_indexz00_823 =
																							BgL_indexz00_2486;
																						BgL_nslotsz00_820 =
																							BgL_nslotsz00_2485;
																						BgL_clausesz00_819 =
																							BgL_clausesz00_2484;
																						goto
																							BgL_zc3z04anonymousza31203ze3z87_824;
																					}
																				}
																			}
																		else
																			{	/* Object/slots.scm 272 */
																				goto BgL_tagzd2425zd2_833;
																			}
																	}
																else
																	{	/* Object/slots.scm 272 */
																		goto BgL_tagzd2425zd2_833;
																	}
															}
														else
															{	/* Object/slots.scm 272 */
																goto BgL_tagzd2425zd2_833;
															}
													}
											}
										else
											{	/* Object/slots.scm 272 */
												goto BgL_tagzd2425zd2_833;
											}
									}
								}
						}
					}
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzobject_slotsz00(obj_t BgL_oldz00_2004,
		obj_t BgL_newz00_2003, obj_t BgL_lstz00_1080)
	{
		{	/* Object/slots.scm 233 */
			if (NULLP(BgL_lstz00_1080))
				{	/* Object/slots.scm 235 */
					return BgL_lstz00_1080;
				}
			else
				{	/* Object/slots.scm 235 */
					if ((CAR(((obj_t) BgL_lstz00_1080)) == BgL_oldz00_2004))
						{	/* Object/slots.scm 238 */
							obj_t BgL_arg1573z00_1085;

							BgL_arg1573z00_1085 = CDR(((obj_t) BgL_lstz00_1080));
							return MAKE_YOUNG_PAIR(BgL_newz00_2003, BgL_arg1573z00_1085);
						}
					else
						{	/* Object/slots.scm 240 */
							obj_t BgL_arg1575z00_1086;
							obj_t BgL_arg1578z00_1087;

							BgL_arg1575z00_1086 = CAR(((obj_t) BgL_lstz00_1080));
							{	/* Object/slots.scm 240 */
								obj_t BgL_arg1582z00_1088;

								BgL_arg1582z00_1088 = CDR(((obj_t) BgL_lstz00_1080));
								BgL_arg1578z00_1087 =
									BGl_loopze70ze7zzobject_slotsz00(BgL_oldz00_2004,
									BgL_newz00_2003, BgL_arg1582z00_1088);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1575z00_1086, BgL_arg1578z00_1087);
						}
				}
		}

	}



/* slot-member?~0 */
	obj_t BGl_slotzd2memberzf3ze70zc6zzobject_slotsz00(obj_t BgL_idz00_992,
		obj_t BgL_slotzd2listzd2_993)
	{
		{	/* Object/slots.scm 177 */
			{
				obj_t BgL_slotzd2listzd2_996;

				BgL_slotzd2listzd2_996 = BgL_slotzd2listzd2_993;
			BgL_zc3z04anonymousza31385ze3z87_997:
				if (NULLP(BgL_slotzd2listzd2_996))
					{	/* Object/slots.scm 172 */
						return BFALSE;
					}
				else
					{	/* Object/slots.scm 172 */
						if (
							((((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt)
												CAR(
													((obj_t) BgL_slotzd2listzd2_996)))))->BgL_idz00) ==
								BgL_idz00_992))
							{	/* Object/slots.scm 174 */
								return CAR(((obj_t) BgL_slotzd2listzd2_996));
							}
						else
							{
								obj_t BgL_slotzd2listzd2_2514;

								BgL_slotzd2listzd2_2514 = CDR(((obj_t) BgL_slotzd2listzd2_996));
								BgL_slotzd2listzd2_996 = BgL_slotzd2listzd2_2514;
								goto BgL_zc3z04anonymousza31385ze3z87_997;
							}
					}
			}
		}

	}



/* make-attribute-slot~0 */
	obj_t BGl_makezd2attributezd2slotze70ze7zzobject_slotsz00(BgL_typez00_bglt
		BgL_classz00_2005, obj_t BgL_sz00_1006, obj_t BgL_slotzd2idzd2_1007,
		obj_t BgL_attrz00_1008, obj_t BgL_vgetz00_1009, obj_t BgL_vsetz00_1010,
		obj_t BgL_vnumz00_1011, bool_t BgL_voverz00_1012, long BgL_indexz00_1013)
	{
		{	/* Object/slots.scm 216 */
			{
				obj_t BgL_attrz00_906;
				obj_t BgL_attrz00_935;

				{	/* Object/slots.scm 182 */
					obj_t BgL_readozf3zf3_1015;

					BgL_readozf3zf3_1015 =
						BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long) 6)),
						BgL_attrz00_1008);
					{	/* Object/slots.scm 184 */
						bool_t BgL_test2185z00_2519;

						if (CBOOL(BgL_vsetz00_1010))
							{	/* Object/slots.scm 184 */
								if (CBOOL(BgL_vgetz00_1009))
									{	/* Object/slots.scm 184 */
										BgL_test2185z00_2519 = ((bool_t) 0);
									}
								else
									{	/* Object/slots.scm 184 */
										BgL_test2185z00_2519 = ((bool_t) 1);
									}
							}
						else
							{	/* Object/slots.scm 184 */
								BgL_test2185z00_2519 = ((bool_t) 0);
							}
						if (BgL_test2185z00_2519)
							{	/* Object/slots.scm 185 */
								obj_t BgL_arg1441z00_1017;
								obj_t BgL_arg1442z00_1018;
								obj_t BgL_arg1448z00_1019;

								BgL_arg1441z00_1017 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_sz00_1006);
								BgL_arg1442z00_1018 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_classz00_2005)))->BgL_idz00);
								BgL_arg1448z00_1019 = CAR(((obj_t) BgL_slotzd2idzd2_1007));
								{	/* Object/slots.scm 185 */
									obj_t BgL_list1449z00_1020;

									BgL_list1449z00_1020 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzf2locationz20zztools_errorz00
										(BgL_arg1441z00_1017, BgL_arg1442z00_1018,
										BGl_string2006z00zzobject_slotsz00, BgL_arg1448z00_1019,
										BgL_list1449z00_1020);
								}
							}
						else
							{	/* Object/slots.scm 190 */
								bool_t BgL_test2188z00_2531;

								if (CBOOL(BgL_vsetz00_1010))
									{	/* Object/slots.scm 190 */
										BgL_test2188z00_2531 = CBOOL(BgL_readozf3zf3_1015);
									}
								else
									{	/* Object/slots.scm 190 */
										BgL_test2188z00_2531 = ((bool_t) 0);
									}
								if (BgL_test2188z00_2531)
									{	/* Object/slots.scm 191 */
										obj_t BgL_arg1461z00_1022;
										obj_t BgL_arg1462z00_1023;
										obj_t BgL_arg1464z00_1024;

										BgL_arg1461z00_1022 =
											BGl_findzd2locationzd2zztools_locationz00(BgL_sz00_1006);
										BgL_arg1462z00_1023 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_classz00_2005)))->BgL_idz00);
										BgL_arg1464z00_1024 = CAR(((obj_t) BgL_slotzd2idzd2_1007));
										{	/* Object/slots.scm 191 */
											obj_t BgL_list1465z00_1025;

											BgL_list1465z00_1025 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											return
												BGl_userzd2errorzf2locationz20zztools_errorz00
												(BgL_arg1461z00_1022, BgL_arg1462z00_1023,
												BGl_string2007z00zzobject_slotsz00, BgL_arg1464z00_1024,
												BgL_list1465z00_1025);
										}
									}
								else
									{	/* Object/slots.scm 196 */
										bool_t BgL_test2190z00_2542;

										if (CBOOL(BgL_vgetz00_1009))
											{	/* Object/slots.scm 196 */
												if (CBOOL(BgL_vsetz00_1010))
													{	/* Object/slots.scm 196 */
														BgL_test2190z00_2542 = ((bool_t) 0);
													}
												else
													{	/* Object/slots.scm 196 */
														if (CBOOL(BgL_readozf3zf3_1015))
															{	/* Object/slots.scm 196 */
																BgL_test2190z00_2542 = ((bool_t) 0);
															}
														else
															{	/* Object/slots.scm 196 */
																BgL_test2190z00_2542 = ((bool_t) 1);
															}
													}
											}
										else
											{	/* Object/slots.scm 196 */
												BgL_test2190z00_2542 = ((bool_t) 0);
											}
										if (BgL_test2190z00_2542)
											{	/* Object/slots.scm 197 */
												obj_t BgL_arg1474z00_1027;
												obj_t BgL_arg1476z00_1028;
												obj_t BgL_arg1477z00_1029;

												BgL_arg1474z00_1027 =
													BGl_findzd2locationzd2zztools_locationz00
													(BgL_sz00_1006);
												BgL_arg1476z00_1028 =
													(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
																BgL_classz00_2005)))->BgL_idz00);
												BgL_arg1477z00_1029 =
													CAR(((obj_t) BgL_slotzd2idzd2_1007));
												{	/* Object/slots.scm 197 */
													obj_t BgL_list1478z00_1030;

													BgL_list1478z00_1030 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_arg1474z00_1027, BgL_arg1476z00_1028,
														BGl_string2008z00zzobject_slotsz00,
														BgL_arg1477z00_1029, BgL_list1478z00_1030);
												}
											}
										else
											{	/* Object/slots.scm 203 */
												BgL_slotz00_bglt BgL_new1094z00_1031;

												{	/* Object/slots.scm 204 */
													BgL_slotz00_bglt BgL_new1093z00_1033;

													BgL_new1093z00_1033 =
														((BgL_slotz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_slotz00_bgl))));
													{	/* Object/slots.scm 204 */
														long BgL_arg1493z00_1034;

														{	/* Object/slots.scm 204 */
															long BgL_res1958z00_1593;

															BgL_res1958z00_1593 =
																BGL_CLASS_INDEX(BGl_slotz00zzobject_slotsz00);
															BgL_arg1493z00_1034 = BgL_res1958z00_1593;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1093z00_1033),
															BgL_arg1493z00_1034);
													}
													BgL_new1094z00_1031 = BgL_new1093z00_1033;
												}
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_idz00) =
													((obj_t) CAR(((obj_t) BgL_slotzd2idzd2_1007))),
													BUNSPEC);
												{
													obj_t BgL_auxz00_2563;

													{	/* Object/slots.scm 206 */
														obj_t BgL_arg1489z00_1032;

														BgL_arg1489z00_1032 =
															CAR(((obj_t) BgL_slotzd2idzd2_1007));
														BgL_auxz00_2563 =
															BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00
															(BgL_arg1489z00_1032);
													}
													((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
															BgL_namez00) =
														((obj_t) BgL_auxz00_2563), BUNSPEC);
												}
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_srcz00) = ((obj_t) BgL_sz00_1006), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_classzd2ownerzd2) =
													((obj_t) ((obj_t) BgL_classz00_2005)), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_indexz00) =
													((long) BgL_indexz00_1013), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_typez00) =
													((obj_t)
														BGl_findzd2slotzd2typez00zzobject_slotsz00
														(BgL_slotzd2idzd2_1007, BgL_sz00_1006)), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_readzd2onlyzf3z21) =
													((bool_t) CBOOL(BgL_readozf3zf3_1015)), BUNSPEC);
												{
													obj_t BgL_auxz00_2576;

													BgL_attrz00_906 = BgL_attrz00_1008;
												BgL_zc3z04anonymousza31301ze3z87_907:
													if (PAIRP(BgL_attrz00_906))
														{

															{	/* Object/slots.scm 134 */
																obj_t BgL_ezd2362zd2_914;

																BgL_ezd2362zd2_914 = CAR(BgL_attrz00_906);
																if (PAIRP(BgL_ezd2362zd2_914))
																	{	/* Object/slots.scm 134 */
																		obj_t BgL_cdrzd2366zd2_916;

																		BgL_cdrzd2366zd2_916 =
																			CDR(BgL_ezd2362zd2_914);
																		if (
																			(CAR(BgL_ezd2362zd2_914) ==
																				CNST_TABLE_REF(((long) 4))))
																			{	/* Object/slots.scm 134 */
																				if (PAIRP(BgL_cdrzd2366zd2_916))
																					{	/* Object/slots.scm 134 */
																						if (NULLP(CDR
																								(BgL_cdrzd2366zd2_916)))
																							{	/* Object/slots.scm 134 */
																								BgL_auxz00_2576 =
																									CAR(BgL_cdrzd2366zd2_916);
																							}
																						else
																							{	/* Object/slots.scm 134 */
																							BgL_tagzd2361zd2_913:
																								{	/* Object/slots.scm 140 */
																									obj_t BgL_arg1324z00_934;

																									BgL_arg1324z00_934 =
																										CDR(
																										((obj_t) BgL_attrz00_906));
																									{
																										obj_t BgL_attrz00_2595;

																										BgL_attrz00_2595 =
																											BgL_arg1324z00_934;
																										BgL_attrz00_906 =
																											BgL_attrz00_2595;
																										goto
																											BgL_zc3z04anonymousza31301ze3z87_907;
																									}
																								}
																							}
																					}
																				else
																					{	/* Object/slots.scm 134 */
																						goto BgL_tagzd2361zd2_913;
																					}
																			}
																		else
																			{	/* Object/slots.scm 134 */
																				if (
																					(CAR(BgL_ezd2362zd2_914) ==
																						CNST_TABLE_REF(((long) 5))))
																					{	/* Object/slots.scm 134 */
																						if (PAIRP(BgL_cdrzd2366zd2_916))
																							{	/* Object/slots.scm 134 */
																								if (NULLP(CDR
																										(BgL_cdrzd2366zd2_916)))
																									{	/* Object/slots.scm 134 */
																										obj_t BgL_arg1316z00_930;

																										BgL_arg1316z00_930 =
																											CAR(BgL_cdrzd2366zd2_916);
																										BgL_auxz00_2576 =
																											MAKE_YOUNG_PAIR
																											(BGl_slotzd2inlinezd2markz00zzobject_slotsz00,
																											BgL_arg1316z00_930);
																									}
																								else
																									{	/* Object/slots.scm 134 */
																										goto BgL_tagzd2361zd2_913;
																									}
																							}
																						else
																							{	/* Object/slots.scm 134 */
																								goto BgL_tagzd2361zd2_913;
																							}
																					}
																				else
																					{	/* Object/slots.scm 134 */
																						goto BgL_tagzd2361zd2_913;
																					}
																			}
																	}
																else
																	{	/* Object/slots.scm 134 */
																		goto BgL_tagzd2361zd2_913;
																	}
															}
														}
													else
														{	/* Object/slots.scm 132 */
															BgL_auxz00_2576 =
																MAKE_YOUNG_PAIR(BINT(((long) 1)),
																BINT(((long) 2)));
														}
													((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
															BgL_defaultzd2valuezd2) =
														((obj_t) BgL_auxz00_2576), BUNSPEC);
												}
												{
													obj_t BgL_auxz00_2611;

													if (CBOOL(BgL_vgetz00_1009))
														{	/* Object/slots.scm 212 */
															BgL_auxz00_2611 = BgL_vnumz00_1011;
														}
													else
														{	/* Object/slots.scm 212 */
															BgL_auxz00_2611 = BINT(((long) -1));
														}
													((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
															BgL_virtualzd2numzd2) =
														((obj_t) BgL_auxz00_2611), BUNSPEC);
												}
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_virtualzd2overridezd2) =
													((bool_t) BgL_voverz00_1012), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_getterz00) =
													((obj_t) BgL_vgetz00_1009), BUNSPEC);
												((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
														BgL_setterz00) =
													((obj_t) BgL_vsetz00_1010), BUNSPEC);
												{
													obj_t BgL_auxz00_2619;

													BgL_attrz00_935 = BgL_attrz00_1008;
												BgL_zc3z04anonymousza31325ze3z87_936:
													if (PAIRP(BgL_attrz00_935))
														{

															{	/* Object/slots.scm 146 */
																obj_t BgL_ezd2387zd2_941;

																BgL_ezd2387zd2_941 = CAR(BgL_attrz00_935);
																if (PAIRP(BgL_ezd2387zd2_941))
																	{	/* Object/slots.scm 146 */
																		obj_t BgL_cdrzd2391zd2_943;

																		BgL_cdrzd2391zd2_943 =
																			CDR(BgL_ezd2387zd2_941);
																		if (
																			(CAR(BgL_ezd2387zd2_941) ==
																				CNST_TABLE_REF(((long) 3))))
																			{	/* Object/slots.scm 146 */
																				if (PAIRP(BgL_cdrzd2391zd2_943))
																					{	/* Object/slots.scm 146 */
																						if (NULLP(CDR
																								(BgL_cdrzd2391zd2_943)))
																							{	/* Object/slots.scm 146 */
																								BgL_auxz00_2619 =
																									CAR(BgL_cdrzd2391zd2_943);
																							}
																						else
																							{	/* Object/slots.scm 146 */
																							BgL_tagzd2386zd2_940:
																								{
																									obj_t BgL_attrz00_2636;

																									BgL_attrz00_2636 =
																										CDR(
																										((obj_t) BgL_attrz00_935));
																									BgL_attrz00_935 =
																										BgL_attrz00_2636;
																									goto
																										BgL_zc3z04anonymousza31325ze3z87_936;
																								}
																							}
																					}
																				else
																					{	/* Object/slots.scm 146 */
																						goto BgL_tagzd2386zd2_940;
																					}
																			}
																		else
																			{	/* Object/slots.scm 146 */
																				goto BgL_tagzd2386zd2_940;
																			}
																	}
																else
																	{	/* Object/slots.scm 146 */
																		goto BgL_tagzd2386zd2_940;
																	}
															}
														}
													else
														{	/* Object/slots.scm 144 */
															BgL_auxz00_2619 = BFALSE;
														}
													((((BgL_slotz00_bglt) COBJECT(BgL_new1094z00_1031))->
															BgL_userzd2infozd2) =
														((obj_t) BgL_auxz00_2619), BUNSPEC);
												}
												return ((obj_t) BgL_new1094z00_1031);
											}
									}
							}
					}
				}
			}
		}

	}



/* &make-class-slots */
	obj_t BGl_z62makezd2classzd2slotsz62zzobject_slotsz00(obj_t BgL_envz00_1854,
		obj_t BgL_classz00_1855, obj_t BgL_clausesz00_1856, obj_t BgL_superz00_1857,
		obj_t BgL_vnumz00_1858, obj_t BgL_srcz00_1859)
	{
		{	/* Object/slots.scm 128 */
			return
				BGl_makezd2classzd2slotsz00zzobject_slotsz00(
				((BgL_typez00_bglt) BgL_classz00_1855), BgL_clausesz00_1856,
				BgL_superz00_1857, CINT(BgL_vnumz00_1858), BgL_srcz00_1859);
		}

	}



/* make-java-class-slots */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(BgL_typez00_bglt
		BgL_classz00_68, obj_t BgL_clausesz00_69, obj_t BgL_superz00_70,
		obj_t BgL_srcz00_71)
	{
		{	/* Object/slots.scm 323 */
			{	/* Object/slots.scm 325 */
				obj_t BgL_locz00_1109;

				BgL_locz00_1109 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_71);
				{
					obj_t BgL_idz00_1149;
					obj_t BgL_jnamez00_1150;
					obj_t BgL_readozf3zf3_1151;
					obj_t BgL_srcz00_1152;
					obj_t BgL_identz00_1136;
					obj_t BgL_jnamez00_1137;
					obj_t BgL_readozf3zf3_1138;
					obj_t BgL_sz00_1139;
					long BgL_indexz00_1140;

					{	/* Object/slots.scm 356 */
						obj_t BgL_sslotsz00_1112;

						if (BGl_isazf3zf3zz__objectz00(BgL_superz00_70,
								BGl_typez00zztype_typez00))
							{	/* Object/slots.scm 357 */
								if (BGl_isazf3zf3zz__objectz00(BgL_superz00_70,
										BGl_jclassz00zzobject_classz00))
									{	/* Object/slots.scm 362 */
										obj_t BgL_arg1611z00_1135;

										{
											BgL_jclassz00_bglt BgL_auxz00_2649;

											{
												obj_t BgL_auxz00_2650;

												{	/* Object/slots.scm 362 */
													BgL_objectz00_bglt BgL_tmpz00_2651;

													BgL_tmpz00_2651 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_superz00_70));
													BgL_auxz00_2650 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_2651);
												}
												BgL_auxz00_2649 =
													((BgL_jclassz00_bglt) BgL_auxz00_2650);
											}
											BgL_arg1611z00_1135 =
												(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_2649))->
												BgL_slotsz00);
										}
										BgL_sslotsz00_1112 = bgl_reverse(BgL_arg1611z00_1135);
									}
								else
									{	/* Object/slots.scm 359 */
										BgL_sslotsz00_1112 = BNIL;
									}
							}
						else
							{	/* Object/slots.scm 357 */
								BgL_sslotsz00_1112 = BNIL;
							}
						{	/* Object/slots.scm 363 */
							long BgL_g1104z00_1113;

							BgL_g1104z00_1113 = bgl_list_length(BgL_sslotsz00_1112);
							{
								obj_t BgL_clausesz00_1115;
								obj_t BgL_resz00_1116;
								long BgL_indexz00_1117;

								BgL_clausesz00_1115 = BgL_clausesz00_69;
								BgL_resz00_1116 = BgL_sslotsz00_1112;
								BgL_indexz00_1117 = BgL_g1104z00_1113;
							BgL_zc3z04anonymousza31594ze3z87_1118:
								if (NULLP(BgL_clausesz00_1115))
									{	/* Object/slots.scm 366 */
										return BgL_resz00_1116;
									}
								else
									{	/* Object/slots.scm 368 */
										obj_t BgL_sz00_1120;

										BgL_sz00_1120 = CAR(((obj_t) BgL_clausesz00_1115));
										{	/* Object/slots.scm 368 */
											obj_t BgL_srcz00_1121;

											BgL_srcz00_1121 = CAR(((obj_t) BgL_sz00_1120));
											{	/* Object/slots.scm 369 */
												obj_t BgL_idz00_1122;

												{	/* Object/slots.scm 370 */
													obj_t BgL_pairz00_1700;

													BgL_pairz00_1700 = CDR(((obj_t) BgL_sz00_1120));
													BgL_idz00_1122 = CAR(BgL_pairz00_1700);
												}
												{	/* Object/slots.scm 370 */
													obj_t BgL_jnamez00_1123;

													{	/* Object/slots.scm 371 */
														obj_t BgL_pairz00_1706;

														{	/* Object/slots.scm 371 */
															obj_t BgL_pairz00_1705;

															BgL_pairz00_1705 = CDR(((obj_t) BgL_sz00_1120));
															BgL_pairz00_1706 = CDR(BgL_pairz00_1705);
														}
														BgL_jnamez00_1123 = CAR(BgL_pairz00_1706);
													}
													{	/* Object/slots.scm 371 */
														obj_t BgL_modz00_1124;

														{	/* Object/slots.scm 372 */
															obj_t BgL_pairz00_1714;

															{	/* Object/slots.scm 372 */
																obj_t BgL_pairz00_1713;

																{	/* Object/slots.scm 372 */
																	obj_t BgL_pairz00_1712;

																	BgL_pairz00_1712 =
																		CDR(((obj_t) BgL_sz00_1120));
																	BgL_pairz00_1713 = CDR(BgL_pairz00_1712);
																}
																BgL_pairz00_1714 = CDR(BgL_pairz00_1713);
															}
															BgL_modz00_1124 = CAR(BgL_pairz00_1714);
														}
														{	/* Object/slots.scm 372 */
															obj_t BgL_readozf3zf3_1125;

															BgL_readozf3zf3_1125 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(CNST_TABLE_REF(((long) 9)), BgL_modz00_1124);
															{	/* Object/slots.scm 373 */

																if (CBOOL
																	(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																		(CNST_TABLE_REF(((long) 10)),
																			BgL_modz00_1124)))
																	{	/* Object/slots.scm 374 */
																		BgL_idz00_1149 = BgL_idz00_1122;
																		BgL_jnamez00_1150 = BgL_jnamez00_1123;
																		BgL_readozf3zf3_1151 = BgL_readozf3zf3_1125;
																		BgL_srcz00_1152 = BgL_srcz00_1121;
																		{	/* Object/slots.scm 340 */
																			obj_t BgL_locz00_1154;

																			BgL_locz00_1154 =
																				BGl_findzd2locationzf2locz20zztools_locationz00
																				(BgL_srcz00_1152, BgL_locz00_1109);
																			{	/* Object/slots.scm 340 */
																				obj_t BgL_slotzd2idzd2_1155;

																				BgL_slotzd2idzd2_1155 =
																					BGl_parsezd2idzd2zzast_identz00
																					(BgL_idz00_1149, BgL_locz00_1154);
																				{	/* Object/slots.scm 341 */
																					obj_t BgL_lzd2idzd2_1156;

																					if (
																						((((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											BgL_classz00_68)))->
																								BgL_idz00) ==
																							CNST_TABLE_REF(((long) 7))))
																						{	/* Object/slots.scm 342 */
																							BgL_lzd2idzd2_1156 =
																								CAR(BgL_slotzd2idzd2_1155);
																						}
																					else
																						{	/* Object/slots.scm 344 */
																							obj_t BgL_arg1662z00_1168;
																							obj_t BgL_arg1663z00_1169;

																							BgL_arg1662z00_1168 =
																								(((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											BgL_classz00_68)))->
																								BgL_idz00);
																							BgL_arg1663z00_1169 =
																								CAR(BgL_slotzd2idzd2_1155);
																							{	/* Object/slots.scm 344 */
																								obj_t BgL_list1664z00_1170;

																								{	/* Object/slots.scm 344 */
																									obj_t BgL_arg1667z00_1171;

																									{	/* Object/slots.scm 344 */
																										obj_t BgL_arg1669z00_1172;

																										BgL_arg1669z00_1172 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1663z00_1169,
																											BNIL);
																										BgL_arg1667z00_1171 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													8)),
																											BgL_arg1669z00_1172);
																									}
																									BgL_list1664z00_1170 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1662z00_1168,
																										BgL_arg1667z00_1171);
																								}
																								BgL_lzd2idzd2_1156 =
																									BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																									(BgL_list1664z00_1170);
																						}}
																					{	/* Object/slots.scm 342 */
																						obj_t BgL_tzd2idzd2_1157;

																						{	/* Object/slots.scm 345 */
																							bool_t BgL_test2213z00_2699;

																							{	/* Object/slots.scm 345 */
																								obj_t BgL_arg1644z00_1165;

																								BgL_arg1644z00_1165 =
																									CDR(BgL_slotzd2idzd2_1155);
																								BgL_test2213z00_2699 =
																									(BgL_arg1644z00_1165 ==
																									BGl_za2_za2z00zztype_cachez00);
																							}
																							if (BgL_test2213z00_2699)
																								{	/* Object/slots.scm 345 */
																									BgL_tzd2idzd2_1157 =
																										BGl_za2objza2z00zztype_cachez00;
																								}
																							else
																								{	/* Object/slots.scm 345 */
																									BgL_tzd2idzd2_1157 =
																										CDR(BgL_slotzd2idzd2_1155);
																								}
																						}
																						{	/* Object/slots.scm 348 */

																							BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00
																								(((BgL_typez00_bglt)
																									BgL_tzd2idzd2_1157),
																								BgL_srcz00_1152);
																							{	/* Object/slots.scm 350 */
																								BgL_globalz00_bglt
																									BgL_gz00_1159;
																								{	/* Object/slots.scm 351 */
																									obj_t BgL_arg1639z00_1162;

																									BgL_arg1639z00_1162 =
																										(((BgL_typez00_bglt)
																											COBJECT((
																													(BgL_typez00_bglt)
																													BgL_tzd2idzd2_1157)))->
																										BgL_idz00);
																									BgL_gz00_1159 =
																										BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																										(BgL_lzd2idzd2_1156, BFALSE,
																										BgL_jnamez00_1150,
																										BgL_arg1639z00_1162,
																										CBOOL(BgL_readozf3zf3_1151),
																										BgL_srcz00_1152, BFALSE);
																								}
																								{	/* Object/slots.scm 352 */
																									obj_t BgL_arg1631z00_1160;

																									BgL_arg1631z00_1160 =
																										(((BgL_typez00_bglt)
																											COBJECT((
																													(BgL_typez00_bglt)
																													BgL_classz00_68)))->
																										BgL_idz00);
																									((((BgL_globalz00_bglt)
																												COBJECT
																												(BgL_gz00_1159))->
																											BgL_modulez00) =
																										((obj_t)
																											BgL_arg1631z00_1160),
																										BUNSPEC);
																								}
																								{	/* Object/slots.scm 353 */
																									obj_t BgL_arg1634z00_1161;

																									BgL_arg1634z00_1161 =
																										(((BgL_typez00_bglt)
																											COBJECT((
																													(BgL_typez00_bglt)
																													BgL_classz00_68)))->
																										BgL_namez00);
																									((((BgL_globalz00_bglt)
																												COBJECT
																												(BgL_gz00_1159))->
																											BgL_jvmzd2typezd2namez00)
																										=
																										((obj_t) ((obj_t)
																												BgL_arg1634z00_1161)),
																										BUNSPEC);
																								}
																								BgL_gz00_1159;
																							}
																						}
																					}
																				}
																			}
																		}
																		{	/* Object/slots.scm 377 */
																			obj_t BgL_arg1597z00_1127;

																			BgL_arg1597z00_1127 =
																				CDR(((obj_t) BgL_clausesz00_1115));
																			{
																				obj_t BgL_clausesz00_2718;

																				BgL_clausesz00_2718 =
																					BgL_arg1597z00_1127;
																				BgL_clausesz00_1115 =
																					BgL_clausesz00_2718;
																				goto
																					BgL_zc3z04anonymousza31594ze3z87_1118;
																			}
																		}
																	}
																else
																	{	/* Object/slots.scm 378 */
																		obj_t BgL_arg1599z00_1128;
																		obj_t BgL_arg1604z00_1129;
																		long BgL_arg1605z00_1130;

																		BgL_arg1599z00_1128 =
																			CDR(((obj_t) BgL_clausesz00_1115));
																		{	/* Object/slots.scm 379 */
																			BgL_slotz00_bglt BgL_arg1606z00_1131;

																			BgL_identz00_1136 = BgL_idz00_1122;
																			BgL_jnamez00_1137 = BgL_jnamez00_1123;
																			BgL_readozf3zf3_1138 =
																				BgL_readozf3zf3_1125;
																			BgL_sz00_1139 = BgL_srcz00_1121;
																			BgL_indexz00_1140 = BgL_indexz00_1117;
																			{	/* Object/slots.scm 328 */
																				obj_t BgL_locz00_1142;

																				BgL_locz00_1142 =
																					BGl_findzd2locationzf2locz20zztools_locationz00
																					(BgL_sz00_1139, BgL_locz00_1109);
																				{	/* Object/slots.scm 328 */
																					obj_t BgL_slotzd2idzd2_1143;

																					BgL_slotzd2idzd2_1143 =
																						BGl_parsezd2idzd2zzast_identz00
																						(BgL_identz00_1136,
																						BgL_locz00_1142);
																					{	/* Object/slots.scm 329 */

																						{	/* Object/slots.scm 330 */
																							BgL_slotz00_bglt
																								BgL_new1103z00_1144;
																							{	/* Object/slots.scm 331 */
																								BgL_slotz00_bglt
																									BgL_new1102z00_1147;
																								BgL_new1102z00_1147 =
																									((BgL_slotz00_bglt)
																									BOBJECT(GC_MALLOC(sizeof
																											(struct
																												BgL_slotz00_bgl))));
																								{	/* Object/slots.scm 331 */
																									long BgL_arg1626z00_1148;

																									{	/* Object/slots.scm 331 */
																										long BgL_res1980z00_1670;

																										BgL_res1980z00_1670 =
																											BGL_CLASS_INDEX
																											(BGl_slotz00zzobject_slotsz00);
																										BgL_arg1626z00_1148 =
																											BgL_res1980z00_1670;
																									}
																									BGL_OBJECT_CLASS_NUM_SET(
																										((BgL_objectz00_bglt)
																											BgL_new1102z00_1147),
																										BgL_arg1626z00_1148);
																								}
																								BgL_new1103z00_1144 =
																									BgL_new1102z00_1147;
																							}
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_idz00) =
																								((obj_t)
																									CAR(BgL_slotzd2idzd2_1143)),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_namez00) =
																								((obj_t) BgL_jnamez00_1137),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_srcz00) =
																								((obj_t) BgL_sz00_1139),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_classzd2ownerzd2) =
																								((obj_t) ((obj_t)
																										BgL_classz00_68)), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_indexz00) =
																								((long) BgL_indexz00_1140),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_typez00) =
																								((obj_t)
																									BGl_findzd2slotzd2typez00zzobject_slotsz00
																									(BgL_slotzd2idzd2_1143,
																										BgL_srcz00_71)), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_readzd2onlyzf3z21) =
																								((bool_t)
																									CBOOL(BgL_readozf3zf3_1138)),
																								BUNSPEC);
																							{
																								obj_t BgL_auxz00_2738;

																								{	/* Object/slots.scm 335 */
																									obj_t BgL_arg1613z00_1145;

																									{	/* Object/slots.scm 335 */
																										obj_t BgL_arg1624z00_1146;

																										{	/* Object/slots.scm 335 */
																											obj_t BgL_res1981z00_1675;

																											{	/* Object/slots.scm 335 */
																												obj_t BgL_classz00_1674;

																												BgL_classz00_1674 =
																													BGl_slotz00zzobject_slotsz00;
																												BgL_res1981z00_1675 =
																													BGL_CLASS_ALL_FIELDS
																													(BgL_classz00_1674);
																											}
																											BgL_arg1624z00_1146 =
																												BgL_res1981z00_1675;
																										}
																										BgL_arg1613z00_1145 =
																											VECTOR_REF
																											(BgL_arg1624z00_1146,
																											((long) 7));
																									}
																									BgL_auxz00_2738 =
																										BGl_classzd2fieldzd2defaultzd2valuezd2zz__objectz00
																										(BgL_arg1613z00_1145);
																								}
																								((((BgL_slotz00_bglt)
																											COBJECT
																											(BgL_new1103z00_1144))->
																										BgL_defaultzd2valuezd2) =
																									((obj_t) BgL_auxz00_2738),
																									BUNSPEC);
																							}
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_virtualzd2numzd2) =
																								((obj_t) BINT(((long) -1))),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_virtualzd2overridezd2) =
																								((bool_t) ((bool_t) 0)),
																								BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_getterz00) =
																								((obj_t) BFALSE), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_setterz00) =
																								((obj_t) BFALSE), BUNSPEC);
																							((((BgL_slotz00_bglt)
																										COBJECT
																										(BgL_new1103z00_1144))->
																									BgL_userzd2infozd2) =
																								((obj_t) BUNSPEC), BUNSPEC);
																							BgL_arg1606z00_1131 =
																								BgL_new1103z00_1144;
																			}}}}
																			BgL_arg1604z00_1129 =
																				MAKE_YOUNG_PAIR(
																				((obj_t) BgL_arg1606z00_1131),
																				BgL_resz00_1116);
																		}
																		BgL_arg1605z00_1130 =
																			(((long) 1) + BgL_indexz00_1117);
																		{
																			long BgL_indexz00_2754;
																			obj_t BgL_resz00_2753;
																			obj_t BgL_clausesz00_2752;

																			BgL_clausesz00_2752 = BgL_arg1599z00_1128;
																			BgL_resz00_2753 = BgL_arg1604z00_1129;
																			BgL_indexz00_2754 = BgL_arg1605z00_1130;
																			BgL_indexz00_1117 = BgL_indexz00_2754;
																			BgL_resz00_1116 = BgL_resz00_2753;
																			BgL_clausesz00_1115 = BgL_clausesz00_2752;
																			goto
																				BgL_zc3z04anonymousza31594ze3z87_1118;
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
			}
		}

	}



/* &make-java-class-slots */
	obj_t BGl_z62makezd2javazd2classzd2slotszb0zzobject_slotsz00(obj_t
		BgL_envz00_1860, obj_t BgL_classz00_1861, obj_t BgL_clausesz00_1862,
		obj_t BgL_superz00_1863, obj_t BgL_srcz00_1864)
	{
		{	/* Object/slots.scm 323 */
			return
				BGl_makezd2javazd2classzd2slotszd2zzobject_slotsz00(
				((BgL_typez00_bglt) BgL_classz00_1861), BgL_clausesz00_1862,
				BgL_superz00_1863, BgL_srcz00_1864);
		}

	}



/* find-slot-type */
	obj_t BGl_findzd2slotzd2typez00zzobject_slotsz00(obj_t BgL_slotzd2idzd2_72,
		obj_t BgL_srcz00_73)
	{
		{	/* Object/slots.scm 386 */
			{	/* Object/slots.scm 387 */
				obj_t BgL_tz00_1176;

				{	/* Object/slots.scm 387 */
					bool_t BgL_test2214z00_2757;

					{	/* Object/slots.scm 387 */
						obj_t BgL_arg1686z00_1179;

						BgL_arg1686z00_1179 = CDR(((obj_t) BgL_slotzd2idzd2_72));
						BgL_test2214z00_2757 =
							(BgL_arg1686z00_1179 == BGl_za2_za2z00zztype_cachez00);
					}
					if (BgL_test2214z00_2757)
						{	/* Object/slots.scm 387 */
							BgL_tz00_1176 = BGl_za2objza2z00zztype_cachez00;
						}
					else
						{	/* Object/slots.scm 387 */
							BgL_tz00_1176 = CDR(((obj_t) BgL_slotzd2idzd2_72));
						}
				}
				BGl_ensurezd2typezd2definedz12z12zzobject_slotsz00(
					((BgL_typez00_bglt) BgL_tz00_1176), BgL_srcz00_73);
				return BgL_tz00_1176;
			}
		}

	}



/* scheme-symbol->c-string */
	obj_t BGl_schemezd2symbolzd2ze3czd2stringz31zzobject_slotsz00(obj_t
		BgL_symbolz00_74)
	{
		{	/* Object/slots.scm 394 */
			if (CBOOL(BGl_za2astzd2casezd2sensitiveza2z00zzengine_paramz00))
				{	/* Object/slots.scm 395 */
					return BGl_idzd2ze3namez31zzast_identz00(BgL_symbolz00_74);
				}
			else
				{	/* Object/slots.scm 395 */
					return
						BGl_stringzd2downcasezd2zz__r4_strings_6_7z00
						(BGl_idzd2ze3namez31zzast_identz00(BgL_symbolz00_74));
				}
		}

	}



/* get-local-virtual-slots-number */
	BGL_EXPORTED_DEF obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_typez00_bglt BgL_classz00_75, obj_t BgL_slotsz00_76)
	{
		{	/* Object/slots.scm 411 */
			{
				obj_t BgL_slotsz00_1182;
				obj_t BgL_numz00_1183;

				{	/* Object/slots.scm 412 */
					long BgL_tmpz00_2770;

					BgL_slotsz00_1182 = BgL_slotsz00_76;
					BgL_numz00_1183 = BINT(((long) -1));
				BgL_zc3z04anonymousza31688ze3z87_1184:
					if (NULLP(BgL_slotsz00_1182))
						{	/* Object/slots.scm 415 */
							BgL_tmpz00_2770 = ((long) CINT(BgL_numz00_1183) + ((long) 1));
						}
					else
						{	/* Object/slots.scm 415 */
							if (
								((long) CINT(
										(((BgL_slotz00_bglt) COBJECT(
													((BgL_slotz00_bglt)
														CAR(
															((obj_t) BgL_slotsz00_1182)))))->
											BgL_virtualzd2numzd2)) >= ((long) 0)))
								{	/* Object/slots.scm 418 */
									obj_t BgL_lnumz00_1188;

									BgL_lnumz00_1188 =
										(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt)
													CAR(
														((obj_t) BgL_slotsz00_1182)))))->
										BgL_virtualzd2numzd2);
									{
										obj_t BgL_numz00_2789;
										obj_t BgL_slotsz00_2786;

										BgL_slotsz00_2786 = CDR(((obj_t) BgL_slotsz00_1182));
										if (
											((long) CINT(BgL_lnumz00_1188) >
												(long) CINT(BgL_numz00_1183)))
											{	/* Object/slots.scm 420 */
												BgL_numz00_2789 = BgL_lnumz00_1188;
											}
										else
											{	/* Object/slots.scm 420 */
												BgL_numz00_2789 = BgL_numz00_1183;
											}
										BgL_numz00_1183 = BgL_numz00_2789;
										BgL_slotsz00_1182 = BgL_slotsz00_2786;
										goto BgL_zc3z04anonymousza31688ze3z87_1184;
									}
								}
							else
								{
									obj_t BgL_slotsz00_2794;

									BgL_slotsz00_2794 = CDR(((obj_t) BgL_slotsz00_1182));
									BgL_slotsz00_1182 = BgL_slotsz00_2794;
									goto BgL_zc3z04anonymousza31688ze3z87_1184;
								}
						}
					return BINT(BgL_tmpz00_2770);
				}
			}
		}

	}



/* &get-local-virtual-slots-number */
	obj_t BGl_z62getzd2localzd2virtualzd2slotszd2numberz62zzobject_slotsz00(obj_t
		BgL_envz00_1865, obj_t BgL_classz00_1866, obj_t BgL_slotsz00_1867)
	{
		{	/* Object/slots.scm 411 */
			return
				BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00(
				((BgL_typez00_bglt) BgL_classz00_1866), BgL_slotsz00_1867);
		}

	}



/* make-class-make-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t BgL_slotsz00_77)
	{
		{	/* Object/slots.scm 429 */
			{
				obj_t BgL_slotsz00_1198;
				obj_t BgL_formalsz00_1199;

				BgL_slotsz00_1198 = BgL_slotsz00_77;
				BgL_formalsz00_1199 = BNIL;
			BgL_zc3z04anonymousza31708ze3z87_1200:
				if (NULLP(BgL_slotsz00_1198))
					{	/* Object/slots.scm 433 */
						return bgl_reverse_bang(BgL_formalsz00_1199);
					}
				else
					{	/* Object/slots.scm 433 */
						if (
							((long) CINT(
									(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt)
													CAR(
														((obj_t) BgL_slotsz00_1198)))))->
										BgL_virtualzd2numzd2)) >= ((long) 0)))
							{	/* Object/slots.scm 436 */
								obj_t BgL_arg1719z00_1204;

								BgL_arg1719z00_1204 = CDR(((obj_t) BgL_slotsz00_1198));
								{
									obj_t BgL_slotsz00_2813;

									BgL_slotsz00_2813 = BgL_arg1719z00_1204;
									BgL_slotsz00_1198 = BgL_slotsz00_2813;
									goto BgL_zc3z04anonymousza31708ze3z87_1200;
								}
							}
						else
							{	/* Object/slots.scm 438 */
								obj_t BgL_arg1725z00_1205;
								obj_t BgL_arg1726z00_1206;

								BgL_arg1725z00_1205 = CDR(((obj_t) BgL_slotsz00_1198));
								{	/* Object/slots.scm 439 */
									obj_t BgL_arg1727z00_1207;

									{	/* Object/slots.scm 439 */
										obj_t BgL_arg1728z00_1208;

										{	/* Object/slots.scm 439 */
											obj_t BgL_arg1729z00_1209;

											BgL_arg1729z00_1209 =
												(((BgL_slotz00_bglt) COBJECT(
														((BgL_slotz00_bglt)
															CAR(((obj_t) BgL_slotsz00_1198)))))->BgL_idz00);
											BgL_arg1728z00_1208 =
												BGl_gensymz00zz__r4_symbols_6_4z00(BgL_arg1729z00_1209);
										}
										BgL_arg1727z00_1207 =
											BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
											(BgL_arg1728z00_1208);
									}
									BgL_arg1726z00_1206 =
										MAKE_YOUNG_PAIR(BgL_arg1727z00_1207, BgL_formalsz00_1199);
								}
								{
									obj_t BgL_formalsz00_2824;
									obj_t BgL_slotsz00_2823;

									BgL_slotsz00_2823 = BgL_arg1725z00_1205;
									BgL_formalsz00_2824 = BgL_arg1726z00_1206;
									BgL_formalsz00_1199 = BgL_formalsz00_2824;
									BgL_slotsz00_1198 = BgL_slotsz00_2823;
									goto BgL_zc3z04anonymousza31708ze3z87_1200;
								}
							}
					}
			}
		}

	}



/* &make-class-make-formals */
	obj_t BGl_z62makezd2classzd2makezd2formalszb0zzobject_slotsz00(obj_t
		BgL_envz00_1868, obj_t BgL_slotsz00_1869)
	{
		{	/* Object/slots.scm 429 */
			return
				BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
				(BgL_slotsz00_1869);
		}

	}



/* make-class-make-typed-formals */
	BGL_EXPORTED_DEF obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t
		BgL_idsz00_78, obj_t BgL_slotsz00_79)
	{
		{	/* Object/slots.scm 445 */
			{
				obj_t BgL_slotsz00_1215;
				obj_t BgL_idsz00_1216;
				obj_t BgL_formalsz00_1217;

				BgL_slotsz00_1215 = BgL_slotsz00_79;
				BgL_idsz00_1216 = BgL_idsz00_78;
				BgL_formalsz00_1217 = BNIL;
			BgL_zc3z04anonymousza31733ze3z87_1218:
				if (NULLP(BgL_slotsz00_1215))
					{	/* Object/slots.scm 450 */
						return bgl_reverse_bang(BgL_formalsz00_1217);
					}
				else
					{	/* Object/slots.scm 450 */
						if (
							((long) CINT(
									(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt)
													CAR(
														((obj_t) BgL_slotsz00_1215)))))->
										BgL_virtualzd2numzd2)) >= ((long) 0)))
							{	/* Object/slots.scm 453 */
								obj_t BgL_arg1740z00_1222;

								BgL_arg1740z00_1222 = CDR(((obj_t) BgL_slotsz00_1215));
								{
									obj_t BgL_slotsz00_2838;

									BgL_slotsz00_2838 = BgL_arg1740z00_1222;
									BgL_slotsz00_1215 = BgL_slotsz00_2838;
									goto BgL_zc3z04anonymousza31733ze3z87_1218;
								}
							}
						else
							{	/* Object/slots.scm 455 */
								obj_t BgL_arg1741z00_1223;
								obj_t BgL_arg1742z00_1224;
								obj_t BgL_arg1743z00_1225;

								BgL_arg1741z00_1223 = CDR(((obj_t) BgL_slotsz00_1215));
								BgL_arg1742z00_1224 = CDR(((obj_t) BgL_idsz00_1216));
								{	/* Object/slots.scm 457 */
									obj_t BgL_arg1744z00_1226;

									{	/* Object/slots.scm 457 */
										obj_t BgL_arg1745z00_1227;
										obj_t BgL_arg1746z00_1228;

										{	/* Object/slots.scm 457 */
											obj_t BgL_arg1747z00_1229;

											BgL_arg1747z00_1229 = CAR(((obj_t) BgL_idsz00_1216));
											BgL_arg1745z00_1227 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BgL_arg1747z00_1229);
										}
										BgL_arg1746z00_1228 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt)
																		CAR(
																			((obj_t) BgL_slotsz00_1215)))))->
															BgL_typez00))))->BgL_idz00);
										BgL_arg1744z00_1226 =
											BGl_makezd2typedzd2identz00zzast_identz00
											(BgL_arg1745z00_1227, BgL_arg1746z00_1228);
									}
									BgL_arg1743z00_1225 =
										MAKE_YOUNG_PAIR(BgL_arg1744z00_1226, BgL_formalsz00_1217);
								}
								{
									obj_t BgL_formalsz00_2856;
									obj_t BgL_idsz00_2855;
									obj_t BgL_slotsz00_2854;

									BgL_slotsz00_2854 = BgL_arg1741z00_1223;
									BgL_idsz00_2855 = BgL_arg1742z00_1224;
									BgL_formalsz00_2856 = BgL_arg1743z00_1225;
									BgL_formalsz00_1217 = BgL_formalsz00_2856;
									BgL_idsz00_1216 = BgL_idsz00_2855;
									BgL_slotsz00_1215 = BgL_slotsz00_2854;
									goto BgL_zc3z04anonymousza31733ze3z87_1218;
								}
							}
					}
			}
		}

	}



/* &make-class-make-typed-formals */
	obj_t BGl_z62makezd2classzd2makezd2typedzd2formalsz62zzobject_slotsz00(obj_t
		BgL_envz00_1870, obj_t BgL_idsz00_1871, obj_t BgL_slotsz00_1872)
	{
		{	/* Object/slots.scm 445 */
			return
				BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
				(BgL_idsz00_1871, BgL_slotsz00_1872);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			{	/* Object/slots.scm 33 */
				obj_t BgL_arg1761z00_1237;
				obj_t BgL_arg1768z00_1238;

				{	/* Object/slots.scm 33 */
					obj_t BgL_v1164z00_1261;

					BgL_v1164z00_1261 = create_vector(((long) 13));
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1778z00_1262;

						BgL_arg1778z00_1262 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc2010z00zzobject_slotsz00,
							BGl_proc2009z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 11)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 0), BgL_arg1778z00_1262);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1790z00_1272;

						BgL_arg1790z00_1272 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc2012z00zzobject_slotsz00,
							BGl_proc2011z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 1), BgL_arg1790z00_1272);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1801z00_1282;

						BgL_arg1801z00_1282 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc2014z00zzobject_slotsz00,
							BGl_proc2013z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 2), BgL_arg1801z00_1282);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1820z00_1292;

						BgL_arg1820z00_1292 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2016z00zzobject_slotsz00,
							BGl_proc2015z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 3), BgL_arg1820z00_1292);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1825z00_1302;

						BgL_arg1825z00_1302 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc2018z00zzobject_slotsz00,
							BGl_proc2017z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 18)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 4), BgL_arg1825z00_1302);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1830z00_1312;

						BgL_arg1830z00_1312 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc2020z00zzobject_slotsz00,
							BGl_proc2019z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 5), BgL_arg1830z00_1312);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1835z00_1322;

						BgL_arg1835z00_1322 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2023z00zzobject_slotsz00,
							BGl_proc2022z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2021z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 6), BgL_arg1835z00_1322);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1845z00_1335;

						BgL_arg1845z00_1335 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2026z00zzobject_slotsz00,
							BGl_proc2025z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2024z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 7), BgL_arg1845z00_1335);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1852z00_1348;

						BgL_arg1852z00_1348 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2029z00zzobject_slotsz00,
							BGl_proc2028z00zzobject_slotsz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2027z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 8), BgL_arg1852z00_1348);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1861z00_1361;

						BgL_arg1861z00_1361 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2032z00zzobject_slotsz00,
							BGl_proc2031z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2030z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 9), BgL_arg1861z00_1361);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1870z00_1374;

						BgL_arg1870z00_1374 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2035z00zzobject_slotsz00,
							BGl_proc2034z00zzobject_slotsz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2033z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 10), BgL_arg1870z00_1374);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1877z00_1387;

						BgL_arg1877z00_1387 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2038z00zzobject_slotsz00,
							BGl_proc2037z00zzobject_slotsz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2036z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 11), BgL_arg1877z00_1387);
					}
					{	/* Object/slots.scm 33 */
						obj_t BgL_arg1885z00_1400;

						BgL_arg1885z00_1400 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2041z00zzobject_slotsz00,
							BGl_proc2040z00zzobject_slotsz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2039z00zzobject_slotsz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1164z00_1261, ((long) 12), BgL_arg1885z00_1400);
					}
					BgL_arg1761z00_1237 = BgL_v1164z00_1261;
				}
				{	/* Object/slots.scm 33 */
					obj_t BgL_v1165z00_1413;

					BgL_v1165z00_1413 = create_vector(((long) 0));
					BgL_arg1768z00_1238 = BgL_v1165z00_1413;
				}
				return (BGl_slotz00zzobject_slotsz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
						CNST_TABLE_REF(((long) 29)), BGl_objectz00zz__objectz00,
						((long) 49096), BGl_proc2044z00zzobject_slotsz00,
						BGl_proc2043z00zzobject_slotsz00, BFALSE,
						BGl_proc2042z00zzobject_slotsz00, BFALSE, BgL_arg1761z00_1237,
						BgL_arg1768z00_1238), BUNSPEC);
		}}

	}



/* &<@anonymous:1776> */
	obj_t BGl_z62zc3z04anonymousza31776ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1909, obj_t BgL_new1078z00_1910)
	{
		{	/* Object/slots.scm 33 */
			{
				BgL_slotz00_bglt BgL_auxz00_2915;

				((((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_new1078z00_1910)))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 30))), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_namez00) =
					((obj_t) BGl_string2045z00zzobject_slotsz00), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_srcz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_classzd2ownerzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_indexz00) =
					((long) ((long) 0)), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_readzd2onlyzf3z21) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_defaultzd2valuezd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_virtualzd2numzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_virtualzd2overridezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_getterz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_setterz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_slotz00_bglt) COBJECT(((BgL_slotz00_bglt)
									BgL_new1078z00_1910)))->BgL_userzd2infozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_2915 = ((BgL_slotz00_bglt) BgL_new1078z00_1910);
				return ((obj_t) BgL_auxz00_2915);
			}
		}

	}



/* &lambda1772 */
	BgL_slotz00_bglt BGl_z62lambda1772z62zzobject_slotsz00(obj_t BgL_envz00_1911)
	{
		{	/* Object/slots.scm 33 */
			{	/* Object/slots.scm 33 */
				BgL_slotz00_bglt BgL_new1077z00_2027;

				BgL_new1077z00_2027 =
					((BgL_slotz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_slotz00_bgl))));
				{	/* Object/slots.scm 33 */
					long BgL_arg1775z00_2028;

					{	/* Object/slots.scm 33 */
						long BgL_res1998z00_2029;

						BgL_res1998z00_2029 = BGL_CLASS_INDEX(BGl_slotz00zzobject_slotsz00);
						BgL_arg1775z00_2028 = BgL_res1998z00_2029;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1077z00_2027), BgL_arg1775z00_2028);
				}
				return BgL_new1077z00_2027;
			}
		}

	}



/* &lambda1769 */
	BgL_slotz00_bglt BGl_z62lambda1769z62zzobject_slotsz00(obj_t BgL_envz00_1912,
		obj_t BgL_id1064z00_1913, obj_t BgL_name1065z00_1914,
		obj_t BgL_src1066z00_1915, obj_t BgL_classzd2owner1067zd2_1916,
		obj_t BgL_index1068z00_1917, obj_t BgL_type1069z00_1918,
		obj_t BgL_readzd2onlyzf31070z21_1919, obj_t BgL_defaultzd2value1071zd2_1920,
		obj_t BgL_virtualzd2num1072zd2_1921,
		obj_t BgL_virtualzd2override1073zd2_1922, obj_t BgL_getter1074z00_1923,
		obj_t BgL_setter1075z00_1924, obj_t BgL_userzd2info1076zd2_1925)
	{
		{	/* Object/slots.scm 33 */
			{	/* Object/slots.scm 33 */
				long BgL_index1068z00_2032;
				bool_t BgL_readzd2onlyzf31070z21_2033;
				bool_t BgL_virtualzd2override1073zd2_2034;

				BgL_index1068z00_2032 = (long) CINT(BgL_index1068z00_1917);
				BgL_readzd2onlyzf31070z21_2033 = CBOOL(BgL_readzd2onlyzf31070z21_1919);
				BgL_virtualzd2override1073zd2_2034 =
					CBOOL(BgL_virtualzd2override1073zd2_1922);
				{	/* Object/slots.scm 33 */
					BgL_slotz00_bglt BgL_new1108z00_2035;

					{	/* Object/slots.scm 33 */
						BgL_slotz00_bglt BgL_new1107z00_2036;

						BgL_new1107z00_2036 =
							((BgL_slotz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_slotz00_bgl))));
						{	/* Object/slots.scm 33 */
							long BgL_arg1771z00_2037;

							{	/* Object/slots.scm 33 */
								long BgL_res1997z00_2038;

								BgL_res1997z00_2038 =
									BGL_CLASS_INDEX(BGl_slotz00zzobject_slotsz00);
								BgL_arg1771z00_2037 = BgL_res1997z00_2038;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1107z00_2036),
								BgL_arg1771z00_2037);
						}
						BgL_new1108z00_2035 = BgL_new1107z00_2036;
					}
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1064z00_1913)), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_namez00) =
						((obj_t) ((obj_t) BgL_name1065z00_1914)), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_srcz00) =
						((obj_t) BgL_src1066z00_1915), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_classzd2ownerzd2) =
						((obj_t) BgL_classzd2owner1067zd2_1916), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_indexz00) =
						((long) BgL_index1068z00_2032), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_typez00) =
						((obj_t) BgL_type1069z00_1918), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_readzd2onlyzf3z21) =
						((bool_t) BgL_readzd2onlyzf31070z21_2033), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_defaultzd2valuezd2) =
						((obj_t) BgL_defaultzd2value1071zd2_1920), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_virtualzd2numzd2) =
						((obj_t) BgL_virtualzd2num1072zd2_1921), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_virtualzd2overridezd2) =
						((bool_t) BgL_virtualzd2override1073zd2_2034), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_getterz00) =
						((obj_t) BgL_getter1074z00_1923), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->BgL_setterz00) =
						((obj_t) BgL_setter1075z00_1924), BUNSPEC);
					((((BgL_slotz00_bglt) COBJECT(BgL_new1108z00_2035))->
							BgL_userzd2infozd2) =
						((obj_t) BgL_userzd2info1076zd2_1925), BUNSPEC);
					return BgL_new1108z00_2035;
				}
			}
		}

	}



/* &<@anonymous:1891> */
	obj_t BGl_z62zc3z04anonymousza31891ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1926)
	{
		{	/* Object/slots.scm 33 */
			return BUNSPEC;
		}

	}



/* &lambda1890 */
	obj_t BGl_z62lambda1890z62zzobject_slotsz00(obj_t BgL_envz00_1927,
		obj_t BgL_oz00_1928, obj_t BgL_vz00_1929)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1928)))->BgL_userzd2infozd2) =
				((obj_t) BgL_vz00_1929), BUNSPEC);
		}

	}



/* &lambda1889 */
	obj_t BGl_z62lambda1889z62zzobject_slotsz00(obj_t BgL_envz00_1930,
		obj_t BgL_oz00_1931)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1931)))->BgL_userzd2infozd2);
		}

	}



/* &<@anonymous:1884> */
	obj_t BGl_z62zc3z04anonymousza31884ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1932)
	{
		{	/* Object/slots.scm 33 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1883 */
	obj_t BGl_z62lambda1883z62zzobject_slotsz00(obj_t BgL_envz00_1933,
		obj_t BgL_oz00_1934, obj_t BgL_vz00_1935)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1934)))->BgL_setterz00) =
				((obj_t) BgL_vz00_1935), BUNSPEC);
		}

	}



/* &lambda1882 */
	obj_t BGl_z62lambda1882z62zzobject_slotsz00(obj_t BgL_envz00_1936,
		obj_t BgL_oz00_1937)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1937)))->BgL_setterz00);
		}

	}



/* &<@anonymous:1876> */
	obj_t BGl_z62zc3z04anonymousza31876ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1938)
	{
		{	/* Object/slots.scm 33 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1875 */
	obj_t BGl_z62lambda1875z62zzobject_slotsz00(obj_t BgL_envz00_1939,
		obj_t BgL_oz00_1940, obj_t BgL_vz00_1941)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1940)))->BgL_getterz00) =
				((obj_t) BgL_vz00_1941), BUNSPEC);
		}

	}



/* &lambda1874 */
	obj_t BGl_z62lambda1874z62zzobject_slotsz00(obj_t BgL_envz00_1942,
		obj_t BgL_oz00_1943)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1943)))->BgL_getterz00);
		}

	}



/* &<@anonymous:1868> */
	obj_t BGl_z62zc3z04anonymousza31868ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1944)
	{
		{	/* Object/slots.scm 33 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1867 */
	obj_t BGl_z62lambda1867z62zzobject_slotsz00(obj_t BgL_envz00_1945,
		obj_t BgL_oz00_1946, obj_t BgL_vz00_1947)
	{
		{	/* Object/slots.scm 33 */
			{	/* Object/slots.scm 33 */
				bool_t BgL_vz00_2046;

				BgL_vz00_2046 = CBOOL(BgL_vz00_1947);
				return
					((((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_oz00_1946)))->
						BgL_virtualzd2overridezd2) = ((bool_t) BgL_vz00_2046), BUNSPEC);
			}
		}

	}



/* &lambda1866 */
	obj_t BGl_z62lambda1866z62zzobject_slotsz00(obj_t BgL_envz00_1948,
		obj_t BgL_oz00_1949)
	{
		{	/* Object/slots.scm 33 */
			return
				BBOOL(
				(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1949)))->BgL_virtualzd2overridezd2));
		}

	}



/* &<@anonymous:1859> */
	obj_t BGl_z62zc3z04anonymousza31859ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1950)
	{
		{	/* Object/slots.scm 33 */
			return BINT(((long) -1));
		}

	}



/* &lambda1858 */
	obj_t BGl_z62lambda1858z62zzobject_slotsz00(obj_t BgL_envz00_1951,
		obj_t BgL_oz00_1952, obj_t BgL_vz00_1953)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1952)))->BgL_virtualzd2numzd2) =
				((obj_t) BgL_vz00_1953), BUNSPEC);
		}

	}



/* &lambda1857 */
	obj_t BGl_z62lambda1857z62zzobject_slotsz00(obj_t BgL_envz00_1954,
		obj_t BgL_oz00_1955)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1955)))->BgL_virtualzd2numzd2);
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1956)
	{
		{	/* Object/slots.scm 33 */
			return MAKE_YOUNG_PAIR(BINT(((long) 1)), BINT(((long) 2)));
		}

	}



/* &lambda1850 */
	obj_t BGl_z62lambda1850z62zzobject_slotsz00(obj_t BgL_envz00_1957,
		obj_t BgL_oz00_1958, obj_t BgL_vz00_1959)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1958)))->BgL_defaultzd2valuezd2) =
				((obj_t) BgL_vz00_1959), BUNSPEC);
		}

	}



/* &lambda1849 */
	obj_t BGl_z62lambda1849z62zzobject_slotsz00(obj_t BgL_envz00_1960,
		obj_t BgL_oz00_1961)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1961)))->BgL_defaultzd2valuezd2);
		}

	}



/* &<@anonymous:1843> */
	obj_t BGl_z62zc3z04anonymousza31843ze3ze5zzobject_slotsz00(obj_t
		BgL_envz00_1962)
	{
		{	/* Object/slots.scm 33 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1842 */
	obj_t BGl_z62lambda1842z62zzobject_slotsz00(obj_t BgL_envz00_1963,
		obj_t BgL_oz00_1964, obj_t BgL_vz00_1965)
	{
		{	/* Object/slots.scm 33 */
			{	/* Object/slots.scm 33 */
				bool_t BgL_vz00_2053;

				BgL_vz00_2053 = CBOOL(BgL_vz00_1965);
				return
					((((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_oz00_1964)))->BgL_readzd2onlyzf3z21) =
					((bool_t) BgL_vz00_2053), BUNSPEC);
			}
		}

	}



/* &lambda1841 */
	obj_t BGl_z62lambda1841z62zzobject_slotsz00(obj_t BgL_envz00_1966,
		obj_t BgL_oz00_1967)
	{
		{	/* Object/slots.scm 33 */
			return
				BBOOL(
				(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1967)))->BgL_readzd2onlyzf3z21));
		}

	}



/* &lambda1834 */
	obj_t BGl_z62lambda1834z62zzobject_slotsz00(obj_t BgL_envz00_1968,
		obj_t BgL_oz00_1969, obj_t BgL_vz00_1970)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1969)))->BgL_typez00) =
				((obj_t) BgL_vz00_1970), BUNSPEC);
		}

	}



/* &lambda1833 */
	obj_t BGl_z62lambda1833z62zzobject_slotsz00(obj_t BgL_envz00_1971,
		obj_t BgL_oz00_1972)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1972)))->BgL_typez00);
		}

	}



/* &lambda1829 */
	obj_t BGl_z62lambda1829z62zzobject_slotsz00(obj_t BgL_envz00_1973,
		obj_t BgL_oz00_1974, obj_t BgL_vz00_1975)
	{
		{	/* Object/slots.scm 33 */
			{	/* Object/slots.scm 33 */
				long BgL_vz00_2058;

				BgL_vz00_2058 = (long) CINT(BgL_vz00_1975);
				return
					((((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_oz00_1974)))->BgL_indexz00) =
					((long) BgL_vz00_2058), BUNSPEC);
		}}

	}



/* &lambda1828 */
	obj_t BGl_z62lambda1828z62zzobject_slotsz00(obj_t BgL_envz00_1976,
		obj_t BgL_oz00_1977)
	{
		{	/* Object/slots.scm 33 */
			return
				BINT(
				(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1977)))->BgL_indexz00));
		}

	}



/* &lambda1824 */
	obj_t BGl_z62lambda1824z62zzobject_slotsz00(obj_t BgL_envz00_1978,
		obj_t BgL_oz00_1979, obj_t BgL_vz00_1980)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1979)))->BgL_classzd2ownerzd2) =
				((obj_t) BgL_vz00_1980), BUNSPEC);
		}

	}



/* &lambda1823 */
	obj_t BGl_z62lambda1823z62zzobject_slotsz00(obj_t BgL_envz00_1981,
		obj_t BgL_oz00_1982)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1982)))->BgL_classzd2ownerzd2);
		}

	}



/* &lambda1811 */
	obj_t BGl_z62lambda1811z62zzobject_slotsz00(obj_t BgL_envz00_1983,
		obj_t BgL_oz00_1984, obj_t BgL_vz00_1985)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1984)))->BgL_srcz00) =
				((obj_t) BgL_vz00_1985), BUNSPEC);
		}

	}



/* &lambda1810 */
	obj_t BGl_z62lambda1810z62zzobject_slotsz00(obj_t BgL_envz00_1986,
		obj_t BgL_oz00_1987)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1987)))->BgL_srcz00);
		}

	}



/* &lambda1800 */
	obj_t BGl_z62lambda1800z62zzobject_slotsz00(obj_t BgL_envz00_1988,
		obj_t BgL_oz00_1989, obj_t BgL_vz00_1990)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1989)))->BgL_namez00) = ((obj_t)
					((obj_t) BgL_vz00_1990)), BUNSPEC);
		}

	}



/* &lambda1799 */
	obj_t BGl_z62lambda1799z62zzobject_slotsz00(obj_t BgL_envz00_1991,
		obj_t BgL_oz00_1992)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1992)))->BgL_namez00);
		}

	}



/* &lambda1784 */
	obj_t BGl_z62lambda1784z62zzobject_slotsz00(obj_t BgL_envz00_1993,
		obj_t BgL_oz00_1994, obj_t BgL_vz00_1995)
	{
		{	/* Object/slots.scm 33 */
			return
				((((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_oz00_1994)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_1995)), BUNSPEC);
		}

	}



/* &lambda1783 */
	obj_t BGl_z62lambda1783z62zzobject_slotsz00(obj_t BgL_envz00_1996,
		obj_t BgL_oz00_1997)
	{
		{	/* Object/slots.scm 33 */
			return
				(((BgL_slotz00_bglt) COBJECT(
						((BgL_slotz00_bglt) BgL_oz00_1997)))->BgL_idz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_shapezd2envzd2zztools_shapez00, BGl_slotz00zzobject_slotsz00,
				BGl_proc2046z00zzobject_slotsz00, BGl_string2047z00zzobject_slotsz00);
		}

	}



/* &shape-slot1167 */
	obj_t BGl_z62shapezd2slot1167zb0zzobject_slotsz00(obj_t BgL_envz00_1999,
		obj_t BgL_sz00_2000)
	{
		{	/* Object/slots.scm 86 */
			{	/* Object/slots.scm 88 */
				obj_t BgL_arg1892z00_2071;
				obj_t BgL_arg1893z00_2072;
				obj_t BgL_arg1895z00_2073;
				obj_t BgL_arg1896z00_2074;

				{	/* Object/slots.scm 88 */
					obj_t BgL_arg1909z00_2075;

					BgL_arg1909z00_2075 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_sz00_2000)))->BgL_idz00);
					{	/* Object/slots.scm 88 */
						obj_t BgL_res1999z00_2076;

						{	/* Object/slots.scm 88 */
							obj_t BgL_arg1466z00_2077;

							BgL_arg1466z00_2077 = SYMBOL_TO_STRING(BgL_arg1909z00_2075);
							BgL_res1999z00_2076 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2077);
						}
						BgL_arg1892z00_2071 = BgL_res1999z00_2076;
					}
				}
				BgL_arg1893z00_2072 =
					(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_sz00_2000)))->BgL_namez00);
				BgL_arg1895z00_2073 =
					BGl_shapez00zztools_shapez00(
					(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_sz00_2000)))->BgL_classzd2ownerzd2));
				BgL_arg1896z00_2074 =
					BGl_shapez00zztools_shapez00(
					(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_sz00_2000)))->BgL_typez00));
				{	/* Object/slots.scm 88 */
					obj_t BgL_list1897z00_2078;

					{	/* Object/slots.scm 88 */
						obj_t BgL_arg1898z00_2079;

						{	/* Object/slots.scm 88 */
							obj_t BgL_arg1901z00_2080;

							{	/* Object/slots.scm 88 */
								obj_t BgL_arg1902z00_2081;

								{	/* Object/slots.scm 88 */
									obj_t BgL_arg1903z00_2082;

									{	/* Object/slots.scm 88 */
										obj_t BgL_arg1904z00_2083;

										{	/* Object/slots.scm 88 */
											obj_t BgL_arg1905z00_2084;

											{	/* Object/slots.scm 88 */
												obj_t BgL_arg1906z00_2085;

												{	/* Object/slots.scm 88 */
													obj_t BgL_arg1907z00_2086;

													{	/* Object/slots.scm 88 */
														obj_t BgL_arg1908z00_2087;

														BgL_arg1908z00_2087 =
															MAKE_YOUNG_PAIR
															(BGl_string2048z00zzobject_slotsz00, BNIL);
														BgL_arg1907z00_2086 =
															MAKE_YOUNG_PAIR(BgL_arg1896z00_2074,
															BgL_arg1908z00_2087);
													}
													BgL_arg1906z00_2085 =
														MAKE_YOUNG_PAIR(BGl_string2049z00zzobject_slotsz00,
														BgL_arg1907z00_2086);
												}
												BgL_arg1905z00_2084 =
													MAKE_YOUNG_PAIR(BgL_arg1895z00_2073,
													BgL_arg1906z00_2085);
											}
											BgL_arg1904z00_2083 =
												MAKE_YOUNG_PAIR(BGl_string2050z00zzobject_slotsz00,
												BgL_arg1905z00_2084);
										}
										BgL_arg1903z00_2082 =
											MAKE_YOUNG_PAIR(BGl_string2048z00zzobject_slotsz00,
											BgL_arg1904z00_2083);
									}
									BgL_arg1902z00_2081 =
										MAKE_YOUNG_PAIR(BgL_arg1893z00_2072, BgL_arg1903z00_2082);
								}
								BgL_arg1901z00_2080 =
									MAKE_YOUNG_PAIR(BGl_string2051z00zzobject_slotsz00,
									BgL_arg1902z00_2081);
							}
							BgL_arg1898z00_2079 =
								MAKE_YOUNG_PAIR(BgL_arg1892z00_2071, BgL_arg1901z00_2080);
						}
						BgL_list1897z00_2078 =
							MAKE_YOUNG_PAIR(BGl_string2052z00zzobject_slotsz00,
							BgL_arg1898z00_2079);
					}
					return
						BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1897z00_2078);
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_slotsz00()
	{
		{	/* Object/slots.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
			return
				BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string2053z00zzobject_slotsz00));
		}

	}

#ifdef __cplusplus
}
#endif
