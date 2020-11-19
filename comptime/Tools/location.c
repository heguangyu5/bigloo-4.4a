/*===========================================================================*/
/*   (Tools/location.scm)                                                    */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/location.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_dumpzd2locationzd2zztools_locationz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t bgl_display_obj(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zztools_locationz00();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_getzd2filezd2linesz00zztools_locationz00(obj_t);
	static obj_t BGl_methodzd2initzd2zztools_locationz00();
	BGL_IMPORT obj_t BGl_makezd2hashtablezd2zz__hashz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT bool_t fexists(char *);
	BGL_IMPORT obj_t create_struct(obj_t, int);
	static obj_t BGl_z62dumpzd2locationzb0zztools_locationz00(obj_t, obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_filezd2lineszd2zz__r4_input_6_10_2z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_locationz00();
	static obj_t BGl_z62locationzd2fullzd2fnamez62zztools_locationz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_hashtablezd2getzd2zz__hashz00(obj_t, obj_t);
	static obj_t BGl_z62locationzd2shapezb0zztools_locationz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_za2libzd2srczd2dirza2z00zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_locationz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zztools_locationz00();
	static obj_t BGl_genericzd2initzd2zztools_locationz00();
	extern obj_t BGl_za2locationzd2shapezf3za2z21zzengine_paramz00;
	static obj_t BGl_z62findzd2locationzb0zztools_locationz00(obj_t, obj_t);
	static obj_t BGl_poszd2ze3linez31zztools_locationz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_makezd2filezd2namez00zz__osz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_IMPORT obj_t BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(int,
		obj_t);
	static obj_t BGl_za2filezd2lineszd2tableza2z00zztools_locationz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_locationzd2skipzd2forwardz00zztools_locationz00(obj_t, int);
	static obj_t BGl_z62findzd2locationzf2locz42zztools_locationz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62locationzd2skipzd2forwardz62zztools_locationz00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zztools_locationz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__hashz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__osz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zztools_locationz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_locationz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_locationz00();
	BGL_IMPORT obj_t BGl_pwdz00zz__osz00();
	BGL_IMPORT obj_t BGl_hashtablezd2putz12zc0zz__hashz00(obj_t, obj_t, obj_t);
	static obj_t __cnst[2];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2shapezd2envz00zztools_locationz00,
		BgL_bgl_za762locationza7d2sh1101z00,
		BGl_z62locationzd2shapezb0zztools_locationz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1089z00zztools_locationz00,
		BgL_bgl_string1089za700za7za7t1102za7, "~~ ", 3);
	      DEFINE_STRING(BGl_string1090z00zztools_locationz00,
		BgL_bgl_string1090za700za7za7t1103za7, ": ", 2);
	      DEFINE_STRING(BGl_string1091z00zztools_locationz00,
		BgL_bgl_string1091za700za7za7t1104za7, " ", 1);
	      DEFINE_STRING(BGl_string1092z00zztools_locationz00,
		BgL_bgl_string1092za700za7za7t1105za7, "____ ", 5);
	      DEFINE_STRING(BGl_string1093z00zztools_locationz00,
		BgL_bgl_string1093za700za7za7t1106za7, "tools_location", 14);
	      DEFINE_STRING(BGl_string1094z00zztools_locationz00,
		BgL_bgl_string1094za700za7za7t1107za7, "at location ", 12);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2skipzd2forwardzd2envzd2zztools_locationz00,
		BgL_bgl_za762locationza7d2sk1108z00,
		BGl_z62locationzd2skipzd2forwardz62zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_findzd2locationzd2envz00zztools_locationz00,
		BgL_bgl_za762findza7d2locati1109z00,
		BGl_z62findzd2locationzb0zztools_locationz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_dumpzd2locationzd2envz00zztools_locationz00,
		BgL_bgl_za762dumpza7d2locati1110z00,
		BGl_z62dumpzd2locationzb0zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_findzd2locationzf2loczd2envzf2zztools_locationz00,
		BgL_bgl_za762findza7d2locati1111z00,
		BGl_z62findzd2locationzf2locz42zztools_locationz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_locationzd2fullzd2fnamezd2envzd2zztools_locationz00,
		BgL_bgl_za762locationza7d2fu1112z00,
		BGl_z62locationzd2fullzd2fnamez62zztools_locationz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zztools_locationz00));
		     ADD_ROOT((void
				*) (&BGl_za2filezd2lineszd2tableza2z00zztools_locationz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zztools_locationz00(long
		BgL_checksumz00_249, char *BgL_fromz00_250)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_locationz00))
				{
					BGl_requirezd2initializa7ationz75zztools_locationz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_locationz00();
					BGl_libraryzd2moduleszd2initz00zztools_locationz00();
					BGl_cnstzd2initzd2zztools_locationz00();
					BGl_importedzd2moduleszd2initz00zztools_locationz00();
					return BGl_toplevelzd2initzd2zztools_locationz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__hashz00(((long) 0), "tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_input_6_10_2z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__osz00(((long) 0), "tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"tools_location");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"tools_location");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			{	/* Tools/location.scm 15 */
				obj_t BgL_cportz00_236;

				{	/* Tools/location.scm 15 */
					obj_t BgL_stringz00_244;

					BgL_stringz00_244 = BGl_string1094z00zztools_locationz00;
					{	/* Tools/location.scm 15 */
						obj_t BgL_startz00_245;

						BgL_startz00_245 = BINT(((long) 0));
						{	/* Tools/location.scm 15 */
							obj_t BgL_endz00_246;

							BgL_endz00_246 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_244)));
							{	/* Tools/location.scm 15 */

								BgL_cportz00_236 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_244, BgL_startz00_245, BgL_endz00_246);
				}}}}
				{
					long BgL_iz00_237;

					BgL_iz00_237 = ((long) 1);
				BgL_loopz00_238:
					if ((BgL_iz00_237 == ((long) -1)))
						{	/* Tools/location.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/location.scm 15 */
							{	/* Tools/location.scm 15 */
								obj_t BgL_arg1099z00_240;

								{	/* Tools/location.scm 15 */

									{	/* Tools/location.scm 15 */
										obj_t BgL_locationz00_242;

										BgL_locationz00_242 = BBOOL(((bool_t) 0));
										{	/* Tools/location.scm 15 */

											BgL_arg1099z00_240 =
												BGl_readz00zz__readerz00(BgL_cportz00_236,
												BgL_locationz00_242);
										}
									}
								}
								{	/* Tools/location.scm 15 */
									int BgL_tmpz00_281;

									BgL_tmpz00_281 = (int) (BgL_iz00_237);
									CNST_TABLE_SET(BgL_tmpz00_281, BgL_arg1099z00_240);
							}}
							{	/* Tools/location.scm 15 */
								int BgL_auxz00_243;

								BgL_auxz00_243 = (int) ((BgL_iz00_237 - ((long) 1)));
								{
									long BgL_iz00_286;

									BgL_iz00_286 = (long) (BgL_auxz00_243);
									BgL_iz00_237 = BgL_iz00_286;
									goto BgL_loopz00_238;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return (BGl_za2filezd2lineszd2tableza2z00zztools_locationz00 =
				BGl_makezd2hashtablezd2zz__hashz00(BNIL), BUNSPEC);
		}

	}



/* get-file-lines */
	obj_t BGl_getzd2filezd2linesz00zztools_locationz00(obj_t BgL_filez00_17)
	{
		{	/* Tools/location.scm 33 */
			{	/* Tools/location.scm 34 */
				obj_t BgL_linesz00_51;

				BgL_linesz00_51 =
					BGl_hashtablezd2getzd2zz__hashz00
					(BGl_za2filezd2lineszd2tableza2z00zztools_locationz00,
					BgL_filez00_17);
				if (CBOOL(BgL_linesz00_51))
					{	/* Tools/location.scm 35 */
						return BgL_linesz00_51;
					}
				else
					{	/* Tools/location.scm 36 */
						obj_t BgL_linesz00_52;

						BgL_linesz00_52 =
							BGl_filezd2lineszd2zz__r4_input_6_10_2z00(BgL_filez00_17);
						BGl_hashtablezd2putz12zc0zz__hashz00
							(BGl_za2filezd2lineszd2tableza2z00zztools_locationz00,
							BgL_filez00_17, BgL_linesz00_52);
						return BgL_linesz00_52;
					}
			}
		}

	}



/* pos->line */
	obj_t BGl_poszd2ze3linez31zztools_locationz00(obj_t BgL_filez00_18,
		obj_t BgL_posz00_19)
	{
		{	/* Tools/location.scm 44 */
			{	/* Tools/location.scm 45 */
				obj_t BgL_linesz00_127;

				BgL_linesz00_127 =
					BGl_getzd2filezd2linesz00zztools_locationz00(BgL_filez00_18);
				{	/* Tools/location.scm 46 */
					obj_t BgL__ortest_1012z00_128;

					BgL__ortest_1012z00_128 =
						BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(CINT
						(BgL_posz00_19), BgL_linesz00_127);
					if (CBOOL(BgL__ortest_1012z00_128))
						{	/* Tools/location.scm 46 */
							return BgL__ortest_1012z00_128;
						}
					else
						{	/* Tools/location.scm 46 */
							return BINT(((long) 0));
		}}}}

	}



/* find-location */
	BGL_EXPORTED_DEF obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t
		BgL_expz00_20)
	{
		{	/* Tools/location.scm 51 */
			{
				obj_t BgL_locz00_58;

				{	/* Tools/location.scm 61 */
					bool_t BgL_test1117z00_301;

					{	/* Tools/location.scm 61 */
						bool_t BgL_res1075z00_156;

						BgL_res1075z00_156 = EPAIRP(BgL_expz00_20);
						BgL_test1117z00_301 = BgL_res1075z00_156;
					}
					if (BgL_test1117z00_301)
						{	/* Tools/location.scm 63 */
							obj_t BgL_arg1032z00_57;

							BgL_arg1032z00_57 = CER(((obj_t) BgL_expz00_20));
							BgL_locz00_58 = BgL_arg1032z00_57;
							{	/* Tools/location.scm 53 */
								bool_t BgL_test1118z00_305;

								if (STRUCTP(BgL_locz00_58))
									{	/* Tools/location.scm 53 */
										BgL_test1118z00_305 =
											(STRUCT_KEY(BgL_locz00_58) == CNST_TABLE_REF(((long) 0)));
									}
								else
									{	/* Tools/location.scm 53 */
										BgL_test1118z00_305 = ((bool_t) 0);
									}
								if (BgL_test1118z00_305)
									{	/* Tools/location.scm 53 */
										return BgL_locz00_58;
									}
								else
									{	/* Tools/location.scm 53 */
										if (PAIRP(BgL_locz00_58))
											{	/* Tools/location.scm 55 */
												obj_t BgL_cdrzd2109zd2_67;

												BgL_cdrzd2109zd2_67 = CDR(BgL_locz00_58);
												if ((CAR(BgL_locz00_58) == CNST_TABLE_REF(((long) 1))))
													{	/* Tools/location.scm 55 */
														if (PAIRP(BgL_cdrzd2109zd2_67))
															{	/* Tools/location.scm 55 */
																obj_t BgL_cdrzd2113zd2_71;

																BgL_cdrzd2113zd2_71 = CDR(BgL_cdrzd2109zd2_67);
																if (PAIRP(BgL_cdrzd2113zd2_71))
																	{	/* Tools/location.scm 55 */
																		if (NULLP(CDR(BgL_cdrzd2113zd2_71)))
																			{	/* Tools/location.scm 55 */
																				obj_t BgL_arg1042z00_75;
																				obj_t BgL_arg1043z00_76;

																				BgL_arg1042z00_75 =
																					CAR(BgL_cdrzd2109zd2_67);
																				BgL_arg1043z00_76 =
																					CAR(BgL_cdrzd2113zd2_71);
																				{	/* Tools/location.scm 57 */
																					obj_t BgL_arg1047z00_151;

																					BgL_arg1047z00_151 =
																						BGl_poszd2ze3linez31zztools_locationz00
																						(BgL_arg1042z00_75,
																						BgL_arg1043z00_76);
																					{	/* Tools/location.scm 57 */
																						obj_t BgL_newz00_152;

																						BgL_newz00_152 =
																							create_struct(CNST_TABLE_REF((
																									(long) 0)),
																							(int) (((long) 3)));
																						{	/* Tools/location.scm 57 */
																							int BgL_tmpz00_332;

																							BgL_tmpz00_332 =
																								(int) (((long) 2));
																							STRUCT_SET(BgL_newz00_152,
																								BgL_tmpz00_332,
																								BgL_arg1047z00_151);
																						}
																						{	/* Tools/location.scm 57 */
																							int BgL_tmpz00_335;

																							BgL_tmpz00_335 =
																								(int) (((long) 1));
																							STRUCT_SET(BgL_newz00_152,
																								BgL_tmpz00_335,
																								BgL_arg1043z00_76);
																						}
																						{	/* Tools/location.scm 57 */
																							int BgL_tmpz00_338;

																							BgL_tmpz00_338 =
																								(int) (((long) 0));
																							STRUCT_SET(BgL_newz00_152,
																								BgL_tmpz00_338,
																								BgL_arg1042z00_75);
																						}
																						return BgL_newz00_152;
																					}
																				}
																			}
																		else
																			{	/* Tools/location.scm 55 */
																				return BFALSE;
																			}
																	}
																else
																	{	/* Tools/location.scm 55 */
																		return BFALSE;
																	}
															}
														else
															{	/* Tools/location.scm 55 */
																return BFALSE;
															}
													}
												else
													{	/* Tools/location.scm 55 */
														return BFALSE;
													}
											}
										else
											{	/* Tools/location.scm 55 */
												return BFALSE;
											}
									}
							}
						}
					else
						{	/* Tools/location.scm 61 */
							return BFALSE;
						}
				}
			}
		}

	}



/* &find-location */
	obj_t BGl_z62findzd2locationzb0zztools_locationz00(obj_t BgL_envz00_219,
		obj_t BgL_expz00_220)
	{
		{	/* Tools/location.scm 51 */
			return BGl_findzd2locationzd2zztools_locationz00(BgL_expz00_220);
		}

	}



/* find-location/loc */
	BGL_EXPORTED_DEF obj_t BGl_findzd2locationzf2locz20zztools_locationz00(obj_t
		BgL_expz00_21, obj_t BgL_locz00_22)
	{
		{	/* Tools/location.scm 70 */
			{	/* Tools/location.scm 71 */
				obj_t BgL_newzd2loczd2_158;

				BgL_newzd2loczd2_158 =
					BGl_findzd2locationzd2zztools_locationz00(BgL_expz00_21);
				{	/* Tools/location.scm 72 */
					bool_t BgL_test1125z00_343;

					if (STRUCTP(BgL_newzd2loczd2_158))
						{	/* Tools/location.scm 72 */
							BgL_test1125z00_343 =
								(STRUCT_KEY(BgL_newzd2loczd2_158) ==
								CNST_TABLE_REF(((long) 0)));
						}
					else
						{	/* Tools/location.scm 72 */
							BgL_test1125z00_343 = ((bool_t) 0);
						}
					if (BgL_test1125z00_343)
						{	/* Tools/location.scm 72 */
							return BgL_newzd2loczd2_158;
						}
					else
						{	/* Tools/location.scm 72 */
							return BgL_locz00_22;
						}
				}
			}
		}

	}



/* &find-location/loc */
	obj_t BGl_z62findzd2locationzf2locz42zztools_locationz00(obj_t BgL_envz00_221,
		obj_t BgL_expz00_222, obj_t BgL_locz00_223)
	{
		{	/* Tools/location.scm 70 */
			return
				BGl_findzd2locationzf2locz20zztools_locationz00(BgL_expz00_222,
				BgL_locz00_223);
		}

	}



/* location-full-fname */
	BGL_EXPORTED_DEF obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t
		BgL_locz00_23)
	{
		{	/* Tools/location.scm 79 */
			{	/* Tools/location.scm 80 */
				obj_t BgL_filezd2namezd2_83;

				BgL_filezd2namezd2_83 =
					STRUCT_REF(((obj_t) BgL_locz00_23), (int) (((long) 0)));
				{	/* Tools/location.scm 80 */
					obj_t BgL_fullzd2namezd2_84;

					BgL_fullzd2namezd2_84 =
						BGl_makezd2filezd2namez00zz__osz00(BGl_pwdz00zz__osz00(),
						BgL_filezd2namezd2_83);
					{	/* Tools/location.scm 81 */

						if (fexists(BSTRING_TO_STRING(BgL_fullzd2namezd2_84)))
							{	/* Tools/location.scm 82 */
								return BgL_fullzd2namezd2_84;
							}
						else
							{	/* Tools/location.scm 84 */
								obj_t BgL_libzd2namezd2_86;

								BgL_libzd2namezd2_86 =
									BGl_makezd2filezd2namez00zz__osz00
									(BGl_za2libzd2srczd2dirza2z00zzengine_paramz00,
									BgL_filezd2namezd2_83);
								if (fexists(BSTRING_TO_STRING(BgL_libzd2namezd2_86)))
									{	/* Tools/location.scm 85 */
										return BgL_libzd2namezd2_86;
									}
								else
									{	/* Tools/location.scm 85 */
										return BgL_filezd2namezd2_83;
									}
							}
					}
				}
			}
		}

	}



/* &location-full-fname */
	obj_t BGl_z62locationzd2fullzd2fnamez62zztools_locationz00(obj_t
		BgL_envz00_224, obj_t BgL_locz00_225)
	{
		{	/* Tools/location.scm 79 */
			return BGl_locationzd2fullzd2fnamez00zztools_locationz00(BgL_locz00_225);
		}

	}



/* location-shape */
	BGL_EXPORTED_DEF obj_t BGl_locationzd2shapezd2zztools_locationz00(obj_t
		BgL_locz00_24, obj_t BgL_lz00_25)
	{
		{	/* Tools/location.scm 92 */
			{	/* Tools/location.scm 93 */
				bool_t BgL_test1129z00_363;

				if (CBOOL(BGl_za2locationzd2shapezf3za2z21zzengine_paramz00))
					{	/* Tools/location.scm 93 */
						if (STRUCTP(BgL_locz00_24))
							{	/* Tools/location.scm 93 */
								BgL_test1129z00_363 =
									(STRUCT_KEY(BgL_locz00_24) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Tools/location.scm 93 */
								BgL_test1129z00_363 = ((bool_t) 0);
							}
					}
				else
					{	/* Tools/location.scm 93 */
						BgL_test1129z00_363 = ((bool_t) 0);
					}
				if (BgL_test1129z00_363)
					{	/* Tools/location.scm 94 */
						obj_t BgL_arg1053z00_90;

						{	/* Tools/location.scm 94 */
							obj_t BgL_v1013z00_91;

							BgL_v1013z00_91 = create_vector(((long) 3));
							{	/* Tools/location.scm 94 */
								obj_t BgL_arg1054z00_92;

								{	/* Tools/location.scm 94 */
									obj_t BgL_arg1055z00_93;

									BgL_arg1055z00_93 =
										STRUCT_REF(BgL_locz00_24, (int) (((long) 0)));
									{	/* Tools/location.scm 94 */
										obj_t BgL_res1082z00_177;

										BgL_res1082z00_177 =
											bstring_to_symbol(((obj_t) BgL_arg1055z00_93));
										BgL_arg1054z00_92 = BgL_res1082z00_177;
								}}
								VECTOR_SET(BgL_v1013z00_91, ((long) 0), BgL_arg1054z00_92);
							}
							VECTOR_SET(BgL_v1013z00_91, ((long) 1),
								STRUCT_REF(BgL_locz00_24, (int) (((long) 1))));
							VECTOR_SET(BgL_v1013z00_91, ((long) 2),
								STRUCT_REF(BgL_locz00_24, (int) (((long) 2))));
							BgL_arg1053z00_90 = BgL_v1013z00_91;
						}
						return MAKE_YOUNG_PAIR(BgL_arg1053z00_90, BgL_lz00_25);
					}
				else
					{	/* Tools/location.scm 93 */
						return BgL_lz00_25;
					}
			}
		}

	}



/* &location-shape */
	obj_t BGl_z62locationzd2shapezb0zztools_locationz00(obj_t BgL_envz00_226,
		obj_t BgL_locz00_227, obj_t BgL_lz00_228)
	{
		{	/* Tools/location.scm 92 */
			return
				BGl_locationzd2shapezd2zztools_locationz00(BgL_locz00_227,
				BgL_lz00_228);
		}

	}



/* dump-location */
	BGL_EXPORTED_DEF obj_t BGl_dumpzd2locationzd2zztools_locationz00(obj_t
		BgL_fromz00_26, obj_t BgL_exprz00_27)
	{
		{	/* Tools/location.scm 104 */
			{	/* Tools/location.scm 105 */
				obj_t BgL_port1014z00_96;

				{	/* Tools/location.scm 105 */
					obj_t BgL_res1083z00_184;

					{	/* Tools/location.scm 105 */
						obj_t BgL_tmpz00_385;

						BgL_tmpz00_385 = BGL_CURRENT_DYNAMIC_ENV();
						BgL_res1083z00_184 = BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_385);
					}
					BgL_port1014z00_96 = BgL_res1083z00_184;
				}
				bgl_display_string(BGl_string1089z00zztools_locationz00,
					BgL_port1014z00_96);
				bgl_display_obj(BgL_fromz00_26, BgL_port1014z00_96);
				bgl_display_string(BGl_string1090z00zztools_locationz00,
					BgL_port1014z00_96);
				bgl_display_obj(BgL_exprz00_27, BgL_port1014z00_96);
				bgl_display_string(BGl_string1091z00zztools_locationz00,
					BgL_port1014z00_96);
				bgl_display_obj(BGl_findzd2locationzd2zztools_locationz00
					(BgL_exprz00_27), BgL_port1014z00_96);
				bgl_display_char(((unsigned char) 10), BgL_port1014z00_96);
			}
			{
				obj_t BgL_exprz00_99;

				{	/* Tools/location.scm 106 */
					bool_t BgL_tmpz00_396;

					BgL_exprz00_99 = BgL_exprz00_27;
				BgL_zc3z04anonymousza31059ze3z87_100:
					if (PAIRP(BgL_exprz00_99))
						{	/* Tools/location.scm 107 */
							{	/* Tools/location.scm 109 */
								obj_t BgL_port1015z00_102;

								{	/* Tools/location.scm 109 */
									obj_t BgL_res1085z00_194;

									{	/* Tools/location.scm 109 */
										obj_t BgL_tmpz00_399;

										BgL_tmpz00_399 = BGL_CURRENT_DYNAMIC_ENV();
										BgL_res1085z00_194 =
											BGL_ENV_CURRENT_OUTPUT_PORT(BgL_tmpz00_399);
									}
									BgL_port1015z00_102 = BgL_res1085z00_194;
								}
								bgl_display_string(BGl_string1092z00zztools_locationz00,
									BgL_port1015z00_102);
								bgl_display_obj(BgL_fromz00_26, BgL_port1015z00_102);
								bgl_display_string(BGl_string1090z00zztools_locationz00,
									BgL_port1015z00_102);
								bgl_display_obj(BgL_exprz00_99, BgL_port1015z00_102);
								bgl_display_string(BGl_string1091z00zztools_locationz00,
									BgL_port1015z00_102);
								bgl_display_obj(BGl_findzd2locationzd2zztools_locationz00
									(BgL_exprz00_99), BgL_port1015z00_102);
								bgl_display_char(((unsigned char) 10), BgL_port1015z00_102);
							}
							{
								obj_t BgL_exprz00_410;

								BgL_exprz00_410 = CDR(BgL_exprz00_99);
								BgL_exprz00_99 = BgL_exprz00_410;
								goto BgL_zc3z04anonymousza31059ze3z87_100;
							}
						}
					else
						{	/* Tools/location.scm 107 */
							BgL_tmpz00_396 = ((bool_t) 0);
						}
					return BBOOL(BgL_tmpz00_396);
				}
			}
		}

	}



/* &dump-location */
	obj_t BGl_z62dumpzd2locationzb0zztools_locationz00(obj_t BgL_envz00_229,
		obj_t BgL_fromz00_230, obj_t BgL_exprz00_231)
	{
		{	/* Tools/location.scm 104 */
			return
				BGl_dumpzd2locationzd2zztools_locationz00(BgL_fromz00_230,
				BgL_exprz00_231);
		}

	}



/* location-skip-forward */
	BGL_EXPORTED_DEF obj_t
		BGl_locationzd2skipzd2forwardz00zztools_locationz00(obj_t BgL_locz00_28,
		int BgL_skipz00_29)
	{
		{	/* Tools/location.scm 116 */
			{	/* Tools/location.scm 117 */
				bool_t BgL_test1133z00_414;

				if (STRUCTP(BgL_locz00_28))
					{	/* Tools/location.scm 117 */
						BgL_test1133z00_414 =
							(STRUCT_KEY(BgL_locz00_28) == CNST_TABLE_REF(((long) 0)));
					}
				else
					{	/* Tools/location.scm 117 */
						BgL_test1133z00_414 = ((bool_t) 0);
					}
				if (BgL_test1133z00_414)
					{	/* Tools/location.scm 118 */
						obj_t BgL_fnamez00_107;
						long BgL_nposz00_108;

						BgL_fnamez00_107 = STRUCT_REF(BgL_locz00_28, (int) (((long) 0)));
						BgL_nposz00_108 =
							(
							(long) CINT(STRUCT_REF(BgL_locz00_28,
									(int) (((long) 1)))) + (long) (BgL_skipz00_29));
						{	/* Tools/location.scm 120 */
							obj_t BgL_arg1064z00_109;

							{	/* Tools/location.scm 45 */
								obj_t BgL_linesz00_213;

								BgL_linesz00_213 =
									BGl_getzd2filezd2linesz00zztools_locationz00
									(BgL_fnamez00_107);
								{	/* Tools/location.scm 46 */
									obj_t BgL__ortest_1012z00_214;

									BgL__ortest_1012z00_214 =
										BGl_filezd2positionzd2ze3lineze3zz__r4_input_6_10_2z00(
										(int) (BgL_nposz00_108), BgL_linesz00_213);
									if (CBOOL(BgL__ortest_1012z00_214))
										{	/* Tools/location.scm 46 */
											BgL_arg1064z00_109 = BgL__ortest_1012z00_214;
										}
									else
										{	/* Tools/location.scm 46 */
											BgL_arg1064z00_109 = BINT(((long) 0));
							}}}
							{	/* Tools/location.scm 120 */
								obj_t BgL_newz00_215;

								BgL_newz00_215 =
									create_struct(CNST_TABLE_REF(((long) 0)), (int) (((long) 3)));
								{	/* Tools/location.scm 120 */
									int BgL_tmpz00_436;

									BgL_tmpz00_436 = (int) (((long) 2));
									STRUCT_SET(BgL_newz00_215, BgL_tmpz00_436,
										BgL_arg1064z00_109);
								}
								{	/* Tools/location.scm 120 */
									obj_t BgL_auxz00_441;
									int BgL_tmpz00_439;

									BgL_auxz00_441 = BINT(BgL_nposz00_108);
									BgL_tmpz00_439 = (int) (((long) 1));
									STRUCT_SET(BgL_newz00_215, BgL_tmpz00_439, BgL_auxz00_441);
								}
								{	/* Tools/location.scm 120 */
									int BgL_tmpz00_444;

									BgL_tmpz00_444 = (int) (((long) 0));
									STRUCT_SET(BgL_newz00_215, BgL_tmpz00_444, BgL_fnamez00_107);
								}
								return BgL_newz00_215;
							}
						}
					}
				else
					{	/* Tools/location.scm 117 */
						return BgL_locz00_28;
					}
			}
		}

	}



/* &location-skip-forward */
	obj_t BGl_z62locationzd2skipzd2forwardz62zztools_locationz00(obj_t
		BgL_envz00_232, obj_t BgL_locz00_233, obj_t BgL_skipz00_234)
	{
		{	/* Tools/location.scm 116 */
			return
				BGl_locationzd2skipzd2forwardz00zztools_locationz00(BgL_locz00_233,
				CINT(BgL_skipz00_234));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_locationz00()
	{
		{	/* Tools/location.scm 15 */
			return
				BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1093z00zztools_locationz00));
		}

	}

#ifdef __cplusplus
}
#endif
