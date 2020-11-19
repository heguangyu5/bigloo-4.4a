/*===========================================================================*/
/*   (Eval/progn.scm)                                                        */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Eval/progn.scm -indent -o objs/obj_u/Eval/progn.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__prognz00 = BUNSPEC;
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__prognz00();
	static obj_t BGl_objectzd2initzd2zz__prognz00();
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_appendzd221011zd2zz__prognz00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__prognz00();
	BGL_EXPORTED_DECL obj_t BGl_evepairifyza2za2zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evepairifyzd2deepzd2zz__prognz00(obj_t, obj_t);
	static obj_t BGl_z62evepairifyzd2deepzb0zz__prognz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62expandzd2prognzb0zz__prognz00(obj_t, obj_t);
	static obj_t BGl_flattenzd2sequenceze70z35zz__prognz00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	extern bool_t BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00(obj_t);
	static obj_t BGl_makezd2epairzd2zz__prognz00(obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_evepairifyz00zz__prognz00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(long,
		char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(long, char *);
	extern obj_t
		BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__threadz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__objectz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__expandz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bignumz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__bexitz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__structurez00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__tvectorz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__biglooz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	static obj_t BGl_z62evepairifyz62zz__prognz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62evepairifyza2zc0zz__prognz00(obj_t, obj_t, obj_t);
	static obj_t BGl_cnstzd2initzd2zz__prognz00();
	static obj_t BGl_gczd2rootszd2initz00zz__prognz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__prognz00();
	static obj_t BGl_loopze70ze7zz__prognz00(obj_t, obj_t);
	static obj_t BGl_loopze71ze7zz__prognz00(obj_t, obj_t);
	static obj_t BGl_symbol1723z00zz__prognz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_evepairifyzd2envzd2zz__prognz00,
		BgL_bgl_za762evepairifyza7621730z00, BGl_z62evepairifyz62zz__prognz00, 0L,
		BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evepairifyza2zd2envz70zz__prognz00,
		BgL_bgl_za762evepairifyza7a21731z00, BGl_z62evepairifyza2zc0zz__prognz00,
		0L, BUNSPEC, 2);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_evepairifyzd2deepzd2envz00zz__prognz00,
		BgL_bgl_za762evepairifyza7d21732z00,
		BGl_z62evepairifyzd2deepzb0zz__prognz00, 0L, BUNSPEC, 2);
	      DEFINE_STRING(BGl_string1724z00zz__prognz00,
		BgL_bgl_string1724za700za7za7_1733za7, "begin", 5);
	      DEFINE_STRING(BGl_string1725z00zz__prognz00,
		BgL_bgl_string1725za700za7za7_1734za7, "Illegal form", 12);
	      DEFINE_STRING(BGl_string1726z00zz__prognz00,
		BgL_bgl_string1726za700za7za7_1735za7, "/tmp/4.4a/runtime/Eval/progn.scm",
		32);
	      DEFINE_STRING(BGl_string1727z00zz__prognz00,
		BgL_bgl_string1727za700za7za7_1736za7, "&expand-progn", 13);
	      DEFINE_STRING(BGl_string1728z00zz__prognz00,
		BgL_bgl_string1728za700za7za7_1737za7, "pair-nil", 8);
	      DEFINE_STRING(BGl_string1729z00zz__prognz00,
		BgL_bgl_string1729za700za7za7_1738za7, "__progn", 7);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_expandzd2prognzd2envz00zz__prognz00,
		BgL_bgl_za762expandza7d2prog1739z00, BGl_z62expandzd2prognzb0zz__prognz00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__prognz00));
		     ADD_ROOT((void *) (&BGl_symbol1723z00zz__prognz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__prognz00(long
		BgL_checksumz00_1946, char *BgL_fromz00_1947)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__prognz00))
				{
					BGl_requirezd2initializa7ationz75zz__prognz00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__prognz00();
					BGl_cnstzd2initzd2zz__prognz00();
					BGl_importedzd2moduleszd2initz00zz__prognz00();
					return BGl_methodzd2initzd2zz__prognz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			return (BGl_symbol1723z00zz__prognz00 =
				bstring_to_symbol(BGl_string1724z00zz__prognz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			return bgl_gc_roots_register();
		}

	}



/* append-21011 */
	obj_t BGl_appendzd221011zd2zz__prognz00(obj_t BgL_l1z00_1, obj_t BgL_l2z00_2)
	{
		{
			{
				obj_t BgL_headz00_1063;

				BgL_headz00_1063 = MAKE_YOUNG_PAIR(BNIL, BgL_l2z00_2);
				{
					obj_t BgL_prevz00_1596;
					obj_t BgL_tailz00_1597;

					BgL_prevz00_1596 = BgL_headz00_1063;
					BgL_tailz00_1597 = BgL_l1z00_1;
				BgL_loopz00_1595:
					if (PAIRP(BgL_tailz00_1597))
						{
							obj_t BgL_newzd2prevzd2_1603;

							BgL_newzd2prevzd2_1603 =
								MAKE_YOUNG_PAIR(CAR(BgL_tailz00_1597), BgL_l2z00_2);
							SET_CDR(BgL_prevz00_1596, BgL_newzd2prevzd2_1603);
							{
								obj_t BgL_tailz00_1964;
								obj_t BgL_prevz00_1963;

								BgL_prevz00_1963 = BgL_newzd2prevzd2_1603;
								BgL_tailz00_1964 = CDR(BgL_tailz00_1597);
								BgL_tailz00_1597 = BgL_tailz00_1964;
								BgL_prevz00_1596 = BgL_prevz00_1963;
								goto BgL_loopz00_1595;
							}
						}
					else
						{
							BNIL;
						}
				}
				return CDR(BgL_headz00_1063);
			}
		}

	}



/* make-epair */
	obj_t BGl_makezd2epairzd2zz__prognz00(obj_t BgL_az00_3, obj_t BgL_bz00_4,
		obj_t BgL_ez00_5)
	{
		{	/* Eval/progn.scm 55 */
			{	/* Eval/progn.scm 57 */
				bool_t BgL_test1742z00_1967;

				{	/* Eval/progn.scm 57 */
					bool_t BgL_res1644z00_1611;

					BgL_res1644z00_1611 = EPAIRP(BgL_ez00_5);
					BgL_test1742z00_1967 = BgL_res1644z00_1611;
				}
				if (BgL_test1742z00_1967)
					{	/* Eval/progn.scm 58 */
						obj_t BgL_arg1169z00_1072;

						BgL_arg1169z00_1072 = CER(((obj_t) BgL_ez00_5));
						{	/* Eval/progn.scm 58 */
							obj_t BgL_res1645z00_1613;

							BgL_res1645z00_1613 =
								MAKE_YOUNG_EPAIR(BgL_az00_3, BgL_bz00_4, BgL_arg1169z00_1072);
							return BgL_res1645z00_1613;
						}
					}
				else
					{	/* Eval/progn.scm 59 */
						bool_t BgL_test1743z00_1972;

						{	/* Eval/progn.scm 59 */
							bool_t BgL_res1646z00_1614;

							BgL_res1646z00_1614 = EPAIRP(BgL_bz00_4);
							BgL_test1743z00_1972 = BgL_res1646z00_1614;
						}
						if (BgL_test1743z00_1972)
							{	/* Eval/progn.scm 60 */
								obj_t BgL_arg1172z00_1074;

								BgL_arg1172z00_1074 = CER(((obj_t) BgL_bz00_4));
								{	/* Eval/progn.scm 60 */
									obj_t BgL_res1647z00_1616;

									BgL_res1647z00_1616 =
										MAKE_YOUNG_EPAIR(BgL_az00_3, BgL_bz00_4,
										BgL_arg1172z00_1074);
									return BgL_res1647z00_1616;
								}
							}
						else
							{	/* Eval/progn.scm 61 */
								bool_t BgL_test1744z00_1977;

								{	/* Eval/progn.scm 61 */
									bool_t BgL_res1648z00_1617;

									BgL_res1648z00_1617 = EPAIRP(BgL_az00_3);
									BgL_test1744z00_1977 = BgL_res1648z00_1617;
								}
								if (BgL_test1744z00_1977)
									{	/* Eval/progn.scm 62 */
										obj_t BgL_arg1174z00_1076;

										BgL_arg1174z00_1076 = CER(((obj_t) BgL_az00_3));
										{	/* Eval/progn.scm 62 */
											obj_t BgL_res1649z00_1619;

											BgL_res1649z00_1619 =
												MAKE_YOUNG_EPAIR(BgL_az00_3, BgL_bz00_4,
												BgL_arg1174z00_1076);
											return BgL_res1649z00_1619;
										}
									}
								else
									{	/* Eval/progn.scm 61 */
										return MAKE_YOUNG_PAIR(BgL_az00_3, BgL_bz00_4);
									}
							}
					}
			}
		}

	}



/* evepairify */
	BGL_EXPORTED_DEF obj_t BGl_evepairifyz00zz__prognz00(obj_t BgL_pairz00_6,
		obj_t BgL_epairz00_7)
	{
		{	/* Eval/progn.scm 74 */
			{	/* Eval/progn.scm 76 */
				bool_t BgL_test1745z00_1983;

				{	/* Eval/progn.scm 76 */
					bool_t BgL_res1650z00_1620;

					BgL_res1650z00_1620 = EPAIRP(BgL_epairz00_7);
					BgL_test1745z00_1983 = BgL_res1650z00_1620;
				}
				if (BgL_test1745z00_1983)
					{	/* Eval/progn.scm 78 */
						bool_t BgL_test1746z00_1985;

						{	/* Eval/progn.scm 78 */
							bool_t BgL_res1651z00_1621;

							BgL_res1651z00_1621 = EPAIRP(BgL_pairz00_6);
							BgL_test1746z00_1985 = BgL_res1651z00_1621;
						}
						if (BgL_test1746z00_1985)
							{	/* Eval/progn.scm 78 */
								return BgL_pairz00_6;
							}
						else
							{	/* Eval/progn.scm 78 */
								if (PAIRP(BgL_pairz00_6))
									{	/* Eval/progn.scm 83 */
										obj_t BgL_arg1178z00_1080;
										obj_t BgL_arg1179z00_1081;
										obj_t BgL_arg1186z00_1082;

										BgL_arg1178z00_1080 = CAR(BgL_pairz00_6);
										BgL_arg1179z00_1081 = CDR(BgL_pairz00_6);
										BgL_arg1186z00_1082 = CER(((obj_t) BgL_epairz00_7));
										{	/* Eval/progn.scm 83 */
											obj_t BgL_res1653z00_1626;

											BgL_res1653z00_1626 =
												MAKE_YOUNG_EPAIR(BgL_arg1178z00_1080,
												BgL_arg1179z00_1081, BgL_arg1186z00_1082);
											return BgL_res1653z00_1626;
										}
									}
								else
									{	/* Eval/progn.scm 80 */
										return BgL_pairz00_6;
									}
							}
					}
				else
					{	/* Eval/progn.scm 76 */
						return BgL_pairz00_6;
					}
			}
		}

	}



/* &evepairify */
	obj_t BGl_z62evepairifyz62zz__prognz00(obj_t BgL_envz00_1931,
		obj_t BgL_pairz00_1932, obj_t BgL_epairz00_1933)
	{
		{	/* Eval/progn.scm 74 */
			return BGl_evepairifyz00zz__prognz00(BgL_pairz00_1932, BgL_epairz00_1933);
		}

	}



/* evepairify* */
	BGL_EXPORTED_DEF obj_t BGl_evepairifyza2za2zz__prognz00(obj_t BgL_pairz00_8,
		obj_t BgL_epairz00_9)
	{
		{	/* Eval/progn.scm 93 */
			{	/* Eval/progn.scm 94 */
				bool_t BgL_test1748z00_1995;

				{	/* Eval/progn.scm 94 */
					bool_t BgL_res1654z00_1627;

					BgL_res1654z00_1627 = EPAIRP(BgL_epairz00_9);
					BgL_test1748z00_1995 = BgL_res1654z00_1627;
				}
				if (BgL_test1748z00_1995)
					{	/* Eval/progn.scm 96 */
						obj_t BgL_ez00_1084;

						BgL_ez00_1084 = CER(((obj_t) BgL_epairz00_9));
						return BGl_loopze71ze7zz__prognz00(BgL_ez00_1084, BgL_pairz00_8);
					}
				else
					{	/* Eval/progn.scm 94 */
						return BgL_pairz00_8;
					}
			}
		}

	}



/* loop~1 */
	obj_t BGl_loopze71ze7zz__prognz00(obj_t BgL_ez00_1943, obj_t BgL_objz00_1086)
	{
		{	/* Eval/progn.scm 97 */
			if (PAIRP(BgL_objz00_1086))
				{	/* Eval/progn.scm 101 */
					bool_t BgL_test1750z00_2002;

					{	/* Eval/progn.scm 101 */
						bool_t BgL_res1656z00_1630;

						BgL_res1656z00_1630 = EPAIRP(BgL_objz00_1086);
						BgL_test1750z00_2002 = BgL_res1656z00_1630;
					}
					if (BgL_test1750z00_2002)
						{	/* Eval/progn.scm 101 */
							return BgL_objz00_1086;
						}
					else
						{	/* Eval/progn.scm 104 */
							obj_t BgL_arg1194z00_1090;
							obj_t BgL_arg1197z00_1091;

							BgL_arg1194z00_1090 =
								BGl_loopze71ze7zz__prognz00(BgL_ez00_1943,
								CAR(BgL_objz00_1086));
							BgL_arg1197z00_1091 =
								BGl_loopze71ze7zz__prognz00(BgL_ez00_1943,
								CDR(BgL_objz00_1086));
							{	/* Eval/progn.scm 104 */
								obj_t BgL_res1657z00_1633;

								BgL_res1657z00_1633 =
									MAKE_YOUNG_EPAIR(BgL_arg1194z00_1090, BgL_arg1197z00_1091,
									BgL_ez00_1943);
								return BgL_res1657z00_1633;
							}
						}
				}
			else
				{	/* Eval/progn.scm 99 */
					return BgL_objz00_1086;
				}
		}

	}



/* &evepairify* */
	obj_t BGl_z62evepairifyza2zc0zz__prognz00(obj_t BgL_envz00_1934,
		obj_t BgL_pairz00_1935, obj_t BgL_epairz00_1936)
	{
		{	/* Eval/progn.scm 93 */
			return
				BGl_evepairifyza2za2zz__prognz00(BgL_pairz00_1935, BgL_epairz00_1936);
		}

	}



/* evepairify-deep */
	BGL_EXPORTED_DEF obj_t BGl_evepairifyzd2deepzd2zz__prognz00(obj_t
		BgL_pairz00_10, obj_t BgL_epairz00_11)
	{
		{	/* Eval/progn.scm 109 */
			{	/* Eval/progn.scm 111 */
				bool_t BgL_test1751z00_2010;

				{	/* Eval/progn.scm 111 */
					bool_t BgL_res1658z00_1634;

					BgL_res1658z00_1634 = EPAIRP(BgL_epairz00_11);
					BgL_test1751z00_2010 = BgL_res1658z00_1634;
				}
				if (BgL_test1751z00_2010)
					{	/* Eval/progn.scm 111 */
						if (PAIRP(BgL_pairz00_10))
							{	/* Eval/progn.scm 115 */
								bool_t BgL_test1753z00_2014;

								{	/* Eval/progn.scm 115 */
									bool_t BgL_res1660z00_1636;

									BgL_res1660z00_1636 = EPAIRP(BgL_pairz00_10);
									BgL_test1753z00_2014 = BgL_res1660z00_1636;
								}
								if (BgL_test1753z00_2014)
									{	/* Eval/progn.scm 115 */
										return BgL_pairz00_10;
									}
								else
									{	/* Eval/progn.scm 118 */
										obj_t BgL_arg1216z00_1098;
										obj_t BgL_arg1221z00_1099;
										obj_t BgL_arg1223z00_1100;

										{	/* Eval/progn.scm 118 */
											obj_t BgL_arg1225z00_1101;
											obj_t BgL_arg1227z00_1102;

											BgL_arg1225z00_1101 = CAR(BgL_pairz00_10);
											BgL_arg1227z00_1102 = CAR(((obj_t) BgL_epairz00_11));
											BgL_arg1216z00_1098 =
												BGl_evepairifyzd2deepzd2zz__prognz00
												(BgL_arg1225z00_1101, BgL_arg1227z00_1102);
										}
										{	/* Eval/progn.scm 119 */
											obj_t BgL_arg1229z00_1103;
											obj_t BgL_arg1232z00_1104;

											BgL_arg1229z00_1103 = CDR(BgL_pairz00_10);
											BgL_arg1232z00_1104 = CDR(((obj_t) BgL_epairz00_11));
											BgL_arg1221z00_1099 =
												BGl_evepairifyzd2deepzd2zz__prognz00
												(BgL_arg1229z00_1103, BgL_arg1232z00_1104);
										}
										BgL_arg1223z00_1100 = CER(((obj_t) BgL_epairz00_11));
										{	/* Eval/progn.scm 118 */
											obj_t BgL_res1661z00_1642;

											BgL_res1661z00_1642 =
												MAKE_YOUNG_EPAIR(BgL_arg1216z00_1098,
												BgL_arg1221z00_1099, BgL_arg1223z00_1100);
											return BgL_res1661z00_1642;
										}
									}
							}
						else
							{	/* Eval/progn.scm 113 */
								return BgL_pairz00_10;
							}
					}
				else
					{	/* Eval/progn.scm 111 */
						return BgL_pairz00_10;
					}
			}
		}

	}



/* &evepairify-deep */
	obj_t BGl_z62evepairifyzd2deepzb0zz__prognz00(obj_t BgL_envz00_1937,
		obj_t BgL_pairz00_1938, obj_t BgL_epairz00_1939)
	{
		{	/* Eval/progn.scm 109 */
			return
				BGl_evepairifyzd2deepzd2zz__prognz00(BgL_pairz00_1938,
				BgL_epairz00_1939);
		}

	}



/* expand-progn */
	BGL_EXPORTED_DEF obj_t BGl_expandzd2prognzd2zz__prognz00(obj_t BgL_expsz00_12)
	{
		{	/* Eval/progn.scm 128 */
			if (NULLP(BgL_expsz00_12))
				{	/* Eval/progn.scm 142 */
					return BUNSPEC;
				}
			else
				{	/* Eval/progn.scm 142 */
					if (NULLP(CDR(BgL_expsz00_12)))
						{	/* Eval/progn.scm 144 */
							return CAR(BgL_expsz00_12);
						}
					else
						{	/* Eval/progn.scm 146 */
							obj_t BgL_esz00_1109;

							BgL_esz00_1109 =
								BGl_flattenzd2sequenceze70z35zz__prognz00(BgL_expsz00_12);
							if (NULLP(BgL_esz00_1109))
								{	/* Eval/progn.scm 148 */
									return BUNSPEC;
								}
							else
								{	/* Eval/progn.scm 148 */
									if (PAIRP(BgL_esz00_1109))
										{	/* Eval/progn.scm 150 */
											if (NULLP(CDR(BgL_esz00_1109)))
												{	/* Eval/progn.scm 152 */
													return CAR(BgL_esz00_1109);
												}
											else
												{	/* Eval/progn.scm 155 */
													obj_t BgL_az00_1671;

													BgL_az00_1671 = BGl_symbol1723z00zz__prognz00;
													{	/* Eval/progn.scm 57 */
														bool_t BgL_test1759z00_2043;

														{	/* Eval/progn.scm 57 */
															bool_t BgL_res1644z00_1673;

															BgL_res1644z00_1673 = EPAIRP(BgL_esz00_1109);
															BgL_test1759z00_2043 = BgL_res1644z00_1673;
														}
														if (BgL_test1759z00_2043)
															{	/* Eval/progn.scm 58 */
																obj_t BgL_arg1169z00_1674;

																BgL_arg1169z00_1674 = CER(BgL_esz00_1109);
																{	/* Eval/progn.scm 58 */
																	obj_t BgL_res1645z00_1676;

																	BgL_res1645z00_1676 =
																		MAKE_YOUNG_EPAIR(BgL_az00_1671,
																		BgL_esz00_1109, BgL_arg1169z00_1674);
																	return BgL_res1645z00_1676;
																}
															}
														else
															{	/* Eval/progn.scm 59 */
																bool_t BgL_test1760z00_2047;

																{	/* Eval/progn.scm 59 */
																	bool_t BgL_res1646z00_1678;

																	BgL_res1646z00_1678 = EPAIRP(BgL_esz00_1109);
																	BgL_test1760z00_2047 = BgL_res1646z00_1678;
																}
																if (BgL_test1760z00_2047)
																	{	/* Eval/progn.scm 60 */
																		obj_t BgL_arg1172z00_1679;

																		BgL_arg1172z00_1679 = CER(BgL_esz00_1109);
																		{	/* Eval/progn.scm 60 */
																			obj_t BgL_res1647z00_1681;

																			BgL_res1647z00_1681 =
																				MAKE_YOUNG_EPAIR(BgL_az00_1671,
																				BgL_esz00_1109, BgL_arg1172z00_1679);
																			return BgL_res1647z00_1681;
																		}
																	}
																else
																	{	/* Eval/progn.scm 61 */
																		bool_t BgL_test1761z00_2051;

																		{	/* Eval/progn.scm 61 */
																			bool_t BgL_res1648z00_1683;

																			BgL_res1648z00_1683 =
																				EPAIRP(BgL_az00_1671);
																			BgL_test1761z00_2051 =
																				BgL_res1648z00_1683;
																		}
																		if (BgL_test1761z00_2051)
																			{	/* Eval/progn.scm 62 */
																				obj_t BgL_arg1174z00_1684;

																				BgL_arg1174z00_1684 =
																					CER(((obj_t) BgL_az00_1671));
																				{	/* Eval/progn.scm 62 */
																					obj_t BgL_res1649z00_1686;

																					BgL_res1649z00_1686 =
																						MAKE_YOUNG_EPAIR(BgL_az00_1671,
																						BgL_esz00_1109,
																						BgL_arg1174z00_1684);
																					return BgL_res1649z00_1686;
																				}
																			}
																		else
																			{	/* Eval/progn.scm 61 */
																				return
																					MAKE_YOUNG_PAIR(BgL_az00_1671,
																					BgL_esz00_1109);
																			}
																	}
															}
													}
												}
										}
									else
										{	/* Eval/progn.scm 150 */
											return BgL_esz00_1109;
										}
								}
						}
				}
		}

	}



/* loop~0 */
	obj_t BGl_loopze70ze7zz__prognz00(obj_t BgL_expsz00_1942,
		obj_t BgL_esz00_1119)
	{
		{	/* Eval/progn.scm 130 */
		BGl_loopze70ze7zz__prognz00:
			{	/* Eval/progn.scm 132 */
				bool_t BgL_test1762z00_2057;

				if (NULLP(BgL_esz00_1119))
					{	/* Eval/progn.scm 132 */
						BgL_test1762z00_2057 = ((bool_t) 1);
					}
				else
					{	/* Eval/progn.scm 132 */
						BgL_test1762z00_2057 = NULLP(CDR(((obj_t) BgL_esz00_1119)));
					}
				if (BgL_test1762z00_2057)
					{	/* Eval/progn.scm 132 */
						return BgL_esz00_1119;
					}
				else
					{	/* Eval/progn.scm 132 */
						if (PAIRP(BgL_esz00_1119))
							{	/* Eval/progn.scm 136 */
								bool_t BgL_test1765z00_2065;

								{	/* Eval/progn.scm 136 */
									obj_t BgL_tmpz00_2066;

									BgL_tmpz00_2066 = CAR(BgL_esz00_1119);
									BgL_test1765z00_2065 = PAIRP(BgL_tmpz00_2066);
								}
								if (BgL_test1765z00_2065)
									{	/* Eval/progn.scm 136 */
										if (
											(CAR(CAR(BgL_esz00_1119)) ==
												BGl_symbol1723z00zz__prognz00))
											{
												obj_t BgL_esz00_2073;

												BgL_esz00_2073 =
													BGl_evepairifyz00zz__prognz00
													(BGl_appendzd221011zd2zz__prognz00(CDR(CAR
															(BgL_esz00_1119)),
														BGl_loopze70ze7zz__prognz00(BgL_expsz00_1942,
															CDR(BgL_esz00_1119))), CAR(BgL_esz00_1119));
												BgL_esz00_1119 = BgL_esz00_2073;
												goto BGl_loopze70ze7zz__prognz00;
											}
										else
											{	/* Eval/progn.scm 138 */
												return
													BGl_makezd2epairzd2zz__prognz00(CAR(BgL_esz00_1119),
													BGl_loopze70ze7zz__prognz00(BgL_expsz00_1942,
														CDR(BgL_esz00_1119)), BgL_esz00_1119);
											}
									}
								else
									{
										obj_t BgL_esz00_2085;

										BgL_esz00_2085 = CDR(BgL_esz00_1119);
										BgL_esz00_1119 = BgL_esz00_2085;
										goto BGl_loopze70ze7zz__prognz00;
									}
							}
						else
							{	/* Eval/progn.scm 134 */
								return
									BGl_errorz00zz__errorz00(BGl_string1724z00zz__prognz00,
									BGl_string1725z00zz__prognz00, BgL_expsz00_1942);
							}
					}
			}
		}

	}



/* flatten-sequence~0 */
	obj_t BGl_flattenzd2sequenceze70z35zz__prognz00(obj_t BgL_expsz00_1116)
	{
		{	/* Eval/progn.scm 141 */
			return BGl_loopze70ze7zz__prognz00(BgL_expsz00_1116, BgL_expsz00_1116);
		}

	}



/* &expand-progn */
	obj_t BGl_z62expandzd2prognzb0zz__prognz00(obj_t BgL_envz00_1940,
		obj_t BgL_expsz00_1941)
	{
		{	/* Eval/progn.scm 128 */
			{	/* Eval/progn.scm 132 */
				obj_t BgL_auxz00_2089;

				if (BGl_pairzd2orzd2nullzf3zf3zz__r4_pairs_and_lists_6_3z00
					(BgL_expsz00_1941))
					{	/* Eval/progn.scm 132 */
						BgL_auxz00_2089 = BgL_expsz00_1941;
					}
				else
					{
						obj_t BgL_auxz00_2092;

						BgL_auxz00_2092 =
							BGl_typezd2errorzd2zz__errorz00(BGl_string1726z00zz__prognz00,
							BINT(((long) 4826)), BGl_string1727z00zz__prognz00,
							BGl_string1728z00zz__prognz00, BgL_expsz00_1941);
						FAILURE(BgL_auxz00_2092, BFALSE, BFALSE);
					}
				return BGl_expandzd2prognzd2zz__prognz00(BgL_auxz00_2089);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__prognz00()
	{
		{	/* Eval/progn.scm 14 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__biglooz00(((long) 70989162),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__tvectorz00(((long) 135277364),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__structurez00(((long) 128218115),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__bexitz00(((long) 340267996),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__bignumz00(((long) 6519875),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__expandz00(((long) 414007030),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__objectz00(((long) 193422032),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__threadz00(((long) 224967910),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5z00(((long) 68572481),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_fixnumz00(((long)
					420334581), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonumz00(((long)
					437057945), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_numbers_6_5_flonum_dtoaz00(((long)
					268155874), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_characters_6_6z00(((long)
					198621048), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_equivalence_6_2z00(((long)
					473309694), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_booleans_6_1z00(((long) 459519474),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_symbols_6_4z00(((long) 460263341),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_strings_6_7z00(((long) -44274296),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_pairs_and_lists_6_3z00(((long)
					9614573), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_control_features_6_9z00(((long)
					376927845), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_vectors_6_8z00(((long) 190906089),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			BGl_modulezd2initializa7ationz75zz__r4_ports_6_10_1z00(((long) 331540733),
				BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
			return BGl_modulezd2initializa7ationz75zz__r4_output_6_10_3z00(((long)
					86988972), BSTRING_TO_STRING(BGl_string1729z00zz__prognz00));
		}

	}

#ifdef __cplusplus
}
#endif
