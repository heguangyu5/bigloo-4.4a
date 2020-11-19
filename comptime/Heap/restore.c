/*===========================================================================*/
/*   (Heap/restore.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Heap/restore.scm) */
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


	extern obj_t BGl_setzd2genvz12zc0zzast_envz00(obj_t);
	static obj_t BGl_z62restorezd2heapzb0zzheap_restorez00(obj_t);
	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_restorezd2additionalzd2heapz00zzheap_restorez00(obj_t);
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzheap_restorez00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_unbindzd2callzf2ccz12z32zzheap_restorez00();
	static obj_t BGl_appendzd221011zd2zzheap_restorez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzheap_restorez00();
	static obj_t BGl_z62zc3z04anonymousza31326ze3ze5zzheap_restorez00(obj_t,
		obj_t);
	BGL_IMPORT obj_t close_binary_port(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31271ze3ze5zzheap_restorez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzheap_restorez00(obj_t);
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	static obj_t BGl_z62heapzd2filezd2namez62zzheap_restorez00(obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00;
	static obj_t BGl_z62restorezd2additionalzd2heapz62zzheap_restorez00(obj_t,
		obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzheap_restorez00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_addzd2tenvz12zc0zztype_envz00(obj_t);
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_za2heapzd2markza2zd2zzheap_restorez00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzheap_restorez00 = BUNSPEC;
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	static obj_t BGl_z62heapzd2modulezd2listz62zzheap_restorez00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzheap_restorez00();
	BGL_IMPORT obj_t BGl_formatz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	BGL_IMPORT obj_t input_obj(obj_t);
	static obj_t BGl_genericzd2initzd2zzheap_restorez00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	extern obj_t BGl_addzd2genvz12zc0zzast_envz00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_z62zc3z04anonymousza31260ze3ze5zzheap_restorez00(obj_t,
		obj_t);
	static obj_t BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31335ze3ze5zzheap_restorez00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzheap_restorez00(obj_t,
		obj_t);
	extern obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_restorezd2heapzd2zzheap_restorez00();
	extern obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_setzd2tenvz12zc0zztype_envz00(obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzheap_restorez00();
	extern obj_t BGl_za2unsafezd2heapza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzheap_restorez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzheap_restorez00();
	BGL_IMPORT obj_t BGl_hashtablezd2forzd2eachz00zz__hashz00(obj_t, obj_t);
	extern obj_t BGl_findzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00 = BUNSPEC;
	static obj_t BGl_z62restorezd2additionalzd2heapsz62zzheap_restorez00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_heapzd2filezd2namez00zzheap_restorez00(obj_t);
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_za2callzf2cczf3za2z01zzengine_paramz00;
	extern obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t
		BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static bool_t BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2modulezd2listzd2envzd2zzheap_restorez00,
		BgL_bgl_za762heapza7d2module1538z00, va_generic_entry,
		BGl_z62heapzd2modulezd2listz62zzheap_restorez00, BUNSPEC, -1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1517z00zzheap_restorez00,
		BgL_bgl_za762za7c3za704anonymo1539za7,
		BGl_z62zc3z04anonymousza31247ze3ze5zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1518z00zzheap_restorez00,
		BgL_bgl_za762za7c3za704anonymo1540za7,
		BGl_z62zc3z04anonymousza31260ze3ze5zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1523z00zzheap_restorez00,
		BgL_bgl_za762za7c3za704anonymo1541za7,
		BGl_z62zc3z04anonymousza31326ze3ze5zzheap_restorez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1524z00zzheap_restorez00,
		BgL_bgl_za762za7c3za704anonymo1542za7,
		BGl_z62zc3z04anonymousza31335ze3ze5zzheap_restorez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_restorezd2heapzd2envz00zzheap_restorez00,
		BgL_bgl_za762restoreza7d2hea1543z00,
		BGl_z62restorezd2heapzb0zzheap_restorez00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_restorezd2additionalzd2heapszd2envzd2zzheap_restorez00,
		BgL_bgl_za762restoreza7d2add1544z00,
		BGl_z62restorezd2additionalzd2heapsz62zzheap_restorez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1506z00zzheap_restorez00,
		BgL_bgl_string1506za700za7za7h1545za7, "Heap", 4);
	      DEFINE_STRING(BGl_string1507z00zzheap_restorez00,
		BgL_bgl_string1507za700za7za7h1546za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1508z00zzheap_restorez00,
		BgL_bgl_string1508za700za7za7h1547za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1509z00zzheap_restorez00,
		BgL_bgl_string1509za700za7za7h1548za7, "]", 1);
	      DEFINE_STRING(BGl_string1510z00zzheap_restorez00,
		BgL_bgl_string1510za700za7za7h1549za7, "      [reading ", 15);
	      DEFINE_STRING(BGl_string1511z00zzheap_restorez00,
		BgL_bgl_string1511za700za7za7h1550za7, "Corrupted heap", 14);
	      DEFINE_STRING(BGl_string1512z00zzheap_restorez00,
		BgL_bgl_string1512za700za7za7h1551za7, "~a vs. ~a", 9);
	      DEFINE_STRING(BGl_string1513z00zzheap_restorez00,
		BgL_bgl_string1513za700za7za7h1552za7, "Target language mismatch", 24);
	      DEFINE_STRING(BGl_string1514z00zzheap_restorez00,
		BgL_bgl_string1514za700za7za7h1553za7, "Heap is `~a', Bigloo is `~a'", 28);
	      DEFINE_STRING(BGl_string1515z00zzheap_restorez00,
		BgL_bgl_string1515za700za7za7h1554za7, "Release mismatch", 16);
	      DEFINE_STRING(BGl_string1516z00zzheap_restorez00,
		BgL_bgl_string1516za700za7za7h1555za7, "Specific version mismatch", 25);
	      DEFINE_STRING(BGl_string1519z00zzheap_restorez00,
		BgL_bgl_string1519za700za7za7h1556za7, "Cannot open heap file ~s", 24);
	      DEFINE_STRING(BGl_string1520z00zzheap_restorez00,
		BgL_bgl_string1520za700za7za7h1557za7, "restore-heap", 12);
	      DEFINE_STRING(BGl_string1521z00zzheap_restorez00,
		BgL_bgl_string1521za700za7za7h1558za7, ".", 1);
	      DEFINE_STRING(BGl_string1522z00zzheap_restorez00,
		BgL_bgl_string1522za700za7za7h1559za7, "Library", 7);
	      DEFINE_STRING(BGl_string1525z00zzheap_restorez00,
		BgL_bgl_string1525za700za7za7h1560za7, "-", 1);
	      DEFINE_STRING(BGl_string1526z00zzheap_restorez00,
		BgL_bgl_string1526za700za7za7h1561za7, "heap_restore", 12);
	      DEFINE_STRING(BGl_string1527z00zzheap_restorez00,
		BgL_bgl_string1527za700za7za7h1562za7,
		"make-heap call-with-current-continuation __r4_control_features_6_9 call/cc pass-started heap-mark ",
		98);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_restorezd2additionalzd2heapzd2envzd2zzheap_restorez00,
		BgL_bgl_za762restoreza7d2add1563z00,
		BGl_z62restorezd2additionalzd2heapz62zzheap_restorez00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_heapzd2filezd2namezd2envzd2zzheap_restorez00,
		BgL_bgl_za762heapza7d2fileza7d1564za7,
		BGl_z62heapzd2filezd2namez62zzheap_restorez00, 0L, BUNSPEC, 1);
	BGL_IMPORT obj_t BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00;

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2heapzd2markza2zd2zzheap_restorez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzheap_restorez00));
		   
			 ADD_ROOT((void *) (&BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long
		BgL_checksumz00_981, char *BgL_fromz00_982)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzheap_restorez00))
				{
					BGl_requirezd2initializa7ationz75zzheap_restorez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzheap_restorez00();
					BGl_libraryzd2moduleszd2initz00zzheap_restorez00();
					BGl_cnstzd2initzd2zzheap_restorez00();
					BGl_importedzd2moduleszd2initz00zzheap_restorez00();
					return BGl_toplevelzd2initzd2zzheap_restorez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"heap_restore");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"heap_restore");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			{	/* Heap/restore.scm 15 */
				obj_t BgL_cportz00_952;

				{	/* Heap/restore.scm 15 */
					obj_t BgL_stringz00_960;

					BgL_stringz00_960 = BGl_string1527z00zzheap_restorez00;
					{	/* Heap/restore.scm 15 */
						obj_t BgL_startz00_961;

						BgL_startz00_961 = BINT(((long) 0));
						{	/* Heap/restore.scm 15 */
							obj_t BgL_endz00_962;

							BgL_endz00_962 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_960)));
							{	/* Heap/restore.scm 15 */

								BgL_cportz00_952 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_960, BgL_startz00_961, BgL_endz00_962);
				}}}}
				{
					long BgL_iz00_953;

					BgL_iz00_953 = ((long) 5);
				BgL_loopz00_954:
					if ((BgL_iz00_953 == ((long) -1)))
						{	/* Heap/restore.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Heap/restore.scm 15 */
							{	/* Heap/restore.scm 15 */
								obj_t BgL_arg1536z00_956;

								{	/* Heap/restore.scm 15 */

									{	/* Heap/restore.scm 15 */
										obj_t BgL_locationz00_958;

										BgL_locationz00_958 = BBOOL(((bool_t) 0));
										{	/* Heap/restore.scm 15 */

											BgL_arg1536z00_956 =
												BGl_readz00zz__readerz00(BgL_cportz00_952,
												BgL_locationz00_958);
										}
									}
								}
								{	/* Heap/restore.scm 15 */
									int BgL_tmpz00_1014;

									BgL_tmpz00_1014 = (int) (BgL_iz00_953);
									CNST_TABLE_SET(BgL_tmpz00_1014, BgL_arg1536z00_956);
							}}
							{	/* Heap/restore.scm 15 */
								int BgL_auxz00_959;

								BgL_auxz00_959 = (int) ((BgL_iz00_953 - ((long) 1)));
								{
									long BgL_iz00_1019;

									BgL_iz00_1019 = (long) (BgL_auxz00_959);
									BgL_iz00_953 = BgL_iz00_1019;
									goto BgL_loopz00_954;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00 = BNIL;
			BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 = BNIL;
			return (BGl_za2heapzd2markza2zd2zzheap_restorez00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzheap_restorez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_510;

				BgL_headz00_510 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_511;
					obj_t BgL_tailz00_512;

					BgL_prevz00_511 = BgL_headz00_510;
					BgL_tailz00_512 = BgL_l1z00_1;
				BgL_loopz00_513:
					if (PAIRP(BgL_tailz00_512))
						{
							obj_t BgL_newzd2prevzd2_515;

							BgL_newzd2prevzd2_515 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_512), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_511, BgL_newzd2prevzd2_515);
							{
								obj_t BgL_tailz00_1030;
								obj_t BgL_prevz00_1029;

								BgL_prevz00_1029 = BgL_newzd2prevzd2_515;
								BgL_tailz00_1030 = CDR(BgL_tailz00_512);
								BgL_tailz00_512 = BgL_tailz00_1030;
								BgL_prevz00_511 = BgL_prevz00_1029;
								goto BgL_loopz00_513;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_510);
				}
			}
		}

	}



/* backend-heap-compatible? */
	bool_t BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(obj_t
		BgL_targetz00_3)
	{
		{	/* Heap/restore.scm 37 */
			{	/* Heap/restore.scm 38 */
				BgL_backendz00_bglt BgL_i1064z00_518;

				BgL_i1064z00_518 =
					((BgL_backendz00_bglt) BGl_thezd2backendzd2zzbackend_backendz00());
				{	/* Heap/restore.scm 39 */
					bool_t BgL__ortest_1065z00_519;

					BgL__ortest_1065z00_519 =
						(BgL_targetz00_3 ==
						(((BgL_backendz00_bglt) COBJECT(BgL_i1064z00_518))->
							BgL_languagez00));
					if (BgL__ortest_1065z00_519)
						{	/* Heap/restore.scm 39 */
							return BgL__ortest_1065z00_519;
						}
					else
						{	/* Heap/restore.scm 39 */
							return
								(BgL_targetz00_3 ==
								(((BgL_backendz00_bglt) COBJECT(BgL_i1064z00_518))->
									BgL_heapzd2compatiblezd2));
						}
				}
			}
		}

	}



/* restore-heap */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2heapzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 44 */
			if (STRINGP(BGl_za2heapzd2nameza2zd2zzengine_paramz00))
				{	/* Heap/restore.scm 45 */
					{	/* Heap/restore.scm 46 */
						obj_t BgL_list1176z00_523;

						{	/* Heap/restore.scm 46 */
							obj_t BgL_arg1177z00_524;

							{	/* Heap/restore.scm 46 */
								obj_t BgL_arg1178z00_525;

								BgL_arg1178z00_525 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1177z00_524 =
									MAKE_YOUNG_PAIR(BGl_string1506z00zzheap_restorez00,
									BgL_arg1178z00_525);
							}
							BgL_list1176z00_523 =
								MAKE_YOUNG_PAIR(BGl_string1507z00zzheap_restorez00,
								BgL_arg1177z00_524);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1176z00_523);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_string1506z00zzheap_restorez00;
					{	/* Heap/restore.scm 46 */
						obj_t BgL_g1066z00_526;

						BgL_g1066z00_526 = BNIL;
						{
							obj_t BgL_hooksz00_529;
							obj_t BgL_hnamesz00_530;

							BgL_hooksz00_529 = BgL_g1066z00_526;
							BgL_hnamesz00_530 = BNIL;
						BgL_zc3z04anonymousza31179ze3z87_531:
							if (NULLP(BgL_hooksz00_529))
								{	/* Heap/restore.scm 46 */
									CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Heap/restore.scm 46 */
									bool_t BgL_test1573z00_1052;

									{	/* Heap/restore.scm 46 */
										obj_t BgL_fun1195z00_538;

										BgL_fun1195z00_538 = CAR(((obj_t) BgL_hooksz00_529));
										BgL_test1573z00_1052 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1195z00_538)
											(BgL_fun1195z00_538, BEOA));
									}
									if (BgL_test1573z00_1052)
										{	/* Heap/restore.scm 46 */
											obj_t BgL_arg1186z00_535;
											obj_t BgL_arg1190z00_536;

											BgL_arg1186z00_535 = CDR(((obj_t) BgL_hooksz00_529));
											BgL_arg1190z00_536 = CDR(((obj_t) BgL_hnamesz00_530));
											{
												obj_t BgL_hnamesz00_1064;
												obj_t BgL_hooksz00_1063;

												BgL_hooksz00_1063 = BgL_arg1186z00_535;
												BgL_hnamesz00_1064 = BgL_arg1190z00_536;
												BgL_hnamesz00_530 = BgL_hnamesz00_1064;
												BgL_hooksz00_529 = BgL_hooksz00_1063;
												goto BgL_zc3z04anonymousza31179ze3z87_531;
											}
										}
									else
										{	/* Heap/restore.scm 46 */
											obj_t BgL_arg1194z00_537;

											BgL_arg1194z00_537 = CAR(((obj_t) BgL_hnamesz00_530));
											BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string1506z00zzheap_restorez00,
												BGl_string1508z00zzheap_restorez00, BgL_arg1194z00_537);
										}
								}
						}
					}
					{	/* Heap/restore.scm 47 */
						obj_t BgL_fnamez00_541;

						BgL_fnamez00_541 =
							BGl_findzd2filezf2pathz20zz__osz00
							(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
							BGl_za2libzd2dirza2zd2zzengine_paramz00);
						if (STRINGP(BgL_fnamez00_541))
							{	/* Heap/restore.scm 49 */
								obj_t BgL_portz00_543;

								BgL_portz00_543 =
									BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
									(BgL_fnamez00_541);
								if (BINARY_PORTP(BgL_portz00_543))
									{	/* Heap/restore.scm 50 */
										{	/* Heap/restore.scm 55 */
											obj_t BgL_list1199z00_545;

											{	/* Heap/restore.scm 55 */
												obj_t BgL_arg1201z00_546;

												{	/* Heap/restore.scm 55 */
													obj_t BgL_arg1208z00_547;

													{	/* Heap/restore.scm 55 */
														obj_t BgL_arg1211z00_548;

														BgL_arg1211z00_548 =
															MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
															BNIL);
														BgL_arg1208z00_547 =
															MAKE_YOUNG_PAIR
															(BGl_string1509z00zzheap_restorez00,
															BgL_arg1211z00_548);
													}
													BgL_arg1201z00_546 =
														MAKE_YOUNG_PAIR(BgL_fnamez00_541,
														BgL_arg1208z00_547);
												}
												BgL_list1199z00_545 =
													MAKE_YOUNG_PAIR(BGl_string1510z00zzheap_restorez00,
													BgL_arg1201z00_546);
											}
											BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
												BgL_list1199z00_545);
										}
										{	/* Heap/restore.scm 56 */
											obj_t BgL_exitd1068z00_549;

											BgL_exitd1068z00_549 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Heap/restore.scm 110 */
												obj_t BgL_zc3z04anonymousza31271ze3z87_924;

												BgL_zc3z04anonymousza31271ze3z87_924 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31271ze3ze5zzheap_restorez00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31271ze3z87_924,
													(int) (((long) 0)), BgL_portz00_543);
												BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
													(BgL_exitd1068z00_549,
													BgL_zc3z04anonymousza31271ze3z87_924);
												{	/* Heap/restore.scm 57 */
													bool_t BgL_tmp1070z00_551;

													{	/* Heap/restore.scm 57 */
														obj_t BgL_envsz00_552;

														BgL_envsz00_552 = input_obj(BgL_portz00_543);
														{	/* Heap/restore.scm 57 */
															obj_t BgL__z00_553;

															{	/* Heap/restore.scm 58 */
																bool_t BgL_test1576z00_1089;

																if (VECTORP(BgL_envsz00_552))
																	{	/* Heap/restore.scm 58 */
																		BgL_test1576z00_1089 =
																			(VECTOR_LENGTH(BgL_envsz00_552) ==
																			((long) 5));
																	}
																else
																	{	/* Heap/restore.scm 58 */
																		BgL_test1576z00_1089 = ((bool_t) 0);
																	}
																if (BgL_test1576z00_1089)
																	{	/* Heap/restore.scm 58 */
																		BgL__z00_553 = BFALSE;
																	}
																else
																	{	/* Heap/restore.scm 58 */
																		BgL__z00_553 =
																			BGl_errorz00zz__errorz00
																			(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																			BGl_string1511z00zzheap_restorez00,
																			BgL_envsz00_552);
																	}
															}
															{	/* Heap/restore.scm 58 */
																obj_t BgL_targetz00_554;

																BgL_targetz00_554 =
																	VECTOR_REF(
																	((obj_t) BgL_envsz00_552), ((long) 0));
																{	/* Heap/restore.scm 63 */
																	obj_t BgL_versionz00_555;

																	BgL_versionz00_555 =
																		VECTOR_REF(
																		((obj_t) BgL_envsz00_552), ((long) 1));
																	{	/* Heap/restore.scm 64 */
																		obj_t BgL_specificz00_556;

																		BgL_specificz00_556 =
																			VECTOR_REF(
																			((obj_t) BgL_envsz00_552), ((long) 2));
																		{	/* Heap/restore.scm 65 */
																			obj_t BgL_genvz00_557;

																			BgL_genvz00_557 =
																				VECTOR_REF(
																				((obj_t) BgL_envsz00_552), ((long) 3));
																			{	/* Heap/restore.scm 66 */
																				obj_t BgL_tenvz00_558;

																				BgL_tenvz00_558 =
																					VECTOR_REF(
																					((obj_t) BgL_envsz00_552),
																					((long) 4));
																				{	/* Heap/restore.scm 67 */

																					if (BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(BgL_targetz00_554))
																						{	/* Heap/restore.scm 69 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 74 */
																							obj_t BgL_arg1216z00_560;

																							{	/* Heap/restore.scm 74 */
																								obj_t BgL_arg1221z00_561;

																								{	/* Heap/restore.scm 74 */
																									obj_t BgL_arg1225z00_564;

																									BgL_arg1225z00_564 =
																										BGl_thezd2backendzd2zzbackend_backendz00
																										();
																									BgL_arg1221z00_561 =
																										(((BgL_backendz00_bglt)
																											COBJECT((
																													(BgL_backendz00_bglt)
																													BgL_arg1225z00_564)))->
																										BgL_languagez00);
																								}
																								{	/* Heap/restore.scm 72 */
																									obj_t BgL_list1222z00_562;

																									{	/* Heap/restore.scm 72 */
																										obj_t BgL_arg1223z00_563;

																										BgL_arg1223z00_563 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1221z00_561,
																											BNIL);
																										BgL_list1222z00_562 =
																											MAKE_YOUNG_PAIR
																											(BgL_targetz00_554,
																											BgL_arg1223z00_563);
																									}
																									BgL_arg1216z00_560 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1512z00zzheap_restorez00,
																										BgL_list1222z00_562);
																								}
																							}
																							BGl_errorz00zz__errorz00
																								(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																								BGl_string1513z00zzheap_restorez00,
																								BgL_arg1216z00_560);
																						}
																					{	/* Heap/restore.scm 75 */
																						bool_t BgL_test1579z00_1114;

																						if (CBOOL
																							(BGl_za2unsafezd2heapza2zd2zzengine_paramz00))
																							{	/* Heap/restore.scm 75 */
																								BgL_test1579z00_1114 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Heap/restore.scm 75 */
																								BgL_test1579z00_1114 =
																									BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																									(BgL_versionz00_555,
																									BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
																							}
																						if (BgL_test1579z00_1114)
																							{	/* Heap/restore.scm 75 */
																								BFALSE;
																							}
																						else
																							{	/* Heap/restore.scm 79 */
																								obj_t BgL_arg1227z00_566;

																								{	/* Heap/restore.scm 79 */
																									obj_t BgL_list1228z00_567;

																									{	/* Heap/restore.scm 79 */
																										obj_t BgL_arg1229z00_568;

																										BgL_arg1229z00_568 =
																											MAKE_YOUNG_PAIR
																											(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
																											BNIL);
																										BgL_list1228z00_567 =
																											MAKE_YOUNG_PAIR
																											(BgL_versionz00_555,
																											BgL_arg1229z00_568);
																									}
																									BgL_arg1227z00_566 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1514z00zzheap_restorez00,
																										BgL_list1228z00_567);
																								}
																								BGl_errorz00zz__errorz00
																									(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																									BGl_string1515z00zzheap_restorez00,
																									BgL_arg1227z00_566);
																							}
																					}
																					{	/* Heap/restore.scm 82 */
																						bool_t BgL_test1581z00_1122;

																						if (CBOOL
																							(BGl_za2unsafezd2heapza2zd2zzengine_paramz00))
																							{	/* Heap/restore.scm 82 */
																								BgL_test1581z00_1122 =
																									((bool_t) 1);
																							}
																						else
																							{	/* Heap/restore.scm 82 */
																								BgL_test1581z00_1122 =
																									BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																									(BgL_specificz00_556,
																									BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
																							}
																						if (BgL_test1581z00_1122)
																							{	/* Heap/restore.scm 82 */
																								BFALSE;
																							}
																						else
																							{	/* Heap/restore.scm 86 */
																								obj_t BgL_arg1232z00_570;

																								{	/* Heap/restore.scm 86 */
																									obj_t BgL_list1233z00_571;

																									{	/* Heap/restore.scm 86 */
																										obj_t BgL_arg1239z00_572;

																										BgL_arg1239z00_572 =
																											MAKE_YOUNG_PAIR
																											(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
																											BNIL);
																										BgL_list1233z00_571 =
																											MAKE_YOUNG_PAIR
																											(BgL_specificz00_556,
																											BgL_arg1239z00_572);
																									}
																									BgL_arg1232z00_570 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1514z00zzheap_restorez00,
																										BgL_list1233z00_571);
																								}
																								BGl_errorz00zz__errorz00
																									(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																									BGl_string1516z00zzheap_restorez00,
																									BgL_arg1232z00_570);
																							}
																					}
																					BGl_setzd2genvz12zc0zzast_envz00
																						(BgL_genvz00_557);
																					BGl_setzd2tenvz12zc0zztype_envz00
																						(BgL_tenvz00_558);
																					if (CBOOL
																						(BGl_za2callzf2cczf3za2z01zzengine_paramz00))
																						{	/* Heap/restore.scm 94 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 94 */
																							BGl_unbindzd2callzf2ccz12z32zzheap_restorez00
																								();
																						}
																					{	/* Heap/restore.scm 97 */
																						bool_t BgL_test1585z00_1135;

																						{	/* Heap/restore.scm 97 */
																							obj_t BgL_arg1256z00_584;

																							BgL_arg1256z00_584 =
																								BGl_thezd2backendzd2zzbackend_backendz00
																								();
																							BgL_test1585z00_1135 =
																								(((BgL_backendz00_bglt)
																									COBJECT(((BgL_backendz00_bglt)
																											BgL_arg1256z00_584)))->
																								BgL_qualifiedzd2typeszd2);
																						}
																						if (BgL_test1585z00_1135)
																							{	/* Heap/restore.scm 97 */
																								BGl_forzd2eachzd2globalz12z12zzast_envz00
																									(BGl_proc1517z00zzheap_restorez00,
																									BNIL);
																								BgL_genvz00_557;
																							}
																						else
																							{	/* Heap/restore.scm 97 */
																								BFALSE;
																							}
																					}
																					BGl_forzd2eachzd2globalz12z12zzast_envz00
																						(BGl_proc1518z00zzheap_restorez00,
																						BNIL);
																					BgL_tmp1070z00_551 = ((bool_t) 1);
																				}
																			}
																		}
																	}
																}
															}
														}
													}
													BGl_exitdzd2popzd2protectz12z12zz__bexitz00
														(BgL_exitd1068z00_549);
													close_binary_port(BgL_portz00_543);
													return BBOOL(BgL_tmp1070z00_551);
												}
											}
										}
									}
								else
									{	/* Heap/restore.scm 51 */
										obj_t BgL_mz00_599;

										{	/* Heap/restore.scm 51 */
											obj_t BgL_list1272z00_600;

											BgL_list1272z00_600 =
												MAKE_YOUNG_PAIR(BgL_fnamez00_541, BNIL);
											BgL_mz00_599 =
												BGl_formatz00zz__r4_output_6_10_3z00
												(BGl_string1519z00zzheap_restorez00,
												BgL_list1272z00_600);
										}
										BGl_errorz00zz__errorz00(BGl_string1520z00zzheap_restorez00,
											BgL_mz00_599, BGl_za2libzd2dirza2zd2zzengine_paramz00);
										return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long)
													5)));
							}}
						else
							{	/* Heap/restore.scm 111 */
								obj_t BgL_mz00_601;

								{	/* Heap/restore.scm 111 */
									obj_t BgL_list1273z00_602;

									BgL_list1273z00_602 =
										MAKE_YOUNG_PAIR(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
										BNIL);
									BgL_mz00_601 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string1519z00zzheap_restorez00, BgL_list1273z00_602);
								}
								BGl_errorz00zz__errorz00(BGl_string1520z00zzheap_restorez00,
									BgL_mz00_601, BGl_za2libzd2dirza2zd2zzengine_paramz00);
								return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 5)));
				}}}
			else
				{	/* Heap/restore.scm 45 */
					return BFALSE;
				}
		}

	}



/* &restore-heap */
	obj_t BGl_z62restorezd2heapzb0zzheap_restorez00(obj_t BgL_envz00_925)
	{
		{	/* Heap/restore.scm 44 */
			return BGl_restorezd2heapzd2zzheap_restorez00();
		}

	}



/* &<@anonymous:1260> */
	obj_t BGl_z62zc3z04anonymousza31260ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_926, obj_t BgL_newz00_927)
	{
		{	/* Heap/restore.scm 107 */
			{	/* Heap/restore.scm 108 */
				obj_t BgL_arg1263z00_965;

				BgL_arg1263z00_965 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_927)))->BgL_modulez00);
				{	/* Heap/restore.scm 108 */
					obj_t BgL_list1264z00_966;

					BgL_list1264z00_966 = MAKE_YOUNG_PAIR(BgL_arg1263z00_965, BNIL);
					return
						BGl_heapzd2modulezd2listz00zzheap_restorez00(BgL_list1264z00_966);
				}
			}
		}

	}



/* &<@anonymous:1247> */
	obj_t BGl_z62zc3z04anonymousza31247ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_928, obj_t BgL_newz00_929)
	{
		{	/* Heap/restore.scm 99 */
			{	/* Heap/restore.scm 101 */
				obj_t BgL_arg1250z00_967;
				obj_t BgL_arg1252z00_968;
				obj_t BgL_arg1253z00_969;

				BgL_arg1250z00_967 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_929)))->BgL_modulez00);
				BgL_arg1252z00_968 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_929)))->
					BgL_jvmzd2typezd2namez00);
				BgL_arg1253z00_969 = BGl_shapez00zztools_shapez00(BgL_newz00_929);
				{	/* Heap/restore.scm 100 */
					obj_t BgL_list1254z00_970;

					BgL_list1254z00_970 = MAKE_YOUNG_PAIR(BgL_arg1253z00_969, BNIL);
					return
						BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg1250z00_967,
						BgL_arg1252z00_968, BgL_list1254z00_970);
				}
			}
		}

	}



/* &<@anonymous:1271> */
	obj_t BGl_z62zc3z04anonymousza31271ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_930)
	{
		{	/* Heap/restore.scm 56 */
			{	/* Heap/restore.scm 110 */
				obj_t BgL_portz00_931;

				BgL_portz00_931 = PROCEDURE_REF(BgL_envz00_930, (int) (((long) 0)));
				return close_binary_port(((obj_t) BgL_portz00_931));
			}
		}

	}



/* unbind-call/cc! */
	obj_t BGl_unbindzd2callzf2ccz12z32zzheap_restorez00()
	{
		{	/* Heap/restore.scm 118 */
			if (CBOOL(BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								2)), CNST_TABLE_REF(((long) 3)))))
				{	/* Heap/restore.scm 119 */
					BGl_unbindzd2globalz12zc0zzast_envz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 3)));
				}
			else
				{	/* Heap/restore.scm 119 */
					BFALSE;
				}
			if (CBOOL(BGl_findzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long)
								4)), CNST_TABLE_REF(((long) 3)))))
				{	/* Heap/restore.scm 121 */
					return
						BGl_unbindzd2globalz12zc0zzast_envz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 3)));
				}
			else
				{	/* Heap/restore.scm 121 */
					return BFALSE;
				}
		}

	}



/* heap-file-name */
	BGL_EXPORTED_DEF obj_t BGl_heapzd2filezd2namez00zzheap_restorez00(obj_t
		BgL_heapz00_4)
	{
		{	/* Heap/restore.scm 129 */
			{	/* Heap/restore.scm 130 */
				obj_t BgL_arg1276z00_857;

				{	/* Heap/restore.scm 130 */
					obj_t BgL_arg1277z00_858;

					BgL_arg1277z00_858 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_arg1276z00_857 =
						(((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_arg1277z00_858)))->
						BgL_heapzd2suffixzd2);
				}
				return
					string_append_3(BgL_heapz00_4, BGl_string1521z00zzheap_restorez00,
					BgL_arg1276z00_857);
			}
		}

	}



/* &heap-file-name */
	obj_t BGl_z62heapzd2filezd2namez62zzheap_restorez00(obj_t BgL_envz00_932,
		obj_t BgL_heapz00_933)
	{
		{	/* Heap/restore.scm 129 */
			return BGl_heapzd2filezd2namez00zzheap_restorez00(BgL_heapz00_933);
		}

	}



/* restore-additional-heaps */
	BGL_EXPORTED_DEF obj_t BGl_restorezd2additionalzd2heapsz00zzheap_restorez00()
	{
		{	/* Heap/restore.scm 135 */
			if (PAIRP(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00))
				{	/* Heap/restore.scm 136 */
					{	/* Heap/restore.scm 137 */
						obj_t BgL_list1279z00_608;

						{	/* Heap/restore.scm 137 */
							obj_t BgL_arg1280z00_609;

							{	/* Heap/restore.scm 137 */
								obj_t BgL_arg1281z00_610;

								BgL_arg1281z00_610 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1280z00_609 =
									MAKE_YOUNG_PAIR(BGl_string1522z00zzheap_restorez00,
									BgL_arg1281z00_610);
							}
							BgL_list1279z00_608 =
								MAKE_YOUNG_PAIR(BGl_string1507z00zzheap_restorez00,
								BgL_arg1280z00_609);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
							BgL_list1279z00_608);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						BINT(((long) 0));
					BGl_za2currentzd2passza2zd2zzengine_passz00 =
						BGl_string1522z00zzheap_restorez00;
					{	/* Heap/restore.scm 137 */
						obj_t BgL_g1071z00_611;

						BgL_g1071z00_611 = BNIL;
						{
							obj_t BgL_hooksz00_614;
							obj_t BgL_hnamesz00_615;

							BgL_hooksz00_614 = BgL_g1071z00_611;
							BgL_hnamesz00_615 = BNIL;
						BgL_zc3z04anonymousza31282ze3z87_616:
							if (NULLP(BgL_hooksz00_614))
								{	/* Heap/restore.scm 137 */
									CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Heap/restore.scm 137 */
									bool_t BgL_test1593z00_1203;

									{	/* Heap/restore.scm 137 */
										obj_t BgL_fun1289z00_623;

										BgL_fun1289z00_623 = CAR(((obj_t) BgL_hooksz00_614));
										BgL_test1593z00_1203 =
											CBOOL(PROCEDURE_ENTRY(BgL_fun1289z00_623)
											(BgL_fun1289z00_623, BEOA));
									}
									if (BgL_test1593z00_1203)
										{	/* Heap/restore.scm 137 */
											obj_t BgL_arg1286z00_620;
											obj_t BgL_arg1287z00_621;

											BgL_arg1286z00_620 = CDR(((obj_t) BgL_hooksz00_614));
											BgL_arg1287z00_621 = CDR(((obj_t) BgL_hnamesz00_615));
											{
												obj_t BgL_hnamesz00_1215;
												obj_t BgL_hooksz00_1214;

												BgL_hooksz00_1214 = BgL_arg1286z00_620;
												BgL_hnamesz00_1215 = BgL_arg1287z00_621;
												BgL_hnamesz00_615 = BgL_hnamesz00_1215;
												BgL_hooksz00_614 = BgL_hooksz00_1214;
												goto BgL_zc3z04anonymousza31282ze3z87_616;
											}
										}
									else
										{	/* Heap/restore.scm 137 */
											obj_t BgL_arg1288z00_622;

											BgL_arg1288z00_622 = CAR(((obj_t) BgL_hnamesz00_615));
											BGl_internalzd2errorzd2zztools_errorz00
												(BGl_string1522z00zzheap_restorez00,
												BGl_string1508z00zzheap_restorez00, BgL_arg1288z00_622);
										}
								}
						}
					}
					{	/* Heap/restore.scm 138 */
						obj_t BgL_g1164z00_626;

						BgL_g1164z00_626 =
							bgl_reverse
							(BGl_za2additionalzd2heapzd2namesza2z00zzengine_paramz00);
						{
							obj_t BgL_l1161z00_628;

							{	/* Heap/restore.scm 143 */
								bool_t BgL_tmpz00_1220;

								BgL_l1161z00_628 = BgL_g1164z00_626;
							BgL_zc3z04anonymousza31291ze3z87_629:
								if (PAIRP(BgL_l1161z00_628))
									{	/* Heap/restore.scm 143 */
										{	/* Heap/restore.scm 139 */
											obj_t BgL_hz00_631;

											BgL_hz00_631 = CAR(BgL_l1161z00_628);
											if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
													(BgL_hz00_631,
														BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00)))
												{	/* Heap/restore.scm 139 */
													BFALSE;
												}
											else
												{	/* Heap/restore.scm 139 */
													BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00
														=
														MAKE_YOUNG_PAIR(BgL_hz00_631,
														BGl_za2restoredzd2heapzd2namesza2z00zzheap_restorez00);
													{	/* Heap/restore.scm 142 */
														obj_t BgL_arg1295z00_633;

														{	/* Heap/restore.scm 142 */
															obj_t BgL_res1493z00_878;

															{	/* Heap/restore.scm 130 */
																obj_t BgL_arg1276z00_873;

																{	/* Heap/restore.scm 130 */
																	obj_t BgL_arg1277z00_874;

																	BgL_arg1277z00_874 =
																		BGl_thezd2backendzd2zzbackend_backendz00();
																	BgL_arg1276z00_873 =
																		(((BgL_backendz00_bglt) COBJECT(
																				((BgL_backendz00_bglt)
																					BgL_arg1277z00_874)))->
																		BgL_heapzd2suffixzd2);
																}
																BgL_res1493z00_878 =
																	string_append_3(
																	((obj_t) BgL_hz00_631),
																	BGl_string1521z00zzheap_restorez00,
																	BgL_arg1276z00_873);
															}
															BgL_arg1295z00_633 = BgL_res1493z00_878;
														}
														BGl_restorezd2additionalzd2heapz00zzheap_restorez00
															(BgL_arg1295z00_633);
													}
												}
										}
										{
											obj_t BgL_l1161z00_1234;

											BgL_l1161z00_1234 = CDR(BgL_l1161z00_628);
											BgL_l1161z00_628 = BgL_l1161z00_1234;
											goto BgL_zc3z04anonymousza31291ze3z87_629;
										}
									}
								else
									{	/* Heap/restore.scm 143 */
										BgL_tmpz00_1220 = ((bool_t) 1);
									}
								return BBOOL(BgL_tmpz00_1220);
							}
						}
					}
				}
			else
				{	/* Heap/restore.scm 136 */
					return BFALSE;
				}
		}

	}



/* &restore-additional-heaps */
	obj_t BGl_z62restorezd2additionalzd2heapsz62zzheap_restorez00(obj_t
		BgL_envz00_934)
	{
		{	/* Heap/restore.scm 135 */
			return BGl_restorezd2additionalzd2heapsz00zzheap_restorez00();
		}

	}



/* restore-additional-heap */
	BGL_EXPORTED_DEF obj_t
		BGl_restorezd2additionalzd2heapz00zzheap_restorez00(obj_t BgL_heapz00_5)
	{
		{	/* Heap/restore.scm 153 */
			{	/* Heap/restore.scm 154 */
				obj_t BgL_fnamez00_636;

				BgL_fnamez00_636 =
					BGl_findzd2filezf2pathz20zz__osz00(BgL_heapz00_5,
					BGl_za2libzd2dirza2zd2zzengine_paramz00);
				if (STRINGP(BgL_fnamez00_636))
					{	/* Heap/restore.scm 156 */
						obj_t BgL_portz00_638;

						BgL_portz00_638 =
							BGl_openzd2inputzd2binaryzd2filezd2zz__binaryz00
							(BgL_fnamez00_636);
						if (BINARY_PORTP(BgL_portz00_638))
							{	/* Heap/restore.scm 157 */
								{	/* Heap/restore.scm 165 */
									obj_t BgL_list1299z00_640;

									{	/* Heap/restore.scm 165 */
										obj_t BgL_arg1300z00_641;

										{	/* Heap/restore.scm 165 */
											obj_t BgL_arg1301z00_642;

											{	/* Heap/restore.scm 165 */
												obj_t BgL_arg1303z00_643;

												BgL_arg1303z00_643 =
													MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
												BgL_arg1301z00_642 =
													MAKE_YOUNG_PAIR(BGl_string1509z00zzheap_restorez00,
													BgL_arg1303z00_643);
											}
											BgL_arg1300z00_641 =
												MAKE_YOUNG_PAIR(BgL_fnamez00_636, BgL_arg1301z00_642);
										}
										BgL_list1299z00_640 =
											MAKE_YOUNG_PAIR(BGl_string1510z00zzheap_restorez00,
											BgL_arg1300z00_641);
									}
									BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
										BgL_list1299z00_640);
								}
								{	/* Heap/restore.scm 166 */
									obj_t BgL_exitd1073z00_644;

									BgL_exitd1073z00_644 = BGL_EXITD_TOP_AS_OBJ();
									{	/* Heap/restore.scm 234 */
										obj_t BgL_zc3z04anonymousza31361ze3z87_937;

										BgL_zc3z04anonymousza31361ze3z87_937 =
											MAKE_FX_PROCEDURE
											(BGl_z62zc3z04anonymousza31361ze3ze5zzheap_restorez00,
											(int) (((long) 0)), (int) (((long) 1)));
										PROCEDURE_SET(BgL_zc3z04anonymousza31361ze3z87_937,
											(int) (((long) 0)), BgL_portz00_638);
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1073z00_644,
											BgL_zc3z04anonymousza31361ze3z87_937);
										{	/* Heap/restore.scm 167 */
											bool_t BgL_tmp1075z00_646;

											{	/* Heap/restore.scm 167 */
												obj_t BgL_envsz00_647;

												BgL_envsz00_647 = input_obj(BgL_portz00_638);
												{	/* Heap/restore.scm 167 */
													obj_t BgL__z00_648;

													{	/* Heap/restore.scm 168 */
														bool_t BgL_test1598z00_1259;

														if (VECTORP(BgL_envsz00_647))
															{	/* Heap/restore.scm 168 */
																BgL_test1598z00_1259 =
																	(VECTOR_LENGTH(BgL_envsz00_647) ==
																	((long) 7));
															}
														else
															{	/* Heap/restore.scm 168 */
																BgL_test1598z00_1259 = ((bool_t) 0);
															}
														if (BgL_test1598z00_1259)
															{	/* Heap/restore.scm 168 */
																BgL__z00_648 = BFALSE;
															}
														else
															{	/* Heap/restore.scm 168 */
																BgL__z00_648 =
																	BGl_errorz00zz__errorz00(BgL_heapz00_5,
																	BGl_string1511z00zzheap_restorez00,
																	BgL_envsz00_647);
															}
													}
													{	/* Heap/restore.scm 168 */
														obj_t BgL_targetz00_649;

														BgL_targetz00_649 =
															VECTOR_REF(((obj_t) BgL_envsz00_647), ((long) 0));
														{	/* Heap/restore.scm 171 */
															obj_t BgL_versionz00_650;

															BgL_versionz00_650 =
																VECTOR_REF(
																((obj_t) BgL_envsz00_647), ((long) 1));
															{	/* Heap/restore.scm 172 */
																obj_t BgL_specificz00_651;

																BgL_specificz00_651 =
																	VECTOR_REF(
																	((obj_t) BgL_envsz00_647), ((long) 2));
																{	/* Heap/restore.scm 173 */
																	obj_t BgL_genvz00_652;

																	BgL_genvz00_652 =
																		VECTOR_REF(
																		((obj_t) BgL_envsz00_647), ((long) 3));
																	{	/* Heap/restore.scm 174 */
																		obj_t BgL_tenvz00_653;

																		BgL_tenvz00_653 =
																			VECTOR_REF(
																			((obj_t) BgL_envsz00_647), ((long) 4));
																		{	/* Heap/restore.scm 175 */
																			obj_t BgL_includesz00_654;

																			BgL_includesz00_654 =
																				VECTOR_REF(
																				((obj_t) BgL_envsz00_647), ((long) 5));
																			{	/* Heap/restore.scm 176 */
																				obj_t BgL_ccoptsz00_655;

																				BgL_ccoptsz00_655 =
																					VECTOR_REF(
																					((obj_t) BgL_envsz00_647),
																					((long) 6));
																				{	/* Heap/restore.scm 177 */

																					if (BGl_backendzd2heapzd2compatiblezf3zf3zzheap_restorez00(BgL_targetz00_649))
																						{	/* Heap/restore.scm 179 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 184 */
																							obj_t BgL_arg1306z00_657;

																							{	/* Heap/restore.scm 184 */
																								obj_t BgL_arg1307z00_658;

																								{	/* Heap/restore.scm 184 */
																									obj_t BgL_arg1310z00_661;

																									BgL_arg1310z00_661 =
																										BGl_thezd2backendzd2zzbackend_backendz00
																										();
																									BgL_arg1307z00_658 =
																										(((BgL_backendz00_bglt)
																											COBJECT((
																													(BgL_backendz00_bglt)
																													BgL_arg1310z00_661)))->
																										BgL_languagez00);
																								}
																								{	/* Heap/restore.scm 182 */
																									obj_t BgL_list1308z00_659;

																									{	/* Heap/restore.scm 182 */
																										obj_t BgL_arg1309z00_660;

																										BgL_arg1309z00_660 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1307z00_658,
																											BNIL);
																										BgL_list1308z00_659 =
																											MAKE_YOUNG_PAIR
																											(BgL_targetz00_649,
																											BgL_arg1309z00_660);
																									}
																									BgL_arg1306z00_657 =
																										BGl_formatz00zz__r4_output_6_10_3z00
																										(BGl_string1512z00zzheap_restorez00,
																										BgL_list1308z00_659);
																								}
																							}
																							BGl_errorz00zz__errorz00
																								(BgL_heapz00_5,
																								BGl_string1513z00zzheap_restorez00,
																								BgL_arg1306z00_657);
																						}
																					if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_versionz00_650, BGl_za2bigloozd2versionza2zd2zzengine_paramz00))
																						{	/* Heap/restore.scm 185 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 188 */
																							obj_t BgL_arg1312z00_663;

																							{	/* Heap/restore.scm 188 */
																								obj_t BgL_list1313z00_664;

																								{	/* Heap/restore.scm 188 */
																									obj_t BgL_arg1314z00_665;

																									BgL_arg1314z00_665 =
																										MAKE_YOUNG_PAIR
																										(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
																										BNIL);
																									BgL_list1313z00_664 =
																										MAKE_YOUNG_PAIR
																										(BgL_versionz00_650,
																										BgL_arg1314z00_665);
																								}
																								BgL_arg1312z00_663 =
																									BGl_formatz00zz__r4_output_6_10_3z00
																									(BGl_string1514z00zzheap_restorez00,
																									BgL_list1313z00_664);
																							}
																							BGl_errorz00zz__errorz00
																								(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																								BGl_string1515z00zzheap_restorez00,
																								BgL_arg1312z00_663);
																						}
																					if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_specificz00_651, BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00))
																						{	/* Heap/restore.scm 191 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 194 */
																							obj_t BgL_arg1316z00_667;

																							{	/* Heap/restore.scm 194 */
																								obj_t BgL_list1317z00_668;

																								{	/* Heap/restore.scm 194 */
																									obj_t BgL_arg1319z00_669;

																									BgL_arg1319z00_669 =
																										MAKE_YOUNG_PAIR
																										(BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00,
																										BNIL);
																									BgL_list1317z00_668 =
																										MAKE_YOUNG_PAIR
																										(BgL_specificz00_651,
																										BgL_arg1319z00_669);
																								}
																								BgL_arg1316z00_667 =
																									BGl_formatz00zz__r4_output_6_10_3z00
																									(BGl_string1514z00zzheap_restorez00,
																									BgL_list1317z00_668);
																							}
																							BGl_errorz00zz__errorz00
																								(BGl_za2heapzd2nameza2zd2zzengine_paramz00,
																								BGl_string1516z00zzheap_restorez00,
																								BgL_arg1316z00_667);
																						}
																					BGl_addzd2tenvz12zc0zztype_envz00
																						(BgL_tenvz00_653);
																					BGl_addzd2genvz12zc0zzast_envz00
																						(BgL_genvz00_652);
																					{	/* Heap/restore.scm 210 */
																						bool_t BgL_test1603z00_1302;

																						{	/* Heap/restore.scm 210 */
																							obj_t BgL_arg1331z00_681;

																							BgL_arg1331z00_681 =
																								BGl_thezd2backendzd2zzbackend_backendz00
																								();
																							BgL_test1603z00_1302 =
																								(((BgL_backendz00_bglt)
																									COBJECT(((BgL_backendz00_bglt)
																											BgL_arg1331z00_681)))->
																								BgL_qualifiedzd2typeszd2);
																						}
																						if (BgL_test1603z00_1302)
																							{	/* Heap/restore.scm 210 */
																								BGl_forzd2eachzd2globalz12z12zzast_envz00
																									(BGl_proc1523z00zzheap_restorez00,
																									BNIL);
																							}
																						else
																							{	/* Heap/restore.scm 210 */
																								BFALSE;
																							}
																					}
																					BGl_hashtablezd2forzd2eachz00zz__hashz00
																						(BgL_genvz00_652,
																						BGl_proc1524z00zzheap_restorez00);
																					if (
																						(BGl_za2passza2z00zzengine_paramz00
																							== CNST_TABLE_REF(((long) 5))))
																						{	/* Heap/restore.scm 226 */
																							BFALSE;
																						}
																					else
																						{	/* Heap/restore.scm 226 */
																							BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00
																								=
																								BGl_appendzd221011zd2zzheap_restorez00
																								(BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00,
																								BgL_includesz00_654);
																							{	/* Heap/restore.scm 232 */
																								obj_t BgL_arg1351z00_698;

																								BgL_arg1351z00_698 =
																									BGl_appendzd221011zd2zzheap_restorez00
																									(BGl_za2cczd2optionsza2zd2zzengine_paramz00,
																									BgL_ccoptsz00_655);
																								{	/* Heap/restore.scm 231 */

																									BGl_za2cczd2optionsza2zd2zzengine_paramz00
																										=
																										BGl_deletezd2duplicateszd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_arg1351z00_698,
																										BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00);
																								}
																							}
																						}
																					BgL_tmp1075z00_646 = ((bool_t) 1);
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
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1073z00_644);
											close_binary_port(BgL_portz00_638);
											return BBOOL(BgL_tmp1075z00_646);
										}
									}
								}
							}
						else
							{	/* Heap/restore.scm 158 */
								obj_t BgL_mz00_708;

								{	/* Heap/restore.scm 158 */
									obj_t BgL_list1366z00_711;

									BgL_list1366z00_711 = MAKE_YOUNG_PAIR(BgL_fnamez00_636, BNIL);
									BgL_mz00_708 =
										BGl_formatz00zz__r4_output_6_10_3z00
										(BGl_string1519z00zzheap_restorez00, BgL_list1366z00_711);
								}
								{	/* Heap/restore.scm 159 */
									obj_t BgL_arg1363z00_709;

									if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
										{	/* Heap/restore.scm 159 */
											BgL_arg1363z00_709 =
												CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										}
									else
										{	/* Heap/restore.scm 159 */
											BgL_arg1363z00_709 = BGl_string1525z00zzheap_restorez00;
										}
									BGl_errorz00zz__errorz00(BgL_arg1363z00_709, BgL_mz00_708,
										BGl_za2libzd2dirza2zd2zzengine_paramz00);
								}
								return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 6)));
					}}
				else
					{	/* Heap/restore.scm 235 */
						obj_t BgL_mz00_712;

						{	/* Heap/restore.scm 235 */
							obj_t BgL_list1369z00_715;

							BgL_list1369z00_715 = MAKE_YOUNG_PAIR(BgL_heapz00_5, BNIL);
							BgL_mz00_712 =
								BGl_formatz00zz__r4_output_6_10_3z00
								(BGl_string1519z00zzheap_restorez00, BgL_list1369z00_715);
						}
						{	/* Heap/restore.scm 236 */
							obj_t BgL_arg1367z00_713;

							if (PAIRP(BGl_za2srczd2filesza2zd2zzengine_paramz00))
								{	/* Heap/restore.scm 236 */
									BgL_arg1367z00_713 =
										CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
								}
							else
								{	/* Heap/restore.scm 236 */
									BgL_arg1367z00_713 = BGl_string1525z00zzheap_restorez00;
								}
							BGl_errorz00zz__errorz00(BgL_arg1367z00_713, BgL_mz00_712,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
						}
						return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 6)));
		}}}

	}



/* &restore-additional-heap */
	obj_t BGl_z62restorezd2additionalzd2heapz62zzheap_restorez00(obj_t
		BgL_envz00_938, obj_t BgL_heapz00_939)
	{
		{	/* Heap/restore.scm 153 */
			return
				BGl_restorezd2additionalzd2heapz00zzheap_restorez00(BgL_heapz00_939);
		}

	}



/* &<@anonymous:1335> */
	obj_t BGl_z62zc3z04anonymousza31335ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_940, obj_t BgL_kz00_941, obj_t BgL_bucketz00_942)
	{
		{	/* Heap/restore.scm 220 */
			{	/* Heap/restore.scm 221 */
				bool_t BgL_tmpz00_1334;

				{	/* Heap/restore.scm 221 */
					obj_t BgL_g1167z00_971;

					BgL_g1167z00_971 = CDR(((obj_t) BgL_bucketz00_942));
					{
						obj_t BgL_l1165z00_973;

						BgL_l1165z00_973 = BgL_g1167z00_971;
					BgL_zc3z04anonymousza31336ze3z87_972:
						if (PAIRP(BgL_l1165z00_973))
							{	/* Heap/restore.scm 224 */
								{	/* Heap/restore.scm 222 */
									obj_t BgL_newz00_974;

									BgL_newz00_974 = CAR(BgL_l1165z00_973);
									{	/* Heap/restore.scm 223 */
										obj_t BgL_arg1344z00_975;

										BgL_arg1344z00_975 =
											(((BgL_globalz00_bglt) COBJECT(
													((BgL_globalz00_bglt) BgL_newz00_974)))->
											BgL_modulez00);
										{	/* Heap/restore.scm 222 */
											obj_t BgL_list1345z00_976;

											BgL_list1345z00_976 =
												MAKE_YOUNG_PAIR(BgL_arg1344z00_975, BNIL);
											BGl_heapzd2modulezd2listz00zzheap_restorez00
												(BgL_list1345z00_976);
										}
									}
								}
								{
									obj_t BgL_l1165z00_1344;

									BgL_l1165z00_1344 = CDR(BgL_l1165z00_973);
									BgL_l1165z00_973 = BgL_l1165z00_1344;
									goto BgL_zc3z04anonymousza31336ze3z87_972;
								}
							}
						else
							{	/* Heap/restore.scm 224 */
								BgL_tmpz00_1334 = ((bool_t) 1);
							}
					}
				}
				return BBOOL(BgL_tmpz00_1334);
			}
		}

	}



/* &<@anonymous:1326> */
	obj_t BGl_z62zc3z04anonymousza31326ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_943, obj_t BgL_newz00_944)
	{
		{	/* Heap/restore.scm 212 */
			{	/* Heap/restore.scm 214 */
				obj_t BgL_arg1327z00_977;
				obj_t BgL_arg1328z00_978;
				obj_t BgL_arg1329z00_979;

				BgL_arg1327z00_977 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_944)))->BgL_modulez00);
				BgL_arg1328z00_978 =
					(((BgL_globalz00_bglt) COBJECT(
							((BgL_globalz00_bglt) BgL_newz00_944)))->
					BgL_jvmzd2typezd2namez00);
				BgL_arg1329z00_979 = BGl_shapez00zztools_shapez00(BgL_newz00_944);
				{	/* Heap/restore.scm 213 */
					obj_t BgL_list1330z00_980;

					BgL_list1330z00_980 = MAKE_YOUNG_PAIR(BgL_arg1329z00_979, BNIL);
					return
						BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_arg1327z00_977,
						BgL_arg1328z00_978, BgL_list1330z00_980);
				}
			}
		}

	}



/* &<@anonymous:1361> */
	obj_t BGl_z62zc3z04anonymousza31361ze3ze5zzheap_restorez00(obj_t
		BgL_envz00_945)
	{
		{	/* Heap/restore.scm 166 */
			{	/* Heap/restore.scm 234 */
				obj_t BgL_portz00_946;

				BgL_portz00_946 = PROCEDURE_REF(BgL_envz00_945, (int) (((long) 0)));
				return close_binary_port(((obj_t) BgL_portz00_946));
			}
		}

	}



/* heap-module-list */
	BGL_EXPORTED_DEF obj_t BGl_heapzd2modulezd2listz00zzheap_restorez00(obj_t
		BgL_argsz00_6)
	{
		{	/* Heap/restore.scm 255 */
			if (NULLP(BgL_argsz00_6))
				{	/* Heap/restore.scm 257 */
					return BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00;
				}
			else
				{	/* Heap/restore.scm 257 */
					if (CBOOL(BGl_getpropz00zz__r4_symbols_6_4z00(CAR(
									((obj_t) BgL_argsz00_6)), CNST_TABLE_REF(((long) 0)))))
						{	/* Heap/restore.scm 259 */
							return BFALSE;
						}
					else
						{	/* Heap/restore.scm 259 */
							{	/* Heap/restore.scm 260 */
								obj_t BgL_arg1394z00_719;

								BgL_arg1394z00_719 = CAR(((obj_t) BgL_argsz00_6));
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_arg1394z00_719,
									CNST_TABLE_REF(((long) 0)), BTRUE);
							}
							{	/* Heap/restore.scm 261 */
								obj_t BgL_arg1396z00_720;

								BgL_arg1396z00_720 = CAR(((obj_t) BgL_argsz00_6));
								return (BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00 =
									MAKE_YOUNG_PAIR(BgL_arg1396z00_720,
										BGl_za2heapzd2modulezd2listza2z00zzheap_restorez00),
									BUNSPEC);
							}
						}
				}
		}

	}



/* &heap-module-list */
	obj_t BGl_z62heapzd2modulezd2listz62zzheap_restorez00(obj_t BgL_envz00_950,
		obj_t BgL_argsz00_951)
	{
		{	/* Heap/restore.scm 255 */
			return BGl_heapzd2modulezd2listz00zzheap_restorez00(BgL_argsz00_951);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzheap_restorez00()
	{
		{	/* Heap/restore.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zzread_jvmz00(((long) 261574455),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
			return
				BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1526z00zzheap_restorez00));
		}

	}

#ifdef __cplusplus
}
#endif
