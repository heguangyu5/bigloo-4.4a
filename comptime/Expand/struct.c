/*===========================================================================*/
/*   (Expand/struct.scm)                                                     */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/struct.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2structzb0zzexpand_structz00(obj_t, obj_t, obj_t);
	BGL_IMPORT obj_t BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_structz00();
	BGL_IMPORT obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_structz00();
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_IMPORT long bgl_list_length(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_structz00();
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_structz00 = BUNSPEC;
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_structz00();
	BGL_IMPORT obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2structzd2zzexpand_structz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t string_append(obj_t, obj_t);
	BGL_IMPORT obj_t
		BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7(obj_t);
	extern obj_t BGl_za2unsafezd2structza2zd2zzengine_paramz00;
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzexpand_structz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzengine_paramz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zzexpand_structz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_structz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_structz00();
	static obj_t __cnst[34];


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2structzd2envz00zzexpand_structz00,
		BgL_bgl_za762expandza7d2stru1709z00,
		BGl_z62expandzd2structzb0zzexpand_structz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1700z00zzexpand_structz00,
		BgL_bgl_string1700za700za7za7e1710za7, "Illegal `define-struct' form", 28);
	      DEFINE_STRING(BGl_string1701z00zzexpand_structz00,
		BgL_bgl_string1701za700za7za7e1711za7, "struct-ref:not an instance of", 29);
	      DEFINE_STRING(BGl_string1702z00zzexpand_structz00,
		BgL_bgl_string1702za700za7za7e1712za7, "struct-set!:not an instance of",
		30);
	      DEFINE_STRING(BGl_string1703z00zzexpand_structz00,
		BgL_bgl_string1703za700za7za7e1713za7, "expand_struct", 13);
	      DEFINE_STRING(BGl_string1704z00zzexpand_structz00,
		BgL_bgl_string1704za700za7za7e1714za7,
		"begin u-struct-set! struct-set! v error u-struct-ref struct-ref s ((unspecified)) eq? struct-key struct? o ? let - -set! new $create-struct define-inline if car quote @ make-struct __structure apply not null? cdr pair? init make- (quote ()) ",
		241);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzexpand_structz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_structz00(long
		BgL_checksumz00_419, char *BgL_fromz00_420)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_structz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_structz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_structz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_structz00();
					BGl_cnstzd2initzd2zzexpand_structz00();
					BGl_importedzd2moduleszd2initz00zzexpand_structz00();
					return BGl_methodzd2initzd2zzexpand_structz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__match_normaliza7eza7(((long) 0),
				"expand_struct");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"expand_struct");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			{	/* Expand/struct.scm 15 */
				obj_t BgL_cportz00_406;

				{	/* Expand/struct.scm 15 */
					obj_t BgL_stringz00_414;

					BgL_stringz00_414 = BGl_string1704z00zzexpand_structz00;
					{	/* Expand/struct.scm 15 */
						obj_t BgL_startz00_415;

						BgL_startz00_415 = BINT(((long) 0));
						{	/* Expand/struct.scm 15 */
							obj_t BgL_endz00_416;

							BgL_endz00_416 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_414)));
							{	/* Expand/struct.scm 15 */

								BgL_cportz00_406 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_414, BgL_startz00_415, BgL_endz00_416);
				}}}}
				{
					long BgL_iz00_407;

					BgL_iz00_407 = ((long) 33);
				BgL_loopz00_408:
					if ((BgL_iz00_407 == ((long) -1)))
						{	/* Expand/struct.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/struct.scm 15 */
							{	/* Expand/struct.scm 15 */
								obj_t BgL_arg1707z00_410;

								{	/* Expand/struct.scm 15 */

									{	/* Expand/struct.scm 15 */
										obj_t BgL_locationz00_412;

										BgL_locationz00_412 = BBOOL(((bool_t) 0));
										{	/* Expand/struct.scm 15 */

											BgL_arg1707z00_410 =
												BGl_readz00zz__readerz00(BgL_cportz00_406,
												BgL_locationz00_412);
										}
									}
								}
								{	/* Expand/struct.scm 15 */
									int BgL_tmpz00_446;

									BgL_tmpz00_446 = (int) (BgL_iz00_407);
									CNST_TABLE_SET(BgL_tmpz00_446, BgL_arg1707z00_410);
							}}
							{	/* Expand/struct.scm 15 */
								int BgL_auxz00_413;

								BgL_auxz00_413 = (int) ((BgL_iz00_407 - ((long) 1)));
								{
									long BgL_iz00_451;

									BgL_iz00_451 = (long) (BgL_auxz00_413);
									BgL_iz00_407 = BgL_iz00_451;
									goto BgL_loopz00_408;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* expand-struct */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2structzd2zzexpand_structz00(obj_t
		BgL_xz00_3, obj_t BgL_ez00_4)
	{
		{	/* Expand/struct.scm 23 */
			{
				obj_t BgL_namez00_13;
				obj_t BgL_slotsz00_14;

				if (PAIRP(BgL_xz00_3))
					{	/* Expand/struct.scm 24 */
						obj_t BgL_cdrzd2109zd2_19;

						BgL_cdrzd2109zd2_19 = CDR(BgL_xz00_3);
						if (PAIRP(BgL_cdrzd2109zd2_19))
							{	/* Expand/struct.scm 24 */
								BgL_namez00_13 = CAR(BgL_cdrzd2109zd2_19);
								BgL_slotsz00_14 = CDR(BgL_cdrzd2109zd2_19);
								BGl_matchzd2definezd2structurez12z12zz__match_normaliza7eza7
									(BgL_xz00_3);
								{	/* Expand/struct.scm 27 */
									long BgL_lenz00_23;

									BgL_lenz00_23 = bgl_list_length(BgL_slotsz00_14);
									{	/* Expand/struct.scm 27 */
										obj_t BgL_slotszd2namezd2_24;

										if (NULLP(BgL_slotsz00_14))
											{	/* Expand/struct.scm 28 */
												BgL_slotszd2namezd2_24 = BNIL;
											}
										else
											{	/* Expand/struct.scm 28 */
												obj_t BgL_head1016z00_302;

												{	/* Expand/struct.scm 28 */
													obj_t BgL_res1668z00_331;

													BgL_res1668z00_331 = MAKE_YOUNG_PAIR(BNIL, BNIL);
													BgL_head1016z00_302 = BgL_res1668z00_331;
												}
												{
													obj_t BgL_l1014z00_304;
													obj_t BgL_tail1017z00_305;

													BgL_l1014z00_304 = BgL_slotsz00_14;
													BgL_tail1017z00_305 = BgL_head1016z00_302;
												BgL_zc3z04anonymousza31635ze3z87_306:
													if (NULLP(BgL_l1014z00_304))
														{	/* Expand/struct.scm 28 */
															BgL_slotszd2namezd2_24 = CDR(BgL_head1016z00_302);
														}
													else
														{	/* Expand/struct.scm 28 */
															obj_t BgL_newtail1018z00_308;

															{	/* Expand/struct.scm 28 */
																obj_t BgL_arg1640z00_310;

																{	/* Expand/struct.scm 28 */
																	obj_t BgL_sz00_311;

																	BgL_sz00_311 =
																		CAR(((obj_t) BgL_l1014z00_304));
																	{

																		if (PAIRP(BgL_sz00_311))
																			{	/* Expand/struct.scm 29 */
																				obj_t BgL_cdrzd2125zd2_319;

																				BgL_cdrzd2125zd2_319 =
																					CDR(BgL_sz00_311);
																				if (PAIRP(BgL_cdrzd2125zd2_319))
																					{	/* Expand/struct.scm 29 */
																						if (NULLP(CDR
																								(BgL_cdrzd2125zd2_319)))
																							{	/* Expand/struct.scm 29 */
																								BgL_arg1640z00_310 =
																									CAR(BgL_sz00_311);
																							}
																						else
																							{	/* Expand/struct.scm 29 */
																							BgL_tagzd2118zd2_316:
																								BgL_arg1640z00_310 =
																									BGl_errorz00zz__errorz00
																									(BFALSE,
																									BGl_string1700z00zzexpand_structz00,
																									BgL_xz00_3);
																							}
																					}
																				else
																					{	/* Expand/struct.scm 29 */
																						goto BgL_tagzd2118zd2_316;
																					}
																			}
																		else
																			{	/* Expand/struct.scm 29 */
																				if (SYMBOLP(BgL_sz00_311))
																					{	/* Expand/struct.scm 29 */
																						BgL_arg1640z00_310 = BgL_sz00_311;
																					}
																				else
																					{	/* Expand/struct.scm 29 */
																						goto BgL_tagzd2118zd2_316;
																					}
																			}
																	}
																}
																{	/* Expand/struct.scm 28 */
																	obj_t BgL_res1676z00_345;

																	BgL_res1676z00_345 =
																		MAKE_YOUNG_PAIR(BgL_arg1640z00_310, BNIL);
																	BgL_newtail1018z00_308 = BgL_res1676z00_345;
																}
															}
															SET_CDR(BgL_tail1017z00_305,
																BgL_newtail1018z00_308);
															{	/* Expand/struct.scm 28 */
																obj_t BgL_arg1639z00_309;

																BgL_arg1639z00_309 =
																	CDR(((obj_t) BgL_l1014z00_304));
																{
																	obj_t BgL_tail1017z00_486;
																	obj_t BgL_l1014z00_485;

																	BgL_l1014z00_485 = BgL_arg1639z00_309;
																	BgL_tail1017z00_486 = BgL_newtail1018z00_308;
																	BgL_tail1017z00_305 = BgL_tail1017z00_486;
																	BgL_l1014z00_304 = BgL_l1014z00_485;
																	goto BgL_zc3z04anonymousza31635ze3z87_306;
																}
															}
														}
												}
											}
										{	/* Expand/struct.scm 28 */
											bool_t BgL_slotszd2valzf3z21_25;

											BgL_slotszd2valzf3z21_25 = ((bool_t) 0);
											{	/* Expand/struct.scm 39 */
												obj_t BgL_slotszd2valzd2_26;

												if (NULLP(BgL_slotsz00_14))
													{	/* Expand/struct.scm 40 */
														BgL_slotszd2valzd2_26 = BNIL;
													}
												else
													{	/* Expand/struct.scm 40 */
														obj_t BgL_head1021z00_274;

														{	/* Expand/struct.scm 40 */
															obj_t BgL_res1678z00_349;

															BgL_res1678z00_349 = MAKE_YOUNG_PAIR(BNIL, BNIL);
															BgL_head1021z00_274 = BgL_res1678z00_349;
														}
														{
															obj_t BgL_l1019z00_276;
															obj_t BgL_tail1022z00_277;

															BgL_l1019z00_276 = BgL_slotsz00_14;
															BgL_tail1022z00_277 = BgL_head1021z00_274;
														BgL_zc3z04anonymousza31606ze3z87_278:
															if (NULLP(BgL_l1019z00_276))
																{	/* Expand/struct.scm 40 */
																	BgL_slotszd2valzd2_26 =
																		CDR(BgL_head1021z00_274);
																}
															else
																{	/* Expand/struct.scm 40 */
																	obj_t BgL_newtail1023z00_280;

																	{	/* Expand/struct.scm 40 */
																		obj_t BgL_arg1612z00_282;

																		{	/* Expand/struct.scm 40 */
																			obj_t BgL_sz00_283;

																			BgL_sz00_283 =
																				CAR(((obj_t) BgL_l1019z00_276));
																			{

																				if (PAIRP(BgL_sz00_283))
																					{	/* Expand/struct.scm 41 */
																						obj_t BgL_cdrzd2138zd2_290;

																						BgL_cdrzd2138zd2_290 =
																							CDR(BgL_sz00_283);
																						if (PAIRP(BgL_cdrzd2138zd2_290))
																							{	/* Expand/struct.scm 41 */
																								if (NULLP(CDR
																										(BgL_cdrzd2138zd2_290)))
																									{	/* Expand/struct.scm 41 */
																										obj_t BgL_arg1626z00_294;

																										BgL_arg1626z00_294 =
																											CAR(BgL_cdrzd2138zd2_290);
																										BgL_slotszd2valzf3z21_25 =
																											((bool_t) 1);
																										BgL_arg1612z00_282 =
																											BgL_arg1626z00_294;
																									}
																								else
																									{	/* Expand/struct.scm 41 */
																									BgL_tagzd2133zd2_287:
																										BgL_arg1612z00_282 =
																											BGl_errorz00zz__errorz00
																											(BFALSE,
																											BGl_string1700z00zzexpand_structz00,
																											BgL_xz00_3);
																									}
																							}
																						else
																							{	/* Expand/struct.scm 41 */
																								goto BgL_tagzd2133zd2_287;
																							}
																					}
																				else
																					{	/* Expand/struct.scm 41 */
																						if (SYMBOLP(BgL_sz00_283))
																							{	/* Expand/struct.scm 41 */
																								BgL_arg1612z00_282 =
																									CNST_TABLE_REF(((long) 0));
																							}
																						else
																							{	/* Expand/struct.scm 41 */
																								goto BgL_tagzd2133zd2_287;
																							}
																					}
																			}
																		}
																		{	/* Expand/struct.scm 40 */
																			obj_t BgL_res1686z00_362;

																			BgL_res1686z00_362 =
																				MAKE_YOUNG_PAIR(BgL_arg1612z00_282,
																				BNIL);
																			BgL_newtail1023z00_280 =
																				BgL_res1686z00_362;
																		}
																	}
																	SET_CDR(BgL_tail1022z00_277,
																		BgL_newtail1023z00_280);
																	{	/* Expand/struct.scm 40 */
																		obj_t BgL_arg1611z00_281;

																		BgL_arg1611z00_281 =
																			CDR(((obj_t) BgL_l1019z00_276));
																		{
																			obj_t BgL_tail1022z00_513;
																			obj_t BgL_l1019z00_512;

																			BgL_l1019z00_512 = BgL_arg1611z00_281;
																			BgL_tail1022z00_513 =
																				BgL_newtail1023z00_280;
																			BgL_tail1022z00_277 = BgL_tail1022z00_513;
																			BgL_l1019z00_276 = BgL_l1019z00_512;
																			goto BgL_zc3z04anonymousza31606ze3z87_278;
																		}
																	}
																}
														}
													}
												{	/* Expand/struct.scm 40 */

													{	/* Expand/struct.scm 57 */
														obj_t BgL_arg1031z00_27;

														{	/* Expand/struct.scm 57 */
															obj_t BgL_arg1032z00_28;
															obj_t BgL_arg1033z00_29;

															{	/* Expand/struct.scm 57 */
																obj_t BgL_arg1035z00_30;

																{	/* Expand/struct.scm 57 */
																	obj_t BgL_arg1036z00_31;

																	{	/* Expand/struct.scm 57 */
																		obj_t BgL_arg1037z00_32;

																		{	/* Expand/struct.scm 57 */
																			obj_t BgL_arg1038z00_33;
																			obj_t BgL_arg1039z00_34;

																			{	/* Expand/struct.scm 57 */
																				obj_t BgL_arg1040z00_35;

																				{	/* Expand/struct.scm 57 */
																					obj_t BgL_arg1041z00_36;

																					{	/* Expand/struct.scm 57 */
																						obj_t BgL_arg1042z00_37;
																						obj_t BgL_arg1043z00_38;

																						{	/* Expand/struct.scm 57 */
																							obj_t BgL_res1687z00_367;

																							{	/* Expand/struct.scm 57 */
																								obj_t BgL_symbolz00_365;

																								BgL_symbolz00_365 =
																									CNST_TABLE_REF(((long) 1));
																								{	/* Expand/struct.scm 57 */
																									obj_t BgL_arg1466z00_366;

																									BgL_arg1466z00_366 =
																										SYMBOL_TO_STRING
																										(BgL_symbolz00_365);
																									BgL_res1687z00_367 =
																										BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																										(BgL_arg1466z00_366);
																							}}
																							BgL_arg1042z00_37 =
																								BgL_res1687z00_367;
																						}
																						{	/* Expand/struct.scm 57 */
																							obj_t BgL_res1688z00_370;

																							{	/* Expand/struct.scm 57 */
																								obj_t BgL_arg1466z00_369;

																								BgL_arg1466z00_369 =
																									SYMBOL_TO_STRING(
																									((obj_t) BgL_namez00_13));
																								BgL_res1688z00_370 =
																									BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																									(BgL_arg1466z00_369);
																							}
																							BgL_arg1043z00_38 =
																								BgL_res1688z00_370;
																						}
																						BgL_arg1041z00_36 =
																							string_append(BgL_arg1042z00_37,
																							BgL_arg1043z00_38);
																					}
																					BgL_arg1040z00_35 =
																						bstring_to_symbol
																						(BgL_arg1041z00_36);
																				}
																				BgL_arg1038z00_33 =
																					MAKE_YOUNG_PAIR(BgL_arg1040z00_35,
																					CNST_TABLE_REF(((long) 2)));
																			}
																			{	/* Expand/struct.scm 58 */
																				obj_t BgL_arg1044z00_39;

																				if (BgL_slotszd2valzf3z21_25)
																					{	/* Expand/struct.scm 59 */
																						obj_t BgL_arg1045z00_40;

																						{	/* Expand/struct.scm 59 */
																							obj_t BgL_arg1047z00_41;
																							obj_t BgL_arg1048z00_42;

																							{	/* Expand/struct.scm 59 */
																								obj_t BgL_arg1049z00_43;

																								BgL_arg1049z00_43 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 2)), BNIL);
																								BgL_arg1047z00_41 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 3)),
																									BgL_arg1049z00_43);
																							}
																							{	/* Expand/struct.scm 60 */
																								obj_t BgL_arg1050z00_44;
																								obj_t BgL_arg1051z00_45;

																								{	/* Expand/struct.scm 60 */
																									obj_t BgL_arg1052z00_46;

																									{	/* Expand/struct.scm 60 */
																										obj_t BgL_arg1053z00_47;
																										obj_t BgL_arg1054z00_48;

																										{	/* Expand/struct.scm 60 */
																											obj_t BgL_arg1055z00_49;

																											{	/* Expand/struct.scm 60 */
																												obj_t BgL_arg1056z00_50;

																												{	/* Expand/struct.scm 60 */
																													obj_t
																														BgL_arg1057z00_51;
																													{	/* Expand/struct.scm 60 */
																														obj_t
																															BgL_arg1058z00_52;
																														{	/* Expand/struct.scm 60 */
																															obj_t
																																BgL_arg1059z00_53;
																															BgL_arg1059z00_53
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 2)),
																																BNIL);
																															BgL_arg1058z00_52
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 4)),
																																BgL_arg1059z00_53);
																														}
																														BgL_arg1057z00_51 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1058z00_52,
																															BNIL);
																													}
																													BgL_arg1056z00_50 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 5)),
																														BgL_arg1057z00_51);
																												}
																												BgL_arg1055z00_49 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1056z00_50,
																													BNIL);
																											}
																											BgL_arg1053z00_47 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														6)),
																												BgL_arg1055z00_49);
																										}
																										{	/* Expand/struct.scm 61 */
																											obj_t BgL_arg1060z00_54;
																											obj_t BgL_arg1061z00_55;

																											{	/* Expand/struct.scm 61 */
																												obj_t BgL_arg1062z00_56;

																												{	/* Expand/struct.scm 61 */
																													obj_t
																														BgL_arg1063z00_57;
																													BgL_arg1063z00_57 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 2)),
																														BNIL);
																													BgL_arg1062z00_56 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_13,
																														BgL_arg1063z00_57);
																												}
																												BgL_arg1060z00_54 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 7)),
																													BgL_arg1062z00_56);
																											}
																											{	/* Expand/struct.scm 62 */
																												obj_t BgL_arg1064z00_58;

																												{	/* Expand/struct.scm 62 */
																													obj_t
																														BgL_arg1065z00_59;
																													obj_t
																														BgL_arg1073z00_60;
																													{	/* Expand/struct.scm 62 */
																														obj_t
																															BgL_arg1074z00_61;
																														{	/* Expand/struct.scm 62 */
																															obj_t
																																BgL_arg1078z00_62;
																															BgL_arg1078z00_62
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 8)),
																																BNIL);
																															BgL_arg1074z00_61
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 9)),
																																BgL_arg1078z00_62);
																														}
																														BgL_arg1065z00_59 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 10)),
																															BgL_arg1074z00_61);
																													}
																													{	/* Expand/struct.scm 63 */
																														obj_t
																															BgL_arg1095z00_63;
																														obj_t
																															BgL_arg1099z00_64;
																														{	/* Expand/struct.scm 63 */
																															obj_t
																																BgL_arg1100z00_65;
																															BgL_arg1100z00_65
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_13,
																																BNIL);
																															BgL_arg1095z00_63
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 11)),
																																BgL_arg1100z00_65);
																														}
																														{	/* Expand/struct.scm 63 */
																															obj_t
																																BgL_arg1101z00_66;
																															{	/* Expand/struct.scm 63 */
																																obj_t
																																	BgL_arg1103z00_67;
																																{	/* Expand/struct.scm 63 */
																																	obj_t
																																		BgL_arg1109z00_68;
																																	BgL_arg1109z00_68
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				2)),
																																		BNIL);
																																	BgL_arg1103z00_67
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				12)),
																																		BgL_arg1109z00_68);
																																}
																																BgL_arg1101z00_66
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1103z00_67,
																																	BNIL);
																															}
																															BgL_arg1099z00_64
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_lenz00_23),
																																BgL_arg1101z00_66);
																														}
																														BgL_arg1073z00_60 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1095z00_63,
																															BgL_arg1099z00_64);
																													}
																													BgL_arg1064z00_58 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1065z00_59,
																														BgL_arg1073z00_60);
																												}
																												BgL_arg1061z00_55 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1064z00_58,
																													BNIL);
																											}
																											BgL_arg1054z00_48 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1060z00_54,
																												BgL_arg1061z00_55);
																										}
																										BgL_arg1052z00_46 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1053z00_47,
																											BgL_arg1054z00_48);
																									}
																									BgL_arg1050z00_44 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												13)),
																										BgL_arg1052z00_46);
																								}
																								{	/* Expand/struct.scm 64 */
																									obj_t BgL_arg1110z00_69;

																									BgL_arg1110z00_69 =
																										MAKE_YOUNG_PAIR
																										(BgL_namez00_13,
																										BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																										(BgL_slotszd2valzd2_26,
																											BNIL));
																									BgL_arg1051z00_45 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1110z00_69, BNIL);
																								}
																								BgL_arg1048z00_42 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1050z00_44,
																									BgL_arg1051z00_45);
																							}
																							BgL_arg1045z00_40 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1047z00_41,
																								BgL_arg1048z00_42);
																						}
																						BgL_arg1044z00_39 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 13)),
																							BgL_arg1045z00_40);
																					}
																				else
																					{	/* Expand/struct.scm 65 */
																						obj_t BgL_arg1114z00_71;

																						{	/* Expand/struct.scm 65 */
																							obj_t BgL_arg1115z00_72;
																							obj_t BgL_arg1116z00_73;

																							{	/* Expand/struct.scm 65 */
																								obj_t BgL_arg1117z00_74;

																								BgL_arg1117z00_74 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 2)), BNIL);
																								BgL_arg1115z00_72 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 3)),
																									BgL_arg1117z00_74);
																							}
																							{	/* Expand/struct.scm 66 */
																								obj_t BgL_arg1118z00_75;
																								obj_t BgL_arg1121z00_76;

																								{	/* Expand/struct.scm 66 */
																									obj_t BgL_arg1122z00_77;

																									{	/* Expand/struct.scm 66 */
																										obj_t BgL_arg1123z00_78;
																										obj_t BgL_arg1124z00_79;

																										{	/* Expand/struct.scm 66 */
																											obj_t BgL_arg1125z00_80;

																											{	/* Expand/struct.scm 66 */
																												obj_t BgL_arg1126z00_81;

																												{	/* Expand/struct.scm 66 */
																													obj_t
																														BgL_arg1127z00_82;
																													{	/* Expand/struct.scm 66 */
																														obj_t
																															BgL_arg1128z00_83;
																														{	/* Expand/struct.scm 66 */
																															obj_t
																																BgL_arg1129z00_84;
																															BgL_arg1129z00_84
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 2)),
																																BNIL);
																															BgL_arg1128z00_83
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 4)),
																																BgL_arg1129z00_84);
																														}
																														BgL_arg1127z00_82 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1128z00_83,
																															BNIL);
																													}
																													BgL_arg1126z00_81 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 5)),
																														BgL_arg1127z00_82);
																												}
																												BgL_arg1125z00_80 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1126z00_81,
																													BNIL);
																											}
																											BgL_arg1123z00_78 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														6)),
																												BgL_arg1125z00_80);
																										}
																										{	/* Expand/struct.scm 67 */
																											obj_t BgL_arg1133z00_85;
																											obj_t BgL_arg1134z00_86;

																											{	/* Expand/struct.scm 67 */
																												obj_t BgL_arg1140z00_87;

																												{	/* Expand/struct.scm 67 */
																													obj_t
																														BgL_arg1145z00_88;
																													BgL_arg1145z00_88 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 2)),
																														BNIL);
																													BgL_arg1140z00_87 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_13,
																														BgL_arg1145z00_88);
																												}
																												BgL_arg1133z00_85 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 7)),
																													BgL_arg1140z00_87);
																											}
																											{	/* Expand/struct.scm 68 */
																												obj_t BgL_arg1146z00_89;

																												{	/* Expand/struct.scm 68 */
																													obj_t
																														BgL_arg1155z00_90;
																													obj_t
																														BgL_arg1156z00_91;
																													{	/* Expand/struct.scm 68 */
																														obj_t
																															BgL_arg1165z00_92;
																														{	/* Expand/struct.scm 68 */
																															obj_t
																																BgL_arg1166z00_93;
																															BgL_arg1166z00_93
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 8)),
																																BNIL);
																															BgL_arg1165z00_92
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 9)),
																																BgL_arg1166z00_93);
																														}
																														BgL_arg1155z00_90 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 10)),
																															BgL_arg1165z00_92);
																													}
																													{	/* Expand/struct.scm 69 */
																														obj_t
																															BgL_arg1167z00_94;
																														obj_t
																															BgL_arg1169z00_95;
																														{	/* Expand/struct.scm 69 */
																															obj_t
																																BgL_arg1170z00_96;
																															BgL_arg1170z00_96
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_13,
																																BNIL);
																															BgL_arg1167z00_94
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 11)),
																																BgL_arg1170z00_96);
																														}
																														{	/* Expand/struct.scm 69 */
																															obj_t
																																BgL_arg1172z00_97;
																															{	/* Expand/struct.scm 69 */
																																obj_t
																																	BgL_arg1174z00_98;
																																{	/* Expand/struct.scm 69 */
																																	obj_t
																																		BgL_arg1175z00_99;
																																	BgL_arg1175z00_99
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				2)),
																																		BNIL);
																																	BgL_arg1174z00_98
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				12)),
																																		BgL_arg1175z00_99);
																																}
																																BgL_arg1172z00_97
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1174z00_98,
																																	BNIL);
																															}
																															BgL_arg1169z00_95
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_lenz00_23),
																																BgL_arg1172z00_97);
																														}
																														BgL_arg1156z00_91 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1167z00_94,
																															BgL_arg1169z00_95);
																													}
																													BgL_arg1146z00_89 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1155z00_90,
																														BgL_arg1156z00_91);
																												}
																												BgL_arg1134z00_86 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1146z00_89,
																													BNIL);
																											}
																											BgL_arg1124z00_79 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1133z00_85,
																												BgL_arg1134z00_86);
																										}
																										BgL_arg1122z00_77 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1123z00_78,
																											BgL_arg1124z00_79);
																									}
																									BgL_arg1118z00_75 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												13)),
																										BgL_arg1122z00_77);
																								}
																								{	/* Expand/struct.scm 70 */
																									obj_t BgL_arg1176z00_100;

																									{	/* Expand/struct.scm 70 */
																										obj_t BgL_arg1177z00_101;
																										obj_t BgL_arg1178z00_102;

																										{	/* Expand/struct.scm 70 */
																											obj_t BgL_arg1179z00_103;

																											{	/* Expand/struct.scm 70 */
																												obj_t
																													BgL_arg1186z00_104;
																												BgL_arg1186z00_104 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 8)), BNIL);
																												BgL_arg1179z00_103 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 9)),
																													BgL_arg1186z00_104);
																											}
																											BgL_arg1177z00_101 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														10)),
																												BgL_arg1179z00_103);
																										}
																										{	/* Expand/struct.scm 71 */
																											obj_t BgL_arg1190z00_105;
																											obj_t BgL_arg1194z00_106;

																											{	/* Expand/struct.scm 71 */
																												obj_t
																													BgL_arg1197z00_107;
																												BgL_arg1197z00_107 =
																													MAKE_YOUNG_PAIR
																													(BgL_namez00_13,
																													BNIL);
																												BgL_arg1190z00_105 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 11)),
																													BgL_arg1197z00_107);
																											}
																											{	/* Expand/struct.scm 71 */
																												obj_t
																													BgL_arg1201z00_108;
																												{	/* Expand/struct.scm 71 */
																													obj_t
																														BgL_arg1208z00_109;
																													{	/* Expand/struct.scm 71 */
																														obj_t
																															BgL_arg1211z00_110;
																														BgL_arg1211z00_110 =
																															MAKE_YOUNG_PAIR
																															(BNIL, BNIL);
																														BgL_arg1208z00_109 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 11)),
																															BgL_arg1211z00_110);
																													}
																													BgL_arg1201z00_108 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1208z00_109,
																														BNIL);
																												}
																												BgL_arg1194z00_106 =
																													MAKE_YOUNG_PAIR(BINT
																													(BgL_lenz00_23),
																													BgL_arg1201z00_108);
																											}
																											BgL_arg1178z00_102 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1190z00_105,
																												BgL_arg1194z00_106);
																										}
																										BgL_arg1176z00_100 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1177z00_101,
																											BgL_arg1178z00_102);
																									}
																									BgL_arg1121z00_76 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1176z00_100, BNIL);
																								}
																								BgL_arg1116z00_73 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1118z00_75,
																									BgL_arg1121z00_76);
																							}
																							BgL_arg1114z00_71 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1115z00_72,
																								BgL_arg1116z00_73);
																						}
																						BgL_arg1044z00_39 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 13)),
																							BgL_arg1114z00_71);
																					}
																				BgL_arg1039z00_34 =
																					MAKE_YOUNG_PAIR(BgL_arg1044z00_39,
																					BNIL);
																			}
																			BgL_arg1037z00_32 =
																				MAKE_YOUNG_PAIR(BgL_arg1038z00_33,
																				BgL_arg1039z00_34);
																		}
																		BgL_arg1036z00_31 =
																			MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																					14)), BgL_arg1037z00_32);
																	}
																	BgL_arg1035z00_30 =
																		BGl_epairifyz00zztools_miscz00
																		(BgL_arg1036z00_31, BgL_xz00_3);
																}
																BgL_arg1032z00_28 =
																	PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																	BgL_arg1035z00_30, BgL_ez00_4, BEOA);
															}
															{	/* Expand/struct.scm 76 */
																obj_t BgL_arg1216z00_111;
																obj_t BgL_arg1221z00_112;

																{	/* Expand/struct.scm 76 */
																	obj_t BgL_arg1223z00_113;

																	{	/* Expand/struct.scm 76 */
																		obj_t BgL_arg1225z00_114;

																		{	/* Expand/struct.scm 76 */
																			obj_t BgL_arg1227z00_115;

																			{	/* Expand/struct.scm 76 */
																				obj_t BgL_arg1229z00_116;
																				obj_t BgL_arg1232z00_117;

																				BgL_arg1229z00_116 =
																					MAKE_YOUNG_PAIR(BgL_namez00_13,
																					BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																					(BgL_slotszd2namezd2_24, BNIL));
																				{	/* Expand/struct.scm 77 */
																					obj_t BgL_arg1242z00_119;

																					{	/* Expand/struct.scm 77 */
																						obj_t BgL_arg1243z00_120;

																						{	/* Expand/struct.scm 77 */
																							obj_t BgL_arg1245z00_121;
																							obj_t BgL_arg1246z00_122;

																							{	/* Expand/struct.scm 77 */
																								obj_t BgL_arg1247z00_123;

																								{	/* Expand/struct.scm 77 */
																									obj_t BgL_arg1250z00_124;

																									{	/* Expand/struct.scm 77 */
																										obj_t BgL_arg1252z00_125;

																										{	/* Expand/struct.scm 77 */
																											obj_t BgL_arg1253z00_126;

																											{	/* Expand/struct.scm 77 */
																												obj_t
																													BgL_arg1254z00_127;
																												obj_t
																													BgL_arg1256z00_128;
																												{	/* Expand/struct.scm 77 */
																													obj_t
																														BgL_arg1258z00_129;
																													BgL_arg1258z00_129 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_13,
																														BNIL);
																													BgL_arg1254z00_127 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BgL_arg1258z00_129);
																												}
																												BgL_arg1256z00_128 =
																													MAKE_YOUNG_PAIR(BINT
																													(BgL_lenz00_23),
																													BNIL);
																												BgL_arg1253z00_126 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1254z00_127,
																													BgL_arg1256z00_128);
																											}
																											BgL_arg1252z00_125 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														15)),
																												BgL_arg1253z00_126);
																										}
																										BgL_arg1250z00_124 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1252z00_125,
																											BNIL);
																									}
																									BgL_arg1247z00_123 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												16)),
																										BgL_arg1250z00_124);
																								}
																								BgL_arg1245z00_121 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1247z00_123, BNIL);
																							}
																							{	/* Expand/struct.scm 78 */
																								obj_t BgL_arg1263z00_130;
																								obj_t BgL_arg1268z00_131;

																								{
																									obj_t BgL_slotsz00_134;
																									obj_t BgL_resz00_135;

																									BgL_slotsz00_134 =
																										BgL_slotszd2namezd2_24;
																									BgL_resz00_135 = BNIL;
																								BgL_zc3z04anonymousza31269ze3z87_136:
																									if (NULLP
																										(BgL_slotsz00_134))
																										{	/* Expand/struct.scm 80 */
																											BgL_arg1263z00_130 =
																												BgL_resz00_135;
																										}
																									else
																										{	/* Expand/struct.scm 82 */
																											obj_t BgL_arg1271z00_138;
																											obj_t BgL_arg1273z00_139;

																											BgL_arg1271z00_138 =
																												CDR(
																												((obj_t)
																													BgL_slotsz00_134));
																											{	/* Expand/struct.scm 85 */
																												obj_t
																													BgL_arg1274z00_140;
																												{	/* Expand/struct.scm 85 */
																													obj_t
																														BgL_arg1275z00_141;
																													obj_t
																														BgL_arg1276z00_142;
																													{	/* Expand/struct.scm 85 */
																														obj_t
																															BgL_arg1277z00_143;
																														BgL_arg1277z00_143 =
																															CAR(((obj_t)
																																BgL_slotsz00_134));
																														{	/* Expand/struct.scm 83 */
																															obj_t
																																BgL_list1278z00_144;
																															{	/* Expand/struct.scm 83 */
																																obj_t
																																	BgL_arg1280z00_145;
																																{	/* Expand/struct.scm 83 */
																																	obj_t
																																		BgL_arg1281z00_146;
																																	{	/* Expand/struct.scm 83 */
																																		obj_t
																																			BgL_arg1282z00_147;
																																		BgL_arg1282z00_147
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					17)),
																																			BNIL);
																																		BgL_arg1281z00_146
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1277z00_143,
																																			BgL_arg1282z00_147);
																																	}
																																	BgL_arg1280z00_145
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				18)),
																																		BgL_arg1281z00_146);
																																}
																																BgL_list1278z00_144
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_namez00_13,
																																	BgL_arg1280z00_145);
																															}
																															BgL_arg1275z00_141
																																=
																																BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																																(BgL_list1278z00_144);
																													}}
																													{	/* Expand/struct.scm 88 */
																														obj_t
																															BgL_arg1284z00_148;
																														{	/* Expand/struct.scm 88 */
																															obj_t
																																BgL_arg1285z00_149;
																															BgL_arg1285z00_149
																																=
																																CAR(((obj_t)
																																	BgL_slotsz00_134));
																															BgL_arg1284z00_148
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1285z00_149,
																																BNIL);
																														}
																														BgL_arg1276z00_142 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 16)),
																															BgL_arg1284z00_148);
																													}
																													BgL_arg1274z00_140 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1275z00_141,
																														BgL_arg1276z00_142);
																												}
																												BgL_arg1273z00_139 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1274z00_140,
																													BgL_resz00_135);
																											}
																											{
																												obj_t BgL_resz00_683;
																												obj_t BgL_slotsz00_682;

																												BgL_slotsz00_682 =
																													BgL_arg1271z00_138;
																												BgL_resz00_683 =
																													BgL_arg1273z00_139;
																												BgL_resz00_135 =
																													BgL_resz00_683;
																												BgL_slotsz00_134 =
																													BgL_slotsz00_682;
																												goto
																													BgL_zc3z04anonymousza31269ze3z87_136;
																											}
																										}
																								}
																								BgL_arg1268z00_131 =
																									MAKE_YOUNG_PAIR(CNST_TABLE_REF
																									(((long) 16)), BNIL);
																								BgL_arg1246z00_122 =
																									BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																									(BgL_arg1263z00_130,
																									BgL_arg1268z00_131);
																							}
																							BgL_arg1243z00_120 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1245z00_121,
																								BgL_arg1246z00_122);
																						}
																						BgL_arg1242z00_119 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 19)),
																							BgL_arg1243z00_120);
																					}
																					BgL_arg1232z00_117 =
																						MAKE_YOUNG_PAIR(BgL_arg1242z00_119,
																						BNIL);
																				}
																				BgL_arg1227z00_115 =
																					MAKE_YOUNG_PAIR(BgL_arg1229z00_116,
																					BgL_arg1232z00_117);
																			}
																			BgL_arg1225z00_114 =
																				MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																						14)), BgL_arg1227z00_115);
																		}
																		BgL_arg1223z00_113 =
																			BGl_epairifyz00zztools_miscz00
																			(BgL_arg1225z00_114, BgL_xz00_3);
																	}
																	BgL_arg1216z00_111 =
																		PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																		BgL_arg1223z00_113, BgL_ez00_4, BEOA);
																}
																{	/* Expand/struct.scm 96 */
																	obj_t BgL_arg1286z00_151;
																	obj_t BgL_arg1287z00_152;

																	{	/* Expand/struct.scm 96 */
																		obj_t BgL_arg1288z00_153;

																		{	/* Expand/struct.scm 96 */
																			obj_t BgL_arg1289z00_154;

																			{	/* Expand/struct.scm 96 */
																				obj_t BgL_arg1290z00_155;

																				{	/* Expand/struct.scm 96 */
																					obj_t BgL_arg1291z00_156;
																					obj_t BgL_arg1292z00_157;

																					{	/* Expand/struct.scm 96 */
																						obj_t BgL_arg1295z00_158;
																						obj_t BgL_arg1296z00_159;

																						{	/* Expand/struct.scm 96 */
																							obj_t BgL_arg1297z00_160;

																							{	/* Expand/struct.scm 96 */
																								obj_t BgL_arg1298z00_161;
																								obj_t BgL_arg1299z00_162;

																								{	/* Expand/struct.scm 96 */
																									obj_t BgL_res1691z00_379;

																									{	/* Expand/struct.scm 96 */
																										obj_t BgL_arg1466z00_378;

																										BgL_arg1466z00_378 =
																											SYMBOL_TO_STRING(
																											((obj_t) BgL_namez00_13));
																										BgL_res1691z00_379 =
																											BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																											(BgL_arg1466z00_378);
																									}
																									BgL_arg1298z00_161 =
																										BgL_res1691z00_379;
																								}
																								{	/* Expand/struct.scm 96 */
																									obj_t BgL_res1692z00_382;

																									{	/* Expand/struct.scm 96 */
																										obj_t BgL_symbolz00_380;

																										BgL_symbolz00_380 =
																											CNST_TABLE_REF(((long)
																												20));
																										{	/* Expand/struct.scm 96 */
																											obj_t BgL_arg1466z00_381;

																											BgL_arg1466z00_381 =
																												SYMBOL_TO_STRING
																												(BgL_symbolz00_380);
																											BgL_res1692z00_382 =
																												BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																												(BgL_arg1466z00_381);
																									}}
																									BgL_arg1299z00_162 =
																										BgL_res1692z00_382;
																								}
																								BgL_arg1297z00_160 =
																									string_append
																									(BgL_arg1298z00_161,
																									BgL_arg1299z00_162);
																							}
																							BgL_arg1295z00_158 =
																								bstring_to_symbol
																								(BgL_arg1297z00_160);
																						}
																						BgL_arg1296z00_159 =
																							MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																									(long) 21)), BNIL);
																						BgL_arg1291z00_156 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1295z00_158,
																							BgL_arg1296z00_159);
																					}
																					{	/* Expand/struct.scm 97 */
																						obj_t BgL_arg1300z00_163;

																						{	/* Expand/struct.scm 97 */
																							obj_t BgL_arg1301z00_164;

																							{	/* Expand/struct.scm 97 */
																								obj_t BgL_arg1303z00_165;
																								obj_t BgL_arg1304z00_166;

																								{	/* Expand/struct.scm 97 */
																									obj_t BgL_arg1306z00_167;

																									BgL_arg1306z00_167 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												21)), BNIL);
																									BgL_arg1303z00_165 =
																										MAKE_YOUNG_PAIR
																										(CNST_TABLE_REF(((long)
																												22)),
																										BgL_arg1306z00_167);
																								}
																								{	/* Expand/struct.scm 98 */
																									obj_t BgL_arg1307z00_168;
																									obj_t BgL_arg1308z00_169;

																									{	/* Expand/struct.scm 98 */
																										obj_t BgL_arg1309z00_170;

																										{	/* Expand/struct.scm 98 */
																											obj_t BgL_arg1310z00_171;
																											obj_t BgL_arg1311z00_172;

																											{	/* Expand/struct.scm 98 */
																												obj_t
																													BgL_arg1312z00_173;
																												obj_t
																													BgL_arg1314z00_174;
																												{	/* Expand/struct.scm 98 */
																													obj_t
																														BgL_arg1315z00_175;
																													{	/* Expand/struct.scm 98 */
																														obj_t
																															BgL_arg1316z00_176;
																														BgL_arg1316z00_176 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 8)),
																															BNIL);
																														BgL_arg1315z00_175 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 23)),
																															BgL_arg1316z00_176);
																													}
																													BgL_arg1312z00_173 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 10)),
																														BgL_arg1315z00_175);
																												}
																												BgL_arg1314z00_174 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 21)),
																													BNIL);
																												BgL_arg1310z00_171 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1312z00_173,
																													BgL_arg1314z00_174);
																											}
																											{	/* Expand/struct.scm 98 */
																												obj_t
																													BgL_arg1317z00_177;
																												{	/* Expand/struct.scm 98 */
																													obj_t
																														BgL_arg1319z00_178;
																													BgL_arg1319z00_178 =
																														MAKE_YOUNG_PAIR
																														(BgL_namez00_13,
																														BNIL);
																													BgL_arg1317z00_177 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 11)),
																														BgL_arg1319z00_178);
																												}
																												BgL_arg1311z00_172 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1317z00_177,
																													BNIL);
																											}
																											BgL_arg1309z00_170 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1310z00_171,
																												BgL_arg1311z00_172);
																										}
																										BgL_arg1307z00_168 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													24)),
																											BgL_arg1309z00_170);
																									}
																									BgL_arg1308z00_169 =
																										MAKE_YOUNG_PAIR(BFALSE,
																										BNIL);
																									BgL_arg1304z00_166 =
																										MAKE_YOUNG_PAIR
																										(BgL_arg1307z00_168,
																										BgL_arg1308z00_169);
																								}
																								BgL_arg1301z00_164 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1303z00_165,
																									BgL_arg1304z00_166);
																							}
																							BgL_arg1300z00_163 =
																								MAKE_YOUNG_PAIR(CNST_TABLE_REF((
																										(long) 13)),
																								BgL_arg1301z00_164);
																						}
																						BgL_arg1292z00_157 =
																							MAKE_YOUNG_PAIR
																							(BgL_arg1300z00_163, BNIL);
																					}
																					BgL_arg1290z00_155 =
																						MAKE_YOUNG_PAIR(BgL_arg1291z00_156,
																						BgL_arg1292z00_157);
																				}
																				BgL_arg1289z00_154 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							14)), BgL_arg1290z00_155);
																			}
																			BgL_arg1288z00_153 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1289z00_154, BgL_xz00_3);
																		}
																		BgL_arg1286z00_151 =
																			PROCEDURE_ENTRY(BgL_ez00_4) (BgL_ez00_4,
																			BgL_arg1288z00_153, BgL_ez00_4, BEOA);
																	}
																	{	/* Expand/struct.scm 103 */
																		obj_t BgL_g1013z00_179;

																		BgL_g1013z00_179 =
																			CNST_TABLE_REF(((long) 25));
																		{
																			long BgL_iz00_181;
																			obj_t BgL_slotsz00_182;
																			obj_t BgL_resz00_183;

																			BgL_iz00_181 = ((long) 0);
																			BgL_slotsz00_182 = BgL_slotszd2namezd2_24;
																			BgL_resz00_183 = BgL_g1013z00_179;
																		BgL_zc3z04anonymousza31320ze3z87_184:
																			if ((BgL_iz00_181 == BgL_lenz00_23))
																				{	/* Expand/struct.scm 106 */
																					BgL_arg1287z00_152 = BgL_resz00_183;
																				}
																			else
																				{	/* Expand/struct.scm 108 */
																					obj_t BgL_prz00_186;

																					BgL_prz00_186 =
																						CAR(((obj_t) BgL_slotsz00_182));
																					{	/* Expand/struct.scm 109 */
																						long BgL_arg1322z00_187;
																						obj_t BgL_arg1324z00_188;
																						obj_t BgL_arg1325z00_189;

																						BgL_arg1322z00_187 =
																							(BgL_iz00_181 + ((long) 1));
																						BgL_arg1324z00_188 =
																							CDR(((obj_t) BgL_slotsz00_182));
																						{	/* Expand/struct.scm 116 */
																							obj_t BgL_arg1326z00_190;
																							obj_t BgL_arg1327z00_191;

																							{	/* Expand/struct.scm 116 */
																								obj_t BgL_arg1328z00_192;

																								{	/* Expand/struct.scm 116 */
																									obj_t BgL_arg1329z00_193;

																									{	/* Expand/struct.scm 116 */
																										obj_t BgL_arg1330z00_194;

																										{	/* Expand/struct.scm 116 */
																											obj_t BgL_arg1331z00_195;
																											obj_t BgL_arg1334z00_196;

																											{	/* Expand/struct.scm 116 */
																												obj_t
																													BgL_arg1335z00_197;
																												obj_t
																													BgL_arg1337z00_198;
																												{	/* Expand/struct.scm 116 */
																													obj_t
																														BgL_list1338z00_199;
																													{	/* Expand/struct.scm 116 */
																														obj_t
																															BgL_arg1339z00_200;
																														{	/* Expand/struct.scm 116 */
																															obj_t
																																BgL_arg1340z00_201;
																															BgL_arg1340z00_201
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_prz00_186,
																																BNIL);
																															BgL_arg1339z00_200
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 18)),
																																BgL_arg1340z00_201);
																														}
																														BgL_list1338z00_199
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_namez00_13,
																															BgL_arg1339z00_200);
																													}
																													BgL_arg1335z00_197 =
																														BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																														(BgL_list1338z00_199);
																												}
																												BgL_arg1337z00_198 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 26)),
																													BNIL);
																												BgL_arg1331z00_195 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1335z00_197,
																													BgL_arg1337z00_198);
																											}
																											{	/* Expand/struct.scm 117 */
																												obj_t
																													BgL_arg1344z00_202;
																												if (CBOOL
																													(BGl_za2unsafezd2structza2zd2zzengine_paramz00))
																													{	/* Expand/struct.scm 118 */
																														obj_t
																															BgL_arg1345z00_203;
																														obj_t
																															BgL_arg1346z00_204;
																														{	/* Expand/struct.scm 118 */
																															obj_t
																																BgL_arg1347z00_205;
																															{	/* Expand/struct.scm 118 */
																																obj_t
																																	BgL_arg1348z00_206;
																																BgL_arg1348z00_206
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 8)),
																																	BNIL);
																																BgL_arg1347z00_205
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 27)),
																																	BgL_arg1348z00_206);
																															}
																															BgL_arg1345z00_203
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 10)),
																																BgL_arg1347z00_205);
																														}
																														{	/* Expand/struct.scm 118 */
																															obj_t
																																BgL_arg1351z00_207;
																															BgL_arg1351z00_207
																																=
																																MAKE_YOUNG_PAIR
																																(BINT
																																(BgL_iz00_181),
																																BNIL);
																															BgL_arg1346z00_204
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 26)),
																																BgL_arg1351z00_207);
																														}
																														BgL_arg1344z00_202 =
																															MAKE_YOUNG_PAIR
																															(BgL_arg1345z00_203,
																															BgL_arg1346z00_204);
																													}
																												else
																													{	/* Expand/struct.scm 119 */
																														obj_t
																															BgL_arg1352z00_208;
																														{	/* Expand/struct.scm 119 */
																															obj_t
																																BgL_arg1357z00_209;
																															obj_t
																																BgL_arg1360z00_210;
																															{	/* Expand/struct.scm 119 */
																																obj_t
																																	BgL_arg1361z00_211;
																																{	/* Expand/struct.scm 119 */
																																	obj_t
																																		BgL_arg1363z00_212;
																																	obj_t
																																		BgL_arg1364z00_213;
																																	{	/* Expand/struct.scm 119 */
																																		obj_t
																																			BgL_arg1367z00_214;
																																		obj_t
																																			BgL_arg1370z00_215;
																																		{	/* Expand/struct.scm 119 */
																																			obj_t
																																				BgL_arg1371z00_216;
																																			{	/* Expand/struct.scm 119 */
																																				obj_t
																																					BgL_arg1372z00_217;
																																				BgL_arg1372z00_217
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 8)), BNIL);
																																				BgL_arg1371z00_216
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 23)), BgL_arg1372z00_217);
																																			}
																																			BgL_arg1367z00_214
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						10)),
																																				BgL_arg1371z00_216);
																																		}
																																		BgL_arg1370z00_215
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					26)),
																																			BNIL);
																																		BgL_arg1363z00_212
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1367z00_214,
																																			BgL_arg1370z00_215);
																																	}
																																	{	/* Expand/struct.scm 119 */
																																		obj_t
																																			BgL_arg1381z00_218;
																																		{	/* Expand/struct.scm 119 */
																																			obj_t
																																				BgL_arg1382z00_219;
																																			BgL_arg1382z00_219
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_namez00_13,
																																				BNIL);
																																			BgL_arg1381z00_218
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						11)),
																																				BgL_arg1382z00_219);
																																		}
																																		BgL_arg1364z00_213
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1381z00_218,
																																			BNIL);
																																	}
																																	BgL_arg1361z00_211
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1363z00_212,
																																		BgL_arg1364z00_213);
																																}
																																BgL_arg1357z00_209
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 24)),
																																	BgL_arg1361z00_211);
																															}
																															{	/* Expand/struct.scm 120 */
																																obj_t
																																	BgL_arg1383z00_220;
																																obj_t
																																	BgL_arg1384z00_221;
																																{	/* Expand/struct.scm 120 */
																																	obj_t
																																		BgL_arg1385z00_222;
																																	{	/* Expand/struct.scm 120 */
																																		obj_t
																																			BgL_arg1386z00_223;
																																		BgL_arg1386z00_223
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BINT
																																			(BgL_iz00_181),
																																			BNIL);
																																		BgL_arg1385z00_222
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					26)),
																																			BgL_arg1386z00_223);
																																	}
																																	BgL_arg1383z00_220
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				28)),
																																		BgL_arg1385z00_222);
																																}
																																{	/* Expand/struct.scm 123 */
																																	obj_t
																																		BgL_arg1387z00_224;
																																	{	/* Expand/struct.scm 123 */
																																		obj_t
																																			BgL_arg1388z00_225;
																																		{	/* Expand/struct.scm 123 */
																																			obj_t
																																				BgL_arg1394z00_226;
																																			{	/* Expand/struct.scm 123 */
																																				obj_t
																																					BgL_arg1396z00_227;
																																				obj_t
																																					BgL_arg1417z00_228;
																																				{	/* Expand/struct.scm 123 */
																																					obj_t
																																						BgL_res1696z00_394;
																																					{	/* Expand/struct.scm 123 */
																																						obj_t
																																							BgL_arg1466z00_393;
																																						BgL_arg1466z00_393
																																							=
																																							SYMBOL_TO_STRING
																																							(((obj_t) BgL_namez00_13));
																																						BgL_res1696z00_394
																																							=
																																							BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																							(BgL_arg1466z00_393);
																																					}
																																					BgL_arg1396z00_227
																																						=
																																						BgL_res1696z00_394;
																																				}
																																				BgL_arg1417z00_228
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 26)), BNIL);
																																				BgL_arg1394z00_226
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1396z00_227,
																																					BgL_arg1417z00_228);
																																			}
																																			BgL_arg1388z00_225
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BGl_string1701z00zzexpand_structz00,
																																				BgL_arg1394z00_226);
																																		}
																																		BgL_arg1387z00_224
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					29)),
																																			BgL_arg1388z00_225);
																																	}
																																	BgL_arg1384z00_221
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1387z00_224,
																																		BNIL);
																																}
																																BgL_arg1360z00_210
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1383z00_220,
																																	BgL_arg1384z00_221);
																															}
																															BgL_arg1352z00_208
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1357z00_209,
																																BgL_arg1360z00_210);
																														}
																														BgL_arg1344z00_202 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 13)),
																															BgL_arg1352z00_208);
																													}
																												BgL_arg1334z00_196 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1344z00_202,
																													BNIL);
																											}
																											BgL_arg1330z00_194 =
																												MAKE_YOUNG_PAIR
																												(BgL_arg1331z00_195,
																												BgL_arg1334z00_196);
																										}
																										BgL_arg1329z00_193 =
																											MAKE_YOUNG_PAIR
																											(CNST_TABLE_REF(((long)
																													14)),
																											BgL_arg1330z00_194);
																									}
																									BgL_arg1328z00_192 =
																										BGl_epairifyz00zztools_miscz00
																										(BgL_arg1329z00_193,
																										BgL_xz00_3);
																								}
																								BgL_arg1326z00_190 =
																									PROCEDURE_ENTRY(BgL_ez00_4)
																									(BgL_ez00_4,
																									BgL_arg1328z00_192,
																									BgL_ez00_4, BEOA);
																							}
																							{	/* Expand/struct.scm 132 */
																								obj_t BgL_arg1418z00_229;

																								{	/* Expand/struct.scm 132 */
																									obj_t BgL_arg1421z00_230;

																									{	/* Expand/struct.scm 132 */
																										obj_t BgL_arg1422z00_231;

																										{	/* Expand/struct.scm 132 */
																											obj_t BgL_arg1441z00_232;

																											{	/* Expand/struct.scm 132 */
																												obj_t
																													BgL_arg1442z00_233;
																												obj_t
																													BgL_arg1448z00_234;
																												{	/* Expand/struct.scm 132 */
																													obj_t
																														BgL_arg1449z00_235;
																													obj_t
																														BgL_arg1461z00_236;
																													{	/* Expand/struct.scm 132 */
																														obj_t
																															BgL_list1462z00_237;
																														{	/* Expand/struct.scm 132 */
																															obj_t
																																BgL_arg1464z00_238;
																															{	/* Expand/struct.scm 132 */
																																obj_t
																																	BgL_arg1465z00_239;
																																{	/* Expand/struct.scm 132 */
																																	obj_t
																																		BgL_arg1474z00_240;
																																	BgL_arg1474z00_240
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				17)),
																																		BNIL);
																																	BgL_arg1465z00_239
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_prz00_186,
																																		BgL_arg1474z00_240);
																																}
																																BgL_arg1464z00_238
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 18)),
																																	BgL_arg1465z00_239);
																															}
																															BgL_list1462z00_237
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_namez00_13,
																																BgL_arg1464z00_238);
																														}
																														BgL_arg1449z00_235 =
																															BGl_symbolzd2appendzd2zz__r4_symbols_6_4z00
																															(BgL_list1462z00_237);
																													}
																													{	/* Expand/struct.scm 132 */
																														obj_t
																															BgL_arg1476z00_241;
																														BgL_arg1476z00_241 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 30)),
																															BNIL);
																														BgL_arg1461z00_236 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 26)),
																															BgL_arg1476z00_241);
																													}
																													BgL_arg1442z00_233 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1449z00_235,
																														BgL_arg1461z00_236);
																												}
																												{	/* Expand/struct.scm 133 */
																													obj_t
																														BgL_arg1477z00_242;
																													if (CBOOL
																														(BGl_za2unsafezd2structza2zd2zzengine_paramz00))
																														{	/* Expand/struct.scm 134 */
																															obj_t
																																BgL_arg1489z00_243;
																															obj_t
																																BgL_arg1493z00_244;
																															{	/* Expand/struct.scm 134 */
																																obj_t
																																	BgL_arg1495z00_245;
																																{	/* Expand/struct.scm 134 */
																																	obj_t
																																		BgL_arg1497z00_246;
																																	BgL_arg1497z00_246
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				8)),
																																		BNIL);
																																	BgL_arg1495z00_245
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				31)),
																																		BgL_arg1497z00_246);
																																}
																																BgL_arg1489z00_243
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 10)),
																																	BgL_arg1495z00_245);
																															}
																															{	/* Expand/struct.scm 134 */
																																obj_t
																																	BgL_arg1518z00_247;
																																{	/* Expand/struct.scm 134 */
																																	obj_t
																																		BgL_arg1521z00_248;
																																	BgL_arg1521z00_248
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				30)),
																																		BNIL);
																																	BgL_arg1518z00_247
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BINT
																																		(BgL_iz00_181),
																																		BgL_arg1521z00_248);
																																}
																																BgL_arg1493z00_244
																																	=
																																	MAKE_YOUNG_PAIR
																																	(CNST_TABLE_REF
																																	(((long) 26)),
																																	BgL_arg1518z00_247);
																															}
																															BgL_arg1477z00_242
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1489z00_243,
																																BgL_arg1493z00_244);
																														}
																													else
																														{	/* Expand/struct.scm 135 */
																															obj_t
																																BgL_arg1528z00_249;
																															{	/* Expand/struct.scm 135 */
																																obj_t
																																	BgL_arg1536z00_250;
																																obj_t
																																	BgL_arg1537z00_251;
																																{	/* Expand/struct.scm 135 */
																																	obj_t
																																		BgL_arg1540z00_252;
																																	{	/* Expand/struct.scm 135 */
																																		obj_t
																																			BgL_arg1552z00_253;
																																		obj_t
																																			BgL_arg1553z00_254;
																																		{	/* Expand/struct.scm 135 */
																																			obj_t
																																				BgL_arg1558z00_255;
																																			obj_t
																																				BgL_arg1561z00_256;
																																			{	/* Expand/struct.scm 135 */
																																				obj_t
																																					BgL_arg1564z00_257;
																																				{	/* Expand/struct.scm 135 */
																																					obj_t
																																						BgL_arg1565z00_258;
																																					BgL_arg1565z00_258
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 8)), BNIL);
																																					BgL_arg1564z00_257
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 23)), BgL_arg1565z00_258);
																																				}
																																				BgL_arg1558z00_255
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 10)), BgL_arg1564z00_257);
																																			}
																																			BgL_arg1561z00_256
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						26)),
																																				BNIL);
																																			BgL_arg1552z00_253
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1558z00_255,
																																				BgL_arg1561z00_256);
																																		}
																																		{	/* Expand/struct.scm 135 */
																																			obj_t
																																				BgL_arg1573z00_259;
																																			{	/* Expand/struct.scm 135 */
																																				obj_t
																																					BgL_arg1575z00_260;
																																				BgL_arg1575z00_260
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_namez00_13,
																																					BNIL);
																																				BgL_arg1573z00_259
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 11)), BgL_arg1575z00_260);
																																			}
																																			BgL_arg1553z00_254
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1573z00_259,
																																				BNIL);
																																		}
																																		BgL_arg1540z00_252
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1552z00_253,
																																			BgL_arg1553z00_254);
																																	}
																																	BgL_arg1536z00_250
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				24)),
																																		BgL_arg1540z00_252);
																																}
																																{	/* Expand/struct.scm 136 */
																																	obj_t
																																		BgL_arg1578z00_261;
																																	obj_t
																																		BgL_arg1582z00_262;
																																	{	/* Expand/struct.scm 136 */
																																		obj_t
																																			BgL_arg1584z00_263;
																																		{	/* Expand/struct.scm 136 */
																																			obj_t
																																				BgL_arg1588z00_264;
																																			{	/* Expand/struct.scm 136 */
																																				obj_t
																																					BgL_arg1589z00_265;
																																				BgL_arg1589z00_265
																																					=
																																					MAKE_YOUNG_PAIR
																																					(CNST_TABLE_REF
																																					(((long) 30)), BNIL);
																																				BgL_arg1588z00_264
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BINT
																																					(BgL_iz00_181),
																																					BgL_arg1589z00_265);
																																			}
																																			BgL_arg1584z00_263
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						26)),
																																				BgL_arg1588z00_264);
																																		}
																																		BgL_arg1578z00_261
																																			=
																																			MAKE_YOUNG_PAIR
																																			(CNST_TABLE_REF
																																			(((long)
																																					32)),
																																			BgL_arg1584z00_263);
																																	}
																																	{	/* Expand/struct.scm 139 */
																																		obj_t
																																			BgL_arg1592z00_266;
																																		{	/* Expand/struct.scm 139 */
																																			obj_t
																																				BgL_arg1593z00_267;
																																			{	/* Expand/struct.scm 139 */
																																				obj_t
																																					BgL_arg1597z00_268;
																																				{	/* Expand/struct.scm 139 */
																																					obj_t
																																						BgL_arg1599z00_269;
																																					obj_t
																																						BgL_arg1604z00_270;
																																					{	/* Expand/struct.scm 139 */
																																						obj_t
																																							BgL_res1697z00_397;
																																						{	/* Expand/struct.scm 139 */
																																							obj_t
																																								BgL_arg1466z00_396;
																																							BgL_arg1466z00_396
																																								=
																																								SYMBOL_TO_STRING
																																								(
																																								((obj_t) BgL_namez00_13));
																																							BgL_res1697z00_397
																																								=
																																								BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																																								(BgL_arg1466z00_396);
																																						}
																																						BgL_arg1599z00_269
																																							=
																																							BgL_res1697z00_397;
																																					}
																																					BgL_arg1604z00_270
																																						=
																																						MAKE_YOUNG_PAIR
																																						(CNST_TABLE_REF
																																						(((long) 26)), BNIL);
																																					BgL_arg1597z00_268
																																						=
																																						MAKE_YOUNG_PAIR
																																						(BgL_arg1599z00_269,
																																						BgL_arg1604z00_270);
																																				}
																																				BgL_arg1593z00_267
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BGl_string1702z00zzexpand_structz00,
																																					BgL_arg1597z00_268);
																																			}
																																			BgL_arg1592z00_266
																																				=
																																				MAKE_YOUNG_PAIR
																																				(CNST_TABLE_REF
																																				(((long)
																																						29)),
																																				BgL_arg1593z00_267);
																																		}
																																		BgL_arg1582z00_262
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1592z00_266,
																																			BNIL);
																																	}
																																	BgL_arg1537z00_251
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_arg1578z00_261,
																																		BgL_arg1582z00_262);
																																}
																																BgL_arg1528z00_249
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1536z00_250,
																																	BgL_arg1537z00_251);
																															}
																															BgL_arg1477z00_242
																																=
																																MAKE_YOUNG_PAIR
																																(CNST_TABLE_REF(
																																	((long) 13)),
																																BgL_arg1528z00_249);
																														}
																													BgL_arg1448z00_234 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1477z00_242,
																														BNIL);
																												}
																												BgL_arg1441z00_232 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1442z00_233,
																													BgL_arg1448z00_234);
																											}
																											BgL_arg1422z00_231 =
																												MAKE_YOUNG_PAIR
																												(CNST_TABLE_REF(((long)
																														14)),
																												BgL_arg1441z00_232);
																										}
																										BgL_arg1421z00_230 =
																											BGl_epairifyz00zztools_miscz00
																											(BgL_arg1422z00_231,
																											BgL_xz00_3);
																									}
																									BgL_arg1418z00_229 =
																										PROCEDURE_ENTRY(BgL_ez00_4)
																										(BgL_ez00_4,
																										BgL_arg1421z00_230,
																										BgL_ez00_4, BEOA);
																								}
																								BgL_arg1327z00_191 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1418z00_229,
																									BgL_resz00_183);
																							}
																							BgL_arg1325z00_189 =
																								MAKE_YOUNG_PAIR
																								(BgL_arg1326z00_190,
																								BgL_arg1327z00_191);
																						}
																						{
																							obj_t BgL_resz00_900;
																							obj_t BgL_slotsz00_899;
																							long BgL_iz00_898;

																							BgL_iz00_898 = BgL_arg1322z00_187;
																							BgL_slotsz00_899 =
																								BgL_arg1324z00_188;
																							BgL_resz00_900 =
																								BgL_arg1325z00_189;
																							BgL_resz00_183 = BgL_resz00_900;
																							BgL_slotsz00_182 =
																								BgL_slotsz00_899;
																							BgL_iz00_181 = BgL_iz00_898;
																							goto
																								BgL_zc3z04anonymousza31320ze3z87_184;
																						}
																					}
																				}
																		}
																	}
																	BgL_arg1221z00_112 =
																		MAKE_YOUNG_PAIR(BgL_arg1286z00_151,
																		BgL_arg1287z00_152);
																}
																BgL_arg1033z00_29 =
																	MAKE_YOUNG_PAIR(BgL_arg1216z00_111,
																	BgL_arg1221z00_112);
															}
															BgL_arg1031z00_27 =
																MAKE_YOUNG_PAIR(BgL_arg1032z00_28,
																BgL_arg1033z00_29);
														}
														return
															MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 33)),
															BgL_arg1031z00_27);
							}}}}}}}
						else
							{	/* Expand/struct.scm 24 */
							BgL_tagzd2102zd2_16:
								return
									BGl_errorz00zz__errorz00(BFALSE,
									BGl_string1700z00zzexpand_structz00, BgL_xz00_3);
							}
					}
				else
					{	/* Expand/struct.scm 24 */
						goto BgL_tagzd2102zd2_16;
					}
			}
		}

	}



/* &expand-struct */
	obj_t BGl_z62expandzd2structzb0zzexpand_structz00(obj_t BgL_envz00_403,
		obj_t BgL_xz00_404, obj_t BgL_ez00_405)
	{
		{	/* Expand/struct.scm 23 */
			return
				BGl_expandzd2structzd2zzexpand_structz00(BgL_xz00_404, BgL_ez00_405);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_structz00()
	{
		{	/* Expand/struct.scm 15 */
			BGl_modulezd2initializa7ationz75zzengine_paramz00(((long) 378368389),
				BSTRING_TO_STRING(BGl_string1703z00zzexpand_structz00));
			return
				BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1703z00zzexpand_structz00));
		}

	}

#ifdef __cplusplus
}
#endif
