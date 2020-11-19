/*===========================================================================*/
/*   (Read/jvm.scm)                                                          */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/jvm.scm) */
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


	BGL_IMPORT bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzread_jvmz00();
	static obj_t BGl_z62zc3z04anonymousza31320ze3ze5zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzread_jvmz00();
	static obj_t BGl_z62zc3z04anonymousza31255ze3ze5zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2modulezd2resolverz00zz__modulez00();
	BGL_IMPORT obj_t BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzread_jvmz00();
	BGL_IMPORT obj_t BGl_dumpzd2tracezd2stackz00zz__errorz00(obj_t, obj_t);
	extern obj_t BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t);
	BGL_IMPORT obj_t
		BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t, obj_t);
	static obj_t BGl_z62sourcezd2ze3qualifiedzd2typez81zzread_jvmz00(obj_t,
		obj_t);
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_putpropz12z12zz__r4_symbols_6_4z00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2destza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_jvmz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t);
	static obj_t BGl_toplevelzd2initzd2zzread_jvmz00();
	static obj_t
		BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00();
	static obj_t BGl_genericzd2initzd2zzread_jvmz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	static obj_t BGl_dozd2readzd2jfilez00zzread_jvmz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_basenamez00zz__osz00(obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_z62modulezd2ze3qualifiedzd2typez81zzread_jvmz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_close_input_port(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	static obj_t BGl_za2jvmzd2markza2zd2zzread_jvmz00 = BUNSPEC;
	BGL_IMPORT bool_t bigloo_strncmp(obj_t, obj_t, long);
	extern obj_t BGl_za2moduleza2z00zzmodule_modulez00;
	static obj_t BGl_z62jvmzd2classzd2sanszd2directoryzb0zzread_jvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	static obj_t BGl_z62addzd2qualifiedzd2typez12z70zzread_jvmz00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzread_jvmz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_jvmz00();
	BGL_IMPORT obj_t BGl_prefixz00zz__osz00(obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzread_jvmz00();
	extern obj_t BGl_backendz00zzbackend_backendz00;
	BGL_IMPORT obj_t BGl_getpropz00zz__r4_symbols_6_4z00(obj_t, obj_t);
	extern obj_t BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00;
	extern obj_t BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00;
	static obj_t BGl_z62jvmzd2classzd2withzd2directoryzb0zzread_jvmz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_readzd2jfilezd2zzread_jvmz00();
	BGL_EXPORTED_DECL obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_z62readzd2jfilezb0zzread_jvmz00(obj_t);
	static obj_t __cnst[5];


	   
		 
		DEFINE_STRING(BGl_string1400z00zzread_jvmz00,
		BgL_bgl_string1400za700za7za7r1420za7, "Can't find jfile", 16);
	      DEFINE_STRING(BGl_string1401z00zzread_jvmz00,
		BgL_bgl_string1401za700za7za7r1421za7, "Illegal jfile format", 20);
	      DEFINE_STRING(BGl_string1402z00zzread_jvmz00,
		BgL_bgl_string1402za700za7za7r1422za7, ".", 1);
	      DEFINE_STRING(BGl_string1403z00zzread_jvmz00,
		BgL_bgl_string1403za700za7za7r1423za7,
		"Can't find qualified type name for module `", 43);
	      DEFINE_STRING(BGl_string1404z00zzread_jvmz00,
		BgL_bgl_string1404za700za7za7r1424za7, "',", 2);
	      DEFINE_STRING(BGl_string1405z00zzread_jvmz00,
		BgL_bgl_string1405za700za7za7r1425za7, "'.", 2);
	      DEFINE_STRING(BGl_string1406z00zzread_jvmz00,
		BgL_bgl_string1406za700za7za7r1426za7, "Using name `", 12);
	      DEFINE_STRING(BGl_string1408z00zzread_jvmz00,
		BgL_bgl_string1408za700za7za7r1427za7, "read_jvm", 8);
	      DEFINE_STRING(BGl_string1409z00zzread_jvmz00,
		BgL_bgl_string1409za700za7za7r1428za7,
		"module ld done read-jfile jvm-qtype ", 36);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_addzd2qualifiedzd2typez12zd2envzc0zzread_jvmz00,
		BgL_bgl_za762addza7d2qualifi1429z00, va_generic_entry,
		BGl_z62addzd2qualifiedzd2typez12z70zzread_jvmz00, BUNSPEC, -3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classzd2sanszd2directoryzd2envz00zzread_jvmz00,
		BgL_bgl_za762jvmza7d2classza7d1430za7,
		BGl_z62jvmzd2classzd2sanszd2directoryzb0zzread_jvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_modulezd2ze3qualifiedzd2typezd2envz31zzread_jvmz00,
		BgL_bgl_za762moduleza7d2za7e3q1431za7,
		BGl_z62modulezd2ze3qualifiedzd2typez81zzread_jvmz00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1407z00zzread_jvmz00,
		BgL_bgl_za762za7c3za704anonymo1432za7,
		BGl_z62zc3z04anonymousza31320ze3ze5zzread_jvmz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_readzd2jfilezd2envz00zzread_jvmz00,
		BgL_bgl_za762readza7d2jfileza71433za7, BGl_z62readzd2jfilezb0zzread_jvmz00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1387z00zzread_jvmz00,
		BgL_bgl_string1387za700za7za7r1434za7, "", 0);
	      DEFINE_STRING(BGl_string1388z00zzread_jvmz00,
		BgL_bgl_string1388za700za7za7r1435za7, ", for identifier `", 18);
	      DEFINE_STRING(BGl_string1389z00zzread_jvmz00,
		BgL_bgl_string1389za700za7za7r1436za7, "'", 1);
	      DEFINE_STRING(BGl_string1390z00zzread_jvmz00,
		BgL_bgl_string1390za700za7za7r1437za7, "empty name for module -- ", 25);
	      DEFINE_STRING(BGl_string1391z00zzread_jvmz00,
		BgL_bgl_string1391za700za7za7r1438za7, "add-qualified-type!", 19);
	      DEFINE_STRING(BGl_string1392z00zzread_jvmz00,
		BgL_bgl_string1392za700za7za7r1439za7, "\n  identifier=", 14);
	      DEFINE_STRING(BGl_string1393z00zzread_jvmz00,
		BgL_bgl_string1393za700za7za7r1440za7, "\n", 1);
	      DEFINE_STRING(BGl_string1394z00zzread_jvmz00,
		BgL_bgl_string1394za700za7za7r1441za7, "\n  new qualified type=", 22);
	      DEFINE_STRING(BGl_string1395z00zzread_jvmz00,
		BgL_bgl_string1395za700za7za7r1442za7, "\n  old qualified type=", 22);
	      DEFINE_STRING(BGl_string1396z00zzread_jvmz00,
		BgL_bgl_string1396za700za7za7r1443za7,
		"qualified type redefinition:\n  module/class=", 44);
	      DEFINE_STRING(BGl_string1397z00zzread_jvmz00,
		BgL_bgl_string1397za700za7za7r1444za7, "]", 1);
	      DEFINE_STRING(BGl_string1398z00zzread_jvmz00,
		BgL_bgl_string1398za700za7za7r1445za7, "      [reading jfile ", 21);
	      DEFINE_STRING(BGl_string1399z00zzread_jvmz00,
		BgL_bgl_string1399za700za7za7r1446za7, "Can't open jfile", 16);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_sourcezd2ze3qualifiedzd2typezd2envz31zzread_jvmz00,
		BgL_bgl_za762sourceza7d2za7e3q1447za7,
		BGl_z62sourcezd2ze3qualifiedzd2typez81zzread_jvmz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_jvmzd2classzd2withzd2directoryzd2envz00zzread_jvmz00,
		BgL_bgl_za762jvmza7d2classza7d1448za7,
		BGl_z62jvmzd2classzd2withzd2directoryzb0zzread_jvmz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_jvmz00));
		     ADD_ROOT((void *) (&BGl_za2jvmzd2markza2zd2zzread_jvmz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_jvmz00(long
		BgL_checksumz00_554, char *BgL_fromz00_555)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_jvmz00))
				{
					BGl_requirezd2initializa7ationz75zzread_jvmz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_jvmz00();
					BGl_libraryzd2moduleszd2initz00zzread_jvmz00();
					BGl_cnstzd2initzd2zzread_jvmz00();
					BGl_importedzd2moduleszd2initz00zzread_jvmz00();
					return BGl_toplevelzd2initzd2zzread_jvmz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"read_jvm");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"read_jvm");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			{	/* Read/jvm.scm 15 */
				obj_t BgL_cportz00_534;

				{	/* Read/jvm.scm 15 */
					obj_t BgL_stringz00_542;

					BgL_stringz00_542 = BGl_string1409z00zzread_jvmz00;
					{	/* Read/jvm.scm 15 */
						obj_t BgL_startz00_543;

						BgL_startz00_543 = BINT(((long) 0));
						{	/* Read/jvm.scm 15 */
							obj_t BgL_endz00_544;

							BgL_endz00_544 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_542)));
							{	/* Read/jvm.scm 15 */

								BgL_cportz00_534 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_542, BgL_startz00_543, BgL_endz00_544);
				}}}}
				{
					long BgL_iz00_535;

					BgL_iz00_535 = ((long) 4);
				BgL_loopz00_536:
					if ((BgL_iz00_535 == ((long) -1)))
						{	/* Read/jvm.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Read/jvm.scm 15 */
							{	/* Read/jvm.scm 15 */
								obj_t BgL_arg1417z00_538;

								{	/* Read/jvm.scm 15 */

									{	/* Read/jvm.scm 15 */
										obj_t BgL_locationz00_540;

										BgL_locationz00_540 = BBOOL(((bool_t) 0));
										{	/* Read/jvm.scm 15 */

											BgL_arg1417z00_538 =
												BGl_readz00zz__readerz00(BgL_cportz00_534,
												BgL_locationz00_540);
										}
									}
								}
								{	/* Read/jvm.scm 15 */
									int BgL_tmpz00_587;

									BgL_tmpz00_587 = (int) (BgL_iz00_535);
									CNST_TABLE_SET(BgL_tmpz00_587, BgL_arg1417z00_538);
							}}
							{	/* Read/jvm.scm 15 */
								int BgL_auxz00_541;

								BgL_auxz00_541 = (int) ((BgL_iz00_535 - ((long) 1)));
								{
									long BgL_iz00_592;

									BgL_iz00_592 = (long) (BgL_auxz00_541);
									BgL_iz00_535 = BgL_iz00_592;
									goto BgL_loopz00_536;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			return (BGl_za2jvmzd2markza2zd2zzread_jvmz00 =
				CNST_TABLE_REF(((long) 0)), BUNSPEC);
		}

	}



/* jvm-class-sans-directory */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(obj_t BgL_filez00_3)
	{
		{	/* Read/jvm.scm 33 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* Read/jvm.scm 36 */
					long BgL_ldz00_118;
					long BgL_lfz00_119;

					BgL_ldz00_118 =
						STRING_LENGTH(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00);
					BgL_lfz00_119 = STRING_LENGTH(BgL_filez00_3);
					{	/* Read/jvm.scm 38 */
						bool_t BgL_test1452z00_600;

						if ((BgL_lfz00_119 < (BgL_ldz00_118 + ((long) 1))))
							{	/* Read/jvm.scm 38 */
								BgL_test1452z00_600 = ((bool_t) 1);
							}
						else
							{	/* Read/jvm.scm 38 */
								if (bigloo_strncmp(BgL_filez00_3,
										BGl_za2jvmzd2directoryza2zd2zzengine_paramz00,
										BgL_ldz00_118))
									{	/* Read/jvm.scm 39 */
										if (
											(STRING_REF(BgL_filez00_3, BgL_ldz00_118) ==
												(unsigned char) (FILE_SEPARATOR)))
											{	/* Read/jvm.scm 40 */
												BgL_test1452z00_600 = ((bool_t) 0);
											}
										else
											{	/* Read/jvm.scm 40 */
												BgL_test1452z00_600 = ((bool_t) 1);
											}
									}
								else
									{	/* Read/jvm.scm 39 */
										BgL_test1452z00_600 = ((bool_t) 1);
									}
							}
						if (BgL_test1452z00_600)
							{	/* Read/jvm.scm 38 */
								return BgL_filez00_3;
							}
						else
							{	/* Read/jvm.scm 38 */
								return
									c_substring(BgL_filez00_3,
									(((long) 1) + BgL_ldz00_118), BgL_lfz00_119);
				}}}
			else
				{	/* Read/jvm.scm 34 */
					return BgL_filez00_3;
				}
		}

	}



/* &jvm-class-sans-directory */
	obj_t BGl_z62jvmzd2classzd2sanszd2directoryzb0zzread_jvmz00(obj_t
		BgL_envz00_516, obj_t BgL_filez00_517)
	{
		{	/* Read/jvm.scm 33 */
			return
				BGl_jvmzd2classzd2sanszd2directoryzd2zzread_jvmz00(BgL_filez00_517);
		}

	}



/* jvm-class-with-directory */
	BGL_EXPORTED_DEF obj_t
		BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(obj_t BgL_classz00_4)
	{
		{	/* Read/jvm.scm 47 */
			if (STRINGP(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00))
				{	/* Read/jvm.scm 51 */
					bool_t BgL_test1457z00_615;

					{	/* Read/jvm.scm 51 */
						bool_t BgL_res1343z00_410;

						{	/* Read/jvm.scm 51 */
							long BgL_l1z00_397;

							BgL_l1z00_397 = STRING_LENGTH(BgL_classz00_4);
							if ((BgL_l1z00_397 == ((long) 0)))
								{	/* Read/jvm.scm 51 */
									int BgL_arg1267z00_400;

									{	/* Read/jvm.scm 51 */
										char *BgL_auxz00_621;
										char *BgL_tmpz00_619;

										BgL_auxz00_621 =
											BSTRING_TO_STRING(BGl_string1387z00zzread_jvmz00);
										BgL_tmpz00_619 = BSTRING_TO_STRING(BgL_classz00_4);
										BgL_arg1267z00_400 =
											memcmp(BgL_tmpz00_619, BgL_auxz00_621, BgL_l1z00_397);
									}
									BgL_res1343z00_410 =
										((long) (BgL_arg1267z00_400) == ((long) 0));
								}
							else
								{	/* Read/jvm.scm 51 */
									BgL_res1343z00_410 = ((bool_t) 0);
								}
						}
						BgL_test1457z00_615 = BgL_res1343z00_410;
					}
					if (BgL_test1457z00_615)
						{	/* Read/jvm.scm 51 */
							return BGl_za2jvmzd2directoryza2zd2zzengine_paramz00;
						}
					else
						{	/* Read/jvm.scm 51 */
							return
								BGl_makezd2filezd2namez00zz__osz00
								(BGl_za2jvmzd2directoryza2zd2zzengine_paramz00, BgL_classz00_4);
						}
				}
			else
				{	/* Read/jvm.scm 49 */
					return BgL_classz00_4;
				}
		}

	}



/* &jvm-class-with-directory */
	obj_t BGl_z62jvmzd2classzd2withzd2directoryzb0zzread_jvmz00(obj_t
		BgL_envz00_518, obj_t BgL_classz00_519)
	{
		{	/* Read/jvm.scm 47 */
			return
				BGl_jvmzd2classzd2withzd2directoryzd2zzread_jvmz00(BgL_classz00_519);
		}

	}



/* add-qualified-type! */
	BGL_EXPORTED_DEF obj_t BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(obj_t
		BgL_modulez00_5, obj_t BgL_qtypez00_6, obj_t BgL_identz00_7)
	{
		{	/* Read/jvm.scm 64 */
			{	/* Read/jvm.scm 65 */
				obj_t BgL_bcz00_139;

				BgL_bcz00_139 = BGl_thezd2backendzd2zzbackend_backendz00();
				{	/* Read/jvm.scm 66 */
					bool_t BgL_test1459z00_629;

					if (BGl_isazf3zf3zz__objectz00(BgL_bcz00_139,
							BGl_backendz00zzbackend_backendz00))
						{	/* Read/jvm.scm 67 */
							bool_t BgL_test1461z00_632;

							{	/* Read/jvm.scm 67 */
								bool_t BgL_res1349z00_427;

								{	/* Read/jvm.scm 67 */
									long BgL_l1z00_414;

									BgL_l1z00_414 = STRING_LENGTH(BgL_qtypez00_6);
									if ((BgL_l1z00_414 == ((long) 0)))
										{	/* Read/jvm.scm 67 */
											int BgL_arg1267z00_417;

											{	/* Read/jvm.scm 67 */
												char *BgL_auxz00_638;
												char *BgL_tmpz00_636;

												BgL_auxz00_638 =
													BSTRING_TO_STRING(BGl_string1387z00zzread_jvmz00);
												BgL_tmpz00_636 = BSTRING_TO_STRING(BgL_qtypez00_6);
												BgL_arg1267z00_417 =
													memcmp(BgL_tmpz00_636, BgL_auxz00_638, BgL_l1z00_414);
											}
											BgL_res1349z00_427 =
												((long) (BgL_arg1267z00_417) == ((long) 0));
										}
									else
										{	/* Read/jvm.scm 67 */
											BgL_res1349z00_427 = ((bool_t) 0);
										}
								}
								BgL_test1461z00_632 = BgL_res1349z00_427;
							}
							if (BgL_test1461z00_632)
								{	/* Read/jvm.scm 68 */
									obj_t BgL_arg1179z00_158;

									BgL_arg1179z00_158 =
										BGl_thezd2backendzd2zzbackend_backendz00();
									BgL_test1459z00_629 =
										(((BgL_backendz00_bglt) COBJECT(
												((BgL_backendz00_bglt) BgL_arg1179z00_158)))->
										BgL_qualifiedzd2typeszd2);
								}
							else
								{	/* Read/jvm.scm 67 */
									BgL_test1459z00_629 = ((bool_t) 0);
								}
						}
					else
						{	/* Read/jvm.scm 66 */
							BgL_test1459z00_629 = ((bool_t) 0);
						}
					if (BgL_test1459z00_629)
						{	/* Read/jvm.scm 72 */
							obj_t BgL_arg1167z00_144;

							{	/* Read/jvm.scm 72 */
								bool_t BgL_test1463z00_646;

								if (PAIRP(BgL_identz00_7))
									{	/* Read/jvm.scm 72 */
										obj_t BgL_tmpz00_649;

										BgL_tmpz00_649 = CAR(BgL_identz00_7);
										BgL_test1463z00_646 = SYMBOLP(BgL_tmpz00_649);
									}
								else
									{	/* Read/jvm.scm 72 */
										BgL_test1463z00_646 = ((bool_t) 0);
									}
								if (BgL_test1463z00_646)
									{	/* Read/jvm.scm 74 */
										obj_t BgL_arg1176z00_152;

										{	/* Read/jvm.scm 74 */
											obj_t BgL_arg1177z00_153;

											BgL_arg1177z00_153 = CAR(BgL_identz00_7);
											{	/* Read/jvm.scm 74 */
												obj_t BgL_res1353z00_437;

												{	/* Read/jvm.scm 74 */
													obj_t BgL_arg1466z00_436;

													BgL_arg1466z00_436 =
														SYMBOL_TO_STRING(((obj_t) BgL_arg1177z00_153));
													BgL_res1353z00_437 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_436);
												}
												BgL_arg1176z00_152 = BgL_res1353z00_437;
											}
										}
										BgL_arg1167z00_144 =
											string_append_3(BGl_string1388z00zzread_jvmz00,
											BgL_arg1176z00_152, BGl_string1389z00zzread_jvmz00);
									}
								else
									{	/* Read/jvm.scm 72 */
										BgL_arg1167z00_144 = BGl_string1387z00zzread_jvmz00;
									}
							}
							{	/* Read/jvm.scm 69 */
								obj_t BgL_list1168z00_145;

								{	/* Read/jvm.scm 69 */
									obj_t BgL_arg1169z00_146;

									{	/* Read/jvm.scm 69 */
										obj_t BgL_arg1170z00_147;

										{	/* Read/jvm.scm 69 */
											obj_t BgL_arg1172z00_148;

											BgL_arg1172z00_148 =
												MAKE_YOUNG_PAIR(BgL_arg1167z00_144, BNIL);
											BgL_arg1170z00_147 =
												MAKE_YOUNG_PAIR(BgL_modulez00_5, BgL_arg1172z00_148);
										}
										BgL_arg1169z00_146 =
											MAKE_YOUNG_PAIR(BGl_string1390z00zzread_jvmz00,
											BgL_arg1170z00_147);
									}
									BgL_list1168z00_145 =
										MAKE_YOUNG_PAIR(BGl_string1391z00zzread_jvmz00,
										BgL_arg1169z00_146);
								}
								BGl_warningz00zz__errorz00(BgL_list1168z00_145);
							}
						}
					else
						{	/* Read/jvm.scm 66 */
							BFALSE;
						}
				}
				{	/* Read/jvm.scm 77 */
					obj_t BgL_bz00_159;

					BgL_bz00_159 =
						BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_5,
						CNST_TABLE_REF(((long) 0)));
					if (CBOOL(BgL_bz00_159))
						{	/* Read/jvm.scm 80 */
							bool_t BgL_test1468z00_666;

							if (BGl_isazf3zf3zz__objectz00(BgL_bcz00_139,
									BGl_backendz00zzbackend_backendz00))
								{	/* Read/jvm.scm 80 */
									if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_bz00_159,
											BgL_qtypez00_6))
										{	/* Read/jvm.scm 81 */
											BgL_test1468z00_666 = ((bool_t) 0);
										}
									else
										{	/* Read/jvm.scm 82 */
											obj_t BgL_arg1242z00_184;

											BgL_arg1242z00_184 =
												BGl_thezd2backendzd2zzbackend_backendz00();
											BgL_test1468z00_666 =
												(((BgL_backendz00_bglt) COBJECT(
														((BgL_backendz00_bglt) BgL_arg1242z00_184)))->
												BgL_qualifiedzd2typeszd2);
										}
								}
							else
								{	/* Read/jvm.scm 80 */
									BgL_test1468z00_666 = ((bool_t) 0);
								}
							if (BgL_test1468z00_666)
								{	/* Read/jvm.scm 80 */
									BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_5,
										CNST_TABLE_REF(((long) 0)), BgL_qtypez00_6);
									{	/* Read/jvm.scm 86 */
										obj_t BgL_arg1190z00_164;

										{	/* Read/jvm.scm 86 */
											bool_t BgL_test1471z00_676;

											if (PAIRP(BgL_identz00_7))
												{	/* Read/jvm.scm 86 */
													obj_t BgL_tmpz00_679;

													BgL_tmpz00_679 = CAR(BgL_identz00_7);
													BgL_test1471z00_676 = SYMBOLP(BgL_tmpz00_679);
												}
											else
												{	/* Read/jvm.scm 86 */
													BgL_test1471z00_676 = ((bool_t) 0);
												}
											if (BgL_test1471z00_676)
												{	/* Read/jvm.scm 88 */
													obj_t BgL_arg1227z00_177;

													{	/* Read/jvm.scm 88 */
														obj_t BgL_arg1229z00_178;

														BgL_arg1229z00_178 = CAR(BgL_identz00_7);
														{	/* Read/jvm.scm 88 */
															obj_t BgL_res1358z00_448;

															{	/* Read/jvm.scm 88 */
																obj_t BgL_arg1466z00_447;

																BgL_arg1466z00_447 =
																	SYMBOL_TO_STRING(
																	((obj_t) BgL_arg1229z00_178));
																BgL_res1358z00_448 =
																	BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																	(BgL_arg1466z00_447);
															}
															BgL_arg1227z00_177 = BgL_res1358z00_448;
														}
													}
													BgL_arg1190z00_164 =
														string_append(BGl_string1392z00zzread_jvmz00,
														BgL_arg1227z00_177);
												}
											else
												{	/* Read/jvm.scm 86 */
													BgL_arg1190z00_164 = BGl_string1387z00zzread_jvmz00;
												}
										}
										{	/* Read/jvm.scm 84 */
											obj_t BgL_list1191z00_165;

											{	/* Read/jvm.scm 84 */
												obj_t BgL_arg1194z00_166;

												{	/* Read/jvm.scm 84 */
													obj_t BgL_arg1197z00_167;

													{	/* Read/jvm.scm 84 */
														obj_t BgL_arg1201z00_168;

														{	/* Read/jvm.scm 84 */
															obj_t BgL_arg1208z00_169;

															{	/* Read/jvm.scm 84 */
																obj_t BgL_arg1211z00_170;

																{	/* Read/jvm.scm 84 */
																	obj_t BgL_arg1216z00_171;

																	{	/* Read/jvm.scm 84 */
																		obj_t BgL_arg1221z00_172;

																		{	/* Read/jvm.scm 84 */
																			obj_t BgL_arg1223z00_173;

																			BgL_arg1223z00_173 =
																				MAKE_YOUNG_PAIR
																				(BGl_string1393z00zzread_jvmz00, BNIL);
																			BgL_arg1221z00_172 =
																				MAKE_YOUNG_PAIR(BgL_qtypez00_6,
																				BgL_arg1223z00_173);
																		}
																		BgL_arg1216z00_171 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1394z00zzread_jvmz00,
																			BgL_arg1221z00_172);
																	}
																	BgL_arg1211z00_170 =
																		MAKE_YOUNG_PAIR(BgL_bz00_159,
																		BgL_arg1216z00_171);
																}
																BgL_arg1208z00_169 =
																	MAKE_YOUNG_PAIR
																	(BGl_string1395z00zzread_jvmz00,
																	BgL_arg1211z00_170);
															}
															BgL_arg1201z00_168 =
																MAKE_YOUNG_PAIR(BgL_arg1190z00_164,
																BgL_arg1208z00_169);
														}
														BgL_arg1197z00_167 =
															MAKE_YOUNG_PAIR(BgL_modulez00_5,
															BgL_arg1201z00_168);
													}
													BgL_arg1194z00_166 =
														MAKE_YOUNG_PAIR(BGl_string1396z00zzread_jvmz00,
														BgL_arg1197z00_167);
												}
												BgL_list1191z00_165 =
													MAKE_YOUNG_PAIR(BGl_string1391z00zzread_jvmz00,
													BgL_arg1194z00_166);
											}
											BGl_warningz00zz__errorz00(BgL_list1191z00_165);
										}
									}
									{	/* Read/jvm.scm 93 */
										obj_t BgL_arg1239z00_181;

										{	/* Read/jvm.scm 93 */
											obj_t BgL_res1359z00_450;

											{	/* Read/jvm.scm 93 */
												obj_t BgL_tmpz00_697;

												BgL_tmpz00_697 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1359z00_450 =
													BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_697);
											}
											BgL_arg1239z00_181 = BgL_res1359z00_450;
										}
										return
											BGl_dumpzd2tracezd2stackz00zz__errorz00
											(BgL_arg1239z00_181, BINT(((long) 10)));
								}}
							else
								{	/* Read/jvm.scm 80 */
									return BFALSE;
								}
						}
					else
						{	/* Read/jvm.scm 78 */
							return
								BGl_putpropz12z12zz__r4_symbols_6_4z00(BgL_modulez00_5,
								CNST_TABLE_REF(((long) 0)), BgL_qtypez00_6);
		}}}}

	}



/* &add-qualified-type! */
	obj_t BGl_z62addzd2qualifiedzd2typez12z70zzread_jvmz00(obj_t BgL_envz00_520,
		obj_t BgL_modulez00_521, obj_t BgL_qtypez00_522, obj_t BgL_identz00_523)
	{
		{	/* Read/jvm.scm 64 */
			return
				BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00(BgL_modulez00_521,
				BgL_qtypez00_522, BgL_identz00_523);
		}

	}



/* read-jfile */
	BGL_EXPORTED_DEF obj_t BGl_readzd2jfilezd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 98 */
			{
				obj_t BgL_namez00_190;

				if (STRINGP(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00))
					{	/* Read/jvm.scm 109 */
						if (fexists(BSTRING_TO_STRING
								(BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00)))
							{	/* Read/jvm.scm 113 */
								BgL_namez00_190 =
									BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00;
							BgL_zc3z04anonymousza31247ze3z87_191:
								{	/* Read/jvm.scm 100 */
									obj_t BgL_portz00_192;

									{	/* Read/jvm.scm 100 */

										BgL_portz00_192 =
											BGl_openzd2inputzd2filez00zz__r4_ports_6_10_1z00
											(BgL_namez00_190, BTRUE, BINT(((long) 5000000)));
									}
									{	/* Read/jvm.scm 101 */
										obj_t BgL_list1248z00_193;

										{	/* Read/jvm.scm 101 */
											obj_t BgL_arg1250z00_194;

											{	/* Read/jvm.scm 101 */
												obj_t BgL_arg1252z00_195;

												{	/* Read/jvm.scm 101 */
													obj_t BgL_arg1253z00_196;

													BgL_arg1253z00_196 =
														MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
													BgL_arg1252z00_195 =
														MAKE_YOUNG_PAIR(BGl_string1397z00zzread_jvmz00,
														BgL_arg1253z00_196);
												}
												BgL_arg1250z00_194 =
													MAKE_YOUNG_PAIR(BgL_namez00_190, BgL_arg1252z00_195);
											}
											BgL_list1248z00_193 =
												MAKE_YOUNG_PAIR(BGl_string1398z00zzread_jvmz00,
												BgL_arg1250z00_194);
										}
										BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
											BgL_list1248z00_193);
									}
									if (INPUT_PORTP(BgL_portz00_192))
										{	/* Read/jvm.scm 104 */
											obj_t BgL_exitd1048z00_198;

											BgL_exitd1048z00_198 = BGL_EXITD_TOP_AS_OBJ();
											{	/* Read/jvm.scm 106 */
												obj_t BgL_zc3z04anonymousza31255ze3z87_524;

												BgL_zc3z04anonymousza31255ze3z87_524 =
													MAKE_FX_PROCEDURE
													(BGl_z62zc3z04anonymousza31255ze3ze5zzread_jvmz00,
													(int) (((long) 0)), (int) (((long) 1)));
												PROCEDURE_SET(BgL_zc3z04anonymousza31255ze3z87_524,
													(int) (((long) 0)), BgL_portz00_192);
												BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
													(BgL_exitd1048z00_198,
													BgL_zc3z04anonymousza31255ze3z87_524);
												{	/* Read/jvm.scm 105 */
													obj_t BgL_tmp1050z00_200;

													BgL_tmp1050z00_200 =
														BGl_dozd2readzd2jfilez00zzread_jvmz00
														(BgL_portz00_192, BgL_namez00_190);
													BGl_exitdzd2popzd2protectz12z12zz__bexitz00
														(BgL_exitd1048z00_198);
													bgl_close_input_port(BgL_portz00_192);
													return BgL_tmp1050z00_200;
												}
											}
										}
									else
										{	/* Read/jvm.scm 102 */
											return
												BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
														(long) 1)), BGl_string1399z00zzread_jvmz00,
												BgL_namez00_190, BNIL);
							}}}
						else
							{	/* Read/jvm.scm 113 */
								return
									BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
											1)), BGl_string1400z00zzread_jvmz00,
									BGl_za2qualifiedzd2typezd2fileza2z00zzengine_paramz00, BNIL);
					}}
				else
					{	/* Read/jvm.scm 109 */
						if (fexists(BSTRING_TO_STRING
								(BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00)))
							{
								obj_t BgL_namez00_738;

								BgL_namez00_738 =
									BGl_za2qualifiedzd2typezd2filezd2defaultza2zd2zzengine_paramz00;
								BgL_namez00_190 = BgL_namez00_738;
								goto BgL_zc3z04anonymousza31247ze3z87_191;
							}
						else
							{	/* Read/jvm.scm 110 */
								return CNST_TABLE_REF(((long) 2));
		}}}}

	}



/* &read-jfile */
	obj_t BGl_z62readzd2jfilezb0zzread_jvmz00(obj_t BgL_envz00_525)
	{
		{	/* Read/jvm.scm 98 */
			return BGl_readzd2jfilezd2zzread_jvmz00();
		}

	}



/* &<@anonymous:1255> */
	obj_t BGl_z62zc3z04anonymousza31255ze3ze5zzread_jvmz00(obj_t BgL_envz00_526)
	{
		{	/* Read/jvm.scm 104 */
			{	/* Read/jvm.scm 106 */
				obj_t BgL_portz00_527;

				BgL_portz00_527 = PROCEDURE_REF(BgL_envz00_526, (int) (((long) 0)));
				return bgl_close_input_port(((obj_t) BgL_portz00_527));
			}
		}

	}



/* do-read-jfile */
	obj_t BGl_dozd2readzd2jfilez00zzread_jvmz00(obj_t BgL_portz00_8,
		obj_t BgL_jfnamez00_9)
	{
		{	/* Read/jvm.scm 121 */
			{	/* Read/jvm.scm 122 */
				obj_t BgL_objz00_208;

				BgL_objz00_208 = BGl_readz00zz__readerz00(BgL_portz00_8, BTRUE);
				{	/* Read/jvm.scm 122 */
					obj_t BgL_eofz00_209;

					{	/* Read/jvm.scm 123 */

						{	/* Read/jvm.scm 123 */

							BgL_eofz00_209 = BGl_readz00zz__readerz00(BgL_portz00_8, BFALSE);
						}
					}
					{	/* Read/jvm.scm 123 */

						{	/* Read/jvm.scm 125 */
							bool_t BgL_test1477z00_747;

							{	/* Read/jvm.scm 125 */
								bool_t BgL_res1363z00_459;

								BgL_res1363z00_459 = EOF_OBJECTP(BgL_objz00_208);
								BgL_test1477z00_747 = BgL_res1363z00_459;
							}
							if (BgL_test1477z00_747)
								{	/* Read/jvm.scm 125 */
									return
										BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF(((long)
												1)), BGl_string1401z00zzread_jvmz00, BgL_objz00_208,
										BNIL);
								}
							else
								{	/* Read/jvm.scm 127 */
									bool_t BgL_test1478z00_751;

									{	/* Read/jvm.scm 127 */
										bool_t BgL_res1364z00_460;

										BgL_res1364z00_460 = EOF_OBJECTP(BgL_eofz00_209);
										BgL_test1478z00_751 = BgL_res1364z00_460;
									}
									if (BgL_test1478z00_751)
										{
											obj_t BgL_objz00_214;

											BgL_objz00_214 = BgL_objz00_208;
										BgL_zc3z04anonymousza31261ze3z87_215:
											if (NULLP(BgL_objz00_214))
												{	/* Read/jvm.scm 131 */
													return CNST_TABLE_REF(((long) 2));
												}
											else
												{

													{	/* Read/jvm.scm 133 */
														obj_t BgL_ezd2103zd2_221;

														BgL_ezd2103zd2_221 = CAR(((obj_t) BgL_objz00_214));
														if (PAIRP(BgL_ezd2103zd2_221))
															{	/* Read/jvm.scm 133 */
																obj_t BgL_carzd2108zd2_223;
																obj_t BgL_cdrzd2109zd2_224;

																BgL_carzd2108zd2_223 = CAR(BgL_ezd2103zd2_221);
																BgL_cdrzd2109zd2_224 = CDR(BgL_ezd2103zd2_221);
																if (SYMBOLP(BgL_carzd2108zd2_223))
																	{	/* Read/jvm.scm 133 */
																		if (PAIRP(BgL_cdrzd2109zd2_224))
																			{	/* Read/jvm.scm 133 */
																				obj_t BgL_carzd2114zd2_227;

																				BgL_carzd2114zd2_227 =
																					CAR(BgL_cdrzd2109zd2_224);
																				if (STRINGP(BgL_carzd2114zd2_227))
																					{	/* Read/jvm.scm 133 */
																						if (NULLP(CDR
																								(BgL_cdrzd2109zd2_224)))
																							{	/* Read/jvm.scm 133 */
																								BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
																									(BgL_carzd2108zd2_223,
																									BgL_carzd2114zd2_227, BNIL);
																								{	/* Read/jvm.scm 136 */
																									obj_t BgL_arg1275z00_477;

																									BgL_arg1275z00_477 =
																										CDR(
																										((obj_t) BgL_objz00_214));
																									{
																										obj_t BgL_objz00_775;

																										BgL_objz00_775 =
																											BgL_arg1275z00_477;
																										BgL_objz00_214 =
																											BgL_objz00_775;
																										goto
																											BgL_zc3z04anonymousza31261ze3z87_215;
																									}
																								}
																							}
																						else
																							{	/* Read/jvm.scm 133 */
																							BgL_tagzd2102zd2_220:
																								{	/* Read/jvm.scm 140 */
																									obj_t BgL_arg1276z00_234;

																									BgL_arg1276z00_234 =
																										CAR(
																										((obj_t) BgL_objz00_214));
																									return
																										BGl_userzd2errorzd2zztools_errorz00
																										(CNST_TABLE_REF(((long) 1)),
																										BGl_string1401z00zzread_jvmz00,
																										BgL_arg1276z00_234, BNIL);
																					}}}
																				else
																					{	/* Read/jvm.scm 133 */
																						goto BgL_tagzd2102zd2_220;
																					}
																			}
																		else
																			{	/* Read/jvm.scm 133 */
																				goto BgL_tagzd2102zd2_220;
																			}
																	}
																else
																	{	/* Read/jvm.scm 133 */
																		goto BgL_tagzd2102zd2_220;
																	}
															}
														else
															{	/* Read/jvm.scm 133 */
																goto BgL_tagzd2102zd2_220;
															}
													}
												}
										}
									else
										{	/* Read/jvm.scm 127 */
											return
												BGl_userzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
														(long) 1)), BGl_string1401z00zzread_jvmz00,
												BgL_eofz00_209, BNIL);
		}}}}}}}

	}



/* add-current-module-qualified-type-name! */
	obj_t
		BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00()
	{
		{	/* Read/jvm.scm 145 */
			{	/* Read/jvm.scm 147 */
				obj_t BgL_qtypez00_240;

				BgL_qtypez00_240 =
					BGl_getpropz00zz__r4_symbols_6_4z00
					(BGl_za2moduleza2z00zzmodule_modulez00, CNST_TABLE_REF(((long) 0)));
				if (STRINGP(BgL_qtypez00_240))
					{	/* Read/jvm.scm 148 */
						return BFALSE;
					}
				else
					{	/* Read/jvm.scm 153 */
						bool_t BgL_test1486z00_786;

						if (STRINGP(BGl_za2destza2z00zzengine_paramz00))
							{	/* Read/jvm.scm 153 */
								BgL_test1486z00_786 =
									(BGl_za2passza2z00zzengine_paramz00 ==
									CNST_TABLE_REF(((long) 3)));
							}
						else
							{	/* Read/jvm.scm 153 */
								BgL_test1486z00_786 = ((bool_t) 1);
							}
						if (BgL_test1486z00_786)
							{	/* Read/jvm.scm 156 */
								obj_t BgL_qtz00_244;

								{	/* Read/jvm.scm 156 */
									bool_t BgL_test1488z00_791;

									{	/* Read/jvm.scm 156 */
										obj_t BgL_tmpz00_792;

										BgL_tmpz00_792 =
											CAR(BGl_za2srczd2filesza2zd2zzengine_paramz00);
										BgL_test1488z00_791 = STRINGP(BgL_tmpz00_792);
									}
									if (BgL_test1488z00_791)
										{	/* Read/jvm.scm 156 */
											BgL_qtz00_244 =
												BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00(CAR
													(BGl_za2srczd2filesza2zd2zzengine_paramz00)));
										}
									else
										{	/* Read/jvm.scm 156 */
											BgL_qtz00_244 = BGl_string1402z00zzread_jvmz00;
										}
								}
								BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
									(BGl_za2moduleza2z00zzmodule_modulez00, BgL_qtz00_244, BNIL);
								return BgL_qtz00_244;
							}
						else
							{	/* Read/jvm.scm 162 */
								obj_t BgL_qtz00_251;

								BgL_qtz00_251 =
									BGl_prefixz00zz__osz00(BGl_za2destza2z00zzengine_paramz00);
								BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
									(BGl_za2moduleza2z00zzmodule_modulez00, BgL_qtz00_251, BNIL);
								return BgL_qtz00_251;
							}
					}
			}
		}

	}



/* module->qualified-type */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t
		BgL_modulez00_10)
	{
		{	/* Read/jvm.scm 172 */
			{	/* Read/jvm.scm 173 */
				obj_t BgL_bz00_254;

				BgL_bz00_254 =
					BGl_getpropz00zz__r4_symbols_6_4z00(BgL_modulez00_10,
					CNST_TABLE_REF(((long) 0)));
				if (STRINGP(BgL_bz00_254))
					{	/* Read/jvm.scm 175 */
						return BgL_bz00_254;
					}
				else
					{	/* Read/jvm.scm 175 */
						if ((BgL_modulez00_10 == BGl_za2moduleza2z00zzmodule_modulez00))
							{	/* Read/jvm.scm 177 */
								return
									BGl_addzd2currentzd2modulezd2qualifiedzd2typezd2namez12zc0zzread_jvmz00
									();
							}
						else
							{	/* Read/jvm.scm 180 */
								obj_t BgL_abasez00_257;

								{	/* Read/jvm.scm 180 */
									obj_t BgL_l1111z00_274;

									BgL_l1111z00_274 =
										BGl_za2accesszd2filesza2zd2zzengine_paramz00;
									if (NULLP(BgL_l1111z00_274))
										{	/* Read/jvm.scm 180 */
											BgL_abasez00_257 = BNIL;
										}
									else
										{	/* Read/jvm.scm 180 */
											obj_t BgL_head1113z00_276;

											{	/* Read/jvm.scm 180 */
												obj_t BgL_arg1315z00_288;

												{	/* Read/jvm.scm 180 */
													obj_t BgL_arg1316z00_289;

													BgL_arg1316z00_289 = CAR(((obj_t) BgL_l1111z00_274));
													BgL_arg1315z00_288 =
														BGl_dirnamez00zz__osz00(BgL_arg1316z00_289);
												}
												{	/* Read/jvm.scm 180 */
													obj_t BgL_res1376z00_488;

													BgL_res1376z00_488 =
														MAKE_YOUNG_PAIR(BgL_arg1315z00_288, BNIL);
													BgL_head1113z00_276 = BgL_res1376z00_488;
												}
											}
											{	/* Read/jvm.scm 180 */
												obj_t BgL_g1116z00_277;

												BgL_g1116z00_277 = CDR(((obj_t) BgL_l1111z00_274));
												{
													obj_t BgL_l1111z00_279;
													obj_t BgL_tail1114z00_280;

													BgL_l1111z00_279 = BgL_g1116z00_277;
													BgL_tail1114z00_280 = BgL_head1113z00_276;
												BgL_zc3z04anonymousza31309ze3z87_281:
													if (NULLP(BgL_l1111z00_279))
														{	/* Read/jvm.scm 180 */
															BgL_abasez00_257 = BgL_head1113z00_276;
														}
													else
														{	/* Read/jvm.scm 180 */
															obj_t BgL_newtail1115z00_283;

															{	/* Read/jvm.scm 180 */
																obj_t BgL_arg1312z00_285;

																{	/* Read/jvm.scm 180 */
																	obj_t BgL_arg1314z00_286;

																	BgL_arg1314z00_286 =
																		CAR(((obj_t) BgL_l1111z00_279));
																	BgL_arg1312z00_285 =
																		BGl_dirnamez00zz__osz00(BgL_arg1314z00_286);
																}
																{	/* Read/jvm.scm 180 */
																	obj_t BgL_res1378z00_492;

																	BgL_res1378z00_492 =
																		MAKE_YOUNG_PAIR(BgL_arg1312z00_285, BNIL);
																	BgL_newtail1115z00_283 = BgL_res1378z00_492;
																}
															}
															SET_CDR(BgL_tail1114z00_280,
																BgL_newtail1115z00_283);
															{	/* Read/jvm.scm 180 */
																obj_t BgL_arg1311z00_284;

																BgL_arg1311z00_284 =
																	CDR(((obj_t) BgL_l1111z00_279));
																{
																	obj_t BgL_tail1114z00_826;
																	obj_t BgL_l1111z00_825;

																	BgL_l1111z00_825 = BgL_arg1311z00_284;
																	BgL_tail1114z00_826 = BgL_newtail1115z00_283;
																	BgL_tail1114z00_280 = BgL_tail1114z00_826;
																	BgL_l1111z00_279 = BgL_l1111z00_825;
																	goto BgL_zc3z04anonymousza31309ze3z87_281;
																}
															}
														}
												}
											}
										}
								}
								{	/* Read/jvm.scm 180 */
									obj_t BgL_filesz00_258;

									{	/* Read/jvm.scm 181 */
										obj_t BgL_fun1307z00_273;

										BgL_fun1307z00_273 =
											BGl_bigloozd2modulezd2resolverz00zz__modulez00();
										BgL_filesz00_258 =
											PROCEDURE_ENTRY(BgL_fun1307z00_273) (BgL_fun1307z00_273,
											BgL_modulez00_10, BNIL, BgL_abasez00_257, BEOA);
									}
									{	/* Read/jvm.scm 181 */
										obj_t BgL_defaultz00_259;

										if (PAIRP(BgL_filesz00_258))
											{	/* Read/jvm.scm 182 */
												BgL_defaultz00_259 =
													BGl_prefixz00zz__osz00(BGl_basenamez00zz__osz00(CAR
														(BgL_filesz00_258)));
											}
										else
											{	/* Read/jvm.scm 184 */
												obj_t BgL_res1380z00_499;

												{	/* Read/jvm.scm 184 */
													obj_t BgL_arg1466z00_498;

													BgL_arg1466z00_498 =
														SYMBOL_TO_STRING(BgL_modulez00_10);
													BgL_res1380z00_499 =
														BGl_stringzd2copyzd2zz__r4_strings_6_7z00
														(BgL_arg1466z00_498);
												}
												BgL_defaultz00_259 = BgL_res1380z00_499;
											}
										{	/* Read/jvm.scm 182 */

											{	/* Read/jvm.scm 185 */
												bool_t BgL_test1494z00_841;

												{	/* Read/jvm.scm 185 */
													obj_t BgL_arg1301z00_268;

													BgL_arg1301z00_268 =
														BGl_thezd2backendzd2zzbackend_backendz00();
													BgL_test1494z00_841 =
														(((BgL_backendz00_bglt) COBJECT(
																((BgL_backendz00_bglt) BgL_arg1301z00_268)))->
														BgL_qualifiedzd2typeszd2);
												}
												if (BgL_test1494z00_841)
													{	/* Read/jvm.scm 188 */
														obj_t BgL_arg1295z00_262;

														{	/* Read/jvm.scm 188 */
															obj_t BgL_arg1300z00_267;

															{	/* Read/jvm.scm 188 */
																obj_t BgL_res1382z00_505;

																{	/* Read/jvm.scm 188 */
																	obj_t BgL_arg1466z00_504;

																	BgL_arg1466z00_504 =
																		SYMBOL_TO_STRING(BgL_modulez00_10);
																	BgL_res1382z00_505 =
																		BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																		(BgL_arg1466z00_504);
																}
																BgL_arg1300z00_267 = BgL_res1382z00_505;
															}
															BgL_arg1295z00_262 =
																string_append_3(BGl_string1403z00zzread_jvmz00,
																BgL_arg1300z00_267,
																BGl_string1404z00zzread_jvmz00);
														}
														{	/* Read/jvm.scm 186 */
															obj_t BgL_list1296z00_263;

															{	/* Read/jvm.scm 186 */
																obj_t BgL_arg1297z00_264;

																{	/* Read/jvm.scm 186 */
																	obj_t BgL_arg1298z00_265;

																	{	/* Read/jvm.scm 186 */
																		obj_t BgL_arg1299z00_266;

																		BgL_arg1299z00_266 =
																			MAKE_YOUNG_PAIR
																			(BGl_string1405z00zzread_jvmz00, BNIL);
																		BgL_arg1298z00_265 =
																			MAKE_YOUNG_PAIR(BgL_defaultz00_259,
																			BgL_arg1299z00_266);
																	}
																	BgL_arg1297z00_264 =
																		MAKE_YOUNG_PAIR
																		(BGl_string1406z00zzread_jvmz00,
																		BgL_arg1298z00_265);
																}
																BgL_list1296z00_263 =
																	MAKE_YOUNG_PAIR(BgL_arg1295z00_262,
																	BgL_arg1297z00_264);
															}
															BGl_warningz00zz__errorz00(BgL_list1296z00_263);
														}
													}
												else
													{	/* Read/jvm.scm 185 */
														BFALSE;
													}
											}
											BGl_addzd2qualifiedzd2typez12z12zzread_jvmz00
												(BgL_modulez00_10, BgL_defaultz00_259, BNIL);
											return BgL_defaultz00_259;
										}
									}
								}
							}
					}
			}
		}

	}



/* &module->qualified-type */
	obj_t BGl_z62modulezd2ze3qualifiedzd2typez81zzread_jvmz00(obj_t
		BgL_envz00_528, obj_t BgL_modulez00_529)
	{
		{	/* Read/jvm.scm 172 */
			return
				BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_modulez00_529);
		}

	}



/* source->qualified-type */
	BGL_EXPORTED_DEF obj_t BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(obj_t
		BgL_filez00_11)
	{
		{	/* Read/jvm.scm 198 */
			if (fexists(BSTRING_TO_STRING(BgL_filez00_11)))
				{	/* Read/jvm.scm 199 */
					return
						BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
						(BgL_filez00_11, BGl_proc1407z00zzread_jvmz00);
				}
			else
				{	/* Read/jvm.scm 199 */
					return BFALSE;
				}
		}

	}



/* &source->qualified-type */
	obj_t BGl_z62sourcezd2ze3qualifiedzd2typez81zzread_jvmz00(obj_t
		BgL_envz00_531, obj_t BgL_filez00_532)
	{
		{	/* Read/jvm.scm 198 */
			return BGl_sourcezd2ze3qualifiedzd2typeze3zzread_jvmz00(BgL_filez00_532);
		}

	}



/* &<@anonymous:1320> */
	obj_t BGl_z62zc3z04anonymousza31320ze3ze5zzread_jvmz00(obj_t BgL_envz00_533)
	{
		{	/* Read/jvm.scm 201 */
			{	/* Read/jvm.scm 202 */
				obj_t BgL_ezd2120zd2_550;

				{	/* Read/jvm.scm 202 */
					obj_t BgL_arg1327z00_551;

					{	/* Read/jvm.scm 202 */
						obj_t BgL_res1384z00_552;

						{	/* Read/jvm.scm 202 */
							obj_t BgL_tmpz00_860;

							BgL_tmpz00_860 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1384z00_552 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_860);
						}
						BgL_arg1327z00_551 = BgL_res1384z00_552;
					}
					{	/* Read/jvm.scm 202 */

						{	/* Read/jvm.scm 202 */

							BgL_ezd2120zd2_550 =
								BGl_readz00zz__readerz00(BgL_arg1327z00_551, BFALSE);
						}
					}
				}
				if (PAIRP(BgL_ezd2120zd2_550))
					{	/* Read/jvm.scm 201 */
						obj_t BgL_cdrzd2124zd2_553;

						BgL_cdrzd2124zd2_553 = CDR(BgL_ezd2120zd2_550);
						if ((CAR(BgL_ezd2120zd2_550) == CNST_TABLE_REF(((long) 4))))
							{	/* Read/jvm.scm 201 */
								if (PAIRP(BgL_cdrzd2124zd2_553))
									{	/* Read/jvm.scm 201 */
										return
											BGl_modulezd2ze3qualifiedzd2typeze3zzread_jvmz00(CAR
											(BgL_cdrzd2124zd2_553));
									}
								else
									{	/* Read/jvm.scm 201 */
										return BFALSE;
									}
							}
						else
							{	/* Read/jvm.scm 201 */
								return BFALSE;
							}
					}
				else
					{	/* Read/jvm.scm 201 */
						return BFALSE;
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_jvmz00()
	{
		{	/* Read/jvm.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1408z00zzread_jvmz00));
		}

	}

#ifdef __cplusplus
}
#endif
