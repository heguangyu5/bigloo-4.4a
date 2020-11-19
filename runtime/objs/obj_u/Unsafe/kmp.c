/*===========================================================================*/
/*   (Unsafe/kmp.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/kmp.scm -indent -o objs/obj_u/Unsafe/kmp.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static obj_t BGl_z62kmpzd2mmapzb0zz__kmpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_symbol1767z00zz__kmpz00 = BUNSPEC;
	static obj_t BGl_symbol1769z00zz__kmpz00 = BUNSPEC;
	static obj_t BGl_requirezd2initializa7ationz75zz__kmpz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_z62kmpzd2tablezb0zz__kmpz00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__kmpz00();
	static obj_t BGl_objectzd2initzd2zz__kmpz00();
	BGL_EXPORTED_DECL obj_t BGl_kmpzd2tablezd2zz__kmpz00(obj_t);
	BGL_EXPORTED_DECL long BGl_kmpzd2stringzd2zz__kmpz00(obj_t, obj_t, long);
	extern obj_t bstring_to_symbol(obj_t);
	BGL_EXPORTED_DECL long BGl_kmpzd2mmapzd2zz__kmpz00(obj_t, obj_t, long);
	extern obj_t make_vector(long, obj_t);
	static obj_t BGl_z62kmpzd2stringzb0zz__kmpz00(obj_t, obj_t, obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__kmpz00();
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__kmpz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zz__kmpz00();
	static obj_t BGl_gczd2rootszd2initz00zz__kmpz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__kmpz00();
	extern obj_t BGl_bigloozd2typezd2errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2mmapzd2envz00zz__kmpz00,
		BgL_bgl_za762kmpza7d2mmapza7b01779za7, BGl_z62kmpzd2mmapzb0zz__kmpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_STRING(BGl_string1762z00zz__kmpz00,
		BgL_bgl_string1762za700za7za7_1780za7, "/tmp/4.4a/runtime/Unsafe/kmp.scm",
		32);
	      DEFINE_STRING(BGl_string1763z00zz__kmpz00,
		BgL_bgl_string1763za700za7za7_1781za7, "&kmp-table", 10);
	      DEFINE_STRING(BGl_string1764z00zz__kmpz00,
		BgL_bgl_string1764za700za7za7_1782za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1765z00zz__kmpz00,
		BgL_bgl_string1765za700za7za7_1783za7, "kmp-mmap", 8);
	      DEFINE_STRING(BGl_string1766z00zz__kmpz00,
		BgL_bgl_string1766za700za7za7_1784za7, "Illegal kmp-table", 17);
	      DEFINE_STRING(BGl_string1768z00zz__kmpz00,
		BgL_bgl_string1768za700za7za7_1785za7, "string", 6);
	      DEFINE_STRING(BGl_string1770z00zz__kmpz00,
		BgL_bgl_string1770za700za7za7_1786za7, "vector", 6);
	      DEFINE_STRING(BGl_string1771z00zz__kmpz00,
		BgL_bgl_string1771za700za7za7_1787za7, "&kmp-mmap", 9);
	      DEFINE_STRING(BGl_string1772z00zz__kmpz00,
		BgL_bgl_string1772za700za7za7_1788za7, "pair", 4);
	      DEFINE_STRING(BGl_string1773z00zz__kmpz00,
		BgL_bgl_string1773za700za7za7_1789za7, "mmap", 4);
	      DEFINE_STRING(BGl_string1774z00zz__kmpz00,
		BgL_bgl_string1774za700za7za7_1790za7, "belong", 6);
	      DEFINE_STRING(BGl_string1775z00zz__kmpz00,
		BgL_bgl_string1775za700za7za7_1791za7, "kmp-string", 10);
	      DEFINE_STRING(BGl_string1776z00zz__kmpz00,
		BgL_bgl_string1776za700za7za7_1792za7, "&kmp-string", 11);
	      DEFINE_STRING(BGl_string1777z00zz__kmpz00,
		BgL_bgl_string1777za700za7za7_1793za7, "bint", 4);
	      DEFINE_STRING(BGl_string1778z00zz__kmpz00,
		BgL_bgl_string1778za700za7za7_1794za7, "__kmp", 5);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2stringzd2envz00zz__kmpz00,
		BgL_bgl_za762kmpza7d2stringza71795za7, BGl_z62kmpzd2stringzb0zz__kmpz00, 0L,
		BUNSPEC, 3);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_kmpzd2tablezd2envz00zz__kmpz00,
		BgL_bgl_za762kmpza7d2tableza7b1796za7, BGl_z62kmpzd2tablezb0zz__kmpz00, 0L,
		BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_symbol1767z00zz__kmpz00));
		     ADD_ROOT((void *) (&BGl_symbol1769z00zz__kmpz00));
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__kmpz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__kmpz00(long
		BgL_checksumz00_2025, char *BgL_fromz00_2026)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__kmpz00))
				{
					BGl_requirezd2initializa7ationz75zz__kmpz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__kmpz00();
					BGl_cnstzd2initzd2zz__kmpz00();
					BGl_importedzd2moduleszd2initz00zz__kmpz00();
					return BGl_methodzd2initzd2zz__kmpz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			BGl_symbol1767z00zz__kmpz00 =
				bstring_to_symbol(BGl_string1768z00zz__kmpz00);
			return (BGl_symbol1769z00zz__kmpz00 =
				bstring_to_symbol(BGl_string1770z00zz__kmpz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			return bgl_gc_roots_register();
		}

	}



/* kmp-table */
	BGL_EXPORTED_DEF obj_t BGl_kmpzd2tablezd2zz__kmpz00(obj_t BgL_pz00_3)
	{
		{	/* Unsafe/kmp.scm 52 */
			{	/* Unsafe/kmp.scm 53 */
				long BgL_lpz00_1074;

				BgL_lpz00_1074 = STRING_LENGTH(BgL_pz00_3);
				{	/* Unsafe/kmp.scm 53 */
					obj_t BgL_tz00_1075;

					BgL_tz00_1075 =
						make_vector((BgL_lpz00_1074 + ((long) 2)), BINT(((long) 0)));
					{	/* Unsafe/kmp.scm 54 */
						long BgL_iz00_1076;

						BgL_iz00_1076 = ((long) 0);
						{	/* Unsafe/kmp.scm 55 */
							obj_t BgL_jz00_1077;

							BgL_jz00_1077 = BINT(((long) -1));
							{	/* Unsafe/kmp.scm 56 */
								unsigned char BgL_cz00_1078;

								BgL_cz00_1078 = ((unsigned char) '\000');
								{	/* Unsafe/kmp.scm 57 */

									VECTOR_SET(BgL_tz00_1075, ((long) 0), BgL_jz00_1077);
									{

									BgL_zc3z04anonymousza31167ze3z87_1080:
										if ((BgL_iz00_1076 < BgL_lpz00_1074))
											{	/* Unsafe/kmp.scm 60 */
												{	/* Unsafe/kmp.scm 62 */
													bool_t BgL_test1799z00_2045;

													{	/* Unsafe/kmp.scm 62 */
														unsigned char BgL_char2z00_1604;

														BgL_char2z00_1604 = BgL_cz00_1078;
														BgL_test1799z00_2045 =
															(STRING_REF(BgL_pz00_3,
																BgL_iz00_1076) == BgL_char2z00_1604);
													}
													if (BgL_test1799z00_2045)
														{	/* Unsafe/kmp.scm 62 */
															{	/* Unsafe/kmp.scm 63 */
																long BgL_arg1172z00_1084;
																long BgL_arg1174z00_1085;

																BgL_arg1172z00_1084 =
																	(BgL_iz00_1076 + ((long) 1));
																BgL_arg1174z00_1085 =
																	((long) CINT(BgL_jz00_1077) + ((long) 1));
																VECTOR_SET(BgL_tz00_1075, BgL_arg1172z00_1084,
																	BINT(BgL_arg1174z00_1085));
															}
															BgL_jz00_1077 =
																ADDFX(BgL_jz00_1077, BINT(((long) 1)));
															BgL_iz00_1076 = (BgL_iz00_1076 + ((long) 1));
														}
													else
														{	/* Unsafe/kmp.scm 62 */
															if (((long) CINT(BgL_jz00_1077) > ((long) 0)))
																{	/* Unsafe/kmp.scm 66 */
																	BgL_jz00_1077 =
																		VECTOR_REF(BgL_tz00_1075,
																		(long) CINT(BgL_jz00_1077));
																}
															else
																{	/* Unsafe/kmp.scm 66 */
																	VECTOR_SET(BgL_tz00_1075,
																		(BgL_iz00_1076 + ((long) 1)),
																		BINT(((long) 0)));
																	BgL_iz00_1076 = (BgL_iz00_1076 + ((long) 1));
																	BgL_jz00_1077 = BINT(((long) 0));
												}}}
												BgL_cz00_1078 =
													STRING_REF(BgL_pz00_3, (long) CINT(BgL_jz00_1077));
												goto BgL_zc3z04anonymousza31167ze3z87_1080;
											}
										else
											{	/* Unsafe/kmp.scm 60 */
												((bool_t) 0);
											}
									}
									return MAKE_YOUNG_PAIR(BgL_tz00_1075, BgL_pz00_3);
								}
							}
						}
					}
				}
			}
		}

	}



/* &kmp-table */
	obj_t BGl_z62kmpzd2tablezb0zz__kmpz00(obj_t BgL_envz00_2001,
		obj_t BgL_pz00_2002)
	{
		{	/* Unsafe/kmp.scm 52 */
			{	/* Unsafe/kmp.scm 53 */
				obj_t BgL_auxz00_2069;

				if (STRINGP(BgL_pz00_2002))
					{	/* Unsafe/kmp.scm 53 */
						BgL_auxz00_2069 = BgL_pz00_2002;
					}
				else
					{
						obj_t BgL_auxz00_2072;

						BgL_auxz00_2072 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
							BINT(((long) 1837)), BGl_string1763z00zz__kmpz00,
							BGl_string1764z00zz__kmpz00, BgL_pz00_2002);
						FAILURE(BgL_auxz00_2072, BFALSE, BFALSE);
					}
				return BGl_kmpzd2tablezd2zz__kmpz00(BgL_auxz00_2069);
			}
		}

	}



/* kmp-mmap */
	BGL_EXPORTED_DEF long BGl_kmpzd2mmapzd2zz__kmpz00(obj_t BgL_tpz00_4,
		obj_t BgL_mmz00_5, long BgL_mz00_6)
	{
		{	/* Unsafe/kmp.scm 79 */
			{	/* Unsafe/kmp.scm 81 */
				bool_t BgL_test1802z00_2077;

				{	/* Unsafe/kmp.scm 81 */
					obj_t BgL_tmpz00_2078;

					BgL_tmpz00_2078 = CAR(BgL_tpz00_4);
					BgL_test1802z00_2077 = VECTORP(BgL_tmpz00_2078);
				}
				if (BgL_test1802z00_2077)
					{	/* Unsafe/kmp.scm 83 */
						bool_t BgL_test1803z00_2081;

						{	/* Unsafe/kmp.scm 83 */
							obj_t BgL_tmpz00_2082;

							BgL_tmpz00_2082 = CDR(BgL_tpz00_4);
							BgL_test1803z00_2081 = STRINGP(BgL_tmpz00_2082);
						}
						if (BgL_test1803z00_2081)
							{	/* Unsafe/kmp.scm 85 */
								bool_t BgL_test1804z00_2085;

								{	/* Unsafe/kmp.scm 85 */
									long BgL_arg1247z00_1127;
									long BgL_arg1250z00_1128;

									{	/* Unsafe/kmp.scm 85 */
										obj_t BgL_arg1252z00_1129;

										BgL_arg1252z00_1129 = CAR(BgL_tpz00_4);
										BgL_arg1247z00_1127 =
											VECTOR_LENGTH(((obj_t) BgL_arg1252z00_1129));
									}
									BgL_arg1250z00_1128 =
										(((long) 2) + STRING_LENGTH(CDR(BgL_tpz00_4)));
									BgL_test1804z00_2085 =
										(BgL_arg1247z00_1127 == BgL_arg1250z00_1128);
								}
								if (BgL_test1804z00_2085)
									{	/* Unsafe/kmp.scm 88 */
										obj_t BgL_tz00_1101;

										BgL_tz00_1101 = CAR(BgL_tpz00_4);
										{	/* Unsafe/kmp.scm 88 */
											obj_t BgL_pz00_1102;

											BgL_pz00_1102 = CDR(BgL_tpz00_4);
											{	/* Unsafe/kmp.scm 89 */
												long BgL_lsz00_1103;

												{	/* Unsafe/kmp.scm 90 */
													long BgL_res1660z00_1646;

													BgL_res1660z00_1646 = BGL_MMAP_LENGTH(BgL_mmz00_5);
													BgL_lsz00_1103 = BgL_res1660z00_1646;
												}
												{	/* Unsafe/kmp.scm 90 */
													long BgL_lpz00_1104;

													{	/* Unsafe/kmp.scm 91 */
														long BgL_arg1246z00_1126;

														BgL_arg1246z00_1126 =
															STRING_LENGTH(((obj_t) BgL_pz00_1102));
														{	/* Unsafe/kmp.scm 91 */
															long BgL_res1662z00_1650;

															BgL_res1662z00_1650 =
																(long) (BgL_arg1246z00_1126);
															BgL_lpz00_1104 = BgL_res1662z00_1650;
													}}
													{	/* Unsafe/kmp.scm 91 */

														{
															long BgL_iz00_1106;

															BgL_iz00_1106 = ((long) 0);
														BgL_zc3z04anonymousza31210ze3z87_1107:
															if ((BgL_iz00_1106 == BgL_lpz00_1104))
																{	/* Unsafe/kmp.scm 94 */
																	return BgL_mz00_6;
																}
															else
																{	/* Unsafe/kmp.scm 94 */
																	if (
																		((BgL_iz00_1106 + BgL_mz00_6) >=
																			BgL_lsz00_1103))
																		{	/* Unsafe/kmp.scm 96 */
																			return ((long) -1);
																		}
																	else
																		{	/* Unsafe/kmp.scm 99 */
																			long BgL_fiz00_1111;

																			{	/* Unsafe/kmp.scm 99 */
																				long BgL_res1666z00_1661;

																				BgL_res1666z00_1661 =
																					(long) (BgL_iz00_1106);
																				BgL_fiz00_1111 = BgL_res1666z00_1661;
																			}
																			{	/* Unsafe/kmp.scm 100 */
																				bool_t BgL_test1807z00_2105;

																				{	/* Unsafe/kmp.scm 100 */
																					unsigned char BgL_arg1239z00_1121;
																					unsigned char BgL_arg1242z00_1122;

																					{	/* Unsafe/kmp.scm 100 */
																						long BgL_arg1243z00_1123;

																						BgL_arg1243z00_1123 =
																							(BgL_iz00_1106 + BgL_mz00_6);
																						{	/* Unsafe/kmp.scm 100 */
																							unsigned char BgL_res1670z00_1675;

																							{	/* Unsafe/kmp.scm 100 */
																								unsigned char BgL_cz00_1667;

																								BgL_cz00_1667 =
																									BGL_MMAP_REF(BgL_mmz00_5,
																									BgL_arg1243z00_1123);
																								{	/* Unsafe/kmp.scm 100 */
																									long BgL_arg1639z00_1668;

																									BgL_arg1639z00_1668 =
																										(BgL_arg1243z00_1123 +
																										((long) 1));
																									{	/* Unsafe/kmp.scm 100 */
																										long BgL_res1669z00_1674;

																										BGL_MMAP_RP_SET(BgL_mmz00_5,
																											BgL_arg1639z00_1668);
																										BUNSPEC;
																										BgL_res1669z00_1674 =
																											BgL_arg1639z00_1668;
																										BgL_res1669z00_1674;
																								}}
																								BgL_res1670z00_1675 =
																									BgL_cz00_1667;
																							}
																							BgL_arg1239z00_1121 =
																								BgL_res1670z00_1675;
																					}}
																					BgL_arg1242z00_1122 =
																						STRING_REF(
																						((obj_t) BgL_pz00_1102),
																						BgL_fiz00_1111);
																					BgL_test1807z00_2105 =
																						(BgL_arg1239z00_1121 ==
																						BgL_arg1242z00_1122);
																				}
																				if (BgL_test1807z00_2105)
																					{
																						long BgL_iz00_2113;

																						BgL_iz00_2113 =
																							(BgL_iz00_1106 + ((long) 1));
																						BgL_iz00_1106 = BgL_iz00_2113;
																						goto
																							BgL_zc3z04anonymousza31210ze3z87_1107;
																					}
																				else
																					{	/* Unsafe/kmp.scm 102 */
																						long BgL_tiz00_1117;

																						{	/* Unsafe/kmp.scm 102 */
																							obj_t BgL_arg1232z00_1120;

																							BgL_arg1232z00_1120 =
																								VECTOR_REF(
																								((obj_t) BgL_tz00_1101),
																								BgL_fiz00_1111);
																							{	/* Unsafe/kmp.scm 102 */
																								long BgL_res1674z00_1688;

																								{	/* Unsafe/kmp.scm 102 */
																									long BgL_tmpz00_2117;

																									BgL_tmpz00_2117 =
																										(long)
																										CINT(BgL_arg1232z00_1120);
																									BgL_res1674z00_1688 =
																										(long) (BgL_tmpz00_2117);
																								}
																								BgL_tiz00_1117 =
																									BgL_res1674z00_1688;
																						}}
																						{	/* Unsafe/kmp.scm 103 */
																							long BgL_za71za7_1692;

																							BgL_za71za7_1692 = BgL_mz00_6;
																							{	/* Unsafe/kmp.scm 103 */
																								long BgL_tmpz00_2120;

																								{	/* Unsafe/kmp.scm 103 */
																									long BgL_res1675z00_1691;

																									{	/* Unsafe/kmp.scm 103 */
																										long BgL_tmpz00_2121;

																										BgL_tmpz00_2121 =
																											(BgL_iz00_1106 -
																											BgL_tiz00_1117);
																										BgL_res1675z00_1691 =
																											(long) (BgL_tmpz00_2121);
																									}
																									BgL_tmpz00_2120 =
																										BgL_res1675z00_1691;
																								}
																								BgL_mz00_6 =
																									(BgL_za71za7_1692 +
																									BgL_tmpz00_2120);
																						}}
																						if ((BgL_iz00_1106 > ((long) 0)))
																							{
																								long BgL_iz00_2127;

																								BgL_iz00_2127 = BgL_tiz00_1117;
																								BgL_iz00_1106 = BgL_iz00_2127;
																								goto
																									BgL_zc3z04anonymousza31210ze3z87_1107;
																							}
																						else
																							{

																								goto
																									BgL_zc3z04anonymousza31210ze3z87_1107;
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
								else
									{	/* Unsafe/kmp.scm 86 */
										obj_t BgL_tmpz00_2128;

										BgL_tmpz00_2128 =
											BGl_errorz00zz__errorz00(BGl_string1765z00zz__kmpz00,
											BGl_string1766z00zz__kmpz00, BgL_tpz00_4);
										return BELONG_TO_LONG(BgL_tmpz00_2128);
									}
							}
						else
							{	/* Unsafe/kmp.scm 84 */
								obj_t BgL_arg1256z00_1132;

								BgL_arg1256z00_1132 = CDR(BgL_tpz00_4);
								{	/* Unsafe/kmp.scm 84 */
									obj_t BgL_tmpz00_2132;

									BgL_tmpz00_2132 =
										BGl_bigloozd2typezd2errorz00zz__errorz00
										(BGl_string1765z00zz__kmpz00, BGl_symbol1767z00zz__kmpz00,
										BgL_arg1256z00_1132);
									return BELONG_TO_LONG(BgL_tmpz00_2132);
								}
							}
					}
				else
					{	/* Unsafe/kmp.scm 82 */
						obj_t BgL_arg1263z00_1134;

						BgL_arg1263z00_1134 = CAR(BgL_tpz00_4);
						{	/* Unsafe/kmp.scm 82 */
							obj_t BgL_tmpz00_2136;

							BgL_tmpz00_2136 =
								BGl_bigloozd2typezd2errorz00zz__errorz00
								(BGl_string1765z00zz__kmpz00, BGl_symbol1769z00zz__kmpz00,
								BgL_arg1263z00_1134);
							return BELONG_TO_LONG(BgL_tmpz00_2136);
						}
					}
			}
		}

	}



/* &kmp-mmap */
	obj_t BGl_z62kmpzd2mmapzb0zz__kmpz00(obj_t BgL_envz00_2003,
		obj_t BgL_tpz00_2004, obj_t BgL_mmz00_2005, obj_t BgL_mz00_2006)
	{
		{	/* Unsafe/kmp.scm 79 */
			{	/* Unsafe/kmp.scm 81 */
				long BgL_tmpz00_2139;

				{	/* Unsafe/kmp.scm 81 */
					long BgL_auxz00_2154;
					obj_t BgL_auxz00_2147;
					obj_t BgL_auxz00_2140;

					{	/* Unsafe/kmp.scm 81 */
						obj_t BgL_tmpz00_2155;

						if (ELONGP(BgL_mz00_2006))
							{	/* Unsafe/kmp.scm 81 */
								BgL_tmpz00_2155 = BgL_mz00_2006;
							}
						else
							{
								obj_t BgL_auxz00_2158;

								BgL_auxz00_2158 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
									BINT(((long) 2586)), BGl_string1771z00zz__kmpz00,
									BGl_string1774z00zz__kmpz00, BgL_mz00_2006);
								FAILURE(BgL_auxz00_2158, BFALSE, BFALSE);
							}
						BgL_auxz00_2154 = BELONG_TO_LONG(BgL_tmpz00_2155);
					}
					if (BGL_MMAPP(BgL_mmz00_2005))
						{	/* Unsafe/kmp.scm 81 */
							BgL_auxz00_2147 = BgL_mmz00_2005;
						}
					else
						{
							obj_t BgL_auxz00_2150;

							BgL_auxz00_2150 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
								BINT(((long) 2586)), BGl_string1771z00zz__kmpz00,
								BGl_string1773z00zz__kmpz00, BgL_mmz00_2005);
							FAILURE(BgL_auxz00_2150, BFALSE, BFALSE);
						}
					if (PAIRP(BgL_tpz00_2004))
						{	/* Unsafe/kmp.scm 81 */
							BgL_auxz00_2140 = BgL_tpz00_2004;
						}
					else
						{
							obj_t BgL_auxz00_2143;

							BgL_auxz00_2143 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
								BINT(((long) 2586)), BGl_string1771z00zz__kmpz00,
								BGl_string1772z00zz__kmpz00, BgL_tpz00_2004);
							FAILURE(BgL_auxz00_2143, BFALSE, BFALSE);
						}
					BgL_tmpz00_2139 =
						BGl_kmpzd2mmapzd2zz__kmpz00(BgL_auxz00_2140, BgL_auxz00_2147,
						BgL_auxz00_2154);
				}
				return make_belong(BgL_tmpz00_2139);
			}
		}

	}



/* kmp-string */
	BGL_EXPORTED_DEF long BGl_kmpzd2stringzd2zz__kmpz00(obj_t BgL_tpz00_7,
		obj_t BgL_strz00_8, long BgL_mz00_9)
	{
		{	/* Unsafe/kmp.scm 111 */
			{	/* Unsafe/kmp.scm 113 */
				bool_t BgL_test1812z00_2165;

				{	/* Unsafe/kmp.scm 113 */
					obj_t BgL_tmpz00_2166;

					BgL_tmpz00_2166 = CAR(BgL_tpz00_7);
					BgL_test1812z00_2165 = VECTORP(BgL_tmpz00_2166);
				}
				if (BgL_test1812z00_2165)
					{	/* Unsafe/kmp.scm 115 */
						bool_t BgL_test1813z00_2169;

						{	/* Unsafe/kmp.scm 115 */
							obj_t BgL_tmpz00_2170;

							BgL_tmpz00_2170 = CDR(BgL_tpz00_7);
							BgL_test1813z00_2169 = STRINGP(BgL_tmpz00_2170);
						}
						if (BgL_test1813z00_2169)
							{	/* Unsafe/kmp.scm 117 */
								bool_t BgL_test1814z00_2173;

								{	/* Unsafe/kmp.scm 117 */
									long BgL_arg1299z00_1169;
									long BgL_arg1300z00_1170;

									{	/* Unsafe/kmp.scm 117 */
										obj_t BgL_arg1301z00_1171;

										BgL_arg1301z00_1171 = CAR(BgL_tpz00_7);
										BgL_arg1299z00_1169 =
											VECTOR_LENGTH(((obj_t) BgL_arg1301z00_1171));
									}
									BgL_arg1300z00_1170 =
										(((long) 2) + STRING_LENGTH(CDR(BgL_tpz00_7)));
									BgL_test1814z00_2173 =
										(BgL_arg1299z00_1169 == BgL_arg1300z00_1170);
								}
								if (BgL_test1814z00_2173)
									{	/* Unsafe/kmp.scm 120 */
										obj_t BgL_tz00_1146;

										BgL_tz00_1146 = CAR(BgL_tpz00_7);
										{	/* Unsafe/kmp.scm 120 */
											obj_t BgL_pz00_1147;

											BgL_pz00_1147 = CDR(BgL_tpz00_7);
											{	/* Unsafe/kmp.scm 121 */
												long BgL_lsz00_1148;

												BgL_lsz00_1148 = STRING_LENGTH(BgL_strz00_8);
												{	/* Unsafe/kmp.scm 122 */
													long BgL_lpz00_1149;

													BgL_lpz00_1149 =
														STRING_LENGTH(((obj_t) BgL_pz00_1147));
													{	/* Unsafe/kmp.scm 123 */

														{
															obj_t BgL_iz00_1151;

															BgL_iz00_1151 = BINT(((long) 0));
														BgL_zc3z04anonymousza31283ze3z87_1152:
															if (
																((long) CINT(BgL_iz00_1151) == BgL_lpz00_1149))
																{	/* Unsafe/kmp.scm 126 */
																	return BgL_mz00_9;
																}
															else
																{	/* Unsafe/kmp.scm 126 */
																	if (
																		(((long) CINT(BgL_iz00_1151) +
																				BgL_mz00_9) >= BgL_lsz00_1148))
																		{	/* Unsafe/kmp.scm 128 */
																			return ((long) -1);
																		}
																	else
																		{	/* Unsafe/kmp.scm 131 */
																			bool_t BgL_test1817z00_2193;

																			{	/* Unsafe/kmp.scm 131 */
																				unsigned char BgL_arg1295z00_1164;

																				BgL_arg1295z00_1164 =
																					STRING_REF(BgL_strz00_8,
																					((long) CINT(BgL_iz00_1151) +
																						BgL_mz00_9));
																				BgL_test1817z00_2193 =
																					(BgL_arg1295z00_1164 ==
																					STRING_REF(((obj_t) BgL_pz00_1147),
																						(long) CINT(BgL_iz00_1151)));
																			}
																			if (BgL_test1817z00_2193)
																				{	/* Unsafe/kmp.scm 132 */
																					long BgL_arg1291z00_1160;

																					BgL_arg1291z00_1160 =
																						(
																						(long) CINT(BgL_iz00_1151) +
																						((long) 1));
																					{
																						obj_t BgL_iz00_2203;

																						BgL_iz00_2203 =
																							BINT(BgL_arg1291z00_1160);
																						BgL_iz00_1151 = BgL_iz00_2203;
																						goto
																							BgL_zc3z04anonymousza31283ze3z87_1152;
																					}
																				}
																			else
																				{	/* Unsafe/kmp.scm 133 */
																					obj_t BgL_tiz00_1161;

																					{	/* Unsafe/kmp.scm 133 */
																						long BgL_kz00_1744;

																						BgL_kz00_1744 =
																							(long) CINT(BgL_iz00_1151);
																						BgL_tiz00_1161 =
																							VECTOR_REF(
																							((obj_t) BgL_tz00_1146),
																							BgL_kz00_1744);
																					}
																					BgL_mz00_9 =
																						(BgL_mz00_9 +
																						((long) CINT(BgL_iz00_1151) -
																							(long) CINT(BgL_tiz00_1161)));
																					if (
																						((long) CINT(BgL_iz00_1151) >
																							((long) 0)))
																						{
																							obj_t BgL_iz00_2215;

																							BgL_iz00_2215 = BgL_tiz00_1161;
																							BgL_iz00_1151 = BgL_iz00_2215;
																							goto
																								BgL_zc3z04anonymousza31283ze3z87_1152;
																						}
																					else
																						{

																							goto
																								BgL_zc3z04anonymousza31283ze3z87_1152;
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
								else
									{	/* Unsafe/kmp.scm 117 */
										return
											(long)
											CINT(BGl_errorz00zz__errorz00(BGl_string1775z00zz__kmpz00,
												BGl_string1766z00zz__kmpz00, BgL_tpz00_7));
							}}
						else
							{	/* Unsafe/kmp.scm 116 */
								obj_t BgL_arg1304z00_1174;

								BgL_arg1304z00_1174 = CDR(BgL_tpz00_7);
								return
									(long)
									CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
									(BGl_string1775z00zz__kmpz00, BGl_symbol1767z00zz__kmpz00,
										BgL_arg1304z00_1174));
					}}
				else
					{	/* Unsafe/kmp.scm 114 */
						obj_t BgL_arg1307z00_1176;

						BgL_arg1307z00_1176 = CAR(BgL_tpz00_7);
						return
							(long)
							CINT(BGl_bigloozd2typezd2errorz00zz__errorz00
							(BGl_string1775z00zz__kmpz00, BGl_symbol1769z00zz__kmpz00,
								BgL_arg1307z00_1176));
		}}}

	}



/* &kmp-string */
	obj_t BGl_z62kmpzd2stringzb0zz__kmpz00(obj_t BgL_envz00_2007,
		obj_t BgL_tpz00_2008, obj_t BgL_strz00_2009, obj_t BgL_mz00_2010)
	{
		{	/* Unsafe/kmp.scm 111 */
			{	/* Unsafe/kmp.scm 113 */
				long BgL_tmpz00_2225;

				{	/* Unsafe/kmp.scm 113 */
					long BgL_auxz00_2240;
					obj_t BgL_auxz00_2233;
					obj_t BgL_auxz00_2226;

					{	/* Unsafe/kmp.scm 113 */
						obj_t BgL_tmpz00_2241;

						if (INTEGERP(BgL_mz00_2010))
							{	/* Unsafe/kmp.scm 113 */
								BgL_tmpz00_2241 = BgL_mz00_2010;
							}
						else
							{
								obj_t BgL_auxz00_2244;

								BgL_auxz00_2244 =
									BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
									BINT(((long) 3680)), BGl_string1776z00zz__kmpz00,
									BGl_string1777z00zz__kmpz00, BgL_mz00_2010);
								FAILURE(BgL_auxz00_2244, BFALSE, BFALSE);
							}
						BgL_auxz00_2240 = (long) CINT(BgL_tmpz00_2241);
					}
					if (STRINGP(BgL_strz00_2009))
						{	/* Unsafe/kmp.scm 113 */
							BgL_auxz00_2233 = BgL_strz00_2009;
						}
					else
						{
							obj_t BgL_auxz00_2236;

							BgL_auxz00_2236 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
								BINT(((long) 3680)), BGl_string1776z00zz__kmpz00,
								BGl_string1764z00zz__kmpz00, BgL_strz00_2009);
							FAILURE(BgL_auxz00_2236, BFALSE, BFALSE);
						}
					if (PAIRP(BgL_tpz00_2008))
						{	/* Unsafe/kmp.scm 113 */
							BgL_auxz00_2226 = BgL_tpz00_2008;
						}
					else
						{
							obj_t BgL_auxz00_2229;

							BgL_auxz00_2229 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1762z00zz__kmpz00,
								BINT(((long) 3680)), BGl_string1776z00zz__kmpz00,
								BGl_string1772z00zz__kmpz00, BgL_tpz00_2008);
							FAILURE(BgL_auxz00_2229, BFALSE, BFALSE);
						}
					BgL_tmpz00_2225 =
						BGl_kmpzd2stringzd2zz__kmpz00(BgL_auxz00_2226, BgL_auxz00_2233,
						BgL_auxz00_2240);
				}
				return BINT(BgL_tmpz00_2225);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__kmpz00()
	{
		{	/* Unsafe/kmp.scm 15 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1778z00zz__kmpz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1778z00zz__kmpz00));
		}

	}

#ifdef __cplusplus
}
#endif
