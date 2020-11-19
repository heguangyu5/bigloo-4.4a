/*===========================================================================*/
/*   (Integrate/g.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -q -afile .afile -fsharing -fno-reflection -cc gcc -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -unsafev -gno-error-localization -no-hello -O2 -rm -unsafe -s -indent Integrate/g.scm) */
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

	typedef struct BgL_sfunzf2iinfozf2_bgl
	{
		obj_t BgL_ownerz00;
		obj_t BgL_freez00;
		obj_t BgL_boundz00;
		obj_t BgL_cfromz00;
		obj_t BgL_ctoz00;
		obj_t BgL_kz00;
		obj_t BgL_kza2za2;
		obj_t BgL_uz00;
		obj_t BgL_cnz00;
		obj_t BgL_ctz00;
		obj_t BgL_kontz00;
		bool_t BgL_gzf3zf3;
		bool_t BgL_forcegzf3zf3;
		obj_t BgL_lz00;
		obj_t BgL_ledz00;
		obj_t BgL_istampz00;
		obj_t BgL_globalz00;
		obj_t BgL_kapturedz00;
		obj_t BgL_tailzd2coercionzd2;
		bool_t BgL_xhdlzf3zf3;
	}                      *BgL_sfunzf2iinfozf2_bglt;


	static bool_t
		BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00();
	static obj_t BGl_objectzd2initzd2zzintegrate_gz00();
	BGL_IMPORT bool_t BGl_isazf3zf3zz__objectz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zzintegrate_gz00();
	static obj_t BGl_gczd2rootszd2initz00zzintegrate_gz00();
	extern obj_t BGl_variablez00zzast_varz00;
	BGL_EXPORTED_DECL obj_t BGl_Gz12z12zzintegrate_gz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zzintegrate_gz00 = BUNSPEC;
	static obj_t BGl_genericzd2initzd2zzintegrate_gz00();
	static obj_t BGl_z62Gz12z70zzintegrate_gz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_az00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzintegrate_infoz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_nodez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zzast_varz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztype_typez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_shapez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zztools_tracez00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	BGL_IMPORT obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__readerz00(long, char *);
	BGL_IMPORT obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_localz00zzast_varz00;
	static obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_gz00();
	static obj_t BGl_importedzd2moduleszd2initz00zzintegrate_gz00();
	extern obj_t BGl_za2phiza2z00zzintegrate_az00;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_Gz12zd2envzc0zzintegrate_gz00,
		BgL_bgl_za762gza712za770za7za7inte1581za7, BGl_z62Gz12z70zzintegrate_gz00,
		0L, BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1580z00zzintegrate_gz00,
		BgL_bgl_string1580za700za7za7i1582za7, "integrate_g", 11);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zzintegrate_gz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zzintegrate_gz00(long
		BgL_checksumz00_1900, char *BgL_fromz00_1901)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zzintegrate_gz00))
				{
					BGl_requirezd2initializa7ationz75zzintegrate_gz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zzintegrate_gz00();
					BGl_libraryzd2moduleszd2initz00zzintegrate_gz00();
					BGl_importedzd2moduleszd2initz00zzintegrate_gz00();
					return BGl_methodzd2initzd2zzintegrate_gz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* library-modules-init */
	obj_t BGl_libraryzd2moduleszd2initz00zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 0), "integrate_g");
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long) 0),
				"integrate_g");
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long) 0),
				"integrate_g");
			BGl_modulezd2initializa7ationz75zz__readerz00(((long) 0), "integrate_g");
			return BUNSPEC;
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* G! */
	BGL_EXPORTED_DEF obj_t BGl_Gz12z12zzintegrate_gz00(obj_t BgL_gzf2cnzf2_3)
	{
		{	/* Integrate/g.scm 32 */
			{
				bool_t BgL_stopzf3zf3_1517;
				long BgL_stampz00_1518;
				obj_t BgL_gsz00_1519;

				BgL_stopzf3zf3_1517 = ((bool_t) 0);
				BgL_stampz00_1518 = ((long) 0);
				BgL_gsz00_1519 = BgL_gzf2cnzf2_3;
			BgL_zc3z04anonymousza31246ze3z87_1520:
				if (BgL_stopzf3zf3_1517)
					{	/* Integrate/g.scm 37 */
						{
							obj_t BgL_l1235z00_1522;

							BgL_l1235z00_1522 = BGl_za2phiza2z00zzintegrate_az00;
						BgL_zc3z04anonymousza31247ze3z87_1523:
							if (PAIRP(BgL_l1235z00_1522))
								{	/* Integrate/g.scm 41 */
									{	/* Integrate/g.scm 42 */
										obj_t BgL_fz00_1525;

										BgL_fz00_1525 = CAR(BgL_l1235z00_1522);
										if (BGl_isazf3zf3zz__objectz00(BgL_fz00_1525,
												BGl_localz00zzast_varz00))
											{	/* Integrate/g.scm 43 */
												BgL_valuez00_bglt BgL_arg1250z00_1527;

												BgL_arg1250z00_1527 =
													(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_fz00_1525))))->
													BgL_valuez00);
												{
													BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1923;

													{
														obj_t BgL_auxz00_1924;

														{	/* Integrate/g.scm 43 */
															BgL_objectz00_bglt BgL_tmpz00_1925;

															BgL_tmpz00_1925 =
																((BgL_objectz00_bglt)
																((BgL_sfunz00_bglt) BgL_arg1250z00_1527));
															BgL_auxz00_1924 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_1925);
														}
														BgL_auxz00_1923 =
															((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1924);
													}
													((((BgL_sfunzf2iinfozf2_bglt)
																COBJECT(BgL_auxz00_1923))->BgL_istampz00) =
														((obj_t) BINT(((long) -1))), BUNSPEC);
											}}
										else
											{	/* Integrate/g.scm 42 */
												BFALSE;
											}
									}
									{
										obj_t BgL_l1235z00_1932;

										BgL_l1235z00_1932 = CDR(BgL_l1235z00_1522);
										BgL_l1235z00_1522 = BgL_l1235z00_1932;
										goto BgL_zc3z04anonymousza31247ze3z87_1523;
									}
								}
							else
								{	/* Integrate/g.scm 41 */
									((bool_t) 1);
								}
						}
						BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00
							();
						return BgL_gsz00_1519;
					}
				else
					{
						obj_t BgL_phiz00_1531;
						bool_t BgL_stopzf3zf3_1532;
						obj_t BgL_gsz00_1533;

						BgL_phiz00_1531 = BGl_za2phiza2z00zzintegrate_az00;
						BgL_stopzf3zf3_1532 = ((bool_t) 1);
						BgL_gsz00_1533 = BgL_gsz00_1519;
					BgL_zc3z04anonymousza31253ze3z87_1534:
						if (NULLP(BgL_phiz00_1531))
							{
								obj_t BgL_gsz00_1940;
								long BgL_stampz00_1938;
								bool_t BgL_stopzf3zf3_1937;

								BgL_stopzf3zf3_1937 = BgL_stopzf3zf3_1532;
								BgL_stampz00_1938 = (BgL_stampz00_1518 + ((long) 1));
								BgL_gsz00_1940 = BgL_gsz00_1533;
								BgL_gsz00_1519 = BgL_gsz00_1940;
								BgL_stampz00_1518 = BgL_stampz00_1938;
								BgL_stopzf3zf3_1517 = BgL_stopzf3zf3_1937;
								goto BgL_zc3z04anonymousza31246ze3z87_1520;
							}
						else
							{	/* Integrate/g.scm 54 */
								obj_t BgL_fz00_1537;

								BgL_fz00_1537 = CAR(((obj_t) BgL_phiz00_1531));
								{	/* Integrate/g.scm 54 */
									BgL_valuez00_bglt BgL_fifz00_1538;

									BgL_fifz00_1538 =
										(((BgL_variablez00_bglt) COBJECT(
												((BgL_variablez00_bglt) BgL_fz00_1537)))->BgL_valuez00);
									{	/* Integrate/g.scm 55 */

										{	/* Integrate/g.scm 56 */
											obj_t BgL_g1107z00_1539;

											{
												BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1945;

												{
													obj_t BgL_auxz00_1946;

													{	/* Integrate/g.scm 56 */
														BgL_objectz00_bglt BgL_tmpz00_1947;

														BgL_tmpz00_1947 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_fifz00_1538));
														BgL_auxz00_1946 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_1947);
													}
													BgL_auxz00_1945 =
														((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_1946);
												}
												BgL_g1107z00_1539 =
													(((BgL_sfunzf2iinfozf2_bglt)
														COBJECT(BgL_auxz00_1945))->BgL_ctz00);
											}
											{
												obj_t BgL_ctz00_1541;
												bool_t BgL_stopzf3zf3_1542;
												obj_t BgL_gsz00_1543;

												BgL_ctz00_1541 = BgL_g1107z00_1539;
												BgL_stopzf3zf3_1542 = BgL_stopzf3zf3_1532;
												BgL_gsz00_1543 = BgL_gsz00_1533;
											BgL_zc3z04anonymousza31257ze3z87_1544:
												if (NULLP(BgL_ctz00_1541))
													{	/* Integrate/g.scm 60 */
														obj_t BgL_arg1263z00_1546;

														BgL_arg1263z00_1546 =
															CDR(((obj_t) BgL_phiz00_1531));
														{
															obj_t BgL_gsz00_1959;
															bool_t BgL_stopzf3zf3_1958;
															obj_t BgL_phiz00_1957;

															BgL_phiz00_1957 = BgL_arg1263z00_1546;
															BgL_stopzf3zf3_1958 = BgL_stopzf3zf3_1542;
															BgL_gsz00_1959 = BgL_gsz00_1543;
															BgL_gsz00_1533 = BgL_gsz00_1959;
															BgL_stopzf3zf3_1532 = BgL_stopzf3zf3_1958;
															BgL_phiz00_1531 = BgL_phiz00_1957;
															goto BgL_zc3z04anonymousza31253ze3z87_1534;
														}
													}
												else
													{	/* Integrate/g.scm 61 */
														obj_t BgL_gz00_1547;

														BgL_gz00_1547 = CAR(((obj_t) BgL_ctz00_1541));
														{	/* Integrate/g.scm 61 */
															BgL_valuez00_bglt BgL_gifz00_1548;

															BgL_gifz00_1548 =
																(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_gz00_1547))))->
																BgL_valuez00);
															{	/* Integrate/g.scm 62 */

																if ((BgL_fz00_1537 == BgL_gz00_1547))
																	{	/* Integrate/g.scm 72 */
																		obj_t BgL_arg1268z00_1550;

																		BgL_arg1268z00_1550 =
																			CDR(((obj_t) BgL_ctz00_1541));
																		{
																			obj_t BgL_ctz00_1969;

																			BgL_ctz00_1969 = BgL_arg1268z00_1550;
																			BgL_ctz00_1541 = BgL_ctz00_1969;
																			goto
																				BgL_zc3z04anonymousza31257ze3z87_1544;
																		}
																	}
																else
																	{	/* Integrate/g.scm 73 */
																		bool_t BgL_test1593z00_1970;

																		{
																			BgL_sfunzf2iinfozf2_bglt BgL_auxz00_1971;

																			{
																				obj_t BgL_auxz00_1972;

																				{	/* Integrate/g.scm 73 */
																					BgL_objectz00_bglt BgL_tmpz00_1973;

																					BgL_tmpz00_1973 =
																						((BgL_objectz00_bglt)
																						((BgL_sfunz00_bglt)
																							BgL_gifz00_1548));
																					BgL_auxz00_1972 =
																						BGL_OBJECT_WIDENING
																						(BgL_tmpz00_1973);
																				}
																				BgL_auxz00_1971 =
																					((BgL_sfunzf2iinfozf2_bglt)
																					BgL_auxz00_1972);
																			}
																			BgL_test1593z00_1970 =
																				(((BgL_sfunzf2iinfozf2_bglt)
																					COBJECT(BgL_auxz00_1971))->
																				BgL_gzf3zf3);
																		}
																		if (BgL_test1593z00_1970)
																			{	/* Integrate/g.scm 74 */
																				obj_t BgL_arg1270z00_1552;

																				BgL_arg1270z00_1552 =
																					CDR(((obj_t) BgL_ctz00_1541));
																				{
																					obj_t BgL_ctz00_1981;

																					BgL_ctz00_1981 = BgL_arg1270z00_1552;
																					BgL_ctz00_1541 = BgL_ctz00_1981;
																					goto
																						BgL_zc3z04anonymousza31257ze3z87_1544;
																				}
																			}
																		else
																			{	/* Integrate/g.scm 75 */
																				bool_t BgL_test1594z00_1982;

																				{
																					BgL_sfunzf2iinfozf2_bglt
																						BgL_auxz00_1983;
																					{
																						obj_t BgL_auxz00_1984;

																						{	/* Integrate/g.scm 75 */
																							BgL_objectz00_bglt
																								BgL_tmpz00_1985;
																							BgL_tmpz00_1985 =
																								((BgL_objectz00_bglt) (
																									(BgL_sfunz00_bglt)
																									BgL_fifz00_1538));
																							BgL_auxz00_1984 =
																								BGL_OBJECT_WIDENING
																								(BgL_tmpz00_1985);
																						}
																						BgL_auxz00_1983 =
																							((BgL_sfunzf2iinfozf2_bglt)
																							BgL_auxz00_1984);
																					}
																					BgL_test1594z00_1982 =
																						(((BgL_sfunzf2iinfozf2_bglt)
																							COBJECT(BgL_auxz00_1983))->
																						BgL_gzf3zf3);
																				}
																				if (BgL_test1594z00_1982)
																					{	/* Integrate/g.scm 77 */
																						bool_t BgL_test1595z00_1991;

																						{	/* Integrate/g.scm 77 */
																							obj_t BgL_arg1285z00_1563;

																							{
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_auxz00_1992;
																								{
																									obj_t BgL_auxz00_1993;

																									{	/* Integrate/g.scm 77 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_1994;
																										BgL_tmpz00_1994 =
																											((BgL_objectz00_bglt) (
																												(BgL_sfunz00_bglt)
																												BgL_gifz00_1548));
																										BgL_auxz00_1993 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_1994);
																									}
																									BgL_auxz00_1992 =
																										((BgL_sfunzf2iinfozf2_bglt)
																										BgL_auxz00_1993);
																								}
																								BgL_arg1285z00_1563 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										COBJECT(BgL_auxz00_1992))->
																									BgL_lz00);
																							}
																							BgL_test1595z00_1991 =
																								BGl_isazf3zf3zz__objectz00
																								(BgL_arg1285z00_1563,
																								BGl_variablez00zzast_varz00);
																						}
																						if (BgL_test1595z00_1991)
																							{	/* Integrate/g.scm 84 */
																								bool_t BgL_test1596z00_2001;

																								{	/* Integrate/g.scm 84 */
																									obj_t BgL_arg1282z00_1561;

																									{
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_auxz00_2002;
																										{
																											obj_t BgL_auxz00_2003;

																											{	/* Integrate/g.scm 84 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2004;
																												BgL_tmpz00_2004 =
																													((BgL_objectz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_gifz00_1548));
																												BgL_auxz00_2003 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_2004);
																											}
																											BgL_auxz00_2002 =
																												(
																												(BgL_sfunzf2iinfozf2_bglt)
																												BgL_auxz00_2003);
																										}
																										BgL_arg1282z00_1561 =
																											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2002))->BgL_lz00);
																									}
																									BgL_test1596z00_2001 =
																										(BgL_arg1282z00_1561 ==
																										BgL_fz00_1537);
																								}
																								if (BgL_test1596z00_2001)
																									{	/* Integrate/g.scm 85 */
																										obj_t BgL_arg1277z00_1558;

																										BgL_arg1277z00_1558 =
																											CDR(
																											((obj_t) BgL_ctz00_1541));
																										{
																											obj_t BgL_ctz00_2013;

																											BgL_ctz00_2013 =
																												BgL_arg1277z00_1558;
																											BgL_ctz00_1541 =
																												BgL_ctz00_2013;
																											goto
																												BgL_zc3z04anonymousza31257ze3z87_1544;
																										}
																									}
																								else
																									{	/* Integrate/g.scm 84 */
																										{
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_auxz00_2014;
																											{
																												obj_t BgL_auxz00_2015;

																												{	/* Integrate/g.scm 87 */
																													BgL_objectz00_bglt
																														BgL_tmpz00_2016;
																													BgL_tmpz00_2016 =
																														(
																														(BgL_objectz00_bglt)
																														((BgL_sfunz00_bglt)
																															BgL_gifz00_1548));
																													BgL_auxz00_2015 =
																														BGL_OBJECT_WIDENING
																														(BgL_tmpz00_2016);
																												}
																												BgL_auxz00_2014 =
																													(
																													(BgL_sfunzf2iinfozf2_bglt)
																													BgL_auxz00_2015);
																											}
																											((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2014))->BgL_gzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																										}
																										{	/* Integrate/g.scm 91 */
																											obj_t BgL_arg1280z00_1559;
																											obj_t BgL_arg1281z00_1560;

																											BgL_arg1280z00_1559 =
																												CDR(
																												((obj_t)
																													BgL_ctz00_1541));
																											BgL_arg1281z00_1560 =
																												MAKE_YOUNG_PAIR
																												(BgL_gz00_1547,
																												BgL_gsz00_1543);
																											{
																												obj_t BgL_gsz00_2027;
																												bool_t
																													BgL_stopzf3zf3_2026;
																												obj_t BgL_ctz00_2025;

																												BgL_ctz00_2025 =
																													BgL_arg1280z00_1559;
																												BgL_stopzf3zf3_2026 =
																													((bool_t) 0);
																												BgL_gsz00_2027 =
																													BgL_arg1281z00_1560;
																												BgL_gsz00_1543 =
																													BgL_gsz00_2027;
																												BgL_stopzf3zf3_1542 =
																													BgL_stopzf3zf3_2026;
																												BgL_ctz00_1541 =
																													BgL_ctz00_2025;
																												goto
																													BgL_zc3z04anonymousza31257ze3z87_1544;
																											}
																										}
																									}
																							}
																						else
																							{	/* Integrate/g.scm 77 */
																								{
																									BgL_sfunzf2iinfozf2_bglt
																										BgL_auxz00_2028;
																									{
																										obj_t BgL_auxz00_2029;

																										{	/* Integrate/g.scm 82 */
																											BgL_objectz00_bglt
																												BgL_tmpz00_2030;
																											BgL_tmpz00_2030 =
																												((BgL_objectz00_bglt) (
																													(BgL_sfunz00_bglt)
																													BgL_gifz00_1548));
																											BgL_auxz00_2029 =
																												BGL_OBJECT_WIDENING
																												(BgL_tmpz00_2030);
																										}
																										BgL_auxz00_2028 =
																											(
																											(BgL_sfunzf2iinfozf2_bglt)
																											BgL_auxz00_2029);
																									}
																									((((BgL_sfunzf2iinfozf2_bglt)
																												COBJECT
																												(BgL_auxz00_2028))->
																											BgL_lz00) =
																										((obj_t) BgL_fz00_1537),
																										BUNSPEC);
																								}
																								{	/* Integrate/g.scm 83 */
																									obj_t BgL_arg1284z00_1562;

																									BgL_arg1284z00_1562 =
																										CDR(
																										((obj_t) BgL_ctz00_1541));
																									{
																										bool_t BgL_stopzf3zf3_2039;
																										obj_t BgL_ctz00_2038;

																										BgL_ctz00_2038 =
																											BgL_arg1284z00_1562;
																										BgL_stopzf3zf3_2039 =
																											((bool_t) 0);
																										BgL_stopzf3zf3_1542 =
																											BgL_stopzf3zf3_2039;
																										BgL_ctz00_1541 =
																											BgL_ctz00_2038;
																										goto
																											BgL_zc3z04anonymousza31257ze3z87_1544;
																									}
																								}
																							}
																					}
																				else
																					{	/* Integrate/g.scm 92 */
																						bool_t BgL_test1597z00_2040;

																						{	/* Integrate/g.scm 92 */
																							obj_t BgL_arg1312z00_1590;

																							{
																								BgL_sfunzf2iinfozf2_bglt
																									BgL_auxz00_2041;
																								{
																									obj_t BgL_auxz00_2042;

																									{	/* Integrate/g.scm 92 */
																										BgL_objectz00_bglt
																											BgL_tmpz00_2043;
																										BgL_tmpz00_2043 =
																											((BgL_objectz00_bglt) (
																												(BgL_sfunz00_bglt)
																												BgL_gifz00_1548));
																										BgL_auxz00_2042 =
																											BGL_OBJECT_WIDENING
																											(BgL_tmpz00_2043);
																									}
																									BgL_auxz00_2041 =
																										((BgL_sfunzf2iinfozf2_bglt)
																										BgL_auxz00_2042);
																								}
																								BgL_arg1312z00_1590 =
																									(((BgL_sfunzf2iinfozf2_bglt)
																										COBJECT(BgL_auxz00_2041))->
																									BgL_lz00);
																							}
																							BgL_test1597z00_2040 =
																								BGl_isazf3zf3zz__objectz00
																								(BgL_arg1312z00_1590,
																								BGl_variablez00zzast_varz00);
																						}
																						if (BgL_test1597z00_2040)
																							{	/* Integrate/g.scm 116 */
																								bool_t BgL_test1598z00_2050;

																								{	/* Integrate/g.scm 116 */
																									obj_t BgL_arg1303z00_1578;

																									{
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_auxz00_2051;
																										{
																											obj_t BgL_auxz00_2052;

																											{	/* Integrate/g.scm 116 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2053;
																												BgL_tmpz00_2053 =
																													((BgL_objectz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_fifz00_1538));
																												BgL_auxz00_2052 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_2053);
																											}
																											BgL_auxz00_2051 =
																												(
																												(BgL_sfunzf2iinfozf2_bglt)
																												BgL_auxz00_2052);
																										}
																										BgL_arg1303z00_1578 =
																											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2051))->BgL_lz00);
																									}
																									BgL_test1598z00_2050 =
																										BGl_isazf3zf3zz__objectz00
																										(BgL_arg1303z00_1578,
																										BGl_variablez00zzast_varz00);
																								}
																								if (BgL_test1598z00_2050)
																									{	/* Integrate/g.scm 124 */
																										bool_t BgL_test1599z00_2060;

																										{	/* Integrate/g.scm 124 */
																											obj_t BgL_arg1298z00_1574;
																											obj_t BgL_arg1299z00_1575;

																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2061;
																												{
																													obj_t BgL_auxz00_2062;

																													{	/* Integrate/g.scm 124 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2063;
																														BgL_tmpz00_2063 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_fifz00_1538));
																														BgL_auxz00_2062 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2063);
																													}
																													BgL_auxz00_2061 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2062);
																												}
																												BgL_arg1298z00_1574 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2061))->BgL_lz00);
																											}
																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2069;
																												{
																													obj_t BgL_auxz00_2070;

																													{	/* Integrate/g.scm 124 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2071;
																														BgL_tmpz00_2071 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_gifz00_1548));
																														BgL_auxz00_2070 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2071);
																													}
																													BgL_auxz00_2069 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2070);
																												}
																												BgL_arg1299z00_1575 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2069))->BgL_lz00);
																											}
																											BgL_test1599z00_2060 =
																												(BgL_arg1298z00_1574 ==
																												BgL_arg1299z00_1575);
																										}
																										if (BgL_test1599z00_2060)
																											{	/* Integrate/g.scm 124 */
																												{	/* Integrate/g.scm 128 */
																													obj_t
																														BgL_arg1295z00_1571;
																													BgL_arg1295z00_1571 =
																														CDR(((obj_t)
																															BgL_ctz00_1541));
																													{
																														obj_t
																															BgL_ctz00_2080;
																														BgL_ctz00_2080 =
																															BgL_arg1295z00_1571;
																														BgL_ctz00_1541 =
																															BgL_ctz00_2080;
																														goto
																															BgL_zc3z04anonymousza31257ze3z87_1544;
																													}
																												}
																											}
																										else
																											{	/* Integrate/g.scm 124 */
																												{
																													BgL_sfunzf2iinfozf2_bglt
																														BgL_auxz00_2081;
																													{
																														obj_t
																															BgL_auxz00_2082;
																														{	/* Integrate/g.scm 130 */
																															BgL_objectz00_bglt
																																BgL_tmpz00_2083;
																															BgL_tmpz00_2083 =
																																(
																																(BgL_objectz00_bglt)
																																((BgL_sfunz00_bglt) BgL_gifz00_1548));
																															BgL_auxz00_2082 =
																																BGL_OBJECT_WIDENING
																																(BgL_tmpz00_2083);
																														}
																														BgL_auxz00_2081 =
																															(
																															(BgL_sfunzf2iinfozf2_bglt)
																															BgL_auxz00_2082);
																													}
																													((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2081))->BgL_gzf3zf3) = ((bool_t) ((bool_t) 1)), BUNSPEC);
																												}
																												{	/* Integrate/g.scm 133 */
																													obj_t
																														BgL_arg1296z00_1572;
																													obj_t
																														BgL_arg1297z00_1573;
																													BgL_arg1296z00_1572 =
																														CDR(((obj_t)
																															BgL_ctz00_1541));
																													BgL_arg1297z00_1573 =
																														MAKE_YOUNG_PAIR
																														(BgL_gz00_1547,
																														BgL_gsz00_1543);
																													{
																														obj_t
																															BgL_gsz00_2094;
																														bool_t
																															BgL_stopzf3zf3_2093;
																														obj_t
																															BgL_ctz00_2092;
																														BgL_ctz00_2092 =
																															BgL_arg1296z00_1572;
																														BgL_stopzf3zf3_2093
																															= ((bool_t) 0);
																														BgL_gsz00_2094 =
																															BgL_arg1297z00_1573;
																														BgL_gsz00_1543 =
																															BgL_gsz00_2094;
																														BgL_stopzf3zf3_1542
																															=
																															BgL_stopzf3zf3_2093;
																														BgL_ctz00_1541 =
																															BgL_ctz00_2092;
																														goto
																															BgL_zc3z04anonymousza31257ze3z87_1544;
																													}
																												}
																											}
																									}
																								else
																									{	/* Integrate/g.scm 116 */
																										{	/* Integrate/g.scm 122 */
																											obj_t BgL_arg1300z00_1576;

																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2095;
																												{
																													obj_t BgL_auxz00_2096;

																													{	/* Integrate/g.scm 122 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2097;
																														BgL_tmpz00_2097 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_gifz00_1548));
																														BgL_auxz00_2096 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2097);
																													}
																													BgL_auxz00_2095 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2096);
																												}
																												BgL_arg1300z00_1576 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2095))->BgL_lz00);
																											}
																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2103;
																												{
																													obj_t BgL_auxz00_2104;

																													{	/* Integrate/g.scm 122 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2105;
																														BgL_tmpz00_2105 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_fifz00_1538));
																														BgL_auxz00_2104 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2105);
																													}
																													BgL_auxz00_2103 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2104);
																												}
																												((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2103))->BgL_lz00) = ((obj_t) BgL_arg1300z00_1576), BUNSPEC);
																											}
																										}
																										{	/* Integrate/g.scm 123 */
																											obj_t BgL_arg1301z00_1577;

																											BgL_arg1301z00_1577 =
																												CDR(
																												((obj_t)
																													BgL_ctz00_1541));
																											{
																												bool_t
																													BgL_stopzf3zf3_2114;
																												obj_t BgL_ctz00_2113;

																												BgL_ctz00_2113 =
																													BgL_arg1301z00_1577;
																												BgL_stopzf3zf3_2114 =
																													((bool_t) 0);
																												BgL_stopzf3zf3_1542 =
																													BgL_stopzf3zf3_2114;
																												BgL_ctz00_1541 =
																													BgL_ctz00_2113;
																												goto
																													BgL_zc3z04anonymousza31257ze3z87_1544;
																											}
																										}
																									}
																							}
																						else
																							{	/* Integrate/g.scm 94 */
																								bool_t BgL_test1600z00_2115;

																								{	/* Integrate/g.scm 94 */
																									obj_t BgL_arg1311z00_1589;

																									{
																										BgL_sfunzf2iinfozf2_bglt
																											BgL_auxz00_2116;
																										{
																											obj_t BgL_auxz00_2117;

																											{	/* Integrate/g.scm 94 */
																												BgL_objectz00_bglt
																													BgL_tmpz00_2118;
																												BgL_tmpz00_2118 =
																													((BgL_objectz00_bglt)
																													((BgL_sfunz00_bglt)
																														BgL_fifz00_1538));
																												BgL_auxz00_2117 =
																													BGL_OBJECT_WIDENING
																													(BgL_tmpz00_2118);
																											}
																											BgL_auxz00_2116 =
																												(
																												(BgL_sfunzf2iinfozf2_bglt)
																												BgL_auxz00_2117);
																										}
																										BgL_arg1311z00_1589 =
																											(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2116))->BgL_lz00);
																									}
																									BgL_test1600z00_2115 =
																										BGl_isazf3zf3zz__objectz00
																										(BgL_arg1311z00_1589,
																										BGl_variablez00zzast_varz00);
																								}
																								if (BgL_test1600z00_2115)
																									{	/* Integrate/g.scm 94 */
																										{	/* Integrate/g.scm 95 */
																											obj_t BgL_arg1306z00_1581;

																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2125;
																												{
																													obj_t BgL_auxz00_2126;

																													{	/* Integrate/g.scm 95 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2127;
																														BgL_tmpz00_2127 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_fifz00_1538));
																														BgL_auxz00_2126 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2127);
																													}
																													BgL_auxz00_2125 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2126);
																												}
																												BgL_arg1306z00_1581 =
																													(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2125))->BgL_lz00);
																											}
																											{
																												BgL_sfunzf2iinfozf2_bglt
																													BgL_auxz00_2133;
																												{
																													obj_t BgL_auxz00_2134;

																													{	/* Integrate/g.scm 95 */
																														BgL_objectz00_bglt
																															BgL_tmpz00_2135;
																														BgL_tmpz00_2135 =
																															(
																															(BgL_objectz00_bglt)
																															((BgL_sfunz00_bglt) BgL_gifz00_1548));
																														BgL_auxz00_2134 =
																															BGL_OBJECT_WIDENING
																															(BgL_tmpz00_2135);
																													}
																													BgL_auxz00_2133 =
																														(
																														(BgL_sfunzf2iinfozf2_bglt)
																														BgL_auxz00_2134);
																												}
																												((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2133))->BgL_lz00) = ((obj_t) BgL_arg1306z00_1581), BUNSPEC);
																											}
																										}
																										{	/* Integrate/g.scm 101 */
																											obj_t BgL_arg1307z00_1582;

																											BgL_arg1307z00_1582 =
																												CDR(
																												((obj_t)
																													BgL_ctz00_1541));
																											{
																												bool_t
																													BgL_stopzf3zf3_2144;
																												obj_t BgL_ctz00_2143;

																												BgL_ctz00_2143 =
																													BgL_arg1307z00_1582;
																												BgL_stopzf3zf3_2144 =
																													((bool_t) 0);
																												BgL_stopzf3zf3_1542 =
																													BgL_stopzf3zf3_2144;
																												BgL_ctz00_1541 =
																													BgL_ctz00_2143;
																												goto
																													BgL_zc3z04anonymousza31257ze3z87_1544;
																											}
																										}
																									}
																								else
																									{	/* Integrate/g.scm 103 */
																										bool_t BgL_stopzf3zf3_1583;

																										if (BgL_stopzf3zf3_1542)
																											{	/* Integrate/g.scm 105 */
																												bool_t
																													BgL_test1602z00_2146;
																												{	/* Integrate/g.scm 105 */
																													obj_t
																														BgL_arg1310z00_1588;
																													{
																														BgL_sfunzf2iinfozf2_bglt
																															BgL_auxz00_2147;
																														{
																															obj_t
																																BgL_auxz00_2148;
																															{	/* Integrate/g.scm 105 */
																																BgL_objectz00_bglt
																																	BgL_tmpz00_2149;
																																BgL_tmpz00_2149
																																	=
																																	(
																																	(BgL_objectz00_bglt)
																																	((BgL_sfunz00_bglt) BgL_fifz00_1538));
																																BgL_auxz00_2148
																																	=
																																	BGL_OBJECT_WIDENING
																																	(BgL_tmpz00_2149);
																															}
																															BgL_auxz00_2147 =
																																(
																																(BgL_sfunzf2iinfozf2_bglt)
																																BgL_auxz00_2148);
																														}
																														BgL_arg1310z00_1588
																															=
																															(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2147))->BgL_istampz00);
																													}
																													BgL_test1602z00_2146 =
																														INTEGERP
																														(BgL_arg1310z00_1588);
																												}
																												if (BgL_test1602z00_2146)
																													{	/* Integrate/g.scm 107 */
																														obj_t
																															BgL_arg1309z00_1587;
																														{
																															BgL_sfunzf2iinfozf2_bglt
																																BgL_auxz00_2156;
																															{
																																obj_t
																																	BgL_auxz00_2157;
																																{	/* Integrate/g.scm 107 */
																																	BgL_objectz00_bglt
																																		BgL_tmpz00_2158;
																																	BgL_tmpz00_2158
																																		=
																																		(
																																		(BgL_objectz00_bglt)
																																		((BgL_sfunz00_bglt) BgL_fifz00_1538));
																																	BgL_auxz00_2157
																																		=
																																		BGL_OBJECT_WIDENING
																																		(BgL_tmpz00_2158);
																																}
																																BgL_auxz00_2156
																																	=
																																	(
																																	(BgL_sfunzf2iinfozf2_bglt)
																																	BgL_auxz00_2157);
																															}
																															BgL_arg1309z00_1587
																																=
																																(((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2156))->BgL_istampz00);
																														}
																														BgL_stopzf3zf3_1583
																															=
																															((long)
																															CINT
																															(BgL_arg1309z00_1587)
																															<=
																															BgL_stampz00_1518);
																													}
																												else
																													{	/* Integrate/g.scm 105 */
																														BgL_stopzf3zf3_1583
																															= ((bool_t) 0);
																													}
																											}
																										else
																											{	/* Integrate/g.scm 103 */
																												BgL_stopzf3zf3_1583 =
																													((bool_t) 0);
																											}
																										{
																											BgL_sfunzf2iinfozf2_bglt
																												BgL_auxz00_2166;
																											{
																												obj_t BgL_auxz00_2167;

																												{	/* Integrate/g.scm 114 */
																													BgL_objectz00_bglt
																														BgL_tmpz00_2168;
																													BgL_tmpz00_2168 =
																														(
																														(BgL_objectz00_bglt)
																														((BgL_sfunz00_bglt)
																															BgL_fifz00_1538));
																													BgL_auxz00_2167 =
																														BGL_OBJECT_WIDENING
																														(BgL_tmpz00_2168);
																												}
																												BgL_auxz00_2166 =
																													(
																													(BgL_sfunzf2iinfozf2_bglt)
																													BgL_auxz00_2167);
																											}
																											((((BgL_sfunzf2iinfozf2_bglt) COBJECT(BgL_auxz00_2166))->BgL_istampz00) = ((obj_t) BINT(BgL_stampz00_1518)), BUNSPEC);
																										}
																										{	/* Integrate/g.scm 115 */
																											obj_t BgL_arg1308z00_1584;

																											BgL_arg1308z00_1584 =
																												CDR(
																												((obj_t)
																													BgL_ctz00_1541));
																											{
																												bool_t
																													BgL_stopzf3zf3_2178;
																												obj_t BgL_ctz00_2177;

																												BgL_ctz00_2177 =
																													BgL_arg1308z00_1584;
																												BgL_stopzf3zf3_2178 =
																													BgL_stopzf3zf3_1583;
																												BgL_stopzf3zf3_1542 =
																													BgL_stopzf3zf3_2178;
																												BgL_ctz00_1541 =
																													BgL_ctz00_2177;
																												goto
																													BgL_zc3z04anonymousza31257ze3z87_1544;
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
								}
							}
					}
			}
		}

	}



/* &G! */
	obj_t BGl_z62Gz12z70zzintegrate_gz00(obj_t BgL_envz00_1898,
		obj_t BgL_gzf2cnzf2_1899)
	{
		{	/* Integrate/g.scm 32 */
			return BGl_Gz12z12zzintegrate_gz00(BgL_gzf2cnzf2_1899);
		}

	}



/* integrate-remaining-local-functions! */
	bool_t BGl_integratezd2remainingzd2localzd2functionsz12zc0zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 143 */
			{
				obj_t BgL_l1237z00_1595;

				BgL_l1237z00_1595 = BGl_za2phiza2z00zzintegrate_az00;
			BgL_zc3z04anonymousza31313ze3z87_1596:
				if (PAIRP(BgL_l1237z00_1595))
					{	/* Integrate/g.scm 144 */
						{	/* Integrate/g.scm 145 */
							obj_t BgL_fz00_1598;

							BgL_fz00_1598 = CAR(BgL_l1237z00_1595);
							{	/* Integrate/g.scm 145 */
								bool_t BgL_test1604z00_2183;

								if (BGl_isazf3zf3zz__objectz00(BgL_fz00_1598,
										BGl_localz00zzast_varz00))
									{	/* Integrate/g.scm 146 */
										bool_t BgL_test1606z00_2186;

										{	/* Integrate/g.scm 146 */
											BgL_sfunz00_bglt BgL_oz00_1877;

											BgL_oz00_1877 =
												((BgL_sfunz00_bglt)
												(((BgL_variablez00_bglt) COBJECT(
															((BgL_variablez00_bglt)
																((BgL_localz00_bglt) BgL_fz00_1598))))->
													BgL_valuez00));
											{
												BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2191;

												{
													obj_t BgL_auxz00_2192;

													{	/* Integrate/g.scm 146 */
														BgL_objectz00_bglt BgL_tmpz00_2193;

														BgL_tmpz00_2193 =
															((BgL_objectz00_bglt) BgL_oz00_1877);
														BgL_auxz00_2192 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2193);
													}
													BgL_auxz00_2191 =
														((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2192);
												}
												BgL_test1606z00_2186 =
													(((BgL_sfunzf2iinfozf2_bglt)
														COBJECT(BgL_auxz00_2191))->BgL_gzf3zf3);
											}
										}
										if (BgL_test1606z00_2186)
											{	/* Integrate/g.scm 146 */
												BgL_test1604z00_2183 = ((bool_t) 0);
											}
										else
											{	/* Integrate/g.scm 147 */
												bool_t BgL_test1607z00_2198;

												{	/* Integrate/g.scm 147 */
													obj_t BgL_arg1331z00_1615;

													{	/* Integrate/g.scm 147 */
														BgL_sfunz00_bglt BgL_oz00_1880;

														BgL_oz00_1880 =
															((BgL_sfunz00_bglt)
															(((BgL_variablez00_bglt) COBJECT(
																		((BgL_variablez00_bglt)
																			((BgL_localz00_bglt) BgL_fz00_1598))))->
																BgL_valuez00));
														{
															BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2203;

															{
																obj_t BgL_auxz00_2204;

																{	/* Integrate/g.scm 147 */
																	BgL_objectz00_bglt BgL_tmpz00_2205;

																	BgL_tmpz00_2205 =
																		((BgL_objectz00_bglt) BgL_oz00_1880);
																	BgL_auxz00_2204 =
																		BGL_OBJECT_WIDENING(BgL_tmpz00_2205);
																}
																BgL_auxz00_2203 =
																	((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2204);
															}
															BgL_arg1331z00_1615 =
																(((BgL_sfunzf2iinfozf2_bglt)
																	COBJECT(BgL_auxz00_2203))->BgL_lz00);
														}
													}
													BgL_test1607z00_2198 =
														BGl_isazf3zf3zz__objectz00(BgL_arg1331z00_1615,
														BGl_variablez00zzast_varz00);
												}
												if (BgL_test1607z00_2198)
													{	/* Integrate/g.scm 147 */
														BgL_test1604z00_2183 = ((bool_t) 0);
													}
												else
													{	/* Integrate/g.scm 147 */
														BgL_test1604z00_2183 = ((bool_t) 1);
													}
											}
									}
								else
									{	/* Integrate/g.scm 145 */
										BgL_test1604z00_2183 = ((bool_t) 0);
									}
								if (BgL_test1604z00_2183)
									{	/* Integrate/g.scm 145 */
										{	/* Integrate/g.scm 153 */
											BgL_valuez00_bglt BgL_arg1328z00_1609;
											obj_t BgL_arg1329z00_1610;

											BgL_arg1328z00_1609 =
												(((BgL_variablez00_bglt) COBJECT(
														((BgL_variablez00_bglt)
															((BgL_localz00_bglt) BgL_fz00_1598))))->
												BgL_valuez00);
											{	/* Integrate/g.scm 154 */
												BgL_sfunz00_bglt BgL_oz00_1885;

												BgL_oz00_1885 =
													((BgL_sfunz00_bglt)
													(((BgL_variablez00_bglt) COBJECT(
																((BgL_variablez00_bglt)
																	((BgL_localz00_bglt) BgL_fz00_1598))))->
														BgL_valuez00));
												{
													BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2218;

													{
														obj_t BgL_auxz00_2219;

														{	/* Integrate/g.scm 154 */
															BgL_objectz00_bglt BgL_tmpz00_2220;

															BgL_tmpz00_2220 =
																((BgL_objectz00_bglt) BgL_oz00_1885);
															BgL_auxz00_2219 =
																BGL_OBJECT_WIDENING(BgL_tmpz00_2220);
														}
														BgL_auxz00_2218 =
															((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2219);
													}
													BgL_arg1329z00_1610 =
														(((BgL_sfunzf2iinfozf2_bglt)
															COBJECT(BgL_auxz00_2218))->BgL_ownerz00);
												}
											}
											{
												BgL_sfunzf2iinfozf2_bglt BgL_auxz00_2225;

												{
													obj_t BgL_auxz00_2226;

													{	/* Integrate/g.scm 153 */
														BgL_objectz00_bglt BgL_tmpz00_2227;

														BgL_tmpz00_2227 =
															((BgL_objectz00_bglt)
															((BgL_sfunz00_bglt) BgL_arg1328z00_1609));
														BgL_auxz00_2226 =
															BGL_OBJECT_WIDENING(BgL_tmpz00_2227);
													}
													BgL_auxz00_2225 =
														((BgL_sfunzf2iinfozf2_bglt) BgL_auxz00_2226);
												}
												((((BgL_sfunzf2iinfozf2_bglt)
															COBJECT(BgL_auxz00_2225))->BgL_lz00) =
													((obj_t) BgL_arg1329z00_1610), BUNSPEC);
											}
										}
									}
								else
									{	/* Integrate/g.scm 145 */
										BFALSE;
									}
							}
						}
						{
							obj_t BgL_l1237z00_2233;

							BgL_l1237z00_2233 = CDR(BgL_l1237z00_1595);
							BgL_l1237z00_1595 = BgL_l1237z00_2233;
							goto BgL_zc3z04anonymousza31313ze3z87_1596;
						}
					}
				else
					{	/* Integrate/g.scm 144 */
						return ((bool_t) 1);
					}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zzintegrate_gz00()
	{
		{	/* Integrate/g.scm 15 */
			BGl_modulezd2initializa7ationz75zztools_tracez00(((long) 54713251),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zztools_shapez00(((long) 365925560),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zztype_typez00(((long) 515343422),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzast_varz00(((long) 90833999),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzast_nodez00(((long) 469732619),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			BGl_modulezd2initializa7ationz75zzintegrate_infoz00(((long) 0),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
			return
				BGl_modulezd2initializa7ationz75zzintegrate_az00(((long) 523633215),
				BSTRING_TO_STRING(BGl_string1580z00zzintegrate_gz00));
		}

	}

#ifdef __cplusplus
}
#endif
