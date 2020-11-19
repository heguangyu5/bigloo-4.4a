/*===========================================================================*/
/*   (Module/foreign.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/foreign.scm) */
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

	typedef struct BgL_caliasz00_bgl
	{
		bool_t BgL_arrayzf3zf3;
	}                *BgL_caliasz00_bglt;


	static obj_t BGl_externzd2parserzd2zzmodule_foreignz00(obj_t, bool_t);
	extern obj_t BGl_declarezd2czd2typez12z12zzforeign_ctypez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00(obj_t);
	extern obj_t BGl_caliasz00zzforeign_ctypez00;
	static obj_t BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BUNSPEC;
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzmodule_foreignz00();
	extern obj_t BGl_cstructz00zzforeign_ctypez00;
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_z62makezd2externzd2compilerz62zzmodule_foreignz00(obj_t);
	static obj_t BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 = BUNSPEC;
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
	static obj_t BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_foreignz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_appendzd221011zd2zzmodule_foreignz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzmodule_foreignz00();
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	static obj_t
		BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	static obj_t BGl_z62foreignzd2producerzb0zzmodule_foreignz00(obj_t, obj_t);
	static obj_t BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
	static obj_t BGl_gczd2rootszd2initz00zzmodule_foreignz00();
	extern obj_t BGl_parsezd2idzd2zzast_identz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t);
	extern obj_t
		BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00(BgL_typez00_bglt,
		BgL_typez00_bglt, obj_t);
	extern obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62foreignzd2accesseszd2addz12z70zzmodule_foreignz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_foreignz00 = BUNSPEC;
	static obj_t BGl_z62makezd2foreignzd2compilerz62zzmodule_foreignz00(obj_t);
	static obj_t BGl_foreignzd2parserzd2zzmodule_foreignz00(obj_t, bool_t);
	static obj_t BGl_z62foreignzd2finaliza7erz17zzmodule_foreignz00(obj_t);
	static obj_t BGl_externzd2producerzd2zzmodule_foreignz00(obj_t, bool_t);
	static obj_t BGl_toplevelzd2initzd2zzmodule_foreignz00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static bool_t
		BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_foreignz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	extern BgL_typez00_bglt BGl_declarezd2typez12zc0zztype_envz00(obj_t, obj_t,
		obj_t);
	extern BgL_typez00_bglt BGl_getzd2defaultzd2typez00zztype_cachez00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	extern obj_t BGl_typez00zztype_typez00;
	static obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_foreignz00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31241ze3ze5zzmodule_foreignz00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t, bool_t, bool_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31242ze3ze5zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_findzd2globalzd2zzast_envz00(obj_t, obj_t);
	static obj_t BGl_defaultzd2czd2typez00zzmodule_foreignz00(obj_t, obj_t);
	static obj_t BGl_foreignzd2producerzd2zzmodule_foreignz00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_ctypez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_toolsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_checksumz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_checkzd2idzd2zzast_identz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzmodule_foreignz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00();
	extern BgL_globalz00_bglt
		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2(obj_t, obj_t, obj_t,
		obj_t, bool_t, obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_foreignz00();
	static bool_t BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(obj_t);
	extern obj_t
		BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00(BgL_typez00_bglt);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_globalz00zzast_varz00;
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2includezd2foreignza2zd2zzengine_paramz00;
	static obj_t __cnst[22];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_foreignzd2finaliza7erzd2envza7zzmodule_foreignz00,
		BgL_bgl_za762foreignza7d2fin2569z00,
		BGl_z62foreignzd2finaliza7erz17zzmodule_foreignz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string2549z00zzmodule_foreignz00,
		BgL_bgl_string2549za700za7za7m2570za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string2550z00zzmodule_foreignz00,
		BgL_bgl_string2550za700za7za7m2571za7, "Illegal `foreign' clause", 24);
	      DEFINE_STRING(BGl_string2551z00zzmodule_foreignz00,
		BgL_bgl_string2551za700za7za7m2572za7, "Illegal `extern' clause", 23);
	      DEFINE_STRING(BGl_string2552z00zzmodule_foreignz00,
		BgL_bgl_string2552za700za7za7m2573za7, "Illegal `include' clause", 24);
	      DEFINE_STRING(BGl_string2553z00zzmodule_foreignz00,
		BgL_bgl_string2553za700za7za7m2574za7, "Illegal foreign form", 20);
	      DEFINE_STRING(BGl_string2554z00zzmodule_foreignz00,
		BgL_bgl_string2554za700za7za7m2575za7, "Illegal `macro' form", 20);
	      DEFINE_STRING(BGl_string2555z00zzmodule_foreignz00,
		BgL_bgl_string2555za700za7za7m2576za7, "Illegal `function' form", 23);
	      DEFINE_STRING(BGl_string2556z00zzmodule_foreignz00,
		BgL_bgl_string2556za700za7za7m2577za7, "Illegal `variable' form", 23);
	      DEFINE_STRING(BGl_string2557z00zzmodule_foreignz00,
		BgL_bgl_string2557za700za7za7m2578za7, "Illegal extern form", 19);
	      DEFINE_STRING(BGl_string2558z00zzmodule_foreignz00,
		BgL_bgl_string2558za700za7za7m2579za7, "Illegal `C foreign type'", 24);
	      DEFINE_STRING(BGl_string2559z00zzmodule_foreignz00,
		BgL_bgl_string2559za700za7za7m2580za7, "Illegal `C extern type'", 23);
	      DEFINE_STRING(BGl_string2560z00zzmodule_foreignz00,
		BgL_bgl_string2560za700za7za7m2581za7, "Foreign", 7);
	      DEFINE_STRING(BGl_string2561z00zzmodule_foreignz00,
		BgL_bgl_string2561za700za7za7m2582za7,
		"Re-exportation of global variable (ignored)", 43);
	      DEFINE_STRING(BGl_string2562z00zzmodule_foreignz00,
		BgL_bgl_string2562za700za7za7m2583za7, "Unbound global variable \"~a\"",
		28);
	      DEFINE_STRING(BGl_string2563z00zzmodule_foreignz00,
		BgL_bgl_string2563za700za7za7m2584za7, "Unspecified C type, using type",
		30);
	      DEFINE_STRING(BGl_string2564z00zzmodule_foreignz00,
		BgL_bgl_string2564za700za7za7m2585za7, "module_foreign", 14);
	      DEFINE_STRING(BGl_string2565z00zzmodule_foreignz00,
		BgL_bgl_string2565za700za7za7m2586za7,
		"unit make-heap make-add-heap union* struct* array enum function pointer opaque struct union C * macro export type include infix void extern foreign ",
		148);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2externzd2compilerzd2envzd2zzmodule_foreignz00,
		BgL_bgl_za762makeza7d2extern2587z00,
		BGl_z62makezd2externzd2compilerz62zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_foreignzd2accesseszd2addz12zd2envzc0zzmodule_foreignz00,
		BgL_bgl_za762foreignza7d2acc2588z00,
		BGl_z62foreignzd2accesseszd2addz12z70zzmodule_foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2545z00zzmodule_foreignz00,
		BgL_bgl_za762za7c3za704anonymo2589za7,
		BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_foreignz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2546z00zzmodule_foreignz00,
		BgL_bgl_za762za7c3za704anonymo2590za7,
		BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_foreignz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2547z00zzmodule_foreignz00,
		BgL_bgl_za762za7c3za704anonymo2591za7,
		BGl_z62zc3z04anonymousza31241ze3ze5zzmodule_foreignz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2548z00zzmodule_foreignz00,
		BgL_bgl_za762za7c3za704anonymo2592za7,
		BGl_z62zc3z04anonymousza31242ze3ze5zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2foreignzd2compilerzd2envzd2zzmodule_foreignz00,
		BgL_bgl_za762makeza7d2foreig2593z00,
		BGl_z62makezd2foreignzd2compilerz62zzmodule_foreignz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_foreignzd2producerzd2envz00zzmodule_foreignz00,
		BgL_bgl_za762foreignza7d2pro2594z00,
		BGl_z62foreignzd2producerzb0zzmodule_foreignz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00));
		   
			 ADD_ROOT((void *) (&BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_foreignz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzmodule_foreignz00(long
		BgL_checksumz00_2971, char *BgL_fromz00_2972)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_foreignz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_foreignz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_foreignz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00();
					BGl_cnstzd2initzd2zzmodule_foreignz00();
					BGl_importedzd2moduleszd2initz00zzmodule_foreignz00();
					return BGl_toplevelzd2initzd2zzmodule_foreignz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"module_foreign");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_foreign");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			{	/* Module/foreign.scm 18 */
				obj_t BgL_cportz00_2937;

				{	/* Module/foreign.scm 18 */
					obj_t BgL_stringz00_2945;

					BgL_stringz00_2945 = BGl_string2565z00zzmodule_foreignz00;
					{	/* Module/foreign.scm 18 */
						obj_t BgL_startz00_2946;

						BgL_startz00_2946 = BINT(((long) 0));
						{	/* Module/foreign.scm 18 */
							obj_t BgL_endz00_2947;

							BgL_endz00_2947 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2945)));
							{	/* Module/foreign.scm 18 */

								BgL_cportz00_2937 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2945, BgL_startz00_2946, BgL_endz00_2947);
				}}}}
				{
					long BgL_iz00_2938;

					BgL_iz00_2938 = ((long) 21);
				BgL_loopz00_2939:
					if ((BgL_iz00_2938 == ((long) -1)))
						{	/* Module/foreign.scm 18 */
							return BUNSPEC;
						}
					else
						{	/* Module/foreign.scm 18 */
							{	/* Module/foreign.scm 18 */
								obj_t BgL_arg2567z00_2941;

								{	/* Module/foreign.scm 18 */

									{	/* Module/foreign.scm 18 */
										obj_t BgL_locationz00_2943;

										BgL_locationz00_2943 = BBOOL(((bool_t) 0));
										{	/* Module/foreign.scm 18 */

											BgL_arg2567z00_2941 =
												BGl_readz00zz__readerz00(BgL_cportz00_2937,
												BgL_locationz00_2943);
										}
									}
								}
								{	/* Module/foreign.scm 18 */
									int BgL_tmpz00_2999;

									BgL_tmpz00_2999 = (int) (BgL_iz00_2938);
									CNST_TABLE_SET(BgL_tmpz00_2999, BgL_arg2567z00_2941);
							}}
							{	/* Module/foreign.scm 18 */
								int BgL_auxz00_2944;

								BgL_auxz00_2944 = (int) ((BgL_iz00_2938 - ((long) 1)));
								{
									long BgL_iz00_3004;

									BgL_iz00_3004 = (long) (BgL_auxz00_2944);
									BgL_iz00_2938 = BgL_iz00_3004;
									goto BgL_loopz00_2939;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BNIL;
			return (BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 =
				BNIL, BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzmodule_foreignz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1001;

				BgL_headz00_1001 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1002;
					obj_t BgL_tailz00_1003;

					BgL_prevz00_1002 = BgL_headz00_1001;
					BgL_tailz00_1003 = BgL_l1z00_1;
				BgL_loopz00_1004:
					if (PAIRP(BgL_tailz00_1003))
						{
							obj_t BgL_newzd2prevzd2_1006;

							BgL_newzd2prevzd2_1006 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1003), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1002, BgL_newzd2prevzd2_1006);
							{
								obj_t BgL_tailz00_3014;
								obj_t BgL_prevz00_3013;

								BgL_prevz00_3013 = BgL_newzd2prevzd2_1006;
								BgL_tailz00_3014 = CDR(BgL_tailz00_1003);
								BgL_tailz00_1003 = BgL_tailz00_3014;
								BgL_prevz00_1002 = BgL_prevz00_3013;
								goto BgL_loopz00_1004;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1001);
				}
			}
		}

	}



/* make-foreign-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 45 */
			{	/* Module/foreign.scm 46 */
				BgL_ccompz00_bglt BgL_new1073z00_1023;

				{	/* Module/foreign.scm 47 */
					BgL_ccompz00_bglt BgL_new1072z00_1027;

					BgL_new1072z00_1027 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/foreign.scm 47 */
						long BgL_arg1239z00_1028;

						{	/* Module/foreign.scm 47 */
							long BgL_res2298z00_2245;

							BgL_res2298z00_2245 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1239z00_1028 = BgL_res2298z00_2245;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1072z00_1027), BgL_arg1239z00_1028);
					}
					BgL_new1073z00_1023 = BgL_new1072z00_1027;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1073z00_1023))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1073z00_1023))->BgL_producerz00) =
					((obj_t) BGl_foreignzd2producerzd2envz00zzmodule_foreignz00),
					BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1073z00_1023))->BgL_consumerz00) =
					((obj_t) BGl_proc2545z00zzmodule_foreignz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1073z00_1023))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_foreignzd2finaliza7erzd2envza7zzmodule_foreignz00),
					BUNSPEC);
				return ((obj_t) BgL_new1073z00_1023);
			}
		}

	}



/* &make-foreign-compiler */
	obj_t BGl_z62makezd2foreignzd2compilerz62zzmodule_foreignz00(obj_t
		BgL_envz00_2912)
	{
		{	/* Module/foreign.scm 45 */
			return BGl_makezd2foreignzd2compilerz00zzmodule_foreignz00();
		}

	}



/* &<@anonymous:1233> */
	obj_t BGl_z62zc3z04anonymousza31233ze3ze5zzmodule_foreignz00(obj_t
		BgL_envz00_2913, obj_t BgL_mz00_2914, obj_t BgL_cz00_2915)
	{
		{	/* Module/foreign.scm 49 */
			return BGl_foreignzd2producerzd2zzmodule_foreignz00(BgL_cz00_2915);
		}

	}



/* make-extern-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2externzd2compilerz00zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 55 */
			{	/* Module/foreign.scm 56 */
				BgL_ccompz00_bglt BgL_new1075z00_1029;

				{	/* Module/foreign.scm 57 */
					BgL_ccompz00_bglt BgL_new1074z00_1036;

					BgL_new1074z00_1036 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/foreign.scm 57 */
						long BgL_arg1243z00_1037;

						{	/* Module/foreign.scm 57 */
							long BgL_res2299z00_2249;

							BgL_res2299z00_2249 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1243z00_1037 = BgL_res2299z00_2249;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1074z00_1036), BgL_arg1243z00_1037);
					}
					BgL_new1075z00_1029 = BgL_new1074z00_1036;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_1029))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 1))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_1029))->BgL_producerz00) =
					((obj_t) BGl_proc2546z00zzmodule_foreignz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_1029))->BgL_consumerz00) =
					((obj_t) BGl_proc2547z00zzmodule_foreignz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1075z00_1029))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc2548z00zzmodule_foreignz00), BUNSPEC);
				return ((obj_t) BgL_new1075z00_1029);
			}
		}

	}



/* &make-extern-compiler */
	obj_t BGl_z62makezd2externzd2compilerz62zzmodule_foreignz00(obj_t
		BgL_envz00_2922)
	{
		{	/* Module/foreign.scm 55 */
			return BGl_makezd2externzd2compilerz00zzmodule_foreignz00();
		}

	}



/* &<@anonymous:1242> */
	obj_t BGl_z62zc3z04anonymousza31242ze3ze5zzmodule_foreignz00(obj_t
		BgL_envz00_2923)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 2));
		}

	}



/* &<@anonymous:1241> */
	obj_t BGl_z62zc3z04anonymousza31241ze3ze5zzmodule_foreignz00(obj_t
		BgL_envz00_2924, obj_t BgL_mz00_2925, obj_t BgL_cz00_2926)
	{
		{	/* Module/foreign.scm 59 */
			return
				BGl_externzd2producerzd2zzmodule_foreignz00(BgL_cz00_2926,
				((bool_t) 0));
		}

	}



/* &<@anonymous:1240> */
	obj_t BGl_z62zc3z04anonymousza31240ze3ze5zzmodule_foreignz00(obj_t
		BgL_envz00_2927, obj_t BgL_cz00_2928)
	{
		{	/* Module/foreign.scm 58 */
			return
				BGl_externzd2producerzd2zzmodule_foreignz00(BgL_cz00_2928,
				((bool_t) 1));
		}

	}



/* foreign-producer */
	obj_t BGl_foreignzd2producerzd2zzmodule_foreignz00(obj_t BgL_clausez00_25)
	{
		{	/* Module/foreign.scm 64 */
			{	/* Module/foreign.scm 65 */
				bool_t BgL_test2598z00_3043;

				{	/* Module/foreign.scm 65 */
					obj_t BgL_arg1256z00_1055;

					{	/* Module/foreign.scm 65 */
						obj_t BgL_arg1258z00_1056;

						BgL_arg1258z00_1056 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg1256z00_1055 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1258z00_1056)))->
							BgL_foreignzd2clausezd2supportz00);
					}
					BgL_test2598z00_3043 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
									(long) 0)), BgL_arg1256z00_1055));
				}
				if (BgL_test2598z00_3043)
					{
						obj_t BgL_protosz00_1041;

						if (PAIRP(BgL_clausez00_25))
							{	/* Module/foreign.scm 66 */
								BgL_protosz00_1041 = CDR(BgL_clausez00_25);
								{
									obj_t BgL_l1195z00_1048;

									BgL_l1195z00_1048 = BgL_protosz00_1041;
								BgL_zc3z04anonymousza31251ze3z87_1049:
									if (PAIRP(BgL_l1195z00_1048))
										{	/* Module/foreign.scm 68 */
											BGl_foreignzd2parserzd2zzmodule_foreignz00(CAR
												(BgL_l1195z00_1048), ((bool_t) 1));
											{
												obj_t BgL_l1195z00_3056;

												BgL_l1195z00_3056 = CDR(BgL_l1195z00_1048);
												BgL_l1195z00_1048 = BgL_l1195z00_3056;
												goto BgL_zc3z04anonymousza31251ze3z87_1049;
											}
										}
									else
										{	/* Module/foreign.scm 68 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/foreign.scm 66 */
								{	/* Module/foreign.scm 71 */
									obj_t BgL_list1254z00_1054;

									BgL_list1254z00_1054 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string2549z00zzmodule_foreignz00,
										BGl_string2550z00zzmodule_foreignz00, BgL_clausez00_25,
										BgL_list1254z00_1054);
								}
							}
					}
				else
					{	/* Module/foreign.scm 65 */
						return BNIL;
					}
			}
		}

	}



/* &foreign-producer */
	obj_t BGl_z62foreignzd2producerzb0zzmodule_foreignz00(obj_t BgL_envz00_2916,
		obj_t BgL_clausez00_2917)
	{
		{	/* Module/foreign.scm 64 */
			return BGl_foreignzd2producerzd2zzmodule_foreignz00(BgL_clausez00_2917);
		}

	}



/* extern-producer */
	obj_t BGl_externzd2producerzd2zzmodule_foreignz00(obj_t BgL_clausez00_26,
		bool_t BgL_exportpz00_27)
	{
		{	/* Module/foreign.scm 80 */
			{	/* Module/foreign.scm 81 */
				bool_t BgL_test2601z00_3062;

				{	/* Module/foreign.scm 81 */
					obj_t BgL_arg1276z00_1074;

					{	/* Module/foreign.scm 81 */
						obj_t BgL_arg1277z00_1075;

						BgL_arg1277z00_1075 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_arg1276z00_1074 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1277z00_1075)))->
							BgL_foreignzd2clausezd2supportz00);
					}
					BgL_test2601z00_3062 =
						CBOOL(BGl_memqz00zz__r4_pairs_and_lists_6_3z00(CNST_TABLE_REF((
									(long) 1)), BgL_arg1276z00_1074));
				}
				if (BgL_test2601z00_3062)
					{
						obj_t BgL_protosz00_1060;

						if (PAIRP(BgL_clausez00_26))
							{	/* Module/foreign.scm 82 */
								BgL_protosz00_1060 = CDR(BgL_clausez00_26);
								{
									obj_t BgL_l1197z00_1067;

									BgL_l1197z00_1067 = BgL_protosz00_1060;
								BgL_zc3z04anonymousza31272ze3z87_1068:
									if (PAIRP(BgL_l1197z00_1067))
										{	/* Module/foreign.scm 84 */
											BGl_externzd2parserzd2zzmodule_foreignz00(CAR
												(BgL_l1197z00_1067), BgL_exportpz00_27);
											{
												obj_t BgL_l1197z00_3075;

												BgL_l1197z00_3075 = CDR(BgL_l1197z00_1067);
												BgL_l1197z00_1067 = BgL_l1197z00_3075;
												goto BgL_zc3z04anonymousza31272ze3z87_1068;
											}
										}
									else
										{	/* Module/foreign.scm 84 */
											((bool_t) 1);
										}
								}
								return BNIL;
							}
						else
							{	/* Module/foreign.scm 82 */
								{	/* Module/foreign.scm 87 */
									obj_t BgL_list1275z00_1073;

									BgL_list1275z00_1073 = MAKE_YOUNG_PAIR(BNIL, BNIL);
									return
										BGl_userzd2errorzd2zztools_errorz00
										(BGl_string2549z00zzmodule_foreignz00,
										BGl_string2551z00zzmodule_foreignz00, BgL_clausez00_26,
										BgL_list1275z00_1073);
								}
							}
					}
				else
					{	/* Module/foreign.scm 81 */
						return BNIL;
					}
			}
		}

	}



/* check-c-args? */
	bool_t BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(obj_t BgL_protoz00_28)
	{
		{	/* Module/foreign.scm 96 */
			{
				obj_t BgL_protoz00_1077;

				BgL_protoz00_1077 = BgL_protoz00_28;
			BgL_zc3z04anonymousza31278ze3z87_1078:
				if (NULLP(BgL_protoz00_1077))
					{	/* Module/foreign.scm 99 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/foreign.scm 99 */
						if (SYMBOLP(BgL_protoz00_1077))
							{	/* Module/foreign.scm 101 */
								return ((bool_t) 1);
							}
						else
							{	/* Module/foreign.scm 101 */
								if (PAIRP(BgL_protoz00_1077))
									{	/* Module/foreign.scm 105 */
										bool_t BgL_test2607z00_3086;

										{	/* Module/foreign.scm 105 */
											obj_t BgL_tmpz00_3087;

											BgL_tmpz00_3087 = CAR(BgL_protoz00_1077);
											BgL_test2607z00_3086 = SYMBOLP(BgL_tmpz00_3087);
										}
										if (BgL_test2607z00_3086)
											{
												obj_t BgL_protoz00_3090;

												BgL_protoz00_3090 = CDR(BgL_protoz00_1077);
												BgL_protoz00_1077 = BgL_protoz00_3090;
												goto BgL_zc3z04anonymousza31278ze3z87_1078;
											}
										else
											{	/* Module/foreign.scm 105 */
												return ((bool_t) 0);
											}
									}
								else
									{	/* Module/foreign.scm 103 */
										return ((bool_t) 0);
									}
							}
					}
			}
		}

	}



/* foreign-parser */
	obj_t BGl_foreignzd2parserzd2zzmodule_foreignz00(obj_t BgL_foreignz00_29,
		bool_t BgL_exportpz00_30)
	{
		{	/* Module/foreign.scm 113 */
			{
				obj_t BgL_typez00_1109;
				obj_t BgL_lzd2namezd2_1110;
				obj_t BgL_czd2namezd2_1111;
				obj_t BgL_typez00_1104;
				obj_t BgL_lzd2namezd2_1105;
				obj_t BgL_protoz00_1106;
				obj_t BgL_czd2namezd2_1107;
				obj_t BgL_typez00_1099;
				obj_t BgL_lzd2namezd2_1100;
				obj_t BgL_czd2namezd2_1101;
				obj_t BgL_typez00_1094;
				obj_t BgL_lzd2namezd2_1095;
				obj_t BgL_protoz00_1096;
				obj_t BgL_czd2namezd2_1097;
				obj_t BgL_stringz00_1087;

				if (PAIRP(BgL_foreignz00_29))
					{	/* Module/foreign.scm 115 */
						obj_t BgL_cdrzd2395zd2_1116;

						BgL_cdrzd2395zd2_1116 = CDR(BgL_foreignz00_29);
						if ((CAR(BgL_foreignz00_29) == CNST_TABLE_REF(((long) 4))))
							{	/* Module/foreign.scm 115 */
								if (PAIRP(BgL_cdrzd2395zd2_1116))
									{	/* Module/foreign.scm 115 */
										if (NULLP(CDR(BgL_cdrzd2395zd2_1116)))
											{	/* Module/foreign.scm 115 */
												BgL_stringz00_1087 = CAR(BgL_cdrzd2395zd2_1116);
												if (STRINGP(BgL_stringz00_1087))
													{	/* Module/foreign.scm 117 */
														if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
																(BgL_stringz00_1087,
																	BGl_za2includezd2foreignza2zd2zzengine_paramz00)))
															{	/* Module/foreign.scm 119 */
																return BFALSE;
															}
														else
															{	/* Module/foreign.scm 119 */
																return
																	(BGl_za2includezd2foreignza2zd2zzengine_paramz00
																	=
																	MAKE_YOUNG_PAIR(BgL_stringz00_1087,
																		BGl_za2includezd2foreignza2zd2zzengine_paramz00),
																	BUNSPEC);
															}
													}
												else
													{	/* Module/foreign.scm 118 */
														obj_t BgL_list1568z00_1253;

														BgL_list1568z00_1253 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														return
															BGl_userzd2errorzd2zztools_errorz00
															(BGl_string2549z00zzmodule_foreignz00,
															BGl_string2552z00zzmodule_foreignz00,
															BgL_foreignz00_29, BgL_list1568z00_1253);
													}
											}
										else
											{	/* Module/foreign.scm 115 */
											BgL_tagzd2378zd2_1093:
												{	/* Module/foreign.scm 128 */
													obj_t BgL_list1574z00_1255;

													BgL_list1574z00_1255 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													return
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string2549z00zzmodule_foreignz00,
														BGl_string2553z00zzmodule_foreignz00,
														BgL_foreignz00_29, BgL_list1574z00_1255);
												}
											}
									}
								else
									{	/* Module/foreign.scm 115 */
										goto BgL_tagzd2378zd2_1093;
									}
							}
						else
							{	/* Module/foreign.scm 115 */
								if ((CAR(BgL_foreignz00_29) == CNST_TABLE_REF(((long) 5))))
									{	/* Module/foreign.scm 115 */
										return
											BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
											(BgL_foreignz00_29);
									}
								else
									{	/* Module/foreign.scm 115 */
										if ((CAR(BgL_foreignz00_29) == CNST_TABLE_REF(((long) 6))))
											{	/* Module/foreign.scm 115 */
												if (PAIRP(BgL_cdrzd2395zd2_1116))
													{	/* Module/foreign.scm 115 */
														obj_t BgL_carzd2456zd2_1130;
														obj_t BgL_cdrzd2457zd2_1131;

														BgL_carzd2456zd2_1130 = CAR(BgL_cdrzd2395zd2_1116);
														BgL_cdrzd2457zd2_1131 = CDR(BgL_cdrzd2395zd2_1116);
														if (SYMBOLP(BgL_carzd2456zd2_1130))
															{	/* Module/foreign.scm 115 */
																if (PAIRP(BgL_cdrzd2457zd2_1131))
																	{	/* Module/foreign.scm 115 */
																		obj_t BgL_carzd2462zd2_1134;

																		BgL_carzd2462zd2_1134 =
																			CAR(BgL_cdrzd2457zd2_1131);
																		if (STRINGP(BgL_carzd2462zd2_1134))
																			{	/* Module/foreign.scm 115 */
																				if (NULLP(CDR(BgL_cdrzd2457zd2_1131)))
																					{	/* Module/foreign.scm 125 */
																						obj_t BgL_arg1573z00_2308;

																						BgL_arg1573z00_2308 =
																							MAKE_YOUNG_PAIR(BgL_foreignz00_29,
																							BBOOL(BgL_exportpz00_30));
																						return
																							(BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00
																							=
																							MAKE_YOUNG_PAIR
																							(BgL_arg1573z00_2308,
																								BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00),
																							BUNSPEC);
																					}
																				else
																					{	/* Module/foreign.scm 115 */
																						goto BgL_tagzd2378zd2_1093;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 115 */
																				goto BgL_tagzd2378zd2_1093;
																			}
																	}
																else
																	{	/* Module/foreign.scm 115 */
																		goto BgL_tagzd2378zd2_1093;
																	}
															}
														else
															{	/* Module/foreign.scm 115 */
																goto BgL_tagzd2378zd2_1093;
															}
													}
												else
													{	/* Module/foreign.scm 115 */
														goto BgL_tagzd2378zd2_1093;
													}
											}
										else
											{	/* Module/foreign.scm 115 */
												obj_t BgL_cdrzd2509zd2_1139;

												BgL_cdrzd2509zd2_1139 = CDR(BgL_foreignz00_29);
												if (
													(CAR(BgL_foreignz00_29) ==
														CNST_TABLE_REF(((long) 7))))
													{	/* Module/foreign.scm 115 */
														if (PAIRP(BgL_cdrzd2509zd2_1139))
															{	/* Module/foreign.scm 115 */
																obj_t BgL_cdrzd2515zd2_1143;

																BgL_cdrzd2515zd2_1143 =
																	CDR(BgL_cdrzd2509zd2_1139);
																if (PAIRP(BgL_cdrzd2515zd2_1143))
																	{	/* Module/foreign.scm 115 */
																		obj_t BgL_cdrzd2521zd2_1145;

																		BgL_cdrzd2521zd2_1145 =
																			CDR(BgL_cdrzd2515zd2_1143);
																		if (PAIRP(BgL_cdrzd2521zd2_1145))
																			{	/* Module/foreign.scm 115 */
																				obj_t BgL_cdrzd2526zd2_1147;

																				BgL_cdrzd2526zd2_1147 =
																					CDR(BgL_cdrzd2521zd2_1145);
																				if (PAIRP(BgL_cdrzd2526zd2_1147))
																					{	/* Module/foreign.scm 115 */
																						if (NULLP(CDR
																								(BgL_cdrzd2526zd2_1147)))
																							{	/* Module/foreign.scm 115 */
																								BgL_typez00_1094 =
																									CAR(BgL_cdrzd2509zd2_1139);
																								BgL_lzd2namezd2_1095 =
																									CAR(BgL_cdrzd2515zd2_1143);
																								BgL_protoz00_1096 =
																									CAR(BgL_cdrzd2521zd2_1145);
																								BgL_czd2namezd2_1097 =
																									CAR(BgL_cdrzd2526zd2_1147);
																							BgL_tagzd2379zd2_1098:
																								{	/* Module/foreign.scm 131 */
																									bool_t BgL_test2627z00_3160;

																									if (STRINGP
																										(BgL_czd2namezd2_1097))
																										{	/* Module/foreign.scm 131 */
																											if (SYMBOLP
																												(BgL_typez00_1094))
																												{	/* Module/foreign.scm 132 */
																													if (SYMBOLP
																														(BgL_lzd2namezd2_1095))
																														{	/* Module/foreign.scm 133 */
																															BgL_test2627z00_3160
																																=
																																BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																(BgL_protoz00_1096);
																														}
																													else
																														{	/* Module/foreign.scm 133 */
																															BgL_test2627z00_3160
																																= ((bool_t) 0);
																														}
																												}
																											else
																												{	/* Module/foreign.scm 132 */
																													BgL_test2627z00_3160 =
																														((bool_t) 0);
																												}
																										}
																									else
																										{	/* Module/foreign.scm 131 */
																											BgL_test2627z00_3160 =
																												((bool_t) 0);
																										}
																									if (BgL_test2627z00_3160)
																										{	/* Module/foreign.scm 137 */
																											bool_t
																												BgL_arg1582z00_1260;
																											BgL_arg1582z00_1260 =
																												(CAR(((obj_t)
																														BgL_foreignz00_29))
																												==
																												CNST_TABLE_REF(((long)
																														3)));
																											return ((obj_t)
																												BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																												(BgL_lzd2namezd2_1095,
																													BFALSE,
																													CNST_TABLE_REF(((long)
																															0)),
																													BgL_czd2namezd2_1097,
																													BgL_typez00_1094,
																													BgL_protoz00_1096,
																													BgL_arg1582z00_1260,
																													((bool_t) 1),
																													BgL_foreignz00_29,
																													BgL_foreignz00_29));
																										}
																									else
																										{	/* Module/foreign.scm 135 */
																											obj_t
																												BgL_list1585z00_1262;
																											BgL_list1585z00_1262 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2549z00zzmodule_foreignz00,
																												BGl_string2554z00zzmodule_foreignz00,
																												BgL_foreignz00_29,
																												BgL_list1585z00_1262);
																										}
																								}
																							}
																						else
																							{	/* Module/foreign.scm 115 */
																							BgL_tagzd2381zd2_1103:
																								{	/* Module/foreign.scm 145 */
																									obj_t BgL_list1591z00_1272;

																									BgL_list1591z00_1272 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									return
																										BGl_userzd2errorzd2zztools_errorz00
																										(BGl_string2549z00zzmodule_foreignz00,
																										BGl_string2553z00zzmodule_foreignz00,
																										BgL_foreignz00_29,
																										BgL_list1591z00_1272);
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 115 */
																						obj_t BgL_cdrzd2573zd2_1157;

																						BgL_cdrzd2573zd2_1157 =
																							CDR(
																							((obj_t) BgL_cdrzd2509zd2_1139));
																						{	/* Module/foreign.scm 115 */
																							obj_t BgL_cdrzd2581zd2_1158;

																							BgL_cdrzd2581zd2_1158 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd2573zd2_1157));
																							if (NULLP(CDR(((obj_t)
																											BgL_cdrzd2581zd2_1158))))
																								{	/* Module/foreign.scm 115 */
																									obj_t BgL_arg1327z00_1161;
																									obj_t BgL_arg1328z00_1162;
																									obj_t BgL_arg1329z00_1163;

																									BgL_arg1327z00_1161 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2509zd2_1139));
																									BgL_arg1328z00_1162 =
																										CAR(((obj_t)
																											BgL_cdrzd2573zd2_1157));
																									BgL_arg1329z00_1163 =
																										CAR(((obj_t)
																											BgL_cdrzd2581zd2_1158));
																									BgL_typez00_1099 =
																										BgL_arg1327z00_1161;
																									BgL_lzd2namezd2_1100 =
																										BgL_arg1328z00_1162;
																									BgL_czd2namezd2_1101 =
																										BgL_arg1329z00_1163;
																									{	/* Module/foreign.scm 139 */
																										bool_t BgL_test2632z00_3197;

																										if (STRINGP
																											(BgL_czd2namezd2_1101))
																											{	/* Module/foreign.scm 139 */
																												if (SYMBOLP
																													(BgL_typez00_1099))
																													{	/* Module/foreign.scm 140 */
																														BgL_test2632z00_3197
																															=
																															SYMBOLP
																															(BgL_lzd2namezd2_1100);
																													}
																												else
																													{	/* Module/foreign.scm 140 */
																														BgL_test2632z00_3197
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Module/foreign.scm 139 */
																												BgL_test2632z00_3197 =
																													((bool_t) 0);
																											}
																										if (BgL_test2632z00_3197)
																											{	/* Module/foreign.scm 139 */
																												return
																													((obj_t)
																													BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																													(BgL_lzd2namezd2_1100,
																														BFALSE,
																														BgL_czd2namezd2_1101,
																														BgL_typez00_1099,
																														((bool_t) 1),
																														BgL_foreignz00_29,
																														BgL_foreignz00_29));
																											}
																										else
																											{	/* Module/foreign.scm 142 */
																												obj_t
																													BgL_list1590z00_1269;
																												BgL_list1590z00_1269 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string2549z00zzmodule_foreignz00,
																													BGl_string2554z00zzmodule_foreignz00,
																													BgL_foreignz00_29,
																													BgL_list1590z00_1269);
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 115 */
																									goto BgL_tagzd2381zd2_1103;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 115 */
																				goto BgL_tagzd2381zd2_1103;
																			}
																	}
																else
																	{	/* Module/foreign.scm 115 */
																		goto BgL_tagzd2381zd2_1103;
																	}
															}
														else
															{	/* Module/foreign.scm 115 */
																goto BgL_tagzd2381zd2_1103;
															}
													}
												else
													{	/* Module/foreign.scm 115 */
														if (
															(CAR(BgL_foreignz00_29) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Module/foreign.scm 115 */
																if (PAIRP(BgL_cdrzd2509zd2_1139))
																	{	/* Module/foreign.scm 115 */
																		obj_t BgL_cdrzd2653zd2_1169;

																		BgL_cdrzd2653zd2_1169 =
																			CDR(BgL_cdrzd2509zd2_1139);
																		if (
																			(CAR(BgL_cdrzd2509zd2_1139) ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Module/foreign.scm 115 */
																				if (PAIRP(BgL_cdrzd2653zd2_1169))
																					{	/* Module/foreign.scm 115 */
																						obj_t BgL_cdrzd2659zd2_1173;

																						BgL_cdrzd2659zd2_1173 =
																							CDR(BgL_cdrzd2653zd2_1169);
																						if (PAIRP(BgL_cdrzd2659zd2_1173))
																							{	/* Module/foreign.scm 115 */
																								obj_t BgL_cdrzd2665zd2_1175;

																								BgL_cdrzd2665zd2_1175 =
																									CDR(BgL_cdrzd2659zd2_1173);
																								if (PAIRP
																									(BgL_cdrzd2665zd2_1175))
																									{	/* Module/foreign.scm 115 */
																										obj_t BgL_cdrzd2670zd2_1177;

																										BgL_cdrzd2670zd2_1177 =
																											CDR
																											(BgL_cdrzd2665zd2_1175);
																										if (PAIRP
																											(BgL_cdrzd2670zd2_1177))
																											{	/* Module/foreign.scm 115 */
																												if (NULLP(CDR
																														(BgL_cdrzd2670zd2_1177)))
																													{
																														obj_t
																															BgL_czd2namezd2_3238;
																														obj_t
																															BgL_protoz00_3236;
																														obj_t
																															BgL_lzd2namezd2_3234;
																														obj_t
																															BgL_typez00_3232;
																														BgL_typez00_3232 =
																															CAR
																															(BgL_cdrzd2653zd2_1169);
																														BgL_lzd2namezd2_3234
																															=
																															CAR
																															(BgL_cdrzd2659zd2_1173);
																														BgL_protoz00_3236 =
																															CAR
																															(BgL_cdrzd2665zd2_1175);
																														BgL_czd2namezd2_3238
																															=
																															CAR
																															(BgL_cdrzd2670zd2_1177);
																														BgL_czd2namezd2_1097
																															=
																															BgL_czd2namezd2_3238;
																														BgL_protoz00_1096 =
																															BgL_protoz00_3236;
																														BgL_lzd2namezd2_1095
																															=
																															BgL_lzd2namezd2_3234;
																														BgL_typez00_1094 =
																															BgL_typez00_3232;
																														goto
																															BgL_tagzd2379zd2_1098;
																													}
																												else
																													{	/* Module/foreign.scm 115 */
																													BgL_tagzd2384zd2_1113:
																														{	/* Module/foreign.scm 161 */
																															obj_t
																																BgL_list1603z00_1287;
																															BgL_list1603z00_1287
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															return
																																BGl_userzd2errorzd2zztools_errorz00
																																(BGl_string2549z00zzmodule_foreignz00,
																																BGl_string2553z00zzmodule_foreignz00,
																																BgL_foreignz00_29,
																																BgL_list1603z00_1287);
																														}
																													}
																											}
																										else
																											{	/* Module/foreign.scm 115 */
																												goto
																													BgL_tagzd2384zd2_1113;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 115 */
																										obj_t BgL_cdrzd2754zd2_1186;

																										BgL_cdrzd2754zd2_1186 =
																											CDR(BgL_foreignz00_29);
																										{	/* Module/foreign.scm 115 */
																											obj_t
																												BgL_cdrzd2762zd2_1187;
																											BgL_cdrzd2762zd2_1187 =
																												CDR(((obj_t)
																													BgL_cdrzd2754zd2_1186));
																											{	/* Module/foreign.scm 115 */
																												obj_t
																													BgL_cdrzd2769zd2_1188;
																												BgL_cdrzd2769zd2_1188 =
																													CDR(((obj_t)
																														BgL_cdrzd2762zd2_1187));
																												if (NULLP(CDR(((obj_t)
																																BgL_cdrzd2769zd2_1188))))
																													{	/* Module/foreign.scm 115 */
																														obj_t
																															BgL_arg1367z00_1191;
																														obj_t
																															BgL_arg1370z00_1192;
																														obj_t
																															BgL_arg1371z00_1193;
																														obj_t
																															BgL_arg1372z00_1194;
																														BgL_arg1367z00_1191
																															=
																															CAR
																															(BgL_foreignz00_29);
																														BgL_arg1370z00_1192
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2754zd2_1186));
																														BgL_arg1371z00_1193
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2762zd2_1187));
																														BgL_arg1372z00_1194
																															=
																															CAR(((obj_t)
																																BgL_cdrzd2769zd2_1188));
																														BgL_typez00_1104 =
																															BgL_arg1367z00_1191;
																														BgL_lzd2namezd2_1105
																															=
																															BgL_arg1370z00_1192;
																														BgL_protoz00_1106 =
																															BgL_arg1371z00_1193;
																														BgL_czd2namezd2_1107
																															=
																															BgL_arg1372z00_1194;
																													BgL_tagzd2382zd2_1108:
																														{	/* Module/foreign.scm 147 */
																															bool_t
																																BgL_test2644z00_3258;
																															if (STRINGP
																																(BgL_czd2namezd2_1107))
																																{	/* Module/foreign.scm 147 */
																																	if (SYMBOLP
																																		(BgL_typez00_1104))
																																		{	/* Module/foreign.scm 148 */
																																			if (SYMBOLP(BgL_lzd2namezd2_1105))
																																				{	/* Module/foreign.scm 149 */
																																					BgL_test2644z00_3258
																																						=
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_protoz00_1106);
																																				}
																																			else
																																				{	/* Module/foreign.scm 149 */
																																					BgL_test2644z00_3258
																																						=
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 148 */
																																			BgL_test2644z00_3258
																																				=
																																				(
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 147 */
																																	BgL_test2644z00_3258
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test2644z00_3258)
																																{	/* Module/foreign.scm 147 */
																																	return
																																		((obj_t)
																																		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																		(BgL_lzd2namezd2_1105,
																																			BFALSE,
																																			CNST_TABLE_REF
																																			(((long)
																																					0)),
																																			BgL_czd2namezd2_1107,
																																			BgL_typez00_1104,
																																			BgL_protoz00_1106,
																																			((bool_t)
																																				0),
																																			((bool_t)
																																				0),
																																			BgL_foreignz00_29,
																																			BgL_foreignz00_29));
																																}
																															else
																																{	/* Module/foreign.scm 151 */
																																	obj_t
																																		BgL_list1598z00_1277;
																																	BgL_list1598z00_1277
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string2549z00zzmodule_foreignz00,
																																		BGl_string2555z00zzmodule_foreignz00,
																																		BgL_foreignz00_29,
																																		BgL_list1598z00_1277);
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 115 */
																														goto
																															BgL_tagzd2384zd2_1113;
																													}
																											}
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 115 */
																								obj_t BgL_cdrzd2812zd2_1196;

																								BgL_cdrzd2812zd2_1196 =
																									CDR(BgL_foreignz00_29);
																								{	/* Module/foreign.scm 115 */
																									obj_t BgL_cdrzd2818zd2_1197;

																									BgL_cdrzd2818zd2_1197 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2812zd2_1196));
																									if (NULLP(CDR(((obj_t)
																													BgL_cdrzd2818zd2_1197))))
																										{	/* Module/foreign.scm 115 */
																											obj_t BgL_arg1394z00_1200;
																											obj_t BgL_arg1396z00_1201;
																											obj_t BgL_arg1417z00_1202;

																											BgL_arg1394z00_1200 =
																												CAR(BgL_foreignz00_29);
																											BgL_arg1396z00_1201 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2812zd2_1196));
																											BgL_arg1417z00_1202 =
																												CAR(((obj_t)
																													BgL_cdrzd2818zd2_1197));
																											BgL_typez00_1109 =
																												BgL_arg1394z00_1200;
																											BgL_lzd2namezd2_1110 =
																												BgL_arg1396z00_1201;
																											BgL_czd2namezd2_1111 =
																												BgL_arg1417z00_1202;
																										BgL_tagzd2383zd2_1112:
																											{	/* Module/foreign.scm 155 */
																												bool_t
																													BgL_test2649z00_3283;
																												if (STRINGP
																													(BgL_czd2namezd2_1111))
																													{	/* Module/foreign.scm 155 */
																														if (SYMBOLP
																															(BgL_typez00_1109))
																															{	/* Module/foreign.scm 156 */
																																BgL_test2649z00_3283
																																	=
																																	SYMBOLP
																																	(BgL_lzd2namezd2_1110);
																															}
																														else
																															{	/* Module/foreign.scm 156 */
																																BgL_test2649z00_3283
																																	=
																																	((bool_t) 0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 155 */
																														BgL_test2649z00_3283
																															= ((bool_t) 0);
																													}
																												if (BgL_test2649z00_3283)
																													{	/* Module/foreign.scm 155 */
																														return
																															((obj_t)
																															BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																															(BgL_lzd2namezd2_1110,
																																BFALSE,
																																BgL_czd2namezd2_1111,
																																BgL_typez00_1109,
																																((bool_t) 0),
																																BgL_foreignz00_29,
																																BFALSE));
																													}
																												else
																													{	/* Module/foreign.scm 158 */
																														obj_t
																															BgL_list1602z00_1284;
																														BgL_list1602z00_1284
																															=
																															MAKE_YOUNG_PAIR
																															(BNIL, BNIL);
																														return
																															BGl_userzd2errorzd2zztools_errorz00
																															(BGl_string2549z00zzmodule_foreignz00,
																															BGl_string2556z00zzmodule_foreignz00,
																															BgL_foreignz00_29,
																															BgL_list1602z00_1284);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 115 */
																											goto
																												BgL_tagzd2384zd2_1113;
																										}
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 115 */
																						goto BgL_tagzd2384zd2_1113;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 115 */
																				obj_t BgL_cdrzd2871zd2_1204;

																				BgL_cdrzd2871zd2_1204 =
																					CDR(BgL_foreignz00_29);
																				{	/* Module/foreign.scm 115 */
																					obj_t BgL_cdrzd2877zd2_1205;

																					BgL_cdrzd2877zd2_1205 =
																						CDR(
																						((obj_t) BgL_cdrzd2871zd2_1204));
																					if (PAIRP(BgL_cdrzd2877zd2_1205))
																						{	/* Module/foreign.scm 115 */
																							obj_t BgL_cdrzd2882zd2_1207;

																							BgL_cdrzd2882zd2_1207 =
																								CDR(BgL_cdrzd2877zd2_1205);
																							if (PAIRP(BgL_cdrzd2882zd2_1207))
																								{	/* Module/foreign.scm 115 */
																									if (NULLP(CDR
																											(BgL_cdrzd2882zd2_1207)))
																										{	/* Module/foreign.scm 115 */
																											obj_t BgL_arg1441z00_1211;
																											obj_t BgL_arg1442z00_1212;
																											obj_t BgL_arg1448z00_1213;
																											obj_t BgL_arg1449z00_1214;

																											BgL_arg1441z00_1211 =
																												CAR(BgL_foreignz00_29);
																											BgL_arg1442z00_1212 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2871zd2_1204));
																											BgL_arg1448z00_1213 =
																												CAR
																												(BgL_cdrzd2877zd2_1205);
																											BgL_arg1449z00_1214 =
																												CAR
																												(BgL_cdrzd2882zd2_1207);
																											{
																												obj_t
																													BgL_czd2namezd2_3312;
																												obj_t BgL_protoz00_3311;
																												obj_t
																													BgL_lzd2namezd2_3310;
																												obj_t BgL_typez00_3309;

																												BgL_typez00_3309 =
																													BgL_arg1441z00_1211;
																												BgL_lzd2namezd2_3310 =
																													BgL_arg1442z00_1212;
																												BgL_protoz00_3311 =
																													BgL_arg1448z00_1213;
																												BgL_czd2namezd2_3312 =
																													BgL_arg1449z00_1214;
																												BgL_czd2namezd2_1107 =
																													BgL_czd2namezd2_3312;
																												BgL_protoz00_1106 =
																													BgL_protoz00_3311;
																												BgL_lzd2namezd2_1105 =
																													BgL_lzd2namezd2_3310;
																												BgL_typez00_1104 =
																													BgL_typez00_3309;
																												goto
																													BgL_tagzd2382zd2_1108;
																											}
																										}
																									else
																										{	/* Module/foreign.scm 115 */
																											goto
																												BgL_tagzd2384zd2_1113;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 115 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd2877zd2_1205))))
																										{	/* Module/foreign.scm 115 */
																											obj_t BgL_arg1464z00_1220;
																											obj_t BgL_arg1465z00_1221;
																											obj_t BgL_arg1474z00_1222;

																											BgL_arg1464z00_1220 =
																												CAR(BgL_foreignz00_29);
																											BgL_arg1465z00_1221 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd2871zd2_1204));
																											BgL_arg1474z00_1222 =
																												CAR(((obj_t)
																													BgL_cdrzd2877zd2_1205));
																											{
																												obj_t
																													BgL_czd2namezd2_3324;
																												obj_t
																													BgL_lzd2namezd2_3323;
																												obj_t BgL_typez00_3322;

																												BgL_typez00_3322 =
																													BgL_arg1464z00_1220;
																												BgL_lzd2namezd2_3323 =
																													BgL_arg1465z00_1221;
																												BgL_czd2namezd2_3324 =
																													BgL_arg1474z00_1222;
																												BgL_czd2namezd2_1111 =
																													BgL_czd2namezd2_3324;
																												BgL_lzd2namezd2_1110 =
																													BgL_lzd2namezd2_3323;
																												BgL_typez00_1109 =
																													BgL_typez00_3322;
																												goto
																													BgL_tagzd2383zd2_1112;
																											}
																										}
																									else
																										{	/* Module/foreign.scm 115 */
																											goto
																												BgL_tagzd2384zd2_1113;
																										}
																								}
																						}
																					else
																						{	/* Module/foreign.scm 115 */
																							goto BgL_tagzd2384zd2_1113;
																						}
																				}
																			}
																	}
																else
																	{	/* Module/foreign.scm 115 */
																		goto BgL_tagzd2384zd2_1113;
																	}
															}
														else
															{	/* Module/foreign.scm 115 */
																obj_t BgL_cdrzd2973zd2_1225;

																BgL_cdrzd2973zd2_1225 = CDR(BgL_foreignz00_29);
																if (PAIRP(BgL_cdrzd2973zd2_1225))
																	{	/* Module/foreign.scm 115 */
																		obj_t BgL_cdrzd2979zd2_1227;

																		BgL_cdrzd2979zd2_1227 =
																			CDR(BgL_cdrzd2973zd2_1225);
																		if (PAIRP(BgL_cdrzd2979zd2_1227))
																			{	/* Module/foreign.scm 115 */
																				obj_t BgL_cdrzd2984zd2_1229;

																				BgL_cdrzd2984zd2_1229 =
																					CDR(BgL_cdrzd2979zd2_1227);
																				if (PAIRP(BgL_cdrzd2984zd2_1229))
																					{	/* Module/foreign.scm 115 */
																						if (NULLP(CDR
																								(BgL_cdrzd2984zd2_1229)))
																							{
																								obj_t BgL_czd2namezd2_3343;
																								obj_t BgL_protoz00_3341;
																								obj_t BgL_lzd2namezd2_3339;
																								obj_t BgL_typez00_3337;

																								BgL_typez00_3337 =
																									CAR(BgL_foreignz00_29);
																								BgL_lzd2namezd2_3339 =
																									CAR(BgL_cdrzd2973zd2_1225);
																								BgL_protoz00_3341 =
																									CAR(BgL_cdrzd2979zd2_1227);
																								BgL_czd2namezd2_3343 =
																									CAR(BgL_cdrzd2984zd2_1229);
																								BgL_czd2namezd2_1107 =
																									BgL_czd2namezd2_3343;
																								BgL_protoz00_1106 =
																									BgL_protoz00_3341;
																								BgL_lzd2namezd2_1105 =
																									BgL_lzd2namezd2_3339;
																								BgL_typez00_1104 =
																									BgL_typez00_3337;
																								goto BgL_tagzd2382zd2_1108;
																							}
																						else
																							{	/* Module/foreign.scm 115 */
																								goto BgL_tagzd2384zd2_1113;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 115 */
																						obj_t BgL_cdrzd21017zd2_1239;

																						BgL_cdrzd21017zd2_1239 =
																							CDR(
																							((obj_t) BgL_cdrzd2973zd2_1225));
																						if (NULLP(CDR(
																									((obj_t)
																										BgL_cdrzd21017zd2_1239))))
																							{	/* Module/foreign.scm 115 */
																								obj_t BgL_arg1536z00_1242;
																								obj_t BgL_arg1537z00_1243;
																								obj_t BgL_arg1540z00_1244;

																								BgL_arg1536z00_1242 =
																									CAR(BgL_foreignz00_29);
																								BgL_arg1537z00_1243 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd2973zd2_1225));
																								BgL_arg1540z00_1244 =
																									CAR(((obj_t)
																										BgL_cdrzd21017zd2_1239));
																								{
																									obj_t BgL_czd2namezd2_3358;
																									obj_t BgL_lzd2namezd2_3357;
																									obj_t BgL_typez00_3356;

																									BgL_typez00_3356 =
																										BgL_arg1536z00_1242;
																									BgL_lzd2namezd2_3357 =
																										BgL_arg1537z00_1243;
																									BgL_czd2namezd2_3358 =
																										BgL_arg1540z00_1244;
																									BgL_czd2namezd2_1111 =
																										BgL_czd2namezd2_3358;
																									BgL_lzd2namezd2_1110 =
																										BgL_lzd2namezd2_3357;
																									BgL_typez00_1109 =
																										BgL_typez00_3356;
																									goto BgL_tagzd2383zd2_1112;
																								}
																							}
																						else
																							{	/* Module/foreign.scm 115 */
																								goto BgL_tagzd2384zd2_1113;
																							}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 115 */
																				goto BgL_tagzd2384zd2_1113;
																			}
																	}
																else
																	{	/* Module/foreign.scm 115 */
																		goto BgL_tagzd2384zd2_1113;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/foreign.scm 115 */
						goto BgL_tagzd2384zd2_1113;
					}
			}
		}

	}



/* extern-parser */
	obj_t BGl_externzd2parserzd2zzmodule_foreignz00(obj_t BgL_externz00_31,
		bool_t BgL_exportpz00_32)
	{
		{	/* Module/foreign.scm 166 */
			{
				obj_t BgL_idz00_1302;
				obj_t BgL_czd2namezd2_1303;
				obj_t BgL_idz00_1298;
				obj_t BgL_protoz00_1299;
				obj_t BgL_cnz00_1300;
				obj_t BgL_idz00_1294;
				obj_t BgL_czd2namezd2_1295;
				obj_t BgL_idz00_1290;
				obj_t BgL_protoz00_1291;
				obj_t BgL_cnz00_1292;

				if (PAIRP(BgL_externz00_31))
					{	/* Module/foreign.scm 168 */
						if ((CAR(BgL_externz00_31) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 168 */
								return
									BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00
									(BgL_externz00_31);
							}
						else
							{	/* Module/foreign.scm 168 */
								obj_t BgL_carzd21120zd2_1310;

								BgL_carzd21120zd2_1310 = CAR(BgL_externz00_31);
								if ((BgL_carzd21120zd2_1310 == CNST_TABLE_REF(((long) 6))))
									{	/* Module/foreign.scm 168 */
										return
											BGl_foreignzd2parserzd2zzmodule_foreignz00
											(BgL_externz00_31, BgL_exportpz00_32);
									}
								else
									{	/* Module/foreign.scm 168 */
										if ((BgL_carzd21120zd2_1310 == CNST_TABLE_REF(((long) 4))))
											{	/* Module/foreign.scm 168 */
												return
													BGl_foreignzd2parserzd2zzmodule_foreignz00
													(BgL_externz00_31, BgL_exportpz00_32);
											}
										else
											{	/* Module/foreign.scm 168 */
												obj_t BgL_cdrzd21135zd2_1313;

												BgL_cdrzd21135zd2_1313 = CDR(BgL_externz00_31);
												if (
													(BgL_carzd21120zd2_1310 ==
														CNST_TABLE_REF(((long) 7))))
													{	/* Module/foreign.scm 168 */
														if (PAIRP(BgL_cdrzd21135zd2_1313))
															{	/* Module/foreign.scm 168 */
																obj_t BgL_carzd21139zd2_1317;
																obj_t BgL_cdrzd21140zd2_1318;

																BgL_carzd21139zd2_1317 =
																	CAR(BgL_cdrzd21135zd2_1313);
																BgL_cdrzd21140zd2_1318 =
																	CDR(BgL_cdrzd21135zd2_1313);
																if (SYMBOLP(BgL_carzd21139zd2_1317))
																	{	/* Module/foreign.scm 168 */
																		if (PAIRP(BgL_cdrzd21140zd2_1318))
																			{	/* Module/foreign.scm 168 */
																				obj_t BgL_cdrzd21147zd2_1321;

																				BgL_cdrzd21147zd2_1321 =
																					CDR(BgL_cdrzd21140zd2_1318);
																				if (PAIRP(BgL_cdrzd21147zd2_1321))
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_carzd21150zd2_1323;

																						BgL_carzd21150zd2_1323 =
																							CAR(BgL_cdrzd21147zd2_1321);
																						if (STRINGP(BgL_carzd21150zd2_1323))
																							{	/* Module/foreign.scm 168 */
																								if (NULLP(CDR
																										(BgL_cdrzd21147zd2_1321)))
																									{	/* Module/foreign.scm 168 */
																										BgL_idz00_1290 =
																											BgL_carzd21139zd2_1317;
																										BgL_protoz00_1291 =
																											CAR
																											(BgL_cdrzd21140zd2_1318);
																										BgL_cnz00_1292 =
																											BgL_carzd21150zd2_1323;
																									BgL_tagzd21103zd2_1293:
																										{	/* Module/foreign.scm 177 */
																											obj_t BgL_pidz00_1456;

																											BgL_pidz00_1456 =
																												BGl_parsezd2idzd2zzast_identz00
																												(BgL_idz00_1290,
																												BGl_findzd2locationzd2zztools_locationz00
																												(BgL_externz00_31));
																											{	/* Module/foreign.scm 177 */
																												obj_t BgL_lnz00_1457;

																												BgL_lnz00_1457 =
																													CAR(BgL_pidz00_1456);
																												{	/* Module/foreign.scm 178 */
																													obj_t
																														BgL_typez00_1458;
																													{	/* Module/foreign.scm 179 */
																														obj_t
																															BgL_arg1796z00_1467;
																														BgL_arg1796z00_1467
																															=
																															BGl_defaultzd2czd2typez00zzmodule_foreignz00
																															(CDR
																															(BgL_pidz00_1456),
																															BgL_externz00_31);
																														BgL_typez00_1458 =
																															(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_arg1796z00_1467)))->BgL_idz00);
																													}
																													{	/* Module/foreign.scm 179 */

																														{	/* Module/foreign.scm 180 */
																															bool_t
																																BgL_test2672z00_3403;
																															{	/* Module/foreign.scm 180 */
																																obj_t
																																	BgL_xz00_2932;
																																BgL_xz00_2932 =
																																	BGl_checkzd2idzd2zzast_identz00
																																	(BgL_pidz00_1456,
																																	BgL_externz00_31);
																																((bool_t) 1);
																															}
																															if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_protoz00_1291))
																																{	/* Module/foreign.scm 181 */
																																	BgL_test2672z00_3403
																																		=
																																		((bool_t)
																																		0);
																																}
																															else
																																{	/* Module/foreign.scm 181 */
																																	BgL_test2672z00_3403
																																		=
																																		((bool_t)
																																		1);
																																}
																															if (BgL_test2672z00_3403)
																																{	/* Module/foreign.scm 182 */
																																	obj_t
																																		BgL_list1788z00_1462;
																																	BgL_list1788z00_1462
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string2549z00zzmodule_foreignz00,
																																		BGl_string2557z00zzmodule_foreignz00,
																																		BgL_externz00_31,
																																		BgL_list1788z00_1462);
																																}
																															else
																																{	/* Module/foreign.scm 183 */
																																	bool_t
																																		BgL_infixzf3zf3_1463;
																																	BgL_infixzf3zf3_1463
																																		=
																																		(CAR((
																																				(obj_t)
																																				BgL_externz00_31))
																																		==
																																		CNST_TABLE_REF
																																		(((long)
																																				3)));
																																	return (
																																		(obj_t)
																																		BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																		(BgL_lnz00_1457,
																																			BFALSE,
																																			CNST_TABLE_REF
																																			(((long)
																																					0)),
																																			BgL_cnz00_1292,
																																			BgL_typez00_1458,
																																			BgL_protoz00_1291,
																																			BgL_infixzf3zf3_1463,
																																			((bool_t)
																																				1),
																																			BgL_externz00_31,
																																			BFALSE));
																									}}}}}}}
																								else
																									{	/* Module/foreign.scm 168 */
																									BgL_tagzd21105zd2_1297:
																										{	/* Module/foreign.scm 195 */
																											obj_t
																												BgL_list1812z00_1478;
																											BgL_list1812z00_1478 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2549z00zzmodule_foreignz00,
																												BGl_string2557z00zzmodule_foreignz00,
																												BgL_externz00_31,
																												BgL_list1812z00_1478);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 168 */
																								goto BgL_tagzd21105zd2_1297;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_cdrzd21197zd2_1329;

																						BgL_cdrzd21197zd2_1329 =
																							CDR(BgL_externz00_31);
																						{	/* Module/foreign.scm 168 */
																							obj_t BgL_carzd21202zd2_1330;
																							obj_t BgL_cdrzd21203zd2_1331;

																							BgL_carzd21202zd2_1330 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd21197zd2_1329));
																							BgL_cdrzd21203zd2_1331 =
																								CDR(((obj_t)
																									BgL_cdrzd21197zd2_1329));
																							if (SYMBOLP
																								(BgL_carzd21202zd2_1330))
																								{	/* Module/foreign.scm 168 */
																									obj_t BgL_carzd21211zd2_1333;

																									BgL_carzd21211zd2_1333 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd21203zd2_1331));
																									if (STRINGP
																										(BgL_carzd21211zd2_1333))
																										{	/* Module/foreign.scm 168 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd21203zd2_1331))))
																												{	/* Module/foreign.scm 168 */
																													BgL_idz00_1294 =
																														BgL_carzd21202zd2_1330;
																													BgL_czd2namezd2_1295 =
																														BgL_carzd21211zd2_1333;
																												BgL_tagzd21104zd2_1296:
																													{	/* Module/foreign.scm 188 */
																														obj_t
																															BgL_pidz00_1470;
																														BgL_pidz00_1470 =
																															BGl_parsezd2idzd2zzast_identz00
																															(BgL_idz00_1294,
																															BGl_findzd2locationzd2zztools_locationz00
																															(BgL_externz00_31));
																														{	/* Module/foreign.scm 188 */
																															obj_t
																																BgL_lzd2namezd2_1471;
																															BgL_lzd2namezd2_1471
																																=
																																CAR
																																(BgL_pidz00_1470);
																															{	/* Module/foreign.scm 189 */
																																obj_t
																																	BgL_typez00_1472;
																																{	/* Module/foreign.scm 190 */
																																	obj_t
																																		BgL_arg1808z00_1475;
																																	BgL_arg1808z00_1475
																																		=
																																		BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																		(CDR
																																		(BgL_pidz00_1470),
																																		BgL_externz00_31);
																																	BgL_typez00_1472
																																		=
																																		(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_arg1808z00_1475)))->BgL_idz00);
																																}
																																{	/* Module/foreign.scm 190 */

																																	{	/* Module/foreign.scm 191 */
																																		obj_t
																																			BgL_xz00_2933;
																																		BgL_xz00_2933
																																			=
																																			BGl_checkzd2idzd2zzast_identz00
																																			(BgL_pidz00_1470,
																																			BgL_externz00_31);
																																		((bool_t)
																																			1);
																																	}
																																	return
																																		((obj_t)
																																		BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																																		(BgL_lzd2namezd2_1471,
																																			BFALSE,
																																			BgL_czd2namezd2_1295,
																																			BgL_typez00_1472,
																																			((bool_t)
																																				1),
																																			BgL_externz00_31,
																																			BFALSE));
																																}
																															}
																														}
																													}
																												}
																											else
																												{	/* Module/foreign.scm 168 */
																													goto
																														BgL_tagzd21105zd2_1297;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 168 */
																											goto
																												BgL_tagzd21105zd2_1297;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 168 */
																									goto BgL_tagzd21105zd2_1297;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 168 */
																				goto BgL_tagzd21105zd2_1297;
																			}
																	}
																else
																	{	/* Module/foreign.scm 168 */
																		obj_t BgL_cdrzd21254zd2_1338;

																		BgL_cdrzd21254zd2_1338 =
																			CDR(BgL_externz00_31);
																		{	/* Module/foreign.scm 168 */
																			obj_t BgL_carzd21257zd2_1339;
																			obj_t BgL_cdrzd21258zd2_1340;

																			BgL_carzd21257zd2_1339 =
																				CAR(((obj_t) BgL_cdrzd21254zd2_1338));
																			BgL_cdrzd21258zd2_1340 =
																				CDR(((obj_t) BgL_cdrzd21254zd2_1338));
																			if (SYMBOLP(BgL_carzd21257zd2_1339))
																				{	/* Module/foreign.scm 168 */
																					if (PAIRP(BgL_cdrzd21258zd2_1340))
																						{	/* Module/foreign.scm 168 */
																							obj_t BgL_carzd21263zd2_1343;

																							BgL_carzd21263zd2_1343 =
																								CAR(BgL_cdrzd21258zd2_1340);
																							if (STRINGP
																								(BgL_carzd21263zd2_1343))
																								{	/* Module/foreign.scm 168 */
																									if (NULLP(CDR
																											(BgL_cdrzd21258zd2_1340)))
																										{
																											obj_t
																												BgL_czd2namezd2_3460;
																											obj_t BgL_idz00_3459;

																											BgL_idz00_3459 =
																												BgL_carzd21257zd2_1339;
																											BgL_czd2namezd2_3460 =
																												BgL_carzd21263zd2_1343;
																											BgL_czd2namezd2_1295 =
																												BgL_czd2namezd2_3460;
																											BgL_idz00_1294 =
																												BgL_idz00_3459;
																											goto
																												BgL_tagzd21104zd2_1296;
																										}
																									else
																										{	/* Module/foreign.scm 168 */
																											goto
																												BgL_tagzd21105zd2_1297;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 168 */
																									goto BgL_tagzd21105zd2_1297;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 168 */
																							goto BgL_tagzd21105zd2_1297;
																						}
																				}
																			else
																				{	/* Module/foreign.scm 168 */
																					goto BgL_tagzd21105zd2_1297;
																				}
																		}
																	}
															}
														else
															{	/* Module/foreign.scm 168 */
																goto BgL_tagzd21105zd2_1297;
															}
													}
												else
													{	/* Module/foreign.scm 168 */
														obj_t BgL_cdrzd21301zd2_1348;

														BgL_cdrzd21301zd2_1348 = CDR(BgL_externz00_31);
														if (
															(CAR(BgL_externz00_31) ==
																CNST_TABLE_REF(((long) 3))))
															{	/* Module/foreign.scm 168 */
																if (PAIRP(BgL_cdrzd21301zd2_1348))
																	{	/* Module/foreign.scm 168 */
																		obj_t BgL_cdrzd21306zd2_1352;

																		BgL_cdrzd21306zd2_1352 =
																			CDR(BgL_cdrzd21301zd2_1348);
																		if (
																			(CAR(BgL_cdrzd21301zd2_1348) ==
																				CNST_TABLE_REF(((long) 7))))
																			{	/* Module/foreign.scm 168 */
																				if (PAIRP(BgL_cdrzd21306zd2_1352))
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_carzd21310zd2_1356;
																						obj_t BgL_cdrzd21311zd2_1357;

																						BgL_carzd21310zd2_1356 =
																							CAR(BgL_cdrzd21306zd2_1352);
																						BgL_cdrzd21311zd2_1357 =
																							CDR(BgL_cdrzd21306zd2_1352);
																						if (SYMBOLP(BgL_carzd21310zd2_1356))
																							{	/* Module/foreign.scm 168 */
																								if (PAIRP
																									(BgL_cdrzd21311zd2_1357))
																									{	/* Module/foreign.scm 168 */
																										obj_t
																											BgL_cdrzd21318zd2_1360;
																										BgL_cdrzd21318zd2_1360 =
																											CDR
																											(BgL_cdrzd21311zd2_1357);
																										if (PAIRP
																											(BgL_cdrzd21318zd2_1360))
																											{	/* Module/foreign.scm 168 */
																												obj_t
																													BgL_carzd21321zd2_1362;
																												BgL_carzd21321zd2_1362 =
																													CAR
																													(BgL_cdrzd21318zd2_1360);
																												if (STRINGP
																													(BgL_carzd21321zd2_1362))
																													{	/* Module/foreign.scm 168 */
																														if (NULLP(CDR
																																(BgL_cdrzd21318zd2_1360)))
																															{
																																obj_t
																																	BgL_cnz00_3493;
																																obj_t
																																	BgL_protoz00_3491;
																																obj_t
																																	BgL_idz00_3490;
																																BgL_idz00_3490 =
																																	BgL_carzd21310zd2_1356;
																																BgL_protoz00_3491
																																	=
																																	CAR
																																	(BgL_cdrzd21311zd2_1357);
																																BgL_cnz00_3493 =
																																	BgL_carzd21321zd2_1362;
																																BgL_cnz00_1292 =
																																	BgL_cnz00_3493;
																																BgL_protoz00_1291
																																	=
																																	BgL_protoz00_3491;
																																BgL_idz00_1290 =
																																	BgL_idz00_3490;
																																goto
																																	BgL_tagzd21103zd2_1293;
																															}
																														else
																															{	/* Module/foreign.scm 168 */
																															BgL_tagzd21108zd2_1305:
																																{	/* Module/foreign.scm 215 */
																																	obj_t
																																		BgL_list1828z00_1499;
																																	BgL_list1828z00_1499
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BNIL,
																																		BNIL);
																																	return
																																		BGl_userzd2errorzd2zztools_errorz00
																																		(BGl_string2549z00zzmodule_foreignz00,
																																		BGl_string2557z00zzmodule_foreignz00,
																																		BgL_externz00_31,
																																		BgL_list1828z00_1499);
																																}
																															}
																													}
																												else
																													{	/* Module/foreign.scm 168 */
																														goto
																															BgL_tagzd21108zd2_1305;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 168 */
																												goto
																													BgL_tagzd21108zd2_1305;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 168 */
																										obj_t
																											BgL_carzd21410zd2_1368;
																										BgL_carzd21410zd2_1368 =
																											CAR(BgL_externz00_31);
																										if (SYMBOLP
																											(BgL_carzd21410zd2_1368))
																											{	/* Module/foreign.scm 168 */
																												obj_t
																													BgL_cdrzd21419zd2_1371;
																												BgL_cdrzd21419zd2_1371 =
																													CDR(((obj_t)
																														BgL_cdrzd21301zd2_1348));
																												{	/* Module/foreign.scm 168 */
																													obj_t
																														BgL_carzd21423zd2_1372;
																													BgL_carzd21423zd2_1372
																														=
																														CAR(((obj_t)
																															BgL_cdrzd21419zd2_1371));
																													if (STRINGP
																														(BgL_carzd21423zd2_1372))
																														{	/* Module/foreign.scm 168 */
																															if (NULLP(CDR(
																																		((obj_t)
																																			BgL_cdrzd21419zd2_1371))))
																																{	/* Module/foreign.scm 168 */
																																	obj_t
																																		BgL_arg1692z00_1376;
																																	BgL_arg1692z00_1376
																																		=
																																		CAR(((obj_t)
																																			BgL_cdrzd21301zd2_1348));
																																	BgL_idz00_1298
																																		=
																																		BgL_carzd21410zd2_1368;
																																	BgL_protoz00_1299
																																		=
																																		BgL_arg1692z00_1376;
																																	BgL_cnz00_1300
																																		=
																																		BgL_carzd21423zd2_1372;
																																BgL_tagzd21106zd2_1301:
																																	{	/* Module/foreign.scm 198 */
																																		obj_t
																																			BgL_pidz00_1479;
																																		BgL_pidz00_1479
																																			=
																																			BGl_parsezd2idzd2zzast_identz00
																																			(BgL_idz00_1298,
																																			BGl_findzd2locationzd2zztools_locationz00
																																			(BgL_externz00_31));
																																		{	/* Module/foreign.scm 198 */
																																			obj_t
																																				BgL_lnz00_1480;
																																			BgL_lnz00_1480
																																				=
																																				CAR
																																				(BgL_pidz00_1479);
																																			{	/* Module/foreign.scm 199 */
																																				obj_t
																																					BgL_typez00_1481;
																																				{	/* Module/foreign.scm 200 */
																																					obj_t
																																						BgL_arg1820z00_1488;
																																					BgL_arg1820z00_1488
																																						=
																																						BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																						(CDR
																																						(BgL_pidz00_1479),
																																						BgL_externz00_31);
																																					BgL_typez00_1481
																																						=
																																						(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_arg1820z00_1488)))->BgL_idz00);
																																				}
																																				{	/* Module/foreign.scm 200 */

																																					{	/* Module/foreign.scm 201 */
																																						bool_t
																																							BgL_test2693z00_3518;
																																						{	/* Module/foreign.scm 201 */
																																							obj_t
																																								BgL_xz00_2934;
																																							BgL_xz00_2934
																																								=
																																								BGl_checkzd2idzd2zzast_identz00
																																								(BgL_pidz00_1479,
																																								BgL_externz00_31);
																																							((bool_t) 1);
																																						}
																																						if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_protoz00_1299))
																																							{	/* Module/foreign.scm 202 */
																																								BgL_test2693z00_3518
																																									=
																																									(
																																									(bool_t)
																																									0);
																																							}
																																						else
																																							{	/* Module/foreign.scm 202 */
																																								BgL_test2693z00_3518
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						if (BgL_test2693z00_3518)
																																							{	/* Module/foreign.scm 203 */
																																								obj_t
																																									BgL_list1816z00_1485;
																																								BgL_list1816z00_1485
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BNIL,
																																									BNIL);
																																								return
																																									BGl_userzd2errorzd2zztools_errorz00
																																									(BGl_string2549z00zzmodule_foreignz00,
																																									BGl_string2557z00zzmodule_foreignz00,
																																									BgL_externz00_31,
																																									BgL_list1816z00_1485);
																																							}
																																						else
																																							{	/* Module/foreign.scm 201 */
																																								return
																																									(
																																									(obj_t)
																																									BGl_declarezd2globalzd2cfunz12z12zzast_glozd2declzd2
																																									(BgL_lnz00_1480,
																																										BFALSE,
																																										CNST_TABLE_REF
																																										(((long) 0)), BgL_cnz00_1300, BgL_typez00_1481, BgL_protoz00_1299, ((bool_t) 0), ((bool_t) 0), BgL_externz00_31, BFALSE));
																																}}}}}}}
																															else
																																{	/* Module/foreign.scm 168 */
																																	goto
																																		BgL_tagzd21108zd2_1305;
																																}
																														}
																													else
																														{	/* Module/foreign.scm 168 */
																															goto
																																BgL_tagzd21108zd2_1305;
																														}
																												}
																											}
																										else
																											{	/* Module/foreign.scm 168 */
																												goto
																													BgL_tagzd21108zd2_1305;
																											}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 168 */
																								obj_t BgL_carzd21459zd2_1378;

																								BgL_carzd21459zd2_1378 =
																									CAR(BgL_externz00_31);
																								if (SYMBOLP
																									(BgL_carzd21459zd2_1378))
																									{	/* Module/foreign.scm 168 */
																										obj_t
																											BgL_cdrzd21467zd2_1381;
																										BgL_cdrzd21467zd2_1381 =
																											CDR(((obj_t)
																												BgL_cdrzd21301zd2_1348));
																										{	/* Module/foreign.scm 168 */
																											obj_t
																												BgL_carzd21470zd2_1382;
																											BgL_carzd21470zd2_1382 =
																												CAR(((obj_t)
																													BgL_cdrzd21467zd2_1381));
																											if (STRINGP
																												(BgL_carzd21470zd2_1382))
																												{	/* Module/foreign.scm 168 */
																													if (NULLP(CDR(
																																((obj_t)
																																	BgL_cdrzd21467zd2_1381))))
																														{	/* Module/foreign.scm 168 */
																															obj_t
																																BgL_arg1704z00_1386;
																															BgL_arg1704z00_1386
																																=
																																CAR(((obj_t)
																																	BgL_cdrzd21301zd2_1348));
																															{
																																obj_t
																																	BgL_cnz00_3544;
																																obj_t
																																	BgL_protoz00_3543;
																																obj_t
																																	BgL_idz00_3542;
																																BgL_idz00_3542 =
																																	BgL_carzd21459zd2_1378;
																																BgL_protoz00_3543
																																	=
																																	BgL_arg1704z00_1386;
																																BgL_cnz00_3544 =
																																	BgL_carzd21470zd2_1382;
																																BgL_cnz00_1300 =
																																	BgL_cnz00_3544;
																																BgL_protoz00_1299
																																	=
																																	BgL_protoz00_3543;
																																BgL_idz00_1298 =
																																	BgL_idz00_3542;
																																goto
																																	BgL_tagzd21106zd2_1301;
																															}
																														}
																													else
																														{	/* Module/foreign.scm 168 */
																															goto
																																BgL_tagzd21108zd2_1305;
																														}
																												}
																											else
																												{	/* Module/foreign.scm 168 */
																													goto
																														BgL_tagzd21108zd2_1305;
																												}
																										}
																									}
																								else
																									{	/* Module/foreign.scm 168 */
																										goto BgL_tagzd21108zd2_1305;
																									}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_carzd21508zd2_1388;

																						BgL_carzd21508zd2_1388 =
																							CAR(BgL_externz00_31);
																						if (SYMBOLP(BgL_carzd21508zd2_1388))
																							{	/* Module/foreign.scm 168 */
																								obj_t BgL_carzd21514zd2_1391;

																								BgL_carzd21514zd2_1391 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21301zd2_1348));
																								if (STRINGP
																									(BgL_carzd21514zd2_1391))
																									{	/* Module/foreign.scm 168 */
																										if (NULLP(CDR(
																													((obj_t)
																														BgL_cdrzd21301zd2_1348))))
																											{	/* Module/foreign.scm 168 */
																												BgL_idz00_1302 =
																													BgL_carzd21508zd2_1388;
																												BgL_czd2namezd2_1303 =
																													BgL_carzd21514zd2_1391;
																											BgL_tagzd21107zd2_1304:
																												{	/* Module/foreign.scm 208 */
																													obj_t BgL_pidz00_1491;

																													BgL_pidz00_1491 =
																														BGl_parsezd2idzd2zzast_identz00
																														(BgL_idz00_1302,
																														BGl_findzd2locationzd2zztools_locationz00
																														(BgL_externz00_31));
																													{	/* Module/foreign.scm 208 */
																														obj_t
																															BgL_lzd2namezd2_1492;
																														BgL_lzd2namezd2_1492
																															=
																															CAR
																															(BgL_pidz00_1491);
																														{	/* Module/foreign.scm 209 */
																															obj_t
																																BgL_typez00_1493;
																															{	/* Module/foreign.scm 210 */
																																obj_t
																																	BgL_arg1825z00_1496;
																																BgL_arg1825z00_1496
																																	=
																																	BGl_defaultzd2czd2typez00zzmodule_foreignz00
																																	(CDR
																																	(BgL_pidz00_1491),
																																	BgL_externz00_31);
																																BgL_typez00_1493
																																	=
																																	(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) BgL_arg1825z00_1496)))->BgL_idz00);
																															}
																															{	/* Module/foreign.scm 210 */

																																{	/* Module/foreign.scm 211 */
																																	obj_t
																																		BgL_xz00_2935;
																																	BgL_xz00_2935
																																		=
																																		BGl_checkzd2idzd2zzast_identz00
																																		(BgL_pidz00_1491,
																																		BgL_externz00_31);
																																	((bool_t) 1);
																																}
																																return
																																	((obj_t)
																																	BGl_declarezd2globalzd2cvarz12z12zzast_glozd2declzd2
																																	(BgL_lzd2namezd2_1492,
																																		BFALSE,
																																		BgL_czd2namezd2_1303,
																																		BgL_typez00_1493,
																																		((bool_t)
																																			0),
																																		BgL_externz00_31,
																																		BFALSE));
																															}
																														}
																													}
																												}
																											}
																										else
																											{	/* Module/foreign.scm 168 */
																												goto
																													BgL_tagzd21108zd2_1305;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 168 */
																										goto BgL_tagzd21108zd2_1305;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 168 */
																								goto BgL_tagzd21108zd2_1305;
																							}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 168 */
																				obj_t BgL_carzd21536zd2_1396;

																				BgL_carzd21536zd2_1396 =
																					CAR(BgL_externz00_31);
																				if (SYMBOLP(BgL_carzd21536zd2_1396))
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_cdrzd21544zd2_1399;

																						BgL_cdrzd21544zd2_1399 =
																							CDR(
																							((obj_t) BgL_cdrzd21301zd2_1348));
																						if (PAIRP(BgL_cdrzd21544zd2_1399))
																							{	/* Module/foreign.scm 168 */
																								obj_t BgL_carzd21547zd2_1401;

																								BgL_carzd21547zd2_1401 =
																									CAR(BgL_cdrzd21544zd2_1399);
																								if (STRINGP
																									(BgL_carzd21547zd2_1401))
																									{	/* Module/foreign.scm 168 */
																										if (NULLP(CDR
																												(BgL_cdrzd21544zd2_1399)))
																											{	/* Module/foreign.scm 168 */
																												obj_t
																													BgL_arg1727z00_1405;
																												BgL_arg1727z00_1405 =
																													CAR(((obj_t)
																														BgL_cdrzd21301zd2_1348));
																												{
																													obj_t BgL_cnz00_3583;
																													obj_t
																														BgL_protoz00_3582;
																													obj_t BgL_idz00_3581;

																													BgL_idz00_3581 =
																														BgL_carzd21536zd2_1396;
																													BgL_protoz00_3582 =
																														BgL_arg1727z00_1405;
																													BgL_cnz00_3583 =
																														BgL_carzd21547zd2_1401;
																													BgL_cnz00_1300 =
																														BgL_cnz00_3583;
																													BgL_protoz00_1299 =
																														BgL_protoz00_3582;
																													BgL_idz00_1298 =
																														BgL_idz00_3581;
																													goto
																														BgL_tagzd21106zd2_1301;
																												}
																											}
																										else
																											{	/* Module/foreign.scm 168 */
																												goto
																													BgL_tagzd21108zd2_1305;
																											}
																									}
																								else
																									{	/* Module/foreign.scm 168 */
																										goto BgL_tagzd21108zd2_1305;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 168 */
																								obj_t BgL_cdrzd21568zd2_1408;

																								BgL_cdrzd21568zd2_1408 =
																									CDR(BgL_externz00_31);
																								{	/* Module/foreign.scm 168 */
																									obj_t BgL_carzd21574zd2_1410;

																									BgL_carzd21574zd2_1410 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd21568zd2_1408));
																									if (STRINGP
																										(BgL_carzd21574zd2_1410))
																										{	/* Module/foreign.scm 168 */
																											if (NULLP(CDR(
																														((obj_t)
																															BgL_cdrzd21568zd2_1408))))
																												{
																													obj_t
																														BgL_czd2namezd2_3594;
																													obj_t BgL_idz00_3593;

																													BgL_idz00_3593 =
																														BgL_carzd21536zd2_1396;
																													BgL_czd2namezd2_3594 =
																														BgL_carzd21574zd2_1410;
																													BgL_czd2namezd2_1303 =
																														BgL_czd2namezd2_3594;
																													BgL_idz00_1302 =
																														BgL_idz00_3593;
																													goto
																														BgL_tagzd21107zd2_1304;
																												}
																											else
																												{	/* Module/foreign.scm 168 */
																													goto
																														BgL_tagzd21108zd2_1305;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 168 */
																											goto
																												BgL_tagzd21108zd2_1305;
																										}
																								}
																							}
																					}
																				else
																					{	/* Module/foreign.scm 168 */
																						goto BgL_tagzd21108zd2_1305;
																					}
																			}
																	}
																else
																	{	/* Module/foreign.scm 168 */
																		goto BgL_tagzd21108zd2_1305;
																	}
															}
														else
															{	/* Module/foreign.scm 168 */
																obj_t BgL_carzd21634zd2_1424;

																BgL_carzd21634zd2_1424 = CAR(BgL_externz00_31);
																if (SYMBOLP(BgL_carzd21634zd2_1424))
																	{	/* Module/foreign.scm 168 */
																		if (PAIRP(BgL_cdrzd21301zd2_1348))
																			{	/* Module/foreign.scm 168 */
																				obj_t BgL_cdrzd21642zd2_1428;

																				BgL_cdrzd21642zd2_1428 =
																					CDR(BgL_cdrzd21301zd2_1348);
																				if (PAIRP(BgL_cdrzd21642zd2_1428))
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_carzd21645zd2_1430;

																						BgL_carzd21645zd2_1430 =
																							CAR(BgL_cdrzd21642zd2_1428);
																						if (STRINGP(BgL_carzd21645zd2_1430))
																							{	/* Module/foreign.scm 168 */
																								if (NULLP(CDR
																										(BgL_cdrzd21642zd2_1428)))
																									{
																										obj_t BgL_cnz00_3612;
																										obj_t BgL_protoz00_3610;
																										obj_t BgL_idz00_3609;

																										BgL_idz00_3609 =
																											BgL_carzd21634zd2_1424;
																										BgL_protoz00_3610 =
																											CAR
																											(BgL_cdrzd21301zd2_1348);
																										BgL_cnz00_3612 =
																											BgL_carzd21645zd2_1430;
																										BgL_cnz00_1300 =
																											BgL_cnz00_3612;
																										BgL_protoz00_1299 =
																											BgL_protoz00_3610;
																										BgL_idz00_1298 =
																											BgL_idz00_3609;
																										goto BgL_tagzd21106zd2_1301;
																									}
																								else
																									{	/* Module/foreign.scm 168 */
																										goto BgL_tagzd21108zd2_1305;
																									}
																							}
																						else
																							{	/* Module/foreign.scm 168 */
																								goto BgL_tagzd21108zd2_1305;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 168 */
																						obj_t BgL_cdrzd21669zd2_1437;

																						BgL_cdrzd21669zd2_1437 =
																							CDR(BgL_externz00_31);
																						{	/* Module/foreign.scm 168 */
																							obj_t BgL_carzd21677zd2_1439;

																							BgL_carzd21677zd2_1439 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd21669zd2_1437));
																							if (STRINGP
																								(BgL_carzd21677zd2_1439))
																								{	/* Module/foreign.scm 168 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd21669zd2_1437))))
																										{
																											obj_t
																												BgL_czd2namezd2_3623;
																											obj_t BgL_idz00_3622;

																											BgL_idz00_3622 =
																												BgL_carzd21634zd2_1424;
																											BgL_czd2namezd2_3623 =
																												BgL_carzd21677zd2_1439;
																											BgL_czd2namezd2_1303 =
																												BgL_czd2namezd2_3623;
																											BgL_idz00_1302 =
																												BgL_idz00_3622;
																											goto
																												BgL_tagzd21107zd2_1304;
																										}
																									else
																										{	/* Module/foreign.scm 168 */
																											goto
																												BgL_tagzd21108zd2_1305;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 168 */
																									goto BgL_tagzd21108zd2_1305;
																								}
																						}
																					}
																			}
																		else
																			{	/* Module/foreign.scm 168 */
																				goto BgL_tagzd21108zd2_1305;
																			}
																	}
																else
																	{	/* Module/foreign.scm 168 */
																		goto BgL_tagzd21108zd2_1305;
																	}
															}
													}
											}
									}
							}
					}
				else
					{	/* Module/foreign.scm 168 */
						goto BgL_tagzd21108zd2_1305;
					}
			}
		}

	}



/* parse-c-foreign-type */
	obj_t BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00(obj_t
		BgL_typez00_33)
	{
		{	/* Module/foreign.scm 220 */
			{
				obj_t BgL_idz00_1503;
				obj_t BgL_tzd2expzd2_1504;
				obj_t BgL_namez00_1505;

				if (PAIRP(BgL_typez00_33))
					{	/* Module/foreign.scm 221 */
						obj_t BgL_cdrzd21753zd2_1510;

						BgL_cdrzd21753zd2_1510 = CDR(BgL_typez00_33);
						if ((CAR(BgL_typez00_33) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 221 */
								if (PAIRP(BgL_cdrzd21753zd2_1510))
									{	/* Module/foreign.scm 221 */
										obj_t BgL_carzd21756zd2_1514;
										obj_t BgL_cdrzd21757zd2_1515;

										BgL_carzd21756zd2_1514 = CAR(BgL_cdrzd21753zd2_1510);
										BgL_cdrzd21757zd2_1515 = CDR(BgL_cdrzd21753zd2_1510);
										if (SYMBOLP(BgL_carzd21756zd2_1514))
											{	/* Module/foreign.scm 221 */
												if (PAIRP(BgL_cdrzd21757zd2_1515))
													{	/* Module/foreign.scm 221 */
														obj_t BgL_carzd21762zd2_1518;

														BgL_carzd21762zd2_1518 =
															CAR(BgL_cdrzd21757zd2_1515);
														if (STRINGP(BgL_carzd21762zd2_1518))
															{	/* Module/foreign.scm 221 */
																if (NULLP(CDR(BgL_cdrzd21757zd2_1515)))
																	{	/* Module/foreign.scm 221 */
																		return
																			((obj_t)
																			BGl_declarezd2typez12zc0zztype_envz00
																			(BgL_carzd21756zd2_1514,
																				BgL_carzd21762zd2_1518,
																				CNST_TABLE_REF(((long) 9))));
																	}
																else
																	{	/* Module/foreign.scm 221 */
																		obj_t BgL_carzd21782zd2_1523;
																		obj_t BgL_cdrzd21783zd2_1524;

																		BgL_carzd21782zd2_1523 =
																			CAR(((obj_t) BgL_cdrzd21753zd2_1510));
																		BgL_cdrzd21783zd2_1524 =
																			CDR(((obj_t) BgL_cdrzd21753zd2_1510));
																		if (SYMBOLP(BgL_carzd21782zd2_1523))
																			{	/* Module/foreign.scm 221 */
																				obj_t BgL_cdrzd21793zd2_1526;

																				BgL_cdrzd21793zd2_1526 =
																					CDR(((obj_t) BgL_cdrzd21783zd2_1524));
																				if (PAIRP(BgL_cdrzd21793zd2_1526))
																					{	/* Module/foreign.scm 221 */
																						obj_t BgL_carzd21797zd2_1528;

																						BgL_carzd21797zd2_1528 =
																							CAR(BgL_cdrzd21793zd2_1526);
																						if (STRINGP(BgL_carzd21797zd2_1528))
																							{	/* Module/foreign.scm 221 */
																								if (NULLP(CDR
																										(BgL_cdrzd21793zd2_1526)))
																									{	/* Module/foreign.scm 221 */
																										obj_t BgL_arg1845z00_1532;

																										BgL_arg1845z00_1532 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd21783zd2_1524));
																										BgL_idz00_1503 =
																											BgL_carzd21782zd2_1523;
																										BgL_tzd2expzd2_1504 =
																											BgL_arg1845z00_1532;
																										BgL_namez00_1505 =
																											BgL_carzd21797zd2_1528;
																									BgL_tagzd21744zd2_1506:
																										if (BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(BgL_tzd2expzd2_1504))
																											{	/* Module/foreign.scm 226 */
																												obj_t BgL_ctypez00_1562;
																												obj_t BgL_locz00_1563;

																												BgL_ctypez00_1562 =
																													BGl_declarezd2czd2typez12z12zzforeign_ctypez00
																													(BgL_typez00_33,
																													BgL_idz00_1503,
																													BgL_tzd2expzd2_1504,
																													BgL_namez00_1505);
																												BgL_locz00_1563 =
																													BGl_findzd2locationzd2zztools_locationz00
																													(BgL_typez00_33);
																												if (BGl_isazf3zf3zz__objectz00(BgL_ctypez00_1562, BGl_typez00zztype_typez00))
																													{	/* Module/foreign.scm 231 */
																														obj_t
																															BgL_accessesz00_1565;
																														BgL_accessesz00_1565
																															=
																															BGl_makezd2ctypezd2accessesz12z12zzforeign_accessz00
																															(((BgL_typez00_bglt) BgL_ctypez00_1562), ((BgL_typez00_bglt) BgL_ctypez00_1562), BgL_locz00_1563);
																														BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00
																															=
																															BGl_appendzd221011zd2zzmodule_foreignz00
																															(((obj_t)
																																BgL_accessesz00_1565),
																															BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00);
																														{	/* Module/foreign.scm 236 */
																															bool_t
																																BgL_test2727z00_3677;
																															if (BGl_isazf3zf3zz__objectz00(BgL_ctypez00_1562, BGl_caliasz00zzforeign_ctypez00))
																																{	/* Module/foreign.scm 236 */
																																	obj_t
																																		BgL_arg1887z00_1583;
																																	BgL_arg1887z00_1583
																																		=
																																		(((BgL_typez00_bglt) COBJECT(((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_1562))))->BgL_aliasz00);
																																	BgL_test2727z00_3677
																																		=
																																		BGl_isazf3zf3zz__objectz00
																																		(BgL_arg1887z00_1583,
																																		BGl_cstructz00zzforeign_ctypez00);
																																}
																															else
																																{	/* Module/foreign.scm 236 */
																																	BgL_test2727z00_3677
																																		=
																																		((bool_t)
																																		0);
																																}
																															if (BgL_test2727z00_3677)
																																{	/* Module/foreign.scm 238 */
																																	obj_t
																																		BgL_arg1872z00_1569;
																																	{	/* Module/foreign.scm 238 */
																																		obj_t
																																			BgL_arg1873z00_1570;
																																		{	/* Module/foreign.scm 238 */
																																			obj_t
																																				BgL_arg1874z00_1571;
																																			obj_t
																																				BgL_arg1876z00_1572;
																																			{	/* Module/foreign.scm 238 */
																																				obj_t
																																					BgL_arg1877z00_1573;
																																				{	/* Module/foreign.scm 238 */
																																					obj_t
																																						BgL_arg1878z00_1574;
																																					obj_t
																																						BgL_arg1879z00_1575;
																																					{	/* Module/foreign.scm 238 */
																																						obj_t
																																							BgL_res2409z00_2549;
																																						{	/* Module/foreign.scm 238 */
																																							obj_t
																																								BgL_arg1466z00_2548;
																																							BgL_arg1466z00_2548
																																								=
																																								SYMBOL_TO_STRING
																																								(BgL_idz00_1503);
																																							BgL_res2409z00_2549
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg1466z00_2548);
																																						}
																																						BgL_arg1878z00_1574
																																							=
																																							BgL_res2409z00_2549;
																																					}
																																					{	/* Module/foreign.scm 238 */
																																						obj_t
																																							BgL_res2410z00_2552;
																																						{	/* Module/foreign.scm 238 */
																																							obj_t
																																								BgL_symbolz00_2550;
																																							BgL_symbolz00_2550
																																								=
																																								CNST_TABLE_REF
																																								(
																																								((long) 8));
																																							{	/* Module/foreign.scm 238 */
																																								obj_t
																																									BgL_arg1466z00_2551;
																																								BgL_arg1466z00_2551
																																									=
																																									SYMBOL_TO_STRING
																																									(BgL_symbolz00_2550);
																																								BgL_res2410z00_2552
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg1466z00_2551);
																																						}}
																																						BgL_arg1879z00_1575
																																							=
																																							BgL_res2410z00_2552;
																																					}
																																					BgL_arg1877z00_1573
																																						=
																																						string_append
																																						(BgL_arg1878z00_1574,
																																						BgL_arg1879z00_1575);
																																				}
																																				BgL_arg1874z00_1571
																																					=
																																					bstring_to_symbol
																																					(BgL_arg1877z00_1573);
																																			}
																																			{	/* Module/foreign.scm 239 */
																																				obj_t
																																					BgL_arg1881z00_1576;
																																				obj_t
																																					BgL_arg1882z00_1577;
																																				{	/* Module/foreign.scm 239 */
																																					obj_t
																																						BgL_arg1883z00_1578;
																																					{	/* Module/foreign.scm 239 */
																																						obj_t
																																							BgL_arg1884z00_1579;
																																						obj_t
																																							BgL_arg1885z00_1580;
																																						{	/* Module/foreign.scm 239 */
																																							obj_t
																																								BgL_res2412z00_2557;
																																							{	/* Module/foreign.scm 239 */
																																								obj_t
																																									BgL_arg1466z00_2556;
																																								BgL_arg1466z00_2556
																																									=
																																									SYMBOL_TO_STRING
																																									(
																																									((obj_t) BgL_tzd2expzd2_1504));
																																								BgL_res2412z00_2557
																																									=
																																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																									(BgL_arg1466z00_2556);
																																							}
																																							BgL_arg1884z00_1579
																																								=
																																								BgL_res2412z00_2557;
																																						}
																																						{	/* Module/foreign.scm 239 */
																																							obj_t
																																								BgL_res2413z00_2560;
																																							{	/* Module/foreign.scm 239 */
																																								obj_t
																																									BgL_symbolz00_2558;
																																								BgL_symbolz00_2558
																																									=
																																									CNST_TABLE_REF
																																									(
																																									((long) 8));
																																								{	/* Module/foreign.scm 239 */
																																									obj_t
																																										BgL_arg1466z00_2559;
																																									BgL_arg1466z00_2559
																																										=
																																										SYMBOL_TO_STRING
																																										(BgL_symbolz00_2558);
																																									BgL_res2413z00_2560
																																										=
																																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																										(BgL_arg1466z00_2559);
																																							}}
																																							BgL_arg1885z00_1580
																																								=
																																								BgL_res2413z00_2560;
																																						}
																																						BgL_arg1883z00_1578
																																							=
																																							string_append
																																							(BgL_arg1884z00_1579,
																																							BgL_arg1885z00_1580);
																																					}
																																					BgL_arg1881z00_1576
																																						=
																																						bstring_to_symbol
																																						(BgL_arg1883z00_1578);
																																				}
																																				{	/* Module/foreign.scm 240 */
																																					obj_t
																																						BgL_arg1886z00_1581;
																																					BgL_arg1886z00_1581
																																						=
																																						BGl_makezd2pointerzd2tozd2namezd2zztype_toolsz00
																																						(((BgL_typez00_bglt) ((BgL_typez00_bglt) BgL_ctypez00_1562)));
																																					BgL_arg1882z00_1577
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1886z00_1581,
																																						BNIL);
																																				}
																																				BgL_arg1876z00_1572
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1881z00_1576,
																																					BgL_arg1882z00_1577);
																																			}
																																			BgL_arg1873z00_1570
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1874z00_1571,
																																				BgL_arg1876z00_1572);
																																		}
																																		BgL_arg1872z00_1569
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					5)),
																																			BgL_arg1873z00_1570);
																																	}
																																	BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																																		(BgL_arg1872z00_1569);
																																}
																															else
																																{	/* Module/foreign.scm 236 */
																																	BFALSE;
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 230 */
																														BFALSE;
																													}
																												return BUNSPEC;
																											}
																										else
																											{	/* Module/foreign.scm 242 */
																												obj_t
																													BgL_list1888z00_1584;
																												BgL_list1888z00_1584 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												return
																													BGl_userzd2errorzd2zztools_errorz00
																													(BGl_string2549z00zzmodule_foreignz00,
																													BGl_string2558z00zzmodule_foreignz00,
																													BgL_typez00_33,
																													BgL_list1888z00_1584);
																											}
																									}
																								else
																									{	/* Module/foreign.scm 221 */
																									BgL_tagzd21745zd2_1507:
																										{	/* Module/foreign.scm 244 */
																											obj_t
																												BgL_list1889z00_1585;
																											BgL_list1889z00_1585 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2549z00zzmodule_foreignz00,
																												BGl_string2558z00zzmodule_foreignz00,
																												BgL_typez00_33,
																												BgL_list1889z00_1585);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 221 */
																								goto BgL_tagzd21745zd2_1507;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 221 */
																						goto BgL_tagzd21745zd2_1507;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 221 */
																				goto BgL_tagzd21745zd2_1507;
																			}
																	}
															}
														else
															{	/* Module/foreign.scm 221 */
																obj_t BgL_carzd21815zd2_1536;
																obj_t BgL_cdrzd21816zd2_1537;

																BgL_carzd21815zd2_1536 =
																	CAR(((obj_t) BgL_cdrzd21753zd2_1510));
																BgL_cdrzd21816zd2_1537 =
																	CDR(((obj_t) BgL_cdrzd21753zd2_1510));
																if (SYMBOLP(BgL_carzd21815zd2_1536))
																	{	/* Module/foreign.scm 221 */
																		obj_t BgL_cdrzd21825zd2_1539;

																		BgL_cdrzd21825zd2_1539 =
																			CDR(((obj_t) BgL_cdrzd21816zd2_1537));
																		if (PAIRP(BgL_cdrzd21825zd2_1539))
																			{	/* Module/foreign.scm 221 */
																				obj_t BgL_carzd21828zd2_1541;

																				BgL_carzd21828zd2_1541 =
																					CAR(BgL_cdrzd21825zd2_1539);
																				if (STRINGP(BgL_carzd21828zd2_1541))
																					{	/* Module/foreign.scm 221 */
																						if (NULLP(CDR
																								(BgL_cdrzd21825zd2_1539)))
																							{	/* Module/foreign.scm 221 */
																								obj_t BgL_arg1853z00_1545;

																								BgL_arg1853z00_1545 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd21816zd2_1537));
																								{
																									obj_t BgL_namez00_3732;
																									obj_t BgL_tzd2expzd2_3731;
																									obj_t BgL_idz00_3730;

																									BgL_idz00_3730 =
																										BgL_carzd21815zd2_1536;
																									BgL_tzd2expzd2_3731 =
																										BgL_arg1853z00_1545;
																									BgL_namez00_3732 =
																										BgL_carzd21828zd2_1541;
																									BgL_namez00_1505 =
																										BgL_namez00_3732;
																									BgL_tzd2expzd2_1504 =
																										BgL_tzd2expzd2_3731;
																									BgL_idz00_1503 =
																										BgL_idz00_3730;
																									goto BgL_tagzd21744zd2_1506;
																								}
																							}
																						else
																							{	/* Module/foreign.scm 221 */
																								goto BgL_tagzd21745zd2_1507;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 221 */
																						goto BgL_tagzd21745zd2_1507;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 221 */
																				goto BgL_tagzd21745zd2_1507;
																			}
																	}
																else
																	{	/* Module/foreign.scm 221 */
																		goto BgL_tagzd21745zd2_1507;
																	}
															}
													}
												else
													{	/* Module/foreign.scm 221 */
														goto BgL_tagzd21745zd2_1507;
													}
											}
										else
											{	/* Module/foreign.scm 221 */
												obj_t BgL_carzd21851zd2_1548;
												obj_t BgL_cdrzd21852zd2_1549;

												BgL_carzd21851zd2_1548 =
													CAR(((obj_t) BgL_cdrzd21753zd2_1510));
												BgL_cdrzd21852zd2_1549 =
													CDR(((obj_t) BgL_cdrzd21753zd2_1510));
												if (SYMBOLP(BgL_carzd21851zd2_1548))
													{	/* Module/foreign.scm 221 */
														if (PAIRP(BgL_cdrzd21852zd2_1549))
															{	/* Module/foreign.scm 221 */
																obj_t BgL_cdrzd21859zd2_1552;

																BgL_cdrzd21859zd2_1552 =
																	CDR(BgL_cdrzd21852zd2_1549);
																if (PAIRP(BgL_cdrzd21859zd2_1552))
																	{	/* Module/foreign.scm 221 */
																		obj_t BgL_carzd21862zd2_1554;

																		BgL_carzd21862zd2_1554 =
																			CAR(BgL_cdrzd21859zd2_1552);
																		if (STRINGP(BgL_carzd21862zd2_1554))
																			{	/* Module/foreign.scm 221 */
																				if (NULLP(CDR(BgL_cdrzd21859zd2_1552)))
																					{
																						obj_t BgL_namez00_3753;
																						obj_t BgL_tzd2expzd2_3751;
																						obj_t BgL_idz00_3750;

																						BgL_idz00_3750 =
																							BgL_carzd21851zd2_1548;
																						BgL_tzd2expzd2_3751 =
																							CAR(BgL_cdrzd21852zd2_1549);
																						BgL_namez00_3753 =
																							BgL_carzd21862zd2_1554;
																						BgL_namez00_1505 = BgL_namez00_3753;
																						BgL_tzd2expzd2_1504 =
																							BgL_tzd2expzd2_3751;
																						BgL_idz00_1503 = BgL_idz00_3750;
																						goto BgL_tagzd21744zd2_1506;
																					}
																				else
																					{	/* Module/foreign.scm 221 */
																						goto BgL_tagzd21745zd2_1507;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 221 */
																				goto BgL_tagzd21745zd2_1507;
																			}
																	}
																else
																	{	/* Module/foreign.scm 221 */
																		goto BgL_tagzd21745zd2_1507;
																	}
															}
														else
															{	/* Module/foreign.scm 221 */
																goto BgL_tagzd21745zd2_1507;
															}
													}
												else
													{	/* Module/foreign.scm 221 */
														goto BgL_tagzd21745zd2_1507;
													}
											}
									}
								else
									{	/* Module/foreign.scm 221 */
										goto BgL_tagzd21745zd2_1507;
									}
							}
						else
							{	/* Module/foreign.scm 221 */
								goto BgL_tagzd21745zd2_1507;
							}
					}
				else
					{	/* Module/foreign.scm 221 */
						goto BgL_tagzd21745zd2_1507;
					}
			}
		}

	}



/* check-c-foreign-type-exp? */
	bool_t BGl_checkzd2czd2foreignzd2typezd2expzf3zf3zzmodule_foreignz00(obj_t
		BgL_tzd2expzd2_34)
	{
		{	/* Module/foreign.scm 249 */
			{
				obj_t BgL_slotsz00_1595;
				obj_t BgL_slotsz00_1587;

				if (SYMBOLP(BgL_tzd2expzd2_34))
					{	/* Module/foreign.scm 250 */
						return ((bool_t) 1);
					}
				else
					{	/* Module/foreign.scm 250 */
						if (PAIRP(BgL_tzd2expzd2_34))
							{	/* Module/foreign.scm 250 */
								obj_t BgL_carzd21900zd2_1601;
								obj_t BgL_cdrzd21901zd2_1602;

								BgL_carzd21900zd2_1601 = CAR(BgL_tzd2expzd2_34);
								BgL_cdrzd21901zd2_1602 = CDR(BgL_tzd2expzd2_34);
								if ((BgL_carzd21900zd2_1601 == CNST_TABLE_REF(((long) 10))))
									{	/* Module/foreign.scm 250 */
										BgL_slotsz00_1587 = BgL_cdrzd21901zd2_1602;
									BgL_tagzd21886zd2_1588:
										{
											obj_t BgL_slotsz00_1738;

											BgL_slotsz00_1738 = BgL_slotsz00_1587;
										BgL_zc3z04anonymousza32012ze3z87_1739:
											if (NULLP(BgL_slotsz00_1738))
												{	/* Module/foreign.scm 255 */
													return ((bool_t) 1);
												}
											else
												{

													{	/* Module/foreign.scm 257 */
														obj_t BgL_ezd22154zd2_1743;

														BgL_ezd22154zd2_1743 =
															CAR(((obj_t) BgL_slotsz00_1738));
														if (PAIRP(BgL_ezd22154zd2_1743))
															{	/* Module/foreign.scm 257 */
																obj_t BgL_cdrzd22156zd2_1745;

																BgL_cdrzd22156zd2_1745 =
																	CDR(BgL_ezd22154zd2_1743);
																{	/* Module/foreign.scm 257 */
																	bool_t BgL_test2743z00_3770;

																	{	/* Module/foreign.scm 257 */
																		obj_t BgL_tmpz00_3771;

																		BgL_tmpz00_3771 = CAR(BgL_ezd22154zd2_1743);
																		BgL_test2743z00_3770 =
																			SYMBOLP(BgL_tmpz00_3771);
																	}
																	if (BgL_test2743z00_3770)
																		{	/* Module/foreign.scm 257 */
																			if (PAIRP(BgL_cdrzd22156zd2_1745))
																				{	/* Module/foreign.scm 257 */
																					obj_t BgL_cdrzd22158zd2_1749;

																					BgL_cdrzd22158zd2_1749 =
																						CDR(BgL_cdrzd22156zd2_1745);
																					{	/* Module/foreign.scm 257 */
																						bool_t BgL_test2745z00_3777;

																						{	/* Module/foreign.scm 257 */
																							obj_t BgL_tmpz00_3778;

																							BgL_tmpz00_3778 =
																								CAR(BgL_cdrzd22156zd2_1745);
																							BgL_test2745z00_3777 =
																								SYMBOLP(BgL_tmpz00_3778);
																						}
																						if (BgL_test2745z00_3777)
																							{	/* Module/foreign.scm 257 */
																								if (PAIRP
																									(BgL_cdrzd22158zd2_1749))
																									{	/* Module/foreign.scm 257 */
																										bool_t BgL_test2747z00_3783;

																										{	/* Module/foreign.scm 257 */
																											obj_t BgL_tmpz00_3784;

																											BgL_tmpz00_3784 =
																												CAR
																												(BgL_cdrzd22158zd2_1749);
																											BgL_test2747z00_3783 =
																												STRINGP
																												(BgL_tmpz00_3784);
																										}
																										if (BgL_test2747z00_3783)
																											{	/* Module/foreign.scm 257 */
																												if (NULLP(CDR
																														(BgL_cdrzd22158zd2_1749)))
																													{	/* Module/foreign.scm 257 */
																														{
																															obj_t
																																BgL_slotsz00_3790;
																															BgL_slotsz00_3790
																																=
																																CDR(((obj_t)
																																	BgL_slotsz00_1738));
																															BgL_slotsz00_1738
																																=
																																BgL_slotsz00_3790;
																															goto
																																BgL_zc3z04anonymousza32012ze3z87_1739;
																														}
																													}
																												else
																													{	/* Module/foreign.scm 257 */
																														return ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Module/foreign.scm 257 */
																												return ((bool_t) 0);
																											}
																									}
																								else
																									{	/* Module/foreign.scm 257 */
																										return ((bool_t) 0);
																									}
																							}
																						else
																							{	/* Module/foreign.scm 257 */
																								return ((bool_t) 0);
																							}
																					}
																				}
																			else
																				{	/* Module/foreign.scm 257 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Module/foreign.scm 257 */
																			return ((bool_t) 0);
																		}
																}
															}
														else
															{	/* Module/foreign.scm 257 */
																return ((bool_t) 0);
															}
													}
												}
										}
									}
								else
									{	/* Module/foreign.scm 250 */
										if ((BgL_carzd21900zd2_1601 == CNST_TABLE_REF(((long) 11))))
											{
												obj_t BgL_slotsz00_3796;

												BgL_slotsz00_3796 = BgL_cdrzd21901zd2_1602;
												BgL_slotsz00_1587 = BgL_slotsz00_3796;
												goto BgL_tagzd21886zd2_1588;
											}
										else
											{	/* Module/foreign.scm 250 */
												if (
													(BgL_carzd21900zd2_1601 ==
														CNST_TABLE_REF(((long) 12))))
													{	/* Module/foreign.scm 250 */
														return NULLP(CDR(BgL_tzd2expzd2_34));
													}
												else
													{	/* Module/foreign.scm 250 */
														obj_t BgL_cdrzd21948zd2_1619;

														BgL_cdrzd21948zd2_1619 = CDR(BgL_tzd2expzd2_34);
														if (
															(CAR(BgL_tzd2expzd2_34) ==
																CNST_TABLE_REF(((long) 13))))
															{	/* Module/foreign.scm 250 */
																if (PAIRP(BgL_cdrzd21948zd2_1619))
																	{	/* Module/foreign.scm 250 */
																		bool_t BgL_test2753z00_3809;

																		{	/* Module/foreign.scm 250 */
																			obj_t BgL_tmpz00_3810;

																			BgL_tmpz00_3810 =
																				CAR(BgL_cdrzd21948zd2_1619);
																			BgL_test2753z00_3809 =
																				SYMBOLP(BgL_tmpz00_3810);
																		}
																		if (BgL_test2753z00_3809)
																			{	/* Module/foreign.scm 250 */
																				return
																					NULLP(CDR(BgL_cdrzd21948zd2_1619));
																			}
																		else
																			{	/* Module/foreign.scm 250 */
																				return ((bool_t) 0);
																			}
																	}
																else
																	{	/* Module/foreign.scm 250 */
																		return ((bool_t) 0);
																	}
															}
														else
															{	/* Module/foreign.scm 250 */
																obj_t BgL_carzd21999zd2_1637;

																BgL_carzd21999zd2_1637 = CAR(BgL_tzd2expzd2_34);
																{

																	if (
																		(BgL_carzd21999zd2_1637 ==
																			CNST_TABLE_REF(((long) 17))))
																		{	/* Module/foreign.scm 250 */
																		BgL_kapzd22001zd2_1639:
																			if (PAIRP(BgL_cdrzd21948zd2_1619))
																				{	/* Module/foreign.scm 250 */
																					bool_t BgL_test2756z00_3821;

																					{	/* Module/foreign.scm 250 */
																						obj_t BgL_tmpz00_3822;

																						BgL_tmpz00_3822 =
																							CAR(BgL_cdrzd21948zd2_1619);
																						BgL_test2756z00_3821 =
																							SYMBOLP(BgL_tmpz00_3822);
																					}
																					if (BgL_test2756z00_3821)
																						{	/* Module/foreign.scm 250 */
																							if (NULLP(CDR
																									(BgL_cdrzd21948zd2_1619)))
																								{	/* Module/foreign.scm 250 */
																									return ((bool_t) 1);
																								}
																							else
																								{	/* Module/foreign.scm 250 */
																									obj_t BgL_cdrzd22010zd2_1679;

																									BgL_cdrzd22010zd2_1679 =
																										CDR(
																										((obj_t)
																											BgL_tzd2expzd2_34));
																									if ((CAR(((obj_t)
																													BgL_tzd2expzd2_34)) ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/foreign.scm 250 */
																											obj_t
																												BgL_cdrzd22013zd2_1682;
																											BgL_cdrzd22013zd2_1682 =
																												CDR(((obj_t)
																													BgL_cdrzd22010zd2_1679));
																											{	/* Module/foreign.scm 250 */
																												bool_t
																													BgL_test2759z00_3837;
																												{	/* Module/foreign.scm 250 */
																													obj_t BgL_tmpz00_3838;

																													BgL_tmpz00_3838 =
																														CAR(
																														((obj_t)
																															BgL_cdrzd22010zd2_1679));
																													BgL_test2759z00_3837 =
																														SYMBOLP
																														(BgL_tmpz00_3838);
																												}
																												if (BgL_test2759z00_3837)
																													{	/* Module/foreign.scm 250 */
																														if (PAIRP
																															(BgL_cdrzd22013zd2_1682))
																															{	/* Module/foreign.scm 250 */
																																obj_t
																																	BgL_carzd22015zd2_1686;
																																BgL_carzd22015zd2_1686
																																	=
																																	CAR
																																	(BgL_cdrzd22013zd2_1682);
																																{

																																	if (NULLP
																																		(BgL_carzd22015zd2_1686))
																																		{	/* Module/foreign.scm 250 */
																																		BgL_kapzd22019zd2_1687:
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd22013zd2_1682))))
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd22015zd2_1686);
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 250 */
																																			if (PAIRP
																																				(BgL_carzd22015zd2_1686))
																																				{	/* Module/foreign.scm 250 */
																																					goto
																																						BgL_kapzd22019zd2_1687;
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 250 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 250 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											if (
																												(CAR(
																														((obj_t)
																															BgL_tzd2expzd2_34))
																													==
																													CNST_TABLE_REF(((long)
																															15))))
																												{	/* Module/foreign.scm 250 */
																													BgL_slotsz00_1595 =
																														BgL_cdrzd22010zd2_1679;
																												BgL_tagzd21892zd2_1596:
																													{
																														obj_t
																															BgL_slotsz00_1764;
																														BgL_slotsz00_1764 =
																															BgL_slotsz00_1595;
																													BgL_zc3z04anonymousza32035ze3z87_1765:
																														if (NULLP
																															(BgL_slotsz00_1764))
																															{	/* Module/foreign.scm 274 */
																																return ((bool_t)
																																	1);
																															}
																														else
																															{

																																{	/* Module/foreign.scm 276 */
																																	obj_t
																																		BgL_ezd22163zd2_1769;
																																	BgL_ezd22163zd2_1769
																																		=
																																		CAR(((obj_t)
																																			BgL_slotsz00_1764));
																																	if (PAIRP
																																		(BgL_ezd22163zd2_1769))
																																		{	/* Module/foreign.scm 276 */
																																			obj_t
																																				BgL_cdrzd22165zd2_1771;
																																			BgL_cdrzd22165zd2_1771
																																				=
																																				CDR
																																				(BgL_ezd22163zd2_1769);
																																			{	/* Module/foreign.scm 276 */
																																				bool_t
																																					BgL_test2767z00_3866;
																																				{	/* Module/foreign.scm 276 */
																																					obj_t
																																						BgL_tmpz00_3867;
																																					BgL_tmpz00_3867
																																						=
																																						CAR
																																						(BgL_ezd22163zd2_1769);
																																					BgL_test2767z00_3866
																																						=
																																						SYMBOLP
																																						(BgL_tmpz00_3867);
																																				}
																																				if (BgL_test2767z00_3866)
																																					{	/* Module/foreign.scm 276 */
																																						if (PAIRP(BgL_cdrzd22165zd2_1771))
																																							{	/* Module/foreign.scm 276 */
																																								bool_t
																																									BgL_test2769z00_3872;
																																								{	/* Module/foreign.scm 276 */
																																									obj_t
																																										BgL_tmpz00_3873;
																																									BgL_tmpz00_3873
																																										=
																																										CAR
																																										(BgL_cdrzd22165zd2_1771);
																																									BgL_test2769z00_3872
																																										=
																																										STRINGP
																																										(BgL_tmpz00_3873);
																																								}
																																								if (BgL_test2769z00_3872)
																																									{	/* Module/foreign.scm 276 */
																																										if (NULLP(CDR(BgL_cdrzd22165zd2_1771)))
																																											{	/* Module/foreign.scm 276 */
																																												{
																																													obj_t
																																														BgL_slotsz00_3879;
																																													BgL_slotsz00_3879
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_slotsz00_1764));
																																													BgL_slotsz00_1764
																																														=
																																														BgL_slotsz00_3879;
																																													goto
																																														BgL_zc3z04anonymousza32035ze3z87_1765;
																																												}
																																											}
																																										else
																																											{	/* Module/foreign.scm 276 */
																																												return
																																													(
																																													(bool_t)
																																													0);
																																											}
																																									}
																																								else
																																									{	/* Module/foreign.scm 276 */
																																										return
																																											(
																																											(bool_t)
																																											0);
																																									}
																																							}
																																						else
																																							{	/* Module/foreign.scm 276 */
																																								return
																																									(
																																									(bool_t)
																																									0);
																																							}
																																					}
																																				else
																																					{	/* Module/foreign.scm 276 */
																																						return
																																							(
																																							(bool_t)
																																							0);
																																					}
																																			}
																																		}
																																	else
																																		{	/* Module/foreign.scm 276 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																															}
																													}
																												}
																											else
																												{	/* Module/foreign.scm 250 */
																													return ((bool_t) 0);
																												}
																										}
																								}
																						}
																					else
																						{	/* Module/foreign.scm 250 */
																							obj_t BgL_cdrzd22037zd2_1700;

																							BgL_cdrzd22037zd2_1700 =
																								CDR(
																								((obj_t) BgL_tzd2expzd2_34));
																							if (
																								(CAR(
																										((obj_t) BgL_tzd2expzd2_34))
																									==
																									CNST_TABLE_REF(((long) 16))))
																								{	/* Module/foreign.scm 250 */
																									bool_t BgL_test2772z00_3889;

																									{	/* Module/foreign.scm 250 */
																										obj_t BgL_tmpz00_3890;

																										BgL_tmpz00_3890 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22037zd2_1700));
																										BgL_test2772z00_3889 =
																											SYMBOLP(BgL_tmpz00_3890);
																									}
																									if (BgL_test2772z00_3889)
																										{	/* Module/foreign.scm 250 */
																											return
																												NULLP(CDR(
																													((obj_t)
																														BgL_cdrzd22037zd2_1700)));
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 250 */
																									if (
																										(CAR(
																												((obj_t)
																													BgL_tzd2expzd2_34)) ==
																											CNST_TABLE_REF(((long)
																													14))))
																										{	/* Module/foreign.scm 250 */
																											obj_t
																												BgL_cdrzd22057zd2_1712;
																											BgL_cdrzd22057zd2_1712 =
																												CDR(((obj_t)
																													BgL_cdrzd22037zd2_1700));
																											{	/* Module/foreign.scm 250 */
																												bool_t
																													BgL_test2774z00_3904;
																												{	/* Module/foreign.scm 250 */
																													obj_t BgL_tmpz00_3905;

																													BgL_tmpz00_3905 =
																														CAR(
																														((obj_t)
																															BgL_cdrzd22037zd2_1700));
																													BgL_test2774z00_3904 =
																														SYMBOLP
																														(BgL_tmpz00_3905);
																												}
																												if (BgL_test2774z00_3904)
																													{	/* Module/foreign.scm 250 */
																														if (PAIRP
																															(BgL_cdrzd22057zd2_1712))
																															{	/* Module/foreign.scm 250 */
																																obj_t
																																	BgL_carzd22059zd2_1716;
																																BgL_carzd22059zd2_1716
																																	=
																																	CAR
																																	(BgL_cdrzd22057zd2_1712);
																																{

																																	if (NULLP
																																		(BgL_carzd22059zd2_1716))
																																		{	/* Module/foreign.scm 250 */
																																		BgL_kapzd22063zd2_1717:
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd22057zd2_1712))))
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd22059zd2_1716);
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 250 */
																																			if (PAIRP
																																				(BgL_carzd22059zd2_1716))
																																				{	/* Module/foreign.scm 250 */
																																					goto
																																						BgL_kapzd22063zd2_1717;
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 250 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 250 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											if (
																												(CAR(
																														((obj_t)
																															BgL_tzd2expzd2_34))
																													==
																													CNST_TABLE_REF(((long)
																															15))))
																												{
																													obj_t
																														BgL_slotsz00_3926;
																													BgL_slotsz00_3926 =
																														CDR(((obj_t)
																															BgL_tzd2expzd2_34));
																													BgL_slotsz00_1595 =
																														BgL_slotsz00_3926;
																													goto
																														BgL_tagzd21892zd2_1596;
																												}
																											else
																												{	/* Module/foreign.scm 250 */
																													return ((bool_t) 0);
																												}
																										}
																								}
																						}
																				}
																			else
																				{	/* Module/foreign.scm 250 */
																					if (
																						(CAR(
																								((obj_t) BgL_tzd2expzd2_34)) ==
																							CNST_TABLE_REF(((long) 15))))
																						{
																							obj_t BgL_slotsz00_3934;

																							BgL_slotsz00_3934 =
																								CDR(
																								((obj_t) BgL_tzd2expzd2_34));
																							BgL_slotsz00_1595 =
																								BgL_slotsz00_3934;
																							goto BgL_tagzd21892zd2_1596;
																						}
																					else
																						{	/* Module/foreign.scm 250 */
																							return ((bool_t) 0);
																						}
																				}
																		}
																	else
																		{	/* Module/foreign.scm 250 */
																			if (
																				(BgL_carzd21999zd2_1637 ==
																					CNST_TABLE_REF(((long) 18))))
																				{	/* Module/foreign.scm 250 */
																					goto BgL_kapzd22001zd2_1639;
																				}
																			else
																				{	/* Module/foreign.scm 250 */
																					obj_t BgL_cdrzd22091zd2_1642;

																					BgL_cdrzd22091zd2_1642 =
																						CDR(BgL_tzd2expzd2_34);
																					if (
																						(CAR(BgL_tzd2expzd2_34) ==
																							CNST_TABLE_REF(((long) 16))))
																						{	/* Module/foreign.scm 250 */
																							if (PAIRP(BgL_cdrzd22091zd2_1642))
																								{	/* Module/foreign.scm 250 */
																									bool_t BgL_test2784z00_3947;

																									{	/* Module/foreign.scm 250 */
																										obj_t BgL_tmpz00_3948;

																										BgL_tmpz00_3948 =
																											CAR
																											(BgL_cdrzd22091zd2_1642);
																										BgL_test2784z00_3947 =
																											SYMBOLP(BgL_tmpz00_3948);
																									}
																									if (BgL_test2784z00_3947)
																										{	/* Module/foreign.scm 250 */
																											return
																												NULLP(CDR
																												(BgL_cdrzd22091zd2_1642));
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 250 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Module/foreign.scm 250 */
																							if (
																								(CAR(BgL_tzd2expzd2_34) ==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 250 */
																									if (PAIRP
																										(BgL_cdrzd22091zd2_1642))
																										{	/* Module/foreign.scm 250 */
																											obj_t
																												BgL_cdrzd22116zd2_1656;
																											BgL_cdrzd22116zd2_1656 =
																												CDR
																												(BgL_cdrzd22091zd2_1642);
																											{	/* Module/foreign.scm 250 */
																												bool_t
																													BgL_test2787z00_3960;
																												{	/* Module/foreign.scm 250 */
																													obj_t BgL_tmpz00_3961;

																													BgL_tmpz00_3961 =
																														CAR
																														(BgL_cdrzd22091zd2_1642);
																													BgL_test2787z00_3960 =
																														SYMBOLP
																														(BgL_tmpz00_3961);
																												}
																												if (BgL_test2787z00_3960)
																													{	/* Module/foreign.scm 250 */
																														if (PAIRP
																															(BgL_cdrzd22116zd2_1656))
																															{	/* Module/foreign.scm 250 */
																																obj_t
																																	BgL_carzd22118zd2_1660;
																																BgL_carzd22118zd2_1660
																																	=
																																	CAR
																																	(BgL_cdrzd22116zd2_1656);
																																{

																																	if (NULLP
																																		(BgL_carzd22118zd2_1660))
																																		{	/* Module/foreign.scm 250 */
																																		BgL_kapzd22122zd2_1661:
																																			if (NULLP
																																				(CDR(((obj_t) BgL_cdrzd22116zd2_1656))))
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00
																																						(BgL_carzd22118zd2_1660);
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 250 */
																																			if (PAIRP
																																				(BgL_carzd22118zd2_1660))
																																				{	/* Module/foreign.scm 250 */
																																					goto
																																						BgL_kapzd22122zd2_1661;
																																				}
																																			else
																																				{	/* Module/foreign.scm 250 */
																																					return
																																						(
																																						(bool_t)
																																						0);
																																				}
																																		}
																																}
																															}
																														else
																															{	/* Module/foreign.scm 250 */
																																return ((bool_t)
																																	0);
																															}
																													}
																												else
																													{	/* Module/foreign.scm 250 */
																														return ((bool_t) 0);
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Module/foreign.scm 250 */
																									if (
																										(CAR(BgL_tzd2expzd2_34) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{
																											obj_t BgL_slotsz00_3980;

																											BgL_slotsz00_3980 =
																												CDR(BgL_tzd2expzd2_34);
																											BgL_slotsz00_1595 =
																												BgL_slotsz00_3980;
																											goto
																												BgL_tagzd21892zd2_1596;
																										}
																									else
																										{	/* Module/foreign.scm 250 */
																											return ((bool_t) 0);
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
						else
							{	/* Module/foreign.scm 250 */
								return ((bool_t) 0);
							}
					}
			}
		}

	}



/* parse-c-extern-type */
	obj_t BGl_parsezd2czd2externzd2typezd2zzmodule_foreignz00(obj_t
		BgL_typez00_35)
	{
		{	/* Module/foreign.scm 287 */
			{
				obj_t BgL_idz00_1787;
				obj_t BgL_tzd2expzd2_1788;

				if (PAIRP(BgL_typez00_35))
					{	/* Module/foreign.scm 288 */
						obj_t BgL_cdrzd22178zd2_1793;

						BgL_cdrzd22178zd2_1793 = CDR(BgL_typez00_35);
						if ((CAR(BgL_typez00_35) == CNST_TABLE_REF(((long) 5))))
							{	/* Module/foreign.scm 288 */
								if (PAIRP(BgL_cdrzd22178zd2_1793))
									{	/* Module/foreign.scm 288 */
										obj_t BgL_carzd22181zd2_1797;
										obj_t BgL_cdrzd22182zd2_1798;

										BgL_carzd22181zd2_1797 = CAR(BgL_cdrzd22178zd2_1793);
										BgL_cdrzd22182zd2_1798 = CDR(BgL_cdrzd22178zd2_1793);
										if (SYMBOLP(BgL_carzd22181zd2_1797))
											{	/* Module/foreign.scm 288 */
												if (PAIRP(BgL_cdrzd22182zd2_1798))
													{	/* Module/foreign.scm 288 */
														obj_t BgL_carzd22187zd2_1801;

														BgL_carzd22187zd2_1801 =
															CAR(BgL_cdrzd22182zd2_1798);
														if (STRINGP(BgL_carzd22187zd2_1801))
															{	/* Module/foreign.scm 288 */
																if (NULLP(CDR(BgL_cdrzd22182zd2_1798)))
																	{	/* Module/foreign.scm 288 */
																		return
																			BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																			(BgL_typez00_35);
																	}
																else
																	{	/* Module/foreign.scm 288 */
																		obj_t BgL_carzd22204zd2_1806;
																		obj_t BgL_cdrzd22205zd2_1807;

																		BgL_carzd22204zd2_1806 =
																			CAR(((obj_t) BgL_cdrzd22178zd2_1793));
																		BgL_cdrzd22205zd2_1807 =
																			CDR(((obj_t) BgL_cdrzd22178zd2_1793));
																		if (SYMBOLP(BgL_carzd22204zd2_1806))
																			{	/* Module/foreign.scm 288 */
																				obj_t BgL_cdrzd22214zd2_1809;

																				BgL_cdrzd22214zd2_1809 =
																					CDR(((obj_t) BgL_cdrzd22205zd2_1807));
																				if (PAIRP(BgL_cdrzd22214zd2_1809))
																					{	/* Module/foreign.scm 288 */
																						bool_t BgL_test2802z00_4014;

																						{	/* Module/foreign.scm 288 */
																							obj_t BgL_tmpz00_4015;

																							BgL_tmpz00_4015 =
																								CAR(BgL_cdrzd22214zd2_1809);
																							BgL_test2802z00_4014 =
																								STRINGP(BgL_tmpz00_4015);
																						}
																						if (BgL_test2802z00_4014)
																							{	/* Module/foreign.scm 288 */
																								if (NULLP(CDR
																										(BgL_cdrzd22214zd2_1809)))
																									{	/* Module/foreign.scm 288 */
																										obj_t BgL_arg2065z00_1815;

																										BgL_arg2065z00_1815 =
																											CAR(
																											((obj_t)
																												BgL_cdrzd22205zd2_1807));
																										BgL_idz00_1787 =
																											BgL_carzd22204zd2_1806;
																										BgL_tzd2expzd2_1788 =
																											BgL_arg2065z00_1815;
																									BgL_tagzd22169zd2_1789:
																										{	/* Module/foreign.scm 292 */
																											obj_t
																												BgL_foreignzd2typezd2_1847;
																											BgL_foreignzd2typezd2_1847
																												=
																												BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00
																												(BgL_tzd2expzd2_1788);
																											if (CBOOL
																												(BgL_foreignzd2typezd2_1847))
																												{	/* Module/foreign.scm 293 */
																													return
																														BGl_parsezd2czd2foreignzd2typezd2zzmodule_foreignz00
																														(BgL_typez00_35);
																												}
																											else
																												{	/* Module/foreign.scm 295 */
																													obj_t
																														BgL_list2091z00_1848;
																													BgL_list2091z00_1848 =
																														MAKE_YOUNG_PAIR
																														(BNIL, BNIL);
																													return
																														BGl_userzd2errorzd2zztools_errorz00
																														(BGl_string2549z00zzmodule_foreignz00,
																														BGl_string2559z00zzmodule_foreignz00,
																														BgL_typez00_35,
																														BgL_list2091z00_1848);
																												}
																										}
																									}
																								else
																									{	/* Module/foreign.scm 288 */
																									BgL_tagzd22170zd2_1790:
																										{	/* Module/foreign.scm 297 */
																											obj_t
																												BgL_list2092z00_1849;
																											BgL_list2092z00_1849 =
																												MAKE_YOUNG_PAIR(BNIL,
																												BNIL);
																											return
																												BGl_userzd2errorzd2zztools_errorz00
																												(BGl_string2549z00zzmodule_foreignz00,
																												BGl_string2559z00zzmodule_foreignz00,
																												BgL_typez00_35,
																												BgL_list2092z00_1849);
																										}
																									}
																							}
																						else
																							{	/* Module/foreign.scm 288 */
																								goto BgL_tagzd22170zd2_1790;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 288 */
																						goto BgL_tagzd22170zd2_1790;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 288 */
																				goto BgL_tagzd22170zd2_1790;
																			}
																	}
															}
														else
															{	/* Module/foreign.scm 288 */
																obj_t BgL_carzd22229zd2_1820;
																obj_t BgL_cdrzd22230zd2_1821;

																BgL_carzd22229zd2_1820 =
																	CAR(((obj_t) BgL_cdrzd22178zd2_1793));
																BgL_cdrzd22230zd2_1821 =
																	CDR(((obj_t) BgL_cdrzd22178zd2_1793));
																if (SYMBOLP(BgL_carzd22229zd2_1820))
																	{	/* Module/foreign.scm 288 */
																		obj_t BgL_cdrzd22238zd2_1823;

																		BgL_cdrzd22238zd2_1823 =
																			CDR(((obj_t) BgL_cdrzd22230zd2_1821));
																		if (PAIRP(BgL_cdrzd22238zd2_1823))
																			{	/* Module/foreign.scm 288 */
																				bool_t BgL_test2807z00_4041;

																				{	/* Module/foreign.scm 288 */
																					obj_t BgL_tmpz00_4042;

																					BgL_tmpz00_4042 =
																						CAR(BgL_cdrzd22238zd2_1823);
																					BgL_test2807z00_4041 =
																						STRINGP(BgL_tmpz00_4042);
																				}
																				if (BgL_test2807z00_4041)
																					{	/* Module/foreign.scm 288 */
																						if (NULLP(CDR
																								(BgL_cdrzd22238zd2_1823)))
																							{	/* Module/foreign.scm 288 */
																								obj_t BgL_arg2077z00_1829;

																								BgL_arg2077z00_1829 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22230zd2_1821));
																								{
																									obj_t BgL_tzd2expzd2_4051;
																									obj_t BgL_idz00_4050;

																									BgL_idz00_4050 =
																										BgL_carzd22229zd2_1820;
																									BgL_tzd2expzd2_4051 =
																										BgL_arg2077z00_1829;
																									BgL_tzd2expzd2_1788 =
																										BgL_tzd2expzd2_4051;
																									BgL_idz00_1787 =
																										BgL_idz00_4050;
																									goto BgL_tagzd22169zd2_1789;
																								}
																							}
																						else
																							{	/* Module/foreign.scm 288 */
																								goto BgL_tagzd22170zd2_1790;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 288 */
																						goto BgL_tagzd22170zd2_1790;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 288 */
																				goto BgL_tagzd22170zd2_1790;
																			}
																	}
																else
																	{	/* Module/foreign.scm 288 */
																		goto BgL_tagzd22170zd2_1790;
																	}
															}
													}
												else
													{	/* Module/foreign.scm 288 */
														goto BgL_tagzd22170zd2_1790;
													}
											}
										else
											{	/* Module/foreign.scm 288 */
												obj_t BgL_carzd22255zd2_1833;
												obj_t BgL_cdrzd22256zd2_1834;

												BgL_carzd22255zd2_1833 =
													CAR(((obj_t) BgL_cdrzd22178zd2_1793));
												BgL_cdrzd22256zd2_1834 =
													CDR(((obj_t) BgL_cdrzd22178zd2_1793));
												if (SYMBOLP(BgL_carzd22255zd2_1833))
													{	/* Module/foreign.scm 288 */
														if (PAIRP(BgL_cdrzd22256zd2_1834))
															{	/* Module/foreign.scm 288 */
																obj_t BgL_cdrzd22262zd2_1837;

																BgL_cdrzd22262zd2_1837 =
																	CDR(BgL_cdrzd22256zd2_1834);
																if (PAIRP(BgL_cdrzd22262zd2_1837))
																	{	/* Module/foreign.scm 288 */
																		bool_t BgL_test2812z00_4063;

																		{	/* Module/foreign.scm 288 */
																			obj_t BgL_tmpz00_4064;

																			BgL_tmpz00_4064 =
																				CAR(BgL_cdrzd22262zd2_1837);
																			BgL_test2812z00_4063 =
																				STRINGP(BgL_tmpz00_4064);
																		}
																		if (BgL_test2812z00_4063)
																			{	/* Module/foreign.scm 288 */
																				if (NULLP(CDR(BgL_cdrzd22262zd2_1837)))
																					{
																						obj_t BgL_tzd2expzd2_4071;
																						obj_t BgL_idz00_4070;

																						BgL_idz00_4070 =
																							BgL_carzd22255zd2_1833;
																						BgL_tzd2expzd2_4071 =
																							CAR(BgL_cdrzd22256zd2_1834);
																						BgL_tzd2expzd2_1788 =
																							BgL_tzd2expzd2_4071;
																						BgL_idz00_1787 = BgL_idz00_4070;
																						goto BgL_tagzd22169zd2_1789;
																					}
																				else
																					{	/* Module/foreign.scm 288 */
																						goto BgL_tagzd22170zd2_1790;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 288 */
																				goto BgL_tagzd22170zd2_1790;
																			}
																	}
																else
																	{	/* Module/foreign.scm 288 */
																		goto BgL_tagzd22170zd2_1790;
																	}
															}
														else
															{	/* Module/foreign.scm 288 */
																goto BgL_tagzd22170zd2_1790;
															}
													}
												else
													{	/* Module/foreign.scm 288 */
														goto BgL_tagzd22170zd2_1790;
													}
											}
									}
								else
									{	/* Module/foreign.scm 288 */
										goto BgL_tagzd22170zd2_1790;
									}
							}
						else
							{	/* Module/foreign.scm 288 */
								goto BgL_tagzd22170zd2_1790;
							}
					}
				else
					{	/* Module/foreign.scm 288 */
						goto BgL_tagzd22170zd2_1790;
					}
			}
		}

	}



/* c-extern-type->c-foreign-type */
	obj_t
		BGl_czd2externzd2typezd2ze3czd2foreignzd2typez31zzmodule_foreignz00(obj_t
		BgL_tzd2expzd2_36)
	{
		{	/* Module/foreign.scm 302 */
			{
				obj_t BgL_slotsz00_1858;
				obj_t BgL_slotsz00_1851;

				if (SYMBOLP(BgL_tzd2expzd2_36))
					{	/* Module/foreign.scm 303 */
						return BgL_tzd2expzd2_36;
					}
				else
					{	/* Module/foreign.scm 303 */
						if (PAIRP(BgL_tzd2expzd2_36))
							{	/* Module/foreign.scm 303 */
								obj_t BgL_carzd22293zd2_1865;
								obj_t BgL_cdrzd22294zd2_1866;

								BgL_carzd22293zd2_1865 = CAR(BgL_tzd2expzd2_36);
								BgL_cdrzd22294zd2_1866 = CDR(BgL_tzd2expzd2_36);
								if ((BgL_carzd22293zd2_1865 == CNST_TABLE_REF(((long) 10))))
									{	/* Module/foreign.scm 303 */
										BgL_slotsz00_1851 = BgL_cdrzd22294zd2_1866;
									BgL_tagzd22279zd2_1852:
										{
											obj_t BgL_slotsz00_1999;

											BgL_slotsz00_1999 = BgL_slotsz00_1851;
										BgL_zc3z04anonymousza32207ze3z87_2000:
											if (NULLP(BgL_slotsz00_1999))
												{	/* Module/foreign.scm 308 */
													return BgL_tzd2expzd2_36;
												}
											else
												{
													obj_t BgL_idz00_2002;
													obj_t BgL_namez00_2003;

													{	/* Module/foreign.scm 310 */
														obj_t BgL_ezd22508zd2_2006;

														BgL_ezd22508zd2_2006 =
															CAR(((obj_t) BgL_slotsz00_1999));
														if (PAIRP(BgL_ezd22508zd2_2006))
															{	/* Module/foreign.scm 310 */
																obj_t BgL_carzd22513zd2_2008;
																obj_t BgL_cdrzd22514zd2_2009;

																BgL_carzd22513zd2_2008 =
																	CAR(BgL_ezd22508zd2_2006);
																BgL_cdrzd22514zd2_2009 =
																	CDR(BgL_ezd22508zd2_2006);
																if (SYMBOLP(BgL_carzd22513zd2_2008))
																	{	/* Module/foreign.scm 310 */
																		if (PAIRP(BgL_cdrzd22514zd2_2009))
																			{	/* Module/foreign.scm 310 */
																				obj_t BgL_carzd22518zd2_2012;

																				BgL_carzd22518zd2_2012 =
																					CAR(BgL_cdrzd22514zd2_2009);
																				if (STRINGP(BgL_carzd22518zd2_2012))
																					{	/* Module/foreign.scm 310 */
																						if (NULLP(CDR
																								(BgL_cdrzd22514zd2_2009)))
																							{	/* Module/foreign.scm 310 */
																								BgL_idz00_2002 =
																									BgL_carzd22513zd2_2008;
																								BgL_namez00_2003 =
																									BgL_carzd22518zd2_2012;
																								{	/* Module/foreign.scm 312 */
																									obj_t BgL_pidz00_2017;

																									BgL_pidz00_2017 =
																										BGl_parsezd2idzd2zzast_identz00
																										(BgL_idz00_2002,
																										BGl_findzd2locationzd2zztools_locationz00
																										(BgL_tzd2expzd2_36));
																									{	/* Module/foreign.scm 312 */
																										obj_t BgL_sidz00_2018;

																										BgL_sidz00_2018 =
																											CAR(BgL_pidz00_2017);
																										{	/* Module/foreign.scm 313 */
																											obj_t BgL_typez00_2019;

																											BgL_typez00_2019 =
																												(((BgL_typez00_bglt)
																													COBJECT((
																															(BgL_typez00_bglt)
																															CDR
																															(BgL_pidz00_2017))))->
																												BgL_idz00);
																											{	/* Module/foreign.scm 314 */

																												{	/* Module/foreign.scm 315 */
																													obj_t BgL_xz00_2936;

																													BgL_xz00_2936 =
																														BGl_checkzd2idzd2zzast_identz00
																														(BgL_pidz00_2017,
																														BgL_tzd2expzd2_36);
																													((bool_t) 1);
																												}
																												{	/* Module/foreign.scm 318 */
																													obj_t
																														BgL_arg2217z00_2021;
																													obj_t
																														BgL_arg2218z00_2022;
																													BgL_arg2217z00_2021 =
																														CAR(((obj_t)
																															BgL_slotsz00_1999));
																													{	/* Module/foreign.scm 318 */
																														obj_t
																															BgL_arg2219z00_2023;
																														BgL_arg2219z00_2023
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_namez00_2003,
																															BNIL);
																														BgL_arg2218z00_2022
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_sidz00_2018,
																															BgL_arg2219z00_2023);
																													}
																													{	/* Module/foreign.scm 318 */
																														obj_t
																															BgL_tmpz00_4111;
																														BgL_tmpz00_4111 =
																															((obj_t)
																															BgL_arg2217z00_2021);
																														SET_CDR
																															(BgL_tmpz00_4111,
																															BgL_arg2218z00_2022);
																													}
																												}
																												{	/* Module/foreign.scm 319 */
																													obj_t
																														BgL_arg2220z00_2024;
																													BgL_arg2220z00_2024 =
																														CAR(((obj_t)
																															BgL_slotsz00_1999));
																													{	/* Module/foreign.scm 319 */
																														obj_t
																															BgL_tmpz00_4116;
																														BgL_tmpz00_4116 =
																															((obj_t)
																															BgL_arg2220z00_2024);
																														SET_CAR
																															(BgL_tmpz00_4116,
																															BgL_typez00_2019);
																													}
																												}
																												{	/* Module/foreign.scm 320 */
																													obj_t
																														BgL_arg2221z00_2025;
																													BgL_arg2221z00_2025 =
																														CDR(((obj_t)
																															BgL_slotsz00_1999));
																													{
																														obj_t
																															BgL_slotsz00_4121;
																														BgL_slotsz00_4121 =
																															BgL_arg2221z00_2025;
																														BgL_slotsz00_1999 =
																															BgL_slotsz00_4121;
																														goto
																															BgL_zc3z04anonymousza32207ze3z87_2000;
																													}
																												}
																											}
																										}
																									}
																								}
																							}
																						else
																							{	/* Module/foreign.scm 310 */
																								return BFALSE;
																							}
																					}
																				else
																					{	/* Module/foreign.scm 310 */
																						return BFALSE;
																					}
																			}
																		else
																			{	/* Module/foreign.scm 310 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Module/foreign.scm 310 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/foreign.scm 310 */
																return BFALSE;
															}
													}
												}
										}
									}
								else
									{	/* Module/foreign.scm 303 */
										if ((BgL_carzd22293zd2_1865 == CNST_TABLE_REF(((long) 11))))
											{
												obj_t BgL_slotsz00_4125;

												BgL_slotsz00_4125 = BgL_cdrzd22294zd2_1866;
												BgL_slotsz00_1851 = BgL_slotsz00_4125;
												goto BgL_tagzd22279zd2_1852;
											}
										else
											{	/* Module/foreign.scm 303 */
												if (
													(CAR(BgL_tzd2expzd2_36) ==
														CNST_TABLE_REF(((long) 13))))
													{	/* Module/foreign.scm 303 */
														if (PAIRP(BgL_cdrzd22294zd2_1866))
															{	/* Module/foreign.scm 303 */
																bool_t BgL_test2826z00_4132;

																{	/* Module/foreign.scm 303 */
																	obj_t BgL_tmpz00_4133;

																	BgL_tmpz00_4133 = CAR(BgL_cdrzd22294zd2_1866);
																	BgL_test2826z00_4132 =
																		SYMBOLP(BgL_tmpz00_4133);
																}
																if (BgL_test2826z00_4132)
																	{	/* Module/foreign.scm 303 */
																		if (NULLP(CDR(BgL_cdrzd22294zd2_1866)))
																			{	/* Module/foreign.scm 303 */
																				return BgL_tzd2expzd2_36;
																			}
																		else
																			{	/* Module/foreign.scm 303 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Module/foreign.scm 303 */
																		return BFALSE;
																	}
															}
														else
															{	/* Module/foreign.scm 303 */
																return BFALSE;
															}
													}
												else
													{	/* Module/foreign.scm 303 */
														obj_t BgL_carzd22351zd2_1887;
														obj_t BgL_cdrzd22352zd2_1888;

														BgL_carzd22351zd2_1887 = CAR(BgL_tzd2expzd2_36);
														BgL_cdrzd22352zd2_1888 = CDR(BgL_tzd2expzd2_36);
														{

															if (
																(BgL_carzd22351zd2_1887 ==
																	CNST_TABLE_REF(((long) 17))))
																{	/* Module/foreign.scm 303 */
																BgL_kapzd22353zd2_1889:
																	if (PAIRP(BgL_cdrzd22352zd2_1888))
																		{	/* Module/foreign.scm 303 */
																			bool_t BgL_test2830z00_4146;

																			{	/* Module/foreign.scm 303 */
																				obj_t BgL_tmpz00_4147;

																				BgL_tmpz00_4147 =
																					CAR(BgL_cdrzd22352zd2_1888);
																				BgL_test2830z00_4146 =
																					SYMBOLP(BgL_tmpz00_4147);
																			}
																			if (BgL_test2830z00_4146)
																				{	/* Module/foreign.scm 303 */
																					if (NULLP(CDR
																							(BgL_cdrzd22352zd2_1888)))
																						{	/* Module/foreign.scm 303 */
																							return BgL_tzd2expzd2_36;
																						}
																					else
																						{	/* Module/foreign.scm 303 */
																							obj_t BgL_cdrzd22362zd2_1935;

																							BgL_cdrzd22362zd2_1935 =
																								CDR(
																								((obj_t) BgL_tzd2expzd2_36));
																							if (
																								(CAR(
																										((obj_t) BgL_tzd2expzd2_36))
																									==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 303 */
																									obj_t BgL_cdrzd22365zd2_1938;

																									BgL_cdrzd22365zd2_1938 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd22362zd2_1935));
																									{	/* Module/foreign.scm 303 */
																										bool_t BgL_test2833z00_4162;

																										{	/* Module/foreign.scm 303 */
																											obj_t BgL_tmpz00_4163;

																											BgL_tmpz00_4163 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd22362zd2_1935));
																											BgL_test2833z00_4162 =
																												SYMBOLP
																												(BgL_tmpz00_4163);
																										}
																										if (BgL_test2833z00_4162)
																											{	/* Module/foreign.scm 303 */
																												if (PAIRP
																													(BgL_cdrzd22365zd2_1938))
																													{	/* Module/foreign.scm 303 */
																														obj_t
																															BgL_carzd22367zd2_1942;
																														BgL_carzd22367zd2_1942
																															=
																															CAR
																															(BgL_cdrzd22365zd2_1938);
																														{

																															if (NULLP
																																(BgL_carzd22367zd2_1942))
																																{	/* Module/foreign.scm 303 */
																																BgL_kapzd22371zd2_1943:
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd22365zd2_1938))))
																																		{	/* Module/foreign.scm 303 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd22367zd2_1942))
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BgL_tzd2expzd2_36;
																																				}
																																			else
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 303 */
																																	if (PAIRP
																																		(BgL_carzd22367zd2_1942))
																																		{	/* Module/foreign.scm 303 */
																																			goto
																																				BgL_kapzd22371zd2_1943;
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 303 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 303 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									if (
																										(CAR(
																												((obj_t)
																													BgL_tzd2expzd2_36)) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{	/* Module/foreign.scm 303 */
																											BgL_slotsz00_1858 =
																												BgL_cdrzd22362zd2_1935;
																										BgL_tagzd22284zd2_1859:
																											{
																												obj_t BgL_slotsz00_2031;

																												BgL_slotsz00_2031 =
																													BgL_slotsz00_1858;
																											BgL_zc3z04anonymousza32225ze3z87_2032:
																												if (NULLP
																													(BgL_slotsz00_2031))
																													{	/* Module/foreign.scm 335 */
																														return
																															BgL_tzd2expzd2_36;
																													}
																												else
																													{

																														{	/* Module/foreign.scm 337 */
																															obj_t
																																BgL_ezd22524zd2_2036;
																															BgL_ezd22524zd2_2036
																																=
																																CAR(((obj_t)
																																	BgL_slotsz00_2031));
																															if (PAIRP
																																(BgL_ezd22524zd2_2036))
																																{	/* Module/foreign.scm 337 */
																																	obj_t
																																		BgL_cdrzd22526zd2_2038;
																																	BgL_cdrzd22526zd2_2038
																																		=
																																		CDR
																																		(BgL_ezd22524zd2_2036);
																																	{	/* Module/foreign.scm 337 */
																																		bool_t
																																			BgL_test2842z00_4192;
																																		{	/* Module/foreign.scm 337 */
																																			obj_t
																																				BgL_tmpz00_4193;
																																			BgL_tmpz00_4193
																																				=
																																				CAR
																																				(BgL_ezd22524zd2_2036);
																																			BgL_test2842z00_4192
																																				=
																																				SYMBOLP
																																				(BgL_tmpz00_4193);
																																		}
																																		if (BgL_test2842z00_4192)
																																			{	/* Module/foreign.scm 337 */
																																				if (PAIRP(BgL_cdrzd22526zd2_2038))
																																					{	/* Module/foreign.scm 337 */
																																						bool_t
																																							BgL_test2844z00_4198;
																																						{	/* Module/foreign.scm 337 */
																																							obj_t
																																								BgL_tmpz00_4199;
																																							BgL_tmpz00_4199
																																								=
																																								CAR
																																								(BgL_cdrzd22526zd2_2038);
																																							BgL_test2844z00_4198
																																								=
																																								STRINGP
																																								(BgL_tmpz00_4199);
																																						}
																																						if (BgL_test2844z00_4198)
																																							{	/* Module/foreign.scm 337 */
																																								if (NULLP(CDR(BgL_cdrzd22526zd2_2038)))
																																									{	/* Module/foreign.scm 337 */
																																										{
																																											obj_t
																																												BgL_slotsz00_4205;
																																											BgL_slotsz00_4205
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_slotsz00_2031));
																																											BgL_slotsz00_2031
																																												=
																																												BgL_slotsz00_4205;
																																											goto
																																												BgL_zc3z04anonymousza32225ze3z87_2032;
																																										}
																																									}
																																								else
																																									{	/* Module/foreign.scm 337 */
																																										return
																																											BFALSE;
																																									}
																																							}
																																						else
																																							{	/* Module/foreign.scm 337 */
																																								return
																																									BFALSE;
																																							}
																																					}
																																				else
																																					{	/* Module/foreign.scm 337 */
																																						return
																																							BFALSE;
																																					}
																																			}
																																		else
																																			{	/* Module/foreign.scm 337 */
																																				return
																																					BFALSE;
																																			}
																																	}
																																}
																															else
																																{	/* Module/foreign.scm 337 */
																																	return BFALSE;
																																}
																														}
																													}
																											}
																										}
																									else
																										{	/* Module/foreign.scm 303 */
																											return BFALSE;
																										}
																								}
																						}
																				}
																			else
																				{	/* Module/foreign.scm 303 */
																					obj_t BgL_cdrzd22389zd2_1956;

																					BgL_cdrzd22389zd2_1956 =
																						CDR(((obj_t) BgL_tzd2expzd2_36));
																					if (
																						(CAR(
																								((obj_t) BgL_tzd2expzd2_36)) ==
																							CNST_TABLE_REF(((long) 16))))
																						{	/* Module/foreign.scm 303 */
																							bool_t BgL_test2847z00_4215;

																							{	/* Module/foreign.scm 303 */
																								obj_t BgL_tmpz00_4216;

																								BgL_tmpz00_4216 =
																									CAR(
																									((obj_t)
																										BgL_cdrzd22389zd2_1956));
																								BgL_test2847z00_4215 =
																									SYMBOLP(BgL_tmpz00_4216);
																							}
																							if (BgL_test2847z00_4215)
																								{	/* Module/foreign.scm 303 */
																									if (NULLP(CDR(
																												((obj_t)
																													BgL_cdrzd22389zd2_1956))))
																										{	/* Module/foreign.scm 303 */
																											return BgL_tzd2expzd2_36;
																										}
																									else
																										{	/* Module/foreign.scm 303 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 303 */
																							if (
																								(CAR(
																										((obj_t) BgL_tzd2expzd2_36))
																									==
																									CNST_TABLE_REF(((long) 14))))
																								{	/* Module/foreign.scm 303 */
																									obj_t BgL_cdrzd22409zd2_1968;

																									BgL_cdrzd22409zd2_1968 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd22389zd2_1956));
																									{	/* Module/foreign.scm 303 */
																										bool_t BgL_test2850z00_4231;

																										{	/* Module/foreign.scm 303 */
																											obj_t BgL_tmpz00_4232;

																											BgL_tmpz00_4232 =
																												CAR(
																												((obj_t)
																													BgL_cdrzd22389zd2_1956));
																											BgL_test2850z00_4231 =
																												SYMBOLP
																												(BgL_tmpz00_4232);
																										}
																										if (BgL_test2850z00_4231)
																											{	/* Module/foreign.scm 303 */
																												if (PAIRP
																													(BgL_cdrzd22409zd2_1968))
																													{	/* Module/foreign.scm 303 */
																														obj_t
																															BgL_carzd22411zd2_1972;
																														BgL_carzd22411zd2_1972
																															=
																															CAR
																															(BgL_cdrzd22409zd2_1968);
																														{

																															if (NULLP
																																(BgL_carzd22411zd2_1972))
																																{	/* Module/foreign.scm 303 */
																																BgL_kapzd22415zd2_1973:
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd22409zd2_1968))))
																																		{	/* Module/foreign.scm 303 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd22411zd2_1972))
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BgL_tzd2expzd2_36;
																																				}
																																			else
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 303 */
																																	if (PAIRP
																																		(BgL_carzd22411zd2_1972))
																																		{	/* Module/foreign.scm 303 */
																																			goto
																																				BgL_kapzd22415zd2_1973;
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 303 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 303 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									if (
																										(CAR(
																												((obj_t)
																													BgL_tzd2expzd2_36)) ==
																											CNST_TABLE_REF(((long)
																													15))))
																										{
																											obj_t BgL_slotsz00_4254;

																											BgL_slotsz00_4254 =
																												CDR(
																												((obj_t)
																													BgL_tzd2expzd2_36));
																											BgL_slotsz00_1858 =
																												BgL_slotsz00_4254;
																											goto
																												BgL_tagzd22284zd2_1859;
																										}
																									else
																										{	/* Module/foreign.scm 303 */
																											return BFALSE;
																										}
																								}
																						}
																				}
																		}
																	else
																		{	/* Module/foreign.scm 303 */
																			if (
																				(CAR(
																						((obj_t) BgL_tzd2expzd2_36)) ==
																					CNST_TABLE_REF(((long) 15))))
																				{
																					obj_t BgL_slotsz00_4262;

																					BgL_slotsz00_4262 =
																						CDR(((obj_t) BgL_tzd2expzd2_36));
																					BgL_slotsz00_1858 = BgL_slotsz00_4262;
																					goto BgL_tagzd22284zd2_1859;
																				}
																			else
																				{	/* Module/foreign.scm 303 */
																					if (
																						(CAR(
																								((obj_t) BgL_tzd2expzd2_36)) ==
																							CNST_TABLE_REF(((long) 12))))
																						{	/* Module/foreign.scm 303 */
																							if (NULLP(CDR(
																										((obj_t)
																											BgL_tzd2expzd2_36))))
																								{	/* Module/foreign.scm 303 */
																									return BgL_tzd2expzd2_36;
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 303 */
																							return BFALSE;
																						}
																				}
																		}
																}
															else
																{	/* Module/foreign.scm 303 */
																	if (
																		(BgL_carzd22351zd2_1887 ==
																			CNST_TABLE_REF(((long) 18))))
																		{	/* Module/foreign.scm 303 */
																			goto BgL_kapzd22353zd2_1889;
																		}
																	else
																		{	/* Module/foreign.scm 303 */
																			if (
																				(CAR(BgL_tzd2expzd2_36) ==
																					CNST_TABLE_REF(((long) 16))))
																				{	/* Module/foreign.scm 303 */
																					if (PAIRP(BgL_cdrzd22352zd2_1888))
																						{	/* Module/foreign.scm 303 */
																							bool_t BgL_test2863z00_4283;

																							{	/* Module/foreign.scm 303 */
																								obj_t BgL_tmpz00_4284;

																								BgL_tmpz00_4284 =
																									CAR(BgL_cdrzd22352zd2_1888);
																								BgL_test2863z00_4283 =
																									SYMBOLP(BgL_tmpz00_4284);
																							}
																							if (BgL_test2863z00_4283)
																								{	/* Module/foreign.scm 303 */
																									if (NULLP(CDR
																											(BgL_cdrzd22352zd2_1888)))
																										{	/* Module/foreign.scm 303 */
																											return BgL_tzd2expzd2_36;
																										}
																									else
																										{	/* Module/foreign.scm 303 */
																											return BFALSE;
																										}
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 303 */
																							return BFALSE;
																						}
																				}
																			else
																				{	/* Module/foreign.scm 303 */
																					obj_t BgL_cdrzd22467zd2_1902;

																					BgL_cdrzd22467zd2_1902 =
																						CDR(BgL_tzd2expzd2_36);
																					if (
																						(CAR(BgL_tzd2expzd2_36) ==
																							CNST_TABLE_REF(((long) 14))))
																						{	/* Module/foreign.scm 303 */
																							if (PAIRP(BgL_cdrzd22467zd2_1902))
																								{	/* Module/foreign.scm 303 */
																									obj_t BgL_cdrzd22470zd2_1906;

																									BgL_cdrzd22470zd2_1906 =
																										CDR(BgL_cdrzd22467zd2_1902);
																									{	/* Module/foreign.scm 303 */
																										bool_t BgL_test2867z00_4298;

																										{	/* Module/foreign.scm 303 */
																											obj_t BgL_tmpz00_4299;

																											BgL_tmpz00_4299 =
																												CAR
																												(BgL_cdrzd22467zd2_1902);
																											BgL_test2867z00_4298 =
																												SYMBOLP
																												(BgL_tmpz00_4299);
																										}
																										if (BgL_test2867z00_4298)
																											{	/* Module/foreign.scm 303 */
																												if (PAIRP
																													(BgL_cdrzd22470zd2_1906))
																													{	/* Module/foreign.scm 303 */
																														obj_t
																															BgL_carzd22472zd2_1910;
																														BgL_carzd22472zd2_1910
																															=
																															CAR
																															(BgL_cdrzd22470zd2_1906);
																														{

																															if (NULLP
																																(BgL_carzd22472zd2_1910))
																																{	/* Module/foreign.scm 303 */
																																BgL_kapzd22476zd2_1911:
																																	if (NULLP(CDR(
																																				((obj_t)
																																					BgL_cdrzd22470zd2_1906))))
																																		{	/* Module/foreign.scm 303 */
																																			if (BGl_checkzd2czd2argszf3zf3zzmodule_foreignz00(BgL_carzd22472zd2_1910))
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BgL_tzd2expzd2_36;
																																				}
																																			else
																																				{	/* Module/foreign.scm 330 */
																																					return
																																						BFALSE;
																																				}
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																															else
																																{	/* Module/foreign.scm 303 */
																																	if (PAIRP
																																		(BgL_carzd22472zd2_1910))
																																		{	/* Module/foreign.scm 303 */
																																			goto
																																				BgL_kapzd22476zd2_1911;
																																		}
																																	else
																																		{	/* Module/foreign.scm 303 */
																																			return
																																				BFALSE;
																																		}
																																}
																														}
																													}
																												else
																													{	/* Module/foreign.scm 303 */
																														return BFALSE;
																													}
																											}
																										else
																											{	/* Module/foreign.scm 303 */
																												return BFALSE;
																											}
																									}
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									return BFALSE;
																								}
																						}
																					else
																						{	/* Module/foreign.scm 303 */
																							if (
																								(CAR(BgL_tzd2expzd2_36) ==
																									CNST_TABLE_REF(((long) 15))))
																								{
																									obj_t BgL_slotsz00_4319;

																									BgL_slotsz00_4319 =
																										BgL_cdrzd22467zd2_1902;
																									BgL_slotsz00_1858 =
																										BgL_slotsz00_4319;
																									goto BgL_tagzd22284zd2_1859;
																								}
																							else
																								{	/* Module/foreign.scm 303 */
																									if (
																										(CAR(BgL_tzd2expzd2_36) ==
																											CNST_TABLE_REF(((long)
																													12))))
																										{	/* Module/foreign.scm 303 */
																											if (NULLP
																												(BgL_cdrzd22467zd2_1902))
																												{	/* Module/foreign.scm 303 */
																													return
																														BgL_tzd2expzd2_36;
																												}
																											else
																												{	/* Module/foreign.scm 303 */
																													return BFALSE;
																												}
																										}
																									else
																										{	/* Module/foreign.scm 303 */
																											return BFALSE;
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
						else
							{	/* Module/foreign.scm 303 */
								return BFALSE;
							}
					}
			}
		}

	}



/* foreign-accesses-add! */
	BGL_EXPORTED_DEF obj_t
		BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00(obj_t
		BgL_accessesz00_37)
	{
		{	/* Module/foreign.scm 360 */
			return (BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 =
				BGl_appendzd221011zd2zzmodule_foreignz00(BgL_accessesz00_37,
					BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00), BUNSPEC);
		}

	}



/* &foreign-accesses-add! */
	obj_t BGl_z62foreignzd2accesseszd2addz12z70zzmodule_foreignz00(obj_t
		BgL_envz00_2929, obj_t BgL_accessesz00_2930)
	{
		{	/* Module/foreign.scm 360 */
			return
				BGl_foreignzd2accesseszd2addz12z12zzmodule_foreignz00
				(BgL_accessesz00_2930);
		}

	}



/* &foreign-finalizer */
	obj_t BGl_z62foreignzd2finaliza7erz17zzmodule_foreignz00(obj_t
		BgL_envz00_2918)
	{
		{	/* Module/foreign.scm 366 */
			{
				obj_t BgL_l1199z00_2951;

				BgL_l1199z00_2951 = BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00;
			BgL_zc3z04anonymousza32239ze3z87_2950:
				if (PAIRP(BgL_l1199z00_2951))
					{	/* Module/foreign.scm 368 */
						{	/* Module/foreign.scm 369 */
							obj_t BgL_foreignz00_2952;

							BgL_foreignz00_2952 = CAR(BgL_l1199z00_2951);
							{	/* Module/foreign.scm 369 */
								obj_t BgL_foz00_2953;

								BgL_foz00_2953 = CAR(((obj_t) BgL_foreignz00_2952));
								{	/* Module/foreign.scm 369 */
									obj_t BgL_exz00_2954;

									BgL_exz00_2954 = CDR(((obj_t) BgL_foreignz00_2952));
									{	/* Module/foreign.scm 370 */
										obj_t BgL_globalz00_2955;

										{	/* Module/foreign.scm 371 */
											obj_t BgL_arg2251z00_2956;

											{	/* Module/foreign.scm 371 */
												obj_t BgL_pairz00_2957;

												BgL_pairz00_2957 = CDR(((obj_t) BgL_foz00_2953));
												BgL_arg2251z00_2956 = CAR(BgL_pairz00_2957);
											}
											BgL_globalz00_2955 =
												BGl_findzd2globalzd2zzast_envz00(BgL_arg2251z00_2956,
												BNIL);
										}
										{	/* Module/foreign.scm 371 */
											obj_t BgL_namez00_2958;

											{	/* Module/foreign.scm 372 */
												obj_t BgL_pairz00_2959;

												{	/* Module/foreign.scm 372 */
													obj_t BgL_pairz00_2960;

													BgL_pairz00_2960 = CDR(((obj_t) BgL_foz00_2953));
													BgL_pairz00_2959 = CDR(BgL_pairz00_2960);
												}
												BgL_namez00_2958 = CAR(BgL_pairz00_2959);
											}
											{	/* Module/foreign.scm 372 */

												if (BGl_isazf3zf3zz__objectz00(BgL_globalz00_2955,
														BGl_globalz00zzast_varz00))
													{	/* Module/foreign.scm 383 */
														bool_t BgL_test2878z00_4345;

														{	/* Module/foreign.scm 383 */
															obj_t BgL_tmpz00_4346;

															BgL_tmpz00_4346 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_globalz00_bglt)
																				BgL_globalz00_2955))))->BgL_namez00);
															BgL_test2878z00_4345 = STRINGP(BgL_tmpz00_4346);
														}
														if (BgL_test2878z00_4345)
															{	/* Module/foreign.scm 383 */
																BGl_userzd2warningzd2zztools_errorz00
																	(BGl_string2560z00zzmodule_foreignz00,
																	BGl_string2561z00zzmodule_foreignz00,
																	BgL_foreignz00_2952);
															}
														else
															{	/* Module/foreign.scm 383 */
																((((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_globalz00_bglt)
																						BgL_globalz00_2955))))->
																		BgL_namez00) =
																	((obj_t) BgL_namez00_2958), BUNSPEC);
															}
													}
												else
													{	/* Module/foreign.scm 374 */
														if (CBOOL(BgL_exz00_2954))
															{	/* Module/foreign.scm 376 */
																bool_t BgL_test2880z00_4357;

																if (
																	(BGl_za2passza2z00zzengine_paramz00 ==
																		CNST_TABLE_REF(((long) 19))))
																	{	/* Module/foreign.scm 376 */
																		BgL_test2880z00_4357 = ((bool_t) 1);
																	}
																else
																	{	/* Module/foreign.scm 376 */
																		BgL_test2880z00_4357 =
																			(BGl_za2passza2z00zzengine_paramz00 ==
																			CNST_TABLE_REF(((long) 20)));
																	}
																if (BgL_test2880z00_4357)
																	{	/* Module/foreign.scm 376 */
																		BFALSE;
																	}
																else
																	{	/* Module/foreign.scm 380 */
																		obj_t BgL_arg2247z00_2961;

																		{	/* Module/foreign.scm 380 */
																			obj_t BgL_arg2249z00_2962;

																			{	/* Module/foreign.scm 380 */
																				obj_t BgL_pairz00_2963;

																				BgL_pairz00_2963 =
																					CDR(((obj_t) BgL_foz00_2953));
																				BgL_arg2249z00_2962 =
																					CAR(BgL_pairz00_2963);
																			}
																			{	/* Module/foreign.scm 379 */
																				obj_t BgL_list2250z00_2964;

																				BgL_list2250z00_2964 =
																					MAKE_YOUNG_PAIR(BgL_arg2249z00_2962,
																					BNIL);
																				BgL_arg2247z00_2961 =
																					BGl_formatz00zz__r4_output_6_10_3z00
																					(BGl_string2562z00zzmodule_foreignz00,
																					BgL_list2250z00_2964);
																			}
																		}
																		{	/* Module/foreign.scm 378 */
																			obj_t BgL_list2248z00_2965;

																			BgL_list2248z00_2965 =
																				MAKE_YOUNG_PAIR(BNIL, BNIL);
																			BGl_userzd2errorzd2zztools_errorz00
																				(BGl_string2560z00zzmodule_foreignz00,
																				BgL_arg2247z00_2961,
																				BgL_foreignz00_2952,
																				BgL_list2248z00_2965);
																		}
																	}
															}
														else
															{	/* Module/foreign.scm 375 */
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
							obj_t BgL_l1199z00_4370;

							BgL_l1199z00_4370 = CDR(BgL_l1199z00_2951);
							BgL_l1199z00_2951 = BgL_l1199z00_4370;
							goto BgL_zc3z04anonymousza32239ze3z87_2950;
						}
					}
				else
					{	/* Module/foreign.scm 368 */
						((bool_t) 1);
					}
			}
			BGl_za2foreignzd2exportedza2zd2zzmodule_foreignz00 = BNIL;
			if (NULLP(BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00))
				{	/* Module/foreign.scm 393 */
					return CNST_TABLE_REF(((long) 2));
				}
			else
				{	/* Module/foreign.scm 395 */
					obj_t BgL_accessesz00_2966;

					BgL_accessesz00_2966 =
						bgl_reverse_bang
						(BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00);
					BGl_za2foreignzd2accessesza2zd2zzmodule_foreignz00 = BNIL;
					{	/* Module/foreign.scm 397 */
						obj_t BgL_arg2256z00_2967;

						{	/* Module/foreign.scm 397 */
							obj_t BgL_idz00_2968;

							BgL_idz00_2968 = CNST_TABLE_REF(((long) 0));
							{	/* Module/foreign.scm 397 */
								obj_t BgL_newz00_2969;

								BgL_newz00_2969 =
									create_struct(CNST_TABLE_REF(((long) 21)),
									(int) (((long) 5)));
								{	/* Module/foreign.scm 397 */
									int BgL_tmpz00_4380;

									BgL_tmpz00_4380 = (int) (((long) 4));
									STRUCT_SET(BgL_newz00_2969, BgL_tmpz00_4380, BFALSE);
								}
								{	/* Module/foreign.scm 397 */
									int BgL_tmpz00_4383;

									BgL_tmpz00_4383 = (int) (((long) 3));
									STRUCT_SET(BgL_newz00_2969, BgL_tmpz00_4383, BTRUE);
								}
								{	/* Module/foreign.scm 397 */
									int BgL_tmpz00_4386;

									BgL_tmpz00_4386 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_2969, BgL_tmpz00_4386,
										BgL_accessesz00_2966);
								}
								{	/* Module/foreign.scm 397 */
									obj_t BgL_auxz00_4391;
									int BgL_tmpz00_4389;

									BgL_auxz00_4391 = BINT(((long) 48));
									BgL_tmpz00_4389 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_2969, BgL_tmpz00_4389, BgL_auxz00_4391);
								}
								{	/* Module/foreign.scm 397 */
									int BgL_tmpz00_4394;

									BgL_tmpz00_4394 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_2969, BgL_tmpz00_4394, BgL_idz00_2968);
								}
								BgL_arg2256z00_2967 = BgL_newz00_2969;
						}}
						{	/* Module/foreign.scm 397 */
							obj_t BgL_list2257z00_2970;

							BgL_list2257z00_2970 = MAKE_YOUNG_PAIR(BgL_arg2256z00_2967, BNIL);
							return BgL_list2257z00_2970;
						}
					}
				}
		}

	}



/* default-c-type */
	obj_t BGl_defaultzd2czd2typez00zzmodule_foreignz00(obj_t BgL_typez00_38,
		obj_t BgL_srcz00_39)
	{
		{	/* Module/foreign.scm 402 */
			{	/* Module/foreign.scm 403 */
				bool_t BgL_test2883z00_4398;

				{	/* Module/foreign.scm 403 */
					BgL_typez00_bglt BgL_arg2262z00_2084;

					BgL_arg2262z00_2084 = BGl_getzd2defaultzd2typez00zztype_cachez00();
					BgL_test2883z00_4398 =
						(BgL_typez00_38 == ((obj_t) BgL_arg2262z00_2084));
				}
				if (BgL_test2883z00_4398)
					{	/* Module/foreign.scm 404 */
						BgL_typez00_bglt BgL_defaultz00_2081;

						BgL_defaultz00_2081 =
							BGl_getzd2defaultzd2czd2typezd2zztype_cachez00();
						BGl_userzd2warningzf2locationz20zztools_errorz00
							(BGl_findzd2locationzd2zztools_locationz00(BgL_srcz00_39),
							BGl_string2560z00zzmodule_foreignz00,
							BGl_string2563z00zzmodule_foreignz00,
							(((BgL_typez00_bglt) COBJECT(BgL_defaultz00_2081))->BgL_idz00));
						return ((obj_t) BgL_defaultz00_2081);
					}
				else
					{	/* Module/foreign.scm 403 */
						return BgL_typez00_38;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_foreignz00()
	{
		{	/* Module/foreign.scm 18 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzmodule_checksumz00(((long) 457474423),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_glozd2declzd2(((long) 374700252),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_toolsz00(((long) 453414912),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzforeign_ctypez00(((long) 396356902),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			BGl_modulezd2initializa7ationz75zzforeign_accessz00(((long) 471073690),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2564z00zzmodule_foreignz00));
		}

	}

#ifdef __cplusplus
}
#endif
