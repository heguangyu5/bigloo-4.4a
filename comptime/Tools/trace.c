/*===========================================================================*/
/*   (Tools/trace.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/trace.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_za2marginsza2z00zztools_tracez00 = BUNSPEC;
	static obj_t BGl_z62tracezd2tabzb0zztools_tracez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_tracezd2satisfyzf3z21zztools_tracez00(obj_t,
		obj_t);
	static obj_t BGl_z62startzd2tracezb0zztools_tracez00(obj_t, obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zztools_tracez00();
	BGL_EXPORTED_DECL obj_t BGl_tracezd2tabzd2zztools_tracez00(int);
	static obj_t BGl_methodzd2initzd2zztools_tracez00();
	BGL_EXPORTED_DECL obj_t BGl_printzd2tracezd2zztools_tracez00(obj_t);
	static obj_t BGl_za2tracezd2passza2zd2zztools_tracez00 = BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zztools_tracez00();
	BGL_EXPORTED_DECL obj_t BGl_stopzd2tracezd2zztools_tracez00();
	static obj_t BGl_z62printzd2tracezb0zztools_tracez00(obj_t, obj_t);
	static obj_t BGl_z62stopzd2tracezb0zztools_tracez00(obj_t);
	static obj_t BGl_z62tracezd2satisfyzf3z43zztools_tracez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2tracezd2portza2zd2zztools_tracez00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zztools_tracez00 = BUNSPEC;
	static long BGl_za2levelza2z00zztools_tracez00;
	static obj_t BGl_toplevelzd2initzd2zztools_tracez00();
	static obj_t BGl_genericzd2initzd2zztools_tracez00();
	static bool_t BGl_za2tracezd2modeza2zd2zztools_tracez00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
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
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__datez00(long, char *);
	static obj_t BGl_cnstzd2initzd2zztools_tracez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_tracez00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_tracez00();
	BGL_EXPORTED_DECL obj_t BGl_startzd2tracezd2zztools_tracez00(obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2tracezd2envz00zztools_tracez00,
		BgL_bgl_za762stopza7d2traceza71052za7,
		BGl_z62stopzd2tracezb0zztools_tracez00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_startzd2tracezd2envz00zztools_tracez00,
		BgL_bgl_za762startza7d2trace1053z00,
		BGl_z62startzd2tracezb0zztools_tracez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_printzd2tracezd2envz00zztools_tracez00,
		BgL_bgl_za762printza7d2trace1054z00, va_generic_entry,
		BGl_z62printzd2tracezb0zztools_tracez00, BUNSPEC, -1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2satisfyzf3zd2envzf3zztools_tracez00,
		BgL_bgl_za762traceza7d2satis1055z00,
		BGl_z62tracezd2satisfyzf3z43zztools_tracez00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_tracezd2tabzd2envz00zztools_tracez00,
		BgL_bgl_za762traceza7d2tabza7b1056za7,
		BGl_z62tracezd2tabzb0zztools_tracez00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1047z00zztools_tracez00,
		BgL_bgl_string1047za700za7za7t1057za7, "tools_trace", 11);
	      DEFINE_STRING(BGl_string1048z00zztools_tracez00,
		BgL_bgl_string1048za700za7za7t1058za7,
		"#(\"\" \" \" \"  \" \"   \" \"    \" \"     \" \"      \" \"       \" \"        \" \"         \" \"          \") none ",
		96);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2marginsza2z00zztools_tracez00));
		     ADD_ROOT((void *) (&BGl_za2tracezd2passza2zd2zztools_tracez00));
		     ADD_ROOT((void *) (&BGl_za2tracezd2portza2zd2zztools_tracez00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_tracez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long
		BgL_checksumz00_102, char *BgL_fromz00_103)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_tracez00))
				{
					BGl_requirezd2initializa7ationz75zztools_tracez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_tracez00();
					BGl_libraryzd2moduleszd2initz00zztools_tracez00();
					BGl_cnstzd2initzd2zztools_tracez00();
					BGl_importedzd2moduleszd2initz00zztools_tracez00();
					return BGl_toplevelzd2initzd2zztools_tracez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_trace");
			BGl_modulezd2initializa7ationz75zz__datez00(((long) 0), "tools_trace");
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_trace");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			{	/* Tools/trace.scm 15 */
				obj_t BgL_cportz00_89;

				{	/* Tools/trace.scm 15 */
					obj_t BgL_stringz00_97;

					BgL_stringz00_97 = BGl_string1048z00zztools_tracez00;
					{	/* Tools/trace.scm 15 */
						obj_t BgL_startz00_98;

						BgL_startz00_98 = BINT(((long) 0));
						{	/* Tools/trace.scm 15 */
							obj_t BgL_endz00_99;

							BgL_endz00_99 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_97)));
							{	/* Tools/trace.scm 15 */

								BgL_cportz00_89 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_97, BgL_startz00_98, BgL_endz00_99);
				}}}}
				{
					long BgL_iz00_90;

					BgL_iz00_90 = ((long) 1);
				BgL_loopz00_91:
					if ((BgL_iz00_90 == ((long) -1)))
						{	/* Tools/trace.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/trace.scm 15 */
							{	/* Tools/trace.scm 15 */
								obj_t BgL_arg1050z00_93;

								{	/* Tools/trace.scm 15 */

									{	/* Tools/trace.scm 15 */
										obj_t BgL_locationz00_95;

										BgL_locationz00_95 = BBOOL(((bool_t) 0));
										{	/* Tools/trace.scm 15 */

											BgL_arg1050z00_93 =
												BGl_readz00zz__readerz00(BgL_cportz00_89,
												BgL_locationz00_95);
										}
									}
								}
								{	/* Tools/trace.scm 15 */
									int BgL_tmpz00_129;

									BgL_tmpz00_129 = (int) (BgL_iz00_90);
									CNST_TABLE_SET(BgL_tmpz00_129, BgL_arg1050z00_93);
							}}
							{	/* Tools/trace.scm 15 */
								int BgL_auxz00_96;

								BgL_auxz00_96 = (int) ((BgL_iz00_90 - ((long) 1)));
								{
									long BgL_iz00_134;

									BgL_iz00_134 = (long) (BgL_auxz00_96);
									BgL_iz00_90 = BgL_iz00_134;
									goto BgL_loopz00_91;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			BGl_za2tracezd2portza2zd2zztools_tracez00 = BFALSE;
			BGl_za2tracezd2passza2zd2zztools_tracez00 = CNST_TABLE_REF(((long) 0));
			BGl_za2levelza2z00zztools_tracez00 = ((long) 0);
			BGl_za2tracezd2modeza2zd2zztools_tracez00 = ((bool_t) 0);
			return (BGl_za2marginsza2z00zztools_tracez00 =
				CNST_TABLE_REF(((long) 1)), BUNSPEC);
		}

	}



/* start-trace */
	BGL_EXPORTED_DEF obj_t BGl_startzd2tracezd2zztools_tracez00(obj_t
		BgL_levelz00_3, obj_t BgL_passz00_4)
	{
		{	/* Tools/trace.scm 46 */
			return BFALSE;
		}

	}



/* &start-trace */
	obj_t BGl_z62startzd2tracezb0zztools_tracez00(obj_t BgL_envz00_78,
		obj_t BgL_levelz00_79, obj_t BgL_passz00_80)
	{
		{	/* Tools/trace.scm 46 */
			return
				BGl_startzd2tracezd2zztools_tracez00(BgL_levelz00_79, BgL_passz00_80);
		}

	}



/* stop-trace */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2tracezd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 66 */
			return BFALSE;
		}

	}



/* &stop-trace */
	obj_t BGl_z62stopzd2tracezb0zztools_tracez00(obj_t BgL_envz00_81)
	{
		{	/* Tools/trace.scm 66 */
			return BGl_stopzd2tracezd2zztools_tracez00();
		}

	}



/* trace-satisfy? */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2satisfyzf3z21zztools_tracez00(obj_t
		BgL_passz00_5, obj_t BgL_levelz00_6)
	{
		{	/* Tools/trace.scm 74 */
			return BFALSE;
		}

	}



/* &trace-satisfy? */
	obj_t BGl_z62tracezd2satisfyzf3z43zztools_tracez00(obj_t BgL_envz00_82,
		obj_t BgL_passz00_83, obj_t BgL_levelz00_84)
	{
		{	/* Tools/trace.scm 74 */
			return
				BGl_tracezd2satisfyzf3z21zztools_tracez00(BgL_passz00_83,
				BgL_levelz00_84);
		}

	}



/* print-trace */
	BGL_EXPORTED_DEF obj_t BGl_printzd2tracezd2zztools_tracez00(obj_t
		BgL_expz00_7)
	{
		{	/* Tools/trace.scm 82 */
			return BFALSE;
		}

	}



/* &print-trace */
	obj_t BGl_z62printzd2tracezb0zztools_tracez00(obj_t BgL_envz00_85,
		obj_t BgL_expz00_86)
	{
		{	/* Tools/trace.scm 82 */
			return BGl_printzd2tracezd2zztools_tracez00(BgL_expz00_86);
		}

	}



/* trace-tab */
	BGL_EXPORTED_DEF obj_t BGl_tracezd2tabzd2zztools_tracez00(int BgL_lenz00_8)
	{
		{	/* Tools/trace.scm 90 */
			return BFALSE;
		}

	}



/* &trace-tab */
	obj_t BGl_z62tracezd2tabzb0zztools_tracez00(obj_t BgL_envz00_87,
		obj_t BgL_lenz00_88)
	{
		{	/* Tools/trace.scm 90 */
			return BGl_tracezd2tabzd2zztools_tracez00(CINT(BgL_lenz00_88));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_tracez00()
	{
		{	/* Tools/trace.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1047z00zztools_tracez00));
			return
				BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1047z00zztools_tracez00));
		}

	}

#ifdef __cplusplus
}
#endif
