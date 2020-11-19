/*===========================================================================*/
/*   (Read/access.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Read/access.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zzread_accessz00();
	static obj_t BGl_methodzd2initzd2zzread_accessz00();
	BGL_EXPORTED_DECL obj_t BGl_readzd2accesszd2filesz00zzread_accessz00();
	extern obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzread_accessz00();
	static obj_t BGl_innerzd2readzd2accesszd2fileze70z35zzread_accessz00(obj_t);
	extern obj_t BGl_za2accesszd2filesza2zd2zzengine_paramz00;
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzread_accessz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzread_accessz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzread_accessz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzread_accessz00();
	static obj_t BGl_z62readzd2accesszd2filesz62zzread_accessz00(obj_t);
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_readzd2accesszd2fileszd2envzd2zzread_accessz00,
		BgL_bgl_za762readza7d2access1038z00,
		BGl_z62readzd2accesszd2filesz62zzread_accessz00, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1033z00zzread_accessz00,
		BgL_bgl_string1033za700za7za7r1039za7, "read-access-file", 16);
	      DEFINE_STRING(BGl_string1034z00zzread_accessz00,
		BgL_bgl_string1034za700za7za7r1040za7, "Can't find access file", 22);
	      DEFINE_STRING(BGl_string1035z00zzread_accessz00,
		BgL_bgl_string1035za700za7za7r1041za7, "]", 1);
	      DEFINE_STRING(BGl_string1036z00zzread_accessz00,
		BgL_bgl_string1036za700za7za7r1042za7, "      [reading afile ", 21);
	      DEFINE_STRING(BGl_string1037z00zzread_accessz00,
		BgL_bgl_string1037za700za7za7r1043za7, "read_access", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzread_accessz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzread_accessz00(long
		BgL_checksumz00_40, char *BgL_fromz00_41)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzread_accessz00))
				{
					BGl_requirezd2initializa7ationz75zzread_accessz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzread_accessz00();
					BGl_libraryzd2moduleszd2initz00zzread_accessz00();
					BGl_importedzd2moduleszd2initz00zzread_accessz00();
					return BGl_methodzd2initzd2zzread_accessz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0), "read_access");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"read_access");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"read_access");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "read_access");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* read-access-files */
	BGL_EXPORTED_DEF obj_t BGl_readzd2accesszd2filesz00zzread_accessz00()
	{
		{	/* Read/access.scm 26 */
			if (NULLP(BGl_za2accesszd2filesza2zd2zzengine_paramz00))
				{	/* Read/access.scm 30 */
					if (fexists(BSTRING_TO_STRING
							(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00)))
						{	/* Read/access.scm 31 */
							return
								BGl_innerzd2readzd2accesszd2fileze70z35zzread_accessz00
								(BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00);
						}
					else
						{	/* Read/access.scm 31 */
							return BFALSE;
						}
				}
			else
				{
					obj_t BgL_l1012z00_15;

					{	/* Read/access.scm 33 */
						bool_t BgL_tmpz00_60;

						BgL_l1012z00_15 = BGl_za2accesszd2filesza2zd2zzengine_paramz00;
					BgL_zc3z04anonymousza31019ze3z87_16:
						if (PAIRP(BgL_l1012z00_15))
							{	/* Read/access.scm 33 */
								{	/* Read/access.scm 34 */
									obj_t BgL_fz00_18;

									BgL_fz00_18 = CAR(BgL_l1012z00_15);
									if (fexists(BSTRING_TO_STRING(BgL_fz00_18)))
										{	/* Read/access.scm 34 */
											BGl_innerzd2readzd2accesszd2fileze70z35zzread_accessz00
												(BgL_fz00_18);
										}
									else
										{	/* Read/access.scm 34 */
											BGl_userzd2errorzd2zztools_errorz00
												(BGl_string1033z00zzread_accessz00,
												BGl_string1034z00zzread_accessz00, BgL_fz00_18, BNIL);
										}
								}
								{
									obj_t BgL_l1012z00_69;

									BgL_l1012z00_69 = CDR(BgL_l1012z00_15);
									BgL_l1012z00_15 = BgL_l1012z00_69;
									goto BgL_zc3z04anonymousza31019ze3z87_16;
								}
							}
						else
							{	/* Read/access.scm 33 */
								BgL_tmpz00_60 = ((bool_t) 1);
							}
						return BBOOL(BgL_tmpz00_60);
					}
				}
		}

	}



/* inner-read-access-file~0 */
	obj_t BGl_innerzd2readzd2accesszd2fileze70z35zzread_accessz00(obj_t
		BgL_namez00_23)
	{
		{	/* Read/access.scm 28 */
			{	/* Read/access.scm 28 */
				obj_t BgL_list1025z00_25;

				{	/* Read/access.scm 28 */
					obj_t BgL_arg1026z00_26;

					{	/* Read/access.scm 28 */
						obj_t BgL_arg1027z00_27;

						{	/* Read/access.scm 28 */
							obj_t BgL_arg1028z00_28;

							BgL_arg1028z00_28 =
								MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
							BgL_arg1027z00_27 =
								MAKE_YOUNG_PAIR(BGl_string1035z00zzread_accessz00,
								BgL_arg1028z00_28);
						}
						BgL_arg1026z00_26 =
							MAKE_YOUNG_PAIR(BgL_namez00_23, BgL_arg1027z00_27);
					}
					BgL_list1025z00_25 =
						MAKE_YOUNG_PAIR(BGl_string1036z00zzread_accessz00,
						BgL_arg1026z00_26);
				}
				BGl_verbosez00zztools_speekz00(BINT(((long) 2)), BgL_list1025z00_25);
			}
			return BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_namez00_23);
		}

	}



/* &read-access-files */
	obj_t BGl_z62readzd2accesszd2filesz62zzread_accessz00(obj_t BgL_envz00_39)
	{
		{	/* Read/access.scm 26 */
			return BGl_readzd2accesszd2filesz00zzread_accessz00();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzread_accessz00()
	{
		{	/* Read/access.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1037z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1037z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1037z00zzread_accessz00));
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1037z00zzread_accessz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1037z00zzread_accessz00));
		}

	}

#ifdef __cplusplus
}
#endif
