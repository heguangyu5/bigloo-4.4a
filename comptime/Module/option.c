/*===========================================================================*/
/*   (Module/option.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Module/option.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_ccompz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_producerz00;
		obj_t BgL_consumerz00;
		obj_t BgL_finaliza7erza7;
	}               *BgL_ccompz00_bglt;


	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	static obj_t BGl_objectzd2initzd2zzmodule_optionz00();
	static obj_t BGl_methodzd2initzd2zzmodule_optionz00();
	extern obj_t BGl_ccompz00zzmodule_modulez00;
	static obj_t BGl_z62zc3z04anonymousza31079ze3ze5zzmodule_optionz00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzmodule_optionz00();
	static obj_t BGl_z62optionzd2producerzb0zzmodule_optionz00(obj_t, obj_t);
	static obj_t BGl_z62makezd2optionzd2compilerz62zzmodule_optionz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
	static obj_t BGl_requirezd2initializa7ationz75zzmodule_optionz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzmodule_optionz00();
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzmodule_optionz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31080ze3ze5zzmodule_optionz00(obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzmodule_optionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzmodule_modulez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzmodule_optionz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzmodule_optionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzmodule_optionz00();
	extern obj_t BGl_userzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1120z00zzmodule_optionz00,
		BgL_bgl_string1120za700za7za7m1127za7, "Parse error", 11);
	      DEFINE_STRING(BGl_string1121z00zzmodule_optionz00,
		BgL_bgl_string1121za700za7za7m1128za7, "Illegal `option' clause", 23);
	      DEFINE_STRING(BGl_string1122z00zzmodule_optionz00,
		BgL_bgl_string1122za700za7za7m1129za7, "module_option", 13);
	      DEFINE_STRING(BGl_string1123z00zzmodule_optionz00,
		BgL_bgl_string1123za700za7za7m1130za7, "void option ", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_makezd2optionzd2compilerzd2envzd2zzmodule_optionz00,
		BgL_bgl_za762makeza7d2option1131z00,
		BGl_z62makezd2optionzd2compilerz62zzmodule_optionz00, 0L, BUNSPEC, 0);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1118z00zzmodule_optionz00,
		BgL_bgl_za762za7c3za704anonymo1132za7,
		BGl_z62zc3z04anonymousza31079ze3ze5zzmodule_optionz00, 0L, BUNSPEC, 2);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1119z00zzmodule_optionz00,
		BgL_bgl_za762za7c3za704anonymo1133za7,
		BGl_z62zc3z04anonymousza31080ze3ze5zzmodule_optionz00, 0L, BUNSPEC, 0);
	     
		DEFINE_STATIC_BGL_PROCEDURE
		(BGl_optionzd2producerzd2envz00zzmodule_optionz00,
		BgL_bgl_za762optionza7d2prod1134z00,
		BGl_z62optionzd2producerzb0zzmodule_optionz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzmodule_optionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzmodule_optionz00(long
		BgL_checksumz00_124, char *BgL_fromz00_125)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzmodule_optionz00))
				{
					BGl_requirezd2initializa7ationz75zzmodule_optionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzmodule_optionz00();
					BGl_libraryzd2moduleszd2initz00zzmodule_optionz00();
					BGl_cnstzd2initzd2zzmodule_optionz00();
					BGl_importedzd2moduleszd2initz00zzmodule_optionz00();
					return BGl_toplevelzd2initzd2zzmodule_optionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "module_option");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"module_option");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"module_option");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			{	/* Module/option.scm 15 */
				obj_t BgL_cportz00_103;

				{	/* Module/option.scm 15 */
					obj_t BgL_stringz00_111;

					BgL_stringz00_111 = BGl_string1123z00zzmodule_optionz00;
					{	/* Module/option.scm 15 */
						obj_t BgL_startz00_112;

						BgL_startz00_112 = BINT(((long) 0));
						{	/* Module/option.scm 15 */
							obj_t BgL_endz00_113;

							BgL_endz00_113 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_111)));
							{	/* Module/option.scm 15 */

								BgL_cportz00_103 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_111, BgL_startz00_112, BgL_endz00_113);
				}}}}
				{
					long BgL_iz00_104;

					BgL_iz00_104 = ((long) 1);
				BgL_loopz00_105:
					if ((BgL_iz00_104 == ((long) -1)))
						{	/* Module/option.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Module/option.scm 15 */
							{	/* Module/option.scm 15 */
								obj_t BgL_arg1125z00_107;

								{	/* Module/option.scm 15 */

									{	/* Module/option.scm 15 */
										obj_t BgL_locationz00_109;

										BgL_locationz00_109 = BBOOL(((bool_t) 0));
										{	/* Module/option.scm 15 */

											BgL_arg1125z00_107 =
												BGl_readz00zz__readerz00(BgL_cportz00_103,
												BgL_locationz00_109);
										}
									}
								}
								{	/* Module/option.scm 15 */
									int BgL_tmpz00_150;

									BgL_tmpz00_150 = (int) (BgL_iz00_104);
									CNST_TABLE_SET(BgL_tmpz00_150, BgL_arg1125z00_107);
							}}
							{	/* Module/option.scm 15 */
								int BgL_auxz00_110;

								BgL_auxz00_110 = (int) ((BgL_iz00_104 - ((long) 1)));
								{
									long BgL_iz00_155;

									BgL_iz00_155 = (long) (BgL_auxz00_110);
									BgL_iz00_104 = BgL_iz00_155;
									goto BgL_loopz00_105;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}

	}



/* make-option-compiler */
	BGL_EXPORTED_DEF obj_t BGl_makezd2optionzd2compilerz00zzmodule_optionz00()
	{
		{	/* Module/option.scm 25 */
			{	/* Module/option.scm 26 */
				BgL_ccompz00_bglt BgL_new1048z00_57;

				{	/* Module/option.scm 27 */
					BgL_ccompz00_bglt BgL_new1047z00_62;

					BgL_new1047z00_62 =
						((BgL_ccompz00_bglt) BOBJECT(GC_MALLOC(sizeof(struct
									BgL_ccompz00_bgl))));
					{	/* Module/option.scm 27 */
						long BgL_arg1095z00_63;

						{	/* Module/option.scm 27 */
							long BgL_res1115z00_85;

							BgL_res1115z00_85 =
								BGL_CLASS_INDEX(BGl_ccompz00zzmodule_modulez00);
							BgL_arg1095z00_63 = BgL_res1115z00_85;
						}
						BGL_OBJECT_CLASS_NUM_SET(
							((BgL_objectz00_bglt) BgL_new1047z00_62), BgL_arg1095z00_63);
					}
					BgL_new1048z00_57 = BgL_new1047z00_62;
				}
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_57))->BgL_idz00) =
					((obj_t) CNST_TABLE_REF(((long) 0))), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_57))->BgL_producerz00) =
					((obj_t) BGl_optionzd2producerzd2envz00zzmodule_optionz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_57))->BgL_consumerz00) =
					((obj_t) BGl_proc1118z00zzmodule_optionz00), BUNSPEC);
				((((BgL_ccompz00_bglt) COBJECT(BgL_new1048z00_57))->
						BgL_finaliza7erza7) =
					((obj_t) BGl_proc1119z00zzmodule_optionz00), BUNSPEC);
				return ((obj_t) BgL_new1048z00_57);
			}
		}

	}



/* &make-option-compiler */
	obj_t BGl_z62makezd2optionzd2compilerz62zzmodule_optionz00(obj_t
		BgL_envz00_95)
	{
		{	/* Module/option.scm 25 */
			return BGl_makezd2optionzd2compilerz00zzmodule_optionz00();
		}

	}



/* &<@anonymous:1080> */
	obj_t BGl_z62zc3z04anonymousza31080ze3ze5zzmodule_optionz00(obj_t
		BgL_envz00_96)
	{
		{	/* Module/module.scm 55 */
			return CNST_TABLE_REF(((long) 1));
		}

	}



/* &<@anonymous:1079> */
	obj_t BGl_z62zc3z04anonymousza31079ze3ze5zzmodule_optionz00(obj_t
		BgL_envz00_97, obj_t BgL_mz00_98, obj_t BgL_cz00_99)
	{
		{	/* Module/module.scm 53 */
			return BNIL;
		}

	}



/* &option-producer */
	obj_t BGl_z62optionzd2producerzb0zzmodule_optionz00(obj_t BgL_envz00_100,
		obj_t BgL_clausez00_101)
	{
		{	/* Module/option.scm 33 */
			{
				obj_t BgL_protosz00_118;

				if (PAIRP(BgL_clausez00_101))
					{	/* Module/option.scm 34 */
						BgL_protosz00_118 = CDR(BgL_clausez00_101);
						{
							obj_t BgL_l1051z00_120;

							BgL_l1051z00_120 = BgL_protosz00_118;
						BgL_zc3z04anonymousza31100ze3z87_119:
							if (PAIRP(BgL_l1051z00_120))
								{	/* Module/option.scm 36 */
									{	/* Module/option.scm 36 */
										obj_t BgL_arg1103z00_121;

										BgL_arg1103z00_121 = CAR(BgL_l1051z00_120);
										{	/* Module/option.scm 36 */
											obj_t BgL_envz00_122;

											BgL_envz00_122 =
												BGl_defaultzd2environmentzd2zz__evalz00();
											{	/* Module/option.scm 36 */

												BGl_evalz00zz__evalz00(BgL_arg1103z00_121,
													BgL_envz00_122);
											}
										}
									}
									{
										obj_t BgL_l1051z00_177;

										BgL_l1051z00_177 = CDR(BgL_l1051z00_120);
										BgL_l1051z00_120 = BgL_l1051z00_177;
										goto BgL_zc3z04anonymousza31100ze3z87_119;
									}
								}
							else
								{	/* Module/option.scm 36 */
									((bool_t) 1);
								}
						}
						return BNIL;
					}
				else
					{	/* Module/option.scm 34 */
						{	/* Module/option.scm 39 */
							obj_t BgL_list1110z00_123;

							BgL_list1110z00_123 = MAKE_YOUNG_PAIR(BNIL, BNIL);
							return
								BGl_userzd2errorzd2zztools_errorz00
								(BGl_string1120z00zzmodule_optionz00,
								BGl_string1121z00zzmodule_optionz00, BgL_clausez00_101,
								BgL_list1110z00_123);
						}
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzmodule_optionz00()
	{
		{	/* Module/option.scm 15 */
			BGl_modulezd2initializa7ationz75zzmodule_modulez00(((long) 158397613),
				BSTRING_TO_STRING(BGl_string1122z00zzmodule_optionz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1122z00zzmodule_optionz00));
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1122z00zzmodule_optionz00));
		}

	}

#ifdef __cplusplus
}
#endif
