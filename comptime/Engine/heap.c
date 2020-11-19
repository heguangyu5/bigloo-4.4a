/*===========================================================================*/
/*   (Engine/heap.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/heap.scm) */
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


	extern obj_t BGl_initializa7ezd2Tenvz12z67zztype_envz00();
	extern obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62zc3z04anonymousza31685ze3ze5zzengine_heapz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_dumpzd2Genvzd2zzengine_heapz00(obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31300ze3ze5zzengine_heapz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_sfunz00zzast_varz00;
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzengine_heapz00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_dumpzd2Tenvzd2zzengine_heapz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_heapz00();
	extern obj_t BGl_initializa7ezd2Genvz12z67zzast_envz00();
	BGL_IMPORT obj_t close_binary_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31254ze3ze5zzengine_heapz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31271ze3ze5zzengine_heapz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_cfunz00zzast_varz00;
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_z62zc3z04anonymousza31293ze3ze5zzengine_heapz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzengine_heapz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_heapz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t);
	extern obj_t BGl_tclassz00zzobject_classz00;
	extern obj_t BGl_za2targetzd2languageza2zd2zzengine_paramz00;
	extern obj_t BGl_setzd2backendz12zc0zzbackend_backendz00(obj_t);
	static obj_t BGl_z62dumpzd2heapszb0zzengine_heapz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_IMPORT obj_t input_obj(obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_heapz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31281ze3ze5zzengine_heapz00(obj_t);
	BGL_IMPORT obj_t BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzobject_classz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzengine_heapz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_heapz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_heapz00();
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	static obj_t BGl_dumpzd2heapzd2zzengine_heapz00(obj_t);
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	static obj_t __cnst[14];


	   
		 
		DEFINE_STRING(BGl_string1818z00zzengine_heapz00,
		BgL_bgl_string1818za700za7za7e1843za7, "dump-heap", 9);
	      DEFINE_STRING(BGl_string1819z00zzengine_heapz00,
		BgL_bgl_string1819za700za7za7e1844za7, "Corrupted heap", 14);
	      DEFINE_STRING(BGl_string1822z00zzengine_heapz00,
		BgL_bgl_string1822za700za7za7e1845za7, "Cannot open heap file ~s", 24);
	      DEFINE_STRING(BGl_string1823z00zzengine_heapz00,
		BgL_bgl_string1823za700za7za7e1846za7, "(heap \"", 7);
	      DEFINE_STRING(BGl_string1824z00zzengine_heapz00,
		BgL_bgl_string1824za700za7za7e1847za7, "\"", 1);
	      DEFINE_STRING(BGl_string1825z00zzengine_heapz00,
		BgL_bgl_string1825za700za7za7e1848za7, " (variables", 11);
	      DEFINE_STRING(BGl_string1826z00zzengine_heapz00,
		BgL_bgl_string1826za700za7za7e1849za7, " )\n", 3);
	      DEFINE_STRING(BGl_string1827z00zzengine_heapz00,
		BgL_bgl_string1827za700za7za7e1850za7, " (types", 7);
	      DEFINE_STRING(BGl_string1828z00zzengine_heapz00,
		BgL_bgl_string1828za700za7za7e1851za7, " )", 2);
	      DEFINE_STRING(BGl_string1829z00zzengine_heapz00,
		BgL_bgl_string1829za700za7za7e1852za7, " (includes", 10);
	      DEFINE_STRING(BGl_string1830z00zzengine_heapz00,
		BgL_bgl_string1830za700za7za7e1853za7, ")\n", 2);
	      DEFINE_STRING(BGl_string1832z00zzengine_heapz00,
		BgL_bgl_string1832za700za7za7e1854za7, "   ", 3);
	      DEFINE_STRING(BGl_string1833z00zzengine_heapz00,
		BgL_bgl_string1833za700za7za7e1855za7, "~s", 2);
	      DEFINE_STRING(BGl_string1834z00zzengine_heapz00,
		BgL_bgl_string1834za700za7za7e1856za7, "", 0);
	      DEFINE_STRING(BGl_string1835z00zzengine_heapz00,
		BgL_bgl_string1835za700za7za7e1857za7, "\n   ", 4);
	      DEFINE_STRING(BGl_string1836z00zzengine_heapz00,
		BgL_bgl_string1836za700za7za7e1858za7, "\n    ", 5);
	      DEFINE_STRING(BGl_string1838z00zzengine_heapz00,
		BgL_bgl_string1838za700za7za7e1859za7, "engine_heap", 11);
	      DEFINE_STRING(BGl_string1839z00zzengine_heapz00,
		BgL_bgl_string1839za700za7za7e1860za7,
		"type super variable class native function args jvm-type-name inline sifun qualified-type name module id ",
		104);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2heapszd2envz00zzengine_heapz00,
		BgL_bgl_za762dumpza7d2heapsza71861za7,
		BGl_z62dumpzd2heapszb0zzengine_heapz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1820z00zzengine_heapz00,
		BgL_bgl_za762za7c3za704anonymo1862za7,
		BGl_z62zc3z04anonymousza31254ze3ze5zzengine_heapz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1821z00zzengine_heapz00,
		BgL_bgl_za762za7c3za704anonymo1863za7,
		BGl_z62zc3z04anonymousza31271ze3ze5zzengine_heapz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1831z00zzengine_heapz00,
		BgL_bgl_za762za7c3za704anonymo1864za7,
		BGl_z62zc3z04anonymousza31300ze3ze5zzengine_heapz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1837z00zzengine_heapz00,
		BgL_bgl_za762za7c3za704anonymo1865za7,
		BGl_z62zc3z04anonymousza31685ze3ze5zzengine_heapz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzengine_heapz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_heapz00(long
		BgL_checksumz00_1566, char *BgL_fromz00_1567)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_heapz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_heapz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_heapz00();
					BGl_libraryzd2moduleszd2initz00zzengine_heapz00();
					BGl_cnstzd2initzd2zzengine_heapz00();
					BGl_importedzd2moduleszd2initz00zzengine_heapz00();
					return BGl_methodzd2initzd2zzengine_heapz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"engine_heap");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_heap");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			{	/* Engine/heap.scm 15 */
				obj_t BgL_cportz00_1351;

				{	/* Engine/heap.scm 15 */
					obj_t BgL_stringz00_1359;

					BgL_stringz00_1359 = BGl_string1839z00zzengine_heapz00;
					{	/* Engine/heap.scm 15 */
						obj_t BgL_startz00_1360;

						BgL_startz00_1360 = BINT(((long) 0));
						{	/* Engine/heap.scm 15 */
							obj_t BgL_endz00_1361;

							BgL_endz00_1361 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1359)));
							{	/* Engine/heap.scm 15 */

								BgL_cportz00_1351 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1359, BgL_startz00_1360, BgL_endz00_1361);
				}}}}
				{
					long BgL_iz00_1352;

					BgL_iz00_1352 = ((long) 13);
				BgL_loopz00_1353:
					if ((BgL_iz00_1352 == ((long) -1)))
						{	/* Engine/heap.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Engine/heap.scm 15 */
							{	/* Engine/heap.scm 15 */
								obj_t BgL_arg1841z00_1355;

								{	/* Engine/heap.scm 15 */

									{	/* Engine/heap.scm 15 */
										obj_t BgL_locationz00_1357;

										BgL_locationz00_1357 = BBOOL(((bool_t) 0));
										{	/* Engine/heap.scm 15 */

											BgL_arg1841z00_1355 =
												BGl_readz00zz__readerz00(BgL_cportz00_1351,
												BgL_locationz00_1357);
										}
									}
								}
								{	/* Engine/heap.scm 15 */
									int BgL_tmpz00_1598;

									BgL_tmpz00_1598 = (int) (BgL_iz00_1352);
									CNST_TABLE_SET(BgL_tmpz00_1598, BgL_arg1841z00_1355);
							}}
							{	/* Engine/heap.scm 15 */
								int BgL_auxz00_1358;

								BgL_auxz00_1358 = (int) ((BgL_iz00_1352 - ((long) 1)));
								{
									long BgL_iz00_1603;

									BgL_iz00_1603 = (long) (BgL_auxz00_1358);
									BgL_iz00_1352 = BgL_iz00_1603;
									goto BgL_loopz00_1353;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* dump-heaps */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2heapszd2zzengine_heapz00(obj_t
		BgL_namesz00_3)
	{
		{	/* Engine/heap.scm 33 */
			BGl_setzd2backendz12zc0zzbackend_backendz00
				(BGl_za2targetzd2languageza2zd2zzengine_paramz00);
			BGl_initializa7ezd2Genvz12z67zzast_envz00();
			BGl_initializa7ezd2Tenvz12z67zztype_envz00();
			{
				obj_t BgL_l1181z00_753;

				{	/* Engine/heap.scm 40 */
					bool_t BgL_tmpz00_1609;

					BgL_l1181z00_753 = BgL_namesz00_3;
				BgL_zc3z04anonymousza31228ze3z87_754:
					if (PAIRP(BgL_l1181z00_753))
						{	/* Engine/heap.scm 40 */
							BGl_dumpzd2heapzd2zzengine_heapz00(CAR(BgL_l1181z00_753));
							{
								obj_t BgL_l1181z00_1614;

								BgL_l1181z00_1614 = CDR(BgL_l1181z00_753);
								BgL_l1181z00_753 = BgL_l1181z00_1614;
								goto BgL_zc3z04anonymousza31228ze3z87_754;
							}
						}
					else
						{	/* Engine/heap.scm 40 */
							BgL_tmpz00_1609 = ((bool_t) 1);
						}
					return BBOOL(BgL_tmpz00_1609);
				}
			}
		}

	}



/* &dump-heaps */
	obj_t BGl_z62dumpzd2heapszb0zzengine_heapz00(obj_t BgL_envz00_1324,
		obj_t BgL_namesz00_1325)
	{
		{	/* Engine/heap.scm 33 */
			return BGl_dumpzd2heapszd2zzengine_heapz00(BgL_namesz00_1325);
		}

	}



/* dump-heap */
	obj_t BGl_dumpzd2heapzd2zzengine_heapz00(obj_t BgL_heapz00_4)
	{
		{	/* Engine/heap.scm 45 */
			{	/* Engine/heap.scm 46 */
				obj_t BgL_fnamez00_759;

				if (fexists(BSTRING_TO_STRING(BgL_heapz00_4)))
					{	/* Engine/heap.scm 46 */
						BgL_fnamez00_759 = BgL_heapz00_4;
					}
				else
					{	/* Engine/heap.scm 46 */
						BgL_fnamez00_759 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_4,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
					}
				if (STRINGP(BgL_fnamez00_759))
					{	/* Engine/heap.scm 50 */
						obj_t BgL_portz00_761;

						BgL_portz00_761 =
							BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
							(BgL_fnamez00_759);
						if (BINARY_PORTP(BgL_portz00_761))
							{	/* Engine/heap.scm 55 */
								obj_t BgL_exitd1064z00_763;

								BgL_exitd1064z00_763 = BGL_EXITD_TOP_AS_OBJ();
								{	/* Engine/heap.scm 115 */
									obj_t BgL_zc3z04anonymousza31293ze3z87_1329;

									BgL_zc3z04anonymousza31293ze3z87_1329 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31293ze3ze5zzengine_heapz00,
										(int) (((long) 0)), (int) (((long) 1)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31293ze3z87_1329,
										(int) (((long) 0)), BgL_portz00_761);
									BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
										(BgL_exitd1064z00_763,
										BgL_zc3z04anonymousza31293ze3z87_1329);
									{	/* Engine/heap.scm 56 */
										obj_t BgL_tmp1066z00_765;

										{	/* Engine/heap.scm 56 */
											obj_t BgL_envsz00_766;

											BgL_envsz00_766 = input_obj(BgL_portz00_761);
											{	/* Engine/heap.scm 56 */
												obj_t BgL__z00_767;

												{	/* Engine/heap.scm 57 */
													bool_t BgL_test1872z00_1635;

													{	/* Engine/heap.scm 57 */
														obj_t BgL_v1183z00_832;

														BgL_v1183z00_832 = create_vector(((long) 1));
														VECTOR_SET(BgL_v1183z00_832, ((long) 0),
															BgL_envsz00_766);
														((bool_t) 1);
													}
													{	/* Engine/heap.scm 58 */
														bool_t BgL__ortest_1078z00_829;

														BgL__ortest_1078z00_829 =
															(VECTOR_LENGTH(
																((obj_t) BgL_envsz00_766)) == ((long) 5));
														if (BgL__ortest_1078z00_829)
															{	/* Engine/heap.scm 58 */
																BgL_test1872z00_1635 = BgL__ortest_1078z00_829;
															}
														else
															{	/* Engine/heap.scm 58 */
																BgL_test1872z00_1635 =
																	(VECTOR_LENGTH(
																		((obj_t) BgL_envsz00_766)) == ((long) 7));
													}}
													if (BgL_test1872z00_1635)
														{	/* Engine/heap.scm 57 */
															BgL__z00_767 = BFALSE;
														}
													else
														{	/* Engine/heap.scm 57 */
															BgL__z00_767 =
																BGl_errorz00zz__errorz00
																(BGl_string1818z00zzengine_heapz00,
																BGl_string1819z00zzengine_heapz00,
																BgL_heapz00_4);
														}
												}
												{	/* Engine/heap.scm 57 */
													obj_t BgL_targetz00_768;

													BgL_targetz00_768 =
														VECTOR_REF(((obj_t) BgL_envsz00_766), ((long) 0));
													{	/* Engine/heap.scm 61 */
														obj_t BgL_versionz00_769;

														BgL_versionz00_769 =
															VECTOR_REF(((obj_t) BgL_envsz00_766), ((long) 1));
														{	/* Engine/heap.scm 62 */
															obj_t BgL_specificz00_770;

															BgL_specificz00_770 =
																VECTOR_REF(
																((obj_t) BgL_envsz00_766), ((long) 2));
															{	/* Engine/heap.scm 63 */
																obj_t BgL_genvz00_771;

																BgL_genvz00_771 =
																	VECTOR_REF(
																	((obj_t) BgL_envsz00_766), ((long) 3));
																{	/* Engine/heap.scm 64 */
																	obj_t BgL_tenvz00_772;

																	BgL_tenvz00_772 =
																		VECTOR_REF(
																		((obj_t) BgL_envsz00_766), ((long) 4));
																	{	/* Engine/heap.scm 65 */
																		obj_t BgL_includesz00_773;

																		if (
																			(VECTOR_LENGTH(
																					((obj_t) BgL_envsz00_766)) ==
																				((long) 6)))
																			{	/* Engine/heap.scm 66 */
																				BgL_includesz00_773 =
																					VECTOR_REF(
																					((obj_t) BgL_envsz00_766),
																					((long) 5));
																			}
																		else
																			{	/* Engine/heap.scm 66 */
																				BgL_includesz00_773 = BNIL;
																			}
																		{	/* Engine/heap.scm 66 */

																			if (
																				(VECTOR_LENGTH(
																						((obj_t) BgL_envsz00_766)) ==
																					((long) 6)))
																				{	/* Engine/heap.scm 78 */
																					BGl_addzd2genvz12zc0zzast_envz00
																						(BgL_genvz00_771);
																				}
																			else
																				{	/* Engine/heap.scm 78 */
																					BGl_setzd2tenvz12zc0zztype_envz00
																						(BgL_tenvz00_772);
																					BGl_setzd2genvz12zc0zzast_envz00
																						(BgL_genvz00_771);
																				}
																			{	/* Engine/heap.scm 87 */
																				bool_t BgL_test1876z00_1669;

																				{	/* Engine/heap.scm 87 */
																					obj_t BgL_arg1268z00_788;

																					BgL_arg1268z00_788 =
																						BGl_thezd2backendzd2zzbackend_backendz00
																						();
																					BgL_test1876z00_1669 =
																						(((BgL_backendz00_bglt)
																							COBJECT(((BgL_backendz00_bglt)
																									BgL_arg1268z00_788)))->
																						BgL_qualifiedzd2typeszd2);
																				}
																				if (BgL_test1876z00_1669)
																					{	/* Engine/heap.scm 87 */
																						BGl_forzd2eachzd2globalz12z12zzast_envz00
																							(BGl_proc1820z00zzengine_heapz00,
																							BNIL);
																					}
																				else
																					{	/* Engine/heap.scm 87 */
																						BFALSE;
																					}
																			}
																			BGl_hashtablezd2forzd2eachz00zz__hashz00
																				(BgL_genvz00_771,
																				BGl_proc1821z00zzengine_heapz00);
																			{	/* Engine/heap.scm 101 */
																				obj_t BgL_arg1277z00_804;

																				{	/* Engine/heap.scm 101 */
																					obj_t BgL_res1786z00_1199;

																					{	/* Engine/heap.scm 101 */
																						obj_t BgL_tmpz00_1675;

																						BgL_tmpz00_1675 =
																							BGL_CURRENT_DYNAMIC_ENV();
																						BgL_res1786z00_1199 =
																							BGL_ENV_CURRENT_ERROR_PORT
																							(BgL_tmpz00_1675);
																					}
																					BgL_arg1277z00_804 =
																						BgL_res1786z00_1199;
																				}
																				{	/* Engine/heap.scm 103 */
																					obj_t
																						BgL_zc3z04anonymousza31281ze3z87_1326;
																					BgL_zc3z04anonymousza31281ze3z87_1326
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31281ze3ze5zzengine_heapz00,
																						(int) (((long) 0)),
																						(int) (((long) 4)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31281ze3z87_1326,
																						(int) (((long) 0)), BgL_heapz00_4);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31281ze3z87_1326,
																						(int) (((long) 1)),
																						BgL_genvz00_771);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31281ze3z87_1326,
																						(int) (((long) 2)),
																						BgL_tenvz00_772);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31281ze3z87_1326,
																						(int) (((long) 3)),
																						BgL_includesz00_773);
																					BgL_tmp1066z00_765 =
																						BGl_withzd2outputzd2tozd2portzd2zz__r4_ports_6_10_1z00
																						(BgL_arg1277z00_804,
																						BgL_zc3z04anonymousza31281ze3z87_1326);
										}}}}}}}}}}}
										BGl_exitdzd2popzd2protectz12z12zz__bexitz00
											(BgL_exitd1064z00_763);
										close_binary_port(BgL_portz00_761);
										return BgL_tmp1066z00_765;
									}
								}
							}
						else
							{	/* Engine/heap.scm 53 */
								obj_t BgL_arg1295z00_835;

								{	/* Engine/heap.scm 53 */
									obj_t BgL_list1296z00_836;

									BgL_list1296z00_836 = MAKE_YOUNG_PAIR(BgL_fnamez00_759, BNIL);
									BgL_arg1295z00_835 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string1822z00zzengine_heapz00, BgL_list1296z00_836);
								}
								return
									BGl_errorz00zz__errorz00(BGl_string1818z00zzengine_heapz00,
									BgL_arg1295z00_835, BGl_za2libzd2dirza2zd2zzengine_paramz00);
							}
					}
				else
					{	/* Engine/heap.scm 116 */
						obj_t BgL_mz00_837;

						{	/* Engine/heap.scm 116 */
							obj_t BgL_list1297z00_838;

							BgL_list1297z00_838 = MAKE_YOUNG_PAIR(BgL_heapz00_4, BNIL);
							BgL_mz00_837 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string1822z00zzengine_heapz00, BgL_list1297z00_838);
						}
						BGl_errorz00zz__errorz00(BGl_string1818z00zzengine_heapz00,
							BgL_mz00_837, BGl_za2libzd2dirza2zd2zzengine_paramz00);
						return BFALSE;
					}
			}
		}

	}



/* &<@anonymous:1281> */
	obj_t BGl_z62zc3z04anonymousza31281ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1330)
	{
		{	/* Engine/heap.scm 102 */
			{	/* Engine/heap.scm 103 */
				obj_t BgL_heapz00_1331;
				obj_t BgL_genvz00_1332;
				obj_t BgL_tenvz00_1333;
				obj_t BgL_includesz00_1334;

				BgL_heapz00_1331 = PROCEDURE_REF(BgL_envz00_1330, (int) (((long) 0)));
				BgL_genvz00_1332 = PROCEDURE_REF(BgL_envz00_1330, (int) (((long) 1)));
				BgL_tenvz00_1333 = PROCEDURE_REF(BgL_envz00_1330, (int) (((long) 2)));
				BgL_includesz00_1334 =
					PROCEDURE_REF(BgL_envz00_1330, (int) (((long) 3)));
				{	/* Engine/heap.scm 103 */
					obj_t BgL_port1187z00_1364;

					{	/* Engine/heap.scm 103 */
						obj_t BgL_res1787z00_1365;

						{	/* Engine/heap.scm 103 */
							obj_t BgL_tmpz00_1706;

							BgL_tmpz00_1706 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1787z00_1365 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1706);
						}
						BgL_port1187z00_1364 = BgL_res1787z00_1365;
					}
					bgl_display_string(BGl_string1823z00zzengine_heapz00,
						BgL_port1187z00_1364);
					bgl_display_obj(BgL_heapz00_1331, BgL_port1187z00_1364);
					bgl_display_string(BGl_string1824z00zzengine_heapz00,
						BgL_port1187z00_1364);
					bgl_display_char(((unsigned char) 10), BgL_port1187z00_1364);
				}
				{	/* Engine/heap.scm 104 */
					obj_t BgL_port1188z00_1366;

					{	/* Engine/heap.scm 104 */
						obj_t BgL_res1788z00_1367;

						{	/* Engine/heap.scm 104 */
							obj_t BgL_tmpz00_1713;

							BgL_tmpz00_1713 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1788z00_1367 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1713);
						}
						BgL_port1188z00_1366 = BgL_res1788z00_1367;
					}
					bgl_display_string(BGl_string1825z00zzengine_heapz00,
						BgL_port1188z00_1366);
					bgl_display_char(((unsigned char) 10), BgL_port1188z00_1366);
				}
				BGl_dumpzd2Genvzd2zzengine_heapz00(BgL_genvz00_1332);
				{	/* Engine/heap.scm 106 */
					obj_t BgL_port1189z00_1368;

					{	/* Engine/heap.scm 106 */
						obj_t BgL_res1789z00_1369;

						{	/* Engine/heap.scm 106 */
							obj_t BgL_tmpz00_1719;

							BgL_tmpz00_1719 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1789z00_1369 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1719);
						}
						BgL_port1189z00_1368 = BgL_res1789z00_1369;
					}
					bgl_display_string(BGl_string1826z00zzengine_heapz00,
						BgL_port1189z00_1368);
					bgl_display_char(((unsigned char) 10), BgL_port1189z00_1368);
				}
				{	/* Engine/heap.scm 107 */
					obj_t BgL_port1190z00_1370;

					{	/* Engine/heap.scm 107 */
						obj_t BgL_res1790z00_1371;

						{	/* Engine/heap.scm 107 */
							obj_t BgL_tmpz00_1724;

							BgL_tmpz00_1724 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1790z00_1371 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1724);
						}
						BgL_port1190z00_1370 = BgL_res1790z00_1371;
					}
					bgl_display_string(BGl_string1827z00zzengine_heapz00,
						BgL_port1190z00_1370);
					bgl_display_char(((unsigned char) 10), BgL_port1190z00_1370);
				}
				BGl_dumpzd2Tenvzd2zzengine_heapz00(BgL_tenvz00_1333);
				{	/* Engine/heap.scm 109 */
					obj_t BgL_port1191z00_1372;

					{	/* Engine/heap.scm 109 */
						obj_t BgL_res1791z00_1373;

						{	/* Engine/heap.scm 109 */
							obj_t BgL_tmpz00_1730;

							BgL_tmpz00_1730 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1791z00_1373 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1730);
						}
						BgL_port1191z00_1372 = BgL_res1791z00_1373;
					}
					bgl_display_string(BGl_string1828z00zzengine_heapz00,
						BgL_port1191z00_1372);
					bgl_display_char(((unsigned char) 10), BgL_port1191z00_1372);
				}
				if (PAIRP(BgL_includesz00_1334))
					{	/* Engine/heap.scm 110 */
						{	/* Engine/heap.scm 111 */
							obj_t BgL_port1192z00_1374;

							{	/* Engine/heap.scm 111 */
								obj_t BgL_res1793z00_1375;

								{	/* Engine/heap.scm 111 */
									obj_t BgL_tmpz00_1737;

									BgL_tmpz00_1737 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1793z00_1375 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1737);
								}
								BgL_port1192z00_1374 = BgL_res1793z00_1375;
							}
							bgl_display_string(BGl_string1829z00zzengine_heapz00,
								BgL_port1192z00_1374);
							bgl_display_char(((unsigned char) 10), BgL_port1192z00_1374);
						}
						{	/* Engine/heap.scm 112 */
							obj_t BgL_port1193z00_1376;

							{	/* Engine/heap.scm 112 */
								obj_t BgL_res1794z00_1377;

								{	/* Engine/heap.scm 112 */
									obj_t BgL_tmpz00_1742;

									BgL_tmpz00_1742 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1794z00_1377 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1742);
								}
								BgL_port1193z00_1376 = BgL_res1794z00_1377;
							}
							bgl_display_obj(BgL_includesz00_1334, BgL_port1193z00_1376);
							bgl_display_char(((unsigned char) 10), BgL_port1193z00_1376);
						}
						{	/* Engine/heap.scm 113 */
							obj_t BgL_port1194z00_1378;

							{	/* Engine/heap.scm 113 */
								obj_t BgL_res1795z00_1379;

								{	/* Engine/heap.scm 113 */
									obj_t BgL_tmpz00_1747;

									BgL_tmpz00_1747 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1795z00_1379 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1747);
								}
								BgL_port1194z00_1378 = BgL_res1795z00_1379;
							}
							bgl_display_string(BGl_string1828z00zzengine_heapz00,
								BgL_port1194z00_1378);
							bgl_display_char(((unsigned char) 10), BgL_port1194z00_1378);
					}}
				else
					{	/* Engine/heap.scm 110 */
						BFALSE;
					}
				{	/* Engine/heap.scm 114 */
					obj_t BgL_port1195z00_1380;

					{	/* Engine/heap.scm 114 */
						obj_t BgL_res1796z00_1381;

						{	/* Engine/heap.scm 114 */
							obj_t BgL_tmpz00_1752;

							BgL_tmpz00_1752 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1796z00_1381 =
								BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_1752);
						}
						BgL_port1195z00_1380 = BgL_res1796z00_1381;
					}
					bgl_display_string(BGl_string1830z00zzengine_heapz00,
						BgL_port1195z00_1380);
					return bgl_display_char(((unsigned char) 10), BgL_port1195z00_1380);
		}}}

	}



/* &<@anonymous:1271> */
	obj_t BGl_z62zc3z04anonymousza31271ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1335, obj_t BgL_kz00_1336, obj_t BgL_bucketz00_1337)
	{
		{	/* Engine/heap.scm 97 */
			{	/* Engine/heap.scm 98 */
				bool_t BgL_tmpz00_1757;

				{	/* Engine/heap.scm 98 */
					obj_t BgL_g1186z00_1382;

					BgL_g1186z00_1382 = CDR(((obj_t) BgL_bucketz00_1337));
					{
						obj_t BgL_l1184z00_1384;

						BgL_l1184z00_1384 = BgL_g1186z00_1382;
					BgL_zc3z04anonymousza31272ze3z87_1383:
						if (PAIRP(BgL_l1184z00_1384))
							{	/* Engine/heap.scm 100 */
								{	/* Engine/heap.scm 99 */
									obj_t BgL_newz00_1385;

									BgL_newz00_1385 = CAR(BgL_l1184z00_1384);
									{	/* Engine/heap.scm 99 */
										obj_t BgL_arg1274z00_1386;

										BgL_arg1274z00_1386 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_1385)))->
											BgL_modulez00);
										{	/* Engine/heap.scm 99 */
											obj_t BgL_list1275z00_1387;

											BgL_list1275z00_1387 =
												MAKE_YOUNG_PAIR(BgL_arg1274z00_1386, BNIL);
											BGl_heapzd2modulezd2listz00zzheap_restorez00
												(BgL_list1275z00_1387);
										}
									}
								}
								{
									obj_t BgL_l1184z00_1767;

									BgL_l1184z00_1767 = CDR(BgL_l1184z00_1384);
									BgL_l1184z00_1384 = BgL_l1184z00_1767;
									goto BgL_zc3z04anonymousza31272ze3z87_1383;
								}
							}
						else
							{	/* Engine/heap.scm 100 */
								BgL_tmpz00_1757 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_1757);
			}
		}

	}



/* &<@anonymous:1254> */
	obj_t BGl_z62zc3z04anonymousza31254ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1338, obj_t BgL_newz00_1339)
	{
		{	/* Engine/heap.scm 89 */
			{	/* Engine/heap.scm 91 */
				obj_t BgL_arg1256z00_1388;
				obj_t BgL_arg1258z00_1389;
				obj_t BgL_arg1263z00_1390;

				BgL_arg1256z00_1388 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_1339)))->BgL_modulez00);
				BgL_arg1258z00_1389 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_1339)))->
					BgL_jvmzd2typezd2namez00);
				BgL_arg1263z00_1390 = BGl_shapez00zztools_shapez00(BgL_newz00_1339);
				{	/* Engine/heap.scm 90 */
					obj_t BgL_list1264z00_1391;

					BgL_list1264z00_1391 = MAKE_YOUNG_PAIR(BgL_arg1263z00_1390, BNIL);
					return
						BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg1256z00_1388,
						BgL_arg1258z00_1389, BgL_list1264z00_1391);
				}
			}
		}

	}



/* &<@anonymous:1293> */
	obj_t BGl_z62zc3z04anonymousza31293ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1340)
	{
		{	/* Engine/heap.scm 55 */
			{	/* Engine/heap.scm 115 */
				obj_t BgL_portz00_1341;

				BgL_portz00_1341 = PROCEDURE_REF(BgL_envz00_1340, (int) (((long) 0)));
				return close_binary_port(((obj_t) BgL_portz00_1341));
			}
		}

	}



/* dump-Genv */
	obj_t BGl_dumpzd2Genvzd2zzengine_heapz00(obj_t BgL_genvz00_5)
	{
		{	/* Engine/heap.scm 123 */
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_genvz00_5,
				BGl_proc1831z00zzengine_heapz00);
		}

	}



/* &<@anonymous:1300> */
	obj_t BGl_z62zc3z04anonymousza31300ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1343, obj_t BgL_kz00_1344, obj_t BgL_bucketz00_1345)
	{
		{	/* Engine/heap.scm 178 */
			{	/* Engine/heap.scm 178 */
				bool_t BgL_tmpz00_1782;

				{
					obj_t BgL_newz00_1393;

					{	/* Engine/heap.scm 178 */
						obj_t BgL_g1213z00_1528;

						BgL_g1213z00_1528 = CDR(((obj_t) BgL_bucketz00_1345));
						{
							obj_t BgL_l1211z00_1530;

							BgL_l1211z00_1530 = BgL_g1213z00_1528;
						BgL_zc3z04anonymousza31301ze3z87_1529:
							if (PAIRP(BgL_l1211z00_1530))
								{	/* Engine/heap.scm 178 */
									BgL_newz00_1393 = CAR(BgL_l1211z00_1530);
									{	/* Engine/heap.scm 125 */
										obj_t BgL_modulez00_1394;

										BgL_modulez00_1394 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_1393)))->
											BgL_modulez00);
										{	/* Engine/heap.scm 125 */
											obj_t BgL_idz00_1395;

											BgL_idz00_1395 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_globalz00_bglt) BgL_newz00_1393))))->
												BgL_idz00);
											{	/* Engine/heap.scm 126 */
												obj_t BgL_qtz00_1396;

												BgL_qtz00_1396 =
													BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00
													(BgL_modulez00_1394);
												{	/* Engine/heap.scm 127 */
													obj_t BgL_jtz00_1397;

													BgL_jtz00_1397 =
														(((BgL_globalz00_bglt) COBJECT(
																((BgL_globalz00_bglt) BgL_newz00_1393)))->
														BgL_jvmzd2typezd2namez00);
													{	/* Engine/heap.scm 128 */
														BgL_valuez00_bglt BgL_valz00_1398;

														BgL_valz00_1398 =
															(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_globalz00_bglt) BgL_newz00_1393))))->
															BgL_valuez00);
														{	/* Engine/heap.scm 129 */

															{	/* Engine/heap.scm 131 */
																bool_t BgL_test1880z00_1798;

																{	/* Engine/heap.scm 131 */
																	bool_t BgL_res1797z00_1399;

																	BgL_res1797z00_1399 =
																		BGl_isazf3zf3zz__objectz00(
																		((obj_t) BgL_valz00_1398),
																		BGl_sfunz00zzast_varz00);
																	BgL_test1880z00_1798 = BgL_res1797z00_1399;
																}
																if (BgL_test1880z00_1798)
																	{	/* Engine/heap.scm 132 */
																		obj_t BgL_port1202z00_1400;

																		{	/* Engine/heap.scm 132 */
																			obj_t BgL_res1798z00_1401;

																			{	/* Engine/heap.scm 132 */
																				obj_t BgL_tmpz00_1801;

																				BgL_tmpz00_1801 =
																					BGL_CURRENT_DYNAMIC_ENV();
																				BgL_res1798z00_1401 =
																					BGL_ENV_CURRENT_OUTPUT_PORT
																					(BgL_tmpz00_1801);
																			}
																			BgL_port1202z00_1400 =
																				BgL_res1798z00_1401;
																		}
																		bgl_display_string
																			(BGl_string1832z00zzengine_heapz00,
																			BgL_port1202z00_1400);
																		{	/* Engine/heap.scm 133 */
																			obj_t BgL_arg1307z00_1402;

																			{	/* Engine/heap.scm 133 */
																				obj_t BgL_arg1308z00_1403;

																				{	/* Engine/heap.scm 133 */
																					obj_t BgL_arg1309z00_1404;
																					obj_t BgL_arg1310z00_1405;

																					BgL_arg1309z00_1404 =
																						BGl_shapez00zztools_shapez00
																						(BgL_newz00_1393);
																					{	/* Engine/heap.scm 135 */
																						obj_t BgL_arg1311z00_1406;

																						{	/* Engine/heap.scm 135 */
																							obj_t BgL_arg1312z00_1407;
																							obj_t BgL_arg1314z00_1408;

																							{	/* Engine/heap.scm 135 */
																								obj_t BgL_arg1315z00_1409;

																								BgL_arg1315z00_1409 =
																									MAKE_YOUNG_PAIR
																									(BgL_idz00_1395, BNIL);
																								BgL_arg1312z00_1407 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 0)),
																									BgL_arg1315z00_1409);
																							}
																							{	/* Engine/heap.scm 137 */
																								obj_t BgL_arg1316z00_1410;

																								{	/* Engine/heap.scm 137 */
																									obj_t BgL_arg1317z00_1411;
																									obj_t BgL_arg1319z00_1412;

																									{	/* Engine/heap.scm 137 */
																										obj_t BgL_arg1322z00_1413;

																										BgL_arg1322z00_1413 =
																											MAKE_YOUNG_PAIR
																											(BgL_modulez00_1394,
																											BNIL);
																										BgL_arg1317z00_1411 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													1)),
																											BgL_arg1322z00_1413);
																									}
																									{	/* Engine/heap.scm 139 */
																										obj_t BgL_arg1324z00_1414;

																										{	/* Engine/heap.scm 139 */
																											obj_t BgL_arg1325z00_1415;
																											obj_t BgL_arg1326z00_1416;

																											{	/* Engine/heap.scm 139 */
																												obj_t
																													BgL_arg1327z00_1417;
																												{	/* Engine/heap.scm 139 */
																													obj_t
																														BgL_arg1328z00_1418;
																													{	/* Engine/heap.scm 139 */
																														obj_t
																															BgL_arg1329z00_1419;
																														BgL_arg1329z00_1419
																															=
																															(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_newz00_1393))))->BgL_namez00);
																														{	/* Engine/heap.scm 139 */
																															obj_t
																																BgL_list1330z00_1420;
																															BgL_list1330z00_1420
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1329z00_1419,
																																BNIL);
																															BgL_arg1328z00_1418
																																=
																																BGl_formatz00zz__r4_output_6_10_3z00
																																(BGl_string1833z00zzengine_heapz00,
																																BgL_list1330z00_1420);
																													}}
																													BgL_arg1327z00_1417 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1328z00_1418,
																														BNIL);
																												}
																												BgL_arg1325z00_1415 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 2)),
																													BgL_arg1327z00_1417);
																											}
																											{	/* Engine/heap.scm 141 */
																												obj_t
																													BgL_arg1331z00_1421;
																												{	/* Engine/heap.scm 141 */
																													obj_t
																														BgL_arg1334z00_1422;
																													obj_t
																														BgL_arg1335z00_1423;
																													{	/* Engine/heap.scm 141 */
																														obj_t
																															BgL_arg1337z00_1424;
																														BgL_arg1337z00_1424
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_qtz00_1396,
																															BNIL);
																														BgL_arg1334z00_1422
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 3)),
																															BgL_arg1337z00_1424);
																													}
																													{	/* Engine/heap.scm 142 */
																														obj_t
																															BgL_arg1338z00_1425;
																														obj_t
																															BgL_arg1339z00_1426;
																														if (((((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_valz00_1398)))->BgL_classz00) == CNST_TABLE_REF(((long) 4))))
																															{	/* Engine/heap.scm 143 */
																																obj_t
																																	BgL_arg1344z00_1427;
																																{	/* Engine/heap.scm 143 */
																																	obj_t
																																		BgL_arg1345z00_1428;
																																	{	/* Engine/heap.scm 143 */
																																		obj_t
																																			BgL_arg1346z00_1429;
																																		BgL_arg1346z00_1429
																																			=
																																			(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_valz00_1398)))->BgL_bodyz00);
																																		BgL_arg1345z00_1428
																																			=
																																			BGl_shapez00zztools_shapez00
																																			(BgL_arg1346z00_1429);
																																	}
																																	BgL_arg1344z00_1427
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1345z00_1428,
																																		BNIL);
																																}
																																BgL_arg1338z00_1425
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 5)),
																																	BgL_arg1344z00_1427);
																															}
																														else
																															{	/* Engine/heap.scm 142 */
																																BgL_arg1338z00_1425
																																	=
																																	BGl_string1834z00zzengine_heapz00;
																															}
																														{	/* Engine/heap.scm 146 */
																															obj_t
																																BgL_arg1348z00_1430;
																															{	/* Engine/heap.scm 146 */
																																obj_t
																																	BgL_arg1351z00_1431;
																																obj_t
																																	BgL_arg1352z00_1432;
																																{	/* Engine/heap.scm 146 */
																																	obj_t
																																		BgL_arg1357z00_1433;
																																	BgL_arg1357z00_1433
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_jtz00_1397,
																																		BNIL);
																																	BgL_arg1351z00_1431
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				6)),
																																		BgL_arg1357z00_1433);
																																}
																																{	/* Engine/heap.scm 147 */
																																	obj_t
																																		BgL_arg1360z00_1434;
																																	{	/* Engine/heap.scm 147 */
																																		obj_t
																																			BgL_arg1361z00_1435;
																																		{	/* Engine/heap.scm 147 */
																																			obj_t
																																				BgL_arg1363z00_1436;
																																			{	/* Engine/heap.scm 147 */
																																				obj_t
																																					BgL_arg1364z00_1437;
																																				{	/* Engine/heap.scm 147 */
																																					obj_t
																																						BgL_l1196z00_1438;
																																					BgL_l1196z00_1438
																																						=
																																						(((BgL_sfunz00_bglt) COBJECT(((BgL_sfunz00_bglt) BgL_valz00_1398)))->BgL_argsz00);
																																					if (NULLP(BgL_l1196z00_1438))
																																						{	/* Engine/heap.scm 147 */
																																							BgL_arg1364z00_1437
																																								=
																																								BNIL;
																																						}
																																					else
																																						{	/* Engine/heap.scm 147 */
																																							obj_t
																																								BgL_head1198z00_1439;
																																							{	/* Engine/heap.scm 147 */
																																								obj_t
																																									BgL_arg1381z00_1440;
																																								{	/* Engine/heap.scm 147 */
																																									obj_t
																																										BgL_arg1382z00_1441;
																																									BgL_arg1382z00_1441
																																										=
																																										CAR
																																										(
																																										((obj_t) BgL_l1196z00_1438));
																																									BgL_arg1381z00_1440
																																										=
																																										BGl_shapez00zztools_shapez00
																																										(BgL_arg1382z00_1441);
																																								}
																																								{	/* Engine/heap.scm 147 */
																																									obj_t
																																										BgL_res1800z00_1442;
																																									BgL_res1800z00_1442
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BgL_arg1381z00_1440,
																																										BNIL);
																																									BgL_head1198z00_1439
																																										=
																																										BgL_res1800z00_1442;
																																								}
																																							}
																																							{	/* Engine/heap.scm 147 */
																																								obj_t
																																									BgL_g1201z00_1443;
																																								BgL_g1201z00_1443
																																									=
																																									CDR
																																									(
																																									((obj_t) BgL_l1196z00_1438));
																																								{
																																									obj_t
																																										BgL_l1196z00_1445;
																																									obj_t
																																										BgL_tail1199z00_1446;
																																									BgL_l1196z00_1445
																																										=
																																										BgL_g1201z00_1443;
																																									BgL_tail1199z00_1446
																																										=
																																										BgL_head1198z00_1439;
																																								BgL_zc3z04anonymousza31366ze3z87_1444:
																																									if (NULLP(BgL_l1196z00_1445))
																																										{	/* Engine/heap.scm 147 */
																																											BgL_arg1364z00_1437
																																												=
																																												BgL_head1198z00_1439;
																																										}
																																									else
																																										{	/* Engine/heap.scm 147 */
																																											obj_t
																																												BgL_newtail1200z00_1447;
																																											{	/* Engine/heap.scm 147 */
																																												obj_t
																																													BgL_arg1371z00_1448;
																																												{	/* Engine/heap.scm 147 */
																																													obj_t
																																														BgL_arg1372z00_1449;
																																													BgL_arg1372z00_1449
																																														=
																																														CAR
																																														(
																																														((obj_t) BgL_l1196z00_1445));
																																													BgL_arg1371z00_1448
																																														=
																																														BGl_shapez00zztools_shapez00
																																														(BgL_arg1372z00_1449);
																																												}
																																												{	/* Engine/heap.scm 147 */
																																													obj_t
																																														BgL_res1802z00_1450;
																																													BgL_res1802z00_1450
																																														=
																																														MAKE_YOUNG_PAIR
																																														(BgL_arg1371z00_1448,
																																														BNIL);
																																													BgL_newtail1200z00_1447
																																														=
																																														BgL_res1802z00_1450;
																																												}
																																											}
																																											SET_CDR
																																												(BgL_tail1199z00_1446,
																																												BgL_newtail1200z00_1447);
																																											{	/* Engine/heap.scm 147 */
																																												obj_t
																																													BgL_arg1370z00_1451;
																																												BgL_arg1370z00_1451
																																													=
																																													CDR
																																													(
																																													((obj_t) BgL_l1196z00_1445));
																																												{
																																													obj_t
																																														BgL_tail1199z00_1857;
																																													obj_t
																																														BgL_l1196z00_1856;
																																													BgL_l1196z00_1856
																																														=
																																														BgL_arg1370z00_1451;
																																													BgL_tail1199z00_1857
																																														=
																																														BgL_newtail1200z00_1447;
																																													BgL_tail1199z00_1446
																																														=
																																														BgL_tail1199z00_1857;
																																													BgL_l1196z00_1445
																																														=
																																														BgL_l1196z00_1856;
																																													goto
																																														BgL_zc3z04anonymousza31366ze3z87_1444;
																																												}
																																											}
																																										}
																																								}
																																							}
																																						}
																																				}
																																				BgL_arg1363z00_1436
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1364z00_1437,
																																					BNIL);
																																			}
																																			BgL_arg1361z00_1435
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						7)),
																																				BgL_arg1363z00_1436);
																																		}
																																		BgL_arg1360z00_1434
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1361z00_1435,
																																			BNIL);
																																	}
																																	BgL_arg1352z00_1432
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BGl_string1835z00zzengine_heapz00,
																																		BgL_arg1360z00_1434);
																																}
																																BgL_arg1348z00_1430
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1351z00_1431,
																																	BgL_arg1352z00_1432);
																															}
																															BgL_arg1339z00_1426
																																=
																																MAKE_YOUNG_PAIR
																																(BGl_string1836z00zzengine_heapz00,
																																BgL_arg1348z00_1430);
																														}
																														BgL_arg1335z00_1423
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1338z00_1425,
																															BgL_arg1339z00_1426);
																													}
																													BgL_arg1331z00_1421 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1334z00_1422,
																														BgL_arg1335z00_1423);
																												}
																												BgL_arg1326z00_1416 =
																													MAKE_YOUNG_PAIR
																													(BGl_string1836z00zzengine_heapz00,
																													BgL_arg1331z00_1421);
																											}
																											BgL_arg1324z00_1414 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1325z00_1415,
																												BgL_arg1326z00_1416);
																										}
																										BgL_arg1319z00_1412 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1836z00zzengine_heapz00,
																											BgL_arg1324z00_1414);
																									}
																									BgL_arg1316z00_1410 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1317z00_1411,
																										BgL_arg1319z00_1412);
																								}
																								BgL_arg1314z00_1408 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1836z00zzengine_heapz00,
																									BgL_arg1316z00_1410);
																							}
																							BgL_arg1311z00_1406 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1312z00_1407,
																								BgL_arg1314z00_1408);
																						}
																						BgL_arg1310z00_1405 =
																							MAKE_YOUNG_PAIR
																							(BGl_string1836z00zzengine_heapz00,
																							BgL_arg1311z00_1406);
																					}
																					BgL_arg1308z00_1403 =
																						MAKE_YOUNG_PAIR(BgL_arg1309z00_1404,
																						BgL_arg1310z00_1405);
																				}
																				BgL_arg1307z00_1402 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							8)), BgL_arg1308z00_1403);
																			}
																			bgl_display_obj(BgL_arg1307z00_1402,
																				BgL_port1202z00_1400);
																		}
																		bgl_display_char(((unsigned char) 10),
																			BgL_port1202z00_1400);
																	}
																else
																	{	/* Engine/heap.scm 148 */
																		bool_t BgL_test1884z00_1879;

																		{	/* Engine/heap.scm 148 */
																			bool_t BgL_res1803z00_1452;

																			BgL_res1803z00_1452 =
																				BGl_isazf3zf3zz__objectz00(
																				((obj_t) BgL_valz00_1398),
																				BGl_cfunz00zzast_varz00);
																			BgL_test1884z00_1879 =
																				BgL_res1803z00_1452;
																		}
																		if (BgL_test1884z00_1879)
																			{	/* Engine/heap.scm 149 */
																				obj_t BgL_port1209z00_1453;

																				{	/* Engine/heap.scm 149 */
																					obj_t BgL_res1804z00_1454;

																					{	/* Engine/heap.scm 149 */
																						obj_t BgL_tmpz00_1882;

																						BgL_tmpz00_1882 =
																							BGL_CURRENT_DYNAMIC_ENV();
																						BgL_res1804z00_1454 =
																							BGL_ENV_CURRENT_OUTPUT_PORT
																							(BgL_tmpz00_1882);
																					}
																					BgL_port1209z00_1453 =
																						BgL_res1804z00_1454;
																				}
																				bgl_display_string
																					(BGl_string1832z00zzengine_heapz00,
																					BgL_port1209z00_1453);
																				{	/* Engine/heap.scm 150 */
																					obj_t BgL_arg1394z00_1455;

																					{	/* Engine/heap.scm 150 */
																						obj_t BgL_arg1396z00_1456;

																						{	/* Engine/heap.scm 150 */
																							obj_t BgL_arg1417z00_1457;
																							obj_t BgL_arg1418z00_1458;

																							BgL_arg1417z00_1457 =
																								BGl_shapez00zztools_shapez00
																								(BgL_newz00_1393);
																							{	/* Engine/heap.scm 152 */
																								obj_t BgL_arg1421z00_1459;

																								{	/* Engine/heap.scm 152 */
																									obj_t BgL_arg1422z00_1460;
																									obj_t BgL_arg1441z00_1461;

																									{	/* Engine/heap.scm 152 */
																										obj_t BgL_arg1442z00_1462;

																										BgL_arg1442z00_1462 =
																											MAKE_YOUNG_PAIR
																											(BgL_idz00_1395, BNIL);
																										BgL_arg1422z00_1460 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													0)),
																											BgL_arg1442z00_1462);
																									}
																									{	/* Engine/heap.scm 154 */
																										obj_t BgL_arg1448z00_1463;

																										{	/* Engine/heap.scm 154 */
																											obj_t BgL_arg1449z00_1464;
																											obj_t BgL_arg1461z00_1465;

																											{	/* Engine/heap.scm 154 */
																												obj_t
																													BgL_arg1462z00_1466;
																												BgL_arg1462z00_1466 =
																													MAKE_YOUNG_PAIR
																													(BgL_modulez00_1394,
																													BNIL);
																												BgL_arg1449z00_1464 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 1)),
																													BgL_arg1462z00_1466);
																											}
																											{	/* Engine/heap.scm 156 */
																												obj_t
																													BgL_arg1464z00_1467;
																												{	/* Engine/heap.scm 156 */
																													obj_t
																														BgL_arg1465z00_1468;
																													obj_t
																														BgL_arg1474z00_1469;
																													{	/* Engine/heap.scm 156 */
																														obj_t
																															BgL_arg1476z00_1470;
																														{	/* Engine/heap.scm 156 */
																															obj_t
																																BgL_arg1477z00_1471;
																															{	/* Engine/heap.scm 156 */
																																obj_t
																																	BgL_arg1489z00_1472;
																																BgL_arg1489z00_1472
																																	=
																																	(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_newz00_1393))))->BgL_namez00);
																																{	/* Engine/heap.scm 156 */
																																	obj_t
																																		BgL_list1490z00_1473;
																																	BgL_list1490z00_1473
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1489z00_1472,
																																		BNIL);
																																	BgL_arg1477z00_1471
																																		=
																																		BGl_formatz00zz__r4_output_6_10_3z00
																																		(BGl_string1833z00zzengine_heapz00,
																																		BgL_list1490z00_1473);
																															}}
																															BgL_arg1476z00_1470
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1477z00_1471,
																																BNIL);
																														}
																														BgL_arg1465z00_1468
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 2)),
																															BgL_arg1476z00_1470);
																													}
																													{	/* Engine/heap.scm 158 */
																														obj_t
																															BgL_arg1493z00_1474;
																														{	/* Engine/heap.scm 158 */
																															obj_t
																																BgL_arg1495z00_1475;
																															obj_t
																																BgL_arg1497z00_1476;
																															{	/* Engine/heap.scm 158 */
																																obj_t
																																	BgL_arg1518z00_1477;
																																BgL_arg1518z00_1477
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_qtz00_1396,
																																	BNIL);
																																BgL_arg1495z00_1475
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 3)),
																																	BgL_arg1518z00_1477);
																															}
																															{	/* Engine/heap.scm 160 */
																																obj_t
																																	BgL_arg1521z00_1478;
																																{	/* Engine/heap.scm 160 */
																																	obj_t
																																		BgL_arg1528z00_1479;
																																	obj_t
																																		BgL_arg1536z00_1480;
																																	{	/* Engine/heap.scm 160 */
																																		obj_t
																																			BgL_arg1537z00_1481;
																																		BgL_arg1537z00_1481
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_jtz00_1397,
																																			BNIL);
																																		BgL_arg1528z00_1479
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					6)),
																																			BgL_arg1537z00_1481);
																																	}
																																	{	/* Engine/heap.scm 161 */
																																		obj_t
																																			BgL_arg1540z00_1482;
																																		{	/* Engine/heap.scm 161 */
																																			obj_t
																																				BgL_arg1552z00_1483;
																																			{	/* Engine/heap.scm 161 */
																																				obj_t
																																					BgL_arg1553z00_1484;
																																				{	/* Engine/heap.scm 161 */
																																					obj_t
																																						BgL_arg1558z00_1485;
																																					{	/* Engine/heap.scm 161 */
																																						obj_t
																																							BgL_l1203z00_1486;
																																						BgL_l1203z00_1486
																																							=
																																							(((BgL_cfunz00_bglt) COBJECT(((BgL_cfunz00_bglt) BgL_valz00_1398)))->BgL_argszd2typezd2);
																																						if (NULLP(BgL_l1203z00_1486))
																																							{	/* Engine/heap.scm 161 */
																																								BgL_arg1558z00_1485
																																									=
																																									BNIL;
																																							}
																																						else
																																							{	/* Engine/heap.scm 161 */
																																								obj_t
																																									BgL_head1205z00_1487;
																																								{	/* Engine/heap.scm 161 */
																																									obj_t
																																										BgL_arg1575z00_1488;
																																									{	/* Engine/heap.scm 161 */
																																										obj_t
																																											BgL_arg1578z00_1489;
																																										BgL_arg1578z00_1489
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_l1203z00_1486));
																																										BgL_arg1575z00_1488
																																											=
																																											BGl_shapez00zztools_shapez00
																																											(BgL_arg1578z00_1489);
																																									}
																																									{	/* Engine/heap.scm 161 */
																																										obj_t
																																											BgL_res1806z00_1490;
																																										BgL_res1806z00_1490
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1575z00_1488,
																																											BNIL);
																																										BgL_head1205z00_1487
																																											=
																																											BgL_res1806z00_1490;
																																									}
																																								}
																																								{	/* Engine/heap.scm 161 */
																																									obj_t
																																										BgL_g1208z00_1491;
																																									BgL_g1208z00_1491
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_l1203z00_1486));
																																									{
																																										obj_t
																																											BgL_l1203z00_1493;
																																										obj_t
																																											BgL_tail1206z00_1494;
																																										BgL_l1203z00_1493
																																											=
																																											BgL_g1208z00_1491;
																																										BgL_tail1206z00_1494
																																											=
																																											BgL_head1205z00_1487;
																																									BgL_zc3z04anonymousza31560ze3z87_1492:
																																										if (NULLP(BgL_l1203z00_1493))
																																											{	/* Engine/heap.scm 161 */
																																												BgL_arg1558z00_1485
																																													=
																																													BgL_head1205z00_1487;
																																											}
																																										else
																																											{	/* Engine/heap.scm 161 */
																																												obj_t
																																													BgL_newtail1207z00_1495;
																																												{	/* Engine/heap.scm 161 */
																																													obj_t
																																														BgL_arg1565z00_1496;
																																													{	/* Engine/heap.scm 161 */
																																														obj_t
																																															BgL_arg1573z00_1497;
																																														BgL_arg1573z00_1497
																																															=
																																															CAR
																																															(
																																															((obj_t) BgL_l1203z00_1493));
																																														BgL_arg1565z00_1496
																																															=
																																															BGl_shapez00zztools_shapez00
																																															(BgL_arg1573z00_1497);
																																													}
																																													{	/* Engine/heap.scm 161 */
																																														obj_t
																																															BgL_res1808z00_1498;
																																														BgL_res1808z00_1498
																																															=
																																															MAKE_YOUNG_PAIR
																																															(BgL_arg1565z00_1496,
																																															BNIL);
																																														BgL_newtail1207z00_1495
																																															=
																																															BgL_res1808z00_1498;
																																													}
																																												}
																																												SET_CDR
																																													(BgL_tail1206z00_1494,
																																													BgL_newtail1207z00_1495);
																																												{	/* Engine/heap.scm 161 */
																																													obj_t
																																														BgL_arg1564z00_1499;
																																													BgL_arg1564z00_1499
																																														=
																																														CDR
																																														(
																																														((obj_t) BgL_l1203z00_1493));
																																													{
																																														obj_t
																																															BgL_tail1206z00_1927;
																																														obj_t
																																															BgL_l1203z00_1926;
																																														BgL_l1203z00_1926
																																															=
																																															BgL_arg1564z00_1499;
																																														BgL_tail1206z00_1927
																																															=
																																															BgL_newtail1207z00_1495;
																																														BgL_tail1206z00_1494
																																															=
																																															BgL_tail1206z00_1927;
																																														BgL_l1203z00_1493
																																															=
																																															BgL_l1203z00_1926;
																																														goto
																																															BgL_zc3z04anonymousza31560ze3z87_1492;
																																													}
																																												}
																																											}
																																									}
																																								}
																																							}
																																					}
																																					BgL_arg1553z00_1484
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1558z00_1485,
																																						BNIL);
																																				}
																																				BgL_arg1552z00_1483
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 7)), BgL_arg1553z00_1484);
																																			}
																																			BgL_arg1540z00_1482
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1552z00_1483,
																																				BNIL);
																																		}
																																		BgL_arg1536z00_1480
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string1835z00zzengine_heapz00,
																																			BgL_arg1540z00_1482);
																																	}
																																	BgL_arg1521z00_1478
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1528z00_1479,
																																		BgL_arg1536z00_1480);
																																}
																																BgL_arg1497z00_1476
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1836z00zzengine_heapz00,
																																	BgL_arg1521z00_1478);
																															}
																															BgL_arg1493z00_1474
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1495z00_1475,
																																BgL_arg1497z00_1476);
																														}
																														BgL_arg1474z00_1469
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string1836z00zzengine_heapz00,
																															BgL_arg1493z00_1474);
																													}
																													BgL_arg1464z00_1467 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1465z00_1468,
																														BgL_arg1474z00_1469);
																												}
																												BgL_arg1461z00_1465 =
																													MAKE_YOUNG_PAIR
																													(BGl_string1836z00zzengine_heapz00,
																													BgL_arg1464z00_1467);
																											}
																											BgL_arg1448z00_1463 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1449z00_1464,
																												BgL_arg1461z00_1465);
																										}
																										BgL_arg1441z00_1461 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1836z00zzengine_heapz00,
																											BgL_arg1448z00_1463);
																									}
																									BgL_arg1421z00_1459 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1422z00_1460,
																										BgL_arg1441z00_1461);
																								}
																								BgL_arg1418z00_1458 =
																									MAKE_YOUNG_PAIR
																									(BGl_string1836z00zzengine_heapz00,
																									BgL_arg1421z00_1459);
																							}
																							BgL_arg1396z00_1456 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1417z00_1457,
																								BgL_arg1418z00_1458);
																						}
																						BgL_arg1394z00_1455 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 9)),
																							BgL_arg1396z00_1456);
																					}
																					bgl_display_obj(BgL_arg1394z00_1455,
																						BgL_port1209z00_1453);
																				}
																				bgl_display_char(((unsigned char) 10),
																					BgL_port1209z00_1453);
																			}
																		else
																			{	/* Engine/heap.scm 148 */
																				if (
																					((((BgL_typez00_bglt) COBJECT(
																									(((BgL_variablez00_bglt)
																											COBJECT((
																													(BgL_variablez00_bglt)
																													((BgL_globalz00_bglt)
																														BgL_newz00_1393))))->
																										BgL_typez00)))->
																							BgL_idz00) ==
																						CNST_TABLE_REF(((long) 10))))
																					{	/* Engine/heap.scm 163 */
																						BFALSE;
																					}
																				else
																					{	/* Engine/heap.scm 164 */
																						obj_t BgL_port1210z00_1500;

																						{	/* Engine/heap.scm 164 */
																							obj_t BgL_res1809z00_1501;

																							{	/* Engine/heap.scm 164 */
																								obj_t BgL_tmpz00_1955;

																								BgL_tmpz00_1955 =
																									BGL_CURRENT_DYNAMIC_ENV();
																								BgL_res1809z00_1501 =
																									BGL_ENV_CURRENT_OUTPUT_PORT
																									(BgL_tmpz00_1955);
																							}
																							BgL_port1210z00_1500 =
																								BgL_res1809z00_1501;
																						}
																						bgl_display_string
																							(BGl_string1832z00zzengine_heapz00,
																							BgL_port1210z00_1500);
																						{	/* Engine/heap.scm 165 */
																							obj_t BgL_arg1588z00_1502;

																							{	/* Engine/heap.scm 165 */
																								obj_t BgL_arg1589z00_1503;

																								{	/* Engine/heap.scm 165 */
																									obj_t BgL_arg1592z00_1504;
																									obj_t BgL_arg1593z00_1505;

																									BgL_arg1592z00_1504 =
																										BGl_shapez00zztools_shapez00
																										(BgL_newz00_1393);
																									{	/* Engine/heap.scm 167 */
																										obj_t BgL_arg1597z00_1506;

																										{	/* Engine/heap.scm 167 */
																											obj_t BgL_arg1599z00_1507;
																											obj_t BgL_arg1604z00_1508;

																											{	/* Engine/heap.scm 167 */
																												obj_t
																													BgL_arg1605z00_1509;
																												BgL_arg1605z00_1509 =
																													MAKE_YOUNG_PAIR
																													(BgL_idz00_1395,
																													BNIL);
																												BgL_arg1599z00_1507 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 0)),
																													BgL_arg1605z00_1509);
																											}
																											{	/* Engine/heap.scm 169 */
																												obj_t
																													BgL_arg1606z00_1510;
																												{	/* Engine/heap.scm 169 */
																													obj_t
																														BgL_arg1611z00_1511;
																													obj_t
																														BgL_arg1612z00_1512;
																													{	/* Engine/heap.scm 169 */
																														obj_t
																															BgL_arg1613z00_1513;
																														BgL_arg1613z00_1513
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_modulez00_1394,
																															BNIL);
																														BgL_arg1611z00_1511
																															=
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 1)),
																															BgL_arg1613z00_1513);
																													}
																													{	/* Engine/heap.scm 171 */
																														obj_t
																															BgL_arg1624z00_1514;
																														{	/* Engine/heap.scm 171 */
																															obj_t
																																BgL_arg1626z00_1515;
																															obj_t
																																BgL_arg1627z00_1516;
																															{	/* Engine/heap.scm 171 */
																																obj_t
																																	BgL_arg1631z00_1517;
																																{	/* Engine/heap.scm 171 */
																																	obj_t
																																		BgL_arg1634z00_1518;
																																	{	/* Engine/heap.scm 171 */
																																		obj_t
																																			BgL_arg1639z00_1519;
																																		BgL_arg1639z00_1519
																																			=
																																			(((BgL_variablez00_bglt) COBJECT(((BgL_variablez00_bglt) ((BgL_globalz00_bglt) BgL_newz00_1393))))->BgL_namez00);
																																		{	/* Engine/heap.scm 171 */
																																			obj_t
																																				BgL_list1640z00_1520;
																																			BgL_list1640z00_1520
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1639z00_1519,
																																				BNIL);
																																			BgL_arg1634z00_1518
																																				=
																																				BGl_formatz00zz__r4_output_6_10_3z00
																																				(BGl_string1833z00zzengine_heapz00,
																																				BgL_list1640z00_1520);
																																	}}
																																	BgL_arg1631z00_1517
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1634z00_1518,
																																		BNIL);
																																}
																																BgL_arg1626z00_1515
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 2)),
																																	BgL_arg1631z00_1517);
																															}
																															{	/* Engine/heap.scm 173 */
																																obj_t
																																	BgL_arg1641z00_1521;
																																{	/* Engine/heap.scm 173 */
																																	obj_t
																																		BgL_arg1644z00_1522;
																																	obj_t
																																		BgL_arg1652z00_1523;
																																	{	/* Engine/heap.scm 173 */
																																		obj_t
																																			BgL_arg1662z00_1524;
																																		BgL_arg1662z00_1524
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_qtz00_1396,
																																			BNIL);
																																		BgL_arg1644z00_1522
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					3)),
																																			BgL_arg1662z00_1524);
																																	}
																																	{	/* Engine/heap.scm 175 */
																																		obj_t
																																			BgL_arg1663z00_1525;
																																		{	/* Engine/heap.scm 175 */
																																			obj_t
																																				BgL_arg1664z00_1526;
																																			{	/* Engine/heap.scm 175 */
																																				obj_t
																																					BgL_arg1667z00_1527;
																																				BgL_arg1667z00_1527
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_jtz00_1397,
																																					BNIL);
																																				BgL_arg1664z00_1526
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 6)), BgL_arg1667z00_1527);
																																			}
																																			BgL_arg1663z00_1525
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1664z00_1526,
																																				BNIL);
																																		}
																																		BgL_arg1652z00_1523
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_string1836z00zzengine_heapz00,
																																			BgL_arg1663z00_1525);
																																	}
																																	BgL_arg1641z00_1521
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1644z00_1522,
																																		BgL_arg1652z00_1523);
																																}
																																BgL_arg1627z00_1516
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BGl_string1836z00zzengine_heapz00,
																																	BgL_arg1641z00_1521);
																															}
																															BgL_arg1624z00_1514
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1626z00_1515,
																																BgL_arg1627z00_1516);
																														}
																														BgL_arg1612z00_1512
																															=
																															MAKE_YOUNG_PAIR
																															(BGl_string1836z00zzengine_heapz00,
																															BgL_arg1624z00_1514);
																													}
																													BgL_arg1606z00_1510 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1611z00_1511,
																														BgL_arg1612z00_1512);
																												}
																												BgL_arg1604z00_1508 =
																													MAKE_YOUNG_PAIR
																													(BGl_string1836z00zzengine_heapz00,
																													BgL_arg1606z00_1510);
																											}
																											BgL_arg1597z00_1506 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1599z00_1507,
																												BgL_arg1604z00_1508);
																										}
																										BgL_arg1593z00_1505 =
																											MAKE_YOUNG_PAIR
																											(BGl_string1836z00zzengine_heapz00,
																											BgL_arg1597z00_1506);
																									}
																									BgL_arg1589z00_1503 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1592z00_1504,
																										BgL_arg1593z00_1505);
																								}
																								BgL_arg1588z00_1502 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 11)),
																									BgL_arg1589z00_1503);
																							}
																							bgl_display_obj
																								(BgL_arg1588z00_1502,
																								BgL_port1210z00_1500);
																						}
																						bgl_display_char(((unsigned char)
																								10), BgL_port1210z00_1500);
									}}}}}}}}}}
									{
										obj_t BgL_l1211z00_1996;

										BgL_l1211z00_1996 = CDR(BgL_l1211z00_1530);
										BgL_l1211z00_1530 = BgL_l1211z00_1996;
										goto BgL_zc3z04anonymousza31301ze3z87_1529;
									}
								}
							else
								{	/* Engine/heap.scm 178 */
									BgL_tmpz00_1782 = ((bool_t) 1);
								}
						}
					}
				}
				return BBOOL(BgL_tmpz00_1782);
			}
		}

	}



/* dump-Tenv */
	obj_t BGl_dumpzd2Tenvzd2zzengine_heapz00(obj_t BgL_tenvz00_6)
	{
		{	/* Engine/heap.scm 183 */
			return
				BGl_hashtablezd2forzd2eachz00zz__hashz00(BgL_tenvz00_6,
				BGl_proc1837z00zzengine_heapz00);
		}

	}



/* &<@anonymous:1685> */
	obj_t BGl_z62zc3z04anonymousza31685ze3ze5zzengine_heapz00(obj_t
		BgL_envz00_1347, obj_t BgL_kz00_1348, obj_t BgL_newz00_1349)
	{
		{	/* Engine/heap.scm 185 */
			{	/* Engine/heap.scm 186 */
				obj_t BgL_idz00_1531;

				BgL_idz00_1531 =
					(((BgL_typez00_bglt) COBJECT(
							((BgL_typez00_bglt) BgL_newz00_1349)))->BgL_idz00);
				{	/* Engine/heap.scm 186 */
					obj_t BgL_namez00_1532;

					BgL_namez00_1532 =
						(((BgL_typez00_bglt) COBJECT(
								((BgL_typez00_bglt) BgL_newz00_1349)))->BgL_namez00);
					{	/* Engine/heap.scm 187 */

						if (BGl_isazf3zf3zz__objectz00(BgL_newz00_1349,
								BGl_tclassz00zzobject_classz00))
							{	/* Engine/heap.scm 190 */
								obj_t BgL_port1220z00_1533;

								{	/* Engine/heap.scm 190 */
									obj_t BgL_res1812z00_1534;

									{	/* Engine/heap.scm 190 */
										obj_t BgL_tmpz00_2006;

										BgL_tmpz00_2006 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1812z00_1534 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2006);
									}
									BgL_port1220z00_1533 = BgL_res1812z00_1534;
								}
								bgl_display_string(BGl_string1832z00zzengine_heapz00,
									BgL_port1220z00_1533);
								{	/* Engine/heap.scm 191 */
									obj_t BgL_arg1687z00_1535;

									{	/* Engine/heap.scm 191 */
										obj_t BgL_arg1688z00_1536;

										{	/* Engine/heap.scm 191 */
											obj_t BgL_arg1692z00_1537;
											obj_t BgL_arg1695z00_1538;

											BgL_arg1692z00_1537 =
												BGl_shapez00zztools_shapez00(BgL_newz00_1349);
											{	/* Engine/heap.scm 192 */
												obj_t BgL_arg1696z00_1539;
												obj_t BgL_arg1697z00_1540;

												{	/* Engine/heap.scm 192 */
													obj_t BgL_arg1698z00_1541;

													{	/* Engine/heap.scm 192 */
														obj_t BgL_arg1704z00_1542;

														{	/* Engine/heap.scm 192 */
															obj_t BgL_arg1707z00_1543;

															{
																BgL_tclassz00_bglt BgL_auxz00_2011;

																{
																	obj_t BgL_auxz00_2012;

																	{	/* Engine/heap.scm 192 */
																		BgL_objectz00_bglt BgL_tmpz00_2013;

																		BgL_tmpz00_2013 =
																			((BgL_objectz00_bglt)
																			((BgL_typez00_bglt) BgL_newz00_1349));
																		BgL_auxz00_2012 =
																			BGL_OBJECT_WIDENING(BgL_tmpz00_2013);
																	}
																	BgL_auxz00_2011 =
																		((BgL_tclassz00_bglt) BgL_auxz00_2012);
																}
																BgL_arg1707z00_1543 =
																	(((BgL_tclassz00_bglt)
																		COBJECT(BgL_auxz00_2011))->
																	BgL_itszd2superzd2);
															}
															BgL_arg1704z00_1542 =
																BGl_shapez00zztools_shapez00
																(BgL_arg1707z00_1543);
														}
														BgL_arg1698z00_1541 =
															MAKE_YOUNG_PAIR(BgL_arg1704z00_1542, BNIL);
													}
													BgL_arg1696z00_1539 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)),
														BgL_arg1698z00_1541);
												}
												{	/* Engine/heap.scm 193 */
													obj_t BgL_arg1708z00_1544;

													{	/* Engine/heap.scm 193 */
														obj_t BgL_l1214z00_1545;

														{
															BgL_tclassz00_bglt BgL_auxz00_2023;

															{
																obj_t BgL_auxz00_2024;

																{	/* Engine/heap.scm 193 */
																	BgL_objectz00_bglt BgL_tmpz00_2025;

																	BgL_tmpz00_2025 =
																		((BgL_objectz00_bglt)
																		((BgL_typez00_bglt) BgL_newz00_1349));
																	BgL_auxz00_2024 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2025);
																}
																BgL_auxz00_2023 =
																	((BgL_tclassz00_bglt) BgL_auxz00_2024);
															}
															BgL_l1214z00_1545 =
																(((BgL_tclassz00_bglt)
																	COBJECT(BgL_auxz00_2023))->BgL_slotsz00);
														}
														if (NULLP(BgL_l1214z00_1545))
															{	/* Engine/heap.scm 193 */
																BgL_arg1708z00_1544 = BNIL;
															}
														else
															{	/* Engine/heap.scm 193 */
																obj_t BgL_head1216z00_1546;

																{	/* Engine/heap.scm 193 */
																	obj_t BgL_arg1726z00_1547;

																	{	/* Engine/heap.scm 193 */
																		obj_t BgL_arg1727z00_1548;

																		BgL_arg1727z00_1548 =
																			CAR(((obj_t) BgL_l1214z00_1545));
																		BgL_arg1726z00_1547 =
																			BGl_shapez00zztools_shapez00
																			(BgL_arg1727z00_1548);
																	}
																	{	/* Engine/heap.scm 193 */
																		obj_t BgL_res1814z00_1549;

																		BgL_res1814z00_1549 =
																			MAKE_YOUNG_PAIR(BgL_arg1726z00_1547,
																			BNIL);
																		BgL_head1216z00_1546 = BgL_res1814z00_1549;
																	}
																}
																{	/* Engine/heap.scm 193 */
																	obj_t BgL_g1219z00_1550;

																	BgL_g1219z00_1550 =
																		CDR(((obj_t) BgL_l1214z00_1545));
																	{
																		obj_t BgL_l1214z00_1552;
																		obj_t BgL_tail1217z00_1553;

																		BgL_l1214z00_1552 = BgL_g1219z00_1550;
																		BgL_tail1217z00_1553 = BgL_head1216z00_1546;
																	BgL_zc3z04anonymousza31710ze3z87_1551:
																		if (NULLP(BgL_l1214z00_1552))
																			{	/* Engine/heap.scm 193 */
																				BgL_arg1708z00_1544 =
																					BgL_head1216z00_1546;
																			}
																		else
																			{	/* Engine/heap.scm 193 */
																				obj_t BgL_newtail1218z00_1554;

																				{	/* Engine/heap.scm 193 */
																					obj_t BgL_arg1719z00_1555;

																					{	/* Engine/heap.scm 193 */
																						obj_t BgL_arg1725z00_1556;

																						BgL_arg1725z00_1556 =
																							CAR(((obj_t) BgL_l1214z00_1552));
																						BgL_arg1719z00_1555 =
																							BGl_shapez00zztools_shapez00
																							(BgL_arg1725z00_1556);
																					}
																					{	/* Engine/heap.scm 193 */
																						obj_t BgL_res1816z00_1557;

																						BgL_res1816z00_1557 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1719z00_1555, BNIL);
																						BgL_newtail1218z00_1554 =
																							BgL_res1816z00_1557;
																					}
																				}
																				SET_CDR(BgL_tail1217z00_1553,
																					BgL_newtail1218z00_1554);
																				{	/* Engine/heap.scm 193 */
																					obj_t BgL_arg1712z00_1558;

																					BgL_arg1712z00_1558 =
																						CDR(((obj_t) BgL_l1214z00_1552));
																					{
																						obj_t BgL_tail1217z00_2049;
																						obj_t BgL_l1214z00_2048;

																						BgL_l1214z00_2048 =
																							BgL_arg1712z00_1558;
																						BgL_tail1217z00_2049 =
																							BgL_newtail1218z00_1554;
																						BgL_tail1217z00_1553 =
																							BgL_tail1217z00_2049;
																						BgL_l1214z00_1552 =
																							BgL_l1214z00_2048;
																						goto
																							BgL_zc3z04anonymousza31710ze3z87_1551;
																					}
																				}
																			}
																	}
																}
															}
													}
													BgL_arg1697z00_1540 =
														BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
														(BgL_arg1708z00_1544, BNIL);
												}
												BgL_arg1695z00_1538 =
													MAKE_YOUNG_PAIR(BgL_arg1696z00_1539,
													BgL_arg1697z00_1540);
											}
											BgL_arg1688z00_1536 =
												MAKE_YOUNG_PAIR(BgL_arg1692z00_1537,
												BgL_arg1695z00_1538);
										}
										BgL_arg1687z00_1535 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
											BgL_arg1688z00_1536);
									}
									bgl_display_obj(BgL_arg1687z00_1535, BgL_port1220z00_1533);
								}
								return
									bgl_display_char(((unsigned char) 10), BgL_port1220z00_1533);
							}
						else
							{	/* Engine/heap.scm 194 */
								obj_t BgL_port1221z00_1559;

								{	/* Engine/heap.scm 194 */
									obj_t BgL_res1817z00_1560;

									{	/* Engine/heap.scm 194 */
										obj_t BgL_tmpz00_2057;

										BgL_tmpz00_2057 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1817z00_1560 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_2057);
									}
									BgL_port1221z00_1559 = BgL_res1817z00_1560;
								}
								bgl_display_string(BGl_string1832z00zzengine_heapz00,
									BgL_port1221z00_1559);
								{	/* Engine/heap.scm 194 */
									obj_t BgL_arg1728z00_1561;

									{	/* Engine/heap.scm 194 */
										obj_t BgL_arg1729z00_1562;

										{	/* Engine/heap.scm 194 */
											obj_t BgL_arg1731z00_1563;

											{	/* Engine/heap.scm 194 */
												obj_t BgL_arg1732z00_1564;

												{	/* Engine/heap.scm 194 */
													obj_t BgL_arg1733z00_1565;

													BgL_arg1733z00_1565 =
														MAKE_YOUNG_PAIR(BgL_namez00_1532, BNIL);
													BgL_arg1732z00_1564 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
														BgL_arg1733z00_1565);
												}
												BgL_arg1731z00_1563 =
													MAKE_YOUNG_PAIR(BgL_arg1732z00_1564, BNIL);
											}
											BgL_arg1729z00_1562 =
												MAKE_YOUNG_PAIR(BgL_idz00_1531, BgL_arg1731z00_1563);
										}
										BgL_arg1728z00_1561 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
											BgL_arg1729z00_1562);
									}
									bgl_display_obj(BgL_arg1728z00_1561, BgL_port1221z00_1559);
								}
								return
									bgl_display_char(((unsigned char) 10), BgL_port1221z00_1559);
		}}}}}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_heapz00()
	{
		{	/* Engine/heap.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzobject_classz00(((long) 502006413),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 147989034),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
			return
				BGl_modulezd2initializa7ationz75zzmodule_pragmaz00(((long) 433305537),
				BSTRING_TO_STRING(BGl_string1838z00zzengine_heapz00));
		}

	}

#ifdef __cplusplus
}
#endif
