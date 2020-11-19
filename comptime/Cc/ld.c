/*===========================================================================*/
/*   (Cc/ld.scm)                                                             */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/ld.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_libraryzd2suffixeszd2zzcc_ldz00();
	BGL_IMPORT obj_t BGl_makezd2sharedzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	extern obj_t BGl_za2stripza2z00zzengine_paramz00;
	extern obj_t BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
	extern obj_t BGl_za2ldzd2relativeza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00(obj_t, obj_t, obj_t,
		bool_t, bool_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	extern obj_t BGl_za2gczd2customzf3za2z21zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_ldz00zzcc_ldz00(obj_t, bool_t);
	static obj_t BGl_z62zc3z04anonymousza31972ze3ze5zzcc_ldz00(obj_t);
	BGL_IMPORT obj_t BGl_appendz00zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzcc_ldz00();
	extern obj_t BGl_za2sawza2z00zzengine_paramz00;
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_win32zd2ldzd2zzcc_ldz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzcc_ldz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcc_ldz00();
	extern obj_t BGl_za2ccza2z00zzengine_paramz00;
	extern obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	static obj_t BGl_zc3z04anonymousza32085ze3ze70z60zzcc_ldz00(obj_t);
	static obj_t BGl_zc3z04anonymousza32059ze3ze70z60zzcc_ldz00(obj_t);
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_za2gczd2libza2zd2zzengine_paramz00;
	extern obj_t BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_append2(obj_t, obj_t);
	extern obj_t BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_makezd2staticzd2libzd2namezd2zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza32329ze3ze5zzcc_ldz00(obj_t);
	extern obj_t BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00;
	static obj_t BGl_z62ldz62zzcc_ldz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcc_ldz00();
	extern obj_t BGl_za2ozd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_stringza2zd2ze3stringz93zztools_miscz00(obj_t);
	BGL_IMPORT obj_t
		BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	static obj_t BGl_loopze70ze7zzcc_ldz00(obj_t);
	static obj_t BGl_loopze71ze7zzcc_ldz00(obj_t);
	extern obj_t BGl_stringzd2splitzd2charz00zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_za2czd2debugza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzcc_ldz00 = BUNSPEC;
	static obj_t BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00();
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00;
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	extern obj_t BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzcc_ldz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_z62libraryzd2suffixeszb0zzcc_ldz00(obj_t);
	extern obj_t BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	extern obj_t BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00;
	extern obj_t BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_zc3z04anonymousza31240ze3ze70z60zzcc_ldz00(obj_t);
	extern obj_t BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_evalz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_configurez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__libraryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__rgcz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__processz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__configurez00(long,
		char *);
	extern obj_t BGl_za2profilezd2libraryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	extern obj_t BGl_za2withzd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2libza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzcc_ldz00();
	extern obj_t BGl_za2unsafezd2libraryza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_ldz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_ldz00();
	static obj_t BGl_unixzd2ldzd2zzcc_ldz00(obj_t, bool_t);
	extern obj_t BGl_za2cflagszd2rpathza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_bigloozd2configzd2zz__configurez00(obj_t);
	static obj_t BGl_defaultzd2sonameze70z35zzcc_ldz00(obj_t);
	extern obj_t BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
	extern obj_t BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_runzd2processzd2zz__processz00(obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_libraryzd2filezd2namez00zz__libraryz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT bool_t rgc_fill_buffer(obj_t);
	BGL_IMPORT obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_libraryzd2threadzd2suffixz00zzcc_ldz00(obj_t);
	static obj_t BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00();
	static obj_t __cnst[27];


	   
		 
		DEFINE_STRING(BGl_string2718z00zzcc_ldz00,
		BgL_bgl_string2718za700za7za7c2752za7, "unix", 4);
	      DEFINE_STRING(BGl_string2719z00zzcc_ldz00,
		BgL_bgl_string2719za700za7za7c2753za7, "mingw", 5);
	      DEFINE_STRING(BGl_string2720z00zzcc_ldz00,
		BgL_bgl_string2720za700za7za7c2754za7, "win32", 5);
	      DEFINE_STRING(BGl_string2721z00zzcc_ldz00,
		BgL_bgl_string2721za700za7za7c2755za7, "ld", 2);
	      DEFINE_STRING(BGl_string2722z00zzcc_ldz00,
		BgL_bgl_string2722za700za7za7c2756za7, "Unknown os", 10);
	      DEFINE_STRING(BGl_string2723z00zzcc_ldz00,
		BgL_bgl_string2723za700za7za7c2757za7, "_mt", 3);
	      DEFINE_STRING(BGl_string2724z00zzcc_ldz00,
		BgL_bgl_string2724za700za7za7c2758za7, "saw", 3);
	      DEFINE_STRING(BGl_string2725z00zzcc_ldz00,
		BgL_bgl_string2725za700za7za7c2759za7, "_p", 2);
	      DEFINE_STRING(BGl_string2726z00zzcc_ldz00,
		BgL_bgl_string2726za700za7za7c2760za7, "", 0);
	      DEFINE_STRING(BGl_string2727z00zzcc_ldz00,
		BgL_bgl_string2727za700za7za7c2761za7, "-l", 2);
	      DEFINE_STRING(BGl_string2728z00zzcc_ldz00,
		BgL_bgl_string2728za700za7za7c2762za7, "Can't find any `~a'", 19);
	      DEFINE_STRING(BGl_string2729z00zzcc_ldz00,
		BgL_bgl_string2729za700za7za7c2763za7, "bigloo", 6);
	      DEFINE_STRING(BGl_string2730z00zzcc_ldz00,
		BgL_bgl_string2730za700za7za7c2764za7, "Can't find library \"~a\" in path",
		31);
	      DEFINE_STRING(BGl_string2731z00zzcc_ldz00,
		BgL_bgl_string2731za700za7za7c2765za7, " ~( )", 5);
	      DEFINE_STRING(BGl_string2732z00zzcc_ldz00,
		BgL_bgl_string2732za700za7za7c2766za7, ")", 1);
	      DEFINE_STRING(BGl_string2733z00zzcc_ldz00,
		BgL_bgl_string2733za700za7za7c2767za7, "   . ld (", 9);
	      DEFINE_STRING(BGl_string2734z00zzcc_ldz00,
		BgL_bgl_string2734za700za7za7c2768za7, "regular-grammar", 15);
	      DEFINE_STRING(BGl_string2735z00zzcc_ldz00,
		BgL_bgl_string2735za700za7za7c2769za7, "Illegal match", 13);
	      DEFINE_STRING(BGl_string2736z00zzcc_ldz00,
		BgL_bgl_string2736za700za7za7c2770za7, " ", 1);
	      DEFINE_STRING(BGl_string2737z00zzcc_ldz00,
		BgL_bgl_string2737za700za7za7c2771za7, ".", 1);
	      DEFINE_STRING(BGl_string2738z00zzcc_ldz00,
		BgL_bgl_string2738za700za7za7c2772za7, "~( )", 4);
	      DEFINE_STRING(BGl_string2739z00zzcc_ldz00,
		BgL_bgl_string2739za700za7za7c2773za7, "-L", 2);
	      DEFINE_STRING(BGl_string2740z00zzcc_ldz00,
		BgL_bgl_string2740za700za7za7c2774za7, "      [", 7);
	      DEFINE_STRING(BGl_string2741z00zzcc_ldz00,
		BgL_bgl_string2741za700za7za7c2775za7, "bigloo_mt", 9);
	      DEFINE_STRING(BGl_string2742z00zzcc_ldz00,
		BgL_bgl_string2742za700za7za7c2776za7, "/link", 5);
	      DEFINE_STRING(BGl_string2743z00zzcc_ldz00,
		BgL_bgl_string2743za700za7za7c2777za7, "[", 1);
	      DEFINE_STRING(BGl_string2744z00zzcc_ldz00,
		BgL_bgl_string2744za700za7za7c2778za7, "]", 1);
	      DEFINE_STRING(BGl_string2745z00zzcc_ldz00,
		BgL_bgl_string2745za700za7za7c2779za7, "      ", 6);
	      DEFINE_STRING(BGl_string2746z00zzcc_ldz00,
		BgL_bgl_string2746za700za7za7c2780za7, "/LIBPATH:", 9);
	      DEFINE_STRING(BGl_string2747z00zzcc_ldz00,
		BgL_bgl_string2747za700za7za7c2781za7, "cc_ld", 5);
	      DEFINE_STRING(BGl_string2748z00zzcc_ldz00,
		BgL_bgl_string2748za700za7za7c2782za7,
		"(:wait #t) shared-lib-suffix dlopen-lib non-custom-gc-directory c-pic-flag c-strip-flag c-linker-soname-option c-linker-shared-option shared-link-option static-link-option have-shared-library c-ld so c-compiler-rpath (\"_es\") (\"_eu\" \"_es\") (\"_ep\" \"_es\") (\"_s\") (\"_saw_s\" \"_s\") (\"_saw_s\") (\"_u\" \"_s\") (\"_saw_u\" \"_u\" \"_saw_s\") (\"_saw_u\" \"_saw_s\") (\"_p\" \"_s\") (\"_saw_p\" \"_p\" \"_saw_s\" \"_s\") (\"_saw_p\" \"_saw_s\") gc ",
		409);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_libraryzd2suffixeszd2envz00zzcc_ldz00,
		BgL_bgl_za762libraryza7d2suf2783z00, BGl_z62libraryzd2suffixeszb0zzcc_ldz00,
		0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_ldzd2envzd2zzcc_ldz00,
		BgL_bgl_za762ldza762za7za7cc_ldza72784za7, BGl_z62ldz62zzcc_ldz00, 0L,
		BUNSPEC, 2);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcc_ldz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_ldz00(long
		BgL_checksumz00_2406, char *BgL_fromz00_2407)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_ldz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_ldz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcc_ldz00();
					BGl_libraryzd2moduleszd2initz00zzcc_ldz00();
					BGl_cnstzd2initzd2zzcc_ldz00();
					BGl_importedzd2moduleszd2initz00zzcc_ldz00();
					return BGl_methodzd2initzd2zzcc_ldz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__libraryz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__configurez00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__processz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__rgcz00(((long) 0), "cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"cc_ld");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cc_ld");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			{	/* Cc/ld.scm 15 */
				obj_t BgL_cportz00_2393;

				{	/* Cc/ld.scm 15 */
					obj_t BgL_stringz00_2401;

					BgL_stringz00_2401 = BGl_string2748z00zzcc_ldz00;
					{	/* Cc/ld.scm 15 */
						obj_t BgL_startz00_2402;

						BgL_startz00_2402 = BINT(((long) 0));
						{	/* Cc/ld.scm 15 */
							obj_t BgL_endz00_2403;

							BgL_endz00_2403 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2401)));
							{	/* Cc/ld.scm 15 */

								BgL_cportz00_2393 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2401, BgL_startz00_2402, BgL_endz00_2403);
				}}}}
				{
					long BgL_iz00_2394;

					BgL_iz00_2394 = ((long) 26);
				BgL_loopz00_2395:
					if ((BgL_iz00_2394 == ((long) -1)))
						{	/* Cc/ld.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Cc/ld.scm 15 */
							{	/* Cc/ld.scm 15 */
								obj_t BgL_arg2750z00_2397;

								{	/* Cc/ld.scm 15 */

									{	/* Cc/ld.scm 15 */
										obj_t BgL_locationz00_2399;

										BgL_locationz00_2399 = BBOOL(((bool_t) 0));
										{	/* Cc/ld.scm 15 */

											BgL_arg2750z00_2397 =
												BGl_readz00zz__readerz00(BgL_cportz00_2393,
												BgL_locationz00_2399);
										}
									}
								}
								{	/* Cc/ld.scm 15 */
									int BgL_tmpz00_2440;

									BgL_tmpz00_2440 = (int) (BgL_iz00_2394);
									CNST_TABLE_SET(BgL_tmpz00_2440, BgL_arg2750z00_2397);
							}}
							{	/* Cc/ld.scm 15 */
								int BgL_auxz00_2400;

								BgL_auxz00_2400 = (int) ((BgL_iz00_2394 - ((long) 1)));
								{
									long BgL_iz00_2445;

									BgL_iz00_2445 = (long) (BgL_auxz00_2400);
									BgL_iz00_2394 = BgL_iz00_2445;
									goto BgL_loopz00_2395;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzcc_ldz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_102;

				BgL_headz00_102 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_103;
					obj_t BgL_tailz00_104;

					BgL_prevz00_103 = BgL_headz00_102;
					BgL_tailz00_104 = BgL_l1z00_1;
				BgL_loopz00_105:
					if (PAIRP(BgL_tailz00_104))
						{
							obj_t BgL_newzd2prevzd2_107;

							BgL_newzd2prevzd2_107 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_104), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_103, BgL_newzd2prevzd2_107);
							{
								obj_t BgL_tailz00_2455;
								obj_t BgL_prevz00_2454;

								BgL_prevz00_2454 = BgL_newzd2prevzd2_107;
								BgL_tailz00_2455 = CDR(BgL_tailz00_104);
								BgL_tailz00_104 = BgL_tailz00_2455;
								BgL_prevz00_103 = BgL_prevz00_2454;
								goto BgL_loopz00_105;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_102);
				}
			}
		}

	}



/* ld */
	BGL_EXPORTED_DEF obj_t BGl_ldz00zzcc_ldz00(obj_t BgL_namez00_3,
		bool_t BgL_needzd2tozd2returnz00_4)
	{
		{	/* Cc/ld.scm 30 */
			{	/* Cc/ld.scm 32 */
				bool_t BgL_test2788z00_2458;

				{	/* Cc/ld.scm 32 */
					bool_t BgL_res2336z00_1485;

					{	/* Cc/ld.scm 32 */
						obj_t BgL_string1z00_1470;

						BgL_string1z00_1470 = string_to_bstring(OS_CLASS);
						{	/* Cc/ld.scm 32 */
							long BgL_l1z00_1472;

							BgL_l1z00_1472 = STRING_LENGTH(BgL_string1z00_1470);
							if ((BgL_l1z00_1472 == ((long) 4)))
								{	/* Cc/ld.scm 32 */
									int BgL_arg1267z00_1475;

									{	/* Cc/ld.scm 32 */
										char *BgL_auxz00_2465;
										char *BgL_tmpz00_2463;

										BgL_auxz00_2465 =
											BSTRING_TO_STRING(BGl_string2718z00zzcc_ldz00);
										BgL_tmpz00_2463 = BSTRING_TO_STRING(BgL_string1z00_1470);
										BgL_arg1267z00_1475 =
											memcmp(BgL_tmpz00_2463, BgL_auxz00_2465, BgL_l1z00_1472);
									}
									BgL_res2336z00_1485 =
										((long) (BgL_arg1267z00_1475) == ((long) 0));
								}
							else
								{	/* Cc/ld.scm 32 */
									BgL_res2336z00_1485 = ((bool_t) 0);
								}
						}
					}
					BgL_test2788z00_2458 = BgL_res2336z00_1485;
				}
				if (BgL_test2788z00_2458)
					{	/* Cc/ld.scm 32 */
						return
							BGl_unixzd2ldzd2zzcc_ldz00(BgL_namez00_3,
							BgL_needzd2tozd2returnz00_4);
					}
				else
					{	/* Cc/ld.scm 34 */
						bool_t BgL_test2790z00_2471;

						{	/* Cc/ld.scm 34 */
							bool_t BgL_res2341z00_1501;

							{	/* Cc/ld.scm 34 */
								obj_t BgL_string1z00_1486;

								BgL_string1z00_1486 = string_to_bstring(OS_CLASS);
								{	/* Cc/ld.scm 34 */
									long BgL_l1z00_1488;

									BgL_l1z00_1488 = STRING_LENGTH(BgL_string1z00_1486);
									if ((BgL_l1z00_1488 == ((long) 5)))
										{	/* Cc/ld.scm 34 */
											int BgL_arg1267z00_1491;

											{	/* Cc/ld.scm 34 */
												char *BgL_auxz00_2478;
												char *BgL_tmpz00_2476;

												BgL_auxz00_2478 =
													BSTRING_TO_STRING(BGl_string2719z00zzcc_ldz00);
												BgL_tmpz00_2476 =
													BSTRING_TO_STRING(BgL_string1z00_1486);
												BgL_arg1267z00_1491 =
													memcmp(BgL_tmpz00_2476, BgL_auxz00_2478,
													BgL_l1z00_1488);
											}
											BgL_res2341z00_1501 =
												((long) (BgL_arg1267z00_1491) == ((long) 0));
										}
									else
										{	/* Cc/ld.scm 34 */
											BgL_res2341z00_1501 = ((bool_t) 0);
										}
								}
							}
							BgL_test2790z00_2471 = BgL_res2341z00_1501;
						}
						if (BgL_test2790z00_2471)
							{	/* Cc/ld.scm 34 */
								return
									BGl_unixzd2ldzd2zzcc_ldz00(BgL_namez00_3,
									BgL_needzd2tozd2returnz00_4);
							}
						else
							{	/* Cc/ld.scm 36 */
								bool_t BgL_test2792z00_2484;

								{	/* Cc/ld.scm 36 */
									bool_t BgL_res2346z00_1517;

									{	/* Cc/ld.scm 36 */
										obj_t BgL_string1z00_1502;

										BgL_string1z00_1502 = string_to_bstring(OS_CLASS);
										{	/* Cc/ld.scm 36 */
											long BgL_l1z00_1504;

											BgL_l1z00_1504 = STRING_LENGTH(BgL_string1z00_1502);
											if ((BgL_l1z00_1504 == ((long) 5)))
												{	/* Cc/ld.scm 36 */
													int BgL_arg1267z00_1507;

													{	/* Cc/ld.scm 36 */
														char *BgL_auxz00_2491;
														char *BgL_tmpz00_2489;

														BgL_auxz00_2491 =
															BSTRING_TO_STRING(BGl_string2720z00zzcc_ldz00);
														BgL_tmpz00_2489 =
															BSTRING_TO_STRING(BgL_string1z00_1502);
														BgL_arg1267z00_1507 =
															memcmp(BgL_tmpz00_2489, BgL_auxz00_2491,
															BgL_l1z00_1504);
													}
													BgL_res2346z00_1517 =
														((long) (BgL_arg1267z00_1507) == ((long) 0));
												}
											else
												{	/* Cc/ld.scm 36 */
													BgL_res2346z00_1517 = ((bool_t) 0);
												}
										}
									}
									BgL_test2792z00_2484 = BgL_res2346z00_1517;
								}
								if (BgL_test2792z00_2484)
									{	/* Cc/ld.scm 36 */
										return BGl_win32zd2ldzd2zzcc_ldz00(BgL_namez00_3);
									}
								else
									{	/* Cc/ld.scm 36 */
										return
											BGl_userzd2errorzd2zztools_errorz00
											(BGl_string2721z00zzcc_ldz00, BGl_string2722z00zzcc_ldz00,
											string_to_bstring(OS_CLASS), BNIL);
									}
							}
					}
			}
		}

	}



/* &ld */
	obj_t BGl_z62ldz62zzcc_ldz00(obj_t BgL_envz00_2380, obj_t BgL_namez00_2381,
		obj_t BgL_needzd2tozd2returnz00_2382)
	{
		{	/* Cc/ld.scm 30 */
			return
				BGl_ldz00zzcc_ldz00(BgL_namez00_2381,
				CBOOL(BgL_needzd2tozd2returnz00_2382));
		}

	}



/* library-thread-suffix */
	obj_t BGl_libraryzd2threadzd2suffixz00zzcc_ldz00(obj_t BgL_suffixesz00_5)
	{
		{	/* Cc/ld.scm 44 */
			if (CBOOL(BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00))
				{	/* Cc/ld.scm 45 */
					return
						BGl_zc3z04anonymousza31240ze3ze70z60zzcc_ldz00(BgL_suffixesz00_5);
				}
			else
				{	/* Cc/ld.scm 45 */
					return BgL_suffixesz00_5;
				}
		}

	}



/* <@anonymous:1240>~0 */
	obj_t BGl_zc3z04anonymousza31240ze3ze70z60zzcc_ldz00(obj_t BgL_l1170z00_122)
	{
		{	/* Cc/ld.scm 46 */
			if (NULLP(BgL_l1170z00_122))
				{	/* Cc/ld.scm 46 */
					return BNIL;
				}
			else
				{	/* Cc/ld.scm 47 */
					obj_t BgL_arg1243z00_125;
					obj_t BgL_arg1245z00_126;

					{	/* Cc/ld.scm 47 */
						obj_t BgL_sz00_127;

						BgL_sz00_127 = CAR(((obj_t) BgL_l1170z00_122));
						{	/* Cc/ld.scm 47 */
							obj_t BgL_arg1246z00_128;

							BgL_arg1246z00_128 =
								string_append(BgL_sz00_127, BGl_string2723z00zzcc_ldz00);
							{	/* Cc/ld.scm 47 */
								obj_t BgL_list1247z00_129;

								{	/* Cc/ld.scm 47 */
									obj_t BgL_arg1250z00_130;

									BgL_arg1250z00_130 = MAKE_YOUNG_PAIR(BgL_sz00_127, BNIL);
									BgL_list1247z00_129 =
										MAKE_YOUNG_PAIR(BgL_arg1246z00_128, BgL_arg1250z00_130);
								}
								BgL_arg1243z00_125 = BgL_list1247z00_129;
							}
						}
					}
					{	/* Cc/ld.scm 46 */
						obj_t BgL_arg1252z00_131;

						BgL_arg1252z00_131 = CDR(((obj_t) BgL_l1170z00_122));
						BgL_arg1245z00_126 =
							BGl_zc3z04anonymousza31240ze3ze70z60zzcc_ldz00
							(BgL_arg1252z00_131);
					}
					return bgl_append2(BgL_arg1243z00_125, BgL_arg1245z00_126);
				}
		}

	}



/* library-suffixes */
	BGL_EXPORTED_DEF obj_t BGl_libraryzd2suffixeszd2zzcc_ldz00()
	{
		{	/* Cc/ld.scm 54 */
			{	/* Cc/ld.scm 57 */
				obj_t BgL_arg1253z00_133;

				if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
					{	/* Cc/ld.scm 57 */
						if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
							{	/* Cc/ld.scm 59 */
								bool_t BgL_test2798z00_2519;

								{	/* Cc/ld.scm 59 */
									obj_t BgL_arg1256z00_136;

									BgL_arg1256z00_136 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 0)));
									{	/* Cc/ld.scm 59 */
										bool_t BgL_res2353z00_1537;

										{	/* Cc/ld.scm 59 */
											long BgL_l1z00_1524;

											BgL_l1z00_1524 =
												STRING_LENGTH(((obj_t) BgL_arg1256z00_136));
											if ((BgL_l1z00_1524 == ((long) 3)))
												{	/* Cc/ld.scm 59 */
													int BgL_arg1267z00_1527;

													{	/* Cc/ld.scm 59 */
														char *BgL_auxz00_2529;
														char *BgL_tmpz00_2526;

														BgL_auxz00_2529 =
															BSTRING_TO_STRING(BGl_string2724z00zzcc_ldz00);
														BgL_tmpz00_2526 =
															BSTRING_TO_STRING(((obj_t) BgL_arg1256z00_136));
														BgL_arg1267z00_1527 =
															memcmp(BgL_tmpz00_2526, BgL_auxz00_2529,
															BgL_l1z00_1524);
													}
													BgL_res2353z00_1537 =
														((long) (BgL_arg1267z00_1527) == ((long) 0));
												}
											else
												{	/* Cc/ld.scm 59 */
													BgL_res2353z00_1537 = ((bool_t) 0);
												}
										}
										BgL_test2798z00_2519 = BgL_res2353z00_1537;
									}
								}
								if (BgL_test2798z00_2519)
									{	/* Cc/ld.scm 59 */
										BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 1));
									}
								else
									{	/* Cc/ld.scm 59 */
										BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 2));
							}}
						else
							{	/* Cc/ld.scm 58 */
								BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 3));
					}}
				else
					{	/* Cc/ld.scm 57 */
						if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
							{	/* Cc/ld.scm 63 */
								if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
									{	/* Cc/ld.scm 65 */
										bool_t BgL_test2802z00_2541;

										{	/* Cc/ld.scm 65 */
											obj_t BgL_arg1263z00_139;

											BgL_arg1263z00_139 =
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 0)));
											{	/* Cc/ld.scm 65 */
												bool_t BgL_res2358z00_1553;

												{	/* Cc/ld.scm 65 */
													long BgL_l1z00_1540;

													BgL_l1z00_1540 =
														STRING_LENGTH(((obj_t) BgL_arg1263z00_139));
													if ((BgL_l1z00_1540 == ((long) 3)))
														{	/* Cc/ld.scm 65 */
															int BgL_arg1267z00_1543;

															{	/* Cc/ld.scm 65 */
																char *BgL_auxz00_2551;
																char *BgL_tmpz00_2548;

																BgL_auxz00_2551 =
																	BSTRING_TO_STRING
																	(BGl_string2724z00zzcc_ldz00);
																BgL_tmpz00_2548 =
																	BSTRING_TO_STRING(((obj_t)
																		BgL_arg1263z00_139));
																BgL_arg1267z00_1543 =
																	memcmp(BgL_tmpz00_2548, BgL_auxz00_2551,
																	BgL_l1z00_1540);
															}
															BgL_res2358z00_1553 =
																((long) (BgL_arg1267z00_1543) == ((long) 0));
														}
													else
														{	/* Cc/ld.scm 65 */
															BgL_res2358z00_1553 = ((bool_t) 0);
														}
												}
												BgL_test2802z00_2541 = BgL_res2358z00_1553;
											}
										}
										if (BgL_test2802z00_2541)
											{	/* Cc/ld.scm 65 */
												BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 4));
											}
										else
											{	/* Cc/ld.scm 65 */
												BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 5));
									}}
								else
									{	/* Cc/ld.scm 64 */
										BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 6));
							}}
						else
							{	/* Cc/ld.scm 63 */
								if (CBOOL(BGl_za2sawza2z00zzengine_paramz00))
									{	/* Cc/ld.scm 70 */
										bool_t BgL_test2805z00_2561;

										{	/* Cc/ld.scm 70 */
											obj_t BgL_arg1270z00_142;

											BgL_arg1270z00_142 =
												BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
														(long) 0)));
											{	/* Cc/ld.scm 70 */
												bool_t BgL_res2363z00_1569;

												{	/* Cc/ld.scm 70 */
													long BgL_l1z00_1556;

													BgL_l1z00_1556 =
														STRING_LENGTH(((obj_t) BgL_arg1270z00_142));
													if ((BgL_l1z00_1556 == ((long) 3)))
														{	/* Cc/ld.scm 70 */
															int BgL_arg1267z00_1559;

															{	/* Cc/ld.scm 70 */
																char *BgL_auxz00_2571;
																char *BgL_tmpz00_2568;

																BgL_auxz00_2571 =
																	BSTRING_TO_STRING
																	(BGl_string2724z00zzcc_ldz00);
																BgL_tmpz00_2568 =
																	BSTRING_TO_STRING(((obj_t)
																		BgL_arg1270z00_142));
																BgL_arg1267z00_1559 =
																	memcmp(BgL_tmpz00_2568, BgL_auxz00_2571,
																	BgL_l1z00_1556);
															}
															BgL_res2363z00_1569 =
																((long) (BgL_arg1267z00_1559) == ((long) 0));
														}
													else
														{	/* Cc/ld.scm 70 */
															BgL_res2363z00_1569 = ((bool_t) 0);
														}
												}
												BgL_test2805z00_2561 = BgL_res2363z00_1569;
											}
										}
										if (BgL_test2805z00_2561)
											{	/* Cc/ld.scm 70 */
												BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 7));
											}
										else
											{	/* Cc/ld.scm 70 */
												BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 8));
									}}
								else
									{	/* Cc/ld.scm 69 */
										BgL_arg1253z00_133 = CNST_TABLE_REF(((long) 9));
					}}}
				return BGl_libraryzd2threadzd2suffixz00zzcc_ldz00(BgL_arg1253z00_133);
			}
		}

	}



/* &library-suffixes */
	obj_t BGl_z62libraryzd2suffixeszb0zzcc_ldz00(obj_t BgL_envz00_2383)
	{
		{	/* Cc/ld.scm 54 */
			return BGl_libraryzd2suffixeszd2zzcc_ldz00();
		}

	}



/* library-eval-suffixes */
	obj_t BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00()
	{
		{	/* Cc/ld.scm 79 */
			{	/* Cc/ld.scm 82 */
				obj_t BgL_arg1271z00_143;

				if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
					{	/* Cc/ld.scm 82 */
						BgL_arg1271z00_143 = CNST_TABLE_REF(((long) 10));
					}
				else
					{	/* Cc/ld.scm 82 */
						if (CBOOL(BGl_za2unsafezd2libraryza2zd2zzengine_paramz00))
							{	/* Cc/ld.scm 83 */
								BgL_arg1271z00_143 = CNST_TABLE_REF(((long) 11));
							}
						else
							{	/* Cc/ld.scm 83 */
								BgL_arg1271z00_143 = CNST_TABLE_REF(((long) 12));
					}}
				return BGl_libraryzd2threadzd2suffixz00zzcc_ldz00(BgL_arg1271z00_143);
			}
		}

	}



/* profile-gc-debug-library-suffix */
	obj_t BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00()
	{
		{	/* Cc/ld.scm 95 */
			if (CBOOL(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
				{	/* Cc/ld.scm 97 */
					return BGl_string2725z00zzcc_ldz00;
				}
			else
				{	/* Cc/ld.scm 97 */
					return BGl_string2726z00zzcc_ldz00;
				}
		}

	}



/* library->os-file */
	obj_t BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00(obj_t BgL_libraryz00_6,
		obj_t BgL_suffixesz00_7, obj_t BgL_staticpz00_8, bool_t BgL_forcepz00_9,
		bool_t BgL_foreignpz00_10)
	{
		{	/* Cc/ld.scm 103 */
		BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00:
			{
				obj_t BgL_libraryz00_166;
				obj_t BgL_backendz00_167;

				{	/* Cc/ld.scm 116 */
					obj_t BgL_backendz00_145;

					{	/* Cc/ld.scm 116 */
						obj_t BgL_arg1286z00_165;

						BgL_arg1286z00_165 = BGl_thezd2backendzd2zzbackend_backendz00();
						BgL_backendz00_145 =
							(((BgL_backendz00_bglt) COBJECT(
									((BgL_backendz00_bglt) BgL_arg1286z00_165)))->BgL_srfi0z00);
					}
					if (BgL_foreignpz00_10)
						{	/* Cc/ld.scm 118 */
							obj_t BgL_arg1273z00_146;

							{	/* Cc/ld.scm 118 */
								obj_t BgL_res2380z00_1623;

								{	/* Cc/ld.scm 118 */
									obj_t BgL_arg1466z00_1622;

									BgL_arg1466z00_1622 =
										SYMBOL_TO_STRING(((obj_t) BgL_libraryz00_6));
									BgL_res2380z00_1623 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1622);
								}
								BgL_arg1273z00_146 = BgL_res2380z00_1623;
							}
							BgL_libraryz00_166 = BgL_arg1273z00_146;
							BgL_backendz00_167 = BgL_backendz00_145;
						BgL_zc3z04anonymousza31287ze3z87_168:
							{	/* Cc/ld.scm 107 */
								obj_t BgL_arg1288z00_169;

								{	/* Cc/ld.scm 107 */
									bool_t BgL_test2811z00_2598;

									{	/* Cc/ld.scm 107 */
										bool_t BgL_test2812z00_2599;

										{	/* Cc/ld.scm 107 */
											bool_t BgL_res2368z00_1585;

											{	/* Cc/ld.scm 107 */
												obj_t BgL_string1z00_1570;

												BgL_string1z00_1570 = string_to_bstring(OS_CLASS);
												{	/* Cc/ld.scm 107 */
													long BgL_l1z00_1572;

													BgL_l1z00_1572 = STRING_LENGTH(BgL_string1z00_1570);
													if ((BgL_l1z00_1572 == ((long) 4)))
														{	/* Cc/ld.scm 107 */
															int BgL_arg1267z00_1575;

															{	/* Cc/ld.scm 107 */
																char *BgL_auxz00_2606;
																char *BgL_tmpz00_2604;

																BgL_auxz00_2606 =
																	BSTRING_TO_STRING
																	(BGl_string2718z00zzcc_ldz00);
																BgL_tmpz00_2604 =
																	BSTRING_TO_STRING(BgL_string1z00_1570);
																BgL_arg1267z00_1575 =
																	memcmp(BgL_tmpz00_2604, BgL_auxz00_2606,
																	BgL_l1z00_1572);
															}
															BgL_res2368z00_1585 =
																((long) (BgL_arg1267z00_1575) == ((long) 0));
														}
													else
														{	/* Cc/ld.scm 107 */
															BgL_res2368z00_1585 = ((bool_t) 0);
														}
												}
											}
											BgL_test2812z00_2599 = BgL_res2368z00_1585;
										}
										if (BgL_test2812z00_2599)
											{	/* Cc/ld.scm 107 */
												BgL_test2811z00_2598 = ((bool_t) 1);
											}
										else
											{	/* Cc/ld.scm 108 */
												bool_t BgL_res2373z00_1601;

												{	/* Cc/ld.scm 108 */
													obj_t BgL_string1z00_1586;

													BgL_string1z00_1586 = string_to_bstring(OS_CLASS);
													{	/* Cc/ld.scm 108 */
														long BgL_l1z00_1588;

														BgL_l1z00_1588 = STRING_LENGTH(BgL_string1z00_1586);
														if ((BgL_l1z00_1588 == ((long) 5)))
															{	/* Cc/ld.scm 108 */
																int BgL_arg1267z00_1591;

																{	/* Cc/ld.scm 108 */
																	char *BgL_auxz00_2617;
																	char *BgL_tmpz00_2615;

																	BgL_auxz00_2617 =
																		BSTRING_TO_STRING
																		(BGl_string2719z00zzcc_ldz00);
																	BgL_tmpz00_2615 =
																		BSTRING_TO_STRING(BgL_string1z00_1586);
																	BgL_arg1267z00_1591 =
																		memcmp(BgL_tmpz00_2615, BgL_auxz00_2617,
																		BgL_l1z00_1588);
																}
																BgL_res2373z00_1601 =
																	((long) (BgL_arg1267z00_1591) == ((long) 0));
															}
														else
															{	/* Cc/ld.scm 108 */
																BgL_res2373z00_1601 = ((bool_t) 0);
															}
													}
												}
												BgL_test2811z00_2598 = BgL_res2373z00_1601;
											}
									}
									if (BgL_test2811z00_2598)
										{	/* Cc/ld.scm 107 */
											BgL_arg1288z00_169 = BGl_string2727z00zzcc_ldz00;
										}
									else
										{	/* Cc/ld.scm 110 */
											bool_t BgL_test2815z00_2622;

											{	/* Cc/ld.scm 110 */
												bool_t BgL_res2378z00_1617;

												{	/* Cc/ld.scm 110 */
													obj_t BgL_string1z00_1602;

													BgL_string1z00_1602 = string_to_bstring(OS_CLASS);
													{	/* Cc/ld.scm 110 */
														long BgL_l1z00_1604;

														BgL_l1z00_1604 = STRING_LENGTH(BgL_string1z00_1602);
														if ((BgL_l1z00_1604 == ((long) 5)))
															{	/* Cc/ld.scm 110 */
																int BgL_arg1267z00_1607;

																{	/* Cc/ld.scm 110 */
																	char *BgL_auxz00_2629;
																	char *BgL_tmpz00_2627;

																	BgL_auxz00_2629 =
																		BSTRING_TO_STRING
																		(BGl_string2720z00zzcc_ldz00);
																	BgL_tmpz00_2627 =
																		BSTRING_TO_STRING(BgL_string1z00_1602);
																	BgL_arg1267z00_1607 =
																		memcmp(BgL_tmpz00_2627, BgL_auxz00_2629,
																		BgL_l1z00_1604);
																}
																BgL_res2378z00_1617 =
																	((long) (BgL_arg1267z00_1607) == ((long) 0));
															}
														else
															{	/* Cc/ld.scm 110 */
																BgL_res2378z00_1617 = ((bool_t) 0);
															}
													}
												}
												BgL_test2815z00_2622 = BgL_res2378z00_1617;
											}
											if (BgL_test2815z00_2622)
												{	/* Cc/ld.scm 110 */
													BgL_arg1288z00_169 = BGl_string2726z00zzcc_ldz00;
												}
											else
												{	/* Cc/ld.scm 110 */
													BgL_arg1288z00_169 =
														BGl_userzd2errorzd2zztools_errorz00
														(BGl_string2721z00zzcc_ldz00,
														BGl_string2722z00zzcc_ldz00,
														string_to_bstring(OS_CLASS), BNIL);
												}
										}
								}
								return string_append(BgL_arg1288z00_169, BgL_libraryz00_166);
							}
						}
					else
						{
							obj_t BgL_ssz00_148;

							BgL_ssz00_148 = BgL_suffixesz00_7;
						BgL_zc3z04anonymousza31274ze3z87_149:
							if (NULLP(BgL_ssz00_148))
								{	/* Cc/ld.scm 120 */
									if (CBOOL(BgL_staticpz00_8))
										{	/* Cc/ld.scm 123 */
											obj_t BgL_arg1276z00_151;

											{	/* Cc/ld.scm 123 */
												obj_t BgL_list1277z00_152;

												BgL_list1277z00_152 =
													MAKE_YOUNG_PAIR(BgL_libraryz00_6, BNIL);
												BgL_arg1276z00_151 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BGl_string2728z00zzcc_ldz00, BgL_list1277z00_152);
											}
											return
												BGl_errorz00zz__errorz00(BGl_string2729z00zzcc_ldz00,
												BgL_arg1276z00_151,
												BGl_za2libzd2dirza2zd2zzengine_paramz00);
										}
									else
										{
											obj_t BgL_staticpz00_2644;

											BgL_staticpz00_2644 = BTRUE;
											BgL_staticpz00_8 = BgL_staticpz00_2644;
											goto BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00;
										}
								}
							else
								{	/* Cc/ld.scm 126 */
									obj_t BgL_lnamez00_153;

									{	/* Cc/ld.scm 126 */
										obj_t BgL_arg1285z00_163;

										BgL_arg1285z00_163 = CAR(((obj_t) BgL_ssz00_148));
										BgL_lnamez00_153 =
											BGl_libraryzd2filezd2namez00zz__libraryz00
											(BgL_libraryz00_6, BgL_arg1285z00_163,
											BgL_backendz00_145);
									}
									{	/* Cc/ld.scm 126 */
										obj_t BgL_fnamez00_154;

										if (CBOOL(BgL_staticpz00_8))
											{	/* Cc/ld.scm 127 */
												BgL_fnamez00_154 =
													BGl_makezd2staticzd2libzd2namezd2zz__osz00
													(BgL_lnamez00_153, BgL_backendz00_145);
											}
										else
											{	/* Cc/ld.scm 127 */
												BgL_fnamez00_154 =
													BGl_makezd2sharedzd2libzd2namezd2zz__osz00
													(BgL_lnamez00_153, BgL_backendz00_145);
											}
										{	/* Cc/ld.scm 127 */
											obj_t BgL_namez00_155;

											BgL_namez00_155 =
												BGl_findzd2filezf2pathz20zz__osz00(BgL_fnamez00_154,
												BGl_za2libzd2dirza2zd2zzengine_paramz00);
											{	/* Cc/ld.scm 131 */

												if (STRINGP(BgL_namez00_155))
													{	/* Cc/ld.scm 133 */
														bool_t BgL_test2821z00_2655;

														if (CBOOL
															(BGl_za2ldzd2relativeza2zd2zzengine_paramz00))
															{	/* Cc/ld.scm 133 */
																if (CBOOL
																	(BGl_za2profilezd2libraryza2zd2zzengine_paramz00))
																	{	/* Cc/ld.scm 134 */
																		BgL_test2821z00_2655 = ((bool_t) 0);
																	}
																else
																	{	/* Cc/ld.scm 135 */
																		bool_t BgL_test2824z00_2660;

																		if (CBOOL(BgL_staticpz00_8))
																			{	/* Cc/ld.scm 135 */
																				BgL_test2824z00_2660 = ((bool_t) 1);
																			}
																		else
																			{	/* Cc/ld.scm 135 */
																				if (CBOOL
																					(BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00))
																					{	/* Cc/ld.scm 135 */
																						BgL_test2824z00_2660 = ((bool_t) 1);
																					}
																				else
																					{	/* Cc/ld.scm 135 */
																						BgL_test2824z00_2660 =
																							CBOOL
																							(BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00);
																					}
																			}
																		if (BgL_test2824z00_2660)
																			{	/* Cc/ld.scm 135 */
																				BgL_test2821z00_2655 = ((bool_t) 0);
																			}
																		else
																			{	/* Cc/ld.scm 135 */
																				BgL_test2821z00_2655 = ((bool_t) 1);
																			}
																	}
															}
														else
															{	/* Cc/ld.scm 133 */
																BgL_test2821z00_2655 = ((bool_t) 0);
															}
														if (BgL_test2821z00_2655)
															{
																obj_t BgL_backendz00_2667;
																obj_t BgL_libraryz00_2666;

																BgL_libraryz00_2666 = BgL_lnamez00_153;
																BgL_backendz00_2667 = BgL_backendz00_145;
																BgL_backendz00_167 = BgL_backendz00_2667;
																BgL_libraryz00_166 = BgL_libraryz00_2666;
																goto BgL_zc3z04anonymousza31287ze3z87_168;
															}
														else
															{	/* Cc/ld.scm 133 */
																return BgL_namez00_155;
															}
													}
												else
													{	/* Cc/ld.scm 132 */
														{	/* Cc/ld.scm 142 */
															obj_t BgL_arg1281z00_160;

															{	/* Cc/ld.scm 142 */
																obj_t BgL_list1282z00_161;

																BgL_list1282z00_161 =
																	MAKE_YOUNG_PAIR(BgL_fnamez00_154, BNIL);
																BgL_arg1281z00_160 =
																	BGl_formatz00zz__r4_output_6_10_3z00
																	(BGl_string2730z00zzcc_ldz00,
																	BgL_list1282z00_161);
															}
															BGl_userzd2warningzd2zztools_errorz00
																(BGl_string2721z00zzcc_ldz00,
																BgL_arg1281z00_160,
																BGl_za2libzd2dirza2zd2zzengine_paramz00);
														}
														{	/* Cc/ld.scm 144 */
															obj_t BgL_arg1284z00_162;

															BgL_arg1284z00_162 = CDR(((obj_t) BgL_ssz00_148));
															{
																obj_t BgL_ssz00_2673;

																BgL_ssz00_2673 = BgL_arg1284z00_162;
																BgL_ssz00_148 = BgL_ssz00_2673;
																goto BgL_zc3z04anonymousza31274ze3z87_149;
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



/* unix-ld */
	obj_t BGl_unixzd2ldzd2zzcc_ldz00(obj_t BgL_namez00_11,
		bool_t BgL_needzd2tozd2returnz00_12)
	{
		{	/* Cc/ld.scm 149 */
			{

				{	/* Cc/ld.scm 170 */
					obj_t BgL_compz00_186;

					if (
						(BGl_za2passza2z00zzengine_paramz00 == CNST_TABLE_REF(((long) 14))))
						{	/* Cc/ld.scm 170 */
							BgL_compz00_186 =
								BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
										15)));
						}
					else
						{	/* Cc/ld.scm 170 */
							BgL_compz00_186 = BGl_za2ccza2z00zzengine_paramz00;
						}
					{	/* Cc/ld.scm 174 */
						obj_t BgL_list1302z00_187;

						{	/* Cc/ld.scm 174 */
							obj_t BgL_arg1303z00_188;

							{	/* Cc/ld.scm 174 */
								obj_t BgL_arg1304z00_189;

								{	/* Cc/ld.scm 174 */
									obj_t BgL_arg1306z00_190;

									BgL_arg1306z00_190 =
										MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
									BgL_arg1304z00_189 =
										MAKE_YOUNG_PAIR(BGl_string2732z00zzcc_ldz00,
										BgL_arg1306z00_190);
								}
								BgL_arg1303z00_188 =
									MAKE_YOUNG_PAIR(BgL_compz00_186, BgL_arg1304z00_189);
							}
							BgL_list1302z00_187 =
								MAKE_YOUNG_PAIR(BGl_string2733z00zzcc_ldz00,
								BgL_arg1303z00_188);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1302z00_187);
					}
					{	/* Cc/ld.scm 176 */
						obj_t BgL_staticpz00_191;

						{	/* Cc/ld.scm 176 */
							bool_t BgL__ortest_1047z00_383;

							if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 16)))))
								{	/* Cc/ld.scm 176 */
									BgL__ortest_1047z00_383 = ((bool_t) 0);
								}
							else
								{	/* Cc/ld.scm 176 */
									BgL__ortest_1047z00_383 = ((bool_t) 1);
								}
							if (BgL__ortest_1047z00_383)
								{	/* Cc/ld.scm 176 */
									BgL_staticpz00_191 = BBOOL(BgL__ortest_1047z00_383);
								}
							else
								{	/* Cc/ld.scm 177 */
									obj_t BgL_port1048z00_384;

									{	/* Cc/ld.scm 177 */
										obj_t BgL_stringz00_810;

										BgL_stringz00_810 =
											BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
										{	/* Cc/ld.scm 177 */
											long BgL_endz00_812;

											BgL_endz00_812 =
												STRING_LENGTH(((obj_t) BgL_stringz00_810));
											{	/* Cc/ld.scm 177 */

												BgL_port1048z00_384 =
													BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
													(BgL_stringz00_810, BINT(((long) 0)),
													BINT(BgL_endz00_812));
									}}}
									{	/* Cc/ld.scm 177 */
										obj_t BgL_exitd1049z00_385;

										BgL_exitd1049z00_385 = BGL_EXITD_TOP_AS_OBJ();
										{	/* Cc/ld.scm 177 */
											obj_t BgL_zc3z04anonymousza31972ze3z87_2384;

											BgL_zc3z04anonymousza31972ze3z87_2384 =
												MAKE_FX_PROCEDURE
												(BGl_z62zc3z04anonymousza31972ze3ze5zzcc_ldz00,
												(int) (((long) 0)), (int) (((long) 1)));
											PROCEDURE_SET(BgL_zc3z04anonymousza31972ze3z87_2384,
												(int) (((long) 0)), BgL_port1048z00_384);
											BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
												(BgL_exitd1049z00_385,
												BgL_zc3z04anonymousza31972ze3z87_2384);
											{	/* Cc/ld.scm 177 */
												obj_t BgL_tmp1051z00_387;

												{
													obj_t BgL_iportz00_429;
													long BgL_lastzd2matchzd2_430;
													long BgL_forwardz00_431;
													long BgL_bufposz00_432;
													obj_t BgL_iportz00_446;
													long BgL_lastzd2matchzd2_447;
													long BgL_forwardz00_448;
													long BgL_bufposz00_449;
													obj_t BgL_iportz00_467;
													long BgL_lastzd2matchzd2_468;
													long BgL_forwardz00_469;
													long BgL_bufposz00_470;
													obj_t BgL_iportz00_483;
													long BgL_lastzd2matchzd2_484;
													long BgL_forwardz00_485;
													long BgL_bufposz00_486;
													obj_t BgL_iportz00_503;
													long BgL_lastzd2matchzd2_504;
													long BgL_forwardz00_505;
													long BgL_bufposz00_506;
													obj_t BgL_iportz00_523;
													long BgL_lastzd2matchzd2_524;
													long BgL_forwardz00_525;
													long BgL_bufposz00_526;
													obj_t BgL_iportz00_543;
													long BgL_lastzd2matchzd2_544;
													long BgL_forwardz00_545;
													long BgL_bufposz00_546;
													obj_t BgL_iportz00_563;
													long BgL_lastzd2matchzd2_564;
													long BgL_forwardz00_565;
													long BgL_bufposz00_566;
													obj_t BgL_iportz00_583;
													long BgL_lastzd2matchzd2_584;
													long BgL_forwardz00_585;
													long BgL_bufposz00_586;
													obj_t BgL_iportz00_603;
													long BgL_lastzd2matchzd2_604;
													long BgL_forwardz00_605;
													long BgL_bufposz00_606;
													obj_t BgL_iportz00_626;
													long BgL_lastzd2matchzd2_627;
													long BgL_forwardz00_628;
													long BgL_bufposz00_629;

													{	/* Cc/ld.scm 177 */
														long BgL_res2530z00_1957;

														BgL_res2530z00_1957 =
															RGC_START_MATCH(BgL_port1048z00_384);
														BgL_res2530z00_1957;
													}
													{	/* Cc/ld.scm 177 */
														long BgL_matchz00_760;

														{	/* Cc/ld.scm 177 */
															long BgL_arg1970z00_767;
															long BgL_arg1971z00_768;

															{	/* Cc/ld.scm 177 */
																long BgL_res2531z00_1959;

																BgL_res2531z00_1959 =
																	RGC_BUFFER_FORWARD(BgL_port1048z00_384);
																BgL_arg1970z00_767 = BgL_res2531z00_1959;
															}
															{	/* Cc/ld.scm 177 */
																long BgL_res2532z00_1961;

																BgL_res2532z00_1961 =
																	RGC_BUFFER_BUFPOS(BgL_port1048z00_384);
																BgL_arg1971z00_768 = BgL_res2532z00_1961;
															}
															BgL_iportz00_626 = BgL_port1048z00_384;
															BgL_lastzd2matchzd2_627 = ((long) 1);
															BgL_forwardz00_628 = BgL_arg1970z00_767;
															BgL_bufposz00_629 = BgL_arg1971z00_768;
														BgL_zc3z04anonymousza31868ze3z87_630:
															if ((BgL_forwardz00_628 == BgL_bufposz00_629))
																{	/* Cc/ld.scm 177 */
																	if (rgc_fill_buffer(BgL_iportz00_626))
																		{	/* Cc/ld.scm 177 */
																			long BgL_arg1871z00_633;
																			long BgL_arg1872z00_634;

																			{	/* Cc/ld.scm 177 */
																				long BgL_res2521z00_1936;

																				BgL_res2521z00_1936 =
																					RGC_BUFFER_FORWARD(BgL_iportz00_626);
																				BgL_arg1871z00_633 =
																					BgL_res2521z00_1936;
																			}
																			{	/* Cc/ld.scm 177 */
																				long BgL_res2522z00_1938;

																				BgL_res2522z00_1938 =
																					RGC_BUFFER_BUFPOS(BgL_iportz00_626);
																				BgL_arg1872z00_634 =
																					BgL_res2522z00_1938;
																			}
																			{
																				long BgL_bufposz00_2714;
																				long BgL_forwardz00_2713;

																				BgL_forwardz00_2713 =
																					BgL_arg1871z00_633;
																				BgL_bufposz00_2714 = BgL_arg1872z00_634;
																				BgL_bufposz00_629 = BgL_bufposz00_2714;
																				BgL_forwardz00_628 =
																					BgL_forwardz00_2713;
																				goto
																					BgL_zc3z04anonymousza31868ze3z87_630;
																			}
																		}
																	else
																		{	/* Cc/ld.scm 177 */
																			BgL_matchz00_760 =
																				BgL_lastzd2matchzd2_627;
																		}
																}
															else
																{	/* Cc/ld.scm 177 */
																	int BgL_curz00_635;

																	{	/* Cc/ld.scm 177 */
																		int BgL_res2523z00_1941;

																		BgL_res2523z00_1941 =
																			RGC_BUFFER_GET_CHAR(BgL_iportz00_626,
																			BgL_forwardz00_628);
																		BgL_curz00_635 = BgL_res2523z00_1941;
																	}
																	{	/* Cc/ld.scm 177 */

																		if (
																			((long) (BgL_curz00_635) == ((long) 45)))
																			{	/* Cc/ld.scm 177 */
																				BgL_iportz00_446 = BgL_iportz00_626;
																				BgL_lastzd2matchzd2_447 =
																					BgL_lastzd2matchzd2_627;
																				BgL_forwardz00_448 =
																					(((long) 1) + BgL_forwardz00_628);
																				BgL_bufposz00_449 = BgL_bufposz00_629;
																			BgL_zc3z04anonymousza31693ze3z87_450:
																				{	/* Cc/ld.scm 177 */
																					long BgL_newzd2matchzd2_451;

																					{	/* Cc/ld.scm 177 */
																						long BgL_res2405z00_1682;

																						BgL_res2405z00_1682 =
																							RGC_STOP_MATCH(BgL_iportz00_446,
																							BgL_forwardz00_448);
																						BgL_res2405z00_1682;
																					}
																					BgL_newzd2matchzd2_451 = ((long) 1);
																					if (
																						(BgL_forwardz00_448 ==
																							BgL_bufposz00_449))
																						{	/* Cc/ld.scm 177 */
																							if (rgc_fill_buffer
																								(BgL_iportz00_446))
																								{	/* Cc/ld.scm 177 */
																									long BgL_arg1696z00_454;
																									long BgL_arg1697z00_455;

																									{	/* Cc/ld.scm 177 */
																										long BgL_res2408z00_1689;

																										BgL_res2408z00_1689 =
																											RGC_BUFFER_FORWARD
																											(BgL_iportz00_446);
																										BgL_arg1696z00_454 =
																											BgL_res2408z00_1689;
																									}
																									{	/* Cc/ld.scm 177 */
																										long BgL_res2409z00_1691;

																										BgL_res2409z00_1691 =
																											RGC_BUFFER_BUFPOS
																											(BgL_iportz00_446);
																										BgL_arg1697z00_455 =
																											BgL_res2409z00_1691;
																									}
																									{
																										long BgL_bufposz00_2727;
																										long BgL_forwardz00_2726;

																										BgL_forwardz00_2726 =
																											BgL_arg1696z00_454;
																										BgL_bufposz00_2727 =
																											BgL_arg1697z00_455;
																										BgL_bufposz00_449 =
																											BgL_bufposz00_2727;
																										BgL_forwardz00_448 =
																											BgL_forwardz00_2726;
																										goto
																											BgL_zc3z04anonymousza31693ze3z87_450;
																									}
																								}
																							else
																								{	/* Cc/ld.scm 177 */
																									BgL_matchz00_760 =
																										BgL_newzd2matchzd2_451;
																								}
																						}
																					else
																						{	/* Cc/ld.scm 177 */
																							int BgL_curz00_456;

																							{	/* Cc/ld.scm 177 */
																								int BgL_res2410z00_1694;

																								BgL_res2410z00_1694 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_iportz00_446,
																									BgL_forwardz00_448);
																								BgL_curz00_456 =
																									BgL_res2410z00_1694;
																							}
																							{	/* Cc/ld.scm 177 */

																								if (
																									((long) (BgL_curz00_456) ==
																										((long) 115)))
																									{	/* Cc/ld.scm 177 */
																										BgL_iportz00_503 =
																											BgL_iportz00_446;
																										BgL_lastzd2matchzd2_504 =
																											BgL_newzd2matchzd2_451;
																										BgL_forwardz00_505 =
																											(((long) 1) +
																											BgL_forwardz00_448);
																										BgL_bufposz00_506 =
																											BgL_bufposz00_449;
																									BgL_zc3z04anonymousza31755ze3z87_507:
																										if (
																											(BgL_forwardz00_505 ==
																												BgL_bufposz00_506))
																											{	/* Cc/ld.scm 177 */
																												if (rgc_fill_buffer
																													(BgL_iportz00_503))
																													{	/* Cc/ld.scm 177 */
																														long
																															BgL_arg1759z00_510;
																														long
																															BgL_arg1760z00_511;
																														{	/* Cc/ld.scm 177 */
																															long
																																BgL_res2444z00_1767;
																															BgL_res2444z00_1767
																																=
																																RGC_BUFFER_FORWARD
																																(BgL_iportz00_503);
																															BgL_arg1759z00_510
																																=
																																BgL_res2444z00_1767;
																														}
																														{	/* Cc/ld.scm 177 */
																															long
																																BgL_res2445z00_1769;
																															BgL_res2445z00_1769
																																=
																																RGC_BUFFER_BUFPOS
																																(BgL_iportz00_503);
																															BgL_arg1760z00_511
																																=
																																BgL_res2445z00_1769;
																														}
																														{
																															long
																																BgL_bufposz00_2739;
																															long
																																BgL_forwardz00_2738;
																															BgL_forwardz00_2738
																																=
																																BgL_arg1759z00_510;
																															BgL_bufposz00_2739
																																=
																																BgL_arg1760z00_511;
																															BgL_bufposz00_506
																																=
																																BgL_bufposz00_2739;
																															BgL_forwardz00_505
																																=
																																BgL_forwardz00_2738;
																															goto
																																BgL_zc3z04anonymousza31755ze3z87_507;
																														}
																													}
																												else
																													{	/* Cc/ld.scm 177 */
																														BgL_matchz00_760 =
																															BgL_lastzd2matchzd2_504;
																													}
																											}
																										else
																											{	/* Cc/ld.scm 177 */
																												int BgL_curz00_512;

																												{	/* Cc/ld.scm 177 */
																													int
																														BgL_res2446z00_1772;
																													BgL_res2446z00_1772 =
																														RGC_BUFFER_GET_CHAR
																														(BgL_iportz00_503,
																														BgL_forwardz00_505);
																													BgL_curz00_512 =
																														BgL_res2446z00_1772;
																												}
																												{	/* Cc/ld.scm 177 */

																													if (
																														((long)
																															(BgL_curz00_512)
																															== ((long) 116)))
																														{	/* Cc/ld.scm 177 */
																															BgL_iportz00_523 =
																																BgL_iportz00_503;
																															BgL_lastzd2matchzd2_524
																																=
																																BgL_lastzd2matchzd2_504;
																															BgL_forwardz00_525
																																=
																																(((long) 1) +
																																BgL_forwardz00_505);
																															BgL_bufposz00_526
																																=
																																BgL_bufposz00_506;
																														BgL_zc3z04anonymousza31776ze3z87_527:
																															if (
																																(BgL_forwardz00_525
																																	==
																																	BgL_bufposz00_526))
																																{	/* Cc/ld.scm 177 */
																																	if (rgc_fill_buffer(BgL_iportz00_523))
																																		{	/* Cc/ld.scm 177 */
																																			long
																																				BgL_arg1779z00_530;
																																			long
																																				BgL_arg1782z00_531;
																																			{	/* Cc/ld.scm 177 */
																																				long
																																					BgL_res2457z00_1795;
																																				BgL_res2457z00_1795
																																					=
																																					RGC_BUFFER_FORWARD
																																					(BgL_iportz00_523);
																																				BgL_arg1779z00_530
																																					=
																																					BgL_res2457z00_1795;
																																			}
																																			{	/* Cc/ld.scm 177 */
																																				long
																																					BgL_res2458z00_1797;
																																				BgL_res2458z00_1797
																																					=
																																					RGC_BUFFER_BUFPOS
																																					(BgL_iportz00_523);
																																				BgL_arg1782z00_531
																																					=
																																					BgL_res2458z00_1797;
																																			}
																																			{
																																				long
																																					BgL_bufposz00_2751;
																																				long
																																					BgL_forwardz00_2750;
																																				BgL_forwardz00_2750
																																					=
																																					BgL_arg1779z00_530;
																																				BgL_bufposz00_2751
																																					=
																																					BgL_arg1782z00_531;
																																				BgL_bufposz00_526
																																					=
																																					BgL_bufposz00_2751;
																																				BgL_forwardz00_525
																																					=
																																					BgL_forwardz00_2750;
																																				goto
																																					BgL_zc3z04anonymousza31776ze3z87_527;
																																			}
																																		}
																																	else
																																		{	/* Cc/ld.scm 177 */
																																			BgL_matchz00_760
																																				=
																																				BgL_lastzd2matchzd2_524;
																																		}
																																}
																															else
																																{	/* Cc/ld.scm 177 */
																																	int
																																		BgL_curz00_532;
																																	{	/* Cc/ld.scm 177 */
																																		int
																																			BgL_res2459z00_1800;
																																		BgL_res2459z00_1800
																																			=
																																			RGC_BUFFER_GET_CHAR
																																			(BgL_iportz00_523,
																																			BgL_forwardz00_525);
																																		BgL_curz00_532
																																			=
																																			BgL_res2459z00_1800;
																																	}
																																	{	/* Cc/ld.scm 177 */

																																		if (
																																			((long)
																																				(BgL_curz00_532)
																																				==
																																				((long)
																																					97)))
																																			{	/* Cc/ld.scm 177 */
																																				BgL_iportz00_543
																																					=
																																					BgL_iportz00_523;
																																				BgL_lastzd2matchzd2_544
																																					=
																																					BgL_lastzd2matchzd2_524;
																																				BgL_forwardz00_545
																																					=
																																					(((long) 1) + BgL_forwardz00_525);
																																				BgL_bufposz00_546
																																					=
																																					BgL_bufposz00_526;
																																			BgL_zc3z04anonymousza31797ze3z87_547:
																																				if (
																																					(BgL_forwardz00_545
																																						==
																																						BgL_bufposz00_546))
																																					{	/* Cc/ld.scm 177 */
																																						if (rgc_fill_buffer(BgL_iportz00_543))
																																							{	/* Cc/ld.scm 177 */
																																								long
																																									BgL_arg1801z00_550;
																																								long
																																									BgL_arg1808z00_551;
																																								{	/* Cc/ld.scm 177 */
																																									long
																																										BgL_res2470z00_1823;
																																									BgL_res2470z00_1823
																																										=
																																										RGC_BUFFER_FORWARD
																																										(BgL_iportz00_543);
																																									BgL_arg1801z00_550
																																										=
																																										BgL_res2470z00_1823;
																																								}
																																								{	/* Cc/ld.scm 177 */
																																									long
																																										BgL_res2471z00_1825;
																																									BgL_res2471z00_1825
																																										=
																																										RGC_BUFFER_BUFPOS
																																										(BgL_iportz00_543);
																																									BgL_arg1808z00_551
																																										=
																																										BgL_res2471z00_1825;
																																								}
																																								{
																																									long
																																										BgL_bufposz00_2763;
																																									long
																																										BgL_forwardz00_2762;
																																									BgL_forwardz00_2762
																																										=
																																										BgL_arg1801z00_550;
																																									BgL_bufposz00_2763
																																										=
																																										BgL_arg1808z00_551;
																																									BgL_bufposz00_546
																																										=
																																										BgL_bufposz00_2763;
																																									BgL_forwardz00_545
																																										=
																																										BgL_forwardz00_2762;
																																									goto
																																										BgL_zc3z04anonymousza31797ze3z87_547;
																																								}
																																							}
																																						else
																																							{	/* Cc/ld.scm 177 */
																																								BgL_matchz00_760
																																									=
																																									BgL_lastzd2matchzd2_544;
																																							}
																																					}
																																				else
																																					{	/* Cc/ld.scm 177 */
																																						int
																																							BgL_curz00_552;
																																						{	/* Cc/ld.scm 177 */
																																							int
																																								BgL_res2472z00_1828;
																																							BgL_res2472z00_1828
																																								=
																																								RGC_BUFFER_GET_CHAR
																																								(BgL_iportz00_543,
																																								BgL_forwardz00_545);
																																							BgL_curz00_552
																																								=
																																								BgL_res2472z00_1828;
																																						}
																																						{	/* Cc/ld.scm 177 */

																																							if (((long) (BgL_curz00_552) == ((long) 116)))
																																								{	/* Cc/ld.scm 177 */
																																									BgL_iportz00_563
																																										=
																																										BgL_iportz00_543;
																																									BgL_lastzd2matchzd2_564
																																										=
																																										BgL_lastzd2matchzd2_544;
																																									BgL_forwardz00_565
																																										=
																																										(
																																										((long) 1) + BgL_forwardz00_545);
																																									BgL_bufposz00_566
																																										=
																																										BgL_bufposz00_546;
																																								BgL_zc3z04anonymousza31827ze3z87_567:
																																									if ((BgL_forwardz00_565 == BgL_bufposz00_566))
																																										{	/* Cc/ld.scm 177 */
																																											if (rgc_fill_buffer(BgL_iportz00_563))
																																												{	/* Cc/ld.scm 177 */
																																													long
																																														BgL_arg1830z00_570;
																																													long
																																														BgL_arg1831z00_571;
																																													{	/* Cc/ld.scm 177 */
																																														long
																																															BgL_res2483z00_1851;
																																														BgL_res2483z00_1851
																																															=
																																															RGC_BUFFER_FORWARD
																																															(BgL_iportz00_563);
																																														BgL_arg1830z00_570
																																															=
																																															BgL_res2483z00_1851;
																																													}
																																													{	/* Cc/ld.scm 177 */
																																														long
																																															BgL_res2484z00_1853;
																																														BgL_res2484z00_1853
																																															=
																																															RGC_BUFFER_BUFPOS
																																															(BgL_iportz00_563);
																																														BgL_arg1831z00_571
																																															=
																																															BgL_res2484z00_1853;
																																													}
																																													{
																																														long
																																															BgL_bufposz00_2775;
																																														long
																																															BgL_forwardz00_2774;
																																														BgL_forwardz00_2774
																																															=
																																															BgL_arg1830z00_570;
																																														BgL_bufposz00_2775
																																															=
																																															BgL_arg1831z00_571;
																																														BgL_bufposz00_566
																																															=
																																															BgL_bufposz00_2775;
																																														BgL_forwardz00_565
																																															=
																																															BgL_forwardz00_2774;
																																														goto
																																															BgL_zc3z04anonymousza31827ze3z87_567;
																																													}
																																												}
																																											else
																																												{	/* Cc/ld.scm 177 */
																																													BgL_matchz00_760
																																														=
																																														BgL_lastzd2matchzd2_564;
																																												}
																																										}
																																									else
																																										{	/* Cc/ld.scm 177 */
																																											int
																																												BgL_curz00_572;
																																											{	/* Cc/ld.scm 177 */
																																												int
																																													BgL_res2485z00_1856;
																																												BgL_res2485z00_1856
																																													=
																																													RGC_BUFFER_GET_CHAR
																																													(BgL_iportz00_563,
																																													BgL_forwardz00_565);
																																												BgL_curz00_572
																																													=
																																													BgL_res2485z00_1856;
																																											}
																																											{	/* Cc/ld.scm 177 */

																																												if (((long) (BgL_curz00_572) == ((long) 105)))
																																													{	/* Cc/ld.scm 177 */
																																														BgL_iportz00_583
																																															=
																																															BgL_iportz00_563;
																																														BgL_lastzd2matchzd2_584
																																															=
																																															BgL_lastzd2matchzd2_564;
																																														BgL_forwardz00_585
																																															=
																																															(
																																															((long) 1) + BgL_forwardz00_565);
																																														BgL_bufposz00_586
																																															=
																																															BgL_bufposz00_566;
																																													BgL_zc3z04anonymousza31841ze3z87_587:
																																														if ((BgL_forwardz00_585 == BgL_bufposz00_586))
																																															{	/* Cc/ld.scm 177 */
																																																if (rgc_fill_buffer(BgL_iportz00_583))
																																																	{	/* Cc/ld.scm 177 */
																																																		long
																																																			BgL_arg1845z00_590;
																																																		long
																																																			BgL_arg1846z00_591;
																																																		{	/* Cc/ld.scm 177 */
																																																			long
																																																				BgL_res2496z00_1879;
																																																			BgL_res2496z00_1879
																																																				=
																																																				RGC_BUFFER_FORWARD
																																																				(BgL_iportz00_583);
																																																			BgL_arg1845z00_590
																																																				=
																																																				BgL_res2496z00_1879;
																																																		}
																																																		{	/* Cc/ld.scm 177 */
																																																			long
																																																				BgL_res2497z00_1881;
																																																			BgL_res2497z00_1881
																																																				=
																																																				RGC_BUFFER_BUFPOS
																																																				(BgL_iportz00_583);
																																																			BgL_arg1846z00_591
																																																				=
																																																				BgL_res2497z00_1881;
																																																		}
																																																		{
																																																			long
																																																				BgL_bufposz00_2787;
																																																			long
																																																				BgL_forwardz00_2786;
																																																			BgL_forwardz00_2786
																																																				=
																																																				BgL_arg1845z00_590;
																																																			BgL_bufposz00_2787
																																																				=
																																																				BgL_arg1846z00_591;
																																																			BgL_bufposz00_586
																																																				=
																																																				BgL_bufposz00_2787;
																																																			BgL_forwardz00_585
																																																				=
																																																				BgL_forwardz00_2786;
																																																			goto
																																																				BgL_zc3z04anonymousza31841ze3z87_587;
																																																		}
																																																	}
																																																else
																																																	{	/* Cc/ld.scm 177 */
																																																		BgL_matchz00_760
																																																			=
																																																			BgL_lastzd2matchzd2_584;
																																																	}
																																															}
																																														else
																																															{	/* Cc/ld.scm 177 */
																																																int
																																																	BgL_curz00_592;
																																																{	/* Cc/ld.scm 177 */
																																																	int
																																																		BgL_res2498z00_1884;
																																																	BgL_res2498z00_1884
																																																		=
																																																		RGC_BUFFER_GET_CHAR
																																																		(BgL_iportz00_583,
																																																		BgL_forwardz00_585);
																																																	BgL_curz00_592
																																																		=
																																																		BgL_res2498z00_1884;
																																																}
																																																{	/* Cc/ld.scm 177 */

																																																	if (((long) (BgL_curz00_592) == ((long) 99)))
																																																		{	/* Cc/ld.scm 177 */
																																																			BgL_iportz00_603
																																																				=
																																																				BgL_iportz00_583;
																																																			BgL_lastzd2matchzd2_604
																																																				=
																																																				BgL_lastzd2matchzd2_584;
																																																			BgL_forwardz00_605
																																																				=
																																																				(
																																																				((long) 1) + BgL_forwardz00_585);
																																																			BgL_bufposz00_606
																																																				=
																																																				BgL_bufposz00_586;
																																																		BgL_zc3z04anonymousza31856ze3z87_607:
																																																			{	/* Cc/ld.scm 177 */
																																																				long
																																																					BgL_newzd2matchzd2_608;
																																																				{	/* Cc/ld.scm 177 */
																																																					long
																																																						BgL_res2507z00_1903;
																																																					BgL_res2507z00_1903
																																																						=
																																																						RGC_STOP_MATCH
																																																						(BgL_iportz00_603,
																																																						BgL_forwardz00_605);
																																																					BgL_res2507z00_1903;
																																																				}
																																																				BgL_newzd2matchzd2_608
																																																					=
																																																					(
																																																					(long)
																																																					0);
																																																				if ((BgL_forwardz00_605 == BgL_bufposz00_606))
																																																					{	/* Cc/ld.scm 177 */
																																																						if (rgc_fill_buffer(BgL_iportz00_603))
																																																							{	/* Cc/ld.scm 177 */
																																																								long
																																																									BgL_arg1859z00_611;
																																																								long
																																																									BgL_arg1861z00_612;
																																																								{	/* Cc/ld.scm 177 */
																																																									long
																																																										BgL_res2510z00_1910;
																																																									BgL_res2510z00_1910
																																																										=
																																																										RGC_BUFFER_FORWARD
																																																										(BgL_iportz00_603);
																																																									BgL_arg1859z00_611
																																																										=
																																																										BgL_res2510z00_1910;
																																																								}
																																																								{	/* Cc/ld.scm 177 */
																																																									long
																																																										BgL_res2511z00_1912;
																																																									BgL_res2511z00_1912
																																																										=
																																																										RGC_BUFFER_BUFPOS
																																																										(BgL_iportz00_603);
																																																									BgL_arg1861z00_612
																																																										=
																																																										BgL_res2511z00_1912;
																																																								}
																																																								{
																																																									long
																																																										BgL_bufposz00_2800;
																																																									long
																																																										BgL_forwardz00_2799;
																																																									BgL_forwardz00_2799
																																																										=
																																																										BgL_arg1859z00_611;
																																																									BgL_bufposz00_2800
																																																										=
																																																										BgL_arg1861z00_612;
																																																									BgL_bufposz00_606
																																																										=
																																																										BgL_bufposz00_2800;
																																																									BgL_forwardz00_605
																																																										=
																																																										BgL_forwardz00_2799;
																																																									goto
																																																										BgL_zc3z04anonymousza31856ze3z87_607;
																																																								}
																																																							}
																																																						else
																																																							{	/* Cc/ld.scm 177 */
																																																								BgL_matchz00_760
																																																									=
																																																									BgL_newzd2matchzd2_608;
																																																							}
																																																					}
																																																				else
																																																					{	/* Cc/ld.scm 177 */
																																																						int
																																																							BgL_curz00_613;
																																																						{	/* Cc/ld.scm 177 */
																																																							int
																																																								BgL_res2512z00_1915;
																																																							BgL_res2512z00_1915
																																																								=
																																																								RGC_BUFFER_GET_CHAR
																																																								(BgL_iportz00_603,
																																																								BgL_forwardz00_605);
																																																							BgL_curz00_613
																																																								=
																																																								BgL_res2512z00_1915;
																																																						}
																																																						{	/* Cc/ld.scm 177 */

																																																							if (((long) (BgL_curz00_613) == ((long) 45)))
																																																								{	/* Cc/ld.scm 177 */
																																																									BgL_iportz00_483
																																																										=
																																																										BgL_iportz00_603;
																																																									BgL_lastzd2matchzd2_484
																																																										=
																																																										BgL_newzd2matchzd2_608;
																																																									BgL_forwardz00_485
																																																										=
																																																										(
																																																										((long) 1) + BgL_forwardz00_605);
																																																									BgL_bufposz00_486
																																																										=
																																																										BgL_bufposz00_606;
																																																								BgL_zc3z04anonymousza31732ze3z87_487:
																																																									if ((BgL_forwardz00_485 == BgL_bufposz00_486))
																																																										{	/* Cc/ld.scm 177 */
																																																											if (rgc_fill_buffer(BgL_iportz00_483))
																																																												{	/* Cc/ld.scm 177 */
																																																													long
																																																														BgL_arg1738z00_490;
																																																													long
																																																														BgL_arg1739z00_491;
																																																													{	/* Cc/ld.scm 177 */
																																																														long
																																																															BgL_res2431z00_1739;
																																																														BgL_res2431z00_1739
																																																															=
																																																															RGC_BUFFER_FORWARD
																																																															(BgL_iportz00_483);
																																																														BgL_arg1738z00_490
																																																															=
																																																															BgL_res2431z00_1739;
																																																													}
																																																													{	/* Cc/ld.scm 177 */
																																																														long
																																																															BgL_res2432z00_1741;
																																																														BgL_res2432z00_1741
																																																															=
																																																															RGC_BUFFER_BUFPOS
																																																															(BgL_iportz00_483);
																																																														BgL_arg1739z00_491
																																																															=
																																																															BgL_res2432z00_1741;
																																																													}
																																																													{
																																																														long
																																																															BgL_bufposz00_2812;
																																																														long
																																																															BgL_forwardz00_2811;
																																																														BgL_forwardz00_2811
																																																															=
																																																															BgL_arg1738z00_490;
																																																														BgL_bufposz00_2812
																																																															=
																																																															BgL_arg1739z00_491;
																																																														BgL_bufposz00_486
																																																															=
																																																															BgL_bufposz00_2812;
																																																														BgL_forwardz00_485
																																																															=
																																																															BgL_forwardz00_2811;
																																																														goto
																																																															BgL_zc3z04anonymousza31732ze3z87_487;
																																																													}
																																																												}
																																																											else
																																																												{	/* Cc/ld.scm 177 */
																																																													BgL_matchz00_760
																																																														=
																																																														BgL_lastzd2matchzd2_484;
																																																												}
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 177 */
																																																											int
																																																												BgL_curz00_492;
																																																											{	/* Cc/ld.scm 177 */
																																																												int
																																																													BgL_res2433z00_1744;
																																																												BgL_res2433z00_1744
																																																													=
																																																													RGC_BUFFER_GET_CHAR
																																																													(BgL_iportz00_483,
																																																													BgL_forwardz00_485);
																																																												BgL_curz00_492
																																																													=
																																																													BgL_res2433z00_1744;
																																																											}
																																																											{	/* Cc/ld.scm 177 */

																																																												if (((long) (BgL_curz00_492) == ((long) 115)))
																																																													{
																																																														long
																																																															BgL_bufposz00_2821;
																																																														long
																																																															BgL_forwardz00_2819;
																																																														long
																																																															BgL_lastzd2matchzd2_2818;
																																																														obj_t
																																																															BgL_iportz00_2817;
																																																														BgL_iportz00_2817
																																																															=
																																																															BgL_iportz00_483;
																																																														BgL_lastzd2matchzd2_2818
																																																															=
																																																															BgL_lastzd2matchzd2_484;
																																																														BgL_forwardz00_2819
																																																															=
																																																															(
																																																															((long) 1) + BgL_forwardz00_485);
																																																														BgL_bufposz00_2821
																																																															=
																																																															BgL_bufposz00_486;
																																																														BgL_bufposz00_506
																																																															=
																																																															BgL_bufposz00_2821;
																																																														BgL_forwardz00_505
																																																															=
																																																															BgL_forwardz00_2819;
																																																														BgL_lastzd2matchzd2_504
																																																															=
																																																															BgL_lastzd2matchzd2_2818;
																																																														BgL_iportz00_503
																																																															=
																																																															BgL_iportz00_2817;
																																																														goto
																																																															BgL_zc3z04anonymousza31755ze3z87_507;
																																																													}
																																																												else
																																																													{	/* Cc/ld.scm 177 */
																																																														if (((long) (BgL_curz00_492) == ((long) 45)))
																																																															{
																																																																long
																																																																	BgL_forwardz00_2825;
																																																																BgL_forwardz00_2825
																																																																	=
																																																																	(
																																																																	((long) 1) + BgL_forwardz00_485);
																																																																BgL_forwardz00_485
																																																																	=
																																																																	BgL_forwardz00_2825;
																																																																goto
																																																																	BgL_zc3z04anonymousza31732ze3z87_487;
																																																															}
																																																														else
																																																															{	/* Cc/ld.scm 177 */
																																																																bool_t
																																																																	BgL_test2858z00_2827;
																																																																if (((long) (BgL_curz00_492) == ((long) 10)))
																																																																	{	/* Cc/ld.scm 177 */
																																																																		BgL_test2858z00_2827
																																																																			=
																																																																			(
																																																																			(bool_t)
																																																																			1);
																																																																	}
																																																																else
																																																																	{	/* Cc/ld.scm 177 */
																																																																		if (((long) (BgL_curz00_492) == ((long) 45)))
																																																																			{	/* Cc/ld.scm 177 */
																																																																				BgL_test2858z00_2827
																																																																					=
																																																																					(
																																																																					(bool_t)
																																																																					1);
																																																																			}
																																																																		else
																																																																			{	/* Cc/ld.scm 177 */
																																																																				BgL_test2858z00_2827
																																																																					=
																																																																					(
																																																																					(long)
																																																																					(BgL_curz00_492)
																																																																					==
																																																																					((long) 115));
																																																																	}}
																																																																if (BgL_test2858z00_2827)
																																																																	{	/* Cc/ld.scm 177 */
																																																																		BgL_matchz00_760
																																																																			=
																																																																			BgL_lastzd2matchzd2_484;
																																																																	}
																																																																else
																																																																	{	/* Cc/ld.scm 177 */
																																																																		BgL_iportz00_467
																																																																			=
																																																																			BgL_iportz00_483;
																																																																		BgL_lastzd2matchzd2_468
																																																																			=
																																																																			BgL_lastzd2matchzd2_484;
																																																																		BgL_forwardz00_469
																																																																			=
																																																																			(
																																																																			((long) 1) + BgL_forwardz00_485);
																																																																		BgL_bufposz00_470
																																																																			=
																																																																			BgL_bufposz00_486;
																																																																	BgL_zc3z04anonymousza31713ze3z87_471:
																																																																		if ((BgL_forwardz00_469 == BgL_bufposz00_470))
																																																																			{	/* Cc/ld.scm 177 */
																																																																				if (rgc_fill_buffer(BgL_iportz00_467))
																																																																					{	/* Cc/ld.scm 177 */
																																																																						long
																																																																							BgL_arg1719z00_474;
																																																																						long
																																																																							BgL_arg1725z00_475;
																																																																						{	/* Cc/ld.scm 177 */
																																																																							long
																																																																								BgL_res2421z00_1717;
																																																																							BgL_res2421z00_1717
																																																																								=
																																																																								RGC_BUFFER_FORWARD
																																																																								(BgL_iportz00_467);
																																																																							BgL_arg1719z00_474
																																																																								=
																																																																								BgL_res2421z00_1717;
																																																																						}
																																																																						{	/* Cc/ld.scm 177 */
																																																																							long
																																																																								BgL_res2422z00_1719;
																																																																							BgL_res2422z00_1719
																																																																								=
																																																																								RGC_BUFFER_BUFPOS
																																																																								(BgL_iportz00_467);
																																																																							BgL_arg1725z00_475
																																																																								=
																																																																								BgL_res2422z00_1719;
																																																																						}
																																																																						{
																																																																							long
																																																																								BgL_bufposz00_2843;
																																																																							long
																																																																								BgL_forwardz00_2842;
																																																																							BgL_forwardz00_2842
																																																																								=
																																																																								BgL_arg1719z00_474;
																																																																							BgL_bufposz00_2843
																																																																								=
																																																																								BgL_arg1725z00_475;
																																																																							BgL_bufposz00_470
																																																																								=
																																																																								BgL_bufposz00_2843;
																																																																							BgL_forwardz00_469
																																																																								=
																																																																								BgL_forwardz00_2842;
																																																																							goto
																																																																								BgL_zc3z04anonymousza31713ze3z87_471;
																																																																						}
																																																																					}
																																																																				else
																																																																					{	/* Cc/ld.scm 177 */
																																																																						BgL_matchz00_760
																																																																							=
																																																																							BgL_lastzd2matchzd2_468;
																																																																					}
																																																																			}
																																																																		else
																																																																			{	/* Cc/ld.scm 177 */
																																																																				int
																																																																					BgL_curz00_476;
																																																																				{	/* Cc/ld.scm 177 */
																																																																					int
																																																																						BgL_res2423z00_1722;
																																																																					BgL_res2423z00_1722
																																																																						=
																																																																						RGC_BUFFER_GET_CHAR
																																																																						(BgL_iportz00_467,
																																																																						BgL_forwardz00_469);
																																																																					BgL_curz00_476
																																																																						=
																																																																						BgL_res2423z00_1722;
																																																																				}
																																																																				{	/* Cc/ld.scm 177 */

																																																																					if (((long) (BgL_curz00_476) == ((long) 45)))
																																																																						{
																																																																							long
																																																																								BgL_bufposz00_2852;
																																																																							long
																																																																								BgL_forwardz00_2850;
																																																																							long
																																																																								BgL_lastzd2matchzd2_2849;
																																																																							obj_t
																																																																								BgL_iportz00_2848;
																																																																							BgL_iportz00_2848
																																																																								=
																																																																								BgL_iportz00_467;
																																																																							BgL_lastzd2matchzd2_2849
																																																																								=
																																																																								BgL_lastzd2matchzd2_468;
																																																																							BgL_forwardz00_2850
																																																																								=
																																																																								(
																																																																								((long) 1) + BgL_forwardz00_469);
																																																																							BgL_bufposz00_2852
																																																																								=
																																																																								BgL_bufposz00_470;
																																																																							BgL_bufposz00_486
																																																																								=
																																																																								BgL_bufposz00_2852;
																																																																							BgL_forwardz00_485
																																																																								=
																																																																								BgL_forwardz00_2850;
																																																																							BgL_lastzd2matchzd2_484
																																																																								=
																																																																								BgL_lastzd2matchzd2_2849;
																																																																							BgL_iportz00_483
																																																																								=
																																																																								BgL_iportz00_2848;
																																																																							goto
																																																																								BgL_zc3z04anonymousza31732ze3z87_487;
																																																																						}
																																																																					else
																																																																						{	/* Cc/ld.scm 177 */
																																																																							bool_t
																																																																								BgL_test2864z00_2853;
																																																																							if (((long) (BgL_curz00_476) == ((long) 10)))
																																																																								{	/* Cc/ld.scm 177 */
																																																																									BgL_test2864z00_2853
																																																																										=
																																																																										(
																																																																										(bool_t)
																																																																										1);
																																																																								}
																																																																							else
																																																																								{	/* Cc/ld.scm 177 */
																																																																									BgL_test2864z00_2853
																																																																										=
																																																																										(
																																																																										(long)
																																																																										(BgL_curz00_476)
																																																																										==
																																																																										((long) 45));
																																																																								}
																																																																							if (BgL_test2864z00_2853)
																																																																								{	/* Cc/ld.scm 177 */
																																																																									BgL_matchz00_760
																																																																										=
																																																																										BgL_lastzd2matchzd2_468;
																																																																								}
																																																																							else
																																																																								{
																																																																									long
																																																																										BgL_forwardz00_2859;
																																																																									BgL_forwardz00_2859
																																																																										=
																																																																										(
																																																																										((long) 1) + BgL_forwardz00_469);
																																																																									BgL_forwardz00_469
																																																																										=
																																																																										BgL_forwardz00_2859;
																																																																									goto
																																																																										BgL_zc3z04anonymousza31713ze3z87_471;
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
																																																								{	/* Cc/ld.scm 177 */
																																																									bool_t
																																																										BgL_test2866z00_2863;
																																																									if (((long) (BgL_curz00_613) == ((long) 10)))
																																																										{	/* Cc/ld.scm 177 */
																																																											BgL_test2866z00_2863
																																																												=
																																																												(
																																																												(bool_t)
																																																												1);
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 177 */
																																																											BgL_test2866z00_2863
																																																												=
																																																												(
																																																												(long)
																																																												(BgL_curz00_613)
																																																												==
																																																												((long) 45));
																																																										}
																																																									if (BgL_test2866z00_2863)
																																																										{	/* Cc/ld.scm 177 */
																																																											BgL_matchz00_760
																																																												=
																																																												BgL_newzd2matchzd2_608;
																																																										}
																																																									else
																																																										{
																																																											long
																																																												BgL_bufposz00_2873;
																																																											long
																																																												BgL_forwardz00_2871;
																																																											long
																																																												BgL_lastzd2matchzd2_2870;
																																																											obj_t
																																																												BgL_iportz00_2869;
																																																											BgL_iportz00_2869
																																																												=
																																																												BgL_iportz00_603;
																																																											BgL_lastzd2matchzd2_2870
																																																												=
																																																												BgL_newzd2matchzd2_608;
																																																											BgL_forwardz00_2871
																																																												=
																																																												(
																																																												((long) 1) + BgL_forwardz00_605);
																																																											BgL_bufposz00_2873
																																																												=
																																																												BgL_bufposz00_606;
																																																											BgL_bufposz00_470
																																																												=
																																																												BgL_bufposz00_2873;
																																																											BgL_forwardz00_469
																																																												=
																																																												BgL_forwardz00_2871;
																																																											BgL_lastzd2matchzd2_468
																																																												=
																																																												BgL_lastzd2matchzd2_2870;
																																																											BgL_iportz00_467
																																																												=
																																																												BgL_iportz00_2869;
																																																											goto
																																																												BgL_zc3z04anonymousza31713ze3z87_471;
																																																										}
																																																								}
																																																						}
																																																					}
																																																			}
																																																		}
																																																	else
																																																		{	/* Cc/ld.scm 177 */
																																																			if (((long) (BgL_curz00_592) == ((long) 45)))
																																																				{
																																																					long
																																																						BgL_bufposz00_2882;
																																																					long
																																																						BgL_forwardz00_2880;
																																																					long
																																																						BgL_lastzd2matchzd2_2879;
																																																					obj_t
																																																						BgL_iportz00_2878;
																																																					BgL_iportz00_2878
																																																						=
																																																						BgL_iportz00_583;
																																																					BgL_lastzd2matchzd2_2879
																																																						=
																																																						BgL_lastzd2matchzd2_584;
																																																					BgL_forwardz00_2880
																																																						=
																																																						(
																																																						((long) 1) + BgL_forwardz00_585);
																																																					BgL_bufposz00_2882
																																																						=
																																																						BgL_bufposz00_586;
																																																					BgL_bufposz00_486
																																																						=
																																																						BgL_bufposz00_2882;
																																																					BgL_forwardz00_485
																																																						=
																																																						BgL_forwardz00_2880;
																																																					BgL_lastzd2matchzd2_484
																																																						=
																																																						BgL_lastzd2matchzd2_2879;
																																																					BgL_iportz00_483
																																																						=
																																																						BgL_iportz00_2878;
																																																					goto
																																																						BgL_zc3z04anonymousza31732ze3z87_487;
																																																				}
																																																			else
																																																				{	/* Cc/ld.scm 177 */
																																																					bool_t
																																																						BgL_test2869z00_2883;
																																																					if (((long) (BgL_curz00_592) == ((long) 10)))
																																																						{	/* Cc/ld.scm 177 */
																																																							BgL_test2869z00_2883
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Cc/ld.scm 177 */
																																																							if (((long) (BgL_curz00_592) == ((long) 45)))
																																																								{	/* Cc/ld.scm 177 */
																																																									BgL_test2869z00_2883
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 177 */
																																																									BgL_test2869z00_2883
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_curz00_592)
																																																										==
																																																										((long) 99));
																																																						}}
																																																					if (BgL_test2869z00_2883)
																																																						{	/* Cc/ld.scm 177 */
																																																							BgL_matchz00_760
																																																								=
																																																								BgL_lastzd2matchzd2_584;
																																																						}
																																																					else
																																																						{
																																																							long
																																																								BgL_bufposz00_2896;
																																																							long
																																																								BgL_forwardz00_2894;
																																																							long
																																																								BgL_lastzd2matchzd2_2893;
																																																							obj_t
																																																								BgL_iportz00_2892;
																																																							BgL_iportz00_2892
																																																								=
																																																								BgL_iportz00_583;
																																																							BgL_lastzd2matchzd2_2893
																																																								=
																																																								BgL_lastzd2matchzd2_584;
																																																							BgL_forwardz00_2894
																																																								=
																																																								(
																																																								((long) 1) + BgL_forwardz00_585);
																																																							BgL_bufposz00_2896
																																																								=
																																																								BgL_bufposz00_586;
																																																							BgL_bufposz00_470
																																																								=
																																																								BgL_bufposz00_2896;
																																																							BgL_forwardz00_469
																																																								=
																																																								BgL_forwardz00_2894;
																																																							BgL_lastzd2matchzd2_468
																																																								=
																																																								BgL_lastzd2matchzd2_2893;
																																																							BgL_iportz00_467
																																																								=
																																																								BgL_iportz00_2892;
																																																							goto
																																																								BgL_zc3z04anonymousza31713ze3z87_471;
																																																						}
																																																				}
																																																		}
																																																}
																																															}
																																													}
																																												else
																																													{	/* Cc/ld.scm 177 */
																																														if (((long) (BgL_curz00_572) == ((long) 45)))
																																															{
																																																long
																																																	BgL_bufposz00_2905;
																																																long
																																																	BgL_forwardz00_2903;
																																																long
																																																	BgL_lastzd2matchzd2_2902;
																																																obj_t
																																																	BgL_iportz00_2901;
																																																BgL_iportz00_2901
																																																	=
																																																	BgL_iportz00_563;
																																																BgL_lastzd2matchzd2_2902
																																																	=
																																																	BgL_lastzd2matchzd2_564;
																																																BgL_forwardz00_2903
																																																	=
																																																	(
																																																	((long) 1) + BgL_forwardz00_565);
																																																BgL_bufposz00_2905
																																																	=
																																																	BgL_bufposz00_566;
																																																BgL_bufposz00_486
																																																	=
																																																	BgL_bufposz00_2905;
																																																BgL_forwardz00_485
																																																	=
																																																	BgL_forwardz00_2903;
																																																BgL_lastzd2matchzd2_484
																																																	=
																																																	BgL_lastzd2matchzd2_2902;
																																																BgL_iportz00_483
																																																	=
																																																	BgL_iportz00_2901;
																																																goto
																																																	BgL_zc3z04anonymousza31732ze3z87_487;
																																															}
																																														else
																																															{	/* Cc/ld.scm 177 */
																																																bool_t
																																																	BgL_test2873z00_2906;
																																																if (((long) (BgL_curz00_572) == ((long) 10)))
																																																	{	/* Cc/ld.scm 177 */
																																																		BgL_test2873z00_2906
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Cc/ld.scm 177 */
																																																		if (((long) (BgL_curz00_572) == ((long) 45)))
																																																			{	/* Cc/ld.scm 177 */
																																																				BgL_test2873z00_2906
																																																					=
																																																					(
																																																					(bool_t)
																																																					1);
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 177 */
																																																				BgL_test2873z00_2906
																																																					=
																																																					(
																																																					(long)
																																																					(BgL_curz00_572)
																																																					==
																																																					((long) 105));
																																																	}}
																																																if (BgL_test2873z00_2906)
																																																	{	/* Cc/ld.scm 177 */
																																																		BgL_matchz00_760
																																																			=
																																																			BgL_lastzd2matchzd2_564;
																																																	}
																																																else
																																																	{
																																																		long
																																																			BgL_bufposz00_2919;
																																																		long
																																																			BgL_forwardz00_2917;
																																																		long
																																																			BgL_lastzd2matchzd2_2916;
																																																		obj_t
																																																			BgL_iportz00_2915;
																																																		BgL_iportz00_2915
																																																			=
																																																			BgL_iportz00_563;
																																																		BgL_lastzd2matchzd2_2916
																																																			=
																																																			BgL_lastzd2matchzd2_564;
																																																		BgL_forwardz00_2917
																																																			=
																																																			(
																																																			((long) 1) + BgL_forwardz00_565);
																																																		BgL_bufposz00_2919
																																																			=
																																																			BgL_bufposz00_566;
																																																		BgL_bufposz00_470
																																																			=
																																																			BgL_bufposz00_2919;
																																																		BgL_forwardz00_469
																																																			=
																																																			BgL_forwardz00_2917;
																																																		BgL_lastzd2matchzd2_468
																																																			=
																																																			BgL_lastzd2matchzd2_2916;
																																																		BgL_iportz00_467
																																																			=
																																																			BgL_iportz00_2915;
																																																		goto
																																																			BgL_zc3z04anonymousza31713ze3z87_471;
																																																	}
																																															}
																																													}
																																											}
																																										}
																																								}
																																							else
																																								{	/* Cc/ld.scm 177 */
																																									if (((long) (BgL_curz00_552) == ((long) 45)))
																																										{
																																											long
																																												BgL_bufposz00_2928;
																																											long
																																												BgL_forwardz00_2926;
																																											long
																																												BgL_lastzd2matchzd2_2925;
																																											obj_t
																																												BgL_iportz00_2924;
																																											BgL_iportz00_2924
																																												=
																																												BgL_iportz00_543;
																																											BgL_lastzd2matchzd2_2925
																																												=
																																												BgL_lastzd2matchzd2_544;
																																											BgL_forwardz00_2926
																																												=
																																												(
																																												((long) 1) + BgL_forwardz00_545);
																																											BgL_bufposz00_2928
																																												=
																																												BgL_bufposz00_546;
																																											BgL_bufposz00_486
																																												=
																																												BgL_bufposz00_2928;
																																											BgL_forwardz00_485
																																												=
																																												BgL_forwardz00_2926;
																																											BgL_lastzd2matchzd2_484
																																												=
																																												BgL_lastzd2matchzd2_2925;
																																											BgL_iportz00_483
																																												=
																																												BgL_iportz00_2924;
																																											goto
																																												BgL_zc3z04anonymousza31732ze3z87_487;
																																										}
																																									else
																																										{	/* Cc/ld.scm 177 */
																																											bool_t
																																												BgL_test2877z00_2929;
																																											if (((long) (BgL_curz00_552) == ((long) 10)))
																																												{	/* Cc/ld.scm 177 */
																																													BgL_test2877z00_2929
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Cc/ld.scm 177 */
																																													if (((long) (BgL_curz00_552) == ((long) 45)))
																																														{	/* Cc/ld.scm 177 */
																																															BgL_test2877z00_2929
																																																=
																																																(
																																																(bool_t)
																																																1);
																																														}
																																													else
																																														{	/* Cc/ld.scm 177 */
																																															BgL_test2877z00_2929
																																																=
																																																(
																																																(long)
																																																(BgL_curz00_552)
																																																==
																																																((long) 116));
																																												}}
																																											if (BgL_test2877z00_2929)
																																												{	/* Cc/ld.scm 177 */
																																													BgL_matchz00_760
																																														=
																																														BgL_lastzd2matchzd2_544;
																																												}
																																											else
																																												{
																																													long
																																														BgL_bufposz00_2942;
																																													long
																																														BgL_forwardz00_2940;
																																													long
																																														BgL_lastzd2matchzd2_2939;
																																													obj_t
																																														BgL_iportz00_2938;
																																													BgL_iportz00_2938
																																														=
																																														BgL_iportz00_543;
																																													BgL_lastzd2matchzd2_2939
																																														=
																																														BgL_lastzd2matchzd2_544;
																																													BgL_forwardz00_2940
																																														=
																																														(
																																														((long) 1) + BgL_forwardz00_545);
																																													BgL_bufposz00_2942
																																														=
																																														BgL_bufposz00_546;
																																													BgL_bufposz00_470
																																														=
																																														BgL_bufposz00_2942;
																																													BgL_forwardz00_469
																																														=
																																														BgL_forwardz00_2940;
																																													BgL_lastzd2matchzd2_468
																																														=
																																														BgL_lastzd2matchzd2_2939;
																																													BgL_iportz00_467
																																														=
																																														BgL_iportz00_2938;
																																													goto
																																														BgL_zc3z04anonymousza31713ze3z87_471;
																																												}
																																										}
																																								}
																																						}
																																					}
																																			}
																																		else
																																			{	/* Cc/ld.scm 177 */
																																				if (
																																					((long) (BgL_curz00_532) == ((long) 45)))
																																					{
																																						long
																																							BgL_bufposz00_2951;
																																						long
																																							BgL_forwardz00_2949;
																																						long
																																							BgL_lastzd2matchzd2_2948;
																																						obj_t
																																							BgL_iportz00_2947;
																																						BgL_iportz00_2947
																																							=
																																							BgL_iportz00_523;
																																						BgL_lastzd2matchzd2_2948
																																							=
																																							BgL_lastzd2matchzd2_524;
																																						BgL_forwardz00_2949
																																							=
																																							(((long) 1) + BgL_forwardz00_525);
																																						BgL_bufposz00_2951
																																							=
																																							BgL_bufposz00_526;
																																						BgL_bufposz00_486
																																							=
																																							BgL_bufposz00_2951;
																																						BgL_forwardz00_485
																																							=
																																							BgL_forwardz00_2949;
																																						BgL_lastzd2matchzd2_484
																																							=
																																							BgL_lastzd2matchzd2_2948;
																																						BgL_iportz00_483
																																							=
																																							BgL_iportz00_2947;
																																						goto
																																							BgL_zc3z04anonymousza31732ze3z87_487;
																																					}
																																				else
																																					{	/* Cc/ld.scm 177 */
																																						bool_t
																																							BgL_test2881z00_2952;
																																						if (
																																							((long) (BgL_curz00_532) == ((long) 10)))
																																							{	/* Cc/ld.scm 177 */
																																								BgL_test2881z00_2952
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Cc/ld.scm 177 */
																																								if (((long) (BgL_curz00_532) == ((long) 45)))
																																									{	/* Cc/ld.scm 177 */
																																										BgL_test2881z00_2952
																																											=
																																											(
																																											(bool_t)
																																											1);
																																									}
																																								else
																																									{	/* Cc/ld.scm 177 */
																																										BgL_test2881z00_2952
																																											=
																																											(
																																											(long)
																																											(BgL_curz00_532)
																																											==
																																											((long) 97));
																																							}}
																																						if (BgL_test2881z00_2952)
																																							{	/* Cc/ld.scm 177 */
																																								BgL_matchz00_760
																																									=
																																									BgL_lastzd2matchzd2_524;
																																							}
																																						else
																																							{
																																								long
																																									BgL_bufposz00_2965;
																																								long
																																									BgL_forwardz00_2963;
																																								long
																																									BgL_lastzd2matchzd2_2962;
																																								obj_t
																																									BgL_iportz00_2961;
																																								BgL_iportz00_2961
																																									=
																																									BgL_iportz00_523;
																																								BgL_lastzd2matchzd2_2962
																																									=
																																									BgL_lastzd2matchzd2_524;
																																								BgL_forwardz00_2963
																																									=
																																									(
																																									((long) 1) + BgL_forwardz00_525);
																																								BgL_bufposz00_2965
																																									=
																																									BgL_bufposz00_526;
																																								BgL_bufposz00_470
																																									=
																																									BgL_bufposz00_2965;
																																								BgL_forwardz00_469
																																									=
																																									BgL_forwardz00_2963;
																																								BgL_lastzd2matchzd2_468
																																									=
																																									BgL_lastzd2matchzd2_2962;
																																								BgL_iportz00_467
																																									=
																																									BgL_iportz00_2961;
																																								goto
																																									BgL_zc3z04anonymousza31713ze3z87_471;
																																							}
																																					}
																																			}
																																	}
																																}
																														}
																													else
																														{	/* Cc/ld.scm 177 */
																															if (
																																((long)
																																	(BgL_curz00_512)
																																	==
																																	((long) 45)))
																																{
																																	long
																																		BgL_bufposz00_2974;
																																	long
																																		BgL_forwardz00_2972;
																																	long
																																		BgL_lastzd2matchzd2_2971;
																																	obj_t
																																		BgL_iportz00_2970;
																																	BgL_iportz00_2970
																																		=
																																		BgL_iportz00_503;
																																	BgL_lastzd2matchzd2_2971
																																		=
																																		BgL_lastzd2matchzd2_504;
																																	BgL_forwardz00_2972
																																		=
																																		(((long) 1)
																																		+
																																		BgL_forwardz00_505);
																																	BgL_bufposz00_2974
																																		=
																																		BgL_bufposz00_506;
																																	BgL_bufposz00_486
																																		=
																																		BgL_bufposz00_2974;
																																	BgL_forwardz00_485
																																		=
																																		BgL_forwardz00_2972;
																																	BgL_lastzd2matchzd2_484
																																		=
																																		BgL_lastzd2matchzd2_2971;
																																	BgL_iportz00_483
																																		=
																																		BgL_iportz00_2970;
																																	goto
																																		BgL_zc3z04anonymousza31732ze3z87_487;
																																}
																															else
																																{	/* Cc/ld.scm 177 */
																																	bool_t
																																		BgL_test2885z00_2975;
																																	if (((long)
																																			(BgL_curz00_512)
																																			==
																																			((long)
																																				10)))
																																		{	/* Cc/ld.scm 177 */
																																			BgL_test2885z00_2975
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Cc/ld.scm 177 */
																																			if (
																																				((long)
																																					(BgL_curz00_512)
																																					==
																																					((long) 45)))
																																				{	/* Cc/ld.scm 177 */
																																					BgL_test2885z00_2975
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																			else
																																				{	/* Cc/ld.scm 177 */
																																					BgL_test2885z00_2975
																																						=
																																						(
																																						(long)
																																						(BgL_curz00_512)
																																						==
																																						((long) 116));
																																		}}
																																	if (BgL_test2885z00_2975)
																																		{	/* Cc/ld.scm 177 */
																																			BgL_matchz00_760
																																				=
																																				BgL_lastzd2matchzd2_504;
																																		}
																																	else
																																		{
																																			long
																																				BgL_bufposz00_2988;
																																			long
																																				BgL_forwardz00_2986;
																																			long
																																				BgL_lastzd2matchzd2_2985;
																																			obj_t
																																				BgL_iportz00_2984;
																																			BgL_iportz00_2984
																																				=
																																				BgL_iportz00_503;
																																			BgL_lastzd2matchzd2_2985
																																				=
																																				BgL_lastzd2matchzd2_504;
																																			BgL_forwardz00_2986
																																				=
																																				(((long)
																																					1) +
																																				BgL_forwardz00_505);
																																			BgL_bufposz00_2988
																																				=
																																				BgL_bufposz00_506;
																																			BgL_bufposz00_470
																																				=
																																				BgL_bufposz00_2988;
																																			BgL_forwardz00_469
																																				=
																																				BgL_forwardz00_2986;
																																			BgL_lastzd2matchzd2_468
																																				=
																																				BgL_lastzd2matchzd2_2985;
																																			BgL_iportz00_467
																																				=
																																				BgL_iportz00_2984;
																																			goto
																																				BgL_zc3z04anonymousza31713ze3z87_471;
																																		}
																																}
																														}
																												}
																											}
																									}
																								else
																									{	/* Cc/ld.scm 177 */
																										if (
																											((long) (BgL_curz00_456)
																												== ((long) 45)))
																											{
																												long BgL_bufposz00_2997;
																												long
																													BgL_forwardz00_2995;
																												long
																													BgL_lastzd2matchzd2_2994;
																												obj_t BgL_iportz00_2993;

																												BgL_iportz00_2993 =
																													BgL_iportz00_446;
																												BgL_lastzd2matchzd2_2994
																													=
																													BgL_newzd2matchzd2_451;
																												BgL_forwardz00_2995 =
																													(((long) 1) +
																													BgL_forwardz00_448);
																												BgL_bufposz00_2997 =
																													BgL_bufposz00_449;
																												BgL_bufposz00_486 =
																													BgL_bufposz00_2997;
																												BgL_forwardz00_485 =
																													BgL_forwardz00_2995;
																												BgL_lastzd2matchzd2_484
																													=
																													BgL_lastzd2matchzd2_2994;
																												BgL_iportz00_483 =
																													BgL_iportz00_2993;
																												goto
																													BgL_zc3z04anonymousza31732ze3z87_487;
																											}
																										else
																											{	/* Cc/ld.scm 177 */
																												bool_t
																													BgL_test2889z00_2998;
																												if (((long)
																														(BgL_curz00_456) ==
																														((long) 10)))
																													{	/* Cc/ld.scm 177 */
																														BgL_test2889z00_2998
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Cc/ld.scm 177 */
																														if (
																															((long)
																																(BgL_curz00_456)
																																== ((long) 45)))
																															{	/* Cc/ld.scm 177 */
																																BgL_test2889z00_2998
																																	=
																																	((bool_t) 1);
																															}
																														else
																															{	/* Cc/ld.scm 177 */
																																BgL_test2889z00_2998
																																	=
																																	((long)
																																	(BgL_curz00_456)
																																	==
																																	((long) 115));
																													}}
																												if (BgL_test2889z00_2998)
																													{	/* Cc/ld.scm 177 */
																														BgL_matchz00_760 =
																															BgL_newzd2matchzd2_451;
																													}
																												else
																													{
																														long
																															BgL_bufposz00_3011;
																														long
																															BgL_forwardz00_3009;
																														long
																															BgL_lastzd2matchzd2_3008;
																														obj_t
																															BgL_iportz00_3007;
																														BgL_iportz00_3007 =
																															BgL_iportz00_446;
																														BgL_lastzd2matchzd2_3008
																															=
																															BgL_newzd2matchzd2_451;
																														BgL_forwardz00_3009
																															=
																															(((long) 1) +
																															BgL_forwardz00_448);
																														BgL_bufposz00_3011 =
																															BgL_bufposz00_449;
																														BgL_bufposz00_470 =
																															BgL_bufposz00_3011;
																														BgL_forwardz00_469 =
																															BgL_forwardz00_3009;
																														BgL_lastzd2matchzd2_468
																															=
																															BgL_lastzd2matchzd2_3008;
																														BgL_iportz00_467 =
																															BgL_iportz00_3007;
																														goto
																															BgL_zc3z04anonymousza31713ze3z87_471;
																													}
																											}
																									}
																							}
																						}
																				}
																			}
																		else
																			{	/* Cc/ld.scm 177 */
																				if (
																					((long) (BgL_curz00_635) ==
																						((long) 10)))
																					{	/* Cc/ld.scm 177 */
																						long BgL_arg1876z00_639;

																						BgL_arg1876z00_639 =
																							(((long) 1) + BgL_forwardz00_628);
																						{	/* Cc/ld.scm 177 */
																							long BgL_newzd2matchzd2_1950;

																							{	/* Cc/ld.scm 177 */
																								long BgL_res2528z00_1953;

																								BgL_res2528z00_1953 =
																									RGC_STOP_MATCH
																									(BgL_iportz00_626,
																									BgL_arg1876z00_639);
																								BgL_res2528z00_1953;
																							}
																							BgL_newzd2matchzd2_1950 =
																								((long) 1);
																							BgL_matchz00_760 =
																								BgL_newzd2matchzd2_1950;
																					}}
																				else
																					{	/* Cc/ld.scm 177 */
																						BgL_iportz00_429 = BgL_iportz00_626;
																						BgL_lastzd2matchzd2_430 =
																							BgL_lastzd2matchzd2_627;
																						BgL_forwardz00_431 =
																							(((long) 1) + BgL_forwardz00_628);
																						BgL_bufposz00_432 =
																							BgL_bufposz00_629;
																					BgL_zc3z04anonymousza31667ze3z87_433:
																						{	/* Cc/ld.scm 177 */
																							long BgL_newzd2matchzd2_434;

																							{	/* Cc/ld.scm 177 */
																								long BgL_res2394z00_1657;

																								BgL_res2394z00_1657 =
																									RGC_STOP_MATCH
																									(BgL_iportz00_429,
																									BgL_forwardz00_431);
																								BgL_res2394z00_1657;
																							}
																							BgL_newzd2matchzd2_434 =
																								((long) 1);
																							if ((BgL_forwardz00_431 ==
																									BgL_bufposz00_432))
																								{	/* Cc/ld.scm 177 */
																									if (rgc_fill_buffer
																										(BgL_iportz00_429))
																										{	/* Cc/ld.scm 177 */
																											long BgL_arg1672z00_437;
																											long BgL_arg1684z00_438;

																											{	/* Cc/ld.scm 177 */
																												long
																													BgL_res2397z00_1664;
																												BgL_res2397z00_1664 =
																													RGC_BUFFER_FORWARD
																													(BgL_iportz00_429);
																												BgL_arg1672z00_437 =
																													BgL_res2397z00_1664;
																											}
																											{	/* Cc/ld.scm 177 */
																												long
																													BgL_res2398z00_1666;
																												BgL_res2398z00_1666 =
																													RGC_BUFFER_BUFPOS
																													(BgL_iportz00_429);
																												BgL_arg1684z00_438 =
																													BgL_res2398z00_1666;
																											}
																											{
																												long BgL_bufposz00_3026;
																												long
																													BgL_forwardz00_3025;
																												BgL_forwardz00_3025 =
																													BgL_arg1672z00_437;
																												BgL_bufposz00_3026 =
																													BgL_arg1684z00_438;
																												BgL_bufposz00_432 =
																													BgL_bufposz00_3026;
																												BgL_forwardz00_431 =
																													BgL_forwardz00_3025;
																												goto
																													BgL_zc3z04anonymousza31667ze3z87_433;
																											}
																										}
																									else
																										{	/* Cc/ld.scm 177 */
																											BgL_matchz00_760 =
																												BgL_newzd2matchzd2_434;
																										}
																								}
																							else
																								{	/* Cc/ld.scm 177 */
																									int BgL_curz00_439;

																									{	/* Cc/ld.scm 177 */
																										int BgL_res2399z00_1669;

																										BgL_res2399z00_1669 =
																											RGC_BUFFER_GET_CHAR
																											(BgL_iportz00_429,
																											BgL_forwardz00_431);
																										BgL_curz00_439 =
																											BgL_res2399z00_1669;
																									}
																									{	/* Cc/ld.scm 177 */

																										if (
																											((long) (BgL_curz00_439)
																												== ((long) 45)))
																											{
																												long BgL_bufposz00_3035;
																												long
																													BgL_forwardz00_3033;
																												long
																													BgL_lastzd2matchzd2_3032;
																												obj_t BgL_iportz00_3031;

																												BgL_iportz00_3031 =
																													BgL_iportz00_429;
																												BgL_lastzd2matchzd2_3032
																													=
																													BgL_newzd2matchzd2_434;
																												BgL_forwardz00_3033 =
																													(((long) 1) +
																													BgL_forwardz00_431);
																												BgL_bufposz00_3035 =
																													BgL_bufposz00_432;
																												BgL_bufposz00_486 =
																													BgL_bufposz00_3035;
																												BgL_forwardz00_485 =
																													BgL_forwardz00_3033;
																												BgL_lastzd2matchzd2_484
																													=
																													BgL_lastzd2matchzd2_3032;
																												BgL_iportz00_483 =
																													BgL_iportz00_3031;
																												goto
																													BgL_zc3z04anonymousza31732ze3z87_487;
																											}
																										else
																											{	/* Cc/ld.scm 177 */
																												bool_t
																													BgL_test2896z00_3036;
																												if (((long)
																														(BgL_curz00_439) ==
																														((long) 10)))
																													{	/* Cc/ld.scm 177 */
																														BgL_test2896z00_3036
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Cc/ld.scm 177 */
																														BgL_test2896z00_3036
																															=
																															((long)
																															(BgL_curz00_439)
																															== ((long) 45));
																													}
																												if (BgL_test2896z00_3036)
																													{	/* Cc/ld.scm 177 */
																														BgL_matchz00_760 =
																															BgL_newzd2matchzd2_434;
																													}
																												else
																													{
																														long
																															BgL_bufposz00_3046;
																														long
																															BgL_forwardz00_3044;
																														long
																															BgL_lastzd2matchzd2_3043;
																														obj_t
																															BgL_iportz00_3042;
																														BgL_iportz00_3042 =
																															BgL_iportz00_429;
																														BgL_lastzd2matchzd2_3043
																															=
																															BgL_newzd2matchzd2_434;
																														BgL_forwardz00_3044
																															=
																															(((long) 1) +
																															BgL_forwardz00_431);
																														BgL_bufposz00_3046 =
																															BgL_bufposz00_432;
																														BgL_bufposz00_470 =
																															BgL_bufposz00_3046;
																														BgL_forwardz00_469 =
																															BgL_forwardz00_3044;
																														BgL_lastzd2matchzd2_468
																															=
																															BgL_lastzd2matchzd2_3043;
																														BgL_iportz00_467 =
																															BgL_iportz00_3042;
																														goto
																															BgL_zc3z04anonymousza31713ze3z87_471;
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
														RGC_SET_FILEPOS(BgL_port1048z00_384);
														{

															{	/* Cc/ld.scm 177 */
																obj_t BgL_aux1177z00_765;

																BgL_aux1177z00_765 = BINT(BgL_matchz00_760);
																switch ((long) CINT(BgL_aux1177z00_765))
																	{
																	case ((long) 1):

																		BgL_tmp1051z00_387 = BFALSE;
																		break;
																	case ((long) 0):

																		BgL_tmp1051z00_387 = BTRUE;
																		break;
																	default:
																		BgL_tmp1051z00_387 =
																			BGl_errorz00zz__errorz00
																			(BGl_string2734z00zzcc_ldz00,
																			BGl_string2735z00zzcc_ldz00,
																			BINT(BgL_matchz00_760));
																	}
															}
														}
													}
												}
												BGl_exitdzd2popzd2protectz12z12zz__bexitz00
													(BgL_exitd1049z00_385);
												bgl_close_input_port(BgL_port1048z00_384);
												BgL_staticpz00_191 = BgL_tmp1051z00_387;
											}
										}
									}
								}
						}
						if (CBOOL(BgL_staticpz00_191))
							{	/* Cc/ld.scm 182 */
								obj_t BgL_arg1307z00_192;

								BgL_arg1307z00_192 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											17)));
								BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
									string_append_3(BgL_arg1307z00_192,
									BGl_string2736z00zzcc_ldz00,
									BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
							}
						else
							{	/* Cc/ld.scm 184 */
								obj_t BgL_arg1308z00_193;

								BgL_arg1308z00_193 =
									BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
											18)));
								BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
									string_append_3(BgL_arg1308z00_193,
									BGl_string2736z00zzcc_ldz00,
									BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
							}
						if (
							(BGl_za2passza2z00zzengine_paramz00 ==
								CNST_TABLE_REF(((long) 14))))
							{	/* Cc/ld.scm 187 */
								{	/* Cc/ld.scm 189 */
									obj_t BgL_arg1310z00_195;

									BgL_arg1310z00_195 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 19)));
									BgL_compz00_186 =
										string_append_3(BgL_compz00_186,
										BGl_string2736z00zzcc_ldz00, BgL_arg1310z00_195);
								}
								{	/* Cc/ld.scm 190 */
									obj_t BgL_sonameoptz00_196;

									BgL_sonameoptz00_196 =
										BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
												(long) 20)));
									{	/* Cc/ld.scm 192 */
										obj_t BgL_arg1311z00_197;

										{	/* Cc/ld.scm 192 */
											obj_t BgL_arg1312z00_198;

											BgL_arg1312z00_198 =
												BGl_defaultzd2sonameze70z35zzcc_ldz00
												(BGl_za2srczd2filesza2zd2zzengine_paramz00);
											{	/* Cc/ld.scm 192 */
												obj_t BgL_list1313z00_199;

												BgL_list1313z00_199 =
													MAKE_YOUNG_PAIR(BgL_arg1312z00_198, BNIL);
												BgL_arg1311z00_197 =
													BGl_formatz00zz__r4_output_6_10_3z00
													(BgL_sonameoptz00_196, BgL_list1313z00_199);
										}}
										BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
											string_append_3(BgL_arg1311z00_197,
											BGl_string2736z00zzcc_ldz00,
											BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
							}}}
						else
							{	/* Cc/ld.scm 187 */
								BFALSE;
							}
						{	/* Cc/ld.scm 195 */
							obj_t BgL_destz00_200;

							if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
								{	/* Cc/ld.scm 196 */
									BgL_destz00_200 = BGl_za2destza2z00zzengine_paramz00;
								}
							else
								{	/* Cc/ld.scm 196 */
									if (
										(BGl_za2passza2z00zzengine_paramz00 ==
											CNST_TABLE_REF(((long) 14))))
										{	/* Cc/ld.scm 197 */
											BgL_destz00_200 =
												BGl_defaultzd2sonameze70z35zzcc_ldz00
												(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										}
									else
										{	/* Cc/ld.scm 197 */
											BgL_destz00_200 = string_to_bstring(BGL_DEFAULT_A_OUT);
										}
								}
							{	/* Cc/ld.scm 195 */
								obj_t BgL_bigloozd2libzd2_201;

								{	/* Cc/ld.scm 201 */
									obj_t BgL_arg1663z00_377;
									obj_t BgL_arg1664z00_378;

									BgL_arg1663z00_377 = BGl_libraryzd2suffixeszd2zzcc_ldz00();
									{	/* Cc/ld.scm 202 */
										obj_t BgL__ortest_1078z00_379;

										BgL__ortest_1078z00_379 =
											BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
										if (CBOOL(BgL__ortest_1078z00_379))
											{	/* Cc/ld.scm 202 */
												BgL_arg1664z00_378 = BgL__ortest_1078z00_379;
											}
										else
											{	/* Cc/ld.scm 202 */
												obj_t BgL__ortest_1079z00_380;

												BgL__ortest_1079z00_380 =
													BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
												if (CBOOL(BgL__ortest_1079z00_380))
													{	/* Cc/ld.scm 202 */
														BgL_arg1664z00_378 = BgL__ortest_1079z00_380;
													}
												else
													{	/* Cc/ld.scm 202 */
														BgL_arg1664z00_378 = BgL_staticpz00_191;
													}
											}
									}
									BgL_bigloozd2libzd2_201 =
										BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
										(BGl_za2bigloozd2libza2zd2zzengine_paramz00,
										BgL_arg1663z00_377, BgL_arg1664z00_378, ((bool_t) 0),
										((bool_t) 0));
								}
								{	/* Cc/ld.scm 200 */
									obj_t BgL_gczd2libzd2_202;

									{	/* Cc/ld.scm 208 */
										obj_t BgL_arg1640z00_368;
										obj_t BgL_arg1641z00_369;
										bool_t BgL_arg1644z00_370;

										{	/* Cc/ld.scm 208 */
											obj_t BgL_arg1652z00_371;

											BgL_arg1652z00_371 =
												BGl_profilezd2gczd2debugzd2libraryzd2suffixz00zzcc_ldz00
												();
											{	/* Cc/ld.scm 208 */
												obj_t BgL_list1653z00_372;

												{	/* Cc/ld.scm 208 */
													obj_t BgL_arg1662z00_373;

													BgL_arg1662z00_373 =
														MAKE_YOUNG_PAIR(BGl_string2726z00zzcc_ldz00, BNIL);
													BgL_list1653z00_372 =
														MAKE_YOUNG_PAIR(BgL_arg1652z00_371,
														BgL_arg1662z00_373);
												}
												BgL_arg1640z00_368 = BgL_list1653z00_372;
											}
										}
										{	/* Cc/ld.scm 210 */
											obj_t BgL__ortest_1080z00_374;

											BgL__ortest_1080z00_374 =
												BGl_za2profilezd2libraryza2zd2zzengine_paramz00;
											if (CBOOL(BgL__ortest_1080z00_374))
												{	/* Cc/ld.scm 210 */
													BgL_arg1641z00_369 = BgL__ortest_1080z00_374;
												}
											else
												{	/* Cc/ld.scm 210 */
													obj_t BgL__ortest_1081z00_375;

													BgL__ortest_1081z00_375 =
														BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
													if (CBOOL(BgL__ortest_1081z00_375))
														{	/* Cc/ld.scm 210 */
															BgL_arg1641z00_369 = BgL__ortest_1081z00_375;
														}
													else
														{	/* Cc/ld.scm 210 */
															obj_t BgL__ortest_1082z00_376;

															BgL__ortest_1082z00_376 =
																BGl_za2staticzd2bigloozf3za2z21zzengine_paramz00;
															if (CBOOL(BgL__ortest_1082z00_376))
																{	/* Cc/ld.scm 210 */
																	BgL_arg1641z00_369 = BgL__ortest_1082z00_376;
																}
															else
																{	/* Cc/ld.scm 210 */
																	BgL_arg1641z00_369 = BgL_staticpz00_191;
																}
														}
												}
										}
										if (CBOOL(BGl_za2gczd2customzf3za2z21zzengine_paramz00))
											{	/* Cc/ld.scm 215 */
												BgL_arg1644z00_370 = ((bool_t) 0);
											}
										else
											{	/* Cc/ld.scm 215 */
												BgL_arg1644z00_370 = ((bool_t) 1);
											}
										BgL_gczd2libzd2_202 =
											BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
											(BGl_za2gczd2libza2zd2zzengine_paramz00,
											BgL_arg1640z00_368, BgL_arg1641z00_369, ((bool_t) 0),
											BgL_arg1644z00_370);
									}
									{	/* Cc/ld.scm 207 */
										obj_t BgL_evalzd2libszd2_203;

										{	/* Cc/ld.scm 217 */
											obj_t BgL_g1084z00_354;

											BgL_g1084z00_354 =
												BGl_getzd2evalzd2librariesz00zzmodule_evalz00();
											{
												obj_t BgL_libz00_356;
												obj_t BgL_resz00_357;

												BgL_libz00_356 = BgL_g1084z00_354;
												BgL_resz00_357 = BGl_string2726z00zzcc_ldz00;
											BgL_zc3z04anonymousza31612ze3z87_358:
												if (NULLP(BgL_libz00_356))
													{	/* Cc/ld.scm 219 */
														BgL_evalzd2libszd2_203 = BgL_resz00_357;
													}
												else
													{	/* Cc/ld.scm 221 */
														obj_t BgL_arg1624z00_360;
														obj_t BgL_arg1626z00_361;

														BgL_arg1624z00_360 = CDR(((obj_t) BgL_libz00_356));
														{	/* Cc/ld.scm 224 */
															obj_t BgL_arg1627z00_362;

															{	/* Cc/ld.scm 224 */
																obj_t BgL_arg1631z00_363;
																obj_t BgL_arg1634z00_364;
																obj_t BgL_arg1639z00_365;

																BgL_arg1631z00_363 =
																	CAR(((obj_t) BgL_libz00_356));
																BgL_arg1634z00_364 =
																	BGl_libraryzd2evalzd2suffixesz00zzcc_ldz00();
																{	/* Cc/ld.scm 226 */
																	obj_t BgL__ortest_1085z00_366;

																	BgL__ortest_1085z00_366 =
																		BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
																	if (CBOOL(BgL__ortest_1085z00_366))
																		{	/* Cc/ld.scm 226 */
																			BgL_arg1639z00_365 =
																				BgL__ortest_1085z00_366;
																		}
																	else
																		{	/* Cc/ld.scm 226 */
																			BgL_arg1639z00_365 = BgL_staticpz00_191;
																		}
																}
																BgL_arg1627z00_362 =
																	BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
																	(BgL_arg1631z00_363, BgL_arg1634z00_364,
																	BgL_arg1639z00_365, ((bool_t) 0),
																	((bool_t) 0));
															}
															BgL_arg1626z00_361 =
																string_append_3(BgL_arg1627z00_362,
																BGl_string2736z00zzcc_ldz00, BgL_resz00_357);
														}
														{
															obj_t BgL_resz00_3114;
															obj_t BgL_libz00_3113;

															BgL_libz00_3113 = BgL_arg1624z00_360;
															BgL_resz00_3114 = BgL_arg1626z00_361;
															BgL_resz00_357 = BgL_resz00_3114;
															BgL_libz00_356 = BgL_libz00_3113;
															goto BgL_zc3z04anonymousza31612ze3z87_358;
														}
													}
											}
										}
										{	/* Cc/ld.scm 217 */
											obj_t BgL_addzd2libszd2_204;

											{	/* Cc/ld.scm 231 */
												obj_t BgL_g1086z00_338;

												{	/* Cc/ld.scm 232 */
													obj_t BgL_g1942z00_352;

													BgL_g1942z00_352 =
														BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
													{	/* Cc/ld.scm 231 */

														BgL_g1086z00_338 =
															BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00
															(BgL_g1942z00_352,
															BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
													}
												}
												{
													obj_t BgL_libz00_340;
													obj_t BgL_resz00_341;

													BgL_libz00_340 = BgL_g1086z00_338;
													BgL_resz00_341 = BGl_string2726z00zzcc_ldz00;
												BgL_zc3z04anonymousza31593ze3z87_342:
													if (NULLP(BgL_libz00_340))
														{	/* Cc/ld.scm 234 */
															BgL_addzd2libszd2_204 = BgL_resz00_341;
														}
													else
														{	/* Cc/ld.scm 236 */
															obj_t BgL_arg1597z00_344;
															obj_t BgL_arg1599z00_345;

															BgL_arg1597z00_344 =
																CDR(((obj_t) BgL_libz00_340));
															{	/* Cc/ld.scm 239 */
																obj_t BgL_arg1604z00_346;

																{	/* Cc/ld.scm 239 */
																	obj_t BgL_arg1605z00_347;
																	obj_t BgL_arg1606z00_348;
																	obj_t BgL_arg1611z00_349;

																	BgL_arg1605z00_347 =
																		CAR(((obj_t) BgL_libz00_340));
																	BgL_arg1606z00_348 =
																		BGl_libraryzd2suffixeszd2zzcc_ldz00();
																	{	/* Cc/ld.scm 241 */
																		obj_t BgL__ortest_1087z00_350;

																		BgL__ortest_1087z00_350 =
																			BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
																		if (CBOOL(BgL__ortest_1087z00_350))
																			{	/* Cc/ld.scm 241 */
																				BgL_arg1611z00_349 =
																					BgL__ortest_1087z00_350;
																			}
																		else
																			{	/* Cc/ld.scm 241 */
																				BgL_arg1611z00_349 = BgL_staticpz00_191;
																			}
																	}
																	BgL_arg1604z00_346 =
																		BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
																		(BgL_arg1605z00_347, BgL_arg1606z00_348,
																		BgL_arg1611z00_349, ((bool_t) 0),
																		((bool_t) 0));
																}
																BgL_arg1599z00_345 =
																	string_append_3(BgL_arg1604z00_346,
																	BGl_string2736z00zzcc_ldz00, BgL_resz00_341);
															}
															{
																obj_t BgL_resz00_3128;
																obj_t BgL_libz00_3127;

																BgL_libz00_3127 = BgL_arg1597z00_344;
																BgL_resz00_3128 = BgL_arg1599z00_345;
																BgL_resz00_341 = BgL_resz00_3128;
																BgL_libz00_340 = BgL_libz00_3127;
																goto BgL_zc3z04anonymousza31593ze3z87_342;
															}
														}
												}
											}
											{	/* Cc/ld.scm 231 */
												obj_t BgL_otherzd2libszd2_205;

												{	/* Cc/ld.scm 246 */
													obj_t BgL_g1088z00_328;

													BgL_g1088z00_328 =
														bgl_reverse
														(BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00);
													{
														obj_t BgL_libz00_330;
														obj_t BgL_resz00_331;

														BgL_libz00_330 = BgL_g1088z00_328;
														BgL_resz00_331 = BGl_string2726z00zzcc_ldz00;
													BgL_zc3z04anonymousza31584ze3z87_332:
														if (NULLP(BgL_libz00_330))
															{	/* Cc/ld.scm 248 */
																BgL_otherzd2libszd2_205 = BgL_resz00_331;
															}
														else
															{	/* Cc/ld.scm 250 */
																obj_t BgL_arg1588z00_334;
																obj_t BgL_arg1589z00_335;

																BgL_arg1588z00_334 =
																	CDR(((obj_t) BgL_libz00_330));
																{	/* Cc/ld.scm 251 */
																	obj_t BgL_arg1592z00_336;

																	BgL_arg1592z00_336 =
																		CAR(((obj_t) BgL_libz00_330));
																	BgL_arg1589z00_335 =
																		string_append_3(BgL_arg1592z00_336,
																		BGl_string2736z00zzcc_ldz00,
																		BgL_resz00_331);
																}
																{
																	obj_t BgL_resz00_3138;
																	obj_t BgL_libz00_3137;

																	BgL_libz00_3137 = BgL_arg1588z00_334;
																	BgL_resz00_3138 = BgL_arg1589z00_335;
																	BgL_resz00_331 = BgL_resz00_3138;
																	BgL_libz00_330 = BgL_libz00_3137;
																	goto BgL_zc3z04anonymousza31584ze3z87_332;
																}
															}
													}
												}
												{	/* Cc/ld.scm 246 */
													obj_t BgL_ldzd2argszd2_206;

													{	/* Cc/ld.scm 254 */
														obj_t BgL_arg1319z00_212;
														obj_t BgL_arg1322z00_213;
														obj_t BgL_arg1324z00_214;
														obj_t BgL_arg1325z00_215;
														obj_t BgL_arg1326z00_216;
														obj_t BgL_arg1327z00_217;
														obj_t BgL_arg1328z00_218;
														obj_t BgL_arg1329z00_219;
														obj_t BgL_arg1330z00_220;
														obj_t BgL_arg1331z00_221;
														obj_t BgL_arg1334z00_222;
														obj_t BgL_arg1335z00_223;
														obj_t BgL_arg1337z00_224;
														obj_t BgL_arg1338z00_225;
														obj_t BgL_arg1339z00_226;

														{	/* Cc/ld.scm 254 */
															obj_t BgL_list1450z00_262;

															{	/* Cc/ld.scm 254 */
																obj_t BgL_arg1461z00_263;

																{	/* Cc/ld.scm 254 */
																	obj_t BgL_arg1462z00_264;

																	BgL_arg1462z00_264 =
																		MAKE_YOUNG_PAIR
																		(BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00,
																		BNIL);
																	BgL_arg1461z00_263 =
																		MAKE_YOUNG_PAIR(BGl_string2737z00zzcc_ldz00,
																		BgL_arg1462z00_264);
																}
																BgL_list1450z00_262 =
																	MAKE_YOUNG_PAIR(BgL_namez00_11,
																	BgL_arg1461z00_263);
															}
															BgL_arg1319z00_212 =
																BGl_unixzd2filenamezd2zzcc_execz00
																(BgL_list1450z00_262);
														}
														{	/* Cc/ld.scm 256 */
															obj_t BgL_arg1464z00_265;

															{	/* Cc/ld.scm 256 */
																obj_t BgL_l1178z00_266;

																BgL_l1178z00_266 =
																	BGl_za2withzd2filesza2zd2zzengine_paramz00;
																if (NULLP(BgL_l1178z00_266))
																	{	/* Cc/ld.scm 256 */
																		BgL_arg1464z00_265 = BNIL;
																	}
																else
																	{	/* Cc/ld.scm 256 */
																		obj_t BgL_head1180z00_268;

																		{	/* Cc/ld.scm 256 */
																			obj_t BgL_arg1489z00_281;

																			{	/* Cc/ld.scm 256 */
																				obj_t BgL_arg1493z00_282;

																				BgL_arg1493z00_282 =
																					CAR(((obj_t) BgL_l1178z00_266));
																				{	/* Cc/ld.scm 256 */
																					obj_t BgL_list1494z00_283;

																					BgL_list1494z00_283 =
																						MAKE_YOUNG_PAIR(BgL_arg1493z00_282,
																						BNIL);
																					BgL_arg1489z00_281 =
																						BGl_unixzd2filenamezd2zzcc_execz00
																						(BgL_list1494z00_283);
																				}
																			}
																			{	/* Cc/ld.scm 256 */
																				obj_t BgL_res2539z00_1978;

																				BgL_res2539z00_1978 =
																					MAKE_YOUNG_PAIR(BgL_arg1489z00_281,
																					BNIL);
																				BgL_head1180z00_268 =
																					BgL_res2539z00_1978;
																			}
																		}
																		{	/* Cc/ld.scm 256 */
																			obj_t BgL_g1183z00_269;

																			BgL_g1183z00_269 =
																				CDR(((obj_t) BgL_l1178z00_266));
																			{
																				obj_t BgL_l1178z00_271;
																				obj_t BgL_tail1181z00_272;

																				BgL_l1178z00_271 = BgL_g1183z00_269;
																				BgL_tail1181z00_272 =
																					BgL_head1180z00_268;
																			BgL_zc3z04anonymousza31467ze3z87_273:
																				if (NULLP(BgL_l1178z00_271))
																					{	/* Cc/ld.scm 256 */
																						BgL_arg1464z00_265 =
																							BgL_head1180z00_268;
																					}
																				else
																					{	/* Cc/ld.scm 256 */
																						obj_t BgL_newtail1182z00_275;

																						{	/* Cc/ld.scm 256 */
																							obj_t BgL_arg1476z00_277;

																							{	/* Cc/ld.scm 256 */
																								obj_t BgL_arg1477z00_278;

																								BgL_arg1477z00_278 =
																									CAR(
																									((obj_t) BgL_l1178z00_271));
																								{	/* Cc/ld.scm 256 */
																									obj_t BgL_list1478z00_279;

																									BgL_list1478z00_279 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1477z00_278, BNIL);
																									BgL_arg1476z00_277 =
																										BGl_unixzd2filenamezd2zzcc_execz00
																										(BgL_list1478z00_279);
																								}
																							}
																							{	/* Cc/ld.scm 256 */
																								obj_t BgL_res2541z00_1982;

																								BgL_res2541z00_1982 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1476z00_277, BNIL);
																								BgL_newtail1182z00_275 =
																									BgL_res2541z00_1982;
																							}
																						}
																						SET_CDR(BgL_tail1181z00_272,
																							BgL_newtail1182z00_275);
																						{	/* Cc/ld.scm 256 */
																							obj_t BgL_arg1474z00_276;

																							BgL_arg1474z00_276 =
																								CDR(((obj_t) BgL_l1178z00_271));
																							{
																								obj_t BgL_tail1181z00_3163;
																								obj_t BgL_l1178z00_3162;

																								BgL_l1178z00_3162 =
																									BgL_arg1474z00_276;
																								BgL_tail1181z00_3163 =
																									BgL_newtail1182z00_275;
																								BgL_tail1181z00_272 =
																									BgL_tail1181z00_3163;
																								BgL_l1178z00_271 =
																									BgL_l1178z00_3162;
																								goto
																									BgL_zc3z04anonymousza31467ze3z87_273;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															BgL_arg1322z00_213 =
																BGl_stringza2zd2ze3stringz93zztools_miscz00
																(BgL_arg1464z00_265);
														}
														{	/* Cc/ld.scm 258 */
															obj_t BgL_arg1495z00_284;

															{	/* Cc/ld.scm 258 */
																obj_t BgL_l1184z00_285;

																BgL_l1184z00_285 =
																	BGl_za2ozd2filesza2zd2zzengine_paramz00;
																if (NULLP(BgL_l1184z00_285))
																	{	/* Cc/ld.scm 258 */
																		BgL_arg1495z00_284 = BNIL;
																	}
																else
																	{	/* Cc/ld.scm 258 */
																		obj_t BgL_head1186z00_287;

																		{	/* Cc/ld.scm 258 */
																			obj_t BgL_arg1536z00_300;

																			{	/* Cc/ld.scm 258 */
																				obj_t BgL_arg1537z00_301;

																				BgL_arg1537z00_301 =
																					CAR(((obj_t) BgL_l1184z00_285));
																				{	/* Cc/ld.scm 258 */
																					obj_t BgL_list1538z00_302;

																					BgL_list1538z00_302 =
																						MAKE_YOUNG_PAIR(BgL_arg1537z00_301,
																						BNIL);
																					BgL_arg1536z00_300 =
																						BGl_unixzd2filenamezd2zzcc_execz00
																						(BgL_list1538z00_302);
																				}
																			}
																			{	/* Cc/ld.scm 258 */
																				obj_t BgL_res2543z00_1987;

																				BgL_res2543z00_1987 =
																					MAKE_YOUNG_PAIR(BgL_arg1536z00_300,
																					BNIL);
																				BgL_head1186z00_287 =
																					BgL_res2543z00_1987;
																			}
																		}
																		{	/* Cc/ld.scm 258 */
																			obj_t BgL_g1189z00_288;

																			BgL_g1189z00_288 =
																				CDR(((obj_t) BgL_l1184z00_285));
																			{
																				obj_t BgL_l1184z00_290;
																				obj_t BgL_tail1187z00_291;

																				BgL_l1184z00_290 = BgL_g1189z00_288;
																				BgL_tail1187z00_291 =
																					BgL_head1186z00_287;
																			BgL_zc3z04anonymousza31497ze3z87_292:
																				if (NULLP(BgL_l1184z00_290))
																					{	/* Cc/ld.scm 258 */
																						BgL_arg1495z00_284 =
																							BgL_head1186z00_287;
																					}
																				else
																					{	/* Cc/ld.scm 258 */
																						obj_t BgL_newtail1188z00_294;

																						{	/* Cc/ld.scm 258 */
																							obj_t BgL_arg1521z00_296;

																							{	/* Cc/ld.scm 258 */
																								obj_t BgL_arg1528z00_297;

																								BgL_arg1528z00_297 =
																									CAR(
																									((obj_t) BgL_l1184z00_290));
																								{	/* Cc/ld.scm 258 */
																									obj_t BgL_list1529z00_298;

																									BgL_list1529z00_298 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1528z00_297, BNIL);
																									BgL_arg1521z00_296 =
																										BGl_unixzd2filenamezd2zzcc_execz00
																										(BgL_list1529z00_298);
																								}
																							}
																							{	/* Cc/ld.scm 258 */
																								obj_t BgL_res2545z00_1991;

																								BgL_res2545z00_1991 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1521z00_296, BNIL);
																								BgL_newtail1188z00_294 =
																									BgL_res2545z00_1991;
																							}
																						}
																						SET_CDR(BgL_tail1187z00_291,
																							BgL_newtail1188z00_294);
																						{	/* Cc/ld.scm 258 */
																							obj_t BgL_arg1518z00_295;

																							BgL_arg1518z00_295 =
																								CDR(((obj_t) BgL_l1184z00_290));
																							{
																								obj_t BgL_tail1187z00_3185;
																								obj_t BgL_l1184z00_3184;

																								BgL_l1184z00_3184 =
																									BgL_arg1518z00_295;
																								BgL_tail1187z00_3185 =
																									BgL_newtail1188z00_294;
																								BgL_tail1187z00_291 =
																									BgL_tail1187z00_3185;
																								BgL_l1184z00_290 =
																									BgL_l1184z00_3184;
																								goto
																									BgL_zc3z04anonymousza31497ze3z87_292;
																							}
																						}
																					}
																			}
																		}
																	}
															}
															BgL_arg1324z00_214 =
																BGl_stringza2zd2ze3stringz93zztools_miscz00
																(BgL_arg1495z00_284);
														}
														{	/* Cc/ld.scm 260 */
															obj_t BgL_list1539z00_303;

															BgL_list1539z00_303 =
																MAKE_YOUNG_PAIR(BgL_destz00_200, BNIL);
															BgL_arg1325z00_215 =
																BGl_unixzd2filenamezd2zzcc_execz00
																(BgL_list1539z00_303);
														}
														{	/* Cc/ld.scm 262 */
															obj_t BgL_list1540z00_304;

															BgL_list1540z00_304 =
																MAKE_YOUNG_PAIR
																(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
																BNIL);
															BgL_arg1326z00_216 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string2738z00zzcc_ldz00,
																BgL_list1540z00_304);
														}
														{	/* Cc/ld.scm 152 */
															obj_t BgL_rpathfmtz00_828;

															BgL_rpathfmtz00_828 =
																BGl_bigloozd2configzd2zz__configurez00
																(CNST_TABLE_REF(((long) 13)));
															if ((STRING_LENGTH(((obj_t) BgL_rpathfmtz00_828))
																	== ((long) 0)))
																{	/* Cc/ld.scm 153 */
																	BgL_arg1327z00_217 =
																		BGl_string2726z00zzcc_ldz00;
																}
															else
																{	/* Cc/ld.scm 156 */
																	obj_t BgL_arg1987z00_830;

																	{	/* Cc/ld.scm 156 */
																		obj_t BgL_l1171z00_832;

																		{	/* Cc/ld.scm 158 */
																			obj_t BgL_g1942z00_846;

																			BgL_g1942z00_846 =
																				BGl_za2cflagszd2rpathza2zd2zzengine_paramz00;
																			{	/* Cc/ld.scm 158 */

																				BgL_l1171z00_832 =
																					BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_g1942z00_846,
																					BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
																			}
																		}
																		if (NULLP(BgL_l1171z00_832))
																			{	/* Cc/ld.scm 156 */
																				BgL_arg1987z00_830 = BNIL;
																			}
																		else
																			{	/* Cc/ld.scm 156 */
																				obj_t BgL_head1173z00_834;

																				{	/* Cc/ld.scm 156 */
																					obj_t BgL_res2387z00_1636;

																					BgL_res2387z00_1636 =
																						MAKE_YOUNG_PAIR(BNIL, BNIL);
																					BgL_head1173z00_834 =
																						BgL_res2387z00_1636;
																				}
																				{
																					obj_t BgL_l1171z00_836;
																					obj_t BgL_tail1174z00_837;

																					BgL_l1171z00_836 = BgL_l1171z00_832;
																					BgL_tail1174z00_837 =
																						BgL_head1173z00_834;
																				BgL_zc3z04anonymousza31990ze3z87_838:
																					if (NULLP(BgL_l1171z00_836))
																						{	/* Cc/ld.scm 156 */
																							BgL_arg1987z00_830 =
																								CDR(BgL_head1173z00_834);
																						}
																					else
																						{	/* Cc/ld.scm 156 */
																							obj_t BgL_newtail1175z00_840;

																							{	/* Cc/ld.scm 156 */
																								obj_t BgL_arg1993z00_842;

																								{	/* Cc/ld.scm 156 */
																									obj_t BgL_pathz00_843;

																									BgL_pathz00_843 =
																										CAR(
																										((obj_t) BgL_l1171z00_836));
																									{	/* Cc/ld.scm 157 */
																										obj_t BgL_list1994z00_844;

																										BgL_list1994z00_844 =
																											MAKE_YOUNG_PAIR
																											(BgL_pathz00_843, BNIL);
																										BgL_arg1993z00_842 =
																											BGl_formatz00zz__r4_output_6_10_3z00
																											(BgL_rpathfmtz00_828,
																											BgL_list1994z00_844);
																									}
																								}
																								{	/* Cc/ld.scm 156 */
																									obj_t BgL_res2389z00_1640;

																									BgL_res2389z00_1640 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1993z00_842, BNIL);
																									BgL_newtail1175z00_840 =
																										BgL_res2389z00_1640;
																								}
																							}
																							SET_CDR(BgL_tail1174z00_837,
																								BgL_newtail1175z00_840);
																							{	/* Cc/ld.scm 156 */
																								obj_t BgL_arg1992z00_841;

																								BgL_arg1992z00_841 =
																									CDR(
																									((obj_t) BgL_l1171z00_836));
																								{
																									obj_t BgL_tail1174z00_3213;
																									obj_t BgL_l1171z00_3212;

																									BgL_l1171z00_3212 =
																										BgL_arg1992z00_841;
																									BgL_tail1174z00_3213 =
																										BgL_newtail1175z00_840;
																									BgL_tail1174z00_837 =
																										BgL_tail1174z00_3213;
																									BgL_l1171z00_836 =
																										BgL_l1171z00_3212;
																									goto
																										BgL_zc3z04anonymousza31990ze3z87_838;
																								}
																							}
																						}
																				}
																			}
																	}
																	{	/* Cc/ld.scm 155 */
																		obj_t BgL_list1988z00_831;

																		BgL_list1988z00_831 =
																			MAKE_YOUNG_PAIR(BgL_arg1987z00_830, BNIL);
																		BgL_arg1327z00_217 =
																			BGl_formatz00zz__r4_output_6_10_3z00
																			(BGl_string2731z00zzcc_ldz00,
																			BgL_list1988z00_831);
																	}
																}
														}
														{	/* Cc/ld.scm 266 */
															bool_t BgL_test2920z00_3216;

															if (CBOOL
																(BGl_za2czd2debugza2zd2zzengine_paramz00))
																{	/* Cc/ld.scm 266 */
																	BgL_test2920z00_3216 = ((bool_t) 1);
																}
															else
																{	/* Cc/ld.scm 266 */
																	BgL_test2920z00_3216 =
																		(
																		(long)
																		CINT
																		(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																		> ((long) 0));
																}
															if (BgL_test2920z00_3216)
																{	/* Cc/ld.scm 266 */
																	BgL_arg1328z00_218 =
																		string_append(BGl_string2736z00zzcc_ldz00,
																		BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00);
																}
															else
																{	/* Cc/ld.scm 266 */
																	BgL_arg1328z00_218 =
																		BGl_string2726z00zzcc_ldz00;
																}
														}
														{	/* Cc/ld.scm 270 */
															bool_t BgL_test2922z00_3222;

															if (CBOOL(BGl_za2stripza2z00zzengine_paramz00))
																{	/* Cc/ld.scm 270 */
																	if (
																		(BGl_za2passza2z00zzengine_paramz00 ==
																			CNST_TABLE_REF(((long) 14))))
																		{	/* Cc/ld.scm 270 */
																			BgL_test2922z00_3222 = ((bool_t) 0);
																		}
																	else
																		{	/* Cc/ld.scm 270 */
																			BgL_test2922z00_3222 = ((bool_t) 1);
																		}
																}
															else
																{	/* Cc/ld.scm 270 */
																	BgL_test2922z00_3222 = ((bool_t) 0);
																}
															if (BgL_test2922z00_3222)
																{	/* Cc/ld.scm 270 */
																	BgL_arg1329z00_219 =
																		string_append(BGl_string2736z00zzcc_ldz00,
																		BGl_bigloozd2configzd2zz__configurez00
																		(CNST_TABLE_REF(((long) 21))));
																}
															else
																{	/* Cc/ld.scm 270 */
																	BgL_arg1329z00_219 =
																		BGl_string2726z00zzcc_ldz00;
																}
														}
														BgL_arg1330z00_220 =
															string_append(BGl_string2736z00zzcc_ldz00,
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 22))));
														BgL_arg1331z00_221 =
															BGl_loopze71ze7zzcc_ldz00
															(BGl_za2libzd2dirza2zd2zzengine_paramz00);
														{	/* Cc/ld.scm 285 */
															obj_t BgL_sz00_323;

															BgL_sz00_323 =
																BGl_bigloozd2configzd2zz__configurez00
																(CNST_TABLE_REF(((long) 23)));
															if ((STRING_LENGTH(((obj_t) BgL_sz00_323)) >
																	((long) 0)))
																{	/* Cc/ld.scm 286 */
																	BgL_arg1334z00_222 =
																		string_append(BGl_string2739z00zzcc_ldz00,
																		BgL_sz00_323);
																}
															else
																{	/* Cc/ld.scm 286 */
																	BgL_arg1334z00_222 =
																		BGl_string2726z00zzcc_ldz00;
																}
														}
														if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
															{	/* Cc/ld.scm 290 */
																BgL_arg1335z00_223 =
																	BGl_string2726z00zzcc_ldz00;
															}
														else
															{	/* Cc/ld.scm 290 */
																BgL_arg1335z00_223 =
																	string_append(BGl_string2736z00zzcc_ldz00,
																	BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00);
															}
														BgL_arg1337z00_224 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 24)));
														if (CBOOL
															(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00))
															{	/* Cc/ld.scm 306 */
																BgL_arg1338z00_225 = BgL_addzd2libszd2_204;
															}
														else
															{	/* Cc/ld.scm 306 */
																BgL_arg1338z00_225 =
																	BGl_string2726z00zzcc_ldz00;
															}
														{	/* Cc/ld.scm 308 */
															obj_t BgL_list1583z00_327;

															BgL_list1583z00_327 =
																MAKE_YOUNG_PAIR
																(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00,
																BNIL);
															BgL_arg1339z00_226 =
																BGl_formatz00zz__r4_output_6_10_3z00
																(BGl_string2738z00zzcc_ldz00,
																BgL_list1583z00_327);
														}
														{	/* Cc/ld.scm 252 */
															obj_t BgL_list1340z00_227;

															{	/* Cc/ld.scm 252 */
																obj_t BgL_arg1344z00_228;

																{	/* Cc/ld.scm 252 */
																	obj_t BgL_arg1345z00_229;

																	{	/* Cc/ld.scm 252 */
																		obj_t BgL_arg1346z00_230;

																		{	/* Cc/ld.scm 252 */
																			obj_t BgL_arg1347z00_231;

																			{	/* Cc/ld.scm 252 */
																				obj_t BgL_arg1348z00_232;

																				{	/* Cc/ld.scm 252 */
																					obj_t BgL_arg1351z00_233;

																					{	/* Cc/ld.scm 252 */
																						obj_t BgL_arg1352z00_234;

																						{	/* Cc/ld.scm 252 */
																							obj_t BgL_arg1357z00_235;

																							{	/* Cc/ld.scm 252 */
																								obj_t BgL_arg1360z00_236;

																								{	/* Cc/ld.scm 252 */
																									obj_t BgL_arg1361z00_237;

																									{	/* Cc/ld.scm 252 */
																										obj_t BgL_arg1363z00_238;

																										{	/* Cc/ld.scm 252 */
																											obj_t BgL_arg1364z00_239;

																											{	/* Cc/ld.scm 252 */
																												obj_t
																													BgL_arg1367z00_240;
																												{	/* Cc/ld.scm 252 */
																													obj_t
																														BgL_arg1370z00_241;
																													{	/* Cc/ld.scm 252 */
																														obj_t
																															BgL_arg1371z00_242;
																														{	/* Cc/ld.scm 252 */
																															obj_t
																																BgL_arg1372z00_243;
																															{	/* Cc/ld.scm 252 */
																																obj_t
																																	BgL_arg1381z00_244;
																																{	/* Cc/ld.scm 252 */
																																	obj_t
																																		BgL_arg1382z00_245;
																																	{	/* Cc/ld.scm 252 */
																																		obj_t
																																			BgL_arg1383z00_246;
																																		{	/* Cc/ld.scm 252 */
																																			obj_t
																																				BgL_arg1384z00_247;
																																			{	/* Cc/ld.scm 252 */
																																				obj_t
																																					BgL_arg1385z00_248;
																																				{	/* Cc/ld.scm 252 */
																																					obj_t
																																						BgL_arg1386z00_249;
																																					{	/* Cc/ld.scm 252 */
																																						obj_t
																																							BgL_arg1387z00_250;
																																						{	/* Cc/ld.scm 252 */
																																							obj_t
																																								BgL_arg1388z00_251;
																																							{	/* Cc/ld.scm 252 */
																																								obj_t
																																									BgL_arg1394z00_252;
																																								{	/* Cc/ld.scm 252 */
																																									obj_t
																																										BgL_arg1396z00_253;
																																									{	/* Cc/ld.scm 252 */
																																										obj_t
																																											BgL_arg1417z00_254;
																																										{	/* Cc/ld.scm 252 */
																																											obj_t
																																												BgL_arg1418z00_255;
																																											{	/* Cc/ld.scm 252 */
																																												obj_t
																																													BgL_arg1421z00_256;
																																												{	/* Cc/ld.scm 252 */
																																													obj_t
																																														BgL_arg1422z00_257;
																																													{	/* Cc/ld.scm 252 */
																																														obj_t
																																															BgL_arg1441z00_258;
																																														{	/* Cc/ld.scm 252 */
																																															obj_t
																																																BgL_arg1442z00_259;
																																															{	/* Cc/ld.scm 252 */
																																																obj_t
																																																	BgL_arg1448z00_260;
																																																{	/* Cc/ld.scm 252 */
																																																	obj_t
																																																		BgL_arg1449z00_261;
																																																	BgL_arg1449z00_261
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BgL_arg1339z00_226,
																																																		BNIL);
																																																	BgL_arg1448z00_260
																																																		=
																																																		MAKE_YOUNG_PAIR
																																																		(BGl_string2736z00zzcc_ldz00,
																																																		BgL_arg1449z00_261);
																																																}
																																																BgL_arg1442z00_259
																																																	=
																																																	MAKE_YOUNG_PAIR
																																																	(BgL_arg1338z00_225,
																																																	BgL_arg1448z00_260);
																																															}
																																															BgL_arg1441z00_258
																																																=
																																																MAKE_YOUNG_PAIR
																																																(BGl_string2736z00zzcc_ldz00,
																																																BgL_arg1442z00_259);
																																														}
																																														BgL_arg1422z00_257
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_otherzd2libszd2_205,
																																															BgL_arg1441z00_258);
																																													}
																																													BgL_arg1421z00_256
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BGl_string2736z00zzcc_ldz00,
																																														BgL_arg1422z00_257);
																																												}
																																												BgL_arg1418z00_255
																																													=
																																													MAKE_YOUNG_PAIR
																																													(BgL_arg1337z00_224,
																																													BgL_arg1421z00_256);
																																											}
																																											BgL_arg1417z00_254
																																												=
																																												MAKE_YOUNG_PAIR
																																												(BGl_string2736z00zzcc_ldz00,
																																												BgL_arg1418z00_255);
																																										}
																																										BgL_arg1396z00_253
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_gczd2libzd2_202,
																																											BgL_arg1417z00_254);
																																									}
																																									BgL_arg1394z00_252
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BGl_string2736z00zzcc_ldz00,
																																										BgL_arg1396z00_253);
																																								}
																																								BgL_arg1388z00_251
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_bigloozd2libzd2_201,
																																									BgL_arg1394z00_252);
																																							}
																																							BgL_arg1387z00_250
																																								=
																																								MAKE_YOUNG_PAIR
																																								(BGl_string2736z00zzcc_ldz00,
																																								BgL_arg1388z00_251);
																																						}
																																						BgL_arg1386z00_249
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_addzd2libszd2_204,
																																							BgL_arg1387z00_250);
																																					}
																																					BgL_arg1385z00_248
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BGl_string2736z00zzcc_ldz00,
																																						BgL_arg1386z00_249);
																																				}
																																				BgL_arg1384z00_247
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_evalzd2libszd2_203,
																																					BgL_arg1385z00_248);
																																			}
																																			BgL_arg1383z00_246
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string2736z00zzcc_ldz00,
																																				BgL_arg1384z00_247);
																																		}
																																		BgL_arg1382z00_245
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1335z00_223,
																																			BgL_arg1383z00_246);
																																	}
																																	BgL_arg1381z00_244
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1334z00_222,
																																		BgL_arg1382z00_245);
																																}
																																BgL_arg1372z00_243
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1331z00_221,
																																	BgL_arg1381z00_244);
																															}
																															BgL_arg1371z00_242
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string2736z00zzcc_ldz00,
																																BgL_arg1372z00_243);
																														}
																														BgL_arg1370z00_241 =
																															MAKE_YOUNG_PAIR
																															(BGl_za2ldzd2optionsza2zd2zzengine_paramz00,
																															BgL_arg1371z00_242);
																													}
																													BgL_arg1367z00_240 =
																														MAKE_YOUNG_PAIR
																														(BGl_string2736z00zzcc_ldz00,
																														BgL_arg1370z00_241);
																												}
																												BgL_arg1364z00_239 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1330z00_220,
																													BgL_arg1367z00_240);
																											}
																											BgL_arg1363z00_238 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1329z00_219,
																												BgL_arg1364z00_239);
																										}
																										BgL_arg1361z00_237 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1328z00_218,
																											BgL_arg1363z00_238);
																									}
																									BgL_arg1360z00_236 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1327z00_217,
																										BgL_arg1361z00_237);
																								}
																								BgL_arg1357z00_235 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1326z00_216,
																									BgL_arg1360z00_236);
																							}
																							BgL_arg1352z00_234 =
																								MAKE_YOUNG_PAIR
																								(BGl_string2736z00zzcc_ldz00,
																								BgL_arg1357z00_235);
																						}
																						BgL_arg1351z00_233 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1325z00_215,
																							BgL_arg1352z00_234);
																					}
																					BgL_arg1348z00_232 =
																						MAKE_YOUNG_PAIR
																						(BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00,
																						BgL_arg1351z00_233);
																				}
																				BgL_arg1347z00_231 =
																					MAKE_YOUNG_PAIR
																					(BGl_string2736z00zzcc_ldz00,
																					BgL_arg1348z00_232);
																			}
																			BgL_arg1346z00_230 =
																				MAKE_YOUNG_PAIR(BgL_arg1324z00_214,
																				BgL_arg1347z00_231);
																		}
																		BgL_arg1345z00_229 =
																			MAKE_YOUNG_PAIR(BgL_arg1322z00_213,
																			BgL_arg1346z00_230);
																	}
																	BgL_arg1344z00_228 =
																		MAKE_YOUNG_PAIR(BGl_string2736z00zzcc_ldz00,
																		BgL_arg1345z00_229);
																}
																BgL_list1340z00_227 =
																	MAKE_YOUNG_PAIR(BgL_arg1319z00_212,
																	BgL_arg1344z00_228);
															}
															BgL_ldzd2argszd2_206 =
																BGl_stringzd2appendzd2zz__r4_strings_6_7z00
																(BgL_list1340z00_227);
														}
													}
													{	/* Cc/ld.scm 252 */
														obj_t BgL_cmdz00_207;

														BgL_cmdz00_207 =
															string_append_3(BgL_compz00_186,
															BGl_string2736z00zzcc_ldz00,
															BgL_ldzd2argszd2_206);
														{	/* Cc/ld.scm 309 */

															{	/* Cc/ld.scm 310 */
																obj_t BgL_list1314z00_208;

																{	/* Cc/ld.scm 310 */
																	obj_t BgL_arg1315z00_209;

																	{	/* Cc/ld.scm 310 */
																		obj_t BgL_arg1316z00_210;

																		{	/* Cc/ld.scm 310 */
																			obj_t BgL_arg1317z00_211;

																			BgL_arg1317z00_211 =
																				MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																						10)), BNIL);
																			BgL_arg1316z00_210 =
																				MAKE_YOUNG_PAIR(BCHAR(((unsigned char)
																						']')), BgL_arg1317z00_211);
																		}
																		BgL_arg1315z00_209 =
																			MAKE_YOUNG_PAIR(BgL_cmdz00_207,
																			BgL_arg1316z00_210);
																	}
																	BgL_list1314z00_208 =
																		MAKE_YOUNG_PAIR(BGl_string2740z00zzcc_ldz00,
																		BgL_arg1315z00_209);
																}
																BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
																	BgL_list1314z00_208);
															}
															return
																BGl_execz00zzcc_execz00(BgL_cmdz00_207,
																BgL_needzd2tozd2returnz00_12,
																BGl_string2721z00zzcc_ldz00);
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



/* default-soname~0 */
	obj_t BGl_defaultzd2sonameze70z35zzcc_ldz00(obj_t BgL_filesz00_815)
	{
		{	/* Cc/ld.scm 167 */
			{	/* Cc/ld.scm 163 */
				obj_t BgL_arg1976z00_818;
				obj_t BgL_arg1977z00_819;

				{	/* Cc/ld.scm 163 */
					obj_t BgL_arg1979z00_820;

					{	/* Cc/ld.scm 163 */
						bool_t BgL_test2928z00_3297;

						{	/* Cc/ld.scm 163 */
							obj_t BgL_tmpz00_3298;

							BgL_tmpz00_3298 = CAR(((obj_t) BgL_filesz00_815));
							BgL_test2928z00_3297 = STRINGP(BgL_tmpz00_3298);
						}
						if (BgL_test2928z00_3297)
							{	/* Cc/ld.scm 163 */
								BgL_arg1979z00_820 = CAR(((obj_t) BgL_filesz00_815));
							}
						else
							{	/* Cc/ld.scm 165 */
								obj_t BgL_arg1982z00_823;

								BgL_arg1982z00_823 = CAR(((obj_t) BgL_filesz00_815));
								{	/* Cc/ld.scm 165 */
									obj_t BgL_res2392z00_1651;

									{	/* Cc/ld.scm 165 */
										obj_t BgL_arg1466z00_1650;

										BgL_arg1466z00_1650 =
											SYMBOL_TO_STRING(((obj_t) BgL_arg1982z00_823));
										BgL_res2392z00_1651 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1650);
									}
									BgL_arg1979z00_820 = BgL_res2392z00_1651;
								}
							}
					}
					BgL_arg1976z00_818 = BGl_prefixz00zz__osz00(BgL_arg1979z00_820);
				}
				BgL_arg1977z00_819 =
					BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long) 25)));
				return
					string_append_3(BgL_arg1976z00_818, BGl_string2737z00zzcc_ldz00,
					BgL_arg1977z00_819);
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzcc_ldz00(obj_t BgL_pathz00_312)
	{
		{	/* Cc/ld.scm 277 */
			if (NULLP(BgL_pathz00_312))
				{	/* Cc/ld.scm 278 */
					return BGl_string2726z00zzcc_ldz00;
				}
			else
				{	/* Cc/ld.scm 281 */
					obj_t BgL_arg1558z00_315;
					obj_t BgL_arg1561z00_316;

					BgL_arg1558z00_315 = CAR(((obj_t) BgL_pathz00_312));
					{	/* Cc/ld.scm 283 */
						obj_t BgL_arg1575z00_321;

						BgL_arg1575z00_321 = CDR(((obj_t) BgL_pathz00_312));
						BgL_arg1561z00_316 = BGl_loopze71ze7zzcc_ldz00(BgL_arg1575z00_321);
					}
					{	/* Cc/ld.scm 280 */
						obj_t BgL_list1562z00_317;

						{	/* Cc/ld.scm 280 */
							obj_t BgL_arg1564z00_318;

							{	/* Cc/ld.scm 280 */
								obj_t BgL_arg1565z00_319;

								{	/* Cc/ld.scm 280 */
									obj_t BgL_arg1573z00_320;

									BgL_arg1573z00_320 =
										MAKE_YOUNG_PAIR(BgL_arg1561z00_316, BNIL);
									BgL_arg1565z00_319 =
										MAKE_YOUNG_PAIR(BGl_string2736z00zzcc_ldz00,
										BgL_arg1573z00_320);
								}
								BgL_arg1564z00_318 =
									MAKE_YOUNG_PAIR(BgL_arg1558z00_315, BgL_arg1565z00_319);
							}
							BgL_list1562z00_317 =
								MAKE_YOUNG_PAIR(BGl_string2739z00zzcc_ldz00,
								BgL_arg1564z00_318);
						}
						return
							BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_list1562z00_317);
					}
				}
		}

	}



/* &<@anonymous:1972> */
	obj_t BGl_z62zc3z04anonymousza31972ze3ze5zzcc_ldz00(obj_t BgL_envz00_2385)
	{
		{	/* Cc/ld.scm 177 */
			{	/* Cc/ld.scm 177 */
				obj_t BgL_port1048z00_2386;

				BgL_port1048z00_2386 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2385, (int) (((long) 0))));
				return bgl_close_input_port(BgL_port1048z00_2386);
			}
		}

	}



/* win32-ld */
	obj_t BGl_win32zd2ldzd2zzcc_ldz00(obj_t BgL_namez00_13)
	{
		{	/* Cc/ld.scm 316 */
			{	/* Cc/ld.scm 317 */
				obj_t BgL_list1995z00_849;

				{	/* Cc/ld.scm 317 */
					obj_t BgL_arg1996z00_850;

					{	/* Cc/ld.scm 317 */
						obj_t BgL_arg1997z00_851;

						{	/* Cc/ld.scm 317 */
							obj_t BgL_arg1998z00_852;

							BgL_arg1998z00_852 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1997z00_851 =
								MAKE_YOUNG_PAIR(BGl_string2732z00zzcc_ldz00,
								BgL_arg1998z00_852);
						}
						BgL_arg1996z00_850 =
							MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
							BgL_arg1997z00_851);
					}
					BgL_list1995z00_849 =
						MAKE_YOUNG_PAIR(BGl_string2733z00zzcc_ldz00, BgL_arg1996z00_850);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1995z00_849);
			}
			{	/* Cc/ld.scm 319 */
				obj_t BgL_staticpz00_853;

				{	/* Cc/ld.scm 320 */
					bool_t BgL__ortest_1089z00_976;

					if (CBOOL(BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF((
										(long) 16)))))
						{	/* Cc/ld.scm 320 */
							BgL__ortest_1089z00_976 = ((bool_t) 0);
						}
					else
						{	/* Cc/ld.scm 320 */
							BgL__ortest_1089z00_976 = ((bool_t) 1);
						}
					if (BgL__ortest_1089z00_976)
						{	/* Cc/ld.scm 320 */
							BgL_staticpz00_853 = BBOOL(BgL__ortest_1089z00_976);
						}
					else
						{	/* Cc/ld.scm 321 */
							obj_t BgL_port1090z00_977;

							{	/* Cc/ld.scm 321 */
								obj_t BgL_stringz00_1403;

								BgL_stringz00_1403 = BGl_za2ldzd2optionsza2zd2zzengine_paramz00;
								{	/* Cc/ld.scm 321 */
									long BgL_endz00_1405;

									BgL_endz00_1405 = STRING_LENGTH(((obj_t) BgL_stringz00_1403));
									{	/* Cc/ld.scm 321 */

										BgL_port1090z00_977 =
											BGl_openzd2inputzd2stringz00zz__r4_ports_6_10_1z00
											(BgL_stringz00_1403, BINT(((long) 0)),
											BINT(BgL_endz00_1405));
							}}}
							{	/* Cc/ld.scm 321 */
								obj_t BgL_exitd1091z00_978;

								BgL_exitd1091z00_978 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Cc/ld.scm 321 */
									obj_t BgL_zc3z04anonymousza32329ze3z87_2390;

									BgL_zc3z04anonymousza32329ze3z87_2390 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza32329ze3ze5zzcc_ldz00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza32329ze3z87_2390,
										(int) (((long) 0)), BgL_port1090z00_977);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1091z00_978,
										BgL_zc3z04anonymousza32329ze3z87_2390);
									{	/* Cc/ld.scm 321 */
										obj_t BgL_tmp1093z00_980;

										{
											obj_t BgL_iportz00_1022;
											long BgL_lastzd2matchzd2_1023;
											long BgL_forwardz00_1024;
											long BgL_bufposz00_1025;
											obj_t BgL_iportz00_1039;
											long BgL_lastzd2matchzd2_1040;
											long BgL_forwardz00_1041;
											long BgL_bufposz00_1042;
											obj_t BgL_iportz00_1060;
											long BgL_lastzd2matchzd2_1061;
											long BgL_forwardz00_1062;
											long BgL_bufposz00_1063;
											obj_t BgL_iportz00_1076;
											long BgL_lastzd2matchzd2_1077;
											long BgL_forwardz00_1078;
											long BgL_bufposz00_1079;
											obj_t BgL_iportz00_1096;
											long BgL_lastzd2matchzd2_1097;
											long BgL_forwardz00_1098;
											long BgL_bufposz00_1099;
											obj_t BgL_iportz00_1116;
											long BgL_lastzd2matchzd2_1117;
											long BgL_forwardz00_1118;
											long BgL_bufposz00_1119;
											obj_t BgL_iportz00_1136;
											long BgL_lastzd2matchzd2_1137;
											long BgL_forwardz00_1138;
											long BgL_bufposz00_1139;
											obj_t BgL_iportz00_1156;
											long BgL_lastzd2matchzd2_1157;
											long BgL_forwardz00_1158;
											long BgL_bufposz00_1159;
											obj_t BgL_iportz00_1176;
											long BgL_lastzd2matchzd2_1177;
											long BgL_forwardz00_1178;
											long BgL_bufposz00_1179;
											obj_t BgL_iportz00_1196;
											long BgL_lastzd2matchzd2_1197;
											long BgL_forwardz00_1198;
											long BgL_bufposz00_1199;
											obj_t BgL_iportz00_1219;
											long BgL_lastzd2matchzd2_1220;
											long BgL_forwardz00_1221;
											long BgL_bufposz00_1222;

											{	/* Cc/ld.scm 321 */
												long BgL_res2687z00_2308;

												BgL_res2687z00_2308 =
													RGC_START_MATCH(BgL_port1090z00_977);
												BgL_res2687z00_2308;
											}
											{	/* Cc/ld.scm 321 */
												long BgL_matchz00_1353;

												{	/* Cc/ld.scm 321 */
													long BgL_arg2327z00_1360;
													long BgL_arg2328z00_1361;

													{	/* Cc/ld.scm 321 */
														long BgL_res2688z00_2310;

														BgL_res2688z00_2310 =
															RGC_BUFFER_FORWARD(BgL_port1090z00_977);
														BgL_arg2327z00_1360 = BgL_res2688z00_2310;
													}
													{	/* Cc/ld.scm 321 */
														long BgL_res2689z00_2312;

														BgL_res2689z00_2312 =
															RGC_BUFFER_BUFPOS(BgL_port1090z00_977);
														BgL_arg2328z00_1361 = BgL_res2689z00_2312;
													}
													BgL_iportz00_1219 = BgL_port1090z00_977;
													BgL_lastzd2matchzd2_1220 = ((long) 1);
													BgL_forwardz00_1221 = BgL_arg2327z00_1360;
													BgL_bufposz00_1222 = BgL_arg2328z00_1361;
												BgL_zc3z04anonymousza32224ze3z87_1223:
													if ((BgL_forwardz00_1221 == BgL_bufposz00_1222))
														{	/* Cc/ld.scm 321 */
															if (rgc_fill_buffer(BgL_iportz00_1219))
																{	/* Cc/ld.scm 321 */
																	long BgL_arg2227z00_1226;
																	long BgL_arg2228z00_1227;

																	{	/* Cc/ld.scm 321 */
																		long BgL_res2678z00_2287;

																		BgL_res2678z00_2287 =
																			RGC_BUFFER_FORWARD(BgL_iportz00_1219);
																		BgL_arg2227z00_1226 = BgL_res2678z00_2287;
																	}
																	{	/* Cc/ld.scm 321 */
																		long BgL_res2679z00_2289;

																		BgL_res2679z00_2289 =
																			RGC_BUFFER_BUFPOS(BgL_iportz00_1219);
																		BgL_arg2228z00_1227 = BgL_res2679z00_2289;
																	}
																	{
																		long BgL_bufposz00_3364;
																		long BgL_forwardz00_3363;

																		BgL_forwardz00_3363 = BgL_arg2227z00_1226;
																		BgL_bufposz00_3364 = BgL_arg2228z00_1227;
																		BgL_bufposz00_1222 = BgL_bufposz00_3364;
																		BgL_forwardz00_1221 = BgL_forwardz00_3363;
																		goto BgL_zc3z04anonymousza32224ze3z87_1223;
																	}
																}
															else
																{	/* Cc/ld.scm 321 */
																	BgL_matchz00_1353 = BgL_lastzd2matchzd2_1220;
																}
														}
													else
														{	/* Cc/ld.scm 321 */
															int BgL_curz00_1228;

															{	/* Cc/ld.scm 321 */
																int BgL_res2680z00_2292;

																BgL_res2680z00_2292 =
																	RGC_BUFFER_GET_CHAR(BgL_iportz00_1219,
																	BgL_forwardz00_1221);
																BgL_curz00_1228 = BgL_res2680z00_2292;
															}
															{	/* Cc/ld.scm 321 */

																if (((long) (BgL_curz00_1228) == ((long) 45)))
																	{	/* Cc/ld.scm 321 */
																		BgL_iportz00_1039 = BgL_iportz00_1219;
																		BgL_lastzd2matchzd2_1040 =
																			BgL_lastzd2matchzd2_1220;
																		BgL_forwardz00_1041 =
																			(((long) 1) + BgL_forwardz00_1221);
																		BgL_bufposz00_1042 = BgL_bufposz00_1222;
																	BgL_zc3z04anonymousza32110ze3z87_1043:
																		{	/* Cc/ld.scm 321 */
																			long BgL_newzd2matchzd2_1044;

																			{	/* Cc/ld.scm 321 */
																				long BgL_res2562z00_2033;

																				BgL_res2562z00_2033 =
																					RGC_STOP_MATCH(BgL_iportz00_1039,
																					BgL_forwardz00_1041);
																				BgL_res2562z00_2033;
																			}
																			BgL_newzd2matchzd2_1044 = ((long) 1);
																			if (
																				(BgL_forwardz00_1041 ==
																					BgL_bufposz00_1042))
																				{	/* Cc/ld.scm 321 */
																					if (rgc_fill_buffer
																						(BgL_iportz00_1039))
																						{	/* Cc/ld.scm 321 */
																							long BgL_arg2114z00_1047;
																							long BgL_arg2115z00_1048;

																							{	/* Cc/ld.scm 321 */
																								long BgL_res2565z00_2040;

																								BgL_res2565z00_2040 =
																									RGC_BUFFER_FORWARD
																									(BgL_iportz00_1039);
																								BgL_arg2114z00_1047 =
																									BgL_res2565z00_2040;
																							}
																							{	/* Cc/ld.scm 321 */
																								long BgL_res2566z00_2042;

																								BgL_res2566z00_2042 =
																									RGC_BUFFER_BUFPOS
																									(BgL_iportz00_1039);
																								BgL_arg2115z00_1048 =
																									BgL_res2566z00_2042;
																							}
																							{
																								long BgL_bufposz00_3377;
																								long BgL_forwardz00_3376;

																								BgL_forwardz00_3376 =
																									BgL_arg2114z00_1047;
																								BgL_bufposz00_3377 =
																									BgL_arg2115z00_1048;
																								BgL_bufposz00_1042 =
																									BgL_bufposz00_3377;
																								BgL_forwardz00_1041 =
																									BgL_forwardz00_3376;
																								goto
																									BgL_zc3z04anonymousza32110ze3z87_1043;
																							}
																						}
																					else
																						{	/* Cc/ld.scm 321 */
																							BgL_matchz00_1353 =
																								BgL_newzd2matchzd2_1044;
																						}
																				}
																			else
																				{	/* Cc/ld.scm 321 */
																					int BgL_curz00_1049;

																					{	/* Cc/ld.scm 321 */
																						int BgL_res2567z00_2045;

																						BgL_res2567z00_2045 =
																							RGC_BUFFER_GET_CHAR
																							(BgL_iportz00_1039,
																							BgL_forwardz00_1041);
																						BgL_curz00_1049 =
																							BgL_res2567z00_2045;
																					}
																					{	/* Cc/ld.scm 321 */

																						if (
																							((long) (BgL_curz00_1049) ==
																								((long) 115)))
																							{	/* Cc/ld.scm 321 */
																								BgL_iportz00_1096 =
																									BgL_iportz00_1039;
																								BgL_lastzd2matchzd2_1097 =
																									BgL_newzd2matchzd2_1044;
																								BgL_forwardz00_1098 =
																									(((long) 1) +
																									BgL_forwardz00_1041);
																								BgL_bufposz00_1099 =
																									BgL_bufposz00_1042;
																							BgL_zc3z04anonymousza32147ze3z87_1100:
																								if (
																									(BgL_forwardz00_1098 ==
																										BgL_bufposz00_1099))
																									{	/* Cc/ld.scm 321 */
																										if (rgc_fill_buffer
																											(BgL_iportz00_1096))
																											{	/* Cc/ld.scm 321 */
																												long
																													BgL_arg2150z00_1103;
																												long
																													BgL_arg2152z00_1104;
																												{	/* Cc/ld.scm 321 */
																													long
																														BgL_res2601z00_2118;
																													BgL_res2601z00_2118 =
																														RGC_BUFFER_FORWARD
																														(BgL_iportz00_1096);
																													BgL_arg2150z00_1103 =
																														BgL_res2601z00_2118;
																												}
																												{	/* Cc/ld.scm 321 */
																													long
																														BgL_res2602z00_2120;
																													BgL_res2602z00_2120 =
																														RGC_BUFFER_BUFPOS
																														(BgL_iportz00_1096);
																													BgL_arg2152z00_1104 =
																														BgL_res2602z00_2120;
																												}
																												{
																													long
																														BgL_bufposz00_3389;
																													long
																														BgL_forwardz00_3388;
																													BgL_forwardz00_3388 =
																														BgL_arg2150z00_1103;
																													BgL_bufposz00_3389 =
																														BgL_arg2152z00_1104;
																													BgL_bufposz00_1099 =
																														BgL_bufposz00_3389;
																													BgL_forwardz00_1098 =
																														BgL_forwardz00_3388;
																													goto
																														BgL_zc3z04anonymousza32147ze3z87_1100;
																												}
																											}
																										else
																											{	/* Cc/ld.scm 321 */
																												BgL_matchz00_1353 =
																													BgL_lastzd2matchzd2_1097;
																											}
																									}
																								else
																									{	/* Cc/ld.scm 321 */
																										int BgL_curz00_1105;

																										{	/* Cc/ld.scm 321 */
																											int BgL_res2603z00_2123;

																											BgL_res2603z00_2123 =
																												RGC_BUFFER_GET_CHAR
																												(BgL_iportz00_1096,
																												BgL_forwardz00_1098);
																											BgL_curz00_1105 =
																												BgL_res2603z00_2123;
																										}
																										{	/* Cc/ld.scm 321 */

																											if (
																												((long)
																													(BgL_curz00_1105) ==
																													((long) 116)))
																												{	/* Cc/ld.scm 321 */
																													BgL_iportz00_1116 =
																														BgL_iportz00_1096;
																													BgL_lastzd2matchzd2_1117
																														=
																														BgL_lastzd2matchzd2_1097;
																													BgL_forwardz00_1118 =
																														(((long) 1) +
																														BgL_forwardz00_1098);
																													BgL_bufposz00_1119 =
																														BgL_bufposz00_1099;
																												BgL_zc3z04anonymousza32161ze3z87_1120:
																													if (
																														(BgL_forwardz00_1118
																															==
																															BgL_bufposz00_1119))
																														{	/* Cc/ld.scm 321 */
																															if (rgc_fill_buffer(BgL_iportz00_1116))
																																{	/* Cc/ld.scm 321 */
																																	long
																																		BgL_arg2164z00_1123;
																																	long
																																		BgL_arg2165z00_1124;
																																	{	/* Cc/ld.scm 321 */
																																		long
																																			BgL_res2614z00_2146;
																																		BgL_res2614z00_2146
																																			=
																																			RGC_BUFFER_FORWARD
																																			(BgL_iportz00_1116);
																																		BgL_arg2164z00_1123
																																			=
																																			BgL_res2614z00_2146;
																																	}
																																	{	/* Cc/ld.scm 321 */
																																		long
																																			BgL_res2615z00_2148;
																																		BgL_res2615z00_2148
																																			=
																																			RGC_BUFFER_BUFPOS
																																			(BgL_iportz00_1116);
																																		BgL_arg2165z00_1124
																																			=
																																			BgL_res2615z00_2148;
																																	}
																																	{
																																		long
																																			BgL_bufposz00_3401;
																																		long
																																			BgL_forwardz00_3400;
																																		BgL_forwardz00_3400
																																			=
																																			BgL_arg2164z00_1123;
																																		BgL_bufposz00_3401
																																			=
																																			BgL_arg2165z00_1124;
																																		BgL_bufposz00_1119
																																			=
																																			BgL_bufposz00_3401;
																																		BgL_forwardz00_1118
																																			=
																																			BgL_forwardz00_3400;
																																		goto
																																			BgL_zc3z04anonymousza32161ze3z87_1120;
																																	}
																																}
																															else
																																{	/* Cc/ld.scm 321 */
																																	BgL_matchz00_1353
																																		=
																																		BgL_lastzd2matchzd2_1117;
																																}
																														}
																													else
																														{	/* Cc/ld.scm 321 */
																															int
																																BgL_curz00_1125;
																															{	/* Cc/ld.scm 321 */
																																int
																																	BgL_res2616z00_2151;
																																BgL_res2616z00_2151
																																	=
																																	RGC_BUFFER_GET_CHAR
																																	(BgL_iportz00_1116,
																																	BgL_forwardz00_1118);
																																BgL_curz00_1125
																																	=
																																	BgL_res2616z00_2151;
																															}
																															{	/* Cc/ld.scm 321 */

																																if (
																																	((long)
																																		(BgL_curz00_1125)
																																		==
																																		((long)
																																			97)))
																																	{	/* Cc/ld.scm 321 */
																																		BgL_iportz00_1136
																																			=
																																			BgL_iportz00_1116;
																																		BgL_lastzd2matchzd2_1137
																																			=
																																			BgL_lastzd2matchzd2_1117;
																																		BgL_forwardz00_1138
																																			=
																																			(((long)
																																				1) +
																																			BgL_forwardz00_1118);
																																		BgL_bufposz00_1139
																																			=
																																			BgL_bufposz00_1119;
																																	BgL_zc3z04anonymousza32174ze3z87_1140:
																																		if (
																																			(BgL_forwardz00_1138
																																				==
																																				BgL_bufposz00_1139))
																																			{	/* Cc/ld.scm 321 */
																																				if (rgc_fill_buffer(BgL_iportz00_1136))
																																					{	/* Cc/ld.scm 321 */
																																						long
																																							BgL_arg2177z00_1143;
																																						long
																																							BgL_arg2178z00_1144;
																																						{	/* Cc/ld.scm 321 */
																																							long
																																								BgL_res2627z00_2174;
																																							BgL_res2627z00_2174
																																								=
																																								RGC_BUFFER_FORWARD
																																								(BgL_iportz00_1136);
																																							BgL_arg2177z00_1143
																																								=
																																								BgL_res2627z00_2174;
																																						}
																																						{	/* Cc/ld.scm 321 */
																																							long
																																								BgL_res2628z00_2176;
																																							BgL_res2628z00_2176
																																								=
																																								RGC_BUFFER_BUFPOS
																																								(BgL_iportz00_1136);
																																							BgL_arg2178z00_1144
																																								=
																																								BgL_res2628z00_2176;
																																						}
																																						{
																																							long
																																								BgL_bufposz00_3413;
																																							long
																																								BgL_forwardz00_3412;
																																							BgL_forwardz00_3412
																																								=
																																								BgL_arg2177z00_1143;
																																							BgL_bufposz00_3413
																																								=
																																								BgL_arg2178z00_1144;
																																							BgL_bufposz00_1139
																																								=
																																								BgL_bufposz00_3413;
																																							BgL_forwardz00_1138
																																								=
																																								BgL_forwardz00_3412;
																																							goto
																																								BgL_zc3z04anonymousza32174ze3z87_1140;
																																						}
																																					}
																																				else
																																					{	/* Cc/ld.scm 321 */
																																						BgL_matchz00_1353
																																							=
																																							BgL_lastzd2matchzd2_1137;
																																					}
																																			}
																																		else
																																			{	/* Cc/ld.scm 321 */
																																				int
																																					BgL_curz00_1145;
																																				{	/* Cc/ld.scm 321 */
																																					int
																																						BgL_res2629z00_2179;
																																					BgL_res2629z00_2179
																																						=
																																						RGC_BUFFER_GET_CHAR
																																						(BgL_iportz00_1136,
																																						BgL_forwardz00_1138);
																																					BgL_curz00_1145
																																						=
																																						BgL_res2629z00_2179;
																																				}
																																				{	/* Cc/ld.scm 321 */

																																					if (
																																						((long) (BgL_curz00_1145) == ((long) 116)))
																																						{	/* Cc/ld.scm 321 */
																																							BgL_iportz00_1156
																																								=
																																								BgL_iportz00_1136;
																																							BgL_lastzd2matchzd2_1157
																																								=
																																								BgL_lastzd2matchzd2_1137;
																																							BgL_forwardz00_1158
																																								=
																																								(
																																								((long) 1) + BgL_forwardz00_1138);
																																							BgL_bufposz00_1159
																																								=
																																								BgL_bufposz00_1139;
																																						BgL_zc3z04anonymousza32187ze3z87_1160:
																																							if ((BgL_forwardz00_1158 == BgL_bufposz00_1159))
																																								{	/* Cc/ld.scm 321 */
																																									if (rgc_fill_buffer(BgL_iportz00_1156))
																																										{	/* Cc/ld.scm 321 */
																																											long
																																												BgL_arg2190z00_1163;
																																											long
																																												BgL_arg2191z00_1164;
																																											{	/* Cc/ld.scm 321 */
																																												long
																																													BgL_res2640z00_2202;
																																												BgL_res2640z00_2202
																																													=
																																													RGC_BUFFER_FORWARD
																																													(BgL_iportz00_1156);
																																												BgL_arg2190z00_1163
																																													=
																																													BgL_res2640z00_2202;
																																											}
																																											{	/* Cc/ld.scm 321 */
																																												long
																																													BgL_res2641z00_2204;
																																												BgL_res2641z00_2204
																																													=
																																													RGC_BUFFER_BUFPOS
																																													(BgL_iportz00_1156);
																																												BgL_arg2191z00_1164
																																													=
																																													BgL_res2641z00_2204;
																																											}
																																											{
																																												long
																																													BgL_bufposz00_3425;
																																												long
																																													BgL_forwardz00_3424;
																																												BgL_forwardz00_3424
																																													=
																																													BgL_arg2190z00_1163;
																																												BgL_bufposz00_3425
																																													=
																																													BgL_arg2191z00_1164;
																																												BgL_bufposz00_1159
																																													=
																																													BgL_bufposz00_3425;
																																												BgL_forwardz00_1158
																																													=
																																													BgL_forwardz00_3424;
																																												goto
																																													BgL_zc3z04anonymousza32187ze3z87_1160;
																																											}
																																										}
																																									else
																																										{	/* Cc/ld.scm 321 */
																																											BgL_matchz00_1353
																																												=
																																												BgL_lastzd2matchzd2_1157;
																																										}
																																								}
																																							else
																																								{	/* Cc/ld.scm 321 */
																																									int
																																										BgL_curz00_1165;
																																									{	/* Cc/ld.scm 321 */
																																										int
																																											BgL_res2642z00_2207;
																																										BgL_res2642z00_2207
																																											=
																																											RGC_BUFFER_GET_CHAR
																																											(BgL_iportz00_1156,
																																											BgL_forwardz00_1158);
																																										BgL_curz00_1165
																																											=
																																											BgL_res2642z00_2207;
																																									}
																																									{	/* Cc/ld.scm 321 */

																																										if (((long) (BgL_curz00_1165) == ((long) 105)))
																																											{	/* Cc/ld.scm 321 */
																																												BgL_iportz00_1176
																																													=
																																													BgL_iportz00_1156;
																																												BgL_lastzd2matchzd2_1177
																																													=
																																													BgL_lastzd2matchzd2_1157;
																																												BgL_forwardz00_1178
																																													=
																																													(
																																													((long) 1) + BgL_forwardz00_1158);
																																												BgL_bufposz00_1179
																																													=
																																													BgL_bufposz00_1159;
																																											BgL_zc3z04anonymousza32200ze3z87_1180:
																																												if ((BgL_forwardz00_1178 == BgL_bufposz00_1179))
																																													{	/* Cc/ld.scm 321 */
																																														if (rgc_fill_buffer(BgL_iportz00_1176))
																																															{	/* Cc/ld.scm 321 */
																																																long
																																																	BgL_arg2203z00_1183;
																																																long
																																																	BgL_arg2204z00_1184;
																																																{	/* Cc/ld.scm 321 */
																																																	long
																																																		BgL_res2653z00_2230;
																																																	BgL_res2653z00_2230
																																																		=
																																																		RGC_BUFFER_FORWARD
																																																		(BgL_iportz00_1176);
																																																	BgL_arg2203z00_1183
																																																		=
																																																		BgL_res2653z00_2230;
																																																}
																																																{	/* Cc/ld.scm 321 */
																																																	long
																																																		BgL_res2654z00_2232;
																																																	BgL_res2654z00_2232
																																																		=
																																																		RGC_BUFFER_BUFPOS
																																																		(BgL_iportz00_1176);
																																																	BgL_arg2204z00_1184
																																																		=
																																																		BgL_res2654z00_2232;
																																																}
																																																{
																																																	long
																																																		BgL_bufposz00_3437;
																																																	long
																																																		BgL_forwardz00_3436;
																																																	BgL_forwardz00_3436
																																																		=
																																																		BgL_arg2203z00_1183;
																																																	BgL_bufposz00_3437
																																																		=
																																																		BgL_arg2204z00_1184;
																																																	BgL_bufposz00_1179
																																																		=
																																																		BgL_bufposz00_3437;
																																																	BgL_forwardz00_1178
																																																		=
																																																		BgL_forwardz00_3436;
																																																	goto
																																																		BgL_zc3z04anonymousza32200ze3z87_1180;
																																																}
																																															}
																																														else
																																															{	/* Cc/ld.scm 321 */
																																																BgL_matchz00_1353
																																																	=
																																																	BgL_lastzd2matchzd2_1177;
																																															}
																																													}
																																												else
																																													{	/* Cc/ld.scm 321 */
																																														int
																																															BgL_curz00_1185;
																																														{	/* Cc/ld.scm 321 */
																																															int
																																																BgL_res2655z00_2235;
																																															BgL_res2655z00_2235
																																																=
																																																RGC_BUFFER_GET_CHAR
																																																(BgL_iportz00_1176,
																																																BgL_forwardz00_1178);
																																															BgL_curz00_1185
																																																=
																																																BgL_res2655z00_2235;
																																														}
																																														{	/* Cc/ld.scm 321 */

																																															if (((long) (BgL_curz00_1185) == ((long) 99)))
																																																{	/* Cc/ld.scm 321 */
																																																	BgL_iportz00_1196
																																																		=
																																																		BgL_iportz00_1176;
																																																	BgL_lastzd2matchzd2_1197
																																																		=
																																																		BgL_lastzd2matchzd2_1177;
																																																	BgL_forwardz00_1198
																																																		=
																																																		(
																																																		((long) 1) + BgL_forwardz00_1178);
																																																	BgL_bufposz00_1199
																																																		=
																																																		BgL_bufposz00_1179;
																																																BgL_zc3z04anonymousza32213ze3z87_1200:
																																																	{	/* Cc/ld.scm 321 */
																																																		long
																																																			BgL_newzd2matchzd2_1201;
																																																		{	/* Cc/ld.scm 321 */
																																																			long
																																																				BgL_res2664z00_2254;
																																																			BgL_res2664z00_2254
																																																				=
																																																				RGC_STOP_MATCH
																																																				(BgL_iportz00_1196,
																																																				BgL_forwardz00_1198);
																																																			BgL_res2664z00_2254;
																																																		}
																																																		BgL_newzd2matchzd2_1201
																																																			=
																																																			(
																																																			(long)
																																																			0);
																																																		if ((BgL_forwardz00_1198 == BgL_bufposz00_1199))
																																																			{	/* Cc/ld.scm 321 */
																																																				if (rgc_fill_buffer(BgL_iportz00_1196))
																																																					{	/* Cc/ld.scm 321 */
																																																						long
																																																							BgL_arg2216z00_1204;
																																																						long
																																																							BgL_arg2217z00_1205;
																																																						{	/* Cc/ld.scm 321 */
																																																							long
																																																								BgL_res2667z00_2261;
																																																							BgL_res2667z00_2261
																																																								=
																																																								RGC_BUFFER_FORWARD
																																																								(BgL_iportz00_1196);
																																																							BgL_arg2216z00_1204
																																																								=
																																																								BgL_res2667z00_2261;
																																																						}
																																																						{	/* Cc/ld.scm 321 */
																																																							long
																																																								BgL_res2668z00_2263;
																																																							BgL_res2668z00_2263
																																																								=
																																																								RGC_BUFFER_BUFPOS
																																																								(BgL_iportz00_1196);
																																																							BgL_arg2217z00_1205
																																																								=
																																																								BgL_res2668z00_2263;
																																																						}
																																																						{
																																																							long
																																																								BgL_bufposz00_3450;
																																																							long
																																																								BgL_forwardz00_3449;
																																																							BgL_forwardz00_3449
																																																								=
																																																								BgL_arg2216z00_1204;
																																																							BgL_bufposz00_3450
																																																								=
																																																								BgL_arg2217z00_1205;
																																																							BgL_bufposz00_1199
																																																								=
																																																								BgL_bufposz00_3450;
																																																							BgL_forwardz00_1198
																																																								=
																																																								BgL_forwardz00_3449;
																																																							goto
																																																								BgL_zc3z04anonymousza32213ze3z87_1200;
																																																						}
																																																					}
																																																				else
																																																					{	/* Cc/ld.scm 321 */
																																																						BgL_matchz00_1353
																																																							=
																																																							BgL_newzd2matchzd2_1201;
																																																					}
																																																			}
																																																		else
																																																			{	/* Cc/ld.scm 321 */
																																																				int
																																																					BgL_curz00_1206;
																																																				{	/* Cc/ld.scm 321 */
																																																					int
																																																						BgL_res2669z00_2266;
																																																					BgL_res2669z00_2266
																																																						=
																																																						RGC_BUFFER_GET_CHAR
																																																						(BgL_iportz00_1196,
																																																						BgL_forwardz00_1198);
																																																					BgL_curz00_1206
																																																						=
																																																						BgL_res2669z00_2266;
																																																				}
																																																				{	/* Cc/ld.scm 321 */

																																																					if (((long) (BgL_curz00_1206) == ((long) 45)))
																																																						{	/* Cc/ld.scm 321 */
																																																							BgL_iportz00_1076
																																																								=
																																																								BgL_iportz00_1196;
																																																							BgL_lastzd2matchzd2_1077
																																																								=
																																																								BgL_newzd2matchzd2_1201;
																																																							BgL_forwardz00_1078
																																																								=
																																																								(
																																																								((long) 1) + BgL_forwardz00_1198);
																																																							BgL_bufposz00_1079
																																																								=
																																																								BgL_bufposz00_1199;
																																																						BgL_zc3z04anonymousza32134ze3z87_1080:
																																																							if ((BgL_forwardz00_1078 == BgL_bufposz00_1079))
																																																								{	/* Cc/ld.scm 321 */
																																																									if (rgc_fill_buffer(BgL_iportz00_1076))
																																																										{	/* Cc/ld.scm 321 */
																																																											long
																																																												BgL_arg2137z00_1083;
																																																											long
																																																												BgL_arg2138z00_1084;
																																																											{	/* Cc/ld.scm 321 */
																																																												long
																																																													BgL_res2588z00_2090;
																																																												BgL_res2588z00_2090
																																																													=
																																																													RGC_BUFFER_FORWARD
																																																													(BgL_iportz00_1076);
																																																												BgL_arg2137z00_1083
																																																													=
																																																													BgL_res2588z00_2090;
																																																											}
																																																											{	/* Cc/ld.scm 321 */
																																																												long
																																																													BgL_res2589z00_2092;
																																																												BgL_res2589z00_2092
																																																													=
																																																													RGC_BUFFER_BUFPOS
																																																													(BgL_iportz00_1076);
																																																												BgL_arg2138z00_1084
																																																													=
																																																													BgL_res2589z00_2092;
																																																											}
																																																											{
																																																												long
																																																													BgL_bufposz00_3462;
																																																												long
																																																													BgL_forwardz00_3461;
																																																												BgL_forwardz00_3461
																																																													=
																																																													BgL_arg2137z00_1083;
																																																												BgL_bufposz00_3462
																																																													=
																																																													BgL_arg2138z00_1084;
																																																												BgL_bufposz00_1079
																																																													=
																																																													BgL_bufposz00_3462;
																																																												BgL_forwardz00_1078
																																																													=
																																																													BgL_forwardz00_3461;
																																																												goto
																																																													BgL_zc3z04anonymousza32134ze3z87_1080;
																																																											}
																																																										}
																																																									else
																																																										{	/* Cc/ld.scm 321 */
																																																											BgL_matchz00_1353
																																																												=
																																																												BgL_lastzd2matchzd2_1077;
																																																										}
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 321 */
																																																									int
																																																										BgL_curz00_1085;
																																																									{	/* Cc/ld.scm 321 */
																																																										int
																																																											BgL_res2590z00_2095;
																																																										BgL_res2590z00_2095
																																																											=
																																																											RGC_BUFFER_GET_CHAR
																																																											(BgL_iportz00_1076,
																																																											BgL_forwardz00_1078);
																																																										BgL_curz00_1085
																																																											=
																																																											BgL_res2590z00_2095;
																																																									}
																																																									{	/* Cc/ld.scm 321 */

																																																										if (((long) (BgL_curz00_1085) == ((long) 115)))
																																																											{
																																																												long
																																																													BgL_bufposz00_3471;
																																																												long
																																																													BgL_forwardz00_3469;
																																																												long
																																																													BgL_lastzd2matchzd2_3468;
																																																												obj_t
																																																													BgL_iportz00_3467;
																																																												BgL_iportz00_3467
																																																													=
																																																													BgL_iportz00_1076;
																																																												BgL_lastzd2matchzd2_3468
																																																													=
																																																													BgL_lastzd2matchzd2_1077;
																																																												BgL_forwardz00_3469
																																																													=
																																																													(
																																																													((long) 1) + BgL_forwardz00_1078);
																																																												BgL_bufposz00_3471
																																																													=
																																																													BgL_bufposz00_1079;
																																																												BgL_bufposz00_1099
																																																													=
																																																													BgL_bufposz00_3471;
																																																												BgL_forwardz00_1098
																																																													=
																																																													BgL_forwardz00_3469;
																																																												BgL_lastzd2matchzd2_1097
																																																													=
																																																													BgL_lastzd2matchzd2_3468;
																																																												BgL_iportz00_1096
																																																													=
																																																													BgL_iportz00_3467;
																																																												goto
																																																													BgL_zc3z04anonymousza32147ze3z87_1100;
																																																											}
																																																										else
																																																											{	/* Cc/ld.scm 321 */
																																																												if (((long) (BgL_curz00_1085) == ((long) 45)))
																																																													{
																																																														long
																																																															BgL_forwardz00_3475;
																																																														BgL_forwardz00_3475
																																																															=
																																																															(
																																																															((long) 1) + BgL_forwardz00_1078);
																																																														BgL_forwardz00_1078
																																																															=
																																																															BgL_forwardz00_3475;
																																																														goto
																																																															BgL_zc3z04anonymousza32134ze3z87_1080;
																																																													}
																																																												else
																																																													{	/* Cc/ld.scm 321 */
																																																														bool_t
																																																															BgL_test2960z00_3477;
																																																														if (((long) (BgL_curz00_1085) == ((long) 10)))
																																																															{	/* Cc/ld.scm 321 */
																																																																BgL_test2960z00_3477
																																																																	=
																																																																	(
																																																																	(bool_t)
																																																																	1);
																																																															}
																																																														else
																																																															{	/* Cc/ld.scm 321 */
																																																																if (((long) (BgL_curz00_1085) == ((long) 45)))
																																																																	{	/* Cc/ld.scm 321 */
																																																																		BgL_test2960z00_3477
																																																																			=
																																																																			(
																																																																			(bool_t)
																																																																			1);
																																																																	}
																																																																else
																																																																	{	/* Cc/ld.scm 321 */
																																																																		BgL_test2960z00_3477
																																																																			=
																																																																			(
																																																																			(long)
																																																																			(BgL_curz00_1085)
																																																																			==
																																																																			((long) 115));
																																																															}}
																																																														if (BgL_test2960z00_3477)
																																																															{	/* Cc/ld.scm 321 */
																																																																BgL_matchz00_1353
																																																																	=
																																																																	BgL_lastzd2matchzd2_1077;
																																																															}
																																																														else
																																																															{	/* Cc/ld.scm 321 */
																																																																BgL_iportz00_1060
																																																																	=
																																																																	BgL_iportz00_1076;
																																																																BgL_lastzd2matchzd2_1061
																																																																	=
																																																																	BgL_lastzd2matchzd2_1077;
																																																																BgL_forwardz00_1062
																																																																	=
																																																																	(
																																																																	((long) 1) + BgL_forwardz00_1078);
																																																																BgL_bufposz00_1063
																																																																	=
																																																																	BgL_bufposz00_1079;
																																																															BgL_zc3z04anonymousza32124ze3z87_1064:
																																																																if ((BgL_forwardz00_1062 == BgL_bufposz00_1063))
																																																																	{	/* Cc/ld.scm 321 */
																																																																		if (rgc_fill_buffer(BgL_iportz00_1060))
																																																																			{	/* Cc/ld.scm 321 */
																																																																				long
																																																																					BgL_arg2127z00_1067;
																																																																				long
																																																																					BgL_arg2128z00_1068;
																																																																				{	/* Cc/ld.scm 321 */
																																																																					long
																																																																						BgL_res2578z00_2068;
																																																																					BgL_res2578z00_2068
																																																																						=
																																																																						RGC_BUFFER_FORWARD
																																																																						(BgL_iportz00_1060);
																																																																					BgL_arg2127z00_1067
																																																																						=
																																																																						BgL_res2578z00_2068;
																																																																				}
																																																																				{	/* Cc/ld.scm 321 */
																																																																					long
																																																																						BgL_res2579z00_2070;
																																																																					BgL_res2579z00_2070
																																																																						=
																																																																						RGC_BUFFER_BUFPOS
																																																																						(BgL_iportz00_1060);
																																																																					BgL_arg2128z00_1068
																																																																						=
																																																																						BgL_res2579z00_2070;
																																																																				}
																																																																				{
																																																																					long
																																																																						BgL_bufposz00_3493;
																																																																					long
																																																																						BgL_forwardz00_3492;
																																																																					BgL_forwardz00_3492
																																																																						=
																																																																						BgL_arg2127z00_1067;
																																																																					BgL_bufposz00_3493
																																																																						=
																																																																						BgL_arg2128z00_1068;
																																																																					BgL_bufposz00_1063
																																																																						=
																																																																						BgL_bufposz00_3493;
																																																																					BgL_forwardz00_1062
																																																																						=
																																																																						BgL_forwardz00_3492;
																																																																					goto
																																																																						BgL_zc3z04anonymousza32124ze3z87_1064;
																																																																				}
																																																																			}
																																																																		else
																																																																			{	/* Cc/ld.scm 321 */
																																																																				BgL_matchz00_1353
																																																																					=
																																																																					BgL_lastzd2matchzd2_1061;
																																																																			}
																																																																	}
																																																																else
																																																																	{	/* Cc/ld.scm 321 */
																																																																		int
																																																																			BgL_curz00_1069;
																																																																		{	/* Cc/ld.scm 321 */
																																																																			int
																																																																				BgL_res2580z00_2073;
																																																																			BgL_res2580z00_2073
																																																																				=
																																																																				RGC_BUFFER_GET_CHAR
																																																																				(BgL_iportz00_1060,
																																																																				BgL_forwardz00_1062);
																																																																			BgL_curz00_1069
																																																																				=
																																																																				BgL_res2580z00_2073;
																																																																		}
																																																																		{	/* Cc/ld.scm 321 */

																																																																			if (((long) (BgL_curz00_1069) == ((long) 45)))
																																																																				{
																																																																					long
																																																																						BgL_bufposz00_3502;
																																																																					long
																																																																						BgL_forwardz00_3500;
																																																																					long
																																																																						BgL_lastzd2matchzd2_3499;
																																																																					obj_t
																																																																						BgL_iportz00_3498;
																																																																					BgL_iportz00_3498
																																																																						=
																																																																						BgL_iportz00_1060;
																																																																					BgL_lastzd2matchzd2_3499
																																																																						=
																																																																						BgL_lastzd2matchzd2_1061;
																																																																					BgL_forwardz00_3500
																																																																						=
																																																																						(
																																																																						((long) 1) + BgL_forwardz00_1062);
																																																																					BgL_bufposz00_3502
																																																																						=
																																																																						BgL_bufposz00_1063;
																																																																					BgL_bufposz00_1079
																																																																						=
																																																																						BgL_bufposz00_3502;
																																																																					BgL_forwardz00_1078
																																																																						=
																																																																						BgL_forwardz00_3500;
																																																																					BgL_lastzd2matchzd2_1077
																																																																						=
																																																																						BgL_lastzd2matchzd2_3499;
																																																																					BgL_iportz00_1076
																																																																						=
																																																																						BgL_iportz00_3498;
																																																																					goto
																																																																						BgL_zc3z04anonymousza32134ze3z87_1080;
																																																																				}
																																																																			else
																																																																				{	/* Cc/ld.scm 321 */
																																																																					bool_t
																																																																						BgL_test2966z00_3503;
																																																																					if (((long) (BgL_curz00_1069) == ((long) 10)))
																																																																						{	/* Cc/ld.scm 321 */
																																																																							BgL_test2966z00_3503
																																																																								=
																																																																								(
																																																																								(bool_t)
																																																																								1);
																																																																						}
																																																																					else
																																																																						{	/* Cc/ld.scm 321 */
																																																																							BgL_test2966z00_3503
																																																																								=
																																																																								(
																																																																								(long)
																																																																								(BgL_curz00_1069)
																																																																								==
																																																																								((long) 45));
																																																																						}
																																																																					if (BgL_test2966z00_3503)
																																																																						{	/* Cc/ld.scm 321 */
																																																																							BgL_matchz00_1353
																																																																								=
																																																																								BgL_lastzd2matchzd2_1061;
																																																																						}
																																																																					else
																																																																						{
																																																																							long
																																																																								BgL_forwardz00_3509;
																																																																							BgL_forwardz00_3509
																																																																								=
																																																																								(
																																																																								((long) 1) + BgL_forwardz00_1062);
																																																																							BgL_forwardz00_1062
																																																																								=
																																																																								BgL_forwardz00_3509;
																																																																							goto
																																																																								BgL_zc3z04anonymousza32124ze3z87_1064;
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
																																																						{	/* Cc/ld.scm 321 */
																																																							bool_t
																																																								BgL_test2968z00_3513;
																																																							if (((long) (BgL_curz00_1206) == ((long) 10)))
																																																								{	/* Cc/ld.scm 321 */
																																																									BgL_test2968z00_3513
																																																										=
																																																										(
																																																										(bool_t)
																																																										1);
																																																								}
																																																							else
																																																								{	/* Cc/ld.scm 321 */
																																																									BgL_test2968z00_3513
																																																										=
																																																										(
																																																										(long)
																																																										(BgL_curz00_1206)
																																																										==
																																																										((long) 45));
																																																								}
																																																							if (BgL_test2968z00_3513)
																																																								{	/* Cc/ld.scm 321 */
																																																									BgL_matchz00_1353
																																																										=
																																																										BgL_newzd2matchzd2_1201;
																																																								}
																																																							else
																																																								{
																																																									long
																																																										BgL_bufposz00_3523;
																																																									long
																																																										BgL_forwardz00_3521;
																																																									long
																																																										BgL_lastzd2matchzd2_3520;
																																																									obj_t
																																																										BgL_iportz00_3519;
																																																									BgL_iportz00_3519
																																																										=
																																																										BgL_iportz00_1196;
																																																									BgL_lastzd2matchzd2_3520
																																																										=
																																																										BgL_newzd2matchzd2_1201;
																																																									BgL_forwardz00_3521
																																																										=
																																																										(
																																																										((long) 1) + BgL_forwardz00_1198);
																																																									BgL_bufposz00_3523
																																																										=
																																																										BgL_bufposz00_1199;
																																																									BgL_bufposz00_1063
																																																										=
																																																										BgL_bufposz00_3523;
																																																									BgL_forwardz00_1062
																																																										=
																																																										BgL_forwardz00_3521;
																																																									BgL_lastzd2matchzd2_1061
																																																										=
																																																										BgL_lastzd2matchzd2_3520;
																																																									BgL_iportz00_1060
																																																										=
																																																										BgL_iportz00_3519;
																																																									goto
																																																										BgL_zc3z04anonymousza32124ze3z87_1064;
																																																								}
																																																						}
																																																				}
																																																			}
																																																	}
																																																}
																																															else
																																																{	/* Cc/ld.scm 321 */
																																																	if (((long) (BgL_curz00_1185) == ((long) 45)))
																																																		{
																																																			long
																																																				BgL_bufposz00_3532;
																																																			long
																																																				BgL_forwardz00_3530;
																																																			long
																																																				BgL_lastzd2matchzd2_3529;
																																																			obj_t
																																																				BgL_iportz00_3528;
																																																			BgL_iportz00_3528
																																																				=
																																																				BgL_iportz00_1176;
																																																			BgL_lastzd2matchzd2_3529
																																																				=
																																																				BgL_lastzd2matchzd2_1177;
																																																			BgL_forwardz00_3530
																																																				=
																																																				(
																																																				((long) 1) + BgL_forwardz00_1178);
																																																			BgL_bufposz00_3532
																																																				=
																																																				BgL_bufposz00_1179;
																																																			BgL_bufposz00_1079
																																																				=
																																																				BgL_bufposz00_3532;
																																																			BgL_forwardz00_1078
																																																				=
																																																				BgL_forwardz00_3530;
																																																			BgL_lastzd2matchzd2_1077
																																																				=
																																																				BgL_lastzd2matchzd2_3529;
																																																			BgL_iportz00_1076
																																																				=
																																																				BgL_iportz00_3528;
																																																			goto
																																																				BgL_zc3z04anonymousza32134ze3z87_1080;
																																																		}
																																																	else
																																																		{	/* Cc/ld.scm 321 */
																																																			bool_t
																																																				BgL_test2971z00_3533;
																																																			if (((long) (BgL_curz00_1185) == ((long) 10)))
																																																				{	/* Cc/ld.scm 321 */
																																																					BgL_test2971z00_3533
																																																						=
																																																						(
																																																						(bool_t)
																																																						1);
																																																				}
																																																			else
																																																				{	/* Cc/ld.scm 321 */
																																																					if (((long) (BgL_curz00_1185) == ((long) 45)))
																																																						{	/* Cc/ld.scm 321 */
																																																							BgL_test2971z00_3533
																																																								=
																																																								(
																																																								(bool_t)
																																																								1);
																																																						}
																																																					else
																																																						{	/* Cc/ld.scm 321 */
																																																							BgL_test2971z00_3533
																																																								=
																																																								(
																																																								(long)
																																																								(BgL_curz00_1185)
																																																								==
																																																								((long) 99));
																																																				}}
																																																			if (BgL_test2971z00_3533)
																																																				{	/* Cc/ld.scm 321 */
																																																					BgL_matchz00_1353
																																																						=
																																																						BgL_lastzd2matchzd2_1177;
																																																				}
																																																			else
																																																				{
																																																					long
																																																						BgL_bufposz00_3546;
																																																					long
																																																						BgL_forwardz00_3544;
																																																					long
																																																						BgL_lastzd2matchzd2_3543;
																																																					obj_t
																																																						BgL_iportz00_3542;
																																																					BgL_iportz00_3542
																																																						=
																																																						BgL_iportz00_1176;
																																																					BgL_lastzd2matchzd2_3543
																																																						=
																																																						BgL_lastzd2matchzd2_1177;
																																																					BgL_forwardz00_3544
																																																						=
																																																						(
																																																						((long) 1) + BgL_forwardz00_1178);
																																																					BgL_bufposz00_3546
																																																						=
																																																						BgL_bufposz00_1179;
																																																					BgL_bufposz00_1063
																																																						=
																																																						BgL_bufposz00_3546;
																																																					BgL_forwardz00_1062
																																																						=
																																																						BgL_forwardz00_3544;
																																																					BgL_lastzd2matchzd2_1061
																																																						=
																																																						BgL_lastzd2matchzd2_3543;
																																																					BgL_iportz00_1060
																																																						=
																																																						BgL_iportz00_3542;
																																																					goto
																																																						BgL_zc3z04anonymousza32124ze3z87_1064;
																																																				}
																																																		}
																																																}
																																														}
																																													}
																																											}
																																										else
																																											{	/* Cc/ld.scm 321 */
																																												if (((long) (BgL_curz00_1165) == ((long) 45)))
																																													{
																																														long
																																															BgL_bufposz00_3555;
																																														long
																																															BgL_forwardz00_3553;
																																														long
																																															BgL_lastzd2matchzd2_3552;
																																														obj_t
																																															BgL_iportz00_3551;
																																														BgL_iportz00_3551
																																															=
																																															BgL_iportz00_1156;
																																														BgL_lastzd2matchzd2_3552
																																															=
																																															BgL_lastzd2matchzd2_1157;
																																														BgL_forwardz00_3553
																																															=
																																															(
																																															((long) 1) + BgL_forwardz00_1158);
																																														BgL_bufposz00_3555
																																															=
																																															BgL_bufposz00_1159;
																																														BgL_bufposz00_1079
																																															=
																																															BgL_bufposz00_3555;
																																														BgL_forwardz00_1078
																																															=
																																															BgL_forwardz00_3553;
																																														BgL_lastzd2matchzd2_1077
																																															=
																																															BgL_lastzd2matchzd2_3552;
																																														BgL_iportz00_1076
																																															=
																																															BgL_iportz00_3551;
																																														goto
																																															BgL_zc3z04anonymousza32134ze3z87_1080;
																																													}
																																												else
																																													{	/* Cc/ld.scm 321 */
																																														bool_t
																																															BgL_test2975z00_3556;
																																														if (((long) (BgL_curz00_1165) == ((long) 10)))
																																															{	/* Cc/ld.scm 321 */
																																																BgL_test2975z00_3556
																																																	=
																																																	(
																																																	(bool_t)
																																																	1);
																																															}
																																														else
																																															{	/* Cc/ld.scm 321 */
																																																if (((long) (BgL_curz00_1165) == ((long) 45)))
																																																	{	/* Cc/ld.scm 321 */
																																																		BgL_test2975z00_3556
																																																			=
																																																			(
																																																			(bool_t)
																																																			1);
																																																	}
																																																else
																																																	{	/* Cc/ld.scm 321 */
																																																		BgL_test2975z00_3556
																																																			=
																																																			(
																																																			(long)
																																																			(BgL_curz00_1165)
																																																			==
																																																			((long) 105));
																																															}}
																																														if (BgL_test2975z00_3556)
																																															{	/* Cc/ld.scm 321 */
																																																BgL_matchz00_1353
																																																	=
																																																	BgL_lastzd2matchzd2_1157;
																																															}
																																														else
																																															{
																																																long
																																																	BgL_bufposz00_3569;
																																																long
																																																	BgL_forwardz00_3567;
																																																long
																																																	BgL_lastzd2matchzd2_3566;
																																																obj_t
																																																	BgL_iportz00_3565;
																																																BgL_iportz00_3565
																																																	=
																																																	BgL_iportz00_1156;
																																																BgL_lastzd2matchzd2_3566
																																																	=
																																																	BgL_lastzd2matchzd2_1157;
																																																BgL_forwardz00_3567
																																																	=
																																																	(
																																																	((long) 1) + BgL_forwardz00_1158);
																																																BgL_bufposz00_3569
																																																	=
																																																	BgL_bufposz00_1159;
																																																BgL_bufposz00_1063
																																																	=
																																																	BgL_bufposz00_3569;
																																																BgL_forwardz00_1062
																																																	=
																																																	BgL_forwardz00_3567;
																																																BgL_lastzd2matchzd2_1061
																																																	=
																																																	BgL_lastzd2matchzd2_3566;
																																																BgL_iportz00_1060
																																																	=
																																																	BgL_iportz00_3565;
																																																goto
																																																	BgL_zc3z04anonymousza32124ze3z87_1064;
																																															}
																																													}
																																											}
																																									}
																																								}
																																						}
																																					else
																																						{	/* Cc/ld.scm 321 */
																																							if (((long) (BgL_curz00_1145) == ((long) 45)))
																																								{
																																									long
																																										BgL_bufposz00_3578;
																																									long
																																										BgL_forwardz00_3576;
																																									long
																																										BgL_lastzd2matchzd2_3575;
																																									obj_t
																																										BgL_iportz00_3574;
																																									BgL_iportz00_3574
																																										=
																																										BgL_iportz00_1136;
																																									BgL_lastzd2matchzd2_3575
																																										=
																																										BgL_lastzd2matchzd2_1137;
																																									BgL_forwardz00_3576
																																										=
																																										(
																																										((long) 1) + BgL_forwardz00_1138);
																																									BgL_bufposz00_3578
																																										=
																																										BgL_bufposz00_1139;
																																									BgL_bufposz00_1079
																																										=
																																										BgL_bufposz00_3578;
																																									BgL_forwardz00_1078
																																										=
																																										BgL_forwardz00_3576;
																																									BgL_lastzd2matchzd2_1077
																																										=
																																										BgL_lastzd2matchzd2_3575;
																																									BgL_iportz00_1076
																																										=
																																										BgL_iportz00_3574;
																																									goto
																																										BgL_zc3z04anonymousza32134ze3z87_1080;
																																								}
																																							else
																																								{	/* Cc/ld.scm 321 */
																																									bool_t
																																										BgL_test2979z00_3579;
																																									if (((long) (BgL_curz00_1145) == ((long) 10)))
																																										{	/* Cc/ld.scm 321 */
																																											BgL_test2979z00_3579
																																												=
																																												(
																																												(bool_t)
																																												1);
																																										}
																																									else
																																										{	/* Cc/ld.scm 321 */
																																											if (((long) (BgL_curz00_1145) == ((long) 45)))
																																												{	/* Cc/ld.scm 321 */
																																													BgL_test2979z00_3579
																																														=
																																														(
																																														(bool_t)
																																														1);
																																												}
																																											else
																																												{	/* Cc/ld.scm 321 */
																																													BgL_test2979z00_3579
																																														=
																																														(
																																														(long)
																																														(BgL_curz00_1145)
																																														==
																																														((long) 116));
																																										}}
																																									if (BgL_test2979z00_3579)
																																										{	/* Cc/ld.scm 321 */
																																											BgL_matchz00_1353
																																												=
																																												BgL_lastzd2matchzd2_1137;
																																										}
																																									else
																																										{
																																											long
																																												BgL_bufposz00_3592;
																																											long
																																												BgL_forwardz00_3590;
																																											long
																																												BgL_lastzd2matchzd2_3589;
																																											obj_t
																																												BgL_iportz00_3588;
																																											BgL_iportz00_3588
																																												=
																																												BgL_iportz00_1136;
																																											BgL_lastzd2matchzd2_3589
																																												=
																																												BgL_lastzd2matchzd2_1137;
																																											BgL_forwardz00_3590
																																												=
																																												(
																																												((long) 1) + BgL_forwardz00_1138);
																																											BgL_bufposz00_3592
																																												=
																																												BgL_bufposz00_1139;
																																											BgL_bufposz00_1063
																																												=
																																												BgL_bufposz00_3592;
																																											BgL_forwardz00_1062
																																												=
																																												BgL_forwardz00_3590;
																																											BgL_lastzd2matchzd2_1061
																																												=
																																												BgL_lastzd2matchzd2_3589;
																																											BgL_iportz00_1060
																																												=
																																												BgL_iportz00_3588;
																																											goto
																																												BgL_zc3z04anonymousza32124ze3z87_1064;
																																										}
																																								}
																																						}
																																				}
																																			}
																																	}
																																else
																																	{	/* Cc/ld.scm 321 */
																																		if (
																																			((long)
																																				(BgL_curz00_1125)
																																				==
																																				((long)
																																					45)))
																																			{
																																				long
																																					BgL_bufposz00_3601;
																																				long
																																					BgL_forwardz00_3599;
																																				long
																																					BgL_lastzd2matchzd2_3598;
																																				obj_t
																																					BgL_iportz00_3597;
																																				BgL_iportz00_3597
																																					=
																																					BgL_iportz00_1116;
																																				BgL_lastzd2matchzd2_3598
																																					=
																																					BgL_lastzd2matchzd2_1117;
																																				BgL_forwardz00_3599
																																					=
																																					(((long) 1) + BgL_forwardz00_1118);
																																				BgL_bufposz00_3601
																																					=
																																					BgL_bufposz00_1119;
																																				BgL_bufposz00_1079
																																					=
																																					BgL_bufposz00_3601;
																																				BgL_forwardz00_1078
																																					=
																																					BgL_forwardz00_3599;
																																				BgL_lastzd2matchzd2_1077
																																					=
																																					BgL_lastzd2matchzd2_3598;
																																				BgL_iportz00_1076
																																					=
																																					BgL_iportz00_3597;
																																				goto
																																					BgL_zc3z04anonymousza32134ze3z87_1080;
																																			}
																																		else
																																			{	/* Cc/ld.scm 321 */
																																				bool_t
																																					BgL_test2983z00_3602;
																																				if ((
																																						(long)
																																						(BgL_curz00_1125)
																																						==
																																						((long) 10)))
																																					{	/* Cc/ld.scm 321 */
																																						BgL_test2983z00_3602
																																							=
																																							(
																																							(bool_t)
																																							1);
																																					}
																																				else
																																					{	/* Cc/ld.scm 321 */
																																						if (
																																							((long) (BgL_curz00_1125) == ((long) 45)))
																																							{	/* Cc/ld.scm 321 */
																																								BgL_test2983z00_3602
																																									=
																																									(
																																									(bool_t)
																																									1);
																																							}
																																						else
																																							{	/* Cc/ld.scm 321 */
																																								BgL_test2983z00_3602
																																									=
																																									(
																																									(long)
																																									(BgL_curz00_1125)
																																									==
																																									((long) 97));
																																					}}
																																				if (BgL_test2983z00_3602)
																																					{	/* Cc/ld.scm 321 */
																																						BgL_matchz00_1353
																																							=
																																							BgL_lastzd2matchzd2_1117;
																																					}
																																				else
																																					{
																																						long
																																							BgL_bufposz00_3615;
																																						long
																																							BgL_forwardz00_3613;
																																						long
																																							BgL_lastzd2matchzd2_3612;
																																						obj_t
																																							BgL_iportz00_3611;
																																						BgL_iportz00_3611
																																							=
																																							BgL_iportz00_1116;
																																						BgL_lastzd2matchzd2_3612
																																							=
																																							BgL_lastzd2matchzd2_1117;
																																						BgL_forwardz00_3613
																																							=
																																							(((long) 1) + BgL_forwardz00_1118);
																																						BgL_bufposz00_3615
																																							=
																																							BgL_bufposz00_1119;
																																						BgL_bufposz00_1063
																																							=
																																							BgL_bufposz00_3615;
																																						BgL_forwardz00_1062
																																							=
																																							BgL_forwardz00_3613;
																																						BgL_lastzd2matchzd2_1061
																																							=
																																							BgL_lastzd2matchzd2_3612;
																																						BgL_iportz00_1060
																																							=
																																							BgL_iportz00_3611;
																																						goto
																																							BgL_zc3z04anonymousza32124ze3z87_1064;
																																					}
																																			}
																																	}
																															}
																														}
																												}
																											else
																												{	/* Cc/ld.scm 321 */
																													if (
																														((long)
																															(BgL_curz00_1105)
																															== ((long) 45)))
																														{
																															long
																																BgL_bufposz00_3624;
																															long
																																BgL_forwardz00_3622;
																															long
																																BgL_lastzd2matchzd2_3621;
																															obj_t
																																BgL_iportz00_3620;
																															BgL_iportz00_3620
																																=
																																BgL_iportz00_1096;
																															BgL_lastzd2matchzd2_3621
																																=
																																BgL_lastzd2matchzd2_1097;
																															BgL_forwardz00_3622
																																=
																																(((long) 1) +
																																BgL_forwardz00_1098);
																															BgL_bufposz00_3624
																																=
																																BgL_bufposz00_1099;
																															BgL_bufposz00_1079
																																=
																																BgL_bufposz00_3624;
																															BgL_forwardz00_1078
																																=
																																BgL_forwardz00_3622;
																															BgL_lastzd2matchzd2_1077
																																=
																																BgL_lastzd2matchzd2_3621;
																															BgL_iportz00_1076
																																=
																																BgL_iportz00_3620;
																															goto
																																BgL_zc3z04anonymousza32134ze3z87_1080;
																														}
																													else
																														{	/* Cc/ld.scm 321 */
																															bool_t
																																BgL_test2987z00_3625;
																															if (((long)
																																	(BgL_curz00_1105)
																																	==
																																	((long) 10)))
																																{	/* Cc/ld.scm 321 */
																																	BgL_test2987z00_3625
																																		=
																																		((bool_t)
																																		1);
																																}
																															else
																																{	/* Cc/ld.scm 321 */
																																	if (
																																		((long)
																																			(BgL_curz00_1105)
																																			==
																																			((long)
																																				45)))
																																		{	/* Cc/ld.scm 321 */
																																			BgL_test2987z00_3625
																																				=
																																				(
																																				(bool_t)
																																				1);
																																		}
																																	else
																																		{	/* Cc/ld.scm 321 */
																																			BgL_test2987z00_3625
																																				=
																																				((long)
																																				(BgL_curz00_1105)
																																				==
																																				((long)
																																					116));
																																}}
																															if (BgL_test2987z00_3625)
																																{	/* Cc/ld.scm 321 */
																																	BgL_matchz00_1353
																																		=
																																		BgL_lastzd2matchzd2_1097;
																																}
																															else
																																{
																																	long
																																		BgL_bufposz00_3638;
																																	long
																																		BgL_forwardz00_3636;
																																	long
																																		BgL_lastzd2matchzd2_3635;
																																	obj_t
																																		BgL_iportz00_3634;
																																	BgL_iportz00_3634
																																		=
																																		BgL_iportz00_1096;
																																	BgL_lastzd2matchzd2_3635
																																		=
																																		BgL_lastzd2matchzd2_1097;
																																	BgL_forwardz00_3636
																																		=
																																		(((long) 1)
																																		+
																																		BgL_forwardz00_1098);
																																	BgL_bufposz00_3638
																																		=
																																		BgL_bufposz00_1099;
																																	BgL_bufposz00_1063
																																		=
																																		BgL_bufposz00_3638;
																																	BgL_forwardz00_1062
																																		=
																																		BgL_forwardz00_3636;
																																	BgL_lastzd2matchzd2_1061
																																		=
																																		BgL_lastzd2matchzd2_3635;
																																	BgL_iportz00_1060
																																		=
																																		BgL_iportz00_3634;
																																	goto
																																		BgL_zc3z04anonymousza32124ze3z87_1064;
																																}
																														}
																												}
																										}
																									}
																							}
																						else
																							{	/* Cc/ld.scm 321 */
																								if (
																									((long) (BgL_curz00_1049) ==
																										((long) 45)))
																									{
																										long BgL_bufposz00_3647;
																										long BgL_forwardz00_3645;
																										long
																											BgL_lastzd2matchzd2_3644;
																										obj_t BgL_iportz00_3643;

																										BgL_iportz00_3643 =
																											BgL_iportz00_1039;
																										BgL_lastzd2matchzd2_3644 =
																											BgL_newzd2matchzd2_1044;
																										BgL_forwardz00_3645 =
																											(((long) 1) +
																											BgL_forwardz00_1041);
																										BgL_bufposz00_3647 =
																											BgL_bufposz00_1042;
																										BgL_bufposz00_1079 =
																											BgL_bufposz00_3647;
																										BgL_forwardz00_1078 =
																											BgL_forwardz00_3645;
																										BgL_lastzd2matchzd2_1077 =
																											BgL_lastzd2matchzd2_3644;
																										BgL_iportz00_1076 =
																											BgL_iportz00_3643;
																										goto
																											BgL_zc3z04anonymousza32134ze3z87_1080;
																									}
																								else
																									{	/* Cc/ld.scm 321 */
																										bool_t BgL_test2991z00_3648;

																										if (
																											((long) (BgL_curz00_1049)
																												== ((long) 10)))
																											{	/* Cc/ld.scm 321 */
																												BgL_test2991z00_3648 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Cc/ld.scm 321 */
																												if (
																													((long)
																														(BgL_curz00_1049) ==
																														((long) 45)))
																													{	/* Cc/ld.scm 321 */
																														BgL_test2991z00_3648
																															= ((bool_t) 1);
																													}
																												else
																													{	/* Cc/ld.scm 321 */
																														BgL_test2991z00_3648
																															=
																															((long)
																															(BgL_curz00_1049)
																															== ((long) 115));
																											}}
																										if (BgL_test2991z00_3648)
																											{	/* Cc/ld.scm 321 */
																												BgL_matchz00_1353 =
																													BgL_newzd2matchzd2_1044;
																											}
																										else
																											{
																												long BgL_bufposz00_3661;
																												long
																													BgL_forwardz00_3659;
																												long
																													BgL_lastzd2matchzd2_3658;
																												obj_t BgL_iportz00_3657;

																												BgL_iportz00_3657 =
																													BgL_iportz00_1039;
																												BgL_lastzd2matchzd2_3658
																													=
																													BgL_newzd2matchzd2_1044;
																												BgL_forwardz00_3659 =
																													(((long) 1) +
																													BgL_forwardz00_1041);
																												BgL_bufposz00_3661 =
																													BgL_bufposz00_1042;
																												BgL_bufposz00_1063 =
																													BgL_bufposz00_3661;
																												BgL_forwardz00_1062 =
																													BgL_forwardz00_3659;
																												BgL_lastzd2matchzd2_1061
																													=
																													BgL_lastzd2matchzd2_3658;
																												BgL_iportz00_1060 =
																													BgL_iportz00_3657;
																												goto
																													BgL_zc3z04anonymousza32124ze3z87_1064;
																											}
																									}
																							}
																					}
																				}
																		}
																	}
																else
																	{	/* Cc/ld.scm 321 */
																		if (
																			((long) (BgL_curz00_1228) == ((long) 10)))
																			{	/* Cc/ld.scm 321 */
																				long BgL_arg2232z00_1232;

																				BgL_arg2232z00_1232 =
																					(((long) 1) + BgL_forwardz00_1221);
																				{	/* Cc/ld.scm 321 */
																					long BgL_newzd2matchzd2_2301;

																					{	/* Cc/ld.scm 321 */
																						long BgL_res2685z00_2304;

																						BgL_res2685z00_2304 =
																							RGC_STOP_MATCH(BgL_iportz00_1219,
																							BgL_arg2232z00_1232);
																						BgL_res2685z00_2304;
																					}
																					BgL_newzd2matchzd2_2301 = ((long) 1);
																					BgL_matchz00_1353 =
																						BgL_newzd2matchzd2_2301;
																			}}
																		else
																			{	/* Cc/ld.scm 321 */
																				BgL_iportz00_1022 = BgL_iportz00_1219;
																				BgL_lastzd2matchzd2_1023 =
																					BgL_lastzd2matchzd2_1220;
																				BgL_forwardz00_1024 =
																					(((long) 1) + BgL_forwardz00_1221);
																				BgL_bufposz00_1025 = BgL_bufposz00_1222;
																			BgL_zc3z04anonymousza32100ze3z87_1026:
																				{	/* Cc/ld.scm 321 */
																					long BgL_newzd2matchzd2_1027;

																					{	/* Cc/ld.scm 321 */
																						long BgL_res2551z00_2008;

																						BgL_res2551z00_2008 =
																							RGC_STOP_MATCH(BgL_iportz00_1022,
																							BgL_forwardz00_1024);
																						BgL_res2551z00_2008;
																					}
																					BgL_newzd2matchzd2_1027 = ((long) 1);
																					if (
																						(BgL_forwardz00_1024 ==
																							BgL_bufposz00_1025))
																						{	/* Cc/ld.scm 321 */
																							if (rgc_fill_buffer
																								(BgL_iportz00_1022))
																								{	/* Cc/ld.scm 321 */
																									long BgL_arg2103z00_1030;
																									long BgL_arg2104z00_1031;

																									{	/* Cc/ld.scm 321 */
																										long BgL_res2554z00_2015;

																										BgL_res2554z00_2015 =
																											RGC_BUFFER_FORWARD
																											(BgL_iportz00_1022);
																										BgL_arg2103z00_1030 =
																											BgL_res2554z00_2015;
																									}
																									{	/* Cc/ld.scm 321 */
																										long BgL_res2555z00_2017;

																										BgL_res2555z00_2017 =
																											RGC_BUFFER_BUFPOS
																											(BgL_iportz00_1022);
																										BgL_arg2104z00_1031 =
																											BgL_res2555z00_2017;
																									}
																									{
																										long BgL_bufposz00_3676;
																										long BgL_forwardz00_3675;

																										BgL_forwardz00_3675 =
																											BgL_arg2103z00_1030;
																										BgL_bufposz00_3676 =
																											BgL_arg2104z00_1031;
																										BgL_bufposz00_1025 =
																											BgL_bufposz00_3676;
																										BgL_forwardz00_1024 =
																											BgL_forwardz00_3675;
																										goto
																											BgL_zc3z04anonymousza32100ze3z87_1026;
																									}
																								}
																							else
																								{	/* Cc/ld.scm 321 */
																									BgL_matchz00_1353 =
																										BgL_newzd2matchzd2_1027;
																								}
																						}
																					else
																						{	/* Cc/ld.scm 321 */
																							int BgL_curz00_1032;

																							{	/* Cc/ld.scm 321 */
																								int BgL_res2556z00_2020;

																								BgL_res2556z00_2020 =
																									RGC_BUFFER_GET_CHAR
																									(BgL_iportz00_1022,
																									BgL_forwardz00_1024);
																								BgL_curz00_1032 =
																									BgL_res2556z00_2020;
																							}
																							{	/* Cc/ld.scm 321 */

																								if (
																									((long) (BgL_curz00_1032) ==
																										((long) 45)))
																									{
																										long BgL_bufposz00_3685;
																										long BgL_forwardz00_3683;
																										long
																											BgL_lastzd2matchzd2_3682;
																										obj_t BgL_iportz00_3681;

																										BgL_iportz00_3681 =
																											BgL_iportz00_1022;
																										BgL_lastzd2matchzd2_3682 =
																											BgL_newzd2matchzd2_1027;
																										BgL_forwardz00_3683 =
																											(((long) 1) +
																											BgL_forwardz00_1024);
																										BgL_bufposz00_3685 =
																											BgL_bufposz00_1025;
																										BgL_bufposz00_1079 =
																											BgL_bufposz00_3685;
																										BgL_forwardz00_1078 =
																											BgL_forwardz00_3683;
																										BgL_lastzd2matchzd2_1077 =
																											BgL_lastzd2matchzd2_3682;
																										BgL_iportz00_1076 =
																											BgL_iportz00_3681;
																										goto
																											BgL_zc3z04anonymousza32134ze3z87_1080;
																									}
																								else
																									{	/* Cc/ld.scm 321 */
																										bool_t BgL_test2998z00_3686;

																										if (
																											((long) (BgL_curz00_1032)
																												== ((long) 10)))
																											{	/* Cc/ld.scm 321 */
																												BgL_test2998z00_3686 =
																													((bool_t) 1);
																											}
																										else
																											{	/* Cc/ld.scm 321 */
																												BgL_test2998z00_3686 =
																													(
																													(long)
																													(BgL_curz00_1032) ==
																													((long) 45));
																											}
																										if (BgL_test2998z00_3686)
																											{	/* Cc/ld.scm 321 */
																												BgL_matchz00_1353 =
																													BgL_newzd2matchzd2_1027;
																											}
																										else
																											{
																												long BgL_bufposz00_3696;
																												long
																													BgL_forwardz00_3694;
																												long
																													BgL_lastzd2matchzd2_3693;
																												obj_t BgL_iportz00_3692;

																												BgL_iportz00_3692 =
																													BgL_iportz00_1022;
																												BgL_lastzd2matchzd2_3693
																													=
																													BgL_newzd2matchzd2_1027;
																												BgL_forwardz00_3694 =
																													(((long) 1) +
																													BgL_forwardz00_1024);
																												BgL_bufposz00_3696 =
																													BgL_bufposz00_1025;
																												BgL_bufposz00_1063 =
																													BgL_bufposz00_3696;
																												BgL_forwardz00_1062 =
																													BgL_forwardz00_3694;
																												BgL_lastzd2matchzd2_1061
																													=
																													BgL_lastzd2matchzd2_3693;
																												BgL_iportz00_1060 =
																													BgL_iportz00_3692;
																												goto
																													BgL_zc3z04anonymousza32124ze3z87_1064;
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
												RGC_SET_FILEPOS(BgL_port1090z00_977);
												{

													{	/* Cc/ld.scm 321 */
														obj_t BgL_aux1191z00_1358;

														BgL_aux1191z00_1358 = BINT(BgL_matchz00_1353);
														switch ((long) CINT(BgL_aux1191z00_1358))
															{
															case ((long) 1):

																BgL_tmp1093z00_980 = BFALSE;
																break;
															case ((long) 0):

																BgL_tmp1093z00_980 = BTRUE;
																break;
															default:
																BgL_tmp1093z00_980 =
																	BGl_errorz00zz__errorz00
																	(BGl_string2734z00zzcc_ldz00,
																	BGl_string2735z00zzcc_ldz00,
																	BINT(BgL_matchz00_1353));
															}
													}
												}
											}
										}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1091z00_978);
										bgl_close_input_port(BgL_port1090z00_977);
										BgL_staticpz00_853 = BgL_tmp1093z00_980;
									}
								}
							}
						}
				}
				if (CBOOL(BgL_staticpz00_853))
					{	/* Cc/ld.scm 327 */
						obj_t BgL_arg1999z00_854;

						BgL_arg1999z00_854 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									17)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg1999z00_854, BGl_string2736z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				else
					{	/* Cc/ld.scm 329 */
						obj_t BgL_arg2000z00_855;

						BgL_arg2000z00_855 =
							BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(((long)
									18)));
						BGl_za2ldzd2optionsza2zd2zzengine_paramz00 =
							string_append_3(BgL_arg2000z00_855, BGl_string2736z00zzcc_ldz00,
							BGl_za2ldzd2optionsza2zd2zzengine_paramz00);
					}
				if (CBOOL(BGl_za2multizd2threadedzd2gczf3za2zf3zzengine_paramz00))
					{	/* Cc/ld.scm 333 */
						BGl_libraryzd2translationzd2tablezd2addz12zc0zz__libraryz00
							(BGl_za2bigloozd2libza2zd2zzengine_paramz00,
							BGl_string2741z00zzcc_ldz00, BNIL);
					}
				else
					{	/* Cc/ld.scm 333 */
						BFALSE;
					}
				{	/* Cc/ld.scm 335 */
					obj_t BgL_destz00_857;

					if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
						{	/* Cc/ld.scm 335 */
							BgL_destz00_857 = BGl_za2destza2z00zzengine_paramz00;
						}
					else
						{	/* Cc/ld.scm 335 */
							BgL_destz00_857 = string_to_bstring(BGL_DEFAULT_A_OUT);
						}
					{	/* Cc/ld.scm 335 */
						obj_t BgL_bigloozd2libzd2_858;

						{	/* Cc/ld.scm 340 */
							obj_t BgL_arg2098z00_974;

							BgL_arg2098z00_974 = BGl_libraryzd2suffixeszd2zzcc_ldz00();
							BgL_bigloozd2libzd2_858 =
								BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
								(BGl_za2bigloozd2libza2zd2zzengine_paramz00, BgL_arg2098z00_974,
								BTRUE, ((bool_t) 0), ((bool_t) 0));
						}
						{	/* Cc/ld.scm 339 */
							obj_t BgL_addzd2libszd2_859;

							{
								obj_t BgL_libz00_962;
								obj_t BgL_resz00_963;

								BgL_libz00_962 =
									BGl_za2additionalzd2bigloozd2librariesza2z00zzengine_paramz00;
								BgL_resz00_963 = BNIL;
							BgL_zc3z04anonymousza32090ze3z87_964:
								if (NULLP(BgL_libz00_962))
									{	/* Cc/ld.scm 345 */
										BgL_addzd2libszd2_859 = BgL_resz00_963;
									}
								else
									{	/* Cc/ld.scm 347 */
										obj_t BgL_arg2092z00_966;
										obj_t BgL_arg2093z00_967;

										BgL_arg2092z00_966 = CDR(((obj_t) BgL_libz00_962));
										{	/* Cc/ld.scm 350 */
											obj_t BgL_arg2094z00_968;

											{	/* Cc/ld.scm 350 */
												obj_t BgL_arg2095z00_969;
												obj_t BgL_arg2096z00_970;
												obj_t BgL_arg2097z00_971;

												BgL_arg2095z00_969 = CAR(((obj_t) BgL_libz00_962));
												BgL_arg2096z00_970 =
													BGl_libraryzd2suffixeszd2zzcc_ldz00();
												{	/* Cc/ld.scm 352 */
													obj_t BgL__ortest_1110z00_972;

													BgL__ortest_1110z00_972 =
														BGl_za2staticzd2allzd2bigloozf3za2zf3zzengine_paramz00;
													if (CBOOL(BgL__ortest_1110z00_972))
														{	/* Cc/ld.scm 352 */
															BgL_arg2097z00_971 = BgL__ortest_1110z00_972;
														}
													else
														{	/* Cc/ld.scm 352 */
															BgL_arg2097z00_971 = BgL_staticpz00_853;
														}
												}
												BgL_arg2094z00_968 =
													BGl_libraryzd2ze3oszd2fileze3zzcc_ldz00
													(BgL_arg2095z00_969, BgL_arg2096z00_970,
													BgL_arg2097z00_971, ((bool_t) 0), ((bool_t) 0));
											}
											BgL_arg2093z00_967 =
												MAKE_YOUNG_PAIR(BgL_arg2094z00_968, BgL_resz00_963);
										}
										{
											obj_t BgL_resz00_3734;
											obj_t BgL_libz00_3733;

											BgL_libz00_3733 = BgL_arg2092z00_966;
											BgL_resz00_3734 = BgL_arg2093z00_967;
											BgL_resz00_963 = BgL_resz00_3734;
											BgL_libz00_962 = BgL_libz00_3733;
											goto BgL_zc3z04anonymousza32090ze3z87_964;
										}
									}
							}
							{	/* Cc/ld.scm 343 */
								obj_t BgL_otherzd2libszd2_860;

								BgL_otherzd2libszd2_860 =
									BGl_za2bigloozd2userzd2libza2z00zzengine_paramz00;
								{	/* Cc/ld.scm 355 */
									obj_t BgL_ldzd2argszd2_861;

									{	/* Cc/ld.scm 358 */
										obj_t BgL_arg2016z00_883;
										obj_t BgL_arg2017z00_884;
										obj_t BgL_arg2018z00_885;
										obj_t BgL_arg2020z00_886;
										obj_t BgL_arg2021z00_887;
										obj_t BgL_arg2022z00_888;
										obj_t BgL_arg2023z00_889;
										obj_t BgL_arg2026z00_890;
										obj_t BgL_arg2028z00_891;
										obj_t BgL_arg2029z00_892;
										obj_t BgL_arg2031z00_893;
										obj_t BgL_arg2033z00_894;
										obj_t BgL_arg2034z00_895;

										{	/* Cc/ld.scm 358 */
											obj_t BgL_arg2055z00_913;

											BgL_arg2055z00_913 =
												string_append_3(BgL_namez00_13,
												BGl_string2737z00zzcc_ldz00,
												BGl_za2czd2objectzd2filezd2extensionza2zd2zzengine_paramz00);
											{	/* Cc/ld.scm 358 */
												obj_t BgL_list2056z00_914;

												BgL_list2056z00_914 =
													MAKE_YOUNG_PAIR(BgL_arg2055z00_913, BNIL);
												BgL_arg2016z00_883 = BgL_list2056z00_914;
											}
										}
										{	/* Cc/ld.scm 366 */
											obj_t BgL_arg2057z00_915;

											BgL_arg2057z00_915 =
												string_append
												(BGl_za2ldzd2ozd2optionza2z00zzengine_paramz00,
												BgL_destz00_857);
											{	/* Cc/ld.scm 366 */
												obj_t BgL_list2058z00_916;

												BgL_list2058z00_916 =
													MAKE_YOUNG_PAIR(BgL_arg2057z00_915, BNIL);
												BgL_arg2017z00_884 = BgL_list2058z00_916;
											}
										}
										BgL_arg2018z00_885 =
											BGl_zc3z04anonymousza32059ze3ze70z60zzcc_ldz00
											(BGl_za2cczd2optionsza2zd2zzengine_paramz00);
										{	/* Cc/ld.scm 372 */
											obj_t BgL_list2064z00_926;

											BgL_list2064z00_926 =
												MAKE_YOUNG_PAIR(BGl_string2742z00zzcc_ldz00, BNIL);
											BgL_arg2020z00_886 = BgL_list2064z00_926;
										}
										{	/* Cc/ld.scm 374 */
											bool_t BgL_test3005z00_3741;

											if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
												{	/* Cc/ld.scm 374 */
													BgL_test3005z00_3741 = ((bool_t) 1);
												}
											else
												{	/* Cc/ld.scm 374 */
													BgL_test3005z00_3741 =
														(
														(long)
														CINT(BGl_za2bdbzd2debugza2zd2zzengine_paramz00) >
														((long) 0));
												}
											if (BgL_test3005z00_3741)
												{	/* Cc/ld.scm 374 */
													BgL_arg2021z00_887 =
														BGl_stringzd2splitzd2charz00zztools_miscz00
														(BGl_za2ldzd2debugzd2optionza2z00zzengine_paramz00,
														BCHAR(((unsigned char) ' ')));
												}
											else
												{	/* Cc/ld.scm 374 */
													BgL_arg2021z00_887 = BNIL;
												}
										}
										if (CBOOL(BGl_za2czd2debugza2zd2zzengine_paramz00))
											{	/* Cc/ld.scm 378 */
												BgL_arg2022z00_888 = BNIL;
											}
										else
											{	/* Cc/ld.scm 378 */
												BgL_arg2022z00_888 =
													BGl_stringzd2splitzd2charz00zztools_miscz00
													(BGl_za2ldzd2optimzd2flagsza2z00zzengine_paramz00,
													BCHAR(((unsigned char) ' ')));
											}
										{	/* Cc/ld.scm 382 */
											bool_t BgL_test3008z00_3752;

											if (CBOOL(BGl_za2stripza2z00zzengine_paramz00))
												{	/* Cc/ld.scm 383 */
													bool_t BgL_test3010z00_3755;

													{	/* Cc/ld.scm 383 */
														obj_t BgL_arg2072z00_935;

														BgL_arg2072z00_935 =
															BGl_bigloozd2configzd2zz__configurez00
															(CNST_TABLE_REF(((long) 21)));
														{	/* Cc/ld.scm 383 */
															bool_t BgL_res2701z00_2343;

															{	/* Cc/ld.scm 383 */
																long BgL_l1z00_2330;

																BgL_l1z00_2330 =
																	STRING_LENGTH(((obj_t) BgL_arg2072z00_935));
																if ((BgL_l1z00_2330 == ((long) 0)))
																	{	/* Cc/ld.scm 383 */
																		int BgL_arg1267z00_2333;

																		{	/* Cc/ld.scm 383 */
																			char *BgL_auxz00_3765;
																			char *BgL_tmpz00_3762;

																			BgL_auxz00_3765 =
																				BSTRING_TO_STRING
																				(BGl_string2726z00zzcc_ldz00);
																			BgL_tmpz00_3762 =
																				BSTRING_TO_STRING(((obj_t)
																					BgL_arg2072z00_935));
																			BgL_arg1267z00_2333 =
																				memcmp(BgL_tmpz00_3762, BgL_auxz00_3765,
																				BgL_l1z00_2330);
																		}
																		BgL_res2701z00_2343 =
																			(
																			(long) (BgL_arg1267z00_2333) ==
																			((long) 0));
																	}
																else
																	{	/* Cc/ld.scm 383 */
																		BgL_res2701z00_2343 = ((bool_t) 0);
																	}
															}
															BgL_test3010z00_3755 = BgL_res2701z00_2343;
														}
													}
													if (BgL_test3010z00_3755)
														{	/* Cc/ld.scm 383 */
															BgL_test3008z00_3752 = ((bool_t) 0);
														}
													else
														{	/* Cc/ld.scm 383 */
															BgL_test3008z00_3752 = ((bool_t) 1);
														}
												}
											else
												{	/* Cc/ld.scm 382 */
													BgL_test3008z00_3752 = ((bool_t) 0);
												}
											if (BgL_test3008z00_3752)
												{	/* Cc/ld.scm 384 */
													obj_t BgL_arg2070z00_932;

													BgL_arg2070z00_932 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 21)));
													{	/* Cc/ld.scm 384 */
														obj_t BgL_list2071z00_933;

														BgL_list2071z00_933 =
															MAKE_YOUNG_PAIR(BgL_arg2070z00_932, BNIL);
														BgL_arg2023z00_889 = BgL_list2071z00_933;
												}}
											else
												{	/* Cc/ld.scm 382 */
													BgL_arg2023z00_889 = BNIL;
												}
										}
										BgL_arg2026z00_890 =
											BGl_stringzd2splitzd2charz00zztools_miscz00
											(BGl_za2ldzd2optionsza2zd2zzengine_paramz00,
											BCHAR(((unsigned char) ' ')));
										BgL_arg2028z00_891 =
											BGl_loopze70ze7zzcc_ldz00
											(BGl_za2libzd2dirza2zd2zzengine_paramz00);
										{	/* Cc/ld.scm 397 */
											obj_t BgL_list2079z00_945;

											BgL_list2079z00_945 =
												MAKE_YOUNG_PAIR(BgL_bigloozd2libzd2_858, BNIL);
											BgL_arg2029z00_892 = BgL_list2079z00_945;
										}
										{	/* Cc/ld.scm 399 */
											bool_t BgL_test3012z00_3777;

											{	/* Cc/ld.scm 399 */
												obj_t BgL_arg2084z00_950;

												BgL_arg2084z00_950 =
													BGl_bigloozd2configzd2zz__configurez00(CNST_TABLE_REF(
														((long) 24)));
												{	/* Cc/ld.scm 399 */
													bool_t BgL_res2709z00_2364;

													{	/* Cc/ld.scm 399 */
														long BgL_l1z00_2351;

														BgL_l1z00_2351 =
															STRING_LENGTH(((obj_t) BgL_arg2084z00_950));
														if ((BgL_l1z00_2351 == ((long) 0)))
															{	/* Cc/ld.scm 399 */
																int BgL_arg1267z00_2354;

																{	/* Cc/ld.scm 399 */
																	char *BgL_auxz00_3787;
																	char *BgL_tmpz00_3784;

																	BgL_auxz00_3787 =
																		BSTRING_TO_STRING
																		(BGl_string2726z00zzcc_ldz00);
																	BgL_tmpz00_3784 =
																		BSTRING_TO_STRING(((obj_t)
																			BgL_arg2084z00_950));
																	BgL_arg1267z00_2354 =
																		memcmp(BgL_tmpz00_3784, BgL_auxz00_3787,
																		BgL_l1z00_2351);
																}
																BgL_res2709z00_2364 =
																	((long) (BgL_arg1267z00_2354) == ((long) 0));
															}
														else
															{	/* Cc/ld.scm 399 */
																BgL_res2709z00_2364 = ((bool_t) 0);
															}
													}
													BgL_test3012z00_3777 = BgL_res2709z00_2364;
												}
											}
											if (BgL_test3012z00_3777)
												{	/* Cc/ld.scm 399 */
													BgL_arg2031z00_893 = BNIL;
												}
											else
												{	/* Cc/ld.scm 401 */
													obj_t BgL_arg2082z00_948;

													BgL_arg2082z00_948 =
														BGl_bigloozd2configzd2zz__configurez00
														(CNST_TABLE_REF(((long) 24)));
													{	/* Cc/ld.scm 401 */
														obj_t BgL_list2083z00_949;

														BgL_list2083z00_949 =
															MAKE_YOUNG_PAIR(BgL_arg2082z00_948, BNIL);
														BgL_arg2031z00_893 = BgL_list2083z00_949;
										}}}
										if (CBOOL
											(BGl_za2doublezd2ldzd2libszf3za2zf3zzengine_paramz00))
											{	/* Cc/ld.scm 405 */
												BgL_arg2033z00_894 = BgL_addzd2libszd2_859;
											}
										else
											{	/* Cc/ld.scm 405 */
												BgL_arg2033z00_894 = BNIL;
											}
										BgL_arg2034z00_895 =
											BGl_zc3z04anonymousza32085ze3ze70z60zzcc_ldz00
											(BGl_za2ldzd2postzd2optionsza2z00zzengine_paramz00);
										{	/* Cc/ld.scm 356 */
											obj_t BgL_list2035z00_896;

											{	/* Cc/ld.scm 356 */
												obj_t BgL_arg2036z00_897;

												{	/* Cc/ld.scm 356 */
													obj_t BgL_arg2037z00_898;

													{	/* Cc/ld.scm 356 */
														obj_t BgL_arg2038z00_899;

														{	/* Cc/ld.scm 356 */
															obj_t BgL_arg2039z00_900;

															{	/* Cc/ld.scm 356 */
																obj_t BgL_arg2040z00_901;

																{	/* Cc/ld.scm 356 */
																	obj_t BgL_arg2041z00_902;

																	{	/* Cc/ld.scm 356 */
																		obj_t BgL_arg2043z00_903;

																		{	/* Cc/ld.scm 356 */
																			obj_t BgL_arg2044z00_904;

																			{	/* Cc/ld.scm 356 */
																				obj_t BgL_arg2045z00_905;

																				{	/* Cc/ld.scm 356 */
																					obj_t BgL_arg2046z00_906;

																					{	/* Cc/ld.scm 356 */
																						obj_t BgL_arg2047z00_907;

																						{	/* Cc/ld.scm 356 */
																							obj_t BgL_arg2048z00_908;

																							{	/* Cc/ld.scm 356 */
																								obj_t BgL_arg2049z00_909;

																								{	/* Cc/ld.scm 356 */
																									obj_t BgL_arg2050z00_910;

																									{	/* Cc/ld.scm 356 */
																										obj_t BgL_arg2051z00_911;

																										{	/* Cc/ld.scm 356 */
																											obj_t BgL_arg2053z00_912;

																											BgL_arg2053z00_912 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2034z00_895,
																												BNIL);
																											BgL_arg2051z00_911 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg2033z00_894,
																												BgL_arg2053z00_912);
																										}
																										BgL_arg2050z00_910 =
																											MAKE_YOUNG_PAIR
																											(BgL_otherzd2libszd2_860,
																											BgL_arg2051z00_911);
																									}
																									BgL_arg2049z00_909 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg2031z00_893,
																										BgL_arg2050z00_910);
																								}
																								BgL_arg2048z00_908 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg2029z00_892,
																									BgL_arg2049z00_909);
																							}
																							BgL_arg2047z00_907 =
																								MAKE_YOUNG_PAIR
																								(BgL_addzd2libszd2_859,
																								BgL_arg2048z00_908);
																						}
																						BgL_arg2046z00_906 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg2028z00_891,
																							BgL_arg2047z00_907);
																					}
																					BgL_arg2045z00_905 =
																						MAKE_YOUNG_PAIR(BgL_arg2026z00_890,
																						BgL_arg2046z00_906);
																				}
																				BgL_arg2044z00_904 =
																					MAKE_YOUNG_PAIR(BgL_arg2023z00_889,
																					BgL_arg2045z00_905);
																			}
																			BgL_arg2043z00_903 =
																				MAKE_YOUNG_PAIR(BgL_arg2022z00_888,
																				BgL_arg2044z00_904);
																		}
																		BgL_arg2041z00_902 =
																			MAKE_YOUNG_PAIR(BgL_arg2021z00_887,
																			BgL_arg2043z00_903);
																	}
																	BgL_arg2040z00_901 =
																		MAKE_YOUNG_PAIR(BgL_arg2020z00_886,
																		BgL_arg2041z00_902);
																}
																BgL_arg2039z00_900 =
																	MAKE_YOUNG_PAIR(BgL_arg2018z00_885,
																	BgL_arg2040z00_901);
															}
															BgL_arg2038z00_899 =
																MAKE_YOUNG_PAIR(BgL_arg2017z00_884,
																BgL_arg2039z00_900);
														}
														BgL_arg2037z00_898 =
															MAKE_YOUNG_PAIR
															(BGl_za2ozd2filesza2zd2zzengine_paramz00,
															BgL_arg2038z00_899);
													}
													BgL_arg2036z00_897 =
														MAKE_YOUNG_PAIR
														(BGl_za2withzd2filesza2zd2zzengine_paramz00,
														BgL_arg2037z00_898);
												}
												BgL_list2035z00_896 =
													MAKE_YOUNG_PAIR(BgL_arg2016z00_883,
													BgL_arg2036z00_897);
											}
											BgL_ldzd2argszd2_861 =
												BGl_appendz00zz__r4_pairs_and_lists_6_3z00
												(BgL_list2035z00_896);
										}
									}
									{	/* Cc/ld.scm 356 */

										{	/* Cc/ld.scm 410 */
											obj_t BgL_arg2002z00_862;

											{	/* Cc/ld.scm 410 */
												obj_t BgL_l1196z00_866;

												BgL_l1196z00_866 =
													MAKE_YOUNG_PAIR(BGl_za2ccza2z00zzengine_paramz00,
													BgL_ldzd2argszd2_861);
												{	/* Cc/ld.scm 410 */
													obj_t BgL_head1198z00_868;

													{	/* Cc/ld.scm 410 */
														obj_t BgL_res2713z00_2370;

														BgL_res2713z00_2370 = MAKE_YOUNG_PAIR(BNIL, BNIL);
														BgL_head1198z00_868 = BgL_res2713z00_2370;
													}
													{
														obj_t BgL_l1196z00_870;
														obj_t BgL_tail1199z00_871;

														BgL_l1196z00_870 = BgL_l1196z00_866;
														BgL_tail1199z00_871 = BgL_head1198z00_868;
													BgL_zc3z04anonymousza32007ze3z87_872:
														if (NULLP(BgL_l1196z00_870))
															{	/* Cc/ld.scm 410 */
																BgL_arg2002z00_862 = CDR(BgL_head1198z00_868);
															}
														else
															{	/* Cc/ld.scm 410 */
																obj_t BgL_newtail1200z00_874;

																{	/* Cc/ld.scm 410 */
																	obj_t BgL_arg2011z00_876;

																	{	/* Cc/ld.scm 410 */
																		obj_t BgL_strz00_877;

																		BgL_strz00_877 =
																			CAR(((obj_t) BgL_l1196z00_870));
																		BgL_arg2011z00_876 =
																			string_append_3
																			(BGl_string2743z00zzcc_ldz00,
																			BgL_strz00_877,
																			BGl_string2744z00zzcc_ldz00);
																	}
																	{	/* Cc/ld.scm 410 */
																		obj_t BgL_res2715z00_2374;

																		BgL_res2715z00_2374 =
																			MAKE_YOUNG_PAIR(BgL_arg2011z00_876, BNIL);
																		BgL_newtail1200z00_874 =
																			BgL_res2715z00_2374;
																	}
																}
																SET_CDR(BgL_tail1199z00_871,
																	BgL_newtail1200z00_874);
																{	/* Cc/ld.scm 410 */
																	obj_t BgL_arg2010z00_875;

																	BgL_arg2010z00_875 =
																		CDR(((obj_t) BgL_l1196z00_870));
																	{
																		obj_t BgL_tail1199z00_3829;
																		obj_t BgL_l1196z00_3828;

																		BgL_l1196z00_3828 = BgL_arg2010z00_875;
																		BgL_tail1199z00_3829 =
																			BgL_newtail1200z00_874;
																		BgL_tail1199z00_871 = BgL_tail1199z00_3829;
																		BgL_l1196z00_870 = BgL_l1196z00_3828;
																		goto BgL_zc3z04anonymousza32007ze3z87_872;
																	}
																}
															}
													}
												}
											}
											{	/* Cc/ld.scm 410 */
												obj_t BgL_list2003z00_863;

												{	/* Cc/ld.scm 410 */
													obj_t BgL_arg2004z00_864;

													{	/* Cc/ld.scm 410 */
														obj_t BgL_arg2005z00_865;

														BgL_arg2005z00_865 =
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
															BNIL);
														BgL_arg2004z00_864 =
															MAKE_YOUNG_PAIR(BgL_arg2002z00_862,
															BgL_arg2005z00_865);
													}
													BgL_list2003z00_863 =
														MAKE_YOUNG_PAIR(BGl_string2745z00zzcc_ldz00,
														BgL_arg2004z00_864);
												}
												BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
													BgL_list2003z00_863);
										}}
										{	/* Cc/ld.scm 414 */
											obj_t BgL_runner2015z00_882;

											{	/* Cc/ld.scm 414 */
												obj_t BgL_arg2012z00_879;

												BgL_arg2012z00_879 =
													BGl_appendzd221011zd2zzcc_ldz00(BgL_ldzd2argszd2_861,
													CNST_TABLE_REF(((long) 26)));
												{	/* Cc/ld.scm 414 */
													obj_t BgL_list2013z00_880;

													BgL_list2013z00_880 =
														MAKE_YOUNG_PAIR(BgL_arg2012z00_879, BNIL);
													BgL_runner2015z00_882 =
														BGl_consza2za2zz__r4_pairs_and_lists_6_3z00
														(BGl_za2ccza2z00zzengine_paramz00,
														BgL_list2013z00_880);
											}}
											{	/* Cc/ld.scm 414 */
												obj_t BgL_aux2014z00_881;

												BgL_aux2014z00_881 = CAR(BgL_runner2015z00_882);
												BgL_runner2015z00_882 = CDR(BgL_runner2015z00_882);
												return
													BGl_runzd2processzd2zz__processz00(BgL_aux2014z00_881,
													BgL_runner2015z00_882);
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



/* <@anonymous:2059>~0 */
	obj_t BGl_zc3z04anonymousza32059ze3ze70z60zzcc_ldz00(obj_t BgL_l1193z00_918)
	{
		{	/* Cc/ld.scm 368 */
			if (NULLP(BgL_l1193z00_918))
				{	/* Cc/ld.scm 368 */
					return BNIL;
				}
			else
				{	/* Cc/ld.scm 369 */
					obj_t BgL_arg2061z00_921;
					obj_t BgL_arg2062z00_922;

					{	/* Cc/ld.scm 369 */
						obj_t BgL_oz00_923;

						BgL_oz00_923 = CAR(((obj_t) BgL_l1193z00_918));
						BgL_arg2061z00_921 =
							BGl_stringzd2splitzd2charz00zztools_miscz00(BgL_oz00_923,
							BCHAR(((unsigned char) ' ')));
					}
					{	/* Cc/ld.scm 368 */
						obj_t BgL_arg2063z00_924;

						BgL_arg2063z00_924 = CDR(((obj_t) BgL_l1193z00_918));
						BgL_arg2062z00_922 =
							BGl_zc3z04anonymousza32059ze3ze70z60zzcc_ldz00
							(BgL_arg2063z00_924);
					}
					return bgl_append2(BgL_arg2061z00_921, BgL_arg2062z00_922);
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzcc_ldz00(obj_t BgL_pathz00_937)
	{
		{	/* Cc/ld.scm 389 */
			if (NULLP(BgL_pathz00_937))
				{	/* Cc/ld.scm 390 */
					return BNIL;
				}
			else
				{	/* Cc/ld.scm 392 */
					obj_t BgL_arg2075z00_940;
					obj_t BgL_arg2076z00_941;

					{	/* Cc/ld.scm 392 */
						obj_t BgL_arg2077z00_942;

						BgL_arg2077z00_942 = CAR(((obj_t) BgL_pathz00_937));
						BgL_arg2075z00_940 =
							string_append(BGl_string2746z00zzcc_ldz00, BgL_arg2077z00_942);
					}
					{	/* Cc/ld.scm 393 */
						obj_t BgL_arg2078z00_943;

						BgL_arg2078z00_943 = CDR(((obj_t) BgL_pathz00_937));
						BgL_arg2076z00_941 = BGl_loopze70ze7zzcc_ldz00(BgL_arg2078z00_943);
					}
					return MAKE_YOUNG_PAIR(BgL_arg2075z00_940, BgL_arg2076z00_941);
				}
		}

	}



/* <@anonymous:2085>~0 */
	obj_t BGl_zc3z04anonymousza32085ze3ze70z60zzcc_ldz00(obj_t BgL_l1195z00_952)
	{
		{	/* Cc/ld.scm 407 */
			if (NULLP(BgL_l1195z00_952))
				{	/* Cc/ld.scm 407 */
					return BNIL;
				}
			else
				{	/* Cc/ld.scm 408 */
					obj_t BgL_arg2087z00_955;
					obj_t BgL_arg2088z00_956;

					{	/* Cc/ld.scm 408 */
						obj_t BgL_oz00_957;

						BgL_oz00_957 = CAR(((obj_t) BgL_l1195z00_952));
						BgL_arg2087z00_955 =
							BGl_stringzd2splitzd2charz00zztools_miscz00(BgL_oz00_957,
							BCHAR(((unsigned char) ' ')));
					}
					{	/* Cc/ld.scm 407 */
						obj_t BgL_arg2089z00_958;

						BgL_arg2089z00_958 = CDR(((obj_t) BgL_l1195z00_952));
						BgL_arg2088z00_956 =
							BGl_zc3z04anonymousza32085ze3ze70z60zzcc_ldz00
							(BgL_arg2089z00_958);
					}
					return bgl_append2(BgL_arg2087z00_955, BgL_arg2088z00_956);
				}
		}

	}



/* &<@anonymous:2329> */
	obj_t BGl_z62zc3z04anonymousza32329ze3ze5zzcc_ldz00(obj_t BgL_envz00_2391)
	{
		{	/* Cc/ld.scm 321 */
			{	/* Cc/ld.scm 321 */
				obj_t BgL_port1090z00_2392;

				BgL_port1090z00_2392 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2391, (int) (((long) 0))));
				return bgl_close_input_port(BgL_port1090z00_2392);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_ldz00()
	{
		{	/* Cc/ld.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzcc_execz00(((long) 367900556),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			BGl_modulezd2initializa7ationz75zzengine_configurez00(((long) 272817155),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_evalz00(((long) 428236983),
				BSTRING_TO_STRING(BGl_string2747z00zzcc_ldz00));
		}

	}

#ifdef __cplusplus
}
#endif
