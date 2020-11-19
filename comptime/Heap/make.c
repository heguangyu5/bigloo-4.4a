/*===========================================================================*/
/*   (Heap/make.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Heap/make.scm) */
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


	BGL_EXPORTED_DECL obj_t BGl_makezd2addzd2heapz00zzheap_makez00();
	BGL_IMPORT obj_t output_obj(obj_t, obj_t);
	extern obj_t BGl_getzd2tenvzd2zztype_envz00();
	extern obj_t BGl_forzd2eachzd2globalz12z12zzast_envz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31213ze3ze5zzheap_makez00(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzheap_makez00();
	BGL_IMPORT obj_t BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	BGL_IMPORT obj_t BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzheap_makez00();
	extern obj_t BGl_za2heapzd2libraryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t close_binary_port(obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62preparezd2additionalzd2globalsz12z70zzheap_makez00(obj_t);
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	static obj_t BGl_z62zc3z04anonymousza31275ze3ze5zzheap_makez00(obj_t, obj_t);
	static obj_t
		BGl_z62checkzd2additionalzd2heapzd2libraryzb0zzheap_makez00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzheap_makez00();
	static obj_t BGl_z62makezd2addzd2heapz62zzheap_makez00(obj_t);
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	extern obj_t BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzheap_makez00 = BUNSPEC;
	extern obj_t BGl_za2cczd2optionsza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_za2classesza2z00zz__objectz00;
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzheap_makez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	static obj_t BGl_z62preparezd2globalsz12za2zzheap_makez00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00;
	extern obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00;
	static obj_t BGl_z62makezd2heapzb0zzheap_makez00(obj_t);
	extern obj_t BGl_unbindzd2globalz12zc0zzast_envz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2heapzd2zzheap_makez00();
	extern obj_t BGl_za2heapzd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzheap_restorez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzforeign_libraryz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__intextz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__binaryz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_cnstzd2initzd2zzheap_makez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzheap_makez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzheap_makez00();
	extern obj_t BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_classzd2superzd2zz__objectz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_getzd2genvzd2zzast_envz00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1336z00zzheap_makez00,
		BgL_bgl_za762za7c3za704anonymo1353za7,
		BGl_z62zc3z04anonymousza31213ze3ze5zzheap_makez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1342z00zzheap_makez00,
		BgL_bgl_za762za7c3za704anonymo1354za7,
		BGl_z62zc3z04anonymousza31275ze3ze5zzheap_makez00, 0L, BUNSPEC, 1);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_checkzd2additionalzd2heapzd2libraryzd2envz00zzheap_makez00,
		BgL_bgl_za762checkza7d2addit1355z00,
		BGl_z62checkzd2additionalzd2heapzd2libraryzb0zzheap_makez00, 0L, BUNSPEC,
		0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2addzd2heapzd2envzd2zzheap_makez00,
		BgL_bgl_za762makeza7d2addza7d21356za7,
		BGl_z62makezd2addzd2heapz62zzheap_makez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1330z00zzheap_makez00,
		BgL_bgl_string1330za700za7za7h1357za7, "Heap", 4);
	      DEFINE_STRING(BGl_string1331z00zzheap_makez00,
		BgL_bgl_string1331za700za7za7h1358za7, "   . ", 5);
	      DEFINE_STRING(BGl_string1332z00zzheap_makez00,
		BgL_bgl_string1332za700za7za7h1359za7, "failure during prelude hook", 27);
	      DEFINE_STRING(BGl_string1333z00zzheap_makez00,
		BgL_bgl_string1333za700za7za7h1360za7, "make-heap", 9);
	      DEFINE_STRING(BGl_string1334z00zzheap_makez00,
		BgL_bgl_string1334za700za7za7h1361za7, "Can't open output port", 22);
	      DEFINE_STRING(BGl_string1335z00zzheap_makez00,
		BgL_bgl_string1335za700za7za7h1362za7, "Illegal heap's name", 19);
	      DEFINE_STRING(BGl_string1337z00zzheap_makez00,
		BgL_bgl_string1337za700za7za7h1363za7, "Library heap", 12);
	      DEFINE_STRING(BGl_string1338z00zzheap_makez00,
		BgL_bgl_string1338za700za7za7h1364za7, "make-addd-heap", 14);
	      DEFINE_STRING(BGl_string1339z00zzheap_makez00,
		BgL_bgl_string1339za700za7za7h1365za7, "make-add-heap", 13);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_preparezd2additionalzd2globalsz12zd2envzc0zzheap_makez00,
		BgL_bgl_za762prepareza7d2add1366z00,
		BGl_z62preparezd2additionalzd2globalsz12z70zzheap_makez00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1340z00zzheap_makez00,
		BgL_bgl_string1340za700za7za7h1367za7,
		"Illegal reserved identifier for additional heap library (see `-heap-library' compiler option)",
		93);
	      DEFINE_STRING(BGl_string1341z00zzheap_makez00,
		BgL_bgl_string1341za700za7za7h1368za7,
		"Missing additional heap library identifier (see `-heap-library' compiler option)",
		80);
	      DEFINE_STRING(BGl_string1343z00zzheap_makez00,
		BgL_bgl_string1343za700za7za7h1369za7, "heap_make", 9);
	      DEFINE_STRING(BGl_string1344z00zzheap_makez00,
		BgL_bgl_string1344za700za7za7h1370za7,
		"make-add-heap bigloo (check-additional-heap-library prepare-additional-globals!) import export static pair pass-started (prepare-globals!) ",
		139);
	     
		DEFINE_STATIC_BGL_PROCEDURE(BGl_preparezd2globalsz12zd2envz12zzheap_makez00,
		BgL_bgl_za762prepareza7d2glo1371z00,
		BGl_z62preparezd2globalsz12za2zzheap_makez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2heapzd2envz00zzheap_makez00,
		BgL_bgl_za762makeza7d2heapza7b1372za7, BGl_z62makezd2heapzb0zzheap_makez00,
		0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzheap_makez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzheap_makez00(long
		BgL_checksumz00_881, char *BgL_fromz00_882)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzheap_makez00))
				{
					BGl_requirezd2initializa7ationz75zzheap_makez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzheap_makez00();
					BGl_libraryzd2moduleszd2initz00zzheap_makez00();
					BGl_cnstzd2initzd2zzheap_makez00();
					BGl_importedzd2moduleszd2initz00zzheap_makez00();
					return BGl_methodzd2initzd2zzheap_makez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			BGl_modulezd2initializa7ationz75zz__intextz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__binaryz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"heap_make");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"heap_make");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			{	/* Heap/make.scm 15 */
				obj_t BgL_cportz00_844;

				{	/* Heap/make.scm 15 */
					obj_t BgL_stringz00_852;

					BgL_stringz00_852 = BGl_string1344z00zzheap_makez00;
					{	/* Heap/make.scm 15 */
						obj_t BgL_startz00_853;

						BgL_startz00_853 = BINT(((long) 0));
						{	/* Heap/make.scm 15 */
							obj_t BgL_endz00_854;

							BgL_endz00_854 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_852)));
							{	/* Heap/make.scm 15 */

								BgL_cportz00_844 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_852, BgL_startz00_853, BgL_endz00_854);
				}}}}
				{
					long BgL_iz00_845;

					BgL_iz00_845 = ((long) 8);
				BgL_loopz00_846:
					if ((BgL_iz00_845 == ((long) -1)))
						{	/* Heap/make.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Heap/make.scm 15 */
							{	/* Heap/make.scm 15 */
								obj_t BgL_arg1351z00_848;

								{	/* Heap/make.scm 15 */

									{	/* Heap/make.scm 15 */
										obj_t BgL_locationz00_850;

										BgL_locationz00_850 = BBOOL(((bool_t) 0));
										{	/* Heap/make.scm 15 */

											BgL_arg1351z00_848 =
												BGl_readz00zz__readerz00(BgL_cportz00_844,
												BgL_locationz00_850);
										}
									}
								}
								{	/* Heap/make.scm 15 */
									int BgL_tmpz00_912;

									BgL_tmpz00_912 = (int) (BgL_iz00_845);
									CNST_TABLE_SET(BgL_tmpz00_912, BgL_arg1351z00_848);
							}}
							{	/* Heap/make.scm 15 */
								int BgL_auxz00_851;

								BgL_auxz00_851 = (int) ((BgL_iz00_845 - ((long) 1)));
								{
									long BgL_iz00_917;

									BgL_iz00_917 = (long) (BgL_auxz00_851);
									BgL_iz00_845 = BgL_iz00_917;
									goto BgL_loopz00_846;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* make-heap */
	BGL_EXPORTED_DEF obj_t BGl_makezd2heapzd2zzheap_makez00()
	{
		{	/* Heap/make.scm 35 */
			{	/* Heap/make.scm 36 */
				obj_t BgL_list1167z00_523;

				{	/* Heap/make.scm 36 */
					obj_t BgL_arg1169z00_524;

					{	/* Heap/make.scm 36 */
						obj_t BgL_arg1170z00_525;

						BgL_arg1170z00_525 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1169z00_524 =
							MAKE_YOUNG_PAIR(BGl_string1330z00zzheap_makez00,
							BgL_arg1170z00_525);
					}
					BgL_list1167z00_523 =
						MAKE_YOUNG_PAIR(BGl_string1331z00zzheap_makez00,
						BgL_arg1169z00_524);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1167z00_523);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1330z00zzheap_makez00;
			{	/* Heap/make.scm 36 */
				obj_t BgL_g1069z00_526;
				obj_t BgL_g1070z00_527;

				{	/* Heap/make.scm 36 */
					obj_t BgL_list1179z00_540;

					BgL_list1179z00_540 =
						MAKE_YOUNG_PAIR(BGl_preparezd2globalsz12zd2envz12zzheap_makez00,
						BNIL);
					BgL_g1069z00_526 = BgL_list1179z00_540;
				}
				BgL_g1070z00_527 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_hooksz00_529;
					obj_t BgL_hnamesz00_530;

					BgL_hooksz00_529 = BgL_g1069z00_526;
					BgL_hnamesz00_530 = BgL_g1070z00_527;
				BgL_zc3z04anonymousza31171ze3z87_531:
					if (NULLP(BgL_hooksz00_529))
						{	/* Heap/make.scm 36 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Heap/make.scm 36 */
							bool_t BgL_test1376z00_932;

							{	/* Heap/make.scm 36 */
								obj_t BgL_fun1178z00_538;

								BgL_fun1178z00_538 = CAR(((obj_t) BgL_hooksz00_529));
								BgL_test1376z00_932 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1178z00_538) (BgL_fun1178z00_538,
										BEOA));
							}
							if (BgL_test1376z00_932)
								{	/* Heap/make.scm 36 */
									obj_t BgL_arg1175z00_535;
									obj_t BgL_arg1176z00_536;

									BgL_arg1175z00_535 = CDR(((obj_t) BgL_hooksz00_529));
									BgL_arg1176z00_536 = CDR(((obj_t) BgL_hnamesz00_530));
									{
										obj_t BgL_hnamesz00_944;
										obj_t BgL_hooksz00_943;

										BgL_hooksz00_943 = BgL_arg1175z00_535;
										BgL_hnamesz00_944 = BgL_arg1176z00_536;
										BgL_hnamesz00_530 = BgL_hnamesz00_944;
										BgL_hooksz00_529 = BgL_hooksz00_943;
										goto BgL_zc3z04anonymousza31171ze3z87_531;
									}
								}
							else
								{	/* Heap/make.scm 36 */
									obj_t BgL_arg1177z00_537;

									BgL_arg1177z00_537 = CAR(((obj_t) BgL_hnamesz00_530));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1330z00zzheap_makez00,
										BGl_string1332z00zzheap_makez00, BgL_arg1177z00_537);
								}
						}
				}
			}
			BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(CNST_TABLE_REF(((long)
						2)));
			if (STRINGP(BGl_za2heapzd2nameza2zd2zzengine_paramz00))
				{	/* Heap/make.scm 40 */
					obj_t BgL_hnamez00_542;

					{	/* Heap/make.scm 40 */
						obj_t BgL_arg1208z00_551;

						BgL_arg1208z00_551 = CAR(BGl_za2libzd2dirza2zd2zzengine_paramz00);
						BgL_hnamez00_542 =
							BGl_makezd2filezd2namez00zz__osz00(BgL_arg1208z00_551,
							BGl_za2heapzd2nameza2zd2zzengine_paramz00);
					}
					{	/* Heap/make.scm 41 */
						obj_t BgL_portz00_543;

						BgL_portz00_543 =
							BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
							(BgL_hnamez00_542);
						if (BINARY_PORTP(BgL_portz00_543))
							{	/* Heap/make.scm 42 */
								{	/* Heap/make.scm 46 */
									obj_t BgL_arg1186z00_545;

									{	/* Heap/make.scm 46 */
										obj_t BgL_v1162z00_546;

										BgL_v1162z00_546 = create_vector(((long) 5));
										{	/* Heap/make.scm 46 */
											obj_t BgL_arg1190z00_547;

											{	/* Heap/make.scm 46 */
												obj_t BgL_arg1194z00_548;

												BgL_arg1194z00_548 =
													BGl_thezd2backendzd2zzbackend_backendz00();
												BgL_arg1190z00_547 =
													(((BgL_backendz00_bglt) COBJECT(
															((BgL_backendz00_bglt) BgL_arg1194z00_548)))->
													BgL_languagez00);
											}
											VECTOR_SET(BgL_v1162z00_546, ((long) 0),
												BgL_arg1190z00_547);
										}
										VECTOR_SET(BgL_v1162z00_546, ((long) 1),
											BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
										VECTOR_SET(BgL_v1162z00_546, ((long) 2),
											BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
										VECTOR_SET(BgL_v1162z00_546, ((long) 3),
											BGl_getzd2genvzd2zzast_envz00());
										VECTOR_SET(BgL_v1162z00_546, ((long) 4),
											BGl_getzd2tenvzd2zztype_envz00());
										BgL_arg1186z00_545 = BgL_v1162z00_546;
									}
									output_obj(BgL_portz00_543, BgL_arg1186z00_545);
								}
								return close_binary_port(BgL_portz00_543);
							}
						else
							{	/* Heap/make.scm 42 */
								return
									BGl_errorz00zz__errorz00(BGl_string1333z00zzheap_makez00,
									BGl_string1334z00zzheap_makez00, BgL_hnamez00_542);
							}
					}
				}
			else
				{	/* Heap/make.scm 38 */
					return
						BGl_userzd2errorzd2zztools_errorz00(BGl_string1333z00zzheap_makez00,
						BGl_string1335z00zzheap_makez00,
						BGl_za2heapzd2nameza2zd2zzengine_paramz00, BNIL);
				}
		}

	}



/* &make-heap */
	obj_t BGl_z62makezd2heapzb0zzheap_makez00(obj_t BgL_envz00_833)
	{
		{	/* Heap/make.scm 35 */
			return BGl_makezd2heapzd2zzheap_makez00();
		}

	}



/* &prepare-globals! */
	obj_t BGl_z62preparezd2globalsz12za2zzheap_makez00(obj_t BgL_envz00_834)
	{
		{	/* Heap/make.scm 60 */
			{	/* Heap/make.scm 75 */
				bool_t BgL_tmpz00_973;

				BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc1336z00zzheap_makez00,
					BNIL);
				BgL_tmpz00_973 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_973);
			}
		}

	}



/* &<@anonymous:1213> */
	obj_t BGl_z62zc3z04anonymousza31213ze3ze5zzheap_makez00(obj_t BgL_envz00_836,
		obj_t BgL_gz00_837)
	{
		{	/* Heap/make.scm 61 */
			if (
				((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_gz00_837)))->BgL_importz00) ==
					CNST_TABLE_REF(((long) 3))))
				{	/* Heap/make.scm 65 */
					obj_t BgL_arg1221z00_857;
					obj_t BgL_arg1223z00_858;

					BgL_arg1221z00_857 =
						(((BgL_variablez00_bglt) COBJECT(
								((BgL_variablez00_bglt)
									((BgL_globalz00_bglt) BgL_gz00_837))))->BgL_idz00);
					BgL_arg1223z00_858 =
						(((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_gz00_837)))->BgL_modulez00);
					BGl_unbindzd2globalz12zc0zzast_envz00(BgL_arg1221z00_857,
						BgL_arg1223z00_858);
				}
			else
				{	/* Heap/make.scm 64 */
					if (
						((((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_gz00_837)))->BgL_importz00) ==
							CNST_TABLE_REF(((long) 4))))
						{	/* Heap/make.scm 67 */
							obj_t BgL_vz00_859;

							BgL_vz00_859 = CNST_TABLE_REF(((long) 5));
							((((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_gz00_837)))->BgL_importz00) =
								((obj_t) BgL_vz00_859), BUNSPEC);
						}
					else
						{	/* Heap/make.scm 66 */
							BUNSPEC;
						}
				}
			{	/* Heap/make.scm 72 */
				bool_t BgL_test1389z00_995;

				{	/* Heap/make.scm 72 */
					bool_t BgL_res1316z00_860;

					{	/* Heap/make.scm 72 */
						obj_t BgL_tmpz00_996;

						{	/* Heap/make.scm 72 */
							BgL_objectz00_bglt BgL_tmpz00_997;

							BgL_tmpz00_997 = ((BgL_objectz00_bglt) BgL_gz00_837);
							BgL_tmpz00_996 = BGL_OBJECT_WIDENING(BgL_tmpz00_997);
						}
						BgL_res1316z00_860 = CBOOL(BgL_tmpz00_996);
					}
					BgL_test1389z00_995 = BgL_res1316z00_860;
				}
				if (BgL_test1389z00_995)
					{	/* Heap/make.scm 72 */
						{	/* Heap/make.scm 72 */
							long BgL_arg1232z00_861;

							{	/* Heap/make.scm 72 */
								obj_t BgL_arg1239z00_862;

								{	/* Heap/make.scm 72 */
									obj_t BgL_arg1242z00_863;

									{	/* Heap/make.scm 72 */
										long BgL_arg1816z00_864;

										{	/* Heap/make.scm 72 */
											long BgL_arg1817z00_865;

											{	/* Heap/make.scm 72 */
												long BgL_res1317z00_866;

												BgL_res1317z00_866 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt) BgL_gz00_837));
												BgL_arg1817z00_865 = BgL_res1317z00_866;
											}
											BgL_arg1816z00_864 = (BgL_arg1817z00_865 - OBJECT_TYPE);
										}
										BgL_arg1242z00_863 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_864);
									}
									BgL_arg1239z00_862 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1242z00_863);
								}
								{	/* Heap/make.scm 72 */
									long BgL_res1319z00_867;

									{	/* Heap/make.scm 72 */
										obj_t BgL_tmpz00_1006;

										BgL_tmpz00_1006 = ((obj_t) BgL_arg1239z00_862);
										BgL_res1319z00_867 = BGL_CLASS_INDEX(BgL_tmpz00_1006);
									}
									BgL_arg1232z00_861 = BgL_res1319z00_867;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_gz00_837), BgL_arg1232z00_861);
						}
						{	/* Heap/make.scm 72 */
							BgL_objectz00_bglt BgL_tmpz00_1011;

							BgL_tmpz00_1011 = ((BgL_objectz00_bglt) BgL_gz00_837);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1011, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_gz00_837);
						BgL_gz00_837;
					}
				else
					{	/* Heap/make.scm 72 */
						BFALSE;
					}
			}
			((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_gz00_837))))->BgL_occurrencez00) =
				((long) ((long) 0)), BUNSPEC);
			{	/* Heap/make.scm 75 */
				obj_t BgL_vz00_868;

				BgL_vz00_868 = BGl_za2heapzd2libraryza2zd2zzengine_paramz00;
				return
					((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_gz00_837)))->BgL_libraryz00) =
					((obj_t) BgL_vz00_868), BUNSPEC);
			}
		}

	}



/* make-add-heap */
	BGL_EXPORTED_DEF obj_t BGl_makezd2addzd2heapz00zzheap_makez00()
	{
		{	/* Heap/make.scm 84 */
			{	/* Heap/make.scm 85 */
				obj_t BgL_list1243z00_571;

				{	/* Heap/make.scm 85 */
					obj_t BgL_arg1245z00_572;

					{	/* Heap/make.scm 85 */
						obj_t BgL_arg1246z00_573;

						BgL_arg1246z00_573 =
							MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
						BgL_arg1245z00_572 =
							MAKE_YOUNG_PAIR(BGl_string1337z00zzheap_makez00,
							BgL_arg1246z00_573);
					}
					BgL_list1243z00_571 =
						MAKE_YOUNG_PAIR(BGl_string1331z00zzheap_makez00,
						BgL_arg1245z00_572);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 1)), BgL_list1243z00_571);
			}
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2currentzd2passza2zd2zzengine_passz00 =
				BGl_string1337z00zzheap_makez00;
			{	/* Heap/make.scm 85 */
				obj_t BgL_g1072z00_574;
				obj_t BgL_g1073z00_575;

				{	/* Heap/make.scm 85 */
					obj_t BgL_list1256z00_588;

					{	/* Heap/make.scm 85 */
						obj_t BgL_arg1258z00_589;

						BgL_arg1258z00_589 =
							MAKE_YOUNG_PAIR
							(BGl_preparezd2additionalzd2globalsz12zd2envzc0zzheap_makez00,
							BNIL);
						BgL_list1256z00_588 =
							MAKE_YOUNG_PAIR
							(BGl_checkzd2additionalzd2heapzd2libraryzd2envz00zzheap_makez00,
							BgL_arg1258z00_589);
					}
					BgL_g1072z00_574 = BgL_list1256z00_588;
				}
				BgL_g1073z00_575 = CNST_TABLE_REF(((long) 6));
				{
					obj_t BgL_hooksz00_577;
					obj_t BgL_hnamesz00_578;

					BgL_hooksz00_577 = BgL_g1072z00_574;
					BgL_hnamesz00_578 = BgL_g1073z00_575;
				BgL_zc3z04anonymousza31247ze3z87_579:
					if (NULLP(BgL_hooksz00_577))
						{	/* Heap/make.scm 85 */
							CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Heap/make.scm 85 */
							bool_t BgL_test1391z00_1033;

							{	/* Heap/make.scm 85 */
								obj_t BgL_fun1255z00_586;

								BgL_fun1255z00_586 = CAR(((obj_t) BgL_hooksz00_577));
								BgL_test1391z00_1033 =
									CBOOL(PROCEDURE_ENTRY(BgL_fun1255z00_586) (BgL_fun1255z00_586,
										BEOA));
							}
							if (BgL_test1391z00_1033)
								{	/* Heap/make.scm 85 */
									obj_t BgL_arg1252z00_583;
									obj_t BgL_arg1253z00_584;

									BgL_arg1252z00_583 = CDR(((obj_t) BgL_hooksz00_577));
									BgL_arg1253z00_584 = CDR(((obj_t) BgL_hnamesz00_578));
									{
										obj_t BgL_hnamesz00_1045;
										obj_t BgL_hooksz00_1044;

										BgL_hooksz00_1044 = BgL_arg1252z00_583;
										BgL_hnamesz00_1045 = BgL_arg1253z00_584;
										BgL_hnamesz00_578 = BgL_hnamesz00_1045;
										BgL_hooksz00_577 = BgL_hooksz00_1044;
										goto BgL_zc3z04anonymousza31247ze3z87_579;
									}
								}
							else
								{	/* Heap/make.scm 85 */
									obj_t BgL_arg1254z00_585;

									BgL_arg1254z00_585 = CAR(((obj_t) BgL_hnamesz00_578));
									BGl_internalzd2errorzd2zztools_errorz00
										(BGl_string1337z00zzheap_makez00,
										BGl_string1332z00zzheap_makez00, BgL_arg1254z00_585);
								}
						}
				}
			}
			{	/* Heap/make.scm 88 */
				obj_t BgL_genvz00_590;
				obj_t BgL_tenvz00_591;
				obj_t BgL_langz00_592;

				BgL_genvz00_590 = BGl_getzd2genvzd2zzast_envz00();
				BgL_tenvz00_591 = BGl_getzd2tenvzd2zztype_envz00();
				{	/* Heap/make.scm 90 */
					obj_t BgL_arg1268z00_600;

					BgL_arg1268z00_600 = BGl_thezd2backendzd2zzbackend_backendz00();
					BgL_langz00_592 =
						(((BgL_backendz00_bglt) COBJECT(
								((BgL_backendz00_bglt) BgL_arg1268z00_600)))->BgL_languagez00);
				}
				BGl_setzd2objzd2stringzd2modez12zc0zz__intextz00(CNST_TABLE_REF(((long)
							2)));
				if (STRINGP(BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00))
					{	/* Heap/make.scm 96 */
						obj_t BgL_hnamez00_594;

						BgL_hnamez00_594 =
							BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00;
						{	/* Heap/make.scm 97 */
							obj_t BgL_portz00_595;

							BgL_portz00_595 =
								BGl_openzd2outputzd2binaryzd2filezd2zz__binaryz00
								(BgL_hnamez00_594);
							if (BINARY_PORTP(BgL_portz00_595))
								{	/* Heap/make.scm 98 */
									{	/* Heap/make.scm 101 */
										obj_t BgL_arg1263z00_597;

										{	/* Heap/make.scm 101 */
											obj_t BgL_v1163z00_598;

											BgL_v1163z00_598 = create_vector(((long) 7));
											VECTOR_SET(BgL_v1163z00_598, ((long) 0), BgL_langz00_592);
											VECTOR_SET(BgL_v1163z00_598, ((long) 1),
												BGl_za2bigloozd2versionza2zd2zzengine_paramz00);
											VECTOR_SET(BgL_v1163z00_598, ((long) 2),
												BGl_za2bigloozd2specificzd2versionza2z00zzengine_paramz00);
											VECTOR_SET(BgL_v1163z00_598, ((long) 3), BgL_genvz00_590);
											VECTOR_SET(BgL_v1163z00_598, ((long) 4), BgL_tenvz00_591);
											VECTOR_SET(BgL_v1163z00_598, ((long) 5),
												BGl_za2additionalzd2includezd2foreignza2z00zzengine_paramz00);
											VECTOR_SET(BgL_v1163z00_598, ((long) 6),
												BGl_za2cczd2optionsza2zd2zzengine_paramz00);
											BgL_arg1263z00_597 = BgL_v1163z00_598;
										}
										output_obj(BgL_portz00_595, BgL_arg1263z00_597);
									}
									return close_binary_port(BgL_portz00_595);
								}
							else
								{	/* Heap/make.scm 98 */
									return
										BGl_errorz00zz__errorz00(BGl_string1338z00zzheap_makez00,
										BGl_string1334z00zzheap_makez00, BgL_hnamez00_594);
								}
						}
					}
				else
					{	/* Heap/make.scm 92 */
						return
							BGl_userzd2errorzd2zztools_errorz00
							(BGl_string1339z00zzheap_makez00, BGl_string1335z00zzheap_makez00,
							BGl_za2additionalzd2heapzd2nameza2z00zzengine_paramz00, BNIL);
					}
			}
		}

	}



/* &make-add-heap */
	obj_t BGl_z62makezd2addzd2heapz62zzheap_makez00(obj_t BgL_envz00_838)
	{
		{	/* Heap/make.scm 84 */
			return BGl_makezd2addzd2heapz00zzheap_makez00();
		}

	}



/* &check-additional-heap-library */
	obj_t BGl_z62checkzd2additionalzd2heapzd2libraryzb0zzheap_makez00(obj_t
		BgL_envz00_840)
	{
		{	/* Heap/make.scm 113 */
			if (
				(BGl_za2heapzd2libraryza2zd2zzengine_paramz00 ==
					CNST_TABLE_REF(((long) 7))))
				{	/* Heap/make.scm 115 */
					return
						BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 8)),
						BGl_string1340z00zzheap_makez00,
						BGl_za2heapzd2libraryza2zd2zzengine_paramz00, BNIL);
				}
			else
				{	/* Heap/make.scm 115 */
					if (SYMBOLP(BGl_za2heapzd2libraryza2zd2zzengine_paramz00))
						{	/* Heap/make.scm 119 */
							return BTRUE;
						}
					else
						{	/* Heap/make.scm 119 */
							return
								BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long) 8)),
								BGl_string1341z00zzheap_makez00,
								BGl_za2heapzd2libraryza2zd2zzengine_paramz00, BNIL);
		}}}

	}



/* &prepare-additional-globals! */
	obj_t BGl_z62preparezd2additionalzd2globalsz12z70zzheap_makez00(obj_t
		BgL_envz00_839)
	{
		{	/* Heap/make.scm 133 */
			{	/* Heap/make.scm 149 */
				bool_t BgL_tmpz00_1083;

				BGl_forzd2eachzd2globalz12z12zzast_envz00(BGl_proc1342z00zzheap_makez00,
					BNIL);
				BgL_tmpz00_1083 = ((bool_t) 1);
				return BBOOL(BgL_tmpz00_1083);
			}
		}

	}



/* &<@anonymous:1275> */
	obj_t BGl_z62zc3z04anonymousza31275ze3ze5zzheap_makez00(obj_t BgL_envz00_842,
		obj_t BgL_gz00_843)
	{
		{	/* Heap/make.scm 134 */
			{	/* Heap/make.scm 137 */
				bool_t BgL_test1396z00_1086;

				if (
					((((BgL_globalz00_bglt) COBJECT(
									((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_importz00) ==
						CNST_TABLE_REF(((long) 3))))
					{	/* Heap/make.scm 137 */
						BgL_test1396z00_1086 = ((bool_t) 1);
					}
				else
					{	/* Heap/make.scm 137 */
						BgL_test1396z00_1086 =
							CBOOL(
							(((BgL_globalz00_bglt) COBJECT(
										((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_libraryz00));
					}
				if (BgL_test1396z00_1086)
					{	/* Heap/make.scm 139 */
						obj_t BgL_arg1282z00_869;
						obj_t BgL_arg1284z00_870;

						BgL_arg1282z00_869 =
							(((BgL_variablez00_bglt) COBJECT(
									((BgL_variablez00_bglt)
										((BgL_globalz00_bglt) BgL_gz00_843))))->BgL_idz00);
						BgL_arg1284z00_870 =
							(((BgL_globalz00_bglt) COBJECT(
									((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_modulez00);
						BGl_unbindzd2globalz12zc0zzast_envz00(BgL_arg1282z00_869,
							BgL_arg1284z00_870);
					}
				else
					{	/* Heap/make.scm 137 */
						if (
							((((BgL_globalz00_bglt) COBJECT(
											((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_importz00) ==
								CNST_TABLE_REF(((long) 4))))
							{	/* Heap/make.scm 141 */
								obj_t BgL_vz00_871;

								BgL_vz00_871 = CNST_TABLE_REF(((long) 5));
								((((BgL_globalz00_bglt) COBJECT(
												((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_importz00) =
									((obj_t) BgL_vz00_871), BUNSPEC);
							}
						else
							{	/* Heap/make.scm 140 */
								BUNSPEC;
							}
					}
			}
			{	/* Heap/make.scm 146 */
				bool_t BgL_test1399z00_1109;

				{	/* Heap/make.scm 146 */
					bool_t BgL_res1326z00_872;

					{	/* Heap/make.scm 146 */
						obj_t BgL_tmpz00_1110;

						{	/* Heap/make.scm 146 */
							BgL_objectz00_bglt BgL_tmpz00_1111;

							BgL_tmpz00_1111 = ((BgL_objectz00_bglt) BgL_gz00_843);
							BgL_tmpz00_1110 = BGL_OBJECT_WIDENING(BgL_tmpz00_1111);
						}
						BgL_res1326z00_872 = CBOOL(BgL_tmpz00_1110);
					}
					BgL_test1399z00_1109 = BgL_res1326z00_872;
				}
				if (BgL_test1399z00_1109)
					{	/* Heap/make.scm 146 */
						{	/* Heap/make.scm 146 */
							long BgL_arg1290z00_873;

							{	/* Heap/make.scm 146 */
								obj_t BgL_arg1291z00_874;

								{	/* Heap/make.scm 146 */
									obj_t BgL_arg1292z00_875;

									{	/* Heap/make.scm 146 */
										long BgL_arg1816z00_876;

										{	/* Heap/make.scm 146 */
											long BgL_arg1817z00_877;

											{	/* Heap/make.scm 146 */
												long BgL_res1327z00_878;

												BgL_res1327z00_878 =
													BGL_OBJECT_CLASS_NUM(
													((BgL_objectz00_bglt) BgL_gz00_843));
												BgL_arg1817z00_877 = BgL_res1327z00_878;
											}
											BgL_arg1816z00_876 = (BgL_arg1817z00_877 - OBJECT_TYPE);
										}
										BgL_arg1292z00_875 =
											VECTOR_REF(BGl_za2classesza2z00zz__objectz00,
											BgL_arg1816z00_876);
									}
									BgL_arg1291z00_874 =
										BGl_classzd2superzd2zz__objectz00(BgL_arg1292z00_875);
								}
								{	/* Heap/make.scm 146 */
									long BgL_res1329z00_879;

									{	/* Heap/make.scm 146 */
										obj_t BgL_tmpz00_1120;

										BgL_tmpz00_1120 = ((obj_t) BgL_arg1291z00_874);
										BgL_res1329z00_879 = BGL_CLASS_INDEX(BgL_tmpz00_1120);
									}
									BgL_arg1290z00_873 = BgL_res1329z00_879;
							}}
							BGL_OBJECT_CLASS_NUM_SET(
								((BgL_objectz00_bglt) BgL_gz00_843), BgL_arg1290z00_873);
						}
						{	/* Heap/make.scm 146 */
							BgL_objectz00_bglt BgL_tmpz00_1125;

							BgL_tmpz00_1125 = ((BgL_objectz00_bglt) BgL_gz00_843);
							BGL_OBJECT_WIDENING_SET(BgL_tmpz00_1125, BFALSE);
						}
						((BgL_objectz00_bglt) BgL_gz00_843);
						BgL_gz00_843;
					}
				else
					{	/* Heap/make.scm 146 */
						BFALSE;
					}
			}
			((((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt)
								((BgL_globalz00_bglt) BgL_gz00_843))))->BgL_occurrencez00) =
				((long) ((long) 0)), BUNSPEC);
			{	/* Heap/make.scm 149 */
				obj_t BgL_vz00_880;

				BgL_vz00_880 = BGl_za2heapzd2libraryza2zd2zzengine_paramz00;
				return
					((((BgL_globalz00_bglt) COBJECT(
								((BgL_globalz00_bglt) BgL_gz00_843)))->BgL_libraryz00) =
					((obj_t) BgL_vz00_880), BUNSPEC);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzheap_makez00()
	{
		{	/* Heap/make.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zztype_envz00(((long) 296457413),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzforeign_libraryz00(((long) 419430923),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzheap_restorez00(((long) 147989034),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
			return
				BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1343z00zzheap_makez00));
		}

	}

#ifdef __cplusplus
}
#endif
