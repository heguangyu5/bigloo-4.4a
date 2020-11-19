/*===========================================================================*/
/*   (Jas/profile.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Jas/profile.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL__envz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_thisz00;
		obj_t BgL_jstringz00;
		obj_t BgL_has_clinitz00;
		obj_t BgL_clinitz00;
		obj_t BgL_resz00;
		obj_t BgL_namesz00;
		obj_t BgL_lnamesz00;
		obj_t BgL_linesz00;
	}              *BgL__envz00_bglt;


	static obj_t BGl_z62lambda1926z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1927z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_profilezd2makezd2namesz00zzjas_profilez00(long, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62lambda1931z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1932z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1936z62zzjas_profilez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62lambda1937z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1941z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1942z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1946z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1947z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1952z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1953z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1957z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1958z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62lambda1962z62zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_z62lambda1963z62zzjas_profilez00(obj_t, obj_t, obj_t);
	static obj_t BGl_profilezd2codezd2zzjas_profilez00(BgL__envz00_bglt, long,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzjas_profilez00();
	BGL_IMPORT bool_t BGl_2zc3zc3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT bool_t BGl_2ze3ze3zz__r4_numbers_6_5z00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t);
	static obj_t BGl_profilezd2infoszd2zzjas_profilez00(BgL__envz00_bglt, obj_t);
	static obj_t BGl_profilezd2extrazd2clinitz00zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	static obj_t BGl_appendzd221011zd2zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzjas_profilez00();
	static obj_t BGl_profilezd2makezd2resz00zzjas_profilez00(long, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62jaszd2profilezb0zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_profilingz00zzjas_profilez00(obj_t);
	static BgL__envz00_bglt BGl_makezd2envzd2zzjas_profilez00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	BGL_IMPORT obj_t BGl_registerzd2classz12zc0zz__objectz00(obj_t, obj_t, obj_t,
		long, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzjas_profilez00();
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31921ze3ze5zzjas_profilez00(obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00 =
		BUNSPEC;
	static obj_t BGl_profilezd2methodszd2zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	static obj_t BGl__envz00zzjas_profilez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zzjas_profilez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzjas_profilez00();
	static obj_t BGl_genericzd2initzd2zzjas_profilez00();
	BGL_IMPORT obj_t BGl_makezd2classzd2fieldz00zz__objectz00(obj_t, obj_t, obj_t,
		bool_t, bool_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_getzd2idze70z35zzjas_profilez00(obj_t, obj_t);
	static obj_t BGl_profilezd2makezd2linesz00zzjas_profilez00(long, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzjas_libz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_profilezd2declarationszd2zzjas_profilez00(BgL__envz00_bglt,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zzjas_profilez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzjas_profilez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzjas_profilez00();
	BGL_IMPORT obj_t BGl_objectz00zz__objectz00;
	static obj_t BGl_mfze70ze7zzjas_profilez00(BgL__envz00_bglt, obj_t, obj_t,
		obj_t);
	static obj_t BGl_pushzd2intzd2zzjas_profilez00(obj_t);
	static BgL__envz00_bglt BGl_z62lambda1917z62zzjas_profilez00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t, obj_t, obj_t, obj_t);
	static BgL__envz00_bglt BGl_z62lambda1919z62zzjas_profilez00(obj_t);
	static obj_t __cnst[53];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2066z00zzjas_profilez00,
		BgL_bgl_za762lambda1927za7622090z00, BGl_z62lambda1927z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2067z00zzjas_profilez00,
		BgL_bgl_za762lambda1926za7622091z00, BGl_z62lambda1926z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2068z00zzjas_profilez00,
		BgL_bgl_za762lambda1932za7622092z00, BGl_z62lambda1932z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2069z00zzjas_profilez00,
		BgL_bgl_za762lambda1931za7622093z00, BGl_z62lambda1931z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2070z00zzjas_profilez00,
		BgL_bgl_za762lambda1937za7622094z00, BGl_z62lambda1937z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2071z00zzjas_profilez00,
		BgL_bgl_za762lambda1936za7622095z00, BGl_z62lambda1936z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2072z00zzjas_profilez00,
		BgL_bgl_za762lambda1942za7622096z00, BGl_z62lambda1942z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2073z00zzjas_profilez00,
		BgL_bgl_za762lambda1941za7622097z00, BGl_z62lambda1941z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2074z00zzjas_profilez00,
		BgL_bgl_za762lambda1947za7622098z00, BGl_z62lambda1947z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2075z00zzjas_profilez00,
		BgL_bgl_za762lambda1946za7622099z00, BGl_z62lambda1946z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2076z00zzjas_profilez00,
		BgL_bgl_za762lambda1953za7622100z00, BGl_z62lambda1953z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2077z00zzjas_profilez00,
		BgL_bgl_za762lambda1952za7622101z00, BGl_z62lambda1952z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2078z00zzjas_profilez00,
		BgL_bgl_za762lambda1958za7622102z00, BGl_z62lambda1958z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2079z00zzjas_profilez00,
		BgL_bgl_za762lambda1957za7622103z00, BGl_z62lambda1957z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2080z00zzjas_profilez00,
		BgL_bgl_za762lambda1963za7622104z00, BGl_z62lambda1963z62zzjas_profilez00,
		0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2081z00zzjas_profilez00,
		BgL_bgl_za762lambda1962za7622105z00, BGl_z62lambda1962z62zzjas_profilez00,
		0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2082z00zzjas_profilez00,
		BgL_bgl_za762za7c3za704anonymo2106za7,
		BGl_z62zc3z04anonymousza31921ze3ze5zzjas_profilez00, 0L, BUNSPEC, 1);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2083z00zzjas_profilez00,
		BgL_bgl_za762lambda1919za7622107z00, BGl_z62lambda1919z62zzjas_profilez00,
		0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2084z00zzjas_profilez00,
		BgL_bgl_za762lambda1917za7622108z00, BGl_z62lambda1917z62zzjas_profilez00,
		0L, BUNSPEC, 8);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_jaszd2profilezd2envz00zzjas_profilez00,
		BgL_bgl_za762jasza7d2profile2109z00,
		BGl_z62jaszd2profilezb0zzjas_profilez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string2051z00zzjas_profilez00,
		BgL_bgl_string2051za700za7za7j2110za7, "jas", 3);
	      DEFINE_STRING(BGl_string2052z00zzjas_profilez00,
		BgL_bgl_string2052za700za7za7j2111za7, "bad module definition", 21);
	      DEFINE_STRING(BGl_string2053z00zzjas_profilez00,
		BgL_bgl_string2053za700za7za7j2112za7, "undef", 5);
	      DEFINE_STRING(BGl_string2054z00zzjas_profilez00,
		BgL_bgl_string2054za700za7za7j2113za7, "__prof", 6);
	      DEFINE_STRING(BGl_string2055z00zzjas_profilez00,
		BgL_bgl_string2055za700za7za7j2114za7, "<clinit>", 8);
	      DEFINE_STRING(BGl_string2056z00zzjas_profilez00,
		BgL_bgl_string2056za700za7za7j2115za7, "java.lang.String", 16);
	      DEFINE_STRING(BGl_string2057z00zzjas_profilez00,
		BgL_bgl_string2057za700za7za7j2116za7, "__profiler", 10);
	      DEFINE_STRING(BGl_string2058z00zzjas_profilez00,
		BgL_bgl_string2058za700za7za7j2117za7, "__profiler__lines", 17);
	      DEFINE_STRING(BGl_string2059z00zzjas_profilez00,
		BgL_bgl_string2059za700za7za7j2118za7, "__profiler__names", 17);
	      DEFINE_STRING(BGl_string2060z00zzjas_profilez00,
		BgL_bgl_string2060za700za7za7j2119za7, "__profiler__res", 15);
	      DEFINE_STRING(BGl_string2061z00zzjas_profilez00,
		BgL_bgl_string2061za700za7za7j2120za7, "cant reach clinit", 17);
	      DEFINE_STRING(BGl_string2062z00zzjas_profilez00,
		BgL_bgl_string2062za700za7za7j2121za7, "as", 2);
	      DEFINE_STRING(BGl_string2063z00zzjas_profilez00,
		BgL_bgl_string2063za700za7za7j2122za7, "bad method definition", 21);
	      DEFINE_STRING(BGl_string2064z00zzjas_profilez00,
		BgL_bgl_string2064za700za7za7j2123za7, "profile", 7);
	      DEFINE_STRING(BGl_string2065z00zzjas_profilez00,
		BgL_bgl_string2065za700za7za7j2124za7, "empty basic block", 17);
	      DEFINE_STRING(BGl_string2085z00zzjas_profilez00,
		BgL_bgl_string2085za700za7za7j2125za7, "jas_profile", 11);
	      DEFINE_STRING(BGl_string2086z00zzjas_profilez00,
		BgL_bgl_string2086za700za7za7j2126za7,
		"jas_profile _env lines lnames names res clinit has_clinit jstring obj this int (newarray int) (iastore) anewarray putstatic (aastore) (dup) (iconst_5) (iconst_4) (iconst_3) (iconst_2) (iconst_1) (iconst_0) (iconst_m1) ldc sipush bipush ***start*** (handler line comment localvar) getstatic aaload dup2 iaload iconst_1 iadd iastore fields sde sourcefile field method void public static vector (vector (vector int)) __profile_lines __profile_names __profile_res class (sourcefile sde fields) declare ",
		498);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00));
		     ADD_ROOT((void *) (&BGl__envz00zzjas_profilez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzjas_profilez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzjas_profilez00(long
		BgL_checksumz00_1179, char *BgL_fromz00_1180)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzjas_profilez00))
				{
					BGl_requirezd2initializa7ationz75zzjas_profilez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzjas_profilez00();
					BGl_libraryzd2moduleszd2initz00zzjas_profilez00();
					BGl_cnstzd2initzd2zzjas_profilez00();
					BGl_importedzd2moduleszd2initz00zzjas_profilez00();
					BGl_objectzd2initzd2zzjas_profilez00();
					return BGl_toplevelzd2initzd2zzjas_profilez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"jas_profile");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"jas_profile");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			{	/* Jas/profile.scm 1 */
				obj_t BgL_cportz00_1142;

				{	/* Jas/profile.scm 1 */
					obj_t BgL_stringz00_1150;

					BgL_stringz00_1150 = BGl_string2086z00zzjas_profilez00;
					{	/* Jas/profile.scm 1 */
						obj_t BgL_startz00_1151;

						BgL_startz00_1151 = BINT(((long) 0));
						{	/* Jas/profile.scm 1 */
							obj_t BgL_endz00_1152;

							BgL_endz00_1152 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1150)));
							{	/* Jas/profile.scm 1 */

								BgL_cportz00_1142 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1150, BgL_startz00_1151, BgL_endz00_1152);
				}}}}
				{
					long BgL_iz00_1143;

					BgL_iz00_1143 = ((long) 52);
				BgL_loopz00_1144:
					if ((BgL_iz00_1143 == ((long) -1)))
						{	/* Jas/profile.scm 1 */
							return BUNSPEC;
						}
					else
						{	/* Jas/profile.scm 1 */
							{	/* Jas/profile.scm 1 */
								obj_t BgL_arg2088z00_1146;

								{	/* Jas/profile.scm 1 */

									{	/* Jas/profile.scm 1 */
										obj_t BgL_locationz00_1148;

										BgL_locationz00_1148 = BBOOL(((bool_t) 0));
										{	/* Jas/profile.scm 1 */

											BgL_arg2088z00_1146 =
												BGl_readz00zz__readerz00(BgL_cportz00_1142,
												BgL_locationz00_1148);
										}
									}
								}
								{	/* Jas/profile.scm 1 */
									int BgL_tmpz00_1209;

									BgL_tmpz00_1209 = (int) (BgL_iz00_1143);
									CNST_TABLE_SET(BgL_tmpz00_1209, BgL_arg2088z00_1146);
							}}
							{	/* Jas/profile.scm 1 */
								int BgL_auxz00_1149;

								BgL_auxz00_1149 = (int) ((BgL_iz00_1143 - ((long) 1)));
								{
									long BgL_iz00_1214;

									BgL_iz00_1214 = (long) (BgL_auxz00_1149);
									BgL_iz00_1143 = BgL_iz00_1214;
									goto BgL_loopz00_1144;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			return (BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00 =
				BINT(((long) 0)), BUNSPEC);
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzjas_profilez00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_30;

				BgL_headz00_30 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_31;
					obj_t BgL_tailz00_32;

					BgL_prevz00_31 = BgL_headz00_30;
					BgL_tailz00_32 = BgL_l1z00_1;
				BgL_loopz00_33:
					if (PAIRP(BgL_tailz00_32))
						{
							obj_t BgL_newzd2prevzd2_35;

							BgL_newzd2prevzd2_35 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_32), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_31, BgL_newzd2prevzd2_35);
							{
								obj_t BgL_tailz00_1225;
								obj_t BgL_prevz00_1224;

								BgL_prevz00_1224 = BgL_newzd2prevzd2_35;
								BgL_tailz00_1225 = CDR(BgL_tailz00_32);
								BgL_tailz00_32 = BgL_tailz00_1225;
								BgL_prevz00_31 = BgL_prevz00_1224;
								goto BgL_loopz00_33;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_30);
				}
			}
		}

	}



/* jas-profile */
	BGL_EXPORTED_DEF obj_t BGl_jaszd2profilezd2zzjas_profilez00(obj_t BgL_lz00_3)
	{
		{	/* Jas/profile.scm 15 */
			if (
				((long) CINT(BGl_za2jaszd2profilezd2modeza2z00zzjas_profilez00) >
					((long) 0)))
				{	/* Jas/profile.scm 16 */
					return BGl_profilingz00zzjas_profilez00(BgL_lz00_3);
				}
			else
				{	/* Jas/profile.scm 16 */
					return BgL_lz00_3;
				}
		}

	}



/* &jas-profile */
	obj_t BGl_z62jaszd2profilezb0zzjas_profilez00(obj_t BgL_envz00_1068,
		obj_t BgL_lz00_1069)
	{
		{	/* Jas/profile.scm 15 */
			return BGl_jaszd2profilezd2zzjas_profilez00(BgL_lz00_1069);
		}

	}



/* profiling */
	obj_t BGl_profilingz00zzjas_profilez00(obj_t BgL_lz00_4)
	{
		{	/* Jas/profile.scm 27 */
			{
				obj_t BgL_keyz00_40;
				obj_t BgL_thisz00_41;
				obj_t BgL_extendz00_42;
				obj_t BgL_implementsz00_43;
				obj_t BgL_declsz00_44;
				obj_t BgL_infosz00_45;

				if (NULLP(BgL_lz00_4))
					{	/* Jas/profile.scm 28 */
					BgL_tagzd2102zd2_47:
						return
							BGl_errorz00zz__errorz00(BGl_string2051z00zzjas_profilez00,
							BGl_string2052z00zzjas_profilez00, BgL_lz00_4);
					}
				else
					{	/* Jas/profile.scm 28 */
						obj_t BgL_cdrzd2119zd2_50;

						BgL_cdrzd2119zd2_50 = CDR(BgL_lz00_4);
						{	/* Jas/profile.scm 28 */
							obj_t BgL_keyz00_51;

							BgL_keyz00_51 = CAR(BgL_lz00_4);
							if (PAIRP(BgL_cdrzd2119zd2_50))
								{	/* Jas/profile.scm 28 */
									obj_t BgL_carzd2126zd2_53;
									obj_t BgL_cdrzd2127zd2_54;

									BgL_carzd2126zd2_53 = CAR(BgL_cdrzd2119zd2_50);
									BgL_cdrzd2127zd2_54 = CDR(BgL_cdrzd2119zd2_50);
									if (SYMBOLP(BgL_carzd2126zd2_53))
										{	/* Jas/profile.scm 28 */
											if (PAIRP(BgL_cdrzd2127zd2_54))
												{	/* Jas/profile.scm 28 */
													obj_t BgL_carzd2134zd2_58;
													obj_t BgL_cdrzd2135zd2_59;

													BgL_carzd2134zd2_58 = CAR(BgL_cdrzd2127zd2_54);
													BgL_cdrzd2135zd2_59 = CDR(BgL_cdrzd2127zd2_54);
													if (SYMBOLP(BgL_carzd2134zd2_58))
														{	/* Jas/profile.scm 28 */
															if (PAIRP(BgL_cdrzd2135zd2_59))
																{	/* Jas/profile.scm 28 */
																	obj_t BgL_carzd2141zd2_63;
																	obj_t BgL_cdrzd2142zd2_64;

																	BgL_carzd2141zd2_63 =
																		CAR(BgL_cdrzd2135zd2_59);
																	BgL_cdrzd2142zd2_64 =
																		CDR(BgL_cdrzd2135zd2_59);
																	{
																		obj_t BgL_gzd2158zd2_84;
																		obj_t BgL_gzd2145zd2_68;

																		BgL_gzd2145zd2_68 = BgL_carzd2141zd2_63;
																		if (NULLP(BgL_gzd2145zd2_68))
																			{	/* Jas/profile.scm 28 */
																				if (PAIRP(BgL_cdrzd2142zd2_64))
																					{	/* Jas/profile.scm 28 */
																						obj_t BgL_carzd2149zd2_72;

																						BgL_carzd2149zd2_72 =
																							CAR(BgL_cdrzd2142zd2_64);
																						if (PAIRP(BgL_carzd2149zd2_72))
																							{	/* Jas/profile.scm 28 */
																								if (
																									(CAR(BgL_carzd2149zd2_72) ==
																										CNST_TABLE_REF(((long) 0))))
																									{	/* Jas/profile.scm 28 */
																										BgL_keyz00_40 =
																											BgL_keyz00_51;
																										BgL_thisz00_41 =
																											BgL_carzd2126zd2_53;
																										BgL_extendz00_42 =
																											BgL_carzd2134zd2_58;
																										BgL_implementsz00_43 =
																											BgL_carzd2141zd2_63;
																										BgL_declsz00_44 =
																											CDR(BgL_carzd2149zd2_72);
																										BgL_infosz00_45 =
																											CDR(BgL_cdrzd2142zd2_64);
																									BgL_tagzd2101zd2_46:
																										{	/* Jas/profile.scm 33 */
																											BgL__envz00_bglt
																												BgL_envz00_102;
																											BgL_envz00_102 =
																												BGl_makezd2envzd2zzjas_profilez00
																												(BgL_thisz00_41,
																												BgL_declsz00_44,
																												BgL_infosz00_45);
																											{	/* Jas/profile.scm 35 */
																												obj_t
																													BgL_arg1165z00_103;
																												{	/* Jas/profile.scm 35 */
																													obj_t
																														BgL_arg1166z00_104;
																													{	/* Jas/profile.scm 35 */
																														obj_t
																															BgL_arg1167z00_105;
																														{	/* Jas/profile.scm 35 */
																															obj_t
																																BgL_arg1169z00_106;
																															{	/* Jas/profile.scm 35 */
																																obj_t
																																	BgL_arg1170z00_107;
																																obj_t
																																	BgL_arg1172z00_108;
																																{	/* Jas/profile.scm 35 */
																																	obj_t
																																		BgL_arg1174z00_109;
																																	BgL_arg1174z00_109
																																		=
																																		BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																		(BGl_profilezd2declarationszd2zzjas_profilez00
																																		(BgL_envz00_102,
																																			BgL_declsz00_44),
																																		BNIL);
																																	BgL_arg1170z00_107
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				0)),
																																		BgL_arg1174z00_109);
																																}
																																BgL_arg1172z00_108
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BGl_profilezd2infoszd2zzjas_profilez00
																																	(BgL_envz00_102,
																																		BgL_infosz00_45),
																																	BNIL);
																																BgL_arg1169z00_106
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1170z00_107,
																																	BgL_arg1172z00_108);
																															}
																															BgL_arg1167z00_105
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_implementsz00_43,
																																BgL_arg1169z00_106);
																														}
																														BgL_arg1166z00_104 =
																															MAKE_YOUNG_PAIR
																															(BgL_extendz00_42,
																															BgL_arg1167z00_105);
																													}
																													BgL_arg1165z00_103 =
																														MAKE_YOUNG_PAIR
																														(BgL_thisz00_41,
																														BgL_arg1166z00_104);
																												}
																												return
																													MAKE_YOUNG_PAIR
																													(BgL_keyz00_40,
																													BgL_arg1165z00_103);
																											}
																										}
																									}
																								else
																									{	/* Jas/profile.scm 28 */
																										goto BgL_tagzd2102zd2_47;
																									}
																							}
																						else
																							{	/* Jas/profile.scm 28 */
																								goto BgL_tagzd2102zd2_47;
																							}
																					}
																				else
																					{	/* Jas/profile.scm 28 */
																						goto BgL_tagzd2102zd2_47;
																					}
																			}
																		else
																			{	/* Jas/profile.scm 28 */
																				if (PAIRP(BgL_gzd2145zd2_68))
																					{	/* Jas/profile.scm 28 */
																						bool_t BgL_test2142z00_1281;

																						{	/* Jas/profile.scm 28 */
																							obj_t BgL_tmpz00_1282;

																							BgL_tmpz00_1282 =
																								CAR(BgL_gzd2145zd2_68);
																							BgL_test2142z00_1281 =
																								SYMBOLP(BgL_tmpz00_1282);
																						}
																						if (BgL_test2142z00_1281)
																							{	/* Jas/profile.scm 28 */
																								BgL_gzd2158zd2_84 =
																									CDR(BgL_gzd2145zd2_68);
																							BgL_zc3z04anonymousza31125ze3z87_85:
																								if (NULLP
																									(BgL_gzd2158zd2_84))
																									{	/* Jas/profile.scm 28 */
																										if (PAIRP
																											(BgL_cdrzd2142zd2_64))
																											{	/* Jas/profile.scm 28 */
																												obj_t
																													BgL_carzd2162zd2_88;
																												BgL_carzd2162zd2_88 =
																													CAR
																													(BgL_cdrzd2142zd2_64);
																												if (PAIRP
																													(BgL_carzd2162zd2_88))
																													{	/* Jas/profile.scm 28 */
																														if (
																															(CAR
																																(BgL_carzd2162zd2_88)
																																==
																																CNST_TABLE_REF((
																																		(long) 0))))
																															{
																																obj_t
																																	BgL_infosz00_1302;
																																obj_t
																																	BgL_declsz00_1300;
																																obj_t
																																	BgL_implementsz00_1299;
																																obj_t
																																	BgL_extendz00_1298;
																																obj_t
																																	BgL_thisz00_1297;
																																obj_t
																																	BgL_keyz00_1296;
																																BgL_keyz00_1296
																																	=
																																	BgL_keyz00_51;
																																BgL_thisz00_1297
																																	=
																																	BgL_carzd2126zd2_53;
																																BgL_extendz00_1298
																																	=
																																	BgL_carzd2134zd2_58;
																																BgL_implementsz00_1299
																																	=
																																	BgL_carzd2141zd2_63;
																																BgL_declsz00_1300
																																	=
																																	CDR
																																	(BgL_carzd2162zd2_88);
																																BgL_infosz00_1302
																																	=
																																	CDR
																																	(BgL_cdrzd2142zd2_64);
																																BgL_infosz00_45
																																	=
																																	BgL_infosz00_1302;
																																BgL_declsz00_44
																																	=
																																	BgL_declsz00_1300;
																																BgL_implementsz00_43
																																	=
																																	BgL_implementsz00_1299;
																																BgL_extendz00_42
																																	=
																																	BgL_extendz00_1298;
																																BgL_thisz00_41 =
																																	BgL_thisz00_1297;
																																BgL_keyz00_40 =
																																	BgL_keyz00_1296;
																																goto
																																	BgL_tagzd2101zd2_46;
																															}
																														else
																															{	/* Jas/profile.scm 28 */
																																goto
																																	BgL_tagzd2102zd2_47;
																															}
																													}
																												else
																													{	/* Jas/profile.scm 28 */
																														goto
																															BgL_tagzd2102zd2_47;
																													}
																											}
																										else
																											{	/* Jas/profile.scm 28 */
																												goto
																													BgL_tagzd2102zd2_47;
																											}
																									}
																								else
																									{	/* Jas/profile.scm 28 */
																										if (PAIRP
																											(BgL_gzd2158zd2_84))
																											{	/* Jas/profile.scm 28 */
																												bool_t
																													BgL_test2148z00_1306;
																												{	/* Jas/profile.scm 28 */
																													obj_t BgL_tmpz00_1307;

																													BgL_tmpz00_1307 =
																														CAR
																														(BgL_gzd2158zd2_84);
																													BgL_test2148z00_1306 =
																														SYMBOLP
																														(BgL_tmpz00_1307);
																												}
																												if (BgL_test2148z00_1306)
																													{
																														obj_t
																															BgL_gzd2158zd2_1310;
																														BgL_gzd2158zd2_1310
																															=
																															CDR
																															(BgL_gzd2158zd2_84);
																														BgL_gzd2158zd2_84 =
																															BgL_gzd2158zd2_1310;
																														goto
																															BgL_zc3z04anonymousza31125ze3z87_85;
																													}
																												else
																													{	/* Jas/profile.scm 28 */
																														goto
																															BgL_tagzd2102zd2_47;
																													}
																											}
																										else
																											{	/* Jas/profile.scm 28 */
																												goto
																													BgL_tagzd2102zd2_47;
																											}
																									}
																							}
																						else
																							{	/* Jas/profile.scm 28 */
																								goto BgL_tagzd2102zd2_47;
																							}
																					}
																				else
																					{	/* Jas/profile.scm 28 */
																						goto BgL_tagzd2102zd2_47;
																					}
																			}
																	}
																}
															else
																{	/* Jas/profile.scm 28 */
																	goto BgL_tagzd2102zd2_47;
																}
														}
													else
														{	/* Jas/profile.scm 28 */
															goto BgL_tagzd2102zd2_47;
														}
												}
											else
												{	/* Jas/profile.scm 28 */
													goto BgL_tagzd2102zd2_47;
												}
										}
									else
										{	/* Jas/profile.scm 28 */
											goto BgL_tagzd2102zd2_47;
										}
								}
							else
								{	/* Jas/profile.scm 28 */
									goto BgL_tagzd2102zd2_47;
								}
						}
					}
			}
		}

	}



/* make-env */
	BgL__envz00_bglt BGl_makezd2envzd2zzjas_profilez00(obj_t BgL_thisz00_5,
		obj_t BgL_declsz00_6, obj_t BgL_infosz00_7)
	{
		{	/* Jas/profile.scm 42 */
			{
				obj_t BgL_valz00_144;
				obj_t BgL_varz00_151;
				obj_t BgL_lz00_152;
				obj_t BgL_infosz00_161;
				obj_t BgL_declsz00_162;

				{	/* Jas/profile.scm 71 */
					obj_t BgL_vclinitz00_116;
					obj_t BgL_lnamesz00_117;

					BgL_vclinitz00_116 =
						BGl_getzd2idze70z35zzjas_profilez00
						(BGl_string2055z00zzjas_profilez00, BgL_declsz00_6);
					BgL_infosz00_161 = BgL_infosz00_7;
					BgL_declsz00_162 = BgL_declsz00_6;
				BgL_zc3z04anonymousza31244ze3z87_163:
					if (NULLP(BgL_infosz00_161))
						{	/* Jas/profile.scm 66 */
							BgL_lnamesz00_117 = BNIL;
						}
					else
						{	/* Jas/profile.scm 67 */
							bool_t BgL_test2150z00_1316;

							{	/* Jas/profile.scm 67 */
								obj_t BgL_tmpz00_1317;

								{	/* Jas/profile.scm 67 */
									obj_t BgL_auxz00_1318;

									{	/* Jas/profile.scm 67 */
										obj_t BgL_pairz00_860;

										BgL_pairz00_860 = CAR(((obj_t) BgL_infosz00_161));
										BgL_auxz00_1318 = CAR(BgL_pairz00_860);
									}
									BgL_tmpz00_1317 =
										BGl_memqz00zz__r4_pairs_and_lists_6_3z00(BgL_auxz00_1318,
										CNST_TABLE_REF(((long) 1)));
								}
								BgL_test2150z00_1316 = CBOOL(BgL_tmpz00_1317);
							}
							if (BgL_test2150z00_1316)
								{	/* Jas/profile.scm 68 */
									obj_t BgL_arg1250z00_167;

									BgL_arg1250z00_167 = CDR(((obj_t) BgL_infosz00_161));
									{
										obj_t BgL_infosz00_1327;

										BgL_infosz00_1327 = BgL_arg1250z00_167;
										BgL_infosz00_161 = BgL_infosz00_1327;
										goto BgL_zc3z04anonymousza31244ze3z87_163;
									}
								}
							else
								{	/* Jas/profile.scm 70 */
									obj_t BgL_head1074z00_170;

									{	/* Jas/profile.scm 70 */
										obj_t BgL_res1998z00_863;

										BgL_res1998z00_863 = MAKE_YOUNG_PAIR(BNIL, BNIL);
										BgL_head1074z00_170 = BgL_res1998z00_863;
									}
									{
										obj_t BgL_l1072z00_172;
										obj_t BgL_tail1075z00_173;

										BgL_l1072z00_172 = BgL_infosz00_161;
										BgL_tail1075z00_173 = BgL_head1074z00_170;
									BgL_zc3z04anonymousza31252ze3z87_174:
										if (NULLP(BgL_l1072z00_172))
											{	/* Jas/profile.scm 70 */
												BgL_lnamesz00_117 = CDR(BgL_head1074z00_170);
											}
										else
											{	/* Jas/profile.scm 70 */
												obj_t BgL_newtail1076z00_176;

												{	/* Jas/profile.scm 70 */
													obj_t BgL_arg1256z00_178;

													{	/* Jas/profile.scm 70 */
														obj_t BgL_mz00_179;

														BgL_mz00_179 = CAR(((obj_t) BgL_l1072z00_172));
														{	/* Jas/profile.scm 70 */
															obj_t BgL_arg1258z00_180;

															{	/* Jas/profile.scm 70 */
																obj_t BgL_pairz00_870;

																BgL_pairz00_870 = CDR(((obj_t) BgL_mz00_179));
																BgL_arg1258z00_180 = CAR(BgL_pairz00_870);
															}
															BgL_varz00_151 = BgL_arg1258z00_180;
															BgL_lz00_152 = BgL_declsz00_162;
														BgL_zc3z04anonymousza31226ze3z87_153:
															if (NULLP(BgL_lz00_152))
																{	/* Jas/profile.scm 61 */
																	BgL_arg1256z00_178 =
																		BGl_errorz00zz__errorz00
																		(BGl_string2051z00zzjas_profilez00,
																		BGl_string2053z00zzjas_profilez00,
																		BgL_varz00_151);
																}
															else
																{	/* Jas/profile.scm 62 */
																	bool_t BgL_test2153z00_1340;

																	{	/* Jas/profile.scm 62 */
																		obj_t BgL_tmpz00_1341;

																		{	/* Jas/profile.scm 62 */
																			obj_t BgL_pairz00_839;

																			BgL_pairz00_839 =
																				CAR(((obj_t) BgL_lz00_152));
																			BgL_tmpz00_1341 = CAR(BgL_pairz00_839);
																		}
																		BgL_test2153z00_1340 =
																			(BgL_tmpz00_1341 == BgL_varz00_151);
																	}
																	if (BgL_test2153z00_1340)
																		{	/* Jas/profile.scm 63 */
																			obj_t BgL_tmpz00_1346;

																			{
																				obj_t BgL_auxz00_1347;

																				{	/* Jas/profile.scm 63 */
																					obj_t BgL_pairz00_846;

																					{	/* Jas/profile.scm 63 */
																						obj_t BgL_pairz00_845;

																						{	/* Jas/profile.scm 63 */
																							obj_t BgL_pairz00_844;

																							BgL_pairz00_844 =
																								CAR(((obj_t) BgL_lz00_152));
																							BgL_pairz00_845 =
																								CDR(BgL_pairz00_844);
																						}
																						BgL_pairz00_846 =
																							CAR(BgL_pairz00_845);
																					}
																					BgL_auxz00_1347 =
																						CDR(CDR(CDR(CDR(BgL_pairz00_846))));
																				}
																				BgL_tmpz00_1346 =
																					((obj_t) BgL_auxz00_1347);
																			}
																			BgL_arg1256z00_178 = CAR(BgL_tmpz00_1346);
																		}
																	else
																		{	/* Jas/profile.scm 64 */
																			obj_t BgL_arg1242z00_159;

																			BgL_arg1242z00_159 =
																				CDR(((obj_t) BgL_lz00_152));
																			{
																				obj_t BgL_lz00_1360;

																				BgL_lz00_1360 = BgL_arg1242z00_159;
																				BgL_lz00_152 = BgL_lz00_1360;
																				goto
																					BgL_zc3z04anonymousza31226ze3z87_153;
																			}
																		}
																}
														}
													}
													{	/* Jas/profile.scm 70 */
														obj_t BgL_res2000z00_871;

														BgL_res2000z00_871 =
															MAKE_YOUNG_PAIR(BgL_arg1256z00_178, BNIL);
														BgL_newtail1076z00_176 = BgL_res2000z00_871;
													}
												}
												SET_CDR(BgL_tail1075z00_173, BgL_newtail1076z00_176);
												{	/* Jas/profile.scm 70 */
													obj_t BgL_arg1254z00_177;

													BgL_arg1254z00_177 = CDR(((obj_t) BgL_l1072z00_172));
													{
														obj_t BgL_tail1075z00_1366;
														obj_t BgL_l1072z00_1365;

														BgL_l1072z00_1365 = BgL_arg1254z00_177;
														BgL_tail1075z00_1366 = BgL_newtail1076z00_176;
														BgL_tail1075z00_173 = BgL_tail1075z00_1366;
														BgL_l1072z00_172 = BgL_l1072z00_1365;
														goto BgL_zc3z04anonymousza31252ze3z87_174;
													}
												}
											}
									}
								}
						}
					{	/* Jas/profile.scm 73 */
						BgL__envz00_bglt BgL_new1059z00_118;

						{	/* Jas/profile.scm 74 */
							BgL__envz00_bglt BgL_new1057z00_124;

							BgL_new1057z00_124 =
								((BgL__envz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
											BgL__envz00_bgl))));
							{	/* Jas/profile.scm 74 */
								long BgL_arg1186z00_125;

								{	/* Jas/profile.scm 74 */
									long BgL_res2001z00_875;

									BgL_res2001z00_875 =
										BGL_CLASS_INDEX(BGl__envz00zzjas_profilez00);
									BgL_arg1186z00_125 = BgL_res2001z00_875;
								}
								BGL_OBJECT_CLASS_NUM_SET(
									((BgL_objectz00_bglt) BgL_new1057z00_124),
									BgL_arg1186z00_125);
							}
							BgL_new1059z00_118 = BgL_new1057z00_124;
						}
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->BgL_thisz00) =
							((obj_t) BgL_thisz00_5), BUNSPEC);
						{
							obj_t BgL_auxz00_1372;

							{	/* Jas/profile.scm 75 */
								obj_t BgL__ortest_1060z00_119;

								BgL__ortest_1060z00_119 =
									BGl_getzd2idze70z35zzjas_profilez00
									(BGl_string2056z00zzjas_profilez00, BgL_declsz00_6);
								if (CBOOL(BgL__ortest_1060z00_119))
									{	/* Jas/profile.scm 75 */
										BgL_auxz00_1372 = BgL__ortest_1060z00_119;
									}
								else
									{	/* Jas/profile.scm 76 */
										obj_t BgL_arg1177z00_120;

										{	/* Jas/profile.scm 76 */
											obj_t BgL_arg1178z00_121;

											{	/* Jas/profile.scm 76 */
												obj_t BgL_arg1179z00_122;

												BgL_arg1179z00_122 =
													MAKE_YOUNG_PAIR(BGl_string2056z00zzjas_profilez00,
													BNIL);
												BgL_arg1178z00_121 =
													MAKE_YOUNG_PAIR(BNIL, BgL_arg1179z00_122);
											}
											BgL_arg1177z00_120 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 2)),
												BgL_arg1178z00_121);
										}
										BgL_valz00_144 = BgL_arg1177z00_120;
										{	/* Jas/profile.scm 57 */
											obj_t BgL_rz00_146;

											BgL_rz00_146 =
												BGl_gensymz00zz__r4_symbols_6_4z00
												(BGl_string2054z00zzjas_profilez00);
											{	/* Jas/profile.scm 58 */
												obj_t BgL_arg1216z00_147;

												{	/* Jas/profile.scm 58 */
													obj_t BgL_arg1221z00_148;
													obj_t BgL_arg1223z00_149;

													{	/* Jas/profile.scm 58 */
														obj_t BgL_arg1225z00_150;

														BgL_arg1225z00_150 =
															MAKE_YOUNG_PAIR(BgL_valz00_144, BNIL);
														BgL_arg1221z00_148 =
															MAKE_YOUNG_PAIR(BgL_rz00_146, BgL_arg1225z00_150);
													}
													BgL_arg1223z00_149 = CDR(BgL_valz00_144);
													BgL_arg1216z00_147 =
														MAKE_YOUNG_PAIR(BgL_arg1221z00_148,
														BgL_arg1223z00_149);
												}
												SET_CDR(BgL_valz00_144, BgL_arg1216z00_147);
											}
											BgL_auxz00_1372 = BgL_rz00_146;
							}}}
							((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->
									BgL_jstringz00) = ((obj_t) BgL_auxz00_1372), BUNSPEC);
						}
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->
								BgL_has_clinitz00) = ((obj_t) BgL_vclinitz00_116), BUNSPEC);
						{
							obj_t BgL_auxz00_1388;

							if (CBOOL(BgL_vclinitz00_116))
								{	/* Jas/profile.scm 78 */
									BgL_auxz00_1388 = BgL_vclinitz00_116;
								}
							else
								{	/* Jas/profile.scm 78 */
									BgL_auxz00_1388 =
										BGl_gensymz00zz__r4_symbols_6_4z00
										(BGl_string2057z00zzjas_profilez00);
								}
							((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->
									BgL_clinitz00) = ((obj_t) BgL_auxz00_1388), BUNSPEC);
						}
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->BgL_resz00) =
							((obj_t) CNST_TABLE_REF(((long) 3))), BUNSPEC);
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->BgL_namesz00) =
							((obj_t) CNST_TABLE_REF(((long) 4))), BUNSPEC);
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->BgL_lnamesz00) =
							((obj_t) BgL_lnamesz00_117), BUNSPEC);
						((((BgL__envz00_bglt) COBJECT(BgL_new1059z00_118))->BgL_linesz00) =
							((obj_t) CNST_TABLE_REF(((long) 5))), BUNSPEC);
						return BgL_new1059z00_118;
					}
				}
			}
		}

	}



/* get-id~0 */
	obj_t BGl_getzd2idze70z35zzjas_profilez00(obj_t BgL_strz00_126,
		obj_t BgL_lz00_127)
	{
		{	/* Jas/profile.scm 55 */
		BGl_getzd2idze70z35zzjas_profilez00:
			if (NULLP(BgL_lz00_127))
				{	/* Jas/profile.scm 44 */
					return BFALSE;
				}
			else
				{	/* Jas/profile.scm 46 */
					obj_t BgL_declz00_130;

					BgL_declz00_130 = CAR(((obj_t) BgL_lz00_127));
					{	/* Jas/profile.scm 47 */
						obj_t BgL_namez00_131;
						obj_t BgL_valz00_132;

						BgL_namez00_131 = CAR(((obj_t) BgL_declz00_130));
						{	/* Jas/profile.scm 47 */
							obj_t BgL_pairz00_784;

							BgL_pairz00_784 = CDR(((obj_t) BgL_declz00_130));
							BgL_valz00_132 = CAR(BgL_pairz00_784);
						}
						{	/* Jas/profile.scm 48 */
							obj_t BgL_tyz00_133;
							obj_t BgL_defz00_134;

							BgL_tyz00_133 = CAR(((obj_t) BgL_valz00_132));
							BgL_defz00_134 = CDR(((obj_t) BgL_valz00_132));
							if ((BgL_tyz00_133 == CNST_TABLE_REF(((long) 2))))
								{	/* Jas/profile.scm 50 */
									bool_t BgL_test2158z00_1416;

									{	/* Jas/profile.scm 50 */
										obj_t BgL_arg1197z00_139;

										{	/* Jas/profile.scm 50 */
											obj_t BgL_pairz00_790;

											BgL_pairz00_790 = CDR(((obj_t) BgL_defz00_134));
											BgL_arg1197z00_139 = CAR(BgL_pairz00_790);
										}
										{	/* Jas/profile.scm 50 */
											bool_t BgL_res1989z00_806;

											{	/* Jas/profile.scm 50 */
												long BgL_l1z00_793;

												BgL_l1z00_793 =
													STRING_LENGTH(((obj_t) BgL_arg1197z00_139));
												if ((BgL_l1z00_793 == STRING_LENGTH(BgL_strz00_126)))
													{	/* Jas/profile.scm 50 */
														int BgL_arg1267z00_796;

														{	/* Jas/profile.scm 50 */
															char *BgL_auxz00_1428;
															char *BgL_tmpz00_1425;

															BgL_auxz00_1428 =
																BSTRING_TO_STRING(BgL_strz00_126);
															BgL_tmpz00_1425 =
																BSTRING_TO_STRING(((obj_t) BgL_arg1197z00_139));
															BgL_arg1267z00_796 =
																memcmp(BgL_tmpz00_1425, BgL_auxz00_1428,
																BgL_l1z00_793);
														}
														BgL_res1989z00_806 =
															((long) (BgL_arg1267z00_796) == ((long) 0));
													}
												else
													{	/* Jas/profile.scm 50 */
														BgL_res1989z00_806 = ((bool_t) 0);
													}
											}
											BgL_test2158z00_1416 = BgL_res1989z00_806;
										}
									}
									if (BgL_test2158z00_1416)
										{	/* Jas/profile.scm 50 */
											return BgL_namez00_131;
										}
									else
										{	/* Jas/profile.scm 52 */
											obj_t BgL_arg1194z00_138;

											BgL_arg1194z00_138 = CDR(((obj_t) BgL_lz00_127));
											{
												obj_t BgL_lz00_1435;

												BgL_lz00_1435 = BgL_arg1194z00_138;
												BgL_lz00_127 = BgL_lz00_1435;
												goto BGl_getzd2idze70z35zzjas_profilez00;
											}
										}
								}
							else
								{	/* Jas/profile.scm 53 */
									bool_t BgL_test2160z00_1436;

									{	/* Jas/profile.scm 53 */
										obj_t BgL_arg1211z00_143;

										{	/* Jas/profile.scm 53 */
											obj_t BgL_pairz00_815;

											{	/* Jas/profile.scm 53 */
												obj_t BgL_pairz00_814;

												{	/* Jas/profile.scm 53 */
													obj_t BgL_pairz00_813;

													BgL_pairz00_813 = CDR(((obj_t) BgL_defz00_134));
													BgL_pairz00_814 = CDR(BgL_pairz00_813);
												}
												BgL_pairz00_815 = CDR(BgL_pairz00_814);
											}
											BgL_arg1211z00_143 = CAR(BgL_pairz00_815);
										}
										{	/* Jas/profile.scm 53 */
											bool_t BgL_res1994z00_831;

											{	/* Jas/profile.scm 53 */
												long BgL_l1z00_818;

												BgL_l1z00_818 =
													STRING_LENGTH(((obj_t) BgL_arg1211z00_143));
												if ((BgL_l1z00_818 == STRING_LENGTH(BgL_strz00_126)))
													{	/* Jas/profile.scm 53 */
														int BgL_arg1267z00_821;

														{	/* Jas/profile.scm 53 */
															char *BgL_auxz00_1450;
															char *BgL_tmpz00_1447;

															BgL_auxz00_1450 =
																BSTRING_TO_STRING(BgL_strz00_126);
															BgL_tmpz00_1447 =
																BSTRING_TO_STRING(((obj_t) BgL_arg1211z00_143));
															BgL_arg1267z00_821 =
																memcmp(BgL_tmpz00_1447, BgL_auxz00_1450,
																BgL_l1z00_818);
														}
														BgL_res1994z00_831 =
															((long) (BgL_arg1267z00_821) == ((long) 0));
													}
												else
													{	/* Jas/profile.scm 53 */
														BgL_res1994z00_831 = ((bool_t) 0);
													}
											}
											BgL_test2160z00_1436 = BgL_res1994z00_831;
										}
									}
									if (BgL_test2160z00_1436)
										{	/* Jas/profile.scm 53 */
											return BgL_namez00_131;
										}
									else
										{	/* Jas/profile.scm 55 */
											obj_t BgL_arg1208z00_142;

											BgL_arg1208z00_142 = CDR(((obj_t) BgL_lz00_127));
											{
												obj_t BgL_lz00_1457;

												BgL_lz00_1457 = BgL_arg1208z00_142;
												BgL_lz00_127 = BgL_lz00_1457;
												goto BGl_getzd2idze70z35zzjas_profilez00;
											}
										}
								}
						}
					}
				}
		}

	}



/* profile-declarations */
	obj_t BGl_profilezd2declarationszd2zzjas_profilez00(BgL__envz00_bglt
		BgL_envz00_8, obj_t BgL_declsz00_9)
	{
		{	/* Jas/profile.scm 88 */
			{	/* Jas/profile.scm 92 */
				obj_t BgL_arg1268z00_189;
				obj_t BgL_arg1270z00_190;

				{	/* Jas/profile.scm 92 */
					obj_t BgL_arg1271z00_191;

					BgL_arg1271z00_191 =
						(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->BgL_linesz00);
					BgL_arg1268z00_189 =
						BGl_mfze70ze7zzjas_profilez00(BgL_envz00_8, BgL_arg1271z00_191,
						CNST_TABLE_REF(((long) 6)), BGl_string2058z00zzjas_profilez00);
				}
				{	/* Jas/profile.scm 93 */
					obj_t BgL_arg1273z00_192;
					obj_t BgL_arg1274z00_193;

					{	/* Jas/profile.scm 93 */
						obj_t BgL_arg1275z00_194;
						obj_t BgL_arg1276z00_195;

						BgL_arg1275z00_194 =
							(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->BgL_namesz00);
						{	/* Jas/profile.scm 93 */
							obj_t BgL_arg1277z00_196;

							BgL_arg1277z00_196 =
								MAKE_YOUNG_PAIR(
								(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->BgL_jstringz00),
								BNIL);
							BgL_arg1276z00_195 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)), BgL_arg1277z00_196);
						}
						BgL_arg1273z00_192 =
							BGl_mfze70ze7zzjas_profilez00(BgL_envz00_8, BgL_arg1275z00_194,
							BgL_arg1276z00_195, BGl_string2059z00zzjas_profilez00);
					}
					{	/* Jas/profile.scm 94 */
						obj_t BgL_arg1281z00_198;
						obj_t BgL_arg1282z00_199;

						{	/* Jas/profile.scm 94 */
							obj_t BgL_arg1284z00_200;

							BgL_arg1284z00_200 =
								(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->BgL_resz00);
							BgL_arg1281z00_198 =
								BGl_mfze70ze7zzjas_profilez00(BgL_envz00_8, BgL_arg1284z00_200,
								CNST_TABLE_REF(((long) 6)), BGl_string2060z00zzjas_profilez00);
						}
						{	/* Jas/profile.scm 95 */
							obj_t BgL_arg1285z00_201;
							obj_t BgL_arg1286z00_202;

							if (CBOOL(
									(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->
										BgL_has_clinitz00)))
								{	/* Jas/profile.scm 95 */
									BgL_arg1285z00_201 = BNIL;
								}
							else
								{	/* Jas/profile.scm 97 */
									obj_t BgL_arg1288z00_204;

									{	/* Jas/profile.scm 97 */
										obj_t BgL_arg1289z00_205;
										obj_t BgL_arg1290z00_206;

										BgL_arg1289z00_205 =
											(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->
											BgL_clinitz00);
										{	/* Jas/profile.scm 97 */
											obj_t BgL_arg1291z00_207;

											{	/* Jas/profile.scm 97 */
												obj_t BgL_arg1292z00_208;

												{	/* Jas/profile.scm 97 */
													obj_t BgL_arg1295z00_209;
													obj_t BgL_arg1296z00_210;

													BgL_arg1295z00_209 =
														(((BgL__envz00_bglt) COBJECT(BgL_envz00_8))->
														BgL_thisz00);
													{	/* Jas/profile.scm 97 */
														obj_t BgL_arg1297z00_211;
														obj_t BgL_arg1298z00_212;

														{	/* Jas/profile.scm 97 */
															obj_t BgL_arg1299z00_213;

															BgL_arg1299z00_213 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)),
																BNIL);
															BgL_arg1297z00_211 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
																BgL_arg1299z00_213);
														}
														{	/* Jas/profile.scm 97 */
															obj_t BgL_arg1300z00_214;

															BgL_arg1300z00_214 =
																MAKE_YOUNG_PAIR
																(BGl_string2055z00zzjas_profilez00, BNIL);
															BgL_arg1298z00_212 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 10)),
																BgL_arg1300z00_214);
														}
														BgL_arg1296z00_210 =
															MAKE_YOUNG_PAIR(BgL_arg1297z00_211,
															BgL_arg1298z00_212);
													}
													BgL_arg1292z00_208 =
														MAKE_YOUNG_PAIR(BgL_arg1295z00_209,
														BgL_arg1296z00_210);
												}
												BgL_arg1291z00_207 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
													BgL_arg1292z00_208);
											}
											BgL_arg1290z00_206 =
												MAKE_YOUNG_PAIR(BgL_arg1291z00_207, BNIL);
										}
										BgL_arg1288z00_204 =
											MAKE_YOUNG_PAIR(BgL_arg1289z00_205, BgL_arg1290z00_206);
									}
									BgL_arg1285z00_201 =
										MAKE_YOUNG_PAIR(BgL_arg1288z00_204, BNIL);
								}
							BgL_arg1286z00_202 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(BgL_declsz00_9,
								BNIL);
							BgL_arg1282z00_199 =
								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
								(BgL_arg1285z00_201, BgL_arg1286z00_202);
						}
						BgL_arg1274z00_193 =
							MAKE_YOUNG_PAIR(BgL_arg1281z00_198, BgL_arg1282z00_199);
					}
					BgL_arg1270z00_190 =
						MAKE_YOUNG_PAIR(BgL_arg1273z00_192, BgL_arg1274z00_193);
				}
				return MAKE_YOUNG_PAIR(BgL_arg1268z00_189, BgL_arg1270z00_190);
			}
		}

	}



/* mf~0 */
	obj_t BGl_mfze70ze7zzjas_profilez00(BgL__envz00_bglt BgL_i1062z00_1141,
		obj_t BgL_namez00_215, obj_t BgL_tyz00_216, obj_t BgL_strz00_217)
	{
		{	/* Jas/profile.scm 91 */
			{	/* Jas/profile.scm 91 */
				obj_t BgL_arg1303z00_219;

				{	/* Jas/profile.scm 91 */
					obj_t BgL_arg1304z00_220;

					{	/* Jas/profile.scm 91 */
						obj_t BgL_arg1306z00_221;

						{	/* Jas/profile.scm 91 */
							obj_t BgL_arg1307z00_222;
							obj_t BgL_arg1308z00_223;

							BgL_arg1307z00_222 =
								(((BgL__envz00_bglt) COBJECT(BgL_i1062z00_1141))->BgL_thisz00);
							{	/* Jas/profile.scm 91 */
								obj_t BgL_arg1309z00_224;
								obj_t BgL_arg1310z00_225;

								{	/* Jas/profile.scm 91 */
									obj_t BgL_arg1311z00_226;

									BgL_arg1311z00_226 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)), BNIL);
									BgL_arg1309z00_224 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
										BgL_arg1311z00_226);
								}
								{	/* Jas/profile.scm 91 */
									obj_t BgL_arg1312z00_227;

									BgL_arg1312z00_227 = MAKE_YOUNG_PAIR(BgL_strz00_217, BNIL);
									BgL_arg1310z00_225 =
										MAKE_YOUNG_PAIR(BgL_tyz00_216, BgL_arg1312z00_227);
								}
								BgL_arg1308z00_223 =
									MAKE_YOUNG_PAIR(BgL_arg1309z00_224, BgL_arg1310z00_225);
							}
							BgL_arg1306z00_221 =
								MAKE_YOUNG_PAIR(BgL_arg1307z00_222, BgL_arg1308z00_223);
						}
						BgL_arg1304z00_220 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 12)), BgL_arg1306z00_221);
					}
					BgL_arg1303z00_219 = MAKE_YOUNG_PAIR(BgL_arg1304z00_220, BNIL);
				}
				return MAKE_YOUNG_PAIR(BgL_namez00_215, BgL_arg1303z00_219);
			}
		}

	}



/* profile-infos */
	obj_t BGl_profilezd2infoszd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_10,
		obj_t BgL_infosz00_11)
	{
		{	/* Jas/profile.scm 103 */
			{
				obj_t BgL_idz00_270;
				obj_t BgL_lz00_271;

				if (NULLP(BgL_infosz00_11))
					{	/* Jas/profile.scm 110 */
						return BNIL;
					}
				else
					{	/* Jas/profile.scm 111 */
						bool_t BgL_test2164z00_1509;

						{	/* Jas/profile.scm 111 */
							bool_t BgL_test2165z00_1510;

							{	/* Jas/profile.scm 111 */
								obj_t BgL_tmpz00_1511;

								{	/* Jas/profile.scm 111 */
									obj_t BgL_pairz00_898;

									BgL_pairz00_898 = CAR(((obj_t) BgL_infosz00_11));
									BgL_tmpz00_1511 = CAR(BgL_pairz00_898);
								}
								BgL_test2165z00_1510 =
									(BgL_tmpz00_1511 == CNST_TABLE_REF(((long) 13)));
							}
							if (BgL_test2165z00_1510)
								{	/* Jas/profile.scm 111 */
									BgL_test2164z00_1509 = ((bool_t) 1);
								}
							else
								{	/* Jas/profile.scm 111 */
									obj_t BgL_tmpz00_1517;

									{	/* Jas/profile.scm 111 */
										obj_t BgL_pairz00_902;

										BgL_pairz00_902 = CAR(((obj_t) BgL_infosz00_11));
										BgL_tmpz00_1517 = CAR(BgL_pairz00_902);
									}
									BgL_test2164z00_1509 =
										(BgL_tmpz00_1517 == CNST_TABLE_REF(((long) 14)));
						}}
						if (BgL_test2164z00_1509)
							{	/* Jas/profile.scm 112 */
								obj_t BgL_arg1319z00_236;
								obj_t BgL_arg1322z00_237;

								BgL_arg1319z00_236 = CAR(((obj_t) BgL_infosz00_11));
								{	/* Jas/profile.scm 112 */
									obj_t BgL_arg1324z00_238;

									BgL_arg1324z00_238 = CDR(((obj_t) BgL_infosz00_11));
									BgL_arg1322z00_237 =
										BGl_profilezd2infoszd2zzjas_profilez00(BgL_envz00_10,
										BgL_arg1324z00_238);
								}
								return MAKE_YOUNG_PAIR(BgL_arg1319z00_236, BgL_arg1322z00_237);
							}
						else
							{	/* Jas/profile.scm 113 */
								bool_t BgL_test2166z00_1529;

								{	/* Jas/profile.scm 113 */
									obj_t BgL_tmpz00_1530;

									{	/* Jas/profile.scm 113 */
										obj_t BgL_pairz00_908;

										BgL_pairz00_908 = CAR(((obj_t) BgL_infosz00_11));
										BgL_tmpz00_1530 = CAR(BgL_pairz00_908);
									}
									BgL_test2166z00_1529 =
										(BgL_tmpz00_1530 == CNST_TABLE_REF(((long) 15)));
								}
								if (BgL_test2166z00_1529)
									{	/* Jas/profile.scm 115 */
										obj_t BgL_arg1327z00_242;
										obj_t BgL_arg1328z00_243;

										{	/* Jas/profile.scm 115 */
											obj_t BgL_arg1329z00_244;

											{	/* Jas/profile.scm 115 */
												obj_t BgL_arg1330z00_245;
												obj_t BgL_arg1331z00_246;

												BgL_arg1330z00_245 =
													(((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
													BgL_resz00);
												{	/* Jas/profile.scm 115 */
													obj_t BgL_arg1334z00_247;
													obj_t BgL_arg1335z00_248;

													BgL_arg1334z00_247 =
														(((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
														BgL_namesz00);
													{	/* Jas/profile.scm 115 */
														obj_t BgL_arg1337z00_249;
														obj_t BgL_arg1338z00_250;

														BgL_arg1337z00_249 =
															(((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
															BgL_linesz00);
														{	/* Jas/profile.scm 115 */
															obj_t BgL_auxz00_1539;

															{	/* Jas/profile.scm 115 */
																obj_t BgL_pairz00_912;

																BgL_pairz00_912 =
																	CAR(((obj_t) BgL_infosz00_11));
																BgL_auxz00_1539 = CDR(BgL_pairz00_912);
															}
															BgL_arg1338z00_250 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_1539, BNIL);
														}
														BgL_arg1335z00_248 =
															MAKE_YOUNG_PAIR(BgL_arg1337z00_249,
															BgL_arg1338z00_250);
													}
													BgL_arg1331z00_246 =
														MAKE_YOUNG_PAIR(BgL_arg1334z00_247,
														BgL_arg1335z00_248);
												}
												BgL_arg1329z00_244 =
													MAKE_YOUNG_PAIR(BgL_arg1330z00_245,
													BgL_arg1331z00_246);
											}
											BgL_arg1327z00_242 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
												BgL_arg1329z00_244);
										}
										{	/* Jas/profile.scm 116 */
											obj_t BgL_arg1340z00_252;

											BgL_arg1340z00_252 = CDR(((obj_t) BgL_infosz00_11));
											BgL_arg1328z00_243 =
												BGl_profilezd2infoszd2zzjas_profilez00(BgL_envz00_10,
												BgL_arg1340z00_252);
										}
										return
											MAKE_YOUNG_PAIR(BgL_arg1327z00_242, BgL_arg1328z00_243);
									}
								else
									{	/* Jas/profile.scm 118 */
										obj_t BgL_extraz00_253;

										BgL_extraz00_253 =
											BGl_profilezd2extrazd2clinitz00zzjas_profilez00
											(BgL_envz00_10, BgL_infosz00_11);
										{	/* Jas/profile.scm 119 */
											obj_t BgL_rz00_254;

											BgL_rz00_254 =
												BGl_profilezd2methodszd2zzjas_profilez00(BgL_envz00_10,
												BgL_infosz00_11);
											if (CBOOL((((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
														BgL_has_clinitz00)))
												{	/* Jas/profile.scm 122 */
													obj_t BgL_slotz00_257;

													BgL_idz00_270 =
														(((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
														BgL_clinitz00);
													BgL_lz00_271 = BgL_rz00_254;
												BgL_zc3z04anonymousza31364ze3z87_272:
													if (NULLP(BgL_lz00_271))
														{	/* Jas/profile.scm 105 */
															BgL_slotz00_257 =
																BGl_errorz00zz__errorz00
																(BGl_string2051z00zzjas_profilez00,
																BGl_string2061z00zzjas_profilez00,
																BgL_idz00_270);
														}
													else
														{	/* Jas/profile.scm 106 */
															bool_t BgL_test2169z00_1561;

															{	/* Jas/profile.scm 106 */
																obj_t BgL_tmpz00_1562;

																{	/* Jas/profile.scm 106 */
																	obj_t BgL_pairz00_884;

																	{	/* Jas/profile.scm 106 */
																		obj_t BgL_pairz00_883;

																		BgL_pairz00_883 =
																			CAR(((obj_t) BgL_lz00_271));
																		BgL_pairz00_884 = CDR(BgL_pairz00_883);
																	}
																	BgL_tmpz00_1562 = CAR(BgL_pairz00_884);
																}
																BgL_test2169z00_1561 =
																	(BgL_tmpz00_1562 == BgL_idz00_270);
															}
															if (BgL_test2169z00_1561)
																{	/* Jas/profile.scm 107 */
																	obj_t BgL_pairz00_892;

																	{	/* Jas/profile.scm 107 */
																		obj_t BgL_pairz00_891;

																		{	/* Jas/profile.scm 107 */
																			obj_t BgL_pairz00_890;

																			BgL_pairz00_890 =
																				CAR(((obj_t) BgL_lz00_271));
																			BgL_pairz00_891 = CDR(BgL_pairz00_890);
																		}
																		BgL_pairz00_892 = CDR(BgL_pairz00_891);
																	}
																	BgL_slotz00_257 = CDR(BgL_pairz00_892);
																}
															else
																{	/* Jas/profile.scm 108 */
																	obj_t BgL_arg1370z00_276;

																	BgL_arg1370z00_276 =
																		CDR(((obj_t) BgL_lz00_271));
																	{
																		obj_t BgL_lz00_1575;

																		BgL_lz00_1575 = BgL_arg1370z00_276;
																		BgL_lz00_271 = BgL_lz00_1575;
																		goto BgL_zc3z04anonymousza31364ze3z87_272;
																	}
																}
														}
													{	/* Jas/profile.scm 124 */
														obj_t BgL_arg1344z00_258;

														{	/* Jas/profile.scm 124 */
															obj_t BgL_arg1345z00_259;

															BgL_arg1345z00_259 =
																CDR(((obj_t) BgL_slotz00_257));
															BgL_arg1344z00_258 =
																BGl_appendzd221011zd2zzjas_profilez00
																(BgL_extraz00_253, BgL_arg1345z00_259);
														}
														{	/* Jas/profile.scm 123 */
															obj_t BgL_tmpz00_1580;

															BgL_tmpz00_1580 = ((obj_t) BgL_slotz00_257);
															SET_CDR(BgL_tmpz00_1580, BgL_arg1344z00_258);
														}
													}
													return BgL_rz00_254;
												}
											else
												{	/* Jas/profile.scm 126 */
													obj_t BgL_arg1347z00_261;

													{	/* Jas/profile.scm 126 */
														obj_t BgL_arg1348z00_262;
														obj_t BgL_arg1351z00_263;

														BgL_arg1348z00_262 =
															(((BgL__envz00_bglt) COBJECT(BgL_envz00_10))->
															BgL_clinitz00);
														{	/* Jas/profile.scm 126 */
															obj_t BgL_arg1352z00_264;

															BgL_arg1352z00_264 =
																MAKE_YOUNG_PAIR(BNIL,
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(BgL_extraz00_253, BNIL));
															BgL_arg1351z00_263 =
																MAKE_YOUNG_PAIR(BNIL, BgL_arg1352z00_264);
														}
														BgL_arg1347z00_261 =
															MAKE_YOUNG_PAIR(BgL_arg1348z00_262,
															BgL_arg1351z00_263);
													}
													return
														MAKE_YOUNG_PAIR(BgL_arg1347z00_261, BgL_rz00_254);
												}
										}
									}
							}
					}
			}
		}

	}



/* profile-methods */
	obj_t BGl_profilezd2methodszd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_12,
		obj_t BgL_methodsz00_13)
	{
		{	/* Jas/profile.scm 128 */
			{
				long BgL_iz00_293;
				obj_t BgL_mz00_294;

				{
					obj_t BgL_lz00_282;
					long BgL_iz00_283;
					obj_t BgL_rz00_284;

					BgL_lz00_282 = BgL_methodsz00_13;
					BgL_iz00_283 = ((long) 0);
					BgL_rz00_284 = BNIL;
				BgL_zc3z04anonymousza31372ze3z87_285:
					if (NULLP(BgL_lz00_282))
						{	/* Jas/profile.scm 135 */
							return bgl_reverse_bang(BgL_rz00_284);
						}
					else
						{	/* Jas/profile.scm 137 */
							obj_t BgL_arg1381z00_287;
							long BgL_arg1382z00_288;
							obj_t BgL_arg1383z00_289;

							BgL_arg1381z00_287 = CDR(((obj_t) BgL_lz00_282));
							BgL_arg1382z00_288 = (BgL_iz00_283 + ((long) 1));
							{	/* Jas/profile.scm 137 */
								obj_t BgL_arg1384z00_290;

								{	/* Jas/profile.scm 137 */
									obj_t BgL_arg1385z00_291;

									BgL_arg1385z00_291 = CAR(((obj_t) BgL_lz00_282));
									BgL_iz00_293 = BgL_iz00_283;
									BgL_mz00_294 = BgL_arg1385z00_291;
									{

										if (PAIRP(BgL_mz00_294))
											{	/* Jas/profile.scm 133 */
												obj_t BgL_cdrzd2183zd2_304;

												BgL_cdrzd2183zd2_304 = CDR(BgL_mz00_294);
												if ((CAR(BgL_mz00_294) == CNST_TABLE_REF(((long) 11))))
													{	/* Jas/profile.scm 133 */
														if (PAIRP(BgL_cdrzd2183zd2_304))
															{	/* Jas/profile.scm 133 */
																obj_t BgL_cdrzd2189zd2_308;

																BgL_cdrzd2189zd2_308 =
																	CDR(BgL_cdrzd2183zd2_304);
																if (PAIRP(BgL_cdrzd2189zd2_308))
																	{	/* Jas/profile.scm 133 */
																		obj_t BgL_cdrzd2195zd2_310;

																		BgL_cdrzd2195zd2_310 =
																			CDR(BgL_cdrzd2189zd2_308);
																		if (PAIRP(BgL_cdrzd2195zd2_310))
																			{	/* Jas/profile.scm 133 */
																				obj_t BgL_arg1417z00_312;
																				obj_t BgL_arg1418z00_313;
																				obj_t BgL_arg1421z00_314;
																				obj_t BgL_arg1422z00_315;

																				BgL_arg1417z00_312 =
																					CAR(BgL_cdrzd2183zd2_304);
																				BgL_arg1418z00_313 =
																					CAR(BgL_cdrzd2189zd2_308);
																				BgL_arg1421z00_314 =
																					CAR(BgL_cdrzd2195zd2_310);
																				BgL_arg1422z00_315 =
																					CDR(BgL_cdrzd2195zd2_310);
																				{	/* Jas/profile.scm 132 */
																					obj_t BgL_arg1442z00_933;

																					{	/* Jas/profile.scm 132 */
																						obj_t BgL_arg1448z00_934;

																						{	/* Jas/profile.scm 132 */
																							obj_t BgL_arg1449z00_935;

																							BgL_arg1449z00_935 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1421z00_314,
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BGl_profilezd2codezd2zzjas_profilez00
																									(BgL_envz00_12, BgL_iz00_293,
																										BgL_arg1422z00_315), BNIL));
																							BgL_arg1448z00_934 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1418z00_313,
																								BgL_arg1449z00_935);
																						}
																						BgL_arg1442z00_933 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1417z00_312,
																							BgL_arg1448z00_934);
																					}
																					BgL_arg1384z00_290 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 11)),
																						BgL_arg1442z00_933);
																			}}
																		else
																			{	/* Jas/profile.scm 133 */
																			BgL_tagzd2172zd2_301:
																				BgL_arg1384z00_290 =
																					BGl_errorz00zz__errorz00
																					(BGl_string2062z00zzjas_profilez00,
																					BGl_string2063z00zzjas_profilez00,
																					BgL_mz00_294);
																			}
																	}
																else
																	{	/* Jas/profile.scm 133 */
																		goto BgL_tagzd2172zd2_301;
																	}
															}
														else
															{	/* Jas/profile.scm 133 */
																goto BgL_tagzd2172zd2_301;
															}
													}
												else
													{	/* Jas/profile.scm 133 */
														goto BgL_tagzd2172zd2_301;
													}
											}
										else
											{	/* Jas/profile.scm 133 */
												goto BgL_tagzd2172zd2_301;
											}
									}
								}
								BgL_arg1383z00_289 =
									MAKE_YOUNG_PAIR(BgL_arg1384z00_290, BgL_rz00_284);
							}
							{
								obj_t BgL_rz00_1627;
								long BgL_iz00_1626;
								obj_t BgL_lz00_1625;

								BgL_lz00_1625 = BgL_arg1381z00_287;
								BgL_iz00_1626 = BgL_arg1382z00_288;
								BgL_rz00_1627 = BgL_arg1383z00_289;
								BgL_rz00_284 = BgL_rz00_1627;
								BgL_iz00_283 = BgL_iz00_1626;
								BgL_lz00_282 = BgL_lz00_1625;
								goto BgL_zc3z04anonymousza31372ze3z87_285;
							}
						}
				}
			}
		}

	}



/* profile-code */
	obj_t BGl_profilezd2codezd2zzjas_profilez00(BgL__envz00_bglt BgL_envz00_14,
		long BgL_curzd2fntzd2_15, obj_t BgL_lz00_16)
	{
		{	/* Jas/profile.scm 139 */
			{
				obj_t BgL_lz00_367;
				long BgL_iz00_368;
				obj_t BgL_rz00_369;
				obj_t BgL_lz00_349;
				long BgL_iz00_350;
				obj_t BgL_rz00_351;
				obj_t BgL_extraz00_352;
				long BgL_iz00_327;

				{	/* Jas/profile.scm 168 */
					obj_t BgL_arg1464z00_326;

					BgL_arg1464z00_326 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)), BgL_lz00_16);
					BgL_lz00_367 = BgL_arg1464z00_326;
					BgL_iz00_368 = ((long) 0);
					BgL_rz00_369 = BNIL;
				BgL_zc3z04anonymousza31594ze3z87_370:
					if (NULLP(BgL_lz00_367))
						{	/* Jas/profile.scm 164 */
							return bgl_reverse_bang(BgL_rz00_369);
						}
					else
						{	/* Jas/profile.scm 165 */
							bool_t BgL_test2177z00_1633;

							{	/* Jas/profile.scm 165 */
								obj_t BgL_tmpz00_1634;

								BgL_tmpz00_1634 = CAR(((obj_t) BgL_lz00_367));
								BgL_test2177z00_1633 = PAIRP(BgL_tmpz00_1634);
							}
							if (BgL_test2177z00_1633)
								{	/* Jas/profile.scm 167 */
									obj_t BgL_arg1599z00_374;
									obj_t BgL_arg1604z00_375;

									BgL_arg1599z00_374 = CDR(((obj_t) BgL_lz00_367));
									{	/* Jas/profile.scm 167 */
										obj_t BgL_arg1605z00_376;

										BgL_arg1605z00_376 = CAR(((obj_t) BgL_lz00_367));
										BgL_arg1604z00_375 =
											MAKE_YOUNG_PAIR(BgL_arg1605z00_376, BgL_rz00_369);
									}
									{
										obj_t BgL_rz00_1644;
										obj_t BgL_lz00_1643;

										BgL_lz00_1643 = BgL_arg1599z00_374;
										BgL_rz00_1644 = BgL_arg1604z00_375;
										BgL_rz00_369 = BgL_rz00_1644;
										BgL_lz00_367 = BgL_lz00_1643;
										goto BgL_zc3z04anonymousza31594ze3z87_370;
									}
								}
							else
								{	/* Jas/profile.scm 165 */
									BgL_lz00_349 = BgL_lz00_367;
									BgL_iz00_350 = (BgL_iz00_368 + ((long) 1));
									BgL_rz00_351 = BgL_rz00_369;
									BgL_iz00_327 = BgL_iz00_368;
									{	/* Jas/profile.scm 143 */
										obj_t BgL_arg1474z00_330;
										obj_t BgL_arg1476z00_331;

										BgL_arg1474z00_330 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BNIL);
										{	/* Jas/profile.scm 144 */
											obj_t BgL_arg1477z00_332;
											obj_t BgL_arg1489z00_333;

											BgL_arg1477z00_332 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)), BNIL);
											{	/* Jas/profile.scm 145 */
												obj_t BgL_arg1493z00_334;
												obj_t BgL_arg1495z00_335;

												BgL_arg1493z00_334 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 18)), BNIL);
												{	/* Jas/profile.scm 146 */
													obj_t BgL_arg1497z00_336;
													obj_t BgL_arg1518z00_337;

													BgL_arg1497z00_336 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 19)), BNIL);
													{	/* Jas/profile.scm 147 */
														obj_t BgL_arg1521z00_338;
														obj_t BgL_arg1528z00_339;

														BgL_arg1521z00_338 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 20)),
															BNIL);
														{	/* Jas/profile.scm 148 */
															obj_t BgL_arg1536z00_340;
															obj_t BgL_arg1537z00_341;

															BgL_arg1536z00_340 =
																BGl_pushzd2intzd2zzjas_profilez00(BINT
																(BgL_iz00_327));
															{	/* Jas/profile.scm 149 */
																obj_t BgL_arg1540z00_342;
																obj_t BgL_arg1552z00_343;

																BgL_arg1540z00_342 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 21)),
																	BNIL);
																{	/* Jas/profile.scm 150 */
																	obj_t BgL_arg1553z00_344;
																	obj_t BgL_arg1558z00_345;

																	BgL_arg1553z00_344 =
																		BGl_pushzd2intzd2zzjas_profilez00(BINT
																		(BgL_curzd2fntzd2_15));
																	{	/* Jas/profile.scm 151 */
																		obj_t BgL_arg1561z00_346;

																		{	/* Jas/profile.scm 151 */
																			obj_t BgL_arg1564z00_347;

																			BgL_arg1564z00_347 =
																				MAKE_YOUNG_PAIR(
																				(((BgL__envz00_bglt)
																						COBJECT(BgL_envz00_14))->
																					BgL_resz00), BNIL);
																			BgL_arg1561z00_346 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						22)), BgL_arg1564z00_347);
																		}
																		BgL_arg1558z00_345 =
																			MAKE_YOUNG_PAIR(BgL_arg1561z00_346, BNIL);
																	}
																	BgL_arg1552z00_343 =
																		MAKE_YOUNG_PAIR(BgL_arg1553z00_344,
																		BgL_arg1558z00_345);
																}
																BgL_arg1537z00_341 =
																	MAKE_YOUNG_PAIR(BgL_arg1540z00_342,
																	BgL_arg1552z00_343);
															}
															BgL_arg1528z00_339 =
																MAKE_YOUNG_PAIR(BgL_arg1536z00_340,
																BgL_arg1537z00_341);
														}
														BgL_arg1518z00_337 =
															MAKE_YOUNG_PAIR(BgL_arg1521z00_338,
															BgL_arg1528z00_339);
													}
													BgL_arg1495z00_335 =
														MAKE_YOUNG_PAIR(BgL_arg1497z00_336,
														BgL_arg1518z00_337);
												}
												BgL_arg1489z00_333 =
													MAKE_YOUNG_PAIR(BgL_arg1493z00_334,
													BgL_arg1495z00_335);
											}
											BgL_arg1476z00_331 =
												MAKE_YOUNG_PAIR(BgL_arg1477z00_332, BgL_arg1489z00_333);
										}
										BgL_extraz00_352 =
											MAKE_YOUNG_PAIR(BgL_arg1474z00_330, BgL_arg1476z00_331);
									}
								BgL_zc3z04anonymousza31566ze3z87_353:
									if (NULLP(BgL_lz00_349))
										{	/* Jas/profile.scm 157 */
											return
												BGl_errorz00zz__errorz00
												(BGl_string2064z00zzjas_profilez00,
												BGl_string2065z00zzjas_profilez00, BgL_lz00_349);
										}
									else
										{	/* Jas/profile.scm 158 */
											bool_t BgL_test2179z00_1648;

											{	/* Jas/profile.scm 158 */
												bool_t BgL_test2180z00_1649;

												{	/* Jas/profile.scm 158 */
													obj_t BgL_tmpz00_1650;

													BgL_tmpz00_1650 = CAR(((obj_t) BgL_lz00_349));
													BgL_test2180z00_1649 = PAIRP(BgL_tmpz00_1650);
												}
												if (BgL_test2180z00_1649)
													{	/* Jas/profile.scm 159 */
														obj_t BgL_tmpz00_1654;

														{	/* Jas/profile.scm 159 */
															obj_t BgL_auxz00_1655;

															{	/* Jas/profile.scm 159 */
																obj_t BgL_pairz00_949;

																BgL_pairz00_949 = CAR(((obj_t) BgL_lz00_349));
																BgL_auxz00_1655 = CAR(BgL_pairz00_949);
															}
															BgL_tmpz00_1654 =
																BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																(BgL_auxz00_1655, CNST_TABLE_REF(((long) 23)));
														}
														BgL_test2179z00_1648 = CBOOL(BgL_tmpz00_1654);
													}
												else
													{	/* Jas/profile.scm 158 */
														BgL_test2179z00_1648 = ((bool_t) 1);
													}
											}
											if (BgL_test2179z00_1648)
												{	/* Jas/profile.scm 160 */
													obj_t BgL_arg1582z00_360;
													obj_t BgL_arg1584z00_361;

													BgL_arg1582z00_360 = CDR(((obj_t) BgL_lz00_349));
													{	/* Jas/profile.scm 160 */
														obj_t BgL_arg1588z00_362;

														BgL_arg1588z00_362 = CAR(((obj_t) BgL_lz00_349));
														BgL_arg1584z00_361 =
															MAKE_YOUNG_PAIR(BgL_arg1588z00_362, BgL_rz00_351);
													}
													{
														obj_t BgL_rz00_1668;
														obj_t BgL_lz00_1667;

														BgL_lz00_1667 = BgL_arg1582z00_360;
														BgL_rz00_1668 = BgL_arg1584z00_361;
														BgL_rz00_351 = BgL_rz00_1668;
														BgL_lz00_349 = BgL_lz00_1667;
														goto BgL_zc3z04anonymousza31566ze3z87_353;
													}
												}
											else
												{
													obj_t BgL_rz00_1671;
													long BgL_iz00_1670;
													obj_t BgL_lz00_1669;

													BgL_lz00_1669 = BgL_lz00_349;
													BgL_iz00_1670 = BgL_iz00_350;
													BgL_rz00_1671 =
														BGl_appendzd221011zd2zzjas_profilez00
														(BgL_extraz00_352, BgL_rz00_351);
													BgL_rz00_369 = BgL_rz00_1671;
													BgL_iz00_368 = BgL_iz00_1670;
													BgL_lz00_367 = BgL_lz00_1669;
													goto BgL_zc3z04anonymousza31594ze3z87_370;
												}
										}
								}
						}
				}
			}
		}

	}



/* push-int */
	obj_t BGl_pushzd2intzd2zzjas_profilez00(obj_t BgL_nz00_17)
	{
		{	/* Jas/profile.scm 170 */
			{

				if (INTEGERP(BgL_nz00_17))
					{	/* Jas/profile.scm 171 */
						switch ((long) CINT(BgL_nz00_17))
							{
							case ((long) -1):

								return CNST_TABLE_REF(((long) 28));
								break;
							case ((long) 0):

								return CNST_TABLE_REF(((long) 29));
								break;
							case ((long) 1):

								return CNST_TABLE_REF(((long) 30));
								break;
							case ((long) 2):

								return CNST_TABLE_REF(((long) 31));
								break;
							case ((long) 3):

								return CNST_TABLE_REF(((long) 32));
								break;
							case ((long) 4):

								return CNST_TABLE_REF(((long) 33));
								break;
							case ((long) 5):

								return CNST_TABLE_REF(((long) 34));
								break;
							default:
							BgL_case_else1067z00_383:
								{	/* Jas/profile.scm 180 */
									bool_t BgL_test2182z00_1712;

									{	/* Jas/profile.scm 180 */
										bool_t BgL_test2183z00_1713;

										if (INTEGERP(BgL_nz00_17))
											{	/* Jas/profile.scm 180 */
												BgL_test2183z00_1713 =
													((long) CINT(BgL_nz00_17) > ((long) -129));
											}
										else
											{	/* Jas/profile.scm 180 */
												BgL_test2183z00_1713 =
													BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_nz00_17,
													BINT(((long) -129)));
											}
										if (BgL_test2183z00_1713)
											{	/* Jas/profile.scm 180 */
												if (INTEGERP(BgL_nz00_17))
													{	/* Jas/profile.scm 180 */
														BgL_test2182z00_1712 =
															((long) CINT(BgL_nz00_17) < ((long) 128));
													}
												else
													{	/* Jas/profile.scm 180 */
														BgL_test2182z00_1712 =
															BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_17,
															BINT(((long) 128)));
											}}
										else
											{	/* Jas/profile.scm 180 */
												BgL_test2182z00_1712 = ((bool_t) 0);
											}
									}
									if (BgL_test2182z00_1712)
										{	/* Jas/profile.scm 180 */
											obj_t BgL_arg1624z00_391;

											BgL_arg1624z00_391 = MAKE_YOUNG_PAIR(BgL_nz00_17, BNIL);
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
												BgL_arg1624z00_391);
										}
									else
										{	/* Jas/profile.scm 181 */
											bool_t BgL_test2186z00_1729;

											{	/* Jas/profile.scm 181 */
												bool_t BgL_test2187z00_1730;

												if (INTEGERP(BgL_nz00_17))
													{	/* Jas/profile.scm 181 */
														BgL_test2187z00_1730 =
															((long) CINT(BgL_nz00_17) > ((long) -32769));
													}
												else
													{	/* Jas/profile.scm 181 */
														BgL_test2187z00_1730 =
															BGl_2ze3ze3zz__r4_numbers_6_5z00(BgL_nz00_17,
															BINT(((long) -32769)));
													}
												if (BgL_test2187z00_1730)
													{	/* Jas/profile.scm 181 */
														if (INTEGERP(BgL_nz00_17))
															{	/* Jas/profile.scm 181 */
																BgL_test2186z00_1729 =
																	((long) CINT(BgL_nz00_17) < ((long) 32768));
															}
														else
															{	/* Jas/profile.scm 181 */
																BgL_test2186z00_1729 =
																	BGl_2zc3zc3zz__r4_numbers_6_5z00(BgL_nz00_17,
																	BINT(((long) 32768)));
													}}
												else
													{	/* Jas/profile.scm 181 */
														BgL_test2186z00_1729 = ((bool_t) 0);
													}
											}
											if (BgL_test2186z00_1729)
												{	/* Jas/profile.scm 181 */
													obj_t BgL_arg1631z00_397;

													BgL_arg1631z00_397 =
														MAKE_YOUNG_PAIR(BgL_nz00_17, BNIL);
													return
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
														BgL_arg1631z00_397);
												}
											else
												{	/* Jas/profile.scm 182 */
													obj_t BgL_arg1634z00_398;

													BgL_arg1634z00_398 =
														MAKE_YOUNG_PAIR(BgL_nz00_17, BNIL);
													return
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 27)),
														BgL_arg1634z00_398);
					}}}}}
				else
					{	/* Jas/profile.scm 171 */
						goto BgL_case_else1067z00_383;
					}
			}
		}

	}



/* profile-extra-clinit */
	obj_t BGl_profilezd2extrazd2clinitz00zzjas_profilez00(BgL__envz00_bglt
		BgL_envz00_18, obj_t BgL_methodsz00_19)
	{
		{	/* Jas/profile.scm 187 */
			{	/* Jas/profile.scm 189 */
				long BgL_siza7eza7_406;

				BgL_siza7eza7_406 =
					bgl_list_length(
					(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_lnamesz00));
				return
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
					(BGl_profilezd2makezd2namesz00zzjas_profilez00(BgL_siza7eza7_406,
						(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_namesz00),
						(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_lnamesz00),
						(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_jstringz00)),
					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
					(BGl_profilezd2makezd2linesz00zzjas_profilez00(BgL_siza7eza7_406,
							(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_linesz00),
							BgL_methodsz00_19),
						BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
						(BGl_profilezd2makezd2resz00zzjas_profilez00(BgL_siza7eza7_406,
								(((BgL__envz00_bglt) COBJECT(BgL_envz00_18))->BgL_resz00),
								BgL_methodsz00_19), BNIL)));
			}
		}

	}



/* profile-make-names */
	obj_t BGl_profilezd2makezd2namesz00zzjas_profilez00(long BgL_siza7eza7_20,
		obj_t BgL_namesz00_21, obj_t BgL_lz00_22, obj_t BgL_jstringz00_23)
	{
		{	/* Jas/profile.scm 194 */
			{
				obj_t BgL_codez00_428;
				long BgL_iz00_429;
				obj_t BgL_namesz00_430;

				{	/* Jas/profile.scm 202 */
					obj_t BgL_arg1684z00_419;

					{	/* Jas/profile.scm 202 */
						obj_t BgL_arg1685z00_420;
						obj_t BgL_arg1686z00_421;

						{	/* Jas/profile.scm 202 */
							obj_t BgL_arg1687z00_422;

							BgL_arg1687z00_422 = MAKE_YOUNG_PAIR(BgL_namesz00_21, BNIL);
							BgL_arg1685z00_420 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
								BgL_arg1687z00_422);
						}
						{	/* Jas/profile.scm 203 */
							obj_t BgL_arg1688z00_423;

							{	/* Jas/profile.scm 203 */
								obj_t BgL_arg1692z00_424;
								obj_t BgL_arg1695z00_425;

								{	/* Jas/profile.scm 203 */
									obj_t BgL_arg1696z00_426;

									BgL_arg1696z00_426 = MAKE_YOUNG_PAIR(BgL_jstringz00_23, BNIL);
									BgL_arg1692z00_424 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 38)),
										BgL_arg1696z00_426);
								}
								BgL_arg1695z00_425 =
									MAKE_YOUNG_PAIR(BGl_pushzd2intzd2zzjas_profilez00(BINT
										(BgL_siza7eza7_20)), BNIL);
								BgL_arg1688z00_423 =
									MAKE_YOUNG_PAIR(BgL_arg1692z00_424, BgL_arg1695z00_425);
							}
							BgL_codez00_428 = BgL_arg1688z00_423;
							BgL_iz00_429 = ((long) 0);
							BgL_namesz00_430 = BgL_lz00_22;
						BgL_zc3z04anonymousza31698ze3z87_431:
							if (NULLP(BgL_namesz00_430))
								{	/* Jas/profile.scm 196 */
									BgL_arg1686z00_421 = BgL_codez00_428;
								}
							else
								{	/* Jas/profile.scm 198 */
									obj_t BgL_arg1704z00_433;
									long BgL_arg1707z00_434;
									obj_t BgL_arg1708z00_435;

									{	/* Jas/profile.scm 198 */
										obj_t BgL_arg1711z00_436;

										{	/* Jas/profile.scm 198 */
											obj_t BgL_arg1712z00_437;
											obj_t BgL_arg1719z00_438;

											{	/* Jas/profile.scm 198 */
												obj_t BgL_arg1725z00_439;

												{	/* Jas/profile.scm 198 */
													obj_t BgL_arg1726z00_440;

													BgL_arg1726z00_440 = CAR(((obj_t) BgL_namesz00_430));
													BgL_arg1725z00_439 =
														MAKE_YOUNG_PAIR(BgL_arg1726z00_440, BNIL);
												}
												BgL_arg1712z00_437 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 27)),
													BgL_arg1725z00_439);
											}
											{	/* Jas/profile.scm 198 */
												obj_t BgL_arg1727z00_441;
												obj_t BgL_arg1728z00_442;

												BgL_arg1727z00_441 =
													BGl_pushzd2intzd2zzjas_profilez00(BINT(BgL_iz00_429));
												BgL_arg1728z00_442 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
													BgL_codez00_428);
												BgL_arg1719z00_438 =
													MAKE_YOUNG_PAIR(BgL_arg1727z00_441,
													BgL_arg1728z00_442);
											}
											BgL_arg1711z00_436 =
												MAKE_YOUNG_PAIR(BgL_arg1712z00_437, BgL_arg1719z00_438);
										}
										BgL_arg1704z00_433 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 36)),
											BgL_arg1711z00_436);
									}
									BgL_arg1707z00_434 = (BgL_iz00_429 + ((long) 1));
									BgL_arg1708z00_435 = CDR(((obj_t) BgL_namesz00_430));
									{
										obj_t BgL_namesz00_1794;
										long BgL_iz00_1793;
										obj_t BgL_codez00_1792;

										BgL_codez00_1792 = BgL_arg1704z00_433;
										BgL_iz00_1793 = BgL_arg1707z00_434;
										BgL_namesz00_1794 = BgL_arg1708z00_435;
										BgL_namesz00_430 = BgL_namesz00_1794;
										BgL_iz00_429 = BgL_iz00_1793;
										BgL_codez00_428 = BgL_codez00_1792;
										goto BgL_zc3z04anonymousza31698ze3z87_431;
									}
								}
						}
						BgL_arg1684z00_419 =
							MAKE_YOUNG_PAIR(BgL_arg1685z00_420, BgL_arg1686z00_421);
					}
					return bgl_reverse_bang(BgL_arg1684z00_419);
				}
			}
		}

	}



/* profile-make-lines */
	obj_t BGl_profilezd2makezd2linesz00zzjas_profilez00(long BgL_siza7eza7_24,
		obj_t BgL_linesz00_25, obj_t BgL_methodsz00_26)
	{
		{	/* Jas/profile.scm 205 */
			{
				obj_t BgL_codez00_523;
				long BgL_iz00_524;
				obj_t BgL_methodsz00_525;
				obj_t BgL_codez00_509;
				long BgL_iz00_510;
				obj_t BgL_labsz00_511;
				obj_t BgL_mz00_485;
				obj_t BgL_lz00_472;
				long BgL_iz00_473;
				obj_t BgL_rz00_474;
				obj_t BgL_lz00_460;

				{	/* Jas/profile.scm 247 */
					obj_t BgL_arg1729z00_449;

					{	/* Jas/profile.scm 247 */
						obj_t BgL_arg1731z00_450;
						obj_t BgL_arg1732z00_451;

						{	/* Jas/profile.scm 247 */
							obj_t BgL_arg1733z00_452;

							BgL_arg1733z00_452 = MAKE_YOUNG_PAIR(BgL_linesz00_25, BNIL);
							BgL_arg1731z00_450 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
								BgL_arg1733z00_452);
						}
						{	/* Jas/profile.scm 248 */
							obj_t BgL_arg1738z00_453;

							{	/* Jas/profile.scm 248 */
								obj_t BgL_arg1739z00_454;
								obj_t BgL_arg1740z00_455;

								{	/* Jas/profile.scm 248 */
									obj_t BgL_arg1741z00_456;

									{	/* Jas/profile.scm 248 */
										obj_t BgL_arg1742z00_457;

										{	/* Jas/profile.scm 248 */
											obj_t BgL_arg1743z00_458;

											BgL_arg1743z00_458 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)), BNIL);
											BgL_arg1742z00_457 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1743z00_458);
										}
										BgL_arg1741z00_456 =
											MAKE_YOUNG_PAIR(BgL_arg1742z00_457, BNIL);
									}
									BgL_arg1739z00_454 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 38)),
										BgL_arg1741z00_456);
								}
								BgL_arg1740z00_455 =
									MAKE_YOUNG_PAIR(BGl_pushzd2intzd2zzjas_profilez00(BINT
										(BgL_siza7eza7_24)), BNIL);
								BgL_arg1738z00_453 =
									MAKE_YOUNG_PAIR(BgL_arg1739z00_454, BgL_arg1740z00_455);
							}
							BgL_codez00_523 = BgL_arg1738z00_453;
							BgL_iz00_524 = ((long) 0);
							BgL_methodsz00_525 = BgL_methodsz00_26;
						BgL_zc3z04anonymousza31829ze3z87_526:
							if (NULLP(BgL_methodsz00_525))
								{	/* Jas/profile.scm 233 */
									BgL_arg1732z00_451 = BgL_codez00_523;
								}
							else
								{	/* Jas/profile.scm 235 */
									obj_t BgL_arg1831z00_528;
									long BgL_arg1832z00_529;
									obj_t BgL_arg1833z00_530;

									{	/* Jas/profile.scm 235 */
										obj_t BgL_labsz00_531;

										{	/* Jas/profile.scm 235 */
											obj_t BgL_arg1847z00_540;

											BgL_arg1847z00_540 = CAR(((obj_t) BgL_methodsz00_525));
											BgL_mz00_485 = BgL_arg1847z00_540;
											{

												if (PAIRP(BgL_mz00_485))
													{	/* Jas/profile.scm 221 */
														obj_t BgL_cdrzd2215zd2_495;

														BgL_cdrzd2215zd2_495 = CDR(BgL_mz00_485);
														if (
															(CAR(BgL_mz00_485) ==
																CNST_TABLE_REF(((long) 11))))
															{	/* Jas/profile.scm 221 */
																if (PAIRP(BgL_cdrzd2215zd2_495))
																	{	/* Jas/profile.scm 221 */
																		obj_t BgL_cdrzd2221zd2_499;

																		BgL_cdrzd2221zd2_499 =
																			CDR(BgL_cdrzd2215zd2_495);
																		if (PAIRP(BgL_cdrzd2221zd2_499))
																			{	/* Jas/profile.scm 221 */
																				obj_t BgL_cdrzd2227zd2_501;

																				BgL_cdrzd2227zd2_501 =
																					CDR(BgL_cdrzd2221zd2_499);
																				if (PAIRP(BgL_cdrzd2227zd2_501))
																					{	/* Jas/profile.scm 221 */
																						obj_t BgL_arg1808z00_506;

																						BgL_arg1808z00_506 =
																							CDR(BgL_cdrzd2227zd2_501);
																						{	/* Jas/profile.scm 220 */
																							obj_t BgL_arg1811z00_1004;

																							BgL_arg1811z00_1004 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 24)),
																								BgL_arg1808z00_506);
																							BgL_lz00_472 =
																								BgL_arg1811z00_1004;
																							BgL_iz00_473 = ((long) 0);
																							BgL_rz00_474 = BNIL;
																						BgL_zc3z04anonymousza31762ze3z87_475:
																							if (NULLP
																								(BgL_lz00_472))
																								{	/* Jas/profile.scm 213 */
																									BgL_labsz00_531 =
																										bgl_reverse_bang
																										(BgL_rz00_474);
																								}
																							else
																								{	/* Jas/profile.scm 214 */
																									bool_t BgL_test2198z00_1836;

																									{	/* Jas/profile.scm 214 */
																										obj_t BgL_tmpz00_1837;

																										BgL_tmpz00_1837 =
																											CAR(
																											((obj_t) BgL_lz00_472));
																										BgL_test2198z00_1836 =
																											PAIRP(BgL_tmpz00_1837);
																									}
																									if (BgL_test2198z00_1836)
																										{	/* Jas/profile.scm 216 */
																											obj_t BgL_arg1771z00_479;
																											long BgL_arg1775z00_480;

																											BgL_arg1771z00_479 =
																												CDR(
																												((obj_t) BgL_lz00_472));
																											BgL_arg1775z00_480 =
																												(BgL_iz00_473 +
																												((long) 1));
																											{
																												long BgL_iz00_1845;
																												obj_t BgL_lz00_1844;

																												BgL_lz00_1844 =
																													BgL_arg1771z00_479;
																												BgL_iz00_1845 =
																													BgL_arg1775z00_480;
																												BgL_iz00_473 =
																													BgL_iz00_1845;
																												BgL_lz00_472 =
																													BgL_lz00_1844;
																												goto
																													BgL_zc3z04anonymousza31762ze3z87_475;
																											}
																										}
																									else
																										{	/* Jas/profile.scm 215 */
																											obj_t BgL_arg1778z00_481;
																											obj_t BgL_arg1779z00_482;

																											{	/* Jas/profile.scm 215 */
																												obj_t
																													BgL_arg1782z00_483;
																												BgL_arg1782z00_483 =
																													CDR(((obj_t)
																														BgL_lz00_472));
																												BgL_lz00_460 =
																													BgL_arg1782z00_483;
																											BgL_zc3z04anonymousza31745ze3z87_461:
																												if (NULLP
																													(BgL_lz00_460))
																													{	/* Jas/profile.scm 207 */
																														BgL_arg1778z00_481 =
																															BNIL;
																													}
																												else
																													{	/* Jas/profile.scm 208 */
																														bool_t
																															BgL_test2200z00_1850;
																														{	/* Jas/profile.scm 208 */
																															bool_t
																																BgL_test2201z00_1851;
																															{	/* Jas/profile.scm 208 */
																																obj_t
																																	BgL_tmpz00_1852;
																																BgL_tmpz00_1852
																																	=
																																	CAR(((obj_t)
																																		BgL_lz00_460));
																																BgL_test2201z00_1851
																																	=
																																	PAIRP
																																	(BgL_tmpz00_1852);
																															}
																															if (BgL_test2201z00_1851)
																																{	/* Jas/profile.scm 209 */
																																	obj_t
																																		BgL_tmpz00_1856;
																																	{	/* Jas/profile.scm 209 */
																																		obj_t
																																			BgL_auxz00_1857;
																																		{	/* Jas/profile.scm 209 */
																																			obj_t
																																				BgL_pairz00_982;
																																			BgL_pairz00_982
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_lz00_460));
																																			BgL_auxz00_1857
																																				=
																																				CAR
																																				(BgL_pairz00_982);
																																		}
																																		BgL_tmpz00_1856
																																			=
																																			BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																			(BgL_auxz00_1857,
																																			CNST_TABLE_REF
																																			(((long)
																																					23)));
																																	}
																																	BgL_test2200z00_1850
																																		=
																																		CBOOL
																																		(BgL_tmpz00_1856);
																																}
																															else
																																{	/* Jas/profile.scm 208 */
																																	BgL_test2200z00_1850
																																		=
																																		((bool_t)
																																		1);
																																}
																														}
																														if (BgL_test2200z00_1850)
																															{	/* Jas/profile.scm 210 */
																																obj_t
																																	BgL_arg1759z00_468;
																																BgL_arg1759z00_468
																																	=
																																	CDR(((obj_t)
																																		BgL_lz00_460));
																																{
																																	obj_t
																																		BgL_lz00_1866;
																																	BgL_lz00_1866
																																		=
																																		BgL_arg1759z00_468;
																																	BgL_lz00_460 =
																																		BgL_lz00_1866;
																																	goto
																																		BgL_zc3z04anonymousza31745ze3z87_461;
																																}
																															}
																														else
																															{	/* Jas/profile.scm 208 */
																																BgL_arg1778z00_481
																																	=
																																	BgL_lz00_460;
																															}
																													}
																											}
																											BgL_arg1779z00_482 =
																												MAKE_YOUNG_PAIR(BINT
																												(BgL_iz00_473),
																												BgL_rz00_474);
																											{
																												obj_t BgL_rz00_1870;
																												obj_t BgL_lz00_1869;

																												BgL_lz00_1869 =
																													BgL_arg1778z00_481;
																												BgL_rz00_1870 =
																													BgL_arg1779z00_482;
																												BgL_rz00_474 =
																													BgL_rz00_1870;
																												BgL_lz00_472 =
																													BgL_lz00_1869;
																												goto
																													BgL_zc3z04anonymousza31762ze3z87_475;
																											}
																										}
																								}
																						}
																					}
																				else
																					{	/* Jas/profile.scm 221 */
																					BgL_tagzd2204zd2_492:
																						BgL_labsz00_531 =
																							BGl_errorz00zz__errorz00
																							(BGl_string2062z00zzjas_profilez00,
																							BGl_string2063z00zzjas_profilez00,
																							BgL_mz00_485);
																					}
																			}
																		else
																			{	/* Jas/profile.scm 221 */
																				goto BgL_tagzd2204zd2_492;
																			}
																	}
																else
																	{	/* Jas/profile.scm 221 */
																		goto BgL_tagzd2204zd2_492;
																	}
															}
														else
															{	/* Jas/profile.scm 221 */
																goto BgL_tagzd2204zd2_492;
															}
													}
												else
													{	/* Jas/profile.scm 221 */
														goto BgL_tagzd2204zd2_492;
													}
											}
										}
										{	/* Jas/profile.scm 238 */
											obj_t BgL_arg1835z00_532;

											{	/* Jas/profile.scm 238 */
												obj_t BgL_arg1836z00_533;

												{	/* Jas/profile.scm 238 */
													obj_t BgL_arg1838z00_534;

													{	/* Jas/profile.scm 238 */
														obj_t BgL_arg1840z00_535;
														obj_t BgL_arg1841z00_536;

														{	/* Jas/profile.scm 238 */
															long BgL_arg1842z00_537;

															BgL_arg1842z00_537 =
																bgl_list_length(BgL_labsz00_531);
															BgL_arg1840z00_535 =
																BGl_pushzd2intzd2zzjas_profilez00(BINT
																(BgL_arg1842z00_537));
														}
														{	/* Jas/profile.scm 239 */
															obj_t BgL_arg1845z00_538;
															obj_t BgL_arg1846z00_539;

															BgL_arg1845z00_538 =
																BGl_pushzd2intzd2zzjas_profilez00(BINT
																(BgL_iz00_524));
															BgL_arg1846z00_539 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
																BgL_codez00_523);
															BgL_arg1841z00_536 =
																MAKE_YOUNG_PAIR(BgL_arg1845z00_538,
																BgL_arg1846z00_539);
														}
														BgL_arg1838z00_534 =
															MAKE_YOUNG_PAIR(BgL_arg1840z00_535,
															BgL_arg1841z00_536);
													}
													BgL_arg1836z00_533 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 40)),
														BgL_arg1838z00_534);
												}
												BgL_codez00_509 = BgL_arg1836z00_533;
												BgL_iz00_510 = ((long) 0);
												BgL_labsz00_511 = BgL_labsz00_531;
											BgL_zc3z04anonymousza31812ze3z87_512:
												if (NULLP(BgL_labsz00_511))
													{	/* Jas/profile.scm 223 */
														BgL_arg1835z00_532 = BgL_codez00_509;
													}
												else
													{	/* Jas/profile.scm 226 */
														obj_t BgL_arg1820z00_514;
														long BgL_arg1821z00_515;
														obj_t BgL_arg1822z00_516;

														{	/* Jas/profile.scm 226 */
															obj_t BgL_arg1823z00_517;

															{	/* Jas/profile.scm 226 */
																obj_t BgL_arg1824z00_518;
																obj_t BgL_arg1825z00_519;

																{	/* Jas/profile.scm 226 */
																	obj_t BgL_arg1826z00_520;

																	BgL_arg1826z00_520 =
																		CAR(((obj_t) BgL_labsz00_511));
																	BgL_arg1824z00_518 =
																		BGl_pushzd2intzd2zzjas_profilez00
																		(BgL_arg1826z00_520);
																}
																{	/* Jas/profile.scm 227 */
																	obj_t BgL_arg1827z00_521;
																	obj_t BgL_arg1828z00_522;

																	BgL_arg1827z00_521 =
																		BGl_pushzd2intzd2zzjas_profilez00(BINT
																		(BgL_iz00_510));
																	BgL_arg1828z00_522 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
																		BgL_codez00_509);
																	BgL_arg1825z00_519 =
																		MAKE_YOUNG_PAIR(BgL_arg1827z00_521,
																		BgL_arg1828z00_522);
																}
																BgL_arg1823z00_517 =
																	MAKE_YOUNG_PAIR(BgL_arg1824z00_518,
																	BgL_arg1825z00_519);
															}
															BgL_arg1820z00_514 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 39)),
																BgL_arg1823z00_517);
														}
														BgL_arg1821z00_515 = (BgL_iz00_510 + ((long) 1));
														BgL_arg1822z00_516 = CDR(((obj_t) BgL_labsz00_511));
														{
															obj_t BgL_labsz00_1901;
															long BgL_iz00_1900;
															obj_t BgL_codez00_1899;

															BgL_codez00_1899 = BgL_arg1820z00_514;
															BgL_iz00_1900 = BgL_arg1821z00_515;
															BgL_labsz00_1901 = BgL_arg1822z00_516;
															BgL_labsz00_511 = BgL_labsz00_1901;
															BgL_iz00_510 = BgL_iz00_1900;
															BgL_codez00_509 = BgL_codez00_1899;
															goto BgL_zc3z04anonymousza31812ze3z87_512;
														}
													}
											}
											BgL_arg1831z00_528 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 36)),
												BgL_arg1835z00_532);
									}}
									BgL_arg1832z00_529 = (BgL_iz00_524 + ((long) 1));
									BgL_arg1833z00_530 = CDR(((obj_t) BgL_methodsz00_525));
									{
										obj_t BgL_methodsz00_1909;
										long BgL_iz00_1908;
										obj_t BgL_codez00_1907;

										BgL_codez00_1907 = BgL_arg1831z00_528;
										BgL_iz00_1908 = BgL_arg1832z00_529;
										BgL_methodsz00_1909 = BgL_arg1833z00_530;
										BgL_methodsz00_525 = BgL_methodsz00_1909;
										BgL_iz00_524 = BgL_iz00_1908;
										BgL_codez00_523 = BgL_codez00_1907;
										goto BgL_zc3z04anonymousza31829ze3z87_526;
									}
								}
						}
						BgL_arg1729z00_449 =
							MAKE_YOUNG_PAIR(BgL_arg1731z00_450, BgL_arg1732z00_451);
					}
					return bgl_reverse_bang(BgL_arg1729z00_449);
				}
			}
		}

	}



/* profile-make-res */
	obj_t BGl_profilezd2makezd2resz00zzjas_profilez00(long BgL_siza7eza7_27,
		obj_t BgL_resz00_28, obj_t BgL_methodsz00_29)
	{
		{	/* Jas/profile.scm 251 */
			{
				obj_t BgL_codez00_608;
				long BgL_iz00_609;
				obj_t BgL_methodsz00_610;
				obj_t BgL_mz00_584;
				obj_t BgL_lz00_573;
				long BgL_rz00_574;
				obj_t BgL_lz00_561;

				{	/* Jas/profile.scm 280 */
					obj_t BgL_arg1848z00_550;

					{	/* Jas/profile.scm 280 */
						obj_t BgL_arg1850z00_551;
						obj_t BgL_arg1851z00_552;

						{	/* Jas/profile.scm 280 */
							obj_t BgL_arg1852z00_553;

							BgL_arg1852z00_553 = MAKE_YOUNG_PAIR(BgL_resz00_28, BNIL);
							BgL_arg1850z00_551 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 37)),
								BgL_arg1852z00_553);
						}
						{	/* Jas/profile.scm 281 */
							obj_t BgL_arg1853z00_554;

							{	/* Jas/profile.scm 281 */
								obj_t BgL_arg1855z00_555;
								obj_t BgL_arg1856z00_556;

								{	/* Jas/profile.scm 281 */
									obj_t BgL_arg1857z00_557;

									{	/* Jas/profile.scm 281 */
										obj_t BgL_arg1858z00_558;

										{	/* Jas/profile.scm 281 */
											obj_t BgL_arg1859z00_559;

											BgL_arg1859z00_559 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 41)), BNIL);
											BgL_arg1858z00_558 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
												BgL_arg1859z00_559);
										}
										BgL_arg1857z00_557 =
											MAKE_YOUNG_PAIR(BgL_arg1858z00_558, BNIL);
									}
									BgL_arg1855z00_555 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 38)),
										BgL_arg1857z00_557);
								}
								BgL_arg1856z00_556 =
									MAKE_YOUNG_PAIR(BGl_pushzd2intzd2zzjas_profilez00(BINT
										(BgL_siza7eza7_27)), BNIL);
								BgL_arg1853z00_554 =
									MAKE_YOUNG_PAIR(BgL_arg1855z00_555, BgL_arg1856z00_556);
							}
							BgL_codez00_608 = BgL_arg1853z00_554;
							BgL_iz00_609 = ((long) 0);
							BgL_methodsz00_610 = BgL_methodsz00_29;
						BgL_zc3z04anonymousza31899ze3z87_611:
							if (NULLP(BgL_methodsz00_610))
								{	/* Jas/profile.scm 269 */
									BgL_arg1851z00_552 = BgL_codez00_608;
								}
							else
								{	/* Jas/profile.scm 273 */
									obj_t BgL_arg1901z00_613;
									long BgL_arg1902z00_614;
									obj_t BgL_arg1903z00_615;

									{	/* Jas/profile.scm 273 */
										obj_t BgL_arg1904z00_616;

										{	/* Jas/profile.scm 273 */
											obj_t BgL_arg1905z00_617;

											{	/* Jas/profile.scm 273 */
												obj_t BgL_arg1906z00_618;
												obj_t BgL_arg1907z00_619;

												{	/* Jas/profile.scm 273 */
													obj_t BgL_arg1908z00_620;

													{	/* Jas/profile.scm 273 */
														obj_t BgL_arg1909z00_621;

														BgL_arg1909z00_621 =
															CAR(((obj_t) BgL_methodsz00_610));
														BgL_mz00_584 = BgL_arg1909z00_621;
														{

															if (PAIRP(BgL_mz00_584))
																{	/* Jas/profile.scm 267 */
																	obj_t BgL_cdrzd2247zd2_594;

																	BgL_cdrzd2247zd2_594 = CDR(BgL_mz00_584);
																	if (
																		(CAR(BgL_mz00_584) ==
																			CNST_TABLE_REF(((long) 11))))
																		{	/* Jas/profile.scm 267 */
																			if (PAIRP(BgL_cdrzd2247zd2_594))
																				{	/* Jas/profile.scm 267 */
																					obj_t BgL_cdrzd2253zd2_598;

																					BgL_cdrzd2253zd2_598 =
																						CDR(BgL_cdrzd2247zd2_594);
																					if (PAIRP(BgL_cdrzd2253zd2_598))
																						{	/* Jas/profile.scm 267 */
																							obj_t BgL_cdrzd2259zd2_600;

																							BgL_cdrzd2259zd2_600 =
																								CDR(BgL_cdrzd2253zd2_598);
																							if (PAIRP(BgL_cdrzd2259zd2_600))
																								{	/* Jas/profile.scm 267 */
																									obj_t BgL_arg1896z00_605;

																									BgL_arg1896z00_605 =
																										CDR(BgL_cdrzd2259zd2_600);
																									{	/* Jas/profile.scm 266 */
																										obj_t BgL_arg1898z00_1043;

																										BgL_arg1898z00_1043 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													24)),
																											BgL_arg1896z00_605);
																										{	/* Jas/profile.scm 266 */
																											long BgL_tmpz00_1948;

																											BgL_lz00_573 =
																												BgL_arg1898z00_1043;
																											BgL_rz00_574 = ((long) 0);
																										BgL_zc3z04anonymousza31875ze3z87_575:
																											if (NULLP
																												(BgL_lz00_573))
																												{	/* Jas/profile.scm 259 */
																													BgL_tmpz00_1948 =
																														BgL_rz00_574;
																												}
																											else
																												{	/* Jas/profile.scm 260 */
																													bool_t
																														BgL_test2210z00_1951;
																													{	/* Jas/profile.scm 260 */
																														obj_t
																															BgL_tmpz00_1952;
																														BgL_tmpz00_1952 =
																															CAR(((obj_t)
																																BgL_lz00_573));
																														BgL_test2210z00_1951
																															=
																															PAIRP
																															(BgL_tmpz00_1952);
																													}
																													if (BgL_test2210z00_1951)
																														{	/* Jas/profile.scm 262 */
																															obj_t
																																BgL_arg1879z00_579;
																															BgL_arg1879z00_579
																																=
																																CDR(((obj_t)
																																	BgL_lz00_573));
																															{
																																obj_t
																																	BgL_lz00_1958;
																																BgL_lz00_1958 =
																																	BgL_arg1879z00_579;
																																BgL_lz00_573 =
																																	BgL_lz00_1958;
																																goto
																																	BgL_zc3z04anonymousza31875ze3z87_575;
																															}
																														}
																													else
																														{	/* Jas/profile.scm 261 */
																															obj_t
																																BgL_arg1881z00_580;
																															long
																																BgL_arg1882z00_581;
																															{	/* Jas/profile.scm 261 */
																																obj_t
																																	BgL_arg1883z00_582;
																																BgL_arg1883z00_582
																																	=
																																	CDR(((obj_t)
																																		BgL_lz00_573));
																																BgL_lz00_561 =
																																	BgL_arg1883z00_582;
																															BgL_zc3z04anonymousza31862ze3z87_562:
																																if (NULLP
																																	(BgL_lz00_561))
																																	{	/* Jas/profile.scm 253 */
																																		BgL_arg1881z00_580
																																			= BNIL;
																																	}
																																else
																																	{	/* Jas/profile.scm 254 */
																																		bool_t
																																			BgL_test2212z00_1963;
																																		{	/* Jas/profile.scm 254 */
																																			bool_t
																																				BgL_test2213z00_1964;
																																			{	/* Jas/profile.scm 254 */
																																				obj_t
																																					BgL_tmpz00_1965;
																																				BgL_tmpz00_1965
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_lz00_561));
																																				BgL_test2213z00_1964
																																					=
																																					PAIRP
																																					(BgL_tmpz00_1965);
																																			}
																																			if (BgL_test2213z00_1964)
																																				{	/* Jas/profile.scm 255 */
																																					obj_t
																																						BgL_tmpz00_1969;
																																					{	/* Jas/profile.scm 255 */
																																						obj_t
																																							BgL_auxz00_1970;
																																						{	/* Jas/profile.scm 255 */
																																							obj_t
																																								BgL_pairz00_1021;
																																							BgL_pairz00_1021
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_lz00_561));
																																							BgL_auxz00_1970
																																								=
																																								CAR
																																								(BgL_pairz00_1021);
																																						}
																																						BgL_tmpz00_1969
																																							=
																																							BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																																							(BgL_auxz00_1970,
																																							CNST_TABLE_REF
																																							(((long) 23)));
																																					}
																																					BgL_test2212z00_1963
																																						=
																																						CBOOL
																																						(BgL_tmpz00_1969);
																																				}
																																			else
																																				{	/* Jas/profile.scm 254 */
																																					BgL_test2212z00_1963
																																						=
																																						(
																																						(bool_t)
																																						1);
																																				}
																																		}
																																		if (BgL_test2212z00_1963)
																																			{	/* Jas/profile.scm 256 */
																																				obj_t
																																					BgL_arg1872z00_569;
																																				BgL_arg1872z00_569
																																					=
																																					CDR((
																																						(obj_t)
																																						BgL_lz00_561));
																																				{
																																					obj_t
																																						BgL_lz00_1979;
																																					BgL_lz00_1979
																																						=
																																						BgL_arg1872z00_569;
																																					BgL_lz00_561
																																						=
																																						BgL_lz00_1979;
																																					goto
																																						BgL_zc3z04anonymousza31862ze3z87_562;
																																				}
																																			}
																																		else
																																			{	/* Jas/profile.scm 254 */
																																				BgL_arg1881z00_580
																																					=
																																					BgL_lz00_561;
																																			}
																																	}
																															}
																															BgL_arg1882z00_581
																																=
																																(BgL_rz00_574 +
																																((long) 1));
																															{
																																long
																																	BgL_rz00_1982;
																																obj_t
																																	BgL_lz00_1981;
																																BgL_lz00_1981 =
																																	BgL_arg1881z00_580;
																																BgL_rz00_1982 =
																																	BgL_arg1882z00_581;
																																BgL_rz00_574 =
																																	BgL_rz00_1982;
																																BgL_lz00_573 =
																																	BgL_lz00_1981;
																																goto
																																	BgL_zc3z04anonymousza31875ze3z87_575;
																															}
																														}
																												}
																											BgL_arg1908z00_620 =
																												BINT(BgL_tmpz00_1948);
																										}
																									}
																								}
																							else
																								{	/* Jas/profile.scm 267 */
																								BgL_tagzd2236zd2_591:
																									BgL_arg1908z00_620 =
																										BGl_errorz00zz__errorz00
																										(BGl_string2062z00zzjas_profilez00,
																										BGl_string2063z00zzjas_profilez00,
																										BgL_mz00_584);
																								}
																						}
																					else
																						{	/* Jas/profile.scm 267 */
																							goto BgL_tagzd2236zd2_591;
																						}
																				}
																			else
																				{	/* Jas/profile.scm 267 */
																					goto BgL_tagzd2236zd2_591;
																				}
																		}
																	else
																		{	/* Jas/profile.scm 267 */
																			goto BgL_tagzd2236zd2_591;
																		}
																}
															else
																{	/* Jas/profile.scm 267 */
																	goto BgL_tagzd2236zd2_591;
																}
														}
													}
													BgL_arg1906z00_618 =
														BGl_pushzd2intzd2zzjas_profilez00
														(BgL_arg1908z00_620);
												}
												{	/* Jas/profile.scm 274 */
													obj_t BgL_arg1910z00_622;
													obj_t BgL_arg1911z00_623;

													BgL_arg1910z00_622 =
														BGl_pushzd2intzd2zzjas_profilez00(BINT
														(BgL_iz00_609));
													BgL_arg1911z00_623 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 35)),
														BgL_codez00_608);
													BgL_arg1907z00_619 =
														MAKE_YOUNG_PAIR(BgL_arg1910z00_622,
														BgL_arg1911z00_623);
												}
												BgL_arg1905z00_617 =
													MAKE_YOUNG_PAIR(BgL_arg1906z00_618,
													BgL_arg1907z00_619);
											}
											BgL_arg1904z00_616 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 40)),
												BgL_arg1905z00_617);
										}
										BgL_arg1901z00_613 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 36)),
											BgL_arg1904z00_616);
									}
									BgL_arg1902z00_614 = (BgL_iz00_609 + ((long) 1));
									BgL_arg1903z00_615 = CDR(((obj_t) BgL_methodsz00_610));
									{
										obj_t BgL_methodsz00_2001;
										long BgL_iz00_2000;
										obj_t BgL_codez00_1999;

										BgL_codez00_1999 = BgL_arg1901z00_613;
										BgL_iz00_2000 = BgL_arg1902z00_614;
										BgL_methodsz00_2001 = BgL_arg1903z00_615;
										BgL_methodsz00_610 = BgL_methodsz00_2001;
										BgL_iz00_609 = BgL_iz00_2000;
										BgL_codez00_608 = BgL_codez00_1999;
										goto BgL_zc3z04anonymousza31899ze3z87_611;
									}
								}
						}
						BgL_arg1848z00_550 =
							MAKE_YOUNG_PAIR(BgL_arg1850z00_551, BgL_arg1851z00_552);
					}
					return bgl_reverse_bang(BgL_arg1848z00_550);
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			{	/* Jas/profile.scm 5 */
				obj_t BgL_arg1915z00_631;
				obj_t BgL_arg1916z00_632;

				{	/* Jas/profile.scm 5 */
					obj_t BgL_v1077z00_650;

					BgL_v1077z00_650 = create_vector(((long) 8));
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1923z00_651;

						BgL_arg1923z00_651 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									42)), BGl_proc2067z00zzjas_profilez00,
							BGl_proc2066z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 0), BgL_arg1923z00_651);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1928z00_661;

						BgL_arg1928z00_661 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									44)), BGl_proc2069z00zzjas_profilez00,
							BGl_proc2068z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 1), BgL_arg1928z00_661);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1933z00_671;

						BgL_arg1933z00_671 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									45)), BGl_proc2071z00zzjas_profilez00,
							BGl_proc2070z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 2), BgL_arg1933z00_671);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1938z00_681;

						BgL_arg1938z00_681 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									46)), BGl_proc2073z00zzjas_profilez00,
							BGl_proc2072z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 3), BgL_arg1938z00_681);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1943z00_691;

						BgL_arg1943z00_691 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									47)), BGl_proc2075z00zzjas_profilez00,
							BGl_proc2074z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 4), BgL_arg1943z00_691);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1948z00_701;

						BgL_arg1948z00_701 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									48)), BGl_proc2077z00zzjas_profilez00,
							BGl_proc2076z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 5), BgL_arg1948z00_701);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1954z00_711;

						BgL_arg1954z00_711 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									49)), BGl_proc2079z00zzjas_profilez00,
							BGl_proc2078z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 6), BgL_arg1954z00_711);
					}
					{	/* Jas/profile.scm 5 */
						obj_t BgL_arg1959z00_721;

						BgL_arg1959z00_721 =
							BGl_makezd2classzd2fieldz00zz__objectz00(CNST_TABLE_REF(((long)
									50)), BGl_proc2081z00zzjas_profilez00,
							BGl_proc2080z00zzjas_profilez00, ((bool_t) 0), ((bool_t) 0),
							BFALSE, BFALSE, CNST_TABLE_REF(((long) 43)));
						VECTOR_SET(BgL_v1077z00_650, ((long) 7), BgL_arg1959z00_721);
					}
					BgL_arg1915z00_631 = BgL_v1077z00_650;
				}
				{	/* Jas/profile.scm 5 */
					obj_t BgL_v1078z00_731;

					BgL_v1078z00_731 = create_vector(((long) 0));
					BgL_arg1916z00_632 = BgL_v1078z00_731;
				}
				return (BGl__envz00zzjas_profilez00 =
					BGl_registerzd2classz12zc0zz__objectz00(CNST_TABLE_REF(((long) 51)),
						CNST_TABLE_REF(((long) 52)), BGl_objectz00zz__objectz00,
						((long) 12049), BGl_proc2084z00zzjas_profilez00,
						BGl_proc2083z00zzjas_profilez00, BFALSE,
						BGl_proc2082z00zzjas_profilez00, BFALSE, BgL_arg1915z00_631,
						BgL_arg1916z00_632), BUNSPEC);
		}}

	}



/* &<@anonymous:1921> */
	obj_t BGl_z62zc3z04anonymousza31921ze3ze5zzjas_profilez00(obj_t
		BgL_envz00_1089, obj_t BgL_new1056z00_1090)
	{
		{	/* Jas/profile.scm 5 */
			{
				BgL__envz00_bglt BgL_auxz00_2041;

				((((BgL__envz00_bglt) COBJECT(
								((BgL__envz00_bglt) BgL_new1056z00_1090)))->BgL_thisz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_jstringz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_has_clinitz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_clinitz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_resz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_namesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_lnamesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(((BgL__envz00_bglt)
									BgL_new1056z00_1090)))->BgL_linesz00) =
					((obj_t) BUNSPEC), BUNSPEC);
				BgL_auxz00_2041 = ((BgL__envz00_bglt) BgL_new1056z00_1090);
				return ((obj_t) BgL_auxz00_2041);
			}
		}

	}



/* &lambda1919 */
	BgL__envz00_bglt BGl_z62lambda1919z62zzjas_profilez00(obj_t BgL_envz00_1091)
	{
		{	/* Jas/profile.scm 5 */
			{	/* Jas/profile.scm 5 */
				BgL__envz00_bglt BgL_new1055z00_1156;

				BgL_new1055z00_1156 =
					((BgL__envz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
								BgL__envz00_bgl))));
				{	/* Jas/profile.scm 5 */
					long BgL_arg1920z00_1157;

					{	/* Jas/profile.scm 5 */
						long BgL_res2050z00_1158;

						BgL_res2050z00_1158 = BGL_CLASS_INDEX(BGl__envz00zzjas_profilez00);
						BgL_arg1920z00_1157 = BgL_res2050z00_1158;
					}
					BGL_OBJECT_CLASS_NUM_SET(
						((BgL_objectz00_bglt) BgL_new1055z00_1156), BgL_arg1920z00_1157);
				}
				return BgL_new1055z00_1156;
			}
		}

	}



/* &lambda1917 */
	BgL__envz00_bglt BGl_z62lambda1917z62zzjas_profilez00(obj_t BgL_envz00_1092,
		obj_t BgL_this1047z00_1093, obj_t BgL_jstring1048z00_1094,
		obj_t BgL_has_clinit1049z00_1095, obj_t BgL_clinit1050z00_1096,
		obj_t BgL_res1051z00_1097, obj_t BgL_names1052z00_1098,
		obj_t BgL_lnames1053z00_1099, obj_t BgL_lines1054z00_1100)
	{
		{	/* Jas/profile.scm 5 */
			{	/* Jas/profile.scm 5 */
				BgL__envz00_bglt BgL_new1071z00_1159;

				{	/* Jas/profile.scm 5 */
					BgL__envz00_bglt BgL_new1070z00_1160;

					BgL_new1070z00_1160 =
						((BgL__envz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL__envz00_bgl))));
					{	/* Jas/profile.scm 5 */
						long BgL_arg1918z00_1161;

						{	/* Jas/profile.scm 5 */
							long BgL_res2049z00_1162;

							BgL_res2049z00_1162 =
								BGL_CLASS_INDEX(BGl__envz00zzjas_profilez00);
							BgL_arg1918z00_1161 = BgL_res2049z00_1162;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1070z00_1160), BgL_arg1918z00_1161);
					}
					BgL_new1071z00_1159 = BgL_new1070z00_1160;
				}
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_thisz00) =
					((obj_t) BgL_this1047z00_1093), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_jstringz00) =
					((obj_t) BgL_jstring1048z00_1094), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->
						BgL_has_clinitz00) = ((obj_t) BgL_has_clinit1049z00_1095), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_clinitz00) =
					((obj_t) BgL_clinit1050z00_1096), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_resz00) =
					((obj_t) BgL_res1051z00_1097), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_namesz00) =
					((obj_t) BgL_names1052z00_1098), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_lnamesz00) =
					((obj_t) BgL_lnames1053z00_1099), BUNSPEC);
				((((BgL__envz00_bglt) COBJECT(BgL_new1071z00_1159))->BgL_linesz00) =
					((obj_t) BgL_lines1054z00_1100), BUNSPEC);
				return BgL_new1071z00_1159;
			}
		}

	}



/* &lambda1963 */
	obj_t BGl_z62lambda1963z62zzjas_profilez00(obj_t BgL_envz00_1101,
		obj_t BgL_oz00_1102, obj_t BgL_vz00_1103)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1102)))->BgL_linesz00) =
				((obj_t) BgL_vz00_1103), BUNSPEC);
		}

	}



/* &lambda1962 */
	obj_t BGl_z62lambda1962z62zzjas_profilez00(obj_t BgL_envz00_1104,
		obj_t BgL_oz00_1105)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1105)))->BgL_linesz00);
		}

	}



/* &lambda1958 */
	obj_t BGl_z62lambda1958z62zzjas_profilez00(obj_t BgL_envz00_1106,
		obj_t BgL_oz00_1107, obj_t BgL_vz00_1108)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1107)))->BgL_lnamesz00) =
				((obj_t) BgL_vz00_1108), BUNSPEC);
		}

	}



/* &lambda1957 */
	obj_t BGl_z62lambda1957z62zzjas_profilez00(obj_t BgL_envz00_1109,
		obj_t BgL_oz00_1110)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1110)))->BgL_lnamesz00);
		}

	}



/* &lambda1953 */
	obj_t BGl_z62lambda1953z62zzjas_profilez00(obj_t BgL_envz00_1111,
		obj_t BgL_oz00_1112, obj_t BgL_vz00_1113)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1112)))->BgL_namesz00) =
				((obj_t) BgL_vz00_1113), BUNSPEC);
		}

	}



/* &lambda1952 */
	obj_t BGl_z62lambda1952z62zzjas_profilez00(obj_t BgL_envz00_1114,
		obj_t BgL_oz00_1115)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1115)))->BgL_namesz00);
		}

	}



/* &lambda1947 */
	obj_t BGl_z62lambda1947z62zzjas_profilez00(obj_t BgL_envz00_1116,
		obj_t BgL_oz00_1117, obj_t BgL_vz00_1118)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1117)))->BgL_resz00) =
				((obj_t) BgL_vz00_1118), BUNSPEC);
		}

	}



/* &lambda1946 */
	obj_t BGl_z62lambda1946z62zzjas_profilez00(obj_t BgL_envz00_1119,
		obj_t BgL_oz00_1120)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1120)))->BgL_resz00);
		}

	}



/* &lambda1942 */
	obj_t BGl_z62lambda1942z62zzjas_profilez00(obj_t BgL_envz00_1121,
		obj_t BgL_oz00_1122, obj_t BgL_vz00_1123)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1122)))->BgL_clinitz00) =
				((obj_t) BgL_vz00_1123), BUNSPEC);
		}

	}



/* &lambda1941 */
	obj_t BGl_z62lambda1941z62zzjas_profilez00(obj_t BgL_envz00_1124,
		obj_t BgL_oz00_1125)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1125)))->BgL_clinitz00);
		}

	}



/* &lambda1937 */
	obj_t BGl_z62lambda1937z62zzjas_profilez00(obj_t BgL_envz00_1126,
		obj_t BgL_oz00_1127, obj_t BgL_vz00_1128)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1127)))->BgL_has_clinitz00) =
				((obj_t) BgL_vz00_1128), BUNSPEC);
		}

	}



/* &lambda1936 */
	obj_t BGl_z62lambda1936z62zzjas_profilez00(obj_t BgL_envz00_1129,
		obj_t BgL_oz00_1130)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1130)))->BgL_has_clinitz00);
		}

	}



/* &lambda1932 */
	obj_t BGl_z62lambda1932z62zzjas_profilez00(obj_t BgL_envz00_1131,
		obj_t BgL_oz00_1132, obj_t BgL_vz00_1133)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1132)))->BgL_jstringz00) =
				((obj_t) BgL_vz00_1133), BUNSPEC);
		}

	}



/* &lambda1931 */
	obj_t BGl_z62lambda1931z62zzjas_profilez00(obj_t BgL_envz00_1134,
		obj_t BgL_oz00_1135)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1135)))->BgL_jstringz00);
		}

	}



/* &lambda1927 */
	obj_t BGl_z62lambda1927z62zzjas_profilez00(obj_t BgL_envz00_1136,
		obj_t BgL_oz00_1137, obj_t BgL_vz00_1138)
	{
		{	/* Jas/profile.scm 5 */
			return
				((((BgL__envz00_bglt) COBJECT(
							((BgL__envz00_bglt) BgL_oz00_1137)))->BgL_thisz00) =
				((obj_t) BgL_vz00_1138), BUNSPEC);
		}

	}



/* &lambda1926 */
	obj_t BGl_z62lambda1926z62zzjas_profilez00(obj_t BgL_envz00_1139,
		obj_t BgL_oz00_1140)
	{
		{	/* Jas/profile.scm 5 */
			return
				(((BgL__envz00_bglt) COBJECT(
						((BgL__envz00_bglt) BgL_oz00_1140)))->BgL_thisz00);
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzjas_profilez00()
	{
		{	/* Jas/profile.scm 1 */
			return
				BGl_modulezd2initializa7ationz75zzjas_libz00(((long) 267157983),
				BSTRING_TO_STRING(BGl_string2085z00zzjas_profilez00));
		}

	}

#ifdef __cplusplus
}
#endif
