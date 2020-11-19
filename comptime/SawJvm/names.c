/*===========================================================================*/
/*   (SawJvm/names.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawJvm/names.scm) */
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

	typedef struct BgL_tvecz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}              *BgL_tvecz00_bglt;

	typedef struct BgL_jarrayz00_bgl
	{
		struct BgL_typez00_bgl *BgL_itemzd2typezd2;
	}                *BgL_jarrayz00_bglt;

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

	typedef struct BgL_jvmbasicz00_bgl
	{
	}                  *BgL_jvmbasicz00_bglt;


	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2classzd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	extern obj_t
		BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, bool_t, bool_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, int);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2importzd2locationzd2setz12zc0zzsaw_jvm_namesz00
		(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_classzd2nilzd2initz12z12zz__objectz00(obj_t);
	static obj_t BGl_z62jvmbasiczd2initzf3zd2setz12z83zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2parentszd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2tvectorzd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2namezd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62jvmbasiczd2nilzb0zzsaw_jvm_namesz00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2z42z90zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2magiczf3zd2setz12z83zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2initzf3z43zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t
		BGl_z62jvmbasiczd2pointedzd2tozd2byzd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2magiczf3zd2setz12ze1zzsaw_jvm_namesz00(BgL_typez00_bglt,
		bool_t);
	static obj_t BGl_z62jvmbasiczd2z42zf2zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2initzf3zd2setz12ze1zzsaw_jvm_namesz00(BgL_typez00_bglt,
		bool_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_jvm_namesz00();
	static obj_t BGl_z62jvmbasiczd2magiczf3z43zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2pointedzd2tozd2byzd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2coercezd2tozd2setz12zc0zzsaw_jvm_namesz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2namezd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2aliaszb0zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2namezd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jvmbasiczd2siza7ezd2setz12zd7zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2locationzb0zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2occurrencezd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62makezd2jvmbasiczb0zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2importzd2locationz62zzsaw_jvm_namesz00(obj_t,
		obj_t);
	static obj_t BGl_z62jvmbasiczd2parentszb0zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_namesz00();
	static obj_t BGl_z62jvmbasiczd2pointedzd2tozd2byzb0zzsaw_jvm_namesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2z42zd2setz12z50zzsaw_jvm_namesz00(BgL_typez00_bglt, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1628z62zzsaw_jvm_namesz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2classzb0zzsaw_jvm_namesz00(obj_t, obj_t);
	static BgL_typez00_bglt BGl_z62lambda1635z62zzsaw_jvm_namesz00(obj_t, obj_t);
	static bool_t BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00();
	static BgL_typez00_bglt BGl_z62lambda1641z62zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2siza7ez75zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2aliaszd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t
		BGl_z62jvmbasiczd2coercezd2tozd2setz12za2zzsaw_jvm_namesz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62jvmbasiczd2coercezd2toz62zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2siza7ezd2setz12zb5zzsaw_jvm_namesz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2locationzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2pointedzd2tozd2byzd2setz12z12zzsaw_jvm_namesz00
		(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jvmbasiczf3z91zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00 = BUNSPEC;
	extern obj_t
		BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2classzd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	static obj_t BGl_z62jvmbasiczd2namezb0zzsaw_jvm_namesz00(obj_t, obj_t);
	extern obj_t
		BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2aliaszd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt, obj_t);
	static obj_t BGl_z62jvmbasiczd2tvectorzb0zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2locationzd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_genericzd2initzd2zzsaw_jvm_namesz00();
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2locationzd2setz12z70zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62jvmbasiczd2occurrencezb0zzsaw_jvm_namesz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2classzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_jarrayz00zzforeign_jtypez00;
	BGL_EXPORTED_DECL bool_t
		BGl_jvmbasiczd2magiczf3z21zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2coercezd2toz00zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL bool_t
		BGl_jvmbasiczd2initzf3z21zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DEF obj_t BGl_jvmbasicz00zzsaw_jvm_namesz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2parentszd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2siza7ez17zzsaw_jvm_namesz00(obj_t, obj_t);
	static obj_t
		BGl_z62saw_jvmzd2setzd2typezd2namesz12za2zzsaw_jvm_namesz00(obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	extern obj_t BGl_wclassz00zzobject_classz00;
	BGL_EXPORTED_DECL int
		BGl_jvmbasiczd2occurrencezd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_cplibz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_bvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztvector_tvectorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	static obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_jvm_namesz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2aliaszd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t
		BGl_z62jvmbasiczd2importzd2locationzd2setz12za2zzsaw_jvm_namesz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzsaw_jvm_namesz00();
	static obj_t BGl_z62nameszd2initializa7ationz17zzsaw_jvm_namesz00(obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2idzd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	extern obj_t BGl_tvecz00zztvector_tvectorz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL BgL_typez00_bglt BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00();
	BGL_EXPORTED_DECL obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt);
	static obj_t BGl_z62jvmbasiczd2z42zd2setz12z32zzsaw_jvm_namesz00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_forzd2eachzd2typez12z12zztype_envz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2occurrencezd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt,
		int);
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2parentszd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2tvectorzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2tvectorzd2zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t BGl_z62jvmbasiczd2idzb0zzsaw_jvm_namesz00(obj_t, obj_t);
	extern obj_t
		BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmbasiczd2importzd2locationz00zzsaw_jvm_namesz00(BgL_typez00_bglt);
	static obj_t __cnst[10];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2magiczf3zd2setz12zd2envz33zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2ma1962z00,
		BGl_z62jvmbasiczd2magiczf3zd2setz12z83zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	extern obj_t BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00;
	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2siza7ezd2setz12zd2envz67zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2si1963z00,
		BGl_z62jvmbasiczd2siza7ezd2setz12zd7zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2aliaszd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2al1964z00,
		BGl_z62jvmbasiczd2aliaszd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_saw_jvmzd2setzd2typezd2namesz12zd2envz12zzsaw_jvm_namesz00,
		BgL_bgl_za762saw_jvmza7d2set1965z00,
		BGl_z62saw_jvmzd2setzd2typezd2namesz12za2zzsaw_jvm_namesz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2pointedzd2tozd2byzd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2po1966z00,
		BGl_z62jvmbasiczd2pointedzd2tozd2byzd2setz12z70zzsaw_jvm_namesz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2pointedzd2tozd2byzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2po1967z00,
		BGl_z62jvmbasiczd2pointedzd2tozd2byzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2jvmbasiczd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762makeza7d2jvmbas1968z00,
		BGl_z62makezd2jvmbasiczb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2initzf3zd2envzf3zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2in1969z00,
		BGl_z62jvmbasiczd2initzf3z43zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2coercezd2tozd2setz12zd2envz12zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2co1970z00,
		BGl_z62jvmbasiczd2coercezd2tozd2setz12za2zzsaw_jvm_namesz00, 0L, BUNSPEC,
		2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2namezd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2na1971z00,
		BGl_z62jvmbasiczd2namezd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2initzf3zd2setz12zd2envz33zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2in1972z00,
		BGl_z62jvmbasiczd2initzf3zd2setz12z83zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2tvectorzd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2tv1973z00,
		BGl_z62jvmbasiczd2tvectorzd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1953z00zzsaw_jvm_namesz00,
		BgL_bgl_za762lambda1641za7621974z00, BGl_z62lambda1641z62zzsaw_jvm_namesz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1954z00zzsaw_jvm_namesz00,
		BgL_bgl_za762za7c3za704anonymo1975za7,
		BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1955z00zzsaw_jvm_namesz00,
		BgL_bgl_za762lambda1635za7621976z00, BGl_z62lambda1635z62zzsaw_jvm_namesz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1956z00zzsaw_jvm_namesz00,
		BgL_bgl_za762lambda1628za7621977z00, BGl_z62lambda1628z62zzsaw_jvm_namesz00,
		0L, BUNSPEC, 15);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2nilzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2ni1978z00,
		BGl_z62jvmbasiczd2nilzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2importzd2locationzd2envzd2zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2im1979z00,
		BGl_z62jvmbasiczd2importzd2locationz62zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2siza7ezd2envza7zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2si1980z00,
		BGl_z62jvmbasiczd2siza7ez17zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2occurrencezd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2oc1981z00,
		BGl_z62jvmbasiczd2occurrencezd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2locationzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2lo1982z00,
		BGl_z62jvmbasiczd2locationzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2z42zd2setz12zd2envz82zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2za741983za7,
		BGl_z62jvmbasiczd2z42zd2setz12z32zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2namezd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2na1984z00,
		BGl_z62jvmbasiczd2namezb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2occurrencezd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2oc1985z00,
		BGl_z62jvmbasiczd2occurrencezb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2z42zd2envz42zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2za741986za7,
		BGl_z62jvmbasiczd2z42zf2zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2classzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2cl1987z00,
		BGl_z62jvmbasiczd2classzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2parentszd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2pa1988z00,
		BGl_z62jvmbasiczd2parentszd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2tvectorzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2tv1989z00,
		BGl_z62jvmbasiczd2tvectorzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2aliaszd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2al1990z00,
		BGl_z62jvmbasiczd2aliaszb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1952z00zzsaw_jvm_namesz00,
		BgL_bgl_string1952za700za7za7s1991za7, "Zector", 6);
	      DEFINE_STRING(BGl_string1957z00zzsaw_jvm_namesz00,
		BgL_bgl_string1957za700za7za7s1992za7, "saw_jvm_names", 13);
	      DEFINE_STRING(BGl_string1958z00zzsaw_jvm_namesz00,
		BgL_bgl_string1958za700za7za7s1993za7,
		"_ saw_jvm_names jvmbasic object ((obj . obj) (magic . obj) (pair-nil . obj) (void* . obj) (tvector . obj) (class . class) (class-field . obj) (output-port . output-port) (input-port . input-port) (binary-port . binary-port) (datagram-socket . datagram-socket) (regexp . regexp) (epair . extended_pair) (dynamic-env . bgldynamic) (procedure . procedure)) (char char ucs2 obj obj obj) (bstring string ucs2string vector cnst* procedure-el) (boolean byte byte byte char short int int long long long long int byte byte short short int int long long) (bool char byte ubyte ucs2 ushort long uchar llong ullong elong uelong ulong int8 uint8 int16 uint16 int32 uint32 int64 uint64) (void short int float double) ",
		703);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2parentszd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2pa1994z00,
		BGl_z62jvmbasiczd2parentszb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczd2idzd2envz00zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2id1995z00,
		BGl_z62jvmbasiczd2idzb0zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2classzd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2cl1996z00,
		BGl_z62jvmbasiczd2classzd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_nameszd2initializa7ationzd2envza7zzsaw_jvm_namesz00,
		BgL_bgl_za762namesza7d2initi1997z00,
		BGl_z62nameszd2initializa7ationz17zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2locationzd2setz12zd2envzc0zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2lo1998z00,
		BGl_z62jvmbasiczd2locationzd2setz12z70zzsaw_jvm_namesz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2magiczf3zd2envzf3zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2ma1999z00,
		BGl_z62jvmbasiczd2magiczf3z43zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2importzd2locationzd2setz12zd2envz12zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2im2000z00,
		BGl_z62jvmbasiczd2importzd2locationzd2setz12za2zzsaw_jvm_namesz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jvmbasiczf3zd2envz21zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7f3za792001za7,
		BGl_z62jvmbasiczf3z91zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmbasiczd2coercezd2tozd2envzd2zzsaw_jvm_namesz00,
		BgL_bgl_za762jvmbasicza7d2co2002z00,
		BGl_z62jvmbasiczd2coercezd2toz62zzsaw_jvm_namesz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00));
		     ADD_ROOT((void *) (&BGl_jvmbasicz00zzsaw_jvm_namesz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_jvm_namesz00(long
		BgL_checksumz00_2890, char *BgL_fromz00_2891)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_jvm_namesz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_jvm_namesz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00();
					BGl_cnstzd2initzd2zzsaw_jvm_namesz00();
					BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00();
					BGl_objectzd2initzd2zzsaw_jvm_namesz00();
					return BGl_methodzd2initzd2zzsaw_jvm_namesz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"saw_jvm_names");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_jvm_names");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			{	/* SawJvm/names.scm 1 */
				obj_t BgL_cportz00_2843;

				{	/* SawJvm/names.scm 1 */
					obj_t BgL_stringz00_2851;

					BgL_stringz00_2851 = BGl_string1958z00zzsaw_jvm_namesz00;
					{	/* SawJvm/names.scm 1 */
						obj_t BgL_startz00_2852;

						BgL_startz00_2852 = BINT(((long) 0));
						{	/* SawJvm/names.scm 1 */
							obj_t BgL_endz00_2853;

							BgL_endz00_2853 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2851)));
							{	/* SawJvm/names.scm 1 */

								BgL_cportz00_2843 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2851, BgL_startz00_2852, BgL_endz00_2853);
				}}}}
				{
					long BgL_iz00_2844;

					BgL_iz00_2844 = ((long) 9);
				BgL_loopz00_2845:
					if ((BgL_iz00_2844 == ((long) -1)))
						{	/* SawJvm/names.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* SawJvm/names.scm 1 */
							{	/* SawJvm/names.scm 1 */
								obj_t BgL_arg1960z00_2847;

								{	/* SawJvm/names.scm 1 */

									{	/* SawJvm/names.scm 1 */
										obj_t BgL_locationz00_2849;

										BgL_locationz00_2849 = BBOOL(((bool_t) 0));
										{	/* SawJvm/names.scm 1 */

											BgL_arg1960z00_2847 =
												BGl_readz00zz__readerz00(BgL_cportz00_2843,
												BgL_locationz00_2849);
										}
									}
								}
								{	/* SawJvm/names.scm 1 */
									int BgL_tmpz00_2918;

									BgL_tmpz00_2918 = (int) (BgL_iz00_2844);
									CNST_TABLE_SET(BgL_tmpz00_2918, BgL_arg1960z00_2847);
							}}
							{	/* SawJvm/names.scm 1 */
								int BgL_auxz00_2850;

								BgL_auxz00_2850 = (int) ((BgL_iz00_2844 - ((long) 1)));
								{
									long BgL_iz00_2923;

									BgL_iz00_2923 = (long) (BgL_auxz00_2850);
									BgL_iz00_2844 = BgL_iz00_2923;
									goto BgL_loopz00_2845;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* make-jvmbasic */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(obj_t BgL_id1126z00_3,
		obj_t BgL_name1127z00_4, obj_t BgL_siza7e1128za7_5,
		obj_t BgL_class1129z00_6, obj_t BgL_coercezd2to1130zd2_7,
		obj_t BgL_parents1131z00_8, bool_t BgL_initzf31132zf3_9,
		bool_t BgL_magiczf31133zf3_10, obj_t BgL_z421134z42_11,
		obj_t BgL_alias1135z00_12, obj_t BgL_pointedzd2tozd2by1136z00_13,
		obj_t BgL_tvector1137z00_14, obj_t BgL_location1138z00_15,
		obj_t BgL_importzd2location1139zd2_16, int BgL_occurrence1140z00_17)
	{
		{	/* SawJvm/names.sch 50 */
			{	/* SawJvm/names.sch 50 */
				BgL_typez00_bglt BgL_new1133z00_2856;

				{	/* SawJvm/names.sch 50 */
					BgL_typez00_bglt BgL_tmp1131z00_2857;
					BgL_jvmbasicz00_bglt BgL_wide1132z00_2858;

					{
						BgL_typez00_bglt BgL_auxz00_2926;

						{	/* SawJvm/names.sch 50 */
							BgL_typez00_bglt BgL_new1130z00_2859;

							BgL_new1130z00_2859 =
								((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL_typez00_bgl))));
							{	/* SawJvm/names.sch 50 */
								long BgL_arg1521z00_2860;

								{	/* SawJvm/names.sch 50 */
									long BgL_res1827z00_2861;

									BgL_res1827z00_2861 =
										BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
									BgL_arg1521z00_2860 = BgL_res1827z00_2861;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1130z00_2859),
									BgL_arg1521z00_2860);
							}
							{	/* SawJvm/names.sch 50 */
								BgL_objectz00_bglt BgL_tmpz00_2931;

								BgL_tmpz00_2931 = ((BgL_objectz00_bglt) BgL_new1130z00_2859);
								BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2931, BFALSE);
							}
							((BgL_objectz00_bglt) BgL_new1130z00_2859);
							BgL_auxz00_2926 = BgL_new1130z00_2859;
						}
						BgL_tmp1131z00_2857 = ((BgL_typez00_bglt) BgL_auxz00_2926);
					}
					BgL_wide1132z00_2858 =
						((BgL_jvmbasicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jvmbasicz00_bgl))));
					{	/* SawJvm/names.sch 50 */
						obj_t BgL_auxz00_2939;
						BgL_objectz00_bglt BgL_tmpz00_2937;

						BgL_auxz00_2939 = ((obj_t) BgL_wide1132z00_2858);
						BgL_tmpz00_2937 = ((BgL_objectz00_bglt) BgL_tmp1131z00_2857);
						BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2937, BgL_auxz00_2939);
					}
					((BgL_objectz00_bglt) BgL_tmp1131z00_2857);
					{	/* SawJvm/names.sch 50 */
						long BgL_arg1518z00_2862;

						{	/* SawJvm/names.sch 50 */
							long BgL_res1828z00_2863;

							BgL_res1828z00_2863 =
								BGL_CLASS_INDEX(BGl_jvmbasicz00zzsaw_jvm_namesz00);
							BgL_arg1518z00_2862 = BgL_res1828z00_2863;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_tmp1131z00_2857), BgL_arg1518z00_2862);
					}
					BgL_new1133z00_2856 = ((BgL_typez00_bglt) BgL_tmp1131z00_2857);
				}
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_new1133z00_2856)))->BgL_idz00) =
					((obj_t) BgL_id1126z00_3), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_namez00) =
					((obj_t) BgL_name1127z00_4), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_siza7eza7) =
					((obj_t) BgL_siza7e1128za7_5), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_classz00) =
					((obj_t) BgL_class1129z00_6), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_coercezd2tozd2) =
					((obj_t) BgL_coercezd2to1130zd2_7), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_parentsz00) =
					((obj_t) BgL_parents1131z00_8), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_initzf3zf3) =
					((bool_t) BgL_initzf31132zf3_9), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_magiczf3zf3) =
					((bool_t) BgL_magiczf31133zf3_10), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_z42z42) =
					((obj_t) BgL_z421134z42_11), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_aliasz00) =
					((obj_t) BgL_alias1135z00_12), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BgL_pointedzd2tozd2by1136z00_13), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_tvectorz00) =
					((obj_t) BgL_tvector1137z00_14), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_locationz00) =
					((obj_t) BgL_location1138z00_15), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_importzd2locationzd2) =
					((obj_t) BgL_importzd2location1139zd2_16), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
									BgL_new1133z00_2856)))->BgL_occurrencez00) =
					((int) BgL_occurrence1140z00_17), BUNSPEC);
				return BgL_new1133z00_2856;
			}
		}

	}



/* &make-jvmbasic */
	BgL_typez00_bglt BGl_z62makezd2jvmbasiczb0zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2720, obj_t BgL_id1126z00_2721, obj_t BgL_name1127z00_2722,
		obj_t BgL_siza7e1128za7_2723, obj_t BgL_class1129z00_2724,
		obj_t BgL_coercezd2to1130zd2_2725, obj_t BgL_parents1131z00_2726,
		obj_t BgL_initzf31132zf3_2727, obj_t BgL_magiczf31133zf3_2728,
		obj_t BgL_z421134z42_2729, obj_t BgL_alias1135z00_2730,
		obj_t BgL_pointedzd2tozd2by1136z00_2731, obj_t BgL_tvector1137z00_2732,
		obj_t BgL_location1138z00_2733, obj_t BgL_importzd2location1139zd2_2734,
		obj_t BgL_occurrence1140z00_2735)
	{
		{	/* SawJvm/names.sch 50 */
			return
				BGl_makezd2jvmbasiczd2zzsaw_jvm_namesz00(BgL_id1126z00_2721,
				BgL_name1127z00_2722, BgL_siza7e1128za7_2723, BgL_class1129z00_2724,
				BgL_coercezd2to1130zd2_2725, BgL_parents1131z00_2726,
				CBOOL(BgL_initzf31132zf3_2727), CBOOL(BgL_magiczf31133zf3_2728),
				BgL_z421134z42_2729, BgL_alias1135z00_2730,
				BgL_pointedzd2tozd2by1136z00_2731, BgL_tvector1137z00_2732,
				BgL_location1138z00_2733, BgL_importzd2location1139zd2_2734,
				CINT(BgL_occurrence1140z00_2735));
		}

	}



/* jvmbasic? */
	BGL_EXPORTED_DEF bool_t BGl_jvmbasiczf3zf3zzsaw_jvm_namesz00(obj_t
		BgL_objz00_18)
	{
		{	/* SawJvm/names.sch 51 */
			return
				BGl_isazf3zf3zz__objectz00(BgL_objz00_18,
				BGl_jvmbasicz00zzsaw_jvm_namesz00);
		}

	}



/* &jvmbasic? */
	obj_t BGl_z62jvmbasiczf3z91zzsaw_jvm_namesz00(obj_t BgL_envz00_2736,
		obj_t BgL_objz00_2737)
	{
		{	/* SawJvm/names.sch 51 */
			return BBOOL(BGl_jvmbasiczf3zf3zzsaw_jvm_namesz00(BgL_objz00_2737));
		}

	}



/* jvmbasic-nil */
	BGL_EXPORTED_DEF BgL_typez00_bglt BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.sch 52 */
			{	/* SawJvm/names.sch 52 */
				obj_t BgL_classz00_2635;

				BgL_classz00_2635 = BGl_jvmbasicz00zzsaw_jvm_namesz00;
				{	/* SawJvm/names.sch 52 */
					obj_t BgL__ortest_1106z00_2636;

					BgL__ortest_1106z00_2636 = BGL_CLASS_NIL(BgL_classz00_2635);
					if (CBOOL(BgL__ortest_1106z00_2636))
						{	/* SawJvm/names.sch 52 */
							return ((BgL_typez00_bglt) BgL__ortest_1106z00_2636);
						}
					else
						{	/* SawJvm/names.sch 52 */
							return
								((BgL_typez00_bglt)
								BGl_classzd2nilzd2initz12z12zz__objectz00(BgL_classz00_2635));
						}
				}
			}
		}

	}



/* &jvmbasic-nil */
	BgL_typez00_bglt BGl_z62jvmbasiczd2nilzb0zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2738)
	{
		{	/* SawJvm/names.sch 52 */
			return BGl_jvmbasiczd2nilzd2zzsaw_jvm_namesz00();
		}

	}



/* jvmbasic-occurrence */
	BGL_EXPORTED_DEF int
		BGl_jvmbasiczd2occurrencezd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_19)
	{
		{	/* SawJvm/names.sch 53 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_19)))->BgL_occurrencez00);
		}

	}



/* &jvmbasic-occurrence */
	obj_t BGl_z62jvmbasiczd2occurrencezb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2739,
		obj_t BgL_oz00_2740)
	{
		{	/* SawJvm/names.sch 53 */
			return
				BINT(BGl_jvmbasiczd2occurrencezd2zzsaw_jvm_namesz00(
					((BgL_typez00_bglt) BgL_oz00_2740)));
		}

	}



/* jvmbasic-occurrence-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2occurrencezd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_20, int BgL_vz00_21)
	{
		{	/* SawJvm/names.sch 54 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_20)))->BgL_occurrencez00) =
				((int) BgL_vz00_21), BUNSPEC);
		}

	}



/* &jvmbasic-occurrence-set! */
	obj_t BGl_z62jvmbasiczd2occurrencezd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2741, obj_t BgL_oz00_2742, obj_t BgL_vz00_2743)
	{
		{	/* SawJvm/names.sch 54 */
			return
				BGl_jvmbasiczd2occurrencezd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2742), CINT(BgL_vz00_2743));
		}

	}



/* jvmbasic-import-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2importzd2locationz00zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_22)
	{
		{	/* SawJvm/names.sch 55 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_22)))->BgL_importzd2locationzd2);
		}

	}



/* &jvmbasic-import-location */
	obj_t BGl_z62jvmbasiczd2importzd2locationz62zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2744, obj_t BgL_oz00_2745)
	{
		{	/* SawJvm/names.sch 55 */
			return
				BGl_jvmbasiczd2importzd2locationz00zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2745));
		}

	}



/* jvmbasic-import-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2importzd2locationzd2setz12zc0zzsaw_jvm_namesz00
		(BgL_typez00_bglt BgL_oz00_23, obj_t BgL_vz00_24)
	{
		{	/* SawJvm/names.sch 56 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_23)))->BgL_importzd2locationzd2) =
				((obj_t) BgL_vz00_24), BUNSPEC);
		}

	}



/* &jvmbasic-import-location-set! */
	obj_t BGl_z62jvmbasiczd2importzd2locationzd2setz12za2zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2746, obj_t BgL_oz00_2747, obj_t BgL_vz00_2748)
	{
		{	/* SawJvm/names.sch 56 */
			return
				BGl_jvmbasiczd2importzd2locationzd2setz12zc0zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2747), BgL_vz00_2748);
		}

	}



/* jvmbasic-location */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2locationzd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_25)
	{
		{	/* SawJvm/names.sch 57 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_25)))->BgL_locationz00);
		}

	}



/* &jvmbasic-location */
	obj_t BGl_z62jvmbasiczd2locationzb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2749,
		obj_t BgL_oz00_2750)
	{
		{	/* SawJvm/names.sch 57 */
			return
				BGl_jvmbasiczd2locationzd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2750));
		}

	}



/* jvmbasic-location-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2locationzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_26, obj_t BgL_vz00_27)
	{
		{	/* SawJvm/names.sch 58 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_26)))->BgL_locationz00) =
				((obj_t) BgL_vz00_27), BUNSPEC);
		}

	}



/* &jvmbasic-location-set! */
	obj_t BGl_z62jvmbasiczd2locationzd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2751, obj_t BgL_oz00_2752, obj_t BgL_vz00_2753)
	{
		{	/* SawJvm/names.sch 58 */
			return
				BGl_jvmbasiczd2locationzd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2752), BgL_vz00_2753);
		}

	}



/* jvmbasic-tvector */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2tvectorzd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_28)
	{
		{	/* SawJvm/names.sch 59 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_28)))->BgL_tvectorz00);
		}

	}



/* &jvmbasic-tvector */
	obj_t BGl_z62jvmbasiczd2tvectorzb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2754,
		obj_t BgL_oz00_2755)
	{
		{	/* SawJvm/names.sch 59 */
			return
				BGl_jvmbasiczd2tvectorzd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2755));
		}

	}



/* jvmbasic-tvector-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2tvectorzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_29, obj_t BgL_vz00_30)
	{
		{	/* SawJvm/names.sch 60 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_29)))->BgL_tvectorz00) =
				((obj_t) BgL_vz00_30), BUNSPEC);
		}

	}



/* &jvmbasic-tvector-set! */
	obj_t BGl_z62jvmbasiczd2tvectorzd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2756, obj_t BgL_oz00_2757, obj_t BgL_vz00_2758)
	{
		{	/* SawJvm/names.sch 60 */
			return
				BGl_jvmbasiczd2tvectorzd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2757), BgL_vz00_2758);
		}

	}



/* jvmbasic-pointed-to-by */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2pointedzd2tozd2byzd2zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_31)
	{
		{	/* SawJvm/names.sch 61 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_31)))->BgL_pointedzd2tozd2byz00);
		}

	}



/* &jvmbasic-pointed-to-by */
	obj_t BGl_z62jvmbasiczd2pointedzd2tozd2byzb0zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2759, obj_t BgL_oz00_2760)
	{
		{	/* SawJvm/names.sch 61 */
			return
				BGl_jvmbasiczd2pointedzd2tozd2byzd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2760));
		}

	}



/* jvmbasic-pointed-to-by-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2pointedzd2tozd2byzd2setz12z12zzsaw_jvm_namesz00
		(BgL_typez00_bglt BgL_oz00_32, obj_t BgL_vz00_33)
	{
		{	/* SawJvm/names.sch 62 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_32)))->BgL_pointedzd2tozd2byz00) =
				((obj_t) BgL_vz00_33), BUNSPEC);
		}

	}



/* &jvmbasic-pointed-to-by-set! */
	obj_t BGl_z62jvmbasiczd2pointedzd2tozd2byzd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2761, obj_t BgL_oz00_2762, obj_t BgL_vz00_2763)
	{
		{	/* SawJvm/names.sch 62 */
			return
				BGl_jvmbasiczd2pointedzd2tozd2byzd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2762), BgL_vz00_2763);
		}

	}



/* jvmbasic-alias */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2aliaszd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_34)
	{
		{	/* SawJvm/names.sch 63 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_34)))->BgL_aliasz00);
		}

	}



/* &jvmbasic-alias */
	obj_t BGl_z62jvmbasiczd2aliaszb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2764,
		obj_t BgL_oz00_2765)
	{
		{	/* SawJvm/names.sch 63 */
			return
				BGl_jvmbasiczd2aliaszd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2765));
		}

	}



/* jvmbasic-alias-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2aliaszd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_35, obj_t BgL_vz00_36)
	{
		{	/* SawJvm/names.sch 64 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_35)))->BgL_aliasz00) =
				((obj_t) BgL_vz00_36), BUNSPEC);
		}

	}



/* &jvmbasic-alias-set! */
	obj_t BGl_z62jvmbasiczd2aliaszd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2766, obj_t BgL_oz00_2767, obj_t BgL_vz00_2768)
	{
		{	/* SawJvm/names.sch 64 */
			return
				BGl_jvmbasiczd2aliaszd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2767), BgL_vz00_2768);
		}

	}



/* jvmbasic-$ */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2z42z90zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_37)
	{
		{	/* SawJvm/names.sch 65 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_37)))->BgL_z42z42);
		}

	}



/* &jvmbasic-$ */
	obj_t BGl_z62jvmbasiczd2z42zf2zzsaw_jvm_namesz00(obj_t BgL_envz00_2769,
		obj_t BgL_oz00_2770)
	{
		{	/* SawJvm/names.sch 65 */
			return
				BGl_jvmbasiczd2z42z90zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2770));
		}

	}



/* jvmbasic-$-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2z42zd2setz12z50zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_38, obj_t BgL_vz00_39)
	{
		{	/* SawJvm/names.sch 66 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_38)))->BgL_z42z42) =
				((obj_t) BgL_vz00_39), BUNSPEC);
		}

	}



/* &jvmbasic-$-set! */
	obj_t BGl_z62jvmbasiczd2z42zd2setz12z32zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2771, obj_t BgL_oz00_2772, obj_t BgL_vz00_2773)
	{
		{	/* SawJvm/names.sch 66 */
			return
				BGl_jvmbasiczd2z42zd2setz12z50zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2772), BgL_vz00_2773);
		}

	}



/* jvmbasic-magic? */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmbasiczd2magiczf3z21zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_40)
	{
		{	/* SawJvm/names.sch 67 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_40)))->BgL_magiczf3zf3);
		}

	}



/* &jvmbasic-magic? */
	obj_t BGl_z62jvmbasiczd2magiczf3z43zzsaw_jvm_namesz00(obj_t BgL_envz00_2774,
		obj_t BgL_oz00_2775)
	{
		{	/* SawJvm/names.sch 67 */
			return
				BBOOL(BGl_jvmbasiczd2magiczf3z21zzsaw_jvm_namesz00(
					((BgL_typez00_bglt) BgL_oz00_2775)));
		}

	}



/* jvmbasic-magic?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2magiczf3zd2setz12ze1zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_41, bool_t BgL_vz00_42)
	{
		{	/* SawJvm/names.sch 68 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_41)))->BgL_magiczf3zf3) =
				((bool_t) BgL_vz00_42), BUNSPEC);
		}

	}



/* &jvmbasic-magic?-set! */
	obj_t BGl_z62jvmbasiczd2magiczf3zd2setz12z83zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2776, obj_t BgL_oz00_2777, obj_t BgL_vz00_2778)
	{
		{	/* SawJvm/names.sch 68 */
			return
				BGl_jvmbasiczd2magiczf3zd2setz12ze1zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2777), CBOOL(BgL_vz00_2778));
		}

	}



/* jvmbasic-init? */
	BGL_EXPORTED_DEF bool_t
		BGl_jvmbasiczd2initzf3z21zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_43)
	{
		{	/* SawJvm/names.sch 69 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_43)))->BgL_initzf3zf3);
		}

	}



/* &jvmbasic-init? */
	obj_t BGl_z62jvmbasiczd2initzf3z43zzsaw_jvm_namesz00(obj_t BgL_envz00_2779,
		obj_t BgL_oz00_2780)
	{
		{	/* SawJvm/names.sch 69 */
			return
				BBOOL(BGl_jvmbasiczd2initzf3z21zzsaw_jvm_namesz00(
					((BgL_typez00_bglt) BgL_oz00_2780)));
		}

	}



/* jvmbasic-init?-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2initzf3zd2setz12ze1zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_44, bool_t BgL_vz00_45)
	{
		{	/* SawJvm/names.sch 70 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_44)))->BgL_initzf3zf3) =
				((bool_t) BgL_vz00_45), BUNSPEC);
		}

	}



/* &jvmbasic-init?-set! */
	obj_t BGl_z62jvmbasiczd2initzf3zd2setz12z83zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2781, obj_t BgL_oz00_2782, obj_t BgL_vz00_2783)
	{
		{	/* SawJvm/names.sch 70 */
			return
				BGl_jvmbasiczd2initzf3zd2setz12ze1zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2782), CBOOL(BgL_vz00_2783));
		}

	}



/* jvmbasic-parents */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2parentszd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_46)
	{
		{	/* SawJvm/names.sch 71 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_46)))->BgL_parentsz00);
		}

	}



/* &jvmbasic-parents */
	obj_t BGl_z62jvmbasiczd2parentszb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2784,
		obj_t BgL_oz00_2785)
	{
		{	/* SawJvm/names.sch 71 */
			return
				BGl_jvmbasiczd2parentszd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2785));
		}

	}



/* jvmbasic-parents-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2parentszd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_47, obj_t BgL_vz00_48)
	{
		{	/* SawJvm/names.sch 72 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_47)))->BgL_parentsz00) =
				((obj_t) BgL_vz00_48), BUNSPEC);
		}

	}



/* &jvmbasic-parents-set! */
	obj_t BGl_z62jvmbasiczd2parentszd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2786, obj_t BgL_oz00_2787, obj_t BgL_vz00_2788)
	{
		{	/* SawJvm/names.sch 72 */
			return
				BGl_jvmbasiczd2parentszd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2787), BgL_vz00_2788);
		}

	}



/* jvmbasic-coerce-to */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2coercezd2toz00zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_49)
	{
		{	/* SawJvm/names.sch 73 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_49)))->BgL_coercezd2tozd2);
		}

	}



/* &jvmbasic-coerce-to */
	obj_t BGl_z62jvmbasiczd2coercezd2toz62zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2789, obj_t BgL_oz00_2790)
	{
		{	/* SawJvm/names.sch 73 */
			return
				BGl_jvmbasiczd2coercezd2toz00zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2790));
		}

	}



/* jvmbasic-coerce-to-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2coercezd2tozd2setz12zc0zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_50, obj_t BgL_vz00_51)
	{
		{	/* SawJvm/names.sch 74 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_50)))->BgL_coercezd2tozd2) =
				((obj_t) BgL_vz00_51), BUNSPEC);
		}

	}



/* &jvmbasic-coerce-to-set! */
	obj_t BGl_z62jvmbasiczd2coercezd2tozd2setz12za2zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2791, obj_t BgL_oz00_2792, obj_t BgL_vz00_2793)
	{
		{	/* SawJvm/names.sch 74 */
			return
				BGl_jvmbasiczd2coercezd2tozd2setz12zc0zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2792), BgL_vz00_2793);
		}

	}



/* jvmbasic-class */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2classzd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_52)
	{
		{	/* SawJvm/names.sch 75 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_52)))->BgL_classz00);
		}

	}



/* &jvmbasic-class */
	obj_t BGl_z62jvmbasiczd2classzb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2794,
		obj_t BgL_oz00_2795)
	{
		{	/* SawJvm/names.sch 75 */
			return
				BGl_jvmbasiczd2classzd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2795));
		}

	}



/* jvmbasic-class-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2classzd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_53, obj_t BgL_vz00_54)
	{
		{	/* SawJvm/names.sch 76 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_53)))->BgL_classz00) =
				((obj_t) BgL_vz00_54), BUNSPEC);
		}

	}



/* &jvmbasic-class-set! */
	obj_t BGl_z62jvmbasiczd2classzd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2796, obj_t BgL_oz00_2797, obj_t BgL_vz00_2798)
	{
		{	/* SawJvm/names.sch 76 */
			return
				BGl_jvmbasiczd2classzd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2797), BgL_vz00_2798);
		}

	}



/* jvmbasic-size */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2siza7ez75zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_55)
	{
		{	/* SawJvm/names.sch 77 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_55)))->BgL_siza7eza7);
		}

	}



/* &jvmbasic-size */
	obj_t BGl_z62jvmbasiczd2siza7ez17zzsaw_jvm_namesz00(obj_t BgL_envz00_2799,
		obj_t BgL_oz00_2800)
	{
		{	/* SawJvm/names.sch 77 */
			return
				BGl_jvmbasiczd2siza7ez75zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2800));
		}

	}



/* jvmbasic-size-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2siza7ezd2setz12zb5zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_56, obj_t BgL_vz00_57)
	{
		{	/* SawJvm/names.sch 78 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_56)))->BgL_siza7eza7) =
				((obj_t) BgL_vz00_57), BUNSPEC);
		}

	}



/* &jvmbasic-size-set! */
	obj_t BGl_z62jvmbasiczd2siza7ezd2setz12zd7zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2801, obj_t BgL_oz00_2802, obj_t BgL_vz00_2803)
	{
		{	/* SawJvm/names.sch 78 */
			return
				BGl_jvmbasiczd2siza7ezd2setz12zb5zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2802), BgL_vz00_2803);
		}

	}



/* jvmbasic-name */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2namezd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_oz00_58)
	{
		{	/* SawJvm/names.sch 79 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_58)))->BgL_namez00);
		}

	}



/* &jvmbasic-name */
	obj_t BGl_z62jvmbasiczd2namezb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2804,
		obj_t BgL_oz00_2805)
	{
		{	/* SawJvm/names.sch 79 */
			return
				BGl_jvmbasiczd2namezd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2805));
		}

	}



/* jvmbasic-name-set! */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmbasiczd2namezd2setz12z12zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_59, obj_t BgL_vz00_60)
	{
		{	/* SawJvm/names.sch 80 */
			return
				((((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_oz00_59)))->BgL_namez00) =
				((obj_t) BgL_vz00_60), BUNSPEC);
		}

	}



/* &jvmbasic-name-set! */
	obj_t BGl_z62jvmbasiczd2namezd2setz12z70zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2806, obj_t BgL_oz00_2807, obj_t BgL_vz00_2808)
	{
		{	/* SawJvm/names.sch 80 */
			return
				BGl_jvmbasiczd2namezd2setz12z12zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2807), BgL_vz00_2808);
		}

	}



/* jvmbasic-id */
	BGL_EXPORTED_DEF obj_t BGl_jvmbasiczd2idzd2zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_oz00_61)
	{
		{	/* SawJvm/names.sch 81 */
			return
				(((BgL_typez00_bglt) COBJECT(
						((BgL_typez00_bglt) BgL_oz00_61)))->BgL_idz00);
		}

	}



/* &jvmbasic-id */
	obj_t BGl_z62jvmbasiczd2idzb0zzsaw_jvm_namesz00(obj_t BgL_envz00_2809,
		obj_t BgL_oz00_2810)
	{
		{	/* SawJvm/names.sch 81 */
			return
				BGl_jvmbasiczd2idzd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_oz00_2810));
		}

	}



/* names-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(BgL_jvmz00_bglt
		BgL_mez00_64)
	{
		{	/* SawJvm/names.scm 22 */
			BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00();
			BGl_forzd2eachzd2globalz12z12zzast_envz00
				(BGl_resetzd2globalz12zd2envz12zzbackend_cplibz00, BNIL);
			return
				BGl_forzd2eachzd2typez12z12zztype_envz00
				(BGl_saw_jvmzd2setzd2typezd2namesz12zd2envz12zzsaw_jvm_namesz00);
		}

	}



/* &names-initialization */
	obj_t BGl_z62nameszd2initializa7ationz17zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2811, obj_t BgL_mez00_2812)
	{
		{	/* SawJvm/names.scm 22 */
			return
				BGl_nameszd2initializa7ationz75zzsaw_jvm_namesz00(
				((BgL_jvmz00_bglt) BgL_mez00_2812));
		}

	}



/* reset-jvmstd-type! */
	bool_t BGl_resetzd2jvmstdzd2typez12z12zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 31 */
			{	/* SawJvm/names.scm 33 */
				obj_t BgL_g1477z00_2109;

				BgL_g1477z00_2109 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_l1475z00_2111;

					BgL_l1475z00_2111 = BgL_g1477z00_2109;
				BgL_zc3z04anonymousza31523ze3z87_2112:
					if (PAIRP(BgL_l1475z00_2111))
						{	/* SawJvm/names.scm 34 */
							{	/* SawJvm/names.scm 33 */
								obj_t BgL_xz00_2114;

								BgL_xz00_2114 = CAR(BgL_l1475z00_2111);
								{	/* SawJvm/names.scm 33 */
									BgL_typez00_bglt BgL_arg1528z00_2115;

									{	/* SawJvm/names.scm 33 */
										BgL_typez00_bglt BgL_tmp1134z00_2116;

										BgL_tmp1134z00_2116 =
											BGl_findzd2typezd2zztype_envz00(BgL_xz00_2114);
										{	/* SawJvm/names.scm 33 */
											BgL_jvmbasicz00_bglt BgL_wide1136z00_2118;

											BgL_wide1136z00_2118 =
												((BgL_jvmbasicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_jvmbasicz00_bgl))));
											{	/* SawJvm/names.scm 33 */
												obj_t BgL_auxz00_3127;
												BgL_objectz00_bglt BgL_tmpz00_3124;

												BgL_auxz00_3127 = ((obj_t) BgL_wide1136z00_2118);
												BgL_tmpz00_3124 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_tmp1134z00_2116));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3124,
													BgL_auxz00_3127);
											}
											((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_tmp1134z00_2116));
											{	/* SawJvm/names.scm 33 */
												long BgL_arg1536z00_2119;

												{	/* SawJvm/names.scm 33 */
													long BgL_res1830z00_2642;

													BgL_res1830z00_2642 =
														BGL_CLASS_INDEX(BGl_jvmbasicz00zzsaw_jvm_namesz00);
													BgL_arg1536z00_2119 = BgL_res1830z00_2642;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_tmp1134z00_2116)),
													BgL_arg1536z00_2119);
											}
											((BgL_typez00_bglt)
												((BgL_typez00_bglt) BgL_tmp1134z00_2116));
										}
										BgL_arg1528z00_2115 =
											((BgL_typez00_bglt)
											((BgL_typez00_bglt) BgL_tmp1134z00_2116));
									}
									((((BgL_typez00_bglt) COBJECT(BgL_arg1528z00_2115))->
											BgL_namez00) = ((obj_t) BgL_xz00_2114), BUNSPEC);
							}}
							{
								obj_t BgL_l1475z00_3141;

								BgL_l1475z00_3141 = CDR(BgL_l1475z00_2111);
								BgL_l1475z00_2111 = BgL_l1475z00_3141;
								goto BgL_zc3z04anonymousza31523ze3z87_2112;
							}
						}
					else
						{	/* SawJvm/names.scm 34 */
							((bool_t) 1);
						}
				}
			}
			{	/* SawJvm/names.scm 36 */
				obj_t BgL_g1481z00_2123;
				obj_t BgL_g1482z00_2124;

				BgL_g1481z00_2123 = CNST_TABLE_REF(((long) 1));
				BgL_g1482z00_2124 = CNST_TABLE_REF(((long) 2));
				{
					obj_t BgL_ll1478z00_2126;
					obj_t BgL_ll1479z00_2127;

					BgL_ll1478z00_2126 = BgL_g1481z00_2123;
					BgL_ll1479z00_2127 = BgL_g1482z00_2124;
				BgL_zc3z04anonymousza31538ze3z87_2128:
					if (NULLP(BgL_ll1478z00_2126))
						{	/* SawJvm/names.scm 37 */
							((bool_t) 1);
						}
					else
						{	/* SawJvm/names.scm 37 */
							{	/* SawJvm/names.scm 36 */
								obj_t BgL_xz00_2130;
								obj_t BgL_sz00_2131;

								BgL_xz00_2130 = CAR(((obj_t) BgL_ll1478z00_2126));
								BgL_sz00_2131 = CAR(((obj_t) BgL_ll1479z00_2127));
								{	/* SawJvm/names.scm 36 */
									BgL_typez00_bglt BgL_arg1552z00_2132;

									{	/* SawJvm/names.scm 36 */
										BgL_typez00_bglt BgL_tmp1138z00_2133;

										BgL_tmp1138z00_2133 =
											BGl_findzd2typezd2zztype_envz00(BgL_xz00_2130);
										{	/* SawJvm/names.scm 36 */
											BgL_jvmbasicz00_bglt BgL_wide1140z00_2135;

											BgL_wide1140z00_2135 =
												((BgL_jvmbasicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_jvmbasicz00_bgl))));
											{	/* SawJvm/names.scm 36 */
												obj_t BgL_auxz00_3156;
												BgL_objectz00_bglt BgL_tmpz00_3153;

												BgL_auxz00_3156 = ((obj_t) BgL_wide1140z00_2135);
												BgL_tmpz00_3153 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_tmp1138z00_2133));
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3153,
													BgL_auxz00_3156);
											}
											((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_tmp1138z00_2133));
											{	/* SawJvm/names.scm 36 */
												long BgL_arg1558z00_2136;

												{	/* SawJvm/names.scm 36 */
													long BgL_res1832z00_2652;

													BgL_res1832z00_2652 =
														BGL_CLASS_INDEX(BGl_jvmbasicz00zzsaw_jvm_namesz00);
													BgL_arg1558z00_2136 = BgL_res1832z00_2652;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt)
														((BgL_typez00_bglt) BgL_tmp1138z00_2133)),
													BgL_arg1558z00_2136);
											}
											((BgL_typez00_bglt)
												((BgL_typez00_bglt) BgL_tmp1138z00_2133));
										}
										BgL_arg1552z00_2132 =
											((BgL_typez00_bglt)
											((BgL_typez00_bglt) BgL_tmp1138z00_2133));
									}
									((((BgL_typez00_bglt) COBJECT(BgL_arg1552z00_2132))->
											BgL_namez00) = ((obj_t) BgL_sz00_2131), BUNSPEC);
							}}
							{	/* SawJvm/names.scm 37 */
								obj_t BgL_arg1561z00_2138;
								obj_t BgL_arg1564z00_2139;

								BgL_arg1561z00_2138 = CDR(((obj_t) BgL_ll1478z00_2126));
								BgL_arg1564z00_2139 = CDR(((obj_t) BgL_ll1479z00_2127));
								{
									obj_t BgL_ll1479z00_3175;
									obj_t BgL_ll1478z00_3174;

									BgL_ll1478z00_3174 = BgL_arg1561z00_2138;
									BgL_ll1479z00_3175 = BgL_arg1564z00_2139;
									BgL_ll1479z00_2127 = BgL_ll1479z00_3175;
									BgL_ll1478z00_2126 = BgL_ll1478z00_3174;
									goto BgL_zc3z04anonymousza31538ze3z87_2128;
								}
							}
						}
				}
			}
			{	/* SawJvm/names.scm 40 */
				obj_t BgL_g1486z00_2141;
				obj_t BgL_g1487z00_2142;

				BgL_g1486z00_2141 = CNST_TABLE_REF(((long) 3));
				BgL_g1487z00_2142 = CNST_TABLE_REF(((long) 4));
				{
					obj_t BgL_ll1483z00_2144;
					obj_t BgL_ll1484z00_2145;

					BgL_ll1483z00_2144 = BgL_g1486z00_2141;
					BgL_ll1484z00_2145 = BgL_g1487z00_2142;
				BgL_zc3z04anonymousza31565ze3z87_2146:
					if (NULLP(BgL_ll1483z00_2144))
						{	/* SawJvm/names.scm 42 */
							((bool_t) 1);
						}
					else
						{	/* SawJvm/names.scm 42 */
							{	/* SawJvm/names.scm 41 */
								obj_t BgL_vz00_2148;
								obj_t BgL_iz00_2149;

								BgL_vz00_2148 = CAR(((obj_t) BgL_ll1483z00_2144));
								BgL_iz00_2149 = CAR(((obj_t) BgL_ll1484z00_2145));
								{	/* SawJvm/names.scm 41 */
									BgL_typez00_bglt BgL_tmp1142z00_2150;

									BgL_tmp1142z00_2150 =
										BGl_findzd2typezd2zztype_envz00(BgL_vz00_2148);
									{	/* SawJvm/names.scm 41 */
										BgL_tvecz00_bglt BgL_wide1144z00_2152;

										BgL_wide1144z00_2152 =
											((BgL_tvecz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_tvecz00_bgl))));
										{	/* SawJvm/names.scm 41 */
											obj_t BgL_auxz00_3189;
											BgL_objectz00_bglt BgL_tmpz00_3186;

											BgL_auxz00_3189 = ((obj_t) BgL_wide1144z00_2152);
											BgL_tmpz00_3186 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_tmp1142z00_2150));
											BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3186, BgL_auxz00_3189);
										}
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_tmp1142z00_2150));
										{	/* SawJvm/names.scm 41 */
											long BgL_arg1573z00_2153;

											{	/* SawJvm/names.scm 41 */
												long BgL_res1834z00_2663;

												BgL_res1834z00_2663 =
													BGL_CLASS_INDEX(BGl_tvecz00zztvector_tvectorz00);
												BgL_arg1573z00_2153 = BgL_res1834z00_2663;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_tmp1142z00_2150)),
												BgL_arg1573z00_2153);
										}
										((BgL_typez00_bglt)
											((BgL_typez00_bglt) BgL_tmp1142z00_2150));
									}
									{
										BgL_tvecz00_bglt BgL_auxz00_3200;

										{
											obj_t BgL_auxz00_3201;

											{	/* SawJvm/names.scm 41 */
												BgL_objectz00_bglt BgL_tmpz00_3202;

												BgL_tmpz00_3202 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_tmp1142z00_2150));
												BgL_auxz00_3201 = BGL_OBJECT_WIDENING(BgL_tmpz00_3202);
											}
											BgL_auxz00_3200 = ((BgL_tvecz00_bglt) BgL_auxz00_3201);
										}
										((((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_3200))->
												BgL_itemzd2typezd2) =
											((BgL_typez00_bglt)
												BGl_findzd2typezd2zztype_envz00(BgL_iz00_2149)),
											BUNSPEC);
									}
									((BgL_typez00_bglt) BgL_tmp1142z00_2150);
							}}
							{	/* SawJvm/names.scm 42 */
								obj_t BgL_arg1575z00_2155;
								obj_t BgL_arg1578z00_2156;

								BgL_arg1575z00_2155 = CDR(((obj_t) BgL_ll1483z00_2144));
								BgL_arg1578z00_2156 = CDR(((obj_t) BgL_ll1484z00_2145));
								{
									obj_t BgL_ll1484z00_3215;
									obj_t BgL_ll1483z00_3214;

									BgL_ll1483z00_3214 = BgL_arg1575z00_2155;
									BgL_ll1484z00_3215 = BgL_arg1578z00_2156;
									BgL_ll1484z00_2145 = BgL_ll1484z00_3215;
									BgL_ll1483z00_2144 = BgL_ll1483z00_3214;
									goto BgL_zc3z04anonymousza31565ze3z87_2146;
								}
							}
						}
				}
			}
			{	/* SawJvm/names.scm 45 */
				obj_t BgL_g1490z00_2158;

				BgL_g1490z00_2158 = CNST_TABLE_REF(((long) 5));
				{
					obj_t BgL_l1488z00_2160;

					BgL_l1488z00_2160 = BgL_g1490z00_2158;
				BgL_zc3z04anonymousza31579ze3z87_2161:
					if (PAIRP(BgL_l1488z00_2160))
						{	/* SawJvm/names.scm 46 */
							{	/* SawJvm/names.scm 45 */
								obj_t BgL_sz00_2163;

								BgL_sz00_2163 = CAR(BgL_l1488z00_2160);
								{	/* SawJvm/names.scm 45 */
									BgL_typez00_bglt BgL_arg1582z00_2164;
									obj_t BgL_arg1584z00_2165;

									{	/* SawJvm/names.scm 45 */
										obj_t BgL_arg1588z00_2166;

										BgL_arg1588z00_2166 = CAR(((obj_t) BgL_sz00_2163));
										BgL_arg1582z00_2164 =
											BGl_findzd2typezd2zztype_envz00(BgL_arg1588z00_2166);
									}
									BgL_arg1584z00_2165 = CDR(((obj_t) BgL_sz00_2163));
									((((BgL_typez00_bglt) COBJECT(BgL_arg1582z00_2164))->
											BgL_namez00) = ((obj_t) BgL_arg1584z00_2165), BUNSPEC);
								}
							}
							{
								obj_t BgL_l1488z00_3226;

								BgL_l1488z00_3226 = CDR(BgL_l1488z00_2160);
								BgL_l1488z00_2160 = BgL_l1488z00_3226;
								goto BgL_zc3z04anonymousza31579ze3z87_2161;
							}
						}
					else
						{	/* SawJvm/names.scm 46 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* &saw_jvm-set-type-names! */
	obj_t BGl_z62saw_jvmzd2setzd2typezd2namesz12za2zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2815, obj_t BgL_typez00_2816)
	{
		{	/* SawJvm/names.scm 67 */
			return
				BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(
				((BgL_typez00_bglt) BgL_typez00_2816));
		}

	}



/* get-jvmtype */
	obj_t BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00(BgL_typez00_bglt BgL_typez00_66)
	{
		{	/* SawJvm/names.scm 70 */
			{	/* SawJvm/names.scm 71 */
				obj_t BgL_namez00_2169;

				BgL_namez00_2169 =
					(((BgL_typez00_bglt) COBJECT(BgL_typez00_66))->BgL_namez00);
				if (SYMBOLP(BgL_namez00_2169))
					{	/* SawJvm/names.scm 72 */
						return BgL_namez00_2169;
					}
				else
					{	/* SawJvm/names.scm 74 */
						obj_t BgL_jtypez00_2171;

						BgL_jtypez00_2171 =
							BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_66);
						((((BgL_typez00_bglt) COBJECT(BgL_typez00_66))->BgL_namez00) =
							((obj_t) BgL_jtypez00_2171), BUNSPEC);
						return BgL_jtypez00_2171;
					}
			}
		}

	}



/* build-type-name */
	obj_t BGl_buildzd2typezd2namez00zzsaw_jvm_namesz00(BgL_typez00_bglt
		BgL_typez00_67)
	{
		{	/* SawJvm/names.scm 78 */
			{	/* SawJvm/names.scm 80 */
				bool_t BgL_test2011z00_3235;

				{	/* SawJvm/names.scm 80 */
					bool_t BgL_res1837z00_2678;

					BgL_res1837z00_2678 =
						BGl_isazf3zf3zz__objectz00(
						((obj_t) BgL_typez00_67), BGl_tclassz00zzobject_classz00);
					BgL_test2011z00_3235 = BgL_res1837z00_2678;
				}
				if (BgL_test2011z00_3235)
					{	/* SawJvm/names.scm 80 */
						if (
							((((BgL_typez00_bglt) COBJECT(BgL_typez00_67))->BgL_idz00) ==
								CNST_TABLE_REF(((long) 6))))
							{	/* SawJvm/names.scm 81 */
								return CNST_TABLE_REF(((long) 6));
							}
						else
							{	/* SawJvm/names.scm 81 */
								return
									BGl_qualifiedzd2tclasszd2namez00zzbackend_cplibz00(
									((BgL_typez00_bglt) BgL_typez00_67));
							}
					}
				else
					{	/* SawJvm/names.scm 84 */
						bool_t BgL_test2013z00_3245;

						{	/* SawJvm/names.scm 84 */
							bool_t BgL_res1838z00_2680;

							BgL_res1838z00_2680 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_typez00_67), BGl_wclassz00zzobject_classz00);
							BgL_test2013z00_3245 = BgL_res1838z00_2680;
						}
						if (BgL_test2013z00_3245)
							{	/* SawJvm/names.scm 84 */
								return
									BGl_qualifiedzd2wclasszd2namez00zzbackend_cplibz00(
									((BgL_typez00_bglt) BgL_typez00_67));
							}
						else
							{	/* SawJvm/names.scm 86 */
								bool_t BgL_test2014z00_3250;

								{	/* SawJvm/names.scm 86 */
									bool_t BgL_res1839z00_2681;

									BgL_res1839z00_2681 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_typez00_67), BGl_jclassz00zzobject_classz00);
									BgL_test2014z00_3250 = BgL_res1839z00_2681;
								}
								if (BgL_test2014z00_3250)
									{	/* SawJvm/names.scm 86 */
										return
											BGl_qualifiedzd2jclasszd2namez00zzbackend_cplibz00(
											((BgL_typez00_bglt) BgL_typez00_67));
									}
								else
									{	/* SawJvm/names.scm 87 */
										bool_t BgL_test2015z00_3255;

										{	/* SawJvm/names.scm 87 */
											bool_t BgL_res1840z00_2682;

											BgL_res1840z00_2682 =
												BGl_isazf3zf3zz__objectz00(
												((obj_t) BgL_typez00_67),
												BGl_tvecz00zztvector_tvectorz00);
											BgL_test2015z00_3255 = BgL_res1840z00_2682;
										}
										if (BgL_test2015z00_3255)
											{	/* SawJvm/names.scm 87 */
												{	/* SawJvm/names.scm 88 */
													BgL_typez00_bglt BgL_arg1604z00_2179;

													{
														BgL_tvecz00_bglt BgL_auxz00_3258;

														{
															obj_t BgL_auxz00_3259;

															{	/* SawJvm/names.scm 88 */
																BgL_objectz00_bglt BgL_tmpz00_3260;

																BgL_tmpz00_3260 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_typez00_67));
																BgL_auxz00_3259 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3260);
															}
															BgL_auxz00_3258 =
																((BgL_tvecz00_bglt) BgL_auxz00_3259);
														}
														BgL_arg1604z00_2179 =
															(((BgL_tvecz00_bglt) COBJECT(BgL_auxz00_3258))->
															BgL_itemzd2typezd2);
													}
													BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00
														(BgL_arg1604z00_2179);
												}
												return BGl_string1952z00zzsaw_jvm_namesz00;
											}
										else
											{	/* SawJvm/names.scm 90 */
												bool_t BgL_test2016z00_3267;

												{	/* SawJvm/names.scm 90 */
													bool_t BgL_res1841z00_2685;

													BgL_res1841z00_2685 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_typez00_67),
														BGl_jarrayz00zzforeign_jtypez00);
													BgL_test2016z00_3267 = BgL_res1841z00_2685;
												}
												if (BgL_test2016z00_3267)
													{	/* SawJvm/names.scm 90 */
														{	/* SawJvm/names.scm 91 */
															BgL_typez00_bglt BgL_arg1606z00_2181;

															{
																BgL_jarrayz00_bglt BgL_auxz00_3270;

																{
																	obj_t BgL_auxz00_3271;

																	{	/* SawJvm/names.scm 91 */
																		BgL_objectz00_bglt BgL_tmpz00_3272;

																		BgL_tmpz00_3272 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_typez00_67));
																		BgL_auxz00_3271 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3272);
																	}
																	BgL_auxz00_3270 =
																		((BgL_jarrayz00_bglt) BgL_auxz00_3271);
																}
																BgL_arg1606z00_2181 =
																	(((BgL_jarrayz00_bglt)
																		COBJECT(BgL_auxz00_3270))->
																	BgL_itemzd2typezd2);
															}
															BGl_getzd2jvmtypezd2zzsaw_jvm_namesz00
																(BgL_arg1606z00_2181);
														}
														return BGl_string1952z00zzsaw_jvm_namesz00;
													}
												else
													{	/* SawJvm/names.scm 90 */
														return
															BGl_qualifiedzd2typezd2namez00zzbackend_cplibz00
															(BgL_typez00_67);
													}
											}
									}
							}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			{	/* SawJvm/names.scm 17 */
				obj_t BgL_arg1626z00_2186;
				obj_t BgL_arg1627z00_2187;

				{	/* SawJvm/names.scm 17 */
					obj_t BgL_v1491z00_2223;

					BgL_v1491z00_2223 = create_vector(((long) 0));
					BgL_arg1626z00_2186 = BgL_v1491z00_2223;
				}
				{	/* SawJvm/names.scm 17 */
					obj_t BgL_v1492z00_2224;

					BgL_v1492z00_2224 = create_vector(((long) 0));
					BgL_arg1627z00_2187 = BgL_v1492z00_2224;
				}
				return (BGl_jvmbasicz00zzsaw_jvm_namesz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 8)), BGl_typez00zztype_typez00,
						((long) 2188), BGl_proc1956z00zzsaw_jvm_namesz00,
						BGl_proc1955z00zzsaw_jvm_namesz00, BFALSE,
						BGl_proc1954z00zzsaw_jvm_namesz00,
						BGl_proc1953z00zzsaw_jvm_namesz00, BgL_arg1626z00_2186,
						BgL_arg1627z00_2187), BUNSPEC);
		}}

	}



/* &lambda1641 */
	BgL_typez00_bglt BGl_z62lambda1641z62zzsaw_jvm_namesz00(obj_t BgL_envz00_2821,
		obj_t BgL_o1129z00_2822)
	{
		{	/* SawJvm/names.scm 17 */
			{	/* SawJvm/names.scm 17 */
				long BgL_arg1644z00_2866;

				{	/* SawJvm/names.scm 17 */
					obj_t BgL_arg1652z00_2867;

					{	/* SawJvm/names.scm 17 */
						obj_t BgL_arg1662z00_2868;

						{	/* SawJvm/names.scm 17 */
							long BgL_arg1816z00_2869;

							{	/* SawJvm/names.scm 17 */
								long BgL_arg1817z00_2870;

								{	/* SawJvm/names.scm 17 */
									long BgL_res1845z00_2871;

									BgL_res1845z00_2871 =
										BGL_OBJECT_CLASS_NUM(
										((BgL_objectz00_bglt)
											((BgL_typez00_bglt) BgL_o1129z00_2822)));
									BgL_arg1817z00_2870 = BgL_res1845z00_2871;
								}
								BgL_arg1816z00_2869 = (BgL_arg1817z00_2870 - OBJECT_TYPE);
							}
							BgL_arg1662z00_2868 =
								VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
								BgL_arg1816z00_2869);
						}
						BgL_arg1652z00_2867 =
							BGl_classzd2superzd2zz__objectz00(BgL_arg1662z00_2868);
					}
					{	/* SawJvm/names.scm 17 */
						long BgL_res1847z00_2872;

						{	/* SawJvm/names.scm 17 */
							obj_t BgL_tmpz00_3291;

							BgL_tmpz00_3291 = ((obj_t) BgL_arg1652z00_2867);
							BgL_res1847z00_2872 = BGL_CLASS_INDEX(BgL_tmpz00_3291);
						}
						BgL_arg1644z00_2866 = BgL_res1847z00_2872;
				}}
				BGL_OBJECT_CLASS_NUM_SET(
					((BgL_objectz00_bglt)
						((BgL_typez00_bglt) BgL_o1129z00_2822)), BgL_arg1644z00_2866);
			}
			{	/* SawJvm/names.scm 17 */
				BgL_objectz00_bglt BgL_tmpz00_3297;

				BgL_tmpz00_3297 =
					((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1129z00_2822));
				BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3297, BFALSE);
			}
			((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_o1129z00_2822));
			return ((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1129z00_2822));
		}

	}



/* &<@anonymous:1640> */
	obj_t BGl_z62zc3z04anonymousza31640ze3ze5zzsaw_jvm_namesz00(obj_t
		BgL_envz00_2823, obj_t BgL_new1128z00_2824)
	{
		{	/* SawJvm/names.scm 17 */
			{
				BgL_typez00_bglt BgL_auxz00_3305;

				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt)
									((BgL_typez00_bglt) BgL_new1128z00_2824))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 9))), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_namez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_siza7eza7) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_classz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_coercezd2tozd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_parentsz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_initzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_magiczf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_z42z42) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_aliasz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_pointedzd2tozd2byz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_tvectorz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_locationz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_importzd2locationzd2) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt)
										BgL_new1128z00_2824))))->BgL_occurrencez00) =
					((int) (int) (((long) 0))), BUNSPEC);
				BgL_auxz00_3305 = ((BgL_typez00_bglt) BgL_new1128z00_2824);
				return ((obj_t) BgL_auxz00_3305);
			}
		}

	}



/* &lambda1635 */
	BgL_typez00_bglt BGl_z62lambda1635z62zzsaw_jvm_namesz00(obj_t BgL_envz00_2825,
		obj_t BgL_o1125z00_2826)
	{
		{	/* SawJvm/names.scm 17 */
			{	/* SawJvm/names.scm 17 */
				BgL_jvmbasicz00_bglt BgL_wide1127z00_2875;

				BgL_wide1127z00_2875 =
					((BgL_jvmbasicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jvmbasicz00_bgl))));
				{	/* SawJvm/names.scm 17 */
					obj_t BgL_auxz00_3360;
					BgL_objectz00_bglt BgL_tmpz00_3356;

					BgL_auxz00_3360 = ((obj_t) BgL_wide1127z00_2875);
					BgL_tmpz00_3356 =
						((BgL_objectz00_bglt)
						((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1125z00_2826)));
					BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3356, BgL_auxz00_3360);
				}
				((BgL_objectz00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1125z00_2826)));
				{	/* SawJvm/names.scm 17 */
					long BgL_arg1639z00_2876;

					{	/* SawJvm/names.scm 17 */
						long BgL_res1844z00_2877;

						BgL_res1844z00_2877 =
							BGL_CLASS_INDEX(BGl_jvmbasicz00zzsaw_jvm_namesz00);
						BgL_arg1639z00_2876 = BgL_res1844z00_2877;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt)
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_o1125z00_2826))), BgL_arg1639z00_2876);
				}
				return
					((BgL_typez00_bglt)
					((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_o1125z00_2826)));
			}
		}

	}



/* &lambda1628 */
	BgL_typez00_bglt BGl_z62lambda1628z62zzsaw_jvm_namesz00(obj_t BgL_envz00_2827,
		obj_t BgL_id1110z00_2828, obj_t BgL_name1111z00_2829,
		obj_t BgL_siza7e1112za7_2830, obj_t BgL_class1113z00_2831,
		obj_t BgL_coercezd2to1114zd2_2832, obj_t BgL_parents1115z00_2833,
		obj_t BgL_initzf31116zf3_2834, obj_t BgL_magiczf31117zf3_2835,
		obj_t BgL_z421118z42_2836, obj_t BgL_alias1119z00_2837,
		obj_t BgL_pointedzd2tozd2by1120z00_2838, obj_t BgL_tvector1121z00_2839,
		obj_t BgL_location1122z00_2840, obj_t BgL_importzd2location1123zd2_2841,
		obj_t BgL_occurrence1124z00_2842)
	{
		{	/* SawJvm/names.scm 17 */
			{	/* SawJvm/names.scm 17 */
				bool_t BgL_initzf31116zf3_2879;
				bool_t BgL_magiczf31117zf3_2880;
				int BgL_occurrence1124z00_2881;

				BgL_initzf31116zf3_2879 = CBOOL(BgL_initzf31116zf3_2834);
				BgL_magiczf31117zf3_2880 = CBOOL(BgL_magiczf31117zf3_2835);
				BgL_occurrence1124z00_2881 = CINT(BgL_occurrence1124z00_2842);
				{	/* SawJvm/names.scm 17 */
					BgL_typez00_bglt BgL_new1149z00_2882;

					{	/* SawJvm/names.scm 17 */
						BgL_typez00_bglt BgL_tmp1147z00_2883;
						BgL_jvmbasicz00_bglt BgL_wide1148z00_2884;

						{
							BgL_typez00_bglt BgL_auxz00_3377;

							{	/* SawJvm/names.scm 17 */
								BgL_typez00_bglt BgL_new1146z00_2885;

								BgL_new1146z00_2885 =
									((BgL_typez00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_typez00_bgl))));
								{	/* SawJvm/names.scm 17 */
									long BgL_arg1634z00_2886;

									{	/* SawJvm/names.scm 17 */
										long BgL_res1842z00_2887;

										BgL_res1842z00_2887 =
											BGL_CLASS_INDEX(BGl_typez00zztype_typez00);
										BgL_arg1634z00_2886 = BgL_res1842z00_2887;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1146z00_2885),
										BgL_arg1634z00_2886);
								}
								{	/* SawJvm/names.scm 17 */
									BgL_objectz00_bglt BgL_tmpz00_3382;

									BgL_tmpz00_3382 = ((BgL_objectz00_bglt) BgL_new1146z00_2885);
									BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3382, BFALSE);
								}
								((BgL_objectz00_bglt) BgL_new1146z00_2885);
								BgL_auxz00_3377 = BgL_new1146z00_2885;
							}
							BgL_tmp1147z00_2883 = ((BgL_typez00_bglt) BgL_auxz00_3377);
						}
						BgL_wide1148z00_2884 =
							((BgL_jvmbasicz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jvmbasicz00_bgl))));
						{	/* SawJvm/names.scm 17 */
							obj_t BgL_auxz00_3390;
							BgL_objectz00_bglt BgL_tmpz00_3388;

							BgL_auxz00_3390 = ((obj_t) BgL_wide1148z00_2884);
							BgL_tmpz00_3388 = ((BgL_objectz00_bglt) BgL_tmp1147z00_2883);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_3388, BgL_auxz00_3390);
						}
						((BgL_objectz00_bglt) BgL_tmp1147z00_2883);
						{	/* SawJvm/names.scm 17 */
							long BgL_arg1631z00_2888;

							{	/* SawJvm/names.scm 17 */
								long BgL_res1843z00_2889;

								BgL_res1843z00_2889 =
									BGL_CLASS_INDEX(BGl_jvmbasicz00zzsaw_jvm_namesz00);
								BgL_arg1631z00_2888 = BgL_res1843z00_2889;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_tmp1147z00_2883),
								BgL_arg1631z00_2888);
						}
						BgL_new1149z00_2882 = ((BgL_typez00_bglt) BgL_tmp1147z00_2883);
					}
					((((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_new1149z00_2882)))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1110z00_2828)), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_namez00) =
						((obj_t) BgL_name1111z00_2829), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_siza7eza7) =
						((obj_t) BgL_siza7e1112za7_2830), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_classz00) =
						((obj_t) BgL_class1113z00_2831), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_coercezd2tozd2) =
						((obj_t) BgL_coercezd2to1114zd2_2832), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_parentsz00) =
						((obj_t) BgL_parents1115z00_2833), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_initzf3zf3) =
						((bool_t) BgL_initzf31116zf3_2879), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_magiczf3zf3) =
						((bool_t) BgL_magiczf31117zf3_2880), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_z42z42) =
						((obj_t) BgL_z421118z42_2836), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_aliasz00) =
						((obj_t) BgL_alias1119z00_2837), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_pointedzd2tozd2byz00) =
						((obj_t) BgL_pointedzd2tozd2by1120z00_2838), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_tvectorz00) =
						((obj_t) BgL_tvector1121z00_2839), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_locationz00) =
						((obj_t) BgL_location1122z00_2840), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_importzd2locationzd2) =
						((obj_t) BgL_importzd2location1123zd2_2841), BUNSPEC);
					((((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt)
										BgL_new1149z00_2882)))->BgL_occurrencez00) =
						((int) BgL_occurrence1124z00_2881), BUNSPEC);
					return BgL_new1149z00_2882;
				}
			}
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_jvm_namesz00()
	{
		{	/* SawJvm/names.scm 1 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zztvector_tvectorz00(((long) 501518159),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 287572811),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_bvmz00(((long) 336068342),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			BGl_modulezd2initializa7ationz75zzbackend_jvm_classz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_cplibz00(((long) 395790731),
				BSTRING_TO_STRING(BGl_string1957z00zzsaw_jvm_namesz00));
		}

	}

#ifdef __cplusplus
}
#endif
