/*===========================================================================*/
/*   (Llib/type.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/type.scm -indent -o objs/obj_u/Llib/type.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_requirezd2initializa7ationz75zz__typez00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zz__typez00();
	static obj_t BGl_genericzd2initzd2zz__typez00();
	static obj_t BGl_objectzd2initzd2zz__typez00();
	static obj_t BGl_methodzd2initzd2zz__typez00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__typez00(long,
		char *);
	static obj_t BGl_gczd2rootszd2initz00zz__typez00();
	static obj_t *__cnst;



/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__typez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__typez00(long
		BgL_checksumz00_1420, char *BgL_fromz00_1421)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__typez00))
				{
					BGl_requirezd2initializa7ationz75zz__typez00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__typez00();
					return BGl_toplevelzd2initzd2zz__typez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__typez00()
	{
		{	/* Llib/type.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__typez00()
	{
		{	/* Llib/type.scm 14 */
			return BUNSPEC;
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__typez00()
	{
		{	/* Llib/type.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__typez00()
	{
		{	/* Llib/type.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__typez00()
	{
		{	/* Llib/type.scm 14 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
