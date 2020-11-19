/*===========================================================================*/
/*   (Tools/error.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/error.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_z62exceptionz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
	}                      *BgL_z62exceptionz62_bglt;

	typedef struct BgL_z62errorz62_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_fnamez00;
		obj_t BgL_locationz00;
		obj_t BgL_stackz00;
		obj_t BgL_procz00;
		obj_t BgL_msgz00;
		obj_t BgL_objz00;
	}                  *BgL_z62errorz62_bglt;


	static obj_t BGl_z62internalzd2errorzb0zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62leavezd2functionzb0zztools_errorz00(obj_t);
	extern obj_t BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00;
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	static obj_t BGl_za2sfunzd2stackza2zd2zztools_errorz00 = BUNSPEC;
	static obj_t BGl_objectzd2initzd2zztools_errorz00();
	static obj_t BGl_z62zc3z04anonymousza31304ze3ze5zztools_errorz00(obj_t);
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_warningzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t BGl_nozd2warningzd2zztools_errorz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31309ze3ze5zztools_errorz00(obj_t,
		obj_t);
	static obj_t BGl_z62nozd2warningzb0zztools_errorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31256ze3ze5zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_errorzd2notifyzd2zz__errorz00(obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_errorz00();
	static obj_t BGl_z62userzd2warningzb0zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_currentzd2functionzd2zztools_errorz00();
	extern obj_t BGl_za2currentzd2passza2zd2zzengine_passz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_z62userzd2errorzf2locationz42zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	BGL_IMPORT obj_t
		BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(int);
	static obj_t BGl_z62userzd2warningzf2locationz42zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t BGl_za2tracezd2portza2zd2zztools_tracez00;
	static obj_t BGl_sharpzd2symbolzd2zztools_errorz00 = BUNSPEC;
	static obj_t BGl_z62userzd2errorzd2notifyz62zztools_errorz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT int BGl_bigloozd2warningzd2zz__paramz00();
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_errorz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t,
		obj_t, obj_t, obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00;
	static obj_t BGl_toplevelzd2initzd2zztools_errorz00();
	BGL_EXPORTED_DECL obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zztools_errorz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_leavezd2functionzd2zztools_errorz00();
	extern obj_t BGl_shapez00zztools_shapez00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31313ze3ze5zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_errorzf2locationzf2zz__errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_zc3z04exitza31306ze3ze70z60zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
		BUNSPEC;
	BGL_IMPORT obj_t BGl_bigloozd2warningzd2setz12z12zz__paramz00(int);
	static obj_t BGl_z62enterzd2functionzb0zztools_errorz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31264ze3ze5zztools_errorz00(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	BGL_IMPORT obj_t BGl_z62errorz62zz__objectz00;
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t,
		obj_t);
	static obj_t BGl_cnstzd2initzd2zztools_errorz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_errorz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_errorz00();
	static obj_t BGl_z62zc3z04anonymousza31287ze3ze5zztools_errorz00(obj_t);
	static obj_t BGl_withzd2dumpzd2stackz00zztools_errorz00(obj_t);
	BGL_IMPORT int BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
	BGL_EXPORTED_DECL obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_withzd2exceptionzd2handlerz00zz__errorz00(obj_t, obj_t);
	static obj_t BGl_z62currentzd2functionzb0zztools_errorz00(obj_t);
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t BGl_z62userzd2errorzb0zztools_errorz00(obj_t, obj_t, obj_t,
		obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2errorzd2notifyzd2envzd2zztools_errorz00,
		BgL_bgl_za762userza7d2errorza71538za7,
		BGl_z62userzd2errorzd2notifyz62zztools_errorz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_leavezd2functionzd2envz00zztools_errorz00,
		BgL_bgl_za762leaveza7d2funct1539z00,
		BGl_z62leavezd2functionzb0zztools_errorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_currentzd2functionzd2envz00zztools_errorz00,
		BgL_bgl_za762currentza7d2fun1540z00,
		BGl_z62currentzd2functionzb0zztools_errorz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_internalzd2errorzd2envz00zztools_errorz00,
		BgL_bgl_za762internalza7d2er1541z00,
		BGl_z62internalzd2errorzb0zztools_errorz00, 0L, BUNSPEC, 3);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2warningzf2locationzd2envzf2zztools_errorz00,
		BgL_bgl_za762userza7d2warnin1542z00,
		BGl_z62userzd2warningzf2locationz42zztools_errorz00, 0L, BUNSPEC, 4);
	      DEFINE_STRING(BGl_string1521z00zztools_errorz00,
		BgL_bgl_string1521za700za7za7t1543za7, "#", 1);
	      DEFINE_STRING(BGl_string1522z00zztools_errorz00,
		BgL_bgl_string1522za700za7za7t1544za7, "*** ERROR: ", 11);
	      DEFINE_STRING(BGl_string1523z00zztools_errorz00,
		BgL_bgl_string1523za700za7za7t1545za7, ":", 1);
	      DEFINE_STRING(BGl_string1524z00zztools_errorz00,
		BgL_bgl_string1524za700za7za7t1546za7, "*** INTERNAL-ERROR in pass: ", 28);
	      DEFINE_STRING(BGl_string1525z00zztools_errorz00,
		BgL_bgl_string1525za700za7za7t1547za7,
		"(Would you, please, send this error report and the source file to", 65);
	      DEFINE_STRING(BGl_string1526z00zztools_errorz00,
		BgL_bgl_string1526za700za7za7t1548za7, " [", 2);
	      DEFINE_STRING(BGl_string1527z00zztools_errorz00,
		BgL_bgl_string1527za700za7za7t1549za7, "], thank you.)", 14);
	      DEFINE_STRING(BGl_string1528z00zztools_errorz00,
		BgL_bgl_string1528za700za7za7t1550za7, " -- ", 4);
	      DEFINE_STRING(BGl_string1529z00zztools_errorz00,
		BgL_bgl_string1529za700za7za7t1551za7, "*** ERROR:", 10);
	      DEFINE_STRING(BGl_string1530z00zztools_errorz00,
		BgL_bgl_string1530za700za7za7t1552za7, " ...", 4);
	      DEFINE_STRING(BGl_string1531z00zztools_errorz00,
		BgL_bgl_string1531za700za7za7t1553za7, "tools_error", 11);
	      DEFINE_STRING(BGl_string1532z00zztools_errorz00,
		BgL_bgl_string1532za700za7za7t1554za7, "location (top-level) ", 21);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_nozd2warningzd2envz00zztools_errorz00,
		BgL_bgl_za762noza7d2warningza71555za7,
		BGl_z62nozd2warningzb0zztools_errorz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2warningzd2envz00zztools_errorz00,
		BgL_bgl_za762userza7d2warnin1556z00,
		BGl_z62userzd2warningzb0zztools_errorz00, 0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_userzd2errorzd2envz00zztools_errorz00,
		BgL_bgl_za762userza7d2errorza71557za7, va_generic_entry,
		BGl_z62userzd2errorzb0zztools_errorz00, BUNSPEC, -4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_enterzd2functionzd2envz00zztools_errorz00,
		BgL_bgl_za762enterza7d2funct1558z00,
		BGl_z62enterzd2functionzb0zztools_errorz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_userzd2errorzf2locationzd2envzf2zztools_errorz00,
		BgL_bgl_za762userza7d2errorza71559za7, va_generic_entry,
		BGl_z62userzd2errorzf2locationz42zztools_errorz00, BUNSPEC, -5);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2sfunzd2stackza2zd2zztools_errorz00));
		     ADD_ROOT((void *) (&BGl_sharpzd2symbolzd2zztools_errorz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_errorz00));
		   
			 ADD_ROOT((void
				*) (&BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long
		BgL_checksumz00_1859, char *BgL_fromz00_1860)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_errorz00))
				{
					BGl_requirezd2initializa7ationz75zztools_errorz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_errorz00();
					BGl_libraryzd2moduleszd2initz00zztools_errorz00();
					BGl_cnstzd2initzd2zztools_errorz00();
					BGl_importedzd2moduleszd2initz00zztools_errorz00();
					return BGl_toplevelzd2initzd2zztools_errorz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_error");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "tools_error");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			{	/* Tools/error.scm 15 */
				obj_t BgL_cportz00_1810;

				{	/* Tools/error.scm 15 */
					obj_t BgL_stringz00_1818;

					BgL_stringz00_1818 = BGl_string1532z00zztools_errorz00;
					{	/* Tools/error.scm 15 */
						obj_t BgL_startz00_1819;

						BgL_startz00_1819 = BINT(((long) 0));
						{	/* Tools/error.scm 15 */
							obj_t BgL_endz00_1820;

							BgL_endz00_1820 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_1818)));
							{	/* Tools/error.scm 15 */

								BgL_cportz00_1810 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_1818, BgL_startz00_1819, BgL_endz00_1820);
				}}}}
				{
					long BgL_iz00_1811;

					BgL_iz00_1811 = ((long) 1);
				BgL_loopz00_1812:
					if ((BgL_iz00_1811 == ((long) -1)))
						{	/* Tools/error.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/error.scm 15 */
							{	/* Tools/error.scm 15 */
								obj_t BgL_arg1536z00_1814;

								{	/* Tools/error.scm 15 */

									{	/* Tools/error.scm 15 */
										obj_t BgL_locationz00_1816;

										BgL_locationz00_1816 = BBOOL(((bool_t) 0));
										{	/* Tools/error.scm 15 */

											BgL_arg1536z00_1814 =
												BGl_readz00zz__readerz00(BgL_cportz00_1810,
												BgL_locationz00_1816);
										}
									}
								}
								{	/* Tools/error.scm 15 */
									int BgL_tmpz00_1892;

									BgL_tmpz00_1892 = (int) (BgL_iz00_1811);
									CNST_TABLE_SET(BgL_tmpz00_1892, BgL_arg1536z00_1814);
							}}
							{	/* Tools/error.scm 15 */
								int BgL_auxz00_1817;

								BgL_auxz00_1817 = (int) ((BgL_iz00_1811 - ((long) 1)));
								{
									long BgL_iz00_1897;

									BgL_iz00_1897 = (long) (BgL_auxz00_1817);
									BgL_iz00_1811 = BgL_iz00_1897;
									goto BgL_loopz00_1812;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 = BINT(((long) 0));
			BGl_za2sfunzd2stackza2zd2zztools_errorz00 = CNST_TABLE_REF(((long) 0));
			return (BGl_sharpzd2symbolzd2zztools_errorz00 =
				bstring_to_symbol(BGl_string1521z00zztools_errorz00), BUNSPEC);
		}

	}



/* internal-error */
	BGL_EXPORTED_DEF obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t
		BgL_procz00_17, obj_t BgL_mesz00_18, obj_t BgL_objz00_19)
	{
		{	/* Tools/error.scm 45 */
			if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
				{	/* Tools/error.scm 47 */
					obj_t BgL_port1229z00_1375;

					BgL_port1229z00_1375 = BGl_za2tracezd2portza2zd2zztools_tracez00;
					bgl_display_string(BGl_string1522z00zztools_errorz00,
						BgL_port1229z00_1375);
					bgl_display_obj(BgL_procz00_17, BgL_port1229z00_1375);
					bgl_display_string(BGl_string1523z00zztools_errorz00,
						BgL_port1229z00_1375);
					bgl_display_obj(BgL_mesz00_18, BgL_port1229z00_1375);
					bgl_display_string(BGl_string1523z00zztools_errorz00,
						BgL_port1229z00_1375);
					bgl_display_obj(BgL_objz00_19, BgL_port1229z00_1375);
					bgl_display_char(((unsigned char) 10), BgL_port1229z00_1375);
				}
			else
				{	/* Tools/error.scm 46 */
					BFALSE;
				}
			{	/* Tools/error.scm 48 */
				obj_t BgL_port1230z00_1376;

				{	/* Tools/error.scm 48 */
					obj_t BgL_res1494z00_1649;

					{	/* Tools/error.scm 48 */
						obj_t BgL_tmpz00_1912;

						BgL_tmpz00_1912 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1494z00_1649 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1912);
					}
					BgL_port1230z00_1376 = BgL_res1494z00_1649;
				}
				bgl_display_string(BGl_string1524z00zztools_errorz00,
					BgL_port1230z00_1376);
				bgl_display_obj(BGl_za2currentzd2passza2zd2zzengine_passz00,
					BgL_port1230z00_1376);
				bgl_display_char(((unsigned char) 10), BgL_port1230z00_1376);
			}
			{	/* Tools/error.scm 50 */
				obj_t BgL_port1231z00_1377;

				{	/* Tools/error.scm 50 */
					obj_t BgL_res1495z00_1654;

					{	/* Tools/error.scm 50 */
						obj_t BgL_tmpz00_1918;

						BgL_tmpz00_1918 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1495z00_1654 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_1918);
					}
					BgL_port1231z00_1377 = BgL_res1495z00_1654;
				}
				bgl_display_string(BGl_string1525z00zztools_errorz00,
					BgL_port1231z00_1377);
				bgl_display_char(((unsigned char) 10), BgL_port1231z00_1377);
				bgl_display_obj(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
					BgL_port1231z00_1377);
				bgl_display_string(BGl_string1526z00zztools_errorz00,
					BgL_port1231z00_1377);
				bgl_display_obj(BGl_za2bigloozd2emailza2zd2zzengine_paramz00,
					BgL_port1231z00_1377);
				bgl_display_string(BGl_string1527z00zztools_errorz00,
					BgL_port1231z00_1377);
				bgl_display_char(((unsigned char) 10), BgL_port1231z00_1377);
			}
			BGl_errorz00zz__errorz00(BgL_procz00_17, BgL_mesz00_18, BgL_objz00_19);
			return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 1)));
		}

	}



/* &internal-error */
	obj_t BGl_z62internalzd2errorzb0zztools_errorz00(obj_t BgL_envz00_1740,
		obj_t BgL_procz00_1741, obj_t BgL_mesz00_1742, obj_t BgL_objz00_1743)
	{
		{	/* Tools/error.scm 45 */
			return
				BGl_internalzd2errorzd2zztools_errorz00(BgL_procz00_1741,
				BgL_mesz00_1742, BgL_objz00_1743);
		}

	}



/* with-dump-stack */
	obj_t BGl_withzd2dumpzd2stackz00zztools_errorz00(obj_t BgL_thunkz00_20)
	{
		{	/* Tools/error.scm 60 */
			if (CBOOL(BGl_za2compilerzd2stackzd2debugzf3za2zf3zzengine_paramz00))
				{	/* Tools/error.scm 61 */
					return PROCEDURE_L_ENTRY(BgL_thunkz00_20) (BgL_thunkz00_20);
				}
			else
				{	/* Tools/error.scm 63 */
					int BgL_stz00_1378;

					BgL_stz00_1378 = BGl_bigloozd2tracezd2stackzd2depthzd2zz__paramz00();
					BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(
						(int) (((long) 0)));
					{	/* Tools/error.scm 65 */
						obj_t BgL_exitd1100z00_1379;

						BgL_exitd1100z00_1379 = BGL_EXITD_TOP_AS_OBJ();
						{	/* Tools/error.scm 67 */
							obj_t BgL_zc3z04anonymousza31256ze3z87_1744;

							BgL_zc3z04anonymousza31256ze3z87_1744 =
								MAKE_FX_PROCEDURE
								(BGl_z62zc3z04anonymousza31256ze3ze5zztools_errorz00,
								(int) (((long) 0)), (int) (((long) 1)));
							PROCEDURE_SET(BgL_zc3z04anonymousza31256ze3z87_1744,
								(int) (((long) 0)), BINT(BgL_stz00_1378));
							BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
								(BgL_exitd1100z00_1379, BgL_zc3z04anonymousza31256ze3z87_1744);
							{	/* Tools/error.scm 66 */
								obj_t BgL_tmp1102z00_1381;

								BgL_tmp1102z00_1381 =
									PROCEDURE_L_ENTRY(BgL_thunkz00_20) (BgL_thunkz00_20);
								BGl_exitdzd2popzd2protectz12z12zz__bexitz00
									(BgL_exitd1100z00_1379);
								BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00
									(BgL_stz00_1378);
								return BgL_tmp1102z00_1381;
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1256> */
	obj_t BGl_z62zc3z04anonymousza31256ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1745)
	{
		{	/* Tools/error.scm 65 */
			return
				BGl_bigloozd2tracezd2stackzd2depthzd2setz12z12zz__paramz00(CINT
				(PROCEDURE_REF(BgL_envz00_1745, (int) (((long) 0)))));
		}

	}



/* user-warning/location */
	BGL_EXPORTED_DEF obj_t BGl_userzd2warningzf2locationz20zztools_errorz00(obj_t
		BgL_locz00_21, obj_t BgL_procz00_22, obj_t BgL_mesz00_23,
		obj_t BgL_objz00_24)
	{
		{	/* Tools/error.scm 72 */
			{	/* Tools/error.scm 73 */
				bool_t BgL_test1564z00_1957;

				{	/* Tools/error.scm 73 */
					int BgL_arg1282z00_1400;

					BgL_arg1282z00_1400 = BGl_bigloozd2warningzd2zz__paramz00();
					BgL_test1564z00_1957 = ((long) (BgL_arg1282z00_1400) > ((long) 0));
				}
				if (BgL_test1564z00_1957)
					{	/* Tools/error.scm 76 */
						obj_t BgL_zc3z04anonymousza31264ze3z87_1747;

						{
							int BgL_tmpz00_1961;

							BgL_tmpz00_1961 = (int) (((long) 4));
							BgL_zc3z04anonymousza31264ze3z87_1747 =
								MAKE_L_PROCEDURE
								(BGl_z62zc3z04anonymousza31264ze3ze5zztools_errorz00,
								BgL_tmpz00_1961);
						}
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31264ze3z87_1747,
							(int) (((long) 0)), BgL_objz00_24);
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31264ze3z87_1747,
							(int) (((long) 1)), BgL_mesz00_23);
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31264ze3z87_1747,
							(int) (((long) 2)), BgL_procz00_22);
						PROCEDURE_L_SET(BgL_zc3z04anonymousza31264ze3z87_1747,
							(int) (((long) 3)), BgL_locz00_21);
						return
							BGl_withzd2dumpzd2stackz00zztools_errorz00
							(BgL_zc3z04anonymousza31264ze3z87_1747);
					}
				else
					{	/* Tools/error.scm 73 */
						return BFALSE;
					}
			}
		}

	}



/* &user-warning/location */
	obj_t BGl_z62userzd2warningzf2locationz42zztools_errorz00(obj_t
		BgL_envz00_1748, obj_t BgL_locz00_1749, obj_t BgL_procz00_1750,
		obj_t BgL_mesz00_1751, obj_t BgL_objz00_1752)
	{
		{	/* Tools/error.scm 72 */
			return
				BGl_userzd2warningzf2locationz20zztools_errorz00(BgL_locz00_1749,
				BgL_procz00_1750, BgL_mesz00_1751, BgL_objz00_1752);
		}

	}



/* &<@anonymous:1264> */
	obj_t BGl_z62zc3z04anonymousza31264ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1753)
	{
		{	/* Tools/error.scm 75 */
			{	/* Tools/error.scm 76 */
				obj_t BgL_objz00_1754;
				obj_t BgL_mesz00_1755;
				obj_t BgL_procz00_1756;
				obj_t BgL_locz00_1757;

				BgL_objz00_1754 = PROCEDURE_L_REF(BgL_envz00_1753, (int) (((long) 0)));
				BgL_mesz00_1755 = PROCEDURE_L_REF(BgL_envz00_1753, (int) (((long) 1)));
				BgL_procz00_1756 = PROCEDURE_L_REF(BgL_envz00_1753, (int) (((long) 2)));
				BgL_locz00_1757 = PROCEDURE_L_REF(BgL_envz00_1753, (int) (((long) 3)));
				{	/* Tools/error.scm 76 */
					bool_t BgL_test1566z00_1982;

					if (STRUCTP(BgL_locz00_1757))
						{	/* Tools/error.scm 76 */
							BgL_test1566z00_1982 =
								(STRUCT_KEY(BgL_locz00_1757) == CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* Tools/error.scm 76 */
							BgL_test1566z00_1982 = ((bool_t) 0);
						}
					if (BgL_test1566z00_1982)
						{	/* Tools/error.scm 78 */
							obj_t BgL_arg1268z00_1823;
							obj_t BgL_arg1270z00_1824;

							BgL_arg1268z00_1823 =
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_1757);
							BgL_arg1270z00_1824 =
								STRUCT_REF(BgL_locz00_1757, (int) (((long) 1)));
							{	/* Tools/error.scm 78 */
								obj_t BgL_list1271z00_1825;

								{	/* Tools/error.scm 78 */
									obj_t BgL_arg1273z00_1826;

									{	/* Tools/error.scm 78 */
										obj_t BgL_arg1274z00_1827;

										{	/* Tools/error.scm 78 */
											obj_t BgL_arg1275z00_1828;

											BgL_arg1275z00_1828 =
												MAKE_YOUNG_PAIR(BgL_objz00_1754, BNIL);
											BgL_arg1274z00_1827 =
												MAKE_YOUNG_PAIR(BGl_string1528z00zztools_errorz00,
												BgL_arg1275z00_1828);
										}
										BgL_arg1273z00_1826 =
											MAKE_YOUNG_PAIR(BgL_mesz00_1755, BgL_arg1274z00_1827);
									}
									BgL_list1271z00_1825 =
										MAKE_YOUNG_PAIR(BgL_procz00_1756, BgL_arg1273z00_1826);
								}
								return
									BGl_warningzf2locationzf2zz__errorz00(BgL_arg1268z00_1823,
									BgL_arg1270z00_1824, BgL_list1271z00_1825);
							}
						}
					else
						{	/* Tools/error.scm 77 */
							obj_t BgL_list1276z00_1829;

							{	/* Tools/error.scm 77 */
								obj_t BgL_arg1277z00_1830;

								{	/* Tools/error.scm 77 */
									obj_t BgL_arg1280z00_1831;

									{	/* Tools/error.scm 77 */
										obj_t BgL_arg1281z00_1832;

										BgL_arg1281z00_1832 =
											MAKE_YOUNG_PAIR(BgL_objz00_1754, BNIL);
										BgL_arg1280z00_1831 =
											MAKE_YOUNG_PAIR(BGl_string1528z00zztools_errorz00,
											BgL_arg1281z00_1832);
									}
									BgL_arg1277z00_1830 =
										MAKE_YOUNG_PAIR(BgL_mesz00_1755, BgL_arg1280z00_1831);
								}
								BgL_list1276z00_1829 =
									MAKE_YOUNG_PAIR(BgL_procz00_1756, BgL_arg1277z00_1830);
							}
							return BGl_warningz00zz__errorz00(BgL_list1276z00_1829);
						}
				}
			}
		}

	}



/* user-warning */
	BGL_EXPORTED_DEF obj_t BGl_userzd2warningzd2zztools_errorz00(obj_t
		BgL_procz00_25, obj_t BgL_mesz00_26, obj_t BgL_objz00_27)
	{
		{	/* Tools/error.scm 85 */
			return
				BGl_userzd2warningzf2locationz20zztools_errorz00
				(BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_27),
				BgL_procz00_25, BgL_mesz00_26, BgL_objz00_27);
		}

	}



/* &user-warning */
	obj_t BGl_z62userzd2warningzb0zztools_errorz00(obj_t BgL_envz00_1758,
		obj_t BgL_procz00_1759, obj_t BgL_mesz00_1760, obj_t BgL_objz00_1761)
	{
		{	/* Tools/error.scm 85 */
			return
				BGl_userzd2warningzd2zztools_errorz00(BgL_procz00_1759, BgL_mesz00_1760,
				BgL_objz00_1761);
		}

	}



/* no-warning */
	BGL_EXPORTED_DEF obj_t BGl_nozd2warningzd2zztools_errorz00(obj_t
		BgL_thunkz00_28)
	{
		{	/* Tools/error.scm 91 */
			{	/* Tools/error.scm 92 */
				int BgL_warningz00_1402;

				BgL_warningz00_1402 = BGl_bigloozd2warningzd2zz__paramz00();
				BGl_bigloozd2warningzd2setz12z12zz__paramz00((int) (((long) 0)));
				{	/* Tools/error.scm 94 */
					obj_t BgL_valz00_1403;

					BgL_valz00_1403 =
						PROCEDURE_ENTRY(BgL_thunkz00_28) (BgL_thunkz00_28, BEOA);
					BGl_bigloozd2warningzd2setz12z12zz__paramz00(BgL_warningz00_1402);
					return BgL_valz00_1403;
				}
			}
		}

	}



/* &no-warning */
	obj_t BGl_z62nozd2warningzb0zztools_errorz00(obj_t BgL_envz00_1762,
		obj_t BgL_thunkz00_1763)
	{
		{	/* Tools/error.scm 91 */
			return BGl_nozd2warningzd2zztools_errorz00(BgL_thunkz00_1763);
		}

	}



/* user-error-notify */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzd2notifyz00zztools_errorz00(obj_t
		BgL_ez00_29, obj_t BgL_procz00_30)
	{
		{	/* Tools/error.scm 101 */
			if (BGl_isazf3zf3zz__objectz00(BgL_ez00_29, BGl_z62errorz62zz__objectz00))
				{	/* Tools/error.scm 105 */
					obj_t BgL_zc3z04anonymousza31287ze3z87_1764;

					{
						int BgL_tmpz00_2014;

						BgL_tmpz00_2014 = (int) (((long) 2));
						BgL_zc3z04anonymousza31287ze3z87_1764 =
							MAKE_L_PROCEDURE
							(BGl_z62zc3z04anonymousza31287ze3ze5zztools_errorz00,
							BgL_tmpz00_2014);
					}
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31287ze3z87_1764,
						(int) (((long) 0)), BgL_ez00_29);
					PROCEDURE_L_SET(BgL_zc3z04anonymousza31287ze3z87_1764,
						(int) (((long) 1)), BgL_procz00_30);
					return
						BGl_withzd2dumpzd2stackz00zztools_errorz00
						(BgL_zc3z04anonymousza31287ze3z87_1764);
				}
			else
				{	/* Tools/error.scm 102 */
					return BFALSE;
				}
		}

	}



/* &user-error-notify */
	obj_t BGl_z62userzd2errorzd2notifyz62zztools_errorz00(obj_t BgL_envz00_1765,
		obj_t BgL_ez00_1766, obj_t BgL_procz00_1767)
	{
		{	/* Tools/error.scm 101 */
			return
				BGl_userzd2errorzd2notifyz00zztools_errorz00(BgL_ez00_1766,
				BgL_procz00_1767);
		}

	}



/* &<@anonymous:1287> */
	obj_t BGl_z62zc3z04anonymousza31287ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1768)
	{
		{	/* Tools/error.scm 104 */
			{	/* Tools/error.scm 105 */
				obj_t BgL_ez00_1769;
				obj_t BgL_procz00_1770;

				BgL_ez00_1769 = PROCEDURE_L_REF(BgL_envz00_1768, (int) (((long) 0)));
				BgL_procz00_1770 =
					((obj_t) PROCEDURE_L_REF(BgL_envz00_1768, (int) (((long) 1))));
				{	/* Tools/error.scm 106 */
					obj_t BgL_locz00_1833;

					{	/* Tools/error.scm 106 */
						obj_t BgL_arg1292z00_1834;

						BgL_arg1292z00_1834 =
							(((BgL_z62errorz62_bglt) COBJECT(
									((BgL_z62errorz62_bglt) BgL_ez00_1769)))->BgL_objz00);
						BgL_locz00_1833 =
							BGl_findzd2locationzd2zztools_locationz00(BgL_arg1292z00_1834);
					}
					BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
						ADDFX(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
						BINT(((long) 1)));
					{	/* Tools/error.scm 108 */
						bool_t BgL_test1569z00_2033;

						if (STRUCTP(BgL_locz00_1833))
							{	/* Tools/error.scm 108 */
								BgL_test1569z00_2033 =
									(STRUCT_KEY(BgL_locz00_1833) == CNST_TABLE_REF(((long) 1)));
							}
						else
							{	/* Tools/error.scm 108 */
								BgL_test1569z00_2033 = ((bool_t) 0);
							}
						if (BgL_test1569z00_2033)
							{	/* Tools/error.scm 109 */
								BgL_z62errorz62_bglt BgL_arg1289z00_1835;

								{	/* Tools/error.scm 109 */
									BgL_z62errorz62_bglt BgL_new1104z00_1836;

									{	/* Tools/error.scm 111 */
										BgL_z62errorz62_bglt BgL_new1109z00_1837;

										BgL_new1109z00_1837 =
											((BgL_z62errorz62_bglt) BOBJECT(GC_MALLOC(sizeof(struct
														BgL_z62errorz62_bgl))));
										{	/* Tools/error.scm 111 */
											long BgL_arg1290z00_1838;

											{	/* Tools/error.scm 111 */
												long BgL_res1502z00_1839;

												BgL_res1502z00_1839 =
													BGL_CLASS_INDEX(BGl_z62errorz62zz__objectz00);
												BgL_arg1290z00_1838 = BgL_res1502z00_1839;
											}
											BGL_OBJECT_CLASS_NUM_SET(
												((BgL_objectz00_bglt) BgL_new1109z00_1837),
												BgL_arg1290z00_1838);
										}
										BgL_new1104z00_1836 = BgL_new1109z00_1837;
									}
									((((BgL_z62exceptionz62_bglt) COBJECT(
													((BgL_z62exceptionz62_bglt) BgL_new1104z00_1836)))->
											BgL_fnamez00) =
										((obj_t)
											BGl_locationzd2fullzd2fnamez00zztools_locationz00
											(BgL_locz00_1833)), BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1104z00_1836)))->BgL_locationz00) =
										((obj_t) STRUCT_REF(BgL_locz00_1833, (int) (((long) 1)))),
										BUNSPEC);
									((((BgL_z62exceptionz62_bglt)
												COBJECT(((BgL_z62exceptionz62_bglt)
														BgL_new1104z00_1836)))->BgL_stackz00) =
										((obj_t) (((BgL_z62exceptionz62_bglt)
													COBJECT(((BgL_z62exceptionz62_bglt) BgL_ez00_1769)))->
												BgL_stackz00)), BUNSPEC);
									{
										obj_t BgL_auxz00_2054;

										{	/* Tools/error.scm 110 */
											obj_t BgL__ortest_1110z00_1840;

											BgL__ortest_1110z00_1840 =
												(((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_ez00_1769)))->
												BgL_procz00);
											if (CBOOL(BgL__ortest_1110z00_1840))
												{	/* Tools/error.scm 110 */
													BgL_auxz00_2054 = BgL__ortest_1110z00_1840;
												}
											else
												{	/* Tools/error.scm 110 */
													BgL_auxz00_2054 = BgL_procz00_1770;
												}
										}
										((((BgL_z62errorz62_bglt) COBJECT(BgL_new1104z00_1836))->
												BgL_procz00) = ((obj_t) BgL_auxz00_2054), BUNSPEC);
									}
									((((BgL_z62errorz62_bglt) COBJECT(BgL_new1104z00_1836))->
											BgL_msgz00) =
										((obj_t) (((BgL_z62errorz62_bglt)
													COBJECT(((BgL_z62errorz62_bglt) (
																(BgL_z62exceptionz62_bglt) BgL_ez00_1769))))->
												BgL_msgz00)), BUNSPEC);
									((((BgL_z62errorz62_bglt) COBJECT(BgL_new1104z00_1836))->
											BgL_objz00) =
										((obj_t) (((BgL_z62errorz62_bglt)
													COBJECT(((BgL_z62errorz62_bglt) (
																(BgL_z62exceptionz62_bglt) BgL_ez00_1769))))->
												BgL_objz00)), BUNSPEC);
									BgL_arg1289z00_1835 = BgL_new1104z00_1836;
								}
								return
									BGl_errorzd2notifyzd2zz__errorz00(
									((obj_t) BgL_arg1289z00_1835));
							}
						else
							{	/* Tools/error.scm 108 */
								if (CBOOL(
										(((BgL_z62errorz62_bglt) COBJECT(
													((BgL_z62errorz62_bglt) BgL_ez00_1769)))->
											BgL_procz00)))
									{	/* Tools/error.scm 114 */
										BFALSE;
									}
								else
									{	/* Tools/error.scm 114 */
										((((BgL_z62errorz62_bglt) COBJECT(
														((BgL_z62errorz62_bglt) BgL_ez00_1769)))->
												BgL_procz00) = ((obj_t) BgL_procz00_1770), BUNSPEC);
									}
								return BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1769);
							}
					}
				}
			}
		}

	}



/* user-error */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t
		BgL_procz00_31, obj_t BgL_mesz00_32, obj_t BgL_objz00_33,
		obj_t BgL_continuez00_34)
	{
		{	/* Tools/error.scm 120 */
			if (PAIRP(BgL_continuez00_34))
				{	/* Tools/error.scm 122 */
					obj_t BgL_arg1295z00_1422;
					obj_t BgL_arg1296z00_1423;
					obj_t BgL_arg1297z00_1424;

					BgL_arg1295z00_1422 =
						BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_33);
					BgL_arg1296z00_1423 = BGl_shapez00zztools_shapez00(BgL_objz00_33);
					BgL_arg1297z00_1424 = CAR(BgL_continuez00_34);
					{	/* Tools/error.scm 122 */
						obj_t BgL_list1298z00_1425;

						BgL_list1298z00_1425 = MAKE_YOUNG_PAIR(BgL_arg1297z00_1424, BNIL);
						return
							BGl_userzd2errorzf2locationz20zztools_errorz00
							(BgL_arg1295z00_1422, BgL_procz00_31, BgL_mesz00_32,
							BgL_arg1296z00_1423, BgL_list1298z00_1425);
					}
				}
			else
				{	/* Tools/error.scm 121 */
					return
						BGl_userzd2errorzf2locationz20zztools_errorz00
						(BGl_findzd2locationzd2zztools_locationz00(BgL_objz00_33),
						BgL_procz00_31, BgL_mesz00_32,
						BGl_shapez00zztools_shapez00(BgL_objz00_33), BNIL);
				}
		}

	}



/* &user-error */
	obj_t BGl_z62userzd2errorzb0zztools_errorz00(obj_t BgL_envz00_1771,
		obj_t BgL_procz00_1772, obj_t BgL_mesz00_1773, obj_t BgL_objz00_1774,
		obj_t BgL_continuez00_1775)
	{
		{	/* Tools/error.scm 120 */
			return
				BGl_userzd2errorzd2zztools_errorz00(BgL_procz00_1772, BgL_mesz00_1773,
				BgL_objz00_1774, BgL_continuez00_1775);
		}

	}



/* user-error/location */
	BGL_EXPORTED_DEF obj_t BGl_userzd2errorzf2locationz20zztools_errorz00(obj_t
		BgL_locz00_35, obj_t BgL_procz00_36, obj_t BgL_msgz00_37,
		obj_t BgL_objz00_38, obj_t BgL_continuez00_39)
	{
		{	/* Tools/error.scm 129 */
			{	/* Tools/error.scm 132 */
				obj_t BgL_zc3z04anonymousza31304ze3z87_1778;

				{
					int BgL_tmpz00_2088;

					BgL_tmpz00_2088 = (int) (((long) 5));
					BgL_zc3z04anonymousza31304ze3z87_1778 =
						MAKE_L_PROCEDURE
						(BGl_z62zc3z04anonymousza31304ze3ze5zztools_errorz00,
						BgL_tmpz00_2088);
				}
				PROCEDURE_L_SET(BgL_zc3z04anonymousza31304ze3z87_1778,
					(int) (((long) 0)), BgL_procz00_36);
				PROCEDURE_L_SET(BgL_zc3z04anonymousza31304ze3z87_1778,
					(int) (((long) 1)), BgL_msgz00_37);
				PROCEDURE_L_SET(BgL_zc3z04anonymousza31304ze3z87_1778,
					(int) (((long) 2)), BgL_objz00_38);
				PROCEDURE_L_SET(BgL_zc3z04anonymousza31304ze3z87_1778,
					(int) (((long) 3)), BgL_locz00_35);
				PROCEDURE_L_SET(BgL_zc3z04anonymousza31304ze3z87_1778,
					(int) (((long) 4)), BgL_continuez00_39);
				return
					BGl_withzd2dumpzd2stackz00zztools_errorz00
					(BgL_zc3z04anonymousza31304ze3z87_1778);
			}
		}

	}



/* &user-error/location */
	obj_t BGl_z62userzd2errorzf2locationz42zztools_errorz00(obj_t BgL_envz00_1779,
		obj_t BgL_locz00_1780, obj_t BgL_procz00_1781, obj_t BgL_msgz00_1782,
		obj_t BgL_objz00_1783, obj_t BgL_continuez00_1784)
	{
		{	/* Tools/error.scm 129 */
			return
				BGl_userzd2errorzf2locationz20zztools_errorz00(BgL_locz00_1780,
				BgL_procz00_1781, BgL_msgz00_1782, BgL_objz00_1783,
				BgL_continuez00_1784);
		}

	}



/* &<@anonymous:1304> */
	obj_t BGl_z62zc3z04anonymousza31304ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1785)
	{
		{	/* Tools/error.scm 131 */
			{	/* Tools/error.scm 132 */
				obj_t BgL_procz00_1786;
				obj_t BgL_msgz00_1787;
				obj_t BgL_objz00_1788;
				obj_t BgL_locz00_1789;
				obj_t BgL_continuez00_1790;

				BgL_procz00_1786 = PROCEDURE_L_REF(BgL_envz00_1785, (int) (((long) 0)));
				BgL_msgz00_1787 = PROCEDURE_L_REF(BgL_envz00_1785, (int) (((long) 1)));
				BgL_objz00_1788 = PROCEDURE_L_REF(BgL_envz00_1785, (int) (((long) 2)));
				BgL_locz00_1789 = PROCEDURE_L_REF(BgL_envz00_1785, (int) (((long) 3)));
				BgL_continuez00_1790 =
					PROCEDURE_L_REF(BgL_envz00_1785, (int) (((long) 4)));
				if (OUTPUT_PORTP(BGl_za2tracezd2portza2zd2zztools_tracez00))
					{	/* Tools/error.scm 133 */
						obj_t BgL_port1232z00_1841;

						BgL_port1232z00_1841 = BGl_za2tracezd2portza2zd2zztools_tracez00;
						bgl_display_string(BGl_string1529z00zztools_errorz00,
							BgL_port1232z00_1841);
						bgl_display_obj(BgL_procz00_1786, BgL_port1232z00_1841);
						bgl_display_string(BGl_string1523z00zztools_errorz00,
							BgL_port1232z00_1841);
						bgl_display_obj(BgL_msgz00_1787, BgL_port1232z00_1841);
						bgl_display_string(BGl_string1523z00zztools_errorz00,
							BgL_port1232z00_1841);
						bgl_display_obj(BgL_objz00_1788, BgL_port1232z00_1841);
						bgl_display_char(((unsigned char) 10), BgL_port1232z00_1841);
					}
				else
					{	/* Tools/error.scm 132 */
						BFALSE;
					}
				BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00 =
					ADDFX(BGl_za2nbzd2errorzd2onzd2passza2zd2zztools_errorz00,
					BINT(((long) 1)));
				{	/* Tools/error.scm 135 */
					obj_t BgL_proczd2stringzd2_1842;

					if (STRINGP(BgL_procz00_1786))
						{	/* Tools/error.scm 136 */
							BgL_proczd2stringzd2_1842 = BgL_procz00_1786;
						}
					else
						{	/* Tools/error.scm 136 */
							if (SYMBOLP(BgL_procz00_1786))
								{	/* Tools/error.scm 139 */
									obj_t BgL_res1507z00_1843;

									{	/* Tools/error.scm 139 */
										obj_t BgL_arg1466z00_1844;

										BgL_arg1466z00_1844 = SYMBOL_TO_STRING(BgL_procz00_1786);
										BgL_res1507z00_1843 =
											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
											(BgL_arg1466z00_1844);
									}
									BgL_proczd2stringzd2_1842 = BgL_res1507z00_1843;
								}
							else
								{	/* Tools/error.scm 138 */
									BgL_proczd2stringzd2_1842 = BFALSE;
								}
						}
					{	/* Tools/error.scm 135 */
						obj_t BgL_funzd2stringzd2_1845;

						{	/* Tools/error.scm 142 */
							obj_t BgL_arg1324z00_1846;

							BgL_arg1324z00_1846 =
								CAR(BGl_za2sfunzd2stackza2zd2zztools_errorz00);
							{	/* Tools/error.scm 142 */
								obj_t BgL_res1508z00_1847;

								{	/* Tools/error.scm 142 */
									obj_t BgL_arg1466z00_1848;

									BgL_arg1466z00_1848 =
										SYMBOL_TO_STRING(((obj_t) BgL_arg1324z00_1846));
									BgL_res1508z00_1847 =
										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
										(BgL_arg1466z00_1848);
								}
								BgL_funzd2stringzd2_1845 = BgL_res1508z00_1847;
							}
						}
						{	/* Tools/error.scm 142 */
							obj_t BgL_procz00_1849;

							{	/* Tools/error.scm 143 */
								bool_t BgL_test1578z00_2134;

								if (STRINGP(BgL_proczd2stringzd2_1842))
									{	/* Tools/error.scm 144 */
										bool_t BgL_test1580z00_2137;

										{	/* Tools/error.scm 144 */
											bool_t BgL_res1514z00_1850;

											{	/* Tools/error.scm 144 */
												long BgL_l1z00_1851;

												BgL_l1z00_1851 =
													STRING_LENGTH(BgL_proczd2stringzd2_1842);
												if (
													(BgL_l1z00_1851 ==
														STRING_LENGTH(BgL_funzd2stringzd2_1845)))
													{	/* Tools/error.scm 144 */
														int BgL_arg1267z00_1852;

														{	/* Tools/error.scm 144 */
															char *BgL_auxz00_2144;
															char *BgL_tmpz00_2142;

															BgL_auxz00_2144 =
																BSTRING_TO_STRING(BgL_funzd2stringzd2_1845);
															BgL_tmpz00_2142 =
																BSTRING_TO_STRING(BgL_proczd2stringzd2_1842);
															BgL_arg1267z00_1852 =
																memcmp(BgL_tmpz00_2142, BgL_auxz00_2144,
																BgL_l1z00_1851);
														}
														BgL_res1514z00_1850 =
															((long) (BgL_arg1267z00_1852) == ((long) 0));
													}
												else
													{	/* Tools/error.scm 144 */
														BgL_res1514z00_1850 = ((bool_t) 0);
													}
											}
											BgL_test1580z00_2137 = BgL_res1514z00_1850;
										}
										if (BgL_test1580z00_2137)
											{	/* Tools/error.scm 144 */
												BgL_test1578z00_2134 = ((bool_t) 0);
											}
										else
											{	/* Tools/error.scm 144 */
												BgL_test1578z00_2134 = ((bool_t) 1);
											}
									}
								else
									{	/* Tools/error.scm 143 */
										BgL_test1578z00_2134 = ((bool_t) 0);
									}
								if (BgL_test1578z00_2134)
									{	/* Tools/error.scm 143 */
										BgL_procz00_1849 =
											string_append_3(BgL_funzd2stringzd2_1845,
											BGl_string1523z00zztools_errorz00,
											BgL_proczd2stringzd2_1842);
									}
								else
									{	/* Tools/error.scm 143 */
										BgL_procz00_1849 = BgL_funzd2stringzd2_1845;
									}
							}
							{	/* Tools/error.scm 143 */
								obj_t BgL_objprnz00_1853;

								{	/* Tools/error.scm 147 */
									obj_t BgL_portz00_1854;

									{	/* Tools/error.scm 147 */

										{	/* Tools/error.scm 147 */

											BgL_portz00_1854 =
												BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
												(BTRUE);
										}
									}
									BGl_displayzd2circlezd2zz__pp_circlez00(BgL_objz00_1788,
										BgL_portz00_1854);
									{	/* Tools/error.scm 149 */
										obj_t BgL_stringz00_1855;

										BgL_stringz00_1855 =
											bgl_close_output_port(BgL_portz00_1854);
										if (
											(STRING_LENGTH(
													((obj_t) BgL_stringz00_1855)) > ((long) 45)))
											{	/* Tools/error.scm 151 */
												obj_t BgL_arg1317z00_1856;

												{	/* Tools/error.scm 151 */
													obj_t BgL_res1517z00_1857;

													BgL_res1517z00_1857 =
														c_substring(
														((obj_t) BgL_stringz00_1855), ((long) 0),
														((long) 44));
													BgL_arg1317z00_1856 = BgL_res1517z00_1857;
												}
												BgL_objprnz00_1853 =
													string_append(BgL_arg1317z00_1856,
													BGl_string1530z00zztools_errorz00);
											}
										else
											{	/* Tools/error.scm 150 */
												BgL_objprnz00_1853 = BgL_stringz00_1855;
											}
									}
								}
								{	/* Tools/error.scm 147 */

									return
										BGl_zc3z04exitza31306ze3ze70z60zztools_errorz00
										(BgL_continuez00_1790, BgL_locz00_1789, BgL_objprnz00_1853,
										BgL_msgz00_1787, BgL_procz00_1849);
								}
							}
						}
					}
				}
			}
		}

	}



/* <@exit:1306>~0 */
	obj_t BGl_zc3z04exitza31306ze3ze70z60zztools_errorz00(obj_t
		BgL_continuez00_1808, obj_t BgL_locz00_1807, obj_t BgL_objprnz00_1806,
		obj_t BgL_msgz00_1805, obj_t BgL_procz00_1804)
	{
		{	/* Tools/error.scm 153 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1111z00_1438;

			if (SET_EXIT(BgL_an_exit1111z00_1438))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1111z00_1438 = (void *) jmpbuf;
					{	/* Tools/error.scm 153 */

						PUSH_EXIT(BgL_an_exit1111z00_1438, ((long) 1));
						{	/* Tools/error.scm 153 */
							obj_t BgL_an_exitd1112z00_1439;

							BgL_an_exitd1112z00_1439 = ((obj_t) (&exitd));
							{	/* Tools/error.scm 153 */
								obj_t BgL_res1114z00_1442;

								{	/* Tools/error.scm 156 */
									obj_t BgL_zc3z04anonymousza31313ze3z87_1777;
									obj_t BgL_zc3z04anonymousza31309ze3z87_1776;

									BgL_zc3z04anonymousza31313ze3z87_1777 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31313ze3ze5zztools_errorz00,
										(int) (((long) 0)), (int) (((long) 4)));
									BgL_zc3z04anonymousza31309ze3z87_1776 =
										MAKE_FX_PROCEDURE
										(BGl_z62zc3z04anonymousza31309ze3ze5zztools_errorz00,
										(int) (((long) 1)), (int) (((long) 2)));
									PROCEDURE_SET(BgL_zc3z04anonymousza31313ze3z87_1777,
										(int) (((long) 0)), BgL_procz00_1804);
									PROCEDURE_SET(BgL_zc3z04anonymousza31313ze3z87_1777,
										(int) (((long) 1)), BgL_msgz00_1805);
									PROCEDURE_SET(BgL_zc3z04anonymousza31313ze3z87_1777,
										(int) (((long) 2)), BgL_objprnz00_1806);
									PROCEDURE_SET(BgL_zc3z04anonymousza31313ze3z87_1777,
										(int) (((long) 3)), BgL_locz00_1807);
									PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_1776,
										(int) (((long) 0)), BgL_continuez00_1808);
									PROCEDURE_SET(BgL_zc3z04anonymousza31309ze3z87_1776,
										(int) (((long) 1)), BgL_an_exitd1112z00_1439);
									BgL_res1114z00_1442 =
										BGl_withzd2exceptionzd2handlerz00zz__errorz00
										(BgL_zc3z04anonymousza31309ze3z87_1776,
										BgL_zc3z04anonymousza31313ze3z87_1777);
								}
								POP_EXIT();
								return BgL_res1114z00_1442;
							}
						}
					}
				}
		}

	}



/* &<@anonymous:1313> */
	obj_t BGl_z62zc3z04anonymousza31313ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1791)
	{
		{	/* Tools/error.scm 160 */
			{	/* Tools/error.scm 161 */
				obj_t BgL_procz00_1792;
				obj_t BgL_msgz00_1793;
				obj_t BgL_objprnz00_1794;
				obj_t BgL_locz00_1795;

				BgL_procz00_1792 =
					((obj_t) PROCEDURE_REF(BgL_envz00_1791, (int) (((long) 0))));
				BgL_msgz00_1793 = PROCEDURE_REF(BgL_envz00_1791, (int) (((long) 1)));
				BgL_objprnz00_1794 = PROCEDURE_REF(BgL_envz00_1791, (int) (((long) 2)));
				BgL_locz00_1795 = PROCEDURE_REF(BgL_envz00_1791, (int) (((long) 3)));
				{	/* Tools/error.scm 161 */
					bool_t BgL_test1584z00_2193;

					if (STRUCTP(BgL_locz00_1795))
						{	/* Tools/error.scm 161 */
							BgL_test1584z00_2193 =
								(STRUCT_KEY(BgL_locz00_1795) == CNST_TABLE_REF(((long) 1)));
						}
					else
						{	/* Tools/error.scm 161 */
							BgL_test1584z00_2193 = ((bool_t) 0);
						}
					if (BgL_test1584z00_2193)
						{	/* Tools/error.scm 161 */
							return
								BGl_errorzf2locationzf2zz__errorz00(BgL_procz00_1792,
								BgL_msgz00_1793, BgL_objprnz00_1794,
								BGl_locationzd2fullzd2fnamez00zztools_locationz00
								(BgL_locz00_1795), STRUCT_REF(BgL_locz00_1795,
									(int) (((long) 1))));
						}
					else
						{	/* Tools/error.scm 161 */
							return
								BGl_errorz00zz__errorz00(BgL_procz00_1792, BgL_msgz00_1793,
								BgL_objprnz00_1794);
						}
				}
			}
		}

	}



/* &<@anonymous:1309> */
	obj_t BGl_z62zc3z04anonymousza31309ze3ze5zztools_errorz00(obj_t
		BgL_envz00_1796, obj_t BgL_ez00_1799)
	{
		{	/* Tools/error.scm 155 */
			{	/* Tools/error.scm 156 */
				obj_t BgL_continuez00_1797;
				obj_t BgL_an_exitd1112z00_1798;

				BgL_continuez00_1797 =
					PROCEDURE_REF(BgL_envz00_1796, (int) (((long) 0)));
				BgL_an_exitd1112z00_1798 =
					PROCEDURE_REF(BgL_envz00_1796, (int) (((long) 1)));
				BGl_errorzd2notifyzd2zz__errorz00(BgL_ez00_1799);
				if (PAIRP(BgL_continuez00_1797))
					{	/* Tools/error.scm 157 */
						return
							BGl_unwindzd2untilz12zc0zz__bexitz00(BgL_an_exitd1112z00_1798,
							CAR(BgL_continuez00_1797));
					}
				else
					{	/* Tools/error.scm 159 */
						obj_t BgL_list1312z00_1858;

						BgL_list1312z00_1858 = MAKE_YOUNG_PAIR(BINT(((long) 1)), BNIL);
						return BGl_exitz00zz__errorz00(BgL_list1312z00_1858);
					}
			}
		}

	}



/* enter-function */
	BGL_EXPORTED_DEF obj_t BGl_enterzd2functionzd2zztools_errorz00(obj_t
		BgL_varz00_40)
	{
		{	/* Tools/error.scm 175 */
			return (BGl_za2sfunzd2stackza2zd2zztools_errorz00 =
				MAKE_YOUNG_PAIR(BgL_varz00_40,
					BGl_za2sfunzd2stackza2zd2zztools_errorz00), BUNSPEC);
		}

	}



/* &enter-function */
	obj_t BGl_z62enterzd2functionzb0zztools_errorz00(obj_t BgL_envz00_1800,
		obj_t BgL_varz00_1801)
	{
		{	/* Tools/error.scm 175 */
			return BGl_enterzd2functionzd2zztools_errorz00(BgL_varz00_1801);
		}

	}



/* leave-function */
	BGL_EXPORTED_DEF obj_t BGl_leavezd2functionzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 181 */
			return (BGl_za2sfunzd2stackza2zd2zztools_errorz00 =
				CDR(BGl_za2sfunzd2stackza2zd2zztools_errorz00), BUNSPEC);
		}

	}



/* &leave-function */
	obj_t BGl_z62leavezd2functionzb0zztools_errorz00(obj_t BgL_envz00_1802)
	{
		{	/* Tools/error.scm 181 */
			return BGl_leavezd2functionzd2zztools_errorz00();
		}

	}



/* current-function */
	BGL_EXPORTED_DEF obj_t BGl_currentzd2functionzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 187 */
			return CAR(BGl_za2sfunzd2stackza2zd2zztools_errorz00);
		}

	}



/* &current-function */
	obj_t BGl_z62currentzd2functionzb0zztools_errorz00(obj_t BgL_envz00_1803)
	{
		{	/* Tools/error.scm 187 */
			return BGl_currentzd2functionzd2zztools_errorz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_errorz00()
	{
		{	/* Tools/error.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzengine_passz00(((long) 373082201),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1531z00zztools_errorz00));
		}

	}

#ifdef __cplusplus
}
#endif
