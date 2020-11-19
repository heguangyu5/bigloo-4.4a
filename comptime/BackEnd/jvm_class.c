/*===========================================================================*/
/*   (BackEnd/jvm_class.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/jvm_class.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
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


	static obj_t BGl_z62jvmzd2fieldszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2lightzd2funcallsz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2callcczb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2methodszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2foreignzd2closurezd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, bool_t);
	static obj_t BGl_z62jvmzd2codezd2setz12z70zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2namezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typedzd2eqzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2functionszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2typedzd2funcallz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2inlinezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2qualifiedzd2typesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2lightzd2funcallszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typezd2checkzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t BGl_z62jvmzd2classeszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2currentzd2classz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2boundzd2checkz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL BgL_jvmz00_bglt
		BGl_makezd2jvmzd2zzbackend_jvm_classz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t,
		bool_t, bool_t, bool_t, bool_t, obj_t, obj_t, bool_t, bool_t, bool_t, obj_t,
		obj_t, bool_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2functionszb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2heapzd2compatiblezd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_jvm_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2srfi0zd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typeszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2requirezd2tailcz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2languagezd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2methodszb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2codezb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2declarationszb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2debugzd2supportzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_z62jvmzd2typezd2checkz62zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2currentzd2methodzd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_jvm_classz00();
	static obj_t BGl_z62jvmzd2namezd2setz12z70zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typedzd2funcallzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t BGl_z62jvmzd2qnamezd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2debugzd2supportz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_jvm_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2typesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2codezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62jvmzd2functionszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2heapzd2suffixz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t
		BGl_z62jvmzd2lightzd2funcallszd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2effectzb2zd2setz12za0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t
		BGl_z62jvmzd2debugzd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2currentzd2methodz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2languagezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2pregisterszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62lambda1423z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1424z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2tvectorzd2descrzd2supportzb0zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2typedzd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2currentzd2classzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_jvm_classz00();
	static obj_t
		BGl_z62jvmzd2foreignzd2closurezd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2typedzd2funcallzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2foreignzd2clausezd2supportzd2zzbackend_jvm_classz00
		(BgL_jvmz00_bglt);
	static obj_t BGl_z62lambda1450z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1451z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_jvm_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, bool_t);
	static obj_t BGl_z62jvmzd2externzd2variablesz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62jvmzd2currentzd2methodzd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2callcczd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, bool_t);
	extern obj_t BGl_bvmz00zzbackend_bvmz00;
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2variableszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	static BgL_jvmz00_bglt BGl_z62jvmzd2nilzb0zzbackend_jvm_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2typeszd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2languagezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2variablesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2srfi0zb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2heapzd2compatiblezd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2pragmazd2supportz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2methodszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2externzd2functionszd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classeszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_jvmzf3zf3zzbackend_jvm_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2fieldszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62jvmzd2registerszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2srfi0zd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t
		BGl_z62jvmzd2externzd2typeszd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62jvmzd2currentzd2classzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2srfi0zd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2typedzd2eqz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2externzd2functionsz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, obj_t);
	static obj_t
		BGl_z62jvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_jvm_classz00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2typeszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2functionszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00 =
		BUNSPEC;
	static obj_t BGl_z62jvmzd2foreignzd2closurez62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2tracezd2supportz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2debugzd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2currentzd2methodz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2registerszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2declarationszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2externzd2functionsz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2languagezb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2qnamezb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2inlinezd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_jvm_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2boundzd2checkz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t
		BGl_z62jvmzd2heapzd2suffixzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62jvmzd2boundzd2checkzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classeszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2tracezd2supportzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t BGl_genericzd2initzd2zzbackend_jvm_classz00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2heapzd2suffixzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2boundzd2checkzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t BGl_z62jvmzd2typedzb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2qnamezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2typeszb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2pragmazd2supportzd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, bool_t);
	static obj_t BGl_z62jvmzd2pregisterszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2effectzb2z60zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2foreignzd2closurez00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2variableszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL BgL_jvmz00_bglt BGl_jvmzd2nilzd2zzbackend_jvm_classz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2typedzd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2pragmazd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_jvmz00zzbackend_jvm_classz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typeszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2codezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62jvmzd2variableszd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2typedzd2eqzd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2classeszb0zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2registerszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2requirezd2tailczd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		bool_t);
	static obj_t BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62jvmzd2typedzd2funcallz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2typedzd2eqz62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2pregisterszb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t
		BGl_z62jvmzd2tracezd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2pregisterszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2typezd2checkz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62jvmzd2currentzd2classz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	static BgL_jvmz00_bglt BGl_z62lambda1305z62zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_jvmz00_bglt BGl_z62lambda1308z62zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_jvm_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2functionszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2effectzb2z02zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_jvm_classz00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2lightzd2funcallsz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1316z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1317z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2declarationszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static obj_t BGl_z62lambda1326z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1327z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2requirezd2tailcz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2heapzd2suffixz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2qnamezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62lambda1335z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1336z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2heapzd2compatiblez62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1345z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1346z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_jvm_classz00();
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2inlinezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2tracezd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00();
	static obj_t
		BGl_z62jvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00();
	static obj_t BGl_z62lambda1358z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1359z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmzd2registerszb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62jvmzd2externzd2typesz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62jvmzd2declarationszd2setz12z70zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2namezb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2externzd2variableszd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2methodszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt, bool_t);
	static obj_t BGl_z62lambda1368z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1369z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2requirezd2tailczd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jvmzd2inlinezb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2pragmazd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2namezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, obj_t);
	static obj_t BGl_z62jvmzd2removezd2emptyzd2letzb0zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2fieldszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62lambda1383z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1384z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2tvectorzd2descrzd2supportzd2zzbackend_jvm_classz00
		(BgL_jvmz00_bglt);
	static obj_t
		BGl_z62jvmzd2foreignzd2clausezd2supportzb0zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2variableszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt,
		obj_t);
	static obj_t BGl_z62jvmzd2effectzb2zd2setz12zc2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1395z62zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1396z62zzbackend_jvm_classz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62jvmzd2qualifiedzd2typeszd2setz12za2zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2removezd2emptyzd2letzd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2callcczd2setz12z70zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmzd2fieldszb0zzbackend_jvm_classz00(obj_t, obj_t);
	static BgL_jvmz00_bglt BGl_z62makezd2jvmzb0zzbackend_jvm_classz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2typedzd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt, bool_t);
	static obj_t BGl_z62jvmzd2qualifiedzd2typesz62zzbackend_jvm_classz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2heapzd2compatiblez00zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t
		BGl_z62jvmzd2typezd2checkzd2setz12za2zzbackend_jvm_classz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_jvm_classz00(obj_t);
	static obj_t BGl_z62jvmzf3z91zzbackend_jvm_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmzd2callcczd2zzbackend_jvm_classz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmzd2variableszb0zzbackend_jvm_classz00(obj_t, obj_t);
	static obj_t __cnst[15];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2foreignzd2closurezd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2foreign1520z00,
		BGl_z62jvmzd2foreignzd2closurezd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2foreignzd2closurezd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2foreign1521z00,
		BGl_z62jvmzd2foreignzd2closurez62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typedzd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7d1522za7,
		BGl_z62jvmzd2typedzd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jvmzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762makeza7d2jvmza7b01523za7,
		BGl_z62makezd2jvmzb0zzbackend_jvm_classz00, 0L, BUNSPEC, 39);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classeszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2classes1524z00,
		BGl_z62jvmzd2classeszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2codezd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2codeza7b01525za7,
		BGl_z62jvmzd2codezb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2declarationszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2declara1526z00,
		BGl_z62jvmzd2declarationszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2srfi0zd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2srfi0za7d1527za7,
		BGl_z62jvmzd2srfi0zd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2typeszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typesza7b1528za7,
		BGl_z62jvmzd2typeszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2codezd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2codeza7d21529za7,
		BGl_z62jvmzd2codezd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2foreign1530z00,
		BGl_z62jvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_jvm_classz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2registerszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2registe1531z00,
		BGl_z62jvmzd2registerszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2typedzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7b1532za7,
		BGl_z62jvmzd2typedzb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typeszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typesza7d1533za7,
		BGl_z62jvmzd2typeszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1499z00zzbackend_jvm_classz00,
		BgL_bgl_string1499za700za7za7b1534za7, "", 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2namezd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2nameza7b01535za7,
		BGl_z62jvmzd2namezb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typedzd2eqzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7d1536za7,
		BGl_z62jvmzd2typedzd2eqz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2callcczd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2callccza71537za7,
		BGl_z62jvmzd2callcczb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2variableszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2variabl1538z00,
		BGl_z62jvmzd2variableszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2declarationszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2declara1539z00,
		BGl_z62jvmzd2declarationszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2effectzb2zd2envzb2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2effectza71540za7,
		BGl_z62jvmzd2effectzb2z02zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2callcczd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2callccza71541za7,
		BGl_z62jvmzd2callcczd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2variableszd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71542za7,
		BGl_z62jvmzd2externzd2variablesz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typedzd2eqzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7d1543za7,
		BGl_z62jvmzd2typedzd2eqzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2variableszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2variabl1544z00,
		BGl_z62jvmzd2variableszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2heapzd2suffixzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2heapza7d21545za7,
		BGl_z62jvmzd2heapzd2suffixzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2foreignzd2clausezd2supportzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2foreign1546z00,
		BGl_z62jvmzd2foreignzd2clausezd2supportzb0zzbackend_jvm_classz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2methodszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2methods1547z00,
		BGl_z62jvmzd2methodszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2functionszd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71548za7,
		BGl_z62jvmzd2externzd2functionsz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2languagezd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2languag1549z00,
		BGl_z62jvmzd2languagezd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2heapzd2suffixzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2heapza7d21550za7,
		BGl_z62jvmzd2heapzd2suffixz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2fieldszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2fieldsza71551za7,
		BGl_z62jvmzd2fieldszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2functionszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2functio1552z00,
		BGl_z62jvmzd2functionszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typedzd2funcallzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7d1553za7,
		BGl_z62jvmzd2typedzd2funcallzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2currentzd2classzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2current1554z00,
		BGl_z62jvmzd2currentzd2classzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2pragmazd2supportzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2pragmaza71555za7,
		BGl_z62jvmzd2pragmazd2supportzd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2tracezd2supportzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2traceza7d1556za7,
		BGl_z62jvmzd2tracezd2supportz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2functionszd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71557za7,
		BGl_z62jvmzd2externzd2functionszd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2heapzd2compatiblezd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2heapza7d21558za7,
		BGl_z62jvmzd2heapzd2compatiblezd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2boundzd2checkzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2boundza7d1559za7,
		BGl_z62jvmzd2boundzd2checkzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2tvector1560z00,
		BGl_z62jvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_jvm_classz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2qualifiedzd2typeszd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2qualifi1561z00,
		BGl_z62jvmzd2qualifiedzd2typesz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1500z00zzbackend_jvm_classz00,
		BgL_bgl_string1500za700za7za7b1562za7, "backend_jvm_class", 17);
	      DEFINE_STRING(BGl_string1501z00zzbackend_jvm_classz00,
		BgL_bgl_string1501za700za7za7b1563za7,
		"unamed _ backend_jvm_class jvm inline light-funcalls code current-method methods fields declarations current-class classes obj qname ",
		133);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2effectzb2zd2setz12zd2envz72zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2effectza71564za7,
		BGl_z62jvmzd2effectzb2zd2setz12zc2zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2currentzd2classzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2current1565z00,
		BGl_z62jvmzd2currentzd2classz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classeszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2classes1566z00,
		BGl_z62jvmzd2classeszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2lightzd2funcallszd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2lightza7d1567za7,
		BGl_z62jvmzd2lightzd2funcallszd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typezd2checkzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typeza7d21568za7,
		BGl_z62jvmzd2typezd2checkzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1466z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1569za7,
		BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1467z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1317za7621570z00,
		BGl_z62lambda1317z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1468z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1316za7621571z00,
		BGl_z62lambda1316z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1469z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1572za7,
		BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1470z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1327za7621573z00,
		BGl_z62lambda1327z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1471z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1326za7621574z00,
		BGl_z62lambda1326z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1472z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1575za7,
		BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1473z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1336za7621576z00,
		BGl_z62lambda1336z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1474z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1335za7621577z00,
		BGl_z62lambda1335z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1475z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1578za7,
		BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1476z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1346za7621579z00,
		BGl_z62lambda1346z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1477z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1345za7621580z00,
		BGl_z62lambda1345z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1478z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1581za7,
		BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1479z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1359za7621582z00,
		BGl_z62lambda1359z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typedzd2funcallzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typedza7d1583za7,
		BGl_z62jvmzd2typedzd2funcallz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1480z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1358za7621584z00,
		BGl_z62lambda1358z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1481z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1585za7,
		BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1482z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1369za7621586z00,
		BGl_z62lambda1369z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1483z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1368za7621587z00,
		BGl_z62lambda1368z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1484z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1588za7,
		BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1485z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1384za7621589z00,
		BGl_z62lambda1384z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1486z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1383za7621590z00,
		BGl_z62lambda1383z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1487z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1591za7,
		BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1488z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1396za7621592z00,
		BGl_z62lambda1396z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1489z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1395za7621593z00,
		BGl_z62lambda1395z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2fieldszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2fieldsza71594za7,
		BGl_z62jvmzd2fieldszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2typeszd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71595za7,
		BGl_z62jvmzd2externzd2typeszd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2requirezd2tailczd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2require1596z00,
		BGl_z62jvmzd2requirezd2tailcz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1490z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1597za7,
		BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1491z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1424za7621598z00,
		BGl_z62lambda1424z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1492z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1423za7621599z00,
		BGl_z62lambda1423z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1493z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1600za7,
		BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1494z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1451za7621601z00,
		BGl_z62lambda1451z62zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2qnamezd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2qnameza7d1602za7,
		BGl_z62jvmzd2qnamezd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1495z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1450za7621603z00,
		BGl_z62lambda1450z62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2typezd2checkzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2typeza7d21604za7,
		BGl_z62jvmzd2typezd2checkz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1496z00zzbackend_jvm_classz00,
		BgL_bgl_za762za7c3za704anonymo1605za7,
		BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1497z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1308za7621606z00,
		BGl_z62lambda1308z62zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1498z00zzbackend_jvm_classz00,
		BgL_bgl_za762lambda1305za7621607z00,
		BGl_z62lambda1305z62zzbackend_jvm_classz00, 0L, BUNSPEC, 39);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2namezd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2nameza7d21608za7,
		BGl_z62jvmzd2namezd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2qualifi1609z00,
		BGl_z62jvmzd2qualifiedzd2typeszd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2languagezd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2languag1610z00,
		BGl_z62jvmzd2languagezb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2debugzd2supportzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2debugza7d1611za7,
		BGl_z62jvmzd2debugzd2supportz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2currentzd2methodzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2current1612z00,
		BGl_z62jvmzd2currentzd2methodz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzf3zd2envz21zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7f3za791za7za7ba1613za7,
		BGl_z62jvmzf3z91zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2inlinezd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2inlineza71614za7,
		BGl_z62jvmzd2inlinezd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2heapzd2compatiblezd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2heapza7d21615za7,
		BGl_z62jvmzd2heapzd2compatiblez62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	extern obj_t BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2removezd2emptyzd2letzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2removeza71616za7,
		BGl_z62jvmzd2removezd2emptyzd2letzb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2functionszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2functio1617z00,
		BGl_z62jvmzd2functionszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2qnamezd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2qnameza7b1618za7,
		BGl_z62jvmzd2qnamezb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2methodszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2methods1619z00,
		BGl_z62jvmzd2methodszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2srfi0zd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2srfi0za7b1620za7,
		BGl_z62jvmzd2srfi0zb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2typeszd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71621za7,
		BGl_z62jvmzd2externzd2typesz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2boundzd2checkzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2boundza7d1622za7,
		BGl_z62jvmzd2boundzd2checkz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2requirezd2tailczd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2require1623z00,
		BGl_z62jvmzd2requirezd2tailczd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2tracezd2supportzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2traceza7d1624za7,
		BGl_z62jvmzd2tracezd2supportzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2inlinezd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2inlineza71625za7,
		BGl_z62jvmzd2inlinezb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2removeza71626za7,
		BGl_z62jvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2externzd2variableszd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2externza71627za7,
		BGl_z62jvmzd2externzd2variableszd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2pragmazd2supportzd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2pragmaza71628za7,
		BGl_z62jvmzd2pragmazd2supportz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2lightzd2funcallszd2envzd2zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2lightza7d1629za7,
		BGl_z62jvmzd2lightzd2funcallsz62zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2pregisterszd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2pregist1630z00,
		BGl_z62jvmzd2pregisterszb0zzbackend_jvm_classz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2registerszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2registe1631z00,
		BGl_z62jvmzd2registerszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2tvectorzd2descrzd2supportzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2tvector1632z00,
		BGl_z62jvmzd2tvectorzd2descrzd2supportzb0zzbackend_jvm_classz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2debugzd2supportzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2debugza7d1633za7,
		BGl_z62jvmzd2debugzd2supportzd2setz12za2zzbackend_jvm_classz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2currentzd2methodzd2setz12zd2envz12zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2current1634z00,
		BGl_z62jvmzd2currentzd2methodzd2setz12za2zzbackend_jvm_classz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmzd2nilzd2envz00zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2nilza7b0za71635z00,
		BGl_z62jvmzd2nilzb0zzbackend_jvm_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2pregisterszd2setz12zd2envzc0zzbackend_jvm_classz00,
		BgL_bgl_za762jvmza7d2pregist1636z00,
		BGl_z62jvmzd2pregisterszd2setz12z70zzbackend_jvm_classz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00));
		     ADD_ROOT((void *) (&BGl_jvmz00zzbackend_jvm_classz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long
		BgL_checksumz00_1349, char *BgL_fromz00_1350)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_jvm_classz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_jvm_classz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00();
					BGl_cnstzd2initzd2zzbackend_jvm_classz00();
					BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00();
					BGl_objectzd2initzd2zzbackend_jvm_classz00();
					return BGl_toplevelzd2initzd2zzbackend_jvm_classz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_jvm_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_jvm_class");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_jvm_class");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_jvm_class");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"backend_jvm_class");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			{	/* BackEnd/jvm_class.scm 15 */
				obj_t BgL_cportz00_1279;

				{	/* BackEnd/jvm_class.scm 15 */
					obj_t BgL_stringz00_1287;

					BgL_stringz00_1287 = BGl_string1501z00zzbackend_jvm_classz00;
					{	/* BackEnd/jvm_class.scm 15 */
						obj_t BgL_startz00_1288;

						BgL_startz00_1288 = BINT(((long) 0));
						{	/* BackEnd/jvm_class.scm 15 */
							obj_t BgL_endz00_1289;

							BgL_endz00_1289 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1287)));
							{	/* BackEnd/jvm_class.scm 15 */

								BgL_cportz00_1279 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1287, BgL_startz00_1288, BgL_endz00_1289);
				}}}}
				{
					long BgL_iz00_1280;

					BgL_iz00_1280 = ((long) 14);
				BgL_loopz00_1281:
					if ((BgL_iz00_1280 == ((long) -1)))
						{	/* BackEnd/jvm_class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/jvm_class.scm 15 */
							{	/* BackEnd/jvm_class.scm 15 */
								obj_t BgL_arg1518z00_1283;

								{	/* BackEnd/jvm_class.scm 15 */

									{	/* BackEnd/jvm_class.scm 15 */
										obj_t BgL_locationz00_1285;

										BgL_locationz00_1285 = BBOOL(((bool_t) 0));
										{	/* BackEnd/jvm_class.scm 15 */

											BgL_arg1518z00_1283 =
												BGl_readz00zz__readerz00(BgL_cportz00_1279,
												BgL_locationz00_1285);
										}
									}
								}
								{	/* BackEnd/jvm_class.scm 15 */
									int BgL_tmpz00_1374;

									BgL_tmpz00_1374 = (int) (BgL_iz00_1280);
									CNST_TABLE_SET(BgL_tmpz00_1374, BgL_arg1518z00_1283);
							}}
							{	/* BackEnd/jvm_class.scm 15 */
								int BgL_auxz00_1286;

								BgL_auxz00_1286 = (int) ((BgL_iz00_1280 - ((long) 1)));
								{
									long BgL_iz00_1379;

									BgL_iz00_1379 = (long) (BgL_auxz00_1286);
									BgL_iz00_1280 = BgL_iz00_1379;
									goto BgL_loopz00_1281;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			return BUNSPEC;
		}

	}



/* make-jvm */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt BGl_makezd2jvmzd2zzbackend_jvm_classz00(obj_t
		BgL_language1142z00_3, obj_t BgL_srfi01143z00_4, obj_t BgL_name1144z00_5,
		obj_t BgL_externzd2variables1145zd2_6,
		obj_t BgL_externzd2functions1146zd2_7, obj_t BgL_externzd2types1147zd2_8,
		obj_t BgL_variables1148z00_9, obj_t BgL_functions1149z00_10,
		obj_t BgL_types1150z00_11, bool_t BgL_typed1151z00_12,
		obj_t BgL_heapzd2suffix1152zd2_13, obj_t BgL_heapzd2compatible1153zd2_14,
		bool_t BgL_callcc1154z00_15, bool_t BgL_qualifiedzd2types1155zd2_16,
		bool_t BgL_effectzb21156zb2_17, bool_t BgL_removezd2emptyzd2let1157z00_18,
		bool_t BgL_foreignzd2closure1158zd2_19, bool_t BgL_typedzd2eq1159zd2_20,
		bool_t BgL_tracezd2support1160zd2_21,
		obj_t BgL_foreignzd2clausezd2suppo1161z00_22,
		obj_t BgL_debugzd2support1162zd2_23, bool_t BgL_pragmazd2support1163zd2_24,
		bool_t BgL_tvectorzd2descrzd2suppor1164z00_25,
		bool_t BgL_requirezd2tailc1165zd2_26, obj_t BgL_registers1166z00_27,
		obj_t BgL_pregisters1167z00_28, bool_t BgL_boundzd2check1168zd2_29,
		bool_t BgL_typezd2check1169zd2_30, bool_t BgL_typedzd2funcall1170zd2_31,
		obj_t BgL_qname1171z00_32, obj_t BgL_classes1172z00_33,
		obj_t BgL_currentzd2class1173zd2_34, obj_t BgL_declarations1174z00_35,
		obj_t BgL_fields1175z00_36, obj_t BgL_methods1176z00_37,
		obj_t BgL_currentzd2method1177zd2_38, obj_t BgL_code1178z00_39,
		obj_t BgL_lightzd2funcalls1179zd2_40, obj_t BgL_inline1180z00_41)
	{
		{	/* BackEnd/jvm_class.sch 99 */
			{	/* BackEnd/jvm_class.sch 99 */
				BgL_jvmz00_bglt BgL_new1092z00_1292;

				{	/* BackEnd/jvm_class.sch 99 */
					BgL_jvmz00_bglt BgL_new1091z00_1293;

					BgL_new1091z00_1293 =
						((BgL_jvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jvmz00_bgl))));
					{	/* BackEnd/jvm_class.sch 99 */
						long BgL_arg1298z00_1294;

						{	/* BackEnd/jvm_class.sch 99 */
							long BgL_res1462z00_1295;

							BgL_res1462z00_1295 =
								BGL_CLASS_INDEX(BGl_jvmz00zzbackend_jvm_classz00);
							BgL_arg1298z00_1294 = BgL_res1462z00_1295;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1091z00_1293), BgL_arg1298z00_1294);
					}
					BgL_new1092z00_1292 = BgL_new1091z00_1293;
				}
				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1092z00_1292)))->
						BgL_languagez00) = ((obj_t) BgL_language1142z00_3), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_srfi0z00) =
					((obj_t) BgL_srfi01143z00_4), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_namez00) =
					((obj_t) BgL_name1144z00_5), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_externzd2variableszd2) =
					((obj_t) BgL_externzd2variables1145zd2_6), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_externzd2functionszd2) =
					((obj_t) BgL_externzd2functions1146zd2_7), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_externzd2typeszd2) =
					((obj_t) BgL_externzd2types1147zd2_8), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_variablesz00) =
					((obj_t) BgL_variables1148z00_9), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_functionsz00) =
					((obj_t) BgL_functions1149z00_10), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_typesz00) =
					((obj_t) BgL_types1150z00_11), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_typedz00) =
					((bool_t) BgL_typed1151z00_12), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_heapzd2suffixzd2) =
					((obj_t) BgL_heapzd2suffix1152zd2_13), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_heapzd2compatiblezd2) =
					((obj_t) BgL_heapzd2compatible1153zd2_14), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_callccz00) =
					((bool_t) BgL_callcc1154z00_15), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) BgL_qualifiedzd2types1155zd2_16), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_effectzb2zb2) =
					((bool_t) BgL_effectzb21156zb2_17), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) BgL_removezd2emptyzd2let1157z00_18), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_foreignzd2closurezd2) =
					((bool_t) BgL_foreignzd2closure1158zd2_19), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_typedzd2eq1159zd2_20), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_tracezd2supportzd2) =
					((bool_t) BgL_tracezd2support1160zd2_21), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BgL_foreignzd2clausezd2suppo1161z00_22), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_debugzd2supportzd2) =
					((obj_t) BgL_debugzd2support1162zd2_23), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_pragmazd2supportzd2) =
					((bool_t) BgL_pragmazd2support1163zd2_24), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_tvectorzd2descrzd2suppor1164z00_25), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_requirezd2tailczd2) =
					((bool_t) BgL_requirezd2tailc1165zd2_26), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_registersz00) =
					((obj_t) BgL_registers1166z00_27), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_pregistersz00) =
					((obj_t) BgL_pregisters1167z00_28), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_boundzd2check1168zd2_29), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_typezd2checkzd2) =
					((bool_t) BgL_typezd2check1169zd2_30), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1092z00_1292)))->BgL_typedzd2funcallzd2) =
					((bool_t) BgL_typedzd2funcall1170zd2_31), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_qnamez00) =
					((obj_t) BgL_qname1171z00_32), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_classesz00) =
					((obj_t) BgL_classes1172z00_33), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->
						BgL_currentzd2classzd2) =
					((obj_t) BgL_currentzd2class1173zd2_34), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->
						BgL_declarationsz00) =
					((obj_t) BgL_declarations1174z00_35), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_fieldsz00) =
					((obj_t) BgL_fields1175z00_36), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_methodsz00) =
					((obj_t) BgL_methods1176z00_37), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->
						BgL_currentzd2methodzd2) =
					((obj_t) BgL_currentzd2method1177zd2_38), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_codez00) =
					((obj_t) BgL_code1178z00_39), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->
						BgL_lightzd2funcallszd2) =
					((obj_t) BgL_lightzd2funcalls1179zd2_40), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(BgL_new1092z00_1292))->BgL_inlinez00) =
					((obj_t) BgL_inline1180z00_41), BUNSPEC);
				{	/* BackEnd/jvm_class.sch 99 */
					obj_t BgL_fun1297z00_1296;

					BgL_fun1297z00_1296 =
						BGl_classzd2constructorzd2zz__objectz00
						(BGl_jvmz00zzbackend_jvm_classz00);
					PROCEDURE_ENTRY(BgL_fun1297z00_1296) (BgL_fun1297z00_1296,
						((obj_t) BgL_new1092z00_1292), BEOA);
				}
				return BgL_new1092z00_1292;
			}
		}

	}



/* &make-jvm */
	BgL_jvmz00_bglt BGl_z62makezd2jvmzb0zzbackend_jvm_classz00(obj_t
		BgL_envz00_903, obj_t BgL_language1142z00_904, obj_t BgL_srfi01143z00_905,
		obj_t BgL_name1144z00_906, obj_t BgL_externzd2variables1145zd2_907,
		obj_t BgL_externzd2functions1146zd2_908,
		obj_t BgL_externzd2types1147zd2_909, obj_t BgL_variables1148z00_910,
		obj_t BgL_functions1149z00_911, obj_t BgL_types1150z00_912,
		obj_t BgL_typed1151z00_913, obj_t BgL_heapzd2suffix1152zd2_914,
		obj_t BgL_heapzd2compatible1153zd2_915, obj_t BgL_callcc1154z00_916,
		obj_t BgL_qualifiedzd2types1155zd2_917, obj_t BgL_effectzb21156zb2_918,
		obj_t BgL_removezd2emptyzd2let1157z00_919,
		obj_t BgL_foreignzd2closure1158zd2_920, obj_t BgL_typedzd2eq1159zd2_921,
		obj_t BgL_tracezd2support1160zd2_922,
		obj_t BgL_foreignzd2clausezd2suppo1161z00_923,
		obj_t BgL_debugzd2support1162zd2_924, obj_t BgL_pragmazd2support1163zd2_925,
		obj_t BgL_tvectorzd2descrzd2suppor1164z00_926,
		obj_t BgL_requirezd2tailc1165zd2_927, obj_t BgL_registers1166z00_928,
		obj_t BgL_pregisters1167z00_929, obj_t BgL_boundzd2check1168zd2_930,
		obj_t BgL_typezd2check1169zd2_931, obj_t BgL_typedzd2funcall1170zd2_932,
		obj_t BgL_qname1171z00_933, obj_t BgL_classes1172z00_934,
		obj_t BgL_currentzd2class1173zd2_935, obj_t BgL_declarations1174z00_936,
		obj_t BgL_fields1175z00_937, obj_t BgL_methods1176z00_938,
		obj_t BgL_currentzd2method1177zd2_939, obj_t BgL_code1178z00_940,
		obj_t BgL_lightzd2funcalls1179zd2_941, obj_t BgL_inline1180z00_942)
	{
		{	/* BackEnd/jvm_class.sch 99 */
			return
				BGl_makezd2jvmzd2zzbackend_jvm_classz00(BgL_language1142z00_904,
				BgL_srfi01143z00_905, BgL_name1144z00_906,
				BgL_externzd2variables1145zd2_907, BgL_externzd2functions1146zd2_908,
				BgL_externzd2types1147zd2_909, BgL_variables1148z00_910,
				BgL_functions1149z00_911, BgL_types1150z00_912,
				CBOOL(BgL_typed1151z00_913), BgL_heapzd2suffix1152zd2_914,
				BgL_heapzd2compatible1153zd2_915, CBOOL(BgL_callcc1154z00_916),
				CBOOL(BgL_qualifiedzd2types1155zd2_917),
				CBOOL(BgL_effectzb21156zb2_918),
				CBOOL(BgL_removezd2emptyzd2let1157z00_919),
				CBOOL(BgL_foreignzd2closure1158zd2_920),
				CBOOL(BgL_typedzd2eq1159zd2_921), CBOOL(BgL_tracezd2support1160zd2_922),
				BgL_foreignzd2clausezd2suppo1161z00_923, BgL_debugzd2support1162zd2_924,
				CBOOL(BgL_pragmazd2support1163zd2_925),
				CBOOL(BgL_tvectorzd2descrzd2suppor1164z00_926),
				CBOOL(BgL_requirezd2tailc1165zd2_927), BgL_registers1166z00_928,
				BgL_pregisters1167z00_929, CBOOL(BgL_boundzd2check1168zd2_930),
				CBOOL(BgL_typezd2check1169zd2_931),
				CBOOL(BgL_typedzd2funcall1170zd2_932), BgL_qname1171z00_933,
				BgL_classes1172z00_934, BgL_currentzd2class1173zd2_935,
				BgL_declarations1174z00_936, BgL_fields1175z00_937,
				BgL_methods1176z00_938, BgL_currentzd2method1177zd2_939,
				BgL_code1178z00_940, BgL_lightzd2funcalls1179zd2_941,
				BgL_inline1180z00_942);
		}

	}



/* jvm? */
	BGL_EXPORTED_DEF bool_t BGl_jvmzf3zf3zzbackend_jvm_classz00(obj_t
		BgL_objz00_42)
	{
		{	/* BackEnd/jvm_class.sch 100 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_42,
				BGl_jvmz00zzbackend_jvm_classz00);
		}

	}



/* &jvm? */
	obj_t BGl_z62jvmzf3z91zzbackend_jvm_classz00(obj_t BgL_envz00_943,
		obj_t BgL_objz00_944)
	{
		{	/* BackEnd/jvm_class.sch 100 */
			return BBOOL(BGl_jvmzf3zf3zzbackend_jvm_classz00(BgL_objz00_944));
		}

	}



/* jvm-nil */
	BGL_EXPORTED_DEF BgL_jvmz00_bglt BGl_jvmzd2nilzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.sch 101 */
			{	/* BackEnd/jvm_class.sch 101 */
				obj_t BgL_classz00_801;

				BgL_classz00_801 = BGl_jvmz00zzbackend_jvm_classz00;
				{	/* BackEnd/jvm_class.sch 101 */
					obj_t BgL__ortest_1106z00_802;

					BgL__ortest_1106z00_802 = BGL_CLASS_NIL(BgL_classz00_801);
					if (CBOOL(BgL__ortest_1106z00_802))
						{	/* BackEnd/jvm_class.sch 101 */
							return ((BgL_jvmz00_bglt) BgL__ortest_1106z00_802);
						}
					else
						{	/* BackEnd/jvm_class.sch 101 */
							return
								((BgL_jvmz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_801));
						}
				}
			}
		}

	}



/* &jvm-nil */
	BgL_jvmz00_bglt BGl_z62jvmzd2nilzb0zzbackend_jvm_classz00(obj_t
		BgL_envz00_945)
	{
		{	/* BackEnd/jvm_class.sch 101 */
			return BGl_jvmzd2nilzd2zzbackend_jvm_classz00();
		}

	}



/* jvm-inline */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2inlinezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_43)
	{
		{	/* BackEnd/jvm_class.sch 102 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_43))->BgL_inlinez00);
		}

	}



/* &jvm-inline */
	obj_t BGl_z62jvmzd2inlinezb0zzbackend_jvm_classz00(obj_t BgL_envz00_946,
		obj_t BgL_oz00_947)
	{
		{	/* BackEnd/jvm_class.sch 102 */
			return
				BGl_jvmzd2inlinezd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_947));
		}

	}



/* jvm-inline-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2inlinezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_44, obj_t BgL_vz00_45)
	{
		{	/* BackEnd/jvm_class.sch 103 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_44))->BgL_inlinez00) =
				((obj_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &jvm-inline-set! */
	obj_t BGl_z62jvmzd2inlinezd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_948, obj_t BgL_oz00_949, obj_t BgL_vz00_950)
	{
		{	/* BackEnd/jvm_class.sch 103 */
			return
				BGl_jvmzd2inlinezd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_949), BgL_vz00_950);
		}

	}



/* jvm-light-funcalls */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2lightzd2funcallsz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_46)
	{
		{	/* BackEnd/jvm_class.sch 104 */
			return
				(((BgL_jvmz00_bglt) COBJECT(BgL_oz00_46))->BgL_lightzd2funcallszd2);
		}

	}



/* &jvm-light-funcalls */
	obj_t BGl_z62jvmzd2lightzd2funcallsz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_951, obj_t BgL_oz00_952)
	{
		{	/* BackEnd/jvm_class.sch 104 */
			return
				BGl_jvmzd2lightzd2funcallsz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_952));
		}

	}



/* jvm-light-funcalls-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2lightzd2funcallszd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* BackEnd/jvm_class.sch 105 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_47))->BgL_lightzd2funcallszd2) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &jvm-light-funcalls-set! */
	obj_t BGl_z62jvmzd2lightzd2funcallszd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_953, obj_t BgL_oz00_954, obj_t BgL_vz00_955)
	{
		{	/* BackEnd/jvm_class.sch 105 */
			return
				BGl_jvmzd2lightzd2funcallszd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_954), BgL_vz00_955);
		}

	}



/* jvm-code */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2codezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_49)
	{
		{	/* BackEnd/jvm_class.sch 106 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_49))->BgL_codez00);
		}

	}



/* &jvm-code */
	obj_t BGl_z62jvmzd2codezb0zzbackend_jvm_classz00(obj_t BgL_envz00_956,
		obj_t BgL_oz00_957)
	{
		{	/* BackEnd/jvm_class.sch 106 */
			return
				BGl_jvmzd2codezd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_957));
		}

	}



/* jvm-code-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2codezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_50, obj_t BgL_vz00_51)
	{
		{	/* BackEnd/jvm_class.sch 107 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_50))->BgL_codez00) =
				((obj_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &jvm-code-set! */
	obj_t BGl_z62jvmzd2codezd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_958, obj_t BgL_oz00_959, obj_t BgL_vz00_960)
	{
		{	/* BackEnd/jvm_class.sch 107 */
			return
				BGl_jvmzd2codezd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_959), BgL_vz00_960);
		}

	}



/* jvm-current-method */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2currentzd2methodz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_52)
	{
		{	/* BackEnd/jvm_class.sch 108 */
			return
				(((BgL_jvmz00_bglt) COBJECT(BgL_oz00_52))->BgL_currentzd2methodzd2);
		}

	}



/* &jvm-current-method */
	obj_t BGl_z62jvmzd2currentzd2methodz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_961, obj_t BgL_oz00_962)
	{
		{	/* BackEnd/jvm_class.sch 108 */
			return
				BGl_jvmzd2currentzd2methodz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_962));
		}

	}



/* jvm-current-method-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2currentzd2methodzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_53, obj_t BgL_vz00_54)
	{
		{	/* BackEnd/jvm_class.sch 109 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_53))->BgL_currentzd2methodzd2) =
				((obj_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &jvm-current-method-set! */
	obj_t BGl_z62jvmzd2currentzd2methodzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_963, obj_t BgL_oz00_964, obj_t BgL_vz00_965)
	{
		{	/* BackEnd/jvm_class.sch 109 */
			return
				BGl_jvmzd2currentzd2methodzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_964), BgL_vz00_965);
		}

	}



/* jvm-methods */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2methodszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_55)
	{
		{	/* BackEnd/jvm_class.sch 110 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_55))->BgL_methodsz00);
		}

	}



/* &jvm-methods */
	obj_t BGl_z62jvmzd2methodszb0zzbackend_jvm_classz00(obj_t BgL_envz00_966,
		obj_t BgL_oz00_967)
	{
		{	/* BackEnd/jvm_class.sch 110 */
			return
				BGl_jvmzd2methodszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_967));
		}

	}



/* jvm-methods-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2methodszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* BackEnd/jvm_class.sch 111 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_56))->BgL_methodsz00) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &jvm-methods-set! */
	obj_t BGl_z62jvmzd2methodszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_968, obj_t BgL_oz00_969, obj_t BgL_vz00_970)
	{
		{	/* BackEnd/jvm_class.sch 111 */
			return
				BGl_jvmzd2methodszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_969), BgL_vz00_970);
		}

	}



/* jvm-fields */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2fieldszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_58)
	{
		{	/* BackEnd/jvm_class.sch 112 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_58))->BgL_fieldsz00);
		}

	}



/* &jvm-fields */
	obj_t BGl_z62jvmzd2fieldszb0zzbackend_jvm_classz00(obj_t BgL_envz00_971,
		obj_t BgL_oz00_972)
	{
		{	/* BackEnd/jvm_class.sch 112 */
			return
				BGl_jvmzd2fieldszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_972));
		}

	}



/* jvm-fields-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2fieldszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* BackEnd/jvm_class.sch 113 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_59))->BgL_fieldsz00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &jvm-fields-set! */
	obj_t BGl_z62jvmzd2fieldszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_973, obj_t BgL_oz00_974, obj_t BgL_vz00_975)
	{
		{	/* BackEnd/jvm_class.sch 113 */
			return
				BGl_jvmzd2fieldszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_974), BgL_vz00_975);
		}

	}



/* jvm-declarations */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2declarationszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_61)
	{
		{	/* BackEnd/jvm_class.sch 114 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_61))->BgL_declarationsz00);
		}

	}



/* &jvm-declarations */
	obj_t BGl_z62jvmzd2declarationszb0zzbackend_jvm_classz00(obj_t BgL_envz00_976,
		obj_t BgL_oz00_977)
	{
		{	/* BackEnd/jvm_class.sch 114 */
			return
				BGl_jvmzd2declarationszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_977));
		}

	}



/* jvm-declarations-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2declarationszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_62, obj_t BgL_vz00_63)
	{
		{	/* BackEnd/jvm_class.sch 115 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_62))->BgL_declarationsz00) =
				((obj_t) BgL_vz00_63), BUNSPEC);
		}

	}



/* &jvm-declarations-set! */
	obj_t BGl_z62jvmzd2declarationszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_978, obj_t BgL_oz00_979, obj_t BgL_vz00_980)
	{
		{	/* BackEnd/jvm_class.sch 115 */
			return
				BGl_jvmzd2declarationszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_979), BgL_vz00_980);
		}

	}



/* jvm-current-class */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2currentzd2classz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_64)
	{
		{	/* BackEnd/jvm_class.sch 116 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_64))->BgL_currentzd2classzd2);
		}

	}



/* &jvm-current-class */
	obj_t BGl_z62jvmzd2currentzd2classz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_981, obj_t BgL_oz00_982)
	{
		{	/* BackEnd/jvm_class.sch 116 */
			return
				BGl_jvmzd2currentzd2classz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_982));
		}

	}



/* jvm-current-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2currentzd2classzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_65, obj_t BgL_vz00_66)
	{
		{	/* BackEnd/jvm_class.sch 117 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_65))->BgL_currentzd2classzd2) =
				((obj_t) BgL_vz00_66), BUNSPEC);
		}

	}



/* &jvm-current-class-set! */
	obj_t BGl_z62jvmzd2currentzd2classzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_983, obj_t BgL_oz00_984, obj_t BgL_vz00_985)
	{
		{	/* BackEnd/jvm_class.sch 117 */
			return
				BGl_jvmzd2currentzd2classzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_984), BgL_vz00_985);
		}

	}



/* jvm-classes */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classeszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_67)
	{
		{	/* BackEnd/jvm_class.sch 118 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_67))->BgL_classesz00);
		}

	}



/* &jvm-classes */
	obj_t BGl_z62jvmzd2classeszb0zzbackend_jvm_classz00(obj_t BgL_envz00_986,
		obj_t BgL_oz00_987)
	{
		{	/* BackEnd/jvm_class.sch 118 */
			return
				BGl_jvmzd2classeszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_987));
		}

	}



/* jvm-classes-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classeszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_68, obj_t BgL_vz00_69)
	{
		{	/* BackEnd/jvm_class.sch 119 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_68))->BgL_classesz00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &jvm-classes-set! */
	obj_t BGl_z62jvmzd2classeszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_988, obj_t BgL_oz00_989, obj_t BgL_vz00_990)
	{
		{	/* BackEnd/jvm_class.sch 119 */
			return
				BGl_jvmzd2classeszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_989), BgL_vz00_990);
		}

	}



/* jvm-qname */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2qnamezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_70)
	{
		{	/* BackEnd/jvm_class.sch 120 */
			return (((BgL_jvmz00_bglt) COBJECT(BgL_oz00_70))->BgL_qnamez00);
		}

	}



/* &jvm-qname */
	obj_t BGl_z62jvmzd2qnamezb0zzbackend_jvm_classz00(obj_t BgL_envz00_991,
		obj_t BgL_oz00_992)
	{
		{	/* BackEnd/jvm_class.sch 120 */
			return
				BGl_jvmzd2qnamezd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_992));
		}

	}



/* jvm-qname-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2qnamezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_71, obj_t BgL_vz00_72)
	{
		{	/* BackEnd/jvm_class.sch 121 */
			return
				((((BgL_jvmz00_bglt) COBJECT(BgL_oz00_71))->BgL_qnamez00) =
				((obj_t) BgL_vz00_72), BUNSPEC);
		}

	}



/* &jvm-qname-set! */
	obj_t BGl_z62jvmzd2qnamezd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_993, obj_t BgL_oz00_994, obj_t BgL_vz00_995)
	{
		{	/* BackEnd/jvm_class.sch 121 */
			return
				BGl_jvmzd2qnamezd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_994), BgL_vz00_995);
		}

	}



/* jvm-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2typedzd2funcallz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_73)
	{
		{	/* BackEnd/jvm_class.sch 122 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_73)))->BgL_typedzd2funcallzd2);
		}

	}



/* &jvm-typed-funcall */
	obj_t BGl_z62jvmzd2typedzd2funcallz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_996, obj_t BgL_oz00_997)
	{
		{	/* BackEnd/jvm_class.sch 122 */
			return
				BBOOL(BGl_jvmzd2typedzd2funcallz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_997)));
		}

	}



/* jvm-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typedzd2funcallzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_74, bool_t BgL_vz00_75)
	{
		{	/* BackEnd/jvm_class.sch 123 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_74)))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_75), BUNSPEC);
		}

	}



/* &jvm-typed-funcall-set! */
	obj_t BGl_z62jvmzd2typedzd2funcallzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_998, obj_t BgL_oz00_999, obj_t BgL_vz00_1000)
	{
		{	/* BackEnd/jvm_class.sch 123 */
			return
				BGl_jvmzd2typedzd2funcallzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_999), CBOOL(BgL_vz00_1000));
		}

	}



/* jvm-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2typezd2checkz00zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_76)
	{
		{	/* BackEnd/jvm_class.sch 124 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_76)))->BgL_typezd2checkzd2);
		}

	}



/* &jvm-type-check */
	obj_t BGl_z62jvmzd2typezd2checkz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1001, obj_t BgL_oz00_1002)
	{
		{	/* BackEnd/jvm_class.sch 124 */
			return
				BBOOL(BGl_jvmzd2typezd2checkz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1002)));
		}

	}



/* jvm-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typezd2checkzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_77, bool_t BgL_vz00_78)
	{
		{	/* BackEnd/jvm_class.sch 125 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_77)))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &jvm-type-check-set! */
	obj_t BGl_z62jvmzd2typezd2checkzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1003, obj_t BgL_oz00_1004, obj_t BgL_vz00_1005)
	{
		{	/* BackEnd/jvm_class.sch 125 */
			return
				BGl_jvmzd2typezd2checkzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1004), CBOOL(BgL_vz00_1005));
		}

	}



/* jvm-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2boundzd2checkz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_79)
	{
		{	/* BackEnd/jvm_class.sch 126 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_79)))->BgL_boundzd2checkzd2);
		}

	}



/* &jvm-bound-check */
	obj_t BGl_z62jvmzd2boundzd2checkz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1006, obj_t BgL_oz00_1007)
	{
		{	/* BackEnd/jvm_class.sch 126 */
			return
				BBOOL(BGl_jvmzd2boundzd2checkz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1007)));
		}

	}



/* jvm-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2boundzd2checkzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_80, bool_t BgL_vz00_81)
	{
		{	/* BackEnd/jvm_class.sch 127 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_80)))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_81), BUNSPEC);
		}

	}



/* &jvm-bound-check-set! */
	obj_t BGl_z62jvmzd2boundzd2checkzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1008, obj_t BgL_oz00_1009, obj_t BgL_vz00_1010)
	{
		{	/* BackEnd/jvm_class.sch 127 */
			return
				BGl_jvmzd2boundzd2checkzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1009), CBOOL(BgL_vz00_1010));
		}

	}



/* jvm-pregisters */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2pregisterszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_82)
	{
		{	/* BackEnd/jvm_class.sch 128 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_82)))->BgL_pregistersz00);
		}

	}



/* &jvm-pregisters */
	obj_t BGl_z62jvmzd2pregisterszb0zzbackend_jvm_classz00(obj_t BgL_envz00_1011,
		obj_t BgL_oz00_1012)
	{
		{	/* BackEnd/jvm_class.sch 128 */
			return
				BGl_jvmzd2pregisterszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1012));
		}

	}



/* jvm-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2pregisterszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_83, obj_t BgL_vz00_84)
	{
		{	/* BackEnd/jvm_class.sch 129 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_83)))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &jvm-pregisters-set! */
	obj_t BGl_z62jvmzd2pregisterszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1013, obj_t BgL_oz00_1014, obj_t BgL_vz00_1015)
	{
		{	/* BackEnd/jvm_class.sch 129 */
			return
				BGl_jvmzd2pregisterszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1014), BgL_vz00_1015);
		}

	}



/* jvm-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2registerszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_85)
	{
		{	/* BackEnd/jvm_class.sch 130 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_85)))->BgL_registersz00);
		}

	}



/* &jvm-registers */
	obj_t BGl_z62jvmzd2registerszb0zzbackend_jvm_classz00(obj_t BgL_envz00_1016,
		obj_t BgL_oz00_1017)
	{
		{	/* BackEnd/jvm_class.sch 130 */
			return
				BGl_jvmzd2registerszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1017));
		}

	}



/* jvm-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2registerszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_86, obj_t BgL_vz00_87)
	{
		{	/* BackEnd/jvm_class.sch 131 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_86)))->BgL_registersz00) =
				((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &jvm-registers-set! */
	obj_t BGl_z62jvmzd2registerszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1018, obj_t BgL_oz00_1019, obj_t BgL_vz00_1020)
	{
		{	/* BackEnd/jvm_class.sch 131 */
			return
				BGl_jvmzd2registerszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1019), BgL_vz00_1020);
		}

	}



/* jvm-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2requirezd2tailcz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_88)
	{
		{	/* BackEnd/jvm_class.sch 132 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_88)))->BgL_requirezd2tailczd2);
		}

	}



/* &jvm-require-tailc */
	obj_t BGl_z62jvmzd2requirezd2tailcz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1021, obj_t BgL_oz00_1022)
	{
		{	/* BackEnd/jvm_class.sch 132 */
			return
				BBOOL(BGl_jvmzd2requirezd2tailcz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1022)));
		}

	}



/* jvm-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2requirezd2tailczd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_89, bool_t BgL_vz00_90)
	{
		{	/* BackEnd/jvm_class.sch 133 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_89)))->BgL_requirezd2tailczd2) =
				((bool_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &jvm-require-tailc-set! */
	obj_t BGl_z62jvmzd2requirezd2tailczd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1023, obj_t BgL_oz00_1024, obj_t BgL_vz00_1025)
	{
		{	/* BackEnd/jvm_class.sch 133 */
			return
				BGl_jvmzd2requirezd2tailczd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1024), CBOOL(BgL_vz00_1025));
		}

	}



/* jvm-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2tvectorzd2descrzd2supportzd2zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_91)
	{
		{	/* BackEnd/jvm_class.sch 134 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_91)))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &jvm-tvector-descr-support */
	obj_t BGl_z62jvmzd2tvectorzd2descrzd2supportzb0zzbackend_jvm_classz00(obj_t
		BgL_envz00_1026, obj_t BgL_oz00_1027)
	{
		{	/* BackEnd/jvm_class.sch 134 */
			return
				BBOOL(BGl_jvmzd2tvectorzd2descrzd2supportzd2zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1027)));
		}

	}



/* jvm-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_92, bool_t BgL_vz00_93)
	{
		{	/* BackEnd/jvm_class.sch 135 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_92)))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_93), BUNSPEC);
		}

	}



/* &jvm-tvector-descr-support-set! */
	obj_t
		BGl_z62jvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_jvm_classz00
		(obj_t BgL_envz00_1028, obj_t BgL_oz00_1029, obj_t BgL_vz00_1030)
	{
		{	/* BackEnd/jvm_class.sch 135 */
			return
				BGl_jvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1029), CBOOL(BgL_vz00_1030));
		}

	}



/* jvm-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2pragmazd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_94)
	{
		{	/* BackEnd/jvm_class.sch 136 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_94)))->BgL_pragmazd2supportzd2);
		}

	}



/* &jvm-pragma-support */
	obj_t BGl_z62jvmzd2pragmazd2supportz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1031, obj_t BgL_oz00_1032)
	{
		{	/* BackEnd/jvm_class.sch 136 */
			return
				BBOOL(BGl_jvmzd2pragmazd2supportz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1032)));
		}

	}



/* jvm-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2pragmazd2supportzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_95, bool_t BgL_vz00_96)
	{
		{	/* BackEnd/jvm_class.sch 137 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_95)))->BgL_pragmazd2supportzd2) =
				((bool_t) BgL_vz00_96), BUNSPEC);
		}

	}



/* &jvm-pragma-support-set! */
	obj_t BGl_z62jvmzd2pragmazd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1033, obj_t BgL_oz00_1034, obj_t BgL_vz00_1035)
	{
		{	/* BackEnd/jvm_class.sch 137 */
			return
				BGl_jvmzd2pragmazd2supportzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1034), CBOOL(BgL_vz00_1035));
		}

	}



/* jvm-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2debugzd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_97)
	{
		{	/* BackEnd/jvm_class.sch 138 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_97)))->BgL_debugzd2supportzd2);
		}

	}



/* &jvm-debug-support */
	obj_t BGl_z62jvmzd2debugzd2supportz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1036, obj_t BgL_oz00_1037)
	{
		{	/* BackEnd/jvm_class.sch 138 */
			return
				BGl_jvmzd2debugzd2supportz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1037));
		}

	}



/* jvm-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2debugzd2supportzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_98, obj_t BgL_vz00_99)
	{
		{	/* BackEnd/jvm_class.sch 139 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_98)))->BgL_debugzd2supportzd2) =
				((obj_t) BgL_vz00_99), BUNSPEC);
		}

	}



/* &jvm-debug-support-set! */
	obj_t BGl_z62jvmzd2debugzd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1038, obj_t BgL_oz00_1039, obj_t BgL_vz00_1040)
	{
		{	/* BackEnd/jvm_class.sch 139 */
			return
				BGl_jvmzd2debugzd2supportzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1039), BgL_vz00_1040);
		}

	}



/* jvm-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2foreignzd2clausezd2supportzd2zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_100)
	{
		{	/* BackEnd/jvm_class.sch 140 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_100)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &jvm-foreign-clause-support */
	obj_t BGl_z62jvmzd2foreignzd2clausezd2supportzb0zzbackend_jvm_classz00(obj_t
		BgL_envz00_1041, obj_t BgL_oz00_1042)
	{
		{	/* BackEnd/jvm_class.sch 140 */
			return
				BGl_jvmzd2foreignzd2clausezd2supportzd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1042));
		}

	}



/* jvm-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_101, obj_t BgL_vz00_102)
	{
		{	/* BackEnd/jvm_class.sch 141 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_101)))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_102), BUNSPEC);
		}

	}



/* &jvm-foreign-clause-support-set! */
	obj_t
		BGl_z62jvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_jvm_classz00
		(obj_t BgL_envz00_1043, obj_t BgL_oz00_1044, obj_t BgL_vz00_1045)
	{
		{	/* BackEnd/jvm_class.sch 141 */
			return
				BGl_jvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1044), BgL_vz00_1045);
		}

	}



/* jvm-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2tracezd2supportz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_103)
	{
		{	/* BackEnd/jvm_class.sch 142 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_103)))->BgL_tracezd2supportzd2);
		}

	}



/* &jvm-trace-support */
	obj_t BGl_z62jvmzd2tracezd2supportz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1046, obj_t BgL_oz00_1047)
	{
		{	/* BackEnd/jvm_class.sch 142 */
			return
				BBOOL(BGl_jvmzd2tracezd2supportz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1047)));
		}

	}



/* jvm-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2tracezd2supportzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_104, bool_t BgL_vz00_105)
	{
		{	/* BackEnd/jvm_class.sch 143 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_104)))->BgL_tracezd2supportzd2) =
				((bool_t) BgL_vz00_105), BUNSPEC);
		}

	}



/* &jvm-trace-support-set! */
	obj_t BGl_z62jvmzd2tracezd2supportzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1048, obj_t BgL_oz00_1049, obj_t BgL_vz00_1050)
	{
		{	/* BackEnd/jvm_class.sch 143 */
			return
				BGl_jvmzd2tracezd2supportzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1049), CBOOL(BgL_vz00_1050));
		}

	}



/* jvm-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2typedzd2eqz00zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_106)
	{
		{	/* BackEnd/jvm_class.sch 144 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_106)))->BgL_typedzd2eqzd2);
		}

	}



/* &jvm-typed-eq */
	obj_t BGl_z62jvmzd2typedzd2eqz62zzbackend_jvm_classz00(obj_t BgL_envz00_1051,
		obj_t BgL_oz00_1052)
	{
		{	/* BackEnd/jvm_class.sch 144 */
			return
				BBOOL(BGl_jvmzd2typedzd2eqz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1052)));
		}

	}



/* jvm-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typedzd2eqzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_107, bool_t BgL_vz00_108)
	{
		{	/* BackEnd/jvm_class.sch 145 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_107)))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_108), BUNSPEC);
		}

	}



/* &jvm-typed-eq-set! */
	obj_t BGl_z62jvmzd2typedzd2eqzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1053, obj_t BgL_oz00_1054, obj_t BgL_vz00_1055)
	{
		{	/* BackEnd/jvm_class.sch 145 */
			return
				BGl_jvmzd2typedzd2eqzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1054), CBOOL(BgL_vz00_1055));
		}

	}



/* jvm-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2foreignzd2closurez00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_109)
	{
		{	/* BackEnd/jvm_class.sch 146 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_109)))->BgL_foreignzd2closurezd2);
		}

	}



/* &jvm-foreign-closure */
	obj_t BGl_z62jvmzd2foreignzd2closurez62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1056, obj_t BgL_oz00_1057)
	{
		{	/* BackEnd/jvm_class.sch 146 */
			return
				BBOOL(BGl_jvmzd2foreignzd2closurez00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1057)));
		}

	}



/* jvm-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2foreignzd2closurezd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_110, bool_t BgL_vz00_111)
	{
		{	/* BackEnd/jvm_class.sch 147 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_110)))->
					BgL_foreignzd2closurezd2) = ((bool_t) BgL_vz00_111), BUNSPEC);
		}

	}



/* &jvm-foreign-closure-set! */
	obj_t BGl_z62jvmzd2foreignzd2closurezd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1058, obj_t BgL_oz00_1059, obj_t BgL_vz00_1060)
	{
		{	/* BackEnd/jvm_class.sch 147 */
			return
				BGl_jvmzd2foreignzd2closurezd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1059), CBOOL(BgL_vz00_1060));
		}

	}



/* jvm-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2removezd2emptyzd2letzd2zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_112)
	{
		{	/* BackEnd/jvm_class.sch 148 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_112)))->
				BgL_removezd2emptyzd2letz00);
		}

	}



/* &jvm-remove-empty-let */
	obj_t BGl_z62jvmzd2removezd2emptyzd2letzb0zzbackend_jvm_classz00(obj_t
		BgL_envz00_1061, obj_t BgL_oz00_1062)
	{
		{	/* BackEnd/jvm_class.sch 148 */
			return
				BBOOL(BGl_jvmzd2removezd2emptyzd2letzd2zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1062)));
		}

	}



/* jvm-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_113, bool_t BgL_vz00_114)
	{
		{	/* BackEnd/jvm_class.sch 149 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_113)))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_114), BUNSPEC);
		}

	}



/* &jvm-remove-empty-let-set! */
	obj_t
		BGl_z62jvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1063, obj_t BgL_oz00_1064, obj_t BgL_vz00_1065)
	{
		{	/* BackEnd/jvm_class.sch 149 */
			return
				BGl_jvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1064), CBOOL(BgL_vz00_1065));
		}

	}



/* jvm-effect+ */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2effectzb2z60zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_115)
	{
		{	/* BackEnd/jvm_class.sch 150 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_115)))->BgL_effectzb2zb2);
		}

	}



/* &jvm-effect+ */
	obj_t BGl_z62jvmzd2effectzb2z02zzbackend_jvm_classz00(obj_t BgL_envz00_1066,
		obj_t BgL_oz00_1067)
	{
		{	/* BackEnd/jvm_class.sch 150 */
			return
				BBOOL(BGl_jvmzd2effectzb2z60zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1067)));
		}

	}



/* jvm-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2effectzb2zd2setz12za0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_116, bool_t BgL_vz00_117)
	{
		{	/* BackEnd/jvm_class.sch 151 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_116)))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_117), BUNSPEC);
		}

	}



/* &jvm-effect+-set! */
	obj_t BGl_z62jvmzd2effectzb2zd2setz12zc2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1068, obj_t BgL_oz00_1069, obj_t BgL_vz00_1070)
	{
		{	/* BackEnd/jvm_class.sch 151 */
			return
				BGl_jvmzd2effectzb2zd2setz12za0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1069), CBOOL(BgL_vz00_1070));
		}

	}



/* jvm-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2qualifiedzd2typesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_118)
	{
		{	/* BackEnd/jvm_class.sch 152 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_118)))->BgL_qualifiedzd2typeszd2);
		}

	}



/* &jvm-qualified-types */
	obj_t BGl_z62jvmzd2qualifiedzd2typesz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1071, obj_t BgL_oz00_1072)
	{
		{	/* BackEnd/jvm_class.sch 152 */
			return
				BBOOL(BGl_jvmzd2qualifiedzd2typesz00zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1072)));
		}

	}



/* jvm-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_119, bool_t BgL_vz00_120)
	{
		{	/* BackEnd/jvm_class.sch 153 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_119)))->
					BgL_qualifiedzd2typeszd2) = ((bool_t) BgL_vz00_120), BUNSPEC);
		}

	}



/* &jvm-qualified-types-set! */
	obj_t BGl_z62jvmzd2qualifiedzd2typeszd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1073, obj_t BgL_oz00_1074, obj_t BgL_vz00_1075)
	{
		{	/* BackEnd/jvm_class.sch 153 */
			return
				BGl_jvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1074), CBOOL(BgL_vz00_1075));
		}

	}



/* jvm-callcc */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2callcczd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_121)
	{
		{	/* BackEnd/jvm_class.sch 154 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_121)))->BgL_callccz00);
		}

	}



/* &jvm-callcc */
	obj_t BGl_z62jvmzd2callcczb0zzbackend_jvm_classz00(obj_t BgL_envz00_1076,
		obj_t BgL_oz00_1077)
	{
		{	/* BackEnd/jvm_class.sch 154 */
			return
				BBOOL(BGl_jvmzd2callcczd2zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1077)));
		}

	}



/* jvm-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2callcczd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_122, bool_t BgL_vz00_123)
	{
		{	/* BackEnd/jvm_class.sch 155 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_122)))->BgL_callccz00) =
				((bool_t) BgL_vz00_123), BUNSPEC);
		}

	}



/* &jvm-callcc-set! */
	obj_t BGl_z62jvmzd2callcczd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1078, obj_t BgL_oz00_1079, obj_t BgL_vz00_1080)
	{
		{	/* BackEnd/jvm_class.sch 155 */
			return
				BGl_jvmzd2callcczd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1079), CBOOL(BgL_vz00_1080));
		}

	}



/* jvm-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2heapzd2compatiblez00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_124)
	{
		{	/* BackEnd/jvm_class.sch 156 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_124)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &jvm-heap-compatible */
	obj_t BGl_z62jvmzd2heapzd2compatiblez62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1081, obj_t BgL_oz00_1082)
	{
		{	/* BackEnd/jvm_class.sch 156 */
			return
				BGl_jvmzd2heapzd2compatiblez00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1082));
		}

	}



/* jvm-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2heapzd2compatiblezd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_125, obj_t BgL_vz00_126)
	{
		{	/* BackEnd/jvm_class.sch 157 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_125)))->
					BgL_heapzd2compatiblezd2) = ((obj_t) BgL_vz00_126), BUNSPEC);
		}

	}



/* &jvm-heap-compatible-set! */
	obj_t BGl_z62jvmzd2heapzd2compatiblezd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1083, obj_t BgL_oz00_1084, obj_t BgL_vz00_1085)
	{
		{	/* BackEnd/jvm_class.sch 157 */
			return
				BGl_jvmzd2heapzd2compatiblezd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1084), BgL_vz00_1085);
		}

	}



/* jvm-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2heapzd2suffixz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_127)
	{
		{	/* BackEnd/jvm_class.sch 158 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_127)))->BgL_heapzd2suffixzd2);
		}

	}



/* &jvm-heap-suffix */
	obj_t BGl_z62jvmzd2heapzd2suffixz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1086, obj_t BgL_oz00_1087)
	{
		{	/* BackEnd/jvm_class.sch 158 */
			return
				BGl_jvmzd2heapzd2suffixz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1087));
		}

	}



/* jvm-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2heapzd2suffixzd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_128, obj_t BgL_vz00_129)
	{
		{	/* BackEnd/jvm_class.sch 159 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_128)))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_129), BUNSPEC);
		}

	}



/* &jvm-heap-suffix-set! */
	obj_t BGl_z62jvmzd2heapzd2suffixzd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1088, obj_t BgL_oz00_1089, obj_t BgL_vz00_1090)
	{
		{	/* BackEnd/jvm_class.sch 159 */
			return
				BGl_jvmzd2heapzd2suffixzd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1089), BgL_vz00_1090);
		}

	}



/* jvm-typed */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmzd2typedzd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_130)
	{
		{	/* BackEnd/jvm_class.sch 160 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_130)))->BgL_typedz00);
		}

	}



/* &jvm-typed */
	obj_t BGl_z62jvmzd2typedzb0zzbackend_jvm_classz00(obj_t BgL_envz00_1091,
		obj_t BgL_oz00_1092)
	{
		{	/* BackEnd/jvm_class.sch 160 */
			return
				BBOOL(BGl_jvmzd2typedzd2zzbackend_jvm_classz00(
					((BgL_jvmz00_bglt) BgL_oz00_1092)));
		}

	}



/* jvm-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typedzd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_131, bool_t BgL_vz00_132)
	{
		{	/* BackEnd/jvm_class.sch 161 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_131)))->BgL_typedz00) =
				((bool_t) BgL_vz00_132), BUNSPEC);
		}

	}



/* &jvm-typed-set! */
	obj_t BGl_z62jvmzd2typedzd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1093, obj_t BgL_oz00_1094, obj_t BgL_vz00_1095)
	{
		{	/* BackEnd/jvm_class.sch 161 */
			return
				BGl_jvmzd2typedzd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1094), CBOOL(BgL_vz00_1095));
		}

	}



/* jvm-types */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typeszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_133)
	{
		{	/* BackEnd/jvm_class.sch 162 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_133)))->BgL_typesz00);
		}

	}



/* &jvm-types */
	obj_t BGl_z62jvmzd2typeszb0zzbackend_jvm_classz00(obj_t BgL_envz00_1096,
		obj_t BgL_oz00_1097)
	{
		{	/* BackEnd/jvm_class.sch 162 */
			return
				BGl_jvmzd2typeszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1097));
		}

	}



/* jvm-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2typeszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_134, obj_t BgL_vz00_135)
	{
		{	/* BackEnd/jvm_class.sch 163 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_134)))->BgL_typesz00) =
				((obj_t) BgL_vz00_135), BUNSPEC);
		}

	}



/* &jvm-types-set! */
	obj_t BGl_z62jvmzd2typeszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1098, obj_t BgL_oz00_1099, obj_t BgL_vz00_1100)
	{
		{	/* BackEnd/jvm_class.sch 163 */
			return
				BGl_jvmzd2typeszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1099), BgL_vz00_1100);
		}

	}



/* jvm-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2functionszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_136)
	{
		{	/* BackEnd/jvm_class.sch 164 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_136)))->BgL_functionsz00);
		}

	}



/* &jvm-functions */
	obj_t BGl_z62jvmzd2functionszb0zzbackend_jvm_classz00(obj_t BgL_envz00_1101,
		obj_t BgL_oz00_1102)
	{
		{	/* BackEnd/jvm_class.sch 164 */
			return
				BGl_jvmzd2functionszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1102));
		}

	}



/* jvm-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2functionszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_137, obj_t BgL_vz00_138)
	{
		{	/* BackEnd/jvm_class.sch 165 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_137)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_138), BUNSPEC);
		}

	}



/* &jvm-functions-set! */
	obj_t BGl_z62jvmzd2functionszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1103, obj_t BgL_oz00_1104, obj_t BgL_vz00_1105)
	{
		{	/* BackEnd/jvm_class.sch 165 */
			return
				BGl_jvmzd2functionszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1104), BgL_vz00_1105);
		}

	}



/* jvm-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2variableszd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_139)
	{
		{	/* BackEnd/jvm_class.sch 166 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_139)))->BgL_variablesz00);
		}

	}



/* &jvm-variables */
	obj_t BGl_z62jvmzd2variableszb0zzbackend_jvm_classz00(obj_t BgL_envz00_1106,
		obj_t BgL_oz00_1107)
	{
		{	/* BackEnd/jvm_class.sch 166 */
			return
				BGl_jvmzd2variableszd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1107));
		}

	}



/* jvm-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2variableszd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_140, obj_t BgL_vz00_141)
	{
		{	/* BackEnd/jvm_class.sch 167 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_140)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_141), BUNSPEC);
		}

	}



/* &jvm-variables-set! */
	obj_t BGl_z62jvmzd2variableszd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1108, obj_t BgL_oz00_1109, obj_t BgL_vz00_1110)
	{
		{	/* BackEnd/jvm_class.sch 167 */
			return
				BGl_jvmzd2variableszd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1109), BgL_vz00_1110);
		}

	}



/* jvm-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2typesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_142)
	{
		{	/* BackEnd/jvm_class.sch 168 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_142)))->BgL_externzd2typeszd2);
		}

	}



/* &jvm-extern-types */
	obj_t BGl_z62jvmzd2externzd2typesz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1111, obj_t BgL_oz00_1112)
	{
		{	/* BackEnd/jvm_class.sch 168 */
			return
				BGl_jvmzd2externzd2typesz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1112));
		}

	}



/* jvm-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2typeszd2setz12zc0zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_143, obj_t BgL_vz00_144)
	{
		{	/* BackEnd/jvm_class.sch 169 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_143)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_144), BUNSPEC);
		}

	}



/* &jvm-extern-types-set! */
	obj_t BGl_z62jvmzd2externzd2typeszd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1113, obj_t BgL_oz00_1114, obj_t BgL_vz00_1115)
	{
		{	/* BackEnd/jvm_class.sch 169 */
			return
				BGl_jvmzd2externzd2typeszd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1114), BgL_vz00_1115);
		}

	}



/* jvm-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2functionsz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_145)
	{
		{	/* BackEnd/jvm_class.sch 170 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_145)))->BgL_externzd2functionszd2);
		}

	}



/* &jvm-extern-functions */
	obj_t BGl_z62jvmzd2externzd2functionsz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1116, obj_t BgL_oz00_1117)
	{
		{	/* BackEnd/jvm_class.sch 170 */
			return
				BGl_jvmzd2externzd2functionsz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1117));
		}

	}



/* jvm-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2functionszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_146, obj_t BgL_vz00_147)
	{
		{	/* BackEnd/jvm_class.sch 171 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_146)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_147), BUNSPEC);
		}

	}



/* &jvm-extern-functions-set! */
	obj_t BGl_z62jvmzd2externzd2functionszd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1118, obj_t BgL_oz00_1119, obj_t BgL_vz00_1120)
	{
		{	/* BackEnd/jvm_class.sch 171 */
			return
				BGl_jvmzd2externzd2functionszd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1119), BgL_vz00_1120);
		}

	}



/* jvm-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2variablesz00zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_148)
	{
		{	/* BackEnd/jvm_class.sch 172 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_148)))->BgL_externzd2variableszd2);
		}

	}



/* &jvm-extern-variables */
	obj_t BGl_z62jvmzd2externzd2variablesz62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1121, obj_t BgL_oz00_1122)
	{
		{	/* BackEnd/jvm_class.sch 172 */
			return
				BGl_jvmzd2externzd2variablesz00zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1122));
		}

	}



/* jvm-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2externzd2variableszd2setz12zc0zzbackend_jvm_classz00
		(BgL_jvmz00_bglt BgL_oz00_149, obj_t BgL_vz00_150)
	{
		{	/* BackEnd/jvm_class.sch 173 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_149)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_150), BUNSPEC);
		}

	}



/* &jvm-extern-variables-set! */
	obj_t BGl_z62jvmzd2externzd2variableszd2setz12za2zzbackend_jvm_classz00(obj_t
		BgL_envz00_1123, obj_t BgL_oz00_1124, obj_t BgL_vz00_1125)
	{
		{	/* BackEnd/jvm_class.sch 173 */
			return
				BGl_jvmzd2externzd2variableszd2setz12zc0zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1124), BgL_vz00_1125);
		}

	}



/* jvm-name */
	BGL_EXPORTED_DEF obj_t BGl_jvmzd2namezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_151)
	{
		{	/* BackEnd/jvm_class.sch 174 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_151)))->BgL_namez00);
		}

	}



/* &jvm-name */
	obj_t BGl_z62jvmzd2namezb0zzbackend_jvm_classz00(obj_t BgL_envz00_1126,
		obj_t BgL_oz00_1127)
	{
		{	/* BackEnd/jvm_class.sch 174 */
			return
				BGl_jvmzd2namezd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1127));
		}

	}



/* jvm-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2namezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_152, obj_t BgL_vz00_153)
	{
		{	/* BackEnd/jvm_class.sch 175 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_152)))->BgL_namez00) =
				((obj_t) BgL_vz00_153), BUNSPEC);
		}

	}



/* &jvm-name-set! */
	obj_t BGl_z62jvmzd2namezd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1128, obj_t BgL_oz00_1129, obj_t BgL_vz00_1130)
	{
		{	/* BackEnd/jvm_class.sch 175 */
			return
				BGl_jvmzd2namezd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1129), BgL_vz00_1130);
		}

	}



/* jvm-srfi0 */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2srfi0zd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_154)
	{
		{	/* BackEnd/jvm_class.sch 176 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_154)))->BgL_srfi0z00);
		}

	}



/* &jvm-srfi0 */
	obj_t BGl_z62jvmzd2srfi0zb0zzbackend_jvm_classz00(obj_t BgL_envz00_1131,
		obj_t BgL_oz00_1132)
	{
		{	/* BackEnd/jvm_class.sch 176 */
			return
				BGl_jvmzd2srfi0zd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1132));
		}

	}



/* jvm-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2srfi0zd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_155, obj_t BgL_vz00_156)
	{
		{	/* BackEnd/jvm_class.sch 177 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_155)))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_156), BUNSPEC);
		}

	}



/* &jvm-srfi0-set! */
	obj_t BGl_z62jvmzd2srfi0zd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1133, obj_t BgL_oz00_1134, obj_t BgL_vz00_1135)
	{
		{	/* BackEnd/jvm_class.sch 177 */
			return
				BGl_jvmzd2srfi0zd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1134), BgL_vz00_1135);
		}

	}



/* jvm-language */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2languagezd2zzbackend_jvm_classz00(BgL_jvmz00_bglt BgL_oz00_157)
	{
		{	/* BackEnd/jvm_class.sch 178 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_157)))->BgL_languagez00);
		}

	}



/* &jvm-language */
	obj_t BGl_z62jvmzd2languagezb0zzbackend_jvm_classz00(obj_t BgL_envz00_1136,
		obj_t BgL_oz00_1137)
	{
		{	/* BackEnd/jvm_class.sch 178 */
			return
				BGl_jvmzd2languagezd2zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1137));
		}

	}



/* jvm-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2languagezd2setz12z12zzbackend_jvm_classz00(BgL_jvmz00_bglt
		BgL_oz00_158, obj_t BgL_vz00_159)
	{
		{	/* BackEnd/jvm_class.sch 179 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_158)))->BgL_languagez00) =
				((obj_t) BgL_vz00_159), BUNSPEC);
		}

	}



/* &jvm-language-set! */
	obj_t BGl_z62jvmzd2languagezd2setz12z70zzbackend_jvm_classz00(obj_t
		BgL_envz00_1138, obj_t BgL_oz00_1139, obj_t BgL_vz00_1140)
	{
		{	/* BackEnd/jvm_class.sch 179 */
			return
				BGl_jvmzd2languagezd2setz12z12zzbackend_jvm_classz00(
				((BgL_jvmz00_bglt) BgL_oz00_1139), BgL_vz00_1140);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			{	/* BackEnd/jvm_class.scm 20 */
				obj_t BgL_arg1303z00_488;
				obj_t BgL_arg1304z00_489;

				{	/* BackEnd/jvm_class.scm 20 */
					obj_t BgL_v1291z00_539;

					BgL_v1291z00_539 = create_vector(((long) 10));
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1311z00_540;

						BgL_arg1311z00_540 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc1468z00zzbackend_jvm_classz00,
							BGl_proc1467z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1466z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 0), BgL_arg1311z00_540);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1319z00_553;

						BgL_arg1319z00_553 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1471z00zzbackend_jvm_classz00,
							BGl_proc1470z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1469z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 1), BgL_arg1319z00_553);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1329z00_566;

						BgL_arg1329z00_566 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									3)), BGl_proc1474z00zzbackend_jvm_classz00,
							BGl_proc1473z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1472z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 2), BgL_arg1329z00_566);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1338z00_579;

						BgL_arg1338z00_579 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									4)), BGl_proc1477z00zzbackend_jvm_classz00,
							BGl_proc1476z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1475z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 3), BgL_arg1338z00_579);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1348z00_592;

						BgL_arg1348z00_592 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1480z00zzbackend_jvm_classz00,
							BGl_proc1479z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1478z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 4), BgL_arg1348z00_592);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1361z00_605;

						BgL_arg1361z00_605 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									6)), BGl_proc1483z00zzbackend_jvm_classz00,
							BGl_proc1482z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1481z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 5), BgL_arg1361z00_605);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1371z00_618;

						BgL_arg1371z00_618 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc1486z00zzbackend_jvm_classz00,
							BGl_proc1485z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1484z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 6), BgL_arg1371z00_618);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1386z00_631;

						BgL_arg1386z00_631 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc1489z00zzbackend_jvm_classz00,
							BGl_proc1488z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1487z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 7), BgL_arg1386z00_631);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1417z00_644;

						BgL_arg1417z00_644 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc1492z00zzbackend_jvm_classz00,
							BGl_proc1491z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1490z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 8), BgL_arg1417z00_644);
					}
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_arg1441z00_657;

						BgL_arg1441z00_657 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc1495z00zzbackend_jvm_classz00,
							BGl_proc1494z00zzbackend_jvm_classz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1493z00zzbackend_jvm_classz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1291z00_539, ((long) 9), BgL_arg1441z00_657);
					}
					BgL_arg1303z00_488 = BgL_v1291z00_539;
				}
				{	/* BackEnd/jvm_class.scm 20 */
					obj_t BgL_v1292z00_670;

					BgL_v1292z00_670 = create_vector(((long) 0));
					BgL_arg1304z00_489 = BgL_v1292z00_670;
				}
				return (BGl_jvmz00zzbackend_jvm_classz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 11)),
						CNST_TABLE_REF(((long) 12)), BGl_bvmz00zzbackend_bvmz00,
						((long) 26499), BGl_proc1498z00zzbackend_jvm_classz00,
						BGl_proc1497z00zzbackend_jvm_classz00,
						BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
						BGl_proc1496z00zzbackend_jvm_classz00, BFALSE, BgL_arg1303z00_488,
						BgL_arg1304z00_489), BUNSPEC);
		}}

	}



/* &<@anonymous:1310> */
	obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1174, obj_t BgL_new1090z00_1175)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			{
				BgL_jvmz00_bglt BgL_auxz00_1850;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt)
									((BgL_jvmz00_bglt) BgL_new1090z00_1175))))->BgL_languagez00) =
					((obj_t) CNST_TABLE_REF(((long) 13))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 13))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_namez00) =
					((obj_t) BGl_string1499z00zzbackend_jvm_classz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1499z00zzbackend_jvm_classz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 13))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->
						BgL_foreignzd2clausezd2supportz00) = ((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_jvmz00_bglt)
										BgL_new1090z00_1175))))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_qnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_classesz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_currentzd2classzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_declarationsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_fieldsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_methodsz00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_currentzd2methodzd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_codez00) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_lightzd2funcallszd2) = ((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jvmz00_bglt) COBJECT(((BgL_jvmz00_bglt) BgL_new1090z00_1175)))->
						BgL_inlinez00) = ((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_1850 = ((BgL_jvmz00_bglt) BgL_new1090z00_1175);
				return ((obj_t) BgL_auxz00_1850);
			}
		}

	}



/* &lambda1308 */
	BgL_jvmz00_bglt BGl_z62lambda1308z62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1176)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			{	/* BackEnd/jvm_class.scm 20 */
				BgL_jvmz00_bglt BgL_new1089z00_1298;

				BgL_new1089z00_1298 =
					((BgL_jvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_jvmz00_bgl))));
				{	/* BackEnd/jvm_class.scm 20 */
					long BgL_arg1309z00_1299;

					{	/* BackEnd/jvm_class.scm 20 */
						long BgL_res1464z00_1300;

						BgL_res1464z00_1300 =
							BGL_CLASS_INDEX(BGl_jvmz00zzbackend_jvm_classz00);
						BgL_arg1309z00_1299 = BgL_res1464z00_1300;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1089z00_1298), BgL_arg1309z00_1299);
				}
				return BgL_new1089z00_1298;
			}
		}

	}



/* &lambda1305 */
	BgL_jvmz00_bglt BGl_z62lambda1305z62zzbackend_jvm_classz00(obj_t
		BgL_envz00_1177, obj_t BgL_language1050z00_1178,
		obj_t BgL_srfi01051z00_1179, obj_t BgL_name1052z00_1180,
		obj_t BgL_externzd2variables1053zd2_1181,
		obj_t BgL_externzd2functions1054zd2_1182,
		obj_t BgL_externzd2types1055zd2_1183, obj_t BgL_variables1056z00_1184,
		obj_t BgL_functions1057z00_1185, obj_t BgL_types1058z00_1186,
		obj_t BgL_typed1059z00_1187, obj_t BgL_heapzd2suffix1060zd2_1188,
		obj_t BgL_heapzd2compatible1061zd2_1189, obj_t BgL_callcc1062z00_1190,
		obj_t BgL_qualifiedzd2types1063zd2_1191, obj_t BgL_effectzb21064zb2_1192,
		obj_t BgL_removezd2emptyzd2let1065z00_1193,
		obj_t BgL_foreignzd2closure1066zd2_1194, obj_t BgL_typedzd2eq1067zd2_1195,
		obj_t BgL_tracezd2support1068zd2_1196,
		obj_t BgL_foreignzd2clausezd2suppo1069z00_1197,
		obj_t BgL_debugzd2support1070zd2_1198,
		obj_t BgL_pragmazd2support1071zd2_1199,
		obj_t BgL_tvectorzd2descrzd2suppor1072z00_1200,
		obj_t BgL_requirezd2tailc1073zd2_1201, obj_t BgL_registers1074z00_1202,
		obj_t BgL_pregisters1075z00_1203, obj_t BgL_boundzd2check1076zd2_1204,
		obj_t BgL_typezd2check1077zd2_1205, obj_t BgL_typedzd2funcall1078zd2_1206,
		obj_t BgL_qname1079z00_1207, obj_t BgL_classes1080z00_1208,
		obj_t BgL_currentzd2class1081zd2_1209, obj_t BgL_declarations1082z00_1210,
		obj_t BgL_fields1083z00_1211, obj_t BgL_methods1084z00_1212,
		obj_t BgL_currentzd2method1085zd2_1213, obj_t BgL_code1086z00_1214,
		obj_t BgL_lightzd2funcalls1087zd2_1215, obj_t BgL_inline1088z00_1216)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			{	/* BackEnd/jvm_class.scm 20 */
				bool_t BgL_typed1059z00_1304;
				bool_t BgL_callcc1062z00_1307;
				bool_t BgL_qualifiedzd2types1063zd2_1308;
				bool_t BgL_effectzb21064zb2_1309;
				bool_t BgL_removezd2emptyzd2let1065z00_1310;
				bool_t BgL_foreignzd2closure1066zd2_1311;
				bool_t BgL_typedzd2eq1067zd2_1312;
				bool_t BgL_tracezd2support1068zd2_1313;
				bool_t BgL_pragmazd2support1071zd2_1316;
				bool_t BgL_tvectorzd2descrzd2suppor1072z00_1317;
				bool_t BgL_requirezd2tailc1073zd2_1318;
				bool_t BgL_boundzd2check1076zd2_1321;
				bool_t BgL_typezd2check1077zd2_1322;
				bool_t BgL_typedzd2funcall1078zd2_1323;

				BgL_typed1059z00_1304 = CBOOL(BgL_typed1059z00_1187);
				BgL_callcc1062z00_1307 = CBOOL(BgL_callcc1062z00_1190);
				BgL_qualifiedzd2types1063zd2_1308 =
					CBOOL(BgL_qualifiedzd2types1063zd2_1191);
				BgL_effectzb21064zb2_1309 = CBOOL(BgL_effectzb21064zb2_1192);
				BgL_removezd2emptyzd2let1065z00_1310 =
					CBOOL(BgL_removezd2emptyzd2let1065z00_1193);
				BgL_foreignzd2closure1066zd2_1311 =
					CBOOL(BgL_foreignzd2closure1066zd2_1194);
				BgL_typedzd2eq1067zd2_1312 = CBOOL(BgL_typedzd2eq1067zd2_1195);
				BgL_tracezd2support1068zd2_1313 =
					CBOOL(BgL_tracezd2support1068zd2_1196);
				BgL_pragmazd2support1071zd2_1316 =
					CBOOL(BgL_pragmazd2support1071zd2_1199);
				BgL_tvectorzd2descrzd2suppor1072z00_1317 =
					CBOOL(BgL_tvectorzd2descrzd2suppor1072z00_1200);
				BgL_requirezd2tailc1073zd2_1318 =
					CBOOL(BgL_requirezd2tailc1073zd2_1201);
				BgL_boundzd2check1076zd2_1321 = CBOOL(BgL_boundzd2check1076zd2_1204);
				BgL_typezd2check1077zd2_1322 = CBOOL(BgL_typezd2check1077zd2_1205);
				BgL_typedzd2funcall1078zd2_1323 =
					CBOOL(BgL_typedzd2funcall1078zd2_1206);
				{	/* BackEnd/jvm_class.scm 20 */
					BgL_jvmz00_bglt BgL_new1172z00_1324;

					{	/* BackEnd/jvm_class.scm 20 */
						BgL_jvmz00_bglt BgL_new1171z00_1325;

						BgL_new1171z00_1325 =
							((BgL_jvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jvmz00_bgl))));
						{	/* BackEnd/jvm_class.scm 20 */
							long BgL_arg1307z00_1326;

							{	/* BackEnd/jvm_class.scm 20 */
								long BgL_res1463z00_1327;

								BgL_res1463z00_1327 =
									BGL_CLASS_INDEX(BGl_jvmz00zzbackend_jvm_classz00);
								BgL_arg1307z00_1326 = BgL_res1463z00_1327;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1171z00_1325),
								BgL_arg1307z00_1326);
						}
						BgL_new1172z00_1324 = BgL_new1171z00_1325;
					}
					((((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_new1172z00_1324)))->
							BgL_languagez00) =
						((obj_t) ((obj_t) BgL_language1050z00_1178)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_srfi0z00) =
						((obj_t) ((obj_t) BgL_srfi01051z00_1179)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_namez00) =
						((obj_t) ((obj_t) BgL_name1052z00_1180)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_externzd2variableszd2) =
						((obj_t) BgL_externzd2variables1053zd2_1181), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_externzd2functionszd2) =
						((obj_t) BgL_externzd2functions1054zd2_1182), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_externzd2typeszd2) =
						((obj_t) BgL_externzd2types1055zd2_1183), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_variablesz00) =
						((obj_t) BgL_variables1056z00_1184), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_functionsz00) =
						((obj_t) BgL_functions1057z00_1185), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_typesz00) =
						((obj_t) BgL_types1058z00_1186), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_typedz00) =
						((bool_t) BgL_typed1059z00_1304), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_heapzd2suffixzd2) =
						((obj_t) ((obj_t) BgL_heapzd2suffix1060zd2_1188)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_heapzd2compatiblezd2) =
						((obj_t) ((obj_t) BgL_heapzd2compatible1061zd2_1189)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_callccz00) =
						((bool_t) BgL_callcc1062z00_1307), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_qualifiedzd2typeszd2) =
						((bool_t) BgL_qualifiedzd2types1063zd2_1308), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_effectzb2zb2) =
						((bool_t) BgL_effectzb21064zb2_1309), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_removezd2emptyzd2letz00) =
						((bool_t) BgL_removezd2emptyzd2let1065z00_1310), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_foreignzd2closurezd2) =
						((bool_t) BgL_foreignzd2closure1066zd2_1311), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_typedzd2eqzd2) =
						((bool_t) BgL_typedzd2eq1067zd2_1312), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_tracezd2supportzd2) =
						((bool_t) BgL_tracezd2support1068zd2_1313), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_foreignzd2clausezd2supportz00) =
						((obj_t) ((obj_t) BgL_foreignzd2clausezd2suppo1069z00_1197)),
						BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_debugzd2supportzd2) =
						((obj_t) ((obj_t) BgL_debugzd2support1070zd2_1198)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_pragmazd2supportzd2) =
						((bool_t) BgL_pragmazd2support1071zd2_1316), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_tvectorzd2descrzd2supportz00) =
						((bool_t) BgL_tvectorzd2descrzd2suppor1072z00_1317), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_requirezd2tailczd2) =
						((bool_t) BgL_requirezd2tailc1073zd2_1318), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_registersz00) =
						((obj_t) ((obj_t) BgL_registers1074z00_1202)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_pregistersz00) =
						((obj_t) ((obj_t) BgL_pregisters1075z00_1203)), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_boundzd2checkzd2) =
						((bool_t) BgL_boundzd2check1076zd2_1321), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_typezd2checkzd2) =
						((bool_t) BgL_typezd2check1077zd2_1322), BUNSPEC);
					((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
										BgL_new1172z00_1324)))->BgL_typedzd2funcallzd2) =
						((bool_t) BgL_typedzd2funcall1078zd2_1323), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_qnamez00) =
						((obj_t) BgL_qname1079z00_1207), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_classesz00) =
						((obj_t) BgL_classes1080z00_1208), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->
							BgL_currentzd2classzd2) =
						((obj_t) BgL_currentzd2class1081zd2_1209), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->
							BgL_declarationsz00) =
						((obj_t) BgL_declarations1082z00_1210), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_fieldsz00) =
						((obj_t) BgL_fields1083z00_1211), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_methodsz00) =
						((obj_t) BgL_methods1084z00_1212), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->
							BgL_currentzd2methodzd2) =
						((obj_t) BgL_currentzd2method1085zd2_1213), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_codez00) =
						((obj_t) BgL_code1086z00_1214), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->
							BgL_lightzd2funcallszd2) =
						((obj_t) BgL_lightzd2funcalls1087zd2_1215), BUNSPEC);
					((((BgL_jvmz00_bglt) COBJECT(BgL_new1172z00_1324))->BgL_inlinez00) =
						((obj_t) BgL_inline1088z00_1216), BUNSPEC);
					{	/* BackEnd/jvm_class.scm 20 */
						obj_t BgL_fun1306z00_1328;

						BgL_fun1306z00_1328 =
							BGl_classzd2constructorzd2zz__objectz00
							(BGl_jvmz00zzbackend_jvm_classz00);
						PROCEDURE_ENTRY(BgL_fun1306z00_1328) (BgL_fun1306z00_1328,
							((obj_t) BgL_new1172z00_1324), BEOA);
					}
					return BgL_new1172z00_1324;
				}
			}
		}

	}



/* &<@anonymous:1452> */
	obj_t BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1217)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1451 */
	obj_t BGl_z62lambda1451z62zzbackend_jvm_classz00(obj_t BgL_envz00_1218,
		obj_t BgL_oz00_1219, obj_t BgL_vz00_1220)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1219)))->BgL_inlinez00) =
				((obj_t) BgL_vz00_1220), BUNSPEC);
		}

	}



/* &lambda1450 */
	obj_t BGl_z62lambda1450z62zzbackend_jvm_classz00(obj_t BgL_envz00_1221,
		obj_t BgL_oz00_1222)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1222)))->BgL_inlinez00);
		}

	}



/* &<@anonymous:1425> */
	obj_t BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1223)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1424 */
	obj_t BGl_z62lambda1424z62zzbackend_jvm_classz00(obj_t BgL_envz00_1224,
		obj_t BgL_oz00_1225, obj_t BgL_vz00_1226)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1225)))->BgL_lightzd2funcallszd2) =
				((obj_t) BgL_vz00_1226), BUNSPEC);
		}

	}



/* &lambda1423 */
	obj_t BGl_z62lambda1423z62zzbackend_jvm_classz00(obj_t BgL_envz00_1227,
		obj_t BgL_oz00_1228)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1228)))->BgL_lightzd2funcallszd2);
		}

	}



/* &<@anonymous:1397> */
	obj_t BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1229)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1396 */
	obj_t BGl_z62lambda1396z62zzbackend_jvm_classz00(obj_t BgL_envz00_1230,
		obj_t BgL_oz00_1231, obj_t BgL_vz00_1232)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1231)))->BgL_codez00) =
				((obj_t) BgL_vz00_1232), BUNSPEC);
		}

	}



/* &lambda1395 */
	obj_t BGl_z62lambda1395z62zzbackend_jvm_classz00(obj_t BgL_envz00_1233,
		obj_t BgL_oz00_1234)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1234)))->BgL_codez00);
		}

	}



/* &<@anonymous:1385> */
	obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1235)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1384 */
	obj_t BGl_z62lambda1384z62zzbackend_jvm_classz00(obj_t BgL_envz00_1236,
		obj_t BgL_oz00_1237, obj_t BgL_vz00_1238)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1237)))->BgL_currentzd2methodzd2) =
				((obj_t) BgL_vz00_1238), BUNSPEC);
		}

	}



/* &lambda1383 */
	obj_t BGl_z62lambda1383z62zzbackend_jvm_classz00(obj_t BgL_envz00_1239,
		obj_t BgL_oz00_1240)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1240)))->BgL_currentzd2methodzd2);
		}

	}



/* &<@anonymous:1370> */
	obj_t BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1241)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1369 */
	obj_t BGl_z62lambda1369z62zzbackend_jvm_classz00(obj_t BgL_envz00_1242,
		obj_t BgL_oz00_1243, obj_t BgL_vz00_1244)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1243)))->BgL_methodsz00) =
				((obj_t) BgL_vz00_1244), BUNSPEC);
		}

	}



/* &lambda1368 */
	obj_t BGl_z62lambda1368z62zzbackend_jvm_classz00(obj_t BgL_envz00_1245,
		obj_t BgL_oz00_1246)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1246)))->BgL_methodsz00);
		}

	}



/* &<@anonymous:1360> */
	obj_t BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1247)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1359 */
	obj_t BGl_z62lambda1359z62zzbackend_jvm_classz00(obj_t BgL_envz00_1248,
		obj_t BgL_oz00_1249, obj_t BgL_vz00_1250)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1249)))->BgL_fieldsz00) =
				((obj_t) BgL_vz00_1250), BUNSPEC);
		}

	}



/* &lambda1358 */
	obj_t BGl_z62lambda1358z62zzbackend_jvm_classz00(obj_t BgL_envz00_1251,
		obj_t BgL_oz00_1252)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1252)))->BgL_fieldsz00);
		}

	}



/* &<@anonymous:1347> */
	obj_t BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1253)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1346 */
	obj_t BGl_z62lambda1346z62zzbackend_jvm_classz00(obj_t BgL_envz00_1254,
		obj_t BgL_oz00_1255, obj_t BgL_vz00_1256)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1255)))->BgL_declarationsz00) =
				((obj_t) BgL_vz00_1256), BUNSPEC);
		}

	}



/* &lambda1345 */
	obj_t BGl_z62lambda1345z62zzbackend_jvm_classz00(obj_t BgL_envz00_1257,
		obj_t BgL_oz00_1258)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1258)))->BgL_declarationsz00);
		}

	}



/* &<@anonymous:1337> */
	obj_t BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1259)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1336 */
	obj_t BGl_z62lambda1336z62zzbackend_jvm_classz00(obj_t BgL_envz00_1260,
		obj_t BgL_oz00_1261, obj_t BgL_vz00_1262)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1261)))->BgL_currentzd2classzd2) =
				((obj_t) BgL_vz00_1262), BUNSPEC);
		}

	}



/* &lambda1335 */
	obj_t BGl_z62lambda1335z62zzbackend_jvm_classz00(obj_t BgL_envz00_1263,
		obj_t BgL_oz00_1264)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1264)))->BgL_currentzd2classzd2);
		}

	}



/* &<@anonymous:1328> */
	obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1265)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return BNIL;
		}

	}



/* &lambda1327 */
	obj_t BGl_z62lambda1327z62zzbackend_jvm_classz00(obj_t BgL_envz00_1266,
		obj_t BgL_oz00_1267, obj_t BgL_vz00_1268)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1267)))->BgL_classesz00) =
				((obj_t) BgL_vz00_1268), BUNSPEC);
		}

	}



/* &lambda1326 */
	obj_t BGl_z62lambda1326z62zzbackend_jvm_classz00(obj_t BgL_envz00_1269,
		obj_t BgL_oz00_1270)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1270)))->BgL_classesz00);
		}

	}



/* &<@anonymous:1318> */
	obj_t BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_jvm_classz00(obj_t
		BgL_envz00_1271)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return CNST_TABLE_REF(((long) 14));
		}

	}



/* &lambda1317 */
	obj_t BGl_z62lambda1317z62zzbackend_jvm_classz00(obj_t BgL_envz00_1272,
		obj_t BgL_oz00_1273, obj_t BgL_vz00_1274)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				((((BgL_jvmz00_bglt) COBJECT(
							((BgL_jvmz00_bglt) BgL_oz00_1273)))->BgL_qnamez00) =
				((obj_t) BgL_vz00_1274), BUNSPEC);
		}

	}



/* &lambda1316 */
	obj_t BGl_z62lambda1316z62zzbackend_jvm_classz00(obj_t BgL_envz00_1275,
		obj_t BgL_oz00_1276)
	{
		{	/* BackEnd/jvm_class.scm 20 */
			return
				(((BgL_jvmz00_bglt) COBJECT(
						((BgL_jvmz00_bglt) BgL_oz00_1276)))->BgL_qnamez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_jvm_classz00()
	{
		{	/* BackEnd/jvm_class.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1500z00zzbackend_jvm_classz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1500z00zzbackend_jvm_classz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string1500z00zzbackend_jvm_classz00));
		}

	}

#ifdef __cplusplus
}
#endif
