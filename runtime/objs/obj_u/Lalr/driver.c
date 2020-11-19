/*===========================================================================*/
/*   (Lalr/driver.scm)                                                       */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Lalr/driver.scm -indent -o objs/obj_u/Lalr/driver.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	static long BGl_za2maxzd2stackzd2siza7eza2za7zz__lalr_driverz00;
	static obj_t BGl_requirezd2initializa7ationz75zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol1691z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol1694z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol1699z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_z62zc3z04anonymousza31202ze3ze5zz__lalr_driverz00(obj_t,
		obj_t, obj_t, obj_t);
	extern obj_t bgl_system_failure(int, obj_t, obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t,
		obj_t);
	static obj_t BGl_toplevelzd2initzd2zz__lalr_driverz00();
	extern obj_t BGl_assqz00zz__r4_pairs_and_lists_6_3z00(obj_t, obj_t);
	static obj_t BGl_genericzd2initzd2zz__lalr_driverz00();
	extern obj_t BGl_stringzd2copyzd2zz__r4_strings_6_7z00(obj_t);
	static obj_t BGl_objectzd2initzd2zz__lalr_driverz00();
	extern obj_t string_append_3(obj_t, obj_t, obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	extern obj_t make_vector(long, obj_t);
	extern obj_t BGl_writez00zz__r4_output_6_10_3z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__lalr_driverz00();
	extern obj_t make_string(long, unsigned char);
	extern obj_t BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00(obj_t);
	extern obj_t bgl_close_output_port(obj_t);
	static obj_t BGl_growzd2stackz12zc0zz__lalr_driverz00(obj_t);
	BGL_EXPORTED_DECL obj_t
		BGl_modulezd2initializa7ationz75zz__lalr_driverz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__errorz00(long, char *);
	extern int bgl_debug();
	static obj_t BGl_cnstzd2initzd2zz__lalr_driverz00();
	static obj_t BGl_gczd2rootszd2initz00zz__lalr_driverz00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__lalr_driverz00();
	static obj_t BGl_z62__makezd2parserzb0zz__lalr_driverz00(obj_t, obj_t, obj_t);
	static long BGl_za2stackzd2siza7ezd2incrementza2za7zz__lalr_driverz00;
	static obj_t BGl_symbol1701z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t BGl_symbol1703z00zz__lalr_driverz00 = BUNSPEC;
	static obj_t *__cnst;


	   
		 
		DEFINE_STRING(BGl_string1700z00zz__lalr_driverz00,
		BgL_bgl_string1700za700za7za7_1708za7, "accept", 6);
	      DEFINE_STRING(BGl_string1702z00zz__lalr_driverz00,
		BgL_bgl_string1702za700za7za7_1709za7, "*error*", 7);
	      DEFINE_STRING(BGl_string1704z00zz__lalr_driverz00,
		BgL_bgl_string1704za700za7za7_1710za7, "error", 5);
	      DEFINE_STRING(BGl_string1705z00zz__lalr_driverz00,
		BgL_bgl_string1705za700za7za7_1711za7, "parse error (unexpected token `",
		31);
	      DEFINE_STRING(BGl_string1706z00zz__lalr_driverz00,
		BgL_bgl_string1706za700za7za7_1712za7, "')", 2);
	      DEFINE_STRING(BGl_string1707z00zz__lalr_driverz00,
		BgL_bgl_string1707za700za7za7_1713za7, "__lalr_driver", 13);
	      DEFINE_STRING(BGl_string1692z00zz__lalr_driverz00,
		BgL_bgl_string1692za700za7za7_1714za7, "parser", 6);
	      DEFINE_STRING(BGl_string1693z00zz__lalr_driverz00,
		BgL_bgl_string1693za700za7za7_1715za7, "Illegal `#f' token", 18);
	      DEFINE_STRING(BGl_string1695z00zz__lalr_driverz00,
		BgL_bgl_string1695za700za7za7_1716za7, "*eoi*", 5);
	      DEFINE_STRING(BGl_string1696z00zz__lalr_driverz00,
		BgL_bgl_string1696za700za7za7_1717za7, "LALR TRACE: input=", 18);
	      DEFINE_STRING(BGl_string1697z00zz__lalr_driverz00,
		BgL_bgl_string1697za700za7za7_1718za7, " state=", 7);
	      DEFINE_STRING(BGl_string1698z00zz__lalr_driverz00,
		BgL_bgl_string1698za700za7za7_1719za7, " sp=", 4);
	     
		DEFINE_EXPORT_BGL_PROCEDURE(BGl___makezd2parserzd2envz00zz__lalr_driverz00,
		BgL_bgl_za762__makeza7d2pars1720z00,
		BGl_z62__makezd2parserzb0zz__lalr_driverz00, 0L, BUNSPEC, 2);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		   
			 ADD_ROOT((void
				*) (&BGl_requirezd2initializa7ationz75zz__lalr_driverz00));
		     ADD_ROOT((void *) (&BGl_symbol1691z00zz__lalr_driverz00));
		     ADD_ROOT((void *) (&BGl_symbol1694z00zz__lalr_driverz00));
		     ADD_ROOT((void *) (&BGl_symbol1699z00zz__lalr_driverz00));
		     ADD_ROOT((void *) (&BGl_symbol1701z00zz__lalr_driverz00));
		     ADD_ROOT((void *) (&BGl_symbol1703z00zz__lalr_driverz00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__lalr_driverz00(long
		BgL_checksumz00_2091, char *BgL_fromz00_2092)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__lalr_driverz00))
				{
					BGl_requirezd2initializa7ationz75zz__lalr_driverz00 =
						BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__lalr_driverz00();
					BGl_cnstzd2initzd2zz__lalr_driverz00();
					BGl_importedzd2moduleszd2initz00zz__lalr_driverz00();
					return BGl_toplevelzd2initzd2zz__lalr_driverz00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			BGl_symbol1691z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string1692z00zz__lalr_driverz00);
			BGl_symbol1694z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string1695z00zz__lalr_driverz00);
			BGl_symbol1699z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string1700z00zz__lalr_driverz00);
			BGl_symbol1701z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string1702z00zz__lalr_driverz00);
			return (BGl_symbol1703z00zz__lalr_driverz00 =
				bstring_to_symbol(BGl_string1704z00zz__lalr_driverz00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			return bgl_gc_roots_register();
		}

	}



/* toplevel-init */
	obj_t BGl_toplevelzd2initzd2zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			BGl_za2maxzd2stackzd2siza7eza2za7zz__lalr_driverz00 = ((long) 500);
			return (BGl_za2stackzd2siza7ezd2incrementza2za7zz__lalr_driverz00 =
				((long) 200), BUNSPEC);
		}

	}



/* grow-stack! */
	obj_t BGl_growzd2stackz12zc0zz__lalr_driverz00(obj_t BgL_vz00_3)
	{
		{	/* Lalr/driver.scm 52 */
			{	/* Lalr/driver.scm 53 */
				obj_t BgL_v2z00_1135;

				{	/* Lalr/driver.scm 54 */
					long BgL_arg1201z00_1143;

					BgL_arg1201z00_1143 = (VECTOR_LENGTH(BgL_vz00_3) + ((long) 200));
					BgL_v2z00_1135 = make_vector(BgL_arg1201z00_1143, BINT(((long) 0)));
				}
				{	/* Lalr/driver.scm 54 */

					{
						long BgL_iz00_1639;

						BgL_iz00_1639 = ((long) 0);
					BgL_loopz00_1638:
						if ((BgL_iz00_1639 < VECTOR_LENGTH(BgL_vz00_3)))
							{	/* Lalr/driver.scm 56 */
								VECTOR_SET(BgL_v2z00_1135, BgL_iz00_1639,
									VECTOR_REF(BgL_vz00_3, BgL_iz00_1639));
								{
									long BgL_iz00_2115;

									BgL_iz00_2115 = (BgL_iz00_1639 + ((long) 1));
									BgL_iz00_1639 = BgL_iz00_2115;
									goto BgL_loopz00_1638;
								}
							}
						else
							{	/* Lalr/driver.scm 56 */
								return BgL_v2z00_1135;
							}
					}
				}
			}
		}

	}



/* __make-parser */
	BGL_EXPORTED_DEF obj_t BGl___makezd2parserzd2zz__lalr_driverz00(obj_t
		BgL_actionzd2tablezd2_4, obj_t BgL_reductionzd2functionzd2_5)
	{
		{	/* Lalr/driver.scm 62 */
			{	/* Lalr/driver.scm 64 */
				obj_t BgL_zc3z04anonymousza31202ze3z87_2030;

				BgL_zc3z04anonymousza31202ze3z87_2030 =
					MAKE_FX_PROCEDURE
					(BGl_z62zc3z04anonymousza31202ze3ze5zz__lalr_driverz00,
					(int) (((long) 3)), (int) (((long) 2)));
				PROCEDURE_SET(BgL_zc3z04anonymousza31202ze3z87_2030, (int) (((long) 0)),
					BgL_actionzd2tablezd2_4);
				PROCEDURE_SET(BgL_zc3z04anonymousza31202ze3z87_2030, (int) (((long) 1)),
					BgL_reductionzd2functionzd2_5);
				return BgL_zc3z04anonymousza31202ze3z87_2030;
			}
		}

	}



/* &__make-parser */
	obj_t BGl_z62__makezd2parserzb0zz__lalr_driverz00(obj_t BgL_envz00_2031,
		obj_t BgL_actionzd2tablezd2_2032, obj_t BgL_reductionzd2functionzd2_2033)
	{
		{	/* Lalr/driver.scm 62 */
			return
				BGl___makezd2parserzd2zz__lalr_driverz00(BgL_actionzd2tablezd2_2032,
				BgL_reductionzd2functionzd2_2033);
		}

	}



/* &<@anonymous:1202> */
	obj_t BGl_z62zc3z04anonymousza31202ze3ze5zz__lalr_driverz00(obj_t
		BgL_envz00_2034, obj_t BgL_rgcz00_2037, obj_t BgL_inputzd2portzd2_2038,
		obj_t BgL_iszd2eofzf3z21_2039)
	{
		{	/* Lalr/driver.scm 64 */
			{	/* Lalr/driver.scm 72 */
				obj_t BgL_actionzd2tablezd2_2035;
				obj_t BgL_reductionzd2functionzd2_2036;

				BgL_actionzd2tablezd2_2035 =
					PROCEDURE_REF(BgL_envz00_2034, (int) (((long) 0)));
				BgL_reductionzd2functionzd2_2036 =
					PROCEDURE_REF(BgL_envz00_2034, (int) (((long) 1)));
				{	/* Lalr/driver.scm 72 */
					obj_t BgL_stackz00_2040;
					obj_t BgL_statez00_2041;
					obj_t BgL_inputz00_2042;
					obj_t BgL_inz00_2043;
					obj_t BgL_attrz00_2044;
					obj_t BgL_actsz00_2045;
					obj_t BgL_actz00_2046;
					bool_t BgL_eofzf3zf3_2047;
					bool_t BgL_debugz00_2048;

					BgL_stackz00_2040 = make_vector(((long) 500), BINT(((long) 0)));
					BgL_statez00_2041 = BFALSE;
					BgL_inputz00_2042 = BFALSE;
					BgL_inz00_2043 = BFALSE;
					BgL_attrz00_2044 = BFALSE;
					BgL_actsz00_2045 = BFALSE;
					BgL_actz00_2046 = BFALSE;
					BgL_eofzf3zf3_2047 = ((bool_t) 0);
					{	/* Lalr/driver.scm 80 */
						int BgL_arg1273z00_2049;

						BgL_arg1273z00_2049 = bgl_debug();
						BgL_debugz00_2048 = ((long) (BgL_arg1273z00_2049) >= ((long) 100));
					}
					{
						obj_t BgL_spz00_2051;

						BgL_spz00_2051 = BINT(((long) 0));
					BgL_loopz00_2050:
						BgL_statez00_2041 =
							VECTOR_REF(BgL_stackz00_2040, (long) CINT(BgL_spz00_2051));
						{	/* Lalr/driver.scm 84 */
							long BgL_kz00_2052;

							BgL_kz00_2052 = (long) CINT(BgL_statez00_2041);
							BgL_actsz00_2045 =
								VECTOR_REF(((obj_t) BgL_actionzd2tablezd2_2035), BgL_kz00_2052);
						}
						if (NULLP(CDR(BgL_actsz00_2045)))
							{	/* Lalr/driver.scm 87 */
								obj_t BgL_pairz00_2053;

								BgL_pairz00_2053 = BgL_actsz00_2045;
								BgL_actz00_2046 = CDR(CAR(BgL_pairz00_2053));
							}
						else
							{	/* Lalr/driver.scm 86 */
								if (CBOOL(BgL_inputz00_2042))
									{	/* Lalr/driver.scm 89 */
										BFALSE;
									}
								else
									{	/* Lalr/driver.scm 89 */
										BgL_inputz00_2042 =
											PROCEDURE_ENTRY(BgL_rgcz00_2037) (BgL_rgcz00_2037,
											BgL_inputzd2portzd2_2038, BEOA);
									}
								if (CBOOL(BgL_inputz00_2042))
									{	/* Lalr/driver.scm 91 */
										((bool_t) 0);
									}
								else
									{	/* Lalr/driver.scm 91 */
										bgl_system_failure(BGL_IO_PARSE_ERROR,
											BGl_symbol1691z00zz__lalr_driverz00,
											BGl_string1693z00zz__lalr_driverz00, BFALSE);
									}
								if (CBOOL(PROCEDURE_ENTRY(BgL_iszd2eofzf3z21_2039)
										(BgL_iszd2eofzf3z21_2039, BgL_inputz00_2042, BEOA)))
									{	/* Lalr/driver.scm 97 */
										BgL_inz00_2043 = BGl_symbol1694z00zz__lalr_driverz00;
										BgL_attrz00_2044 = BFALSE;
										BgL_eofzf3zf3_2047 = ((bool_t) 1);
									}
								else
									{	/* Lalr/driver.scm 97 */
										if (PAIRP(BgL_inputz00_2042))
											{	/* Lalr/driver.scm 101 */
												BgL_inz00_2043 = CAR(BgL_inputz00_2042);
												BgL_attrz00_2044 = CDR(BgL_inputz00_2042);
											}
										else
											{	/* Lalr/driver.scm 101 */
												BgL_inz00_2043 = BgL_inputz00_2042;
												BgL_attrz00_2044 = BFALSE;
											}
									}
								{	/* Lalr/driver.scm 108 */
									obj_t BgL_xz00_2054;
									obj_t BgL_lz00_2055;

									BgL_xz00_2054 = BgL_inz00_2043;
									BgL_lz00_2055 = BgL_actsz00_2045;
									{	/* Lalr/driver.scm 67 */
										obj_t BgL_yz00_2056;

										BgL_yz00_2056 =
											BGl_assqz00zz__r4_pairs_and_lists_6_3z00(BgL_xz00_2054,
											BgL_lz00_2055);
										if (CBOOL(BgL_yz00_2056))
											{	/* Lalr/driver.scm 68 */
												BgL_actz00_2046 = CDR(((obj_t) BgL_yz00_2056));
											}
										else
											{	/* Lalr/driver.scm 70 */
												obj_t BgL_pairz00_2057;

												BgL_pairz00_2057 = CAR(((obj_t) BgL_lz00_2055));
												BgL_actz00_2046 = CDR(BgL_pairz00_2057);
											}
									}
								}
							}
						if (BgL_debugz00_2048)
							{	/* Lalr/driver.scm 110 */
								{	/* Lalr/driver.scm 111 */
									obj_t BgL_arg1221z00_2058;

									{	/* Lalr/driver.scm 111 */
										obj_t BgL_res1614z00_2059;

										{	/* Lalr/driver.scm 111 */
											obj_t BgL_tmpz00_2172;

											BgL_tmpz00_2172 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1614z00_2059 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2172);
										}
										BgL_arg1221z00_2058 = BgL_res1614z00_2059;
									}
									bgl_display_string(BGl_string1696z00zz__lalr_driverz00,
										BgL_arg1221z00_2058);
								}
								{	/* Lalr/driver.scm 112 */
									obj_t BgL_arg1223z00_2060;

									{	/* Lalr/driver.scm 112 */
										obj_t BgL_res1615z00_2061;

										{	/* Lalr/driver.scm 112 */
											obj_t BgL_tmpz00_2176;

											BgL_tmpz00_2176 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1615z00_2061 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2176);
										}
										BgL_arg1223z00_2060 = BgL_res1615z00_2061;
									}
									{	/* Lalr/driver.scm 112 */
										obj_t BgL_list1224z00_2062;

										BgL_list1224z00_2062 =
											MAKE_YOUNG_PAIR(BgL_arg1223z00_2060, BNIL);
										BGl_writez00zz__r4_output_6_10_3z00(BgL_inz00_2043,
											BgL_list1224z00_2062);
									}
								}
								{	/* Lalr/driver.scm 113 */
									obj_t BgL_arg1225z00_2063;

									{	/* Lalr/driver.scm 113 */
										obj_t BgL_res1616z00_2064;

										{	/* Lalr/driver.scm 113 */
											obj_t BgL_tmpz00_2181;

											BgL_tmpz00_2181 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1616z00_2064 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2181);
										}
										BgL_arg1225z00_2063 = BgL_res1616z00_2064;
									}
									bgl_display_string(BGl_string1697z00zz__lalr_driverz00,
										BgL_arg1225z00_2063);
								}
								{	/* Lalr/driver.scm 114 */
									obj_t BgL_arg1227z00_2065;

									{	/* Lalr/driver.scm 114 */
										obj_t BgL_res1617z00_2066;

										{	/* Lalr/driver.scm 114 */
											obj_t BgL_tmpz00_2185;

											BgL_tmpz00_2185 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1617z00_2066 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2185);
										}
										BgL_arg1227z00_2065 = BgL_res1617z00_2066;
									}
									{	/* Lalr/driver.scm 114 */
										obj_t BgL_list1228z00_2067;

										BgL_list1228z00_2067 =
											MAKE_YOUNG_PAIR(BgL_arg1227z00_2065, BNIL);
										BGl_writez00zz__r4_output_6_10_3z00(BgL_statez00_2041,
											BgL_list1228z00_2067);
									}
								}
								{	/* Lalr/driver.scm 115 */
									obj_t BgL_arg1229z00_2068;

									{	/* Lalr/driver.scm 115 */
										obj_t BgL_res1618z00_2069;

										{	/* Lalr/driver.scm 115 */
											obj_t BgL_tmpz00_2190;

											BgL_tmpz00_2190 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1618z00_2069 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2190);
										}
										BgL_arg1229z00_2068 = BgL_res1618z00_2069;
									}
									bgl_display_string(BGl_string1698z00zz__lalr_driverz00,
										BgL_arg1229z00_2068);
								}
								{	/* Lalr/driver.scm 116 */
									obj_t BgL_arg1232z00_2070;

									{	/* Lalr/driver.scm 116 */
										obj_t BgL_res1619z00_2071;

										{	/* Lalr/driver.scm 116 */
											obj_t BgL_tmpz00_2194;

											BgL_tmpz00_2194 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1619z00_2071 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2194);
										}
										BgL_arg1232z00_2070 = BgL_res1619z00_2071;
									}
									{	/* Lalr/driver.scm 116 */
										obj_t BgL_list1233z00_2072;

										BgL_list1233z00_2072 =
											MAKE_YOUNG_PAIR(BgL_arg1232z00_2070, BNIL);
										BGl_writez00zz__r4_output_6_10_3z00(BgL_spz00_2051,
											BgL_list1233z00_2072);
									}
								}
								{	/* Lalr/driver.scm 117 */
									obj_t BgL_arg1239z00_2073;

									{	/* Lalr/driver.scm 117 */
										obj_t BgL_res1620z00_2074;

										{	/* Lalr/driver.scm 117 */
											obj_t BgL_tmpz00_2199;

											BgL_tmpz00_2199 = BGL_CURRENT_DYNAMIC_ENV();
											BgL_res1620z00_2074 =
												BGL_ENV_CURRENT_ERROR_PORT(BgL_tmpz00_2199);
										}
										BgL_arg1239z00_2073 = BgL_res1620z00_2074;
									}
									bgl_display_char(((unsigned char) 10), BgL_arg1239z00_2073);
							}}
						else
							{	/* Lalr/driver.scm 110 */
								BFALSE;
							}
						if ((BgL_actz00_2046 == BGl_symbol1699z00zz__lalr_driverz00))
							{	/* Lalr/driver.scm 122 */
								return VECTOR_REF(BgL_stackz00_2040, ((long) 1));
							}
						else
							{	/* Lalr/driver.scm 126 */
								bool_t BgL_test1732z00_2206;

								if ((BgL_actz00_2046 == BGl_symbol1701z00zz__lalr_driverz00))
									{	/* Lalr/driver.scm 126 */
										BgL_test1732z00_2206 = ((bool_t) 1);
									}
								else
									{	/* Lalr/driver.scm 126 */
										BgL_test1732z00_2206 =
											(BgL_actz00_2046 == BGl_symbol1703z00zz__lalr_driverz00);
									}
								if (BgL_test1732z00_2206)
									{	/* Lalr/driver.scm 127 */
										obj_t BgL_msgz00_2075;

										{	/* Lalr/driver.scm 130 */
											obj_t BgL_arg1243z00_2076;

											if (SYMBOLP(BgL_inz00_2043))
												{	/* Lalr/driver.scm 131 */
													obj_t BgL_res1622z00_2077;

													{	/* Lalr/driver.scm 131 */
														obj_t BgL_symbolz00_2078;

														BgL_symbolz00_2078 = BgL_inz00_2043;
														{	/* Lalr/driver.scm 131 */
															obj_t BgL_arg1428z00_2079;

															BgL_arg1428z00_2079 =
																SYMBOL_TO_STRING(BgL_symbolz00_2078);
															BgL_res1622z00_2077 =
																BGl_stringzd2copyzd2zz__r4_strings_6_7z00
																(BgL_arg1428z00_2079);
														}
													}
													BgL_arg1243z00_2076 = BgL_res1622z00_2077;
												}
											else
												{	/* Lalr/driver.scm 130 */
													if (CHARP(BgL_inz00_2043))
														{	/* Lalr/driver.scm 133 */
															obj_t BgL_res1624z00_2080;

															{	/* Lalr/driver.scm 133 */
																obj_t BgL_charz00_2081;

																BgL_charz00_2081 = BgL_inz00_2043;
																BgL_res1624z00_2080 =
																	make_string(((long) 1),
																	CCHAR(BgL_charz00_2081));
															}
															BgL_arg1243z00_2076 = BgL_res1624z00_2080;
														}
													else
														{	/* Lalr/driver.scm 135 */
															obj_t BgL_portz00_2082;

															{	/* Lalr/driver.scm 135 */

																{	/* Lalr/driver.scm 135 */

																	BgL_portz00_2082 =
																		BGl_openzd2outputzd2stringz00zz__r4_ports_6_10_1z00
																		(BTRUE);
																}
															}
															{	/* Lalr/driver.scm 136 */
																obj_t BgL_list1246z00_2083;

																BgL_list1246z00_2083 =
																	MAKE_YOUNG_PAIR(BgL_portz00_2082, BNIL);
																BGl_writez00zz__r4_output_6_10_3z00
																	(BgL_inz00_2043, BgL_list1246z00_2083);
															}
															BgL_arg1243z00_2076 =
																bgl_close_output_port(BgL_portz00_2082);
														}
												}
											BgL_msgz00_2075 =
												string_append_3(BGl_string1705z00zz__lalr_driverz00,
												BgL_arg1243z00_2076,
												BGl_string1706z00zz__lalr_driverz00);
										}
										return
											bgl_system_failure(BGL_IO_PARSE_ERROR,
											BGl_string1692z00zz__lalr_driverz00, BgL_msgz00_2075,
											BgL_inputz00_2042);
									}
								else
									{	/* Lalr/driver.scm 126 */
										if (((long) CINT(BgL_actz00_2046) >= ((long) 0)))
											{	/* Lalr/driver.scm 142 */
												{	/* Lalr/driver.scm 143 */
													bool_t BgL_test1737z00_2227;

													{	/* Lalr/driver.scm 143 */
														long BgL_arg1254z00_2084;

														{	/* Lalr/driver.scm 143 */
															long BgL_arg1256z00_2085;

															BgL_arg1256z00_2085 =
																VECTOR_LENGTH(BgL_stackz00_2040);
															BgL_arg1254z00_2084 =
																(BgL_arg1256z00_2085 - ((long) 4));
														}
														BgL_test1737z00_2227 =
															(
															(long) CINT(BgL_spz00_2051) >=
															BgL_arg1254z00_2084);
													}
													if (BgL_test1737z00_2227)
														{	/* Lalr/driver.scm 143 */
															BgL_stackz00_2040 =
																BGl_growzd2stackz12zc0zz__lalr_driverz00
																(BgL_stackz00_2040);
														}
													else
														{	/* Lalr/driver.scm 143 */
															BFALSE;
														}
												}
												VECTOR_SET(BgL_stackz00_2040,
													((long) CINT(BgL_spz00_2051) + ((long) 1)),
													BgL_attrz00_2044);
												VECTOR_SET(BgL_stackz00_2040,
													((long) CINT(BgL_spz00_2051) + ((long) 2)),
													BgL_actz00_2046);
												if (BgL_eofzf3zf3_2047)
													{	/* Lalr/driver.scm 147 */
														BFALSE;
													}
												else
													{	/* Lalr/driver.scm 147 */
														BgL_inputz00_2042 = BFALSE;
													}
												{	/* Lalr/driver.scm 149 */
													long BgL_arg1268z00_2088;

													BgL_arg1268z00_2088 =
														((long) CINT(BgL_spz00_2051) + ((long) 2));
													{
														obj_t BgL_spz00_2242;

														BgL_spz00_2242 = BINT(BgL_arg1268z00_2088);
														BgL_spz00_2051 = BgL_spz00_2242;
														goto BgL_loopz00_2050;
													}
												}
											}
										else
											{	/* Lalr/driver.scm 153 */
												obj_t BgL_arg1270z00_2089;

												{	/* Lalr/driver.scm 153 */
													long BgL_arg1271z00_2090;

													BgL_arg1271z00_2090 =
														NEG((long) CINT(BgL_actz00_2046));
													BgL_arg1270z00_2089 =
														PROCEDURE_ENTRY(BgL_reductionzd2functionzd2_2036)
														(BgL_reductionzd2functionzd2_2036,
														BINT(BgL_arg1271z00_2090), BgL_stackz00_2040,
														BgL_spz00_2051, BEOA);
												}
												{
													obj_t BgL_spz00_2253;

													BgL_spz00_2253 = BgL_arg1270z00_2089;
													BgL_spz00_2051 = BgL_spz00_2253;
													goto BgL_loopz00_2050;
												}
											}
									}
							}
					}
				}
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__lalr_driverz00()
	{
		{	/* Lalr/driver.scm 11 */
			BGl_modulezd2initializa7ationz75zz__errorz00(((long) 37115357),
				BSTRING_TO_STRING(BGl_string1707z00zz__lalr_driverz00));
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1707z00zz__lalr_driverz00));
		}

	}

#ifdef __cplusplus
}
#endif
