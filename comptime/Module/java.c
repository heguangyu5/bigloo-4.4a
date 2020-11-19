/*===========================================================================*/
/*   (Module/java.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/java.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;

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

	typedef struct BgL_cfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_argszd2typezd2;
		bool_t BgL_macrozf3zf3;
		bool_t BgL_infixzf3zf3;
		obj_t BgL_methodz00;
	}              *BgL_cfunz00_bglt;

	typedef struct BgL_jklassz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_locz00;
		obj_t BgL_idz00;
		obj_t BgL_iddz00;
		obj_t BgL_jnamez00;
		obj_t BgL_packagez00;
		obj_t BgL_fieldsz00;
		obj_t BgL_methodsz00;
		obj_t BgL_constructorsz00;
		bool_t BgL_abstractzf3zf3;
		obj_t BgL_modulez00;
	}                *BgL_jklassz00_bglt;

	typedef struct BgL_jmethodz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_idz00;
		obj_t BgL_argsz00;
		obj_t BgL_jnamez00;
		obj_t BgL_modifiersz00;
	}                 *BgL_jmethodz00_bglt;

	typedef struct BgL_jconstructorz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_srcz00;
		obj_t BgL_idz00;
		obj_t BgL_argsz00;
		obj_t BgL_jnamez00;
		obj_t BgL_modifiersz00;
	}                      *BgL_jconstructorz00_bglt;


	static BgL_jklassz00_bglt BGl_z62lambda1927z62zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_jklassz00_bglt BGl_z62lambda1930z62zzmodule_javaz00(obj_t);
	static obj_t BGl_z62lambda1936z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1937z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1941z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1942z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1946z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1947z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31758ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_z62lambda1952z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1953z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1958z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1959z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_javazd2producerzd2zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1965z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1966z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static BgL_typez00_bglt
		BGl_declarezd2jklasszd2zzmodule_javaz00(BgL_jklassz00_bglt);
	static obj_t BGl_z62lambda1972z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1973z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_za2jclassesza2z00zzmodule_javaz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32015ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1980z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1981z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1987z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1988z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62heapzd2addzd2jclassz12z70zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzmodule_javaz00();
	static obj_t BGl_z62lambda1994z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda1995z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_everyze70ze7zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62findzd2javazd2classz62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_javazd2parsezd2classz00zzmodule_javaz00(obj_t, obj_t, obj_t,
		bool_t, obj_t);
	static obj_t BGl_javazd2parserzd2zzmodule_javaz00(obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzmodule_javaz00();
	static bool_t BGl_modifierzd2listzf3ze70zc6zzmodule_javaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32054ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31996ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_jmethodz00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_jklassz00zzmodule_javaz00 = BUNSPEC;
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	extern obj_t
		BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2(obj_t,
		obj_t, BgL_typez00_bglt, bool_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31290ze3ze5zzmodule_javaz00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt
		BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_javaz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	static obj_t BGl_javazd2declarezd2componentz00zzmodule_javaz00(obj_t,
		BgL_jklassz00_bglt, obj_t);
	static obj_t BGl_javazd2errorzd2zzmodule_javaz00(obj_t, obj_t);
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	static obj_t BGl_jconstructorz00zzmodule_javaz00 = BUNSPEC;
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
	extern BgL_typez00_bglt
		BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00(BgL_typez00_bglt,
		obj_t);
	static obj_t BGl_z62bindzd2jklassz12za2zzmodule_javaz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62javazd2finaliza7erz17zzmodule_javaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza32003ze3ze5zzmodule_javaz00(obj_t);
	extern obj_t BGl_makezd2typedzd2identz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_javaz00();
	static obj_t BGl_z62makezd2javazd2compilerz62zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_javaz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62zc3z04anonymousza31982ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31967ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_javazd2declarezd2arrayz00zzmodule_javaz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_rempropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00;
	static obj_t BGl_za2jexportedza2z00zzmodule_javaz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_makezd2promisezd2zz__r4_control_features_6_9z00(obj_t);
	static obj_t BGl_za2javazd2classesza2zd2zzmodule_javaz00 = BUNSPEC;
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31899ze3ze5zzmodule_javaz00(obj_t);
	static obj_t BGl_z62lambda2001z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2002z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31989ze3ze5zzmodule_javaz00(obj_t);
	static bool_t BGl_javazd2declarezd2classz00zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t, bool_t, obj_t);
	static BgL_jmethodz00_bglt BGl_z62lambda2011z62zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static BgL_jmethodz00_bglt BGl_z62lambda2013z62zzmodule_javaz00(obj_t);
	static obj_t BGl_z62lambda2019z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2020z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	static BgL_typez00_bglt
		BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_bglt);
	static obj_t BGl_z62lambda2024z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2025z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_jclassz00zzobject_classz00;
	static obj_t BGl_z62lambda2030z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2031z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_classzd2constructorzd2zz__objectz00(obj_t);
	static obj_t BGl_z62lambda2036z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2037z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_z62lambda2042z62zzmodule_javaz00(obj_t, obj_t);
	static obj_t BGl_z62lambda2043z62zzmodule_javaz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_jtypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_prototypez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static BgL_jconstructorz00_bglt BGl_z62lambda2050z62zzmodule_javaz00(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_jconstructorz00_bglt BGl_z62lambda2052z62zzmodule_javaz00(obj_t);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_javaz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_javaz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_javaz00();
	BGL_IMPORT obj_t
		BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00(obj_t);
	extern bool_t BGl_typezd2identzf3z21zzast_identz00(obj_t);
	static bool_t BGl_argzd2listzf3ze70zc6zzmodule_javaz00(obj_t);
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	static bool_t BGl_javazd2refinezd2classz00zzmodule_javaz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31289ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_findzd2typezd2zztype_envz00(obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_za2jklassesza2z00zzmodule_javaz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31932ze3ze5zzmodule_javaz00(obj_t,
		obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[41];


	   
		 
		DEFINE_BGL_L_PROCEDURE(BGl_proc2200z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2258za7,
		BGl_z62zc3z04anonymousza31783ze3ze5zzmodule_javaz00);
	      DEFINE_BGL_L_PROCEDURE(BGl_proc2201z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2259za7,
		BGl_z62zc3z04anonymousza31779ze3ze5zzmodule_javaz00);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2204z00zzmodule_javaz00,
		BgL_bgl_za762lambda1937za7622260z00, BGl_z62lambda1937z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2205z00zzmodule_javaz00,
		BgL_bgl_za762lambda1936za7622261z00, BGl_z62lambda1936z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2206z00zzmodule_javaz00,
		BgL_bgl_za762lambda1942za7622262z00, BGl_z62lambda1942z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2207z00zzmodule_javaz00,
		BgL_bgl_za762lambda1941za7622263z00, BGl_z62lambda1941z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2208z00zzmodule_javaz00,
		BgL_bgl_za762lambda1947za7622264z00, BGl_z62lambda1947z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2209z00zzmodule_javaz00,
		BgL_bgl_za762lambda1946za7622265z00, BGl_z62lambda1946z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2210z00zzmodule_javaz00,
		BgL_bgl_za762lambda1953za7622266z00, BGl_z62lambda1953z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2211z00zzmodule_javaz00,
		BgL_bgl_za762lambda1952za7622267z00, BGl_z62lambda1952z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2212z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2268za7,
		BGl_z62zc3z04anonymousza31960ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2213z00zzmodule_javaz00,
		BgL_bgl_za762lambda1959za7622269z00, BGl_z62lambda1959z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2214z00zzmodule_javaz00,
		BgL_bgl_za762lambda1958za7622270z00, BGl_z62lambda1958z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2215z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2271za7,
		BGl_z62zc3z04anonymousza31967ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2216z00zzmodule_javaz00,
		BgL_bgl_za762lambda1966za7622272z00, BGl_z62lambda1966z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2217z00zzmodule_javaz00,
		BgL_bgl_za762lambda1965za7622273z00, BGl_z62lambda1965z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2218z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2274za7,
		BGl_z62zc3z04anonymousza31974ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2219z00zzmodule_javaz00,
		BgL_bgl_za762lambda1973za7622275z00, BGl_z62lambda1973z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2220z00zzmodule_javaz00,
		BgL_bgl_za762lambda1972za7622276z00, BGl_z62lambda1972z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2221z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2277za7,
		BGl_z62zc3z04anonymousza31982ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2222z00zzmodule_javaz00,
		BgL_bgl_za762lambda1981za7622278z00, BGl_z62lambda1981z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2223z00zzmodule_javaz00,
		BgL_bgl_za762lambda1980za7622279z00, BGl_z62lambda1980z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2224z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2280za7,
		BGl_z62zc3z04anonymousza31989ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2225z00zzmodule_javaz00,
		BgL_bgl_za762lambda1988za7622281z00, BGl_z62lambda1988z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2226z00zzmodule_javaz00,
		BgL_bgl_za762lambda1987za7622282z00, BGl_z62lambda1987z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2227z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2283za7,
		BGl_z62zc3z04anonymousza31996ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2228z00zzmodule_javaz00,
		BgL_bgl_za762lambda1995za7622284z00, BGl_z62lambda1995z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2229z00zzmodule_javaz00,
		BgL_bgl_za762lambda1994za7622285z00, BGl_z62lambda1994z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2230z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2286za7,
		BGl_z62zc3z04anonymousza32003ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2231z00zzmodule_javaz00,
		BgL_bgl_za762lambda2002za7622287z00, BGl_z62lambda2002z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2232z00zzmodule_javaz00,
		BgL_bgl_za762lambda2001za7622288z00, BGl_z62lambda2001z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2233z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2289za7,
		BGl_z62zc3z04anonymousza31932ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2234z00zzmodule_javaz00,
		BgL_bgl_za762lambda1930za7622290z00, BGl_z62lambda1930z62zzmodule_javaz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2235z00zzmodule_javaz00,
		BgL_bgl_za762lambda1927za7622291z00, BGl_z62lambda1927z62zzmodule_javaz00,
		0L, BUNSPEC, 11);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2236z00zzmodule_javaz00,
		BgL_bgl_za762lambda2020za7622292z00, BGl_z62lambda2020z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2237z00zzmodule_javaz00,
		BgL_bgl_za762lambda2019za7622293z00, BGl_z62lambda2019z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2238z00zzmodule_javaz00,
		BgL_bgl_za762lambda2025za7622294z00, BGl_z62lambda2025z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2239z00zzmodule_javaz00,
		BgL_bgl_za762lambda2024za7622295z00, BGl_z62lambda2024z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2240z00zzmodule_javaz00,
		BgL_bgl_za762lambda2031za7622296z00, BGl_z62lambda2031z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2241z00zzmodule_javaz00,
		BgL_bgl_za762lambda2030za7622297z00, BGl_z62lambda2030z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2242z00zzmodule_javaz00,
		BgL_bgl_za762lambda2037za7622298z00, BGl_z62lambda2037z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2243z00zzmodule_javaz00,
		BgL_bgl_za762lambda2036za7622299z00, BGl_z62lambda2036z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2244z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2300za7,
		BGl_z62zc3z04anonymousza32044ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2245z00zzmodule_javaz00,
		BgL_bgl_za762lambda2043za7622301z00, BGl_z62lambda2043z62zzmodule_javaz00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2246z00zzmodule_javaz00,
		BgL_bgl_za762lambda2042za7622302z00, BGl_z62lambda2042z62zzmodule_javaz00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2247z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2303za7,
		BGl_z62zc3z04anonymousza32015ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2248z00zzmodule_javaz00,
		BgL_bgl_za762lambda2013za7622304z00, BGl_z62lambda2013z62zzmodule_javaz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2249z00zzmodule_javaz00,
		BgL_bgl_za762lambda2011za7622305z00, BGl_z62lambda2011z62zzmodule_javaz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2179z00zzmodule_javaz00,
		BgL_bgl_string2179za700za7za7m2306za7, "Illegal java variable", 21);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2250z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2307za7,
		BGl_z62zc3z04anonymousza32054ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2251z00zzmodule_javaz00,
		BgL_bgl_za762lambda2052za7622308z00, BGl_z62lambda2052z62zzmodule_javaz00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2252z00zzmodule_javaz00,
		BgL_bgl_za762lambda2050za7622309z00, BGl_z62lambda2050z62zzmodule_javaz00,
		0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string2180z00zzmodule_javaz00,
		BgL_bgl_string2180za700za7za7m2310za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2181z00zzmodule_javaz00,
		BgL_bgl_string2181za700za7za7m2311za7, "Illegal `java' clause", 21);
	      DEFINE_STRING(BGl_string2182z00zzmodule_javaz00,
		BgL_bgl_string2182za700za7za7m2312za7, "Illegal java export form", 24);
	      DEFINE_STRING(BGl_string2183z00zzmodule_javaz00,
		BgL_bgl_string2183za700za7za7m2313za7, "Illegal foreign class definition",
		32);
	      DEFINE_STRING(BGl_string2184z00zzmodule_javaz00,
		BgL_bgl_string2184za700za7za7m2314za7, "", 0);
	      DEFINE_STRING(BGl_string2185z00zzmodule_javaz00,
		BgL_bgl_string2185za700za7za7m2315za7, "Can't find main class declaration",
		33);
	      DEFINE_STRING(BGl_string2186z00zzmodule_javaz00,
		BgL_bgl_string2186za700za7za7m2316za7, "Super class is not a Java class",
		31);
	      DEFINE_STRING(BGl_string2187z00zzmodule_javaz00,
		BgL_bgl_string2187za700za7za7m2317za7, "Java", 4);
	      DEFINE_STRING(BGl_string2188z00zzmodule_javaz00,
		BgL_bgl_string2188za700za7za7m2318za7,
		"Re-exportation of global variable (ignored)", 43);
	      DEFINE_STRING(BGl_string2189z00zzmodule_javaz00,
		BgL_bgl_string2189za700za7za7m2319za7,
		"Unbound (or static) global variable", 35);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2addzd2jclassz12zd2envzc0zzmodule_javaz00,
		BgL_bgl_za762heapza7d2addza7d22320za7,
		BGl_z62heapzd2addzd2jclassz12z70zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2190z00zzmodule_javaz00,
		BgL_bgl_string2190za700za7za7m2321za7, "Illegal java class", 18);
	      DEFINE_STRING(BGl_string2191z00zzmodule_javaz00,
		BgL_bgl_string2191za700za7za7m2322za7, "Illegal Java class redefinition",
		31);
	      DEFINE_STRING(BGl_string2192z00zzmodule_javaz00,
		BgL_bgl_string2192za700za7za7m2323za7, "Illegal class field", 19);
	      DEFINE_STRING(BGl_string2193z00zzmodule_javaz00,
		BgL_bgl_string2193za700za7za7m2324za7, "Illegal class field `", 21);
	      DEFINE_STRING(BGl_string2194z00zzmodule_javaz00,
		BgL_bgl_string2194za700za7za7m2325za7, "'", 1);
	      DEFINE_STRING(BGl_string2195z00zzmodule_javaz00,
		BgL_bgl_string2195za700za7za7m2326za7, "<init>", 6);
	      DEFINE_STRING(BGl_string2196z00zzmodule_javaz00,
		BgL_bgl_string2196za700za7za7m2327za7, "Illegal Java method", 19);
	      DEFINE_STRING(BGl_string2197z00zzmodule_javaz00,
		BgL_bgl_string2197za700za7za7m2328za7,
		"Illegal Java method (wrong modifiers)", 37);
	      DEFINE_STRING(BGl_string2198z00zzmodule_javaz00,
		BgL_bgl_string2198za700za7za7m2329za7, "Illegal Java field", 18);
	      DEFINE_STRING(BGl_string2199z00zzmodule_javaz00,
		BgL_bgl_string2199za700za7za7m2330za7,
		"Illegal Java field (wrong modifiers)", 36);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2javazd2classzd2envzd2zzmodule_javaz00,
		BgL_bgl_za762findza7d2javaza7d2331za7,
		BGl_z62findzd2javazd2classz62zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2202z00zzmodule_javaz00,
		BgL_bgl_string2202za700za7za7m2332za7,
		"Illegal first argument of virtual method", 40);
	      DEFINE_STRING(BGl_string2203z00zzmodule_javaz00,
		BgL_bgl_string2203za700za7za7m2333za7, "Illegal array item type", 23);
	      DEFINE_STRING(BGl_string2253z00zzmodule_javaz00,
		BgL_bgl_string2253za700za7za7m2334za7, "module_java", 11);
	      DEFINE_STRING(BGl_string2254z00zzmodule_javaz00,
		BgL_bgl_string2254za700za7za7m2335za7,
		"_ jconstructor jmethod modifiers bstring args module_java module bool abstract? constructors methods pair-nil fields package jname idd symbol id obj loc pair src static (public private protected static final synchronized abstract) public constructor method field foreign abstract %% - make-heap make-add-heap jklass array abstract-class class export java ",
		355);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2javazd2compilerzd2envzd2zzmodule_javaz00,
		BgL_bgl_za762makeza7d2javaza7d2336za7,
		BGl_z62makezd2javazd2compilerz62zzmodule_javaz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2177z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2337za7,
		BGl_z62zc3z04anonymousza31289ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2178z00zzmodule_javaz00,
		BgL_bgl_za762za7c3za704anonymo2338za7,
		BGl_z62zc3z04anonymousza31290ze3ze5zzmodule_javaz00, 0L, BUNSPEC, 2);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_javazd2finaliza7erzd2envza7zzmodule_javaz00,
		BgL_bgl_za762javaza7d2finali2339z00,
		BGl_z62javazd2finaliza7erz17zzmodule_javaz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_bindzd2jklassz12zd2envz12zzmodule_javaz00,
		BgL_bgl_za762bindza7d2jklass2340z00,
		BGl_z62bindzd2jklassz12za2zzmodule_javaz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2jclassesza2z00zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_jmethodz00zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_jklassz00zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_jconstructorz00zzmodule_javaz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_za2jexportedza2z00zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_za2javazd2classesza2zd2zzmodule_javaz00));
		     ADD_ROOT((void *) (&BGl_za2jklassesza2z00zzmodule_javaz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_javaz00(long
		BgL_checksumz00_2619, char *BgL_fromz00_2620)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_javaz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_javaz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_javaz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_javaz00();
					BGl_cnstzd2initzd2zzmodule_javaz00();
					BGl_importedzd2moduleszd2initz00zzmodule_javaz00();
					BGl_objectzd2initzd2zzmodule_javaz00();
					return BGl_toplevelzd2initzd2zzmodule_javaz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "module_java");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "module_java");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "module_java");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"module_java");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "module_java");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			{	/* Module/java.scm 15 */
				obj_t BgL_cportz00_2471;

				{	/* Module/java.scm 15 */
					obj_t BgL_stringz00_2479;

					BgL_stringz00_2479 = BGl_string2254z00zzmodule_javaz00;
					{	/* Module/java.scm 15 */
						obj_t BgL_startz00_2480;

						BgL_startz00_2480 = BINT(((long) 0));
						{	/* Module/java.scm 15 */
							obj_t BgL_endz00_2481;

							BgL_endz00_2481 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2479)));
							{	/* Module/java.scm 15 */

								BgL_cportz00_2471 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2479, BgL_startz00_2480, BgL_endz00_2481);
				}}}}
				{
					long BgL_iz00_2472;

					BgL_iz00_2472 = ((long) 40);
				BgL_loopz00_2473:
					if ((BgL_iz00_2472 == ((long) -1)))
						{	/* Module/java.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/java.scm 15 */
							{	/* Module/java.scm 15 */
								obj_t BgL_arg2256z00_2475;

								{	/* Module/java.scm 15 */

									{	/* Module/java.scm 15 */
										obj_t BgL_locationz00_2477;

										BgL_locationz00_2477 = BBOOL(((bool_t) 0));
										{	/* Module/java.scm 15 */

											BgL_arg2256z00_2475 =
												BGl_readz00zz__readerz00(BgL_cportz00_2471,
												BgL_locationz00_2477);
										}
									}
								}
								{	/* Module/java.scm 15 */
									int BgL_tmpz00_2651;

									BgL_tmpz00_2651 = (int) (BgL_iz00_2472);
									CNST_TABLE_SET(BgL_tmpz00_2651, BgL_arg2256z00_2475);
							}}
							{	/* Module/java.scm 15 */
								int BgL_auxz00_2478;

								BgL_auxz00_2478 = (int) ((BgL_iz00_2472 - ((long) 1)));
								{
									long BgL_iz00_2656;

									BgL_iz00_2656 = (long) (BgL_auxz00_2478);
									BgL_iz00_2472 = BgL_iz00_2656;
									goto BgL_loopz00_2473;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			BGl_za2jklassesza2z00zzmodule_javaz00 = BNIL;
			BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
			BGl_za2jexportedza2z00zzmodule_javaz00 = BNIL;
			return (BGl_za2javazd2classesza2zd2zzmodule_javaz00 = BNIL, BUNSPEC);
		}

	}



/* make-java-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2javazd2compilerz00zzmodule_javaz00()
	{
		{	/* Module/java.scm 72 */
			{	/* Module/java.scm 73 */
				BgL_ccompz00_bglt BgL_new1107z00_984;

				{	/* Module/java.scm 74 */
					BgL_ccompz00_bglt BgL_new1106z00_990;

					BgL_new1106z00_990 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/java.scm 74 */
						long BgL_arg1291z00_991;

						{	/* Module/java.scm 74 */
							long BgL_res2083z00_1907;

							BgL_res2083z00_1907 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1291z00_991 = BgL_res2083z00_1907;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1106z00_990), BgL_arg1291z00_991);
					}
					BgL_new1107z00_984 = BgL_new1106z00_990;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_984))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_984))->BgL_producerz00) =
					((obj_t) BGl_proc2177z00zzmodule_javaz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_984))->BgL_consumerz00) =
					((obj_t) BGl_proc2178z00zzmodule_javaz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1107z00_984))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_javazd2finaliza7erzd2envza7zzmodule_javaz00), BUNSPEC);
				return ((obj_t) BgL_new1107z00_984);
			}
		}

	}



/* &make-java-compiler */
	obj_t BGl_z62makezd2javazd2compilerz62zzmodule_javaz00(obj_t BgL_envz00_2274)
	{
		{	/* Module/java.scm 72 */
			return BGl_makezd2javazd2compilerz00zzmodule_javaz00();
		}

	}



/* &<@anonymous:1290> */
	obj_t BGl_z62zc3z04anonymousza31290ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2275, obj_t BgL_mz00_2276, obj_t BgL_cz00_2277)
	{
		{	/* Module/java.scm 76 */
			return
				BGl_javazd2producerzd2zzmodule_javaz00(BgL_mz00_2276, BgL_cz00_2277);
		}

	}



/* &<@anonymous:1289> */
	obj_t BGl_z62zc3z04anonymousza31289ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2278, obj_t BgL_cz00_2279)
	{
		{	/* Module/java.scm 75 */
			return
				BGl_javazd2producerzd2zzmodule_javaz00
				(BGl_za2moduleza2z00zzmodule_modulez00, BgL_cz00_2279);
		}

	}



/* java-error */
	obj_t BGl_javazd2errorzd2zzmodule_javaz00(obj_t BgL_javaz00_112,
		obj_t BgL_msgz00_113)
	{
		{	/* Module/java.scm 82 */
			{	/* Module/java.scm 84 */
				obj_t BgL_arg1292z00_992;

				if (PAIRP(BgL_msgz00_113))
					{	/* Module/java.scm 84 */
						BgL_arg1292z00_992 = CAR(BgL_msgz00_113);
					}
				else
					{	/* Module/java.scm 84 */
						BgL_arg1292z00_992 = BGl_string2179z00zzmodule_javaz00;
					}
				{	/* Module/java.scm 83 */
					obj_t BgL_list1293z00_993;

					BgL_list1293z00_993 = MAKE_YOUNG_PAIR(BNIL, BNIL);
					return
						BGl_userzd2errorzd2zztools_errorz00
						(BGl_string2180z00zzmodule_javaz00, BgL_arg1292z00_992,
						BgL_javaz00_112, BgL_list1293z00_993);
				}
			}
		}

	}



/* java-producer */
	obj_t BGl_javazd2producerzd2zzmodule_javaz00(obj_t BgL_modulez00_114,
		obj_t BgL_clausez00_115)
	{
		{	/* Module/java.scm 91 */
			{	/* Module/java.scm 92 */
				bool_t BgL_test2344z00_2677;

				{	/* Module/java.scm 92 */
					obj_t BgL_arg1306z00_1012;

					{	/* Module/java.scm 92 */
						obj_t BgL_arg1307z00_1013;

						BgL_arg1307z00_1013 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg1306z00_1012 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1307z00_1013)))->
							BgL_foreignzd2clausezd2supportz00);
					}
					BgL_test2344z00_2677 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
									(long) 0)), BgL_arg1306z00_1012));
				}
				if (BgL_test2344z00_2677)
					{
						obj_t BgL_protosz00_998;

						if (PAIRP(BgL_clausez00_115))
							{	/* Module/java.scm 93 */
								BgL_protosz00_998 = CDR(BgL_clausez00_115);
								{
									obj_t BgL_l1241z00_1005;

									BgL_l1241z00_1005 = BgL_protosz00_998;
								BgL_zc3z04anonymousza31300ze3z87_1006:
									if (PAIRP(BgL_l1241z00_1005))
										{	/* Module/java.scm 95 */
											BGl_javazd2parserzd2zzmodule_javaz00(CAR
												(BgL_l1241z00_1005), BgL_modulez00_114);
											{
												obj_t BgL_l1241z00_2690;

												BgL_l1241z00_2690 = CDR(BgL_l1241z00_1005);
												BgL_l1241z00_1005 = BgL_l1241z00_2690;
												goto BgL_zc3z04anonymousza31300ze3z87_1006;
											}
										}
									else
										{	/* Module/java.scm 95 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/java.scm 93 */
								{	/* Module/java.scm 98 */
									obj_t BgL_list1304z00_1011;

									BgL_list1304z00_1011 =
										MAKE_YOUNG_PAIR(BGl_string2181z00zzmodule_javaz00, BNIL);
									return
										BGl_javazd2errorzd2zzmodule_javaz00(BgL_clausez00_115,
										BgL_list1304z00_1011);
								}
							}
					}
				else
					{	/* Module/java.scm 92 */
						return BNIL;
					}
			}
		}

	}



/* java-parser */
	obj_t BGl_javazd2parserzd2zzmodule_javaz00(obj_t BgL_javaz00_116,
		obj_t BgL_modulez00_117)
	{
		{	/* Module/java.scm 104 */
			{

				if (PAIRP(BgL_javaz00_116))
					{	/* Module/java.scm 106 */
						obj_t BgL_cdrzd2382zd2_1030;

						BgL_cdrzd2382zd2_1030 = CDR(BgL_javaz00_116);
						if ((CAR(BgL_javaz00_116) == CNST_TABLE_REF(((long) 1))))
							{	/* Module/java.scm 106 */
								if (PAIRP(BgL_cdrzd2382zd2_1030))
									{	/* Module/java.scm 106 */
										obj_t BgL_carzd2385zd2_1034;
										obj_t BgL_cdrzd2386zd2_1035;

										BgL_carzd2385zd2_1034 = CAR(BgL_cdrzd2382zd2_1030);
										BgL_cdrzd2386zd2_1035 = CDR(BgL_cdrzd2382zd2_1030);
										if (SYMBOLP(BgL_carzd2385zd2_1034))
											{	/* Module/java.scm 106 */
												if (PAIRP(BgL_cdrzd2386zd2_1035))
													{	/* Module/java.scm 106 */
														obj_t BgL_carzd2391zd2_1038;

														BgL_carzd2391zd2_1038 = CAR(BgL_cdrzd2386zd2_1035);
														if (STRINGP(BgL_carzd2391zd2_1038))
															{	/* Module/java.scm 106 */
																if (NULLP(CDR(BgL_cdrzd2386zd2_1035)))
																	{	/* Module/java.scm 109 */
																		obj_t BgL_arg1351z00_1933;

																		BgL_arg1351z00_1933 =
																			MAKE_YOUNG_PAIR(BgL_javaz00_116,
																			BgL_modulez00_117);
																		return
																			(BGl_za2jexportedza2z00zzmodule_javaz00 =
																			MAKE_YOUNG_PAIR(BgL_arg1351z00_1933,
																				BGl_za2jexportedza2z00zzmodule_javaz00),
																			BUNSPEC);
																	}
																else
																	{	/* Module/java.scm 106 */
																	BgL_tagzd2368zd2_1017:
																		{	/* Module/java.scm 111 */
																			obj_t BgL_list1352z00_1073;

																			BgL_list1352z00_1073 =
																				MAKE_YOUNG_PAIR
																				(BGl_string2182z00zzmodule_javaz00,
																				BNIL);
																			return
																				BGl_javazd2errorzd2zzmodule_javaz00
																				(BgL_javaz00_116, BgL_list1352z00_1073);
																		}
																	}
															}
														else
															{	/* Module/java.scm 106 */
																goto BgL_tagzd2368zd2_1017;
															}
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd2368zd2_1017;
													}
											}
										else
											{	/* Module/java.scm 106 */
												goto BgL_tagzd2368zd2_1017;
											}
									}
								else
									{	/* Module/java.scm 106 */
										goto BgL_tagzd2368zd2_1017;
									}
							}
						else
							{	/* Module/java.scm 106 */
								if ((CAR(BgL_javaz00_116) == CNST_TABLE_REF(((long) 2))))
									{	/* Module/java.scm 106 */
										if (PAIRP(BgL_cdrzd2382zd2_1030))
											{	/* Module/java.scm 106 */
												return
													BGl_javazd2parsezd2classz00zzmodule_javaz00
													(BgL_javaz00_116, CAR(BgL_cdrzd2382zd2_1030),
													CDR(BgL_cdrzd2382zd2_1030), ((bool_t) 0),
													BgL_modulez00_117);
											}
										else
											{	/* Module/java.scm 106 */
											BgL_tagzd2372zd2_1027:
												return
													BGl_javazd2errorzd2zzmodule_javaz00(BgL_javaz00_116,
													BNIL);
											}
									}
								else
									{	/* Module/java.scm 106 */
										obj_t BgL_cdrzd2442zd2_1049;

										BgL_cdrzd2442zd2_1049 = CDR(BgL_javaz00_116);
										if ((CAR(BgL_javaz00_116) == CNST_TABLE_REF(((long) 3))))
											{	/* Module/java.scm 106 */
												if (PAIRP(BgL_cdrzd2442zd2_1049))
													{	/* Module/java.scm 106 */
														return
															BGl_javazd2parsezd2classz00zzmodule_javaz00
															(BgL_javaz00_116, CAR(BgL_cdrzd2442zd2_1049),
															CDR(BgL_cdrzd2442zd2_1049), ((bool_t) 1),
															BgL_modulez00_117);
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd2372zd2_1027;
													}
											}
										else
											{	/* Module/java.scm 106 */
												if (
													(CAR(BgL_javaz00_116) == CNST_TABLE_REF(((long) 4))))
													{	/* Module/java.scm 106 */
														if (PAIRP(BgL_cdrzd2442zd2_1049))
															{	/* Module/java.scm 106 */
																obj_t BgL_carzd2461zd2_1059;
																obj_t BgL_cdrzd2462zd2_1060;

																BgL_carzd2461zd2_1059 =
																	CAR(BgL_cdrzd2442zd2_1049);
																BgL_cdrzd2462zd2_1060 =
																	CDR(BgL_cdrzd2442zd2_1049);
																if (SYMBOLP(BgL_carzd2461zd2_1059))
																	{	/* Module/java.scm 106 */
																		if (PAIRP(BgL_cdrzd2462zd2_1060))
																			{	/* Module/java.scm 106 */
																				obj_t BgL_carzd2467zd2_1063;

																				BgL_carzd2467zd2_1063 =
																					CAR(BgL_cdrzd2462zd2_1060);
																				if (SYMBOLP(BgL_carzd2467zd2_1063))
																					{	/* Module/java.scm 106 */
																						if (NULLP(CDR
																								(BgL_cdrzd2462zd2_1060)))
																							{	/* Module/java.scm 106 */
																								return
																									BGl_javazd2declarezd2arrayz00zzmodule_javaz00
																									(BgL_javaz00_116,
																									BgL_carzd2461zd2_1059,
																									BgL_carzd2467zd2_1063);
																							}
																						else
																							{	/* Module/java.scm 106 */
																								goto BgL_tagzd2372zd2_1027;
																							}
																					}
																				else
																					{	/* Module/java.scm 106 */
																						goto BgL_tagzd2372zd2_1027;
																					}
																			}
																		else
																			{	/* Module/java.scm 106 */
																				goto BgL_tagzd2372zd2_1027;
																			}
																	}
																else
																	{	/* Module/java.scm 106 */
																		goto BgL_tagzd2372zd2_1027;
																	}
															}
														else
															{	/* Module/java.scm 106 */
																goto BgL_tagzd2372zd2_1027;
															}
													}
												else
													{	/* Module/java.scm 106 */
														goto BgL_tagzd2372zd2_1027;
													}
											}
									}
							}
					}
				else
					{	/* Module/java.scm 106 */
						goto BgL_tagzd2372zd2_1027;
					}
			}
		}

	}



/* &bind-jklass! */
	obj_t BGl_z62bindzd2jklassz12za2zzmodule_javaz00(obj_t BgL_envz00_2281,
		obj_t BgL_jklassz00_2282)
	{
		{	/* Module/java.scm 157 */
			{	/* Module/java.scm 158 */
				obj_t BgL_arg1357z00_2485;

				BgL_arg1357z00_2485 =
					(((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_jklassz00_2282)))->BgL_idz00);
				BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg1357z00_2485,
					CNST_TABLE_REF(((long) 5)),
					((obj_t) ((BgL_jklassz00_bglt) BgL_jklassz00_2282)));
			}
			return (BGl_za2jklassesza2z00zzmodule_javaz00 =
				MAKE_YOUNG_PAIR(
					((obj_t)
						((BgL_jklassz00_bglt) BgL_jklassz00_2282)),
					BGl_za2jklassesza2z00zzmodule_javaz00), BUNSPEC);
		}

	}



/* &java-finalizer */
	obj_t BGl_z62javazd2finaliza7erz17zzmodule_javaz00(obj_t BgL_envz00_2280)
	{
		{	/* Module/java.scm 167 */
			{	/* Module/java.scm 171 */
				obj_t BgL_jklassz00_2486;

				{	/* Module/java.scm 171 */
					obj_t BgL_identz00_2487;

					BgL_identz00_2487 =
						BGl_za2jvmzd2foreignzd2classzd2idza2zd2zzengine_paramz00;
					BgL_jklassz00_2486 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_identz00_2487,
						CNST_TABLE_REF(((long) 5)));
				}
				if (BGl_isazf3zf3zz__objectz00(BgL_jklassz00_2486,
						BGl_jklassz00zzmodule_javaz00))
					{	/* Module/java.scm 173 */
						bool_t BgL_test2365z00_2772;

						{	/* Module/java.scm 173 */
							obj_t BgL_tmpz00_2773;

							BgL_tmpz00_2773 =
								(((BgL_jklassz00_bglt) COBJECT(
										((BgL_jklassz00_bglt) BgL_jklassz00_2486)))->BgL_jnamez00);
							BgL_test2365z00_2772 = STRINGP(BgL_tmpz00_2773);
						}
						if (BgL_test2365z00_2772)
							{	/* Module/java.scm 177 */
								bool_t BgL_test2366z00_2777;

								{	/* Module/java.scm 177 */
									obj_t BgL_arg1370z00_2488;

									BgL_arg1370z00_2488 =
										(((BgL_jklassz00_bglt) COBJECT(
												((BgL_jklassz00_bglt) BgL_jklassz00_2486)))->
										BgL_jnamez00);
									BgL_test2366z00_2777 =
										(BgL_arg1370z00_2488 ==
										BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00);
								}
								if (BgL_test2366z00_2777)
									{	/* Module/java.scm 177 */
										BFALSE;
									}
								else
									{	/* Module/java.scm 178 */
										obj_t BgL_arg1367z00_2489;

										BgL_arg1367z00_2489 =
											(((BgL_jklassz00_bglt) COBJECT(
													((BgL_jklassz00_bglt) BgL_jklassz00_2486)))->
											BgL_srcz00);
										{	/* Module/java.scm 178 */
											obj_t BgL_list1368z00_2490;

											BgL_list1368z00_2490 =
												MAKE_YOUNG_PAIR(BGl_string2183z00zzmodule_javaz00,
												BNIL);
											BGl_javazd2errorzd2zzmodule_javaz00(BgL_arg1367z00_2489,
												BgL_list1368z00_2490);
										}
									}
							}
						else
							{	/* Module/java.scm 173 */
								((((BgL_jklassz00_bglt) COBJECT(
												((BgL_jklassz00_bglt) BgL_jklassz00_2486)))->
										BgL_abstractzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
								{	/* Module/java.scm 176 */
									obj_t BgL_vz00_2491;

									BgL_vz00_2491 =
										BGl_za2jvmzd2foreignzd2classzd2nameza2zd2zzengine_paramz00;
									((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
														BgL_jklassz00_2486)))->BgL_jnamez00) =
										((obj_t) BgL_vz00_2491), BUNSPEC);
								}
							}
					}
				else
					{	/* Module/java.scm 172 */
						BFALSE;
					}
			}
			{
				obj_t BgL_l1243z00_2493;

				BgL_l1243z00_2493 = BGl_za2jklassesza2z00zzmodule_javaz00;
			BgL_zc3z04anonymousza31372ze3z87_2492:
				if (PAIRP(BgL_l1243z00_2493))
					{	/* Module/java.scm 181 */
						{	/* Module/java.scm 182 */
							obj_t BgL_jklassz00_2494;

							BgL_jklassz00_2494 = CAR(BgL_l1243z00_2493);
							{	/* Module/java.scm 183 */
								obj_t BgL_arg1381z00_2495;

								BgL_arg1381z00_2495 =
									(((BgL_jklassz00_bglt) COBJECT(
											((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->BgL_idz00);
								BGl_rempropz12z12zz__r4_symbols_6_4z00(BgL_arg1381z00_2495,
									CNST_TABLE_REF(((long) 5)));
							}
							{	/* Module/java.scm 184 */
								bool_t BgL_test2368z00_2796;

								{	/* Module/java.scm 184 */
									obj_t BgL_tmpz00_2797;

									BgL_tmpz00_2797 =
										(((BgL_jklassz00_bglt) COBJECT(
												((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
										BgL_jnamez00);
									BgL_test2368z00_2796 = STRINGP(BgL_tmpz00_2797);
								}
								if (BgL_test2368z00_2796)
									{	/* Module/java.scm 188 */
										obj_t BgL_prefixz00_2496;

										{	/* Module/java.scm 188 */
											obj_t BgL_arg1418z00_2497;

											BgL_arg1418z00_2497 =
												(((BgL_jklassz00_bglt) COBJECT(
														((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
												BgL_jnamez00);
											BgL_prefixz00_2496 =
												BGl_prefixz00zz__osz00(BgL_arg1418z00_2497);
										}
										{	/* Module/java.scm 189 */
											bool_t BgL_test2369z00_2804;

											{	/* Module/java.scm 189 */
												obj_t BgL_arg1396z00_2498;

												BgL_arg1396z00_2498 =
													(((BgL_jklassz00_bglt) COBJECT(
															((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
													BgL_jnamez00);
												{	/* Module/java.scm 189 */
													bool_t BgL_res2109z00_2499;

													{	/* Module/java.scm 189 */
														long BgL_l1z00_2500;

														BgL_l1z00_2500 = STRING_LENGTH(BgL_prefixz00_2496);
														if (
															(BgL_l1z00_2500 ==
																STRING_LENGTH(((obj_t) BgL_arg1396z00_2498))))
															{	/* Module/java.scm 189 */
																int BgL_arg1267z00_2501;

																{	/* Module/java.scm 189 */
																	char *BgL_auxz00_2814;
																	char *BgL_tmpz00_2812;

																	BgL_auxz00_2814 =
																		BSTRING_TO_STRING(
																		((obj_t) BgL_arg1396z00_2498));
																	BgL_tmpz00_2812 =
																		BSTRING_TO_STRING(BgL_prefixz00_2496);
																	BgL_arg1267z00_2501 =
																		memcmp(BgL_tmpz00_2812, BgL_auxz00_2814,
																		BgL_l1z00_2500);
																}
																BgL_res2109z00_2499 =
																	((long) (BgL_arg1267z00_2501) == ((long) 0));
															}
														else
															{	/* Module/java.scm 189 */
																BgL_res2109z00_2499 = ((bool_t) 0);
															}
													}
													BgL_test2369z00_2804 = BgL_res2109z00_2499;
												}
											}
											if (BgL_test2369z00_2804)
												{	/* Module/java.scm 189 */
													((((BgL_jklassz00_bglt) COBJECT(
																	((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
															BgL_packagez00) =
														((obj_t) BGl_string2184z00zzmodule_javaz00),
														BUNSPEC);
												}
											else
												{	/* Module/java.scm 189 */
													((((BgL_jklassz00_bglt) COBJECT(
																	((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
															BgL_packagez00) =
														((obj_t) BgL_prefixz00_2496), BUNSPEC);
												}
										}
										{	/* Module/java.scm 192 */
											BgL_typez00_bglt BgL_arg1417z00_2502;

											BgL_arg1417z00_2502 =
												BGl_declarezd2jklasszd2zzmodule_javaz00(
												((BgL_jklassz00_bglt) BgL_jklassz00_2494));
											BGl_za2jclassesza2z00zzmodule_javaz00 =
												MAKE_YOUNG_PAIR(
												((obj_t) BgL_arg1417z00_2502),
												BGl_za2jclassesza2z00zzmodule_javaz00);
										}
									}
								else
									{	/* Module/java.scm 184 */
										BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
										{	/* Module/java.scm 187 */
											obj_t BgL_arg1421z00_2503;

											BgL_arg1421z00_2503 =
												(((BgL_jklassz00_bglt) COBJECT(
														((BgL_jklassz00_bglt) BgL_jklassz00_2494)))->
												BgL_srcz00);
											{	/* Module/java.scm 187 */
												obj_t BgL_list1422z00_2504;

												BgL_list1422z00_2504 =
													MAKE_YOUNG_PAIR(BGl_string2185z00zzmodule_javaz00,
													BNIL);
												BGl_javazd2errorzd2zzmodule_javaz00(BgL_arg1421z00_2503,
													BgL_list1422z00_2504);
											}
										}
									}
							}
						}
						{
							obj_t BgL_l1243z00_2832;

							BgL_l1243z00_2832 = CDR(BgL_l1243z00_2493);
							BgL_l1243z00_2493 = BgL_l1243z00_2832;
							goto BgL_zc3z04anonymousza31372ze3z87_2492;
						}
					}
				else
					{	/* Module/java.scm 181 */
						((bool_t) 1);
					}
			}
			if (NULLP(BGl_za2jclassesza2z00zzmodule_javaz00))
				{	/* Module/java.scm 196 */
					((bool_t) 0);
				}
			else
				{	/* Module/java.scm 197 */
					obj_t BgL_g1248z00_2505;

					BgL_g1248z00_2505 =
						bgl_reverse_bang(BGl_za2jclassesza2z00zzmodule_javaz00);
					{
						obj_t BgL_ll1245z00_2507;
						obj_t BgL_ll1246z00_2508;

						BgL_ll1245z00_2507 = BGl_za2jklassesza2z00zzmodule_javaz00;
						BgL_ll1246z00_2508 = BgL_g1248z00_2505;
					BgL_zc3z04anonymousza31444ze3z87_2506:
						if (NULLP(BgL_ll1245z00_2507))
							{	/* Module/java.scm 197 */
								((bool_t) 1);
							}
						else
							{	/* Module/java.scm 197 */
								{	/* Module/java.scm 198 */
									obj_t BgL_jklassz00_2509;
									obj_t BgL_jclassz00_2510;

									BgL_jklassz00_2509 = CAR(((obj_t) BgL_ll1245z00_2507));
									BgL_jclassz00_2510 = CAR(((obj_t) BgL_ll1246z00_2508));
									{	/* Module/java.scm 199 */
										bool_t BgL_test2373z00_2843;

										{	/* Module/java.scm 199 */
											bool_t BgL_test2374z00_2844;

											{	/* Module/java.scm 199 */
												obj_t BgL_tmpz00_2845;

												{
													BgL_jclassz00_bglt BgL_auxz00_2846;

													{
														obj_t BgL_auxz00_2847;

														{	/* Module/java.scm 199 */
															BgL_objectz00_bglt BgL_tmpz00_2848;

															BgL_tmpz00_2848 =
																((BgL_objectz00_bglt)
																((BgL_typez00_bglt) BgL_jclassz00_2510));
															BgL_auxz00_2847 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2848);
														}
														BgL_auxz00_2846 =
															((BgL_jclassz00_bglt) BgL_auxz00_2847);
													}
													BgL_tmpz00_2845 =
														(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_2846))->
														BgL_itszd2superzd2);
												}
												BgL_test2374z00_2844 = CBOOL(BgL_tmpz00_2845);
											}
											if (BgL_test2374z00_2844)
												{	/* Module/java.scm 199 */
													bool_t BgL_test2375z00_2855;

													{	/* Module/java.scm 199 */
														obj_t BgL_arg1474z00_2511;

														{
															BgL_jclassz00_bglt BgL_auxz00_2856;

															{
																obj_t BgL_auxz00_2857;

																{	/* Module/java.scm 199 */
																	BgL_objectz00_bglt BgL_tmpz00_2858;

																	BgL_tmpz00_2858 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_jclassz00_2510));
																	BgL_auxz00_2857 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2858);
																}
																BgL_auxz00_2856 =
																	((BgL_jclassz00_bglt) BgL_auxz00_2857);
															}
															BgL_arg1474z00_2511 =
																(((BgL_jclassz00_bglt)
																	COBJECT(BgL_auxz00_2856))->
																BgL_itszd2superzd2);
														}
														BgL_test2375z00_2855 =
															BGl_isazf3zf3zz__objectz00(BgL_arg1474z00_2511,
															BGl_jclassz00zzobject_classz00);
													}
													if (BgL_test2375z00_2855)
														{	/* Module/java.scm 199 */
															BgL_test2373z00_2843 = ((bool_t) 0);
														}
													else
														{	/* Module/java.scm 199 */
															BgL_test2373z00_2843 = ((bool_t) 1);
														}
												}
											else
												{	/* Module/java.scm 199 */
													BgL_test2373z00_2843 = ((bool_t) 0);
												}
										}
										if (BgL_test2373z00_2843)
											{	/* Module/java.scm 201 */
												obj_t BgL_arg1464z00_2512;

												BgL_arg1464z00_2512 =
													(((BgL_jklassz00_bglt) COBJECT(
															((BgL_jklassz00_bglt) BgL_jklassz00_2509)))->
													BgL_srcz00);
												{	/* Module/java.scm 200 */
													obj_t BgL_list1465z00_2513;

													BgL_list1465z00_2513 =
														MAKE_YOUNG_PAIR(BGl_string2186z00zzmodule_javaz00,
														BNIL);
													BGl_javazd2errorzd2zzmodule_javaz00
														(BgL_arg1464z00_2512, BgL_list1465z00_2513);
												}
											}
										else
											{	/* Module/java.scm 199 */
												BFALSE;
											}
									}
								}
								{	/* Module/java.scm 197 */
									obj_t BgL_arg1476z00_2514;
									obj_t BgL_arg1477z00_2515;

									BgL_arg1476z00_2514 = CDR(((obj_t) BgL_ll1245z00_2507));
									BgL_arg1477z00_2515 = CDR(((obj_t) BgL_ll1246z00_2508));
									{
										obj_t BgL_ll1246z00_2874;
										obj_t BgL_ll1245z00_2873;

										BgL_ll1245z00_2873 = BgL_arg1476z00_2514;
										BgL_ll1246z00_2874 = BgL_arg1477z00_2515;
										BgL_ll1246z00_2508 = BgL_ll1246z00_2874;
										BgL_ll1245z00_2507 = BgL_ll1245z00_2873;
										goto BgL_zc3z04anonymousza31444ze3z87_2506;
									}
								}
							}
					}
				}
			BGl_za2jclassesza2z00zzmodule_javaz00 = BNIL;
			{
				obj_t BgL_l1249z00_2517;

				BgL_l1249z00_2517 = BGl_za2jexportedza2z00zzmodule_javaz00;
			BgL_zc3z04anonymousza31478ze3z87_2516:
				if (PAIRP(BgL_l1249z00_2517))
					{	/* Module/java.scm 206 */
						{	/* Module/java.scm 207 */
							obj_t BgL_jmodz00_2518;

							BgL_jmodz00_2518 = CAR(BgL_l1249z00_2517);
							{	/* Module/java.scm 207 */
								obj_t BgL_javaz00_2519;

								BgL_javaz00_2519 = CAR(((obj_t) BgL_jmodz00_2518));
								{	/* Module/java.scm 207 */
									obj_t BgL_modulez00_2520;

									BgL_modulez00_2520 = CDR(((obj_t) BgL_jmodz00_2518));
									{	/* Module/java.scm 208 */
										obj_t BgL_globalz00_2521;

										{	/* Module/java.scm 209 */
											obj_t BgL_arg1518z00_2522;

											{	/* Module/java.scm 209 */
												obj_t BgL_pairz00_2523;

												BgL_pairz00_2523 = CDR(((obj_t) BgL_javaz00_2519));
												BgL_arg1518z00_2522 = CAR(BgL_pairz00_2523);
											}
											BgL_globalz00_2521 =
												BGl_findzd2globalzd2zzast_envz00(BgL_arg1518z00_2522,
												BNIL);
										}
										{	/* Module/java.scm 209 */
											obj_t BgL_namez00_2524;

											{	/* Module/java.scm 210 */
												obj_t BgL_pairz00_2525;

												{	/* Module/java.scm 210 */
													obj_t BgL_pairz00_2526;

													BgL_pairz00_2526 = CDR(((obj_t) BgL_javaz00_2519));
													BgL_pairz00_2525 = CDR(BgL_pairz00_2526);
												}
												BgL_namez00_2524 = CAR(BgL_pairz00_2525);
											}
											{	/* Module/java.scm 210 */

												if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_2521,
														BGl_globalz00zzast_varz00))
													{	/* Module/java.scm 218 */
														bool_t BgL_test2378z00_2892;

														{	/* Module/java.scm 218 */
															obj_t BgL_tmpz00_2893;

															BgL_tmpz00_2893 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_globalz00_2521))))->BgL_namez00);
															BgL_test2378z00_2892 = STRINGP(BgL_tmpz00_2893);
														}
														if (BgL_test2378z00_2892)
															{	/* Module/java.scm 218 */
																BGl_userzd2warningzd2zztools_errorz00
																	(BGl_string2187z00zzmodule_javaz00,
																	BGl_string2188z00zzmodule_javaz00,
																	BgL_javaz00_2519);
															}
														else
															{	/* Module/java.scm 218 */
																((((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_globalz00_2521))))->
																		BgL_namez00) =
																	((obj_t) BgL_namez00_2524), BUNSPEC);
															}
													}
												else
													{	/* Module/java.scm 213 */
														bool_t BgL_test2379z00_2902;

														{	/* Module/java.scm 213 */
															bool_t BgL_test2380z00_2903;

															if (
																(BGl_za2passza2z00zzengine_paramz00 ==
																	CNST_TABLE_REF(((long) 6))))
																{	/* Module/java.scm 213 */
																	BgL_test2380z00_2903 = ((bool_t) 1);
																}
															else
																{	/* Module/java.scm 213 */
																	BgL_test2380z00_2903 =
																		(BGl_za2passza2z00zzengine_paramz00 ==
																		CNST_TABLE_REF(((long) 7)));
																}
															if (BgL_test2380z00_2903)
																{	/* Module/java.scm 213 */
																	BgL_test2379z00_2902 = ((bool_t) 0);
																}
															else
																{	/* Module/java.scm 213 */
																	BgL_test2379z00_2902 =
																		(BgL_modulez00_2520 ==
																		BGl_za2moduleza2z00zzmodule_modulez00);
																}
														}
														if (BgL_test2379z00_2902)
															{	/* Module/java.scm 216 */
																obj_t BgL_list1497z00_2527;

																BgL_list1497z00_2527 =
																	MAKE_YOUNG_PAIR
																	(BGl_string2189z00zzmodule_javaz00, BNIL);
																BGl_javazd2errorzd2zzmodule_javaz00
																	(BgL_javaz00_2519, BgL_list1497z00_2527);
															}
														else
															{	/* Module/java.scm 213 */
																BFALSE;
															}
													}
											}
										}
									}
								}
							}
						}
						{
							obj_t BgL_l1249z00_2912;

							BgL_l1249z00_2912 = CDR(BgL_l1249z00_2517);
							BgL_l1249z00_2517 = BgL_l1249z00_2912;
							goto BgL_zc3z04anonymousza31478ze3z87_2516;
						}
					}
				else
					{	/* Module/java.scm 206 */
						((bool_t) 1);
					}
			}
			BGl_za2jexportedza2z00zzmodule_javaz00 = BNIL;
			return (BGl_za2jklassesza2z00zzmodule_javaz00 = BNIL, BUNSPEC);
		}

	}



/* java-parse-class */
	obj_t BGl_javazd2parsezd2classz00zzmodule_javaz00(obj_t BgL_javaz00_120,
		obj_t BgL_identz00_121, obj_t BgL_restz00_122,
		bool_t BgL_abstractzf3zf3_123, obj_t BgL_modulez00_124)
	{
		{	/* Module/java.scm 233 */
			{	/* Module/java.scm 234 */
				obj_t BgL_tserz00_1153;

				BgL_tserz00_1153 = bgl_reverse(BgL_restz00_122);
				{	/* Module/java.scm 234 */
					obj_t BgL_jnamez00_1154;

					if (NULLP(BgL_tserz00_1153))
						{	/* Module/java.scm 235 */
							BgL_jnamez00_1154 = BFALSE;
						}
					else
						{	/* Module/java.scm 235 */
							BgL_jnamez00_1154 = CAR(BgL_tserz00_1153);
						}
					{	/* Module/java.scm 235 */

						if (SYMBOLP(BgL_identz00_121))
							{	/* Module/java.scm 237 */
								if (STRINGP(BgL_jnamez00_1154))
									{	/* Module/java.scm 240 */
										obj_t BgL_arg1528z00_1157;

										BgL_arg1528z00_1157 = CDR(((obj_t) BgL_tserz00_1153));
										return
											BBOOL(BGl_javazd2declarezd2classz00zzmodule_javaz00
											(BgL_javaz00_120, BgL_identz00_121, BgL_jnamez00_1154,
												BgL_arg1528z00_1157, BgL_abstractzf3zf3_123,
												BgL_modulez00_124));
									}
								else
									{	/* Module/java.scm 239 */
										return
											BBOOL(BGl_javazd2refinezd2classz00zzmodule_javaz00
											(BgL_javaz00_120, BgL_identz00_121, BgL_restz00_122,
												BgL_modulez00_124));
									}
							}
						else
							{	/* Module/java.scm 238 */
								obj_t BgL_list1529z00_1158;

								BgL_list1529z00_1158 =
									MAKE_YOUNG_PAIR(BGl_string2190z00zzmodule_javaz00, BNIL);
								return
									BGl_javazd2errorzd2zzmodule_javaz00(BgL_javaz00_120,
									BgL_list1529z00_1158);
							}
					}
				}
			}
		}

	}



/* java-declare-class */
	bool_t BGl_javazd2declarezd2classz00zzmodule_javaz00(obj_t BgL_jz00_125,
		obj_t BgL_idz00_126, obj_t BgL_jnamez00_127, obj_t BgL_compz00_128,
		bool_t BgL_az00_129, obj_t BgL_modulez00_130)
	{
		{	/* Module/java.scm 247 */
			{	/* Module/java.scm 249 */
				obj_t BgL_locz00_1160;

				BgL_locz00_1160 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_125);
				{	/* Module/java.scm 249 */
					obj_t BgL_jklassz00_1161;

					{	/* Module/java.scm 250 */
						obj_t BgL_jklassz00_1169;

						BgL_jklassz00_1169 =
							BGl_getpropz00zz__r4_symbols_6_4z00(BgL_idz00_126,
							CNST_TABLE_REF(((long) 5)));
						if (BGl_isazf3zf3zz__objectz00(BgL_jklassz00_1169,
								BGl_jklassz00zzmodule_javaz00))
							{	/* Module/java.scm 252 */
								if (
									(BBOOL(
											(((BgL_jklassz00_bglt) COBJECT(
														((BgL_jklassz00_bglt) BgL_jklassz00_1169)))->
												BgL_abstractzf3zf3)) == BBOOL(BgL_az00_129)))
									{	/* Module/java.scm 263 */
										bool_t BgL_test2387z00_2941;

										{	/* Module/java.scm 263 */
											obj_t BgL_tmpz00_2942;

											BgL_tmpz00_2942 =
												(((BgL_jklassz00_bglt) COBJECT(
														((BgL_jklassz00_bglt) BgL_jklassz00_1169)))->
												BgL_jnamez00);
											BgL_test2387z00_2941 = STRINGP(BgL_tmpz00_2942);
										}
										if (BgL_test2387z00_2941)
											{	/* Module/java.scm 265 */
												bool_t BgL_test2388z00_2946;

												{	/* Module/java.scm 265 */
													obj_t BgL_arg1561z00_1178;

													BgL_arg1561z00_1178 =
														(((BgL_jklassz00_bglt) COBJECT(
																((BgL_jklassz00_bglt) BgL_jklassz00_1169)))->
														BgL_jnamez00);
													{	/* Module/java.scm 265 */
														bool_t BgL_res2125z00_2042;

														{	/* Module/java.scm 265 */
															long BgL_l1z00_2029;

															BgL_l1z00_2029 =
																STRING_LENGTH(((obj_t) BgL_arg1561z00_1178));
															if (
																(BgL_l1z00_2029 ==
																	STRING_LENGTH(BgL_jnamez00_127)))
																{	/* Module/java.scm 265 */
																	int BgL_arg1267z00_2032;

																	{	/* Module/java.scm 265 */
																		char *BgL_auxz00_2957;
																		char *BgL_tmpz00_2954;

																		BgL_auxz00_2957 =
																			BSTRING_TO_STRING(BgL_jnamez00_127);
																		BgL_tmpz00_2954 =
																			BSTRING_TO_STRING(
																			((obj_t) BgL_arg1561z00_1178));
																		BgL_arg1267z00_2032 =
																			memcmp(BgL_tmpz00_2954, BgL_auxz00_2957,
																			BgL_l1z00_2029);
																	}
																	BgL_res2125z00_2042 =
																		(
																		(long) (BgL_arg1267z00_2032) == ((long) 0));
																}
															else
																{	/* Module/java.scm 265 */
																	BgL_res2125z00_2042 = ((bool_t) 0);
																}
														}
														BgL_test2388z00_2946 = BgL_res2125z00_2042;
													}
												}
												if (BgL_test2388z00_2946)
													{	/* Module/java.scm 265 */
														BgL_jklassz00_1161 = BgL_jklassz00_1169;
													}
												else
													{	/* Module/java.scm 268 */
														obj_t BgL_list1560z00_1177;

														BgL_list1560z00_1177 =
															MAKE_YOUNG_PAIR(BGl_string2191z00zzmodule_javaz00,
															BNIL);
														BgL_jklassz00_1161 =
															BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_125,
															BgL_list1560z00_1177);
													}
											}
										else
											{	/* Module/java.scm 263 */
												BgL_jklassz00_1161 =
													((((BgL_jklassz00_bglt) COBJECT(
																((BgL_jklassz00_bglt) BgL_jklassz00_1169)))->
														BgL_jnamez00) =
													((obj_t) BgL_jnamez00_127), BUNSPEC);
											}
									}
								else
									{	/* Module/java.scm 262 */
										obj_t BgL_list1565z00_1180;

										BgL_list1565z00_1180 =
											MAKE_YOUNG_PAIR(BGl_string2191z00zzmodule_javaz00, BNIL);
										BgL_jklassz00_1161 =
											BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_125,
											BgL_list1565z00_1180);
									}
							}
						else
							{	/* Module/java.scm 253 */
								BgL_jklassz00_bglt BgL_new1111z00_1182;

								{	/* Module/java.scm 254 */
									BgL_jklassz00_bglt BgL_new1110z00_1184;

									BgL_new1110z00_1184 =
										((BgL_jklassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_jklassz00_bgl))));
									{	/* Module/java.scm 254 */
										long BgL_arg1578z00_1185;

										{	/* Module/java.scm 254 */
											long BgL_res2126z00_2045;

											BgL_res2126z00_2045 =
												BGL_CLASS_INDEX(BGl_jklassz00zzmodule_javaz00);
											BgL_arg1578z00_1185 = BgL_res2126z00_2045;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1110z00_1184),
											BgL_arg1578z00_1185);
									}
									BgL_new1111z00_1182 = BgL_new1110z00_1184;
								}
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_srcz00) = ((obj_t) BgL_jz00_125), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_locz00) = ((obj_t) BgL_locz00_1160), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_idz00) = ((obj_t) BgL_idz00_126), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_iddz00) =
									((obj_t)
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_idz00_126,
											BgL_locz00_1160)), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_jnamez00) = ((obj_t) BgL_jnamez00_127), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_packagez00) = ((obj_t) BUNSPEC), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_fieldsz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_methodsz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_constructorsz00) = ((obj_t) BNIL), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_abstractzf3zf3) = ((bool_t) BgL_az00_129), BUNSPEC);
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1111z00_1182))->
										BgL_modulez00) = ((obj_t) BgL_modulez00_130), BUNSPEC);
								{	/* Module/java.scm 253 */
									obj_t BgL_fun1575z00_1183;

									BgL_fun1575z00_1183 =
										BGl_classzd2constructorzd2zz__objectz00
										(BGl_jklassz00zzmodule_javaz00);
									PROCEDURE_ENTRY(BgL_fun1575z00_1183) (BgL_fun1575z00_1183,
										((obj_t) BgL_new1111z00_1182), BEOA);
								}
								BgL_jklassz00_1161 = ((obj_t) BgL_new1111z00_1182);
					}}
					{	/* Module/java.scm 250 */

						{
							obj_t BgL_l1251z00_1163;

							BgL_l1251z00_1163 = BgL_compz00_128;
						BgL_zc3z04anonymousza31531ze3z87_1164:
							if (PAIRP(BgL_l1251z00_1163))
								{	/* Module/java.scm 269 */
									{	/* Module/java.scm 269 */
										obj_t BgL_cz00_1166;

										BgL_cz00_1166 = CAR(BgL_l1251z00_1163);
										BGl_javazd2declarezd2componentz00zzmodule_javaz00
											(BgL_jz00_125, ((BgL_jklassz00_bglt) BgL_jklassz00_1161),
											BgL_cz00_1166);
									}
									{
										obj_t BgL_l1251z00_2996;

										BgL_l1251z00_2996 = CDR(BgL_l1251z00_1163);
										BgL_l1251z00_1163 = BgL_l1251z00_2996;
										goto BgL_zc3z04anonymousza31531ze3z87_1164;
									}
								}
							else
								{	/* Module/java.scm 269 */
									return ((bool_t) 1);
								}
						}
					}
				}
			}
		}

	}



/* java-refine-class */
	bool_t BGl_javazd2refinezd2classz00zzmodule_javaz00(obj_t BgL_jz00_131,
		obj_t BgL_identz00_132, obj_t BgL_compz00_133, obj_t BgL_modulez00_134)
	{
		{	/* Module/java.scm 277 */
			{	/* Module/java.scm 278 */
				BgL_jklassz00_bglt BgL_jklassz00_1186;

				{	/* Module/java.scm 278 */
					obj_t BgL_jklassz00_1194;

					BgL_jklassz00_1194 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_identz00_132,
						CNST_TABLE_REF(((long) 5)));
					if (BGl_isazf3zf3zz__objectz00(BgL_jklassz00_1194,
							BGl_jklassz00zzmodule_javaz00))
						{	/* Module/java.scm 279 */
							BgL_jklassz00_1186 = ((BgL_jklassz00_bglt) BgL_jklassz00_1194);
						}
					else
						{	/* Module/java.scm 281 */
							BgL_jklassz00_bglt BgL_new1113z00_1196;

							{	/* Module/java.scm 282 */
								BgL_jklassz00_bglt BgL_new1112z00_1199;

								BgL_new1112z00_1199 =
									((BgL_jklassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
												BgL_jklassz00_bgl))));
								{	/* Module/java.scm 282 */
									long BgL_arg1588z00_1200;

									{	/* Module/java.scm 282 */
										long BgL_res2129z00_2053;

										BgL_res2129z00_2053 =
											BGL_CLASS_INDEX(BGl_jklassz00zzmodule_javaz00);
										BgL_arg1588z00_1200 = BgL_res2129z00_2053;
									}
									BGL_OBJECT_CLASS_NUM_SET(
										((BgL_objectz00_bglt) BgL_new1112z00_1199),
										BgL_arg1588z00_1200);
								}
								BgL_new1113z00_1196 = BgL_new1112z00_1199;
							}
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_srcz00) = ((obj_t) BgL_jz00_131), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_locz00) =
								((obj_t)
									BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_131)),
								BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_idz00) = ((obj_t) BgL_identz00_132), BUNSPEC);
							{
								obj_t BgL_auxz00_3011;

								{	/* Module/java.scm 284 */
									obj_t BgL_arg1584z00_1197;

									BgL_arg1584z00_1197 =
										BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_131);
									BgL_auxz00_3011 =
										BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(BgL_identz00_132,
										BgL_arg1584z00_1197);
								}
								((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
										BgL_iddz00) = ((obj_t) BgL_auxz00_3011), BUNSPEC);
							}
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_jnamez00) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_packagez00) = ((obj_t) BUNSPEC), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_fieldsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_methodsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_constructorsz00) = ((obj_t) BNIL), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_abstractzf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
							((((BgL_jklassz00_bglt) COBJECT(BgL_new1113z00_1196))->
									BgL_modulez00) = ((obj_t) BgL_modulez00_134), BUNSPEC);
							{	/* Module/java.scm 281 */
								obj_t BgL_fun1585z00_1198;

								BgL_fun1585z00_1198 =
									BGl_classzd2constructorzd2zz__objectz00
									(BGl_jklassz00zzmodule_javaz00);
								PROCEDURE_ENTRY(BgL_fun1585z00_1198) (BgL_fun1585z00_1198,
									((obj_t) BgL_new1113z00_1196), BEOA);
							}
							BgL_jklassz00_1186 = BgL_new1113z00_1196;
				}}
				{
					obj_t BgL_l1253z00_1188;

					BgL_l1253z00_1188 = BgL_compz00_133;
				BgL_zc3z04anonymousza31579ze3z87_1189:
					if (PAIRP(BgL_l1253z00_1188))
						{	/* Module/java.scm 287 */
							BGl_javazd2declarezd2componentz00zzmodule_javaz00(BgL_jz00_131,
								BgL_jklassz00_1186, CAR(BgL_l1253z00_1188));
							{
								obj_t BgL_l1253z00_3032;

								BgL_l1253z00_3032 = CDR(BgL_l1253z00_1188);
								BgL_l1253z00_1188 = BgL_l1253z00_3032;
								goto BgL_zc3z04anonymousza31579ze3z87_1189;
							}
						}
					else
						{	/* Module/java.scm 287 */
							return ((bool_t) 1);
						}
				}
			}
		}

	}



/* java-declare-component */
	obj_t BGl_javazd2declarezd2componentz00zzmodule_javaz00(obj_t BgL_jz00_135,
		BgL_jklassz00_bglt BgL_jklassz00_136, obj_t BgL_componentz00_137)
	{
		{	/* Module/java.scm 292 */
			{
				obj_t BgL_restz00_1204;
				obj_t BgL_restz00_1206;
				obj_t BgL_idz00_1208;
				obj_t BgL_argsz00_1209;

				if (PAIRP(BgL_componentz00_137))
					{	/* Module/java.scm 313 */
						if ((CAR(BgL_componentz00_137) == CNST_TABLE_REF(((long) 12))))
							{	/* Module/java.scm 313 */
								BgL_restz00_1204 = CDR(BgL_componentz00_137);
								{
									obj_t BgL_jnamez00_1269;
									obj_t BgL_idz00_1270;
									obj_t BgL_modz00_1271;

									{	/* Module/java.scm 315 */
										obj_t BgL_ezd2617zd2_1274;

										BgL_ezd2617zd2_1274 = bgl_reverse(BgL_restz00_1204);
										if (NULLP(BgL_ezd2617zd2_1274))
											{	/* Module/java.scm 313 */
											BgL_tagzd2616zd2_1273:
												{	/* Module/java.scm 322 */
													obj_t BgL_list1698z00_1292;

													BgL_list1698z00_1292 =
														MAKE_YOUNG_PAIR(BGl_string2198z00zzmodule_javaz00,
														BNIL);
													return
														BGl_javazd2errorzd2zzmodule_javaz00
														(BgL_componentz00_137, BgL_list1698z00_1292);
												}
											}
										else
											{	/* Module/java.scm 313 */
												obj_t BgL_carzd2624zd2_1276;
												obj_t BgL_cdrzd2625zd2_1277;

												BgL_carzd2624zd2_1276 = CAR(BgL_ezd2617zd2_1274);
												BgL_cdrzd2625zd2_1277 = CDR(BgL_ezd2617zd2_1274);
												if (STRINGP(BgL_carzd2624zd2_1276))
													{	/* Module/java.scm 313 */
														if (PAIRP(BgL_cdrzd2625zd2_1277))
															{	/* Module/java.scm 313 */
																obj_t BgL_carzd2631zd2_1280;

																BgL_carzd2631zd2_1280 =
																	CAR(BgL_cdrzd2625zd2_1277);
																if (SYMBOLP(BgL_carzd2631zd2_1280))
																	{	/* Module/java.scm 313 */
																		BgL_jnamez00_1269 = BgL_carzd2624zd2_1276;
																		BgL_idz00_1270 = BgL_carzd2631zd2_1280;
																		BgL_modz00_1271 =
																			CDR(BgL_cdrzd2625zd2_1277);
																		if (BGl_modifierzd2listzf3ze70zc6zzmodule_javaz00(BgL_modz00_1271))
																			{
																				obj_t BgL_auxz00_3056;

																				{	/* Module/java.scm 320 */
																					obj_t BgL_arg1686z00_1285;
																					obj_t BgL_arg1687z00_1286;

																					{	/* Module/java.scm 320 */
																						obj_t BgL_list1688z00_1287;

																						{	/* Module/java.scm 320 */
																							obj_t BgL_arg1692z00_1288;

																							{	/* Module/java.scm 320 */
																								obj_t BgL_arg1695z00_1289;

																								{	/* Module/java.scm 320 */
																									obj_t BgL_arg1696z00_1290;

																									BgL_arg1696z00_1290 =
																										MAKE_YOUNG_PAIR
																										(BgL_modz00_1271, BNIL);
																									BgL_arg1695z00_1289 =
																										MAKE_YOUNG_PAIR
																										(BgL_jnamez00_1269,
																										BgL_arg1696z00_1290);
																								}
																								BgL_arg1692z00_1288 =
																									MAKE_YOUNG_PAIR
																									(BgL_idz00_1270,
																									BgL_arg1695z00_1289);
																							}
																							BgL_list1688z00_1287 =
																								MAKE_YOUNG_PAIR
																								(BgL_componentz00_137,
																								BgL_arg1692z00_1288);
																						}
																						BgL_arg1686z00_1285 =
																							BgL_list1688z00_1287;
																					}
																					BgL_arg1687z00_1286 =
																						(((BgL_jklassz00_bglt)
																							COBJECT(BgL_jklassz00_136))->
																						BgL_fieldsz00);
																					BgL_auxz00_3056 =
																						MAKE_YOUNG_PAIR(BgL_arg1686z00_1285,
																						BgL_arg1687z00_1286);
																				}
																				return
																					((((BgL_jklassz00_bglt)
																							COBJECT(BgL_jklassz00_136))->
																						BgL_fieldsz00) =
																					((obj_t) BgL_auxz00_3056), BUNSPEC);
																			}
																		else
																			{	/* Module/java.scm 318 */
																				obj_t BgL_list1697z00_1291;

																				BgL_list1697z00_1291 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2199z00zzmodule_javaz00,
																					BNIL);
																				return
																					BGl_javazd2errorzd2zzmodule_javaz00
																					(BgL_componentz00_137,
																					BgL_list1697z00_1291);
																			}
																	}
																else
																	{	/* Module/java.scm 313 */
																		goto BgL_tagzd2616zd2_1273;
																	}
															}
														else
															{	/* Module/java.scm 313 */
																goto BgL_tagzd2616zd2_1273;
															}
													}
												else
													{	/* Module/java.scm 313 */
														goto BgL_tagzd2616zd2_1273;
													}
											}
									}
								}
							}
						else
							{	/* Module/java.scm 313 */
								if ((CAR(BgL_componentz00_137) == CNST_TABLE_REF(((long) 13))))
									{	/* Module/java.scm 313 */
										BgL_restz00_1206 = CDR(BgL_componentz00_137);
										{
											obj_t BgL_jnamez00_1293;
											obj_t BgL_argsz00_1294;
											obj_t BgL_idz00_1295;
											obj_t BgL_modz00_1296;

											{	/* Module/java.scm 324 */
												obj_t BgL_ezd2639zd2_1299;

												BgL_ezd2639zd2_1299 = bgl_reverse(BgL_restz00_1206);
												if (NULLP(BgL_ezd2639zd2_1299))
													{	/* Module/java.scm 313 */
													BgL_tagzd2638zd2_1298:
														{	/* Module/java.scm 343 */
															obj_t BgL_list1732z00_1329;

															BgL_list1732z00_1329 =
																MAKE_YOUNG_PAIR
																(BGl_string2196z00zzmodule_javaz00, BNIL);
															return
																BGl_javazd2errorzd2zzmodule_javaz00
																(BgL_componentz00_137, BgL_list1732z00_1329);
														}
													}
												else
													{	/* Module/java.scm 313 */
														obj_t BgL_carzd2648zd2_1301;
														obj_t BgL_cdrzd2649zd2_1302;

														BgL_carzd2648zd2_1301 = CAR(BgL_ezd2639zd2_1299);
														BgL_cdrzd2649zd2_1302 = CDR(BgL_ezd2639zd2_1299);
														if (STRINGP(BgL_carzd2648zd2_1301))
															{	/* Module/java.scm 313 */
																if (PAIRP(BgL_cdrzd2649zd2_1302))
																	{	/* Module/java.scm 313 */
																		obj_t BgL_carzd2656zd2_1305;
																		obj_t BgL_cdrzd2657zd2_1306;

																		BgL_carzd2656zd2_1305 =
																			CAR(BgL_cdrzd2649zd2_1302);
																		BgL_cdrzd2657zd2_1306 =
																			CDR(BgL_cdrzd2649zd2_1302);
																		if (BGl_argzd2listzf3ze70zc6zzmodule_javaz00
																			(BgL_carzd2656zd2_1305))
																			{	/* Module/java.scm 313 */
																				if (PAIRP(BgL_cdrzd2657zd2_1306))
																					{	/* Module/java.scm 313 */
																						obj_t BgL_carzd2663zd2_1309;

																						BgL_carzd2663zd2_1309 =
																							CAR(BgL_cdrzd2657zd2_1306);
																						if (SYMBOLP(BgL_carzd2663zd2_1309))
																							{	/* Module/java.scm 313 */
																								BgL_jnamez00_1293 =
																									BgL_carzd2648zd2_1301;
																								BgL_argsz00_1294 =
																									BgL_carzd2656zd2_1305;
																								BgL_idz00_1295 =
																									BgL_carzd2663zd2_1309;
																								BgL_modz00_1296 =
																									CDR(BgL_cdrzd2657zd2_1306);
																								if (BGl_modifierzd2listzf3ze70zc6zzmodule_javaz00(BgL_modz00_1296))
																									{	/* Module/java.scm 332 */
																										obj_t BgL_modz00_1314;

																										if (
																											(((BgL_jklassz00_bglt)
																													COBJECT
																													(BgL_jklassz00_136))->
																												BgL_abstractzf3zf3))
																											{	/* Module/java.scm 332 */
																												BgL_modz00_1314 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 10)),
																													BgL_modz00_1296);
																											}
																										else
																											{	/* Module/java.scm 332 */
																												BgL_modz00_1314 =
																													BgL_modz00_1296;
																											}
																										{	/* Module/java.scm 332 */
																											BgL_jmethodz00_bglt
																												BgL_jmetz00_1315;
																											{	/* Module/java.scm 333 */
																												BgL_jmethodz00_bglt
																													BgL_new1119z00_1317;
																												{	/* Module/java.scm 334 */
																													BgL_jmethodz00_bglt
																														BgL_new1118z00_1325;
																													BgL_new1118z00_1325 =
																														(
																														(BgL_jmethodz00_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_jmethodz00_bgl))));
																													{	/* Module/java.scm 334 */
																														long
																															BgL_arg1728z00_1326;
																														{	/* Module/java.scm 334 */
																															long
																																BgL_res2140z00_2076;
																															BgL_res2140z00_2076
																																=
																																BGL_CLASS_INDEX
																																(BGl_jmethodz00zzmodule_javaz00);
																															BgL_arg1728z00_1326
																																=
																																BgL_res2140z00_2076;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1118z00_1325), BgL_arg1728z00_1326);
																													}
																													BgL_new1119z00_1317 =
																														BgL_new1118z00_1325;
																												}
																												((((BgL_jmethodz00_bglt)
																															COBJECT
																															(BgL_new1119z00_1317))->
																														BgL_srcz00) =
																													((obj_t)
																														BgL_componentz00_137),
																													BUNSPEC);
																												{
																													obj_t BgL_auxz00_3103;

																													if (
																														((((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_iddz00) == CNST_TABLE_REF(((long) 11))))
																														{	/* Module/java.scm 335 */
																															BgL_auxz00_3103 =
																																BgL_idz00_1295;
																														}
																													else
																														{	/* Module/java.scm 337 */
																															obj_t
																																BgL_arg1719z00_1320;
																															BgL_arg1719z00_1320
																																=
																																(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_iddz00);
																															{	/* Module/java.scm 337 */
																																obj_t
																																	BgL_list1720z00_1321;
																																{	/* Module/java.scm 337 */
																																	obj_t
																																		BgL_arg1725z00_1322;
																																	{	/* Module/java.scm 337 */
																																		obj_t
																																			BgL_arg1726z00_1323;
																																		BgL_arg1726z00_1323
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_idz00_1295,
																																			BNIL);
																																		BgL_arg1725z00_1322
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					8)),
																																			BgL_arg1726z00_1323);
																																	}
																																	BgL_list1720z00_1321
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1719z00_1320,
																																		BgL_arg1725z00_1322);
																																}
																																BgL_auxz00_3103
																																	=
																																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																	(BgL_list1720z00_1321);
																														}}
																													((((BgL_jmethodz00_bglt) COBJECT(BgL_new1119z00_1317))->BgL_idz00) = ((obj_t) BgL_auxz00_3103), BUNSPEC);
																												}
																												((((BgL_jmethodz00_bglt)
																															COBJECT
																															(BgL_new1119z00_1317))->
																														BgL_argsz00) =
																													((obj_t)
																														BgL_argsz00_1294),
																													BUNSPEC);
																												((((BgL_jmethodz00_bglt)
																															COBJECT
																															(BgL_new1119z00_1317))->
																														BgL_jnamez00) =
																													((obj_t)
																														BgL_jnamez00_1293),
																													BUNSPEC);
																												((((BgL_jmethodz00_bglt)
																															COBJECT
																															(BgL_new1119z00_1317))->
																														BgL_modifiersz00) =
																													((obj_t)
																														BgL_modz00_1314),
																													BUNSPEC);
																												BgL_jmetz00_1315 =
																													BgL_new1119z00_1317;
																											}
																											{	/* Module/java.scm 333 */

																												{
																													obj_t BgL_auxz00_3118;

																													{	/* Module/java.scm 341 */
																														obj_t
																															BgL_arg1711z00_1316;
																														BgL_arg1711z00_1316
																															=
																															(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_methodsz00);
																														BgL_auxz00_3118 =
																															MAKE_YOUNG_PAIR((
																																(obj_t)
																																BgL_jmetz00_1315),
																															BgL_arg1711z00_1316);
																													}
																													return
																														((((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_methodsz00) = ((obj_t) BgL_auxz00_3118), BUNSPEC);
																												}
																											}
																										}
																									}
																								else
																									{	/* Module/java.scm 330 */
																										obj_t BgL_list1731z00_1328;

																										BgL_list1731z00_1328 =
																											MAKE_YOUNG_PAIR
																											(BGl_string2197z00zzmodule_javaz00,
																											BNIL);
																										return
																											BGl_javazd2errorzd2zzmodule_javaz00
																											(BgL_componentz00_137,
																											BgL_list1731z00_1328);
																									}
																							}
																						else
																							{	/* Module/java.scm 313 */
																								goto BgL_tagzd2638zd2_1298;
																							}
																					}
																				else
																					{	/* Module/java.scm 313 */
																						goto BgL_tagzd2638zd2_1298;
																					}
																			}
																		else
																			{	/* Module/java.scm 313 */
																				goto BgL_tagzd2638zd2_1298;
																			}
																	}
																else
																	{	/* Module/java.scm 313 */
																		goto BgL_tagzd2638zd2_1298;
																	}
															}
														else
															{	/* Module/java.scm 313 */
																goto BgL_tagzd2638zd2_1298;
															}
													}
											}
										}
									}
								else
									{	/* Module/java.scm 313 */
										obj_t BgL_cdrzd2516zd2_1220;

										BgL_cdrzd2516zd2_1220 = CDR(BgL_componentz00_137);
										if (
											(CAR(BgL_componentz00_137) ==
												CNST_TABLE_REF(((long) 14))))
											{	/* Module/java.scm 313 */
												if (PAIRP(BgL_cdrzd2516zd2_1220))
													{	/* Module/java.scm 313 */
														obj_t BgL_cdrzd2520zd2_1224;

														BgL_cdrzd2520zd2_1224 = CDR(BgL_cdrzd2516zd2_1220);
														if (
															(CAR(BgL_cdrzd2516zd2_1220) ==
																CNST_TABLE_REF(((long) 15))))
															{	/* Module/java.scm 313 */
																if (PAIRP(BgL_cdrzd2520zd2_1224))
																	{	/* Module/java.scm 313 */
																		obj_t BgL_carzd2523zd2_1228;
																		obj_t BgL_cdrzd2524zd2_1229;

																		BgL_carzd2523zd2_1228 =
																			CAR(BgL_cdrzd2520zd2_1224);
																		BgL_cdrzd2524zd2_1229 =
																			CDR(BgL_cdrzd2520zd2_1224);
																		if (SYMBOLP(BgL_carzd2523zd2_1228))
																			{	/* Module/java.scm 313 */
																				if (PAIRP(BgL_cdrzd2524zd2_1229))
																					{	/* Module/java.scm 313 */
																						obj_t BgL_carzd2529zd2_1232;

																						BgL_carzd2529zd2_1232 =
																							CAR(BgL_cdrzd2524zd2_1229);
																						if (BGl_argzd2listzf3ze70zc6zzmodule_javaz00(BgL_carzd2529zd2_1232))
																							{	/* Module/java.scm 313 */
																								if (NULLP(CDR
																										(BgL_cdrzd2524zd2_1229)))
																									{	/* Module/java.scm 313 */
																										BgL_idz00_1208 =
																											BgL_carzd2523zd2_1228;
																										BgL_argsz00_1209 =
																											BgL_carzd2529zd2_1232;
																									BgL_tagzd2491zd2_1210:
																										{	/* Module/java.scm 347 */
																											BgL_jconstructorz00_bglt
																												BgL_jconstrz00_1331;
																											{	/* Module/java.scm 347 */
																												BgL_jconstructorz00_bglt
																													BgL_new1122z00_1335;
																												{	/* Module/java.scm 348 */
																													BgL_jconstructorz00_bglt
																														BgL_new1121z00_1343;
																													BgL_new1121z00_1343 =
																														(
																														(BgL_jconstructorz00_bglt)
																														BOBJECT(GC_MALLOC
																															(sizeof(struct
																																	BgL_jconstructorz00_bgl))));
																													{	/* Module/java.scm 348 */
																														long
																															BgL_arg1747z00_1344;
																														{	/* Module/java.scm 348 */
																															long
																																BgL_res2146z00_2091;
																															BgL_res2146z00_2091
																																=
																																BGL_CLASS_INDEX
																																(BGl_jconstructorz00zzmodule_javaz00);
																															BgL_arg1747z00_1344
																																=
																																BgL_res2146z00_2091;
																														}
																														BGL_OBJECT_CLASS_NUM_SET
																															(((BgL_objectz00_bglt) BgL_new1121z00_1343), BgL_arg1747z00_1344);
																													}
																													BgL_new1122z00_1335 =
																														BgL_new1121z00_1343;
																												}
																												((((BgL_jmethodz00_bglt)
																															COBJECT((
																																	(BgL_jmethodz00_bglt)
																																	BgL_new1122z00_1335)))->
																														BgL_srcz00) =
																													((obj_t)
																														BgL_componentz00_137),
																													BUNSPEC);
																												{
																													obj_t BgL_auxz00_3159;

																													{	/* Module/java.scm 349 */
																														obj_t
																															BgL_arg1740z00_1336;
																														obj_t
																															BgL_arg1741z00_1337;
																														{	/* Module/java.scm 349 */
																															obj_t
																																BgL_arg1742z00_1338;
																															BgL_arg1742z00_1338
																																=
																																(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_iddz00);
																															{	/* Module/java.scm 349 */
																																obj_t
																																	BgL_list1743z00_1339;
																																{	/* Module/java.scm 349 */
																																	obj_t
																																		BgL_arg1744z00_1340;
																																	{	/* Module/java.scm 349 */
																																		obj_t
																																			BgL_arg1745z00_1341;
																																		{	/* Module/java.scm 349 */
																																			obj_t
																																				BgL_arg1746z00_1342;
																																			BgL_arg1746z00_1342
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_idz00_1208,
																																				BNIL);
																																			BgL_arg1745z00_1341
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						8)),
																																				BgL_arg1746z00_1342);
																																		}
																																		BgL_arg1744z00_1340
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1742z00_1338,
																																			BgL_arg1745z00_1341);
																																	}
																																	BgL_list1743z00_1339
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				9)),
																																		BgL_arg1744z00_1340);
																																}
																																BgL_arg1740z00_1336
																																	=
																																	BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																	(BgL_list1743z00_1339);
																														}}
																														BgL_arg1741z00_1337
																															=
																															(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_iddz00);
																														BgL_auxz00_3159 =
																															BGl_makezd2typedzd2identz00zzast_identz00
																															(BgL_arg1740z00_1336,
																															BgL_arg1741z00_1337);
																													}
																													((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt) BgL_new1122z00_1335)))->BgL_idz00) = ((obj_t) BgL_auxz00_3159), BUNSPEC);
																												}
																												((((BgL_jmethodz00_bglt)
																															COBJECT((
																																	(BgL_jmethodz00_bglt)
																																	BgL_new1122z00_1335)))->
																														BgL_argsz00) =
																													((obj_t)
																														BgL_argsz00_1209),
																													BUNSPEC);
																												((((BgL_jmethodz00_bglt)
																															COBJECT((
																																	(BgL_jmethodz00_bglt)
																																	BgL_new1122z00_1335)))->
																														BgL_jnamez00) =
																													((obj_t)
																														BGl_string2195z00zzmodule_javaz00),
																													BUNSPEC);
																												((((BgL_jmethodz00_bglt)
																															COBJECT((
																																	(BgL_jmethodz00_bglt)
																																	BgL_new1122z00_1335)))->
																														BgL_modifiersz00) =
																													((obj_t) BNIL),
																													BUNSPEC);
																												BgL_jconstrz00_1331 =
																													BgL_new1122z00_1335;
																											}
																											{
																												obj_t BgL_auxz00_3178;

																												{	/* Module/java.scm 353 */
																													obj_t
																														BgL_arg1733z00_1332;
																													BgL_arg1733z00_1332 =
																														(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_methodsz00);
																													BgL_auxz00_3178 =
																														MAKE_YOUNG_PAIR((
																															(obj_t)
																															BgL_jconstrz00_1331),
																														BgL_arg1733z00_1332);
																												}
																												((((BgL_jklassz00_bglt)
																															COBJECT
																															(BgL_jklassz00_136))->
																														BgL_methodsz00) =
																													((obj_t)
																														BgL_auxz00_3178),
																													BUNSPEC);
																											}
																											{
																												obj_t BgL_auxz00_3183;

																												{	/* Module/java.scm 354 */
																													obj_t
																														BgL_arg1738z00_1333;
																													obj_t
																														BgL_arg1739z00_1334;
																													BgL_arg1738z00_1333 =
																														MAKE_YOUNG_PAIR
																														(BgL_idz00_1208,
																														BgL_argsz00_1209);
																													BgL_arg1739z00_1334 =
																														(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_constructorsz00);
																													BgL_auxz00_3183 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1738z00_1333,
																														BgL_arg1739z00_1334);
																												}
																												return
																													((((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_136))->BgL_constructorsz00) = ((obj_t) BgL_auxz00_3183), BUNSPEC);
																											}
																										}
																									}
																								else
																									{	/* Module/java.scm 313 */
																									BgL_tagzd2492zd2_1211:
																										if (PAIRP
																											(BgL_componentz00_137))
																											{	/* Module/java.scm 357 */
																												obj_t
																													BgL_list1749z00_1346;
																												BgL_list1749z00_1346 =
																													MAKE_YOUNG_PAIR
																													(BGl_string2192z00zzmodule_javaz00,
																													BNIL);
																												return
																													BGl_javazd2errorzd2zzmodule_javaz00
																													(BgL_componentz00_137,
																													BgL_list1749z00_1346);
																											}
																										else
																											{	/* Module/java.scm 361 */
																												obj_t
																													BgL_arg1754z00_1347;
																												{	/* Module/java.scm 361 */
																													obj_t
																														BgL_arg1756z00_1349;
																													{	/* Module/java.scm 361 */
																														obj_t
																															BgL_zc3z04anonymousza31758ze3z87_2283;
																														BgL_zc3z04anonymousza31758ze3z87_2283
																															=
																															MAKE_FX_PROCEDURE
																															(BGl_z62zc3z04anonymousza31758ze3ze5zzmodule_javaz00,
																															(int) (((long)
																																	0)),
																															(int) (((long)
																																	1)));
																														PROCEDURE_SET
																															(BgL_zc3z04anonymousza31758ze3z87_2283,
																															(int) (((long)
																																	0)),
																															BgL_componentz00_137);
																														BgL_arg1756z00_1349
																															=
																															BGl_withzd2outputzd2tozd2stringzd2zz__r4_ports_6_10_1z00
																															(BgL_zc3z04anonymousza31758ze3z87_2283);
																													}
																													BgL_arg1754z00_1347 =
																														string_append_3
																														(BGl_string2193z00zzmodule_javaz00,
																														BgL_arg1756z00_1349,
																														BGl_string2194z00zzmodule_javaz00);
																												}
																												{	/* Module/java.scm 358 */
																													obj_t
																														BgL_list1755z00_1348;
																													BgL_list1755z00_1348 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1754z00_1347,
																														BNIL);
																													return
																														BGl_javazd2errorzd2zzmodule_javaz00
																														(BgL_jz00_135,
																														BgL_list1755z00_1348);
																												}
																											}
																									}
																							}
																						else
																							{	/* Module/java.scm 313 */
																								goto BgL_tagzd2492zd2_1211;
																							}
																					}
																				else
																					{	/* Module/java.scm 313 */
																						obj_t BgL_carzd2548zd2_1238;
																						obj_t BgL_cdrzd2549zd2_1239;

																						BgL_carzd2548zd2_1238 =
																							CAR(
																							((obj_t) BgL_cdrzd2516zd2_1220));
																						BgL_cdrzd2549zd2_1239 =
																							CDR(
																							((obj_t) BgL_cdrzd2516zd2_1220));
																						if (SYMBOLP(BgL_carzd2548zd2_1238))
																							{	/* Module/java.scm 313 */
																								obj_t BgL_carzd2555zd2_1241;

																								BgL_carzd2555zd2_1241 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2549zd2_1239));
																								if (BGl_argzd2listzf3ze70zc6zzmodule_javaz00(BgL_carzd2555zd2_1241))
																									{	/* Module/java.scm 313 */
																										if (NULLP(CDR(
																													((obj_t)
																														BgL_cdrzd2549zd2_1239))))
																											{
																												obj_t BgL_argsz00_3216;
																												obj_t BgL_idz00_3215;

																												BgL_idz00_3215 =
																													BgL_carzd2548zd2_1238;
																												BgL_argsz00_3216 =
																													BgL_carzd2555zd2_1241;
																												BgL_argsz00_1209 =
																													BgL_argsz00_3216;
																												BgL_idz00_1208 =
																													BgL_idz00_3215;
																												goto
																													BgL_tagzd2491zd2_1210;
																											}
																										else
																											{	/* Module/java.scm 313 */
																												goto
																													BgL_tagzd2492zd2_1211;
																											}
																									}
																								else
																									{	/* Module/java.scm 313 */
																										goto BgL_tagzd2492zd2_1211;
																									}
																							}
																						else
																							{	/* Module/java.scm 313 */
																								goto BgL_tagzd2492zd2_1211;
																							}
																					}
																			}
																		else
																			{	/* Module/java.scm 313 */
																				obj_t BgL_carzd2568zd2_1247;
																				obj_t BgL_cdrzd2569zd2_1248;

																				BgL_carzd2568zd2_1247 =
																					CAR(((obj_t) BgL_cdrzd2516zd2_1220));
																				BgL_cdrzd2569zd2_1248 =
																					CDR(((obj_t) BgL_cdrzd2516zd2_1220));
																				if (SYMBOLP(BgL_carzd2568zd2_1247))
																					{	/* Module/java.scm 313 */
																						obj_t BgL_carzd2574zd2_1250;

																						BgL_carzd2574zd2_1250 =
																							CAR(
																							((obj_t) BgL_cdrzd2569zd2_1248));
																						if (BGl_argzd2listzf3ze70zc6zzmodule_javaz00(BgL_carzd2574zd2_1250))
																							{	/* Module/java.scm 313 */
																								if (NULLP(CDR(
																											((obj_t)
																												BgL_cdrzd2569zd2_1248))))
																									{
																										obj_t BgL_argsz00_3232;
																										obj_t BgL_idz00_3231;

																										BgL_idz00_3231 =
																											BgL_carzd2568zd2_1247;
																										BgL_argsz00_3232 =
																											BgL_carzd2574zd2_1250;
																										BgL_argsz00_1209 =
																											BgL_argsz00_3232;
																										BgL_idz00_1208 =
																											BgL_idz00_3231;
																										goto BgL_tagzd2491zd2_1210;
																									}
																								else
																									{	/* Module/java.scm 313 */
																										goto BgL_tagzd2492zd2_1211;
																									}
																							}
																						else
																							{	/* Module/java.scm 313 */
																								goto BgL_tagzd2492zd2_1211;
																							}
																					}
																				else
																					{	/* Module/java.scm 313 */
																						goto BgL_tagzd2492zd2_1211;
																					}
																			}
																	}
																else
																	{	/* Module/java.scm 313 */
																		goto BgL_tagzd2492zd2_1211;
																	}
															}
														else
															{	/* Module/java.scm 313 */
																obj_t BgL_carzd2587zd2_1256;
																obj_t BgL_cdrzd2588zd2_1257;

																BgL_carzd2587zd2_1256 =
																	CAR(((obj_t) BgL_cdrzd2516zd2_1220));
																BgL_cdrzd2588zd2_1257 =
																	CDR(((obj_t) BgL_cdrzd2516zd2_1220));
																if (SYMBOLP(BgL_carzd2587zd2_1256))
																	{	/* Module/java.scm 313 */
																		if (PAIRP(BgL_cdrzd2588zd2_1257))
																			{	/* Module/java.scm 313 */
																				obj_t BgL_carzd2593zd2_1260;

																				BgL_carzd2593zd2_1260 =
																					CAR(BgL_cdrzd2588zd2_1257);
																				if (BGl_argzd2listzf3ze70zc6zzmodule_javaz00(BgL_carzd2593zd2_1260))
																					{	/* Module/java.scm 313 */
																						if (NULLP(CDR
																								(BgL_cdrzd2588zd2_1257)))
																							{
																								obj_t BgL_argsz00_3248;
																								obj_t BgL_idz00_3247;

																								BgL_idz00_3247 =
																									BgL_carzd2587zd2_1256;
																								BgL_argsz00_3248 =
																									BgL_carzd2593zd2_1260;
																								BgL_argsz00_1209 =
																									BgL_argsz00_3248;
																								BgL_idz00_1208 = BgL_idz00_3247;
																								goto BgL_tagzd2491zd2_1210;
																							}
																						else
																							{	/* Module/java.scm 313 */
																								goto BgL_tagzd2492zd2_1211;
																							}
																					}
																				else
																					{	/* Module/java.scm 313 */
																						goto BgL_tagzd2492zd2_1211;
																					}
																			}
																		else
																			{	/* Module/java.scm 313 */
																				goto BgL_tagzd2492zd2_1211;
																			}
																	}
																else
																	{	/* Module/java.scm 313 */
																		goto BgL_tagzd2492zd2_1211;
																	}
															}
													}
												else
													{	/* Module/java.scm 313 */
														goto BgL_tagzd2492zd2_1211;
													}
											}
										else
											{	/* Module/java.scm 313 */
												goto BgL_tagzd2492zd2_1211;
											}
									}
							}
					}
				else
					{	/* Module/java.scm 313 */
						goto BgL_tagzd2492zd2_1211;
					}
			}
		}

	}



/* every~0 */
	bool_t BGl_everyze70ze7zzmodule_javaz00(obj_t BgL_predzf3zf3_1354,
		obj_t BgL_lstz00_1355)
	{
		{	/* Module/java.scm 303 */
			{
				obj_t BgL_lstz00_1358;

				BgL_lstz00_1358 = BgL_lstz00_1355;
			BgL_zc3z04anonymousza31761ze3z87_1359:
				if (NULLP(BgL_lstz00_1358))
					{	/* Module/java.scm 296 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/java.scm 296 */
						if (PAIRP(BgL_lstz00_1358))
							{	/* Module/java.scm 300 */
								bool_t BgL_test2431z00_3253;

								{	/* Module/java.scm 300 */
									obj_t BgL_arg1775z00_1365;

									BgL_arg1775z00_1365 = CAR(BgL_lstz00_1358);
									BgL_test2431z00_3253 =
										CBOOL(PROCEDURE_L_ENTRY(BgL_predzf3zf3_1354)
										(BgL_predzf3zf3_1354, BgL_arg1775z00_1365));
								}
								if (BgL_test2431z00_3253)
									{
										obj_t BgL_lstz00_3260;

										BgL_lstz00_3260 = CDR(BgL_lstz00_1358);
										BgL_lstz00_1358 = BgL_lstz00_3260;
										goto BgL_zc3z04anonymousza31761ze3z87_1359;
									}
								else
									{	/* Module/java.scm 300 */
										return ((bool_t) 0);
									}
							}
						else
							{	/* Module/java.scm 298 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* modifier-list?~0 */
	bool_t BGl_modifierzd2listzf3ze70zc6zzmodule_javaz00(obj_t BgL_lstz00_1374)
	{
		{	/* Module/java.scm 312 */
			return
				BGl_everyze70ze7zzmodule_javaz00(BGl_proc2200z00zzmodule_javaz00,
				BgL_lstz00_1374);
		}

	}



/* arg-list?~0 */
	bool_t BGl_argzd2listzf3ze70zc6zzmodule_javaz00(obj_t BgL_lstz00_1367)
	{
		{	/* Module/java.scm 305 */
			return
				BGl_everyze70ze7zzmodule_javaz00(BGl_proc2201z00zzmodule_javaz00,
				BgL_lstz00_1367);
		}

	}



/* &<@anonymous:1758> */
	obj_t BGl_z62zc3z04anonymousza31758ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2286)
	{
		{	/* Module/java.scm 360 */
			return
				BGl_writez00zz__r4_output_6_10_3z00(PROCEDURE_REF(BgL_envz00_2286,
					(int) (((long) 0))), BNIL);
		}

	}



/* &<@anonymous:1783> */
	obj_t BGl_z62zc3z04anonymousza31783ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2288, obj_t BgL_sz00_2289)
	{
		{	/* Module/java.scm 307 */
			if (SYMBOLP(BgL_sz00_2289))
				{	/* Module/java.scm 308 */
					return
						BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_sz00_2289,
						CNST_TABLE_REF(((long) 16)));
				}
			else
				{	/* Module/java.scm 308 */
					return BFALSE;
				}
		}

	}



/* &<@anonymous:1779> */
	obj_t BGl_z62zc3z04anonymousza31779ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2290, obj_t BgL_sz00_2291)
	{
		{	/* Module/java.scm 305 */
			{	/* Module/java.scm 305 */
				bool_t BgL_tmpz00_3271;

				if (SYMBOLP(BgL_sz00_2291))
					{	/* Module/java.scm 305 */
						BgL_tmpz00_3271 =
							BGl_typezd2identzf3z21zzast_identz00(BgL_sz00_2291);
					}
				else
					{	/* Module/java.scm 305 */
						BgL_tmpz00_3271 = ((bool_t) 0);
					}
				return BBOOL(BgL_tmpz00_3271);
			}
		}

	}



/* declare-jklass */
	BgL_typez00_bglt BGl_declarezd2jklasszd2zzmodule_javaz00(BgL_jklassz00_bglt
		BgL_jklassz00_138)
	{
		{	/* Module/java.scm 369 */
			{
				BgL_jmethodz00_bglt BgL_jmetz00_1467;
				BgL_jmethodz00_bglt BgL_jmetz00_1425;
				BgL_jmethodz00_bglt BgL_jmetz00_1415;

				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(
					(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->BgL_idz00),
					(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->BgL_jnamez00),
					BNIL);
				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
					(BGl_fastzd2idzd2ofzd2idzd2zzast_identz00((((BgL_jklassz00_bglt)
								COBJECT(BgL_jklassz00_138))->BgL_idz00),
						(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->BgL_locz00)),
					(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->BgL_jnamez00),
					BNIL);
				{	/* Module/java.scm 397 */
					obj_t BgL_g1257z00_1396;

					BgL_g1257z00_1396 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->BgL_methodsz00);
					{
						obj_t BgL_l1255z00_1398;

						BgL_l1255z00_1398 = BgL_g1257z00_1396;
					BgL_zc3z04anonymousza31809ze3z87_1399:
						if (PAIRP(BgL_l1255z00_1398))
							{	/* Module/java.scm 397 */
								{	/* Module/java.scm 397 */
									obj_t BgL_arg1811z00_1401;

									BgL_arg1811z00_1401 = CAR(BgL_l1255z00_1398);
									BgL_jmetz00_1467 =
										((BgL_jmethodz00_bglt) BgL_arg1811z00_1401);
									if (CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 17)),
												(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1467))->
													BgL_modifiersz00))))
										{
											BgL_globalz00_bglt BgL_auxz00_3293;

											BgL_jmetz00_1415 = BgL_jmetz00_1467;
											{	/* Module/java.scm 373 */
												obj_t BgL_arg1832z00_1418;
												obj_t BgL_arg1833z00_1419;
												obj_t BgL_arg1835z00_1420;
												obj_t BgL_arg1836z00_1421;
												obj_t BgL_arg1838z00_1422;
												obj_t BgL_arg1840z00_1423;
												obj_t BgL_arg1841z00_1424;

												BgL_arg1832z00_1418 =
													(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1415))->
													BgL_idz00);
												BgL_arg1833z00_1419 =
													(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->
													BgL_idz00);
												BgL_arg1835z00_1420 =
													(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1415))->
													BgL_jnamez00);
												BgL_arg1836z00_1421 =
													(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1415))->
													BgL_argsz00);
												BgL_arg1838z00_1422 =
													(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1415))->
													BgL_modifiersz00);
												BgL_arg1840z00_1423 =
													(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_138))->
													BgL_jnamez00);
												BgL_arg1841z00_1424 =
													(((BgL_jmethodz00_bglt) COBJECT(BgL_jmetz00_1415))->
													BgL_srcz00);
												{	/* Module/java.scm 415 */
													obj_t BgL_pidz00_2137;

													BgL_pidz00_2137 =
														BGl_parsezd2idzd2zzast_identz00(BgL_arg1832z00_1418,
														BGl_findzd2locationzd2zztools_locationz00
														(BgL_arg1841z00_1424));
													{	/* Module/java.scm 415 */
														obj_t BgL_lnz00_2139;

														BgL_lnz00_2139 = CAR(BgL_pidz00_2137);
														{	/* Module/java.scm 416 */
															obj_t BgL_tidz00_2140;

															BgL_tidz00_2140 =
																(((BgL_typez00_bglt) COBJECT(
																		((BgL_typez00_bglt)
																			CDR(BgL_pidz00_2137))))->BgL_idz00);
															{	/* Module/java.scm 417 */

																{	/* Module/java.scm 418 */
																	BgL_globalz00_bglt BgL_gz00_2142;

																	BgL_gz00_2142 =
																		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																		(BgL_lnz00_2139, BFALSE,
																		BgL_arg1833z00_1419, BgL_arg1835z00_1420,
																		BgL_tidz00_2140, BgL_arg1836z00_1421,
																		((bool_t) 0), ((bool_t) 0),
																		BgL_arg1841z00_1424, BFALSE);
																	{	/* Module/java.scm 419 */
																		BgL_valuez00_bglt BgL_arg1891z00_2143;

																		BgL_arg1891z00_2143 =
																			(((BgL_variablez00_bglt) COBJECT(
																					((BgL_variablez00_bglt)
																						BgL_gz00_2142)))->BgL_valuez00);
																		((((BgL_cfunz00_bglt)
																					COBJECT(((BgL_cfunz00_bglt)
																							BgL_arg1891z00_2143)))->
																				BgL_methodz00) =
																			((obj_t) BgL_arg1838z00_1422), BUNSPEC);
																	}
																	((((BgL_globalz00_bglt)
																				COBJECT(BgL_gz00_2142))->
																			BgL_jvmzd2typezd2namez00) =
																		((obj_t) ((obj_t) BgL_arg1840z00_1423)),
																		BUNSPEC);
																	BgL_auxz00_3293 = BgL_gz00_2142;
											}}}}}}
											((obj_t) BgL_auxz00_3293);
										}
									else
										{	/* Module/java.scm 390 */
											BgL_jmetz00_1425 = BgL_jmetz00_1467;
											{	/* Module/java.scm 379 */
												bool_t BgL_test2436z00_3315;

												{	/* Module/java.scm 379 */
													bool_t BgL_test2437z00_3316;

													{	/* Module/java.scm 379 */
														bool_t BgL_res2161z00_2152;

														BgL_res2161z00_2152 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_jmetz00_1425),
															BGl_jconstructorz00zzmodule_javaz00);
														BgL_test2437z00_3316 = BgL_res2161z00_2152;
													}
													if (BgL_test2437z00_3316)
														{	/* Module/java.scm 379 */
															BgL_test2436z00_3315 = ((bool_t) 0);
														}
													else
														{	/* Module/java.scm 380 */
															bool_t BgL_test2438z00_3319;

															if (NULLP(
																	(((BgL_jmethodz00_bglt)
																			COBJECT(BgL_jmetz00_1425))->BgL_argsz00)))
																{	/* Module/java.scm 380 */
																	BgL_test2438z00_3319 = ((bool_t) 0);
																}
															else
																{	/* Module/java.scm 380 */
																	BgL_test2438z00_3319 =
																		(
																		(((BgL_typez00_bglt)
																				COBJECT
																				(BGl_typezd2ofzd2idz00zzast_identz00(CAR
																						((((BgL_jmethodz00_bglt)
																									COBJECT(BgL_jmetz00_1425))->
																								BgL_argsz00)),
																						(((BgL_jklassz00_bglt)
																								COBJECT(BgL_jklassz00_138))->
																							BgL_locz00))))->BgL_idz00) ==
																		(((BgL_jklassz00_bglt)
																				COBJECT(BgL_jklassz00_138))->
																			BgL_iddz00));
																}
															if (BgL_test2438z00_3319)
																{	/* Module/java.scm 380 */
																	BgL_test2436z00_3315 = ((bool_t) 0);
																}
															else
																{	/* Module/java.scm 380 */
																	BgL_test2436z00_3315 = ((bool_t) 1);
																}
														}
												}
												if (BgL_test2436z00_3315)
													{	/* Module/java.scm 383 */
														obj_t BgL_arg1868z00_1448;

														BgL_arg1868z00_1448 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_srcz00);
														{	/* Module/java.scm 383 */
															obj_t BgL_list1869z00_1449;

															BgL_list1869z00_1449 =
																MAKE_YOUNG_PAIR
																(BGl_string2202z00zzmodule_javaz00, BNIL);
															BGl_javazd2errorzd2zzmodule_javaz00
																(BgL_arg1868z00_1448, BgL_list1869z00_1449);
														}
													}
												else
													{	/* Module/java.scm 384 */
														obj_t BgL_arg1870z00_1450;
														obj_t BgL_arg1871z00_1451;
														obj_t BgL_arg1872z00_1452;
														obj_t BgL_arg1873z00_1453;
														obj_t BgL_arg1874z00_1454;
														obj_t BgL_arg1876z00_1455;
														obj_t BgL_arg1877z00_1456;

														BgL_arg1870z00_1450 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_idz00);
														BgL_arg1871z00_1451 =
															(((BgL_jklassz00_bglt)
																COBJECT(BgL_jklassz00_138))->BgL_idz00);
														BgL_arg1872z00_1452 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_jnamez00);
														BgL_arg1873z00_1453 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_argsz00);
														BgL_arg1874z00_1454 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_modifiersz00);
														BgL_arg1876z00_1455 =
															(((BgL_jklassz00_bglt)
																COBJECT(BgL_jklassz00_138))->BgL_jnamez00);
														BgL_arg1877z00_1456 =
															(((BgL_jmethodz00_bglt)
																COBJECT(BgL_jmetz00_1425))->BgL_srcz00);
														{	/* Module/java.scm 415 */
															obj_t BgL_pidz00_2159;

															BgL_pidz00_2159 =
																BGl_parsezd2idzd2zzast_identz00
																(BgL_arg1870z00_1450,
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_arg1877z00_1456));
															{	/* Module/java.scm 415 */
																obj_t BgL_lnz00_2161;

																BgL_lnz00_2161 = CAR(BgL_pidz00_2159);
																{	/* Module/java.scm 416 */
																	obj_t BgL_tidz00_2162;

																	BgL_tidz00_2162 =
																		(((BgL_typez00_bglt) COBJECT(
																				((BgL_typez00_bglt)
																					CDR(BgL_pidz00_2159))))->BgL_idz00);
																	{	/* Module/java.scm 417 */

																		{	/* Module/java.scm 418 */
																			BgL_globalz00_bglt BgL_gz00_2164;

																			BgL_gz00_2164 =
																				BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																				(BgL_lnz00_2161, BFALSE,
																				BgL_arg1871z00_1451,
																				BgL_arg1872z00_1452, BgL_tidz00_2162,
																				BgL_arg1873z00_1453, ((bool_t) 0),
																				((bool_t) 0), BgL_arg1877z00_1456,
																				BFALSE);
																			{	/* Module/java.scm 419 */
																				BgL_valuez00_bglt BgL_arg1891z00_2165;

																				BgL_arg1891z00_2165 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								BgL_gz00_2164)))->BgL_valuez00);
																				((((BgL_cfunz00_bglt)
																							COBJECT(((BgL_cfunz00_bglt)
																									BgL_arg1891z00_2165)))->
																						BgL_methodz00) =
																					((obj_t) BgL_arg1874z00_1454),
																					BUNSPEC);
																			}
																			((((BgL_globalz00_bglt)
																						COBJECT(BgL_gz00_2164))->
																					BgL_jvmzd2typezd2namez00) =
																				((obj_t) ((obj_t) BgL_arg1876z00_1455)),
																				BUNSPEC);
																			((obj_t) BgL_gz00_2164);
																		}
																	}
																}
															}
														}
													}
											}
										}
								}
								{
									obj_t BgL_l1255z00_3355;

									BgL_l1255z00_3355 = CDR(BgL_l1255z00_1398);
									BgL_l1255z00_1398 = BgL_l1255z00_3355;
									goto BgL_zc3z04anonymousza31809ze3z87_1399;
								}
							}
						else
							{	/* Module/java.scm 397 */
								((bool_t) 1);
							}
					}
				}
				{	/* Module/java.scm 398 */
					BgL_typez00_bglt BgL_jclassz00_1404;

					BgL_jclassz00_1404 =
						BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_138);
					{	/* Module/java.scm 400 */
						bool_t BgL_test2440z00_3358;

						{	/* Module/java.scm 400 */
							obj_t BgL_tmpz00_3359;

							{
								BgL_jclassz00_bglt BgL_auxz00_3360;

								{
									obj_t BgL_auxz00_3361;

									{	/* Module/java.scm 400 */
										BgL_objectz00_bglt BgL_tmpz00_3362;

										BgL_tmpz00_3362 = ((BgL_objectz00_bglt) BgL_jclassz00_1404);
										BgL_auxz00_3361 = BGL_OBJECT_WIDENING(BgL_tmpz00_3362);
									}
									BgL_auxz00_3360 = ((BgL_jclassz00_bglt) BgL_auxz00_3361);
								}
								BgL_tmpz00_3359 =
									(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3360))->
									BgL_itszd2superzd2);
							}
							BgL_test2440z00_3358 = CBOOL(BgL_tmpz00_3359);
						}
						if (BgL_test2440z00_3358)
							{	/* Module/java.scm 401 */
								obj_t BgL_typez00_1407;

								{	/* Module/java.scm 402 */
									bool_t BgL_test2441z00_3368;

									{	/* Module/java.scm 402 */
										obj_t BgL_arg1830z00_1414;

										{
											BgL_jclassz00_bglt BgL_auxz00_3369;

											{
												obj_t BgL_auxz00_3370;

												{	/* Module/java.scm 402 */
													BgL_objectz00_bglt BgL_tmpz00_3371;

													BgL_tmpz00_3371 =
														((BgL_objectz00_bglt) BgL_jclassz00_1404);
													BgL_auxz00_3370 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3371);
												}
												BgL_auxz00_3369 =
													((BgL_jclassz00_bglt) BgL_auxz00_3370);
											}
											BgL_arg1830z00_1414 =
												(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3369))->
												BgL_itszd2superzd2);
										}
										BgL_test2441z00_3368 =
											BGl_isazf3zf3zz__objectz00(BgL_arg1830z00_1414,
											BGl_jclassz00zzobject_classz00);
									}
									if (BgL_test2441z00_3368)
										{
											BgL_jclassz00_bglt BgL_auxz00_3377;

											{
												obj_t BgL_auxz00_3378;

												{	/* Module/java.scm 403 */
													BgL_objectz00_bglt BgL_tmpz00_3379;

													BgL_tmpz00_3379 =
														((BgL_objectz00_bglt) BgL_jclassz00_1404);
													BgL_auxz00_3378 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_3379);
												}
												BgL_auxz00_3377 =
													((BgL_jclassz00_bglt) BgL_auxz00_3378);
											}
											BgL_typez00_1407 =
												(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3377))->
												BgL_itszd2superzd2);
										}
									else
										{	/* Module/java.scm 404 */
											bool_t BgL_test2442z00_3384;

											{	/* Module/java.scm 404 */
												obj_t BgL_arg1829z00_1413;

												{
													BgL_jclassz00_bglt BgL_auxz00_3385;

													{
														obj_t BgL_auxz00_3386;

														{	/* Module/java.scm 404 */
															BgL_objectz00_bglt BgL_tmpz00_3387;

															BgL_tmpz00_3387 =
																((BgL_objectz00_bglt) BgL_jclassz00_1404);
															BgL_auxz00_3386 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3387);
														}
														BgL_auxz00_3385 =
															((BgL_jclassz00_bglt) BgL_auxz00_3386);
													}
													BgL_arg1829z00_1413 =
														(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3385))->
														BgL_itszd2superzd2);
												}
												BgL_test2442z00_3384 =
													BGl_isazf3zf3zz__objectz00(BgL_arg1829z00_1413,
													BGl_typez00zztype_typez00);
											}
											if (BgL_test2442z00_3384)
												{
													BgL_jclassz00_bglt BgL_auxz00_3393;

													{
														obj_t BgL_auxz00_3394;

														{	/* Module/java.scm 405 */
															BgL_objectz00_bglt BgL_tmpz00_3395;

															BgL_tmpz00_3395 =
																((BgL_objectz00_bglt) BgL_jclassz00_1404);
															BgL_auxz00_3394 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_3395);
														}
														BgL_auxz00_3393 =
															((BgL_jclassz00_bglt) BgL_auxz00_3394);
													}
													BgL_typez00_1407 =
														(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3393))->
														BgL_itszd2superzd2);
												}
											else
												{	/* Module/java.scm 407 */
													obj_t BgL_arg1828z00_1412;

													{
														BgL_jclassz00_bglt BgL_auxz00_3400;

														{
															obj_t BgL_auxz00_3401;

															{	/* Module/java.scm 407 */
																BgL_objectz00_bglt BgL_tmpz00_3402;

																BgL_tmpz00_3402 =
																	((BgL_objectz00_bglt) BgL_jclassz00_1404);
																BgL_auxz00_3401 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_3402);
															}
															BgL_auxz00_3400 =
																((BgL_jclassz00_bglt) BgL_auxz00_3401);
														}
														BgL_arg1828z00_1412 =
															(((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3400))->
															BgL_itszd2superzd2);
													}
													BgL_typez00_1407 =
														((obj_t)
														BGl_findzd2typezd2zztype_envz00
														(BgL_arg1828z00_1412));
												}
										}
								}
								{
									BgL_jclassz00_bglt BgL_auxz00_3409;

									{
										obj_t BgL_auxz00_3410;

										{	/* Module/java.scm 408 */
											BgL_objectz00_bglt BgL_tmpz00_3411;

											BgL_tmpz00_3411 =
												((BgL_objectz00_bglt) BgL_jclassz00_1404);
											BgL_auxz00_3410 = BGL_OBJECT_WIDENING(BgL_tmpz00_3411);
										}
										BgL_auxz00_3409 = ((BgL_jclassz00_bglt) BgL_auxz00_3410);
									}
									((((BgL_jclassz00_bglt) COBJECT(BgL_auxz00_3409))->
											BgL_itszd2superzd2) =
										((obj_t) BgL_typez00_1407), BUNSPEC);
								}
							}
						else
							{	/* Module/java.scm 400 */
								BFALSE;
							}
					}
					return BgL_jclassz00_1404;
				}
			}
		}

	}



/* declare-java-class! */
	BgL_typez00_bglt
		BGl_declarezd2javazd2classz12z12zzmodule_javaz00(BgL_jklassz00_bglt
		BgL_jklassz00_146)
	{
		{	/* Module/java.scm 426 */
			{	/* Module/java.scm 431 */
				obj_t BgL_pidz00_1484;

				BgL_pidz00_1484 =
					BGl_parsezd2idzd2zzast_identz00(
					(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->BgL_idz00),
					(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->BgL_locz00));
				{	/* Module/java.scm 431 */
					obj_t BgL_jidz00_1485;

					BgL_jidz00_1485 = CAR(BgL_pidz00_1484);
					{	/* Module/java.scm 432 */
						obj_t BgL_superz00_1486;

						BgL_superz00_1486 = CDR(BgL_pidz00_1484);
						{	/* Module/java.scm 433 */

							{	/* Module/java.scm 434 */
								obj_t BgL_arg1895z00_1487;

								BgL_arg1895z00_1487 =
									(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->
									BgL_jnamez00);
								{	/* Module/java.scm 465 */
									obj_t BgL_arg1911z00_2205;

									BgL_arg1911z00_2205 =
										MAKE_YOUNG_PAIR(
										((obj_t) BgL_jidz00_1485), ((obj_t) BgL_arg1895z00_1487));
									BGl_za2javazd2classesza2zd2zzmodule_javaz00 =
										MAKE_YOUNG_PAIR(BgL_arg1911z00_2205,
										BGl_za2javazd2classesza2zd2zzmodule_javaz00);
								}
							}
							{	/* Module/java.scm 437 */
								BgL_typez00_bglt BgL_jclassz00_1488;

								BgL_jclassz00_1488 =
									BGl_declarezd2javazd2classzd2typez12zc0zzobject_classz00
									(BgL_jidz00_1485, BgL_superz00_1486,
									(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->
										BgL_jnamez00),
									(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->
										BgL_packagez00),
									(((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->
										BgL_srcz00));
								((((BgL_typez00_bglt) COBJECT(BgL_jclassz00_1488))->
										BgL_importzd2locationzd2) =
									((obj_t) (((BgL_jklassz00_bglt) COBJECT(BgL_jklassz00_146))->
											BgL_locz00)), BUNSPEC);
								{	/* Module/java.scm 446 */
									obj_t BgL_arg1897z00_1490;

									{	/* Module/java.scm 446 */
										obj_t BgL_zc3z04anonymousza31899ze3z87_2292;

										BgL_zc3z04anonymousza31899ze3z87_2292 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31899ze3ze5zzmodule_javaz00,
											(int) (((long) 0)), (int) (((long) 2)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31899ze3z87_2292,
											(int) (((long) 0)), ((obj_t) BgL_jklassz00_146));
										PROCEDURE_SET(BgL_zc3z04anonymousza31899ze3z87_2292,
											(int) (((long) 1)), ((obj_t) BgL_jclassz00_1488));
										BgL_arg1897z00_1490 =
											BGl_makezd2promisezd2zz__r4_control_features_6_9z00
											(BgL_zc3z04anonymousza31899ze3z87_2292);
									}
									BGl_delayzd2classzd2accessorsz12z12zzmodule_classz00
										(BgL_jclassz00_1488, BgL_arg1897z00_1490);
								}
								return ((BgL_typez00_bglt) BgL_jclassz00_1488);
							}
						}
					}
				}
			}
		}

	}



/* &<@anonymous:1899> */
	obj_t BGl_z62zc3z04anonymousza31899ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2293)
	{
		{	/* Module/java.scm 446 */
			{	/* Module/java.scm 446 */
				BgL_jklassz00_bglt BgL_i1128z00_2294;
				BgL_typez00_bglt BgL_jclassz00_2295;

				BgL_i1128z00_2294 =
					((BgL_jklassz00_bglt)
					PROCEDURE_REF(BgL_envz00_2293, (int) (((long) 0))));
				BgL_jclassz00_2295 =
					((BgL_typez00_bglt)
					PROCEDURE_REF(BgL_envz00_2293, (int) (((long) 1))));
				{	/* Module/java.scm 446 */
					obj_t BgL_arg1901z00_2528;
					obj_t BgL_arg1902z00_2529;
					bool_t BgL_arg1903z00_2530;
					obj_t BgL_arg1904z00_2531;
					obj_t BgL_arg1905z00_2532;

					BgL_arg1901z00_2528 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_i1128z00_2294))->BgL_fieldsz00);
					BgL_arg1902z00_2529 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_i1128z00_2294))->
						BgL_constructorsz00);
					BgL_arg1903z00_2530 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_i1128z00_2294))->
						BgL_abstractzf3zf3);
					BgL_arg1904z00_2531 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_i1128z00_2294))->BgL_modulez00);
					BgL_arg1905z00_2532 =
						(((BgL_jklassz00_bglt) COBJECT(BgL_i1128z00_2294))->BgL_srcz00);
					return
						BGl_importzd2javazd2classzd2accessorsz12zc0zzobject_javazd2accesszd2
						(BgL_arg1901z00_2528, BgL_arg1902z00_2529,
						((BgL_typez00_bglt) BgL_jclassz00_2295), BgL_arg1903z00_2530,
						BgL_arg1904z00_2531, BgL_arg1905z00_2532);
				}
			}
		}

	}



/* heap-add-jclass! */
	BGL_EXPORTED_DEF obj_t BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(obj_t
		BgL_newz00_149)
	{
		{	/* Module/java.scm 470 */
			{	/* Module/java.scm 472 */
				obj_t BgL_arg1912z00_2208;
				obj_t BgL_arg1913z00_2209;

				BgL_arg1912z00_2208 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_newz00_149))))->BgL_idz00);
				BgL_arg1913z00_2209 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt)
								((BgL_typez00_bglt) BgL_newz00_149))))->BgL_namez00);
				{	/* Module/java.scm 465 */
					obj_t BgL_arg1911z00_2214;

					BgL_arg1911z00_2214 =
						MAKE_YOUNG_PAIR(BgL_arg1912z00_2208, ((obj_t) BgL_arg1913z00_2209));
					return (BGl_za2javazd2classesza2zd2zzmodule_javaz00 =
						MAKE_YOUNG_PAIR(BgL_arg1911z00_2214,
							BGl_za2javazd2classesza2zd2zzmodule_javaz00), BUNSPEC);
				}
			}
		}

	}



/* &heap-add-jclass! */
	obj_t BGl_z62heapzd2addzd2jclassz12z70zzmodule_javaz00(obj_t BgL_envz00_2296,
		obj_t BgL_newz00_2297)
	{
		{	/* Module/java.scm 470 */
			return BGl_heapzd2addzd2jclassz12z12zzmodule_javaz00(BgL_newz00_2297);
		}

	}



/* find-java-class */
	BGL_EXPORTED_DEF obj_t BGl_findzd2javazd2classz00zzmodule_javaz00(obj_t
		BgL_classz00_150)
	{
		{	/* Module/java.scm 477 */
			{	/* Module/java.scm 478 */
				obj_t BgL_cellz00_1507;

				BgL_cellz00_1507 =
					BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_classz00_150,
					BGl_za2javazd2classesza2zd2zzmodule_javaz00);
				if (PAIRP(BgL_cellz00_1507))
					{	/* Module/java.scm 479 */
						return CDR(BgL_cellz00_1507);
					}
				else
					{	/* Module/java.scm 479 */
						return BFALSE;
					}
			}
		}

	}



/* &find-java-class */
	obj_t BGl_z62findzd2javazd2classz62zzmodule_javaz00(obj_t BgL_envz00_2298,
		obj_t BgL_classz00_2299)
	{
		{	/* Module/java.scm 477 */
			return BGl_findzd2javazd2classz00zzmodule_javaz00(BgL_classz00_2299);
		}

	}



/* java-declare-array */
	obj_t BGl_javazd2declarezd2arrayz00zzmodule_javaz00(obj_t BgL_jz00_151,
		obj_t BgL_idz00_152, obj_t BgL_ofz00_153)
	{
		{	/* Module/java.scm 486 */
			if (BGl_typezd2identzf3z21zzast_identz00(BgL_ofz00_153))
				{	/* Module/java.scm 491 */
					obj_t BgL_sofz00_1510;

					{	/* Module/java.scm 491 */
						obj_t BgL_res2167z00_2219;

						{	/* Module/java.scm 491 */
							obj_t BgL_arg1466z00_2218;

							BgL_arg1466z00_2218 = SYMBOL_TO_STRING(BgL_ofz00_153);
							BgL_res2167z00_2219 =
								BGl_stringzd2copyzd2zz__r4_strings_6_7z00(BgL_arg1466z00_2218);
						}
						BgL_sofz00_1510 = BgL_res2167z00_2219;
					}
					{	/* Module/java.scm 491 */
						obj_t BgL_tofz00_1511;

						BgL_tofz00_1511 =
							bstring_to_symbol(c_substring(BgL_sofz00_1510, ((long) 2),
								STRING_LENGTH(BgL_sofz00_1510)));
						{	/* Module/java.scm 492 */
							BgL_typez00_bglt BgL_jtypez00_1512;

							BgL_jtypez00_1512 =
								BGl_declarezd2jvmzd2typez12z12zzforeign_jtypez00(BgL_idz00_152,
								BgL_tofz00_1511, BgL_jz00_151);
							{	/* Module/java.scm 493 */

								return
									BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
									(BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00
									(BgL_jtypez00_1512, BgL_jtypez00_1512,
										BGl_findzd2locationzd2zztools_locationz00(BgL_jz00_151)));
							}
						}
					}
				}
			else
				{	/* Module/java.scm 490 */
					obj_t BgL_list1920z00_1517;

					BgL_list1920z00_1517 =
						MAKE_YOUNG_PAIR(BGl_string2203z00zzmodule_javaz00, BNIL);
					return
						BGl_javazd2errorzd2zzmodule_javaz00(BgL_jz00_151,
						BgL_list1920z00_1517);
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			{	/* Module/java.scm 48 */
				obj_t BgL_arg1925z00_1521;
				obj_t BgL_arg1926z00_1522;

				{	/* Module/java.scm 48 */
					obj_t BgL_v1258z00_1544;

					BgL_v1258z00_1544 = create_vector(((long) 11));
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1933z00_1545;

						BgL_arg1933z00_1545 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc2205z00zzmodule_javaz00,
							BGl_proc2204z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 0), BgL_arg1933z00_1545);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1938z00_1555;

						BgL_arg1938z00_1555 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									20)), BGl_proc2207z00zzmodule_javaz00,
							BGl_proc2206z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 1), BgL_arg1938z00_1555);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1943z00_1565;

						BgL_arg1943z00_1565 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2209z00zzmodule_javaz00,
							BGl_proc2208z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 23)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 2), BgL_arg1943z00_1565);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1948z00_1575;

						BgL_arg1948z00_1575 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									24)), BGl_proc2211z00zzmodule_javaz00,
							BGl_proc2210z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 23)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 3), BgL_arg1948z00_1575);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1954z00_1585;

						BgL_arg1954z00_1585 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2214z00zzmodule_javaz00,
							BGl_proc2213z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2212z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 4), BgL_arg1954z00_1585);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1961z00_1598;

						BgL_arg1961z00_1598 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									26)), BGl_proc2217z00zzmodule_javaz00,
							BGl_proc2216z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2215z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 5), BgL_arg1961z00_1598);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1968z00_1611;

						BgL_arg1968z00_1611 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									27)), BGl_proc2220z00zzmodule_javaz00,
							BGl_proc2219z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2218z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 28)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 6), BgL_arg1968z00_1611);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1975z00_1624;

						BgL_arg1975z00_1624 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									29)), BGl_proc2223z00zzmodule_javaz00,
							BGl_proc2222z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2221z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 28)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 7), BgL_arg1975z00_1624);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1983z00_1637;

						BgL_arg1983z00_1637 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									30)), BGl_proc2226z00zzmodule_javaz00,
							BGl_proc2225z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2224z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 28)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 8), BgL_arg1983z00_1637);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1990z00_1650;

						BgL_arg1990z00_1650 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									31)), BGl_proc2229z00zzmodule_javaz00,
							BGl_proc2228z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2227z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 32)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 9), BgL_arg1990z00_1650);
					}
					{	/* Module/java.scm 48 */
						obj_t BgL_arg1997z00_1663;

						BgL_arg1997z00_1663 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									33)), BGl_proc2232z00zzmodule_javaz00,
							BGl_proc2231z00zzmodule_javaz00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BGl_proc2230z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 21)));
						VECTOR_SET(BgL_v1258z00_1544, ((long) 10), BgL_arg1997z00_1663);
					}
					BgL_arg1925z00_1521 = BgL_v1258z00_1544;
				}
				{	/* Module/java.scm 48 */
					obj_t BgL_v1259z00_1676;

					BgL_v1259z00_1676 = create_vector(((long) 0));
					BgL_arg1926z00_1522 = BgL_v1259z00_1676;
				}
				BGl_jklassz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 5)),
					CNST_TABLE_REF(((long) 34)), BGl_objectz00zz__objectz00,
					((long) 2003), BGl_proc2235z00zzmodule_javaz00,
					BGl_proc2234z00zzmodule_javaz00,
					BGl_bindzd2jklassz12zd2envz12zzmodule_javaz00,
					BGl_proc2233z00zzmodule_javaz00, BFALSE, BgL_arg1925z00_1521,
					BgL_arg1926z00_1522);
			}
			{	/* Module/java.scm 61 */
				obj_t BgL_arg2008z00_1683;
				obj_t BgL_arg2010z00_1684;

				{	/* Module/java.scm 61 */
					obj_t BgL_v1260z00_1699;

					BgL_v1260z00_1699 = create_vector(((long) 5));
					{	/* Module/java.scm 61 */
						obj_t BgL_arg2016z00_1700;

						BgL_arg2016z00_1700 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									18)), BGl_proc2237z00zzmodule_javaz00,
							BGl_proc2236z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 19)));
						VECTOR_SET(BgL_v1260z00_1699, ((long) 0), BgL_arg2016z00_1700);
					}
					{	/* Module/java.scm 61 */
						obj_t BgL_arg2021z00_1710;

						BgL_arg2021z00_1710 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									22)), BGl_proc2239z00zzmodule_javaz00,
							BGl_proc2238z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 23)));
						VECTOR_SET(BgL_v1260z00_1699, ((long) 1), BgL_arg2021z00_1710);
					}
					{	/* Module/java.scm 61 */
						obj_t BgL_arg2026z00_1720;

						BgL_arg2026z00_1720 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									35)), BGl_proc2241z00zzmodule_javaz00,
							BGl_proc2240z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 28)));
						VECTOR_SET(BgL_v1260z00_1699, ((long) 2), BgL_arg2026z00_1720);
					}
					{	/* Module/java.scm 61 */
						obj_t BgL_arg2033z00_1730;

						BgL_arg2033z00_1730 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									25)), BGl_proc2243z00zzmodule_javaz00,
							BGl_proc2242z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 36)));
						VECTOR_SET(BgL_v1260z00_1699, ((long) 3), BgL_arg2033z00_1730);
					}
					{	/* Module/java.scm 61 */
						obj_t BgL_arg2038z00_1740;

						BgL_arg2038z00_1740 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									37)), BGl_proc2246z00zzmodule_javaz00,
							BGl_proc2245z00zzmodule_javaz00, ((bool_t) 1), ((bool_t) 0),
							BFALSE, BGl_proc2244z00zzmodule_javaz00,
							CNST_TABLE_REF(((long) 28)));
						VECTOR_SET(BgL_v1260z00_1699, ((long) 4), BgL_arg2038z00_1740);
					}
					BgL_arg2008z00_1683 = BgL_v1260z00_1699;
				}
				{	/* Module/java.scm 61 */
					obj_t BgL_v1261z00_1753;

					BgL_v1261z00_1753 = create_vector(((long) 0));
					BgL_arg2010z00_1684 = BgL_v1261z00_1753;
				}
				BGl_jmethodz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 38)),
					CNST_TABLE_REF(((long) 34)), BGl_objectz00zz__objectz00,
					((long) 58759), BGl_proc2249z00zzmodule_javaz00,
					BGl_proc2248z00zzmodule_javaz00, BFALSE,
					BGl_proc2247z00zzmodule_javaz00, BFALSE, BgL_arg2008z00_1683,
					BgL_arg2010z00_1684);
			}
			{	/* Module/java.scm 67 */
				obj_t BgL_arg2048z00_1760;
				obj_t BgL_arg2049z00_1761;

				{	/* Module/java.scm 67 */
					obj_t BgL_v1262z00_1776;

					BgL_v1262z00_1776 = create_vector(((long) 0));
					BgL_arg2048z00_1760 = BgL_v1262z00_1776;
				}
				{	/* Module/java.scm 67 */
					obj_t BgL_v1263z00_1777;

					BgL_v1263z00_1777 = create_vector(((long) 0));
					BgL_arg2049z00_1761 = BgL_v1263z00_1777;
				}
				return (BGl_jconstructorz00zzmodule_javaz00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 39)),
						CNST_TABLE_REF(((long) 34)), BGl_jmethodz00zzmodule_javaz00,
						((long) 36994), BGl_proc2252z00zzmodule_javaz00,
						BGl_proc2251z00zzmodule_javaz00, BFALSE,
						BGl_proc2250z00zzmodule_javaz00, BFALSE, BgL_arg2048z00_1760,
						BgL_arg2049z00_1761), BUNSPEC);
		}}

	}



/* &<@anonymous:2054> */
	obj_t BGl_z62zc3z04anonymousza32054ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2349, obj_t BgL_new1094z00_2350)
	{
		{	/* Module/java.scm 67 */
			{
				BgL_jconstructorz00_bglt BgL_auxz00_3564;

				((((BgL_jmethodz00_bglt) COBJECT(
								((BgL_jmethodz00_bglt)
									((BgL_jconstructorz00_bglt) BgL_new1094z00_2350))))->
						BgL_srcz00) = ((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				((((BgL_jmethodz00_bglt)
							COBJECT(((BgL_jmethodz00_bglt) ((BgL_jconstructorz00_bglt)
										BgL_new1094z00_2350))))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 40))), BUNSPEC);
				((((BgL_jmethodz00_bglt)
							COBJECT(((BgL_jmethodz00_bglt) ((BgL_jconstructorz00_bglt)
										BgL_new1094z00_2350))))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_jmethodz00_bglt)
							COBJECT(((BgL_jmethodz00_bglt) ((BgL_jconstructorz00_bglt)
										BgL_new1094z00_2350))))->BgL_jnamez00) =
					((obj_t) BGl_string2184z00zzmodule_javaz00), BUNSPEC);
				((((BgL_jmethodz00_bglt)
							COBJECT(((BgL_jmethodz00_bglt) ((BgL_jconstructorz00_bglt)
										BgL_new1094z00_2350))))->BgL_modifiersz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_3564 = ((BgL_jconstructorz00_bglt) BgL_new1094z00_2350);
				return ((obj_t) BgL_auxz00_3564);
			}
		}

	}



/* &lambda2052 */
	BgL_jconstructorz00_bglt BGl_z62lambda2052z62zzmodule_javaz00(obj_t
		BgL_envz00_2351)
	{
		{	/* Module/java.scm 67 */
			{	/* Module/java.scm 67 */
				BgL_jconstructorz00_bglt BgL_new1093z00_2534;

				BgL_new1093z00_2534 =
					((BgL_jconstructorz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jconstructorz00_bgl))));
				{	/* Module/java.scm 67 */
					long BgL_arg2053z00_2535;

					{	/* Module/java.scm 67 */
						long BgL_res2176z00_2536;

						BgL_res2176z00_2536 =
							BGL_CLASS_INDEX(BGl_jconstructorz00zzmodule_javaz00);
						BgL_arg2053z00_2535 = BgL_res2176z00_2536;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1093z00_2534), BgL_arg2053z00_2535);
				}
				return BgL_new1093z00_2534;
			}
		}

	}



/* &lambda2050 */
	BgL_jconstructorz00_bglt BGl_z62lambda2050z62zzmodule_javaz00(obj_t
		BgL_envz00_2352, obj_t BgL_src1088z00_2353, obj_t BgL_id1089z00_2354,
		obj_t BgL_args1090z00_2355, obj_t BgL_jname1091z00_2356,
		obj_t BgL_modifiers1092z00_2357)
	{
		{	/* Module/java.scm 67 */
			{	/* Module/java.scm 67 */
				BgL_jconstructorz00_bglt BgL_new1136z00_2542;

				{	/* Module/java.scm 67 */
					BgL_jconstructorz00_bglt BgL_new1135z00_2543;

					BgL_new1135z00_2543 =
						((BgL_jconstructorz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jconstructorz00_bgl))));
					{	/* Module/java.scm 67 */
						long BgL_arg2051z00_2544;

						{	/* Module/java.scm 67 */
							long BgL_res2175z00_2545;

							BgL_res2175z00_2545 =
								BGL_CLASS_INDEX(BGl_jconstructorz00zzmodule_javaz00);
							BgL_arg2051z00_2544 = BgL_res2175z00_2545;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1135z00_2543), BgL_arg2051z00_2544);
					}
					BgL_new1136z00_2542 = BgL_new1135z00_2543;
				}
				((((BgL_jmethodz00_bglt) COBJECT(
								((BgL_jmethodz00_bglt) BgL_new1136z00_2542)))->BgL_srcz00) =
					((obj_t) ((obj_t) BgL_src1088z00_2353)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1136z00_2542)))->BgL_idz00) =
					((obj_t) ((obj_t) BgL_id1089z00_2354)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1136z00_2542)))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1090z00_2355)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1136z00_2542)))->BgL_jnamez00) =
					((obj_t) ((obj_t) BgL_jname1091z00_2356)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1136z00_2542)))->BgL_modifiersz00) =
					((obj_t) ((obj_t) BgL_modifiers1092z00_2357)), BUNSPEC);
				return BgL_new1136z00_2542;
			}
		}

	}



/* &<@anonymous:2015> */
	obj_t BGl_z62zc3z04anonymousza32015ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2358, obj_t BgL_new1086z00_2359)
	{
		{	/* Module/java.scm 61 */
			{
				BgL_jmethodz00_bglt BgL_auxz00_3607;

				((((BgL_jmethodz00_bglt) COBJECT(
								((BgL_jmethodz00_bglt) BgL_new1086z00_2359)))->BgL_srcz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1086z00_2359)))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 40))), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1086z00_2359)))->BgL_argsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1086z00_2359)))->BgL_jnamez00) =
					((obj_t) BGl_string2184z00zzmodule_javaz00), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(((BgL_jmethodz00_bglt)
									BgL_new1086z00_2359)))->BgL_modifiersz00) =
					((obj_t) BNIL), BUNSPEC);
				BgL_auxz00_3607 = ((BgL_jmethodz00_bglt) BgL_new1086z00_2359);
				return ((obj_t) BgL_auxz00_3607);
			}
		}

	}



/* &lambda2013 */
	BgL_jmethodz00_bglt BGl_z62lambda2013z62zzmodule_javaz00(obj_t
		BgL_envz00_2360)
	{
		{	/* Module/java.scm 61 */
			{	/* Module/java.scm 61 */
				BgL_jmethodz00_bglt BgL_new1085z00_2547;

				BgL_new1085z00_2547 =
					((BgL_jmethodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jmethodz00_bgl))));
				{	/* Module/java.scm 61 */
					long BgL_arg2014z00_2548;

					{	/* Module/java.scm 61 */
						long BgL_res2174z00_2549;

						BgL_res2174z00_2549 =
							BGL_CLASS_INDEX(BGl_jmethodz00zzmodule_javaz00);
						BgL_arg2014z00_2548 = BgL_res2174z00_2549;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1085z00_2547), BgL_arg2014z00_2548);
				}
				return BgL_new1085z00_2547;
			}
		}

	}



/* &lambda2011 */
	BgL_jmethodz00_bglt BGl_z62lambda2011z62zzmodule_javaz00(obj_t
		BgL_envz00_2361, obj_t BgL_src1080z00_2362, obj_t BgL_id1081z00_2363,
		obj_t BgL_args1082z00_2364, obj_t BgL_jname1083z00_2365,
		obj_t BgL_modifiers1084z00_2366)
	{
		{	/* Module/java.scm 61 */
			{	/* Module/java.scm 61 */
				BgL_jmethodz00_bglt BgL_new1134z00_2555;

				{	/* Module/java.scm 61 */
					BgL_jmethodz00_bglt BgL_new1133z00_2556;

					BgL_new1133z00_2556 =
						((BgL_jmethodz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_jmethodz00_bgl))));
					{	/* Module/java.scm 61 */
						long BgL_arg2012z00_2557;

						{	/* Module/java.scm 61 */
							long BgL_res2173z00_2558;

							BgL_res2173z00_2558 =
								BGL_CLASS_INDEX(BGl_jmethodz00zzmodule_javaz00);
							BgL_arg2012z00_2557 = BgL_res2173z00_2558;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1133z00_2556), BgL_arg2012z00_2557);
					}
					BgL_new1134z00_2555 = BgL_new1133z00_2556;
				}
				((((BgL_jmethodz00_bglt) COBJECT(BgL_new1134z00_2555))->BgL_srcz00) =
					((obj_t) ((obj_t) BgL_src1080z00_2362)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(BgL_new1134z00_2555))->BgL_idz00) =
					((obj_t) ((obj_t) BgL_id1081z00_2363)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(BgL_new1134z00_2555))->BgL_argsz00) =
					((obj_t) ((obj_t) BgL_args1082z00_2364)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(BgL_new1134z00_2555))->BgL_jnamez00) =
					((obj_t) ((obj_t) BgL_jname1083z00_2365)), BUNSPEC);
				((((BgL_jmethodz00_bglt) COBJECT(BgL_new1134z00_2555))->
						BgL_modifiersz00) =
					((obj_t) ((obj_t) BgL_modifiers1084z00_2366)), BUNSPEC);
				return BgL_new1134z00_2555;
			}
		}

	}



/* &<@anonymous:2044> */
	obj_t BGl_z62zc3z04anonymousza32044ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2367)
	{
		{	/* Module/java.scm 61 */
			return BNIL;
		}

	}



/* &lambda2043 */
	obj_t BGl_z62lambda2043z62zzmodule_javaz00(obj_t BgL_envz00_2368,
		obj_t BgL_oz00_2369, obj_t BgL_vz00_2370)
	{
		{	/* Module/java.scm 61 */
			return
				((((BgL_jmethodz00_bglt) COBJECT(
							((BgL_jmethodz00_bglt) BgL_oz00_2369)))->BgL_modifiersz00) =
				((obj_t) ((obj_t) BgL_vz00_2370)), BUNSPEC);
		}

	}



/* &lambda2042 */
	obj_t BGl_z62lambda2042z62zzmodule_javaz00(obj_t BgL_envz00_2371,
		obj_t BgL_oz00_2372)
	{
		{	/* Module/java.scm 61 */
			return
				(((BgL_jmethodz00_bglt) COBJECT(
						((BgL_jmethodz00_bglt) BgL_oz00_2372)))->BgL_modifiersz00);
		}

	}



/* &lambda2037 */
	obj_t BGl_z62lambda2037z62zzmodule_javaz00(obj_t BgL_envz00_2373,
		obj_t BgL_oz00_2374, obj_t BgL_vz00_2375)
	{
		{	/* Module/java.scm 61 */
			return
				((((BgL_jmethodz00_bglt) COBJECT(
							((BgL_jmethodz00_bglt) BgL_oz00_2374)))->BgL_jnamez00) = ((obj_t)
					((obj_t) BgL_vz00_2375)), BUNSPEC);
		}

	}



/* &lambda2036 */
	obj_t BGl_z62lambda2036z62zzmodule_javaz00(obj_t BgL_envz00_2376,
		obj_t BgL_oz00_2377)
	{
		{	/* Module/java.scm 61 */
			return
				(((BgL_jmethodz00_bglt) COBJECT(
						((BgL_jmethodz00_bglt) BgL_oz00_2377)))->BgL_jnamez00);
		}

	}



/* &lambda2031 */
	obj_t BGl_z62lambda2031z62zzmodule_javaz00(obj_t BgL_envz00_2378,
		obj_t BgL_oz00_2379, obj_t BgL_vz00_2380)
	{
		{	/* Module/java.scm 61 */
			return
				((((BgL_jmethodz00_bglt) COBJECT(
							((BgL_jmethodz00_bglt) BgL_oz00_2379)))->BgL_argsz00) = ((obj_t)
					((obj_t) BgL_vz00_2380)), BUNSPEC);
		}

	}



/* &lambda2030 */
	obj_t BGl_z62lambda2030z62zzmodule_javaz00(obj_t BgL_envz00_2381,
		obj_t BgL_oz00_2382)
	{
		{	/* Module/java.scm 61 */
			return
				(((BgL_jmethodz00_bglt) COBJECT(
						((BgL_jmethodz00_bglt) BgL_oz00_2382)))->BgL_argsz00);
		}

	}



/* &lambda2025 */
	obj_t BGl_z62lambda2025z62zzmodule_javaz00(obj_t BgL_envz00_2383,
		obj_t BgL_oz00_2384, obj_t BgL_vz00_2385)
	{
		{	/* Module/java.scm 61 */
			return
				((((BgL_jmethodz00_bglt) COBJECT(
							((BgL_jmethodz00_bglt) BgL_oz00_2384)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_2385)), BUNSPEC);
		}

	}



/* &lambda2024 */
	obj_t BGl_z62lambda2024z62zzmodule_javaz00(obj_t BgL_envz00_2386,
		obj_t BgL_oz00_2387)
	{
		{	/* Module/java.scm 61 */
			return
				(((BgL_jmethodz00_bglt) COBJECT(
						((BgL_jmethodz00_bglt) BgL_oz00_2387)))->BgL_idz00);
		}

	}



/* &lambda2020 */
	obj_t BGl_z62lambda2020z62zzmodule_javaz00(obj_t BgL_envz00_2388,
		obj_t BgL_oz00_2389, obj_t BgL_vz00_2390)
	{
		{	/* Module/java.scm 61 */
			return
				((((BgL_jmethodz00_bglt) COBJECT(
							((BgL_jmethodz00_bglt) BgL_oz00_2389)))->BgL_srcz00) = ((obj_t)
					((obj_t) BgL_vz00_2390)), BUNSPEC);
		}

	}



/* &lambda2019 */
	obj_t BGl_z62lambda2019z62zzmodule_javaz00(obj_t BgL_envz00_2391,
		obj_t BgL_oz00_2392)
	{
		{	/* Module/java.scm 61 */
			return
				(((BgL_jmethodz00_bglt) COBJECT(
						((BgL_jmethodz00_bglt) BgL_oz00_2392)))->BgL_srcz00);
		}

	}



/* &<@anonymous:1932> */
	obj_t BGl_z62zc3z04anonymousza31932ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2393, obj_t BgL_new1078z00_2394)
	{
		{	/* Module/java.scm 48 */
			{
				BgL_jklassz00_bglt BgL_auxz00_3665;

				((((BgL_jklassz00_bglt) COBJECT(
								((BgL_jklassz00_bglt) BgL_new1078z00_2394)))->BgL_srcz00) =
					((obj_t) MAKE_YOUNG_PAIR(BFALSE, BFALSE)), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_locz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 40))), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_iddz00) =
					((obj_t) CNST_TABLE_REF(((long) 40))), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_jnamez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_packagez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_fieldsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_methodsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_constructorsz00) =
					((obj_t) BNIL), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_abstractzf3zf3) =
					((bool_t) ((bool_t) 0)), BUNSPEC);
				((((BgL_jklassz00_bglt) COBJECT(((BgL_jklassz00_bglt)
									BgL_new1078z00_2394)))->BgL_modulez00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_3665 = ((BgL_jklassz00_bglt) BgL_new1078z00_2394);
				return ((obj_t) BgL_auxz00_3665);
			}
		}

	}



/* &lambda1930 */
	BgL_jklassz00_bglt BGl_z62lambda1930z62zzmodule_javaz00(obj_t BgL_envz00_2395)
	{
		{	/* Module/java.scm 48 */
			{	/* Module/java.scm 48 */
				BgL_jklassz00_bglt BgL_new1077z00_2575;

				BgL_new1077z00_2575 =
					((BgL_jklassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL_jklassz00_bgl))));
				{	/* Module/java.scm 48 */
					long BgL_arg1931z00_2576;

					{	/* Module/java.scm 48 */
						long BgL_res2172z00_2577;

						BgL_res2172z00_2577 =
							BGL_CLASS_INDEX(BGl_jklassz00zzmodule_javaz00);
						BgL_arg1931z00_2576 = BgL_res2172z00_2577;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1077z00_2575), BgL_arg1931z00_2576);
				}
				return BgL_new1077z00_2575;
			}
		}

	}



/* &lambda1927 */
	BgL_jklassz00_bglt BGl_z62lambda1927z62zzmodule_javaz00(obj_t BgL_envz00_2396,
		obj_t BgL_src1066z00_2397, obj_t BgL_loc1067z00_2398,
		obj_t BgL_id1068z00_2399, obj_t BgL_idd1069z00_2400,
		obj_t BgL_jname1070z00_2401, obj_t BgL_package1071z00_2402,
		obj_t BgL_fields1072z00_2403, obj_t BgL_methods1073z00_2404,
		obj_t BgL_constructors1074z00_2405, obj_t BgL_abstractzf31075zf3_2406,
		obj_t BgL_module1076z00_2407)
	{
		{	/* Module/java.scm 48 */
			{	/* Module/java.scm 48 */
				bool_t BgL_abstractzf31075zf3_2584;

				BgL_abstractzf31075zf3_2584 = CBOOL(BgL_abstractzf31075zf3_2406);
				{	/* Module/java.scm 48 */
					BgL_jklassz00_bglt BgL_new1131z00_2585;

					{	/* Module/java.scm 48 */
						BgL_jklassz00_bglt BgL_new1130z00_2586;

						BgL_new1130z00_2586 =
							((BgL_jklassz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
										BgL_jklassz00_bgl))));
						{	/* Module/java.scm 48 */
							long BgL_arg1929z00_2587;

							{	/* Module/java.scm 48 */
								long BgL_res2171z00_2588;

								BgL_res2171z00_2588 =
									BGL_CLASS_INDEX(BGl_jklassz00zzmodule_javaz00);
								BgL_arg1929z00_2587 = BgL_res2171z00_2588;
							}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_new1130z00_2586),
								BgL_arg1929z00_2587);
						}
						BgL_new1131z00_2585 = BgL_new1130z00_2586;
					}
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->BgL_srcz00) =
						((obj_t) ((obj_t) BgL_src1066z00_2397)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->BgL_locz00) =
						((obj_t) BgL_loc1067z00_2398), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->BgL_idz00) =
						((obj_t) ((obj_t) BgL_id1068z00_2399)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->BgL_iddz00) =
						((obj_t) ((obj_t) BgL_idd1069z00_2400)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->BgL_jnamez00) =
						((obj_t) BgL_jname1070z00_2401), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_packagez00) = ((obj_t) BgL_package1071z00_2402), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_fieldsz00) =
						((obj_t) ((obj_t) BgL_fields1072z00_2403)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_methodsz00) =
						((obj_t) ((obj_t) BgL_methods1073z00_2404)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_constructorsz00) =
						((obj_t) ((obj_t) BgL_constructors1074z00_2405)), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_abstractzf3zf3) =
						((bool_t) BgL_abstractzf31075zf3_2584), BUNSPEC);
					((((BgL_jklassz00_bglt) COBJECT(BgL_new1131z00_2585))->
							BgL_modulez00) = ((obj_t) BgL_module1076z00_2407), BUNSPEC);
					{	/* Module/java.scm 48 */
						obj_t BgL_fun1928z00_2589;

						BgL_fun1928z00_2589 =
							BGl_classzd2constructorzd2zz__objectz00
							(BGl_jklassz00zzmodule_javaz00);
						PROCEDURE_ENTRY(BgL_fun1928z00_2589) (BgL_fun1928z00_2589,
							((obj_t) BgL_new1131z00_2585), BEOA);
					}
					return BgL_new1131z00_2585;
				}
			}
		}

	}



/* &<@anonymous:2003> */
	obj_t BGl_z62zc3z04anonymousza32003ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2408)
	{
		{	/* Module/java.scm 48 */
			return BUNSPEC;
		}

	}



/* &lambda2002 */
	obj_t BGl_z62lambda2002z62zzmodule_javaz00(obj_t BgL_envz00_2409,
		obj_t BgL_oz00_2410, obj_t BgL_vz00_2411)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2410)))->BgL_modulez00) =
				((obj_t) BgL_vz00_2411), BUNSPEC);
		}

	}



/* &lambda2001 */
	obj_t BGl_z62lambda2001z62zzmodule_javaz00(obj_t BgL_envz00_2412,
		obj_t BgL_oz00_2413)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2413)))->BgL_modulez00);
		}

	}



/* &<@anonymous:1996> */
	obj_t BGl_z62zc3z04anonymousza31996ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2414)
	{
		{	/* Module/java.scm 48 */
			return BBOOL(((bool_t) 0));
		}

	}



/* &lambda1995 */
	obj_t BGl_z62lambda1995z62zzmodule_javaz00(obj_t BgL_envz00_2415,
		obj_t BgL_oz00_2416, obj_t BgL_vz00_2417)
	{
		{	/* Module/java.scm 48 */
			{	/* Module/java.scm 48 */
				bool_t BgL_vz00_2593;

				BgL_vz00_2593 = CBOOL(BgL_vz00_2417);
				return
					((((BgL_jklassz00_bglt) COBJECT(
								((BgL_jklassz00_bglt) BgL_oz00_2416)))->BgL_abstractzf3zf3) =
					((bool_t) BgL_vz00_2593), BUNSPEC);
			}
		}

	}



/* &lambda1994 */
	obj_t BGl_z62lambda1994z62zzmodule_javaz00(obj_t BgL_envz00_2418,
		obj_t BgL_oz00_2419)
	{
		{	/* Module/java.scm 48 */
			return
				BBOOL(
				(((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2419)))->BgL_abstractzf3zf3));
		}

	}



/* &<@anonymous:1989> */
	obj_t BGl_z62zc3z04anonymousza31989ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2420)
	{
		{	/* Module/java.scm 48 */
			return BNIL;
		}

	}



/* &lambda1988 */
	obj_t BGl_z62lambda1988z62zzmodule_javaz00(obj_t BgL_envz00_2421,
		obj_t BgL_oz00_2422, obj_t BgL_vz00_2423)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2422)))->BgL_constructorsz00) =
				((obj_t) ((obj_t) BgL_vz00_2423)), BUNSPEC);
		}

	}



/* &lambda1987 */
	obj_t BGl_z62lambda1987z62zzmodule_javaz00(obj_t BgL_envz00_2424,
		obj_t BgL_oz00_2425)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2425)))->BgL_constructorsz00);
		}

	}



/* &<@anonymous:1982> */
	obj_t BGl_z62zc3z04anonymousza31982ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2426)
	{
		{	/* Module/java.scm 48 */
			return BNIL;
		}

	}



/* &lambda1981 */
	obj_t BGl_z62lambda1981z62zzmodule_javaz00(obj_t BgL_envz00_2427,
		obj_t BgL_oz00_2428, obj_t BgL_vz00_2429)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2428)))->BgL_methodsz00) = ((obj_t)
					((obj_t) BgL_vz00_2429)), BUNSPEC);
		}

	}



/* &lambda1980 */
	obj_t BGl_z62lambda1980z62zzmodule_javaz00(obj_t BgL_envz00_2430,
		obj_t BgL_oz00_2431)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2431)))->BgL_methodsz00);
		}

	}



/* &<@anonymous:1974> */
	obj_t BGl_z62zc3z04anonymousza31974ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2432)
	{
		{	/* Module/java.scm 48 */
			return BNIL;
		}

	}



/* &lambda1973 */
	obj_t BGl_z62lambda1973z62zzmodule_javaz00(obj_t BgL_envz00_2433,
		obj_t BgL_oz00_2434, obj_t BgL_vz00_2435)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2434)))->BgL_fieldsz00) = ((obj_t)
					((obj_t) BgL_vz00_2435)), BUNSPEC);
		}

	}



/* &lambda1972 */
	obj_t BGl_z62lambda1972z62zzmodule_javaz00(obj_t BgL_envz00_2436,
		obj_t BgL_oz00_2437)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2437)))->BgL_fieldsz00);
		}

	}



/* &<@anonymous:1967> */
	obj_t BGl_z62zc3z04anonymousza31967ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2438)
	{
		{	/* Module/java.scm 48 */
			return BUNSPEC;
		}

	}



/* &lambda1966 */
	obj_t BGl_z62lambda1966z62zzmodule_javaz00(obj_t BgL_envz00_2439,
		obj_t BgL_oz00_2440, obj_t BgL_vz00_2441)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2440)))->BgL_packagez00) =
				((obj_t) BgL_vz00_2441), BUNSPEC);
		}

	}



/* &lambda1965 */
	obj_t BGl_z62lambda1965z62zzmodule_javaz00(obj_t BgL_envz00_2442,
		obj_t BgL_oz00_2443)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2443)))->BgL_packagez00);
		}

	}



/* &<@anonymous:1960> */
	obj_t BGl_z62zc3z04anonymousza31960ze3ze5zzmodule_javaz00(obj_t
		BgL_envz00_2444)
	{
		{	/* Module/java.scm 48 */
			return BUNSPEC;
		}

	}



/* &lambda1959 */
	obj_t BGl_z62lambda1959z62zzmodule_javaz00(obj_t BgL_envz00_2445,
		obj_t BgL_oz00_2446, obj_t BgL_vz00_2447)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2446)))->BgL_jnamez00) =
				((obj_t) BgL_vz00_2447), BUNSPEC);
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzmodule_javaz00(obj_t BgL_envz00_2448,
		obj_t BgL_oz00_2449)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2449)))->BgL_jnamez00);
		}

	}



/* &lambda1953 */
	obj_t BGl_z62lambda1953z62zzmodule_javaz00(obj_t BgL_envz00_2450,
		obj_t BgL_oz00_2451, obj_t BgL_vz00_2452)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2451)))->BgL_iddz00) = ((obj_t)
					((obj_t) BgL_vz00_2452)), BUNSPEC);
		}

	}



/* &lambda1952 */
	obj_t BGl_z62lambda1952z62zzmodule_javaz00(obj_t BgL_envz00_2453,
		obj_t BgL_oz00_2454)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2454)))->BgL_iddz00);
		}

	}



/* &lambda1947 */
	obj_t BGl_z62lambda1947z62zzmodule_javaz00(obj_t BgL_envz00_2455,
		obj_t BgL_oz00_2456, obj_t BgL_vz00_2457)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2456)))->BgL_idz00) = ((obj_t)
					((obj_t) BgL_vz00_2457)), BUNSPEC);
		}

	}



/* &lambda1946 */
	obj_t BGl_z62lambda1946z62zzmodule_javaz00(obj_t BgL_envz00_2458,
		obj_t BgL_oz00_2459)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2459)))->BgL_idz00);
		}

	}



/* &lambda1942 */
	obj_t BGl_z62lambda1942z62zzmodule_javaz00(obj_t BgL_envz00_2460,
		obj_t BgL_oz00_2461, obj_t BgL_vz00_2462)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2461)))->BgL_locz00) =
				((obj_t) BgL_vz00_2462), BUNSPEC);
		}

	}



/* &lambda1941 */
	obj_t BGl_z62lambda1941z62zzmodule_javaz00(obj_t BgL_envz00_2463,
		obj_t BgL_oz00_2464)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2464)))->BgL_locz00);
		}

	}



/* &lambda1937 */
	obj_t BGl_z62lambda1937z62zzmodule_javaz00(obj_t BgL_envz00_2465,
		obj_t BgL_oz00_2466, obj_t BgL_vz00_2467)
	{
		{	/* Module/java.scm 48 */
			return
				((((BgL_jklassz00_bglt) COBJECT(
							((BgL_jklassz00_bglt) BgL_oz00_2466)))->BgL_srcz00) = ((obj_t)
					((obj_t) BgL_vz00_2467)), BUNSPEC);
		}

	}



/* &lambda1936 */
	obj_t BGl_z62lambda1936z62zzmodule_javaz00(obj_t BgL_envz00_2468,
		obj_t BgL_oz00_2469)
	{
		{	/* Module/java.scm 48 */
			return
				(((BgL_jklassz00_bglt) COBJECT(
						((BgL_jklassz00_bglt) BgL_oz00_2469)))->BgL_srcz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_javaz00()
	{
		{	/* Module/java.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 457474423),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_classz00(((long) 153808388),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_prototypez00(((long) 499400866),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzmodule_foreignz00(((long) 42743827),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzobject_javazd2accesszd2(((long)
					251162269), BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			BGl_modulezd2initializa7ationz75zzforeign_jtypez00(((long) 287572811),
				BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
			return BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long)
					471073690), BSTRING_TO_STRING(BGl_string2253z00zzmodule_javaz00));
		}

	}

#ifdef __cplusplus
}
#endif
