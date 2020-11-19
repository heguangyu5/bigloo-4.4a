/*===========================================================================*/
/*   (Object/class.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/class.scm) */
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

	typedef struct BgL_wclassz00_bgl
	{
		obj_t BgL_itszd2classzd2;
	}                *BgL_wclassz00_bglt;


	static obj_t BGl_z62lambda1762z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1763z62zzobject_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2slotszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jclasszd2itszd2superzd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2constructorzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2locationzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2z42zf2zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_wclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62lambda1779z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2z42zd2setz12z32zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62wclasszd2coercezd2toz62zzobject_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62jclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62lambda1780z62zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62wclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jclasszd2namezd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1797z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1798z62zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jclasszd2initzf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL long
		BGl_tclasszd2depthzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2classzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2itszd2superzd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2itszd2superz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62findzd2classzd2constructorz62zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62tclasszf3z91zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_tclasszd2holderzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62wclasszd2classzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2locationzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2namezd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2z42z90zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_wclasszf3zf3zzobject_classz00(obj_t);
	extern obj_t
		BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00(BgL_typez00_bglt,
		obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62declarezd2classzd2typez12z70zzobject_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_getzd2objectzd2typez00zztype_cachez00();
	static obj_t BGl_objectzd2initzd2zzobject_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2tclasszb0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2packagezd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2z42zf2zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2classzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2importzd2locationzd2setz12zc0zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	static obj_t BGl_z62jclasszf3z91zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_tclasszd2finalzf3z21zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2virtualzd2slotszd2numberzd2setz12z12zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_z62findzd2commonzd2superzd2classzb0zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2itszd2superzd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2z42z90zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2aliaszb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_classz00();
	static obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62wclasszd2tvectorzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2itszd2classz62zzobject_classz00(obj_t, obj_t);
	extern obj_t
		BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62classzd2predicatezb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2importzd2locationzd2setz12zc0zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2jclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2slotszd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2locationzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62tclasszd2widezd2typez62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2aliaszd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static bool_t
		BGl_checkzd2plainzd2classzd2declarationzf3z21zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62classzd2allocatezb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2namezb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2wclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2constructorzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t, BgL_globalz00_bglt,
		obj_t, bool_t, bool_t, obj_t);
	static obj_t
		BGl_z62tclasszd2virtualzd2slotszd2numberzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL int
		BGl_tclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	static obj_t BGl_z62wclasszd2idzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31700ze3ze5zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2fillzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2depthzd2setz12z12zzobject_classz00(BgL_typez00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2z42z90zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2subclasseszb0zzobject_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62tclasszd2virtualzd2slotszd2numberzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2depthzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62classzd2fillzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62tclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_wclasszd2idzd2zzobject_classz00(BgL_typez00_bglt);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62jclasszd2classzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2slotszd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2parentszb0zzobject_classz00(obj_t, obj_t);
	extern obj_t BGl_getzd2classzd2typez00zztype_cachez00();
	static obj_t BGl_z62jclasszd2itszd2superz62zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_tclasszf3zf3zzobject_classz00(obj_t);
	static BgL_typez00_bglt BGl_z62makezd2jclasszb0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t
		BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62wclasszd2magiczf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jclasszd2classzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62finalzd2classzf3z43zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2classzd2slotsz12z70zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2parentszb0zzobject_classz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2wclasszb0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_classz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_tclasszd2nilzd2zzobject_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62wclasszd2locationzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_genzd2classzd2coercersz12z12zzobject_coercionz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1600z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1601z62zzobject_classz00(obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt BGl_z62lambda1607z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1608z62zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62tclasszd2wideningzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_jclasszf3zf3zzobject_classz00(obj_t);
	static obj_t BGl_z62jclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2namezd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static BgL_globalz00_bglt BGl_z62tclasszd2holderzb0zzobject_classz00(obj_t,
		obj_t);
	static BgL_typez00_bglt BGl_z62tclasszd2nilzb0zzobject_classz00(obj_t);
	static obj_t BGl_z62lambda1625z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1626z62zzobject_classz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62declarezd2javazd2classzd2typez12za2zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62jclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2siza7ez17zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31565ze3ze5zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2importzd2locationz62zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_tclasszd2superza2ze70z97zzobject_classz00(obj_t);
	static obj_t BGl_z62jclasszd2occurrencezb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62tclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1641z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1642z62zzobject_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2finalzf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_tclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2z42zd2setz12z32zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62wclasszd2aliaszd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1822z62zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1825z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1664z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1665z62zzobject_classz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1828z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2coercezd2toz62zzobject_classz00(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_findzd2superzd2classzd2methodzd2zz__objectz00(BgL_objectz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31746ze3ze5zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	static obj_t BGl_z62lambda1673z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1674z62zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31690ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62lambda1837z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1838z62zzobject_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt, int);
	static obj_t BGl_z62widezd2chunkzd2classzd2idzb0zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31764ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62lambda1688z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1689z62zzobject_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2slotszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2subclasseszd2setz12z12zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31781ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62lambda1698z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1699z62zzobject_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jclasszd2packagezb0zzobject_classz00(obj_t, obj_t);
	extern obj_t BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_typez00_bglt,
		obj_t, obj_t, int, obj_t);
	static obj_t BGl_z62tclasszd2slotszb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_classz00 = BUNSPEC;
	static obj_t BGl_z62jclasszd2tvectorzb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t
		BGl_z62wclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2widezd2typezd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_tclassz00zzobject_classz00 = BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_tclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2abstractzf3z43zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2classzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2tvectorzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_wclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_toplevelzd2initzd2zzobject_classz00();
	BGL_EXPORTED_DECL bool_t
		BGl_jclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2z42zd2setz12z32zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2subclasseszd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2slotszd2zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2itszd2classz00zzobject_classz00(BgL_typez00_bglt);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_classz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_checkzd2classzd2declarationzf3zf3zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62wclasszd2namezd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62wclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2widezd2typez00zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62tclasszd2widezd2typezd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jclasszd2idzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62typezd2occurrencezd2incr1229z62zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_widezd2chunkzd2classzd2idzd2zzobject_classz00(obj_t);
	static obj_t BGl_z62tclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2namezd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2parentszd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2virtualzd2slotszd2numberzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62wclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2namezd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62tclasszd2itszd2superz62zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_jclasszd2idzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2subclasseszd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62wclasszd2occurrencezb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62widezd2classzf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2predicatezd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2locationzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62jclasszd2slotszd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62wclasszd2importzd2locationz62zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62tclasszd2aliaszd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2importzd2locationz62zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jclasszd2locationzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62typezd2subclasszf3z43zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2itszd2superz00zzobject_classz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31602ze3ze5zzobject_classz00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_jclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	extern obj_t BGl_idzd2ze3namez31zzast_identz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_setzd2classzd2slotsz12z12zzobject_classz00(BgL_typez00_bglt, obj_t,
		obj_t);
	static obj_t
		BGl_z62jclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62wclasszd2namezb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_jclassz00zzobject_classz00 = BUNSPEC;
	static obj_t BGl_z62tclasszd2magiczf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t
		BGl_z62tclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62tclasszd2initzf3z43zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_wclasszd2nilzd2zzobject_classz00();
	static obj_t BGl_z62tclasszd2namezb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62jclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_wclassz00zzobject_classz00 = BUNSPEC;
	static obj_t BGl_z62wclasszd2initzf3z43zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62tclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_coercionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_coercionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62jclasszd2slotszb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2allocatezd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2classzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2makezd2zzobject_classz00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62wclasszd2nilzb0zzobject_classz00(obj_t);
	static obj_t BGl_z62tclasszd2coercezd2toz62zzobject_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62tclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jclasszd2parentszd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62wclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_checkzd2widezd2classzd2declarationzf3z21zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2classzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_classz00();
	static obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_classz00();
	static obj_t BGl_z62classzd2makezb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszf3z91zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2classzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62tclasszd2idzb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2wideningzd2zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2itszd2classzd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62typezd2classzd2namez62zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2commonzd2superzd2classzd2zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	static obj_t BGl_za2classzd2typezd2listza2z00zzobject_classz00 = BUNSPEC;
	static obj_t BGl_z62getzd2classzd2listz62zzobject_classz00(obj_t);
	static obj_t BGl_z62jclasszd2magiczf3z43zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62tclasszd2aliaszb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t
		BGl_z62wclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_findzd2classzd2constructorz00zzobject_classz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_wclasszd2importzd2locationzd2setz12zc0zzobject_classz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62wclasszd2aliaszb0zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1712z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1713z62zzobject_classz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1554z62zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tclasszd2idzd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62heapzd2addzd2classz12z70zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62tclasszd2occurrencezb0zzobject_classz00(obj_t, obj_t);
	extern obj_t
		BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00(BgL_globalz00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1562z62zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_tclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62wclasszd2itszd2classzd2setz12za2zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1728z62zzobject_classz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1566z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1729z62zzobject_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2itszd2superzd2setz12zc0zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62wclasszd2z42zf2zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62checkzd2classzd2declarationzf3z91zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_jclasszd2nilzd2zzobject_classz00();
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	static obj_t BGl_z62tclasszd2depthzd2setz12z70zzobject_classz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62wclasszd2siza7ez17zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62wclasszd2parentszb0zzobject_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_tclasszd2abstractzf3z21zzobject_classz00(BgL_typez00_bglt);
	static BgL_typez00_bglt BGl_z62lambda1741z62zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1744z62zzobject_classz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1747z62zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzobject_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1589z62zzobject_classz00(obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2tclasszd2zzobject_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int, obj_t,
		obj_t, BgL_globalz00_bglt, obj_t, long, bool_t, obj_t, obj_t, bool_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1590z62zzobject_classz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62jclasszd2nilzb0zzobject_classz00(obj_t);
	static obj_t BGl_z62tclasszd2siza7ez17zzobject_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzobject_classz00(obj_t);
	static obj_t BGl_z62wclasszd2parentszd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_wclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_z62wclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t,
		obj_t, obj_t);
	static obj_t __cnst[30];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2subclasseszd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2subc2028z00,
		BGl_z62tclasszd2subclasseszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2parentszd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2pare2029z00,
		BGl_z62jclasszd2parentszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2pointedzd2tozd2byzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2poin2030z00,
		BGl_z62tclasszd2pointedzd2tozd2byzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2widezd2typezd2envzd2zzobject_classz00,
		BgL_bgl_za762tclassza7d2wide2031z00,
		BGl_z62tclasszd2widezd2typez62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2classzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2clas2032z00,
		BGl_z62tclasszd2classzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2classzd2namezd2envzd2zzobject_classz00,
		BgL_bgl_za762typeza7d2classza72033za7,
		BGl_z62typezd2classzd2namez62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2aliaszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2alia2034z00,
		BGl_z62jclasszd2aliaszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2abstractzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762tclassza7d2abst2035z00,
		BGl_z62tclasszd2abstractzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2nilza72036za7,
		BGl_z62wclasszd2nilzb0zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2coercezd2tozd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762wclassza7d2coer2037z00,
		BGl_z62wclasszd2coercezd2tozd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2wideningzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2wide2038z00,
		BGl_z62tclasszd2wideningzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2importzd2locationzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762jclassza7d2impo2039z00,
		BGl_z62jclasszd2importzd2locationzd2setz12za2zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2depthzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2dept2040z00,
		BGl_z62tclasszd2depthzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2parentszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2pare2041z00,
		BGl_z62tclasszd2parentszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2magiczf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762wclassza7d2magi2042z00,
		BGl_z62wclasszd2magiczf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2aliaszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2alia2043z00,
		BGl_z62wclasszd2aliaszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2classzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2clas2044z00,
		BGl_z62tclasszd2classzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2packagezd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2pack2045z00,
		BGl_z62jclasszd2packagezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2locationzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2loca2046z00,
		BGl_z62tclasszd2locationzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2pointedzd2tozd2byzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2poin2047z00,
		BGl_z62jclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2aliaszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2alia2048z00,
		BGl_z62tclasszd2aliaszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2slotszd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2slot2049z00,
		BGl_z62jclasszd2slotszb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2wclasszd2envz00zzobject_classz00,
		BgL_bgl_za762makeza7d2wclass2050z00,
		BGl_z62makezd2wclasszb0zzobject_classz00, 0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2coercezd2tozd2envzd2zzobject_classz00,
		BgL_bgl_za762tclassza7d2coer2051z00,
		BGl_z62tclasszd2coercezd2toz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2initzf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762jclassza7d2init2052z00,
		BGl_z62jclasszd2initzf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2coercezd2tozd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762jclassza7d2coer2053z00,
		BGl_z62jclasszd2coercezd2tozd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2aliaszd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2alia2054z00,
		BGl_z62tclasszd2aliaszb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2idzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2idza7b2055za7,
		BGl_z62wclasszd2idzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2locationzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2loca2056z00,
		BGl_z62jclasszd2locationzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2coercezd2tozd2envzd2zzobject_classz00,
		BgL_bgl_za762jclassza7d2coer2057z00,
		BGl_z62jclasszd2coercezd2toz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2slotszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2slot2058z00,
		BGl_z62jclasszd2slotszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2siza7ezd2setz12zd2envz67zzobject_classz00,
		BgL_bgl_za762tclassza7d2siza7a2059za7,
		BGl_z62tclasszd2siza7ezd2setz12zd7zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2classzd2declarationzf3zd2envz21zzobject_classz00,
		BgL_bgl_za762checkza7d2class2060z00,
		BGl_z62checkzd2classzd2declarationzf3z91zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2siza7ezd2envza7zzobject_classz00,
		BgL_bgl_za762jclassza7d2siza7a2061za7,
		BGl_z62jclasszd2siza7ez17zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2initzf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762wclassza7d2init2062z00,
		BGl_z62wclasszd2initzf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2magiczf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762jclassza7d2magi2063z00,
		BGl_z62jclasszd2magiczf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2tvectorzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2tvec2064z00,
		BGl_z62wclasszd2tvectorzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2siza7ezd2setz12zd2envz67zzobject_classz00,
		BgL_bgl_za762jclassza7d2siza7a2065za7,
		BGl_z62jclasszd2siza7ezd2setz12zd7zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1965z00zzobject_classz00,
		BgL_bgl_za762lambda1590za7622066z00, BGl_z62lambda1590z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1966z00zzobject_classz00,
		BgL_bgl_za762lambda1589za7622067z00, BGl_z62lambda1589z62zzobject_classz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2depthzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2dept2068z00,
		BGl_z62tclasszd2depthzb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1967z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2069za7,
		BGl_z62zc3z04anonymousza31602ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1968z00zzobject_classz00,
		BgL_bgl_za762lambda1601za7622070z00, BGl_z62lambda1601z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1969z00zzobject_classz00,
		BgL_bgl_za762lambda1600za7622071z00, BGl_z62lambda1600z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1970z00zzobject_classz00,
		BgL_bgl_za762lambda1608za7622072z00, BGl_z62lambda1608z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1971z00zzobject_classz00,
		BgL_bgl_za762lambda1607za7622073z00, BGl_z62lambda1607z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1972z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2074za7,
		BGl_z62zc3z04anonymousza31627ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1973z00zzobject_classz00,
		BgL_bgl_za762lambda1626za7622075z00, BGl_z62lambda1626z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1974z00zzobject_classz00,
		BgL_bgl_za762lambda1625za7622076z00, BGl_z62lambda1625z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1975z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2077za7,
		BGl_z62zc3z04anonymousza31643ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1976z00zzobject_classz00,
		BgL_bgl_za762lambda1642za7622078z00, BGl_z62lambda1642z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1977z00zzobject_classz00,
		BgL_bgl_za762lambda1641za7622079z00, BGl_z62lambda1641z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1978z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2080za7,
		BGl_z62zc3z04anonymousza31666ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1979z00zzobject_classz00,
		BgL_bgl_za762lambda1665za7622081z00, BGl_z62lambda1665z62zzobject_classz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2tvectorzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2tvec2082z00,
		BGl_z62jclasszd2tvectorzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2initzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762jclassza7d2init2083z00,
		BGl_z62jclasszd2initzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2tvectorzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2tvec2084z00,
		BGl_z62wclasszd2tvectorzb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1980z00zzobject_classz00,
		BgL_bgl_za762lambda1664za7622085z00, BGl_z62lambda1664z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1981z00zzobject_classz00,
		BgL_bgl_za762lambda1674za7622086z00, BGl_z62lambda1674z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1982z00zzobject_classz00,
		BgL_bgl_za762lambda1673za7622087z00, BGl_z62lambda1673z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1983z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2088za7,
		BGl_z62zc3z04anonymousza31690ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1984z00zzobject_classz00,
		BgL_bgl_za762lambda1689za7622089z00, BGl_z62lambda1689z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1985z00zzobject_classz00,
		BgL_bgl_za762lambda1688za7622090z00, BGl_z62lambda1688z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1986z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2091za7,
		BGl_z62zc3z04anonymousza31700ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1987z00zzobject_classz00,
		BgL_bgl_za762lambda1699za7622092z00, BGl_z62lambda1699z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1988z00zzobject_classz00,
		BgL_bgl_za762lambda1698za7622093z00, BGl_z62lambda1698z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1989z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2094za7,
		BGl_z62zc3z04anonymousza31714ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszf3zd2envz21zzobject_classz00,
		BgL_bgl_za762wclassza7f3za791za72095z00,
		BGl_z62wclasszf3z91zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1990z00zzobject_classz00,
		BgL_bgl_za762lambda1713za7622096z00, BGl_z62lambda1713z62zzobject_classz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2initzf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762tclassza7d2init2097z00,
		BGl_z62tclasszd2initzf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1991z00zzobject_classz00,
		BgL_bgl_za762lambda1712za7622098z00, BGl_z62lambda1712z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1992z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2099za7,
		BGl_z62zc3z04anonymousza31730ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1993z00zzobject_classz00,
		BgL_bgl_za762lambda1729za7622100z00, BGl_z62lambda1729z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1994z00zzobject_classz00,
		BgL_bgl_za762lambda1728za7622101z00, BGl_z62lambda1728z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1995z00zzobject_classz00,
		BgL_bgl_za762lambda1566za7622102z00, BGl_z62lambda1566z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1996z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2103za7,
		BGl_z62zc3z04anonymousza31565ze3ze5zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1997z00zzobject_classz00,
		BgL_bgl_za762lambda1562za7622104z00, BGl_z62lambda1562z62zzobject_classz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2classzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2clas2105z00,
		BGl_z62wclasszd2classzb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1998z00zzobject_classz00,
		BgL_bgl_za762lambda1554za7622106z00, BGl_z62lambda1554z62zzobject_classz00,
		0L, BUNSPEC, 26);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1999z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2107za7,
		BGl_z62zc3z04anonymousza31764ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_finalzd2classzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762finalza7d2class2108z00,
		BGl_z62finalzd2classzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2classzd2slotsz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762setza7d2classza7d2109za7,
		BGl_z62setzd2classzd2slotsz12z70zzobject_classz00, 0L, BUNSPEC, 3);
	extern obj_t BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2makezd2envz00zzobject_classz00,
		BgL_bgl_za762classza7d2makeza72110za7,
		BGl_z62classzd2makezb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszf3zd2envz21zzobject_classz00,
		BgL_bgl_za762tclassza7f3za791za72111z00,
		BGl_z62tclasszf3z91zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2itszd2superzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762tclassza7d2itsza72112za7,
		BGl_z62tclasszd2itszd2superzd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2fillzd2envz00zzobject_classz00,
		BgL_bgl_za762classza7d2fillza72113za7,
		BGl_z62classzd2fillzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2locationzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2loca2114z00,
		BGl_z62jclasszd2locationzb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jclasszd2envz00zzobject_classz00,
		BgL_bgl_za762makeza7d2jclass2115z00,
		BGl_z62makezd2jclasszb0zzobject_classz00, 0L, BUNSPEC, 18);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2slotszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2slot2116z00,
		BGl_z62tclasszd2slotszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2magiczf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762tclassza7d2magi2117z00,
		BGl_z62tclasszd2magiczf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2locationzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2loca2118z00,
		BGl_z62wclasszd2locationzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2namezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2name2119z00,
		BGl_z62tclasszd2namezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2addzd2classz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762heapza7d2addza7d22120za7,
		BGl_z62heapzd2addzd2classz12z70zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2predicatezd2envz00zzobject_classz00,
		BgL_bgl_za762classza7d2predi2121z00,
		BGl_z62classzd2predicatezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2pointedzd2tozd2byzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2poin2122z00,
		BGl_z62jclasszd2pointedzd2tozd2byzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2aliaszd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2alia2123z00,
		BGl_z62wclasszd2aliaszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2namezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2name2124z00,
		BGl_z62jclasszd2namezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2z42zd2setz12zd2envz82zzobject_classz00,
		BgL_bgl_za762jclassza7d2za742za72125z00,
		BGl_z62jclasszd2z42zd2setz12z32zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2nilza72126za7,
		BGl_z62jclasszd2nilzb0zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2z42zd2envz42zzobject_classz00,
		BgL_bgl_za762tclassza7d2za742za72127z00,
		BGl_z62tclasszd2z42zf2zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2namezd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2name2128z00,
		BGl_z62jclasszd2namezb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2z42zd2envz42zzobject_classz00,
		BgL_bgl_za762wclassza7d2za742za72129z00,
		BGl_z62wclasszd2z42zf2zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2019z00zzobject_classz00,
		BgL_bgl_string2019za700za7za7o2130za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2siza7ezd2envza7zzobject_classz00,
		BgL_bgl_za762tclassza7d2siza7a2131za7,
		BGl_z62tclasszd2siza7ez17zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2nilzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2nilza72132za7,
		BGl_z62tclasszd2nilzb0zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2parentszd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2pare2133z00,
		BGl_z62wclasszd2parentszb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2021z00zzobject_classz00,
		BgL_bgl_string2021za700za7za7o2134za7, "type-occurrence-increment!", 26);
	      DEFINE_STRING(BGl_string2022z00zzobject_classz00,
		BgL_bgl_string2022za700za7za7o2135za7, "object_class", 12);
	      DEFINE_STRING(BGl_string2023z00zzobject_classz00,
		BgL_bgl_string2023za700za7za7o2136za7,
		"_ wclass its-class jclass bstring package object_class tclass pair-nil subclasses wide-type abstract? virtual-slots-number constructor bool final? long depth holder slots obj its-super %allocate- ? fill- ! make- java widening bigloo ",
		233);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2virtualzd2slotszd2numberzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2virt2137z00,
		BGl_z62tclasszd2virtualzd2slotszd2numberzb0zzobject_classz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2tvectorzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2tvec2138z00,
		BGl_z62tclasszd2tvectorzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2constructorzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2cons2139z00,
		BGl_z62tclasszd2constructorzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2locationzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2loca2140z00,
		BGl_z62wclasszd2locationzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2importzd2locationzd2envzd2zzobject_classz00,
		BgL_bgl_za762tclassza7d2impo2141z00,
		BGl_z62tclasszd2importzd2locationz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2slotszd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2slot2142z00,
		BGl_z62tclasszd2slotszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2magiczf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762wclassza7d2magi2143z00,
		BGl_z62wclasszd2magiczf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2subclasseszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2subc2144z00,
		BGl_z62tclasszd2subclasseszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2magiczf3zd2setz12zd2envz33zzobject_classz00,
		BgL_bgl_za762tclassza7d2magi2145z00,
		BGl_z62tclasszd2magiczf3zd2setz12z83zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2pointedzd2tozd2byzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2poin2146z00,
		BGl_z62tclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2widezd2typezd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762tclassza7d2wide2147z00,
		BGl_z62tclasszd2widezd2typezd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2occurrencezd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2occu2148z00,
		BGl_z62jclasszd2occurrencezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2coercezd2tozd2envzd2zzobject_classz00,
		BgL_bgl_za762wclassza7d2coer2149z00,
		BGl_z62wclasszd2coercezd2toz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2pointedzd2tozd2byzd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2poin2150z00,
		BGl_z62wclasszd2pointedzd2tozd2byzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2itszd2superzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762jclassza7d2itsza72151za7,
		BGl_z62jclasszd2itszd2superzd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2finalzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762tclassza7d2fina2152z00,
		BGl_z62tclasszd2finalzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2occurrencezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2occu2153z00,
		BGl_z62tclasszd2occurrencezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2virtualzd2slotszd2numberzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2virt2154z00,
		BGl_z62tclasszd2virtualzd2slotszd2numberzd2setz12z70zzobject_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2siza7ezd2envza7zzobject_classz00,
		BgL_bgl_za762wclassza7d2siza7a2155za7,
		BGl_z62wclasszd2siza7ez17zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2importzd2locationzd2envzd2zzobject_classz00,
		BgL_bgl_za762jclassza7d2impo2156z00,
		BGl_z62jclasszd2importzd2locationz62zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2namezd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2name2157z00,
		BGl_z62tclasszd2namezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2siza7ezd2setz12zd2envz67zzobject_classz00,
		BgL_bgl_za762wclassza7d2siza7a2158za7,
		BGl_z62wclasszd2siza7ezd2setz12zd7zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2parentszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2pare2159z00,
		BGl_z62wclasszd2parentszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2idzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2idza7b2160za7,
		BGl_z62tclasszd2idzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2occurrencezd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2occu2161z00,
		BGl_z62wclasszd2occurrencezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2initzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762tclassza7d2init2162z00,
		BGl_z62tclasszd2initzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_typezd2subclasszf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762typeza7d2subcla2163z00,
		BGl_z62typezd2subclasszf3z43zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2parentszd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2pare2164z00,
		BGl_z62tclasszd2parentszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2javazd2classzd2typez12zd2envz12zzobject_classz00,
		BgL_bgl_za762declareza7d2jav2165z00,
		BGl_z62declarezd2javazd2classzd2typez12za2zzobject_classz00, 0L, BUNSPEC,
		5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2parentszd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2pare2166z00,
		BGl_z62jclasszd2parentszd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2z42zd2setz12zd2envz82zzobject_classz00,
		BgL_bgl_za762wclassza7d2za742za72167z00,
		BGl_z62wclasszd2z42zd2setz12z32zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2occurrencezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2occu2168z00,
		BGl_z62jclasszd2occurrencezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2importzd2locationzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762wclassza7d2impo2169z00,
		BGl_z62wclasszd2importzd2locationzd2setz12za2zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2importzd2locationzd2envzd2zzobject_classz00,
		BgL_bgl_za762wclassza7d2impo2170z00,
		BGl_z62wclasszd2importzd2locationz62zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2z42zd2envz42zzobject_classz00,
		BgL_bgl_za762jclassza7d2za742za72171z00,
		BGl_z62jclasszd2z42zf2zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2classzd2listzd2envzd2zzobject_classz00,
		BgL_bgl_za762getza7d2classza7d2172za7,
		BGl_z62getzd2classzd2listz62zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2occurrencezd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2occu2173z00,
		BGl_z62tclasszd2occurrencezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_widezd2classzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762wideza7d2classza72174za7,
		BGl_z62widezd2classzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2commonzd2superzd2classzd2envz00zzobject_classz00,
		BgL_bgl_za762findza7d2common2175z00,
		BGl_z62findzd2commonzd2superzd2classzb0zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2itszd2superzd2envzd2zzobject_classz00,
		BgL_bgl_za762tclassza7d2itsza72176za7,
		BGl_z62tclasszd2itszd2superz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2tvectorzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2tvec2177z00,
		BGl_z62tclasszd2tvectorzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1952z00zzobject_classz00,
		BgL_bgl_string1952za700za7za7o2178za7, "#!", 2);
	      DEFINE_STRING(BGl_string1953z00zzobject_classz00,
		BgL_bgl_string1953za700za7za7o2179za7, "struct ", 7);
	      DEFINE_STRING(BGl_string1954z00zzobject_classz00,
		BgL_bgl_string1954za700za7za7o2180za7, "_bgl", 4);
	      DEFINE_STRING(BGl_string1955z00zzobject_classz00,
		BgL_bgl_string1955za700za7za7o2181za7, "_bglt", 5);
	      DEFINE_STRING(BGl_string1956z00zzobject_classz00,
		BgL_bgl_string1956za700za7za7o2182za7, "super of \"~a\" is not a class",
		28);
	      DEFINE_STRING(BGl_string1957z00zzobject_classz00,
		BgL_bgl_string1957za700za7za7o2183za7, "check-plain-class-declation?", 28);
	      DEFINE_STRING(BGl_string1958z00zzobject_classz00,
		BgL_bgl_string1958za700za7za7o2184za7,
		"Should not be able to see a wide class here", 43);
	      DEFINE_STRING(BGl_string1959z00zzobject_classz00,
		BgL_bgl_string1959za700za7za7o2185za7, "super of \"~a\" is a wide class",
		29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2itszd2superzd2envzd2zzobject_classz00,
		BgL_bgl_za762jclassza7d2itsza72186za7,
		BGl_z62jclasszd2itszd2superz62zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1960z00zzobject_classz00,
		BgL_bgl_string1960za700za7za7o2187za7,
		"Only wide classes can inherit of final classes", 46);
	      DEFINE_STRING(BGl_string1961z00zzobject_classz00,
		BgL_bgl_string1961za700za7za7o2188za7,
		"A class can't be \"wide\" and \"final\"", 35);
	      DEFINE_STRING(BGl_string1962z00zzobject_classz00,
		BgL_bgl_string1962za700za7za7o2189za7,
		"super of wide class \"~a\" is not a final class", 45);
	      DEFINE_STRING(BGl_string1963z00zzobject_classz00,
		BgL_bgl_string1963za700za7za7o2190za7, "check-wide-class-declaration?", 29);
	      DEFINE_STRING(BGl_string1964z00zzobject_classz00,
		BgL_bgl_string1964za700za7za7o2191za7,
		"Should not be able to see a plain class here", 44);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2tclasszd2envz00zzobject_classz00,
		BgL_bgl_za762makeza7d2tclass2192z00,
		BGl_z62makezd2tclasszb0zzobject_classz00, 0L, BUNSPEC, 26);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2idzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2idza7b2193za7,
		BGl_z62jclasszd2idzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2classzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2clas2194z00,
		BGl_z62jclasszd2classzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2occurrencezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2occu2195z00,
		BGl_z62wclasszd2occurrencezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classzd2allocatezd2envz00zzobject_classz00,
		BgL_bgl_za762classza7d2alloc2196z00,
		BGl_z62classzd2allocatezb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2itszd2classzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762wclassza7d2itsza72197za7,
		BGl_z62wclasszd2itszd2classzd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2namezd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2name2198z00,
		BGl_z62wclasszd2namezd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2namezd2envz00zzobject_classz00,
		BgL_bgl_za762wclassza7d2name2199z00,
		BGl_z62wclasszd2namezb0zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszf3zd2envz21zzobject_classz00,
		BgL_bgl_za762jclassza7f3za791za72200z00,
		BGl_z62jclasszf3z91zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2importzd2locationzd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762tclassza7d2impo2201z00,
		BGl_z62tclasszd2importzd2locationzd2setz12za2zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2locationzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762tclassza7d2loca2202z00,
		BGl_z62tclasszd2locationzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2classzd2constructorzd2envzd2zzobject_classz00,
		BgL_bgl_za762findza7d2classza72203za7,
		BGl_z62findzd2classzd2constructorz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_widezd2chunkzd2classzd2idzd2envz00zzobject_classz00,
		BgL_bgl_za762wideza7d2chunkza72204za7,
		BGl_z62widezd2chunkzd2classzd2idzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2tvectorzd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2tvec2205z00,
		BGl_z62jclasszd2tvectorzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_wclasszd2initzf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762wclassza7d2init2206z00,
		BGl_z62wclasszd2initzf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2magiczf3zd2envzf3zzobject_classz00,
		BgL_bgl_za762jclassza7d2magi2207z00,
		BGl_z62jclasszd2magiczf3z43zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tclasszd2holderzd2envz00zzobject_classz00,
		BgL_bgl_za762tclassza7d2hold2208z00,
		BGl_z62tclasszd2holderzb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jclasszd2aliaszd2envz00zzobject_classz00,
		BgL_bgl_za762jclassza7d2alia2209z00,
		BGl_z62jclasszd2aliaszb0zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2pointedzd2tozd2byzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2poin2210z00,
		BGl_z62wclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2itszd2classzd2envzd2zzobject_classz00,
		BgL_bgl_za762wclassza7d2itsza72211za7,
		BGl_z62wclasszd2itszd2classz62zzobject_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2classzd2typez12zd2envzc0zzobject_classz00,
		BgL_bgl_za762declareza7d2cla2212z00,
		BGl_z62declarezd2classzd2typez12z70zzobject_classz00, 0L, BUNSPEC, 6);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jclasszd2classzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762jclassza7d2clas2213z00,
		BGl_z62jclasszd2classzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2z42zd2setz12zd2envz82zzobject_classz00,
		BgL_bgl_za762tclassza7d2za742za72214z00,
		BGl_z62tclasszd2z42zd2setz12z32zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2000z00zzobject_classz00,
		BgL_bgl_za762lambda1763za7622215z00, BGl_z62lambda1763z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2001z00zzobject_classz00,
		BgL_bgl_za762lambda1762za7622216z00, BGl_z62lambda1762z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2002z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2217za7,
		BGl_z62zc3z04anonymousza31781ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2003z00zzobject_classz00,
		BgL_bgl_za762lambda1780za7622218z00, BGl_z62lambda1780z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2004z00zzobject_classz00,
		BgL_bgl_za762lambda1779za7622219z00, BGl_z62lambda1779z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2005z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2220za7,
		BGl_z62zc3z04anonymousza31799ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2006z00zzobject_classz00,
		BgL_bgl_za762lambda1798za7622221z00, BGl_z62lambda1798z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2007z00zzobject_classz00,
		BgL_bgl_za762lambda1797za7622222z00, BGl_z62lambda1797z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2008z00zzobject_classz00,
		BgL_bgl_za762lambda1747za7622223z00, BGl_z62lambda1747z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2009z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2224za7,
		BGl_z62zc3z04anonymousza31746ze3ze5zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2010z00zzobject_classz00,
		BgL_bgl_za762lambda1744za7622225z00, BGl_z62lambda1744z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2011z00zzobject_classz00,
		BgL_bgl_za762lambda1741za7622226z00, BGl_z62lambda1741z62zzobject_classz00,
		0L, BUNSPEC, 18);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2012z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2227za7,
		BGl_z62zc3z04anonymousza31839ze3ze5zzobject_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_tclasszd2coercezd2tozd2setz12zd2envz12zzobject_classz00,
		BgL_bgl_za762tclassza7d2coer2228z00,
		BGl_z62tclasszd2coercezd2tozd2setz12za2zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2013z00zzobject_classz00,
		BgL_bgl_za762lambda1838za7622229z00, BGl_z62lambda1838z62zzobject_classz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2014z00zzobject_classz00,
		BgL_bgl_za762lambda1837za7622230z00, BGl_z62lambda1837z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2015z00zzobject_classz00,
		BgL_bgl_za762lambda1828za7622231z00, BGl_z62lambda1828z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2016z00zzobject_classz00,
		BgL_bgl_za762za7c3za704anonymo2232za7,
		BGl_z62zc3z04anonymousza31827ze3ze5zzobject_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2017z00zzobject_classz00,
		BgL_bgl_za762lambda1825za7622233z00, BGl_z62lambda1825z62zzobject_classz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2018z00zzobject_classz00,
		BgL_bgl_za762lambda1822za7622234z00, BGl_z62lambda1822z62zzobject_classz00,
		0L, BUNSPEC, 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_wclasszd2classzd2setz12zd2envzc0zzobject_classz00,
		BgL_bgl_za762wclassza7d2clas2235z00,
		BGl_z62wclasszd2classzd2setz12z70zzobject_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2020z00zzobject_classz00,
		BgL_bgl_za762typeza7d2occurr2236z00,
		BGl_z62typezd2occurrencezd2incr1229z62zzobject_classz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzobject_classz00));
		     ADD_ROOT((void *) (&BGl_tclassz00zzobject_classz00));
		     ADD_ROOT((void *) (&BGl_jclassz00zzobject_classz00));
		     ADD_ROOT((void *) (&BGl_wclassz00zzobject_classz00));
		   
			 ADD_ROOT((void *) (&BGl_za2classzd2typezd2listza2z00zzobject_classz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long
		BgL_checksumz00_2697, char *BgL_fromz00_2698)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_classz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_classz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_classz00();
					BGl_libraryzd2moduleszd2initz00zzobject_classz00();
					BGl_cnstzd2initzd2zzobject_classz00();
					BGl_importedzd2moduleszd2initz00zzobject_classz00();
					BGl_objectzd2initzd2zzobject_classz00();
					BGl_methodzd2initzd2zzobject_classz00();
					return BGl_toplevelzd2initzd2zzobject_classz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "object_class");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "object_class");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"object_class");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_class");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			{	/* Object/class.scm 15 */
				obj_t BgL_cportz00_2537;

				{	/* Object/class.scm 15 */
					obj_t BgL_stringz00_2545;

					BgL_stringz00_2545 = BGl_string2023z00zzobject_classz00;
					{	/* Object/class.scm 15 */
						obj_t BgL_startz00_2546;

						BgL_startz00_2546 = BINT(((long) 0));
						{	/* Object/class.scm 15 */
							obj_t BgL_endz00_2547;

							BgL_endz00_2547 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2545)));
							{	/* Object/class.scm 15 */

								BgL_cportz00_2537 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2545, BgL_startz00_2546, BgL_endz00_2547);
				}}}}
				{
					long BgL_iz00_2538;

					BgL_iz00_2538 = ((long) 29);
				BgL_loopz00_2539:
					if ((BgL_iz00_2538 == ((long) -1)))
						{	/* Object/class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/class.scm 15 */
							{	/* Object/class.scm 15 */
								obj_t BgL_arg2026z00_2541;

								{	/* Object/class.scm 15 */

									{	/* Object/class.scm 15 */
										obj_t BgL_locationz00_2543;

										BgL_locationz00_2543 = BBOOL(((bool_t) 0));
										{	/* Object/class.scm 15 */

											BgL_arg2026z00_2541 =
												BGl_readz00zz__readerz00(BgL_cportz00_2537,
												BgL_locationz00_2543);
										}
									}
								}
								{	/* Object/class.scm 15 */
									int BgL_tmpz00_2727;

									BgL_tmpz00_2727 = (int) (BgL_iz00_2538);
									CNST_TABLE_SET(BgL_tmpz00_2727, BgL_arg2026z00_2541);
							}}
							{	/* Object/class.scm 15 */
								int BgL_auxz00_2544;

								BgL_auxz00_2544 = (int) ((BgL_iz00_2538 - ((long) 1)));
								{
									long BgL_iz00_2732;

									BgL_iz00_2732 = (long) (BgL_auxz00_2544);
									BgL_iz00_2538 = BgL_iz00_2732;
									goto BgL_loopz00_2539;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			BGl_za2classzd2typezd2listza2z00zzobject_classz00 = BNIL;
			return BUNSPEC;
		}

	}



/* make-tclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2tclasszd2zzobject_classz00(obj_t
		BgL_id1179z00_3, obj_t BgL_name1180z00_4, obj_t BgL_siza7e1181za7_5,
		obj_t BgL_class1182z00_6, obj_t BgL_coercezd2to1183zd2_7,
		obj_t BgL_parents1184z00_8, bool_t BgL_initzf31185zf3_9,
		bool_t BgL_magiczf31186zf3_10, obj_t BgL_z421187z42_11,
		obj_t BgL_alias1188z00_12, obj_t BgL_pointedzd2tozd2by1189z00_13,
		obj_t BgL_tvector1190z00_14, obj_t BgL_location1191z00_15,
		obj_t BgL_importzd2location1192zd2_16, int BgL_occurrence1193z00_17,
		obj_t BgL_itszd2super1194zd2_18, obj_t BgL_slots1195z00_19,
		BgL_globalz00_bglt BgL_holder1196z00_20, obj_t BgL_widening1197z00_21,
		long BgL_depth1198z00_22, bool_t BgL_finalzf31199zf3_23,
		obj_t BgL_constructor1200z00_24,
		obj_t BgL_virtualzd2slotszd2number1201z00_25,
		bool_t BgL_abstractzf31202zf3_26, obj_t BgL_widezd2type1203zd2_27,
		obj_t BgL_subclasses1204z00_28)
	{
		{	/* Object/class.sch 146 */
			{	/* Object/class.sch 146 */
				BgL_typez00_bglt BgL_new1143z00_2550;

				{	/* Object/class.sch 146 */
					BgL_typez00_bglt BgL_tmp1141z00_2551;
					BgL_tclassz00_bglt BgL_wide1142z00_2552;

					{
						BgL_typez00_bglt BgL_auxz00_2735;

						{	/* Object/class.sch 146 */
							BgL_typez00_bglt BgL_new1140z00_2553;

							BgL_new1140z00_2553 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Object/class.sch 146 */
								long BgL_arg1243z00_2554;

								{	/* Object/class.sch 146 */
									long BgL_res1864z00_2555;

									BgL_res1864z00_2555 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1243z00_2554 = BgL_res1864z00_2555;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1140z00_2553),
									BgL_arg1243z00_2554);
							}
							{	/* Object/class.sch 146 */
								BgL_objectz00_bglt BgL_tmpz00_2740;

								BgL_tmpz00_2740 = ((BgL_objectz00_bglt) BgL_new1140z00_2553);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2740, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1140z00_2553);
							BgL_auxz00_2735 = BgL_new1140z00_2553;
						}
						BgL_tmp1141z00_2551 = ((BgL_typez00_bglt) BgL_auxz00_2735);
					}
					BgL_wide1142z00_2552 =
						((BgL_tclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_tclassz00_bgl))));
					{	/* Object/class.sch 146 */
						obj_t BgL_auxz00_2748;
						BgL_objectz00_bglt BgL_tmpz00_2746;

						BgL_auxz00_2748 = ((obj_t) BgL_wide1142z00_2552);
						BgL_tmpz00_2746 = ((BgL_objectz00_bglt) BgL_tmp1141z00_2551);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2746, BgL_auxz00_2748);
					}
					((BgL_objectz00_bglt) BgL_tmp1141z00_2551);
					{	/* Object/class.sch 146 */
						long BgL_arg1242z00_2556;

						{	/* Object/class.sch 146 */
							long BgL_res1865z00_2557;

							BgL_res1865z00_2557 =
								BGL_CLASS_INDEX(BGl_tclassz00zzobject_classz00);
							BgL_arg1242z00_2556 = BgL_res1865z00_2557;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1141z00_2551), BgL_arg1242z00_2556);
					}
					BgL_new1143z00_2550 = ((BgL_typez00_bglt) BgL_tmp1141z00_2551);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1143z00_2550)))->BgL_idz00) =
					((obj_t) BgL_id1179z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_namez00) =
					((obj_t) BgL_name1180z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1181za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_classz00) =
					((obj_t) BgL_class1182z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1183zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_parentsz00) =
					((obj_t) BgL_parents1184z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31185zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31186zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_z42z42) =
					((obj_t) BgL_z421187z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_aliasz00) =
					((obj_t) BgL_alias1188z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1189z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1190z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_locationz00) =
					((obj_t) BgL_location1191z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1192zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1143z00_2550)))->BgL_occurrencez00) =
					((int) BgL_occurrence1193z00_17), BUNSPEC);
				{
					BgL_tclassz00_bglt BgL_auxz00_2786;

					{
						obj_t BgL_auxz00_2787;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2788;

							BgL_tmpz00_2788 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2787 = BGL_OBJECT_WIDENING(BgL_tmpz00_2788);
						}
						BgL_auxz00_2786 = ((BgL_tclassz00_bglt) BgL_auxz00_2787);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2786))->
							BgL_itszd2superzd2) =
						((obj_t) BgL_itszd2super1194zd2_18), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2793;

					{
						obj_t BgL_auxz00_2794;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2795;

							BgL_tmpz00_2795 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2794 = BGL_OBJECT_WIDENING(BgL_tmpz00_2795);
						}
						BgL_auxz00_2793 = ((BgL_tclassz00_bglt) BgL_auxz00_2794);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2793))->BgL_slotsz00) =
						((obj_t) BgL_slots1195z00_19), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2800;

					{
						obj_t BgL_auxz00_2801;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2802;

							BgL_tmpz00_2802 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2801 = BGL_OBJECT_WIDENING(BgL_tmpz00_2802);
						}
						BgL_auxz00_2800 = ((BgL_tclassz00_bglt) BgL_auxz00_2801);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2800))->BgL_holderz00) =
						((BgL_globalz00_bglt) BgL_holder1196z00_20), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2807;

					{
						obj_t BgL_auxz00_2808;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2809;

							BgL_tmpz00_2809 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2808 = BGL_OBJECT_WIDENING(BgL_tmpz00_2809);
						}
						BgL_auxz00_2807 = ((BgL_tclassz00_bglt) BgL_auxz00_2808);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2807))->BgL_wideningz00) =
						((obj_t) BgL_widening1197z00_21), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2814;

					{
						obj_t BgL_auxz00_2815;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2816;

							BgL_tmpz00_2816 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2815 = BGL_OBJECT_WIDENING(BgL_tmpz00_2816);
						}
						BgL_auxz00_2814 = ((BgL_tclassz00_bglt) BgL_auxz00_2815);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2814))->BgL_depthz00) =
						((long) BgL_depth1198z00_22), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2821;

					{
						obj_t BgL_auxz00_2822;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2823;

							BgL_tmpz00_2823 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2822 = BGL_OBJECT_WIDENING(BgL_tmpz00_2823);
						}
						BgL_auxz00_2821 = ((BgL_tclassz00_bglt) BgL_auxz00_2822);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2821))->BgL_finalzf3zf3) =
						((bool_t) BgL_finalzf31199zf3_23), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2828;

					{
						obj_t BgL_auxz00_2829;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2830;

							BgL_tmpz00_2830 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2829 = BGL_OBJECT_WIDENING(BgL_tmpz00_2830);
						}
						BgL_auxz00_2828 = ((BgL_tclassz00_bglt) BgL_auxz00_2829);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2828))->
							BgL_constructorz00) =
						((obj_t) BgL_constructor1200z00_24), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2835;

					{
						obj_t BgL_auxz00_2836;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2837;

							BgL_tmpz00_2837 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2836 = BGL_OBJECT_WIDENING(BgL_tmpz00_2837);
						}
						BgL_auxz00_2835 = ((BgL_tclassz00_bglt) BgL_auxz00_2836);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2835))->
							BgL_virtualzd2slotszd2numberz00) =
						((obj_t) BgL_virtualzd2slotszd2number1201z00_25), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2842;

					{
						obj_t BgL_auxz00_2843;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2844;

							BgL_tmpz00_2844 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2843 = BGL_OBJECT_WIDENING(BgL_tmpz00_2844);
						}
						BgL_auxz00_2842 = ((BgL_tclassz00_bglt) BgL_auxz00_2843);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2842))->
							BgL_abstractzf3zf3) =
						((bool_t) BgL_abstractzf31202zf3_26), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2849;

					{
						obj_t BgL_auxz00_2850;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2851;

							BgL_tmpz00_2851 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2850 = BGL_OBJECT_WIDENING(BgL_tmpz00_2851);
						}
						BgL_auxz00_2849 = ((BgL_tclassz00_bglt) BgL_auxz00_2850);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2849))->
							BgL_widezd2typezd2) =
						((obj_t) BgL_widezd2type1203zd2_27), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_2856;

					{
						obj_t BgL_auxz00_2857;

						{	/* Object/class.sch 146 */
							BgL_objectz00_bglt BgL_tmpz00_2858;

							BgL_tmpz00_2858 = ((BgL_objectz00_bglt) BgL_new1143z00_2550);
							BgL_auxz00_2857 = BGL_OBJECT_WIDENING(BgL_tmpz00_2858);
						}
						BgL_auxz00_2856 = ((BgL_tclassz00_bglt) BgL_auxz00_2857);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2856))->
							BgL_subclassesz00) = ((obj_t) BgL_subclasses1204z00_28), BUNSPEC);
				}
				return BgL_new1143z00_2550;
			}
		}

	}



/* &make-tclass */
	BgL_typez00_bglt BGl_z62makezd2tclasszb0zzobject_classz00(obj_t
		BgL_envz00_1918, obj_t BgL_id1179z00_1919, obj_t BgL_name1180z00_1920,
		obj_t BgL_siza7e1181za7_1921, obj_t BgL_class1182z00_1922,
		obj_t BgL_coercezd2to1183zd2_1923, obj_t BgL_parents1184z00_1924,
		obj_t BgL_initzf31185zf3_1925, obj_t BgL_magiczf31186zf3_1926,
		obj_t BgL_z421187z42_1927, obj_t BgL_alias1188z00_1928,
		obj_t BgL_pointedzd2tozd2by1189z00_1929, obj_t BgL_tvector1190z00_1930,
		obj_t BgL_location1191z00_1931, obj_t BgL_importzd2location1192zd2_1932,
		obj_t BgL_occurrence1193z00_1933, obj_t BgL_itszd2super1194zd2_1934,
		obj_t BgL_slots1195z00_1935, obj_t BgL_holder1196z00_1936,
		obj_t BgL_widening1197z00_1937, obj_t BgL_depth1198z00_1938,
		obj_t BgL_finalzf31199zf3_1939, obj_t BgL_constructor1200z00_1940,
		obj_t BgL_virtualzd2slotszd2number1201z00_1941,
		obj_t BgL_abstractzf31202zf3_1942, obj_t BgL_widezd2type1203zd2_1943,
		obj_t BgL_subclasses1204z00_1944)
	{
		{	/* Object/class.sch 146 */
			return
				BGl_makezd2tclasszd2zzobject_classz00(BgL_id1179z00_1919,
				BgL_name1180z00_1920, BgL_siza7e1181za7_1921, BgL_class1182z00_1922,
				BgL_coercezd2to1183zd2_1923, BgL_parents1184z00_1924,
				CBOOL(BgL_initzf31185zf3_1925), CBOOL(BgL_magiczf31186zf3_1926),
				BgL_z421187z42_1927, BgL_alias1188z00_1928,
				BgL_pointedzd2tozd2by1189z00_1929, BgL_tvector1190z00_1930,
				BgL_location1191z00_1931, BgL_importzd2location1192zd2_1932,
				CINT(BgL_occurrence1193z00_1933), BgL_itszd2super1194zd2_1934,
				BgL_slots1195z00_1935, ((BgL_globalz00_bglt) BgL_holder1196z00_1936),
				BgL_widening1197z00_1937, (long) CINT(BgL_depth1198z00_1938),
				CBOOL(BgL_finalzf31199zf3_1939), BgL_constructor1200z00_1940,
				BgL_virtualzd2slotszd2number1201z00_1941,
				CBOOL(BgL_abstractzf31202zf3_1942), BgL_widezd2type1203zd2_1943,
				BgL_subclasses1204z00_1944);
		}

	}



/* tclass? */
	BGL_EXPORTED_DEF bool_t BGl_tclasszf3zf3zzobject_classz00(obj_t BgL_objz00_29)
	{
		{	/* Object/class.sch 147 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_29,
				BGl_tclassz00zzobject_classz00);
		}

	}



/* &tclass? */
	obj_t BGl_z62tclasszf3z91zzobject_classz00(obj_t BgL_envz00_1945,
		obj_t BgL_objz00_1946)
	{
		{	/* Object/class.sch 147 */
			return BBOOL(BGl_tclasszf3zf3zzobject_classz00(BgL_objz00_1946));
		}

	}



/* tclass-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_tclasszd2nilzd2zzobject_classz00()
	{
		{	/* Object/class.sch 148 */
			{	/* Object/class.sch 148 */
				obj_t BgL_classz00_1447;

				BgL_classz00_1447 = BGl_tclassz00zzobject_classz00;
				{	/* Object/class.sch 148 */
					obj_t BgL__ortest_1106z00_1448;

					BgL__ortest_1106z00_1448 = BGL_CLASS_NIL(BgL_classz00_1447);
					if (CBOOL(BgL__ortest_1106z00_1448))
						{	/* Object/class.sch 148 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1448);
						}
					else
						{	/* Object/class.sch 148 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1447));
						}
				}
			}
		}

	}



/* &tclass-nil */
	BgL_typez00_bglt BGl_z62tclasszd2nilzb0zzobject_classz00(obj_t
		BgL_envz00_1947)
	{
		{	/* Object/class.sch 148 */
			return BGl_tclasszd2nilzd2zzobject_classz00();
		}

	}



/* tclass-subclasses */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2subclasseszd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_30)
	{
		{	/* Object/class.sch 149 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2881;

				{
					obj_t BgL_auxz00_2882;

					{	/* Object/class.sch 149 */
						BgL_objectz00_bglt BgL_tmpz00_2883;

						BgL_tmpz00_2883 = ((BgL_objectz00_bglt) BgL_oz00_30);
						BgL_auxz00_2882 = BGL_OBJECT_WIDENING(BgL_tmpz00_2883);
					}
					BgL_auxz00_2881 = ((BgL_tclassz00_bglt) BgL_auxz00_2882);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2881))->BgL_subclassesz00);
			}
		}

	}



/* &tclass-subclasses */
	obj_t BGl_z62tclasszd2subclasseszb0zzobject_classz00(obj_t BgL_envz00_1948,
		obj_t BgL_oz00_1949)
	{
		{	/* Object/class.sch 149 */
			return
				BGl_tclasszd2subclasseszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1949));
		}

	}



/* tclass-subclasses-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2subclasseszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_31, obj_t BgL_vz00_32)
	{
		{	/* Object/class.sch 150 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2890;

				{
					obj_t BgL_auxz00_2891;

					{	/* Object/class.sch 150 */
						BgL_objectz00_bglt BgL_tmpz00_2892;

						BgL_tmpz00_2892 = ((BgL_objectz00_bglt) BgL_oz00_31);
						BgL_auxz00_2891 = BGL_OBJECT_WIDENING(BgL_tmpz00_2892);
					}
					BgL_auxz00_2890 = ((BgL_tclassz00_bglt) BgL_auxz00_2891);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2890))->
						BgL_subclassesz00) = ((obj_t) BgL_vz00_32), BUNSPEC);
			}
		}

	}



/* &tclass-subclasses-set! */
	obj_t BGl_z62tclasszd2subclasseszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_1950, obj_t BgL_oz00_1951, obj_t BgL_vz00_1952)
	{
		{	/* Object/class.sch 150 */
			return
				BGl_tclasszd2subclasseszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1951), BgL_vz00_1952);
		}

	}



/* tclass-wide-type */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2widezd2typez00zzobject_classz00(BgL_typez00_bglt BgL_oz00_33)
	{
		{	/* Object/class.sch 151 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2899;

				{
					obj_t BgL_auxz00_2900;

					{	/* Object/class.sch 151 */
						BgL_objectz00_bglt BgL_tmpz00_2901;

						BgL_tmpz00_2901 = ((BgL_objectz00_bglt) BgL_oz00_33);
						BgL_auxz00_2900 = BGL_OBJECT_WIDENING(BgL_tmpz00_2901);
					}
					BgL_auxz00_2899 = ((BgL_tclassz00_bglt) BgL_auxz00_2900);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2899))->BgL_widezd2typezd2);
			}
		}

	}



/* &tclass-wide-type */
	obj_t BGl_z62tclasszd2widezd2typez62zzobject_classz00(obj_t BgL_envz00_1953,
		obj_t BgL_oz00_1954)
	{
		{	/* Object/class.sch 151 */
			return
				BGl_tclasszd2widezd2typez00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1954));
		}

	}



/* tclass-wide-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2widezd2typezd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_34, obj_t BgL_vz00_35)
	{
		{	/* Object/class.sch 152 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2908;

				{
					obj_t BgL_auxz00_2909;

					{	/* Object/class.sch 152 */
						BgL_objectz00_bglt BgL_tmpz00_2910;

						BgL_tmpz00_2910 = ((BgL_objectz00_bglt) BgL_oz00_34);
						BgL_auxz00_2909 = BGL_OBJECT_WIDENING(BgL_tmpz00_2910);
					}
					BgL_auxz00_2908 = ((BgL_tclassz00_bglt) BgL_auxz00_2909);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2908))->
						BgL_widezd2typezd2) = ((obj_t) BgL_vz00_35), BUNSPEC);
			}
		}

	}



/* &tclass-wide-type-set! */
	obj_t BGl_z62tclasszd2widezd2typezd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_1955, obj_t BgL_oz00_1956, obj_t BgL_vz00_1957)
	{
		{	/* Object/class.sch 152 */
			return
				BGl_tclasszd2widezd2typezd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1956), BgL_vz00_1957);
		}

	}



/* tclass-abstract? */
	BGL_EXPORTED_DEF bool_t
		BGl_tclasszd2abstractzf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_36)
	{
		{	/* Object/class.sch 153 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2917;

				{
					obj_t BgL_auxz00_2918;

					{	/* Object/class.sch 153 */
						BgL_objectz00_bglt BgL_tmpz00_2919;

						BgL_tmpz00_2919 = ((BgL_objectz00_bglt) BgL_oz00_36);
						BgL_auxz00_2918 = BGL_OBJECT_WIDENING(BgL_tmpz00_2919);
					}
					BgL_auxz00_2917 = ((BgL_tclassz00_bglt) BgL_auxz00_2918);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2917))->BgL_abstractzf3zf3);
			}
		}

	}



/* &tclass-abstract? */
	obj_t BGl_z62tclasszd2abstractzf3z43zzobject_classz00(obj_t BgL_envz00_1958,
		obj_t BgL_oz00_1959)
	{
		{	/* Object/class.sch 153 */
			return
				BBOOL(BGl_tclasszd2abstractzf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_1959)));
		}

	}



/* tclass-virtual-slots-number */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2virtualzd2slotszd2numberzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_39)
	{
		{	/* Object/class.sch 155 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2927;

				{
					obj_t BgL_auxz00_2928;

					{	/* Object/class.sch 155 */
						BgL_objectz00_bglt BgL_tmpz00_2929;

						BgL_tmpz00_2929 = ((BgL_objectz00_bglt) BgL_oz00_39);
						BgL_auxz00_2928 = BGL_OBJECT_WIDENING(BgL_tmpz00_2929);
					}
					BgL_auxz00_2927 = ((BgL_tclassz00_bglt) BgL_auxz00_2928);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2927))->
					BgL_virtualzd2slotszd2numberz00);
			}
		}

	}



/* &tclass-virtual-slots-number */
	obj_t BGl_z62tclasszd2virtualzd2slotszd2numberzb0zzobject_classz00(obj_t
		BgL_envz00_1960, obj_t BgL_oz00_1961)
	{
		{	/* Object/class.sch 155 */
			return
				BGl_tclasszd2virtualzd2slotszd2numberzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1961));
		}

	}



/* tclass-virtual-slots-number-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2virtualzd2slotszd2numberzd2setz12z12zzobject_classz00
		(BgL_typez00_bglt BgL_oz00_40, obj_t BgL_vz00_41)
	{
		{	/* Object/class.sch 156 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2936;

				{
					obj_t BgL_auxz00_2937;

					{	/* Object/class.sch 156 */
						BgL_objectz00_bglt BgL_tmpz00_2938;

						BgL_tmpz00_2938 = ((BgL_objectz00_bglt) BgL_oz00_40);
						BgL_auxz00_2937 = BGL_OBJECT_WIDENING(BgL_tmpz00_2938);
					}
					BgL_auxz00_2936 = ((BgL_tclassz00_bglt) BgL_auxz00_2937);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2936))->
						BgL_virtualzd2slotszd2numberz00) = ((obj_t) BgL_vz00_41), BUNSPEC);
			}
		}

	}



/* &tclass-virtual-slots-number-set! */
	obj_t
		BGl_z62tclasszd2virtualzd2slotszd2numberzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_1962, obj_t BgL_oz00_1963, obj_t BgL_vz00_1964)
	{
		{	/* Object/class.sch 156 */
			return
				BGl_tclasszd2virtualzd2slotszd2numberzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1963), BgL_vz00_1964);
		}

	}



/* tclass-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2constructorzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_42)
	{
		{	/* Object/class.sch 157 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2945;

				{
					obj_t BgL_auxz00_2946;

					{	/* Object/class.sch 157 */
						BgL_objectz00_bglt BgL_tmpz00_2947;

						BgL_tmpz00_2947 = ((BgL_objectz00_bglt) BgL_oz00_42);
						BgL_auxz00_2946 = BGL_OBJECT_WIDENING(BgL_tmpz00_2947);
					}
					BgL_auxz00_2945 = ((BgL_tclassz00_bglt) BgL_auxz00_2946);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2945))->BgL_constructorz00);
			}
		}

	}



/* &tclass-constructor */
	obj_t BGl_z62tclasszd2constructorzb0zzobject_classz00(obj_t BgL_envz00_1965,
		obj_t BgL_oz00_1966)
	{
		{	/* Object/class.sch 157 */
			return
				BGl_tclasszd2constructorzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1966));
		}

	}



/* tclass-final? */
	BGL_EXPORTED_DEF bool_t
		BGl_tclasszd2finalzf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_45)
	{
		{	/* Object/class.sch 159 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2954;

				{
					obj_t BgL_auxz00_2955;

					{	/* Object/class.sch 159 */
						BgL_objectz00_bglt BgL_tmpz00_2956;

						BgL_tmpz00_2956 = ((BgL_objectz00_bglt) BgL_oz00_45);
						BgL_auxz00_2955 = BGL_OBJECT_WIDENING(BgL_tmpz00_2956);
					}
					BgL_auxz00_2954 = ((BgL_tclassz00_bglt) BgL_auxz00_2955);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2954))->BgL_finalzf3zf3);
			}
		}

	}



/* &tclass-final? */
	obj_t BGl_z62tclasszd2finalzf3z43zzobject_classz00(obj_t BgL_envz00_1967,
		obj_t BgL_oz00_1968)
	{
		{	/* Object/class.sch 159 */
			return
				BBOOL(BGl_tclasszd2finalzf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_1968)));
		}

	}



/* tclass-depth */
	BGL_EXPORTED_DEF long BGl_tclasszd2depthzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_48)
	{
		{	/* Object/class.sch 161 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2964;

				{
					obj_t BgL_auxz00_2965;

					{	/* Object/class.sch 161 */
						BgL_objectz00_bglt BgL_tmpz00_2966;

						BgL_tmpz00_2966 = ((BgL_objectz00_bglt) BgL_oz00_48);
						BgL_auxz00_2965 = BGL_OBJECT_WIDENING(BgL_tmpz00_2966);
					}
					BgL_auxz00_2964 = ((BgL_tclassz00_bglt) BgL_auxz00_2965);
				}
				return (((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2964))->BgL_depthz00);
			}
		}

	}



/* &tclass-depth */
	obj_t BGl_z62tclasszd2depthzb0zzobject_classz00(obj_t BgL_envz00_1969,
		obj_t BgL_oz00_1970)
	{
		{	/* Object/class.sch 161 */
			return
				BINT(BGl_tclasszd2depthzd2zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_1970)));
		}

	}



/* tclass-depth-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2depthzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_49, long BgL_vz00_50)
	{
		{	/* Object/class.sch 162 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2974;

				{
					obj_t BgL_auxz00_2975;

					{	/* Object/class.sch 162 */
						BgL_objectz00_bglt BgL_tmpz00_2976;

						BgL_tmpz00_2976 = ((BgL_objectz00_bglt) BgL_oz00_49);
						BgL_auxz00_2975 = BGL_OBJECT_WIDENING(BgL_tmpz00_2976);
					}
					BgL_auxz00_2974 = ((BgL_tclassz00_bglt) BgL_auxz00_2975);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2974))->BgL_depthz00) =
					((long) BgL_vz00_50), BUNSPEC);
		}}

	}



/* &tclass-depth-set! */
	obj_t BGl_z62tclasszd2depthzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_1971, obj_t BgL_oz00_1972, obj_t BgL_vz00_1973)
	{
		{	/* Object/class.sch 162 */
			return
				BGl_tclasszd2depthzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1972), (long) CINT(BgL_vz00_1973));
		}

	}



/* tclass-widening */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2wideningzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_51)
	{
		{	/* Object/class.sch 163 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2984;

				{
					obj_t BgL_auxz00_2985;

					{	/* Object/class.sch 163 */
						BgL_objectz00_bglt BgL_tmpz00_2986;

						BgL_tmpz00_2986 = ((BgL_objectz00_bglt) BgL_oz00_51);
						BgL_auxz00_2985 = BGL_OBJECT_WIDENING(BgL_tmpz00_2986);
					}
					BgL_auxz00_2984 = ((BgL_tclassz00_bglt) BgL_auxz00_2985);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2984))->BgL_wideningz00);
			}
		}

	}



/* &tclass-widening */
	obj_t BGl_z62tclasszd2wideningzb0zzobject_classz00(obj_t BgL_envz00_1974,
		obj_t BgL_oz00_1975)
	{
		{	/* Object/class.sch 163 */
			return
				BGl_tclasszd2wideningzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1975));
		}

	}



/* tclass-holder */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_tclasszd2holderzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_54)
	{
		{	/* Object/class.sch 165 */
			{
				BgL_tclassz00_bglt BgL_auxz00_2993;

				{
					obj_t BgL_auxz00_2994;

					{	/* Object/class.sch 165 */
						BgL_objectz00_bglt BgL_tmpz00_2995;

						BgL_tmpz00_2995 = ((BgL_objectz00_bglt) BgL_oz00_54);
						BgL_auxz00_2994 = BGL_OBJECT_WIDENING(BgL_tmpz00_2995);
					}
					BgL_auxz00_2993 = ((BgL_tclassz00_bglt) BgL_auxz00_2994);
				}
				return (((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2993))->BgL_holderz00);
			}
		}

	}



/* &tclass-holder */
	BgL_globalz00_bglt BGl_z62tclasszd2holderzb0zzobject_classz00(obj_t
		BgL_envz00_1976, obj_t BgL_oz00_1977)
	{
		{	/* Object/class.sch 165 */
			return
				BGl_tclasszd2holderzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1977));
		}

	}



/* tclass-slots */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2slotszd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_57)
	{
		{	/* Object/class.sch 167 */
			{
				BgL_tclassz00_bglt BgL_auxz00_3002;

				{
					obj_t BgL_auxz00_3003;

					{	/* Object/class.sch 167 */
						BgL_objectz00_bglt BgL_tmpz00_3004;

						BgL_tmpz00_3004 = ((BgL_objectz00_bglt) BgL_oz00_57);
						BgL_auxz00_3003 = BGL_OBJECT_WIDENING(BgL_tmpz00_3004);
					}
					BgL_auxz00_3002 = ((BgL_tclassz00_bglt) BgL_auxz00_3003);
				}
				return (((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3002))->BgL_slotsz00);
			}
		}

	}



/* &tclass-slots */
	obj_t BGl_z62tclasszd2slotszb0zzobject_classz00(obj_t BgL_envz00_1978,
		obj_t BgL_oz00_1979)
	{
		{	/* Object/class.sch 167 */
			return
				BGl_tclasszd2slotszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1979));
		}

	}



/* tclass-slots-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2slotszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_58, obj_t BgL_vz00_59)
	{
		{	/* Object/class.sch 168 */
			{
				BgL_tclassz00_bglt BgL_auxz00_3011;

				{
					obj_t BgL_auxz00_3012;

					{	/* Object/class.sch 168 */
						BgL_objectz00_bglt BgL_tmpz00_3013;

						BgL_tmpz00_3013 = ((BgL_objectz00_bglt) BgL_oz00_58);
						BgL_auxz00_3012 = BGL_OBJECT_WIDENING(BgL_tmpz00_3013);
					}
					BgL_auxz00_3011 = ((BgL_tclassz00_bglt) BgL_auxz00_3012);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3011))->BgL_slotsz00) =
					((obj_t) BgL_vz00_59), BUNSPEC);
			}
		}

	}



/* &tclass-slots-set! */
	obj_t BGl_z62tclasszd2slotszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_1980, obj_t BgL_oz00_1981, obj_t BgL_vz00_1982)
	{
		{	/* Object/class.sch 168 */
			return
				BGl_tclasszd2slotszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1981), BgL_vz00_1982);
		}

	}



/* tclass-its-super */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2itszd2superz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_60)
	{
		{	/* Object/class.sch 169 */
			{
				BgL_tclassz00_bglt BgL_auxz00_3020;

				{
					obj_t BgL_auxz00_3021;

					{	/* Object/class.sch 169 */
						BgL_objectz00_bglt BgL_tmpz00_3022;

						BgL_tmpz00_3022 = ((BgL_objectz00_bglt) BgL_oz00_60);
						BgL_auxz00_3021 = BGL_OBJECT_WIDENING(BgL_tmpz00_3022);
					}
					BgL_auxz00_3020 = ((BgL_tclassz00_bglt) BgL_auxz00_3021);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3020))->BgL_itszd2superzd2);
			}
		}

	}



/* &tclass-its-super */
	obj_t BGl_z62tclasszd2itszd2superz62zzobject_classz00(obj_t BgL_envz00_1983,
		obj_t BgL_oz00_1984)
	{
		{	/* Object/class.sch 169 */
			return
				BGl_tclasszd2itszd2superz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1984));
		}

	}



/* tclass-its-super-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2itszd2superzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_61, obj_t BgL_vz00_62)
	{
		{	/* Object/class.sch 170 */
			{
				BgL_tclassz00_bglt BgL_auxz00_3029;

				{
					obj_t BgL_auxz00_3030;

					{	/* Object/class.sch 170 */
						BgL_objectz00_bglt BgL_tmpz00_3031;

						BgL_tmpz00_3031 = ((BgL_objectz00_bglt) BgL_oz00_61);
						BgL_auxz00_3030 = BGL_OBJECT_WIDENING(BgL_tmpz00_3031);
					}
					BgL_auxz00_3029 = ((BgL_tclassz00_bglt) BgL_auxz00_3030);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3029))->
						BgL_itszd2superzd2) = ((obj_t) BgL_vz00_62), BUNSPEC);
			}
		}

	}



/* &tclass-its-super-set! */
	obj_t BGl_z62tclasszd2itszd2superzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_1985, obj_t BgL_oz00_1986, obj_t BgL_vz00_1987)
	{
		{	/* Object/class.sch 170 */
			return
				BGl_tclasszd2itszd2superzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1986), BgL_vz00_1987);
		}

	}



/* tclass-occurrence */
	BGL_EXPORTED_DEF int
		BGl_tclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_63)
	{
		{	/* Object/class.sch 171 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_63)))->BgL_occurrencez00);
		}

	}



/* &tclass-occurrence */
	obj_t BGl_z62tclasszd2occurrencezb0zzobject_classz00(obj_t BgL_envz00_1988,
		obj_t BgL_oz00_1989)
	{
		{	/* Object/class.sch 171 */
			return
				BINT(BGl_tclasszd2occurrencezd2zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_1989)));
		}

	}



/* tclass-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_64, int BgL_vz00_65)
	{
		{	/* Object/class.sch 172 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_64)))->BgL_occurrencez00) =
				((int) BgL_vz00_65), BUNSPEC);
		}

	}



/* &tclass-occurrence-set! */
	obj_t BGl_z62tclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_1990, obj_t BgL_oz00_1991, obj_t BgL_vz00_1992)
	{
		{	/* Object/class.sch 172 */
			return
				BGl_tclasszd2occurrencezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1991), CINT(BgL_vz00_1992));
		}

	}



/* tclass-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_66)
	{
		{	/* Object/class.sch 173 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_66)))->BgL_importzd2locationzd2);
		}

	}



/* &tclass-import-location */
	obj_t BGl_z62tclasszd2importzd2locationz62zzobject_classz00(obj_t
		BgL_envz00_1993, obj_t BgL_oz00_1994)
	{
		{	/* Object/class.sch 173 */
			return
				BGl_tclasszd2importzd2locationz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1994));
		}

	}



/* tclass-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2importzd2locationzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_67, obj_t BgL_vz00_68)
	{
		{	/* Object/class.sch 174 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_67)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_68), BUNSPEC);
		}

	}



/* &tclass-import-location-set! */
	obj_t BGl_z62tclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_1995, obj_t BgL_oz00_1996, obj_t BgL_vz00_1997)
	{
		{	/* Object/class.sch 174 */
			return
				BGl_tclasszd2importzd2locationzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1996), BgL_vz00_1997);
		}

	}



/* tclass-location */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_69)
	{
		{	/* Object/class.sch 175 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_69)))->BgL_locationz00);
		}

	}



/* &tclass-location */
	obj_t BGl_z62tclasszd2locationzb0zzobject_classz00(obj_t BgL_envz00_1998,
		obj_t BgL_oz00_1999)
	{
		{	/* Object/class.sch 175 */
			return
				BGl_tclasszd2locationzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_1999));
		}

	}



/* tclass-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_70, obj_t BgL_vz00_71)
	{
		{	/* Object/class.sch 176 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_70)))->BgL_locationz00) =
				((obj_t) BgL_vz00_71), BUNSPEC);
		}

	}



/* &tclass-location-set! */
	obj_t BGl_z62tclasszd2locationzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2000, obj_t BgL_oz00_2001, obj_t BgL_vz00_2002)
	{
		{	/* Object/class.sch 176 */
			return
				BGl_tclasszd2locationzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2001), BgL_vz00_2002);
		}

	}



/* tclass-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_72)
	{
		{	/* Object/class.sch 177 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_72)))->BgL_tvectorz00);
		}

	}



/* &tclass-tvector */
	obj_t BGl_z62tclasszd2tvectorzb0zzobject_classz00(obj_t BgL_envz00_2003,
		obj_t BgL_oz00_2004)
	{
		{	/* Object/class.sch 177 */
			return
				BGl_tclasszd2tvectorzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2004));
		}

	}



/* tclass-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_73, obj_t BgL_vz00_74)
	{
		{	/* Object/class.sch 178 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_73)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_74), BUNSPEC);
		}

	}



/* &tclass-tvector-set! */
	obj_t BGl_z62tclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2005, obj_t BgL_oz00_2006, obj_t BgL_vz00_2007)
	{
		{	/* Object/class.sch 178 */
			return
				BGl_tclasszd2tvectorzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2006), BgL_vz00_2007);
		}

	}



/* tclass-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_75)
	{
		{	/* Object/class.sch 179 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_75)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &tclass-pointed-to-by */
	obj_t BGl_z62tclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t
		BgL_envz00_2008, obj_t BgL_oz00_2009)
	{
		{	/* Object/class.sch 179 */
			return
				BGl_tclasszd2pointedzd2tozd2byzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2009));
		}

	}



/* tclass-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_76, obj_t BgL_vz00_77)
	{
		{	/* Object/class.sch 180 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_76)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_77), BUNSPEC);
		}

	}



/* &tclass-pointed-to-by-set! */
	obj_t BGl_z62tclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2010, obj_t BgL_oz00_2011, obj_t BgL_vz00_2012)
	{
		{	/* Object/class.sch 180 */
			return
				BGl_tclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2011), BgL_vz00_2012);
		}

	}



/* tclass-alias */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_78)
	{
		{	/* Object/class.sch 181 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_78)))->BgL_aliasz00);
		}

	}



/* &tclass-alias */
	obj_t BGl_z62tclasszd2aliaszb0zzobject_classz00(obj_t BgL_envz00_2013,
		obj_t BgL_oz00_2014)
	{
		{	/* Object/class.sch 181 */
			return
				BGl_tclasszd2aliaszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2014));
		}

	}



/* tclass-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_79, obj_t BgL_vz00_80)
	{
		{	/* Object/class.sch 182 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_79)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_80), BUNSPEC);
		}

	}



/* &tclass-alias-set! */
	obj_t BGl_z62tclasszd2aliaszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2015, obj_t BgL_oz00_2016, obj_t BgL_vz00_2017)
	{
		{	/* Object/class.sch 182 */
			return
				BGl_tclasszd2aliaszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2016), BgL_vz00_2017);
		}

	}



/* tclass-$ */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2z42z90zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_81)
	{
		{	/* Object/class.sch 183 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_81)))->BgL_z42z42);
		}

	}



/* &tclass-$ */
	obj_t BGl_z62tclasszd2z42zf2zzobject_classz00(obj_t BgL_envz00_2018,
		obj_t BgL_oz00_2019)
	{
		{	/* Object/class.sch 183 */
			return
				BGl_tclasszd2z42z90zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2019));
		}

	}



/* tclass-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt BgL_oz00_82,
		obj_t BgL_vz00_83)
	{
		{	/* Object/class.sch 184 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_82)))->BgL_z42z42) =
				((obj_t) BgL_vz00_83), BUNSPEC);
		}

	}



/* &tclass-$-set! */
	obj_t BGl_z62tclasszd2z42zd2setz12z32zzobject_classz00(obj_t BgL_envz00_2020,
		obj_t BgL_oz00_2021, obj_t BgL_vz00_2022)
	{
		{	/* Object/class.sch 184 */
			return
				BGl_tclasszd2z42zd2setz12z50zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2021), BgL_vz00_2022);
		}

	}



/* tclass-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_tclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_84)
	{
		{	/* Object/class.sch 185 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_84)))->BgL_magiczf3zf3);
		}

	}



/* &tclass-magic? */
	obj_t BGl_z62tclasszd2magiczf3z43zzobject_classz00(obj_t BgL_envz00_2023,
		obj_t BgL_oz00_2024)
	{
		{	/* Object/class.sch 185 */
			return
				BBOOL(BGl_tclasszd2magiczf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2024)));
		}

	}



/* tclass-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_85, bool_t BgL_vz00_86)
	{
		{	/* Object/class.sch 186 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_85)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_86), BUNSPEC);
		}

	}



/* &tclass-magic?-set! */
	obj_t BGl_z62tclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2025, obj_t BgL_oz00_2026, obj_t BgL_vz00_2027)
	{
		{	/* Object/class.sch 186 */
			return
				BGl_tclasszd2magiczf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2026), CBOOL(BgL_vz00_2027));
		}

	}



/* tclass-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_tclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_87)
	{
		{	/* Object/class.sch 187 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_87)))->BgL_initzf3zf3);
		}

	}



/* &tclass-init? */
	obj_t BGl_z62tclasszd2initzf3z43zzobject_classz00(obj_t BgL_envz00_2028,
		obj_t BgL_oz00_2029)
	{
		{	/* Object/class.sch 187 */
			return
				BBOOL(BGl_tclasszd2initzf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2029)));
		}

	}



/* tclass-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_88, bool_t BgL_vz00_89)
	{
		{	/* Object/class.sch 188 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_88)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_89), BUNSPEC);
		}

	}



/* &tclass-init?-set! */
	obj_t BGl_z62tclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2030, obj_t BgL_oz00_2031, obj_t BgL_vz00_2032)
	{
		{	/* Object/class.sch 188 */
			return
				BGl_tclasszd2initzf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2031), CBOOL(BgL_vz00_2032));
		}

	}



/* tclass-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_90)
	{
		{	/* Object/class.sch 189 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_90)))->BgL_parentsz00);
		}

	}



/* &tclass-parents */
	obj_t BGl_z62tclasszd2parentszb0zzobject_classz00(obj_t BgL_envz00_2033,
		obj_t BgL_oz00_2034)
	{
		{	/* Object/class.sch 189 */
			return
				BGl_tclasszd2parentszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2034));
		}

	}



/* tclass-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_91, obj_t BgL_vz00_92)
	{
		{	/* Object/class.sch 190 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_91)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_92), BUNSPEC);
		}

	}



/* &tclass-parents-set! */
	obj_t BGl_z62tclasszd2parentszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2035, obj_t BgL_oz00_2036, obj_t BgL_vz00_2037)
	{
		{	/* Object/class.sch 190 */
			return
				BGl_tclasszd2parentszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2036), BgL_vz00_2037);
		}

	}



/* tclass-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_93)
	{
		{	/* Object/class.sch 191 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_93)))->BgL_coercezd2tozd2);
		}

	}



/* &tclass-coerce-to */
	obj_t BGl_z62tclasszd2coercezd2toz62zzobject_classz00(obj_t BgL_envz00_2038,
		obj_t BgL_oz00_2039)
	{
		{	/* Object/class.sch 191 */
			return
				BGl_tclasszd2coercezd2toz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2039));
		}

	}



/* tclass-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_94, obj_t BgL_vz00_95)
	{
		{	/* Object/class.sch 192 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_94)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_95), BUNSPEC);
		}

	}



/* &tclass-coerce-to-set! */
	obj_t BGl_z62tclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2040, obj_t BgL_oz00_2041, obj_t BgL_vz00_2042)
	{
		{	/* Object/class.sch 192 */
			return
				BGl_tclasszd2coercezd2tozd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2041), BgL_vz00_2042);
		}

	}



/* tclass-class */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2classzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_96)
	{
		{	/* Object/class.sch 193 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_96)))->BgL_classz00);
		}

	}



/* &tclass-class */
	obj_t BGl_z62tclasszd2classzb0zzobject_classz00(obj_t BgL_envz00_2043,
		obj_t BgL_oz00_2044)
	{
		{	/* Object/class.sch 193 */
			return
				BGl_tclasszd2classzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2044));
		}

	}



/* tclass-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_97, obj_t BgL_vz00_98)
	{
		{	/* Object/class.sch 194 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_97)))->BgL_classz00) =
				((obj_t) BgL_vz00_98), BUNSPEC);
		}

	}



/* &tclass-class-set! */
	obj_t BGl_z62tclasszd2classzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2045, obj_t BgL_oz00_2046, obj_t BgL_vz00_2047)
	{
		{	/* Object/class.sch 194 */
			return
				BGl_tclasszd2classzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2046), BgL_vz00_2047);
		}

	}



/* tclass-size */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt BgL_oz00_99)
	{
		{	/* Object/class.sch 195 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_99)))->BgL_siza7eza7);
		}

	}



/* &tclass-size */
	obj_t BGl_z62tclasszd2siza7ez17zzobject_classz00(obj_t BgL_envz00_2048,
		obj_t BgL_oz00_2049)
	{
		{	/* Object/class.sch 195 */
			return
				BGl_tclasszd2siza7ez75zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2049));
		}

	}



/* tclass-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_100, obj_t BgL_vz00_101)
	{
		{	/* Object/class.sch 196 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_100)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_101), BUNSPEC);
		}

	}



/* &tclass-size-set! */
	obj_t BGl_z62tclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t
		BgL_envz00_2050, obj_t BgL_oz00_2051, obj_t BgL_vz00_2052)
	{
		{	/* Object/class.sch 196 */
			return
				BGl_tclasszd2siza7ezd2setz12zb5zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2051), BgL_vz00_2052);
		}

	}



/* tclass-name */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2namezd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_102)
	{
		{	/* Object/class.sch 197 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_102)))->BgL_namez00);
		}

	}



/* &tclass-name */
	obj_t BGl_z62tclasszd2namezb0zzobject_classz00(obj_t BgL_envz00_2053,
		obj_t BgL_oz00_2054)
	{
		{	/* Object/class.sch 197 */
			return
				BGl_tclasszd2namezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2054));
		}

	}



/* tclass-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_tclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_103, obj_t BgL_vz00_104)
	{
		{	/* Object/class.sch 198 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_103)))->BgL_namez00) =
				((obj_t) BgL_vz00_104), BUNSPEC);
		}

	}



/* &tclass-name-set! */
	obj_t BGl_z62tclasszd2namezd2setz12z70zzobject_classz00(obj_t BgL_envz00_2055,
		obj_t BgL_oz00_2056, obj_t BgL_vz00_2057)
	{
		{	/* Object/class.sch 198 */
			return
				BGl_tclasszd2namezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2056), BgL_vz00_2057);
		}

	}



/* tclass-id */
	BGL_EXPORTED_DEF obj_t BGl_tclasszd2idzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_105)
	{
		{	/* Object/class.sch 199 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_105)))->BgL_idz00);
		}

	}



/* &tclass-id */
	obj_t BGl_z62tclasszd2idzb0zzobject_classz00(obj_t BgL_envz00_2058,
		obj_t BgL_oz00_2059)
	{
		{	/* Object/class.sch 199 */
			return
				BGl_tclasszd2idzd2zzobject_classz00(((BgL_typez00_bglt) BgL_oz00_2059));
		}

	}



/* make-jclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2jclasszd2zzobject_classz00(obj_t
		BgL_id1159z00_108, obj_t BgL_name1160z00_109, obj_t BgL_siza7e1161za7_110,
		obj_t BgL_class1162z00_111, obj_t BgL_coercezd2to1163zd2_112,
		obj_t BgL_parents1164z00_113, bool_t BgL_initzf31165zf3_114,
		bool_t BgL_magiczf31166zf3_115, obj_t BgL_z421167z42_116,
		obj_t BgL_alias1168z00_117, obj_t BgL_pointedzd2tozd2by1169z00_118,
		obj_t BgL_tvector1170z00_119, obj_t BgL_location1171z00_120,
		obj_t BgL_importzd2location1172zd2_121, int BgL_occurrence1173z00_122,
		obj_t BgL_itszd2super1174zd2_123, obj_t BgL_slots1175z00_124,
		obj_t BgL_package1176z00_125)
	{
		{	/* Object/class.sch 203 */
			{	/* Object/class.sch 203 */
				BgL_typez00_bglt BgL_new1147z00_2558;

				{	/* Object/class.sch 203 */
					BgL_typez00_bglt BgL_tmp1145z00_2559;
					BgL_jclassz00_bglt BgL_wide1146z00_2560;

					{
						BgL_typez00_bglt BgL_auxz00_3160;

						{	/* Object/class.sch 203 */
							BgL_typez00_bglt BgL_new1144z00_2561;

							BgL_new1144z00_2561 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Object/class.sch 203 */
								long BgL_arg1246z00_2562;

								{	/* Object/class.sch 203 */
									long BgL_res1866z00_2563;

									BgL_res1866z00_2563 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1246z00_2562 = BgL_res1866z00_2563;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1144z00_2561),
									BgL_arg1246z00_2562);
							}
							{	/* Object/class.sch 203 */
								BgL_objectz00_bglt BgL_tmpz00_3165;

								BgL_tmpz00_3165 = ((BgL_objectz00_bglt) BgL_new1144z00_2561);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3165, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1144z00_2561);
							BgL_auxz00_3160 = BgL_new1144z00_2561;
						}
						BgL_tmp1145z00_2559 = ((BgL_typez00_bglt) BgL_auxz00_3160);
					}
					BgL_wide1146z00_2560 =
						((BgL_jclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jclassz00_bgl))));
					{	/* Object/class.sch 203 */
						obj_t BgL_auxz00_3173;
						BgL_objectz00_bglt BgL_tmpz00_3171;

						BgL_auxz00_3173 = ((obj_t) BgL_wide1146z00_2560);
						BgL_tmpz00_3171 = ((BgL_objectz00_bglt) BgL_tmp1145z00_2559);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3171, BgL_auxz00_3173);
					}
					((BgL_objectz00_bglt) BgL_tmp1145z00_2559);
					{	/* Object/class.sch 203 */
						long BgL_arg1245z00_2564;

						{	/* Object/class.sch 203 */
							long BgL_res1867z00_2565;

							BgL_res1867z00_2565 =
								BGL_CLASS_INDEX(BGl_jclassz00zzobject_classz00);
							BgL_arg1245z00_2564 = BgL_res1867z00_2565;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1145z00_2559), BgL_arg1245z00_2564);
					}
					BgL_new1147z00_2558 = ((BgL_typez00_bglt) BgL_tmp1145z00_2559);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1147z00_2558)))->BgL_idz00) =
					((obj_t) BgL_id1159z00_108), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_namez00) =
					((obj_t) BgL_name1160z00_109), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1161za7_110), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_classz00) =
					((obj_t) BgL_class1162z00_111), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1163zd2_112), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_parentsz00) =
					((obj_t) BgL_parents1164z00_113), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31165zf3_114), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31166zf3_115), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_z42z42) =
					((obj_t) BgL_z421167z42_116), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_aliasz00) =
					((obj_t) BgL_alias1168z00_117), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1169z00_118), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1170z00_119), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_locationz00) =
					((obj_t) BgL_location1171z00_120), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1172zd2_121), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1147z00_2558)))->BgL_occurrencez00) =
					((int) BgL_occurrence1173z00_122), BUNSPEC);
				{
					BgL_jclassz00_bglt BgL_auxz00_3211;

					{
						obj_t BgL_auxz00_3212;

						{	/* Object/class.sch 203 */
							BgL_objectz00_bglt BgL_tmpz00_3213;

							BgL_tmpz00_3213 = ((BgL_objectz00_bglt) BgL_new1147z00_2558);
							BgL_auxz00_3212 = BGL_OBJECT_WIDENING(BgL_tmpz00_3213);
						}
						BgL_auxz00_3211 = ((BgL_jclassz00_bglt) BgL_auxz00_3212);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3211))->
							BgL_itszd2superzd2) =
						((obj_t) BgL_itszd2super1174zd2_123), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_3218;

					{
						obj_t BgL_auxz00_3219;

						{	/* Object/class.sch 203 */
							BgL_objectz00_bglt BgL_tmpz00_3220;

							BgL_tmpz00_3220 = ((BgL_objectz00_bglt) BgL_new1147z00_2558);
							BgL_auxz00_3219 = BGL_OBJECT_WIDENING(BgL_tmpz00_3220);
						}
						BgL_auxz00_3218 = ((BgL_jclassz00_bglt) BgL_auxz00_3219);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3218))->BgL_slotsz00) =
						((obj_t) BgL_slots1175z00_124), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_3225;

					{
						obj_t BgL_auxz00_3226;

						{	/* Object/class.sch 203 */
							BgL_objectz00_bglt BgL_tmpz00_3227;

							BgL_tmpz00_3227 = ((BgL_objectz00_bglt) BgL_new1147z00_2558);
							BgL_auxz00_3226 = BGL_OBJECT_WIDENING(BgL_tmpz00_3227);
						}
						BgL_auxz00_3225 = ((BgL_jclassz00_bglt) BgL_auxz00_3226);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3225))->BgL_packagez00) =
						((obj_t) BgL_package1176z00_125), BUNSPEC);
				}
				return BgL_new1147z00_2558;
			}
		}

	}



/* &make-jclass */
	BgL_typez00_bglt BGl_z62makezd2jclasszb0zzobject_classz00(obj_t
		BgL_envz00_2060, obj_t BgL_id1159z00_2061, obj_t BgL_name1160z00_2062,
		obj_t BgL_siza7e1161za7_2063, obj_t BgL_class1162z00_2064,
		obj_t BgL_coercezd2to1163zd2_2065, obj_t BgL_parents1164z00_2066,
		obj_t BgL_initzf31165zf3_2067, obj_t BgL_magiczf31166zf3_2068,
		obj_t BgL_z421167z42_2069, obj_t BgL_alias1168z00_2070,
		obj_t BgL_pointedzd2tozd2by1169z00_2071, obj_t BgL_tvector1170z00_2072,
		obj_t BgL_location1171z00_2073, obj_t BgL_importzd2location1172zd2_2074,
		obj_t BgL_occurrence1173z00_2075, obj_t BgL_itszd2super1174zd2_2076,
		obj_t BgL_slots1175z00_2077, obj_t BgL_package1176z00_2078)
	{
		{	/* Object/class.sch 203 */
			return
				BGl_makezd2jclasszd2zzobject_classz00(BgL_id1159z00_2061,
				BgL_name1160z00_2062, BgL_siza7e1161za7_2063, BgL_class1162z00_2064,
				BgL_coercezd2to1163zd2_2065, BgL_parents1164z00_2066,
				CBOOL(BgL_initzf31165zf3_2067), CBOOL(BgL_magiczf31166zf3_2068),
				BgL_z421167z42_2069, BgL_alias1168z00_2070,
				BgL_pointedzd2tozd2by1169z00_2071, BgL_tvector1170z00_2072,
				BgL_location1171z00_2073, BgL_importzd2location1172zd2_2074,
				CINT(BgL_occurrence1173z00_2075), BgL_itszd2super1174zd2_2076,
				BgL_slots1175z00_2077, BgL_package1176z00_2078);
		}

	}



/* jclass? */
	BGL_EXPORTED_DEF bool_t BGl_jclasszf3zf3zzobject_classz00(obj_t
		BgL_objz00_126)
	{
		{	/* Object/class.sch 204 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_126,
				BGl_jclassz00zzobject_classz00);
		}

	}



/* &jclass? */
	obj_t BGl_z62jclasszf3z91zzobject_classz00(obj_t BgL_envz00_2079,
		obj_t BgL_objz00_2080)
	{
		{	/* Object/class.sch 204 */
			return BBOOL(BGl_jclasszf3zf3zzobject_classz00(BgL_objz00_2080));
		}

	}



/* jclass-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_jclasszd2nilzd2zzobject_classz00()
	{
		{	/* Object/class.sch 205 */
			{	/* Object/class.sch 205 */
				obj_t BgL_classz00_1485;

				BgL_classz00_1485 = BGl_jclassz00zzobject_classz00;
				{	/* Object/class.sch 205 */
					obj_t BgL__ortest_1106z00_1486;

					BgL__ortest_1106z00_1486 = BGL_CLASS_NIL(BgL_classz00_1485);
					if (CBOOL(BgL__ortest_1106z00_1486))
						{	/* Object/class.sch 205 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1486);
						}
					else
						{	/* Object/class.sch 205 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1485));
						}
				}
			}
		}

	}



/* &jclass-nil */
	BgL_typez00_bglt BGl_z62jclasszd2nilzb0zzobject_classz00(obj_t
		BgL_envz00_2081)
	{
		{	/* Object/class.sch 205 */
			return BGl_jclasszd2nilzd2zzobject_classz00();
		}

	}



/* jclass-package */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2packagezd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_127)
	{
		{	/* Object/class.sch 206 */
			{
				BgL_jclassz00_bglt BgL_auxz00_3246;

				{
					obj_t BgL_auxz00_3247;

					{	/* Object/class.sch 206 */
						BgL_objectz00_bglt BgL_tmpz00_3248;

						BgL_tmpz00_3248 = ((BgL_objectz00_bglt) BgL_oz00_127);
						BgL_auxz00_3247 = BGL_OBJECT_WIDENING(BgL_tmpz00_3248);
					}
					BgL_auxz00_3246 = ((BgL_jclassz00_bglt) BgL_auxz00_3247);
				}
				return
					(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3246))->BgL_packagez00);
			}
		}

	}



/* &jclass-package */
	obj_t BGl_z62jclasszd2packagezb0zzobject_classz00(obj_t BgL_envz00_2082,
		obj_t BgL_oz00_2083)
	{
		{	/* Object/class.sch 206 */
			return
				BGl_jclasszd2packagezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2083));
		}

	}



/* jclass-slots */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2slotszd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_130)
	{
		{	/* Object/class.sch 208 */
			{
				BgL_jclassz00_bglt BgL_auxz00_3255;

				{
					obj_t BgL_auxz00_3256;

					{	/* Object/class.sch 208 */
						BgL_objectz00_bglt BgL_tmpz00_3257;

						BgL_tmpz00_3257 = ((BgL_objectz00_bglt) BgL_oz00_130);
						BgL_auxz00_3256 = BGL_OBJECT_WIDENING(BgL_tmpz00_3257);
					}
					BgL_auxz00_3255 = ((BgL_jclassz00_bglt) BgL_auxz00_3256);
				}
				return (((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3255))->BgL_slotsz00);
			}
		}

	}



/* &jclass-slots */
	obj_t BGl_z62jclasszd2slotszb0zzobject_classz00(obj_t BgL_envz00_2084,
		obj_t BgL_oz00_2085)
	{
		{	/* Object/class.sch 208 */
			return
				BGl_jclasszd2slotszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2085));
		}

	}



/* jclass-slots-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2slotszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_131, obj_t BgL_vz00_132)
	{
		{	/* Object/class.sch 209 */
			{
				BgL_jclassz00_bglt BgL_auxz00_3264;

				{
					obj_t BgL_auxz00_3265;

					{	/* Object/class.sch 209 */
						BgL_objectz00_bglt BgL_tmpz00_3266;

						BgL_tmpz00_3266 = ((BgL_objectz00_bglt) BgL_oz00_131);
						BgL_auxz00_3265 = BGL_OBJECT_WIDENING(BgL_tmpz00_3266);
					}
					BgL_auxz00_3264 = ((BgL_jclassz00_bglt) BgL_auxz00_3265);
				}
				return
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3264))->BgL_slotsz00) =
					((obj_t) BgL_vz00_132), BUNSPEC);
			}
		}

	}



/* &jclass-slots-set! */
	obj_t BGl_z62jclasszd2slotszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2086, obj_t BgL_oz00_2087, obj_t BgL_vz00_2088)
	{
		{	/* Object/class.sch 209 */
			return
				BGl_jclasszd2slotszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2087), BgL_vz00_2088);
		}

	}



/* jclass-its-super */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2itszd2superz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_133)
	{
		{	/* Object/class.sch 210 */
			{
				BgL_jclassz00_bglt BgL_auxz00_3273;

				{
					obj_t BgL_auxz00_3274;

					{	/* Object/class.sch 210 */
						BgL_objectz00_bglt BgL_tmpz00_3275;

						BgL_tmpz00_3275 = ((BgL_objectz00_bglt) BgL_oz00_133);
						BgL_auxz00_3274 = BGL_OBJECT_WIDENING(BgL_tmpz00_3275);
					}
					BgL_auxz00_3273 = ((BgL_jclassz00_bglt) BgL_auxz00_3274);
				}
				return
					(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3273))->BgL_itszd2superzd2);
			}
		}

	}



/* &jclass-its-super */
	obj_t BGl_z62jclasszd2itszd2superz62zzobject_classz00(obj_t BgL_envz00_2089,
		obj_t BgL_oz00_2090)
	{
		{	/* Object/class.sch 210 */
			return
				BGl_jclasszd2itszd2superz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2090));
		}

	}



/* jclass-its-super-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2itszd2superzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_134, obj_t BgL_vz00_135)
	{
		{	/* Object/class.sch 211 */
			{
				BgL_jclassz00_bglt BgL_auxz00_3282;

				{
					obj_t BgL_auxz00_3283;

					{	/* Object/class.sch 211 */
						BgL_objectz00_bglt BgL_tmpz00_3284;

						BgL_tmpz00_3284 = ((BgL_objectz00_bglt) BgL_oz00_134);
						BgL_auxz00_3283 = BGL_OBJECT_WIDENING(BgL_tmpz00_3284);
					}
					BgL_auxz00_3282 = ((BgL_jclassz00_bglt) BgL_auxz00_3283);
				}
				return
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3282))->
						BgL_itszd2superzd2) = ((obj_t) BgL_vz00_135), BUNSPEC);
			}
		}

	}



/* &jclass-its-super-set! */
	obj_t BGl_z62jclasszd2itszd2superzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2091, obj_t BgL_oz00_2092, obj_t BgL_vz00_2093)
	{
		{	/* Object/class.sch 211 */
			return
				BGl_jclasszd2itszd2superzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2092), BgL_vz00_2093);
		}

	}



/* jclass-occurrence */
	BGL_EXPORTED_DEF int
		BGl_jclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_136)
	{
		{	/* Object/class.sch 212 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_136)))->BgL_occurrencez00);
		}

	}



/* &jclass-occurrence */
	obj_t BGl_z62jclasszd2occurrencezb0zzobject_classz00(obj_t BgL_envz00_2094,
		obj_t BgL_oz00_2095)
	{
		{	/* Object/class.sch 212 */
			return
				BINT(BGl_jclasszd2occurrencezd2zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2095)));
		}

	}



/* jclass-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_137, int BgL_vz00_138)
	{
		{	/* Object/class.sch 213 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_137)))->BgL_occurrencez00) =
				((int) BgL_vz00_138), BUNSPEC);
		}

	}



/* &jclass-occurrence-set! */
	obj_t BGl_z62jclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2096, obj_t BgL_oz00_2097, obj_t BgL_vz00_2098)
	{
		{	/* Object/class.sch 213 */
			return
				BGl_jclasszd2occurrencezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2097), CINT(BgL_vz00_2098));
		}

	}



/* jclass-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_139)
	{
		{	/* Object/class.sch 214 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_139)))->BgL_importzd2locationzd2);
		}

	}



/* &jclass-import-location */
	obj_t BGl_z62jclasszd2importzd2locationz62zzobject_classz00(obj_t
		BgL_envz00_2099, obj_t BgL_oz00_2100)
	{
		{	/* Object/class.sch 214 */
			return
				BGl_jclasszd2importzd2locationz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2100));
		}

	}



/* jclass-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2importzd2locationzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_140, obj_t BgL_vz00_141)
	{
		{	/* Object/class.sch 215 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_140)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_141), BUNSPEC);
		}

	}



/* &jclass-import-location-set! */
	obj_t BGl_z62jclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2101, obj_t BgL_oz00_2102, obj_t BgL_vz00_2103)
	{
		{	/* Object/class.sch 215 */
			return
				BGl_jclasszd2importzd2locationzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2102), BgL_vz00_2103);
		}

	}



/* jclass-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_142)
	{
		{	/* Object/class.sch 216 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_142)))->BgL_locationz00);
		}

	}



/* &jclass-location */
	obj_t BGl_z62jclasszd2locationzb0zzobject_classz00(obj_t BgL_envz00_2104,
		obj_t BgL_oz00_2105)
	{
		{	/* Object/class.sch 216 */
			return
				BGl_jclasszd2locationzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2105));
		}

	}



/* jclass-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_143, obj_t BgL_vz00_144)
	{
		{	/* Object/class.sch 217 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_143)))->BgL_locationz00) =
				((obj_t) BgL_vz00_144), BUNSPEC);
		}

	}



/* &jclass-location-set! */
	obj_t BGl_z62jclasszd2locationzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2106, obj_t BgL_oz00_2107, obj_t BgL_vz00_2108)
	{
		{	/* Object/class.sch 217 */
			return
				BGl_jclasszd2locationzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2107), BgL_vz00_2108);
		}

	}



/* jclass-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_145)
	{
		{	/* Object/class.sch 218 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_145)))->BgL_tvectorz00);
		}

	}



/* &jclass-tvector */
	obj_t BGl_z62jclasszd2tvectorzb0zzobject_classz00(obj_t BgL_envz00_2109,
		obj_t BgL_oz00_2110)
	{
		{	/* Object/class.sch 218 */
			return
				BGl_jclasszd2tvectorzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2110));
		}

	}



/* jclass-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* Object/class.sch 219 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_146)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &jclass-tvector-set! */
	obj_t BGl_z62jclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2111, obj_t BgL_oz00_2112, obj_t BgL_vz00_2113)
	{
		{	/* Object/class.sch 219 */
			return
				BGl_jclasszd2tvectorzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2112), BgL_vz00_2113);
		}

	}



/* jclass-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_148)
	{
		{	/* Object/class.sch 220 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_148)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &jclass-pointed-to-by */
	obj_t BGl_z62jclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t
		BgL_envz00_2114, obj_t BgL_oz00_2115)
	{
		{	/* Object/class.sch 220 */
			return
				BGl_jclasszd2pointedzd2tozd2byzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2115));
		}

	}



/* jclass-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_149, obj_t BgL_vz00_150)
	{
		{	/* Object/class.sch 221 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_149)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_150), BUNSPEC);
		}

	}



/* &jclass-pointed-to-by-set! */
	obj_t BGl_z62jclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2116, obj_t BgL_oz00_2117, obj_t BgL_vz00_2118)
	{
		{	/* Object/class.sch 221 */
			return
				BGl_jclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2117), BgL_vz00_2118);
		}

	}



/* jclass-alias */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_151)
	{
		{	/* Object/class.sch 222 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_151)))->BgL_aliasz00);
		}

	}



/* &jclass-alias */
	obj_t BGl_z62jclasszd2aliaszb0zzobject_classz00(obj_t BgL_envz00_2119,
		obj_t BgL_oz00_2120)
	{
		{	/* Object/class.sch 222 */
			return
				BGl_jclasszd2aliaszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2120));
		}

	}



/* jclass-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_152, obj_t BgL_vz00_153)
	{
		{	/* Object/class.sch 223 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_152)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_153), BUNSPEC);
		}

	}



/* &jclass-alias-set! */
	obj_t BGl_z62jclasszd2aliaszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2121, obj_t BgL_oz00_2122, obj_t BgL_vz00_2123)
	{
		{	/* Object/class.sch 223 */
			return
				BGl_jclasszd2aliaszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2122), BgL_vz00_2123);
		}

	}



/* jclass-$ */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2z42z90zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_154)
	{
		{	/* Object/class.sch 224 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_154)))->BgL_z42z42);
		}

	}



/* &jclass-$ */
	obj_t BGl_z62jclasszd2z42zf2zzobject_classz00(obj_t BgL_envz00_2124,
		obj_t BgL_oz00_2125)
	{
		{	/* Object/class.sch 224 */
			return
				BGl_jclasszd2z42z90zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2125));
		}

	}



/* jclass-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt BgL_oz00_155,
		obj_t BgL_vz00_156)
	{
		{	/* Object/class.sch 225 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_155)))->BgL_z42z42) =
				((obj_t) BgL_vz00_156), BUNSPEC);
		}

	}



/* &jclass-$-set! */
	obj_t BGl_z62jclasszd2z42zd2setz12z32zzobject_classz00(obj_t BgL_envz00_2126,
		obj_t BgL_oz00_2127, obj_t BgL_vz00_2128)
	{
		{	/* Object/class.sch 225 */
			return
				BGl_jclasszd2z42zd2setz12z50zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2127), BgL_vz00_2128);
		}

	}



/* jclass-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_jclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_157)
	{
		{	/* Object/class.sch 226 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_157)))->BgL_magiczf3zf3);
		}

	}



/* &jclass-magic? */
	obj_t BGl_z62jclasszd2magiczf3z43zzobject_classz00(obj_t BgL_envz00_2129,
		obj_t BgL_oz00_2130)
	{
		{	/* Object/class.sch 226 */
			return
				BBOOL(BGl_jclasszd2magiczf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2130)));
		}

	}



/* jclass-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_158, bool_t BgL_vz00_159)
	{
		{	/* Object/class.sch 227 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_158)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_159), BUNSPEC);
		}

	}



/* &jclass-magic?-set! */
	obj_t BGl_z62jclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2131, obj_t BgL_oz00_2132, obj_t BgL_vz00_2133)
	{
		{	/* Object/class.sch 227 */
			return
				BGl_jclasszd2magiczf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2132), CBOOL(BgL_vz00_2133));
		}

	}



/* jclass-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_jclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_160)
	{
		{	/* Object/class.sch 228 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_160)))->BgL_initzf3zf3);
		}

	}



/* &jclass-init? */
	obj_t BGl_z62jclasszd2initzf3z43zzobject_classz00(obj_t BgL_envz00_2134,
		obj_t BgL_oz00_2135)
	{
		{	/* Object/class.sch 228 */
			return
				BBOOL(BGl_jclasszd2initzf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2135)));
		}

	}



/* jclass-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_161, bool_t BgL_vz00_162)
	{
		{	/* Object/class.sch 229 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_161)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_162), BUNSPEC);
		}

	}



/* &jclass-init?-set! */
	obj_t BGl_z62jclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2136, obj_t BgL_oz00_2137, obj_t BgL_vz00_2138)
	{
		{	/* Object/class.sch 229 */
			return
				BGl_jclasszd2initzf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2137), CBOOL(BgL_vz00_2138));
		}

	}



/* jclass-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_163)
	{
		{	/* Object/class.sch 230 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_163)))->BgL_parentsz00);
		}

	}



/* &jclass-parents */
	obj_t BGl_z62jclasszd2parentszb0zzobject_classz00(obj_t BgL_envz00_2139,
		obj_t BgL_oz00_2140)
	{
		{	/* Object/class.sch 230 */
			return
				BGl_jclasszd2parentszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2140));
		}

	}



/* jclass-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_164, obj_t BgL_vz00_165)
	{
		{	/* Object/class.sch 231 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_164)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_165), BUNSPEC);
		}

	}



/* &jclass-parents-set! */
	obj_t BGl_z62jclasszd2parentszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2141, obj_t BgL_oz00_2142, obj_t BgL_vz00_2143)
	{
		{	/* Object/class.sch 231 */
			return
				BGl_jclasszd2parentszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2142), BgL_vz00_2143);
		}

	}



/* jclass-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_166)
	{
		{	/* Object/class.sch 232 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_166)))->BgL_coercezd2tozd2);
		}

	}



/* &jclass-coerce-to */
	obj_t BGl_z62jclasszd2coercezd2toz62zzobject_classz00(obj_t BgL_envz00_2144,
		obj_t BgL_oz00_2145)
	{
		{	/* Object/class.sch 232 */
			return
				BGl_jclasszd2coercezd2toz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2145));
		}

	}



/* jclass-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_167, obj_t BgL_vz00_168)
	{
		{	/* Object/class.sch 233 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_167)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_168), BUNSPEC);
		}

	}



/* &jclass-coerce-to-set! */
	obj_t BGl_z62jclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2146, obj_t BgL_oz00_2147, obj_t BgL_vz00_2148)
	{
		{	/* Object/class.sch 233 */
			return
				BGl_jclasszd2coercezd2tozd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2147), BgL_vz00_2148);
		}

	}



/* jclass-class */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2classzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_169)
	{
		{	/* Object/class.sch 234 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_169)))->BgL_classz00);
		}

	}



/* &jclass-class */
	obj_t BGl_z62jclasszd2classzb0zzobject_classz00(obj_t BgL_envz00_2149,
		obj_t BgL_oz00_2150)
	{
		{	/* Object/class.sch 234 */
			return
				BGl_jclasszd2classzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2150));
		}

	}



/* jclass-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_170, obj_t BgL_vz00_171)
	{
		{	/* Object/class.sch 235 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_170)))->BgL_classz00) =
				((obj_t) BgL_vz00_171), BUNSPEC);
		}

	}



/* &jclass-class-set! */
	obj_t BGl_z62jclasszd2classzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2151, obj_t BgL_oz00_2152, obj_t BgL_vz00_2153)
	{
		{	/* Object/class.sch 235 */
			return
				BGl_jclasszd2classzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2152), BgL_vz00_2153);
		}

	}



/* jclass-size */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt BgL_oz00_172)
	{
		{	/* Object/class.sch 236 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_172)))->BgL_siza7eza7);
		}

	}



/* &jclass-size */
	obj_t BGl_z62jclasszd2siza7ez17zzobject_classz00(obj_t BgL_envz00_2154,
		obj_t BgL_oz00_2155)
	{
		{	/* Object/class.sch 236 */
			return
				BGl_jclasszd2siza7ez75zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2155));
		}

	}



/* jclass-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_173, obj_t BgL_vz00_174)
	{
		{	/* Object/class.sch 237 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_173)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_174), BUNSPEC);
		}

	}



/* &jclass-size-set! */
	obj_t BGl_z62jclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t
		BgL_envz00_2156, obj_t BgL_oz00_2157, obj_t BgL_vz00_2158)
	{
		{	/* Object/class.sch 237 */
			return
				BGl_jclasszd2siza7ezd2setz12zb5zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2157), BgL_vz00_2158);
		}

	}



/* jclass-name */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2namezd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_175)
	{
		{	/* Object/class.sch 238 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_175)))->BgL_namez00);
		}

	}



/* &jclass-name */
	obj_t BGl_z62jclasszd2namezb0zzobject_classz00(obj_t BgL_envz00_2159,
		obj_t BgL_oz00_2160)
	{
		{	/* Object/class.sch 238 */
			return
				BGl_jclasszd2namezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2160));
		}

	}



/* jclass-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_176, obj_t BgL_vz00_177)
	{
		{	/* Object/class.sch 239 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_176)))->BgL_namez00) =
				((obj_t) BgL_vz00_177), BUNSPEC);
		}

	}



/* &jclass-name-set! */
	obj_t BGl_z62jclasszd2namezd2setz12z70zzobject_classz00(obj_t BgL_envz00_2161,
		obj_t BgL_oz00_2162, obj_t BgL_vz00_2163)
	{
		{	/* Object/class.sch 239 */
			return
				BGl_jclasszd2namezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2162), BgL_vz00_2163);
		}

	}



/* jclass-id */
	BGL_EXPORTED_DEF obj_t BGl_jclasszd2idzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_178)
	{
		{	/* Object/class.sch 240 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_178)))->BgL_idz00);
		}

	}



/* &jclass-id */
	obj_t BGl_z62jclasszd2idzb0zzobject_classz00(obj_t BgL_envz00_2164,
		obj_t BgL_oz00_2165)
	{
		{	/* Object/class.sch 240 */
			return
				BGl_jclasszd2idzd2zzobject_classz00(((BgL_typez00_bglt) BgL_oz00_2165));
		}

	}



/* make-wclass */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_makezd2wclasszd2zzobject_classz00(obj_t
		BgL_id1141z00_181, obj_t BgL_name1142z00_182, obj_t BgL_siza7e1143za7_183,
		obj_t BgL_class1144z00_184, obj_t BgL_coercezd2to1145zd2_185,
		obj_t BgL_parents1146z00_186, bool_t BgL_initzf31147zf3_187,
		bool_t BgL_magiczf31148zf3_188, obj_t BgL_z421149z42_189,
		obj_t BgL_alias1150z00_190, obj_t BgL_pointedzd2tozd2by1151z00_191,
		obj_t BgL_tvector1152z00_192, obj_t BgL_location1153z00_193,
		obj_t BgL_importzd2location1154zd2_194, int BgL_occurrence1155z00_195,
		obj_t BgL_itszd2class1156zd2_196)
	{
		{	/* Object/class.sch 244 */
			{	/* Object/class.sch 244 */
				BgL_typez00_bglt BgL_new1151z00_2566;

				{	/* Object/class.sch 244 */
					BgL_typez00_bglt BgL_tmp1149z00_2567;
					BgL_wclassz00_bglt BgL_wide1150z00_2568;

					{
						BgL_typez00_bglt BgL_auxz00_3413;

						{	/* Object/class.sch 244 */
							BgL_typez00_bglt BgL_new1148z00_2569;

							BgL_new1148z00_2569 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* Object/class.sch 244 */
								long BgL_arg1250z00_2570;

								{	/* Object/class.sch 244 */
									long BgL_res1868z00_2571;

									BgL_res1868z00_2571 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1250z00_2570 = BgL_res1868z00_2571;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1148z00_2569),
									BgL_arg1250z00_2570);
							}
							{	/* Object/class.sch 244 */
								BgL_objectz00_bglt BgL_tmpz00_3418;

								BgL_tmpz00_3418 = ((BgL_objectz00_bglt) BgL_new1148z00_2569);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3418, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1148z00_2569);
							BgL_auxz00_3413 = BgL_new1148z00_2569;
						}
						BgL_tmp1149z00_2567 = ((BgL_typez00_bglt) BgL_auxz00_3413);
					}
					BgL_wide1150z00_2568 =
						((BgL_wclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_wclassz00_bgl))));
					{	/* Object/class.sch 244 */
						obj_t BgL_auxz00_3426;
						BgL_objectz00_bglt BgL_tmpz00_3424;

						BgL_auxz00_3426 = ((obj_t) BgL_wide1150z00_2568);
						BgL_tmpz00_3424 = ((BgL_objectz00_bglt) BgL_tmp1149z00_2567);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3424, BgL_auxz00_3426);
					}
					((BgL_objectz00_bglt) BgL_tmp1149z00_2567);
					{	/* Object/class.sch 244 */
						long BgL_arg1247z00_2572;

						{	/* Object/class.sch 244 */
							long BgL_res1869z00_2573;

							BgL_res1869z00_2573 =
								BGL_CLASS_INDEX(BGl_wclassz00zzobject_classz00);
							BgL_arg1247z00_2572 = BgL_res1869z00_2573;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1149z00_2567), BgL_arg1247z00_2572);
					}
					BgL_new1151z00_2566 = ((BgL_typez00_bglt) BgL_tmp1149z00_2567);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1151z00_2566)))->BgL_idz00) =
					((obj_t) BgL_id1141z00_181), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_namez00) =
					((obj_t) BgL_name1142z00_182), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1143za7_183), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_classz00) =
					((obj_t) BgL_class1144z00_184), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1145zd2_185), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_parentsz00) =
					((obj_t) BgL_parents1146z00_186), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31147zf3_187), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31148zf3_188), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_z42z42) =
					((obj_t) BgL_z421149z42_189), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_aliasz00) =
					((obj_t) BgL_alias1150z00_190), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1151z00_191), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1152z00_192), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_locationz00) =
					((obj_t) BgL_location1153z00_193), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1154zd2_194), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1151z00_2566)))->BgL_occurrencez00) =
					((int) BgL_occurrence1155z00_195), BUNSPEC);
				{
					BgL_wclassz00_bglt BgL_auxz00_3464;

					{
						obj_t BgL_auxz00_3465;

						{	/* Object/class.sch 244 */
							BgL_objectz00_bglt BgL_tmpz00_3466;

							BgL_tmpz00_3466 = ((BgL_objectz00_bglt) BgL_new1151z00_2566);
							BgL_auxz00_3465 = BGL_OBJECT_WIDENING(BgL_tmpz00_3466);
						}
						BgL_auxz00_3464 = ((BgL_wclassz00_bglt) BgL_auxz00_3465);
					}
					((((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_3464))->
							BgL_itszd2classzd2) =
						((obj_t) BgL_itszd2class1156zd2_196), BUNSPEC);
				}
				return BgL_new1151z00_2566;
			}
		}

	}



/* &make-wclass */
	BgL_typez00_bglt BGl_z62makezd2wclasszb0zzobject_classz00(obj_t
		BgL_envz00_2166, obj_t BgL_id1141z00_2167, obj_t BgL_name1142z00_2168,
		obj_t BgL_siza7e1143za7_2169, obj_t BgL_class1144z00_2170,
		obj_t BgL_coercezd2to1145zd2_2171, obj_t BgL_parents1146z00_2172,
		obj_t BgL_initzf31147zf3_2173, obj_t BgL_magiczf31148zf3_2174,
		obj_t BgL_z421149z42_2175, obj_t BgL_alias1150z00_2176,
		obj_t BgL_pointedzd2tozd2by1151z00_2177, obj_t BgL_tvector1152z00_2178,
		obj_t BgL_location1153z00_2179, obj_t BgL_importzd2location1154zd2_2180,
		obj_t BgL_occurrence1155z00_2181, obj_t BgL_itszd2class1156zd2_2182)
	{
		{	/* Object/class.sch 244 */
			return
				BGl_makezd2wclasszd2zzobject_classz00(BgL_id1141z00_2167,
				BgL_name1142z00_2168, BgL_siza7e1143za7_2169, BgL_class1144z00_2170,
				BgL_coercezd2to1145zd2_2171, BgL_parents1146z00_2172,
				CBOOL(BgL_initzf31147zf3_2173), CBOOL(BgL_magiczf31148zf3_2174),
				BgL_z421149z42_2175, BgL_alias1150z00_2176,
				BgL_pointedzd2tozd2by1151z00_2177, BgL_tvector1152z00_2178,
				BgL_location1153z00_2179, BgL_importzd2location1154zd2_2180,
				CINT(BgL_occurrence1155z00_2181), BgL_itszd2class1156zd2_2182);
		}

	}



/* wclass? */
	BGL_EXPORTED_DEF bool_t BGl_wclasszf3zf3zzobject_classz00(obj_t
		BgL_objz00_197)
	{
		{	/* Object/class.sch 245 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_197,
				BGl_wclassz00zzobject_classz00);
		}

	}



/* &wclass? */
	obj_t BGl_z62wclasszf3z91zzobject_classz00(obj_t BgL_envz00_2183,
		obj_t BgL_objz00_2184)
	{
		{	/* Object/class.sch 245 */
			return BBOOL(BGl_wclasszf3zf3zzobject_classz00(BgL_objz00_2184));
		}

	}



/* wclass-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_wclasszd2nilzd2zzobject_classz00()
	{
		{	/* Object/class.sch 246 */
			{	/* Object/class.sch 246 */
				obj_t BgL_classz00_1509;

				BgL_classz00_1509 = BGl_wclassz00zzobject_classz00;
				{	/* Object/class.sch 246 */
					obj_t BgL__ortest_1106z00_1510;

					BgL__ortest_1106z00_1510 = BGL_CLASS_NIL(BgL_classz00_1509);
					if (CBOOL(BgL__ortest_1106z00_1510))
						{	/* Object/class.sch 246 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_1510);
						}
					else
						{	/* Object/class.sch 246 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1509));
						}
				}
			}
		}

	}



/* &wclass-nil */
	BgL_typez00_bglt BGl_z62wclasszd2nilzb0zzobject_classz00(obj_t
		BgL_envz00_2185)
	{
		{	/* Object/class.sch 246 */
			return BGl_wclasszd2nilzd2zzobject_classz00();
		}

	}



/* wclass-its-class */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2itszd2classz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_198)
	{
		{	/* Object/class.sch 247 */
			{
				BgL_wclassz00_bglt BgL_auxz00_3485;

				{
					obj_t BgL_auxz00_3486;

					{	/* Object/class.sch 247 */
						BgL_objectz00_bglt BgL_tmpz00_3487;

						BgL_tmpz00_3487 = ((BgL_objectz00_bglt) BgL_oz00_198);
						BgL_auxz00_3486 = BGL_OBJECT_WIDENING(BgL_tmpz00_3487);
					}
					BgL_auxz00_3485 = ((BgL_wclassz00_bglt) BgL_auxz00_3486);
				}
				return
					(((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_3485))->BgL_itszd2classzd2);
			}
		}

	}



/* &wclass-its-class */
	obj_t BGl_z62wclasszd2itszd2classz62zzobject_classz00(obj_t BgL_envz00_2186,
		obj_t BgL_oz00_2187)
	{
		{	/* Object/class.sch 247 */
			return
				BGl_wclasszd2itszd2classz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2187));
		}

	}



/* wclass-its-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2itszd2classzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_199, obj_t BgL_vz00_200)
	{
		{	/* Object/class.sch 248 */
			{
				BgL_wclassz00_bglt BgL_auxz00_3494;

				{
					obj_t BgL_auxz00_3495;

					{	/* Object/class.sch 248 */
						BgL_objectz00_bglt BgL_tmpz00_3496;

						BgL_tmpz00_3496 = ((BgL_objectz00_bglt) BgL_oz00_199);
						BgL_auxz00_3495 = BGL_OBJECT_WIDENING(BgL_tmpz00_3496);
					}
					BgL_auxz00_3494 = ((BgL_wclassz00_bglt) BgL_auxz00_3495);
				}
				return
					((((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_3494))->
						BgL_itszd2classzd2) = ((obj_t) BgL_vz00_200), BUNSPEC);
			}
		}

	}



/* &wclass-its-class-set! */
	obj_t BGl_z62wclasszd2itszd2classzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2188, obj_t BgL_oz00_2189, obj_t BgL_vz00_2190)
	{
		{	/* Object/class.sch 248 */
			return
				BGl_wclasszd2itszd2classzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2189), BgL_vz00_2190);
		}

	}



/* wclass-occurrence */
	BGL_EXPORTED_DEF int
		BGl_wclasszd2occurrencezd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_201)
	{
		{	/* Object/class.sch 249 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_201)))->BgL_occurrencez00);
		}

	}



/* &wclass-occurrence */
	obj_t BGl_z62wclasszd2occurrencezb0zzobject_classz00(obj_t BgL_envz00_2191,
		obj_t BgL_oz00_2192)
	{
		{	/* Object/class.sch 249 */
			return
				BINT(BGl_wclasszd2occurrencezd2zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2192)));
		}

	}



/* wclass-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2occurrencezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_202, int BgL_vz00_203)
	{
		{	/* Object/class.sch 250 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_202)))->BgL_occurrencez00) =
				((int) BgL_vz00_203), BUNSPEC);
		}

	}



/* &wclass-occurrence-set! */
	obj_t BGl_z62wclasszd2occurrencezd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2193, obj_t BgL_oz00_2194, obj_t BgL_vz00_2195)
	{
		{	/* Object/class.sch 250 */
			return
				BGl_wclasszd2occurrencezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2194), CINT(BgL_vz00_2195));
		}

	}



/* wclass-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2importzd2locationz00zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_204)
	{
		{	/* Object/class.sch 251 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_204)))->BgL_importzd2locationzd2);
		}

	}



/* &wclass-import-location */
	obj_t BGl_z62wclasszd2importzd2locationz62zzobject_classz00(obj_t
		BgL_envz00_2196, obj_t BgL_oz00_2197)
	{
		{	/* Object/class.sch 251 */
			return
				BGl_wclasszd2importzd2locationz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2197));
		}

	}



/* wclass-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2importzd2locationzd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_205, obj_t BgL_vz00_206)
	{
		{	/* Object/class.sch 252 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_205)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_206), BUNSPEC);
		}

	}



/* &wclass-import-location-set! */
	obj_t BGl_z62wclasszd2importzd2locationzd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2198, obj_t BgL_oz00_2199, obj_t BgL_vz00_2200)
	{
		{	/* Object/class.sch 252 */
			return
				BGl_wclasszd2importzd2locationzd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2199), BgL_vz00_2200);
		}

	}



/* wclass-location */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2locationzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_207)
	{
		{	/* Object/class.sch 253 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_207)))->BgL_locationz00);
		}

	}



/* &wclass-location */
	obj_t BGl_z62wclasszd2locationzb0zzobject_classz00(obj_t BgL_envz00_2201,
		obj_t BgL_oz00_2202)
	{
		{	/* Object/class.sch 253 */
			return
				BGl_wclasszd2locationzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2202));
		}

	}



/* wclass-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2locationzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_208, obj_t BgL_vz00_209)
	{
		{	/* Object/class.sch 254 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_208)))->BgL_locationz00) =
				((obj_t) BgL_vz00_209), BUNSPEC);
		}

	}



/* &wclass-location-set! */
	obj_t BGl_z62wclasszd2locationzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2203, obj_t BgL_oz00_2204, obj_t BgL_vz00_2205)
	{
		{	/* Object/class.sch 254 */
			return
				BGl_wclasszd2locationzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2204), BgL_vz00_2205);
		}

	}



/* wclass-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2tvectorzd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_210)
	{
		{	/* Object/class.sch 255 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_210)))->BgL_tvectorz00);
		}

	}



/* &wclass-tvector */
	obj_t BGl_z62wclasszd2tvectorzb0zzobject_classz00(obj_t BgL_envz00_2206,
		obj_t BgL_oz00_2207)
	{
		{	/* Object/class.sch 255 */
			return
				BGl_wclasszd2tvectorzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2207));
		}

	}



/* wclass-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2tvectorzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_211, obj_t BgL_vz00_212)
	{
		{	/* Object/class.sch 256 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_211)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_212), BUNSPEC);
		}

	}



/* &wclass-tvector-set! */
	obj_t BGl_z62wclasszd2tvectorzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2208, obj_t BgL_oz00_2209, obj_t BgL_vz00_2210)
	{
		{	/* Object/class.sch 256 */
			return
				BGl_wclasszd2tvectorzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2209), BgL_vz00_2210);
		}

	}



/* wclass-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2pointedzd2tozd2byzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_213)
	{
		{	/* Object/class.sch 257 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_213)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &wclass-pointed-to-by */
	obj_t BGl_z62wclasszd2pointedzd2tozd2byzb0zzobject_classz00(obj_t
		BgL_envz00_2211, obj_t BgL_oz00_2212)
	{
		{	/* Object/class.sch 257 */
			return
				BGl_wclasszd2pointedzd2tozd2byzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2212));
		}

	}



/* wclass-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_214, obj_t BgL_vz00_215)
	{
		{	/* Object/class.sch 258 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_214)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_215), BUNSPEC);
		}

	}



/* &wclass-pointed-to-by-set! */
	obj_t BGl_z62wclasszd2pointedzd2tozd2byzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2213, obj_t BgL_oz00_2214, obj_t BgL_vz00_2215)
	{
		{	/* Object/class.sch 258 */
			return
				BGl_wclasszd2pointedzd2tozd2byzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2214), BgL_vz00_2215);
		}

	}



/* wclass-alias */
	BGL_EXPORTED_DEF obj_t BGl_wclasszd2aliaszd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_216)
	{
		{	/* Object/class.sch 259 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_216)))->BgL_aliasz00);
		}

	}



/* &wclass-alias */
	obj_t BGl_z62wclasszd2aliaszb0zzobject_classz00(obj_t BgL_envz00_2216,
		obj_t BgL_oz00_2217)
	{
		{	/* Object/class.sch 259 */
			return
				BGl_wclasszd2aliaszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2217));
		}

	}



/* wclass-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2aliaszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_217, obj_t BgL_vz00_218)
	{
		{	/* Object/class.sch 260 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_217)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_218), BUNSPEC);
		}

	}



/* &wclass-alias-set! */
	obj_t BGl_z62wclasszd2aliaszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2218, obj_t BgL_oz00_2219, obj_t BgL_vz00_2220)
	{
		{	/* Object/class.sch 260 */
			return
				BGl_wclasszd2aliaszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2219), BgL_vz00_2220);
		}

	}



/* wclass-$ */
	BGL_EXPORTED_DEF obj_t BGl_wclasszd2z42z90zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_219)
	{
		{	/* Object/class.sch 261 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_219)))->BgL_z42z42);
		}

	}



/* &wclass-$ */
	obj_t BGl_z62wclasszd2z42zf2zzobject_classz00(obj_t BgL_envz00_2221,
		obj_t BgL_oz00_2222)
	{
		{	/* Object/class.sch 261 */
			return
				BGl_wclasszd2z42z90zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2222));
		}

	}



/* wclass-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2z42zd2setz12z50zzobject_classz00(BgL_typez00_bglt BgL_oz00_220,
		obj_t BgL_vz00_221)
	{
		{	/* Object/class.sch 262 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_220)))->BgL_z42z42) =
				((obj_t) BgL_vz00_221), BUNSPEC);
		}

	}



/* &wclass-$-set! */
	obj_t BGl_z62wclasszd2z42zd2setz12z32zzobject_classz00(obj_t BgL_envz00_2223,
		obj_t BgL_oz00_2224, obj_t BgL_vz00_2225)
	{
		{	/* Object/class.sch 262 */
			return
				BGl_wclasszd2z42zd2setz12z50zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2224), BgL_vz00_2225);
		}

	}



/* wclass-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_wclasszd2magiczf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_222)
	{
		{	/* Object/class.sch 263 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_222)))->BgL_magiczf3zf3);
		}

	}



/* &wclass-magic? */
	obj_t BGl_z62wclasszd2magiczf3z43zzobject_classz00(obj_t BgL_envz00_2226,
		obj_t BgL_oz00_2227)
	{
		{	/* Object/class.sch 263 */
			return
				BBOOL(BGl_wclasszd2magiczf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2227)));
		}

	}



/* wclass-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2magiczf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_223, bool_t BgL_vz00_224)
	{
		{	/* Object/class.sch 264 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_223)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_224), BUNSPEC);
		}

	}



/* &wclass-magic?-set! */
	obj_t BGl_z62wclasszd2magiczf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2228, obj_t BgL_oz00_2229, obj_t BgL_vz00_2230)
	{
		{	/* Object/class.sch 264 */
			return
				BGl_wclasszd2magiczf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2229), CBOOL(BgL_vz00_2230));
		}

	}



/* wclass-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_wclasszd2initzf3z21zzobject_classz00(BgL_typez00_bglt BgL_oz00_225)
	{
		{	/* Object/class.sch 265 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_225)))->BgL_initzf3zf3);
		}

	}



/* &wclass-init? */
	obj_t BGl_z62wclasszd2initzf3z43zzobject_classz00(obj_t BgL_envz00_2231,
		obj_t BgL_oz00_2232)
	{
		{	/* Object/class.sch 265 */
			return
				BBOOL(BGl_wclasszd2initzf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_oz00_2232)));
		}

	}



/* wclass-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2initzf3zd2setz12ze1zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_226, bool_t BgL_vz00_227)
	{
		{	/* Object/class.sch 266 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_226)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_227), BUNSPEC);
		}

	}



/* &wclass-init?-set! */
	obj_t BGl_z62wclasszd2initzf3zd2setz12z83zzobject_classz00(obj_t
		BgL_envz00_2233, obj_t BgL_oz00_2234, obj_t BgL_vz00_2235)
	{
		{	/* Object/class.sch 266 */
			return
				BGl_wclasszd2initzf3zd2setz12ze1zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2234), CBOOL(BgL_vz00_2235));
		}

	}



/* wclass-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2parentszd2zzobject_classz00(BgL_typez00_bglt BgL_oz00_228)
	{
		{	/* Object/class.sch 267 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_228)))->BgL_parentsz00);
		}

	}



/* &wclass-parents */
	obj_t BGl_z62wclasszd2parentszb0zzobject_classz00(obj_t BgL_envz00_2236,
		obj_t BgL_oz00_2237)
	{
		{	/* Object/class.sch 267 */
			return
				BGl_wclasszd2parentszd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2237));
		}

	}



/* wclass-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2parentszd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_229, obj_t BgL_vz00_230)
	{
		{	/* Object/class.sch 268 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_229)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_230), BUNSPEC);
		}

	}



/* &wclass-parents-set! */
	obj_t BGl_z62wclasszd2parentszd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2238, obj_t BgL_oz00_2239, obj_t BgL_vz00_2240)
	{
		{	/* Object/class.sch 268 */
			return
				BGl_wclasszd2parentszd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2239), BgL_vz00_2240);
		}

	}



/* wclass-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2coercezd2toz00zzobject_classz00(BgL_typez00_bglt BgL_oz00_231)
	{
		{	/* Object/class.sch 269 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_231)))->BgL_coercezd2tozd2);
		}

	}



/* &wclass-coerce-to */
	obj_t BGl_z62wclasszd2coercezd2toz62zzobject_classz00(obj_t BgL_envz00_2241,
		obj_t BgL_oz00_2242)
	{
		{	/* Object/class.sch 269 */
			return
				BGl_wclasszd2coercezd2toz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2242));
		}

	}



/* wclass-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2coercezd2tozd2setz12zc0zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_232, obj_t BgL_vz00_233)
	{
		{	/* Object/class.sch 270 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_232)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_233), BUNSPEC);
		}

	}



/* &wclass-coerce-to-set! */
	obj_t BGl_z62wclasszd2coercezd2tozd2setz12za2zzobject_classz00(obj_t
		BgL_envz00_2243, obj_t BgL_oz00_2244, obj_t BgL_vz00_2245)
	{
		{	/* Object/class.sch 270 */
			return
				BGl_wclasszd2coercezd2tozd2setz12zc0zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2244), BgL_vz00_2245);
		}

	}



/* wclass-class */
	BGL_EXPORTED_DEF obj_t BGl_wclasszd2classzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_234)
	{
		{	/* Object/class.sch 271 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_234)))->BgL_classz00);
		}

	}



/* &wclass-class */
	obj_t BGl_z62wclasszd2classzb0zzobject_classz00(obj_t BgL_envz00_2246,
		obj_t BgL_oz00_2247)
	{
		{	/* Object/class.sch 271 */
			return
				BGl_wclasszd2classzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2247));
		}

	}



/* wclass-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2classzd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_235, obj_t BgL_vz00_236)
	{
		{	/* Object/class.sch 272 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_235)))->BgL_classz00) =
				((obj_t) BgL_vz00_236), BUNSPEC);
		}

	}



/* &wclass-class-set! */
	obj_t BGl_z62wclasszd2classzd2setz12z70zzobject_classz00(obj_t
		BgL_envz00_2248, obj_t BgL_oz00_2249, obj_t BgL_vz00_2250)
	{
		{	/* Object/class.sch 272 */
			return
				BGl_wclasszd2classzd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2249), BgL_vz00_2250);
		}

	}



/* wclass-size */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2siza7ez75zzobject_classz00(BgL_typez00_bglt BgL_oz00_237)
	{
		{	/* Object/class.sch 273 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_237)))->BgL_siza7eza7);
		}

	}



/* &wclass-size */
	obj_t BGl_z62wclasszd2siza7ez17zzobject_classz00(obj_t BgL_envz00_2251,
		obj_t BgL_oz00_2252)
	{
		{	/* Object/class.sch 273 */
			return
				BGl_wclasszd2siza7ez75zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2252));
		}

	}



/* wclass-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2siza7ezd2setz12zb5zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_238, obj_t BgL_vz00_239)
	{
		{	/* Object/class.sch 274 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_238)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_239), BUNSPEC);
		}

	}



/* &wclass-size-set! */
	obj_t BGl_z62wclasszd2siza7ezd2setz12zd7zzobject_classz00(obj_t
		BgL_envz00_2253, obj_t BgL_oz00_2254, obj_t BgL_vz00_2255)
	{
		{	/* Object/class.sch 274 */
			return
				BGl_wclasszd2siza7ezd2setz12zb5zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2254), BgL_vz00_2255);
		}

	}



/* wclass-name */
	BGL_EXPORTED_DEF obj_t BGl_wclasszd2namezd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_240)
	{
		{	/* Object/class.sch 275 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_240)))->BgL_namez00);
		}

	}



/* &wclass-name */
	obj_t BGl_z62wclasszd2namezb0zzobject_classz00(obj_t BgL_envz00_2256,
		obj_t BgL_oz00_2257)
	{
		{	/* Object/class.sch 275 */
			return
				BGl_wclasszd2namezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2257));
		}

	}



/* wclass-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_wclasszd2namezd2setz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_241, obj_t BgL_vz00_242)
	{
		{	/* Object/class.sch 276 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_241)))->BgL_namez00) =
				((obj_t) BgL_vz00_242), BUNSPEC);
		}

	}



/* &wclass-name-set! */
	obj_t BGl_z62wclasszd2namezd2setz12z70zzobject_classz00(obj_t BgL_envz00_2258,
		obj_t BgL_oz00_2259, obj_t BgL_vz00_2260)
	{
		{	/* Object/class.sch 276 */
			return
				BGl_wclasszd2namezd2setz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_oz00_2259), BgL_vz00_2260);
		}

	}



/* wclass-id */
	BGL_EXPORTED_DEF obj_t BGl_wclasszd2idzd2zzobject_classz00(BgL_typez00_bglt
		BgL_oz00_243)
	{
		{	/* Object/class.sch 277 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_243)))->BgL_idz00);
		}

	}



/* &wclass-id */
	obj_t BGl_z62wclasszd2idzb0zzobject_classz00(obj_t BgL_envz00_2261,
		obj_t BgL_oz00_2262)
	{
		{	/* Object/class.sch 277 */
			return
				BGl_wclasszd2idzd2zzobject_classz00(((BgL_typez00_bglt) BgL_oz00_2262));
		}

	}



/* get-class-list */
	BGL_EXPORTED_DEF obj_t BGl_getzd2classzd2listz00zzobject_classz00()
	{
		{	/* Object/class.scm 96 */
			return BGl_za2classzd2typezd2listza2z00zzobject_classz00;
		}

	}



/* &get-class-list */
	obj_t BGl_z62getzd2classzd2listz62zzobject_classz00(obj_t BgL_envz00_2263)
	{
		{	/* Object/class.scm 96 */
			return BGl_getzd2classzd2listz00zzobject_classz00();
		}

	}



/* heap-add-class! */
	BGL_EXPORTED_DEF obj_t
		BGl_heapzd2addzd2classz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_typez00_246)
	{
		{	/* Object/class.scm 105 */
			return (BGl_za2classzd2typezd2listza2z00zzobject_classz00 =
				MAKE_YOUNG_PAIR(
					((obj_t) BgL_typez00_246),
					BGl_za2classzd2typezd2listza2z00zzobject_classz00), BUNSPEC);
		}

	}



/* &heap-add-class! */
	obj_t BGl_z62heapzd2addzd2classz12z70zzobject_classz00(obj_t BgL_envz00_2264,
		obj_t BgL_typez00_2265)
	{
		{	/* Object/class.scm 105 */
			return
				BGl_heapzd2addzd2classz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_typez00_2265));
		}

	}



/* wide-chunk-class-id */
	BGL_EXPORTED_DEF obj_t BGl_widezd2chunkzd2classzd2idzd2zzobject_classz00(obj_t
		BgL_classzd2idzd2_247)
	{
		{	/* Object/class.scm 115 */
			{	/* Object/class.scm 116 */
				obj_t BgL_arg1252z00_1513;

				{	/* Object/class.scm 116 */
					obj_t BgL_arg1253z00_1514;

					{	/* Object/class.scm 116 */
						obj_t BgL_res1870z00_1517;

						{	/* Object/class.scm 116 */
							obj_t BgL_arg1466z00_1516;

							BgL_arg1466z00_1516 = SYMBOL_TO_STRING(BgL_classzd2idzd2_247);
							BgL_res1870z00_1517 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_1516);
						}
						BgL_arg1253z00_1514 = BgL_res1870z00_1517;
					}
					BgL_arg1252z00_1513 =
						string_append(BGl_string1952z00zzobject_classz00,
						BgL_arg1253z00_1514);
				}
				return bstring_to_symbol(BgL_arg1252z00_1513);
			}
		}

	}



/* &wide-chunk-class-id */
	obj_t BGl_z62widezd2chunkzd2classzd2idzb0zzobject_classz00(obj_t
		BgL_envz00_2266, obj_t BgL_classzd2idzd2_2267)
	{
		{	/* Object/class.scm 115 */
			return
				BGl_widezd2chunkzd2classzd2idzd2zzobject_classz00
				(BgL_classzd2idzd2_2267);
		}

	}



/* type-class-name */
	BGL_EXPORTED_DEF obj_t
		BGl_typezd2classzd2namez00zzobject_classz00(BgL_typez00_bglt
		BgL_classz00_248)
	{
		{	/* Object/class.scm 121 */
			{	/* Object/class.scm 123 */
				bool_t BgL_test2242z00_3635;

				{	/* Object/class.scm 123 */
					bool_t BgL_res1872z00_1520;

					BgL_res1872z00_1520 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_classz00_248), BGl_tclassz00zzobject_classz00);
					BgL_test2242z00_3635 = BgL_res1872z00_1520;
				}
				if (BgL_test2242z00_3635)
					{	/* Object/class.scm 125 */
						bool_t BgL_test2243z00_3638;

						{	/* Object/class.scm 125 */
							bool_t BgL_test2244z00_3639;

							{	/* Object/class.scm 125 */
								obj_t BgL_tmpz00_3640;

								{
									BgL_tclassz00_bglt BgL_auxz00_3641;

									{
										obj_t BgL_auxz00_3642;

										{	/* Object/class.scm 125 */
											BgL_objectz00_bglt BgL_tmpz00_3643;

											BgL_tmpz00_3643 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_classz00_248));
											BgL_auxz00_3642 = BGL_OBJECT_WIDENING(BgL_tmpz00_3643);
										}
										BgL_auxz00_3641 = ((BgL_tclassz00_bglt) BgL_auxz00_3642);
									}
									BgL_tmpz00_3640 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3641))->
										BgL_wideningz00);
								}
								BgL_test2244z00_3639 = CBOOL(BgL_tmpz00_3640);
							}
							if (BgL_test2244z00_3639)
								{	/* Object/class.scm 125 */
									BgL_test2243z00_3638 =
										CBOOL(BGl_za2sawza2z00zzengine_paramz00);
								}
							else
								{	/* Object/class.scm 125 */
									BgL_test2243z00_3638 = ((bool_t) 0);
								}
						}
						if (BgL_test2243z00_3638)
							{	/* Object/class.scm 126 */
								obj_t BgL_arg1258z00_830;

								{
									BgL_tclassz00_bglt BgL_auxz00_3651;

									{
										obj_t BgL_auxz00_3652;

										{	/* Object/class.scm 126 */
											BgL_objectz00_bglt BgL_tmpz00_3653;

											BgL_tmpz00_3653 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_classz00_248));
											BgL_auxz00_3652 = BGL_OBJECT_WIDENING(BgL_tmpz00_3653);
										}
										BgL_auxz00_3651 = ((BgL_tclassz00_bglt) BgL_auxz00_3652);
									}
									BgL_arg1258z00_830 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3651))->
										BgL_widezd2typezd2);
								}
								return
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_arg1258z00_830)))->BgL_namez00);
							}
						else
							{	/* Object/class.scm 125 */
								return
									(((BgL_typez00_bglt) COBJECT(BgL_classz00_248))->BgL_namez00);
							}
					}
				else
					{	/* Object/class.scm 123 */
						return
							(((BgL_typez00_bglt) COBJECT(BgL_classz00_248))->BgL_namez00);
					}
			}
		}

	}



/* &type-class-name */
	obj_t BGl_z62typezd2classzd2namez62zzobject_classz00(obj_t BgL_envz00_2268,
		obj_t BgL_classz00_2269)
	{
		{	/* Object/class.scm 121 */
			return
				BGl_typezd2classzd2namez00zzobject_classz00(
				((BgL_typez00_bglt) BgL_classz00_2269));
		}

	}



/* declare-class-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t
		BgL_classzd2defzd2_249, BgL_globalz00_bglt BgL_classzd2holderzd2_250,
		obj_t BgL_wideningz00_251, bool_t BgL_finalzf3zf3_252,
		bool_t BgL_abstractzf3zf3_253, obj_t BgL_srcz00_254)
	{
		{	/* Object/class.scm 141 */
			{	/* Object/class.scm 142 */
				obj_t BgL_classzd2identzd2_832;

				{	/* Object/class.scm 142 */
					obj_t BgL_arg1285z00_866;
					obj_t BgL_arg1286z00_867;

					BgL_arg1285z00_866 = CAR(((obj_t) BgL_classzd2defzd2_249));
					BgL_arg1286z00_867 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_254);
					BgL_classzd2identzd2_832 =
						BGl_parsezd2idzd2zzast_identz00(BgL_arg1285z00_866,
						BgL_arg1286z00_867);
				}
				{	/* Object/class.scm 142 */
					obj_t BgL_classzd2idzd2_833;

					BgL_classzd2idzd2_833 = CAR(BgL_classzd2identzd2_832);
					{	/* Object/class.scm 143 */
						obj_t BgL_superz00_834;

						{	/* Object/class.scm 144 */
							obj_t BgL_superz00_861;

							BgL_superz00_861 = CDR(BgL_classzd2identzd2_832);
							if (
								((((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_superz00_861)))->BgL_idz00) ==
									BgL_classzd2idzd2_833))
								{	/* Object/class.scm 146 */
									BgL_superz00_834 = BFALSE;
								}
							else
								{	/* Object/class.scm 146 */
									if ((BgL_superz00_861 == BGl_za2_za2z00zztype_cachez00))
										{	/* Object/class.scm 148 */
											BgL_superz00_834 =
												BGl_getzd2objectzd2typez00zztype_cachez00();
										}
									else
										{	/* Object/class.scm 148 */
											BgL_superz00_834 = BgL_superz00_861;
										}
								}
						}
						{	/* Object/class.scm 144 */
							obj_t BgL_namez00_835;

							BgL_namez00_835 =
								BGl_idzd2ze3namez31zzast_identz00(BgL_classzd2idzd2_833);
							{	/* Object/class.scm 152 */
								obj_t BgL_siza7eofza7_836;

								BgL_siza7eofza7_836 =
									string_append_3(BGl_string1953z00zzobject_classz00,
									BgL_namez00_835, BGl_string1954z00zzobject_classz00);
								{	/* Object/class.scm 153 */
									obj_t BgL_tzd2namezd2_837;

									BgL_tzd2namezd2_837 =
										string_append(BgL_namez00_835,
										BGl_string1955z00zzobject_classz00);
									{	/* Object/class.scm 154 */
										BgL_typez00_bglt BgL_typez00_838;

										BgL_typez00_838 =
											BGl_declarezd2typez12zc0zztype_envz00
											(BgL_classzd2idzd2_833, BgL_tzd2namezd2_837,
											CNST_TABLE_REF(((long) 0)));
										{	/* Object/class.scm 155 */

											BGl_globalzd2setzd2readzd2onlyz12zc0zzast_varz00
												(BgL_classzd2holderzd2_250);
											((((BgL_globalz00_bglt)
														COBJECT(BgL_classzd2holderzd2_250))->
													BgL_evaluablezf3zf3) =
												((bool_t) ((bool_t) 1)), BUNSPEC);
											{	/* Object/class.scm 159 */
												obj_t BgL_arg1263z00_839;

												BgL_arg1263z00_839 =
													BGl_getzd2classzd2typez00zztype_cachez00();
												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	BgL_classzd2holderzd2_250)))->BgL_typez00) =
													((BgL_typez00_bglt) ((BgL_typez00_bglt)
															BgL_arg1263z00_839)), BUNSPEC);
											}
											{	/* Object/class.scm 163 */
												BgL_tclassz00_bglt BgL_wide1154z00_842;

												BgL_wide1154z00_842 =
													((BgL_tclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_tclassz00_bgl))));
												{	/* Object/class.scm 163 */
													obj_t BgL_auxz00_3693;
													BgL_objectz00_bglt BgL_tmpz00_3690;

													BgL_auxz00_3693 = ((obj_t) BgL_wide1154z00_842);
													BgL_tmpz00_3690 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_typez00_838));
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3690,
														BgL_auxz00_3693);
												}
												((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_typez00_838));
												{	/* Object/class.scm 163 */
													long BgL_arg1268z00_843;

													{	/* Object/class.scm 163 */
														long BgL_res1873z00_1538;

														BgL_res1873z00_1538 =
															BGL_CLASS_INDEX(BGl_tclassz00zzobject_classz00);
														BgL_arg1268z00_843 = BgL_res1873z00_1538;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838)),
														BgL_arg1268z00_843);
												}
												((BgL_typez00_bglt)
													((BgL_typez00_bglt) BgL_typez00_838));
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3704;

												{
													obj_t BgL_auxz00_3705;

													{	/* Object/class.scm 164 */
														BgL_objectz00_bglt BgL_tmpz00_3706;

														BgL_tmpz00_3706 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3705 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3706);
													}
													BgL_auxz00_3704 =
														((BgL_tclassz00_bglt) BgL_auxz00_3705);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3704))->
														BgL_itszd2superzd2) =
													((obj_t) BgL_superz00_834), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3712;

												{
													obj_t BgL_auxz00_3713;

													{	/* Object/class.scm 56 */
														BgL_objectz00_bglt BgL_tmpz00_3714;

														BgL_tmpz00_3714 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3713 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3714);
													}
													BgL_auxz00_3712 =
														((BgL_tclassz00_bglt) BgL_auxz00_3713);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3712))->
														BgL_slotsz00) = ((obj_t) BUNSPEC), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3720;

												{
													obj_t BgL_auxz00_3721;

													{	/* Object/class.scm 168 */
														BgL_objectz00_bglt BgL_tmpz00_3722;

														BgL_tmpz00_3722 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3721 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3722);
													}
													BgL_auxz00_3720 =
														((BgL_tclassz00_bglt) BgL_auxz00_3721);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3720))->
														BgL_holderz00) =
													((BgL_globalz00_bglt) BgL_classzd2holderzd2_250),
													BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3728;

												{
													obj_t BgL_auxz00_3729;

													{	/* Object/class.scm 169 */
														BgL_objectz00_bglt BgL_tmpz00_3730;

														BgL_tmpz00_3730 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3729 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3730);
													}
													BgL_auxz00_3728 =
														((BgL_tclassz00_bglt) BgL_auxz00_3729);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3728))->
														BgL_wideningz00) =
													((obj_t) BgL_wideningz00_251), BUNSPEC);
											}
											{
												long BgL_auxz00_3743;
												BgL_tclassz00_bglt BgL_auxz00_3736;

												{	/* Object/class.scm 165 */
													bool_t BgL_test2247z00_3744;

													{	/* Object/class.scm 165 */
														bool_t BgL_res1874z00_1546;

														BgL_res1874z00_1546 =
															BGl_isazf3zf3zz__objectz00(BgL_superz00_834,
															BGl_tclassz00zzobject_classz00);
														BgL_test2247z00_3744 = BgL_res1874z00_1546;
													}
													if (BgL_test2247z00_3744)
														{	/* Object/class.scm 167 */
															long BgL_arg1270z00_846;

															{
																BgL_tclassz00_bglt BgL_auxz00_3746;

																{
																	obj_t BgL_auxz00_3747;

																	{	/* Object/class.scm 167 */
																		BgL_objectz00_bglt BgL_tmpz00_3748;

																		BgL_tmpz00_3748 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_superz00_834));
																		BgL_auxz00_3747 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3748);
																	}
																	BgL_auxz00_3746 =
																		((BgL_tclassz00_bglt) BgL_auxz00_3747);
																}
																BgL_arg1270z00_846 =
																	(((BgL_tclassz00_bglt)
																		COBJECT(BgL_auxz00_3746))->BgL_depthz00);
															}
															BgL_auxz00_3743 =
																(BgL_arg1270z00_846 + ((long) 1));
														}
													else
														{	/* Object/class.scm 165 */
															BgL_auxz00_3743 = ((long) 0);
												}}
												{
													obj_t BgL_auxz00_3737;

													{	/* Object/class.scm 165 */
														BgL_objectz00_bglt BgL_tmpz00_3738;

														BgL_tmpz00_3738 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3737 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3738);
													}
													BgL_auxz00_3736 =
														((BgL_tclassz00_bglt) BgL_auxz00_3737);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3736))->
														BgL_depthz00) = ((long) BgL_auxz00_3743), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3756;

												{
													obj_t BgL_auxz00_3757;

													{	/* Object/class.scm 170 */
														BgL_objectz00_bglt BgL_tmpz00_3758;

														BgL_tmpz00_3758 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3757 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3758);
													}
													BgL_auxz00_3756 =
														((BgL_tclassz00_bglt) BgL_auxz00_3757);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3756))->
														BgL_finalzf3zf3) =
													((bool_t) BgL_finalzf3zf3_252), BUNSPEC);
											}
											{
												obj_t BgL_auxz00_3771;
												BgL_tclassz00_bglt BgL_auxz00_3764;

												{	/* Object/class.scm 172 */
													obj_t BgL_pairz00_1556;

													BgL_pairz00_1556 =
														CDR(((obj_t) BgL_classzd2defzd2_249));
													BgL_auxz00_3771 = CAR(BgL_pairz00_1556);
												}
												{
													obj_t BgL_auxz00_3765;

													{	/* Object/class.scm 172 */
														BgL_objectz00_bglt BgL_tmpz00_3766;

														BgL_tmpz00_3766 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3765 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3766);
													}
													BgL_auxz00_3764 =
														((BgL_tclassz00_bglt) BgL_auxz00_3765);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3764))->
														BgL_constructorz00) =
													((obj_t) BgL_auxz00_3771), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3776;

												{
													obj_t BgL_auxz00_3777;

													{	/* Object/class.scm 56 */
														BgL_objectz00_bglt BgL_tmpz00_3778;

														BgL_tmpz00_3778 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3777 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3778);
													}
													BgL_auxz00_3776 =
														((BgL_tclassz00_bglt) BgL_auxz00_3777);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3776))->
														BgL_virtualzd2slotszd2numberz00) =
													((obj_t) BINT(((long) 0))), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3785;

												{
													obj_t BgL_auxz00_3786;

													{	/* Object/class.scm 171 */
														BgL_objectz00_bglt BgL_tmpz00_3787;

														BgL_tmpz00_3787 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3786 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3787);
													}
													BgL_auxz00_3785 =
														((BgL_tclassz00_bglt) BgL_auxz00_3786);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3785))->
														BgL_abstractzf3zf3) =
													((bool_t) BgL_abstractzf3zf3_253), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3793;

												{
													obj_t BgL_auxz00_3794;

													{	/* Object/class.scm 56 */
														BgL_objectz00_bglt BgL_tmpz00_3795;

														BgL_tmpz00_3795 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3794 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3795);
													}
													BgL_auxz00_3793 =
														((BgL_tclassz00_bglt) BgL_auxz00_3794);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3793))->
														BgL_widezd2typezd2) = ((obj_t) BFALSE), BUNSPEC);
											}
											{
												BgL_tclassz00_bglt BgL_auxz00_3801;

												{
													obj_t BgL_auxz00_3802;

													{	/* Object/class.scm 56 */
														BgL_objectz00_bglt BgL_tmpz00_3803;

														BgL_tmpz00_3803 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_typez00_838));
														BgL_auxz00_3802 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3803);
													}
													BgL_auxz00_3801 =
														((BgL_tclassz00_bglt) BgL_auxz00_3802);
												}
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3801))->
														BgL_subclassesz00) = ((obj_t) BNIL), BUNSPEC);
											}
											((BgL_typez00_bglt) BgL_typez00_838);
											if (BGl_isazf3zf3zz__objectz00(BgL_superz00_834,
													BGl_tclassz00zzobject_classz00))
												{
													obj_t BgL_auxz00_3819;
													BgL_tclassz00_bglt BgL_auxz00_3812;

													{	/* Object/class.scm 175 */
														obj_t BgL_arg1273z00_849;

														{
															BgL_tclassz00_bglt BgL_auxz00_3820;

															{
																obj_t BgL_auxz00_3821;

																{	/* Object/class.scm 175 */
																	BgL_objectz00_bglt BgL_tmpz00_3822;

																	BgL_tmpz00_3822 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_superz00_834));
																	BgL_auxz00_3821 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3822);
																}
																BgL_auxz00_3820 =
																	((BgL_tclassz00_bglt) BgL_auxz00_3821);
															}
															BgL_arg1273z00_849 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_3820))->BgL_subclassesz00);
														}
														BgL_auxz00_3819 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_typez00_838), BgL_arg1273z00_849);
													}
													{
														obj_t BgL_auxz00_3813;

														{	/* Object/class.scm 175 */
															BgL_objectz00_bglt BgL_tmpz00_3814;

															BgL_tmpz00_3814 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_superz00_834));
															BgL_auxz00_3813 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3814);
														}
														BgL_auxz00_3812 =
															((BgL_tclassz00_bglt) BgL_auxz00_3813);
													}
													((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3812))->
															BgL_subclassesz00) =
														((obj_t) BgL_auxz00_3819), BUNSPEC);
												}
											else
												{	/* Object/class.scm 173 */
													BFALSE;
												}
											if ((BgL_wideningz00_251 == CNST_TABLE_REF(((long) 1))))
												{	/* Object/class.scm 180 */
													obj_t BgL_wtidz00_851;

													{	/* Object/class.scm 180 */
														obj_t BgL_res1878z00_1571;

														{	/* Object/class.scm 116 */
															obj_t BgL_arg1252z00_1564;

															{	/* Object/class.scm 116 */
																obj_t BgL_arg1253z00_1565;

																{	/* Object/class.scm 116 */
																	obj_t BgL_res1876z00_1568;

																	{	/* Object/class.scm 116 */
																		obj_t BgL_arg1466z00_1567;

																		BgL_arg1466z00_1567 =
																			SYMBOL_TO_STRING(
																			((obj_t) BgL_classzd2idzd2_833));
																		BgL_res1876z00_1568 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_1567);
																	}
																	BgL_arg1253z00_1565 = BgL_res1876z00_1568;
																}
																BgL_arg1252z00_1564 =
																	string_append
																	(BGl_string1952z00zzobject_classz00,
																	BgL_arg1253z00_1565);
															}
															BgL_res1878z00_1571 =
																bstring_to_symbol(BgL_arg1252z00_1564);
														}
														BgL_wtidz00_851 = BgL_res1878z00_1571;
													}
													{	/* Object/class.scm 180 */
														BgL_typez00_bglt BgL_wtz00_852;

														{	/* Object/class.scm 181 */
															BgL_typez00_bglt BgL_tmp1158z00_856;

															BgL_tmp1158z00_856 =
																BGl_declarezd2typez12zc0zztype_envz00
																(BgL_wtidz00_851, BgL_tzd2namezd2_837,
																CNST_TABLE_REF(((long) 0)));
															{	/* Object/class.scm 181 */
																BgL_wclassz00_bglt BgL_wide1160z00_858;

																BgL_wide1160z00_858 =
																	((BgL_wclassz00_bglt)
																	BOBJECT(GC_MALLOC(sizeof(struct
																				BgL_wclassz00_bgl))));
																{	/* Object/class.scm 181 */
																	obj_t BgL_auxz00_3845;
																	BgL_objectz00_bglt BgL_tmpz00_3842;

																	BgL_auxz00_3845 =
																		((obj_t) BgL_wide1160z00_858);
																	BgL_tmpz00_3842 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_tmp1158z00_856));
																	BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3842,
																		BgL_auxz00_3845);
																}
																((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_tmp1158z00_856));
																{	/* Object/class.scm 181 */
																	long BgL_arg1280z00_859;

																	{	/* Object/class.scm 181 */
																		long BgL_res1879z00_1574;

																		BgL_res1879z00_1574 =
																			BGL_CLASS_INDEX
																			(BGl_wclassz00zzobject_classz00);
																		BgL_arg1280z00_859 = BgL_res1879z00_1574;
																	}
																	BGL_OBJECT_CLASS_NUM_SET(
																		((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_tmp1158z00_856)),
																		BgL_arg1280z00_859);
																}
																((BgL_typez00_bglt)
																	((BgL_typez00_bglt) BgL_tmp1158z00_856));
															}
															{
																BgL_wclassz00_bglt BgL_auxz00_3856;

																{
																	obj_t BgL_auxz00_3857;

																	{	/* Object/class.scm 182 */
																		BgL_objectz00_bglt BgL_tmpz00_3858;

																		BgL_tmpz00_3858 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_tmp1158z00_856));
																		BgL_auxz00_3857 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3858);
																	}
																	BgL_auxz00_3856 =
																		((BgL_wclassz00_bglt) BgL_auxz00_3857);
																}
																((((BgL_wclassz00_bglt)
																			COBJECT(BgL_auxz00_3856))->
																		BgL_itszd2classzd2) =
																	((obj_t) ((obj_t) BgL_typez00_838)), BUNSPEC);
															}
															BgL_wtz00_852 =
																((BgL_typez00_bglt) BgL_tmp1158z00_856);
														}
														{	/* Object/class.scm 181 */

															((((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_wtz00_852)))->
																	BgL_siza7eza7) =
																((obj_t) BgL_siza7eofza7_836), BUNSPEC);
															{
																BgL_tclassz00_bglt BgL_auxz00_3868;

																{
																	obj_t BgL_auxz00_3869;

																	{	/* Object/class.scm 184 */
																		BgL_objectz00_bglt BgL_tmpz00_3870;

																		BgL_tmpz00_3870 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_typez00_838));
																		BgL_auxz00_3869 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3870);
																	}
																	BgL_auxz00_3868 =
																		((BgL_tclassz00_bglt) BgL_auxz00_3869);
																}
																((((BgL_tclassz00_bglt)
																			COBJECT(BgL_auxz00_3868))->
																		BgL_widezd2typezd2) =
																	((obj_t) ((obj_t) BgL_wtz00_852)), BUNSPEC);
															}
															{	/* Object/class.scm 185 */
																obj_t BgL_arg1275z00_853;

																BgL_arg1275z00_853 =
																	(((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_superz00_834)))->
																	BgL_namez00);
																((((BgL_typez00_bglt)
																			COBJECT(BgL_typez00_838))->BgL_namez00) =
																	((obj_t) BgL_arg1275z00_853), BUNSPEC);
															}
															{	/* Object/class.scm 186 */
																obj_t BgL_arg1276z00_854;

																BgL_arg1276z00_854 =
																	(((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_superz00_834)))->
																	BgL_siza7eza7);
																((((BgL_typez00_bglt)
																			COBJECT(BgL_typez00_838))->
																		BgL_siza7eza7) =
																	((obj_t) BgL_arg1276z00_854), BUNSPEC);
															}
															{	/* Object/class.scm 187 */
																obj_t BgL_list1277z00_855;

																BgL_list1277z00_855 =
																	MAKE_YOUNG_PAIR(BFALSE, BNIL);
																BGl_genzd2coercionzd2clausez12z12zzobject_coercionz00
																	(BgL_typez00_838, BgL_wtidz00_851,
																	BgL_superz00_834, BgL_list1277z00_855);
															}
															BGl_genzd2classzd2coercersz12z12zzobject_coercionz00
																(((obj_t) BgL_wtz00_852), BgL_superz00_834);
												}}}
											else
												{	/* Object/class.scm 179 */
													((((BgL_typez00_bglt) COBJECT(BgL_typez00_838))->
															BgL_siza7eza7) =
														((obj_t) BgL_siza7eofza7_836), BUNSPEC);
												}
											BGl_za2classzd2typezd2listza2z00zzobject_classz00 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_typez00_838),
												BGl_za2classzd2typezd2listza2z00zzobject_classz00);
											return BgL_typez00_838;
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



/* &declare-class-type! */
	BgL_typez00_bglt BGl_z62declarezd2classzd2typez12z70zzobject_classz00(obj_t
		BgL_envz00_2270, obj_t BgL_classzd2defzd2_2271,
		obj_t BgL_classzd2holderzd2_2272, obj_t BgL_wideningz00_2273,
		obj_t BgL_finalzf3zf3_2274, obj_t BgL_abstractzf3zf3_2275,
		obj_t BgL_srcz00_2276)
	{
		{	/* Object/class.scm 141 */
			return
				BGl_declarezd2classzd2typez12z12zzobject_classz00
				(BgL_classzd2defzd2_2271,
				((BgL_globalz00_bglt) BgL_classzd2holderzd2_2272), BgL_wideningz00_2273,
				CBOOL(BgL_finalzf3zf3_2274), CBOOL(BgL_abstractzf3zf3_2275),
				BgL_srcz00_2276);
		}

	}



/* declare-java-class-type! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t
		BgL_classzd2idzd2_255, obj_t BgL_superz00_256, obj_t BgL_jnamez00_257,
		obj_t BgL_packagez00_258, obj_t BgL_srcz00_259)
	{
		{	/* Object/class.scm 201 */
			{	/* Object/class.scm 202 */
				obj_t BgL_superz00_868;
				BgL_typez00_bglt BgL_typez00_869;

				if (
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_superz00_256)))->BgL_idz00) ==
						BgL_classzd2idzd2_255))
					{	/* Object/class.scm 203 */
						BgL_superz00_868 = BFALSE;
					}
				else
					{	/* Object/class.scm 203 */
						if ((BgL_superz00_256 == BGl_za2_za2z00zztype_cachez00))
							{	/* Object/class.scm 205 */
								BgL_superz00_868 = BFALSE;
							}
						else
							{	/* Object/class.scm 205 */
								BgL_superz00_868 = BgL_superz00_256;
							}
					}
				BgL_typez00_869 =
					BGl_declarezd2typez12zc0zztype_envz00(BgL_classzd2idzd2_255,
					BgL_jnamez00_257, CNST_TABLE_REF(((long) 2)));
				{	/* Object/class.scm 213 */
					BgL_jclassz00_bglt BgL_wide1164z00_872;

					BgL_wide1164z00_872 =
						((BgL_jclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jclassz00_bgl))));
					{	/* Object/class.scm 213 */
						obj_t BgL_auxz00_3906;
						BgL_objectz00_bglt BgL_tmpz00_3903;

						BgL_auxz00_3906 = ((obj_t) BgL_wide1164z00_872);
						BgL_tmpz00_3903 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3903, BgL_auxz00_3906);
					}
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
					{	/* Object/class.scm 213 */
						long BgL_arg1287z00_873;

						{	/* Object/class.scm 213 */
							long BgL_res1880z00_1589;

							BgL_res1880z00_1589 =
								BGL_CLASS_INDEX(BGl_jclassz00zzobject_classz00);
							BgL_arg1287z00_873 = BgL_res1880z00_1589;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt)
								((BgL_typez00_bglt) BgL_typez00_869)), BgL_arg1287z00_873);
					}
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_3917;

					{
						obj_t BgL_auxz00_3918;

						{	/* Object/class.scm 214 */
							BgL_objectz00_bglt BgL_tmpz00_3919;

							BgL_tmpz00_3919 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
							BgL_auxz00_3918 = BGL_OBJECT_WIDENING(BgL_tmpz00_3919);
						}
						BgL_auxz00_3917 = ((BgL_jclassz00_bglt) BgL_auxz00_3918);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3917))->
							BgL_itszd2superzd2) = ((obj_t) BgL_superz00_868), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_3925;

					{
						obj_t BgL_auxz00_3926;

						{	/* Object/class.scm 215 */
							BgL_objectz00_bglt BgL_tmpz00_3927;

							BgL_tmpz00_3927 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
							BgL_auxz00_3926 = BGL_OBJECT_WIDENING(BgL_tmpz00_3927);
						}
						BgL_auxz00_3925 = ((BgL_jclassz00_bglt) BgL_auxz00_3926);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3925))->BgL_slotsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_3933;

					{
						obj_t BgL_auxz00_3934;

						{	/* Object/class.scm 215 */
							BgL_objectz00_bglt BgL_tmpz00_3935;

							BgL_tmpz00_3935 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_typez00_869));
							BgL_auxz00_3934 = BGL_OBJECT_WIDENING(BgL_tmpz00_3935);
						}
						BgL_auxz00_3933 = ((BgL_jclassz00_bglt) BgL_auxz00_3934);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3933))->BgL_packagez00) =
						((obj_t) BgL_packagez00_258), BUNSPEC);
				}
				((BgL_typez00_bglt) BgL_typez00_869);
				return BgL_typez00_869;
			}
		}

	}



/* &declare-java-class-type! */
	BgL_typez00_bglt
		BGl_z62declarezd2javazd2classzd2typez12za2zzobject_classz00(obj_t
		BgL_envz00_2277, obj_t BgL_classzd2idzd2_2278, obj_t BgL_superz00_2279,
		obj_t BgL_jnamez00_2280, obj_t BgL_packagez00_2281, obj_t BgL_srcz00_2282)
	{
		{	/* Object/class.scm 201 */
			return
				BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00
				(BgL_classzd2idzd2_2278, BgL_superz00_2279, BgL_jnamez00_2280,
				BgL_packagez00_2281, BgL_srcz00_2282);
		}

	}



/* final-class? */
	BGL_EXPORTED_DEF bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t
		BgL_classz00_260)
	{
		{	/* Object/class.scm 224 */
			if (BGl_isazf3zf3zz__objectz00(BgL_classz00_260,
					BGl_tclassz00zzobject_classz00))
				{
					BgL_tclassz00_bglt BgL_auxz00_3945;

					{
						obj_t BgL_auxz00_3946;

						{	/* Object/class.scm 225 */
							BgL_objectz00_bglt BgL_tmpz00_3947;

							BgL_tmpz00_3947 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_260));
							BgL_auxz00_3946 = BGL_OBJECT_WIDENING(BgL_tmpz00_3947);
						}
						BgL_auxz00_3945 = ((BgL_tclassz00_bglt) BgL_auxz00_3946);
					}
					return
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3945))->BgL_finalzf3zf3);
				}
			else
				{	/* Object/class.scm 225 */
					return ((bool_t) 0);
				}
		}

	}



/* &final-class? */
	obj_t BGl_z62finalzd2classzf3z43zzobject_classz00(obj_t BgL_envz00_2283,
		obj_t BgL_classz00_2284)
	{
		{	/* Object/class.scm 224 */
			return BBOOL(BGl_finalzd2classzf3z21zzobject_classz00(BgL_classz00_2284));
		}

	}



/* wide-class? */
	BGL_EXPORTED_DEF bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t
		BgL_classz00_261)
	{
		{	/* Object/class.scm 232 */
			if (BGl_isazf3zf3zz__objectz00(BgL_classz00_261,
					BGl_tclassz00zzobject_classz00))
				{	/* Object/class.scm 233 */
					obj_t BgL_tmpz00_3957;

					{
						BgL_tclassz00_bglt BgL_auxz00_3958;

						{
							obj_t BgL_auxz00_3959;

							{	/* Object/class.scm 233 */
								BgL_objectz00_bglt BgL_tmpz00_3960;

								BgL_tmpz00_3960 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_261));
								BgL_auxz00_3959 = BGL_OBJECT_WIDENING(BgL_tmpz00_3960);
							}
							BgL_auxz00_3958 = ((BgL_tclassz00_bglt) BgL_auxz00_3959);
						}
						BgL_tmpz00_3957 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3958))->
							BgL_wideningz00);
					}
					return CBOOL(BgL_tmpz00_3957);
				}
			else
				{	/* Object/class.scm 233 */
					return ((bool_t) 0);
				}
		}

	}



/* &wide-class? */
	obj_t BGl_z62widezd2classzf3z43zzobject_classz00(obj_t BgL_envz00_2285,
		obj_t BgL_classz00_2286)
	{
		{	/* Object/class.scm 232 */
			return BBOOL(BGl_widezd2classzf3z21zzobject_classz00(BgL_classz00_2286));
		}

	}



/* type-subclass? */
	BGL_EXPORTED_DEF bool_t
		BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt
		BgL_subclassz00_262, BgL_typez00_bglt BgL_classz00_263)
	{
		{	/* Object/class.scm 238 */
			{	/* Object/class.scm 240 */
				bool_t BgL_test2254z00_3969;

				{	/* Object/class.scm 240 */
					bool_t BgL_test2255z00_3970;

					{	/* Object/class.scm 240 */
						bool_t BgL_res1883z00_1603;

						BgL_res1883z00_1603 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_classz00_263), BGl_tclassz00zzobject_classz00);
						BgL_test2255z00_3970 = BgL_res1883z00_1603;
					}
					if (BgL_test2255z00_3970)
						{	/* Object/class.scm 240 */
							bool_t BgL_res1884z00_1604;

							BgL_res1884z00_1604 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_subclassz00_262), BGl_tclassz00zzobject_classz00);
							BgL_test2254z00_3969 = BgL_res1884z00_1604;
						}
					else
						{	/* Object/class.scm 240 */
							BgL_test2254z00_3969 = ((bool_t) 0);
						}
				}
				if (BgL_test2254z00_3969)
					{
						obj_t BgL_subclassz00_884;

						BgL_subclassz00_884 = ((obj_t) BgL_subclassz00_262);
					BgL_zc3z04anonymousza31294ze3z87_885:
						if ((BgL_subclassz00_884 == ((obj_t) BgL_classz00_263)))
							{	/* Object/class.scm 243 */
								return ((bool_t) 1);
							}
						else
							{	/* Object/class.scm 243 */
								if (BGl_isazf3zf3zz__objectz00(BgL_subclassz00_884,
										BGl_tclassz00zzobject_classz00))
									{	/* Object/class.scm 247 */
										bool_t BgL_test2258z00_3980;

										{	/* Object/class.scm 247 */
											obj_t BgL_arg1300z00_891;

											{
												BgL_tclassz00_bglt BgL_auxz00_3981;

												{
													obj_t BgL_auxz00_3982;

													{	/* Object/class.scm 247 */
														BgL_objectz00_bglt BgL_tmpz00_3983;

														BgL_tmpz00_3983 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_subclassz00_884));
														BgL_auxz00_3982 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3983);
													}
													BgL_auxz00_3981 =
														((BgL_tclassz00_bglt) BgL_auxz00_3982);
												}
												BgL_arg1300z00_891 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3981))->
													BgL_itszd2superzd2);
											}
											BgL_test2258z00_3980 =
												(BgL_arg1300z00_891 == BgL_subclassz00_884);
										}
										if (BgL_test2258z00_3980)
											{	/* Object/class.scm 247 */
												return ((bool_t) 0);
											}
										else
											{	/* Object/class.scm 250 */
												obj_t BgL_arg1299z00_890;

												{
													BgL_tclassz00_bglt BgL_auxz00_3990;

													{
														obj_t BgL_auxz00_3991;

														{	/* Object/class.scm 250 */
															BgL_objectz00_bglt BgL_tmpz00_3992;

															BgL_tmpz00_3992 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_subclassz00_884));
															BgL_auxz00_3991 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3992);
														}
														BgL_auxz00_3990 =
															((BgL_tclassz00_bglt) BgL_auxz00_3991);
													}
													BgL_arg1299z00_890 =
														(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3990))->
														BgL_itszd2superzd2);
												}
												{
													obj_t BgL_subclassz00_3998;

													BgL_subclassz00_3998 = BgL_arg1299z00_890;
													BgL_subclassz00_884 = BgL_subclassz00_3998;
													goto BgL_zc3z04anonymousza31294ze3z87_885;
												}
											}
									}
								else
									{	/* Object/class.scm 245 */
										return ((bool_t) 0);
									}
							}
					}
				else
					{	/* Object/class.scm 251 */
						bool_t BgL_test2259z00_4000;

						{	/* Object/class.scm 251 */
							bool_t BgL_test2260z00_4001;

							{	/* Object/class.scm 251 */
								bool_t BgL_res1886z00_1610;

								BgL_res1886z00_1610 =
									BGl_isazf3zf3zz__objectz00(
									((obj_t) BgL_classz00_263), BGl_jclassz00zzobject_classz00);
								BgL_test2260z00_4001 = BgL_res1886z00_1610;
							}
							if (BgL_test2260z00_4001)
								{	/* Object/class.scm 251 */
									bool_t BgL_res1887z00_1611;

									BgL_res1887z00_1611 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_subclassz00_262),
										BGl_jclassz00zzobject_classz00);
									BgL_test2259z00_4000 = BgL_res1887z00_1611;
								}
							else
								{	/* Object/class.scm 251 */
									BgL_test2259z00_4000 = ((bool_t) 0);
								}
						}
						if (BgL_test2259z00_4000)
							{
								obj_t BgL_subclassz00_896;

								BgL_subclassz00_896 = ((obj_t) BgL_subclassz00_262);
							BgL_zc3z04anonymousza31303ze3z87_897:
								if ((BgL_subclassz00_896 == ((obj_t) BgL_classz00_263)))
									{	/* Object/class.scm 254 */
										return ((bool_t) 1);
									}
								else
									{	/* Object/class.scm 254 */
										if (BGl_isazf3zf3zz__objectz00(BgL_subclassz00_896,
												BGl_jclassz00zzobject_classz00))
											{	/* Object/class.scm 258 */
												bool_t BgL_test2263z00_4011;

												{	/* Object/class.scm 258 */
													obj_t BgL_arg1309z00_903;

													{
														BgL_jclassz00_bglt BgL_auxz00_4012;

														{
															obj_t BgL_auxz00_4013;

															{	/* Object/class.scm 258 */
																BgL_objectz00_bglt BgL_tmpz00_4014;

																BgL_tmpz00_4014 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_subclassz00_896));
																BgL_auxz00_4013 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4014);
															}
															BgL_auxz00_4012 =
																((BgL_jclassz00_bglt) BgL_auxz00_4013);
														}
														BgL_arg1309z00_903 =
															(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4012))->
															BgL_itszd2superzd2);
													}
													BgL_test2263z00_4011 =
														(BgL_arg1309z00_903 == BgL_subclassz00_896);
												}
												if (BgL_test2263z00_4011)
													{	/* Object/class.scm 258 */
														return ((bool_t) 0);
													}
												else
													{	/* Object/class.scm 261 */
														obj_t BgL_arg1308z00_902;

														{
															BgL_jclassz00_bglt BgL_auxz00_4021;

															{
																obj_t BgL_auxz00_4022;

																{	/* Object/class.scm 261 */
																	BgL_objectz00_bglt BgL_tmpz00_4023;

																	BgL_tmpz00_4023 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_subclassz00_896));
																	BgL_auxz00_4022 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4023);
																}
																BgL_auxz00_4021 =
																	((BgL_jclassz00_bglt) BgL_auxz00_4022);
															}
															BgL_arg1308z00_902 =
																(((BgL_jclassz00_bglt)
																	COBJECT(BgL_auxz00_4021))->
																BgL_itszd2superzd2);
														}
														{
															obj_t BgL_subclassz00_4029;

															BgL_subclassz00_4029 = BgL_arg1308z00_902;
															BgL_subclassz00_896 = BgL_subclassz00_4029;
															goto BgL_zc3z04anonymousza31303ze3z87_897;
														}
													}
											}
										else
											{	/* Object/class.scm 256 */
												return ((bool_t) 0);
											}
									}
							}
						else
							{	/* Object/class.scm 251 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* &type-subclass? */
	obj_t BGl_z62typezd2subclasszf3z43zzobject_classz00(obj_t BgL_envz00_2287,
		obj_t BgL_subclassz00_2288, obj_t BgL_classz00_2289)
	{
		{	/* Object/class.scm 238 */
			return
				BBOOL(BGl_typezd2subclasszf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_subclassz00_2288),
					((BgL_typez00_bglt) BgL_classz00_2289)));
		}

	}



/* find-class-constructor */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2classzd2constructorz00zzobject_classz00(BgL_typez00_bglt
		BgL_classz00_264)
	{
		{	/* Object/class.scm 268 */
			{
				obj_t BgL_classz00_908;

				BgL_classz00_908 = ((obj_t) BgL_classz00_264);
			BgL_zc3z04anonymousza31310ze3z87_909:
				if (BGl_isazf3zf3zz__objectz00(BgL_classz00_908,
						BGl_tclassz00zzobject_classz00))
					{	/* Object/class.scm 273 */
						bool_t BgL_test2265z00_4037;

						{	/* Object/class.scm 273 */
							obj_t BgL_arg1316z00_916;

							{
								BgL_tclassz00_bglt BgL_auxz00_4038;

								{
									obj_t BgL_auxz00_4039;

									{	/* Object/class.scm 273 */
										BgL_objectz00_bglt BgL_tmpz00_4040;

										BgL_tmpz00_4040 =
											((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_classz00_908));
										BgL_auxz00_4039 = BGL_OBJECT_WIDENING(BgL_tmpz00_4040);
									}
									BgL_auxz00_4038 = ((BgL_tclassz00_bglt) BgL_auxz00_4039);
								}
								BgL_arg1316z00_916 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4038))->
									BgL_itszd2superzd2);
							}
							BgL_test2265z00_4037 = (BgL_classz00_908 == BgL_arg1316z00_916);
						}
						if (BgL_test2265z00_4037)
							{	/* Object/class.scm 273 */
								return BFALSE;
							}
						else
							{	/* Object/class.scm 274 */
								bool_t BgL_test2266z00_4047;

								{	/* Object/class.scm 274 */
									obj_t BgL_tmpz00_4048;

									{
										BgL_tclassz00_bglt BgL_auxz00_4049;

										{
											obj_t BgL_auxz00_4050;

											{	/* Object/class.scm 274 */
												BgL_objectz00_bglt BgL_tmpz00_4051;

												BgL_tmpz00_4051 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_classz00_908));
												BgL_auxz00_4050 = BGL_OBJECT_WIDENING(BgL_tmpz00_4051);
											}
											BgL_auxz00_4049 = ((BgL_tclassz00_bglt) BgL_auxz00_4050);
										}
										BgL_tmpz00_4048 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4049))->
											BgL_constructorz00);
									}
									BgL_test2266z00_4047 = CBOOL(BgL_tmpz00_4048);
								}
								if (BgL_test2266z00_4047)
									{
										BgL_tclassz00_bglt BgL_auxz00_4058;

										{
											obj_t BgL_auxz00_4059;

											{	/* Object/class.scm 274 */
												BgL_objectz00_bglt BgL_tmpz00_4060;

												BgL_tmpz00_4060 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_classz00_908));
												BgL_auxz00_4059 = BGL_OBJECT_WIDENING(BgL_tmpz00_4060);
											}
											BgL_auxz00_4058 = ((BgL_tclassz00_bglt) BgL_auxz00_4059);
										}
										return
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4058))->
											BgL_constructorz00);
									}
								else
									{	/* Object/class.scm 275 */
										obj_t BgL_arg1315z00_915;

										{
											BgL_tclassz00_bglt BgL_auxz00_4066;

											{
												obj_t BgL_auxz00_4067;

												{	/* Object/class.scm 275 */
													BgL_objectz00_bglt BgL_tmpz00_4068;

													BgL_tmpz00_4068 =
														((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_classz00_908));
													BgL_auxz00_4067 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4068);
												}
												BgL_auxz00_4066 =
													((BgL_tclassz00_bglt) BgL_auxz00_4067);
											}
											BgL_arg1315z00_915 =
												(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4066))->
												BgL_itszd2superzd2);
										}
										{
											obj_t BgL_classz00_4074;

											BgL_classz00_4074 = BgL_arg1315z00_915;
											BgL_classz00_908 = BgL_classz00_4074;
											goto BgL_zc3z04anonymousza31310ze3z87_909;
										}
									}
							}
					}
				else
					{	/* Object/class.scm 270 */
						return BFALSE;
					}
			}
		}

	}



/* &find-class-constructor */
	obj_t BGl_z62findzd2classzd2constructorz62zzobject_classz00(obj_t
		BgL_envz00_2290, obj_t BgL_classz00_2291)
	{
		{	/* Object/class.scm 268 */
			return
				BGl_findzd2classzd2constructorz00zzobject_classz00(
				((BgL_typez00_bglt) BgL_classz00_2291));
		}

	}



/* find-common-super-class */
	BGL_EXPORTED_DEF obj_t
		BGl_findzd2commonzd2superzd2classzd2zzobject_classz00(BgL_typez00_bglt
		BgL_c1z00_265, BgL_typez00_bglt BgL_c2z00_266)
	{
		{	/* Object/class.scm 280 */
			if (BGl_typezd2subclasszf3z21zzobject_classz00(
					((BgL_typez00_bglt) BgL_c1z00_265),
					((BgL_typez00_bglt) BgL_c2z00_266)))
				{	/* Object/class.scm 287 */
					return ((obj_t) BgL_c2z00_266);
				}
			else
				{	/* Object/class.scm 287 */
					if (BGl_typezd2subclasszf3z21zzobject_classz00(
							((BgL_typez00_bglt) BgL_c2z00_266),
							((BgL_typez00_bglt) BgL_c1z00_265)))
						{	/* Object/class.scm 289 */
							return ((obj_t) BgL_c1z00_265);
						}
					else
						{	/* Object/class.scm 292 */
							obj_t BgL_l1z00_921;
							obj_t BgL_l2z00_922;

							BgL_l1z00_921 =
								BGl_tclasszd2superza2ze70z97zzobject_classz00(
								((obj_t) BgL_c1z00_265));
							BgL_l2z00_922 =
								BGl_tclasszd2superza2ze70z97zzobject_classz00(
								((obj_t) BgL_c2z00_266));
							{
								obj_t BgL_lz00_924;

								BgL_lz00_924 = BgL_l1z00_921;
							BgL_zc3z04anonymousza31319ze3z87_925:
								if (NULLP(BgL_lz00_924))
									{	/* Object/class.scm 296 */
										return BFALSE;
									}
								else
									{	/* Object/class.scm 296 */
										if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR(
														((obj_t) BgL_lz00_924)), BgL_l2z00_922)))
											{	/* Object/class.scm 298 */
												return CAR(((obj_t) BgL_lz00_924));
											}
										else
											{
												obj_t BgL_lz00_4101;

												BgL_lz00_4101 = CDR(((obj_t) BgL_lz00_924));
												BgL_lz00_924 = BgL_lz00_4101;
												goto BgL_zc3z04anonymousza31319ze3z87_925;
											}
									}
							}
						}
				}
		}

	}



/* tclass-super*~0 */
	obj_t BGl_tclasszd2superza2ze70z97zzobject_classz00(obj_t BgL_cz00_932)
	{
		{	/* Object/class.scm 285 */
			{	/* Object/class.scm 283 */
				bool_t BgL_test2271z00_4104;

				{	/* Object/class.scm 283 */
					bool_t BgL_test2272z00_4105;

					{	/* Object/class.scm 283 */
						obj_t BgL_tmpz00_4106;

						{
							BgL_tclassz00_bglt BgL_auxz00_4107;

							{
								obj_t BgL_auxz00_4108;

								{	/* Object/class.scm 283 */
									BgL_objectz00_bglt BgL_tmpz00_4109;

									BgL_tmpz00_4109 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_932));
									BgL_auxz00_4108 = BGL_OBJECT_WIDENING(BgL_tmpz00_4109);
								}
								BgL_auxz00_4107 = ((BgL_tclassz00_bglt) BgL_auxz00_4108);
							}
							BgL_tmpz00_4106 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4107))->
								BgL_itszd2superzd2);
						}
						BgL_test2272z00_4105 = CBOOL(BgL_tmpz00_4106);
					}
					if (BgL_test2272z00_4105)
						{	/* Object/class.scm 283 */
							obj_t BgL_arg1334z00_941;

							{
								BgL_tclassz00_bglt BgL_auxz00_4116;

								{
									obj_t BgL_auxz00_4117;

									{	/* Object/class.scm 283 */
										BgL_objectz00_bglt BgL_tmpz00_4118;

										BgL_tmpz00_4118 =
											((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_932));
										BgL_auxz00_4117 = BGL_OBJECT_WIDENING(BgL_tmpz00_4118);
									}
									BgL_auxz00_4116 = ((BgL_tclassz00_bglt) BgL_auxz00_4117);
								}
								BgL_arg1334z00_941 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4116))->
									BgL_itszd2superzd2);
							}
							BgL_test2271z00_4104 = (BgL_arg1334z00_941 == BgL_cz00_932);
						}
					else
						{	/* Object/class.scm 283 */
							BgL_test2271z00_4104 = ((bool_t) 1);
						}
				}
				if (BgL_test2271z00_4104)
					{	/* Object/class.scm 283 */
						return BNIL;
					}
				else
					{	/* Object/class.scm 285 */
						obj_t BgL_arg1330z00_938;

						{	/* Object/class.scm 285 */
							obj_t BgL_arg1331z00_939;

							{
								BgL_tclassz00_bglt BgL_auxz00_4125;

								{
									obj_t BgL_auxz00_4126;

									{	/* Object/class.scm 285 */
										BgL_objectz00_bglt BgL_tmpz00_4127;

										BgL_tmpz00_4127 =
											((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_932));
										BgL_auxz00_4126 = BGL_OBJECT_WIDENING(BgL_tmpz00_4127);
									}
									BgL_auxz00_4125 = ((BgL_tclassz00_bglt) BgL_auxz00_4126);
								}
								BgL_arg1331z00_939 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4125))->
									BgL_itszd2superzd2);
							}
							BgL_arg1330z00_938 =
								BGl_tclasszd2superza2ze70z97zzobject_classz00
								(BgL_arg1331z00_939);
						}
						return MAKE_YOUNG_PAIR(BgL_cz00_932, BgL_arg1330z00_938);
					}
			}
		}

	}



/* &find-common-super-class */
	obj_t BGl_z62findzd2commonzd2superzd2classzb0zzobject_classz00(obj_t
		BgL_envz00_2292, obj_t BgL_c1z00_2293, obj_t BgL_c2z00_2294)
	{
		{	/* Object/class.scm 280 */
			return
				BGl_findzd2commonzd2superzd2classzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_c1z00_2293),
				((BgL_typez00_bglt) BgL_c2z00_2294));
		}

	}



/* class-make */
	BGL_EXPORTED_DEF obj_t BGl_classzd2makezd2zzobject_classz00(BgL_typez00_bglt
		BgL_tz00_267)
	{
		{	/* Object/class.scm 308 */
			{	/* Object/class.scm 309 */
				bool_t BgL_test2273z00_4138;

				{
					BgL_tclassz00_bglt BgL_auxz00_4139;

					{
						obj_t BgL_auxz00_4140;

						{	/* Object/class.scm 309 */
							BgL_objectz00_bglt BgL_tmpz00_4141;

							BgL_tmpz00_4141 = ((BgL_objectz00_bglt) BgL_tz00_267);
							BgL_auxz00_4140 = BGL_OBJECT_WIDENING(BgL_tmpz00_4141);
						}
						BgL_auxz00_4139 = ((BgL_tclassz00_bglt) BgL_auxz00_4140);
					}
					BgL_test2273z00_4138 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4139))->
						BgL_abstractzf3zf3);
				}
				if (BgL_test2273z00_4138)
					{	/* Object/class.scm 309 */
						return BFALSE;
					}
				else
					{	/* Object/class.scm 311 */
						obj_t BgL_arg1337z00_944;

						{	/* Object/class.scm 311 */
							obj_t BgL_arg1338z00_945;
							obj_t BgL_arg1339z00_946;

							{	/* Object/class.scm 311 */
								obj_t BgL_res1891z00_1633;

								{	/* Object/class.scm 311 */
									obj_t BgL_symbolz00_1631;

									BgL_symbolz00_1631 = CNST_TABLE_REF(((long) 3));
									{	/* Object/class.scm 311 */
										obj_t BgL_arg1466z00_1632;

										BgL_arg1466z00_1632 = SYMBOL_TO_STRING(BgL_symbolz00_1631);
										BgL_res1891z00_1633 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1632);
								}}
								BgL_arg1338z00_945 = BgL_res1891z00_1633;
							}
							{	/* Object/class.scm 311 */
								obj_t BgL_arg1340z00_947;

								BgL_arg1340z00_947 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_tz00_267)))->BgL_idz00);
								{	/* Object/class.scm 311 */
									obj_t BgL_res1892z00_1637;

									{	/* Object/class.scm 311 */
										obj_t BgL_arg1466z00_1636;

										BgL_arg1466z00_1636 = SYMBOL_TO_STRING(BgL_arg1340z00_947);
										BgL_res1892z00_1637 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1636);
									}
									BgL_arg1339z00_946 = BgL_res1892z00_1637;
							}}
							BgL_arg1337z00_944 =
								string_append(BgL_arg1338z00_945, BgL_arg1339z00_946);
						}
						return bstring_to_symbol(BgL_arg1337z00_944);
					}
			}
		}

	}



/* &class-make */
	obj_t BGl_z62classzd2makezb0zzobject_classz00(obj_t BgL_envz00_2295,
		obj_t BgL_tz00_2296)
	{
		{	/* Object/class.scm 308 */
			return
				BGl_classzd2makezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_tz00_2296));
		}

	}



/* class-fill */
	BGL_EXPORTED_DEF obj_t BGl_classzd2fillzd2zzobject_classz00(BgL_typez00_bglt
		BgL_tz00_268)
	{
		{	/* Object/class.scm 318 */
			{	/* Object/class.scm 319 */
				bool_t BgL_test2274z00_4157;

				{
					BgL_tclassz00_bglt BgL_auxz00_4158;

					{
						obj_t BgL_auxz00_4159;

						{	/* Object/class.scm 319 */
							BgL_objectz00_bglt BgL_tmpz00_4160;

							BgL_tmpz00_4160 = ((BgL_objectz00_bglt) BgL_tz00_268);
							BgL_auxz00_4159 = BGL_OBJECT_WIDENING(BgL_tmpz00_4160);
						}
						BgL_auxz00_4158 = ((BgL_tclassz00_bglt) BgL_auxz00_4159);
					}
					BgL_test2274z00_4157 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4158))->
						BgL_abstractzf3zf3);
				}
				if (BgL_test2274z00_4157)
					{	/* Object/class.scm 319 */
						return BFALSE;
					}
				else
					{	/* Object/class.scm 321 */
						obj_t BgL_arg1344z00_949;

						BgL_arg1344z00_949 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_tz00_268)))->BgL_idz00);
						{	/* Object/class.scm 321 */
							obj_t BgL_list1345z00_950;

							{	/* Object/class.scm 321 */
								obj_t BgL_arg1346z00_951;

								{	/* Object/class.scm 321 */
									obj_t BgL_arg1347z00_952;

									BgL_arg1347z00_952 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)), BNIL);
									BgL_arg1346z00_951 =
										MAKE_YOUNG_PAIR(BgL_arg1344z00_949, BgL_arg1347z00_952);
								}
								BgL_list1345z00_950 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
									BgL_arg1346z00_951);
							}
							return
								BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
								(BgL_list1345z00_950);
						}
					}
			}
		}

	}



/* &class-fill */
	obj_t BGl_z62classzd2fillzb0zzobject_classz00(obj_t BgL_envz00_2297,
		obj_t BgL_tz00_2298)
	{
		{	/* Object/class.scm 318 */
			return
				BGl_classzd2fillzd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_tz00_2298));
		}

	}



/* class-predicate */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2predicatezd2zzobject_classz00(BgL_typez00_bglt BgL_tz00_269)
	{
		{	/* Object/class.scm 328 */
			{	/* Object/class.scm 329 */
				obj_t BgL_arg1348z00_953;

				{	/* Object/class.scm 329 */
					obj_t BgL_arg1351z00_954;
					obj_t BgL_arg1352z00_955;

					{	/* Object/class.scm 329 */
						obj_t BgL_arg1357z00_956;

						BgL_arg1357z00_956 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_tz00_269)))->BgL_idz00);
						{	/* Object/class.scm 329 */
							obj_t BgL_res1894z00_1646;

							{	/* Object/class.scm 329 */
								obj_t BgL_arg1466z00_1645;

								BgL_arg1466z00_1645 = SYMBOL_TO_STRING(BgL_arg1357z00_956);
								BgL_res1894z00_1646 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1645);
							}
							BgL_arg1351z00_954 = BgL_res1894z00_1646;
						}
					}
					{	/* Object/class.scm 329 */
						obj_t BgL_res1895z00_1649;

						{	/* Object/class.scm 329 */
							obj_t BgL_symbolz00_1647;

							BgL_symbolz00_1647 = CNST_TABLE_REF(((long) 6));
							{	/* Object/class.scm 329 */
								obj_t BgL_arg1466z00_1648;

								BgL_arg1466z00_1648 = SYMBOL_TO_STRING(BgL_symbolz00_1647);
								BgL_res1895z00_1649 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1648);
						}}
						BgL_arg1352z00_955 = BgL_res1895z00_1649;
					}
					BgL_arg1348z00_953 =
						string_append(BgL_arg1351z00_954, BgL_arg1352z00_955);
				}
				return bstring_to_symbol(BgL_arg1348z00_953);
			}
		}

	}



/* &class-predicate */
	obj_t BGl_z62classzd2predicatezb0zzobject_classz00(obj_t BgL_envz00_2299,
		obj_t BgL_tz00_2300)
	{
		{	/* Object/class.scm 328 */
			return
				BGl_classzd2predicatezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_tz00_2300));
		}

	}



/* class-allocate */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2allocatezd2zzobject_classz00(BgL_typez00_bglt BgL_tz00_270)
	{
		{	/* Object/class.scm 336 */
			{	/* Object/class.scm 337 */
				obj_t BgL_arg1360z00_957;

				{	/* Object/class.scm 337 */
					obj_t BgL_arg1361z00_958;
					obj_t BgL_arg1363z00_959;

					{	/* Object/class.scm 337 */
						obj_t BgL_res1897z00_1654;

						{	/* Object/class.scm 337 */
							obj_t BgL_symbolz00_1652;

							BgL_symbolz00_1652 = CNST_TABLE_REF(((long) 7));
							{	/* Object/class.scm 337 */
								obj_t BgL_arg1466z00_1653;

								BgL_arg1466z00_1653 = SYMBOL_TO_STRING(BgL_symbolz00_1652);
								BgL_res1897z00_1654 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1653);
						}}
						BgL_arg1361z00_958 = BgL_res1897z00_1654;
					}
					{	/* Object/class.scm 337 */
						obj_t BgL_arg1364z00_960;

						BgL_arg1364z00_960 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_tz00_270)))->BgL_idz00);
						{	/* Object/class.scm 337 */
							obj_t BgL_res1898z00_1658;

							{	/* Object/class.scm 337 */
								obj_t BgL_arg1466z00_1657;

								BgL_arg1466z00_1657 = SYMBOL_TO_STRING(BgL_arg1364z00_960);
								BgL_res1898z00_1658 =
									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
									(BgL_arg1466z00_1657);
							}
							BgL_arg1363z00_959 = BgL_res1898z00_1658;
					}}
					BgL_arg1360z00_957 =
						string_append(BgL_arg1361z00_958, BgL_arg1363z00_959);
				}
				return bstring_to_symbol(BgL_arg1360z00_957);
			}
		}

	}



/* &class-allocate */
	obj_t BGl_z62classzd2allocatezb0zzobject_classz00(obj_t BgL_envz00_2301,
		obj_t BgL_tz00_2302)
	{
		{	/* Object/class.scm 336 */
			return
				BGl_classzd2allocatezd2zzobject_classz00(
				((BgL_typez00_bglt) BgL_tz00_2302));
		}

	}



/* check-class-declaration? */
	BGL_EXPORTED_DEF bool_t
		BGl_checkzd2classzd2declarationzf3zf3zzobject_classz00(BgL_typez00_bglt
		BgL_classz00_272, obj_t BgL_srczd2defzd2_273)
	{
		{	/* Object/class.scm 356 */
			{	/* Object/class.scm 357 */
				bool_t BgL_test2275z00_4197;

				{	/* Object/class.scm 357 */
					bool_t BgL_res1901z00_1666;

					{	/* Object/class.scm 233 */
						obj_t BgL_tmpz00_4198;

						{
							BgL_tclassz00_bglt BgL_auxz00_4199;

							{
								obj_t BgL_auxz00_4200;

								{	/* Object/class.scm 233 */
									BgL_objectz00_bglt BgL_tmpz00_4201;

									BgL_tmpz00_4201 = ((BgL_objectz00_bglt) BgL_classz00_272);
									BgL_auxz00_4200 = BGL_OBJECT_WIDENING(BgL_tmpz00_4201);
								}
								BgL_auxz00_4199 = ((BgL_tclassz00_bglt) BgL_auxz00_4200);
							}
							BgL_tmpz00_4198 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4199))->
								BgL_wideningz00);
						}
						BgL_res1901z00_1666 = CBOOL(BgL_tmpz00_4198);
					}
					BgL_test2275z00_4197 = BgL_res1901z00_1666;
				}
				if (BgL_test2275z00_4197)
					{	/* Object/class.scm 357 */
						return
							CBOOL
							(BGl_checkzd2widezd2classzd2declarationzf3z21zzobject_classz00
							(BgL_classz00_272, BgL_srczd2defzd2_273));
					}
				else
					{	/* Object/class.scm 357 */
						return
							BGl_checkzd2plainzd2classzd2declarationzf3z21zzobject_classz00
							(BgL_classz00_272, BgL_srczd2defzd2_273);
					}
			}
		}

	}



/* &check-class-declaration? */
	obj_t BGl_z62checkzd2classzd2declarationzf3z91zzobject_classz00(obj_t
		BgL_envz00_2303, obj_t BgL_classz00_2304, obj_t BgL_srczd2defzd2_2305)
	{
		{	/* Object/class.scm 356 */
			return
				BBOOL(BGl_checkzd2classzd2declarationzf3zf3zzobject_classz00(
					((BgL_typez00_bglt) BgL_classz00_2304), BgL_srczd2defzd2_2305));
		}

	}



/* check-plain-class-declaration? */
	bool_t
		BGl_checkzd2plainzd2classzd2declarationzf3z21zzobject_classz00
		(BgL_typez00_bglt BgL_classz00_274, obj_t BgL_srczd2defzd2_275)
	{
		{	/* Object/class.scm 368 */
			{	/* Object/class.scm 369 */
				obj_t BgL_superz00_962;
				obj_t BgL_classzd2idzd2_963;

				{
					BgL_tclassz00_bglt BgL_auxz00_4213;

					{
						obj_t BgL_auxz00_4214;

						{	/* Object/class.scm 369 */
							BgL_objectz00_bglt BgL_tmpz00_4215;

							BgL_tmpz00_4215 = ((BgL_objectz00_bglt) BgL_classz00_274);
							BgL_auxz00_4214 = BGL_OBJECT_WIDENING(BgL_tmpz00_4215);
						}
						BgL_auxz00_4213 = ((BgL_tclassz00_bglt) BgL_auxz00_4214);
					}
					BgL_superz00_962 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4213))->
						BgL_itszd2superzd2);
				}
				BgL_classzd2idzd2_963 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_classz00_274)))->BgL_idz00);
				{	/* Object/class.scm 374 */
					bool_t BgL_test2276z00_4222;

					if (BGl_isazf3zf3zz__objectz00(BgL_superz00_962,
							BGl_typez00zztype_typez00))
						{	/* Object/class.scm 374 */
							if (BGl_isazf3zf3zz__objectz00(BgL_superz00_962,
									BGl_tclassz00zzobject_classz00))
								{	/* Object/class.scm 374 */
									BgL_test2276z00_4222 = ((bool_t) 0);
								}
							else
								{	/* Object/class.scm 374 */
									BgL_test2276z00_4222 = ((bool_t) 1);
								}
						}
					else
						{	/* Object/class.scm 374 */
							BgL_test2276z00_4222 = ((bool_t) 0);
						}
					if (BgL_test2276z00_4222)
						{	/* Object/class.scm 374 */
							{	/* Object/class.scm 375 */
								obj_t BgL_arg1381z00_967;
								obj_t BgL_arg1382z00_968;

								{	/* Object/class.scm 375 */
									obj_t BgL_arg1384z00_970;

									BgL_arg1384z00_970 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_superz00_962)))->BgL_idz00);
									{	/* Object/class.scm 375 */
										obj_t BgL_res1904z00_1675;

										{	/* Object/class.scm 375 */
											obj_t BgL_arg1466z00_1674;

											BgL_arg1466z00_1674 =
												SYMBOL_TO_STRING(BgL_arg1384z00_970);
											BgL_res1904z00_1675 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_1674);
										}
										BgL_arg1381z00_967 = BgL_res1904z00_1675;
									}
								}
								{	/* Object/class.scm 376 */
									obj_t BgL_list1385z00_971;

									BgL_list1385z00_971 =
										MAKE_YOUNG_PAIR(BgL_classzd2idzd2_963, BNIL);
									BgL_arg1382z00_968 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string1956z00zzobject_classz00, BgL_list1385z00_971);
								}
								{	/* Object/class.scm 375 */
									obj_t BgL_list1383z00_969;

									BgL_list1383z00_969 =
										MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00, BNIL);
									BGl_userzd2errorzd2zztools_errorz00(BgL_arg1381z00_967,
										BgL_arg1382z00_968, BgL_srczd2defzd2_275,
										BgL_list1383z00_969);
								}
							}
							return ((bool_t) 0);
						}
					else
						{	/* Object/class.scm 380 */
							bool_t BgL_test2279z00_4235;

							{	/* Object/class.scm 380 */
								bool_t BgL_res1906z00_1680;

								{	/* Object/class.scm 233 */
									obj_t BgL_tmpz00_4236;

									{
										BgL_tclassz00_bglt BgL_auxz00_4237;

										{
											obj_t BgL_auxz00_4238;

											{	/* Object/class.scm 233 */
												BgL_objectz00_bglt BgL_tmpz00_4239;

												BgL_tmpz00_4239 =
													((BgL_objectz00_bglt) BgL_classz00_274);
												BgL_auxz00_4238 = BGL_OBJECT_WIDENING(BgL_tmpz00_4239);
											}
											BgL_auxz00_4237 = ((BgL_tclassz00_bglt) BgL_auxz00_4238);
										}
										BgL_tmpz00_4236 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4237))->
											BgL_wideningz00);
									}
									BgL_res1906z00_1680 = CBOOL(BgL_tmpz00_4236);
								}
								BgL_test2279z00_4235 = BgL_res1906z00_1680;
							}
							if (BgL_test2279z00_4235)
								{	/* Object/class.scm 380 */
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1957z00zzobject_classz00,
										BGl_string1958z00zzobject_classz00, BgL_srczd2defzd2_275);
									return ((bool_t) 0);
								}
							else
								{	/* Object/class.scm 387 */
									bool_t BgL_test2280z00_4246;

									{	/* Object/class.scm 387 */
										bool_t BgL_res1908z00_1685;

										if (BGl_isazf3zf3zz__objectz00(BgL_superz00_962,
												BGl_tclassz00zzobject_classz00))
											{	/* Object/class.scm 233 */
												obj_t BgL_tmpz00_4249;

												{
													BgL_tclassz00_bglt BgL_auxz00_4250;

													{
														obj_t BgL_auxz00_4251;

														{	/* Object/class.scm 233 */
															BgL_objectz00_bglt BgL_tmpz00_4252;

															BgL_tmpz00_4252 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_superz00_962));
															BgL_auxz00_4251 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_4252);
														}
														BgL_auxz00_4250 =
															((BgL_tclassz00_bglt) BgL_auxz00_4251);
													}
													BgL_tmpz00_4249 =
														(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4250))->
														BgL_wideningz00);
												}
												BgL_res1908z00_1685 = CBOOL(BgL_tmpz00_4249);
											}
										else
											{	/* Object/class.scm 233 */
												BgL_res1908z00_1685 = ((bool_t) 0);
											}
										BgL_test2280z00_4246 = BgL_res1908z00_1685;
									}
									if (BgL_test2280z00_4246)
										{	/* Object/class.scm 387 */
											{	/* Object/class.scm 389 */
												obj_t BgL_arg1394z00_974;
												obj_t BgL_arg1396z00_975;

												{	/* Object/class.scm 389 */
													obj_t BgL_arg1417z00_977;

													BgL_arg1417z00_977 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt) BgL_superz00_962)))->
														BgL_idz00);
													{	/* Object/class.scm 389 */
														obj_t BgL_res1909z00_1689;

														{	/* Object/class.scm 389 */
															obj_t BgL_arg1466z00_1688;

															BgL_arg1466z00_1688 =
																SYMBOL_TO_STRING(BgL_arg1417z00_977);
															BgL_res1909z00_1689 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1466z00_1688);
														}
														BgL_arg1394z00_974 = BgL_res1909z00_1689;
													}
												}
												{	/* Object/class.scm 390 */
													obj_t BgL_list1418z00_978;

													BgL_list1418z00_978 =
														MAKE_YOUNG_PAIR(BgL_classzd2idzd2_963, BNIL);
													BgL_arg1396z00_975 =
														BGl_formatz00zz__r4_output_6_10_3z00
														(BGl_string1959z00zzobject_classz00,
														BgL_list1418z00_978);
												}
												{	/* Object/class.scm 389 */
													obj_t BgL_list1397z00_976;

													BgL_list1397z00_976 =
														MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00, BNIL);
													BGl_userzd2errorzd2zztools_errorz00
														(BgL_arg1394z00_974, BgL_arg1396z00_975,
														BgL_srczd2defzd2_275, BgL_list1397z00_976);
												}
											}
											return ((bool_t) 0);
										}
									else
										{	/* Object/class.scm 394 */
											bool_t BgL_test2282z00_4267;

											{	/* Object/class.scm 394 */
												bool_t BgL_res1911z00_1694;

												if (BGl_isazf3zf3zz__objectz00(BgL_superz00_962,
														BGl_tclassz00zzobject_classz00))
													{
														BgL_tclassz00_bglt BgL_auxz00_4270;

														{
															obj_t BgL_auxz00_4271;

															{	/* Object/class.scm 225 */
																BgL_objectz00_bglt BgL_tmpz00_4272;

																BgL_tmpz00_4272 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_superz00_962));
																BgL_auxz00_4271 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4272);
															}
															BgL_auxz00_4270 =
																((BgL_tclassz00_bglt) BgL_auxz00_4271);
														}
														BgL_res1911z00_1694 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4270))->
															BgL_finalzf3zf3);
													}
												else
													{	/* Object/class.scm 225 */
														BgL_res1911z00_1694 = ((bool_t) 0);
													}
												BgL_test2282z00_4267 = BgL_res1911z00_1694;
											}
											if (BgL_test2282z00_4267)
												{	/* Object/class.scm 394 */
													{	/* Object/class.scm 396 */
														obj_t BgL_arg1421z00_980;

														{	/* Object/class.scm 396 */
															obj_t BgL_arg1441z00_982;

															BgL_arg1441z00_982 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt) BgL_superz00_962)))->
																BgL_idz00);
															{	/* Object/class.scm 396 */
																obj_t BgL_res1912z00_1698;

																{	/* Object/class.scm 396 */
																	obj_t BgL_arg1466z00_1697;

																	BgL_arg1466z00_1697 =
																		SYMBOL_TO_STRING(BgL_arg1441z00_982);
																	BgL_res1912z00_1698 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_1697);
																}
																BgL_arg1421z00_980 = BgL_res1912z00_1698;
															}
														}
														{	/* Object/class.scm 396 */
															obj_t BgL_list1422z00_981;

															BgL_list1422z00_981 =
																MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00,
																BNIL);
															BGl_userzd2errorzd2zztools_errorz00
																(BgL_arg1421z00_980,
																BGl_string1960z00zzobject_classz00,
																BgL_srczd2defzd2_275, BgL_list1422z00_981);
														}
													}
													return ((bool_t) 0);
												}
											else
												{	/* Object/class.scm 394 */
													return ((bool_t) 1);
												}
										}
								}
						}
				}
			}
		}

	}



/* check-wide-class-declaration? */
	obj_t
		BGl_checkzd2widezd2classzd2declarationzf3z21zzobject_classz00
		(BgL_typez00_bglt BgL_classz00_276, obj_t BgL_srczd2defzd2_277)
	{
		{	/* Object/class.scm 411 */
			{	/* Object/class.scm 412 */
				obj_t BgL_superz00_985;

				{
					BgL_tclassz00_bglt BgL_auxz00_4284;

					{
						obj_t BgL_auxz00_4285;

						{	/* Object/class.scm 412 */
							BgL_objectz00_bglt BgL_tmpz00_4286;

							BgL_tmpz00_4286 = ((BgL_objectz00_bglt) BgL_classz00_276);
							BgL_auxz00_4285 = BGL_OBJECT_WIDENING(BgL_tmpz00_4286);
						}
						BgL_auxz00_4284 = ((BgL_tclassz00_bglt) BgL_auxz00_4285);
					}
					BgL_superz00_985 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4284))->
						BgL_itszd2superzd2);
				}
				{	/* Object/class.scm 412 */
					obj_t BgL_classzd2idzd2_986;

					BgL_classzd2idzd2_986 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_classz00_276)))->BgL_idz00);
					{	/* Object/class.scm 413 */

						{	/* Object/class.scm 417 */
							bool_t BgL_test2284z00_4293;

							if (BGl_isazf3zf3zz__objectz00(BgL_superz00_985,
									BGl_typez00zztype_typez00))
								{	/* Object/class.scm 417 */
									if (BGl_isazf3zf3zz__objectz00(BgL_superz00_985,
											BGl_tclassz00zzobject_classz00))
										{	/* Object/class.scm 417 */
											BgL_test2284z00_4293 = ((bool_t) 0);
										}
									else
										{	/* Object/class.scm 417 */
											BgL_test2284z00_4293 = ((bool_t) 1);
										}
								}
							else
								{	/* Object/class.scm 417 */
									BgL_test2284z00_4293 = ((bool_t) 0);
								}
							if (BgL_test2284z00_4293)
								{	/* Object/class.scm 418 */
									obj_t BgL_arg1448z00_990;
									obj_t BgL_arg1449z00_991;

									{	/* Object/class.scm 418 */
										obj_t BgL_arg1461z00_993;

										BgL_arg1461z00_993 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_superz00_985)))->BgL_idz00);
										{	/* Object/class.scm 418 */
											obj_t BgL_res1915z00_1707;

											{	/* Object/class.scm 418 */
												obj_t BgL_arg1466z00_1706;

												BgL_arg1466z00_1706 =
													SYMBOL_TO_STRING(BgL_arg1461z00_993);
												BgL_res1915z00_1707 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_1706);
											}
											BgL_arg1448z00_990 = BgL_res1915z00_1707;
										}
									}
									{	/* Object/class.scm 419 */
										obj_t BgL_list1462z00_994;

										BgL_list1462z00_994 =
											MAKE_YOUNG_PAIR(BgL_classzd2idzd2_986, BNIL);
										BgL_arg1449z00_991 =
											BGl_formatz00zz__r4_output_6_10_3z00
											(BGl_string1956z00zzobject_classz00, BgL_list1462z00_994);
									}
									{	/* Object/class.scm 418 */
										obj_t BgL_list1450z00_992;

										BgL_list1450z00_992 =
											MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00, BNIL);
										return
											BGl_userzd2errorzd2zztools_errorz00(BgL_arg1448z00_990,
											BgL_arg1449z00_991, BgL_srczd2defzd2_277,
											BgL_list1450z00_992);
									}
								}
							else
								{	/* Object/class.scm 422 */
									bool_t BgL_test2287z00_4306;

									{	/* Object/class.scm 422 */
										bool_t BgL_res1917z00_1712;

										{	/* Object/class.scm 233 */
											obj_t BgL_tmpz00_4307;

											{
												BgL_tclassz00_bglt BgL_auxz00_4308;

												{
													obj_t BgL_auxz00_4309;

													{	/* Object/class.scm 233 */
														BgL_objectz00_bglt BgL_tmpz00_4310;

														BgL_tmpz00_4310 =
															((BgL_objectz00_bglt) BgL_classz00_276);
														BgL_auxz00_4309 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_4310);
													}
													BgL_auxz00_4308 =
														((BgL_tclassz00_bglt) BgL_auxz00_4309);
												}
												BgL_tmpz00_4307 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4308))->
													BgL_wideningz00);
											}
											BgL_res1917z00_1712 = CBOOL(BgL_tmpz00_4307);
										}
										BgL_test2287z00_4306 = BgL_res1917z00_1712;
									}
									if (BgL_test2287z00_4306)
										{	/* Object/class.scm 428 */
											bool_t BgL_test2288z00_4316;

											{	/* Object/class.scm 428 */
												bool_t BgL_res1919z00_1717;

												if (BGl_isazf3zf3zz__objectz00(BgL_superz00_985,
														BGl_tclassz00zzobject_classz00))
													{	/* Object/class.scm 233 */
														obj_t BgL_tmpz00_4319;

														{
															BgL_tclassz00_bglt BgL_auxz00_4320;

															{
																obj_t BgL_auxz00_4321;

																{	/* Object/class.scm 233 */
																	BgL_objectz00_bglt BgL_tmpz00_4322;

																	BgL_tmpz00_4322 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_superz00_985));
																	BgL_auxz00_4321 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_4322);
																}
																BgL_auxz00_4320 =
																	((BgL_tclassz00_bglt) BgL_auxz00_4321);
															}
															BgL_tmpz00_4319 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_4320))->BgL_wideningz00);
														}
														BgL_res1919z00_1717 = CBOOL(BgL_tmpz00_4319);
													}
												else
													{	/* Object/class.scm 233 */
														BgL_res1919z00_1717 = ((bool_t) 0);
													}
												BgL_test2288z00_4316 = BgL_res1919z00_1717;
											}
											if (BgL_test2288z00_4316)
												{	/* Object/class.scm 430 */
													obj_t BgL_arg1474z00_997;
													obj_t BgL_arg1476z00_998;

													{	/* Object/class.scm 430 */
														obj_t BgL_arg1489z00_1000;

														BgL_arg1489z00_1000 =
															(((BgL_typez00_bglt) COBJECT(
																	((BgL_typez00_bglt) BgL_superz00_985)))->
															BgL_idz00);
														{	/* Object/class.scm 430 */
															obj_t BgL_res1920z00_1721;

															{	/* Object/class.scm 430 */
																obj_t BgL_arg1466z00_1720;

																BgL_arg1466z00_1720 =
																	SYMBOL_TO_STRING(BgL_arg1489z00_1000);
																BgL_res1920z00_1721 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_1720);
															}
															BgL_arg1474z00_997 = BgL_res1920z00_1721;
														}
													}
													{	/* Object/class.scm 431 */
														obj_t BgL_list1490z00_1001;

														BgL_list1490z00_1001 =
															MAKE_YOUNG_PAIR(BgL_classzd2idzd2_986, BNIL);
														BgL_arg1476z00_998 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string1959z00zzobject_classz00,
															BgL_list1490z00_1001);
													}
													{	/* Object/class.scm 430 */
														obj_t BgL_list1477z00_999;

														BgL_list1477z00_999 =
															MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BgL_arg1474z00_997, BgL_arg1476z00_998,
															BgL_srczd2defzd2_277, BgL_list1477z00_999);
													}
												}
											else
												{	/* Object/class.scm 434 */
													bool_t BgL_test2290z00_4337;

													{	/* Object/class.scm 434 */
														bool_t BgL_res1922z00_1726;

														if (BGl_isazf3zf3zz__objectz00(BgL_superz00_985,
																BGl_tclassz00zzobject_classz00))
															{
																BgL_tclassz00_bglt BgL_auxz00_4340;

																{
																	obj_t BgL_auxz00_4341;

																	{	/* Object/class.scm 225 */
																		BgL_objectz00_bglt BgL_tmpz00_4342;

																		BgL_tmpz00_4342 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_superz00_985));
																		BgL_auxz00_4341 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_4342);
																	}
																	BgL_auxz00_4340 =
																		((BgL_tclassz00_bglt) BgL_auxz00_4341);
																}
																BgL_res1922z00_1726 =
																	(((BgL_tclassz00_bglt)
																		COBJECT(BgL_auxz00_4340))->BgL_finalzf3zf3);
															}
														else
															{	/* Object/class.scm 225 */
																BgL_res1922z00_1726 = ((bool_t) 0);
															}
														BgL_test2290z00_4337 = BgL_res1922z00_1726;
													}
													if (BgL_test2290z00_4337)
														{	/* Object/class.scm 441 */
															bool_t BgL_test2292z00_4348;

															{	/* Object/class.scm 441 */
																bool_t BgL_res1924z00_1731;

																{
																	BgL_tclassz00_bglt BgL_auxz00_4349;

																	{
																		obj_t BgL_auxz00_4350;

																		{	/* Object/class.scm 225 */
																			BgL_objectz00_bglt BgL_tmpz00_4351;

																			BgL_tmpz00_4351 =
																				((BgL_objectz00_bglt) BgL_classz00_276);
																			BgL_auxz00_4350 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_4351);
																		}
																		BgL_auxz00_4349 =
																			((BgL_tclassz00_bglt) BgL_auxz00_4350);
																	}
																	BgL_res1924z00_1731 =
																		(((BgL_tclassz00_bglt)
																			COBJECT(BgL_auxz00_4349))->
																		BgL_finalzf3zf3);
																}
																BgL_test2292z00_4348 = BgL_res1924z00_1731;
															}
															if (BgL_test2292z00_4348)
																{	/* Object/class.scm 443 */
																	obj_t BgL_list1493z00_1004;

																	BgL_list1493z00_1004 =
																		MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00,
																		BNIL);
																	return
																		BGl_userzd2errorzd2zztools_errorz00
																		(BgL_classzd2idzd2_986,
																		BGl_string1961z00zzobject_classz00,
																		BgL_srczd2defzd2_277, BgL_list1493z00_1004);
																}
															else
																{	/* Object/class.scm 441 */
																	return BTRUE;
																}
														}
													else
														{	/* Object/class.scm 436 */
															obj_t BgL_arg1495z00_1005;
															obj_t BgL_arg1497z00_1006;

															{	/* Object/class.scm 436 */
																obj_t BgL_arg1518z00_1008;

																BgL_arg1518z00_1008 =
																	(((BgL_typez00_bglt) COBJECT(
																			((BgL_typez00_bglt) BgL_superz00_985)))->
																	BgL_idz00);
																{	/* Object/class.scm 436 */
																	obj_t BgL_res1925z00_1735;

																	{	/* Object/class.scm 436 */
																		obj_t BgL_arg1466z00_1734;

																		BgL_arg1466z00_1734 =
																			SYMBOL_TO_STRING(BgL_arg1518z00_1008);
																		BgL_res1925z00_1735 =
																			BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																			(BgL_arg1466z00_1734);
																	}
																	BgL_arg1495z00_1005 = BgL_res1925z00_1735;
																}
															}
															{	/* Object/class.scm 437 */
																obj_t BgL_list1519z00_1009;

																BgL_list1519z00_1009 =
																	MAKE_YOUNG_PAIR(BgL_classzd2idzd2_986, BNIL);
																BgL_arg1497z00_1006 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string1962z00zzobject_classz00,
																	BgL_list1519z00_1009);
															}
															{	/* Object/class.scm 436 */
																obj_t BgL_list1498z00_1007;

																BgL_list1498z00_1007 =
																	MAKE_YOUNG_PAIR(BGl_typez00zztype_typez00,
																	BNIL);
																return
																	BGl_userzd2errorzd2zztools_errorz00
																	(BgL_arg1495z00_1005, BgL_arg1497z00_1006,
																	BgL_srczd2defzd2_277, BgL_list1498z00_1007);
															}
														}
												}
										}
									else
										{	/* Object/class.scm 422 */
											return
												BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string1963z00zzobject_classz00,
												BGl_string1964z00zzobject_classz00,
												BgL_srczd2defzd2_277);
										}
								}
						}
					}
				}
			}
		}

	}



/* set-class-slots! */
	BGL_EXPORTED_DEF obj_t
		BGl_setzd2classzd2slotsz12z12zzobject_classz00(BgL_typez00_bglt
		BgL_classz00_278, obj_t BgL_classzd2defzd2_279, obj_t BgL_srczd2defzd2_280)
	{
		{	/* Object/class.scm 459 */
			{	/* Object/class.scm 460 */
				obj_t BgL_superz00_1012;

				{	/* Object/class.scm 460 */
					obj_t BgL_superz00_1018;

					{
						BgL_tclassz00_bglt BgL_auxz00_4367;

						{
							obj_t BgL_auxz00_4368;

							{	/* Object/class.scm 460 */
								BgL_objectz00_bglt BgL_tmpz00_4369;

								BgL_tmpz00_4369 = ((BgL_objectz00_bglt) BgL_classz00_278);
								BgL_auxz00_4368 = BGL_OBJECT_WIDENING(BgL_tmpz00_4369);
							}
							BgL_auxz00_4367 = ((BgL_tclassz00_bglt) BgL_auxz00_4368);
						}
						BgL_superz00_1018 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4367))->
							BgL_itszd2superzd2);
					}
					if ((BgL_superz00_1018 == ((obj_t) BgL_classz00_278)))
						{	/* Object/class.scm 461 */
							BgL_superz00_1012 = BFALSE;
						}
					else
						{	/* Object/class.scm 461 */
							BgL_superz00_1012 = BgL_superz00_1018;
						}
				}
				{	/* Object/class.scm 460 */
					obj_t BgL_superzd2vnumzd2_1013;

					if (BGl_isazf3zf3zz__objectz00(BgL_superz00_1012,
							BGl_tclassz00zzobject_classz00))
						{
							BgL_tclassz00_bglt BgL_auxz00_4379;

							{
								obj_t BgL_auxz00_4380;

								{	/* Object/class.scm 465 */
									BgL_objectz00_bglt BgL_tmpz00_4381;

									BgL_tmpz00_4381 =
										((BgL_objectz00_bglt)
										((BgL_typez00_bglt) BgL_superz00_1012));
									BgL_auxz00_4380 = BGL_OBJECT_WIDENING(BgL_tmpz00_4381);
								}
								BgL_auxz00_4379 = ((BgL_tclassz00_bglt) BgL_auxz00_4380);
							}
							BgL_superzd2vnumzd2_1013 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4379))->
								BgL_virtualzd2slotszd2numberz00);
						}
					else
						{	/* Object/class.scm 464 */
							BgL_superzd2vnumzd2_1013 = BINT(((long) 0));
						}
					{	/* Object/class.scm 464 */
						obj_t BgL_slotsz00_1014;

						{	/* Object/class.scm 467 */
							obj_t BgL_pairz00_1744;

							BgL_pairz00_1744 = CDR(((obj_t) BgL_classzd2defzd2_279));
							BgL_slotsz00_1014 = CDR(BgL_pairz00_1744);
						}
						{	/* Object/class.scm 467 */

							{	/* Object/class.scm 471 */
								obj_t BgL_cslotsz00_1015;

								BgL_cslotsz00_1015 =
									BGl_makezd2classzd2slotsz00zzobject_slotsz00(BgL_classz00_278,
									BgL_slotsz00_1014, BgL_superz00_1012,
									CINT(BgL_superzd2vnumzd2_1013), BgL_srczd2defzd2_280);
								{	/* Object/class.scm 471 */
									obj_t BgL_localzd2vnumzd2_1016;

									BgL_localzd2vnumzd2_1016 =
										BGl_getzd2localzd2virtualzd2slotszd2numberz00zzobject_slotsz00
										(BgL_classz00_278, BgL_cslotsz00_1015);
									{	/* Object/class.scm 472 */

										{
											BgL_tclassz00_bglt BgL_auxz00_4394;

											{
												obj_t BgL_auxz00_4395;

												{	/* Object/class.scm 474 */
													BgL_objectz00_bglt BgL_tmpz00_4396;

													BgL_tmpz00_4396 =
														((BgL_objectz00_bglt) BgL_classz00_278);
													BgL_auxz00_4395 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4396);
												}
												BgL_auxz00_4394 =
													((BgL_tclassz00_bglt) BgL_auxz00_4395);
											}
											((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4394))->
													BgL_virtualzd2slotszd2numberz00) =
												((obj_t) BgL_localzd2vnumzd2_1016), BUNSPEC);
										}
										{
											BgL_tclassz00_bglt BgL_auxz00_4401;

											{
												obj_t BgL_auxz00_4402;

												{	/* Object/class.scm 476 */
													BgL_objectz00_bglt BgL_tmpz00_4403;

													BgL_tmpz00_4403 =
														((BgL_objectz00_bglt) BgL_classz00_278);
													BgL_auxz00_4402 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_4403);
												}
												BgL_auxz00_4401 =
													((BgL_tclassz00_bglt) BgL_auxz00_4402);
											}
											return
												((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4401))->
													BgL_slotsz00) =
												((obj_t) BgL_cslotsz00_1015), BUNSPEC);
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



/* &set-class-slots! */
	obj_t BGl_z62setzd2classzd2slotsz12z70zzobject_classz00(obj_t BgL_envz00_2306,
		obj_t BgL_classz00_2307, obj_t BgL_classzd2defzd2_2308,
		obj_t BgL_srczd2defzd2_2309)
	{
		{	/* Object/class.scm 459 */
			return
				BGl_setzd2classzd2slotsz12z12zzobject_classz00(
				((BgL_typez00_bglt) BgL_classz00_2307), BgL_classzd2defzd2_2308,
				BgL_srczd2defzd2_2309);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			{	/* Object/class.scm 34 */
				obj_t BgL_arg1552z00_1024;
				obj_t BgL_arg1553z00_1025;

				{	/* Object/class.scm 34 */
					obj_t BgL_v1222z00_1072;

					BgL_v1222z00_1072 = create_vector(((long) 11));
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1582z00_1073;

						BgL_arg1582z00_1073 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc1966z00zzobject_classz00,
							BGl_proc1965z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 0), BgL_arg1582z00_1073);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1592z00_1083;

						BgL_arg1592z00_1083 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc1969z00zzobject_classz00,
							BGl_proc1968z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1967z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 1), BgL_arg1592z00_1083);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1604z00_1096;

						BgL_arg1604z00_1096 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc1971z00zzobject_classz00,
							BGl_proc1970z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, BGl_globalz00zzast_varz00);
						VECTOR_SET(BgL_v1222z00_1072, ((long) 2), BgL_arg1604z00_1096);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1611z00_1106;

						BgL_arg1611z00_1106 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									1)), BGl_proc1974z00zzobject_classz00,
							BGl_proc1973z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1972z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 3), BgL_arg1611z00_1106);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1631z00_1119;

						BgL_arg1631z00_1119 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc1977z00zzobject_classz00,
							BGl_proc1976z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1975z00zzobject_classz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 4), BgL_arg1631z00_1119);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1644z00_1132;

						BgL_arg1644z00_1132 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc1980z00zzobject_classz00,
							BGl_proc1979z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1978z00zzobject_classz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 5), BgL_arg1644z00_1132);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1667z00_1145;

						BgL_arg1667z00_1145 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc1982z00zzobject_classz00,
							BGl_proc1981z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 6), BgL_arg1667z00_1145);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1684z00_1155;

						BgL_arg1684z00_1155 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc1985z00zzobject_classz00,
							BGl_proc1984z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1983z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 7), BgL_arg1684z00_1155);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1692z00_1168;

						BgL_arg1692z00_1168 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc1988z00zzobject_classz00,
							BGl_proc1987z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc1986z00zzobject_classz00,
							CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 8), BgL_arg1692z00_1168);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1704z00_1181;

						BgL_arg1704z00_1181 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc1991z00zzobject_classz00,
							BGl_proc1990z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1989z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 9), BgL_arg1704z00_1181);
					}
					{	/* Object/class.scm 34 */
						obj_t BgL_arg1719z00_1194;

						BgL_arg1719z00_1194 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc1994z00zzobject_classz00,
							BGl_proc1993z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1992z00zzobject_classz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1222z00_1072, ((long) 10), BgL_arg1719z00_1194);
					}
					BgL_arg1552z00_1024 = BgL_v1222z00_1072;
				}
				{	/* Object/class.scm 34 */
					obj_t BgL_v1223z00_1207;

					BgL_v1223z00_1207 = create_vector(((long) 0));
					BgL_arg1553z00_1025 = BgL_v1223z00_1207;
				}
				BGl_tclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 22)),
					CNST_TABLE_REF(((long) 23)), BGl_typez00zztype_typez00,
					((long) 18886), BGl_proc1998z00zzobject_classz00,
					BGl_proc1997z00zzobject_classz00, BFALSE,
					BGl_proc1996z00zzobject_classz00, BGl_proc1995z00zzobject_classz00,
					BgL_arg1552z00_1024, BgL_arg1553z00_1025);
			}
			{	/* Object/class.scm 58 */
				obj_t BgL_arg1739z00_1216;
				obj_t BgL_arg1740z00_1217;

				{	/* Object/class.scm 58 */
					obj_t BgL_v1224z00_1256;

					BgL_v1224z00_1256 = create_vector(((long) 3));
					{	/* Object/class.scm 58 */
						obj_t BgL_arg1757z00_1257;

						BgL_arg1757z00_1257 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc2001z00zzobject_classz00,
							BGl_proc2000z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1999z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1224z00_1256, ((long) 0), BgL_arg1757z00_1257);
					}
					{	/* Object/class.scm 58 */
						obj_t BgL_arg1768z00_1270;

						BgL_arg1768z00_1270 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc2004z00zzobject_classz00,
							BGl_proc2003z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2002z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1224z00_1256, ((long) 1), BgL_arg1768z00_1270);
					}
					{	/* Object/class.scm 58 */
						obj_t BgL_arg1782z00_1283;

						BgL_arg1782z00_1283 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2007z00zzobject_classz00,
							BGl_proc2006z00zzobject_classz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2005z00zzobject_classz00,
							CNST_TABLE_REF(((long) 25)));
						VECTOR_SET(BgL_v1224z00_1256, ((long) 2), BgL_arg1782z00_1283);
					}
					BgL_arg1739z00_1216 = BgL_v1224z00_1256;
				}
				{	/* Object/class.scm 58 */
					obj_t BgL_v1225z00_1296;

					BgL_v1225z00_1296 = create_vector(((long) 0));
					BgL_arg1740z00_1217 = BgL_v1225z00_1296;
				}
				BGl_jclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 26)),
					CNST_TABLE_REF(((long) 23)), BGl_typez00zztype_typez00,
					((long) 63076), BGl_proc2011z00zzobject_classz00,
					BGl_proc2010z00zzobject_classz00, BFALSE,
					BGl_proc2009z00zzobject_classz00, BGl_proc2008z00zzobject_classz00,
					BgL_arg1739z00_1216, BgL_arg1740z00_1217);
			}
			{	/* Object/class.scm 66 */
				obj_t BgL_arg1820z00_1305;
				obj_t BgL_arg1821z00_1306;

				{	/* Object/class.scm 66 */
					obj_t BgL_v1226z00_1343;

					BgL_v1226z00_1343 = create_vector(((long) 1));
					{	/* Object/class.scm 66 */
						obj_t BgL_arg1832z00_1344;

						BgL_arg1832z00_1344 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2014z00zzobject_classz00,
							BGl_proc2013z00zzobject_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2012z00zzobject_classz00,
							CNST_TABLE_REF(((long) 9)));
						VECTOR_SET(BgL_v1226z00_1343, ((long) 0), BgL_arg1832z00_1344);
					}
					BgL_arg1820z00_1305 = BgL_v1226z00_1343;
				}
				{	/* Object/class.scm 66 */
					obj_t BgL_v1227z00_1357;

					BgL_v1227z00_1357 = create_vector(((long) 0));
					BgL_arg1821z00_1306 = BgL_v1227z00_1357;
				}
				return (BGl_wclassz00zzobject_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
						CNST_TABLE_REF(((long) 23)), BGl_typez00zztype_typez00,
						((long) 34593), BGl_proc2018z00zzobject_classz00,
						BGl_proc2017z00zzobject_classz00, BFALSE,
						BGl_proc2016z00zzobject_classz00, BGl_proc2015z00zzobject_classz00,
						BgL_arg1820z00_1305, BgL_arg1821z00_1306), BUNSPEC);
		}}

	}



/* &lambda1828 */
	BgL_typez00_bglt BGl_z62lambda1828z62zzobject_classz00(obj_t BgL_envz00_2364,
		obj_t BgL_o1139z00_2365)
	{
		{	/* Object/class.scm 66 */
			{	/* Object/class.scm 66 */
				long BgL_arg1829z00_2575;

				{	/* Object/class.scm 66 */
					obj_t BgL_arg1830z00_2576;

					{	/* Object/class.scm 66 */
						obj_t BgL_arg1831z00_2577;

						{	/* Object/class.scm 66 */
							long BgL_arg1816z00_2578;

							{	/* Object/class.scm 66 */
								long BgL_arg1817z00_2579;

								{	/* Object/class.scm 66 */
									long BgL_res1942z00_2580;

									BgL_res1942z00_2580 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1139z00_2365)));
									BgL_arg1817z00_2579 = BgL_res1942z00_2580;
								}
								BgL_arg1816z00_2578 = (BgL_arg1817z00_2579 - OBJECT_TYPE);
							}
							BgL_arg1831z00_2577 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2578);
						}
						BgL_arg1830z00_2576 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1831z00_2577);
					}
					{	/* Object/class.scm 66 */
						long BgL_res1944z00_2581;

						{	/* Object/class.scm 66 */
							obj_t BgL_tmpz00_4490;

							BgL_tmpz00_4490 = ((obj_t) BgL_arg1830z00_2576);
							BgL_res1944z00_2581 = BGL_CLASS_INDEX(BgL_tmpz00_4490);
						}
						BgL_arg1829z00_2575 = BgL_res1944z00_2581;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1139z00_2365)), BgL_arg1829z00_2575);
			}
			{	/* Object/class.scm 66 */
				BgL_objectz00_bglt BgL_tmpz00_4496;

				BgL_tmpz00_4496 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2365));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4496, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2365));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1139z00_2365));
		}

	}



/* &<@anonymous:1827> */
	obj_t BGl_z62zc3z04anonymousza31827ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2366, obj_t BgL_new1138z00_2367)
	{
		{	/* Object/class.scm 66 */
			{
				BgL_typez00_bglt BgL_auxz00_4504;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1138z00_2367))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 29))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1138z00_2367))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_wclassz00_bglt BgL_auxz00_4552;

					{
						obj_t BgL_auxz00_4553;

						{	/* Object/class.scm 66 */
							BgL_objectz00_bglt BgL_tmpz00_4554;

							BgL_tmpz00_4554 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1138z00_2367));
							BgL_auxz00_4553 = BGL_OBJECT_WIDENING(BgL_tmpz00_4554);
						}
						BgL_auxz00_4552 = ((BgL_wclassz00_bglt) BgL_auxz00_4553);
					}
					((((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_4552))->
							BgL_itszd2classzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				BgL_auxz00_4504 = ((BgL_typez00_bglt) BgL_new1138z00_2367);
				return ((obj_t) BgL_auxz00_4504);
			}
		}

	}



/* &lambda1825 */
	BgL_typez00_bglt BGl_z62lambda1825z62zzobject_classz00(obj_t BgL_envz00_2368,
		obj_t BgL_o1135z00_2369)
	{
		{	/* Object/class.scm 66 */
			{	/* Object/class.scm 66 */
				BgL_wclassz00_bglt BgL_wide1137z00_2584;

				BgL_wide1137z00_2584 =
					((BgL_wclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_wclassz00_bgl))));
				{	/* Object/class.scm 66 */
					obj_t BgL_auxz00_4567;
					BgL_objectz00_bglt BgL_tmpz00_4563;

					BgL_auxz00_4567 = ((obj_t) BgL_wide1137z00_2584);
					BgL_tmpz00_4563 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2369)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4563, BgL_auxz00_4567);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2369)));
				{	/* Object/class.scm 66 */
					long BgL_arg1826z00_2585;

					{	/* Object/class.scm 66 */
						long BgL_res1941z00_2586;

						BgL_res1941z00_2586 =
							BGL_CLASS_INDEX(BGl_wclassz00zzobject_classz00);
						BgL_arg1826z00_2585 = BgL_res1941z00_2586;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1135z00_2369))), BgL_arg1826z00_2585);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1135z00_2369)));
			}
		}

	}



/* &lambda1822 */
	BgL_typez00_bglt BGl_z62lambda1822z62zzobject_classz00(obj_t BgL_envz00_2370,
		obj_t BgL_id1119z00_2371, obj_t BgL_name1120z00_2372,
		obj_t BgL_siza7e1121za7_2373, obj_t BgL_class1122z00_2374,
		obj_t BgL_coercezd2to1123zd2_2375, obj_t BgL_parents1124z00_2376,
		obj_t BgL_initzf31125zf3_2377, obj_t BgL_magiczf31126zf3_2378,
		obj_t BgL_z421127z42_2379, obj_t BgL_alias1128z00_2380,
		obj_t BgL_pointedzd2tozd2by1129z00_2381, obj_t BgL_tvector1130z00_2382,
		obj_t BgL_location1131z00_2383, obj_t BgL_importzd2location1132zd2_2384,
		obj_t BgL_occurrence1133z00_2385, obj_t BgL_itszd2class1134zd2_2386)
	{
		{	/* Object/class.scm 66 */
			{	/* Object/class.scm 66 */
				bool_t BgL_initzf31125zf3_2588;
				bool_t BgL_magiczf31126zf3_2589;
				int BgL_occurrence1133z00_2590;

				BgL_initzf31125zf3_2588 = CBOOL(BgL_initzf31125zf3_2377);
				BgL_magiczf31126zf3_2589 = CBOOL(BgL_magiczf31126zf3_2378);
				BgL_occurrence1133z00_2590 = CINT(BgL_occurrence1133z00_2385);
				{	/* Object/class.scm 66 */
					BgL_typez00_bglt BgL_new1186z00_2591;

					{	/* Object/class.scm 66 */
						BgL_typez00_bglt BgL_tmp1184z00_2592;
						BgL_wclassz00_bglt BgL_wide1185z00_2593;

						{
							BgL_typez00_bglt BgL_auxz00_4584;

							{	/* Object/class.scm 66 */
								BgL_typez00_bglt BgL_new1183z00_2594;

								BgL_new1183z00_2594 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Object/class.scm 66 */
									long BgL_arg1824z00_2595;

									{	/* Object/class.scm 66 */
										long BgL_res1939z00_2596;

										BgL_res1939z00_2596 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1824z00_2595 = BgL_res1939z00_2596;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1183z00_2594),
										BgL_arg1824z00_2595);
								}
								{	/* Object/class.scm 66 */
									BgL_objectz00_bglt BgL_tmpz00_4589;

									BgL_tmpz00_4589 = ((BgL_objectz00_bglt) BgL_new1183z00_2594);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4589, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1183z00_2594);
								BgL_auxz00_4584 = BgL_new1183z00_2594;
							}
							BgL_tmp1184z00_2592 = ((BgL_typez00_bglt) BgL_auxz00_4584);
						}
						BgL_wide1185z00_2593 =
							((BgL_wclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_wclassz00_bgl))));
						{	/* Object/class.scm 66 */
							obj_t BgL_auxz00_4597;
							BgL_objectz00_bglt BgL_tmpz00_4595;

							BgL_auxz00_4597 = ((obj_t) BgL_wide1185z00_2593);
							BgL_tmpz00_4595 = ((BgL_objectz00_bglt) BgL_tmp1184z00_2592);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4595, BgL_auxz00_4597);
						}
						((BgL_objectz00_bglt) BgL_tmp1184z00_2592);
						{	/* Object/class.scm 66 */
							long BgL_arg1823z00_2597;

							{	/* Object/class.scm 66 */
								long BgL_res1940z00_2598;

								BgL_res1940z00_2598 =
									BGL_CLASS_INDEX(BGl_wclassz00zzobject_classz00);
								BgL_arg1823z00_2597 = BgL_res1940z00_2598;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1184z00_2592),
								BgL_arg1823z00_2597);
						}
						BgL_new1186z00_2591 = ((BgL_typez00_bglt) BgL_tmp1184z00_2592);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1186z00_2591)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1119z00_2371)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_namez00) =
						((obj_t) BgL_name1120z00_2372), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1121za7_2373), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_classz00) =
						((obj_t) BgL_class1122z00_2374), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1123zd2_2375), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_parentsz00) =
						((obj_t) BgL_parents1124z00_2376), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31125zf3_2588), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31126zf3_2589), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_z42z42) =
						((obj_t) BgL_z421127z42_2379), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_aliasz00) =
						((obj_t) BgL_alias1128z00_2380), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1129z00_2381), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1130z00_2382), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_locationz00) =
						((obj_t) BgL_location1131z00_2383), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1132zd2_2384), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1186z00_2591)))->BgL_occurrencez00) =
						((int) BgL_occurrence1133z00_2590), BUNSPEC);
					{
						BgL_wclassz00_bglt BgL_auxz00_4636;

						{
							obj_t BgL_auxz00_4637;

							{	/* Object/class.scm 66 */
								BgL_objectz00_bglt BgL_tmpz00_4638;

								BgL_tmpz00_4638 = ((BgL_objectz00_bglt) BgL_new1186z00_2591);
								BgL_auxz00_4637 = BGL_OBJECT_WIDENING(BgL_tmpz00_4638);
							}
							BgL_auxz00_4636 = ((BgL_wclassz00_bglt) BgL_auxz00_4637);
						}
						((((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_4636))->
								BgL_itszd2classzd2) =
							((obj_t) BgL_itszd2class1134zd2_2386), BUNSPEC);
					}
					return BgL_new1186z00_2591;
				}
			}
		}

	}



/* &<@anonymous:1839> */
	obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2387)
	{
		{	/* Object/class.scm 66 */
			return BUNSPEC;
		}

	}



/* &lambda1838 */
	obj_t BGl_z62lambda1838z62zzobject_classz00(obj_t BgL_envz00_2388,
		obj_t BgL_oz00_2389, obj_t BgL_vz00_2390)
	{
		{	/* Object/class.scm 66 */
			{
				BgL_wclassz00_bglt BgL_auxz00_4643;

				{
					obj_t BgL_auxz00_4644;

					{	/* Object/class.scm 66 */
						BgL_objectz00_bglt BgL_tmpz00_4645;

						BgL_tmpz00_4645 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2389));
						BgL_auxz00_4644 = BGL_OBJECT_WIDENING(BgL_tmpz00_4645);
					}
					BgL_auxz00_4643 = ((BgL_wclassz00_bglt) BgL_auxz00_4644);
				}
				return
					((((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_4643))->
						BgL_itszd2classzd2) = ((obj_t) BgL_vz00_2390), BUNSPEC);
			}
		}

	}



/* &lambda1837 */
	obj_t BGl_z62lambda1837z62zzobject_classz00(obj_t BgL_envz00_2391,
		obj_t BgL_oz00_2392)
	{
		{	/* Object/class.scm 66 */
			{
				BgL_wclassz00_bglt BgL_auxz00_4651;

				{
					obj_t BgL_auxz00_4652;

					{	/* Object/class.scm 66 */
						BgL_objectz00_bglt BgL_tmpz00_4653;

						BgL_tmpz00_4653 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2392));
						BgL_auxz00_4652 = BGL_OBJECT_WIDENING(BgL_tmpz00_4653);
					}
					BgL_auxz00_4651 = ((BgL_wclassz00_bglt) BgL_auxz00_4652);
				}
				return
					(((BgL_wclassz00_bglt) COBJECT(BgL_auxz00_4651))->BgL_itszd2classzd2);
			}
		}

	}



/* &lambda1747 */
	BgL_typez00_bglt BGl_z62lambda1747z62zzobject_classz00(obj_t BgL_envz00_2393,
		obj_t BgL_o1117z00_2394)
	{
		{	/* Object/class.scm 58 */
			{	/* Object/class.scm 58 */
				long BgL_arg1754z00_2602;

				{	/* Object/class.scm 58 */
					obj_t BgL_arg1755z00_2603;

					{	/* Object/class.scm 58 */
						obj_t BgL_arg1756z00_2604;

						{	/* Object/class.scm 58 */
							long BgL_arg1816z00_2605;

							{	/* Object/class.scm 58 */
								long BgL_arg1817z00_2606;

								{	/* Object/class.scm 58 */
									long BgL_res1936z00_2607;

									BgL_res1936z00_2607 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1117z00_2394)));
									BgL_arg1817z00_2606 = BgL_res1936z00_2607;
								}
								BgL_arg1816z00_2605 = (BgL_arg1817z00_2606 - OBJECT_TYPE);
							}
							BgL_arg1756z00_2604 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2605);
						}
						BgL_arg1755z00_2603 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1756z00_2604);
					}
					{	/* Object/class.scm 58 */
						long BgL_res1938z00_2608;

						{	/* Object/class.scm 58 */
							obj_t BgL_tmpz00_4665;

							BgL_tmpz00_4665 = ((obj_t) BgL_arg1755z00_2603);
							BgL_res1938z00_2608 = BGL_CLASS_INDEX(BgL_tmpz00_4665);
						}
						BgL_arg1754z00_2602 = BgL_res1938z00_2608;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1117z00_2394)), BgL_arg1754z00_2602);
			}
			{	/* Object/class.scm 58 */
				BgL_objectz00_bglt BgL_tmpz00_4671;

				BgL_tmpz00_4671 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1117z00_2394));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4671, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1117z00_2394));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1117z00_2394));
		}

	}



/* &<@anonymous:1746> */
	obj_t BGl_z62zc3z04anonymousza31746ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2395, obj_t BgL_new1116z00_2396)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_typez00_bglt BgL_auxz00_4679;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1116z00_2396))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 29))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1116z00_2396))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_jclassz00_bglt BgL_auxz00_4727;

					{
						obj_t BgL_auxz00_4728;

						{	/* Object/class.scm 58 */
							BgL_objectz00_bglt BgL_tmpz00_4729;

							BgL_tmpz00_4729 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1116z00_2396));
							BgL_auxz00_4728 = BGL_OBJECT_WIDENING(BgL_tmpz00_4729);
						}
						BgL_auxz00_4727 = ((BgL_jclassz00_bglt) BgL_auxz00_4728);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4727))->
							BgL_itszd2superzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_4735;

					{
						obj_t BgL_auxz00_4736;

						{	/* Object/class.scm 58 */
							BgL_objectz00_bglt BgL_tmpz00_4737;

							BgL_tmpz00_4737 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1116z00_2396));
							BgL_auxz00_4736 = BGL_OBJECT_WIDENING(BgL_tmpz00_4737);
						}
						BgL_auxz00_4735 = ((BgL_jclassz00_bglt) BgL_auxz00_4736);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4735))->BgL_slotsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_jclassz00_bglt BgL_auxz00_4743;

					{
						obj_t BgL_auxz00_4744;

						{	/* Object/class.scm 58 */
							BgL_objectz00_bglt BgL_tmpz00_4745;

							BgL_tmpz00_4745 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1116z00_2396));
							BgL_auxz00_4744 = BGL_OBJECT_WIDENING(BgL_tmpz00_4745);
						}
						BgL_auxz00_4743 = ((BgL_jclassz00_bglt) BgL_auxz00_4744);
					}
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4743))->BgL_packagez00) =
						((obj_t) BGl_string2019z00zzobject_classz00), BUNSPEC);
				}
				BgL_auxz00_4679 = ((BgL_typez00_bglt) BgL_new1116z00_2396);
				return ((obj_t) BgL_auxz00_4679);
			}
		}

	}



/* &lambda1744 */
	BgL_typez00_bglt BGl_z62lambda1744z62zzobject_classz00(obj_t BgL_envz00_2397,
		obj_t BgL_o1113z00_2398)
	{
		{	/* Object/class.scm 58 */
			{	/* Object/class.scm 58 */
				BgL_jclassz00_bglt BgL_wide1115z00_2611;

				BgL_wide1115z00_2611 =
					((BgL_jclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jclassz00_bgl))));
				{	/* Object/class.scm 58 */
					obj_t BgL_auxz00_4758;
					BgL_objectz00_bglt BgL_tmpz00_4754;

					BgL_auxz00_4758 = ((obj_t) BgL_wide1115z00_2611);
					BgL_tmpz00_4754 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1113z00_2398)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4754, BgL_auxz00_4758);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1113z00_2398)));
				{	/* Object/class.scm 58 */
					long BgL_arg1745z00_2612;

					{	/* Object/class.scm 58 */
						long BgL_res1935z00_2613;

						BgL_res1935z00_2613 =
							BGL_CLASS_INDEX(BGl_jclassz00zzobject_classz00);
						BgL_arg1745z00_2612 = BgL_res1935z00_2613;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1113z00_2398))), BgL_arg1745z00_2612);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1113z00_2398)));
			}
		}

	}



/* &lambda1741 */
	BgL_typez00_bglt BGl_z62lambda1741z62zzobject_classz00(obj_t BgL_envz00_2399,
		obj_t BgL_id1095z00_2400, obj_t BgL_name1096z00_2401,
		obj_t BgL_siza7e1097za7_2402, obj_t BgL_class1098z00_2403,
		obj_t BgL_coercezd2to1099zd2_2404, obj_t BgL_parents1100z00_2405,
		obj_t BgL_initzf31101zf3_2406, obj_t BgL_magiczf31102zf3_2407,
		obj_t BgL_z421103z42_2408, obj_t BgL_alias1104z00_2409,
		obj_t BgL_pointedzd2tozd2by1105z00_2410, obj_t BgL_tvector1106z00_2411,
		obj_t BgL_location1107z00_2412, obj_t BgL_importzd2location1108zd2_2413,
		obj_t BgL_occurrence1109z00_2414, obj_t BgL_itszd2super1110zd2_2415,
		obj_t BgL_slots1111z00_2416, obj_t BgL_package1112z00_2417)
	{
		{	/* Object/class.scm 58 */
			{	/* Object/class.scm 58 */
				bool_t BgL_initzf31101zf3_2615;
				bool_t BgL_magiczf31102zf3_2616;
				int BgL_occurrence1109z00_2617;

				BgL_initzf31101zf3_2615 = CBOOL(BgL_initzf31101zf3_2406);
				BgL_magiczf31102zf3_2616 = CBOOL(BgL_magiczf31102zf3_2407);
				BgL_occurrence1109z00_2617 = CINT(BgL_occurrence1109z00_2414);
				{	/* Object/class.scm 58 */
					BgL_typez00_bglt BgL_new1180z00_2619;

					{	/* Object/class.scm 58 */
						BgL_typez00_bglt BgL_tmp1177z00_2620;
						BgL_jclassz00_bglt BgL_wide1178z00_2621;

						{
							BgL_typez00_bglt BgL_auxz00_4775;

							{	/* Object/class.scm 58 */
								BgL_typez00_bglt BgL_new1176z00_2622;

								BgL_new1176z00_2622 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Object/class.scm 58 */
									long BgL_arg1743z00_2623;

									{	/* Object/class.scm 58 */
										long BgL_res1933z00_2624;

										BgL_res1933z00_2624 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1743z00_2623 = BgL_res1933z00_2624;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1176z00_2622),
										BgL_arg1743z00_2623);
								}
								{	/* Object/class.scm 58 */
									BgL_objectz00_bglt BgL_tmpz00_4780;

									BgL_tmpz00_4780 = ((BgL_objectz00_bglt) BgL_new1176z00_2622);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4780, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1176z00_2622);
								BgL_auxz00_4775 = BgL_new1176z00_2622;
							}
							BgL_tmp1177z00_2620 = ((BgL_typez00_bglt) BgL_auxz00_4775);
						}
						BgL_wide1178z00_2621 =
							((BgL_jclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jclassz00_bgl))));
						{	/* Object/class.scm 58 */
							obj_t BgL_auxz00_4788;
							BgL_objectz00_bglt BgL_tmpz00_4786;

							BgL_auxz00_4788 = ((obj_t) BgL_wide1178z00_2621);
							BgL_tmpz00_4786 = ((BgL_objectz00_bglt) BgL_tmp1177z00_2620);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4786, BgL_auxz00_4788);
						}
						((BgL_objectz00_bglt) BgL_tmp1177z00_2620);
						{	/* Object/class.scm 58 */
							long BgL_arg1742z00_2625;

							{	/* Object/class.scm 58 */
								long BgL_res1934z00_2626;

								BgL_res1934z00_2626 =
									BGL_CLASS_INDEX(BGl_jclassz00zzobject_classz00);
								BgL_arg1742z00_2625 = BgL_res1934z00_2626;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1177z00_2620),
								BgL_arg1742z00_2625);
						}
						BgL_new1180z00_2619 = ((BgL_typez00_bglt) BgL_tmp1177z00_2620);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1180z00_2619)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1095z00_2400)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_namez00) =
						((obj_t) BgL_name1096z00_2401), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1097za7_2402), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_classz00) =
						((obj_t) BgL_class1098z00_2403), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1099zd2_2404), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_parentsz00) =
						((obj_t) BgL_parents1100z00_2405), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31101zf3_2615), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31102zf3_2616), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_z42z42) =
						((obj_t) BgL_z421103z42_2408), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_aliasz00) =
						((obj_t) BgL_alias1104z00_2409), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1105z00_2410), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1106z00_2411), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_locationz00) =
						((obj_t) BgL_location1107z00_2412), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1108zd2_2413), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1180z00_2619)))->BgL_occurrencez00) =
						((int) BgL_occurrence1109z00_2617), BUNSPEC);
					{
						BgL_jclassz00_bglt BgL_auxz00_4827;

						{
							obj_t BgL_auxz00_4828;

							{	/* Object/class.scm 58 */
								BgL_objectz00_bglt BgL_tmpz00_4829;

								BgL_tmpz00_4829 = ((BgL_objectz00_bglt) BgL_new1180z00_2619);
								BgL_auxz00_4828 = BGL_OBJECT_WIDENING(BgL_tmpz00_4829);
							}
							BgL_auxz00_4827 = ((BgL_jclassz00_bglt) BgL_auxz00_4828);
						}
						((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4827))->
								BgL_itszd2superzd2) =
							((obj_t) BgL_itszd2super1110zd2_2415), BUNSPEC);
					}
					{
						BgL_jclassz00_bglt BgL_auxz00_4834;

						{
							obj_t BgL_auxz00_4835;

							{	/* Object/class.scm 58 */
								BgL_objectz00_bglt BgL_tmpz00_4836;

								BgL_tmpz00_4836 = ((BgL_objectz00_bglt) BgL_new1180z00_2619);
								BgL_auxz00_4835 = BGL_OBJECT_WIDENING(BgL_tmpz00_4836);
							}
							BgL_auxz00_4834 = ((BgL_jclassz00_bglt) BgL_auxz00_4835);
						}
						((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4834))->BgL_slotsz00) =
							((obj_t) BgL_slots1111z00_2416), BUNSPEC);
					}
					{
						BgL_jclassz00_bglt BgL_auxz00_4841;

						{
							obj_t BgL_auxz00_4842;

							{	/* Object/class.scm 58 */
								BgL_objectz00_bglt BgL_tmpz00_4843;

								BgL_tmpz00_4843 = ((BgL_objectz00_bglt) BgL_new1180z00_2619);
								BgL_auxz00_4842 = BGL_OBJECT_WIDENING(BgL_tmpz00_4843);
							}
							BgL_auxz00_4841 = ((BgL_jclassz00_bglt) BgL_auxz00_4842);
						}
						((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4841))->BgL_packagez00) =
							((obj_t) ((obj_t) BgL_package1112z00_2417)), BUNSPEC);
					}
					return BgL_new1180z00_2619;
				}
			}
		}

	}



/* &<@anonymous:1799> */
	obj_t BGl_z62zc3z04anonymousza31799ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2418)
	{
		{	/* Object/class.scm 58 */
			return BGl_string2019z00zzobject_classz00;
		}

	}



/* &lambda1798 */
	obj_t BGl_z62lambda1798z62zzobject_classz00(obj_t BgL_envz00_2419,
		obj_t BgL_oz00_2420, obj_t BgL_vz00_2421)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4849;

				{
					obj_t BgL_auxz00_4850;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4851;

						BgL_tmpz00_4851 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2420));
						BgL_auxz00_4850 = BGL_OBJECT_WIDENING(BgL_tmpz00_4851);
					}
					BgL_auxz00_4849 = ((BgL_jclassz00_bglt) BgL_auxz00_4850);
				}
				return
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4849))->BgL_packagez00) =
					((obj_t) ((obj_t) BgL_vz00_2421)), BUNSPEC);
			}
		}

	}



/* &lambda1797 */
	obj_t BGl_z62lambda1797z62zzobject_classz00(obj_t BgL_envz00_2422,
		obj_t BgL_oz00_2423)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4858;

				{
					obj_t BgL_auxz00_4859;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4860;

						BgL_tmpz00_4860 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2423));
						BgL_auxz00_4859 = BGL_OBJECT_WIDENING(BgL_tmpz00_4860);
					}
					BgL_auxz00_4858 = ((BgL_jclassz00_bglt) BgL_auxz00_4859);
				}
				return
					(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4858))->BgL_packagez00);
			}
		}

	}



/* &<@anonymous:1781> */
	obj_t BGl_z62zc3z04anonymousza31781ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2424)
	{
		{	/* Object/class.scm 58 */
			return BUNSPEC;
		}

	}



/* &lambda1780 */
	obj_t BGl_z62lambda1780z62zzobject_classz00(obj_t BgL_envz00_2425,
		obj_t BgL_oz00_2426, obj_t BgL_vz00_2427)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4866;

				{
					obj_t BgL_auxz00_4867;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4868;

						BgL_tmpz00_4868 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2426));
						BgL_auxz00_4867 = BGL_OBJECT_WIDENING(BgL_tmpz00_4868);
					}
					BgL_auxz00_4866 = ((BgL_jclassz00_bglt) BgL_auxz00_4867);
				}
				return
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4866))->BgL_slotsz00) =
					((obj_t) BgL_vz00_2427), BUNSPEC);
			}
		}

	}



/* &lambda1779 */
	obj_t BGl_z62lambda1779z62zzobject_classz00(obj_t BgL_envz00_2428,
		obj_t BgL_oz00_2429)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4874;

				{
					obj_t BgL_auxz00_4875;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4876;

						BgL_tmpz00_4876 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2429));
						BgL_auxz00_4875 = BGL_OBJECT_WIDENING(BgL_tmpz00_4876);
					}
					BgL_auxz00_4874 = ((BgL_jclassz00_bglt) BgL_auxz00_4875);
				}
				return (((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4874))->BgL_slotsz00);
			}
		}

	}



/* &<@anonymous:1764> */
	obj_t BGl_z62zc3z04anonymousza31764ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2430)
	{
		{	/* Object/class.scm 58 */
			return BUNSPEC;
		}

	}



/* &lambda1763 */
	obj_t BGl_z62lambda1763z62zzobject_classz00(obj_t BgL_envz00_2431,
		obj_t BgL_oz00_2432, obj_t BgL_vz00_2433)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4882;

				{
					obj_t BgL_auxz00_4883;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4884;

						BgL_tmpz00_4884 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2432));
						BgL_auxz00_4883 = BGL_OBJECT_WIDENING(BgL_tmpz00_4884);
					}
					BgL_auxz00_4882 = ((BgL_jclassz00_bglt) BgL_auxz00_4883);
				}
				return
					((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4882))->
						BgL_itszd2superzd2) = ((obj_t) BgL_vz00_2433), BUNSPEC);
			}
		}

	}



/* &lambda1762 */
	obj_t BGl_z62lambda1762z62zzobject_classz00(obj_t BgL_envz00_2434,
		obj_t BgL_oz00_2435)
	{
		{	/* Object/class.scm 58 */
			{
				BgL_jclassz00_bglt BgL_auxz00_4890;

				{
					obj_t BgL_auxz00_4891;

					{	/* Object/class.scm 58 */
						BgL_objectz00_bglt BgL_tmpz00_4892;

						BgL_tmpz00_4892 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2435));
						BgL_auxz00_4891 = BGL_OBJECT_WIDENING(BgL_tmpz00_4892);
					}
					BgL_auxz00_4890 = ((BgL_jclassz00_bglt) BgL_auxz00_4891);
				}
				return
					(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_4890))->BgL_itszd2superzd2);
			}
		}

	}



/* &lambda1566 */
	BgL_typez00_bglt BGl_z62lambda1566z62zzobject_classz00(obj_t BgL_envz00_2436,
		obj_t BgL_o1093z00_2437)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				long BgL_arg1573z00_2635;

				{	/* Object/class.scm 34 */
					obj_t BgL_arg1575z00_2636;

					{	/* Object/class.scm 34 */
						obj_t BgL_arg1578z00_2637;

						{	/* Object/class.scm 34 */
							long BgL_arg1816z00_2638;

							{	/* Object/class.scm 34 */
								long BgL_arg1817z00_2639;

								{	/* Object/class.scm 34 */
									long BgL_res1930z00_2640;

									BgL_res1930z00_2640 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1093z00_2437)));
									BgL_arg1817z00_2639 = BgL_res1930z00_2640;
								}
								BgL_arg1816z00_2638 = (BgL_arg1817z00_2639 - OBJECT_TYPE);
							}
							BgL_arg1578z00_2637 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2638);
						}
						BgL_arg1575z00_2636 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1578z00_2637);
					}
					{	/* Object/class.scm 34 */
						long BgL_res1932z00_2641;

						{	/* Object/class.scm 34 */
							obj_t BgL_tmpz00_4904;

							BgL_tmpz00_4904 = ((obj_t) BgL_arg1575z00_2636);
							BgL_res1932z00_2641 = BGL_CLASS_INDEX(BgL_tmpz00_4904);
						}
						BgL_arg1573z00_2635 = BgL_res1932z00_2641;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1093z00_2437)), BgL_arg1573z00_2635);
			}
			{	/* Object/class.scm 34 */
				BgL_objectz00_bglt BgL_tmpz00_4910;

				BgL_tmpz00_4910 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1093z00_2437));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_4910, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1093z00_2437));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1093z00_2437));
		}

	}



/* &<@anonymous:1565> */
	obj_t BGl_z62zc3z04anonymousza31565ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2438, obj_t BgL_new1092z00_2439)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_typez00_bglt BgL_auxz00_4918;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1092z00_2439))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 29))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1092z00_2439))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				{
					BgL_tclassz00_bglt BgL_auxz00_4966;

					{
						obj_t BgL_auxz00_4967;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_4968;

							BgL_tmpz00_4968 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_4967 = BGL_OBJECT_WIDENING(BgL_tmpz00_4968);
						}
						BgL_auxz00_4966 = ((BgL_tclassz00_bglt) BgL_auxz00_4967);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4966))->
							BgL_itszd2superzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_4974;

					{
						obj_t BgL_auxz00_4975;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_4976;

							BgL_tmpz00_4976 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_4975 = BGL_OBJECT_WIDENING(BgL_tmpz00_4976);
						}
						BgL_auxz00_4974 = ((BgL_tclassz00_bglt) BgL_auxz00_4975);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4974))->BgL_slotsz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_globalz00_bglt BgL_auxz00_4989;
					BgL_tclassz00_bglt BgL_auxz00_4982;

					{	/* Object/class.scm 34 */
						obj_t BgL_classz00_2643;

						BgL_classz00_2643 = BGl_globalz00zzast_varz00;
						{	/* Object/class.scm 34 */
							obj_t BgL__ortest_1106z00_2644;

							BgL__ortest_1106z00_2644 = BGL_CLASS_NIL(BgL_classz00_2643);
							if (CBOOL(BgL__ortest_1106z00_2644))
								{	/* Object/class.scm 34 */
									BgL_auxz00_4989 =
										((BgL_globalz00_bglt) BgL__ortest_1106z00_2644);
								}
							else
								{	/* Object/class.scm 34 */
									BgL_auxz00_4989 =
										((BgL_globalz00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_2643));
								}
						}
					}
					{
						obj_t BgL_auxz00_4983;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_4984;

							BgL_tmpz00_4984 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_4983 = BGL_OBJECT_WIDENING(BgL_tmpz00_4984);
						}
						BgL_auxz00_4982 = ((BgL_tclassz00_bglt) BgL_auxz00_4983);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4982))->BgL_holderz00) =
						((BgL_globalz00_bglt) BgL_auxz00_4989), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_4997;

					{
						obj_t BgL_auxz00_4998;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_4999;

							BgL_tmpz00_4999 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_4998 = BGL_OBJECT_WIDENING(BgL_tmpz00_4999);
						}
						BgL_auxz00_4997 = ((BgL_tclassz00_bglt) BgL_auxz00_4998);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4997))->BgL_wideningz00) =
						((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5005;

					{
						obj_t BgL_auxz00_5006;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5007;

							BgL_tmpz00_5007 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5006 = BGL_OBJECT_WIDENING(BgL_tmpz00_5007);
						}
						BgL_auxz00_5005 = ((BgL_tclassz00_bglt) BgL_auxz00_5006);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5005))->BgL_depthz00) =
						((long) ((long) 0)), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5013;

					{
						obj_t BgL_auxz00_5014;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5015;

							BgL_tmpz00_5015 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5014 = BGL_OBJECT_WIDENING(BgL_tmpz00_5015);
						}
						BgL_auxz00_5013 = ((BgL_tclassz00_bglt) BgL_auxz00_5014);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5013))->BgL_finalzf3zf3) =
						((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5021;

					{
						obj_t BgL_auxz00_5022;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5023;

							BgL_tmpz00_5023 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5022 = BGL_OBJECT_WIDENING(BgL_tmpz00_5023);
						}
						BgL_auxz00_5021 = ((BgL_tclassz00_bglt) BgL_auxz00_5022);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5021))->
							BgL_constructorz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5029;

					{
						obj_t BgL_auxz00_5030;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5031;

							BgL_tmpz00_5031 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5030 = BGL_OBJECT_WIDENING(BgL_tmpz00_5031);
						}
						BgL_auxz00_5029 = ((BgL_tclassz00_bglt) BgL_auxz00_5030);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5029))->
							BgL_virtualzd2slotszd2numberz00) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5037;

					{
						obj_t BgL_auxz00_5038;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5039;

							BgL_tmpz00_5039 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5038 = BGL_OBJECT_WIDENING(BgL_tmpz00_5039);
						}
						BgL_auxz00_5037 = ((BgL_tclassz00_bglt) BgL_auxz00_5038);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5037))->
							BgL_abstractzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5045;

					{
						obj_t BgL_auxz00_5046;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5047;

							BgL_tmpz00_5047 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5046 = BGL_OBJECT_WIDENING(BgL_tmpz00_5047);
						}
						BgL_auxz00_5045 = ((BgL_tclassz00_bglt) BgL_auxz00_5046);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5045))->
							BgL_widezd2typezd2) = ((obj_t) BUNSPEC), BUNSPEC);
				}
				{
					BgL_tclassz00_bglt BgL_auxz00_5053;

					{
						obj_t BgL_auxz00_5054;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5055;

							BgL_tmpz00_5055 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_new1092z00_2439));
							BgL_auxz00_5054 = BGL_OBJECT_WIDENING(BgL_tmpz00_5055);
						}
						BgL_auxz00_5053 = ((BgL_tclassz00_bglt) BgL_auxz00_5054);
					}
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5053))->
							BgL_subclassesz00) = ((obj_t) BNIL), BUNSPEC);
				}
				BgL_auxz00_4918 = ((BgL_typez00_bglt) BgL_new1092z00_2439);
				return ((obj_t) BgL_auxz00_4918);
			}
		}

	}



/* &lambda1562 */
	BgL_typez00_bglt BGl_z62lambda1562z62zzobject_classz00(obj_t BgL_envz00_2440,
		obj_t BgL_o1089z00_2441)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				BgL_tclassz00_bglt BgL_wide1091z00_2646;

				BgL_wide1091z00_2646 =
					((BgL_tclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_tclassz00_bgl))));
				{	/* Object/class.scm 34 */
					obj_t BgL_auxz00_5068;
					BgL_objectz00_bglt BgL_tmpz00_5064;

					BgL_auxz00_5068 = ((obj_t) BgL_wide1091z00_2646);
					BgL_tmpz00_5064 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1089z00_2441)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5064, BgL_auxz00_5068);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1089z00_2441)));
				{	/* Object/class.scm 34 */
					long BgL_arg1564z00_2647;

					{	/* Object/class.scm 34 */
						long BgL_res1929z00_2648;

						BgL_res1929z00_2648 =
							BGL_CLASS_INDEX(BGl_tclassz00zzobject_classz00);
						BgL_arg1564z00_2647 = BgL_res1929z00_2648;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1089z00_2441))), BgL_arg1564z00_2647);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1089z00_2441)));
			}
		}

	}



/* &lambda1554 */
	BgL_typez00_bglt BGl_z62lambda1554z62zzobject_classz00(obj_t BgL_envz00_2442,
		obj_t BgL_id1063z00_2443, obj_t BgL_name1064z00_2444,
		obj_t BgL_siza7e1065za7_2445, obj_t BgL_class1066z00_2446,
		obj_t BgL_coercezd2to1067zd2_2447, obj_t BgL_parents1068z00_2448,
		obj_t BgL_initzf31069zf3_2449, obj_t BgL_magiczf31070zf3_2450,
		obj_t BgL_z421071z42_2451, obj_t BgL_alias1072z00_2452,
		obj_t BgL_pointedzd2tozd2by1073z00_2453, obj_t BgL_tvector1074z00_2454,
		obj_t BgL_location1075z00_2455, obj_t BgL_importzd2location1076zd2_2456,
		obj_t BgL_occurrence1077z00_2457, obj_t BgL_itszd2super1078zd2_2458,
		obj_t BgL_slots1079z00_2459, obj_t BgL_holder1080z00_2460,
		obj_t BgL_widening1081z00_2461, obj_t BgL_depth1082z00_2462,
		obj_t BgL_finalzf31083zf3_2463, obj_t BgL_constructor1084z00_2464,
		obj_t BgL_virtualzd2slotszd2number1085z00_2465,
		obj_t BgL_abstractzf31086zf3_2466, obj_t BgL_widezd2type1087zd2_2467,
		obj_t BgL_subclasses1088z00_2468)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				bool_t BgL_initzf31069zf3_2650;
				bool_t BgL_magiczf31070zf3_2651;
				int BgL_occurrence1077z00_2652;
				long BgL_depth1082z00_2654;
				bool_t BgL_finalzf31083zf3_2655;
				bool_t BgL_abstractzf31086zf3_2656;

				BgL_initzf31069zf3_2650 = CBOOL(BgL_initzf31069zf3_2449);
				BgL_magiczf31070zf3_2651 = CBOOL(BgL_magiczf31070zf3_2450);
				BgL_occurrence1077z00_2652 = CINT(BgL_occurrence1077z00_2457);
				BgL_depth1082z00_2654 = (long) CINT(BgL_depth1082z00_2462);
				BgL_finalzf31083zf3_2655 = CBOOL(BgL_finalzf31083zf3_2463);
				BgL_abstractzf31086zf3_2656 = CBOOL(BgL_abstractzf31086zf3_2466);
				{	/* Object/class.scm 34 */
					BgL_typez00_bglt BgL_new1174z00_2658;

					{	/* Object/class.scm 34 */
						BgL_typez00_bglt BgL_tmp1172z00_2659;
						BgL_tclassz00_bglt BgL_wide1173z00_2660;

						{
							BgL_typez00_bglt BgL_auxz00_5088;

							{	/* Object/class.scm 34 */
								BgL_typez00_bglt BgL_new1171z00_2661;

								BgL_new1171z00_2661 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* Object/class.scm 34 */
									long BgL_arg1561z00_2662;

									{	/* Object/class.scm 34 */
										long BgL_res1927z00_2663;

										BgL_res1927z00_2663 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1561z00_2662 = BgL_res1927z00_2663;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1171z00_2661),
										BgL_arg1561z00_2662);
								}
								{	/* Object/class.scm 34 */
									BgL_objectz00_bglt BgL_tmpz00_5093;

									BgL_tmpz00_5093 = ((BgL_objectz00_bglt) BgL_new1171z00_2661);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5093, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1171z00_2661);
								BgL_auxz00_5088 = BgL_new1171z00_2661;
							}
							BgL_tmp1172z00_2659 = ((BgL_typez00_bglt) BgL_auxz00_5088);
						}
						BgL_wide1173z00_2660 =
							((BgL_tclassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_tclassz00_bgl))));
						{	/* Object/class.scm 34 */
							obj_t BgL_auxz00_5101;
							BgL_objectz00_bglt BgL_tmpz00_5099;

							BgL_auxz00_5101 = ((obj_t) BgL_wide1173z00_2660);
							BgL_tmpz00_5099 = ((BgL_objectz00_bglt) BgL_tmp1172z00_2659);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_5099, BgL_auxz00_5101);
						}
						((BgL_objectz00_bglt) BgL_tmp1172z00_2659);
						{	/* Object/class.scm 34 */
							long BgL_arg1558z00_2664;

							{	/* Object/class.scm 34 */
								long BgL_res1928z00_2665;

								BgL_res1928z00_2665 =
									BGL_CLASS_INDEX(BGl_tclassz00zzobject_classz00);
								BgL_arg1558z00_2664 = BgL_res1928z00_2665;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1172z00_2659),
								BgL_arg1558z00_2664);
						}
						BgL_new1174z00_2658 = ((BgL_typez00_bglt) BgL_tmp1172z00_2659);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1174z00_2658)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1063z00_2443)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_namez00) =
						((obj_t) BgL_name1064z00_2444), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1065za7_2445), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_classz00) =
						((obj_t) BgL_class1066z00_2446), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1067zd2_2447), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_parentsz00) =
						((obj_t) BgL_parents1068z00_2448), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31069zf3_2650), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31070zf3_2651), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_z42z42) =
						((obj_t) BgL_z421071z42_2451), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_aliasz00) =
						((obj_t) BgL_alias1072z00_2452), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1073z00_2453), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1074z00_2454), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_locationz00) =
						((obj_t) BgL_location1075z00_2455), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1076zd2_2456), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1174z00_2658)))->BgL_occurrencez00) =
						((int) BgL_occurrence1077z00_2652), BUNSPEC);
					{
						BgL_tclassz00_bglt BgL_auxz00_5140;

						{
							obj_t BgL_auxz00_5141;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5142;

								BgL_tmpz00_5142 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5141 = BGL_OBJECT_WIDENING(BgL_tmpz00_5142);
							}
							BgL_auxz00_5140 = ((BgL_tclassz00_bglt) BgL_auxz00_5141);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5140))->
								BgL_itszd2superzd2) =
							((obj_t) BgL_itszd2super1078zd2_2458), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5147;

						{
							obj_t BgL_auxz00_5148;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5149;

								BgL_tmpz00_5149 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5148 = BGL_OBJECT_WIDENING(BgL_tmpz00_5149);
							}
							BgL_auxz00_5147 = ((BgL_tclassz00_bglt) BgL_auxz00_5148);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5147))->BgL_slotsz00) =
							((obj_t) BgL_slots1079z00_2459), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5154;

						{
							obj_t BgL_auxz00_5155;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5156;

								BgL_tmpz00_5156 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5155 = BGL_OBJECT_WIDENING(BgL_tmpz00_5156);
							}
							BgL_auxz00_5154 = ((BgL_tclassz00_bglt) BgL_auxz00_5155);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5154))->BgL_holderz00) =
							((BgL_globalz00_bglt) ((BgL_globalz00_bglt)
									BgL_holder1080z00_2460)), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5162;

						{
							obj_t BgL_auxz00_5163;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5164;

								BgL_tmpz00_5164 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5163 = BGL_OBJECT_WIDENING(BgL_tmpz00_5164);
							}
							BgL_auxz00_5162 = ((BgL_tclassz00_bglt) BgL_auxz00_5163);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5162))->
								BgL_wideningz00) = ((obj_t) BgL_widening1081z00_2461), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5169;

						{
							obj_t BgL_auxz00_5170;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5171;

								BgL_tmpz00_5171 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5170 = BGL_OBJECT_WIDENING(BgL_tmpz00_5171);
							}
							BgL_auxz00_5169 = ((BgL_tclassz00_bglt) BgL_auxz00_5170);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5169))->BgL_depthz00) =
							((long) BgL_depth1082z00_2654), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5176;

						{
							obj_t BgL_auxz00_5177;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5178;

								BgL_tmpz00_5178 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5177 = BGL_OBJECT_WIDENING(BgL_tmpz00_5178);
							}
							BgL_auxz00_5176 = ((BgL_tclassz00_bglt) BgL_auxz00_5177);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5176))->
								BgL_finalzf3zf3) =
							((bool_t) BgL_finalzf31083zf3_2655), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5183;

						{
							obj_t BgL_auxz00_5184;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5185;

								BgL_tmpz00_5185 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5184 = BGL_OBJECT_WIDENING(BgL_tmpz00_5185);
							}
							BgL_auxz00_5183 = ((BgL_tclassz00_bglt) BgL_auxz00_5184);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5183))->
								BgL_constructorz00) =
							((obj_t) BgL_constructor1084z00_2464), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5190;

						{
							obj_t BgL_auxz00_5191;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5192;

								BgL_tmpz00_5192 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5191 = BGL_OBJECT_WIDENING(BgL_tmpz00_5192);
							}
							BgL_auxz00_5190 = ((BgL_tclassz00_bglt) BgL_auxz00_5191);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5190))->
								BgL_virtualzd2slotszd2numberz00) =
							((obj_t) BgL_virtualzd2slotszd2number1085z00_2465), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5197;

						{
							obj_t BgL_auxz00_5198;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5199;

								BgL_tmpz00_5199 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5198 = BGL_OBJECT_WIDENING(BgL_tmpz00_5199);
							}
							BgL_auxz00_5197 = ((BgL_tclassz00_bglt) BgL_auxz00_5198);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5197))->
								BgL_abstractzf3zf3) =
							((bool_t) BgL_abstractzf31086zf3_2656), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5204;

						{
							obj_t BgL_auxz00_5205;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5206;

								BgL_tmpz00_5206 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5205 = BGL_OBJECT_WIDENING(BgL_tmpz00_5206);
							}
							BgL_auxz00_5204 = ((BgL_tclassz00_bglt) BgL_auxz00_5205);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5204))->
								BgL_widezd2typezd2) =
							((obj_t) BgL_widezd2type1087zd2_2467), BUNSPEC);
					}
					{
						BgL_tclassz00_bglt BgL_auxz00_5211;

						{
							obj_t BgL_auxz00_5212;

							{	/* Object/class.scm 34 */
								BgL_objectz00_bglt BgL_tmpz00_5213;

								BgL_tmpz00_5213 = ((BgL_objectz00_bglt) BgL_new1174z00_2658);
								BgL_auxz00_5212 = BGL_OBJECT_WIDENING(BgL_tmpz00_5213);
							}
							BgL_auxz00_5211 = ((BgL_tclassz00_bglt) BgL_auxz00_5212);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5211))->
								BgL_subclassesz00) =
							((obj_t) ((obj_t) BgL_subclasses1088z00_2468)), BUNSPEC);
					}
					return BgL_new1174z00_2658;
				}
			}
		}

	}



/* &<@anonymous:1730> */
	obj_t BGl_z62zc3z04anonymousza31730ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2469)
	{
		{	/* Object/class.scm 34 */
			return BNIL;
		}

	}



/* &lambda1729 */
	obj_t BGl_z62lambda1729z62zzobject_classz00(obj_t BgL_envz00_2470,
		obj_t BgL_oz00_2471, obj_t BgL_vz00_2472)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5219;

				{
					obj_t BgL_auxz00_5220;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5221;

						BgL_tmpz00_5221 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2471));
						BgL_auxz00_5220 = BGL_OBJECT_WIDENING(BgL_tmpz00_5221);
					}
					BgL_auxz00_5219 = ((BgL_tclassz00_bglt) BgL_auxz00_5220);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5219))->
						BgL_subclassesz00) = ((obj_t) ((obj_t) BgL_vz00_2472)), BUNSPEC);
			}
		}

	}



/* &lambda1728 */
	obj_t BGl_z62lambda1728z62zzobject_classz00(obj_t BgL_envz00_2473,
		obj_t BgL_oz00_2474)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5228;

				{
					obj_t BgL_auxz00_5229;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5230;

						BgL_tmpz00_5230 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2474));
						BgL_auxz00_5229 = BGL_OBJECT_WIDENING(BgL_tmpz00_5230);
					}
					BgL_auxz00_5228 = ((BgL_tclassz00_bglt) BgL_auxz00_5229);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5228))->BgL_subclassesz00);
			}
		}

	}



/* &<@anonymous:1714> */
	obj_t BGl_z62zc3z04anonymousza31714ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2475)
	{
		{	/* Object/class.scm 34 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1713 */
	obj_t BGl_z62lambda1713z62zzobject_classz00(obj_t BgL_envz00_2476,
		obj_t BgL_oz00_2477, obj_t BgL_vz00_2478)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5237;

				{
					obj_t BgL_auxz00_5238;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5239;

						BgL_tmpz00_5239 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2477));
						BgL_auxz00_5238 = BGL_OBJECT_WIDENING(BgL_tmpz00_5239);
					}
					BgL_auxz00_5237 = ((BgL_tclassz00_bglt) BgL_auxz00_5238);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5237))->
						BgL_widezd2typezd2) = ((obj_t) BgL_vz00_2478), BUNSPEC);
			}
		}

	}



/* &lambda1712 */
	obj_t BGl_z62lambda1712z62zzobject_classz00(obj_t BgL_envz00_2479,
		obj_t BgL_oz00_2480)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5245;

				{
					obj_t BgL_auxz00_5246;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5247;

						BgL_tmpz00_5247 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2480));
						BgL_auxz00_5246 = BGL_OBJECT_WIDENING(BgL_tmpz00_5247);
					}
					BgL_auxz00_5245 = ((BgL_tclassz00_bglt) BgL_auxz00_5246);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5245))->BgL_widezd2typezd2);
			}
		}

	}



/* &<@anonymous:1700> */
	obj_t BGl_z62zc3z04anonymousza31700ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2481)
	{
		{	/* Object/class.scm 34 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1699 */
	obj_t BGl_z62lambda1699z62zzobject_classz00(obj_t BgL_envz00_2482,
		obj_t BgL_oz00_2483, obj_t BgL_vz00_2484)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				bool_t BgL_vz00_2672;

				BgL_vz00_2672 = CBOOL(BgL_vz00_2484);
				{
					BgL_tclassz00_bglt BgL_auxz00_5255;

					{
						obj_t BgL_auxz00_5256;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5257;

							BgL_tmpz00_5257 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2483));
							BgL_auxz00_5256 = BGL_OBJECT_WIDENING(BgL_tmpz00_5257);
						}
						BgL_auxz00_5255 = ((BgL_tclassz00_bglt) BgL_auxz00_5256);
					}
					return
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5255))->
							BgL_abstractzf3zf3) = ((bool_t) BgL_vz00_2672), BUNSPEC);
				}
			}
		}

	}



/* &lambda1698 */
	obj_t BGl_z62lambda1698z62zzobject_classz00(obj_t BgL_envz00_2485,
		obj_t BgL_oz00_2486)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				bool_t BgL_tmpz00_5263;

				{
					BgL_tclassz00_bglt BgL_auxz00_5264;

					{
						obj_t BgL_auxz00_5265;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5266;

							BgL_tmpz00_5266 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2486));
							BgL_auxz00_5265 = BGL_OBJECT_WIDENING(BgL_tmpz00_5266);
						}
						BgL_auxz00_5264 = ((BgL_tclassz00_bglt) BgL_auxz00_5265);
					}
					BgL_tmpz00_5263 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5264))->
						BgL_abstractzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5263);
			}
		}

	}



/* &<@anonymous:1690> */
	obj_t BGl_z62zc3z04anonymousza31690ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2487)
	{
		{	/* Object/class.scm 34 */
			return BINT(((long) 0));
		}

	}



/* &lambda1689 */
	obj_t BGl_z62lambda1689z62zzobject_classz00(obj_t BgL_envz00_2488,
		obj_t BgL_oz00_2489, obj_t BgL_vz00_2490)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5274;

				{
					obj_t BgL_auxz00_5275;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5276;

						BgL_tmpz00_5276 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2489));
						BgL_auxz00_5275 = BGL_OBJECT_WIDENING(BgL_tmpz00_5276);
					}
					BgL_auxz00_5274 = ((BgL_tclassz00_bglt) BgL_auxz00_5275);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5274))->
						BgL_virtualzd2slotszd2numberz00) =
					((obj_t) BgL_vz00_2490), BUNSPEC);
			}
		}

	}



/* &lambda1688 */
	obj_t BGl_z62lambda1688z62zzobject_classz00(obj_t BgL_envz00_2491,
		obj_t BgL_oz00_2492)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5282;

				{
					obj_t BgL_auxz00_5283;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5284;

						BgL_tmpz00_5284 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2492));
						BgL_auxz00_5283 = BGL_OBJECT_WIDENING(BgL_tmpz00_5284);
					}
					BgL_auxz00_5282 = ((BgL_tclassz00_bglt) BgL_auxz00_5283);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5282))->
					BgL_virtualzd2slotszd2numberz00);
			}
		}

	}



/* &lambda1674 */
	obj_t BGl_z62lambda1674z62zzobject_classz00(obj_t BgL_envz00_2493,
		obj_t BgL_oz00_2494, obj_t BgL_vz00_2495)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5290;

				{
					obj_t BgL_auxz00_5291;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5292;

						BgL_tmpz00_5292 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2494));
						BgL_auxz00_5291 = BGL_OBJECT_WIDENING(BgL_tmpz00_5292);
					}
					BgL_auxz00_5290 = ((BgL_tclassz00_bglt) BgL_auxz00_5291);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5290))->
						BgL_constructorz00) = ((obj_t) BgL_vz00_2495), BUNSPEC);
			}
		}

	}



/* &lambda1673 */
	obj_t BGl_z62lambda1673z62zzobject_classz00(obj_t BgL_envz00_2496,
		obj_t BgL_oz00_2497)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5298;

				{
					obj_t BgL_auxz00_5299;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5300;

						BgL_tmpz00_5300 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2497));
						BgL_auxz00_5299 = BGL_OBJECT_WIDENING(BgL_tmpz00_5300);
					}
					BgL_auxz00_5298 = ((BgL_tclassz00_bglt) BgL_auxz00_5299);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5298))->BgL_constructorz00);
			}
		}

	}



/* &<@anonymous:1666> */
	obj_t BGl_z62zc3z04anonymousza31666ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2498)
	{
		{	/* Object/class.scm 34 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1665 */
	obj_t BGl_z62lambda1665z62zzobject_classz00(obj_t BgL_envz00_2499,
		obj_t BgL_oz00_2500, obj_t BgL_vz00_2501)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				bool_t BgL_vz00_2679;

				BgL_vz00_2679 = CBOOL(BgL_vz00_2501);
				{
					BgL_tclassz00_bglt BgL_auxz00_5308;

					{
						obj_t BgL_auxz00_5309;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5310;

							BgL_tmpz00_5310 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2500));
							BgL_auxz00_5309 = BGL_OBJECT_WIDENING(BgL_tmpz00_5310);
						}
						BgL_auxz00_5308 = ((BgL_tclassz00_bglt) BgL_auxz00_5309);
					}
					return
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5308))->
							BgL_finalzf3zf3) = ((bool_t) BgL_vz00_2679), BUNSPEC);
				}
			}
		}

	}



/* &lambda1664 */
	obj_t BGl_z62lambda1664z62zzobject_classz00(obj_t BgL_envz00_2502,
		obj_t BgL_oz00_2503)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				bool_t BgL_tmpz00_5316;

				{
					BgL_tclassz00_bglt BgL_auxz00_5317;

					{
						obj_t BgL_auxz00_5318;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5319;

							BgL_tmpz00_5319 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2503));
							BgL_auxz00_5318 = BGL_OBJECT_WIDENING(BgL_tmpz00_5319);
						}
						BgL_auxz00_5317 = ((BgL_tclassz00_bglt) BgL_auxz00_5318);
					}
					BgL_tmpz00_5316 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5317))->BgL_finalzf3zf3);
				}
				return BBOOL(BgL_tmpz00_5316);
			}
		}

	}



/* &<@anonymous:1643> */
	obj_t BGl_z62zc3z04anonymousza31643ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2504)
	{
		{	/* Object/class.scm 34 */
			return BINT(((long) 0));
		}

	}



/* &lambda1642 */
	obj_t BGl_z62lambda1642z62zzobject_classz00(obj_t BgL_envz00_2505,
		obj_t BgL_oz00_2506, obj_t BgL_vz00_2507)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				long BgL_vz00_2682;

				BgL_vz00_2682 = (long) CINT(BgL_vz00_2507);
				{
					BgL_tclassz00_bglt BgL_auxz00_5328;

					{
						obj_t BgL_auxz00_5329;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5330;

							BgL_tmpz00_5330 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2506));
							BgL_auxz00_5329 = BGL_OBJECT_WIDENING(BgL_tmpz00_5330);
						}
						BgL_auxz00_5328 = ((BgL_tclassz00_bglt) BgL_auxz00_5329);
					}
					return
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5328))->BgL_depthz00) =
						((long) BgL_vz00_2682), BUNSPEC);
		}}}

	}



/* &lambda1641 */
	obj_t BGl_z62lambda1641z62zzobject_classz00(obj_t BgL_envz00_2508,
		obj_t BgL_oz00_2509)
	{
		{	/* Object/class.scm 34 */
			{	/* Object/class.scm 34 */
				long BgL_tmpz00_5336;

				{
					BgL_tclassz00_bglt BgL_auxz00_5337;

					{
						obj_t BgL_auxz00_5338;

						{	/* Object/class.scm 34 */
							BgL_objectz00_bglt BgL_tmpz00_5339;

							BgL_tmpz00_5339 =
								((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2509));
							BgL_auxz00_5338 = BGL_OBJECT_WIDENING(BgL_tmpz00_5339);
						}
						BgL_auxz00_5337 = ((BgL_tclassz00_bglt) BgL_auxz00_5338);
					}
					BgL_tmpz00_5336 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5337))->BgL_depthz00);
				}
				return BINT(BgL_tmpz00_5336);
			}
		}

	}



/* &<@anonymous:1627> */
	obj_t BGl_z62zc3z04anonymousza31627ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2510)
	{
		{	/* Object/class.scm 34 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1626 */
	obj_t BGl_z62lambda1626z62zzobject_classz00(obj_t BgL_envz00_2511,
		obj_t BgL_oz00_2512, obj_t BgL_vz00_2513)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5347;

				{
					obj_t BgL_auxz00_5348;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5349;

						BgL_tmpz00_5349 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2512));
						BgL_auxz00_5348 = BGL_OBJECT_WIDENING(BgL_tmpz00_5349);
					}
					BgL_auxz00_5347 = ((BgL_tclassz00_bglt) BgL_auxz00_5348);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5347))->BgL_wideningz00) =
					((obj_t) BgL_vz00_2513), BUNSPEC);
			}
		}

	}



/* &lambda1625 */
	obj_t BGl_z62lambda1625z62zzobject_classz00(obj_t BgL_envz00_2514,
		obj_t BgL_oz00_2515)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5355;

				{
					obj_t BgL_auxz00_5356;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5357;

						BgL_tmpz00_5357 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2515));
						BgL_auxz00_5356 = BGL_OBJECT_WIDENING(BgL_tmpz00_5357);
					}
					BgL_auxz00_5355 = ((BgL_tclassz00_bglt) BgL_auxz00_5356);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5355))->BgL_wideningz00);
			}
		}

	}



/* &lambda1608 */
	obj_t BGl_z62lambda1608z62zzobject_classz00(obj_t BgL_envz00_2516,
		obj_t BgL_oz00_2517, obj_t BgL_vz00_2518)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5363;

				{
					obj_t BgL_auxz00_5364;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5365;

						BgL_tmpz00_5365 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2517));
						BgL_auxz00_5364 = BGL_OBJECT_WIDENING(BgL_tmpz00_5365);
					}
					BgL_auxz00_5363 = ((BgL_tclassz00_bglt) BgL_auxz00_5364);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5363))->BgL_holderz00) =
					((BgL_globalz00_bglt) ((BgL_globalz00_bglt) BgL_vz00_2518)), BUNSPEC);
			}
		}

	}



/* &lambda1607 */
	BgL_globalz00_bglt BGl_z62lambda1607z62zzobject_classz00(obj_t
		BgL_envz00_2519, obj_t BgL_oz00_2520)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5372;

				{
					obj_t BgL_auxz00_5373;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5374;

						BgL_tmpz00_5374 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2520));
						BgL_auxz00_5373 = BGL_OBJECT_WIDENING(BgL_tmpz00_5374);
					}
					BgL_auxz00_5372 = ((BgL_tclassz00_bglt) BgL_auxz00_5373);
				}
				return (((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5372))->BgL_holderz00);
			}
		}

	}



/* &<@anonymous:1602> */
	obj_t BGl_z62zc3z04anonymousza31602ze3ze5zzobject_classz00(obj_t
		BgL_envz00_2521)
	{
		{	/* Object/class.scm 34 */
			return BUNSPEC;
		}

	}



/* &lambda1601 */
	obj_t BGl_z62lambda1601z62zzobject_classz00(obj_t BgL_envz00_2522,
		obj_t BgL_oz00_2523, obj_t BgL_vz00_2524)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5380;

				{
					obj_t BgL_auxz00_5381;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5382;

						BgL_tmpz00_5382 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2523));
						BgL_auxz00_5381 = BGL_OBJECT_WIDENING(BgL_tmpz00_5382);
					}
					BgL_auxz00_5380 = ((BgL_tclassz00_bglt) BgL_auxz00_5381);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5380))->BgL_slotsz00) =
					((obj_t) BgL_vz00_2524), BUNSPEC);
			}
		}

	}



/* &lambda1600 */
	obj_t BGl_z62lambda1600z62zzobject_classz00(obj_t BgL_envz00_2525,
		obj_t BgL_oz00_2526)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5388;

				{
					obj_t BgL_auxz00_5389;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5390;

						BgL_tmpz00_5390 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2526));
						BgL_auxz00_5389 = BGL_OBJECT_WIDENING(BgL_tmpz00_5390);
					}
					BgL_auxz00_5388 = ((BgL_tclassz00_bglt) BgL_auxz00_5389);
				}
				return (((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5388))->BgL_slotsz00);
			}
		}

	}



/* &lambda1590 */
	obj_t BGl_z62lambda1590z62zzobject_classz00(obj_t BgL_envz00_2527,
		obj_t BgL_oz00_2528, obj_t BgL_vz00_2529)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5396;

				{
					obj_t BgL_auxz00_5397;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5398;

						BgL_tmpz00_5398 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2528));
						BgL_auxz00_5397 = BGL_OBJECT_WIDENING(BgL_tmpz00_5398);
					}
					BgL_auxz00_5396 = ((BgL_tclassz00_bglt) BgL_auxz00_5397);
				}
				return
					((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5396))->
						BgL_itszd2superzd2) = ((obj_t) BgL_vz00_2529), BUNSPEC);
			}
		}

	}



/* &lambda1589 */
	obj_t BGl_z62lambda1589z62zzobject_classz00(obj_t BgL_envz00_2530,
		obj_t BgL_oz00_2531)
	{
		{	/* Object/class.scm 34 */
			{
				BgL_tclassz00_bglt BgL_auxz00_5404;

				{
					obj_t BgL_auxz00_5405;

					{	/* Object/class.scm 34 */
						BgL_objectz00_bglt BgL_tmpz00_5406;

						BgL_tmpz00_5406 =
							((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_oz00_2531));
						BgL_auxz00_5405 = BGL_OBJECT_WIDENING(BgL_tmpz00_5406);
					}
					BgL_auxz00_5404 = ((BgL_tclassz00_bglt) BgL_auxz00_5405);
				}
				return
					(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5404))->BgL_itszd2superzd2);
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
				BGl_tclassz00zzobject_classz00, BGl_proc2020z00zzobject_classz00,
				BGl_string2021z00zzobject_classz00);
		}

	}



/* &type-occurrence-incr1229 */
	obj_t BGl_z62typezd2occurrencezd2incr1229z62zzobject_classz00(obj_t
		BgL_envz00_2535, obj_t BgL_tz00_2536)
	{
		{	/* Object/class.scm 342 */
			{

				{	/* Object/class.scm 342 */
					obj_t BgL_nextzd2method1228zd2_2695;

					BgL_nextzd2method1228zd2_2695 =
						BGl_findzd2superzd2classzd2methodzd2zz__objectz00(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt) BgL_tz00_2536)),
						BGl_typezd2occurrencezd2incrementz12zd2envzc0zztype_typez00,
						BGl_tclassz00zzobject_classz00);
					PROCEDURE_ENTRY(BgL_nextzd2method1228zd2_2695)
						(BgL_nextzd2method1228zd2_2695,
						((obj_t) ((BgL_typez00_bglt) BgL_tz00_2536)), BEOA);
				}
				{	/* Object/class.scm 345 */
					bool_t BgL_test2296z00_5422;

					{	/* Object/class.scm 345 */
						obj_t BgL_tmpz00_5423;

						{
							BgL_tclassz00_bglt BgL_auxz00_5424;

							{
								obj_t BgL_auxz00_5425;

								{	/* Object/class.scm 345 */
									BgL_objectz00_bglt BgL_tmpz00_5426;

									BgL_tmpz00_5426 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_tz00_2536));
									BgL_auxz00_5425 = BGL_OBJECT_WIDENING(BgL_tmpz00_5426);
								}
								BgL_auxz00_5424 = ((BgL_tclassz00_bglt) BgL_auxz00_5425);
							}
							BgL_tmpz00_5423 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5424))->
								BgL_wideningz00);
						}
						BgL_test2296z00_5422 = CBOOL(BgL_tmpz00_5423);
					}
					if (BgL_test2296z00_5422)
						{	/* Object/class.scm 345 */
							obj_t BgL_arg1841z00_2696;

							{
								BgL_tclassz00_bglt BgL_auxz00_5433;

								{
									obj_t BgL_auxz00_5434;

									{	/* Object/class.scm 345 */
										BgL_objectz00_bglt BgL_tmpz00_5435;

										BgL_tmpz00_5435 =
											((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_tz00_2536));
										BgL_auxz00_5434 = BGL_OBJECT_WIDENING(BgL_tmpz00_5435);
									}
									BgL_auxz00_5433 = ((BgL_tclassz00_bglt) BgL_auxz00_5434);
								}
								BgL_arg1841z00_2696 =
									(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_5433))->
									BgL_itszd2superzd2);
							}
							return
								BGl_typezd2occurrencezd2incrementz12z12zztype_typez00(
								((BgL_typez00_bglt) BgL_arg1841z00_2696));
						}
					else
						{	/* Object/class.scm 345 */
							return BFALSE;
						}
				}
			}
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_classz00()
	{
		{	/* Object/class.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zztype_coercionz00(((long) 116865717),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_toolsz00(((long) 196511052),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 208160767),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 287572811),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2022z00zzobject_classz00));
		}

	}

#ifdef __cplusplus
}
#endif
