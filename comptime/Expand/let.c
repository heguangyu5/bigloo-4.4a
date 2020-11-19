/*===========================================================================*/
/*   (Expand/let.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Expand/let.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62expandzd2letreczb0zzexpand_letz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31776ze3ze5zzexpand_letz00(obj_t);
	static obj_t BGl_objectzd2initzd2zzexpand_letz00();
	static obj_t BGl_z62expandzd2labelszb0zzexpand_letz00(obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzexpand_letz00();
	extern obj_t BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letza2z70zzexpand_letz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
	extern obj_t BGl_findzd2locationzd2zztools_locationz00(obj_t);
	BGL_IMPORT bool_t BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzexpand_letz00();
	static obj_t BGl_z62expandzd2letza2z12zzexpand_letz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31742ze3ze5zzexpand_letz00(obj_t);
	BGL_IMPORT obj_t BGl_gensymz00zz__r4_symbols_6_4z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzexpand_letz00(obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	BGL_IMPORT bool_t BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzexpand_letz00 = BUNSPEC;
	static obj_t BGl_toplevelzd2initzd2zzexpand_letz00();
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zzexpand_letz00();
	BGL_IMPORT obj_t BGl_filterzd2mapzd2zz__r4_control_features_6_9z00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letreczd2zzexpand_letz00(obj_t, obj_t);
	static obj_t BGl_z62zc3z04anonymousza31442ze3ze5zzexpand_letz00(obj_t, obj_t,
		obj_t);
	extern obj_t BGl_replacez12z12zztools_miscz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzexpand_letz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_epsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_argsz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__dssslz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_withzd2lexicalzd2zzexpand_epsz00(obj_t, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_expandzd2labelszd2zzexpand_letz00(obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zzexpand_letz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zzexpand_letz00();
	BGL_EXPORTED_DECL obj_t BGl_expandzd2letzd2zzexpand_letz00(obj_t, obj_t);
	static obj_t BGl_importedzd2moduleszd2initz00zzexpand_letz00();
	static obj_t BGl_z62expandzd2letzb0zzexpand_letz00(obj_t, obj_t, obj_t);
	extern obj_t BGl_argsza2zd2ze3argszd2listz41zztools_argsz00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzexpand_letz00(obj_t);
	static obj_t __cnst[6];


	   
		 
		DEFINE_STATIC_BGL_PROCEDURE(BGl_proc2088z00zzexpand_letz00,
		BgL_bgl_za762za7c3za704anonymo2100za7,
		BGl_z62zc3z04anonymousza31442ze3ze5zzexpand_letz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2labelszd2envz00zzexpand_letz00,
		BgL_bgl_za762expandza7d2labe2101z00,
		BGl_z62expandzd2labelszb0zzexpand_letz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letzd2envz00zzexpand_letz00,
		BgL_bgl_za762expandza7d2letza72102za7,
		BGl_z62expandzd2letzb0zzexpand_letz00, 0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letza2zd2envza2zzexpand_letz00,
		BgL_bgl_za762expandza7d2letza72103za7,
		BGl_z62expandzd2letza2z12zzexpand_letz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string2086z00zzexpand_letz00,
		BgL_bgl_string2086za700za7za7e2104za7, "Illegal `let*' form", 19);
	      DEFINE_STRING(BGl_string2087z00zzexpand_letz00,
		BgL_bgl_string2087za700za7za7e2105za7, "Illegal `named let' binding", 27);
	      DEFINE_STRING(BGl_string2089z00zzexpand_letz00,
		BgL_bgl_string2089za700za7za7e2106za7, "Illegal `let' binding", 21);
	      DEFINE_STRING(BGl_string2090z00zzexpand_letz00,
		BgL_bgl_string2090za700za7za7e2107za7, "Illegal `let' form", 18);
	      DEFINE_STRING(BGl_string2091z00zzexpand_letz00,
		BgL_bgl_string2091za700za7za7e2108za7, "Illegal `letrec' binding", 24);
	      DEFINE_STRING(BGl_string2092z00zzexpand_letz00,
		BgL_bgl_string2092za700za7za7e2109za7, "Illegal `letrec' form", 21);
	      DEFINE_STRING(BGl_string2093z00zzexpand_letz00,
		BgL_bgl_string2093za700za7za7e2110za7, "Illegal `labels' binding", 24);
	      DEFINE_STRING(BGl_string2094z00zzexpand_letz00,
		BgL_bgl_string2094za700za7za7e2111za7, "Illegal `labels' form", 21);
	      DEFINE_STRING(BGl_string2095z00zzexpand_letz00,
		BgL_bgl_string2095za700za7za7e2112za7, "expand_let", 10);
	      DEFINE_STRING(BGl_string2096z00zzexpand_letz00,
		BgL_bgl_string2096za700za7za7e2113za7, "labels _ letrec lambda let* let ",
		32);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2letreczd2envz00zzexpand_letz00,
		BgL_bgl_za762expandza7d2letr2114z00,
		BGl_z62expandzd2letreczb0zzexpand_letz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzexpand_letz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzexpand_letz00(long
		BgL_checksumz00_2489, char *BgL_fromz00_2490)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzexpand_letz00))
				{
					BGl_requirezd2initializa7ationz75zzexpand_letz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzexpand_letz00();
					BGl_libraryzd2moduleszd2initz00zzexpand_letz00();
					BGl_cnstzd2initzd2zzexpand_letz00();
					BGl_importedzd2moduleszd2initz00zzexpand_letz00();
					return BGl_toplevelzd2initzd2zzexpand_letz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__dssslz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"expand_let");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "expand_let");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			{	/* Expand/let.scm 15 */
				obj_t BgL_cportz00_2437;

				{	/* Expand/let.scm 15 */
					obj_t BgL_stringz00_2445;

					BgL_stringz00_2445 = BGl_string2096z00zzexpand_letz00;
					{	/* Expand/let.scm 15 */
						obj_t BgL_startz00_2446;

						BgL_startz00_2446 = BINT(((long) 0));
						{	/* Expand/let.scm 15 */
							obj_t BgL_endz00_2447;

							BgL_endz00_2447 =
								BINT(STRING_LENGTH(((obj_t) BgL_stringz00_2445)));
							{	/* Expand/let.scm 15 */

								BgL_cportz00_2437 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_2445, BgL_startz00_2446, BgL_endz00_2447);
				}}}}
				{
					long BgL_iz00_2438;

					BgL_iz00_2438 = ((long) 5);
				BgL_loopz00_2439:
					if ((BgL_iz00_2438 == ((long) -1)))
						{	/* Expand/let.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Expand/let.scm 15 */
							{	/* Expand/let.scm 15 */
								obj_t BgL_arg2098z00_2441;

								{	/* Expand/let.scm 15 */

									{	/* Expand/let.scm 15 */
										obj_t BgL_locationz00_2443;

										BgL_locationz00_2443 = BBOOL(((bool_t) 0));
										{	/* Expand/let.scm 15 */

											BgL_arg2098z00_2441 =
												BGl_readz00zz__readerz00(BgL_cportz00_2437,
												BgL_locationz00_2443);
										}
									}
								}
								{	/* Expand/let.scm 15 */
									int BgL_tmpz00_2518;

									BgL_tmpz00_2518 = (int) (BgL_iz00_2438);
									CNST_TABLE_SET(BgL_tmpz00_2518, BgL_arg2098z00_2441);
							}}
							{	/* Expand/let.scm 15 */
								int BgL_auxz00_2444;

								BgL_auxz00_2444 = (int) ((BgL_iz00_2438 - ((long) 1)));
								{
									long BgL_iz00_2523;

									BgL_iz00_2523 = (long) (BgL_auxz00_2444);
									BgL_iz00_2438 = BgL_iz00_2523;
									goto BgL_loopz00_2439;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}

	}



/* expand-let* */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letza2z70zzexpand_letz00(obj_t
		BgL_xz00_17, obj_t BgL_ez00_18)
	{
		{	/* Expand/let.scm 32 */
			{	/* Expand/let.scm 33 */
				obj_t BgL_oldzd2internalzd2_1358;

				BgL_oldzd2internalzd2_1358 =
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
				BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
				{	/* Expand/let.scm 35 */
					obj_t BgL_ez00_1359;

					BgL_ez00_1359 =
						BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_18);
					{	/* Expand/let.scm 35 */
						obj_t BgL_resz00_1360;

						{
							obj_t BgL_bindingsz00_1363;
							obj_t BgL_bodyz00_1364;
							obj_t BgL_bodyz00_1361;

							if (PAIRP(BgL_xz00_17))
								{	/* Expand/let.scm 36 */
									obj_t BgL_cdrzd2109zd2_1369;

									BgL_cdrzd2109zd2_1369 = CDR(BgL_xz00_17);
									if (PAIRP(BgL_cdrzd2109zd2_1369))
										{	/* Expand/let.scm 36 */
											obj_t BgL_cdrzd2112zd2_1371;

											BgL_cdrzd2112zd2_1371 = CDR(BgL_cdrzd2109zd2_1369);
											if (NULLP(CAR(BgL_cdrzd2109zd2_1369)))
												{	/* Expand/let.scm 36 */
													if (NULLP(BgL_cdrzd2112zd2_1371))
														{	/* Expand/let.scm 36 */
														BgL_tagzd2103zd2_1366:
															BgL_resz00_1360 =
																BGl_errorz00zz__errorz00(BFALSE,
																BGl_string2086z00zzexpand_letz00, BgL_xz00_17);
														}
													else
														{	/* Expand/let.scm 36 */
															BgL_bodyz00_1361 = BgL_cdrzd2112zd2_1371;
															{	/* Expand/let.scm 38 */
																obj_t BgL_arg1291z00_1381;

																{	/* Expand/let.scm 38 */
																	obj_t BgL_arg1292z00_1382;

																	{	/* Expand/let.scm 38 */
																		obj_t BgL_arg1295z00_1383;

																		{	/* Expand/let.scm 38 */
																			obj_t BgL_arg1296z00_1384;

																			{	/* Expand/let.scm 38 */
																				obj_t BgL_arg1297z00_1385;

																				BgL_arg1297z00_1385 =
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1361);
																				BgL_arg1296z00_1384 =
																					PROCEDURE_ENTRY(BgL_ez00_1359)
																					(BgL_ez00_1359, BgL_arg1297z00_1385,
																					BgL_ez00_1359, BEOA);
																			}
																			BgL_arg1295z00_1383 =
																				MAKE_YOUNG_PAIR(BgL_arg1296z00_1384,
																				BNIL);
																		}
																		BgL_arg1292z00_1382 =
																			MAKE_YOUNG_PAIR(BNIL,
																			BgL_arg1295z00_1383);
																	}
																	BgL_arg1291z00_1381 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																		BgL_arg1292z00_1382);
																}
																BgL_resz00_1360 =
																	BGl_replacez12z12zztools_miscz00(BgL_xz00_17,
																	BgL_arg1291z00_1381);
												}}}
											else
												{	/* Expand/let.scm 36 */
													obj_t BgL_carzd2127zd2_1376;
													obj_t BgL_cdrzd2128zd2_1377;

													BgL_carzd2127zd2_1376 =
														CAR(((obj_t) BgL_cdrzd2109zd2_1369));
													BgL_cdrzd2128zd2_1377 =
														CDR(((obj_t) BgL_cdrzd2109zd2_1369));
													if (PAIRP(BgL_carzd2127zd2_1376))
														{	/* Expand/let.scm 36 */
															if (NULLP(BgL_cdrzd2128zd2_1377))
																{	/* Expand/let.scm 36 */
																	goto BgL_tagzd2103zd2_1366;
																}
															else
																{	/* Expand/let.scm 36 */
																	BgL_bindingsz00_1363 = BgL_carzd2127zd2_1376;
																	BgL_bodyz00_1364 = BgL_cdrzd2128zd2_1377;
																	{	/* Expand/let.scm 40 */
																		obj_t BgL_slz00_1386;
																		obj_t BgL_bz00_1387;

																		{	/* Expand/let.scm 41 */
																			obj_t BgL_arg1301z00_1391;
																			obj_t BgL_arg1303z00_1392;

																			BgL_arg1301z00_1391 =
																				MAKE_YOUNG_PAIR(CDR
																				(BgL_bindingsz00_1363),
																				BgL_bodyz00_1364);
																			BgL_arg1303z00_1392 =
																				BGl_findzd2locationzd2zztools_locationz00
																				(CAR(BgL_bindingsz00_1363));
																			{	/* Expand/let.scm 40 */
																				obj_t BgL_res1964z00_2106;

																				{	/* Expand/let.scm 40 */
																					obj_t BgL_obj1z00_2105;

																					BgL_obj1z00_2105 =
																						CNST_TABLE_REF(((long) 1));
																					BgL_res1964z00_2106 =
																						MAKE_YOUNG_EPAIR(BgL_obj1z00_2105,
																						BgL_arg1301z00_1391,
																						BgL_arg1303z00_1392);
																				}
																				BgL_slz00_1386 = BgL_res1964z00_2106;
																		}}
																		{	/* Expand/let.scm 43 */
																			obj_t BgL_arg1307z00_1395;

																			BgL_arg1307z00_1395 =
																				MAKE_YOUNG_PAIR(CAR
																				(BgL_bindingsz00_1363), BNIL);
																			BgL_bz00_1387 =
																				BGl_epairifyz00zztools_miscz00
																				(BgL_arg1307z00_1395,
																				BgL_bindingsz00_1363);
																		}
																		{	/* Expand/let.scm 44 */
																			obj_t BgL_arg1298z00_1388;

																			{	/* Expand/let.scm 44 */
																				obj_t BgL_arg1299z00_1389;

																				{	/* Expand/let.scm 44 */
																					obj_t BgL_arg1300z00_1390;

																					BgL_arg1300z00_1390 =
																						MAKE_YOUNG_PAIR(BgL_slz00_1386,
																						BNIL);
																					BgL_arg1299z00_1389 =
																						MAKE_YOUNG_PAIR(BgL_bz00_1387,
																						BgL_arg1300z00_1390);
																				}
																				BgL_arg1298z00_1388 =
																					MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long)
																							0)), BgL_arg1299z00_1389);
																			}
																			BgL_resz00_1360 =
																				PROCEDURE_ENTRY(BgL_ez00_1359)
																				(BgL_ez00_1359, BgL_arg1298z00_1388,
																				BgL_ez00_1359, BEOA);
														}}}}
													else
														{	/* Expand/let.scm 36 */
															goto BgL_tagzd2103zd2_1366;
														}
												}
										}
									else
										{	/* Expand/let.scm 36 */
											goto BgL_tagzd2103zd2_1366;
										}
								}
							else
								{	/* Expand/let.scm 36 */
									goto BgL_tagzd2103zd2_1366;
								}
						}
						{	/* Expand/let.scm 36 */

							BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
								BgL_oldzd2internalzd2_1358;
							return BGl_replacez12z12zztools_miscz00(BgL_xz00_17,
								BgL_resz00_1360);
						}
					}
				}
			}
		}

	}



/* &expand-let* */
	obj_t BGl_z62expandzd2letza2z12zzexpand_letz00(obj_t BgL_envz00_2398,
		obj_t BgL_xz00_2399, obj_t BgL_ez00_2400)
	{
		{	/* Expand/let.scm 32 */
			return
				BGl_expandzd2letza2z70zzexpand_letz00(BgL_xz00_2399, BgL_ez00_2400);
		}

	}



/* expand-let */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letzd2zzexpand_letz00(obj_t BgL_xz00_19,
		obj_t BgL_ez00_20)
	{
		{	/* Expand/let.scm 53 */
			{
				obj_t BgL_ez00_1564;
				obj_t BgL_bindingsz00_1565;
				obj_t BgL_bodyz00_1566;
				obj_t BgL_ez00_1469;
				obj_t BgL_loopz00_1470;
				obj_t BgL_bindingsz00_1471;
				obj_t BgL_bodyz00_1472;

				{	/* Expand/let.scm 83 */
					obj_t BgL_oldzd2internalzd2_1399;

					BgL_oldzd2internalzd2_1399 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 85 */
						obj_t BgL_ez00_1400;

						BgL_ez00_1400 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_20);
						{	/* Expand/let.scm 85 */
							obj_t BgL_resz00_1401;

							{
								obj_t BgL_bodyz00_1402;

								if (PAIRP(BgL_xz00_19))
									{	/* Expand/let.scm 86 */
										obj_t BgL_cdrzd2175zd2_1414;

										BgL_cdrzd2175zd2_1414 = CDR(BgL_xz00_19);
										if (PAIRP(BgL_cdrzd2175zd2_1414))
											{	/* Expand/let.scm 86 */
												obj_t BgL_cdrzd2178zd2_1416;

												BgL_cdrzd2178zd2_1416 = CDR(BgL_cdrzd2175zd2_1414);
												if (NULLP(CAR(BgL_cdrzd2175zd2_1414)))
													{	/* Expand/let.scm 86 */
														if (NULLP(BgL_cdrzd2178zd2_1416))
															{	/* Expand/let.scm 86 */
																obj_t BgL_carzd2192zd2_1421;
																obj_t BgL_cdrzd2193zd2_1422;

																BgL_carzd2192zd2_1421 =
																	CAR(((obj_t) BgL_cdrzd2175zd2_1414));
																BgL_cdrzd2193zd2_1422 =
																	CDR(((obj_t) BgL_cdrzd2175zd2_1414));
																if (SYMBOLP(BgL_carzd2192zd2_1421))
																	{	/* Expand/let.scm 86 */
																		if (PAIRP(BgL_cdrzd2193zd2_1422))
																			{	/* Expand/let.scm 86 */
																				obj_t BgL_carzd2199zd2_1425;
																				obj_t BgL_cdrzd2200zd2_1426;

																				BgL_carzd2199zd2_1425 =
																					CAR(BgL_cdrzd2193zd2_1422);
																				BgL_cdrzd2200zd2_1426 =
																					CDR(BgL_cdrzd2193zd2_1422);
																				if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2199zd2_1425))
																					{	/* Expand/let.scm 86 */
																						if (NULLP(BgL_cdrzd2200zd2_1426))
																							{	/* Expand/let.scm 86 */
																								obj_t BgL_cdrzd2211zd2_1429;

																								BgL_cdrzd2211zd2_1429 =
																									CDR(BgL_xz00_19);
																								{	/* Expand/let.scm 86 */
																									obj_t BgL_carzd2214zd2_1430;

																									BgL_carzd2214zd2_1430 =
																										CAR(
																										((obj_t)
																											BgL_cdrzd2211zd2_1429));
																									if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2214zd2_1430))
																										{	/* Expand/let.scm 86 */
																											obj_t BgL_arg1319z00_1432;

																											BgL_arg1319z00_1432 =
																												CDR(
																												((obj_t)
																													BgL_cdrzd2211zd2_1429));
																											BgL_ez00_1564 =
																												BgL_ez00_1400;
																											BgL_bindingsz00_1565 =
																												BgL_carzd2214zd2_1430;
																											BgL_bodyz00_1566 =
																												BgL_arg1319z00_1432;
																										BgL_zc3z04anonymousza31494ze3z87_1567:
																											{	/* Expand/let.scm 72 */
																												obj_t BgL_varsz00_1568;

																												if (NULLP
																													(BgL_bindingsz00_1565))
																													{	/* Expand/let.scm 72 */
																														BgL_varsz00_1568 =
																															BNIL;
																													}
																												else
																													{	/* Expand/let.scm 72 */
																														obj_t
																															BgL_head1235z00_1596;
																														{	/* Expand/let.scm 72 */
																															obj_t
																																BgL_res1991z00_2166;
																															BgL_res1991z00_2166
																																=
																																MAKE_YOUNG_PAIR
																																(BNIL, BNIL);
																															BgL_head1235z00_1596
																																=
																																BgL_res1991z00_2166;
																														}
																														{
																															obj_t
																																BgL_l1233z00_1598;
																															obj_t
																																BgL_tail1236z00_1599;
																															BgL_l1233z00_1598
																																=
																																BgL_bindingsz00_1565;
																															BgL_tail1236z00_1599
																																=
																																BgL_head1235z00_1596;
																														BgL_zc3z04anonymousza31575ze3z87_1600:
																															if (NULLP
																																(BgL_l1233z00_1598))
																																{	/* Expand/let.scm 72 */
																																	BgL_varsz00_1568
																																		=
																																		CDR
																																		(BgL_head1235z00_1596);
																																}
																															else
																																{	/* Expand/let.scm 72 */
																																	obj_t
																																		BgL_newtail1237z00_1602;
																																	{	/* Expand/let.scm 72 */
																																		obj_t
																																			BgL_arg1582z00_1604;
																																		{	/* Expand/let.scm 72 */
																																			obj_t
																																				BgL_xz00_1605;
																																			BgL_xz00_1605
																																				=
																																				CAR((
																																					(obj_t)
																																					BgL_l1233z00_1598));
																																			{
																																				obj_t
																																					BgL_valz00_1606;
																																				if (PAIRP(BgL_xz00_1605))
																																					{	/* Expand/let.scm 73 */
																																						obj_t
																																							BgL_cdrzd2160zd2_1612;
																																						BgL_cdrzd2160zd2_1612
																																							=
																																							CDR
																																							(BgL_xz00_1605);
																																						if (PAIRP(BgL_cdrzd2160zd2_1612))
																																							{	/* Expand/let.scm 73 */
																																								if (NULLP(CDR(BgL_cdrzd2160zd2_1612)))
																																									{	/* Expand/let.scm 73 */
																																										BgL_valz00_1606
																																											=
																																											CAR
																																											(BgL_cdrzd2160zd2_1612);
																																										{	/* Expand/let.scm 74 */
																																											obj_t
																																												BgL_arg1604z00_1621;
																																											obj_t
																																												BgL_arg1605z00_1622;
																																											BgL_arg1604z00_1621
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_xz00_1605));
																																											BgL_arg1605z00_1622
																																												=
																																												PROCEDURE_ENTRY
																																												(BgL_ez00_1564)
																																												(BgL_ez00_1564,
																																												BgL_valz00_1606,
																																												BgL_ez00_1564,
																																												BEOA);
																																											{	/* Expand/let.scm 74 */
																																												obj_t
																																													BgL_tmpz00_2634;
																																												BgL_tmpz00_2634
																																													=
																																													(
																																													(obj_t)
																																													BgL_arg1604z00_1621);
																																												SET_CAR
																																													(BgL_tmpz00_2634,
																																													BgL_arg1605z00_1622);
																																											}
																																										}
																																										BgL_arg1582z00_1604
																																											=
																																											BgL_xz00_1605;
																																									}
																																								else
																																									{	/* Expand/let.scm 73 */
																																									BgL_tagzd2155zd2_1609:
																																										BgL_arg1582z00_1604 = BGl_errorz00zz__errorz00(BFALSE, BGl_string2089z00zzexpand_letz00, BgL_xz00_1605);
																																									}
																																							}
																																						else
																																							{	/* Expand/let.scm 73 */
																																								goto
																																									BgL_tagzd2155zd2_1609;
																																							}
																																					}
																																				else
																																					{	/* Expand/let.scm 73 */
																																						if (SYMBOLP(BgL_xz00_1605))
																																							{	/* Expand/let.scm 73 */
																																								{	/* Expand/let.scm 75 */
																																									obj_t
																																										BgL_list1606z00_1623;
																																									{	/* Expand/let.scm 75 */
																																										obj_t
																																											BgL_arg1611z00_1624;
																																										BgL_arg1611z00_1624
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BUNSPEC,
																																											BNIL);
																																										BgL_list1606z00_1623
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_xz00_1605,
																																											BgL_arg1611z00_1624);
																																									}
																																									BgL_arg1582z00_1604
																																										=
																																										BgL_list1606z00_1623;
																																								}
																																							}
																																						else
																																							{	/* Expand/let.scm 73 */
																																								goto
																																									BgL_tagzd2155zd2_1609;
																																							}
																																					}
																																			}
																																		}
																																		{	/* Expand/let.scm 72 */
																																			obj_t
																																				BgL_res2000z00_2182;
																																			BgL_res2000z00_2182
																																				=
																																				MAKE_YOUNG_PAIR
																																				(BgL_arg1582z00_1604,
																																				BNIL);
																																			BgL_newtail1237z00_1602
																																				=
																																				BgL_res2000z00_2182;
																																		}
																																	}
																																	SET_CDR
																																		(BgL_tail1236z00_1599,
																																		BgL_newtail1237z00_1602);
																																	{	/* Expand/let.scm 72 */
																																		obj_t
																																			BgL_arg1578z00_1603;
																																		BgL_arg1578z00_1603
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_l1233z00_1598));
																																		{
																																			obj_t
																																				BgL_tail1236z00_2648;
																																			obj_t
																																				BgL_l1233z00_2647;
																																			BgL_l1233z00_2647
																																				=
																																				BgL_arg1578z00_1603;
																																			BgL_tail1236z00_2648
																																				=
																																				BgL_newtail1237z00_1602;
																																			BgL_tail1236z00_1599
																																				=
																																				BgL_tail1236z00_2648;
																																			BgL_l1233z00_1598
																																				=
																																				BgL_l1233z00_2647;
																																			goto
																																				BgL_zc3z04anonymousza31575ze3z87_1600;
																																		}
																																	}
																																}
																														}
																													}
																												{	/* Expand/let.scm 79 */
																													obj_t
																														BgL_arg1495z00_1569;
																													{	/* Expand/let.scm 79 */
																														obj_t
																															BgL_arg1497z00_1570;
																														{	/* Expand/let.scm 79 */
																															obj_t
																																BgL_arg1518z00_1571;
																															{	/* Expand/let.scm 79 */
																																obj_t
																																	BgL_arg1521z00_1572;
																																obj_t
																																	BgL_arg1528z00_1573;
																																if (NULLP
																																	(BgL_varsz00_1568))
																																	{	/* Expand/let.scm 79 */
																																		BgL_arg1521z00_1572
																																			= BNIL;
																																	}
																																else
																																	{	/* Expand/let.scm 79 */
																																		obj_t
																																			BgL_head1240z00_1577;
																																		{	/* Expand/let.scm 79 */
																																			obj_t
																																				BgL_arg1564z00_1589;
																																			{	/* Expand/let.scm 79 */
																																				obj_t
																																					BgL_pairz00_2187;
																																				BgL_pairz00_2187
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_varsz00_1568));
																																				BgL_arg1564z00_1589
																																					=
																																					CAR
																																					(BgL_pairz00_2187);
																																			}
																																			{	/* Expand/let.scm 79 */
																																				obj_t
																																					BgL_res2002z00_2188;
																																				BgL_res2002z00_2188
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1564z00_1589,
																																					BNIL);
																																				BgL_head1240z00_1577
																																					=
																																					BgL_res2002z00_2188;
																																			}
																																		}
																																		{	/* Expand/let.scm 79 */
																																			obj_t
																																				BgL_g1243z00_1578;
																																			BgL_g1243z00_1578
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_varsz00_1568));
																																			{
																																				obj_t
																																					BgL_l1238z00_1580;
																																				obj_t
																																					BgL_tail1241z00_1581;
																																				BgL_l1238z00_1580
																																					=
																																					BgL_g1243z00_1578;
																																				BgL_tail1241z00_1581
																																					=
																																					BgL_head1240z00_1577;
																																			BgL_zc3z04anonymousza31538ze3z87_1582:
																																				if (NULLP(BgL_l1238z00_1580))
																																					{	/* Expand/let.scm 79 */
																																						BgL_arg1521z00_1572
																																							=
																																							BgL_head1240z00_1577;
																																					}
																																				else
																																					{	/* Expand/let.scm 79 */
																																						obj_t
																																							BgL_newtail1242z00_1584;
																																						{	/* Expand/let.scm 79 */
																																							obj_t
																																								BgL_arg1558z00_1586;
																																							{	/* Expand/let.scm 79 */
																																								obj_t
																																									BgL_pairz00_2192;
																																								BgL_pairz00_2192
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1238z00_1580));
																																								BgL_arg1558z00_1586
																																									=
																																									CAR
																																									(BgL_pairz00_2192);
																																							}
																																							{	/* Expand/let.scm 79 */
																																								obj_t
																																									BgL_res2004z00_2193;
																																								BgL_res2004z00_2193
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1558z00_1586,
																																									BNIL);
																																								BgL_newtail1242z00_1584
																																									=
																																									BgL_res2004z00_2193;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1241z00_1581,
																																							BgL_newtail1242z00_1584);
																																						{	/* Expand/let.scm 79 */
																																							obj_t
																																								BgL_arg1552z00_1585;
																																							BgL_arg1552z00_1585
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1238z00_1580));
																																							{
																																								obj_t
																																									BgL_tail1241z00_2667;
																																								obj_t
																																									BgL_l1238z00_2666;
																																								BgL_l1238z00_2666
																																									=
																																									BgL_arg1552z00_1585;
																																								BgL_tail1241z00_2667
																																									=
																																									BgL_newtail1242z00_1584;
																																								BgL_tail1241z00_1581
																																									=
																																									BgL_tail1241z00_2667;
																																								BgL_l1238z00_1580
																																									=
																																									BgL_l1238z00_2666;
																																								goto
																																									BgL_zc3z04anonymousza31538ze3z87_1582;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	}
																																BgL_arg1528z00_1573
																																	=
																																	BGl_findzd2locationzd2zztools_locationz00
																																	(BgL_xz00_19);
																																{	/* Expand/let.scm 82 */
																																	obj_t
																																		BgL_zc3z04anonymousza31566ze3z87_2401;
																																	BgL_zc3z04anonymousza31566ze3z87_2401
																																		=
																																		MAKE_FX_PROCEDURE
																																		(BGl_z62zc3z04anonymousza31566ze3ze5zzexpand_letz00,
																																		(int) ((
																																				(long)
																																				0)),
																																		(int) ((
																																				(long)
																																				2)));
																																	PROCEDURE_SET
																																		(BgL_zc3z04anonymousza31566ze3z87_2401,
																																		(int) ((
																																				(long)
																																				0)),
																																		BgL_bodyz00_1566);
																																	PROCEDURE_SET
																																		(BgL_zc3z04anonymousza31566ze3z87_2401,
																																		(int) ((
																																				(long)
																																				1)),
																																		BgL_ez00_1564);
																																	BgL_arg1518z00_1571
																																		=
																																		BGl_withzd2lexicalzd2zzexpand_epsz00
																																		(BgL_arg1521z00_1572,
																																		CNST_TABLE_REF
																																		(((long)
																																				4)),
																																		BgL_arg1528z00_1573,
																																		BgL_zc3z04anonymousza31566ze3z87_2401);
																															}}
																															BgL_arg1497z00_1570
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_arg1518z00_1571,
																																BNIL);
																														}
																														BgL_arg1495z00_1569
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_varsz00_1568,
																															BgL_arg1497z00_1570);
																													}
																													BgL_resz00_1401 =
																														MAKE_YOUNG_PAIR
																														(CNST_TABLE_REF((
																																(long) 0)),
																														BgL_arg1495z00_1569);
																										}}}
																									else
																										{	/* Expand/let.scm 86 */
																										BgL_tagzd2168zd2_1411:
																											BgL_resz00_1401 =
																												BGl_errorz00zz__errorz00
																												(BFALSE,
																												BGl_string2090z00zzexpand_letz00,
																												BgL_xz00_19);
																										}
																								}
																							}
																						else
																							{	/* Expand/let.scm 86 */
																								BgL_ez00_1469 = BgL_ez00_1400;
																								BgL_loopz00_1470 =
																									BgL_carzd2192zd2_1421;
																								BgL_bindingsz00_1471 =
																									BgL_carzd2199zd2_1425;
																								BgL_bodyz00_1472 =
																									BgL_cdrzd2200zd2_1426;
																							BgL_zc3z04anonymousza31341ze3z87_1473:
																								{	/* Expand/let.scm 55 */
																									obj_t BgL_varsz00_1474;

																									if (NULLP
																										(BgL_bindingsz00_1471))
																										{	/* Expand/let.scm 55 */
																											BgL_varsz00_1474 = BNIL;
																										}
																									else
																										{	/* Expand/let.scm 55 */
																											obj_t
																												BgL_head1218z00_1538;
																											{	/* Expand/let.scm 55 */
																												obj_t
																													BgL_res1974z00_2121;
																												BgL_res1974z00_2121 =
																													MAKE_YOUNG_PAIR(BNIL,
																													BNIL);
																												BgL_head1218z00_1538 =
																													BgL_res1974z00_2121;
																											}
																											{
																												obj_t BgL_l1216z00_1540;
																												obj_t
																													BgL_tail1219z00_1541;
																												BgL_l1216z00_1540 =
																													BgL_bindingsz00_1471;
																												BgL_tail1219z00_1541 =
																													BgL_head1218z00_1538;
																											BgL_zc3z04anonymousza31451ze3z87_1542:
																												if (NULLP
																													(BgL_l1216z00_1540))
																													{	/* Expand/let.scm 55 */
																														BgL_varsz00_1474 =
																															CDR
																															(BgL_head1218z00_1538);
																													}
																												else
																													{	/* Expand/let.scm 55 */
																														obj_t
																															BgL_newtail1220z00_1544;
																														{	/* Expand/let.scm 55 */
																															obj_t
																																BgL_arg1462z00_1546;
																															{	/* Expand/let.scm 55 */
																																obj_t
																																	BgL_xz00_1547;
																																BgL_xz00_1547 =
																																	CAR(((obj_t)
																																		BgL_l1216z00_1540));
																																{
																																	obj_t
																																		BgL_valz00_1548;
																																	if (PAIRP
																																		(BgL_xz00_1547))
																																		{	/* Expand/let.scm 56 */
																																			obj_t
																																				BgL_cdrzd2148zd2_1553;
																																			BgL_cdrzd2148zd2_1553
																																				=
																																				CDR
																																				(BgL_xz00_1547);
																																			if (PAIRP
																																				(BgL_cdrzd2148zd2_1553))
																																				{	/* Expand/let.scm 56 */
																																					if (NULLP(CDR(BgL_cdrzd2148zd2_1553)))
																																						{	/* Expand/let.scm 56 */
																																							BgL_valz00_1548
																																								=
																																								CAR
																																								(BgL_cdrzd2148zd2_1553);
																																							if (PAIRP(BgL_valz00_1548))
																																								{	/* Expand/let.scm 59 */
																																									obj_t
																																										BgL_arg1489z00_1560;
																																									{	/* Expand/let.scm 59 */

																																										{	/* Expand/let.scm 59 */

																																											BgL_arg1489z00_1560
																																												=
																																												BGl_gensymz00zz__r4_symbols_6_4z00
																																												(BFALSE);
																																										}
																																									}
																																									BgL_arg1462z00_1546
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BTRUE,
																																										BgL_arg1489z00_1560);
																																								}
																																							else
																																								{	/* Expand/let.scm 60 */
																																									obj_t
																																										BgL_arg1493z00_1562;
																																									{	/* Expand/let.scm 60 */
																																										obj_t
																																											BgL_pairz00_2129;
																																										BgL_pairz00_2129
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_xz00_1547));
																																										BgL_arg1493z00_1562
																																											=
																																											CAR
																																											(BgL_pairz00_2129);
																																									}
																																									BgL_arg1462z00_1546
																																										=
																																										MAKE_YOUNG_PAIR
																																										(BFALSE,
																																										BgL_arg1493z00_1562);
																																								}
																																						}
																																					else
																																						{	/* Expand/let.scm 56 */
																																						BgL_tagzd2143zd2_1550:
																																							BgL_arg1462z00_1546 = BGl_errorz00zz__errorz00(BFALSE, BGl_string2087z00zzexpand_letz00, BgL_xz00_1547);
																																						}
																																				}
																																			else
																																				{	/* Expand/let.scm 56 */
																																					goto
																																						BgL_tagzd2143zd2_1550;
																																				}
																																		}
																																	else
																																		{	/* Expand/let.scm 56 */
																																			goto
																																				BgL_tagzd2143zd2_1550;
																																		}
																																}
																															}
																															{	/* Expand/let.scm 55 */
																																obj_t
																																	BgL_res1980z00_2136;
																																BgL_res1980z00_2136
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1462z00_1546,
																																	BNIL);
																																BgL_newtail1220z00_1544
																																	=
																																	BgL_res1980z00_2136;
																															}
																														}
																														SET_CDR
																															(BgL_tail1219z00_1541,
																															BgL_newtail1220z00_1544);
																														{	/* Expand/let.scm 55 */
																															obj_t
																																BgL_arg1461z00_1545;
																															BgL_arg1461z00_1545
																																=
																																CDR(((obj_t)
																																	BgL_l1216z00_1540));
																															{
																																obj_t
																																	BgL_tail1219z00_2714;
																																obj_t
																																	BgL_l1216z00_2713;
																																BgL_l1216z00_2713
																																	=
																																	BgL_arg1461z00_1545;
																																BgL_tail1219z00_2714
																																	=
																																	BgL_newtail1220z00_1544;
																																BgL_tail1219z00_1541
																																	=
																																	BgL_tail1219z00_2714;
																																BgL_l1216z00_1540
																																	=
																																	BgL_l1216z00_2713;
																																goto
																																	BgL_zc3z04anonymousza31451ze3z87_1542;
																															}
																														}
																													}
																											}
																										}
																									{	/* Expand/let.scm 55 */
																										obj_t BgL_auxz00_1475;

																										{	/* Expand/let.scm 64 */
																											obj_t
																												BgL_list1423z00_1527;
																											{	/* Expand/let.scm 64 */
																												obj_t
																													BgL_arg1441z00_1528;
																												BgL_arg1441z00_1528 =
																													MAKE_YOUNG_PAIR
																													(BgL_bindingsz00_1471,
																													BNIL);
																												BgL_list1423z00_1527 =
																													MAKE_YOUNG_PAIR
																													(BgL_varsz00_1474,
																													BgL_arg1441z00_1528);
																											}
																											BgL_auxz00_1475 =
																												BGl_filterzd2mapzd2zz__r4_control_features_6_9z00
																												(BGl_proc2088z00zzexpand_letz00,
																												BgL_list1423z00_1527);
																										}
																										{	/* Expand/let.scm 64 */
																											obj_t BgL_recz00_1476;

																											{	/* Expand/let.scm 67 */
																												obj_t
																													BgL_arg1346z00_1481;
																												{	/* Expand/let.scm 67 */
																													obj_t
																														BgL_arg1347z00_1482;
																													obj_t
																														BgL_arg1348z00_1483;
																													{	/* Expand/let.scm 67 */
																														obj_t
																															BgL_arg1351z00_1484;
																														{	/* Expand/let.scm 67 */
																															obj_t
																																BgL_arg1352z00_1485;
																															{	/* Expand/let.scm 67 */
																																obj_t
																																	BgL_arg1357z00_1486;
																																{	/* Expand/let.scm 67 */
																																	obj_t
																																		BgL_arg1360z00_1487;
																																	{	/* Expand/let.scm 67 */
																																		obj_t
																																			BgL_arg1361z00_1488;
																																		obj_t
																																			BgL_arg1363z00_1489;
																																		if (NULLP
																																			(BgL_bindingsz00_1471))
																																			{	/* Expand/let.scm 67 */
																																				BgL_arg1361z00_1488
																																					=
																																					BNIL;
																																			}
																																		else
																																			{	/* Expand/let.scm 67 */
																																				obj_t
																																					BgL_head1223z00_1492;
																																				{	/* Expand/let.scm 67 */
																																					obj_t
																																						BgL_arg1381z00_1504;
																																					{	/* Expand/let.scm 67 */
																																						obj_t
																																							BgL_pairz00_2144;
																																						BgL_pairz00_2144
																																							=
																																							CAR
																																							(((obj_t) BgL_bindingsz00_1471));
																																						BgL_arg1381z00_1504
																																							=
																																							CAR
																																							(BgL_pairz00_2144);
																																					}
																																					{	/* Expand/let.scm 67 */
																																						obj_t
																																							BgL_res1982z00_2145;
																																						BgL_res1982z00_2145
																																							=
																																							MAKE_YOUNG_PAIR
																																							(BgL_arg1381z00_1504,
																																							BNIL);
																																						BgL_head1223z00_1492
																																							=
																																							BgL_res1982z00_2145;
																																					}
																																				}
																																				{	/* Expand/let.scm 67 */
																																					obj_t
																																						BgL_g1226z00_1493;
																																					BgL_g1226z00_1493
																																						=
																																						CDR(
																																						((obj_t) BgL_bindingsz00_1471));
																																					{
																																						obj_t
																																							BgL_l1221z00_1495;
																																						obj_t
																																							BgL_tail1224z00_1496;
																																						BgL_l1221z00_1495
																																							=
																																							BgL_g1226z00_1493;
																																						BgL_tail1224z00_1496
																																							=
																																							BgL_head1223z00_1492;
																																					BgL_zc3z04anonymousza31366ze3z87_1497:
																																						if (NULLP(BgL_l1221z00_1495))
																																							{	/* Expand/let.scm 67 */
																																								BgL_arg1361z00_1488
																																									=
																																									BgL_head1223z00_1492;
																																							}
																																						else
																																							{	/* Expand/let.scm 67 */
																																								obj_t
																																									BgL_newtail1225z00_1499;
																																								{	/* Expand/let.scm 67 */
																																									obj_t
																																										BgL_arg1371z00_1501;
																																									{	/* Expand/let.scm 67 */
																																										obj_t
																																											BgL_pairz00_2149;
																																										BgL_pairz00_2149
																																											=
																																											CAR
																																											(
																																											((obj_t) BgL_l1221z00_1495));
																																										BgL_arg1371z00_1501
																																											=
																																											CAR
																																											(BgL_pairz00_2149);
																																									}
																																									{	/* Expand/let.scm 67 */
																																										obj_t
																																											BgL_res1984z00_2150;
																																										BgL_res1984z00_2150
																																											=
																																											MAKE_YOUNG_PAIR
																																											(BgL_arg1371z00_1501,
																																											BNIL);
																																										BgL_newtail1225z00_1499
																																											=
																																											BgL_res1984z00_2150;
																																									}
																																								}
																																								SET_CDR
																																									(BgL_tail1224z00_1496,
																																									BgL_newtail1225z00_1499);
																																								{	/* Expand/let.scm 67 */
																																									obj_t
																																										BgL_arg1370z00_1500;
																																									BgL_arg1370z00_1500
																																										=
																																										CDR
																																										(
																																										((obj_t) BgL_l1221z00_1495));
																																									{
																																										obj_t
																																											BgL_tail1224z00_2736;
																																										obj_t
																																											BgL_l1221z00_2735;
																																										BgL_l1221z00_2735
																																											=
																																											BgL_arg1370z00_1500;
																																										BgL_tail1224z00_2736
																																											=
																																											BgL_newtail1225z00_1499;
																																										BgL_tail1224z00_1496
																																											=
																																											BgL_tail1224z00_2736;
																																										BgL_l1221z00_1495
																																											=
																																											BgL_l1221z00_2735;
																																										goto
																																											BgL_zc3z04anonymousza31366ze3z87_1497;
																																									}
																																								}
																																							}
																																					}
																																				}
																																			}
																																		BgL_arg1363z00_1489
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BGl_expandzd2prognzd2zz__prognz00
																																			(BgL_bodyz00_1472),
																																			BNIL);
																																		BgL_arg1360z00_1487
																																			=
																																			MAKE_YOUNG_PAIR
																																			(BgL_arg1361z00_1488,
																																			BgL_arg1363z00_1489);
																																	}
																																	BgL_arg1357z00_1486
																																		=
																																		MAKE_YOUNG_PAIR
																																		(CNST_TABLE_REF
																																		(((long)
																																				2)),
																																		BgL_arg1360z00_1487);
																																}
																																BgL_arg1352z00_1485
																																	=
																																	MAKE_YOUNG_PAIR
																																	(BgL_arg1357z00_1486,
																																	BNIL);
																															}
																															BgL_arg1351z00_1484
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_loopz00_1470,
																																BgL_arg1352z00_1485);
																														}
																														BgL_arg1347z00_1482
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1351z00_1484,
																															BNIL);
																													}
																													{	/* Expand/let.scm 68 */
																														obj_t
																															BgL_arg1384z00_1507;
																														{	/* Expand/let.scm 68 */
																															obj_t
																																BgL_arg1385z00_1508;
																															{	/* Expand/let.scm 68 */
																																obj_t
																																	BgL_arg1386z00_1509;
																																if (NULLP
																																	(BgL_varsz00_1474))
																																	{	/* Expand/let.scm 68 */
																																		BgL_arg1386z00_1509
																																			= BNIL;
																																	}
																																else
																																	{	/* Expand/let.scm 68 */
																																		obj_t
																																			BgL_head1229z00_1512;
																																		{	/* Expand/let.scm 68 */
																																			obj_t
																																				BgL_arg1418z00_1524;
																																			{	/* Expand/let.scm 68 */
																																				obj_t
																																					BgL_pairz00_2155;
																																				BgL_pairz00_2155
																																					=
																																					CAR((
																																						(obj_t)
																																						BgL_varsz00_1474));
																																				BgL_arg1418z00_1524
																																					=
																																					CDR
																																					(BgL_pairz00_2155);
																																			}
																																			{	/* Expand/let.scm 68 */
																																				obj_t
																																					BgL_res1986z00_2156;
																																				BgL_res1986z00_2156
																																					=
																																					MAKE_YOUNG_PAIR
																																					(BgL_arg1418z00_1524,
																																					BNIL);
																																				BgL_head1229z00_1512
																																					=
																																					BgL_res1986z00_2156;
																																			}
																																		}
																																		{	/* Expand/let.scm 68 */
																																			obj_t
																																				BgL_g1232z00_1513;
																																			BgL_g1232z00_1513
																																				=
																																				CDR((
																																					(obj_t)
																																					BgL_varsz00_1474));
																																			{
																																				obj_t
																																					BgL_l1227z00_1515;
																																				obj_t
																																					BgL_tail1230z00_1516;
																																				BgL_l1227z00_1515
																																					=
																																					BgL_g1232z00_1513;
																																				BgL_tail1230z00_1516
																																					=
																																					BgL_head1229z00_1512;
																																			BgL_zc3z04anonymousza31390ze3z87_1517:
																																				if (NULLP(BgL_l1227z00_1515))
																																					{	/* Expand/let.scm 68 */
																																						BgL_arg1386z00_1509
																																							=
																																							BgL_head1229z00_1512;
																																					}
																																				else
																																					{	/* Expand/let.scm 68 */
																																						obj_t
																																							BgL_newtail1231z00_1519;
																																						{	/* Expand/let.scm 68 */
																																							obj_t
																																								BgL_arg1396z00_1521;
																																							{	/* Expand/let.scm 68 */
																																								obj_t
																																									BgL_pairz00_2160;
																																								BgL_pairz00_2160
																																									=
																																									CAR
																																									(
																																									((obj_t) BgL_l1227z00_1515));
																																								BgL_arg1396z00_1521
																																									=
																																									CDR
																																									(BgL_pairz00_2160);
																																							}
																																							{	/* Expand/let.scm 68 */
																																								obj_t
																																									BgL_res1988z00_2161;
																																								BgL_res1988z00_2161
																																									=
																																									MAKE_YOUNG_PAIR
																																									(BgL_arg1396z00_1521,
																																									BNIL);
																																								BgL_newtail1231z00_1519
																																									=
																																									BgL_res1988z00_2161;
																																							}
																																						}
																																						SET_CDR
																																							(BgL_tail1230z00_1516,
																																							BgL_newtail1231z00_1519);
																																						{	/* Expand/let.scm 68 */
																																							obj_t
																																								BgL_arg1394z00_1520;
																																							BgL_arg1394z00_1520
																																								=
																																								CDR
																																								(
																																								((obj_t) BgL_l1227z00_1515));
																																							{
																																								obj_t
																																									BgL_tail1230z00_2763;
																																								obj_t
																																									BgL_l1227z00_2762;
																																								BgL_l1227z00_2762
																																									=
																																									BgL_arg1394z00_1520;
																																								BgL_tail1230z00_2763
																																									=
																																									BgL_newtail1231z00_1519;
																																								BgL_tail1230z00_1516
																																									=
																																									BgL_tail1230z00_2763;
																																								BgL_l1227z00_1515
																																									=
																																									BgL_l1227z00_2762;
																																								goto
																																									BgL_zc3z04anonymousza31390ze3z87_1517;
																																							}
																																						}
																																					}
																																			}
																																		}
																																	}
																																BgL_arg1385z00_1508
																																	=
																																	BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																																	(BgL_arg1386z00_1509,
																																	BNIL);
																															}
																															BgL_arg1384z00_1507
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_loopz00_1470,
																																BgL_arg1385z00_1508);
																														}
																														BgL_arg1348z00_1483
																															=
																															MAKE_YOUNG_PAIR
																															(BgL_arg1384z00_1507,
																															BNIL);
																													}
																													BgL_arg1346z00_1481 =
																														MAKE_YOUNG_PAIR
																														(BgL_arg1347z00_1482,
																														BgL_arg1348z00_1483);
																												}
																												BgL_recz00_1476 =
																													MAKE_YOUNG_PAIR
																													(CNST_TABLE_REF((
																															(long) 3)),
																													BgL_arg1346z00_1481);
																											}
																											{	/* Expand/let.scm 67 */
																												obj_t BgL_expz00_1477;

																												if (NULLP
																													(BgL_auxz00_1475))
																													{	/* Expand/let.scm 69 */
																														BgL_expz00_1477 =
																															BgL_recz00_1476;
																													}
																												else
																													{	/* Expand/let.scm 69 */
																														obj_t
																															BgL_arg1344z00_1479;
																														{	/* Expand/let.scm 69 */
																															obj_t
																																BgL_arg1345z00_1480;
																															BgL_arg1345z00_1480
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_recz00_1476,
																																BNIL);
																															BgL_arg1344z00_1479
																																=
																																MAKE_YOUNG_PAIR
																																(BgL_auxz00_1475,
																																BgL_arg1345z00_1480);
																														}
																														BgL_expz00_1477 =
																															MAKE_YOUNG_PAIR
																															(CNST_TABLE_REF((
																																	(long) 0)),
																															BgL_arg1344z00_1479);
																													}
																												{	/* Expand/let.scm 69 */

																													BgL_resz00_1401 =
																														PROCEDURE_ENTRY
																														(BgL_ez00_1469)
																														(BgL_ez00_1469,
																														BgL_expz00_1477,
																														BgL_ez00_1469,
																														BEOA);
																					}}}}}}}
																				else
																					{	/* Expand/let.scm 86 */
																						obj_t BgL_cdrzd2226zd2_1433;

																						BgL_cdrzd2226zd2_1433 =
																							CDR(BgL_xz00_19);
																						{	/* Expand/let.scm 86 */
																							obj_t BgL_carzd2229zd2_1434;

																							BgL_carzd2229zd2_1434 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd2226zd2_1433));
																							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2229zd2_1434))
																								{	/* Expand/let.scm 86 */
																									obj_t BgL_arg1322z00_1436;

																									BgL_arg1322z00_1436 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2226zd2_1433));
																									{
																										obj_t BgL_bodyz00_2790;
																										obj_t BgL_bindingsz00_2789;
																										obj_t BgL_ez00_2788;

																										BgL_ez00_2788 =
																											BgL_ez00_1400;
																										BgL_bindingsz00_2789 =
																											BgL_carzd2229zd2_1434;
																										BgL_bodyz00_2790 =
																											BgL_arg1322z00_1436;
																										BgL_bodyz00_1566 =
																											BgL_bodyz00_2790;
																										BgL_bindingsz00_1565 =
																											BgL_bindingsz00_2789;
																										BgL_ez00_1564 =
																											BgL_ez00_2788;
																										goto
																											BgL_zc3z04anonymousza31494ze3z87_1567;
																									}
																								}
																							else
																								{	/* Expand/let.scm 86 */
																									goto BgL_tagzd2168zd2_1411;
																								}
																						}
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd2168zd2_1411;
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		goto BgL_tagzd2168zd2_1411;
																	}
															}
														else
															{	/* Expand/let.scm 86 */
																BgL_bodyz00_1402 = BgL_cdrzd2178zd2_1416;
																{	/* Expand/let.scm 89 */
																	obj_t BgL_arg1337z00_1465;

																	{	/* Expand/let.scm 89 */
																		obj_t BgL_arg1338z00_1466;

																		{	/* Expand/let.scm 89 */
																			obj_t BgL_arg1339z00_1467;

																			{	/* Expand/let.scm 89 */
																				obj_t BgL_arg1340z00_1468;

																				BgL_arg1340z00_1468 =
																					BGl_expandzd2prognzd2zz__prognz00
																					(BgL_bodyz00_1402);
																				BgL_arg1339z00_1467 =
																					PROCEDURE_ENTRY(BgL_ez00_1400)
																					(BgL_ez00_1400, BgL_arg1340z00_1468,
																					BgL_ez00_1400, BEOA);
																			}
																			BgL_arg1338z00_1466 =
																				MAKE_YOUNG_PAIR(BgL_arg1339z00_1467,
																				BNIL);
																		}
																		BgL_arg1337z00_1465 =
																			MAKE_YOUNG_PAIR(BNIL,
																			BgL_arg1338z00_1466);
																	}
																	BgL_resz00_1401 =
																		MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																		BgL_arg1337z00_1465);
													}}}
												else
													{	/* Expand/let.scm 86 */
														obj_t BgL_carzd2255zd2_1438;
														obj_t BgL_cdrzd2256zd2_1439;

														BgL_carzd2255zd2_1438 =
															CAR(((obj_t) BgL_cdrzd2175zd2_1414));
														BgL_cdrzd2256zd2_1439 =
															CDR(((obj_t) BgL_cdrzd2175zd2_1414));
														if (SYMBOLP(BgL_carzd2255zd2_1438))
															{	/* Expand/let.scm 86 */
																if (PAIRP(BgL_cdrzd2256zd2_1439))
																	{	/* Expand/let.scm 86 */
																		obj_t BgL_carzd2262zd2_1442;
																		obj_t BgL_cdrzd2263zd2_1443;

																		BgL_carzd2262zd2_1442 =
																			CAR(BgL_cdrzd2256zd2_1439);
																		BgL_cdrzd2263zd2_1443 =
																			CDR(BgL_cdrzd2256zd2_1439);
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2262zd2_1442))
																			{	/* Expand/let.scm 86 */
																				if (NULLP(BgL_cdrzd2263zd2_1443))
																					{	/* Expand/let.scm 86 */
																						obj_t BgL_cdrzd2275zd2_1446;

																						BgL_cdrzd2275zd2_1446 =
																							CDR(BgL_xz00_19);
																						{	/* Expand/let.scm 86 */
																							obj_t BgL_carzd2279zd2_1447;

																							BgL_carzd2279zd2_1447 =
																								CAR(
																								((obj_t)
																									BgL_cdrzd2275zd2_1446));
																							if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2279zd2_1447))
																								{	/* Expand/let.scm 86 */
																									obj_t BgL_arg1328z00_1449;

																									BgL_arg1328z00_1449 =
																										CDR(
																										((obj_t)
																											BgL_cdrzd2275zd2_1446));
																									{
																										obj_t BgL_bodyz00_2824;
																										obj_t BgL_bindingsz00_2823;
																										obj_t BgL_ez00_2822;

																										BgL_ez00_2822 =
																											BgL_ez00_1400;
																										BgL_bindingsz00_2823 =
																											BgL_carzd2279zd2_1447;
																										BgL_bodyz00_2824 =
																											BgL_arg1328z00_1449;
																										BgL_bodyz00_1566 =
																											BgL_bodyz00_2824;
																										BgL_bindingsz00_1565 =
																											BgL_bindingsz00_2823;
																										BgL_ez00_1564 =
																											BgL_ez00_2822;
																										goto
																											BgL_zc3z04anonymousza31494ze3z87_1567;
																									}
																								}
																							else
																								{	/* Expand/let.scm 86 */
																									goto BgL_tagzd2168zd2_1411;
																								}
																						}
																					}
																				else
																					{
																						obj_t BgL_bodyz00_2828;
																						obj_t BgL_bindingsz00_2827;
																						obj_t BgL_loopz00_2826;
																						obj_t BgL_ez00_2825;

																						BgL_ez00_2825 = BgL_ez00_1400;
																						BgL_loopz00_2826 =
																							BgL_carzd2255zd2_1438;
																						BgL_bindingsz00_2827 =
																							BgL_carzd2262zd2_1442;
																						BgL_bodyz00_2828 =
																							BgL_cdrzd2263zd2_1443;
																						BgL_bodyz00_1472 = BgL_bodyz00_2828;
																						BgL_bindingsz00_1471 =
																							BgL_bindingsz00_2827;
																						BgL_loopz00_1470 = BgL_loopz00_2826;
																						BgL_ez00_1469 = BgL_ez00_2825;
																						goto
																							BgL_zc3z04anonymousza31341ze3z87_1473;
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				obj_t BgL_cdrzd2294zd2_1450;

																				BgL_cdrzd2294zd2_1450 =
																					CDR(BgL_xz00_19);
																				{	/* Expand/let.scm 86 */
																					obj_t BgL_carzd2298zd2_1451;

																					BgL_carzd2298zd2_1451 =
																						CAR(
																						((obj_t) BgL_cdrzd2294zd2_1450));
																					if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2298zd2_1451))
																						{	/* Expand/let.scm 86 */
																							obj_t BgL_arg1330z00_1453;

																							BgL_arg1330z00_1453 =
																								CDR(
																								((obj_t)
																									BgL_cdrzd2294zd2_1450));
																							{
																								obj_t BgL_bodyz00_2838;
																								obj_t BgL_bindingsz00_2837;
																								obj_t BgL_ez00_2836;

																								BgL_ez00_2836 = BgL_ez00_1400;
																								BgL_bindingsz00_2837 =
																									BgL_carzd2298zd2_1451;
																								BgL_bodyz00_2838 =
																									BgL_arg1330z00_1453;
																								BgL_bodyz00_1566 =
																									BgL_bodyz00_2838;
																								BgL_bindingsz00_1565 =
																									BgL_bindingsz00_2837;
																								BgL_ez00_1564 = BgL_ez00_2836;
																								goto
																									BgL_zc3z04anonymousza31494ze3z87_1567;
																							}
																						}
																					else
																						{	/* Expand/let.scm 86 */
																							goto BgL_tagzd2168zd2_1411;
																						}
																				}
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		obj_t BgL_carzd2317zd2_1455;
																		obj_t BgL_cdrzd2318zd2_1456;

																		BgL_carzd2317zd2_1455 =
																			CAR(((obj_t) BgL_cdrzd2175zd2_1414));
																		BgL_cdrzd2318zd2_1456 =
																			CDR(((obj_t) BgL_cdrzd2175zd2_1414));
																		if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00(BgL_carzd2317zd2_1455))
																			{	/* Expand/let.scm 86 */
																				if (NULLP(BgL_cdrzd2318zd2_1456))
																					{	/* Expand/let.scm 86 */
																						goto BgL_tagzd2168zd2_1411;
																					}
																				else
																					{
																						obj_t BgL_bodyz00_2849;
																						obj_t BgL_bindingsz00_2848;
																						obj_t BgL_ez00_2847;

																						BgL_ez00_2847 = BgL_ez00_1400;
																						BgL_bindingsz00_2848 =
																							BgL_carzd2317zd2_1455;
																						BgL_bodyz00_2849 =
																							BgL_cdrzd2318zd2_1456;
																						BgL_bodyz00_1566 = BgL_bodyz00_2849;
																						BgL_bindingsz00_1565 =
																							BgL_bindingsz00_2848;
																						BgL_ez00_1564 = BgL_ez00_2847;
																						goto
																							BgL_zc3z04anonymousza31494ze3z87_1567;
																					}
																			}
																		else
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd2168zd2_1411;
																			}
																	}
															}
														else
															{	/* Expand/let.scm 86 */
																obj_t BgL_carzd2334zd2_1460;
																obj_t BgL_cdrzd2335zd2_1461;

																BgL_carzd2334zd2_1460 =
																	CAR(((obj_t) BgL_cdrzd2175zd2_1414));
																BgL_cdrzd2335zd2_1461 =
																	CDR(((obj_t) BgL_cdrzd2175zd2_1414));
																if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
																	(BgL_carzd2334zd2_1460))
																	{	/* Expand/let.scm 86 */
																		if (NULLP(BgL_cdrzd2335zd2_1461))
																			{	/* Expand/let.scm 86 */
																				goto BgL_tagzd2168zd2_1411;
																			}
																		else
																			{
																				obj_t BgL_bodyz00_2860;
																				obj_t BgL_bindingsz00_2859;
																				obj_t BgL_ez00_2858;

																				BgL_ez00_2858 = BgL_ez00_1400;
																				BgL_bindingsz00_2859 =
																					BgL_carzd2334zd2_1460;
																				BgL_bodyz00_2860 =
																					BgL_cdrzd2335zd2_1461;
																				BgL_bodyz00_1566 = BgL_bodyz00_2860;
																				BgL_bindingsz00_1565 =
																					BgL_bindingsz00_2859;
																				BgL_ez00_1564 = BgL_ez00_2858;
																				goto
																					BgL_zc3z04anonymousza31494ze3z87_1567;
																			}
																	}
																else
																	{	/* Expand/let.scm 86 */
																		goto BgL_tagzd2168zd2_1411;
																	}
															}
													}
											}
										else
											{	/* Expand/let.scm 86 */
												goto BgL_tagzd2168zd2_1411;
											}
									}
								else
									{	/* Expand/let.scm 86 */
										goto BgL_tagzd2168zd2_1411;
									}
							}
							{	/* Expand/let.scm 86 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_1399;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_19,
									BgL_resz00_1401);
							}
						}
					}
				}
			}
		}

	}



/* &expand-let */
	obj_t BGl_z62expandzd2letzb0zzexpand_letz00(obj_t BgL_envz00_2403,
		obj_t BgL_xz00_2404, obj_t BgL_ez00_2405)
	{
		{	/* Expand/let.scm 53 */
			return BGl_expandzd2letzd2zzexpand_letz00(BgL_xz00_2404, BgL_ez00_2405);
		}

	}



/* &<@anonymous:1566> */
	obj_t BGl_z62zc3z04anonymousza31566ze3ze5zzexpand_letz00(obj_t
		BgL_envz00_2406)
	{
		{	/* Expand/let.scm 82 */
			{	/* Expand/let.scm 82 */
				obj_t BgL_bodyz00_2407;
				obj_t BgL_ez00_2408;

				BgL_bodyz00_2407 = PROCEDURE_REF(BgL_envz00_2406, (int) (((long) 0)));
				BgL_ez00_2408 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2406, (int) (((long) 1))));
				{	/* Expand/let.scm 82 */
					obj_t BgL_arg1573z00_2450;

					BgL_arg1573z00_2450 =
						BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2407);
					return
						PROCEDURE_ENTRY(BgL_ez00_2408) (BgL_ez00_2408, BgL_arg1573z00_2450,
						BgL_ez00_2408, BEOA);
				}
			}
		}

	}



/* &<@anonymous:1442> */
	obj_t BGl_z62zc3z04anonymousza31442ze3ze5zzexpand_letz00(obj_t
		BgL_envz00_2409, obj_t BgL_xz00_2410, obj_t BgL_yz00_2411)
	{
		{	/* Expand/let.scm 64 */
			{	/* Expand/let.scm 65 */
				obj_t BgL__andtest_1100z00_2451;

				BgL__andtest_1100z00_2451 = CAR(((obj_t) BgL_xz00_2410));
				if (CBOOL(BgL__andtest_1100z00_2451))
					{	/* Expand/let.scm 65 */
						obj_t BgL_arg1448z00_2452;
						obj_t BgL_arg1449z00_2453;

						BgL_arg1448z00_2452 = CDR(((obj_t) BgL_xz00_2410));
						BgL_arg1449z00_2453 = CDR(((obj_t) BgL_yz00_2411));
						return MAKE_YOUNG_PAIR(BgL_arg1448z00_2452, BgL_arg1449z00_2453);
					}
				else
					{	/* Expand/let.scm 65 */
						return BFALSE;
					}
			}
		}

	}



/* expand-letrec */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2letreczd2zzexpand_letz00(obj_t
		BgL_xz00_21, obj_t BgL_ez00_22)
	{
		{	/* Expand/let.scm 104 */
			{
				obj_t BgL_ez00_1652;
				obj_t BgL_bdgsz00_1653;
				obj_t BgL_bodyz00_1654;

				{	/* Expand/let.scm 119 */
					obj_t BgL_oldzd2internalzd2_1629;

					BgL_oldzd2internalzd2_1629 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 121 */
						obj_t BgL_ez00_1630;

						BgL_ez00_1630 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_22);
						{	/* Expand/let.scm 121 */
							obj_t BgL_resz00_1631;

							{

								if (PAIRP(BgL_xz00_21))
									{	/* Expand/let.scm 122 */
										obj_t BgL_cdrzd2381zd2_1640;

										BgL_cdrzd2381zd2_1640 = CDR(BgL_xz00_21);
										if (PAIRP(BgL_cdrzd2381zd2_1640))
											{	/* Expand/let.scm 122 */
												obj_t BgL_cdrzd2384zd2_1642;

												BgL_cdrzd2384zd2_1642 = CDR(BgL_cdrzd2381zd2_1640);
												if (NULLP(CAR(BgL_cdrzd2381zd2_1640)))
													{	/* Expand/let.scm 122 */
														if (NULLP(BgL_cdrzd2384zd2_1642))
															{	/* Expand/let.scm 122 */
															BgL_tagzd2375zd2_1637:
																BgL_resz00_1631 =
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2092z00zzexpand_letz00,
																	BgL_xz00_21);
															}
														else
															{	/* Expand/let.scm 122 */
																{	/* Expand/let.scm 124 */
																	obj_t BgL_objz00_2281;

																	BgL_objz00_2281 = CNST_TABLE_REF(((long) 0));
																	{	/* Expand/let.scm 124 */
																		obj_t BgL_tmpz00_2897;

																		BgL_tmpz00_2897 = ((obj_t) BgL_xz00_21);
																		SET_CAR(BgL_tmpz00_2897, BgL_objz00_2281);
																}}
																BgL_resz00_1631 =
																	PROCEDURE_ENTRY(BgL_ez00_1630) (BgL_ez00_1630,
																	BgL_xz00_21, BgL_ez00_1630, BEOA);
													}}
												else
													{	/* Expand/let.scm 122 */
														obj_t BgL_carzd2399zd2_1647;
														obj_t BgL_cdrzd2400zd2_1648;

														BgL_carzd2399zd2_1647 =
															CAR(((obj_t) BgL_cdrzd2381zd2_1640));
														BgL_cdrzd2400zd2_1648 =
															CDR(((obj_t) BgL_cdrzd2381zd2_1640));
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd2399zd2_1647))
															{	/* Expand/let.scm 122 */
																if (NULLP(BgL_cdrzd2400zd2_1648))
																	{	/* Expand/let.scm 122 */
																		goto BgL_tagzd2375zd2_1637;
																	}
																else
																	{	/* Expand/let.scm 122 */
																		BgL_ez00_1652 = BgL_ez00_1630;
																		BgL_bdgsz00_1653 = BgL_carzd2399zd2_1647;
																		BgL_bodyz00_1654 = BgL_cdrzd2400zd2_1648;
																		{	/* Expand/let.scm 107 */
																			obj_t BgL_varsz00_1656;

																			if (NULLP(BgL_bdgsz00_1653))
																				{	/* Expand/let.scm 107 */
																					BgL_varsz00_1656 = BNIL;
																				}
																			else
																				{	/* Expand/let.scm 107 */
																					obj_t BgL_head1246z00_1685;

																					{	/* Expand/let.scm 107 */
																						obj_t BgL_res2018z00_2240;

																						BgL_res2018z00_2240 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1246z00_1685 =
																							BgL_res2018z00_2240;
																					}
																					{
																						obj_t BgL_l1244z00_1687;
																						obj_t BgL_tail1247z00_1688;

																						BgL_l1244z00_1687 =
																							BgL_bdgsz00_1653;
																						BgL_tail1247z00_1688 =
																							BgL_head1246z00_1685;
																					BgL_zc3z04anonymousza31687ze3z87_1689:
																						if (NULLP
																							(BgL_l1244z00_1687))
																							{	/* Expand/let.scm 107 */
																								BgL_varsz00_1656 =
																									CDR(BgL_head1246z00_1685);
																							}
																						else
																							{	/* Expand/let.scm 107 */
																								obj_t BgL_newtail1248z00_1691;

																								{	/* Expand/let.scm 107 */
																									obj_t BgL_arg1695z00_1693;

																									{	/* Expand/let.scm 107 */
																										obj_t BgL_xz00_1694;

																										BgL_xz00_1694 =
																											CAR(
																											((obj_t)
																												BgL_l1244z00_1687));
																										{
																											obj_t BgL_valz00_1695;

																											if (PAIRP(BgL_xz00_1694))
																												{	/* Expand/let.scm 108 */
																													obj_t
																														BgL_cdrzd2368zd2_1701;
																													BgL_cdrzd2368zd2_1701
																														=
																														CDR(BgL_xz00_1694);
																													if (PAIRP
																														(BgL_cdrzd2368zd2_1701))
																														{	/* Expand/let.scm 108 */
																															if (NULLP(CDR
																																	(BgL_cdrzd2368zd2_1701)))
																																{	/* Expand/let.scm 108 */
																																	BgL_valz00_1695
																																		=
																																		CAR
																																		(BgL_cdrzd2368zd2_1701);
																																	{	/* Expand/let.scm 109 */
																																		obj_t
																																			BgL_arg1719z00_1710;
																																		obj_t
																																			BgL_arg1725z00_1711;
																																		BgL_arg1719z00_1710
																																			=
																																			CDR((
																																				(obj_t)
																																				BgL_xz00_1694));
																																		BgL_arg1725z00_1711
																																			=
																																			PROCEDURE_ENTRY
																																			(BgL_ez00_1652)
																																			(BgL_ez00_1652,
																																			BgL_valz00_1695,
																																			BgL_ez00_1652,
																																			BEOA);
																																		{	/* Expand/let.scm 109 */
																																			obj_t
																																				BgL_tmpz00_2936;
																																			BgL_tmpz00_2936
																																				=
																																				((obj_t)
																																				BgL_arg1719z00_1710);
																																			SET_CAR
																																				(BgL_tmpz00_2936,
																																				BgL_arg1725z00_1711);
																																		}
																																	}
																																	BgL_arg1695z00_1693
																																		=
																																		BgL_xz00_1694;
																																}
																															else
																																{	/* Expand/let.scm 108 */
																																BgL_tagzd2363zd2_1698:
																																	BgL_arg1695z00_1693 = BGl_errorz00zz__errorz00(BFALSE, BGl_string2091z00zzexpand_letz00, BgL_xz00_1694);
																																}
																														}
																													else
																														{	/* Expand/let.scm 108 */
																															goto
																																BgL_tagzd2363zd2_1698;
																														}
																												}
																											else
																												{	/* Expand/let.scm 108 */
																													if (SYMBOLP
																														(BgL_xz00_1694))
																														{	/* Expand/let.scm 108 */
																															{	/* Expand/let.scm 110 */
																																obj_t
																																	BgL_list1726z00_1712;
																																{	/* Expand/let.scm 110 */
																																	obj_t
																																		BgL_arg1727z00_1713;
																																	BgL_arg1727z00_1713
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BUNSPEC,
																																		BNIL);
																																	BgL_list1726z00_1712
																																		=
																																		MAKE_YOUNG_PAIR
																																		(BgL_xz00_1694,
																																		BgL_arg1727z00_1713);
																																}
																																BgL_arg1695z00_1693
																																	=
																																	BgL_list1726z00_1712;
																															}
																														}
																													else
																														{	/* Expand/let.scm 108 */
																															goto
																																BgL_tagzd2363zd2_1698;
																														}
																												}
																										}
																									}
																									{	/* Expand/let.scm 107 */
																										obj_t BgL_res2027z00_2256;

																										BgL_res2027z00_2256 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1695z00_1693,
																											BNIL);
																										BgL_newtail1248z00_1691 =
																											BgL_res2027z00_2256;
																									}
																								}
																								SET_CDR(BgL_tail1247z00_1688,
																									BgL_newtail1248z00_1691);
																								{	/* Expand/let.scm 107 */
																									obj_t BgL_arg1692z00_1692;

																									BgL_arg1692z00_1692 =
																										CDR(
																										((obj_t)
																											BgL_l1244z00_1687));
																									{
																										obj_t BgL_tail1247z00_2950;
																										obj_t BgL_l1244z00_2949;

																										BgL_l1244z00_2949 =
																											BgL_arg1692z00_1692;
																										BgL_tail1247z00_2950 =
																											BgL_newtail1248z00_1691;
																										BgL_tail1247z00_1688 =
																											BgL_tail1247z00_2950;
																										BgL_l1244z00_1687 =
																											BgL_l1244z00_2949;
																										goto
																											BgL_zc3z04anonymousza31687ze3z87_1689;
																									}
																								}
																							}
																					}
																				}
																			{	/* Expand/let.scm 113 */
																				obj_t BgL_arg1634z00_1657;
																				obj_t BgL_arg1639z00_1658;

																				if (NULLP(BgL_varsz00_1656))
																					{	/* Expand/let.scm 113 */
																						BgL_arg1634z00_1657 = BNIL;
																					}
																				else
																					{	/* Expand/let.scm 113 */
																						obj_t BgL_head1251z00_1662;

																						{	/* Expand/let.scm 113 */
																							obj_t BgL_arg1663z00_1674;

																							{	/* Expand/let.scm 113 */
																								obj_t BgL_pairz00_2261;

																								BgL_pairz00_2261 =
																									CAR(
																									((obj_t) BgL_varsz00_1656));
																								BgL_arg1663z00_1674 =
																									CAR(BgL_pairz00_2261);
																							}
																							{	/* Expand/let.scm 113 */
																								obj_t BgL_res2029z00_2262;

																								BgL_res2029z00_2262 =
																									MAKE_YOUNG_PAIR
																									(BgL_arg1663z00_1674, BNIL);
																								BgL_head1251z00_1662 =
																									BgL_res2029z00_2262;
																							}
																						}
																						{	/* Expand/let.scm 113 */
																							obj_t BgL_g1254z00_1663;

																							BgL_g1254z00_1663 =
																								CDR(((obj_t) BgL_varsz00_1656));
																							{
																								obj_t BgL_l1249z00_1665;
																								obj_t BgL_tail1252z00_1666;

																								BgL_l1249z00_1665 =
																									BgL_g1254z00_1663;
																								BgL_tail1252z00_1666 =
																									BgL_head1251z00_1662;
																							BgL_zc3z04anonymousza31642ze3z87_1667:
																								if (NULLP
																									(BgL_l1249z00_1665))
																									{	/* Expand/let.scm 113 */
																										BgL_arg1634z00_1657 =
																											BgL_head1251z00_1662;
																									}
																								else
																									{	/* Expand/let.scm 113 */
																										obj_t
																											BgL_newtail1253z00_1669;
																										{	/* Expand/let.scm 113 */
																											obj_t BgL_arg1652z00_1671;

																											{	/* Expand/let.scm 113 */
																												obj_t BgL_pairz00_2266;

																												BgL_pairz00_2266 =
																													CAR(
																													((obj_t)
																														BgL_l1249z00_1665));
																												BgL_arg1652z00_1671 =
																													CAR(BgL_pairz00_2266);
																											}
																											{	/* Expand/let.scm 113 */
																												obj_t
																													BgL_res2031z00_2267;
																												BgL_res2031z00_2267 =
																													MAKE_YOUNG_PAIR
																													(BgL_arg1652z00_1671,
																													BNIL);
																												BgL_newtail1253z00_1669
																													= BgL_res2031z00_2267;
																											}
																										}
																										SET_CDR
																											(BgL_tail1252z00_1666,
																											BgL_newtail1253z00_1669);
																										{	/* Expand/let.scm 113 */
																											obj_t BgL_arg1644z00_1670;

																											BgL_arg1644z00_1670 =
																												CDR(
																												((obj_t)
																													BgL_l1249z00_1665));
																											{
																												obj_t
																													BgL_tail1252z00_2969;
																												obj_t BgL_l1249z00_2968;

																												BgL_l1249z00_2968 =
																													BgL_arg1644z00_1670;
																												BgL_tail1252z00_2969 =
																													BgL_newtail1253z00_1669;
																												BgL_tail1252z00_1666 =
																													BgL_tail1252z00_2969;
																												BgL_l1249z00_1665 =
																													BgL_l1249z00_2968;
																												goto
																													BgL_zc3z04anonymousza31642ze3z87_1667;
																											}
																										}
																									}
																							}
																						}
																					}
																				BgL_arg1639z00_1658 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_xz00_21);
																				{	/* Expand/let.scm 117 */
																					obj_t
																						BgL_zc3z04anonymousza31665ze3z87_2412;
																					BgL_zc3z04anonymousza31665ze3z87_2412
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31665ze3ze5zzexpand_letz00,
																						(int) (((long) 0)),
																						(int) (((long) 4)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31665ze3z87_2412,
																						(int) (((long) 0)), BgL_xz00_21);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31665ze3z87_2412,
																						(int) (((long) 1)),
																						BgL_bodyz00_1654);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31665ze3z87_2412,
																						(int) (((long) 2)), BgL_ez00_1652);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31665ze3z87_2412,
																						(int) (((long) 3)),
																						BgL_varsz00_1656);
																					BgL_resz00_1631 =
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_arg1634z00_1657,
																						CNST_TABLE_REF(((long) 4)),
																						BgL_arg1639z00_1658,
																						BgL_zc3z04anonymousza31665ze3z87_2412);
															}}}}}
														else
															{	/* Expand/let.scm 122 */
																goto BgL_tagzd2375zd2_1637;
															}
													}
											}
										else
											{	/* Expand/let.scm 122 */
												goto BgL_tagzd2375zd2_1637;
											}
									}
								else
									{	/* Expand/let.scm 122 */
										goto BgL_tagzd2375zd2_1637;
									}
							}
							{	/* Expand/let.scm 122 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_1629;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_21,
									BgL_resz00_1631);
							}
						}
					}
				}
			}
		}

	}



/* &expand-letrec */
	obj_t BGl_z62expandzd2letreczb0zzexpand_letz00(obj_t BgL_envz00_2413,
		obj_t BgL_xz00_2414, obj_t BgL_ez00_2415)
	{
		{	/* Expand/let.scm 104 */
			return
				BGl_expandzd2letreczd2zzexpand_letz00(BgL_xz00_2414, BgL_ez00_2415);
		}

	}



/* &<@anonymous:1665> */
	obj_t BGl_z62zc3z04anonymousza31665ze3ze5zzexpand_letz00(obj_t
		BgL_envz00_2416)
	{
		{	/* Expand/let.scm 116 */
			{	/* Expand/let.scm 117 */
				obj_t BgL_xz00_2417;
				obj_t BgL_bodyz00_2418;
				obj_t BgL_ez00_2419;
				obj_t BgL_varsz00_2420;

				BgL_xz00_2417 = PROCEDURE_REF(BgL_envz00_2416, (int) (((long) 0)));
				BgL_bodyz00_2418 = PROCEDURE_REF(BgL_envz00_2416, (int) (((long) 1)));
				BgL_ez00_2419 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2416, (int) (((long) 2))));
				BgL_varsz00_2420 = PROCEDURE_REF(BgL_envz00_2416, (int) (((long) 3)));
				{	/* Expand/let.scm 117 */
					obj_t BgL_arg1667z00_2454;
					obj_t BgL_arg1669z00_2455;

					BgL_arg1667z00_2454 = CAR(((obj_t) BgL_xz00_2417));
					{	/* Expand/let.scm 117 */
						obj_t BgL_arg1672z00_2456;

						{	/* Expand/let.scm 117 */
							obj_t BgL_arg1684z00_2457;

							{	/* Expand/let.scm 117 */
								obj_t BgL_arg1685z00_2458;

								BgL_arg1685z00_2458 =
									BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2418);
								BgL_arg1684z00_2457 =
									PROCEDURE_ENTRY(BgL_ez00_2419) (BgL_ez00_2419,
									BgL_arg1685z00_2458, BgL_ez00_2419, BEOA);
							}
							BgL_arg1672z00_2456 = MAKE_YOUNG_PAIR(BgL_arg1684z00_2457, BNIL);
						}
						BgL_arg1669z00_2455 =
							MAKE_YOUNG_PAIR(BgL_varsz00_2420, BgL_arg1672z00_2456);
					}
					return MAKE_YOUNG_PAIR(BgL_arg1667z00_2454, BgL_arg1669z00_2455);
				}
			}
		}

	}



/* expand-labels */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2labelszd2zzexpand_letz00(obj_t
		BgL_xz00_23, obj_t BgL_ez00_24)
	{
		{	/* Expand/let.scm 136 */
			{
				obj_t BgL_ez00_1740;
				obj_t BgL_bindingsz00_1741;
				obj_t BgL_bodyz00_1742;

				{	/* Expand/let.scm 171 */
					obj_t BgL_oldzd2internalzd2_1717;

					BgL_oldzd2internalzd2_1717 =
						BGl_internalzd2definitionzf3z21zzexpand_lambdaz00;
					BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 = BTRUE;
					{	/* Expand/let.scm 173 */
						obj_t BgL_ez00_1718;

						BgL_ez00_1718 =
							BGl_internalzd2beginzd2expanderz00zzexpand_lambdaz00(BgL_ez00_24);
						{	/* Expand/let.scm 173 */
							obj_t BgL_resz00_1719;

							{

								if (PAIRP(BgL_xz00_23))
									{	/* Expand/let.scm 174 */
										obj_t BgL_cdrzd2569zd2_1728;

										BgL_cdrzd2569zd2_1728 = CDR(BgL_xz00_23);
										if (PAIRP(BgL_cdrzd2569zd2_1728))
											{	/* Expand/let.scm 174 */
												obj_t BgL_cdrzd2572zd2_1730;

												BgL_cdrzd2572zd2_1730 = CDR(BgL_cdrzd2569zd2_1728);
												if (NULLP(CAR(BgL_cdrzd2569zd2_1728)))
													{	/* Expand/let.scm 174 */
														if (NULLP(BgL_cdrzd2572zd2_1730))
															{	/* Expand/let.scm 174 */
															BgL_tagzd2563zd2_1725:
																BgL_resz00_1719 =
																	BGl_errorz00zz__errorz00(BFALSE,
																	BGl_string2094z00zzexpand_letz00,
																	BgL_xz00_23);
															}
														else
															{	/* Expand/let.scm 174 */
																{	/* Expand/let.scm 176 */
																	obj_t BgL_objz00_2393;

																	BgL_objz00_2393 = CNST_TABLE_REF(((long) 0));
																	{	/* Expand/let.scm 176 */
																		obj_t BgL_tmpz00_3020;

																		BgL_tmpz00_3020 = ((obj_t) BgL_xz00_23);
																		SET_CAR(BgL_tmpz00_3020, BgL_objz00_2393);
																}}
																BgL_resz00_1719 =
																	PROCEDURE_ENTRY(BgL_ez00_1718) (BgL_ez00_1718,
																	BgL_xz00_23, BgL_ez00_1718, BEOA);
													}}
												else
													{	/* Expand/let.scm 174 */
														obj_t BgL_carzd2587zd2_1735;
														obj_t BgL_cdrzd2588zd2_1736;

														BgL_carzd2587zd2_1735 =
															CAR(((obj_t) BgL_cdrzd2569zd2_1728));
														BgL_cdrzd2588zd2_1736 =
															CDR(((obj_t) BgL_cdrzd2569zd2_1728));
														if (BGl_listzf3zf3zz__r4_pairs_and_lists_6_3z00
															(BgL_carzd2587zd2_1735))
															{	/* Expand/let.scm 174 */
																if (NULLP(BgL_cdrzd2588zd2_1736))
																	{	/* Expand/let.scm 174 */
																		goto BgL_tagzd2563zd2_1725;
																	}
																else
																	{	/* Expand/let.scm 174 */
																		BgL_ez00_1740 = BgL_ez00_1718;
																		BgL_bindingsz00_1741 =
																			BgL_carzd2587zd2_1735;
																		BgL_bodyz00_1742 = BgL_cdrzd2588zd2_1736;
																		{	/* Expand/let.scm 138 */
																			obj_t BgL_varsz00_1744;

																			if (NULLP(BgL_bindingsz00_1741))
																				{	/* Expand/let.scm 138 */
																					BgL_varsz00_1744 = BNIL;
																				}
																			else
																				{	/* Expand/let.scm 138 */
																					obj_t BgL_head1257z00_1792;

																					{	/* Expand/let.scm 138 */
																						obj_t BgL_res2038z00_2287;

																						BgL_res2038z00_2287 =
																							MAKE_YOUNG_PAIR(BNIL, BNIL);
																						BgL_head1257z00_1792 =
																							BgL_res2038z00_2287;
																					}
																					{
																						obj_t BgL_l1255z00_1794;
																						obj_t BgL_tail1258z00_1795;

																						BgL_l1255z00_1794 =
																							BgL_bindingsz00_1741;
																						BgL_tail1258z00_1795 =
																							BgL_head1257z00_1792;
																					BgL_zc3z04anonymousza31784ze3z87_1796:
																						if (NULLP
																							(BgL_l1255z00_1794))
																							{	/* Expand/let.scm 138 */
																								BgL_varsz00_1744 =
																									CDR(BgL_head1257z00_1792);
																							}
																						else
																							{	/* Expand/let.scm 138 */
																								obj_t BgL_newtail1259z00_1798;

																								{	/* Expand/let.scm 138 */
																									obj_t BgL_arg1796z00_1800;

																									{	/* Expand/let.scm 138 */
																										obj_t BgL_xz00_1801;

																										BgL_xz00_1801 =
																											CAR(
																											((obj_t)
																												BgL_l1255z00_1794));
																										{

																											if (PAIRP(BgL_xz00_1801))
																												{	/* Expand/let.scm 139 */
																													obj_t
																														BgL_cdrzd2427zd2_1813;
																													BgL_cdrzd2427zd2_1813
																														=
																														CDR(BgL_xz00_1801);
																													{	/* Expand/let.scm 139 */
																														obj_t
																															BgL_idz00_1814;
																														BgL_idz00_1814 =
																															CAR
																															(BgL_xz00_1801);
																														if (PAIRP
																															(BgL_cdrzd2427zd2_1813))
																															{	/* Expand/let.scm 139 */
																																if (NULLP(CAR
																																		(BgL_cdrzd2427zd2_1813)))
																																	{	/* Expand/let.scm 139 */
																																		BgL_arg1796z00_1800
																																			=
																																			BgL_idz00_1814;
																																	}
																																else
																																	{	/* Expand/let.scm 139 */
																																		bool_t
																																			BgL_test2188z00_3053;
																																		{	/* Expand/let.scm 139 */
																																			obj_t
																																				BgL_tmpz00_3054;
																																			BgL_tmpz00_3054
																																				=
																																				CAR
																																				(BgL_cdrzd2427zd2_1813);
																																			BgL_test2188z00_3053
																																				=
																																				SYMBOLP
																																				(BgL_tmpz00_3054);
																																		}
																																		if (BgL_test2188z00_3053)
																																			{	/* Expand/let.scm 139 */
																																				BgL_arg1796z00_1800
																																					=
																																					BgL_idz00_1814;
																																			}
																																		else
																																			{	/* Expand/let.scm 139 */
																																				obj_t
																																					BgL_idz00_1822;
																																				BgL_idz00_1822
																																					=
																																					CAR
																																					(BgL_xz00_1801);
																																				{
																																					obj_t
																																						BgL_gzd2454zd2_1881;
																																					obj_t
																																						BgL_gzd2449zd2_1827;
																																					BgL_gzd2449zd2_1827
																																						=
																																						CAR
																																						(CDR
																																						(BgL_xz00_1801));
																																					if (PAIRP(BgL_gzd2449zd2_1827))
																																						{	/* Expand/let.scm 139 */
																																							obj_t
																																								BgL_carzd2451zd2_1830;
																																							BgL_carzd2451zd2_1830
																																								=
																																								CAR
																																								(BgL_gzd2449zd2_1827);
																																							{

																																								if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_carzd2451zd2_1830))
																																									{	/* Expand/let.scm 139 */
																																									BgL_kapzd2453zd2_1831:
																																										{	/* Expand/let.scm 139 */
																																											obj_t
																																												BgL_arg1846z00_1857;
																																											BgL_arg1846z00_1857
																																												=
																																												CDR
																																												(
																																												((obj_t) BgL_gzd2449zd2_1827));
																																											BgL_gzd2454zd2_1881
																																												=
																																												BgL_arg1846z00_1857;
																																										BgL_zc3z04anonymousza31866ze3z87_1882:
																																											if (NULLP(BgL_gzd2454zd2_1881))
																																												{	/* Expand/let.scm 139 */
																																													BgL_arg1796z00_1800
																																														=
																																														BgL_idz00_1822;
																																												}
																																											else
																																												{	/* Expand/let.scm 139 */
																																													if (PAIRP(BgL_gzd2454zd2_1881))
																																														{	/* Expand/let.scm 139 */
																																															obj_t
																																																BgL_carzd2456zd2_1885;
																																															BgL_carzd2456zd2_1885
																																																=
																																																CAR
																																																(BgL_gzd2454zd2_1881);
																																															{

																																																if (BGl_dssslzd2namedzd2constantzf3zf3zz__dssslz00(BgL_carzd2456zd2_1885))
																																																	{	/* Expand/let.scm 139 */
																																																	BgL_kapzd2458zd2_1886:
																																																		{	/* Expand/let.scm 139 */
																																																			obj_t
																																																				BgL_arg1887z00_1912;
																																																			BgL_arg1887z00_1912
																																																				=
																																																				CDR
																																																				(
																																																				((obj_t) BgL_gzd2454zd2_1881));
																																																			{
																																																				obj_t
																																																					BgL_gzd2454zd2_3074;
																																																				BgL_gzd2454zd2_3074
																																																					=
																																																					BgL_arg1887z00_1912;
																																																				BgL_gzd2454zd2_1881
																																																					=
																																																					BgL_gzd2454zd2_3074;
																																																				goto
																																																					BgL_zc3z04anonymousza31866ze3z87_1882;
																																																			}
																																																		}
																																																	}
																																																else
																																																	{	/* Expand/let.scm 139 */
																																																		if (SYMBOLP(BgL_carzd2456zd2_1885))
																																																			{	/* Expand/let.scm 139 */
																																																				goto
																																																					BgL_kapzd2458zd2_1886;
																																																			}
																																																		else
																																																			{	/* Expand/let.scm 139 */
																																																				obj_t
																																																					BgL_idz00_1889;
																																																				BgL_idz00_1889
																																																					=
																																																					CAR
																																																					(
																																																					((obj_t) BgL_xz00_1801));
																																																				{
																																																					obj_t
																																																						BgL_gzd2472zd2_1902;
																																																					obj_t
																																																						BgL_gzd2468zd2_1894;
																																																					{	/* Expand/let.scm 139 */
																																																						obj_t
																																																							BgL_arg1871z00_1892;
																																																						{	/* Expand/let.scm 139 */
																																																							obj_t
																																																								BgL_pairz00_2349;
																																																							BgL_pairz00_2349
																																																								=
																																																								CDR
																																																								(
																																																								((obj_t) BgL_xz00_1801));
																																																							BgL_arg1871z00_1892
																																																								=
																																																								CAR
																																																								(BgL_pairz00_2349);
																																																						}
																																																						BgL_gzd2468zd2_1894
																																																							=
																																																							BgL_arg1871z00_1892;
																																																						if (SYMBOLP(BgL_gzd2468zd2_1894))
																																																							{	/* Expand/let.scm 139 */
																																																								BgL_arg1796z00_1800
																																																									=
																																																									BgL_idz00_1889;
																																																							}
																																																						else
																																																							{	/* Expand/let.scm 139 */
																																																								if (PAIRP(BgL_gzd2468zd2_1894))
																																																									{	/* Expand/let.scm 139 */
																																																										bool_t
																																																											BgL_test2197z00_3086;
																																																										{	/* Expand/let.scm 139 */
																																																											obj_t
																																																												BgL_tmpz00_3087;
																																																											BgL_tmpz00_3087
																																																												=
																																																												CAR
																																																												(BgL_gzd2468zd2_1894);
																																																											BgL_test2197z00_3086
																																																												=
																																																												SYMBOLP
																																																												(BgL_tmpz00_3087);
																																																										}
																																																										if (BgL_test2197z00_3086)
																																																											{	/* Expand/let.scm 139 */
																																																												BgL_gzd2472zd2_1902
																																																													=
																																																													CDR
																																																													(BgL_gzd2468zd2_1894);
																																																											BgL_zc3z04anonymousza31880ze3z87_1903:
																																																												if (SYMBOLP(BgL_gzd2472zd2_1902))
																																																													{	/* Expand/let.scm 139 */
																																																														BgL_arg1796z00_1800
																																																															=
																																																															BgL_idz00_1889;
																																																													}
																																																												else
																																																													{	/* Expand/let.scm 139 */
																																																														if (PAIRP(BgL_gzd2472zd2_1902))
																																																															{	/* Expand/let.scm 139 */
																																																																bool_t
																																																																	BgL_test2200z00_3094;
																																																																{	/* Expand/let.scm 139 */
																																																																	obj_t
																																																																		BgL_tmpz00_3095;
																																																																	BgL_tmpz00_3095
																																																																		=
																																																																		CAR
																																																																		(BgL_gzd2472zd2_1902);
																																																																	BgL_test2200z00_3094
																																																																		=
																																																																		SYMBOLP
																																																																		(BgL_tmpz00_3095);
																																																																}
																																																																if (BgL_test2200z00_3094)
																																																																	{
																																																																		obj_t
																																																																			BgL_gzd2472zd2_3098;
																																																																		BgL_gzd2472zd2_3098
																																																																			=
																																																																			CDR
																																																																			(BgL_gzd2472zd2_1902);
																																																																		BgL_gzd2472zd2_1902
																																																																			=
																																																																			BgL_gzd2472zd2_3098;
																																																																		goto
																																																																			BgL_zc3z04anonymousza31880ze3z87_1903;
																																																																	}
																																																																else
																																																																	{	/* Expand/let.scm 139 */
																																																																	BgL_tagzd2418zd2_1810:
																																																																		BgL_arg1796z00_1800 = BGl_errorz00zz__errorz00(BFALSE, BGl_string2093z00zzexpand_letz00, BgL_xz00_1801);
																																																																	}
																																																															}
																																																														else
																																																															{	/* Expand/let.scm 139 */
																																																																goto
																																																																	BgL_tagzd2418zd2_1810;
																																																															}
																																																													}
																																																											}
																																																										else
																																																											{	/* Expand/let.scm 139 */
																																																												goto
																																																													BgL_tagzd2418zd2_1810;
																																																											}
																																																									}
																																																								else
																																																									{	/* Expand/let.scm 139 */
																																																										goto
																																																											BgL_tagzd2418zd2_1810;
																																																									}
																																																							}
																																																					}
																																																				}
																																																			}
																																																	}
																																															}
																																														}
																																													else
																																														{	/* Expand/let.scm 139 */
																																															obj_t
																																																BgL_idz00_1913;
																																															BgL_idz00_1913
																																																=
																																																CAR
																																																(
																																																((obj_t) BgL_xz00_1801));
																																															{
																																																obj_t
																																																	BgL_gzd2489zd2_1926;
																																																obj_t
																																																	BgL_gzd2485zd2_1918;
																																																{	/* Expand/let.scm 139 */
																																																	obj_t
																																																		BgL_arg1888z00_1916;
																																																	{	/* Expand/let.scm 139 */
																																																		obj_t
																																																			BgL_pairz00_2362;
																																																		BgL_pairz00_2362
																																																			=
																																																			CDR
																																																			(
																																																			((obj_t) BgL_xz00_1801));
																																																		BgL_arg1888z00_1916
																																																			=
																																																			CAR
																																																			(BgL_pairz00_2362);
																																																	}
																																																	BgL_gzd2485zd2_1918
																																																		=
																																																		BgL_arg1888z00_1916;
																																																	if (SYMBOLP(BgL_gzd2485zd2_1918))
																																																		{	/* Expand/let.scm 139 */
																																																			BgL_arg1796z00_1800
																																																				=
																																																				BgL_idz00_1913;
																																																		}
																																																	else
																																																		{	/* Expand/let.scm 139 */
																																																			if (PAIRP(BgL_gzd2485zd2_1918))
																																																				{	/* Expand/let.scm 139 */
																																																					bool_t
																																																						BgL_test2203z00_3111;
																																																					{	/* Expand/let.scm 139 */
																																																						obj_t
																																																							BgL_tmpz00_3112;
																																																						BgL_tmpz00_3112
																																																							=
																																																							CAR
																																																							(BgL_gzd2485zd2_1918);
																																																						BgL_test2203z00_3111
																																																							=
																																																							SYMBOLP
																																																							(BgL_tmpz00_3112);
																																																					}
																																																					if (BgL_test2203z00_3111)
																																																						{	/* Expand/let.scm 139 */
																																																							BgL_gzd2489zd2_1926
																																																								=
																																																								CDR
																																																								(BgL_gzd2485zd2_1918);
																																																						BgL_zc3z04anonymousza31897ze3z87_1927:
																																																							if (SYMBOLP(BgL_gzd2489zd2_1926))
																																																								{	/* Expand/let.scm 139 */
																																																									BgL_arg1796z00_1800
																																																										=
																																																										BgL_idz00_1913;
																																																								}
																																																							else
																																																								{	/* Expand/let.scm 139 */
																																																									if (PAIRP(BgL_gzd2489zd2_1926))
																																																										{	/* Expand/let.scm 139 */
																																																											bool_t
																																																												BgL_test2206z00_3119;
																																																											{	/* Expand/let.scm 139 */
																																																												obj_t
																																																													BgL_tmpz00_3120;
																																																												BgL_tmpz00_3120
																																																													=
																																																													CAR
																																																													(BgL_gzd2489zd2_1926);
																																																												BgL_test2206z00_3119
																																																													=
																																																													SYMBOLP
																																																													(BgL_tmpz00_3120);
																																																											}
																																																											if (BgL_test2206z00_3119)
																																																												{
																																																													obj_t
																																																														BgL_gzd2489zd2_3123;
																																																													BgL_gzd2489zd2_3123
																																																														=
																																																														CDR
																																																														(BgL_gzd2489zd2_1926);
																																																													BgL_gzd2489zd2_1926
																																																														=
																																																														BgL_gzd2489zd2_3123;
																																																													goto
																																																														BgL_zc3z04anonymousza31897ze3z87_1927;
																																																												}
																																																											else
																																																												{	/* Expand/let.scm 139 */
																																																													goto
																																																														BgL_tagzd2418zd2_1810;
																																																												}
																																																										}
																																																									else
																																																										{	/* Expand/let.scm 139 */
																																																											goto
																																																												BgL_tagzd2418zd2_1810;
																																																										}
																																																								}
																																																						}
																																																					else
																																																						{	/* Expand/let.scm 139 */
																																																							goto
																																																								BgL_tagzd2418zd2_1810;
																																																						}
																																																				}
																																																			else
																																																				{	/* Expand/let.scm 139 */
																																																					goto
																																																						BgL_tagzd2418zd2_1810;
																																																				}
																																																		}
																																																}
																																															}
																																														}
																																												}
																																										}
																																									}
																																								else
																																									{	/* Expand/let.scm 139 */
																																										if (SYMBOLP(BgL_carzd2451zd2_1830))
																																											{	/* Expand/let.scm 139 */
																																												goto
																																													BgL_kapzd2453zd2_1831;
																																											}
																																										else
																																											{	/* Expand/let.scm 139 */
																																												obj_t
																																													BgL_idz00_1834;
																																												BgL_idz00_1834
																																													=
																																													CAR
																																													(
																																													((obj_t) BgL_xz00_1801));
																																												{
																																													obj_t
																																														BgL_gzd2506zd2_1847;
																																													obj_t
																																														BgL_gzd2502zd2_1839;
																																													{	/* Expand/let.scm 139 */
																																														obj_t
																																															BgL_arg1826z00_1837;
																																														{	/* Expand/let.scm 139 */
																																															obj_t
																																																BgL_pairz00_2318;
																																															BgL_pairz00_2318
																																																=
																																																CDR
																																																(
																																																((obj_t) BgL_xz00_1801));
																																															BgL_arg1826z00_1837
																																																=
																																																CAR
																																																(BgL_pairz00_2318);
																																														}
																																														BgL_gzd2502zd2_1839
																																															=
																																															BgL_arg1826z00_1837;
																																														if (SYMBOLP(BgL_gzd2502zd2_1839))
																																															{	/* Expand/let.scm 139 */
																																																BgL_arg1796z00_1800
																																																	=
																																																	BgL_idz00_1834;
																																															}
																																														else
																																															{	/* Expand/let.scm 139 */
																																																if (PAIRP(BgL_gzd2502zd2_1839))
																																																	{	/* Expand/let.scm 139 */
																																																		bool_t
																																																			BgL_test2210z00_3137;
																																																		{	/* Expand/let.scm 139 */
																																																			obj_t
																																																				BgL_tmpz00_3138;
																																																			BgL_tmpz00_3138
																																																				=
																																																				CAR
																																																				(BgL_gzd2502zd2_1839);
																																																			BgL_test2210z00_3137
																																																				=
																																																				SYMBOLP
																																																				(BgL_tmpz00_3138);
																																																		}
																																																		if (BgL_test2210z00_3137)
																																																			{	/* Expand/let.scm 139 */
																																																				BgL_gzd2506zd2_1847
																																																					=
																																																					CDR
																																																					(BgL_gzd2502zd2_1839);
																																																			BgL_zc3z04anonymousza31836ze3z87_1848:
																																																				if (SYMBOLP(BgL_gzd2506zd2_1847))
																																																					{	/* Expand/let.scm 139 */
																																																						BgL_arg1796z00_1800
																																																							=
																																																							BgL_idz00_1834;
																																																					}
																																																				else
																																																					{	/* Expand/let.scm 139 */
																																																						if (PAIRP(BgL_gzd2506zd2_1847))
																																																							{	/* Expand/let.scm 139 */
																																																								bool_t
																																																									BgL_test2213z00_3145;
																																																								{	/* Expand/let.scm 139 */
																																																									obj_t
																																																										BgL_tmpz00_3146;
																																																									BgL_tmpz00_3146
																																																										=
																																																										CAR
																																																										(BgL_gzd2506zd2_1847);
																																																									BgL_test2213z00_3145
																																																										=
																																																										SYMBOLP
																																																										(BgL_tmpz00_3146);
																																																								}
																																																								if (BgL_test2213z00_3145)
																																																									{
																																																										obj_t
																																																											BgL_gzd2506zd2_3149;
																																																										BgL_gzd2506zd2_3149
																																																											=
																																																											CDR
																																																											(BgL_gzd2506zd2_1847);
																																																										BgL_gzd2506zd2_1847
																																																											=
																																																											BgL_gzd2506zd2_3149;
																																																										goto
																																																											BgL_zc3z04anonymousza31836ze3z87_1848;
																																																									}
																																																								else
																																																									{	/* Expand/let.scm 139 */
																																																										goto
																																																											BgL_tagzd2418zd2_1810;
																																																									}
																																																							}
																																																						else
																																																							{	/* Expand/let.scm 139 */
																																																								goto
																																																									BgL_tagzd2418zd2_1810;
																																																							}
																																																					}
																																																			}
																																																		else
																																																			{	/* Expand/let.scm 139 */
																																																				goto
																																																					BgL_tagzd2418zd2_1810;
																																																			}
																																																	}
																																																else
																																																	{	/* Expand/let.scm 139 */
																																																		goto
																																																			BgL_tagzd2418zd2_1810;
																																																	}
																																															}
																																													}
																																												}
																																											}
																																									}
																																							}
																																						}
																																					else
																																						{	/* Expand/let.scm 139 */
																																							obj_t
																																								BgL_idz00_1858;
																																							BgL_idz00_1858
																																								=
																																								CAR
																																								(
																																								((obj_t) BgL_xz00_1801));
																																							{
																																								obj_t
																																									BgL_gzd2523zd2_1871;
																																								obj_t
																																									BgL_gzd2519zd2_1863;
																																								{	/* Expand/let.scm 139 */
																																									obj_t
																																										BgL_arg1847z00_1861;
																																									{	/* Expand/let.scm 139 */
																																										obj_t
																																											BgL_pairz00_2331;
																																										BgL_pairz00_2331
																																											=
																																											CDR
																																											(
																																											((obj_t) BgL_xz00_1801));
																																										BgL_arg1847z00_1861
																																											=
																																											CAR
																																											(BgL_pairz00_2331);
																																									}
																																									BgL_gzd2519zd2_1863
																																										=
																																										BgL_arg1847z00_1861;
																																									if (SYMBOLP(BgL_gzd2519zd2_1863))
																																										{	/* Expand/let.scm 139 */
																																											BgL_arg1796z00_1800
																																												=
																																												BgL_idz00_1858;
																																										}
																																									else
																																										{	/* Expand/let.scm 139 */
																																											if (PAIRP(BgL_gzd2519zd2_1863))
																																												{	/* Expand/let.scm 139 */
																																													bool_t
																																														BgL_test2216z00_3161;
																																													{	/* Expand/let.scm 139 */
																																														obj_t
																																															BgL_tmpz00_3162;
																																														BgL_tmpz00_3162
																																															=
																																															CAR
																																															(BgL_gzd2519zd2_1863);
																																														BgL_test2216z00_3161
																																															=
																																															SYMBOLP
																																															(BgL_tmpz00_3162);
																																													}
																																													if (BgL_test2216z00_3161)
																																														{	/* Expand/let.scm 139 */
																																															BgL_gzd2523zd2_1871
																																																=
																																																CDR
																																																(BgL_gzd2519zd2_1863);
																																														BgL_zc3z04anonymousza31857ze3z87_1872:
																																															if (SYMBOLP(BgL_gzd2523zd2_1871))
																																																{	/* Expand/let.scm 139 */
																																																	BgL_arg1796z00_1800
																																																		=
																																																		BgL_idz00_1858;
																																																}
																																															else
																																																{	/* Expand/let.scm 139 */
																																																	if (PAIRP(BgL_gzd2523zd2_1871))
																																																		{	/* Expand/let.scm 139 */
																																																			bool_t
																																																				BgL_test2219z00_3169;
																																																			{	/* Expand/let.scm 139 */
																																																				obj_t
																																																					BgL_tmpz00_3170;
																																																				BgL_tmpz00_3170
																																																					=
																																																					CAR
																																																					(BgL_gzd2523zd2_1871);
																																																				BgL_test2219z00_3169
																																																					=
																																																					SYMBOLP
																																																					(BgL_tmpz00_3170);
																																																			}
																																																			if (BgL_test2219z00_3169)
																																																				{
																																																					obj_t
																																																						BgL_gzd2523zd2_3173;
																																																					BgL_gzd2523zd2_3173
																																																						=
																																																						CDR
																																																						(BgL_gzd2523zd2_1871);
																																																					BgL_gzd2523zd2_1871
																																																						=
																																																						BgL_gzd2523zd2_3173;
																																																					goto
																																																						BgL_zc3z04anonymousza31857ze3z87_1872;
																																																				}
																																																			else
																																																				{	/* Expand/let.scm 139 */
																																																					goto
																																																						BgL_tagzd2418zd2_1810;
																																																				}
																																																		}
																																																	else
																																																		{	/* Expand/let.scm 139 */
																																																			goto
																																																				BgL_tagzd2418zd2_1810;
																																																		}
																																																}
																																														}
																																													else
																																														{	/* Expand/let.scm 139 */
																																															goto
																																																BgL_tagzd2418zd2_1810;
																																														}
																																												}
																																											else
																																												{	/* Expand/let.scm 139 */
																																													goto
																																														BgL_tagzd2418zd2_1810;
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
																															{	/* Expand/let.scm 139 */
																																goto
																																	BgL_tagzd2418zd2_1810;
																															}
																													}
																												}
																											else
																												{	/* Expand/let.scm 139 */
																													goto
																														BgL_tagzd2418zd2_1810;
																												}
																										}
																									}
																									{	/* Expand/let.scm 138 */
																										obj_t BgL_res2073z00_2365;

																										BgL_res2073z00_2365 =
																											MAKE_YOUNG_PAIR
																											(BgL_arg1796z00_1800,
																											BNIL);
																										BgL_newtail1259z00_1798 =
																											BgL_res2073z00_2365;
																									}
																								}
																								SET_CDR(BgL_tail1258z00_1795,
																									BgL_newtail1259z00_1798);
																								{	/* Expand/let.scm 138 */
																									obj_t BgL_arg1790z00_1799;

																									BgL_arg1790z00_1799 =
																										CDR(
																										((obj_t)
																											BgL_l1255z00_1794));
																									{
																										obj_t BgL_tail1258z00_3183;
																										obj_t BgL_l1255z00_3182;

																										BgL_l1255z00_3182 =
																											BgL_arg1790z00_1799;
																										BgL_tail1258z00_3183 =
																											BgL_newtail1259z00_1798;
																										BgL_tail1258z00_1795 =
																											BgL_tail1258z00_3183;
																										BgL_l1255z00_1794 =
																											BgL_l1255z00_3182;
																										goto
																											BgL_zc3z04anonymousza31784ze3z87_1796;
																									}
																								}
																							}
																					}
																				}
																			{	/* Expand/let.scm 154 */
																				obj_t BgL_arg1740z00_1745;

																				BgL_arg1740z00_1745 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_xz00_23);
																				{	/* Expand/let.scm 156 */
																					obj_t
																						BgL_zc3z04anonymousza31742ze3z87_2422;
																					BgL_zc3z04anonymousza31742ze3z87_2422
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31742ze3ze5zzexpand_letz00,
																						(int) (((long) 0)),
																						(int) (((long) 3)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31742ze3z87_2422,
																						(int) (((long) 0)),
																						BgL_bindingsz00_1741);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31742ze3z87_2422,
																						(int) (((long) 1)), BgL_ez00_1740);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31742ze3z87_2422,
																						(int) (((long) 2)),
																						BgL_bodyz00_1742);
																					BgL_resz00_1719 =
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_varsz00_1744,
																						CNST_TABLE_REF(((long) 4)),
																						BgL_arg1740z00_1745,
																						BgL_zc3z04anonymousza31742ze3z87_2422);
															}}}}}
														else
															{	/* Expand/let.scm 174 */
																goto BgL_tagzd2563zd2_1725;
															}
													}
											}
										else
											{	/* Expand/let.scm 174 */
												goto BgL_tagzd2563zd2_1725;
											}
									}
								else
									{	/* Expand/let.scm 174 */
										goto BgL_tagzd2563zd2_1725;
									}
							}
							{	/* Expand/let.scm 174 */

								BGl_internalzd2definitionzf3z21zzexpand_lambdaz00 =
									BgL_oldzd2internalzd2_1717;
								return BGl_replacez12z12zztools_miscz00(BgL_xz00_23,
									BgL_resz00_1719);
							}
						}
					}
				}
			}
		}

	}



/* &expand-labels */
	obj_t BGl_z62expandzd2labelszb0zzexpand_letz00(obj_t BgL_envz00_2423,
		obj_t BgL_xz00_2424, obj_t BgL_ez00_2425)
	{
		{	/* Expand/let.scm 136 */
			return
				BGl_expandzd2labelszd2zzexpand_letz00(BgL_xz00_2424, BgL_ez00_2425);
		}

	}



/* &<@anonymous:1742> */
	obj_t BGl_z62zc3z04anonymousza31742ze3ze5zzexpand_letz00(obj_t
		BgL_envz00_2426)
	{
		{	/* Expand/let.scm 155 */
			{	/* Expand/let.scm 156 */
				obj_t BgL_bindingsz00_2427;
				obj_t BgL_ez00_2428;
				obj_t BgL_bodyz00_2429;

				BgL_bindingsz00_2427 =
					PROCEDURE_REF(BgL_envz00_2426, (int) (((long) 0)));
				BgL_ez00_2428 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2426, (int) (((long) 1))));
				BgL_bodyz00_2429 = PROCEDURE_REF(BgL_envz00_2426, (int) (((long) 2)));
				{	/* Expand/let.scm 156 */
					obj_t BgL_newz00_2459;

					if (NULLP(BgL_bindingsz00_2427))
						{	/* Expand/let.scm 156 */
							BgL_newz00_2459 = BNIL;
						}
					else
						{	/* Expand/let.scm 156 */
							obj_t BgL_head1262z00_2460;

							{	/* Expand/let.scm 156 */
								obj_t BgL_res2075z00_2461;

								BgL_res2075z00_2461 = MAKE_YOUNG_PAIR(BNIL, BNIL);
								BgL_head1262z00_2460 = BgL_res2075z00_2461;
							}
							{
								obj_t BgL_l1260z00_2463;
								obj_t BgL_tail1263z00_2464;

								BgL_l1260z00_2463 = BgL_bindingsz00_2427;
								BgL_tail1263z00_2464 = BgL_head1262z00_2460;
							BgL_zc3z04anonymousza31749ze3z87_2462:
								if (NULLP(BgL_l1260z00_2463))
									{	/* Expand/let.scm 156 */
										BgL_newz00_2459 = CDR(BgL_head1262z00_2460);
									}
								else
									{	/* Expand/let.scm 156 */
										obj_t BgL_newtail1264z00_2465;

										{	/* Expand/let.scm 156 */
											obj_t BgL_arg1755z00_2466;

											{	/* Expand/let.scm 156 */
												obj_t BgL_xz00_2467;

												BgL_xz00_2467 = CAR(((obj_t) BgL_l1260z00_2463));
												{
													obj_t BgL_namez00_2470;
													obj_t BgL_argsz00_2471;
													obj_t BgL_lbodyz00_2472;

													if (PAIRP(BgL_xz00_2467))
														{	/* Expand/let.scm 157 */
															obj_t BgL_cdrzd2552zd2_2476;

															BgL_cdrzd2552zd2_2476 = CDR(BgL_xz00_2467);
															if (PAIRP(BgL_cdrzd2552zd2_2476))
																{	/* Expand/let.scm 157 */
																	obj_t BgL_cdrzd2557zd2_2477;

																	BgL_cdrzd2557zd2_2477 =
																		CDR(BgL_cdrzd2552zd2_2476);
																	if (NULLP(BgL_cdrzd2557zd2_2477))
																		{	/* Expand/let.scm 157 */
																		BgL_tagzd2543zd2_2469:
																			BgL_arg1755z00_2466 =
																				BGl_errorz00zz__errorz00(BFALSE,
																				BGl_string2093z00zzexpand_letz00,
																				BgL_xz00_2467);
																		}
																	else
																		{	/* Expand/let.scm 157 */
																			BgL_namez00_2470 = CAR(BgL_xz00_2467);
																			BgL_argsz00_2471 =
																				CAR(BgL_cdrzd2552zd2_2476);
																			BgL_lbodyz00_2472 = BgL_cdrzd2557zd2_2477;
																			{	/* Expand/let.scm 160 */
																				obj_t BgL_arg1768z00_2473;
																				obj_t BgL_arg1771z00_2474;

																				BgL_arg1768z00_2473 =
																					BGl_argsza2zd2ze3argszd2listz41zztools_argsz00
																					(BgL_argsz00_2471);
																				BgL_arg1771z00_2474 =
																					BGl_findzd2locationzd2zztools_locationz00
																					(BgL_xz00_2467);
																				{	/* Expand/let.scm 164 */
																					obj_t
																						BgL_zc3z04anonymousza31776ze3z87_2475;
																					BgL_zc3z04anonymousza31776ze3z87_2475
																						=
																						MAKE_FX_PROCEDURE
																						(BGl_z62zc3z04anonymousza31776ze3ze5zzexpand_letz00,
																						(int) (((long) 0)),
																						(int) (((long) 5)));
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31776ze3z87_2475,
																						(int) (((long) 0)),
																						BgL_lbodyz00_2472);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31776ze3z87_2475,
																						(int) (((long) 1)), BgL_ez00_2428);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31776ze3z87_2475,
																						(int) (((long) 2)),
																						BgL_argsz00_2471);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31776ze3z87_2475,
																						(int) (((long) 3)),
																						BgL_namez00_2470);
																					PROCEDURE_SET
																						(BgL_zc3z04anonymousza31776ze3z87_2475,
																						(int) (((long) 4)), BgL_xz00_2467);
																					BgL_arg1755z00_2466 =
																						BGl_withzd2lexicalzd2zzexpand_epsz00
																						(BgL_arg1768z00_2473,
																						CNST_TABLE_REF(((long) 4)),
																						BgL_arg1771z00_2474,
																						BgL_zc3z04anonymousza31776ze3z87_2475);
																}}}}
															else
																{	/* Expand/let.scm 157 */
																	goto BgL_tagzd2543zd2_2469;
																}
														}
													else
														{	/* Expand/let.scm 157 */
															goto BgL_tagzd2543zd2_2469;
														}
												}
											}
											{	/* Expand/let.scm 156 */
												obj_t BgL_res2080z00_2478;

												BgL_res2080z00_2478 =
													MAKE_YOUNG_PAIR(BgL_arg1755z00_2466, BNIL);
												BgL_newtail1264z00_2465 = BgL_res2080z00_2478;
											}
										}
										SET_CDR(BgL_tail1263z00_2464, BgL_newtail1264z00_2465);
										{	/* Expand/let.scm 156 */
											obj_t BgL_arg1754z00_2479;

											BgL_arg1754z00_2479 = CDR(((obj_t) BgL_l1260z00_2463));
											{
												obj_t BgL_tail1263z00_3246;
												obj_t BgL_l1260z00_3245;

												BgL_l1260z00_3245 = BgL_arg1754z00_2479;
												BgL_tail1263z00_3246 = BgL_newtail1264z00_2465;
												BgL_tail1263z00_2464 = BgL_tail1263z00_3246;
												BgL_l1260z00_2463 = BgL_l1260z00_3245;
												goto BgL_zc3z04anonymousza31749ze3z87_2462;
											}
										}
									}
							}
						}
					{	/* Expand/let.scm 170 */
						obj_t BgL_arg1743z00_2480;

						{	/* Expand/let.scm 170 */
							obj_t BgL_arg1744z00_2481;

							{	/* Expand/let.scm 170 */
								obj_t BgL_arg1745z00_2482;

								{	/* Expand/let.scm 170 */
									obj_t BgL_arg1746z00_2483;

									BgL_arg1746z00_2483 =
										BGl_expandzd2prognzd2zz__prognz00(BgL_bodyz00_2429);
									BgL_arg1745z00_2482 =
										PROCEDURE_ENTRY(BgL_ez00_2428) (BgL_ez00_2428,
										BgL_arg1746z00_2483, BgL_ez00_2428, BEOA);
								}
								BgL_arg1744z00_2481 =
									MAKE_YOUNG_PAIR(BgL_arg1745z00_2482, BNIL);
							}
							BgL_arg1743z00_2480 =
								MAKE_YOUNG_PAIR(BgL_newz00_2459, BgL_arg1744z00_2481);
						}
						return
							MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 5)), BgL_arg1743z00_2480);
		}}}}

	}



/* &<@anonymous:1776> */
	obj_t BGl_z62zc3z04anonymousza31776ze3ze5zzexpand_letz00(obj_t
		BgL_envz00_2430)
	{
		{	/* Expand/let.scm 163 */
			{	/* Expand/let.scm 164 */
				obj_t BgL_lbodyz00_2431;
				obj_t BgL_ez00_2432;
				obj_t BgL_argsz00_2433;
				obj_t BgL_namez00_2434;
				obj_t BgL_xz00_2435;

				BgL_lbodyz00_2431 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 0)));
				BgL_ez00_2432 =
					((obj_t) PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 1))));
				BgL_argsz00_2433 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 2)));
				BgL_namez00_2434 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 3)));
				BgL_xz00_2435 = PROCEDURE_REF(BgL_envz00_2430, (int) (((long) 4)));
				{	/* Expand/let.scm 164 */
					obj_t BgL_bodyz00_2484;

					{	/* Expand/let.scm 164 */
						obj_t BgL_arg1782z00_2485;

						BgL_arg1782z00_2485 =
							BGl_expandzd2prognzd2zz__prognz00(BgL_lbodyz00_2431);
						BgL_bodyz00_2484 =
							PROCEDURE_ENTRY(BgL_ez00_2432) (BgL_ez00_2432,
							BgL_arg1782z00_2485, BgL_ez00_2432, BEOA);
					}
					{	/* Expand/let.scm 164 */
						obj_t BgL_bz00_2486;

						{	/* Expand/let.scm 165 */
							obj_t BgL_arg1778z00_2487;

							{	/* Expand/let.scm 165 */
								obj_t BgL_arg1779z00_2488;

								BgL_arg1779z00_2488 = MAKE_YOUNG_PAIR(BgL_bodyz00_2484, BNIL);
								BgL_arg1778z00_2487 =
									MAKE_YOUNG_PAIR(BgL_argsz00_2433, BgL_arg1779z00_2488);
							}
							BgL_bz00_2486 =
								MAKE_YOUNG_PAIR(BgL_namez00_2434, BgL_arg1778z00_2487);
						}
						{	/* Expand/let.scm 165 */

							return
								BGl_epairifyz00zztools_miscz00(BgL_bz00_2486, BgL_xz00_2435);
						}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzexpand_letz00()
	{
		{	/* Expand/let.scm 15 */
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_prognz00(((long) 302006061),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_argsz00(((long) 47101498),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzexpand_lambdaz00(((long) 223654870),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			BGl_modulezd2initializa7ationz75zzexpand_epsz00(((long) 359337061),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string2095z00zzexpand_letz00));
		}

	}

#ifdef __cplusplus
}
#endif
