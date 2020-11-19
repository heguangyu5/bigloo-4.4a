/*===========================================================================*/
/*   (Llib/weakptr.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Llib/weakptr.scm -indent -o objs/obj_u/Llib/weakptr.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62weakptrzd2datazb0zz__weakptrz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__weakptrz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t weakptr_data(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t);
	static obj_t BGl_genericzd2initzd2zz__weakptrz00();
	static obj_t BGl_objectzd2initzd2zz__weakptrz00();
	static obj_t BGl_z62weakptrzd2datazd2setz12z70zz__weakptrz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zz__weakptrz00();
	BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62makezd2weakptrzb0zz__weakptrz00(obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__weakptrz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00();
	extern obj_t make_weakptr(obj_t);
	static obj_t BGl_z62weakptrzf3z91zz__weakptrz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t,
		obj_t);
	extern void weakptr_data_set(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_weakptrzd2datazd2envz00zz__weakptrz00,
		BgL_bgl_za762weakptrza7d2dat1578z00, BGl_z62weakptrzd2datazb0zz__weakptrz00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_makezd2weakptrzd2envz00zz__weakptrz00,
		BgL_bgl_za762makeza7d2weakpt1579z00, BGl_z62makezd2weakptrzb0zz__weakptrz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1573z00zz__weakptrz00,
		BgL_bgl_string1573za700za7za7_1580za7, "/tmp/4.4a/runtime/Llib/weakptr.scm",
		34);
	      DEFINE_STRING(BGl_string1574z00zz__weakptrz00,
		BgL_bgl_string1574za700za7za7_1581za7, "&weakptr-data", 13);
	      DEFINE_STRING(BGl_string1575z00zz__weakptrz00,
		BgL_bgl_string1575za700za7za7_1582za7, "weakptr", 7);
	      DEFINE_STRING(BGl_string1576z00zz__weakptrz00,
		BgL_bgl_string1576za700za7za7_1583za7, "&weakptr-data-set!", 18);
	      DEFINE_STRING(BGl_string1577z00zz__weakptrz00,
		BgL_bgl_string1577za700za7za7_1584za7, "__weakptr", 9);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_weakptrzf3zd2envz21zz__weakptrz00,
		BgL_bgl_za762weakptrza7f3za7911585za7, BGl_z62weakptrzf3z91zz__weakptrz00,
		0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_weakptrzd2datazd2setz12zd2envzc0zz__weakptrz00,
		BgL_bgl_za762weakptrza7d2dat1586z00,
		BGl_z62weakptrzd2datazd2setz12z70zz__weakptrz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__weakptrz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__weakptrz00(long
		BgL_checksumz00_1683, char *BgL_fromz00_1684)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__weakptrz00))
				{
					BGl_requirezd2initializa7ationz75zz__weakptrz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__weakptrz00();
					BGl_importedzd2moduleszd2initz00zz__weakptrz00();
					return BGl_methodzd2initzd2zz__weakptrz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__weakptrz00()
	{
		{	/* Llib/weakptr.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* weakptr? */
	BGL_EXPORTED_DEF bool_t BGl_weakptrzf3zf3zz__weakptrz00(obj_t BgL_objz00_3)
	{
		{	/* Llib/weakptr.scm 74 */
			return BGL_WEAKPTRP(BgL_objz00_3);
		}

	}



/* &weakptr? */
	obj_t BGl_z62weakptrzf3z91zz__weakptrz00(obj_t BgL_envz00_1670,
		obj_t BgL_objz00_1671)
	{
		{	/* Llib/weakptr.scm 74 */
			return BBOOL(BGl_weakptrzf3zf3zz__weakptrz00(BgL_objz00_1671));
		}

	}



/* weakptr-data */
	BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2zz__weakptrz00(obj_t BgL_objz00_4)
	{
		{	/* Llib/weakptr.scm 80 */
			return weakptr_data(BgL_objz00_4);
		}

	}



/* &weakptr-data */
	obj_t BGl_z62weakptrzd2datazb0zz__weakptrz00(obj_t BgL_envz00_1672,
		obj_t BgL_objz00_1673)
	{
		{	/* Llib/weakptr.scm 80 */
			{	/* Llib/weakptr.scm 81 */
				obj_t BgL_auxz00_1696;

				if (BGL_WEAKPTRP(BgL_objz00_1673))
					{	/* Llib/weakptr.scm 81 */
						BgL_auxz00_1696 = BgL_objz00_1673;
					}
				else
					{
						obj_t BgL_auxz00_1699;

						BgL_auxz00_1699 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1573z00zz__weakptrz00,
							BINT(((long) 2948)), BGl_string1574z00zz__weakptrz00,
							BGl_string1575z00zz__weakptrz00, BgL_objz00_1673);
						FAILURE(BgL_auxz00_1699, BFALSE, BFALSE);
					}
				return BGl_weakptrzd2datazd2zz__weakptrz00(BgL_auxz00_1696);
			}
		}

	}



/* weakptr-data-set! */
	BGL_EXPORTED_DEF obj_t BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(obj_t
		BgL_ptrz00_5, obj_t BgL_objz00_6)
	{
		{	/* Llib/weakptr.scm 86 */
			weakptr_data_set(BgL_ptrz00_5, BgL_objz00_6);
			BUNSPEC;
			return BUNSPEC;
		}

	}



/* &weakptr-data-set! */
	obj_t BGl_z62weakptrzd2datazd2setz12z70zz__weakptrz00(obj_t BgL_envz00_1674,
		obj_t BgL_ptrz00_1675, obj_t BgL_objz00_1676)
	{
		{	/* Llib/weakptr.scm 86 */
			{	/* Llib/weakptr.scm 87 */
				obj_t BgL_auxz00_1705;

				if (BGL_WEAKPTRP(BgL_ptrz00_1675))
					{	/* Llib/weakptr.scm 87 */
						BgL_auxz00_1705 = BgL_ptrz00_1675;
					}
				else
					{
						obj_t BgL_auxz00_1708;

						BgL_auxz00_1708 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1573z00zz__weakptrz00,
							BINT(((long) 3267)), BGl_string1576z00zz__weakptrz00,
							BGl_string1575z00zz__weakptrz00, BgL_ptrz00_1675);
						FAILURE(BgL_auxz00_1708, BFALSE, BFALSE);
					}
				return
					BGl_weakptrzd2datazd2setz12z12zz__weakptrz00(BgL_auxz00_1705,
					BgL_objz00_1676);
			}
		}

	}



/* make-weakptr */
	BGL_EXPORTED_DEF obj_t BGl_makezd2weakptrzd2zz__weakptrz00(obj_t BgL_objz00_7)
	{
		{	/* Llib/weakptr.scm 93 */
			return make_weakptr(BgL_objz00_7);
		}

	}



/* &make-weakptr */
	obj_t BGl_z62makezd2weakptrzb0zz__weakptrz00(obj_t BgL_envz00_1677,
		obj_t BgL_objz00_1678)
	{
		{	/* Llib/weakptr.scm 93 */
			return BGl_makezd2weakptrzd2zz__weakptrz00(BgL_objz00_1678);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__weakptrz00()
	{
		{	/* Llib/weakptr.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__weakptrz00()
	{
		{	/* Llib/weakptr.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__weakptrz00()
	{
		{	/* Llib/weakptr.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__weakptrz00()
	{
		{	/* Llib/weakptr.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 214649622),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 220647683),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
			return
				BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1577z00zz__weakptrz00));
		}

	}

#ifdef __cplusplus
}
#endif
