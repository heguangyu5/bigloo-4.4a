/*===========================================================================*/
/*   (Tools/progn.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Tools/progn.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t);
	BGL_IMPORT obj_t BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00(obj_t,
		obj_t);
	static obj_t BGl_z62prognzd2firstzd2expressionz62zztools_prognz00(obj_t,
		obj_t);
	static obj_t BGl_objectzd2initzd2zztools_prognz00();
	static obj_t BGl_appendzd221011zd2zztools_prognz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zztools_prognz00();
	static obj_t BGl_z62emapz62zztools_prognz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62normaliza7ezd2beginz17zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zztools_prognz00();
	static obj_t BGl_z62normaliza7ezd2prognzf2locze5zztools_prognz00(obj_t, obj_t,
		obj_t);
	static obj_t BGl_loopze70ze7zztools_prognz00(obj_t, obj_t, obj_t);
	static obj_t BGl_loopze71ze7zztools_prognz00(obj_t);
	static obj_t BGl_z62prognzd2tailzd2expressionsz62zztools_prognz00(obj_t,
		obj_t);
	BGL_IMPORT obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_z62normaliza7ezd2prognz17zztools_prognz00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zztools_prognz00 = BUNSPEC;
	BGL_EXPORTED_DECL obj_t
		BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t, obj_t);
	static obj_t BGl_toplevelzd2initzd2zztools_prognz00();
	extern obj_t BGl_epairifyz00zztools_miscz00(obj_t, obj_t);
	extern obj_t BGl_internalzd2errorzd2zztools_errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zztools_prognz00();
	BGL_IMPORT obj_t bgl_reverse_bang(obj_t);
	BGL_IMPORT obj_t BGl_readz00zz__readerz00(obj_t, obj_t);
	BGL_IMPORT obj_t BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00(obj_t,
		obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_normaliza7ezd2beginz75zztools_prognz00(obj_t);
	BGL_EXPORTED_DECL obj_t BGl_emapz00zztools_prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_locationz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_errorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_miscz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zztools_prognz00();
	static obj_t BGl_libraryzd2moduleszd2initz00zztools_prognz00();
	static obj_t BGl_importedzd2moduleszd2initz00zztools_prognz00();
	BGL_EXPORTED_DECL obj_t
		BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t);
	static obj_t __cnst[3];


	   
		 
		DEFINE_STRING(BGl_string1286z00zztools_prognz00,
		BgL_bgl_string1286za700za7za7t1297za7, "normalize-progn", 15);
	      DEFINE_STRING(BGl_string1287z00zztools_prognz00,
		BgL_bgl_string1287za700za7za7t1298za7, "Illegal expression", 18);
	      DEFINE_STRING(BGl_string1288z00zztools_prognz00,
		BgL_bgl_string1288za700za7za7t1299za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1289z00zztools_prognz00,
		BgL_bgl_string1289za700za7za7t1300za7, "Illegal parameter list", 22);
	      DEFINE_STRING(BGl_string1290z00zztools_prognz00,
		BgL_bgl_string1290za700za7za7t1301za7, "tools_progn", 11);
	      DEFINE_STRING(BGl_string1291z00zztools_prognz00,
		BgL_bgl_string1291za700za7za7t1302za7, "emap normalize-begin begin ", 27);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2prognzf2loczd2envz55zztools_prognz00,
		BgL_bgl_za762normaliza7a7eza7d1303za7,
		BGl_z62normaliza7ezd2prognzf2locze5zztools_prognz00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2beginzd2envza7zztools_prognz00,
		BgL_bgl_za762normaliza7a7eza7d1304za7,
		BGl_z62normaliza7ezd2beginz17zztools_prognz00, 0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_emapzd2envzd2zztools_prognz00,
		BgL_bgl_za762emapza762za7za7tool1305z00, BGl_z62emapz62zztools_prognz00, 0L,
		BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prognzd2tailzd2expressionszd2envzd2zztools_prognz00,
		BgL_bgl_za762prognza7d2tailza71306za7,
		BGl_z62prognzd2tailzd2expressionsz62zztools_prognz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_normaliza7ezd2prognzd2envza7zztools_prognz00,
		BgL_bgl_za762normaliza7a7eza7d1307za7,
		BGl_z62normaliza7ezd2prognz17zztools_prognz00, 0L, BUNSPEC, 1);
	     
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_prognzd2firstzd2expressionzd2envzd2zztools_prognz00,
		BgL_bgl_za762prognza7d2first1308z00,
		BGl_z62prognzd2firstzd2expressionz62zztools_prognz00, 0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zztools_prognz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zztools_prognz00(long
		BgL_checksumz00_342, char *BgL_fromz00_343)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zztools_prognz00))
				{
					BGl_requirezd2initializa7ationz75zztools_prognz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zztools_prognz00();
					BGl_libraryzd2moduleszd2initz00zztools_prognz00();
					BGl_cnstzd2initzd2zztools_prognz00();
					BGl_importedzd2moduleszd2initz00zztools_prognz00();
					return BGl_toplevelzd2initzd2zztools_prognz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"tools_progn");
			BGl_modulezd2initializa7ationz75zz__prognz00(((long) 0), "tools_progn");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "tools_progn");
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 0),
				"tools_progn");
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) 0),
				"tools_progn");
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 0),
				"tools_progn");
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 0), "tools_progn");
			return BUNSPEC;
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			{	/* Tools/progn.scm 15 */
				obj_t BgL_cportz00_329;

				{	/* Tools/progn.scm 15 */
					obj_t BgL_stringz00_337;

					BgL_stringz00_337 = BGl_string1291z00zztools_prognz00;
					{	/* Tools/progn.scm 15 */
						obj_t BgL_startz00_338;

						BgL_startz00_338 = BINT(((long) 0));
						{	/* Tools/progn.scm 15 */
							obj_t BgL_endz00_339;

							BgL_endz00_339 = BINT(STRING_LENGTH(((obj_t) BgL_stringz00_337)));
							{	/* Tools/progn.scm 15 */

								BgL_cportz00_329 =
									BGl_openzd2inputzd2stringz12z12zz__r4_ports_6_10_1z00
									(BgL_stringz00_337, BgL_startz00_338, BgL_endz00_339);
				}}}}
				{
					long BgL_iz00_330;

					BgL_iz00_330 = ((long) 2);
				BgL_loopz00_331:
					if ((BgL_iz00_330 == ((long) -1)))
						{	/* Tools/progn.scm 15 */
							return BUNSPEC;
						}
					else
						{	/* Tools/progn.scm 15 */
							{	/* Tools/progn.scm 15 */
								obj_t BgL_arg1295z00_333;

								{	/* Tools/progn.scm 15 */

									{	/* Tools/progn.scm 15 */
										obj_t BgL_locationz00_335;

										BgL_locationz00_335 = BBOOL(((bool_t) 0));
										{	/* Tools/progn.scm 15 */

											BgL_arg1295z00_333 =
												BGl_readz00zz__readerz00(BgL_cportz00_329,
												BgL_locationz00_335);
										}
									}
								}
								{	/* Tools/progn.scm 15 */
									int BgL_tmpz00_368;

									BgL_tmpz00_368 = (int) (BgL_iz00_330);
									CNST_TABLE_SET(BgL_tmpz00_368, BgL_arg1295z00_333);
							}}
							{	/* Tools/progn.scm 15 */
								int BgL_auxz00_336;

								BgL_auxz00_336 = (int) ((BgL_iz00_330 - ((long) 1)));
								{
									long BgL_iz00_373;

									BgL_iz00_373 = (long) (BgL_auxz00_336);
									BgL_iz00_330 = BgL_iz00_373;
									goto BgL_loopz00_331;
								}
							}
						}
				}
			}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zztools_prognz00(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_25;

				BgL_headz00_25 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_26;
					obj_t BgL_tailz00_27;

					BgL_prevz00_26 = BgL_headz00_25;
					BgL_tailz00_27 = BgL_l1z00_1;
				BgL_loopz00_28:
					if (PAIRP(BgL_tailz00_27))
						{
							obj_t BgL_newzd2prevzd2_30;

							BgL_newzd2prevzd2_30 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_27), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_26, BgL_newzd2prevzd2_30);
							{
								obj_t BgL_tailz00_383;
								obj_t BgL_prevz00_382;

								BgL_prevz00_382 = BgL_newzd2prevzd2_30;
								BgL_tailz00_383 = CDR(BgL_tailz00_27);
								BgL_tailz00_27 = BgL_tailz00_383;
								BgL_prevz00_26 = BgL_prevz00_382;
								goto BgL_loopz00_28;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_25);
				}
			}
		}

	}



/* normalize-progn */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2prognz75zztools_prognz00(obj_t
		BgL_bodyza2za2_17)
	{
		{	/* Tools/progn.scm 31 */
		BGl_normaliza7ezd2prognz75zztools_prognz00:
			if (PAIRP(BgL_bodyza2za2_17))
				{	/* Tools/progn.scm 33 */
					if (NULLP(CDR(BgL_bodyza2za2_17)))
						{	/* Tools/progn.scm 36 */
							obj_t BgL_ezd2105zd2_54;

							BgL_ezd2105zd2_54 = CAR(BgL_bodyza2za2_17);
							if (PAIRP(BgL_ezd2105zd2_54))
								{	/* Tools/progn.scm 36 */
									if ((CAR(BgL_ezd2105zd2_54) == CNST_TABLE_REF(((long) 0))))
										{	/* Tools/progn.scm 36 */
											if (NULLP(CDR(BgL_ezd2105zd2_54)))
												{	/* Tools/progn.scm 36 */
													return BUNSPEC;
												}
											else
												{	/* Tools/progn.scm 36 */
													obj_t BgL_cdrzd2112zd2_60;

													BgL_cdrzd2112zd2_60 = CDR(BgL_ezd2105zd2_54);
													if (PAIRP(BgL_cdrzd2112zd2_60))
														{	/* Tools/progn.scm 36 */
															if (NULLP(CDR(BgL_cdrzd2112zd2_60)))
																{	/* Tools/progn.scm 36 */
																	return BgL_ezd2105zd2_54;
																}
															else
																{
																	obj_t BgL_bodyza2za2_407;

																	BgL_bodyza2za2_407 = BgL_cdrzd2112zd2_60;
																	BgL_bodyza2za2_17 = BgL_bodyza2za2_407;
																	goto
																		BGl_normaliza7ezd2prognz75zztools_prognz00;
																}
														}
													else
														{
															obj_t BgL_bodyza2za2_408;

															BgL_bodyza2za2_408 = BgL_cdrzd2112zd2_60;
															BgL_bodyza2za2_17 = BgL_bodyza2za2_408;
															goto BGl_normaliza7ezd2prognz75zztools_prognz00;
														}
												}
										}
									else
										{	/* Tools/progn.scm 36 */
											return BgL_ezd2105zd2_54;
										}
								}
							else
								{	/* Tools/progn.scm 36 */
									return BgL_ezd2105zd2_54;
								}
						}
					else
						{	/* Tools/progn.scm 46 */
							obj_t BgL_subz00_70;

							{	/* Tools/progn.scm 46 */
								obj_t BgL_g1012z00_73;

								if ((CAR(BgL_bodyza2za2_17) == CNST_TABLE_REF(((long) 0))))
									{	/* Tools/progn.scm 46 */
										BgL_g1012z00_73 = CDR(BgL_bodyza2za2_17);
									}
								else
									{	/* Tools/progn.scm 46 */
										BgL_g1012z00_73 = BgL_bodyza2za2_17;
									}
								BgL_subz00_70 =
									BGl_loopze71ze7zztools_prognz00(BgL_g1012z00_73);
							}
							{	/* Tools/progn.scm 68 */
								bool_t BgL_test1320z00_415;

								{	/* Tools/progn.scm 68 */
									bool_t BgL_res1259z00_256;

									BgL_res1259z00_256 = EPAIRP(BgL_bodyza2za2_17);
									BgL_test1320z00_415 = BgL_res1259z00_256;
								}
								if (BgL_test1320z00_415)
									{	/* Tools/progn.scm 69 */
										obj_t BgL_arg1047z00_72;

										BgL_arg1047z00_72 = CER(BgL_bodyza2za2_17);
										{	/* Tools/progn.scm 69 */
											obj_t BgL_res1260z00_259;

											{	/* Tools/progn.scm 69 */
												obj_t BgL_obj1z00_258;

												BgL_obj1z00_258 = CNST_TABLE_REF(((long) 0));
												BgL_res1260z00_259 =
													MAKE_YOUNG_EPAIR(BgL_obj1z00_258, BgL_subz00_70,
													BgL_arg1047z00_72);
											}
											return BgL_res1260z00_259;
										}
									}
								else
									{	/* Tools/progn.scm 68 */
										return
											MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
											BgL_subz00_70);
				}}}}
			else
				{	/* Tools/progn.scm 33 */
					return
						BGl_internalzd2errorzd2zztools_errorz00
						(BGl_string1286z00zztools_prognz00,
						BGl_string1287z00zztools_prognz00, BgL_bodyza2za2_17);
				}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zztools_prognz00(obj_t BgL_bodyza2za2_75)
	{
		{	/* Tools/progn.scm 46 */
		BGl_loopze71ze7zztools_prognz00:
			if (NULLP(BgL_bodyza2za2_75))
				{	/* Tools/progn.scm 49 */
					return BNIL;
				}
			else
				{	/* Tools/progn.scm 51 */
					obj_t BgL_exprz00_78;

					BgL_exprz00_78 = CAR(((obj_t) BgL_bodyza2za2_75));
					{	/* Tools/progn.scm 52 */
						bool_t BgL_test1322z00_427;

						if (PAIRP(BgL_exprz00_78))
							{	/* Tools/progn.scm 52 */
								BgL_test1322z00_427 =
									(CAR(BgL_exprz00_78) == CNST_TABLE_REF(((long) 0)));
							}
						else
							{	/* Tools/progn.scm 52 */
								BgL_test1322z00_427 = ((bool_t) 0);
							}
						if (BgL_test1322z00_427)
							{	/* Tools/progn.scm 53 */
								obj_t BgL_arg1053z00_82;
								obj_t BgL_arg1054z00_83;

								BgL_arg1053z00_82 = CDR(BgL_exprz00_78);
								{	/* Tools/progn.scm 53 */
									obj_t BgL_arg1055z00_84;

									BgL_arg1055z00_84 = CDR(((obj_t) BgL_bodyza2za2_75));
									BgL_arg1054z00_83 =
										BGl_loopze71ze7zztools_prognz00(BgL_arg1055z00_84);
								}
								return
									BGl_appendzd221011zd2zztools_prognz00(BgL_arg1053z00_82,
									BgL_arg1054z00_83);
							}
						else
							{	/* Tools/progn.scm 55 */
								bool_t BgL_test1324z00_438;

								if ((BgL_exprz00_78 == BUNSPEC))
									{	/* Tools/progn.scm 56 */
										obj_t BgL_tmpz00_441;

										BgL_tmpz00_441 = CDR(((obj_t) BgL_bodyza2za2_75));
										BgL_test1324z00_438 = PAIRP(BgL_tmpz00_441);
									}
								else
									{	/* Tools/progn.scm 55 */
										BgL_test1324z00_438 = ((bool_t) 0);
									}
								if (BgL_test1324z00_438)
									{	/* Tools/progn.scm 57 */
										obj_t BgL_arg1059z00_88;

										BgL_arg1059z00_88 = CDR(((obj_t) BgL_bodyza2za2_75));
										{
											obj_t BgL_bodyza2za2_447;

											BgL_bodyza2za2_447 = BgL_arg1059z00_88;
											BgL_bodyza2za2_75 = BgL_bodyza2za2_447;
											goto BGl_loopze71ze7zztools_prognz00;
										}
									}
								else
									{	/* Tools/progn.scm 58 */
										bool_t BgL_test1326z00_448;

										{	/* Tools/progn.scm 58 */
											bool_t BgL_res1255z00_247;

											BgL_res1255z00_247 = EPAIRP(BgL_exprz00_78);
											BgL_test1326z00_448 = BgL_res1255z00_247;
										}
										if (BgL_test1326z00_448)
											{	/* Tools/progn.scm 60 */
												obj_t BgL_arg1061z00_90;
												obj_t BgL_arg1062z00_91;

												{	/* Tools/progn.scm 60 */
													obj_t BgL_arg1063z00_92;

													BgL_arg1063z00_92 = CDR(((obj_t) BgL_bodyza2za2_75));
													BgL_arg1061z00_90 =
														BGl_loopze71ze7zztools_prognz00(BgL_arg1063z00_92);
												}
												BgL_arg1062z00_91 = CER(((obj_t) BgL_exprz00_78));
												{	/* Tools/progn.scm 59 */
													obj_t BgL_res1256z00_250;

													BgL_res1256z00_250 =
														MAKE_YOUNG_EPAIR(BgL_exprz00_78, BgL_arg1061z00_90,
														BgL_arg1062z00_91);
													return BgL_res1256z00_250;
												}
											}
										else
											{	/* Tools/progn.scm 62 */
												bool_t BgL_test1327z00_456;

												{	/* Tools/progn.scm 62 */
													bool_t BgL_res1257z00_251;

													BgL_res1257z00_251 = EPAIRP(BgL_bodyza2za2_75);
													BgL_test1327z00_456 = BgL_res1257z00_251;
												}
												if (BgL_test1327z00_456)
													{	/* Tools/progn.scm 64 */
														obj_t BgL_arg1065z00_94;
														obj_t BgL_arg1073z00_95;

														{	/* Tools/progn.scm 64 */
															obj_t BgL_arg1074z00_96;

															BgL_arg1074z00_96 =
																CDR(((obj_t) BgL_bodyza2za2_75));
															BgL_arg1065z00_94 =
																BGl_loopze71ze7zztools_prognz00
																(BgL_arg1074z00_96);
														}
														BgL_arg1073z00_95 =
															CER(((obj_t) BgL_bodyza2za2_75));
														{	/* Tools/progn.scm 63 */
															obj_t BgL_res1258z00_254;

															BgL_res1258z00_254 =
																MAKE_YOUNG_EPAIR(BgL_exprz00_78,
																BgL_arg1065z00_94, BgL_arg1073z00_95);
															return BgL_res1258z00_254;
														}
													}
												else
													{	/* Tools/progn.scm 67 */
														obj_t BgL_arg1078z00_97;

														{	/* Tools/progn.scm 67 */
															obj_t BgL_arg1095z00_98;

															BgL_arg1095z00_98 =
																CDR(((obj_t) BgL_bodyza2za2_75));
															BgL_arg1078z00_97 =
																BGl_loopze71ze7zztools_prognz00
																(BgL_arg1095z00_98);
														}
														return
															MAKE_YOUNG_PAIR(BgL_exprz00_78,
															BgL_arg1078z00_97);
													}
											}
									}
							}
					}
				}
		}

	}



/* &normalize-progn */
	obj_t BGl_z62normaliza7ezd2prognz17zztools_prognz00(obj_t BgL_envz00_312,
		obj_t BgL_bodyza2za2_313)
	{
		{	/* Tools/progn.scm 31 */
			return BGl_normaliza7ezd2prognz75zztools_prognz00(BgL_bodyza2za2_313);
		}

	}



/* normalize-begin */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2beginz75zztools_prognz00(obj_t
		BgL_begz00_18)
	{
		{	/* Tools/progn.scm 75 */
		BGl_normaliza7ezd2beginz75zztools_prognz00:
			{	/* Tools/progn.scm 76 */
				obj_t BgL_bodyz00_108;

				BgL_bodyz00_108 = CDR(((obj_t) BgL_begz00_18));
				if (NULLP(BgL_bodyz00_108))
					{	/* Tools/progn.scm 78 */
						return BUNSPEC;
					}
				else
					{	/* Tools/progn.scm 78 */
						if (NULLP(CDR(((obj_t) BgL_bodyz00_108))))
							{	/* Tools/progn.scm 81 */
								obj_t BgL_ez00_112;

								BgL_ez00_112 = CAR(((obj_t) BgL_bodyz00_108));
								if (PAIRP(BgL_ez00_112))
									{	/* Tools/progn.scm 82 */
										if ((CAR(BgL_ez00_112) == CNST_TABLE_REF(((long) 0))))
											{
												obj_t BgL_begz00_485;

												BgL_begz00_485 = BgL_ez00_112;
												BgL_begz00_18 = BgL_begz00_485;
												goto BGl_normaliza7ezd2beginz75zztools_prognz00;
											}
										else
											{	/* Tools/progn.scm 82 */
												return BgL_ez00_112;
											}
									}
								else
									{	/* Tools/progn.scm 82 */
										return BgL_ez00_112;
									}
							}
						else
							{
								obj_t BgL_lz00_124;
								obj_t BgL_resz00_125;

								BgL_lz00_124 = BgL_bodyz00_108;
								BgL_resz00_125 = BNIL;
							BgL_zc3z04anonymousza31122ze3z87_126:
								if (NULLP(BgL_lz00_124))
									{	/* Tools/progn.scm 91 */
										if (NULLP(BgL_resz00_125))
											{	/* Tools/progn.scm 93 */
												return BUNSPEC;
											}
										else
											{	/* Tools/progn.scm 93 */
												if (NULLP(CDR(BgL_resz00_125)))
													{	/* Tools/progn.scm 95 */
														return CAR(BgL_resz00_125);
													}
												else
													{	/* Tools/progn.scm 98 */
														obj_t BgL_arg1127z00_131;

														{	/* Tools/progn.scm 98 */
															obj_t BgL_arg1128z00_132;

															BgL_arg1128z00_132 =
																BGl_eappendzd22zd2zz__r4_pairs_and_lists_6_3z00
																(bgl_reverse_bang(BgL_resz00_125), BNIL);
															BgL_arg1127z00_131 =
																MAKE_YOUNG_PAIR(CNST_TABLE_REF(((long) 0)),
																BgL_arg1128z00_132);
														}
														return
															BGl_epairifyz00zztools_miscz00(BgL_arg1127z00_131,
															BgL_begz00_18);
													}
											}
									}
								else
									{	/* Tools/progn.scm 91 */
										if (PAIRP(BgL_lz00_124))
											{	/* Tools/progn.scm 100 */
												obj_t BgL_bz00_136;

												BgL_bz00_136 = CAR(BgL_lz00_124);
												{	/* Tools/progn.scm 101 */
													bool_t BgL_test1336z00_502;

													if (PAIRP(BgL_bz00_136))
														{	/* Tools/progn.scm 101 */
															BgL_test1336z00_502 = ((bool_t) 0);
														}
													else
														{	/* Tools/progn.scm 101 */
															if (SYMBOLP(BgL_bz00_136))
																{	/* Tools/progn.scm 101 */
																	BgL_test1336z00_502 = ((bool_t) 0);
																}
															else
																{	/* Tools/progn.scm 101 */
																	obj_t BgL_tmpz00_507;

																	BgL_tmpz00_507 = CDR(BgL_lz00_124);
																	BgL_test1336z00_502 = PAIRP(BgL_tmpz00_507);
																}
														}
													if (BgL_test1336z00_502)
														{
															obj_t BgL_lz00_510;

															BgL_lz00_510 = CDR(BgL_lz00_124);
															BgL_lz00_124 = BgL_lz00_510;
															goto BgL_zc3z04anonymousza31122ze3z87_126;
														}
													else
														{	/* Tools/progn.scm 103 */
															obj_t BgL_arg1146z00_142;
															obj_t BgL_arg1155z00_143;

															BgL_arg1146z00_142 = CDR(BgL_lz00_124);
															BgL_arg1155z00_143 =
																MAKE_YOUNG_PAIR(BgL_bz00_136, BgL_resz00_125);
															{
																obj_t BgL_resz00_515;
																obj_t BgL_lz00_514;

																BgL_lz00_514 = BgL_arg1146z00_142;
																BgL_resz00_515 = BgL_arg1155z00_143;
																BgL_resz00_125 = BgL_resz00_515;
																BgL_lz00_124 = BgL_lz00_514;
																goto BgL_zc3z04anonymousza31122ze3z87_126;
															}
														}
												}
											}
										else
											{	/* Tools/progn.scm 99 */
												return
													BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF
													(((long) 1)), BGl_string1288z00zztools_prognz00,
													BgL_begz00_18);
		}}}}}}

	}



/* &normalize-begin */
	obj_t BGl_z62normaliza7ezd2beginz17zztools_prognz00(obj_t BgL_envz00_314,
		obj_t BgL_begz00_315)
	{
		{	/* Tools/progn.scm 75 */
			return BGl_normaliza7ezd2beginz75zztools_prognz00(BgL_begz00_315);
		}

	}



/* normalize-progn/loc */
	BGL_EXPORTED_DEF obj_t BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(obj_t
		BgL_bodyza2za2_19, obj_t BgL_locz00_20)
	{
		{	/* Tools/progn.scm 110 */
			{	/* Tools/progn.scm 111 */
				obj_t BgL_nbodyz00_149;

				BgL_nbodyz00_149 = BGl_expandzd2prognzd2zz__prognz00(BgL_bodyza2za2_19);
				if (CBOOL(BgL_locz00_20))
					{	/* Tools/progn.scm 115 */
						bool_t BgL_test1350z00_522;

						{	/* Tools/progn.scm 115 */
							bool_t BgL_res1271z00_281;

							BgL_res1271z00_281 = EPAIRP(BgL_nbodyz00_149);
							BgL_test1350z00_522 = BgL_res1271z00_281;
						}
						if (BgL_test1350z00_522)
							{	/* Tools/progn.scm 115 */
								return BgL_nbodyz00_149;
							}
						else
							{	/* Tools/progn.scm 115 */
								if (PAIRP(BgL_nbodyz00_149))
									{	/* Tools/progn.scm 118 */
										obj_t BgL_arg1169z00_152;
										obj_t BgL_arg1170z00_153;

										BgL_arg1169z00_152 = CAR(BgL_nbodyz00_149);
										BgL_arg1170z00_153 = CDR(BgL_nbodyz00_149);
										{	/* Tools/progn.scm 118 */
											obj_t BgL_res1273z00_285;

											BgL_res1273z00_285 =
												MAKE_YOUNG_EPAIR(BgL_arg1169z00_152, BgL_arg1170z00_153,
												BgL_locz00_20);
											return BgL_res1273z00_285;
										}
									}
								else
									{	/* Tools/progn.scm 120 */
										obj_t BgL_arg1172z00_154;

										{	/* Tools/progn.scm 120 */
											obj_t BgL_list1173z00_155;

											BgL_list1173z00_155 =
												MAKE_YOUNG_PAIR(BgL_nbodyz00_149, BNIL);
											BgL_arg1172z00_154 = BgL_list1173z00_155;
										}
										{	/* Tools/progn.scm 120 */
											obj_t BgL_res1275z00_288;

											{	/* Tools/progn.scm 120 */
												obj_t BgL_obj1z00_287;

												BgL_obj1z00_287 = CNST_TABLE_REF(((long) 0));
												BgL_res1275z00_288 =
													MAKE_YOUNG_EPAIR(BgL_obj1z00_287, BgL_arg1172z00_154,
													BgL_locz00_20);
											}
											return BgL_res1275z00_288;
										}
									}
							}
					}
				else
					{	/* Tools/progn.scm 113 */
						return BgL_nbodyz00_149;
					}
			}
		}

	}



/* &normalize-progn/loc */
	obj_t BGl_z62normaliza7ezd2prognzf2locze5zztools_prognz00(obj_t
		BgL_envz00_316, obj_t BgL_bodyza2za2_317, obj_t BgL_locz00_318)
	{
		{	/* Tools/progn.scm 110 */
			return
				BGl_normaliza7ezd2prognzf2locz87zztools_prognz00(BgL_bodyza2za2_317,
				BgL_locz00_318);
		}

	}



/* emap */
	BGL_EXPORTED_DEF obj_t BGl_emapz00zztools_prognz00(obj_t BgL_fz00_21,
		obj_t BgL_l0z00_22)
	{
		{	/* Tools/progn.scm 125 */
			return
				BGl_loopze70ze7zztools_prognz00(BgL_fz00_21, BgL_l0z00_22,
				BgL_l0z00_22);
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zztools_prognz00(obj_t BgL_fz00_327, obj_t BgL_l0z00_326,
		obj_t BgL_lz00_157)
	{
		{	/* Tools/progn.scm 126 */
			if (NULLP(BgL_lz00_157))
				{	/* Tools/progn.scm 128 */
					return BNIL;
				}
			else
				{	/* Tools/progn.scm 130 */
					bool_t BgL_test1354z00_536;

					{	/* Tools/progn.scm 130 */
						bool_t BgL_res1277z00_290;

						BgL_res1277z00_290 = EPAIRP(BgL_lz00_157);
						BgL_test1354z00_536 = BgL_res1277z00_290;
					}
					if (BgL_test1354z00_536)
						{	/* Tools/progn.scm 131 */
							obj_t BgL_arg1177z00_161;
							obj_t BgL_arg1178z00_162;
							obj_t BgL_arg1179z00_163;

							{	/* Tools/progn.scm 131 */
								obj_t BgL_arg1186z00_164;

								BgL_arg1186z00_164 = CAR(((obj_t) BgL_lz00_157));
								BgL_arg1177z00_161 =
									PROCEDURE_ENTRY(BgL_fz00_327) (BgL_fz00_327,
									BgL_arg1186z00_164, BEOA);
							}
							{	/* Tools/progn.scm 131 */
								obj_t BgL_arg1190z00_165;

								BgL_arg1190z00_165 = CDR(((obj_t) BgL_lz00_157));
								BgL_arg1178z00_162 =
									BGl_loopze70ze7zztools_prognz00(BgL_fz00_327, BgL_l0z00_326,
									BgL_arg1190z00_165);
							}
							BgL_arg1179z00_163 = CER(((obj_t) BgL_lz00_157));
							{	/* Tools/progn.scm 131 */
								obj_t BgL_res1278z00_294;

								BgL_res1278z00_294 =
									MAKE_YOUNG_EPAIR(BgL_arg1177z00_161, BgL_arg1178z00_162,
									BgL_arg1179z00_163);
								return BgL_res1278z00_294;
							}
						}
					else
						{	/* Tools/progn.scm 130 */
							if (PAIRP(BgL_lz00_157))
								{	/* Tools/progn.scm 133 */
									obj_t BgL_arg1194z00_167;
									obj_t BgL_arg1197z00_168;

									{	/* Tools/progn.scm 133 */
										obj_t BgL_arg1201z00_169;

										BgL_arg1201z00_169 = CAR(BgL_lz00_157);
										BgL_arg1194z00_167 =
											PROCEDURE_ENTRY(BgL_fz00_327) (BgL_fz00_327,
											BgL_arg1201z00_169, BEOA);
									}
									BgL_arg1197z00_168 =
										BGl_loopze70ze7zztools_prognz00(BgL_fz00_327, BgL_l0z00_326,
										CDR(BgL_lz00_157));
									return
										MAKE_YOUNG_PAIR(BgL_arg1194z00_167, BgL_arg1197z00_168);
								}
							else
								{	/* Tools/progn.scm 132 */
									return
										BGl_internalzd2errorzd2zztools_errorz00(CNST_TABLE_REF((
												(long) 2)), BGl_string1289z00zztools_prognz00,
										BgL_l0z00_326);
		}}}}

	}



/* &emap */
	obj_t BGl_z62emapz62zztools_prognz00(obj_t BgL_envz00_319, obj_t BgL_fz00_320,
		obj_t BgL_l0z00_321)
	{
		{	/* Tools/progn.scm 125 */
			return BGl_emapz00zztools_prognz00(BgL_fz00_320, BgL_l0z00_321);
		}

	}



/* progn-first-expression */
	BGL_EXPORTED_DEF obj_t BGl_prognzd2firstzd2expressionz00zztools_prognz00(obj_t
		BgL_expz00_23)
	{
		{	/* Tools/progn.scm 142 */
			{
				obj_t BgL_expz00_173;

				BgL_expz00_173 = BgL_expz00_23;
			BgL_zc3z04anonymousza31209ze3z87_174:
				if (PAIRP(BgL_expz00_173))
					{	/* Tools/progn.scm 143 */
						if ((CAR(BgL_expz00_173) == CNST_TABLE_REF(((long) 0))))
							{	/* Tools/progn.scm 143 */
								if (NULLP(CDR(BgL_expz00_173)))
									{	/* Tools/progn.scm 143 */
										return BFALSE;
									}
								else
									{	/* Tools/progn.scm 143 */
										obj_t BgL_cdrzd2153zd2_185;

										BgL_cdrzd2153zd2_185 = CDR(BgL_expz00_173);
										if (PAIRP(BgL_cdrzd2153zd2_185))
											{
												obj_t BgL_expz00_575;

												BgL_expz00_575 = CAR(BgL_cdrzd2153zd2_185);
												BgL_expz00_173 = BgL_expz00_575;
												goto BgL_zc3z04anonymousza31209ze3z87_174;
											}
										else
											{	/* Tools/progn.scm 143 */
												return BgL_expz00_173;
											}
									}
							}
						else
							{	/* Tools/progn.scm 143 */
								return BgL_expz00_173;
							}
					}
				else
					{	/* Tools/progn.scm 143 */
						return BgL_expz00_173;
					}
			}
		}

	}



/* &progn-first-expression */
	obj_t BGl_z62prognzd2firstzd2expressionz62zztools_prognz00(obj_t
		BgL_envz00_322, obj_t BgL_expz00_323)
	{
		{	/* Tools/progn.scm 142 */
			return BGl_prognzd2firstzd2expressionz00zztools_prognz00(BgL_expz00_323);
		}

	}



/* progn-tail-expressions */
	BGL_EXPORTED_DEF obj_t BGl_prognzd2tailzd2expressionsz00zztools_prognz00(obj_t
		BgL_expz00_24)
	{
		{	/* Tools/progn.scm 157 */
			{
				obj_t BgL_expz00_192;

				BgL_expz00_192 = BgL_expz00_24;
				if (PAIRP(BgL_expz00_192))
					{	/* Tools/progn.scm 158 */
						if ((CAR(BgL_expz00_192) == CNST_TABLE_REF(((long) 0))))
							{	/* Tools/progn.scm 158 */
								if (NULLP(CDR(BgL_expz00_192)))
									{	/* Tools/progn.scm 158 */
										return BNIL;
									}
								else
									{	/* Tools/progn.scm 158 */
										obj_t BgL_cdrzd2172zd2_204;

										BgL_cdrzd2172zd2_204 = CDR(BgL_expz00_192);
										if (PAIRP(BgL_cdrzd2172zd2_204))
											{	/* Tools/progn.scm 158 */
												return CDR(BgL_cdrzd2172zd2_204);
											}
										else
											{	/* Tools/progn.scm 158 */
												return BNIL;
											}
									}
							}
						else
							{	/* Tools/progn.scm 158 */
								return BNIL;
							}
					}
				else
					{	/* Tools/progn.scm 158 */
						return BNIL;
					}
			}
		}

	}



/* &progn-tail-expressions */
	obj_t BGl_z62prognzd2tailzd2expressionsz62zztools_prognz00(obj_t
		BgL_envz00_324, obj_t BgL_expz00_325)
	{
		{	/* Tools/progn.scm 157 */
			return BGl_prognzd2tailzd2expressionsz00zztools_prognz00(BgL_expz00_325);
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zztools_prognz00()
	{
		{	/* Tools/progn.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_miscz00(((long) 9470340),
				BSTRING_TO_STRING(BGl_string1290z00zztools_prognz00));
			BGl_modulezd2initializa7ationz75zztools_errorz00(((long) 300504034),
				BSTRING_TO_STRING(BGl_string1290z00zztools_prognz00));
			return
				BGl_modulezd2initializa7ationz75zztools_locationz00(((long) 462333171),
				BSTRING_TO_STRING(BGl_string1290z00zztools_prognz00));
		}

	}

#ifdef __cplusplus
}
#endif
