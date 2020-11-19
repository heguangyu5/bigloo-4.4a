/*===========================================================================*/
/*   (Ieee/equiv.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Ieee/equiv.scm -indent -o objs/obj_u/Ieee/equiv.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif

/* object type definitions */

	static obj_t BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 =
		BUNSPEC;
	BGL_EXPORTED_DECL bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t,
		obj_t);
	extern obj_t weakptr_data(obj_t);
	extern bool_t ucs2_strcmp(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00();
	static obj_t BGl_objectzd2initzd2zz__r4_equivalence_6_2z00();
	extern bool_t BGl_2zd3zd3zz__r4_numbers_6_5z00(obj_t, obj_t);
	extern bool_t BGl_objectzd2equalzf3z21zz__objectz00(BgL_objectz00_bglt,
		BgL_objectz00_bglt);
	static obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();
	static obj_t BGl_z62equalzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	static obj_t BGl_z62eqzf3z91zz__r4_equivalence_6_2z00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern bool_t BGl_numberzf3zf3zz__r4_numbers_6_5z00(obj_t);
	static obj_t BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
	extern obj_t BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00(obj_t);
	BGL_EXPORTED_DECL bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t, obj_t);
	extern long bgl_date_to_seconds(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1716z00zz__r4_equivalence_6_2z00,
		BgL_bgl_string1716za700za7za7_1717za7, "__r4_equivalence_6_2", 20);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_eqzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl_za762eqza7f3za791za7za7__r1718za7,
		BGl_z62eqzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_eqvzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl_za762eqvza7f3za791za7za7__1719za7,
		BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_equalzf3zd2envz21zz__r4_equivalence_6_2z00,
		BgL_bgl_za762equalza7f3za791za7za71720za7,
		BGl_z62equalzf3z91zz__r4_equivalence_6_2z00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t
		BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long
		BgL_checksumz00_1983, char *BgL_fromz00_1984)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00))
				{
					BGl_requirezd2initializa7ationz75zz__r4_equivalence_6_2z00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00();
					BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00();
					return BGl_methodzd2initzd2zz__r4_equivalence_6_2z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__r4_equivalence_6_2z00()
	{
		{	/* Ieee/equiv.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* eq? */
	BGL_EXPORTED_DEF bool_t BGl_eqzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_3, obj_t BgL_obj2z00_4)
	{
		{	/* Ieee/equiv.scm 67 */
			return (BgL_obj1z00_3 == BgL_obj2z00_4);
		}

	}



/* &eq? */
	obj_t BGl_z62eqzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1974,
		obj_t BgL_obj1z00_1975, obj_t BgL_obj2z00_1976)
	{
		{	/* Ieee/equiv.scm 67 */
			return
				BBOOL(BGl_eqzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1975,
					BgL_obj2z00_1976));
		}

	}



/* eqv? */
	BGL_EXPORTED_DEF bool_t BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_5, obj_t BgL_obj2z00_6)
	{
		{	/* Ieee/equiv.scm 73 */
		BGl_eqvzf3zf3zz__r4_equivalence_6_2z00:
			if ((BgL_obj1z00_5 == BgL_obj2z00_6))
				{	/* Ieee/equiv.scm 75 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/equiv.scm 77 */
					bool_t BgL_test1723z00_1997;

					{	/* Ieee/equiv.scm 77 */
						bool_t BgL__ortest_1076z00_1618;

						BgL__ortest_1076z00_1618 = INTEGERP(BgL_obj1z00_5);
						if (BgL__ortest_1076z00_1618)
							{	/* Ieee/equiv.scm 77 */
								BgL_test1723z00_1997 = BgL__ortest_1076z00_1618;
							}
						else
							{	/* Ieee/equiv.scm 77 */
								bool_t BgL__ortest_1077z00_1619;

								BgL__ortest_1077z00_1619 = ELONGP(BgL_obj1z00_5);
								if (BgL__ortest_1077z00_1619)
									{	/* Ieee/equiv.scm 77 */
										BgL_test1723z00_1997 = BgL__ortest_1077z00_1619;
									}
								else
									{	/* Ieee/equiv.scm 77 */
										bool_t BgL__ortest_1078z00_1620;

										BgL__ortest_1078z00_1620 = LLONGP(BgL_obj1z00_5);
										if (BgL__ortest_1078z00_1620)
											{	/* Ieee/equiv.scm 77 */
												BgL_test1723z00_1997 = BgL__ortest_1078z00_1620;
											}
										else
											{	/* Ieee/equiv.scm 77 */
												bool_t BgL__ortest_1079z00_1621;

												BgL__ortest_1079z00_1621 = BGL_INT8P(BgL_obj1z00_5);
												if (BgL__ortest_1079z00_1621)
													{	/* Ieee/equiv.scm 77 */
														BgL_test1723z00_1997 = BgL__ortest_1079z00_1621;
													}
												else
													{	/* Ieee/equiv.scm 77 */
														bool_t BgL__ortest_1080z00_1622;

														BgL__ortest_1080z00_1622 =
															BGL_UINT8P(BgL_obj1z00_5);
														if (BgL__ortest_1080z00_1622)
															{	/* Ieee/equiv.scm 77 */
																BgL_test1723z00_1997 = BgL__ortest_1080z00_1622;
															}
														else
															{	/* Ieee/equiv.scm 77 */
																bool_t BgL__ortest_1081z00_1623;

																BgL__ortest_1081z00_1623 =
																	BGL_INT16P(BgL_obj1z00_5);
																if (BgL__ortest_1081z00_1623)
																	{	/* Ieee/equiv.scm 77 */
																		BgL_test1723z00_1997 =
																			BgL__ortest_1081z00_1623;
																	}
																else
																	{	/* Ieee/equiv.scm 77 */
																		bool_t BgL__ortest_1082z00_1624;

																		BgL__ortest_1082z00_1624 =
																			BGL_UINT16P(BgL_obj1z00_5);
																		if (BgL__ortest_1082z00_1624)
																			{	/* Ieee/equiv.scm 77 */
																				BgL_test1723z00_1997 =
																					BgL__ortest_1082z00_1624;
																			}
																		else
																			{	/* Ieee/equiv.scm 77 */
																				bool_t BgL__ortest_1083z00_1625;

																				BgL__ortest_1083z00_1625 =
																					BGL_INT32P(BgL_obj1z00_5);
																				if (BgL__ortest_1083z00_1625)
																					{	/* Ieee/equiv.scm 77 */
																						BgL_test1723z00_1997 =
																							BgL__ortest_1083z00_1625;
																					}
																				else
																					{	/* Ieee/equiv.scm 77 */
																						bool_t BgL__ortest_1084z00_1626;

																						BgL__ortest_1084z00_1626 =
																							BGL_UINT32P(BgL_obj1z00_5);
																						if (BgL__ortest_1084z00_1626)
																							{	/* Ieee/equiv.scm 77 */
																								BgL_test1723z00_1997 =
																									BgL__ortest_1084z00_1626;
																							}
																						else
																							{	/* Ieee/equiv.scm 77 */
																								bool_t BgL__ortest_1085z00_1627;

																								BgL__ortest_1085z00_1627 =
																									BGL_INT64P(BgL_obj1z00_5);
																								if (BgL__ortest_1085z00_1627)
																									{	/* Ieee/equiv.scm 77 */
																										BgL_test1723z00_1997 =
																											BgL__ortest_1085z00_1627;
																									}
																								else
																									{	/* Ieee/equiv.scm 77 */
																										bool_t
																											BgL__ortest_1086z00_1628;
																										BgL__ortest_1086z00_1628 =
																											BGL_UINT64P
																											(BgL_obj1z00_5);
																										if (BgL__ortest_1086z00_1628)
																											{	/* Ieee/equiv.scm 77 */
																												BgL_test1723z00_1997 =
																													BgL__ortest_1086z00_1628;
																											}
																										else
																											{	/* Ieee/equiv.scm 77 */
																												BgL_test1723z00_1997 =
																													BIGNUMP
																													(BgL_obj1z00_5);
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
					if (BgL_test1723z00_1997)
						{	/* Ieee/equiv.scm 78 */
							bool_t BgL_test1736z00_2021;

							{	/* Ieee/equiv.scm 78 */
								bool_t BgL__ortest_1076z00_1642;

								BgL__ortest_1076z00_1642 = INTEGERP(BgL_obj2z00_6);
								if (BgL__ortest_1076z00_1642)
									{	/* Ieee/equiv.scm 78 */
										BgL_test1736z00_2021 = BgL__ortest_1076z00_1642;
									}
								else
									{	/* Ieee/equiv.scm 78 */
										bool_t BgL__ortest_1077z00_1643;

										BgL__ortest_1077z00_1643 = ELONGP(BgL_obj2z00_6);
										if (BgL__ortest_1077z00_1643)
											{	/* Ieee/equiv.scm 78 */
												BgL_test1736z00_2021 = BgL__ortest_1077z00_1643;
											}
										else
											{	/* Ieee/equiv.scm 78 */
												bool_t BgL__ortest_1078z00_1644;

												BgL__ortest_1078z00_1644 = LLONGP(BgL_obj2z00_6);
												if (BgL__ortest_1078z00_1644)
													{	/* Ieee/equiv.scm 78 */
														BgL_test1736z00_2021 = BgL__ortest_1078z00_1644;
													}
												else
													{	/* Ieee/equiv.scm 78 */
														bool_t BgL__ortest_1079z00_1645;

														BgL__ortest_1079z00_1645 = BGL_INT8P(BgL_obj2z00_6);
														if (BgL__ortest_1079z00_1645)
															{	/* Ieee/equiv.scm 78 */
																BgL_test1736z00_2021 = BgL__ortest_1079z00_1645;
															}
														else
															{	/* Ieee/equiv.scm 78 */
																bool_t BgL__ortest_1080z00_1646;

																BgL__ortest_1080z00_1646 =
																	BGL_UINT8P(BgL_obj2z00_6);
																if (BgL__ortest_1080z00_1646)
																	{	/* Ieee/equiv.scm 78 */
																		BgL_test1736z00_2021 =
																			BgL__ortest_1080z00_1646;
																	}
																else
																	{	/* Ieee/equiv.scm 78 */
																		bool_t BgL__ortest_1081z00_1647;

																		BgL__ortest_1081z00_1647 =
																			BGL_INT16P(BgL_obj2z00_6);
																		if (BgL__ortest_1081z00_1647)
																			{	/* Ieee/equiv.scm 78 */
																				BgL_test1736z00_2021 =
																					BgL__ortest_1081z00_1647;
																			}
																		else
																			{	/* Ieee/equiv.scm 78 */
																				bool_t BgL__ortest_1082z00_1648;

																				BgL__ortest_1082z00_1648 =
																					BGL_UINT16P(BgL_obj2z00_6);
																				if (BgL__ortest_1082z00_1648)
																					{	/* Ieee/equiv.scm 78 */
																						BgL_test1736z00_2021 =
																							BgL__ortest_1082z00_1648;
																					}
																				else
																					{	/* Ieee/equiv.scm 78 */
																						bool_t BgL__ortest_1083z00_1649;

																						BgL__ortest_1083z00_1649 =
																							BGL_INT32P(BgL_obj2z00_6);
																						if (BgL__ortest_1083z00_1649)
																							{	/* Ieee/equiv.scm 78 */
																								BgL_test1736z00_2021 =
																									BgL__ortest_1083z00_1649;
																							}
																						else
																							{	/* Ieee/equiv.scm 78 */
																								bool_t BgL__ortest_1084z00_1650;

																								BgL__ortest_1084z00_1650 =
																									BGL_UINT32P(BgL_obj2z00_6);
																								if (BgL__ortest_1084z00_1650)
																									{	/* Ieee/equiv.scm 78 */
																										BgL_test1736z00_2021 =
																											BgL__ortest_1084z00_1650;
																									}
																								else
																									{	/* Ieee/equiv.scm 78 */
																										bool_t
																											BgL__ortest_1085z00_1651;
																										BgL__ortest_1085z00_1651 =
																											BGL_INT64P(BgL_obj2z00_6);
																										if (BgL__ortest_1085z00_1651)
																											{	/* Ieee/equiv.scm 78 */
																												BgL_test1736z00_2021 =
																													BgL__ortest_1085z00_1651;
																											}
																										else
																											{	/* Ieee/equiv.scm 78 */
																												bool_t
																													BgL__ortest_1086z00_1652;
																												BgL__ortest_1086z00_1652
																													=
																													BGL_UINT64P
																													(BgL_obj2z00_6);
																												if (BgL__ortest_1086z00_1652)
																													{	/* Ieee/equiv.scm 78 */
																														BgL_test1736z00_2021
																															=
																															BgL__ortest_1086z00_1652;
																													}
																												else
																													{	/* Ieee/equiv.scm 78 */
																														BgL_test1736z00_2021
																															=
																															BIGNUMP
																															(BgL_obj2z00_6);
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
							if (BgL_test1736z00_2021)
								{	/* Ieee/equiv.scm 78 */
									return
										BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_5,
										BgL_obj2z00_6);
								}
							else
								{	/* Ieee/equiv.scm 78 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Ieee/equiv.scm 77 */
							if (REALP(BgL_obj1z00_5))
								{	/* Ieee/equiv.scm 79 */
									if (REALP(BgL_obj2z00_6))
										{	/* Ieee/equiv.scm 80 */
											return
												BGl_2zd3zd3zz__r4_numbers_6_5z00(BgL_obj1z00_5,
												BgL_obj2z00_6);
										}
									else
										{	/* Ieee/equiv.scm 80 */
											return ((bool_t) 0);
										}
								}
							else
								{	/* Ieee/equiv.scm 79 */
									if (SYMBOLP(BgL_obj1z00_5))
										{	/* Ieee/equiv.scm 81 */
											if (SYMBOLP(BgL_obj2z00_6))
												{	/* Ieee/equiv.scm 83 */
													obj_t BgL_arg1134z00_1149;
													obj_t BgL_arg1140z00_1150;

													{	/* Ieee/equiv.scm 83 */
														obj_t BgL_res1615z00_1673;

														BgL_res1615z00_1673 =
															SYMBOL_TO_STRING(BgL_obj1z00_5);
														BgL_arg1134z00_1149 = BgL_res1615z00_1673;
													}
													{	/* Ieee/equiv.scm 83 */
														obj_t BgL_res1616z00_1675;

														BgL_res1616z00_1675 =
															SYMBOL_TO_STRING(BgL_obj2z00_6);
														BgL_arg1140z00_1150 = BgL_res1616z00_1675;
													}
													{	/* Ieee/equiv.scm 83 */
														bool_t BgL_res1621z00_1691;

														{	/* Ieee/equiv.scm 83 */
															long BgL_l1z00_1678;

															BgL_l1z00_1678 =
																STRING_LENGTH(BgL_arg1134z00_1149);
															if (
																(BgL_l1z00_1678 ==
																	STRING_LENGTH(BgL_arg1140z00_1150)))
																{	/* Ieee/equiv.scm 83 */
																	int BgL_arg1263z00_1681;

																	{	/* Ieee/equiv.scm 83 */
																		char *BgL_auxz00_2063;
																		char *BgL_tmpz00_2061;

																		BgL_auxz00_2063 =
																			BSTRING_TO_STRING(BgL_arg1140z00_1150);
																		BgL_tmpz00_2061 =
																			BSTRING_TO_STRING(BgL_arg1134z00_1149);
																		BgL_arg1263z00_1681 =
																			memcmp(BgL_tmpz00_2061, BgL_auxz00_2063,
																			BgL_l1z00_1678);
																	}
																	BgL_res1621z00_1691 =
																		(
																		(long) (BgL_arg1263z00_1681) == ((long) 0));
																}
															else
																{	/* Ieee/equiv.scm 83 */
																	BgL_res1621z00_1691 = ((bool_t) 0);
																}
														}
														return BgL_res1621z00_1691;
													}
												}
											else
												{	/* Ieee/equiv.scm 82 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/equiv.scm 81 */
											if (FOREIGNP(BgL_obj1z00_5))
												{	/* Ieee/equiv.scm 84 */
													if (FOREIGNP(BgL_obj2z00_6))
														{	/* Ieee/equiv.scm 85 */
															return FOREIGN_EQP(BgL_obj1z00_5, BgL_obj2z00_6);
														}
													else
														{	/* Ieee/equiv.scm 85 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 84 */
													if (BGL_WEAKPTRP(BgL_obj1z00_5))
														{	/* Ieee/equiv.scm 86 */
															if (BGL_WEAKPTRP(BgL_obj2z00_6))
																{
																	obj_t BgL_obj2z00_2079;
																	obj_t BgL_obj1z00_2077;

																	BgL_obj1z00_2077 =
																		weakptr_data(BgL_obj1z00_5);
																	BgL_obj2z00_2079 =
																		weakptr_data(BgL_obj2z00_6);
																	BgL_obj2z00_6 = BgL_obj2z00_2079;
																	BgL_obj1z00_5 = BgL_obj1z00_2077;
																	goto BGl_eqvzf3zf3zz__r4_equivalence_6_2z00;
																}
															else
																{	/* Ieee/equiv.scm 87 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/equiv.scm 86 */
															return ((bool_t) 0);
														}
												}
										}
								}
						}
				}
		}

	}



/* &eqv? */
	obj_t BGl_z62eqvzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1977,
		obj_t BgL_obj1z00_1978, obj_t BgL_obj2z00_1979)
	{
		{	/* Ieee/equiv.scm 73 */
			return
				BBOOL(BGl_eqvzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1978,
					BgL_obj2z00_1979));
		}

	}



/* equal? */
	BGL_EXPORTED_DEF bool_t BGl_equalzf3zf3zz__r4_equivalence_6_2z00(obj_t
		BgL_obj1z00_7, obj_t BgL_obj2z00_8)
	{
		{	/* Ieee/equiv.scm 94 */
		BGl_equalzf3zf3zz__r4_equivalence_6_2z00:
			if ((BgL_obj1z00_7 == BgL_obj2z00_8))
				{	/* Ieee/equiv.scm 96 */
					return ((bool_t) 1);
				}
			else
				{	/* Ieee/equiv.scm 96 */
					if (STRINGP(BgL_obj1z00_7))
						{	/* Ieee/equiv.scm 98 */
							if (STRINGP(BgL_obj2z00_8))
								{	/* Ieee/equiv.scm 99 */
									bool_t BgL_res1633z00_1716;

									{	/* Ieee/equiv.scm 99 */
										long BgL_l1z00_1703;

										BgL_l1z00_1703 = STRING_LENGTH(BgL_obj1z00_7);
										if ((BgL_l1z00_1703 == STRING_LENGTH(BgL_obj2z00_8)))
											{	/* Ieee/equiv.scm 99 */
												int BgL_arg1263z00_1706;

												{	/* Ieee/equiv.scm 99 */
													char *BgL_auxz00_2095;
													char *BgL_tmpz00_2093;

													BgL_auxz00_2095 = BSTRING_TO_STRING(BgL_obj2z00_8);
													BgL_tmpz00_2093 = BSTRING_TO_STRING(BgL_obj1z00_7);
													BgL_arg1263z00_1706 =
														memcmp(BgL_tmpz00_2093, BgL_auxz00_2095,
														BgL_l1z00_1703);
												}
												BgL_res1633z00_1716 =
													((long) (BgL_arg1263z00_1706) == ((long) 0));
											}
										else
											{	/* Ieee/equiv.scm 99 */
												BgL_res1633z00_1716 = ((bool_t) 0);
											}
									}
									return BgL_res1633z00_1716;
								}
							else
								{	/* Ieee/equiv.scm 99 */
									return ((bool_t) 0);
								}
						}
					else
						{	/* Ieee/equiv.scm 98 */
							if (SYMBOLP(BgL_obj1z00_7))
								{	/* Ieee/equiv.scm 100 */
									return ((bool_t) 0);
								}
							else
								{	/* Ieee/equiv.scm 100 */
									if (PAIRP(BgL_obj1z00_7))
										{	/* Ieee/equiv.scm 102 */
											if (PAIRP(BgL_obj2z00_8))
												{	/* Ieee/equiv.scm 103 */
													if (BGl_equalzf3zf3zz__r4_equivalence_6_2z00(CAR
															(BgL_obj1z00_7), CAR(BgL_obj2z00_8)))
														{
															obj_t BgL_obj2z00_2112;
															obj_t BgL_obj1z00_2110;

															BgL_obj1z00_2110 = CDR(BgL_obj1z00_7);
															BgL_obj2z00_2112 = CDR(BgL_obj2z00_8);
															BgL_obj2z00_8 = BgL_obj2z00_2112;
															BgL_obj1z00_7 = BgL_obj1z00_2110;
															goto BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
														}
													else
														{	/* Ieee/equiv.scm 104 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 103 */
													return ((bool_t) 0);
												}
										}
									else
										{	/* Ieee/equiv.scm 102 */
											if (VECTORP(BgL_obj1z00_7))
												{	/* Ieee/equiv.scm 106 */
													if (VECTORP(BgL_obj2z00_8))
														{	/* Ieee/equiv.scm 108 */
															if (
																(VECTOR_LENGTH(BgL_obj2z00_8) ==
																	VECTOR_LENGTH(BgL_obj1z00_7)))
																{	/* Ieee/equiv.scm 110 */
																	bool_t BgL_test1768z00_2122;

																	{	/* Ieee/equiv.scm 110 */
																		int BgL_arg1174z00_1182;
																		int BgL_arg1175z00_1183;

																		{	/* Ieee/equiv.scm 110 */
																			int BgL_res1640z00_1732;

																			BgL_res1640z00_1732 =
																				VECTOR_TAG(BgL_obj1z00_7);
																			BgL_arg1174z00_1182 = BgL_res1640z00_1732;
																		}
																		{	/* Ieee/equiv.scm 110 */
																			int BgL_res1641z00_1734;

																			BgL_res1641z00_1734 =
																				VECTOR_TAG(BgL_obj2z00_8);
																			BgL_arg1175z00_1183 = BgL_res1641z00_1734;
																		}
																		BgL_test1768z00_2122 =
																			(
																			(long) (BgL_arg1174z00_1182) ==
																			(long) (BgL_arg1175z00_1183));
																	}
																	if (BgL_test1768z00_2122)
																		{
																			long BgL_iz00_1748;

																			BgL_iz00_1748 = ((long) 0);
																		BgL_testz00_1747:
																			{	/* Ieee/equiv.scm 112 */
																				bool_t BgL__ortest_1047z00_1749;

																				BgL__ortest_1047z00_1749 =
																					(BgL_iz00_1748 ==
																					VECTOR_LENGTH(BgL_obj1z00_7));
																				if (BgL__ortest_1047z00_1749)
																					{	/* Ieee/equiv.scm 112 */
																						return BgL__ortest_1047z00_1749;
																					}
																				else
																					{	/* Ieee/equiv.scm 113 */
																						bool_t BgL_test1770z00_2131;

																						{	/* Ieee/equiv.scm 113 */
																							obj_t BgL_arg1170z00_1754;
																							obj_t BgL_arg1172z00_1755;

																							BgL_arg1170z00_1754 =
																								VECTOR_REF(
																								((obj_t) BgL_obj1z00_7),
																								BgL_iz00_1748);
																							BgL_arg1172z00_1755 =
																								VECTOR_REF(((obj_t)
																									BgL_obj2z00_8),
																								BgL_iz00_1748);
																							BgL_test1770z00_2131 =
																								BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																								(BgL_arg1170z00_1754,
																								BgL_arg1172z00_1755);
																						}
																						if (BgL_test1770z00_2131)
																							{
																								long BgL_iz00_2137;

																								BgL_iz00_2137 =
																									(BgL_iz00_1748 + ((long) 1));
																								BgL_iz00_1748 = BgL_iz00_2137;
																								goto BgL_testz00_1747;
																							}
																						else
																							{	/* Ieee/equiv.scm 113 */
																								return ((bool_t) 0);
																							}
																					}
																			}
																		}
																	else
																		{	/* Ieee/equiv.scm 110 */
																			return ((bool_t) 0);
																		}
																}
															else
																{	/* Ieee/equiv.scm 109 */
																	return ((bool_t) 0);
																}
														}
													else
														{	/* Ieee/equiv.scm 108 */
															return ((bool_t) 0);
														}
												}
											else
												{	/* Ieee/equiv.scm 106 */
													if (BGl_eqvzf3zf3zz__r4_equivalence_6_2z00
														(BgL_obj1z00_7, BgL_obj2z00_8))
														{	/* Ieee/equiv.scm 116 */
															return ((bool_t) 1);
														}
													else
														{	/* Ieee/equiv.scm 116 */
															if (INTEGERP(BgL_obj1z00_7))
																{	/* Ieee/equiv.scm 118 */
																	return ((bool_t) 0);
																}
															else
																{	/* Ieee/equiv.scm 118 */
																	if (BGL_HVECTORP(BgL_obj1z00_7))
																		{	/* Ieee/equiv.scm 121 */
																			long BgL_lobj1z00_1188;

																			BgL_lobj1z00_1188 =
																				BGL_HVECTOR_LENGTH(BgL_obj1z00_7);
																			if (BGL_HVECTORP(BgL_obj2z00_8))
																				{	/* Ieee/equiv.scm 123 */
																					bool_t BgL_test1775z00_2148;

																					{	/* Ieee/equiv.scm 123 */
																						long BgL_arg1197z00_1211;

																						BgL_arg1197z00_1211 =
																							BGL_HVECTOR_LENGTH(BgL_obj2z00_8);
																						BgL_test1775z00_2148 =
																							(BgL_arg1197z00_1211 ==
																							BgL_lobj1z00_1188);
																					}
																					if (BgL_test1775z00_2148)
																						{	/* Ieee/equiv.scm 124 */
																							obj_t BgL_tag1z00_1191;

																							BgL_tag1z00_1191 =
																								BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																								(BgL_obj1z00_7);
																							{	/* Ieee/equiv.scm 125 */
																								obj_t BgL__z00_1192;
																								obj_t BgL_getz00_1193;
																								obj_t BgL__z00_1194;
																								obj_t BgL_cmpz00_1195;

																								{	/* Ieee/equiv.scm 126 */
																									int BgL_tmpz00_2152;

																									BgL_tmpz00_2152 =
																										(int) (((long) 1));
																									BgL__z00_1192 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_2152);
																								}
																								{	/* Ieee/equiv.scm 126 */
																									int BgL_tmpz00_2155;

																									BgL_tmpz00_2155 =
																										(int) (((long) 2));
																									BgL_getz00_1193 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_2155);
																								}
																								{	/* Ieee/equiv.scm 126 */
																									int BgL_tmpz00_2158;

																									BgL_tmpz00_2158 =
																										(int) (((long) 3));
																									BgL__z00_1194 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_2158);
																								}
																								{	/* Ieee/equiv.scm 126 */
																									int BgL_tmpz00_2161;

																									BgL_tmpz00_2161 =
																										(int) (((long) 4));
																									BgL_cmpz00_1195 =
																										BGL_MVALUES_VAL
																										(BgL_tmpz00_2161);
																								}
																								{	/* Ieee/equiv.scm 126 */
																									obj_t BgL_tag2z00_1196;

																									BgL_tag2z00_1196 =
																										BGl_homogeneouszd2vectorzd2infoz00zz__srfi4z00
																										(BgL_obj2z00_8);
																									{	/* Ieee/equiv.scm 127 */
																										obj_t BgL__z00_1197;
																										obj_t BgL__z00_1198;
																										obj_t BgL__z00_1199;
																										obj_t BgL__z00_1200;

																										{	/* Ieee/equiv.scm 128 */
																											int BgL_tmpz00_2165;

																											BgL_tmpz00_2165 =
																												(int) (((long) 1));
																											BgL__z00_1197 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_2165);
																										}
																										{	/* Ieee/equiv.scm 128 */
																											int BgL_tmpz00_2168;

																											BgL_tmpz00_2168 =
																												(int) (((long) 2));
																											BgL__z00_1198 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_2168);
																										}
																										{	/* Ieee/equiv.scm 128 */
																											int BgL_tmpz00_2171;

																											BgL_tmpz00_2171 =
																												(int) (((long) 3));
																											BgL__z00_1199 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_2171);
																										}
																										{	/* Ieee/equiv.scm 128 */
																											int BgL_tmpz00_2174;

																											BgL_tmpz00_2174 =
																												(int) (((long) 4));
																											BgL__z00_1200 =
																												BGL_MVALUES_VAL
																												(BgL_tmpz00_2174);
																										}
																										if (
																											(BgL_tag1z00_1191 ==
																												BgL_tag2z00_1196))
																											{
																												long BgL_iz00_1203;

																												BgL_iz00_1203 =
																													((long) 0);
																											BgL_zc3z04anonymousza31180ze3z87_1204:
																												{	/* Ieee/equiv.scm 130 */
																													bool_t
																														BgL__ortest_1052z00_1205;
																													BgL__ortest_1052z00_1205
																														=
																														(BgL_iz00_1203 ==
																														BgL_lobj1z00_1188);
																													if (BgL__ortest_1052z00_1205)
																														{	/* Ieee/equiv.scm 130 */
																															return
																																BgL__ortest_1052z00_1205;
																														}
																													else
																														{	/* Ieee/equiv.scm 131 */
																															obj_t
																																BgL__andtest_1053z00_1206;
																															{	/* Ieee/equiv.scm 131 */
																																obj_t
																																	BgL_arg1190z00_1208;
																																obj_t
																																	BgL_arg1194z00_1209;
																																BgL_arg1190z00_1208
																																	=
																																	PROCEDURE_ENTRY
																																	(BgL_getz00_1193)
																																	(BgL_getz00_1193,
																																	BgL_obj1z00_7,
																																	BINT
																																	(BgL_iz00_1203),
																																	BEOA);
																																BgL_arg1194z00_1209
																																	=
																																	PROCEDURE_ENTRY
																																	(BgL_getz00_1193)
																																	(BgL_getz00_1193,
																																	BgL_obj2z00_8,
																																	BINT
																																	(BgL_iz00_1203),
																																	BEOA);
																																BgL__andtest_1053z00_1206
																																	=
																																	PROCEDURE_ENTRY
																																	(BgL_cmpz00_1195)
																																	(BgL_cmpz00_1195,
																																	BgL_arg1190z00_1208,
																																	BgL_arg1194z00_1209,
																																	BEOA);
																															}
																															if (CBOOL
																																(BgL__andtest_1053z00_1206))
																																{
																																	long
																																		BgL_iz00_2200;
																																	BgL_iz00_2200
																																		=
																																		(BgL_iz00_1203
																																		+
																																		((long) 1));
																																	BgL_iz00_1203
																																		=
																																		BgL_iz00_2200;
																																	goto
																																		BgL_zc3z04anonymousza31180ze3z87_1204;
																																}
																															else
																																{	/* Ieee/equiv.scm 131 */
																																	return (
																																		(bool_t) 0);
																																}
																														}
																												}
																											}
																										else
																											{	/* Ieee/equiv.scm 128 */
																												return ((bool_t) 0);
																											}
																									}
																								}
																							}
																						}
																					else
																						{	/* Ieee/equiv.scm 123 */
																							return ((bool_t) 0);
																						}
																				}
																			else
																				{	/* Ieee/equiv.scm 122 */
																					return ((bool_t) 0);
																				}
																		}
																	else
																		{	/* Ieee/equiv.scm 120 */
																			if (REALP(BgL_obj1z00_7))
																				{	/* Ieee/equiv.scm 133 */
																					return ((bool_t) 0);
																				}
																			else
																				{	/* Ieee/equiv.scm 133 */
																					if (STRUCTP(BgL_obj1z00_7))
																						{	/* Ieee/equiv.scm 136 */
																							int BgL_lobj1z00_1214;

																							BgL_lobj1z00_1214 =
																								STRUCT_LENGTH(BgL_obj1z00_7);
																							if (STRUCTP(BgL_obj2z00_8))
																								{	/* Ieee/equiv.scm 137 */
																									if (
																										((long) (STRUCT_LENGTH
																												(BgL_obj2z00_8)) ==
																											(long)
																											(BgL_lobj1z00_1214)))
																										{
																											long BgL_iz00_1790;

																											BgL_iz00_1790 =
																												((long) 0);
																										BgL_testz00_1789:
																											{	/* Ieee/equiv.scm 140 */
																												bool_t
																													BgL__ortest_1056z00_1791;
																												BgL__ortest_1056z00_1791
																													=
																													(BgL_iz00_1790 ==
																													(long)
																													(BgL_lobj1z00_1214));
																												if (BgL__ortest_1056z00_1791)
																													{	/* Ieee/equiv.scm 140 */
																														return
																															BgL__ortest_1056z00_1791;
																													}
																												else
																													{	/* Ieee/equiv.scm 141 */
																														bool_t
																															BgL_test1784z00_2217;
																														{	/* Ieee/equiv.scm 141 */
																															obj_t
																																BgL_arg1208z00_1796;
																															obj_t
																																BgL_arg1211z00_1797;
																															BgL_arg1208z00_1796
																																=
																																STRUCT_REF((
																																	(obj_t)
																																	BgL_obj1z00_7),
																																(int)
																																(BgL_iz00_1790));
																															BgL_arg1211z00_1797
																																=
																																STRUCT_REF((
																																	(obj_t)
																																	BgL_obj2z00_8),
																																(int)
																																(BgL_iz00_1790));
																															BgL_test1784z00_2217
																																=
																																BGl_equalzf3zf3zz__r4_equivalence_6_2z00
																																(BgL_arg1208z00_1796,
																																BgL_arg1211z00_1797);
																														}
																														if (BgL_test1784z00_2217)
																															{
																																long
																																	BgL_iz00_2225;
																																BgL_iz00_2225 =
																																	(BgL_iz00_1790
																																	+ ((long) 1));
																																BgL_iz00_1790 =
																																	BgL_iz00_2225;
																																goto
																																	BgL_testz00_1789;
																															}
																														else
																															{	/* Ieee/equiv.scm 141 */
																																return ((bool_t)
																																	0);
																															}
																													}
																											}
																										}
																									else
																										{	/* Ieee/equiv.scm 138 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Ieee/equiv.scm 137 */
																									return ((bool_t) 0);
																								}
																						}
																					else
																						{	/* Ieee/equiv.scm 135 */
																							if (CELLP(BgL_obj1z00_7))
																								{	/* Ieee/equiv.scm 143 */
																									if (CELLP(BgL_obj2z00_8))
																										{
																											obj_t BgL_obj2z00_2233;
																											obj_t BgL_obj1z00_2231;

																											BgL_obj1z00_2231 =
																												CELL_REF(BgL_obj1z00_7);
																											BgL_obj2z00_2233 =
																												CELL_REF(BgL_obj2z00_8);
																											BgL_obj2z00_8 =
																												BgL_obj2z00_2233;
																											BgL_obj1z00_7 =
																												BgL_obj1z00_2231;
																											goto
																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
																										}
																									else
																										{	/* Ieee/equiv.scm 144 */
																											return ((bool_t) 0);
																										}
																								}
																							else
																								{	/* Ieee/equiv.scm 143 */
																									if (BGL_OBJECTP
																										(BgL_obj1z00_7))
																										{	/* Ieee/equiv.scm 145 */
																											if (BGL_OBJECTP
																												(BgL_obj2z00_8))
																												{	/* Ieee/equiv.scm 146 */
																													return
																														BGl_objectzd2equalzf3z21zz__objectz00
																														(((BgL_objectz00_bglt) BgL_obj1z00_7), ((BgL_objectz00_bglt) BgL_obj2z00_8));
																												}
																											else
																												{	/* Ieee/equiv.scm 146 */
																													return ((bool_t) 0);
																												}
																										}
																									else
																										{	/* Ieee/equiv.scm 145 */
																											if (UCS2_STRINGP
																												(BgL_obj1z00_7))
																												{	/* Ieee/equiv.scm 147 */
																													if (UCS2_STRINGP
																														(BgL_obj2z00_8))
																														{	/* Ieee/equiv.scm 148 */
																															return
																																ucs2_strcmp
																																(BgL_obj1z00_7,
																																BgL_obj2z00_8);
																														}
																													else
																														{	/* Ieee/equiv.scm 148 */
																															return ((bool_t)
																																0);
																														}
																												}
																											else
																												{	/* Ieee/equiv.scm 147 */
																													if (CUSTOMP
																														(BgL_obj1z00_7))
																														{	/* Ieee/equiv.scm 149 */
																															if (CUSTOMP
																																(BgL_obj2z00_8))
																																{	/* Ieee/equiv.scm 150 */
																																	bool_t
																																		BgL_res1662z00_1818;
																																	BgL_res1662z00_1818
																																		=
																																		CUSTOM_CMP((
																																			(obj_t)
																																			BgL_obj1z00_7),
																																		((obj_t)
																																			BgL_obj2z00_8));
																																	return
																																		BgL_res1662z00_1818;
																																}
																															else
																																{	/* Ieee/equiv.scm 150 */
																																	return (
																																		(bool_t) 0);
																																}
																														}
																													else
																														{	/* Ieee/equiv.scm 149 */
																															if (UCS2P
																																(BgL_obj1z00_7))
																																{	/* Ieee/equiv.scm 151 */
																																	if (UCS2P
																																		(BgL_obj2z00_8))
																																		{	/* Ieee/equiv.scm 152 */
																																			return
																																				(CUCS2
																																				(BgL_obj1z00_7)
																																				==
																																				CUCS2
																																				(BgL_obj2z00_8));
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 152 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																}
																															else
																																{	/* Ieee/equiv.scm 151 */
																																	if (BGl_numberzf3zf3zz__r4_numbers_6_5z00(BgL_obj1z00_7))
																																		{	/* Ieee/equiv.scm 153 */
																																			return (
																																				(bool_t)
																																				0);
																																		}
																																	else
																																		{	/* Ieee/equiv.scm 153 */
																																			if (BGL_DATEP(BgL_obj1z00_7))
																																				{	/* Ieee/equiv.scm 155 */
																																					if (BGL_DATEP(BgL_obj2z00_8))
																																						{	/* Ieee/equiv.scm 156 */
																																							return
																																								(bgl_date_to_seconds
																																								(BgL_obj1z00_7)
																																								==
																																								bgl_date_to_seconds
																																								(BgL_obj2z00_8));
																																						}
																																					else
																																						{	/* Ieee/equiv.scm 156 */
																																							return
																																								(
																																								(bool_t)
																																								0);
																																						}
																																				}
																																			else
																																				{	/* Ieee/equiv.scm 155 */
																																					if (FOREIGNP(BgL_obj1z00_7))
																																						{	/* Ieee/equiv.scm 157 */
																																							if (FOREIGNP(BgL_obj2z00_8))
																																								{	/* Ieee/equiv.scm 158 */
																																									return
																																										FOREIGN_EQP
																																										(BgL_obj1z00_7,
																																										BgL_obj2z00_8);
																																								}
																																							else
																																								{	/* Ieee/equiv.scm 158 */
																																									return
																																										(
																																										(bool_t)
																																										0);
																																								}
																																						}
																																					else
																																						{	/* Ieee/equiv.scm 157 */
																																							if (BGL_WEAKPTRP(BgL_obj1z00_7))
																																								{	/* Ieee/equiv.scm 159 */
																																									if (BGL_WEAKPTRP(BgL_obj2z00_8))
																																										{
																																											obj_t
																																												BgL_obj2z00_2281;
																																											obj_t
																																												BgL_obj1z00_2279;
																																											BgL_obj1z00_2279
																																												=
																																												weakptr_data
																																												(BgL_obj1z00_7);
																																											BgL_obj2z00_2281
																																												=
																																												weakptr_data
																																												(BgL_obj2z00_8);
																																											BgL_obj2z00_8
																																												=
																																												BgL_obj2z00_2281;
																																											BgL_obj1z00_7
																																												=
																																												BgL_obj1z00_2279;
																																											goto
																																												BGl_equalzf3zf3zz__r4_equivalence_6_2z00;
																																										}
																																									else
																																										{	/* Ieee/equiv.scm 160 */
																																											return
																																												(
																																												(bool_t)
																																												0);
																																										}
																																								}
																																							else
																																								{	/* Ieee/equiv.scm 159 */
																																									return
																																										(
																																										(bool_t)
																																										0);
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
		}

	}



/* &equal? */
	obj_t BGl_z62equalzf3z91zz__r4_equivalence_6_2z00(obj_t BgL_envz00_1980,
		obj_t BgL_obj1z00_1981, obj_t BgL_obj2z00_1982)
	{
		{	/* Ieee/equiv.scm 94 */
			return
				BBOOL(BGl_equalzf3zf3zz__r4_equivalence_6_2z00(BgL_obj1z00_1981,
					BgL_obj2z00_1982));
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__r4_equivalence_6_2z00()
	{
		{	/* Ieee/equiv.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__r4_equivalence_6_2z00()
	{
		{	/* Ieee/equiv.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__r4_equivalence_6_2z00()
	{
		{	/* Ieee/equiv.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__r4_equivalence_6_2z00()
	{
		{	/* Ieee/equiv.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1716z00zz__r4_equivalence_6_2z00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1716z00zz__r4_equivalence_6_2z00));
		}

	}

#ifdef __cplusplus
}
#endif
