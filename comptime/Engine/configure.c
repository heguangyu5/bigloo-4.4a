/*===========================================================================*/
/*   (Engine/configure.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/configure.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zzengine_configurez00();
	static obj_t BGl_methodzd2initzd2zzengine_configurez00();
	static obj_t BGl_gczd2rootszd2initz00zzengine_configurez00();
	static obj_t BGl_requirezd2initializa7ationz75zzengine_configurez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzengine_configurez00();
	static obj_t BGl_genericzd2initzd2zzengine_configurez00();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_configurez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_configurez00();
	static obj_t *__cnst;



/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzengine_configurez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzengine_configurez00(long
		BgL_checksumz00_11, char *BgL_fromz00_12)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_configurez00))
				{
					BGl_requirezd2initializa7ationz75zzengine_configurez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_configurez00();
					BGl_libraryzd2moduleszd2initz00zzengine_configurez00();
					return BGl_toplevelzd2initzd2zzengine_configurez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_configure");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_configurez00()
	{
		{	/* Engine/configure.scm 19 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
