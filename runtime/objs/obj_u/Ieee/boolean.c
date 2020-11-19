/*===========================================================================*/
/*   (Ieee/boolean.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/boolean.scm -indent -o objs/obj_u/Ieee/boolean.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62booleanzf3z91zz__r4_booleans_6_1z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long, char *);
	static obj_t BGl_z62notz62zz__r4_booleans_6_1z00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_booleans_6_1z00();
	BGL_EXPORTED_DECL bool_t BGl_booleanzf3zf3zz__r4_booleans_6_1z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_notz00zz__r4_booleans_6_1z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_booleanzf3zd2envz21zz__r4_booleans_6_1z00,
		BgL_bgl_za762booleanza7f3za7911412za7,
		BGl_z62booleanzf3z91zz__r4_booleans_6_1z00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_notzd2envzd2zz__r4_booleans_6_1z00,
		BgL_bgl_za762notza762za7za7__r4_1413z00,
		BGl_z62notz62zz__r4_booleans_6_1z00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long
		BgL_checksumz00_1002, char *BgL_fromz00_1003)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_booleans_6_1z00 =
						BBOOL(((bool_t) 0));
					return BGl_gczd2rootszd2initz00zz__r4_booleans_6_1z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_booleans_6_1z00()
	{
		{	/* Ieee/boolean.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* not */
	BGL_EXPORTED_DEF bool_t BGl_notz00zz__r4_booleans_6_1z00(obj_t BgL_objz00_3)
	{
		{	/* Ieee/boolean.scm 51 */
			if (CBOOL(BgL_objz00_3))
				{	/* Ieee/boolean.scm 52 */
					return ((bool_t) 0);
				}
			else
				{	/* Ieee/boolean.scm 52 */
					return ((bool_t) 1);
				}
		}

	}



/* &not */
	obj_t BGl_z62notz62zz__r4_booleans_6_1z00(obj_t BgL_envz00_998,
		obj_t BgL_objz00_999)
	{
		{	/* Ieee/boolean.scm 51 */
			return BBOOL(BGl_notz00zz__r4_booleans_6_1z00(BgL_objz00_999));
		}

	}



/* boolean? */
	BGL_EXPORTED_DEF bool_t BGl_booleanzf3zf3zz__r4_booleans_6_1z00(obj_t
		BgL_objz00_4)
	{
		{	/* Ieee/boolean.scm 57 */
			return BOOLEANP(BgL_objz00_4);
		}

	}



/* &boolean? */
	obj_t BGl_z62booleanzf3z91zz__r4_booleans_6_1z00(obj_t BgL_envz00_1000,
		obj_t BgL_objz00_1001)
	{
		{	/* Ieee/boolean.scm 57 */
			return BBOOL(BGl_booleanzf3zf3zz__r4_booleans_6_1z00(BgL_objz00_1001));
		}

	}

#ifdef __cplusplus
}
#endif
