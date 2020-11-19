/*===========================================================================*/
/*   (Object/classgen.scm)                                                   */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Object/classgen.scm) */
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


	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2nilzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	extern obj_t BGl_typezd2nilzd2valuez00zzobject_nilz00(obj_t, obj_t);
	static obj_t BGl_z62classgenzd2widenzd2exprz62zzobject_classgenz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2makezd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_classgenzd2walkzd2zzobject_classgenz00();
	extern obj_t BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00(obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_classgenz00zzobject_classgenz00(obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzobject_classgenz00();
	static obj_t BGl_z62classgenzd2slotzd2anonymousz62zzobject_classgenz00(obj_t,
		obj_t, obj_t);
	extern bool_t BGl_finalzd2classzf3z21zzobject_classz00(obj_t);
	static obj_t BGl_z62classgenzd2widenzd2anonymousz62zzobject_classgenz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2widenzd2exprz00zzobject_classgenz00(BgL_typez00_bglt, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_z62classgenzd2nilzd2anonymousz62zzobject_classgenz00(obj_t,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzobject_classgenz00(obj_t, obj_t);
	static obj_t BGl_z62classgenzd2allocatezd2exprz62zzobject_classgenz00(obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzobject_classgenz00();
	extern obj_t BGl_makezd2typedzd2formalz00zzast_identz00(obj_t);
	static obj_t BGl_classgenzd2allocatezd2zzobject_classgenz00(BgL_typez00_bglt);
	extern obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2allocatezd2anonymousz00zzobject_classgenz00
		(BgL_typez00_bglt);
	static obj_t BGl_classgenzd2nilzd2zzobject_classgenz00(obj_t);
	static obj_t BGl_z62classgenzd2makezd2anonymousz62zzobject_classgenz00(obj_t,
		obj_t);
	extern obj_t BGl_fieldzd2accesszd2zzast_objectz00(obj_t, obj_t, obj_t);
	static obj_t
		BGl_z62classgenzd2shrinkzd2anonymousz62zzobject_classgenz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzobject_classgenz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62classgenzd2walkzb0zzobject_classgenz00(obj_t);
	static obj_t BGl_czd2mallocze70z35zzobject_classgenz00(BgL_typez00_bglt,
		obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	extern obj_t BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00;
	extern obj_t BGl_getzd2classzd2listz00zzobject_classz00();
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzobject_classgenz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_stringzd2sanszd2z42z42zztype_toolsz00(obj_t);
	static obj_t BGl_classgenzd2makezd2zzobject_classgenz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzobject_classgenz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t
		BGl_z62classgenzd2predicatezd2anonymousz62zzobject_classgenz00(obj_t,
		obj_t);
	static obj_t BGl_classgenzd2accessorszd2zzobject_classgenz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t,
		obj_t);
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	BGL_IMPORT obj_t BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	static obj_t BGl_unsafeze70ze7zzobject_classgenz00(BgL_typez00_bglt, obj_t);
	static bool_t BGl_bigloozd2domesticzd2classzf3zf3zzobject_classgenz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_classgenzd2slotzd2zzobject_classgenz00(obj_t, obj_t);
	static obj_t BGl_initzd2wideningze70z35zzobject_classgenz00(BgL_typez00_bglt,
		obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2widenzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzobject_classgenz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_privatez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_nilz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	extern bool_t BGl_slotzd2virtualzf3z21zzobject_slotsz00(BgL_slotz00_bglt);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_makezd2privatezd2sexpz00zzast_privatez00(obj_t, obj_t,
		obj_t);
	extern obj_t
		BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzobject_classgenz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzobject_classgenz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzobject_classgenz00();
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2slotzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt,
		BgL_slotz00_bglt);
	static obj_t
		BGl_z62classgenzd2allocatezd2anonymousz62zzobject_classgenz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2shrinkzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt);
	BGL_EXPORTED_DECL obj_t
		BGl_classgenzd2predicatezd2anonymousz00zzobject_classgenz00
		(BgL_typez00_bglt);
	static obj_t BGl_z62zc3z04anonymousza32196ze3ze5zzobject_classgenz00(obj_t,
		obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t BGl_classgenzd2predicatezd2zzobject_classgenz00(obj_t);
	static obj_t __cnst[45];


	   
		 
		DEFINE_STRING(BGl_string2364z00zzobject_classgenz00,
		BgL_bgl_string2364za700za7za7o2390za7, "Class accessors generation", 26);
	      DEFINE_STRING(BGl_string2365z00zzobject_classgenz00,
		BgL_bgl_string2365za700za7za7o2391za7, "   . ", 5);
	      DEFINE_STRING(BGl_string2366z00zzobject_classgenz00,
		BgL_bgl_string2366za700za7za7o2392za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string2367z00zzobject_classgenz00,
		BgL_bgl_string2367za700za7za7o2393za7, ".sch", 4);
	      DEFINE_STRING(BGl_string2368z00zzobject_classgenz00,
		BgL_bgl_string2368za700za7za7o2394za7, "Class accessors", 15);
	      DEFINE_STRING(BGl_string2369z00zzobject_classgenz00,
		BgL_bgl_string2369za700za7za7o2395za7, "The directives", 14);
	      DEFINE_STRING(BGl_string2370z00zzobject_classgenz00,
		BgL_bgl_string2370za700za7za7o2396za7, "(directives", 11);
	      DEFINE_STRING(BGl_string2371z00zzobject_classgenz00,
		BgL_bgl_string2371za700za7za7o2397za7,
		"(cond-expand ((and bigloo-class-sans (not bigloo-class-generate))\n", 66);
	      DEFINE_STRING(BGl_string2372z00zzobject_classgenz00,
		BgL_bgl_string2372za700za7za7o2398za7, "  (", 3);
	      DEFINE_STRING(BGl_string2373z00zzobject_classgenz00,
		BgL_bgl_string2373za700za7za7o2399za7, "    ", 4);
	      DEFINE_STRING(BGl_string2374z00zzobject_classgenz00,
		BgL_bgl_string2374za700za7za7o2400za7, ")))", 3);
	      DEFINE_STRING(BGl_string2375z00zzobject_classgenz00,
		BgL_bgl_string2375za700za7za7o2401za7, ")\n\n", 3);
	      DEFINE_STRING(BGl_string2376z00zzobject_classgenz00,
		BgL_bgl_string2376za700za7za7o2402za7, "The definitions", 15);
	      DEFINE_STRING(BGl_string2377z00zzobject_classgenz00,
		BgL_bgl_string2377za700za7za7o2403za7, "(cond-expand (bigloo-class-sans",
		31);
	      DEFINE_STRING(BGl_string2378z00zzobject_classgenz00,
		BgL_bgl_string2378za700za7za7o2404za7, "))\n", 3);
	      DEFINE_STRING(BGl_string2379z00zzobject_classgenz00,
		BgL_bgl_string2379za700za7za7o2405za7,
		"Can't allocate instance of abstract classes", 43);
	      DEFINE_STRING(BGl_string2380z00zzobject_classgenz00,
		BgL_bgl_string2380za700za7za7o2406za7, "bmem_set_allocation_type( $1, 0 )",
		33);
	      DEFINE_STRING(BGl_string2381z00zzobject_classgenz00,
		BgL_bgl_string2381za700za7za7o2407za7, ") )))", 5);
	      DEFINE_STRING(BGl_string2382z00zzobject_classgenz00,
		BgL_bgl_string2382za700za7za7o2408za7, ")BOBJECT( GC_MALLOC( sizeof(", 28);
	      DEFINE_STRING(BGl_string2383z00zzobject_classgenz00,
		BgL_bgl_string2383za700za7za7o2409za7, "((", 2);
	      DEFINE_STRING(BGl_string2384z00zzobject_classgenz00,
		BgL_bgl_string2384za700za7za7o2410za7, "object_classgen", 15);
	      DEFINE_STRING(BGl_string2385z00zzobject_classgenz00,
		BgL_bgl_string2385za700za7za7o2411za7,
		"v -set! - shrink! o begin cast wide tmp unsafe classgen object-widening-set! free-pragma pragma::void quote %allocate- current-dynamic-env alloc dynamic-env env let object-class-num-set! class-num l error set! -nil define class-nil new make- instantiate lambda inline ::obj bool ? define-inline obj @ isa? __object obj::obj --to-stdout pass-started ",
		349);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2allocatezd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2al2412z00,
		BGl_z62classgenzd2allocatezd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2walkzd2envz00zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2wa2413z00,
		BGl_z62classgenzd2walkzb0zzobject_classgenz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2allocatezd2exprzd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2al2414z00,
		BGl_z62classgenzd2allocatezd2exprz62zzobject_classgenz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2shrinkzd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2sh2415z00,
		BGl_z62classgenzd2shrinkzd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2makezd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2ma2416z00,
		BGl_z62classgenzd2makezd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2widenzd2exprzd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2wi2417z00,
		BGl_z62classgenzd2widenzd2exprz62zzobject_classgenz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2predicatezd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2pr2418z00,
		BGl_z62classgenzd2predicatezd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC,
		1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2slotzd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2sl2419z00,
		BGl_z62classgenzd2slotzd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2nilzd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2ni2420z00,
		BGl_z62classgenzd2nilzd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_classgenzd2widenzd2anonymouszd2envzd2zzobject_classgenz00,
		BgL_bgl_za762classgenza7d2wi2421z00,
		BGl_z62classgenzd2widenzd2anonymousz62zzobject_classgenz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzobject_classgenz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzobject_classgenz00(long
		BgL_checksumz00_3176, char *BgL_fromz00_3177)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzobject_classgenz00))
				{
					BGl_requirezd2initializa7ationz75zzobject_classgenz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzobject_classgenz00();
					BGl_libraryzd2moduleszd2initz00zzobject_classgenz00();
					BGl_cnstzd2initzd2zzobject_classgenz00();
					BGl_importedzd2moduleszd2initz00zzobject_classgenz00();
					return BGl_methodzd2initzd2zzobject_classgenz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "object_classgen");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"object_classgen");
			BGl_modulezd2initializa7ationz75zz__r5_control_features_6_4z00(((long) 0),
				"object_classgen");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			{	/* Object/classgen.scm 15 */
				obj_t BgL_cportz00_3151;

				{	/* Object/classgen.scm 15 */
					obj_t BgL_stringz00_3159;

					BgL_stringz00_3159 = BGl_string2385z00zzobject_classgenz00;
					{	/* Object/classgen.scm 15 */
						obj_t BgL_startz00_3160;

						BgL_startz00_3160 = BINT(((long) 0));
						{	/* Object/classgen.scm 15 */
							obj_t BgL_endz00_3161;

							BgL_endz00_3161 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_3159)));
							{	/* Object/classgen.scm 15 */

								BgL_cportz00_3151 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_3159, BgL_startz00_3160, BgL_endz00_3161);
				}}}}
				{
					long BgL_iz00_3152;

					BgL_iz00_3152 = ((long) 44);
				BgL_loopz00_3153:
					if ((BgL_iz00_3152 == ((long) -1)))
						{	/* Object/classgen.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Object/classgen.scm 15 */
							{	/* Object/classgen.scm 15 */
								obj_t BgL_arg2388z00_3155;

								{	/* Object/classgen.scm 15 */

									{	/* Object/classgen.scm 15 */
										obj_t BgL_locationz00_3157;

										BgL_locationz00_3157 = BBOOL(((bool_t) 0));
										{	/* Object/classgen.scm 15 */

											BgL_arg2388z00_3155 =
												BGl_readz00zz__readerz00(BgL_cportz00_3151,
												BgL_locationz00_3157);
										}
									}
								}
								{	/* Object/classgen.scm 15 */
									int BgL_tmpz00_3205;

									BgL_tmpz00_3205 = (int) (BgL_iz00_3152);
									CNST_TABLE_SET(BgL_tmpz00_3205, BgL_arg2388z00_3155);
							}}
							{	/* Object/classgen.scm 15 */
								int BgL_auxz00_3158;

								BgL_auxz00_3158 = (int) ((BgL_iz00_3152 - ((long) 1)));
								{
									long BgL_iz00_3210;

									BgL_iz00_3210 = (long) (BgL_auxz00_3158);
									BgL_iz00_3152 = BgL_iz00_3210;
									goto BgL_loopz00_3153;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzobject_classgenz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1692;

				BgL_headz00_1692 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1693;
					obj_t BgL_tailz00_1694;

					BgL_prevz00_1693 = BgL_headz00_1692;
					BgL_tailz00_1694 = BgL_l1z00_1;
				BgL_loopz00_1695:
					if (PAIRP(BgL_tailz00_1694))
						{
							obj_t BgL_newzd2prevzd2_1697;

							BgL_newzd2prevzd2_1697 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1694), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1693, BgL_newzd2prevzd2_1697);
							{
								obj_t BgL_tailz00_3220;
								obj_t BgL_prevz00_3219;

								BgL_prevz00_3219 = BgL_newzd2prevzd2_1697;
								BgL_tailz00_3220 = CDR(BgL_tailz00_1694);
								BgL_tailz00_1694 = BgL_tailz00_3220;
								BgL_prevz00_1693 = BgL_prevz00_3219;
								goto BgL_loopz00_1695;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1692);
				}
			}
		}

	}



/* classgen-walk */
	BGL_EXPORTED_DEF obj_t BGl_classgenzd2walkzd2zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 47 */
			{	/* Object/classgen.scm 48 */
				obj_t BgL_list1364z00_1700;

				{	/* Object/classgen.scm 48 */
					obj_t BgL_arg1367z00_1701;

					{	/* Object/classgen.scm 48 */
						obj_t BgL_arg1370z00_1702;

						BgL_arg1370z00_1702 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1367z00_1701 =
							MAKE_YOUNG_PAIR(BGl_string2364z00zzobject_classgenz00,
							BgL_arg1370z00_1702);
					}
					BgL_list1364z00_1700 =
						MAKE_YOUNG_PAIR(BGl_string2365z00zzobject_classgenz00,
						BgL_arg1367z00_1701);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1364z00_1700);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string2364z00zzobject_classgenz00;
			{	/* Object/classgen.scm 48 */
				obj_t BgL_g1110z00_1703;

				BgL_g1110z00_1703 = BNIL;
				{
					obj_t BgL_hooksz00_1706;
					obj_t BgL_hnamesz00_1707;

					BgL_hooksz00_1706 = BgL_g1110z00_1703;
					BgL_hnamesz00_1707 = BNIL;
				BgL_zc3z04anonymousza31371ze3z87_1708:
					if (NULLP(BgL_hooksz00_1706))
						{	/* Object/classgen.scm 48 */
							CNST_TABLE_REF(((long) 0));
						}
					else
						{	/* Object/classgen.scm 48 */
							bool_t BgL_test2426z00_3233;

							{	/* Object/classgen.scm 48 */
								obj_t BgL_fun1384z00_1715;

								BgL_fun1384z00_1715 = CAR(((obj_t) BgL_hooksz00_1706));
								BgL_test2426z00_3233 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1384z00_1715)
									(BgL_fun1384z00_1715, BEOA));
							}
							if (BgL_test2426z00_3233)
								{	/* Object/classgen.scm 48 */
									obj_t BgL_arg1381z00_1712;
									obj_t BgL_arg1382z00_1713;

									BgL_arg1381z00_1712 = CDR(((obj_t) BgL_hooksz00_1706));
									BgL_arg1382z00_1713 = CDR(((obj_t) BgL_hnamesz00_1707));
									{
										obj_t BgL_hnamesz00_3245;
										obj_t BgL_hooksz00_3244;

										BgL_hooksz00_3244 = BgL_arg1381z00_1712;
										BgL_hnamesz00_3245 = BgL_arg1382z00_1713;
										BgL_hnamesz00_1707 = BgL_hnamesz00_3245;
										BgL_hooksz00_1706 = BgL_hooksz00_3244;
										goto BgL_zc3z04anonymousza31371ze3z87_1708;
									}
								}
							else
								{	/* Object/classgen.scm 48 */
									obj_t BgL_arg1383z00_1714;

									BgL_arg1383z00_1714 = CAR(((obj_t) BgL_hnamesz00_1707));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string2364z00zzobject_classgenz00,
										BGl_string2366z00zzobject_classgenz00, BgL_arg1383z00_1714);
								}
						}
				}
			}
			{	/* Object/classgen.scm 50 */
				obj_t BgL_onamez00_1718;

				if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
					{	/* Object/classgen.scm 51 */
						BgL_onamez00_1718 = BGl_za2destza2z00zzengine_paramz00;
					}
				else
					{	/* Object/classgen.scm 51 */
						if (
							(BGl_za2destza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 1))))
							{	/* Object/classgen.scm 53 */
								BgL_onamez00_1718 = BFALSE;
							}
						else
							{	/* Object/classgen.scm 55 */
								bool_t BgL_test2429z00_3254;

								if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
									{	/* Object/classgen.scm 55 */
										obj_t BgL_tmpz00_3257;

										BgL_tmpz00_3257 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_test2429z00_3254 = STRINGP(BgL_tmpz00_3257);
									}
								else
									{	/* Object/classgen.scm 55 */
										BgL_test2429z00_3254 = ((bool_t) 0);
									}
								if (BgL_test2429z00_3254)
									{	/* Object/classgen.scm 55 */
										BgL_onamez00_1718 =
											string_append(BGl_prefixz00zz__osz00(CAR
												(BGl_za2srczd2filesza2zd2zzengine_paramz00)),
											BGl_string2367z00zzobject_classgenz00);
									}
								else
									{	/* Object/classgen.scm 55 */
										BgL_onamez00_1718 = BFALSE;
									}
							}
					}
				{	/* Object/classgen.scm 50 */
					obj_t BgL_poz00_1719;

					if (STRINGP(BgL_onamez00_1718))
						{	/* Object/classgen.scm 60 */

							BgL_poz00_1719 =
								BGl_openzd2outputzd2filez00zz__r4_ports_6_10_1z00
								(BgL_onamez00_1718, BTRUE);
						}
					else
						{	/* Object/classgen.scm 61 */
							obj_t BgL_res2283z00_2771;

							{	/* Object/classgen.scm 61 */
								obj_t BgL_tmpz00_3266;

								BgL_tmpz00_3266 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res2283z00_2771 =
									BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_3266);
							}
							BgL_poz00_1719 = BgL_res2283z00_2771;
						}
					{	/* Object/classgen.scm 59 */

						BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00
							(BgL_poz00_1719, BGl_string2368z00zzobject_classgenz00);
						{	/* Object/classgen.scm 65 */
							obj_t BgL_protosz00_1720;
							obj_t BgL_defsz00_1721;

							BgL_protosz00_1720 = BNIL;
							BgL_defsz00_1721 = BNIL;
							{	/* Object/classgen.scm 67 */
								obj_t BgL_g1298z00_1722;

								BgL_g1298z00_1722 =
									BGl_getzd2classzd2listz00zzobject_classz00();
								{
									obj_t BgL_l1296z00_1724;

									BgL_l1296z00_1724 = BgL_g1298z00_1722;
								BgL_zc3z04anonymousza31386ze3z87_1725:
									if (PAIRP(BgL_l1296z00_1724))
										{	/* Object/classgen.scm 73 */
											{	/* Object/classgen.scm 68 */
												obj_t BgL_cz00_1727;

												BgL_cz00_1727 = CAR(BgL_l1296z00_1724);
												if (BGl_bigloozd2domesticzd2classzf3zf3zzobject_classgenz00(BgL_cz00_1727))
													{	/* Object/classgen.scm 69 */
														obj_t BgL_pz00_1729;

														BgL_pz00_1729 =
															BGl_classgenz00zzobject_classgenz00
															(BgL_cz00_1727);
														{	/* Object/classgen.scm 70 */
															obj_t BgL_dz00_1730;

															{	/* Object/classgen.scm 71 */
																int BgL_tmpz00_3277;

																BgL_tmpz00_3277 = (int) (((long) 1));
																BgL_dz00_1730 =
																	BGL_MVALUES_VAL(BgL_tmpz00_3277);
															}
															{	/* Object/classgen.scm 71 */
																obj_t BgL_arg1394z00_1731;

																BgL_arg1394z00_1731 =
																	MAKE_YOUNG_PAIR(BgL_cz00_1727, BgL_pz00_1729);
																BgL_protosz00_1720 =
																	MAKE_YOUNG_PAIR(BgL_arg1394z00_1731,
																	BgL_protosz00_1720);
															}
															{	/* Object/classgen.scm 72 */
																obj_t BgL_arg1396z00_1732;

																BgL_arg1396z00_1732 =
																	MAKE_YOUNG_PAIR(BgL_cz00_1727, BgL_dz00_1730);
																BgL_defsz00_1721 =
																	MAKE_YOUNG_PAIR(BgL_arg1396z00_1732,
																	BgL_defsz00_1721);
													}}}
												else
													{	/* Object/classgen.scm 68 */
														BFALSE;
													}
											}
											{
												obj_t BgL_l1296z00_3284;

												BgL_l1296z00_3284 = CDR(BgL_l1296z00_1724);
												BgL_l1296z00_1724 = BgL_l1296z00_3284;
												goto BgL_zc3z04anonymousza31386ze3z87_1725;
											}
										}
									else
										{	/* Object/classgen.scm 73 */
											((bool_t) 1);
										}
								}
							}
							if (NULLP(BgL_protosz00_1720))
								{	/* Object/classgen.scm 74 */
									return BFALSE;
								}
							else
								{	/* Object/classgen.scm 74 */
									{	/* Object/classgen.scm 75 */
										obj_t BgL_list1420z00_1736;

										BgL_list1420z00_1736 =
											MAKE_YOUNG_PAIR(BGl_string2369z00zzobject_classgenz00,
											BNIL);
										BGl_writezd2schemezd2commentz00zzwrite_schemez00
											(BgL_poz00_1719, BgL_list1420z00_1736);
									}
									{	/* Object/classgen.scm 76 */
										obj_t BgL_tmpz00_3290;

										BgL_tmpz00_3290 = ((obj_t) BgL_poz00_1719);
										bgl_display_string(BGl_string2370z00zzobject_classgenz00,
											BgL_tmpz00_3290);
									}
									{
										obj_t BgL_l1302z00_1738;

										BgL_l1302z00_1738 = BgL_protosz00_1720;
									BgL_zc3z04anonymousza31421ze3z87_1739:
										if (PAIRP(BgL_l1302z00_1738))
											{	/* Object/classgen.scm 77 */
												{	/* Object/classgen.scm 78 */
													obj_t BgL_pz00_1741;

													BgL_pz00_1741 = CAR(BgL_l1302z00_1738);
													{	/* Object/classgen.scm 78 */
														obj_t BgL_cz00_1742;
														obj_t BgL_protosz00_1743;

														BgL_cz00_1742 = CAR(((obj_t) BgL_pz00_1741));
														BgL_protosz00_1743 = CDR(((obj_t) BgL_pz00_1741));
														{	/* Object/classgen.scm 80 */
															obj_t BgL_tmpz00_3300;

															BgL_tmpz00_3300 = ((obj_t) BgL_poz00_1719);
															bgl_display_char(((unsigned char) 10),
																BgL_tmpz00_3300);
														}
														{	/* Object/classgen.scm 81 */
															obj_t BgL_tmpz00_3303;

															BgL_tmpz00_3303 = ((obj_t) BgL_poz00_1719);
															bgl_display_char(((unsigned char) 10),
																BgL_tmpz00_3303);
														}
														{	/* Object/classgen.scm 82 */
															obj_t BgL_arg1441z00_1744;

															BgL_arg1441z00_1744 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			((BgL_typez00_bglt) BgL_cz00_1742))))->
																BgL_idz00);
															{	/* Object/classgen.scm 82 */
																obj_t BgL_list1442z00_1745;

																BgL_list1442z00_1745 =
																	MAKE_YOUNG_PAIR(BgL_arg1441z00_1744, BNIL);
																BGl_writezd2schemezd2commentz00zzwrite_schemez00
																	(BgL_poz00_1719, BgL_list1442z00_1745);
														}}
														{	/* Object/classgen.scm 83 */
															obj_t BgL_tmpz00_3311;

															BgL_tmpz00_3311 = ((obj_t) BgL_poz00_1719);
															bgl_display_string
																(BGl_string2371z00zzobject_classgenz00,
																BgL_tmpz00_3311);
														}
														{	/* Object/classgen.scm 84 */
															obj_t BgL_tmpz00_3314;

															BgL_tmpz00_3314 = ((obj_t) BgL_poz00_1719);
															bgl_display_string
																(BGl_string2372z00zzobject_classgenz00,
																BgL_tmpz00_3314);
														}
														{	/* Object/classgen.scm 85 */
															obj_t BgL_arg1448z00_1746;

															BgL_arg1448z00_1746 =
																CAR(((obj_t) BgL_protosz00_1743));
															bgl_display_obj(BgL_arg1448z00_1746,
																BgL_poz00_1719);
														}
														{	/* Object/classgen.scm 86 */
															obj_t BgL_g1301z00_1747;

															BgL_g1301z00_1747 =
																CDR(((obj_t) BgL_protosz00_1743));
															{
																obj_t BgL_l1299z00_1749;

																BgL_l1299z00_1749 = BgL_g1301z00_1747;
															BgL_zc3z04anonymousza31449ze3z87_1750:
																if (PAIRP(BgL_l1299z00_1749))
																	{	/* Object/classgen.scm 90 */
																		{	/* Object/classgen.scm 87 */
																			obj_t BgL_pz00_1752;

																			BgL_pz00_1752 = CAR(BgL_l1299z00_1749);
																			{	/* Object/classgen.scm 87 */
																				obj_t BgL_tmpz00_3325;

																				BgL_tmpz00_3325 =
																					((obj_t) BgL_poz00_1719);
																				bgl_display_char(((unsigned char) 10),
																					BgL_tmpz00_3325);
																			}
																			{	/* Object/classgen.scm 88 */
																				obj_t BgL_tmpz00_3328;

																				BgL_tmpz00_3328 =
																					((obj_t) BgL_poz00_1719);
																				bgl_display_string
																					(BGl_string2373z00zzobject_classgenz00,
																					BgL_tmpz00_3328);
																			}
																			bgl_display_obj(BgL_pz00_1752,
																				BgL_poz00_1719);
																		}
																		{
																			obj_t BgL_l1299z00_3332;

																			BgL_l1299z00_3332 =
																				CDR(BgL_l1299z00_1749);
																			BgL_l1299z00_1749 = BgL_l1299z00_3332;
																			goto
																				BgL_zc3z04anonymousza31449ze3z87_1750;
																		}
																	}
																else
																	{	/* Object/classgen.scm 90 */
																		((bool_t) 1);
																	}
															}
														}
														{	/* Object/classgen.scm 91 */
															obj_t BgL_tmpz00_3334;

															BgL_tmpz00_3334 = ((obj_t) BgL_poz00_1719);
															bgl_display_string
																(BGl_string2374z00zzobject_classgenz00,
																BgL_tmpz00_3334);
														}
													}
												}
												{
													obj_t BgL_l1302z00_3337;

													BgL_l1302z00_3337 = CDR(BgL_l1302z00_1738);
													BgL_l1302z00_1738 = BgL_l1302z00_3337;
													goto BgL_zc3z04anonymousza31421ze3z87_1739;
												}
											}
										else
											{	/* Object/classgen.scm 77 */
												((bool_t) 1);
											}
									}
									{	/* Object/classgen.scm 93 */
										obj_t BgL_tmpz00_3339;

										BgL_tmpz00_3339 = ((obj_t) BgL_poz00_1719);
										bgl_display_string(BGl_string2375z00zzobject_classgenz00,
											BgL_tmpz00_3339);
									}
									{	/* Object/classgen.scm 95 */
										obj_t BgL_list1463z00_1757;

										BgL_list1463z00_1757 =
											MAKE_YOUNG_PAIR(BGl_string2376z00zzobject_classgenz00,
											BNIL);
										BGl_writezd2schemezd2commentz00zzwrite_schemez00
											(BgL_poz00_1719, BgL_list1463z00_1757);
									}
									{	/* Object/classgen.scm 96 */
										obj_t BgL_tmpz00_3344;

										BgL_tmpz00_3344 = ((obj_t) BgL_poz00_1719);
										bgl_display_string(BGl_string2377z00zzobject_classgenz00,
											BgL_tmpz00_3344);
									}
									{
										obj_t BgL_l1306z00_1759;

										BgL_l1306z00_1759 = BgL_defsz00_1721;
									BgL_zc3z04anonymousza31464ze3z87_1760:
										if (PAIRP(BgL_l1306z00_1759))
											{	/* Object/classgen.scm 97 */
												{	/* Object/classgen.scm 98 */
													obj_t BgL_pz00_1762;

													BgL_pz00_1762 = CAR(BgL_l1306z00_1759);
													{	/* Object/classgen.scm 98 */
														obj_t BgL_cz00_1763;
														obj_t BgL_defsz00_1764;

														BgL_cz00_1763 = CAR(((obj_t) BgL_pz00_1762));
														BgL_defsz00_1764 = CDR(((obj_t) BgL_pz00_1762));
														{	/* Object/classgen.scm 100 */
															obj_t BgL_tmpz00_3354;

															BgL_tmpz00_3354 = ((obj_t) BgL_poz00_1719);
															bgl_display_char(((unsigned char) 10),
																BgL_tmpz00_3354);
														}
														{	/* Object/classgen.scm 101 */
															obj_t BgL_arg1474z00_1765;

															BgL_arg1474z00_1765 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			((BgL_typez00_bglt) BgL_cz00_1763))))->
																BgL_idz00);
															{	/* Object/classgen.scm 101 */
																obj_t BgL_list1475z00_1766;

																BgL_list1475z00_1766 =
																	MAKE_YOUNG_PAIR(BgL_arg1474z00_1765, BNIL);
																BGl_writezd2schemezd2commentz00zzwrite_schemez00
																	(BgL_poz00_1719, BgL_list1475z00_1766);
														}}
														{
															obj_t BgL_l1304z00_1768;

															BgL_l1304z00_1768 = BgL_defsz00_1764;
														BgL_zc3z04anonymousza31476ze3z87_1769:
															if (PAIRP(BgL_l1304z00_1768))
																{	/* Object/classgen.scm 102 */
																	{	/* Object/classgen.scm 103 */
																		obj_t BgL_pz00_1771;

																		BgL_pz00_1771 = CAR(BgL_l1304z00_1768);
																		{	/* Object/classgen.scm 103 */
																			obj_t BgL_list1478z00_1772;

																			BgL_list1478z00_1772 =
																				MAKE_YOUNG_PAIR(BgL_poz00_1719, BNIL);
																			BGl_writez00zz__r4_output_6_10_3z00
																				(BgL_pz00_1771, BgL_list1478z00_1772);
																		}
																		{	/* Object/classgen.scm 104 */
																			obj_t BgL_tmpz00_3367;

																			BgL_tmpz00_3367 =
																				((obj_t) BgL_poz00_1719);
																			bgl_display_char(((unsigned char) 10),
																				BgL_tmpz00_3367);
																	}}
																	{
																		obj_t BgL_l1304z00_3370;

																		BgL_l1304z00_3370 = CDR(BgL_l1304z00_1768);
																		BgL_l1304z00_1768 = BgL_l1304z00_3370;
																		goto BgL_zc3z04anonymousza31476ze3z87_1769;
																	}
																}
															else
																{	/* Object/classgen.scm 102 */
																	((bool_t) 1);
																}
														}
													}
												}
												{
													obj_t BgL_l1306z00_3372;

													BgL_l1306z00_3372 = CDR(BgL_l1306z00_1759);
													BgL_l1306z00_1759 = BgL_l1306z00_3372;
													goto BgL_zc3z04anonymousza31464ze3z87_1760;
												}
											}
										else
											{	/* Object/classgen.scm 97 */
												((bool_t) 1);
											}
									}
									{	/* Object/classgen.scm 107 */
										obj_t BgL_tmpz00_3374;

										BgL_tmpz00_3374 = ((obj_t) BgL_poz00_1719);
										bgl_display_string(BGl_string2378z00zzobject_classgenz00,
											BgL_tmpz00_3374);
									}
									return bgl_close_output_port(((obj_t) BgL_poz00_1719));
								}
						}
					}
				}
			}
		}

	}



/* &classgen-walk */
	obj_t BGl_z62classgenzd2walkzb0zzobject_classgenz00(obj_t BgL_envz00_3124)
	{
		{	/* Object/classgen.scm 47 */
			return BGl_classgenzd2walkzd2zzobject_classgenz00();
		}

	}



/* bigloo-domestic-class? */
	bool_t BGl_bigloozd2domesticzd2classzf3zf3zzobject_classgenz00(obj_t
		BgL_cz00_3)
	{
		{	/* Object/classgen.scm 113 */
			if (BGl_isazf3zf3zz__objectz00(BgL_cz00_3,
					BGl_tclassz00zzobject_classz00))
				{	/* Object/classgen.scm 114 */
					obj_t BgL_arg1537z00_1790;

					{	/* Object/classgen.scm 114 */
						BgL_globalz00_bglt BgL_arg1540z00_1791;

						{
							BgL_tclassz00_bglt BgL_auxz00_3382;

							{
								obj_t BgL_auxz00_3383;

								{	/* Object/classgen.scm 114 */
									BgL_objectz00_bglt BgL_tmpz00_3384;

									BgL_tmpz00_3384 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_3));
									BgL_auxz00_3383 = BGL_OBJECT_WIDENING(BgL_tmpz00_3384);
								}
								BgL_auxz00_3382 = ((BgL_tclassz00_bglt) BgL_auxz00_3383);
							}
							BgL_arg1540z00_1791 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3382))->
								BgL_holderz00);
						}
						BgL_arg1537z00_1790 =
							(((BgL_globalz00_bglt) COBJECT(BgL_arg1540z00_1791))->
							BgL_modulez00);
					}
					return (BgL_arg1537z00_1790 == BGl_za2moduleza2z00zzmodule_modulez00);
				}
			else
				{	/* Object/classgen.scm 114 */
					return ((bool_t) 0);
				}
		}

	}



/* classgen */
	obj_t BGl_classgenz00zzobject_classgenz00(obj_t BgL_cz00_4)
	{
		{	/* Object/classgen.scm 119 */
			{	/* Object/classgen.scm 120 */
				obj_t BgL_predzd2pzd2_1792;

				BgL_predzd2pzd2_1792 =
					BGl_classgenzd2predicatezd2zzobject_classgenz00(BgL_cz00_4);
				{	/* Object/classgen.scm 121 */
					obj_t BgL_predzd2dzd2_1793;

					{	/* Object/classgen.scm 122 */
						int BgL_tmpz00_3393;

						BgL_tmpz00_3393 = (int) (((long) 1));
						BgL_predzd2dzd2_1793 = BGL_MVALUES_VAL(BgL_tmpz00_3393);
					}
					{	/* Object/classgen.scm 122 */
						obj_t BgL_nilzd2pzd2_1794;

						BgL_nilzd2pzd2_1794 =
							BGl_classgenzd2nilzd2zzobject_classgenz00(BgL_cz00_4);
						{	/* Object/classgen.scm 123 */
							obj_t BgL_nilzd2dzd2_1795;

							{	/* Object/classgen.scm 124 */
								int BgL_tmpz00_3397;

								BgL_tmpz00_3397 = (int) (((long) 1));
								BgL_nilzd2dzd2_1795 = BGL_MVALUES_VAL(BgL_tmpz00_3397);
							}
							{	/* Object/classgen.scm 124 */
								obj_t BgL_accesszd2pzd2_1796;

								BgL_accesszd2pzd2_1796 =
									BGl_classgenzd2accessorszd2zzobject_classgenz00(BgL_cz00_4);
								{	/* Object/classgen.scm 125 */
									obj_t BgL_accesszd2dzd2_1797;

									{	/* Object/classgen.scm 126 */
										int BgL_tmpz00_3401;

										BgL_tmpz00_3401 = (int) (((long) 1));
										BgL_accesszd2dzd2_1797 = BGL_MVALUES_VAL(BgL_tmpz00_3401);
									}
									{	/* Object/classgen.scm 126 */
										obj_t BgL_pz00_1798;
										obj_t BgL_dz00_1799;

										{	/* Object/classgen.scm 126 */
											obj_t BgL_arg1564z00_1810;

											BgL_arg1564z00_1810 =
												MAKE_YOUNG_PAIR(BgL_nilzd2pzd2_1794,
												BgL_accesszd2pzd2_1796);
											BgL_pz00_1798 =
												MAKE_YOUNG_PAIR(BgL_predzd2pzd2_1792,
												BgL_arg1564z00_1810);
										}
										{	/* Object/classgen.scm 127 */
											obj_t BgL_arg1565z00_1811;

											BgL_arg1565z00_1811 =
												MAKE_YOUNG_PAIR(BgL_nilzd2dzd2_1795,
												BgL_accesszd2dzd2_1797);
											BgL_dz00_1799 =
												MAKE_YOUNG_PAIR(BgL_predzd2dzd2_1793,
												BgL_arg1565z00_1811);
										}
										{	/* Object/classgen.scm 128 */
											bool_t BgL_test2440z00_3408;

											{
												BgL_tclassz00_bglt BgL_auxz00_3409;

												{
													obj_t BgL_auxz00_3410;

													{	/* Object/classgen.scm 128 */
														BgL_objectz00_bglt BgL_tmpz00_3411;

														BgL_tmpz00_3411 =
															((BgL_objectz00_bglt)
															((BgL_typez00_bglt) BgL_cz00_4));
														BgL_auxz00_3410 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_3411);
													}
													BgL_auxz00_3409 =
														((BgL_tclassz00_bglt) BgL_auxz00_3410);
												}
												BgL_test2440z00_3408 =
													(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3409))->
													BgL_abstractzf3zf3);
											}
											if (BgL_test2440z00_3408)
												{	/* Object/classgen.scm 129 */
													obj_t BgL_val0_1308z00_1801;

													{	/* Object/classgen.scm 129 */
														obj_t BgL_arg1552z00_1803;

														{	/* Object/classgen.scm 139 */
															BgL_globalz00_bglt BgL_arg1573z00_2825;

															{
																BgL_tclassz00_bglt BgL_auxz00_3417;

																{
																	obj_t BgL_auxz00_3418;

																	{	/* Object/classgen.scm 139 */
																		BgL_objectz00_bglt BgL_tmpz00_3419;

																		BgL_tmpz00_3419 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_cz00_4));
																		BgL_auxz00_3418 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_3419);
																	}
																	BgL_auxz00_3417 =
																		((BgL_tclassz00_bglt) BgL_auxz00_3418);
																}
																BgL_arg1573z00_2825 =
																	(((BgL_tclassz00_bglt)
																		COBJECT(BgL_auxz00_3417))->BgL_holderz00);
															}
															BgL_arg1552z00_1803 =
																(((BgL_globalz00_bglt)
																	COBJECT(BgL_arg1573z00_2825))->BgL_importz00);
														}
														BgL_val0_1308z00_1801 =
															MAKE_YOUNG_PAIR(BgL_arg1552z00_1803,
															BgL_pz00_1798);
													}
													{	/* Object/classgen.scm 129 */
														int BgL_res2291z00_2829;

														{	/* Object/classgen.scm 129 */
															int BgL_tmpz00_3427;

															BgL_tmpz00_3427 = (int) (((long) 2));
															BgL_res2291z00_2829 =
																BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3427);
														} BgL_res2291z00_2829;
													}
													{	/* Object/classgen.scm 129 */
														int BgL_tmpz00_3430;

														BgL_tmpz00_3430 = (int) (((long) 1));
														BGL_MVALUES_VAL_SET(BgL_tmpz00_3430, BgL_dz00_1799);
													}
													return BgL_val0_1308z00_1801;
												}
											else
												{	/* Object/classgen.scm 130 */
													obj_t BgL_makezd2pzd2_1804;

													BgL_makezd2pzd2_1804 =
														BGl_classgenzd2makezd2zzobject_classgenz00
														(BgL_cz00_4);
													{	/* Object/classgen.scm 131 */
														obj_t BgL_makezd2dzd2_1805;

														{	/* Object/classgen.scm 132 */
															int BgL_tmpz00_3434;

															BgL_tmpz00_3434 = (int) (((long) 1));
															BgL_makezd2dzd2_1805 =
																BGL_MVALUES_VAL(BgL_tmpz00_3434);
														}
														{	/* Object/classgen.scm 132 */
															obj_t BgL_val0_1310z00_1806;
															obj_t BgL_val1_1311z00_1807;

															{	/* Object/classgen.scm 132 */
																obj_t BgL_arg1558z00_1808;
																obj_t BgL_arg1561z00_1809;

																{	/* Object/classgen.scm 139 */
																	BgL_globalz00_bglt BgL_arg1573z00_2830;

																	{
																		BgL_tclassz00_bglt BgL_auxz00_3437;

																		{
																			obj_t BgL_auxz00_3438;

																			{	/* Object/classgen.scm 139 */
																				BgL_objectz00_bglt BgL_tmpz00_3439;

																				BgL_tmpz00_3439 =
																					((BgL_objectz00_bglt)
																					((BgL_typez00_bglt) BgL_cz00_4));
																				BgL_auxz00_3438 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_3439);
																			}
																			BgL_auxz00_3437 =
																				((BgL_tclassz00_bglt) BgL_auxz00_3438);
																		}
																		BgL_arg1573z00_2830 =
																			(((BgL_tclassz00_bglt)
																				COBJECT(BgL_auxz00_3437))->
																			BgL_holderz00);
																	}
																	BgL_arg1558z00_1808 =
																		(((BgL_globalz00_bglt)
																			COBJECT(BgL_arg1573z00_2830))->
																		BgL_importz00);
																}
																BgL_arg1561z00_1809 =
																	MAKE_YOUNG_PAIR(BgL_makezd2pzd2_1804,
																	BgL_pz00_1798);
																BgL_val0_1310z00_1806 =
																	MAKE_YOUNG_PAIR(BgL_arg1558z00_1808,
																	BgL_arg1561z00_1809);
															}
															BgL_val1_1311z00_1807 =
																MAKE_YOUNG_PAIR(BgL_makezd2dzd2_1805,
																BgL_dz00_1799);
															{	/* Object/classgen.scm 132 */
																int BgL_res2292z00_2834;

																{	/* Object/classgen.scm 132 */
																	int BgL_tmpz00_3449;

																	BgL_tmpz00_3449 = (int) (((long) 2));
																	BgL_res2292z00_2834 =
																		BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3449);
																} BgL_res2292z00_2834;
															}
															{	/* Object/classgen.scm 132 */
																int BgL_tmpz00_3452;

																BgL_tmpz00_3452 = (int) (((long) 1));
																BGL_MVALUES_VAL_SET(BgL_tmpz00_3452,
																	BgL_val1_1311z00_1807);
															}
															return BgL_val0_1310z00_1806;
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



/* classgen-predicate */
	obj_t BGl_classgenzd2predicatezd2zzobject_classgenz00(obj_t BgL_cz00_6)
	{
		{	/* Object/classgen.scm 144 */
			{
				obj_t BgL_idz00_1825;
				BgL_globalz00_bglt BgL_gz00_1826;

				{	/* Object/classgen.scm 150 */
					BgL_globalz00_bglt BgL_holderz00_1814;

					{
						BgL_tclassz00_bglt BgL_auxz00_3455;

						{
							obj_t BgL_auxz00_3456;

							{	/* Object/classgen.scm 150 */
								BgL_objectz00_bglt BgL_tmpz00_3457;

								BgL_tmpz00_3457 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_6));
								BgL_auxz00_3456 = BGL_OBJECT_WIDENING(BgL_tmpz00_3457);
							}
							BgL_auxz00_3455 = ((BgL_tclassz00_bglt) BgL_auxz00_3456);
						}
						BgL_holderz00_1814 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3455))->BgL_holderz00);
					}
					{	/* Object/classgen.scm 150 */
						obj_t BgL_idz00_1815;

						{	/* Object/classgen.scm 151 */
							obj_t BgL_arg1582z00_1821;

							{	/* Object/classgen.scm 151 */
								obj_t BgL_arg1584z00_1822;
								obj_t BgL_arg1588z00_1823;

								{	/* Object/classgen.scm 151 */
									obj_t BgL_arg1589z00_1824;

									BgL_arg1589z00_1824 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt)
													((BgL_typez00_bglt) BgL_cz00_6))))->BgL_idz00);
									{	/* Object/classgen.scm 151 */
										obj_t BgL_res2293z00_2846;

										{	/* Object/classgen.scm 151 */
											obj_t BgL_arg1466z00_2845;

											BgL_arg1466z00_2845 =
												SYMBOL_TO_STRING(BgL_arg1589z00_1824);
											BgL_res2293z00_2846 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_2845);
										}
										BgL_arg1584z00_1822 = BgL_res2293z00_2846;
									}
								}
								{	/* Object/classgen.scm 151 */
									obj_t BgL_res2294z00_2849;

									{	/* Object/classgen.scm 151 */
										obj_t BgL_symbolz00_2847;

										BgL_symbolz00_2847 = CNST_TABLE_REF(((long) 8));
										{	/* Object/classgen.scm 151 */
											obj_t BgL_arg1466z00_2848;

											BgL_arg1466z00_2848 =
												SYMBOL_TO_STRING(BgL_symbolz00_2847);
											BgL_res2294z00_2849 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_2848);
									}}
									BgL_arg1588z00_1823 = BgL_res2294z00_2849;
								}
								BgL_arg1582z00_1821 =
									string_append(BgL_arg1584z00_1822, BgL_arg1588z00_1823);
							}
							BgL_idz00_1815 = bstring_to_symbol(BgL_arg1582z00_1821);
						}
						{	/* Object/classgen.scm 151 */
							obj_t BgL_tidz00_1816;

							BgL_tidz00_1816 =
								BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_1815,
								CNST_TABLE_REF(((long) 9)));
							{	/* Object/classgen.scm 152 */

								{	/* Object/classgen.scm 153 */
									obj_t BgL_val0_1312z00_1817;
									obj_t BgL_val1_1313z00_1818;

									{	/* Object/classgen.scm 154 */
										obj_t BgL_arg1575z00_1819;

										{	/* Object/classgen.scm 154 */
											obj_t BgL_arg1578z00_1820;

											BgL_arg1578z00_1820 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)), BNIL);
											BgL_arg1575z00_1819 =
												MAKE_YOUNG_PAIR(BgL_tidz00_1816, BgL_arg1578z00_1820);
										}
										BgL_val0_1312z00_1817 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
											BgL_arg1575z00_1819);
									}
									BgL_idz00_1825 = BgL_tidz00_1816;
									BgL_gz00_1826 = BgL_holderz00_1814;
									{	/* Object/classgen.scm 147 */
										obj_t BgL_arg1592z00_1828;

										{	/* Object/classgen.scm 147 */
											obj_t BgL_arg1593z00_1829;
											obj_t BgL_arg1597z00_1830;

											{	/* Object/classgen.scm 147 */
												obj_t BgL_arg1599z00_1831;

												BgL_arg1599z00_1831 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)), BNIL);
												BgL_arg1593z00_1829 =
													MAKE_YOUNG_PAIR(BgL_idz00_1825, BgL_arg1599z00_1831);
											}
											{	/* Object/classgen.scm 148 */
												obj_t BgL_arg1604z00_1832;

												{	/* Object/classgen.scm 148 */
													obj_t BgL_arg1605z00_1833;
													obj_t BgL_arg1606z00_1834;

													{	/* Object/classgen.scm 148 */
														obj_t BgL_arg1611z00_1835;

														{	/* Object/classgen.scm 148 */
															obj_t BgL_arg1612z00_1836;

															BgL_arg1612z00_1836 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																BNIL);
															BgL_arg1611z00_1835 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																BgL_arg1612z00_1836);
														}
														BgL_arg1605z00_1833 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
															BgL_arg1611z00_1835);
													}
													{	/* Object/classgen.scm 148 */
														obj_t BgL_arg1613z00_1837;

														{	/* Object/classgen.scm 148 */
															obj_t BgL_arg1624z00_1838;

															{	/* Object/classgen.scm 148 */
																obj_t BgL_arg1626z00_1839;

																{	/* Object/classgen.scm 148 */
																	obj_t BgL_arg1627z00_1840;
																	obj_t BgL_arg1631z00_1841;

																	BgL_arg1627z00_1840 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					BgL_gz00_1826)))->BgL_idz00);
																	BgL_arg1631z00_1841 =
																		MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																				COBJECT(BgL_gz00_1826))->BgL_modulez00),
																		BNIL);
																	BgL_arg1626z00_1839 =
																		MAKE_YOUNG_PAIR(BgL_arg1627z00_1840,
																		BgL_arg1631z00_1841);
																}
																BgL_arg1624z00_1838 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																	BgL_arg1626z00_1839);
															}
															BgL_arg1613z00_1837 =
																MAKE_YOUNG_PAIR(BgL_arg1624z00_1838, BNIL);
														}
														BgL_arg1606z00_1834 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
															BgL_arg1613z00_1837);
													}
													BgL_arg1604z00_1832 =
														MAKE_YOUNG_PAIR(BgL_arg1605z00_1833,
														BgL_arg1606z00_1834);
												}
												BgL_arg1597z00_1830 =
													MAKE_YOUNG_PAIR(BgL_arg1604z00_1832, BNIL);
											}
											BgL_arg1592z00_1828 =
												MAKE_YOUNG_PAIR(BgL_arg1593z00_1829,
												BgL_arg1597z00_1830);
										}
										BgL_val1_1313z00_1818 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
											BgL_arg1592z00_1828);
									}
									{	/* Object/classgen.scm 153 */
										int BgL_res2296z00_2852;

										{	/* Object/classgen.scm 153 */
											int BgL_tmpz00_3504;

											BgL_tmpz00_3504 = (int) (((long) 2));
											BgL_res2296z00_2852 =
												BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3504);
										} BgL_res2296z00_2852;
									}
									{	/* Object/classgen.scm 153 */
										int BgL_tmpz00_3507;

										BgL_tmpz00_3507 = (int) (((long) 1));
										BGL_MVALUES_VAL_SET(BgL_tmpz00_3507, BgL_val1_1313z00_1818);
									}
									return BgL_val0_1312z00_1817;
								}
							}
						}
					}
				}
			}
		}

	}



/* classgen-predicate-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2predicatezd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_7)
	{
		{	/* Object/classgen.scm 160 */
			{	/* Object/classgen.scm 161 */
				obj_t BgL_protoz00_1844;

				BgL_protoz00_1844 =
					BGl_classgenzd2predicatezd2zzobject_classgenz00(((obj_t) BgL_cz00_7));
				{	/* Object/classgen.scm 162 */
					obj_t BgL_defz00_1845;

					{	/* Object/classgen.scm 163 */
						int BgL_tmpz00_3512;

						BgL_tmpz00_3512 = (int) (((long) 1));
						BgL_defz00_1845 = BGL_MVALUES_VAL(BgL_tmpz00_3512);
					}
					if (PAIRP(BgL_defz00_1845))
						{	/* Object/classgen.scm 163 */
							obj_t BgL_cdrzd2144zd2_1852;

							BgL_cdrzd2144zd2_1852 = CDR(BgL_defz00_1845);
							if (PAIRP(BgL_cdrzd2144zd2_1852))
								{	/* Object/classgen.scm 163 */
									obj_t BgL_carzd2148zd2_1854;
									obj_t BgL_cdrzd2149zd2_1855;

									BgL_carzd2148zd2_1854 = CAR(BgL_cdrzd2144zd2_1852);
									BgL_cdrzd2149zd2_1855 = CDR(BgL_cdrzd2144zd2_1852);
									if (PAIRP(BgL_carzd2148zd2_1854))
										{	/* Object/classgen.scm 163 */
											if (PAIRP(BgL_cdrzd2149zd2_1855))
												{	/* Object/classgen.scm 163 */
													if (NULLP(CDR(BgL_cdrzd2149zd2_1855)))
														{	/* Object/classgen.scm 163 */
															obj_t BgL_arg1652z00_1861;
															obj_t BgL_arg1662z00_1862;

															BgL_arg1652z00_1861 = CDR(BgL_carzd2148zd2_1854);
															BgL_arg1662z00_1862 = CAR(BgL_cdrzd2149zd2_1855);
															{	/* Object/classgen.scm 165 */
																obj_t BgL_arg1664z00_2868;
																obj_t BgL_arg1667z00_2869;

																BgL_arg1664z00_2868 =
																	BGl_makezd2typedzd2identz00zzast_identz00
																	(CNST_TABLE_REF(((long) 12)),
																	CNST_TABLE_REF(((long) 9)));
																{	/* Object/classgen.scm 165 */
																	obj_t BgL_arg1669z00_2870;

																	BgL_arg1669z00_2870 =
																		MAKE_YOUNG_PAIR(BgL_arg1662z00_1862, BNIL);
																	BgL_arg1667z00_2869 =
																		MAKE_YOUNG_PAIR(BgL_arg1652z00_1861,
																		BgL_arg1669z00_2870);
																}
																return
																	MAKE_YOUNG_PAIR(BgL_arg1664z00_2868,
																	BgL_arg1667z00_2869);
															}
														}
													else
														{	/* Object/classgen.scm 163 */
															return BFALSE;
														}
												}
											else
												{	/* Object/classgen.scm 163 */
													return BFALSE;
												}
										}
									else
										{	/* Object/classgen.scm 163 */
											return BFALSE;
										}
								}
							else
								{	/* Object/classgen.scm 163 */
									return BFALSE;
								}
						}
					else
						{	/* Object/classgen.scm 163 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &classgen-predicate-anonymous */
	obj_t BGl_z62classgenzd2predicatezd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3125, obj_t BgL_cz00_3126)
	{
		{	/* Object/classgen.scm 160 */
			return
				BGl_classgenzd2predicatezd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3126));
		}

	}



/* classgen-make */
	obj_t BGl_classgenzd2makezd2zzobject_classgenz00(obj_t BgL_cz00_8)
	{
		{	/* Object/classgen.scm 170 */
			{
				obj_t BgL_idz00_1881;
				obj_t BgL_tidz00_1882;
				obj_t BgL_slotsz00_1883;
				obj_t BgL_formalsz00_1884;
				obj_t BgL_tformalsz00_1885;

				{	/* Object/classgen.scm 180 */
					obj_t BgL_tidz00_1868;

					BgL_tidz00_1868 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_8)))->BgL_idz00);
					{	/* Object/classgen.scm 180 */
						obj_t BgL_slotsz00_1869;

						{
							BgL_tclassz00_bglt BgL_auxz00_3541;

							{
								obj_t BgL_auxz00_3542;

								{	/* Object/classgen.scm 181 */
									BgL_objectz00_bglt BgL_tmpz00_3543;

									BgL_tmpz00_3543 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_8));
									BgL_auxz00_3542 = BGL_OBJECT_WIDENING(BgL_tmpz00_3543);
								}
								BgL_auxz00_3541 = ((BgL_tclassz00_bglt) BgL_auxz00_3542);
							}
							BgL_slotsz00_1869 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3541))->BgL_slotsz00);
						}
						{	/* Object/classgen.scm 181 */
							obj_t BgL_idz00_1870;

							{	/* Object/classgen.scm 182 */
								obj_t BgL_arg1685z00_1878;

								{	/* Object/classgen.scm 182 */
									obj_t BgL_arg1686z00_1879;
									obj_t BgL_arg1687z00_1880;

									{	/* Object/classgen.scm 182 */
										obj_t BgL_res2309z00_2896;

										{	/* Object/classgen.scm 182 */
											obj_t BgL_symbolz00_2894;

											BgL_symbolz00_2894 = CNST_TABLE_REF(((long) 14));
											{	/* Object/classgen.scm 182 */
												obj_t BgL_arg1466z00_2895;

												BgL_arg1466z00_2895 =
													SYMBOL_TO_STRING(BgL_symbolz00_2894);
												BgL_res2309z00_2896 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2895);
										}}
										BgL_arg1686z00_1879 = BgL_res2309z00_2896;
									}
									{	/* Object/classgen.scm 182 */
										obj_t BgL_res2310z00_2899;

										{	/* Object/classgen.scm 182 */
											obj_t BgL_arg1466z00_2898;

											BgL_arg1466z00_2898 = SYMBOL_TO_STRING(BgL_tidz00_1868);
											BgL_res2310z00_2899 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_2898);
										}
										BgL_arg1687z00_1880 = BgL_res2310z00_2899;
									}
									BgL_arg1685z00_1878 =
										string_append(BgL_arg1686z00_1879, BgL_arg1687z00_1880);
								}
								BgL_idz00_1870 = bstring_to_symbol(BgL_arg1685z00_1878);
							}
							{	/* Object/classgen.scm 182 */
								obj_t BgL_mkzd2tidzd2_1871;

								BgL_mkzd2tidzd2_1871 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_1870,
									BgL_tidz00_1868);
								{	/* Object/classgen.scm 183 */
									obj_t BgL_fzd2idszd2_1872;

									BgL_fzd2idszd2_1872 =
										BGl_makezd2classzd2makezd2formalszd2zzobject_slotsz00
										(BgL_slotsz00_1869);
									{	/* Object/classgen.scm 184 */
										obj_t BgL_fzd2tidszd2_1873;

										BgL_fzd2tidszd2_1873 =
											BGl_makezd2classzd2makezd2typedzd2formalsz00zzobject_slotsz00
											(BgL_fzd2idszd2_1872, BgL_slotsz00_1869);
										{	/* Object/classgen.scm 185 */

											{	/* Object/classgen.scm 186 */
												obj_t BgL_val0_1325z00_1874;
												obj_t BgL_val1_1326z00_1875;

												{	/* Object/classgen.scm 187 */
													obj_t BgL_arg1672z00_1876;

													BgL_arg1672z00_1876 =
														MAKE_YOUNG_PAIR(BgL_mkzd2tidzd2_1871,
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_fzd2tidszd2_1873, BNIL));
													BgL_val0_1325z00_1874 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
														BgL_arg1672z00_1876);
												}
												BgL_idz00_1881 = BgL_mkzd2tidzd2_1871;
												BgL_tidz00_1882 = BgL_tidz00_1868;
												BgL_slotsz00_1883 = BgL_slotsz00_1869;
												BgL_formalsz00_1884 = BgL_fzd2idszd2_1872;
												BgL_tformalsz00_1885 = BgL_fzd2tidszd2_1873;
												{	/* Object/classgen.scm 173 */
													obj_t BgL_plainzd2slotszd2_1887;

													{	/* Object/classgen.scm 173 */
														obj_t BgL_hook1318z00_1916;

														BgL_hook1318z00_1916 =
															MAKE_YOUNG_PAIR(BFALSE, BNIL);
														{
															obj_t BgL_l1315z00_1918;
															obj_t BgL_h1316z00_1919;

															BgL_l1315z00_1918 = BgL_slotsz00_1883;
															BgL_h1316z00_1919 = BgL_hook1318z00_1916;
														BgL_zc3z04anonymousza31730ze3z87_1920:
															if (NULLP(BgL_l1315z00_1918))
																{	/* Object/classgen.scm 173 */
																	BgL_plainzd2slotszd2_1887 =
																		CDR(BgL_hook1318z00_1916);
																}
															else
																{	/* Object/classgen.scm 173 */
																	bool_t BgL_test2447z00_3567;

																	if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																			((BgL_slotz00_bglt)
																				CAR(((obj_t) BgL_l1315z00_1918)))))
																		{	/* Object/classgen.scm 173 */
																			BgL_test2447z00_3567 = ((bool_t) 0);
																		}
																	else
																		{	/* Object/classgen.scm 173 */
																			BgL_test2447z00_3567 = ((bool_t) 1);
																		}
																	if (BgL_test2447z00_3567)
																		{	/* Object/classgen.scm 173 */
																			obj_t BgL_nh1317z00_1925;

																			{	/* Object/classgen.scm 173 */
																				obj_t BgL_arg1739z00_1927;

																				BgL_arg1739z00_1927 =
																					CAR(((obj_t) BgL_l1315z00_1918));
																				{	/* Object/classgen.scm 173 */
																					obj_t BgL_res2303z00_2875;

																					BgL_res2303z00_2875 =
																						MAKE_YOUNG_PAIR(BgL_arg1739z00_1927,
																						BNIL);
																					BgL_nh1317z00_1925 =
																						BgL_res2303z00_2875;
																				}
																			}
																			SET_CDR(BgL_h1316z00_1919,
																				BgL_nh1317z00_1925);
																			{	/* Object/classgen.scm 173 */
																				obj_t BgL_arg1738z00_1926;

																				BgL_arg1738z00_1926 =
																					CDR(((obj_t) BgL_l1315z00_1918));
																				{
																					obj_t BgL_h1316z00_3580;
																					obj_t BgL_l1315z00_3579;

																					BgL_l1315z00_3579 =
																						BgL_arg1738z00_1926;
																					BgL_h1316z00_3580 =
																						BgL_nh1317z00_1925;
																					BgL_h1316z00_1919 = BgL_h1316z00_3580;
																					BgL_l1315z00_1918 = BgL_l1315z00_3579;
																					goto
																						BgL_zc3z04anonymousza31730ze3z87_1920;
																				}
																			}
																		}
																	else
																		{	/* Object/classgen.scm 173 */
																			obj_t BgL_arg1740z00_1928;

																			BgL_arg1740z00_1928 =
																				CDR(((obj_t) BgL_l1315z00_1918));
																			{
																				obj_t BgL_l1315z00_3583;

																				BgL_l1315z00_3583 = BgL_arg1740z00_1928;
																				BgL_l1315z00_1918 = BgL_l1315z00_3583;
																				goto
																					BgL_zc3z04anonymousza31730ze3z87_1920;
																			}
																		}
																}
														}
													}
													{	/* Object/classgen.scm 174 */
														obj_t BgL_arg1692z00_1888;

														{	/* Object/classgen.scm 174 */
															obj_t BgL_arg1695z00_1889;
															obj_t BgL_arg1696z00_1890;

															BgL_arg1695z00_1889 =
																MAKE_YOUNG_PAIR(BgL_idz00_1881,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_tformalsz00_1885, BNIL));
															{	/* Object/classgen.scm 175 */
																obj_t BgL_arg1704z00_1892;

																{	/* Object/classgen.scm 175 */
																	obj_t BgL_arg1707z00_1893;
																	obj_t BgL_arg1708z00_1894;

																	BgL_arg1707z00_1893 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(CNST_TABLE_REF(((long) 13)),
																		BgL_tidz00_1882);
																	{	/* Object/classgen.scm 176 */
																		obj_t BgL_arg1711z00_1895;

																		if (NULLP(BgL_plainzd2slotszd2_1887))
																			{	/* Object/classgen.scm 176 */
																				BgL_arg1711z00_1895 = BNIL;
																			}
																		else
																			{	/* Object/classgen.scm 176 */
																				obj_t BgL_head1321z00_1899;

																				{	/* Object/classgen.scm 176 */
																					obj_t BgL_res2305z00_2880;

																					BgL_res2305z00_2880 =
																						MAKE_YOUNG_PAIR(BNIL, BNIL);
																					BgL_head1321z00_1899 =
																						BgL_res2305z00_2880;
																				}
																				{
																					obj_t BgL_ll1319z00_1901;
																					obj_t BgL_ll1320z00_1902;
																					obj_t BgL_tail1322z00_1903;

																					BgL_ll1319z00_1901 =
																						BgL_plainzd2slotszd2_1887;
																					BgL_ll1320z00_1902 =
																						BgL_formalsz00_1884;
																					BgL_tail1322z00_1903 =
																						BgL_head1321z00_1899;
																				BgL_zc3z04anonymousza31713ze3z87_1904:
																					if (NULLP(BgL_ll1319z00_1901))
																						{	/* Object/classgen.scm 176 */
																							BgL_arg1711z00_1895 =
																								CDR(BgL_head1321z00_1899);
																						}
																					else
																						{	/* Object/classgen.scm 176 */
																							obj_t BgL_newtail1323z00_1906;

																							{	/* Object/classgen.scm 176 */
																								obj_t BgL_arg1726z00_1909;

																								{	/* Object/classgen.scm 176 */
																									obj_t BgL_sz00_1910;
																									obj_t BgL_fz00_1911;

																									BgL_sz00_1910 =
																										CAR(
																										((obj_t)
																											BgL_ll1319z00_1901));
																									BgL_fz00_1911 =
																										CAR(((obj_t)
																											BgL_ll1320z00_1902));
																									{	/* Object/classgen.scm 177 */
																										obj_t BgL_arg1727z00_1912;

																										BgL_arg1727z00_1912 =
																											(((BgL_slotz00_bglt)
																												COBJECT((
																														(BgL_slotz00_bglt)
																														BgL_sz00_1910)))->
																											BgL_idz00);
																										{	/* Object/classgen.scm 177 */
																											obj_t
																												BgL_list1728z00_1913;
																											{	/* Object/classgen.scm 177 */
																												obj_t
																													BgL_arg1729z00_1914;
																												BgL_arg1729z00_1914 =
																													MAKE_YOUNG_PAIR
																													(BgL_fz00_1911, BNIL);
																												BgL_list1728z00_1913 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1727z00_1912,
																													BgL_arg1729z00_1914);
																											}
																											BgL_arg1726z00_1909 =
																												BgL_list1728z00_1913;
																										}
																									}
																								}
																								{	/* Object/classgen.scm 176 */
																									obj_t BgL_res2308z00_2887;

																									BgL_res2308z00_2887 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1726z00_1909, BNIL);
																									BgL_newtail1323z00_1906 =
																										BgL_res2308z00_2887;
																								}
																							}
																							SET_CDR(BgL_tail1322z00_1903,
																								BgL_newtail1323z00_1906);
																							{	/* Object/classgen.scm 176 */
																								obj_t BgL_arg1719z00_1907;
																								obj_t BgL_arg1725z00_1908;

																								BgL_arg1719z00_1907 =
																									CDR(
																									((obj_t) BgL_ll1319z00_1901));
																								BgL_arg1725z00_1908 =
																									CDR(
																									((obj_t) BgL_ll1320z00_1902));
																								{
																									obj_t BgL_tail1322z00_3610;
																									obj_t BgL_ll1320z00_3609;
																									obj_t BgL_ll1319z00_3608;

																									BgL_ll1319z00_3608 =
																										BgL_arg1719z00_1907;
																									BgL_ll1320z00_3609 =
																										BgL_arg1725z00_1908;
																									BgL_tail1322z00_3610 =
																										BgL_newtail1323z00_1906;
																									BgL_tail1322z00_1903 =
																										BgL_tail1322z00_3610;
																									BgL_ll1320z00_1902 =
																										BgL_ll1320z00_3609;
																									BgL_ll1319z00_1901 =
																										BgL_ll1319z00_3608;
																									goto
																										BgL_zc3z04anonymousza31713ze3z87_1904;
																								}
																							}
																						}
																				}
																			}
																		BgL_arg1708z00_1894 =
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_arg1711z00_1895, BNIL);
																	}
																	BgL_arg1704z00_1892 =
																		MAKE_YOUNG_PAIR(BgL_arg1707z00_1893,
																		BgL_arg1708z00_1894);
																}
																BgL_arg1696z00_1890 =
																	MAKE_YOUNG_PAIR(BgL_arg1704z00_1892, BNIL);
															}
															BgL_arg1692z00_1888 =
																MAKE_YOUNG_PAIR(BgL_arg1695z00_1889,
																BgL_arg1696z00_1890);
														}
														BgL_val1_1326z00_1875 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
															BgL_arg1692z00_1888);
												}}
												{	/* Object/classgen.scm 186 */
													int BgL_res2312z00_2902;

													{	/* Object/classgen.scm 186 */
														int BgL_tmpz00_3617;

														BgL_tmpz00_3617 = (int) (((long) 2));
														BgL_res2312z00_2902 =
															BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3617);
													} BgL_res2312z00_2902;
												}
												{	/* Object/classgen.scm 186 */
													int BgL_tmpz00_3620;

													BgL_tmpz00_3620 = (int) (((long) 1));
													BGL_MVALUES_VAL_SET(BgL_tmpz00_3620,
														BgL_val1_1326z00_1875);
												}
												return BgL_val0_1325z00_1874;
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



/* classgen-nil */
	obj_t BGl_classgenzd2nilzd2zzobject_classgenz00(obj_t BgL_cz00_9)
	{
		{	/* Object/classgen.scm 193 */
			{
				obj_t BgL_idz00_1944;
				obj_t BgL_tidz00_1945;
				obj_t BgL_slotsz00_1946;

				{	/* Object/classgen.scm 203 */
					obj_t BgL_tidz00_1934;

					BgL_tidz00_1934 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_9)))->BgL_idz00);
					{	/* Object/classgen.scm 203 */
						obj_t BgL_slotsz00_1935;

						{
							BgL_tclassz00_bglt BgL_auxz00_3625;

							{
								obj_t BgL_auxz00_3626;

								{	/* Object/classgen.scm 204 */
									BgL_objectz00_bglt BgL_tmpz00_3627;

									BgL_tmpz00_3627 =
										((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_9));
									BgL_auxz00_3626 = BGL_OBJECT_WIDENING(BgL_tmpz00_3627);
								}
								BgL_auxz00_3625 = ((BgL_tclassz00_bglt) BgL_auxz00_3626);
							}
							BgL_slotsz00_1935 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3625))->BgL_slotsz00);
						}
						{	/* Object/classgen.scm 204 */
							obj_t BgL_idz00_1936;

							{	/* Object/classgen.scm 205 */
								obj_t BgL_arg1741z00_1940;

								{	/* Object/classgen.scm 205 */
									obj_t BgL_arg1742z00_1941;
									obj_t BgL_arg1743z00_1942;

									{	/* Object/classgen.scm 205 */
										obj_t BgL_arg1744z00_1943;

										BgL_arg1744z00_1943 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_cz00_9)))->BgL_idz00);
										{	/* Object/classgen.scm 205 */
											obj_t BgL_res2315z00_2921;

											{	/* Object/classgen.scm 205 */
												obj_t BgL_arg1466z00_2920;

												BgL_arg1466z00_2920 =
													SYMBOL_TO_STRING(BgL_arg1744z00_1943);
												BgL_res2315z00_2921 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2920);
											}
											BgL_arg1742z00_1941 = BgL_res2315z00_2921;
										}
									}
									{	/* Object/classgen.scm 205 */
										obj_t BgL_res2316z00_2924;

										{	/* Object/classgen.scm 205 */
											obj_t BgL_symbolz00_2922;

											BgL_symbolz00_2922 = CNST_TABLE_REF(((long) 18));
											{	/* Object/classgen.scm 205 */
												obj_t BgL_arg1466z00_2923;

												BgL_arg1466z00_2923 =
													SYMBOL_TO_STRING(BgL_symbolz00_2922);
												BgL_res2316z00_2924 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2923);
										}}
										BgL_arg1743z00_1942 = BgL_res2316z00_2924;
									}
									BgL_arg1741z00_1940 =
										string_append(BgL_arg1742z00_1941, BgL_arg1743z00_1942);
								}
								BgL_idz00_1936 = bstring_to_symbol(BgL_arg1741z00_1940);
							}
							{	/* Object/classgen.scm 205 */
								obj_t BgL_nilzd2tidzd2_1937;

								BgL_nilzd2tidzd2_1937 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_1936,
									BgL_tidz00_1934);
								{	/* Object/classgen.scm 206 */

									{	/* Object/classgen.scm 207 */
										obj_t BgL_val0_1332z00_1938;
										obj_t BgL_val1_1333z00_1939;

										BgL_val0_1332z00_1938 =
											MAKE_YOUNG_PAIR(BgL_nilzd2tidzd2_1937, BNIL);
										BgL_idz00_1944 = BgL_nilzd2tidzd2_1937;
										BgL_tidz00_1945 = BgL_tidz00_1934;
										BgL_slotsz00_1946 = BgL_slotsz00_1935;
										{	/* Object/classgen.scm 196 */
											obj_t BgL_plainzd2slotszd2_1948;

											{	/* Object/classgen.scm 196 */
												obj_t BgL_hook1331z00_1962;

												BgL_hook1331z00_1962 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
												{
													obj_t BgL_l1328z00_1964;
													obj_t BgL_h1329z00_1965;

													BgL_l1328z00_1964 = BgL_slotsz00_1946;
													BgL_h1329z00_1965 = BgL_hook1331z00_1962;
												BgL_zc3z04anonymousza31769ze3z87_1966:
													if (NULLP(BgL_l1328z00_1964))
														{	/* Object/classgen.scm 196 */
															BgL_plainzd2slotszd2_1948 =
																CDR(BgL_hook1331z00_1962);
														}
													else
														{	/* Object/classgen.scm 196 */
															bool_t BgL_test2452z00_3648;

															if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
																	((BgL_slotz00_bglt)
																		CAR(((obj_t) BgL_l1328z00_1964)))))
																{	/* Object/classgen.scm 196 */
																	BgL_test2452z00_3648 = ((bool_t) 0);
																}
															else
																{	/* Object/classgen.scm 196 */
																	BgL_test2452z00_3648 = ((bool_t) 1);
																}
															if (BgL_test2452z00_3648)
																{	/* Object/classgen.scm 196 */
																	obj_t BgL_nh1330z00_1971;

																	{	/* Object/classgen.scm 196 */
																		obj_t BgL_arg1778z00_1973;

																		BgL_arg1778z00_1973 =
																			CAR(((obj_t) BgL_l1328z00_1964));
																		{	/* Object/classgen.scm 196 */
																			obj_t BgL_res2314z00_2907;

																			BgL_res2314z00_2907 =
																				MAKE_YOUNG_PAIR(BgL_arg1778z00_1973,
																				BNIL);
																			BgL_nh1330z00_1971 = BgL_res2314z00_2907;
																		}
																	}
																	SET_CDR(BgL_h1329z00_1965,
																		BgL_nh1330z00_1971);
																	{	/* Object/classgen.scm 196 */
																		obj_t BgL_arg1775z00_1972;

																		BgL_arg1775z00_1972 =
																			CDR(((obj_t) BgL_l1328z00_1964));
																		{
																			obj_t BgL_h1329z00_3661;
																			obj_t BgL_l1328z00_3660;

																			BgL_l1328z00_3660 = BgL_arg1775z00_1972;
																			BgL_h1329z00_3661 = BgL_nh1330z00_1971;
																			BgL_h1329z00_1965 = BgL_h1329z00_3661;
																			BgL_l1328z00_1964 = BgL_l1328z00_3660;
																			goto
																				BgL_zc3z04anonymousza31769ze3z87_1966;
																		}
																	}
																}
															else
																{	/* Object/classgen.scm 196 */
																	obj_t BgL_arg1779z00_1974;

																	BgL_arg1779z00_1974 =
																		CDR(((obj_t) BgL_l1328z00_1964));
																	{
																		obj_t BgL_l1328z00_3664;

																		BgL_l1328z00_3664 = BgL_arg1779z00_1974;
																		BgL_l1328z00_1964 = BgL_l1328z00_3664;
																		goto BgL_zc3z04anonymousza31769ze3z87_1966;
																	}
																}
														}
												}
											}
											{	/* Object/classgen.scm 196 */
												obj_t BgL_newz00_1949;

												BgL_newz00_1949 =
													BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 15)));
												{	/* Object/classgen.scm 197 */
													obj_t BgL_tnewz00_1950;

													BgL_tnewz00_1950 =
														BGl_makezd2typedzd2identz00zzast_identz00
														(BgL_newz00_1949, BgL_tidz00_1945);
													{	/* Object/classgen.scm 198 */
														BgL_globalz00_bglt BgL_holderz00_1951;

														{
															BgL_tclassz00_bglt BgL_auxz00_3668;

															{
																obj_t BgL_auxz00_3669;

																{	/* Object/classgen.scm 199 */
																	BgL_objectz00_bglt BgL_tmpz00_3670;

																	BgL_tmpz00_3670 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_cz00_9));
																	BgL_auxz00_3669 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_3670);
																}
																BgL_auxz00_3668 =
																	((BgL_tclassz00_bglt) BgL_auxz00_3669);
															}
															BgL_holderz00_1951 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_3668))->BgL_holderz00);
														}
														{	/* Object/classgen.scm 199 */

															{	/* Object/classgen.scm 200 */
																obj_t BgL_arg1746z00_1952;

																{	/* Object/classgen.scm 200 */
																	obj_t BgL_arg1747z00_1953;
																	obj_t BgL_arg1754z00_1954;

																	BgL_arg1747z00_1953 =
																		MAKE_YOUNG_PAIR(BgL_idz00_1944, BNIL);
																	{	/* Object/classgen.scm 201 */
																		obj_t BgL_arg1755z00_1955;

																		{	/* Object/classgen.scm 201 */
																			obj_t BgL_arg1756z00_1956;

																			{	/* Object/classgen.scm 201 */
																				obj_t BgL_arg1757z00_1957;

																				{	/* Object/classgen.scm 201 */
																					obj_t BgL_arg1759z00_1958;

																					{	/* Object/classgen.scm 201 */
																						obj_t BgL_arg1760z00_1959;
																						obj_t BgL_arg1761z00_1960;

																						BgL_arg1760z00_1959 =
																							(((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_holderz00_1951)))->
																							BgL_idz00);
																						BgL_arg1761z00_1960 =
																							MAKE_YOUNG_PAIR(((
																									(BgL_globalz00_bglt)
																									COBJECT(BgL_holderz00_1951))->
																								BgL_modulez00), BNIL);
																						BgL_arg1759z00_1958 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1760z00_1959,
																							BgL_arg1761z00_1960);
																					}
																					BgL_arg1757z00_1957 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 5)),
																						BgL_arg1759z00_1958);
																				}
																				BgL_arg1756z00_1956 =
																					MAKE_YOUNG_PAIR(BgL_arg1757z00_1957,
																					BNIL);
																			}
																			BgL_arg1755z00_1955 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						16)), BgL_arg1756z00_1956);
																		}
																		BgL_arg1754z00_1954 =
																			MAKE_YOUNG_PAIR(BgL_arg1755z00_1955,
																			BNIL);
																	}
																	BgL_arg1746z00_1952 =
																		MAKE_YOUNG_PAIR(BgL_arg1747z00_1953,
																		BgL_arg1754z00_1954);
																}
																BgL_val1_1333z00_1939 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
																	BgL_arg1746z00_1952);
										}}}}}}
										{	/* Object/classgen.scm 207 */
											int BgL_res2318z00_2927;

											{	/* Object/classgen.scm 207 */
												int BgL_tmpz00_3691;

												BgL_tmpz00_3691 = (int) (((long) 2));
												BgL_res2318z00_2927 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_3691);
											} BgL_res2318z00_2927;
										}
										{	/* Object/classgen.scm 207 */
											int BgL_tmpz00_3694;

											BgL_tmpz00_3694 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_3694,
												BgL_val1_1333z00_1939);
										}
										return BgL_val0_1332z00_1938;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* classgen-nil-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2nilzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_10)
	{
		{	/* Object/classgen.scm 214 */
			{	/* Object/classgen.scm 215 */
				obj_t BgL_tidz00_1979;

				BgL_tidz00_1979 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_cz00_10)))->BgL_idz00);
				{	/* Object/classgen.scm 215 */
					obj_t BgL_slotsz00_1980;

					{
						BgL_tclassz00_bglt BgL_auxz00_3699;

						{
							obj_t BgL_auxz00_3700;

							{	/* Object/classgen.scm 216 */
								BgL_objectz00_bglt BgL_tmpz00_3701;

								BgL_tmpz00_3701 = ((BgL_objectz00_bglt) BgL_cz00_10);
								BgL_auxz00_3700 = BGL_OBJECT_WIDENING(BgL_tmpz00_3701);
							}
							BgL_auxz00_3699 = ((BgL_tclassz00_bglt) BgL_auxz00_3700);
						}
						BgL_slotsz00_1980 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3699))->BgL_slotsz00);
					}
					{	/* Object/classgen.scm 216 */
						obj_t BgL_idz00_1981;

						{	/* Object/classgen.scm 217 */
							obj_t BgL_arg1832z00_2025;

							{	/* Object/classgen.scm 217 */
								obj_t BgL_arg1833z00_2026;
								obj_t BgL_arg1835z00_2027;

								{	/* Object/classgen.scm 217 */
									obj_t BgL_arg1836z00_2028;

									BgL_arg1836z00_2028 =
										(((BgL_typez00_bglt) COBJECT(
												((BgL_typez00_bglt) BgL_cz00_10)))->BgL_idz00);
									{	/* Object/classgen.scm 217 */
										obj_t BgL_res2319z00_2934;

										{	/* Object/classgen.scm 217 */
											obj_t BgL_arg1466z00_2933;

											BgL_arg1466z00_2933 =
												SYMBOL_TO_STRING(BgL_arg1836z00_2028);
											BgL_res2319z00_2934 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_2933);
										}
										BgL_arg1833z00_2026 = BgL_res2319z00_2934;
									}
								}
								{	/* Object/classgen.scm 217 */
									obj_t BgL_res2320z00_2937;

									{	/* Object/classgen.scm 217 */
										obj_t BgL_symbolz00_2935;

										BgL_symbolz00_2935 = CNST_TABLE_REF(((long) 18));
										{	/* Object/classgen.scm 217 */
											obj_t BgL_arg1466z00_2936;

											BgL_arg1466z00_2936 =
												SYMBOL_TO_STRING(BgL_symbolz00_2935);
											BgL_res2320z00_2937 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_2936);
									}}
									BgL_arg1835z00_2027 = BgL_res2320z00_2937;
								}
								BgL_arg1832z00_2025 =
									string_append(BgL_arg1833z00_2026, BgL_arg1835z00_2027);
							}
							BgL_idz00_1981 = bstring_to_symbol(BgL_arg1832z00_2025);
						}
						{	/* Object/classgen.scm 217 */
							obj_t BgL_plainzd2slotszd2_1982;

							{	/* Object/classgen.scm 218 */
								obj_t BgL_hook1338z00_2009;

								BgL_hook1338z00_2009 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
								{
									obj_t BgL_l1335z00_2011;
									obj_t BgL_h1336z00_2012;

									BgL_l1335z00_2011 = BgL_slotsz00_1980;
									BgL_h1336z00_2012 = BgL_hook1338z00_2009;
								BgL_zc3z04anonymousza31825ze3z87_2013:
									if (NULLP(BgL_l1335z00_2011))
										{	/* Object/classgen.scm 218 */
											BgL_plainzd2slotszd2_1982 = CDR(BgL_hook1338z00_2009);
										}
									else
										{	/* Object/classgen.scm 218 */
											bool_t BgL_test2455z00_3719;

											if (BGl_slotzd2virtualzf3z21zzobject_slotsz00(
													((BgL_slotz00_bglt)
														CAR(((obj_t) BgL_l1335z00_2011)))))
												{	/* Object/classgen.scm 218 */
													BgL_test2455z00_3719 = ((bool_t) 0);
												}
											else
												{	/* Object/classgen.scm 218 */
													BgL_test2455z00_3719 = ((bool_t) 1);
												}
											if (BgL_test2455z00_3719)
												{	/* Object/classgen.scm 218 */
													obj_t BgL_nh1337z00_2018;

													{	/* Object/classgen.scm 218 */
														obj_t BgL_arg1830z00_2020;

														BgL_arg1830z00_2020 =
															CAR(((obj_t) BgL_l1335z00_2011));
														{	/* Object/classgen.scm 218 */
															obj_t BgL_res2323z00_2944;

															BgL_res2323z00_2944 =
																MAKE_YOUNG_PAIR(BgL_arg1830z00_2020, BNIL);
															BgL_nh1337z00_2018 = BgL_res2323z00_2944;
														}
													}
													SET_CDR(BgL_h1336z00_2012, BgL_nh1337z00_2018);
													{	/* Object/classgen.scm 218 */
														obj_t BgL_arg1829z00_2019;

														BgL_arg1829z00_2019 =
															CDR(((obj_t) BgL_l1335z00_2011));
														{
															obj_t BgL_h1336z00_3732;
															obj_t BgL_l1335z00_3731;

															BgL_l1335z00_3731 = BgL_arg1829z00_2019;
															BgL_h1336z00_3732 = BgL_nh1337z00_2018;
															BgL_h1336z00_2012 = BgL_h1336z00_3732;
															BgL_l1335z00_2011 = BgL_l1335z00_3731;
															goto BgL_zc3z04anonymousza31825ze3z87_2013;
														}
													}
												}
											else
												{	/* Object/classgen.scm 218 */
													obj_t BgL_arg1831z00_2021;

													BgL_arg1831z00_2021 =
														CDR(((obj_t) BgL_l1335z00_2011));
													{
														obj_t BgL_l1335z00_3735;

														BgL_l1335z00_3735 = BgL_arg1831z00_2021;
														BgL_l1335z00_2011 = BgL_l1335z00_3735;
														goto BgL_zc3z04anonymousza31825ze3z87_2013;
													}
												}
										}
								}
							}
							{	/* Object/classgen.scm 218 */
								obj_t BgL_newz00_1983;

								BgL_newz00_1983 =
									BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
											15)));
								{	/* Object/classgen.scm 219 */
									obj_t BgL_tnewz00_1984;

									BgL_tnewz00_1984 =
										BGl_makezd2typedzd2identz00zzast_identz00(BgL_newz00_1983,
										BgL_tidz00_1979);
									{	/* Object/classgen.scm 220 */

										{	/* Object/classgen.scm 221 */
											obj_t BgL_arg1782z00_1985;

											{	/* Object/classgen.scm 221 */
												obj_t BgL_arg1784z00_1986;
												obj_t BgL_arg1790z00_1987;

												BgL_arg1784z00_1986 =
													MAKE_YOUNG_PAIR(BgL_tnewz00_1984, BNIL);
												{	/* Object/classgen.scm 222 */
													obj_t BgL_arg1796z00_1988;
													obj_t BgL_arg1798z00_1989;

													if (NULLP(BgL_plainzd2slotszd2_1982))
														{	/* Object/classgen.scm 222 */
															BgL_arg1796z00_1988 = BNIL;
														}
													else
														{	/* Object/classgen.scm 222 */
															obj_t BgL_head1341z00_1992;

															{	/* Object/classgen.scm 222 */
																obj_t BgL_res2325z00_2949;

																BgL_res2325z00_2949 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1341z00_1992 = BgL_res2325z00_2949;
															}
															{
																obj_t BgL_l1339z00_1994;
																obj_t BgL_tail1342z00_1995;

																BgL_l1339z00_1994 = BgL_plainzd2slotszd2_1982;
																BgL_tail1342z00_1995 = BgL_head1341z00_1992;
															BgL_zc3z04anonymousza31800ze3z87_1996:
																if (NULLP(BgL_l1339z00_1994))
																	{	/* Object/classgen.scm 222 */
																		BgL_arg1796z00_1988 =
																			CDR(BgL_head1341z00_1992);
																	}
																else
																	{	/* Object/classgen.scm 222 */
																		obj_t BgL_newtail1343z00_1998;

																		{	/* Object/classgen.scm 222 */
																			obj_t BgL_arg1809z00_2000;

																			{	/* Object/classgen.scm 222 */
																				obj_t BgL_sz00_2001;

																				BgL_sz00_2001 =
																					CAR(((obj_t) BgL_l1339z00_1994));
																				{	/* Object/classgen.scm 223 */
																					obj_t BgL_arg1811z00_2002;

																					{	/* Object/classgen.scm 223 */
																						obj_t BgL_arg1820z00_2003;
																						obj_t BgL_arg1821z00_2004;

																						{	/* Object/classgen.scm 223 */
																							obj_t BgL_arg1822z00_2005;

																							BgL_arg1822z00_2005 =
																								(((BgL_slotz00_bglt) COBJECT(
																										((BgL_slotz00_bglt)
																											BgL_sz00_2001)))->
																								BgL_idz00);
																							BgL_arg1820z00_2003 =
																								BGl_fieldzd2accesszd2zzast_objectz00
																								(BgL_newz00_1983,
																								BgL_arg1822z00_2005, BTRUE);
																						}
																						{	/* Object/classgen.scm 224 */
																							obj_t BgL_arg1823z00_2006;

																							{	/* Object/classgen.scm 224 */
																								obj_t BgL_arg1824z00_2007;

																								BgL_arg1824z00_2007 =
																									(((BgL_slotz00_bglt) COBJECT(
																											((BgL_slotz00_bglt)
																												BgL_sz00_2001)))->
																									BgL_typez00);
																								BgL_arg1823z00_2006 =
																									BGl_typezd2nilzd2valuez00zzobject_nilz00
																									(BgL_arg1824z00_2007,
																									BgL_sz00_2001);
																							}
																							BgL_arg1821z00_2004 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1823z00_2006, BNIL);
																						}
																						BgL_arg1811z00_2002 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1820z00_2003,
																							BgL_arg1821z00_2004);
																					}
																					BgL_arg1809z00_2000 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 19)),
																						BgL_arg1811z00_2002);
																			}}
																			{	/* Object/classgen.scm 222 */
																				obj_t BgL_res2327z00_2955;

																				BgL_res2327z00_2955 =
																					MAKE_YOUNG_PAIR(BgL_arg1809z00_2000,
																					BNIL);
																				BgL_newtail1343z00_1998 =
																					BgL_res2327z00_2955;
																		}}
																		SET_CDR(BgL_tail1342z00_1995,
																			BgL_newtail1343z00_1998);
																		{	/* Object/classgen.scm 222 */
																			obj_t BgL_arg1808z00_1999;

																			BgL_arg1808z00_1999 =
																				CDR(((obj_t) BgL_l1339z00_1994));
																			{
																				obj_t BgL_tail1342z00_3763;
																				obj_t BgL_l1339z00_3762;

																				BgL_l1339z00_3762 = BgL_arg1808z00_1999;
																				BgL_tail1342z00_3763 =
																					BgL_newtail1343z00_1998;
																				BgL_tail1342z00_1995 =
																					BgL_tail1342z00_3763;
																				BgL_l1339z00_1994 = BgL_l1339z00_3762;
																				goto
																					BgL_zc3z04anonymousza31800ze3z87_1996;
																			}
																		}
																	}
															}
														}
													BgL_arg1798z00_1989 =
														MAKE_YOUNG_PAIR(BgL_newz00_1983, BNIL);
													BgL_arg1790z00_1987 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1796z00_1988, BgL_arg1798z00_1989);
												}
												BgL_arg1782z00_1985 =
													MAKE_YOUNG_PAIR(BgL_arg1784z00_1986,
													BgL_arg1790z00_1987);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
												BgL_arg1782z00_1985);
		}}}}}}}}}

	}



/* &classgen-nil-anonymous */
	obj_t BGl_z62classgenzd2nilzd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3127, obj_t BgL_cz00_3128)
	{
		{	/* Object/classgen.scm 214 */
			return
				BGl_classgenzd2nilzd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3128));
		}

	}



/* classgen-make-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2makezd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_11)
	{
		{	/* Object/classgen.scm 231 */
			{	/* Object/classgen.scm 232 */
				bool_t BgL_test2459z00_3771;

				{
					BgL_tclassz00_bglt BgL_auxz00_3772;

					{
						obj_t BgL_auxz00_3773;

						{	/* Object/classgen.scm 232 */
							BgL_objectz00_bglt BgL_tmpz00_3774;

							BgL_tmpz00_3774 = ((BgL_objectz00_bglt) BgL_cz00_11);
							BgL_auxz00_3773 = BGL_OBJECT_WIDENING(BgL_tmpz00_3774);
						}
						BgL_auxz00_3772 = ((BgL_tclassz00_bglt) BgL_auxz00_3773);
					}
					BgL_test2459z00_3771 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3772))->
						BgL_abstractzf3zf3);
				}
				if (BgL_test2459z00_3771)
					{	/* Object/classgen.scm 234 */
						obj_t BgL_arg1838z00_2030;

						{	/* Object/classgen.scm 234 */
							obj_t BgL_arg1840z00_2031;

							{	/* Object/classgen.scm 234 */
								obj_t BgL_arg1841z00_2032;

								{	/* Object/classgen.scm 234 */
									obj_t BgL_arg1842z00_2033;

									{	/* Object/classgen.scm 234 */
										obj_t BgL_arg1845z00_2034;
										obj_t BgL_arg1846z00_2035;

										{	/* Object/classgen.scm 234 */
											obj_t BgL_arg1847z00_2036;

											BgL_arg1847z00_2036 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt) BgL_cz00_11)))->BgL_idz00);
											{	/* Object/classgen.scm 234 */
												obj_t BgL_res2328z00_2963;

												{	/* Object/classgen.scm 234 */
													obj_t BgL_arg1466z00_2962;

													BgL_arg1466z00_2962 =
														SYMBOL_TO_STRING(BgL_arg1847z00_2036);
													BgL_res2328z00_2963 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2962);
												}
												BgL_arg1845z00_2034 = BgL_res2328z00_2963;
											}
										}
										{	/* Object/classgen.scm 234 */
											obj_t BgL_arg1848z00_2037;

											BgL_arg1848z00_2037 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
											BgL_arg1846z00_2035 =
												MAKE_YOUNG_PAIR(BGl_string2379z00zzobject_classgenz00,
												BgL_arg1848z00_2037);
										}
										BgL_arg1842z00_2033 =
											MAKE_YOUNG_PAIR(BgL_arg1845z00_2034, BgL_arg1846z00_2035);
									}
									BgL_arg1841z00_2032 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
										BgL_arg1842z00_2033);
								}
								BgL_arg1840z00_2031 =
									MAKE_YOUNG_PAIR(BgL_arg1841z00_2032, BNIL);
							}
							BgL_arg1838z00_2030 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
								BgL_arg1840z00_2031);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BgL_arg1838z00_2030);
					}
				else
					{	/* Object/classgen.scm 237 */
						obj_t BgL_protoz00_2038;

						BgL_protoz00_2038 =
							BGl_classgenzd2makezd2zzobject_classgenz00(((obj_t) BgL_cz00_11));
						{	/* Object/classgen.scm 238 */
							obj_t BgL_defz00_2039;

							{	/* Object/classgen.scm 239 */
								int BgL_tmpz00_3795;

								BgL_tmpz00_3795 = (int) (((long) 1));
								BgL_defz00_2039 = BGL_MVALUES_VAL(BgL_tmpz00_3795);
							}
							if (PAIRP(BgL_defz00_2039))
								{	/* Object/classgen.scm 239 */
									obj_t BgL_cdrzd2169zd2_2046;

									BgL_cdrzd2169zd2_2046 = CDR(BgL_defz00_2039);
									if (PAIRP(BgL_cdrzd2169zd2_2046))
										{	/* Object/classgen.scm 239 */
											obj_t BgL_carzd2173zd2_2048;
											obj_t BgL_cdrzd2174zd2_2049;

											BgL_carzd2173zd2_2048 = CAR(BgL_cdrzd2169zd2_2046);
											BgL_cdrzd2174zd2_2049 = CDR(BgL_cdrzd2169zd2_2046);
											if (PAIRP(BgL_carzd2173zd2_2048))
												{	/* Object/classgen.scm 239 */
													if (PAIRP(BgL_cdrzd2174zd2_2049))
														{	/* Object/classgen.scm 239 */
															if (NULLP(CDR(BgL_cdrzd2174zd2_2049)))
																{	/* Object/classgen.scm 239 */
																	obj_t BgL_arg1856z00_2055;
																	obj_t BgL_arg1857z00_2056;

																	BgL_arg1856z00_2055 =
																		CDR(BgL_carzd2173zd2_2048);
																	BgL_arg1857z00_2056 =
																		CAR(BgL_cdrzd2174zd2_2049);
																	{	/* Object/classgen.scm 241 */
																		obj_t BgL_arg1859z00_2981;
																		obj_t BgL_arg1861z00_2982;

																		{	/* Object/classgen.scm 241 */
																			obj_t BgL_arg1862z00_2983;

																			BgL_arg1862z00_2983 =
																				(((BgL_typez00_bglt) COBJECT(
																						((BgL_typez00_bglt) BgL_cz00_11)))->
																				BgL_idz00);
																			BgL_arg1859z00_2981 =
																				BGl_makezd2typedzd2identz00zzast_identz00
																				(CNST_TABLE_REF(((long) 12)),
																				BgL_arg1862z00_2983);
																		}
																		{	/* Object/classgen.scm 241 */
																			obj_t BgL_arg1863z00_2984;

																			BgL_arg1863z00_2984 =
																				MAKE_YOUNG_PAIR(BgL_arg1857z00_2056,
																				BNIL);
																			BgL_arg1861z00_2982 =
																				MAKE_YOUNG_PAIR(BgL_arg1856z00_2055,
																				BgL_arg1863z00_2984);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_arg1859z00_2981,
																			BgL_arg1861z00_2982);
																	}
																}
															else
																{	/* Object/classgen.scm 239 */
																	return BFALSE;
																}
														}
													else
														{	/* Object/classgen.scm 239 */
															return BFALSE;
														}
												}
											else
												{	/* Object/classgen.scm 239 */
													return BFALSE;
												}
										}
									else
										{	/* Object/classgen.scm 239 */
											return BFALSE;
										}
								}
							else
								{	/* Object/classgen.scm 239 */
									return BFALSE;
								}
						}
					}
			}
		}

	}



/* &classgen-make-anonymous */
	obj_t BGl_z62classgenzd2makezd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3129, obj_t BgL_cz00_3130)
	{
		{	/* Object/classgen.scm 231 */
			return
				BGl_classgenzd2makezd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3130));
		}

	}



/* classgen-allocate */
	obj_t BGl_classgenzd2allocatezd2zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_12)
	{
		{	/* Object/classgen.scm 248 */
			{
				obj_t BgL_idz00_2107;
				obj_t BgL_tidz00_2108;
				BgL_globalz00_bglt BgL_gz00_2109;
				obj_t BgL_idz00_2201;
				obj_t BgL_tidz00_2202;
				BgL_globalz00_bglt BgL_gz00_2203;

				{	/* Object/classgen.scm 309 */
					obj_t BgL_tidz00_2067;

					BgL_tidz00_2067 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_12)))->BgL_idz00);
					{	/* Object/classgen.scm 309 */
						obj_t BgL_alloczd2idzd2_2068;

						{	/* Object/classgen.scm 310 */
							obj_t BgL_arg1870z00_2077;

							{	/* Object/classgen.scm 310 */
								obj_t BgL_arg1871z00_2078;
								obj_t BgL_arg1872z00_2079;

								{	/* Object/classgen.scm 310 */
									obj_t BgL_res2339z00_3013;

									{	/* Object/classgen.scm 310 */
										obj_t BgL_symbolz00_3011;

										BgL_symbolz00_3011 = CNST_TABLE_REF(((long) 29));
										{	/* Object/classgen.scm 310 */
											obj_t BgL_arg1466z00_3012;

											BgL_arg1466z00_3012 =
												SYMBOL_TO_STRING(BgL_symbolz00_3011);
											BgL_res2339z00_3013 =
												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
												(BgL_arg1466z00_3012);
									}}
									BgL_arg1871z00_2078 = BgL_res2339z00_3013;
								}
								{	/* Object/classgen.scm 310 */
									obj_t BgL_res2340z00_3016;

									{	/* Object/classgen.scm 310 */
										obj_t BgL_arg1466z00_3015;

										BgL_arg1466z00_3015 = SYMBOL_TO_STRING(BgL_tidz00_2067);
										BgL_res2340z00_3016 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_3015);
									}
									BgL_arg1872z00_2079 = BgL_res2340z00_3016;
								}
								BgL_arg1870z00_2077 =
									string_append(BgL_arg1871z00_2078, BgL_arg1872z00_2079);
							}
							BgL_alloczd2idzd2_2068 = bstring_to_symbol(BgL_arg1870z00_2077);
						}
						{	/* Object/classgen.scm 310 */
							obj_t BgL_alloczd2tidzd2_2069;

							BgL_alloczd2tidzd2_2069 =
								BGl_makezd2typedzd2identz00zzast_identz00
								(BgL_alloczd2idzd2_2068, BgL_tidz00_2067);
							{	/* Object/classgen.scm 311 */
								BgL_globalz00_bglt BgL_holderz00_2070;

								{
									BgL_tclassz00_bglt BgL_auxz00_3833;

									{
										obj_t BgL_auxz00_3834;

										{	/* Object/classgen.scm 312 */
											BgL_objectz00_bglt BgL_tmpz00_3835;

											BgL_tmpz00_3835 = ((BgL_objectz00_bglt) BgL_cz00_12);
											BgL_auxz00_3834 = BGL_OBJECT_WIDENING(BgL_tmpz00_3835);
										}
										BgL_auxz00_3833 = ((BgL_tclassz00_bglt) BgL_auxz00_3834);
									}
									BgL_holderz00_2070 =
										(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3833))->
										BgL_holderz00);
								}
								{	/* Object/classgen.scm 312 */

									{	/* Object/classgen.scm 313 */
										obj_t BgL_val0_1344z00_2071;
										obj_t BgL_val1_1345z00_2072;

										{	/* Object/classgen.scm 314 */
											obj_t BgL_arg1865z00_2073;

											BgL_arg1865z00_2073 =
												MAKE_YOUNG_PAIR(BgL_alloczd2tidzd2_2069, BNIL);
											BgL_val0_1344z00_2071 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
												BgL_arg1865z00_2073);
										}
										{	/* Object/classgen.scm 315 */
											bool_t BgL_test2465z00_3843;

											{	/* Object/classgen.scm 315 */
												obj_t BgL_arg1868z00_2076;

												BgL_arg1868z00_2076 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_test2465z00_3843 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1868z00_2076)))->
													BgL_pragmazd2supportzd2);
											}
											if (BgL_test2465z00_3843)
												{	/* Object/classgen.scm 315 */
													BgL_idz00_2107 = BgL_alloczd2tidzd2_2069;
													BgL_tidz00_2108 = BgL_tidz00_2067;
													BgL_gz00_2109 = BgL_holderz00_2070;
													{	/* Object/classgen.scm 271 */
														obj_t BgL_newz00_2111;

														BgL_newz00_2111 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 15))));
														{	/* Object/classgen.scm 272 */
															obj_t BgL_arg1901z00_2112;

															{	/* Object/classgen.scm 272 */
																obj_t BgL_arg1902z00_2113;
																obj_t BgL_arg1903z00_2114;

																BgL_arg1902z00_2113 =
																	MAKE_YOUNG_PAIR(BgL_idz00_2107, BNIL);
																{	/* Object/classgen.scm 274 */
																	obj_t BgL_arg1904z00_2115;

																	{	/* Object/classgen.scm 274 */
																		obj_t BgL_arg1905z00_2116;

																		if (
																			((long)
																				CINT
																				(BGl_za2compilerzd2debugzd2traceza2z00zzengine_paramz00)
																				>= ((long) 1)))
																			{	/* Object/classgen.scm 275 */
																				obj_t BgL_envz00_2118;

																				BgL_envz00_2118 =
																					BGl_gensymz00zz__r4_symbols_6_4z00
																					(CNST_TABLE_REF(((long) 25)));
																				{	/* Object/classgen.scm 275 */
																					obj_t BgL_tenvz00_2119;

																					BgL_tenvz00_2119 =
																						BGl_makezd2typedzd2identz00zzast_identz00
																						(BgL_envz00_2118,
																						CNST_TABLE_REF(((long) 26)));
																					{	/* Object/classgen.scm 276 */
																						obj_t BgL_aidz00_2120;

																						BgL_aidz00_2120 =
																							BGl_gensymz00zz__r4_symbols_6_4z00
																							(CNST_TABLE_REF(((long) 27)));
																						{	/* Object/classgen.scm 277 */

																							{	/* Object/classgen.scm 278 */
																								obj_t BgL_arg1907z00_2121;

																								{	/* Object/classgen.scm 278 */
																									obj_t BgL_arg1908z00_2122;
																									obj_t BgL_arg1909z00_2123;

																									{	/* Object/classgen.scm 278 */
																										obj_t BgL_arg1910z00_2124;
																										obj_t BgL_arg1911z00_2125;

																										{	/* Object/classgen.scm 278 */
																											obj_t BgL_arg1912z00_2126;

																											{	/* Object/classgen.scm 278 */
																												obj_t
																													BgL_arg1913z00_2127;
																												BgL_arg1913z00_2127 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 28)),
																													BNIL);
																												BgL_arg1912z00_2126 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1913z00_2127,
																													BNIL);
																											}
																											BgL_arg1910z00_2124 =
																												MAKE_YOUNG_PAIR
																												(BgL_tenvz00_2119,
																												BgL_arg1912z00_2126);
																										}
																										{	/* Object/classgen.scm 279 */
																											obj_t BgL_arg1914z00_2128;

																											{	/* Object/classgen.scm 279 */
																												obj_t
																													BgL_arg1915z00_2129;
																												{	/* Object/classgen.scm 279 */
																													obj_t
																														BgL_arg1916z00_2130;
																													{	/* Object/classgen.scm 279 */
																														obj_t
																															BgL_arg1917z00_2131;
																														{	/* Object/classgen.scm 279 */
																															obj_t
																																BgL_arg1918z00_2132;
																															{	/* Object/classgen.scm 279 */
																																obj_t
																																	BgL_arg1919z00_2133;
																																{	/* Object/classgen.scm 279 */
																																	obj_t
																																		BgL_arg1920z00_2134;
																																	obj_t
																																		BgL_arg1921z00_2135;
																																	{	/* Object/classgen.scm 279 */
																																		obj_t
																																			BgL_res2336z00_2996;
																																		{	/* Object/classgen.scm 279 */
																																			obj_t
																																				BgL_symbolz00_2994;
																																			BgL_symbolz00_2994
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					29));
																																			{	/* Object/classgen.scm 279 */
																																				obj_t
																																					BgL_arg1466z00_2995;
																																				BgL_arg1466z00_2995
																																					=
																																					SYMBOL_TO_STRING
																																					(BgL_symbolz00_2994);
																																				BgL_res2336z00_2996
																																					=
																																					BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																					(BgL_arg1466z00_2995);
																																		}}
																																		BgL_arg1920z00_2134
																																			=
																																			BgL_res2336z00_2996;
																																	}
																																	{	/* Object/classgen.scm 279 */
																																		obj_t
																																			BgL_res2337z00_2999;
																																		{	/* Object/classgen.scm 279 */
																																			obj_t
																																				BgL_arg1466z00_2998;
																																			BgL_arg1466z00_2998
																																				=
																																				SYMBOL_TO_STRING
																																				(BgL_tidz00_2108);
																																			BgL_res2337z00_2999
																																				=
																																				BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																				(BgL_arg1466z00_2998);
																																		}
																																		BgL_arg1921z00_2135
																																			=
																																			BgL_res2337z00_2999;
																																	}
																																	BgL_arg1919z00_2133
																																		=
																																		string_append
																																		(BgL_arg1920z00_2134,
																																		BgL_arg1921z00_2135);
																																}
																																BgL_arg1918z00_2132
																																	=
																																	bstring_to_symbol
																																	(BgL_arg1919z00_2133);
																															}
																															BgL_arg1917z00_2131
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1918z00_2132,
																																BNIL);
																														}
																														BgL_arg1916z00_2130
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 30)),
																															BgL_arg1917z00_2131);
																													}
																													BgL_arg1915z00_2129 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1916z00_2130,
																														BNIL);
																												}
																												BgL_arg1914z00_2128 =
																													MAKE_YOUNG_PAIR
																													(BgL_aidz00_2120,
																													BgL_arg1915z00_2129);
																											}
																											BgL_arg1911z00_2125 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1914z00_2128,
																												BNIL);
																										}
																										BgL_arg1908z00_2122 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1910z00_2124,
																											BgL_arg1911z00_2125);
																									}
																									{	/* Object/classgen.scm 282 */
																										obj_t BgL_arg1923z00_2136;

																										{	/* Object/classgen.scm 282 */
																											obj_t BgL_arg1924z00_2137;

																											{	/* Object/classgen.scm 282 */
																												obj_t
																													BgL_arg1925z00_2138;
																												{	/* Object/classgen.scm 282 */
																													obj_t
																														BgL_arg1926z00_2139;
																													obj_t
																														BgL_arg1927z00_2140;
																													{	/* Object/classgen.scm 282 */
																														obj_t
																															BgL_arg1928z00_2141;
																														{	/* Object/classgen.scm 282 */
																															obj_t
																																BgL_arg1929z00_2142;
																															{	/* Object/classgen.scm 282 */
																																obj_t
																																	BgL_arg1930z00_2143;
																																{	/* Object/classgen.scm 282 */
																																	obj_t
																																		BgL_arg1931z00_2144;
																																	obj_t
																																		BgL_arg1932z00_2145;
																																	{	/* Object/classgen.scm 282 */
																																		obj_t
																																			BgL_arg1933z00_2146;
																																		{	/* Object/classgen.scm 282 */
																																			obj_t
																																				BgL_arg1934z00_2147;
																																			BgL_arg1934z00_2147
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						3)),
																																				BNIL);
																																			BgL_arg1933z00_2146
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						22)),
																																				BgL_arg1934z00_2147);
																																		}
																																		BgL_arg1931z00_2144
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					5)),
																																			BgL_arg1933z00_2146);
																																	}
																																	{	/* Object/classgen.scm 283 */
																																		obj_t
																																			BgL_arg1935z00_2148;
																																		{	/* Object/classgen.scm 283 */
																																			obj_t
																																				BgL_arg1936z00_2149;
																																			{	/* Object/classgen.scm 283 */
																																				obj_t
																																					BgL_arg1937z00_2150;
																																				obj_t
																																					BgL_arg1938z00_2151;
																																				BgL_arg1937z00_2150
																																					=
																																					(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_gz00_2109)))->BgL_idz00);
																																				BgL_arg1938z00_2151
																																					=
																																					MAKE_YOUNG_PAIR
																																					((((BgL_globalz00_bglt) COBJECT(BgL_gz00_2109))->BgL_modulez00), BNIL);
																																				BgL_arg1936z00_2149
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1937z00_2150,
																																					BgL_arg1938z00_2151);
																																			}
																																			BgL_arg1935z00_2148
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						5)),
																																				BgL_arg1936z00_2149);
																																		}
																																		BgL_arg1932z00_2145
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1935z00_2148,
																																			BNIL);
																																	}
																																	BgL_arg1930z00_2143
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1931z00_2144,
																																		BgL_arg1932z00_2145);
																																}
																																BgL_arg1929z00_2142
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1930z00_2143,
																																	BNIL);
																															}
																															BgL_arg1928z00_2141
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string2380z00zzobject_classgenz00,
																																BgL_arg1929z00_2142);
																														}
																														BgL_arg1926z00_2139
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 31)),
																															BgL_arg1928z00_2141);
																													}
																													{	/* Object/classgen.scm 284 */
																														obj_t
																															BgL_arg1940z00_2153;
																														{	/* Object/classgen.scm 284 */
																															obj_t
																																BgL_arg1941z00_2154;
																															{	/* Object/classgen.scm 284 */
																																obj_t
																																	BgL_arg1942z00_2155;
																																obj_t
																																	BgL_arg1943z00_2156;
																																{	/* Object/classgen.scm 284 */
																																	obj_t
																																		BgL_arg1944z00_2157;
																																	{	/* Object/classgen.scm 284 */
																																		obj_t
																																			BgL_arg1945z00_2158;
																																		obj_t
																																			BgL_arg1946z00_2159;
																																		BgL_arg1945z00_2158
																																			=
																																			BGl_makezd2typedzd2identz00zzast_identz00
																																			(BgL_newz00_2111,
																																			BgL_tidz00_2108);
																																		BgL_arg1946z00_2159
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_czd2mallocze70z35zzobject_classgenz00
																																			(BgL_cz00_12,
																																				BgL_tidz00_2108),
																																			BNIL);
																																		BgL_arg1944z00_2157
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1945z00_2158,
																																			BgL_arg1946z00_2159);
																																	}
																																	BgL_arg1942z00_2155
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1944z00_2157,
																																		BNIL);
																																}
																																{	/* Object/classgen.scm 286 */
																																	obj_t
																																		BgL_arg1948z00_2161;
																																	obj_t
																																		BgL_arg1949z00_2162;
																																	{	/* Object/classgen.scm 286 */
																																		obj_t
																																			BgL_arg1951z00_2163;
																																		{	/* Object/classgen.scm 286 */
																																			obj_t
																																				BgL_arg1952z00_2164;
																																			{	/* Object/classgen.scm 286 */
																																				obj_t
																																					BgL_arg1953z00_2165;
																																				{	/* Object/classgen.scm 286 */
																																					obj_t
																																						BgL_arg1954z00_2166;
																																					obj_t
																																						BgL_arg1955z00_2167;
																																					{	/* Object/classgen.scm 286 */
																																						obj_t
																																							BgL_arg1956z00_2168;
																																						{	/* Object/classgen.scm 286 */
																																							obj_t
																																								BgL_arg1957z00_2169;
																																							BgL_arg1957z00_2169
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 3)), BNIL);
																																							BgL_arg1956z00_2168
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 22)), BgL_arg1957z00_2169);
																																						}
																																						BgL_arg1954z00_2166
																																							=
																																							MAKE_YOUNG_PAIR
																																							(CNST_TABLE_REF
																																							(((long) 5)), BgL_arg1956z00_2168);
																																					}
																																					{	/* Object/classgen.scm 287 */
																																						obj_t
																																							BgL_arg1958z00_2170;
																																						{	/* Object/classgen.scm 287 */
																																							obj_t
																																								BgL_arg1959z00_2171;
																																							{	/* Object/classgen.scm 287 */
																																								obj_t
																																									BgL_arg1960z00_2172;
																																								obj_t
																																									BgL_arg1961z00_2173;
																																								BgL_arg1960z00_2172
																																									=
																																									(
																																									((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_gz00_2109)))->BgL_idz00);
																																								BgL_arg1961z00_2173
																																									=
																																									MAKE_YOUNG_PAIR
																																									(
																																									(((BgL_globalz00_bglt) COBJECT(BgL_gz00_2109))->BgL_modulez00), BNIL);
																																								BgL_arg1959z00_2171
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1960z00_2172,
																																									BgL_arg1961z00_2173);
																																							}
																																							BgL_arg1958z00_2170
																																								=
																																								MAKE_YOUNG_PAIR
																																								(CNST_TABLE_REF
																																								(((long) 5)), BgL_arg1959z00_2171);
																																						}
																																						BgL_arg1955z00_2167
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1958z00_2170,
																																							BNIL);
																																					}
																																					BgL_arg1953z00_2165
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1954z00_2166,
																																						BgL_arg1955z00_2167);
																																				}
																																				BgL_arg1952z00_2164
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1953z00_2165,
																																					BNIL);
																																			}
																																			BgL_arg1951z00_2163
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_newz00_2111,
																																				BgL_arg1952z00_2164);
																																		}
																																		BgL_arg1948z00_2161
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					23)),
																																			BgL_arg1951z00_2163);
																																	}
																																	{	/* Object/classgen.scm 288 */
																																		obj_t
																																			BgL_arg1963z00_2175;
																																		obj_t
																																			BgL_arg1964z00_2176;
																																		BgL_arg1963z00_2175
																																			=
																																			BGl_initzd2wideningze70z35zzobject_classgenz00
																																			(BgL_cz00_12,
																																			BgL_newz00_2111);
																																		BgL_arg1964z00_2176
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_newz00_2111,
																																			BNIL);
																																		BgL_arg1949z00_2162
																																			=
																																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																			(BgL_arg1963z00_2175,
																																			BgL_arg1964z00_2176);
																																	}
																																	BgL_arg1943z00_2156
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1948z00_2161,
																																		BgL_arg1949z00_2162);
																																}
																																BgL_arg1941z00_2154
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1942z00_2155,
																																	BgL_arg1943z00_2156);
																															}
																															BgL_arg1940z00_2153
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 24)),
																																BgL_arg1941z00_2154);
																														}
																														BgL_arg1927z00_2140
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1940z00_2153,
																															BNIL);
																													}
																													BgL_arg1925z00_2138 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1926z00_2139,
																														BgL_arg1927z00_2140);
																												}
																												BgL_arg1924z00_2137 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BgL_arg1925z00_2138);
																											}
																											BgL_arg1923z00_2136 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														24)),
																												BgL_arg1924z00_2137);
																										}
																										BgL_arg1909z00_2123 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1923z00_2136,
																											BNIL);
																									}
																									BgL_arg1907z00_2121 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1908z00_2122,
																										BgL_arg1909z00_2123);
																								}
																								BgL_arg1905z00_2116 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 24)),
																									BgL_arg1907z00_2121);
																			}}}}}
																		else
																			{	/* Object/classgen.scm 290 */
																				obj_t BgL_arg1965z00_2177;

																				{	/* Object/classgen.scm 290 */
																					obj_t BgL_arg1966z00_2178;
																					obj_t BgL_arg1967z00_2179;

																					{	/* Object/classgen.scm 290 */
																						obj_t BgL_arg1968z00_2180;

																						{	/* Object/classgen.scm 290 */
																							obj_t BgL_arg1969z00_2181;
																							obj_t BgL_arg1970z00_2182;

																							BgL_arg1969z00_2181 =
																								BGl_makezd2typedzd2identz00zzast_identz00
																								(BgL_newz00_2111,
																								BgL_tidz00_2108);
																							BgL_arg1970z00_2182 =
																								MAKE_YOUNG_PAIR
																								(BGl_czd2mallocze70z35zzobject_classgenz00
																								(BgL_cz00_12, BgL_tidz00_2108),
																								BNIL);
																							BgL_arg1968z00_2180 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1969z00_2181,
																								BgL_arg1970z00_2182);
																						}
																						BgL_arg1966z00_2178 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1968z00_2180, BNIL);
																					}
																					{	/* Object/classgen.scm 292 */
																						obj_t BgL_arg1972z00_2184;
																						obj_t BgL_arg1973z00_2185;

																						{	/* Object/classgen.scm 292 */
																							obj_t BgL_arg1974z00_2186;

																							{	/* Object/classgen.scm 292 */
																								obj_t BgL_arg1975z00_2187;

																								{	/* Object/classgen.scm 292 */
																									obj_t BgL_arg1976z00_2188;

																									{	/* Object/classgen.scm 292 */
																										obj_t BgL_arg1977z00_2189;
																										obj_t BgL_arg1979z00_2190;

																										{	/* Object/classgen.scm 292 */
																											obj_t BgL_arg1980z00_2191;

																											{	/* Object/classgen.scm 292 */
																												obj_t
																													BgL_arg1981z00_2192;
																												BgL_arg1981z00_2192 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 3)), BNIL);
																												BgL_arg1980z00_2191 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 22)),
																													BgL_arg1981z00_2192);
																											}
																											BgL_arg1977z00_2189 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														5)),
																												BgL_arg1980z00_2191);
																										}
																										{	/* Object/classgen.scm 293 */
																											obj_t BgL_arg1982z00_2193;

																											{	/* Object/classgen.scm 293 */
																												obj_t
																													BgL_arg1983z00_2194;
																												{	/* Object/classgen.scm 293 */
																													obj_t
																														BgL_arg1984z00_2195;
																													obj_t
																														BgL_arg1985z00_2196;
																													BgL_arg1984z00_2195 =
																														(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_gz00_2109)))->BgL_idz00);
																													BgL_arg1985z00_2196 =
																														MAKE_YOUNG_PAIR(((
																																(BgL_globalz00_bglt)
																																COBJECT
																																(BgL_gz00_2109))->
																															BgL_modulez00),
																														BNIL);
																													BgL_arg1983z00_2194 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1984z00_2195,
																														BgL_arg1985z00_2196);
																												}
																												BgL_arg1982z00_2193 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 5)),
																													BgL_arg1983z00_2194);
																											}
																											BgL_arg1979z00_2190 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1982z00_2193,
																												BNIL);
																										}
																										BgL_arg1976z00_2188 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1977z00_2189,
																											BgL_arg1979z00_2190);
																									}
																									BgL_arg1975z00_2187 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1976z00_2188, BNIL);
																								}
																								BgL_arg1974z00_2186 =
																									MAKE_YOUNG_PAIR
																									(BgL_newz00_2111,
																									BgL_arg1975z00_2187);
																							}
																							BgL_arg1972z00_2184 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 23)),
																								BgL_arg1974z00_2186);
																						}
																						{	/* Object/classgen.scm 294 */
																							obj_t BgL_arg1987z00_2198;
																							obj_t BgL_arg1988z00_2199;

																							BgL_arg1987z00_2198 =
																								BGl_initzd2wideningze70z35zzobject_classgenz00
																								(BgL_cz00_12, BgL_newz00_2111);
																							BgL_arg1988z00_2199 =
																								MAKE_YOUNG_PAIR(BgL_newz00_2111,
																								BNIL);
																							BgL_arg1973z00_2185 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1987z00_2198,
																								BgL_arg1988z00_2199);
																						}
																						BgL_arg1967z00_2179 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1972z00_2184,
																							BgL_arg1973z00_2185);
																					}
																					BgL_arg1965z00_2177 =
																						MAKE_YOUNG_PAIR(BgL_arg1966z00_2178,
																						BgL_arg1967z00_2179);
																				}
																				BgL_arg1905z00_2116 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							24)), BgL_arg1965z00_2177);
																			}
																		BgL_arg1904z00_2115 =
																			BGl_unsafeze70ze7zzobject_classgenz00
																			(BgL_cz00_12, BgL_arg1905z00_2116);
																	}
																	BgL_arg1903z00_2114 =
																		MAKE_YOUNG_PAIR(BgL_arg1904z00_2115, BNIL);
																}
																BgL_arg1901z00_2112 =
																	MAKE_YOUNG_PAIR(BgL_arg1902z00_2113,
																	BgL_arg1903z00_2114);
															}
															BgL_val1_1345z00_2072 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1901z00_2112);
												}}}
											else
												{	/* Object/classgen.scm 315 */
													BgL_idz00_2201 = BgL_alloczd2tidzd2_2069;
													BgL_tidz00_2202 = BgL_tidz00_2067;
													BgL_gz00_2203 = BgL_holderz00_2070;
													{	/* Object/classgen.scm 298 */
														obj_t BgL_newz00_2205;

														BgL_newz00_2205 =
															BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
															(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF
																(((long) 15))));
														{	/* Object/classgen.scm 299 */
															obj_t BgL_arg1991z00_2206;

															{	/* Object/classgen.scm 299 */
																obj_t BgL_arg1992z00_2207;
																obj_t BgL_arg1993z00_2208;

																BgL_arg1992z00_2207 =
																	MAKE_YOUNG_PAIR(BgL_idz00_2201, BNIL);
																{	/* Object/classgen.scm 301 */
																	obj_t BgL_arg1995z00_2209;

																	{	/* Object/classgen.scm 301 */
																		obj_t BgL_arg1996z00_2210;

																		{	/* Object/classgen.scm 301 */
																			obj_t BgL_arg1997z00_2211;

																			{	/* Object/classgen.scm 301 */
																				obj_t BgL_arg1998z00_2212;
																				obj_t BgL_arg1999z00_2213;

																				{	/* Object/classgen.scm 301 */
																					obj_t BgL_arg2000z00_2214;

																					{	/* Object/classgen.scm 301 */
																						obj_t BgL_arg2001z00_2215;
																						obj_t BgL_arg2002z00_2216;

																						BgL_arg2001z00_2215 =
																							BGl_makezd2typedzd2identz00zzast_identz00
																							(BgL_newz00_2205,
																							BgL_tidz00_2202);
																						BgL_arg2002z00_2216 =
																							MAKE_YOUNG_PAIR
																							(BGl_makezd2privatezd2sexpz00zzast_privatez00
																							(CNST_TABLE_REF(((long) 15)),
																								BgL_tidz00_2202, BNIL), BNIL);
																						BgL_arg2000z00_2214 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2001z00_2215,
																							BgL_arg2002z00_2216);
																					}
																					BgL_arg1998z00_2212 =
																						MAKE_YOUNG_PAIR(BgL_arg2000z00_2214,
																						BNIL);
																				}
																				{	/* Object/classgen.scm 303 */
																					obj_t BgL_arg2005z00_2219;
																					obj_t BgL_arg2007z00_2220;

																					{	/* Object/classgen.scm 303 */
																						obj_t BgL_arg2008z00_2221;

																						{	/* Object/classgen.scm 303 */
																							obj_t BgL_arg2010z00_2222;

																							{	/* Object/classgen.scm 303 */
																								obj_t BgL_arg2011z00_2223;

																								{	/* Object/classgen.scm 303 */
																									obj_t BgL_arg2012z00_2224;
																									obj_t BgL_arg2013z00_2225;

																									{	/* Object/classgen.scm 303 */
																										obj_t BgL_arg2014z00_2226;

																										{	/* Object/classgen.scm 303 */
																											obj_t BgL_arg2016z00_2227;

																											BgL_arg2016z00_2227 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														3)), BNIL);
																											BgL_arg2014z00_2226 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														22)),
																												BgL_arg2016z00_2227);
																										}
																										BgL_arg2012z00_2224 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													5)),
																											BgL_arg2014z00_2226);
																									}
																									{	/* Object/classgen.scm 304 */
																										obj_t BgL_arg2017z00_2228;

																										{	/* Object/classgen.scm 304 */
																											obj_t BgL_arg2018z00_2229;

																											{	/* Object/classgen.scm 304 */
																												obj_t
																													BgL_arg2020z00_2230;
																												obj_t
																													BgL_arg2021z00_2231;
																												BgL_arg2020z00_2230 =
																													(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_gz00_2203)))->BgL_idz00);
																												BgL_arg2021z00_2231 =
																													MAKE_YOUNG_PAIR(((
																															(BgL_globalz00_bglt)
																															COBJECT
																															(BgL_gz00_2203))->
																														BgL_modulez00),
																													BNIL);
																												BgL_arg2018z00_2229 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2020z00_2230,
																													BgL_arg2021z00_2231);
																											}
																											BgL_arg2017z00_2228 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														5)),
																												BgL_arg2018z00_2229);
																										}
																										BgL_arg2013z00_2225 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2017z00_2228,
																											BNIL);
																									}
																									BgL_arg2011z00_2223 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2012z00_2224,
																										BgL_arg2013z00_2225);
																								}
																								BgL_arg2010z00_2222 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2011z00_2223, BNIL);
																							}
																							BgL_arg2008z00_2221 =
																								MAKE_YOUNG_PAIR(BgL_newz00_2205,
																								BgL_arg2010z00_2222);
																						}
																						BgL_arg2005z00_2219 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 23)),
																							BgL_arg2008z00_2221);
																					}
																					{	/* Object/classgen.scm 305 */
																						obj_t BgL_arg2023z00_2233;
																						obj_t BgL_arg2026z00_2234;

																						BgL_arg2023z00_2233 =
																							BGl_initzd2wideningze70z35zzobject_classgenz00
																							(BgL_cz00_12, BgL_newz00_2205);
																						BgL_arg2026z00_2234 =
																							MAKE_YOUNG_PAIR(BgL_newz00_2205,
																							BNIL);
																						BgL_arg2007z00_2220 =
																							BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																							(BgL_arg2023z00_2233,
																							BgL_arg2026z00_2234);
																					}
																					BgL_arg1999z00_2213 =
																						MAKE_YOUNG_PAIR(BgL_arg2005z00_2219,
																						BgL_arg2007z00_2220);
																				}
																				BgL_arg1997z00_2211 =
																					MAKE_YOUNG_PAIR(BgL_arg1998z00_2212,
																					BgL_arg1999z00_2213);
																			}
																			BgL_arg1996z00_2210 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						24)), BgL_arg1997z00_2211);
																		}
																		BgL_arg1995z00_2209 =
																			BGl_unsafeze70ze7zzobject_classgenz00
																			(BgL_cz00_12, BgL_arg1996z00_2210);
																	}
																	BgL_arg1993z00_2208 =
																		MAKE_YOUNG_PAIR(BgL_arg1995z00_2209, BNIL);
																}
																BgL_arg1991z00_2206 =
																	MAKE_YOUNG_PAIR(BgL_arg1992z00_2207,
																	BgL_arg1993z00_2208);
															}
															BgL_val1_1345z00_2072 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1991z00_2206);
										}}}}
										{	/* Object/classgen.scm 313 */
											int BgL_res2343z00_3024;

											{	/* Object/classgen.scm 313 */
												int BgL_tmpz00_4014;

												BgL_tmpz00_4014 = (int) (((long) 2));
												BgL_res2343z00_3024 =
													BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4014);
											} BgL_res2343z00_3024;
										}
										{	/* Object/classgen.scm 313 */
											int BgL_tmpz00_4017;

											BgL_tmpz00_4017 = (int) (((long) 1));
											BGL_MVALUES_VAL_SET(BgL_tmpz00_4017,
												BgL_val1_1345z00_2072);
										}
										return BgL_val0_1344z00_2071;
									}
								}
							}
						}
					}
				}
			}
		}

	}



/* c-malloc~0 */
	obj_t BGl_czd2mallocze70z35zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_3148, obj_t BgL_tidz00_2085)
	{
		{	/* Object/classgen.scm 263 */
			{	/* Object/classgen.scm 257 */
				obj_t BgL_tnamez00_2087;
				obj_t BgL_siza7eofza7_2088;

				{	/* Object/classgen.scm 257 */
					obj_t BgL_arg1888z00_2097;

					BgL_arg1888z00_2097 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_3148)))->BgL_namez00);
					BgL_tnamez00_2087 =
						BGl_stringzd2sanszd2z42z42zztype_toolsz00(BgL_arg1888z00_2097);
				}
				{	/* Object/classgen.scm 258 */
					bool_t BgL_test2467z00_4023;

					{	/* Object/classgen.scm 258 */
						obj_t BgL_tmpz00_4024;

						BgL_tmpz00_4024 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_cz00_3148)))->BgL_siza7eza7);
						BgL_test2467z00_4023 = STRINGP(BgL_tmpz00_4024);
					}
					if (BgL_test2467z00_4023)
						{	/* Object/classgen.scm 258 */
							BgL_siza7eofza7_2088 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_3148)))->BgL_siza7eza7);
						}
					else
						{	/* Object/classgen.scm 258 */
							BgL_siza7eofza7_2088 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_3148)))->BgL_namez00);
						}
				}
				{	/* Object/classgen.scm 261 */
					obj_t BgL_arg1879z00_2089;
					obj_t BgL_arg1881z00_2090;

					BgL_arg1879z00_2089 =
						BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
								32)), BgL_tidz00_2085);
					{	/* Object/classgen.scm 262 */
						obj_t BgL_arg1882z00_2091;

						{	/* Object/classgen.scm 262 */
							obj_t BgL_list1883z00_2092;

							{	/* Object/classgen.scm 262 */
								obj_t BgL_arg1884z00_2093;

								{	/* Object/classgen.scm 262 */
									obj_t BgL_arg1885z00_2094;

									{	/* Object/classgen.scm 262 */
										obj_t BgL_arg1886z00_2095;

										{	/* Object/classgen.scm 262 */
											obj_t BgL_arg1887z00_2096;

											BgL_arg1887z00_2096 =
												MAKE_YOUNG_PAIR(BGl_string2381z00zzobject_classgenz00,
												BNIL);
											BgL_arg1886z00_2095 =
												MAKE_YOUNG_PAIR(BgL_siza7eofza7_2088,
												BgL_arg1887z00_2096);
										}
										BgL_arg1885z00_2094 =
											MAKE_YOUNG_PAIR(BGl_string2382z00zzobject_classgenz00,
											BgL_arg1886z00_2095);
									}
									BgL_arg1884z00_2093 =
										MAKE_YOUNG_PAIR(BgL_tnamez00_2087, BgL_arg1885z00_2094);
								}
								BgL_list1883z00_2092 =
									MAKE_YOUNG_PAIR(BGl_string2383z00zzobject_classgenz00,
									BgL_arg1884z00_2093);
							}
							BgL_arg1882z00_2091 =
								BGl_stringzd2appendzd2zz__r4_strings_6_7z00
								(BgL_list1883z00_2092);
						}
						BgL_arg1881z00_2090 = MAKE_YOUNG_PAIR(BgL_arg1882z00_2091, BNIL);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1879z00_2089, BgL_arg1881z00_2090);
				}
			}
		}

	}



/* init-widening~0 */
	obj_t BGl_initzd2wideningze70z35zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_3149, obj_t BgL_newz00_2101)
	{
		{	/* Object/classgen.scm 268 */
			if (BGl_finalzd2classzf3z21zzobject_classz00(((obj_t) BgL_cz00_3149)))
				{	/* Object/classgen.scm 267 */
					obj_t BgL_arg1895z00_2104;

					{	/* Object/classgen.scm 267 */
						obj_t BgL_arg1896z00_2105;

						{	/* Object/classgen.scm 267 */
							obj_t BgL_arg1897z00_2106;

							BgL_arg1897z00_2106 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
							BgL_arg1896z00_2105 =
								MAKE_YOUNG_PAIR(BgL_newz00_2101, BgL_arg1897z00_2106);
						}
						BgL_arg1895z00_2104 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 33)), BgL_arg1896z00_2105);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1895z00_2104, BNIL);
				}
			else
				{	/* Object/classgen.scm 266 */
					return BNIL;
				}
		}

	}



/* unsafe~0 */
	obj_t BGl_unsafeze70ze7zzobject_classgenz00(BgL_typez00_bglt BgL_cz00_3150,
		obj_t BgL_exprz00_2080)
	{
		{	/* Object/classgen.scm 254 */
			if ((BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 34))))
				{	/* Object/classgen.scm 251 */
					return BgL_exprz00_2080;
				}
			else
				{	/* Object/classgen.scm 254 */
					obj_t BgL_arg1876z00_2083;

					BgL_arg1876z00_2083 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_3150)))->BgL_idz00);
					{	/* Object/classgen.scm 254 */
						obj_t BgL_list1877z00_2084;

						BgL_list1877z00_2084 = MAKE_YOUNG_PAIR(BgL_exprz00_2080, BNIL);
						return
							BGl_makezd2privatezd2sexpz00zzast_privatez00(CNST_TABLE_REF((
									(long) 35)), BgL_arg1876z00_2083, BgL_list1877z00_2084);
		}}}

	}



/* classgen-allocate-expr */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_13)
	{
		{	/* Object/classgen.scm 322 */
			{	/* Object/classgen.scm 323 */
				obj_t BgL_protoz00_2241;

				BgL_protoz00_2241 =
					BGl_classgenzd2allocatezd2zzobject_classgenz00(BgL_cz00_13);
				{	/* Object/classgen.scm 324 */
					obj_t BgL_defz00_2242;

					{	/* Object/classgen.scm 325 */
						int BgL_tmpz00_4059;

						BgL_tmpz00_4059 = (int) (((long) 1));
						BgL_defz00_2242 = BGL_MVALUES_VAL(BgL_tmpz00_4059);
					}
					if (PAIRP(BgL_defz00_2242))
						{	/* Object/classgen.scm 325 */
							obj_t BgL_cdrzd2190zd2_2247;

							BgL_cdrzd2190zd2_2247 = CDR(BgL_defz00_2242);
							if (PAIRP(BgL_cdrzd2190zd2_2247))
								{	/* Object/classgen.scm 325 */
									obj_t BgL_cdrzd2193zd2_2249;

									BgL_cdrzd2193zd2_2249 = CDR(BgL_cdrzd2190zd2_2247);
									if (PAIRP(BgL_cdrzd2193zd2_2249))
										{	/* Object/classgen.scm 325 */
											if (NULLP(CDR(BgL_cdrzd2193zd2_2249)))
												{	/* Object/classgen.scm 325 */
													return CAR(BgL_cdrzd2193zd2_2249);
												}
											else
												{	/* Object/classgen.scm 325 */
													return BFALSE;
												}
										}
									else
										{	/* Object/classgen.scm 325 */
											return BFALSE;
										}
								}
							else
								{	/* Object/classgen.scm 325 */
									return BFALSE;
								}
						}
					else
						{	/* Object/classgen.scm 325 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &classgen-allocate-expr */
	obj_t BGl_z62classgenzd2allocatezd2exprz62zzobject_classgenz00(obj_t
		BgL_envz00_3131, obj_t BgL_cz00_3132)
	{
		{	/* Object/classgen.scm 322 */
			return
				BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3132));
		}

	}



/* classgen-allocate-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2allocatezd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_14)
	{
		{	/* Object/classgen.scm 332 */
			{	/* Object/classgen.scm 333 */
				obj_t BgL_arg2037z00_2255;
				obj_t BgL_arg2038z00_2256;

				{	/* Object/classgen.scm 333 */
					obj_t BgL_arg2039z00_2257;

					BgL_arg2039z00_2257 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_cz00_14)))->BgL_idz00);
					BgL_arg2037z00_2255 =
						BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF(((long)
								12)), BgL_arg2039z00_2257);
				}
				{	/* Object/classgen.scm 333 */
					obj_t BgL_arg2040z00_2258;

					BgL_arg2040z00_2258 =
						MAKE_YOUNG_PAIR
						(BGl_classgenzd2allocatezd2exprz00zzobject_classgenz00(BgL_cz00_14),
						BNIL);
					BgL_arg2038z00_2256 = MAKE_YOUNG_PAIR(BNIL, BgL_arg2040z00_2258);
				}
				return MAKE_YOUNG_PAIR(BgL_arg2037z00_2255, BgL_arg2038z00_2256);
			}
		}

	}



/* &classgen-allocate-anonymous */
	obj_t BGl_z62classgenzd2allocatezd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3133, obj_t BgL_cz00_3134)
	{
		{	/* Object/classgen.scm 332 */
			return
				BGl_classgenzd2allocatezd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3134));
		}

	}



/* classgen-widen-expr */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2widenzd2exprz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_15, obj_t BgL_oz00_16)
	{
		{	/* Object/classgen.scm 338 */
			{
				obj_t BgL_exprz00_2333;
				obj_t BgL_wz00_2312;

				{	/* Object/classgen.scm 358 */
					obj_t BgL_wz00_2263;

					{
						BgL_tclassz00_bglt BgL_auxz00_4086;

						{
							obj_t BgL_auxz00_4087;

							{	/* Object/classgen.scm 358 */
								BgL_objectz00_bglt BgL_tmpz00_4088;

								BgL_tmpz00_4088 = ((BgL_objectz00_bglt) BgL_cz00_15);
								BgL_auxz00_4087 = BGL_OBJECT_WIDENING(BgL_tmpz00_4088);
							}
							BgL_auxz00_4086 = ((BgL_tclassz00_bglt) BgL_auxz00_4087);
						}
						BgL_wz00_2263 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4086))->
							BgL_widezd2typezd2);
					}
					{	/* Object/classgen.scm 358 */
						obj_t BgL_sz00_2264;

						{
							BgL_tclassz00_bglt BgL_auxz00_4093;

							{
								obj_t BgL_auxz00_4094;

								{	/* Object/classgen.scm 359 */
									BgL_objectz00_bglt BgL_tmpz00_4095;

									BgL_tmpz00_4095 = ((BgL_objectz00_bglt) BgL_cz00_15);
									BgL_auxz00_4094 = BGL_OBJECT_WIDENING(BgL_tmpz00_4095);
								}
								BgL_auxz00_4093 = ((BgL_tclassz00_bglt) BgL_auxz00_4094);
							}
							BgL_sz00_2264 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4093))->
								BgL_itszd2superzd2);
						}
						{	/* Object/classgen.scm 359 */
							obj_t BgL_widz00_2265;

							BgL_widz00_2265 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_wz00_2263)))->BgL_idz00);
							{	/* Object/classgen.scm 360 */
								obj_t BgL_sidz00_2266;

								BgL_sidz00_2266 =
									(((BgL_typez00_bglt) COBJECT(
											((BgL_typez00_bglt) BgL_sz00_2264)))->BgL_idz00);
								{	/* Object/classgen.scm 361 */
									obj_t BgL_tmpz00_2267;

									BgL_tmpz00_2267 =
										BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
										(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long)
													36))));
									{	/* Object/classgen.scm 362 */
										obj_t BgL_ttmpz00_2268;

										BgL_ttmpz00_2268 =
											BGl_makezd2typedzd2identz00zzast_identz00(BgL_tmpz00_2267,
											BgL_sidz00_2266);
										{	/* Object/classgen.scm 363 */
											obj_t BgL_widez00_2269;

											BgL_widez00_2269 =
												BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
												(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF((
															(long) 37))));
											{	/* Object/classgen.scm 364 */
												obj_t BgL_twidez00_2270;

												BgL_twidez00_2270 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_widez00_2269, BgL_widz00_2265);
												{	/* Object/classgen.scm 365 */
													BgL_globalz00_bglt BgL_holderz00_2271;

													{
														BgL_tclassz00_bglt BgL_auxz00_4112;

														{
															obj_t BgL_auxz00_4113;

															{	/* Object/classgen.scm 366 */
																BgL_objectz00_bglt BgL_tmpz00_4114;

																BgL_tmpz00_4114 =
																	((BgL_objectz00_bglt) BgL_cz00_15);
																BgL_auxz00_4113 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_4114);
															}
															BgL_auxz00_4112 =
																((BgL_tclassz00_bglt) BgL_auxz00_4113);
														}
														BgL_holderz00_2271 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4112))->
															BgL_holderz00);
													}
													{	/* Object/classgen.scm 366 */

														{	/* Object/classgen.scm 367 */
															obj_t BgL_arg2043z00_2272;

															{	/* Object/classgen.scm 367 */
																obj_t BgL_arg2044z00_2273;
																obj_t BgL_arg2045z00_2274;

																{	/* Object/classgen.scm 367 */
																	obj_t BgL_arg2046z00_2275;
																	obj_t BgL_arg2047z00_2276;

																	{	/* Object/classgen.scm 367 */
																		obj_t BgL_arg2048z00_2277;

																		{	/* Object/classgen.scm 367 */
																			obj_t BgL_arg2049z00_2278;

																			{	/* Object/classgen.scm 367 */
																				obj_t BgL_list2050z00_2279;

																				BgL_list2050z00_2279 =
																					MAKE_YOUNG_PAIR(BgL_oz00_16, BNIL);
																				BgL_arg2049z00_2278 =
																					BGl_makezd2privatezd2sexpz00zzast_privatez00
																					(CNST_TABLE_REF(((long) 38)),
																					BgL_sidz00_2266,
																					BgL_list2050z00_2279);
																			}
																			BgL_arg2048z00_2277 =
																				MAKE_YOUNG_PAIR(BgL_arg2049z00_2278,
																				BNIL);
																		}
																		BgL_arg2046z00_2275 =
																			MAKE_YOUNG_PAIR(BgL_ttmpz00_2268,
																			BgL_arg2048z00_2277);
																	}
																	{	/* Object/classgen.scm 368 */
																		obj_t BgL_arg2051z00_2280;

																		{	/* Object/classgen.scm 368 */
																			obj_t BgL_arg2053z00_2281;

																			{	/* Object/classgen.scm 368 */
																				obj_t BgL_arg2055z00_2282;

																				{	/* Object/classgen.scm 368 */
																					bool_t BgL_test2474z00_4124;

																					{	/* Object/classgen.scm 368 */
																						obj_t BgL_arg2059z00_2285;

																						BgL_arg2059z00_2285 =
																							BGl_thezd2backendzd2zzbackend_backendz00
																							();
																						BgL_test2474z00_4124 =
																							(((BgL_backendz00_bglt)
																								COBJECT(((BgL_backendz00_bglt)
																										BgL_arg2059z00_2285)))->
																							BgL_pragmazd2supportzd2);
																					}
																					if (BgL_test2474z00_4124)
																						{	/* Object/classgen.scm 368 */
																							BgL_wz00_2312 = BgL_wz00_2263;
																							{	/* Object/classgen.scm 341 */
																								obj_t BgL_tnamez00_2314;
																								obj_t BgL_siza7eofza7_2315;

																								{	/* Object/classgen.scm 341 */
																									obj_t BgL_arg2101z00_2325;

																									BgL_arg2101z00_2325 =
																										(((BgL_typez00_bglt)
																											COBJECT((
																													(BgL_typez00_bglt)
																													BgL_wz00_2312)))->
																										BgL_namez00);
																									BgL_tnamez00_2314 =
																										BGl_stringzd2sanszd2z42z42zztype_toolsz00
																										(BgL_arg2101z00_2325);
																								}
																								{	/* Object/classgen.scm 342 */
																									bool_t BgL_test2475z00_4131;

																									{	/* Object/classgen.scm 342 */
																										obj_t BgL_tmpz00_4132;

																										BgL_tmpz00_4132 =
																											(((BgL_typez00_bglt)
																												COBJECT((
																														(BgL_typez00_bglt)
																														BgL_wz00_2312)))->
																											BgL_siza7eza7);
																										BgL_test2475z00_4131 =
																											STRINGP(BgL_tmpz00_4132);
																									}
																									if (BgL_test2475z00_4131)
																										{	/* Object/classgen.scm 342 */
																											BgL_siza7eofza7_2315 =
																												(((BgL_typez00_bglt)
																													COBJECT((
																															(BgL_typez00_bglt)
																															BgL_wz00_2312)))->
																												BgL_siza7eza7);
																										}
																									else
																										{	/* Object/classgen.scm 342 */
																											BgL_siza7eofza7_2315 =
																												(((BgL_typez00_bglt)
																													COBJECT((
																															(BgL_typez00_bglt)
																															BgL_wz00_2312)))->
																												BgL_namez00);
																										}
																								}
																								{	/* Object/classgen.scm 345 */
																									obj_t BgL_arg2091z00_2316;
																									obj_t BgL_arg2092z00_2317;

																									{	/* Object/classgen.scm 345 */
																										obj_t BgL_arg2093z00_2318;

																										BgL_arg2093z00_2318 =
																											(((BgL_typez00_bglt)
																												COBJECT((
																														(BgL_typez00_bglt)
																														BgL_wz00_2312)))->
																											BgL_idz00);
																										BgL_arg2091z00_2316 =
																											BGl_makezd2typedzd2identz00zzast_identz00
																											(CNST_TABLE_REF(((long)
																													32)),
																											BgL_arg2093z00_2318);
																									}
																									{	/* Object/classgen.scm 346 */
																										obj_t BgL_arg2094z00_2319;

																										{	/* Object/classgen.scm 346 */
																											obj_t
																												BgL_list2095z00_2320;
																											{	/* Object/classgen.scm 346 */
																												obj_t
																													BgL_arg2096z00_2321;
																												{	/* Object/classgen.scm 346 */
																													obj_t
																														BgL_arg2097z00_2322;
																													{	/* Object/classgen.scm 346 */
																														obj_t
																															BgL_arg2098z00_2323;
																														{	/* Object/classgen.scm 346 */
																															obj_t
																																BgL_arg2100z00_2324;
																															BgL_arg2100z00_2324
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string2381z00zzobject_classgenz00,
																																BNIL);
																															BgL_arg2098z00_2323
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_siza7eofza7_2315,
																																BgL_arg2100z00_2324);
																														}
																														BgL_arg2097z00_2322
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string2382z00zzobject_classgenz00,
																															BgL_arg2098z00_2323);
																													}
																													BgL_arg2096z00_2321 =
																														MAKE_YOUNG_PAIR
																														(BgL_tnamez00_2314,
																														BgL_arg2097z00_2322);
																												}
																												BgL_list2095z00_2320 =
																													MAKE_YOUNG_PAIR
																													(BGl_string2383z00zzobject_classgenz00,
																													BgL_arg2096z00_2321);
																											}
																											BgL_arg2094z00_2319 =
																												BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																												(BgL_list2095z00_2320);
																										}
																										BgL_arg2092z00_2317 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2094z00_2319,
																											BNIL);
																									}
																									BgL_arg2055z00_2282 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2091z00_2316,
																										BgL_arg2092z00_2317);
																						}}}
																					else
																						{	/* Object/classgen.scm 350 */
																							obj_t BgL_arg2106z00_3055;

																							BgL_arg2106z00_3055 =
																								(((BgL_typez00_bglt) COBJECT(
																										((BgL_typez00_bglt)
																											BgL_wz00_2263)))->
																								BgL_idz00);
																							BgL_arg2055z00_2282 =
																								BGl_makezd2privatezd2sexpz00zzast_privatez00
																								(CNST_TABLE_REF(((long) 15)),
																								BgL_arg2106z00_3055, BNIL);
																				}}
																				BgL_arg2053z00_2281 =
																					MAKE_YOUNG_PAIR(BgL_arg2055z00_2282,
																					BNIL);
																			}
																			BgL_arg2051z00_2280 =
																				MAKE_YOUNG_PAIR(BgL_twidez00_2270,
																				BgL_arg2053z00_2281);
																		}
																		BgL_arg2047z00_2276 =
																			MAKE_YOUNG_PAIR(BgL_arg2051z00_2280,
																			BNIL);
																	}
																	BgL_arg2044z00_2273 =
																		MAKE_YOUNG_PAIR(BgL_arg2046z00_2275,
																		BgL_arg2047z00_2276);
																}
																{	/* Object/classgen.scm 373 */
																	obj_t BgL_arg2060z00_2286;

																	{	/* Object/classgen.scm 373 */
																		obj_t BgL_arg2061z00_2287;

																		{	/* Object/classgen.scm 373 */
																			obj_t BgL_arg2062z00_2288;

																			{	/* Object/classgen.scm 373 */
																				obj_t BgL_arg2063z00_2289;
																				obj_t BgL_arg2065z00_2290;

																				{	/* Object/classgen.scm 373 */
																					obj_t BgL_arg2066z00_2291;

																					{	/* Object/classgen.scm 373 */
																						obj_t BgL_arg2068z00_2292;

																						BgL_arg2068z00_2292 =
																							MAKE_YOUNG_PAIR(BgL_widez00_2269,
																							BNIL);
																						BgL_arg2066z00_2291 =
																							MAKE_YOUNG_PAIR(BgL_tmpz00_2267,
																							BgL_arg2068z00_2292);
																					}
																					BgL_arg2063z00_2289 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 33)),
																						BgL_arg2066z00_2291);
																				}
																				{	/* Object/classgen.scm 374 */
																					obj_t BgL_arg2069z00_2293;
																					obj_t BgL_arg2070z00_2294;

																					{	/* Object/classgen.scm 374 */
																						obj_t BgL_arg2071z00_2295;
																						obj_t BgL_arg2072z00_2296;

																						{	/* Object/classgen.scm 374 */
																							obj_t BgL_arg2075z00_2297;

																							{	/* Object/classgen.scm 374 */
																								obj_t BgL_arg2076z00_2298;

																								BgL_arg2076z00_2298 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 3)), BNIL);
																								BgL_arg2075z00_2297 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 23)),
																									BgL_arg2076z00_2298);
																							}
																							BgL_arg2071z00_2295 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 5)),
																								BgL_arg2075z00_2297);
																						}
																						{	/* Object/classgen.scm 376 */
																							obj_t BgL_arg2077z00_2299;

																							{	/* Object/classgen.scm 376 */
																								obj_t BgL_arg2078z00_2300;

																								{	/* Object/classgen.scm 376 */
																									obj_t BgL_arg2079z00_2301;
																									obj_t BgL_arg2080z00_2302;

																									{	/* Object/classgen.scm 376 */
																										obj_t BgL_arg2081z00_2303;

																										{	/* Object/classgen.scm 376 */
																											obj_t BgL_arg2082z00_2304;

																											BgL_arg2082z00_2304 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														3)), BNIL);
																											BgL_arg2081z00_2303 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														22)),
																												BgL_arg2082z00_2304);
																										}
																										BgL_arg2079z00_2301 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													5)),
																											BgL_arg2081z00_2303);
																									}
																									{	/* Object/classgen.scm 377 */
																										obj_t BgL_arg2083z00_2305;

																										{	/* Object/classgen.scm 377 */
																											obj_t BgL_arg2084z00_2306;

																											{	/* Object/classgen.scm 377 */
																												obj_t
																													BgL_arg2085z00_2307;
																												obj_t
																													BgL_arg2086z00_2308;
																												BgL_arg2085z00_2307 =
																													(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) BgL_holderz00_2271)))->BgL_idz00);
																												BgL_arg2086z00_2308 =
																													MAKE_YOUNG_PAIR(((
																															(BgL_globalz00_bglt)
																															COBJECT
																															(BgL_holderz00_2271))->
																														BgL_modulez00),
																													BNIL);
																												BgL_arg2084z00_2306 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg2085z00_2307,
																													BgL_arg2086z00_2308);
																											}
																											BgL_arg2083z00_2305 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														5)),
																												BgL_arg2084z00_2306);
																										}
																										BgL_arg2080z00_2302 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg2083z00_2305,
																											BNIL);
																									}
																									BgL_arg2078z00_2300 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2079z00_2301,
																										BgL_arg2080z00_2302);
																								}
																								BgL_arg2077z00_2299 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2078z00_2300, BNIL);
																							}
																							BgL_arg2072z00_2296 =
																								MAKE_YOUNG_PAIR(BgL_tmpz00_2267,
																								BgL_arg2077z00_2299);
																						}
																						BgL_arg2069z00_2293 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2071z00_2295,
																							BgL_arg2072z00_2296);
																					}
																					BgL_arg2070z00_2294 =
																						MAKE_YOUNG_PAIR(BgL_tmpz00_2267,
																						BNIL);
																					BgL_arg2065z00_2290 =
																						MAKE_YOUNG_PAIR(BgL_arg2069z00_2293,
																						BgL_arg2070z00_2294);
																				}
																				BgL_arg2062z00_2288 =
																					MAKE_YOUNG_PAIR(BgL_arg2063z00_2289,
																					BgL_arg2065z00_2290);
																			}
																			BgL_arg2061z00_2287 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						39)), BgL_arg2062z00_2288);
																		}
																		BgL_exprz00_2333 = BgL_arg2061z00_2287;
																		if (
																			(BGl_za2passza2z00zzengine_paramz00 ==
																				CNST_TABLE_REF(((long) 34))))
																			{	/* Object/classgen.scm 353 */
																				BgL_arg2060z00_2286 = BgL_exprz00_2333;
																			}
																		else
																			{	/* Object/classgen.scm 356 */
																				obj_t BgL_arg2110z00_2336;

																				BgL_arg2110z00_2336 =
																					(((BgL_typez00_bglt) COBJECT(
																							((BgL_typez00_bglt)
																								BgL_cz00_15)))->BgL_idz00);
																				{	/* Object/classgen.scm 356 */
																					obj_t BgL_list2111z00_2337;

																					BgL_list2111z00_2337 =
																						MAKE_YOUNG_PAIR(BgL_exprz00_2333,
																						BNIL);
																					BgL_arg2060z00_2286 =
																						BGl_makezd2privatezd2sexpz00zzast_privatez00
																						(CNST_TABLE_REF(((long) 35)),
																						BgL_arg2110z00_2336,
																						BgL_list2111z00_2337);
																	}}}
																	BgL_arg2045z00_2274 =
																		MAKE_YOUNG_PAIR(BgL_arg2060z00_2286, BNIL);
																}
																BgL_arg2043z00_2272 =
																	MAKE_YOUNG_PAIR(BgL_arg2044z00_2273,
																	BgL_arg2045z00_2274);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
																BgL_arg2043z00_2272);
		}}}}}}}}}}}}}

	}



/* &classgen-widen-expr */
	obj_t BGl_z62classgenzd2widenzd2exprz62zzobject_classgenz00(obj_t
		BgL_envz00_3135, obj_t BgL_cz00_3136, obj_t BgL_oz00_3137)
	{
		{	/* Object/classgen.scm 338 */
			return
				BGl_classgenzd2widenzd2exprz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3136), BgL_oz00_3137);
		}

	}



/* classgen-widen-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2widenzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_17)
	{
		{	/* Object/classgen.scm 383 */
			{	/* Object/classgen.scm 384 */
				obj_t BgL_sz00_2341;

				{
					BgL_tclassz00_bglt BgL_auxz00_4207;

					{
						obj_t BgL_auxz00_4208;

						{	/* Object/classgen.scm 384 */
							BgL_objectz00_bglt BgL_tmpz00_4209;

							BgL_tmpz00_4209 = ((BgL_objectz00_bglt) BgL_cz00_17);
							BgL_auxz00_4208 = BGL_OBJECT_WIDENING(BgL_tmpz00_4209);
						}
						BgL_auxz00_4207 = ((BgL_tclassz00_bglt) BgL_auxz00_4208);
					}
					BgL_sz00_2341 =
						(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4207))->
						BgL_itszd2superzd2);
				}
				{	/* Object/classgen.scm 384 */
					obj_t BgL_sidz00_2342;

					BgL_sidz00_2342 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_sz00_2341)))->BgL_idz00);
					{	/* Object/classgen.scm 385 */
						obj_t BgL_cidz00_2343;

						BgL_cidz00_2343 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_cz00_17)))->BgL_idz00);
						{	/* Object/classgen.scm 386 */
							obj_t BgL_oz00_2344;

							BgL_oz00_2344 =
								BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 40)));
							{	/* Object/classgen.scm 387 */
								obj_t BgL_toz00_2345;

								BgL_toz00_2345 =
									BGl_makezd2typedzd2identz00zzast_identz00(BgL_oz00_2344,
									BgL_sidz00_2342);
								{	/* Object/classgen.scm 388 */
									obj_t BgL_lamz00_2346;

									BgL_lamz00_2346 =
										BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
												(long) 12)), BgL_cidz00_2343);
									{	/* Object/classgen.scm 389 */

										{	/* Object/classgen.scm 390 */
											obj_t BgL_arg2112z00_2347;

											{	/* Object/classgen.scm 390 */
												obj_t BgL_arg2114z00_2348;
												obj_t BgL_arg2115z00_2349;

												BgL_arg2114z00_2348 =
													MAKE_YOUNG_PAIR(BgL_toz00_2345, BNIL);
												BgL_arg2115z00_2349 =
													MAKE_YOUNG_PAIR
													(BGl_classgenzd2widenzd2exprz00zzobject_classgenz00
													(BgL_cz00_17, BgL_oz00_2344), BNIL);
												BgL_arg2112z00_2347 =
													MAKE_YOUNG_PAIR(BgL_arg2114z00_2348,
													BgL_arg2115z00_2349);
											}
											return
												MAKE_YOUNG_PAIR(BgL_lamz00_2346, BgL_arg2112z00_2347);
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



/* &classgen-widen-anonymous */
	obj_t BGl_z62classgenzd2widenzd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3138, obj_t BgL_cz00_3139)
	{
		{	/* Object/classgen.scm 383 */
			return
				BGl_classgenzd2widenzd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3139));
		}

	}



/* classgen-shrink-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2shrinkzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_cz00_18)
	{
		{	/* Object/classgen.scm 395 */
			{	/* Object/classgen.scm 396 */
				obj_t BgL_oz00_2351;

				BgL_oz00_2351 =
					BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 40)));
				{	/* Object/classgen.scm 396 */
					obj_t BgL_toz00_2352;

					{	/* Object/classgen.scm 397 */
						obj_t BgL_arg2125z00_2362;

						BgL_arg2125z00_2362 =
							(((BgL_typez00_bglt) COBJECT(
									((BgL_typez00_bglt) BgL_cz00_18)))->BgL_idz00);
						BgL_toz00_2352 =
							BGl_makezd2typedzd2identz00zzast_identz00(BgL_oz00_2351,
							BgL_arg2125z00_2362);
					}
					{	/* Object/classgen.scm 397 */
						obj_t BgL_superz00_2353;

						{
							BgL_tclassz00_bglt BgL_auxz00_4235;

							{
								obj_t BgL_auxz00_4236;

								{	/* Object/classgen.scm 398 */
									BgL_objectz00_bglt BgL_tmpz00_4237;

									BgL_tmpz00_4237 = ((BgL_objectz00_bglt) BgL_cz00_18);
									BgL_auxz00_4236 = BGL_OBJECT_WIDENING(BgL_tmpz00_4237);
								}
								BgL_auxz00_4235 = ((BgL_tclassz00_bglt) BgL_auxz00_4236);
							}
							BgL_superz00_2353 =
								(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4235))->
								BgL_itszd2superzd2);
						}
						{	/* Object/classgen.scm 398 */
							obj_t BgL_sidz00_2354;

							BgL_sidz00_2354 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_superz00_2353)))->BgL_idz00);
							{	/* Object/classgen.scm 399 */

								{	/* Object/classgen.scm 400 */
									obj_t BgL_arg2117z00_2355;
									obj_t BgL_arg2118z00_2356;

									BgL_arg2117z00_2355 =
										BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
												(long) 12)), BgL_sidz00_2354);
									{	/* Object/classgen.scm 401 */
										obj_t BgL_arg2119z00_2357;
										obj_t BgL_arg2120z00_2358;

										BgL_arg2119z00_2357 = MAKE_YOUNG_PAIR(BgL_toz00_2352, BNIL);
										{	/* Object/classgen.scm 402 */
											obj_t BgL_arg2121z00_2359;

											{	/* Object/classgen.scm 402 */
												obj_t BgL_arg2122z00_2360;
												obj_t BgL_arg2123z00_2361;

												BgL_arg2122z00_2360 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(CNST_TABLE_REF(((long) 41)), BgL_sidz00_2354);
												BgL_arg2123z00_2361 =
													MAKE_YOUNG_PAIR(BgL_oz00_2351, BNIL);
												BgL_arg2121z00_2359 =
													MAKE_YOUNG_PAIR(BgL_arg2122z00_2360,
													BgL_arg2123z00_2361);
											}
											BgL_arg2120z00_2358 =
												MAKE_YOUNG_PAIR(BgL_arg2121z00_2359, BNIL);
										}
										BgL_arg2118z00_2356 =
											MAKE_YOUNG_PAIR(BgL_arg2119z00_2357, BgL_arg2120z00_2358);
									}
									return
										MAKE_YOUNG_PAIR(BgL_arg2117z00_2355, BgL_arg2118z00_2356);
								}
							}
						}
					}
				}
			}
		}

	}



/* &classgen-shrink-anonymous */
	obj_t BGl_z62classgenzd2shrinkzd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3140, obj_t BgL_cz00_3141)
	{
		{	/* Object/classgen.scm 395 */
			return
				BGl_classgenzd2shrinkzd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_cz00_3141));
		}

	}



/* classgen-accessors */
	obj_t BGl_classgenzd2accessorszd2zzobject_classgenz00(obj_t BgL_cz00_19)
	{
		{	/* Object/classgen.scm 407 */
			{	/* Object/classgen.scm 408 */
				obj_t BgL_protosz00_2363;
				obj_t BgL_defsz00_2364;

				BgL_protosz00_2363 = BNIL;
				BgL_defsz00_2364 = BNIL;
				{	/* Object/classgen.scm 410 */
					obj_t BgL_g1348z00_2365;

					{
						BgL_tclassz00_bglt BgL_auxz00_4256;

						{
							obj_t BgL_auxz00_4257;

							{	/* Object/classgen.scm 420 */
								BgL_objectz00_bglt BgL_tmpz00_4258;

								BgL_tmpz00_4258 =
									((BgL_objectz00_bglt) ((BgL_typez00_bglt) BgL_cz00_19));
								BgL_auxz00_4257 = BGL_OBJECT_WIDENING(BgL_tmpz00_4258);
							}
							BgL_auxz00_4256 = ((BgL_tclassz00_bglt) BgL_auxz00_4257);
						}
						BgL_g1348z00_2365 =
							(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_4256))->BgL_slotsz00);
					}
					{
						obj_t BgL_l1346z00_2367;

						BgL_l1346z00_2367 = BgL_g1348z00_2365;
					BgL_zc3z04anonymousza32126ze3z87_2368:
						if (PAIRP(BgL_l1346z00_2367))
							{	/* Object/classgen.scm 420 */
								{	/* Object/classgen.scm 411 */
									obj_t BgL_sz00_2370;

									BgL_sz00_2370 = CAR(BgL_l1346z00_2367);
									{	/* Object/classgen.scm 411 */
										obj_t BgL_pz00_2371;

										BgL_pz00_2371 =
											BGl_classgenzd2slotzd2zzobject_classgenz00(BgL_cz00_19,
											BgL_sz00_2370);
										{	/* Object/classgen.scm 412 */
											obj_t BgL_dz00_2372;

											{	/* Object/classgen.scm 413 */
												int BgL_tmpz00_4268;

												BgL_tmpz00_4268 = (int) (((long) 1));
												BgL_dz00_2372 = BGL_MVALUES_VAL(BgL_tmpz00_4268);
											}
											if (
												(((BgL_slotz00_bglt) COBJECT(
															((BgL_slotz00_bglt) BgL_sz00_2370)))->
													BgL_readzd2onlyzf3z21))
												{	/* Object/classgen.scm 413 */
													{	/* Object/classgen.scm 415 */
														obj_t BgL_arg2129z00_2374;

														BgL_arg2129z00_2374 = CAR(((obj_t) BgL_pz00_2371));
														BgL_protosz00_2363 =
															MAKE_YOUNG_PAIR(BgL_arg2129z00_2374,
															BgL_protosz00_2363);
													}
													BgL_defsz00_2364 =
														BGl_appendzd221011zd2zzobject_classgenz00
														(BgL_dz00_2372, BgL_defsz00_2364);
												}
											else
												{	/* Object/classgen.scm 413 */
													BgL_protosz00_2363 =
														BGl_appendzd221011zd2zzobject_classgenz00
														(BgL_pz00_2371, BgL_protosz00_2363);
													BgL_defsz00_2364 =
														BGl_appendzd221011zd2zzobject_classgenz00
														(BgL_dz00_2372, BgL_defsz00_2364);
												}
										}
									}
								}
								{
									obj_t BgL_l1346z00_4280;

									BgL_l1346z00_4280 = CDR(BgL_l1346z00_2367);
									BgL_l1346z00_2367 = BgL_l1346z00_4280;
									goto BgL_zc3z04anonymousza32126ze3z87_2368;
								}
							}
						else
							{	/* Object/classgen.scm 420 */
								((bool_t) 1);
							}
					}
				}
				{	/* Object/classgen.scm 421 */
					obj_t BgL_val0_1349z00_2377;
					obj_t BgL_val1_1350z00_2378;

					BgL_val0_1349z00_2377 = BgL_protosz00_2363;
					BgL_val1_1350z00_2378 = BgL_defsz00_2364;
					{	/* Object/classgen.scm 421 */
						int BgL_res2351z00_3075;

						{	/* Object/classgen.scm 421 */
							int BgL_tmpz00_4282;

							BgL_tmpz00_4282 = (int) (((long) 2));
							BgL_res2351z00_3075 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4282);
						} BgL_res2351z00_3075;
					}
					{	/* Object/classgen.scm 421 */
						int BgL_tmpz00_4285;

						BgL_tmpz00_4285 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_4285, BgL_val1_1350z00_2378);
					}
					return BgL_val0_1349z00_2377;
				}
			}
		}

	}



/* classgen-slot */
	obj_t BGl_classgenzd2slotzd2zzobject_classgenz00(obj_t BgL_cz00_20,
		obj_t BgL_sz00_21)
	{
		{	/* Object/classgen.scm 426 */
			{
				obj_t BgL_sz00_2443;
				obj_t BgL_sz00_2426;
				obj_t BgL_sz00_2410;
				obj_t BgL_sz00_2396;

				{	/* Object/classgen.scm 460 */
					obj_t BgL_val0_1351z00_2383;
					obj_t BgL_val1_1352z00_2384;

					{	/* Object/classgen.scm 460 */
						obj_t BgL_arg2131z00_2385;
						obj_t BgL_arg2132z00_2386;

						BgL_sz00_2396 = BgL_sz00_21;
						{	/* Object/classgen.scm 429 */
							obj_t BgL_tidz00_2398;

							BgL_tidz00_2398 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_20)))->BgL_idz00);
							{	/* Object/classgen.scm 429 */
								obj_t BgL_idz00_2399;

								{	/* Object/classgen.scm 430 */
									obj_t BgL_arg2146z00_2406;

									BgL_arg2146z00_2406 =
										(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt) BgL_sz00_2396)))->BgL_idz00);
									{	/* Object/classgen.scm 430 */
										obj_t BgL_list2147z00_2407;

										{	/* Object/classgen.scm 430 */
											obj_t BgL_arg2148z00_2408;

											{	/* Object/classgen.scm 430 */
												obj_t BgL_arg2149z00_2409;

												BgL_arg2149z00_2409 =
													MAKE_YOUNG_PAIR(BgL_arg2146z00_2406, BNIL);
												BgL_arg2148z00_2408 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 42)),
													BgL_arg2149z00_2409);
											}
											BgL_list2147z00_2407 =
												MAKE_YOUNG_PAIR(BgL_tidz00_2398, BgL_arg2148z00_2408);
										}
										BgL_idz00_2399 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2147z00_2407);
								}}
								{	/* Object/classgen.scm 430 */
									obj_t BgL_gidz00_2400;

									{	/* Object/classgen.scm 431 */
										obj_t BgL_arg2144z00_2404;

										BgL_arg2144z00_2404 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt)
														(((BgL_slotz00_bglt) COBJECT(
																	((BgL_slotz00_bglt) BgL_sz00_2396)))->
															BgL_typez00))))->BgL_idz00);
										BgL_gidz00_2400 =
											BGl_makezd2typedzd2identz00zzast_identz00(BgL_idz00_2399,
											BgL_arg2144z00_2404);
									}
									{	/* Object/classgen.scm 431 */
										obj_t BgL_oz00_2401;

										BgL_oz00_2401 =
											BGl_makezd2typedzd2formalz00zzast_identz00
											(BgL_tidz00_2398);
										{	/* Object/classgen.scm 432 */

											{	/* Object/classgen.scm 433 */
												obj_t BgL_arg2142z00_2402;

												{	/* Object/classgen.scm 433 */
													obj_t BgL_arg2143z00_2403;

													BgL_arg2143z00_2403 =
														MAKE_YOUNG_PAIR(BgL_oz00_2401, BNIL);
													BgL_arg2142z00_2402 =
														MAKE_YOUNG_PAIR(BgL_gidz00_2400,
														BgL_arg2143z00_2403);
												}
												BgL_arg2131z00_2385 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
													BgL_arg2142z00_2402);
						}}}}}}
						BgL_sz00_2410 = BgL_sz00_21;
						{	/* Object/classgen.scm 436 */
							obj_t BgL_tidz00_2412;

							BgL_tidz00_2412 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_20)))->BgL_idz00);
							{	/* Object/classgen.scm 436 */
								obj_t BgL_idz00_2413;

								{	/* Object/classgen.scm 437 */
									obj_t BgL_arg2157z00_2421;

									BgL_arg2157z00_2421 =
										(((BgL_slotz00_bglt) COBJECT(
												((BgL_slotz00_bglt) BgL_sz00_2410)))->BgL_idz00);
									{	/* Object/classgen.scm 437 */
										obj_t BgL_list2158z00_2422;

										{	/* Object/classgen.scm 437 */
											obj_t BgL_arg2159z00_2423;

											{	/* Object/classgen.scm 437 */
												obj_t BgL_arg2160z00_2424;

												{	/* Object/classgen.scm 437 */
													obj_t BgL_arg2161z00_2425;

													BgL_arg2161z00_2425 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 43)), BNIL);
													BgL_arg2160z00_2424 =
														MAKE_YOUNG_PAIR(BgL_arg2157z00_2421,
														BgL_arg2161z00_2425);
												}
												BgL_arg2159z00_2423 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 42)),
													BgL_arg2160z00_2424);
											}
											BgL_list2158z00_2422 =
												MAKE_YOUNG_PAIR(BgL_tidz00_2412, BgL_arg2159z00_2423);
										}
										BgL_idz00_2413 =
											BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
											(BgL_list2158z00_2422);
								}}
								{	/* Object/classgen.scm 437 */
									obj_t BgL_oz00_2414;

									BgL_oz00_2414 =
										BGl_makezd2typedzd2formalz00zzast_identz00(BgL_tidz00_2412);
									{	/* Object/classgen.scm 438 */
										obj_t BgL_vz00_2415;

										{	/* Object/classgen.scm 439 */
											obj_t BgL_arg2155z00_2419;

											BgL_arg2155z00_2419 =
												(((BgL_typez00_bglt) COBJECT(
														((BgL_typez00_bglt)
															(((BgL_slotz00_bglt) COBJECT(
																		((BgL_slotz00_bglt) BgL_sz00_2410)))->
																BgL_typez00))))->BgL_idz00);
											BgL_vz00_2415 =
												BGl_makezd2typedzd2formalz00zzast_identz00
												(BgL_arg2155z00_2419);
										}
										{	/* Object/classgen.scm 439 */

											{	/* Object/classgen.scm 440 */
												obj_t BgL_arg2152z00_2416;

												{	/* Object/classgen.scm 440 */
													obj_t BgL_arg2153z00_2417;

													{	/* Object/classgen.scm 440 */
														obj_t BgL_arg2154z00_2418;

														BgL_arg2154z00_2418 =
															MAKE_YOUNG_PAIR(BgL_vz00_2415, BNIL);
														BgL_arg2153z00_2417 =
															MAKE_YOUNG_PAIR(BgL_oz00_2414,
															BgL_arg2154z00_2418);
													}
													BgL_arg2152z00_2416 =
														MAKE_YOUNG_PAIR(BgL_idz00_2413,
														BgL_arg2153z00_2417);
												}
												BgL_arg2132z00_2386 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
													BgL_arg2152z00_2416);
						}}}}}}
						{	/* Object/classgen.scm 460 */
							obj_t BgL_list2133z00_2387;

							{	/* Object/classgen.scm 460 */
								obj_t BgL_arg2134z00_2388;

								BgL_arg2134z00_2388 =
									MAKE_YOUNG_PAIR(BgL_arg2132z00_2386, BNIL);
								BgL_list2133z00_2387 =
									MAKE_YOUNG_PAIR(BgL_arg2131z00_2385, BgL_arg2134z00_2388);
							}
							BgL_val0_1351z00_2383 = BgL_list2133z00_2387;
					}}
					{	/* Object/classgen.scm 463 */
						obj_t BgL_arg2135z00_2389;
						obj_t BgL_arg2136z00_2390;

						BgL_sz00_2426 = BgL_sz00_21;
						{	/* Object/classgen.scm 443 */
							obj_t BgL_tidz00_2428;

							BgL_tidz00_2428 =
								(((BgL_typez00_bglt) COBJECT(
										((BgL_typez00_bglt) BgL_cz00_20)))->BgL_idz00);
							{	/* Object/classgen.scm 443 */
								obj_t BgL_sidz00_2429;

								BgL_sidz00_2429 =
									(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_sz00_2426)))->BgL_idz00);
								{	/* Object/classgen.scm 444 */
									obj_t BgL_oz00_2430;

									BgL_oz00_2430 =
										BGl_makezd2typedzd2identz00zzast_identz00(CNST_TABLE_REF((
												(long) 40)), BgL_tidz00_2428);
									{	/* Object/classgen.scm 445 */
										obj_t BgL_idz00_2431;

										{	/* Object/classgen.scm 446 */
											obj_t BgL_list2170z00_2440;

											{	/* Object/classgen.scm 446 */
												obj_t BgL_arg2172z00_2441;

												{	/* Object/classgen.scm 446 */
													obj_t BgL_arg2173z00_2442;

													BgL_arg2173z00_2442 =
														MAKE_YOUNG_PAIR(BgL_sidz00_2429, BNIL);
													BgL_arg2172z00_2441 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 42)),
														BgL_arg2173z00_2442);
												}
												BgL_list2170z00_2440 =
													MAKE_YOUNG_PAIR(BgL_tidz00_2428, BgL_arg2172z00_2441);
											}
											BgL_idz00_2431 =
												BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
												(BgL_list2170z00_2440);
										}
										{	/* Object/classgen.scm 446 */
											obj_t BgL_gidz00_2432;

											{	/* Object/classgen.scm 447 */
												obj_t BgL_arg2168z00_2438;

												BgL_arg2168z00_2438 =
													(((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt)
																(((BgL_slotz00_bglt) COBJECT(
																			((BgL_slotz00_bglt) BgL_sz00_2426)))->
																	BgL_typez00))))->BgL_idz00);
												BgL_gidz00_2432 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(BgL_idz00_2431, BgL_arg2168z00_2438);
											}
											{	/* Object/classgen.scm 447 */

												{	/* Object/classgen.scm 448 */
													obj_t BgL_arg2163z00_2433;

													{	/* Object/classgen.scm 448 */
														obj_t BgL_arg2164z00_2434;
														obj_t BgL_arg2165z00_2435;

														{	/* Object/classgen.scm 448 */
															obj_t BgL_arg2166z00_2436;

															BgL_arg2166z00_2436 =
																MAKE_YOUNG_PAIR(BgL_oz00_2430, BNIL);
															BgL_arg2164z00_2434 =
																MAKE_YOUNG_PAIR(BgL_gidz00_2432,
																BgL_arg2166z00_2436);
														}
														BgL_arg2165z00_2435 =
															MAKE_YOUNG_PAIR
															(BGl_fieldzd2accesszd2zzast_objectz00
															(CNST_TABLE_REF(((long) 40)), BgL_sidz00_2429,
																BTRUE), BNIL);
														BgL_arg2163z00_2433 =
															MAKE_YOUNG_PAIR(BgL_arg2164z00_2434,
															BgL_arg2165z00_2435);
													}
													BgL_arg2135z00_2389 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
														BgL_arg2163z00_2433);
						}}}}}}}
						{	/* Object/classgen.scm 464 */
							bool_t BgL_test2479z00_4355;

							if (
								(((BgL_slotz00_bglt) COBJECT(
											((BgL_slotz00_bglt) BgL_sz00_21)))->
									BgL_readzd2onlyzf3z21))
								{	/* Object/classgen.scm 464 */
									BgL_test2479z00_4355 =
										BGl_slotzd2virtualzf3z21zzobject_slotsz00(
										((BgL_slotz00_bglt) BgL_sz00_21));
								}
							else
								{	/* Object/classgen.scm 464 */
									BgL_test2479z00_4355 = ((bool_t) 0);
								}
							if (BgL_test2479z00_4355)
								{	/* Object/classgen.scm 464 */
									BgL_arg2136z00_2390 = BFALSE;
								}
							else
								{	/* Object/classgen.scm 464 */
									BgL_sz00_2443 = BgL_sz00_21;
									{	/* Object/classgen.scm 452 */
										obj_t BgL_tidz00_2445;

										BgL_tidz00_2445 =
											(((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_cz00_20)))->BgL_idz00);
										{	/* Object/classgen.scm 452 */
											obj_t BgL_sidz00_2446;

											BgL_sidz00_2446 =
												(((BgL_slotz00_bglt) COBJECT(
														((BgL_slotz00_bglt) BgL_sz00_2443)))->BgL_idz00);
											{	/* Object/classgen.scm 453 */
												obj_t BgL_oz00_2447;

												BgL_oz00_2447 =
													BGl_makezd2typedzd2identz00zzast_identz00
													(CNST_TABLE_REF(((long) 40)), BgL_tidz00_2445);
												{	/* Object/classgen.scm 454 */
													obj_t BgL_idz00_2448;

													{	/* Object/classgen.scm 455 */
														obj_t BgL_list2186z00_2461;

														{	/* Object/classgen.scm 455 */
															obj_t BgL_arg2187z00_2462;

															{	/* Object/classgen.scm 455 */
																obj_t BgL_arg2188z00_2463;

																{	/* Object/classgen.scm 455 */
																	obj_t BgL_arg2189z00_2464;

																	BgL_arg2189z00_2464 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 43)),
																		BNIL);
																	BgL_arg2188z00_2463 =
																		MAKE_YOUNG_PAIR(BgL_sidz00_2446,
																		BgL_arg2189z00_2464);
																}
																BgL_arg2187z00_2462 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 42)),
																	BgL_arg2188z00_2463);
															}
															BgL_list2186z00_2461 =
																MAKE_YOUNG_PAIR(BgL_tidz00_2445,
																BgL_arg2187z00_2462);
														}
														BgL_idz00_2448 =
															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
															(BgL_list2186z00_2461);
													}
													{	/* Object/classgen.scm 455 */
														obj_t BgL_vz00_2449;

														{	/* Object/classgen.scm 456 */
															obj_t BgL_arg2184z00_2459;

															BgL_arg2184z00_2459 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			(((BgL_slotz00_bglt) COBJECT(
																						((BgL_slotz00_bglt)
																							BgL_sz00_2443)))->
																				BgL_typez00))))->BgL_idz00);
															BgL_vz00_2449 =
																BGl_makezd2typedzd2identz00zzast_identz00
																(CNST_TABLE_REF(((long) 44)),
																BgL_arg2184z00_2459);
														}
														{	/* Object/classgen.scm 456 */

															{	/* Object/classgen.scm 457 */
																obj_t BgL_arg2175z00_2450;

																{	/* Object/classgen.scm 457 */
																	obj_t BgL_arg2176z00_2451;
																	obj_t BgL_arg2177z00_2452;

																	{	/* Object/classgen.scm 457 */
																		obj_t BgL_arg2178z00_2453;

																		{	/* Object/classgen.scm 457 */
																			obj_t BgL_arg2179z00_2454;

																			BgL_arg2179z00_2454 =
																				MAKE_YOUNG_PAIR(BgL_vz00_2449, BNIL);
																			BgL_arg2178z00_2453 =
																				MAKE_YOUNG_PAIR(BgL_oz00_2447,
																				BgL_arg2179z00_2454);
																		}
																		BgL_arg2176z00_2451 =
																			MAKE_YOUNG_PAIR(BgL_idz00_2448,
																			BgL_arg2178z00_2453);
																	}
																	{	/* Object/classgen.scm 458 */
																		obj_t BgL_arg2180z00_2455;

																		{	/* Object/classgen.scm 458 */
																			obj_t BgL_arg2181z00_2456;

																			{	/* Object/classgen.scm 458 */
																				obj_t BgL_arg2182z00_2457;
																				obj_t BgL_arg2183z00_2458;

																				BgL_arg2182z00_2457 =
																					BGl_fieldzd2accesszd2zzast_objectz00
																					(CNST_TABLE_REF(((long) 40)),
																					BgL_sidz00_2446, BTRUE);
																				BgL_arg2183z00_2458 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							44)), BNIL);
																				BgL_arg2181z00_2456 =
																					MAKE_YOUNG_PAIR(BgL_arg2182z00_2457,
																					BgL_arg2183z00_2458);
																			}
																			BgL_arg2180z00_2455 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						19)), BgL_arg2181z00_2456);
																		}
																		BgL_arg2177z00_2452 =
																			MAKE_YOUNG_PAIR(BgL_arg2180z00_2455,
																			BNIL);
																	}
																	BgL_arg2175z00_2450 =
																		MAKE_YOUNG_PAIR(BgL_arg2176z00_2451,
																		BgL_arg2177z00_2452);
																}
																BgL_arg2136z00_2390 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																	BgL_arg2175z00_2450);
						}}}}}}}}}
						{	/* Object/classgen.scm 463 */
							obj_t BgL_list2137z00_2391;

							{	/* Object/classgen.scm 463 */
								obj_t BgL_arg2138z00_2392;

								BgL_arg2138z00_2392 =
									MAKE_YOUNG_PAIR(BgL_arg2136z00_2390, BNIL);
								BgL_list2137z00_2391 =
									MAKE_YOUNG_PAIR(BgL_arg2135z00_2389, BgL_arg2138z00_2392);
							}
							BgL_val1_1352z00_2384 = BgL_list2137z00_2391;
					}}
					{	/* Object/classgen.scm 460 */
						int BgL_res2354z00_3095;

						{	/* Object/classgen.scm 460 */
							int BgL_tmpz00_4396;

							BgL_tmpz00_4396 = (int) (((long) 2));
							BgL_res2354z00_3095 = BGL_MVALUES_NUMBER_SET(BgL_tmpz00_4396);
						} BgL_res2354z00_3095;
					}
					{	/* Object/classgen.scm 460 */
						int BgL_tmpz00_4399;

						BgL_tmpz00_4399 = (int) (((long) 1));
						BGL_MVALUES_VAL_SET(BgL_tmpz00_4399, BgL_val1_1352z00_2384);
					}
					return BgL_val0_1351z00_2383;
				}
			}
		}

	}



/* classgen-slot-anonymous */
	BGL_EXPORTED_DEF obj_t
		BGl_classgenzd2slotzd2anonymousz00zzobject_classgenz00(BgL_typez00_bglt
		BgL_classz00_22, BgL_slotz00_bglt BgL_sz00_23)
	{
		{	/* Object/classgen.scm 470 */
			{	/* Object/classgen.scm 471 */
				obj_t BgL__z00_2469;

				BgL__z00_2469 =
					BGl_classgenzd2slotzd2zzobject_classgenz00(
					((obj_t) BgL_classz00_22), ((obj_t) BgL_sz00_23));
				{	/* Object/classgen.scm 472 */
					obj_t BgL_dz00_2470;

					{	/* Object/classgen.scm 473 */
						int BgL_tmpz00_4405;

						BgL_tmpz00_4405 = (int) (((long) 1));
						BgL_dz00_2470 = BGL_MVALUES_VAL(BgL_tmpz00_4405);
					}
					{	/* Object/classgen.scm 473 */
						obj_t BgL_fun1359z00_2471;

						{	/* Object/classgen.scm 473 */
							obj_t BgL_zc3z04anonymousza32196ze3z87_3142;

							{
								int BgL_tmpz00_4408;

								BgL_tmpz00_4408 = (int) (((long) 0));
								BgL_zc3z04anonymousza32196ze3z87_3142 =
									MAKE_EL_PROCEDURE(BgL_tmpz00_4408);
							}
							BgL_fun1359z00_2471 = BgL_zc3z04anonymousza32196ze3z87_3142;
						}
						if (NULLP(BgL_dz00_2470))
							{	/* Object/classgen.scm 473 */
								return BNIL;
							}
						else
							{	/* Object/classgen.scm 473 */
								obj_t BgL_head1355z00_2474;

								{	/* Object/classgen.scm 473 */
									obj_t BgL_res2361z00_3111;

									BgL_res2361z00_3111 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									BgL_head1355z00_2474 = BgL_res2361z00_3111;
								}
								{
									obj_t BgL_l1353z00_2476;
									obj_t BgL_tail1356z00_2477;

									BgL_l1353z00_2476 = BgL_dz00_2470;
									BgL_tail1356z00_2477 = BgL_head1355z00_2474;
								BgL_zc3z04anonymousza32191ze3z87_2478:
									if (NULLP(BgL_l1353z00_2476))
										{	/* Object/classgen.scm 473 */
											return CDR(BgL_head1355z00_2474);
										}
									else
										{	/* Object/classgen.scm 473 */
											obj_t BgL_newtail1357z00_2480;

											{	/* Object/classgen.scm 473 */
												obj_t BgL_arg2194z00_2482;

												{	/* Object/classgen.scm 473 */
													obj_t BgL_arg2195z00_2483;

													BgL_arg2195z00_2483 =
														CAR(((obj_t) BgL_l1353z00_2476));
													BgL_arg2194z00_2482 =
														BGl_z62zc3z04anonymousza32196ze3ze5zzobject_classgenz00
														(BgL_fun1359z00_2471, BgL_arg2195z00_2483);
												}
												{	/* Object/classgen.scm 473 */
													obj_t BgL_res2363z00_3115;

													BgL_res2363z00_3115 =
														MAKE_YOUNG_PAIR(BgL_arg2194z00_2482, BNIL);
													BgL_newtail1357z00_2480 = BgL_res2363z00_3115;
												}
											}
											SET_CDR(BgL_tail1356z00_2477, BgL_newtail1357z00_2480);
											{	/* Object/classgen.scm 473 */
												obj_t BgL_arg2193z00_2481;

												BgL_arg2193z00_2481 = CDR(((obj_t) BgL_l1353z00_2476));
												{
													obj_t BgL_tail1356z00_4428;
													obj_t BgL_l1353z00_4427;

													BgL_l1353z00_4427 = BgL_arg2193z00_2481;
													BgL_tail1356z00_4428 = BgL_newtail1357z00_2480;
													BgL_tail1356z00_2477 = BgL_tail1356z00_4428;
													BgL_l1353z00_2476 = BgL_l1353z00_4427;
													goto BgL_zc3z04anonymousza32191ze3z87_2478;
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



/* &classgen-slot-anonymous */
	obj_t BGl_z62classgenzd2slotzd2anonymousz62zzobject_classgenz00(obj_t
		BgL_envz00_3143, obj_t BgL_classz00_3144, obj_t BgL_sz00_3145)
	{
		{	/* Object/classgen.scm 470 */
			return
				BGl_classgenzd2slotzd2anonymousz00zzobject_classgenz00(
				((BgL_typez00_bglt) BgL_classz00_3144),
				((BgL_slotz00_bglt) BgL_sz00_3145));
		}

	}



/* &<@anonymous:2196> */
	obj_t BGl_z62zc3z04anonymousza32196ze3ze5zzobject_classgenz00(obj_t
		BgL_envz00_3146, obj_t BgL_ezd2199zd2_3147)
	{
		{	/* Object/classgen.scm 473 */
			{
				obj_t BgL_idz00_3165;
				obj_t BgL_argsz00_3166;
				obj_t BgL_bodyz00_3167;

				if (PAIRP(BgL_ezd2199zd2_3147))
					{	/* Object/classgen.scm 473 */
						obj_t BgL_cdrzd2207zd2_3173;

						BgL_cdrzd2207zd2_3173 = CDR(BgL_ezd2199zd2_3147);
						if (PAIRP(BgL_cdrzd2207zd2_3173))
							{	/* Object/classgen.scm 473 */
								obj_t BgL_carzd2211zd2_3174;
								obj_t BgL_cdrzd2212zd2_3175;

								BgL_carzd2211zd2_3174 = CAR(BgL_cdrzd2207zd2_3173);
								BgL_cdrzd2212zd2_3175 = CDR(BgL_cdrzd2207zd2_3173);
								if (PAIRP(BgL_carzd2211zd2_3174))
									{	/* Object/classgen.scm 473 */
										if (PAIRP(BgL_cdrzd2212zd2_3175))
											{	/* Object/classgen.scm 473 */
												if (NULLP(CDR(BgL_cdrzd2212zd2_3175)))
													{	/* Object/classgen.scm 473 */
														BgL_idz00_3165 = CAR(BgL_carzd2211zd2_3174);
														BgL_argsz00_3166 = CDR(BgL_carzd2211zd2_3174);
														BgL_bodyz00_3167 = CAR(BgL_cdrzd2212zd2_3175);
														{	/* Object/classgen.scm 475 */
															obj_t BgL_pidz00_3168;

															BgL_pidz00_3168 =
																BGl_parsezd2idzd2zzast_identz00(BgL_idz00_3165,
																BFALSE);
															{	/* Object/classgen.scm 475 */
																obj_t BgL_tlamz00_3169;

																{	/* Object/classgen.scm 476 */
																	obj_t BgL_arg2209z00_3170;

																	BgL_arg2209z00_3170 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					CDR(BgL_pidz00_3168))))->BgL_idz00);
																	BgL_tlamz00_3169 =
																		BGl_makezd2typedzd2identz00zzast_identz00
																		(CNST_TABLE_REF(((long) 12)),
																		BgL_arg2209z00_3170);
																}
																{	/* Object/classgen.scm 476 */

																	{	/* Object/classgen.scm 477 */
																		obj_t BgL_arg2207z00_3171;

																		{	/* Object/classgen.scm 477 */
																			obj_t BgL_arg2208z00_3172;

																			BgL_arg2208z00_3172 =
																				MAKE_YOUNG_PAIR(BgL_bodyz00_3167, BNIL);
																			BgL_arg2207z00_3171 =
																				MAKE_YOUNG_PAIR(BgL_argsz00_3166,
																				BgL_arg2208z00_3172);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_tlamz00_3169,
																			BgL_arg2207z00_3171);
																	}
																}
															}
														}
													}
												else
													{	/* Object/classgen.scm 473 */
														return BFALSE;
													}
											}
										else
											{	/* Object/classgen.scm 473 */
												return BFALSE;
											}
									}
								else
									{	/* Object/classgen.scm 473 */
										return BFALSE;
									}
							}
						else
							{	/* Object/classgen.scm 473 */
								return BFALSE;
							}
					}
				else
					{	/* Object/classgen.scm 473 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzobject_classgenz00()
	{
		{	/* Object/classgen.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzobject_nilz00(((long) 168472988),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzast_privatez00(((long) 135263818),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzast_objectz00(((long) 520121765),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			BGl_modulezd2initializa7ationz75zzwrite_schemez00(((long) 305499432),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2384z00zzobject_classgenz00));
		}

	}

#ifdef __cplusplus
}
#endif
