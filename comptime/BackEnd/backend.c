/*===========================================================================*/
/*   (BackEnd/backend.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/backend.scm) */
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


	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2qualifiedzd2typesz00zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2functionszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2typedzd2eqz00zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typezd2checkzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62backendzd2compilezd2func1118z62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2cnstzd2tablezd2n1124zb0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2languagezd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62backendzd2namezb0zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2srfi0zb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2functionszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62backendzd2compile1116zb0zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2cnstzd2tablezd2namezb0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_za2thezd2backendza2zd2zzbackend_backendz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31302ze3ze5zzbackend_backendz00(obj_t);
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2languagezd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2callcczd2zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2qualifiedzd2typeszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t
		BGl_z62backendzd2removezd2emptyzd2letzb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2debugzd2supportz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2heapzd2compatiblez62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2registerszb0zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_za2backendsza2z00zzbackend_backendz00 = BUNSPEC;
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t
		BGl_z62backendzd2externzd2typeszd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2pregisterszd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_methodzd2initzd2zzbackend_backendz00();
	static obj_t
		BGl_z62backendzd2foreignzd2clausezd2supportzb0zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31219ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2pragmazd2supportz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t
		BGl_z62backendzd2removezd2emptyzd2letzd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2debugzd2supportz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2functionszd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2externzd2variableszd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2typedzb0zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2linkzb0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2effectzb2z60zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2typeszb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2registerszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31521ze3ze5zzbackend_backendz00(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2qualifiedzd2typesz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2pragmazd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t
		BGl_z62backendzd2typezd2checkzd2setz12za2zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1217z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1218z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31256ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2variableszb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2foreignzd2clausezd2supportzd2zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1228z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1229z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31273ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2checkzd2inline1130z62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2foreignzd2closurezd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62thezd2backendzb0zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2variablesz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1244z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1245z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1254z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1255z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31543ze3ze5zzbackend_backendz00(obj_t);
	static obj_t
		BGl_z62backendzd2tracezd2supportzd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1423z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1424z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62backendzd2pragmazd2supportz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_backendz00();
	static obj_t BGl_z62lambda1271z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1272z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1278z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1279z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2debugzd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_z62backendzd2typezd2checkz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2heapzd2compatiblezd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1286z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1287z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31295ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2functionszb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2removezd2emptyzd2letzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62lambda1450z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1451z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62backendzd2gczd2init1132z62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1293z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1294z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62backendzd2registerszd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2variableszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_z62lambda1466z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1467z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31564ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2externzd2typesz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2functionsz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2languagezb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typedzd2funcallzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31492ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2variableszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2typesz00zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2tracezd2supportz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2heapzd2suffixz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzf3z91zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2registerszd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1490z62zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62lambda1491z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2requirezd2tailczd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2effectzb2zd2setz12zc2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2heapzd2suffixzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2boundzd2checkzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2gczd2initz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2namezd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2effectzb2zd2setz12za0zzbackend_backendz00(BgL_backendz00_bglt,
		bool_t);
	static obj_t BGl_z62backendzd2tracezd2supportz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31200ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2callcczb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_backendz00 = BUNSPEC;
	static obj_t
		BGl_z62backendzd2initializa7ez121114z05zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00
		(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL BgL_backendz00_bglt
		BGl_backendzd2nilzd2zzbackend_backendz00();
	static obj_t BGl_z62backendzd2callcczd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2typedzd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2subtypezf3z43zzbackend_backendz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2foreignzd2closurezd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_registerzd2genericz12zc0zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2heapzd2suffixz00zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2variableszd2zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2typezd2checkz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2foreignzd2closurez00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2variableszd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_backendz00();
	BGL_EXPORTED_DECL bool_t BGl_backendzf3zf3zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2linkzd2objectsz62zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62backendzd2typedzd2eqz62zzbackend_backendz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typedzd2eqzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62backendzd2linkzd2objects1126z62zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2typedzd2funcallz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2checkzd2inlinesz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2externzd2variablesz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2heapzd2compatiblezd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2initializa7ez12z05zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2callcczd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		bool_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static BgL_backendz00_bglt BGl_z62backendzd2nilzb0zzbackend_backendz00(obj_t);
	static obj_t
		BGl_z62backendzd2typedzd2eqzd2setz12za2zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31170ze3ze5zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2functionszd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t
		BGl_z62backendzd2tvectorzd2descrzd2supportzb0zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2pregisterszd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	static obj_t BGl_z62backendzd2typedzd2funcallz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2boundzd2checkz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2externzd2typeszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2requirezd2tailcz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2effectzb2z02zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2srfi0zd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2srfi0zd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2instrzd2resetzd21128zb0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2typeszd2setz12z70zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2instrzd2resetzd2registerszb0zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31246ze3ze5zzbackend_backendz00(obj_t);
	static obj_t
		BGl_z62backendzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_backendz00
		(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2externzd2functionsz62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31280ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typedzd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		bool_t);
	static obj_t BGl_z62lambda1300z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1301z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1308z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1309z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2requirezd2tailcz62zzbackend_backendz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2removezd2emptyzd2letzd2zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl_z62backendzd2compilezb0zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62setzd2backendz12za2zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1316z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62backendzd2link1120zb0zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1317z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2namezd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2tracezd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzbackend_backendz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62lambda1326z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1327z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static BgL_backendz00_bglt BGl_z62lambda1168z62zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2namezd2zzbackend_backendz00(BgL_backendz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00
		(BgL_backendz00_bglt, int);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2languagezd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t
		BGl_z62backendzd2heapzd2suffixzd2setz12za2zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2externzd2functionszd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2boundzd2checkzd2setz12za2zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1335z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1336z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1177z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1178z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31179ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2boundzd2checkz00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1345z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1346z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzbackend_backendz00();
	static obj_t BGl_z62backendzd2foreignzd2closurez62zzbackend_backendz00(obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2qualifiedzd2typeszd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_backendz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_backendz00();
	static obj_t BGl_z62lambda1519z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1358z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1359z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1198z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1199z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_backendz00zzbackend_backendz00 = BUNSPEC;
	static obj_t BGl_z62lambda1520z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2tvectorzd2descrzd2supportzd2zzbackend_backendz00
		(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1368z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1369z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2pragmazd2supportzd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2heapzd2compatiblez00zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62zc3z04anonymousza31288ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_backendzd2typedzd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62registerzd2backendz12za2zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_z62backendzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_backendz00
		(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typeszd2zzbackend_backendz00(BgL_backendz00_bglt);
	static obj_t BGl_z62lambda1541z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1542z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1383z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2debugzd2supportzd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62lambda1384z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2requirezd2tailczd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt, bool_t);
	static obj_t BGl_z62lambda1395z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1396z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31468ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62lambda1562z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1563z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2srfi0zd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t
		BGl_z62backendzd2pregisterszd2setz12z70zzbackend_backendz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62backendzd2pregisterszb0zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2typeszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt,
		obj_t);
	static obj_t BGl_z62backendzd2subtypezf31122z43zzbackend_backendz00(obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1579z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2typedzd2funcallzd2setz12za2zzbackend_backendz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_backendz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1580z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31592ze3ze5zzbackend_backendz00(obj_t);
	static obj_t BGl_z62backendzd2gczd2initz62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1590z62zzbackend_backendz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1591z62zzbackend_backendz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62backendzd2compilezd2functionsz62zzbackend_backendz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt, obj_t);
	static obj_t __cnst[47];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typeszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1858z00,
		BGl_z62backendzd2typeszb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_thezd2backendzd2envz00zzbackend_backendz00,
		BgL_bgl_za762theza7d2backend1859z00,
		BGl_z62thezd2backendzb0zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ins1860z00,
		BGl_z62backendzd2instrzd2resetzd2registerszb0zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2functionszd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2fun1861z00,
		BGl_z62backendzd2functionszd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2callcczd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2cal1862z00,
		BGl_z62backendzd2callcczb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2functionszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2fun1863z00,
		BGl_z62backendzd2functionszb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1864z00,
		BGl_z62backendzd2typedzb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2boundzd2checkzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2bou1865z00,
		BGl_z62backendzd2boundzd2checkzd2setz12za2zzbackend_backendz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2pragmazd2supportzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2pra1866z00,
		BGl_z62backendzd2pragmazd2supportz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2registerszd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2reg1867z00,
		BGl_z62backendzd2registerszd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2qualifiedzd2typeszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2qua1868z00,
		BGl_z62backendzd2qualifiedzd2typesz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2functionszd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext1869z00,
		BGl_z62backendzd2externzd2functionszd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setzd2backendz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762setza7d2backend1870z00,
		BGl_z62setzd2backendz12za2zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1829z00zzbackend_backendz00,
		BgL_bgl_string1829za700za7za7b1871za7, "", 0);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2che1872z00,
		BGl_z62backendzd2checkzd2inlinesz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1740z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1873za7,
		BGl_z62zc3z04anonymousza31179ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1741z00zzbackend_backendz00,
		BgL_bgl_za762lambda1178za7621874z00,
		BGl_z62lambda1178z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1742z00zzbackend_backendz00,
		BgL_bgl_za762lambda1177za7621875z00,
		BGl_z62lambda1177z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1743z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1876za7,
		BGl_z62zc3z04anonymousza31200ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1744z00zzbackend_backendz00,
		BgL_bgl_za762lambda1199za7621877z00,
		BGl_z62lambda1199z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1830z00zzbackend_backendz00,
		BgL_bgl_string1830za700za7za7b1878za7, "heap", 4);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1745z00zzbackend_backendz00,
		BgL_bgl_za762lambda1198za7621879z00,
		BGl_z62lambda1198z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1831z00zzbackend_backendz00,
		BgL_bgl_string1831za700za7za7b1880za7, "dummy", 5);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1746z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1881za7,
		BGl_z62zc3z04anonymousza31219ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typezd2checkzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1882z00,
		BGl_z62backendzd2typezd2checkz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1747z00zzbackend_backendz00,
		BgL_bgl_za762lambda1218za7621883z00,
		BGl_z62lambda1218z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1833z00zzbackend_backendz00,
		BgL_bgl_string1833za700za7za7b1884za7, "backend-initialize!1114", 23);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1748z00zzbackend_backendz00,
		BgL_bgl_za762lambda1217za7621885z00,
		BGl_z62lambda1217z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1749z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1886za7,
		BGl_z62zc3z04anonymousza31230ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1835z00zzbackend_backendz00,
		BgL_bgl_string1835za700za7za7b1887za7, "backend-compile1116", 19);
	      DEFINE_STRING(BGl_string1837z00zzbackend_backendz00,
		BgL_bgl_string1837za700za7za7b1888za7, "backend-compile-func1118", 24);
	      DEFINE_STRING(BGl_string1839z00zzbackend_backendz00,
		BgL_bgl_string1839za700za7za7b1889za7, "backend-link1120", 16);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1750z00zzbackend_backendz00,
		BgL_bgl_za762lambda1229za7621890z00,
		BGl_z62lambda1229z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1751z00zzbackend_backendz00,
		BgL_bgl_za762lambda1228za7621891z00,
		BGl_z62lambda1228z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1752z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1892za7,
		BGl_z62zc3z04anonymousza31246ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1753z00zzbackend_backendz00,
		BgL_bgl_za762lambda1245za7621893z00,
		BGl_z62lambda1245z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1754z00zzbackend_backendz00,
		BgL_bgl_za762lambda1244za7621894z00,
		BGl_z62lambda1244z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1755z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1895za7,
		BGl_z62zc3z04anonymousza31256ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1841z00zzbackend_backendz00,
		BgL_bgl_string1841za700za7za7b1896za7, "backend-subtype?1122", 20);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1756z00zzbackend_backendz00,
		BgL_bgl_za762lambda1255za7621897z00,
		BGl_z62lambda1255z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1757z00zzbackend_backendz00,
		BgL_bgl_za762lambda1254za7621898z00,
		BGl_z62lambda1254z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1843z00zzbackend_backendz00,
		BgL_bgl_string1843za700za7za7b1899za7, "backend-cnst-table-n1124", 24);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1758z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1900za7,
		BGl_z62zc3z04anonymousza31273ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1759z00zzbackend_backendz00,
		BgL_bgl_za762lambda1272za7621901z00,
		BGl_z62lambda1272z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1845z00zzbackend_backendz00,
		BgL_bgl_string1845za700za7za7b1902za7, "backend-link-objects1126", 24);
	      DEFINE_STRING(BGl_string1847z00zzbackend_backendz00,
		BgL_bgl_string1847za700za7za7b1903za7, "backend-instr-reset-1128", 24);
	      DEFINE_STRING(BGl_string1849z00zzbackend_backendz00,
		BgL_bgl_string1849za700za7za7b1904za7, "backend-check-inline1130", 24);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2callcczd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2cal1905z00,
		BGl_z62backendzd2callcczd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1760z00zzbackend_backendz00,
		BgL_bgl_za762lambda1271za7621906z00,
		BGl_z62lambda1271z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1761z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1907za7,
		BGl_z62zc3z04anonymousza31280ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1762z00zzbackend_backendz00,
		BgL_bgl_za762lambda1279za7621908z00,
		BGl_z62lambda1279z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1763z00zzbackend_backendz00,
		BgL_bgl_za762lambda1278za7621909z00,
		BGl_z62lambda1278z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1764z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1910za7,
		BGl_z62zc3z04anonymousza31288ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1765z00zzbackend_backendz00,
		BgL_bgl_za762lambda1287za7621911z00,
		BGl_z62lambda1287z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1851z00zzbackend_backendz00,
		BgL_bgl_string1851za700za7za7b1912za7, "backend-gc-init1132", 19);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1766z00zzbackend_backendz00,
		BgL_bgl_za762lambda1286za7621913z00,
		BGl_z62lambda1286z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1852z00zzbackend_backendz00,
		BgL_bgl_string1852za700za7za7b1914za7, "No method for this object", 25);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1767z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1915za7,
		BGl_z62zc3z04anonymousza31295ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1853z00zzbackend_backendz00,
		BgL_bgl_string1853za700za7za7b1916za7, "backend_backend", 15);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1768z00zzbackend_backendz00,
		BgL_bgl_za762lambda1294za7621917z00,
		BGl_z62lambda1294z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1854z00zzbackend_backendz00,
		BgL_bgl_string1854za700za7za7b1918za7,
		"backend-compile1116 backend-compile-func1118 backend-link1120 backend-subtype?1122 backend-cnst-table-n1124 backend-link-objects1126 none native (foreign extern) (c bdb module) _ backend_backend backend typed-funcall type-check bound-check pregisters registers require-tailc tvector-descr-support pragma-support debug-support pair-nil foreign-clause-support trace-support typed-eq foreign-closure remove-empty-let effect+ qualified-types callcc heap-compatible heap-suffix bool typed types functions variables extern-types extern-functions obj extern-variables bstring name srfi0 symbol language ",
		596);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1769z00zzbackend_backendz00,
		BgL_bgl_za762lambda1293za7621919z00,
		BGl_z62lambda1293z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2foreignzd2closurezd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2for1920z00,
		BGl_z62backendzd2foreignzd2closurezd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1770z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1921za7,
		BGl_z62zc3z04anonymousza31302ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1771z00zzbackend_backendz00,
		BgL_bgl_za762lambda1301za7621922z00,
		BGl_z62lambda1301z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1772z00zzbackend_backendz00,
		BgL_bgl_za762lambda1300za7621923z00,
		BGl_z62lambda1300z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typezd2checkzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1924z00,
		BGl_z62backendzd2typezd2checkzd2setz12za2zzbackend_backendz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1773z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1925za7,
		BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1774z00zzbackend_backendz00,
		BgL_bgl_za762lambda1309za7621926z00,
		BGl_z62lambda1309z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1775z00zzbackend_backendz00,
		BgL_bgl_za762lambda1308za7621927z00,
		BGl_z62lambda1308z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1776z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1928za7,
		BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1777z00zzbackend_backendz00,
		BgL_bgl_za762lambda1317za7621929z00,
		BGl_z62lambda1317z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1778z00zzbackend_backendz00,
		BgL_bgl_za762lambda1316za7621930z00,
		BGl_z62lambda1316z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1779z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1931za7,
		BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1780z00zzbackend_backendz00,
		BgL_bgl_za762lambda1327za7621932z00,
		BGl_z62lambda1327z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1781z00zzbackend_backendz00,
		BgL_bgl_za762lambda1326za7621933z00,
		BGl_z62lambda1326z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1782z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1934za7,
		BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1783z00zzbackend_backendz00,
		BgL_bgl_za762lambda1336za7621935z00,
		BGl_z62lambda1336z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1784z00zzbackend_backendz00,
		BgL_bgl_za762lambda1335za7621936z00,
		BGl_z62lambda1335z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1785z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1937za7,
		BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1786z00zzbackend_backendz00,
		BgL_bgl_za762lambda1346za7621938z00,
		BGl_z62lambda1346z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1787z00zzbackend_backendz00,
		BgL_bgl_za762lambda1345za7621939z00,
		BGl_z62lambda1345z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1788z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1940za7,
		BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1789z00zzbackend_backendz00,
		BgL_bgl_za762lambda1359za7621941z00,
		BGl_z62lambda1359z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1790z00zzbackend_backendz00,
		BgL_bgl_za762lambda1358za7621942z00,
		BGl_z62lambda1358z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1791z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1943za7,
		BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1792z00zzbackend_backendz00,
		BgL_bgl_za762lambda1369za7621944z00,
		BGl_z62lambda1369z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1793z00zzbackend_backendz00,
		BgL_bgl_za762lambda1368za7621945z00,
		BGl_z62lambda1368z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1794z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1946za7,
		BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1795z00zzbackend_backendz00,
		BgL_bgl_za762lambda1384za7621947z00,
		BGl_z62lambda1384z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1796z00zzbackend_backendz00,
		BgL_bgl_za762lambda1383za7621948z00,
		BGl_z62lambda1383z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1797z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1949za7,
		BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1798z00zzbackend_backendz00,
		BgL_bgl_za762lambda1396za7621950z00,
		BGl_z62lambda1396z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1799z00zzbackend_backendz00,
		BgL_bgl_za762lambda1395za7621951z00,
		BGl_z62lambda1395z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2com1952z00,
		BGl_z62backendzd2compilezd2functionsz62zzbackend_backendz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2namezd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2nam1953z00,
		BGl_z62backendzd2namezd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2cns1954z00,
		BGl_z62backendzd2cnstzd2tablezd2namezb0zzbackend_backendz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2removezd2emptyzd2letzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2rem1955z00,
		BGl_z62backendzd2removezd2emptyzd2letzb0zzbackend_backendz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2funcallzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1956z00,
		BGl_z62backendzd2typedzd2funcallzd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2heapzd2suffixzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2hea1957z00,
		BGl_z62backendzd2heapzd2suffixz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2eqzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1958z00,
		BGl_z62backendzd2typedzd2eqz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2heapzd2compatiblezd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2hea1959z00,
		BGl_z62backendzd2heapzd2compatiblez62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_registerzd2backendz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762registerza7d2ba1960z00,
		BGl_z62registerzd2backendz12za2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2effectzb2zd2setz12zd2envz72zzbackend_backendz00,
		BgL_bgl_za762backendza7d2eff1961z00,
		BGl_z62backendzd2effectzb2zd2setz12zc2zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2variableszd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2var1962z00,
		BGl_z62backendzd2variableszd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
		BgL_bgl_za762backendza7d2sub1963z00,
		BGl_z62backendzd2subtypezf3z43zzbackend_backendz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2pregisterszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2pre1964z00,
		BGl_z62backendzd2pregisterszb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2effectzb2zd2envzb2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2eff1965z00,
		BGl_z62backendzd2effectzb2z02zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzf3zd2envz21zzbackend_backendz00,
		BgL_bgl_za762backendza7f3za7911966za7,
		BGl_z62backendzf3z91zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzd2nilzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2nil1967z00,
		BGl_z62backendzd2nilzb0zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2rem1968z00,
		BGl_z62backendzd2removezd2emptyzd2letzd2setz12z70zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1969z00,
		BGl_z62backendzd2typedzd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2variableszd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext1970z00,
		BGl_z62backendzd2externzd2variableszd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2eqzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ1971z00,
		BGl_z62backendzd2typedzd2eqzd2setz12za2zzbackend_backendz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2tvectorzd2descrzd2supportzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2tve1972z00,
		BGl_z62backendzd2tvectorzd2descrzd2supportzb0zzbackend_backendz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2srfi0zd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2srf1973z00,
		BGl_z62backendzd2srfi0zd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2pregisterszd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2pre1974z00,
		BGl_z62backendzd2pregisterszd2setz12z70zzbackend_backendz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2typeszd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext1975z00,
		BGl_z62backendzd2externzd2typeszd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2foreignzd2closurezd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2for1976z00,
		BGl_z62backendzd2foreignzd2closurez62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2com1977z00,
		BGl_z62backendzd2compilezb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1800z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1978za7,
		BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1801z00zzbackend_backendz00,
		BgL_bgl_za762lambda1424za7621979z00,
		BGl_z62lambda1424z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1802z00zzbackend_backendz00,
		BgL_bgl_za762lambda1423za7621980z00,
		BGl_z62lambda1423z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1803z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1981za7,
		BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1804z00zzbackend_backendz00,
		BgL_bgl_za762lambda1451za7621982z00,
		BGl_z62lambda1451z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lin1983z00,
		BGl_z62backendzd2linkzb0zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1805z00zzbackend_backendz00,
		BgL_bgl_za762lambda1450za7621984z00,
		BGl_z62lambda1450z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1806z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1985za7,
		BGl_z62zc3z04anonymousza31468ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1807z00zzbackend_backendz00,
		BgL_bgl_za762lambda1467za7621986z00,
		BGl_z62lambda1467z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1808z00zzbackend_backendz00,
		BgL_bgl_za762lambda1466za7621987z00,
		BGl_z62lambda1466z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1809z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1988za7,
		BGl_z62zc3z04anonymousza31492ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1738z00zzbackend_backendz00,
		BgL_bgl_string1738za700za7za7b1989za7, "backend", 7);
	      DEFINE_STRING(BGl_string1739z00zzbackend_backendz00,
		BgL_bgl_string1739za700za7za7b1990za7, "Unimplemented target language", 29);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_backendzd2namezd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2nam1991z00,
		BGl_z62backendzd2namezb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1810z00zzbackend_backendz00,
		BgL_bgl_za762lambda1491za7621992z00,
		BGl_z62lambda1491z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1811z00zzbackend_backendz00,
		BgL_bgl_za762lambda1490za7621993z00,
		BGl_z62lambda1490z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1812z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1994za7,
		BGl_z62zc3z04anonymousza31521ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1813z00zzbackend_backendz00,
		BgL_bgl_za762lambda1520za7621995z00,
		BGl_z62lambda1520z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1814z00zzbackend_backendz00,
		BgL_bgl_za762lambda1519za7621996z00,
		BGl_z62lambda1519z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1815z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo1997za7,
		BGl_z62zc3z04anonymousza31543ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1816z00zzbackend_backendz00,
		BgL_bgl_za762lambda1542za7621998z00,
		BGl_z62lambda1542z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1817z00zzbackend_backendz00,
		BgL_bgl_za762lambda1541za7621999z00,
		BGl_z62lambda1541z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1818z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo2000za7,
		BGl_z62zc3z04anonymousza31564ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1819z00zzbackend_backendz00,
		BgL_bgl_za762lambda1563za7622001z00,
		BGl_z62lambda1563z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typeszd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ2002z00,
		BGl_z62backendzd2typeszd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1820z00zzbackend_backendz00,
		BgL_bgl_za762lambda1562za7622003z00,
		BGl_z62lambda1562z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo2004za7,
		BGl_z62zc3z04anonymousza31581ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1822z00zzbackend_backendz00,
		BgL_bgl_za762lambda1580za7622005z00,
		BGl_z62lambda1580z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1823z00zzbackend_backendz00,
		BgL_bgl_za762lambda1579za7622006z00,
		BGl_z62lambda1579z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1824z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo2007za7,
		BGl_z62zc3z04anonymousza31592ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1825z00zzbackend_backendz00,
		BgL_bgl_za762lambda1591za7622008z00,
		BGl_z62lambda1591z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1826z00zzbackend_backendz00,
		BgL_bgl_za762lambda1590za7622009z00,
		BGl_z62lambda1590z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1827z00zzbackend_backendz00,
		BgL_bgl_za762za7c3za704anonymo2010za7,
		BGl_z62zc3z04anonymousza31170ze3ze5zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1828z00zzbackend_backendz00,
		BgL_bgl_za762lambda1168za7622011z00,
		BGl_z62lambda1168z62zzbackend_backendz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2languagezd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lan2012z00,
		BGl_z62backendzd2languagezd2setz12z70zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1832z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ini2013z00,
		BGl_z62backendzd2initializa7ez121114z05zzbackend_backendz00, 0L, BUNSPEC,
		1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1834z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2com2014z00,
		BGl_z62backendzd2compile1116zb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1836z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2com2015z00,
		BGl_z62backendzd2compilezd2func1118z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1838z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lin2016z00,
		BGl_z62backendzd2link1120zb0zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1840z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2sub2017z00,
		BGl_z62backendzd2subtypezf31122z43zzbackend_backendz00, 0L, BUNSPEC, 3);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1842z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2cns2018z00,
		BGl_z62backendzd2cnstzd2tablezd2n1124zb0zzbackend_backendz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1844z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lin2019z00,
		BGl_z62backendzd2linkzd2objects1126z62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1846z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ins2020z00,
		BGl_z62backendzd2instrzd2resetzd21128zb0zzbackend_backendz00, 0L, BUNSPEC,
		2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1848z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2che2021z00,
		BGl_z62backendzd2checkzd2inline1130z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2typeszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext2022z00,
		BGl_z62backendzd2externzd2typesz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lin2023z00,
		BGl_z62backendzd2linkzd2objectsz62zzbackend_backendz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1850z00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2gcza72024za7,
		BGl_z62backendzd2gczd2init1132z62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2registerszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2reg2025z00,
		BGl_z62backendzd2registerszb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2heapzd2compatiblezd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2hea2026z00,
		BGl_z62backendzd2heapzd2compatiblezd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ini2027z00,
		BGl_z62backendzd2initializa7ez12z05zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2srfi0zd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2srf2028z00,
		BGl_z62backendzd2srfi0zb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2requirezd2tailczd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2req2029z00,
		BGl_z62backendzd2requirezd2tailczd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2tracezd2supportzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2tra2030z00,
		BGl_z62backendzd2tracezd2supportzd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2tracezd2supportzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2tra2031z00,
		BGl_z62backendzd2tracezd2supportz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2pragmazd2supportzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2pra2032z00,
		BGl_z62backendzd2pragmazd2supportzd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2tve2033z00,
		BGl_z62backendzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_backendz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2boundzd2checkzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2bou2034z00,
		BGl_z62backendzd2boundzd2checkz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_backendz00,
		BgL_bgl_za762backendza7d2for2035z00,
		BGl_z62backendzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_backendz00,
		0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2variableszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext2036z00,
		BGl_z62backendzd2externzd2variablesz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2debugzd2supportzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2deb2037z00,
		BGl_z62backendzd2debugzd2supportzd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2languagezd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2lan2038z00,
		BGl_z62backendzd2languagezb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2heapzd2suffixzd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2hea2039z00,
		BGl_z62backendzd2heapzd2suffixzd2setz12za2zzbackend_backendz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_backendz00,
		BgL_bgl_za762backendza7d2qua2040z00,
		BGl_z62backendzd2qualifiedzd2typeszd2setz12za2zzbackend_backendz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2variableszd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2var2041z00,
		BGl_z62backendzd2variableszb0zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2typedzd2funcallzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2typ2042z00,
		BGl_z62backendzd2typedzd2funcallz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2foreignzd2clausezd2supportzd2envz00zzbackend_backendz00,
		BgL_bgl_za762backendza7d2for2043z00,
		BGl_z62backendzd2foreignzd2clausezd2supportzb0zzbackend_backendz00, 0L,
		BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2requirezd2tailczd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2req2044z00,
		BGl_z62backendzd2requirezd2tailcz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2externzd2functionszd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2ext2045z00,
		BGl_z62backendzd2externzd2functionsz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_GENERIC
		(BGl_backendzd2gczd2initzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2gcza72046za7,
		BGl_z62backendzd2gczd2initz62zzbackend_backendz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_backendzd2debugzd2supportzd2envzd2zzbackend_backendz00,
		BgL_bgl_za762backendza7d2deb2047z00,
		BGl_z62backendzd2debugzd2supportz62zzbackend_backendz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2thezd2backendza2zd2zzbackend_backendz00));
		     ADD_ROOT((void *) (&BGl_za2backendsza2z00zzbackend_backendz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzbackend_backendz00));
		     ADD_ROOT((void *) (&BGl_backendz00zzbackend_backendz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzbackend_backendz00(long
		BgL_checksumz00_1694, char *BgL_fromz00_1695)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_backendz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_backendz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_backendz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_backendz00();
					BGl_cnstzd2initzd2zzbackend_backendz00();
					BGl_importedzd2moduleszd2initz00zzbackend_backendz00();
					BGl_objectzd2initzd2zzbackend_backendz00();
					BGl_genericzd2initzd2zzbackend_backendz00();
					return BGl_toplevelzd2initzd2zzbackend_backendz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"backend_backend");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"backend_backend");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			{	/* BackEnd/backend.scm 15 */
				obj_t BgL_cportz00_1580;

				{	/* BackEnd/backend.scm 15 */
					obj_t BgL_stringz00_1588;

					BgL_stringz00_1588 = BGl_string1854z00zzbackend_backendz00;
					{	/* BackEnd/backend.scm 15 */
						obj_t BgL_startz00_1589;

						BgL_startz00_1589 = BINT(((long) 0));
						{	/* BackEnd/backend.scm 15 */
							obj_t BgL_endz00_1590;

							BgL_endz00_1590 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1588)));
							{	/* BackEnd/backend.scm 15 */

								BgL_cportz00_1580 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1588, BgL_startz00_1589, BgL_endz00_1590);
				}}}}
				{
					long BgL_iz00_1581;

					BgL_iz00_1581 = ((long) 46);
				BgL_loopz00_1582:
					if ((BgL_iz00_1581 == ((long) -1)))
						{	/* BackEnd/backend.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/backend.scm 15 */
							{	/* BackEnd/backend.scm 15 */
								obj_t BgL_arg1856z00_1584;

								{	/* BackEnd/backend.scm 15 */

									{	/* BackEnd/backend.scm 15 */
										obj_t BgL_locationz00_1586;

										BgL_locationz00_1586 = BBOOL(((bool_t) 0));
										{	/* BackEnd/backend.scm 15 */

											BgL_arg1856z00_1584 =
												BGl_readz00zz__readerz00(BgL_cportz00_1580,
												BgL_locationz00_1586);
										}
									}
								}
								{	/* BackEnd/backend.scm 15 */
									int BgL_tmpz00_1725;

									BgL_tmpz00_1725 = (int) (BgL_iz00_1581);
									CNST_TABLE_SET(BgL_tmpz00_1725, BgL_arg1856z00_1584);
							}}
							{	/* BackEnd/backend.scm 15 */
								int BgL_auxz00_1587;

								BgL_auxz00_1587 = (int) ((BgL_iz00_1581 - ((long) 1)));
								{
									long BgL_iz00_1730;

									BgL_iz00_1730 = (long) (BgL_auxz00_1587);
									BgL_iz00_1581 = BgL_iz00_1730;
									goto BgL_loopz00_1582;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			BGl_za2thezd2backendza2zd2zzbackend_backendz00 = BUNSPEC;
			BGl_za2backendsza2z00zzbackend_backendz00 = BNIL;
			return BUNSPEC;
		}

	}



/* backend? */
	BGL_EXPORTED_DEF bool_t BGl_backendzf3zf3zzbackend_backendz00(obj_t
		BgL_objz00_3)
	{
		{	/* BackEnd/backend.sch 78 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_3,
				BGl_backendz00zzbackend_backendz00);
		}

	}



/* &backend? */
	obj_t BGl_z62backendzf3z91zzbackend_backendz00(obj_t BgL_envz00_1098,
		obj_t BgL_objz00_1099)
	{
		{	/* BackEnd/backend.sch 78 */
			return BBOOL(BGl_backendzf3zf3zzbackend_backendz00(BgL_objz00_1099));
		}

	}



/* backend-nil */
	BGL_EXPORTED_DEF BgL_backendz00_bglt
		BGl_backendzd2nilzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.sch 79 */
			{	/* BackEnd/backend.sch 79 */
				obj_t BgL_classz00_631;

				BgL_classz00_631 = BGl_backendz00zzbackend_backendz00;
				{	/* BackEnd/backend.sch 79 */
					obj_t BgL__ortest_1106z00_632;

					BgL__ortest_1106z00_632 = BGL_CLASS_NIL(BgL_classz00_631);
					if (CBOOL(BgL__ortest_1106z00_632))
						{	/* BackEnd/backend.sch 79 */
							return ((BgL_backendz00_bglt) BgL__ortest_1106z00_632);
						}
					else
						{	/* BackEnd/backend.sch 79 */
							return
								((BgL_backendz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_631));
						}
				}
			}
		}

	}



/* &backend-nil */
	BgL_backendz00_bglt BGl_z62backendzd2nilzb0zzbackend_backendz00(obj_t
		BgL_envz00_1100)
	{
		{	/* BackEnd/backend.sch 79 */
			return BGl_backendzd2nilzd2zzbackend_backendz00();
		}

	}



/* backend-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2typedzd2funcallz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_4)
	{
		{	/* BackEnd/backend.sch 80 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_4))->BgL_typedzd2funcallzd2);
		}

	}



/* &backend-typed-funcall */
	obj_t BGl_z62backendzd2typedzd2funcallz62zzbackend_backendz00(obj_t
		BgL_envz00_1101, obj_t BgL_oz00_1102)
	{
		{	/* BackEnd/backend.sch 80 */
			return
				BBOOL(BGl_backendzd2typedzd2funcallz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1102)));
		}

	}



/* backend-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typedzd2funcallzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_5, bool_t BgL_vz00_6)
	{
		{	/* BackEnd/backend.sch 81 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_5))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_6), BUNSPEC);
		}

	}



/* &backend-typed-funcall-set! */
	obj_t BGl_z62backendzd2typedzd2funcallzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1103, obj_t BgL_oz00_1104, obj_t BgL_vz00_1105)
	{
		{	/* BackEnd/backend.sch 81 */
			return
				BGl_backendzd2typedzd2funcallzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1104), CBOOL(BgL_vz00_1105));
		}

	}



/* backend-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2typezd2checkz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_7)
	{
		{	/* BackEnd/backend.sch 82 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_7))->BgL_typezd2checkzd2);
		}

	}



/* &backend-type-check */
	obj_t BGl_z62backendzd2typezd2checkz62zzbackend_backendz00(obj_t
		BgL_envz00_1106, obj_t BgL_oz00_1107)
	{
		{	/* BackEnd/backend.sch 82 */
			return
				BBOOL(BGl_backendzd2typezd2checkz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1107)));
		}

	}



/* backend-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typezd2checkzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_8, bool_t BgL_vz00_9)
	{
		{	/* BackEnd/backend.sch 83 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_8))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_9), BUNSPEC);
		}

	}



/* &backend-type-check-set! */
	obj_t BGl_z62backendzd2typezd2checkzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1108, obj_t BgL_oz00_1109, obj_t BgL_vz00_1110)
	{
		{	/* BackEnd/backend.sch 83 */
			return
				BGl_backendzd2typezd2checkzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1109), CBOOL(BgL_vz00_1110));
		}

	}



/* backend-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2boundzd2checkz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_10)
	{
		{	/* BackEnd/backend.sch 84 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_10))->BgL_boundzd2checkzd2);
		}

	}



/* &backend-bound-check */
	obj_t BGl_z62backendzd2boundzd2checkz62zzbackend_backendz00(obj_t
		BgL_envz00_1111, obj_t BgL_oz00_1112)
	{
		{	/* BackEnd/backend.sch 84 */
			return
				BBOOL(BGl_backendzd2boundzd2checkz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1112)));
		}

	}



/* backend-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2boundzd2checkzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_11, bool_t BgL_vz00_12)
	{
		{	/* BackEnd/backend.sch 85 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_11))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_12), BUNSPEC);
		}

	}



/* &backend-bound-check-set! */
	obj_t BGl_z62backendzd2boundzd2checkzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1113, obj_t BgL_oz00_1114, obj_t BgL_vz00_1115)
	{
		{	/* BackEnd/backend.sch 85 */
			return
				BGl_backendzd2boundzd2checkzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1114), CBOOL(BgL_vz00_1115));
		}

	}



/* backend-pregisters */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2pregisterszd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_13)
	{
		{	/* BackEnd/backend.sch 86 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_13))->BgL_pregistersz00);
		}

	}



/* &backend-pregisters */
	obj_t BGl_z62backendzd2pregisterszb0zzbackend_backendz00(obj_t
		BgL_envz00_1116, obj_t BgL_oz00_1117)
	{
		{	/* BackEnd/backend.sch 86 */
			return
				BGl_backendzd2pregisterszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1117));
		}

	}



/* backend-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2pregisterszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_14, obj_t BgL_vz00_15)
	{
		{	/* BackEnd/backend.sch 87 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_14))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_15), BUNSPEC);
		}

	}



/* &backend-pregisters-set! */
	obj_t BGl_z62backendzd2pregisterszd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1118, obj_t BgL_oz00_1119, obj_t BgL_vz00_1120)
	{
		{	/* BackEnd/backend.sch 87 */
			return
				BGl_backendzd2pregisterszd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1119), BgL_vz00_1120);
		}

	}



/* backend-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2registerszd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_16)
	{
		{	/* BackEnd/backend.sch 88 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_16))->BgL_registersz00);
		}

	}



/* &backend-registers */
	obj_t BGl_z62backendzd2registerszb0zzbackend_backendz00(obj_t BgL_envz00_1121,
		obj_t BgL_oz00_1122)
	{
		{	/* BackEnd/backend.sch 88 */
			return
				BGl_backendzd2registerszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1122));
		}

	}



/* backend-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2registerszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_17, obj_t BgL_vz00_18)
	{
		{	/* BackEnd/backend.sch 89 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_17))->BgL_registersz00) =
				((obj_t) BgL_vz00_18), BUNSPEC);
		}

	}



/* &backend-registers-set! */
	obj_t BGl_z62backendzd2registerszd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1123, obj_t BgL_oz00_1124, obj_t BgL_vz00_1125)
	{
		{	/* BackEnd/backend.sch 89 */
			return
				BGl_backendzd2registerszd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1124), BgL_vz00_1125);
		}

	}



/* backend-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2requirezd2tailcz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_19)
	{
		{	/* BackEnd/backend.sch 90 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_19))->BgL_requirezd2tailczd2);
		}

	}



/* &backend-require-tailc */
	obj_t BGl_z62backendzd2requirezd2tailcz62zzbackend_backendz00(obj_t
		BgL_envz00_1126, obj_t BgL_oz00_1127)
	{
		{	/* BackEnd/backend.sch 90 */
			return
				BBOOL(BGl_backendzd2requirezd2tailcz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1127)));
		}

	}



/* backend-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2requirezd2tailczd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_20, bool_t BgL_vz00_21)
	{
		{	/* BackEnd/backend.sch 91 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_20))->
					BgL_requirezd2tailczd2) = ((bool_t) BgL_vz00_21), BUNSPEC);
		}

	}



/* &backend-require-tailc-set! */
	obj_t BGl_z62backendzd2requirezd2tailczd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1128, obj_t BgL_oz00_1129, obj_t BgL_vz00_1130)
	{
		{	/* BackEnd/backend.sch 91 */
			return
				BGl_backendzd2requirezd2tailczd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1129), CBOOL(BgL_vz00_1130));
		}

	}



/* backend-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2tvectorzd2descrzd2supportzd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_22)
	{
		{	/* BackEnd/backend.sch 92 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_22))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &backend-tvector-descr-support */
	obj_t BGl_z62backendzd2tvectorzd2descrzd2supportzb0zzbackend_backendz00(obj_t
		BgL_envz00_1131, obj_t BgL_oz00_1132)
	{
		{	/* BackEnd/backend.sch 92 */
			return
				BBOOL(BGl_backendzd2tvectorzd2descrzd2supportzd2zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1132)));
		}

	}



/* backend-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_23, bool_t BgL_vz00_24)
	{
		{	/* BackEnd/backend.sch 93 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_23))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &backend-tvector-descr-support-set! */
	obj_t
		BGl_z62backendzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_backendz00
		(obj_t BgL_envz00_1133, obj_t BgL_oz00_1134, obj_t BgL_vz00_1135)
	{
		{	/* BackEnd/backend.sch 93 */
			return
				BGl_backendzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1134), CBOOL(BgL_vz00_1135));
		}

	}



/* backend-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2pragmazd2supportz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_25)
	{
		{	/* BackEnd/backend.sch 94 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_25))->BgL_pragmazd2supportzd2);
		}

	}



/* &backend-pragma-support */
	obj_t BGl_z62backendzd2pragmazd2supportz62zzbackend_backendz00(obj_t
		BgL_envz00_1136, obj_t BgL_oz00_1137)
	{
		{	/* BackEnd/backend.sch 94 */
			return
				BBOOL(BGl_backendzd2pragmazd2supportz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1137)));
		}

	}



/* backend-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2pragmazd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_26, bool_t BgL_vz00_27)
	{
		{	/* BackEnd/backend.sch 95 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_26))->
					BgL_pragmazd2supportzd2) = ((bool_t) BgL_vz00_27), BUNSPEC);
		}

	}



/* &backend-pragma-support-set! */
	obj_t BGl_z62backendzd2pragmazd2supportzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1138, obj_t BgL_oz00_1139, obj_t BgL_vz00_1140)
	{
		{	/* BackEnd/backend.sch 95 */
			return
				BGl_backendzd2pragmazd2supportzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1139), CBOOL(BgL_vz00_1140));
		}

	}



/* backend-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2debugzd2supportz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_28)
	{
		{	/* BackEnd/backend.sch 96 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_28))->BgL_debugzd2supportzd2);
		}

	}



/* &backend-debug-support */
	obj_t BGl_z62backendzd2debugzd2supportz62zzbackend_backendz00(obj_t
		BgL_envz00_1141, obj_t BgL_oz00_1142)
	{
		{	/* BackEnd/backend.sch 96 */
			return
				BGl_backendzd2debugzd2supportz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1142));
		}

	}



/* backend-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2debugzd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* BackEnd/backend.sch 97 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_29))->
					BgL_debugzd2supportzd2) = ((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &backend-debug-support-set! */
	obj_t BGl_z62backendzd2debugzd2supportzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1143, obj_t BgL_oz00_1144, obj_t BgL_vz00_1145)
	{
		{	/* BackEnd/backend.sch 97 */
			return
				BGl_backendzd2debugzd2supportzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1144), BgL_vz00_1145);
		}

	}



/* backend-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2foreignzd2clausezd2supportzd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_31)
	{
		{	/* BackEnd/backend.sch 98 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_31))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &backend-foreign-clause-support */
	obj_t BGl_z62backendzd2foreignzd2clausezd2supportzb0zzbackend_backendz00(obj_t
		BgL_envz00_1146, obj_t BgL_oz00_1147)
	{
		{	/* BackEnd/backend.sch 98 */
			return
				BGl_backendzd2foreignzd2clausezd2supportzd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1147));
		}

	}



/* backend-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* BackEnd/backend.sch 99 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_32))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &backend-foreign-clause-support-set! */
	obj_t
		BGl_z62backendzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_backendz00
		(obj_t BgL_envz00_1148, obj_t BgL_oz00_1149, obj_t BgL_vz00_1150)
	{
		{	/* BackEnd/backend.sch 99 */
			return
				BGl_backendzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_backendz00
				(((BgL_backendz00_bglt) BgL_oz00_1149), BgL_vz00_1150);
		}

	}



/* backend-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2tracezd2supportz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_34)
	{
		{	/* BackEnd/backend.sch 100 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_34))->BgL_tracezd2supportzd2);
		}

	}



/* &backend-trace-support */
	obj_t BGl_z62backendzd2tracezd2supportz62zzbackend_backendz00(obj_t
		BgL_envz00_1151, obj_t BgL_oz00_1152)
	{
		{	/* BackEnd/backend.sch 100 */
			return
				BBOOL(BGl_backendzd2tracezd2supportz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1152)));
		}

	}



/* backend-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2tracezd2supportzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_35, bool_t BgL_vz00_36)
	{
		{	/* BackEnd/backend.sch 101 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_35))->
					BgL_tracezd2supportzd2) = ((bool_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &backend-trace-support-set! */
	obj_t BGl_z62backendzd2tracezd2supportzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1153, obj_t BgL_oz00_1154, obj_t BgL_vz00_1155)
	{
		{	/* BackEnd/backend.sch 101 */
			return
				BGl_backendzd2tracezd2supportzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1154), CBOOL(BgL_vz00_1155));
		}

	}



/* backend-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2typedzd2eqz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_37)
	{
		{	/* BackEnd/backend.sch 102 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_37))->BgL_typedzd2eqzd2);
		}

	}



/* &backend-typed-eq */
	obj_t BGl_z62backendzd2typedzd2eqz62zzbackend_backendz00(obj_t
		BgL_envz00_1156, obj_t BgL_oz00_1157)
	{
		{	/* BackEnd/backend.sch 102 */
			return
				BBOOL(BGl_backendzd2typedzd2eqz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1157)));
		}

	}



/* backend-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typedzd2eqzd2setz12zc0zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_38, bool_t BgL_vz00_39)
	{
		{	/* BackEnd/backend.sch 103 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_38))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &backend-typed-eq-set! */
	obj_t BGl_z62backendzd2typedzd2eqzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1158, obj_t BgL_oz00_1159, obj_t BgL_vz00_1160)
	{
		{	/* BackEnd/backend.sch 103 */
			return
				BGl_backendzd2typedzd2eqzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1159), CBOOL(BgL_vz00_1160));
		}

	}



/* backend-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2foreignzd2closurez00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_40)
	{
		{	/* BackEnd/backend.sch 104 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_40))->
				BgL_foreignzd2closurezd2);
		}

	}



/* &backend-foreign-closure */
	obj_t BGl_z62backendzd2foreignzd2closurez62zzbackend_backendz00(obj_t
		BgL_envz00_1161, obj_t BgL_oz00_1162)
	{
		{	/* BackEnd/backend.sch 104 */
			return
				BBOOL(BGl_backendzd2foreignzd2closurez00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1162)));
		}

	}



/* backend-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2foreignzd2closurezd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_41, bool_t BgL_vz00_42)
	{
		{	/* BackEnd/backend.sch 105 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_41))->
					BgL_foreignzd2closurezd2) = ((bool_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &backend-foreign-closure-set! */
	obj_t BGl_z62backendzd2foreignzd2closurezd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1163, obj_t BgL_oz00_1164, obj_t BgL_vz00_1165)
	{
		{	/* BackEnd/backend.sch 105 */
			return
				BGl_backendzd2foreignzd2closurezd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1164), CBOOL(BgL_vz00_1165));
		}

	}



/* backend-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2removezd2emptyzd2letzd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_43)
	{
		{	/* BackEnd/backend.sch 106 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_43))->
				BgL_removezd2emptyzd2letz00);
		}

	}



/* &backend-remove-empty-let */
	obj_t BGl_z62backendzd2removezd2emptyzd2letzb0zzbackend_backendz00(obj_t
		BgL_envz00_1166, obj_t BgL_oz00_1167)
	{
		{	/* BackEnd/backend.sch 106 */
			return
				BBOOL(BGl_backendzd2removezd2emptyzd2letzd2zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1167)));
		}

	}



/* backend-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2removezd2emptyzd2letzd2setz12z12zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_44, bool_t BgL_vz00_45)
	{
		{	/* BackEnd/backend.sch 107 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_44))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &backend-remove-empty-let-set! */
	obj_t
		BGl_z62backendzd2removezd2emptyzd2letzd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1168, obj_t BgL_oz00_1169, obj_t BgL_vz00_1170)
	{
		{	/* BackEnd/backend.sch 107 */
			return
				BGl_backendzd2removezd2emptyzd2letzd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1169), CBOOL(BgL_vz00_1170));
		}

	}



/* backend-effect+ */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2effectzb2z60zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_46)
	{
		{	/* BackEnd/backend.sch 108 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_46))->BgL_effectzb2zb2);
		}

	}



/* &backend-effect+ */
	obj_t BGl_z62backendzd2effectzb2z02zzbackend_backendz00(obj_t BgL_envz00_1171,
		obj_t BgL_oz00_1172)
	{
		{	/* BackEnd/backend.sch 108 */
			return
				BBOOL(BGl_backendzd2effectzb2z60zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1172)));
		}

	}



/* backend-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2effectzb2zd2setz12za0zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_47, bool_t BgL_vz00_48)
	{
		{	/* BackEnd/backend.sch 109 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_47))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &backend-effect+-set! */
	obj_t BGl_z62backendzd2effectzb2zd2setz12zc2zzbackend_backendz00(obj_t
		BgL_envz00_1173, obj_t BgL_oz00_1174, obj_t BgL_vz00_1175)
	{
		{	/* BackEnd/backend.sch 109 */
			return
				BGl_backendzd2effectzb2zd2setz12za0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1174), CBOOL(BgL_vz00_1175));
		}

	}



/* backend-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2qualifiedzd2typesz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_49)
	{
		{	/* BackEnd/backend.sch 110 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_49))->
				BgL_qualifiedzd2typeszd2);
		}

	}



/* &backend-qualified-types */
	obj_t BGl_z62backendzd2qualifiedzd2typesz62zzbackend_backendz00(obj_t
		BgL_envz00_1176, obj_t BgL_oz00_1177)
	{
		{	/* BackEnd/backend.sch 110 */
			return
				BBOOL(BGl_backendzd2qualifiedzd2typesz00zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1177)));
		}

	}



/* backend-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2qualifiedzd2typeszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_50, bool_t BgL_vz00_51)
	{
		{	/* BackEnd/backend.sch 111 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_50))->
					BgL_qualifiedzd2typeszd2) = ((bool_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &backend-qualified-types-set! */
	obj_t BGl_z62backendzd2qualifiedzd2typeszd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1178, obj_t BgL_oz00_1179, obj_t BgL_vz00_1180)
	{
		{	/* BackEnd/backend.sch 111 */
			return
				BGl_backendzd2qualifiedzd2typeszd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1179), CBOOL(BgL_vz00_1180));
		}

	}



/* backend-callcc */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2callcczd2zzbackend_backendz00(BgL_backendz00_bglt BgL_oz00_52)
	{
		{	/* BackEnd/backend.sch 112 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_52))->BgL_callccz00);
		}

	}



/* &backend-callcc */
	obj_t BGl_z62backendzd2callcczb0zzbackend_backendz00(obj_t BgL_envz00_1181,
		obj_t BgL_oz00_1182)
	{
		{	/* BackEnd/backend.sch 112 */
			return
				BBOOL(BGl_backendzd2callcczd2zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1182)));
		}

	}



/* backend-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2callcczd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_53, bool_t BgL_vz00_54)
	{
		{	/* BackEnd/backend.sch 113 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_53))->BgL_callccz00) =
				((bool_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &backend-callcc-set! */
	obj_t BGl_z62backendzd2callcczd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1183, obj_t BgL_oz00_1184, obj_t BgL_vz00_1185)
	{
		{	/* BackEnd/backend.sch 113 */
			return
				BGl_backendzd2callcczd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1184), CBOOL(BgL_vz00_1185));
		}

	}



/* backend-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2heapzd2compatiblez00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_55)
	{
		{	/* BackEnd/backend.sch 114 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_55))->
				BgL_heapzd2compatiblezd2);
		}

	}



/* &backend-heap-compatible */
	obj_t BGl_z62backendzd2heapzd2compatiblez62zzbackend_backendz00(obj_t
		BgL_envz00_1186, obj_t BgL_oz00_1187)
	{
		{	/* BackEnd/backend.sch 114 */
			return
				BGl_backendzd2heapzd2compatiblez00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1187));
		}

	}



/* backend-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2heapzd2compatiblezd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* BackEnd/backend.sch 115 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_56))->
					BgL_heapzd2compatiblezd2) = ((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &backend-heap-compatible-set! */
	obj_t BGl_z62backendzd2heapzd2compatiblezd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1188, obj_t BgL_oz00_1189, obj_t BgL_vz00_1190)
	{
		{	/* BackEnd/backend.sch 115 */
			return
				BGl_backendzd2heapzd2compatiblezd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1189), BgL_vz00_1190);
		}

	}



/* backend-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2heapzd2suffixz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_58)
	{
		{	/* BackEnd/backend.sch 116 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_58))->BgL_heapzd2suffixzd2);
		}

	}



/* &backend-heap-suffix */
	obj_t BGl_z62backendzd2heapzd2suffixz62zzbackend_backendz00(obj_t
		BgL_envz00_1191, obj_t BgL_oz00_1192)
	{
		{	/* BackEnd/backend.sch 116 */
			return
				BGl_backendzd2heapzd2suffixz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1192));
		}

	}



/* backend-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2heapzd2suffixzd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* BackEnd/backend.sch 117 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_59))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &backend-heap-suffix-set! */
	obj_t BGl_z62backendzd2heapzd2suffixzd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1193, obj_t BgL_oz00_1194, obj_t BgL_vz00_1195)
	{
		{	/* BackEnd/backend.sch 117 */
			return
				BGl_backendzd2heapzd2suffixzd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1194), BgL_vz00_1195);
		}

	}



/* backend-typed */
	BGL_EXPORTED_DEF bool_t
		BGl_backendzd2typedzd2zzbackend_backendz00(BgL_backendz00_bglt BgL_oz00_61)
	{
		{	/* BackEnd/backend.sch 118 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_61))->BgL_typedz00);
		}

	}



/* &backend-typed */
	obj_t BGl_z62backendzd2typedzb0zzbackend_backendz00(obj_t BgL_envz00_1196,
		obj_t BgL_oz00_1197)
	{
		{	/* BackEnd/backend.sch 118 */
			return
				BBOOL(BGl_backendzd2typedzd2zzbackend_backendz00(
					((BgL_backendz00_bglt) BgL_oz00_1197)));
		}

	}



/* backend-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typedzd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_62, bool_t BgL_vz00_63)
	{
		{	/* BackEnd/backend.sch 119 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_62))->BgL_typedz00) =
				((bool_t) BgL_vz00_63), BUNSPEC);
		}

	}



/* &backend-typed-set! */
	obj_t BGl_z62backendzd2typedzd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1198, obj_t BgL_oz00_1199, obj_t BgL_vz00_1200)
	{
		{	/* BackEnd/backend.sch 119 */
			return
				BGl_backendzd2typedzd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1199), CBOOL(BgL_vz00_1200));
		}

	}



/* backend-types */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typeszd2zzbackend_backendz00(BgL_backendz00_bglt BgL_oz00_64)
	{
		{	/* BackEnd/backend.sch 120 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_64))->BgL_typesz00);
		}

	}



/* &backend-types */
	obj_t BGl_z62backendzd2typeszb0zzbackend_backendz00(obj_t BgL_envz00_1201,
		obj_t BgL_oz00_1202)
	{
		{	/* BackEnd/backend.sch 120 */
			return
				BGl_backendzd2typeszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1202));
		}

	}



/* backend-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2typeszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_65, obj_t BgL_vz00_66)
	{
		{	/* BackEnd/backend.sch 121 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_65))->BgL_typesz00) =
				((obj_t) BgL_vz00_66), BUNSPEC);
		}

	}



/* &backend-types-set! */
	obj_t BGl_z62backendzd2typeszd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1203, obj_t BgL_oz00_1204, obj_t BgL_vz00_1205)
	{
		{	/* BackEnd/backend.sch 121 */
			return
				BGl_backendzd2typeszd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1204), BgL_vz00_1205);
		}

	}



/* backend-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2functionszd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_67)
	{
		{	/* BackEnd/backend.sch 122 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_67))->BgL_functionsz00);
		}

	}



/* &backend-functions */
	obj_t BGl_z62backendzd2functionszb0zzbackend_backendz00(obj_t BgL_envz00_1206,
		obj_t BgL_oz00_1207)
	{
		{	/* BackEnd/backend.sch 122 */
			return
				BGl_backendzd2functionszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1207));
		}

	}



/* backend-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2functionszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_68, obj_t BgL_vz00_69)
	{
		{	/* BackEnd/backend.sch 123 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_68))->BgL_functionsz00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &backend-functions-set! */
	obj_t BGl_z62backendzd2functionszd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1208, obj_t BgL_oz00_1209, obj_t BgL_vz00_1210)
	{
		{	/* BackEnd/backend.sch 123 */
			return
				BGl_backendzd2functionszd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1209), BgL_vz00_1210);
		}

	}



/* backend-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2variableszd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_70)
	{
		{	/* BackEnd/backend.sch 124 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_70))->BgL_variablesz00);
		}

	}



/* &backend-variables */
	obj_t BGl_z62backendzd2variableszb0zzbackend_backendz00(obj_t BgL_envz00_1211,
		obj_t BgL_oz00_1212)
	{
		{	/* BackEnd/backend.sch 124 */
			return
				BGl_backendzd2variableszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1212));
		}

	}



/* backend-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2variableszd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_71, obj_t BgL_vz00_72)
	{
		{	/* BackEnd/backend.sch 125 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_71))->BgL_variablesz00) =
				((obj_t) BgL_vz00_72), BUNSPEC);
		}

	}



/* &backend-variables-set! */
	obj_t BGl_z62backendzd2variableszd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1213, obj_t BgL_oz00_1214, obj_t BgL_vz00_1215)
	{
		{	/* BackEnd/backend.sch 125 */
			return
				BGl_backendzd2variableszd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1214), BgL_vz00_1215);
		}

	}



/* backend-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2typesz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_73)
	{
		{	/* BackEnd/backend.sch 126 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_73))->BgL_externzd2typeszd2);
		}

	}



/* &backend-extern-types */
	obj_t BGl_z62backendzd2externzd2typesz62zzbackend_backendz00(obj_t
		BgL_envz00_1216, obj_t BgL_oz00_1217)
	{
		{	/* BackEnd/backend.sch 126 */
			return
				BGl_backendzd2externzd2typesz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1217));
		}

	}



/* backend-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2typeszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_74, obj_t BgL_vz00_75)
	{
		{	/* BackEnd/backend.sch 127 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_74))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_75), BUNSPEC);
		}

	}



/* &backend-extern-types-set! */
	obj_t BGl_z62backendzd2externzd2typeszd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1218, obj_t BgL_oz00_1219, obj_t BgL_vz00_1220)
	{
		{	/* BackEnd/backend.sch 127 */
			return
				BGl_backendzd2externzd2typeszd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1219), BgL_vz00_1220);
		}

	}



/* backend-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2functionsz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_76)
	{
		{	/* BackEnd/backend.sch 128 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_76))->
				BgL_externzd2functionszd2);
		}

	}



/* &backend-extern-functions */
	obj_t BGl_z62backendzd2externzd2functionsz62zzbackend_backendz00(obj_t
		BgL_envz00_1221, obj_t BgL_oz00_1222)
	{
		{	/* BackEnd/backend.sch 128 */
			return
				BGl_backendzd2externzd2functionsz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1222));
		}

	}



/* backend-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2functionszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_77, obj_t BgL_vz00_78)
	{
		{	/* BackEnd/backend.sch 129 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_77))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &backend-extern-functions-set! */
	obj_t
		BGl_z62backendzd2externzd2functionszd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1223, obj_t BgL_oz00_1224, obj_t BgL_vz00_1225)
	{
		{	/* BackEnd/backend.sch 129 */
			return
				BGl_backendzd2externzd2functionszd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1224), BgL_vz00_1225);
		}

	}



/* backend-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2variablesz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_79)
	{
		{	/* BackEnd/backend.sch 130 */
			return
				(((BgL_backendz00_bglt) COBJECT(BgL_oz00_79))->
				BgL_externzd2variableszd2);
		}

	}



/* &backend-extern-variables */
	obj_t BGl_z62backendzd2externzd2variablesz62zzbackend_backendz00(obj_t
		BgL_envz00_1226, obj_t BgL_oz00_1227)
	{
		{	/* BackEnd/backend.sch 130 */
			return
				BGl_backendzd2externzd2variablesz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1227));
		}

	}



/* backend-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2externzd2variableszd2setz12zc0zzbackend_backendz00
		(BgL_backendz00_bglt BgL_oz00_80, obj_t BgL_vz00_81)
	{
		{	/* BackEnd/backend.sch 131 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_80))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_81), BUNSPEC);
		}

	}



/* &backend-extern-variables-set! */
	obj_t
		BGl_z62backendzd2externzd2variableszd2setz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1228, obj_t BgL_oz00_1229, obj_t BgL_vz00_1230)
	{
		{	/* BackEnd/backend.sch 131 */
			return
				BGl_backendzd2externzd2variableszd2setz12zc0zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1229), BgL_vz00_1230);
		}

	}



/* backend-name */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2namezd2zzbackend_backendz00(BgL_backendz00_bglt BgL_oz00_82)
	{
		{	/* BackEnd/backend.sch 132 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_82))->BgL_namez00);
		}

	}



/* &backend-name */
	obj_t BGl_z62backendzd2namezb0zzbackend_backendz00(obj_t BgL_envz00_1231,
		obj_t BgL_oz00_1232)
	{
		{	/* BackEnd/backend.sch 132 */
			return
				BGl_backendzd2namezd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1232));
		}

	}



/* backend-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2namezd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_83, obj_t BgL_vz00_84)
	{
		{	/* BackEnd/backend.sch 133 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_83))->BgL_namez00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &backend-name-set! */
	obj_t BGl_z62backendzd2namezd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1233, obj_t BgL_oz00_1234, obj_t BgL_vz00_1235)
	{
		{	/* BackEnd/backend.sch 133 */
			return
				BGl_backendzd2namezd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1234), BgL_vz00_1235);
		}

	}



/* backend-srfi0 */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2srfi0zd2zzbackend_backendz00(BgL_backendz00_bglt BgL_oz00_85)
	{
		{	/* BackEnd/backend.sch 134 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_85))->BgL_srfi0z00);
		}

	}



/* &backend-srfi0 */
	obj_t BGl_z62backendzd2srfi0zb0zzbackend_backendz00(obj_t BgL_envz00_1236,
		obj_t BgL_oz00_1237)
	{
		{	/* BackEnd/backend.sch 134 */
			return
				BGl_backendzd2srfi0zd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1237));
		}

	}



/* backend-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2srfi0zd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_86, obj_t BgL_vz00_87)
	{
		{	/* BackEnd/backend.sch 135 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_86))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &backend-srfi0-set! */
	obj_t BGl_z62backendzd2srfi0zd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1238, obj_t BgL_oz00_1239, obj_t BgL_vz00_1240)
	{
		{	/* BackEnd/backend.sch 135 */
			return
				BGl_backendzd2srfi0zd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1239), BgL_vz00_1240);
		}

	}



/* backend-language */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2languagezd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_88)
	{
		{	/* BackEnd/backend.sch 136 */
			return (((BgL_backendz00_bglt) COBJECT(BgL_oz00_88))->BgL_languagez00);
		}

	}



/* &backend-language */
	obj_t BGl_z62backendzd2languagezb0zzbackend_backendz00(obj_t BgL_envz00_1241,
		obj_t BgL_oz00_1242)
	{
		{	/* BackEnd/backend.sch 136 */
			return
				BGl_backendzd2languagezd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1242));
		}

	}



/* backend-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2languagezd2setz12z12zzbackend_backendz00(BgL_backendz00_bglt
		BgL_oz00_89, obj_t BgL_vz00_90)
	{
		{	/* BackEnd/backend.sch 137 */
			return
				((((BgL_backendz00_bglt) COBJECT(BgL_oz00_89))->BgL_languagez00) =
				((obj_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &backend-language-set! */
	obj_t BGl_z62backendzd2languagezd2setz12z70zzbackend_backendz00(obj_t
		BgL_envz00_1243, obj_t BgL_oz00_1244, obj_t BgL_vz00_1245)
	{
		{	/* BackEnd/backend.sch 137 */
			return
				BGl_backendzd2languagezd2setz12z12zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_oz00_1244), BgL_vz00_1245);
		}

	}



/* set-backend! */
	BGL_EXPORTED_DEF obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t
		BgL_languagez00_91)
	{
		{	/* BackEnd/backend.scm 76 */
			{	/* BackEnd/backend.scm 77 */
				obj_t BgL_cz00_176;

				BgL_cz00_176 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_languagez00_91,
					BGl_za2backendsza2z00zzbackend_backendz00);
				if (PAIRP(BgL_cz00_176))
					{	/* BackEnd/backend.scm 80 */
						obj_t BgL_fun1147z00_178;

						BgL_fun1147z00_178 = CDR(BgL_cz00_176);
						return (BGl_za2thezd2backendza2zd2zzbackend_backendz00 =
							PROCEDURE_ENTRY(BgL_fun1147z00_178) (BgL_fun1147z00_178, BEOA),
							BUNSPEC);
					}
				else
					{	/* BackEnd/backend.scm 78 */
						return
							BGl_errorz00zz__errorz00(BGl_string1738z00zzbackend_backendz00,
							BGl_string1739z00zzbackend_backendz00, BgL_languagez00_91);
					}
			}
		}

	}



/* &set-backend! */
	obj_t BGl_z62setzd2backendz12za2zzbackend_backendz00(obj_t BgL_envz00_1246,
		obj_t BgL_languagez00_1247)
	{
		{	/* BackEnd/backend.scm 76 */
			return BGl_setzd2backendz12zc0zzbackend_backendz00(BgL_languagez00_1247);
		}

	}



/* the-backend */
	BGL_EXPORTED_DEF obj_t BGl_thezd2backendzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 85 */
			return BGl_za2thezd2backendza2zd2zzbackend_backendz00;
		}

	}



/* &the-backend */
	obj_t BGl_z62thezd2backendzb0zzbackend_backendz00(obj_t BgL_envz00_1248)
	{
		{	/* BackEnd/backend.scm 85 */
			return BGl_thezd2backendzd2zzbackend_backendz00();
		}

	}



/* register-backend! */
	BGL_EXPORTED_DEF obj_t BGl_registerzd2backendz12zc0zzbackend_backendz00(obj_t
		BgL_idz00_92, obj_t BgL_builderz00_93)
	{
		{	/* BackEnd/backend.scm 96 */
			{	/* BackEnd/backend.scm 97 */
				obj_t BgL_arg1155z00_693;

				BgL_arg1155z00_693 = MAKE_YOUNG_PAIR(BgL_idz00_92, BgL_builderz00_93);
				return (BGl_za2backendsza2z00zzbackend_backendz00 =
					MAKE_YOUNG_PAIR(BgL_arg1155z00_693,
						BGl_za2backendsza2z00zzbackend_backendz00), BUNSPEC);
			}
		}

	}



/* &register-backend! */
	obj_t BGl_z62registerzd2backendz12za2zzbackend_backendz00(obj_t
		BgL_envz00_1249, obj_t BgL_idz00_1250, obj_t BgL_builderz00_1251)
	{
		{	/* BackEnd/backend.scm 96 */
			return
				BGl_registerzd2backendz12zc0zzbackend_backendz00(BgL_idz00_1250,
				BgL_builderz00_1251);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			{	/* BackEnd/backend.scm 21 */
				obj_t BgL_arg1166z00_182;
				obj_t BgL_arg1167z00_183;

				{	/* BackEnd/backend.scm 21 */
					obj_t BgL_v1112z00_189;

					BgL_v1112z00_189 = create_vector(((long) 29));
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1172z00_190;

						BgL_arg1172z00_190 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									0)), BGl_proc1742z00zzbackend_backendz00,
							BGl_proc1741z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1740z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 0), BgL_arg1172z00_190);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1186z00_203;

						BgL_arg1186z00_203 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									2)), BGl_proc1745z00zzbackend_backendz00,
							BGl_proc1744z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1743z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 1), BgL_arg1186z00_203);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1201z00_216;

						BgL_arg1201z00_216 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									3)), BGl_proc1748z00zzbackend_backendz00,
							BGl_proc1747z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1746z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 2), BgL_arg1201z00_216);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1221z00_229;

						BgL_arg1221z00_229 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									5)), BGl_proc1751z00zzbackend_backendz00,
							BGl_proc1750z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1749z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 3), BgL_arg1221z00_229);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1232z00_242;

						BgL_arg1232z00_242 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									7)), BGl_proc1754z00zzbackend_backendz00,
							BGl_proc1753z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1752z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 4), BgL_arg1232z00_242);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1247z00_255;

						BgL_arg1247z00_255 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									8)), BGl_proc1757z00zzbackend_backendz00,
							BGl_proc1756z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1755z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 5), BgL_arg1247z00_255);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1258z00_268;

						BgL_arg1258z00_268 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									9)), BGl_proc1760z00zzbackend_backendz00,
							BGl_proc1759z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1758z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 6), BgL_arg1258z00_268);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1274z00_281;

						BgL_arg1274z00_281 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									10)), BGl_proc1763z00zzbackend_backendz00,
							BGl_proc1762z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1761z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 7), BgL_arg1274z00_281);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1281z00_294;

						BgL_arg1281z00_294 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									11)), BGl_proc1766z00zzbackend_backendz00,
							BGl_proc1765z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1764z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 6)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 8), BgL_arg1281z00_294);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1289z00_307;

						BgL_arg1289z00_307 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									12)), BGl_proc1769z00zzbackend_backendz00,
							BGl_proc1768z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1767z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 9), BgL_arg1289z00_307);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1296z00_320;

						BgL_arg1296z00_320 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									14)), BGl_proc1772z00zzbackend_backendz00,
							BGl_proc1771z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1770z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 4)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 10), BgL_arg1296z00_320);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1303z00_333;

						BgL_arg1303z00_333 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									15)), BGl_proc1775z00zzbackend_backendz00,
							BGl_proc1774z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1773z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 1)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 11), BgL_arg1303z00_333);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1311z00_346;

						BgL_arg1311z00_346 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									16)), BGl_proc1778z00zzbackend_backendz00,
							BGl_proc1777z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1776z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 12), BgL_arg1311z00_346);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1319z00_359;

						BgL_arg1319z00_359 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									17)), BGl_proc1781z00zzbackend_backendz00,
							BGl_proc1780z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1779z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 13), BgL_arg1319z00_359);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1329z00_372;

						BgL_arg1329z00_372 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc1784z00zzbackend_backendz00,
							BGl_proc1783z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1782z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 14), BgL_arg1329z00_372);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1338z00_385;

						BgL_arg1338z00_385 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									19)), BGl_proc1787z00zzbackend_backendz00,
							BGl_proc1786z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1785z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 15), BgL_arg1338z00_385);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1348z00_398;

						BgL_arg1348z00_398 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc1790z00zzbackend_backendz00,
							BGl_proc1789z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1788z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 16), BgL_arg1348z00_398);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1361z00_411;

						BgL_arg1361z00_411 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									21)), BGl_proc1793z00zzbackend_backendz00,
							BGl_proc1792z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1791z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 17), BgL_arg1361z00_411);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1371z00_424;

						BgL_arg1371z00_424 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc1796z00zzbackend_backendz00,
							BGl_proc1795z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1794z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 18), BgL_arg1371z00_424);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1386z00_437;

						BgL_arg1386z00_437 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									23)), BGl_proc1799z00zzbackend_backendz00,
							BGl_proc1798z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1797z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 24)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 19), BgL_arg1386z00_437);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1417z00_450;

						BgL_arg1417z00_450 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc1802z00zzbackend_backendz00,
							BGl_proc1801z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1800z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 24)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 20), BgL_arg1417z00_450);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1441z00_463;

						BgL_arg1441z00_463 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc1805z00zzbackend_backendz00,
							BGl_proc1804z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1803z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 21), BgL_arg1441z00_463);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1461z00_476;

						BgL_arg1461z00_476 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc1808z00zzbackend_backendz00,
							BGl_proc1807z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1806z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 22), BgL_arg1461z00_476);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1474z00_489;

						BgL_arg1474z00_489 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									28)), BGl_proc1811z00zzbackend_backendz00,
							BGl_proc1810z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1809z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 23), BgL_arg1474z00_489);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1493z00_502;

						BgL_arg1493z00_502 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc1814z00zzbackend_backendz00,
							BGl_proc1813z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1812z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 24)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 24), BgL_arg1493z00_502);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1528z00_515;

						BgL_arg1528z00_515 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc1817z00zzbackend_backendz00,
							BGl_proc1816z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1815z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 24)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 25), BgL_arg1528z00_515);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1552z00_528;

						BgL_arg1552z00_528 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc1820z00zzbackend_backendz00,
							BGl_proc1819z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1818z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 26), BgL_arg1552z00_528);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1565z00_541;

						BgL_arg1565z00_541 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									32)), BGl_proc1823z00zzbackend_backendz00,
							BGl_proc1822z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1821z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 27), BgL_arg1565z00_541);
					}
					{	/* BackEnd/backend.scm 21 */
						obj_t BgL_arg1582z00_554;

						BgL_arg1582z00_554 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc1826z00zzbackend_backendz00,
							BGl_proc1825z00zzbackend_backendz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc1824z00zzbackend_backendz00,
							CNST_TABLE_REF(((long) 13)));
						VECTOR_SET(BgL_v1112z00_189, ((long) 28), BgL_arg1582z00_554);
					}
					BgL_arg1166z00_182 = BgL_v1112z00_189;
				}
				{	/* BackEnd/backend.scm 21 */
					obj_t BgL_v1113z00_567;

					BgL_v1113z00_567 = create_vector(((long) 0));
					BgL_arg1167z00_183 = BgL_v1113z00_567;
				}
				return (BGl_backendz00zzbackend_backendz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 34)),
						CNST_TABLE_REF(((long) 35)), BGl_objectz00zz__objectz00,
						((long) 40756), BFALSE, BGl_proc1828z00zzbackend_backendz00,
						BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
						BGl_proc1827z00zzbackend_backendz00, BFALSE, BgL_arg1166z00_182,
						BgL_arg1167z00_183), BUNSPEC);
		}}

	}



/* &<@anonymous:1170> */
	obj_t BGl_z62zc3z04anonymousza31170ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1341, obj_t BgL_new1048z00_1342)
	{
		{	/* BackEnd/backend.scm 21 */
			{
				BgL_backendz00_bglt BgL_auxz00_2079;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_new1048z00_1342)))->
						BgL_languagez00) = ((obj_t) CNST_TABLE_REF(((long) 36))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 36))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_namez00) =
					((obj_t) BGl_string1829z00zzbackend_backendz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1829z00zzbackend_backendz00), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 36))), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt)
									BgL_new1048z00_1342)))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_2079 = ((BgL_backendz00_bglt) BgL_new1048z00_1342);
				return ((obj_t) BgL_auxz00_2079);
			}
		}

	}



/* &lambda1168 */
	BgL_backendz00_bglt BGl_z62lambda1168z62zzbackend_backendz00(obj_t
		BgL_envz00_1343)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				BgL_backendz00_bglt BgL_new1047z00_1594;

				BgL_new1047z00_1594 =
					((BgL_backendz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_backendz00_bgl))));
				{	/* BackEnd/backend.scm 21 */
					long BgL_arg1169z00_1595;

					{	/* BackEnd/backend.scm 21 */
						long BgL_res1626z00_1596;

						BgL_res1626z00_1596 =
							BGL_CLASS_INDEX(BGl_backendz00zzbackend_backendz00);
						BgL_arg1169z00_1595 = BgL_res1626z00_1596;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1047z00_1594), BgL_arg1169z00_1595);
				}
				return BgL_new1047z00_1594;
			}
		}

	}



/* &<@anonymous:1592> */
	obj_t BGl_z62zc3z04anonymousza31592ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1344)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1591 */
	obj_t BGl_z62lambda1591z62zzbackend_backendz00(obj_t BgL_envz00_1345,
		obj_t BgL_oz00_1346, obj_t BgL_vz00_1347)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1598;

				BgL_vz00_1598 = CBOOL(BgL_vz00_1347);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1346)))->
						BgL_typedzd2funcallzd2) = ((bool_t) BgL_vz00_1598), BUNSPEC);
			}
		}

	}



/* &lambda1590 */
	obj_t BGl_z62lambda1590z62zzbackend_backendz00(obj_t BgL_envz00_1348,
		obj_t BgL_oz00_1349)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1349)))->BgL_typedzd2funcallzd2));
		}

	}



/* &<@anonymous:1581> */
	obj_t BGl_z62zc3z04anonymousza31581ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1350)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1580 */
	obj_t BGl_z62lambda1580z62zzbackend_backendz00(obj_t BgL_envz00_1351,
		obj_t BgL_oz00_1352, obj_t BgL_vz00_1353)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1601;

				BgL_vz00_1601 = CBOOL(BgL_vz00_1353);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1352)))->BgL_typezd2checkzd2) =
					((bool_t) BgL_vz00_1601), BUNSPEC);
			}
		}

	}



/* &lambda1579 */
	obj_t BGl_z62lambda1579z62zzbackend_backendz00(obj_t BgL_envz00_1354,
		obj_t BgL_oz00_1355)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1355)))->BgL_typezd2checkzd2));
		}

	}



/* &<@anonymous:1564> */
	obj_t BGl_z62zc3z04anonymousza31564ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1356)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1563 */
	obj_t BGl_z62lambda1563z62zzbackend_backendz00(obj_t BgL_envz00_1357,
		obj_t BgL_oz00_1358, obj_t BgL_vz00_1359)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1604;

				BgL_vz00_1604 = CBOOL(BgL_vz00_1359);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1358)))->BgL_boundzd2checkzd2) =
					((bool_t) BgL_vz00_1604), BUNSPEC);
			}
		}

	}



/* &lambda1562 */
	obj_t BGl_z62lambda1562z62zzbackend_backendz00(obj_t BgL_envz00_1360,
		obj_t BgL_oz00_1361)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1361)))->BgL_boundzd2checkzd2));
		}

	}



/* &<@anonymous:1543> */
	obj_t BGl_z62zc3z04anonymousza31543ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1362)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1542 */
	obj_t BGl_z62lambda1542z62zzbackend_backendz00(obj_t BgL_envz00_1363,
		obj_t BgL_oz00_1364, obj_t BgL_vz00_1365)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1364)))->BgL_pregistersz00) =
				((obj_t) ((obj_t) BgL_vz00_1365)), BUNSPEC);
		}

	}



/* &lambda1541 */
	obj_t BGl_z62lambda1541z62zzbackend_backendz00(obj_t BgL_envz00_1366,
		obj_t BgL_oz00_1367)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1367)))->BgL_pregistersz00);
		}

	}



/* &<@anonymous:1521> */
	obj_t BGl_z62zc3z04anonymousza31521ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1368)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1520 */
	obj_t BGl_z62lambda1520z62zzbackend_backendz00(obj_t BgL_envz00_1369,
		obj_t BgL_oz00_1370, obj_t BgL_vz00_1371)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1370)))->BgL_registersz00) =
				((obj_t) ((obj_t) BgL_vz00_1371)), BUNSPEC);
		}

	}



/* &lambda1519 */
	obj_t BGl_z62lambda1519z62zzbackend_backendz00(obj_t BgL_envz00_1372,
		obj_t BgL_oz00_1373)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1373)))->BgL_registersz00);
		}

	}



/* &<@anonymous:1492> */
	obj_t BGl_z62zc3z04anonymousza31492ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1374)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1491 */
	obj_t BGl_z62lambda1491z62zzbackend_backendz00(obj_t BgL_envz00_1375,
		obj_t BgL_oz00_1376, obj_t BgL_vz00_1377)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1613;

				BgL_vz00_1613 = CBOOL(BgL_vz00_1377);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1376)))->
						BgL_requirezd2tailczd2) = ((bool_t) BgL_vz00_1613), BUNSPEC);
			}
		}

	}



/* &lambda1490 */
	obj_t BGl_z62lambda1490z62zzbackend_backendz00(obj_t BgL_envz00_1378,
		obj_t BgL_oz00_1379)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1379)))->BgL_requirezd2tailczd2));
		}

	}



/* &<@anonymous:1468> */
	obj_t BGl_z62zc3z04anonymousza31468ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1380)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1467 */
	obj_t BGl_z62lambda1467z62zzbackend_backendz00(obj_t BgL_envz00_1381,
		obj_t BgL_oz00_1382, obj_t BgL_vz00_1383)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1616;

				BgL_vz00_1616 = CBOOL(BgL_vz00_1383);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1382)))->
						BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) BgL_vz00_1616), BUNSPEC);
			}
		}

	}



/* &lambda1466 */
	obj_t BGl_z62lambda1466z62zzbackend_backendz00(obj_t BgL_envz00_1384,
		obj_t BgL_oz00_1385)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1385)))->
					BgL_tvectorzd2descrzd2supportz00));
		}

	}



/* &<@anonymous:1452> */
	obj_t BGl_z62zc3z04anonymousza31452ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1386)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1451 */
	obj_t BGl_z62lambda1451z62zzbackend_backendz00(obj_t BgL_envz00_1387,
		obj_t BgL_oz00_1388, obj_t BgL_vz00_1389)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1619;

				BgL_vz00_1619 = CBOOL(BgL_vz00_1389);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1388)))->
						BgL_pragmazd2supportzd2) = ((bool_t) BgL_vz00_1619), BUNSPEC);
			}
		}

	}



/* &lambda1450 */
	obj_t BGl_z62lambda1450z62zzbackend_backendz00(obj_t BgL_envz00_1390,
		obj_t BgL_oz00_1391)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1391)))->
					BgL_pragmazd2supportzd2));
		}

	}



/* &<@anonymous:1425> */
	obj_t BGl_z62zc3z04anonymousza31425ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1392)
	{
		{	/* BackEnd/backend.scm 21 */
			return CNST_TABLE_REF(((long) 37));
		}

	}



/* &lambda1424 */
	obj_t BGl_z62lambda1424z62zzbackend_backendz00(obj_t BgL_envz00_1393,
		obj_t BgL_oz00_1394, obj_t BgL_vz00_1395)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1394)))->BgL_debugzd2supportzd2) =
				((obj_t) ((obj_t) BgL_vz00_1395)), BUNSPEC);
		}

	}



/* &lambda1423 */
	obj_t BGl_z62lambda1423z62zzbackend_backendz00(obj_t BgL_envz00_1396,
		obj_t BgL_oz00_1397)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1397)))->BgL_debugzd2supportzd2);
		}

	}



/* &<@anonymous:1397> */
	obj_t BGl_z62zc3z04anonymousza31397ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1398)
	{
		{	/* BackEnd/backend.scm 21 */
			return CNST_TABLE_REF(((long) 38));
		}

	}



/* &lambda1396 */
	obj_t BGl_z62lambda1396z62zzbackend_backendz00(obj_t BgL_envz00_1399,
		obj_t BgL_oz00_1400, obj_t BgL_vz00_1401)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1400)))->
					BgL_foreignzd2clausezd2supportz00) =
				((obj_t) ((obj_t) BgL_vz00_1401)), BUNSPEC);
		}

	}



/* &lambda1395 */
	obj_t BGl_z62lambda1395z62zzbackend_backendz00(obj_t BgL_envz00_1402,
		obj_t BgL_oz00_1403)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1403)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &<@anonymous:1385> */
	obj_t BGl_z62zc3z04anonymousza31385ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1404)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1384 */
	obj_t BGl_z62lambda1384z62zzbackend_backendz00(obj_t BgL_envz00_1405,
		obj_t BgL_oz00_1406, obj_t BgL_vz00_1407)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1628;

				BgL_vz00_1628 = CBOOL(BgL_vz00_1407);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1406)))->
						BgL_tracezd2supportzd2) = ((bool_t) BgL_vz00_1628), BUNSPEC);
			}
		}

	}



/* &lambda1383 */
	obj_t BGl_z62lambda1383z62zzbackend_backendz00(obj_t BgL_envz00_1408,
		obj_t BgL_oz00_1409)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1409)))->BgL_tracezd2supportzd2));
		}

	}



/* &<@anonymous:1370> */
	obj_t BGl_z62zc3z04anonymousza31370ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1410)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1369 */
	obj_t BGl_z62lambda1369z62zzbackend_backendz00(obj_t BgL_envz00_1411,
		obj_t BgL_oz00_1412, obj_t BgL_vz00_1413)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1631;

				BgL_vz00_1631 = CBOOL(BgL_vz00_1413);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1412)))->BgL_typedzd2eqzd2) =
					((bool_t) BgL_vz00_1631), BUNSPEC);
			}
		}

	}



/* &lambda1368 */
	obj_t BGl_z62lambda1368z62zzbackend_backendz00(obj_t BgL_envz00_1414,
		obj_t BgL_oz00_1415)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1415)))->BgL_typedzd2eqzd2));
		}

	}



/* &<@anonymous:1360> */
	obj_t BGl_z62zc3z04anonymousza31360ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1416)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1359 */
	obj_t BGl_z62lambda1359z62zzbackend_backendz00(obj_t BgL_envz00_1417,
		obj_t BgL_oz00_1418, obj_t BgL_vz00_1419)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1634;

				BgL_vz00_1634 = CBOOL(BgL_vz00_1419);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1418)))->
						BgL_foreignzd2closurezd2) = ((bool_t) BgL_vz00_1634), BUNSPEC);
			}
		}

	}



/* &lambda1358 */
	obj_t BGl_z62lambda1358z62zzbackend_backendz00(obj_t BgL_envz00_1420,
		obj_t BgL_oz00_1421)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1421)))->
					BgL_foreignzd2closurezd2));
		}

	}



/* &<@anonymous:1347> */
	obj_t BGl_z62zc3z04anonymousza31347ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1422)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1346 */
	obj_t BGl_z62lambda1346z62zzbackend_backendz00(obj_t BgL_envz00_1423,
		obj_t BgL_oz00_1424, obj_t BgL_vz00_1425)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1637;

				BgL_vz00_1637 = CBOOL(BgL_vz00_1425);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1424)))->
						BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_1637), BUNSPEC);
			}
		}

	}



/* &lambda1345 */
	obj_t BGl_z62lambda1345z62zzbackend_backendz00(obj_t BgL_envz00_1426,
		obj_t BgL_oz00_1427)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1427)))->
					BgL_removezd2emptyzd2letz00));
		}

	}



/* &<@anonymous:1337> */
	obj_t BGl_z62zc3z04anonymousza31337ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1428)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1336 */
	obj_t BGl_z62lambda1336z62zzbackend_backendz00(obj_t BgL_envz00_1429,
		obj_t BgL_oz00_1430, obj_t BgL_vz00_1431)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1640;

				BgL_vz00_1640 = CBOOL(BgL_vz00_1431);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1430)))->BgL_effectzb2zb2) =
					((bool_t) BgL_vz00_1640), BUNSPEC);
			}
		}

	}



/* &lambda1335 */
	obj_t BGl_z62lambda1335z62zzbackend_backendz00(obj_t BgL_envz00_1432,
		obj_t BgL_oz00_1433)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1433)))->BgL_effectzb2zb2));
		}

	}



/* &<@anonymous:1328> */
	obj_t BGl_z62zc3z04anonymousza31328ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1434)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1327 */
	obj_t BGl_z62lambda1327z62zzbackend_backendz00(obj_t BgL_envz00_1435,
		obj_t BgL_oz00_1436, obj_t BgL_vz00_1437)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1643;

				BgL_vz00_1643 = CBOOL(BgL_vz00_1437);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1436)))->
						BgL_qualifiedzd2typeszd2) = ((bool_t) BgL_vz00_1643), BUNSPEC);
			}
		}

	}



/* &lambda1326 */
	obj_t BGl_z62lambda1326z62zzbackend_backendz00(obj_t BgL_envz00_1438,
		obj_t BgL_oz00_1439)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1439)))->
					BgL_qualifiedzd2typeszd2));
		}

	}



/* &<@anonymous:1318> */
	obj_t BGl_z62zc3z04anonymousza31318ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1440)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 1));
		}

	}



/* &lambda1317 */
	obj_t BGl_z62lambda1317z62zzbackend_backendz00(obj_t BgL_envz00_1441,
		obj_t BgL_oz00_1442, obj_t BgL_vz00_1443)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1646;

				BgL_vz00_1646 = CBOOL(BgL_vz00_1443);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1442)))->BgL_callccz00) =
					((bool_t) BgL_vz00_1646), BUNSPEC);
			}
		}

	}



/* &lambda1316 */
	obj_t BGl_z62lambda1316z62zzbackend_backendz00(obj_t BgL_envz00_1444,
		obj_t BgL_oz00_1445)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1445)))->BgL_callccz00));
		}

	}



/* &<@anonymous:1310> */
	obj_t BGl_z62zc3z04anonymousza31310ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1446)
	{
		{	/* BackEnd/backend.scm 21 */
			return CNST_TABLE_REF(((long) 39));
		}

	}



/* &lambda1309 */
	obj_t BGl_z62lambda1309z62zzbackend_backendz00(obj_t BgL_envz00_1447,
		obj_t BgL_oz00_1448, obj_t BgL_vz00_1449)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1448)))->
					BgL_heapzd2compatiblezd2) =
				((obj_t) ((obj_t) BgL_vz00_1449)), BUNSPEC);
		}

	}



/* &lambda1308 */
	obj_t BGl_z62lambda1308z62zzbackend_backendz00(obj_t BgL_envz00_1450,
		obj_t BgL_oz00_1451)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1451)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &<@anonymous:1302> */
	obj_t BGl_z62zc3z04anonymousza31302ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1452)
	{
		{	/* BackEnd/backend.scm 21 */
			return BGl_string1830z00zzbackend_backendz00;
		}

	}



/* &lambda1301 */
	obj_t BGl_z62lambda1301z62zzbackend_backendz00(obj_t BgL_envz00_1453,
		obj_t BgL_oz00_1454, obj_t BgL_vz00_1455)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1454)))->BgL_heapzd2suffixzd2) =
				((obj_t) ((obj_t) BgL_vz00_1455)), BUNSPEC);
		}

	}



/* &lambda1300 */
	obj_t BGl_z62lambda1300z62zzbackend_backendz00(obj_t BgL_envz00_1456,
		obj_t BgL_oz00_1457)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1457)))->BgL_heapzd2suffixzd2);
		}

	}



/* &<@anonymous:1295> */
	obj_t BGl_z62zc3z04anonymousza31295ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1458)
	{
		{	/* BackEnd/backend.scm 21 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1294 */
	obj_t BGl_z62lambda1294z62zzbackend_backendz00(obj_t BgL_envz00_1459,
		obj_t BgL_oz00_1460, obj_t BgL_vz00_1461)
	{
		{	/* BackEnd/backend.scm 21 */
			{	/* BackEnd/backend.scm 21 */
				bool_t BgL_vz00_1655;

				BgL_vz00_1655 = CBOOL(BgL_vz00_1461);
				return
					((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_oz00_1460)))->BgL_typedz00) =
					((bool_t) BgL_vz00_1655), BUNSPEC);
			}
		}

	}



/* &lambda1293 */
	obj_t BGl_z62lambda1293z62zzbackend_backendz00(obj_t BgL_envz00_1462,
		obj_t BgL_oz00_1463)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				BBOOL(
				(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1463)))->BgL_typedz00));
		}

	}



/* &<@anonymous:1288> */
	obj_t BGl_z62zc3z04anonymousza31288ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1464)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1287 */
	obj_t BGl_z62lambda1287z62zzbackend_backendz00(obj_t BgL_envz00_1465,
		obj_t BgL_oz00_1466, obj_t BgL_vz00_1467)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1466)))->BgL_typesz00) =
				((obj_t) BgL_vz00_1467), BUNSPEC);
		}

	}



/* &lambda1286 */
	obj_t BGl_z62lambda1286z62zzbackend_backendz00(obj_t BgL_envz00_1468,
		obj_t BgL_oz00_1469)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1469)))->BgL_typesz00);
		}

	}



/* &<@anonymous:1280> */
	obj_t BGl_z62zc3z04anonymousza31280ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1470)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1279 */
	obj_t BGl_z62lambda1279z62zzbackend_backendz00(obj_t BgL_envz00_1471,
		obj_t BgL_oz00_1472, obj_t BgL_vz00_1473)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1472)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_1473), BUNSPEC);
		}

	}



/* &lambda1278 */
	obj_t BGl_z62lambda1278z62zzbackend_backendz00(obj_t BgL_envz00_1474,
		obj_t BgL_oz00_1475)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1475)))->BgL_functionsz00);
		}

	}



/* &<@anonymous:1273> */
	obj_t BGl_z62zc3z04anonymousza31273ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1476)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1272 */
	obj_t BGl_z62lambda1272z62zzbackend_backendz00(obj_t BgL_envz00_1477,
		obj_t BgL_oz00_1478, obj_t BgL_vz00_1479)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1478)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_1479), BUNSPEC);
		}

	}



/* &lambda1271 */
	obj_t BGl_z62lambda1271z62zzbackend_backendz00(obj_t BgL_envz00_1480,
		obj_t BgL_oz00_1481)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1481)))->BgL_variablesz00);
		}

	}



/* &<@anonymous:1256> */
	obj_t BGl_z62zc3z04anonymousza31256ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1482)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1255 */
	obj_t BGl_z62lambda1255z62zzbackend_backendz00(obj_t BgL_envz00_1483,
		obj_t BgL_oz00_1484, obj_t BgL_vz00_1485)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1484)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_1485), BUNSPEC);
		}

	}



/* &lambda1254 */
	obj_t BGl_z62lambda1254z62zzbackend_backendz00(obj_t BgL_envz00_1486,
		obj_t BgL_oz00_1487)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1487)))->BgL_externzd2typeszd2);
		}

	}



/* &<@anonymous:1246> */
	obj_t BGl_z62zc3z04anonymousza31246ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1488)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1245 */
	obj_t BGl_z62lambda1245z62zzbackend_backendz00(obj_t BgL_envz00_1489,
		obj_t BgL_oz00_1490, obj_t BgL_vz00_1491)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1490)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_1491), BUNSPEC);
		}

	}



/* &lambda1244 */
	obj_t BGl_z62lambda1244z62zzbackend_backendz00(obj_t BgL_envz00_1492,
		obj_t BgL_oz00_1493)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1493)))->BgL_externzd2functionszd2);
		}

	}



/* &<@anonymous:1230> */
	obj_t BGl_z62zc3z04anonymousza31230ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1494)
	{
		{	/* BackEnd/backend.scm 21 */
			return BNIL;
		}

	}



/* &lambda1229 */
	obj_t BGl_z62lambda1229z62zzbackend_backendz00(obj_t BgL_envz00_1495,
		obj_t BgL_oz00_1496, obj_t BgL_vz00_1497)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1496)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_1497), BUNSPEC);
		}

	}



/* &lambda1228 */
	obj_t BGl_z62lambda1228z62zzbackend_backendz00(obj_t BgL_envz00_1498,
		obj_t BgL_oz00_1499)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1499)))->BgL_externzd2variableszd2);
		}

	}



/* &<@anonymous:1219> */
	obj_t BGl_z62zc3z04anonymousza31219ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1500)
	{
		{	/* BackEnd/backend.scm 21 */
			return BGl_string1831z00zzbackend_backendz00;
		}

	}



/* &lambda1218 */
	obj_t BGl_z62lambda1218z62zzbackend_backendz00(obj_t BgL_envz00_1501,
		obj_t BgL_oz00_1502, obj_t BgL_vz00_1503)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1502)))->BgL_namez00) = ((obj_t)
					((obj_t) BgL_vz00_1503)), BUNSPEC);
		}

	}



/* &lambda1217 */
	obj_t BGl_z62lambda1217z62zzbackend_backendz00(obj_t BgL_envz00_1504,
		obj_t BgL_oz00_1505)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1505)))->BgL_namez00);
		}

	}



/* &<@anonymous:1200> */
	obj_t BGl_z62zc3z04anonymousza31200ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1506)
	{
		{	/* BackEnd/backend.scm 21 */
			return CNST_TABLE_REF(((long) 40));
		}

	}



/* &lambda1199 */
	obj_t BGl_z62lambda1199z62zzbackend_backendz00(obj_t BgL_envz00_1507,
		obj_t BgL_oz00_1508, obj_t BgL_vz00_1509)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1508)))->BgL_srfi0z00) = ((obj_t)
					((obj_t) BgL_vz00_1509)), BUNSPEC);
		}

	}



/* &lambda1198 */
	obj_t BGl_z62lambda1198z62zzbackend_backendz00(obj_t BgL_envz00_1510,
		obj_t BgL_oz00_1511)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1511)))->BgL_srfi0z00);
		}

	}



/* &<@anonymous:1179> */
	obj_t BGl_z62zc3z04anonymousza31179ze3ze5zzbackend_backendz00(obj_t
		BgL_envz00_1512)
	{
		{	/* BackEnd/backend.scm 21 */
			return CNST_TABLE_REF(((long) 40));
		}

	}



/* &lambda1178 */
	obj_t BGl_z62lambda1178z62zzbackend_backendz00(obj_t BgL_envz00_1513,
		obj_t BgL_oz00_1514, obj_t BgL_vz00_1515)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_1514)))->BgL_languagez00) =
				((obj_t) ((obj_t) BgL_vz00_1515)), BUNSPEC);
		}

	}



/* &lambda1177 */
	obj_t BGl_z62lambda1177z62zzbackend_backendz00(obj_t BgL_envz00_1516,
		obj_t BgL_oz00_1517)
	{
		{	/* BackEnd/backend.scm 21 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_1517)))->BgL_languagez00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
				BGl_proc1832z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1833z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
				BGl_proc1834z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1835z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
				BGl_proc1836z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1837z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
				BGl_proc1838z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1839z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
				BGl_proc1840z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1841z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
				BGl_proc1842z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1843z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
				BGl_proc1844z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1845z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
				BGl_proc1846z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1847z00zzbackend_backendz00);
			BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
				BGl_proc1848z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1849z00zzbackend_backendz00);
			return
				BGl_registerzd2genericz12zc0zz__objectz00
				(BGl_backendzd2gczd2initzd2envzd2zzbackend_backendz00,
				BGl_proc1850z00zzbackend_backendz00, BGl_backendz00zzbackend_backendz00,
				BGl_string1851z00zzbackend_backendz00);
		}

	}



/* &backend-gc-init1132 */
	obj_t BGl_z62backendzd2gczd2init1132z62zzbackend_backendz00(obj_t
		BgL_envz00_1530, obj_t BgL_bz00_1531)
	{
		{	/* BackEnd/backend.scm 151 */
			return BUNSPEC;
		}

	}



/* &backend-check-inline1130 */
	obj_t BGl_z62backendzd2checkzd2inline1130z62zzbackend_backendz00(obj_t
		BgL_envz00_1532, obj_t BgL_bz00_1533)
	{
		{	/* BackEnd/backend.scm 145 */
			return BUNSPEC;
		}

	}



/* &backend-instr-reset-1128 */
	obj_t BGl_z62backendzd2instrzd2resetzd21128zb0zzbackend_backendz00(obj_t
		BgL_envz00_1534, obj_t BgL_bz00_1535, obj_t BgL_iz00_1536)
	{
		{	/* BackEnd/backend.scm 138 */
			{	/* BackEnd/backend.scm 140 */
				obj_t BgL_val1_1109z00_1681;
				obj_t BgL_val2_1110z00_1682;
				obj_t BgL_val3_1111z00_1683;

				BgL_val1_1109z00_1681 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_bz00_1535)))->BgL_registersz00);
				BgL_val2_1110z00_1682 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_bz00_1535)))->BgL_registersz00);
				BgL_val3_1111z00_1683 =
					(((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_bz00_1535)))->BgL_registersz00);
				{	/* BackEnd/backend.scm 140 */
					int BgL_res1627z00_1684;

					{	/* BackEnd/backend.scm 140 */
						int BgL_tmpz00_2335;

						BgL_tmpz00_2335 = (int) (((long) 4));
						BgL_res1627z00_1684 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_2335);
					} BgL_res1627z00_1684;
				}
				{	/* BackEnd/backend.scm 140 */
					int BgL_tmpz00_2338;

					BgL_tmpz00_2338 = (int) (((long) 1));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_2338, BgL_val1_1109z00_1681);
				}
				{	/* BackEnd/backend.scm 140 */
					int BgL_tmpz00_2341;

					BgL_tmpz00_2341 = (int) (((long) 2));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_2341, BgL_val2_1110z00_1682);
				}
				{	/* BackEnd/backend.scm 140 */
					int BgL_tmpz00_2344;

					BgL_tmpz00_2344 = (int) (((long) 3));
					BGL_MVALUES_VAL_SET(BgL_tmpz00_2344, BgL_val3_1111z00_1683);
				}
				return BNIL;
			}
		}

	}



/* &backend-link-objects1126 */
	obj_t BGl_z62backendzd2linkzd2objects1126z62zzbackend_backendz00(obj_t
		BgL_envz00_1537, obj_t BgL_bz00_1538, obj_t BgL_lz00_1539)
	{
		{	/* BackEnd/backend.scm 133 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 41)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1538)));
		}

	}



/* &backend-cnst-table-n1124 */
	obj_t BGl_z62backendzd2cnstzd2tablezd2n1124zb0zzbackend_backendz00(obj_t
		BgL_envz00_1540, obj_t BgL_bz00_1541, obj_t BgL_oz00_1542)
	{
		{	/* BackEnd/backend.scm 128 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 42)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1541)));
		}

	}



/* &backend-subtype?1122 */
	obj_t BGl_z62backendzd2subtypezf31122z43zzbackend_backendz00(obj_t
		BgL_envz00_1543, obj_t BgL_bz00_1544, obj_t BgL_t1z00_1545,
		obj_t BgL_t2z00_1546)
	{
		{	/* BackEnd/backend.scm 123 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 43)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1544)));
		}

	}



/* &backend-link1120 */
	obj_t BGl_z62backendzd2link1120zb0zzbackend_backendz00(obj_t BgL_envz00_1547,
		obj_t BgL_bz00_1548, obj_t BgL_resultz00_1549)
	{
		{	/* BackEnd/backend.scm 118 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 44)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1548)));
		}

	}



/* &backend-compile-func1118 */
	obj_t BGl_z62backendzd2compilezd2func1118z62zzbackend_backendz00(obj_t
		BgL_envz00_1550, obj_t BgL_bz00_1551)
	{
		{	/* BackEnd/backend.scm 113 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 45)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1551)));
		}

	}



/* &backend-compile1116 */
	obj_t BGl_z62backendzd2compile1116zb0zzbackend_backendz00(obj_t
		BgL_envz00_1552, obj_t BgL_bz00_1553)
	{
		{	/* BackEnd/backend.scm 108 */
			return
				BGl_errorz00zz__errorz00(CNST_TABLE_REF(((long) 46)),
				BGl_string1852z00zzbackend_backendz00,
				((obj_t) ((BgL_backendz00_bglt) BgL_bz00_1553)));
		}

	}



/* &backend-initialize!1114 */
	obj_t BGl_z62backendzd2initializa7ez121114z05zzbackend_backendz00(obj_t
		BgL_envz00_1554, obj_t BgL_bz00_1555)
	{
		{	/* BackEnd/backend.scm 102 */
			return BUNSPEC;
		}

	}



/* backend-initialize! */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2initializa7ez12z67zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_94)
	{
		{	/* BackEnd/backend.scm 102 */
			{	/* BackEnd/backend.scm 102 */
				obj_t BgL_method1115z00_621;

				{	/* BackEnd/backend.scm 102 */
					obj_t BgL_res1638z00_764;

					{	/* BackEnd/backend.scm 102 */
						long BgL_objzd2classzd2numz00_729;

						{	/* BackEnd/backend.scm 102 */
							long BgL_res1628z00_732;

							BgL_res1628z00_732 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_94));
							BgL_objzd2classzd2numz00_729 = BgL_res1628z00_732;
						}
						{	/* BackEnd/backend.scm 102 */
							obj_t BgL_arg1813z00_730;

							BgL_arg1813z00_730 =
								PROCEDURE_REF
								(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 102 */
								int BgL_offsetz00_734;

								BgL_offsetz00_734 = (int) (BgL_objzd2classzd2numz00_729);
								{	/* BackEnd/backend.scm 102 */
									long BgL_offsetz00_735;

									BgL_offsetz00_735 =
										((long) (BgL_offsetz00_734) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 102 */
										long BgL_modz00_736;

										BgL_modz00_736 =
											(BgL_offsetz00_735 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 102 */
											long BgL_restz00_738;

											BgL_restz00_738 =
												(BgL_offsetz00_735 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 102 */

												{	/* BackEnd/backend.scm 102 */
													obj_t BgL_bucketz00_740;

													BgL_bucketz00_740 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_730), BgL_modz00_736);
													BgL_res1638z00_764 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_740), BgL_restz00_738);
					}}}}}}}}
					BgL_method1115z00_621 = BgL_res1638z00_764;
				}
				return
					PROCEDURE_ENTRY(BgL_method1115z00_621) (BgL_method1115z00_621,
					((obj_t) BgL_bz00_94), BEOA);
			}
		}

	}



/* &backend-initialize! */
	obj_t BGl_z62backendzd2initializa7ez12z05zzbackend_backendz00(obj_t
		BgL_envz00_1518, obj_t BgL_bz00_1519)
	{
		{	/* BackEnd/backend.scm 102 */
			return
				BGl_backendzd2initializa7ez12z67zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1519));
		}

	}



/* backend-compile */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2compilezd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_95)
	{
		{	/* BackEnd/backend.scm 108 */
			{	/* BackEnd/backend.scm 108 */
				obj_t BgL_method1117z00_622;

				{	/* BackEnd/backend.scm 108 */
					obj_t BgL_res1649z00_801;

					{	/* BackEnd/backend.scm 108 */
						long BgL_objzd2classzd2numz00_766;

						{	/* BackEnd/backend.scm 108 */
							long BgL_res1639z00_769;

							BgL_res1639z00_769 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_95));
							BgL_objzd2classzd2numz00_766 = BgL_res1639z00_769;
						}
						{	/* BackEnd/backend.scm 108 */
							obj_t BgL_arg1813z00_767;

							BgL_arg1813z00_767 =
								PROCEDURE_REF
								(BGl_backendzd2compilezd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 108 */
								int BgL_offsetz00_771;

								BgL_offsetz00_771 = (int) (BgL_objzd2classzd2numz00_766);
								{	/* BackEnd/backend.scm 108 */
									long BgL_offsetz00_772;

									BgL_offsetz00_772 =
										((long) (BgL_offsetz00_771) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 108 */
										long BgL_modz00_773;

										BgL_modz00_773 =
											(BgL_offsetz00_772 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 108 */
											long BgL_restz00_775;

											BgL_restz00_775 =
												(BgL_offsetz00_772 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 108 */

												{	/* BackEnd/backend.scm 108 */
													obj_t BgL_bucketz00_777;

													BgL_bucketz00_777 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_767), BgL_modz00_773);
													BgL_res1649z00_801 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_777), BgL_restz00_775);
					}}}}}}}}
					BgL_method1117z00_622 = BgL_res1649z00_801;
				}
				return
					PROCEDURE_ENTRY(BgL_method1117z00_622) (BgL_method1117z00_622,
					((obj_t) BgL_bz00_95), BEOA);
			}
		}

	}



/* &backend-compile */
	obj_t BGl_z62backendzd2compilezb0zzbackend_backendz00(obj_t BgL_envz00_1556,
		obj_t BgL_bz00_1557)
	{
		{	/* BackEnd/backend.scm 108 */
			return
				BGl_backendzd2compilezd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1557));
		}

	}



/* backend-compile-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_96)
	{
		{	/* BackEnd/backend.scm 113 */
			{	/* BackEnd/backend.scm 113 */
				obj_t BgL_method1119z00_623;

				{	/* BackEnd/backend.scm 113 */
					obj_t BgL_res1660z00_838;

					{	/* BackEnd/backend.scm 113 */
						long BgL_objzd2classzd2numz00_803;

						{	/* BackEnd/backend.scm 113 */
							long BgL_res1650z00_806;

							BgL_res1650z00_806 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_96));
							BgL_objzd2classzd2numz00_803 = BgL_res1650z00_806;
						}
						{	/* BackEnd/backend.scm 113 */
							obj_t BgL_arg1813z00_804;

							BgL_arg1813z00_804 =
								PROCEDURE_REF
								(BGl_backendzd2compilezd2functionszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 113 */
								int BgL_offsetz00_808;

								BgL_offsetz00_808 = (int) (BgL_objzd2classzd2numz00_803);
								{	/* BackEnd/backend.scm 113 */
									long BgL_offsetz00_809;

									BgL_offsetz00_809 =
										((long) (BgL_offsetz00_808) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 113 */
										long BgL_modz00_810;

										BgL_modz00_810 =
											(BgL_offsetz00_809 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 113 */
											long BgL_restz00_812;

											BgL_restz00_812 =
												(BgL_offsetz00_809 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 113 */

												{	/* BackEnd/backend.scm 113 */
													obj_t BgL_bucketz00_814;

													BgL_bucketz00_814 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_804), BgL_modz00_810);
													BgL_res1660z00_838 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_814), BgL_restz00_812);
					}}}}}}}}
					BgL_method1119z00_623 = BgL_res1660z00_838;
				}
				return
					PROCEDURE_ENTRY(BgL_method1119z00_623) (BgL_method1119z00_623,
					((obj_t) BgL_bz00_96), BEOA);
			}
		}

	}



/* &backend-compile-functions */
	obj_t BGl_z62backendzd2compilezd2functionsz62zzbackend_backendz00(obj_t
		BgL_envz00_1558, obj_t BgL_bz00_1559)
	{
		{	/* BackEnd/backend.scm 113 */
			return
				BGl_backendzd2compilezd2functionsz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1559));
		}

	}



/* backend-link */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2linkzd2zzbackend_backendz00(BgL_backendz00_bglt BgL_bz00_97,
		obj_t BgL_resultz00_98)
	{
		{	/* BackEnd/backend.scm 118 */
			{	/* BackEnd/backend.scm 118 */
				obj_t BgL_method1121z00_624;

				{	/* BackEnd/backend.scm 118 */
					obj_t BgL_res1671z00_875;

					{	/* BackEnd/backend.scm 118 */
						long BgL_objzd2classzd2numz00_840;

						{	/* BackEnd/backend.scm 118 */
							long BgL_res1661z00_843;

							BgL_res1661z00_843 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_97));
							BgL_objzd2classzd2numz00_840 = BgL_res1661z00_843;
						}
						{	/* BackEnd/backend.scm 118 */
							obj_t BgL_arg1813z00_841;

							BgL_arg1813z00_841 =
								PROCEDURE_REF(BGl_backendzd2linkzd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 118 */
								int BgL_offsetz00_845;

								BgL_offsetz00_845 = (int) (BgL_objzd2classzd2numz00_840);
								{	/* BackEnd/backend.scm 118 */
									long BgL_offsetz00_846;

									BgL_offsetz00_846 =
										((long) (BgL_offsetz00_845) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 118 */
										long BgL_modz00_847;

										BgL_modz00_847 =
											(BgL_offsetz00_846 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 118 */
											long BgL_restz00_849;

											BgL_restz00_849 =
												(BgL_offsetz00_846 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 118 */

												{	/* BackEnd/backend.scm 118 */
													obj_t BgL_bucketz00_851;

													BgL_bucketz00_851 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_841), BgL_modz00_847);
													BgL_res1671z00_875 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_851), BgL_restz00_849);
					}}}}}}}}
					BgL_method1121z00_624 = BgL_res1671z00_875;
				}
				return
					PROCEDURE_ENTRY(BgL_method1121z00_624) (BgL_method1121z00_624,
					((obj_t) BgL_bz00_97), BgL_resultz00_98, BEOA);
			}
		}

	}



/* &backend-link */
	obj_t BGl_z62backendzd2linkzb0zzbackend_backendz00(obj_t BgL_envz00_1560,
		obj_t BgL_bz00_1561, obj_t BgL_resultz00_1562)
	{
		{	/* BackEnd/backend.scm 118 */
			return
				BGl_backendzd2linkzd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1561), BgL_resultz00_1562);
		}

	}



/* backend-subtype? */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2subtypezf3z21zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_99, obj_t BgL_t1z00_100, obj_t BgL_t2z00_101)
	{
		{	/* BackEnd/backend.scm 123 */
			{	/* BackEnd/backend.scm 123 */
				obj_t BgL_method1123z00_625;

				{	/* BackEnd/backend.scm 123 */
					obj_t BgL_res1682z00_912;

					{	/* BackEnd/backend.scm 123 */
						long BgL_objzd2classzd2numz00_877;

						{	/* BackEnd/backend.scm 123 */
							long BgL_res1672z00_880;

							BgL_res1672z00_880 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_99));
							BgL_objzd2classzd2numz00_877 = BgL_res1672z00_880;
						}
						{	/* BackEnd/backend.scm 123 */
							obj_t BgL_arg1813z00_878;

							BgL_arg1813z00_878 =
								PROCEDURE_REF
								(BGl_backendzd2subtypezf3zd2envzf3zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 123 */
								int BgL_offsetz00_882;

								BgL_offsetz00_882 = (int) (BgL_objzd2classzd2numz00_877);
								{	/* BackEnd/backend.scm 123 */
									long BgL_offsetz00_883;

									BgL_offsetz00_883 =
										((long) (BgL_offsetz00_882) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 123 */
										long BgL_modz00_884;

										BgL_modz00_884 =
											(BgL_offsetz00_883 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 123 */
											long BgL_restz00_886;

											BgL_restz00_886 =
												(BgL_offsetz00_883 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 123 */

												{	/* BackEnd/backend.scm 123 */
													obj_t BgL_bucketz00_888;

													BgL_bucketz00_888 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_878), BgL_modz00_884);
													BgL_res1682z00_912 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_888), BgL_restz00_886);
					}}}}}}}}
					BgL_method1123z00_625 = BgL_res1682z00_912;
				}
				return
					PROCEDURE_ENTRY(BgL_method1123z00_625) (BgL_method1123z00_625,
					((obj_t) BgL_bz00_99), BgL_t1z00_100, BgL_t2z00_101, BEOA);
			}
		}

	}



/* &backend-subtype? */
	obj_t BGl_z62backendzd2subtypezf3z43zzbackend_backendz00(obj_t
		BgL_envz00_1563, obj_t BgL_bz00_1564, obj_t BgL_t1z00_1565,
		obj_t BgL_t2z00_1566)
	{
		{	/* BackEnd/backend.scm 123 */
			return
				BGl_backendzd2subtypezf3z21zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1564), BgL_t1z00_1565, BgL_t2z00_1566);
		}

	}



/* backend-cnst-table-name */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_102, int BgL_oz00_103)
	{
		{	/* BackEnd/backend.scm 128 */
			{	/* BackEnd/backend.scm 128 */
				obj_t BgL_method1125z00_626;

				{	/* BackEnd/backend.scm 128 */
					obj_t BgL_res1693z00_949;

					{	/* BackEnd/backend.scm 128 */
						long BgL_objzd2classzd2numz00_914;

						{	/* BackEnd/backend.scm 128 */
							long BgL_res1683z00_917;

							BgL_res1683z00_917 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_102));
							BgL_objzd2classzd2numz00_914 = BgL_res1683z00_917;
						}
						{	/* BackEnd/backend.scm 128 */
							obj_t BgL_arg1813z00_915;

							BgL_arg1813z00_915 =
								PROCEDURE_REF
								(BGl_backendzd2cnstzd2tablezd2namezd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 128 */
								int BgL_offsetz00_919;

								BgL_offsetz00_919 = (int) (BgL_objzd2classzd2numz00_914);
								{	/* BackEnd/backend.scm 128 */
									long BgL_offsetz00_920;

									BgL_offsetz00_920 =
										((long) (BgL_offsetz00_919) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 128 */
										long BgL_modz00_921;

										BgL_modz00_921 =
											(BgL_offsetz00_920 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 128 */
											long BgL_restz00_923;

											BgL_restz00_923 =
												(BgL_offsetz00_920 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 128 */

												{	/* BackEnd/backend.scm 128 */
													obj_t BgL_bucketz00_925;

													BgL_bucketz00_925 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_915), BgL_modz00_921);
													BgL_res1693z00_949 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_925), BgL_restz00_923);
					}}}}}}}}
					BgL_method1125z00_626 = BgL_res1693z00_949;
				}
				return
					PROCEDURE_ENTRY(BgL_method1125z00_626) (BgL_method1125z00_626,
					((obj_t) BgL_bz00_102), BINT(BgL_oz00_103), BEOA);
			}
		}

	}



/* &backend-cnst-table-name */
	obj_t BGl_z62backendzd2cnstzd2tablezd2namezb0zzbackend_backendz00(obj_t
		BgL_envz00_1567, obj_t BgL_bz00_1568, obj_t BgL_oz00_1569)
	{
		{	/* BackEnd/backend.scm 128 */
			return
				BGl_backendzd2cnstzd2tablezd2namezd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1568), CINT(BgL_oz00_1569));
		}

	}



/* backend-link-objects */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_104, obj_t BgL_lz00_105)
	{
		{	/* BackEnd/backend.scm 133 */
			{	/* BackEnd/backend.scm 133 */
				obj_t BgL_method1127z00_627;

				{	/* BackEnd/backend.scm 133 */
					obj_t BgL_res1704z00_986;

					{	/* BackEnd/backend.scm 133 */
						long BgL_objzd2classzd2numz00_951;

						{	/* BackEnd/backend.scm 133 */
							long BgL_res1694z00_954;

							BgL_res1694z00_954 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_104));
							BgL_objzd2classzd2numz00_951 = BgL_res1694z00_954;
						}
						{	/* BackEnd/backend.scm 133 */
							obj_t BgL_arg1813z00_952;

							BgL_arg1813z00_952 =
								PROCEDURE_REF
								(BGl_backendzd2linkzd2objectszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 133 */
								int BgL_offsetz00_956;

								BgL_offsetz00_956 = (int) (BgL_objzd2classzd2numz00_951);
								{	/* BackEnd/backend.scm 133 */
									long BgL_offsetz00_957;

									BgL_offsetz00_957 =
										((long) (BgL_offsetz00_956) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 133 */
										long BgL_modz00_958;

										BgL_modz00_958 =
											(BgL_offsetz00_957 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 133 */
											long BgL_restz00_960;

											BgL_restz00_960 =
												(BgL_offsetz00_957 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 133 */

												{	/* BackEnd/backend.scm 133 */
													obj_t BgL_bucketz00_962;

													BgL_bucketz00_962 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_952), BgL_modz00_958);
													BgL_res1704z00_986 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_962), BgL_restz00_960);
					}}}}}}}}
					BgL_method1127z00_627 = BgL_res1704z00_986;
				}
				return
					PROCEDURE_ENTRY(BgL_method1127z00_627) (BgL_method1127z00_627,
					((obj_t) BgL_bz00_104), BgL_lz00_105, BEOA);
			}
		}

	}



/* &backend-link-objects */
	obj_t BGl_z62backendzd2linkzd2objectsz62zzbackend_backendz00(obj_t
		BgL_envz00_1570, obj_t BgL_bz00_1571, obj_t BgL_lz00_1572)
	{
		{	/* BackEnd/backend.scm 133 */
			return
				BGl_backendzd2linkzd2objectsz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1571), BgL_lz00_1572);
		}

	}



/* backend-instr-reset-registers */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00
		(BgL_backendz00_bglt BgL_bz00_106, obj_t BgL_iz00_107)
	{
		{	/* BackEnd/backend.scm 138 */
			{	/* BackEnd/backend.scm 138 */
				obj_t BgL_method1129z00_628;

				{	/* BackEnd/backend.scm 138 */
					obj_t BgL_res1715z00_1023;

					{	/* BackEnd/backend.scm 138 */
						long BgL_objzd2classzd2numz00_988;

						{	/* BackEnd/backend.scm 138 */
							long BgL_res1705z00_991;

							BgL_res1705z00_991 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_106));
							BgL_objzd2classzd2numz00_988 = BgL_res1705z00_991;
						}
						{	/* BackEnd/backend.scm 138 */
							obj_t BgL_arg1813z00_989;

							BgL_arg1813z00_989 =
								PROCEDURE_REF
								(BGl_backendzd2instrzd2resetzd2registerszd2envz00zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 138 */
								int BgL_offsetz00_993;

								BgL_offsetz00_993 = (int) (BgL_objzd2classzd2numz00_988);
								{	/* BackEnd/backend.scm 138 */
									long BgL_offsetz00_994;

									BgL_offsetz00_994 =
										((long) (BgL_offsetz00_993) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 138 */
										long BgL_modz00_995;

										BgL_modz00_995 =
											(BgL_offsetz00_994 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 138 */
											long BgL_restz00_997;

											BgL_restz00_997 =
												(BgL_offsetz00_994 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 138 */

												{	/* BackEnd/backend.scm 138 */
													obj_t BgL_bucketz00_999;

													BgL_bucketz00_999 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_989), BgL_modz00_995);
													BgL_res1715z00_1023 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_999), BgL_restz00_997);
					}}}}}}}}
					BgL_method1129z00_628 = BgL_res1715z00_1023;
				}
				return
					PROCEDURE_ENTRY(BgL_method1129z00_628) (BgL_method1129z00_628,
					((obj_t) BgL_bz00_106), BgL_iz00_107, BEOA);
			}
		}

	}



/* &backend-instr-reset-registers */
	obj_t BGl_z62backendzd2instrzd2resetzd2registerszb0zzbackend_backendz00(obj_t
		BgL_envz00_1573, obj_t BgL_bz00_1574, obj_t BgL_iz00_1575)
	{
		{	/* BackEnd/backend.scm 138 */
			return
				BGl_backendzd2instrzd2resetzd2registerszd2zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1574), BgL_iz00_1575);
		}

	}



/* backend-check-inlines */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_108)
	{
		{	/* BackEnd/backend.scm 145 */
			{	/* BackEnd/backend.scm 145 */
				obj_t BgL_method1131z00_629;

				{	/* BackEnd/backend.scm 145 */
					obj_t BgL_res1726z00_1060;

					{	/* BackEnd/backend.scm 145 */
						long BgL_objzd2classzd2numz00_1025;

						{	/* BackEnd/backend.scm 145 */
							long BgL_res1716z00_1028;

							BgL_res1716z00_1028 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_108));
							BgL_objzd2classzd2numz00_1025 = BgL_res1716z00_1028;
						}
						{	/* BackEnd/backend.scm 145 */
							obj_t BgL_arg1813z00_1026;

							BgL_arg1813z00_1026 =
								PROCEDURE_REF
								(BGl_backendzd2checkzd2inlineszd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 145 */
								int BgL_offsetz00_1030;

								BgL_offsetz00_1030 = (int) (BgL_objzd2classzd2numz00_1025);
								{	/* BackEnd/backend.scm 145 */
									long BgL_offsetz00_1031;

									BgL_offsetz00_1031 =
										((long) (BgL_offsetz00_1030) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 145 */
										long BgL_modz00_1032;

										BgL_modz00_1032 =
											(BgL_offsetz00_1031 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 145 */
											long BgL_restz00_1034;

											BgL_restz00_1034 =
												(BgL_offsetz00_1031 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 145 */

												{	/* BackEnd/backend.scm 145 */
													obj_t BgL_bucketz00_1036;

													BgL_bucketz00_1036 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1026), BgL_modz00_1032);
													BgL_res1726z00_1060 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1036), BgL_restz00_1034);
					}}}}}}}}
					BgL_method1131z00_629 = BgL_res1726z00_1060;
				}
				return
					PROCEDURE_ENTRY(BgL_method1131z00_629) (BgL_method1131z00_629,
					((obj_t) BgL_bz00_108), BEOA);
			}
		}

	}



/* &backend-check-inlines */
	obj_t BGl_z62backendzd2checkzd2inlinesz62zzbackend_backendz00(obj_t
		BgL_envz00_1576, obj_t BgL_bz00_1577)
	{
		{	/* BackEnd/backend.scm 145 */
			return
				BGl_backendzd2checkzd2inlinesz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1577));
		}

	}



/* backend-gc-init */
	BGL_EXPORTED_DEF obj_t
		BGl_backendzd2gczd2initz00zzbackend_backendz00(BgL_backendz00_bglt
		BgL_bz00_109)
	{
		{	/* BackEnd/backend.scm 151 */
			{	/* BackEnd/backend.scm 151 */
				obj_t BgL_method1133z00_630;

				{	/* BackEnd/backend.scm 151 */
					obj_t BgL_res1737z00_1097;

					{	/* BackEnd/backend.scm 151 */
						long BgL_objzd2classzd2numz00_1062;

						{	/* BackEnd/backend.scm 151 */
							long BgL_res1727z00_1065;

							BgL_res1727z00_1065 =
								BGL_OBJECT_CLASS_NUM(((BgL_objectz00_bglt) BgL_bz00_109));
							BgL_objzd2classzd2numz00_1062 = BgL_res1727z00_1065;
						}
						{	/* BackEnd/backend.scm 151 */
							obj_t BgL_arg1813z00_1063;

							BgL_arg1813z00_1063 =
								PROCEDURE_REF
								(BGl_backendzd2gczd2initzd2envzd2zzbackend_backendz00,
								(int) (((long) 1)));
							{	/* BackEnd/backend.scm 151 */
								int BgL_offsetz00_1067;

								BgL_offsetz00_1067 = (int) (BgL_objzd2classzd2numz00_1062);
								{	/* BackEnd/backend.scm 151 */
									long BgL_offsetz00_1068;

									BgL_offsetz00_1068 =
										((long) (BgL_offsetz00_1067) - OBJECT_TYPE);
									{	/* BackEnd/backend.scm 151 */
										long BgL_modz00_1069;

										BgL_modz00_1069 =
											(BgL_offsetz00_1068 >>
											(int) ((long) ((int) (((long) 4)))));
										{	/* BackEnd/backend.scm 151 */
											long BgL_restz00_1071;

											BgL_restz00_1071 =
												(BgL_offsetz00_1068 &
												(long) (
													(int) (
														((long) (
																(int) (
																	(((long) 1) <<
																		(int) (
																			(long) (
																				(int) (((long) 4))))))) -
															((long) 1)))));
											{	/* BackEnd/backend.scm 151 */

												{	/* BackEnd/backend.scm 151 */
													obj_t BgL_bucketz00_1073;

													BgL_bucketz00_1073 =
														VECTOR_REF(
														((obj_t) BgL_arg1813z00_1063), BgL_modz00_1069);
													BgL_res1737z00_1097 =
														VECTOR_REF(
														((obj_t) BgL_bucketz00_1073), BgL_restz00_1071);
					}}}}}}}}
					BgL_method1133z00_630 = BgL_res1737z00_1097;
				}
				return
					PROCEDURE_ENTRY(BgL_method1133z00_630) (BgL_method1133z00_630,
					((obj_t) BgL_bz00_109), BEOA);
			}
		}

	}



/* &backend-gc-init */
	obj_t BGl_z62backendzd2gczd2initz62zzbackend_backendz00(obj_t BgL_envz00_1578,
		obj_t BgL_bz00_1579)
	{
		{	/* BackEnd/backend.scm 151 */
			return
				BGl_backendzd2gczd2initz00zzbackend_backendz00(
				((BgL_backendz00_bglt) BgL_bz00_1579));
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_backendz00()
	{
		{	/* BackEnd/backend.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1853z00zzbackend_backendz00));
		}

	}

#ifdef __cplusplus
}
#endif
