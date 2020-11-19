/*===========================================================================*/
/*   (Engine/signals.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/signals.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t
		BGl_z62installzd2compilerzd2signalsz12z70zzengine_signalsz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzengine_signalsz00();
	static obj_t BGl_methodzd2initzd2zzengine_signalsz00();
	static obj_t BGl_gczd2rootszd2initz00zzengine_signalsz00();
	static obj_t BGl_z62killzd2myzd2selfz62zzengine_signalsz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_signalsz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzengine_signalsz00();
	BGL_EXPORTED_DECL obj_t
		BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
	BGL_IMPORT obj_t BGl_signalz00zz__osz00(int, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_signalsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_signalsz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_signalsz00();
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1018z00zzengine_signalsz00,
		BgL_bgl_za762killza7d2myza7d2s1022za7,
		BGl_z62killzd2myzd2selfz62zzengine_signalsz00, 0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1019z00zzengine_signalsz00,
		BgL_bgl_string1019za700za7za7e1023za7,
		"*** INTERNAL-ERROR: Illegal signal caught", 41);
	      DEFINE_STRING(BGl_string1020z00zzengine_signalsz00,
		BgL_bgl_string1020za700za7za7e1024za7, " --- aborting...", 16);
	      DEFINE_STRING(BGl_string1021z00zzengine_signalsz00,
		BgL_bgl_string1021za700za7za7e1025za7, "engine_signals", 14);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_installzd2compilerzd2signalsz12zd2envzc0zzengine_signalsz00,
		BgL_bgl_za762installza7d2com1026z00,
		BGl_z62installzd2compilerzd2signalsz12z70zzengine_signalsz00, 0L, BUNSPEC,
		0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzengine_signalsz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzengine_signalsz00(long BgL_checksumz00_29,
		char *BgL_fromz00_30)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_signalsz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_signalsz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_signalsz00();
					BGl_libraryzd2moduleszd2initz00zzengine_signalsz00();
					BGl_importedzd2moduleszd2initz00zzengine_signalsz00();
					return BGl_methodzd2initzd2zzengine_signalsz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"engine_signals");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_signals");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_signals");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_signals");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			return bgl_gc_roots_register();
		}

	}



/* install-compiler-signals! */
	BGL_EXPORTED_DEF obj_t
		BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 24 */
			BGl_signalz00zz__osz00(SIGFPE, BGl_proc1018z00zzengine_signalsz00);
			BGl_signalz00zz__osz00(SIGILL, BGl_proc1018z00zzengine_signalsz00);
			BGl_signalz00zz__osz00(SIGBUS, BGl_proc1018z00zzengine_signalsz00);
			return
				BGl_signalz00zz__osz00(SIGSEGV, BGl_proc1018z00zzengine_signalsz00);
		}

	}



/* &install-compiler-signals! */
	obj_t BGl_z62installzd2compilerzd2signalsz12z70zzengine_signalsz00(obj_t
		BgL_envz00_24)
	{
		{	/* Engine/signals.scm 24 */
			return BGl_installzd2compilerzd2signalsz12z12zzengine_signalsz00();
		}

	}



/* &kill-my-self */
	obj_t BGl_z62killzd2myzd2selfz62zzengine_signalsz00(obj_t BgL_envz00_25,
		obj_t BgL_nz00_26)
	{
		{	/* Engine/signals.scm 25 */
			{	/* Engine/signals.scm 26 */
				obj_t BgL_port1012z00_27;

				{	/* Engine/signals.scm 26 */
					obj_t BgL_res1017z00_28;

					{	/* Engine/signals.scm 26 */
						obj_t BgL_tmpz00_48;

						BgL_tmpz00_48 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1017z00_28 = BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_48);
					}
					BgL_port1012z00_27 = BgL_res1017z00_28;
				}
				bgl_display_string(BGl_string1019z00zzengine_signalsz00,
					BgL_port1012z00_27);
				bgl_display_string(BGl_string1020z00zzengine_signalsz00,
					BgL_port1012z00_27);
				bgl_display_obj(BgL_nz00_26, BgL_port1012z00_27);
				bgl_display_char(((unsigned char) 10), BgL_port1012z00_27);
			}
			return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 2)));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_signalsz00()
	{
		{	/* Engine/signals.scm 16 */
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1021z00zzengine_signalsz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1021z00zzengine_signalsz00));
		}

	}

#ifdef __cplusplus
}
#endif
