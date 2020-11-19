/*===========================================================================*/
/*   (Ast/glo_def.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/glo_def.scm) */
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

	typedef struct BgL_localz00_bgl
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
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_funz00_bgl
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
	}             *BgL_funz00_bglt;

	typedef struct BgL_sfunz00_bgl
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
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;


	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_glozd2defzd2();
	static BgL_globalz00_bglt
		BGl_z62defzd2globalzd2svarz12z70zzast_glozd2defzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_z62defzd2globalzd2sfunzd2nozd2warningz12z70zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern bool_t BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static BgL_globalz00_bglt
		BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_glozd2defzd2();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_removezd2varzd2fromz12z12zzast_removez00(obj_t,
		BgL_variablez00_bglt);
	static BgL_globalz00_bglt
		BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_globalz00_bglt, obj_t, obj_t);
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	extern bool_t BGl_typezd2subclasszf3z21zzobject_classz00(BgL_typez00_bglt,
		BgL_typez00_bglt);
	extern obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static BgL_globalz00_bglt
		BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_glozd2defzd2();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	static bool_t BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(bool_t,
		BgL_typez00_bglt, BgL_typez00_bglt);
	static BgL_globalz00_bglt
		BGl_z62defzd2globalzd2scnstz12z70zzast_glozd2defzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t
		BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t BGl_dssslzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_glozd2defzd2 = BUNSPEC;
	extern obj_t BGl_tclassz00zzobject_classz00;
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_glozd2defzd2();
	extern obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	static obj_t BGl_z62checkzd2methodzd2definitionz62zzast_glozd2defzd2(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_idzd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_removez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern BgL_typez00_bglt BGl_typezd2ofzd2idz00zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_cnstzd2initzd2zzast_glozd2defzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2();
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_z62defzd2globalzd2sfunz12z70zzast_glozd2defzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_checkzd2methodzd2definitionzd2envzd2zzast_glozd2defzd2,
		BgL_bgl_za762checkza7d2metho1936z00,
		BGl_z62checkzd2methodzd2definitionz62zzast_glozd2defzd2, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2sfunzd2nozd2warningz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl_za762defza7d2globalza71937za7,
		BGl_z62defzd2globalzd2sfunzd2nozd2warningz12z70zzast_glozd2defzd2, 0L,
		BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2sfunz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl_za762defza7d2globalza71938za7,
		BGl_z62defzd2globalzd2sfunz12z70zzast_glozd2defzd2, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2svarz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl_za762defza7d2globalza71939za7,
		BGl_z62defzd2globalzd2svarz12z70zzast_glozd2defzd2, 0L, BUNSPEC, 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_defzd2globalzd2scnstz12zd2envzc0zzast_glozd2defzd2,
		BgL_bgl_za762defza7d2globalza71940za7,
		BGl_z62defzd2globalzd2scnstz12z70zzast_glozd2defzd2, 0L, BUNSPEC, 5);
	      DEFINE_STRING(BGl_string1914z00zzast_glozd2defzd2,
		BgL_bgl_string1914za700za7za7a1941za7, "check-method-definition", 23);
	      DEFINE_STRING(BGl_string1915z00zzast_glozd2defzd2,
		BgL_bgl_string1915za700za7za7a1942za7, "unexpected generic arg", 22);
	      DEFINE_STRING(BGl_string1916z00zzast_glozd2defzd2,
		BgL_bgl_string1916za700za7za7a1943za7,
		"(incompatible DSSSL #!optional prototype)", 41);
	      DEFINE_STRING(BGl_string1917z00zzast_glozd2defzd2,
		BgL_bgl_string1917za700za7za7a1944za7,
		"(incompatible DSSSL #!key prototype)", 36);
	      DEFINE_STRING(BGl_string1918z00zzast_glozd2defzd2,
		BgL_bgl_string1918za700za7za7a1945za7, "(incompatible Dsssl prototype)",
		30);
	      DEFINE_STRING(BGl_string1919z00zzast_glozd2defzd2,
		BgL_bgl_string1919za700za7za7a1946za7, "(arity differs)", 15);
	      DEFINE_STRING(BGl_string1920z00zzast_glozd2defzd2,
		BgL_bgl_string1920za700za7za7a1947za7, "(incompatible formal type)", 26);
	      DEFINE_STRING(BGl_string1921z00zzast_glozd2defzd2,
		BgL_bgl_string1921za700za7za7a1948za7,
		"(incompatible function type result)", 35);
	      DEFINE_STRING(BGl_string1922z00zzast_glozd2defzd2,
		BgL_bgl_string1922za700za7za7a1949za7,
		"(declared as function of another class (~a/~a))", 47);
	      DEFINE_STRING(BGl_string1923z00zzast_glozd2defzd2,
		BgL_bgl_string1923za700za7za7a1950za7, "(not declared as function)", 26);
	      DEFINE_STRING(BGl_string1924z00zzast_glozd2defzd2,
		BgL_bgl_string1924za700za7za7a1951za7, "Illegal type for global variable",
		32);
	      DEFINE_STRING(BGl_string1925z00zzast_glozd2defzd2,
		BgL_bgl_string1925za700za7za7a1952za7, "(incompatible variable type)", 28);
	      DEFINE_STRING(BGl_string1926z00zzast_glozd2defzd2,
		BgL_bgl_string1926za700za7za7a1953za7, "(not declared as a variable)", 28);
	      DEFINE_STRING(BGl_string1927z00zzast_glozd2defzd2,
		BgL_bgl_string1927za700za7za7a1954za7,
		"Prototype and definition don't match", 36);
	      DEFINE_STRING(BGl_string1928z00zzast_glozd2defzd2,
		BgL_bgl_string1928za700za7za7a1955za7, " ", 1);
	      DEFINE_STRING(BGl_string1929z00zzast_glozd2defzd2,
		BgL_bgl_string1929za700za7za7a1956za7, "argument missing", 16);
	      DEFINE_STRING(BGl_string1930z00zzast_glozd2defzd2,
		BgL_bgl_string1930za700za7za7a1957za7, "(generic not found for method)",
		30);
	      DEFINE_STRING(BGl_string1931z00zzast_glozd2defzd2,
		BgL_bgl_string1931za700za7za7a1958za7, "ast_glo-def", 11);
	      DEFINE_STRING(BGl_string1932z00zzast_glozd2defzd2,
		BgL_bgl_string1932za700za7za7a1959za7,
		"bigloo now sgfun static export bdb ", 35);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_glozd2defzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzast_glozd2defzd2(long
		BgL_checksumz00_2381, char *BgL_fromz00_2382)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_glozd2defzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_glozd2defzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_glozd2defzd2();
					BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2();
					BGl_cnstzd2initzd2zzast_glozd2defzd2();
					BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2();
					return BGl_methodzd2initzd2zzast_glozd2defzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_glo-def");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_glo-def");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			{	/* Ast/glo_def.scm 15 */
				obj_t BgL_cportz00_2368;

				{	/* Ast/glo_def.scm 15 */
					obj_t BgL_stringz00_2376;

					BgL_stringz00_2376 = BGl_string1932z00zzast_glozd2defzd2;
					{	/* Ast/glo_def.scm 15 */
						obj_t BgL_startz00_2377;

						BgL_startz00_2377 = BINT(((long) 0));
						{	/* Ast/glo_def.scm 15 */
							obj_t BgL_endz00_2378;

							BgL_endz00_2378 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2376)));
							{	/* Ast/glo_def.scm 15 */

								BgL_cportz00_2368 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2376, BgL_startz00_2377, BgL_endz00_2378);
				}}}}
				{
					long BgL_iz00_2369;

					BgL_iz00_2369 = ((long) 5);
				BgL_loopz00_2370:
					if ((BgL_iz00_2369 == ((long) -1)))
						{	/* Ast/glo_def.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Ast/glo_def.scm 15 */
							{	/* Ast/glo_def.scm 15 */
								obj_t BgL_arg1934z00_2372;

								{	/* Ast/glo_def.scm 15 */

									{	/* Ast/glo_def.scm 15 */
										obj_t BgL_locationz00_2374;

										BgL_locationz00_2374 = BBOOL(((bool_t) 0));
										{	/* Ast/glo_def.scm 15 */

											BgL_arg1934z00_2372 =
												BGl_readz00zz__readerz00(BgL_cportz00_2368,
												BgL_locationz00_2374);
										}
									}
								}
								{	/* Ast/glo_def.scm 15 */
									int BgL_tmpz00_2409;

									BgL_tmpz00_2409 = (int) (BgL_iz00_2369);
									CNST_TABLE_SET(BgL_tmpz00_2409, BgL_arg1934z00_2372);
							}}
							{	/* Ast/glo_def.scm 15 */
								int BgL_auxz00_2375;

								BgL_auxz00_2375 = (int) ((BgL_iz00_2369 - ((long) 1)));
								{
									long BgL_iz00_2414;

									BgL_iz00_2414 = (long) (BgL_auxz00_2375);
									BgL_iz00_2369 = BgL_iz00_2414;
									goto BgL_loopz00_2370;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* def-global-sfun-no-warning! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2(obj_t
		BgL_idz00_3, obj_t BgL_argsz00_4, obj_t BgL_locz00_5, obj_t BgL_modz00_6,
		obj_t BgL_classz00_7, obj_t BgL_srczd2expzd2_8, obj_t BgL_remz00_9,
		obj_t BgL_nodez00_10)
	{
		{	/* Ast/glo_def.scm 67 */
			{	/* Ast/glo_def.scm 68 */
				int BgL_warningz00_2179;

				BgL_warningz00_2179 = BGl_bigloozd2warningzd2zz__paramz00();
				BGl_bigloozd2warningzd2setz12z12zz__paramz00((int) (((long) 0)));
				{	/* Ast/glo_def.scm 70 */
					BgL_globalz00_bglt BgL_funz00_2180;

					BgL_funz00_2180 =
						BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_3,
						BgL_argsz00_4, BgL_locz00_5, BgL_modz00_6, BgL_classz00_7,
						BgL_srczd2expzd2_8, BgL_remz00_9, BgL_nodez00_10);
					BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_warningz00_2179);
					return BgL_funz00_2180;
				}
			}
		}

	}



/* &def-global-sfun-no-warning! */
	BgL_globalz00_bglt
		BGl_z62defzd2globalzd2sfunzd2nozd2warningz12z70zzast_glozd2defzd2(obj_t
		BgL_envz00_2334, obj_t BgL_idz00_2335, obj_t BgL_argsz00_2336,
		obj_t BgL_locz00_2337, obj_t BgL_modz00_2338, obj_t BgL_classz00_2339,
		obj_t BgL_srczd2expzd2_2340, obj_t BgL_remz00_2341, obj_t BgL_nodez00_2342)
	{
		{	/* Ast/glo_def.scm 67 */
			return
				BGl_defzd2globalzd2sfunzd2nozd2warningz12z12zzast_glozd2defzd2
				(BgL_idz00_2335, BgL_argsz00_2336, BgL_locz00_2337, BgL_modz00_2338,
				BgL_classz00_2339, BgL_srczd2expzd2_2340, BgL_remz00_2341,
				BgL_nodez00_2342);
		}

	}



/* def-global-sfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(obj_t BgL_idz00_11,
		obj_t BgL_argsz00_12, obj_t BgL_localsz00_13, obj_t BgL_modulez00_14,
		obj_t BgL_classz00_15, obj_t BgL_srczd2expzd2_16, obj_t BgL_remz00_17,
		obj_t BgL_nodez00_18)
	{
		{	/* Ast/glo_def.scm 80 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_idz00_11);
			{	/* Ast/glo_def.scm 86 */
				obj_t BgL_locz00_1685;

				BgL_locz00_1685 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2expzd2_16);
				{	/* Ast/glo_def.scm 86 */
					obj_t BgL_idzd2typezd2_1686;

					BgL_idzd2typezd2_1686 =
						BGl_parsezd2idzd2zzast_identz00(BgL_idz00_11, BgL_locz00_1685);
					{	/* Ast/glo_def.scm 87 */
						obj_t BgL_typezd2reszd2_1687;

						BgL_typezd2reszd2_1687 = CDR(BgL_idzd2typezd2_1686);
						{	/* Ast/glo_def.scm 88 */
							obj_t BgL_idz00_1688;

							BgL_idz00_1688 = CAR(BgL_idzd2typezd2_1686);
							{	/* Ast/glo_def.scm 89 */
								obj_t BgL_importz00_1689;

								{	/* Ast/glo_def.scm 90 */
									bool_t BgL_test1962z00_2428;

									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3)))
										{	/* Ast/glo_def.scm 91 */
											obj_t BgL_arg1394z00_1742;

											{	/* Ast/glo_def.scm 91 */
												obj_t BgL_arg1396z00_1743;

												BgL_arg1396z00_1743 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_arg1394z00_1742 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1396z00_1743)))->
													BgL_debugzd2supportzd2);
											}
											BgL_test1962z00_2428 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 0)), BgL_arg1394z00_1742));
										}
									else
										{	/* Ast/glo_def.scm 90 */
											BgL_test1962z00_2428 = ((bool_t) 0);
										}
									if (BgL_test1962z00_2428)
										{	/* Ast/glo_def.scm 90 */
											BgL_importz00_1689 = CNST_TABLE_REF(((long) 1));
										}
									else
										{	/* Ast/glo_def.scm 90 */
											BgL_importz00_1689 = CNST_TABLE_REF(((long) 2));
								}}
								{	/* Ast/glo_def.scm 90 */
									obj_t BgL_oldzd2globalzd2_1690;

									BgL_oldzd2globalzd2_1690 =
										BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idz00_1688,
										BgL_modulez00_14);
									{	/* Ast/glo_def.scm 94 */
										BgL_globalz00_bglt BgL_globalz00_1691;

										if (BGl_isazf3zf3zz__objectz00(BgL_oldzd2globalzd2_1690,
												BGl_globalz00zzast_varz00))
											{	/* Ast/glo_def.scm 96 */
												BgL_globalz00_1691 =
													BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(
													((BgL_globalz00_bglt) BgL_oldzd2globalzd2_1690),
													BgL_typezd2reszd2_1687, BgL_argsz00_12,
													BgL_localsz00_13, BgL_classz00_15,
													BgL_srczd2expzd2_16);
											}
										else
											{	/* Ast/glo_def.scm 96 */
												BgL_globalz00_1691 =
													BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2
													(BgL_idz00_1688, BFALSE, BgL_argsz00_12,
													BgL_modulez00_14, BgL_importz00_1689, BgL_classz00_15,
													BgL_srczd2expzd2_16, BFALSE);
											}
										{	/* Ast/glo_def.scm 95 */
											obj_t BgL_defzd2loczd2_1692;

											BgL_defzd2loczd2_1692 =
												BGl_findzd2locationzd2zztools_locationz00
												(BgL_srczd2expzd2_16);
											{	/* Ast/glo_def.scm 102 */

												{	/* Ast/glo_def.scm 103 */
													bool_t BgL_test1965z00_2447;

													{	/* Ast/glo_def.scm 103 */
														BgL_valuez00_bglt BgL_arg1372z00_1735;

														BgL_arg1372z00_1735 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_globalz00_1691)))->BgL_valuez00);
														{	/* Ast/glo_def.scm 103 */
															bool_t BgL_res1875z00_2190;

															BgL_res1875z00_2190 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1372z00_1735),
																BGl_sfunz00zzast_varz00);
															BgL_test1965z00_2447 = BgL_res1875z00_2190;
														}
													}
													if (BgL_test1965z00_2447)
														{	/* Ast/glo_def.scm 103 */
															{	/* Ast/glo_def.scm 300 */
																BgL_typez00_bglt BgL_oldzd2typezd2_2193;

																BgL_oldzd2typezd2_2193 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_1691)))->BgL_typez00);
																if ((((obj_t) BgL_oldzd2typezd2_2193) ==
																		BGl_za2_za2z00zztype_cachez00))
																	{	/* Ast/glo_def.scm 301 */
																		((((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							BgL_globalz00_1691)))->
																				BgL_typez00) =
																			((BgL_typez00_bglt) ((BgL_typez00_bglt)
																					BgL_typezd2reszd2_1687)), BUNSPEC);
																	}
																else
																	{	/* Ast/glo_def.scm 301 */
																		BFALSE;
																	}
															}
															if (
																(bgl_list_length(BgL_localsz00_13) ==
																	bgl_list_length(
																		(((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						(((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_globalz00_1691)))->
																							BgL_valuez00))))->BgL_argsz00))))
																{	/* Ast/glo_def.scm 114 */
																	obj_t BgL_typesz00_1700;

																	{	/* Ast/glo_def.scm 114 */
																		obj_t BgL_l1299z00_1711;

																		BgL_l1299z00_1711 =
																			(((BgL_sfunz00_bglt) COBJECT(
																					((BgL_sfunz00_bglt)
																						(((BgL_variablez00_bglt) COBJECT(
																									((BgL_variablez00_bglt)
																										BgL_globalz00_1691)))->
																							BgL_valuez00))))->BgL_argsz00);
																		if (NULLP(BgL_l1299z00_1711))
																			{	/* Ast/glo_def.scm 114 */
																				BgL_typesz00_1700 = BNIL;
																			}
																		else
																			{	/* Ast/glo_def.scm 114 */
																				obj_t BgL_head1301z00_1713;

																				{	/* Ast/glo_def.scm 114 */
																					obj_t BgL_res1878z00_2206;

																					BgL_res1878z00_2206 =
																						MAKE_YOUNG_PAIR(BNIL, BNIL);
																					BgL_head1301z00_1713 =
																						BgL_res1878z00_2206;
																				}
																				{
																					obj_t BgL_l1299z00_1715;
																					obj_t BgL_tail1302z00_1716;

																					BgL_l1299z00_1715 = BgL_l1299z00_1711;
																					BgL_tail1302z00_1716 =
																						BgL_head1301z00_1713;
																				BgL_zc3z04anonymousza31342ze3z87_1717:
																					if (NULLP(BgL_l1299z00_1715))
																						{	/* Ast/glo_def.scm 114 */
																							BgL_typesz00_1700 =
																								CDR(BgL_head1301z00_1713);
																						}
																					else
																						{	/* Ast/glo_def.scm 114 */
																							obj_t BgL_newtail1303z00_1719;

																							{	/* Ast/glo_def.scm 114 */
																								obj_t BgL_arg1345z00_1721;

																								{	/* Ast/glo_def.scm 114 */
																									obj_t BgL_az00_1722;

																									BgL_az00_1722 =
																										CAR(
																										((obj_t)
																											BgL_l1299z00_1715));
																									if (BGl_isazf3zf3zz__objectz00
																										(BgL_az00_1722,
																											BGl_localz00zzast_varz00))
																										{	/* Ast/glo_def.scm 116 */
																											BgL_arg1345z00_1721 =
																												((obj_t)
																												(((BgL_variablez00_bglt)
																														COBJECT((
																																(BgL_variablez00_bglt)
																																((BgL_localz00_bglt) BgL_az00_1722))))->BgL_typez00));
																										}
																									else
																										{	/* Ast/glo_def.scm 116 */
																											if (BGl_isazf3zf3zz__objectz00(BgL_az00_1722, BGl_typez00zztype_typez00))
																												{	/* Ast/glo_def.scm 118 */
																													BgL_arg1345z00_1721 =
																														BgL_az00_1722;
																												}
																											else
																												{	/* Ast/glo_def.scm 118 */
																													BgL_arg1345z00_1721 =
																														BGl_internalzd2errorzd2zztools_errorz00
																														(BGl_string1914z00zzast_glozd2defzd2,
																														BGl_string1915z00zzast_glozd2defzd2,
																														BGl_shapez00zztools_shapez00
																														(BgL_az00_1722));
																												}
																										}
																								}
																								{	/* Ast/glo_def.scm 114 */
																									obj_t BgL_res1882z00_2213;

																									BgL_res1882z00_2213 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1345z00_1721, BNIL);
																									BgL_newtail1303z00_1719 =
																										BgL_res1882z00_2213;
																								}
																							}
																							SET_CDR(BgL_tail1302z00_1716,
																								BgL_newtail1303z00_1719);
																							{	/* Ast/glo_def.scm 114 */
																								obj_t BgL_arg1344z00_1720;

																								BgL_arg1344z00_1720 =
																									CDR(
																									((obj_t) BgL_l1299z00_1715));
																								{
																									obj_t BgL_tail1302z00_2495;
																									obj_t BgL_l1299z00_2494;

																									BgL_l1299z00_2494 =
																										BgL_arg1344z00_1720;
																									BgL_tail1302z00_2495 =
																										BgL_newtail1303z00_1719;
																									BgL_tail1302z00_1716 =
																										BgL_tail1302z00_2495;
																									BgL_l1299z00_1715 =
																										BgL_l1299z00_2494;
																									goto
																										BgL_zc3z04anonymousza31342ze3z87_1717;
																								}
																							}
																						}
																				}
																			}
																	}
																	{
																		obj_t BgL_ll1304z00_1702;
																		obj_t BgL_ll1305z00_1703;

																		BgL_ll1304z00_1702 = BgL_localsz00_13;
																		BgL_ll1305z00_1703 = BgL_typesz00_1700;
																	BgL_zc3z04anonymousza31331ze3z87_1704:
																		if (NULLP(BgL_ll1304z00_1702))
																			{	/* Ast/glo_def.scm 126 */
																				((bool_t) 1);
																			}
																		else
																			{	/* Ast/glo_def.scm 126 */
																				{	/* Ast/glo_def.scm 126 */
																					obj_t BgL_arg1334z00_1706;
																					obj_t BgL_arg1335z00_1707;

																					BgL_arg1334z00_1706 =
																						CAR(((obj_t) BgL_ll1304z00_1702));
																					BgL_arg1335z00_1707 =
																						CAR(((obj_t) BgL_ll1305z00_1703));
																					{	/* Ast/glo_def.scm 300 */
																						BgL_typez00_bglt
																							BgL_oldzd2typezd2_2221;
																						BgL_oldzd2typezd2_2221 =
																							(((BgL_variablez00_bglt)
																								COBJECT(((BgL_variablez00_bglt)
																										BgL_arg1334z00_1706)))->
																							BgL_typez00);
																						if ((((obj_t)
																									BgL_oldzd2typezd2_2221) ==
																								BGl_za2_za2z00zztype_cachez00))
																							{	/* Ast/glo_def.scm 301 */
																								((((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													BgL_arg1334z00_1706)))->
																										BgL_typez00) =
																									((BgL_typez00_bglt) (
																											(BgL_typez00_bglt)
																											BgL_arg1335z00_1707)),
																									BUNSPEC);
																							}
																						else
																							{	/* Ast/glo_def.scm 301 */
																								BFALSE;
																							}
																					}
																				}
																				{	/* Ast/glo_def.scm 126 */
																					obj_t BgL_arg1337z00_1708;
																					obj_t BgL_arg1338z00_1709;

																					BgL_arg1337z00_1708 =
																						CDR(((obj_t) BgL_ll1304z00_1702));
																					BgL_arg1338z00_1709 =
																						CDR(((obj_t) BgL_ll1305z00_1703));
																					{
																						obj_t BgL_ll1305z00_2515;
																						obj_t BgL_ll1304z00_2514;

																						BgL_ll1304z00_2514 =
																							BgL_arg1337z00_1708;
																						BgL_ll1305z00_2515 =
																							BgL_arg1338z00_1709;
																						BgL_ll1305z00_1703 =
																							BgL_ll1305z00_2515;
																						BgL_ll1304z00_1702 =
																							BgL_ll1304z00_2514;
																						goto
																							BgL_zc3z04anonymousza31331ze3z87_1704;
																					}
																				}
																			}
																	}
																}
															else
																{	/* Ast/glo_def.scm 112 */
																	((bool_t) 0);
																}
															BGl_removezd2varzd2fromz12z12zzast_removez00
																(BgL_remz00_17,
																((BgL_variablez00_bglt) BgL_globalz00_1691));
															{	/* Ast/glo_def.scm 130 */
																BgL_valuez00_bglt BgL_arg1367z00_1732;

																BgL_arg1367z00_1732 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_1691)))->BgL_valuez00);
																((((BgL_sfunz00_bglt)
																			COBJECT(((BgL_sfunz00_bglt)
																					BgL_arg1367z00_1732)))->BgL_bodyz00) =
																	((obj_t) BgL_nodez00_18), BUNSPEC);
															}
															{	/* Ast/glo_def.scm 132 */
																BgL_valuez00_bglt BgL_arg1370z00_1733;

																BgL_arg1370z00_1733 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_1691)))->BgL_valuez00);
																((((BgL_sfunz00_bglt)
																			COBJECT(((BgL_sfunz00_bglt)
																					BgL_arg1370z00_1733)))->BgL_argsz00) =
																	((obj_t) BgL_localsz00_13), BUNSPEC);
															}
															{	/* Ast/glo_def.scm 134 */
																BgL_valuez00_bglt BgL_arg1371z00_1734;

																BgL_arg1371z00_1734 =
																	(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_1691)))->BgL_valuez00);
																((((BgL_sfunz00_bglt)
																			COBJECT(((BgL_sfunz00_bglt)
																					BgL_arg1371z00_1734)))->BgL_locz00) =
																	((obj_t) BgL_defzd2loczd2_1692), BUNSPEC);
															}
															BGl_leavezd2functionzd2zztools_errorz00();
														}
													else
														{	/* Ast/glo_def.scm 103 */
															BFALSE;
														}
												}
												return BgL_globalz00_1691;
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



/* &def-global-sfun! */
	BgL_globalz00_bglt BGl_z62defzd2globalzd2sfunz12z70zzast_glozd2defzd2(obj_t
		BgL_envz00_2343, obj_t BgL_idz00_2344, obj_t BgL_argsz00_2345,
		obj_t BgL_localsz00_2346, obj_t BgL_modulez00_2347, obj_t BgL_classz00_2348,
		obj_t BgL_srczd2expzd2_2349, obj_t BgL_remz00_2350, obj_t BgL_nodez00_2351)
	{
		{	/* Ast/glo_def.scm 80 */
			return
				BGl_defzd2globalzd2sfunz12z12zzast_glozd2defzd2(BgL_idz00_2344,
				BgL_argsz00_2345, BgL_localsz00_2346, BgL_modulez00_2347,
				BgL_classz00_2348, BgL_srczd2expzd2_2349, BgL_remz00_2350,
				BgL_nodez00_2351);
		}

	}



/* check-sfun-definition */
	BgL_globalz00_bglt
		BGl_checkzd2sfunzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_oldz00_19, obj_t BgL_typezd2reszd2_20, obj_t BgL_argsz00_21,
		obj_t BgL_localsz00_22, obj_t BgL_classz00_23, obj_t BgL_srczd2expzd2_24)
	{
		{	/* Ast/glo_def.scm 142 */
			{	/* Ast/glo_def.scm 145 */
				BgL_valuez00_bglt BgL_oldzd2valuezd2_1744;

				BgL_oldzd2valuezd2_1744 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oldz00_19)))->BgL_valuez00);
				{	/* Ast/glo_def.scm 147 */
					bool_t BgL_test1974z00_2534;

					{	/* Ast/glo_def.scm 147 */
						bool_t BgL_res1884z00_2235;

						BgL_res1884z00_2235 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_oldzd2valuezd2_1744), BGl_sfunz00zzast_varz00);
						BgL_test1974z00_2534 = BgL_res1884z00_2235;
					}
					if (BgL_test1974z00_2534)
						{	/* Ast/glo_def.scm 147 */
							if (
								((((BgL_sfunz00_bglt) COBJECT(
												((BgL_sfunz00_bglt) BgL_oldzd2valuezd2_1744)))->
										BgL_classz00) == BgL_classz00_23))
								{	/* Ast/glo_def.scm 154 */
									bool_t BgL_test1976z00_2541;

									{	/* Ast/glo_def.scm 154 */
										long BgL_arg1588z00_1821;
										long BgL_arg1589z00_1822;

										BgL_arg1588z00_1821 =
											(((BgL_funz00_bglt) COBJECT(
													((BgL_funz00_bglt)
														((BgL_sfunz00_bglt) BgL_oldzd2valuezd2_1744))))->
											BgL_arityz00);
										BgL_arg1589z00_1822 =
											BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_21);
										BgL_test1976z00_2541 =
											(BgL_arg1588z00_1821 == BgL_arg1589z00_1822);
									}
									if (BgL_test1976z00_2541)
										{	/* Ast/glo_def.scm 156 */
											bool_t BgL_test1977z00_2547;

											{	/* Ast/glo_def.scm 156 */
												bool_t BgL_arg1582z00_1818;
												BgL_typez00_bglt BgL_arg1584z00_1819;

												BgL_arg1582z00_1818 =
													(CNST_TABLE_REF(((long) 3)) == BgL_classz00_23);
												BgL_arg1584z00_1819 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_oldz00_19)))->
													BgL_typez00);
												BgL_test1977z00_2547 =
													BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
													(BgL_arg1582z00_1818,
													((BgL_typez00_bglt) BgL_typezd2reszd2_20),
													BgL_arg1584z00_1819);
											}
											if (BgL_test1977z00_2547)
												{	/* Ast/glo_def.scm 156 */
													if (BGl_dssslzd2prototypezf3z21zztools_dssslz00
														(BgL_argsz00_21))
														{	/* Ast/glo_def.scm 162 */
															if (BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_21))
																{	/* Ast/glo_def.scm 165 */
																	bool_t BgL_test1980z00_2558;

																	{	/* Ast/glo_def.scm 165 */
																		obj_t BgL_arg1461z00_1760;
																		obj_t BgL_arg1462z00_1761;

																		BgL_arg1461z00_1760 =
																			BGl_dssslzd2optionalszd2zztools_dssslz00
																			(BgL_argsz00_21);
																		BgL_arg1462z00_1761 =
																			(((BgL_sfunz00_bglt)
																				COBJECT(((BgL_sfunz00_bglt)
																						BgL_oldzd2valuezd2_1744)))->
																			BgL_optionalsz00);
																		BgL_test1980z00_2558 =
																			BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																			(BgL_arg1461z00_1760,
																			BgL_arg1462z00_1761);
																	}
																	if (BgL_test1980z00_2558)
																		{	/* Ast/glo_def.scm 165 */
																			((obj_t) BgL_oldz00_19);
																		}
																	else
																		{	/* Ast/glo_def.scm 167 */
																			obj_t BgL_list1451z00_1759;

																			BgL_list1451z00_1759 =
																				MAKE_YOUNG_PAIR
																				(BGl_string1916z00zzast_glozd2defzd2,
																				BNIL);
																			((obj_t)
																				BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																				(BgL_oldz00_19, BgL_srczd2expzd2_24,
																					BgL_list1451z00_1759));
																		}
																}
															else
																{	/* Ast/glo_def.scm 164 */
																	if (BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(BgL_argsz00_21))
																		{	/* Ast/glo_def.scm 171 */
																			bool_t BgL_test1982z00_2569;

																			{	/* Ast/glo_def.scm 171 */
																				obj_t BgL_arg1474z00_1767;
																				obj_t BgL_arg1476z00_1768;

																				BgL_arg1474z00_1767 =
																					BGl_dssslzd2keyszd2zztools_dssslz00
																					(BgL_argsz00_21);
																				BgL_arg1476z00_1768 =
																					(((BgL_sfunz00_bglt)
																						COBJECT(((BgL_sfunz00_bglt)
																								BgL_oldzd2valuezd2_1744)))->
																					BgL_keysz00);
																				BgL_test1982z00_2569 =
																					BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																					(BgL_arg1474z00_1767,
																					BgL_arg1476z00_1768);
																			}
																			if (BgL_test1982z00_2569)
																				{	/* Ast/glo_def.scm 171 */
																					((obj_t) BgL_oldz00_19);
																				}
																			else
																				{	/* Ast/glo_def.scm 173 */
																					obj_t BgL_list1467z00_1766;

																					BgL_list1467z00_1766 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1917z00zzast_glozd2defzd2,
																						BNIL);
																					((obj_t)
																						BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																						(BgL_oldz00_19, BgL_srczd2expzd2_24,
																							BgL_list1467z00_1766));
																				}
																		}
																	else
																		{	/* Ast/glo_def.scm 176 */
																			bool_t BgL_test1983z00_2578;

																			{	/* Ast/glo_def.scm 176 */
																				obj_t BgL_arg1493z00_1773;
																				obj_t BgL_arg1495z00_1774;

																				BgL_arg1493z00_1773 =
																					(((BgL_sfunz00_bglt) COBJECT(
																							((BgL_sfunz00_bglt)
																								BgL_oldzd2valuezd2_1744)))->
																					BgL_dssslzd2keywordszd2);
																				BgL_arg1495z00_1774 =
																					BGl_dssslzd2formalszd2zztools_dssslz00
																					(BgL_argsz00_21);
																				BgL_test1983z00_2578 =
																					BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																					(BgL_arg1493z00_1773,
																					BgL_arg1495z00_1774);
																			}
																			if (BgL_test1983z00_2578)
																				{	/* Ast/glo_def.scm 176 */
																					BFALSE;
																				}
																			else
																				{	/* Ast/glo_def.scm 178 */
																					obj_t BgL_list1491z00_1772;

																					BgL_list1491z00_1772 =
																						MAKE_YOUNG_PAIR
																						(BGl_string1918z00zzast_glozd2defzd2,
																						BNIL);
																					((obj_t)
																						BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																						(BgL_oldz00_19, BgL_srczd2expzd2_24,
																							BgL_list1491z00_1772));
																				}
																		}
																}
														}
													else
														{	/* Ast/glo_def.scm 180 */
															obj_t BgL_g1108z00_1775;

															{	/* Ast/glo_def.scm 181 */
																obj_t BgL_l1307z00_1801;

																BgL_l1307z00_1801 =
																	(((BgL_sfunz00_bglt) COBJECT(
																			((BgL_sfunz00_bglt)
																				BgL_oldzd2valuezd2_1744)))->
																	BgL_argsz00);
																if (NULLP(BgL_l1307z00_1801))
																	{	/* Ast/glo_def.scm 181 */
																		BgL_g1108z00_1775 = BNIL;
																	}
																else
																	{	/* Ast/glo_def.scm 181 */
																		obj_t BgL_head1309z00_1803;

																		{	/* Ast/glo_def.scm 181 */
																			obj_t BgL_res1887z00_2247;

																			BgL_res1887z00_2247 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BgL_head1309z00_1803 =
																				BgL_res1887z00_2247;
																		}
																		{
																			obj_t BgL_l1307z00_1805;
																			obj_t BgL_tail1310z00_1806;

																			BgL_l1307z00_1805 = BgL_l1307z00_1801;
																			BgL_tail1310z00_1806 =
																				BgL_head1309z00_1803;
																		BgL_zc3z04anonymousza31567ze3z87_1807:
																			if (NULLP(BgL_l1307z00_1805))
																				{	/* Ast/glo_def.scm 181 */
																					BgL_g1108z00_1775 =
																						CDR(BgL_head1309z00_1803);
																				}
																			else
																				{	/* Ast/glo_def.scm 181 */
																					obj_t BgL_newtail1311z00_1809;

																					{	/* Ast/glo_def.scm 181 */
																						obj_t BgL_arg1575z00_1811;

																						{	/* Ast/glo_def.scm 181 */
																							obj_t BgL_az00_1812;

																							BgL_az00_1812 =
																								CAR(
																								((obj_t) BgL_l1307z00_1805));
																							if (BGl_isazf3zf3zz__objectz00
																								(BgL_az00_1812,
																									BGl_localz00zzast_varz00))
																								{	/* Ast/glo_def.scm 183 */
																									BgL_arg1575z00_1811 =
																										((obj_t)
																										(((BgL_variablez00_bglt)
																												COBJECT((
																														(BgL_variablez00_bglt)
																														((BgL_localz00_bglt)
																															BgL_az00_1812))))->
																											BgL_typez00));
																								}
																							else
																								{	/* Ast/glo_def.scm 183 */
																									if (BGl_isazf3zf3zz__objectz00
																										(BgL_az00_1812,
																											BGl_typez00zztype_typez00))
																										{	/* Ast/glo_def.scm 185 */
																											BgL_arg1575z00_1811 =
																												BgL_az00_1812;
																										}
																									else
																										{	/* Ast/glo_def.scm 185 */
																											BgL_arg1575z00_1811 =
																												BGl_internalzd2errorzd2zztools_errorz00
																												(BGl_string1914z00zzast_glozd2defzd2,
																												BGl_string1915z00zzast_glozd2defzd2,
																												BGl_shapez00zztools_shapez00
																												(BgL_az00_1812));
																										}
																								}
																						}
																						{	/* Ast/glo_def.scm 181 */
																							obj_t BgL_res1891z00_2254;

																							BgL_res1891z00_2254 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1575z00_1811, BNIL);
																							BgL_newtail1311z00_1809 =
																								BgL_res1891z00_2254;
																						}
																					}
																					SET_CDR(BgL_tail1310z00_1806,
																						BgL_newtail1311z00_1809);
																					{	/* Ast/glo_def.scm 181 */
																						obj_t BgL_arg1573z00_1810;

																						BgL_arg1573z00_1810 =
																							CDR(((obj_t) BgL_l1307z00_1805));
																						{
																							obj_t BgL_tail1310z00_2611;
																							obj_t BgL_l1307z00_2610;

																							BgL_l1307z00_2610 =
																								BgL_arg1573z00_1810;
																							BgL_tail1310z00_2611 =
																								BgL_newtail1311z00_1809;
																							BgL_tail1310z00_1806 =
																								BgL_tail1310z00_2611;
																							BgL_l1307z00_1805 =
																								BgL_l1307z00_2610;
																							goto
																								BgL_zc3z04anonymousza31567ze3z87_1807;
																						}
																					}
																				}
																		}
																	}
															}
															{
																obj_t BgL_localsz00_1777;
																obj_t BgL_typesz00_1778;

																BgL_localsz00_1777 = BgL_localsz00_22;
																BgL_typesz00_1778 = BgL_g1108z00_1775;
															BgL_zc3z04anonymousza31496ze3z87_1779:
																if (NULLP(BgL_localsz00_1777))
																	{	/* Ast/glo_def.scm 193 */
																		if (NULLP(BgL_typesz00_1778))
																			{	/* Ast/glo_def.scm 196 */
																				((((BgL_globalz00_bglt)
																							COBJECT(BgL_oldz00_19))->
																						BgL_srcz00) =
																					((obj_t) BgL_srczd2expzd2_24),
																					BUNSPEC);
																			}
																		else
																			{	/* Ast/glo_def.scm 198 */
																				obj_t BgL_list1499z00_1782;

																				BgL_list1499z00_1782 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1919z00zzast_glozd2defzd2,
																					BNIL);
																				((obj_t)
																					BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																					(BgL_oldz00_19, BgL_srczd2expzd2_24,
																						BgL_list1499z00_1782));
																			}
																	}
																else
																	{	/* Ast/glo_def.scm 199 */
																		bool_t BgL_test1990z00_2620;

																		if (NULLP(BgL_typesz00_1778))
																			{	/* Ast/glo_def.scm 199 */
																				BgL_test1990z00_2620 = ((bool_t) 1);
																			}
																		else
																			{	/* Ast/glo_def.scm 200 */
																				bool_t BgL_test1992z00_2623;

																				{	/* Ast/glo_def.scm 201 */
																					BgL_typez00_bglt BgL_arg1561z00_1797;
																					obj_t BgL_arg1564z00_1798;

																					BgL_arg1561z00_1797 =
																						(((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									((BgL_localz00_bglt)
																										CAR(
																											((obj_t)
																												BgL_localsz00_1777))))))->
																						BgL_typez00);
																					BgL_arg1564z00_1798 =
																						CAR(((obj_t) BgL_typesz00_1778));
																					BgL_test1992z00_2623 =
																						BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
																						(((bool_t) 0), BgL_arg1561z00_1797,
																						((BgL_typez00_bglt)
																							BgL_arg1564z00_1798));
																				}
																				if (BgL_test1992z00_2623)
																					{	/* Ast/glo_def.scm 200 */
																						BgL_test1990z00_2620 = ((bool_t) 0);
																					}
																				else
																					{	/* Ast/glo_def.scm 200 */
																						BgL_test1990z00_2620 = ((bool_t) 1);
																					}
																			}
																		if (BgL_test1990z00_2620)
																			{	/* Ast/glo_def.scm 203 */
																				obj_t BgL_list1542z00_1792;

																				BgL_list1542z00_1792 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1920z00zzast_glozd2defzd2,
																					BNIL);
																				((obj_t)
																					BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																					(BgL_oldz00_19, BgL_srczd2expzd2_24,
																						BgL_list1542z00_1792));
																			}
																		else
																			{	/* Ast/glo_def.scm 205 */
																				obj_t BgL_arg1552z00_1793;
																				obj_t BgL_arg1558z00_1794;

																				BgL_arg1552z00_1793 =
																					CDR(((obj_t) BgL_localsz00_1777));
																				BgL_arg1558z00_1794 =
																					CDR(((obj_t) BgL_typesz00_1778));
																				{
																					obj_t BgL_typesz00_2641;
																					obj_t BgL_localsz00_2640;

																					BgL_localsz00_2640 =
																						BgL_arg1552z00_1793;
																					BgL_typesz00_2641 =
																						BgL_arg1558z00_1794;
																					BgL_typesz00_1778 = BgL_typesz00_2641;
																					BgL_localsz00_1777 =
																						BgL_localsz00_2640;
																					goto
																						BgL_zc3z04anonymousza31496ze3z87_1779;
																				}
																			}
																	}
															}
														}
												}
											else
												{	/* Ast/glo_def.scm 159 */
													obj_t BgL_list1579z00_1817;

													BgL_list1579z00_1817 =
														MAKE_YOUNG_PAIR(BGl_string1921z00zzast_glozd2defzd2,
														BNIL);
													((obj_t)
														BGl_mismatchzd2errorzd2zzast_glozd2defzd2
														(BgL_oldz00_19, BgL_srczd2expzd2_24,
															BgL_list1579z00_1817));
												}
										}
									else
										{	/* Ast/glo_def.scm 155 */
											obj_t BgL_list1585z00_1820;

											BgL_list1585z00_1820 =
												MAKE_YOUNG_PAIR(BGl_string1919z00zzast_glozd2defzd2,
												BNIL);
											((obj_t)
												BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_19,
													BgL_srczd2expzd2_24, BgL_list1585z00_1820));
										}
								}
							else
								{	/* Ast/glo_def.scm 153 */
									obj_t BgL_arg1592z00_1823;

									{	/* Ast/glo_def.scm 153 */
										obj_t BgL_arg1597z00_1825;

										BgL_arg1597z00_1825 =
											(((BgL_sfunz00_bglt) COBJECT(
													((BgL_sfunz00_bglt) BgL_oldzd2valuezd2_1744)))->
											BgL_classz00);
										{	/* Ast/glo_def.scm 152 */
											obj_t BgL_list1598z00_1826;

											{	/* Ast/glo_def.scm 152 */
												obj_t BgL_arg1599z00_1827;

												BgL_arg1599z00_1827 =
													MAKE_YOUNG_PAIR(BgL_classz00_23, BNIL);
												BgL_list1598z00_1826 =
													MAKE_YOUNG_PAIR(BgL_arg1597z00_1825,
													BgL_arg1599z00_1827);
											}
											BgL_arg1592z00_1823 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string1922z00zzast_glozd2defzd2,
												BgL_list1598z00_1826);
										}
									}
									{	/* Ast/glo_def.scm 151 */
										obj_t BgL_list1593z00_1824;

										BgL_list1593z00_1824 =
											MAKE_YOUNG_PAIR(BgL_arg1592z00_1823, BNIL);
										((obj_t)
											BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_19,
												BgL_srczd2expzd2_24, BgL_list1593z00_1824));
									}
								}
						}
					else
						{	/* Ast/glo_def.scm 148 */
							obj_t BgL_list1605z00_1829;

							BgL_list1605z00_1829 =
								MAKE_YOUNG_PAIR(BGl_string1923z00zzast_glozd2defzd2, BNIL);
							((obj_t)
								BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_19,
									BgL_srczd2expzd2_24, BgL_list1605z00_1829));
						}
				}
				return BgL_oldz00_19;
			}
		}

	}



/* def-global-scnst! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(obj_t BgL_idz00_25,
		obj_t BgL_modulez00_26, obj_t BgL_nodez00_27, obj_t BgL_classz00_28,
		obj_t BgL_locz00_29)
	{
		{	/* Ast/glo_def.scm 211 */
			BGl_enterzd2functionzd2zztools_errorz00(BgL_idz00_25);
			{	/* Ast/glo_def.scm 213 */
				obj_t BgL_idzd2typezd2_2267;

				BgL_idzd2typezd2_2267 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_25, BgL_locz00_29);
				{	/* Ast/glo_def.scm 213 */
					obj_t BgL_idzd2idzd2_2268;

					BgL_idzd2idzd2_2268 = CAR(BgL_idzd2typezd2_2267);
					{	/* Ast/glo_def.scm 214 */
						obj_t BgL_oldzd2globalzd2_2269;

						BgL_oldzd2globalzd2_2269 =
							BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idzd2idzd2_2268,
							BgL_modulez00_26);
						{	/* Ast/glo_def.scm 215 */
							BgL_globalz00_bglt BgL_globalz00_2270;

							BgL_globalz00_2270 =
								BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2
								(BgL_idz00_25, BFALSE, BgL_modulez00_26,
								CNST_TABLE_REF(((long) 2)), BgL_nodez00_27, BgL_classz00_28,
								BgL_locz00_29);
							{	/* Ast/glo_def.scm 216 */

								BGl_removezd2varzd2fromz12z12zzast_removez00(CNST_TABLE_REF((
											(long) 4)), ((BgL_variablez00_bglt) BgL_globalz00_2270));
								BGl_leavezd2functionzd2zztools_errorz00();
								return BgL_globalz00_2270;
							}
						}
					}
				}
			}
		}

	}



/* &def-global-scnst! */
	BgL_globalz00_bglt BGl_z62defzd2globalzd2scnstz12z70zzast_glozd2defzd2(obj_t
		BgL_envz00_2352, obj_t BgL_idz00_2353, obj_t BgL_modulez00_2354,
		obj_t BgL_nodez00_2355, obj_t BgL_classz00_2356, obj_t BgL_locz00_2357)
	{
		{	/* Ast/glo_def.scm 211 */
			return
				BGl_defzd2globalzd2scnstz12z12zzast_glozd2defzd2(BgL_idz00_2353,
				BgL_modulez00_2354, BgL_nodez00_2355, BgL_classz00_2356,
				BgL_locz00_2357);
		}

	}



/* def-global-svar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(obj_t BgL_idz00_30,
		obj_t BgL_modulez00_31, obj_t BgL_srczd2expzd2_32, obj_t BgL_remz00_33)
	{
		{	/* Ast/glo_def.scm 227 */
			{	/* Ast/glo_def.scm 228 */
				obj_t BgL_locz00_1834;

				BgL_locz00_1834 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srczd2expzd2_32);
				{	/* Ast/glo_def.scm 228 */
					obj_t BgL_idzd2typezd2_1835;

					BgL_idzd2typezd2_1835 =
						BGl_parsezd2idzd2zzast_identz00(BgL_idz00_30, BgL_locz00_1834);
					{	/* Ast/glo_def.scm 229 */
						obj_t BgL_idzd2idzd2_1836;

						BgL_idzd2idzd2_1836 = CAR(BgL_idzd2typezd2_1835);
						{	/* Ast/glo_def.scm 230 */
							obj_t BgL_oldzd2globalzd2_1837;

							BgL_oldzd2globalzd2_1837 =
								BGl_findzd2globalzf2modulez20zzast_envz00(BgL_idzd2idzd2_1836,
								BgL_modulez00_31);
							{	/* Ast/glo_def.scm 231 */
								obj_t BgL_importz00_1838;

								{	/* Ast/glo_def.scm 232 */
									bool_t BgL_test1993z00_2674;

									if (
										((long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3)))
										{	/* Ast/glo_def.scm 233 */
											obj_t BgL_arg1644z00_1858;

											{	/* Ast/glo_def.scm 233 */
												obj_t BgL_arg1652z00_1859;

												BgL_arg1652z00_1859 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_arg1644z00_1858 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1652z00_1859)))->
													BgL_debugzd2supportzd2);
											}
											BgL_test1993z00_2674 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 0)), BgL_arg1644z00_1858));
										}
									else
										{	/* Ast/glo_def.scm 232 */
											BgL_test1993z00_2674 = ((bool_t) 0);
										}
									if (BgL_test1993z00_2674)
										{	/* Ast/glo_def.scm 232 */
											BgL_importz00_1838 = CNST_TABLE_REF(((long) 1));
										}
									else
										{	/* Ast/glo_def.scm 232 */
											BgL_importz00_1838 = CNST_TABLE_REF(((long) 2));
								}}
								{	/* Ast/glo_def.scm 232 */
									obj_t BgL_typez00_1839;

									{	/* Ast/glo_def.scm 236 */
										obj_t BgL_typez00_1847;

										BgL_typez00_1847 = CDR(BgL_idzd2typezd2_1835);
										if (
											((((BgL_typez00_bglt) COBJECT(
															((BgL_typez00_bglt) BgL_typez00_1847)))->
													BgL_classz00) == CNST_TABLE_REF(((long) 5))))
											{	/* Ast/glo_def.scm 239 */
												BgL_typez00_1839 = BgL_typez00_1847;
											}
										else
											{	/* Ast/glo_def.scm 239 */
												BgL_typez00_1839 =
													BGl_userzd2errorzd2zztools_errorz00
													(BgL_idzd2idzd2_1836,
													BGl_string1924z00zzast_glozd2defzd2,
													BGl_shapez00zztools_shapez00(BgL_typez00_1847), BNIL);
											}
									}
									{	/* Ast/glo_def.scm 236 */
										BgL_globalz00_bglt BgL_globalz00_1840;

										if (BGl_isazf3zf3zz__objectz00(BgL_oldzd2globalzd2_1837,
												BGl_globalz00zzast_varz00))
											{	/* Ast/glo_def.scm 245 */
												BgL_globalz00_1840 =
													BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(
													((BgL_globalz00_bglt) BgL_oldzd2globalzd2_1837),
													BgL_typez00_1839, BgL_srczd2expzd2_32);
											}
										else
											{	/* Ast/glo_def.scm 245 */
												BgL_globalz00_1840 =
													BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2
													(BgL_idz00_30, BFALSE, BgL_modulez00_31,
													BgL_importz00_1838, BgL_srczd2expzd2_32, BFALSE);
											}
										{	/* Ast/glo_def.scm 244 */
											obj_t BgL_defzd2loczd2_1841;

											BgL_defzd2loczd2_1841 =
												BGl_findzd2locationzd2zztools_locationz00
												(BgL_srczd2expzd2_32);
											{	/* Ast/glo_def.scm 250 */

												{	/* Ast/glo_def.scm 300 */
													BgL_typez00_bglt BgL_oldzd2typezd2_2283;

													BgL_oldzd2typezd2_2283 =
														(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_globalz00_1840)))->
														BgL_typez00);
													if ((((obj_t) BgL_oldzd2typezd2_2283) ==
															BGl_za2_za2z00zztype_cachez00))
														{	/* Ast/glo_def.scm 301 */
															((((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				BgL_globalz00_1840)))->BgL_typez00) =
																((BgL_typez00_bglt) ((BgL_typez00_bglt)
																		BgL_typez00_1839)), BUNSPEC);
														}
													else
														{	/* Ast/glo_def.scm 301 */
															BFALSE;
														}
												}
												{	/* Ast/glo_def.scm 254 */
													bool_t BgL_test1998z00_2708;

													{	/* Ast/glo_def.scm 254 */
														BgL_valuez00_bglt BgL_arg1612z00_1845;

														BgL_arg1612z00_1845 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_globalz00_1840)))->BgL_valuez00);
														{	/* Ast/glo_def.scm 254 */
															bool_t BgL_res1898z00_2289;

															BgL_res1898z00_2289 =
																BGl_isazf3zf3zz__objectz00(
																((obj_t) BgL_arg1612z00_1845),
																BGl_svarz00zzast_varz00);
															BgL_test1998z00_2708 = BgL_res1898z00_2289;
														}
													}
													if (BgL_test1998z00_2708)
														{	/* Ast/glo_def.scm 256 */
															BgL_valuez00_bglt BgL_arg1611z00_1844;

															BgL_arg1611z00_1844 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			BgL_globalz00_1840)))->BgL_valuez00);
															((((BgL_svarz00_bglt) COBJECT(((BgL_svarz00_bglt)
																				BgL_arg1611z00_1844)))->BgL_locz00) =
																((obj_t) BgL_defzd2loczd2_1841), BUNSPEC);
														}
													else
														{	/* Ast/glo_def.scm 254 */
															BFALSE;
														}
												}
												BGl_removezd2varzd2fromz12z12zzast_removez00
													(BgL_remz00_33,
													((BgL_variablez00_bglt) BgL_globalz00_1840));
												return BgL_globalz00_1840;
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



/* &def-global-svar! */
	BgL_globalz00_bglt BGl_z62defzd2globalzd2svarz12z70zzast_glozd2defzd2(obj_t
		BgL_envz00_2358, obj_t BgL_idz00_2359, obj_t BgL_modulez00_2360,
		obj_t BgL_srczd2expzd2_2361, obj_t BgL_remz00_2362)
	{
		{	/* Ast/glo_def.scm 227 */
			return
				BGl_defzd2globalzd2svarz12z12zzast_glozd2defzd2(BgL_idz00_2359,
				BgL_modulez00_2360, BgL_srczd2expzd2_2361, BgL_remz00_2362);
		}

	}



/* check-svar-definition */
	BgL_globalz00_bglt
		BGl_checkzd2svarzd2definitionz00zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_oldz00_34, obj_t BgL_typez00_35, obj_t BgL_srczd2expzd2_36)
	{
		{	/* Ast/glo_def.scm 264 */
			{	/* Ast/glo_def.scm 265 */
				BgL_valuez00_bglt BgL_oldzd2valuezd2_1860;

				BgL_oldzd2valuezd2_1860 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_oldz00_34)))->BgL_valuez00);
				{	/* Ast/glo_def.scm 267 */
					bool_t BgL_test1999z00_2722;

					{	/* Ast/glo_def.scm 267 */
						bool_t BgL_res1899z00_2293;

						BgL_res1899z00_2293 =
							BGl_isazf3zf3zz__objectz00(
							((obj_t) BgL_oldzd2valuezd2_1860), BGl_svarz00zzast_varz00);
						BgL_test1999z00_2722 = BgL_res1899z00_2293;
					}
					if (BgL_test1999z00_2722)
						{	/* Ast/glo_def.scm 269 */
							bool_t BgL_test2000z00_2725;

							{	/* Ast/glo_def.scm 269 */
								BgL_typez00_bglt BgL_arg1667z00_1865;

								BgL_arg1667z00_1865 =
									(((BgL_variablez00_bglt) COBJECT(
											((BgL_variablez00_bglt) BgL_oldz00_34)))->BgL_typez00);
								BgL_test2000z00_2725 =
									BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(((bool_t) 0),
									((BgL_typez00_bglt) BgL_typez00_35), BgL_arg1667z00_1865);
							}
							if (BgL_test2000z00_2725)
								{	/* Ast/glo_def.scm 269 */
									return BgL_oldz00_34;
								}
							else
								{	/* Ast/glo_def.scm 270 */
									obj_t BgL_list1664z00_1864;

									BgL_list1664z00_1864 =
										MAKE_YOUNG_PAIR(BGl_string1925z00zzast_glozd2defzd2, BNIL);
									return
										BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_34,
										BgL_srczd2expzd2_36, BgL_list1664z00_1864);
								}
						}
					else
						{	/* Ast/glo_def.scm 268 */
							obj_t BgL_list1668z00_1866;

							BgL_list1668z00_1866 =
								MAKE_YOUNG_PAIR(BGl_string1926z00zzast_glozd2defzd2, BNIL);
							return
								BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_oldz00_34,
								BgL_srczd2expzd2_36, BgL_list1668z00_1866);
						}
				}
			}
		}

	}



/* compatible-type? */
	bool_t BGl_compatiblezd2typezf3z21zzast_glozd2defzd2(bool_t BgL_subzf3zf3_37,
		BgL_typez00_bglt BgL_newz00_38, BgL_typez00_bglt BgL_oldz00_39)
	{
		{	/* Ast/glo_def.scm 277 */
			{	/* Ast/glo_def.scm 278 */
				bool_t BgL__ortest_1109z00_1867;

				BgL__ortest_1109z00_1867 =
					(((obj_t) BgL_newz00_38) == BGl_za2_za2z00zztype_cachez00);
				if (BgL__ortest_1109z00_1867)
					{	/* Ast/glo_def.scm 278 */
						return BgL__ortest_1109z00_1867;
					}
				else
					{	/* Ast/glo_def.scm 279 */
						bool_t BgL__ortest_1110z00_1868;

						BgL__ortest_1110z00_1868 =
							(((obj_t) BgL_oldz00_39) == ((obj_t) BgL_newz00_38));
						if (BgL__ortest_1110z00_1868)
							{	/* Ast/glo_def.scm 279 */
								return BgL__ortest_1110z00_1868;
							}
						else
							{	/* Ast/glo_def.scm 279 */
								if (BgL_subzf3zf3_37)
									{	/* Ast/glo_def.scm 281 */
										bool_t BgL__ortest_1112z00_1870;

										BgL__ortest_1112z00_1870 =
											BGl_typezd2subclasszf3z21zzobject_classz00(BgL_newz00_38,
											BgL_oldz00_39);
										if (BgL__ortest_1112z00_1870)
											{	/* Ast/glo_def.scm 281 */
												return BgL__ortest_1112z00_1870;
											}
										else
											{	/* Ast/glo_def.scm 282 */
												bool_t BgL_test2005z00_2744;

												{	/* Ast/glo_def.scm 282 */
													bool_t BgL_res1900z00_2295;

													BgL_res1900z00_2295 =
														BGl_isazf3zf3zz__objectz00(
														((obj_t) BgL_newz00_38),
														BGl_tclassz00zzobject_classz00);
													BgL_test2005z00_2744 = BgL_res1900z00_2295;
												}
												if (BgL_test2005z00_2744)
													{	/* Ast/glo_def.scm 282 */
														return
															(
															((obj_t) BgL_oldz00_39) ==
															BGl_za2objza2z00zztype_cachez00);
													}
												else
													{	/* Ast/glo_def.scm 282 */
														return ((bool_t) 0);
													}
											}
									}
								else
									{	/* Ast/glo_def.scm 280 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}

	}



/* mismatch-error */
	BgL_globalz00_bglt
		BGl_mismatchzd2errorzd2zzast_glozd2defzd2(BgL_globalz00_bglt
		BgL_globalz00_40, obj_t BgL_srczd2expzd2_41, obj_t BgL_addzd2msgzd2_42)
	{
		{	/* Ast/glo_def.scm 287 */
			{	/* Ast/glo_def.scm 289 */
				obj_t BgL_arg1669z00_1873;
				obj_t BgL_arg1672z00_1874;

				if (PAIRP(BgL_addzd2msgzd2_42))
					{	/* Ast/glo_def.scm 289 */
						BgL_arg1669z00_1873 =
							string_append_3(BGl_string1927z00zzast_glozd2defzd2,
							BGl_string1928z00zzast_glozd2defzd2, CAR(BgL_addzd2msgzd2_42));
					}
				else
					{	/* Ast/glo_def.scm 289 */
						BgL_arg1669z00_1873 = BGl_string1927z00zzast_glozd2defzd2;
					}
				BgL_arg1672z00_1874 =
					BGl_shapez00zztools_shapez00(
					(((BgL_globalz00_bglt) COBJECT(BgL_globalz00_40))->BgL_srcz00));
				{	/* Ast/glo_def.scm 289 */
					obj_t BgL_list1673z00_1875;

					BgL_list1673z00_1875 =
						MAKE_YOUNG_PAIR(((obj_t) BgL_globalz00_40), BNIL);
					return
						((BgL_globalz00_bglt)
						BGl_userzd2errorzd2zztools_errorz00(BgL_arg1669z00_1873,
							BgL_arg1672z00_1874, BgL_srczd2expzd2_41, BgL_list1673z00_1875));
				}
			}
		}

	}



/* check-method-definition */
	BGL_EXPORTED_DEF bool_t
		BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2(obj_t BgL_idz00_45,
		obj_t BgL_argsz00_46, obj_t BgL_localsz00_47, obj_t BgL_srcz00_48)
	{
		{	/* Ast/glo_def.scm 307 */
			{	/* Ast/glo_def.scm 308 */
				obj_t BgL_locz00_1881;

				BgL_locz00_1881 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_48);
				{	/* Ast/glo_def.scm 308 */
					BgL_typez00_bglt BgL_typezd2reszd2_1882;

					BgL_typezd2reszd2_1882 =
						BGl_typezd2ofzd2idz00zzast_identz00(BgL_idz00_45, BgL_locz00_1881);
					{	/* Ast/glo_def.scm 309 */
						obj_t BgL_methodzd2idzd2_1883;

						BgL_methodzd2idzd2_1883 =
							BGl_idzd2ofzd2idz00zzast_identz00(BgL_idz00_45, BgL_locz00_1881);
						{	/* Ast/glo_def.scm 310 */
							obj_t BgL_genericz00_1884;

							BgL_genericz00_1884 =
								BGl_findzd2globalzd2zzast_envz00(BgL_idz00_45, BNIL);
							{	/* Ast/glo_def.scm 311 */

								if (NULLP(BgL_argsz00_46))
									{	/* Ast/glo_def.scm 313 */
										BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_45,
											BGl_shapez00zztools_shapez00(BgL_srcz00_48),
											BGl_string1929z00zzast_glozd2defzd2, BNIL);
										return ((bool_t) 1);
									}
								else
									{	/* Ast/glo_def.scm 313 */
										if (BGl_isazf3zf3zz__objectz00(BgL_genericz00_1884,
												BGl_globalz00zzast_varz00))
											{	/* Ast/glo_def.scm 321 */
												BgL_valuez00_bglt BgL_genericzd2valuezd2_1889;

												BgL_genericzd2valuezd2_1889 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_globalz00_bglt) BgL_genericz00_1884))))->
													BgL_valuez00);
												{	/* Ast/glo_def.scm 323 */
													bool_t BgL_test2009z00_2772;

													{	/* Ast/glo_def.scm 323 */
														bool_t BgL_res1904z00_2307;

														BgL_res1904z00_2307 =
															BGl_isazf3zf3zz__objectz00(
															((obj_t) BgL_genericzd2valuezd2_1889),
															BGl_sfunz00zzast_varz00);
														BgL_test2009z00_2772 = BgL_res1904z00_2307;
													}
													if (BgL_test2009z00_2772)
														{	/* Ast/glo_def.scm 323 */
															if (
																((((BgL_sfunz00_bglt) COBJECT(
																				((BgL_sfunz00_bglt)
																					BgL_genericzd2valuezd2_1889)))->
																		BgL_classz00) ==
																	CNST_TABLE_REF(((long) 3))))
																{	/* Ast/glo_def.scm 329 */
																	bool_t BgL_test2011z00_2780;

																	{	/* Ast/glo_def.scm 329 */
																		long BgL_arg1746z00_1938;
																		long BgL_arg1747z00_1939;

																		BgL_arg1746z00_1938 =
																			(((BgL_funz00_bglt) COBJECT(
																					((BgL_funz00_bglt)
																						((BgL_sfunz00_bglt)
																							BgL_genericzd2valuezd2_1889))))->
																			BgL_arityz00);
																		BgL_arg1747z00_1939 =
																			BGl_globalzd2arityzd2zztools_argsz00
																			(BgL_argsz00_46);
																		BgL_test2011z00_2780 =
																			(BgL_arg1746z00_1938 ==
																			BgL_arg1747z00_1939);
																	}
																	if (BgL_test2011z00_2780)
																		{	/* Ast/glo_def.scm 332 */
																			bool_t BgL_test2012z00_2786;

																			{	/* Ast/glo_def.scm 332 */
																				BgL_typez00_bglt BgL_arg1744z00_1936;

																				BgL_arg1744z00_1936 =
																					(((BgL_variablez00_bglt) COBJECT(
																							((BgL_variablez00_bglt)
																								((BgL_globalz00_bglt)
																									BgL_genericz00_1884))))->
																					BgL_typez00);
																				BgL_test2012z00_2786 =
																					BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
																					(((bool_t) 1), BgL_typezd2reszd2_1882,
																					BgL_arg1744z00_1936);
																			}
																			if (BgL_test2012z00_2786)
																				{	/* Ast/glo_def.scm 337 */
																					obj_t BgL__ortest_1114z00_1898;

																					{	/* Ast/glo_def.scm 337 */
																						obj_t BgL_g1116z00_1899;

																						{	/* Ast/glo_def.scm 338 */
																							obj_t BgL_l1312z00_1919;

																							BgL_l1312z00_1919 =
																								(((BgL_sfunz00_bglt) COBJECT(
																										((BgL_sfunz00_bglt)
																											BgL_genericzd2valuezd2_1889)))->
																								BgL_argsz00);
																							if (NULLP(BgL_l1312z00_1919))
																								{	/* Ast/glo_def.scm 338 */
																									BgL_g1116z00_1899 = BNIL;
																								}
																							else
																								{	/* Ast/glo_def.scm 338 */
																									obj_t BgL_head1314z00_1921;

																									{	/* Ast/glo_def.scm 338 */
																										obj_t BgL_res1907z00_2316;

																										BgL_res1907z00_2316 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1314z00_1921 =
																											BgL_res1907z00_2316;
																									}
																									{
																										obj_t BgL_l1312z00_1923;
																										obj_t BgL_tail1315z00_1924;

																										BgL_l1312z00_1923 =
																											BgL_l1312z00_1919;
																										BgL_tail1315z00_1924 =
																											BgL_head1314z00_1921;
																									BgL_zc3z04anonymousza31733ze3z87_1925:
																										if (NULLP
																											(BgL_l1312z00_1923))
																											{	/* Ast/glo_def.scm 338 */
																												BgL_g1116z00_1899 =
																													CDR
																													(BgL_head1314z00_1921);
																											}
																										else
																											{	/* Ast/glo_def.scm 338 */
																												obj_t
																													BgL_newtail1316z00_1927;
																												{	/* Ast/glo_def.scm 338 */
																													obj_t
																														BgL_arg1739z00_1929;
																													{	/* Ast/glo_def.scm 338 */
																														obj_t BgL_az00_1930;

																														BgL_az00_1930 =
																															CAR(
																															((obj_t)
																																BgL_l1312z00_1923));
																														if (BGl_isazf3zf3zz__objectz00(BgL_az00_1930, BGl_localz00zzast_varz00))
																															{	/* Ast/glo_def.scm 340 */
																																BgL_arg1739z00_1929
																																	=
																																	((obj_t) ((
																																			(BgL_variablez00_bglt)
																																			COBJECT((
																																					(BgL_variablez00_bglt)
																																					((BgL_localz00_bglt) BgL_az00_1930))))->BgL_typez00));
																															}
																														else
																															{	/* Ast/glo_def.scm 340 */
																																if (BGl_isazf3zf3zz__objectz00(BgL_az00_1930, BGl_typez00zztype_typez00))
																																	{	/* Ast/glo_def.scm 342 */
																																		BgL_arg1739z00_1929
																																			=
																																			BgL_az00_1930;
																																	}
																																else
																																	{	/* Ast/glo_def.scm 342 */
																																		BgL_arg1739z00_1929
																																			=
																																			BGl_internalzd2errorzd2zztools_errorz00
																																			(BGl_string1914z00zzast_glozd2defzd2,
																																			BGl_string1915z00zzast_glozd2defzd2,
																																			BGl_shapez00zztools_shapez00
																																			(BgL_az00_1930));
																																	}
																															}
																													}
																													{	/* Ast/glo_def.scm 338 */
																														obj_t
																															BgL_res1911z00_2323;
																														BgL_res1911z00_2323
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1739z00_1929,
																															BNIL);
																														BgL_newtail1316z00_1927
																															=
																															BgL_res1911z00_2323;
																													}
																												}
																												SET_CDR
																													(BgL_tail1315z00_1924,
																													BgL_newtail1316z00_1927);
																												{	/* Ast/glo_def.scm 338 */
																													obj_t
																														BgL_arg1738z00_1928;
																													BgL_arg1738z00_1928 =
																														CDR(((obj_t)
																															BgL_l1312z00_1923));
																													{
																														obj_t
																															BgL_tail1315z00_2816;
																														obj_t
																															BgL_l1312z00_2815;
																														BgL_l1312z00_2815 =
																															BgL_arg1738z00_1928;
																														BgL_tail1315z00_2816
																															=
																															BgL_newtail1316z00_1927;
																														BgL_tail1315z00_1924
																															=
																															BgL_tail1315z00_2816;
																														BgL_l1312z00_1923 =
																															BgL_l1312z00_2815;
																														goto
																															BgL_zc3z04anonymousza31733ze3z87_1925;
																													}
																												}
																											}
																									}
																								}
																						}
																						{
																							obj_t BgL_localsz00_1901;
																							obj_t BgL_typesz00_1902;
																							bool_t BgL_subzf3zf3_1903;

																							BgL_localsz00_1901 =
																								BgL_localsz00_47;
																							BgL_typesz00_1902 =
																								BgL_g1116z00_1899;
																							BgL_subzf3zf3_1903 = ((bool_t) 1);
																						BgL_zc3z04anonymousza31706ze3z87_1904:
																							if (NULLP
																								(BgL_localsz00_1901))
																								{	/* Ast/glo_def.scm 352 */
																									BgL__ortest_1114z00_1898 =
																										BTRUE;
																								}
																							else
																								{	/* Ast/glo_def.scm 352 */
																									if (NULLP(BgL_typesz00_1902))
																										{	/* Ast/glo_def.scm 355 */
																											obj_t
																												BgL_list1710z00_1907;
																											BgL_list1710z00_1907 =
																												MAKE_YOUNG_PAIR
																												(BGl_string1920z00zzast_glozd2defzd2,
																												BNIL);
																											BgL__ortest_1114z00_1898 =
																												((obj_t)
																												BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																												(((BgL_globalz00_bglt)
																														BgL_genericz00_1884),
																													BgL_srcz00_48,
																													BgL_list1710z00_1907));
																										}
																									else
																										{	/* Ast/glo_def.scm 358 */
																											bool_t
																												BgL_test2019z00_2825;
																											{	/* Ast/glo_def.scm 359 */
																												BgL_typez00_bglt
																													BgL_arg1728z00_1915;
																												obj_t
																													BgL_arg1729z00_1916;
																												BgL_arg1728z00_1915 =
																													(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_localz00_bglt) CAR(((obj_t) BgL_localsz00_1901))))))->BgL_typez00);
																												BgL_arg1729z00_1916 =
																													CAR(((obj_t)
																														BgL_typesz00_1902));
																												BgL_test2019z00_2825 =
																													BGl_compatiblezd2typezf3z21zzast_glozd2defzd2
																													(BgL_subzf3zf3_1903,
																													BgL_arg1728z00_1915,
																													((BgL_typez00_bglt)
																														BgL_arg1729z00_1916));
																											}
																											if (BgL_test2019z00_2825)
																												{	/* Ast/glo_def.scm 366 */
																													obj_t
																														BgL_arg1725z00_1912;
																													obj_t
																														BgL_arg1726z00_1913;
																													BgL_arg1725z00_1912 =
																														CDR(((obj_t)
																															BgL_localsz00_1901));
																													BgL_arg1726z00_1913 =
																														CDR(((obj_t)
																															BgL_typesz00_1902));
																													{
																														bool_t
																															BgL_subzf3zf3_2841;
																														obj_t
																															BgL_typesz00_2840;
																														obj_t
																															BgL_localsz00_2839;
																														BgL_localsz00_2839 =
																															BgL_arg1725z00_1912;
																														BgL_typesz00_2840 =
																															BgL_arg1726z00_1913;
																														BgL_subzf3zf3_2841 =
																															((bool_t) 0);
																														BgL_subzf3zf3_1903 =
																															BgL_subzf3zf3_2841;
																														BgL_typesz00_1902 =
																															BgL_typesz00_2840;
																														BgL_localsz00_1901 =
																															BgL_localsz00_2839;
																														goto
																															BgL_zc3z04anonymousza31706ze3z87_1904;
																													}
																												}
																											else
																												{	/* Ast/glo_def.scm 358 */
																													{	/* Ast/glo_def.scm 361 */
																														obj_t
																															BgL_list1727z00_1914;
																														BgL_list1727z00_1914
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string1920z00zzast_glozd2defzd2,
																															BNIL);
																														BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																															(((BgL_globalz00_bglt) BgL_genericz00_1884), BgL_srcz00_48, BgL_list1727z00_1914);
																													}
																													BgL__ortest_1114z00_1898
																														= BFALSE;
																												}
																										}
																								}
																						}
																					}
																					if (CBOOL(BgL__ortest_1114z00_1898))
																						{	/* Ast/glo_def.scm 337 */
																							return
																								CBOOL(BgL__ortest_1114z00_1898);
																						}
																					else
																						{	/* Ast/glo_def.scm 337 */
																							return ((bool_t) 1);
																						}
																				}
																			else
																				{	/* Ast/glo_def.scm 332 */
																					{	/* Ast/glo_def.scm 333 */
																						obj_t BgL_list1743z00_1935;

																						BgL_list1743z00_1935 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1921z00zzast_glozd2defzd2,
																							BNIL);
																						BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																							(((BgL_globalz00_bglt)
																								BgL_genericz00_1884),
																							BgL_srcz00_48,
																							BgL_list1743z00_1935);
																					}
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Ast/glo_def.scm 329 */
																			{	/* Ast/glo_def.scm 330 */
																				obj_t BgL_list1745z00_1937;

																				BgL_list1745z00_1937 =
																					MAKE_YOUNG_PAIR
																					(BGl_string1919z00zzast_glozd2defzd2,
																					BNIL);
																				BGl_mismatchzd2errorzd2zzast_glozd2defzd2
																					(((BgL_globalz00_bglt)
																						BgL_genericz00_1884), BgL_srcz00_48,
																					BgL_list1745z00_1937);
																			}
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Ast/glo_def.scm 326 */
																	{	/* Ast/glo_def.scm 327 */
																		obj_t BgL_list1748z00_1940;

																		BgL_list1748z00_1940 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1930z00zzast_glozd2defzd2,
																			BNIL);
																		BGl_mismatchzd2errorzd2zzast_glozd2defzd2((
																				(BgL_globalz00_bglt)
																				BgL_genericz00_1884), BgL_srcz00_48,
																			BgL_list1748z00_1940);
																	}
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ast/glo_def.scm 323 */
															{	/* Ast/glo_def.scm 324 */
																obj_t BgL_list1755z00_1942;

																BgL_list1755z00_1942 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1930z00zzast_glozd2defzd2, BNIL);
																BGl_mismatchzd2errorzd2zzast_glozd2defzd2((
																		(BgL_globalz00_bglt) BgL_genericz00_1884),
																	BgL_srcz00_48, BgL_list1755z00_1942);
															}
															return ((bool_t) 0);
														}
												}
											}
										else
											{	/* Ast/glo_def.scm 316 */
												return ((bool_t) 1);
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &check-method-definition */
	obj_t BGl_z62checkzd2methodzd2definitionz62zzast_glozd2defzd2(obj_t
		BgL_envz00_2363, obj_t BgL_idz00_2364, obj_t BgL_argsz00_2365,
		obj_t BgL_localsz00_2366, obj_t BgL_srcz00_2367)
	{
		{	/* Ast/glo_def.scm 307 */
			return
				BBOOL(BGl_checkzd2methodzd2definitionz00zzast_glozd2defzd2
				(BgL_idz00_2364, BgL_argsz00_2365, BgL_localsz00_2366,
					BgL_srcz00_2367));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2defzd2()
	{
		{	/* Ast/glo_def.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzast_removez00(((long) 383247839),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1931z00zzast_glozd2defzd2));
		}

	}

#ifdef __cplusplus
}
#endif
