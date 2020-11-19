/*===========================================================================*/
/*   (Tools/speek.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/speek.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zztools_speekz00();
	static obj_t BGl_methodzd2initzd2zztools_speekz00();
	static obj_t BGl_z62verbosez62zztools_speekz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2verboseza2z00zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zztools_speekz00();
	BGL_IMPORT obj_t BGl_displayzd2circlezd2zz__pp_circlez00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_za2stdoutza2z00zztools_speekz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zztools_speekz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zztools_speekz00();
	static obj_t BGl_genericzd2initzd2zztools_speekz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__pp_circlez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_speekz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_speekz00();
	BGL_IMPORT bool_t BGl_2zc3zd3z10zz__r4_numbers_6_5z00(obj_t, obj_t);
	static obj_t BGl_speekz00zztools_speekz00(obj_t, bool_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_verbosezd2envzd2zztools_speekz00,
		BgL_bgl_za762verboseza762za7za7t1024z00, va_generic_entry,
		BGl_z62verbosez62zztools_speekz00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1023z00zztools_speekz00,
		BgL_bgl_string1023za700za7za7t1025za7, "tools_speek", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2stdoutza2z00zztools_speekz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_speekz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long
		BgL_checksumz00_34, char *BgL_fromz00_35)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_speekz00))
				{
					BGl_requirezd2initializa7ationz75zztools_speekz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_speekz00();
					BGl_libraryzd2moduleszd2initz00zztools_speekz00();
					BGl_importedzd2moduleszd2initz00zztools_speekz00();
					return BGl_toplevelzd2initzd2zztools_speekz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			BGl_modulezd2initializa7ationz75zz__pp_circlez00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_speek");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_speek");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			{	/* Tools/speek.scm 22 */
				obj_t BgL_res1021z00_25;

				{	/* Tools/speek.scm 22 */
					obj_t BgL_tmpz00_49;

					BgL_tmpz00_49 = BGL_CURRENT_DYNAMIC_ENV();
					BgL_res1021z00_25 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_49);
				}
				return (BGl_za2stdoutza2z00zztools_speekz00 =
					BgL_res1021z00_25, BUNSPEC);
			}
		}

	}



/* speek */
	obj_t BGl_speekz00zztools_speekz00(obj_t BgL_portz00_3, bool_t BgL_flagz00_4,
		obj_t BgL_argsz00_5)
	{
		{	/* Tools/speek.scm 27 */
			if (BgL_flagz00_4)
				{	/* Tools/speek.scm 28 */
					{
						obj_t BgL_l1012z00_17;

						BgL_l1012z00_17 = BgL_argsz00_5;
					BgL_zc3z04anonymousza31017ze3z87_18:
						if (PAIRP(BgL_l1012z00_17))
							{	/* Tools/speek.scm 30 */
								BGl_displayzd2circlezd2zz__pp_circlez00(CAR(BgL_l1012z00_17),
									BgL_portz00_3);
								{
									obj_t BgL_l1012z00_57;

									BgL_l1012z00_57 = CDR(BgL_l1012z00_17);
									BgL_l1012z00_17 = BgL_l1012z00_57;
									goto BgL_zc3z04anonymousza31017ze3z87_18;
								}
							}
						else
							{	/* Tools/speek.scm 30 */
								((bool_t) 1);
							}
					}
					return bgl_flush_output_port(BgL_portz00_3);
				}
			else
				{	/* Tools/speek.scm 28 */
					return BFALSE;
				}
		}

	}



/* verbose */
	BGL_EXPORTED_DEF obj_t BGl_verbosez00zztools_speekz00(obj_t BgL_levelz00_6,
		obj_t BgL_argsz00_7)
	{
		{	/* Tools/speek.scm 36 */
			{	/* Tools/speek.scm 37 */
				bool_t BgL_arg1020z00_30;

				BgL_arg1020z00_30 =
					BGl_2zc3zd3z10zz__r4_numbers_6_5z00(BgL_levelz00_6,
					BGl_za2verboseza2z00zzengine_paramz00);
				return BGl_speekz00zztools_speekz00(BGl_za2stdoutza2z00zztools_speekz00,
					BgL_arg1020z00_30, BgL_argsz00_7);
			}
		}

	}



/* &verbose */
	obj_t BGl_z62verbosez62zztools_speekz00(obj_t BgL_envz00_31,
		obj_t BgL_levelz00_32, obj_t BgL_argsz00_33)
	{
		{	/* Tools/speek.scm 36 */
			return BGl_verbosez00zztools_speekz00(BgL_levelz00_32, BgL_argsz00_33);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_speekz00()
	{
		{	/* Tools/speek.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1023z00zztools_speekz00));
		}

	}

#ifdef __cplusplus
}
#endif
