/*===========================================================================*/
/*   (Expand/case.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/case.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_casez00();
	static obj_t BGl_typezd2testzd2zzexpand_casez00(obj_t, obj_t, obj_t, obj_t,
		obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_casez00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2casezd2zzexpand_casez00(obj_t, obj_t);
	static bool_t BGl_typezd2matchzf3ze70zc6zzexpand_casez00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_dozd2genericzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2casezb0zzexpand_casez00(obj_t, obj_t, obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_casez00();
	extern obj_t BGl_epairifyzd2reczd2zztools_miscz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_loopze70ze7zzexpand_casez00(obj_t);
	static obj_t BGl_loopze71ze7zzexpand_casez00(obj_t, obj_t);
	static obj_t BGl_loopze72ze7zzexpand_casez00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00;
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_dozd2cnstzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_casez00 = BUNSPEC;
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_casez00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	static obj_t BGl_casezd2typezd2zzexpand_casez00(obj_t, obj_t);
	static obj_t
		BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t, obj_t,
		obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_casez00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_identz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzexpand_casez00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_casez00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_casez00();
	static obj_t BGl_dozd2typedzd2casez00zzexpand_casez00(obj_t, obj_t, obj_t,
		obj_t);
	static obj_t
		BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t, obj_t,
		obj_t, obj_t);
	static obj_t BGl_generalze70ze7zzexpand_casez00(obj_t, obj_t);
	extern obj_t BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00(obj_t);
	static obj_t __cnst[30];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2casezd2envz00zzexpand_casez00,
		BgL_bgl_za762expandza7d2case2097z00,
		BGl_z62expandzd2casezb0zzexpand_casez00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2086z00zzexpand_casez00,
		BgL_bgl_string2086za700za7za7e2098za7, "case", 4);
	      DEFINE_STRING(BGl_string2087z00zzexpand_casez00,
		BgL_bgl_string2087za700za7za7e2099za7, "Illegal `case' form", 19);
	      DEFINE_STRING(BGl_string2088z00zzexpand_casez00,
		BgL_bgl_string2088za700za7za7e2100za7, "case_else", 9);
	      DEFINE_STRING(BGl_string2089z00zzexpand_casez00,
		BgL_bgl_string2089za700za7za7e2101za7, "Illegal `case' clause", 21);
	      DEFINE_STRING(BGl_string2090z00zzexpand_casez00,
		BgL_bgl_string2090za700za7za7e2102za7, "type-test", 9);
	      DEFINE_STRING(BGl_string2091z00zzexpand_casez00,
		BgL_bgl_string2091za700za7za7e2103za7, "Unknown `case' type", 19);
	      DEFINE_STRING(BGl_string2092z00zzexpand_casez00,
		BgL_bgl_string2092za700za7za7e2104za7, "expand_case", 11);
	      DEFINE_STRING(BGl_string2093z00zzexpand_casez00,
		BgL_bgl_string2093za700za7za7e2105za7,
		"c-keyword? c-symbol? int32? uint32? c-fixnum? labels c-char? memv or c-eq? eqv? quote case-value let if cnst->integer cnst? aux else etherogeneous case fail-type keyword symbol cnst char int32 uint32 long integer ",
		213);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzexpand_casez00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_casez00(long
		BgL_checksumz00_998, char *BgL_fromz00_999)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_casez00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_casez00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_casez00();
					BGl_libraryzd2moduleszd2initz00zzexpand_casez00();
					BGl_cnstzd2initzd2zzexpand_casez00();
					BGl_importedzd2moduleszd2initz00zzexpand_casez00();
					return BGl_methodzd2initzd2zzexpand_casez00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_case");
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long) 0),
				"expand_case");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			{	/* Expand/case.scm 15 */
				obj_t BgL_cportz00_985;

				{	/* Expand/case.scm 15 */
					obj_t BgL_stringz00_993;

					BgL_stringz00_993 = BGl_string2093z00zzexpand_casez00;
					{	/* Expand/case.scm 15 */
						obj_t BgL_startz00_994;

						BgL_startz00_994 = BINT(((long) 0));
						{	/* Expand/case.scm 15 */
							obj_t BgL_endz00_995;

							BgL_endz00_995 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_993)));
							{	/* Expand/case.scm 15 */

								BgL_cportz00_985 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_993, BgL_startz00_994, BgL_endz00_995);
				}}}}
				{
					long BgL_iz00_986;

					BgL_iz00_986 = ((long) 29);
				BgL_loopz00_987:
					if ((BgL_iz00_986 == ((long) -1)))
						{	/* Expand/case.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/case.scm 15 */
							{	/* Expand/case.scm 15 */
								obj_t BgL_arg2095z00_989;

								{	/* Expand/case.scm 15 */

									{	/* Expand/case.scm 15 */
										obj_t BgL_locationz00_991;

										BgL_locationz00_991 = BBOOL(((bool_t) 0));
										{	/* Expand/case.scm 15 */

											BgL_arg2095z00_989 =
												BGl_readz00zz__readerz00(BgL_cportz00_985,
												BgL_locationz00_991);
										}
									}
								}
								{	/* Expand/case.scm 15 */
									int BgL_tmpz00_1028;

									BgL_tmpz00_1028 = (int) (BgL_iz00_986);
									CNST_TABLE_SET(BgL_tmpz00_1028, BgL_arg2095z00_989);
							}}
							{	/* Expand/case.scm 15 */
								int BgL_auxz00_992;

								BgL_auxz00_992 = (int) ((BgL_iz00_986 - ((long) 1)));
								{
									long BgL_iz00_1033;

									BgL_iz00_1033 = (long) (BgL_auxz00_992);
									BgL_iz00_986 = BgL_iz00_1033;
									goto BgL_loopz00_987;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-case */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2casezd2zzexpand_casez00(obj_t BgL_xz00_3,
		obj_t BgL_ez00_4)
	{
		{	/* Expand/case.scm 34 */
			{
				obj_t BgL_valuez00_102;
				obj_t BgL_clausesz00_103;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/case.scm 36 */
						obj_t BgL_cdrzd2367zd2_108;

						BgL_cdrzd2367zd2_108 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2367zd2_108))
							{	/* Expand/case.scm 36 */
								BgL_valuez00_102 = CAR(BgL_cdrzd2367zd2_108);
								BgL_clausesz00_103 = CDR(BgL_cdrzd2367zd2_108);
								{	/* Expand/case.scm 38 */
									obj_t BgL_casezd2valuezd2_112;

									BgL_casezd2valuezd2_112 =
										BGl_casezd2typezd2zzexpand_casez00(BgL_xz00_3,
										BgL_clausesz00_103);
									if ((BgL_casezd2valuezd2_112 == CNST_TABLE_REF(((long) 0))))
										{	/* Expand/case.scm 38 */
											return
												BGl_dozd2typedzd2casez00zzexpand_casez00(CNST_TABLE_REF(
													((long) 1)), BgL_valuez00_102, BgL_clausesz00_103,
												BgL_ez00_4);
										}
									else
										{	/* Expand/case.scm 38 */
											if (
												(BgL_casezd2valuezd2_112 == CNST_TABLE_REF(((long) 2))))
												{	/* Expand/case.scm 38 */
													return
														BGl_dozd2typedzd2casez00zzexpand_casez00
														(CNST_TABLE_REF(((long) 2)), BgL_valuez00_102,
														BgL_clausesz00_103, BgL_ez00_4);
												}
											else
												{	/* Expand/case.scm 38 */
													if (
														(BgL_casezd2valuezd2_112 ==
															CNST_TABLE_REF(((long) 3))))
														{	/* Expand/case.scm 38 */
															return
																BGl_dozd2typedzd2casez00zzexpand_casez00
																(CNST_TABLE_REF(((long) 3)), BgL_valuez00_102,
																BgL_clausesz00_103, BgL_ez00_4);
														}
													else
														{	/* Expand/case.scm 38 */
															if (
																(BgL_casezd2valuezd2_112 ==
																	CNST_TABLE_REF(((long) 4))))
																{	/* Expand/case.scm 38 */
																	return
																		BGl_dozd2typedzd2casez00zzexpand_casez00
																		(CNST_TABLE_REF(((long) 4)),
																		BgL_valuez00_102, BgL_clausesz00_103,
																		BgL_ez00_4);
																}
															else
																{	/* Expand/case.scm 38 */
																	if (
																		(BgL_casezd2valuezd2_112 ==
																			CNST_TABLE_REF(((long) 5))))
																		{	/* Expand/case.scm 38 */
																			return
																				BGl_dozd2cnstzd2casez00zzexpand_casez00
																				(BgL_valuez00_102, BgL_clausesz00_103,
																				BgL_ez00_4);
																		}
																	else
																		{	/* Expand/case.scm 38 */
																			if (
																				(BgL_casezd2valuezd2_112 ==
																					CNST_TABLE_REF(((long) 6))))
																				{	/* Expand/case.scm 38 */
																					{	/* Expand/case.scm 56 */
																						obj_t BgL_typez00_744;

																						BgL_typez00_744 =
																							CNST_TABLE_REF(((long) 6));
																						if (CBOOL
																							(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00))
																							{	/* Expand/case.scm 212 */
																								return
																									BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00
																									(BgL_typez00_744,
																									BgL_valuez00_102,
																									BgL_clausesz00_103,
																									BgL_ez00_4);
																							}
																						else
																							{	/* Expand/case.scm 212 */
																								return
																									BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
																									(BgL_valuez00_102,
																									BgL_clausesz00_103,
																									BgL_ez00_4);
																							}
																					}
																				}
																			else
																				{	/* Expand/case.scm 38 */
																					if (
																						(BgL_casezd2valuezd2_112 ==
																							CNST_TABLE_REF(((long) 7))))
																						{	/* Expand/case.scm 38 */
																							{	/* Expand/case.scm 59 */
																								obj_t BgL_typez00_747;

																								BgL_typez00_747 =
																									CNST_TABLE_REF(((long) 7));
																								if (CBOOL
																									(BGl_za2optimzd2symbolzd2caseza2z00zzengine_paramz00))
																									{	/* Expand/case.scm 212 */
																										return
																											BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00
																											(BgL_typez00_747,
																											BgL_valuez00_102,
																											BgL_clausesz00_103,
																											BgL_ez00_4);
																									}
																								else
																									{	/* Expand/case.scm 212 */
																										return
																											BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
																											(BgL_valuez00_102,
																											BgL_clausesz00_103,
																											BgL_ez00_4);
																									}
																							}
																						}
																					else
																						{	/* Expand/case.scm 38 */
																							return
																								BGl_dozd2genericzd2casez00zzexpand_casez00
																								(BgL_valuez00_102,
																								BgL_clausesz00_103, BgL_ez00_4);
																						}
																				}
																		}
																}
														}
												}
										}
								}
							}
						else
							{	/* Expand/case.scm 36 */
							BgL_tagzd2360zd2_105:
								return
									BGl_errorz00zz__errorz00(BGl_string2086z00zzexpand_casez00,
									BGl_string2087z00zzexpand_casez00, BgL_xz00_3);
							}
					}
				else
					{	/* Expand/case.scm 36 */
						goto BgL_tagzd2360zd2_105;
					}
			}
		}

	}



/* &expand-case */
	obj_t BGl_z62expandzd2casezb0zzexpand_casez00(obj_t BgL_envz00_979,
		obj_t BgL_xz00_980, obj_t BgL_ez00_981)
	{
		{	/* Expand/case.scm 34 */
			return BGl_expandzd2casezd2zzexpand_casez00(BgL_xz00_980, BgL_ez00_981);
		}

	}



/* case-type */
	obj_t BGl_casezd2typezd2zzexpand_casez00(obj_t BgL_xz00_5,
		obj_t BgL_clausesz00_6)
	{
		{	/* Expand/case.scm 77 */
			{
				obj_t BgL_datumz00_173;
				obj_t BgL_datumsz00_182;

				{
					obj_t BgL_clausesz00_126;
					obj_t BgL_typez00_127;

					BgL_clausesz00_126 = BgL_clausesz00_6;
					BgL_typez00_127 = BNIL;
				BgL_zc3z04anonymousza31117ze3z87_128:
					if (NULLP(BgL_clausesz00_126))
						{	/* Expand/case.scm 122 */
							return BgL_typez00_127;
						}
					else
						{
							obj_t BgL_expsz00_130;
							obj_t BgL_datumz00_132;
							obj_t BgL_expsz00_133;

							{	/* Expand/case.scm 124 */
								obj_t BgL_ezd2377zd2_136;

								BgL_ezd2377zd2_136 = CAR(((obj_t) BgL_clausesz00_126));
								if (PAIRP(BgL_ezd2377zd2_136))
									{	/* Expand/case.scm 124 */
										if (
											(CAR(BgL_ezd2377zd2_136) == CNST_TABLE_REF(((long) 11))))
											{	/* Expand/case.scm 124 */
												BgL_expsz00_130 = CDR(BgL_ezd2377zd2_136);
												{	/* Expand/case.scm 126 */
													bool_t BgL_test2122z00_1097;

													if (NULLP(CDR(((obj_t) BgL_clausesz00_126))))
														{	/* Expand/case.scm 126 */
															BgL_test2122z00_1097 = NULLP(BgL_expsz00_130);
														}
													else
														{	/* Expand/case.scm 126 */
															BgL_test2122z00_1097 = ((bool_t) 1);
														}
													if (BgL_test2122z00_1097)
														{	/* Expand/case.scm 126 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2086z00zzexpand_casez00,
																BGl_string2087z00zzexpand_casez00, BgL_xz00_5);
														}
													else
														{	/* Expand/case.scm 126 */
															return BgL_typez00_127;
														}
												}
											}
										else
											{	/* Expand/case.scm 124 */
												obj_t BgL_carzd2388zd2_141;

												BgL_carzd2388zd2_141 = CAR(BgL_ezd2377zd2_136);
												if (NULLP(BgL_carzd2388zd2_141))
													{	/* Expand/case.scm 124 */
													BgL_tagzd2376zd2_135:
														return
															BGl_errorz00zz__errorz00
															(BGl_string2086z00zzexpand_casez00,
															BGl_string2087z00zzexpand_casez00, BgL_xz00_5);
													}
												else
													{	/* Expand/case.scm 124 */
														BgL_datumz00_132 = BgL_carzd2388zd2_141;
														BgL_expsz00_133 = CDR(BgL_ezd2377zd2_136);
														if (NULLP(BgL_expsz00_133))
															{	/* Expand/case.scm 131 */
																return
																	BGl_errorz00zz__errorz00
																	(BGl_string2086z00zzexpand_casez00,
																	BGl_string2087z00zzexpand_casez00,
																	BgL_xz00_5);
															}
														else
															{	/* Expand/case.scm 133 */
																obj_t BgL_dtypez00_152;

																BgL_datumsz00_182 = BgL_datumz00_132;
																{
																	obj_t BgL_datumsz00_186;
																	obj_t BgL_typez00_187;

																	BgL_datumsz00_186 = BgL_datumsz00_182;
																	BgL_typez00_187 = BNIL;
																BgL_zc3z04anonymousza31160ze3z87_188:
																	if (NULLP(BgL_datumsz00_186))
																		{	/* Expand/case.scm 109 */
																			BgL_dtypez00_152 = BgL_typez00_187;
																		}
																	else
																		{	/* Expand/case.scm 109 */
																			if (PAIRP(BgL_datumsz00_186))
																				{	/* Expand/case.scm 115 */
																					obj_t BgL_dtypez00_191;

																					BgL_datumz00_173 =
																						CAR(BgL_datumsz00_186);
																					if (INTEGERP(BgL_datumz00_173))
																						{	/* Expand/case.scm 96 */
																							BgL_dtypez00_191 =
																								CNST_TABLE_REF(((long) 0));
																						}
																					else
																						{	/* Expand/case.scm 96 */
																							if (BGL_UINT32P(BgL_datumz00_173))
																								{	/* Expand/case.scm 97 */
																									BgL_dtypez00_191 =
																										CNST_TABLE_REF(((long) 2));
																								}
																							else
																								{	/* Expand/case.scm 97 */
																									if (BGL_INT32P
																										(BgL_datumz00_173))
																										{	/* Expand/case.scm 98 */
																											BgL_dtypez00_191 =
																												CNST_TABLE_REF(((long)
																													3));
																										}
																									else
																										{	/* Expand/case.scm 98 */
																											if (CHARP
																												(BgL_datumz00_173))
																												{	/* Expand/case.scm 99 */
																													BgL_dtypez00_191 =
																														CNST_TABLE_REF((
																															(long) 4));
																												}
																											else
																												{	/* Expand/case.scm 99 */
																													if (CNSTP
																														(BgL_datumz00_173))
																														{	/* Expand/case.scm 100 */
																															BgL_dtypez00_191 =
																																CNST_TABLE_REF((
																																	(long) 5));
																														}
																													else
																														{	/* Expand/case.scm 100 */
																															if (SYMBOLP
																																(BgL_datumz00_173))
																																{	/* Expand/case.scm 101 */
																																	BgL_dtypez00_191
																																		=
																																		CNST_TABLE_REF
																																		(((long)
																																			6));
																																}
																															else
																																{	/* Expand/case.scm 101 */
																																	if (KEYWORDP
																																		(BgL_datumz00_173))
																																		{	/* Expand/case.scm 102 */
																																			BgL_dtypez00_191
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					7));
																																		}
																																	else
																																		{	/* Expand/case.scm 102 */
																																			BgL_dtypez00_191
																																				=
																																				CNST_TABLE_REF
																																				(((long)
																																					8));
																						}}}}}}}
																					if (BGl_typezd2matchzf3ze70zc6zzexpand_casez00(BgL_dtypez00_191, BgL_typez00_187))
																						{
																							obj_t BgL_typez00_1143;
																							obj_t BgL_datumsz00_1141;

																							BgL_datumsz00_1141 =
																								CDR(BgL_datumsz00_186);
																							BgL_typez00_1143 =
																								BGl_generalze70ze7zzexpand_casez00
																								(BgL_dtypez00_191,
																								BgL_typez00_187);
																							BgL_typez00_187 =
																								BgL_typez00_1143;
																							BgL_datumsz00_186 =
																								BgL_datumsz00_1141;
																							goto
																								BgL_zc3z04anonymousza31160ze3z87_188;
																						}
																					else
																						{	/* Expand/case.scm 116 */
																							BgL_dtypez00_152 =
																								CNST_TABLE_REF(((long) 8));
																				}}
																			else
																				{	/* Expand/case.scm 111 */
																					BGl_errorz00zz__errorz00
																						(CNST_TABLE_REF(((long) 9)),
																						BGl_string2087z00zzexpand_casez00,
																						BgL_xz00_5);
																					BgL_dtypez00_152 = BFALSE;
																}}}
																if (BGl_typezd2matchzf3ze70zc6zzexpand_casez00
																	(BgL_dtypez00_152, BgL_typez00_127))
																	{	/* Expand/case.scm 135 */
																		obj_t BgL_arg1140z00_154;
																		obj_t BgL_arg1145z00_155;

																		BgL_arg1140z00_154 =
																			CDR(((obj_t) BgL_clausesz00_126));
																		BgL_arg1145z00_155 =
																			BGl_generalze70ze7zzexpand_casez00
																			(BgL_dtypez00_152, BgL_typez00_127);
																		{
																			obj_t BgL_typez00_1154;
																			obj_t BgL_clausesz00_1153;

																			BgL_clausesz00_1153 = BgL_arg1140z00_154;
																			BgL_typez00_1154 = BgL_arg1145z00_155;
																			BgL_typez00_127 = BgL_typez00_1154;
																			BgL_clausesz00_126 = BgL_clausesz00_1153;
																			goto BgL_zc3z04anonymousza31117ze3z87_128;
																		}
																	}
																else
																	{	/* Expand/case.scm 134 */
																		return CNST_TABLE_REF(((long) 10));
									}}}}}
								else
									{	/* Expand/case.scm 124 */
										goto BgL_tagzd2376zd2_135;
									}
							}
						}
				}
			}
		}

	}



/* type-match?~0 */
	bool_t BGl_typezd2matchzf3ze70zc6zzexpand_casez00(obj_t BgL_type1z00_157,
		obj_t BgL_type2z00_158)
	{
		{	/* Expand/case.scm 85 */
			{	/* Expand/case.scm 80 */
				bool_t BgL__ortest_1051z00_160;

				BgL__ortest_1051z00_160 = NULLP(BgL_type1z00_157);
				if (BgL__ortest_1051z00_160)
					{	/* Expand/case.scm 80 */
						return BgL__ortest_1051z00_160;
					}
				else
					{	/* Expand/case.scm 81 */
						bool_t BgL__ortest_1052z00_161;

						BgL__ortest_1052z00_161 = NULLP(BgL_type2z00_158);
						if (BgL__ortest_1052z00_161)
							{	/* Expand/case.scm 81 */
								return BgL__ortest_1052z00_161;
							}
						else
							{	/* Expand/case.scm 81 */
								if ((BgL_type1z00_157 == CNST_TABLE_REF(((long) 8))))
									{	/* Expand/case.scm 82 */
										return ((bool_t) 0);
									}
								else
									{	/* Expand/case.scm 83 */
										bool_t BgL__ortest_1054z00_163;

										BgL__ortest_1054z00_163 =
											(BgL_type1z00_157 == BgL_type2z00_158);
										if (BgL__ortest_1054z00_163)
											{	/* Expand/case.scm 83 */
												return BgL__ortest_1054z00_163;
											}
										else
											{	/* Expand/case.scm 84 */
												bool_t BgL__ortest_1055z00_164;

												if ((BgL_type1z00_157 == CNST_TABLE_REF(((long) 5))))
													{	/* Expand/case.scm 84 */
														BgL__ortest_1055z00_164 =
															(BgL_type2z00_158 == CNST_TABLE_REF(((long) 4)));
													}
												else
													{	/* Expand/case.scm 84 */
														BgL__ortest_1055z00_164 = ((bool_t) 0);
													}
												if (BgL__ortest_1055z00_164)
													{	/* Expand/case.scm 84 */
														return BgL__ortest_1055z00_164;
													}
												else
													{	/* Expand/case.scm 84 */
														if (
															(BgL_type1z00_157 == CNST_TABLE_REF(((long) 4))))
															{	/* Expand/case.scm 85 */
																return
																	(BgL_type2z00_158 ==
																	CNST_TABLE_REF(((long) 5)));
															}
														else
															{	/* Expand/case.scm 85 */
																return ((bool_t) 0);
															}
													}
											}
									}
							}
					}
			}
		}

	}



/* general~0 */
	obj_t BGl_generalze70ze7zzexpand_casez00(obj_t BgL_type1z00_167,
		obj_t BgL_type2z00_168)
	{
		{	/* Expand/case.scm 92 */
			if ((BgL_type1z00_167 == BgL_type2z00_168))
				{	/* Expand/case.scm 89 */
					return BgL_type1z00_167;
				}
			else
				{	/* Expand/case.scm 89 */
					if ((BgL_type1z00_167 == CNST_TABLE_REF(((long) 5))))
						{	/* Expand/case.scm 90 */
							return BgL_type1z00_167;
						}
					else
						{	/* Expand/case.scm 90 */
							if (NULLP(BgL_type2z00_168))
								{	/* Expand/case.scm 91 */
									return BgL_type1z00_167;
								}
							else
								{	/* Expand/case.scm 91 */
									return BgL_type2z00_168;
								}
						}
				}
		}

	}



/* do-typed-case */
	obj_t BGl_dozd2typedzd2casez00zzexpand_casez00(obj_t BgL_typez00_7,
		obj_t BgL_valuez00_8, obj_t BgL_clausesz00_9, obj_t BgL_ez00_10)
	{
		{	/* Expand/case.scm 144 */
			{	/* Expand/case.scm 145 */
				obj_t BgL_elsezd2bodyzd2_201;

				{
					obj_t BgL_clausesz00_262;

					BgL_clausesz00_262 = BgL_clausesz00_9;
				BgL_zc3z04anonymousza31253ze3z87_263:
					if (NULLP(BgL_clausesz00_262))
						{	/* Expand/case.scm 147 */
							obj_t BgL_list1255z00_265;

							BgL_list1255z00_265 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
							BgL_elsezd2bodyzd2_201 = BgL_list1255z00_265;
						}
					else
						{
							obj_t BgL_bodyz00_267;

							{	/* Expand/case.scm 148 */
								obj_t BgL_ezd2401zd2_270;

								BgL_ezd2401zd2_270 = CAR(((obj_t) BgL_clausesz00_262));
								if (NULLP(BgL_ezd2401zd2_270))
									{	/* Expand/case.scm 148 */
										BgL_elsezd2bodyzd2_201 = BUNSPEC;
									}
								else
									{	/* Expand/case.scm 148 */
										if (PAIRP(BgL_ezd2401zd2_270))
											{	/* Expand/case.scm 148 */
												if (
													(CAR(BgL_ezd2401zd2_270) ==
														CNST_TABLE_REF(((long) 11))))
													{	/* Expand/case.scm 148 */
														BgL_bodyz00_267 = CDR(BgL_ezd2401zd2_270);
														if (NULLP(BgL_bodyz00_267))
															{	/* Expand/case.scm 152 */
																BgL_elsezd2bodyzd2_201 = BNIL;
															}
														else
															{	/* Expand/case.scm 152 */
																obj_t BgL_head1064z00_279;

																{	/* Expand/case.scm 152 */
																	obj_t BgL_res2015z00_783;

																	BgL_res2015z00_783 =
																		MAKE_YOUNG_PAIR(BNIL, BNIL);
																	BgL_head1064z00_279 = BgL_res2015z00_783;
																}
																{
																	obj_t BgL_l1062z00_281;
																	obj_t BgL_tail1065z00_282;

																	BgL_l1062z00_281 = BgL_bodyz00_267;
																	BgL_tail1065z00_282 = BgL_head1064z00_279;
																BgL_zc3z04anonymousza31270ze3z87_283:
																	if (NULLP(BgL_l1062z00_281))
																		{	/* Expand/case.scm 152 */
																			BgL_elsezd2bodyzd2_201 =
																				CDR(BgL_head1064z00_279);
																		}
																	else
																		{	/* Expand/case.scm 152 */
																			obj_t BgL_newtail1066z00_285;

																			{	/* Expand/case.scm 152 */
																				obj_t BgL_arg1274z00_287;

																				{	/* Expand/case.scm 152 */
																					obj_t BgL_xz00_288;

																					BgL_xz00_288 =
																						CAR(((obj_t) BgL_l1062z00_281));
																					BgL_arg1274z00_287 =
																						PROCEDURE_ENTRY(BgL_ez00_10)
																						(BgL_ez00_10, BgL_xz00_288,
																						BgL_ez00_10, BEOA);
																				}
																				{	/* Expand/case.scm 152 */
																					obj_t BgL_res2017z00_787;

																					BgL_res2017z00_787 =
																						MAKE_YOUNG_PAIR(BgL_arg1274z00_287,
																						BNIL);
																					BgL_newtail1066z00_285 =
																						BgL_res2017z00_787;
																				}
																			}
																			SET_CDR(BgL_tail1065z00_282,
																				BgL_newtail1066z00_285);
																			{	/* Expand/case.scm 152 */
																				obj_t BgL_arg1273z00_286;

																				BgL_arg1273z00_286 =
																					CDR(((obj_t) BgL_l1062z00_281));
																				{
																					obj_t BgL_tail1065z00_1215;
																					obj_t BgL_l1062z00_1214;

																					BgL_l1062z00_1214 =
																						BgL_arg1273z00_286;
																					BgL_tail1065z00_1215 =
																						BgL_newtail1066z00_285;
																					BgL_tail1065z00_282 =
																						BgL_tail1065z00_1215;
																					BgL_l1062z00_281 = BgL_l1062z00_1214;
																					goto
																						BgL_zc3z04anonymousza31270ze3z87_283;
																				}
																			}
																		}
																}
															}
													}
												else
													{	/* Expand/case.scm 148 */
													BgL_tagzd2400zd2_269:
														{	/* Expand/case.scm 154 */
															obj_t BgL_arg1275z00_290;

															BgL_arg1275z00_290 =
																CDR(((obj_t) BgL_clausesz00_262));
															{
																obj_t BgL_clausesz00_1219;

																BgL_clausesz00_1219 = BgL_arg1275z00_290;
																BgL_clausesz00_262 = BgL_clausesz00_1219;
																goto BgL_zc3z04anonymousza31253ze3z87_263;
															}
														}
													}
											}
										else
											{	/* Expand/case.scm 148 */
												goto BgL_tagzd2400zd2_269;
											}
									}
							}
						}
				}
				{	/* Expand/case.scm 145 */
					obj_t BgL_elsezd2namezd2_202;

					BgL_elsezd2namezd2_202 =
						BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
						(BGl_gensymz00zz__r4_symbols_6_4z00
						(BGl_string2088z00zzexpand_casez00));
					{	/* Expand/case.scm 155 */
						obj_t BgL_auxz00_203;

						BgL_auxz00_203 =
							BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
							(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 12))));
						{	/* Expand/case.scm 156 */

							{	/* Expand/case.scm 157 */
								obj_t BgL_casez00_204;

								{	/* Expand/case.scm 159 */
									obj_t BgL_arg1169z00_205;

									BgL_arg1169z00_205 =
										MAKE_YOUNG_PAIR(BgL_auxz00_203,
										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
										(BGl_loopze72ze7zzexpand_casez00(BgL_elsezd2namezd2_202,
												BgL_ez00_10, BgL_clausesz00_9), BNIL));
									BgL_casez00_204 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 9)),
										BgL_arg1169z00_205);
								}
								return
									BGl_typezd2testzd2zzexpand_casez00(BgL_auxz00_203,
									BgL_typez00_7, BgL_valuez00_8, BgL_casez00_204,
									BgL_elsezd2bodyzd2_201, BgL_elsezd2namezd2_202, BgL_ez00_10);
							}
						}
					}
				}
			}
		}

	}



/* loop~2 */
	obj_t BGl_loopze72ze7zzexpand_casez00(obj_t BgL_elsezd2namezd2_984,
		obj_t BgL_ez00_983, obj_t BgL_clausesz00_209)
	{
		{	/* Expand/case.scm 158 */
			if (NULLP(BgL_clausesz00_209))
				{	/* Expand/case.scm 161 */
					obj_t BgL_arg1175z00_212;

					{	/* Expand/case.scm 161 */
						obj_t BgL_arg1176z00_213;

						BgL_arg1176z00_213 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
						BgL_arg1175z00_212 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)), BgL_arg1176z00_213);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1175z00_212, BNIL);
				}
			else
				{
					obj_t BgL_bodyz00_215;
					obj_t BgL_datumsz00_217;
					obj_t BgL_bodyz00_218;

					{	/* Expand/case.scm 162 */
						obj_t BgL_ezd2412zd2_221;

						BgL_ezd2412zd2_221 = CAR(((obj_t) BgL_clausesz00_209));
						if (NULLP(BgL_ezd2412zd2_221))
							{	/* Expand/case.scm 162 */
								{	/* Expand/case.scm 164 */
									obj_t BgL_arg1201z00_230;

									{	/* Expand/case.scm 164 */
										obj_t BgL_arg1208z00_231;

										BgL_arg1208z00_231 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
										BgL_arg1201z00_230 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
											BgL_arg1208z00_231);
									}
									return MAKE_YOUNG_PAIR(BgL_arg1201z00_230, BNIL);
								}
							}
						else
							{	/* Expand/case.scm 162 */
								if (PAIRP(BgL_ezd2412zd2_221))
									{	/* Expand/case.scm 162 */
										if (
											(CAR(BgL_ezd2412zd2_221) == CNST_TABLE_REF(((long) 11))))
											{	/* Expand/case.scm 162 */
												BgL_bodyz00_215 = CDR(BgL_ezd2412zd2_221);
												{	/* Expand/case.scm 166 */
													obj_t BgL_arg1211z00_232;

													{	/* Expand/case.scm 166 */
														obj_t BgL_arg1216z00_233;

														{	/* Expand/case.scm 166 */
															obj_t BgL_arg1221z00_234;

															BgL_arg1221z00_234 =
																MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_984, BNIL);
															BgL_arg1216z00_233 =
																MAKE_YOUNG_PAIR(BgL_arg1221z00_234, BNIL);
														}
														BgL_arg1211z00_232 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 11)),
															BgL_arg1216z00_233);
													}
													return MAKE_YOUNG_PAIR(BgL_arg1211z00_232, BNIL);
												}
											}
										else
											{	/* Expand/case.scm 162 */
												BgL_datumsz00_217 = CAR(BgL_ezd2412zd2_221);
												BgL_bodyz00_218 = CDR(BgL_ezd2412zd2_221);
												if (NULLP(BgL_bodyz00_218))
													{	/* Expand/case.scm 171 */
														obj_t BgL_arg1225z00_236;

														BgL_arg1225z00_236 =
															CAR(((obj_t) BgL_clausesz00_209));
														return
															BGl_errorz00zz__errorz00
															(BGl_string2086z00zzexpand_casez00,
															BGl_string2089z00zzexpand_casez00,
															BgL_arg1225z00_236);
													}
												else
													{	/* Expand/case.scm 172 */
														obj_t BgL_nbodyz00_237;

														{	/* Expand/case.scm 172 */
															obj_t BgL_head1069z00_247;

															{	/* Expand/case.scm 172 */
																obj_t BgL_res2023z00_800;

																BgL_res2023z00_800 =
																	MAKE_YOUNG_PAIR(BNIL, BNIL);
																BgL_head1069z00_247 = BgL_res2023z00_800;
															}
															{
																obj_t BgL_l1067z00_249;
																obj_t BgL_tail1070z00_250;

																BgL_l1067z00_249 = BgL_bodyz00_218;
																BgL_tail1070z00_250 = BgL_head1069z00_247;
															BgL_zc3z04anonymousza31244ze3z87_251:
																if (NULLP(BgL_l1067z00_249))
																	{	/* Expand/case.scm 172 */
																		BgL_nbodyz00_237 = CDR(BgL_head1069z00_247);
																	}
																else
																	{	/* Expand/case.scm 172 */
																		obj_t BgL_newtail1071z00_253;

																		{	/* Expand/case.scm 172 */
																			obj_t BgL_arg1247z00_255;

																			{	/* Expand/case.scm 172 */
																				obj_t BgL_xz00_256;

																				BgL_xz00_256 =
																					CAR(((obj_t) BgL_l1067z00_249));
																				BgL_arg1247z00_255 =
																					PROCEDURE_ENTRY(BgL_ez00_983)
																					(BgL_ez00_983, BgL_xz00_256,
																					BgL_ez00_983, BEOA);
																			}
																			{	/* Expand/case.scm 172 */
																				obj_t BgL_res2025z00_804;

																				BgL_res2025z00_804 =
																					MAKE_YOUNG_PAIR(BgL_arg1247z00_255,
																					BNIL);
																				BgL_newtail1071z00_253 =
																					BgL_res2025z00_804;
																			}
																		}
																		SET_CDR(BgL_tail1070z00_250,
																			BgL_newtail1071z00_253);
																		{	/* Expand/case.scm 172 */
																			obj_t BgL_arg1246z00_254;

																			BgL_arg1246z00_254 =
																				CDR(((obj_t) BgL_l1067z00_249));
																			{
																				obj_t BgL_tail1070z00_1278;
																				obj_t BgL_l1067z00_1277;

																				BgL_l1067z00_1277 = BgL_arg1246z00_254;
																				BgL_tail1070z00_1278 =
																					BgL_newtail1071z00_253;
																				BgL_tail1070z00_250 =
																					BgL_tail1070z00_1278;
																				BgL_l1067z00_249 = BgL_l1067z00_1277;
																				goto
																					BgL_zc3z04anonymousza31244ze3z87_251;
																			}
																		}
																	}
															}
														}
														{	/* Expand/case.scm 172 */
															obj_t BgL_ebodyz00_238;

															BgL_ebodyz00_238 =
																BGl_epairifyzd2reczd2zztools_miscz00
																(BgL_nbodyz00_237, BgL_bodyz00_218);
															{	/* Expand/case.scm 174 */
																obj_t BgL_nclausez00_239;

																BgL_nclausez00_239 =
																	MAKE_YOUNG_PAIR(BgL_datumsz00_217,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_ebodyz00_238, BNIL));
																{	/* Expand/case.scm 175 */

																	{	/* Expand/case.scm 176 */
																		obj_t BgL_arg1227z00_240;
																		obj_t BgL_arg1229z00_241;

																		{	/* Expand/case.scm 176 */
																			obj_t BgL_arg1232z00_242;

																			BgL_arg1232z00_242 =
																				CAR(((obj_t) BgL_clausesz00_209));
																			BgL_arg1227z00_240 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_nclausez00_239,
																				BgL_arg1232z00_242);
																		}
																		{	/* Expand/case.scm 177 */
																			obj_t BgL_arg1239z00_243;

																			BgL_arg1239z00_243 =
																				CDR(((obj_t) BgL_clausesz00_209));
																			BgL_arg1229z00_241 =
																				BGl_loopze72ze7zzexpand_casez00
																				(BgL_elsezd2namezd2_984, BgL_ez00_983,
																				BgL_arg1239z00_243);
																		}
																		return
																			MAKE_YOUNG_PAIR(BgL_arg1227z00_240,
																			BgL_arg1229z00_241);
																	}
																}
															}
														}
													}
											}
									}
								else
									{	/* Expand/case.scm 162 */
										return
											BGl_errorz00zz__errorz00
											(BGl_string2086z00zzexpand_casez00,
											BGl_string2087z00zzexpand_casez00, BgL_clausesz00_209);
									}
							}
					}
				}
		}

	}



/* do-cnst-case */
	obj_t BGl_dozd2cnstzd2casez00zzexpand_casez00(obj_t BgL_valuez00_11,
		obj_t BgL_clausesz00_12, obj_t BgL_ez00_13)
	{
		{	/* Expand/case.scm 191 */
			{	/* Expand/case.scm 192 */
				obj_t BgL_auxz00_292;

				BgL_auxz00_292 =
					BGl_markzd2symbolzd2nonzd2userz12zc0zzast_identz00
					(BGl_gensymz00zz__r4_symbols_6_4z00(CNST_TABLE_REF(((long) 12))));
				{	/* Expand/case.scm 192 */
					obj_t BgL_valuez00_293;

					{	/* Expand/case.scm 193 */
						obj_t BgL_arg1295z00_321;

						{	/* Expand/case.scm 193 */
							obj_t BgL_arg1296z00_322;
							obj_t BgL_arg1297z00_323;

							{	/* Expand/case.scm 193 */
								obj_t BgL_arg1298z00_324;

								{	/* Expand/case.scm 193 */
									obj_t BgL_arg1299z00_325;

									BgL_arg1299z00_325 = MAKE_YOUNG_PAIR(BgL_valuez00_11, BNIL);
									BgL_arg1298z00_324 =
										MAKE_YOUNG_PAIR(BgL_auxz00_292, BgL_arg1299z00_325);
								}
								BgL_arg1296z00_322 = MAKE_YOUNG_PAIR(BgL_arg1298z00_324, BNIL);
							}
							{	/* Expand/case.scm 194 */
								obj_t BgL_arg1300z00_326;

								{	/* Expand/case.scm 194 */
									obj_t BgL_arg1301z00_327;

									{	/* Expand/case.scm 194 */
										obj_t BgL_arg1303z00_328;
										obj_t BgL_arg1304z00_329;

										{	/* Expand/case.scm 194 */
											obj_t BgL_arg1306z00_330;

											BgL_arg1306z00_330 =
												MAKE_YOUNG_PAIR(BgL_auxz00_292, BNIL);
											BgL_arg1303z00_328 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 13)),
												BgL_arg1306z00_330);
										}
										{	/* Expand/case.scm 195 */
											obj_t BgL_arg1307z00_331;
											obj_t BgL_arg1308z00_332;

											{	/* Expand/case.scm 195 */
												obj_t BgL_arg1309z00_333;

												BgL_arg1309z00_333 =
													MAKE_YOUNG_PAIR(BgL_auxz00_292, BNIL);
												BgL_arg1307z00_331 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 14)),
													BgL_arg1309z00_333);
											}
											BgL_arg1308z00_332 =
												MAKE_YOUNG_PAIR(BINT(((long) -1)), BNIL);
											BgL_arg1304z00_329 =
												MAKE_YOUNG_PAIR(BgL_arg1307z00_331, BgL_arg1308z00_332);
										}
										BgL_arg1301z00_327 =
											MAKE_YOUNG_PAIR(BgL_arg1303z00_328, BgL_arg1304z00_329);
									}
									BgL_arg1300z00_326 =
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
										BgL_arg1301z00_327);
								}
								BgL_arg1297z00_323 = MAKE_YOUNG_PAIR(BgL_arg1300z00_326, BNIL);
							}
							BgL_arg1295z00_321 =
								MAKE_YOUNG_PAIR(BgL_arg1296z00_322, BgL_arg1297z00_323);
						}
						BgL_valuez00_293 =
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BgL_arg1295z00_321);
					}
					{	/* Expand/case.scm 193 */

						{
							obj_t BgL_cz00_295;

							BgL_cz00_295 = BgL_clausesz00_12;
						BgL_zc3z04anonymousza31276ze3z87_296:
							if (NULLP(BgL_cz00_295))
								{	/* Expand/case.scm 200 */
									return
										BGl_dozd2typedzd2casez00zzexpand_casez00(CNST_TABLE_REF((
												(long) 1)), BgL_valuez00_293, BgL_clausesz00_12,
										BgL_ez00_13);
								}
							else
								{	/* Expand/case.scm 202 */
									obj_t BgL_clausez00_298;

									BgL_clausez00_298 = CAR(((obj_t) BgL_cz00_295));
									if (
										(CAR(
												((obj_t) BgL_clausez00_298)) ==
											CNST_TABLE_REF(((long) 11))))
										{	/* Expand/case.scm 203 */
											BFALSE;
										}
									else
										{	/* Expand/case.scm 204 */
											obj_t BgL_arg1282z00_301;

											{	/* Expand/case.scm 204 */
												obj_t BgL_l1072z00_302;

												BgL_l1072z00_302 = CAR(((obj_t) BgL_clausez00_298));
												if (NULLP(BgL_l1072z00_302))
													{	/* Expand/case.scm 204 */
														BgL_arg1282z00_301 = BNIL;
													}
												else
													{	/* Expand/case.scm 204 */
														obj_t BgL_head1074z00_304;

														{	/* Expand/case.scm 204 */
															long BgL_arg1289z00_316;

															{	/* Expand/case.scm 204 */
																obj_t BgL_arg1290z00_317;

																BgL_arg1290z00_317 =
																	CAR(((obj_t) BgL_l1072z00_302));
																BgL_arg1289z00_316 = CCNST(BgL_arg1290z00_317);
															}
															{	/* Expand/case.scm 204 */
																obj_t BgL_res2030z00_822;

																BgL_res2030z00_822 =
																	MAKE_YOUNG_PAIR(BINT(BgL_arg1289z00_316),
																	BNIL);
																BgL_head1074z00_304 = BgL_res2030z00_822;
														}}
														{	/* Expand/case.scm 204 */
															obj_t BgL_g1077z00_305;

															BgL_g1077z00_305 =
																CDR(((obj_t) BgL_l1072z00_302));
															{
																obj_t BgL_l1072z00_307;
																obj_t BgL_tail1075z00_308;

																BgL_l1072z00_307 = BgL_g1077z00_305;
																BgL_tail1075z00_308 = BgL_head1074z00_304;
															BgL_zc3z04anonymousza31284ze3z87_309:
																if (NULLP(BgL_l1072z00_307))
																	{	/* Expand/case.scm 204 */
																		BgL_arg1282z00_301 = BgL_head1074z00_304;
																	}
																else
																	{	/* Expand/case.scm 204 */
																		obj_t BgL_newtail1076z00_311;

																		{	/* Expand/case.scm 204 */
																			long BgL_arg1287z00_313;

																			{	/* Expand/case.scm 204 */
																				obj_t BgL_arg1288z00_314;

																				BgL_arg1288z00_314 =
																					CAR(((obj_t) BgL_l1072z00_307));
																				BgL_arg1287z00_313 =
																					CCNST(BgL_arg1288z00_314);
																			}
																			{	/* Expand/case.scm 204 */
																				obj_t BgL_res2032z00_826;

																				BgL_res2032z00_826 =
																					MAKE_YOUNG_PAIR(BINT
																					(BgL_arg1287z00_313), BNIL);
																				BgL_newtail1076z00_311 =
																					BgL_res2032z00_826;
																		}}
																		SET_CDR(BgL_tail1075z00_308,
																			BgL_newtail1076z00_311);
																		{	/* Expand/case.scm 204 */
																			obj_t BgL_arg1286z00_312;

																			BgL_arg1286z00_312 =
																				CDR(((obj_t) BgL_l1072z00_307));
																			{
																				obj_t BgL_tail1075z00_1347;
																				obj_t BgL_l1072z00_1346;

																				BgL_l1072z00_1346 = BgL_arg1286z00_312;
																				BgL_tail1075z00_1347 =
																					BgL_newtail1076z00_311;
																				BgL_tail1075z00_308 =
																					BgL_tail1075z00_1347;
																				BgL_l1072z00_307 = BgL_l1072z00_1346;
																				goto
																					BgL_zc3z04anonymousza31284ze3z87_309;
																			}
																		}
																	}
															}
														}
													}
											}
											{	/* Expand/case.scm 204 */
												obj_t BgL_tmpz00_1348;

												BgL_tmpz00_1348 = ((obj_t) BgL_clausez00_298);
												SET_CAR(BgL_tmpz00_1348, BgL_arg1282z00_301);
											}
										}
									{	/* Expand/case.scm 205 */
										obj_t BgL_arg1292z00_319;

										BgL_arg1292z00_319 = CDR(((obj_t) BgL_cz00_295));
										{
											obj_t BgL_cz00_1353;

											BgL_cz00_1353 = BgL_arg1292z00_319;
											BgL_cz00_295 = BgL_cz00_1353;
											goto BgL_zc3z04anonymousza31276ze3z87_296;
										}
									}
								}
						}
					}
				}
			}
		}

	}



/* do-optim-symbol/keyword-case */
	obj_t BGl_dozd2optimzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t
		BgL_typez00_18, obj_t BgL_valuez00_19, obj_t BgL_clausesz00_20,
		obj_t BgL_ez00_21)
	{
		{	/* Expand/case.scm 219 */
			{
				obj_t BgL_clausesz00_338;

				{	/* Expand/case.scm 234 */
					obj_t BgL_numzd2elszd2_336;

					BgL_clausesz00_338 = BgL_clausesz00_20;
					{
						obj_t BgL_clausesz00_341;
						long BgL_resz00_342;

						BgL_clausesz00_341 = BgL_clausesz00_338;
						BgL_resz00_342 = ((long) 0);
					BgL_zc3z04anonymousza31313ze3z87_343:
						if (NULLP(BgL_clausesz00_341))
							{	/* Expand/case.scm 223 */
								BgL_numzd2elszd2_336 = BINT(BgL_resz00_342);
							}
						else
							{	/* Expand/case.scm 225 */
								obj_t BgL_ezd2437zd2_354;

								BgL_ezd2437zd2_354 = CAR(((obj_t) BgL_clausesz00_341));
								if (NULLP(BgL_ezd2437zd2_354))
									{	/* Expand/case.scm 225 */
										BgL_numzd2elszd2_336 = BINT(BgL_resz00_342);
									}
								else
									{	/* Expand/case.scm 225 */
										if (PAIRP(BgL_ezd2437zd2_354))
											{	/* Expand/case.scm 225 */
												if (
													(CAR(BgL_ezd2437zd2_354) ==
														CNST_TABLE_REF(((long) 11))))
													{	/* Expand/case.scm 225 */
														BgL_numzd2elszd2_336 = BINT(BgL_resz00_342);
													}
												else
													{	/* Expand/case.scm 225 */
														obj_t BgL_carzd2450zd2_360;

														BgL_carzd2450zd2_360 = CAR(BgL_ezd2437zd2_354);
														if (PAIRP(BgL_carzd2450zd2_360))
															{	/* Expand/case.scm 225 */
																bool_t BgL_test2168z00_1372;

																{	/* Expand/case.scm 225 */
																	obj_t BgL_tmpz00_1373;

																	BgL_tmpz00_1373 = CDR(BgL_carzd2450zd2_360);
																	BgL_test2168z00_1372 = PAIRP(BgL_tmpz00_1373);
																}
																if (BgL_test2168z00_1372)
																	{
																		long BgL_resz00_1379;
																		obj_t BgL_clausesz00_1376;

																		BgL_clausesz00_1376 =
																			CDR(((obj_t) BgL_clausesz00_341));
																		BgL_resz00_1379 =
																			(bgl_list_length(BgL_carzd2450zd2_360) +
																			BgL_resz00_342);
																		BgL_resz00_342 = BgL_resz00_1379;
																		BgL_clausesz00_341 = BgL_clausesz00_1376;
																		goto BgL_zc3z04anonymousza31313ze3z87_343;
																	}
																else
																	{	/* Expand/case.scm 225 */
																		if (NULLP(CDR(
																					((obj_t) BgL_carzd2450zd2_360))))
																			{
																				long BgL_resz00_1389;
																				obj_t BgL_clausesz00_1386;

																				BgL_clausesz00_1386 =
																					CDR(((obj_t) BgL_clausesz00_341));
																				BgL_resz00_1389 =
																					(((long) 1) + BgL_resz00_342);
																				BgL_resz00_342 = BgL_resz00_1389;
																				BgL_clausesz00_341 =
																					BgL_clausesz00_1386;
																				goto
																					BgL_zc3z04anonymousza31313ze3z87_343;
																			}
																		else
																			{	/* Expand/case.scm 225 */
																				BgL_numzd2elszd2_336 = BFALSE;
																			}
																	}
															}
														else
															{	/* Expand/case.scm 225 */
																BgL_numzd2elszd2_336 = BFALSE;
															}
													}
											}
										else
											{	/* Expand/case.scm 225 */
												BgL_numzd2elszd2_336 = BFALSE;
											}
									}
							}
					}
					if (((long) CINT(BgL_numzd2elszd2_336) < ((long) 10)))
						{	/* Expand/case.scm 235 */
							return
								BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
								(BgL_valuez00_19, BgL_clausesz00_20, BgL_ez00_21);
						}
					else
						{	/* Expand/case.scm 235 */
							return
								BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00
								(BgL_valuez00_19, BgL_clausesz00_20, BgL_ez00_21);
						}
				}
			}
		}

	}



/* do-generic-symbol/keyword-case */
	obj_t BGl_dozd2genericzd2symbolzf2keywordzd2casez20zzexpand_casez00(obj_t
		BgL_valuez00_22, obj_t BgL_clausesz00_23, obj_t BgL_ez00_24)
	{
		{	/* Expand/case.scm 244 */
			{	/* Expand/case.scm 245 */
				obj_t BgL_arg1351z00_387;

				{	/* Expand/case.scm 245 */
					obj_t BgL_arg1352z00_388;
					obj_t BgL_arg1357z00_389;

					{	/* Expand/case.scm 245 */
						obj_t BgL_arg1360z00_390;

						{	/* Expand/case.scm 245 */
							obj_t BgL_arg1361z00_391;

							{	/* Expand/case.scm 245 */
								obj_t BgL_arg1363z00_392;

								BgL_arg1363z00_392 =
									PROCEDURE_ENTRY(BgL_ez00_24) (BgL_ez00_24, BgL_valuez00_22,
									BgL_ez00_24, BEOA);
								BgL_arg1361z00_391 = MAKE_YOUNG_PAIR(BgL_arg1363z00_392, BNIL);
							}
							BgL_arg1360z00_390 =
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
								BgL_arg1361z00_391);
						}
						BgL_arg1352z00_388 = MAKE_YOUNG_PAIR(BgL_arg1360z00_390, BNIL);
					}
					BgL_arg1357z00_389 =
						MAKE_YOUNG_PAIR(BGl_loopze71ze7zzexpand_casez00(BgL_ez00_24,
							BgL_clausesz00_23), BNIL);
					BgL_arg1351z00_387 =
						MAKE_YOUNG_PAIR(BgL_arg1352z00_388, BgL_arg1357z00_389);
				}
				return MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BgL_arg1351z00_387);
		}}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zzexpand_casez00(obj_t BgL_ez00_982,
		obj_t BgL_clausesz00_395)
	{
		{	/* Expand/case.scm 246 */
			if (NULLP(BgL_clausesz00_395))
				{	/* Expand/case.scm 247 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_bodyz00_399;
					obj_t BgL_datumsz00_401;
					obj_t BgL_bodyz00_402;
					obj_t BgL_datumz00_404;
					obj_t BgL_bodyz00_405;

					{	/* Expand/case.scm 249 */
						obj_t BgL_ezd2493zd2_407;

						BgL_ezd2493zd2_407 = CAR(((obj_t) BgL_clausesz00_395));
						if (NULLP(BgL_ezd2493zd2_407))
							{	/* Expand/case.scm 249 */
								return BUNSPEC;
							}
						else
							{	/* Expand/case.scm 249 */
								if (PAIRP(BgL_ezd2493zd2_407))
									{	/* Expand/case.scm 249 */
										if (
											(CAR(BgL_ezd2493zd2_407) == CNST_TABLE_REF(((long) 11))))
											{	/* Expand/case.scm 249 */
												BgL_bodyz00_399 = CDR(BgL_ezd2493zd2_407);
												if (NULLP(BgL_bodyz00_399))
													{	/* Expand/case.scm 253 */
														return BFALSE;
													}
												else
													{	/* Expand/case.scm 255 */
														obj_t BgL_arg1474z00_434;

														BgL_arg1474z00_434 =
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_bodyz00_399);
														return PROCEDURE_ENTRY(BgL_ez00_982) (BgL_ez00_982,
															BgL_arg1474z00_434, BgL_ez00_982, BEOA);
													}
											}
										else
											{	/* Expand/case.scm 249 */
												obj_t BgL_carzd2509zd2_413;

												BgL_carzd2509zd2_413 = CAR(BgL_ezd2493zd2_407);
												if (PAIRP(BgL_carzd2509zd2_413))
													{	/* Expand/case.scm 249 */
														bool_t BgL_test2177z00_1434;

														{	/* Expand/case.scm 249 */
															obj_t BgL_tmpz00_1435;

															BgL_tmpz00_1435 = CDR(BgL_carzd2509zd2_413);
															BgL_test2177z00_1434 = PAIRP(BgL_tmpz00_1435);
														}
														if (BgL_test2177z00_1434)
															{	/* Expand/case.scm 249 */
																BgL_datumsz00_401 = BgL_carzd2509zd2_413;
																BgL_bodyz00_402 = CDR(BgL_ezd2493zd2_407);
																if (NULLP(BgL_bodyz00_402))
																	{	/* Expand/case.scm 259 */
																		obj_t BgL_arg1476z00_436;

																		BgL_arg1476z00_436 =
																			CAR(((obj_t) BgL_clausesz00_395));
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2086z00zzexpand_casez00,
																			BGl_string2089z00zzexpand_casez00,
																			BgL_arg1476z00_436);
																	}
																else
																	{	/* Expand/case.scm 258 */
																		if (
																			(bgl_list_length(BgL_datumsz00_401) <
																				((long) 10)))
																			{	/* Expand/case.scm 261 */
																				obj_t BgL_arg1489z00_439;

																				{	/* Expand/case.scm 261 */
																					obj_t BgL_arg1493z00_440;
																					obj_t BgL_arg1495z00_441;

																					{	/* Expand/case.scm 261 */
																						obj_t BgL_arg1497z00_442;

																						{	/* Expand/case.scm 261 */
																							obj_t BgL_arg1518z00_443;

																							{	/* Expand/case.scm 261 */
																								obj_t BgL_arg1521z00_444;

																								{	/* Expand/case.scm 261 */
																									obj_t BgL_head1080z00_447;

																									{	/* Expand/case.scm 261 */
																										obj_t BgL_res2052z00_891;

																										BgL_res2052z00_891 =
																											MAKE_YOUNG_PAIR(BNIL,
																											BNIL);
																										BgL_head1080z00_447 =
																											BgL_res2052z00_891;
																									}
																									{
																										obj_t BgL_l1078z00_449;
																										obj_t BgL_tail1081z00_450;

																										BgL_l1078z00_449 =
																											BgL_datumsz00_401;
																										BgL_tail1081z00_450 =
																											BgL_head1080z00_447;
																									BgL_zc3z04anonymousza31523ze3z87_451:
																										if (NULLP
																											(BgL_l1078z00_449))
																											{	/* Expand/case.scm 261 */
																												BgL_arg1521z00_444 =
																													CDR
																													(BgL_head1080z00_447);
																											}
																										else
																											{	/* Expand/case.scm 261 */
																												obj_t
																													BgL_newtail1082z00_453;
																												{	/* Expand/case.scm 261 */
																													obj_t
																														BgL_arg1536z00_455;
																													{	/* Expand/case.scm 261 */
																														obj_t BgL_dz00_456;

																														BgL_dz00_456 =
																															CAR(
																															((obj_t)
																																BgL_l1078z00_449));
																														{	/* Expand/case.scm 261 */
																															obj_t
																																BgL_arg1537z00_457;
																															{	/* Expand/case.scm 261 */
																																obj_t
																																	BgL_arg1540z00_458;
																																{	/* Expand/case.scm 261 */
																																	obj_t
																																		BgL_arg1552z00_459;
																																	{	/* Expand/case.scm 261 */
																																		obj_t
																																			BgL_arg1553z00_460;
																																		BgL_arg1553z00_460
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_dz00_456,
																																			BNIL);
																																		BgL_arg1552z00_459
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					18)),
																																			BgL_arg1553z00_460);
																																	}
																																	BgL_arg1540z00_458
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1552z00_459,
																																		BNIL);
																																}
																																BgL_arg1537z00_457
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 17)),
																																	BgL_arg1540z00_458);
																															}
																															BgL_arg1536z00_455
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 20)),
																																BgL_arg1537z00_457);
																													}}
																													{	/* Expand/case.scm 261 */
																														obj_t
																															BgL_res2054z00_895;
																														BgL_res2054z00_895 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1536z00_455,
																															BNIL);
																														BgL_newtail1082z00_453
																															=
																															BgL_res2054z00_895;
																												}}
																												SET_CDR
																													(BgL_tail1081z00_450,
																													BgL_newtail1082z00_453);
																												{	/* Expand/case.scm 261 */
																													obj_t
																														BgL_arg1528z00_454;
																													BgL_arg1528z00_454 =
																														CDR(((obj_t)
																															BgL_l1078z00_449));
																													{
																														obj_t
																															BgL_tail1081z00_1465;
																														obj_t
																															BgL_l1078z00_1464;
																														BgL_l1078z00_1464 =
																															BgL_arg1528z00_454;
																														BgL_tail1081z00_1465
																															=
																															BgL_newtail1082z00_453;
																														BgL_tail1081z00_450
																															=
																															BgL_tail1081z00_1465;
																														BgL_l1078z00_449 =
																															BgL_l1078z00_1464;
																														goto
																															BgL_zc3z04anonymousza31523ze3z87_451;
																													}
																												}
																											}
																									}
																								}
																								BgL_arg1518z00_443 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1521z00_444, BNIL);
																							}
																							BgL_arg1497z00_442 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 21)),
																								BgL_arg1518z00_443);
																						}
																						BgL_arg1493z00_440 =
																							PROCEDURE_ENTRY(BgL_ez00_982)
																							(BgL_ez00_982, BgL_arg1497z00_442,
																							BgL_ez00_982, BEOA);
																					}
																					{	/* Expand/case.scm 262 */
																						obj_t BgL_arg1558z00_462;
																						obj_t BgL_arg1561z00_463;

																						{	/* Expand/case.scm 262 */
																							obj_t BgL_arg1564z00_464;

																							BgL_arg1564z00_464 =
																								BGl_expandzd2prognzd2zz__prognz00
																								(BgL_bodyz00_402);
																							BgL_arg1558z00_462 =
																								PROCEDURE_ENTRY(BgL_ez00_982)
																								(BgL_ez00_982,
																								BgL_arg1564z00_464,
																								BgL_ez00_982, BEOA);
																						}
																						{	/* Expand/case.scm 263 */
																							obj_t BgL_arg1565z00_465;

																							{	/* Expand/case.scm 263 */
																								obj_t BgL_arg1573z00_466;

																								BgL_arg1573z00_466 =
																									CDR(
																									((obj_t) BgL_clausesz00_395));
																								BgL_arg1565z00_465 =
																									BGl_loopze71ze7zzexpand_casez00
																									(BgL_ez00_982,
																									BgL_arg1573z00_466);
																							}
																							BgL_arg1561z00_463 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1565z00_465, BNIL);
																						}
																						BgL_arg1495z00_441 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1558z00_462,
																							BgL_arg1561z00_463);
																					}
																					BgL_arg1489z00_439 =
																						MAKE_YOUNG_PAIR(BgL_arg1493z00_440,
																						BgL_arg1495z00_441);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1489z00_439);
																			}
																		else
																			{	/* Expand/case.scm 265 */
																				obj_t BgL_arg1575z00_467;

																				{	/* Expand/case.scm 265 */
																					obj_t BgL_arg1578z00_468;
																					obj_t BgL_arg1582z00_469;

																					{	/* Expand/case.scm 265 */
																						obj_t BgL_arg1584z00_470;

																						{	/* Expand/case.scm 265 */
																							obj_t BgL_arg1588z00_471;

																							{	/* Expand/case.scm 265 */
																								obj_t BgL_arg1589z00_472;

																								{	/* Expand/case.scm 265 */
																									obj_t BgL_arg1592z00_473;

																									{	/* Expand/case.scm 265 */
																										obj_t BgL_arg1593z00_474;

																										BgL_arg1593z00_474 =
																											MAKE_YOUNG_PAIR
																											(BgL_datumsz00_401, BNIL);
																										BgL_arg1592z00_473 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													18)),
																											BgL_arg1593z00_474);
																									}
																									BgL_arg1589z00_472 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1592z00_473, BNIL);
																								}
																								BgL_arg1588z00_471 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 17)),
																									BgL_arg1589z00_472);
																							}
																							BgL_arg1584z00_470 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 22)),
																								BgL_arg1588z00_471);
																						}
																						BgL_arg1578z00_468 =
																							PROCEDURE_ENTRY(BgL_ez00_982)
																							(BgL_ez00_982, BgL_arg1584z00_470,
																							BgL_ez00_982, BEOA);
																					}
																					{	/* Expand/case.scm 266 */
																						obj_t BgL_arg1597z00_475;
																						obj_t BgL_arg1599z00_476;

																						{	/* Expand/case.scm 266 */
																							obj_t BgL_arg1604z00_477;

																							BgL_arg1604z00_477 =
																								BGl_expandzd2prognzd2zz__prognz00
																								(BgL_bodyz00_402);
																							BgL_arg1597z00_475 =
																								PROCEDURE_ENTRY(BgL_ez00_982)
																								(BgL_ez00_982,
																								BgL_arg1604z00_477,
																								BgL_ez00_982, BEOA);
																						}
																						{	/* Expand/case.scm 267 */
																							obj_t BgL_arg1605z00_478;

																							{	/* Expand/case.scm 267 */
																								obj_t BgL_arg1606z00_479;

																								BgL_arg1606z00_479 =
																									CDR(
																									((obj_t) BgL_clausesz00_395));
																								BgL_arg1605z00_478 =
																									BGl_loopze71ze7zzexpand_casez00
																									(BgL_ez00_982,
																									BgL_arg1606z00_479);
																							}
																							BgL_arg1599z00_476 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1605z00_478, BNIL);
																						}
																						BgL_arg1582z00_469 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1597z00_475,
																							BgL_arg1599z00_476);
																					}
																					BgL_arg1575z00_467 =
																						MAKE_YOUNG_PAIR(BgL_arg1578z00_468,
																						BgL_arg1582z00_469);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1575z00_467);
															}}}
														else
															{	/* Expand/case.scm 249 */
																if (NULLP(CDR(((obj_t) BgL_carzd2509zd2_413))))
																	{	/* Expand/case.scm 249 */
																		obj_t BgL_arg1421z00_421;
																		obj_t BgL_arg1422z00_422;

																		BgL_arg1421z00_421 =
																			CAR(((obj_t) BgL_carzd2509zd2_413));
																		BgL_arg1422z00_422 =
																			CDR(BgL_ezd2493zd2_407);
																		BgL_datumz00_404 = BgL_arg1421z00_421;
																		BgL_bodyz00_405 = BgL_arg1422z00_422;
																		if (NULLP(BgL_bodyz00_405))
																			{	/* Expand/case.scm 270 */
																				obj_t BgL_arg1613z00_482;

																				BgL_arg1613z00_482 =
																					CAR(((obj_t) BgL_clausesz00_395));
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2086z00zzexpand_casez00,
																					BGl_string2089z00zzexpand_casez00,
																					BgL_arg1613z00_482);
																			}
																		else
																			{	/* Expand/case.scm 271 */
																				obj_t BgL_arg1624z00_483;

																				{	/* Expand/case.scm 271 */
																					obj_t BgL_arg1626z00_484;
																					obj_t BgL_arg1627z00_485;

																					{	/* Expand/case.scm 271 */
																						obj_t BgL_arg1631z00_486;

																						{	/* Expand/case.scm 271 */
																							obj_t BgL_arg1634z00_487;

																							{	/* Expand/case.scm 271 */
																								obj_t BgL_arg1639z00_488;

																								{	/* Expand/case.scm 271 */
																									obj_t BgL_arg1640z00_489;

																									{	/* Expand/case.scm 271 */
																										obj_t BgL_arg1641z00_490;

																										BgL_arg1641z00_490 =
																											MAKE_YOUNG_PAIR
																											(BgL_datumz00_404, BNIL);
																										BgL_arg1640z00_489 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													18)),
																											BgL_arg1641z00_490);
																									}
																									BgL_arg1639z00_488 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1640z00_489, BNIL);
																								}
																								BgL_arg1634z00_487 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 17)),
																									BgL_arg1639z00_488);
																							}
																							BgL_arg1631z00_486 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 19)),
																								BgL_arg1634z00_487);
																						}
																						BgL_arg1626z00_484 =
																							PROCEDURE_ENTRY(BgL_ez00_982)
																							(BgL_ez00_982, BgL_arg1631z00_486,
																							BgL_ez00_982, BEOA);
																					}
																					{	/* Expand/case.scm 272 */
																						obj_t BgL_arg1644z00_491;
																						obj_t BgL_arg1652z00_492;

																						{	/* Expand/case.scm 272 */
																							obj_t BgL_arg1662z00_493;

																							BgL_arg1662z00_493 =
																								BGl_expandzd2prognzd2zz__prognz00
																								(BgL_bodyz00_405);
																							BgL_arg1644z00_491 =
																								PROCEDURE_ENTRY(BgL_ez00_982)
																								(BgL_ez00_982,
																								BgL_arg1662z00_493,
																								BgL_ez00_982, BEOA);
																						}
																						{	/* Expand/case.scm 273 */
																							obj_t BgL_arg1663z00_494;

																							{	/* Expand/case.scm 273 */
																								obj_t BgL_arg1664z00_495;

																								BgL_arg1664z00_495 =
																									CDR(
																									((obj_t) BgL_clausesz00_395));
																								BgL_arg1663z00_494 =
																									BGl_loopze71ze7zzexpand_casez00
																									(BgL_ez00_982,
																									BgL_arg1664z00_495);
																							}
																							BgL_arg1652z00_492 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1663z00_494, BNIL);
																						}
																						BgL_arg1627z00_485 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1644z00_491,
																							BgL_arg1652z00_492);
																					}
																					BgL_arg1624z00_483 =
																						MAKE_YOUNG_PAIR(BgL_arg1626z00_484,
																						BgL_arg1627z00_485);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1624z00_483);
																	}}
																else
																	{	/* Expand/case.scm 249 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Expand/case.scm 249 */
														return BFALSE;
													}
											}
									}
								else
									{	/* Expand/case.scm 249 */
										return BFALSE;
									}
							}
					}
				}
		}

	}



/* type-test */
	obj_t BGl_typezd2testzd2zzexpand_casez00(obj_t BgL_auxz00_25,
		obj_t BgL_typez00_26, obj_t BgL_valuez00_27, obj_t BgL_casezd2formzd2_28,
		obj_t BgL_elsezd2bodyzd2_29, obj_t BgL_elsezd2namezd2_30, obj_t BgL_ez00_31)
	{
		{	/* Expand/case.scm 278 */
			if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 4))))
				{	/* Expand/case.scm 281 */
					obj_t BgL_arg1667z00_499;

					{	/* Expand/case.scm 281 */
						obj_t BgL_arg1669z00_500;
						obj_t BgL_arg1672z00_501;

						{	/* Expand/case.scm 281 */
							obj_t BgL_arg1684z00_502;

							{	/* Expand/case.scm 281 */
								obj_t BgL_arg1685z00_503;

								BgL_arg1685z00_503 =
									MAKE_YOUNG_PAIR(BNIL,
									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
									(BgL_elsezd2bodyzd2_29, BNIL));
								BgL_arg1684z00_502 =
									MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30, BgL_arg1685z00_503);
							}
							BgL_arg1669z00_500 = MAKE_YOUNG_PAIR(BgL_arg1684z00_502, BNIL);
						}
						{	/* Expand/case.scm 282 */
							obj_t BgL_arg1687z00_505;

							{	/* Expand/case.scm 282 */
								obj_t BgL_arg1688z00_506;

								{	/* Expand/case.scm 282 */
									obj_t BgL_arg1692z00_507;
									obj_t BgL_arg1695z00_508;

									{	/* Expand/case.scm 282 */
										obj_t BgL_arg1696z00_509;

										{	/* Expand/case.scm 282 */
											obj_t BgL_arg1697z00_510;

											{	/* Expand/case.scm 282 */
												obj_t BgL_arg1698z00_511;

												BgL_arg1698z00_511 =
													PROCEDURE_ENTRY(BgL_ez00_31) (BgL_ez00_31,
													BgL_valuez00_27, BgL_ez00_31, BEOA);
												BgL_arg1697z00_510 =
													MAKE_YOUNG_PAIR(BgL_arg1698z00_511, BNIL);
											}
											BgL_arg1696z00_509 =
												MAKE_YOUNG_PAIR(BgL_auxz00_25, BgL_arg1697z00_510);
										}
										BgL_arg1692z00_507 =
											MAKE_YOUNG_PAIR(BgL_arg1696z00_509, BNIL);
									}
									{	/* Expand/case.scm 283 */
										obj_t BgL_arg1704z00_512;

										{	/* Expand/case.scm 283 */
											obj_t BgL_arg1707z00_513;

											{	/* Expand/case.scm 283 */
												obj_t BgL_arg1708z00_514;
												obj_t BgL_arg1711z00_515;

												{	/* Expand/case.scm 283 */
													obj_t BgL_arg1712z00_516;

													BgL_arg1712z00_516 =
														MAKE_YOUNG_PAIR(BgL_auxz00_25, BNIL);
													BgL_arg1708z00_514 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 23)),
														BgL_arg1712z00_516);
												}
												{	/* Expand/case.scm 285 */
													obj_t BgL_arg1719z00_517;

													{	/* Expand/case.scm 285 */
														obj_t BgL_arg1725z00_518;

														BgL_arg1725z00_518 =
															MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30, BNIL);
														BgL_arg1719z00_517 =
															MAKE_YOUNG_PAIR(BgL_arg1725z00_518, BNIL);
													}
													BgL_arg1711z00_515 =
														MAKE_YOUNG_PAIR(BgL_casezd2formzd2_28,
														BgL_arg1719z00_517);
												}
												BgL_arg1707z00_513 =
													MAKE_YOUNG_PAIR(BgL_arg1708z00_514,
													BgL_arg1711z00_515);
											}
											BgL_arg1704z00_512 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
												BgL_arg1707z00_513);
										}
										BgL_arg1695z00_508 =
											MAKE_YOUNG_PAIR(BgL_arg1704z00_512, BNIL);
									}
									BgL_arg1688z00_506 =
										MAKE_YOUNG_PAIR(BgL_arg1692z00_507, BgL_arg1695z00_508);
								}
								BgL_arg1687z00_505 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
									BgL_arg1688z00_506);
							}
							BgL_arg1672z00_501 = MAKE_YOUNG_PAIR(BgL_arg1687z00_505, BNIL);
						}
						BgL_arg1667z00_499 =
							MAKE_YOUNG_PAIR(BgL_arg1669z00_500, BgL_arg1672z00_501);
					}
					return
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)), BgL_arg1667z00_499);
				}
			else
				{	/* Expand/case.scm 280 */
					if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 1))))
						{	/* Expand/case.scm 287 */
							obj_t BgL_arg1727z00_520;

							{	/* Expand/case.scm 287 */
								obj_t BgL_arg1728z00_521;
								obj_t BgL_arg1729z00_522;

								{	/* Expand/case.scm 287 */
									obj_t BgL_arg1731z00_523;

									{	/* Expand/case.scm 287 */
										obj_t BgL_arg1732z00_524;

										BgL_arg1732z00_524 =
											MAKE_YOUNG_PAIR(BNIL,
											BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
											(BgL_elsezd2bodyzd2_29, BNIL));
										BgL_arg1731z00_523 =
											MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
											BgL_arg1732z00_524);
									}
									BgL_arg1728z00_521 =
										MAKE_YOUNG_PAIR(BgL_arg1731z00_523, BNIL);
								}
								{	/* Expand/case.scm 288 */
									obj_t BgL_arg1738z00_526;

									{	/* Expand/case.scm 288 */
										obj_t BgL_arg1739z00_527;

										{	/* Expand/case.scm 288 */
											obj_t BgL_arg1740z00_528;
											obj_t BgL_arg1741z00_529;

											{	/* Expand/case.scm 288 */
												obj_t BgL_arg1742z00_530;

												{	/* Expand/case.scm 288 */
													obj_t BgL_arg1743z00_531;

													{	/* Expand/case.scm 288 */
														obj_t BgL_arg1744z00_532;

														BgL_arg1744z00_532 =
															PROCEDURE_ENTRY(BgL_ez00_31) (BgL_ez00_31,
															BgL_valuez00_27, BgL_ez00_31, BEOA);
														BgL_arg1743z00_531 =
															MAKE_YOUNG_PAIR(BgL_arg1744z00_532, BNIL);
													}
													BgL_arg1742z00_530 =
														MAKE_YOUNG_PAIR(BgL_auxz00_25, BgL_arg1743z00_531);
												}
												BgL_arg1740z00_528 =
													MAKE_YOUNG_PAIR(BgL_arg1742z00_530, BNIL);
											}
											{	/* Expand/case.scm 289 */
												obj_t BgL_arg1745z00_533;

												{	/* Expand/case.scm 289 */
													obj_t BgL_arg1746z00_534;

													{	/* Expand/case.scm 289 */
														obj_t BgL_arg1747z00_535;
														obj_t BgL_arg1754z00_536;

														{	/* Expand/case.scm 289 */
															obj_t BgL_arg1755z00_537;

															BgL_arg1755z00_537 =
																MAKE_YOUNG_PAIR(BgL_auxz00_25, BNIL);
															BgL_arg1747z00_535 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 25)),
																BgL_arg1755z00_537);
														}
														{	/* Expand/case.scm 291 */
															obj_t BgL_arg1756z00_538;

															{	/* Expand/case.scm 291 */
																obj_t BgL_arg1757z00_539;

																BgL_arg1757z00_539 =
																	MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30, BNIL);
																BgL_arg1756z00_538 =
																	MAKE_YOUNG_PAIR(BgL_arg1757z00_539, BNIL);
															}
															BgL_arg1754z00_536 =
																MAKE_YOUNG_PAIR(BgL_casezd2formzd2_28,
																BgL_arg1756z00_538);
														}
														BgL_arg1746z00_534 =
															MAKE_YOUNG_PAIR(BgL_arg1747z00_535,
															BgL_arg1754z00_536);
													}
													BgL_arg1745z00_533 =
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
														BgL_arg1746z00_534);
												}
												BgL_arg1741z00_529 =
													MAKE_YOUNG_PAIR(BgL_arg1745z00_533, BNIL);
											}
											BgL_arg1739z00_527 =
												MAKE_YOUNG_PAIR(BgL_arg1740z00_528, BgL_arg1741z00_529);
										}
										BgL_arg1738z00_526 =
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
											BgL_arg1739z00_527);
									}
									BgL_arg1729z00_522 =
										MAKE_YOUNG_PAIR(BgL_arg1738z00_526, BNIL);
								}
								BgL_arg1727z00_520 =
									MAKE_YOUNG_PAIR(BgL_arg1728z00_521, BgL_arg1729z00_522);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
								BgL_arg1727z00_520);
						}
					else
						{	/* Expand/case.scm 280 */
							if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 2))))
								{	/* Expand/case.scm 293 */
									obj_t BgL_arg1759z00_541;

									{	/* Expand/case.scm 293 */
										obj_t BgL_arg1760z00_542;
										obj_t BgL_arg1761z00_543;

										{	/* Expand/case.scm 293 */
											obj_t BgL_arg1768z00_544;

											{	/* Expand/case.scm 293 */
												obj_t BgL_arg1771z00_545;

												BgL_arg1771z00_545 =
													MAKE_YOUNG_PAIR(BNIL,
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_elsezd2bodyzd2_29, BNIL));
												BgL_arg1768z00_544 =
													MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
													BgL_arg1771z00_545);
											}
											BgL_arg1760z00_542 =
												MAKE_YOUNG_PAIR(BgL_arg1768z00_544, BNIL);
										}
										{	/* Expand/case.scm 294 */
											obj_t BgL_arg1778z00_547;

											{	/* Expand/case.scm 294 */
												obj_t BgL_arg1779z00_548;

												{	/* Expand/case.scm 294 */
													obj_t BgL_arg1782z00_549;
													obj_t BgL_arg1784z00_550;

													{	/* Expand/case.scm 294 */
														obj_t BgL_arg1790z00_551;

														{	/* Expand/case.scm 294 */
															obj_t BgL_arg1796z00_552;

															{	/* Expand/case.scm 294 */
																obj_t BgL_arg1798z00_553;

																BgL_arg1798z00_553 =
																	PROCEDURE_ENTRY(BgL_ez00_31) (BgL_ez00_31,
																	BgL_valuez00_27, BgL_ez00_31, BEOA);
																BgL_arg1796z00_552 =
																	MAKE_YOUNG_PAIR(BgL_arg1798z00_553, BNIL);
															}
															BgL_arg1790z00_551 =
																MAKE_YOUNG_PAIR(BgL_auxz00_25,
																BgL_arg1796z00_552);
														}
														BgL_arg1782z00_549 =
															MAKE_YOUNG_PAIR(BgL_arg1790z00_551, BNIL);
													}
													{	/* Expand/case.scm 295 */
														obj_t BgL_arg1801z00_554;

														{	/* Expand/case.scm 295 */
															obj_t BgL_arg1808z00_555;

															{	/* Expand/case.scm 295 */
																obj_t BgL_arg1809z00_556;
																obj_t BgL_arg1811z00_557;

																{	/* Expand/case.scm 295 */
																	obj_t BgL_arg1820z00_558;

																	BgL_arg1820z00_558 =
																		MAKE_YOUNG_PAIR(BgL_auxz00_25, BNIL);
																	BgL_arg1809z00_556 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 26)),
																		BgL_arg1820z00_558);
																}
																{	/* Expand/case.scm 297 */
																	obj_t BgL_arg1821z00_559;

																	{	/* Expand/case.scm 297 */
																		obj_t BgL_arg1822z00_560;

																		BgL_arg1822z00_560 =
																			MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
																			BNIL);
																		BgL_arg1821z00_559 =
																			MAKE_YOUNG_PAIR(BgL_arg1822z00_560, BNIL);
																	}
																	BgL_arg1811z00_557 =
																		MAKE_YOUNG_PAIR(BgL_casezd2formzd2_28,
																		BgL_arg1821z00_559);
																}
																BgL_arg1808z00_555 =
																	MAKE_YOUNG_PAIR(BgL_arg1809z00_556,
																	BgL_arg1811z00_557);
															}
															BgL_arg1801z00_554 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																BgL_arg1808z00_555);
														}
														BgL_arg1784z00_550 =
															MAKE_YOUNG_PAIR(BgL_arg1801z00_554, BNIL);
													}
													BgL_arg1779z00_548 =
														MAKE_YOUNG_PAIR(BgL_arg1782z00_549,
														BgL_arg1784z00_550);
												}
												BgL_arg1778z00_547 =
													MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
													BgL_arg1779z00_548);
											}
											BgL_arg1761z00_543 =
												MAKE_YOUNG_PAIR(BgL_arg1778z00_547, BNIL);
										}
										BgL_arg1759z00_541 =
											MAKE_YOUNG_PAIR(BgL_arg1760z00_542, BgL_arg1761z00_543);
									}
									return
										MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
										BgL_arg1759z00_541);
								}
							else
								{	/* Expand/case.scm 280 */
									if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 3))))
										{	/* Expand/case.scm 299 */
											obj_t BgL_arg1824z00_562;

											{	/* Expand/case.scm 299 */
												obj_t BgL_arg1825z00_563;
												obj_t BgL_arg1826z00_564;

												{	/* Expand/case.scm 299 */
													obj_t BgL_arg1827z00_565;

													{	/* Expand/case.scm 299 */
														obj_t BgL_arg1828z00_566;

														BgL_arg1828z00_566 =
															MAKE_YOUNG_PAIR(BNIL,
															BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
															(BgL_elsezd2bodyzd2_29, BNIL));
														BgL_arg1827z00_565 =
															MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
															BgL_arg1828z00_566);
													}
													BgL_arg1825z00_563 =
														MAKE_YOUNG_PAIR(BgL_arg1827z00_565, BNIL);
												}
												{	/* Expand/case.scm 300 */
													obj_t BgL_arg1830z00_568;

													{	/* Expand/case.scm 300 */
														obj_t BgL_arg1831z00_569;

														{	/* Expand/case.scm 300 */
															obj_t BgL_arg1832z00_570;
															obj_t BgL_arg1833z00_571;

															{	/* Expand/case.scm 300 */
																obj_t BgL_arg1835z00_572;

																{	/* Expand/case.scm 300 */
																	obj_t BgL_arg1836z00_573;

																	{	/* Expand/case.scm 300 */
																		obj_t BgL_arg1838z00_574;

																		BgL_arg1838z00_574 =
																			PROCEDURE_ENTRY(BgL_ez00_31) (BgL_ez00_31,
																			BgL_valuez00_27, BgL_ez00_31, BEOA);
																		BgL_arg1836z00_573 =
																			MAKE_YOUNG_PAIR(BgL_arg1838z00_574, BNIL);
																	}
																	BgL_arg1835z00_572 =
																		MAKE_YOUNG_PAIR(BgL_auxz00_25,
																		BgL_arg1836z00_573);
																}
																BgL_arg1832z00_570 =
																	MAKE_YOUNG_PAIR(BgL_arg1835z00_572, BNIL);
															}
															{	/* Expand/case.scm 301 */
																obj_t BgL_arg1840z00_575;

																{	/* Expand/case.scm 301 */
																	obj_t BgL_arg1841z00_576;

																	{	/* Expand/case.scm 301 */
																		obj_t BgL_arg1842z00_577;
																		obj_t BgL_arg1845z00_578;

																		{	/* Expand/case.scm 301 */
																			obj_t BgL_arg1846z00_579;

																			BgL_arg1846z00_579 =
																				MAKE_YOUNG_PAIR(BgL_auxz00_25, BNIL);
																			BgL_arg1842z00_577 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						27)), BgL_arg1846z00_579);
																		}
																		{	/* Expand/case.scm 303 */
																			obj_t BgL_arg1847z00_580;

																			{	/* Expand/case.scm 303 */
																				obj_t BgL_arg1848z00_581;

																				BgL_arg1848z00_581 =
																					MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
																					BNIL);
																				BgL_arg1847z00_580 =
																					MAKE_YOUNG_PAIR(BgL_arg1848z00_581,
																					BNIL);
																			}
																			BgL_arg1845z00_578 =
																				MAKE_YOUNG_PAIR(BgL_casezd2formzd2_28,
																				BgL_arg1847z00_580);
																		}
																		BgL_arg1841z00_576 =
																			MAKE_YOUNG_PAIR(BgL_arg1842z00_577,
																			BgL_arg1845z00_578);
																	}
																	BgL_arg1840z00_575 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 15)),
																		BgL_arg1841z00_576);
																}
																BgL_arg1833z00_571 =
																	MAKE_YOUNG_PAIR(BgL_arg1840z00_575, BNIL);
															}
															BgL_arg1831z00_569 =
																MAKE_YOUNG_PAIR(BgL_arg1832z00_570,
																BgL_arg1833z00_571);
														}
														BgL_arg1830z00_568 =
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
															BgL_arg1831z00_569);
													}
													BgL_arg1826z00_564 =
														MAKE_YOUNG_PAIR(BgL_arg1830z00_568, BNIL);
												}
												BgL_arg1824z00_562 =
													MAKE_YOUNG_PAIR(BgL_arg1825z00_563,
													BgL_arg1826z00_564);
											}
											return
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
												BgL_arg1824z00_562);
										}
									else
										{	/* Expand/case.scm 280 */
											if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 6))))
												{	/* Expand/case.scm 305 */
													obj_t BgL_arg1850z00_583;

													{	/* Expand/case.scm 305 */
														obj_t BgL_arg1851z00_584;
														obj_t BgL_arg1852z00_585;

														{	/* Expand/case.scm 305 */
															obj_t BgL_arg1853z00_586;

															{	/* Expand/case.scm 305 */
																obj_t BgL_arg1855z00_587;

																BgL_arg1855z00_587 =
																	MAKE_YOUNG_PAIR(BNIL,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_elsezd2bodyzd2_29, BNIL));
																BgL_arg1853z00_586 =
																	MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
																	BgL_arg1855z00_587);
															}
															BgL_arg1851z00_584 =
																MAKE_YOUNG_PAIR(BgL_arg1853z00_586, BNIL);
														}
														{	/* Expand/case.scm 306 */
															obj_t BgL_arg1857z00_589;

															{	/* Expand/case.scm 306 */
																obj_t BgL_arg1858z00_590;

																{	/* Expand/case.scm 306 */
																	obj_t BgL_arg1859z00_591;
																	obj_t BgL_arg1861z00_592;

																	{	/* Expand/case.scm 306 */
																		obj_t BgL_arg1862z00_593;

																		{	/* Expand/case.scm 306 */
																			obj_t BgL_arg1863z00_594;

																			{	/* Expand/case.scm 306 */
																				obj_t BgL_arg1865z00_595;

																				BgL_arg1865z00_595 =
																					PROCEDURE_ENTRY(BgL_ez00_31)
																					(BgL_ez00_31, BgL_valuez00_27,
																					BgL_ez00_31, BEOA);
																				BgL_arg1863z00_594 =
																					MAKE_YOUNG_PAIR(BgL_arg1865z00_595,
																					BNIL);
																			}
																			BgL_arg1862z00_593 =
																				MAKE_YOUNG_PAIR(BgL_auxz00_25,
																				BgL_arg1863z00_594);
																		}
																		BgL_arg1859z00_591 =
																			MAKE_YOUNG_PAIR(BgL_arg1862z00_593, BNIL);
																	}
																	{	/* Expand/case.scm 307 */
																		obj_t BgL_arg1866z00_596;

																		{	/* Expand/case.scm 307 */
																			obj_t BgL_arg1868z00_597;

																			{	/* Expand/case.scm 307 */
																				obj_t BgL_arg1870z00_598;
																				obj_t BgL_arg1871z00_599;

																				{	/* Expand/case.scm 307 */
																					obj_t BgL_arg1872z00_600;

																					BgL_arg1872z00_600 =
																						MAKE_YOUNG_PAIR(BgL_auxz00_25,
																						BNIL);
																					BgL_arg1870z00_598 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 28)),
																						BgL_arg1872z00_600);
																				}
																				{	/* Expand/case.scm 309 */
																					obj_t BgL_arg1873z00_601;

																					{	/* Expand/case.scm 309 */
																						obj_t BgL_arg1874z00_602;

																						BgL_arg1874z00_602 =
																							MAKE_YOUNG_PAIR
																							(BgL_elsezd2namezd2_30, BNIL);
																						BgL_arg1873z00_601 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1874z00_602, BNIL);
																					}
																					BgL_arg1871z00_599 =
																						MAKE_YOUNG_PAIR
																						(BgL_casezd2formzd2_28,
																						BgL_arg1873z00_601);
																				}
																				BgL_arg1868z00_597 =
																					MAKE_YOUNG_PAIR(BgL_arg1870z00_598,
																					BgL_arg1871z00_599);
																			}
																			BgL_arg1866z00_596 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						15)), BgL_arg1868z00_597);
																		}
																		BgL_arg1861z00_592 =
																			MAKE_YOUNG_PAIR(BgL_arg1866z00_596, BNIL);
																	}
																	BgL_arg1858z00_590 =
																		MAKE_YOUNG_PAIR(BgL_arg1859z00_591,
																		BgL_arg1861z00_592);
																}
																BgL_arg1857z00_589 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)),
																	BgL_arg1858z00_590);
															}
															BgL_arg1852z00_585 =
																MAKE_YOUNG_PAIR(BgL_arg1857z00_589, BNIL);
														}
														BgL_arg1850z00_583 =
															MAKE_YOUNG_PAIR(BgL_arg1851z00_584,
															BgL_arg1852z00_585);
													}
													return
														MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
														BgL_arg1850z00_583);
												}
											else
												{	/* Expand/case.scm 280 */
													if ((BgL_typez00_26 == CNST_TABLE_REF(((long) 7))))
														{	/* Expand/case.scm 311 */
															obj_t BgL_arg1876z00_604;

															{	/* Expand/case.scm 311 */
																obj_t BgL_arg1877z00_605;
																obj_t BgL_arg1878z00_606;

																{	/* Expand/case.scm 311 */
																	obj_t BgL_arg1879z00_607;

																	{	/* Expand/case.scm 311 */
																		obj_t BgL_arg1881z00_608;

																		BgL_arg1881z00_608 =
																			MAKE_YOUNG_PAIR(BNIL,
																			BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																			(BgL_elsezd2bodyzd2_29, BNIL));
																		BgL_arg1879z00_607 =
																			MAKE_YOUNG_PAIR(BgL_elsezd2namezd2_30,
																			BgL_arg1881z00_608);
																	}
																	BgL_arg1877z00_605 =
																		MAKE_YOUNG_PAIR(BgL_arg1879z00_607, BNIL);
																}
																{	/* Expand/case.scm 312 */
																	obj_t BgL_arg1883z00_610;

																	{	/* Expand/case.scm 312 */
																		obj_t BgL_arg1884z00_611;

																		{	/* Expand/case.scm 312 */
																			obj_t BgL_arg1885z00_612;
																			obj_t BgL_arg1886z00_613;

																			{	/* Expand/case.scm 312 */
																				obj_t BgL_arg1887z00_614;

																				{	/* Expand/case.scm 312 */
																					obj_t BgL_arg1888z00_615;

																					{	/* Expand/case.scm 312 */
																						obj_t BgL_arg1889z00_616;

																						BgL_arg1889z00_616 =
																							PROCEDURE_ENTRY(BgL_ez00_31)
																							(BgL_ez00_31, BgL_valuez00_27,
																							BgL_ez00_31, BEOA);
																						BgL_arg1888z00_615 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1889z00_616, BNIL);
																					}
																					BgL_arg1887z00_614 =
																						MAKE_YOUNG_PAIR(BgL_auxz00_25,
																						BgL_arg1888z00_615);
																				}
																				BgL_arg1885z00_612 =
																					MAKE_YOUNG_PAIR(BgL_arg1887z00_614,
																					BNIL);
																			}
																			{	/* Expand/case.scm 313 */
																				obj_t BgL_arg1891z00_617;

																				{	/* Expand/case.scm 313 */
																					obj_t BgL_arg1892z00_618;

																					{	/* Expand/case.scm 313 */
																						obj_t BgL_arg1893z00_619;
																						obj_t BgL_arg1895z00_620;

																						{	/* Expand/case.scm 313 */
																							obj_t BgL_arg1896z00_621;

																							BgL_arg1896z00_621 =
																								MAKE_YOUNG_PAIR(BgL_auxz00_25,
																								BNIL);
																							BgL_arg1893z00_619 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 29)),
																								BgL_arg1896z00_621);
																						}
																						{	/* Expand/case.scm 315 */
																							obj_t BgL_arg1897z00_622;

																							{	/* Expand/case.scm 315 */
																								obj_t BgL_arg1898z00_623;

																								BgL_arg1898z00_623 =
																									MAKE_YOUNG_PAIR
																									(BgL_elsezd2namezd2_30, BNIL);
																								BgL_arg1897z00_622 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1898z00_623, BNIL);
																							}
																							BgL_arg1895z00_620 =
																								MAKE_YOUNG_PAIR
																								(BgL_casezd2formzd2_28,
																								BgL_arg1897z00_622);
																						}
																						BgL_arg1892z00_618 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1893z00_619,
																							BgL_arg1895z00_620);
																					}
																					BgL_arg1891z00_617 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 15)),
																						BgL_arg1892z00_618);
																				}
																				BgL_arg1886z00_613 =
																					MAKE_YOUNG_PAIR(BgL_arg1891z00_617,
																					BNIL);
																			}
																			BgL_arg1884z00_611 =
																				MAKE_YOUNG_PAIR(BgL_arg1885z00_612,
																				BgL_arg1886z00_613);
																		}
																		BgL_arg1883z00_610 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					16)), BgL_arg1884z00_611);
																	}
																	BgL_arg1878z00_606 =
																		MAKE_YOUNG_PAIR(BgL_arg1883z00_610, BNIL);
																}
																BgL_arg1876z00_604 =
																	MAKE_YOUNG_PAIR(BgL_arg1877z00_605,
																	BgL_arg1878z00_606);
															}
															return
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 24)),
																BgL_arg1876z00_604);
														}
													else
														{	/* Expand/case.scm 280 */
															return
																BGl_errorz00zz__errorz00
																(BGl_string2090z00zzexpand_casez00,
																BGl_string2091z00zzexpand_casez00,
																BgL_typez00_26);
														}
												}
										}
								}
						}
				}
		}

	}



/* do-generic-case */
	obj_t BGl_dozd2genericzd2casez00zzexpand_casez00(obj_t BgL_valuez00_32,
		obj_t BgL_clausesz00_33, obj_t BgL_ez00_34)
	{
		{	/* Expand/case.scm 323 */
			{	/* Expand/case.scm 324 */
				obj_t BgL_arg1901z00_624;

				{	/* Expand/case.scm 324 */
					obj_t BgL_arg1902z00_625;

					{	/* Expand/case.scm 324 */
						obj_t BgL_arg1903z00_626;
						obj_t BgL_arg1904z00_627;

						{	/* Expand/case.scm 324 */
							obj_t BgL_arg1905z00_628;

							{	/* Expand/case.scm 324 */
								obj_t BgL_arg1906z00_629;

								BgL_arg1906z00_629 = MAKE_YOUNG_PAIR(BgL_valuez00_32, BNIL);
								BgL_arg1905z00_628 =
									MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 17)),
									BgL_arg1906z00_629);
							}
							BgL_arg1903z00_626 = MAKE_YOUNG_PAIR(BgL_arg1905z00_628, BNIL);
						}
						BgL_arg1904z00_627 =
							MAKE_YOUNG_PAIR(BGl_loopze70ze7zzexpand_casez00
							(BgL_clausesz00_33), BNIL);
						BgL_arg1902z00_625 =
							MAKE_YOUNG_PAIR(BgL_arg1903z00_626, BgL_arg1904z00_627);
					}
					BgL_arg1901z00_624 =
						MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 16)), BgL_arg1902z00_625);
				}
				return
					PROCEDURE_ENTRY(BgL_ez00_34) (BgL_ez00_34, BgL_arg1901z00_624,
					BgL_ez00_34, BEOA);
			}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zzexpand_casez00(obj_t BgL_clausesz00_632)
	{
		{	/* Expand/case.scm 325 */
			if (NULLP(BgL_clausesz00_632))
				{	/* Expand/case.scm 326 */
					return BUNSPEC;
				}
			else
				{
					obj_t BgL_datumsz00_638;
					obj_t BgL_bodyz00_639;
					obj_t BgL_datumz00_641;
					obj_t BgL_bodyz00_642;

					{	/* Expand/case.scm 328 */
						obj_t BgL_ezd2553zd2_644;

						BgL_ezd2553zd2_644 = CAR(((obj_t) BgL_clausesz00_632));
						if (NULLP(BgL_ezd2553zd2_644))
							{	/* Expand/case.scm 328 */
								return BUNSPEC;
							}
						else
							{	/* Expand/case.scm 328 */
								if (PAIRP(BgL_ezd2553zd2_644))
									{	/* Expand/case.scm 328 */
										if (
											(CAR(BgL_ezd2553zd2_644) == CNST_TABLE_REF(((long) 11))))
											{	/* Expand/case.scm 328 */
												obj_t BgL_arg1914z00_649;

												BgL_arg1914z00_649 = CDR(BgL_ezd2553zd2_644);
												if (NULLP(BgL_arg1914z00_649))
													{	/* Expand/case.scm 332 */
														return BFALSE;
													}
												else
													{	/* Expand/case.scm 332 */
														return
															BGl_expandzd2prognzd2zz__prognz00
															(BgL_arg1914z00_649);
													}
											}
										else
											{	/* Expand/case.scm 328 */
												obj_t BgL_carzd2569zd2_650;

												BgL_carzd2569zd2_650 = CAR(BgL_ezd2553zd2_644);
												if (PAIRP(BgL_carzd2569zd2_650))
													{	/* Expand/case.scm 328 */
														bool_t BgL_test2195z00_1781;

														{	/* Expand/case.scm 328 */
															obj_t BgL_tmpz00_1782;

															BgL_tmpz00_1782 = CDR(BgL_carzd2569zd2_650);
															BgL_test2195z00_1781 = PAIRP(BgL_tmpz00_1782);
														}
														if (BgL_test2195z00_1781)
															{	/* Expand/case.scm 328 */
																BgL_datumsz00_638 = BgL_carzd2569zd2_650;
																BgL_bodyz00_639 = CDR(BgL_ezd2553zd2_644);
																if (NULLP(BgL_bodyz00_639))
																	{	/* Expand/case.scm 338 */
																		obj_t BgL_arg1935z00_672;

																		BgL_arg1935z00_672 =
																			CAR(((obj_t) BgL_clausesz00_632));
																		return
																			BGl_errorz00zz__errorz00
																			(BGl_string2086z00zzexpand_casez00,
																			BGl_string2089z00zzexpand_casez00,
																			BgL_arg1935z00_672);
																	}
																else
																	{	/* Expand/case.scm 339 */
																		bool_t BgL_test2197z00_1790;

																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_datumsz00_638))
																			{	/* Expand/case.scm 339 */
																				BgL_test2197z00_1790 =
																					(bgl_list_length(BgL_datumsz00_638) <
																					((long) 10));
																			}
																		else
																			{	/* Expand/case.scm 339 */
																				BgL_test2197z00_1790 = ((bool_t) 0);
																			}
																		if (BgL_test2197z00_1790)
																			{	/* Expand/case.scm 341 */
																				obj_t BgL_arg1939z00_676;

																				{	/* Expand/case.scm 341 */
																					obj_t BgL_arg1940z00_677;
																					obj_t BgL_arg1941z00_678;

																					{	/* Expand/case.scm 341 */
																						obj_t BgL_arg1942z00_679;

																						{	/* Expand/case.scm 341 */
																							obj_t BgL_arg1943z00_680;

																							{	/* Expand/case.scm 341 */
																								obj_t BgL_head1085z00_683;

																								{	/* Expand/case.scm 341 */
																									obj_t BgL_res2074z00_944;

																									BgL_res2074z00_944 =
																										MAKE_YOUNG_PAIR(BNIL, BNIL);
																									BgL_head1085z00_683 =
																										BgL_res2074z00_944;
																								}
																								{
																									obj_t BgL_l1083z00_685;
																									obj_t BgL_tail1086z00_686;

																									BgL_l1083z00_685 =
																										BgL_datumsz00_638;
																									BgL_tail1086z00_686 =
																										BgL_head1085z00_683;
																								BgL_zc3z04anonymousza31945ze3z87_687:
																									if (NULLP
																										(BgL_l1083z00_685))
																										{	/* Expand/case.scm 341 */
																											BgL_arg1943z00_680 =
																												CDR
																												(BgL_head1085z00_683);
																										}
																									else
																										{	/* Expand/case.scm 341 */
																											obj_t
																												BgL_newtail1087z00_689;
																											{	/* Expand/case.scm 341 */
																												obj_t
																													BgL_arg1948z00_691;
																												{	/* Expand/case.scm 341 */
																													obj_t BgL_dz00_692;

																													BgL_dz00_692 =
																														CAR(
																														((obj_t)
																															BgL_l1083z00_685));
																													{	/* Expand/case.scm 341 */
																														obj_t
																															BgL_arg1949z00_693;
																														{	/* Expand/case.scm 341 */
																															obj_t
																																BgL_arg1951z00_694;
																															{	/* Expand/case.scm 341 */
																																obj_t
																																	BgL_arg1952z00_695;
																																{	/* Expand/case.scm 341 */
																																	obj_t
																																		BgL_arg1953z00_696;
																																	BgL_arg1953z00_696
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_dz00_692,
																																		BNIL);
																																	BgL_arg1952z00_695
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				18)),
																																		BgL_arg1953z00_696);
																																}
																																BgL_arg1951z00_694
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1952z00_695,
																																	BNIL);
																															}
																															BgL_arg1949z00_693
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 17)),
																																BgL_arg1951z00_694);
																														}
																														BgL_arg1948z00_691 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 19)),
																															BgL_arg1949z00_693);
																												}}
																												{	/* Expand/case.scm 341 */
																													obj_t
																														BgL_res2076z00_948;
																													BgL_res2076z00_948 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1948z00_691,
																														BNIL);
																													BgL_newtail1087z00_689
																														=
																														BgL_res2076z00_948;
																											}}
																											SET_CDR
																												(BgL_tail1086z00_686,
																												BgL_newtail1087z00_689);
																											{	/* Expand/case.scm 341 */
																												obj_t
																													BgL_arg1947z00_690;
																												BgL_arg1947z00_690 =
																													CDR(((obj_t)
																														BgL_l1083z00_685));
																												{
																													obj_t
																														BgL_tail1086z00_1814;
																													obj_t
																														BgL_l1083z00_1813;
																													BgL_l1083z00_1813 =
																														BgL_arg1947z00_690;
																													BgL_tail1086z00_1814 =
																														BgL_newtail1087z00_689;
																													BgL_tail1086z00_686 =
																														BgL_tail1086z00_1814;
																													BgL_l1083z00_685 =
																														BgL_l1083z00_1813;
																													goto
																														BgL_zc3z04anonymousza31945ze3z87_687;
																												}
																											}
																										}
																								}
																							}
																							BgL_arg1942z00_679 =
																								BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																								(BgL_arg1943z00_680, BNIL);
																						}
																						BgL_arg1940z00_677 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 21)),
																							BgL_arg1942z00_679);
																					}
																					{	/* Expand/case.scm 343 */
																						obj_t BgL_arg1954z00_698;
																						obj_t BgL_arg1955z00_699;

																						BgL_arg1954z00_698 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_639);
																						{	/* Expand/case.scm 344 */
																							obj_t BgL_arg1956z00_700;

																							{	/* Expand/case.scm 344 */
																								obj_t BgL_arg1957z00_701;

																								BgL_arg1957z00_701 =
																									CDR(
																									((obj_t) BgL_clausesz00_632));
																								BgL_arg1956z00_700 =
																									BGl_loopze70ze7zzexpand_casez00
																									(BgL_arg1957z00_701);
																							}
																							BgL_arg1955z00_699 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1956z00_700, BNIL);
																						}
																						BgL_arg1941z00_678 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1954z00_698,
																							BgL_arg1955z00_699);
																					}
																					BgL_arg1939z00_676 =
																						MAKE_YOUNG_PAIR(BgL_arg1940z00_677,
																						BgL_arg1941z00_678);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1939z00_676);
																			}
																		else
																			{	/* Expand/case.scm 346 */
																				obj_t BgL_arg1958z00_702;

																				{	/* Expand/case.scm 346 */
																					obj_t BgL_arg1959z00_703;
																					obj_t BgL_arg1960z00_704;

																					{	/* Expand/case.scm 346 */
																						obj_t BgL_arg1961z00_705;

																						{	/* Expand/case.scm 346 */
																							obj_t BgL_arg1962z00_706;

																							{	/* Expand/case.scm 346 */
																								obj_t BgL_arg1963z00_707;

																								{	/* Expand/case.scm 346 */
																									obj_t BgL_arg1964z00_708;

																									BgL_arg1964z00_708 =
																										MAKE_YOUNG_PAIR
																										(BgL_datumsz00_638, BNIL);
																									BgL_arg1963z00_707 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												18)),
																										BgL_arg1964z00_708);
																								}
																								BgL_arg1962z00_706 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1963z00_707, BNIL);
																							}
																							BgL_arg1961z00_705 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 17)),
																								BgL_arg1962z00_706);
																						}
																						BgL_arg1959z00_703 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 22)),
																							BgL_arg1961z00_705);
																					}
																					{	/* Expand/case.scm 347 */
																						obj_t BgL_arg1965z00_709;
																						obj_t BgL_arg1966z00_710;

																						BgL_arg1965z00_709 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_639);
																						{	/* Expand/case.scm 348 */
																							obj_t BgL_arg1967z00_711;

																							{	/* Expand/case.scm 348 */
																								obj_t BgL_arg1968z00_712;

																								BgL_arg1968z00_712 =
																									CDR(
																									((obj_t) BgL_clausesz00_632));
																								BgL_arg1967z00_711 =
																									BGl_loopze70ze7zzexpand_casez00
																									(BgL_arg1968z00_712);
																							}
																							BgL_arg1966z00_710 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1967z00_711, BNIL);
																						}
																						BgL_arg1960z00_704 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1965z00_709,
																							BgL_arg1966z00_710);
																					}
																					BgL_arg1958z00_702 =
																						MAKE_YOUNG_PAIR(BgL_arg1959z00_703,
																						BgL_arg1960z00_704);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1958z00_702);
															}}}
														else
															{	/* Expand/case.scm 328 */
																if (NULLP(CDR(((obj_t) BgL_carzd2569zd2_650))))
																	{	/* Expand/case.scm 328 */
																		obj_t BgL_arg1921z00_658;
																		obj_t BgL_arg1923z00_659;

																		BgL_arg1921z00_658 =
																			CAR(((obj_t) BgL_carzd2569zd2_650));
																		BgL_arg1923z00_659 =
																			CDR(BgL_ezd2553zd2_644);
																		BgL_datumz00_641 = BgL_arg1921z00_658;
																		BgL_bodyz00_642 = BgL_arg1923z00_659;
																		if (NULLP(BgL_bodyz00_642))
																			{	/* Expand/case.scm 351 */
																				obj_t BgL_arg1971z00_716;

																				BgL_arg1971z00_716 =
																					CAR(((obj_t) BgL_clausesz00_632));
																				return
																					BGl_errorz00zz__errorz00
																					(BGl_string2086z00zzexpand_casez00,
																					BGl_string2089z00zzexpand_casez00,
																					BgL_arg1971z00_716);
																			}
																		else
																			{	/* Expand/case.scm 352 */
																				obj_t BgL_arg1972z00_717;

																				{	/* Expand/case.scm 352 */
																					obj_t BgL_arg1973z00_718;
																					obj_t BgL_arg1974z00_719;

																					{	/* Expand/case.scm 352 */
																						obj_t BgL_arg1975z00_720;

																						{	/* Expand/case.scm 352 */
																							obj_t BgL_arg1976z00_721;

																							{	/* Expand/case.scm 352 */
																								obj_t BgL_arg1977z00_722;

																								{	/* Expand/case.scm 352 */
																									obj_t BgL_arg1979z00_723;

																									BgL_arg1979z00_723 =
																										MAKE_YOUNG_PAIR
																										(BgL_datumz00_641, BNIL);
																									BgL_arg1977z00_722 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												18)),
																										BgL_arg1979z00_723);
																								}
																								BgL_arg1976z00_721 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1977z00_722, BNIL);
																							}
																							BgL_arg1975z00_720 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 17)),
																								BgL_arg1976z00_721);
																						}
																						BgL_arg1973z00_718 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 19)),
																							BgL_arg1975z00_720);
																					}
																					{	/* Expand/case.scm 353 */
																						obj_t BgL_arg1980z00_724;
																						obj_t BgL_arg1981z00_725;

																						BgL_arg1980z00_724 =
																							BGl_expandzd2prognzd2zz__prognz00
																							(BgL_bodyz00_642);
																						{	/* Expand/case.scm 354 */
																							obj_t BgL_arg1982z00_726;

																							{	/* Expand/case.scm 354 */
																								obj_t BgL_arg1983z00_727;

																								BgL_arg1983z00_727 =
																									CDR(
																									((obj_t) BgL_clausesz00_632));
																								BgL_arg1982z00_726 =
																									BGl_loopze70ze7zzexpand_casez00
																									(BgL_arg1983z00_727);
																							}
																							BgL_arg1981z00_725 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1982z00_726, BNIL);
																						}
																						BgL_arg1974z00_719 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1980z00_724,
																							BgL_arg1981z00_725);
																					}
																					BgL_arg1972z00_717 =
																						MAKE_YOUNG_PAIR(BgL_arg1973z00_718,
																						BgL_arg1974z00_719);
																				}
																				return
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							15)), BgL_arg1972z00_717);
																	}}
																else
																	{	/* Expand/case.scm 328 */
																		return BFALSE;
																	}
															}
													}
												else
													{	/* Expand/case.scm 328 */
														return BFALSE;
													}
											}
									}
								else
									{	/* Expand/case.scm 328 */
										return BFALSE;
									}
							}
					}
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_casez00()
	{
		{	/* Expand/case.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
			return
				BGl_modulezd2initializa7ationz75zzast_identz00(((long) 174885627),
				BSTRING_TO_STRING(BGl_string2092z00zzexpand_casez00));
		}

	}

#ifdef __cplusplus
}
#endif
