/*===========================================================================*/
/*   (Engine/pass.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/pass.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	extern obj_t BGl_za2passza2z00zzengine_paramz00;
	static obj_t BGl_objectzd2initzd2zzengine_passz00();
	static obj_t BGl_methodzd2initzd2zzengine_passz00();
	static obj_t BGl_gczd2rootszd2initz00zzengine_passz00();
	BGL_EXPORTED_DEF obj_t BGl_za2currentzd2passza2zd2zzengine_passz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_passz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzengine_passz00();
	static obj_t BGl_genericzd2initzd2zzengine_passz00();
	static obj_t BGl_z62stopzd2onzd2passz62zzengine_passz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_passz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_passz00();
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_stopzd2onzd2passzd2envzd2zzengine_passz00,
		BgL_bgl_za762stopza7d2onza7d2p1017za7,
		BGl_z62stopzd2onzd2passz62zzengine_passz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1016z00zzengine_passz00,
		BgL_bgl_string1016za700za7za7e1018za7, "engine_pass", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2currentzd2passza2zd2zzengine_passz00));
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzengine_passz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_passz00(long
		BgL_checksumz00_18, char *BgL_fromz00_19)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_passz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_passz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_passz00();
					BGl_libraryzd2moduleszd2initz00zzengine_passz00();
					BGl_importedzd2moduleszd2initz00zzengine_passz00();
					return BGl_toplevelzd2initzd2zzengine_passz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "engine_pass");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			return (BGl_za2currentzd2passza2zd2zzengine_passz00 = BNIL, BUNSPEC);
		}

	}



/* stop-on-pass */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2onzd2passz00zzengine_passz00(obj_t
		BgL_passz00_3, obj_t BgL_thunkz00_4)
	{
		{	/* Engine/pass.scm 29 */
			if ((BGl_za2passza2z00zzengine_paramz00 == BgL_passz00_3))
				{	/* Engine/pass.scm 30 */
					PROCEDURE_ENTRY(BgL_thunkz00_4) (BgL_thunkz00_4, BEOA);
					return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 0)));
				}
			else
				{	/* Engine/pass.scm 30 */
					return BFALSE;
				}
		}

	}



/* &stop-on-pass */
	obj_t BGl_z62stopzd2onzd2passz62zzengine_passz00(obj_t BgL_envz00_15,
		obj_t BgL_passz00_16, obj_t BgL_thunkz00_17)
	{
		{	/* Engine/pass.scm 29 */
			return
				BGl_stopzd2onzd2passz00zzengine_passz00(BgL_passz00_16,
				BgL_thunkz00_17);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_passz00()
	{
		{	/* Engine/pass.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1016z00zzengine_passz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1016z00zzengine_passz00));
		}

	}

#ifdef __cplusplus
}
#endif
