/*===========================================================================*/
/*   (Globalize/clocto.scm)                                                  */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Globalize/clocto.scm) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */
	typedef struct BgL_typez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		obj_t BgL_siza7eza7;
		obj_t BgL_classz00;
		obj_t BgL_coercezd2tozd2;
		obj_t BgL_parentsz00;
		bool_t BgL_initzf3zf3;
		bool_t BgL_magiczf3zf3;
		obj_t BgL_z42z42;
		obj_t BgL_aliasz00;
		obj_t BgL_pointedzd2tozd2byz00;
		obj_t BgL_tvectorz00;
		obj_t BgL_locationz00;
		obj_t BgL_importzd2locationzd2;
		int BgL_occurrencez00;
	}              *BgL_typez00_bglt;

	typedef struct BgL_valuez00_bgl
	{
		header_t header;
		obj_t widening;
	}               *BgL_valuez00_bglt;

	typedef struct BgL_variablez00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
	}                  *BgL_variablez00_bglt;

	typedef struct BgL_localz00_bgl
	{
		header_t header;
		obj_t widening;
		obj_t BgL_idz00;
		obj_t BgL_namez00;
		struct BgL_typez00_bgl *BgL_typez00;
		struct BgL_valuez00_bgl *BgL_valuez00;
		obj_t BgL_accessz00;
		obj_t BgL_fastzd2alphazd2;
		obj_t BgL_removablez00;
		long BgL_occurrencez00;
		long BgL_occurrencewz00;
		bool_t BgL_userzf3zf3;
		long BgL_keyz00;
	}               *BgL_localz00_bglt;

	typedef struct BgL_sfunz00_bgl
	{
		header_t header;
		obj_t widening;
		long BgL_arityz00;
		obj_t BgL_sidezd2effectzd2;
		obj_t BgL_predicatezd2ofzd2;
		obj_t BgL_stackzd2allocatorzd2;
		bool_t BgL_topzf3zf3;
		obj_t BgL_thezd2closurezd2;
		obj_t BgL_effectz00;
		obj_t BgL_failsafez00;
		obj_t BgL_argszd2noescapezd2;
		obj_t BgL_propertyz00;
		obj_t BgL_argsz00;
		obj_t BgL_argszd2namezd2;
		obj_t BgL_bodyz00;
		obj_t BgL_classz00;
		obj_t BgL_dssslzd2keywordszd2;
		obj_t BgL_locz00;
		obj_t BgL_optionalsz00;
		obj_t BgL_keysz00;
		obj_t BgL_thezd2closurezd2globalz00;
		obj_t BgL_strengthz00;
		obj_t BgL_stackablez00;
	}              *BgL_sfunz00_bglt;

	typedef struct BgL_sfunzf2ginfozf2_bgl
	{
		bool_t BgL_gzf3zf3;
		obj_t BgL_cfromz00;
		obj_t BgL_cfromza2za2;
		obj_t BgL_ctoz00;
		obj_t BgL_ctoza2za2;
		obj_t BgL_efunctionsz00;
		obj_t BgL_integratorz00;
		obj_t BgL_imarkz00;
		obj_t BgL_ownerz00;
		obj_t BgL_integratedz00;
		obj_t BgL_pluggedzd2inzd2;
		long BgL_markz00;
		obj_t BgL_freezd2markzd2;
		obj_t BgL_thezd2globalzd2;
		obj_t BgL_kapturedz00;
		obj_t BgL_newzd2bodyzd2;
		long BgL_bmarkz00;
		long BgL_umarkz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
	}                      *BgL_sfunzf2ginfozf2_bglt;


	static obj_t BGl_objectzd2initzd2zzglobaliza7e_cloctoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt);
	static obj_t BGl_appendzd221011zd2zzglobaliza7e_cloctoza7(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzglobaliza7e_cloctoza7();
	extern obj_t BGl_unionz00zzglobaliza7e_kaptureza7(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_cloctoza7();
	static obj_t
		BGl_z62ctozd2transitivezd2closurez12z70zzglobaliza7e_cloctoza7(obj_t,
		obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7 =
		BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzglobaliza7e_cloctoza7();
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
	static obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE
		(BGl_ctozd2transitivezd2closurez12zd2envzc0zzglobaliza7e_cloctoza7,
		BgL_bgl_za762ctoza7d2transit1426z00,
		BGl_z62ctozd2transitivezd2closurez12z70zzglobaliza7e_cloctoza7, 0L, BUNSPEC,
		1);
	      DEFINE_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7,
		BgL_bgl_string1425za700za7za7g1427za7, "globalize_clocto", 16);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zzglobaliza7e_cloctoza7(long
		BgL_checksumz00_1946, char *BgL_fromz00_1947)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7))
				{
					BGl_requirezd2initializa7ationz75zzglobaliza7e_cloctoza7 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzglobaliza7e_cloctoza7();
					BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
					BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7();
					return BGl_methodzd2initzd2zzglobaliza7e_cloctoza7();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0),
				"globalize_clocto");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"globalize_clocto");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0),
				"globalize_clocto");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zzglobaliza7e_cloctoza7(obj_t BgL_l1z00_1,
		obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1660;

				BgL_headz00_1660 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1661;
					obj_t BgL_tailz00_1662;

					BgL_prevz00_1661 = BgL_headz00_1660;
					BgL_tailz00_1662 = BgL_l1z00_1;
				BgL_loopz00_1663:
					if (PAIRP(BgL_tailz00_1662))
						{
							obj_t BgL_newzd2prevzd2_1665;

							BgL_newzd2prevzd2_1665 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1662), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1661, BgL_newzd2prevzd2_1665);
							{
								obj_t BgL_tailz00_1966;
								obj_t BgL_prevz00_1965;

								BgL_prevz00_1965 = BgL_newzd2prevzd2_1665;
								BgL_tailz00_1966 = CDR(BgL_tailz00_1662);
								BgL_tailz00_1662 = BgL_tailz00_1966;
								BgL_prevz00_1661 = BgL_prevz00_1965;
								goto BgL_loopz00_1663;
							}
						}
					else
						{
							BNIL;
						}
					return CDR(BgL_headz00_1660);
				}
			}
		}

	}



/* cto-transitive-closure! */
	BGL_EXPORTED_DEF obj_t
		BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7
		(BgL_localz00_bglt BgL_hostz00_3)
	{
		{	/* Globalize/clocto.scm 36 */
			{	/* Globalize/clocto.scm 37 */
				BgL_valuez00_bglt BgL_infoz00_1668;

				BgL_infoz00_1668 =
					(((BgL_variablez00_bglt) COBJECT(
							((BgL_variablez00_bglt) BgL_hostz00_3)))->BgL_valuez00);
				{	/* Globalize/clocto.scm 37 */
					obj_t BgL_ctoz00_1669;

					{	/* Globalize/clocto.scm 38 */
						obj_t BgL_arg1295z00_1708;
						obj_t BgL_arg1296z00_1709;

						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_1971;

							{
								obj_t BgL_auxz00_1972;

								{	/* Globalize/clocto.scm 38 */
									BgL_objectz00_bglt BgL_tmpz00_1973;

									BgL_tmpz00_1973 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_infoz00_1668));
									BgL_auxz00_1972 = BGL_OBJECT_WIDENING(BgL_tmpz00_1973);
								}
								BgL_auxz00_1971 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_1972);
							}
							BgL_arg1295z00_1708 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_1971))->
								BgL_ctoz00);
						}
						{
							BgL_sfunzf2ginfozf2_bglt BgL_auxz00_1979;

							{
								obj_t BgL_auxz00_1980;

								{	/* Globalize/clocto.scm 38 */
									BgL_objectz00_bglt BgL_tmpz00_1981;

									BgL_tmpz00_1981 =
										((BgL_objectz00_bglt)
										((BgL_sfunz00_bglt) BgL_infoz00_1668));
									BgL_auxz00_1980 = BGL_OBJECT_WIDENING(BgL_tmpz00_1981);
								}
								BgL_auxz00_1979 = ((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_1980);
							}
							BgL_arg1296z00_1709 =
								(((BgL_sfunzf2ginfozf2_bglt) COBJECT(BgL_auxz00_1979))->
								BgL_efunctionsz00);
						}
						BgL_ctoz00_1669 =
							BGl_appendzd221011zd2zzglobaliza7e_cloctoza7(BgL_arg1295z00_1708,
							BgL_arg1296z00_1709);
					}
					{	/* Globalize/clocto.scm 38 */
						obj_t BgL_ctoza2zd2origz70_1670;

						{	/* Globalize/clocto.scm 39 */
							obj_t BgL_list1293z00_1707;

							BgL_list1293z00_1707 = MAKE_YOUNG_PAIR(BgL_ctoz00_1669, BNIL);
							BgL_ctoza2zd2origz70_1670 = BgL_list1293z00_1707;
						}
						{	/* Globalize/clocto.scm 39 */

							{
								obj_t BgL_ctoz00_1672;
								obj_t BgL_ctoza2za2_1673;

								BgL_ctoz00_1672 = BgL_ctoz00_1669;
								BgL_ctoza2za2_1673 = BgL_ctoza2zd2origz70_1670;
							BgL_zc3z04anonymousza31246ze3z87_1674:
								if (NULLP(BgL_ctoz00_1672))
									{	/* Globalize/clocto.scm 45 */
										obj_t BgL_arg1250z00_1676;

										if ((BgL_ctoza2za2_1673 == BgL_ctoza2zd2origz70_1670))
											{	/* Globalize/clocto.scm 45 */
												BgL_arg1250z00_1676 =
													CAR(((obj_t) BgL_ctoza2zd2origz70_1670));
											}
										else
											{	/* Globalize/clocto.scm 45 */
												BgL_arg1250z00_1676 =
													BGl_unionz00zzglobaliza7e_kaptureza7
													(BgL_ctoza2za2_1673);
											}
										{
											BgL_sfunzf2ginfozf2_bglt BgL_auxz00_1996;

											{
												obj_t BgL_auxz00_1997;

												{	/* Globalize/clocto.scm 44 */
													BgL_objectz00_bglt BgL_tmpz00_1998;

													BgL_tmpz00_1998 =
														((BgL_objectz00_bglt)
														((BgL_sfunz00_bglt) BgL_infoz00_1668));
													BgL_auxz00_1997 =
														BGL_OBJECT_WIDENING(BgL_tmpz00_1998);
												}
												BgL_auxz00_1996 =
													((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_1997);
											}
											return
												((((BgL_sfunzf2ginfozf2_bglt)
														COBJECT(BgL_auxz00_1996))->BgL_ctoza2za2) =
												((obj_t) BgL_arg1250z00_1676), BUNSPEC);
										}
									}
								else
									{	/* Globalize/clocto.scm 48 */
										bool_t BgL_test1432z00_2004;

										{	/* Globalize/clocto.scm 48 */
											obj_t BgL_arg1292z00_1705;

											BgL_arg1292z00_1705 = CAR(((obj_t) BgL_ctoz00_1672));
											BgL_test1432z00_2004 =
												(BgL_arg1292z00_1705 == BGl_localz00zzast_varz00);
										}
										if (BgL_test1432z00_2004)
											{	/* Globalize/clocto.scm 49 */
												obj_t BgL_arg1254z00_1680;

												BgL_arg1254z00_1680 = CDR(((obj_t) BgL_ctoz00_1672));
												{
													obj_t BgL_ctoz00_2010;

													BgL_ctoz00_2010 = BgL_arg1254z00_1680;
													BgL_ctoz00_1672 = BgL_ctoz00_2010;
													goto BgL_zc3z04anonymousza31246ze3z87_1674;
												}
											}
										else
											{	/* Globalize/clocto.scm 50 */
												bool_t BgL_test1433z00_2011;

												{	/* Globalize/clocto.scm 50 */
													BgL_sfunz00_bglt BgL_oz00_1918;

													BgL_oz00_1918 =
														((BgL_sfunz00_bglt)
														(((BgL_variablez00_bglt) COBJECT(
																	((BgL_variablez00_bglt)
																		((BgL_localz00_bglt)
																			CAR(
																				((obj_t) BgL_ctoz00_1672))))))->
															BgL_valuez00));
													{
														BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2018;

														{
															obj_t BgL_auxz00_2019;

															{	/* Globalize/clocto.scm 50 */
																BgL_objectz00_bglt BgL_tmpz00_2020;

																BgL_tmpz00_2020 =
																	((BgL_objectz00_bglt) BgL_oz00_1918);
																BgL_auxz00_2019 =
																	BGL_OBJECT_WIDENING(BgL_tmpz00_2020);
															}
															BgL_auxz00_2018 =
																((BgL_sfunzf2ginfozf2_bglt) BgL_auxz00_2019);
														}
														BgL_test1433z00_2011 =
															(((BgL_sfunzf2ginfozf2_bglt)
																COBJECT(BgL_auxz00_2018))->BgL_gzf3zf3);
													}
												}
												if (BgL_test1433z00_2011)
													{	/* Globalize/clocto.scm 51 */
														obj_t BgL_arg1263z00_1684;

														BgL_arg1263z00_1684 =
															CDR(((obj_t) BgL_ctoz00_1672));
														{
															obj_t BgL_ctoz00_2027;

															BgL_ctoz00_2027 = BgL_arg1263z00_1684;
															BgL_ctoz00_1672 = BgL_ctoz00_2027;
															goto BgL_zc3z04anonymousza31246ze3z87_1674;
														}
													}
												else
													{	/* Globalize/clocto.scm 52 */
														bool_t BgL_test1434z00_2028;

														{	/* Globalize/clocto.scm 52 */
															BgL_sfunz00_bglt BgL_oz00_1923;

															BgL_oz00_1923 =
																((BgL_sfunz00_bglt)
																(((BgL_variablez00_bglt) COBJECT(
																			((BgL_variablez00_bglt)
																				((BgL_localz00_bglt)
																					CAR(
																						((obj_t) BgL_ctoz00_1672))))))->
																	BgL_valuez00));
															{	/* Globalize/clocto.scm 52 */
																obj_t BgL_tmpz00_2035;

																{
																	BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2036;

																	{
																		obj_t BgL_auxz00_2037;

																		{	/* Globalize/clocto.scm 52 */
																			BgL_objectz00_bglt BgL_tmpz00_2038;

																			BgL_tmpz00_2038 =
																				((BgL_objectz00_bglt) BgL_oz00_1923);
																			BgL_auxz00_2037 =
																				BGL_OBJECT_WIDENING(BgL_tmpz00_2038);
																		}
																		BgL_auxz00_2036 =
																			((BgL_sfunzf2ginfozf2_bglt)
																			BgL_auxz00_2037);
																	}
																	BgL_tmpz00_2035 =
																		(((BgL_sfunzf2ginfozf2_bglt)
																			COBJECT(BgL_auxz00_2036))->BgL_ctoza2za2);
																}
																BgL_test1434z00_2028 = CBOOL(BgL_tmpz00_2035);
															}
														}
														if (BgL_test1434z00_2028)
															{	/* Globalize/clocto.scm 54 */
																obj_t BgL_arg1273z00_1688;

																BgL_arg1273z00_1688 =
																	CDR(((obj_t) BgL_ctoz00_1672));
																{
																	obj_t BgL_ctoz00_2046;

																	BgL_ctoz00_2046 = BgL_arg1273z00_1688;
																	BgL_ctoz00_1672 = BgL_ctoz00_2046;
																	goto BgL_zc3z04anonymousza31246ze3z87_1674;
																}
															}
														else
															{	/* Globalize/clocto.scm 56 */
																obj_t BgL_calleez00_1689;

																{	/* Globalize/clocto.scm 57 */
																	obj_t BgL_arg1281z00_1695;
																	obj_t BgL_arg1282z00_1696;

																	{	/* Globalize/clocto.scm 57 */
																		BgL_sfunz00_bglt BgL_oz00_1928;

																		BgL_oz00_1928 =
																			((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								CAR(
																									((obj_t)
																										BgL_ctoz00_1672))))))->
																				BgL_valuez00));
																		{
																			BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2053;

																			{
																				obj_t BgL_auxz00_2054;

																				{	/* Globalize/clocto.scm 57 */
																					BgL_objectz00_bglt BgL_tmpz00_2055;

																					BgL_tmpz00_2055 =
																						((BgL_objectz00_bglt)
																						BgL_oz00_1928);
																					BgL_auxz00_2054 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_2055);
																				}
																				BgL_auxz00_2053 =
																					((BgL_sfunzf2ginfozf2_bglt)
																					BgL_auxz00_2054);
																			}
																			BgL_arg1281z00_1695 =
																				(((BgL_sfunzf2ginfozf2_bglt)
																					COBJECT(BgL_auxz00_2053))->
																				BgL_ctoz00);
																		}
																	}
																	{	/* Globalize/clocto.scm 58 */
																		BgL_sfunz00_bglt BgL_oz00_1932;

																		BgL_oz00_1932 =
																			((BgL_sfunz00_bglt)
																			(((BgL_variablez00_bglt) COBJECT(
																						((BgL_variablez00_bglt)
																							((BgL_localz00_bglt)
																								CAR(
																									((obj_t)
																										BgL_ctoz00_1672))))))->
																				BgL_valuez00));
																		{
																			BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2066;

																			{
																				obj_t BgL_auxz00_2067;

																				{	/* Globalize/clocto.scm 58 */
																					BgL_objectz00_bglt BgL_tmpz00_2068;

																					BgL_tmpz00_2068 =
																						((BgL_objectz00_bglt)
																						BgL_oz00_1932);
																					BgL_auxz00_2067 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_2068);
																				}
																				BgL_auxz00_2066 =
																					((BgL_sfunzf2ginfozf2_bglt)
																					BgL_auxz00_2067);
																			}
																			BgL_arg1282z00_1696 =
																				(((BgL_sfunzf2ginfozf2_bglt)
																					COBJECT(BgL_auxz00_2066))->
																				BgL_efunctionsz00);
																		}
																	}
																	BgL_calleez00_1689 =
																		BGl_appendzd221011zd2zzglobaliza7e_cloctoza7
																		(BgL_arg1281z00_1695, BgL_arg1282z00_1696);
																}
																{	/* Globalize/clocto.scm 60 */
																	BgL_valuez00_bglt BgL_arg1274z00_1690;

																	BgL_arg1274z00_1690 =
																		(((BgL_variablez00_bglt) COBJECT(
																				((BgL_variablez00_bglt)
																					((BgL_localz00_bglt)
																						CAR(
																							((obj_t) BgL_ctoz00_1672))))))->
																		BgL_valuez00);
																	{
																		BgL_sfunzf2ginfozf2_bglt BgL_auxz00_2079;

																		{
																			obj_t BgL_auxz00_2080;

																			{	/* Globalize/clocto.scm 60 */
																				BgL_objectz00_bglt BgL_tmpz00_2081;

																				BgL_tmpz00_2081 =
																					((BgL_objectz00_bglt)
																					((BgL_sfunz00_bglt)
																						BgL_arg1274z00_1690));
																				BgL_auxz00_2080 =
																					BGL_OBJECT_WIDENING(BgL_tmpz00_2081);
																			}
																			BgL_auxz00_2079 =
																				((BgL_sfunzf2ginfozf2_bglt)
																				BgL_auxz00_2080);
																		}
																		((((BgL_sfunzf2ginfozf2_bglt)
																					COBJECT(BgL_auxz00_2079))->
																				BgL_ctoza2za2) =
																			((obj_t) BTRUE), BUNSPEC);
																	}
																}
																{	/* Globalize/clocto.scm 62 */
																	obj_t BgL_arg1276z00_1692;
																	obj_t BgL_arg1277z00_1693;

																	{	/* Globalize/clocto.scm 62 */
																		obj_t BgL_arg1280z00_1694;

																		BgL_arg1280z00_1694 =
																			CDR(((obj_t) BgL_ctoz00_1672));
																		BgL_arg1276z00_1692 =
																			BGl_appendzd221011zd2zzglobaliza7e_cloctoza7
																			(BgL_arg1280z00_1694, BgL_calleez00_1689);
																	}
																	BgL_arg1277z00_1693 =
																		MAKE_YOUNG_PAIR(BgL_calleez00_1689,
																		BgL_ctoza2za2_1673);
																	{
																		obj_t BgL_ctoza2za2_2092;
																		obj_t BgL_ctoz00_2091;

																		BgL_ctoz00_2091 = BgL_arg1276z00_1692;
																		BgL_ctoza2za2_2092 = BgL_arg1277z00_1693;
																		BgL_ctoza2za2_1673 = BgL_ctoza2za2_2092;
																		BgL_ctoz00_1672 = BgL_ctoz00_2091;
																		goto BgL_zc3z04anonymousza31246ze3z87_1674;
																	}
																}
															}
													}
											}
									}
							}
						}
					}
				}
			}
		}

	}



/* &cto-transitive-closure! */
	obj_t BGl_z62ctozd2transitivezd2closurez12z70zzglobaliza7e_cloctoza7(obj_t
		BgL_envz00_1944, obj_t BgL_hostz00_1945)
	{
		{	/* Globalize/clocto.scm 36 */
			return
				BGl_ctozd2transitivezd2closurez12z12zzglobaliza7e_cloctoza7(
				((BgL_localz00_bglt) BgL_hostz00_1945));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzglobaliza7e_cloctoza7()
	{
		{	/* Globalize/clocto.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			BGl_modulezd2initializa7ationz75zzglobaliza7e_ginfoza7(((long) 0),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
			return
				BGl_modulezd2initializa7ationz75zzglobaliza7e_kaptureza7(((long)
					459830974),
				BSTRING_TO_STRING(BGl_string1425z00zzglobaliza7e_cloctoza7));
		}

	}

#ifdef __cplusplus
}
#endif
