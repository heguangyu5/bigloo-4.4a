/*===========================================================================*/
/*   (Expand/assert.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/assert.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_backendz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_languagez00;
		obj_t BgL_srfi0z00;
		obj_t BgL_namez00;
		obj_t BgL_externzd2variableszd2;
		obj_t BgL_externzd2functionszd2;
		obj_t BgL_externzd2typeszd2;
		obj_t BgL_variablesz00;
		obj_t BgL_functionsz00;
		obj_t BgL_typesz00;
		bool_t BgL_typedz00;
		obj_t BgL_heapzd2suffixzd2;
		obj_t BgL_heapzd2compatiblezd2;
		bool_t BgL_callccz00;
		bool_t BgL_qualifiedzd2typeszd2;
		bool_t BgL_effectzb2zb2;
		bool_t BgL_removezd2emptyzd2letz00;
		bool_t BgL_foreignzd2closurezd2;
		bool_t BgL_typedzd2eqzd2;
		bool_t BgL_tracezd2supportzd2;
		obj_t BgL_foreignzd2clausezd2supportz00;
		obj_t BgL_debugzd2supportzd2;
		bool_t BgL_pragmazd2supportzd2;
		bool_t BgL_tvectorzd2descrzd2supportz00;
		bool_t BgL_requirezd2tailczd2;
		obj_t BgL_registersz00;
		obj_t BgL_pregistersz00;
		bool_t BgL_boundzd2checkzd2;
		bool_t BgL_typezd2checkzd2;
		bool_t BgL_typedzd2funcallzd2;
	}                 *BgL_backendz00_bglt;


	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_assertz00();
	BGL_IMPORT obj_t BGl_memqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	extern obj_t BGl_thezd2backendzd2zzbackend_backendz00();
	static obj_t BGl_methodzd2initzd2zzexpand_assertz00();
	extern obj_t BGl_za2bdbzd2debugza2zd2zzengine_paramz00;
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_za2compilerzd2debugza2zd2zzengine_paramz00;
	static obj_t BGl_makezd2onezd2assertz00zzexpand_assertz00(obj_t, obj_t, obj_t,
		obj_t);
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_assertz00();
	extern obj_t BGl_za2bmemzd2profilingza2zd2zzengine_paramz00;
	static obj_t BGl_dupz00zzexpand_assertz00(obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2assertzd2zzexpand_assertz00(obj_t,
		obj_t);
	extern obj_t BGl_locationzd2fullzd2fnamez00zztools_locationz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_assertz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzexpand_assertz00();
	static obj_t BGl_genericzd2initzd2zzexpand_assertz00();
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_assertz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzbackend_backendz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_z62expandzd2assertzb0zzexpand_assertz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_assertz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_assertz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_assertz00();
	static obj_t __cnst[9];


	   
		 
		DEFINE_STRING(BGl_string1297z00zzexpand_assertz00,
		BgL_bgl_string1297za700za7za7e1303za7, "Illegal `assert' form", 21);
	      DEFINE_STRING(BGl_string1298z00zzexpand_assertz00,
		BgL_bgl_string1298za700za7za7e1304za7, "expand_assert", 13);
	      DEFINE_STRING(BGl_string1299z00zzexpand_assertz00,
		BgL_bgl_string1299za700za7za7e1305za7,
		"if notify-assert-fail begin location define-primop! quote check bdb assert ",
		75);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2assertzd2envz00zzexpand_assertz00,
		BgL_bgl_za762expandza7d2asse1306z00,
		BGl_z62expandzd2assertzb0zzexpand_assertz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_assertz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_assertz00(long
		BgL_checksumz00_368, char *BgL_fromz00_369)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_assertz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_assertz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_assertz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_assertz00();
					BGl_cnstzd2initzd2zzexpand_assertz00();
					BGl_importedzd2moduleszd2initz00zzexpand_assertz00();
					return BGl_toplevelzd2initzd2zzexpand_assertz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_assert");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_assert");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 0),
				"expand_assert");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0),
				"expand_assert");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			{	/* Expand/assert.scm 15 */
				obj_t BgL_cportz00_355;

				{	/* Expand/assert.scm 15 */
					obj_t BgL_stringz00_363;

					BgL_stringz00_363 = BGl_string1299z00zzexpand_assertz00;
					{	/* Expand/assert.scm 15 */
						obj_t BgL_startz00_364;

						BgL_startz00_364 = BINT(((long) 0));
						{	/* Expand/assert.scm 15 */
							obj_t BgL_endz00_365;

							BgL_endz00_365 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_363)));
							{	/* Expand/assert.scm 15 */

								BgL_cportz00_355 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_363, BgL_startz00_364, BgL_endz00_365);
				}}}}
				{
					long BgL_iz00_356;

					BgL_iz00_356 = ((long) 8);
				BgL_loopz00_357:
					if ((BgL_iz00_356 == ((long) -1)))
						{	/* Expand/assert.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/assert.scm 15 */
							{	/* Expand/assert.scm 15 */
								obj_t BgL_arg1301z00_359;

								{	/* Expand/assert.scm 15 */

									{	/* Expand/assert.scm 15 */
										obj_t BgL_locationz00_361;

										BgL_locationz00_361 = BBOOL(((bool_t) 0));
										{	/* Expand/assert.scm 15 */

											BgL_arg1301z00_359 =
												BGl_readz00zz__readerz00(BgL_cportz00_355,
												BgL_locationz00_361);
										}
									}
								}
								{	/* Expand/assert.scm 15 */
									int BgL_tmpz00_396;

									BgL_tmpz00_396 = (int) (BgL_iz00_356);
									CNST_TABLE_SET(BgL_tmpz00_396, BgL_arg1301z00_359);
							}}
							{	/* Expand/assert.scm 15 */
								int BgL_auxz00_362;

								BgL_auxz00_362 = (int) ((BgL_iz00_356 - ((long) 1)));
								{
									long BgL_iz00_401;

									BgL_iz00_401 = (long) (BgL_auxz00_362);
									BgL_iz00_356 = BgL_iz00_401;
									goto BgL_loopz00_357;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}

	}



/* expand-assert */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2assertzd2zzexpand_assertz00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		{	/* Expand/assert.scm 26 */
			{
				obj_t BgL_varsz00_135;
				obj_t BgL_predz00_136;
				obj_t BgL_varsz00_132;
				obj_t BgL_bodyz00_133;

				if (PAIRP(BgL_xz00_17))
					{	/* Expand/assert.scm 27 */
						obj_t BgL_cdrzd2111zd2_141;

						BgL_cdrzd2111zd2_141 = CDR(BgL_xz00_17);
						if (PAIRP(BgL_cdrzd2111zd2_141))
							{	/* Expand/assert.scm 27 */
								obj_t BgL_cdrzd2115zd2_143;

								BgL_cdrzd2115zd2_143 = CDR(BgL_cdrzd2111zd2_141);
								if ((CAR(BgL_cdrzd2111zd2_141) == CNST_TABLE_REF(((long) 2))))
									{	/* Expand/assert.scm 27 */
										if (PAIRP(BgL_cdrzd2115zd2_143))
											{	/* Expand/assert.scm 27 */
												obj_t BgL_carzd2118zd2_147;

												BgL_carzd2118zd2_147 = CAR(BgL_cdrzd2115zd2_143);
												if (PAIRP(BgL_carzd2118zd2_147))
													{	/* Expand/assert.scm 27 */
														BgL_varsz00_132 = BgL_carzd2118zd2_147;
														BgL_bodyz00_133 = CDR(BgL_cdrzd2115zd2_143);
														{	/* Expand/assert.scm 30 */
															obj_t BgL_newz00_163;

															{	/* Expand/assert.scm 30 */
																obj_t BgL_arg1165z00_164;

																BgL_arg1165z00_164 =
																	MAKE_YOUNG_PAIR(BgL_varsz00_132,
																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																	(BgL_bodyz00_133, BNIL));
																BgL_newz00_163 =
																	MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																	BgL_arg1165z00_164);
															}
															BGl_replacez12z12zztools_miscz00(BgL_xz00_17,
																BgL_newz00_163);
															return PROCEDURE_ENTRY(BgL_ez00_18) (BgL_ez00_18,
																BgL_xz00_17, BgL_ez00_18, BEOA);
														}
													}
												else
													{	/* Expand/assert.scm 27 */
														obj_t BgL_carzd2131zd2_151;

														BgL_carzd2131zd2_151 =
															CAR(((obj_t) BgL_cdrzd2111zd2_141));
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd2131zd2_151))
															{	/* Expand/assert.scm 27 */
																obj_t BgL_arg1140z00_153;

																BgL_arg1140z00_153 =
																	CDR(((obj_t) BgL_cdrzd2111zd2_141));
																BgL_varsz00_135 = BgL_carzd2131zd2_151;
																BgL_predz00_136 = BgL_arg1140z00_153;
															BgL_tagzd2102zd2_137:
																{	/* Expand/assert.scm 34 */
																	bool_t BgL_test1315z00_436;

																	{	/* Expand/assert.scm 34 */
																		bool_t BgL_test1316z00_437;

																		if (INTEGERP
																			(BGl_za2compilerzd2debugza2zd2zzengine_paramz00))
																			{	/* Expand/assert.scm 34 */
																				if (
																					((long)
																						CINT
																						(BGl_za2compilerzd2debugza2zd2zzengine_paramz00)
																						>= ((long) 1)))
																					{	/* Expand/assert.scm 35 */
																						if (CBOOL
																							(BGl_za2bmemzd2profilingza2zd2zzengine_paramz00))
																							{	/* Expand/assert.scm 36 */
																								BgL_test1316z00_437 =
																									((bool_t) 0);
																							}
																						else
																							{	/* Expand/assert.scm 36 */
																								BgL_test1316z00_437 =
																									((bool_t) 1);
																							}
																					}
																				else
																					{	/* Expand/assert.scm 35 */
																						BgL_test1316z00_437 = ((bool_t) 0);
																					}
																			}
																		else
																			{	/* Expand/assert.scm 34 */
																				BgL_test1316z00_437 = ((bool_t) 0);
																			}
																		if (BgL_test1316z00_437)
																			{	/* Expand/assert.scm 34 */
																				BgL_test1315z00_436 = ((bool_t) 1);
																			}
																		else
																			{	/* Expand/assert.scm 37 */
																				obj_t BgL__andtest_1047z00_178;

																				{	/* Expand/assert.scm 37 */
																					obj_t BgL_arg1174z00_180;

																					{	/* Expand/assert.scm 37 */
																						obj_t BgL_arg1175z00_181;

																						BgL_arg1175z00_181 =
																							BGl_thezd2backendzd2zzbackend_backendz00
																							();
																						BgL_arg1174z00_180 =
																							(((BgL_backendz00_bglt)
																								COBJECT(((BgL_backendz00_bglt)
																										BgL_arg1175z00_181)))->
																							BgL_debugzd2supportzd2);
																					}
																					BgL__andtest_1047z00_178 =
																						BGl_memqz00zz__r4_pairs_and_lists_6_3z00
																						(CNST_TABLE_REF(((long) 1)),
																						BgL_arg1174z00_180);
																				}
																				if (CBOOL(BgL__andtest_1047z00_178))
																					{	/* Expand/assert.scm 37 */
																						if (INTEGERP
																							(BGl_za2bdbzd2debugza2zd2zzengine_paramz00))
																							{	/* Expand/assert.scm 38 */
																								BgL_test1315z00_436 =
																									(
																									(long)
																									CINT
																									(BGl_za2bdbzd2debugza2zd2zzengine_paramz00)
																									>= ((long) 1));
																							}
																						else
																							{	/* Expand/assert.scm 38 */
																								BgL_test1315z00_436 =
																									((bool_t) 0);
																							}
																					}
																				else
																					{	/* Expand/assert.scm 37 */
																						BgL_test1315z00_436 = ((bool_t) 0);
																					}
																			}
																	}
																	if (BgL_test1315z00_436)
																		{	/* Expand/assert.scm 34 */
																			return
																				BGl_replacez12z12zztools_miscz00
																				(BgL_xz00_17,
																				BGl_makezd2onezd2assertz00zzexpand_assertz00
																				(BgL_ez00_18, BgL_xz00_17,
																					BgL_varsz00_135, BgL_predz00_136));
																		}
																	else
																		{	/* Expand/assert.scm 34 */
																			return BUNSPEC;
																		}
																}
															}
														else
															{	/* Expand/assert.scm 27 */
															BgL_tagzd2103zd2_138:
																return
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string1297z00zzexpand_assertz00,
																	BgL_xz00_17);
															}
													}
											}
										else
											{	/* Expand/assert.scm 27 */
												obj_t BgL_carzd2144zd2_155;

												BgL_carzd2144zd2_155 =
													CAR(((obj_t) BgL_cdrzd2111zd2_141));
												if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
													(BgL_carzd2144zd2_155))
													{	/* Expand/assert.scm 27 */
														obj_t BgL_arg1145z00_157;

														BgL_arg1145z00_157 =
															CDR(((obj_t) BgL_cdrzd2111zd2_141));
														{
															obj_t BgL_predz00_466;
															obj_t BgL_varsz00_465;

															BgL_varsz00_465 = BgL_carzd2144zd2_155;
															BgL_predz00_466 = BgL_arg1145z00_157;
															BgL_predz00_136 = BgL_predz00_466;
															BgL_varsz00_135 = BgL_varsz00_465;
															goto BgL_tagzd2102zd2_137;
														}
													}
												else
													{	/* Expand/assert.scm 27 */
														goto BgL_tagzd2103zd2_138;
													}
											}
									}
								else
									{	/* Expand/assert.scm 27 */
										obj_t BgL_carzd2157zd2_159;

										BgL_carzd2157zd2_159 = CAR(((obj_t) BgL_cdrzd2111zd2_141));
										if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
											(BgL_carzd2157zd2_159))
											{	/* Expand/assert.scm 27 */
												obj_t BgL_arg1155z00_161;

												BgL_arg1155z00_161 =
													CDR(((obj_t) BgL_cdrzd2111zd2_141));
												{
													obj_t BgL_predz00_474;
													obj_t BgL_varsz00_473;

													BgL_varsz00_473 = BgL_carzd2157zd2_159;
													BgL_predz00_474 = BgL_arg1155z00_161;
													BgL_predz00_136 = BgL_predz00_474;
													BgL_varsz00_135 = BgL_varsz00_473;
													goto BgL_tagzd2102zd2_137;
												}
											}
										else
											{	/* Expand/assert.scm 27 */
												goto BgL_tagzd2103zd2_138;
											}
									}
							}
						else
							{	/* Expand/assert.scm 27 */
								goto BgL_tagzd2103zd2_138;
							}
					}
				else
					{	/* Expand/assert.scm 27 */
						goto BgL_tagzd2103zd2_138;
					}
			}
		}

	}



/* &expand-assert */
	obj_t BGl_z62expandzd2assertzb0zzexpand_assertz00(obj_t BgL_envz00_351,
		obj_t BgL_xz00_352, obj_t BgL_ez00_353)
	{
		{	/* Expand/assert.scm 26 */
			return
				BGl_expandzd2assertzd2zzexpand_assertz00(BgL_xz00_352, BgL_ez00_353);
		}

	}



/* make-one-assert */
	obj_t BGl_makezd2onezd2assertz00zzexpand_assertz00(obj_t BgL_ez00_19,
		obj_t BgL_expz00_20, obj_t BgL_varsz00_21, obj_t BgL_predz00_22)
	{
		{	/* Expand/assert.scm 49 */
			{	/* Expand/assert.scm 50 */
				obj_t BgL_predz00_184;

				if (NULLP(BgL_predz00_22))
					{	/* Expand/assert.scm 51 */
						obj_t BgL_list1271z00_230;

						BgL_list1271z00_230 = MAKE_YOUNG_PAIR(BUNSPEC, BNIL);
						BgL_predz00_184 = BgL_list1271z00_230;
					}
				else
					{	/* Expand/assert.scm 50 */
						BgL_predz00_184 = BgL_predz00_22;
					}
				{	/* Expand/assert.scm 50 */
					obj_t BgL_oldzd2predzd2_185;

					BgL_oldzd2predzd2_185 = BGl_dupz00zzexpand_assertz00(BgL_predz00_184);
					{	/* Expand/assert.scm 53 */

						{	/* Expand/assert.scm 54 */
							obj_t BgL_arg1176z00_186;

							{	/* Expand/assert.scm 54 */
								obj_t BgL_arg1177z00_187;
								obj_t BgL_arg1178z00_188;

								{	/* Expand/assert.scm 54 */
									obj_t BgL_arg1179z00_189;

									BgL_arg1179z00_189 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_predz00_184);
									BgL_arg1177z00_187 =
										PROCEDURE_ENTRY(BgL_ez00_19) (BgL_ez00_19,
										BgL_arg1179z00_189, BgL_ez00_19, BEOA);
								}
								{	/* Expand/assert.scm 58 */
									obj_t BgL_arg1186z00_190;

									{	/* Expand/assert.scm 58 */
										obj_t BgL_arg1190z00_191;

										{	/* Expand/assert.scm 58 */
											obj_t BgL_arg1194z00_192;

											{	/* Expand/assert.scm 58 */
												obj_t BgL_arg1197z00_193;
												obj_t BgL_arg1201z00_194;

												{
													obj_t BgL_varsz00_197;
													obj_t BgL_defsz00_198;

													BgL_varsz00_197 = BgL_varsz00_21;
													BgL_defsz00_198 = BNIL;
												BgL_zc3z04anonymousza31202ze3z87_199:
													if (NULLP(BgL_varsz00_197))
														{	/* Expand/assert.scm 60 */
															BgL_arg1197z00_193 = BgL_defsz00_198;
														}
													else
														{	/* Expand/assert.scm 62 */
															obj_t BgL_arg1208z00_201;
															obj_t BgL_arg1211z00_202;

															BgL_arg1208z00_201 =
																CDR(((obj_t) BgL_varsz00_197));
															{	/* Expand/assert.scm 63 */
																obj_t BgL_arg1216z00_203;

																{	/* Expand/assert.scm 63 */
																	obj_t BgL_arg1221z00_204;

																	{	/* Expand/assert.scm 63 */
																		obj_t BgL_arg1223z00_205;
																		obj_t BgL_arg1225z00_206;

																		{	/* Expand/assert.scm 63 */
																			obj_t BgL_arg1227z00_207;

																			{	/* Expand/assert.scm 63 */
																				obj_t BgL_arg1229z00_208;

																				BgL_arg1229z00_208 =
																					CAR(((obj_t) BgL_varsz00_197));
																				BgL_arg1227z00_207 =
																					MAKE_YOUNG_PAIR(BgL_arg1229z00_208,
																					BNIL);
																			}
																			BgL_arg1223z00_205 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						3)), BgL_arg1227z00_207);
																		}
																		{	/* Expand/assert.scm 63 */
																			obj_t BgL_arg1232z00_209;

																			BgL_arg1232z00_209 =
																				CAR(((obj_t) BgL_varsz00_197));
																			BgL_arg1225z00_206 =
																				MAKE_YOUNG_PAIR(BgL_arg1232z00_209,
																				BNIL);
																		}
																		BgL_arg1221z00_204 =
																			MAKE_YOUNG_PAIR(BgL_arg1223z00_205,
																			BgL_arg1225z00_206);
																	}
																	BgL_arg1216z00_203 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 4)),
																		BgL_arg1221z00_204);
																}
																BgL_arg1211z00_202 =
																	MAKE_YOUNG_PAIR(BgL_arg1216z00_203,
																	BgL_defsz00_198);
															}
															{
																obj_t BgL_defsz00_503;
																obj_t BgL_varsz00_502;

																BgL_varsz00_502 = BgL_arg1208z00_201;
																BgL_defsz00_503 = BgL_arg1211z00_202;
																BgL_defsz00_198 = BgL_defsz00_503;
																BgL_varsz00_197 = BgL_varsz00_502;
																goto BgL_zc3z04anonymousza31202ze3z87_199;
															}
														}
												}
												{	/* Expand/assert.scm 65 */
													obj_t BgL_arg1239z00_211;

													{	/* Expand/assert.scm 65 */
														obj_t BgL_locz00_212;

														{	/* Expand/assert.scm 65 */
															obj_t BgL_locz00_227;

															BgL_locz00_227 =
																BGl_findzd2locationzd2zztools_locationz00
																(BgL_expz00_20);
															{	/* Expand/assert.scm 66 */
																bool_t BgL_test1326z00_505;

																if (STRUCTP(BgL_locz00_227))
																	{	/* Expand/assert.scm 66 */
																		BgL_test1326z00_505 =
																			(STRUCT_KEY(BgL_locz00_227) ==
																			CNST_TABLE_REF(((long) 5)));
																	}
																else
																	{	/* Expand/assert.scm 66 */
																		BgL_test1326z00_505 = ((bool_t) 0);
																	}
																if (BgL_test1326z00_505)
																	{	/* Expand/assert.scm 66 */
																		BgL_locz00_212 = BgL_locz00_227;
																	}
																else
																	{	/* Expand/assert.scm 66 */
																		BgL_locz00_212 =
																			BGl_findzd2locationzd2zztools_locationz00
																			(BgL_predz00_184);
																	}
															}
														}
														{	/* Expand/assert.scm 69 */
															obj_t BgL_arg1242z00_213;

															{	/* Expand/assert.scm 69 */
																obj_t BgL_arg1243z00_214;
																obj_t BgL_arg1245z00_215;

																{	/* Expand/assert.scm 69 */
																	obj_t BgL_arg1246z00_216;

																	BgL_arg1246z00_216 =
																		MAKE_YOUNG_PAIR(BgL_varsz00_21, BNIL);
																	BgL_arg1243z00_214 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 3)),
																		BgL_arg1246z00_216);
																}
																{	/* Expand/assert.scm 70 */
																	obj_t BgL_arg1247z00_217;
																	obj_t BgL_arg1250z00_218;

																	{	/* Expand/assert.scm 70 */
																		obj_t BgL_arg1252z00_219;

																		{	/* Expand/assert.scm 70 */
																			obj_t BgL_arg1253z00_220;

																			BgL_arg1253z00_220 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						6)), BgL_oldzd2predzd2_185);
																			BgL_arg1252z00_219 =
																				MAKE_YOUNG_PAIR(BgL_arg1253z00_220,
																				BNIL);
																		}
																		BgL_arg1247z00_217 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					3)), BgL_arg1252z00_219);
																	}
																	{	/* Expand/assert.scm 71 */
																		obj_t BgL_arg1254z00_221;

																		{	/* Expand/assert.scm 71 */
																			bool_t BgL_test1328z00_520;

																			if (STRUCTP(BgL_locz00_212))
																				{	/* Expand/assert.scm 71 */
																					BgL_test1328z00_520 =
																						(STRUCT_KEY(BgL_locz00_212) ==
																						CNST_TABLE_REF(((long) 5)));
																				}
																			else
																				{	/* Expand/assert.scm 71 */
																					BgL_test1328z00_520 = ((bool_t) 0);
																				}
																			if (BgL_test1328z00_520)
																				{	/* Expand/assert.scm 72 */
																					obj_t BgL_arg1256z00_223;

																					{	/* Expand/assert.scm 72 */
																						obj_t BgL_arg1258z00_224;

																						BgL_arg1258z00_224 =
																							MAKE_YOUNG_PAIR
																							(BGl_locationzd2fullzd2fnamez00zztools_locationz00
																							(BgL_locz00_212),
																							STRUCT_REF(BgL_locz00_212,
																								(int) (((long) 1))));
																						BgL_arg1256z00_223 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1258z00_224, BNIL);
																					}
																					BgL_arg1254z00_221 =
																						MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																								(long) 3)), BgL_arg1256z00_223);
																				}
																			else
																				{	/* Expand/assert.scm 71 */
																					BgL_arg1254z00_221 = BFALSE;
																				}
																		}
																		BgL_arg1250z00_218 =
																			MAKE_YOUNG_PAIR(BgL_arg1254z00_221, BNIL);
																	}
																	BgL_arg1245z00_215 =
																		MAKE_YOUNG_PAIR(BgL_arg1247z00_217,
																		BgL_arg1250z00_218);
																}
																BgL_arg1242z00_213 =
																	MAKE_YOUNG_PAIR(BgL_arg1243z00_214,
																	BgL_arg1245z00_215);
															}
															BgL_arg1239z00_211 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 7)),
																BgL_arg1242z00_213);
													}}
													BgL_arg1201z00_194 =
														MAKE_YOUNG_PAIR(BgL_arg1239z00_211, BNIL);
												}
												BgL_arg1194z00_192 =
													BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
													(BgL_arg1197z00_193, BgL_arg1201z00_194);
											}
											BgL_arg1190z00_191 =
												MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 6)),
												BgL_arg1194z00_192);
										}
										BgL_arg1186z00_190 =
											MAKE_YOUNG_PAIR(BgL_arg1190z00_191, BNIL);
									}
									BgL_arg1178z00_188 =
										MAKE_YOUNG_PAIR(BUNSPEC, BgL_arg1186z00_190);
								}
								BgL_arg1176z00_186 =
									MAKE_YOUNG_PAIR(BgL_arg1177z00_187, BgL_arg1178z00_188);
							}
							return
								MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 8)), BgL_arg1176z00_186);
		}}}}}

	}



/* dup */
	obj_t BGl_dupz00zzexpand_assertz00(obj_t BgL_predz00_23)
	{
		{	/* Expand/assert.scm 79 */
			if (PAIRP(BgL_predz00_23))
				{	/* Expand/assert.scm 81 */
					return
						MAKE_YOUNG_PAIR(BGl_dupz00zzexpand_assertz00(CAR(BgL_predz00_23)),
						BGl_dupz00zzexpand_assertz00(CDR(BgL_predz00_23)));
				}
			else
				{	/* Expand/assert.scm 81 */
					return BgL_predz00_23;
				}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_assertz00()
	{
		{	/* Expand/assert.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1298z00zzexpand_assertz00));
			BGl_modulezd2initializa7ationz75zzbackend_backendz00(((long) 216206763),
				BSTRING_TO_STRING(BGl_string1298z00zzexpand_assertz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1298z00zzexpand_assertz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1298z00zzexpand_assertz00));
		}

	}

#ifdef __cplusplus
}
#endif
