/*===========================================================================*/
/*   (Cc/exec.scm)                                                           */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Cc/exec.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzcc_execz00();
	BGL_IMPORT obj_t string_append_3(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzcc_execz00();
	static obj_t BGl_z62execz62zzcc_execz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzcc_execz00();
	static obj_t BGl_z62unixzd2filenamezb0zzcc_execz00(obj_t, obj_t);
	static obj_t BGl_systemzf2killzf2zzcc_execz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzcc_execz00 = BUNSPEC;
	BGL_IMPORT obj_t BGl_systemz00zz__osz00(obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzcc_execz00();
	extern obj_t BGl_za2shellza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_execz00zzcc_execz00(obj_t, bool_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzinit_mainz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_stringzd2appendzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_stringzd2indexzd2zz__r4_strings_6_7z00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzcc_execz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzcc_execz00();
	extern obj_t BGl_compilerzd2exitzd2zzinit_mainz00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_execzd2envzd2zzcc_execz00,
		BgL_bgl_za762execza762za7za7cc_e1051z00, BGl_z62execz62zzcc_execz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_unixzd2filenamezd2envz00zzcc_execz00,
		BgL_bgl_za762unixza7d2filena1052z00, va_generic_entry,
		BGl_z62unixzd2filenamezb0zzcc_execz00, BUNSPEC, -1);
	      DEFINE_STRING(BGl_string1045z00zzcc_execz00,
		BgL_bgl_string1045za700za7za7c1053za7, "\"", 1);
	      DEFINE_STRING(BGl_string1046z00zzcc_execz00,
		BgL_bgl_string1046za700za7za7c1054za7, "mingw", 5);
	      DEFINE_STRING(BGl_string1047z00zzcc_execz00,
		BgL_bgl_string1047za700za7za7c1055za7, "-c", 2);
	      DEFINE_STRING(BGl_string1048z00zzcc_execz00,
		BgL_bgl_string1048za700za7za7c1056za7, "system/kill", 11);
	      DEFINE_STRING(BGl_string1049z00zzcc_execz00,
		BgL_bgl_string1049za700za7za7c1057za7, "Can't execute cmd", 17);
	      DEFINE_STRING(BGl_string1050z00zzcc_execz00,
		BgL_bgl_string1050za700za7za7c1058za7, "cc_exec", 7);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzcc_execz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzcc_execz00(long
		BgL_checksumz00_78, char *BgL_fromz00_79)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzcc_execz00))
				{
					BGl_requirezd2initializa7ationz75zzcc_execz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzcc_execz00();
					BGl_libraryzd2moduleszd2initz00zzcc_execz00();
					BGl_importedzd2moduleszd2initz00zzcc_execz00();
					return BGl_methodzd2initzd2zzcc_execz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "cc_exec");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"cc_exec");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "cc_exec");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			return bgl_gc_roots_register();
		}

	}



/* unix-filename */
	BGL_EXPORTED_DEF obj_t BGl_unixzd2filenamezd2zzcc_execz00(obj_t BgL_argsz00_3)
	{
		{	/* Cc/exec.scm 34 */
			{	/* Cc/exec.scm 35 */
				obj_t BgL_sz00_16;

				BgL_sz00_16 =
					BGl_stringzd2appendzd2zz__r4_strings_6_7z00(BgL_argsz00_3);
				{	/* Cc/exec.scm 36 */
					bool_t BgL_test1060z00_95;

					{	/* Cc/exec.scm 36 */

						BgL_test1060z00_95 =
							CBOOL(BGl_stringzd2indexzd2zz__r4_strings_6_7z00(BgL_sz00_16,
								BCHAR(((unsigned char) ' ')), BINT(((long) 0))));
					}
					if (BgL_test1060z00_95)
						{	/* Cc/exec.scm 36 */
							return
								string_append_3(BGl_string1045z00zzcc_execz00, BgL_sz00_16,
								BGl_string1045z00zzcc_execz00);
						}
					else
						{	/* Cc/exec.scm 36 */
							return BgL_sz00_16;
						}
				}
			}
		}

	}



/* &unix-filename */
	obj_t BGl_z62unixzd2filenamezb0zzcc_execz00(obj_t BgL_envz00_72,
		obj_t BgL_argsz00_73)
	{
		{	/* Cc/exec.scm 34 */
			return BGl_unixzd2filenamezd2zzcc_execz00(BgL_argsz00_73);
		}

	}



/* exec */
	BGL_EXPORTED_DEF obj_t BGl_execz00zzcc_execz00(obj_t BgL_cmdz00_4,
		bool_t BgL_comezd2backzd2_5, obj_t BgL_namez00_6)
	{
		{	/* Cc/exec.scm 49 */
			{	/* Cc/exec.scm 50 */
				bool_t BgL_test1061z00_102;

				if (BgL_comezd2backzd2_5)
					{	/* Cc/exec.scm 50 */
						BgL_test1061z00_102 = ((bool_t) 1);
					}
				else
					{	/* Cc/exec.scm 50 */
						if (STRINGP(BGl_za2shellza2z00zzengine_paramz00))
							{	/* Cc/exec.scm 50 */
								obj_t BgL_strz00_41;

								BgL_strz00_41 = BGl_za2shellza2z00zzengine_paramz00;
								BgL_test1061z00_102 =
									(STRING_LENGTH(BgL_strz00_41) == ((long) 0));
							}
						else
							{	/* Cc/exec.scm 50 */
								BgL_test1061z00_102 = ((bool_t) 1);
							}
					}
				if (BgL_test1061z00_102)
					{	/* Cc/exec.scm 50 */
						{	/* Cc/exec.scm 53 */
							obj_t BgL_resz00_27;

							{	/* Cc/exec.scm 53 */
								obj_t BgL_list1026z00_29;

								BgL_list1026z00_29 = MAKE_YOUNG_PAIR(BgL_cmdz00_4, BNIL);
								BgL_resz00_27 = BGl_systemz00zz__osz00(BgL_list1026z00_29);
							}
							if (((long) CINT(BgL_resz00_27) == ((long) 0)))
								{	/* Cc/exec.scm 54 */
									return BgL_resz00_27;
								}
							else
								{	/* Cc/exec.scm 54 */
									return BGl_compilerzd2exitzd2zzinit_mainz00(BINT(((long) 1)));
					}}}
				else
					{	/* Cc/exec.scm 50 */
						return BGl_systemzf2killzf2zzcc_execz00(BgL_cmdz00_4);
					}
			}
		}

	}



/* &exec */
	obj_t BGl_z62execz62zzcc_execz00(obj_t BgL_envz00_74, obj_t BgL_cmdz00_75,
		obj_t BgL_comezd2backzd2_76, obj_t BgL_namez00_77)
	{
		{	/* Cc/exec.scm 49 */
			return
				BGl_execz00zzcc_execz00(BgL_cmdz00_75,
				CBOOL(BgL_comezd2backzd2_76), BgL_namez00_77);
		}

	}



/* system/kill */
	obj_t BGl_systemzf2killzf2zzcc_execz00(obj_t BgL_cmdz00_7)
	{
		{	/* Cc/exec.scm 64 */
			{	/* Cc/exec.scm 65 */
				bool_t BgL_test1065z00_118;

				{	/* Cc/exec.scm 65 */
					bool_t BgL_res1042z00_65;

					{	/* Cc/exec.scm 65 */
						obj_t BgL_string1z00_50;

						BgL_string1z00_50 = string_to_bstring(OS_CLASS);
						{	/* Cc/exec.scm 65 */
							long BgL_l1z00_52;

							BgL_l1z00_52 = STRING_LENGTH(BgL_string1z00_50);
							if ((BgL_l1z00_52 == ((long) 5)))
								{	/* Cc/exec.scm 65 */
									int BgL_arg1267z00_55;

									{	/* Cc/exec.scm 65 */
										char *BgL_auxz00_125;
										char *BgL_tmpz00_123;

										BgL_auxz00_125 =
											BSTRING_TO_STRING(BGl_string1046z00zzcc_execz00);
										BgL_tmpz00_123 = BSTRING_TO_STRING(BgL_string1z00_50);
										BgL_arg1267z00_55 =
											memcmp(BgL_tmpz00_123, BgL_auxz00_125, BgL_l1z00_52);
									}
									BgL_res1042z00_65 =
										((long) (BgL_arg1267z00_55) == ((long) 0));
								}
							else
								{	/* Cc/exec.scm 65 */
									BgL_res1042z00_65 = ((bool_t) 0);
								}
						}
					}
					BgL_test1065z00_118 = BgL_res1042z00_65;
				}
				if (BgL_test1065z00_118)
					{	/* Cc/exec.scm 67 */
						obj_t BgL_port1016z00_33;

						{	/* Cc/exec.scm 67 */
							obj_t BgL_res1043z00_67;

							{	/* Cc/exec.scm 67 */
								obj_t BgL_tmpz00_130;

								BgL_tmpz00_130 = BGL_CURRENT_DYNAMIC_ENV();
								BgL_res1043z00_67 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_130);
							}
							BgL_port1016z00_33 = BgL_res1043z00_67;
						}
						{	/* Cc/exec.scm 67 */
							obj_t BgL_arg1029z00_34;

							{	/* Cc/exec.scm 67 */
								obj_t BgL_list1030z00_35;

								BgL_list1030z00_35 = MAKE_YOUNG_PAIR(BgL_cmdz00_7, BNIL);
								BgL_arg1029z00_34 = BGl_systemz00zz__osz00(BgL_list1030z00_35);
							}
							bgl_display_obj(BgL_arg1029z00_34, BgL_port1016z00_33);
						}
						return bgl_display_char(((unsigned char) 10), BgL_port1016z00_33);
					}
				else
					{	/* Cc/exec.scm 65 */
						{	/* Cc/exec.scm 75 */
							obj_t BgL_port1017z00_36;

							{	/* Cc/exec.scm 75 */
								obj_t BgL_res1044z00_70;

								{	/* Cc/exec.scm 75 */
									obj_t BgL_tmpz00_137;

									BgL_tmpz00_137 = BGL_CURRENT_DYNAMIC_ENV();
									BgL_res1044z00_70 =
										BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_137);
								}
								BgL_port1017z00_36 = BgL_res1044z00_70;
							}
							{	/* Cc/exec.scm 75 */
								int BgL_arg1031z00_37;

								{	/* Cc/exec.scm 75 */
									char *BgL_auxz00_146;
									char *BgL_auxz00_144;
									char *BgL_auxz00_142;
									char *BgL_tmpz00_140;

									BgL_auxz00_146 = BSTRING_TO_STRING(BgL_cmdz00_7);
									BgL_auxz00_144 =
										BSTRING_TO_STRING(BGl_string1047z00zzcc_execz00);
									BgL_auxz00_142 =
										BSTRING_TO_STRING(BGl_za2shellza2z00zzengine_paramz00);
									BgL_tmpz00_140 =
										BSTRING_TO_STRING(BGl_za2shellza2z00zzengine_paramz00);
									BgL_arg1031z00_37 =
										execl(BgL_tmpz00_140, BgL_auxz00_142, BgL_auxz00_144,
										BgL_auxz00_146, 0L);
								}
								bgl_display_obj(BINT(BgL_arg1031z00_37), BgL_port1017z00_36);
							}
							bgl_display_char(((unsigned char) 10), BgL_port1017z00_36);
						}
						return
							BGl_internalzd2errorzd2zztools_errorz00
							(BGl_string1048z00zzcc_execz00, BGl_string1049z00zzcc_execz00,
							BgL_cmdz00_7);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzcc_execz00()
	{
		{	/* Cc/exec.scm 20 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1050z00zzcc_execz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1050z00zzcc_execz00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1050z00zzcc_execz00));
			return
				BGl_modulezd2initializa7ationz75zzinit_mainz00(((long) 288050961),
				BSTRING_TO_STRING(BGl_string1050z00zzcc_execz00));
		}

	}

#ifdef __cplusplus
}
#endif
