/*===========================================================================*/
/*   (Module/eval.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/eval.scm) */
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

	typedef struct BgL_nodez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
		struct BgL_typez00_bgl *BgL_typez00;
	}              *BgL_nodez00_bglt;

	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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


	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31919ze3ze5zzmodule_evalz00(obj_t,
		obj_t);
	static obj_t BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t bigloo_module_mangle(obj_t, obj_t);
	static obj_t BGl_evmodulezd2compzd2zzmodule_evalz00();
	static obj_t BGl_objectzd2initzd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_libraryzd2infozd2zz__libraryz00(obj_t);
	extern BgL_nodez00_bglt
		BGl_definezd2primopzd2refzf2srczd2ze3nodezc3zzast_sexpz00
		(BgL_globalz00_bglt, BgL_nodez00_bglt, obj_t);
	static obj_t BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00();
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00
		= BUNSPEC;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_svarz00zzast_varz00;
	static obj_t BGl_getzd2evaluatedzd2classzd2holderszd2zzmodule_evalz00();
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	static obj_t BGl_z62addzd2evalzd2libraryz12z70zzmodule_evalz00(obj_t, obj_t);
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern BgL_nodez00_bglt
		BGl_locationzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static bool_t BGl_za2onezd2evalzf3za2z21zzmodule_evalz00;
	static obj_t BGl_z62evalzd2producerzb0zzmodule_evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_z62zc3z04anonymousza31382ze3ze5zzmodule_evalz00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zzmodule_evalz00();
	extern obj_t BGl_za2modulezd2locationza2zd2zzmodule_modulez00;
	static obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzmodule_evalz00(obj_t);
	static obj_t BGl_exportzd2globalze70z35zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern bool_t BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_bglt);
	static obj_t BGl_z62makezd2evalzd2compilerz62zzmodule_evalz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_z62evalzd2finaliza7erz17zzmodule_evalz00(obj_t);
	extern obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_library_ez00zzmodule_evalz00(obj_t);
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_evalz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
	static obj_t BGl_za2evalzd2librariesza2zd2zzmodule_evalz00 = BUNSPEC;
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2initzd2filez00zz__libraryz00(obj_t);
	static obj_t BGl_za2evalzd2classesza2zd2zzmodule_evalz00 = BUNSPEC;
	extern obj_t BGl_za2libzd2modeza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezf2locationz20zztype_envz00(obj_t,
		obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_z62getzd2evalzd2librariesz62zzmodule_evalz00(obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
	extern BgL_nodez00_bglt
		BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(BgL_globalz00_bglt);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_sexpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_slotsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_includez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00(obj_t);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	BGL_EXPORTED_DEF obj_t BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 =
		BUNSPEC;
	static obj_t BGl_cnstzd2initzd2zzmodule_evalz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_evalz00();
	extern obj_t BGl_scnstz00zzast_varz00;
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_evalz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	extern BgL_nodez00_bglt BGl_sexpzd2ze3nodez31zzast_sexpz00(obj_t, obj_t,
		obj_t, obj_t);
	extern BgL_nodez00_bglt
		BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00(BgL_globalz00_bglt,
		BgL_nodez00_bglt);
	static obj_t BGl_evalzd2parserzd2zzmodule_evalz00(obj_t, obj_t);
	static obj_t BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 = BUNSPEC;
	static obj_t BGl_getzd2libraryzd2infoz00zzmodule_evalz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00();
	extern obj_t BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00(obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[39];


	   
		 
		DEFINE_STRING(BGl_string2147z00zzmodule_evalz00,
		BgL_bgl_string2147za700za7za7m2164za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2148z00zzmodule_evalz00,
		BgL_bgl_string2148za700za7za7m2165za7, "Illegal `eval' clause", 21);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evalzd2producerzd2envz00zzmodule_evalz00,
		BgL_bgl_za762evalza7d2produc2166z00,
		BGl_z62evalzd2producerzb0zzmodule_evalz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2150z00zzmodule_evalz00,
		BgL_bgl_string2150za700za7za7m2167za7, "cannot find info \"~a\"", 21);
	      DEFINE_STRING(BGl_string2151z00zzmodule_evalz00,
		BgL_bgl_string2151za700za7za7m2168za7,
		"cannot find file \"~a\" in lib path", 33);
	      DEFINE_STRING(BGl_string2152z00zzmodule_evalz00,
		BgL_bgl_string2152za700za7za7m2169za7, "~s", 2);
	      DEFINE_STRING(BGl_string2153z00zzmodule_evalz00,
		BgL_bgl_string2153za700za7za7m2170za7, "cannot initialize library for eval",
		34);
	      DEFINE_STRING(BGl_string2154z00zzmodule_evalz00,
		BgL_bgl_string2154za700za7za7m2171za7, "eval", 4);
	      DEFINE_STRING(BGl_string2155z00zzmodule_evalz00,
		BgL_bgl_string2155za700za7za7m2172za7,
		"Non bigloo prototyped value can't be evaluated", 46);
	      DEFINE_STRING(BGl_string2156z00zzmodule_evalz00,
		BgL_bgl_string2156za700za7za7m2173za7, "eval-init", 9);
	      DEFINE_STRING(BGl_string2157z00zzmodule_evalz00,
		BgL_bgl_string2157za700za7za7m2174za7,
		"This variable cannot be known by eval", 37);
	      DEFINE_STRING(BGl_string2158z00zzmodule_evalz00,
		BgL_bgl_string2158za700za7za7m2175za7, "Unbound eval variable", 21);
	      DEFINE_STRING(BGl_string2159z00zzmodule_evalz00,
		BgL_bgl_string2159za700za7za7m2176za7, "module_eval", 11);
	      DEFINE_STRING(BGl_string2160z00zzmodule_evalz00,
		BgL_bgl_string2160za700za7za7m2177za7,
		"eval-expand-with-access eval-expand-duplicate eval-expand-instantiate register-eval-srfi! (export) (import static export) (all module export) library-load library-mark-loaded! pragma::string bigloo-library-path library-load-init __library (int string) obj libinfo vector __evmeaning_address value module quote evmodule-comp! __evmodule begin (#unspecified) one all write void unit library import class @ export export-module export-exports export-all eval ",
		456);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2evalzd2libraryz12zd2envzc0zzmodule_evalz00,
		BgL_bgl_za762addza7d2evalza7d22178za7,
		BGl_z62addzd2evalzd2libraryz12z70zzmodule_evalz00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_evalzd2finaliza7erzd2envza7zzmodule_evalz00,
		BgL_bgl_za762evalza7d2finali2179z00,
		BGl_z62evalzd2finaliza7erz17zzmodule_evalz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_getzd2evalzd2librarieszd2envzd2zzmodule_evalz00,
		BgL_bgl_za762getza7d2evalza7d22180za7,
		BGl_z62getzd2evalzd2librariesz62zzmodule_evalz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2146z00zzmodule_evalz00,
		BgL_bgl_za762za7c3za704anonymo2181za7,
		BGl_z62zc3z04anonymousza31382ze3ze5zzmodule_evalz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2149z00zzmodule_evalz00,
		BgL_bgl_za762za7c3za704anonymo2182za7,
		BGl_z62zc3z04anonymousza31635ze3ze5zzmodule_evalz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2evalzd2compilerzd2envzd2zzmodule_evalz00,
		BgL_bgl_za762makeza7d2evalza7d2183za7,
		BGl_z62makezd2evalzd2compilerz62zzmodule_evalz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00));
		     ADD_ROOT((void
				*) (&BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00));
		     ADD_ROOT((void *) (&BGl_za2allzd2evalzf3za2z21zzmodule_evalz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_evalz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2librariesza2zd2zzmodule_evalz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2classesza2zd2zzmodule_evalz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00));
		     ADD_ROOT((void *) (&BGl_za2evalzd2exportedza2zd2zzmodule_evalz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long
		BgL_checksumz00_2851, char *BgL_fromz00_2852)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_evalz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_evalz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_evalz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_evalz00();
					BGl_cnstzd2initzd2zzmodule_evalz00();
					BGl_importedzd2moduleszd2initz00zzmodule_evalz00();
					return BGl_toplevelzd2initzd2zzmodule_evalz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_eval");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_eval");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			{	/* Module/eval.scm 15 */
				obj_t BgL_cportz00_2777;

				{	/* Module/eval.scm 15 */
					obj_t BgL_stringz00_2785;

					BgL_stringz00_2785 = BGl_string2160z00zzmodule_evalz00;
					{	/* Module/eval.scm 15 */
						obj_t BgL_startz00_2786;

						BgL_startz00_2786 = BINT(((long) 0));
						{	/* Module/eval.scm 15 */
							obj_t BgL_endz00_2787;

							BgL_endz00_2787 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2785)));
							{	/* Module/eval.scm 15 */

								BgL_cportz00_2777 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2785, BgL_startz00_2786, BgL_endz00_2787);
				}}}}
				{
					long BgL_iz00_2778;

					BgL_iz00_2778 = ((long) 38);
				BgL_loopz00_2779:
					if ((BgL_iz00_2778 == ((long) -1)))
						{	/* Module/eval.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/eval.scm 15 */
							{	/* Module/eval.scm 15 */
								obj_t BgL_arg2162z00_2781;

								{	/* Module/eval.scm 15 */

									{	/* Module/eval.scm 15 */
										obj_t BgL_locationz00_2783;

										BgL_locationz00_2783 = BBOOL(((bool_t) 0));
										{	/* Module/eval.scm 15 */

											BgL_arg2162z00_2781 =
												BGl_readz00zz__readerz00(BgL_cportz00_2777,
												BgL_locationz00_2783);
										}
									}
								}
								{	/* Module/eval.scm 15 */
									int BgL_tmpz00_2886;

									BgL_tmpz00_2886 = (int) (BgL_iz00_2778);
									CNST_TABLE_SET(BgL_tmpz00_2886, BgL_arg2162z00_2781);
							}}
							{	/* Module/eval.scm 15 */
								int BgL_auxz00_2784;

								BgL_auxz00_2784 = (int) ((BgL_iz00_2778 - ((long) 1)));
								{
									long BgL_iz00_2891;

									BgL_iz00_2891 = (long) (BgL_auxz00_2784);
									BgL_iz00_2778 = BgL_iz00_2891;
									goto BgL_loopz00_2779;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			BGl_za2evalzd2librariesza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2evalzd2classesza2zd2zzmodule_evalz00 = BNIL;
			BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00 = BFALSE;
			BGl_za2allzd2exportzd2mutablezf3za2zf3zzmodule_evalz00 = BFALSE;
			return (BGl_za2onezd2evalzf3za2z21zzmodule_evalz00 =
				((bool_t) 0), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_evalz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1754;

				BgL_headz00_1754 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1755;
					obj_t BgL_tailz00_1756;

					BgL_prevz00_1755 = BgL_headz00_1754;
					BgL_tailz00_1756 = BgL_l1z00_1;
				BgL_loopz00_1757:
					if (PAIRP(BgL_tailz00_1756))
						{
							obj_t BgL_newzd2prevzd2_1759;

							BgL_newzd2prevzd2_1759 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1756), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1755, BgL_newzd2prevzd2_1759);
							{
								obj_t BgL_tailz00_2901;
								obj_t BgL_prevz00_2900;

								BgL_prevz00_2900 = BgL_newzd2prevzd2_1759;
								BgL_tailz00_2901 = CDR(BgL_tailz00_1756);
								BgL_tailz00_1756 = BgL_tailz00_2901;
								BgL_prevz00_1755 = BgL_prevz00_2900;
								goto BgL_loopz00_1757;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1754);
				}
			}
		}

	}



/* make-eval-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2evalzd2compilerz00zzmodule_evalz00()
	{
		{	/* Module/eval.scm 45 */
			{	/* Module/eval.scm 46 */
				BgL_ccompz00_bglt BgL_new1107z00_1797;

				{	/* Module/eval.scm 47 */
					BgL_ccompz00_bglt BgL_new1106z00_1801;

					BgL_new1106z00_1801 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/eval.scm 47 */
						long BgL_arg1383z00_1802;

						{	/* Module/eval.scm 47 */
							long BgL_res2077z00_2516;

							BgL_res2077z00_2516 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1383z00_1802 = BgL_res2077z00_2516;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1106z00_1801), BgL_arg1383z00_1802);
					}
					BgL_new1107z00_1797 = BgL_new1106z00_1801;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_1797))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_1797))->BgL_producerz00) =
					((obj_t) BGl_evalzd2producerzd2envz00zzmodule_evalz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_1797))->BgL_consumerz00) =
					((obj_t) BGl_proc2146z00zzmodule_evalz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_1797))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_evalzd2finaliza7erzd2envza7zzmodule_evalz00), BUNSPEC);
				return ((obj_t) BgL_new1107z00_1797);
			}
		}

	}



/* &make-eval-compiler */
	obj_t BGl_z62makezd2evalzd2compilerz62zzmodule_evalz00(obj_t BgL_envz00_2755)
	{
		{	/* Module/eval.scm 45 */
			return BGl_makezd2evalzd2compilerz00zzmodule_evalz00();
		}

	}



/* &<@anonymous:1382> */
	obj_t BGl_z62zc3z04anonymousza31382ze3ze5zzmodule_evalz00(obj_t
		BgL_envz00_2756, obj_t BgL_mz00_2757, obj_t BgL_cz00_2758)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &eval-producer */
	obj_t BGl_z62evalzd2producerzb0zzmodule_evalz00(obj_t BgL_envz00_2759,
		obj_t BgL_clausez00_2760)
	{
		{	/* Module/eval.scm 54 */
			{
				obj_t BgL_protosz00_2792;

				if (PAIRP(BgL_clausez00_2760))
					{	/* Module/eval.scm 55 */
						BgL_protosz00_2792 = CDR(BgL_clausez00_2760);
						{
							obj_t BgL_l1294z00_2794;

							BgL_l1294z00_2794 = BgL_protosz00_2792;
						BgL_zc3z04anonymousza31395ze3z87_2793:
							if (PAIRP(BgL_l1294z00_2794))
								{	/* Module/eval.scm 57 */
									BGl_evalzd2parserzd2zzmodule_evalz00(CAR(BgL_l1294z00_2794),
										BgL_clausez00_2760);
									{
										obj_t BgL_l1294z00_2921;

										BgL_l1294z00_2921 = CDR(BgL_l1294z00_2794);
										BgL_l1294z00_2794 = BgL_l1294z00_2921;
										goto BgL_zc3z04anonymousza31395ze3z87_2793;
									}
								}
							else
								{	/* Module/eval.scm 57 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/eval.scm 55 */
						{	/* Module/eval.scm 60 */
							obj_t BgL_list1418z00_2795;

							BgL_list1418z00_2795 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string2147z00zzmodule_evalz00,
								BGl_string2148z00zzmodule_evalz00, BgL_clausez00_2760,
								BgL_list1418z00_2795);
						}
					}
			}
		}

	}



/* eval-parser */
	obj_t BGl_evalzd2parserzd2zzmodule_evalz00(obj_t BgL_protoz00_76,
		obj_t BgL_clausez00_77)
	{
		{	/* Module/eval.scm 68 */
			{
				obj_t BgL_libsz00_1829;

				if (PAIRP(BgL_protoz00_76))
					{	/* Module/eval.scm 69 */
						if ((CAR(BgL_protoz00_76) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/eval.scm 69 */
								if (NULLP(CDR(BgL_protoz00_76)))
									{	/* Module/eval.scm 69 */
										return (BGl_za2allzd2evalzf3za2z21zzmodule_evalz00 =
											BTRUE, BUNSPEC);
									}
								else
									{	/* Module/eval.scm 69 */
									BgL_tagzd2117zd2_1831:
										{	/* Module/eval.scm 95 */
											obj_t BgL_list1605z00_1915;

											BgL_list1605z00_1915 = MAKE_YOUNG_PAIR(BNIL, BNIL);
											return
												BGl_userzd2errorzd2zztools_errorz00
												(BGl_string2147z00zzmodule_evalz00,
												BGl_string2148z00zzmodule_evalz00, BgL_clausez00_77,
												BgL_list1605z00_1915);
										}
									}
							}
						else
							{	/* Module/eval.scm 69 */
								if ((CAR(BgL_protoz00_76) == CNST_TABLE_REF(((long) 2))))
									{	/* Module/eval.scm 69 */
										if (NULLP(CDR(BgL_protoz00_76)))
											{	/* Module/eval.scm 69 */
												return
													(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00 =
													BTRUE, BUNSPEC);
											}
										else
											{	/* Module/eval.scm 69 */
												goto BgL_tagzd2117zd2_1831;
											}
									}
								else
									{	/* Module/eval.scm 69 */
										if ((CAR(BgL_protoz00_76) == CNST_TABLE_REF(((long) 3))))
											{	/* Module/eval.scm 69 */
												if (NULLP(CDR(BgL_protoz00_76)))
													{	/* Module/eval.scm 69 */
														return
															(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00
															= BTRUE, BUNSPEC);
													}
												else
													{	/* Module/eval.scm 69 */
														goto BgL_tagzd2117zd2_1831;
													}
											}
										else
											{	/* Module/eval.scm 69 */
												obj_t BgL_cdrzd2215zd2_1849;

												BgL_cdrzd2215zd2_1849 = CDR(BgL_protoz00_76);
												if (
													(CAR(BgL_protoz00_76) == CNST_TABLE_REF(((long) 4))))
													{	/* Module/eval.scm 69 */
														if (PAIRP(BgL_cdrzd2215zd2_1849))
															{	/* Module/eval.scm 69 */
																obj_t BgL_carzd2217zd2_1853;

																BgL_carzd2217zd2_1853 =
																	CAR(BgL_cdrzd2215zd2_1849);
																if (SYMBOLP(BgL_carzd2217zd2_1853))
																	{	/* Module/eval.scm 69 */
																		if (NULLP(CDR(BgL_cdrzd2215zd2_1849)))
																			{	/* Module/eval.scm 69 */
																				BGl_za2onezd2evalzf3za2z21zzmodule_evalz00
																					= ((bool_t) 1);
																				return
																					BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00
																					(BgL_carzd2217zd2_1853, BFALSE,
																					BgL_protoz00_76);
																			}
																		else
																			{	/* Module/eval.scm 69 */
																				goto BgL_tagzd2117zd2_1831;
																			}
																	}
																else
																	{	/* Module/eval.scm 69 */
																		obj_t BgL_carzd2247zd2_1859;

																		BgL_carzd2247zd2_1859 =
																			CAR(((obj_t) BgL_cdrzd2215zd2_1849));
																		if (PAIRP(BgL_carzd2247zd2_1859))
																			{	/* Module/eval.scm 69 */
																				obj_t BgL_cdrzd2252zd2_1861;

																				BgL_cdrzd2252zd2_1861 =
																					CDR(BgL_carzd2247zd2_1859);
																				if (
																					(CAR(BgL_carzd2247zd2_1859) ==
																						CNST_TABLE_REF(((long) 5))))
																					{	/* Module/eval.scm 69 */
																						if (PAIRP(BgL_cdrzd2252zd2_1861))
																							{	/* Module/eval.scm 69 */
																								obj_t BgL_carzd2255zd2_1865;
																								obj_t BgL_cdrzd2256zd2_1866;

																								BgL_carzd2255zd2_1865 =
																									CAR(BgL_cdrzd2252zd2_1861);
																								BgL_cdrzd2256zd2_1866 =
																									CDR(BgL_cdrzd2252zd2_1861);
																								if (SYMBOLP
																									(BgL_carzd2255zd2_1865))
																									{	/* Module/eval.scm 69 */
																										if (PAIRP
																											(BgL_cdrzd2256zd2_1866))
																											{	/* Module/eval.scm 69 */
																												obj_t
																													BgL_carzd2261zd2_1869;
																												BgL_carzd2261zd2_1869 =
																													CAR
																													(BgL_cdrzd2256zd2_1866);
																												if (SYMBOLP
																													(BgL_carzd2261zd2_1869))
																													{	/* Module/eval.scm 69 */
																														if (NULLP(CDR
																																(BgL_cdrzd2256zd2_1866)))
																															{	/* Module/eval.scm 69 */
																																if (NULLP(CDR(
																																			((obj_t)
																																				BgL_cdrzd2215zd2_1849))))
																																	{	/* Module/eval.scm 69 */
																																		BGl_za2onezd2evalzf3za2z21zzmodule_evalz00
																																			=
																																			((bool_t)
																																			1);
																																		return
																																			BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00
																																			(BgL_carzd2255zd2_1865,
																																			BgL_carzd2261zd2_1869,
																																			BgL_protoz00_76);
																																	}
																																else
																																	{	/* Module/eval.scm 69 */
																																		goto
																																			BgL_tagzd2117zd2_1831;
																																	}
																															}
																														else
																															{	/* Module/eval.scm 69 */
																																goto
																																	BgL_tagzd2117zd2_1831;
																															}
																													}
																												else
																													{	/* Module/eval.scm 69 */
																														goto
																															BgL_tagzd2117zd2_1831;
																													}
																											}
																										else
																											{	/* Module/eval.scm 69 */
																												goto
																													BgL_tagzd2117zd2_1831;
																											}
																									}
																								else
																									{	/* Module/eval.scm 69 */
																										goto BgL_tagzd2117zd2_1831;
																									}
																							}
																						else
																							{	/* Module/eval.scm 69 */
																								goto BgL_tagzd2117zd2_1831;
																							}
																					}
																				else
																					{	/* Module/eval.scm 69 */
																						goto BgL_tagzd2117zd2_1831;
																					}
																			}
																		else
																			{	/* Module/eval.scm 69 */
																				goto BgL_tagzd2117zd2_1831;
																			}
																	}
															}
														else
															{	/* Module/eval.scm 69 */
																goto BgL_tagzd2117zd2_1831;
															}
													}
												else
													{	/* Module/eval.scm 69 */
														if (
															(CAR(BgL_protoz00_76) ==
																CNST_TABLE_REF(((long) 6))))
															{	/* Module/eval.scm 69 */
																if (PAIRP(BgL_cdrzd2215zd2_1849))
																	{	/* Module/eval.scm 69 */
																		obj_t BgL_carzd2366zd2_1882;

																		BgL_carzd2366zd2_1882 =
																			CAR(BgL_cdrzd2215zd2_1849);
																		if (SYMBOLP(BgL_carzd2366zd2_1882))
																			{	/* Module/eval.scm 69 */
																				if (NULLP(CDR(BgL_cdrzd2215zd2_1849)))
																					{	/* Module/eval.scm 69 */
																						return
																							(BGl_za2evalzd2classesza2zd2zzmodule_evalz00
																							=
																							MAKE_YOUNG_PAIR(BgL_protoz00_76,
																								BGl_za2evalzd2classesza2zd2zzmodule_evalz00),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/eval.scm 69 */
																						goto BgL_tagzd2117zd2_1831;
																					}
																			}
																		else
																			{	/* Module/eval.scm 69 */
																				goto BgL_tagzd2117zd2_1831;
																			}
																	}
																else
																	{	/* Module/eval.scm 69 */
																		goto BgL_tagzd2117zd2_1831;
																	}
															}
														else
															{	/* Module/eval.scm 69 */
																obj_t BgL_cdrzd2390zd2_1887;

																BgL_cdrzd2390zd2_1887 = CDR(BgL_protoz00_76);
																if (
																	(CAR(BgL_protoz00_76) ==
																		CNST_TABLE_REF(((long) 7))))
																	{	/* Module/eval.scm 69 */
																		if (PAIRP(BgL_cdrzd2390zd2_1887))
																			{	/* Module/eval.scm 69 */
																				obj_t BgL_carzd2392zd2_1891;

																				BgL_carzd2392zd2_1891 =
																					CAR(BgL_cdrzd2390zd2_1887);
																				if (SYMBOLP(BgL_carzd2392zd2_1891))
																					{	/* Module/eval.scm 69 */
																						if (NULLP(CDR
																								(BgL_cdrzd2390zd2_1887)))
																							{	/* Module/eval.scm 69 */
																								return
																									((obj_t)
																									BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
																									(BgL_carzd2392zd2_1891,
																										BFALSE,
																										CNST_TABLE_REF(((long) 0)),
																										CNST_TABLE_REF(((long) 0)),
																										BgL_clausez00_77, BFALSE));
																							}
																						else
																							{	/* Module/eval.scm 69 */
																								goto BgL_tagzd2117zd2_1831;
																							}
																					}
																				else
																					{	/* Module/eval.scm 69 */
																						goto BgL_tagzd2117zd2_1831;
																					}
																			}
																		else
																			{	/* Module/eval.scm 69 */
																				goto BgL_tagzd2117zd2_1831;
																			}
																	}
																else
																	{	/* Module/eval.scm 69 */
																		if (
																			(CAR(BgL_protoz00_76) ==
																				CNST_TABLE_REF(((long) 8))))
																			{	/* Module/eval.scm 69 */
																				bool_t BgL_tmpz00_3027;

																				BgL_libsz00_1829 =
																					BgL_cdrzd2390zd2_1887;
																				{
																					obj_t BgL_l1296z00_1907;

																					BgL_l1296z00_1907 = BgL_libsz00_1829;
																				BgL_zc3z04anonymousza31598ze3z87_1908:
																					if (PAIRP(BgL_l1296z00_1907))
																						{	/* Module/eval.scm 87 */
																							{	/* Module/eval.scm 88 */
																								obj_t BgL_libz00_1910;

																								BgL_libz00_1910 =
																									CAR(BgL_l1296z00_1907);
																								if (SYMBOLP(BgL_libz00_1910))
																									{	/* Module/eval.scm 88 */
																										BGl_za2evalzd2librariesza2zd2zzmodule_evalz00
																											=
																											MAKE_YOUNG_PAIR
																											(BgL_libz00_1910,
																											BGl_za2evalzd2librariesza2zd2zzmodule_evalz00);
																									}
																								else
																									{	/* Module/eval.scm 89 */
																										obj_t BgL_list1601z00_1912;

																										BgL_list1601z00_1912 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BGl_userzd2errorzd2zztools_errorz00
																											(BGl_string2147z00zzmodule_evalz00,
																											BGl_string2148z00zzmodule_evalz00,
																											BgL_clausez00_77,
																											BgL_list1601z00_1912);
																									}
																							}
																							{
																								obj_t BgL_l1296z00_3036;

																								BgL_l1296z00_3036 =
																									CDR(BgL_l1296z00_1907);
																								BgL_l1296z00_1907 =
																									BgL_l1296z00_3036;
																								goto
																									BgL_zc3z04anonymousza31598ze3z87_1908;
																							}
																						}
																					else
																						{	/* Module/eval.scm 87 */
																							BgL_tmpz00_3027 = ((bool_t) 1);
																						}
																				}
																				return BBOOL(BgL_tmpz00_3027);
																			}
																		else
																			{	/* Module/eval.scm 69 */
																				goto BgL_tagzd2117zd2_1831;
																			}
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/eval.scm 69 */
						goto BgL_tagzd2117zd2_1831;
					}
			}
		}

	}



/* get-eval-libraries */
	BGL_EXPORTED_DEF obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00()
	{
		{	/* Module/eval.scm 105 */
			return BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
		}

	}



/* &get-eval-libraries */
	obj_t BGl_z62getzd2evalzd2librariesz62zzmodule_evalz00(obj_t BgL_envz00_2762)
	{
		{	/* Module/eval.scm 105 */
			return BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
		}

	}



/* add-eval-library! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(obj_t
		BgL_libz00_78)
	{
		{	/* Module/eval.scm 111 */
			return (BGl_za2evalzd2librariesza2zd2zzmodule_evalz00 =
				MAKE_YOUNG_PAIR(BgL_libz00_78,
					BGl_za2evalzd2librariesza2zd2zzmodule_evalz00), BUNSPEC);
		}

	}



/* &add-eval-library! */
	obj_t BGl_z62addzd2evalzd2libraryz12z70zzmodule_evalz00(obj_t BgL_envz00_2763,
		obj_t BgL_libz00_2764)
	{
		{	/* Module/eval.scm 111 */
			return BGl_addzd2evalzd2libraryz12z12zzmodule_evalz00(BgL_libz00_2764);
		}

	}



/* remember-eval-exported! */
	obj_t BGl_rememberzd2evalzd2exportedz12z12zzmodule_evalz00(obj_t
		BgL_varz00_79, obj_t BgL_modulez00_80, obj_t BgL_locz00_81)
	{
		{	/* Module/eval.scm 127 */
			{	/* Module/eval.scm 128 */
				obj_t BgL_arg1606z00_1916;

				{	/* Module/eval.scm 128 */
					obj_t BgL_list1607z00_1917;

					{	/* Module/eval.scm 128 */
						obj_t BgL_arg1611z00_1918;

						{	/* Module/eval.scm 128 */
							obj_t BgL_arg1612z00_1919;

							BgL_arg1612z00_1919 = MAKE_YOUNG_PAIR(BgL_locz00_81, BNIL);
							BgL_arg1611z00_1918 =
								MAKE_YOUNG_PAIR(BgL_modulez00_80, BgL_arg1612z00_1919);
						}
						BgL_list1607z00_1917 =
							MAKE_YOUNG_PAIR(BgL_varz00_79, BgL_arg1611z00_1918);
					}
					BgL_arg1606z00_1916 = BgL_list1607z00_1917;
				}
				return (BGl_za2evalzd2exportedza2zd2zzmodule_evalz00 =
					MAKE_YOUNG_PAIR(BgL_arg1606z00_1916,
						BGl_za2evalzd2exportedza2zd2zzmodule_evalz00), BUNSPEC);
			}
		}

	}



/* &eval-finalizer */
	obj_t BGl_z62evalzd2finaliza7erz17zzmodule_evalz00(obj_t BgL_envz00_2761)
	{
		{	/* Module/eval.scm 146 */
			{	/* Module/eval.scm 159 */
				bool_t BgL_test2219z00_3046;

				if (BGl_za2onezd2evalzf3za2z21zzmodule_evalz00)
					{	/* Module/eval.scm 159 */
						BgL_test2219z00_3046 = ((bool_t) 1);
					}
				else
					{	/* Module/eval.scm 159 */
						if (CBOOL(BGl_za2allzd2evalzf3za2z21zzmodule_evalz00))
							{	/* Module/eval.scm 159 */
								BgL_test2219z00_3046 = ((bool_t) 1);
							}
						else
							{	/* Module/eval.scm 159 */
								if (CBOOL(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00))
									{	/* Module/eval.scm 159 */
										BgL_test2219z00_3046 = ((bool_t) 1);
									}
								else
									{	/* Module/eval.scm 159 */
										if (CBOOL
											(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00))
											{	/* Module/eval.scm 159 */
												BgL_test2219z00_3046 = ((bool_t) 1);
											}
										else
											{	/* Module/eval.scm 159 */
												if (NULLP
													(BGl_za2evalzd2librariesza2zd2zzmodule_evalz00))
													{	/* Module/eval.scm 163 */
														BgL_test2219z00_3046 =
															PAIRP
															(BGl_za2evalzd2classesza2zd2zzmodule_evalz00);
													}
												else
													{	/* Module/eval.scm 163 */
														BgL_test2219z00_3046 = ((bool_t) 1);
													}
											}
									}
							}
					}
				if (BgL_test2219z00_3046)
					{	/* Module/eval.scm 167 */
						obj_t BgL_arg1624z00_2796;

						{	/* Module/eval.scm 167 */
							long BgL_arg1626z00_2797;
							obj_t BgL_arg1627z00_2798;

							{	/* Module/eval.scm 167 */
								obj_t BgL_arg1631z00_2799;

								BgL_arg1631z00_2799 =
									BGl_getzd2toplevelzd2unitzd2weightzd2zzmodule_includez00();
								BgL_arg1626z00_2797 =
									((long) CINT(BgL_arg1631z00_2799) - ((long) 2));
							}
							BgL_arg1627z00_2798 =
								BGl_makezd2promisezd2zz__r4_control_features_6_9z00
								(BGl_proc2149z00zzmodule_evalz00);
							{	/* Module/eval.scm 166 */
								obj_t BgL_idz00_2800;

								BgL_idz00_2800 = CNST_TABLE_REF(((long) 0));
								{	/* Module/eval.scm 166 */
									obj_t BgL_newz00_2801;

									BgL_newz00_2801 =
										create_struct(CNST_TABLE_REF(((long) 9)),
										(int) (((long) 5)));
									{	/* Module/eval.scm 166 */
										int BgL_tmpz00_3065;

										BgL_tmpz00_3065 = (int) (((long) 4));
										STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_3065, BFALSE);
									}
									{	/* Module/eval.scm 166 */
										int BgL_tmpz00_3068;

										BgL_tmpz00_3068 = (int) (((long) 3));
										STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_3068, BFALSE);
									}
									{	/* Module/eval.scm 166 */
										int BgL_tmpz00_3071;

										BgL_tmpz00_3071 = (int) (((long) 2));
										STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_3071,
											BgL_arg1627z00_2798);
									}
									{	/* Module/eval.scm 166 */
										obj_t BgL_auxz00_3076;
										int BgL_tmpz00_3074;

										BgL_auxz00_3076 = BINT(BgL_arg1626z00_2797);
										BgL_tmpz00_3074 = (int) (((long) 1));
										STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_3074,
											BgL_auxz00_3076);
									}
									{	/* Module/eval.scm 166 */
										int BgL_tmpz00_3079;

										BgL_tmpz00_3079 = (int) (((long) 0));
										STRUCT_SET(BgL_newz00_2801, BgL_tmpz00_3079,
											BgL_idz00_2800);
									}
									BgL_arg1624z00_2796 = BgL_newz00_2801;
						}}}
						{	/* Module/eval.scm 165 */
							obj_t BgL_list1625z00_2802;

							BgL_list1625z00_2802 = MAKE_YOUNG_PAIR(BgL_arg1624z00_2796, BNIL);
							return BgL_list1625z00_2802;
						}
					}
				else
					{	/* Module/eval.scm 159 */
						return CNST_TABLE_REF(((long) 10));
		}}}

	}



/* &<@anonymous:1635> */
	obj_t BGl_z62zc3z04anonymousza31635ze3ze5zzmodule_evalz00(obj_t
		BgL_envz00_2766)
	{
		{	/* Module/eval.scm 168 */
			{
				obj_t BgL_gz00_2804;

				{	/* Module/eval.scm 169 */
					obj_t BgL_g1108z00_2813;
					obj_t BgL_g1109z00_2814;

					{	/* Module/eval.scm 171 */
						obj_t BgL_arg1707z00_2815;
						obj_t BgL_arg1708z00_2816;

						{	/* Module/eval.scm 171 */
							obj_t BgL_arg1711z00_2817;

							if (CBOOL(BGl_za2allzd2evalzf3za2z21zzmodule_evalz00))
								{	/* Module/eval.scm 171 */
									BgL_arg1711z00_2817 = CNST_TABLE_REF(((long) 12));
								}
							else
								{	/* Module/eval.scm 171 */
									if (CBOOL
										(BGl_za2allzd2exportzd2evalzf3za2zf3zzmodule_evalz00))
										{	/* Module/eval.scm 172 */
											BgL_arg1711z00_2817 = CNST_TABLE_REF(((long) 4));
										}
									else
										{	/* Module/eval.scm 172 */
											BgL_arg1711z00_2817 = CNST_TABLE_REF(((long) 13));
								}}
							BgL_arg1707z00_2815 =
								BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00
								(BgL_arg1711z00_2817);
						}
						BgL_arg1708z00_2816 =
							BGl_getzd2evaluatedzd2classzd2holderszd2zzmodule_evalz00();
						BgL_g1108z00_2813 =
							BGl_appendzd221011zd2zzmodule_evalz00(BgL_arg1707z00_2815,
							BgL_arg1708z00_2816);
					}
					BgL_g1109z00_2814 = CNST_TABLE_REF(((long) 14));
					{
						obj_t BgL_globalsz00_2819;
						obj_t BgL_initza2za2_2820;

						BgL_globalsz00_2819 = BgL_g1108z00_2813;
						BgL_initza2za2_2820 = BgL_g1109z00_2814;
					BgL_loopz00_2818:
						if (NULLP(BgL_globalsz00_2819))
							{	/* Module/eval.scm 179 */
								obj_t BgL_arg1639z00_2821;

								{	/* Module/eval.scm 179 */
									obj_t BgL_arg1640z00_2822;
									obj_t BgL_arg1641z00_2823;

									{	/* Module/eval.scm 179 */
										obj_t BgL_l1298z00_2824;

										BgL_l1298z00_2824 =
											BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
										if (NULLP(BgL_l1298z00_2824))
											{	/* Module/eval.scm 179 */
												BgL_arg1640z00_2822 = BNIL;
											}
										else
											{	/* Module/eval.scm 179 */
												obj_t BgL_head1300z00_2825;

												{	/* Module/eval.scm 179 */
													obj_t BgL_arg1664z00_2826;

													BgL_arg1664z00_2826 =
														BGl_library_ez00zzmodule_evalz00(CAR
														(BgL_l1298z00_2824));
													{	/* Module/eval.scm 179 */
														obj_t BgL_res2111z00_2827;

														BgL_res2111z00_2827 =
															MAKE_YOUNG_PAIR(BgL_arg1664z00_2826, BNIL);
														BgL_head1300z00_2825 = BgL_res2111z00_2827;
													}
												}
												{	/* Module/eval.scm 179 */
													obj_t BgL_g1303z00_2828;

													BgL_g1303z00_2828 = CDR(BgL_l1298z00_2824);
													{
														obj_t BgL_l1298z00_2830;
														obj_t BgL_tail1301z00_2831;

														BgL_l1298z00_2830 = BgL_g1303z00_2828;
														BgL_tail1301z00_2831 = BgL_head1300z00_2825;
													BgL_zc3z04anonymousza31643ze3z87_2829:
														if (NULLP(BgL_l1298z00_2830))
															{	/* Module/eval.scm 179 */
																BgL_arg1640z00_2822 = BgL_head1300z00_2825;
															}
														else
															{	/* Module/eval.scm 179 */
																obj_t BgL_newtail1302z00_2832;

																{	/* Module/eval.scm 179 */
																	obj_t BgL_arg1662z00_2833;

																	{	/* Module/eval.scm 179 */
																		obj_t BgL_arg1663z00_2834;

																		BgL_arg1663z00_2834 =
																			CAR(((obj_t) BgL_l1298z00_2830));
																		BgL_arg1662z00_2833 =
																			BGl_library_ez00zzmodule_evalz00
																			(BgL_arg1663z00_2834);
																	}
																	{	/* Module/eval.scm 179 */
																		obj_t BgL_res2113z00_2835;

																		BgL_res2113z00_2835 =
																			MAKE_YOUNG_PAIR(BgL_arg1662z00_2833,
																			BNIL);
																		BgL_newtail1302z00_2832 =
																			BgL_res2113z00_2835;
																	}
																}
																SET_CDR(BgL_tail1301z00_2831,
																	BgL_newtail1302z00_2832);
																{	/* Module/eval.scm 179 */
																	obj_t BgL_arg1652z00_2836;

																	BgL_arg1652z00_2836 =
																		CDR(((obj_t) BgL_l1298z00_2830));
																	{
																		obj_t BgL_tail1301z00_3113;
																		obj_t BgL_l1298z00_3112;

																		BgL_l1298z00_3112 = BgL_arg1652z00_2836;
																		BgL_tail1301z00_3113 =
																			BgL_newtail1302z00_2832;
																		BgL_tail1301z00_2831 = BgL_tail1301z00_3113;
																		BgL_l1298z00_2830 = BgL_l1298z00_3112;
																		goto BgL_zc3z04anonymousza31643ze3z87_2829;
																	}
																}
															}
													}
												}
											}
									}
									{	/* Module/eval.scm 181 */
										obj_t BgL_arg1669z00_2837;
										obj_t BgL_arg1672z00_2838;

										BgL_arg1669z00_2837 =
											BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00();
										{	/* Module/eval.scm 183 */
											obj_t BgL_arg1684z00_2839;
											obj_t BgL_arg1685z00_2840;

											BgL_arg1684z00_2839 =
												BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00
												();
											{	/* Module/eval.scm 185 */
												obj_t BgL_arg1686z00_2841;
												obj_t BgL_arg1687z00_2842;

												BgL_arg1686z00_2841 =
													bgl_reverse_bang(BgL_initza2za2_2820);
												{	/* Module/eval.scm 187 */
													obj_t BgL_arg1688z00_2843;
													obj_t BgL_arg1692z00_2844;

													BgL_arg1688z00_2843 =
														BGl_evmodulezd2compzd2zzmodule_evalz00();
													BgL_arg1692z00_2844 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
													BgL_arg1687z00_2842 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1688z00_2843, BgL_arg1692z00_2844);
												}
												BgL_arg1685z00_2840 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1686z00_2841, BgL_arg1687z00_2842);
											}
											BgL_arg1672z00_2838 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1684z00_2839, BgL_arg1685z00_2840);
										}
										BgL_arg1641z00_2823 =
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1669z00_2837, BgL_arg1672z00_2838);
									}
									BgL_arg1639z00_2821 =
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BgL_arg1640z00_2822, BgL_arg1641z00_2823);
								}
								return
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
									BgL_arg1639z00_2821);
							}
						else
							{	/* Module/eval.scm 189 */
								obj_t BgL_gz00_2845;

								BgL_gz00_2845 = CAR(((obj_t) BgL_globalsz00_2819));
								BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(BgL_gz00_2845);
								{	/* Module/eval.scm 191 */
									obj_t BgL_arg1695z00_2846;
									obj_t BgL_arg1696z00_2847;

									BgL_arg1695z00_2846 = CDR(((obj_t) BgL_globalsz00_2819));
									if (
										(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_gz00_2845)))->
											BgL_evalzf3zf3))
										{	/* Module/eval.scm 192 */
											BgL_arg1696z00_2847 = BgL_initza2za2_2820;
										}
									else
										{	/* Module/eval.scm 194 */
											BgL_nodez00_bglt BgL_arg1704z00_2848;

											BgL_gz00_2804 = BgL_gz00_2845;
											((((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_gz00_2804)))->
													BgL_evalzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
											{	/* Module/eval.scm 151 */
												bool_t BgL_test2231z00_3136;

												{	/* Module/eval.scm 151 */
													BgL_valuez00_bglt BgL_arg1732z00_2805;

													BgL_arg1732z00_2805 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_globalz00_bglt) BgL_gz00_2804))))->
														BgL_valuez00);
													{	/* Module/eval.scm 151 */
														bool_t BgL_res2104z00_2806;

														BgL_res2104z00_2806 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_arg1732z00_2805),
															BGl_svarz00zzast_varz00);
														BgL_test2231z00_3136 = BgL_res2104z00_2806;
													}
												}
												if (BgL_test2231z00_3136)
													{	/* Module/eval.scm 151 */
														{	/* Module/eval.scm 152 */
															obj_t BgL_vz00_2807;

															BgL_vz00_2807 = CNST_TABLE_REF(((long) 11));
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt) BgL_gz00_2804)))->
																	BgL_accessz00) =
																((obj_t) BgL_vz00_2807), BUNSPEC);
														}
														{	/* Module/eval.scm 153 */
															BgL_nodez00_bglt BgL_arg1725z00_2808;
															obj_t BgL_arg1726z00_2809;

															BgL_arg1725z00_2808 =
																BGl_locationzd2ze3nodez31zzast_sexpz00(
																((BgL_globalz00_bglt) BgL_gz00_2804));
															BgL_arg1726z00_2809 =
																(((BgL_globalz00_bglt) COBJECT(
																		((BgL_globalz00_bglt) BgL_gz00_2804)))->
																BgL_srcz00);
															BgL_arg1704z00_2848 =
																BGl_definezd2primopzd2refzf2srczd2ze3nodezc3zzast_sexpz00
																(((BgL_globalz00_bglt) BgL_gz00_2804),
																BgL_arg1725z00_2808, BgL_arg1726z00_2809);
													}}
												else
													{	/* Module/eval.scm 154 */
														bool_t BgL_test2232z00_3151;

														{	/* Module/eval.scm 154 */
															BgL_valuez00_bglt BgL_arg1731z00_2810;

															BgL_arg1731z00_2810 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt) BgL_gz00_2804))))->
																BgL_valuez00);
															{	/* Module/eval.scm 154 */
																bool_t BgL_res2105z00_2811;

																BgL_res2105z00_2811 =
																	BGl_isazf3zf3zz__objectz00(
																	((obj_t) BgL_arg1731z00_2810),
																	BGl_scnstz00zzast_varz00);
																BgL_test2232z00_3151 = BgL_res2105z00_2811;
															}
														}
														if (BgL_test2232z00_3151)
															{	/* Module/eval.scm 155 */
																BgL_nodez00_bglt BgL_arg1729z00_2812;

																BgL_arg1729z00_2812 =
																	BGl_locationzd2ze3nodez31zzast_sexpz00(
																	((BgL_globalz00_bglt) BgL_gz00_2804));
																BgL_arg1704z00_2848 =
																	BGl_definezd2primopzd2refzd2ze3nodez31zzast_sexpz00
																	(((BgL_globalz00_bglt) BgL_gz00_2804),
																	BgL_arg1729z00_2812);
															}
														else
															{	/* Module/eval.scm 154 */
																BgL_arg1704z00_2848 =
																	BGl_definezd2primopzd2ze3nodeze3zzast_sexpz00(
																	((BgL_globalz00_bglt) BgL_gz00_2804));
															}
													}
											}
											BgL_arg1696z00_2847 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1704z00_2848), BgL_initza2za2_2820);
										}
									{
										obj_t BgL_initza2za2_3166;
										obj_t BgL_globalsz00_3165;

										BgL_globalsz00_3165 = BgL_arg1695z00_2846;
										BgL_initza2za2_3166 = BgL_arg1696z00_2847;
										BgL_initza2za2_2820 = BgL_initza2za2_3166;
										BgL_globalsz00_2819 = BgL_globalsz00_3165;
										goto BgL_loopz00_2818;
									}
								}
							}
					}
				}
			}
		}

	}



/* evmodule-comp */
	obj_t BGl_evmodulezd2compzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 202 */
			if (CBOOL(BGl_za2allzd2modulezd2evalzf3za2zf3zzmodule_evalz00))
				{	/* Module/eval.scm 219 */
					BgL_nodez00_bglt BgL_arg1733z00_1988;

					{	/* Module/eval.scm 219 */
						obj_t BgL_arg1738z00_1990;

						{	/* Module/eval.scm 219 */
							obj_t BgL_arg1739z00_1991;
							obj_t BgL_arg1740z00_1992;

							{	/* Module/eval.scm 219 */
								obj_t BgL_arg1741z00_1993;

								{	/* Module/eval.scm 219 */
									obj_t BgL_arg1742z00_1994;

									BgL_arg1742z00_1994 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BNIL);
									BgL_arg1741z00_1993 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
										BgL_arg1742z00_1994);
								}
								BgL_arg1739z00_1991 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
									BgL_arg1741z00_1993);
							}
							{	/* Module/eval.scm 220 */
								obj_t BgL_arg1743z00_1995;
								obj_t BgL_arg1744z00_1996;

								{	/* Module/eval.scm 220 */
									obj_t BgL_arg1745z00_1997;

									BgL_arg1745z00_1997 =
										MAKE_YOUNG_PAIR(BGl_za2moduleza2z00zzmodule_modulez00,
										BNIL);
									BgL_arg1743z00_1995 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
										BgL_arg1745z00_1997);
								}
								{	/* Module/eval.scm 220 */
									obj_t BgL_arg1746z00_1998;
									obj_t BgL_arg1747z00_1999;

									{	/* Module/eval.scm 220 */
										obj_t BgL_arg1754z00_2000;

										BgL_arg1754z00_2000 =
											MAKE_YOUNG_PAIR(BGl_za2srczd2filesza2zd2zzengine_paramz00,
											BNIL);
										BgL_arg1746z00_1998 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
											BgL_arg1754z00_2000);
									}
									{	/* Module/eval.scm 220 */
										obj_t BgL_arg1755z00_2001;
										obj_t BgL_arg1756z00_2002;

										{	/* Module/eval.scm 220 */
											obj_t BgL_arg1757z00_2003;

											BgL_arg1757z00_2003 =
												MAKE_YOUNG_PAIR
												(BGl_za2modulezd2locationza2zd2zzmodule_modulez00,
												BNIL);
											BgL_arg1755z00_2001 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
												BgL_arg1757z00_2003);
										}
										{	/* Module/eval.scm 221 */
											obj_t BgL_arg1759z00_2004;

											{	/* Module/eval.scm 221 */
												obj_t BgL_l1304z00_2005;

												BgL_l1304z00_2005 =
													BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00
													(CNST_TABLE_REF(((long) 19)));
												if (NULLP(BgL_l1304z00_2005))
													{	/* Module/eval.scm 221 */
														BgL_arg1759z00_2004 = BNIL;
													}
												else
													{	/* Module/eval.scm 221 */
														obj_t BgL_head1306z00_2007;

														{	/* Module/eval.scm 221 */
															obj_t BgL_arg1778z00_2019;

															{	/* Module/eval.scm 221 */
																obj_t BgL_arg1779z00_2020;

																BgL_arg1779z00_2020 =
																	CAR(((obj_t) BgL_l1304z00_2005));
																BgL_arg1778z00_2019 =
																	BGl_exportzd2globalze70z35zzmodule_evalz00
																	(BgL_arg1779z00_2020);
															}
															{	/* Module/eval.scm 221 */
																obj_t BgL_res2118z00_2632;

																BgL_res2118z00_2632 =
																	MAKE_YOUNG_PAIR(BgL_arg1778z00_2019, BNIL);
																BgL_head1306z00_2007 = BgL_res2118z00_2632;
															}
														}
														{	/* Module/eval.scm 221 */
															obj_t BgL_g1309z00_2008;

															BgL_g1309z00_2008 =
																CDR(((obj_t) BgL_l1304z00_2005));
															{
																obj_t BgL_l1304z00_2010;
																obj_t BgL_tail1307z00_2011;

																BgL_l1304z00_2010 = BgL_g1309z00_2008;
																BgL_tail1307z00_2011 = BgL_head1306z00_2007;
															BgL_zc3z04anonymousza31761ze3z87_2012:
																if (NULLP(BgL_l1304z00_2010))
																	{	/* Module/eval.scm 221 */
																		BgL_arg1759z00_2004 = BgL_head1306z00_2007;
																	}
																else
																	{	/* Module/eval.scm 221 */
																		obj_t BgL_newtail1308z00_2014;

																		{	/* Module/eval.scm 221 */
																			obj_t BgL_arg1771z00_2016;

																			{	/* Module/eval.scm 221 */
																				obj_t BgL_arg1775z00_2017;

																				BgL_arg1775z00_2017 =
																					CAR(((obj_t) BgL_l1304z00_2010));
																				BgL_arg1771z00_2016 =
																					BGl_exportzd2globalze70z35zzmodule_evalz00
																					(BgL_arg1775z00_2017);
																			}
																			{	/* Module/eval.scm 221 */
																				obj_t BgL_res2120z00_2636;

																				BgL_res2120z00_2636 =
																					MAKE_YOUNG_PAIR(BgL_arg1771z00_2016,
																					BNIL);
																				BgL_newtail1308z00_2014 =
																					BgL_res2120z00_2636;
																			}
																		}
																		SET_CDR(BgL_tail1307z00_2011,
																			BgL_newtail1308z00_2014);
																		{	/* Module/eval.scm 221 */
																			obj_t BgL_arg1768z00_2015;

																			BgL_arg1768z00_2015 =
																				CDR(((obj_t) BgL_l1304z00_2010));
																			{
																				obj_t BgL_tail1307z00_3204;
																				obj_t BgL_l1304z00_3203;

																				BgL_l1304z00_3203 = BgL_arg1768z00_2015;
																				BgL_tail1307z00_3204 =
																					BgL_newtail1308z00_2014;
																				BgL_tail1307z00_2011 =
																					BgL_tail1307z00_3204;
																				BgL_l1304z00_2010 = BgL_l1304z00_3203;
																				goto
																					BgL_zc3z04anonymousza31761ze3z87_2012;
																			}
																		}
																	}
															}
														}
													}
											}
											BgL_arg1756z00_2002 =
												BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
												(BgL_arg1759z00_2004, BNIL);
										}
										BgL_arg1747z00_1999 =
											MAKE_YOUNG_PAIR(BgL_arg1755z00_2001, BgL_arg1756z00_2002);
									}
									BgL_arg1744z00_1996 =
										MAKE_YOUNG_PAIR(BgL_arg1746z00_1998, BgL_arg1747z00_1999);
								}
								BgL_arg1740z00_1992 =
									MAKE_YOUNG_PAIR(BgL_arg1743z00_1995, BgL_arg1744z00_1996);
							}
							BgL_arg1738z00_1990 =
								MAKE_YOUNG_PAIR(BgL_arg1739z00_1991, BgL_arg1740z00_1992);
						}
						BgL_arg1733z00_1988 =
							BGl_sexpzd2ze3nodez31zzast_sexpz00(BgL_arg1738z00_1990, BNIL,
							BFALSE, CNST_TABLE_REF(((long) 20)));
					}
					{	/* Module/eval.scm 217 */
						obj_t BgL_list1734z00_1989;

						BgL_list1734z00_1989 =
							MAKE_YOUNG_PAIR(((obj_t) BgL_arg1733z00_1988), BNIL);
						return BgL_list1734z00_1989;
					}
				}
			else
				{	/* Module/eval.scm 216 */
					return BNIL;
				}
		}

	}



/* export-global~0 */
	obj_t BGl_exportzd2globalze70z35zzmodule_evalz00(obj_t BgL_gz00_2021)
	{
		{	/* Module/eval.scm 205 */
			((((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_gz00_2021)))->BgL_evalzf3zf3) =
				((bool_t) ((bool_t) 1)), BUNSPEC);
			{	/* Module/eval.scm 206 */
				obj_t BgL_idz00_2023;

				BgL_idz00_2023 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_gz00_2021))))->BgL_idz00);
				{	/* Module/eval.scm 208 */
					bool_t BgL_test2236z00_3219;

					{	/* Module/eval.scm 208 */
						BgL_valuez00_bglt BgL_arg1846z00_2054;

						BgL_arg1846z00_2054 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_gz00_2021))))->BgL_valuez00);
						{	/* Module/eval.scm 208 */
							bool_t BgL_res2115z00_2625;

							BgL_res2115z00_2625 =
								BGl_isazf3zf3zz__objectz00(
								((obj_t) BgL_arg1846z00_2054), BGl_svarz00zzast_varz00);
							BgL_test2236z00_3219 = BgL_res2115z00_2625;
						}
					}
					if (BgL_test2236z00_3219)
						{	/* Module/eval.scm 208 */
							{	/* Module/eval.scm 209 */
								obj_t BgL_vz00_2627;

								BgL_vz00_2627 = CNST_TABLE_REF(((long) 11));
								((((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_gz00_2021)))->
										BgL_accessz00) = ((obj_t) BgL_vz00_2627), BUNSPEC);
							}
							{	/* Module/eval.scm 210 */
								obj_t BgL_arg1784z00_2026;

								{	/* Module/eval.scm 210 */
									obj_t BgL_arg1790z00_2027;

									{	/* Module/eval.scm 210 */
										obj_t BgL_arg1796z00_2028;
										obj_t BgL_arg1798z00_2029;

										{	/* Module/eval.scm 210 */
											obj_t BgL_arg1801z00_2030;

											BgL_arg1801z00_2030 =
												MAKE_YOUNG_PAIR(BgL_idz00_2023, BNIL);
											BgL_arg1796z00_2028 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
												BgL_arg1801z00_2030);
										}
										{	/* Module/eval.scm 210 */
											obj_t BgL_arg1808z00_2031;
											obj_t BgL_arg1809z00_2032;

											{	/* Module/eval.scm 210 */
												obj_t BgL_arg1811z00_2033;

												BgL_arg1811z00_2033 =
													MAKE_YOUNG_PAIR(BgL_idz00_2023, BNIL);
												BgL_arg1808z00_2031 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
													BgL_arg1811z00_2033);
											}
											{	/* Module/eval.scm 210 */
												obj_t BgL_arg1820z00_2034;

												BgL_arg1820z00_2034 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
												BgL_arg1809z00_2032 =
													MAKE_YOUNG_PAIR(BFALSE, BgL_arg1820z00_2034);
											}
											BgL_arg1798z00_2029 =
												MAKE_YOUNG_PAIR(BgL_arg1808z00_2031,
												BgL_arg1809z00_2032);
										}
										BgL_arg1790z00_2027 =
											MAKE_YOUNG_PAIR(BgL_arg1796z00_2028, BgL_arg1798z00_2029);
									}
									BgL_arg1784z00_2026 =
										MAKE_YOUNG_PAIR(BINT(((long) 1)), BgL_arg1790z00_2027);
								}
								return
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
									BgL_arg1784z00_2026);
						}}
					else
						{	/* Module/eval.scm 211 */
							bool_t BgL_test2237z00_3242;

							{	/* Module/eval.scm 211 */
								BgL_valuez00_bglt BgL_arg1845z00_2053;

								BgL_arg1845z00_2053 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt)
												((BgL_globalz00_bglt) BgL_gz00_2021))))->BgL_valuez00);
								{	/* Module/eval.scm 211 */
									bool_t BgL_res2116z00_2629;

									BgL_res2116z00_2629 =
										BGl_isazf3zf3zz__objectz00(
										((obj_t) BgL_arg1845z00_2053), BGl_scnstz00zzast_varz00);
									BgL_test2237z00_3242 = BgL_res2116z00_2629;
								}
							}
							if (BgL_test2237z00_3242)
								{	/* Module/eval.scm 212 */
									obj_t BgL_arg1824z00_2037;

									{	/* Module/eval.scm 212 */
										obj_t BgL_arg1825z00_2038;

										{	/* Module/eval.scm 212 */
											obj_t BgL_arg1826z00_2039;
											obj_t BgL_arg1827z00_2040;

											{	/* Module/eval.scm 212 */
												obj_t BgL_arg1828z00_2041;

												BgL_arg1828z00_2041 =
													MAKE_YOUNG_PAIR(BgL_idz00_2023, BNIL);
												BgL_arg1826z00_2039 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
													BgL_arg1828z00_2041);
											}
											{	/* Module/eval.scm 212 */
												obj_t BgL_arg1829z00_2042;
												obj_t BgL_arg1830z00_2043;

												{	/* Module/eval.scm 212 */
													obj_t BgL_arg1831z00_2044;

													BgL_arg1831z00_2044 =
														MAKE_YOUNG_PAIR(BgL_idz00_2023, BNIL);
													BgL_arg1829z00_2042 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
														BgL_arg1831z00_2044);
												}
												{	/* Module/eval.scm 212 */
													obj_t BgL_arg1832z00_2045;

													BgL_arg1832z00_2045 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													BgL_arg1830z00_2043 =
														MAKE_YOUNG_PAIR(BFALSE, BgL_arg1832z00_2045);
												}
												BgL_arg1827z00_2040 =
													MAKE_YOUNG_PAIR(BgL_arg1829z00_2042,
													BgL_arg1830z00_2043);
											}
											BgL_arg1825z00_2038 =
												MAKE_YOUNG_PAIR(BgL_arg1826z00_2039,
												BgL_arg1827z00_2040);
										}
										BgL_arg1824z00_2037 =
											MAKE_YOUNG_PAIR(BINT(((long) 1)), BgL_arg1825z00_2038);
									}
									return
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
										BgL_arg1824z00_2037);
								}
							else
								{	/* Module/eval.scm 214 */
									obj_t BgL_arg1833z00_2046;

									{	/* Module/eval.scm 214 */
										obj_t BgL_arg1835z00_2047;

										{	/* Module/eval.scm 214 */
											obj_t BgL_arg1836z00_2048;
											obj_t BgL_arg1838z00_2049;

											{	/* Module/eval.scm 214 */
												obj_t BgL_arg1840z00_2050;

												BgL_arg1840z00_2050 =
													MAKE_YOUNG_PAIR(BgL_idz00_2023, BNIL);
												BgL_arg1836z00_2048 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
													BgL_arg1840z00_2050);
											}
											{	/* Module/eval.scm 214 */
												obj_t BgL_arg1841z00_2051;

												{	/* Module/eval.scm 214 */
													obj_t BgL_arg1842z00_2052;

													BgL_arg1842z00_2052 = MAKE_YOUNG_PAIR(BFALSE, BNIL);
													BgL_arg1841z00_2051 =
														MAKE_YOUNG_PAIR(BFALSE, BgL_arg1842z00_2052);
												}
												BgL_arg1838z00_2049 =
													MAKE_YOUNG_PAIR(BgL_idz00_2023, BgL_arg1841z00_2051);
											}
											BgL_arg1835z00_2047 =
												MAKE_YOUNG_PAIR(BgL_arg1836z00_2048,
												BgL_arg1838z00_2049);
										}
										BgL_arg1833z00_2046 =
											MAKE_YOUNG_PAIR(BINT(((long) 0)), BgL_arg1835z00_2047);
									}
									return
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 22)),
										BgL_arg1833z00_2046);
		}}}}}

	}



/* get-library-info */
	obj_t BGl_getzd2libraryzd2infoz00zzmodule_evalz00(obj_t BgL_libraryz00_82)
	{
		{	/* Module/eval.scm 228 */
			{	/* Module/eval.scm 229 */
				obj_t BgL__ortest_1110z00_2056;

				BgL__ortest_1110z00_2056 =
					BGl_libraryzd2infozd2zz__libraryz00(BgL_libraryz00_82);
				if (CBOOL(BgL__ortest_1110z00_2056))
					{	/* Module/eval.scm 229 */
						return BgL__ortest_1110z00_2056;
					}
				else
					{	/* Module/eval.scm 230 */
						obj_t BgL_initz00_2057;

						BgL_initz00_2057 =
							BGl_libraryzd2initzd2filez00zz__libraryz00(BgL_libraryz00_82);
						{	/* Module/eval.scm 230 */
							obj_t BgL_pathz00_2058;

							BgL_pathz00_2058 =
								BGl_findzd2filezf2pathz20zz__osz00(BgL_initz00_2057,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
							{	/* Module/eval.scm 231 */

								if (CBOOL(BgL_pathz00_2058))
									{	/* Module/eval.scm 232 */
										{	/* Module/eval.scm 234 */
											obj_t BgL_envz00_2060;

											BgL_envz00_2060 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Module/eval.scm 234 */

												BGl_loadqz00zz__evalz00(BgL_pathz00_2058,
													BgL_envz00_2060);
											}
										}
										{	/* Module/eval.scm 235 */
											obj_t BgL_iz00_2061;

											BgL_iz00_2061 =
												BGl_libraryzd2infozd2zz__libraryz00(BgL_libraryz00_82);
											if (CBOOL(BgL_iz00_2061))
												{	/* Module/eval.scm 236 */
													return BgL_iz00_2061;
												}
											else
												{	/* Module/eval.scm 238 */
													obj_t BgL_arg1847z00_2062;

													{	/* Module/eval.scm 238 */
														obj_t BgL_list1851z00_2065;

														BgL_list1851z00_2065 =
															MAKE_YOUNG_PAIR(BgL_initz00_2057, BNIL);
														BgL_arg1847z00_2062 =
															BGl_formatz00zz__r4_output_6_10_3z00
															(BGl_string2150z00zzmodule_evalz00,
															BgL_list1851z00_2065);
													}
													{	/* Module/eval.scm 238 */
														obj_t BgL_list1848z00_2063;

														{	/* Module/eval.scm 238 */
															obj_t BgL_arg1850z00_2064;

															BgL_arg1850z00_2064 =
																MAKE_YOUNG_PAIR(BgL_arg1847z00_2062, BNIL);
															BgL_list1848z00_2063 =
																MAKE_YOUNG_PAIR(BgL_libraryz00_82,
																BgL_arg1850z00_2064);
														}
														return
															BGl_warningz00zz__errorz00(BgL_list1848z00_2063);
													}
												}
										}
									}
								else
									{	/* Module/eval.scm 239 */
										obj_t BgL_arg1852z00_2066;

										{	/* Module/eval.scm 239 */
											obj_t BgL_list1856z00_2069;

											BgL_list1856z00_2069 =
												MAKE_YOUNG_PAIR(BgL_initz00_2057, BNIL);
											BgL_arg1852z00_2066 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string2151z00zzmodule_evalz00,
												BgL_list1856z00_2069);
										}
										{	/* Module/eval.scm 239 */
											obj_t BgL_list1853z00_2067;

											{	/* Module/eval.scm 239 */
												obj_t BgL_arg1855z00_2068;

												BgL_arg1855z00_2068 =
													MAKE_YOUNG_PAIR(BgL_arg1852z00_2066, BNIL);
												BgL_list1853z00_2067 =
													MAKE_YOUNG_PAIR(BgL_libraryz00_82,
													BgL_arg1855z00_2068);
											}
											return BGl_warningz00zz__errorz00(BgL_list1853z00_2067);
										}
									}
							}
						}
					}
			}
		}

	}



/* library_e */
	obj_t BGl_library_ez00zzmodule_evalz00(obj_t BgL_libz00_83)
	{
		{	/* Module/eval.scm 246 */
			{	/* Module/eval.scm 247 */
				obj_t BgL_infoz00_2070;

				BgL_infoz00_2070 =
					BGl_getzd2libraryzd2infoz00zzmodule_evalz00(BgL_libz00_83);
				{	/* Module/eval.scm 248 */
					bool_t BgL_test2241z00_3296;

					{	/* Module/eval.scm 248 */
						bool_t BgL_test2242z00_3297;

						if (STRUCTP(BgL_infoz00_2070))
							{	/* Module/eval.scm 248 */
								BgL_test2242z00_3297 =
									(STRUCT_KEY(BgL_infoz00_2070) == CNST_TABLE_REF(((long) 23)));
							}
						else
							{	/* Module/eval.scm 248 */
								BgL_test2242z00_3297 = ((bool_t) 0);
							}
						if (BgL_test2242z00_3297)
							{	/* Module/eval.scm 248 */
								BgL_test2241z00_3296 =
									CBOOL(STRUCT_REF(BgL_infoz00_2070, (int) (((long) 6))));
							}
						else
							{	/* Module/eval.scm 248 */
								BgL_test2241z00_3296 = ((bool_t) 0);
							}
					}
					if (BgL_test2241z00_3296)
						{	/* Module/eval.scm 249 */
							obj_t BgL_initz00_2073;

							BgL_initz00_2073 =
								BGl_modulezd2initializa7ationzd2idza7zzmodule_modulez00
								(STRUCT_REF(BgL_infoz00_2070, (int) (((long) 6))));
							{	/* Module/eval.scm 249 */
								BgL_globalz00_bglt BgL_gloz00_2074;

								{	/* Module/eval.scm 252 */
									obj_t BgL_arg1904z00_2111;
									obj_t BgL_arg1905z00_2112;

									BgL_arg1904z00_2111 =
										STRUCT_REF(BgL_infoz00_2070, (int) (((long) 6)));
									{	/* Module/eval.scm 254 */
										obj_t BgL_arg1906z00_2113;
										obj_t BgL_arg1907z00_2114;

										{	/* Module/eval.scm 254 */
											obj_t BgL_res2124z00_2650;

											{	/* Module/eval.scm 254 */
												obj_t BgL_arg1466z00_2649;

												BgL_arg1466z00_2649 =
													SYMBOL_TO_STRING(BgL_initz00_2073);
												BgL_res2124z00_2650 =
													BGl_stringzd2copyzd2zz__r4_strings_6_7z00
													(BgL_arg1466z00_2649);
											}
											BgL_arg1906z00_2113 = BgL_res2124z00_2650;
										}
										{	/* Module/eval.scm 255 */
											obj_t BgL_arg1908z00_2115;

											BgL_arg1908z00_2115 =
												STRUCT_REF(BgL_infoz00_2070, (int) (((long) 6)));
											{	/* Module/eval.scm 255 */
												obj_t BgL_res2125z00_2654;

												{	/* Module/eval.scm 255 */
													obj_t BgL_arg1466z00_2653;

													BgL_arg1466z00_2653 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1908z00_2115));
													BgL_res2125z00_2654 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_2653);
												}
												BgL_arg1907z00_2114 = BgL_res2125z00_2654;
										}}
										BgL_arg1905z00_2112 =
											bigloo_module_mangle(BgL_arg1906z00_2113,
											BgL_arg1907z00_2114);
									}
									BgL_gloz00_2074 =
										BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
										(BgL_initz00_2073, BgL_initz00_2073, BgL_arg1904z00_2111,
										BgL_arg1905z00_2112, CNST_TABLE_REF(((long) 24)),
										CNST_TABLE_REF(((long) 25)), ((bool_t) 0), ((bool_t) 0),
										BFALSE, BFALSE);
								}
								{	/* Module/eval.scm 250 */

									{	/* Module/eval.scm 257 */
										bool_t BgL_test2244z00_3322;

										{	/* Module/eval.scm 257 */
											obj_t BgL_arg1903z00_2110;

											BgL_arg1903z00_2110 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											BgL_test2244z00_3322 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_arg1903z00_2110)))->
												BgL_pragmazd2supportzd2);
										}
										if (BgL_test2244z00_3322)
											{	/* Module/eval.scm 259 */
												obj_t BgL_arg1861z00_2077;

												{	/* Module/eval.scm 259 */
													obj_t BgL_arg1862z00_2078;
													obj_t BgL_arg1863z00_2079;

													{	/* Module/eval.scm 259 */
														obj_t BgL_arg1865z00_2080;
														obj_t BgL_arg1866z00_2081;

														{	/* Module/eval.scm 259 */
															obj_t BgL_arg1868z00_2082;

															{	/* Module/eval.scm 259 */
																obj_t BgL_arg1870z00_2083;

																BgL_arg1870z00_2083 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
																	BNIL);
																BgL_arg1868z00_2082 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 27)),
																	BgL_arg1870z00_2083);
															}
															BgL_arg1865z00_2080 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1868z00_2082);
														}
														{	/* Module/eval.scm 259 */
															obj_t BgL_arg1871z00_2084;
															obj_t BgL_arg1872z00_2085;

															{	/* Module/eval.scm 259 */
																obj_t BgL_arg1873z00_2086;

																BgL_arg1873z00_2086 =
																	MAKE_YOUNG_PAIR(BgL_libz00_83, BNIL);
																BgL_arg1871z00_2084 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg1873z00_2086);
															}
															{	/* Module/eval.scm 259 */
																obj_t BgL_arg1874z00_2087;

																BgL_arg1874z00_2087 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 28)),
																	BNIL);
																BgL_arg1872z00_2085 =
																	MAKE_YOUNG_PAIR(BgL_arg1874z00_2087, BNIL);
															}
															BgL_arg1866z00_2081 =
																MAKE_YOUNG_PAIR(BgL_arg1871z00_2084,
																BgL_arg1872z00_2085);
														}
														BgL_arg1862z00_2078 =
															MAKE_YOUNG_PAIR(BgL_arg1865z00_2080,
															BgL_arg1866z00_2081);
													}
													{	/* Module/eval.scm 260 */
														obj_t BgL_arg1876z00_2088;
														obj_t BgL_arg1877z00_2089;

														{	/* Module/eval.scm 260 */
															obj_t BgL_arg1878z00_2090;

															{	/* Module/eval.scm 260 */
																obj_t BgL_arg1879z00_2091;

																{	/* Module/eval.scm 260 */
																	obj_t BgL_arg1881z00_2092;

																	{	/* Module/eval.scm 260 */
																		obj_t BgL_arg1882z00_2093;

																		{	/* Module/eval.scm 260 */
																			obj_t BgL_arg1883z00_2094;

																			{	/* Module/eval.scm 260 */
																				obj_t BgL_arg1884z00_2095;

																				{	/* Module/eval.scm 260 */
																					obj_t BgL_res2127z00_2660;

																					{	/* Module/eval.scm 260 */
																						obj_t BgL_symbolz00_2658;

																						BgL_symbolz00_2658 =
																							BGl_za2moduleza2z00zzmodule_modulez00;
																						{	/* Module/eval.scm 260 */
																							obj_t BgL_arg1466z00_2659;

																							BgL_arg1466z00_2659 =
																								SYMBOL_TO_STRING
																								(BgL_symbolz00_2658);
																							BgL_res2127z00_2660 =
																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																								(BgL_arg1466z00_2659);
																					}}
																					BgL_arg1884z00_2095 =
																						BgL_res2127z00_2660;
																				}
																				{	/* Module/eval.scm 260 */
																					obj_t BgL_list1885z00_2096;

																					BgL_list1885z00_2096 =
																						MAKE_YOUNG_PAIR(BgL_arg1884z00_2095,
																						BNIL);
																					BgL_arg1883z00_2094 =
																						BGl_formatz00zz__r4_output_6_10_3z00
																						(BGl_string2152z00zzmodule_evalz00,
																						BgL_list1885z00_2096);
																			}}
																			BgL_arg1882z00_2093 =
																				MAKE_YOUNG_PAIR(BgL_arg1883z00_2094,
																				BNIL);
																		}
																		BgL_arg1881z00_2092 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					29)), BgL_arg1882z00_2093);
																	}
																	BgL_arg1879z00_2091 =
																		MAKE_YOUNG_PAIR(BgL_arg1881z00_2092, BNIL);
																}
																BgL_arg1878z00_2090 =
																	MAKE_YOUNG_PAIR(BINT(((long) 0)),
																	BgL_arg1879z00_2091);
															}
															BgL_arg1876z00_2088 =
																MAKE_YOUNG_PAIR(
																((obj_t) BgL_gloz00_2074), BgL_arg1878z00_2090);
														}
														{	/* Module/eval.scm 261 */
															obj_t BgL_arg1886z00_2097;

															{	/* Module/eval.scm 261 */
																obj_t BgL_arg1887z00_2098;
																obj_t BgL_arg1888z00_2099;

																{	/* Module/eval.scm 261 */
																	obj_t BgL_arg1889z00_2100;

																	{	/* Module/eval.scm 261 */
																		obj_t BgL_arg1891z00_2101;

																		BgL_arg1891z00_2101 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					26)), BNIL);
																		BgL_arg1889z00_2100 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					30)), BgL_arg1891z00_2101);
																	}
																	BgL_arg1887z00_2098 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																		BgL_arg1889z00_2100);
																}
																{	/* Module/eval.scm 261 */
																	obj_t BgL_arg1892z00_2102;

																	{	/* Module/eval.scm 261 */
																		obj_t BgL_arg1893z00_2103;

																		BgL_arg1893z00_2103 =
																			MAKE_YOUNG_PAIR(BgL_libz00_83, BNIL);
																		BgL_arg1892z00_2102 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					18)), BgL_arg1893z00_2103);
																	}
																	BgL_arg1888z00_2099 =
																		MAKE_YOUNG_PAIR(BgL_arg1892z00_2102, BNIL);
																}
																BgL_arg1886z00_2097 =
																	MAKE_YOUNG_PAIR(BgL_arg1887z00_2098,
																	BgL_arg1888z00_2099);
															}
															BgL_arg1877z00_2089 =
																MAKE_YOUNG_PAIR(BgL_arg1886z00_2097, BNIL);
														}
														BgL_arg1863z00_2079 =
															MAKE_YOUNG_PAIR(BgL_arg1876z00_2088,
															BgL_arg1877z00_2089);
													}
													BgL_arg1861z00_2077 =
														MAKE_YOUNG_PAIR(BgL_arg1862z00_2078,
														BgL_arg1863z00_2079);
												}
												return
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
													BgL_arg1861z00_2077);
											}
										else
											{	/* Module/eval.scm 262 */
												obj_t BgL_arg1895z00_2104;
												obj_t BgL_arg1896z00_2105;

												{	/* Module/eval.scm 262 */
													obj_t BgL_arg1897z00_2106;

													{	/* Module/eval.scm 262 */
														obj_t BgL_arg1898z00_2107;

														BgL_arg1898z00_2107 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
															BNIL);
														BgL_arg1897z00_2106 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 31)),
															BgL_arg1898z00_2107);
													}
													BgL_arg1895z00_2104 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
														BgL_arg1897z00_2106);
												}
												{	/* Module/eval.scm 262 */
													obj_t BgL_arg1901z00_2108;

													{	/* Module/eval.scm 262 */
														obj_t BgL_arg1902z00_2109;

														BgL_arg1902z00_2109 =
															MAKE_YOUNG_PAIR(BgL_libz00_83, BNIL);
														BgL_arg1901z00_2108 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
															BgL_arg1902z00_2109);
													}
													BgL_arg1896z00_2105 =
														MAKE_YOUNG_PAIR(BgL_arg1901z00_2108, BNIL);
												}
												return
													MAKE_YOUNG_PAIR(BgL_arg1895z00_2104,
													BgL_arg1896z00_2105);
											}
									}
								}
							}
						}
					else
						{	/* Module/eval.scm 263 */
							obj_t BgL_list1910z00_2117;

							{	/* Module/eval.scm 263 */
								obj_t BgL_arg1911z00_2118;

								BgL_arg1911z00_2118 =
									MAKE_YOUNG_PAIR(BGl_string2153z00zzmodule_evalz00, BNIL);
								BgL_list1910z00_2117 =
									MAKE_YOUNG_PAIR(BgL_libz00_83, BgL_arg1911z00_2118);
							}
							return BGl_warningz00zz__errorz00(BgL_list1910z00_2117);
						}
				}
			}
		}

	}



/* set-eval-types! */
	obj_t BGl_setzd2evalzd2typesz12z12zzmodule_evalz00(obj_t BgL_globalz00_84)
	{
		{	/* Module/eval.scm 271 */
			{	/* Module/eval.scm 272 */
				BgL_valuez00_bglt BgL_valz00_2120;

				BgL_valz00_2120 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_globalz00_84))))->BgL_valuez00);
				{	/* Module/eval.scm 273 */
					bool_t BgL_test2245z00_3385;

					{	/* Module/eval.scm 273 */
						bool_t BgL_res2128z00_2662;

						BgL_res2128z00_2662 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_valz00_2120), BGl_sfunz00zzast_varz00);
						BgL_test2245z00_3385 = BgL_res2128z00_2662;
					}
					if (BgL_test2245z00_3385)
						{	/* Module/eval.scm 273 */
							return BFALSE;
						}
					else
						{	/* Module/eval.scm 274 */
							BgL_typez00_bglt BgL_typez00_2122;

							BgL_typez00_2122 =
								(((BgL_variablez00_bglt) COBJECT(
										((BgL_variablez00_bglt)
											((BgL_globalz00_bglt) BgL_globalz00_84))))->BgL_typez00);
							if ((((obj_t) BgL_typez00_2122) == BGl_za2_za2z00zztype_cachez00))
								{	/* Module/eval.scm 277 */
									BgL_typez00_bglt BgL_vz00_2665;

									BgL_vz00_2665 =
										((BgL_typez00_bglt) BGl_za2objza2z00zztype_cachez00);
									return
										((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt)
														((BgL_globalz00_bglt) BgL_globalz00_84))))->
											BgL_typez00) =
										((BgL_typez00_bglt) BgL_vz00_2665), BUNSPEC);
								}
							else
								{	/* Module/eval.scm 276 */
									if (BGl_bigloozd2typezf3z21zztype_typez00(BgL_typez00_2122))
										{	/* Module/eval.scm 278 */
											return BFALSE;
										}
									else
										{	/* Module/eval.scm 281 */
											obj_t BgL_arg1915z00_2125;

											BgL_arg1915z00_2125 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_globalz00_84))))->
												BgL_idz00);
											return
												BGl_errorz00zz__errorz00
												(BGl_string2154z00zzmodule_evalz00,
												BGl_string2155z00zzmodule_evalz00, BgL_arg1915z00_2125);
										}
								}
						}
				}
			}
		}

	}



/* get-evaluated-globals */
	obj_t BGl_getzd2evaluatedzd2globalsz00zzmodule_evalz00(obj_t BgL_scopez00_85)
	{
		{	/* Module/eval.scm 286 */
			{	/* Module/eval.scm 287 */
				obj_t BgL_globalsz00_2773;

				BgL_globalsz00_2773 = MAKE_CELL(BNIL);
				{	/* Module/eval.scm 287 */

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_scopez00_85,
								CNST_TABLE_REF(((long) 32)))))
						{	/* Module/eval.scm 289 */
							obj_t BgL_scopezd2lstzd2_2128;

							if ((BgL_scopez00_85 == CNST_TABLE_REF(((long) 12))))
								{	/* Module/eval.scm 289 */
									BgL_scopezd2lstzd2_2128 = CNST_TABLE_REF(((long) 33));
								}
							else
								{	/* Module/eval.scm 289 */
									if ((BgL_scopez00_85 == CNST_TABLE_REF(((long) 19))))
										{	/* Module/eval.scm 289 */
											BgL_scopezd2lstzd2_2128 = CNST_TABLE_REF(((long) 34));
										}
									else
										{	/* Module/eval.scm 289 */
											BgL_scopezd2lstzd2_2128 = CNST_TABLE_REF(((long) 34));
								}}
							{	/* Module/eval.scm 295 */
								obj_t BgL_zc3z04anonymousza31919ze3z87_2767;

								BgL_zc3z04anonymousza31919ze3z87_2767 =
									MAKE_FX_PROCEDURE
									(BGl_z62zc3z04anonymousza31919ze3ze5zzmodule_evalz00,
									(int) (((long) 1)), (int) (((long) 2)));
								PROCEDURE_SET(BgL_zc3z04anonymousza31919ze3z87_2767,
									(int) (((long) 0)), ((obj_t) BgL_globalsz00_2773));
								PROCEDURE_SET(BgL_zc3z04anonymousza31919ze3z87_2767,
									(int) (((long) 1)), BgL_scopezd2lstzd2_2128);
								BGl_forzd2eachzd2globalz12z12zzast_envz00
									(BgL_zc3z04anonymousza31919ze3z87_2767, BNIL);
						}}
					else
						{	/* Module/eval.scm 288 */
							BFALSE;
						}
					{
						obj_t BgL_evalzd2exportedzd2_2150;
						obj_t BgL_resz00_2151;

						BgL_evalzd2exportedzd2_2150 =
							BGl_za2evalzd2exportedza2zd2zzmodule_evalz00;
						BgL_resz00_2151 = CELL_REF(BgL_globalsz00_2773);
					BgL_zc3z04anonymousza31929ze3z87_2152:
						if (NULLP(BgL_evalzd2exportedzd2_2150))
							{	/* Module/eval.scm 301 */
								return BgL_resz00_2151;
							}
						else
							{	/* Module/eval.scm 303 */
								obj_t BgL_varzd2modulezd2posz00_2154;

								BgL_varzd2modulezd2posz00_2154 =
									CAR(((obj_t) BgL_evalzd2exportedzd2_2150));
								{	/* Module/eval.scm 304 */
									obj_t BgL_gz00_2155;

									{	/* Module/eval.scm 304 */
										bool_t BgL_test2252z00_3430;

										{	/* Module/eval.scm 304 */
											obj_t BgL_pairz00_2679;

											BgL_pairz00_2679 =
												CDR(((obj_t) BgL_varzd2modulezd2posz00_2154));
											BgL_test2252z00_3430 = CBOOL(CAR(BgL_pairz00_2679));
										}
										if (BgL_test2252z00_3430)
											{	/* Module/eval.scm 305 */
												obj_t BgL_arg1946z00_2171;
												obj_t BgL_arg1947z00_2172;

												BgL_arg1946z00_2171 =
													CAR(((obj_t) BgL_varzd2modulezd2posz00_2154));
												{	/* Module/eval.scm 306 */
													obj_t BgL_pairz00_2684;

													BgL_pairz00_2684 =
														CDR(((obj_t) BgL_varzd2modulezd2posz00_2154));
													BgL_arg1947z00_2172 = CAR(BgL_pairz00_2684);
												}
												BgL_gz00_2155 =
													BGl_findzd2globalzf2modulez20zzast_envz00
													(BgL_arg1946z00_2171, BgL_arg1947z00_2172);
											}
										else
											{	/* Module/eval.scm 307 */
												obj_t BgL_arg1948z00_2173;

												BgL_arg1948z00_2173 =
													CAR(((obj_t) BgL_varzd2modulezd2posz00_2154));
												BgL_gz00_2155 =
													BGl_findzd2globalzd2zzast_envz00(BgL_arg1948z00_2173,
													BNIL);
											}
									}
									if (BGl_isazf3zf3zz__objectz00(BgL_gz00_2155,
											BGl_globalz00zzast_varz00))
										{	/* Module/eval.scm 309 */
											if (
												(((BgL_globalz00_bglt) COBJECT(
															((BgL_globalz00_bglt) BgL_gz00_2155)))->
													BgL_evaluablezf3zf3))
												{	/* Module/eval.scm 326 */
													obj_t BgL_arg1933z00_2158;
													obj_t BgL_arg1934z00_2159;

													BgL_arg1933z00_2158 =
														CDR(((obj_t) BgL_evalzd2exportedzd2_2150));
													BgL_arg1934z00_2159 =
														MAKE_YOUNG_PAIR(BgL_gz00_2155, BgL_resz00_2151);
													{
														obj_t BgL_resz00_3453;
														obj_t BgL_evalzd2exportedzd2_3452;

														BgL_evalzd2exportedzd2_3452 = BgL_arg1933z00_2158;
														BgL_resz00_3453 = BgL_arg1934z00_2159;
														BgL_resz00_2151 = BgL_resz00_3453;
														BgL_evalzd2exportedzd2_2150 =
															BgL_evalzd2exportedzd2_3452;
														goto BgL_zc3z04anonymousza31929ze3z87_2152;
													}
												}
											else
												{	/* Module/eval.scm 317 */
													{	/* Module/eval.scm 319 */
														obj_t BgL_arg1935z00_2160;
														obj_t BgL_arg1936z00_2161;

														{	/* Module/eval.scm 319 */
															obj_t BgL_arg1938z00_2163;

															{	/* Module/eval.scm 319 */
																obj_t BgL_pairz00_2694;

																{	/* Module/eval.scm 319 */
																	obj_t BgL_pairz00_2693;

																	BgL_pairz00_2693 =
																		CDR(
																		((obj_t) BgL_varzd2modulezd2posz00_2154));
																	BgL_pairz00_2694 = CDR(BgL_pairz00_2693);
																}
																BgL_arg1938z00_2163 = CAR(BgL_pairz00_2694);
															}
															BgL_arg1935z00_2160 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_arg1938z00_2163);
														}
														BgL_arg1936z00_2161 =
															CAR(((obj_t) BgL_varzd2modulezd2posz00_2154));
														{	/* Module/eval.scm 318 */
															obj_t BgL_list1937z00_2162;

															BgL_list1937z00_2162 =
																MAKE_YOUNG_PAIR(BNIL, BNIL);
															BGl_userzd2errorzf2locationz20zztools_errorz00
																(BgL_arg1935z00_2160,
																BGl_string2156z00zzmodule_evalz00,
																BGl_string2157z00zzmodule_evalz00,
																BgL_arg1936z00_2161, BgL_list1937z00_2162);
														}
													}
													{	/* Module/eval.scm 324 */
														obj_t BgL_arg1939z00_2164;

														BgL_arg1939z00_2164 =
															CDR(((obj_t) BgL_evalzd2exportedzd2_2150));
														{
															obj_t BgL_evalzd2exportedzd2_3465;

															BgL_evalzd2exportedzd2_3465 = BgL_arg1939z00_2164;
															BgL_evalzd2exportedzd2_2150 =
																BgL_evalzd2exportedzd2_3465;
															goto BgL_zc3z04anonymousza31929ze3z87_2152;
														}
													}
												}
										}
									else
										{	/* Module/eval.scm 309 */
											{	/* Module/eval.scm 311 */
												obj_t BgL_arg1940z00_2165;
												obj_t BgL_arg1941z00_2166;

												{	/* Module/eval.scm 311 */
													obj_t BgL_arg1943z00_2168;

													{	/* Module/eval.scm 311 */
														obj_t BgL_pairz00_2702;

														{	/* Module/eval.scm 311 */
															obj_t BgL_pairz00_2701;

															BgL_pairz00_2701 =
																CDR(((obj_t) BgL_varzd2modulezd2posz00_2154));
															BgL_pairz00_2702 = CDR(BgL_pairz00_2701);
														}
														BgL_arg1943z00_2168 = CAR(BgL_pairz00_2702);
													}
													BgL_arg1940z00_2165 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_arg1943z00_2168);
												}
												BgL_arg1941z00_2166 =
													CAR(((obj_t) BgL_varzd2modulezd2posz00_2154));
												{	/* Module/eval.scm 310 */
													obj_t BgL_list1942z00_2167;

													BgL_list1942z00_2167 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BGl_userzd2errorzf2locationz20zztools_errorz00
														(BgL_arg1940z00_2165,
														BGl_string2156z00zzmodule_evalz00,
														BGl_string2158z00zzmodule_evalz00,
														BgL_arg1941z00_2166, BgL_list1942z00_2167);
												}
											}
											{	/* Module/eval.scm 316 */
												obj_t BgL_arg1944z00_2169;

												BgL_arg1944z00_2169 =
													CDR(((obj_t) BgL_evalzd2exportedzd2_2150));
												{
													obj_t BgL_evalzd2exportedzd2_3477;

													BgL_evalzd2exportedzd2_3477 = BgL_arg1944z00_2169;
													BgL_evalzd2exportedzd2_2150 =
														BgL_evalzd2exportedzd2_3477;
													goto BgL_zc3z04anonymousza31929ze3z87_2152;
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



/* &<@anonymous:1919> */
	obj_t BGl_z62zc3z04anonymousza31919ze3ze5zzmodule_evalz00(obj_t
		BgL_envz00_2768, obj_t BgL_gz00_2771)
	{
		{	/* Module/eval.scm 294 */
			{	/* Module/eval.scm 295 */
				obj_t BgL_globalsz00_2769;
				obj_t BgL_scopezd2lstzd2_2770;

				BgL_globalsz00_2769 =
					PROCEDURE_REF(BgL_envz00_2768, (int) (((long) 0)));
				BgL_scopezd2lstzd2_2770 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2768, (int) (((long) 1))));
				{	/* Module/eval.scm 295 */
					bool_t BgL_test2255z00_3483;

					if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_gz00_2771)))->BgL_importz00),
								BgL_scopezd2lstzd2_2770)))
						{	/* Module/eval.scm 295 */
							if (
								(((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_gz00_2771)))->
									BgL_evaluablezf3zf3))
								{	/* Module/eval.scm 297 */
									obj_t BgL__ortest_1111z00_2849;

									BgL__ortest_1111z00_2849 =
										BGl_za2libzd2modeza2zd2zzengine_paramz00;
									if (CBOOL(BgL__ortest_1111z00_2849))
										{	/* Module/eval.scm 297 */
											BgL_test2255z00_3483 = CBOOL(BgL__ortest_1111z00_2849);
										}
									else
										{	/* Module/eval.scm 297 */
											if (CBOOL(
													(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_gz00_2771)))->
														BgL_libraryz00)))
												{	/* Module/eval.scm 297 */
													BgL_test2255z00_3483 = ((bool_t) 0);
												}
											else
												{	/* Module/eval.scm 297 */
													BgL_test2255z00_3483 = ((bool_t) 1);
												}
										}
								}
							else
								{	/* Module/eval.scm 296 */
									BgL_test2255z00_3483 = ((bool_t) 0);
								}
						}
					else
						{	/* Module/eval.scm 295 */
							BgL_test2255z00_3483 = ((bool_t) 0);
						}
					if (BgL_test2255z00_3483)
						{	/* Module/eval.scm 298 */
							obj_t BgL_auxz00_2850;

							BgL_auxz00_2850 =
								MAKE_YOUNG_PAIR(BgL_gz00_2771, CELL_REF(BgL_globalsz00_2769));
							return CELL_SET(BgL_globalsz00_2769, BgL_auxz00_2850);
						}
					else
						{	/* Module/eval.scm 295 */
							return BFALSE;
						}
				}
			}
		}

	}



/* get-eval-srfi-libraries */
	obj_t BGl_getzd2evalzd2srfizd2librarieszd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 337 */
			{	/* Module/eval.scm 338 */
				obj_t BgL_l1310z00_2176;

				BgL_l1310z00_2176 = BGl_za2evalzd2librariesza2zd2zzmodule_evalz00;
				if (NULLP(BgL_l1310z00_2176))
					{	/* Module/eval.scm 338 */
						return BNIL;
					}
				else
					{	/* Module/eval.scm 338 */
						obj_t BgL_head1312z00_2178;

						{	/* Module/eval.scm 338 */
							obj_t BgL_res2134z00_2706;

							BgL_res2134z00_2706 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1312z00_2178 = BgL_res2134z00_2706;
						}
						{
							obj_t BgL_l1310z00_2180;
							obj_t BgL_tail1313z00_2181;

							BgL_l1310z00_2180 = BgL_l1310z00_2176;
							BgL_tail1313z00_2181 = BgL_head1312z00_2178;
						BgL_zc3z04anonymousza31951ze3z87_2182:
							if (NULLP(BgL_l1310z00_2180))
								{	/* Module/eval.scm 338 */
									return CDR(BgL_head1312z00_2178);
								}
							else
								{	/* Module/eval.scm 338 */
									obj_t BgL_newtail1314z00_2184;

									{	/* Module/eval.scm 338 */
										obj_t BgL_arg1954z00_2186;

										{	/* Module/eval.scm 338 */
											obj_t BgL_lz00_2187;

											BgL_lz00_2187 = CAR(((obj_t) BgL_l1310z00_2180));
											{	/* Module/eval.scm 340 */
												obj_t BgL_arg1955z00_2188;

												{	/* Module/eval.scm 340 */
													obj_t BgL_arg1956z00_2189;

													{	/* Module/eval.scm 340 */
														obj_t BgL_arg1957z00_2190;

														{	/* Module/eval.scm 340 */
															obj_t BgL_arg1958z00_2191;

															{	/* Module/eval.scm 340 */
																obj_t BgL_arg1959z00_2192;

																BgL_arg1959z00_2192 =
																	MAKE_YOUNG_PAIR(BgL_lz00_2187, BNIL);
																BgL_arg1958z00_2191 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)),
																	BgL_arg1959z00_2192);
															}
															BgL_arg1957z00_2190 =
																MAKE_YOUNG_PAIR(BgL_arg1958z00_2191, BNIL);
														}
														BgL_arg1956z00_2189 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
															BgL_arg1957z00_2190);
													}
													BgL_arg1955z00_2188 =
														MAKE_YOUNG_PAIR(BgL_arg1956z00_2189, BNIL);
												}
												BgL_arg1954z00_2186 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
													BgL_arg1955z00_2188);
										}}
										{	/* Module/eval.scm 338 */
											obj_t BgL_res2136z00_2710;

											BgL_res2136z00_2710 =
												MAKE_YOUNG_PAIR(BgL_arg1954z00_2186, BNIL);
											BgL_newtail1314z00_2184 = BgL_res2136z00_2710;
									}}
									SET_CDR(BgL_tail1313z00_2181, BgL_newtail1314z00_2184);
									{	/* Module/eval.scm 338 */
										obj_t BgL_arg1953z00_2185;

										BgL_arg1953z00_2185 = CDR(((obj_t) BgL_l1310z00_2180));
										{
											obj_t BgL_tail1313z00_3522;
											obj_t BgL_l1310z00_3521;

											BgL_l1310z00_3521 = BgL_arg1953z00_2185;
											BgL_tail1313z00_3522 = BgL_newtail1314z00_2184;
											BgL_tail1313z00_2181 = BgL_tail1313z00_3522;
											BgL_l1310z00_2180 = BgL_l1310z00_3521;
											goto BgL_zc3z04anonymousza31951ze3z87_2182;
										}
									}
								}
						}
					}
			}
		}

	}



/* get-evaluated-class-macros */
	obj_t BGl_getzd2evaluatedzd2classzd2macroszd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 346 */
			{	/* Module/eval.scm 347 */
				obj_t BgL_l1315z00_2194;

				BgL_l1315z00_2194 = BGl_za2evalzd2classesza2zd2zzmodule_evalz00;
				if (NULLP(BgL_l1315z00_2194))
					{	/* Module/eval.scm 347 */
						return BNIL;
					}
				else
					{	/* Module/eval.scm 347 */
						obj_t BgL_head1317z00_2196;

						{	/* Module/eval.scm 347 */
							obj_t BgL_res2138z00_2714;

							BgL_res2138z00_2714 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1317z00_2196 = BgL_res2138z00_2714;
						}
						{
							obj_t BgL_l1315z00_2198;
							obj_t BgL_tail1318z00_2199;

							BgL_l1315z00_2198 = BgL_l1315z00_2194;
							BgL_tail1318z00_2199 = BgL_head1317z00_2196;
						BgL_zc3z04anonymousza31961ze3z87_2200:
							if (NULLP(BgL_l1315z00_2198))
								{	/* Module/eval.scm 347 */
									return CDR(BgL_head1317z00_2196);
								}
							else
								{	/* Module/eval.scm 347 */
									obj_t BgL_newtail1319z00_2202;

									{	/* Module/eval.scm 347 */
										obj_t BgL_arg1964z00_2204;

										{	/* Module/eval.scm 347 */
											obj_t BgL_sz00_2205;

											BgL_sz00_2205 = CAR(((obj_t) BgL_l1315z00_2198));
											{	/* Module/eval.scm 348 */
												BgL_typez00_bglt BgL_tz00_2206;

												{	/* Module/eval.scm 348 */
													obj_t BgL_arg1986z00_2231;
													obj_t BgL_arg1987z00_2232;

													{	/* Module/eval.scm 348 */
														obj_t BgL_pairz00_2721;

														BgL_pairz00_2721 = CDR(((obj_t) BgL_sz00_2205));
														BgL_arg1986z00_2231 = CAR(BgL_pairz00_2721);
													}
													BgL_arg1987z00_2232 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_sz00_2205);
													BgL_tz00_2206 =
														BGl_findzd2typezf2locationz20zztype_envz00
														(BgL_arg1986z00_2231, BgL_arg1987z00_2232);
												}
												{	/* Module/eval.scm 350 */
													BgL_globalz00_bglt BgL_holderz00_2209;

													{
														BgL_tclassz00_bglt BgL_auxz00_3536;

														{
															obj_t BgL_auxz00_3537;

															{	/* Module/eval.scm 351 */
																BgL_objectz00_bglt BgL_tmpz00_3538;

																BgL_tmpz00_3538 =
																	((BgL_objectz00_bglt)
																	((BgL_typez00_bglt) BgL_tz00_2206));
																BgL_auxz00_3537 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3538);
															}
															BgL_auxz00_3536 =
																((BgL_tclassz00_bglt) BgL_auxz00_3537);
														}
														BgL_holderz00_2209 =
															(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3536))->
															BgL_holderz00);
													}
													{	/* Module/eval.scm 351 */
														obj_t BgL_holderez00_2210;

														{	/* Module/eval.scm 352 */
															obj_t BgL_arg1981z00_2226;

															{	/* Module/eval.scm 352 */
																obj_t BgL_arg1982z00_2227;
																obj_t BgL_arg1983z00_2228;

																BgL_arg1982z00_2227 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_holderz00_2209)))->BgL_idz00);
																BgL_arg1983z00_2228 =
																	MAKE_YOUNG_PAIR((((BgL_globalz00_bglt)
																			COBJECT(BgL_holderz00_2209))->
																		BgL_modulez00), BNIL);
																BgL_arg1981z00_2226 =
																	MAKE_YOUNG_PAIR(BgL_arg1982z00_2227,
																	BgL_arg1983z00_2228);
															}
															BgL_holderez00_2210 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)),
																BgL_arg1981z00_2226);
														}
														{	/* Module/eval.scm 352 */

															{	/* Module/eval.scm 354 */
																obj_t BgL_arg1965z00_2211;

																{	/* Module/eval.scm 354 */
																	obj_t BgL_arg1966z00_2212;
																	obj_t BgL_arg1967z00_2213;

																	{	/* Module/eval.scm 354 */
																		bool_t BgL_test2264z00_3551;

																		{
																			BgL_tclassz00_bglt BgL_auxz00_3552;

																			{
																				obj_t BgL_auxz00_3553;

																				{	/* Module/eval.scm 354 */
																					BgL_objectz00_bglt BgL_tmpz00_3554;

																					BgL_tmpz00_3554 =
																						((BgL_objectz00_bglt)
																						((BgL_typez00_bglt) BgL_tz00_2206));
																					BgL_auxz00_3553 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_3554);
																				}
																				BgL_auxz00_3552 =
																					((BgL_tclassz00_bglt)
																					BgL_auxz00_3553);
																			}
																			BgL_test2264z00_3551 =
																				(((BgL_tclassz00_bglt)
																					COBJECT(BgL_auxz00_3552))->
																				BgL_abstractzf3zf3);
																		}
																		if (BgL_test2264z00_3551)
																			{	/* Module/eval.scm 354 */
																				BgL_arg1966z00_2212 = BUNSPEC;
																			}
																		else
																			{	/* Module/eval.scm 357 */
																				obj_t BgL_arg1969z00_2215;

																				{	/* Module/eval.scm 357 */
																					obj_t BgL_arg1970z00_2216;
																					obj_t BgL_arg1971z00_2217;

																					{	/* Module/eval.scm 357 */
																						obj_t BgL_arg1972z00_2218;

																						BgL_arg1972z00_2218 =
																							MAKE_YOUNG_PAIR
																							(BgL_holderez00_2210, BNIL);
																						BgL_arg1970z00_2216 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 36)),
																							BgL_arg1972z00_2218);
																					}
																					{	/* Module/eval.scm 358 */
																						obj_t BgL_arg1973z00_2219;

																						{	/* Module/eval.scm 358 */
																							obj_t BgL_arg1974z00_2220;

																							BgL_arg1974z00_2220 =
																								MAKE_YOUNG_PAIR
																								(BgL_holderez00_2210, BNIL);
																							BgL_arg1973z00_2219 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 37)),
																								BgL_arg1974z00_2220);
																						}
																						BgL_arg1971z00_2217 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1973z00_2219, BNIL);
																					}
																					BgL_arg1969z00_2215 =
																						MAKE_YOUNG_PAIR(BgL_arg1970z00_2216,
																						BgL_arg1971z00_2217);
																				}
																				BgL_arg1966z00_2212 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1969z00_2215);
																	}}
																	{	/* Module/eval.scm 359 */
																		obj_t BgL_arg1975z00_2221;
																		obj_t BgL_arg1976z00_2222;

																		{	/* Module/eval.scm 359 */
																			obj_t BgL_arg1977z00_2223;

																			BgL_arg1977z00_2223 =
																				MAKE_YOUNG_PAIR(BgL_holderez00_2210,
																				BNIL);
																			BgL_arg1975z00_2221 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						38)), BgL_arg1977z00_2223);
																		}
																		{	/* Module/eval.scm 360 */
																			obj_t BgL_arg1979z00_2224;

																			{	/* Module/eval.scm 360 */
																				obj_t BgL_arg1980z00_2225;

																				BgL_arg1980z00_2225 =
																					MAKE_YOUNG_PAIR(BNIL, BNIL);
																				BgL_arg1979z00_2224 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							18)), BgL_arg1980z00_2225);
																			}
																			BgL_arg1976z00_2222 =
																				MAKE_YOUNG_PAIR(BgL_arg1979z00_2224,
																				BNIL);
																		}
																		BgL_arg1967z00_2213 =
																			MAKE_YOUNG_PAIR(BgL_arg1975z00_2221,
																			BgL_arg1976z00_2222);
																	}
																	BgL_arg1965z00_2211 =
																		MAKE_YOUNG_PAIR(BgL_arg1966z00_2212,
																		BgL_arg1967z00_2213);
																}
																BgL_arg1964z00_2204 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																	BgL_arg1965z00_2211);
										}}}}}}
										{	/* Module/eval.scm 347 */
											obj_t BgL_res2141z00_2734;

											BgL_res2141z00_2734 =
												MAKE_YOUNG_PAIR(BgL_arg1964z00_2204, BNIL);
											BgL_newtail1319z00_2202 = BgL_res2141z00_2734;
									}}
									SET_CDR(BgL_tail1318z00_2199, BgL_newtail1319z00_2202);
									{	/* Module/eval.scm 347 */
										obj_t BgL_arg1963z00_2203;

										BgL_arg1963z00_2203 = CDR(((obj_t) BgL_l1315z00_2198));
										{
											obj_t BgL_tail1318z00_3586;
											obj_t BgL_l1315z00_3585;

											BgL_l1315z00_3585 = BgL_arg1963z00_2203;
											BgL_tail1318z00_3586 = BgL_newtail1319z00_2202;
											BgL_tail1318z00_2199 = BgL_tail1318z00_3586;
											BgL_l1315z00_2198 = BgL_l1315z00_3585;
											goto BgL_zc3z04anonymousza31961ze3z87_2200;
										}
									}
								}
						}
					}
			}
		}

	}



/* get-evaluated-class-holders */
	obj_t BGl_getzd2evaluatedzd2classzd2holderszd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 366 */
			{	/* Module/eval.scm 367 */
				obj_t BgL_l1320z00_2234;

				BgL_l1320z00_2234 = BGl_za2evalzd2classesza2zd2zzmodule_evalz00;
				if (NULLP(BgL_l1320z00_2234))
					{	/* Module/eval.scm 367 */
						return BNIL;
					}
				else
					{	/* Module/eval.scm 367 */
						obj_t BgL_head1322z00_2236;

						{	/* Module/eval.scm 367 */
							obj_t BgL_res2143z00_2738;

							BgL_res2143z00_2738 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							BgL_head1322z00_2236 = BgL_res2143z00_2738;
						}
						{
							obj_t BgL_l1320z00_2238;
							obj_t BgL_tail1323z00_2239;

							BgL_l1320z00_2238 = BgL_l1320z00_2234;
							BgL_tail1323z00_2239 = BgL_head1322z00_2236;
						BgL_zc3z04anonymousza31989ze3z87_2240:
							if (NULLP(BgL_l1320z00_2238))
								{	/* Module/eval.scm 367 */
									return CDR(BgL_head1322z00_2236);
								}
							else
								{	/* Module/eval.scm 367 */
									obj_t BgL_newtail1324z00_2242;

									{	/* Module/eval.scm 367 */
										BgL_globalz00_bglt BgL_arg1992z00_2244;

										{	/* Module/eval.scm 367 */
											obj_t BgL_sz00_2245;

											BgL_sz00_2245 = CAR(((obj_t) BgL_l1320z00_2238));
											{	/* Module/eval.scm 368 */
												BgL_typez00_bglt BgL_tz00_2246;

												{	/* Module/eval.scm 368 */
													obj_t BgL_arg1993z00_2247;
													obj_t BgL_arg1995z00_2248;

													{	/* Module/eval.scm 368 */
														obj_t BgL_pairz00_2745;

														BgL_pairz00_2745 = CDR(((obj_t) BgL_sz00_2245));
														BgL_arg1993z00_2247 = CAR(BgL_pairz00_2745);
													}
													BgL_arg1995z00_2248 =
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_sz00_2245);
													BgL_tz00_2246 =
														BGl_findzd2typezf2locationz20zztype_envz00
														(BgL_arg1993z00_2247, BgL_arg1995z00_2248);
												}
												{
													BgL_tclassz00_bglt BgL_auxz00_3600;

													{
														obj_t BgL_auxz00_3601;

														{	/* Module/eval.scm 369 */
															BgL_objectz00_bglt BgL_tmpz00_3602;

															BgL_tmpz00_3602 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_tz00_2246));
															BgL_auxz00_3601 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3602);
														}
														BgL_auxz00_3600 =
															((BgL_tclassz00_bglt) BgL_auxz00_3601);
													}
													BgL_arg1992z00_2244 =
														(((BgL_tclassz00_bglt) COBJECT(BgL_auxz00_3600))->
														BgL_holderz00);
												}
											}
										}
										{	/* Module/eval.scm 367 */
											obj_t BgL_res2145z00_2748;

											BgL_res2145z00_2748 =
												MAKE_YOUNG_PAIR(((obj_t) BgL_arg1992z00_2244), BNIL);
											BgL_newtail1324z00_2242 = BgL_res2145z00_2748;
										}
									}
									SET_CDR(BgL_tail1323z00_2239, BgL_newtail1324z00_2242);
									{	/* Module/eval.scm 367 */
										obj_t BgL_arg1991z00_2243;

										BgL_arg1991z00_2243 = CDR(((obj_t) BgL_l1320z00_2238));
										{
											obj_t BgL_tail1323z00_3614;
											obj_t BgL_l1320z00_3613;

											BgL_l1320z00_3613 = BgL_arg1991z00_2243;
											BgL_tail1323z00_3614 = BgL_newtail1324z00_2242;
											BgL_tail1323z00_2239 = BgL_tail1323z00_3614;
											BgL_l1320z00_2238 = BgL_l1320z00_3613;
											goto BgL_zc3z04anonymousza31989ze3z87_2240;
										}
									}
								}
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_evalz00()
	{
		{	/* Module/eval.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzmodule_includez00(((long) 184800297),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzobject_slotsz00(((long) 151271276),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_sexpz00(((long) 163121588),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2159z00zzmodule_evalz00));
		}

	}

#ifdef __cplusplus
}
#endif
