/*===========================================================================*/
/*   (BackEnd/bvm.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent BackEnd/bvm.scm) */
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

	typedef struct BgL_bvmz00_bgl
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
	}             *BgL_bvmz00_bglt;


	static obj_t BGl_z62bvmzd2externzd2typeszd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2typedzd2eqzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt, bool_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2functionszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		obj_t);
	static obj_t BGl_z62bvmzd2externzd2variablesz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2registerszd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2effectzb2zd2setz12zc2zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2typedzd2funcallz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2qualifiedzd2typeszd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2variablesz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2heapzd2suffixz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2requirezd2tailczd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	static obj_t BGl_objectzd2initzd2zzbackend_bvmz00();
	BGL_EXPORTED_DECL bool_t BGl_bvmzf3zf3zzbackend_bvmz00(obj_t);
	static obj_t BGl_z62bvmzd2pregisterszb0zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2requirezd2tailcz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2tracezd2supportzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bvmzd2languagezd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2pragmazd2supportzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2typezd2checkz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2foreignzd2closurezd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t BGl_bvmzd2namezd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2typedzd2eqz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2externzd2functionsz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t
		BGl_z62bvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2variableszd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2functionsz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2callcczd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2languagezb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzbackend_bvmz00();
	static obj_t BGl_z62bvmzd2functionszd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2heapzd2suffixzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bvmzd2boundzd2checkzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2heapzd2compatiblezd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		obj_t);
	static obj_t BGl_z62bvmzd2debugzd2supportz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2heapzd2suffixzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2boundzd2checkzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_bvmz00
		(BgL_bvmz00_bglt, bool_t);
	static obj_t BGl_z62bvmzd2requirezd2tailczd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2foreignzd2clausezd2supportzd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62backendzd2initializa7ez12zd21172zd7zzbackend_bvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2functionszd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2foreignzd2closurez62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2typedzd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, bool_t);
	static obj_t BGl_z62zc3z04anonymousza31187ze3ze5zzbackend_bvmz00(obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2boundzd2checkz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2pragmazd2supportz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2tvectorzd2descrzd2supportzb0zzbackend_bvmz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzbackend_bvmz00();
	static obj_t BGl_z62bvmzd2registerszb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2typedzd2eqz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2registerszd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2pregisterszd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2namezd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2typesz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2effectzb2z60zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2functionszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2foreignzd2closurez00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2variableszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_bvmz00zzbackend_bvmz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_genericzd2addzd2methodz12z12zz__objectz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2languagezd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	static obj_t BGl_z62bvmzd2srfi0zb0zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2effectzb2zd2setz12za0zzbackend_bvmz00(BgL_bvmz00_bglt, bool_t);
	static obj_t
		BGl_z62bvmzd2externzd2functionszd2setz12za2zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2srfi0zd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	static obj_t BGl_z62bvmzd2variableszb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2foreignzd2closurezd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2typeszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bvmzd2srfi0zd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2pregisterszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	static obj_t BGl_z62bvmzd2removezd2emptyzd2letzb0zzbackend_bvmz00(obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2effectzb2z02zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2tracezd2supportz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzbackend_bvmz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2debugzd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		obj_t);
	static obj_t BGl_z62bvmzd2typezd2checkz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2debugzd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2removezd2emptyzd2letzd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2pragmazd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2heapzd2suffixz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2heapzd2compatiblezd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bvmzd2heapzd2compatiblez62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzbackend_bvmz00();
	static obj_t BGl_z62bvmzd2variableszd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzf3z91zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2registerszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2typedzd2funcallzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	static obj_t BGl_z62bvmzd2functionszb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzbackend_bvmz00();
	static obj_t BGl_z62bvmzd2typedzb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2typeszb0zzbackend_bvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2callcczd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t BGl_bvmzd2typedzd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static BgL_bvmz00_bglt BGl_z62bvmzd2nilzb0zzbackend_bvmz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_bvmzd2typeszd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2qualifiedzd2typesz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2heapzd2compatiblez00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2typezd2checkzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bvmzd2debugzd2supportzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	static obj_t BGl_z62bvmzd2namezd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2pregisterszd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2typedzd2eqzd2setz12za2zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2typedzd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2typedzd2funcallz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2typedzd2funcallzd2setz12za2zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_bvmz00
		(BgL_bvmz00_bglt, obj_t);
	static obj_t
		BGl_z62bvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_bvmz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62bvmzd2foreignzd2clausezd2supportzb0zzbackend_bvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2variableszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2qualifiedzd2typesz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_z62bvmzd2requirezd2tailcz62zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2typezd2checkzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt, bool_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2boundzd2checkz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	static BgL_bvmz00_bglt BGl_z62lambda1180z62zzbackend_bvmz00(obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2tracezd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL bool_t BGl_bvmzd2callcczd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	static obj_t BGl_cnstzd2initzd2zzbackend_bvmz00();
	static obj_t
		BGl_z62bvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzbackend_bvmz00();
	static obj_t
		BGl_z62bvmzd2externzd2variableszd2setz12za2zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_backendz00zzbackend_backendz00;
	static obj_t BGl_z62bvmzd2callcczb0zzbackend_bvmz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2pragmazd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	static obj_t BGl_z62bvmzd2srfi0zd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62bvmzd2typeszd2setz12z70zzbackend_bvmz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_bvmzd2tvectorzd2descrzd2supportzd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL BgL_bvmz00_bglt BGl_bvmzd2nilzd2zzbackend_bvmz00();
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2externzd2typeszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2languagezd2zzbackend_bvmz00(BgL_bvmz00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_bvmzd2tracezd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt,
		bool_t);
	static obj_t BGl_z62bvmzd2externzd2typesz62zzbackend_bvmz00(obj_t, obj_t);
	static obj_t BGl_z62bvmzd2namezb0zzbackend_bvmz00(obj_t, obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2tracezd2supportzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2traceza7d1203za7,
		BGl_z62bvmzd2tracezd2supportz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2functionszd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71204za7,
		BGl_z62bvmzd2externzd2functionszd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2callcczd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2callccza71205za7,
		BGl_z62bvmzd2callcczd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typeszd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typesza7d1206za7,
		BGl_z62bvmzd2typeszd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1193z00zzbackend_bvmz00,
		BgL_bgl_za762za7c3za704anonymo1207za7,
		BGl_z62zc3z04anonymousza31187ze3ze5zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1194z00zzbackend_bvmz00,
		BgL_bgl_za762lambda1180za7621208z00, BGl_z62lambda1180z62zzbackend_bvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1196z00zzbackend_bvmz00,
		BgL_bgl_za762backendza7d2ini1209z00,
		BGl_z62backendzd2initializa7ez12zd21172zd7zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2heapzd2compatiblezd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2heapza7d21210za7,
		BGl_z62bvmzd2heapzd2compatiblezd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2registerszd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2registe1211z00,
		BGl_z62bvmzd2registerszb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typedzd2funcallzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7d1212za7,
		BGl_z62bvmzd2typedzd2funcallz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2requirezd2tailczd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2require1213z00,
		BGl_z62bvmzd2requirezd2tailcz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2heapzd2suffixzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2heapza7d21214za7,
		BGl_z62bvmzd2heapzd2suffixz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2effectzb2zd2setz12zd2envz72zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2effectza71215za7,
		BGl_z62bvmzd2effectzb2zd2setz12zc2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2functionszd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2functio1216z00,
		BGl_z62bvmzd2functionszd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2debugzd2supportzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2debugza7d1217za7,
		BGl_z62bvmzd2debugzd2supportz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2pragmazd2supportzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2pragmaza71218za7,
		BGl_z62bvmzd2pragmazd2supportzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2pregisterszd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2pregist1219z00,
		BGl_z62bvmzd2pregisterszd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2foreignzd2closurezd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2foreign1220z00,
		BGl_z62bvmzd2foreignzd2closurez62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2pragmazd2supportzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2pragmaza71221za7,
		BGl_z62bvmzd2pragmazd2supportz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2qualifiedzd2typeszd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2qualifi1222z00,
		BGl_z62bvmzd2qualifiedzd2typeszd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2typedzd2eqzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7d1223za7,
		BGl_z62bvmzd2typedzd2eqz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2registerszd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2registe1224z00,
		BGl_z62bvmzd2registerszd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typedzd2funcallzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7d1225za7,
		BGl_z62bvmzd2typedzd2funcallzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2variableszd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2variabl1226z00,
		BGl_z62bvmzd2variableszb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2srfi0zd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2srfi0za7b1227za7,
		BGl_z62bvmzd2srfi0zb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2removezd2emptyzd2letzd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2removeza71228za7,
		BGl_z62bvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2variableszd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71229za7,
		BGl_z62bvmzd2externzd2variableszd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2tvectorzd2descrzd2supportzd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2tvector1230z00,
		BGl_z62bvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_bvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2variableszd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71231za7,
		BGl_z62bvmzd2externzd2variablesz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2functionszd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2functio1232z00,
		BGl_z62bvmzd2functionszb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2tvectorzd2descrzd2supportzd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2tvector1233z00,
		BGl_z62bvmzd2tvectorzd2descrzd2supportzb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2heapzd2suffixzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2heapza7d21234za7,
		BGl_z62bvmzd2heapzd2suffixzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2typeszd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71235za7,
		BGl_z62bvmzd2externzd2typesz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2effectzb2zd2envzb2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2effectza71236za7,
		BGl_z62bvmzd2effectzb2z02zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2functionszd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71237za7,
		BGl_z62bvmzd2externzd2functionsz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2typezd2checkzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typeza7d21238za7,
		BGl_z62bvmzd2typezd2checkz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1195z00zzbackend_bvmz00,
		BgL_bgl_string1195za700za7za7b1239za7, "", 0);
	      DEFINE_STRING(BGl_string1197z00zzbackend_bvmz00,
		BgL_bgl_string1197za700za7za7b1240za7, "backend-initialize!", 19);
	      DEFINE_STRING(BGl_string1198z00zzbackend_bvmz00,
		BgL_bgl_string1198za700za7za7b1241za7, "backend_bvm", 11);
	      DEFINE_STRING(BGl_string1199z00zzbackend_bvmz00,
		BgL_bgl_string1199za700za7za7b1242za7, "_ backend_bvm bvm ", 18);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2callcczd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2callccza71243za7,
		BGl_z62bvmzd2callcczb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2variableszd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2variabl1244z00,
		BGl_z62bvmzd2variableszd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2typeszd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typesza7b1245za7,
		BGl_z62bvmzd2typeszb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2foreignzd2closurezd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2foreign1246z00,
		BGl_z62bvmzd2foreignzd2closurezd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2boundzd2checkzd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2boundza7d1247za7,
		BGl_z62bvmzd2boundzd2checkz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2typedzd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7b1248za7,
		BGl_z62bvmzd2typedzb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2boundzd2checkzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2boundza7d1249za7,
		BGl_z62bvmzd2boundzd2checkzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2externzd2typeszd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2externza71250za7,
		BGl_z62bvmzd2externzd2typeszd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2namezd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2nameza7d21251za7,
		BGl_z62bvmzd2namezd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2nilzd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2nilza7b0za71252z00,
		BGl_z62bvmzd2nilzb0zzbackend_bvmz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2foreignzd2clausezd2supportzd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2foreign1253z00,
		BGl_z62bvmzd2foreignzd2clausezd2supportzb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2requirezd2tailczd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2require1254z00,
		BGl_z62bvmzd2requirezd2tailczd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2tracezd2supportzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2traceza7d1255za7,
		BGl_z62bvmzd2tracezd2supportzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2qualifiedzd2typeszd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2qualifi1256z00,
		BGl_z62bvmzd2qualifiedzd2typesz62zzbackend_bvmz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2namezd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2nameza7b01257za7, BGl_z62bvmzd2namezb0zzbackend_bvmz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2languagezd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2languag1258z00,
		BGl_z62bvmzd2languagezb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typedzd2eqzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7d1259za7,
		BGl_z62bvmzd2typedzd2eqzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzd2pregisterszd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2pregist1260z00,
		BGl_z62bvmzd2pregisterszb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2debugzd2supportzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2debugza7d1261za7,
		BGl_z62bvmzd2debugzd2supportzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_bvmzf3zd2envz21zzbackend_bvmz00,
		BgL_bgl_za762bvmza7f3za791za7za7ba1262za7, BGl_z62bvmzf3z91zzbackend_bvmz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typezd2checkzd2setz12zd2envz12zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typeza7d21263za7,
		BGl_z62bvmzd2typezd2checkzd2setz12za2zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2foreignzd2clausezd2supportzd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2foreign1264z00,
		BGl_z62bvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_bvmz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2removezd2emptyzd2letzd2envz00zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2removeza71265za7,
		BGl_z62bvmzd2removezd2emptyzd2letzb0zzbackend_bvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2typedzd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2typedza7d1266za7,
		BGl_z62bvmzd2typedzd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2languagezd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2languag1267z00,
		BGl_z62bvmzd2languagezd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2srfi0zd2setz12zd2envzc0zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2srfi0za7d1268za7,
		BGl_z62bvmzd2srfi0zd2setz12z70zzbackend_bvmz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_bvmzd2heapzd2compatiblezd2envzd2zzbackend_bvmz00,
		BgL_bgl_za762bvmza7d2heapza7d21269za7,
		BGl_z62bvmzd2heapzd2compatiblez62zzbackend_bvmz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_bvmz00zzbackend_bvmz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzbackend_bvmz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long
		BgL_checksumz00_656, char *BgL_fromz00_657)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzbackend_bvmz00))
				{
					BGl_requirezd2initializa7ationz75zzbackend_bvmz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzbackend_bvmz00();
					BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00();
					BGl_cnstzd2initzd2zzbackend_bvmz00();
					BGl_importedzd2moduleszd2initz00zzbackend_bvmz00();
					BGl_objectzd2initzd2zzbackend_bvmz00();
					BGl_methodzd2initzd2zzbackend_bvmz00();
					return BGl_toplevelzd2initzd2zzbackend_bvmz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "backend_bvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "backend_bvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"backend_bvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"backend_bvm");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			{	/* BackEnd/bvm.scm 15 */
				obj_t BgL_cportz00_638;

				{	/* BackEnd/bvm.scm 15 */
					obj_t BgL_stringz00_646;

					BgL_stringz00_646 = BGl_string1199z00zzbackend_bvmz00;
					{	/* BackEnd/bvm.scm 15 */
						obj_t BgL_startz00_647;

						BgL_startz00_647 = BINT(((long) 0));
						{	/* BackEnd/bvm.scm 15 */
							obj_t BgL_endz00_648;

							BgL_endz00_648 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_646)));
							{	/* BackEnd/bvm.scm 15 */

								BgL_cportz00_638 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_646, BgL_startz00_647, BgL_endz00_648);
				}}}}
				{
					long BgL_iz00_639;

					BgL_iz00_639 = ((long) 2);
				BgL_loopz00_640:
					if ((BgL_iz00_639 == ((long) -1)))
						{	/* BackEnd/bvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* BackEnd/bvm.scm 15 */
							{	/* BackEnd/bvm.scm 15 */
								obj_t BgL_arg1201z00_642;

								{	/* BackEnd/bvm.scm 15 */

									{	/* BackEnd/bvm.scm 15 */
										obj_t BgL_locationz00_644;

										BgL_locationz00_644 = BBOOL(((bool_t) 0));
										{	/* BackEnd/bvm.scm 15 */

											BgL_arg1201z00_642 =
												BGl_readz00zz__readerz00(BgL_cportz00_638,
												BgL_locationz00_644);
										}
									}
								}
								{	/* BackEnd/bvm.scm 15 */
									int BgL_tmpz00_681;

									BgL_tmpz00_681 = (int) (BgL_iz00_639);
									CNST_TABLE_SET(BgL_tmpz00_681, BgL_arg1201z00_642);
							}}
							{	/* BackEnd/bvm.scm 15 */
								int BgL_auxz00_645;

								BgL_auxz00_645 = (int) ((BgL_iz00_639 - ((long) 1)));
								{
									long BgL_iz00_686;

									BgL_iz00_686 = (long) (BgL_auxz00_645);
									BgL_iz00_639 = BgL_iz00_686;
									goto BgL_loopz00_640;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			return BUNSPEC;
		}

	}



/* bvm? */
	BGL_EXPORTED_DEF bool_t BGl_bvmzf3zf3zzbackend_bvmz00(obj_t BgL_objz00_3)
	{
		{	/* BackEnd/bvm.sch 78 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_3, BGl_bvmz00zzbackend_bvmz00);
		}

	}



/* &bvm? */
	obj_t BGl_z62bvmzf3z91zzbackend_bvmz00(obj_t BgL_envz00_480,
		obj_t BgL_objz00_481)
	{
		{	/* BackEnd/bvm.sch 78 */
			return BBOOL(BGl_bvmzf3zf3zzbackend_bvmz00(BgL_objz00_481));
		}

	}



/* bvm-nil */
	BGL_EXPORTED_DEF BgL_bvmz00_bglt BGl_bvmzd2nilzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.sch 79 */
			{	/* BackEnd/bvm.sch 79 */
				obj_t BgL_classz00_383;

				BgL_classz00_383 = BGl_bvmz00zzbackend_bvmz00;
				{	/* BackEnd/bvm.sch 79 */
					obj_t BgL__ortest_1106z00_384;

					BgL__ortest_1106z00_384 = BGL_CLASS_NIL(BgL_classz00_383);
					if (CBOOL(BgL__ortest_1106z00_384))
						{	/* BackEnd/bvm.sch 79 */
							return ((BgL_bvmz00_bglt) BgL__ortest_1106z00_384);
						}
					else
						{	/* BackEnd/bvm.sch 79 */
							return
								((BgL_bvmz00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_383));
						}
				}
			}
		}

	}



/* &bvm-nil */
	BgL_bvmz00_bglt BGl_z62bvmzd2nilzb0zzbackend_bvmz00(obj_t BgL_envz00_482)
	{
		{	/* BackEnd/bvm.sch 79 */
			return BGl_bvmzd2nilzd2zzbackend_bvmz00();
		}

	}



/* bvm-typed-funcall */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2typedzd2funcallz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_4)
	{
		{	/* BackEnd/bvm.sch 80 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_4)))->BgL_typedzd2funcallzd2);
		}

	}



/* &bvm-typed-funcall */
	obj_t BGl_z62bvmzd2typedzd2funcallz62zzbackend_bvmz00(obj_t BgL_envz00_483,
		obj_t BgL_oz00_484)
	{
		{	/* BackEnd/bvm.sch 80 */
			return
				BBOOL(BGl_bvmzd2typedzd2funcallz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_484)));
		}

	}



/* bvm-typed-funcall-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2typedzd2funcallzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_5, bool_t BgL_vz00_6)
	{
		{	/* BackEnd/bvm.sch 81 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_5)))->BgL_typedzd2funcallzd2) =
				((bool_t) BgL_vz00_6), BUNSPEC);
		}

	}



/* &bvm-typed-funcall-set! */
	obj_t BGl_z62bvmzd2typedzd2funcallzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_485, obj_t BgL_oz00_486, obj_t BgL_vz00_487)
	{
		{	/* BackEnd/bvm.sch 81 */
			return
				BGl_bvmzd2typedzd2funcallzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_486), CBOOL(BgL_vz00_487));
		}

	}



/* bvm-type-check */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2typezd2checkz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_7)
	{
		{	/* BackEnd/bvm.sch 82 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_7)))->BgL_typezd2checkzd2);
		}

	}



/* &bvm-type-check */
	obj_t BGl_z62bvmzd2typezd2checkz62zzbackend_bvmz00(obj_t BgL_envz00_488,
		obj_t BgL_oz00_489)
	{
		{	/* BackEnd/bvm.sch 82 */
			return
				BBOOL(BGl_bvmzd2typezd2checkz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_489)));
		}

	}



/* bvm-type-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2typezd2checkzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_8, bool_t BgL_vz00_9)
	{
		{	/* BackEnd/bvm.sch 83 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_8)))->BgL_typezd2checkzd2) =
				((bool_t) BgL_vz00_9), BUNSPEC);
		}

	}



/* &bvm-type-check-set! */
	obj_t BGl_z62bvmzd2typezd2checkzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_490, obj_t BgL_oz00_491, obj_t BgL_vz00_492)
	{
		{	/* BackEnd/bvm.sch 83 */
			return
				BGl_bvmzd2typezd2checkzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_491), CBOOL(BgL_vz00_492));
		}

	}



/* bvm-bound-check */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2boundzd2checkz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_10)
	{
		{	/* BackEnd/bvm.sch 84 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_10)))->BgL_boundzd2checkzd2);
		}

	}



/* &bvm-bound-check */
	obj_t BGl_z62bvmzd2boundzd2checkz62zzbackend_bvmz00(obj_t BgL_envz00_493,
		obj_t BgL_oz00_494)
	{
		{	/* BackEnd/bvm.sch 84 */
			return
				BBOOL(BGl_bvmzd2boundzd2checkz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_494)));
		}

	}



/* bvm-bound-check-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2boundzd2checkzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_11, bool_t BgL_vz00_12)
	{
		{	/* BackEnd/bvm.sch 85 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_11)))->BgL_boundzd2checkzd2) =
				((bool_t) BgL_vz00_12), BUNSPEC);
		}

	}



/* &bvm-bound-check-set! */
	obj_t BGl_z62bvmzd2boundzd2checkzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_495, obj_t BgL_oz00_496, obj_t BgL_vz00_497)
	{
		{	/* BackEnd/bvm.sch 85 */
			return
				BGl_bvmzd2boundzd2checkzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_496), CBOOL(BgL_vz00_497));
		}

	}



/* bvm-pregisters */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2pregisterszd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_13)
	{
		{	/* BackEnd/bvm.sch 86 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_13)))->BgL_pregistersz00);
		}

	}



/* &bvm-pregisters */
	obj_t BGl_z62bvmzd2pregisterszb0zzbackend_bvmz00(obj_t BgL_envz00_498,
		obj_t BgL_oz00_499)
	{
		{	/* BackEnd/bvm.sch 86 */
			return
				BGl_bvmzd2pregisterszd2zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_499));
		}

	}



/* bvm-pregisters-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2pregisterszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_14, obj_t BgL_vz00_15)
	{
		{	/* BackEnd/bvm.sch 87 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_14)))->BgL_pregistersz00) =
				((obj_t) BgL_vz00_15), BUNSPEC);
		}

	}



/* &bvm-pregisters-set! */
	obj_t BGl_z62bvmzd2pregisterszd2setz12z70zzbackend_bvmz00(obj_t
		BgL_envz00_500, obj_t BgL_oz00_501, obj_t BgL_vz00_502)
	{
		{	/* BackEnd/bvm.sch 87 */
			return
				BGl_bvmzd2pregisterszd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_501), BgL_vz00_502);
		}

	}



/* bvm-registers */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2registerszd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_16)
	{
		{	/* BackEnd/bvm.sch 88 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_16)))->BgL_registersz00);
		}

	}



/* &bvm-registers */
	obj_t BGl_z62bvmzd2registerszb0zzbackend_bvmz00(obj_t BgL_envz00_503,
		obj_t BgL_oz00_504)
	{
		{	/* BackEnd/bvm.sch 88 */
			return
				BGl_bvmzd2registerszd2zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_504));
		}

	}



/* bvm-registers-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2registerszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_17,
		obj_t BgL_vz00_18)
	{
		{	/* BackEnd/bvm.sch 89 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_17)))->BgL_registersz00) =
				((obj_t) BgL_vz00_18), BUNSPEC);
		}

	}



/* &bvm-registers-set! */
	obj_t BGl_z62bvmzd2registerszd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_505,
		obj_t BgL_oz00_506, obj_t BgL_vz00_507)
	{
		{	/* BackEnd/bvm.sch 89 */
			return
				BGl_bvmzd2registerszd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_506), BgL_vz00_507);
		}

	}



/* bvm-require-tailc */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2requirezd2tailcz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_19)
	{
		{	/* BackEnd/bvm.sch 90 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_19)))->BgL_requirezd2tailczd2);
		}

	}



/* &bvm-require-tailc */
	obj_t BGl_z62bvmzd2requirezd2tailcz62zzbackend_bvmz00(obj_t BgL_envz00_508,
		obj_t BgL_oz00_509)
	{
		{	/* BackEnd/bvm.sch 90 */
			return
				BBOOL(BGl_bvmzd2requirezd2tailcz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_509)));
		}

	}



/* bvm-require-tailc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2requirezd2tailczd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_20, bool_t BgL_vz00_21)
	{
		{	/* BackEnd/bvm.sch 91 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_20)))->BgL_requirezd2tailczd2) =
				((bool_t) BgL_vz00_21), BUNSPEC);
		}

	}



/* &bvm-require-tailc-set! */
	obj_t BGl_z62bvmzd2requirezd2tailczd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_510, obj_t BgL_oz00_511, obj_t BgL_vz00_512)
	{
		{	/* BackEnd/bvm.sch 91 */
			return
				BGl_bvmzd2requirezd2tailczd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_511), CBOOL(BgL_vz00_512));
		}

	}



/* bvm-tvector-descr-support */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2tvectorzd2descrzd2supportzd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_22)
	{
		{	/* BackEnd/bvm.sch 92 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_22)))->
				BgL_tvectorzd2descrzd2supportz00);
		}

	}



/* &bvm-tvector-descr-support */
	obj_t BGl_z62bvmzd2tvectorzd2descrzd2supportzb0zzbackend_bvmz00(obj_t
		BgL_envz00_513, obj_t BgL_oz00_514)
	{
		{	/* BackEnd/bvm.sch 92 */
			return
				BBOOL(BGl_bvmzd2tvectorzd2descrzd2supportzd2zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_514)));
		}

	}



/* bvm-tvector-descr-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_bvmz00
		(BgL_bvmz00_bglt BgL_oz00_23, bool_t BgL_vz00_24)
	{
		{	/* BackEnd/bvm.sch 93 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_23)))->
					BgL_tvectorzd2descrzd2supportz00) = ((bool_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &bvm-tvector-descr-support-set! */
	obj_t BGl_z62bvmzd2tvectorzd2descrzd2supportzd2setz12z70zzbackend_bvmz00(obj_t
		BgL_envz00_515, obj_t BgL_oz00_516, obj_t BgL_vz00_517)
	{
		{	/* BackEnd/bvm.sch 93 */
			return
				BGl_bvmzd2tvectorzd2descrzd2supportzd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_516), CBOOL(BgL_vz00_517));
		}

	}



/* bvm-pragma-support */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2pragmazd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_25)
	{
		{	/* BackEnd/bvm.sch 94 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_25)))->BgL_pragmazd2supportzd2);
		}

	}



/* &bvm-pragma-support */
	obj_t BGl_z62bvmzd2pragmazd2supportz62zzbackend_bvmz00(obj_t BgL_envz00_518,
		obj_t BgL_oz00_519)
	{
		{	/* BackEnd/bvm.sch 94 */
			return
				BBOOL(BGl_bvmzd2pragmazd2supportz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_519)));
		}

	}



/* bvm-pragma-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2pragmazd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_26, bool_t BgL_vz00_27)
	{
		{	/* BackEnd/bvm.sch 95 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_26)))->BgL_pragmazd2supportzd2) =
				((bool_t) BgL_vz00_27), BUNSPEC);
		}

	}



/* &bvm-pragma-support-set! */
	obj_t BGl_z62bvmzd2pragmazd2supportzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_520, obj_t BgL_oz00_521, obj_t BgL_vz00_522)
	{
		{	/* BackEnd/bvm.sch 95 */
			return
				BGl_bvmzd2pragmazd2supportzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_521), CBOOL(BgL_vz00_522));
		}

	}



/* bvm-debug-support */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2debugzd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_28)
	{
		{	/* BackEnd/bvm.sch 96 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_28)))->BgL_debugzd2supportzd2);
		}

	}



/* &bvm-debug-support */
	obj_t BGl_z62bvmzd2debugzd2supportz62zzbackend_bvmz00(obj_t BgL_envz00_523,
		obj_t BgL_oz00_524)
	{
		{	/* BackEnd/bvm.sch 96 */
			return
				BGl_bvmzd2debugzd2supportz00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_524));
		}

	}



/* bvm-debug-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2debugzd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* BackEnd/bvm.sch 97 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_29)))->BgL_debugzd2supportzd2) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &bvm-debug-support-set! */
	obj_t BGl_z62bvmzd2debugzd2supportzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_525, obj_t BgL_oz00_526, obj_t BgL_vz00_527)
	{
		{	/* BackEnd/bvm.sch 97 */
			return
				BGl_bvmzd2debugzd2supportzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_526), BgL_vz00_527);
		}

	}



/* bvm-foreign-clause-support */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2foreignzd2clausezd2supportzd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_31)
	{
		{	/* BackEnd/bvm.sch 98 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_31)))->
				BgL_foreignzd2clausezd2supportz00);
		}

	}



/* &bvm-foreign-clause-support */
	obj_t BGl_z62bvmzd2foreignzd2clausezd2supportzb0zzbackend_bvmz00(obj_t
		BgL_envz00_528, obj_t BgL_oz00_529)
	{
		{	/* BackEnd/bvm.sch 98 */
			return
				BGl_bvmzd2foreignzd2clausezd2supportzd2zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_529));
		}

	}



/* bvm-foreign-clause-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_bvmz00
		(BgL_bvmz00_bglt BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* BackEnd/bvm.sch 99 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_32)))->
					BgL_foreignzd2clausezd2supportz00) = ((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &bvm-foreign-clause-support-set! */
	obj_t
		BGl_z62bvmzd2foreignzd2clausezd2supportzd2setz12z70zzbackend_bvmz00(obj_t
		BgL_envz00_530, obj_t BgL_oz00_531, obj_t BgL_vz00_532)
	{
		{	/* BackEnd/bvm.sch 99 */
			return
				BGl_bvmzd2foreignzd2clausezd2supportzd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_531), BgL_vz00_532);
		}

	}



/* bvm-trace-support */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2tracezd2supportz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_34)
	{
		{	/* BackEnd/bvm.sch 100 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_34)))->BgL_tracezd2supportzd2);
		}

	}



/* &bvm-trace-support */
	obj_t BGl_z62bvmzd2tracezd2supportz62zzbackend_bvmz00(obj_t BgL_envz00_533,
		obj_t BgL_oz00_534)
	{
		{	/* BackEnd/bvm.sch 100 */
			return
				BBOOL(BGl_bvmzd2tracezd2supportz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_534)));
		}

	}



/* bvm-trace-support-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2tracezd2supportzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_35, bool_t BgL_vz00_36)
	{
		{	/* BackEnd/bvm.sch 101 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_35)))->BgL_tracezd2supportzd2) =
				((bool_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &bvm-trace-support-set! */
	obj_t BGl_z62bvmzd2tracezd2supportzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_535, obj_t BgL_oz00_536, obj_t BgL_vz00_537)
	{
		{	/* BackEnd/bvm.sch 101 */
			return
				BGl_bvmzd2tracezd2supportzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_536), CBOOL(BgL_vz00_537));
		}

	}



/* bvm-typed-eq */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2typedzd2eqz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_37)
	{
		{	/* BackEnd/bvm.sch 102 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_37)))->BgL_typedzd2eqzd2);
		}

	}



/* &bvm-typed-eq */
	obj_t BGl_z62bvmzd2typedzd2eqz62zzbackend_bvmz00(obj_t BgL_envz00_538,
		obj_t BgL_oz00_539)
	{
		{	/* BackEnd/bvm.sch 102 */
			return
				BBOOL(BGl_bvmzd2typedzd2eqz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_539)));
		}

	}



/* bvm-typed-eq-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2typedzd2eqzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_38, bool_t BgL_vz00_39)
	{
		{	/* BackEnd/bvm.sch 103 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_38)))->BgL_typedzd2eqzd2) =
				((bool_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &bvm-typed-eq-set! */
	obj_t BGl_z62bvmzd2typedzd2eqzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_540, obj_t BgL_oz00_541, obj_t BgL_vz00_542)
	{
		{	/* BackEnd/bvm.sch 103 */
			return
				BGl_bvmzd2typedzd2eqzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_541), CBOOL(BgL_vz00_542));
		}

	}



/* bvm-foreign-closure */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2foreignzd2closurez00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_40)
	{
		{	/* BackEnd/bvm.sch 104 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_40)))->BgL_foreignzd2closurezd2);
		}

	}



/* &bvm-foreign-closure */
	obj_t BGl_z62bvmzd2foreignzd2closurez62zzbackend_bvmz00(obj_t BgL_envz00_543,
		obj_t BgL_oz00_544)
	{
		{	/* BackEnd/bvm.sch 104 */
			return
				BBOOL(BGl_bvmzd2foreignzd2closurez00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_544)));
		}

	}



/* bvm-foreign-closure-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2foreignzd2closurezd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_41, bool_t BgL_vz00_42)
	{
		{	/* BackEnd/bvm.sch 105 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_41)))->BgL_foreignzd2closurezd2) =
				((bool_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &bvm-foreign-closure-set! */
	obj_t BGl_z62bvmzd2foreignzd2closurezd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_545, obj_t BgL_oz00_546, obj_t BgL_vz00_547)
	{
		{	/* BackEnd/bvm.sch 105 */
			return
				BGl_bvmzd2foreignzd2closurezd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_546), CBOOL(BgL_vz00_547));
		}

	}



/* bvm-remove-empty-let */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2removezd2emptyzd2letzd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_43)
	{
		{	/* BackEnd/bvm.sch 106 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_43)))->BgL_removezd2emptyzd2letz00);
		}

	}



/* &bvm-remove-empty-let */
	obj_t BGl_z62bvmzd2removezd2emptyzd2letzb0zzbackend_bvmz00(obj_t
		BgL_envz00_548, obj_t BgL_oz00_549)
	{
		{	/* BackEnd/bvm.sch 106 */
			return
				BBOOL(BGl_bvmzd2removezd2emptyzd2letzd2zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_549)));
		}

	}



/* bvm-remove-empty-let-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_44, bool_t BgL_vz00_45)
	{
		{	/* BackEnd/bvm.sch 107 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_44)))->
					BgL_removezd2emptyzd2letz00) = ((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &bvm-remove-empty-let-set! */
	obj_t BGl_z62bvmzd2removezd2emptyzd2letzd2setz12z70zzbackend_bvmz00(obj_t
		BgL_envz00_550, obj_t BgL_oz00_551, obj_t BgL_vz00_552)
	{
		{	/* BackEnd/bvm.sch 107 */
			return
				BGl_bvmzd2removezd2emptyzd2letzd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_551), CBOOL(BgL_vz00_552));
		}

	}



/* bvm-effect+ */
	BGL_EXPORTED_DEF bool_t BGl_bvmzd2effectzb2z60zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_46)
	{
		{	/* BackEnd/bvm.sch 108 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_46)))->BgL_effectzb2zb2);
		}

	}



/* &bvm-effect+ */
	obj_t BGl_z62bvmzd2effectzb2z02zzbackend_bvmz00(obj_t BgL_envz00_553,
		obj_t BgL_oz00_554)
	{
		{	/* BackEnd/bvm.sch 108 */
			return
				BBOOL(BGl_bvmzd2effectzb2z60zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_554)));
		}

	}



/* bvm-effect+-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2effectzb2zd2setz12za0zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_47,
		bool_t BgL_vz00_48)
	{
		{	/* BackEnd/bvm.sch 109 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_47)))->BgL_effectzb2zb2) =
				((bool_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &bvm-effect+-set! */
	obj_t BGl_z62bvmzd2effectzb2zd2setz12zc2zzbackend_bvmz00(obj_t BgL_envz00_555,
		obj_t BgL_oz00_556, obj_t BgL_vz00_557)
	{
		{	/* BackEnd/bvm.sch 109 */
			return
				BGl_bvmzd2effectzb2zd2setz12za0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_556), CBOOL(BgL_vz00_557));
		}

	}



/* bvm-qualified-types */
	BGL_EXPORTED_DEF bool_t
		BGl_bvmzd2qualifiedzd2typesz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_49)
	{
		{	/* BackEnd/bvm.sch 110 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_49)))->BgL_qualifiedzd2typeszd2);
		}

	}



/* &bvm-qualified-types */
	obj_t BGl_z62bvmzd2qualifiedzd2typesz62zzbackend_bvmz00(obj_t BgL_envz00_558,
		obj_t BgL_oz00_559)
	{
		{	/* BackEnd/bvm.sch 110 */
			return
				BBOOL(BGl_bvmzd2qualifiedzd2typesz00zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_559)));
		}

	}



/* bvm-qualified-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_50, bool_t BgL_vz00_51)
	{
		{	/* BackEnd/bvm.sch 111 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_50)))->BgL_qualifiedzd2typeszd2) =
				((bool_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &bvm-qualified-types-set! */
	obj_t BGl_z62bvmzd2qualifiedzd2typeszd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_560, obj_t BgL_oz00_561, obj_t BgL_vz00_562)
	{
		{	/* BackEnd/bvm.sch 111 */
			return
				BGl_bvmzd2qualifiedzd2typeszd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_561), CBOOL(BgL_vz00_562));
		}

	}



/* bvm-callcc */
	BGL_EXPORTED_DEF bool_t BGl_bvmzd2callcczd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_52)
	{
		{	/* BackEnd/bvm.sch 112 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_52)))->BgL_callccz00);
		}

	}



/* &bvm-callcc */
	obj_t BGl_z62bvmzd2callcczb0zzbackend_bvmz00(obj_t BgL_envz00_563,
		obj_t BgL_oz00_564)
	{
		{	/* BackEnd/bvm.sch 112 */
			return
				BBOOL(BGl_bvmzd2callcczd2zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_564)));
		}

	}



/* bvm-callcc-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2callcczd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_53,
		bool_t BgL_vz00_54)
	{
		{	/* BackEnd/bvm.sch 113 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_53)))->BgL_callccz00) =
				((bool_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &bvm-callcc-set! */
	obj_t BGl_z62bvmzd2callcczd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_565,
		obj_t BgL_oz00_566, obj_t BgL_vz00_567)
	{
		{	/* BackEnd/bvm.sch 113 */
			return
				BGl_bvmzd2callcczd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_566), CBOOL(BgL_vz00_567));
		}

	}



/* bvm-heap-compatible */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2heapzd2compatiblez00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_55)
	{
		{	/* BackEnd/bvm.sch 114 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_55)))->BgL_heapzd2compatiblezd2);
		}

	}



/* &bvm-heap-compatible */
	obj_t BGl_z62bvmzd2heapzd2compatiblez62zzbackend_bvmz00(obj_t BgL_envz00_568,
		obj_t BgL_oz00_569)
	{
		{	/* BackEnd/bvm.sch 114 */
			return
				BGl_bvmzd2heapzd2compatiblez00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_569));
		}

	}



/* bvm-heap-compatible-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2heapzd2compatiblezd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* BackEnd/bvm.sch 115 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_56)))->BgL_heapzd2compatiblezd2) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &bvm-heap-compatible-set! */
	obj_t BGl_z62bvmzd2heapzd2compatiblezd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_570, obj_t BgL_oz00_571, obj_t BgL_vz00_572)
	{
		{	/* BackEnd/bvm.sch 115 */
			return
				BGl_bvmzd2heapzd2compatiblezd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_571), BgL_vz00_572);
		}

	}



/* bvm-heap-suffix */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2heapzd2suffixz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_58)
	{
		{	/* BackEnd/bvm.sch 116 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_58)))->BgL_heapzd2suffixzd2);
		}

	}



/* &bvm-heap-suffix */
	obj_t BGl_z62bvmzd2heapzd2suffixz62zzbackend_bvmz00(obj_t BgL_envz00_573,
		obj_t BgL_oz00_574)
	{
		{	/* BackEnd/bvm.sch 116 */
			return
				BGl_bvmzd2heapzd2suffixz00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_574));
		}

	}



/* bvm-heap-suffix-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2heapzd2suffixzd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* BackEnd/bvm.sch 117 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_59)))->BgL_heapzd2suffixzd2) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &bvm-heap-suffix-set! */
	obj_t BGl_z62bvmzd2heapzd2suffixzd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_575, obj_t BgL_oz00_576, obj_t BgL_vz00_577)
	{
		{	/* BackEnd/bvm.sch 117 */
			return
				BGl_bvmzd2heapzd2suffixzd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_576), BgL_vz00_577);
		}

	}



/* bvm-typed */
	BGL_EXPORTED_DEF bool_t BGl_bvmzd2typedzd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_61)
	{
		{	/* BackEnd/bvm.sch 118 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_61)))->BgL_typedz00);
		}

	}



/* &bvm-typed */
	obj_t BGl_z62bvmzd2typedzb0zzbackend_bvmz00(obj_t BgL_envz00_578,
		obj_t BgL_oz00_579)
	{
		{	/* BackEnd/bvm.sch 118 */
			return
				BBOOL(BGl_bvmzd2typedzd2zzbackend_bvmz00(
					((BgL_bvmz00_bglt) BgL_oz00_579)));
		}

	}



/* bvm-typed-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2typedzd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_62,
		bool_t BgL_vz00_63)
	{
		{	/* BackEnd/bvm.sch 119 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_62)))->BgL_typedz00) =
				((bool_t) BgL_vz00_63), BUNSPEC);
		}

	}



/* &bvm-typed-set! */
	obj_t BGl_z62bvmzd2typedzd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_580,
		obj_t BgL_oz00_581, obj_t BgL_vz00_582)
	{
		{	/* BackEnd/bvm.sch 119 */
			return
				BGl_bvmzd2typedzd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_581), CBOOL(BgL_vz00_582));
		}

	}



/* bvm-types */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2typeszd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_64)
	{
		{	/* BackEnd/bvm.sch 120 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_64)))->BgL_typesz00);
		}

	}



/* &bvm-types */
	obj_t BGl_z62bvmzd2typeszb0zzbackend_bvmz00(obj_t BgL_envz00_583,
		obj_t BgL_oz00_584)
	{
		{	/* BackEnd/bvm.sch 120 */
			return
				BGl_bvmzd2typeszd2zzbackend_bvmz00(((BgL_bvmz00_bglt) BgL_oz00_584));
		}

	}



/* bvm-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2typeszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_65,
		obj_t BgL_vz00_66)
	{
		{	/* BackEnd/bvm.sch 121 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_65)))->BgL_typesz00) =
				((obj_t) BgL_vz00_66), BUNSPEC);
		}

	}



/* &bvm-types-set! */
	obj_t BGl_z62bvmzd2typeszd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_585,
		obj_t BgL_oz00_586, obj_t BgL_vz00_587)
	{
		{	/* BackEnd/bvm.sch 121 */
			return
				BGl_bvmzd2typeszd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_586), BgL_vz00_587);
		}

	}



/* bvm-functions */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2functionszd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_67)
	{
		{	/* BackEnd/bvm.sch 122 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_67)))->BgL_functionsz00);
		}

	}



/* &bvm-functions */
	obj_t BGl_z62bvmzd2functionszb0zzbackend_bvmz00(obj_t BgL_envz00_588,
		obj_t BgL_oz00_589)
	{
		{	/* BackEnd/bvm.sch 122 */
			return
				BGl_bvmzd2functionszd2zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_589));
		}

	}



/* bvm-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2functionszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_68,
		obj_t BgL_vz00_69)
	{
		{	/* BackEnd/bvm.sch 123 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_68)))->BgL_functionsz00) =
				((obj_t) BgL_vz00_69), BUNSPEC);
		}

	}



/* &bvm-functions-set! */
	obj_t BGl_z62bvmzd2functionszd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_590,
		obj_t BgL_oz00_591, obj_t BgL_vz00_592)
	{
		{	/* BackEnd/bvm.sch 123 */
			return
				BGl_bvmzd2functionszd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_591), BgL_vz00_592);
		}

	}



/* bvm-variables */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2variableszd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_70)
	{
		{	/* BackEnd/bvm.sch 124 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_70)))->BgL_variablesz00);
		}

	}



/* &bvm-variables */
	obj_t BGl_z62bvmzd2variableszb0zzbackend_bvmz00(obj_t BgL_envz00_593,
		obj_t BgL_oz00_594)
	{
		{	/* BackEnd/bvm.sch 124 */
			return
				BGl_bvmzd2variableszd2zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_594));
		}

	}



/* bvm-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2variableszd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_71,
		obj_t BgL_vz00_72)
	{
		{	/* BackEnd/bvm.sch 125 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_71)))->BgL_variablesz00) =
				((obj_t) BgL_vz00_72), BUNSPEC);
		}

	}



/* &bvm-variables-set! */
	obj_t BGl_z62bvmzd2variableszd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_595,
		obj_t BgL_oz00_596, obj_t BgL_vz00_597)
	{
		{	/* BackEnd/bvm.sch 125 */
			return
				BGl_bvmzd2variableszd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_596), BgL_vz00_597);
		}

	}



/* bvm-extern-types */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2typesz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_73)
	{
		{	/* BackEnd/bvm.sch 126 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_73)))->BgL_externzd2typeszd2);
		}

	}



/* &bvm-extern-types */
	obj_t BGl_z62bvmzd2externzd2typesz62zzbackend_bvmz00(obj_t BgL_envz00_598,
		obj_t BgL_oz00_599)
	{
		{	/* BackEnd/bvm.sch 126 */
			return
				BGl_bvmzd2externzd2typesz00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_599));
		}

	}



/* bvm-extern-types-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2typeszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_74, obj_t BgL_vz00_75)
	{
		{	/* BackEnd/bvm.sch 127 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_74)))->BgL_externzd2typeszd2) =
				((obj_t) BgL_vz00_75), BUNSPEC);
		}

	}



/* &bvm-extern-types-set! */
	obj_t BGl_z62bvmzd2externzd2typeszd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_600, obj_t BgL_oz00_601, obj_t BgL_vz00_602)
	{
		{	/* BackEnd/bvm.sch 127 */
			return
				BGl_bvmzd2externzd2typeszd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_601), BgL_vz00_602);
		}

	}



/* bvm-extern-functions */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2functionsz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_76)
	{
		{	/* BackEnd/bvm.sch 128 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_76)))->BgL_externzd2functionszd2);
		}

	}



/* &bvm-extern-functions */
	obj_t BGl_z62bvmzd2externzd2functionsz62zzbackend_bvmz00(obj_t BgL_envz00_603,
		obj_t BgL_oz00_604)
	{
		{	/* BackEnd/bvm.sch 128 */
			return
				BGl_bvmzd2externzd2functionsz00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_604));
		}

	}



/* bvm-extern-functions-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2functionszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_77, obj_t BgL_vz00_78)
	{
		{	/* BackEnd/bvm.sch 129 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_77)))->
					BgL_externzd2functionszd2) = ((obj_t) BgL_vz00_78), BUNSPEC);
		}

	}



/* &bvm-extern-functions-set! */
	obj_t BGl_z62bvmzd2externzd2functionszd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_605, obj_t BgL_oz00_606, obj_t BgL_vz00_607)
	{
		{	/* BackEnd/bvm.sch 129 */
			return
				BGl_bvmzd2externzd2functionszd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_606), BgL_vz00_607);
		}

	}



/* bvm-extern-variables */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2variablesz00zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_79)
	{
		{	/* BackEnd/bvm.sch 130 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_79)))->BgL_externzd2variableszd2);
		}

	}



/* &bvm-extern-variables */
	obj_t BGl_z62bvmzd2externzd2variablesz62zzbackend_bvmz00(obj_t BgL_envz00_608,
		obj_t BgL_oz00_609)
	{
		{	/* BackEnd/bvm.sch 130 */
			return
				BGl_bvmzd2externzd2variablesz00zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_609));
		}

	}



/* bvm-extern-variables-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2externzd2variableszd2setz12zc0zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_80, obj_t BgL_vz00_81)
	{
		{	/* BackEnd/bvm.sch 131 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_80)))->
					BgL_externzd2variableszd2) = ((obj_t) BgL_vz00_81), BUNSPEC);
		}

	}



/* &bvm-extern-variables-set! */
	obj_t BGl_z62bvmzd2externzd2variableszd2setz12za2zzbackend_bvmz00(obj_t
		BgL_envz00_610, obj_t BgL_oz00_611, obj_t BgL_vz00_612)
	{
		{	/* BackEnd/bvm.sch 131 */
			return
				BGl_bvmzd2externzd2variableszd2setz12zc0zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_611), BgL_vz00_612);
		}

	}



/* bvm-name */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2namezd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_82)
	{
		{	/* BackEnd/bvm.sch 132 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_82)))->BgL_namez00);
		}

	}



/* &bvm-name */
	obj_t BGl_z62bvmzd2namezb0zzbackend_bvmz00(obj_t BgL_envz00_613,
		obj_t BgL_oz00_614)
	{
		{	/* BackEnd/bvm.sch 132 */
			return
				BGl_bvmzd2namezd2zzbackend_bvmz00(((BgL_bvmz00_bglt) BgL_oz00_614));
		}

	}



/* bvm-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2namezd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_83,
		obj_t BgL_vz00_84)
	{
		{	/* BackEnd/bvm.sch 133 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_83)))->BgL_namez00) =
				((obj_t) BgL_vz00_84), BUNSPEC);
		}

	}



/* &bvm-name-set! */
	obj_t BGl_z62bvmzd2namezd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_615,
		obj_t BgL_oz00_616, obj_t BgL_vz00_617)
	{
		{	/* BackEnd/bvm.sch 133 */
			return
				BGl_bvmzd2namezd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_616), BgL_vz00_617);
		}

	}



/* bvm-srfi0 */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2srfi0zd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_85)
	{
		{	/* BackEnd/bvm.sch 134 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_85)))->BgL_srfi0z00);
		}

	}



/* &bvm-srfi0 */
	obj_t BGl_z62bvmzd2srfi0zb0zzbackend_bvmz00(obj_t BgL_envz00_618,
		obj_t BgL_oz00_619)
	{
		{	/* BackEnd/bvm.sch 134 */
			return
				BGl_bvmzd2srfi0zd2zzbackend_bvmz00(((BgL_bvmz00_bglt) BgL_oz00_619));
		}

	}



/* bvm-srfi0-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2srfi0zd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_86,
		obj_t BgL_vz00_87)
	{
		{	/* BackEnd/bvm.sch 135 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_86)))->BgL_srfi0z00) =
				((obj_t) BgL_vz00_87), BUNSPEC);
		}

	}



/* &bvm-srfi0-set! */
	obj_t BGl_z62bvmzd2srfi0zd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_620,
		obj_t BgL_oz00_621, obj_t BgL_vz00_622)
	{
		{	/* BackEnd/bvm.sch 135 */
			return
				BGl_bvmzd2srfi0zd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_621), BgL_vz00_622);
		}

	}



/* bvm-language */
	BGL_EXPORTED_DEF obj_t BGl_bvmzd2languagezd2zzbackend_bvmz00(BgL_bvmz00_bglt
		BgL_oz00_88)
	{
		{	/* BackEnd/bvm.sch 136 */
			return
				(((BgL_backendz00_bglt) COBJECT(
						((BgL_backendz00_bglt) BgL_oz00_88)))->BgL_languagez00);
		}

	}



/* &bvm-language */
	obj_t BGl_z62bvmzd2languagezb0zzbackend_bvmz00(obj_t BgL_envz00_623,
		obj_t BgL_oz00_624)
	{
		{	/* BackEnd/bvm.sch 136 */
			return
				BGl_bvmzd2languagezd2zzbackend_bvmz00(((BgL_bvmz00_bglt) BgL_oz00_624));
		}

	}



/* bvm-language-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_bvmzd2languagezd2setz12z12zzbackend_bvmz00(BgL_bvmz00_bglt BgL_oz00_89,
		obj_t BgL_vz00_90)
	{
		{	/* BackEnd/bvm.sch 137 */
			return
				((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt) BgL_oz00_89)))->BgL_languagez00) =
				((obj_t) BgL_vz00_90), BUNSPEC);
		}

	}



/* &bvm-language-set! */
	obj_t BGl_z62bvmzd2languagezd2setz12z70zzbackend_bvmz00(obj_t BgL_envz00_625,
		obj_t BgL_oz00_626, obj_t BgL_vz00_627)
	{
		{	/* BackEnd/bvm.sch 137 */
			return
				BGl_bvmzd2languagezd2setz12z12zzbackend_bvmz00(
				((BgL_bvmz00_bglt) BgL_oz00_626), BgL_vz00_627);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			{	/* BackEnd/bvm.scm 19 */
				obj_t BgL_arg1178z00_307;
				obj_t BgL_arg1179z00_308;

				{	/* BackEnd/bvm.scm 19 */
					obj_t BgL_v1169z00_314;

					BgL_v1169z00_314 = create_vector(((long) 0));
					BgL_arg1178z00_307 = BgL_v1169z00_314;
				}
				{	/* BackEnd/bvm.scm 19 */
					obj_t BgL_v1170z00_315;

					BgL_v1170z00_315 = create_vector(((long) 0));
					BgL_arg1179z00_308 = BgL_v1170z00_315;
				}
				return (BGl_bvmz00zzbackend_bvmz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 1)), BGl_backendz00zzbackend_backendz00,
						((long) 26897), BFALSE, BGl_proc1194z00zzbackend_bvmz00,
						BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
						BGl_proc1193z00zzbackend_bvmz00, BFALSE, BgL_arg1178z00_307,
						BgL_arg1179z00_308), BUNSPEC);
		}}

	}



/* &<@anonymous:1187> */
	obj_t BGl_z62zc3z04anonymousza31187ze3ze5zzbackend_bvmz00(obj_t
		BgL_envz00_630, obj_t BgL_new1050z00_631)
	{
		{	/* BackEnd/bvm.scm 19 */
			{
				BgL_bvmz00_bglt BgL_auxz00_964;

				((((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt)
									((BgL_bvmz00_bglt) BgL_new1050z00_631))))->BgL_languagez00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_srfi0z00) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_namez00) =
					((obj_t) BGl_string1195z00zzbackend_bvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_externzd2variableszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_externzd2functionszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_externzd2typeszd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_variablesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_functionsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_typesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_typedz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_heapzd2suffixzd2) =
					((obj_t) BGl_string1195z00zzbackend_bvmz00), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_heapzd2compatiblezd2) =
					((obj_t) CNST_TABLE_REF(((long) 2))), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_callccz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_qualifiedzd2typeszd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_effectzb2zb2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_removezd2emptyzd2letz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_foreignzd2closurezd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_typedzd2eqzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_tracezd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_foreignzd2clausezd2supportz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_debugzd2supportzd2) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_pragmazd2supportzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_tvectorzd2descrzd2supportz00) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_requirezd2tailczd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_registersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_pregistersz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_boundzd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_typezd2checkzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_backendz00_bglt)
							COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
										BgL_new1050z00_631))))->BgL_typedzd2funcallzd2) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				BgL_auxz00_964 = ((BgL_bvmz00_bglt) BgL_new1050z00_631);
				return ((obj_t) BgL_auxz00_964);
			}
		}

	}



/* &lambda1180 */
	BgL_bvmz00_bglt BGl_z62lambda1180z62zzbackend_bvmz00(obj_t BgL_envz00_632)
	{
		{	/* BackEnd/bvm.scm 19 */
			{	/* BackEnd/bvm.scm 19 */
				BgL_bvmz00_bglt BgL_new1049z00_652;

				BgL_new1049z00_652 =
					((BgL_bvmz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct BgL_bvmz00_bgl))));
				{	/* BackEnd/bvm.scm 19 */
					long BgL_arg1186z00_653;

					{	/* BackEnd/bvm.scm 19 */
						long BgL_res1191z00_654;

						BgL_res1191z00_654 = BGL_CLASS_INDEX(BGl_bvmz00zzbackend_bvmz00);
						BgL_arg1186z00_653 = BgL_res1191z00_654;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1049z00_652), BgL_arg1186z00_653);
				}
				return BgL_new1049z00_652;
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			return
				BGl_genericzd2addzd2methodz12z12zz__objectz00
				(BGl_backendzd2initializa7ez12zd2envzb5zzbackend_backendz00,
				BGl_bvmz00zzbackend_bvmz00, BGl_proc1196z00zzbackend_bvmz00,
				BGl_string1197z00zzbackend_bvmz00);
		}

	}



/* &backend-initialize!-1172 */
	obj_t BGl_z62backendzd2initializa7ez12zd21172zd7zzbackend_bvmz00(obj_t
		BgL_envz00_636, obj_t BgL_bz00_637)
	{
		{	/* BackEnd/bvm.scm 24 */
			((((BgL_backendz00_bglt) COBJECT(
							((BgL_backendz00_bglt)
								((BgL_bvmz00_bglt) BgL_bz00_637))))->BgL_typedz00) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_callccz00) =
				((bool_t) ((bool_t) 0)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_qualifiedzd2typeszd2) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_effectzb2zb2) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_removezd2emptyzd2letz00) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_foreignzd2closurezd2) =
				((bool_t) ((bool_t) 0)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_typedzd2eqzd2) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_tracezd2supportzd2) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_pragmazd2supportzd2) =
				((bool_t) ((bool_t) 0)), BUNSPEC);
			((((BgL_backendz00_bglt) COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt)
									BgL_bz00_637))))->BgL_tvectorzd2descrzd2supportz00) =
				((bool_t) ((bool_t) 0)), BUNSPEC);
			return ((((BgL_backendz00_bglt)
						COBJECT(((BgL_backendz00_bglt) ((BgL_bvmz00_bglt) BgL_bz00_637))))->
					BgL_requirezd2tailczd2) = ((bool_t) ((bool_t) 1)), BUNSPEC);
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzbackend_bvmz00()
	{
		{	/* BackEnd/bvm.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_bvmz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1198z00zzbackend_bvmz00));
		}

	}

#ifdef __cplusplus
}
#endif
