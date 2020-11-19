/*===========================================================================*/
/*   (Write/version.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Write/version.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_shortzd2versionzd2zzwrite_versionz00();
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	static obj_t BGl_objectzd2initzd2zzwrite_versionz00();
	static obj_t BGl_z62revisionz62zzwrite_versionz00(obj_t);
	static obj_t BGl_methodzd2initzd2zzwrite_versionz00();
	extern obj_t BGl_za2bigloozd2versionza2zd2zzengine_paramz00;
	static obj_t BGl_z62versionz62zzwrite_versionz00(obj_t);
	extern obj_t BGl_za2bigloozd2nameza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t BGl_revisionz00zzwrite_versionz00();
	static obj_t BGl_z62shortzd2versionzb0zzwrite_versionz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzwrite_versionz00();
	extern obj_t BGl_za2bigloozd2authorza2zd2zzengine_paramz00;
	extern obj_t BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t c_substring(obj_t, long, long);
	static obj_t BGl_requirezd2initializa7ationz75zzwrite_versionz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t BGl_versionz00zzwrite_versionz00();
	extern obj_t BGl_za2bigloozd2emailza2zd2zzengine_paramz00;
	static obj_t BGl_genericzd2initzd2zzwrite_versionz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_za2bigloozd2urlza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzwrite_versionz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_speekz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzwrite_versionz00();
	static obj_t BGl_horsez00zzwrite_versionz00(obj_t);
	static obj_t BGl_libraryzd2moduleszd2initz00zzwrite_versionz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzwrite_versionz00();
	static obj_t BGl_displayzd2tozd2columnz00zzwrite_versionz00(obj_t, long,
		unsigned char);
	static obj_t __cnst[2];


	   
		 
		DEFINE_STRING(BGl_string1079z00zzwrite_versionz00,
		BgL_bgl_string1079za700za7za7w1097za7, "", 0);
	      DEFINE_STRING(BGl_string1080z00zzwrite_versionz00,
		BgL_bgl_string1080za700za7za7w1098za7, "email: ", 7);
	      DEFINE_STRING(BGl_string1081z00zzwrite_versionz00,
		BgL_bgl_string1081za700za7za7w1099za7, "url: ", 5);
	      DEFINE_STRING(BGl_string1082z00zzwrite_versionz00,
		BgL_bgl_string1082za700za7za7w1100za7, "`a practical Scheme compiler'", 29);
	      DEFINE_STRING(BGl_string1083z00zzwrite_versionz00,
		BgL_bgl_string1083za700za7za7w1101za7, "write_version", 13);
	      DEFINE_STRING(BGl_string1084z00zzwrite_versionz00,
		BgL_bgl_string1084za700za7za7w1102za7,
		"done (\"            ,--^, \" \"      _ ___/ /|/  \" \"  ,;'( )__, ) '   \" \" ;;  //   L__.    \" \" '   \\\\    /  '    \" \"      ^   ^       \") ",
		134);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_versionzd2envzd2zzwrite_versionz00,
		BgL_bgl_za762versionza762za7za7w1103z00,
		BGl_z62versionz62zzwrite_versionz00, 0L, BUNSPEC, 0);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_shortzd2versionzd2envz00zzwrite_versionz00,
		BgL_bgl_za762shortza7d2versi1104z00,
		BGl_z62shortzd2versionzb0zzwrite_versionz00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_revisionzd2envzd2zzwrite_versionz00,
		BgL_bgl_za762revisionza762za7za71105z00,
		BGl_z62revisionz62zzwrite_versionz00, 0L, BUNSPEC, 0);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzwrite_versionz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzwrite_versionz00(long
		BgL_checksumz00_139, char *BgL_fromz00_140)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzwrite_versionz00))
				{
					BGl_requirezd2initializa7ationz75zzwrite_versionz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzwrite_versionz00();
					BGl_libraryzd2moduleszd2initz00zzwrite_versionz00();
					BGl_cnstzd2initzd2zzwrite_versionz00();
					BGl_importedzd2moduleszd2initz00zzwrite_versionz00();
					return BGl_methodzd2initzd2zzwrite_versionz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"write_version");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"write_version");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			{	/* Write/version.scm 15 */
				obj_t BgL_cportz00_126;

				{	/* Write/version.scm 15 */
					obj_t BgL_stringz00_134;

					BgL_stringz00_134 = BGl_string1084z00zzwrite_versionz00;
					{	/* Write/version.scm 15 */
						obj_t BgL_startz00_135;

						BgL_startz00_135 = BINT(((long) 0));
						{	/* Write/version.scm 15 */
							obj_t BgL_endz00_136;

							BgL_endz00_136 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_134)));
							{	/* Write/version.scm 15 */

								BgL_cportz00_126 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_134, BgL_startz00_135, BgL_endz00_136);
				}}}}
				{
					long BgL_iz00_127;

					BgL_iz00_127 = ((long) 1);
				BgL_loopz00_128:
					if ((BgL_iz00_127 == ((long) -1)))
						{	/* Write/version.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Write/version.scm 15 */
							{	/* Write/version.scm 15 */
								obj_t BgL_arg1095z00_130;

								{	/* Write/version.scm 15 */

									{	/* Write/version.scm 15 */
										obj_t BgL_locationz00_132;

										BgL_locationz00_132 = BBOOL(((bool_t) 0));
										{	/* Write/version.scm 15 */

											BgL_arg1095z00_130 =
												BGl_readz00zz__readerz00(BgL_cportz00_126,
												BgL_locationz00_132);
										}
									}
								}
								{	/* Write/version.scm 15 */
									int BgL_tmpz00_165;

									BgL_tmpz00_165 = (int) (BgL_iz00_127);
									CNST_TABLE_SET(BgL_tmpz00_165, BgL_arg1095z00_130);
							}}
							{	/* Write/version.scm 15 */
								int BgL_auxz00_133;

								BgL_auxz00_133 = (int) ((BgL_iz00_127 - ((long) 1)));
								{
									long BgL_iz00_170;

									BgL_iz00_170 = (long) (BgL_auxz00_133);
									BgL_iz00_127 = BgL_iz00_170;
									goto BgL_loopz00_128;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* revision */
	BGL_EXPORTED_DEF obj_t BGl_revisionz00zzwrite_versionz00()
	{
		{	/* Write/version.scm 25 */
			{	/* Write/version.scm 26 */
				obj_t BgL_port1014z00_15;

				{	/* Write/version.scm 26 */
					obj_t BgL_res1058z00_64;

					{	/* Write/version.scm 26 */
						obj_t BgL_tmpz00_173;

						BgL_tmpz00_173 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1058z00_64 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_173);
					}
					BgL_port1014z00_15 = BgL_res1058z00_64;
				}
				bgl_display_obj(BGl_za2bigloozd2versionza2zd2zzengine_paramz00,
					BgL_port1014z00_15);
				return bgl_display_char(((unsigned char) 10), BgL_port1014z00_15);
		}}

	}



/* &revision */
	obj_t BGl_z62revisionz62zzwrite_versionz00(obj_t BgL_envz00_123)
	{
		{	/* Write/version.scm 25 */
			return BGl_revisionz00zzwrite_versionz00();
		}

	}



/* short-version */
	BGL_EXPORTED_DEF obj_t BGl_shortzd2versionzd2zzwrite_versionz00()
	{
		{	/* Write/version.scm 31 */
			{	/* Write/version.scm 32 */
				obj_t BgL_port1015z00_16;

				{	/* Write/version.scm 32 */
					obj_t BgL_res1059z00_67;

					{	/* Write/version.scm 32 */
						obj_t BgL_tmpz00_179;

						BgL_tmpz00_179 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1059z00_67 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_179);
					}
					BgL_port1015z00_16 = BgL_res1059z00_67;
				}
				bgl_display_obj(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
					BgL_port1015z00_16);
				return bgl_display_char(((unsigned char) 10), BgL_port1015z00_16);
		}}

	}



/* &short-version */
	obj_t BGl_z62shortzd2versionzb0zzwrite_versionz00(obj_t BgL_envz00_124)
	{
		{	/* Write/version.scm 31 */
			return BGl_shortzd2versionzd2zzwrite_versionz00();
		}

	}



/* version */
	BGL_EXPORTED_DEF obj_t BGl_versionz00zzwrite_versionz00()
	{
		{	/* Write/version.scm 37 */
			BGl_displayzd2tozd2columnz00zzwrite_versionz00
				(BGl_string1079z00zzwrite_versionz00, ((long) 79),
				((unsigned char) '-'));
			{	/* Write/version.scm 39 */
				obj_t BgL_arg1022z00_17;

				{	/* Write/version.scm 39 */
					obj_t BgL_res1060z00_70;

					{	/* Write/version.scm 39 */
						obj_t BgL_tmpz00_186;

						BgL_tmpz00_186 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1060z00_70 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_186);
					}
					BgL_arg1022z00_17 = BgL_res1060z00_70;
				}
				bgl_display_char(((unsigned char) 10), BgL_arg1022z00_17);
			}
			{	/* Write/version.scm 42 */
				obj_t BgL_arg1023z00_18;
				obj_t BgL_arg1024z00_19;
				obj_t BgL_arg1025z00_20;

				if (
					(STRING_REF(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
							((long) 0)) == ((unsigned char) ' ')))
					{	/* Write/version.scm 43 */
						long BgL_arg1035z00_29;

						BgL_arg1035z00_29 =
							STRING_LENGTH(BGl_za2bigloozd2dateza2zd2zzengine_paramz00);
						BgL_arg1023z00_18 =
							c_substring(BGl_za2bigloozd2dateza2zd2zzengine_paramz00,
							((long) 1), BgL_arg1035z00_29);
					}
				else
					{	/* Write/version.scm 42 */
						BgL_arg1023z00_18 = BGl_za2bigloozd2dateza2zd2zzengine_paramz00;
					}
				BgL_arg1024z00_19 =
					string_append(BGl_string1080z00zzwrite_versionz00,
					BGl_za2bigloozd2emailza2zd2zzengine_paramz00);
				BgL_arg1025z00_20 =
					string_append(BGl_string1081z00zzwrite_versionz00,
					BGl_za2bigloozd2urlza2zd2zzengine_paramz00);
				{	/* Write/version.scm 40 */
					obj_t BgL_list1026z00_21;

					{	/* Write/version.scm 40 */
						obj_t BgL_arg1027z00_22;

						{	/* Write/version.scm 40 */
							obj_t BgL_arg1028z00_23;

							{	/* Write/version.scm 40 */
								obj_t BgL_arg1029z00_24;

								{	/* Write/version.scm 40 */
									obj_t BgL_arg1030z00_25;

									{	/* Write/version.scm 40 */
										obj_t BgL_arg1031z00_26;

										BgL_arg1031z00_26 =
											MAKE_YOUNG_PAIR(BgL_arg1025z00_20, BNIL);
										BgL_arg1030z00_25 =
											MAKE_YOUNG_PAIR(BgL_arg1024z00_19, BgL_arg1031z00_26);
									}
									BgL_arg1029z00_24 =
										MAKE_YOUNG_PAIR
										(BGl_za2bigloozd2authorza2zd2zzengine_paramz00,
										BgL_arg1030z00_25);
								}
								BgL_arg1028z00_23 =
									MAKE_YOUNG_PAIR(BgL_arg1023z00_18, BgL_arg1029z00_24);
							}
							BgL_arg1027z00_22 =
								MAKE_YOUNG_PAIR(BGl_string1082z00zzwrite_versionz00,
								BgL_arg1028z00_23);
						}
						BgL_list1026z00_21 =
							MAKE_YOUNG_PAIR(BGl_za2bigloozd2nameza2zd2zzengine_paramz00,
							BgL_arg1027z00_22);
					}
					BGl_horsez00zzwrite_versionz00(BgL_list1026z00_21);
				}
			}
			BGl_displayzd2tozd2columnz00zzwrite_versionz00
				(BGl_string1079z00zzwrite_versionz00, ((long) 79),
				((unsigned char) '-'));
			{	/* Write/version.scm 49 */
				obj_t BgL_arg1037z00_31;

				{	/* Write/version.scm 49 */
					obj_t BgL_res1065z00_83;

					{	/* Write/version.scm 49 */
						obj_t BgL_tmpz00_205;

						BgL_tmpz00_205 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1065z00_83 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_205);
					}
					BgL_arg1037z00_31 = BgL_res1065z00_83;
				}
				bgl_display_char(((unsigned char) 10), BgL_arg1037z00_31);
			}
			{	/* Write/version.scm 50 */
				obj_t BgL_arg1038z00_32;

				{	/* Write/version.scm 50 */
					obj_t BgL_res1066z00_86;

					{	/* Write/version.scm 50 */
						obj_t BgL_tmpz00_209;

						BgL_tmpz00_209 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1066z00_86 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_209);
					}
					BgL_arg1038z00_32 = BgL_res1066z00_86;
				}
				return bgl_display_char(((unsigned char) 10), BgL_arg1038z00_32);
		}}

	}



/* &version */
	obj_t BGl_z62versionz62zzwrite_versionz00(obj_t BgL_envz00_125)
	{
		{	/* Write/version.scm 37 */
			return BGl_versionz00zzwrite_versionz00();
		}

	}



/* horse */
	obj_t BGl_horsez00zzwrite_versionz00(obj_t BgL_lz00_3)
	{
		{	/* Write/version.scm 55 */
			{	/* Write/version.scm 56 */
				obj_t BgL_g1012z00_33;

				BgL_g1012z00_33 = CNST_TABLE_REF(((long) 0));
				{
					obj_t BgL_lz00_35;
					obj_t BgL_horsez00_36;

					BgL_lz00_35 = BgL_lz00_3;
					BgL_horsez00_36 = BgL_g1012z00_33;
				BgL_zc3z04anonymousza31039ze3z87_37:
					if (NULLP(BgL_lz00_35))
						{	/* Write/version.scm 64 */
							if (NULLP(BgL_horsez00_36))
								{	/* Write/version.scm 65 */
									return CNST_TABLE_REF(((long) 1));
								}
							else
								{	/* Write/version.scm 65 */
									BGl_displayzd2tozd2columnz00zzwrite_versionz00
										(BGl_string1079z00zzwrite_versionz00, ((long) 62),
										((unsigned char) ' '));
									{	/* Write/version.scm 69 */
										obj_t BgL_port1016z00_40;

										{	/* Write/version.scm 69 */
											obj_t BgL_res1069z00_91;

											{	/* Write/version.scm 69 */
												obj_t BgL_tmpz00_221;

												BgL_tmpz00_221 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1069z00_91 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_221);
											}
											BgL_port1016z00_40 = BgL_res1069z00_91;
										}
										{	/* Write/version.scm 69 */
											obj_t BgL_arg1042z00_41;

											BgL_arg1042z00_41 = CAR(((obj_t) BgL_horsez00_36));
											bgl_display_obj(BgL_arg1042z00_41, BgL_port1016z00_40);
										}
										bgl_display_char(((unsigned char) 10), BgL_port1016z00_40);
									}
									{	/* Write/version.scm 70 */
										obj_t BgL_arg1043z00_42;

										BgL_arg1043z00_42 = CDR(((obj_t) BgL_horsez00_36));
										{
											obj_t BgL_horsez00_231;
											obj_t BgL_lz00_230;

											BgL_lz00_230 = BNIL;
											BgL_horsez00_231 = BgL_arg1043z00_42;
											BgL_horsez00_36 = BgL_horsez00_231;
											BgL_lz00_35 = BgL_lz00_230;
											goto BgL_zc3z04anonymousza31039ze3z87_37;
										}
									}
								}
						}
					else
						{	/* Write/version.scm 64 */
							if (NULLP(BgL_horsez00_36))
								{	/* Write/version.scm 71 */
									{	/* Write/version.scm 72 */
										obj_t BgL_port1017z00_44;

										{	/* Write/version.scm 72 */
											obj_t BgL_res1071z00_97;

											{	/* Write/version.scm 72 */
												obj_t BgL_tmpz00_234;

												BgL_tmpz00_234 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1071z00_97 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_234);
											}
											BgL_port1017z00_44 = BgL_res1071z00_97;
										}
										{	/* Write/version.scm 72 */
											obj_t BgL_arg1045z00_45;

											BgL_arg1045z00_45 = CAR(((obj_t) BgL_lz00_35));
											bgl_display_obj(BgL_arg1045z00_45, BgL_port1017z00_44);
										}
										bgl_display_char(((unsigned char) 10), BgL_port1017z00_44);
									}
									{	/* Write/version.scm 73 */
										obj_t BgL_arg1047z00_46;

										BgL_arg1047z00_46 = CDR(((obj_t) BgL_lz00_35));
										{
											obj_t BgL_horsez00_244;
											obj_t BgL_lz00_243;

											BgL_lz00_243 = BgL_arg1047z00_46;
											BgL_horsez00_244 = BNIL;
											BgL_horsez00_36 = BgL_horsez00_244;
											BgL_lz00_35 = BgL_lz00_243;
											goto BgL_zc3z04anonymousza31039ze3z87_37;
										}
									}
								}
							else
								{	/* Write/version.scm 71 */
									{	/* Write/version.scm 75 */
										obj_t BgL_arg1048z00_47;

										BgL_arg1048z00_47 = CAR(((obj_t) BgL_lz00_35));
										BGl_displayzd2tozd2columnz00zzwrite_versionz00
											(BgL_arg1048z00_47, ((long) 62), ((unsigned char) ' '));
									}
									{	/* Write/version.scm 76 */
										obj_t BgL_port1018z00_48;

										{	/* Write/version.scm 76 */
											obj_t BgL_res1072z00_103;

											{	/* Write/version.scm 76 */
												obj_t BgL_tmpz00_248;

												BgL_tmpz00_248 = BGL_CURRENT_DYNAMIC_ENV();
												BgL_res1072z00_103 =
													BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_248);
											}
											BgL_port1018z00_48 = BgL_res1072z00_103;
										}
										{	/* Write/version.scm 76 */
											obj_t BgL_arg1049z00_49;

											BgL_arg1049z00_49 = CAR(((obj_t) BgL_horsez00_36));
											bgl_display_obj(BgL_arg1049z00_49, BgL_port1018z00_48);
										}
										bgl_display_char(((unsigned char) 10), BgL_port1018z00_48);
									}
									{	/* Write/version.scm 77 */
										obj_t BgL_arg1050z00_50;
										obj_t BgL_arg1051z00_51;

										BgL_arg1050z00_50 = CDR(((obj_t) BgL_lz00_35));
										BgL_arg1051z00_51 = CDR(((obj_t) BgL_horsez00_36));
										{
											obj_t BgL_horsez00_260;
											obj_t BgL_lz00_259;

											BgL_lz00_259 = BgL_arg1050z00_50;
											BgL_horsez00_260 = BgL_arg1051z00_51;
											BgL_horsez00_36 = BgL_horsez00_260;
											BgL_lz00_35 = BgL_lz00_259;
											goto BgL_zc3z04anonymousza31039ze3z87_37;
										}
									}
								}
						}
				}
			}
		}

	}



/* display-to-column */
	obj_t BGl_displayzd2tozd2columnz00zzwrite_versionz00(obj_t BgL_stringz00_4,
		long BgL_columnz00_5, unsigned char BgL_charz00_6)
	{
		{	/* Write/version.scm 82 */
			{	/* Write/version.scm 83 */
				obj_t BgL_arg1052z00_53;

				{	/* Write/version.scm 83 */
					obj_t BgL_res1073z00_109;

					{	/* Write/version.scm 83 */
						obj_t BgL_tmpz00_261;

						BgL_tmpz00_261 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1073z00_109 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_261);
					}
					BgL_arg1052z00_53 = BgL_res1073z00_109;
				}
				bgl_display_obj(BgL_stringz00_4, BgL_arg1052z00_53);
			}
			{	/* Write/version.scm 84 */
				long BgL_g1013z00_54;

				BgL_g1013z00_54 =
					(((long) 1) + STRING_LENGTH(((obj_t) BgL_stringz00_4)));
				{
					long BgL_lz00_56;

					BgL_lz00_56 = BgL_g1013z00_54;
				BgL_zc3z04anonymousza31053ze3z87_57:
					if ((BgL_lz00_56 == BgL_columnz00_5))
						{	/* Write/version.scm 85 */
							return CNST_TABLE_REF(((long) 1));
						}
					else
						{	/* Write/version.scm 85 */
							{	/* Write/version.scm 88 */
								obj_t BgL_arg1055z00_59;

								{	/* Write/version.scm 88 */
									obj_t BgL_res1077z00_118;

									{	/* Write/version.scm 88 */
										obj_t BgL_tmpz00_271;

										BgL_tmpz00_271 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1077z00_118 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_271);
									}
									BgL_arg1055z00_59 = BgL_res1077z00_118;
								}
								bgl_display_char(BgL_charz00_6, BgL_arg1055z00_59);
							}
							{
								long BgL_lz00_275;

								BgL_lz00_275 = (BgL_lz00_56 + ((long) 1));
								BgL_lz00_56 = BgL_lz00_275;
								goto BgL_zc3z04anonymousza31053ze3z87_57;
							}
						}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzwrite_versionz00()
	{
		{	/* Write/version.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1083z00zzwrite_versionz00));
			return
				BGl_modulezd2initializa7ationz75zztools_speekz00(((long) 61247956),
				BSTRING_TO_STRING(BGl_string1083z00zzwrite_versionz00));
		}

	}

#ifdef __cplusplus
}
#endif
