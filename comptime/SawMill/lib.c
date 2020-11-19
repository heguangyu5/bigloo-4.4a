/*===========================================================================*/
/*   (SawMill/lib.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/lib.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_objectzd2initzd2zzsaw_libz00();
	static obj_t BGl_walkze70ze7zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_walkze71ze7zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_appendzd221011zd2zzsaw_libz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzsaw_libz00();
	static obj_t BGl_z62substzd2appendzb0zzsaw_libz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substz00zzsaw_libz00(obj_t, obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzsaw_libz00();
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_libz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzsaw_libz00();
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_libz00();
	static obj_t BGl_z62substz62zzsaw_libz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t, obj_t,
		obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_substzd2appendzd2envz00zzsaw_libz00,
		BgL_bgl_za762substza7d2appen1032z00, BGl_z62substzd2appendzb0zzsaw_libz00,
		0L, BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_substzd2envzd2zzsaw_libz00,
		BgL_bgl_za762substza762za7za7saw1033z00, BGl_z62substz62zzsaw_libz00, 0L,
		BUNSPEC, 3);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzsaw_libz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzsaw_libz00(long
		BgL_checksumz00_64, char *BgL_fromz00_65)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_libz00))
				{
					BGl_requirezd2initializa7ationz75zzsaw_libz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_libz00();
					BGl_libraryzd2moduleszd2initz00zzsaw_libz00();
					return BGl_methodzd2initzd2zzsaw_libz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_libz00()
	{
		{	/* SawMill/lib.scm 1 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_lib");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "saw_lib");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_libz00()
	{
		{	/* SawMill/lib.scm 1 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzsaw_libz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_9;

				BgL_headz00_9 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_10;
					obj_t BgL_tailz00_11;

					BgL_prevz00_10 = BgL_headz00_9;
					BgL_tailz00_11 = BgL_l1z00_1;
				BgL_loopz00_12:
					if (PAIRP(BgL_tailz00_11))
						{
							obj_t BgL_newzd2prevzd2_14;

							BgL_newzd2prevzd2_14 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_11), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_10, BgL_newzd2prevzd2_14);
							{
								obj_t BgL_tailz00_82;
								obj_t BgL_prevz00_81;

								BgL_prevz00_81 = BgL_newzd2prevzd2_14;
								BgL_tailz00_82 = CDR(BgL_tailz00_11);
								BgL_tailz00_11 = BgL_tailz00_82;
								BgL_prevz00_10 = BgL_prevz00_81;
								goto BgL_loopz00_12;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_9);
				}
			}
		}

	}



/* subst */
	BGL_EXPORTED_DEF obj_t BGl_substz00zzsaw_libz00(obj_t BgL_lz00_3,
		obj_t BgL_xz00_4, obj_t BgL_yz00_5)
	{
		{	/* SawMill/lib.scm 5 */
			return BGl_walkze71ze7zzsaw_libz00(BgL_xz00_4, BgL_yz00_5, BgL_lz00_3);
		}

	}



/* walk~1 */
	obj_t BGl_walkze71ze7zzsaw_libz00(obj_t BgL_xz00_63, obj_t BgL_yz00_62,
		obj_t BgL_lz00_18)
	{
		{	/* SawMill/lib.scm 12 */
			if (NULLP(BgL_lz00_18))
				{	/* SawMill/lib.scm 7 */
					return BgL_lz00_18;
				}
			else
				{	/* SawMill/lib.scm 9 */
					obj_t BgL_oz00_21;

					BgL_oz00_21 = CAR(((obj_t) BgL_lz00_18));
					if ((BgL_oz00_21 == BgL_xz00_63))
						{	/* SawMill/lib.scm 11 */
							obj_t BgL_arg1018z00_23;

							{	/* SawMill/lib.scm 11 */
								obj_t BgL_arg1019z00_24;

								BgL_arg1019z00_24 = CDR(((obj_t) BgL_lz00_18));
								BgL_arg1018z00_23 =
									BGl_walkze71ze7zzsaw_libz00(BgL_xz00_63, BgL_yz00_62,
									BgL_arg1019z00_24);
							}
							return MAKE_YOUNG_PAIR(BgL_yz00_62, BgL_arg1018z00_23);
						}
					else
						{	/* SawMill/lib.scm 12 */
							obj_t BgL_arg1020z00_25;

							{	/* SawMill/lib.scm 12 */
								obj_t BgL_arg1021z00_26;

								BgL_arg1021z00_26 = CDR(((obj_t) BgL_lz00_18));
								BgL_arg1020z00_25 =
									BGl_walkze71ze7zzsaw_libz00(BgL_xz00_63, BgL_yz00_62,
									BgL_arg1021z00_26);
							}
							return MAKE_YOUNG_PAIR(BgL_oz00_21, BgL_arg1020z00_25);
						}
				}
		}

	}



/* &subst */
	obj_t BGl_z62substz62zzsaw_libz00(obj_t BgL_envz00_52, obj_t BgL_lz00_53,
		obj_t BgL_xz00_54, obj_t BgL_yz00_55)
	{
		{	/* SawMill/lib.scm 5 */
			return BGl_substz00zzsaw_libz00(BgL_lz00_53, BgL_xz00_54, BgL_yz00_55);
		}

	}



/* subst-append */
	BGL_EXPORTED_DEF obj_t BGl_substzd2appendzd2zzsaw_libz00(obj_t BgL_lz00_6,
		obj_t BgL_xz00_7, obj_t BgL_yz00_8)
	{
		{	/* SawMill/lib.scm 15 */
			return BGl_walkze70ze7zzsaw_libz00(BgL_xz00_7, BgL_yz00_8, BgL_lz00_6);
		}

	}



/* walk~0 */
	obj_t BGl_walkze70ze7zzsaw_libz00(obj_t BgL_xz00_61, obj_t BgL_yz00_60,
		obj_t BgL_lz00_29)
	{
		{	/* SawMill/lib.scm 22 */
			if (NULLP(BgL_lz00_29))
				{	/* SawMill/lib.scm 17 */
					return BgL_lz00_29;
				}
			else
				{	/* SawMill/lib.scm 19 */
					obj_t BgL_oz00_32;

					BgL_oz00_32 = CAR(((obj_t) BgL_lz00_29));
					if ((BgL_oz00_32 == BgL_xz00_61))
						{	/* SawMill/lib.scm 21 */
							obj_t BgL_arg1025z00_34;

							{	/* SawMill/lib.scm 21 */
								obj_t BgL_arg1026z00_35;

								BgL_arg1026z00_35 = CDR(((obj_t) BgL_lz00_29));
								BgL_arg1025z00_34 =
									BGl_walkze70ze7zzsaw_libz00(BgL_xz00_61, BgL_yz00_60,
									BgL_arg1026z00_35);
							}
							return
								BGl_appendzd221011zd2zzsaw_libz00(BgL_yz00_60,
								BgL_arg1025z00_34);
						}
					else
						{	/* SawMill/lib.scm 22 */
							obj_t BgL_arg1027z00_36;

							{	/* SawMill/lib.scm 22 */
								obj_t BgL_arg1028z00_37;

								BgL_arg1028z00_37 = CDR(((obj_t) BgL_lz00_29));
								BgL_arg1027z00_36 =
									BGl_walkze70ze7zzsaw_libz00(BgL_xz00_61, BgL_yz00_60,
									BgL_arg1028z00_37);
							}
							return MAKE_YOUNG_PAIR(BgL_oz00_32, BgL_arg1027z00_36);
						}
				}
		}

	}



/* &subst-append */
	obj_t BGl_z62substzd2appendzb0zzsaw_libz00(obj_t BgL_envz00_56,
		obj_t BgL_lz00_57, obj_t BgL_xz00_58, obj_t BgL_yz00_59)
	{
		{	/* SawMill/lib.scm 15 */
			return
				BGl_substzd2appendzd2zzsaw_libz00(BgL_lz00_57, BgL_xz00_58,
				BgL_yz00_59);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_libz00()
	{
		{	/* SawMill/lib.scm 1 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_libz00()
	{
		{	/* SawMill/lib.scm 1 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_libz00()
	{
		{	/* SawMill/lib.scm 1 */
			return BUNSPEC;
		}

	}

#ifdef __cplusplus
}
#endif
