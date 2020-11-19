/*===========================================================================*/
/*   (Module/class.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/class.scm) */
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


	extern obj_t
		BGl_classgenzd2nilzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	static obj_t BGl_forcezd2classzd2accessesz00zzmodule_classz00();
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_makezd2classzd2fieldsz00zzmodule_classz00(obj_t);
	static long BGl_getzd2classzd2hashz00zzmodule_classz00(obj_t);
	extern obj_t
		BGl_classgenzd2makezd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	static obj_t
		BGl_z62classzd2finaliza7erzd2addzd2staticz12z05zzmodule_classz00(obj_t);
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00;
	static obj_t BGl_z62classzd2finaliza7erz17zzmodule_classz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t,
		obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zzmodule_classz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_z62zc3z04anonymousza31798ze3ze5zzmodule_classz00(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzmodule_classz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_classz00();
	static obj_t BGl_z62zc3z04anonymousza31340ze3ze5zzmodule_classz00(obj_t);
	static obj_t BGl_z62getzd2objectzd2unitz62zzmodule_classz00(obj_t);
	extern BgL_typez00_bglt
		BGl_declarezd2classzd2typez12z12zzobject_classz00(obj_t, BgL_globalz00_bglt,
		obj_t, bool_t, bool_t, obj_t);
	BGL_IMPORT long BGl_getzd2hashnumberzd2persistentz00zz__hashz00(obj_t);
	extern obj_t
		BGl_classgenzd2allocatezd2anonymousz00zzobject_classgenz00
		(BgL_typez00_bglt);
	extern obj_t BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(obj_t);
	static obj_t BGl_z62getzd2methodzd2unitz62zzmodule_classz00(obj_t);
	static obj_t BGl_makezd2classzd2virtualzd2fieldszd2zzmodule_classz00(obj_t);
	extern bool_t BGl_slotzd2defaultzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_producezd2modulezd2clausez12z12zzmodule_modulez00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_za2objectzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_slotzd2defaultzd2exprze70ze7zzmodule_classz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31349ze3ze5zzmodule_classz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_classz00();
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
	static long BGl_loopze70ze7zzmodule_classz00(obj_t, long);
	BGL_EXPORTED_DECL BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_getterze70ze7zzmodule_classz00(obj_t, obj_t);
	static obj_t BGl_z62declarezd2widezd2classz12z70zzmodule_classz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62getzd2genericzd2unitz62zzmodule_classz00(obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2exportzd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62declarezd2classz12za2zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_za2methodzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	static obj_t BGl_za2genericzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern bool_t BGl_widezd2classzf3z21zzobject_classz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_classz00();
	BGL_EXPORTED_DECL obj_t BGl_classzd2finaliza7erz75zzmodule_classz00();
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_classz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern bool_t
		BGl_checkzd2classzd2declarationzf3zf3zzobject_classz00(BgL_typez00_bglt,
		obj_t);
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_z62delayzd2classzd2accessorsz12z70zzmodule_classz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	extern obj_t BGl_za2debugzd2moduleza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_genzd2registerzd2classz12z12zzmodule_classz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2objectzd2unitz00zzmodule_classz00();
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31530ze3ze5zzmodule_classz00(obj_t,
		obj_t);
	extern obj_t BGl_setzd2classzd2slotsz12z12zzobject_classz00(BgL_typez00_bglt,
		obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	BGL_EXPORTED_DECL obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00();
	extern obj_t
		BGl_classgenzd2widenzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_setterze70ze7zzmodule_classz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classgenz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_coercionz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_impusez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	extern obj_t BGl_importzd2parserzd2zzmodule_impusez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_typezd2defaultzd2idze70ze7zzmodule_classz00(obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_classz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_classz00();
	static BgL_typez00_bglt
		BGl_declarezd2importzd2classz12z12zzmodule_classz00(obj_t, obj_t, obj_t,
		bool_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_classz00();
	extern obj_t
		BGl_classgenzd2slotzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt,
		BgL_slotz00_bglt);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern obj_t
		BGl_classgenzd2shrinkzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00();
	extern obj_t
		BGl_findzd2classzd2constructorz00zzobject_classz00(BgL_typez00_bglt);
	static obj_t BGl_epairifyzd2slotze70z35zzmodule_classz00(obj_t, obj_t);
	static obj_t __cnst[33];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2finaliza7erzd2addzd2staticz12zd2envzb5zzmodule_classz00,
		BgL_bgl_za762classza7d2final2102z00,
		BGl_z62classzd2finaliza7erzd2addzd2staticz12z05zzmodule_classz00, 0L,
		BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2objectzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl_za762getza7d2objectza72103za7,
		BGl_z62getzd2objectzd2unitz62zzmodule_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_delayzd2classzd2accessorsz12zd2envzc0zzmodule_classz00,
		BgL_bgl_za762delayza7d2class2104z00,
		BGl_z62delayzd2classzd2accessorsz12z70zzmodule_classz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classzd2finaliza7erzd2envza7zzmodule_classz00,
		BgL_bgl_za762classza7d2final2105z00,
		BGl_z62classzd2finaliza7erz17zzmodule_classz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2094z00zzmodule_classz00,
		BgL_bgl_string2094za700za7za7m2106za7, "bgl_init_module_debug_object(\"",
		30);
	      DEFINE_STRING(BGl_string2095z00zzmodule_classz00,
		BgL_bgl_string2095za700za7za7m2107za7, "\")", 2);
	      DEFINE_STRING(BGl_string2096z00zzmodule_classz00,
		BgL_bgl_string2096za700za7za7m2108za7, "module_class", 12);
	      DEFINE_STRING(BGl_string2097z00zzmodule_classz00,
		BgL_bgl_string2097za700za7za7m2109za7,
		"generic method unit object (#unspecified) begin pragma::void module void staged call-next-virtual-setter call-next-virtual-getter call-next-slot cons obj _ call-virtual-setter v lambda call-virtual-getter o make-class-field vector define quote register-class! __object @ widening wide plain final (export static) ",
		313);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2widezd2classz12zd2envzc0zzmodule_classz00,
		BgL_bgl_za762declareza7d2wid2110z00,
		BGl_z62declarezd2widezd2classz12z70zzmodule_classz00, 0L, BUNSPEC, 5);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2genericzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl_za762getza7d2generic2111z00,
		BGl_z62getzd2genericzd2unitz62zzmodule_classz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2classz12zd2envz12zzmodule_classz00,
		BgL_bgl_za762declareza7d2cla2112z00,
		BGl_z62declarezd2classz12za2zzmodule_classz00, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2methodzd2unitzd2envzd2zzmodule_classz00,
		BgL_bgl_za762getza7d2methodza72113za7,
		BGl_z62getzd2methodzd2unitz62zzmodule_classz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2declaredzd2classesza2zd2zzmodule_classz00));
		     ADD_ROOT((void *) (&BGl_za2objectzd2unitza2zd2zzmodule_classz00));
		     ADD_ROOT((void *) (&BGl_za2classzd2accessesza2zd2zzmodule_classz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_classz00));
		     ADD_ROOT((void *) (&BGl_za2methodzd2unitza2zd2zzmodule_classz00));
		     ADD_ROOT((void *) (&BGl_za2genericzd2unitza2zd2zzmodule_classz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long
		BgL_checksumz00_2794, char *BgL_fromz00_2795)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_classz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_classz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_classz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_classz00();
					BGl_cnstzd2initzd2zzmodule_classz00();
					BGl_importedzd2moduleszd2initz00zzmodule_classz00();
					return BGl_toplevelzd2initzd2zzmodule_classz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__bitz00(((long) 0), "module_class");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_class");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "module_class");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			{	/* Module/class.scm 15 */
				obj_t BgL_cportz00_2696;

				{	/* Module/class.scm 15 */
					obj_t BgL_stringz00_2704;

					BgL_stringz00_2704 = BGl_string2097z00zzmodule_classz00;
					{	/* Module/class.scm 15 */
						obj_t BgL_startz00_2705;

						BgL_startz00_2705 = BINT(((long) 0));
						{	/* Module/class.scm 15 */
							obj_t BgL_endz00_2706;

							BgL_endz00_2706 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2704)));
							{	/* Module/class.scm 15 */

								BgL_cportz00_2696 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2704, BgL_startz00_2705, BgL_endz00_2706);
				}}}}
				{
					long BgL_iz00_2697;

					BgL_iz00_2697 = ((long) 32);
				BgL_loopz00_2698:
					if ((BgL_iz00_2697 == ((long) -1)))
						{	/* Module/class.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/class.scm 15 */
							{	/* Module/class.scm 15 */
								obj_t BgL_arg2100z00_2700;

								{	/* Module/class.scm 15 */

									{	/* Module/class.scm 15 */
										obj_t BgL_locationz00_2702;

										BgL_locationz00_2702 = BBOOL(((bool_t) 0));
										{	/* Module/class.scm 15 */

											BgL_arg2100z00_2700 =
												BGl_readz00zz__readerz00(BgL_cportz00_2696,
												BgL_locationz00_2702);
										}
									}
								}
								{	/* Module/class.scm 15 */
									int BgL_tmpz00_2825;

									BgL_tmpz00_2825 = (int) (BgL_iz00_2697);
									CNST_TABLE_SET(BgL_tmpz00_2825, BgL_arg2100z00_2700);
							}}
							{	/* Module/class.scm 15 */
								int BgL_auxz00_2703;

								BgL_auxz00_2703 = (int) ((BgL_iz00_2697 - ((long) 1)));
								{
									long BgL_iz00_2830;

									BgL_iz00_2830 = (long) (BgL_auxz00_2703);
									BgL_iz00_2697 = BgL_iz00_2830;
									goto BgL_loopz00_2698;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			BGl_za2objectzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2methodzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2genericzd2unitza2zd2zzmodule_classz00 = BUNSPEC;
			BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
			return (BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_classz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1727;

				BgL_headz00_1727 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1728;
					obj_t BgL_tailz00_1729;

					BgL_prevz00_1728 = BgL_headz00_1727;
					BgL_tailz00_1729 = BgL_l1z00_1;
				BgL_loopz00_1730:
					if (PAIRP(BgL_tailz00_1729))
						{
							obj_t BgL_newzd2prevzd2_1732;

							BgL_newzd2prevzd2_1732 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1729), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1728, BgL_newzd2prevzd2_1732);
							{
								obj_t BgL_tailz00_2840;
								obj_t BgL_prevz00_2839;

								BgL_prevz00_2839 = BgL_newzd2prevzd2_1732;
								BgL_tailz00_2840 = CDR(BgL_tailz00_1729);
								BgL_tailz00_1729 = BgL_tailz00_2840;
								BgL_prevz00_1728 = BgL_prevz00_2839;
								goto BgL_loopz00_1730;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1727);
				}
			}
		}

	}



/* get-class-hash */
	long BGl_getzd2classzd2hashz00zzmodule_classz00(obj_t BgL_defz00_25)
	{
		{	/* ../runtime/Llib/object.sch 19 */
			return BGl_loopze70ze7zzmodule_classz00(BgL_defz00_25, ((long) 1705));
		}

	}



/* loop~0 */
	long BGl_loopze70ze7zzmodule_classz00(obj_t BgL_defz00_1751,
		long BgL_hashz00_1752)
	{
		{	/* ../runtime/Llib/object.sch 24 */
		BGl_loopze70ze7zzmodule_classz00:
			if (NULLP(BgL_defz00_1751))
				{	/* ../runtime/Llib/object.sch 27 */
					return BgL_hashz00_1752;
				}
			else
				{	/* ../runtime/Llib/object.sch 27 */
					if (PAIRP(BgL_defz00_1751))
						{
							long BgL_hashz00_2850;
							obj_t BgL_defz00_2848;

							BgL_defz00_2848 = CDR(BgL_defz00_1751);
							BgL_hashz00_2850 =
								BGl_loopze70ze7zzmodule_classz00(CAR(BgL_defz00_1751),
								(((long) 1966) ^ BgL_hashz00_1752));
							BgL_hashz00_1752 = BgL_hashz00_2850;
							BgL_defz00_1751 = BgL_defz00_2848;
							goto BGl_loopze70ze7zzmodule_classz00;
						}
					else
						{	/* ../runtime/Llib/object.sch 29 */
							return
								(
								(BGl_getzd2hashnumberzd2persistentz00zz__hashz00
									(BgL_defz00_1751) & ((long) 65535)) ^ BgL_hashz00_1752);
		}}}

	}



/* get-object-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2objectzd2unitz00zzmodule_classz00()
	{
		{	/* Module/class.scm 60 */
			return BGl_za2objectzd2unitza2zd2zzmodule_classz00;
		}

	}



/* &get-object-unit */
	obj_t BGl_z62getzd2objectzd2unitz62zzmodule_classz00(obj_t BgL_envz00_2652)
	{
		{	/* Module/class.scm 60 */
			return BGl_getzd2objectzd2unitz00zzmodule_classz00();
		}

	}



/* get-method-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2methodzd2unitz00zzmodule_classz00()
	{
		{	/* Module/class.scm 66 */
			return BGl_za2methodzd2unitza2zd2zzmodule_classz00;
		}

	}



/* &get-method-unit */
	obj_t BGl_z62getzd2methodzd2unitz62zzmodule_classz00(obj_t BgL_envz00_2653)
	{
		{	/* Module/class.scm 66 */
			return BGl_getzd2methodzd2unitz00zzmodule_classz00();
		}

	}



/* get-generic-unit */
	BGL_EXPORTED_DEF obj_t BGl_getzd2genericzd2unitz00zzmodule_classz00()
	{
		{	/* Module/class.scm 72 */
			return BGl_za2genericzd2unitza2zd2zzmodule_classz00;
		}

	}



/* &get-generic-unit */
	obj_t BGl_z62getzd2genericzd2unitz62zzmodule_classz00(obj_t BgL_envz00_2654)
	{
		{	/* Module/class.scm 72 */
			return BGl_getzd2genericzd2unitz00zzmodule_classz00();
		}

	}



/* declare-class! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2classz12zc0zzmodule_classz00(obj_t
		BgL_classzd2defzd2_26, obj_t BgL_modulez00_27, obj_t BgL_importz00_28,
		bool_t BgL_finalzf3zf3_29, bool_t BgL_abstractzf3zf3_30,
		obj_t BgL_defzd2srczd2_31, obj_t BgL_declzd2srczd2_32)
	{
		{	/* Module/class.scm 78 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_importz00_28,
						CNST_TABLE_REF(((long) 0)))))
				{	/* Module/class.scm 83 */
					obj_t BgL_arg1331z00_2437;

					if (BgL_finalzf3zf3_29)
						{	/* Module/class.scm 83 */
							BgL_arg1331z00_2437 = CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Module/class.scm 83 */
							BgL_arg1331z00_2437 = CNST_TABLE_REF(((long) 2));
						}
					return
						((obj_t)
						BGl_declarezd2exportzd2classz12z12zzmodule_classz00
						(BgL_classzd2defzd2_26, BgL_modulez00_27, BgL_arg1331z00_2437,
							BgL_abstractzf3zf3_30, BgL_defzd2srczd2_31, BgL_declzd2srczd2_32,
							BgL_importz00_28));
				}
			else
				{	/* Module/class.scm 89 */
					obj_t BgL_arg1334z00_2438;

					if (BgL_finalzf3zf3_29)
						{	/* Module/class.scm 89 */
							BgL_arg1334z00_2438 = CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Module/class.scm 89 */
							BgL_arg1334z00_2438 = CNST_TABLE_REF(((long) 2));
						}
					return
						((obj_t)
						BGl_declarezd2importzd2classz12z12zzmodule_classz00
						(BgL_classzd2defzd2_26, BgL_modulez00_27, BgL_arg1334z00_2438,
							BgL_abstractzf3zf3_30, BgL_defzd2srczd2_31,
							BgL_declzd2srczd2_32));
				}
		}

	}



/* &declare-class! */
	obj_t BGl_z62declarezd2classz12za2zzmodule_classz00(obj_t BgL_envz00_2655,
		obj_t BgL_classzd2defzd2_2656, obj_t BgL_modulez00_2657,
		obj_t BgL_importz00_2658, obj_t BgL_finalzf3zf3_2659,
		obj_t BgL_abstractzf3zf3_2660, obj_t BgL_defzd2srczd2_2661,
		obj_t BgL_declzd2srczd2_2662)
	{
		{	/* Module/class.scm 78 */
			return
				BGl_declarezd2classz12zc0zzmodule_classz00(BgL_classzd2defzd2_2656,
				BgL_modulez00_2657, BgL_importz00_2658, CBOOL(BgL_finalzf3zf3_2659),
				CBOOL(BgL_abstractzf3zf3_2660), BgL_defzd2srczd2_2661,
				BgL_declzd2srczd2_2662);
		}

	}



/* declare-wide-class! */
	BGL_EXPORTED_DEF obj_t BGl_declarezd2widezd2classz12z12zzmodule_classz00(obj_t
		BgL_classzd2defzd2_33, obj_t BgL_modulez00_34, obj_t BgL_importz00_35,
		obj_t BgL_defzd2srczd2_36, obj_t BgL_declzd2srczd2_37)
	{
		{	/* Module/class.scm 96 */
			if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_importz00_35,
						CNST_TABLE_REF(((long) 0)))))
				{	/* Module/class.scm 98 */
					return
						((obj_t)
						BGl_declarezd2exportzd2classz12z12zzmodule_classz00
						(BgL_classzd2defzd2_33, BgL_modulez00_34,
							CNST_TABLE_REF(((long) 3)), ((bool_t) 0), BgL_defzd2srczd2_36,
							BgL_declzd2srczd2_37, BgL_importz00_35));
				}
			else
				{	/* Module/class.scm 98 */
					return
						((obj_t)
						BGl_declarezd2importzd2classz12z12zzmodule_classz00
						(BgL_classzd2defzd2_33, BgL_modulez00_34,
							CNST_TABLE_REF(((long) 3)), ((bool_t) 0), BgL_defzd2srczd2_36,
							BgL_declzd2srczd2_37));
		}}

	}



/* &declare-wide-class! */
	obj_t BGl_z62declarezd2widezd2classz12z70zzmodule_classz00(obj_t
		BgL_envz00_2663, obj_t BgL_classzd2defzd2_2664, obj_t BgL_modulez00_2665,
		obj_t BgL_importz00_2666, obj_t BgL_defzd2srczd2_2667,
		obj_t BgL_declzd2srczd2_2668)
	{
		{	/* Module/class.scm 96 */
			return
				BGl_declarezd2widezd2classz12z12zzmodule_classz00
				(BgL_classzd2defzd2_2664, BgL_modulez00_2665, BgL_importz00_2666,
				BgL_defzd2srczd2_2667, BgL_declzd2srczd2_2668);
		}

	}



/* declare-export-class! */
	BgL_typez00_bglt BGl_declarezd2exportzd2classz12z12zzmodule_classz00(obj_t
		BgL_cdefz00_38, obj_t BgL_modulez00_39, obj_t BgL_kindz00_40,
		bool_t BgL_abstractzf3zf3_41, obj_t BgL_srczd2defzd2_42,
		obj_t BgL_srczd2declzd2_43, obj_t BgL_importz00_44)
	{
		{	/* Module/class.scm 110 */
			{	/* Module/class.scm 114 */
				obj_t BgL_locz00_1770;

				BgL_locz00_1770 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2defzd2_42);
				{	/* Module/class.scm 114 */
					obj_t BgL_classzd2varzd2_1771;

					BgL_classzd2varzd2_1771 = CAR(BgL_cdefz00_38);
					{	/* Module/class.scm 115 */
						obj_t BgL_classzd2idzd2_1772;

						BgL_classzd2idzd2_1772 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_classzd2varzd2_1771,
							BgL_locz00_1770);
						{	/* Module/class.scm 116 */
							obj_t BgL_holderz00_1773;

							{	/* Module/class.scm 118 */
								obj_t BgL_arg1344z00_1783;

								{	/* Module/class.scm 118 */
									obj_t BgL_arg1345z00_1784;

									BgL_arg1345z00_1784 =
										MAKE_YOUNG_PAIR(BgL_classzd2idzd2_1772, BNIL);
									BgL_arg1344z00_1783 =
										MAKE_YOUNG_PAIR(BgL_importz00_44, BgL_arg1345z00_1784);
								}
								BGl_producezd2modulezd2clausez12z12zzmodule_modulez00
									(BgL_arg1344z00_1783);
							}
							BgL_holderz00_1773 =
								BGl_findzd2globalzf2modulez20zzast_envz00
								(BgL_classzd2idzd2_1772, BgL_modulez00_39);
							{	/* Module/class.scm 117 */
								bool_t BgL_finalzf3zf3_1774;

								BgL_finalzf3zf3_1774 =
									(BgL_kindz00_40 == CNST_TABLE_REF(((long) 1)));
								{	/* Module/class.scm 120 */
									obj_t BgL_widez00_1775;

									if ((BgL_kindz00_40 == CNST_TABLE_REF(((long) 3))))
										{	/* Module/class.scm 121 */
											BgL_widez00_1775 = CNST_TABLE_REF(((long) 4));
										}
									else
										{	/* Module/class.scm 121 */
											BgL_widez00_1775 = BFALSE;
										}
									{	/* Module/class.scm 121 */
										BgL_typez00_bglt BgL_tclassz00_1776;

										BgL_tclassz00_1776 =
											BGl_declarezd2classzd2typez12z12zzobject_classz00
											(BgL_cdefz00_38,
											((BgL_globalz00_bglt) BgL_holderz00_1773),
											BgL_widez00_1775, BgL_finalzf3zf3_1774,
											BgL_abstractzf3zf3_41, BgL_srczd2defzd2_42);
										{	/* Module/class.scm 122 */

											((((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_holderz00_1773)))->
													BgL_srcz00) = ((obj_t) BgL_srczd2defzd2_42), BUNSPEC);
											((((BgL_typez00_bglt) COBJECT(BgL_tclassz00_1776))->
													BgL_importzd2locationzd2) =
												((obj_t)
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_srczd2declzd2_43, BgL_locz00_1770)), BUNSPEC);
											{	/* Module/class.scm 136 */
												obj_t BgL_arg1338z00_1778;

												{	/* Module/class.scm 136 */
													obj_t BgL_zc3z04anonymousza31340ze3z87_2669;

													BgL_zc3z04anonymousza31340ze3z87_2669 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31340ze3ze5zzmodule_classz00,
														(int) (((long) 0)), (int) (((long) 4)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31340ze3z87_2669,
														(int) (((long) 0)), BgL_cdefz00_38);
													PROCEDURE_SET(BgL_zc3z04anonymousza31340ze3z87_2669,
														(int) (((long) 1)), BgL_holderz00_1773);
													PROCEDURE_SET(BgL_zc3z04anonymousza31340ze3z87_2669,
														(int) (((long) 2)), ((obj_t) BgL_tclassz00_1776));
													PROCEDURE_SET(BgL_zc3z04anonymousza31340ze3z87_2669,
														(int) (((long) 3)), BgL_srczd2defzd2_42);
													BgL_arg1338z00_1778 =
														BGl_makezd2promisezd2zz__r4_control_features_6_9z00
														(BgL_zc3z04anonymousza31340ze3z87_2669);
												}
												{	/* Module/class.scm 133 */
													BgL_typez00_bglt BgL_res2061z00_2445;

													{	/* Module/class.scm 176 */
														obj_t BgL_arg1352z00_2444;

														BgL_arg1352z00_2444 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_tclassz00_1776),
															BgL_arg1338z00_1778);
														BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
															MAKE_YOUNG_PAIR(BgL_arg1352z00_2444,
															BGl_za2classzd2accessesza2zd2zzmodule_classz00);
													}
													BgL_res2061z00_2445 = BgL_tclassz00_1776;
													return BgL_res2061z00_2445;
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



/* &<@anonymous:1340> */
	obj_t BGl_z62zc3z04anonymousza31340ze3ze5zzmodule_classz00(obj_t
		BgL_envz00_2670)
	{
		{	/* Module/class.scm 135 */
			{	/* Module/class.scm 136 */
				obj_t BgL_cdefz00_2671;
				obj_t BgL_holderz00_2672;
				BgL_typez00_bglt BgL_tclassz00_2673;
				obj_t BgL_srczd2defzd2_2674;

				BgL_cdefz00_2671 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2670, (int) (((long) 0))));
				BgL_holderz00_2672 = PROCEDURE_REF(BgL_envz00_2670, (int) (((long) 1)));
				BgL_tclassz00_2673 =
					((BgL_typez00_bglt)
					PROCEDURE_REF(BgL_envz00_2670, (int) (((long) 2))));
				BgL_srczd2defzd2_2674 =
					PROCEDURE_REF(BgL_envz00_2670, (int) (((long) 3)));
				return
					BGl_genzd2registerzd2classz12z12zzmodule_classz00(BgL_cdefz00_2671,
					BgL_holderz00_2672, ((obj_t) BgL_tclassz00_2673),
					BgL_srczd2defzd2_2674);
			}
		}

	}



/* declare-import-class! */
	BgL_typez00_bglt BGl_declarezd2importzd2classz12z12zzmodule_classz00(obj_t
		BgL_cdefz00_45, obj_t BgL_modulez00_46, obj_t BgL_kindz00_47,
		bool_t BgL_abstractzf3zf3_48, obj_t BgL_srczd2defzd2_49,
		obj_t BgL_srczd2declzd2_50)
	{
		{	/* Module/class.scm 141 */
			{	/* Module/class.scm 145 */
				obj_t BgL_locz00_1785;

				BgL_locz00_1785 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2defzd2_49);
				{	/* Module/class.scm 145 */
					obj_t BgL_classzd2varzd2_1786;

					BgL_classzd2varzd2_1786 = CAR(BgL_cdefz00_45);
					{	/* Module/class.scm 146 */
						obj_t BgL_classzd2idzd2_1787;

						BgL_classzd2idzd2_1787 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_classzd2varzd2_1786,
							BgL_locz00_1785);
						{	/* Module/class.scm 147 */
							obj_t BgL_holderz00_1788;

							BgL_holderz00_1788 =
								BGl_importzd2parserzd2zzmodule_impusez00(BgL_modulez00_46,
								BgL_classzd2idzd2_1787, BFALSE, BNIL);
							{	/* Module/class.scm 148 */
								bool_t BgL_finalzf3zf3_1789;

								BgL_finalzf3zf3_1789 =
									(BgL_kindz00_47 == CNST_TABLE_REF(((long) 1)));
								{	/* Module/class.scm 149 */
									obj_t BgL_widez00_1790;

									if ((BgL_kindz00_47 == CNST_TABLE_REF(((long) 3))))
										{	/* Module/class.scm 150 */
											BgL_widez00_1790 = CNST_TABLE_REF(((long) 4));
										}
									else
										{	/* Module/class.scm 150 */
											BgL_widez00_1790 = BFALSE;
										}
									{	/* Module/class.scm 150 */
										BgL_typez00_bglt BgL_tclassz00_1791;

										BgL_tclassz00_1791 =
											BGl_declarezd2classzd2typez12z12zzobject_classz00
											(BgL_cdefz00_45,
											((BgL_globalz00_bglt) BgL_holderz00_1788),
											BgL_widez00_1790, BgL_finalzf3zf3_1789,
											BgL_abstractzf3zf3_48, BgL_srczd2defzd2_49);
										{	/* Module/class.scm 151 */

											((((BgL_typez00_bglt) COBJECT(BgL_tclassz00_1791))->
													BgL_importzd2locationzd2) =
												((obj_t)
													BGl_findzd2locationzf2locz20zztools_locationz00
													(BgL_srczd2declzd2_50, BgL_locz00_1785)), BUNSPEC);
											{	/* Module/class.scm 166 */
												obj_t BgL_arg1347z00_1793;

												{	/* Module/class.scm 166 */
													obj_t BgL_zc3z04anonymousza31349ze3z87_2675;

													BgL_zc3z04anonymousza31349ze3z87_2675 =
														MAKE_FX_PROCEDURE
														(BGl_z62zc3z04anonymousza31349ze3ze5zzmodule_classz00,
														(int) (((long) 0)), (int) (((long) 3)));
													PROCEDURE_SET(BgL_zc3z04anonymousza31349ze3z87_2675,
														(int) (((long) 0)), ((obj_t) BgL_tclassz00_1791));
													PROCEDURE_SET(BgL_zc3z04anonymousza31349ze3z87_2675,
														(int) (((long) 1)), BgL_cdefz00_45);
													PROCEDURE_SET(BgL_zc3z04anonymousza31349ze3z87_2675,
														(int) (((long) 2)), BgL_srczd2defzd2_49);
													BgL_arg1347z00_1793 =
														BGl_makezd2promisezd2zz__r4_control_features_6_9z00
														(BgL_zc3z04anonymousza31349ze3z87_2675);
												}
												{	/* Module/class.scm 160 */
													BgL_typez00_bglt BgL_res2062z00_2450;

													{	/* Module/class.scm 176 */
														obj_t BgL_arg1352z00_2449;

														BgL_arg1352z00_2449 =
															MAKE_YOUNG_PAIR(
															((obj_t) BgL_tclassz00_1791),
															BgL_arg1347z00_1793);
														BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
															MAKE_YOUNG_PAIR(BgL_arg1352z00_2449,
															BGl_za2classzd2accessesza2zd2zzmodule_classz00);
													}
													BgL_res2062z00_2450 = BgL_tclassz00_1791;
													return BgL_res2062z00_2450;
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



/* &<@anonymous:1349> */
	obj_t BGl_z62zc3z04anonymousza31349ze3ze5zzmodule_classz00(obj_t
		BgL_envz00_2676)
	{
		{	/* Module/class.scm 162 */
			{	/* Module/class.scm 166 */
				BgL_typez00_bglt BgL_tclassz00_2677;
				obj_t BgL_cdefz00_2678;
				obj_t BgL_srczd2defzd2_2679;

				BgL_tclassz00_2677 =
					((BgL_typez00_bglt)
					PROCEDURE_REF(BgL_envz00_2676, (int) (((long) 0))));
				BgL_cdefz00_2678 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2676, (int) (((long) 1))));
				BgL_srczd2defzd2_2679 =
					PROCEDURE_REF(BgL_envz00_2676, (int) (((long) 2)));
				BGl_setzd2classzd2slotsz12z12zzobject_classz00(
					((BgL_typez00_bglt) BgL_tclassz00_2677), BgL_cdefz00_2678,
					BgL_srczd2defzd2_2679);
				BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00(((obj_t)
						BgL_tclassz00_2677));
				return BNIL;
			}
		}

	}



/* delay-class-accessors! */
	BGL_EXPORTED_DEF BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt
		BgL_typez00_51, obj_t BgL_delayedz00_52)
	{
		{	/* Module/class.scm 175 */
			{	/* Module/class.scm 176 */
				obj_t BgL_arg1352z00_2451;

				BgL_arg1352z00_2451 =
					MAKE_YOUNG_PAIR(((obj_t) BgL_typez00_51), BgL_delayedz00_52);
				BGl_za2classzd2accessesza2zd2zzmodule_classz00 =
					MAKE_YOUNG_PAIR(BgL_arg1352z00_2451,
					BGl_za2classzd2accessesza2zd2zzmodule_classz00);
			}
			return BgL_typez00_51;
		}

	}



/* &delay-class-accessors! */
	BgL_typez00_bglt BGl_z62delayzd2classzd2accessorsz12z70zzmodule_classz00(obj_t
		BgL_envz00_2680, obj_t BgL_typez00_2681, obj_t BgL_delayedz00_2682)
	{
		{	/* Module/class.scm 175 */
			return
				BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(
				((BgL_typez00_bglt) BgL_typez00_2681), BgL_delayedz00_2682);
		}

	}



/* gen-register-class! */
	obj_t BGl_genzd2registerzd2classz12z12zzmodule_classz00(obj_t
		BgL_classzd2defzd2_53, obj_t BgL_holderz00_54, obj_t BgL_classz00_55,
		obj_t BgL_srczd2defzd2_56)
	{
		{	/* Module/class.scm 194 */
			if (BGl_checkzd2classzd2declarationzf3zf3zzobject_classz00(
					((BgL_typez00_bglt) BgL_classz00_55), BgL_srczd2defzd2_56))
				{	/* Module/class.scm 195 */
					BGl_setzd2classzd2slotsz12z12zzobject_classz00(
						((BgL_typez00_bglt) BgL_classz00_55), BgL_classzd2defzd2_53,
						BgL_srczd2defzd2_56);
					BGl_genzd2classzd2coercionsz12z12zzobject_coercionz00
						(BgL_classz00_55);
					{	/* Module/class.scm 202 */
						obj_t BgL_classidz00_1801;

						BgL_classidz00_1801 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_classz00_55)))->BgL_idz00);
						{	/* Module/class.scm 202 */
							obj_t BgL_classmodz00_1802;

							{	/* Module/class.scm 203 */
								BgL_globalz00_bglt BgL_arg1495z00_1850;

								{
									BgL_tclassz00_bglt BgL_auxz00_2988;

									{
										obj_t BgL_auxz00_2989;

										{	/* Module/class.scm 203 */
											BgL_objectz00_bglt BgL_tmpz00_2990;

											BgL_tmpz00_2990 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_classz00_55));
											BgL_auxz00_2989 = BGL_OBJECT_WIDENING(BgL_tmpz00_2990);
										}
										BgL_auxz00_2988 = ((BgL_tclassz00_bglt) BgL_auxz00_2989);
									}
									BgL_arg1495z00_1850 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2988))->
										BgL_holderz00);
								}
								BgL_classmodz00_1802 =
									(((BgL_globalz00_bglt) COBJECT(BgL_arg1495z00_1850))->
									BgL_modulez00);
							}
							{	/* Module/class.scm 203 */
								obj_t BgL_superz00_1803;

								{
									BgL_tclassz00_bglt BgL_auxz00_2997;

									{
										obj_t BgL_auxz00_2998;

										{	/* Module/class.scm 204 */
											BgL_objectz00_bglt BgL_tmpz00_2999;

											BgL_tmpz00_2999 =
												((BgL_objectz00_bglt)
												((BgL_typez00_bglt) BgL_classz00_55));
											BgL_auxz00_2998 = BGL_OBJECT_WIDENING(BgL_tmpz00_2999);
										}
										BgL_auxz00_2997 = ((BgL_tclassz00_bglt) BgL_auxz00_2998);
									}
									BgL_superz00_1803 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_2997))->
										BgL_itszd2superzd2);
								}
								{	/* Module/class.scm 204 */
									obj_t BgL_supervz00_1804;

									if (BGl_isazf3zf3zz__objectz00(BgL_superz00_1803,
											BGl_tclassz00zzobject_classz00))
										{	/* Module/class.scm 206 */
											BgL_globalz00_bglt BgL_sholderz00_1845;

											{
												BgL_tclassz00_bglt BgL_auxz00_3007;

												{
													obj_t BgL_auxz00_3008;

													{	/* Module/class.scm 206 */
														BgL_objectz00_bglt BgL_tmpz00_3009;

														BgL_tmpz00_3009 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_superz00_1803));
														BgL_auxz00_3008 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3009);
													}
													BgL_auxz00_3007 =
														((BgL_tclassz00_bglt) BgL_auxz00_3008);
												}
												BgL_sholderz00_1845 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3007))->
													BgL_holderz00);
											}
											{	/* Module/class.scm 206 */
												obj_t BgL_sholderidz00_1846;

												BgL_sholderidz00_1846 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_sholderz00_1845)))->
													BgL_idz00);
												{	/* Module/class.scm 207 */
													obj_t BgL_sholdermodulez00_1847;

													BgL_sholdermodulez00_1847 =
														(((BgL_globalz00_bglt)
															COBJECT(BgL_sholderz00_1845))->BgL_modulez00);
													{	/* Module/class.scm 208 */

														{	/* Module/class.scm 209 */
															obj_t BgL_arg1489z00_1848;

															{	/* Module/class.scm 209 */
																obj_t BgL_arg1493z00_1849;

																BgL_arg1493z00_1849 =
																	MAKE_YOUNG_PAIR(BgL_sholdermodulez00_1847,
																	BNIL);
																BgL_arg1489z00_1848 =
																	MAKE_YOUNG_PAIR(BgL_sholderidz00_1846,
																	BgL_arg1493z00_1849);
															}
															BgL_supervz00_1804 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1489z00_1848);
										}}}}}
									else
										{	/* Module/class.scm 205 */
											BgL_supervz00_1804 = BFALSE;
										}
									{	/* Module/class.scm 205 */
										obj_t BgL_declz00_1805;

										{	/* Module/class.scm 210 */
											obj_t BgL_arg1363z00_1811;

											{	/* Module/class.scm 210 */
												obj_t BgL_arg1364z00_1812;
												obj_t BgL_arg1367z00_1813;

												BgL_arg1364z00_1812 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_holderz00_54))))->
													BgL_idz00);
												{	/* Module/class.scm 211 */
													obj_t BgL_arg1370z00_1814;

													{	/* Module/class.scm 211 */
														obj_t BgL_arg1371z00_1815;
														obj_t BgL_arg1372z00_1816;

														{	/* Module/class.scm 211 */
															obj_t BgL_arg1381z00_1817;

															{	/* Module/class.scm 211 */
																obj_t BgL_arg1382z00_1818;

																BgL_arg1382z00_1818 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
																	BNIL);
																BgL_arg1381z00_1817 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																	BgL_arg1382z00_1818);
															}
															BgL_arg1371z00_1815 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1381z00_1817);
														}
														{	/* Module/class.scm 213 */
															obj_t BgL_arg1383z00_1819;
															obj_t BgL_arg1384z00_1820;

															{	/* Module/class.scm 213 */
																obj_t BgL_arg1385z00_1821;

																BgL_arg1385z00_1821 =
																	MAKE_YOUNG_PAIR(BgL_classidz00_1801, BNIL);
																BgL_arg1383z00_1819 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																	BgL_arg1385z00_1821);
															}
															{	/* Module/class.scm 215 */
																obj_t BgL_arg1386z00_1822;
																obj_t BgL_arg1387z00_1823;

																{	/* Module/class.scm 215 */
																	obj_t BgL_arg1388z00_1824;

																	BgL_arg1388z00_1824 =
																		MAKE_YOUNG_PAIR(BgL_classmodz00_1802, BNIL);
																	BgL_arg1386z00_1822 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																		BgL_arg1388z00_1824);
																}
																{	/* Module/class.scm 219 */
																	obj_t BgL_arg1394z00_1825;

																	{	/* Module/class.scm 219 */
																		long BgL_arg1396z00_1826;
																		obj_t BgL_arg1417z00_1827;

																		BgL_arg1396z00_1826 =
																			BGl_getzd2classzd2hashz00zzmodule_classz00
																			(BgL_srczd2defzd2_56);
																		{	/* Module/class.scm 221 */
																			obj_t BgL_arg1418z00_1828;
																			obj_t BgL_arg1421z00_1829;

																			{	/* Module/class.scm 221 */
																				bool_t BgL_test2127z00_3038;

																				{
																					BgL_tclassz00_bglt BgL_auxz00_3039;

																					{
																						obj_t BgL_auxz00_3040;

																						{	/* Module/class.scm 221 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_3041;
																							BgL_tmpz00_3041 =
																								((BgL_objectz00_bglt) (
																									(BgL_typez00_bglt)
																									BgL_classz00_55));
																							BgL_auxz00_3040 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_3041);
																						}
																						BgL_auxz00_3039 =
																							((BgL_tclassz00_bglt)
																							BgL_auxz00_3040);
																					}
																					BgL_test2127z00_3038 =
																						(((BgL_tclassz00_bglt)
																							COBJECT(BgL_auxz00_3039))->
																						BgL_abstractzf3zf3);
																				}
																				if (BgL_test2127z00_3038)
																					{	/* Module/class.scm 221 */
																						BgL_arg1418z00_1828 = BFALSE;
																					}
																				else
																					{	/* Module/class.scm 221 */
																						BgL_arg1418z00_1828 =
																							BGl_classgenzd2makezd2anonymousz00zzobject_classgenz00
																							(((BgL_typez00_bglt)
																								BgL_classz00_55));
																					}
																			}
																			{	/* Module/class.scm 225 */
																				obj_t BgL_arg1441z00_1831;
																				obj_t BgL_arg1442z00_1832;

																				if (BGl_widezd2classzf3z21zzobject_classz00(BgL_classz00_55))
																					{	/* Module/class.scm 225 */
																						BgL_arg1441z00_1831 =
																							BGl_classgenzd2widenzd2anonymousz00zzobject_classgenz00
																							(((BgL_typez00_bglt)
																								BgL_classz00_55));
																					}
																				else
																					{	/* Module/class.scm 225 */
																						BgL_arg1441z00_1831 =
																							BGl_classgenzd2allocatezd2anonymousz00zzobject_classgenz00
																							(((BgL_typez00_bglt)
																								BgL_classz00_55));
																					}
																				{	/* Module/class.scm 233 */
																					obj_t BgL_arg1448z00_1834;
																					obj_t BgL_arg1449z00_1835;

																					BgL_arg1448z00_1834 =
																						BGl_findzd2classzd2constructorz00zzobject_classz00
																						(((BgL_typez00_bglt)
																							BgL_classz00_55));
																					{	/* Module/class.scm 235 */
																						obj_t BgL_arg1461z00_1836;
																						obj_t BgL_arg1462z00_1837;

																						BgL_arg1461z00_1836 =
																							BGl_classgenzd2nilzd2anonymousz00zzobject_classgenz00
																							(((BgL_typez00_bglt)
																								BgL_classz00_55));
																						{	/* Module/class.scm 237 */
																							obj_t BgL_arg1464z00_1838;
																							obj_t BgL_arg1465z00_1839;

																							if (BGl_widezd2classzf3z21zzobject_classz00(BgL_classz00_55))
																								{	/* Module/class.scm 237 */
																									BgL_arg1464z00_1838 =
																										BGl_classgenzd2shrinkzd2anonymousz00zzobject_classgenz00
																										(((BgL_typez00_bglt)
																											BgL_classz00_55));
																								}
																							else
																								{	/* Module/class.scm 237 */
																									BgL_arg1464z00_1838 = BFALSE;
																								}
																							{	/* Module/class.scm 240 */
																								obj_t BgL_arg1474z00_1841;
																								obj_t BgL_arg1476z00_1842;

																								BgL_arg1474z00_1841 =
																									BGl_makezd2classzd2fieldsz00zzmodule_classz00
																									(BgL_classz00_55);
																								BgL_arg1476z00_1842 =
																									MAKE_YOUNG_PAIR
																									(BGl_makezd2classzd2virtualzd2fieldszd2zzmodule_classz00
																									(BgL_classz00_55), BNIL);
																								BgL_arg1465z00_1839 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1474z00_1841,
																									BgL_arg1476z00_1842);
																							}
																							BgL_arg1462z00_1837 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1464z00_1838,
																								BgL_arg1465z00_1839);
																						}
																						BgL_arg1449z00_1835 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1461z00_1836,
																							BgL_arg1462z00_1837);
																					}
																					BgL_arg1442z00_1832 =
																						MAKE_YOUNG_PAIR(BgL_arg1448z00_1834,
																						BgL_arg1449z00_1835);
																				}
																				BgL_arg1421z00_1829 =
																					MAKE_YOUNG_PAIR(BgL_arg1441z00_1831,
																					BgL_arg1442z00_1832);
																			}
																			BgL_arg1417z00_1827 =
																				MAKE_YOUNG_PAIR(BgL_arg1418z00_1828,
																				BgL_arg1421z00_1829);
																		}
																		BgL_arg1394z00_1825 =
																			MAKE_YOUNG_PAIR(BINT(BgL_arg1396z00_1826),
																			BgL_arg1417z00_1827);
																	}
																	BgL_arg1387z00_1823 =
																		MAKE_YOUNG_PAIR(BgL_supervz00_1804,
																		BgL_arg1394z00_1825);
																}
																BgL_arg1384z00_1820 =
																	MAKE_YOUNG_PAIR(BgL_arg1386z00_1822,
																	BgL_arg1387z00_1823);
															}
															BgL_arg1372z00_1816 =
																MAKE_YOUNG_PAIR(BgL_arg1383z00_1819,
																BgL_arg1384z00_1820);
														}
														BgL_arg1370z00_1814 =
															MAKE_YOUNG_PAIR(BgL_arg1371z00_1815,
															BgL_arg1372z00_1816);
													}
													BgL_arg1367z00_1813 =
														MAKE_YOUNG_PAIR(BgL_arg1370z00_1814, BNIL);
												}
												BgL_arg1363z00_1811 =
													MAKE_YOUNG_PAIR(BgL_arg1364z00_1812,
													BgL_arg1367z00_1813);
											}
											BgL_declz00_1805 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
												BgL_arg1363z00_1811);
										}
										{	/* Module/class.scm 210 */
											obj_t BgL_edeclz00_1806;

											{	/* Module/class.scm 243 */
												bool_t BgL_test2130z00_3082;

												{	/* Module/class.scm 243 */
													bool_t BgL_res2064z00_2466;

													BgL_res2064z00_2466 = EPAIRP(BgL_srczd2defzd2_56);
													BgL_test2130z00_3082 = BgL_res2064z00_2466;
												}
												if (BgL_test2130z00_3082)
													{	/* Module/class.scm 244 */
														obj_t BgL_arg1357z00_1808;
														obj_t BgL_arg1360z00_1809;
														obj_t BgL_arg1361z00_1810;

														BgL_arg1357z00_1808 = CAR(BgL_declz00_1805);
														BgL_arg1360z00_1809 = CDR(BgL_declz00_1805);
														BgL_arg1361z00_1810 =
															CER(((obj_t) BgL_srczd2defzd2_56));
														{	/* Module/class.scm 244 */
															obj_t BgL_res2065z00_2470;

															BgL_res2065z00_2470 =
																MAKE_YOUNG_EPAIR(BgL_arg1357z00_1808,
																BgL_arg1360z00_1809, BgL_arg1361z00_1810);
															BgL_edeclz00_1806 = BgL_res2065z00_2470;
														}
													}
												else
													{	/* Module/class.scm 243 */
														BgL_edeclz00_1806 = BgL_declz00_1805;
													}
											}
											{	/* Module/class.scm 243 */

												BGl_za2declaredzd2classesza2zd2zzmodule_classz00 =
													MAKE_YOUNG_PAIR(BgL_edeclz00_1806,
													BGl_za2declaredzd2classesza2zd2zzmodule_classz00);
												return BNIL;
											}
										}
									}
								}
							}
						}
					}
				}
			else
				{	/* Module/class.scm 195 */
					{
						BgL_tclassz00_bglt BgL_auxz00_3090;

						{
							obj_t BgL_auxz00_3091;

							{	/* Module/class.scm 252 */
								BgL_objectz00_bglt BgL_tmpz00_3092;

								BgL_tmpz00_3092 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_55));
								BgL_auxz00_3091 = BGL_OBJECT_WIDENING(BgL_tmpz00_3092);
							}
							BgL_auxz00_3090 = ((BgL_tclassz00_bglt) BgL_auxz00_3091);
						}
						((((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3090))->BgL_slotsz00) =
							((obj_t) BNIL), BUNSPEC);
					}
					return BNIL;
				}
		}

	}



/* make-class-fields */
	obj_t BGl_makezd2classzd2fieldsz00zzmodule_classz00(obj_t BgL_classz00_57)
	{
		{	/* Module/class.scm 258 */
			{	/* Module/class.scm 299 */
				obj_t BgL_arg1497z00_1855;

				{	/* Module/class.scm 299 */
					obj_t BgL_arg1518z00_1856;

					{	/* Module/class.scm 299 */
						obj_t BgL_arg1528z00_1858;

						{
							BgL_tclassz00_bglt BgL_auxz00_3098;

							{
								obj_t BgL_auxz00_3099;

								{	/* Module/class.scm 305 */
									BgL_objectz00_bglt BgL_tmpz00_3100;

									BgL_tmpz00_3100 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_57));
									BgL_auxz00_3099 = BGL_OBJECT_WIDENING(BgL_tmpz00_3100);
								}
								BgL_auxz00_3098 = ((BgL_tclassz00_bglt) BgL_auxz00_3099);
							}
							BgL_arg1528z00_1858 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3098))->BgL_slotsz00);
						}
						{	/* Module/class.scm 300 */
							obj_t BgL_zc3z04anonymousza31530ze3z87_2683;

							BgL_zc3z04anonymousza31530ze3z87_2683 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31530ze3ze5zzmodule_classz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31530ze3z87_2683,
								(int) (((long) 0)), BgL_classz00_57);
							{	/* Module/class.scm 299 */
								obj_t BgL_list1529z00_1859;

								BgL_list1529z00_1859 =
									MAKE_YOUNG_PAIR(BgL_arg1528z00_1858, BNIL);
								BgL_arg1518z00_1856 =
									BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
									(BgL_zc3z04anonymousza31530ze3z87_2683, BgL_list1529z00_1859);
					}}}
					BgL_arg1497z00_1855 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1518z00_1856,
						BNIL);
				}
				return
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BgL_arg1497z00_1855);
		}}

	}



/* &<@anonymous:1530> */
	obj_t BGl_z62zc3z04anonymousza31530ze3ze5zzmodule_classz00(obj_t
		BgL_envz00_2684, obj_t BgL_sz00_2686)
	{
		{	/* Module/class.scm 299 */
			{	/* Module/class.scm 300 */
				obj_t BgL_classz00_2685;

				BgL_classz00_2685 = PROCEDURE_REF(BgL_envz00_2684, (int) (((long) 0)));
				{
					obj_t BgL_sz00_2759;
					obj_t BgL_sz00_2711;

					if (
						((((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_sz00_2686)))->
								BgL_classzd2ownerzd2) == BgL_classz00_2685))
						{	/* Module/class.scm 300 */
							if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
									((BgL_slotz00_bglt) BgL_sz00_2686)))
								{	/* Module/class.scm 301 */
									if (
										(((BgL_slotz00_bglt) COBJECT(
													((BgL_slotz00_bglt) BgL_sz00_2686)))->
											BgL_virtualzd2overridezd2))
										{	/* Module/class.scm 302 */
											return BFALSE;
										}
									else
										{	/* Module/class.scm 302 */
											BgL_sz00_2711 = BgL_sz00_2686;
											{	/* Module/class.scm 271 */
												obj_t BgL_arg1575z00_2712;
												obj_t BgL_arg1578z00_2713;

												{	/* Module/class.scm 271 */
													obj_t BgL_arg1582z00_2714;

													{	/* Module/class.scm 271 */
														obj_t BgL_arg1584z00_2715;

														BgL_arg1584z00_2715 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
														BgL_arg1582z00_2714 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg1584z00_2715);
													}
													BgL_arg1575z00_2712 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
														BgL_arg1582z00_2714);
												}
												{	/* Module/class.scm 272 */
													obj_t BgL_arg1588z00_2716;
													obj_t BgL_arg1589z00_2717;

													{	/* Module/class.scm 272 */
														obj_t BgL_arg1592z00_2718;

														{	/* Module/class.scm 272 */
															obj_t BgL_arg1593z00_2719;

															BgL_arg1593z00_2719 =
																(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_sz00_2711)))->
																BgL_idz00);
															BgL_arg1592z00_2718 =
																MAKE_YOUNG_PAIR(BgL_arg1593z00_2719, BNIL);
														}
														BgL_arg1588z00_2716 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
															BgL_arg1592z00_2718);
													}
													{	/* Module/class.scm 273 */
														obj_t BgL_arg1597z00_2720;
														obj_t BgL_arg1599z00_2721;

														{	/* Module/class.scm 273 */
															obj_t BgL_arg1604z00_2722;

															{	/* Module/class.scm 273 */
																obj_t BgL_arg1605z00_2723;
																obj_t BgL_arg1606z00_2724;

																BgL_arg1605z00_2723 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
																	BNIL);
																{	/* Module/class.scm 274 */
																	obj_t BgL_arg1611z00_2725;

																	{	/* Module/class.scm 274 */
																		obj_t BgL_arg1612z00_2726;
																		obj_t BgL_arg1613z00_2727;

																		{	/* Module/class.scm 274 */
																			obj_t BgL_arg1624z00_2728;

																			{	/* Module/class.scm 274 */
																				obj_t BgL_arg1626z00_2729;

																				BgL_arg1626z00_2729 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							6)), BNIL);
																				BgL_arg1624z00_2728 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							13)), BgL_arg1626z00_2729);
																			}
																			BgL_arg1612z00_2726 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						5)), BgL_arg1624z00_2728);
																		}
																		{	/* Module/class.scm 274 */
																			obj_t BgL_arg1627z00_2730;

																			{	/* Module/class.scm 274 */
																				obj_t BgL_arg1631z00_2731;

																				BgL_arg1631z00_2731 =
																					(((BgL_slotz00_bglt) COBJECT(
																							((BgL_slotz00_bglt)
																								BgL_sz00_2711)))->
																					BgL_virtualzd2numzd2);
																				BgL_arg1627z00_2730 =
																					MAKE_YOUNG_PAIR(BgL_arg1631z00_2731,
																					BNIL);
																			}
																			BgL_arg1613z00_2727 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						12)), BgL_arg1627z00_2730);
																		}
																		BgL_arg1611z00_2725 =
																			MAKE_YOUNG_PAIR(BgL_arg1612z00_2726,
																			BgL_arg1613z00_2727);
																	}
																	BgL_arg1606z00_2724 =
																		MAKE_YOUNG_PAIR(BgL_arg1611z00_2725, BNIL);
																}
																BgL_arg1604z00_2722 =
																	MAKE_YOUNG_PAIR(BgL_arg1605z00_2723,
																	BgL_arg1606z00_2724);
															}
															BgL_arg1597z00_2720 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																BgL_arg1604z00_2722);
														}
														{	/* Module/class.scm 275 */
															obj_t BgL_arg1634z00_2732;
															obj_t BgL_arg1639z00_2733;

															{	/* Module/class.scm 275 */
																obj_t BgL_arg1640z00_2734;

																{	/* Module/class.scm 275 */
																	obj_t BgL_arg1641z00_2735;
																	obj_t BgL_arg1644z00_2736;

																	{	/* Module/class.scm 275 */
																		obj_t BgL_arg1652z00_2737;

																		BgL_arg1652z00_2737 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					15)), BNIL);
																		BgL_arg1641z00_2735 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					12)), BgL_arg1652z00_2737);
																	}
																	{	/* Module/class.scm 276 */
																		obj_t BgL_arg1662z00_2738;

																		{	/* Module/class.scm 276 */
																			obj_t BgL_arg1663z00_2739;
																			obj_t BgL_arg1664z00_2740;

																			{	/* Module/class.scm 276 */
																				obj_t BgL_arg1667z00_2741;

																				{	/* Module/class.scm 276 */
																					obj_t BgL_arg1669z00_2742;

																					BgL_arg1669z00_2742 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 6)), BNIL);
																					BgL_arg1667z00_2741 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 16)),
																						BgL_arg1669z00_2742);
																				}
																				BgL_arg1663z00_2739 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							5)), BgL_arg1667z00_2741);
																			}
																			{	/* Module/class.scm 276 */
																				obj_t BgL_arg1672z00_2743;

																				{	/* Module/class.scm 276 */
																					obj_t BgL_arg1684z00_2744;
																					obj_t BgL_arg1685z00_2745;

																					BgL_arg1684z00_2744 =
																						(((BgL_slotz00_bglt) COBJECT(
																								((BgL_slotz00_bglt)
																									BgL_sz00_2711)))->
																						BgL_virtualzd2numzd2);
																					BgL_arg1685z00_2745 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 15)), BNIL);
																					BgL_arg1672z00_2743 =
																						MAKE_YOUNG_PAIR(BgL_arg1684z00_2744,
																						BgL_arg1685z00_2745);
																				}
																				BgL_arg1664z00_2740 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							12)), BgL_arg1672z00_2743);
																			}
																			BgL_arg1662z00_2738 =
																				MAKE_YOUNG_PAIR(BgL_arg1663z00_2739,
																				BgL_arg1664z00_2740);
																		}
																		BgL_arg1644z00_2736 =
																			MAKE_YOUNG_PAIR(BgL_arg1662z00_2738,
																			BNIL);
																	}
																	BgL_arg1640z00_2734 =
																		MAKE_YOUNG_PAIR(BgL_arg1641z00_2735,
																		BgL_arg1644z00_2736);
																}
																BgL_arg1634z00_2732 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
																	BgL_arg1640z00_2734);
															}
															{	/* Module/class.scm 277 */
																bool_t BgL_arg1686z00_2746;
																obj_t BgL_arg1687z00_2747;

																BgL_arg1686z00_2746 =
																	(((BgL_slotz00_bglt) COBJECT(
																			((BgL_slotz00_bglt) BgL_sz00_2711)))->
																	BgL_readzd2onlyzf3z21);
																{	/* Module/class.scm 279 */
																	obj_t BgL_arg1688z00_2748;

																	{	/* Module/class.scm 279 */
																		obj_t BgL_arg1692z00_2749;
																		obj_t BgL_arg1695z00_2750;

																		BgL_arg1692z00_2749 =
																			(((BgL_slotz00_bglt) COBJECT(
																					((BgL_slotz00_bglt) BgL_sz00_2711)))->
																			BgL_userzd2infozd2);
																		{	/* Module/class.scm 280 */
																			obj_t BgL_arg1696z00_2751;
																			obj_t BgL_arg1697z00_2752;

																			BgL_arg1696z00_2751 =
																				BGl_slotzd2defaultzd2exprze70ze7zzmodule_classz00
																				(BgL_sz00_2711);
																			{	/* Module/class.scm 281 */
																				obj_t BgL_arg1704z00_2753;

																				{	/* Module/class.scm 281 */
																					bool_t BgL_test2134z00_3184;

																					{	/* Module/class.scm 281 */
																						obj_t BgL_arg1726z00_2754;

																						BgL_arg1726z00_2754 =
																							(((BgL_slotz00_bglt) COBJECT(
																									((BgL_slotz00_bglt)
																										BgL_sz00_2711)))->
																							BgL_typez00);
																						BgL_test2134z00_3184 =
																							BGl_isazf3zf3zz__objectz00
																							(BgL_arg1726z00_2754,
																							BGl_tclassz00zzobject_classz00);
																					}
																					if (BgL_test2134z00_3184)
																						{	/* Module/class.scm 282 */
																							BgL_typez00_bglt BgL_oz00_2755;

																							BgL_oz00_2755 =
																								((BgL_typez00_bglt)
																								(((BgL_slotz00_bglt) COBJECT(
																											((BgL_slotz00_bglt)
																												BgL_sz00_2711)))->
																									BgL_typez00));
																							{
																								BgL_globalz00_bglt
																									BgL_auxz00_3191;
																								{
																									BgL_tclassz00_bglt
																										BgL_auxz00_3192;
																									{
																										obj_t BgL_auxz00_3193;

																										{	/* Module/class.scm 282 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_3194;
																											BgL_tmpz00_3194 =
																												((BgL_objectz00_bglt)
																												BgL_oz00_2755);
																											BgL_auxz00_3193 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_3194);
																										}
																										BgL_auxz00_3192 =
																											((BgL_tclassz00_bglt)
																											BgL_auxz00_3193);
																									}
																									BgL_auxz00_3191 =
																										(((BgL_tclassz00_bglt)
																											COBJECT
																											(BgL_auxz00_3192))->
																										BgL_holderz00);
																								}
																								BgL_arg1704z00_2753 =
																									((obj_t) BgL_auxz00_3191);
																							}
																						}
																					else
																						{	/* Module/class.scm 283 */
																							obj_t BgL_arg1712z00_2756;

																							{	/* Module/class.scm 283 */
																								obj_t BgL_arg1719z00_2757;

																								{	/* Module/class.scm 283 */
																									obj_t BgL_arg1725z00_2758;

																									BgL_arg1725z00_2758 =
																										(((BgL_slotz00_bglt)
																											COBJECT((
																													(BgL_slotz00_bglt)
																													BgL_sz00_2711)))->
																										BgL_typez00);
																									BgL_arg1719z00_2757 =
																										BGl_typezd2defaultzd2idze70ze7zzmodule_classz00
																										(BgL_arg1725z00_2758);
																								}
																								BgL_arg1712z00_2756 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1719z00_2757, BNIL);
																							}
																							BgL_arg1704z00_2753 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 8)),
																								BgL_arg1712z00_2756);
																				}}
																				BgL_arg1697z00_2752 =
																					MAKE_YOUNG_PAIR(BgL_arg1704z00_2753,
																					BNIL);
																			}
																			BgL_arg1695z00_2750 =
																				MAKE_YOUNG_PAIR(BgL_arg1696z00_2751,
																				BgL_arg1697z00_2752);
																		}
																		BgL_arg1688z00_2748 =
																			MAKE_YOUNG_PAIR(BgL_arg1692z00_2749,
																			BgL_arg1695z00_2750);
																	}
																	BgL_arg1687z00_2747 =
																		MAKE_YOUNG_PAIR(BTRUE, BgL_arg1688z00_2748);
																}
																BgL_arg1639z00_2733 =
																	MAKE_YOUNG_PAIR(BBOOL(BgL_arg1686z00_2746),
																	BgL_arg1687z00_2747);
															}
															BgL_arg1599z00_2721 =
																MAKE_YOUNG_PAIR(BgL_arg1634z00_2732,
																BgL_arg1639z00_2733);
														}
														BgL_arg1589z00_2717 =
															MAKE_YOUNG_PAIR(BgL_arg1597z00_2720,
															BgL_arg1599z00_2721);
													}
													BgL_arg1578z00_2713 =
														MAKE_YOUNG_PAIR(BgL_arg1588z00_2716,
														BgL_arg1589z00_2717);
												}
												return
													MAKE_YOUNG_PAIR(BgL_arg1575z00_2712,
													BgL_arg1578z00_2713);
											}
										}
								}
							else
								{	/* Module/class.scm 301 */
									BgL_sz00_2759 = BgL_sz00_2686;
									{	/* Module/class.scm 286 */
										obj_t BgL_defsz00_2760;

										BgL_defsz00_2760 =
											BGl_classgenzd2slotzd2anonymousz00zzobject_classgenz00(
											((BgL_typez00_bglt) BgL_classz00_2685),
											((BgL_slotz00_bglt) BgL_sz00_2759));
										{	/* Module/class.scm 288 */
											obj_t BgL_arg1728z00_2761;
											obj_t BgL_arg1729z00_2762;

											{	/* Module/class.scm 288 */
												obj_t BgL_arg1731z00_2763;

												{	/* Module/class.scm 288 */
													obj_t BgL_arg1732z00_2764;

													BgL_arg1732z00_2764 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)), BNIL);
													BgL_arg1731z00_2763 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
														BgL_arg1732z00_2764);
												}
												BgL_arg1728z00_2761 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
													BgL_arg1731z00_2763);
											}
											{	/* Module/class.scm 289 */
												obj_t BgL_arg1733z00_2765;
												obj_t BgL_arg1738z00_2766;

												{	/* Module/class.scm 289 */
													obj_t BgL_arg1739z00_2767;

													{	/* Module/class.scm 289 */
														obj_t BgL_arg1740z00_2768;

														BgL_arg1740z00_2768 =
															(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt) BgL_sz00_2759)))->
															BgL_idz00);
														BgL_arg1739z00_2767 =
															MAKE_YOUNG_PAIR(BgL_arg1740z00_2768, BNIL);
													}
													BgL_arg1733z00_2765 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
														BgL_arg1739z00_2767);
												}
												{	/* Module/class.scm 290 */
													obj_t BgL_arg1741z00_2769;
													obj_t BgL_arg1742z00_2770;

													BgL_arg1741z00_2769 = CAR(((obj_t) BgL_defsz00_2760));
													{	/* Module/class.scm 290 */
														obj_t BgL_arg1743z00_2771;
														obj_t BgL_arg1744z00_2772;

														{	/* Module/class.scm 290 */
															obj_t BgL_pairz00_2773;

															BgL_pairz00_2773 =
																CDR(((obj_t) BgL_defsz00_2760));
															BgL_arg1743z00_2771 = CAR(BgL_pairz00_2773);
														}
														{	/* Module/class.scm 290 */
															bool_t BgL_arg1745z00_2774;
															obj_t BgL_arg1746z00_2775;

															BgL_arg1745z00_2774 =
																(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_sz00_2759)))->
																BgL_readzd2onlyzf3z21);
															{	/* Module/class.scm 292 */
																obj_t BgL_arg1747z00_2776;

																{	/* Module/class.scm 292 */
																	obj_t BgL_arg1754z00_2777;
																	obj_t BgL_arg1755z00_2778;

																	BgL_arg1754z00_2777 =
																		(((BgL_slotz00_bglt) COBJECT(
																				((BgL_slotz00_bglt) BgL_sz00_2759)))->
																		BgL_userzd2infozd2);
																	{	/* Module/class.scm 293 */
																		obj_t BgL_arg1756z00_2779;
																		obj_t BgL_arg1757z00_2780;

																		BgL_arg1756z00_2779 =
																			BGl_slotzd2defaultzd2exprze70ze7zzmodule_classz00
																			(BgL_sz00_2759);
																		{	/* Module/class.scm 294 */
																			obj_t BgL_arg1759z00_2781;

																			{	/* Module/class.scm 294 */
																				bool_t BgL_test2135z00_3240;

																				{	/* Module/class.scm 294 */
																					obj_t BgL_arg1779z00_2782;

																					BgL_arg1779z00_2782 =
																						(((BgL_slotz00_bglt) COBJECT(
																								((BgL_slotz00_bglt)
																									BgL_sz00_2759)))->
																						BgL_typez00);
																					BgL_test2135z00_3240 =
																						BGl_isazf3zf3zz__objectz00
																						(BgL_arg1779z00_2782,
																						BGl_tclassz00zzobject_classz00);
																				}
																				if (BgL_test2135z00_3240)
																					{	/* Module/class.scm 295 */
																						BgL_typez00_bglt BgL_oz00_2783;

																						BgL_oz00_2783 =
																							((BgL_typez00_bglt)
																							(((BgL_slotz00_bglt) COBJECT(
																										((BgL_slotz00_bglt)
																											BgL_sz00_2759)))->
																								BgL_typez00));
																						{
																							BgL_globalz00_bglt
																								BgL_auxz00_3247;
																							{
																								BgL_tclassz00_bglt
																									BgL_auxz00_3248;
																								{
																									obj_t BgL_auxz00_3249;

																									{	/* Module/class.scm 295 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_3250;
																										BgL_tmpz00_3250 =
																											((BgL_objectz00_bglt)
																											BgL_oz00_2783);
																										BgL_auxz00_3249 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_3250);
																									}
																									BgL_auxz00_3248 =
																										((BgL_tclassz00_bglt)
																										BgL_auxz00_3249);
																								}
																								BgL_auxz00_3247 =
																									(((BgL_tclassz00_bglt)
																										COBJECT(BgL_auxz00_3248))->
																									BgL_holderz00);
																							}
																							BgL_arg1759z00_2781 =
																								((obj_t) BgL_auxz00_3247);
																						}
																					}
																				else
																					{	/* Module/class.scm 296 */
																						obj_t BgL_arg1771z00_2784;

																						{	/* Module/class.scm 296 */
																							obj_t BgL_arg1775z00_2785;

																							{	/* Module/class.scm 296 */
																								obj_t BgL_arg1778z00_2786;

																								BgL_arg1778z00_2786 =
																									(((BgL_slotz00_bglt) COBJECT(
																											((BgL_slotz00_bglt)
																												BgL_sz00_2759)))->
																									BgL_typez00);
																								BgL_arg1775z00_2785 =
																									BGl_typezd2defaultzd2idze70ze7zzmodule_classz00
																									(BgL_arg1778z00_2786);
																							}
																							BgL_arg1771z00_2784 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1775z00_2785, BNIL);
																						}
																						BgL_arg1759z00_2781 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 8)),
																							BgL_arg1771z00_2784);
																			}}
																			BgL_arg1757z00_2780 =
																				MAKE_YOUNG_PAIR(BgL_arg1759z00_2781,
																				BNIL);
																		}
																		BgL_arg1755z00_2778 =
																			MAKE_YOUNG_PAIR(BgL_arg1756z00_2779,
																			BgL_arg1757z00_2780);
																	}
																	BgL_arg1747z00_2776 =
																		MAKE_YOUNG_PAIR(BgL_arg1754z00_2777,
																		BgL_arg1755z00_2778);
																}
																BgL_arg1746z00_2775 =
																	MAKE_YOUNG_PAIR(BFALSE, BgL_arg1747z00_2776);
															}
															BgL_arg1744z00_2772 =
																MAKE_YOUNG_PAIR(BBOOL(BgL_arg1745z00_2774),
																BgL_arg1746z00_2775);
														}
														BgL_arg1742z00_2770 =
															MAKE_YOUNG_PAIR(BgL_arg1743z00_2771,
															BgL_arg1744z00_2772);
													}
													BgL_arg1738z00_2766 =
														MAKE_YOUNG_PAIR(BgL_arg1741z00_2769,
														BgL_arg1742z00_2770);
												}
												BgL_arg1729z00_2762 =
													MAKE_YOUNG_PAIR(BgL_arg1733z00_2765,
													BgL_arg1738z00_2766);
											}
											return
												MAKE_YOUNG_PAIR(BgL_arg1728z00_2761,
												BgL_arg1729z00_2762);
										}
									}
								}
						}
					else
						{	/* Module/class.scm 300 */
							return BFALSE;
						}
				}
			}
		}

	}



/* slot-default-expr~0 */
	obj_t BGl_slotzd2defaultzd2exprze70ze7zzmodule_classz00(obj_t BgL_sz00_1873)
	{
		{	/* Module/class.scm 268 */
			if (BGl_slotzd2defaultzf3z21zzobject_slotsz00(
					((BgL_slotz00_bglt) BgL_sz00_1873)))
				{	/* Module/class.scm 267 */
					obj_t BgL_arg1564z00_1876;

					{	/* Module/class.scm 267 */
						obj_t BgL_arg1565z00_1877;

						{	/* Module/class.scm 267 */
							obj_t BgL_arg1573z00_1878;

							BgL_arg1573z00_1878 =
								(((BgL_slotz00_bglt) COBJECT(
										((BgL_slotz00_bglt) BgL_sz00_1873)))->
								BgL_defaultzd2valuezd2);
							BgL_arg1565z00_1877 = MAKE_YOUNG_PAIR(BgL_arg1573z00_1878, BNIL);
						}
						BgL_arg1564z00_1876 = MAKE_YOUNG_PAIR(BNIL, BgL_arg1565z00_1877);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg1564z00_1876);
				}
			else
				{	/* Module/class.scm 266 */
					return BFALSE;
				}
		}

	}



/* type-default-id~0 */
	obj_t BGl_typezd2defaultzd2idze70ze7zzmodule_classz00(obj_t BgL_typez00_1868)
	{
		{	/* Module/class.scm 263 */
			if (
				((((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_typez00_1868)))->BgL_idz00) ==
					CNST_TABLE_REF(((long) 17))))
				{	/* Module/class.scm 261 */
					return CNST_TABLE_REF(((long) 18));
				}
			else
				{	/* Module/class.scm 261 */
					return
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_typez00_1868)))->BgL_idz00);
				}
		}

	}



/* make-class-virtual-fields */
	obj_t BGl_makezd2classzd2virtualzd2fieldszd2zzmodule_classz00(obj_t
		BgL_classz00_58)
	{
		{	/* Module/class.scm 310 */
			{	/* Module/class.scm 339 */
				obj_t BgL_arg1782z00_1967;

				{	/* Module/class.scm 339 */
					obj_t BgL_arg1784z00_1968;

					{	/* Module/class.scm 339 */
						obj_t BgL_arg1796z00_1970;

						{
							BgL_tclassz00_bglt BgL_auxz00_3289;

							{
								obj_t BgL_auxz00_3290;

								{	/* Module/class.scm 344 */
									BgL_objectz00_bglt BgL_tmpz00_3291;

									BgL_tmpz00_3291 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_classz00_58));
									BgL_auxz00_3290 = BGL_OBJECT_WIDENING(BgL_tmpz00_3291);
								}
								BgL_auxz00_3289 = ((BgL_tclassz00_bglt) BgL_auxz00_3290);
							}
							BgL_arg1796z00_1970 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3289))->BgL_slotsz00);
						}
						{	/* Module/class.scm 340 */
							obj_t BgL_zc3z04anonymousza31798ze3z87_2687;

							BgL_zc3z04anonymousza31798ze3z87_2687 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31798ze3ze5zzmodule_classz00,
								(int) (((long) 1)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31798ze3z87_2687,
								(int) (((long) 0)), BgL_classz00_58);
							{	/* Module/class.scm 339 */
								obj_t BgL_list1797z00_1971;

								BgL_list1797z00_1971 =
									MAKE_YOUNG_PAIR(BgL_arg1796z00_1970, BNIL);
								BgL_arg1784z00_1968 =
									BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
									(BgL_zc3z04anonymousza31798ze3z87_2687, BgL_list1797z00_1971);
					}}}
					BgL_arg1782z00_1967 =
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_arg1784z00_1968,
						BNIL);
				}
				return
					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BgL_arg1782z00_1967);
		}}

	}



/* &<@anonymous:1798> */
	obj_t BGl_z62zc3z04anonymousza31798ze3ze5zzmodule_classz00(obj_t
		BgL_envz00_2688, obj_t BgL_sz00_2690)
	{
		{	/* Module/class.scm 339 */
			{	/* Module/class.scm 340 */
				obj_t BgL_classz00_2689;

				BgL_classz00_2689 = PROCEDURE_REF(BgL_envz00_2688, (int) (((long) 0)));
				{	/* Module/class.scm 340 */
					bool_t BgL_test2138z00_3309;

					if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
							((BgL_slotz00_bglt) BgL_sz00_2690)))
						{	/* Module/class.scm 340 */
							BgL_test2138z00_3309 =
								(
								(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_sz00_2690)))->
									BgL_classzd2ownerzd2) == BgL_classz00_2689);
						}
					else
						{	/* Module/class.scm 340 */
							BgL_test2138z00_3309 = ((bool_t) 0);
						}
					if (BgL_test2138z00_3309)
						{	/* Module/class.scm 342 */
							obj_t BgL_arg1808z00_2787;

							{	/* Module/class.scm 342 */
								obj_t BgL_arg1809z00_2788;
								obj_t BgL_arg1811z00_2789;

								BgL_arg1809z00_2788 =
									(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_sz00_2690)))->
									BgL_virtualzd2numzd2);
								{	/* Module/class.scm 343 */
									obj_t BgL_arg1820z00_2790;

									{	/* Module/class.scm 343 */
										obj_t BgL_arg1821z00_2791;

										{	/* Module/class.scm 343 */
											obj_t BgL_arg1822z00_2792;
											obj_t BgL_arg1823z00_2793;

											BgL_arg1822z00_2792 =
												BGl_getterze70ze7zzmodule_classz00(BgL_classz00_2689,
												BgL_sz00_2690);
											BgL_arg1823z00_2793 =
												MAKE_YOUNG_PAIR(BGl_setterze70ze7zzmodule_classz00
												(BgL_classz00_2689, BgL_sz00_2690), BNIL);
											BgL_arg1821z00_2791 =
												MAKE_YOUNG_PAIR(BgL_arg1822z00_2792,
												BgL_arg1823z00_2793);
										}
										BgL_arg1820z00_2790 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
											BgL_arg1821z00_2791);
									}
									BgL_arg1811z00_2789 =
										MAKE_YOUNG_PAIR(BgL_arg1820z00_2790, BNIL);
								}
								BgL_arg1808z00_2787 =
									MAKE_YOUNG_PAIR(BgL_arg1809z00_2788, BgL_arg1811z00_2789);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)),
								BgL_arg1808z00_2787);
						}
					else
						{	/* Module/class.scm 340 */
							return BFALSE;
						}
				}
			}
		}

	}



/* epairify-slot~0 */
	obj_t BGl_epairifyzd2slotze70z35zzmodule_classz00(obj_t BgL_defz00_1988,
		obj_t BgL_slotz00_1989)
	{
		{	/* Module/class.scm 316 */
			{	/* Module/class.scm 314 */
				bool_t BgL_test2140z00_3328;

				{	/* Module/class.scm 314 */
					obj_t BgL_arg1830z00_1995;

					BgL_arg1830z00_1995 =
						(((BgL_slotz00_bglt) COBJECT(
								((BgL_slotz00_bglt) BgL_slotz00_1989)))->BgL_srcz00);
					{	/* Module/class.scm 314 */
						bool_t BgL_res2068z00_2505;

						BgL_res2068z00_2505 = EPAIRP(BgL_arg1830z00_1995);
						BgL_test2140z00_3328 = BgL_res2068z00_2505;
					}
				}
				if (BgL_test2140z00_3328)
					{	/* Module/class.scm 315 */
						obj_t BgL_arg1829z00_1994;

						BgL_arg1829z00_1994 =
							(((BgL_slotz00_bglt) COBJECT(
									((BgL_slotz00_bglt) BgL_slotz00_1989)))->BgL_srcz00);
						return
							BGl_epairifyzd2reczd2zztools_miscz00(BgL_defz00_1988,
							BgL_arg1829z00_1994);
					}
				else
					{	/* Module/class.scm 314 */
						return BgL_defz00_1988;
					}
			}
		}

	}



/* getter~0 */
	obj_t BGl_getterze70ze7zzmodule_classz00(obj_t BgL_classz00_2693,
		obj_t BgL_slotz00_1996)
	{
		{	/* Module/class.scm 325 */
			{	/* Module/class.scm 320 */
				obj_t BgL_arg1832z00_1998;

				{	/* Module/class.scm 320 */
					obj_t BgL_arg1833z00_1999;

					{	/* Module/class.scm 320 */
						obj_t BgL_arg1835z00_2000;
						obj_t BgL_arg1836z00_2001;

						BgL_arg1835z00_2000 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
						{	/* Module/class.scm 321 */
							obj_t BgL_arg1838z00_2002;
							obj_t BgL_arg1840z00_2003;

							{	/* Module/class.scm 321 */
								obj_t BgL_arg1841z00_2004;

								{	/* Module/class.scm 321 */
									obj_t BgL_arg1842z00_2005;
									obj_t BgL_arg1845z00_2006;

									BgL_arg1842z00_2005 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)), BNIL);
									{	/* Module/class.scm 322 */
										obj_t BgL_arg1846z00_2007;

										{	/* Module/class.scm 322 */
											obj_t BgL_arg1847z00_2008;

											{	/* Module/class.scm 322 */
												obj_t BgL_arg1848z00_2009;
												obj_t BgL_arg1850z00_2010;

												BgL_arg1848z00_2009 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt)
																((BgL_typez00_bglt) BgL_classz00_2693))))->
													BgL_idz00);
												{	/* Module/class.scm 323 */
													obj_t BgL_arg1851z00_2011;

													{	/* Module/class.scm 323 */
														obj_t BgL_arg1852z00_2012;

														BgL_arg1852z00_2012 =
															(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt) BgL_slotz00_1996)))->
															BgL_virtualzd2numzd2);
														BgL_arg1851z00_2011 =
															MAKE_YOUNG_PAIR(BgL_arg1852z00_2012, BNIL);
													}
													BgL_arg1850z00_2010 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
														BgL_arg1851z00_2011);
												}
												BgL_arg1847z00_2008 =
													MAKE_YOUNG_PAIR(BgL_arg1848z00_2009,
													BgL_arg1850z00_2010);
											}
											BgL_arg1846z00_2007 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
												BgL_arg1847z00_2008);
										}
										BgL_arg1845z00_2006 =
											MAKE_YOUNG_PAIR(BgL_arg1846z00_2007, BNIL);
									}
									BgL_arg1841z00_2004 =
										MAKE_YOUNG_PAIR(BgL_arg1842z00_2005, BgL_arg1845z00_2006);
								}
								BgL_arg1838z00_2002 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
									BgL_arg1841z00_2004);
							}
							{	/* Module/class.scm 324 */
								obj_t BgL_arg1853z00_2013;

								{	/* Module/class.scm 324 */
									obj_t BgL_arg1855z00_2014;
									obj_t BgL_arg1856z00_2015;

									BgL_arg1855z00_2014 =
										(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt) BgL_slotz00_1996)))->BgL_getterz00);
									BgL_arg1856z00_2015 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BNIL);
									BgL_arg1853z00_2013 =
										MAKE_YOUNG_PAIR(BgL_arg1855z00_2014, BgL_arg1856z00_2015);
								}
								BgL_arg1840z00_2003 =
									MAKE_YOUNG_PAIR(BgL_arg1853z00_2013, BNIL);
							}
							BgL_arg1836z00_2001 =
								MAKE_YOUNG_PAIR(BgL_arg1838z00_2002, BgL_arg1840z00_2003);
						}
						BgL_arg1833z00_1999 =
							MAKE_YOUNG_PAIR(BgL_arg1835z00_2000, BgL_arg1836z00_2001);
					}
					BgL_arg1832z00_1998 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg1833z00_1999);
				}
				return
					BGl_epairifyzd2slotze70z35zzmodule_classz00(BgL_arg1832z00_1998,
					BgL_slotz00_1996);
			}
		}

	}



/* setter~0 */
	obj_t BGl_setterze70ze7zzmodule_classz00(obj_t BgL_classz00_2694,
		obj_t BgL_slotz00_2016)
	{
		{	/* Module/class.scm 336 */
			if (
				(((BgL_slotz00_bglt) COBJECT(
							((BgL_slotz00_bglt) BgL_slotz00_2016)))->BgL_readzd2onlyzf3z21))
				{	/* Module/class.scm 328 */
					return BFALSE;
				}
			else
				{	/* Module/class.scm 331 */
					obj_t BgL_arg1859z00_2019;

					{	/* Module/class.scm 331 */
						obj_t BgL_arg1861z00_2020;

						{	/* Module/class.scm 331 */
							obj_t BgL_arg1862z00_2021;
							obj_t BgL_arg1863z00_2022;

							{	/* Module/class.scm 331 */
								obj_t BgL_arg1865z00_2023;

								BgL_arg1865z00_2023 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)), BNIL);
								BgL_arg1862z00_2021 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
									BgL_arg1865z00_2023);
							}
							{	/* Module/class.scm 332 */
								obj_t BgL_arg1866z00_2024;
								obj_t BgL_arg1868z00_2025;

								{	/* Module/class.scm 332 */
									obj_t BgL_arg1870z00_2026;

									{	/* Module/class.scm 332 */
										obj_t BgL_arg1871z00_2027;
										obj_t BgL_arg1872z00_2028;

										BgL_arg1871z00_2027 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)), BNIL);
										{	/* Module/class.scm 333 */
											obj_t BgL_arg1873z00_2029;

											{	/* Module/class.scm 333 */
												obj_t BgL_arg1874z00_2030;

												{	/* Module/class.scm 333 */
													obj_t BgL_arg1876z00_2031;
													obj_t BgL_arg1877z00_2032;

													BgL_arg1876z00_2031 =
														(((BgL_typez00_bglt) COBJECT(
																((BgL_typez00_bglt)
																	((BgL_typez00_bglt) BgL_classz00_2694))))->
														BgL_idz00);
													{	/* Module/class.scm 334 */
														obj_t BgL_arg1878z00_2033;

														{	/* Module/class.scm 334 */
															obj_t BgL_arg1879z00_2034;
															obj_t BgL_arg1881z00_2035;

															BgL_arg1879z00_2034 =
																(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_slotz00_2016)))->
																BgL_virtualzd2numzd2);
															BgL_arg1881z00_2035 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																BNIL);
															BgL_arg1878z00_2033 =
																MAKE_YOUNG_PAIR(BgL_arg1879z00_2034,
																BgL_arg1881z00_2035);
														}
														BgL_arg1877z00_2032 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
															BgL_arg1878z00_2033);
													}
													BgL_arg1874z00_2030 =
														MAKE_YOUNG_PAIR(BgL_arg1876z00_2031,
														BgL_arg1877z00_2032);
												}
												BgL_arg1873z00_2029 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
													BgL_arg1874z00_2030);
											}
											BgL_arg1872z00_2028 =
												MAKE_YOUNG_PAIR(BgL_arg1873z00_2029, BNIL);
										}
										BgL_arg1870z00_2026 =
											MAKE_YOUNG_PAIR(BgL_arg1871z00_2027, BgL_arg1872z00_2028);
									}
									BgL_arg1866z00_2024 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
										BgL_arg1870z00_2026);
								}
								{	/* Module/class.scm 335 */
									obj_t BgL_arg1882z00_2036;

									{	/* Module/class.scm 335 */
										obj_t BgL_arg1883z00_2037;
										obj_t BgL_arg1884z00_2038;

										BgL_arg1883z00_2037 =
											(((BgL_slotz00_bglt) COBJECT(
													((BgL_slotz00_bglt) BgL_slotz00_2016)))->
											BgL_setterz00);
										{	/* Module/class.scm 335 */
											obj_t BgL_arg1885z00_2039;

											BgL_arg1885z00_2039 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)), BNIL);
											BgL_arg1884z00_2038 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
												BgL_arg1885z00_2039);
										}
										BgL_arg1882z00_2036 =
											MAKE_YOUNG_PAIR(BgL_arg1883z00_2037, BgL_arg1884z00_2038);
									}
									BgL_arg1868z00_2025 =
										MAKE_YOUNG_PAIR(BgL_arg1882z00_2036, BNIL);
								}
								BgL_arg1863z00_2022 =
									MAKE_YOUNG_PAIR(BgL_arg1866z00_2024, BgL_arg1868z00_2025);
							}
							BgL_arg1861z00_2020 =
								MAKE_YOUNG_PAIR(BgL_arg1862z00_2021, BgL_arg1863z00_2022);
						}
						BgL_arg1859z00_2019 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)), BgL_arg1861z00_2020);
					}
					return
						BGl_epairifyzd2slotze70z35zzmodule_classz00(BgL_arg1859z00_2019,
						BgL_slotz00_2016);
				}
		}

	}



/* class-finalizer */
	BGL_EXPORTED_DEF obj_t BGl_classzd2finaliza7erz75zzmodule_classz00()
	{
		{	/* Module/class.scm 351 */
			{	/* Module/class.scm 353 */
				bool_t BgL_test2142z00_3404;

				if (NULLP(BGl_za2classzd2accessesza2zd2zzmodule_classz00))
					{	/* Module/class.scm 353 */
						if (
							(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 23))))
							{	/* Module/class.scm 353 */
								BgL_test2142z00_3404 = ((bool_t) 0);
							}
						else
							{	/* Module/class.scm 353 */
								BgL_test2142z00_3404 = ((bool_t) 1);
							}
					}
				else
					{	/* Module/class.scm 353 */
						BgL_test2142z00_3404 = ((bool_t) 0);
					}
				if (BgL_test2142z00_3404)
					{	/* Module/class.scm 353 */
						return CNST_TABLE_REF(((long) 24));
					}
				else
					{	/* Module/class.scm 368 */
						obj_t BgL_bodyz00_2046;

						BgL_bodyz00_2046 =
							BGl_forcezd2classzd2accessesz00zzmodule_classz00();
						{	/* Module/class.scm 368 */
							obj_t BgL_bodyz00_2047;

							BgL_bodyz00_2047 =
								BGl_appendzd221011zd2zzmodule_classz00(bgl_reverse
								(BGl_za2declaredzd2classesza2zd2zzmodule_classz00),
								BgL_bodyz00_2046);
							{	/* Module/class.scm 369 */
								obj_t BgL_bodyz00_2048;

								{	/* Module/class.scm 370 */
									bool_t BgL_test2145z00_3414;

									if (
										((long) CINT(BGl_za2debugzd2moduleza2zd2zzengine_paramz00) >
											((long) 0)))
										{	/* Module/class.scm 371 */
											bool_t BgL_test2147z00_3418;

											{	/* Module/class.scm 372 */
												obj_t BgL_arg1914z00_2073;

												{	/* Module/class.scm 372 */
													obj_t BgL_arg1915z00_2074;

													BgL_arg1915z00_2074 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_arg1914z00_2073 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1915z00_2074)))->
														BgL_debugzd2supportzd2);
												}
												BgL_test2147z00_3418 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 25)), BgL_arg1914z00_2073));
											}
											if (BgL_test2147z00_3418)
												{	/* Module/class.scm 371 */
													BgL_test2145z00_3414 =
														PAIRP
														(BGl_za2declaredzd2classesza2zd2zzmodule_classz00);
												}
											else
												{	/* Module/class.scm 371 */
													BgL_test2145z00_3414 = ((bool_t) 0);
												}
										}
									else
										{	/* Module/class.scm 370 */
											BgL_test2145z00_3414 = ((bool_t) 0);
										}
									if (BgL_test2145z00_3414)
										{	/* Module/class.scm 377 */
											obj_t BgL_arg1907z00_2064;

											{	/* Module/class.scm 377 */
												obj_t BgL_arg1908z00_2065;

												{	/* Module/class.scm 377 */
													obj_t BgL_arg1909z00_2066;
													obj_t BgL_arg1910z00_2067;

													{	/* Module/class.scm 377 */
														obj_t BgL_arg1911z00_2068;

														{	/* Module/class.scm 377 */
															obj_t BgL_arg1912z00_2069;

															{	/* Module/class.scm 377 */
																obj_t BgL_arg1913z00_2070;

																{	/* Module/class.scm 377 */
																	obj_t BgL_res2073z00_2528;

																	{	/* Module/class.scm 377 */
																		obj_t BgL_symbolz00_2526;

																		BgL_symbolz00_2526 =
																			BGl_za2moduleza2z00zzmodule_modulez00;
																		{	/* Module/class.scm 377 */
																			obj_t BgL_arg1466z00_2527;

																			BgL_arg1466z00_2527 =
																				SYMBOL_TO_STRING(BgL_symbolz00_2526);
																			BgL_res2073z00_2528 =
																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																				(BgL_arg1466z00_2527);
																		}
																	}
																	BgL_arg1913z00_2070 = BgL_res2073z00_2528;
																}
																BgL_arg1912z00_2069 =
																	string_append_3
																	(BGl_string2094z00zzmodule_classz00,
																	BgL_arg1913z00_2070,
																	BGl_string2095z00zzmodule_classz00);
															}
															BgL_arg1911z00_2068 =
																MAKE_YOUNG_PAIR(BgL_arg1912z00_2069, BNIL);
														}
														BgL_arg1909z00_2066 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
															BgL_arg1911z00_2068);
													}
													BgL_arg1910z00_2067 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_bodyz00_2047, BNIL);
													BgL_arg1908z00_2065 =
														MAKE_YOUNG_PAIR(BgL_arg1909z00_2066,
														BgL_arg1910z00_2067);
												}
												BgL_arg1907z00_2064 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 27)),
													BgL_arg1908z00_2065);
											}
											BgL_bodyz00_2048 =
												MAKE_YOUNG_PAIR(BgL_arg1907z00_2064, BNIL);
										}
									else
										{	/* Module/class.scm 370 */
											BgL_bodyz00_2048 = BgL_bodyz00_2047;
										}
								}
								{	/* Module/class.scm 370 */

									{	/* Module/class.scm 383 */
										obj_t BgL_arg1889z00_2049;
										bool_t BgL_arg1891z00_2050;

										if (PAIRP(BgL_bodyz00_2048))
											{	/* Module/class.scm 383 */
												BgL_arg1889z00_2049 = BgL_bodyz00_2048;
											}
										else
											{	/* Module/class.scm 383 */
												BgL_arg1889z00_2049 = CNST_TABLE_REF(((long) 28));
											}
										BgL_arg1891z00_2050 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 23)));
										{	/* Module/class.scm 381 */
											obj_t BgL_idz00_2530;

											BgL_idz00_2530 = CNST_TABLE_REF(((long) 29));
											{	/* Module/class.scm 381 */
												obj_t BgL_newz00_2531;

												BgL_newz00_2531 =
													create_struct(CNST_TABLE_REF(((long) 30)),
													(int) (((long) 5)));
												{	/* Module/class.scm 381 */
													obj_t BgL_auxz00_3448;
													int BgL_tmpz00_3446;

													BgL_auxz00_3448 = BBOOL(BgL_arg1891z00_2050);
													BgL_tmpz00_3446 = (int) (((long) 4));
													STRUCT_SET(BgL_newz00_2531, BgL_tmpz00_3446,
														BgL_auxz00_3448);
												}
												{	/* Module/class.scm 381 */
													int BgL_tmpz00_3451;

													BgL_tmpz00_3451 = (int) (((long) 3));
													STRUCT_SET(BgL_newz00_2531, BgL_tmpz00_3451, BTRUE);
												}
												{	/* Module/class.scm 381 */
													int BgL_tmpz00_3454;

													BgL_tmpz00_3454 = (int) (((long) 2));
													STRUCT_SET(BgL_newz00_2531, BgL_tmpz00_3454,
														BgL_arg1889z00_2049);
												}
												{	/* Module/class.scm 381 */
													obj_t BgL_auxz00_3459;
													int BgL_tmpz00_3457;

													BgL_auxz00_3459 = BINT(((long) 19));
													BgL_tmpz00_3457 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2531, BgL_tmpz00_3457,
														BgL_auxz00_3459);
												}
												{	/* Module/class.scm 381 */
													int BgL_tmpz00_3462;

													BgL_tmpz00_3462 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2531, BgL_tmpz00_3462,
														BgL_idz00_2530);
												}
												BGl_za2objectzd2unitza2zd2zzmodule_classz00 =
													BgL_newz00_2531;
									}}}
									{	/* Module/class.scm 398 */
										bool_t BgL_arg1893z00_2052;

										BgL_arg1893z00_2052 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 23)));
										{	/* Module/class.scm 392 */
											obj_t BgL_idz00_2537;
											obj_t BgL_sexpza2za2_2538;

											BgL_idz00_2537 = CNST_TABLE_REF(((long) 31));
											BgL_sexpza2za2_2538 = CNST_TABLE_REF(((long) 28));
											{	/* Module/class.scm 392 */
												obj_t BgL_newz00_2539;

												BgL_newz00_2539 =
													create_struct(CNST_TABLE_REF(((long) 30)),
													(int) (((long) 5)));
												{	/* Module/class.scm 392 */
													obj_t BgL_auxz00_3474;
													int BgL_tmpz00_3472;

													BgL_auxz00_3474 = BBOOL(BgL_arg1893z00_2052);
													BgL_tmpz00_3472 = (int) (((long) 4));
													STRUCT_SET(BgL_newz00_2539, BgL_tmpz00_3472,
														BgL_auxz00_3474);
												}
												{	/* Module/class.scm 392 */
													int BgL_tmpz00_3477;

													BgL_tmpz00_3477 = (int) (((long) 3));
													STRUCT_SET(BgL_newz00_2539, BgL_tmpz00_3477, BTRUE);
												}
												{	/* Module/class.scm 392 */
													int BgL_tmpz00_3480;

													BgL_tmpz00_3480 = (int) (((long) 2));
													STRUCT_SET(BgL_newz00_2539, BgL_tmpz00_3480,
														BgL_sexpza2za2_2538);
												}
												{	/* Module/class.scm 392 */
													obj_t BgL_auxz00_3485;
													int BgL_tmpz00_3483;

													BgL_auxz00_3485 = BINT(((long) 21));
													BgL_tmpz00_3483 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2539, BgL_tmpz00_3483,
														BgL_auxz00_3485);
												}
												{	/* Module/class.scm 392 */
													int BgL_tmpz00_3488;

													BgL_tmpz00_3488 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2539, BgL_tmpz00_3488,
														BgL_idz00_2537);
												}
												BGl_za2methodzd2unitza2zd2zzmodule_classz00 =
													BgL_newz00_2539;
									}}}
									{	/* Module/class.scm 405 */
										bool_t BgL_arg1895z00_2053;

										BgL_arg1895z00_2053 =
											(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 23)));
										{	/* Module/class.scm 399 */
											obj_t BgL_idz00_2545;
											obj_t BgL_sexpza2za2_2546;

											BgL_idz00_2545 = CNST_TABLE_REF(((long) 32));
											BgL_sexpza2za2_2546 = CNST_TABLE_REF(((long) 28));
											{	/* Module/class.scm 399 */
												obj_t BgL_newz00_2547;

												BgL_newz00_2547 =
													create_struct(CNST_TABLE_REF(((long) 30)),
													(int) (((long) 5)));
												{	/* Module/class.scm 399 */
													obj_t BgL_auxz00_3500;
													int BgL_tmpz00_3498;

													BgL_auxz00_3500 = BBOOL(BgL_arg1895z00_2053);
													BgL_tmpz00_3498 = (int) (((long) 4));
													STRUCT_SET(BgL_newz00_2547, BgL_tmpz00_3498,
														BgL_auxz00_3500);
												}
												{	/* Module/class.scm 399 */
													int BgL_tmpz00_3503;

													BgL_tmpz00_3503 = (int) (((long) 3));
													STRUCT_SET(BgL_newz00_2547, BgL_tmpz00_3503, BTRUE);
												}
												{	/* Module/class.scm 399 */
													int BgL_tmpz00_3506;

													BgL_tmpz00_3506 = (int) (((long) 2));
													STRUCT_SET(BgL_newz00_2547, BgL_tmpz00_3506,
														BgL_sexpza2za2_2546);
												}
												{	/* Module/class.scm 399 */
													obj_t BgL_auxz00_3511;
													int BgL_tmpz00_3509;

													BgL_auxz00_3511 = BINT(((long) 20));
													BgL_tmpz00_3509 = (int) (((long) 1));
													STRUCT_SET(BgL_newz00_2547, BgL_tmpz00_3509,
														BgL_auxz00_3511);
												}
												{	/* Module/class.scm 399 */
													int BgL_tmpz00_3514;

													BgL_tmpz00_3514 = (int) (((long) 0));
													STRUCT_SET(BgL_newz00_2547, BgL_tmpz00_3514,
														BgL_idz00_2545);
												}
												BGl_za2genericzd2unitza2zd2zzmodule_classz00 =
													BgL_newz00_2547;
									}}}
									BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
									BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL;
									{	/* Module/class.scm 409 */
										obj_t BgL_list1896z00_2054;

										{	/* Module/class.scm 409 */
											obj_t BgL_arg1897z00_2055;

											{	/* Module/class.scm 409 */
												obj_t BgL_arg1898z00_2056;

												BgL_arg1898z00_2056 =
													MAKE_YOUNG_PAIR
													(BGl_za2methodzd2unitza2zd2zzmodule_classz00, BNIL);
												BgL_arg1897z00_2055 =
													MAKE_YOUNG_PAIR
													(BGl_za2genericzd2unitza2zd2zzmodule_classz00,
													BgL_arg1898z00_2056);
											}
											BgL_list1896z00_2054 =
												MAKE_YOUNG_PAIR
												(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
												BgL_arg1897z00_2055);
										}
										return BgL_list1896z00_2054;
									}
								}
							}
						}
					}
			}
		}

	}



/* &class-finalizer */
	obj_t BGl_z62classzd2finaliza7erz17zzmodule_classz00(obj_t BgL_envz00_2691)
	{
		{	/* Module/class.scm 351 */
			return BGl_classzd2finaliza7erz75zzmodule_classz00();
		}

	}



/* class-finalizer-add-static! */
	BGL_EXPORTED_DEF obj_t
		BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00()
	{
		{	/* Module/class.scm 417 */
			{	/* Module/class.scm 418 */
				obj_t BgL_bodyz00_2078;

				BgL_bodyz00_2078 = BGl_forcezd2classzd2accessesz00zzmodule_classz00();
				{	/* Module/class.scm 418 */
					obj_t BgL_bodyz00_2079;

					BgL_bodyz00_2079 =
						BGl_appendzd221011zd2zzmodule_classz00(bgl_reverse
						(BGl_za2declaredzd2classesza2zd2zzmodule_classz00),
						BgL_bodyz00_2078);
					{	/* Module/class.scm 419 */

						{	/* Module/class.scm 420 */
							bool_t BgL_test2149z00_3524;

							{	/* Module/class.scm 420 */
								obj_t BgL_oz00_2554;

								BgL_oz00_2554 = BGl_za2objectzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_2554))
									{	/* Module/class.scm 420 */
										BgL_test2149z00_3524 =
											(STRUCT_KEY(BgL_oz00_2554) ==
											CNST_TABLE_REF(((long) 30)));
									}
								else
									{	/* Module/class.scm 420 */
										BgL_test2149z00_3524 = ((bool_t) 0);
									}
							}
							if (BgL_test2149z00_3524)
								{	/* Module/class.scm 422 */
									obj_t BgL_arg1918z00_2081;

									BgL_arg1918z00_2081 =
										BGl_appendzd221011zd2zzmodule_classz00(STRUCT_REF
										(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
											(int) (((long) 2))), BgL_bodyz00_2079);
									{	/* Module/class.scm 421 */
										int BgL_tmpz00_3533;

										BgL_tmpz00_3533 = (int) (((long) 2));
										STRUCT_SET(BGl_za2objectzd2unitza2zd2zzmodule_classz00,
											BgL_tmpz00_3533, BgL_arg1918z00_2081);
								}}
							else
								{	/* Module/class.scm 426 */
									obj_t BgL_arg1920z00_2083;
									bool_t BgL_arg1921z00_2084;

									if (PAIRP(BgL_bodyz00_2079))
										{	/* Module/class.scm 426 */
											BgL_arg1920z00_2083 = BgL_bodyz00_2079;
										}
									else
										{	/* Module/class.scm 426 */
											BgL_arg1920z00_2083 = CNST_TABLE_REF(((long) 28));
										}
									BgL_arg1921z00_2084 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 23)));
									{	/* Module/class.scm 424 */
										obj_t BgL_idz00_2565;

										BgL_idz00_2565 = CNST_TABLE_REF(((long) 29));
										{	/* Module/class.scm 424 */
											obj_t BgL_newz00_2566;

											BgL_newz00_2566 =
												create_struct(CNST_TABLE_REF(((long) 30)),
												(int) (((long) 5)));
											{	/* Module/class.scm 424 */
												obj_t BgL_auxz00_3547;
												int BgL_tmpz00_3545;

												BgL_auxz00_3547 = BBOOL(BgL_arg1921z00_2084);
												BgL_tmpz00_3545 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2566, BgL_tmpz00_3545,
													BgL_auxz00_3547);
											}
											{	/* Module/class.scm 424 */
												int BgL_tmpz00_3550;

												BgL_tmpz00_3550 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2566, BgL_tmpz00_3550, BTRUE);
											}
											{	/* Module/class.scm 424 */
												int BgL_tmpz00_3553;

												BgL_tmpz00_3553 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2566, BgL_tmpz00_3553,
													BgL_arg1920z00_2083);
											}
											{	/* Module/class.scm 424 */
												obj_t BgL_auxz00_3558;
												int BgL_tmpz00_3556;

												BgL_auxz00_3558 = BINT(((long) 19));
												BgL_tmpz00_3556 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2566, BgL_tmpz00_3556,
													BgL_auxz00_3558);
											}
											{	/* Module/class.scm 424 */
												int BgL_tmpz00_3561;

												BgL_tmpz00_3561 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2566, BgL_tmpz00_3561,
													BgL_idz00_2565);
											}
											BGl_za2objectzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_2566;
						}}}}
						{	/* Module/class.scm 429 */
							bool_t BgL_test2152z00_3564;

							{	/* Module/class.scm 429 */
								obj_t BgL_oz00_2572;

								BgL_oz00_2572 = BGl_za2methodzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_2572))
									{	/* Module/class.scm 429 */
										BgL_test2152z00_3564 =
											(STRUCT_KEY(BgL_oz00_2572) ==
											CNST_TABLE_REF(((long) 30)));
									}
								else
									{	/* Module/class.scm 429 */
										BgL_test2152z00_3564 = ((bool_t) 0);
									}
							}
							if (BgL_test2152z00_3564)
								{	/* Module/class.scm 429 */
									BFALSE;
								}
							else
								{	/* Module/class.scm 437 */
									bool_t BgL_arg1924z00_2087;

									BgL_arg1924z00_2087 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 23)));
									{	/* Module/class.scm 431 */
										obj_t BgL_idz00_2578;
										obj_t BgL_sexpza2za2_2579;

										BgL_idz00_2578 = CNST_TABLE_REF(((long) 31));
										BgL_sexpza2za2_2579 = CNST_TABLE_REF(((long) 28));
										{	/* Module/class.scm 431 */
											obj_t BgL_newz00_2580;

											BgL_newz00_2580 =
												create_struct(CNST_TABLE_REF(((long) 30)),
												(int) (((long) 5)));
											{	/* Module/class.scm 431 */
												obj_t BgL_auxz00_3579;
												int BgL_tmpz00_3577;

												BgL_auxz00_3579 = BBOOL(BgL_arg1924z00_2087);
												BgL_tmpz00_3577 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2580, BgL_tmpz00_3577,
													BgL_auxz00_3579);
											}
											{	/* Module/class.scm 431 */
												int BgL_tmpz00_3582;

												BgL_tmpz00_3582 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2580, BgL_tmpz00_3582, BTRUE);
											}
											{	/* Module/class.scm 431 */
												int BgL_tmpz00_3585;

												BgL_tmpz00_3585 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2580, BgL_tmpz00_3585,
													BgL_sexpza2za2_2579);
											}
											{	/* Module/class.scm 431 */
												obj_t BgL_auxz00_3590;
												int BgL_tmpz00_3588;

												BgL_auxz00_3590 = BINT(((long) 21));
												BgL_tmpz00_3588 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2580, BgL_tmpz00_3588,
													BgL_auxz00_3590);
											}
											{	/* Module/class.scm 431 */
												int BgL_tmpz00_3593;

												BgL_tmpz00_3593 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2580, BgL_tmpz00_3593,
													BgL_idz00_2578);
											}
											BGl_za2methodzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_2580;
						}}}}
						{	/* Module/class.scm 438 */
							bool_t BgL_test2154z00_3596;

							{	/* Module/class.scm 438 */
								obj_t BgL_oz00_2586;

								BgL_oz00_2586 = BGl_za2genericzd2unitza2zd2zzmodule_classz00;
								if (STRUCTP(BgL_oz00_2586))
									{	/* Module/class.scm 438 */
										BgL_test2154z00_3596 =
											(STRUCT_KEY(BgL_oz00_2586) ==
											CNST_TABLE_REF(((long) 30)));
									}
								else
									{	/* Module/class.scm 438 */
										BgL_test2154z00_3596 = ((bool_t) 0);
									}
							}
							if (BgL_test2154z00_3596)
								{	/* Module/class.scm 438 */
									BFALSE;
								}
							else
								{	/* Module/class.scm 446 */
									bool_t BgL_arg1926z00_2089;

									BgL_arg1926z00_2089 =
										(BGl_za2objectzd2initzd2modeza2z00zzengine_paramz00 ==
										CNST_TABLE_REF(((long) 23)));
									{	/* Module/class.scm 440 */
										obj_t BgL_idz00_2592;
										obj_t BgL_sexpza2za2_2593;

										BgL_idz00_2592 = CNST_TABLE_REF(((long) 32));
										BgL_sexpza2za2_2593 = CNST_TABLE_REF(((long) 28));
										{	/* Module/class.scm 440 */
											obj_t BgL_newz00_2594;

											BgL_newz00_2594 =
												create_struct(CNST_TABLE_REF(((long) 30)),
												(int) (((long) 5)));
											{	/* Module/class.scm 440 */
												obj_t BgL_auxz00_3611;
												int BgL_tmpz00_3609;

												BgL_auxz00_3611 = BBOOL(BgL_arg1926z00_2089);
												BgL_tmpz00_3609 = (int) (((long) 4));
												STRUCT_SET(BgL_newz00_2594, BgL_tmpz00_3609,
													BgL_auxz00_3611);
											}
											{	/* Module/class.scm 440 */
												int BgL_tmpz00_3614;

												BgL_tmpz00_3614 = (int) (((long) 3));
												STRUCT_SET(BgL_newz00_2594, BgL_tmpz00_3614, BTRUE);
											}
											{	/* Module/class.scm 440 */
												int BgL_tmpz00_3617;

												BgL_tmpz00_3617 = (int) (((long) 2));
												STRUCT_SET(BgL_newz00_2594, BgL_tmpz00_3617,
													BgL_sexpza2za2_2593);
											}
											{	/* Module/class.scm 440 */
												obj_t BgL_auxz00_3622;
												int BgL_tmpz00_3620;

												BgL_auxz00_3622 = BINT(((long) 21));
												BgL_tmpz00_3620 = (int) (((long) 1));
												STRUCT_SET(BgL_newz00_2594, BgL_tmpz00_3620,
													BgL_auxz00_3622);
											}
											{	/* Module/class.scm 440 */
												int BgL_tmpz00_3625;

												BgL_tmpz00_3625 = (int) (((long) 0));
												STRUCT_SET(BgL_newz00_2594, BgL_tmpz00_3625,
													BgL_idz00_2592);
											}
											BGl_za2genericzd2unitza2zd2zzmodule_classz00 =
												BgL_newz00_2594;
						}}}}
						BGl_za2classzd2accessesza2zd2zzmodule_classz00 = BNIL;
						BGl_za2declaredzd2classesza2zd2zzmodule_classz00 = BNIL;
						return BUNSPEC;
					}
				}
			}
		}

	}



/* &class-finalizer-add-static! */
	obj_t BGl_z62classzd2finaliza7erzd2addzd2staticz12z05zzmodule_classz00(obj_t
		BgL_envz00_2692)
	{
		{	/* Module/class.scm 417 */
			return BGl_classzd2finaliza7erzd2addzd2staticz12z67zzmodule_classz00();
		}

	}



/* force-class-accesses */
	obj_t BGl_forcezd2classzd2accessesz00zzmodule_classz00()
	{
		{	/* Module/class.scm 458 */
			{	/* Module/class.scm 460 */
				obj_t BgL_g1111z00_2091;

				BgL_g1111z00_2091 =
					bgl_reverse(BGl_za2classzd2accessesza2zd2zzmodule_classz00);
				{
					obj_t BgL_curz00_2095;
					obj_t BgL_nextz00_2096;
					obj_t BgL_accessz00_2097;

					BgL_curz00_2095 = BgL_g1111z00_2091;
					BgL_nextz00_2096 = BNIL;
					BgL_accessz00_2097 = BNIL;
				BgL_zc3z04anonymousza31928ze3z87_2098:
					if (NULLP(BgL_curz00_2095))
						{	/* Module/class.scm 463 */
							if (NULLP(BgL_nextz00_2096))
								{	/* Module/class.scm 464 */
									return BgL_accessz00_2097;
								}
							else
								{
									obj_t BgL_nextz00_3635;
									obj_t BgL_curz00_3634;

									BgL_curz00_3634 = BgL_nextz00_2096;
									BgL_nextz00_3635 = BNIL;
									BgL_nextz00_2096 = BgL_nextz00_3635;
									BgL_curz00_2095 = BgL_curz00_3634;
									goto BgL_zc3z04anonymousza31928ze3z87_2098;
								}
						}
					else
						{	/* Module/class.scm 467 */
							obj_t BgL_classz00_2101;

							{	/* Module/class.scm 467 */
								obj_t BgL_pairz00_2603;

								BgL_pairz00_2603 = CAR(((obj_t) BgL_curz00_2095));
								BgL_classz00_2101 = CAR(BgL_pairz00_2603);
							}
							{	/* Module/class.scm 467 */
								obj_t BgL_superz00_2102;

								if (BGl_isazf3zf3zz__objectz00(BgL_classz00_2101,
										BGl_tclassz00zzobject_classz00))
									{
										BgL_tclassz00_bglt BgL_auxz00_3641;

										{
											obj_t BgL_auxz00_3642;

											{	/* Module/class.scm 469 */
												BgL_objectz00_bglt BgL_tmpz00_3643;

												BgL_tmpz00_3643 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_classz00_2101));
												BgL_auxz00_3642 = BGL_OBJECT_WIDENING(BgL_tmpz00_3643);
											}
											BgL_auxz00_3641 = ((BgL_tclassz00_bglt) BgL_auxz00_3642);
										}
										BgL_superz00_2102 =
											(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3641))->
											BgL_itszd2superzd2);
									}
								else
									{
										BgL_jclassz00_bglt BgL_auxz00_3649;

										{
											obj_t BgL_auxz00_3650;

											{	/* Module/class.scm 470 */
												BgL_objectz00_bglt BgL_tmpz00_3651;

												BgL_tmpz00_3651 =
													((BgL_objectz00_bglt)
													((BgL_typez00_bglt) BgL_classz00_2101));
												BgL_auxz00_3650 = BGL_OBJECT_WIDENING(BgL_tmpz00_3651);
											}
											BgL_auxz00_3649 = ((BgL_jclassz00_bglt) BgL_auxz00_3650);
										}
										BgL_superz00_2102 =
											(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3649))->
											BgL_itszd2superzd2);
									}
								{	/* Module/class.scm 468 */

									if ((BgL_superz00_2102 == BgL_classz00_2101))
										{	/* Module/class.scm 474 */
											obj_t BgL_arg1932z00_2104;
											obj_t BgL_arg1933z00_2105;

											BgL_arg1932z00_2104 = CDR(((obj_t) BgL_curz00_2095));
											{	/* Module/class.scm 476 */
												obj_t BgL_arg1934z00_2106;

												{	/* Module/class.scm 476 */
													obj_t BgL_arg1935z00_2107;

													{	/* Module/class.scm 476 */
														obj_t BgL_pairz00_2611;

														BgL_pairz00_2611 = CAR(((obj_t) BgL_curz00_2095));
														BgL_arg1935z00_2107 = CDR(BgL_pairz00_2611);
													}
													BgL_arg1934z00_2106 =
														PROCEDURE_ENTRY(BgL_arg1935z00_2107)
														(BgL_arg1935z00_2107, BEOA);
												}
												BgL_arg1933z00_2105 =
													BGl_appendzd221011zd2zzmodule_classz00
													(BgL_arg1934z00_2106, BgL_accessz00_2097);
											}
											{
												obj_t BgL_accessz00_3669;
												obj_t BgL_curz00_3668;

												BgL_curz00_3668 = BgL_arg1932z00_2104;
												BgL_accessz00_3669 = BgL_arg1933z00_2105;
												BgL_accessz00_2097 = BgL_accessz00_3669;
												BgL_curz00_2095 = BgL_curz00_3668;
												goto BgL_zc3z04anonymousza31928ze3z87_2098;
											}
										}
									else
										{	/* Module/class.scm 477 */
											bool_t BgL_test2160z00_3670;

											if (BGl_isazf3zf3zz__objectz00(BgL_classz00_2101,
													BGl_tclassz00zzobject_classz00))
												{	/* Module/class.scm 477 */
													if (BGl_isazf3zf3zz__objectz00(BgL_superz00_2102,
															BGl_tclassz00zzobject_classz00))
														{	/* Module/class.scm 477 */
															BgL_test2160z00_3670 = ((bool_t) 0);
														}
													else
														{	/* Module/class.scm 477 */
															BgL_test2160z00_3670 = ((bool_t) 1);
														}
												}
											else
												{	/* Module/class.scm 477 */
													BgL_test2160z00_3670 = ((bool_t) 0);
												}
											if (BgL_test2160z00_3670)
												{	/* Module/class.scm 477 */
													if (BGl_isazf3zf3zz__objectz00(BgL_superz00_2102,
															BGl_typez00zztype_typez00))
														{	/* Module/class.scm 478 */
															{
																BgL_tclassz00_bglt BgL_auxz00_3677;

																{
																	obj_t BgL_auxz00_3678;

																	{	/* Module/class.scm 482 */
																		BgL_objectz00_bglt BgL_tmpz00_3679;

																		BgL_tmpz00_3679 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_classz00_2101));
																		BgL_auxz00_3678 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3679);
																	}
																	BgL_auxz00_3677 =
																		((BgL_tclassz00_bglt) BgL_auxz00_3678);
																}
																((((BgL_tclassz00_bglt)
																			COBJECT(BgL_auxz00_3677))->BgL_slotsz00) =
																	((obj_t) BNIL), BUNSPEC);
															}
															{	/* Module/class.scm 483 */
																obj_t BgL_arg1941z00_2113;

																BgL_arg1941z00_2113 =
																	CDR(((obj_t) BgL_curz00_2095));
																{
																	obj_t BgL_curz00_3687;

																	BgL_curz00_3687 = BgL_arg1941z00_2113;
																	BgL_curz00_2095 = BgL_curz00_3687;
																	goto BgL_zc3z04anonymousza31928ze3z87_2098;
																}
															}
														}
													else
														{	/* Module/class.scm 486 */
															obj_t BgL_arg1942z00_2114;
															obj_t BgL_arg1943z00_2115;

															BgL_arg1942z00_2114 =
																CDR(((obj_t) BgL_curz00_2095));
															{	/* Module/class.scm 488 */
																obj_t BgL_arg1944z00_2116;

																{	/* Module/class.scm 488 */
																	obj_t BgL_arg1945z00_2117;

																	{	/* Module/class.scm 488 */
																		obj_t BgL_pairz00_2620;

																		BgL_pairz00_2620 =
																			CAR(((obj_t) BgL_curz00_2095));
																		BgL_arg1945z00_2117 = CDR(BgL_pairz00_2620);
																	}
																	BgL_arg1944z00_2116 =
																		PROCEDURE_ENTRY(BgL_arg1945z00_2117)
																		(BgL_arg1945z00_2117, BEOA);
																}
																BgL_arg1943z00_2115 =
																	BGl_appendzd221011zd2zzmodule_classz00
																	(BgL_arg1944z00_2116, BgL_accessz00_2097);
															}
															{
																obj_t BgL_accessz00_3698;
																obj_t BgL_curz00_3697;

																BgL_curz00_3697 = BgL_arg1942z00_2114;
																BgL_accessz00_3698 = BgL_arg1943z00_2115;
																BgL_accessz00_2097 = BgL_accessz00_3698;
																BgL_curz00_2095 = BgL_curz00_3697;
																goto BgL_zc3z04anonymousza31928ze3z87_2098;
															}
														}
												}
											else
												{	/* Module/class.scm 489 */
													bool_t BgL_test2164z00_3699;

													if (BGl_isazf3zf3zz__objectz00(BgL_classz00_2101,
															BGl_jclassz00zzobject_classz00))
														{	/* Module/class.scm 489 */
															if (BGl_isazf3zf3zz__objectz00(BgL_superz00_2102,
																	BGl_jclassz00zzobject_classz00))
																{	/* Module/class.scm 489 */
																	BgL_test2164z00_3699 = ((bool_t) 0);
																}
															else
																{	/* Module/class.scm 489 */
																	BgL_test2164z00_3699 = ((bool_t) 1);
																}
														}
													else
														{	/* Module/class.scm 489 */
															BgL_test2164z00_3699 = ((bool_t) 0);
														}
													if (BgL_test2164z00_3699)
														{	/* Module/class.scm 489 */
															if (BGl_isazf3zf3zz__objectz00(BgL_superz00_2102,
																	BGl_typez00zztype_typez00))
																{	/* Module/class.scm 490 */
																	{
																		BgL_jclassz00_bglt BgL_auxz00_3706;

																		{
																			obj_t BgL_auxz00_3707;

																			{	/* Module/class.scm 494 */
																				BgL_objectz00_bglt BgL_tmpz00_3708;

																				BgL_tmpz00_3708 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_classz00_2101));
																				BgL_auxz00_3707 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_3708);
																			}
																			BgL_auxz00_3706 =
																				((BgL_jclassz00_bglt) BgL_auxz00_3707);
																		}
																		((((BgL_jclassz00_bglt)
																					COBJECT(BgL_auxz00_3706))->
																				BgL_slotsz00) =
																			((obj_t) BNIL), BUNSPEC);
																	}
																	{	/* Module/class.scm 495 */
																		obj_t BgL_arg1951z00_2123;

																		BgL_arg1951z00_2123 =
																			CDR(((obj_t) BgL_curz00_2095));
																		{
																			obj_t BgL_curz00_3716;

																			BgL_curz00_3716 = BgL_arg1951z00_2123;
																			BgL_curz00_2095 = BgL_curz00_3716;
																			goto
																				BgL_zc3z04anonymousza31928ze3z87_2098;
																		}
																	}
																}
															else
																{	/* Module/class.scm 498 */
																	obj_t BgL_arg1952z00_2124;
																	obj_t BgL_arg1953z00_2125;

																	BgL_arg1952z00_2124 =
																		CDR(((obj_t) BgL_curz00_2095));
																	{	/* Module/class.scm 500 */
																		obj_t BgL_arg1954z00_2126;

																		{	/* Module/class.scm 500 */
																			obj_t BgL_arg1955z00_2127;

																			{	/* Module/class.scm 500 */
																				obj_t BgL_pairz00_2629;

																				BgL_pairz00_2629 =
																					CAR(((obj_t) BgL_curz00_2095));
																				BgL_arg1955z00_2127 =
																					CDR(BgL_pairz00_2629);
																			}
																			BgL_arg1954z00_2126 =
																				PROCEDURE_ENTRY(BgL_arg1955z00_2127)
																				(BgL_arg1955z00_2127, BEOA);
																		}
																		BgL_arg1953z00_2125 =
																			BGl_appendzd221011zd2zzmodule_classz00
																			(BgL_arg1954z00_2126, BgL_accessz00_2097);
																	}
																	{
																		obj_t BgL_accessz00_3727;
																		obj_t BgL_curz00_3726;

																		BgL_curz00_3726 = BgL_arg1952z00_2124;
																		BgL_accessz00_3727 = BgL_arg1953z00_2125;
																		BgL_accessz00_2097 = BgL_accessz00_3727;
																		BgL_curz00_2095 = BgL_curz00_3726;
																		goto BgL_zc3z04anonymousza31928ze3z87_2098;
																	}
																}
														}
													else
														{	/* Module/class.scm 501 */
															bool_t BgL_test2168z00_3728;

															if (BGl_isazf3zf3zz__objectz00(BgL_classz00_2101,
																	BGl_tclassz00zzobject_classz00))
																{	/* Module/class.scm 501 */
																	obj_t BgL_arg1975z00_2149;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_3731;

																		{
																			obj_t BgL_auxz00_3732;

																			{	/* Module/class.scm 501 */
																				BgL_objectz00_bglt BgL_tmpz00_3733;

																				BgL_tmpz00_3733 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt)
																						BgL_superz00_2102));
																				BgL_auxz00_3732 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_3733);
																			}
																			BgL_auxz00_3731 =
																				((BgL_tclassz00_bglt) BgL_auxz00_3732);
																		}
																		BgL_arg1975z00_2149 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_3731))->
																			BgL_slotsz00);
																	}
																	BgL_test2168z00_3728 =
																		(BgL_arg1975z00_2149 == BUNSPEC);
																}
															else
																{	/* Module/class.scm 501 */
																	BgL_test2168z00_3728 = ((bool_t) 0);
																}
															if (BgL_test2168z00_3728)
																{	/* Module/class.scm 503 */
																	obj_t BgL_arg1960z00_2132;
																	obj_t BgL_arg1961z00_2133;

																	BgL_arg1960z00_2132 =
																		CDR(((obj_t) BgL_curz00_2095));
																	{	/* Module/class.scm 504 */
																		obj_t BgL_arg1962z00_2134;

																		BgL_arg1962z00_2134 =
																			CAR(((obj_t) BgL_curz00_2095));
																		BgL_arg1961z00_2133 =
																			MAKE_YOUNG_PAIR(BgL_arg1962z00_2134,
																			BgL_nextz00_2096);
																	}
																	{
																		obj_t BgL_nextz00_3746;
																		obj_t BgL_curz00_3745;

																		BgL_curz00_3745 = BgL_arg1960z00_2132;
																		BgL_nextz00_3746 = BgL_arg1961z00_2133;
																		BgL_nextz00_2096 = BgL_nextz00_3746;
																		BgL_curz00_2095 = BgL_curz00_3745;
																		goto BgL_zc3z04anonymousza31928ze3z87_2098;
																	}
																}
															else
																{	/* Module/class.scm 506 */
																	bool_t BgL_test2170z00_3747;

																	if (BGl_isazf3zf3zz__objectz00
																		(BgL_classz00_2101,
																			BGl_jclassz00zzobject_classz00))
																		{	/* Module/class.scm 506 */
																			obj_t BgL_arg1974z00_2147;

																			{
																				BgL_jclassz00_bglt BgL_auxz00_3750;

																				{
																					obj_t BgL_auxz00_3751;

																					{	/* Module/class.scm 506 */
																						BgL_objectz00_bglt BgL_tmpz00_3752;

																						BgL_tmpz00_3752 =
																							((BgL_objectz00_bglt)
																							((BgL_typez00_bglt)
																								BgL_superz00_2102));
																						BgL_auxz00_3751 =
																							BGL_OBJECT_WIDENING
																							(BgL_tmpz00_3752);
																					}
																					BgL_auxz00_3750 =
																						((BgL_jclassz00_bglt)
																						BgL_auxz00_3751);
																				}
																				BgL_arg1974z00_2147 =
																					(((BgL_jclassz00_bglt)
																						COBJECT(BgL_auxz00_3750))->
																					BgL_slotsz00);
																			}
																			BgL_test2170z00_3747 =
																				(BgL_arg1974z00_2147 == BUNSPEC);
																		}
																	else
																		{	/* Module/class.scm 506 */
																			BgL_test2170z00_3747 = ((bool_t) 0);
																		}
																	if (BgL_test2170z00_3747)
																		{	/* Module/class.scm 508 */
																			obj_t BgL_arg1966z00_2138;
																			obj_t BgL_arg1967z00_2139;

																			BgL_arg1966z00_2138 =
																				CDR(((obj_t) BgL_curz00_2095));
																			{	/* Module/class.scm 509 */
																				obj_t BgL_arg1968z00_2140;

																				BgL_arg1968z00_2140 =
																					CAR(((obj_t) BgL_curz00_2095));
																				BgL_arg1967z00_2139 =
																					MAKE_YOUNG_PAIR(BgL_arg1968z00_2140,
																					BgL_nextz00_2096);
																			}
																			{
																				obj_t BgL_nextz00_3765;
																				obj_t BgL_curz00_3764;

																				BgL_curz00_3764 = BgL_arg1966z00_2138;
																				BgL_nextz00_3765 = BgL_arg1967z00_2139;
																				BgL_nextz00_2096 = BgL_nextz00_3765;
																				BgL_curz00_2095 = BgL_curz00_3764;
																				goto
																					BgL_zc3z04anonymousza31928ze3z87_2098;
																			}
																		}
																	else
																		{	/* Module/class.scm 513 */
																			obj_t BgL_arg1969z00_2141;
																			obj_t BgL_arg1970z00_2142;

																			BgL_arg1969z00_2141 =
																				CDR(((obj_t) BgL_curz00_2095));
																			{	/* Module/class.scm 515 */
																				obj_t BgL_arg1971z00_2143;

																				{	/* Module/class.scm 515 */
																					obj_t BgL_arg1972z00_2144;

																					{	/* Module/class.scm 515 */
																						obj_t BgL_pairz00_2642;

																						BgL_pairz00_2642 =
																							CAR(((obj_t) BgL_curz00_2095));
																						BgL_arg1972z00_2144 =
																							CDR(BgL_pairz00_2642);
																					}
																					BgL_arg1971z00_2143 =
																						PROCEDURE_ENTRY(BgL_arg1972z00_2144)
																						(BgL_arg1972z00_2144, BEOA);
																				}
																				BgL_arg1970z00_2142 =
																					BGl_appendzd221011zd2zzmodule_classz00
																					(BgL_arg1971z00_2143,
																					BgL_accessz00_2097);
																			}
																			{
																				obj_t BgL_accessz00_3776;
																				obj_t BgL_curz00_3775;

																				BgL_curz00_3775 = BgL_arg1969z00_2141;
																				BgL_accessz00_3776 =
																					BgL_arg1970z00_2142;
																				BgL_accessz00_2097 = BgL_accessz00_3776;
																				BgL_curz00_2095 = BgL_curz00_3775;
																				goto
																					BgL_zc3z04anonymousza31928ze3z87_2098;
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



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_classz00()
	{
		{	/* Module/class.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_impusez00(((long) 478324196),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_objectz00(((long) 520121765),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzobject_coercionz00(((long) 208160767),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			BGl_modulezd2initializa7ationz75zzobject_classgenz00(((long) 502726801),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
			return
				BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2096z00zzmodule_classz00));
		}

	}

#ifdef __cplusplus
}
#endif
