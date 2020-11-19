/*===========================================================================*/
/*   (Init/main.scm)                                                         */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Init/main.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_zc3z04exitza31025ze3ze70z60zzinit_mainz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzinit_mainz00();
	static obj_t BGl_methodzd2initzd2zzinit_mainz00();
	static obj_t BGl_z62exitz62zzinit_mainz00(obj_t, obj_t);
	extern obj_t BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
	static obj_t BGl_z62compilerzd2exitzb0zzinit_mainz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_unwindzd2untilz12zc0zz__bexitz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_bigloozd2initializa7edz12z67zz__paramz00();
	static obj_t BGl_gczd2rootszd2initz00zzinit_mainz00();
	static obj_t BGl_za2compilerzd2exitza2zd2zzinit_mainz00 = BUNSPEC;
	static obj_t BGl_z62mainz62zzinit_mainz00(obj_t, obj_t);
	extern obj_t BGl_stopzd2tracezd2zztools_tracez00();
	BGL_IMPORT obj_t BGl_exitdzd2popzd2protectz12z12zz__bexitz00(obj_t);
	extern obj_t BGl_enginez00zzengine_enginez00();
	static obj_t BGl_requirezd2initializa7ationz75zzinit_mainz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzinit_mainz00();
	static obj_t BGl_z62zc3z04anonymousza31027ze3ze5zzinit_mainz00(obj_t);
	static obj_t BGl_genericzd2initzd2zzinit_mainz00();
	BGL_IMPORT obj_t BGl_exitdzd2pushzd2protectz12z12zz__bexitz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t bigloo_main(obj_t);
	BGL_IMPORT obj_t BGl_exitz00zz__errorz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_enginez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_parsezd2argszd2(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_setrcz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_libraryzd2moduleszd2initz00zzinit_mainz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzinit_mainz00();
	BGL_EXPORTED_DECL obj_t BGl_mainz00zzinit_mainz00(obj_t);
	static obj_t
		BGl_z62zc3z04za2compilerzd2exitza2za31019ze3z37zzinit_mainz00(obj_t, obj_t);
	extern obj_t BGl_parsezd2argszd2zzinit_parsezd2argszd2(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_BGL_L_PROCEDURE(BGl_proc1028z00zzinit_mainz00,
		BgL_bgl_za762za7c3za704za7a2comp1033z00,
		BGl_z62zc3z04za2compilerzd2exitza2za31019ze3z37zzinit_mainz00);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1030z00zzinit_mainz00,
		BgL_bgl_za762za7c3za704anonymo1034za7,
		BGl_z62zc3z04anonymousza31027ze3ze5zzinit_mainz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_compilerzd2exitzd2envz00zzinit_mainz00,
		BgL_bgl_za762compilerza7d2ex1035z00,
		BGl_z62compilerzd2exitzb0zzinit_mainz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_mainzd2envzd2zzinit_mainz00,
		BgL_bgl_za762mainza762za7za7init1036z00, BGl_z62mainz62zzinit_mainz00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1029z00zzinit_mainz00,
		BgL_bgl_string1029za700za7za7i1037za7, "-q", 2);
	      DEFINE_STRING(BGl_string1031z00zzinit_mainz00,
		BgL_bgl_string1031za700za7za7i1038za7, "init_main", 9);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_za2compilerzd2exitza2zd2zzinit_mainz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzinit_mainz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}


/* Libraries setup */
	static int bigloo_libinit(int argc, char *argv[], char *env[])
	{
		return 0;
	}


	long bigloo_abort(long n)
	{
		return n;
	}

	int BIGLOO_MAIN(int argc, char *argv[], char *env[])
	{
		return _bigloo_main(argc, argv, env, &bigloo_main, &bigloo_libinit, 0);
	}


/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long
		BgL_checksumz00_45, char *BgL_fromz00_46)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzinit_mainz00))
				{
					BGl_requirezd2initializa7ationz75zzinit_mainz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzinit_mainz00();
					BGl_libraryzd2moduleszd2initz00zzinit_mainz00();
					BGl_importedzd2moduleszd2initz00zzinit_mainz00();
					return BGl_toplevelzd2initzd2zzinit_mainz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* bigloo_main */
	BGL_EXPORTED_DEF obj_t bigloo_main(obj_t BgL_argvz00_47)
	{
		{
			BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 0), "init_main");
			BGl_bigloozd2initializa7edz12z67zz__paramz00();
			{
				obj_t BgL_tmpz00_58;

				BgL_tmpz00_58 = BGl_mainz00zzinit_mainz00(BgL_argvz00_47);
				return BIGLOO_EXIT(BgL_tmpz00_58);
			}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 0), "init_main");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "init_main");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"init_main");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "init_main");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			return (BGl_za2compilerzd2exitza2zd2zzinit_mainz00 =
				BGl_proc1028z00zzinit_mainz00, BUNSPEC);
		}

	}



/* &<@*compiler-exit*:1019> */
	obj_t BGl_z62zc3z04za2compilerzd2exitza2za31019ze3z37zzinit_mainz00(obj_t
		BgL_envz00_31, obj_t BgL_xz00_32)
	{
		{	/* Init/main.scm 29 */
			{	/* Init/main.scm 29 */
				obj_t BgL_list1020z00_44;

				BgL_list1020z00_44 = MAKE_YOUNG_PAIR(BgL_xz00_32, BNIL);
				return BGl_exitz00zz__errorz00(BgL_list1020z00_44);
			}
		}

	}



/* main */
	BGL_EXPORTED_DEF obj_t BGl_mainz00zzinit_mainz00(obj_t BgL_argvz00_3)
	{
		{	/* Init/main.scm 34 */
			if (CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
					(BGl_string1029z00zzinit_mainz00, BgL_argvz00_3)))
				{	/* Init/main.scm 38 */
					BFALSE;
				}
			else
				{	/* Init/main.scm 38 */
					BGl_setupzd2defaultzd2valuesz00zzinit_setrcz00();
				}
			return BGl_zc3z04exitza31025ze3ze70z60zzinit_mainz00(BgL_argvz00_3);
		}

	}



/* <@exit:1025>~0 */
	obj_t BGl_zc3z04exitza31025ze3ze70z60zzinit_mainz00(obj_t BgL_argvz00_43)
	{
		{	/* Init/main.scm 39 */
			jmp_buf_t jmpbuf;
			void *BgL_an_exit1015z00_18;

			if (SET_EXIT(BgL_an_exit1015z00_18))
				{
					return BGL_EXIT_VALUE();
				}
			else
				{
#if( SIGSETJMP_SAVESIGS == 0 )
					bgl_restore_signal_handlers();
#endif

					BgL_an_exit1015z00_18 = (void *) jmpbuf;
					{	/* Init/main.scm 39 */

						PUSH_EXIT(BgL_an_exit1015z00_18, ((long) 1));
						{	/* Init/main.scm 39 */
							obj_t BgL_an_exitd1016z00_19;

							BgL_an_exitd1016z00_19 = ((obj_t) (&exitd));
							{	/* Init/main.scm 39 */
								obj_t BgL_exitz00_34;

								{
									int BgL_tmpz00_76;

									BgL_tmpz00_76 = (int) (((long) 1));
									BgL_exitz00_34 =
										MAKE_L_PROCEDURE(BGl_z62exitz62zzinit_mainz00,
										BgL_tmpz00_76);
								}
								PROCEDURE_L_SET(BgL_exitz00_34,
									(int) (((long) 0)), BgL_an_exitd1016z00_19);
								{	/* Init/main.scm 39 */
									obj_t BgL_res1018z00_22;

									BGl_za2compilerzd2exitza2zd2zzinit_mainz00 = BgL_exitz00_34;
									{	/* Init/main.scm 41 */
										obj_t BgL_exitd1012z00_23;

										BgL_exitd1012z00_23 = ((obj_t) (&exitd));
										BGl_exitdzd2pushzd2protectz12z12zz__bexitz00
											(BgL_exitd1012z00_23, BGl_proc1030z00zzinit_mainz00);
										{	/* Init/main.scm 42 */
											obj_t BgL_tmp1014z00_25;

											if (CBOOL(BGl_parsezd2argszd2zzinit_parsezd2argszd2
													(BgL_argvz00_43)))
												{	/* Init/main.scm 42 */
													BgL_tmp1014z00_25 = BGl_enginez00zzengine_enginez00();
												}
											else
												{	/* Init/main.scm 42 */
													BgL_tmp1014z00_25 = BINT(((long) -1));
												}
											BGl_exitdzd2popzd2protectz12z12zz__bexitz00
												(BgL_exitd1012z00_23);
											BGl_stopzd2tracezd2zztools_tracez00();
											BgL_res1018z00_22 = BgL_tmp1014z00_25;
									}}
									POP_EXIT();
									return BgL_res1018z00_22;
								}
							}
						}
					}
				}
		}

	}



/* &main */
	obj_t BGl_z62mainz62zzinit_mainz00(obj_t BgL_envz00_35, obj_t BgL_argvz00_36)
	{
		{	/* Init/main.scm 34 */
			return BGl_mainz00zzinit_mainz00(BgL_argvz00_36);
		}

	}



/* &<@anonymous:1027> */
	obj_t BGl_z62zc3z04anonymousza31027ze3ze5zzinit_mainz00(obj_t BgL_envz00_37)
	{
		{	/* Init/main.scm 41 */
			return BGl_stopzd2tracezd2zztools_tracez00();
		}

	}



/* &exit */
	obj_t BGl_z62exitz62zzinit_mainz00(obj_t BgL_envz00_38,
		obj_t BgL_val1017z00_40)
	{
		{	/* Init/main.scm 39 */
			return
				BGl_unwindzd2untilz12zc0zz__bexitz00(PROCEDURE_L_REF(BgL_envz00_38,
					(int) (((long) 0))), BgL_val1017z00_40);
		}

	}



/* compiler-exit */
	BGL_EXPORTED_DEF obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t
		BgL_valuez00_4)
	{
		{	/* Init/main.scm 50 */
			return
				PROCEDURE_L_ENTRY(BGl_za2compilerzd2exitza2zd2zzinit_mainz00)
				(BGl_za2compilerzd2exitza2zd2zzinit_mainz00, BgL_valuez00_4);
		}

	}



/* &compiler-exit */
	obj_t BGl_z62compilerzd2exitzb0zzinit_mainz00(obj_t BgL_envz00_41,
		obj_t BgL_valuez00_42)
	{
		{	/* Init/main.scm 50 */
			return BGl_compilerzd2exitzd2zzinit_mainz00(BgL_valuez00_42);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzinit_mainz00()
	{
		{	/* Init/main.scm 15 */
			BGl_modulezd2initializa7ationz75zzinit_setrcz00(((long) 32737868),
				BSTRING_TO_STRING(BGl_string1031z00zzinit_mainz00));
			BGl_modulezd2initializa7ationz75zzinit_parsezd2argszd2(((long) 421321209),
				BSTRING_TO_STRING(BGl_string1031z00zzinit_mainz00));
			BGl_modulezd2initializa7ationz75zzengine_enginez00(((long) 373986149),
				BSTRING_TO_STRING(BGl_string1031z00zzinit_mainz00));
			return
				BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1031z00zzinit_mainz00));
		}

	}

#ifdef __cplusplus
}
#endif
