/*===========================================================================*/
/*   (Jas/classfile.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/classfile.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_jastypez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}                 *BgL_jastypez00_bglt;

	typedef struct BgL_basicz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
	}               *BgL_basicz00_bglt;

	typedef struct BgL_vectz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_jastypez00_bgl *BgL_typez00;
	}              *BgL_vectz00_bglt;

	typedef struct BgL_jasfunz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		struct BgL_jastypez00_bgl *BgL_tretz00;
		obj_t BgL_targsz00;
	}                *BgL_jasfunz00_bglt;

	typedef struct BgL_classez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_codez00;
		obj_t BgL_vectz00;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_poolz00;
	}                *BgL_classez00_bglt;

	typedef struct BgL_fieldzd2orzd2methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                             *BgL_fieldzd2orzd2methodz00_bglt;

	typedef struct BgL_fieldz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}               *BgL_fieldz00_bglt;

	typedef struct BgL_methodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_flagsz00;
		obj_t BgL_namez00;
		obj_t BgL_ownerz00;
		obj_t BgL_usertypez00;
		obj_t BgL_typez00;
		obj_t BgL_pnamez00;
		obj_t BgL_descriptorz00;
		obj_t BgL_poolz00;
		obj_t BgL_attributesz00;
	}                *BgL_methodz00_bglt;

	typedef struct BgL_attributez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_typez00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_infoz00;
	}                   *BgL_attributez00_bglt;

	typedef struct BgL_classfilez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_currentzd2methodzd2;
		obj_t BgL_globalsz00;
		obj_t BgL_poolz00;
		obj_t BgL_poolzd2siza7ez75;
		obj_t BgL_pooledzd2nameszd2;
		obj_t BgL_flagsz00;
		obj_t BgL_mez00;
		obj_t BgL_superz00;
		obj_t BgL_interfacesz00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_attributesz00;
	}                   *BgL_classfilez00_bglt;


	static obj_t BGl_z62lambda1920z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_classfilez00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2usertypezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2mezd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static BgL_jastypez00_bglt BGl_z62JasTypezd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_basiczd2encodedzd2typez00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_z62lambda1926z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1927z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2descriptorzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	static obj_t BGl_z62classezd2vectzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_basiczd2vectzd2zzjas_classfilez00(BgL_basicz00_bglt);
	static obj_t BGl_z62methodzd2attributeszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62JasTypezd2codezb0zzjas_classfilez00(obj_t, obj_t);
	static BgL_jastypez00_bglt BGl_z62makezd2JasTypezb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62lambda1934z62zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62lambda1936z62zzjas_classfilez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31862ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2methodszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_z62attributezd2siza7ez17zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classfilezd2poolzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2poolzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2targszd2zzjas_classfilez00(BgL_jasfunz00_bglt);
	static obj_t BGl_z62lambda1942z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1943z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1947z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1948z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzf3z91zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t);
	static BgL_vectz00_bglt BGl_z62vectzd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62basiczd2vectzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62lambda1953z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62JasFunzd2tretzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1954z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2ownerzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	static obj_t BGl_z62lambda1958z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1959z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasTypezd2vectzd2setz12z12zzjas_classfilez00(BgL_jastypez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectzd2vectzd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2namezd2zzjas_classfilez00(BgL_methodz00_bglt);
	BGL_EXPORTED_DECL BgL_jasfunz00_bglt
		BGl_makezd2JasFunzd2zzjas_classfilez00(obj_t, obj_t, BgL_jastypez00_bglt,
		obj_t);
	static obj_t BGl_z62lambda1964z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1965z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31938ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62fieldzd2pnamezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32103ze3ze5zzjas_classfilez00(obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2poolzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1971z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1972z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1978z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1979z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62JasTypezd2vectzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2pooledzd2namesz00zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62methodzd2namezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2superzd2zzjas_classfilez00(BgL_classfilez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2flagszd2zzjas_classfilez00(BgL_methodz00_bglt);
	static obj_t BGl_z62lambda1985z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1986z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2flagszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2flagszd2setz12z12zzjas_classfilez00(BgL_classez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2namezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_classfilez00();
	static obj_t BGl_z62lambda1992z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1993z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31973ze3ze5zzjas_classfilez00(obj_t);
	static obj_t
		BGl_z62classfilezd2currentzd2methodzd2setz12za2zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2poolzd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32017ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2flagszd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static obj_t BGl_z62fieldzd2orzd2methodzd2usertypezb0zzjas_classfilez00(obj_t,
		obj_t);
	static long BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_bglt, long,
		obj_t);
	static obj_t BGl_z62methodzd2pnamezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classezd2codezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62classfilezd2interfaceszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62attributezd2infozd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2usertypezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	static obj_t
		BGl_poolzd2getzd2specialz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		long, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62classfilezd2methodszb0zzjas_classfilez00(obj_t, obj_t);
	static BgL_jastypez00_bglt BGl_z62vectzd2typezb0zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2typezd2zzjas_classfilez00(BgL_methodz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32140ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62fieldzd2poolzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2usertypezd2zzjas_classfilez00(BgL_methodz00_bglt);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_methodz00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_z62methodzd2flagszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2descriptorzd2zzjas_classfilez00(BgL_fieldz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_basicz00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_methodzd2initzd2zzjas_classfilez00();
	static obj_t BGl_z62classfilezd2methodszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fieldzd2attributeszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasTypezd2codezd2setz12z12zzjas_classfilez00(BgL_jastypez00_bglt,
		obj_t);
	static obj_t BGl_z62JasFunzd2vectzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2descriptorzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2descriptorzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32126ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62poolzd2intzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzd2namezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectzd2codezd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt, obj_t);
	static BgL_jasfunz00_bglt BGl_z62makezd2JasFunzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt BGl_vectzd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z62zc3z04anonymousza31994ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt BGl_classezd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL BgL_jastypez00_bglt
		BGl_JasFunzd2tretzd2zzjas_classfilez00(BgL_jasfunz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2descriptorzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_jastypez00_bglt
		BGl_vectzd2typezd2zzjas_classfilez00(BgL_vectz00_bglt);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62attributezd2namezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62classfilezd2globalszb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62poolzd2interfacezd2methodz62zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fieldzd2namezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2attributeszd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2attributeszd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt,
		obj_t);
	static obj_t BGl_z62classfilezd2mezb0zzjas_classfilez00(obj_t, obj_t);
	extern obj_t BGl_w2z00zzjas_libz00(int);
	extern obj_t BGl_w4z00zzjas_libz00(long);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2pnamezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_classez00_bglt BGl_z62classezd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32072ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62fieldzd2usertypezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt, float);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2ownerzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2attributeszd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	extern obj_t BGl_w4llongz00zzjas_libz00(BGL_LONGLONG_T);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62fieldzf3z91zzjas_classfilez00(obj_t, obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2attributeszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2poolzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_jasfunz00_bglt BGl_JasFunzd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z62classfilezd2pooledzd2namesz62zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62fieldzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62JasFunzd2targszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2poolzd2setz12z12zzjas_classfilez00(BgL_classez00_bglt, obj_t);
	static obj_t BGl_z62fieldzd2flagszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2namezd2zzjas_classfilez00(BgL_classez00_bglt);
	static obj_t BGl_z62lambda2101z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2102z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2infozd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt,
		obj_t);
	static obj_t BGl_z62lambda2109z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62methodzd2typezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32147ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62poolzd2longzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62poolzd2floatzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62poolzd2stringzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2110z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_vectzf3zf3zzjas_classfilez00(obj_t);
	static BgL_methodz00_bglt BGl_z62declaredzd2methodzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_attributez00_bglt
		BGl_z62attributezd2nilzb0zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2codezd2zzjas_classfilez00(BgL_jasfunz00_bglt);
	static obj_t BGl_z62lambda2117z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2118z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzd2typezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2typezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_methodzf3zf3zzjas_classfilez00(obj_t);
	static BgL_jasfunz00_bglt BGl_z62JasFunzd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62fieldzd2attributeszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62methodzd2pnamezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2uint32zd2zzjas_classfilez00(BgL_classfilez00_bglt, uint32_t);
	static obj_t BGl_z62lambda2124z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2125z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62fieldzd2orzd2methodzd2poolzb0zzjas_classfilez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2currentzd2methodzd2setz12zc0zzjas_classfilez00
		(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62classfilezd2fieldszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	static obj_t BGl_z62fieldzd2orzd2methodzd2ownerzb0zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2131z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2132z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2attributeszd2setz12z12zzjas_classfilez00
		(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62lambda2138z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62JasFunzd2codezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda2139z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2attributeszd2zzjas_classfilez00(BgL_methodz00_bglt);
	static obj_t BGl_z62methodzd2flagszb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classezd2namezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_getzd2vectzd2typez00zzjas_classfilez00(BgL_jastypez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2poolzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	static obj_t BGl_z62lambda2145z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2146z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	BGL_EXPORTED_DEF obj_t BGl_classez00zzjas_classfilez00 = BUNSPEC;
	static BgL_jastypez00_bglt BGl_z62JasFunzd2tretzb0zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62vectzd2codezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62fieldzd2flagszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2namezd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt,
		obj_t);
	static obj_t BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_bglt,
		long, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2globalszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt, int);
	BGL_EXPORTED_DECL int
		BGl_poolzd2uint64zd2zzjas_classfilez00(BgL_classfilez00_bglt, uint64_t);
	static obj_t BGl_z62lambda2153z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2154z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32095ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62basiczd2vectzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2vectzd2zzjas_classfilez00(BgL_jasfunz00_bglt);
	static BgL_classfilez00_bglt
		BGl_z62makezd2classfilezb0zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_classfilez00();
	static obj_t BGl_z62classfilezd2interfaceszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt, long);
	static obj_t BGl_z62methodzd2attributeszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62attributezd2typezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62poolzd2localzd2methodz62zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62classezd2namezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2interfaceszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62fieldzd2typezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectzd2codezd2zzjas_classfilez00(BgL_vectz00_bglt);
	BGL_EXPORTED_DECL BgL_methodz00_bglt BGl_methodzd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2flagszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62JasFunzd2codezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62vectzd2vectzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2int32zd2zzjas_classfilez00(BgL_classfilez00_bglt, int32_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2vectzd2setz12z12zzjas_classfilez00(BgL_classez00_bglt, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_fieldz00zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_z62poolzd2elongzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_vectz00_bglt BGl_z62makezd2vectzb0zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2attributeszd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2namezd2zzjas_classfilez00(BgL_attributez00_bglt);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2ownerzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_fieldz00_bglt BGl_z62declaredzd2fieldzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62poolzd2uint32zb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_basicz00_bglt BGl_z62basiczd2nilzb0zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2orzd2methodz00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL BgL_basicz00_bglt
		BGl_makezd2basiczd2zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62poolzd2methodzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_methodz00_bglt BGl_z62methodzd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62poolzd2int32zb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62attributezd2siza7ezd2setz12zd7zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_attributezf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2tretzd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt,
		BgL_jastypez00_bglt);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2int64zd2zzjas_classfilez00(BgL_classfilez00_bglt, int64_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2methodszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62fieldzd2pnamezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectzd2vectzd2zzjas_classfilez00(BgL_vectz00_bglt);
	static BgL_basicz00_bglt BGl_z62makezd2basiczb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vectzd2vectzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62poolzd2uint64zb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2flagszd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_vectz00_bglt BGl_makezd2vectzd2zzjas_classfilez00(obj_t,
		obj_t, BgL_jastypez00_bglt);
	static obj_t BGl_z62methodzd2ownerzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2currentzd2methodz00zzjas_classfilez00
		(BgL_classfilez00_bglt);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_makezd2attributezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62basiczf3z91zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62JasFunzd2vectzb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62basiczd2codezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2infozd2zzjas_classfilez00(BgL_attributez00_bglt);
	BGL_EXPORTED_DECL BgL_basicz00_bglt BGl_basiczd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z62poolzd2fieldzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_jastypez00_bglt BGl_z62lambda1833z62zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_jastypez00_bglt BGl_z62lambda1836z62zzjas_classfilez00(obj_t);
	static obj_t BGl_z62attributezf3z91zzjas_classfilez00(obj_t, obj_t);
	static BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62fieldzd2orzd2methodzd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62poolzd2int64zb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2namezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	static obj_t BGl_z62classfilezd2globalszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1843z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1844z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1849z62zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2fieldszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t
		BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_fieldzd2orzd2methodz00_bglt, long);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2typezd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2typezd2zzjas_classfilez00(BgL_attributez00_bglt);
	static obj_t BGl_z62lambda1850z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_basicz00_bglt BGl_z62lambda1858z62zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62classfilezd2poolzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2globalszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_attributez00zzjas_classfilez00 = BUNSPEC;
	static BgL_basicz00_bglt BGl_z62lambda1860z62zzjas_classfilez00(obj_t);
	static obj_t
		BGl_z62classfilezd2pooledzd2nameszd2setz12za2zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzjas_classfilez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31928ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2descriptorzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt, double);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2codezd2setz12z12zzjas_classfilez00(BgL_classez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2codezd2zzjas_classfilez00(BgL_classez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32004ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2namezd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static BgL_vectz00_bglt BGl_z62lambda1871z62zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t);
	static BgL_vectz00_bglt BGl_z62lambda1873z62zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_jastypez00_bglt);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2namezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_vectzd2typezd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt,
		BgL_jastypez00_bglt);
	static BgL_jastypez00_bglt BGl_z62lambda1879z62zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62poolzd2classzd2byzd2namezb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_classfilezd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2poolzd2siza7ezd2setz12z67zzjas_classfilez00
		(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62lambda1880z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzd2usertypezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2ownerzd2zzjas_classfilez00(BgL_methodz00_bglt);
	static BgL_jasfunz00_bglt BGl_z62lambda1886z62zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2siza7ezd2setz12zb5zzjas_classfilez00(BgL_attributez00_bglt,
		obj_t);
	static BgL_jasfunz00_bglt BGl_z62lambda1888z62zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2flagszd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	static obj_t BGl_z62classfilezd2fieldszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzjas_classfilez00();
	static obj_t BGl_z62zc3z04anonymousza32111ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62fieldzd2namezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31890ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	static BgL_jastypez00_bglt BGl_z62lambda1894z62zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2attributeszd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static obj_t BGl_z62lambda1895z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_fieldzf3zf3zzjas_classfilez00(obj_t);
	static obj_t BGl_z62lambda1899z62zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2vectzd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2pnamezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_makezd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2usertypezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt,
		obj_t);
	static obj_t BGl_z62methodzd2descriptorzb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62classfilezd2mezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2ownerzd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static obj_t BGl_z62classfilezd2superzb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62vectzd2codezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2pnamezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	static obj_t BGl_genericzd2initzd2zzjas_classfilez00();
	static obj_t BGl_z62JasFunzf3z91zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2vectzd2zzjas_classfilez00(BgL_classez00_bglt);
	static obj_t BGl_z62classezf3z91zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_attributezd2siza7ez75zzjas_classfilez00(BgL_attributez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2poolzd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62poolzd2classzd2byzd2reftypezb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62methodzd2poolzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62JasFunzd2targszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31966ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_JasFunz00zzjas_classfilez00 = BUNSPEC;
	static BgL_jastypez00_bglt BGl_z62aszd2typezb0zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2poolzd2zzjas_classfilez00(BgL_methodz00_bglt);
	static obj_t BGl_z62fieldzd2orzd2methodzf3z91zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2poolzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2typezd2zzjas_classfilez00(BgL_fieldz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2poolzd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_z62fieldzd2ownerzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62JasTypezf3z91zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62fieldzd2orzd2methodzd2pnamezb0zzjas_classfilez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62methodzd2usertypezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62poolzd2doublezb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classezd2codezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt
		BGl_makezd2fieldzd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2typezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32133ze3ze5zzjas_classfilez00(obj_t);
	static obj_t BGl_z62fieldzd2typezb0zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00
		(BgL_classfilez00_bglt, BgL_methodz00_bglt, long);
	static obj_t BGl_z62jaszd2warningzb0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62aszd2assignzb0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32029ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_JasTypez00zzjas_classfilez00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_methodz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2pnamezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2interfaceszd2setz12z12zzjas_classfilez00
		(BgL_classfilez00_bglt, obj_t);
	static BgL_fieldz00_bglt BGl_z62makezd2fieldzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2flagszd2zzjas_classfilez00(BgL_classez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32119ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2fieldszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31987ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2codezd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2namezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	static BgL_methodz00_bglt BGl_z62makezd2methodzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62fieldzd2orzd2methodzd2namezb0zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2typezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62fieldzd2ownerzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2namezd2setz12z12zzjas_classfilez00(BgL_classez00_bglt, obj_t);
	static BgL_fieldz00_bglt BGl_z62lambda2000z62zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_fieldz00_bglt BGl_z62lambda2002z62zzjas_classfilez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32064ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62classfilezd2attributeszb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classfilezd2superzd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2flagszd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	static obj_t BGl_z62classezd2vectzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_z62JasTypezd2vectzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static BgL_methodz00_bglt BGl_z62lambda2012z62zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_methodz00_bglt BGl_z62lambda2014z62zzjas_classfilez00(obj_t);
	static obj_t BGl_z62typezd2siza7ez17zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62fieldzd2poolzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32081ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2namezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	static obj_t
		BGl_z62classfilezd2attributeszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_classez00_bglt
		BGl_makezd2classezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_attributez00_bglt BGl_z62lambda2024z62zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62methodzd2poolzb0zzjas_classfilez00(obj_t, obj_t);
	static BgL_attributez00_bglt BGl_z62lambda2027z62zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2attributeszd2zzjas_classfilez00(BgL_classfilez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2superzd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza32155ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_z62fieldzd2descriptorzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2flagszd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	BGL_EXPORTED_DECL BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	static obj_t BGl_z62lambda2035z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2036z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classfilezd2poolzd2siza7ezc5zzjas_classfilez00(obj_t,
		obj_t);
	static BgL_fieldz00_bglt BGl_z62fieldzd2nilzb0zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2ownerzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2usertypezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	static obj_t BGl_z62methodzd2ownerzb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasTypezd2codezd2zzjas_classfilez00(BgL_jastypez00_bglt);
	BGL_EXPORTED_DECL BgL_jastypez00_bglt
		BGl_makezd2JasTypezd2zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2040z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2041z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2046z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2047z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classezd2flagszd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_w4elongz00zzjas_libz00(long);
	BGL_EXPORTED_DECL bool_t BGl_JasTypezf3zf3zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzjas_classfilez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_EXPORTED_DECL int
		BGl_typezd2siza7ez75zzjas_classfilez00(BgL_jastypez00_bglt);
	static obj_t BGl_z62lambda2051z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2052z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_basiczf3zf3zzjas_classfilez00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_z62fieldzd2orzd2methodzd2typezb0zzjas_classfilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BGL_LONGLONG_T);
	static obj_t BGl_z62classfilezd2currentzd2methodz62zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62attributezd2namezb0zzjas_classfilez00(obj_t, obj_t);
	static BgL_classfilez00_bglt BGl_z62lambda2060z62zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static BgL_classfilez00_bglt BGl_z62lambda2062z62zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2usertypezd2zzjas_classfilez00(BgL_fieldz00_bglt);
	static obj_t BGl_z62jaszd2errorzb0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classezd2poolzd2zzjas_classfilez00(BgL_classez00_bglt);
	static obj_t BGl_z62fieldzd2orzd2methodzd2flagszb0zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2070z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2071z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62vectzf3z91zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_fieldz00_bglt BGl_fieldzd2nilzd2zzjas_classfilez00();
	static obj_t BGl_cnstzd2initzd2zzjas_classfilez00();
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2typezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt);
	static obj_t BGl_z62lambda2079z62zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_basiczd2vectzd2setz12z12zzjas_classfilez00(BgL_basicz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_JasFunzf3zf3zzjas_classfilez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_classfilez00();
	static obj_t BGl_z62classezd2poolzd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62poolzd2llongzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda2080z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_classfilez00();
	BGL_EXPORTED_DECL bool_t BGl_classezf3zf3zzjas_classfilez00(obj_t);
	static obj_t BGl_z62lambda2086z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2087z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32088ze3ze5zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasTypezd2vectzd2zzjas_classfilez00(BgL_jastypez00_bglt);
	static BgL_classez00_bglt BGl_z62declaredzd2classzb0zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2pnamezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	static BgL_classfilez00_bglt
		BGl_z62classfilezd2nilzb0zzjas_classfilez00(obj_t);
	static obj_t BGl_z62JasTypezd2codezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_jastypez00_bglt
		BGl_JasTypezd2nilzd2zzjas_classfilez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzjas_classfilez00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda2093z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda2094z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62fieldzd2usertypezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62makezd2fieldzd2orzd2methodzb0zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jastypez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2orzd2methodzd2ownerzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt, obj_t);
	static BgL_attributez00_bglt
		BGl_z62makezd2attributezb0zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_vectz00zzjas_classfilez00 = BUNSPEC;
	static BgL_classez00_bglt BGl_z62makezd2classezb0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2typezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_z62attributezd2infozb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classfilezd2flagszd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		BgL_classez00_bglt);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_jasfunz00_bglt
		BGl_aszd2funtypezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t, obj_t);
	static obj_t BGl_z62poolzd2namezb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2poolzd2siza7eza7zzjas_classfilez00(BgL_classfilez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2pooledzd2nameszd2setz12zc0zzjas_classfilez00
		(BgL_classfilez00_bglt, obj_t);
	static obj_t
		BGl_z62classfilezd2poolzd2siza7ezd2setz12z05zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2descriptorzd2zzjas_classfilez00(BgL_methodz00_bglt);
	BGL_EXPORTED_DECL BgL_fieldzd2orzd2methodz00_bglt
		BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2mezd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	static obj_t BGl_z62classfilezd2flagszb0zzjas_classfilez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_methodzd2pnamezd2zzjas_classfilez00(BgL_methodz00_bglt);
	static obj_t BGl_z62attributezd2typezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classfilezd2flagszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62classezd2flagszb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62poolzd2classzb0zzjas_classfilez00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_basiczd2codezd2zzjas_classfilez00(BgL_basicz00_bglt);
	static BgL_jasfunz00_bglt BGl_z62aszd2funtypezb0zzjas_classfilez00(obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_JasFunzd2targszd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_fieldzd2pnamezd2zzjas_classfilez00(BgL_fieldz00_bglt);
	BGL_EXPORTED_DECL BgL_classfilez00_bglt
		BGl_makezd2classfilezd2zzjas_classfilez00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2attributeszb0zzjas_classfilez00(obj_t, obj_t);
	extern obj_t BGl_f2z00zzjas_libz00(float);
	static obj_t BGl_pourquoi_tant_de_hainez00zzjas_classfilez00 = BUNSPEC;
	extern obj_t BGl_f4z00zzjas_libz00(double);
	BGL_EXPORTED_DECL bool_t BGl_classfilezf3zf3zzjas_classfilez00(obj_t);
	static obj_t
		BGl_z62fieldzd2orzd2methodzd2usertypezd2setz12z70zzjas_classfilez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62vectzd2typezd2setz12z70zzjas_classfilez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL int
		BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt, obj_t);
	BGL_EXPORTED_DECL BgL_attributez00_bglt
		BGl_attributezd2nilzd2zzjas_classfilez00();
	static obj_t BGl_z62classezd2poolzb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62basiczd2codezb0zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1900z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static BgL_classez00_bglt BGl_z62lambda1906z62zzjas_classfilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_classez00_bglt BGl_z62lambda1908z62zzjas_classfilez00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_basiczd2codezd2setz12z12zzjas_classfilez00(BgL_basicz00_bglt, obj_t);
	static obj_t BGl_z62lambda1914z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1915z62zzjas_classfilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1919z62zzjas_classfilez00(obj_t, obj_t);
	static obj_t BGl_z62classfilezf3z91zzjas_classfilez00(obj_t, obj_t);
	static obj_t __cnst[51];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2superzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2s2397z00,
		BGl_z62classfilezd2superzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762vectza7d2vectza7b2398za7,
		BGl_z62vectzd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2interfacezd2methodzd2envzd2zzjas_classfilez00,
		BgL_bgl_za762poolza7d2interf2399z00,
		BGl_z62poolzd2interfacezd2methodz62zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2pooledzd2nameszd2envzd2zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2400z00,
		BGl_z62classfilezd2pooledzd2namesz62zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_basiczd2vectzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762basicza7d2vectza72401za7,
		BGl_z62basiczd2vectzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2n2402z00,
		BGl_z62attributezd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2flagszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2f2403z00,
		BGl_z62classfilezd2flagszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2poolzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2poolza72404za7,
		BGl_z62fieldzd2poolzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczd2codezd2envz00zzjas_classfilez00,
		BgL_bgl_za762basicza7d2codeza72405za7,
		BGl_z62basiczd2codezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2attributeszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2a2406z00,
		BGl_z62classfilezd2attributeszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2descriptorzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22407za7,
		BGl_z62fieldzd2orzd2methodzd2descriptorzd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasFunzd2vectzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2vect2408z00,
		BGl_z62JasFunzd2vectzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2fieldzd2orzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2fieldza72409za7,
		BGl_z62makezd2fieldzd2orzd2methodzb0zzjas_classfilez00, 0L, BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2fieldza72410za7,
		BGl_z62makezd2fieldzb0zzjas_classfilez00, 0L, BUNSPEC, 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762basicza7d2nilza7b2411za7,
		BGl_z62basiczd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2namezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22412za7,
		BGl_z62fieldzd2orzd2methodzd2namezd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22413za7,
		BGl_z62fieldzd2orzd2methodzd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2classzd2byzd2reftypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2classza72414za7,
		BGl_z62poolzd2classzd2byzd2reftypezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasTypezd2vectzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jastypeza7d2vec2415z00,
		BGl_z62JasTypezd2vectzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2warningzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasza7d2warning2416z00,
		BGl_z62jaszd2warningzb0zzjas_classfilez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2pnamezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2pname2417z00,
		BGl_z62fieldzd2pnamezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2descriptorzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2desc2418z00,
		BGl_z62methodzd2descriptorzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22419za7,
		BGl_z62fieldzd2orzd2methodzd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2attributeszd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2attr2420z00,
		BGl_z62methodzd2attributeszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762attributeza7f3za72421za7,
		BGl_z62attributezf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2usertypezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22422za7,
		BGl_z62fieldzd2orzd2methodzd2usertypezd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2275z00zzjas_classfilez00,
		BgL_bgl_za762lambda1844za7622423z00, BGl_z62lambda1844z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2276z00zzjas_classfilez00,
		BgL_bgl_za762lambda1843za7622424z00, BGl_z62lambda1843z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2277z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2425za7,
		BGl_z62zc3z04anonymousza31851ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2278z00zzjas_classfilez00,
		BgL_bgl_za762lambda1850za7622426z00, BGl_z62lambda1850z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2279z00zzjas_classfilez00,
		BgL_bgl_za762lambda1849za7622427z00, BGl_z62lambda1849z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2funtypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762asza7d2funtypeza72428za7,
		BGl_z62aszd2funtypezb0zzjas_classfilez00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classezd2vectzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classeza7d2vect2429z00,
		BGl_z62classezd2vectzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2usertypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22430za7,
		BGl_z62fieldzd2orzd2methodzd2usertypezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2doublezd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2double2431z00,
		BGl_z62poolzd2doublezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2280z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2432za7,
		BGl_z62zc3z04anonymousza31839ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2attributeszd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22433za7,
		BGl_z62fieldzd2orzd2methodzd2attributeszb0zzjas_classfilez00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2281z00zzjas_classfilez00,
		BgL_bgl_za762lambda1836za7622434z00, BGl_z62lambda1836z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2282z00zzjas_classfilez00,
		BgL_bgl_za762lambda1833za7622435z00, BGl_z62lambda1833z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2283z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2436za7,
		BGl_z62zc3z04anonymousza31862ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2284z00zzjas_classfilez00,
		BgL_bgl_za762lambda1860za7622437z00, BGl_z62lambda1860z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2285z00zzjas_classfilez00,
		BgL_bgl_za762lambda1858za7622438z00, BGl_z62lambda1858z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2286z00zzjas_classfilez00,
		BgL_bgl_za762lambda1880za7622439z00, BGl_z62lambda1880z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2287z00zzjas_classfilez00,
		BgL_bgl_za762lambda1879za7622440z00, BGl_z62lambda1879z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2288z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2441za7,
		BGl_z62zc3z04anonymousza31875ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2289z00zzjas_classfilez00,
		BgL_bgl_za762lambda1873za7622442z00, BGl_z62lambda1873z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2nameza72443za7,
		BGl_z62fieldzd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2290z00zzjas_classfilez00,
		BgL_bgl_za762lambda1871za7622444z00, BGl_z62lambda1871z62zzjas_classfilez00,
		0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2291z00zzjas_classfilez00,
		BgL_bgl_za762lambda1895za7622445z00, BGl_z62lambda1895z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2292z00zzjas_classfilez00,
		BgL_bgl_za762lambda1894za7622446z00, BGl_z62lambda1894z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2293z00zzjas_classfilez00,
		BgL_bgl_za762lambda1900za7622447z00, BGl_z62lambda1900z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2294z00zzjas_classfilez00,
		BgL_bgl_za762lambda1899za7622448z00, BGl_z62lambda1899z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2295z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2449za7,
		BGl_z62zc3z04anonymousza31890ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2296z00zzjas_classfilez00,
		BgL_bgl_za762lambda1888za7622450z00, BGl_z62lambda1888z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2297z00zzjas_classfilez00,
		BgL_bgl_za762lambda1886za7622451z00, BGl_z62lambda1886z62zzjas_classfilez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2298z00zzjas_classfilez00,
		BgL_bgl_za762lambda1915za7622452z00, BGl_z62lambda1915z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2299z00zzjas_classfilez00,
		BgL_bgl_za762lambda1914za7622453z00, BGl_z62lambda1914z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2nilza72454za7,
		BGl_z62JasFunzd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2localzd2methodzd2envzd2zzjas_classfilez00,
		BgL_bgl_za762poolza7d2localza72455za7,
		BGl_z62poolzd2localzd2methodz62zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2t2456z00,
		BGl_z62attributezd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2390z00zzjas_classfilez00,
		BgL_bgl_string2390za700za7za7j2457za7, "", 0);
	      DEFINE_STRING(BGl_string2391z00zzjas_classfilez00,
		BgL_bgl_string2391za700za7za7j2458za7, "jas_classfile", 13);
	      DEFINE_STRING(BGl_string2392z00zzjas_classfilez00,
		BgL_bgl_string2392za700za7za7j2459za7,
		"as classfile methods fields interfaces super me pooled-names pool-size globals current-method attribute info size method field field-or-method attributes descriptor pname usertype owner classe pool name flags JasFun targs tret type basic jas_classfile JasType obj vect bstring code (5 6) function vector jas-global-value (jas-error classfile msg arg) double float long int short byte char boolean void ",
		402);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_attributezd2infozd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2i2460z00,
		BGl_z62attributezd2infozd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2poolzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22461za7,
		BGl_z62fieldzd2orzd2methodzd2poolzd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2typezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2typeza72462za7,
		BGl_z62fieldzd2typezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2classzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2classza72463za7,
		BGl_z62poolzd2classzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2descriptorzd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2desc2464z00,
		BGl_z62methodzd2descriptorzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2currentzd2methodzd2envzd2zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2c2465z00,
		BGl_z62classfilezd2currentzd2methodz62zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2codezd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2code2466z00,
		BGl_z62classezd2codezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2vect2467z00,
		BGl_z62JasFunzd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasTypezf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762jastypeza7f3za7912468za7,
		BGl_z62JasTypezf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2ownerzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22469za7,
		BGl_z62fieldzd2orzd2methodzd2ownerzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectzd2vectzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762vectza7d2vectza7d2470za7,
		BGl_z62vectzd2vectzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2usertypezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2usert2471z00,
		BGl_z62fieldzd2usertypezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2descriptorzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22472za7,
		BGl_z62fieldzd2orzd2methodzd2descriptorzb0zzjas_classfilez00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2fieldszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2f2473z00,
		BGl_z62classfilezd2fieldszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2interfaceszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2i2474z00,
		BGl_z62classfilezd2interfaceszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2poolzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22475za7,
		BGl_z62fieldzd2orzd2methodzd2poolzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2longzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2longza7b2476za7,
		BGl_z62poolzd2longzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762fieldza7f3za791za7za72477za7,
		BGl_z62fieldzf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22478za7,
		BGl_z62fieldzd2orzd2methodzd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2flagszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2flag2479z00,
		BGl_z62methodzd2flagszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2flagszd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2flag2480z00,
		BGl_z62methodzd2flagszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasTypezd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jastypeza7d2vec2481z00,
		BGl_z62JasTypezd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2method2482z00,
		BGl_z62poolzd2methodzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2poolzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2poolza72483za7,
		BGl_z62fieldzd2poolzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2descriptorzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2descr2484z00,
		BGl_z62fieldzd2descriptorzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2flagszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22485za7,
		BGl_z62fieldzd2orzd2methodzd2flagszd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2name2486z00,
		BGl_z62classezd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2interfaceszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2i2487z00,
		BGl_z62classfilezd2interfaceszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2typeza72488za7,
		BGl_z62fieldzd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2mezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2m2489z00,
		BGl_z62classfilezd2mezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2int32zd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2int32za72490za7,
		BGl_z62poolzd2int32zb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2typezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22491za7,
		BGl_z62fieldzd2orzd2methodzd2typezd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2pnamezd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2pnam2492z00,
		BGl_z62methodzd2pnamezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasTypezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jastypeza7d2nil2493z00,
		BGl_z62JasTypezd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasFunzd2targszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2targ2494z00,
		BGl_z62JasFunzd2targszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762basicza7f3za791za7za72495za7,
		BGl_z62basiczf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2nilza72496za7,
		BGl_z62classezd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declaredzd2classzd2envz00zzjas_classfilez00,
		BgL_bgl_za762declaredza7d2cl2497z00,
		BGl_z62declaredzd2classzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2methodszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2m2498z00,
		BGl_z62classfilezd2methodszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declaredzd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl_za762declaredza7d2me2499z00,
		BGl_z62declaredzd2methodzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classezd2namezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classeza7d2name2500z00,
		BGl_z62classezd2namezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2n2501z00,
		BGl_z62classfilezd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_attributezd2siza7ezd2setz12zd2envz67zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2s2502z00,
		BGl_z62attributezd2siza7ezd2setz12zd7zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2usertypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2usert2503z00,
		BGl_z62fieldzd2usertypezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_poolzd2classzd2byzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2classza72504za7,
		BGl_z62poolzd2classzd2byzd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2poolzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2pool2505z00,
		BGl_z62classezd2poolzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2globalszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2g2506z00,
		BGl_z62classfilezd2globalszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2pooledzd2nameszd2setz12zd2envz12zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2507z00,
		BGl_z62classfilezd2pooledzd2nameszd2setz12za2zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2ownerzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2owne2508z00,
		BGl_z62methodzd2ownerzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22509za7,
		BGl_z62fieldzd2orzd2methodzf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2name2510z00,
		BGl_z62methodzd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2flagszd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2flags2511z00,
		BGl_z62fieldzd2flagszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2ownerzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22512za7,
		BGl_z62fieldzd2orzd2methodzd2ownerzd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classezd2poolzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classeza7d2pool2513z00,
		BGl_z62classezd2poolzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2llongzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2llongza72514za7,
		BGl_z62poolzd2llongzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classfilezd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2classf2515z00,
		BGl_z62makezd2classfilezb0zzjas_classfilez00, 0L, BUNSPEC, 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2flagszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2flag2516z00,
		BGl_z62classezd2flagszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzd2codezd2envz00zzjas_classfilez00,
		BgL_bgl_za762vectza7d2codeza7b2517za7,
		BGl_z62vectzd2codezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2stringzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2string2518z00,
		BGl_z62poolzd2stringzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2uint32zd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2uint322519z00,
		BGl_z62poolzd2uint32zb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classezd2flagszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classeza7d2flag2520z00,
		BGl_z62classezd2flagszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2floatzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2floatza72521za7,
		BGl_z62poolzd2floatzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2namezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2name2522z00,
		BGl_z62methodzd2namezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2300z00zzjas_classfilez00,
		BgL_bgl_za762lambda1920za7622523z00, BGl_z62lambda1920z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2301z00zzjas_classfilez00,
		BgL_bgl_za762lambda1919za7622524z00, BGl_z62lambda1919z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2302z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2525za7,
		BGl_z62zc3z04anonymousza31928ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2303z00zzjas_classfilez00,
		BgL_bgl_za762lambda1927za7622526z00, BGl_z62lambda1927z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762asza7d2typeza7b0za72527z00,
		BGl_z62aszd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2304z00zzjas_classfilez00,
		BgL_bgl_za762lambda1926za7622528z00, BGl_z62lambda1926z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_basiczd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762basicza7d2vectza72529za7,
		BGl_z62basiczd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2305z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2530za7,
		BGl_z62zc3z04anonymousza31910ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2306z00zzjas_classfilez00,
		BgL_bgl_za762lambda1908za7622531z00, BGl_z62lambda1908z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2pnamezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2pname2532z00,
		BGl_z62fieldzd2pnamezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2307z00zzjas_classfilez00,
		BgL_bgl_za762lambda1906za7622533z00, BGl_z62lambda1906z62zzjas_classfilez00,
		0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2308z00zzjas_classfilez00,
		BgL_bgl_za762lambda1943za7622534z00, BGl_z62lambda1943z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2309z00zzjas_classfilez00,
		BgL_bgl_za762lambda1942za7622535z00, BGl_z62lambda1942z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2methodszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2m2536z00,
		BGl_z62classfilezd2methodszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2310z00zzjas_classfilez00,
		BgL_bgl_za762lambda1948za7622537z00, BGl_z62lambda1948z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2attributeszd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2attri2538z00,
		BGl_z62fieldzd2attributeszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2311z00zzjas_classfilez00,
		BgL_bgl_za762lambda1947za7622539z00, BGl_z62lambda1947z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2312z00zzjas_classfilez00,
		BgL_bgl_za762lambda1954za7622540z00, BGl_z62lambda1954z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2poolzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2541z00,
		BGl_z62classfilezd2poolzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2313z00zzjas_classfilez00,
		BgL_bgl_za762lambda1953za7622542z00, BGl_z62lambda1953z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2314z00zzjas_classfilez00,
		BgL_bgl_za762lambda1959za7622543z00, BGl_z62lambda1959z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2315z00zzjas_classfilez00,
		BgL_bgl_za762lambda1958za7622544z00, BGl_z62lambda1958z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2316z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2545za7,
		BGl_z62zc3z04anonymousza31966ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2317z00zzjas_classfilez00,
		BgL_bgl_za762lambda1965za7622546z00, BGl_z62lambda1965z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_attributezd2namezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2n2547z00,
		BGl_z62attributezd2namezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2318z00zzjas_classfilez00,
		BgL_bgl_za762lambda1964za7622548z00, BGl_z62lambda1964z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2319z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2549za7,
		BGl_z62zc3z04anonymousza31973ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2nilza7b2550za7,
		BGl_z62fieldzd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2usertypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2user2551z00,
		BGl_z62methodzd2usertypezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2320z00zzjas_classfilez00,
		BgL_bgl_za762lambda1972za7622552z00, BGl_z62lambda1972z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2321z00zzjas_classfilez00,
		BgL_bgl_za762lambda1971za7622553z00, BGl_z62lambda1971z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2322z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2554za7,
		BGl_z62zc3z04anonymousza31980ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2323z00zzjas_classfilez00,
		BgL_bgl_za762lambda1979za7622555z00, BGl_z62lambda1979z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2324z00zzjas_classfilez00,
		BgL_bgl_za762lambda1978za7622556z00, BGl_z62lambda1978z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2325z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2557za7,
		BGl_z62zc3z04anonymousza31987ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2326z00zzjas_classfilez00,
		BgL_bgl_za762lambda1986za7622558z00, BGl_z62lambda1986z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2327z00zzjas_classfilez00,
		BgL_bgl_za762lambda1985za7622559z00, BGl_z62lambda1985z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2328z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2560za7,
		BGl_z62zc3z04anonymousza31994ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2329z00zzjas_classfilez00,
		BgL_bgl_za762lambda1993za7622561z00, BGl_z62lambda1993z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2254z00zzjas_classfilez00,
		BgL_bgl_string2254za700za7za7j2562za7, "V", 1);
	      DEFINE_STRING(BGl_string2255z00zzjas_classfilez00,
		BgL_bgl_string2255za700za7za7j2563za7, "Z", 1);
	      DEFINE_STRING(BGl_string2256z00zzjas_classfilez00,
		BgL_bgl_string2256za700za7za7j2564za7, "C", 1);
	      DEFINE_STRING(BGl_string2257z00zzjas_classfilez00,
		BgL_bgl_string2257za700za7za7j2565za7, "B", 1);
	      DEFINE_STRING(BGl_string2258z00zzjas_classfilez00,
		BgL_bgl_string2258za700za7za7j2566za7, "S", 1);
	      DEFINE_STRING(BGl_string2259z00zzjas_classfilez00,
		BgL_bgl_string2259za700za7za7j2567za7, "I", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2330z00zzjas_classfilez00,
		BgL_bgl_za762lambda1992za7622568z00, BGl_z62lambda1992z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2331z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2569za7,
		BGl_z62zc3z04anonymousza31938ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2332z00zzjas_classfilez00,
		BgL_bgl_za762lambda1936za7622570z00, BGl_z62lambda1936z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2333z00zzjas_classfilez00,
		BgL_bgl_za762lambda1934za7622571z00, BGl_z62lambda1934z62zzjas_classfilez00,
		0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2attributeszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22572za7,
		BGl_z62fieldzd2orzd2methodzd2attributeszd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2334z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2573za7,
		BGl_z62zc3z04anonymousza32004ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2335z00zzjas_classfilez00,
		BgL_bgl_za762lambda2002za7622574z00, BGl_z62lambda2002z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_aszd2assignzd2envz00zzjas_classfilez00,
		BgL_bgl_za762asza7d2assignza7b2575za7,
		BGl_z62aszd2assignzb0zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2336z00zzjas_classfilez00,
		BgL_bgl_za762lambda2000za7622576z00, BGl_z62lambda2000z62zzjas_classfilez00,
		0L, BUNSPEC, 9);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2337z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2577za7,
		BGl_z62zc3z04anonymousza32017ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2260z00zzjas_classfilez00,
		BgL_bgl_string2260za700za7za7j2578za7, "J", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2338z00zzjas_classfilez00,
		BgL_bgl_za762lambda2014za7622579z00, BGl_z62lambda2014z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2261z00zzjas_classfilez00,
		BgL_bgl_string2261za700za7za7j2580za7, "F", 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2339z00zzjas_classfilez00,
		BgL_bgl_za762lambda2012za7622581z00, BGl_z62lambda2012z62zzjas_classfilez00,
		0L, BUNSPEC, 9);
	      DEFINE_STRING(BGl_string2262z00zzjas_classfilez00,
		BgL_bgl_string2262za700za7za7j2582za7, "D", 1);
	      DEFINE_STRING(BGl_string2263z00zzjas_classfilez00,
		BgL_bgl_string2263za700za7za7j2583za7, "[B", 2);
	      DEFINE_STRING(BGl_string2264z00zzjas_classfilez00,
		BgL_bgl_string2264za700za7za7j2584za7, " WARNING ** : ", 14);
	      DEFINE_STRING(BGl_string2265z00zzjas_classfilez00,
		BgL_bgl_string2265za700za7za7j2585za7, " ", 1);
	      DEFINE_STRING(BGl_string2266z00zzjas_classfilez00,
		BgL_bgl_string2266za700za7za7j2586za7, "bad type", 8);
	      DEFINE_STRING(BGl_string2267z00zzjas_classfilez00,
		BgL_bgl_string2267za700za7za7j2587za7, "[", 1);
	      DEFINE_STRING(BGl_string2268z00zzjas_classfilez00,
		BgL_bgl_string2268za700za7za7j2588za7, ")", 1);
	      DEFINE_STRING(BGl_string2269z00zzjas_classfilez00,
		BgL_bgl_string2269za700za7za7j2589za7, "(", 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2ownerzd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2owne2590z00,
		BGl_z62methodzd2ownerzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2elongzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2elongza72591za7,
		BGl_z62poolzd2elongzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2340z00zzjas_classfilez00,
		BgL_bgl_za762lambda2036za7622592z00, BGl_z62lambda2036z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2341z00zzjas_classfilez00,
		BgL_bgl_za762lambda2035za7622593z00, BGl_z62lambda2035z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2342z00zzjas_classfilez00,
		BgL_bgl_za762lambda2041za7622594z00, BGl_z62lambda2041z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2343z00zzjas_classfilez00,
		BgL_bgl_za762lambda2040za7622595z00, BGl_z62lambda2040z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2344z00zzjas_classfilez00,
		BgL_bgl_za762lambda2047za7622596z00, BGl_z62lambda2047z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2345z00zzjas_classfilez00,
		BgL_bgl_za762lambda2046za7622597z00, BGl_z62lambda2046z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2346z00zzjas_classfilez00,
		BgL_bgl_za762lambda2052za7622598z00, BGl_z62lambda2052z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2classezd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2classe2599z00,
		BGl_z62makezd2classezb0zzjas_classfilez00, 0L, BUNSPEC, 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2347z00zzjas_classfilez00,
		BgL_bgl_za762lambda2051za7622600z00, BGl_z62lambda2051z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2270z00zzjas_classfilez00,
		BgL_bgl_string2270za700za7za7j2601za7, "redefinition of global", 22);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2348z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2602za7,
		BGl_z62zc3z04anonymousza32029ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2271z00zzjas_classfilez00,
		BgL_bgl_string2271za700za7za7j2603za7, "undefined global name", 21);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2poolzd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2pool2604z00,
		BGl_z62methodzd2poolzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2349z00zzjas_classfilez00,
		BgL_bgl_za762lambda2027za7622605z00, BGl_z62lambda2027z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2272z00zzjas_classfilez00,
		BgL_bgl_string2272za700za7za7j2606za7, "not a class", 11);
	      DEFINE_STRING(BGl_string2273z00zzjas_classfilez00,
		BgL_bgl_string2273za700za7za7j2607za7, "not a field", 11);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2fieldza72608za7,
		BGl_z62poolzd2fieldzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2274z00zzjas_classfilez00,
		BgL_bgl_string2274za700za7za7j2609za7, "not a method", 12);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2350z00zzjas_classfilez00,
		BgL_bgl_za762lambda2024za7622610z00, BGl_z62lambda2024z62zzjas_classfilez00,
		0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2351z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2611za7,
		BGl_z62zc3z04anonymousza32072ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2352z00zzjas_classfilez00,
		BgL_bgl_za762lambda2071za7622612z00, BGl_z62lambda2071z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2353z00zzjas_classfilez00,
		BgL_bgl_za762lambda2070za7622613z00, BGl_z62lambda2070z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2354z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2614za7,
		BGl_z62zc3z04anonymousza32081ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2355z00zzjas_classfilez00,
		BgL_bgl_za762lambda2080za7622615z00, BGl_z62lambda2080z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2356z00zzjas_classfilez00,
		BgL_bgl_za762lambda2079za7622616z00, BGl_z62lambda2079z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2poolzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2pool2617z00,
		BGl_z62methodzd2poolzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2357z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2618za7,
		BGl_z62zc3z04anonymousza32088ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2358z00zzjas_classfilez00,
		BgL_bgl_za762lambda2087za7622619z00, BGl_z62lambda2087z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2359z00zzjas_classfilez00,
		BgL_bgl_za762lambda2086za7622620z00, BGl_z62lambda2086z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2type2621z00,
		BGl_z62methodzd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2usertypezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2user2622z00,
		BGl_z62methodzd2usertypezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2attributeszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2attr2623z00,
		BGl_z62methodzd2attributeszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2pnamezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2pnam2624z00,
		BGl_z62methodzd2pnamezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2360z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2625za7,
		BGl_z62zc3z04anonymousza32095ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2361z00zzjas_classfilez00,
		BgL_bgl_za762lambda2094za7622626z00, BGl_z62lambda2094z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2362z00zzjas_classfilez00,
		BgL_bgl_za762lambda2093za7622627z00, BGl_z62lambda2093z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2363z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2628za7,
		BGl_z62zc3z04anonymousza32103ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2364z00zzjas_classfilez00,
		BgL_bgl_za762lambda2102za7622629z00, BGl_z62lambda2102z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2365z00zzjas_classfilez00,
		BgL_bgl_za762lambda2101za7622630z00, BGl_z62lambda2101z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2366z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2631za7,
		BGl_z62zc3z04anonymousza32111ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2367z00zzjas_classfilez00,
		BgL_bgl_za762lambda2110za7622632z00, BGl_z62lambda2110z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2368z00zzjas_classfilez00,
		BgL_bgl_za762lambda2109za7622633z00, BGl_z62lambda2109z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2369z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2634za7,
		BGl_z62zc3z04anonymousza32119ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2descriptorzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2descr2635z00,
		BGl_z62fieldzd2descriptorzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2currentzd2methodzd2setz12zd2envz12zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2c2636z00,
		BGl_z62classfilezd2currentzd2methodzd2setz12za2zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2370z00zzjas_classfilez00,
		BgL_bgl_za762lambda2118za7622637z00, BGl_z62lambda2118z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2371z00zzjas_classfilez00,
		BgL_bgl_za762lambda2117za7622638z00, BGl_z62lambda2117z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2372z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2639za7,
		BGl_z62zc3z04anonymousza32126ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2373z00zzjas_classfilez00,
		BgL_bgl_za762lambda2125za7622640z00, BGl_z62lambda2125z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2374z00zzjas_classfilez00,
		BgL_bgl_za762lambda2124za7622641z00, BGl_z62lambda2124z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2375z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2642za7,
		BGl_z62zc3z04anonymousza32133ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2376z00zzjas_classfilez00,
		BgL_bgl_za762lambda2132za7622643z00, BGl_z62lambda2132z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2377z00zzjas_classfilez00,
		BgL_bgl_za762lambda2131za7622644z00, BGl_z62lambda2131z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2378z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2645za7,
		BGl_z62zc3z04anonymousza32140ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2379z00zzjas_classfilez00,
		BgL_bgl_za762lambda2139za7622646z00, BGl_z62lambda2139z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2JasFunzd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2jasfun2647z00,
		BGl_z62makezd2JasFunzb0zzjas_classfilez00, 0L, BUNSPEC, 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2380z00zzjas_classfilez00,
		BgL_bgl_za762lambda2138za7622648z00, BGl_z62lambda2138z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2381z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2649za7,
		BGl_z62zc3z04anonymousza32147ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2382z00zzjas_classfilez00,
		BgL_bgl_za762lambda2146za7622650z00, BGl_z62lambda2146z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2383z00zzjas_classfilez00,
		BgL_bgl_za762lambda2145za7622651z00, BGl_z62lambda2145z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2pnamezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22652za7,
		BGl_z62fieldzd2orzd2methodzd2pnamezd2setz12z70zzjas_classfilez00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2384z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2653za7,
		BGl_z62zc3z04anonymousza32155ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2385z00zzjas_classfilez00,
		BgL_bgl_za762lambda2154za7622654z00, BGl_z62lambda2154z62zzjas_classfilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2386z00zzjas_classfilez00,
		BgL_bgl_za762lambda2153za7622655z00, BGl_z62lambda2153z62zzjas_classfilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2387z00zzjas_classfilez00,
		BgL_bgl_za762za7c3za704anonymo2656za7,
		BGl_z62zc3z04anonymousza32064ze3ze5zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2388z00zzjas_classfilez00,
		BgL_bgl_za762lambda2062za7622657z00, BGl_z62lambda2062z62zzjas_classfilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2389z00zzjas_classfilez00,
		BgL_bgl_za762lambda2060za7622658z00, BGl_z62lambda2060z62zzjas_classfilez00,
		0L, BUNSPEC, 12);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2errorzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasza7d2errorza7b2659za7,
		BGl_z62jaszd2errorzb0zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2int64zd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2int64za72660za7,
		BGl_z62poolzd2int64zb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2n2661z00,
		BGl_z62attributezd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2poolzd2siza7ezd2envz75zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2662z00,
		BGl_z62classfilezd2poolzd2siza7ezc5zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzd2codezd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2code2663z00,
		BGl_z62JasFunzd2codezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2superzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2s2664z00,
		BGl_z62classfilezd2superzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762jasfunza7f3za791za72665z00,
		BGl_z62JasFunzf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_basiczd2codezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762basicza7d2codeza72666za7,
		BGl_z62basiczd2codezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classeza7d2vect2667z00,
		BGl_z62classezd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2flagszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2flags2668z00,
		BGl_z62fieldzd2flagszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectzd2typezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762vectza7d2typeza7d2669za7,
		BGl_z62vectzd2typezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2basiczd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2basicza72670za7,
		BGl_z62makezd2basiczb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasFunzd2tretzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2tret2671z00,
		BGl_z62JasFunzd2tretzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762classfileza7f3za72672za7,
		BGl_z62classfilezf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzd2typezd2envz00zzjas_classfilez00,
		BgL_bgl_za762vectza7d2typeza7b2673za7,
		BGl_z62vectzd2typezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasFunzd2codezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2code2674z00,
		BGl_z62JasFunzd2codezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2vectzd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2vectza7b2675za7,
		BGl_z62makezd2vectzb0zzjas_classfilez00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762methodza7f3za791za72676z00,
		BGl_z62methodzf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasTypezd2codezd2envz00zzjas_classfilez00,
		BgL_bgl_za762jastypeza7d2cod2677z00,
		BGl_z62JasTypezd2codezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_methodzd2typezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762methodza7d2type2678z00,
		BGl_z62methodzd2typezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_attributezd2infozd2envz00zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2i2679z00,
		BGl_z62attributezd2infozb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_JasTypezd2codezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762jastypeza7d2cod2680z00,
		BGl_z62JasTypezd2codezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezd2mezd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2m2681z00,
		BGl_z62classfilezd2mezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762vectza7d2nilza7b02682za7,
		BGl_z62vectzd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_attributezd2typezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2t2683z00,
		BGl_z62attributezd2typezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_declaredzd2fieldzd2envz00zzjas_classfilez00,
		BgL_bgl_za762declaredza7d2fi2684z00,
		BGl_z62declaredzd2fieldzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2fieldszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2f2685z00,
		BGl_z62classfilezd2fieldszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_vectzf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762vectza7f3za791za7za7j2686za7,
		BGl_z62vectzf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2methodzd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2method2687z00,
		BGl_z62makezd2methodzb0zzjas_classfilez00, 0L, BUNSPEC, 9);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzd2targszd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2targ2688z00,
		BGl_z62JasFunzd2targszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_fieldzd2ownerzd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2owner2689z00,
		BGl_z62fieldzd2ownerzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2attributeszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2attri2690z00,
		BGl_z62fieldzd2attributeszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classezd2codezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classeza7d2code2691z00,
		BGl_z62classezd2codezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_attributezd2siza7ezd2envza7zzjas_classfilez00,
		BgL_bgl_za762attributeza7d2s2692z00,
		BGl_z62attributezd2siza7ez17zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2attributeszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2a2693z00,
		BGl_z62classfilezd2attributeszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_JasFunzd2tretzd2envz00zzjas_classfilez00,
		BgL_bgl_za762jasfunza7d2tret2694z00,
		BGl_z62JasFunzd2tretzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2flagszd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22695za7,
		BGl_z62fieldzd2orzd2methodzd2flagszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2globalszd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2g2696z00,
		BGl_z62classfilezd2globalszd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2uint64zd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2uint642697z00,
		BGl_z62poolzd2uint64zb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2flagszd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2f2698z00,
		BGl_z62classfilezd2flagszb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2attributezd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2attrib2699z00,
		BGl_z62makezd2attributezb0zzjas_classfilez00, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2ownerzd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2owner2700z00,
		BGl_z62fieldzd2ownerzd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_classfilezd2poolzd2envz00zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2701z00,
		BGl_z62classfilezd2poolzb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_typezd2siza7ezd2envza7zzjas_classfilez00,
		BgL_bgl_za762typeza7d2siza7a7e2702za7,
		BGl_z62typezd2siza7ez17zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_vectzd2codezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762vectza7d2codeza7d2703za7,
		BGl_z62vectzd2codezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2namezd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2nameza7b2704za7,
		BGl_z62poolzd2namezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2orzd2methodzd2pnamezd2envz00zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2orza7d22705za7,
		BGl_z62fieldzd2orzd2methodzd2pnamezb0zzjas_classfilez00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_poolzd2intzd2envz00zzjas_classfilez00,
		BgL_bgl_za762poolza7d2intza7b02706za7,
		BGl_z62poolzd2intzb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_methodzd2nilzd2envz00zzjas_classfilez00,
		BgL_bgl_za762methodza7d2nilza72707za7,
		BGl_z62methodzd2nilzb0zzjas_classfilez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_fieldzd2namezd2setz12zd2envzc0zzjas_classfilez00,
		BgL_bgl_za762fieldza7d2nameza72708za7,
		BGl_z62fieldzd2namezd2setz12z70zzjas_classfilez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2JasTypezd2envz00zzjas_classfilez00,
		BgL_bgl_za762makeza7d2jastyp2709z00,
		BGl_z62makezd2JasTypezb0zzjas_classfilez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_classezf3zd2envz21zzjas_classfilez00,
		BgL_bgl_za762classeza7f3za791za72710z00,
		BGl_z62classezf3z91zzjas_classfilez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classfilezd2poolzd2siza7ezd2setz12zd2envzb5zzjas_classfilez00,
		BgL_bgl_za762classfileza7d2p2711z00,
		BGl_z62classfilezd2poolzd2siza7ezd2setz12z05zzjas_classfilez00, 0L, BUNSPEC,
		2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_classfilez00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_basiczd2encodedzd2typez00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_methodz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_basicz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_classez00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_fieldz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_fieldzd2orzd2methodz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_attributez00zzjas_classfilez00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_JasFunz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_JasTypez00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_vectz00zzjas_classfilez00));
		     ADD_ROOT((void *) (&BGl_pourquoi_tant_de_hainez00zzjas_classfilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_classfilez00(long
		BgL_checksumz00_3078, char *BgL_fromz00_3079)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_classfilez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_classfilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_classfilez00();
					BGl_libraryzd2moduleszd2initz00zzjas_classfilez00();
					BGl_cnstzd2initzd2zzjas_classfilez00();
					BGl_importedzd2moduleszd2initz00zzjas_classfilez00();
					BGl_objectzd2initzd2zzjas_classfilez00();
					return BGl_toplevelzd2initzd2zzjas_classfilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_classfile");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_classfile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_classfile");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 1 */
				obj_t BgL_cportz00_2861;

				{	/* Jas/classfile.scm 1 */
					obj_t BgL_stringz00_2869;

					BgL_stringz00_2869 = BGl_string2392z00zzjas_classfilez00;
					{	/* Jas/classfile.scm 1 */
						obj_t BgL_startz00_2870;

						BgL_startz00_2870 = BINT(((long) 0));
						{	/* Jas/classfile.scm 1 */
							obj_t BgL_endz00_2871;

							BgL_endz00_2871 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2869)));
							{	/* Jas/classfile.scm 1 */

								BgL_cportz00_2861 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2869, BgL_startz00_2870, BgL_endz00_2871);
				}}}}
				{
					long BgL_iz00_2862;

					BgL_iz00_2862 = ((long) 50);
				BgL_loopz00_2863:
					if ((BgL_iz00_2862 == ((long) -1)))
						{	/* Jas/classfile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/classfile.scm 1 */
							{	/* Jas/classfile.scm 1 */
								obj_t BgL_arg2395z00_2865;

								{	/* Jas/classfile.scm 1 */

									{	/* Jas/classfile.scm 1 */
										obj_t BgL_locationz00_2867;

										BgL_locationz00_2867 = BBOOL(((bool_t) 0));
										{	/* Jas/classfile.scm 1 */

											BgL_arg2395z00_2865 =
												BGl_readz00zz__readerz00(BgL_cportz00_2861,
												BgL_locationz00_2867);
										}
									}
								}
								{	/* Jas/classfile.scm 1 */
									int BgL_tmpz00_3110;

									BgL_tmpz00_3110 = (int) (BgL_iz00_2862);
									CNST_TABLE_SET(BgL_tmpz00_3110, BgL_arg2395z00_2865);
							}}
							{	/* Jas/classfile.scm 1 */
								int BgL_auxz00_2868;

								BgL_auxz00_2868 = (int) ((BgL_iz00_2862 - ((long) 1)));
								{
									long BgL_iz00_3115;

									BgL_iz00_3115 = (long) (BgL_auxz00_2868);
									BgL_iz00_2862 = BgL_iz00_3115;
									goto BgL_loopz00_2863;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 101 */
				obj_t BgL_arg1367z00_331;
				obj_t BgL_arg1370z00_332;

				{	/* Jas/classfile.scm 101 */
					BgL_basicz00_bglt BgL_arg1371z00_333;

					{	/* Jas/classfile.scm 101 */
						BgL_basicz00_bglt BgL_new1276z00_334;

						{	/* Jas/classfile.scm 101 */
							BgL_basicz00_bglt BgL_new1275z00_335;

							BgL_new1275z00_335 =
								((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_basicz00_bgl))));
							{	/* Jas/classfile.scm 101 */
								long BgL_arg1372z00_336;

								{	/* Jas/classfile.scm 101 */
									long BgL_res2156z00_1372;

									BgL_res2156z00_1372 =
										BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
									BgL_arg1372z00_336 = BgL_res2156z00_1372;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1275z00_335),
									BgL_arg1372z00_336);
							}
							BgL_new1276z00_334 = BgL_new1275z00_335;
						}
						((((BgL_jastypez00_bglt) COBJECT(
										((BgL_jastypez00_bglt) BgL_new1276z00_334)))->BgL_codez00) =
							((obj_t) BGl_string2254z00zzjas_classfilez00), BUNSPEC);
						((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
											BgL_new1276z00_334)))->BgL_vectz00) =
							((obj_t) BFALSE), BUNSPEC);
						BgL_arg1371z00_333 = BgL_new1276z00_334;
					}
					BgL_arg1367z00_331 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
						((obj_t) BgL_arg1371z00_333));
				}
				{	/* Jas/classfile.scm 102 */
					obj_t BgL_arg1381z00_337;
					obj_t BgL_arg1382z00_338;

					{	/* Jas/classfile.scm 102 */
						BgL_basicz00_bglt BgL_arg1383z00_339;

						{	/* Jas/classfile.scm 102 */
							BgL_basicz00_bglt BgL_new1278z00_340;

							{	/* Jas/classfile.scm 102 */
								BgL_basicz00_bglt BgL_new1277z00_341;

								BgL_new1277z00_341 =
									((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_basicz00_bgl))));
								{	/* Jas/classfile.scm 102 */
									long BgL_arg1384z00_342;

									{	/* Jas/classfile.scm 102 */
										long BgL_res2157z00_1376;

										BgL_res2157z00_1376 =
											BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
										BgL_arg1384z00_342 = BgL_res2157z00_1376;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1277z00_341),
										BgL_arg1384z00_342);
								}
								BgL_new1278z00_340 = BgL_new1277z00_341;
							}
							((((BgL_jastypez00_bglt) COBJECT(
											((BgL_jastypez00_bglt) BgL_new1278z00_340)))->
									BgL_codez00) =
								((obj_t) BGl_string2255z00zzjas_classfilez00), BUNSPEC);
							((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
												BgL_new1278z00_340)))->BgL_vectz00) =
								((obj_t) BFALSE), BUNSPEC);
							BgL_arg1383z00_339 = BgL_new1278z00_340;
						}
						BgL_arg1381z00_337 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 1)),
							((obj_t) BgL_arg1383z00_339));
					}
					{	/* Jas/classfile.scm 103 */
						obj_t BgL_arg1385z00_343;
						obj_t BgL_arg1386z00_344;

						{	/* Jas/classfile.scm 103 */
							BgL_basicz00_bglt BgL_arg1387z00_345;

							{	/* Jas/classfile.scm 103 */
								BgL_basicz00_bglt BgL_new1280z00_346;

								{	/* Jas/classfile.scm 103 */
									BgL_basicz00_bglt BgL_new1279z00_347;

									BgL_new1279z00_347 =
										((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_basicz00_bgl))));
									{	/* Jas/classfile.scm 103 */
										long BgL_arg1388z00_348;

										{	/* Jas/classfile.scm 103 */
											long BgL_res2158z00_1380;

											BgL_res2158z00_1380 =
												BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
											BgL_arg1388z00_348 = BgL_res2158z00_1380;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1279z00_347),
											BgL_arg1388z00_348);
									}
									BgL_new1280z00_346 = BgL_new1279z00_347;
								}
								((((BgL_jastypez00_bglt) COBJECT(
												((BgL_jastypez00_bglt) BgL_new1280z00_346)))->
										BgL_codez00) =
									((obj_t) BGl_string2256z00zzjas_classfilez00), BUNSPEC);
								((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
													BgL_new1280z00_346)))->BgL_vectz00) =
									((obj_t) BFALSE), BUNSPEC);
								BgL_arg1387z00_345 = BgL_new1280z00_346;
							}
							BgL_arg1385z00_343 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
								((obj_t) BgL_arg1387z00_345));
						}
						{	/* Jas/classfile.scm 104 */
							obj_t BgL_arg1394z00_349;
							obj_t BgL_arg1396z00_350;

							{	/* Jas/classfile.scm 104 */
								BgL_basicz00_bglt BgL_arg1417z00_351;

								{	/* Jas/classfile.scm 104 */
									BgL_basicz00_bglt BgL_new1282z00_352;

									{	/* Jas/classfile.scm 104 */
										BgL_basicz00_bglt BgL_new1281z00_353;

										BgL_new1281z00_353 =
											((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_basicz00_bgl))));
										{	/* Jas/classfile.scm 104 */
											long BgL_arg1418z00_354;

											{	/* Jas/classfile.scm 104 */
												long BgL_res2159z00_1384;

												BgL_res2159z00_1384 =
													BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
												BgL_arg1418z00_354 = BgL_res2159z00_1384;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1281z00_353),
												BgL_arg1418z00_354);
										}
										BgL_new1282z00_352 = BgL_new1281z00_353;
									}
									((((BgL_jastypez00_bglt) COBJECT(
													((BgL_jastypez00_bglt) BgL_new1282z00_352)))->
											BgL_codez00) =
										((obj_t) BGl_string2257z00zzjas_classfilez00), BUNSPEC);
									((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
														BgL_new1282z00_352)))->BgL_vectz00) =
										((obj_t) BFALSE), BUNSPEC);
									BgL_arg1417z00_351 = BgL_new1282z00_352;
								}
								BgL_arg1394z00_349 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
									((obj_t) BgL_arg1417z00_351));
							}
							{	/* Jas/classfile.scm 105 */
								obj_t BgL_arg1421z00_355;
								obj_t BgL_arg1422z00_356;

								{	/* Jas/classfile.scm 105 */
									BgL_basicz00_bglt BgL_arg1441z00_357;

									{	/* Jas/classfile.scm 105 */
										BgL_basicz00_bglt BgL_new1284z00_358;

										{	/* Jas/classfile.scm 105 */
											BgL_basicz00_bglt BgL_new1283z00_359;

											BgL_new1283z00_359 =
												((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_basicz00_bgl))));
											{	/* Jas/classfile.scm 105 */
												long BgL_arg1442z00_360;

												{	/* Jas/classfile.scm 105 */
													long BgL_res2160z00_1388;

													BgL_res2160z00_1388 =
														BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
													BgL_arg1442z00_360 = BgL_res2160z00_1388;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1283z00_359),
													BgL_arg1442z00_360);
											}
											BgL_new1284z00_358 = BgL_new1283z00_359;
										}
										((((BgL_jastypez00_bglt) COBJECT(
														((BgL_jastypez00_bglt) BgL_new1284z00_358)))->
												BgL_codez00) =
											((obj_t) BGl_string2258z00zzjas_classfilez00), BUNSPEC);
										((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
															BgL_new1284z00_358)))->BgL_vectz00) =
											((obj_t) BFALSE), BUNSPEC);
										BgL_arg1441z00_357 = BgL_new1284z00_358;
									}
									BgL_arg1421z00_355 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
										((obj_t) BgL_arg1441z00_357));
								}
								{	/* Jas/classfile.scm 106 */
									obj_t BgL_arg1448z00_361;
									obj_t BgL_arg1449z00_362;

									{	/* Jas/classfile.scm 106 */
										BgL_basicz00_bglt BgL_arg1461z00_363;

										{	/* Jas/classfile.scm 106 */
											BgL_basicz00_bglt BgL_new1286z00_364;

											{	/* Jas/classfile.scm 106 */
												BgL_basicz00_bglt BgL_new1285z00_365;

												BgL_new1285z00_365 =
													((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_basicz00_bgl))));
												{	/* Jas/classfile.scm 106 */
													long BgL_arg1462z00_366;

													{	/* Jas/classfile.scm 106 */
														long BgL_res2161z00_1392;

														BgL_res2161z00_1392 =
															BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
														BgL_arg1462z00_366 = BgL_res2161z00_1392;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1285z00_365),
														BgL_arg1462z00_366);
												}
												BgL_new1286z00_364 = BgL_new1285z00_365;
											}
											((((BgL_jastypez00_bglt) COBJECT(
															((BgL_jastypez00_bglt) BgL_new1286z00_364)))->
													BgL_codez00) =
												((obj_t) BGl_string2259z00zzjas_classfilez00), BUNSPEC);
											((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
																BgL_new1286z00_364)))->BgL_vectz00) =
												((obj_t) BFALSE), BUNSPEC);
											BgL_arg1461z00_363 = BgL_new1286z00_364;
										}
										BgL_arg1448z00_361 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
											((obj_t) BgL_arg1461z00_363));
									}
									{	/* Jas/classfile.scm 107 */
										obj_t BgL_arg1464z00_367;
										obj_t BgL_arg1465z00_368;

										{	/* Jas/classfile.scm 107 */
											BgL_basicz00_bglt BgL_arg1474z00_369;

											{	/* Jas/classfile.scm 107 */
												BgL_basicz00_bglt BgL_new1288z00_370;

												{	/* Jas/classfile.scm 107 */
													BgL_basicz00_bglt BgL_new1287z00_371;

													BgL_new1287z00_371 =
														((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																	BgL_basicz00_bgl))));
													{	/* Jas/classfile.scm 107 */
														long BgL_arg1476z00_372;

														{	/* Jas/classfile.scm 107 */
															long BgL_res2162z00_1396;

															BgL_res2162z00_1396 =
																BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
															BgL_arg1476z00_372 = BgL_res2162z00_1396;
														}
														BGL_OBJECT_CLASS_NUM_SET(
															((BgL_objectz00_bglt) BgL_new1287z00_371),
															BgL_arg1476z00_372);
													}
													BgL_new1288z00_370 = BgL_new1287z00_371;
												}
												((((BgL_jastypez00_bglt) COBJECT(
																((BgL_jastypez00_bglt) BgL_new1288z00_370)))->
														BgL_codez00) =
													((obj_t) BGl_string2260z00zzjas_classfilez00),
													BUNSPEC);
												((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
																	BgL_new1288z00_370)))->BgL_vectz00) =
													((obj_t) BFALSE), BUNSPEC);
												BgL_arg1474z00_369 = BgL_new1288z00_370;
											}
											BgL_arg1464z00_367 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
												((obj_t) BgL_arg1474z00_369));
										}
										{	/* Jas/classfile.scm 108 */
											obj_t BgL_arg1477z00_373;
											obj_t BgL_arg1489z00_374;

											{	/* Jas/classfile.scm 108 */
												BgL_basicz00_bglt BgL_arg1493z00_375;

												{	/* Jas/classfile.scm 108 */
													BgL_basicz00_bglt BgL_new1290z00_376;

													{	/* Jas/classfile.scm 108 */
														BgL_basicz00_bglt BgL_new1289z00_377;

														BgL_new1289z00_377 =
															((BgL_basicz00_bglt)
															BOBJECT(GC_MALLOC(sizeof(struct
																		BgL_basicz00_bgl))));
														{	/* Jas/classfile.scm 108 */
															long BgL_arg1495z00_378;

															{	/* Jas/classfile.scm 108 */
																long BgL_res2163z00_1400;

																BgL_res2163z00_1400 =
																	BGL_CLASS_INDEX
																	(BGl_basicz00zzjas_classfilez00);
																BgL_arg1495z00_378 = BgL_res2163z00_1400;
															}
															BGL_OBJECT_CLASS_NUM_SET(
																((BgL_objectz00_bglt) BgL_new1289z00_377),
																BgL_arg1495z00_378);
														}
														BgL_new1290z00_376 = BgL_new1289z00_377;
													}
													((((BgL_jastypez00_bglt) COBJECT(
																	((BgL_jastypez00_bglt) BgL_new1290z00_376)))->
															BgL_codez00) =
														((obj_t) BGl_string2261z00zzjas_classfilez00),
														BUNSPEC);
													((((BgL_jastypez00_bglt)
																COBJECT(((BgL_jastypez00_bglt)
																		BgL_new1290z00_376)))->BgL_vectz00) =
														((obj_t) BFALSE), BUNSPEC);
													BgL_arg1493z00_375 = BgL_new1290z00_376;
												}
												BgL_arg1477z00_373 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
													((obj_t) BgL_arg1493z00_375));
											}
											{	/* Jas/classfile.scm 109 */
												obj_t BgL_arg1497z00_379;

												{	/* Jas/classfile.scm 109 */
													BgL_basicz00_bglt BgL_arg1518z00_380;

													{	/* Jas/classfile.scm 109 */
														BgL_basicz00_bglt BgL_new1292z00_381;

														{	/* Jas/classfile.scm 109 */
															BgL_basicz00_bglt BgL_new1291z00_382;

															BgL_new1291z00_382 =
																((BgL_basicz00_bglt)
																BOBJECT(GC_MALLOC(sizeof(struct
																			BgL_basicz00_bgl))));
															{	/* Jas/classfile.scm 109 */
																long BgL_arg1521z00_383;

																{	/* Jas/classfile.scm 109 */
																	long BgL_res2164z00_1404;

																	BgL_res2164z00_1404 =
																		BGL_CLASS_INDEX
																		(BGl_basicz00zzjas_classfilez00);
																	BgL_arg1521z00_383 = BgL_res2164z00_1404;
																}
																BGL_OBJECT_CLASS_NUM_SET(
																	((BgL_objectz00_bglt) BgL_new1291z00_382),
																	BgL_arg1521z00_383);
															}
															BgL_new1292z00_381 = BgL_new1291z00_382;
														}
														((((BgL_jastypez00_bglt) COBJECT(
																		((BgL_jastypez00_bglt)
																			BgL_new1292z00_381)))->BgL_codez00) =
															((obj_t) BGl_string2262z00zzjas_classfilez00),
															BUNSPEC);
														((((BgL_jastypez00_bglt)
																	COBJECT(((BgL_jastypez00_bglt)
																			BgL_new1292z00_381)))->BgL_vectz00) =
															((obj_t) BFALSE), BUNSPEC);
														BgL_arg1518z00_380 = BgL_new1292z00_381;
													}
													BgL_arg1497z00_379 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
														((obj_t) BgL_arg1518z00_380));
												}
												BgL_arg1489z00_374 =
													MAKE_YOUNG_PAIR(BgL_arg1497z00_379, BNIL);
											}
											BgL_arg1465z00_368 =
												MAKE_YOUNG_PAIR(BgL_arg1477z00_373, BgL_arg1489z00_374);
										}
										BgL_arg1449z00_362 =
											MAKE_YOUNG_PAIR(BgL_arg1464z00_367, BgL_arg1465z00_368);
									}
									BgL_arg1422z00_356 =
										MAKE_YOUNG_PAIR(BgL_arg1448z00_361, BgL_arg1449z00_362);
								}
								BgL_arg1396z00_350 =
									MAKE_YOUNG_PAIR(BgL_arg1421z00_355, BgL_arg1422z00_356);
							}
							BgL_arg1386z00_344 =
								MAKE_YOUNG_PAIR(BgL_arg1394z00_349, BgL_arg1396z00_350);
						}
						BgL_arg1382z00_338 =
							MAKE_YOUNG_PAIR(BgL_arg1385z00_343, BgL_arg1386z00_344);
					}
					BgL_arg1370z00_332 =
						MAKE_YOUNG_PAIR(BgL_arg1381z00_337, BgL_arg1382z00_338);
				}
				BGl_basiczd2encodedzd2typez00zzjas_classfilez00 =
					MAKE_YOUNG_PAIR(BgL_arg1367z00_331, BgL_arg1370z00_332);
			}
			{	/* Jas/classfile.scm 111 */
				obj_t BgL_arg1528z00_384;

				BgL_arg1528z00_384 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF(((long) 3)),
					BGl_basiczd2encodedzd2typez00zzjas_classfilez00);
				BGl_pourquoi_tant_de_hainez00zzjas_classfilez00 =
					CDR(((obj_t) BgL_arg1528z00_384));
			}
			{	/* Jas/classfile.scm 114 */
				BgL_vectz00_bglt BgL_arg1536z00_385;

				{	/* Jas/classfile.scm 114 */
					BgL_vectz00_bglt BgL_new1294z00_386;

					{	/* Jas/classfile.scm 115 */
						BgL_vectz00_bglt BgL_new1293z00_387;

						BgL_new1293z00_387 =
							((BgL_vectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_vectz00_bgl))));
						{	/* Jas/classfile.scm 115 */
							long BgL_arg1537z00_388;

							{	/* Jas/classfile.scm 115 */
								long BgL_res2165z00_1409;

								BgL_res2165z00_1409 =
									BGL_CLASS_INDEX(BGl_vectz00zzjas_classfilez00);
								BgL_arg1537z00_388 = BgL_res2165z00_1409;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1293z00_387), BgL_arg1537z00_388);
						}
						BgL_new1294z00_386 = BgL_new1293z00_387;
					}
					((((BgL_jastypez00_bglt) COBJECT(
									((BgL_jastypez00_bglt) BgL_new1294z00_386)))->BgL_codez00) =
						((obj_t) BGl_string2263z00zzjas_classfilez00), BUNSPEC);
					((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
										BgL_new1294z00_386)))->BgL_vectz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_vectz00_bglt) COBJECT(BgL_new1294z00_386))->BgL_typez00) =
						((BgL_jastypez00_bglt) ((BgL_jastypez00_bglt)
								BGl_pourquoi_tant_de_hainez00zzjas_classfilez00)), BUNSPEC);
					BgL_arg1536z00_385 = BgL_new1294z00_386;
				}
				{	/* Jas/classfile.scm 113 */
					BgL_jastypez00_bglt BgL_oz00_1412;

					BgL_oz00_1412 =
						((BgL_jastypez00_bglt)
						BGl_pourquoi_tant_de_hainez00zzjas_classfilez00);
					return ((((BgL_jastypez00_bglt) COBJECT(BgL_oz00_1412))->
							BgL_vectz00) = ((obj_t) ((obj_t) BgL_arg1536z00_385)), BUNSPEC);
				}
			}
		}

	}



/* make-JasType */
	BGL_EXPORTED_DEF BgL_jastypez00_bglt
		BGl_makezd2JasTypezd2zzjas_classfilez00(obj_t BgL_code1202z00_3,
		obj_t BgL_vect1203z00_4)
	{
		{	/* Jas/classfile.sch 202 */
			{	/* Jas/classfile.sch 202 */
				BgL_jastypez00_bglt BgL_new1136z00_2874;

				{	/* Jas/classfile.sch 202 */
					BgL_jastypez00_bglt BgL_new1135z00_2875;

					BgL_new1135z00_2875 =
						((BgL_jastypez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jastypez00_bgl))));
					{	/* Jas/classfile.sch 202 */
						long BgL_arg1553z00_2876;

						{	/* Jas/classfile.sch 202 */
							long BgL_res2166z00_2877;

							BgL_res2166z00_2877 =
								BGL_CLASS_INDEX(BGl_JasTypez00zzjas_classfilez00);
							BgL_arg1553z00_2876 = BgL_res2166z00_2877;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1135z00_2875), BgL_arg1553z00_2876);
					}
					BgL_new1136z00_2874 = BgL_new1135z00_2875;
				}
				((((BgL_jastypez00_bglt) COBJECT(BgL_new1136z00_2874))->BgL_codez00) =
					((obj_t) BgL_code1202z00_3), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(BgL_new1136z00_2874))->BgL_vectz00) =
					((obj_t) BgL_vect1203z00_4), BUNSPEC);
				return BgL_new1136z00_2874;
			}
		}

	}



/* &make-JasType */
	BgL_jastypez00_bglt BGl_z62makezd2JasTypezb0zzjas_classfilez00(obj_t
		BgL_envz00_1982, obj_t BgL_code1202z00_1983, obj_t BgL_vect1203z00_1984)
	{
		{	/* Jas/classfile.sch 202 */
			return
				BGl_makezd2JasTypezd2zzjas_classfilez00(BgL_code1202z00_1983,
				BgL_vect1203z00_1984);
		}

	}



/* JasType? */
	BGL_EXPORTED_DEF bool_t BGl_JasTypezf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_5)
	{
		{	/* Jas/classfile.sch 203 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_5,
				BGl_JasTypez00zzjas_classfilez00);
		}

	}



/* &JasType? */
	obj_t BGl_z62JasTypezf3z91zzjas_classfilez00(obj_t BgL_envz00_1985,
		obj_t BgL_objz00_1986)
	{
		{	/* Jas/classfile.sch 203 */
			return BBOOL(BGl_JasTypezf3zf3zzjas_classfilez00(BgL_objz00_1986));
		}

	}



/* JasType-nil */
	BGL_EXPORTED_DEF BgL_jastypez00_bglt BGl_JasTypezd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 204 */
			{	/* Jas/classfile.sch 204 */
				obj_t BgL_classz00_1421;

				BgL_classz00_1421 = BGl_JasTypez00zzjas_classfilez00;
				{	/* Jas/classfile.sch 204 */
					obj_t BgL__ortest_1106z00_1422;

					BgL__ortest_1106z00_1422 = BGL_CLASS_NIL(BgL_classz00_1421);
					if (CBOOL(BgL__ortest_1106z00_1422))
						{	/* Jas/classfile.sch 204 */
							return ((BgL_jastypez00_bglt) BgL__ortest_1106z00_1422);
						}
					else
						{	/* Jas/classfile.sch 204 */
							return
								((BgL_jastypez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1421));
						}
				}
			}
		}

	}



/* &JasType-nil */
	BgL_jastypez00_bglt BGl_z62JasTypezd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_1987)
	{
		{	/* Jas/classfile.sch 204 */
			return BGl_JasTypezd2nilzd2zzjas_classfilez00();
		}

	}



/* JasType-vect */
	BGL_EXPORTED_DEF obj_t
		BGl_JasTypezd2vectzd2zzjas_classfilez00(BgL_jastypez00_bglt BgL_oz00_6)
	{
		{	/* Jas/classfile.sch 205 */
			return (((BgL_jastypez00_bglt) COBJECT(BgL_oz00_6))->BgL_vectz00);
		}

	}



/* &JasType-vect */
	obj_t BGl_z62JasTypezd2vectzb0zzjas_classfilez00(obj_t BgL_envz00_1988,
		obj_t BgL_oz00_1989)
	{
		{	/* Jas/classfile.sch 205 */
			return
				BGl_JasTypezd2vectzd2zzjas_classfilez00(
				((BgL_jastypez00_bglt) BgL_oz00_1989));
		}

	}



/* JasType-vect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasTypezd2vectzd2setz12z12zzjas_classfilez00(BgL_jastypez00_bglt
		BgL_oz00_7, obj_t BgL_vz00_8)
	{
		{	/* Jas/classfile.sch 206 */
			return
				((((BgL_jastypez00_bglt) COBJECT(BgL_oz00_7))->BgL_vectz00) =
				((obj_t) BgL_vz00_8), BUNSPEC);
		}

	}



/* &JasType-vect-set! */
	obj_t BGl_z62JasTypezd2vectzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_1990, obj_t BgL_oz00_1991, obj_t BgL_vz00_1992)
	{
		{	/* Jas/classfile.sch 206 */
			return
				BGl_JasTypezd2vectzd2setz12z12zzjas_classfilez00(
				((BgL_jastypez00_bglt) BgL_oz00_1991), BgL_vz00_1992);
		}

	}



/* JasType-code */
	BGL_EXPORTED_DEF obj_t
		BGl_JasTypezd2codezd2zzjas_classfilez00(BgL_jastypez00_bglt BgL_oz00_9)
	{
		{	/* Jas/classfile.sch 207 */
			return (((BgL_jastypez00_bglt) COBJECT(BgL_oz00_9))->BgL_codez00);
		}

	}



/* &JasType-code */
	obj_t BGl_z62JasTypezd2codezb0zzjas_classfilez00(obj_t BgL_envz00_1993,
		obj_t BgL_oz00_1994)
	{
		{	/* Jas/classfile.sch 207 */
			return
				BGl_JasTypezd2codezd2zzjas_classfilez00(
				((BgL_jastypez00_bglt) BgL_oz00_1994));
		}

	}



/* JasType-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasTypezd2codezd2setz12z12zzjas_classfilez00(BgL_jastypez00_bglt
		BgL_oz00_10, obj_t BgL_vz00_11)
	{
		{	/* Jas/classfile.sch 208 */
			return
				((((BgL_jastypez00_bglt) COBJECT(BgL_oz00_10))->BgL_codez00) =
				((obj_t) BgL_vz00_11), BUNSPEC);
		}

	}



/* &JasType-code-set! */
	obj_t BGl_z62JasTypezd2codezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_1995, obj_t BgL_oz00_1996, obj_t BgL_vz00_1997)
	{
		{	/* Jas/classfile.sch 208 */
			return
				BGl_JasTypezd2codezd2setz12z12zzjas_classfilez00(
				((BgL_jastypez00_bglt) BgL_oz00_1996), BgL_vz00_1997);
		}

	}



/* make-basic */
	BGL_EXPORTED_DEF BgL_basicz00_bglt BGl_makezd2basiczd2zzjas_classfilez00(obj_t
		BgL_code1199z00_12, obj_t BgL_vect1200z00_13)
	{
		{	/* Jas/classfile.sch 211 */
			{	/* Jas/classfile.sch 211 */
				BgL_basicz00_bglt BgL_new1142z00_2878;

				{	/* Jas/classfile.sch 211 */
					BgL_basicz00_bglt BgL_new1141z00_2879;

					BgL_new1141z00_2879 =
						((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_basicz00_bgl))));
					{	/* Jas/classfile.sch 211 */
						long BgL_arg1558z00_2880;

						{	/* Jas/classfile.sch 211 */
							long BgL_res2167z00_2881;

							BgL_res2167z00_2881 =
								BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
							BgL_arg1558z00_2880 = BgL_res2167z00_2881;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1141z00_2879), BgL_arg1558z00_2880);
					}
					BgL_new1142z00_2878 = BgL_new1141z00_2879;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1142z00_2878)))->BgL_codez00) =
					((obj_t) BgL_code1199z00_12), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1142z00_2878)))->BgL_vectz00) =
					((obj_t) BgL_vect1200z00_13), BUNSPEC);
				return BgL_new1142z00_2878;
			}
		}

	}



/* &make-basic */
	BgL_basicz00_bglt BGl_z62makezd2basiczb0zzjas_classfilez00(obj_t
		BgL_envz00_1998, obj_t BgL_code1199z00_1999, obj_t BgL_vect1200z00_2000)
	{
		{	/* Jas/classfile.sch 211 */
			return
				BGl_makezd2basiczd2zzjas_classfilez00(BgL_code1199z00_1999,
				BgL_vect1200z00_2000);
		}

	}



/* basic? */
	BGL_EXPORTED_DEF bool_t BGl_basiczf3zf3zzjas_classfilez00(obj_t BgL_objz00_14)
	{
		{	/* Jas/classfile.sch 212 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_14,
				BGl_basicz00zzjas_classfilez00);
		}

	}



/* &basic? */
	obj_t BGl_z62basiczf3z91zzjas_classfilez00(obj_t BgL_envz00_2001,
		obj_t BgL_objz00_2002)
	{
		{	/* Jas/classfile.sch 212 */
			return BBOOL(BGl_basiczf3zf3zzjas_classfilez00(BgL_objz00_2002));
		}

	}



/* basic-nil */
	BGL_EXPORTED_DEF BgL_basicz00_bglt BGl_basiczd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 213 */
			{	/* Jas/classfile.sch 213 */
				obj_t BgL_classz00_1434;

				BgL_classz00_1434 = BGl_basicz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 213 */
					obj_t BgL__ortest_1106z00_1435;

					BgL__ortest_1106z00_1435 = BGL_CLASS_NIL(BgL_classz00_1434);
					if (CBOOL(BgL__ortest_1106z00_1435))
						{	/* Jas/classfile.sch 213 */
							return ((BgL_basicz00_bglt) BgL__ortest_1106z00_1435);
						}
					else
						{	/* Jas/classfile.sch 213 */
							return
								((BgL_basicz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1434));
						}
				}
			}
		}

	}



/* &basic-nil */
	BgL_basicz00_bglt BGl_z62basiczd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2003)
	{
		{	/* Jas/classfile.sch 213 */
			return BGl_basiczd2nilzd2zzjas_classfilez00();
		}

	}



/* basic-vect */
	BGL_EXPORTED_DEF obj_t BGl_basiczd2vectzd2zzjas_classfilez00(BgL_basicz00_bglt
		BgL_oz00_15)
	{
		{	/* Jas/classfile.sch 214 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_15)))->BgL_vectz00);
		}

	}



/* &basic-vect */
	obj_t BGl_z62basiczd2vectzb0zzjas_classfilez00(obj_t BgL_envz00_2004,
		obj_t BgL_oz00_2005)
	{
		{	/* Jas/classfile.sch 214 */
			return
				BGl_basiczd2vectzd2zzjas_classfilez00(
				((BgL_basicz00_bglt) BgL_oz00_2005));
		}

	}



/* basic-vect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_basiczd2vectzd2setz12z12zzjas_classfilez00(BgL_basicz00_bglt
		BgL_oz00_16, obj_t BgL_vz00_17)
	{
		{	/* Jas/classfile.sch 215 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_16)))->BgL_vectz00) =
				((obj_t) BgL_vz00_17), BUNSPEC);
		}

	}



/* &basic-vect-set! */
	obj_t BGl_z62basiczd2vectzd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2006,
		obj_t BgL_oz00_2007, obj_t BgL_vz00_2008)
	{
		{	/* Jas/classfile.sch 215 */
			return
				BGl_basiczd2vectzd2setz12z12zzjas_classfilez00(
				((BgL_basicz00_bglt) BgL_oz00_2007), BgL_vz00_2008);
		}

	}



/* basic-code */
	BGL_EXPORTED_DEF obj_t BGl_basiczd2codezd2zzjas_classfilez00(BgL_basicz00_bglt
		BgL_oz00_18)
	{
		{	/* Jas/classfile.sch 216 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_18)))->BgL_codez00);
		}

	}



/* &basic-code */
	obj_t BGl_z62basiczd2codezb0zzjas_classfilez00(obj_t BgL_envz00_2009,
		obj_t BgL_oz00_2010)
	{
		{	/* Jas/classfile.sch 216 */
			return
				BGl_basiczd2codezd2zzjas_classfilez00(
				((BgL_basicz00_bglt) BgL_oz00_2010));
		}

	}



/* basic-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_basiczd2codezd2setz12z12zzjas_classfilez00(BgL_basicz00_bglt
		BgL_oz00_19, obj_t BgL_vz00_20)
	{
		{	/* Jas/classfile.sch 217 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_19)))->BgL_codez00) =
				((obj_t) BgL_vz00_20), BUNSPEC);
		}

	}



/* &basic-code-set! */
	obj_t BGl_z62basiczd2codezd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2011,
		obj_t BgL_oz00_2012, obj_t BgL_vz00_2013)
	{
		{	/* Jas/classfile.sch 217 */
			return
				BGl_basiczd2codezd2setz12z12zzjas_classfilez00(
				((BgL_basicz00_bglt) BgL_oz00_2012), BgL_vz00_2013);
		}

	}



/* make-vect */
	BGL_EXPORTED_DEF BgL_vectz00_bglt BGl_makezd2vectzd2zzjas_classfilez00(obj_t
		BgL_code1195z00_21, obj_t BgL_vect1196z00_22,
		BgL_jastypez00_bglt BgL_type1197z00_23)
	{
		{	/* Jas/classfile.sch 220 */
			{	/* Jas/classfile.sch 220 */
				BgL_vectz00_bglt BgL_new1148z00_2882;

				{	/* Jas/classfile.sch 220 */
					BgL_vectz00_bglt BgL_new1147z00_2883;

					BgL_new1147z00_2883 =
						((BgL_vectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vectz00_bgl))));
					{	/* Jas/classfile.sch 220 */
						long BgL_arg1561z00_2884;

						{	/* Jas/classfile.sch 220 */
							long BgL_res2168z00_2885;

							BgL_res2168z00_2885 =
								BGL_CLASS_INDEX(BGl_vectz00zzjas_classfilez00);
							BgL_arg1561z00_2884 = BgL_res2168z00_2885;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1147z00_2883), BgL_arg1561z00_2884);
					}
					BgL_new1148z00_2882 = BgL_new1147z00_2883;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1148z00_2882)))->BgL_codez00) =
					((obj_t) BgL_code1195z00_21), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1148z00_2882)))->BgL_vectz00) =
					((obj_t) BgL_vect1196z00_22), BUNSPEC);
				((((BgL_vectz00_bglt) COBJECT(BgL_new1148z00_2882))->BgL_typez00) =
					((BgL_jastypez00_bglt) BgL_type1197z00_23), BUNSPEC);
				return BgL_new1148z00_2882;
			}
		}

	}



/* &make-vect */
	BgL_vectz00_bglt BGl_z62makezd2vectzb0zzjas_classfilez00(obj_t
		BgL_envz00_2014, obj_t BgL_code1195z00_2015, obj_t BgL_vect1196z00_2016,
		obj_t BgL_type1197z00_2017)
	{
		{	/* Jas/classfile.sch 220 */
			return
				BGl_makezd2vectzd2zzjas_classfilez00(BgL_code1195z00_2015,
				BgL_vect1196z00_2016, ((BgL_jastypez00_bglt) BgL_type1197z00_2017));
		}

	}



/* vect? */
	BGL_EXPORTED_DEF bool_t BGl_vectzf3zf3zzjas_classfilez00(obj_t BgL_objz00_24)
	{
		{	/* Jas/classfile.sch 221 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_24,
				BGl_vectz00zzjas_classfilez00);
		}

	}



/* &vect? */
	obj_t BGl_z62vectzf3z91zzjas_classfilez00(obj_t BgL_envz00_2018,
		obj_t BgL_objz00_2019)
	{
		{	/* Jas/classfile.sch 221 */
			return BBOOL(BGl_vectzf3zf3zzjas_classfilez00(BgL_objz00_2019));
		}

	}



/* vect-nil */
	BGL_EXPORTED_DEF BgL_vectz00_bglt BGl_vectzd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 222 */
			{	/* Jas/classfile.sch 222 */
				obj_t BgL_classz00_1447;

				BgL_classz00_1447 = BGl_vectz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 222 */
					obj_t BgL__ortest_1106z00_1448;

					BgL__ortest_1106z00_1448 = BGL_CLASS_NIL(BgL_classz00_1447);
					if (CBOOL(BgL__ortest_1106z00_1448))
						{	/* Jas/classfile.sch 222 */
							return ((BgL_vectz00_bglt) BgL__ortest_1106z00_1448);
						}
					else
						{	/* Jas/classfile.sch 222 */
							return
								((BgL_vectz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1447));
						}
				}
			}
		}

	}



/* &vect-nil */
	BgL_vectz00_bglt BGl_z62vectzd2nilzb0zzjas_classfilez00(obj_t BgL_envz00_2020)
	{
		{	/* Jas/classfile.sch 222 */
			return BGl_vectzd2nilzd2zzjas_classfilez00();
		}

	}



/* vect-type */
	BGL_EXPORTED_DEF BgL_jastypez00_bglt
		BGl_vectzd2typezd2zzjas_classfilez00(BgL_vectz00_bglt BgL_oz00_25)
	{
		{	/* Jas/classfile.sch 223 */
			return (((BgL_vectz00_bglt) COBJECT(BgL_oz00_25))->BgL_typez00);
		}

	}



/* &vect-type */
	BgL_jastypez00_bglt BGl_z62vectzd2typezb0zzjas_classfilez00(obj_t
		BgL_envz00_2021, obj_t BgL_oz00_2022)
	{
		{	/* Jas/classfile.sch 223 */
			return
				BGl_vectzd2typezd2zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2022));
		}

	}



/* vect-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vectzd2typezd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt BgL_oz00_26,
		BgL_jastypez00_bglt BgL_vz00_27)
	{
		{	/* Jas/classfile.sch 224 */
			return
				((((BgL_vectz00_bglt) COBJECT(BgL_oz00_26))->BgL_typez00) =
				((BgL_jastypez00_bglt) BgL_vz00_27), BUNSPEC);
		}

	}



/* &vect-type-set! */
	obj_t BGl_z62vectzd2typezd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2023,
		obj_t BgL_oz00_2024, obj_t BgL_vz00_2025)
	{
		{	/* Jas/classfile.sch 224 */
			return
				BGl_vectzd2typezd2setz12z12zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2024),
				((BgL_jastypez00_bglt) BgL_vz00_2025));
		}

	}



/* vect-vect */
	BGL_EXPORTED_DEF obj_t BGl_vectzd2vectzd2zzjas_classfilez00(BgL_vectz00_bglt
		BgL_oz00_28)
	{
		{	/* Jas/classfile.sch 225 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_28)))->BgL_vectz00);
		}

	}



/* &vect-vect */
	obj_t BGl_z62vectzd2vectzb0zzjas_classfilez00(obj_t BgL_envz00_2026,
		obj_t BgL_oz00_2027)
	{
		{	/* Jas/classfile.sch 225 */
			return
				BGl_vectzd2vectzd2zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2027));
		}

	}



/* vect-vect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vectzd2vectzd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt BgL_oz00_29,
		obj_t BgL_vz00_30)
	{
		{	/* Jas/classfile.sch 226 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_29)))->BgL_vectz00) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &vect-vect-set! */
	obj_t BGl_z62vectzd2vectzd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2028,
		obj_t BgL_oz00_2029, obj_t BgL_vz00_2030)
	{
		{	/* Jas/classfile.sch 226 */
			return
				BGl_vectzd2vectzd2setz12z12zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2029), BgL_vz00_2030);
		}

	}



/* vect-code */
	BGL_EXPORTED_DEF obj_t BGl_vectzd2codezd2zzjas_classfilez00(BgL_vectz00_bglt
		BgL_oz00_31)
	{
		{	/* Jas/classfile.sch 227 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_31)))->BgL_codez00);
		}

	}



/* &vect-code */
	obj_t BGl_z62vectzd2codezb0zzjas_classfilez00(obj_t BgL_envz00_2031,
		obj_t BgL_oz00_2032)
	{
		{	/* Jas/classfile.sch 227 */
			return
				BGl_vectzd2codezd2zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2032));
		}

	}



/* vect-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_vectzd2codezd2setz12z12zzjas_classfilez00(BgL_vectz00_bglt BgL_oz00_32,
		obj_t BgL_vz00_33)
	{
		{	/* Jas/classfile.sch 228 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_32)))->BgL_codez00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &vect-code-set! */
	obj_t BGl_z62vectzd2codezd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2033,
		obj_t BgL_oz00_2034, obj_t BgL_vz00_2035)
	{
		{	/* Jas/classfile.sch 228 */
			return
				BGl_vectzd2codezd2setz12z12zzjas_classfilez00(
				((BgL_vectz00_bglt) BgL_oz00_2034), BgL_vz00_2035);
		}

	}



/* make-JasFun */
	BGL_EXPORTED_DEF BgL_jasfunz00_bglt
		BGl_makezd2JasFunzd2zzjas_classfilez00(obj_t BgL_code1190z00_34,
		obj_t BgL_vect1191z00_35, BgL_jastypez00_bglt BgL_tret1192z00_36,
		obj_t BgL_targs1193z00_37)
	{
		{	/* Jas/classfile.sch 231 */
			{	/* Jas/classfile.sch 231 */
				BgL_jasfunz00_bglt BgL_new1157z00_2886;

				{	/* Jas/classfile.sch 231 */
					BgL_jasfunz00_bglt BgL_new1156z00_2887;

					BgL_new1156z00_2887 =
						((BgL_jasfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jasfunz00_bgl))));
					{	/* Jas/classfile.sch 231 */
						long BgL_arg1564z00_2888;

						{	/* Jas/classfile.sch 231 */
							long BgL_res2169z00_2889;

							BgL_res2169z00_2889 =
								BGL_CLASS_INDEX(BGl_JasFunz00zzjas_classfilez00);
							BgL_arg1564z00_2888 = BgL_res2169z00_2889;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1156z00_2887), BgL_arg1564z00_2888);
					}
					BgL_new1157z00_2886 = BgL_new1156z00_2887;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1157z00_2886)))->BgL_codez00) =
					((obj_t) BgL_code1190z00_34), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1157z00_2886)))->BgL_vectz00) =
					((obj_t) BgL_vect1191z00_35), BUNSPEC);
				((((BgL_jasfunz00_bglt) COBJECT(BgL_new1157z00_2886))->BgL_tretz00) =
					((BgL_jastypez00_bglt) BgL_tret1192z00_36), BUNSPEC);
				((((BgL_jasfunz00_bglt) COBJECT(BgL_new1157z00_2886))->BgL_targsz00) =
					((obj_t) BgL_targs1193z00_37), BUNSPEC);
				return BgL_new1157z00_2886;
			}
		}

	}



/* &make-JasFun */
	BgL_jasfunz00_bglt BGl_z62makezd2JasFunzb0zzjas_classfilez00(obj_t
		BgL_envz00_2036, obj_t BgL_code1190z00_2037, obj_t BgL_vect1191z00_2038,
		obj_t BgL_tret1192z00_2039, obj_t BgL_targs1193z00_2040)
	{
		{	/* Jas/classfile.sch 231 */
			return
				BGl_makezd2JasFunzd2zzjas_classfilez00(BgL_code1190z00_2037,
				BgL_vect1191z00_2038, ((BgL_jastypez00_bglt) BgL_tret1192z00_2039),
				BgL_targs1193z00_2040);
		}

	}



/* JasFun? */
	BGL_EXPORTED_DEF bool_t BGl_JasFunzf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_38)
	{
		{	/* Jas/classfile.sch 232 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_38,
				BGl_JasFunz00zzjas_classfilez00);
		}

	}



/* &JasFun? */
	obj_t BGl_z62JasFunzf3z91zzjas_classfilez00(obj_t BgL_envz00_2041,
		obj_t BgL_objz00_2042)
	{
		{	/* Jas/classfile.sch 232 */
			return BBOOL(BGl_JasFunzf3zf3zzjas_classfilez00(BgL_objz00_2042));
		}

	}



/* JasFun-nil */
	BGL_EXPORTED_DEF BgL_jasfunz00_bglt BGl_JasFunzd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 233 */
			{	/* Jas/classfile.sch 233 */
				obj_t BgL_classz00_1462;

				BgL_classz00_1462 = BGl_JasFunz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 233 */
					obj_t BgL__ortest_1106z00_1463;

					BgL__ortest_1106z00_1463 = BGL_CLASS_NIL(BgL_classz00_1462);
					if (CBOOL(BgL__ortest_1106z00_1463))
						{	/* Jas/classfile.sch 233 */
							return ((BgL_jasfunz00_bglt) BgL__ortest_1106z00_1463);
						}
					else
						{	/* Jas/classfile.sch 233 */
							return
								((BgL_jasfunz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1462));
						}
				}
			}
		}

	}



/* &JasFun-nil */
	BgL_jasfunz00_bglt BGl_z62JasFunzd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2043)
	{
		{	/* Jas/classfile.sch 233 */
			return BGl_JasFunzd2nilzd2zzjas_classfilez00();
		}

	}



/* JasFun-targs */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2targszd2zzjas_classfilez00(BgL_jasfunz00_bglt BgL_oz00_39)
	{
		{	/* Jas/classfile.sch 234 */
			return (((BgL_jasfunz00_bglt) COBJECT(BgL_oz00_39))->BgL_targsz00);
		}

	}



/* &JasFun-targs */
	obj_t BGl_z62JasFunzd2targszb0zzjas_classfilez00(obj_t BgL_envz00_2044,
		obj_t BgL_oz00_2045)
	{
		{	/* Jas/classfile.sch 234 */
			return
				BGl_JasFunzd2targszd2zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2045));
		}

	}



/* JasFun-targs-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2targszd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt
		BgL_oz00_40, obj_t BgL_vz00_41)
	{
		{	/* Jas/classfile.sch 235 */
			return
				((((BgL_jasfunz00_bglt) COBJECT(BgL_oz00_40))->BgL_targsz00) =
				((obj_t) BgL_vz00_41), BUNSPEC);
		}

	}



/* &JasFun-targs-set! */
	obj_t BGl_z62JasFunzd2targszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2046, obj_t BgL_oz00_2047, obj_t BgL_vz00_2048)
	{
		{	/* Jas/classfile.sch 235 */
			return
				BGl_JasFunzd2targszd2setz12z12zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2047), BgL_vz00_2048);
		}

	}



/* JasFun-tret */
	BGL_EXPORTED_DEF BgL_jastypez00_bglt
		BGl_JasFunzd2tretzd2zzjas_classfilez00(BgL_jasfunz00_bglt BgL_oz00_42)
	{
		{	/* Jas/classfile.sch 236 */
			return (((BgL_jasfunz00_bglt) COBJECT(BgL_oz00_42))->BgL_tretz00);
		}

	}



/* &JasFun-tret */
	BgL_jastypez00_bglt BGl_z62JasFunzd2tretzb0zzjas_classfilez00(obj_t
		BgL_envz00_2049, obj_t BgL_oz00_2050)
	{
		{	/* Jas/classfile.sch 236 */
			return
				BGl_JasFunzd2tretzd2zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2050));
		}

	}



/* JasFun-tret-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2tretzd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt
		BgL_oz00_43, BgL_jastypez00_bglt BgL_vz00_44)
	{
		{	/* Jas/classfile.sch 237 */
			return
				((((BgL_jasfunz00_bglt) COBJECT(BgL_oz00_43))->BgL_tretz00) =
				((BgL_jastypez00_bglt) BgL_vz00_44), BUNSPEC);
		}

	}



/* &JasFun-tret-set! */
	obj_t BGl_z62JasFunzd2tretzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2051, obj_t BgL_oz00_2052, obj_t BgL_vz00_2053)
	{
		{	/* Jas/classfile.sch 237 */
			return
				BGl_JasFunzd2tretzd2setz12z12zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2052),
				((BgL_jastypez00_bglt) BgL_vz00_2053));
		}

	}



/* JasFun-vect */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2vectzd2zzjas_classfilez00(BgL_jasfunz00_bglt BgL_oz00_45)
	{
		{	/* Jas/classfile.sch 238 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_45)))->BgL_vectz00);
		}

	}



/* &JasFun-vect */
	obj_t BGl_z62JasFunzd2vectzb0zzjas_classfilez00(obj_t BgL_envz00_2054,
		obj_t BgL_oz00_2055)
	{
		{	/* Jas/classfile.sch 238 */
			return
				BGl_JasFunzd2vectzd2zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2055));
		}

	}



/* JasFun-vect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2vectzd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt
		BgL_oz00_46, obj_t BgL_vz00_47)
	{
		{	/* Jas/classfile.sch 239 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_46)))->BgL_vectz00) =
				((obj_t) BgL_vz00_47), BUNSPEC);
		}

	}



/* &JasFun-vect-set! */
	obj_t BGl_z62JasFunzd2vectzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2056, obj_t BgL_oz00_2057, obj_t BgL_vz00_2058)
	{
		{	/* Jas/classfile.sch 239 */
			return
				BGl_JasFunzd2vectzd2setz12z12zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2057), BgL_vz00_2058);
		}

	}



/* JasFun-code */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2codezd2zzjas_classfilez00(BgL_jasfunz00_bglt BgL_oz00_48)
	{
		{	/* Jas/classfile.sch 240 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_48)))->BgL_codez00);
		}

	}



/* &JasFun-code */
	obj_t BGl_z62JasFunzd2codezb0zzjas_classfilez00(obj_t BgL_envz00_2059,
		obj_t BgL_oz00_2060)
	{
		{	/* Jas/classfile.sch 240 */
			return
				BGl_JasFunzd2codezd2zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2060));
		}

	}



/* JasFun-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_JasFunzd2codezd2setz12z12zzjas_classfilez00(BgL_jasfunz00_bglt
		BgL_oz00_49, obj_t BgL_vz00_50)
	{
		{	/* Jas/classfile.sch 241 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_49)))->BgL_codez00) =
				((obj_t) BgL_vz00_50), BUNSPEC);
		}

	}



/* &JasFun-code-set! */
	obj_t BGl_z62JasFunzd2codezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2061, obj_t BgL_oz00_2062, obj_t BgL_vz00_2063)
	{
		{	/* Jas/classfile.sch 241 */
			return
				BGl_JasFunzd2codezd2setz12z12zzjas_classfilez00(
				((BgL_jasfunz00_bglt) BgL_oz00_2062), BgL_vz00_2063);
		}

	}



/* make-classe */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_makezd2classezd2zzjas_classfilez00(obj_t BgL_code1184z00_51,
		obj_t BgL_vect1185z00_52, obj_t BgL_flags1186z00_53,
		obj_t BgL_name1187z00_54, obj_t BgL_pool1188z00_55)
	{
		{	/* Jas/classfile.sch 244 */
			{	/* Jas/classfile.sch 244 */
				BgL_classez00_bglt BgL_new1167z00_2890;

				{	/* Jas/classfile.sch 244 */
					BgL_classez00_bglt BgL_new1166z00_2891;

					BgL_new1166z00_2891 =
						((BgL_classez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_classez00_bgl))));
					{	/* Jas/classfile.sch 244 */
						long BgL_arg1565z00_2892;

						{	/* Jas/classfile.sch 244 */
							long BgL_res2170z00_2893;

							BgL_res2170z00_2893 =
								BGL_CLASS_INDEX(BGl_classez00zzjas_classfilez00);
							BgL_arg1565z00_2892 = BgL_res2170z00_2893;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1166z00_2891), BgL_arg1565z00_2892);
					}
					BgL_new1167z00_2890 = BgL_new1166z00_2891;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1167z00_2890)))->BgL_codez00) =
					((obj_t) BgL_code1184z00_51), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1167z00_2890)))->BgL_vectz00) =
					((obj_t) BgL_vect1185z00_52), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1167z00_2890))->BgL_flagsz00) =
					((obj_t) BgL_flags1186z00_53), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1167z00_2890))->BgL_namez00) =
					((obj_t) BgL_name1187z00_54), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1167z00_2890))->BgL_poolz00) =
					((obj_t) BgL_pool1188z00_55), BUNSPEC);
				return BgL_new1167z00_2890;
			}
		}

	}



/* &make-classe */
	BgL_classez00_bglt BGl_z62makezd2classezb0zzjas_classfilez00(obj_t
		BgL_envz00_2064, obj_t BgL_code1184z00_2065, obj_t BgL_vect1185z00_2066,
		obj_t BgL_flags1186z00_2067, obj_t BgL_name1187z00_2068,
		obj_t BgL_pool1188z00_2069)
	{
		{	/* Jas/classfile.sch 244 */
			return
				BGl_makezd2classezd2zzjas_classfilez00(BgL_code1184z00_2065,
				BgL_vect1185z00_2066, BgL_flags1186z00_2067, BgL_name1187z00_2068,
				BgL_pool1188z00_2069);
		}

	}



/* classe? */
	BGL_EXPORTED_DEF bool_t BGl_classezf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_56)
	{
		{	/* Jas/classfile.sch 245 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_56,
				BGl_classez00zzjas_classfilez00);
		}

	}



/* &classe? */
	obj_t BGl_z62classezf3z91zzjas_classfilez00(obj_t BgL_envz00_2070,
		obj_t BgL_objz00_2071)
	{
		{	/* Jas/classfile.sch 245 */
			return BBOOL(BGl_classezf3zf3zzjas_classfilez00(BgL_objz00_2071));
		}

	}



/* classe-nil */
	BGL_EXPORTED_DEF BgL_classez00_bglt BGl_classezd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 246 */
			{	/* Jas/classfile.sch 246 */
				obj_t BgL_classz00_1479;

				BgL_classz00_1479 = BGl_classez00zzjas_classfilez00;
				{	/* Jas/classfile.sch 246 */
					obj_t BgL__ortest_1106z00_1480;

					BgL__ortest_1106z00_1480 = BGL_CLASS_NIL(BgL_classz00_1479);
					if (CBOOL(BgL__ortest_1106z00_1480))
						{	/* Jas/classfile.sch 246 */
							return ((BgL_classez00_bglt) BgL__ortest_1106z00_1480);
						}
					else
						{	/* Jas/classfile.sch 246 */
							return
								((BgL_classez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1479));
						}
				}
			}
		}

	}



/* &classe-nil */
	BgL_classez00_bglt BGl_z62classezd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2072)
	{
		{	/* Jas/classfile.sch 246 */
			return BGl_classezd2nilzd2zzjas_classfilez00();
		}

	}



/* classe-pool */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2poolzd2zzjas_classfilez00(BgL_classez00_bglt BgL_oz00_57)
	{
		{	/* Jas/classfile.sch 247 */
			return (((BgL_classez00_bglt) COBJECT(BgL_oz00_57))->BgL_poolz00);
		}

	}



/* &classe-pool */
	obj_t BGl_z62classezd2poolzb0zzjas_classfilez00(obj_t BgL_envz00_2073,
		obj_t BgL_oz00_2074)
	{
		{	/* Jas/classfile.sch 247 */
			return
				BGl_classezd2poolzd2zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2074));
		}

	}



/* classe-pool-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2poolzd2setz12z12zzjas_classfilez00(BgL_classez00_bglt
		BgL_oz00_58, obj_t BgL_vz00_59)
	{
		{	/* Jas/classfile.sch 248 */
			return
				((((BgL_classez00_bglt) COBJECT(BgL_oz00_58))->BgL_poolz00) =
				((obj_t) BgL_vz00_59), BUNSPEC);
		}

	}



/* &classe-pool-set! */
	obj_t BGl_z62classezd2poolzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2075, obj_t BgL_oz00_2076, obj_t BgL_vz00_2077)
	{
		{	/* Jas/classfile.sch 248 */
			return
				BGl_classezd2poolzd2setz12z12zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2076), BgL_vz00_2077);
		}

	}



/* classe-name */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2namezd2zzjas_classfilez00(BgL_classez00_bglt BgL_oz00_60)
	{
		{	/* Jas/classfile.sch 249 */
			return (((BgL_classez00_bglt) COBJECT(BgL_oz00_60))->BgL_namez00);
		}

	}



/* &classe-name */
	obj_t BGl_z62classezd2namezb0zzjas_classfilez00(obj_t BgL_envz00_2078,
		obj_t BgL_oz00_2079)
	{
		{	/* Jas/classfile.sch 249 */
			return
				BGl_classezd2namezd2zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2079));
		}

	}



/* classe-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2namezd2setz12z12zzjas_classfilez00(BgL_classez00_bglt
		BgL_oz00_61, obj_t BgL_vz00_62)
	{
		{	/* Jas/classfile.sch 250 */
			return
				((((BgL_classez00_bglt) COBJECT(BgL_oz00_61))->BgL_namez00) =
				((obj_t) BgL_vz00_62), BUNSPEC);
		}

	}



/* &classe-name-set! */
	obj_t BGl_z62classezd2namezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2080, obj_t BgL_oz00_2081, obj_t BgL_vz00_2082)
	{
		{	/* Jas/classfile.sch 250 */
			return
				BGl_classezd2namezd2setz12z12zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2081), BgL_vz00_2082);
		}

	}



/* classe-flags */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2flagszd2zzjas_classfilez00(BgL_classez00_bglt BgL_oz00_63)
	{
		{	/* Jas/classfile.sch 251 */
			return (((BgL_classez00_bglt) COBJECT(BgL_oz00_63))->BgL_flagsz00);
		}

	}



/* &classe-flags */
	obj_t BGl_z62classezd2flagszb0zzjas_classfilez00(obj_t BgL_envz00_2083,
		obj_t BgL_oz00_2084)
	{
		{	/* Jas/classfile.sch 251 */
			return
				BGl_classezd2flagszd2zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2084));
		}

	}



/* classe-flags-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2flagszd2setz12z12zzjas_classfilez00(BgL_classez00_bglt
		BgL_oz00_64, obj_t BgL_vz00_65)
	{
		{	/* Jas/classfile.sch 252 */
			return
				((((BgL_classez00_bglt) COBJECT(BgL_oz00_64))->BgL_flagsz00) =
				((obj_t) BgL_vz00_65), BUNSPEC);
		}

	}



/* &classe-flags-set! */
	obj_t BGl_z62classezd2flagszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2085, obj_t BgL_oz00_2086, obj_t BgL_vz00_2087)
	{
		{	/* Jas/classfile.sch 252 */
			return
				BGl_classezd2flagszd2setz12z12zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2086), BgL_vz00_2087);
		}

	}



/* classe-vect */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2vectzd2zzjas_classfilez00(BgL_classez00_bglt BgL_oz00_66)
	{
		{	/* Jas/classfile.sch 253 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_66)))->BgL_vectz00);
		}

	}



/* &classe-vect */
	obj_t BGl_z62classezd2vectzb0zzjas_classfilez00(obj_t BgL_envz00_2088,
		obj_t BgL_oz00_2089)
	{
		{	/* Jas/classfile.sch 253 */
			return
				BGl_classezd2vectzd2zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2089));
		}

	}



/* classe-vect-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2vectzd2setz12z12zzjas_classfilez00(BgL_classez00_bglt
		BgL_oz00_67, obj_t BgL_vz00_68)
	{
		{	/* Jas/classfile.sch 254 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_67)))->BgL_vectz00) =
				((obj_t) BgL_vz00_68), BUNSPEC);
		}

	}



/* &classe-vect-set! */
	obj_t BGl_z62classezd2vectzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2090, obj_t BgL_oz00_2091, obj_t BgL_vz00_2092)
	{
		{	/* Jas/classfile.sch 254 */
			return
				BGl_classezd2vectzd2setz12z12zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2091), BgL_vz00_2092);
		}

	}



/* classe-code */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2codezd2zzjas_classfilez00(BgL_classez00_bglt BgL_oz00_69)
	{
		{	/* Jas/classfile.sch 255 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_69)))->BgL_codez00);
		}

	}



/* &classe-code */
	obj_t BGl_z62classezd2codezb0zzjas_classfilez00(obj_t BgL_envz00_2093,
		obj_t BgL_oz00_2094)
	{
		{	/* Jas/classfile.sch 255 */
			return
				BGl_classezd2codezd2zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2094));
		}

	}



/* classe-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classezd2codezd2setz12z12zzjas_classfilez00(BgL_classez00_bglt
		BgL_oz00_70, obj_t BgL_vz00_71)
	{
		{	/* Jas/classfile.sch 256 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_70)))->BgL_codez00) =
				((obj_t) BgL_vz00_71), BUNSPEC);
		}

	}



/* &classe-code-set! */
	obj_t BGl_z62classezd2codezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2095, obj_t BgL_oz00_2096, obj_t BgL_vz00_2097)
	{
		{	/* Jas/classfile.sch 256 */
			return
				BGl_classezd2codezd2setz12z12zzjas_classfilez00(
				((BgL_classez00_bglt) BgL_oz00_2096), BgL_vz00_2097);
		}

	}



/* make-field-or-method */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00(obj_t
		BgL_flags1174z00_72, obj_t BgL_name1175z00_73, obj_t BgL_owner1176z00_74,
		obj_t BgL_usertype1177z00_75, obj_t BgL_type1178z00_76,
		obj_t BgL_pname1179z00_77, obj_t BgL_descriptor1180z00_78,
		obj_t BgL_pool1181z00_79, obj_t BgL_attributes1182z00_80)
	{
		{	/* Jas/classfile.sch 259 */
			{	/* Jas/classfile.sch 259 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_new1180z00_2894;

				{	/* Jas/classfile.sch 259 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_new1178z00_2895;

					BgL_new1178z00_2895 =
						((BgL_fieldzd2orzd2methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_fieldzd2orzd2methodz00_bgl))));
					{	/* Jas/classfile.sch 259 */
						long BgL_arg1573z00_2896;

						{	/* Jas/classfile.sch 259 */
							long BgL_res2171z00_2897;

							BgL_res2171z00_2897 =
								BGL_CLASS_INDEX(BGl_fieldzd2orzd2methodz00zzjas_classfilez00);
							BgL_arg1573z00_2896 = BgL_res2171z00_2897;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1178z00_2895), BgL_arg1573z00_2896);
					}
					BgL_new1180z00_2894 = BgL_new1178z00_2895;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_flagsz00) = ((obj_t) BgL_flags1174z00_72), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_namez00) = ((obj_t) BgL_name1175z00_73), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_ownerz00) = ((obj_t) BgL_owner1176z00_74), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_usertypez00) = ((obj_t) BgL_usertype1177z00_75), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_typez00) = ((obj_t) BgL_type1178z00_76), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_pnamez00) = ((obj_t) BgL_pname1179z00_77), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_descriptorz00) = ((obj_t) BgL_descriptor1180z00_78), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_poolz00) = ((obj_t) BgL_pool1181z00_79), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1180z00_2894))->
						BgL_attributesz00) = ((obj_t) BgL_attributes1182z00_80), BUNSPEC);
				return BgL_new1180z00_2894;
			}
		}

	}



/* &make-field-or-method */
	BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62makezd2fieldzd2orzd2methodzb0zzjas_classfilez00(obj_t
		BgL_envz00_2098, obj_t BgL_flags1174z00_2099, obj_t BgL_name1175z00_2100,
		obj_t BgL_owner1176z00_2101, obj_t BgL_usertype1177z00_2102,
		obj_t BgL_type1178z00_2103, obj_t BgL_pname1179z00_2104,
		obj_t BgL_descriptor1180z00_2105, obj_t BgL_pool1181z00_2106,
		obj_t BgL_attributes1182z00_2107)
	{
		{	/* Jas/classfile.sch 259 */
			return
				BGl_makezd2fieldzd2orzd2methodzd2zzjas_classfilez00
				(BgL_flags1174z00_2099, BgL_name1175z00_2100, BgL_owner1176z00_2101,
				BgL_usertype1177z00_2102, BgL_type1178z00_2103, BgL_pname1179z00_2104,
				BgL_descriptor1180z00_2105, BgL_pool1181z00_2106,
				BgL_attributes1182z00_2107);
		}

	}



/* field-or-method? */
	BGL_EXPORTED_DEF bool_t BGl_fieldzd2orzd2methodzf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_81)
	{
		{	/* Jas/classfile.sch 260 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_81,
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00);
		}

	}



/* &field-or-method? */
	obj_t BGl_z62fieldzd2orzd2methodzf3z91zzjas_classfilez00(obj_t
		BgL_envz00_2108, obj_t BgL_objz00_2109)
	{
		{	/* Jas/classfile.sch 260 */
			return
				BBOOL(BGl_fieldzd2orzd2methodzf3zf3zzjas_classfilez00(BgL_objz00_2109));
		}

	}



/* field-or-method-nil */
	BGL_EXPORTED_DEF BgL_fieldzd2orzd2methodz00_bglt
		BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 261 */
			{	/* Jas/classfile.sch 261 */
				obj_t BgL_classz00_1498;

				BgL_classz00_1498 = BGl_fieldzd2orzd2methodz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 261 */
					obj_t BgL__ortest_1106z00_1499;

					BgL__ortest_1106z00_1499 = BGL_CLASS_NIL(BgL_classz00_1498);
					if (CBOOL(BgL__ortest_1106z00_1499))
						{	/* Jas/classfile.sch 261 */
							return
								((BgL_fieldzd2orzd2methodz00_bglt) BgL__ortest_1106z00_1499);
						}
					else
						{	/* Jas/classfile.sch 261 */
							return
								((BgL_fieldzd2orzd2methodz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1498));
						}
				}
			}
		}

	}



/* &field-or-method-nil */
	BgL_fieldzd2orzd2methodz00_bglt
		BGl_z62fieldzd2orzd2methodzd2nilzb0zzjas_classfilez00(obj_t BgL_envz00_2110)
	{
		{	/* Jas/classfile.sch 261 */
			return BGl_fieldzd2orzd2methodzd2nilzd2zzjas_classfilez00();
		}

	}



/* field-or-method-attributes */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2attributeszd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_82)
	{
		{	/* Jas/classfile.sch 262 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_82))->
				BgL_attributesz00);
		}

	}



/* &field-or-method-attributes */
	obj_t BGl_z62fieldzd2orzd2methodzd2attributeszb0zzjas_classfilez00(obj_t
		BgL_envz00_2111, obj_t BgL_oz00_2112)
	{
		{	/* Jas/classfile.sch 262 */
			return
				BGl_fieldzd2orzd2methodzd2attributeszd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2112));
		}

	}



/* field-or-method-attributes-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2attributeszd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_83, obj_t BgL_vz00_84)
	{
		{	/* Jas/classfile.sch 263 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_83))->
					BgL_attributesz00) = ((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &field-or-method-attributes-set! */
	obj_t
		BGl_z62fieldzd2orzd2methodzd2attributeszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2113, obj_t BgL_oz00_2114, obj_t BgL_vz00_2115)
	{
		{	/* Jas/classfile.sch 263 */
			return
				BGl_fieldzd2orzd2methodzd2attributeszd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2114), BgL_vz00_2115);
		}

	}



/* field-or-method-pool */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2poolzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_85)
	{
		{	/* Jas/classfile.sch 264 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_85))->BgL_poolz00);
		}

	}



/* &field-or-method-pool */
	obj_t BGl_z62fieldzd2orzd2methodzd2poolzb0zzjas_classfilez00(obj_t
		BgL_envz00_2116, obj_t BgL_oz00_2117)
	{
		{	/* Jas/classfile.sch 264 */
			return
				BGl_fieldzd2orzd2methodzd2poolzd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2117));
		}

	}



/* field-or-method-pool-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2poolzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_86, obj_t BgL_vz00_87)
	{
		{	/* Jas/classfile.sch 265 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_86))->
					BgL_poolz00) = ((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &field-or-method-pool-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2poolzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2118, obj_t BgL_oz00_2119, obj_t BgL_vz00_2120)
	{
		{	/* Jas/classfile.sch 265 */
			return
				BGl_fieldzd2orzd2methodzd2poolzd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2119), BgL_vz00_2120);
		}

	}



/* field-or-method-descriptor */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2descriptorzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_88)
	{
		{	/* Jas/classfile.sch 266 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_88))->
				BgL_descriptorz00);
		}

	}



/* &field-or-method-descriptor */
	obj_t BGl_z62fieldzd2orzd2methodzd2descriptorzb0zzjas_classfilez00(obj_t
		BgL_envz00_2121, obj_t BgL_oz00_2122)
	{
		{	/* Jas/classfile.sch 266 */
			return
				BGl_fieldzd2orzd2methodzd2descriptorzd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2122));
		}

	}



/* field-or-method-descriptor-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2descriptorzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_89, obj_t BgL_vz00_90)
	{
		{	/* Jas/classfile.sch 267 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_89))->
					BgL_descriptorz00) = ((obj_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &field-or-method-descriptor-set! */
	obj_t
		BGl_z62fieldzd2orzd2methodzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2123, obj_t BgL_oz00_2124, obj_t BgL_vz00_2125)
	{
		{	/* Jas/classfile.sch 267 */
			return
				BGl_fieldzd2orzd2methodzd2descriptorzd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2124), BgL_vz00_2125);
		}

	}



/* field-or-method-pname */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2pnamezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_91)
	{
		{	/* Jas/classfile.sch 268 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_91))->
				BgL_pnamez00);
		}

	}



/* &field-or-method-pname */
	obj_t BGl_z62fieldzd2orzd2methodzd2pnamezb0zzjas_classfilez00(obj_t
		BgL_envz00_2126, obj_t BgL_oz00_2127)
	{
		{	/* Jas/classfile.sch 268 */
			return
				BGl_fieldzd2orzd2methodzd2pnamezd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2127));
		}

	}



/* field-or-method-pname-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2pnamezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_92, obj_t BgL_vz00_93)
	{
		{	/* Jas/classfile.sch 269 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_92))->
					BgL_pnamez00) = ((obj_t) BgL_vz00_93), BUNSPEC);
		}

	}



/* &field-or-method-pname-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2pnamezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2128, obj_t BgL_oz00_2129, obj_t BgL_vz00_2130)
	{
		{	/* Jas/classfile.sch 269 */
			return
				BGl_fieldzd2orzd2methodzd2pnamezd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2129), BgL_vz00_2130);
		}

	}



/* field-or-method-type */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2typezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_94)
	{
		{	/* Jas/classfile.sch 270 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_94))->BgL_typez00);
		}

	}



/* &field-or-method-type */
	obj_t BGl_z62fieldzd2orzd2methodzd2typezb0zzjas_classfilez00(obj_t
		BgL_envz00_2131, obj_t BgL_oz00_2132)
	{
		{	/* Jas/classfile.sch 270 */
			return
				BGl_fieldzd2orzd2methodzd2typezd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2132));
		}

	}



/* field-or-method-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2typezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_95, obj_t BgL_vz00_96)
	{
		{	/* Jas/classfile.sch 271 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_95))->
					BgL_typez00) = ((obj_t) BgL_vz00_96), BUNSPEC);
		}

	}



/* &field-or-method-type-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2typezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2133, obj_t BgL_oz00_2134, obj_t BgL_vz00_2135)
	{
		{	/* Jas/classfile.sch 271 */
			return
				BGl_fieldzd2orzd2methodzd2typezd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2134), BgL_vz00_2135);
		}

	}



/* field-or-method-usertype */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2usertypezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_97)
	{
		{	/* Jas/classfile.sch 272 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_97))->
				BgL_usertypez00);
		}

	}



/* &field-or-method-usertype */
	obj_t BGl_z62fieldzd2orzd2methodzd2usertypezb0zzjas_classfilez00(obj_t
		BgL_envz00_2136, obj_t BgL_oz00_2137)
	{
		{	/* Jas/classfile.sch 272 */
			return
				BGl_fieldzd2orzd2methodzd2usertypezd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2137));
		}

	}



/* field-or-method-usertype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2usertypezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_98, obj_t BgL_vz00_99)
	{
		{	/* Jas/classfile.sch 273 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_98))->
					BgL_usertypez00) = ((obj_t) BgL_vz00_99), BUNSPEC);
		}

	}



/* &field-or-method-usertype-set! */
	obj_t
		BGl_z62fieldzd2orzd2methodzd2usertypezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2138, obj_t BgL_oz00_2139, obj_t BgL_vz00_2140)
	{
		{	/* Jas/classfile.sch 273 */
			return
				BGl_fieldzd2orzd2methodzd2usertypezd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2139), BgL_vz00_2140);
		}

	}



/* field-or-method-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2ownerzd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_100)
	{
		{	/* Jas/classfile.sch 274 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_100))->
				BgL_ownerz00);
		}

	}



/* &field-or-method-owner */
	obj_t BGl_z62fieldzd2orzd2methodzd2ownerzb0zzjas_classfilez00(obj_t
		BgL_envz00_2141, obj_t BgL_oz00_2142)
	{
		{	/* Jas/classfile.sch 274 */
			return
				BGl_fieldzd2orzd2methodzd2ownerzd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2142));
		}

	}



/* field-or-method-owner-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2ownerzd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_101, obj_t BgL_vz00_102)
	{
		{	/* Jas/classfile.sch 275 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_101))->
					BgL_ownerz00) = ((obj_t) BgL_vz00_102), BUNSPEC);
		}

	}



/* &field-or-method-owner-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2ownerzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2143, obj_t BgL_oz00_2144, obj_t BgL_vz00_2145)
	{
		{	/* Jas/classfile.sch 275 */
			return
				BGl_fieldzd2orzd2methodzd2ownerzd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2144), BgL_vz00_2145);
		}

	}



/* field-or-method-name */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2namezd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_103)
	{
		{	/* Jas/classfile.sch 276 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_103))->
				BgL_namez00);
		}

	}



/* &field-or-method-name */
	obj_t BGl_z62fieldzd2orzd2methodzd2namezb0zzjas_classfilez00(obj_t
		BgL_envz00_2146, obj_t BgL_oz00_2147)
	{
		{	/* Jas/classfile.sch 276 */
			return
				BGl_fieldzd2orzd2methodzd2namezd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2147));
		}

	}



/* field-or-method-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2namezd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_104, obj_t BgL_vz00_105)
	{
		{	/* Jas/classfile.sch 277 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_104))->
					BgL_namez00) = ((obj_t) BgL_vz00_105), BUNSPEC);
		}

	}



/* &field-or-method-name-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2namezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2148, obj_t BgL_oz00_2149, obj_t BgL_vz00_2150)
	{
		{	/* Jas/classfile.sch 277 */
			return
				BGl_fieldzd2orzd2methodzd2namezd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2149), BgL_vz00_2150);
		}

	}



/* field-or-method-flags */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2flagszd2zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_106)
	{
		{	/* Jas/classfile.sch 278 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_106))->
				BgL_flagsz00);
		}

	}



/* &field-or-method-flags */
	obj_t BGl_z62fieldzd2orzd2methodzd2flagszb0zzjas_classfilez00(obj_t
		BgL_envz00_2151, obj_t BgL_oz00_2152)
	{
		{	/* Jas/classfile.sch 278 */
			return
				BGl_fieldzd2orzd2methodzd2flagszd2zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2152));
		}

	}



/* field-or-method-flags-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2orzd2methodzd2flagszd2setz12z12zzjas_classfilez00
		(BgL_fieldzd2orzd2methodz00_bglt BgL_oz00_107, obj_t BgL_vz00_108)
	{
		{	/* Jas/classfile.sch 279 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_oz00_107))->
					BgL_flagsz00) = ((obj_t) BgL_vz00_108), BUNSPEC);
		}

	}



/* &field-or-method-flags-set! */
	obj_t BGl_z62fieldzd2orzd2methodzd2flagszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2153, obj_t BgL_oz00_2154, obj_t BgL_vz00_2155)
	{
		{	/* Jas/classfile.sch 279 */
			return
				BGl_fieldzd2orzd2methodzd2flagszd2setz12z12zzjas_classfilez00(
				((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2154), BgL_vz00_2155);
		}

	}



/* make-field */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt BGl_makezd2fieldzd2zzjas_classfilez00(obj_t
		BgL_flags1164z00_109, obj_t BgL_name1165z00_110, obj_t BgL_owner1166z00_111,
		obj_t BgL_usertype1167z00_112, obj_t BgL_type1168z00_113,
		obj_t BgL_pname1169z00_114, obj_t BgL_descriptor1170z00_115,
		obj_t BgL_pool1171z00_116, obj_t BgL_attributes1172z00_117)
	{
		{	/* Jas/classfile.sch 282 */
			{	/* Jas/classfile.sch 282 */
				BgL_fieldz00_bglt BgL_new1200z00_2898;

				{	/* Jas/classfile.sch 282 */
					BgL_fieldz00_bglt BgL_new1199z00_2899;

					BgL_new1199z00_2899 =
						((BgL_fieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_fieldz00_bgl))));
					{	/* Jas/classfile.sch 282 */
						long BgL_arg1575z00_2900;

						{	/* Jas/classfile.sch 282 */
							long BgL_res2172z00_2901;

							BgL_res2172z00_2901 =
								BGL_CLASS_INDEX(BGl_fieldz00zzjas_classfilez00);
							BgL_arg1575z00_2900 = BgL_res2172z00_2901;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1199z00_2899), BgL_arg1575z00_2900);
					}
					BgL_new1200z00_2898 = BgL_new1199z00_2899;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1200z00_2898)))->
						BgL_flagsz00) = ((obj_t) BgL_flags1164z00_109), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_namez00) =
					((obj_t) BgL_name1165z00_110), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_ownerz00) =
					((obj_t) BgL_owner1166z00_111), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_usertypez00) =
					((obj_t) BgL_usertype1167z00_112), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_typez00) =
					((obj_t) BgL_type1168z00_113), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_pnamez00) =
					((obj_t) BgL_pname1169z00_114), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1170z00_115), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_poolz00) =
					((obj_t) BgL_pool1171z00_116), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1200z00_2898)))->BgL_attributesz00) =
					((obj_t) BgL_attributes1172z00_117), BUNSPEC);
				return BgL_new1200z00_2898;
			}
		}

	}



/* &make-field */
	BgL_fieldz00_bglt BGl_z62makezd2fieldzb0zzjas_classfilez00(obj_t
		BgL_envz00_2156, obj_t BgL_flags1164z00_2157, obj_t BgL_name1165z00_2158,
		obj_t BgL_owner1166z00_2159, obj_t BgL_usertype1167z00_2160,
		obj_t BgL_type1168z00_2161, obj_t BgL_pname1169z00_2162,
		obj_t BgL_descriptor1170z00_2163, obj_t BgL_pool1171z00_2164,
		obj_t BgL_attributes1172z00_2165)
	{
		{	/* Jas/classfile.sch 282 */
			return
				BGl_makezd2fieldzd2zzjas_classfilez00(BgL_flags1164z00_2157,
				BgL_name1165z00_2158, BgL_owner1166z00_2159, BgL_usertype1167z00_2160,
				BgL_type1168z00_2161, BgL_pname1169z00_2162, BgL_descriptor1170z00_2163,
				BgL_pool1171z00_2164, BgL_attributes1172z00_2165);
		}

	}



/* field? */
	BGL_EXPORTED_DEF bool_t BGl_fieldzf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_118)
	{
		{	/* Jas/classfile.sch 283 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_118,
				BGl_fieldz00zzjas_classfilez00);
		}

	}



/* &field? */
	obj_t BGl_z62fieldzf3z91zzjas_classfilez00(obj_t BgL_envz00_2166,
		obj_t BgL_objz00_2167)
	{
		{	/* Jas/classfile.sch 283 */
			return BBOOL(BGl_fieldzf3zf3zzjas_classfilez00(BgL_objz00_2167));
		}

	}



/* field-nil */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt BGl_fieldzd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 284 */
			{	/* Jas/classfile.sch 284 */
				obj_t BgL_classz00_1525;

				BgL_classz00_1525 = BGl_fieldz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 284 */
					obj_t BgL__ortest_1106z00_1526;

					BgL__ortest_1106z00_1526 = BGL_CLASS_NIL(BgL_classz00_1525);
					if (CBOOL(BgL__ortest_1106z00_1526))
						{	/* Jas/classfile.sch 284 */
							return ((BgL_fieldz00_bglt) BgL__ortest_1106z00_1526);
						}
					else
						{	/* Jas/classfile.sch 284 */
							return
								((BgL_fieldz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1525));
						}
				}
			}
		}

	}



/* &field-nil */
	BgL_fieldz00_bglt BGl_z62fieldzd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2168)
	{
		{	/* Jas/classfile.sch 284 */
			return BGl_fieldzd2nilzd2zzjas_classfilez00();
		}

	}



/* field-attributes */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2attributeszd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_119)
	{
		{	/* Jas/classfile.sch 285 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_119)))->
				BgL_attributesz00);
		}

	}



/* &field-attributes */
	obj_t BGl_z62fieldzd2attributeszb0zzjas_classfilez00(obj_t BgL_envz00_2169,
		obj_t BgL_oz00_2170)
	{
		{	/* Jas/classfile.sch 285 */
			return
				BGl_fieldzd2attributeszd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2170));
		}

	}



/* field-attributes-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2attributeszd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_120, obj_t BgL_vz00_121)
	{
		{	/* Jas/classfile.sch 286 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_120)))->
					BgL_attributesz00) = ((obj_t) BgL_vz00_121), BUNSPEC);
		}

	}



/* &field-attributes-set! */
	obj_t BGl_z62fieldzd2attributeszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2171, obj_t BgL_oz00_2172, obj_t BgL_vz00_2173)
	{
		{	/* Jas/classfile.sch 286 */
			return
				BGl_fieldzd2attributeszd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2172), BgL_vz00_2173);
		}

	}



/* field-pool */
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2poolzd2zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_122)
	{
		{	/* Jas/classfile.sch 287 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_122)))->BgL_poolz00);
		}

	}



/* &field-pool */
	obj_t BGl_z62fieldzd2poolzb0zzjas_classfilez00(obj_t BgL_envz00_2174,
		obj_t BgL_oz00_2175)
	{
		{	/* Jas/classfile.sch 287 */
			return
				BGl_fieldzd2poolzd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2175));
		}

	}



/* field-pool-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2poolzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_123, obj_t BgL_vz00_124)
	{
		{	/* Jas/classfile.sch 288 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_123)))->BgL_poolz00) =
				((obj_t) BgL_vz00_124), BUNSPEC);
		}

	}



/* &field-pool-set! */
	obj_t BGl_z62fieldzd2poolzd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2176,
		obj_t BgL_oz00_2177, obj_t BgL_vz00_2178)
	{
		{	/* Jas/classfile.sch 288 */
			return
				BGl_fieldzd2poolzd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2177), BgL_vz00_2178);
		}

	}



/* field-descriptor */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2descriptorzd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_125)
	{
		{	/* Jas/classfile.sch 289 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_125)))->
				BgL_descriptorz00);
		}

	}



/* &field-descriptor */
	obj_t BGl_z62fieldzd2descriptorzb0zzjas_classfilez00(obj_t BgL_envz00_2179,
		obj_t BgL_oz00_2180)
	{
		{	/* Jas/classfile.sch 289 */
			return
				BGl_fieldzd2descriptorzd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2180));
		}

	}



/* field-descriptor-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2descriptorzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_126, obj_t BgL_vz00_127)
	{
		{	/* Jas/classfile.sch 290 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_126)))->
					BgL_descriptorz00) = ((obj_t) BgL_vz00_127), BUNSPEC);
		}

	}



/* &field-descriptor-set! */
	obj_t BGl_z62fieldzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2181, obj_t BgL_oz00_2182, obj_t BgL_vz00_2183)
	{
		{	/* Jas/classfile.sch 290 */
			return
				BGl_fieldzd2descriptorzd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2182), BgL_vz00_2183);
		}

	}



/* field-pname */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2pnamezd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_128)
	{
		{	/* Jas/classfile.sch 291 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_128)))->BgL_pnamez00);
		}

	}



/* &field-pname */
	obj_t BGl_z62fieldzd2pnamezb0zzjas_classfilez00(obj_t BgL_envz00_2184,
		obj_t BgL_oz00_2185)
	{
		{	/* Jas/classfile.sch 291 */
			return
				BGl_fieldzd2pnamezd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2185));
		}

	}



/* field-pname-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2pnamezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_129, obj_t BgL_vz00_130)
	{
		{	/* Jas/classfile.sch 292 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_129)))->
					BgL_pnamez00) = ((obj_t) BgL_vz00_130), BUNSPEC);
		}

	}



/* &field-pname-set! */
	obj_t BGl_z62fieldzd2pnamezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2186, obj_t BgL_oz00_2187, obj_t BgL_vz00_2188)
	{
		{	/* Jas/classfile.sch 292 */
			return
				BGl_fieldzd2pnamezd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2187), BgL_vz00_2188);
		}

	}



/* field-type */
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2typezd2zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_131)
	{
		{	/* Jas/classfile.sch 293 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_131)))->BgL_typez00);
		}

	}



/* &field-type */
	obj_t BGl_z62fieldzd2typezb0zzjas_classfilez00(obj_t BgL_envz00_2189,
		obj_t BgL_oz00_2190)
	{
		{	/* Jas/classfile.sch 293 */
			return
				BGl_fieldzd2typezd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2190));
		}

	}



/* field-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2typezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_132, obj_t BgL_vz00_133)
	{
		{	/* Jas/classfile.sch 294 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_132)))->BgL_typez00) =
				((obj_t) BgL_vz00_133), BUNSPEC);
		}

	}



/* &field-type-set! */
	obj_t BGl_z62fieldzd2typezd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2191,
		obj_t BgL_oz00_2192, obj_t BgL_vz00_2193)
	{
		{	/* Jas/classfile.sch 294 */
			return
				BGl_fieldzd2typezd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2192), BgL_vz00_2193);
		}

	}



/* field-usertype */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2usertypezd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_134)
	{
		{	/* Jas/classfile.sch 295 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_134)))->
				BgL_usertypez00);
		}

	}



/* &field-usertype */
	obj_t BGl_z62fieldzd2usertypezb0zzjas_classfilez00(obj_t BgL_envz00_2194,
		obj_t BgL_oz00_2195)
	{
		{	/* Jas/classfile.sch 295 */
			return
				BGl_fieldzd2usertypezd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2195));
		}

	}



/* field-usertype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2usertypezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_135, obj_t BgL_vz00_136)
	{
		{	/* Jas/classfile.sch 296 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_135)))->
					BgL_usertypez00) = ((obj_t) BgL_vz00_136), BUNSPEC);
		}

	}



/* &field-usertype-set! */
	obj_t BGl_z62fieldzd2usertypezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2196, obj_t BgL_oz00_2197, obj_t BgL_vz00_2198)
	{
		{	/* Jas/classfile.sch 296 */
			return
				BGl_fieldzd2usertypezd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2197), BgL_vz00_2198);
		}

	}



/* field-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2ownerzd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_137)
	{
		{	/* Jas/classfile.sch 297 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_137)))->BgL_ownerz00);
		}

	}



/* &field-owner */
	obj_t BGl_z62fieldzd2ownerzb0zzjas_classfilez00(obj_t BgL_envz00_2199,
		obj_t BgL_oz00_2200)
	{
		{	/* Jas/classfile.sch 297 */
			return
				BGl_fieldzd2ownerzd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2200));
		}

	}



/* field-owner-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2ownerzd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_138, obj_t BgL_vz00_139)
	{
		{	/* Jas/classfile.sch 298 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_138)))->
					BgL_ownerz00) = ((obj_t) BgL_vz00_139), BUNSPEC);
		}

	}



/* &field-owner-set! */
	obj_t BGl_z62fieldzd2ownerzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2201, obj_t BgL_oz00_2202, obj_t BgL_vz00_2203)
	{
		{	/* Jas/classfile.sch 298 */
			return
				BGl_fieldzd2ownerzd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2202), BgL_vz00_2203);
		}

	}



/* field-name */
	BGL_EXPORTED_DEF obj_t BGl_fieldzd2namezd2zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_140)
	{
		{	/* Jas/classfile.sch 299 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_140)))->BgL_namez00);
		}

	}



/* &field-name */
	obj_t BGl_z62fieldzd2namezb0zzjas_classfilez00(obj_t BgL_envz00_2204,
		obj_t BgL_oz00_2205)
	{
		{	/* Jas/classfile.sch 299 */
			return
				BGl_fieldzd2namezd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2205));
		}

	}



/* field-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2namezd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_141, obj_t BgL_vz00_142)
	{
		{	/* Jas/classfile.sch 300 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_141)))->BgL_namez00) =
				((obj_t) BgL_vz00_142), BUNSPEC);
		}

	}



/* &field-name-set! */
	obj_t BGl_z62fieldzd2namezd2setz12z70zzjas_classfilez00(obj_t BgL_envz00_2206,
		obj_t BgL_oz00_2207, obj_t BgL_vz00_2208)
	{
		{	/* Jas/classfile.sch 300 */
			return
				BGl_fieldzd2namezd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2207), BgL_vz00_2208);
		}

	}



/* field-flags */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2flagszd2zzjas_classfilez00(BgL_fieldz00_bglt BgL_oz00_143)
	{
		{	/* Jas/classfile.sch 301 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_143)))->BgL_flagsz00);
		}

	}



/* &field-flags */
	obj_t BGl_z62fieldzd2flagszb0zzjas_classfilez00(obj_t BgL_envz00_2209,
		obj_t BgL_oz00_2210)
	{
		{	/* Jas/classfile.sch 301 */
			return
				BGl_fieldzd2flagszd2zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2210));
		}

	}



/* field-flags-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_fieldzd2flagszd2setz12z12zzjas_classfilez00(BgL_fieldz00_bglt
		BgL_oz00_144, obj_t BgL_vz00_145)
	{
		{	/* Jas/classfile.sch 302 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_144)))->
					BgL_flagsz00) = ((obj_t) BgL_vz00_145), BUNSPEC);
		}

	}



/* &field-flags-set! */
	obj_t BGl_z62fieldzd2flagszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2211, obj_t BgL_oz00_2212, obj_t BgL_vz00_2213)
	{
		{	/* Jas/classfile.sch 302 */
			return
				BGl_fieldzd2flagszd2setz12z12zzjas_classfilez00(
				((BgL_fieldz00_bglt) BgL_oz00_2212), BgL_vz00_2213);
		}

	}



/* make-method */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_makezd2methodzd2zzjas_classfilez00(obj_t BgL_flags1154z00_146,
		obj_t BgL_name1155z00_147, obj_t BgL_owner1156z00_148,
		obj_t BgL_usertype1157z00_149, obj_t BgL_type1158z00_150,
		obj_t BgL_pname1159z00_151, obj_t BgL_descriptor1160z00_152,
		obj_t BgL_pool1161z00_153, obj_t BgL_attributes1162z00_154)
	{
		{	/* Jas/classfile.sch 305 */
			{	/* Jas/classfile.sch 305 */
				BgL_methodz00_bglt BgL_new1220z00_2902;

				{	/* Jas/classfile.sch 305 */
					BgL_methodz00_bglt BgL_new1219z00_2903;

					BgL_new1219z00_2903 =
						((BgL_methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_methodz00_bgl))));
					{	/* Jas/classfile.sch 305 */
						long BgL_arg1578z00_2904;

						{	/* Jas/classfile.sch 305 */
							long BgL_res2173z00_2905;

							BgL_res2173z00_2905 =
								BGL_CLASS_INDEX(BGl_methodz00zzjas_classfilez00);
							BgL_arg1578z00_2904 = BgL_res2173z00_2905;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1219z00_2903), BgL_arg1578z00_2904);
					}
					BgL_new1220z00_2902 = BgL_new1219z00_2903;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1220z00_2902)))->
						BgL_flagsz00) = ((obj_t) BgL_flags1154z00_146), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_namez00) =
					((obj_t) BgL_name1155z00_147), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_ownerz00) =
					((obj_t) BgL_owner1156z00_148), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_usertypez00) =
					((obj_t) BgL_usertype1157z00_149), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_typez00) =
					((obj_t) BgL_type1158z00_150), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_pnamez00) =
					((obj_t) BgL_pname1159z00_151), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1160z00_152), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_poolz00) =
					((obj_t) BgL_pool1161z00_153), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1220z00_2902)))->BgL_attributesz00) =
					((obj_t) BgL_attributes1162z00_154), BUNSPEC);
				return BgL_new1220z00_2902;
			}
		}

	}



/* &make-method */
	BgL_methodz00_bglt BGl_z62makezd2methodzb0zzjas_classfilez00(obj_t
		BgL_envz00_2214, obj_t BgL_flags1154z00_2215, obj_t BgL_name1155z00_2216,
		obj_t BgL_owner1156z00_2217, obj_t BgL_usertype1157z00_2218,
		obj_t BgL_type1158z00_2219, obj_t BgL_pname1159z00_2220,
		obj_t BgL_descriptor1160z00_2221, obj_t BgL_pool1161z00_2222,
		obj_t BgL_attributes1162z00_2223)
	{
		{	/* Jas/classfile.sch 305 */
			return
				BGl_makezd2methodzd2zzjas_classfilez00(BgL_flags1154z00_2215,
				BgL_name1155z00_2216, BgL_owner1156z00_2217, BgL_usertype1157z00_2218,
				BgL_type1158z00_2219, BgL_pname1159z00_2220, BgL_descriptor1160z00_2221,
				BgL_pool1161z00_2222, BgL_attributes1162z00_2223);
		}

	}



/* method? */
	BGL_EXPORTED_DEF bool_t BGl_methodzf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_155)
	{
		{	/* Jas/classfile.sch 306 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_155,
				BGl_methodz00zzjas_classfilez00);
		}

	}



/* &method? */
	obj_t BGl_z62methodzf3z91zzjas_classfilez00(obj_t BgL_envz00_2224,
		obj_t BgL_objz00_2225)
	{
		{	/* Jas/classfile.sch 306 */
			return BBOOL(BGl_methodzf3zf3zzjas_classfilez00(BgL_objz00_2225));
		}

	}



/* method-nil */
	BGL_EXPORTED_DEF BgL_methodz00_bglt BGl_methodzd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 307 */
			{	/* Jas/classfile.sch 307 */
				obj_t BgL_classz00_1552;

				BgL_classz00_1552 = BGl_methodz00zzjas_classfilez00;
				{	/* Jas/classfile.sch 307 */
					obj_t BgL__ortest_1106z00_1553;

					BgL__ortest_1106z00_1553 = BGL_CLASS_NIL(BgL_classz00_1552);
					if (CBOOL(BgL__ortest_1106z00_1553))
						{	/* Jas/classfile.sch 307 */
							return ((BgL_methodz00_bglt) BgL__ortest_1106z00_1553);
						}
					else
						{	/* Jas/classfile.sch 307 */
							return
								((BgL_methodz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1552));
						}
				}
			}
		}

	}



/* &method-nil */
	BgL_methodz00_bglt BGl_z62methodzd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2226)
	{
		{	/* Jas/classfile.sch 307 */
			return BGl_methodzd2nilzd2zzjas_classfilez00();
		}

	}



/* method-attributes */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2attributeszd2zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_156)
	{
		{	/* Jas/classfile.sch 308 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_156)))->
				BgL_attributesz00);
		}

	}



/* &method-attributes */
	obj_t BGl_z62methodzd2attributeszb0zzjas_classfilez00(obj_t BgL_envz00_2227,
		obj_t BgL_oz00_2228)
	{
		{	/* Jas/classfile.sch 308 */
			return
				BGl_methodzd2attributeszd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2228));
		}

	}



/* method-attributes-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2attributeszd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_157, obj_t BgL_vz00_158)
	{
		{	/* Jas/classfile.sch 309 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_157)))->
					BgL_attributesz00) = ((obj_t) BgL_vz00_158), BUNSPEC);
		}

	}



/* &method-attributes-set! */
	obj_t BGl_z62methodzd2attributeszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2229, obj_t BgL_oz00_2230, obj_t BgL_vz00_2231)
	{
		{	/* Jas/classfile.sch 309 */
			return
				BGl_methodzd2attributeszd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2230), BgL_vz00_2231);
		}

	}



/* method-pool */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2poolzd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_159)
	{
		{	/* Jas/classfile.sch 310 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_159)))->BgL_poolz00);
		}

	}



/* &method-pool */
	obj_t BGl_z62methodzd2poolzb0zzjas_classfilez00(obj_t BgL_envz00_2232,
		obj_t BgL_oz00_2233)
	{
		{	/* Jas/classfile.sch 310 */
			return
				BGl_methodzd2poolzd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2233));
		}

	}



/* method-pool-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2poolzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_160, obj_t BgL_vz00_161)
	{
		{	/* Jas/classfile.sch 311 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_160)))->BgL_poolz00) =
				((obj_t) BgL_vz00_161), BUNSPEC);
		}

	}



/* &method-pool-set! */
	obj_t BGl_z62methodzd2poolzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2234, obj_t BgL_oz00_2235, obj_t BgL_vz00_2236)
	{
		{	/* Jas/classfile.sch 311 */
			return
				BGl_methodzd2poolzd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2235), BgL_vz00_2236);
		}

	}



/* method-descriptor */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2descriptorzd2zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_162)
	{
		{	/* Jas/classfile.sch 312 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_162)))->
				BgL_descriptorz00);
		}

	}



/* &method-descriptor */
	obj_t BGl_z62methodzd2descriptorzb0zzjas_classfilez00(obj_t BgL_envz00_2237,
		obj_t BgL_oz00_2238)
	{
		{	/* Jas/classfile.sch 312 */
			return
				BGl_methodzd2descriptorzd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2238));
		}

	}



/* method-descriptor-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2descriptorzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_163, obj_t BgL_vz00_164)
	{
		{	/* Jas/classfile.sch 313 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_163)))->
					BgL_descriptorz00) = ((obj_t) BgL_vz00_164), BUNSPEC);
		}

	}



/* &method-descriptor-set! */
	obj_t BGl_z62methodzd2descriptorzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2239, obj_t BgL_oz00_2240, obj_t BgL_vz00_2241)
	{
		{	/* Jas/classfile.sch 313 */
			return
				BGl_methodzd2descriptorzd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2240), BgL_vz00_2241);
		}

	}



/* method-pname */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2pnamezd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_165)
	{
		{	/* Jas/classfile.sch 314 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_165)))->BgL_pnamez00);
		}

	}



/* &method-pname */
	obj_t BGl_z62methodzd2pnamezb0zzjas_classfilez00(obj_t BgL_envz00_2242,
		obj_t BgL_oz00_2243)
	{
		{	/* Jas/classfile.sch 314 */
			return
				BGl_methodzd2pnamezd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2243));
		}

	}



/* method-pname-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2pnamezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_166, obj_t BgL_vz00_167)
	{
		{	/* Jas/classfile.sch 315 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_166)))->
					BgL_pnamez00) = ((obj_t) BgL_vz00_167), BUNSPEC);
		}

	}



/* &method-pname-set! */
	obj_t BGl_z62methodzd2pnamezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2244, obj_t BgL_oz00_2245, obj_t BgL_vz00_2246)
	{
		{	/* Jas/classfile.sch 315 */
			return
				BGl_methodzd2pnamezd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2245), BgL_vz00_2246);
		}

	}



/* method-type */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2typezd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_168)
	{
		{	/* Jas/classfile.sch 316 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_168)))->BgL_typez00);
		}

	}



/* &method-type */
	obj_t BGl_z62methodzd2typezb0zzjas_classfilez00(obj_t BgL_envz00_2247,
		obj_t BgL_oz00_2248)
	{
		{	/* Jas/classfile.sch 316 */
			return
				BGl_methodzd2typezd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2248));
		}

	}



/* method-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2typezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_169, obj_t BgL_vz00_170)
	{
		{	/* Jas/classfile.sch 317 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_169)))->BgL_typez00) =
				((obj_t) BgL_vz00_170), BUNSPEC);
		}

	}



/* &method-type-set! */
	obj_t BGl_z62methodzd2typezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2249, obj_t BgL_oz00_2250, obj_t BgL_vz00_2251)
	{
		{	/* Jas/classfile.sch 317 */
			return
				BGl_methodzd2typezd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2250), BgL_vz00_2251);
		}

	}



/* method-usertype */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2usertypezd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_171)
	{
		{	/* Jas/classfile.sch 318 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_171)))->
				BgL_usertypez00);
		}

	}



/* &method-usertype */
	obj_t BGl_z62methodzd2usertypezb0zzjas_classfilez00(obj_t BgL_envz00_2252,
		obj_t BgL_oz00_2253)
	{
		{	/* Jas/classfile.sch 318 */
			return
				BGl_methodzd2usertypezd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2253));
		}

	}



/* method-usertype-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2usertypezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_172, obj_t BgL_vz00_173)
	{
		{	/* Jas/classfile.sch 319 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_172)))->
					BgL_usertypez00) = ((obj_t) BgL_vz00_173), BUNSPEC);
		}

	}



/* &method-usertype-set! */
	obj_t BGl_z62methodzd2usertypezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2254, obj_t BgL_oz00_2255, obj_t BgL_vz00_2256)
	{
		{	/* Jas/classfile.sch 319 */
			return
				BGl_methodzd2usertypezd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2255), BgL_vz00_2256);
		}

	}



/* method-owner */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2ownerzd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_174)
	{
		{	/* Jas/classfile.sch 320 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_174)))->BgL_ownerz00);
		}

	}



/* &method-owner */
	obj_t BGl_z62methodzd2ownerzb0zzjas_classfilez00(obj_t BgL_envz00_2257,
		obj_t BgL_oz00_2258)
	{
		{	/* Jas/classfile.sch 320 */
			return
				BGl_methodzd2ownerzd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2258));
		}

	}



/* method-owner-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2ownerzd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_175, obj_t BgL_vz00_176)
	{
		{	/* Jas/classfile.sch 321 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_175)))->
					BgL_ownerz00) = ((obj_t) BgL_vz00_176), BUNSPEC);
		}

	}



/* &method-owner-set! */
	obj_t BGl_z62methodzd2ownerzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2259, obj_t BgL_oz00_2260, obj_t BgL_vz00_2261)
	{
		{	/* Jas/classfile.sch 321 */
			return
				BGl_methodzd2ownerzd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2260), BgL_vz00_2261);
		}

	}



/* method-name */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2namezd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_177)
	{
		{	/* Jas/classfile.sch 322 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_177)))->BgL_namez00);
		}

	}



/* &method-name */
	obj_t BGl_z62methodzd2namezb0zzjas_classfilez00(obj_t BgL_envz00_2262,
		obj_t BgL_oz00_2263)
	{
		{	/* Jas/classfile.sch 322 */
			return
				BGl_methodzd2namezd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2263));
		}

	}



/* method-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2namezd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_178, obj_t BgL_vz00_179)
	{
		{	/* Jas/classfile.sch 323 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_178)))->BgL_namez00) =
				((obj_t) BgL_vz00_179), BUNSPEC);
		}

	}



/* &method-name-set! */
	obj_t BGl_z62methodzd2namezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2264, obj_t BgL_oz00_2265, obj_t BgL_vz00_2266)
	{
		{	/* Jas/classfile.sch 323 */
			return
				BGl_methodzd2namezd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2265), BgL_vz00_2266);
		}

	}



/* method-flags */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2flagszd2zzjas_classfilez00(BgL_methodz00_bglt BgL_oz00_180)
	{
		{	/* Jas/classfile.sch 324 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_180)))->BgL_flagsz00);
		}

	}



/* &method-flags */
	obj_t BGl_z62methodzd2flagszb0zzjas_classfilez00(obj_t BgL_envz00_2267,
		obj_t BgL_oz00_2268)
	{
		{	/* Jas/classfile.sch 324 */
			return
				BGl_methodzd2flagszd2zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2268));
		}

	}



/* method-flags-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_methodzd2flagszd2setz12z12zzjas_classfilez00(BgL_methodz00_bglt
		BgL_oz00_181, obj_t BgL_vz00_182)
	{
		{	/* Jas/classfile.sch 325 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_181)))->
					BgL_flagsz00) = ((obj_t) BgL_vz00_182), BUNSPEC);
		}

	}



/* &method-flags-set! */
	obj_t BGl_z62methodzd2flagszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2269, obj_t BgL_oz00_2270, obj_t BgL_vz00_2271)
	{
		{	/* Jas/classfile.sch 325 */
			return
				BGl_methodzd2flagszd2setz12z12zzjas_classfilez00(
				((BgL_methodz00_bglt) BgL_oz00_2270), BgL_vz00_2271);
		}

	}



/* make-attribute */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_makezd2attributezd2zzjas_classfilez00(obj_t BgL_type1149z00_183,
		obj_t BgL_name1150z00_184, obj_t BgL_siza7e1151za7_185,
		obj_t BgL_info1152z00_186)
	{
		{	/* Jas/classfile.sch 328 */
			{	/* Jas/classfile.sch 328 */
				BgL_attributez00_bglt BgL_new1240z00_2906;

				{	/* Jas/classfile.sch 328 */
					BgL_attributez00_bglt BgL_new1239z00_2907;

					BgL_new1239z00_2907 =
						((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_attributez00_bgl))));
					{	/* Jas/classfile.sch 328 */
						long BgL_arg1582z00_2908;

						{	/* Jas/classfile.sch 328 */
							long BgL_res2174z00_2909;

							BgL_res2174z00_2909 =
								BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
							BgL_arg1582z00_2908 = BgL_res2174z00_2909;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1239z00_2907), BgL_arg1582z00_2908);
					}
					BgL_new1240z00_2906 = BgL_new1239z00_2907;
				}
				((((BgL_attributez00_bglt) COBJECT(BgL_new1240z00_2906))->BgL_typez00) =
					((obj_t) BgL_type1149z00_183), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1240z00_2906))->BgL_namez00) =
					((obj_t) BgL_name1150z00_184), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1240z00_2906))->
						BgL_siza7eza7) = ((obj_t) BgL_siza7e1151za7_185), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1240z00_2906))->BgL_infoz00) =
					((obj_t) BgL_info1152z00_186), BUNSPEC);
				return BgL_new1240z00_2906;
			}
		}

	}



/* &make-attribute */
	BgL_attributez00_bglt BGl_z62makezd2attributezb0zzjas_classfilez00(obj_t
		BgL_envz00_2272, obj_t BgL_type1149z00_2273, obj_t BgL_name1150z00_2274,
		obj_t BgL_siza7e1151za7_2275, obj_t BgL_info1152z00_2276)
	{
		{	/* Jas/classfile.sch 328 */
			return
				BGl_makezd2attributezd2zzjas_classfilez00(BgL_type1149z00_2273,
				BgL_name1150z00_2274, BgL_siza7e1151za7_2275, BgL_info1152z00_2276);
		}

	}



/* attribute? */
	BGL_EXPORTED_DEF bool_t BGl_attributezf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_187)
	{
		{	/* Jas/classfile.sch 329 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_187,
				BGl_attributez00zzjas_classfilez00);
		}

	}



/* &attribute? */
	obj_t BGl_z62attributezf3z91zzjas_classfilez00(obj_t BgL_envz00_2277,
		obj_t BgL_objz00_2278)
	{
		{	/* Jas/classfile.sch 329 */
			return BBOOL(BGl_attributezf3zf3zzjas_classfilez00(BgL_objz00_2278));
		}

	}



/* attribute-nil */
	BGL_EXPORTED_DEF BgL_attributez00_bglt
		BGl_attributezd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 330 */
			{	/* Jas/classfile.sch 330 */
				obj_t BgL_classz00_1579;

				BgL_classz00_1579 = BGl_attributez00zzjas_classfilez00;
				{	/* Jas/classfile.sch 330 */
					obj_t BgL__ortest_1106z00_1580;

					BgL__ortest_1106z00_1580 = BGL_CLASS_NIL(BgL_classz00_1579);
					if (CBOOL(BgL__ortest_1106z00_1580))
						{	/* Jas/classfile.sch 330 */
							return ((BgL_attributez00_bglt) BgL__ortest_1106z00_1580);
						}
					else
						{	/* Jas/classfile.sch 330 */
							return
								((BgL_attributez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1579));
						}
				}
			}
		}

	}



/* &attribute-nil */
	BgL_attributez00_bglt BGl_z62attributezd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2279)
	{
		{	/* Jas/classfile.sch 330 */
			return BGl_attributezd2nilzd2zzjas_classfilez00();
		}

	}



/* attribute-info */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2infozd2zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_188)
	{
		{	/* Jas/classfile.sch 331 */
			return (((BgL_attributez00_bglt) COBJECT(BgL_oz00_188))->BgL_infoz00);
		}

	}



/* &attribute-info */
	obj_t BGl_z62attributezd2infozb0zzjas_classfilez00(obj_t BgL_envz00_2280,
		obj_t BgL_oz00_2281)
	{
		{	/* Jas/classfile.sch 331 */
			return
				BGl_attributezd2infozd2zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2281));
		}

	}



/* attribute-info-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2infozd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_189, obj_t BgL_vz00_190)
	{
		{	/* Jas/classfile.sch 332 */
			return
				((((BgL_attributez00_bglt) COBJECT(BgL_oz00_189))->BgL_infoz00) =
				((obj_t) BgL_vz00_190), BUNSPEC);
		}

	}



/* &attribute-info-set! */
	obj_t BGl_z62attributezd2infozd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2282, obj_t BgL_oz00_2283, obj_t BgL_vz00_2284)
	{
		{	/* Jas/classfile.sch 332 */
			return
				BGl_attributezd2infozd2setz12z12zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2283), BgL_vz00_2284);
		}

	}



/* attribute-size */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2siza7ez75zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_191)
	{
		{	/* Jas/classfile.sch 333 */
			return (((BgL_attributez00_bglt) COBJECT(BgL_oz00_191))->BgL_siza7eza7);
		}

	}



/* &attribute-size */
	obj_t BGl_z62attributezd2siza7ez17zzjas_classfilez00(obj_t BgL_envz00_2285,
		obj_t BgL_oz00_2286)
	{
		{	/* Jas/classfile.sch 333 */
			return
				BGl_attributezd2siza7ez75zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2286));
		}

	}



/* attribute-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2siza7ezd2setz12zb5zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_192, obj_t BgL_vz00_193)
	{
		{	/* Jas/classfile.sch 334 */
			return
				((((BgL_attributez00_bglt) COBJECT(BgL_oz00_192))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_193), BUNSPEC);
		}

	}



/* &attribute-size-set! */
	obj_t BGl_z62attributezd2siza7ezd2setz12zd7zzjas_classfilez00(obj_t
		BgL_envz00_2287, obj_t BgL_oz00_2288, obj_t BgL_vz00_2289)
	{
		{	/* Jas/classfile.sch 334 */
			return
				BGl_attributezd2siza7ezd2setz12zb5zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2288), BgL_vz00_2289);
		}

	}



/* attribute-name */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2namezd2zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_194)
	{
		{	/* Jas/classfile.sch 335 */
			return (((BgL_attributez00_bglt) COBJECT(BgL_oz00_194))->BgL_namez00);
		}

	}



/* &attribute-name */
	obj_t BGl_z62attributezd2namezb0zzjas_classfilez00(obj_t BgL_envz00_2290,
		obj_t BgL_oz00_2291)
	{
		{	/* Jas/classfile.sch 335 */
			return
				BGl_attributezd2namezd2zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2291));
		}

	}



/* attribute-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2namezd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_195, obj_t BgL_vz00_196)
	{
		{	/* Jas/classfile.sch 336 */
			return
				((((BgL_attributez00_bglt) COBJECT(BgL_oz00_195))->BgL_namez00) =
				((obj_t) BgL_vz00_196), BUNSPEC);
		}

	}



/* &attribute-name-set! */
	obj_t BGl_z62attributezd2namezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2292, obj_t BgL_oz00_2293, obj_t BgL_vz00_2294)
	{
		{	/* Jas/classfile.sch 336 */
			return
				BGl_attributezd2namezd2setz12z12zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2293), BgL_vz00_2294);
		}

	}



/* attribute-type */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2typezd2zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_197)
	{
		{	/* Jas/classfile.sch 337 */
			return (((BgL_attributez00_bglt) COBJECT(BgL_oz00_197))->BgL_typez00);
		}

	}



/* &attribute-type */
	obj_t BGl_z62attributezd2typezb0zzjas_classfilez00(obj_t BgL_envz00_2295,
		obj_t BgL_oz00_2296)
	{
		{	/* Jas/classfile.sch 337 */
			return
				BGl_attributezd2typezd2zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2296));
		}

	}



/* attribute-type-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_attributezd2typezd2setz12z12zzjas_classfilez00(BgL_attributez00_bglt
		BgL_oz00_198, obj_t BgL_vz00_199)
	{
		{	/* Jas/classfile.sch 338 */
			return
				((((BgL_attributez00_bglt) COBJECT(BgL_oz00_198))->BgL_typez00) =
				((obj_t) BgL_vz00_199), BUNSPEC);
		}

	}



/* &attribute-type-set! */
	obj_t BGl_z62attributezd2typezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2297, obj_t BgL_oz00_2298, obj_t BgL_vz00_2299)
	{
		{	/* Jas/classfile.sch 338 */
			return
				BGl_attributezd2typezd2setz12z12zzjas_classfilez00(
				((BgL_attributez00_bglt) BgL_oz00_2298), BgL_vz00_2299);
		}

	}



/* make-classfile */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_makezd2classfilezd2zzjas_classfilez00(obj_t
		BgL_currentzd2method1136zd2_200, obj_t BgL_globals1137z00_201,
		obj_t BgL_pool1138z00_202, obj_t BgL_poolzd2siza7e1139z75_203,
		obj_t BgL_pooledzd2names1140zd2_204, obj_t BgL_flags1141z00_205,
		obj_t BgL_me1142z00_206, obj_t BgL_super1143z00_207,
		obj_t BgL_interfaces1144z00_208, obj_t BgL_fields1145z00_209,
		obj_t BgL_methods1146z00_210, obj_t BgL_attributes1147z00_211)
	{
		{	/* Jas/classfile.sch 341 */
			{	/* Jas/classfile.sch 341 */
				BgL_classfilez00_bglt BgL_new1250z00_2910;

				{	/* Jas/classfile.sch 341 */
					BgL_classfilez00_bglt BgL_new1249z00_2911;

					BgL_new1249z00_2911 =
						((BgL_classfilez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_classfilez00_bgl))));
					{	/* Jas/classfile.sch 341 */
						long BgL_arg1584z00_2912;

						{	/* Jas/classfile.sch 341 */
							long BgL_res2175z00_2913;

							BgL_res2175z00_2913 =
								BGL_CLASS_INDEX(BGl_classfilez00zzjas_classfilez00);
							BgL_arg1584z00_2912 = BgL_res2175z00_2913;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1249z00_2911), BgL_arg1584z00_2912);
					}
					BgL_new1250z00_2910 = BgL_new1249z00_2911;
				}
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_currentzd2methodzd2) =
					((obj_t) BgL_currentzd2method1136zd2_200), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_globalsz00) = ((obj_t) BgL_globals1137z00_201), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->BgL_poolz00) =
					((obj_t) BgL_pool1138z00_202), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_poolzd2siza7ez75) =
					((obj_t) BgL_poolzd2siza7e1139z75_203), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_pooledzd2nameszd2) =
					((obj_t) BgL_pooledzd2names1140zd2_204), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_flagsz00) = ((obj_t) BgL_flags1141z00_205), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->BgL_mez00) =
					((obj_t) BgL_me1142z00_206), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_superz00) = ((obj_t) BgL_super1143z00_207), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_interfacesz00) = ((obj_t) BgL_interfaces1144z00_208), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_fieldsz00) = ((obj_t) BgL_fields1145z00_209), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_methodsz00) = ((obj_t) BgL_methods1146z00_210), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1250z00_2910))->
						BgL_attributesz00) = ((obj_t) BgL_attributes1147z00_211), BUNSPEC);
				return BgL_new1250z00_2910;
			}
		}

	}



/* &make-classfile */
	BgL_classfilez00_bglt BGl_z62makezd2classfilezb0zzjas_classfilez00(obj_t
		BgL_envz00_2300, obj_t BgL_currentzd2method1136zd2_2301,
		obj_t BgL_globals1137z00_2302, obj_t BgL_pool1138z00_2303,
		obj_t BgL_poolzd2siza7e1139z75_2304, obj_t BgL_pooledzd2names1140zd2_2305,
		obj_t BgL_flags1141z00_2306, obj_t BgL_me1142z00_2307,
		obj_t BgL_super1143z00_2308, obj_t BgL_interfaces1144z00_2309,
		obj_t BgL_fields1145z00_2310, obj_t BgL_methods1146z00_2311,
		obj_t BgL_attributes1147z00_2312)
	{
		{	/* Jas/classfile.sch 341 */
			return
				BGl_makezd2classfilezd2zzjas_classfilez00
				(BgL_currentzd2method1136zd2_2301, BgL_globals1137z00_2302,
				BgL_pool1138z00_2303, BgL_poolzd2siza7e1139z75_2304,
				BgL_pooledzd2names1140zd2_2305, BgL_flags1141z00_2306,
				BgL_me1142z00_2307, BgL_super1143z00_2308, BgL_interfaces1144z00_2309,
				BgL_fields1145z00_2310, BgL_methods1146z00_2311,
				BgL_attributes1147z00_2312);
		}

	}



/* classfile? */
	BGL_EXPORTED_DEF bool_t BGl_classfilezf3zf3zzjas_classfilez00(obj_t
		BgL_objz00_212)
	{
		{	/* Jas/classfile.sch 342 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_212,
				BGl_classfilez00zzjas_classfilez00);
		}

	}



/* &classfile? */
	obj_t BGl_z62classfilezf3z91zzjas_classfilez00(obj_t BgL_envz00_2313,
		obj_t BgL_objz00_2314)
	{
		{	/* Jas/classfile.sch 342 */
			return BBOOL(BGl_classfilezf3zf3zzjas_classfilez00(BgL_objz00_2314));
		}

	}



/* classfile-nil */
	BGL_EXPORTED_DEF BgL_classfilez00_bglt
		BGl_classfilezd2nilzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.sch 343 */
			{	/* Jas/classfile.sch 343 */
				obj_t BgL_classz00_1596;

				BgL_classz00_1596 = BGl_classfilez00zzjas_classfilez00;
				{	/* Jas/classfile.sch 343 */
					obj_t BgL__ortest_1106z00_1597;

					BgL__ortest_1106z00_1597 = BGL_CLASS_NIL(BgL_classz00_1596);
					if (CBOOL(BgL__ortest_1106z00_1597))
						{	/* Jas/classfile.sch 343 */
							return ((BgL_classfilez00_bglt) BgL__ortest_1106z00_1597);
						}
					else
						{	/* Jas/classfile.sch 343 */
							return
								((BgL_classfilez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_1596));
						}
				}
			}
		}

	}



/* &classfile-nil */
	BgL_classfilez00_bglt BGl_z62classfilezd2nilzb0zzjas_classfilez00(obj_t
		BgL_envz00_2315)
	{
		{	/* Jas/classfile.sch 343 */
			return BGl_classfilezd2nilzd2zzjas_classfilez00();
		}

	}



/* classfile-attributes */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2attributeszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_213)
	{
		{	/* Jas/classfile.sch 344 */
			return
				(((BgL_classfilez00_bglt) COBJECT(BgL_oz00_213))->BgL_attributesz00);
		}

	}



/* &classfile-attributes */
	obj_t BGl_z62classfilezd2attributeszb0zzjas_classfilez00(obj_t
		BgL_envz00_2316, obj_t BgL_oz00_2317)
	{
		{	/* Jas/classfile.sch 344 */
			return
				BGl_classfilezd2attributeszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2317));
		}

	}



/* classfile-attributes-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2attributeszd2setz12z12zzjas_classfilez00
		(BgL_classfilez00_bglt BgL_oz00_214, obj_t BgL_vz00_215)
	{
		{	/* Jas/classfile.sch 345 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_214))->BgL_attributesz00) =
				((obj_t) BgL_vz00_215), BUNSPEC);
		}

	}



/* &classfile-attributes-set! */
	obj_t BGl_z62classfilezd2attributeszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2318, obj_t BgL_oz00_2319, obj_t BgL_vz00_2320)
	{
		{	/* Jas/classfile.sch 345 */
			return
				BGl_classfilezd2attributeszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2319), BgL_vz00_2320);
		}

	}



/* classfile-methods */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2methodszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_216)
	{
		{	/* Jas/classfile.sch 346 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_216))->BgL_methodsz00);
		}

	}



/* &classfile-methods */
	obj_t BGl_z62classfilezd2methodszb0zzjas_classfilez00(obj_t BgL_envz00_2321,
		obj_t BgL_oz00_2322)
	{
		{	/* Jas/classfile.sch 346 */
			return
				BGl_classfilezd2methodszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2322));
		}

	}



/* classfile-methods-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2methodszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_217, obj_t BgL_vz00_218)
	{
		{	/* Jas/classfile.sch 347 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_217))->BgL_methodsz00) =
				((obj_t) BgL_vz00_218), BUNSPEC);
		}

	}



/* &classfile-methods-set! */
	obj_t BGl_z62classfilezd2methodszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2323, obj_t BgL_oz00_2324, obj_t BgL_vz00_2325)
	{
		{	/* Jas/classfile.sch 347 */
			return
				BGl_classfilezd2methodszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2324), BgL_vz00_2325);
		}

	}



/* classfile-fields */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2fieldszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_219)
	{
		{	/* Jas/classfile.sch 348 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_219))->BgL_fieldsz00);
		}

	}



/* &classfile-fields */
	obj_t BGl_z62classfilezd2fieldszb0zzjas_classfilez00(obj_t BgL_envz00_2326,
		obj_t BgL_oz00_2327)
	{
		{	/* Jas/classfile.sch 348 */
			return
				BGl_classfilezd2fieldszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2327));
		}

	}



/* classfile-fields-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2fieldszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_220, obj_t BgL_vz00_221)
	{
		{	/* Jas/classfile.sch 349 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_220))->BgL_fieldsz00) =
				((obj_t) BgL_vz00_221), BUNSPEC);
		}

	}



/* &classfile-fields-set! */
	obj_t BGl_z62classfilezd2fieldszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2328, obj_t BgL_oz00_2329, obj_t BgL_vz00_2330)
	{
		{	/* Jas/classfile.sch 349 */
			return
				BGl_classfilezd2fieldszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2329), BgL_vz00_2330);
		}

	}



/* classfile-interfaces */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2interfaceszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_222)
	{
		{	/* Jas/classfile.sch 350 */
			return
				(((BgL_classfilez00_bglt) COBJECT(BgL_oz00_222))->BgL_interfacesz00);
		}

	}



/* &classfile-interfaces */
	obj_t BGl_z62classfilezd2interfaceszb0zzjas_classfilez00(obj_t
		BgL_envz00_2331, obj_t BgL_oz00_2332)
	{
		{	/* Jas/classfile.sch 350 */
			return
				BGl_classfilezd2interfaceszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2332));
		}

	}



/* classfile-interfaces-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2interfaceszd2setz12z12zzjas_classfilez00
		(BgL_classfilez00_bglt BgL_oz00_223, obj_t BgL_vz00_224)
	{
		{	/* Jas/classfile.sch 351 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_223))->BgL_interfacesz00) =
				((obj_t) BgL_vz00_224), BUNSPEC);
		}

	}



/* &classfile-interfaces-set! */
	obj_t BGl_z62classfilezd2interfaceszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2333, obj_t BgL_oz00_2334, obj_t BgL_vz00_2335)
	{
		{	/* Jas/classfile.sch 351 */
			return
				BGl_classfilezd2interfaceszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2334), BgL_vz00_2335);
		}

	}



/* classfile-super */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2superzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_225)
	{
		{	/* Jas/classfile.sch 352 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_225))->BgL_superz00);
		}

	}



/* &classfile-super */
	obj_t BGl_z62classfilezd2superzb0zzjas_classfilez00(obj_t BgL_envz00_2336,
		obj_t BgL_oz00_2337)
	{
		{	/* Jas/classfile.sch 352 */
			return
				BGl_classfilezd2superzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2337));
		}

	}



/* classfile-super-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2superzd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_226, obj_t BgL_vz00_227)
	{
		{	/* Jas/classfile.sch 353 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_226))->BgL_superz00) =
				((obj_t) BgL_vz00_227), BUNSPEC);
		}

	}



/* &classfile-super-set! */
	obj_t BGl_z62classfilezd2superzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2338, obj_t BgL_oz00_2339, obj_t BgL_vz00_2340)
	{
		{	/* Jas/classfile.sch 353 */
			return
				BGl_classfilezd2superzd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2339), BgL_vz00_2340);
		}

	}



/* classfile-me */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2mezd2zzjas_classfilez00(BgL_classfilez00_bglt BgL_oz00_228)
	{
		{	/* Jas/classfile.sch 354 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_228))->BgL_mez00);
		}

	}



/* &classfile-me */
	obj_t BGl_z62classfilezd2mezb0zzjas_classfilez00(obj_t BgL_envz00_2341,
		obj_t BgL_oz00_2342)
	{
		{	/* Jas/classfile.sch 354 */
			return
				BGl_classfilezd2mezd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2342));
		}

	}



/* classfile-me-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2mezd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_229, obj_t BgL_vz00_230)
	{
		{	/* Jas/classfile.sch 355 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_229))->BgL_mez00) =
				((obj_t) BgL_vz00_230), BUNSPEC);
		}

	}



/* &classfile-me-set! */
	obj_t BGl_z62classfilezd2mezd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2343, obj_t BgL_oz00_2344, obj_t BgL_vz00_2345)
	{
		{	/* Jas/classfile.sch 355 */
			return
				BGl_classfilezd2mezd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2344), BgL_vz00_2345);
		}

	}



/* classfile-flags */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2flagszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_231)
	{
		{	/* Jas/classfile.sch 356 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_231))->BgL_flagsz00);
		}

	}



/* &classfile-flags */
	obj_t BGl_z62classfilezd2flagszb0zzjas_classfilez00(obj_t BgL_envz00_2346,
		obj_t BgL_oz00_2347)
	{
		{	/* Jas/classfile.sch 356 */
			return
				BGl_classfilezd2flagszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2347));
		}

	}



/* classfile-flags-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2flagszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_232, obj_t BgL_vz00_233)
	{
		{	/* Jas/classfile.sch 357 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_232))->BgL_flagsz00) =
				((obj_t) BgL_vz00_233), BUNSPEC);
		}

	}



/* &classfile-flags-set! */
	obj_t BGl_z62classfilezd2flagszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2348, obj_t BgL_oz00_2349, obj_t BgL_vz00_2350)
	{
		{	/* Jas/classfile.sch 357 */
			return
				BGl_classfilezd2flagszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2349), BgL_vz00_2350);
		}

	}



/* classfile-pooled-names */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2pooledzd2namesz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_234)
	{
		{	/* Jas/classfile.sch 358 */
			return
				(((BgL_classfilez00_bglt) COBJECT(BgL_oz00_234))->
				BgL_pooledzd2nameszd2);
		}

	}



/* &classfile-pooled-names */
	obj_t BGl_z62classfilezd2pooledzd2namesz62zzjas_classfilez00(obj_t
		BgL_envz00_2351, obj_t BgL_oz00_2352)
	{
		{	/* Jas/classfile.sch 358 */
			return
				BGl_classfilezd2pooledzd2namesz00zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2352));
		}

	}



/* classfile-pooled-names-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2pooledzd2nameszd2setz12zc0zzjas_classfilez00
		(BgL_classfilez00_bglt BgL_oz00_235, obj_t BgL_vz00_236)
	{
		{	/* Jas/classfile.sch 359 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_235))->
					BgL_pooledzd2nameszd2) = ((obj_t) BgL_vz00_236), BUNSPEC);
		}

	}



/* &classfile-pooled-names-set! */
	obj_t BGl_z62classfilezd2pooledzd2nameszd2setz12za2zzjas_classfilez00(obj_t
		BgL_envz00_2353, obj_t BgL_oz00_2354, obj_t BgL_vz00_2355)
	{
		{	/* Jas/classfile.sch 359 */
			return
				BGl_classfilezd2pooledzd2nameszd2setz12zc0zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2354), BgL_vz00_2355);
		}

	}



/* classfile-pool-size */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2poolzd2siza7eza7zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_237)
	{
		{	/* Jas/classfile.sch 360 */
			return
				(((BgL_classfilez00_bglt) COBJECT(BgL_oz00_237))->BgL_poolzd2siza7ez75);
		}

	}



/* &classfile-pool-size */
	obj_t BGl_z62classfilezd2poolzd2siza7ezc5zzjas_classfilez00(obj_t
		BgL_envz00_2356, obj_t BgL_oz00_2357)
	{
		{	/* Jas/classfile.sch 360 */
			return
				BGl_classfilezd2poolzd2siza7eza7zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2357));
		}

	}



/* classfile-pool-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2poolzd2siza7ezd2setz12z67zzjas_classfilez00
		(BgL_classfilez00_bglt BgL_oz00_238, obj_t BgL_vz00_239)
	{
		{	/* Jas/classfile.sch 361 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_238))->
					BgL_poolzd2siza7ez75) = ((obj_t) BgL_vz00_239), BUNSPEC);
		}

	}



/* &classfile-pool-size-set! */
	obj_t BGl_z62classfilezd2poolzd2siza7ezd2setz12z05zzjas_classfilez00(obj_t
		BgL_envz00_2358, obj_t BgL_oz00_2359, obj_t BgL_vz00_2360)
	{
		{	/* Jas/classfile.sch 361 */
			return
				BGl_classfilezd2poolzd2siza7ezd2setz12z67zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2359), BgL_vz00_2360);
		}

	}



/* classfile-pool */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2poolzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_240)
	{
		{	/* Jas/classfile.sch 362 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_240))->BgL_poolz00);
		}

	}



/* &classfile-pool */
	obj_t BGl_z62classfilezd2poolzb0zzjas_classfilez00(obj_t BgL_envz00_2361,
		obj_t BgL_oz00_2362)
	{
		{	/* Jas/classfile.sch 362 */
			return
				BGl_classfilezd2poolzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2362));
		}

	}



/* classfile-pool-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2poolzd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_241, obj_t BgL_vz00_242)
	{
		{	/* Jas/classfile.sch 363 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_241))->BgL_poolz00) =
				((obj_t) BgL_vz00_242), BUNSPEC);
		}

	}



/* &classfile-pool-set! */
	obj_t BGl_z62classfilezd2poolzd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2363, obj_t BgL_oz00_2364, obj_t BgL_vz00_2365)
	{
		{	/* Jas/classfile.sch 363 */
			return
				BGl_classfilezd2poolzd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2364), BgL_vz00_2365);
		}

	}



/* classfile-globals */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2globalszd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_243)
	{
		{	/* Jas/classfile.sch 364 */
			return (((BgL_classfilez00_bglt) COBJECT(BgL_oz00_243))->BgL_globalsz00);
		}

	}



/* &classfile-globals */
	obj_t BGl_z62classfilezd2globalszb0zzjas_classfilez00(obj_t BgL_envz00_2366,
		obj_t BgL_oz00_2367)
	{
		{	/* Jas/classfile.sch 364 */
			return
				BGl_classfilezd2globalszd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2367));
		}

	}



/* classfile-globals-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2globalszd2setz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_244, obj_t BgL_vz00_245)
	{
		{	/* Jas/classfile.sch 365 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_244))->BgL_globalsz00) =
				((obj_t) BgL_vz00_245), BUNSPEC);
		}

	}



/* &classfile-globals-set! */
	obj_t BGl_z62classfilezd2globalszd2setz12z70zzjas_classfilez00(obj_t
		BgL_envz00_2368, obj_t BgL_oz00_2369, obj_t BgL_vz00_2370)
	{
		{	/* Jas/classfile.sch 365 */
			return
				BGl_classfilezd2globalszd2setz12z12zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2369), BgL_vz00_2370);
		}

	}



/* classfile-current-method */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2currentzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_oz00_246)
	{
		{	/* Jas/classfile.sch 366 */
			return
				(((BgL_classfilez00_bglt) COBJECT(BgL_oz00_246))->
				BgL_currentzd2methodzd2);
		}

	}



/* &classfile-current-method */
	obj_t BGl_z62classfilezd2currentzd2methodz62zzjas_classfilez00(obj_t
		BgL_envz00_2371, obj_t BgL_oz00_2372)
	{
		{	/* Jas/classfile.sch 366 */
			return
				BGl_classfilezd2currentzd2methodz00zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2372));
		}

	}



/* classfile-current-method-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_classfilezd2currentzd2methodzd2setz12zc0zzjas_classfilez00
		(BgL_classfilez00_bglt BgL_oz00_247, obj_t BgL_vz00_248)
	{
		{	/* Jas/classfile.sch 367 */
			return
				((((BgL_classfilez00_bglt) COBJECT(BgL_oz00_247))->
					BgL_currentzd2methodzd2) = ((obj_t) BgL_vz00_248), BUNSPEC);
		}

	}



/* &classfile-current-method-set! */
	obj_t BGl_z62classfilezd2currentzd2methodzd2setz12za2zzjas_classfilez00(obj_t
		BgL_envz00_2373, obj_t BgL_oz00_2374, obj_t BgL_vz00_2375)
	{
		{	/* Jas/classfile.sch 367 */
			return
				BGl_classfilezd2currentzd2methodzd2setz12zc0zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_oz00_2374), BgL_vz00_2375);
		}

	}



/* jas-error */
	BGL_EXPORTED_DEF obj_t
		BGl_jaszd2errorzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_249, obj_t BgL_msgz00_250, obj_t BgL_argz00_251)
	{
		{	/* Jas/classfile.scm 89 */
			return
				BGl_errorz00zz__errorz00(
				(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_249))->
					BgL_currentzd2methodzd2), BgL_msgz00_250, BgL_argz00_251);
		}

	}



/* &jas-error */
	obj_t BGl_z62jaszd2errorzb0zzjas_classfilez00(obj_t BgL_envz00_2376,
		obj_t BgL_classfilez00_2377, obj_t BgL_msgz00_2378, obj_t BgL_argz00_2379)
	{
		{	/* Jas/classfile.scm 89 */
			return
				BGl_jaszd2errorzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2377), BgL_msgz00_2378,
				BgL_argz00_2379);
		}

	}



/* jas-warning */
	BGL_EXPORTED_DEF obj_t
		BGl_jaszd2warningzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_252, obj_t BgL_msgz00_253, obj_t BgL_argz00_254)
	{
		{	/* Jas/classfile.scm 92 */
			{	/* Jas/classfile.scm 93 */
				obj_t BgL_port1335z00_546;

				{	/* Jas/classfile.scm 93 */
					obj_t BgL_res2176z00_1626;

					{	/* Jas/classfile.scm 93 */
						obj_t BgL_tmpz00_3892;

						BgL_tmpz00_3892 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res2176z00_1626 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3892);
					}
					BgL_port1335z00_546 = BgL_res2176z00_1626;
				}
				bgl_display_string(BGl_string2264z00zzjas_classfilez00,
					BgL_port1335z00_546);
				bgl_display_obj((((BgL_classfilez00_bglt)
							COBJECT(BgL_classfilez00_252))->BgL_currentzd2methodzd2),
					BgL_port1335z00_546);
				bgl_display_string(BGl_string2265z00zzjas_classfilez00,
					BgL_port1335z00_546);
				bgl_display_string(BGl_string2265z00zzjas_classfilez00,
					BgL_port1335z00_546);
				bgl_display_obj(BgL_msgz00_253, BgL_port1335z00_546);
				bgl_display_string(BGl_string2265z00zzjas_classfilez00,
					BgL_port1335z00_546);
				bgl_display_obj(BgL_argz00_254, BgL_port1335z00_546);
				bgl_display_char(((unsigned char) 10), BgL_port1335z00_546);
			}
			return CNST_TABLE_REF(((long) 9));
		}

	}



/* &jas-warning */
	obj_t BGl_z62jaszd2warningzb0zzjas_classfilez00(obj_t BgL_envz00_2380,
		obj_t BgL_classfilez00_2381, obj_t BgL_msgz00_2382, obj_t BgL_argz00_2383)
	{
		{	/* Jas/classfile.scm 92 */
			return
				BGl_jaszd2warningzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2381), BgL_msgz00_2382,
				BgL_argz00_2383);
		}

	}



/* as-type */
	BGL_EXPORTED_DEF BgL_jastypez00_bglt
		BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_255, obj_t BgL_typedeclz00_256)
	{
		{	/* Jas/classfile.scm 118 */
			{
				obj_t BgL_namez00_579;

				{

					if (PAIRP(BgL_typedeclz00_256))
						{	/* Jas/classfile.scm 124 */
							obj_t BgL_cdrzd2110zd2_557;

							BgL_cdrzd2110zd2_557 = CDR(BgL_typedeclz00_256);
							if ((CAR(BgL_typedeclz00_256) == CNST_TABLE_REF(((long) 11))))
								{	/* Jas/classfile.scm 124 */
									if (PAIRP(BgL_cdrzd2110zd2_557))
										{	/* Jas/classfile.scm 124 */
											if (NULLP(CDR(BgL_cdrzd2110zd2_557)))
												{	/* Jas/classfile.scm 124 */
													obj_t BgL_arg1599z00_563;

													BgL_arg1599z00_563 = CAR(BgL_cdrzd2110zd2_557);
													{	/* Jas/classfile.scm 126 */
														BgL_jastypez00_bglt BgL_eltzd2typezd2_1653;

														BgL_eltzd2typezd2_1653 =
															BGl_aszd2typezd2zzjas_classfilez00
															(BgL_classfilez00_255, BgL_arg1599z00_563);
														return ((BgL_jastypez00_bglt)
															BGl_getzd2vectzd2typez00zzjas_classfilez00
															(BgL_eltzd2typezd2_1653));
													}
												}
											else
												{
													obj_t BgL_auxz00_3923;

												BgL_tagzd2103zd2_554:
													{	/* Jas/classfile.scm 132 */
														obj_t BgL_g1295z00_574;

														BgL_g1295z00_574 =
															BGl_assqz00zz__r4_pairs_and_lists_6_3z00
															(BgL_typedeclz00_256,
															BGl_basiczd2encodedzd2typez00zzjas_classfilez00);
														if (CBOOL(BgL_g1295z00_574))
															{	/* Jas/classfile.scm 132 */
																BgL_auxz00_3923 =
																	CDR(((obj_t) BgL_g1295z00_574));
															}
														else
															{	/* Jas/classfile.scm 133 */
																obj_t BgL_g1297z00_576;

																BgL_namez00_579 = BgL_typedeclz00_256;
																{	/* Jas/classfile.scm 120 */
																	obj_t BgL_valuez00_581;

																	BgL_valuez00_581 =
																		BGl_getpropz00zz__r4_symbols_6_4z00
																		(BgL_namez00_579,
																		CNST_TABLE_REF(((long) 10)));
																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_valuez00_581,
																			BGl_classez00zzjas_classfilez00))
																		{	/* Jas/classfile.scm 121 */
																			BgL_g1297z00_576 = BgL_valuez00_581;
																		}
																	else
																		{	/* Jas/classfile.scm 121 */
																			BgL_g1297z00_576 = BFALSE;
																		}
																}
																if (CBOOL(BgL_g1297z00_576))
																	{	/* Jas/classfile.scm 133 */
																		BgL_auxz00_3923 = BgL_g1297z00_576;
																	}
																else
																	{	/* Jas/classfile.scm 133 */
																		BgL_auxz00_3923 =
																			BGl_errorz00zz__errorz00(
																			(((BgL_classfilez00_bglt)
																					COBJECT(BgL_classfilez00_255))->
																				BgL_currentzd2methodzd2),
																			BGl_string2266z00zzjas_classfilez00,
																			BgL_typedeclz00_256);
																	}
															}
													}
													return ((BgL_jastypez00_bglt) BgL_auxz00_3923);
												}
										}
									else
										{
											obj_t BgL_auxz00_3938;

											goto BgL_tagzd2103zd2_554;
											return ((BgL_jastypez00_bglt) BgL_auxz00_3938);
										}
								}
							else
								{	/* Jas/classfile.scm 124 */
									if ((CAR(BgL_typedeclz00_256) == CNST_TABLE_REF(((long) 12))))
										{	/* Jas/classfile.scm 124 */
											if (PAIRP(BgL_cdrzd2110zd2_557))
												{	/* Jas/classfile.scm 124 */
													obj_t BgL_arg1611z00_569;
													obj_t BgL_arg1612z00_570;

													BgL_arg1611z00_569 = CAR(BgL_cdrzd2110zd2_557);
													BgL_arg1612z00_570 = CDR(BgL_cdrzd2110zd2_557);
													return
														((BgL_jastypez00_bglt)
														BGl_aszd2funtypezd2zzjas_classfilez00
														(BgL_classfilez00_255, BgL_arg1611z00_569,
															BgL_arg1612z00_570));
												}
											else
												{
													obj_t BgL_auxz00_3950;

													goto BgL_tagzd2103zd2_554;
													return ((BgL_jastypez00_bglt) BgL_auxz00_3950);
												}
										}
									else
										{
											obj_t BgL_auxz00_3952;

											goto BgL_tagzd2103zd2_554;
											return ((BgL_jastypez00_bglt) BgL_auxz00_3952);
										}
								}
						}
					else
						{
							obj_t BgL_auxz00_3954;

							goto BgL_tagzd2103zd2_554;
							return ((BgL_jastypez00_bglt) BgL_auxz00_3954);
						}
				}
			}
		}

	}



/* &as-type */
	BgL_jastypez00_bglt BGl_z62aszd2typezb0zzjas_classfilez00(obj_t
		BgL_envz00_2384, obj_t BgL_classfilez00_2385, obj_t BgL_typedeclz00_2386)
	{
		{	/* Jas/classfile.scm 118 */
			return
				BGl_aszd2typezd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2385), BgL_typedeclz00_2386);
		}

	}



/* get-vect-type */
	obj_t BGl_getzd2vectzd2typez00zzjas_classfilez00(BgL_jastypez00_bglt
		BgL_typez00_257)
	{
		{	/* Jas/classfile.scm 136 */
			if (CBOOL(
					(((BgL_jastypez00_bglt) COBJECT(BgL_typez00_257))->BgL_vectz00)))
				{	/* Jas/classfile.scm 138 */
					return
						(((BgL_jastypez00_bglt) COBJECT(BgL_typez00_257))->BgL_vectz00);
				}
			else
				{	/* Jas/classfile.scm 140 */
					BgL_vectz00_bglt BgL_rz00_586;

					{	/* Jas/classfile.scm 140 */
						BgL_vectz00_bglt BgL_new1301z00_587;

						{	/* Jas/classfile.scm 141 */
							BgL_vectz00_bglt BgL_new1300z00_589;

							BgL_new1300z00_589 =
								((BgL_vectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_vectz00_bgl))));
							{	/* Jas/classfile.scm 141 */
								long BgL_arg1634z00_590;

								{	/* Jas/classfile.scm 141 */
									long BgL_res2182z00_1660;

									BgL_res2182z00_1660 =
										BGL_CLASS_INDEX(BGl_vectz00zzjas_classfilez00);
									BgL_arg1634z00_590 = BgL_res2182z00_1660;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1300z00_589),
									BgL_arg1634z00_590);
							}
							BgL_new1301z00_587 = BgL_new1300z00_589;
						}
						{
							obj_t BgL_auxz00_3966;

							{	/* Jas/classfile.scm 141 */
								obj_t BgL_arg1631z00_588;

								BgL_arg1631z00_588 =
									(((BgL_jastypez00_bglt) COBJECT(BgL_typez00_257))->
									BgL_codez00);
								BgL_auxz00_3966 =
									string_append(BGl_string2267z00zzjas_classfilez00,
									BgL_arg1631z00_588);
							}
							((((BgL_jastypez00_bglt) COBJECT(
											((BgL_jastypez00_bglt) BgL_new1301z00_587)))->
									BgL_codez00) = ((obj_t) BgL_auxz00_3966), BUNSPEC);
						}
						((((BgL_jastypez00_bglt) COBJECT(
										((BgL_jastypez00_bglt) BgL_new1301z00_587)))->BgL_vectz00) =
							((obj_t) BFALSE), BUNSPEC);
						((((BgL_vectz00_bglt) COBJECT(BgL_new1301z00_587))->BgL_typez00) =
							((BgL_jastypez00_bglt) BgL_typez00_257), BUNSPEC);
						BgL_rz00_586 = BgL_new1301z00_587;
					}
					((((BgL_jastypez00_bglt) COBJECT(BgL_typez00_257))->BgL_vectz00) =
						((obj_t) ((obj_t) BgL_rz00_586)), BUNSPEC);
					return ((obj_t) BgL_rz00_586);
				}
		}

	}



/* as-funtype */
	BGL_EXPORTED_DEF BgL_jasfunz00_bglt
		BGl_aszd2funtypezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_258, obj_t BgL_tretz00_259, obj_t BgL_targsz00_260)
	{
		{	/* Jas/classfile.scm 146 */
			{	/* Jas/classfile.scm 147 */
				BgL_jastypez00_bglt BgL_tretz00_591;
				obj_t BgL_targsz00_592;

				BgL_tretz00_591 =
					BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_258,
					BgL_tretz00_259);
				if (NULLP(BgL_targsz00_260))
					{	/* Jas/classfile.scm 148 */
						BgL_targsz00_592 = BNIL;
					}
				else
					{	/* Jas/classfile.scm 148 */
						obj_t BgL_head1338z00_621;

						{	/* Jas/classfile.scm 148 */
							obj_t BgL_res2184z00_1664;

							BgL_res2184z00_1664 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1338z00_621 = BgL_res2184z00_1664;
						}
						{
							obj_t BgL_l1336z00_623;
							obj_t BgL_tail1339z00_624;

							BgL_l1336z00_623 = BgL_targsz00_260;
							BgL_tail1339z00_624 = BgL_head1338z00_621;
						BgL_zc3z04anonymousza31689ze3z87_625:
							if (NULLP(BgL_l1336z00_623))
								{	/* Jas/classfile.scm 148 */
									BgL_targsz00_592 = CDR(BgL_head1338z00_621);
								}
							else
								{	/* Jas/classfile.scm 148 */
									obj_t BgL_newtail1340z00_627;

									{	/* Jas/classfile.scm 148 */
										BgL_jastypez00_bglt BgL_arg1695z00_629;

										{	/* Jas/classfile.scm 148 */
											obj_t BgL_tz00_630;

											BgL_tz00_630 = CAR(((obj_t) BgL_l1336z00_623));
											BgL_arg1695z00_629 =
												BGl_aszd2typezd2zzjas_classfilez00(BgL_classfilez00_258,
												BgL_tz00_630);
										}
										{	/* Jas/classfile.scm 148 */
											obj_t BgL_res2186z00_1668;

											BgL_res2186z00_1668 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1695z00_629), BNIL);
											BgL_newtail1340z00_627 = BgL_res2186z00_1668;
										}
									}
									SET_CDR(BgL_tail1339z00_624, BgL_newtail1340z00_627);
									{	/* Jas/classfile.scm 148 */
										obj_t BgL_arg1692z00_628;

										BgL_arg1692z00_628 = CDR(((obj_t) BgL_l1336z00_623));
										{
											obj_t BgL_tail1339z00_3993;
											obj_t BgL_l1336z00_3992;

											BgL_l1336z00_3992 = BgL_arg1692z00_628;
											BgL_tail1339z00_3993 = BgL_newtail1340z00_627;
											BgL_tail1339z00_624 = BgL_tail1339z00_3993;
											BgL_l1336z00_623 = BgL_l1336z00_3992;
											goto BgL_zc3z04anonymousza31689ze3z87_625;
										}
									}
								}
						}
					}
				{	/* Jas/classfile.scm 149 */
					BgL_jasfunz00_bglt BgL_new1303z00_593;

					{	/* Jas/classfile.scm 150 */
						BgL_jasfunz00_bglt BgL_new1302z00_617;

						BgL_new1302z00_617 =
							((BgL_jasfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jasfunz00_bgl))));
						{	/* Jas/classfile.scm 150 */
							long BgL_arg1687z00_618;

							{	/* Jas/classfile.scm 150 */
								long BgL_res2187z00_1672;

								BgL_res2187z00_1672 =
									BGL_CLASS_INDEX(BGl_JasFunz00zzjas_classfilez00);
								BgL_arg1687z00_618 = BgL_res2187z00_1672;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1302z00_617), BgL_arg1687z00_618);
						}
						BgL_new1303z00_593 = BgL_new1302z00_617;
					}
					{
						obj_t BgL_auxz00_3998;

						{	/* Jas/classfile.scm 151 */
							obj_t BgL_arg1639z00_594;
							obj_t BgL_arg1640z00_595;

							{	/* Jas/classfile.scm 151 */
								obj_t BgL_runner1686z00_616;

								if (NULLP(BgL_targsz00_592))
									{	/* Jas/classfile.scm 151 */
										BgL_runner1686z00_616 = BNIL;
									}
								else
									{	/* Jas/classfile.scm 151 */
										obj_t BgL_head1343z00_602;

										{	/* Jas/classfile.scm 151 */
											obj_t BgL_arg1684z00_614;

											BgL_arg1684z00_614 =
												(((BgL_jastypez00_bglt) COBJECT(
														((BgL_jastypez00_bglt)
															CAR(((obj_t) BgL_targsz00_592)))))->BgL_codez00);
											{	/* Jas/classfile.scm 151 */
												obj_t BgL_res2190z00_1680;

												BgL_res2190z00_1680 =
													MAKE_YOUNG_PAIR(BgL_arg1684z00_614, BNIL);
												BgL_head1343z00_602 = BgL_res2190z00_1680;
											}
										}
										{	/* Jas/classfile.scm 151 */
											obj_t BgL_g1346z00_603;

											BgL_g1346z00_603 = CDR(((obj_t) BgL_targsz00_592));
											{
												obj_t BgL_l1341z00_605;
												obj_t BgL_tail1344z00_606;

												BgL_l1341z00_605 = BgL_g1346z00_603;
												BgL_tail1344z00_606 = BgL_head1343z00_602;
											BgL_zc3z04anonymousza31664ze3z87_607:
												if (NULLP(BgL_l1341z00_605))
													{	/* Jas/classfile.scm 151 */
														BgL_runner1686z00_616 = BgL_head1343z00_602;
													}
												else
													{	/* Jas/classfile.scm 151 */
														obj_t BgL_newtail1345z00_609;

														{	/* Jas/classfile.scm 151 */
															obj_t BgL_arg1669z00_611;

															BgL_arg1669z00_611 =
																(((BgL_jastypez00_bglt) COBJECT(
																		((BgL_jastypez00_bglt)
																			CAR(
																				((obj_t) BgL_l1341z00_605)))))->
																BgL_codez00);
															{	/* Jas/classfile.scm 151 */
																obj_t BgL_res2193z00_1687;

																BgL_res2193z00_1687 =
																	MAKE_YOUNG_PAIR(BgL_arg1669z00_611, BNIL);
																BgL_newtail1345z00_609 = BgL_res2193z00_1687;
															}
														}
														SET_CDR(BgL_tail1344z00_606,
															BgL_newtail1345z00_609);
														{	/* Jas/classfile.scm 151 */
															obj_t BgL_arg1667z00_610;

															BgL_arg1667z00_610 =
																CDR(((obj_t) BgL_l1341z00_605));
															{
																obj_t BgL_tail1344z00_4020;
																obj_t BgL_l1341z00_4019;

																BgL_l1341z00_4019 = BgL_arg1667z00_610;
																BgL_tail1344z00_4020 = BgL_newtail1345z00_609;
																BgL_tail1344z00_606 = BgL_tail1344z00_4020;
																BgL_l1341z00_605 = BgL_l1341z00_4019;
																goto BgL_zc3z04anonymousza31664ze3z87_607;
															}
														}
													}
											}
										}
									}
								BgL_arg1639z00_594 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_runner1686z00_616);
							}
							BgL_arg1640z00_595 =
								(((BgL_jastypez00_bglt) COBJECT(BgL_tretz00_591))->BgL_codez00);
							{	/* Jas/classfile.scm 150 */
								obj_t BgL_list1641z00_596;

								{	/* Jas/classfile.scm 150 */
									obj_t BgL_arg1644z00_597;

									{	/* Jas/classfile.scm 150 */
										obj_t BgL_arg1652z00_598;

										{	/* Jas/classfile.scm 150 */
											obj_t BgL_arg1662z00_599;

											BgL_arg1662z00_599 =
												MAKE_YOUNG_PAIR(BgL_arg1640z00_595, BNIL);
											BgL_arg1652z00_598 =
												MAKE_YOUNG_PAIR(BGl_string2268z00zzjas_classfilez00,
												BgL_arg1662z00_599);
										}
										BgL_arg1644z00_597 =
											MAKE_YOUNG_PAIR(BgL_arg1639z00_594, BgL_arg1652z00_598);
									}
									BgL_list1641z00_596 =
										MAKE_YOUNG_PAIR(BGl_string2269z00zzjas_classfilez00,
										BgL_arg1644z00_597);
								}
								BgL_auxz00_3998 =
									BGl_stringzd2appendzd2zz__r4_strings_6_7z00
									(BgL_list1641z00_596);
							}
						}
						((((BgL_jastypez00_bglt) COBJECT(
										((BgL_jastypez00_bglt) BgL_new1303z00_593)))->BgL_codez00) =
							((obj_t) BgL_auxz00_3998), BUNSPEC);
					}
					((((BgL_jastypez00_bglt) COBJECT(
									((BgL_jastypez00_bglt) BgL_new1303z00_593)))->BgL_vectz00) =
						((obj_t) BFALSE), BUNSPEC);
					((((BgL_jasfunz00_bglt) COBJECT(BgL_new1303z00_593))->BgL_tretz00) =
						((BgL_jastypez00_bglt) BgL_tretz00_591), BUNSPEC);
					((((BgL_jasfunz00_bglt) COBJECT(BgL_new1303z00_593))->BgL_targsz00) =
						((obj_t) BgL_targsz00_592), BUNSPEC);
					return BgL_new1303z00_593;
				}
			}
		}

	}



/* &as-funtype */
	BgL_jasfunz00_bglt BGl_z62aszd2funtypezb0zzjas_classfilez00(obj_t
		BgL_envz00_2387, obj_t BgL_classfilez00_2388, obj_t BgL_tretz00_2389,
		obj_t BgL_targsz00_2390)
	{
		{	/* Jas/classfile.scm 146 */
			return
				BGl_aszd2funtypezd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2388), BgL_tretz00_2389,
				BgL_targsz00_2390);
		}

	}



/* type-size */
	BGL_EXPORTED_DEF int
		BGl_typezd2siza7ez75zzjas_classfilez00(BgL_jastypez00_bglt BgL_typez00_261)
	{
		{	/* Jas/classfile.scm 157 */
			{	/* Jas/classfile.scm 158 */
				obj_t BgL_codez00_632;

				BgL_codez00_632 =
					(((BgL_jastypez00_bglt) COBJECT(BgL_typez00_261))->BgL_codez00);
				if ((STRING_LENGTH(BgL_codez00_632) == ((long) 1)))
					{	/* Jas/classfile.scm 160 */
						switch (STRING_REF(BgL_codez00_632, ((long) 0)))
							{
							case ((unsigned char) 'V'):

								return (int) (((long) 0));
								break;
							case ((unsigned char) 'J'):
							case ((unsigned char) 'D'):

								return (int) (((long) 2));
								break;
							default:
								return (int) (((long) 1));
					}}
				else
					{	/* Jas/classfile.scm 160 */
						return (int) (((long) 1));
		}}}

	}



/* &type-size */
	obj_t BGl_z62typezd2siza7ez17zzjas_classfilez00(obj_t BgL_envz00_2391,
		obj_t BgL_typez00_2392)
	{
		{	/* Jas/classfile.scm 157 */
			return
				BINT(BGl_typezd2siza7ez75zzjas_classfilez00(
					((BgL_jastypez00_bglt) BgL_typez00_2392)));
		}

	}



/* as-assign */
	BGL_EXPORTED_DEF obj_t
		BGl_aszd2assignzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_262, obj_t BgL_namez00_263, obj_t BgL_valuez00_264)
	{
		{	/* Jas/classfile.scm 170 */
			if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_263,
						CNST_TABLE_REF(((long) 10)))))
				{	/* Jas/classfile.scm 171 */
					return
						BGl_errorz00zz__errorz00(
						(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_262))->
							BgL_currentzd2methodzd2), BGl_string2270z00zzjas_classfilez00,
						BgL_namez00_263);
				}
			else
				{	/* Jas/classfile.scm 171 */
					BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_namez00_263,
						CNST_TABLE_REF(((long) 10)), BgL_valuez00_264);
					{
						obj_t BgL_auxz00_4056;

						{	/* Jas/classfile.scm 175 */
							obj_t BgL_arg1704z00_640;

							BgL_arg1704z00_640 =
								(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_262))->
								BgL_globalsz00);
							BgL_auxz00_4056 =
								MAKE_YOUNG_PAIR(BgL_namez00_263, BgL_arg1704z00_640);
						}
						return
							((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_262))->
								BgL_globalsz00) = ((obj_t) BgL_auxz00_4056), BUNSPEC);
					}
				}
		}

	}



/* &as-assign */
	obj_t BGl_z62aszd2assignzb0zzjas_classfilez00(obj_t BgL_envz00_2393,
		obj_t BgL_classfilez00_2394, obj_t BgL_namez00_2395,
		obj_t BgL_valuez00_2396)
	{
		{	/* Jas/classfile.scm 170 */
			return
				BGl_aszd2assignzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2394), BgL_namez00_2395,
				BgL_valuez00_2396);
		}

	}



/* declared-class */
	BGL_EXPORTED_DEF BgL_classez00_bglt
		BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_269, obj_t BgL_namez00_270)
	{
		{	/* Jas/classfile.scm 187 */
			{	/* Jas/classfile.scm 188 */
				obj_t BgL_valuez00_642;

				{	/* Jas/classfile.scm 184 */
					obj_t BgL__ortest_1307z00_1713;

					BgL__ortest_1307z00_1713 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_270,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_1307z00_1713))
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_642 = BgL__ortest_1307z00_1713;
						}
					else
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_642 =
								BGl_errorz00zz__errorz00(
								(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_269))->
									BgL_currentzd2methodzd2), BGl_string2271z00zzjas_classfilez00,
								BgL_namez00_270);
						}
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_valuez00_642,
						BGl_classez00zzjas_classfilez00))
					{	/* Jas/classfile.scm 189 */
						return ((BgL_classez00_bglt) BgL_valuez00_642);
					}
				else
					{	/* Jas/classfile.scm 90 */
						obj_t BgL_arg1588z00_1722;

						BgL_arg1588z00_1722 =
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_269))->
							BgL_currentzd2methodzd2);
						return ((BgL_classez00_bglt)
							BGl_errorz00zz__errorz00(BgL_arg1588z00_1722,
								BGl_string2272z00zzjas_classfilez00, BgL_namez00_270));
					}
			}
		}

	}



/* &declared-class */
	BgL_classez00_bglt BGl_z62declaredzd2classzb0zzjas_classfilez00(obj_t
		BgL_envz00_2397, obj_t BgL_classfilez00_2398, obj_t BgL_namez00_2399)
	{
		{	/* Jas/classfile.scm 187 */
			return
				BGl_declaredzd2classzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2398), BgL_namez00_2399);
		}

	}



/* declared-field */
	BGL_EXPORTED_DEF BgL_fieldz00_bglt
		BGl_declaredzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_271, obj_t BgL_namez00_272)
	{
		{	/* Jas/classfile.scm 193 */
			{	/* Jas/classfile.scm 194 */
				obj_t BgL_valuez00_644;

				{	/* Jas/classfile.scm 184 */
					obj_t BgL__ortest_1307z00_1725;

					BgL__ortest_1307z00_1725 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_272,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_1307z00_1725))
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_644 = BgL__ortest_1307z00_1725;
						}
					else
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_644 =
								BGl_errorz00zz__errorz00(
								(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_271))->
									BgL_currentzd2methodzd2), BGl_string2271z00zzjas_classfilez00,
								BgL_namez00_272);
						}
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_valuez00_644,
						BGl_fieldz00zzjas_classfilez00))
					{	/* Jas/classfile.scm 195 */
						return ((BgL_fieldz00_bglt) BgL_valuez00_644);
					}
				else
					{	/* Jas/classfile.scm 90 */
						obj_t BgL_arg1588z00_1734;

						BgL_arg1588z00_1734 =
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_271))->
							BgL_currentzd2methodzd2);
						return ((BgL_fieldz00_bglt)
							BGl_errorz00zz__errorz00(BgL_arg1588z00_1734,
								BGl_string2273z00zzjas_classfilez00, BgL_namez00_272));
					}
			}
		}

	}



/* &declared-field */
	BgL_fieldz00_bglt BGl_z62declaredzd2fieldzb0zzjas_classfilez00(obj_t
		BgL_envz00_2400, obj_t BgL_classfilez00_2401, obj_t BgL_namez00_2402)
	{
		{	/* Jas/classfile.scm 193 */
			return
				BGl_declaredzd2fieldzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2401), BgL_namez00_2402);
		}

	}



/* declared-method */
	BGL_EXPORTED_DEF BgL_methodz00_bglt
		BGl_declaredzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_273, obj_t BgL_namez00_274)
	{
		{	/* Jas/classfile.scm 199 */
			{	/* Jas/classfile.scm 200 */
				obj_t BgL_valuez00_646;

				{	/* Jas/classfile.scm 184 */
					obj_t BgL__ortest_1307z00_1737;

					BgL__ortest_1307z00_1737 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_namez00_274,
						CNST_TABLE_REF(((long) 10)));
					if (CBOOL(BgL__ortest_1307z00_1737))
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_646 = BgL__ortest_1307z00_1737;
						}
					else
						{	/* Jas/classfile.scm 184 */
							BgL_valuez00_646 =
								BGl_errorz00zz__errorz00(
								(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_273))->
									BgL_currentzd2methodzd2), BGl_string2271z00zzjas_classfilez00,
								BgL_namez00_274);
						}
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_valuez00_646,
						BGl_methodz00zzjas_classfilez00))
					{	/* Jas/classfile.scm 201 */
						return ((BgL_methodz00_bglt) BgL_valuez00_646);
					}
				else
					{	/* Jas/classfile.scm 90 */
						obj_t BgL_arg1588z00_1746;

						BgL_arg1588z00_1746 =
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_273))->
							BgL_currentzd2methodzd2);
						return ((BgL_methodz00_bglt)
							BGl_errorz00zz__errorz00(BgL_arg1588z00_1746,
								BGl_string2274z00zzjas_classfilez00, BgL_namez00_274));
					}
			}
		}

	}



/* &declared-method */
	BgL_methodz00_bglt BGl_z62declaredzd2methodzb0zzjas_classfilez00(obj_t
		BgL_envz00_2403, obj_t BgL_classfilez00_2404, obj_t BgL_namez00_2405)
	{
		{	/* Jas/classfile.scm 199 */
			return
				BGl_declaredzd2methodzd2zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2404), BgL_namez00_2405);
		}

	}



/* pool-add */
	obj_t BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_276, obj_t BgL_itemz00_277)
	{
		{	/* Jas/classfile.scm 213 */
			{	/* Jas/classfile.scm 215 */
				obj_t BgL_rz00_650;

				BgL_rz00_650 =
					(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_276))->
					BgL_poolzd2siza7ez75);
				{
					obj_t BgL_auxz00_4105;

					{	/* Jas/classfile.scm 216 */
						obj_t BgL_arg1711z00_651;

						BgL_arg1711z00_651 =
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_276))->
							BgL_poolz00);
						BgL_auxz00_4105 =
							MAKE_YOUNG_PAIR(BgL_itemz00_277, BgL_arg1711z00_651);
					}
					((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_276))->
							BgL_poolz00) = ((obj_t) BgL_auxz00_4105), BUNSPEC);
				}
				{
					obj_t BgL_auxz00_4109;

					{
						obj_t BgL_tmpz00_4110;

						{
							long BgL_tmpz00_4112;

							if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CAR
										(BgL_itemz00_277), CNST_TABLE_REF(((long) 13)))))
								{	/* Jas/classfile.scm 209 */
									BgL_tmpz00_4112 = ((long) 2);
								}
							else
								{	/* Jas/classfile.scm 209 */
									BgL_tmpz00_4112 = ((long) 1);
								}
							BgL_tmpz00_4110 = BINT(BgL_tmpz00_4112);
						}
						BgL_auxz00_4109 =
							ADDFX(
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_276))->
								BgL_poolzd2siza7ez75), BgL_tmpz00_4110);
					}
					((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_276))->
							BgL_poolzd2siza7ez75) = ((obj_t) BgL_auxz00_4109), BUNSPEC);
				}
				return BgL_rz00_650;
			}
		}

	}



/* pool-get */
	long BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_278, long BgL_tagz00_279, obj_t BgL_valz00_280)
	{
		{	/* Jas/classfile.scm 220 */
			{
				obj_t BgL_lz00_659;
				obj_t BgL_nz00_660;

				BgL_lz00_659 =
					(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_278))->
					BgL_poolz00);
				BgL_nz00_660 =
					(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_278))->
					BgL_poolzd2siza7ez75);
			BgL_zc3z04anonymousza31728ze3z87_661:
				if (NULLP(BgL_lz00_659))
					{	/* Jas/classfile.scm 223 */
						return ((long) 0);
					}
				else
					{	/* Jas/classfile.scm 225 */
						obj_t BgL_xtagz00_663;
						obj_t BgL_xvalz00_664;

						{	/* Jas/classfile.scm 225 */
							obj_t BgL_pairz00_1759;

							BgL_pairz00_1759 = CAR(((obj_t) BgL_lz00_659));
							BgL_xtagz00_663 = CAR(BgL_pairz00_1759);
						}
						{	/* Jas/classfile.scm 225 */
							obj_t BgL_pairz00_1763;

							BgL_pairz00_1763 = CAR(((obj_t) BgL_lz00_659));
							BgL_xvalz00_664 = CDR(BgL_pairz00_1763);
						}
						{	/* Jas/classfile.scm 226 */
							long BgL_herez00_665;

							{	/* Jas/classfile.scm 226 */
								long BgL_tmpz00_4129;

								if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
										(BgL_xtagz00_663, CNST_TABLE_REF(((long) 13)))))
									{	/* Jas/classfile.scm 209 */
										BgL_tmpz00_4129 = ((long) 2);
									}
								else
									{	/* Jas/classfile.scm 209 */
										BgL_tmpz00_4129 = ((long) 1);
									}
								BgL_herez00_665 = ((long) CINT(BgL_nz00_660) - BgL_tmpz00_4129);
							}
							{	/* Jas/classfile.scm 227 */
								bool_t BgL_test2749z00_4136;

								if ((BgL_xtagz00_663 == BINT(BgL_tagz00_279)))
									{	/* Jas/classfile.scm 227 */
										BgL_test2749z00_4136 =
											BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_xvalz00_664,
											BgL_valz00_280);
									}
								else
									{	/* Jas/classfile.scm 227 */
										BgL_test2749z00_4136 = ((bool_t) 0);
									}
								if (BgL_test2749z00_4136)
									{	/* Jas/classfile.scm 227 */
										return BgL_herez00_665;
									}
								else
									{	/* Jas/classfile.scm 229 */
										obj_t BgL_arg1733z00_668;

										BgL_arg1733z00_668 = CDR(((obj_t) BgL_lz00_659));
										{
											obj_t BgL_nz00_4144;
											obj_t BgL_lz00_4143;

											BgL_lz00_4143 = BgL_arg1733z00_668;
											BgL_nz00_4144 = BINT(BgL_herez00_665);
											BgL_nz00_660 = BgL_nz00_4144;
											BgL_lz00_659 = BgL_lz00_4143;
											goto BgL_zc3z04anonymousza31728ze3z87_661;
										}
									}
							}
						}
					}
			}
		}

	}



/* pool-get-special! */
	obj_t BGl_poolzd2getzd2specialz12z12zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_281, long BgL_tagz00_282, obj_t BgL_valz00_283)
	{
		{	/* Jas/classfile.scm 232 */
			{	/* Jas/classfile.scm 234 */
				obj_t BgL_nz00_673;

				BgL_nz00_673 =
					BGl_hashtablezd2getzd2zz__hashz00(
					(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_281))->
						BgL_pooledzd2nameszd2), BgL_valz00_283);
				if (CBOOL(BgL_nz00_673))
					{	/* Jas/classfile.scm 235 */
						return BgL_nz00_673;
					}
				else
					{	/* Jas/classfile.scm 238 */
						obj_t BgL_rz00_675;

						BgL_rz00_675 =
							(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_281))->
							BgL_poolzd2siza7ez75);
						{
							obj_t BgL_auxz00_4153;

							{	/* Jas/classfile.scm 239 */
								obj_t BgL_arg1739z00_676;
								obj_t BgL_arg1740z00_677;

								BgL_arg1739z00_676 =
									MAKE_YOUNG_PAIR(BINT(((long) 1)), BgL_valz00_283);
								BgL_arg1740z00_677 =
									(((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_281))->
									BgL_poolz00);
								BgL_auxz00_4153 =
									MAKE_YOUNG_PAIR(BgL_arg1739z00_676, BgL_arg1740z00_677);
							}
							((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_281))->
									BgL_poolz00) = ((obj_t) BgL_auxz00_4153), BUNSPEC);
						}
						((((BgL_classfilez00_bglt) COBJECT(BgL_classfilez00_281))->
								BgL_poolzd2siza7ez75) =
							((obj_t) ADDFX((((BgL_classfilez00_bglt)
											COBJECT(BgL_classfilez00_281))->BgL_poolzd2siza7ez75),
									BINT(((long) 1)))), BUNSPEC);
						BGl_hashtablezd2putz12zc0zz__hashz00((((BgL_classfilez00_bglt)
									COBJECT(BgL_classfilez00_281))->BgL_pooledzd2nameszd2),
							BgL_valz00_283, BgL_rz00_675);
						return BgL_rz00_675;
					}
			}
		}

	}



/* pool-get! */
	obj_t BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_284, long BgL_tagz00_285, obj_t BgL_valz00_286)
	{
		{	/* Jas/classfile.scm 244 */
			{	/* Jas/classfile.scm 245 */
				long BgL_rz00_681;

				BgL_rz00_681 =
					BGl_poolzd2getzd2zzjas_classfilez00(BgL_classfilez00_284,
					BgL_tagz00_285, BgL_valz00_286);
				if ((BgL_rz00_681 == ((long) 0)))
					{	/* Jas/classfile.scm 247 */
						obj_t BgL_arg1746z00_684;

						BgL_arg1746z00_684 =
							MAKE_YOUNG_PAIR(BINT(BgL_tagz00_285), BgL_valz00_286);
						return
							BGl_poolzd2addzd2zzjas_classfilez00(BgL_classfilez00_284,
							BgL_arg1746z00_684);
					}
				else
					{	/* Jas/classfile.scm 246 */
						return BINT(BgL_rz00_681);
					}
			}
		}

	}



/* pool-name */
	BGL_EXPORTED_DEF int
		BGl_poolzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_287, obj_t BgL_namez00_288)
	{
		{	/* Jas/classfile.scm 251 */
			return
				CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
				(BgL_classfilez00_287, ((long) 1), BgL_namez00_288));
		}

	}



/* &pool-name */
	obj_t BGl_z62poolzd2namezb0zzjas_classfilez00(obj_t BgL_envz00_2406,
		obj_t BgL_classfilez00_2407, obj_t BgL_namez00_2408)
	{
		{	/* Jas/classfile.scm 251 */
			return
				BINT(BGl_poolzd2namezd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2407), BgL_namez00_2408));
		}

	}



/* pool-int */
	BGL_EXPORTED_DEF int BGl_poolzd2intzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_289, int BgL_nz00_290)
	{
		{	/* Jas/classfile.scm 254 */
			{	/* Jas/classfile.scm 255 */
				obj_t BgL_arg1747z00_1774;

				BgL_arg1747z00_1774 = BGl_w2z00zzjas_libz00(BgL_nz00_290);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_289,
						((long) 3), BgL_arg1747z00_1774));
		}}

	}



/* &pool-int */
	obj_t BGl_z62poolzd2intzb0zzjas_classfilez00(obj_t BgL_envz00_2409,
		obj_t BgL_classfilez00_2410, obj_t BgL_nz00_2411)
	{
		{	/* Jas/classfile.scm 254 */
			return
				BINT(BGl_poolzd2intzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2410),
					CINT(BgL_nz00_2411)));
		}

	}



/* pool-elong */
	BGL_EXPORTED_DEF int
		BGl_poolzd2elongzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_291, long BgL_nz00_292)
	{
		{	/* Jas/classfile.scm 257 */
			{	/* Jas/classfile.scm 258 */
				obj_t BgL_arg1754z00_1775;

				BgL_arg1754z00_1775 = BGl_w4elongz00zzjas_libz00(BgL_nz00_292);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_291,
						((long) 5), BgL_arg1754z00_1775));
		}}

	}



/* &pool-elong */
	obj_t BGl_z62poolzd2elongzb0zzjas_classfilez00(obj_t BgL_envz00_2412,
		obj_t BgL_classfilez00_2413, obj_t BgL_nz00_2414)
	{
		{	/* Jas/classfile.scm 257 */
			return
				BINT(BGl_poolzd2elongzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2413),
					BELONG_TO_LONG(BgL_nz00_2414)));
		}

	}



/* pool-int32 */
	BGL_EXPORTED_DEF int
		BGl_poolzd2int32zd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_293, int32_t BgL_nz00_294)
	{
		{	/* Jas/classfile.scm 260 */
			{	/* Jas/classfile.scm 261 */
				long BgL_arg1755z00_1776;

				{	/* Jas/classfile.scm 261 */
					long BgL_res2209z00_1781;

					{	/* Jas/classfile.scm 261 */
						long BgL_arg1456z00_1778;

						BgL_arg1456z00_1778 = (long) (BgL_nz00_294);
						{	/* Jas/classfile.scm 261 */
							long BgL_res2208z00_1780;

							BgL_res2208z00_1780 = (long) (BgL_arg1456z00_1778);
							BgL_res2209z00_1781 = BgL_res2208z00_1780;
					}}
					BgL_arg1755z00_1776 = BgL_res2209z00_1781;
				}
				{	/* Jas/classfile.scm 261 */
					int BgL_res2210z00_1785;

					{	/* Jas/classfile.scm 261 */
						int BgL_nz00_1783;

						BgL_nz00_1783 = (int) (BgL_arg1755z00_1776);
						{	/* Jas/classfile.scm 255 */
							obj_t BgL_arg1747z00_1784;

							BgL_arg1747z00_1784 = BGl_w2z00zzjas_libz00(BgL_nz00_1783);
							BgL_res2210z00_1785 =
								CINT(BGl_poolzd2getz12zc0zzjas_classfilez00
								(BgL_classfilez00_293, ((long) 3), BgL_arg1747z00_1784));
					}}
					return BgL_res2210z00_1785;
				}
			}
		}

	}



/* &pool-int32 */
	obj_t BGl_z62poolzd2int32zb0zzjas_classfilez00(obj_t BgL_envz00_2415,
		obj_t BgL_classfilez00_2416, obj_t BgL_nz00_2417)
	{
		{	/* Jas/classfile.scm 260 */
			return
				BINT(BGl_poolzd2int32zd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2416),
					BGL_BINT32_TO_INT32(BgL_nz00_2417)));
		}

	}



/* pool-uint32 */
	BGL_EXPORTED_DEF int
		BGl_poolzd2uint32zd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_295, uint32_t BgL_nz00_296)
	{
		{	/* Jas/classfile.scm 263 */
			{	/* Jas/classfile.scm 264 */
				long BgL_arg1756z00_1786;

				{	/* Jas/classfile.scm 264 */
					long BgL_res2211z00_1788;

					BgL_res2211z00_1788 = (long) (BgL_nz00_296);
					BgL_arg1756z00_1786 = BgL_res2211z00_1788;
				}
				{	/* Jas/classfile.scm 264 */
					int BgL_res2212z00_1792;

					{	/* Jas/classfile.scm 264 */
						int BgL_nz00_1790;

						BgL_nz00_1790 = (int) (BgL_arg1756z00_1786);
						{	/* Jas/classfile.scm 255 */
							obj_t BgL_arg1747z00_1791;

							BgL_arg1747z00_1791 = BGl_w2z00zzjas_libz00(BgL_nz00_1790);
							BgL_res2212z00_1792 =
								CINT(BGl_poolzd2getz12zc0zzjas_classfilez00
								(BgL_classfilez00_295, ((long) 3), BgL_arg1747z00_1791));
					}}
					return BgL_res2212z00_1792;
				}
			}
		}

	}



/* &pool-uint32 */
	obj_t BGl_z62poolzd2uint32zb0zzjas_classfilez00(obj_t BgL_envz00_2418,
		obj_t BgL_classfilez00_2419, obj_t BgL_nz00_2420)
	{
		{	/* Jas/classfile.scm 263 */
			return
				BINT(BGl_poolzd2uint32zd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2419),
					BGL_BUINT32_TO_UINT32(BgL_nz00_2420)));
		}

	}



/* pool-int64 */
	BGL_EXPORTED_DEF int
		BGl_poolzd2int64zd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_297, int64_t BgL_nz00_298)
	{
		{	/* Jas/classfile.scm 266 */
			{	/* Jas/classfile.scm 267 */
				BGL_LONGLONG_T BgL_arg1757z00_1793;

				{	/* Jas/classfile.scm 267 */
					BGL_LONGLONG_T BgL_res2213z00_1795;

					{	/* Jas/classfile.scm 267 */
						uint64_t BgL_nz00_1794;

						BgL_nz00_1794 = (uint64_t) (BgL_nz00_298);
						BgL_res2213z00_1795 = (BGL_LONGLONG_T) (BgL_nz00_1794);
					}
					BgL_arg1757z00_1793 = BgL_res2213z00_1795;
				}
				{	/* Jas/classfile.scm 267 */
					int BgL_res2214z00_1799;

					{	/* Jas/classfile.scm 279 */
						obj_t BgL_arg1768z00_1798;

						BgL_arg1768z00_1798 =
							BGl_w4llongz00zzjas_libz00(BgL_arg1757z00_1793);
						BgL_res2214z00_1799 =
							CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_297,
								((long) 5), BgL_arg1768z00_1798));
					}
					return BgL_res2214z00_1799;
				}
			}
		}

	}



/* &pool-int64 */
	obj_t BGl_z62poolzd2int64zb0zzjas_classfilez00(obj_t BgL_envz00_2421,
		obj_t BgL_classfilez00_2422, obj_t BgL_nz00_2423)
	{
		{	/* Jas/classfile.scm 266 */
			return
				BINT(BGl_poolzd2int64zd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2422),
					BGL_BINT64_TO_INT64(BgL_nz00_2423)));
		}

	}



/* pool-uint64 */
	BGL_EXPORTED_DEF int
		BGl_poolzd2uint64zd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_299, uint64_t BgL_nz00_300)
	{
		{	/* Jas/classfile.scm 269 */
			{	/* Jas/classfile.scm 270 */
				BGL_LONGLONG_T BgL_arg1759z00_1800;

				{	/* Jas/classfile.scm 270 */
					BGL_LONGLONG_T BgL_res2215z00_1802;

					BgL_res2215z00_1802 = (BGL_LONGLONG_T) (BgL_nz00_300);
					BgL_arg1759z00_1800 = BgL_res2215z00_1802;
				}
				{	/* Jas/classfile.scm 270 */
					int BgL_res2216z00_1806;

					{	/* Jas/classfile.scm 279 */
						obj_t BgL_arg1768z00_1805;

						BgL_arg1768z00_1805 =
							BGl_w4llongz00zzjas_libz00(BgL_arg1759z00_1800);
						BgL_res2216z00_1806 =
							CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_299,
								((long) 5), BgL_arg1768z00_1805));
					}
					return BgL_res2216z00_1806;
				}
			}
		}

	}



/* &pool-uint64 */
	obj_t BGl_z62poolzd2uint64zb0zzjas_classfilez00(obj_t BgL_envz00_2424,
		obj_t BgL_classfilez00_2425, obj_t BgL_nz00_2426)
	{
		{	/* Jas/classfile.scm 269 */
			return
				BINT(BGl_poolzd2uint64zd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2425),
					BGL_BINT64_TO_INT64(BgL_nz00_2426)));
		}

	}



/* pool-float */
	BGL_EXPORTED_DEF int
		BGl_poolzd2floatzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_301, float BgL_nz00_302)
	{
		{	/* Jas/classfile.scm 272 */
			{	/* Jas/classfile.scm 273 */
				obj_t BgL_arg1760z00_1807;

				BgL_arg1760z00_1807 = BGl_f2z00zzjas_libz00(BgL_nz00_302);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_301,
						((long) 4), BgL_arg1760z00_1807));
		}}

	}



/* &pool-float */
	obj_t BGl_z62poolzd2floatzb0zzjas_classfilez00(obj_t BgL_envz00_2427,
		obj_t BgL_classfilez00_2428, obj_t BgL_nz00_2429)
	{
		{	/* Jas/classfile.scm 272 */
			return
				BINT(BGl_poolzd2floatzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2428),
					REAL_TO_FLOAT(BgL_nz00_2429)));
		}

	}



/* pool-long */
	BGL_EXPORTED_DEF int
		BGl_poolzd2longzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_303, long BgL_nz00_304)
	{
		{	/* Jas/classfile.scm 275 */
			{	/* Jas/classfile.scm 276 */
				obj_t BgL_arg1761z00_1808;

				BgL_arg1761z00_1808 = BGl_w4z00zzjas_libz00(BgL_nz00_304);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_303,
						((long) 5), BgL_arg1761z00_1808));
		}}

	}



/* &pool-long */
	obj_t BGl_z62poolzd2longzb0zzjas_classfilez00(obj_t BgL_envz00_2430,
		obj_t BgL_classfilez00_2431, obj_t BgL_nz00_2432)
	{
		{	/* Jas/classfile.scm 275 */
			return
				BINT(BGl_poolzd2longzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2431),
					(long) CINT(BgL_nz00_2432)));
		}

	}



/* pool-llong */
	BGL_EXPORTED_DEF int
		BGl_poolzd2llongzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_305, BGL_LONGLONG_T BgL_nz00_306)
	{
		{	/* Jas/classfile.scm 278 */
			{	/* Jas/classfile.scm 279 */
				obj_t BgL_arg1768z00_1809;

				BgL_arg1768z00_1809 = BGl_w4llongz00zzjas_libz00(BgL_nz00_306);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_305,
						((long) 5), BgL_arg1768z00_1809));
		}}

	}



/* &pool-llong */
	obj_t BGl_z62poolzd2llongzb0zzjas_classfilez00(obj_t BgL_envz00_2433,
		obj_t BgL_classfilez00_2434, obj_t BgL_nz00_2435)
	{
		{	/* Jas/classfile.scm 278 */
			return
				BINT(BGl_poolzd2llongzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2434),
					BLLONG_TO_LLONG(BgL_nz00_2435)));
		}

	}



/* pool-double */
	BGL_EXPORTED_DEF int
		BGl_poolzd2doublezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_307, double BgL_nz00_308)
	{
		{	/* Jas/classfile.scm 281 */
			{	/* Jas/classfile.scm 282 */
				obj_t BgL_arg1771z00_1810;

				BgL_arg1771z00_1810 = BGl_f4z00zzjas_libz00(BgL_nz00_308);
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_307,
						((long) 6), BgL_arg1771z00_1810));
		}}

	}



/* &pool-double */
	obj_t BGl_z62poolzd2doublezb0zzjas_classfilez00(obj_t BgL_envz00_2436,
		obj_t BgL_classfilez00_2437, obj_t BgL_nz00_2438)
	{
		{	/* Jas/classfile.scm 281 */
			return
				BINT(BGl_poolzd2doublezd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2437),
					REAL_TO_DOUBLE(BgL_nz00_2438)));
		}

	}



/* pool-class */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_309, BgL_classez00_bglt BgL_classez00_310)
	{
		{	/* Jas/classfile.scm 284 */
			if (CBOOL(
					(((BgL_classez00_bglt) COBJECT(BgL_classez00_310))->BgL_poolz00)))
				{	/* Jas/classfile.scm 286 */
					return
						CINT(
						(((BgL_classez00_bglt) COBJECT(BgL_classez00_310))->BgL_poolz00));
				}
			else
				{	/* Jas/classfile.scm 288 */
					int BgL_pnamez00_698;

					{	/* Jas/classfile.scm 288 */
						obj_t BgL_arg1778z00_702;

						BgL_arg1778z00_702 =
							(((BgL_classez00_bglt) COBJECT(BgL_classez00_310))->BgL_namez00);
						{	/* Jas/classfile.scm 288 */
							int BgL_res2217z00_1813;

							BgL_res2217z00_1813 =
								CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
								(BgL_classfilez00_309, ((long) 1),
									((obj_t) BgL_arg1778z00_702)));
							BgL_pnamez00_698 = BgL_res2217z00_1813;
					}}
					{	/* Jas/classfile.scm 289 */
						obj_t BgL_rz00_699;

						{	/* Jas/classfile.scm 289 */
							obj_t BgL_arg1775z00_700;

							{	/* Jas/classfile.scm 289 */
								obj_t BgL_list1776z00_701;

								BgL_list1776z00_701 =
									MAKE_YOUNG_PAIR(BINT(BgL_pnamez00_698), BNIL);
								BgL_arg1775z00_700 = BgL_list1776z00_701;
							}
							BgL_rz00_699 =
								BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_309,
								((long) 7), BgL_arg1775z00_700);
						}
						((((BgL_classez00_bglt) COBJECT(BgL_classez00_310))->BgL_poolz00) =
							((obj_t) BgL_rz00_699), BUNSPEC);
						return CINT(BgL_rz00_699);
					}
				}
		}

	}



/* &pool-class */
	obj_t BGl_z62poolzd2classzb0zzjas_classfilez00(obj_t BgL_envz00_2439,
		obj_t BgL_classfilez00_2440, obj_t BgL_classez00_2441)
	{
		{	/* Jas/classfile.scm 284 */
			return
				BINT(BGl_poolzd2classzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2440),
					((BgL_classez00_bglt) BgL_classez00_2441)));
		}

	}



/* pool-class-by-name */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_311, obj_t BgL_namez00_312)
	{
		{	/* Jas/classfile.scm 293 */
			return
				BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_311,
				BGl_declaredzd2classzd2zzjas_classfilez00(BgL_classfilez00_311,
					BgL_namez00_312));
		}

	}



/* &pool-class-by-name */
	obj_t BGl_z62poolzd2classzd2byzd2namezb0zzjas_classfilez00(obj_t
		BgL_envz00_2442, obj_t BgL_classfilez00_2443, obj_t BgL_namez00_2444)
	{
		{	/* Jas/classfile.scm 293 */
			return
				BINT(BGl_poolzd2classzd2byzd2namezd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2443), BgL_namez00_2444));
		}

	}



/* pool-class-by-reftype */
	BGL_EXPORTED_DEF int
		BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_313, BgL_jastypez00_bglt BgL_reftypez00_314)
	{
		{	/* Jas/classfile.scm 296 */
			{	/* Jas/classfile.scm 297 */
				bool_t BgL_test2754z00_4278;

				{	/* Jas/classfile.scm 297 */
					bool_t BgL_res2219z00_1816;

					BgL_res2219z00_1816 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_reftypez00_314), BGl_vectz00zzjas_classfilez00);
					BgL_test2754z00_4278 = BgL_res2219z00_1816;
				}
				if (BgL_test2754z00_4278)
					{	/* Jas/classfile.scm 298 */
						int BgL_pnamez00_705;

						{	/* Jas/classfile.scm 298 */
							obj_t BgL_arg1784z00_708;

							BgL_arg1784z00_708 =
								(((BgL_jastypez00_bglt) COBJECT(BgL_reftypez00_314))->
								BgL_codez00);
							BgL_pnamez00_705 =
								CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
								(BgL_classfilez00_313, ((long) 1), BgL_arg1784z00_708));
						}
						{	/* Jas/classfile.scm 299 */
							obj_t BgL_arg1782z00_706;

							{	/* Jas/classfile.scm 299 */
								obj_t BgL_list1783z00_707;

								BgL_list1783z00_707 =
									MAKE_YOUNG_PAIR(BINT(BgL_pnamez00_705), BNIL);
								BgL_arg1782z00_706 = BgL_list1783z00_707;
							}
							return
								CINT(BGl_poolzd2getz12zc0zzjas_classfilez00
								(BgL_classfilez00_313, ((long) 7), BgL_arg1782z00_706));
					}}
				else
					{	/* Jas/classfile.scm 297 */
						return
							BGl_poolzd2classzd2zzjas_classfilez00(BgL_classfilez00_313,
							((BgL_classez00_bglt) BgL_reftypez00_314));
					}
			}
		}

	}



/* &pool-class-by-reftype */
	obj_t BGl_z62poolzd2classzd2byzd2reftypezb0zzjas_classfilez00(obj_t
		BgL_envz00_2445, obj_t BgL_classfilez00_2446, obj_t BgL_reftypez00_2447)
	{
		{	/* Jas/classfile.scm 296 */
			return
				BINT(BGl_poolzd2classzd2byzd2reftypezd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2446),
					((BgL_jastypez00_bglt) BgL_reftypez00_2447)));
		}

	}



/* pool-string */
	BGL_EXPORTED_DEF int
		BGl_poolzd2stringzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_315, obj_t BgL_strz00_316)
	{
		{	/* Jas/classfile.scm 302 */
			{	/* Jas/classfile.scm 303 */
				obj_t BgL_arg1790z00_709;

				{	/* Jas/classfile.scm 303 */
					int BgL_arg1796z00_710;

					BgL_arg1796z00_710 =
						CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
						(BgL_classfilez00_315, ((long) 1), BgL_strz00_316));
					{	/* Jas/classfile.scm 303 */
						obj_t BgL_list1797z00_711;

						BgL_list1797z00_711 =
							MAKE_YOUNG_PAIR(BINT(BgL_arg1796z00_710), BNIL);
						BgL_arg1790z00_709 = BgL_list1797z00_711;
				}}
				return
					CINT(BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_315,
						((long) 8), BgL_arg1790z00_709));
		}}

	}



/* &pool-string */
	obj_t BGl_z62poolzd2stringzb0zzjas_classfilez00(obj_t BgL_envz00_2448,
		obj_t BgL_classfilez00_2449, obj_t BgL_strz00_2450)
	{
		{	/* Jas/classfile.scm 302 */
			return
				BINT(BGl_poolzd2stringzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2449), BgL_strz00_2450));
		}

	}



/* pool-field */
	BGL_EXPORTED_DEF int
		BGl_poolzd2fieldzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_317, BgL_fieldz00_bglt BgL_fieldz00_318)
	{
		{	/* Jas/classfile.scm 305 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00
				(BgL_classfilez00_317,
					((BgL_fieldzd2orzd2methodz00_bglt) BgL_fieldz00_318), ((long) 9)));
		}

	}



/* &pool-field */
	obj_t BGl_z62poolzd2fieldzb0zzjas_classfilez00(obj_t BgL_envz00_2451,
		obj_t BgL_classfilez00_2452, obj_t BgL_fieldz00_2453)
	{
		{	/* Jas/classfile.scm 305 */
			return
				BINT(BGl_poolzd2fieldzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2452),
					((BgL_fieldz00_bglt) BgL_fieldz00_2453)));
		}

	}



/* pool-method */
	BGL_EXPORTED_DEF int
		BGl_poolzd2methodzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_319, BgL_methodz00_bglt BgL_methodz00_320)
	{
		{	/* Jas/classfile.scm 308 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00
				(BgL_classfilez00_319,
					((BgL_fieldzd2orzd2methodz00_bglt) BgL_methodz00_320), ((long) 10)));
		}

	}



/* &pool-method */
	obj_t BGl_z62poolzd2methodzb0zzjas_classfilez00(obj_t BgL_envz00_2454,
		obj_t BgL_classfilez00_2455, obj_t BgL_methodz00_2456)
	{
		{	/* Jas/classfile.scm 308 */
			return
				BINT(BGl_poolzd2methodzd2zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2455),
					((BgL_methodz00_bglt) BgL_methodz00_2456)));
		}

	}



/* pool-interface-method */
	BGL_EXPORTED_DEF int
		BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_321, BgL_methodz00_bglt BgL_fieldz00_322)
	{
		{	/* Jas/classfile.scm 311 */
			return
				CINT(BGl_poolzd2fieldzd2methodz00zzjas_classfilez00
				(BgL_classfilez00_321,
					((BgL_fieldzd2orzd2methodz00_bglt) BgL_fieldz00_322), ((long) 11)));
		}

	}



/* &pool-interface-method */
	obj_t BGl_z62poolzd2interfacezd2methodz62zzjas_classfilez00(obj_t
		BgL_envz00_2457, obj_t BgL_classfilez00_2458, obj_t BgL_fieldz00_2459)
	{
		{	/* Jas/classfile.scm 311 */
			return
				BINT(BGl_poolzd2interfacezd2methodz00zzjas_classfilez00(
					((BgL_classfilez00_bglt) BgL_classfilez00_2458),
					((BgL_methodz00_bglt) BgL_fieldz00_2459)));
		}

	}



/* pool-field-method */
	obj_t BGl_poolzd2fieldzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_323, BgL_fieldzd2orzd2methodz00_bglt BgL_fmz00_324,
		long BgL_tagz00_325)
	{
		{	/* Jas/classfile.scm 314 */
			if (CBOOL(
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_fmz00_324))->
						BgL_poolz00)))
				{	/* Jas/classfile.scm 316 */
					return
						(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_fmz00_324))->
						BgL_poolz00);
				}
			else
				{	/* Jas/classfile.scm 318 */
					int BgL_pnz00_714;

					{	/* Jas/classfile.scm 318 */
						obj_t BgL_arg1823z00_728;

						BgL_arg1823z00_728 =
							(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_fmz00_324))->
							BgL_namez00);
						BgL_pnz00_714 =
							CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
							(BgL_classfilez00_323, ((long) 1), BgL_arg1823z00_728));
					}
					{	/* Jas/classfile.scm 318 */
						int BgL_ptz00_715;

						{	/* Jas/classfile.scm 319 */
							obj_t BgL_arg1821z00_726;

							BgL_arg1821z00_726 =
								(((BgL_jastypez00_bglt) COBJECT(
										((BgL_jastypez00_bglt)
											(((BgL_fieldzd2orzd2methodz00_bglt)
													COBJECT(BgL_fmz00_324))->BgL_typez00))))->
								BgL_codez00);
							BgL_ptz00_715 =
								CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
								(BgL_classfilez00_323, ((long) 1), BgL_arg1821z00_726));
						}
						{	/* Jas/classfile.scm 319 */
							int BgL_cz00_716;

							{	/* Jas/classfile.scm 320 */
								obj_t BgL_arg1820z00_725;

								BgL_arg1820z00_725 =
									(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_fmz00_324))->
									BgL_ownerz00);
								{	/* Jas/classfile.scm 320 */
									int BgL_res2228z00_1840;

									{	/* Jas/classfile.scm 294 */
										BgL_classez00_bglt BgL_arg1779z00_1839;

										BgL_arg1779z00_1839 =
											BGl_declaredzd2classzd2zzjas_classfilez00
											(BgL_classfilez00_323, ((obj_t) BgL_arg1820z00_725));
										BgL_res2228z00_1840 =
											BGl_poolzd2classzd2zzjas_classfilez00
											(BgL_classfilez00_323, BgL_arg1779z00_1839);
									}
									BgL_cz00_716 = BgL_res2228z00_1840;
							}}
							{	/* Jas/classfile.scm 320 */
								obj_t BgL_dz00_717;

								{	/* Jas/classfile.scm 321 */
									obj_t BgL_arg1809z00_722;

									{	/* Jas/classfile.scm 321 */
										obj_t BgL_list1810z00_723;

										{	/* Jas/classfile.scm 321 */
											obj_t BgL_arg1811z00_724;

											BgL_arg1811z00_724 =
												MAKE_YOUNG_PAIR(BINT(BgL_ptz00_715), BNIL);
											BgL_list1810z00_723 =
												MAKE_YOUNG_PAIR(BINT(BgL_pnz00_714),
												BgL_arg1811z00_724);
										}
										BgL_arg1809z00_722 = BgL_list1810z00_723;
									}
									BgL_dz00_717 =
										BGl_poolzd2getz12zc0zzjas_classfilez00(BgL_classfilez00_323,
										((long) 12), BgL_arg1809z00_722);
								}
								{	/* Jas/classfile.scm 321 */
									obj_t BgL_rz00_718;

									{	/* Jas/classfile.scm 322 */
										obj_t BgL_arg1801z00_719;

										{	/* Jas/classfile.scm 322 */
											obj_t BgL_list1802z00_720;

											{	/* Jas/classfile.scm 322 */
												obj_t BgL_arg1808z00_721;

												BgL_arg1808z00_721 =
													MAKE_YOUNG_PAIR(BgL_dz00_717, BNIL);
												BgL_list1802z00_720 =
													MAKE_YOUNG_PAIR(BINT(BgL_cz00_716),
													BgL_arg1808z00_721);
											}
											BgL_arg1801z00_719 = BgL_list1802z00_720;
										}
										BgL_rz00_718 =
											BGl_poolzd2getz12zc0zzjas_classfilez00
											(BgL_classfilez00_323, BgL_tagz00_325,
											BgL_arg1801z00_719);
									}
									{	/* Jas/classfile.scm 322 */

										((((BgL_fieldzd2orzd2methodz00_bglt)
													COBJECT(BgL_fmz00_324))->BgL_pnamez00) =
											((obj_t) BINT(BgL_pnz00_714)), BUNSPEC);
										((((BgL_fieldzd2orzd2methodz00_bglt)
													COBJECT(BgL_fmz00_324))->BgL_descriptorz00) =
											((obj_t) BINT(BgL_ptz00_715)), BUNSPEC);
										((((BgL_fieldzd2orzd2methodz00_bglt)
													COBJECT(BgL_fmz00_324))->BgL_poolz00) =
											((obj_t) BgL_rz00_718), BUNSPEC);
										return BgL_rz00_718;
									}
								}
							}
						}
					}
				}
		}

	}



/* pool-local-method */
	BGL_EXPORTED_DEF obj_t
		BGl_poolzd2localzd2methodz00zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_326, BgL_methodz00_bglt BgL_methodz00_327)
	{
		{	/* Jas/classfile.scm 328 */
			return
				BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00
				(BgL_classfilez00_326, BgL_methodz00_327, ((long) 10));
		}

	}



/* &pool-local-method */
	obj_t BGl_z62poolzd2localzd2methodz62zzjas_classfilez00(obj_t BgL_envz00_2460,
		obj_t BgL_classfilez00_2461, obj_t BgL_methodz00_2462)
	{
		{	/* Jas/classfile.scm 328 */
			return
				BGl_poolzd2localzd2methodz00zzjas_classfilez00(
				((BgL_classfilez00_bglt) BgL_classfilez00_2461),
				((BgL_methodz00_bglt) BgL_methodz00_2462));
		}

	}



/* pool-field-method-local */
	obj_t
		BGl_poolzd2fieldzd2methodzd2localzd2zzjas_classfilez00(BgL_classfilez00_bglt
		BgL_classfilez00_328, BgL_methodz00_bglt BgL_fmz00_329, long BgL_tagz00_330)
	{
		{	/* Jas/classfile.scm 332 */
			if (CBOOL(
					(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_fmz00_329)))->
						BgL_poolz00)))
				{	/* Jas/classfile.scm 334 */
					return BFALSE;
				}
			else
				{	/* Jas/classfile.scm 334 */
					{
						obj_t BgL_auxz00_4362;

						{	/* Jas/classfile.scm 335 */
							obj_t BgL_arg1825z00_731;

							BgL_arg1825z00_731 =
								(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
										((BgL_fieldzd2orzd2methodz00_bglt) BgL_fmz00_329)))->
								BgL_namez00);
							{	/* Jas/classfile.scm 335 */
								int BgL_res2231z00_1845;

								BgL_res2231z00_1845 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_328, ((long) 1), BgL_arg1825z00_731));
								BgL_auxz00_4362 = BINT(BgL_res2231z00_1845);
						}}
						((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
										((BgL_fieldzd2orzd2methodz00_bglt) BgL_fmz00_329)))->
								BgL_pnamez00) = ((obj_t) BgL_auxz00_4362), BUNSPEC);
					}
					{
						obj_t BgL_auxz00_4370;

						{	/* Jas/classfile.scm 336 */
							obj_t BgL_arg1826z00_732;

							BgL_arg1826z00_732 =
								(((BgL_jastypez00_bglt) COBJECT(
										((BgL_jastypez00_bglt)
											(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
														((BgL_fieldzd2orzd2methodz00_bglt)
															BgL_fmz00_329)))->BgL_typez00))))->BgL_codez00);
							{	/* Jas/classfile.scm 336 */
								int BgL_res2233z00_1851;

								BgL_res2233z00_1851 =
									CINT(BGl_poolzd2getzd2specialz12z12zzjas_classfilez00
									(BgL_classfilez00_328, ((long) 1), BgL_arg1826z00_732));
								BgL_auxz00_4370 = BINT(BgL_res2233z00_1851);
						}}
						return
							((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
										((BgL_fieldzd2orzd2methodz00_bglt) BgL_fmz00_329)))->
								BgL_descriptorz00) = ((obj_t) BgL_auxz00_4370), BUNSPEC);
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			{	/* Jas/classfile.scm 5 */
				obj_t BgL_arg1831z00_737;
				obj_t BgL_arg1832z00_738;

				{	/* Jas/classfile.scm 5 */
					obj_t BgL_v1347z00_750;

					BgL_v1347z00_750 = create_vector(((long) 2));
					{	/* Jas/classfile.scm 5 */
						obj_t BgL_arg1840z00_751;

						BgL_arg1840z00_751 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc2276z00zzjas_classfilez00,
							BGl_proc2275z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1347z00_750, ((long) 0), BgL_arg1840z00_751);
					}
					{	/* Jas/classfile.scm 5 */
						obj_t BgL_arg1845z00_761;

						BgL_arg1845z00_761 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc2279z00zzjas_classfilez00,
							BGl_proc2278z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2277z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1347z00_750, ((long) 1), BgL_arg1845z00_761);
					}
					BgL_arg1831z00_737 = BgL_v1347z00_750;
				}
				{	/* Jas/classfile.scm 5 */
					obj_t BgL_v1348z00_774;

					BgL_v1348z00_774 = create_vector(((long) 0));
					BgL_arg1832z00_738 = BgL_v1348z00_774;
				}
				BGl_JasTypez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 18)),
					CNST_TABLE_REF(((long) 19)), BGl_objectz00zz__objectz00,
					((long) 38701), BGl_proc2282z00zzjas_classfilez00,
					BGl_proc2281z00zzjas_classfilez00, BFALSE,
					BGl_proc2280z00zzjas_classfilez00, BFALSE, BgL_arg1831z00_737,
					BgL_arg1832z00_738);
			}
			{	/* Jas/classfile.scm 9 */
				obj_t BgL_arg1856z00_781;
				obj_t BgL_arg1857z00_782;

				{	/* Jas/classfile.scm 9 */
					obj_t BgL_v1349z00_794;

					BgL_v1349z00_794 = create_vector(((long) 0));
					BgL_arg1856z00_781 = BgL_v1349z00_794;
				}
				{	/* Jas/classfile.scm 9 */
					obj_t BgL_v1350z00_795;

					BgL_v1350z00_795 = create_vector(((long) 0));
					BgL_arg1857z00_782 = BgL_v1350z00_795;
				}
				BGl_basicz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 20)),
					CNST_TABLE_REF(((long) 19)), BGl_JasTypez00zzjas_classfilez00,
					((long) 41698), BGl_proc2285z00zzjas_classfilez00,
					BGl_proc2284z00zzjas_classfilez00, BFALSE,
					BGl_proc2283z00zzjas_classfilez00, BFALSE, BgL_arg1856z00_781,
					BgL_arg1857z00_782);
			}
			{	/* Jas/classfile.scm 11 */
				obj_t BgL_arg1868z00_802;
				obj_t BgL_arg1870z00_803;

				{	/* Jas/classfile.scm 11 */
					obj_t BgL_v1351z00_816;

					BgL_v1351z00_816 = create_vector(((long) 1));
					{	/* Jas/classfile.scm 11 */
						obj_t BgL_arg1876z00_817;

						BgL_arg1876z00_817 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2287z00zzjas_classfilez00,
							BGl_proc2286z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_JasTypez00zzjas_classfilez00);
						VECTOR_SET(BgL_v1351z00_816, ((long) 0), BgL_arg1876z00_817);
					}
					BgL_arg1868z00_802 = BgL_v1351z00_816;
				}
				{	/* Jas/classfile.scm 11 */
					obj_t BgL_v1352z00_827;

					BgL_v1352z00_827 = create_vector(((long) 0));
					BgL_arg1870z00_803 = BgL_v1352z00_827;
				}
				BGl_vectz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 16)),
					CNST_TABLE_REF(((long) 19)), BGl_JasTypez00zzjas_classfilez00,
					((long) 19446), BGl_proc2290z00zzjas_classfilez00,
					BGl_proc2289z00zzjas_classfilez00, BFALSE,
					BGl_proc2288z00zzjas_classfilez00, BFALSE, BgL_arg1868z00_802,
					BgL_arg1870z00_803);
			}
			{	/* Jas/classfile.scm 13 */
				obj_t BgL_arg1884z00_834;
				obj_t BgL_arg1885z00_835;

				{	/* Jas/classfile.scm 13 */
					obj_t BgL_v1353z00_849;

					BgL_v1353z00_849 = create_vector(((long) 2));
					{	/* Jas/classfile.scm 13 */
						obj_t BgL_arg1891z00_850;

						BgL_arg1891z00_850 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2292z00zzjas_classfilez00,
							BGl_proc2291z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, BGl_JasTypez00zzjas_classfilez00);
						VECTOR_SET(BgL_v1353z00_849, ((long) 0), BgL_arg1891z00_850);
					}
					{	/* Jas/classfile.scm 13 */
						obj_t BgL_arg1896z00_860;

						BgL_arg1896z00_860 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc2294z00zzjas_classfilez00,
							BGl_proc2293z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1353z00_849, ((long) 1), BgL_arg1896z00_860);
					}
					BgL_arg1884z00_834 = BgL_v1353z00_849;
				}
				{	/* Jas/classfile.scm 13 */
					obj_t BgL_v1354z00_870;

					BgL_v1354z00_870 = create_vector(((long) 0));
					BgL_arg1885z00_835 = BgL_v1354z00_870;
				}
				BGl_JasFunz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 24)),
					CNST_TABLE_REF(((long) 19)), BGl_JasTypez00zzjas_classfilez00,
					((long) 41586), BGl_proc2297z00zzjas_classfilez00,
					BGl_proc2296z00zzjas_classfilez00, BFALSE,
					BGl_proc2295z00zzjas_classfilez00, BFALSE, BgL_arg1884z00_834,
					BgL_arg1885z00_835);
			}
			{	/* Jas/classfile.scm 15 */
				obj_t BgL_arg1904z00_877;
				obj_t BgL_arg1905z00_878;

				{	/* Jas/classfile.scm 15 */
					obj_t BgL_v1355z00_893;

					BgL_v1355z00_893 = create_vector(((long) 3));
					{	/* Jas/classfile.scm 15 */
						obj_t BgL_arg1911z00_894;

						BgL_arg1911z00_894 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2299z00zzjas_classfilez00,
							BGl_proc2298z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1355z00_893, ((long) 0), BgL_arg1911z00_894);
					}
					{	/* Jas/classfile.scm 15 */
						obj_t BgL_arg1916z00_904;

						BgL_arg1916z00_904 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2301z00zzjas_classfilez00,
							BGl_proc2300z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1355z00_893, ((long) 1), BgL_arg1916z00_904);
					}
					{	/* Jas/classfile.scm 15 */
						obj_t BgL_arg1921z00_914;

						BgL_arg1921z00_914 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2304z00zzjas_classfilez00,
							BGl_proc2303z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2302z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1355z00_893, ((long) 2), BgL_arg1921z00_914);
					}
					BgL_arg1904z00_877 = BgL_v1355z00_893;
				}
				{	/* Jas/classfile.scm 15 */
					obj_t BgL_v1356z00_927;

					BgL_v1356z00_927 = create_vector(((long) 0));
					BgL_arg1905z00_878 = BgL_v1356z00_927;
				}
				BGl_classez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 28)),
					CNST_TABLE_REF(((long) 19)), BGl_JasTypez00zzjas_classfilez00,
					((long) 56506), BGl_proc2307z00zzjas_classfilez00,
					BGl_proc2306z00zzjas_classfilez00, BFALSE,
					BGl_proc2305z00zzjas_classfilez00, BFALSE, BgL_arg1904z00_877,
					BgL_arg1905z00_878);
			}
			{	/* Jas/classfile.scm 20 */
				obj_t BgL_arg1932z00_934;
				obj_t BgL_arg1933z00_935;

				{	/* Jas/classfile.scm 20 */
					obj_t BgL_v1357z00_954;

					BgL_v1357z00_954 = create_vector(((long) 9));
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1939z00_955;

						BgL_arg1939z00_955 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2309z00zzjas_classfilez00,
							BGl_proc2308z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 0), BgL_arg1939z00_955);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1944z00_965;

						BgL_arg1944z00_965 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2311z00zzjas_classfilez00,
							BGl_proc2310z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 15)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 1), BgL_arg1944z00_965);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1949z00_975;

						BgL_arg1949z00_975 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc2313z00zzjas_classfilez00,
							BGl_proc2312z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 2), BgL_arg1949z00_975);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1955z00_985;

						BgL_arg1955z00_985 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2315z00zzjas_classfilez00,
							BGl_proc2314z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 3), BgL_arg1955z00_985);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1960z00_995;

						BgL_arg1960z00_995 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2318z00zzjas_classfilez00,
							BGl_proc2317z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2316z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 4), BgL_arg1960z00_995);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1967z00_1008;

						BgL_arg1967z00_1008 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc2321z00zzjas_classfilez00,
							BGl_proc2320z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2319z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 5), BgL_arg1967z00_1008);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1974z00_1021;

						BgL_arg1974z00_1021 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									32)), BGl_proc2324z00zzjas_classfilez00,
							BGl_proc2323z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2322z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 6), BgL_arg1974z00_1021);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1981z00_1034;

						BgL_arg1981z00_1034 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2327z00zzjas_classfilez00,
							BGl_proc2326z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2325z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 7), BgL_arg1981z00_1034);
					}
					{	/* Jas/classfile.scm 20 */
						obj_t BgL_arg1988z00_1047;

						BgL_arg1988z00_1047 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2330z00zzjas_classfilez00,
							BGl_proc2329z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2328z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1357z00_954, ((long) 8), BgL_arg1988z00_1047);
					}
					BgL_arg1932z00_934 = BgL_v1357z00_954;
				}
				{	/* Jas/classfile.scm 20 */
					obj_t BgL_v1358z00_1060;

					BgL_v1358z00_1060 = create_vector(((long) 0));
					BgL_arg1933z00_935 = BgL_v1358z00_1060;
				}
				BGl_fieldzd2orzd2methodz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 34)),
					CNST_TABLE_REF(((long) 19)), BGl_objectz00zz__objectz00,
					((long) 44084), BGl_proc2333z00zzjas_classfilez00,
					BGl_proc2332z00zzjas_classfilez00, BFALSE,
					BGl_proc2331z00zzjas_classfilez00, BFALSE, BgL_arg1932z00_934,
					BgL_arg1933z00_935);
			}
			{	/* Jas/classfile.scm 31 */
				obj_t BgL_arg1998z00_1067;
				obj_t BgL_arg1999z00_1068;

				{	/* Jas/classfile.scm 31 */
					obj_t BgL_v1359z00_1087;

					BgL_v1359z00_1087 = create_vector(((long) 0));
					BgL_arg1998z00_1067 = BgL_v1359z00_1087;
				}
				{	/* Jas/classfile.scm 31 */
					obj_t BgL_v1360z00_1088;

					BgL_v1360z00_1088 = create_vector(((long) 0));
					BgL_arg1999z00_1068 = BgL_v1360z00_1088;
				}
				BGl_fieldz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 35)),
					CNST_TABLE_REF(((long) 19)),
					BGl_fieldzd2orzd2methodz00zzjas_classfilez00, ((long) 63740),
					BGl_proc2336z00zzjas_classfilez00, BGl_proc2335z00zzjas_classfilez00,
					BFALSE, BGl_proc2334z00zzjas_classfilez00, BFALSE,
					BgL_arg1998z00_1067, BgL_arg1999z00_1068);
			}
			{	/* Jas/classfile.scm 33 */
				obj_t BgL_arg2010z00_1095;
				obj_t BgL_arg2011z00_1096;

				{	/* Jas/classfile.scm 33 */
					obj_t BgL_v1361z00_1115;

					BgL_v1361z00_1115 = create_vector(((long) 0));
					BgL_arg2010z00_1095 = BgL_v1361z00_1115;
				}
				{	/* Jas/classfile.scm 33 */
					obj_t BgL_v1362z00_1116;

					BgL_v1362z00_1116 = create_vector(((long) 0));
					BgL_arg2011z00_1096 = BgL_v1362z00_1116;
				}
				BGl_methodz00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 36)),
					CNST_TABLE_REF(((long) 19)),
					BGl_fieldzd2orzd2methodz00zzjas_classfilez00, ((long) 4122),
					BGl_proc2339z00zzjas_classfilez00, BGl_proc2338z00zzjas_classfilez00,
					BFALSE, BGl_proc2337z00zzjas_classfilez00, BFALSE,
					BgL_arg2010z00_1095, BgL_arg2011z00_1096);
			}
			{	/* Jas/classfile.scm 35 */
				obj_t BgL_arg2022z00_1123;
				obj_t BgL_arg2023z00_1124;

				{	/* Jas/classfile.scm 35 */
					obj_t BgL_v1363z00_1138;

					BgL_v1363z00_1138 = create_vector(((long) 4));
					{	/* Jas/classfile.scm 35 */
						obj_t BgL_arg2031z00_1139;

						BgL_arg2031z00_1139 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc2341z00zzjas_classfilez00,
							BGl_proc2340z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1363z00_1138, ((long) 0), BgL_arg2031z00_1139);
					}
					{	/* Jas/classfile.scm 35 */
						obj_t BgL_arg2037z00_1149;

						BgL_arg2037z00_1149 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2343z00zzjas_classfilez00,
							BGl_proc2342z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1363z00_1138, ((long) 1), BgL_arg2037z00_1149);
					}
					{	/* Jas/classfile.scm 35 */
						obj_t BgL_arg2043z00_1159;

						BgL_arg2043z00_1159 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									37)), BGl_proc2345z00zzjas_classfilez00,
							BGl_proc2344z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1363z00_1138, ((long) 2), BgL_arg2043z00_1159);
					}
					{	/* Jas/classfile.scm 35 */
						obj_t BgL_arg2048z00_1169;

						BgL_arg2048z00_1169 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									38)), BGl_proc2347z00zzjas_classfilez00,
							BGl_proc2346z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1363z00_1138, ((long) 3), BgL_arg2048z00_1169);
					}
					BgL_arg2022z00_1123 = BgL_v1363z00_1138;
				}
				{	/* Jas/classfile.scm 35 */
					obj_t BgL_v1364z00_1179;

					BgL_v1364z00_1179 = create_vector(((long) 0));
					BgL_arg2023z00_1124 = BgL_v1364z00_1179;
				}
				BGl_attributez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 39)),
					CNST_TABLE_REF(((long) 19)), BGl_objectz00zz__objectz00,
					((long) 48255), BGl_proc2350z00zzjas_classfilez00,
					BGl_proc2349z00zzjas_classfilez00, BFALSE,
					BGl_proc2348z00zzjas_classfilez00, BFALSE, BgL_arg2022z00_1123,
					BgL_arg2023z00_1124);
			}
			{	/* Jas/classfile.scm 41 */
				obj_t BgL_arg2057z00_1186;
				obj_t BgL_arg2059z00_1187;

				{	/* Jas/classfile.scm 41 */
					obj_t BgL_v1365z00_1209;

					BgL_v1365z00_1209 = create_vector(((long) 12));
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2065z00_1210;

						BgL_arg2065z00_1210 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									40)), BGl_proc2353z00zzjas_classfilez00,
							BGl_proc2352z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2351z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 0), BgL_arg2065z00_1210);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2075z00_1223;

						BgL_arg2075z00_1223 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									41)), BGl_proc2356z00zzjas_classfilez00,
							BGl_proc2355z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2354z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 1), BgL_arg2075z00_1223);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2082z00_1236;

						BgL_arg2082z00_1236 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2359z00zzjas_classfilez00,
							BGl_proc2358z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2357z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 2), BgL_arg2082z00_1236);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2089z00_1249;

						BgL_arg2089z00_1249 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									42)), BGl_proc2362z00zzjas_classfilez00,
							BGl_proc2361z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2360z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 3), BgL_arg2089z00_1249);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2096z00_1262;

						BgL_arg2096z00_1262 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									43)), BGl_proc2365z00zzjas_classfilez00,
							BGl_proc2364z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2363z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 4), BgL_arg2096z00_1262);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2105z00_1276;

						BgL_arg2105z00_1276 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2368z00zzjas_classfilez00,
							BGl_proc2367z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2366z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 5), BgL_arg2105z00_1276);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2112z00_1289;

						BgL_arg2112z00_1289 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2371z00zzjas_classfilez00,
							BGl_proc2370z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2369z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 6), BgL_arg2112z00_1289);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2120z00_1302;

						BgL_arg2120z00_1302 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									45)), BGl_proc2374z00zzjas_classfilez00,
							BGl_proc2373z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2372z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 7), BgL_arg2120z00_1302);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2127z00_1315;

						BgL_arg2127z00_1315 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									46)), BGl_proc2377z00zzjas_classfilez00,
							BGl_proc2376z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2375z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 8), BgL_arg2127z00_1315);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2134z00_1328;

						BgL_arg2134z00_1328 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									47)), BGl_proc2380z00zzjas_classfilez00,
							BGl_proc2379z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2378z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 9), BgL_arg2134z00_1328);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2141z00_1341;

						BgL_arg2141z00_1341 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2383z00zzjas_classfilez00,
							BGl_proc2382z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2381z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 10), BgL_arg2141z00_1341);
					}
					{	/* Jas/classfile.scm 41 */
						obj_t BgL_arg2148z00_1354;

						BgL_arg2148z00_1354 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2386z00zzjas_classfilez00,
							BGl_proc2385z00zzjas_classfilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2384z00zzjas_classfilez00,
							CNST_TABLE_REF(((long) 17)));
						VECTOR_SET(BgL_v1365z00_1209, ((long) 11), BgL_arg2148z00_1354);
					}
					BgL_arg2057z00_1186 = BgL_v1365z00_1209;
				}
				{	/* Jas/classfile.scm 41 */
					obj_t BgL_v1366z00_1367;

					BgL_v1366z00_1367 = create_vector(((long) 0));
					BgL_arg2059z00_1187 = BgL_v1366z00_1367;
				}
				return (BGl_classfilez00zzjas_classfilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 49)),
						CNST_TABLE_REF(((long) 19)), BGl_objectz00zz__objectz00,
						((long) 22463), BGl_proc2389z00zzjas_classfilez00,
						BGl_proc2388z00zzjas_classfilez00, BFALSE,
						BGl_proc2387z00zzjas_classfilez00, BFALSE, BgL_arg2057z00_1186,
						BgL_arg2059z00_1187), BUNSPEC);
		}}

	}



/* &<@anonymous:2064> */
	obj_t BGl_z62zc3z04anonymousza32064ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2578, obj_t BgL_new1134z00_2579)
	{
		{	/* Jas/classfile.scm 41 */
			{
				BgL_classfilez00_bglt BgL_auxz00_4560;

				((((BgL_classfilez00_bglt) COBJECT(
								((BgL_classfilez00_bglt) BgL_new1134z00_2579)))->
						BgL_currentzd2methodzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_globalsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_poolz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_poolzd2siza7ez75) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_pooledzd2nameszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_flagsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_mez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_superz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_interfacesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_fieldsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_methodsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(((BgL_classfilez00_bglt)
									BgL_new1134z00_2579)))->BgL_attributesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4560 = ((BgL_classfilez00_bglt) BgL_new1134z00_2579);
				return ((obj_t) BgL_auxz00_4560);
			}
		}

	}



/* &lambda2062 */
	BgL_classfilez00_bglt BGl_z62lambda2062z62zzjas_classfilez00(obj_t
		BgL_envz00_2580)
	{
		{	/* Jas/classfile.scm 41 */
			{	/* Jas/classfile.scm 41 */
				BgL_classfilez00_bglt BgL_new1133z00_2915;

				BgL_new1133z00_2915 =
					((BgL_classfilez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_classfilez00_bgl))));
				{	/* Jas/classfile.scm 41 */
					long BgL_arg2063z00_2916;

					{	/* Jas/classfile.scm 41 */
						long BgL_res2253z00_2917;

						BgL_res2253z00_2917 =
							BGL_CLASS_INDEX(BGl_classfilez00zzjas_classfilez00);
						BgL_arg2063z00_2916 = BgL_res2253z00_2917;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1133z00_2915), BgL_arg2063z00_2916);
				}
				return BgL_new1133z00_2915;
			}
		}

	}



/* &lambda2060 */
	BgL_classfilez00_bglt BGl_z62lambda2060z62zzjas_classfilez00(obj_t
		BgL_envz00_2581, obj_t BgL_currentzd2method1121zd2_2582,
		obj_t BgL_globals1122z00_2583, obj_t BgL_pool1123z00_2584,
		obj_t BgL_poolzd2siza7e1124z75_2585, obj_t BgL_pooledzd2names1125zd2_2586,
		obj_t BgL_flags1126z00_2587, obj_t BgL_me1127z00_2588,
		obj_t BgL_super1128z00_2589, obj_t BgL_interfaces1129z00_2590,
		obj_t BgL_fields1130z00_2591, obj_t BgL_methods1131z00_2592,
		obj_t BgL_attributes1132z00_2593)
	{
		{	/* Jas/classfile.scm 41 */
			{	/* Jas/classfile.scm 41 */
				BgL_classfilez00_bglt BgL_new1334z00_2918;

				{	/* Jas/classfile.scm 41 */
					BgL_classfilez00_bglt BgL_new1333z00_2919;

					BgL_new1333z00_2919 =
						((BgL_classfilez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_classfilez00_bgl))));
					{	/* Jas/classfile.scm 41 */
						long BgL_arg2061z00_2920;

						{	/* Jas/classfile.scm 41 */
							long BgL_res2252z00_2921;

							BgL_res2252z00_2921 =
								BGL_CLASS_INDEX(BGl_classfilez00zzjas_classfilez00);
							BgL_arg2061z00_2920 = BgL_res2252z00_2921;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1333z00_2919), BgL_arg2061z00_2920);
					}
					BgL_new1334z00_2918 = BgL_new1333z00_2919;
				}
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_currentzd2methodzd2) =
					((obj_t) BgL_currentzd2method1121zd2_2582), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_globalsz00) = ((obj_t) BgL_globals1122z00_2583), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->BgL_poolz00) =
					((obj_t) BgL_pool1123z00_2584), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_poolzd2siza7ez75) =
					((obj_t) BgL_poolzd2siza7e1124z75_2585), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_pooledzd2nameszd2) =
					((obj_t) BgL_pooledzd2names1125zd2_2586), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_flagsz00) = ((obj_t) BgL_flags1126z00_2587), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->BgL_mez00) =
					((obj_t) BgL_me1127z00_2588), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_superz00) = ((obj_t) BgL_super1128z00_2589), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_interfacesz00) = ((obj_t) BgL_interfaces1129z00_2590), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_fieldsz00) = ((obj_t) BgL_fields1130z00_2591), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_methodsz00) = ((obj_t) BgL_methods1131z00_2592), BUNSPEC);
				((((BgL_classfilez00_bglt) COBJECT(BgL_new1334z00_2918))->
						BgL_attributesz00) = ((obj_t) BgL_attributes1132z00_2593), BUNSPEC);
				return BgL_new1334z00_2918;
			}
		}

	}



/* &<@anonymous:2155> */
	obj_t BGl_z62zc3z04anonymousza32155ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2594)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2154 */
	obj_t BGl_z62lambda2154z62zzjas_classfilez00(obj_t BgL_envz00_2595,
		obj_t BgL_oz00_2596, obj_t BgL_vz00_2597)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2596)))->BgL_attributesz00) =
				((obj_t) BgL_vz00_2597), BUNSPEC);
		}

	}



/* &lambda2153 */
	obj_t BGl_z62lambda2153z62zzjas_classfilez00(obj_t BgL_envz00_2598,
		obj_t BgL_oz00_2599)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2599)))->BgL_attributesz00);
		}

	}



/* &<@anonymous:2147> */
	obj_t BGl_z62zc3z04anonymousza32147ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2600)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2146 */
	obj_t BGl_z62lambda2146z62zzjas_classfilez00(obj_t BgL_envz00_2601,
		obj_t BgL_oz00_2602, obj_t BgL_vz00_2603)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2602)))->BgL_methodsz00) =
				((obj_t) BgL_vz00_2603), BUNSPEC);
		}

	}



/* &lambda2145 */
	obj_t BGl_z62lambda2145z62zzjas_classfilez00(obj_t BgL_envz00_2604,
		obj_t BgL_oz00_2605)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2605)))->BgL_methodsz00);
		}

	}



/* &<@anonymous:2140> */
	obj_t BGl_z62zc3z04anonymousza32140ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2606)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2139 */
	obj_t BGl_z62lambda2139z62zzjas_classfilez00(obj_t BgL_envz00_2607,
		obj_t BgL_oz00_2608, obj_t BgL_vz00_2609)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2608)))->BgL_fieldsz00) =
				((obj_t) BgL_vz00_2609), BUNSPEC);
		}

	}



/* &lambda2138 */
	obj_t BGl_z62lambda2138z62zzjas_classfilez00(obj_t BgL_envz00_2610,
		obj_t BgL_oz00_2611)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2611)))->BgL_fieldsz00);
		}

	}



/* &<@anonymous:2133> */
	obj_t BGl_z62zc3z04anonymousza32133ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2612)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2132 */
	obj_t BGl_z62lambda2132z62zzjas_classfilez00(obj_t BgL_envz00_2613,
		obj_t BgL_oz00_2614, obj_t BgL_vz00_2615)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2614)))->BgL_interfacesz00) =
				((obj_t) BgL_vz00_2615), BUNSPEC);
		}

	}



/* &lambda2131 */
	obj_t BGl_z62lambda2131z62zzjas_classfilez00(obj_t BgL_envz00_2616,
		obj_t BgL_oz00_2617)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2617)))->BgL_interfacesz00);
		}

	}



/* &<@anonymous:2126> */
	obj_t BGl_z62zc3z04anonymousza32126ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2618)
	{
		{	/* Jas/classfile.scm 41 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2125 */
	obj_t BGl_z62lambda2125z62zzjas_classfilez00(obj_t BgL_envz00_2619,
		obj_t BgL_oz00_2620, obj_t BgL_vz00_2621)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2620)))->BgL_superz00) =
				((obj_t) BgL_vz00_2621), BUNSPEC);
		}

	}



/* &lambda2124 */
	obj_t BGl_z62lambda2124z62zzjas_classfilez00(obj_t BgL_envz00_2622,
		obj_t BgL_oz00_2623)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2623)))->BgL_superz00);
		}

	}



/* &<@anonymous:2119> */
	obj_t BGl_z62zc3z04anonymousza32119ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2624)
	{
		{	/* Jas/classfile.scm 41 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2118 */
	obj_t BGl_z62lambda2118z62zzjas_classfilez00(obj_t BgL_envz00_2625,
		obj_t BgL_oz00_2626, obj_t BgL_vz00_2627)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2626)))->BgL_mez00) =
				((obj_t) BgL_vz00_2627), BUNSPEC);
		}

	}



/* &lambda2117 */
	obj_t BGl_z62lambda2117z62zzjas_classfilez00(obj_t BgL_envz00_2628,
		obj_t BgL_oz00_2629)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2629)))->BgL_mez00);
		}

	}



/* &<@anonymous:2111> */
	obj_t BGl_z62zc3z04anonymousza32111ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2630)
	{
		{	/* Jas/classfile.scm 41 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda2110 */
	obj_t BGl_z62lambda2110z62zzjas_classfilez00(obj_t BgL_envz00_2631,
		obj_t BgL_oz00_2632, obj_t BgL_vz00_2633)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2632)))->BgL_flagsz00) =
				((obj_t) BgL_vz00_2633), BUNSPEC);
		}

	}



/* &lambda2109 */
	obj_t BGl_z62lambda2109z62zzjas_classfilez00(obj_t BgL_envz00_2634,
		obj_t BgL_oz00_2635)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2635)))->BgL_flagsz00);
		}

	}



/* &<@anonymous:2103> */
	obj_t BGl_z62zc3z04anonymousza32103ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2636)
	{
		{	/* Jas/classfile.scm 41 */
			return BGl_makezd2hashtablezd2zz__hashz00(BNIL);
		}

	}



/* &lambda2102 */
	obj_t BGl_z62lambda2102z62zzjas_classfilez00(obj_t BgL_envz00_2637,
		obj_t BgL_oz00_2638, obj_t BgL_vz00_2639)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2638)))->
					BgL_pooledzd2nameszd2) = ((obj_t) BgL_vz00_2639), BUNSPEC);
		}

	}



/* &lambda2101 */
	obj_t BGl_z62lambda2101z62zzjas_classfilez00(obj_t BgL_envz00_2640,
		obj_t BgL_oz00_2641)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2641)))->BgL_pooledzd2nameszd2);
		}

	}



/* &<@anonymous:2095> */
	obj_t BGl_z62zc3z04anonymousza32095ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2642)
	{
		{	/* Jas/classfile.scm 41 */
			return BINT(((long) 1));
		}

	}



/* &lambda2094 */
	obj_t BGl_z62lambda2094z62zzjas_classfilez00(obj_t BgL_envz00_2643,
		obj_t BgL_oz00_2644, obj_t BgL_vz00_2645)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2644)))->BgL_poolzd2siza7ez75) =
				((obj_t) BgL_vz00_2645), BUNSPEC);
		}

	}



/* &lambda2093 */
	obj_t BGl_z62lambda2093z62zzjas_classfilez00(obj_t BgL_envz00_2646,
		obj_t BgL_oz00_2647)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2647)))->BgL_poolzd2siza7ez75);
		}

	}



/* &<@anonymous:2088> */
	obj_t BGl_z62zc3z04anonymousza32088ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2648)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2087 */
	obj_t BGl_z62lambda2087z62zzjas_classfilez00(obj_t BgL_envz00_2649,
		obj_t BgL_oz00_2650, obj_t BgL_vz00_2651)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2650)))->BgL_poolz00) =
				((obj_t) BgL_vz00_2651), BUNSPEC);
		}

	}



/* &lambda2086 */
	obj_t BGl_z62lambda2086z62zzjas_classfilez00(obj_t BgL_envz00_2652,
		obj_t BgL_oz00_2653)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2653)))->BgL_poolz00);
		}

	}



/* &<@anonymous:2081> */
	obj_t BGl_z62zc3z04anonymousza32081ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2654)
	{
		{	/* Jas/classfile.scm 41 */
			return BNIL;
		}

	}



/* &lambda2080 */
	obj_t BGl_z62lambda2080z62zzjas_classfilez00(obj_t BgL_envz00_2655,
		obj_t BgL_oz00_2656, obj_t BgL_vz00_2657)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2656)))->BgL_globalsz00) =
				((obj_t) BgL_vz00_2657), BUNSPEC);
		}

	}



/* &lambda2079 */
	obj_t BGl_z62lambda2079z62zzjas_classfilez00(obj_t BgL_envz00_2658,
		obj_t BgL_oz00_2659)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2659)))->BgL_globalsz00);
		}

	}



/* &<@anonymous:2072> */
	obj_t BGl_z62zc3z04anonymousza32072ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2660)
	{
		{	/* Jas/classfile.scm 41 */
			return CNST_TABLE_REF(((long) 50));
		}

	}



/* &lambda2071 */
	obj_t BGl_z62lambda2071z62zzjas_classfilez00(obj_t BgL_envz00_2661,
		obj_t BgL_oz00_2662, obj_t BgL_vz00_2663)
	{
		{	/* Jas/classfile.scm 41 */
			return
				((((BgL_classfilez00_bglt) COBJECT(
							((BgL_classfilez00_bglt) BgL_oz00_2662)))->
					BgL_currentzd2methodzd2) = ((obj_t) BgL_vz00_2663), BUNSPEC);
		}

	}



/* &lambda2070 */
	obj_t BGl_z62lambda2070z62zzjas_classfilez00(obj_t BgL_envz00_2664,
		obj_t BgL_oz00_2665)
	{
		{	/* Jas/classfile.scm 41 */
			return
				(((BgL_classfilez00_bglt) COBJECT(
						((BgL_classfilez00_bglt) BgL_oz00_2665)))->BgL_currentzd2methodzd2);
		}

	}



/* &<@anonymous:2029> */
	obj_t BGl_z62zc3z04anonymousza32029ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2666, obj_t BgL_new1119z00_2667)
	{
		{	/* Jas/classfile.scm 35 */
			{
				BgL_attributez00_bglt BgL_auxz00_4661;

				((((BgL_attributez00_bglt) COBJECT(
								((BgL_attributez00_bglt) BgL_new1119z00_2667)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(((BgL_attributez00_bglt)
									BgL_new1119z00_2667)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(((BgL_attributez00_bglt)
									BgL_new1119z00_2667)))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(((BgL_attributez00_bglt)
									BgL_new1119z00_2667)))->BgL_infoz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4661 = ((BgL_attributez00_bglt) BgL_new1119z00_2667);
				return ((obj_t) BgL_auxz00_4661);
			}
		}

	}



/* &lambda2027 */
	BgL_attributez00_bglt BGl_z62lambda2027z62zzjas_classfilez00(obj_t
		BgL_envz00_2668)
	{
		{	/* Jas/classfile.scm 35 */
			{	/* Jas/classfile.scm 35 */
				BgL_attributez00_bglt BgL_new1118z00_2947;

				BgL_new1118z00_2947 =
					((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_attributez00_bgl))));
				{	/* Jas/classfile.scm 35 */
					long BgL_arg2028z00_2948;

					{	/* Jas/classfile.scm 35 */
						long BgL_res2251z00_2949;

						BgL_res2251z00_2949 =
							BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
						BgL_arg2028z00_2948 = BgL_res2251z00_2949;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1118z00_2947), BgL_arg2028z00_2948);
				}
				return BgL_new1118z00_2947;
			}
		}

	}



/* &lambda2024 */
	BgL_attributez00_bglt BGl_z62lambda2024z62zzjas_classfilez00(obj_t
		BgL_envz00_2669, obj_t BgL_type1114z00_2670, obj_t BgL_name1115z00_2671,
		obj_t BgL_siza7e1116za7_2672, obj_t BgL_info1117z00_2673)
	{
		{	/* Jas/classfile.scm 35 */
			{	/* Jas/classfile.scm 35 */
				BgL_attributez00_bglt BgL_new1332z00_2950;

				{	/* Jas/classfile.scm 35 */
					BgL_attributez00_bglt BgL_new1331z00_2951;

					BgL_new1331z00_2951 =
						((BgL_attributez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_attributez00_bgl))));
					{	/* Jas/classfile.scm 35 */
						long BgL_arg2026z00_2952;

						{	/* Jas/classfile.scm 35 */
							long BgL_res2250z00_2953;

							BgL_res2250z00_2953 =
								BGL_CLASS_INDEX(BGl_attributez00zzjas_classfilez00);
							BgL_arg2026z00_2952 = BgL_res2250z00_2953;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1331z00_2951), BgL_arg2026z00_2952);
					}
					BgL_new1332z00_2950 = BgL_new1331z00_2951;
				}
				((((BgL_attributez00_bglt) COBJECT(BgL_new1332z00_2950))->BgL_typez00) =
					((obj_t) BgL_type1114z00_2670), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1332z00_2950))->BgL_namez00) =
					((obj_t) BgL_name1115z00_2671), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1332z00_2950))->
						BgL_siza7eza7) = ((obj_t) BgL_siza7e1116za7_2672), BUNSPEC);
				((((BgL_attributez00_bglt) COBJECT(BgL_new1332z00_2950))->BgL_infoz00) =
					((obj_t) BgL_info1117z00_2673), BUNSPEC);
				return BgL_new1332z00_2950;
			}
		}

	}



/* &lambda2052 */
	obj_t BGl_z62lambda2052z62zzjas_classfilez00(obj_t BgL_envz00_2674,
		obj_t BgL_oz00_2675, obj_t BgL_vz00_2676)
	{
		{	/* Jas/classfile.scm 35 */
			return
				((((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_oz00_2675)))->BgL_infoz00) =
				((obj_t) BgL_vz00_2676), BUNSPEC);
		}

	}



/* &lambda2051 */
	obj_t BGl_z62lambda2051z62zzjas_classfilez00(obj_t BgL_envz00_2677,
		obj_t BgL_oz00_2678)
	{
		{	/* Jas/classfile.scm 35 */
			return
				(((BgL_attributez00_bglt) COBJECT(
						((BgL_attributez00_bglt) BgL_oz00_2678)))->BgL_infoz00);
		}

	}



/* &lambda2047 */
	obj_t BGl_z62lambda2047z62zzjas_classfilez00(obj_t BgL_envz00_2679,
		obj_t BgL_oz00_2680, obj_t BgL_vz00_2681)
	{
		{	/* Jas/classfile.scm 35 */
			return
				((((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_oz00_2680)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_2681), BUNSPEC);
		}

	}



/* &lambda2046 */
	obj_t BGl_z62lambda2046z62zzjas_classfilez00(obj_t BgL_envz00_2682,
		obj_t BgL_oz00_2683)
	{
		{	/* Jas/classfile.scm 35 */
			return
				(((BgL_attributez00_bglt) COBJECT(
						((BgL_attributez00_bglt) BgL_oz00_2683)))->BgL_siza7eza7);
		}

	}



/* &lambda2041 */
	obj_t BGl_z62lambda2041z62zzjas_classfilez00(obj_t BgL_envz00_2684,
		obj_t BgL_oz00_2685, obj_t BgL_vz00_2686)
	{
		{	/* Jas/classfile.scm 35 */
			return
				((((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_oz00_2685)))->BgL_namez00) =
				((obj_t) BgL_vz00_2686), BUNSPEC);
		}

	}



/* &lambda2040 */
	obj_t BGl_z62lambda2040z62zzjas_classfilez00(obj_t BgL_envz00_2687,
		obj_t BgL_oz00_2688)
	{
		{	/* Jas/classfile.scm 35 */
			return
				(((BgL_attributez00_bglt) COBJECT(
						((BgL_attributez00_bglt) BgL_oz00_2688)))->BgL_namez00);
		}

	}



/* &lambda2036 */
	obj_t BGl_z62lambda2036z62zzjas_classfilez00(obj_t BgL_envz00_2689,
		obj_t BgL_oz00_2690, obj_t BgL_vz00_2691)
	{
		{	/* Jas/classfile.scm 35 */
			return
				((((BgL_attributez00_bglt) COBJECT(
							((BgL_attributez00_bglt) BgL_oz00_2690)))->BgL_typez00) =
				((obj_t) BgL_vz00_2691), BUNSPEC);
		}

	}



/* &lambda2035 */
	obj_t BGl_z62lambda2035z62zzjas_classfilez00(obj_t BgL_envz00_2692,
		obj_t BgL_oz00_2693)
	{
		{	/* Jas/classfile.scm 35 */
			return
				(((BgL_attributez00_bglt) COBJECT(
						((BgL_attributez00_bglt) BgL_oz00_2693)))->BgL_typez00);
		}

	}



/* &<@anonymous:2017> */
	obj_t BGl_z62zc3z04anonymousza32017ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2694, obj_t BgL_new1112z00_2695)
	{
		{	/* Jas/classfile.scm 33 */
			{
				BgL_methodz00_bglt BgL_auxz00_4700;

				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt)
									((BgL_methodz00_bglt) BgL_new1112z00_2695))))->BgL_flagsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_namez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_ownerz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_usertypez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_pnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_descriptorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_poolz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_methodz00_bglt)
										BgL_new1112z00_2695))))->BgL_attributesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4700 = ((BgL_methodz00_bglt) BgL_new1112z00_2695);
				return ((obj_t) BgL_auxz00_4700);
			}
		}

	}



/* &lambda2014 */
	BgL_methodz00_bglt BGl_z62lambda2014z62zzjas_classfilez00(obj_t
		BgL_envz00_2696)
	{
		{	/* Jas/classfile.scm 33 */
			{	/* Jas/classfile.scm 33 */
				BgL_methodz00_bglt BgL_new1111z00_2963;

				BgL_new1111z00_2963 =
					((BgL_methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_methodz00_bgl))));
				{	/* Jas/classfile.scm 33 */
					long BgL_arg2016z00_2964;

					{	/* Jas/classfile.scm 33 */
						long BgL_res2249z00_2965;

						BgL_res2249z00_2965 =
							BGL_CLASS_INDEX(BGl_methodz00zzjas_classfilez00);
						BgL_arg2016z00_2964 = BgL_res2249z00_2965;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1111z00_2963), BgL_arg2016z00_2964);
				}
				return BgL_new1111z00_2963;
			}
		}

	}



/* &lambda2012 */
	BgL_methodz00_bglt BGl_z62lambda2012z62zzjas_classfilez00(obj_t
		BgL_envz00_2697, obj_t BgL_flags1102z00_2698, obj_t BgL_name1103z00_2699,
		obj_t BgL_owner1104z00_2700, obj_t BgL_usertype1105z00_2701,
		obj_t BgL_type1106z00_2702, obj_t BgL_pname1107z00_2703,
		obj_t BgL_descriptor1108z00_2704, obj_t BgL_pool1109z00_2705,
		obj_t BgL_attributes1110z00_2706)
	{
		{	/* Jas/classfile.scm 33 */
			{	/* Jas/classfile.scm 33 */
				BgL_methodz00_bglt BgL_new1330z00_2967;

				{	/* Jas/classfile.scm 33 */
					BgL_methodz00_bglt BgL_new1329z00_2968;

					BgL_new1329z00_2968 =
						((BgL_methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_methodz00_bgl))));
					{	/* Jas/classfile.scm 33 */
						long BgL_arg2013z00_2969;

						{	/* Jas/classfile.scm 33 */
							long BgL_res2248z00_2970;

							BgL_res2248z00_2970 =
								BGL_CLASS_INDEX(BGl_methodz00zzjas_classfilez00);
							BgL_arg2013z00_2969 = BgL_res2248z00_2970;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1329z00_2968), BgL_arg2013z00_2969);
					}
					BgL_new1330z00_2967 = BgL_new1329z00_2968;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1330z00_2967)))->
						BgL_flagsz00) = ((obj_t) BgL_flags1102z00_2698), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_namez00) =
					((obj_t) ((obj_t) BgL_name1103z00_2699)), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_ownerz00) =
					((obj_t) BgL_owner1104z00_2700), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_usertypez00) =
					((obj_t) BgL_usertype1105z00_2701), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_typez00) =
					((obj_t) BgL_type1106z00_2702), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_pnamez00) =
					((obj_t) BgL_pname1107z00_2703), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1108z00_2704), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_poolz00) =
					((obj_t) BgL_pool1109z00_2705), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1330z00_2967)))->BgL_attributesz00) =
					((obj_t) BgL_attributes1110z00_2706), BUNSPEC);
				return BgL_new1330z00_2967;
			}
		}

	}



/* &<@anonymous:2004> */
	obj_t BGl_z62zc3z04anonymousza32004ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2707, obj_t BgL_new1100z00_2708)
	{
		{	/* Jas/classfile.scm 31 */
			{
				BgL_fieldz00_bglt BgL_auxz00_4757;

				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt)
									((BgL_fieldz00_bglt) BgL_new1100z00_2708))))->BgL_flagsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_namez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_ownerz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_usertypez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_pnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_descriptorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_poolz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt) ((BgL_fieldz00_bglt)
										BgL_new1100z00_2708))))->BgL_attributesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4757 = ((BgL_fieldz00_bglt) BgL_new1100z00_2708);
				return ((obj_t) BgL_auxz00_4757);
			}
		}

	}



/* &lambda2002 */
	BgL_fieldz00_bglt BGl_z62lambda2002z62zzjas_classfilez00(obj_t
		BgL_envz00_2709)
	{
		{	/* Jas/classfile.scm 31 */
			{	/* Jas/classfile.scm 31 */
				BgL_fieldz00_bglt BgL_new1099z00_2972;

				BgL_new1099z00_2972 =
					((BgL_fieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_fieldz00_bgl))));
				{	/* Jas/classfile.scm 31 */
					long BgL_arg2003z00_2973;

					{	/* Jas/classfile.scm 31 */
						long BgL_res2247z00_2974;

						BgL_res2247z00_2974 =
							BGL_CLASS_INDEX(BGl_fieldz00zzjas_classfilez00);
						BgL_arg2003z00_2973 = BgL_res2247z00_2974;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1099z00_2972), BgL_arg2003z00_2973);
				}
				return BgL_new1099z00_2972;
			}
		}

	}



/* &lambda2000 */
	BgL_fieldz00_bglt BGl_z62lambda2000z62zzjas_classfilez00(obj_t
		BgL_envz00_2710, obj_t BgL_flags1090z00_2711, obj_t BgL_name1091z00_2712,
		obj_t BgL_owner1092z00_2713, obj_t BgL_usertype1093z00_2714,
		obj_t BgL_type1094z00_2715, obj_t BgL_pname1095z00_2716,
		obj_t BgL_descriptor1096z00_2717, obj_t BgL_pool1097z00_2718,
		obj_t BgL_attributes1098z00_2719)
	{
		{	/* Jas/classfile.scm 31 */
			{	/* Jas/classfile.scm 31 */
				BgL_fieldz00_bglt BgL_new1328z00_2976;

				{	/* Jas/classfile.scm 31 */
					BgL_fieldz00_bglt BgL_new1327z00_2977;

					BgL_new1327z00_2977 =
						((BgL_fieldz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_fieldz00_bgl))));
					{	/* Jas/classfile.scm 31 */
						long BgL_arg2001z00_2978;

						{	/* Jas/classfile.scm 31 */
							long BgL_res2246z00_2979;

							BgL_res2246z00_2979 =
								BGL_CLASS_INDEX(BGl_fieldz00zzjas_classfilez00);
							BgL_arg2001z00_2978 = BgL_res2246z00_2979;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1327z00_2977), BgL_arg2001z00_2978);
					}
					BgL_new1328z00_2976 = BgL_new1327z00_2977;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1328z00_2976)))->
						BgL_flagsz00) = ((obj_t) BgL_flags1090z00_2711), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_namez00) =
					((obj_t) ((obj_t) BgL_name1091z00_2712)), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_ownerz00) =
					((obj_t) BgL_owner1092z00_2713), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_usertypez00) =
					((obj_t) BgL_usertype1093z00_2714), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_typez00) =
					((obj_t) BgL_type1094z00_2715), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_pnamez00) =
					((obj_t) BgL_pname1095z00_2716), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_descriptorz00) =
					((obj_t) BgL_descriptor1096z00_2717), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_poolz00) =
					((obj_t) BgL_pool1097z00_2718), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1328z00_2976)))->BgL_attributesz00) =
					((obj_t) BgL_attributes1098z00_2719), BUNSPEC);
				return BgL_new1328z00_2976;
			}
		}

	}



/* &<@anonymous:1938> */
	obj_t BGl_z62zc3z04anonymousza31938ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2720, obj_t BgL_new1088z00_2721)
	{
		{	/* Jas/classfile.scm 20 */
			{
				BgL_fieldzd2orzd2methodz00_bglt BgL_auxz00_4814;

				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
								((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_2721)))->
						BgL_flagsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_namez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_ownerz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_usertypez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_typez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_pnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_descriptorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_poolz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt)
							COBJECT(((BgL_fieldzd2orzd2methodz00_bglt)
									BgL_new1088z00_2721)))->BgL_attributesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4814 =
					((BgL_fieldzd2orzd2methodz00_bglt) BgL_new1088z00_2721);
				return ((obj_t) BgL_auxz00_4814);
			}
		}

	}



/* &lambda1936 */
	BgL_fieldzd2orzd2methodz00_bglt BGl_z62lambda1936z62zzjas_classfilez00(obj_t
		BgL_envz00_2722)
	{
		{	/* Jas/classfile.scm 20 */
			{	/* Jas/classfile.scm 20 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_new1087z00_2981;

				BgL_new1087z00_2981 =
					((BgL_fieldzd2orzd2methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_fieldzd2orzd2methodz00_bgl))));
				{	/* Jas/classfile.scm 20 */
					long BgL_arg1937z00_2982;

					{	/* Jas/classfile.scm 20 */
						long BgL_res2245z00_2983;

						BgL_res2245z00_2983 =
							BGL_CLASS_INDEX(BGl_fieldzd2orzd2methodz00zzjas_classfilez00);
						BgL_arg1937z00_2982 = BgL_res2245z00_2983;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1087z00_2981), BgL_arg1937z00_2982);
				}
				return BgL_new1087z00_2981;
			}
		}

	}



/* &lambda1934 */
	BgL_fieldzd2orzd2methodz00_bglt BGl_z62lambda1934z62zzjas_classfilez00(obj_t
		BgL_envz00_2723, obj_t BgL_flags1078z00_2724, obj_t BgL_name1079z00_2725,
		obj_t BgL_owner1080z00_2726, obj_t BgL_usertype1081z00_2727,
		obj_t BgL_type1082z00_2728, obj_t BgL_pname1083z00_2729,
		obj_t BgL_descriptor1084z00_2730, obj_t BgL_pool1085z00_2731,
		obj_t BgL_attributes1086z00_2732)
	{
		{	/* Jas/classfile.scm 20 */
			{	/* Jas/classfile.scm 20 */
				BgL_fieldzd2orzd2methodz00_bglt BgL_new1326z00_2985;

				{	/* Jas/classfile.scm 20 */
					BgL_fieldzd2orzd2methodz00_bglt BgL_new1325z00_2986;

					BgL_new1325z00_2986 =
						((BgL_fieldzd2orzd2methodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_fieldzd2orzd2methodz00_bgl))));
					{	/* Jas/classfile.scm 20 */
						long BgL_arg1935z00_2987;

						{	/* Jas/classfile.scm 20 */
							long BgL_res2244z00_2988;

							BgL_res2244z00_2988 =
								BGL_CLASS_INDEX(BGl_fieldzd2orzd2methodz00zzjas_classfilez00);
							BgL_arg1935z00_2987 = BgL_res2244z00_2988;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1325z00_2986), BgL_arg1935z00_2987);
					}
					BgL_new1326z00_2985 = BgL_new1325z00_2986;
				}
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_flagsz00) = ((obj_t) BgL_flags1078z00_2724), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_namez00) = ((obj_t) ((obj_t) BgL_name1079z00_2725)), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_ownerz00) = ((obj_t) BgL_owner1080z00_2726), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_usertypez00) = ((obj_t) BgL_usertype1081z00_2727), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_typez00) = ((obj_t) BgL_type1082z00_2728), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_pnamez00) = ((obj_t) BgL_pname1083z00_2729), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_descriptorz00) = ((obj_t) BgL_descriptor1084z00_2730), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_poolz00) = ((obj_t) BgL_pool1085z00_2731), BUNSPEC);
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(BgL_new1326z00_2985))->
						BgL_attributesz00) = ((obj_t) BgL_attributes1086z00_2732), BUNSPEC);
				return BgL_new1326z00_2985;
			}
		}

	}



/* &<@anonymous:1994> */
	obj_t BGl_z62zc3z04anonymousza31994ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2733)
	{
		{	/* Jas/classfile.scm 20 */
			return BNIL;
		}

	}



/* &lambda1993 */
	obj_t BGl_z62lambda1993z62zzjas_classfilez00(obj_t BgL_envz00_2734,
		obj_t BgL_oz00_2735, obj_t BgL_vz00_2736)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2735)))->
					BgL_attributesz00) = ((obj_t) BgL_vz00_2736), BUNSPEC);
		}

	}



/* &lambda1992 */
	obj_t BGl_z62lambda1992z62zzjas_classfilez00(obj_t BgL_envz00_2737,
		obj_t BgL_oz00_2738)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2738)))->
				BgL_attributesz00);
		}

	}



/* &<@anonymous:1987> */
	obj_t BGl_z62zc3z04anonymousza31987ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2739)
	{
		{	/* Jas/classfile.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1986 */
	obj_t BGl_z62lambda1986z62zzjas_classfilez00(obj_t BgL_envz00_2740,
		obj_t BgL_oz00_2741, obj_t BgL_vz00_2742)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2741)))->
					BgL_poolz00) = ((obj_t) BgL_vz00_2742), BUNSPEC);
		}

	}



/* &lambda1985 */
	obj_t BGl_z62lambda1985z62zzjas_classfilez00(obj_t BgL_envz00_2743,
		obj_t BgL_oz00_2744)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2744)))->BgL_poolz00);
		}

	}



/* &<@anonymous:1980> */
	obj_t BGl_z62zc3z04anonymousza31980ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2745)
	{
		{	/* Jas/classfile.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1979 */
	obj_t BGl_z62lambda1979z62zzjas_classfilez00(obj_t BgL_envz00_2746,
		obj_t BgL_oz00_2747, obj_t BgL_vz00_2748)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2747)))->
					BgL_descriptorz00) = ((obj_t) BgL_vz00_2748), BUNSPEC);
		}

	}



/* &lambda1978 */
	obj_t BGl_z62lambda1978z62zzjas_classfilez00(obj_t BgL_envz00_2749,
		obj_t BgL_oz00_2750)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2750)))->
				BgL_descriptorz00);
		}

	}



/* &<@anonymous:1973> */
	obj_t BGl_z62zc3z04anonymousza31973ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2751)
	{
		{	/* Jas/classfile.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1972 */
	obj_t BGl_z62lambda1972z62zzjas_classfilez00(obj_t BgL_envz00_2752,
		obj_t BgL_oz00_2753, obj_t BgL_vz00_2754)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2753)))->
					BgL_pnamez00) = ((obj_t) BgL_vz00_2754), BUNSPEC);
		}

	}



/* &lambda1971 */
	obj_t BGl_z62lambda1971z62zzjas_classfilez00(obj_t BgL_envz00_2755,
		obj_t BgL_oz00_2756)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2756)))->BgL_pnamez00);
		}

	}



/* &<@anonymous:1966> */
	obj_t BGl_z62zc3z04anonymousza31966ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2757)
	{
		{	/* Jas/classfile.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1965 */
	obj_t BGl_z62lambda1965z62zzjas_classfilez00(obj_t BgL_envz00_2758,
		obj_t BgL_oz00_2759, obj_t BgL_vz00_2760)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2759)))->
					BgL_typez00) = ((obj_t) BgL_vz00_2760), BUNSPEC);
		}

	}



/* &lambda1964 */
	obj_t BGl_z62lambda1964z62zzjas_classfilez00(obj_t BgL_envz00_2761,
		obj_t BgL_oz00_2762)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2762)))->BgL_typez00);
		}

	}



/* &lambda1959 */
	obj_t BGl_z62lambda1959z62zzjas_classfilez00(obj_t BgL_envz00_2763,
		obj_t BgL_oz00_2764, obj_t BgL_vz00_2765)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2764)))->
					BgL_usertypez00) = ((obj_t) BgL_vz00_2765), BUNSPEC);
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzjas_classfilez00(obj_t BgL_envz00_2766,
		obj_t BgL_oz00_2767)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2767)))->
				BgL_usertypez00);
		}

	}



/* &lambda1954 */
	obj_t BGl_z62lambda1954z62zzjas_classfilez00(obj_t BgL_envz00_2768,
		obj_t BgL_oz00_2769, obj_t BgL_vz00_2770)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2769)))->
					BgL_ownerz00) = ((obj_t) BgL_vz00_2770), BUNSPEC);
		}

	}



/* &lambda1953 */
	obj_t BGl_z62lambda1953z62zzjas_classfilez00(obj_t BgL_envz00_2771,
		obj_t BgL_oz00_2772)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2772)))->BgL_ownerz00);
		}

	}



/* &lambda1948 */
	obj_t BGl_z62lambda1948z62zzjas_classfilez00(obj_t BgL_envz00_2773,
		obj_t BgL_oz00_2774, obj_t BgL_vz00_2775)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2774)))->
					BgL_namez00) = ((obj_t) ((obj_t) BgL_vz00_2775)), BUNSPEC);
		}

	}



/* &lambda1947 */
	obj_t BGl_z62lambda1947z62zzjas_classfilez00(obj_t BgL_envz00_2776,
		obj_t BgL_oz00_2777)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2777)))->BgL_namez00);
		}

	}



/* &lambda1943 */
	obj_t BGl_z62lambda1943z62zzjas_classfilez00(obj_t BgL_envz00_2778,
		obj_t BgL_oz00_2779, obj_t BgL_vz00_2780)
	{
		{	/* Jas/classfile.scm 20 */
			return
				((((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
							((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2779)))->
					BgL_flagsz00) = ((obj_t) BgL_vz00_2780), BUNSPEC);
		}

	}



/* &lambda1942 */
	obj_t BGl_z62lambda1942z62zzjas_classfilez00(obj_t BgL_envz00_2781,
		obj_t BgL_oz00_2782)
	{
		{	/* Jas/classfile.scm 20 */
			return
				(((BgL_fieldzd2orzd2methodz00_bglt) COBJECT(
						((BgL_fieldzd2orzd2methodz00_bglt) BgL_oz00_2782)))->BgL_flagsz00);
		}

	}



/* &<@anonymous:1910> */
	obj_t BGl_z62zc3z04anonymousza31910ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2783, obj_t BgL_new1076z00_2784)
	{
		{	/* Jas/classfile.scm 15 */
			{
				BgL_classez00_bglt BgL_auxz00_4894;

				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt)
									((BgL_classez00_bglt) BgL_new1076z00_2784))))->BgL_codez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_jastypez00_bglt)
							COBJECT(((BgL_jastypez00_bglt) ((BgL_classez00_bglt)
										BgL_new1076z00_2784))))->BgL_vectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(((BgL_classez00_bglt)
									BgL_new1076z00_2784)))->BgL_flagsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(((BgL_classez00_bglt)
									BgL_new1076z00_2784)))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(((BgL_classez00_bglt)
									BgL_new1076z00_2784)))->BgL_poolz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4894 = ((BgL_classez00_bglt) BgL_new1076z00_2784);
				return ((obj_t) BgL_auxz00_4894);
			}
		}

	}



/* &lambda1908 */
	BgL_classez00_bglt BGl_z62lambda1908z62zzjas_classfilez00(obj_t
		BgL_envz00_2785)
	{
		{	/* Jas/classfile.scm 15 */
			{	/* Jas/classfile.scm 15 */
				BgL_classez00_bglt BgL_new1075z00_3009;

				BgL_new1075z00_3009 =
					((BgL_classez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_classez00_bgl))));
				{	/* Jas/classfile.scm 15 */
					long BgL_arg1909z00_3010;

					{	/* Jas/classfile.scm 15 */
						long BgL_res2243z00_3011;

						BgL_res2243z00_3011 =
							BGL_CLASS_INDEX(BGl_classez00zzjas_classfilez00);
						BgL_arg1909z00_3010 = BgL_res2243z00_3011;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1075z00_3009), BgL_arg1909z00_3010);
				}
				return BgL_new1075z00_3009;
			}
		}

	}



/* &lambda1906 */
	BgL_classez00_bglt BGl_z62lambda1906z62zzjas_classfilez00(obj_t
		BgL_envz00_2786, obj_t BgL_code1070z00_2787, obj_t BgL_vect1071z00_2788,
		obj_t BgL_flags1072z00_2789, obj_t BgL_name1073z00_2790,
		obj_t BgL_pool1074z00_2791)
	{
		{	/* Jas/classfile.scm 15 */
			{	/* Jas/classfile.scm 15 */
				BgL_classez00_bglt BgL_new1324z00_3013;

				{	/* Jas/classfile.scm 15 */
					BgL_classez00_bglt BgL_new1323z00_3014;

					BgL_new1323z00_3014 =
						((BgL_classez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_classez00_bgl))));
					{	/* Jas/classfile.scm 15 */
						long BgL_arg1907z00_3015;

						{	/* Jas/classfile.scm 15 */
							long BgL_res2242z00_3016;

							BgL_res2242z00_3016 =
								BGL_CLASS_INDEX(BGl_classez00zzjas_classfilez00);
							BgL_arg1907z00_3015 = BgL_res2242z00_3016;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1323z00_3014), BgL_arg1907z00_3015);
					}
					BgL_new1324z00_3013 = BgL_new1323z00_3014;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1324z00_3013)))->BgL_codez00) =
					((obj_t) ((obj_t) BgL_code1070z00_2787)), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1324z00_3013)))->BgL_vectz00) =
					((obj_t) BgL_vect1071z00_2788), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1324z00_3013))->BgL_flagsz00) =
					((obj_t) BgL_flags1072z00_2789), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1324z00_3013))->BgL_namez00) =
					((obj_t) BgL_name1073z00_2790), BUNSPEC);
				((((BgL_classez00_bglt) COBJECT(BgL_new1324z00_3013))->BgL_poolz00) =
					((obj_t) BgL_pool1074z00_2791), BUNSPEC);
				return BgL_new1324z00_3013;
			}
		}

	}



/* &<@anonymous:1928> */
	obj_t BGl_z62zc3z04anonymousza31928ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2792)
	{
		{	/* Jas/classfile.scm 15 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1927 */
	obj_t BGl_z62lambda1927z62zzjas_classfilez00(obj_t BgL_envz00_2793,
		obj_t BgL_oz00_2794, obj_t BgL_vz00_2795)
	{
		{	/* Jas/classfile.scm 15 */
			return
				((((BgL_classez00_bglt) COBJECT(
							((BgL_classez00_bglt) BgL_oz00_2794)))->BgL_poolz00) =
				((obj_t) BgL_vz00_2795), BUNSPEC);
		}

	}



/* &lambda1926 */
	obj_t BGl_z62lambda1926z62zzjas_classfilez00(obj_t BgL_envz00_2796,
		obj_t BgL_oz00_2797)
	{
		{	/* Jas/classfile.scm 15 */
			return
				(((BgL_classez00_bglt) COBJECT(
						((BgL_classez00_bglt) BgL_oz00_2797)))->BgL_poolz00);
		}

	}



/* &lambda1920 */
	obj_t BGl_z62lambda1920z62zzjas_classfilez00(obj_t BgL_envz00_2798,
		obj_t BgL_oz00_2799, obj_t BgL_vz00_2800)
	{
		{	/* Jas/classfile.scm 15 */
			return
				((((BgL_classez00_bglt) COBJECT(
							((BgL_classez00_bglt) BgL_oz00_2799)))->BgL_namez00) =
				((obj_t) BgL_vz00_2800), BUNSPEC);
		}

	}



/* &lambda1919 */
	obj_t BGl_z62lambda1919z62zzjas_classfilez00(obj_t BgL_envz00_2801,
		obj_t BgL_oz00_2802)
	{
		{	/* Jas/classfile.scm 15 */
			return
				(((BgL_classez00_bglt) COBJECT(
						((BgL_classez00_bglt) BgL_oz00_2802)))->BgL_namez00);
		}

	}



/* &lambda1915 */
	obj_t BGl_z62lambda1915z62zzjas_classfilez00(obj_t BgL_envz00_2803,
		obj_t BgL_oz00_2804, obj_t BgL_vz00_2805)
	{
		{	/* Jas/classfile.scm 15 */
			return
				((((BgL_classez00_bglt) COBJECT(
							((BgL_classez00_bglt) BgL_oz00_2804)))->BgL_flagsz00) =
				((obj_t) BgL_vz00_2805), BUNSPEC);
		}

	}



/* &lambda1914 */
	obj_t BGl_z62lambda1914z62zzjas_classfilez00(obj_t BgL_envz00_2806,
		obj_t BgL_oz00_2807)
	{
		{	/* Jas/classfile.scm 15 */
			return
				(((BgL_classez00_bglt) COBJECT(
						((BgL_classez00_bglt) BgL_oz00_2807)))->BgL_flagsz00);
		}

	}



/* &<@anonymous:1890> */
	obj_t BGl_z62zc3z04anonymousza31890ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2808, obj_t BgL_new1068z00_2809)
	{
		{	/* Jas/classfile.scm 13 */
			{
				BgL_jasfunz00_bglt BgL_auxz00_4938;

				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt)
									((BgL_jasfunz00_bglt) BgL_new1068z00_2809))))->BgL_codez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_jastypez00_bglt)
							COBJECT(((BgL_jastypez00_bglt) ((BgL_jasfunz00_bglt)
										BgL_new1068z00_2809))))->BgL_vectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_jastypez00_bglt BgL_auxz00_4945;

					{	/* Jas/classfile.scm 13 */
						obj_t BgL_classz00_3024;

						BgL_classz00_3024 = BGl_JasTypez00zzjas_classfilez00;
						{	/* Jas/classfile.scm 13 */
							obj_t BgL__ortest_1106z00_3025;

							BgL__ortest_1106z00_3025 = BGL_CLASS_NIL(BgL_classz00_3024);
							if (CBOOL(BgL__ortest_1106z00_3025))
								{	/* Jas/classfile.scm 13 */
									BgL_auxz00_4945 =
										((BgL_jastypez00_bglt) BgL__ortest_1106z00_3025);
								}
							else
								{	/* Jas/classfile.scm 13 */
									BgL_auxz00_4945 =
										((BgL_jastypez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3024));
								}
						}
					}
					((((BgL_jasfunz00_bglt) COBJECT(
									((BgL_jasfunz00_bglt) BgL_new1068z00_2809)))->BgL_tretz00) =
						((BgL_jastypez00_bglt) BgL_auxz00_4945), BUNSPEC);
				}
				((((BgL_jasfunz00_bglt) COBJECT(
								((BgL_jasfunz00_bglt) BgL_new1068z00_2809)))->BgL_targsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_4938 = ((BgL_jasfunz00_bglt) BgL_new1068z00_2809);
				return ((obj_t) BgL_auxz00_4938);
			}
		}

	}



/* &lambda1888 */
	BgL_jasfunz00_bglt BGl_z62lambda1888z62zzjas_classfilez00(obj_t
		BgL_envz00_2810)
	{
		{	/* Jas/classfile.scm 13 */
			{	/* Jas/classfile.scm 13 */
				BgL_jasfunz00_bglt BgL_new1067z00_3026;

				BgL_new1067z00_3026 =
					((BgL_jasfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jasfunz00_bgl))));
				{	/* Jas/classfile.scm 13 */
					long BgL_arg1889z00_3027;

					{	/* Jas/classfile.scm 13 */
						long BgL_res2241z00_3028;

						BgL_res2241z00_3028 =
							BGL_CLASS_INDEX(BGl_JasFunz00zzjas_classfilez00);
						BgL_arg1889z00_3027 = BgL_res2241z00_3028;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1067z00_3026), BgL_arg1889z00_3027);
				}
				return BgL_new1067z00_3026;
			}
		}

	}



/* &lambda1886 */
	BgL_jasfunz00_bglt BGl_z62lambda1886z62zzjas_classfilez00(obj_t
		BgL_envz00_2811, obj_t BgL_code1063z00_2812, obj_t BgL_vect1064z00_2813,
		obj_t BgL_tret1065z00_2814, obj_t BgL_targs1066z00_2815)
	{
		{	/* Jas/classfile.scm 13 */
			{	/* Jas/classfile.scm 13 */
				BgL_jasfunz00_bglt BgL_new1322z00_3031;

				{	/* Jas/classfile.scm 13 */
					BgL_jasfunz00_bglt BgL_new1321z00_3032;

					BgL_new1321z00_3032 =
						((BgL_jasfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jasfunz00_bgl))));
					{	/* Jas/classfile.scm 13 */
						long BgL_arg1887z00_3033;

						{	/* Jas/classfile.scm 13 */
							long BgL_res2240z00_3034;

							BgL_res2240z00_3034 =
								BGL_CLASS_INDEX(BGl_JasFunz00zzjas_classfilez00);
							BgL_arg1887z00_3033 = BgL_res2240z00_3034;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1321z00_3032), BgL_arg1887z00_3033);
					}
					BgL_new1322z00_3031 = BgL_new1321z00_3032;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1322z00_3031)))->BgL_codez00) =
					((obj_t) ((obj_t) BgL_code1063z00_2812)), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1322z00_3031)))->BgL_vectz00) =
					((obj_t) BgL_vect1064z00_2813), BUNSPEC);
				((((BgL_jasfunz00_bglt) COBJECT(BgL_new1322z00_3031))->BgL_tretz00) =
					((BgL_jastypez00_bglt) ((BgL_jastypez00_bglt) BgL_tret1065z00_2814)),
					BUNSPEC);
				((((BgL_jasfunz00_bglt) COBJECT(BgL_new1322z00_3031))->BgL_targsz00) =
					((obj_t) BgL_targs1066z00_2815), BUNSPEC);
				return BgL_new1322z00_3031;
			}
		}

	}



/* &lambda1900 */
	obj_t BGl_z62lambda1900z62zzjas_classfilez00(obj_t BgL_envz00_2816,
		obj_t BgL_oz00_2817, obj_t BgL_vz00_2818)
	{
		{	/* Jas/classfile.scm 13 */
			return
				((((BgL_jasfunz00_bglt) COBJECT(
							((BgL_jasfunz00_bglt) BgL_oz00_2817)))->BgL_targsz00) =
				((obj_t) BgL_vz00_2818), BUNSPEC);
		}

	}



/* &lambda1899 */
	obj_t BGl_z62lambda1899z62zzjas_classfilez00(obj_t BgL_envz00_2819,
		obj_t BgL_oz00_2820)
	{
		{	/* Jas/classfile.scm 13 */
			return
				(((BgL_jasfunz00_bglt) COBJECT(
						((BgL_jasfunz00_bglt) BgL_oz00_2820)))->BgL_targsz00);
		}

	}



/* &lambda1895 */
	obj_t BGl_z62lambda1895z62zzjas_classfilez00(obj_t BgL_envz00_2821,
		obj_t BgL_oz00_2822, obj_t BgL_vz00_2823)
	{
		{	/* Jas/classfile.scm 13 */
			return
				((((BgL_jasfunz00_bglt) COBJECT(
							((BgL_jasfunz00_bglt) BgL_oz00_2822)))->BgL_tretz00) =
				((BgL_jastypez00_bglt) ((BgL_jastypez00_bglt) BgL_vz00_2823)), BUNSPEC);
		}

	}



/* &lambda1894 */
	BgL_jastypez00_bglt BGl_z62lambda1894z62zzjas_classfilez00(obj_t
		BgL_envz00_2824, obj_t BgL_oz00_2825)
	{
		{	/* Jas/classfile.scm 13 */
			return
				(((BgL_jasfunz00_bglt) COBJECT(
						((BgL_jasfunz00_bglt) BgL_oz00_2825)))->BgL_tretz00);
		}

	}



/* &<@anonymous:1875> */
	obj_t BGl_z62zc3z04anonymousza31875ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2826, obj_t BgL_new1061z00_2827)
	{
		{	/* Jas/classfile.scm 11 */
			{
				BgL_vectz00_bglt BgL_auxz00_4983;

				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt)
									((BgL_vectz00_bglt) BgL_new1061z00_2827))))->BgL_codez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_jastypez00_bglt)
							COBJECT(((BgL_jastypez00_bglt) ((BgL_vectz00_bglt)
										BgL_new1061z00_2827))))->BgL_vectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				{
					BgL_jastypez00_bglt BgL_auxz00_4990;

					{	/* Jas/classfile.scm 11 */
						obj_t BgL_classz00_3041;

						BgL_classz00_3041 = BGl_JasTypez00zzjas_classfilez00;
						{	/* Jas/classfile.scm 11 */
							obj_t BgL__ortest_1106z00_3042;

							BgL__ortest_1106z00_3042 = BGL_CLASS_NIL(BgL_classz00_3041);
							if (CBOOL(BgL__ortest_1106z00_3042))
								{	/* Jas/classfile.scm 11 */
									BgL_auxz00_4990 =
										((BgL_jastypez00_bglt) BgL__ortest_1106z00_3042);
								}
							else
								{	/* Jas/classfile.scm 11 */
									BgL_auxz00_4990 =
										((BgL_jastypez00_bglt)
										BGl_classzd2nilzd2initz12z12zz__objectz00
										(BgL_classz00_3041));
								}
						}
					}
					((((BgL_vectz00_bglt) COBJECT(
									((BgL_vectz00_bglt) BgL_new1061z00_2827)))->BgL_typez00) =
						((BgL_jastypez00_bglt) BgL_auxz00_4990), BUNSPEC);
				}
				BgL_auxz00_4983 = ((BgL_vectz00_bglt) BgL_new1061z00_2827);
				return ((obj_t) BgL_auxz00_4983);
			}
		}

	}



/* &lambda1873 */
	BgL_vectz00_bglt BGl_z62lambda1873z62zzjas_classfilez00(obj_t BgL_envz00_2828)
	{
		{	/* Jas/classfile.scm 11 */
			{	/* Jas/classfile.scm 11 */
				BgL_vectz00_bglt BgL_new1060z00_3043;

				BgL_new1060z00_3043 =
					((BgL_vectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_vectz00_bgl))));
				{	/* Jas/classfile.scm 11 */
					long BgL_arg1874z00_3044;

					{	/* Jas/classfile.scm 11 */
						long BgL_res2239z00_3045;

						BgL_res2239z00_3045 =
							BGL_CLASS_INDEX(BGl_vectz00zzjas_classfilez00);
						BgL_arg1874z00_3044 = BgL_res2239z00_3045;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1060z00_3043), BgL_arg1874z00_3044);
				}
				return BgL_new1060z00_3043;
			}
		}

	}



/* &lambda1871 */
	BgL_vectz00_bglt BGl_z62lambda1871z62zzjas_classfilez00(obj_t BgL_envz00_2829,
		obj_t BgL_code1057z00_2830, obj_t BgL_vect1058z00_2831,
		obj_t BgL_type1059z00_2832)
	{
		{	/* Jas/classfile.scm 11 */
			{	/* Jas/classfile.scm 11 */
				BgL_vectz00_bglt BgL_new1320z00_3048;

				{	/* Jas/classfile.scm 11 */
					BgL_vectz00_bglt BgL_new1319z00_3049;

					BgL_new1319z00_3049 =
						((BgL_vectz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_vectz00_bgl))));
					{	/* Jas/classfile.scm 11 */
						long BgL_arg1872z00_3050;

						{	/* Jas/classfile.scm 11 */
							long BgL_res2238z00_3051;

							BgL_res2238z00_3051 =
								BGL_CLASS_INDEX(BGl_vectz00zzjas_classfilez00);
							BgL_arg1872z00_3050 = BgL_res2238z00_3051;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1319z00_3049), BgL_arg1872z00_3050);
					}
					BgL_new1320z00_3048 = BgL_new1319z00_3049;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1320z00_3048)))->BgL_codez00) =
					((obj_t) ((obj_t) BgL_code1057z00_2830)), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1320z00_3048)))->BgL_vectz00) =
					((obj_t) BgL_vect1058z00_2831), BUNSPEC);
				((((BgL_vectz00_bglt) COBJECT(BgL_new1320z00_3048))->BgL_typez00) =
					((BgL_jastypez00_bglt) ((BgL_jastypez00_bglt) BgL_type1059z00_2832)),
					BUNSPEC);
				return BgL_new1320z00_3048;
			}
		}

	}



/* &lambda1880 */
	obj_t BGl_z62lambda1880z62zzjas_classfilez00(obj_t BgL_envz00_2833,
		obj_t BgL_oz00_2834, obj_t BgL_vz00_2835)
	{
		{	/* Jas/classfile.scm 11 */
			return
				((((BgL_vectz00_bglt) COBJECT(
							((BgL_vectz00_bglt) BgL_oz00_2834)))->BgL_typez00) =
				((BgL_jastypez00_bglt) ((BgL_jastypez00_bglt) BgL_vz00_2835)), BUNSPEC);
		}

	}



/* &lambda1879 */
	BgL_jastypez00_bglt BGl_z62lambda1879z62zzjas_classfilez00(obj_t
		BgL_envz00_2836, obj_t BgL_oz00_2837)
	{
		{	/* Jas/classfile.scm 11 */
			return
				(((BgL_vectz00_bglt) COBJECT(
						((BgL_vectz00_bglt) BgL_oz00_2837)))->BgL_typez00);
		}

	}



/* &<@anonymous:1862> */
	obj_t BGl_z62zc3z04anonymousza31862ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2838, obj_t BgL_new1055z00_2839)
	{
		{	/* Jas/classfile.scm 9 */
			{
				BgL_basicz00_bglt BgL_auxz00_5021;

				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt)
									((BgL_basicz00_bglt) BgL_new1055z00_2839))))->BgL_codez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_jastypez00_bglt)
							COBJECT(((BgL_jastypez00_bglt) ((BgL_basicz00_bglt)
										BgL_new1055z00_2839))))->BgL_vectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5021 = ((BgL_basicz00_bglt) BgL_new1055z00_2839);
				return ((obj_t) BgL_auxz00_5021);
			}
		}

	}



/* &lambda1860 */
	BgL_basicz00_bglt BGl_z62lambda1860z62zzjas_classfilez00(obj_t
		BgL_envz00_2840)
	{
		{	/* Jas/classfile.scm 9 */
			{	/* Jas/classfile.scm 9 */
				BgL_basicz00_bglt BgL_new1054z00_3056;

				BgL_new1054z00_3056 =
					((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_basicz00_bgl))));
				{	/* Jas/classfile.scm 9 */
					long BgL_arg1861z00_3057;

					{	/* Jas/classfile.scm 9 */
						long BgL_res2237z00_3058;

						BgL_res2237z00_3058 =
							BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
						BgL_arg1861z00_3057 = BgL_res2237z00_3058;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1054z00_3056), BgL_arg1861z00_3057);
				}
				return BgL_new1054z00_3056;
			}
		}

	}



/* &lambda1858 */
	BgL_basicz00_bglt BGl_z62lambda1858z62zzjas_classfilez00(obj_t
		BgL_envz00_2841, obj_t BgL_code1052z00_2842, obj_t BgL_vect1053z00_2843)
	{
		{	/* Jas/classfile.scm 9 */
			{	/* Jas/classfile.scm 9 */
				BgL_basicz00_bglt BgL_new1318z00_3060;

				{	/* Jas/classfile.scm 9 */
					BgL_basicz00_bglt BgL_new1317z00_3061;

					BgL_new1317z00_3061 =
						((BgL_basicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_basicz00_bgl))));
					{	/* Jas/classfile.scm 9 */
						long BgL_arg1859z00_3062;

						{	/* Jas/classfile.scm 9 */
							long BgL_res2236z00_3063;

							BgL_res2236z00_3063 =
								BGL_CLASS_INDEX(BGl_basicz00zzjas_classfilez00);
							BgL_arg1859z00_3062 = BgL_res2236z00_3063;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1317z00_3061), BgL_arg1859z00_3062);
					}
					BgL_new1318z00_3060 = BgL_new1317z00_3061;
				}
				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1318z00_3060)))->BgL_codez00) =
					((obj_t) ((obj_t) BgL_code1052z00_2842)), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1318z00_3060)))->BgL_vectz00) =
					((obj_t) BgL_vect1053z00_2843), BUNSPEC);
				return BgL_new1318z00_3060;
			}
		}

	}



/* &<@anonymous:1839> */
	obj_t BGl_z62zc3z04anonymousza31839ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2844, obj_t BgL_new1050z00_2845)
	{
		{	/* Jas/classfile.scm 5 */
			{
				BgL_jastypez00_bglt BgL_auxz00_5043;

				((((BgL_jastypez00_bglt) COBJECT(
								((BgL_jastypez00_bglt) BgL_new1050z00_2845)))->BgL_codez00) =
					((obj_t) BGl_string2390z00zzjas_classfilez00), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(((BgL_jastypez00_bglt)
									BgL_new1050z00_2845)))->BgL_vectz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_5043 = ((BgL_jastypez00_bglt) BgL_new1050z00_2845);
				return ((obj_t) BgL_auxz00_5043);
			}
		}

	}



/* &lambda1836 */
	BgL_jastypez00_bglt BGl_z62lambda1836z62zzjas_classfilez00(obj_t
		BgL_envz00_2846)
	{
		{	/* Jas/classfile.scm 5 */
			{	/* Jas/classfile.scm 5 */
				BgL_jastypez00_bglt BgL_new1049z00_3065;

				BgL_new1049z00_3065 =
					((BgL_jastypez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jastypez00_bgl))));
				{	/* Jas/classfile.scm 5 */
					long BgL_arg1838z00_3066;

					{	/* Jas/classfile.scm 5 */
						long BgL_res2235z00_3067;

						BgL_res2235z00_3067 =
							BGL_CLASS_INDEX(BGl_JasTypez00zzjas_classfilez00);
						BgL_arg1838z00_3066 = BgL_res2235z00_3067;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1049z00_3065), BgL_arg1838z00_3066);
				}
				return BgL_new1049z00_3065;
			}
		}

	}



/* &lambda1833 */
	BgL_jastypez00_bglt BGl_z62lambda1833z62zzjas_classfilez00(obj_t
		BgL_envz00_2847, obj_t BgL_code1047z00_2848, obj_t BgL_vect1048z00_2849)
	{
		{	/* Jas/classfile.scm 5 */
			{	/* Jas/classfile.scm 5 */
				BgL_jastypez00_bglt BgL_new1316z00_3069;

				{	/* Jas/classfile.scm 5 */
					BgL_jastypez00_bglt BgL_new1315z00_3070;

					BgL_new1315z00_3070 =
						((BgL_jastypez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jastypez00_bgl))));
					{	/* Jas/classfile.scm 5 */
						long BgL_arg1835z00_3071;

						{	/* Jas/classfile.scm 5 */
							long BgL_res2234z00_3072;

							BgL_res2234z00_3072 =
								BGL_CLASS_INDEX(BGl_JasTypez00zzjas_classfilez00);
							BgL_arg1835z00_3071 = BgL_res2234z00_3072;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1315z00_3070), BgL_arg1835z00_3071);
					}
					BgL_new1316z00_3069 = BgL_new1315z00_3070;
				}
				((((BgL_jastypez00_bglt) COBJECT(BgL_new1316z00_3069))->BgL_codez00) =
					((obj_t) ((obj_t) BgL_code1047z00_2848)), BUNSPEC);
				((((BgL_jastypez00_bglt) COBJECT(BgL_new1316z00_3069))->BgL_vectz00) =
					((obj_t) BgL_vect1048z00_2849), BUNSPEC);
				return BgL_new1316z00_3069;
			}
		}

	}



/* &<@anonymous:1851> */
	obj_t BGl_z62zc3z04anonymousza31851ze3ze5zzjas_classfilez00(obj_t
		BgL_envz00_2850)
	{
		{	/* Jas/classfile.scm 5 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1850 */
	obj_t BGl_z62lambda1850z62zzjas_classfilez00(obj_t BgL_envz00_2851,
		obj_t BgL_oz00_2852, obj_t BgL_vz00_2853)
	{
		{	/* Jas/classfile.scm 5 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_2852)))->BgL_vectz00) =
				((obj_t) BgL_vz00_2853), BUNSPEC);
		}

	}



/* &lambda1849 */
	obj_t BGl_z62lambda1849z62zzjas_classfilez00(obj_t BgL_envz00_2854,
		obj_t BgL_oz00_2855)
	{
		{	/* Jas/classfile.scm 5 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_2855)))->BgL_vectz00);
		}

	}



/* &lambda1844 */
	obj_t BGl_z62lambda1844z62zzjas_classfilez00(obj_t BgL_envz00_2856,
		obj_t BgL_oz00_2857, obj_t BgL_vz00_2858)
	{
		{	/* Jas/classfile.scm 5 */
			return
				((((BgL_jastypez00_bglt) COBJECT(
							((BgL_jastypez00_bglt) BgL_oz00_2857)))->BgL_codez00) = ((obj_t)
					((obj_t) BgL_vz00_2858)), BUNSPEC);
		}

	}



/* &lambda1843 */
	obj_t BGl_z62lambda1843z62zzjas_classfilez00(obj_t BgL_envz00_2859,
		obj_t BgL_oz00_2860)
	{
		{	/* Jas/classfile.scm 5 */
			return
				(((BgL_jastypez00_bglt) COBJECT(
						((BgL_jastypez00_bglt) BgL_oz00_2860)))->BgL_codez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_classfilez00()
	{
		{	/* Jas/classfile.scm 1 */
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string2391z00zzjas_classfilez00));
		}

	}

#ifdef __cplusplus
}
#endif
