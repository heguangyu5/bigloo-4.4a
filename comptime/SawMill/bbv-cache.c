/*===========================================================================*/
/*   (SawMill/bbv-cache.scm)                                                 */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent SawMill/bbv-cache.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62startzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2(obj_t);
	static obj_t BGl_objectzd2initzd2zzsaw_bbvzd2cachezd2();
	static obj_t BGl_methodzd2initzd2zzsaw_bbvzd2cachezd2();
	BGL_EXPORTED_DEF obj_t BGl_za2vectorzd2boundzd2checkza2z00zzsaw_bbvzd2cachezd2
		= BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_stopzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
	BGL_EXPORTED_DEF obj_t BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2 = BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2 =
		BUNSPEC;
	BGL_EXPORTED_DEF obj_t BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2 =
		BUNSPEC;
	static obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2cachezd2();
	BGL_EXPORTED_DEF obj_t BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_startzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
	static bool_t BGl_za2cachezd2startedzf3za2z21zzsaw_bbvzd2cachezd2;
	extern obj_t BGl_za2intza2z00zztype_cachez00;
	static obj_t BGl_requirezd2initializa7ationz75zzsaw_bbvzd2cachezd2 = BUNSPEC;
	extern obj_t BGl_getzd2globalzf2modulez20zzast_envz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2cachezd2();
	static obj_t BGl_genericzd2initzd2zzsaw_bbvzd2cachezd2();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2 = BUNSPEC;
	static obj_t BGl_z62stopzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2(obj_t);
	BGL_EXPORTED_DEF obj_t BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_envz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_cachez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2cachezd2();
	static obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2cachezd2();
	static obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2cachezd2();
	BGL_EXPORTED_DEF obj_t BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2 =
		BUNSPEC;
	extern obj_t BGl_za2bintza2z00zztype_cachez00;
	static obj_t __cnst[9];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_startzd2bbvzd2cachez12zd2envzc0zzsaw_bbvzd2cachezd2,
		BgL_bgl_za762startza7d2bbvza7d1131za7,
		BGl_z62startzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2, 0L, BUNSPEC, 0);
	      DEFINE_STRING(BGl_string1126z00zzsaw_bbvzd2cachezd2,
		BgL_bgl_string1126za700za7za7s1132za7, "saw_bbv-cache", 13);
	      DEFINE_STRING(BGl_string1127z00zzsaw_bbvzd2cachezd2,
		BgL_bgl_string1127za700za7za7s1133za7,
		"$vector-bound-check? $bint->long $int->long c-=fx c->=fx c->fx c-<=fx foreign c-<fx ",
		84);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_stopzd2bbvzd2cachez12zd2envzc0zzsaw_bbvzd2cachezd2,
		BgL_bgl_za762stopza7d2bbvza7d21134za7,
		BGl_z62stopzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_za2vectorzd2boundzd2checkza2z00zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2));
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2));
		     ADD_ROOT((void *) (&BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzsaw_bbvzd2cachezd2(long
		BgL_checksumz00_483, char *BgL_fromz00_484)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzsaw_bbvzd2cachezd2))
				{
					BGl_requirezd2initializa7ationz75zzsaw_bbvzd2cachezd2 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzsaw_bbvzd2cachezd2();
					BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2cachezd2();
					BGl_cnstzd2initzd2zzsaw_bbvzd2cachezd2();
					BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2cachezd2();
					return BGl_toplevelzd2initzd2zzsaw_bbvzd2cachezd2();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"saw_bbv-cache");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"saw_bbv-cache");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"saw_bbv-cache");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"saw_bbv-cache");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			{	/* SawMill/bbv-cache.scm 15 */
				obj_t BgL_cportz00_470;

				{	/* SawMill/bbv-cache.scm 15 */
					obj_t BgL_stringz00_478;

					BgL_stringz00_478 = BGl_string1127z00zzsaw_bbvzd2cachezd2;
					{	/* SawMill/bbv-cache.scm 15 */
						obj_t BgL_startz00_479;

						BgL_startz00_479 = BINT(((long) 0));
						{	/* SawMill/bbv-cache.scm 15 */
							obj_t BgL_endz00_480;

							BgL_endz00_480 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_478)));
							{	/* SawMill/bbv-cache.scm 15 */

								BgL_cportz00_470 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_478, BgL_startz00_479, BgL_endz00_480);
				}}}}
				{
					long BgL_iz00_471;

					BgL_iz00_471 = ((long) 8);
				BgL_loopz00_472:
					if ((BgL_iz00_471 == ((long) -1)))
						{	/* SawMill/bbv-cache.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* SawMill/bbv-cache.scm 15 */
							{	/* SawMill/bbv-cache.scm 15 */
								obj_t BgL_arg1129z00_474;

								{	/* SawMill/bbv-cache.scm 15 */

									{	/* SawMill/bbv-cache.scm 15 */
										obj_t BgL_locationz00_476;

										BgL_locationz00_476 = BBOOL(((bool_t) 0));
										{	/* SawMill/bbv-cache.scm 15 */

											BgL_arg1129z00_474 =
												BGl_readz00zz__readerz00(BgL_cportz00_470,
												BgL_locationz00_476);
										}
									}
								}
								{	/* SawMill/bbv-cache.scm 15 */
									int BgL_tmpz00_506;

									BgL_tmpz00_506 = (int) (BgL_iz00_471);
									CNST_TABLE_SET(BgL_tmpz00_506, BgL_arg1129z00_474);
							}}
							{	/* SawMill/bbv-cache.scm 15 */
								int BgL_auxz00_477;

								BgL_auxz00_477 = (int) ((BgL_iz00_471 - ((long) 1)));
								{
									long BgL_iz00_511;

									BgL_iz00_511 = (long) (BgL_auxz00_477);
									BgL_iz00_471 = BgL_iz00_511;
									goto BgL_loopz00_472;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			BGl_za2cachezd2startedzf3za2z21zzsaw_bbvzd2cachezd2 = ((bool_t) 0);
			BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2vectorzd2boundzd2checkza2z00zzsaw_bbvzd2cachezd2 = BFALSE;
			return (BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2 = BFALSE, BUNSPEC);
		}

	}



/* start-bbv-cache! */
	BGL_EXPORTED_DEF obj_t BGl_startzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 52 */
			if (BGl_za2cachezd2startedzf3za2z21zzsaw_bbvzd2cachezd2)
				{	/* SawMill/bbv-cache.scm 53 */
					return BFALSE;
				}
			else
				{	/* SawMill/bbv-cache.scm 53 */
					BGl_za2cachezd2startedzf3za2z21zzsaw_bbvzd2cachezd2 = ((bool_t) 1);
					BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 0)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 2)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 3)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 4)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 5)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 6)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 7)),
						CNST_TABLE_REF(((long) 1)));
					BGl_za2vectorzd2boundzd2checkza2z00zzsaw_bbvzd2cachezd2 =
						BGl_getzd2globalzf2modulez20zzast_envz00(CNST_TABLE_REF(((long) 8)),
						CNST_TABLE_REF(((long) 1)));
					{	/* SawMill/bbv-cache.scm 64 */
						obj_t BgL_arg1100z00_426;

						BgL_arg1100z00_426 =
							MAKE_YOUNG_PAIR(BGl_za2intza2z00zztype_cachez00,
							BGl_za2bintza2z00zztype_cachez00);
						{	/* SawMill/bbv-cache.scm 64 */
							obj_t BgL_list1101z00_427;

							BgL_list1101z00_427 = MAKE_YOUNG_PAIR(BgL_arg1100z00_426, BNIL);
							return (BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2 =
								BgL_list1101z00_427, BUNSPEC);
						}
					}
				}
		}

	}



/* &start-bbv-cache! */
	obj_t BGl_z62startzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2(obj_t
		BgL_envz00_468)
	{
		{	/* SawMill/bbv-cache.scm 52 */
			return BGl_startzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
		}

	}



/* stop-bbv-cache! */
	BGL_EXPORTED_DEF obj_t BGl_stopzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 69 */
			BGl_za2cachezd2startedzf3za2z21zzsaw_bbvzd2cachezd2 = ((bool_t) 0);
			BGl_za2zc3fxza2zc3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2zc3zd3fxza2z10zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2ze3fxza2ze3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2ze3zd3fxza2z30zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2zd3fxza2zd3zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2intzd2ze3longza2z31zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2bintzd2ze3longza2z31zzsaw_bbvzd2cachezd2 = BFALSE;
			BGl_za2vectorzd2boundzd2checkza2z00zzsaw_bbvzd2cachezd2 = BFALSE;
			return (BGl_za2typezd2normsza2zd2zzsaw_bbvzd2cachezd2 = BFALSE, BUNSPEC);
		}

	}



/* &stop-bbv-cache! */
	obj_t BGl_z62stopzd2bbvzd2cachez12z70zzsaw_bbvzd2cachezd2(obj_t
		BgL_envz00_469)
	{
		{	/* SawMill/bbv-cache.scm 69 */
			return BGl_stopzd2bbvzd2cachez12z12zzsaw_bbvzd2cachezd2();
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzsaw_bbvzd2cachezd2()
	{
		{	/* SawMill/bbv-cache.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1126z00zzsaw_bbvzd2cachezd2));
			BGl_modulezd2initializa7ationz75zztype_cachez00(((long) 346490117),
				BSTRING_TO_STRING(BGl_string1126z00zzsaw_bbvzd2cachezd2));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1126z00zzsaw_bbvzd2cachezd2));
			return
				BGl_modulezd2initializa7ationz75zzast_envz00(((long) 146730597),
				BSTRING_TO_STRING(BGl_string1126z00zzsaw_bbvzd2cachezd2));
		}

	}

#ifdef __cplusplus
}
#endif
