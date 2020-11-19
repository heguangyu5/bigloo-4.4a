/*===========================================================================*/
/*   (Init/setrc.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/setrc.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinit_setrcz00();
	static obj_t BGl_methodzd2initzd2zzinit_setrcz00();
	static obj_t BGl_z62setupzd2defaultzd2valuesz62zzinit_setrcz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
	static obj_t BGl_gczd2rootszd2initz00zzinit_setrcz00();
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzinit_setrcz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzinit_setrcz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	extern obj_t BGl_za2libzd2dirza2zd2zzengine_paramz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_setrcz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_setrcz00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_setupzd2defaultzd2valueszd2envzd2zzinit_setrcz00,
		BgL_bgl_za762setupza7d2defau1020z00,
		BGl_z62setupzd2defaultzd2valuesz62zzinit_setrcz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1017z00zzinit_setrcz00,
		BgL_bgl_string1017za700za7za7i1021za7, "HOME", 4);
	      DEFINE_STRING(BGl_string1018z00zzinit_setrcz00,
		BgL_bgl_string1018za700za7za7i1022za7, ".bigloorc", 9);
	      DEFINE_STRING(BGl_string1019z00zzinit_setrcz00,
		BgL_bgl_string1019za700za7za7i1023za7, "init_setrc", 10);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinit_setrcz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long
		BgL_checksumz00_19, char *BgL_fromz00_20)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_setrcz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_setrcz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinit_setrcz00();
					BGl_libraryzd2moduleszd2initz00zzinit_setrcz00();
					BGl_importedzd2moduleszd2initz00zzinit_setrcz00();
					return BGl_methodzd2initzd2zzinit_setrcz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "init_setrc");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "init_setrc");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"init_setrc");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_setrc");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* setup-default-values */
	BGL_EXPORTED_DEF obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 23 */
			{	/* Init/setrc.scm 24 */
				obj_t BgL_pathz00_11;

				{	/* Init/setrc.scm 24 */
					obj_t BgL_homez00_15;

					BgL_homez00_15 =
						BGl_getenvz00zz__osz00(BGl_string1017z00zzinit_setrcz00);
					if (STRINGP(BgL_homez00_15))
						{	/* Init/setrc.scm 25 */
							BgL_pathz00_11 =
								MAKE_YOUNG_PAIR(BgL_homez00_15,
								BGl_za2libzd2dirza2zd2zzengine_paramz00);
						}
					else
						{	/* Init/setrc.scm 25 */
							BgL_pathz00_11 = BGl_za2libzd2dirza2zd2zzengine_paramz00;
						}
				}
				{	/* Init/setrc.scm 24 */
					obj_t BgL_fnamez00_12;

					BgL_fnamez00_12 =
						BGl_findzd2filezf2pathz20zz__osz00(BGl_string1018z00zzinit_setrcz00,
						BgL_pathz00_11);
					{	/* Init/setrc.scm 28 */

						if (CBOOL(BgL_fnamez00_12))
							{	/* Init/setrc.scm 29 */
								obj_t BgL_envz00_14;

								BgL_envz00_14 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Init/setrc.scm 29 */

									return
										BGl_loadqz00zz__evalz00(BgL_fnamez00_12, BgL_envz00_14);
								}
							}
						else
							{	/* Init/setrc.scm 29 */
								return BFALSE;
							}
					}
				}
			}
		}

	}



/* &setup-default-values */
	obj_t BGl_z62setupzd2defaultzd2valuesz62zzinit_setrcz00(obj_t BgL_envz00_18)
	{
		{	/* Init/setrc.scm 23 */
			return BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_setrcz00()
	{
		{	/* Init/setrc.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1019z00zzinit_setrcz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1019z00zzinit_setrcz00));
		}

	}

#ifdef __cplusplus
}
#endif
