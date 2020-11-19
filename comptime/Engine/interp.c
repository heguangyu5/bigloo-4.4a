/*===========================================================================*/
/*   (Engine/interp.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Engine/interp.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_defaultzd2environmentzd2zz__evalz00();
	BGL_IMPORT obj_t BGl_warningz00zz__errorz00(obj_t);
	BGL_IMPORT obj_t BGl_getenvz00zz__osz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzengine_interpz00();
	BGL_IMPORT obj_t BGl_dirnamez00zz__osz00(obj_t);
	static obj_t BGl_appendzd221011zd2zzengine_interpz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzengine_interpz00();
	extern obj_t BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00;
	BGL_IMPORT bool_t fexists(char *);
	static obj_t BGl_gczd2rootszd2initz00zzengine_interpz00();
	static obj_t BGl_interpzd2parsezd2argsz00zzengine_interpz00(obj_t);
	BGL_IMPORT obj_t BGl_findzd2filezf2pathz20zz__osz00(obj_t, obj_t);
	extern obj_t BGl_verbosez00zztools_speekz00(obj_t, obj_t);
	static obj_t BGl_z62interpz62zzengine_interpz00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzengine_interpz00 = BUNSPEC;
	extern obj_t BGl_za2srczd2filesza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_evalz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t bgl_reverse(obj_t);
	static obj_t BGl_genericzd2initzd2zzengine_interpz00();
	BGL_IMPORT obj_t BGl_za2bigloozd2interpreterza2zd2zz__readerz00;
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzengine_interpz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__evalz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__modulez00(long, char *);
	static obj_t BGl_loadiz00zzengine_interpz00(obj_t);
	BGL_IMPORT obj_t BGl_loadqz00zz__evalz00(obj_t, obj_t);
	BGL_IMPORT obj_t command_line;
	static obj_t BGl_libraryzd2moduleszd2initz00zzengine_interpz00();
	static bool_t BGl_loadzd2stdinzd2zzengine_interpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzengine_interpz00();
	BGL_EXPORTED_DECL obj_t BGl_interpz00zzengine_interpz00(obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_replz00zz__evalz00();
	BGL_IMPORT obj_t BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(obj_t);
	BGL_IMPORT obj_t BGl_memberz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1082z00zzengine_interpz00,
		BgL_bgl_string1082za700za7za7e1091za7, "Welcome to the interpreter", 26);
	      DEFINE_STRING(BGl_string1083z00zzengine_interpz00,
		BgL_bgl_string1083za700za7za7e1092za7, "Interpreting files: ", 20);
	      DEFINE_STRING(BGl_string1084z00zzengine_interpz00,
		BgL_bgl_string1084za700za7za7e1093za7, "HOME", 4);
	      DEFINE_STRING(BGl_string1085z00zzengine_interpz00,
		BgL_bgl_string1085za700za7za7e1094za7, "Can't file startup file -- ", 27);
	      DEFINE_STRING(BGl_string1086z00zzengine_interpz00,
		BgL_bgl_string1086za700za7za7e1095za7, "interp", 6);
	      DEFINE_STRING(BGl_string1087z00zzengine_interpz00,
		BgL_bgl_string1087za700za7za7e1096za7, "]", 1);
	      DEFINE_STRING(BGl_string1088z00zzengine_interpz00,
		BgL_bgl_string1088za700za7za7e1097za7, "      [reading afile ", 21);
	      DEFINE_STRING(BGl_string1089z00zzengine_interpz00,
		BgL_bgl_string1089za700za7za7e1098za7, "-i", 2);
	      DEFINE_STRING(BGl_string1090z00zzengine_interpz00,
		BgL_bgl_string1090za700za7za7e1099za7, "engine_interp", 13);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_interpzd2envzd2zzengine_interpz00,
		BgL_bgl_za762interpza762za7za7en1100z00, BGl_z62interpz62zzengine_interpz00,
		0L, BUNSPEC, 6);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzengine_interpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzengine_interpz00(long
		BgL_checksumz00_145, char *BgL_fromz00_146)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzengine_interpz00))
				{
					BGl_requirezd2initializa7ationz75zzengine_interpz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzengine_interpz00();
					BGl_libraryzd2moduleszd2initz00zzengine_interpz00();
					BGl_importedzd2moduleszd2initz00zzengine_interpz00();
					return BGl_methodzd2initzd2zzengine_interpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__evalz00(((long) 0), "engine_interp");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "engine_interp");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__modulez00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"engine_interp");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"engine_interp");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzengine_interpz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_11;

				BgL_headz00_11 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_12;
					obj_t BgL_tailz00_13;

					BgL_prevz00_12 = BgL_headz00_11;
					BgL_tailz00_13 = BgL_l1z00_1;
				BgL_loopz00_14:
					if (PAIRP(BgL_tailz00_13))
						{
							obj_t BgL_newzd2prevzd2_16;

							BgL_newzd2prevzd2_16 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_13), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_12, BgL_newzd2prevzd2_16);
							{
								obj_t BgL_tailz00_172;
								obj_t BgL_prevz00_171;

								BgL_prevz00_171 = BgL_newzd2prevzd2_16;
								BgL_tailz00_172 = CDR(BgL_tailz00_13);
								BgL_tailz00_13 = BgL_tailz00_172;
								BgL_prevz00_12 = BgL_prevz00_171;
								goto BgL_loopz00_14;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_11);
				}
			}
		}

	}



/* interp */
	BGL_EXPORTED_DEF obj_t BGl_interpz00zzengine_interpz00(obj_t BgL_versionz00_3,
		obj_t BgL_verbz00_4, obj_t BgL_filesz00_5, obj_t BgL_startupz00_6,
		obj_t BgL_pathz00_7, obj_t BgL_argsz00_8)
	{
		{	/* Engine/interp.scm 23 */
			BGl_za2bigloozd2interpreterza2zd2zz__readerz00 = BTRUE;
			{	/* Engine/interp.scm 25 */
				bool_t BgL_test1103z00_175;

				if (((long) CINT(BgL_verbz00_4) >= ((long) 0)))
					{	/* Engine/interp.scm 25 */
						if (PAIRP(BgL_filesz00_5))
							{	/* Engine/interp.scm 25 */
								BgL_test1103z00_175 = ((bool_t) 0);
							}
						else
							{	/* Engine/interp.scm 25 */
								BgL_test1103z00_175 = ((bool_t) 1);
							}
					}
				else
					{	/* Engine/interp.scm 25 */
						BgL_test1103z00_175 = ((bool_t) 0);
					}
				if (BgL_test1103z00_175)
					{	/* Engine/interp.scm 25 */
						PROCEDURE_ENTRY(BgL_versionz00_3) (BgL_versionz00_3, BEOA);
						{	/* Engine/interp.scm 28 */
							obj_t BgL_list1023z00_22;

							BgL_list1023z00_22 =
								MAKE_YOUNG_PAIR(BGl_string1082z00zzengine_interpz00, BNIL);
							BGl_verbosez00zztools_speekz00(BINT(((long) 1)),
								BgL_list1023z00_22);
					}}
				else
					{	/* Engine/interp.scm 29 */
						obj_t BgL_list1024z00_23;

						{	/* Engine/interp.scm 29 */
							obj_t BgL_arg1025z00_24;

							{	/* Engine/interp.scm 29 */
								obj_t BgL_arg1026z00_25;

								BgL_arg1026z00_25 =
									MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
								BgL_arg1025z00_24 =
									MAKE_YOUNG_PAIR(BgL_filesz00_5, BgL_arg1026z00_25);
							}
							BgL_list1024z00_23 =
								MAKE_YOUNG_PAIR(BGl_string1083z00zzengine_interpz00,
								BgL_arg1025z00_24);
						}
						BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
							BgL_list1024z00_23);
			}}
			command_line =
				BGl_interpzd2parsezd2argsz00zzengine_interpz00(BgL_argsz00_8);
			if (STRINGP(BgL_startupz00_6))
				{	/* Engine/interp.scm 34 */
					obj_t BgL_pathz00_29;

					{	/* Engine/interp.scm 34 */
						obj_t BgL_homez00_37;

						BgL_homez00_37 =
							BGl_getenvz00zz__osz00(BGl_string1084z00zzengine_interpz00);
						if (STRINGP(BgL_homez00_37))
							{	/* Engine/interp.scm 35 */
								BgL_pathz00_29 = MAKE_YOUNG_PAIR(BgL_homez00_37, BgL_pathz00_7);
							}
						else
							{	/* Engine/interp.scm 35 */
								BgL_pathz00_29 = BgL_pathz00_7;
							}
					}
					{	/* Engine/interp.scm 38 */
						obj_t BgL_fstartupz00_30;

						BgL_fstartupz00_30 =
							BGl_findzd2filezf2pathz20zz__osz00(BgL_startupz00_6,
							BgL_pathz00_29);
						if (CBOOL(BgL_fstartupz00_30))
							{	/* Engine/interp.scm 40 */
								obj_t BgL_envz00_32;

								BgL_envz00_32 = BGl_defaultzd2environmentzd2zz__evalz00();
								{	/* Engine/interp.scm 40 */

									BGl_loadqz00zz__evalz00(BgL_startupz00_6, BgL_envz00_32);
								}
							}
						else
							{	/* Engine/interp.scm 41 */
								obj_t BgL_list1028z00_33;

								{	/* Engine/interp.scm 41 */
									obj_t BgL_arg1029z00_34;

									{	/* Engine/interp.scm 41 */
										obj_t BgL_arg1030z00_35;

										{	/* Engine/interp.scm 41 */
											obj_t BgL_arg1031z00_36;

											BgL_arg1031z00_36 =
												MAKE_YOUNG_PAIR(BgL_startupz00_6, BNIL);
											BgL_arg1030z00_35 =
												MAKE_YOUNG_PAIR(BGl_string1085z00zzengine_interpz00,
												BgL_arg1031z00_36);
										}
										BgL_arg1029z00_34 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)),
											BgL_arg1030z00_35);
									}
									BgL_list1028z00_33 =
										MAKE_YOUNG_PAIR(BGl_string1086z00zzengine_interpz00,
										BgL_arg1029z00_34);
								}
								BGl_warningz00zz__errorz00(BgL_list1028z00_33);
				}}}
			else
				{	/* Engine/interp.scm 33 */
					BFALSE;
				}
			if (PAIRP(BgL_filesz00_5))
				{
					obj_t BgL_l1015z00_41;

					{	/* Engine/interp.scm 46 */
						bool_t BgL_tmpz00_213;

						BgL_l1015z00_41 = BgL_filesz00_5;
					BgL_zc3z04anonymousza31034ze3z87_42:
						if (PAIRP(BgL_l1015z00_41))
							{	/* Engine/interp.scm 46 */
								{	/* Engine/interp.scm 46 */
									obj_t BgL_fz00_44;

									BgL_fz00_44 = CAR(BgL_l1015z00_41);
									if (STRINGP(BgL_fz00_44))
										{	/* Engine/interp.scm 46 */
											BGl_loadiz00zzengine_interpz00(BgL_fz00_44);
										}
									else
										{	/* Engine/interp.scm 46 */
											BBOOL(BGl_loadzd2stdinzd2zzengine_interpz00());
										}
								}
								{
									obj_t BgL_l1015z00_222;

									BgL_l1015z00_222 = CDR(BgL_l1015z00_41);
									BgL_l1015z00_41 = BgL_l1015z00_222;
									goto BgL_zc3z04anonymousza31034ze3z87_42;
								}
							}
						else
							{	/* Engine/interp.scm 46 */
								BgL_tmpz00_213 = ((bool_t) 1);
							}
						BBOOL(BgL_tmpz00_213);
					}
				}
			else
				{	/* Engine/interp.scm 45 */
					BGl_replz00zz__evalz00();
				}
			return BINT(((long) 0));
		}

	}



/* &interp */
	obj_t BGl_z62interpz62zzengine_interpz00(obj_t BgL_envz00_138,
		obj_t BgL_versionz00_139, obj_t BgL_verbz00_140, obj_t BgL_filesz00_141,
		obj_t BgL_startupz00_142, obj_t BgL_pathz00_143, obj_t BgL_argsz00_144)
	{
		{	/* Engine/interp.scm 23 */
			return
				BGl_interpz00zzengine_interpz00(BgL_versionz00_139, BgL_verbz00_140,
				BgL_filesz00_141, BgL_startupz00_142, BgL_pathz00_143, BgL_argsz00_144);
		}

	}



/* loadi */
	obj_t BGl_loadiz00zzengine_interpz00(obj_t BgL_fz00_9)
	{
		{	/* Engine/interp.scm 53 */
			{	/* Engine/interp.scm 54 */
				obj_t BgL_afilez00_48;

				{	/* Engine/interp.scm 54 */
					obj_t BgL_arg1043z00_56;

					BgL_arg1043z00_56 = BGl_dirnamez00zz__osz00(BgL_fz00_9);
					BgL_afilez00_48 =
						BGl_makezd2filezd2namez00zz__osz00(BgL_arg1043z00_56,
						BGl_za2accesszd2filezd2defaultza2z00zzengine_paramz00);
				}
				if (fexists(BSTRING_TO_STRING(BgL_afilez00_48)))
					{	/* Engine/interp.scm 55 */
						{	/* Engine/interp.scm 56 */
							obj_t BgL_list1039z00_50;

							{	/* Engine/interp.scm 56 */
								obj_t BgL_arg1040z00_51;

								{	/* Engine/interp.scm 56 */
									obj_t BgL_arg1041z00_52;

									{	/* Engine/interp.scm 56 */
										obj_t BgL_arg1042z00_53;

										BgL_arg1042z00_53 =
											MAKE_YOUNG_PAIR(BCHAR(((unsigned char) 10)), BNIL);
										BgL_arg1041z00_52 =
											MAKE_YOUNG_PAIR(BGl_string1087z00zzengine_interpz00,
											BgL_arg1042z00_53);
									}
									BgL_arg1040z00_51 =
										MAKE_YOUNG_PAIR(BgL_afilez00_48, BgL_arg1041z00_52);
								}
								BgL_list1039z00_50 =
									MAKE_YOUNG_PAIR(BGl_string1088z00zzengine_interpz00,
									BgL_arg1040z00_51);
							}
							BGl_verbosez00zztools_speekz00(BINT(((long) 2)),
								BgL_list1039z00_50);
						}
						BGl_modulezd2loadzd2accesszd2filezd2zz__modulez00(BgL_afilez00_48);
					}
				else
					{	/* Engine/interp.scm 55 */
						BFALSE;
					}
				{	/* Engine/interp.scm 58 */
					obj_t BgL_envz00_55;

					BgL_envz00_55 = BGl_defaultzd2environmentzd2zz__evalz00();
					{	/* Engine/interp.scm 58 */

						return BGl_loadqz00zz__evalz00(BgL_fz00_9, BgL_envz00_55);
					}
				}
			}
		}

	}



/* load-stdin */
	bool_t BGl_loadzd2stdinzd2zzengine_interpz00()
	{
		{	/* Engine/interp.scm 63 */
			{	/* Engine/interp.scm 64 */
				obj_t BgL_g1012z00_57;

				{	/* Engine/interp.scm 64 */
					obj_t BgL_arg1049z00_69;

					{	/* Engine/interp.scm 64 */
						obj_t BgL_res1073z00_110;

						{	/* Engine/interp.scm 64 */
							obj_t BgL_tmpz00_243;

							BgL_tmpz00_243 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1073z00_110 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_243);
						}
						BgL_arg1049z00_69 = BgL_res1073z00_110;
					}
					{	/* Engine/interp.scm 64 */

						{	/* Engine/interp.scm 64 */

							BgL_g1012z00_57 =
								BGl_readz00zz__readerz00(BgL_arg1049z00_69, BFALSE);
						}
					}
				}
				{
					obj_t BgL_ez00_59;

					BgL_ez00_59 = BgL_g1012z00_57;
				BgL_zc3z04anonymousza31044ze3z87_60:
					{	/* Engine/interp.scm 65 */
						bool_t BgL_test1113z00_247;

						{	/* Engine/interp.scm 65 */
							bool_t BgL_res1074z00_111;

							BgL_res1074z00_111 = EOF_OBJECTP(BgL_ez00_59);
							BgL_test1113z00_247 = BgL_res1074z00_111;
						}
						if (BgL_test1113z00_247)
							{	/* Engine/interp.scm 65 */
								return ((bool_t) 0);
							}
						else
							{	/* Engine/interp.scm 65 */
								{	/* Engine/interp.scm 67 */
									obj_t BgL_envz00_63;

									BgL_envz00_63 = BGl_defaultzd2environmentzd2zz__evalz00();
									{	/* Engine/interp.scm 67 */

										BGl_evalz00zz__evalz00(BgL_ez00_59, BgL_envz00_63);
									}
								}
								{	/* Engine/interp.scm 68 */
									obj_t BgL_arg1047z00_64;

									{	/* Engine/interp.scm 68 */
										obj_t BgL_arg1048z00_65;

										{	/* Engine/interp.scm 68 */
											obj_t BgL_res1075z00_113;

											{	/* Engine/interp.scm 68 */
												obj_t BgL_tmpz00_251;

												BgL_tmpz00_251 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1075z00_113 =
													BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_251);
											}
											BgL_arg1048z00_65 = BgL_res1075z00_113;
										}
										{	/* Engine/interp.scm 68 */

											{	/* Engine/interp.scm 68 */

												BgL_arg1047z00_64 =
													BGl_readz00zz__readerz00(BgL_arg1048z00_65, BFALSE);
											}
										}
									}
									{
										obj_t BgL_ez00_255;

										BgL_ez00_255 = BgL_arg1047z00_64;
										BgL_ez00_59 = BgL_ez00_255;
										goto BgL_zc3z04anonymousza31044ze3z87_60;
									}
								}
							}
					}
				}
			}
		}

	}



/* interp-parse-args */
	obj_t BGl_interpzd2parsezd2argsz00zzengine_interpz00(obj_t BgL_argsz00_10)
	{
		{	/* Engine/interp.scm 73 */
			{	/* Engine/interp.scm 74 */
				obj_t BgL_g1013z00_72;

				BgL_g1013z00_72 = CDR(((obj_t) BgL_argsz00_10));
				{
					obj_t BgL_argsz00_75;
					obj_t BgL_resz00_76;

					BgL_argsz00_75 = BgL_g1013z00_72;
					BgL_resz00_76 = BNIL;
				BgL_zc3z04anonymousza31050ze3z87_77:
					if (NULLP(BgL_argsz00_75))
						{	/* Engine/interp.scm 78 */
							obj_t BgL_arg1052z00_79;

							BgL_arg1052z00_79 = bgl_reverse(BgL_resz00_76);
							return
								BGl_appendzd221011zd2zzengine_interpz00
								(BGl_za2srczd2filesza2zd2zzengine_paramz00, BgL_arg1052z00_79);
						}
					else
						{	/* Engine/interp.scm 79 */
							bool_t BgL_test1115z00_262;

							{	/* Engine/interp.scm 79 */
								obj_t BgL_arg1063z00_90;

								BgL_arg1063z00_90 = CAR(((obj_t) BgL_argsz00_75));
								{	/* Engine/interp.scm 79 */
									bool_t BgL_res1081z00_132;

									{	/* Engine/interp.scm 79 */
										long BgL_l1z00_119;

										BgL_l1z00_119 = STRING_LENGTH(((obj_t) BgL_arg1063z00_90));
										if ((BgL_l1z00_119 == ((long) 2)))
											{	/* Engine/interp.scm 79 */
												int BgL_arg1267z00_122;

												{	/* Engine/interp.scm 79 */
													char *BgL_auxz00_272;
													char *BgL_tmpz00_269;

													BgL_auxz00_272 =
														BSTRING_TO_STRING
														(BGl_string1089z00zzengine_interpz00);
													BgL_tmpz00_269 =
														BSTRING_TO_STRING(((obj_t) BgL_arg1063z00_90));
													BgL_arg1267z00_122 =
														memcmp(BgL_tmpz00_269, BgL_auxz00_272,
														BgL_l1z00_119);
												}
												BgL_res1081z00_132 =
													((long) (BgL_arg1267z00_122) == ((long) 0));
											}
										else
											{	/* Engine/interp.scm 79 */
												BgL_res1081z00_132 = ((bool_t) 0);
											}
									}
									BgL_test1115z00_262 = BgL_res1081z00_132;
								}
							}
							if (BgL_test1115z00_262)
								{	/* Engine/interp.scm 80 */
									obj_t BgL_arg1055z00_82;

									BgL_arg1055z00_82 = CDR(((obj_t) BgL_argsz00_75));
									{
										obj_t BgL_argsz00_279;

										BgL_argsz00_279 = BgL_arg1055z00_82;
										BgL_argsz00_75 = BgL_argsz00_279;
										goto BgL_zc3z04anonymousza31050ze3z87_77;
									}
								}
							else
								{	/* Engine/interp.scm 81 */
									bool_t BgL_test1117z00_280;

									{	/* Engine/interp.scm 81 */
										obj_t BgL_arg1062z00_89;

										BgL_arg1062z00_89 = CAR(((obj_t) BgL_argsz00_75));
										BgL_test1117z00_280 =
											CBOOL(BGl_memberz00zz__r4_pairs_and_lists_6_3z00
											(BgL_arg1062z00_89,
												BGl_za2srczd2filesza2zd2zzengine_paramz00));
									}
									if (BgL_test1117z00_280)
										{	/* Engine/interp.scm 82 */
											obj_t BgL_arg1058z00_85;

											BgL_arg1058z00_85 = CDR(((obj_t) BgL_argsz00_75));
											{
												obj_t BgL_argsz00_287;

												BgL_argsz00_287 = BgL_arg1058z00_85;
												BgL_argsz00_75 = BgL_argsz00_287;
												goto BgL_zc3z04anonymousza31050ze3z87_77;
											}
										}
									else
										{	/* Engine/interp.scm 84 */
											obj_t BgL_arg1059z00_86;
											obj_t BgL_arg1060z00_87;

											BgL_arg1059z00_86 = CDR(((obj_t) BgL_argsz00_75));
											{	/* Engine/interp.scm 84 */
												obj_t BgL_arg1061z00_88;

												BgL_arg1061z00_88 = CAR(((obj_t) BgL_argsz00_75));
												BgL_arg1060z00_87 =
													MAKE_YOUNG_PAIR(BgL_arg1061z00_88, BgL_resz00_76);
											}
											{
												obj_t BgL_resz00_294;
												obj_t BgL_argsz00_293;

												BgL_argsz00_293 = BgL_arg1059z00_86;
												BgL_resz00_294 = BgL_arg1060z00_87;
												BgL_resz00_76 = BgL_resz00_294;
												BgL_argsz00_75 = BgL_argsz00_293;
												goto BgL_zc3z04anonymousza31050ze3z87_77;
											}
										}
								}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzengine_interpz00()
	{
		{	/* Engine/interp.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1090z00zzengine_interpz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1090z00zzengine_interpz00));
		}

	}

#ifdef __cplusplus
}
#endif
