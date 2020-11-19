/*===========================================================================*/
/*   (Write/scheme.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/scheme.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62writezd2schemezd2filezd2headerzb0zzwrite_schemez00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_commandzd2linezd2zz__osz00();
	static obj_t BGl_objectzd2initzd2zzwrite_schemez00();
	static obj_t BGl_z62writezd2schemezd2commentz62zzwrite_schemez00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_methodzd2initzd2zzwrite_schemez00();
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	static obj_t BGl_gczd2rootszd2initz00zzwrite_schemez00();
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_schemez00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzwrite_schemez00();
	BGL_EXPORTED_DECL obj_t
		BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_fprintz00zz__r4_output_6_10_3z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_schemez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_schemez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_schemez00();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2schemezd2filezd2headerzd2envz00zzwrite_schemez00,
		BgL_bgl_za762writeza7d2schem1040z00,
		BGl_z62writezd2schemezd2filezd2headerzb0zzwrite_schemez00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_writezd2schemezd2commentzd2envzd2zzwrite_schemez00,
		BgL_bgl_za762writeza7d2schem1041z00, va_generic_entry,
		BGl_z62writezd2schemezd2commentz62zzwrite_schemez00, BUNSPEC, -2);
	      DEFINE_STRING(BGl_string1035z00zzwrite_schemez00,
		BgL_bgl_string1035za700za7za7w1042za7,
		";; ==========================================================", 61);
	      DEFINE_STRING(BGl_string1036z00zzwrite_schemez00,
		BgL_bgl_string1036za700za7za7w1043za7, ";; ", 3);
	      DEFINE_STRING(BGl_string1037z00zzwrite_schemez00,
		BgL_bgl_string1037za700za7za7w1044za7, "    ", 4);
	      DEFINE_STRING(BGl_string1038z00zzwrite_schemez00,
		BgL_bgl_string1038za700za7za7w1045za7, ";;", 2);
	      DEFINE_STRING(BGl_string1039z00zzwrite_schemez00,
		BgL_bgl_string1039za700za7za7w1046za7, "write_scheme", 12);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzwrite_schemez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_schemez00(long
		BgL_checksumz00_72, char *BgL_fromz00_73)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_schemez00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_schemez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzwrite_schemez00();
					BGl_libraryzd2moduleszd2initz00zzwrite_schemez00();
					BGl_importedzd2moduleszd2initz00zzwrite_schemez00();
					return BGl_methodzd2initzd2zzwrite_schemez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_scheme");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "write_scheme");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_scheme");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "write_scheme");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* write-scheme-file-header */
	BGL_EXPORTED_DEF obj_t
		BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(obj_t BgL_portz00_3,
		obj_t BgL_stringz00_4)
	{
		{	/* Write/scheme.scm 23 */
			bgl_display_string(BGl_string1035z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			bgl_display_string(BGl_string1036z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_obj(BgL_stringz00_4, BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			bgl_display_string(BGl_string1036z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
				BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			bgl_display_string(BGl_string1036z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_obj(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
				BgL_portz00_3);
			bgl_display_string(BGl_string1037z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_obj(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
				BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			bgl_display_string(BGl_string1036z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_obj(BGl_commandzd2linezd2zz__osz00(), BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			bgl_display_string(BGl_string1035z00zzwrite_schemez00, BgL_portz00_3);
			bgl_display_char(((unsigned char) 10), BgL_portz00_3);
			return bgl_display_char(((unsigned char) 10), BgL_portz00_3);
		}

	}



/* &write-scheme-file-header */
	obj_t BGl_z62writezd2schemezd2filezd2headerzb0zzwrite_schemez00(obj_t
		BgL_envz00_66, obj_t BgL_portz00_67, obj_t BgL_stringz00_68)
	{
		{	/* Write/scheme.scm 23 */
			return
				BGl_writezd2schemezd2filezd2headerzd2zzwrite_schemez00(BgL_portz00_67,
				BgL_stringz00_68);
		}

	}



/* write-scheme-comment */
	BGL_EXPORTED_DEF obj_t BGl_writezd2schemezd2commentz00zzwrite_schemez00(obj_t
		BgL_portz00_5, obj_t BgL_sexpz00_6)
	{
		{	/* Write/scheme.scm 35 */
			if (NULLP(BgL_sexpz00_6))
				{	/* Write/scheme.scm 37 */
					bgl_display_string(BGl_string1038z00zzwrite_schemez00, BgL_portz00_5);
					return bgl_display_char(((unsigned char) 10), BgL_portz00_5);
				}
			else
				{	/* Write/scheme.scm 37 */
					if (NULLP(CDR(((obj_t) BgL_sexpz00_6))))
						{	/* Write/scheme.scm 39 */
							bgl_display_string(BGl_string1036z00zzwrite_schemez00,
								BgL_portz00_5);
							{	/* Write/scheme.scm 40 */
								obj_t BgL_arg1027z00_27;

								BgL_arg1027z00_27 = CAR(((obj_t) BgL_sexpz00_6));
								bgl_display_obj(BgL_arg1027z00_27, BgL_portz00_5);
							}
							return bgl_display_char(((unsigned char) 10), BgL_portz00_5);
						}
					else
						{	/* Write/scheme.scm 42 */
							obj_t BgL_runner1031z00_31;

							{	/* Write/scheme.scm 42 */
								obj_t BgL_list1028z00_28;

								{	/* Write/scheme.scm 42 */
									obj_t BgL_arg1029z00_29;

									BgL_arg1029z00_29 = MAKE_YOUNG_PAIR(BgL_sexpz00_6, BNIL);
									BgL_list1028z00_28 =
										MAKE_YOUNG_PAIR(BGl_string1036z00zzwrite_schemez00,
										BgL_arg1029z00_29);
								}
								BgL_runner1031z00_31 =
									BGl_consza2za2zz__r4_pairs_and_lists_6_3z00(BgL_portz00_5,
									BgL_list1028z00_28);
							}
							{	/* Write/scheme.scm 42 */
								obj_t BgL_aux1030z00_30;

								BgL_aux1030z00_30 = CAR(BgL_runner1031z00_31);
								BgL_runner1031z00_31 = CDR(BgL_runner1031z00_31);
								return
									BGl_fprintz00zz__r4_output_6_10_3z00(BgL_aux1030z00_30,
									BgL_runner1031z00_31);
							}
						}
				}
		}

	}



/* &write-scheme-comment */
	obj_t BGl_z62writezd2schemezd2commentz62zzwrite_schemez00(obj_t BgL_envz00_69,
		obj_t BgL_portz00_70, obj_t BgL_sexpz00_71)
	{
		{	/* Write/scheme.scm 35 */
			return
				BGl_writezd2schemezd2commentz00zzwrite_schemez00(BgL_portz00_70,
				BgL_sexpz00_71);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_schemez00()
	{
		{	/* Write/scheme.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1039z00zzwrite_schemez00));
		}

	}

#ifdef __cplusplus
}
#endif
