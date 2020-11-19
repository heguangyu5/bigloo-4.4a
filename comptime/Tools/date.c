/*===========================================================================*/
/*   (Tools/date.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/date.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zztools_datez00();
	static obj_t BGl_methodzd2initzd2zztools_datez00();
	static obj_t BGl_gczd2rootszd2initz00zztools_datez00();
	static obj_t BGl_requirezd2initializa7ationz75zztools_datez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zztools_datez00();
	BGL_EXPORTED_DECL obj_t BGl_bigloozd2datezd2zztools_datez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_z62bigloozd2datezb0zztools_datez00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_datez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_bigloozd2datezd2envz00zztools_datez00,
		BgL_bgl_za762biglooza7d2date1016z00, BGl_z62bigloozd2datezb0zztools_datez00,
		0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1015z00zztools_datez00,
		BgL_bgl_string1015za700za7za7t1017za7, " Thu 19 Nov 2020 07:12:46 AM CET ",
		33);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_datez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_datez00(long
		BgL_checksumz00_12, char *BgL_fromz00_13)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_datez00))
				{
					BGl_requirezd2initializa7ationz75zztools_datez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_datez00();
					BGl_libraryzd2moduleszd2initz00zztools_datez00();
					return BGl_methodzd2initzd2zztools_datez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_datez00()
	{
		{	/* Tools/date.scm 2 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_date");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_datez00()
	{
		{	/* Tools/date.scm 2 */
			return bgl_gc_roots_register();
		}

	}



/* bigloo-date */
	BGL_EXPORTED_DEF obj_t BGl_bigloozd2datezd2zztools_datez00()
	{
		{	/* Tools/date.scm 4 */
			return BGl_string1015z00zztools_datez00;
		}

	}



/* &bigloo-date */
	obj_t BGl_z62bigloozd2datezb0zztools_datez00(obj_t BgL_envz00_11)
	{
		{	/* Tools/date.scm 4 */
			return BGl_bigloozd2datezd2zztools_datez00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_datez00()
	{
		{	/* Tools/date.scm 2 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_datez00()
	{
		{	/* Tools/date.scm 2 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_datez00()
	{
		{	/* Tools/date.scm 2 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
