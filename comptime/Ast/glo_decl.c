/*===========================================================================*/
/*   (Ast/glo_decl.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Ast/glo_decl.scm) */
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

	typedef struct BgL_svarz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_locz00;
	}              *BgL_svarz00_bglt;

	typedef struct BgL_scnstz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_nodez00;
		obj_t BgL_classz00;
		obj_t BgL_locz00;
	}               *BgL_scnstz00_bglt;

	typedef struct BgL_cvarz00_bgl
	{
		header_t header;
		obj_t widening;
		bool_t BgL_macrozf3zf3;
	}              *BgL_cvarz00_bglt;


	static obj_t BGl_symbol1853z00zzast_glozd2declzd2 = BUNSPEC;
	extern obj_t BGl_za2pairzd2nilza2zd2zztype_cachez00;
	extern obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t, obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_fastzd2idzd2ofzd2idzd2zzast_identz00(obj_t, obj_t);
	extern obj_t BGl_dssslzd2formalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzast_glozd2declzd2();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_dropz00zz__r4_pairs_and_lists_6_3z00(obj_t, long);
	extern bool_t BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzast_glozd2declzd2(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzast_glozd2declzd2();
	static BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2scnstz12z70zzast_glozd2declzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2_za2z00zztype_cachez00;
	extern obj_t BGl_svarz00zzast_varz00;
	extern obj_t BGl_za2objza2z00zztype_cachez00;
	extern BgL_typez00_bglt
		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00(obj_t, obj_t,
		obj_t);
	static BgL_globalz00_bglt
		BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzast_glozd2declzd2();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopze70ze7zzast_glozd2declzd2(obj_t, obj_t);
	extern obj_t BGl_cvarz00zzast_varz00;
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	extern obj_t BGl_dssslzd2keyszd2zztools_dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzast_glozd2declzd2 = BUNSPEC;
	extern obj_t BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern BgL_globalz00_bglt BGl_bindzd2globalz12zc0zzast_envz00(obj_t, obj_t,
		obj_t, BgL_valuez00_bglt, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzast_glozd2declzd2();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	static BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2cfunz12z70zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2sfunz12z70zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	extern bool_t
		BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_localz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_dssslz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	static BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2cvarz12z70zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2svarz12z70zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzast_glozd2declzd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2();
	extern obj_t BGl_scnstz00zzast_varz00;
	extern long BGl_globalzd2arityzd2zztools_argsz00(obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	extern obj_t BGl_dssslzd2optionalszd2zztools_dssslz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2();
	static BgL_globalz00_bglt
		BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern BgL_typez00_bglt
		BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[11];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2scnstz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl_za762declareza7d2glo1863z00,
		BGl_z62declarezd2globalzd2scnstz12z70zzast_glozd2declzd2, 0L, BUNSPEC, 7);
	      DEFINE_STRING(BGl_string1854z00zzast_glozd2declzd2,
		BgL_bgl_string1854za700za7za7a1864za7, "", 0);
	      DEFINE_STRING(BGl_string1855z00zzast_glozd2declzd2,
		BgL_bgl_string1855za700za7za7a1865za7, "Illegal nary argument type", 26);
	      DEFINE_STRING(BGl_string1856z00zzast_glozd2declzd2,
		BgL_bgl_string1856za700za7za7a1866za7, "Illegal type for global variable",
		32);
	      DEFINE_STRING(BGl_string1857z00zzast_glozd2declzd2,
		BgL_bgl_string1857za700za7za7a1867za7, "ast_glo-decl", 12);
	      DEFINE_STRING(BGl_string1858z00zzast_glozd2declzd2,
		BgL_bgl_string1858za700za7za7a1868za7,
		"foreign a-cnst write read (export import) bigloo sgfun \077\077? export bdb static ",
		77);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2cfunz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl_za762declareza7d2glo1869z00,
		BGl_z62declarezd2globalzd2cfunz12z70zzast_glozd2declzd2, 0L, BUNSPEC, 10);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2sfunz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl_za762declareza7d2glo1870z00,
		BGl_z62declarezd2globalzd2sfunz12z70zzast_glozd2declzd2, 0L, BUNSPEC, 8);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2cvarz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl_za762declareza7d2glo1871z00,
		BGl_z62declarezd2globalzd2cvarz12z70zzast_glozd2declzd2, 0L, BUNSPEC, 7);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_declarezd2globalzd2svarz12zd2envzc0zzast_glozd2declzd2,
		BgL_bgl_za762declareza7d2glo1872z00,
		BGl_z62declarezd2globalzd2svarz12z70zzast_glozd2declzd2, 0L, BUNSPEC, 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1853z00zzast_glozd2declzd2));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzast_glozd2declzd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long
		BgL_checksumz00_2194, char *BgL_fromz00_2195)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzast_glozd2declzd2))
				{
					BGl_requirezd2initializa7ationz75zzast_glozd2declzd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzast_glozd2declzd2();
					BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2();
					BGl_cnstzd2initzd2zzast_glozd2declzd2();
					BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2();
					return BGl_methodzd2initzd2zzast_glozd2declzd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "ast_glo-decl");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"ast_glo-decl");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			{	/* Ast/glo_decl.scm 17 */
				obj_t BgL_cportz00_2181;

				{	/* Ast/glo_decl.scm 17 */
					obj_t BgL_stringz00_2189;

					BgL_stringz00_2189 = BGl_string1858z00zzast_glozd2declzd2;
					{	/* Ast/glo_decl.scm 17 */
						obj_t BgL_startz00_2190;

						BgL_startz00_2190 = BINT(((long) 0));
						{	/* Ast/glo_decl.scm 17 */
							obj_t BgL_endz00_2191;

							BgL_endz00_2191 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2189)));
							{	/* Ast/glo_decl.scm 17 */

								BgL_cportz00_2181 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2189, BgL_startz00_2190, BgL_endz00_2191);
				}}}}
				{
					long BgL_iz00_2182;

					BgL_iz00_2182 = ((long) 10);
				BgL_loopz00_2183:
					if ((BgL_iz00_2182 == ((long) -1)))
						{	/* Ast/glo_decl.scm 17 */
							BUNSPEC;
						}
					else
						{	/* Ast/glo_decl.scm 17 */
							{	/* Ast/glo_decl.scm 17 */
								obj_t BgL_arg1861z00_2185;

								{	/* Ast/glo_decl.scm 17 */

									{	/* Ast/glo_decl.scm 17 */
										obj_t BgL_locationz00_2187;

										BgL_locationz00_2187 = BBOOL(((bool_t) 0));
										{	/* Ast/glo_decl.scm 17 */

											BgL_arg1861z00_2185 =
												BGl_readz00zz__readerz00(BgL_cportz00_2181,
												BgL_locationz00_2187);
										}
									}
								}
								{	/* Ast/glo_decl.scm 17 */
									int BgL_tmpz00_2221;

									BgL_tmpz00_2221 = (int) (BgL_iz00_2182);
									CNST_TABLE_SET(BgL_tmpz00_2221, BgL_arg1861z00_2185);
							}}
							{	/* Ast/glo_decl.scm 17 */
								int BgL_auxz00_2188;

								BgL_auxz00_2188 = (int) ((BgL_iz00_2182 - ((long) 1)));
								{
									long BgL_iz00_2226;

									BgL_iz00_2226 = (long) (BgL_auxz00_2188);
									BgL_iz00_2182 = BgL_iz00_2226;
									goto BgL_loopz00_2183;
								}
							}
						}
				}
			}
			return (BGl_symbol1853z00zzast_glozd2declzd2 =
				bstring_to_symbol(BGl_string1854z00zzast_glozd2declzd2), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzast_glozd2declzd2(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1485;

				BgL_headz00_1485 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1486;
					obj_t BgL_tailz00_1487;

					BgL_prevz00_1486 = BgL_headz00_1485;
					BgL_tailz00_1487 = BgL_l1z00_1;
				BgL_loopz00_1488:
					if (PAIRP(BgL_tailz00_1487))
						{
							obj_t BgL_newzd2prevzd2_1490;

							BgL_newzd2prevzd2_1490 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1487), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1486, BgL_newzd2prevzd2_1490);
							{
								obj_t BgL_tailz00_2237;
								obj_t BgL_prevz00_2236;

								BgL_prevz00_2236 = BgL_newzd2prevzd2_1490;
								BgL_tailz00_2237 = CDR(BgL_tailz00_1487);
								BgL_tailz00_1487 = BgL_tailz00_2237;
								BgL_prevz00_1486 = BgL_prevz00_2236;
								goto BgL_loopz00_1488;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1485);
				}
			}
		}

	}



/* declare-global-sfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(obj_t BgL_idz00_3,
		obj_t BgL_aliasz00_4, obj_t BgL_argsz00_5, obj_t BgL_modulez00_6,
		obj_t BgL_importz00_7, obj_t BgL_classz00_8, obj_t BgL_srcez00_9,
		obj_t BgL_srciz00_10)
	{
		{	/* Ast/glo_decl.scm 56 */
			if (BGl_dssslzd2optionalzd2onlyzd2prototypezf3z21zztools_dssslz00
				(BgL_argsz00_5))
				{	/* Ast/glo_decl.scm 60 */
					return
						BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2
						(BGl_dssslzd2optionalszd2zztools_dssslz00(BgL_argsz00_5), BNIL,
						BgL_idz00_3, BgL_aliasz00_4, BgL_argsz00_5, BgL_modulez00_6,
						BgL_importz00_7, BgL_classz00_8, BgL_srcez00_9, BgL_srciz00_10);
				}
			else
				{	/* Ast/glo_decl.scm 60 */
					if (BGl_dssslzd2keyzd2onlyzd2prototypezf3z21zztools_dssslz00
						(BgL_argsz00_5))
						{	/* Ast/glo_decl.scm 62 */
							return
								BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2
								(BNIL, BGl_dssslzd2keyszd2zztools_dssslz00(BgL_argsz00_5),
								BgL_idz00_3, BgL_aliasz00_4, BgL_argsz00_5, BgL_modulez00_6,
								BgL_importz00_7, BgL_classz00_8, BgL_srcez00_9, BgL_srciz00_10);
						}
					else
						{	/* Ast/glo_decl.scm 62 */
							return
								BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2
								(BgL_idz00_3, BgL_aliasz00_4, BgL_argsz00_5, BgL_modulez00_6,
								BgL_importz00_7, BgL_classz00_8, BgL_srcez00_9, BgL_srciz00_10);
						}
				}
		}

	}



/* &declare-global-sfun! */
	BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2sfunz12z70zzast_glozd2declzd2(obj_t
		BgL_envz00_2137, obj_t BgL_idz00_2138, obj_t BgL_aliasz00_2139,
		obj_t BgL_argsz00_2140, obj_t BgL_modulez00_2141, obj_t BgL_importz00_2142,
		obj_t BgL_classz00_2143, obj_t BgL_srcez00_2144, obj_t BgL_srciz00_2145)
	{
		{	/* Ast/glo_decl.scm 56 */
			return
				BGl_declarezd2globalzd2sfunz12z12zzast_glozd2declzd2(BgL_idz00_2138,
				BgL_aliasz00_2139, BgL_argsz00_2140, BgL_modulez00_2141,
				BgL_importz00_2142, BgL_classz00_2143, BgL_srcez00_2144,
				BgL_srciz00_2145);
		}

	}



/* declare-global-dsssl-sfun! */
	BgL_globalz00_bglt
		BGl_declarezd2globalzd2dssslzd2sfunz12zc0zzast_glozd2declzd2(obj_t
		BgL_optsz00_11, obj_t BgL_keysz00_12, obj_t BgL_idz00_13,
		obj_t BgL_aliasz00_14, obj_t BgL_argsz00_15, obj_t BgL_modulez00_16,
		obj_t BgL_importz00_17, obj_t BgL_classz00_18, obj_t BgL_srcez00_19,
		obj_t BgL_srciz00_20)
	{
		{	/* Ast/glo_decl.scm 70 */
			{	/* Ast/glo_decl.scm 73 */
				long BgL_arityz00_1495;

				BgL_arityz00_1495 =
					BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_15);
				{	/* Ast/glo_decl.scm 73 */
					bool_t BgL_exportzf3zf3_1496;

					{	/* Ast/glo_decl.scm 74 */
						bool_t BgL__ortest_1107z00_1586;

						if ((BgL_importz00_17 == CNST_TABLE_REF(((long) 0))))
							{	/* Ast/glo_decl.scm 74 */
								BgL__ortest_1107z00_1586 = ((bool_t) 0);
							}
						else
							{	/* Ast/glo_decl.scm 74 */
								BgL__ortest_1107z00_1586 = ((bool_t) 1);
							}
						if (BgL__ortest_1107z00_1586)
							{	/* Ast/glo_decl.scm 74 */
								BgL_exportzf3zf3_1496 = BgL__ortest_1107z00_1586;
							}
						else
							{	/* Ast/glo_decl.scm 75 */
								obj_t BgL__andtest_1108z00_1587;

								{	/* Ast/glo_decl.scm 75 */
									obj_t BgL_arg1441z00_1588;

									{	/* Ast/glo_decl.scm 75 */
										obj_t BgL_arg1442z00_1589;

										BgL_arg1442z00_1589 =
											BGl_thezd2backendzd2zzbackend_backendz00();
										BgL_arg1441z00_1588 =
											(((BgL_backendz00_bglt) COBJECT(
													((BgL_backendz00_bglt) BgL_arg1442z00_1589)))->
											BgL_debugzd2supportzd2);
									}
									BgL__andtest_1108z00_1587 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
												(long) 1)), BgL_arg1441z00_1588);
								}
								if (CBOOL(BgL__andtest_1108z00_1587))
									{	/* Ast/glo_decl.scm 75 */
										BgL_exportzf3zf3_1496 =
											(
											(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
											((long) 3));
									}
								else
									{	/* Ast/glo_decl.scm 75 */
										BgL_exportzf3zf3_1496 = ((bool_t) 0);
									}
							}
					}
					{	/* Ast/glo_decl.scm 74 */
						obj_t BgL_importz00_1497;

						{	/* Ast/glo_decl.scm 77 */
							bool_t BgL_test1881z00_2264;

							if ((BgL_importz00_17 == CNST_TABLE_REF(((long) 0))))
								{	/* Ast/glo_decl.scm 78 */
									bool_t BgL_test1883z00_2268;

									{	/* Ast/glo_decl.scm 78 */
										obj_t BgL_arg1421z00_1584;

										{	/* Ast/glo_decl.scm 78 */
											obj_t BgL_arg1422z00_1585;

											BgL_arg1422z00_1585 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											BgL_arg1421z00_1584 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_arg1422z00_1585)))->
												BgL_debugzd2supportzd2);
										}
										BgL_test1883z00_2268 =
											CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
											(CNST_TABLE_REF(((long) 1)), BgL_arg1421z00_1584));
									}
									if (BgL_test1883z00_2268)
										{	/* Ast/glo_decl.scm 78 */
											BgL_test1881z00_2264 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
												>= ((long) 3));
										}
									else
										{	/* Ast/glo_decl.scm 78 */
											BgL_test1881z00_2264 = ((bool_t) 0);
										}
								}
							else
								{	/* Ast/glo_decl.scm 77 */
									BgL_test1881z00_2264 = ((bool_t) 0);
								}
							if (BgL_test1881z00_2264)
								{	/* Ast/glo_decl.scm 77 */
									BgL_importz00_1497 = CNST_TABLE_REF(((long) 2));
								}
							else
								{	/* Ast/glo_decl.scm 77 */
									BgL_importz00_1497 = BgL_importz00_17;
								}
						}
						{	/* Ast/glo_decl.scm 77 */
							obj_t BgL_locz00_1498;

							BgL_locz00_1498 =
								BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_19);
							{	/* Ast/glo_decl.scm 82 */
								obj_t BgL_lociz00_1499;

								BgL_lociz00_1499 =
									BGl_findzd2locationzf2locz20zztools_locationz00
									(BgL_srciz00_20, BgL_locz00_1498);
								{	/* Ast/glo_decl.scm 83 */
									obj_t BgL_argsz00_1500;

									if (NULLP(BgL_keysz00_12))
										{	/* Ast/glo_decl.scm 84 */
											BgL_argsz00_1500 = BgL_argsz00_15;
										}
									else
										{	/* Ast/glo_decl.scm 84 */
											BgL_argsz00_1500 =
												BGl_loopze70ze7zzast_glozd2declzd2(BgL_keysz00_12,
												BgL_argsz00_15);
										}
									{	/* Ast/glo_decl.scm 84 */
										obj_t BgL_argszd2typezd2_1501;

										{
											obj_t BgL_argsz00_1537;
											obj_t BgL_resz00_1538;

											BgL_argsz00_1537 = BgL_argsz00_1500;
											BgL_resz00_1538 = BNIL;
										BgL_zc3z04anonymousza31332ze3z87_1539:
											if (NULLP(BgL_argsz00_1537))
												{	/* Ast/glo_decl.scm 102 */
													BgL_argszd2typezd2_1501 =
														bgl_reverse_bang(BgL_resz00_1538);
												}
											else
												{	/* Ast/glo_decl.scm 104 */
													bool_t BgL_test1886z00_2286;

													{	/* Ast/glo_decl.scm 104 */
														obj_t BgL_arg1352z00_1555;

														BgL_arg1352z00_1555 =
															CAR(((obj_t) BgL_argsz00_1537));
														BgL_test1886z00_2286 =
															BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
															(BgL_arg1352z00_1555);
													}
													if (BgL_test1886z00_2286)
														{	/* Ast/glo_decl.scm 105 */
															obj_t BgL_arg1337z00_1543;

															BgL_arg1337z00_1543 =
																CDR(((obj_t) BgL_argsz00_1537));
															{
																obj_t BgL_argsz00_2292;

																BgL_argsz00_2292 = BgL_arg1337z00_1543;
																BgL_argsz00_1537 = BgL_argsz00_2292;
																goto BgL_zc3z04anonymousza31332ze3z87_1539;
															}
														}
													else
														{	/* Ast/glo_decl.scm 107 */
															obj_t BgL_az00_1544;

															{	/* Ast/glo_decl.scm 107 */
																bool_t BgL_test1887z00_2293;

																{	/* Ast/glo_decl.scm 107 */
																	obj_t BgL_tmpz00_2294;

																	BgL_tmpz00_2294 =
																		CAR(((obj_t) BgL_argsz00_1537));
																	BgL_test1887z00_2293 =
																		SYMBOLP(BgL_tmpz00_2294);
																}
																if (BgL_test1887z00_2293)
																	{	/* Ast/glo_decl.scm 107 */
																		BgL_az00_1544 =
																			CAR(((obj_t) BgL_argsz00_1537));
																	}
																else
																	{	/* Ast/glo_decl.scm 109 */
																		obj_t BgL_pairz00_2012;

																		BgL_pairz00_2012 =
																			CAR(((obj_t) BgL_argsz00_1537));
																		BgL_az00_1544 = CAR(BgL_pairz00_2012);
																	}
															}
															{	/* Ast/glo_decl.scm 107 */
																obj_t BgL_tyz00_1545;

																{	/* Ast/glo_decl.scm 110 */
																	BgL_typez00_bglt BgL_tz00_1548;

																	BgL_tz00_1548 =
																		BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00
																		(BgL_az00_1544, BgL_locz00_1498,
																		BgL_lociz00_1499);
																	{	/* Ast/glo_decl.scm 112 */
																		bool_t BgL_test1888z00_2304;

																		if (
																			(((obj_t) BgL_tz00_1548) ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 112 */
																				BgL_test1888z00_2304 =
																					BgL_exportzf3zf3_1496;
																			}
																		else
																			{	/* Ast/glo_decl.scm 112 */
																				BgL_test1888z00_2304 = ((bool_t) 0);
																			}
																		if (BgL_test1888z00_2304)
																			{	/* Ast/glo_decl.scm 112 */
																				BgL_tyz00_1545 =
																					BGl_za2objza2z00zztype_cachez00;
																			}
																		else
																			{	/* Ast/glo_decl.scm 112 */
																				BgL_tyz00_1545 =
																					((obj_t) BgL_tz00_1548);
																			}
																	}
																}
																{	/* Ast/glo_decl.scm 110 */

																	{	/* Ast/glo_decl.scm 115 */
																		obj_t BgL_arg1338z00_1546;
																		obj_t BgL_arg1339z00_1547;

																		BgL_arg1338z00_1546 =
																			CDR(((obj_t) BgL_argsz00_1537));
																		BgL_arg1339z00_1547 =
																			MAKE_YOUNG_PAIR(BgL_tyz00_1545,
																			BgL_resz00_1538);
																		{
																			obj_t BgL_resz00_2313;
																			obj_t BgL_argsz00_2312;

																			BgL_argsz00_2312 = BgL_arg1338z00_1546;
																			BgL_resz00_2313 = BgL_arg1339z00_1547;
																			BgL_resz00_1538 = BgL_resz00_2313;
																			BgL_argsz00_1537 = BgL_argsz00_2312;
																			goto
																				BgL_zc3z04anonymousza31332ze3z87_1539;
																		}
																	}
																}
															}
														}
												}
										}
										{	/* Ast/glo_decl.scm 99 */
											obj_t BgL_argszd2namezd2_1502;

											{
												obj_t BgL_argsz00_1516;
												obj_t BgL_resz00_1517;

												BgL_argsz00_1516 = BgL_argsz00_1500;
												BgL_resz00_1517 = BNIL;
											BgL_zc3z04anonymousza31320ze3z87_1518:
												if (NULLP(BgL_argsz00_1516))
													{	/* Ast/glo_decl.scm 119 */
														BgL_argszd2namezd2_1502 =
															bgl_reverse_bang(BgL_resz00_1517);
													}
												else
													{	/* Ast/glo_decl.scm 121 */
														bool_t BgL_test1891z00_2317;

														{	/* Ast/glo_decl.scm 121 */
															obj_t BgL_arg1331z00_1533;

															BgL_arg1331z00_1533 =
																CAR(((obj_t) BgL_argsz00_1516));
															BgL_test1891z00_2317 =
																BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																(BgL_arg1331z00_1533);
														}
														if (BgL_test1891z00_2317)
															{	/* Ast/glo_decl.scm 122 */
																obj_t BgL_arg1324z00_1522;

																BgL_arg1324z00_1522 =
																	CDR(((obj_t) BgL_argsz00_1516));
																{
																	obj_t BgL_argsz00_2323;

																	BgL_argsz00_2323 = BgL_arg1324z00_1522;
																	BgL_argsz00_1516 = BgL_argsz00_2323;
																	goto BgL_zc3z04anonymousza31320ze3z87_1518;
																}
															}
														else
															{	/* Ast/glo_decl.scm 124 */
																obj_t BgL_az00_1523;

																{	/* Ast/glo_decl.scm 124 */
																	bool_t BgL_test1892z00_2324;

																	{	/* Ast/glo_decl.scm 124 */
																		obj_t BgL_tmpz00_2325;

																		BgL_tmpz00_2325 =
																			CAR(((obj_t) BgL_argsz00_1516));
																		BgL_test1892z00_2324 =
																			SYMBOLP(BgL_tmpz00_2325);
																	}
																	if (BgL_test1892z00_2324)
																		{	/* Ast/glo_decl.scm 124 */
																			BgL_az00_1523 =
																				CAR(((obj_t) BgL_argsz00_1516));
																		}
																	else
																		{	/* Ast/glo_decl.scm 126 */
																			obj_t BgL_pairz00_2023;

																			BgL_pairz00_2023 =
																				CAR(((obj_t) BgL_argsz00_1516));
																			BgL_az00_1523 = CAR(BgL_pairz00_2023);
																		}
																}
																{	/* Ast/glo_decl.scm 124 */
																	obj_t BgL_vidz00_1524;

																	BgL_vidz00_1524 =
																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																		(BgL_az00_1523, BgL_locz00_1498);
																	{	/* Ast/glo_decl.scm 127 */
																		obj_t BgL_varz00_1525;

																		if (
																			(BgL_vidz00_1524 ==
																				BGl_symbol1853z00zzast_glozd2declzd2))
																			{	/* Ast/glo_decl.scm 129 */

																				{	/* Ast/glo_decl.scm 129 */

																					BgL_varz00_1525 =
																						BGl_gensymz00zz__r4_symbols_6_4z00
																						(BFALSE);
																				}
																			}
																		else
																			{	/* Ast/glo_decl.scm 128 */
																				BgL_varz00_1525 = BgL_vidz00_1524;
																			}
																		{	/* Ast/glo_decl.scm 128 */

																			{	/* Ast/glo_decl.scm 131 */
																				obj_t BgL_arg1325z00_1526;
																				obj_t BgL_arg1326z00_1527;

																				BgL_arg1325z00_1526 =
																					CDR(((obj_t) BgL_argsz00_1516));
																				BgL_arg1326z00_1527 =
																					MAKE_YOUNG_PAIR(BgL_varz00_1525,
																					BgL_resz00_1517);
																				{
																					obj_t BgL_resz00_2342;
																					obj_t BgL_argsz00_2341;

																					BgL_argsz00_2341 =
																						BgL_arg1325z00_1526;
																					BgL_resz00_2342 = BgL_arg1326z00_1527;
																					BgL_resz00_1517 = BgL_resz00_2342;
																					BgL_argsz00_1516 = BgL_argsz00_2341;
																					goto
																						BgL_zc3z04anonymousza31320ze3z87_1518;
																				}
																			}
																		}
																	}
																}
															}
													}
											}
											{	/* Ast/glo_decl.scm 116 */
												obj_t BgL_idzd2typezd2_1503;

												BgL_idzd2typezd2_1503 =
													BGl_parsezd2idzf2importzd2locationzf2zzast_identz00
													(BgL_idz00_13, BgL_locz00_1498, BgL_lociz00_1499);
												{	/* Ast/glo_decl.scm 132 */
													obj_t BgL_typezd2reszd2_1504;

													BgL_typezd2reszd2_1504 = CDR(BgL_idzd2typezd2_1503);
													{	/* Ast/glo_decl.scm 133 */
														obj_t BgL_idz00_1505;

														BgL_idz00_1505 = CAR(BgL_idzd2typezd2_1503);
														{	/* Ast/glo_decl.scm 134 */
															BgL_sfunz00_bglt BgL_sfunz00_1506;

															{	/* Ast/glo_decl.scm 135 */
																BgL_sfunz00_bglt BgL_new1112z00_1511;

																{	/* Ast/glo_decl.scm 136 */
																	BgL_sfunz00_bglt BgL_new1111z00_1512;

																	BgL_new1111z00_1512 =
																		((BgL_sfunz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_sfunz00_bgl))));
																	{	/* Ast/glo_decl.scm 136 */
																		long BgL_arg1319z00_1513;

																		{	/* Ast/glo_decl.scm 136 */
																			long BgL_res1832z00_2028;

																			BgL_res1832z00_2028 =
																				BGL_CLASS_INDEX
																				(BGl_sfunz00zzast_varz00);
																			BgL_arg1319z00_1513 = BgL_res1832z00_2028;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1111z00_1512),
																			BgL_arg1319z00_1513);
																	}
																	{	/* Ast/glo_decl.scm 136 */
																		BgL_objectz00_bglt BgL_tmpz00_2350;

																		BgL_tmpz00_2350 =
																			((BgL_objectz00_bglt)
																			BgL_new1111z00_1512);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2350,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1111z00_1512);
																	BgL_new1112z00_1511 = BgL_new1111z00_1512;
																}
																((((BgL_funz00_bglt) COBJECT(
																				((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_arityz00) =
																	((long) BgL_arityz00_1495), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_predicatezd2ofzd2) =
																	((obj_t) BFALSE), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_stackzd2allocatorzd2) =
																	((obj_t) BFALSE), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_topzf3zf3) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_thezd2closurezd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_effectz00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_failsafez00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1112z00_1511)))->
																		BgL_argszd2noescapezd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_propertyz00) = ((obj_t) BNIL), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_argsz00) =
																	((obj_t) BgL_argszd2typezd2_1501), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_argszd2namezd2) =
																	((obj_t) BgL_argszd2namezd2_1502), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_bodyz00) = ((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_classz00) =
																	((obj_t) BgL_classz00_18), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_dssslzd2keywordszd2) =
																	((obj_t) BNIL), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_optionalsz00) =
																	((obj_t) BgL_optsz00_11), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_keysz00) =
																	((obj_t) BgL_keysz00_12), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_thezd2closurezd2globalz00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_strengthz00) =
																	((obj_t) CNST_TABLE_REF(((long) 3))),
																	BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1112z00_1511))->
																		BgL_stackablez00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																BgL_sfunz00_1506 = BgL_new1112z00_1511;
															}
															{	/* Ast/glo_decl.scm 135 */
																obj_t BgL_oldz00_1507;

																BgL_oldz00_1507 =
																	BGl_findzd2globalzd2zzast_envz00
																	(BgL_idz00_1505, BNIL);
																{	/* Ast/glo_decl.scm 142 */
																	BgL_globalz00_bglt BgL_globalz00_1508;

																	BgL_globalz00_1508 =
																		BGl_bindzd2globalz12zc0zzast_envz00
																		(BgL_idz00_1505, BgL_aliasz00_14,
																		BgL_modulez00_16,
																		((BgL_valuez00_bglt) BgL_sfunz00_1506),
																		BgL_importz00_1497, BgL_srcez00_19);
																	{	/* Ast/glo_decl.scm 143 */

																		if (
																			(BgL_typezd2reszd2_1504 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 151 */
																				if (BgL_exportzf3zf3_1496)
																					{	/* Ast/glo_decl.scm 154 */
																						BgL_typez00_bglt BgL_vz00_2033;

																						BgL_vz00_2033 =
																							((BgL_typez00_bglt)
																							BGl_za2objza2z00zztype_cachez00);
																						((((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_globalz00_1508)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt)
																								BgL_vz00_2033), BUNSPEC);
																					}
																				else
																					{	/* Ast/glo_decl.scm 153 */
																						((((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											BgL_globalz00_1508)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BgL_typezd2reszd2_1504)),
																							BUNSPEC);
																					}
																			}
																		else
																			{	/* Ast/glo_decl.scm 151 */
																				((((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_globalz00_1508)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) (
																							(BgL_typez00_bglt)
																							BgL_typezd2reszd2_1504)),
																					BUNSPEC);
																			}
																		return BgL_globalz00_1508;
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
				}
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzast_glozd2declzd2(obj_t BgL_keysz00_2180,
		obj_t BgL_argsz00_1559)
	{
		{	/* Ast/glo_decl.scm 87 */
			if (NULLP(BgL_argsz00_1559))
				{	/* Ast/glo_decl.scm 89 */
					return BNIL;
				}
			else
				{	/* Ast/glo_decl.scm 89 */
					if ((CAR(((obj_t) BgL_argsz00_1559)) == (BKEY)))
						{	/* Ast/glo_decl.scm 92 */
							obj_t BgL_arg1360z00_1564;
							obj_t BgL_arg1361z00_1565;

							BgL_arg1360z00_1564 = CAR(((obj_t) BgL_argsz00_1559));
							{	/* Ast/glo_decl.scm 95 */
								obj_t BgL_arg1363z00_1566;

								{	/* Ast/glo_decl.scm 95 */
									obj_t BgL_arg1364z00_1567;

									BgL_arg1364z00_1567 =
										BGl_dropz00zz__r4_pairs_and_lists_6_3z00(CDR(
											((obj_t) BgL_argsz00_1559)),
										bgl_list_length(BgL_keysz00_2180));
									BgL_arg1363z00_1566 =
										BGl_loopze70ze7zzast_glozd2declzd2(BgL_keysz00_2180,
										BgL_arg1364z00_1567);
								}
								BgL_arg1361z00_1565 =
									BGl_appendzd221011zd2zzast_glozd2declzd2(BgL_keysz00_2180,
									BgL_arg1363z00_1566);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1360z00_1564, BgL_arg1361z00_1565);
						}
					else
						{	/* Ast/glo_decl.scm 97 */
							obj_t BgL_arg1371z00_1570;
							obj_t BgL_arg1372z00_1571;

							BgL_arg1371z00_1570 = CAR(((obj_t) BgL_argsz00_1559));
							{	/* Ast/glo_decl.scm 97 */
								obj_t BgL_arg1381z00_1572;

								BgL_arg1381z00_1572 = CDR(((obj_t) BgL_argsz00_1559));
								BgL_arg1372z00_1571 =
									BGl_loopze70ze7zzast_glozd2declzd2(BgL_keysz00_2180,
									BgL_arg1381z00_1572);
							}
							return MAKE_YOUNG_PAIR(BgL_arg1371z00_1570, BgL_arg1372z00_1571);
						}
				}
		}

	}



/* declare-global-noopt-sfun! */
	BgL_globalz00_bglt
		BGl_declarezd2globalzd2nooptzd2sfunz12zc0zzast_glozd2declzd2(obj_t
		BgL_idz00_37, obj_t BgL_aliasz00_38, obj_t BgL_argsz00_39,
		obj_t BgL_modulez00_40, obj_t BgL_importz00_41, obj_t BgL_classz00_42,
		obj_t BgL_srcez00_43, obj_t BgL_srciz00_44)
	{
		{	/* Ast/glo_decl.scm 177 */
			{	/* Ast/glo_decl.scm 178 */
				long BgL_arityz00_1593;

				BgL_arityz00_1593 =
					BGl_globalzd2arityzd2zztools_argsz00(BgL_argsz00_39);
				{	/* Ast/glo_decl.scm 178 */
					obj_t BgL_argsz00_1594;

					BgL_argsz00_1594 =
						BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(BgL_argsz00_39);
					{	/* Ast/glo_decl.scm 179 */
						bool_t BgL_exportzf3zf3_1595;

						{	/* Ast/glo_decl.scm 180 */
							bool_t BgL__ortest_1113z00_1671;

							if ((BgL_importz00_41 == CNST_TABLE_REF(((long) 0))))
								{	/* Ast/glo_decl.scm 180 */
									BgL__ortest_1113z00_1671 = ((bool_t) 0);
								}
							else
								{	/* Ast/glo_decl.scm 180 */
									BgL__ortest_1113z00_1671 = ((bool_t) 1);
								}
							if (BgL__ortest_1113z00_1671)
								{	/* Ast/glo_decl.scm 180 */
									BgL_exportzf3zf3_1595 = BgL__ortest_1113z00_1671;
								}
							else
								{	/* Ast/glo_decl.scm 181 */
									obj_t BgL__andtest_1114z00_1672;

									{	/* Ast/glo_decl.scm 181 */
										obj_t BgL_arg1589z00_1673;

										{	/* Ast/glo_decl.scm 181 */
											obj_t BgL_arg1592z00_1674;

											BgL_arg1592z00_1674 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											BgL_arg1589z00_1673 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_arg1592z00_1674)))->
												BgL_debugzd2supportzd2);
										}
										BgL__andtest_1114z00_1672 =
											BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
													(long) 1)), BgL_arg1589z00_1673);
									}
									if (CBOOL(BgL__andtest_1114z00_1672))
										{	/* Ast/glo_decl.scm 181 */
											BgL_exportzf3zf3_1595 =
												(
												(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
												>= ((long) 3));
										}
									else
										{	/* Ast/glo_decl.scm 181 */
											BgL_exportzf3zf3_1595 = ((bool_t) 0);
										}
								}
						}
						{	/* Ast/glo_decl.scm 180 */
							obj_t BgL_importz00_1596;

							{	/* Ast/glo_decl.scm 183 */
								bool_t BgL_test1901z00_2436;

								if ((BgL_importz00_41 == CNST_TABLE_REF(((long) 0))))
									{	/* Ast/glo_decl.scm 184 */
										bool_t BgL_test1903z00_2440;

										{	/* Ast/glo_decl.scm 184 */
											obj_t BgL_arg1584z00_1669;

											{	/* Ast/glo_decl.scm 184 */
												obj_t BgL_arg1588z00_1670;

												BgL_arg1588z00_1670 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_arg1584z00_1669 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1588z00_1670)))->
													BgL_debugzd2supportzd2);
											}
											BgL_test1903z00_2440 =
												CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
												(CNST_TABLE_REF(((long) 1)), BgL_arg1584z00_1669));
										}
										if (BgL_test1903z00_2440)
											{	/* Ast/glo_decl.scm 184 */
												BgL_test1901z00_2436 =
													(
													(long) CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
													>= ((long) 3));
											}
										else
											{	/* Ast/glo_decl.scm 184 */
												BgL_test1901z00_2436 = ((bool_t) 0);
											}
									}
								else
									{	/* Ast/glo_decl.scm 183 */
										BgL_test1901z00_2436 = ((bool_t) 0);
									}
								if (BgL_test1901z00_2436)
									{	/* Ast/glo_decl.scm 183 */
										BgL_importz00_1596 = CNST_TABLE_REF(((long) 2));
									}
								else
									{	/* Ast/glo_decl.scm 183 */
										BgL_importz00_1596 = BgL_importz00_41;
									}
							}
							{	/* Ast/glo_decl.scm 183 */
								obj_t BgL_locz00_1597;

								BgL_locz00_1597 =
									BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_43);
								{	/* Ast/glo_decl.scm 188 */
									obj_t BgL_lociz00_1598;

									BgL_lociz00_1598 =
										BGl_findzd2locationzf2locz20zztools_locationz00
										(BgL_srciz00_44, BgL_locz00_1597);
									{	/* Ast/glo_decl.scm 189 */
										obj_t BgL_argszd2typezd2_1599;

										{	/* Ast/glo_decl.scm 190 */
											bool_t BgL_g1117z00_1628;

											BgL_g1117z00_1628 =
												(BgL_classz00_42 == CNST_TABLE_REF(((long) 4)));
											{
												obj_t BgL_argsz00_1630;
												obj_t BgL_resz00_1631;
												bool_t BgL_sgfunzf3zf3_1632;

												BgL_argsz00_1630 = BgL_argsz00_1594;
												BgL_resz00_1631 = BNIL;
												BgL_sgfunzf3zf3_1632 = BgL_g1117z00_1628;
											BgL_zc3z04anonymousza31494ze3z87_1633:
												if (NULLP(BgL_argsz00_1630))
													{	/* Ast/glo_decl.scm 194 */
														if ((BgL_arityz00_1593 >= ((long) 0)))
															{	/* Ast/glo_decl.scm 195 */
																BgL_argszd2typezd2_1599 =
																	bgl_reverse_bang(BgL_resz00_1631);
															}
														else
															{	/* Ast/glo_decl.scm 197 */
																obj_t BgL_typez00_1636;

																BgL_typez00_1636 =
																	CAR(((obj_t) BgL_resz00_1631));
																{	/* Ast/glo_decl.scm 199 */
																	bool_t BgL_test1906z00_2461;

																	if (
																		(BgL_typez00_1636 ==
																			BGl_za2objza2z00zztype_cachez00))
																		{	/* Ast/glo_decl.scm 199 */
																			BgL_test1906z00_2461 = ((bool_t) 1);
																		}
																	else
																		{	/* Ast/glo_decl.scm 199 */
																			BgL_test1906z00_2461 =
																				(BgL_typez00_1636 ==
																				BGl_za2pairzd2nilza2zd2zztype_cachez00);
																		}
																	if (BgL_test1906z00_2461)
																		{	/* Ast/glo_decl.scm 199 */
																			BgL_argszd2typezd2_1599 =
																				bgl_reverse_bang(BgL_resz00_1631);
																		}
																	else
																		{	/* Ast/glo_decl.scm 199 */
																			if (
																				(BgL_typez00_1636 ==
																					BGl_za2_za2z00zztype_cachez00))
																				{	/* Ast/glo_decl.scm 203 */
																					obj_t BgL_arg1518z00_1640;

																					{	/* Ast/glo_decl.scm 203 */
																						obj_t BgL_arg1521z00_1641;

																						BgL_arg1521z00_1641 =
																							CDR(((obj_t) BgL_resz00_1631));
																						BgL_arg1518z00_1640 =
																							MAKE_YOUNG_PAIR
																							(BGl_za2objza2z00zztype_cachez00,
																							BgL_arg1521z00_1641);
																					}
																					BgL_argszd2typezd2_1599 =
																						bgl_reverse_bang
																						(BgL_arg1518z00_1640);
																				}
																			else
																				{	/* Ast/glo_decl.scm 202 */
																					BgL_argszd2typezd2_1599 =
																						BGl_userzd2errorzd2zztools_errorz00
																						(BgL_idz00_37,
																						BGl_string1855z00zzast_glozd2declzd2,
																						BGl_shapez00zztools_shapez00
																						(BgL_typez00_1636), BNIL);
																				}
																		}
																}
															}
													}
												else
													{	/* Ast/glo_decl.scm 208 */
														bool_t BgL_test1909z00_2474;

														{	/* Ast/glo_decl.scm 208 */
															obj_t BgL_arg1564z00_1658;

															BgL_arg1564z00_1658 =
																CAR(((obj_t) BgL_argsz00_1630));
															BgL_test1909z00_2474 =
																BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																(BgL_arg1564z00_1658);
														}
														if (BgL_test1909z00_2474)
															{	/* Ast/glo_decl.scm 209 */
																obj_t BgL_arg1540z00_1647;

																BgL_arg1540z00_1647 =
																	MAKE_YOUNG_PAIR
																	(BGl_za2objza2z00zztype_cachez00,
																	BgL_resz00_1631);
																BgL_argszd2typezd2_1599 =
																	bgl_reverse_bang(BgL_arg1540z00_1647);
															}
														else
															{	/* Ast/glo_decl.scm 211 */
																obj_t BgL_typez00_1648;

																{	/* Ast/glo_decl.scm 211 */
																	BgL_typez00_bglt BgL_tz00_1651;

																	{	/* Ast/glo_decl.scm 212 */
																		obj_t BgL_arg1561z00_1657;

																		BgL_arg1561z00_1657 =
																			CAR(((obj_t) BgL_argsz00_1630));
																		BgL_tz00_1651 =
																			BGl_typezd2ofzd2idzf2importzd2locationz20zzast_identz00
																			(BgL_arg1561z00_1657, BgL_locz00_1597,
																			BgL_lociz00_1598);
																	}
																	{	/* Ast/glo_decl.scm 213 */
																		bool_t BgL_test1910z00_2483;

																		if (
																			(((obj_t) BgL_tz00_1651) ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 213 */
																				if (BgL_exportzf3zf3_1595)
																					{	/* Ast/glo_decl.scm 214 */
																						BgL_test1910z00_2483 =
																							BgL_exportzf3zf3_1595;
																					}
																				else
																					{	/* Ast/glo_decl.scm 214 */
																						BgL_test1910z00_2483 =
																							BgL_sgfunzf3zf3_1632;
																					}
																			}
																		else
																			{	/* Ast/glo_decl.scm 213 */
																				BgL_test1910z00_2483 = ((bool_t) 0);
																			}
																		if (BgL_test1910z00_2483)
																			{	/* Ast/glo_decl.scm 213 */
																				BgL_typez00_1648 =
																					BGl_za2objza2z00zztype_cachez00;
																			}
																		else
																			{	/* Ast/glo_decl.scm 213 */
																				BgL_typez00_1648 =
																					((obj_t) BgL_tz00_1651);
																			}
																	}
																}
																{	/* Ast/glo_decl.scm 217 */
																	obj_t BgL_arg1552z00_1649;
																	obj_t BgL_arg1558z00_1650;

																	BgL_arg1552z00_1649 =
																		CDR(((obj_t) BgL_argsz00_1630));
																	BgL_arg1558z00_1650 =
																		MAKE_YOUNG_PAIR(BgL_typez00_1648,
																		BgL_resz00_1631);
																	{
																		bool_t BgL_sgfunzf3zf3_2494;
																		obj_t BgL_resz00_2493;
																		obj_t BgL_argsz00_2492;

																		BgL_argsz00_2492 = BgL_arg1552z00_1649;
																		BgL_resz00_2493 = BgL_arg1558z00_1650;
																		BgL_sgfunzf3zf3_2494 = ((bool_t) 0);
																		BgL_sgfunzf3zf3_1632 = BgL_sgfunzf3zf3_2494;
																		BgL_resz00_1631 = BgL_resz00_2493;
																		BgL_argsz00_1630 = BgL_argsz00_2492;
																		goto BgL_zc3z04anonymousza31494ze3z87_1633;
																	}
																}
															}
													}
											}
										}
										{	/* Ast/glo_decl.scm 190 */
											obj_t BgL_argszd2namezd2_1600;

											{
												obj_t BgL_argsz00_1614;
												obj_t BgL_resz00_1615;

												BgL_argsz00_1614 = BgL_argsz00_1594;
												BgL_resz00_1615 = BNIL;
											BgL_zc3z04anonymousza31462ze3z87_1616:
												if (NULLP(BgL_argsz00_1614))
													{	/* Ast/glo_decl.scm 223 */
														BgL_argszd2namezd2_1600 =
															bgl_reverse_bang(BgL_resz00_1615);
													}
												else
													{	/* Ast/glo_decl.scm 225 */
														bool_t BgL_test1914z00_2498;

														{	/* Ast/glo_decl.scm 225 */
															obj_t BgL_arg1493z00_1625;

															BgL_arg1493z00_1625 =
																CAR(((obj_t) BgL_argsz00_1614));
															BgL_test1914z00_2498 =
																BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00
																(BgL_arg1493z00_1625);
														}
														if (BgL_test1914z00_2498)
															{	/* Ast/glo_decl.scm 226 */
																obj_t BgL_arg1474z00_1620;

																BgL_arg1474z00_1620 =
																	CDR(((obj_t) BgL_argsz00_1614));
																{
																	obj_t BgL_argsz00_2504;

																	BgL_argsz00_2504 = BgL_arg1474z00_1620;
																	BgL_argsz00_1614 = BgL_argsz00_2504;
																	goto BgL_zc3z04anonymousza31462ze3z87_1616;
																}
															}
														else
															{	/* Ast/glo_decl.scm 228 */
																obj_t BgL_az00_1621;

																{	/* Ast/glo_decl.scm 228 */
																	obj_t BgL_arg1489z00_1624;

																	BgL_arg1489z00_1624 =
																		CAR(((obj_t) BgL_argsz00_1614));
																	BgL_az00_1621 =
																		BGl_fastzd2idzd2ofzd2idzd2zzast_identz00
																		(BgL_arg1489z00_1624, BgL_locz00_1597);
																}
																{	/* Ast/glo_decl.scm 229 */
																	obj_t BgL_arg1476z00_1622;
																	obj_t BgL_arg1477z00_1623;

																	BgL_arg1476z00_1622 =
																		CDR(((obj_t) BgL_argsz00_1614));
																	BgL_arg1477z00_1623 =
																		MAKE_YOUNG_PAIR(BgL_az00_1621,
																		BgL_resz00_1615);
																	{
																		obj_t BgL_resz00_2512;
																		obj_t BgL_argsz00_2511;

																		BgL_argsz00_2511 = BgL_arg1476z00_1622;
																		BgL_resz00_2512 = BgL_arg1477z00_1623;
																		BgL_resz00_1615 = BgL_resz00_2512;
																		BgL_argsz00_1614 = BgL_argsz00_2511;
																		goto BgL_zc3z04anonymousza31462ze3z87_1616;
																	}
																}
															}
													}
											}
											{	/* Ast/glo_decl.scm 220 */
												obj_t BgL_idzd2typezd2_1601;

												BgL_idzd2typezd2_1601 =
													BGl_parsezd2idzf2importzd2locationzf2zzast_identz00
													(BgL_idz00_37, BgL_locz00_1597, BgL_lociz00_1598);
												{	/* Ast/glo_decl.scm 230 */
													obj_t BgL_typezd2reszd2_1602;

													BgL_typezd2reszd2_1602 = CDR(BgL_idzd2typezd2_1601);
													{	/* Ast/glo_decl.scm 231 */
														obj_t BgL_idz00_1603;

														BgL_idz00_1603 = CAR(BgL_idzd2typezd2_1601);
														{	/* Ast/glo_decl.scm 232 */
															BgL_sfunz00_bglt BgL_sfunz00_1604;

															{	/* Ast/glo_decl.scm 233 */
																BgL_sfunz00_bglt BgL_new1121z00_1609;

																{	/* Ast/glo_decl.scm 234 */
																	BgL_sfunz00_bglt BgL_new1120z00_1610;

																	BgL_new1120z00_1610 =
																		((BgL_sfunz00_bglt)
																		BOBJECT(GC_MALLOC(sizeof(struct
																					BgL_sfunz00_bgl))));
																	{	/* Ast/glo_decl.scm 234 */
																		long BgL_arg1461z00_1611;

																		{	/* Ast/glo_decl.scm 234 */
																			long BgL_res1840z00_2066;

																			BgL_res1840z00_2066 =
																				BGL_CLASS_INDEX
																				(BGl_sfunz00zzast_varz00);
																			BgL_arg1461z00_1611 = BgL_res1840z00_2066;
																		}
																		BGL_OBJECT_CLASS_NUM_SET(
																			((BgL_objectz00_bglt)
																				BgL_new1120z00_1610),
																			BgL_arg1461z00_1611);
																	}
																	{	/* Ast/glo_decl.scm 234 */
																		BgL_objectz00_bglt BgL_tmpz00_2520;

																		BgL_tmpz00_2520 =
																			((BgL_objectz00_bglt)
																			BgL_new1120z00_1610);
																		BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2520,
																			BFALSE);
																	}
																	((BgL_objectz00_bglt) BgL_new1120z00_1610);
																	BgL_new1121z00_1609 = BgL_new1120z00_1610;
																}
																((((BgL_funz00_bglt) COBJECT(
																				((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_arityz00) =
																	((long) BgL_arityz00_1593), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_sidezd2effectzd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_predicatezd2ofzd2) =
																	((obj_t) BFALSE), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_stackzd2allocatorzd2) =
																	((obj_t) BFALSE), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_topzf3zf3) =
																	((bool_t) ((bool_t) 1)), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_thezd2closurezd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_effectz00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_failsafez00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
																					BgL_new1121z00_1609)))->
																		BgL_argszd2noescapezd2) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_propertyz00) = ((obj_t) BNIL), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_argsz00) =
																	((obj_t) BgL_argszd2typezd2_1599), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_argszd2namezd2) =
																	((obj_t) BgL_argszd2namezd2_1600), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_bodyz00) = ((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_classz00) =
																	((obj_t) BgL_classz00_42), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_dssslzd2keywordszd2) =
																	((obj_t)
																		BGl_dssslzd2formalszd2zztools_dssslz00
																		(BgL_argsz00_1594)), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_optionalsz00) =
																	((obj_t) BNIL), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_keysz00) = ((obj_t) BNIL), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_thezd2closurezd2globalz00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_strengthz00) =
																	((obj_t) CNST_TABLE_REF(((long) 3))),
																	BUNSPEC);
																((((BgL_sfunz00_bglt)
																			COBJECT(BgL_new1121z00_1609))->
																		BgL_stackablez00) =
																	((obj_t) BUNSPEC), BUNSPEC);
																BgL_sfunz00_1604 = BgL_new1121z00_1609;
															}
															{	/* Ast/glo_decl.scm 233 */
																obj_t BgL_oldz00_1605;

																BgL_oldz00_1605 =
																	BGl_findzd2globalzd2zzast_envz00
																	(BgL_idz00_1603, BNIL);
																{	/* Ast/glo_decl.scm 239 */
																	BgL_globalz00_bglt BgL_globalz00_1606;

																	BgL_globalz00_1606 =
																		BGl_bindzd2globalz12zc0zzast_envz00
																		(BgL_idz00_1603, BgL_aliasz00_38,
																		BgL_modulez00_40,
																		((BgL_valuez00_bglt) BgL_sfunz00_1604),
																		BgL_importz00_1596, BgL_srcez00_43);
																	{	/* Ast/glo_decl.scm 240 */

																		if (
																			(BgL_typezd2reszd2_1602 ==
																				BGl_za2_za2z00zztype_cachez00))
																			{	/* Ast/glo_decl.scm 248 */
																				if (BgL_exportzf3zf3_1595)
																					{	/* Ast/glo_decl.scm 251 */
																						BgL_typez00_bglt BgL_vz00_2071;

																						BgL_vz00_2071 =
																							((BgL_typez00_bglt)
																							BGl_za2objza2z00zztype_cachez00);
																						((((BgL_variablez00_bglt)
																									COBJECT((
																											(BgL_variablez00_bglt)
																											BgL_globalz00_1606)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt)
																								BgL_vz00_2071), BUNSPEC);
																					}
																				else
																					{	/* Ast/glo_decl.scm 250 */
																						((((BgL_variablez00_bglt) COBJECT(
																										((BgL_variablez00_bglt)
																											BgL_globalz00_1606)))->
																								BgL_typez00) =
																							((BgL_typez00_bglt) (
																									(BgL_typez00_bglt)
																									BgL_typezd2reszd2_1602)),
																							BUNSPEC);
																					}
																			}
																		else
																			{	/* Ast/glo_decl.scm 248 */
																				((((BgL_variablez00_bglt) COBJECT(
																								((BgL_variablez00_bglt)
																									BgL_globalz00_1606)))->
																						BgL_typez00) =
																					((BgL_typez00_bglt) (
																							(BgL_typez00_bglt)
																							BgL_typezd2reszd2_1602)),
																					BUNSPEC);
																			}
																		return BgL_globalz00_1606;
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
				}
			}
		}

	}



/* declare-global-svar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(obj_t BgL_idz00_45,
		obj_t BgL_aliasz00_46, obj_t BgL_modulez00_47, obj_t BgL_importz00_48,
		obj_t BgL_srcez00_49, obj_t BgL_srciz00_50)
	{
		{	/* Ast/glo_decl.scm 260 */
			{	/* Ast/glo_decl.scm 261 */
				obj_t BgL_locz00_1676;

				BgL_locz00_1676 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_49);
				{	/* Ast/glo_decl.scm 261 */
					obj_t BgL_lociz00_1677;

					BgL_lociz00_1677 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_50,
						BgL_locz00_1676);
					{	/* Ast/glo_decl.scm 262 */
						obj_t BgL_idzd2typezd2_1678;

						BgL_idzd2typezd2_1678 =
							BGl_parsezd2idzf2importzd2locationzf2zzast_identz00(BgL_idz00_45,
							BgL_locz00_1676, BgL_lociz00_1677);
						{	/* Ast/glo_decl.scm 263 */
							obj_t BgL_typez00_1679;

							{	/* Ast/glo_decl.scm 264 */
								obj_t BgL_typez00_1700;

								BgL_typez00_1700 = CDR(BgL_idzd2typezd2_1678);
								if (
									((((BgL_typez00_bglt) COBJECT(
													((BgL_typez00_bglt) BgL_typez00_1700)))->
											BgL_classz00) == CNST_TABLE_REF(((long) 5))))
									{	/* Ast/glo_decl.scm 273 */
										bool_t BgL_test1918z00_2580;

										if ((BgL_typez00_1700 == BGl_za2_za2z00zztype_cachez00))
											{	/* Ast/glo_decl.scm 274 */
												obj_t BgL__ortest_1122z00_1710;

												BgL__ortest_1122z00_1710 =
													BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(BgL_importz00_48, CNST_TABLE_REF(((long) 6)));
												if (CBOOL(BgL__ortest_1122z00_1710))
													{	/* Ast/glo_decl.scm 274 */
														BgL_test1918z00_2580 =
															CBOOL(BgL__ortest_1122z00_1710);
													}
												else
													{	/* Ast/glo_decl.scm 275 */
														obj_t BgL__andtest_1123z00_1711;

														{	/* Ast/glo_decl.scm 276 */
															obj_t BgL_arg1639z00_1712;

															{	/* Ast/glo_decl.scm 276 */
																obj_t BgL_arg1640z00_1713;

																BgL_arg1640z00_1713 =
																	BGl_thezd2backendzd2zzbackend_backendz00();
																BgL_arg1639z00_1712 =
																	(((BgL_backendz00_bglt) COBJECT(
																			((BgL_backendz00_bglt)
																				BgL_arg1640z00_1713)))->
																	BgL_debugzd2supportzd2);
															}
															BgL__andtest_1123z00_1711 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(CNST_TABLE_REF(((long) 1)),
																BgL_arg1639z00_1712);
														}
														if (CBOOL(BgL__andtest_1123z00_1711))
															{	/* Ast/glo_decl.scm 275 */
																BgL_test1918z00_2580 =
																	(
																	(long)
																	CINT
																	(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
																	((long) 0));
															}
														else
															{	/* Ast/glo_decl.scm 275 */
																BgL_test1918z00_2580 = ((bool_t) 0);
															}
													}
											}
										else
											{	/* Ast/glo_decl.scm 273 */
												BgL_test1918z00_2580 = ((bool_t) 0);
											}
										if (BgL_test1918z00_2580)
											{	/* Ast/glo_decl.scm 273 */
												BgL_typez00_1679 = BGl_za2objza2z00zztype_cachez00;
											}
										else
											{	/* Ast/glo_decl.scm 273 */
												BgL_typez00_1679 = BgL_typez00_1700;
											}
									}
								else
									{	/* Ast/glo_decl.scm 271 */
										obj_t BgL_arg1641z00_1714;

										BgL_arg1641z00_1714 =
											BGl_shapez00zztools_shapez00(BgL_typez00_1700);
										{	/* Ast/glo_decl.scm 269 */
											obj_t BgL_list1642z00_1715;

											BgL_list1642z00_1715 =
												MAKE_YOUNG_PAIR(BGl_za2_za2z00zztype_cachez00, BNIL);
											BgL_typez00_1679 =
												BGl_userzd2errorzd2zztools_errorz00(BgL_idz00_45,
												BGl_string1856z00zzast_glozd2declzd2,
												BgL_arg1641z00_1714, BgL_list1642z00_1715);
										}
									}
							}
							{	/* Ast/glo_decl.scm 264 */
								obj_t BgL_importz00_1680;

								{	/* Ast/glo_decl.scm 281 */
									bool_t BgL_test1922z00_2600;

									if ((BgL_importz00_48 == CNST_TABLE_REF(((long) 0))))
										{	/* Ast/glo_decl.scm 282 */
											bool_t BgL_test1924z00_2604;

											{	/* Ast/glo_decl.scm 282 */
												obj_t BgL_arg1624z00_1698;

												{	/* Ast/glo_decl.scm 282 */
													obj_t BgL_arg1626z00_1699;

													BgL_arg1626z00_1699 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_arg1624z00_1698 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1626z00_1699)))->
														BgL_debugzd2supportzd2);
												}
												BgL_test1924z00_2604 =
													CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00
													(CNST_TABLE_REF(((long) 1)), BgL_arg1624z00_1698));
											}
											if (BgL_test1924z00_2604)
												{	/* Ast/glo_decl.scm 282 */
													BgL_test1922z00_2600 =
														(
														(long)
														CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >=
														((long) 3));
												}
											else
												{	/* Ast/glo_decl.scm 282 */
													BgL_test1922z00_2600 = ((bool_t) 0);
												}
										}
									else
										{	/* Ast/glo_decl.scm 281 */
											BgL_test1922z00_2600 = ((bool_t) 0);
										}
									if (BgL_test1922z00_2600)
										{	/* Ast/glo_decl.scm 281 */
											BgL_importz00_1680 = CNST_TABLE_REF(((long) 2));
										}
									else
										{	/* Ast/glo_decl.scm 281 */
											BgL_importz00_1680 = BgL_importz00_48;
										}
								}
								{	/* Ast/glo_decl.scm 281 */
									obj_t BgL_idz00_1681;

									BgL_idz00_1681 = CAR(BgL_idzd2typezd2_1678);
									{	/* Ast/glo_decl.scm 286 */
										BgL_svarz00_bglt BgL_svarz00_1682;

										{	/* Ast/glo_decl.scm 287 */
											BgL_svarz00_bglt BgL_new1126z00_1686;

											{	/* Ast/glo_decl.scm 287 */
												BgL_svarz00_bglt BgL_new1125z00_1687;

												BgL_new1125z00_1687 =
													((BgL_svarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
																BgL_svarz00_bgl))));
												{	/* Ast/glo_decl.scm 287 */
													long BgL_arg1599z00_1688;

													{	/* Ast/glo_decl.scm 287 */
														long BgL_res1845z00_2090;

														BgL_res1845z00_2090 =
															BGL_CLASS_INDEX(BGl_svarz00zzast_varz00);
														BgL_arg1599z00_1688 = BgL_res1845z00_2090;
													}
													BGL_OBJECT_CLASS_NUM_SET(
														((BgL_objectz00_bglt) BgL_new1125z00_1687),
														BgL_arg1599z00_1688);
												}
												{	/* Ast/glo_decl.scm 287 */
													BgL_objectz00_bglt BgL_tmpz00_2619;

													BgL_tmpz00_2619 =
														((BgL_objectz00_bglt) BgL_new1125z00_1687);
													BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2619, BFALSE);
												}
												((BgL_objectz00_bglt) BgL_new1125z00_1687);
												BgL_new1126z00_1686 = BgL_new1125z00_1687;
											}
											((((BgL_svarz00_bglt) COBJECT(BgL_new1126z00_1686))->
													BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
											BgL_svarz00_1682 = BgL_new1126z00_1686;
										}
										{	/* Ast/glo_decl.scm 287 */
											BgL_globalz00_bglt BgL_globalz00_1683;

											BgL_globalz00_1683 =
												BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_1681,
												BgL_aliasz00_46, BgL_modulez00_47,
												((BgL_valuez00_bglt) BgL_svarz00_1682),
												BgL_importz00_1680, BgL_srcez00_49);
											{	/* Ast/glo_decl.scm 288 */

												((((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt) BgL_globalz00_1683)))->
														BgL_typez00) =
													((BgL_typez00_bglt) ((BgL_typez00_bglt)
															BgL_typez00_1679)), BUNSPEC);
												{	/* Ast/glo_decl.scm 292 */
													obj_t BgL_arg1597z00_1684;

													if (
														(BgL_importz00_1680 == CNST_TABLE_REF(((long) 0))))
														{	/* Ast/glo_decl.scm 292 */
															BgL_arg1597z00_1684 = CNST_TABLE_REF(((long) 7));
														}
													else
														{	/* Ast/glo_decl.scm 292 */
															BgL_arg1597z00_1684 = CNST_TABLE_REF(((long) 8));
														}
													((((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		BgL_globalz00_1683)))->BgL_accessz00) =
														((obj_t) BgL_arg1597z00_1684), BUNSPEC);
												}
												return BgL_globalz00_1683;
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



/* &declare-global-svar! */
	BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2svarz12z70zzast_glozd2declzd2(obj_t
		BgL_envz00_2146, obj_t BgL_idz00_2147, obj_t BgL_aliasz00_2148,
		obj_t BgL_modulez00_2149, obj_t BgL_importz00_2150, obj_t BgL_srcez00_2151,
		obj_t BgL_srciz00_2152)
	{
		{	/* Ast/glo_decl.scm 260 */
			return
				BGl_declarezd2globalzd2svarz12z12zzast_glozd2declzd2(BgL_idz00_2147,
				BgL_aliasz00_2148, BgL_modulez00_2149, BgL_importz00_2150,
				BgL_srcez00_2151, BgL_srciz00_2152);
		}

	}



/* declare-global-scnst! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(obj_t BgL_idz00_51,
		obj_t BgL_aliasz00_52, obj_t BgL_modulez00_53, obj_t BgL_importz00_54,
		obj_t BgL_nodez00_55, obj_t BgL_classz00_56, obj_t BgL_locz00_57)
	{
		{	/* Ast/glo_decl.scm 299 */
			{	/* Ast/glo_decl.scm 300 */
				obj_t BgL_idzd2typezd2_1717;

				BgL_idzd2typezd2_1717 =
					BGl_parsezd2idzd2zzast_identz00(BgL_idz00_51, BgL_locz00_57);
				{	/* Ast/glo_decl.scm 300 */
					obj_t BgL_typez00_1718;

					{	/* Ast/glo_decl.scm 301 */
						obj_t BgL_typez00_1725;

						BgL_typez00_1725 = CDR(BgL_idzd2typezd2_1717);
						if ((BgL_typez00_1725 == BGl_za2_za2z00zztype_cachez00))
							{	/* Ast/glo_decl.scm 305 */
								BgL_typez00_1718 =
									BGl_internalzd2errorzd2zztools_errorz00(BgL_idz00_51,
									BGl_string1856z00zzast_glozd2declzd2,
									BGl_shapez00zztools_shapez00(BgL_typez00_1725));
							}
						else
							{	/* Ast/glo_decl.scm 305 */
								BgL_typez00_1718 = BgL_typez00_1725;
							}
					}
					{	/* Ast/glo_decl.scm 301 */
						obj_t BgL_idz00_1719;

						BgL_idz00_1719 = CAR(BgL_idzd2typezd2_1717);
						{	/* Ast/glo_decl.scm 311 */
							BgL_scnstz00_bglt BgL_scnstz00_1720;

							{	/* Ast/glo_decl.scm 312 */
								BgL_scnstz00_bglt BgL_new1130z00_1722;

								{	/* Ast/glo_decl.scm 314 */
									BgL_scnstz00_bglt BgL_new1128z00_1723;

									BgL_new1128z00_1723 =
										((BgL_scnstz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_scnstz00_bgl))));
									{	/* Ast/glo_decl.scm 314 */
										long BgL_arg1652z00_1724;

										{	/* Ast/glo_decl.scm 314 */
											long BgL_res1846z00_2100;

											BgL_res1846z00_2100 =
												BGL_CLASS_INDEX(BGl_scnstz00zzast_varz00);
											BgL_arg1652z00_1724 = BgL_res1846z00_2100;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1128z00_1723),
											BgL_arg1652z00_1724);
									}
									{	/* Ast/glo_decl.scm 314 */
										BgL_objectz00_bglt BgL_tmpz00_2648;

										BgL_tmpz00_2648 =
											((BgL_objectz00_bglt) BgL_new1128z00_1723);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2648, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1128z00_1723);
									BgL_new1130z00_1722 = BgL_new1128z00_1723;
								}
								((((BgL_scnstz00_bglt) COBJECT(BgL_new1130z00_1722))->
										BgL_nodez00) = ((obj_t) BgL_nodez00_55), BUNSPEC);
								((((BgL_scnstz00_bglt) COBJECT(BgL_new1130z00_1722))->
										BgL_classz00) = ((obj_t) BgL_classz00_56), BUNSPEC);
								((((BgL_scnstz00_bglt) COBJECT(BgL_new1130z00_1722))->
										BgL_locz00) = ((obj_t) BUNSPEC), BUNSPEC);
								BgL_scnstz00_1720 = BgL_new1130z00_1722;
							}
							{	/* Ast/glo_decl.scm 312 */
								BgL_globalz00_bglt BgL_globalz00_1721;

								BgL_globalz00_1721 =
									BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_1719,
									BgL_aliasz00_52, BgL_modulez00_53,
									((BgL_valuez00_bglt) BgL_scnstz00_1720), BgL_importz00_54,
									CNST_TABLE_REF(((long) 9)));
								{	/* Ast/glo_decl.scm 315 */

									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_1721)))->
											BgL_typez00) =
										((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_typez00_1718)),
										BUNSPEC);
									{	/* Ast/glo_decl.scm 319 */
										obj_t BgL_vz00_2107;

										BgL_vz00_2107 = CNST_TABLE_REF(((long) 7));
										((((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt) BgL_globalz00_1721)))->
												BgL_accessz00) = ((obj_t) BgL_vz00_2107), BUNSPEC);
									}
									return BgL_globalz00_1721;
								}
							}
						}
					}
				}
			}
		}

	}



/* &declare-global-scnst! */
	BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2scnstz12z70zzast_glozd2declzd2(obj_t
		BgL_envz00_2153, obj_t BgL_idz00_2154, obj_t BgL_aliasz00_2155,
		obj_t BgL_modulez00_2156, obj_t BgL_importz00_2157, obj_t BgL_nodez00_2158,
		obj_t BgL_classz00_2159, obj_t BgL_locz00_2160)
	{
		{	/* Ast/glo_decl.scm 299 */
			return
				BGl_declarezd2globalzd2scnstz12z12zzast_glozd2declzd2(BgL_idz00_2154,
				BgL_aliasz00_2155, BgL_modulez00_2156, BgL_importz00_2157,
				BgL_nodez00_2158, BgL_classz00_2159, BgL_locz00_2160);
		}

	}



/* declare-global-cfun! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t BgL_idz00_58,
		obj_t BgL_aliasz00_59, obj_t BgL_modulez00_60, obj_t BgL_namez00_61,
		obj_t BgL_treszd2idzd2_62, obj_t BgL_targszd2idzd2_63,
		bool_t BgL_infixzf3zf3_64, bool_t BgL_macrozf3zf3_65, obj_t BgL_srcez00_66,
		obj_t BgL_srciz00_67)
	{
		{	/* Ast/glo_decl.scm 326 */
			{	/* Ast/glo_decl.scm 327 */
				long BgL_arityz00_1728;

				BgL_arityz00_1728 =
					BGl_globalzd2arityzd2zztools_argsz00(BgL_targszd2idzd2_63);
				{	/* Ast/glo_decl.scm 327 */
					obj_t BgL_locz00_1729;

					BgL_locz00_1729 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_66);
					{	/* Ast/glo_decl.scm 328 */
						obj_t BgL_lociz00_1730;

						BgL_lociz00_1730 =
							BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_67,
							BgL_locz00_1729);
						{	/* Ast/glo_decl.scm 329 */
							BgL_typez00_bglt BgL_typezd2reszd2_1731;

							BgL_typezd2reszd2_1731 =
								BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
								(BgL_treszd2idzd2_62, BgL_locz00_1729, BgL_lociz00_1730);
							{	/* Ast/glo_decl.scm 330 */
								obj_t BgL_typezd2argszd2_1732;

								{	/* Ast/glo_decl.scm 331 */
									obj_t BgL_l1306z00_1738;

									BgL_l1306z00_1738 =
										BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
										(BgL_targszd2idzd2_63);
									if (NULLP(BgL_l1306z00_1738))
										{	/* Ast/glo_decl.scm 331 */
											BgL_typezd2argszd2_1732 = BNIL;
										}
									else
										{	/* Ast/glo_decl.scm 331 */
											obj_t BgL_head1308z00_1740;

											{	/* Ast/glo_decl.scm 331 */
												obj_t BgL_res1848z00_2109;

												BgL_res1848z00_2109 = MAKE_YOUNG_PAIR(BNIL, BNIL);
												BgL_head1308z00_1740 = BgL_res1848z00_2109;
											}
											{
												obj_t BgL_l1306z00_1742;
												obj_t BgL_tail1309z00_1743;

												BgL_l1306z00_1742 = BgL_l1306z00_1738;
												BgL_tail1309z00_1743 = BgL_head1308z00_1740;
											BgL_zc3z04anonymousza31666ze3z87_1744:
												if (NULLP(BgL_l1306z00_1742))
													{	/* Ast/glo_decl.scm 331 */
														BgL_typezd2argszd2_1732 = CDR(BgL_head1308z00_1740);
													}
												else
													{	/* Ast/glo_decl.scm 331 */
														obj_t BgL_newtail1310z00_1746;

														{	/* Ast/glo_decl.scm 331 */
															BgL_typez00_bglt BgL_arg1672z00_1748;

															{	/* Ast/glo_decl.scm 331 */
																obj_t BgL_tz00_1749;

																BgL_tz00_1749 =
																	CAR(((obj_t) BgL_l1306z00_1742));
																BgL_arg1672z00_1748 =
																	BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
																	(BgL_tz00_1749, BgL_locz00_1729,
																	BgL_lociz00_1730);
															}
															{	/* Ast/glo_decl.scm 331 */
																obj_t BgL_res1850z00_2113;

																BgL_res1850z00_2113 =
																	MAKE_YOUNG_PAIR(
																	((obj_t) BgL_arg1672z00_1748), BNIL);
																BgL_newtail1310z00_1746 = BgL_res1850z00_2113;
															}
														}
														SET_CDR(BgL_tail1309z00_1743,
															BgL_newtail1310z00_1746);
														{	/* Ast/glo_decl.scm 331 */
															obj_t BgL_arg1669z00_1747;

															BgL_arg1669z00_1747 =
																CDR(((obj_t) BgL_l1306z00_1742));
															{
																obj_t BgL_tail1309z00_2685;
																obj_t BgL_l1306z00_2684;

																BgL_l1306z00_2684 = BgL_arg1669z00_1747;
																BgL_tail1309z00_2685 = BgL_newtail1310z00_1746;
																BgL_tail1309z00_1743 = BgL_tail1309z00_2685;
																BgL_l1306z00_1742 = BgL_l1306z00_2684;
																goto BgL_zc3z04anonymousza31666ze3z87_1744;
															}
														}
													}
											}
										}
								}
								{	/* Ast/glo_decl.scm 331 */
									BgL_cfunz00_bglt BgL_cfunz00_1733;

									{	/* Ast/glo_decl.scm 334 */
										BgL_cfunz00_bglt BgL_new1133z00_1735;

										{	/* Ast/glo_decl.scm 334 */
											BgL_cfunz00_bglt BgL_new1131z00_1736;

											BgL_new1131z00_1736 =
												((BgL_cfunz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
															BgL_cfunz00_bgl))));
											{	/* Ast/glo_decl.scm 334 */
												long BgL_arg1663z00_1737;

												{	/* Ast/glo_decl.scm 334 */
													long BgL_res1851z00_2117;

													BgL_res1851z00_2117 =
														BGL_CLASS_INDEX(BGl_cfunz00zzast_varz00);
													BgL_arg1663z00_1737 = BgL_res1851z00_2117;
												}
												BGL_OBJECT_CLASS_NUM_SET(
													((BgL_objectz00_bglt) BgL_new1131z00_1736),
													BgL_arg1663z00_1737);
											}
											{	/* Ast/glo_decl.scm 334 */
												BgL_objectz00_bglt BgL_tmpz00_2690;

												BgL_tmpz00_2690 =
													((BgL_objectz00_bglt) BgL_new1131z00_1736);
												BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2690, BFALSE);
											}
											((BgL_objectz00_bglt) BgL_new1131z00_1736);
											BgL_new1133z00_1735 = BgL_new1131z00_1736;
										}
										((((BgL_funz00_bglt) COBJECT(
														((BgL_funz00_bglt) BgL_new1133z00_1735)))->
												BgL_arityz00) = ((long) BgL_arityz00_1728), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_sidezd2effectzd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_predicatezd2ofzd2) =
											((obj_t) BFALSE), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->
												BgL_stackzd2allocatorzd2) = ((obj_t) BFALSE), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_topzf3zf3) =
											((bool_t) ((bool_t) 1)), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_thezd2closurezd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_effectz00) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_failsafez00) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_funz00_bglt) COBJECT(((BgL_funz00_bglt)
															BgL_new1133z00_1735)))->BgL_argszd2noescapezd2) =
											((obj_t) BUNSPEC), BUNSPEC);
										((((BgL_cfunz00_bglt) COBJECT(BgL_new1133z00_1735))->
												BgL_argszd2typezd2) =
											((obj_t) BgL_typezd2argszd2_1732), BUNSPEC);
										((((BgL_cfunz00_bglt) COBJECT(BgL_new1133z00_1735))->
												BgL_macrozf3zf3) =
											((bool_t) BgL_macrozf3zf3_65), BUNSPEC);
										((((BgL_cfunz00_bglt) COBJECT(BgL_new1133z00_1735))->
												BgL_infixzf3zf3) =
											((bool_t) BgL_infixzf3zf3_64), BUNSPEC);
										((((BgL_cfunz00_bglt) COBJECT(BgL_new1133z00_1735))->
												BgL_methodz00) = ((obj_t) BNIL), BUNSPEC);
										BgL_cfunz00_1733 = BgL_new1133z00_1735;
									}
									{	/* Ast/glo_decl.scm 334 */
										BgL_globalz00_bglt BgL_globalz00_1734;

										BgL_globalz00_1734 =
											BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_58,
											BgL_aliasz00_59, BgL_modulez00_60,
											((BgL_valuez00_bglt) BgL_cfunz00_1733),
											CNST_TABLE_REF(((long) 10)), BgL_srcez00_66);
										{	/* Ast/glo_decl.scm 338 */

											((((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt) BgL_globalz00_1734)))->
													BgL_namez00) = ((obj_t) BgL_namez00_61), BUNSPEC);
											((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
																BgL_globalz00_1734)))->BgL_typez00) =
												((BgL_typez00_bglt) BgL_typezd2reszd2_1731), BUNSPEC);
											((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_1734))->
													BgL_evaluablezf3zf3) =
												((bool_t) ((bool_t) 0)), BUNSPEC);
											return BgL_globalz00_1734;
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



/* &declare-global-cfun! */
	BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2cfunz12z70zzast_glozd2declzd2(obj_t
		BgL_envz00_2161, obj_t BgL_idz00_2162, obj_t BgL_aliasz00_2163,
		obj_t BgL_modulez00_2164, obj_t BgL_namez00_2165,
		obj_t BgL_treszd2idzd2_2166, obj_t BgL_targszd2idzd2_2167,
		obj_t BgL_infixzf3zf3_2168, obj_t BgL_macrozf3zf3_2169,
		obj_t BgL_srcez00_2170, obj_t BgL_srciz00_2171)
	{
		{	/* Ast/glo_decl.scm 326 */
			return
				BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(BgL_idz00_2162,
				BgL_aliasz00_2163, BgL_modulez00_2164, BgL_namez00_2165,
				BgL_treszd2idzd2_2166, BgL_targszd2idzd2_2167,
				CBOOL(BgL_infixzf3zf3_2168), CBOOL(BgL_macrozf3zf3_2169),
				BgL_srcez00_2170, BgL_srciz00_2171);
		}

	}



/* declare-global-cvar! */
	BGL_EXPORTED_DEF BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t BgL_idz00_68,
		obj_t BgL_aliasz00_69, obj_t BgL_namez00_70, obj_t BgL_typezd2idzd2_71,
		bool_t BgL_macrozf3zf3_72, obj_t BgL_srcez00_73, obj_t BgL_srciz00_74)
	{
		{	/* Ast/glo_decl.scm 351 */
			{	/* Ast/glo_decl.scm 352 */
				obj_t BgL_locz00_1751;

				BgL_locz00_1751 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_srcez00_73);
				{	/* Ast/glo_decl.scm 352 */
					obj_t BgL_lociz00_1752;

					BgL_lociz00_1752 =
						BGl_findzd2locationzf2locz20zztools_locationz00(BgL_srciz00_74,
						BgL_locz00_1751);
					{	/* Ast/glo_decl.scm 353 */
						BgL_typez00_bglt BgL_typez00_1753;

						BgL_typez00_1753 =
							BGl_usezd2foreignzd2typezf2importzd2locz12z32zztype_envz00
							(BgL_typezd2idzd2_71, BgL_locz00_1751, BgL_lociz00_1752);
						{	/* Ast/glo_decl.scm 354 */
							BgL_cvarz00_bglt BgL_cvarz00_1754;

							{	/* Ast/glo_decl.scm 355 */
								BgL_cvarz00_bglt BgL_new1135z00_1756;

								{	/* Ast/glo_decl.scm 355 */
									BgL_cvarz00_bglt BgL_new1134z00_1757;

									BgL_new1134z00_1757 =
										((BgL_cvarz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
													BgL_cvarz00_bgl))));
									{	/* Ast/glo_decl.scm 355 */
										long BgL_arg1684z00_1758;

										{	/* Ast/glo_decl.scm 355 */
											long BgL_res1852z00_2127;

											BgL_res1852z00_2127 =
												BGL_CLASS_INDEX(BGl_cvarz00zzast_varz00);
											BgL_arg1684z00_1758 = BgL_res1852z00_2127;
										}
										BGL_OBJECT_CLASS_NUM_SET(
											((BgL_objectz00_bglt) BgL_new1134z00_1757),
											BgL_arg1684z00_1758);
									}
									{	/* Ast/glo_decl.scm 355 */
										BgL_objectz00_bglt BgL_tmpz00_2734;

										BgL_tmpz00_2734 =
											((BgL_objectz00_bglt) BgL_new1134z00_1757);
										BGL_OBJECT_WIDENING_SET(BgL_tmpz00_2734, BFALSE);
									}
									((BgL_objectz00_bglt) BgL_new1134z00_1757);
									BgL_new1135z00_1756 = BgL_new1134z00_1757;
								}
								((((BgL_cvarz00_bglt) COBJECT(BgL_new1135z00_1756))->
										BgL_macrozf3zf3) = ((bool_t) BgL_macrozf3zf3_72), BUNSPEC);
								BgL_cvarz00_1754 = BgL_new1135z00_1756;
							}
							{	/* Ast/glo_decl.scm 355 */
								BgL_globalz00_bglt BgL_globalz00_1755;

								BgL_globalz00_1755 =
									BGl_bindzd2globalz12zc0zzast_envz00(BgL_idz00_68,
									BgL_aliasz00_69, CNST_TABLE_REF(((long) 10)),
									((BgL_valuez00_bglt) BgL_cvarz00_1754),
									CNST_TABLE_REF(((long) 10)), BgL_srcez00_73);
								{	/* Ast/glo_decl.scm 356 */

									((((BgL_variablez00_bglt) COBJECT(
													((BgL_variablez00_bglt) BgL_globalz00_1755)))->
											BgL_namez00) = ((obj_t) BgL_namez00_70), BUNSPEC);
									((((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt)
														BgL_globalz00_1755)))->BgL_typez00) =
										((BgL_typez00_bglt) BgL_typez00_1753), BUNSPEC);
									((((BgL_globalz00_bglt) COBJECT(BgL_globalz00_1755))->
											BgL_evaluablezf3zf3) = ((bool_t) ((bool_t) 0)), BUNSPEC);
									return BgL_globalz00_1755;
								}
							}
						}
					}
				}
			}
		}

	}



/* &declare-global-cvar! */
	BgL_globalz00_bglt
		BGl_z62declarezd2globalzd2cvarz12z70zzast_glozd2declzd2(obj_t
		BgL_envz00_2172, obj_t BgL_idz00_2173, obj_t BgL_aliasz00_2174,
		obj_t BgL_namez00_2175, obj_t BgL_typezd2idzd2_2176,
		obj_t BgL_macrozf3zf3_2177, obj_t BgL_srcez00_2178, obj_t BgL_srciz00_2179)
	{
		{	/* Ast/glo_decl.scm 351 */
			return
				BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(BgL_idz00_2173,
				BgL_aliasz00_2174, BgL_namez00_2175, BgL_typezd2idzd2_2176,
				CBOOL(BgL_macrozf3zf3_2177), BgL_srcez00_2178, BgL_srciz00_2179);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzast_glozd2declzd2()
	{
		{	/* Ast/glo_decl.scm 17 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_dssslz00(((long) 275867862),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
			return
				BGl_modulezd2initializa7ationz75zzast_localz00(((long) 315247917),
				BSTRING_TO_STRING(BGl_string1857z00zzast_glozd2declzd2));
		}

	}

#ifdef __cplusplus
}
#endif
