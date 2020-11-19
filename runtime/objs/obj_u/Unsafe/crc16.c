/*===========================================================================*/
/*   (Unsafe/crc16.scm)                                                      */
/*   Bigloo (4.4a)                                                           */
/*   Inria -- Sophia Antipolis (c)       Wed 18 Nov 2020 06:54:18 PM CET     */
/*===========================================================================*/
/* COMPILATION: (/home/serrano/prgm/project/bigloo/4.4a/bin/bigloo -srfi enable-gmp -srfi bigloo-unsafe -O3 -fcfa-arithmetic -q -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -rm -copt -w -lib-dir /home/serrano/prgm/project/bigloo/4.4a/lib/bigloo/4.4a -mklib -cc gcc -fsharing -q -no-hello -unsafe -safee -O4 -c Unsafe/crc16.scm -indent -o objs/obj_u/Unsafe/crc16.c) */
/* GC selection */
#define THE_GC BOEHM_GC

#include <bigloo.h>

#ifdef __cplusplus
extern "C"
{
#endif
	BGL_EXPORTED_DECL int BGl_crc16zd2mmapzd2zz__crc16z00(obj_t);
	static obj_t BGl_z62crc16zd2portzb0zz__crc16z00(obj_t, obj_t);
	static obj_t BGl_requirezd2initializa7ationz75zz__crc16z00 = BUNSPEC;
	static obj_t BGl_z62crc16zd2mmapzb0zz__crc16z00(obj_t, obj_t);
	static long BGl_crczd2valuezd2zz__crc16z00(long, long);
	extern obj_t BGl_typezd2errorzd2zz__errorz00(obj_t, obj_t, obj_t, obj_t,
		obj_t);
	static obj_t BGl_genericzd2initzd2zz__crc16z00();
	static obj_t BGl_objectzd2initzd2zz__crc16z00();
	BGL_EXPORTED_DECL int BGl_crc16z00zz__crc16z00(obj_t);
	extern obj_t bstring_to_symbol(obj_t);
	static obj_t BGl_z62crc16z62zz__crc16z00(obj_t, obj_t);
	static obj_t BGl_methodzd2initzd2zz__crc16z00();
	BGL_EXPORTED_DECL int BGl_crc16zd2stringzd2zz__crc16z00(obj_t);
	BGL_EXPORTED_DECL int BGl_crc16zd2filezd2zz__crc16z00(obj_t);
	static obj_t BGl_z62zc3z04anonymousza31253ze3ze5zz__crc16z00(obj_t);
	extern obj_t BGl_errorz00zz__errorz00(obj_t, obj_t, obj_t);
	static obj_t BGl_z62crc16zd2filezb0zz__crc16z00(obj_t, obj_t);
	BGL_EXPORTED_DECL obj_t BGl_modulezd2initializa7ationz75zz__crc16z00(long,
		char *);
	extern obj_t BGl_modulezd2initializa7ationz75zz__paramz00(long, char *);
	static obj_t BGl_cnstzd2initzd2zz__crc16z00();
	static obj_t BGl_gczd2rootszd2initz00zz__crc16z00();
	static obj_t BGl_importedzd2moduleszd2initz00zz__crc16z00();
	static obj_t BGl_z62crc16zd2stringzb0zz__crc16z00(obj_t, obj_t);
	static obj_t BGl_symbol1729z00zz__crc16z00 = BUNSPEC;
	extern obj_t BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00(obj_t,
		obj_t);
	extern obj_t BGl_readzd2bytezd2zz__r4_input_6_10_2z00(obj_t);
	BGL_EXPORTED_DECL int BGl_crc16zd2portzd2zz__crc16z00(obj_t);
	static obj_t *__cnst;


	   
		 
		DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2portzd2envz00zz__crc16z00,
		BgL_bgl_za762crc16za7d2portza71742za7, BGl_z62crc16zd2portzb0zz__crc16z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2envzd2zz__crc16z00,
		BgL_bgl_za762crc16za762za7za7__c1743z00, BGl_z62crc16z62zz__crc16z00, 0L,
		BUNSPEC, 1);
	      DEFINE_STRING(BGl_string1730z00zz__crc16z00,
		BgL_bgl_string1730za700za7za7_1744za7, "crc16", 5);
	      DEFINE_STRING(BGl_string1731z00zz__crc16z00,
		BgL_bgl_string1731za700za7za7_1745za7, "Illegal argument", 16);
	      DEFINE_STRING(BGl_string1732z00zz__crc16z00,
		BgL_bgl_string1732za700za7za7_1746za7, "/tmp/4.4a/runtime/Unsafe/crc16.scm",
		34);
	      DEFINE_STRING(BGl_string1733z00zz__crc16z00,
		BgL_bgl_string1733za700za7za7_1747za7, "&crc16-mmap", 11);
	      DEFINE_STRING(BGl_string1734z00zz__crc16z00,
		BgL_bgl_string1734za700za7za7_1748za7, "mmap", 4);
	      DEFINE_STRING(BGl_string1735z00zz__crc16z00,
		BgL_bgl_string1735za700za7za7_1749za7, "&crc16-string", 13);
	      DEFINE_STRING(BGl_string1736z00zz__crc16z00,
		BgL_bgl_string1736za700za7za7_1750za7, "bstring", 7);
	      DEFINE_STRING(BGl_string1737z00zz__crc16z00,
		BgL_bgl_string1737za700za7za7_1751za7, "&crc16-port", 11);
	      DEFINE_STRING(BGl_string1738z00zz__crc16z00,
		BgL_bgl_string1738za700za7za7_1752za7, "input-port", 10);
	      DEFINE_STRING(BGl_string1740z00zz__crc16z00,
		BgL_bgl_string1740za700za7za7_1753za7, "&crc16-file", 11);
	      DEFINE_STRING(BGl_string1741z00zz__crc16z00,
		BgL_bgl_string1741za700za7za7_1754za7, "__crc16", 7);
	      DEFINE_STATIC_BGL_PROCEDURE(BGl_proc1739z00zz__crc16z00,
		BgL_bgl_za762za7c3za704anonymo1755za7,
		BGl_z62zc3z04anonymousza31253ze3ze5zz__crc16z00, 0L, BUNSPEC, 0);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2stringzd2envz00zz__crc16z00,
		BgL_bgl_za762crc16za7d2strin1756z00, BGl_z62crc16zd2stringzb0zz__crc16z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2mmapzd2envz00zz__crc16z00,
		BgL_bgl_za762crc16za7d2mmapza71757za7, BGl_z62crc16zd2mmapzb0zz__crc16z00,
		0L, BUNSPEC, 1);
	      DEFINE_EXPORT_BGL_PROCEDURE(BGl_crc16zd2filezd2envz00zz__crc16z00,
		BgL_bgl_za762crc16za7d2fileza71758za7, BGl_z62crc16zd2filezb0zz__crc16z00,
		0L, BUNSPEC, 1);

/* GC roots registration */
	static obj_t bgl_gc_roots_register()
	{
#if defined( BGL_GC_ROOTS )
#define ADD_ROOT( addr ) (addr > roots_max ? roots_max = addr : (addr < roots_min ? roots_min = addr : 0))
		void *roots_min = (void *) ULONG_MAX, *roots_max = 0;
		     ADD_ROOT((void *) (&BGl_requirezd2initializa7ationz75zz__crc16z00));
		     ADD_ROOT((void *) (&BGl_symbol1729z00zz__crc16z00));
#undef ADD_ROOT
		if   (roots_max > 0)
			     GC_add_roots(roots_min, ((void **) roots_max) + 1);
#endif
		     return BUNSPEC;
	}



/* module-initialization */
	BGL_EXPORTED_DEF obj_t BGl_modulezd2initializa7ationz75zz__crc16z00(long
		BgL_checksumz00_2227, char *BgL_fromz00_2228)
	{
		{
			if (CBOOL(BGl_requirezd2initializa7ationz75zz__crc16z00))
				{
					BGl_requirezd2initializa7ationz75zz__crc16z00 = BBOOL(((bool_t) 0));
					BGl_gczd2rootszd2initz00zz__crc16z00();
					BGl_cnstzd2initzd2zz__crc16z00();
					BGl_importedzd2moduleszd2initz00zz__crc16z00();
					return BGl_methodzd2initzd2zz__crc16z00();
				}
			else
				{
					return BUNSPEC;
				}
		}

	}



/* cnst-init */
	obj_t BGl_cnstzd2initzd2zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return (BGl_symbol1729z00zz__crc16z00 =
				bstring_to_symbol(BGl_string1730z00zz__crc16z00), BUNSPEC);
		}

	}



/* gc-roots-init */
	obj_t BGl_gczd2rootszd2initz00zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return bgl_gc_roots_register();
		}

	}



/* crc16 */
	BGL_EXPORTED_DEF int BGl_crc16z00zz__crc16z00(obj_t BgL_objz00_3)
	{
		{	/* Unsafe/crc16.scm 66 */
			{	/* Unsafe/crc16.scm 68 */
				bool_t BgL_test1760z00_2238;

				{	/* Unsafe/crc16.scm 68 */
					bool_t BgL_res1614z00_1720;

					BgL_res1614z00_1720 = BGL_MMAPP(BgL_objz00_3);
					BgL_test1760z00_2238 = BgL_res1614z00_1720;
				}
				if (BgL_test1760z00_2238)
					{	/* Unsafe/crc16.scm 68 */
						return BGl_crc16zd2mmapzd2zz__crc16z00(BgL_objz00_3);
					}
				else
					{	/* Unsafe/crc16.scm 68 */
						if (STRINGP(BgL_objz00_3))
							{	/* Unsafe/crc16.scm 70 */
								return BGl_crc16zd2stringzd2zz__crc16z00(BgL_objz00_3);
							}
						else
							{	/* Unsafe/crc16.scm 70 */
								if (INPUT_PORTP(BgL_objz00_3))
									{	/* Unsafe/crc16.scm 72 */
										return BGl_crc16zd2portzd2zz__crc16z00(BgL_objz00_3);
									}
								else
									{	/* Unsafe/crc16.scm 72 */
										return
											CINT(BGl_errorz00zz__errorz00
											(BGl_symbol1729z00zz__crc16z00,
												BGl_string1731z00zz__crc16z00, BgL_objz00_3));
									}
							}
					}
			}
		}

	}



/* &crc16 */
	obj_t BGl_z62crc16z62zz__crc16z00(obj_t BgL_envz00_2205,
		obj_t BgL_objz00_2206)
	{
		{	/* Unsafe/crc16.scm 66 */
			return BINT(BGl_crc16z00zz__crc16z00(BgL_objz00_2206));
		}

	}



/* crc-value */
	long BGl_crczd2valuezd2zz__crc16z00(long BgL_valz00_4, long BgL_crcz00_5)
	{
		{	/* Unsafe/crc16.scm 80 */
			{
				long BgL_iz00_1743;
				long BgL_valuez00_1744;
				long BgL_crcz00_1745;

				BgL_iz00_1743 = ((long) 0);
				BgL_valuez00_1744 = (BgL_valz00_4 << (int) (((long) 8)));
				BgL_crcz00_1745 = BgL_crcz00_5;
			BgL_loopz00_1742:
				if ((BgL_iz00_1743 == ((long) 8)))
					{	/* Unsafe/crc16.scm 84 */
						return BgL_crcz00_1745;
					}
				else
					{	/* Unsafe/crc16.scm 86 */
						long BgL_valuez00_1749;
						long BgL_crcz00_1750;

						BgL_valuez00_1749 = (BgL_valuez00_1744 << (int) (((long) 1)));
						BgL_crcz00_1750 = (BgL_crcz00_1745 << (int) (((long) 1)));
						{
							long BgL_crcz00_2260;
							long BgL_valuez00_2259;
							long BgL_iz00_2257;

							BgL_iz00_2257 = (BgL_iz00_1743 + ((long) 1));
							BgL_valuez00_2259 = BgL_valuez00_1749;
							if (
								(((long) 0) ==
									(((long) 65536) & (BgL_crcz00_1750 ^ BgL_valuez00_1749))))
								{	/* Unsafe/crc16.scm 90 */
									BgL_crcz00_2260 = BgL_crcz00_1750;
								}
							else
								{	/* Unsafe/crc16.scm 90 */
									BgL_crcz00_2260 = (BgL_crcz00_1750 ^ ((long) 32773));
								}
							BgL_crcz00_1745 = BgL_crcz00_2260;
							BgL_valuez00_1744 = BgL_valuez00_2259;
							BgL_iz00_1743 = BgL_iz00_2257;
							goto BgL_loopz00_1742;
						}
					}
			}
		}

	}



/* crc16-mmap */
	BGL_EXPORTED_DEF int BGl_crc16zd2mmapzd2zz__crc16z00(obj_t BgL_mmapz00_6)
	{
		{	/* Unsafe/crc16.scm 97 */
			{	/* Unsafe/crc16.scm 98 */
				long BgL_lenz00_1249;

				{	/* Unsafe/crc16.scm 98 */
					long BgL_res1625z00_1774;

					BgL_res1625z00_1774 = BGL_MMAP_LENGTH(BgL_mmapz00_6);
					BgL_lenz00_1249 = BgL_res1625z00_1774;
				}
				{
					long BgL_iz00_1805;
					long BgL_crcz00_1806;

					{	/* Unsafe/crc16.scm 99 */
						long BgL_tmpz00_2269;

						BgL_iz00_1805 = ((long) 0);
						BgL_crcz00_1806 = ((long) 65535);
					BgL_loopz00_1804:
						{	/* Unsafe/crc16.scm 101 */
							bool_t BgL_test1765z00_2270;

							{	/* Unsafe/crc16.scm 101 */
								long BgL_n2z00_1818;

								BgL_n2z00_1818 = (long) (BgL_lenz00_1249);
								BgL_test1765z00_2270 = (BgL_iz00_1805 == BgL_n2z00_1818);
							}
							if (BgL_test1765z00_2270)
								{	/* Unsafe/crc16.scm 101 */
									BgL_tmpz00_2269 = (BgL_crcz00_1806 & ((long) 65535));
								}
							else
								{	/* Unsafe/crc16.scm 103 */
									long BgL_arg1227z00_1813;
									long BgL_arg1229z00_1814;

									BgL_arg1227z00_1813 = (BgL_iz00_1805 + ((long) 1));
									{	/* Unsafe/crc16.scm 104 */
										long BgL_arg1232z00_1815;

										{	/* Unsafe/crc16.scm 104 */
											unsigned char BgL_arg1239z00_1816;

											{	/* Unsafe/crc16.scm 104 */
												long BgL_tmpz00_2275;

												BgL_tmpz00_2275 = (long) (BgL_iz00_1805);
												BgL_arg1239z00_1816 =
													BGL_MMAP_REF(BgL_mmapz00_6, BgL_tmpz00_2275);
											}
											BgL_arg1232z00_1815 = (BgL_arg1239z00_1816);
										}
										BgL_arg1229z00_1814 =
											BGl_crczd2valuezd2zz__crc16z00(BgL_arg1232z00_1815,
											BgL_crcz00_1806);
									}
									{
										long BgL_crcz00_2281;
										long BgL_iz00_2280;

										BgL_iz00_2280 = BgL_arg1227z00_1813;
										BgL_crcz00_2281 = BgL_arg1229z00_1814;
										BgL_crcz00_1806 = BgL_crcz00_2281;
										BgL_iz00_1805 = BgL_iz00_2280;
										goto BgL_loopz00_1804;
									}
								}
						}
						return (int) (BgL_tmpz00_2269);
		}}}}

	}



/* &crc16-mmap */
	obj_t BGl_z62crc16zd2mmapzb0zz__crc16z00(obj_t BgL_envz00_2207,
		obj_t BgL_mmapz00_2208)
	{
		{	/* Unsafe/crc16.scm 97 */
			{	/* Unsafe/crc16.scm 98 */
				int BgL_tmpz00_2283;

				{	/* Unsafe/crc16.scm 98 */
					obj_t BgL_auxz00_2284;

					if (BGL_MMAPP(BgL_mmapz00_2208))
						{	/* Unsafe/crc16.scm 98 */
							BgL_auxz00_2284 = BgL_mmapz00_2208;
						}
					else
						{
							obj_t BgL_auxz00_2287;

							BgL_auxz00_2287 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1732z00zz__crc16z00,
								BINT(((long) 3427)), BGl_string1733z00zz__crc16z00,
								BGl_string1734z00zz__crc16z00, BgL_mmapz00_2208);
							FAILURE(BgL_auxz00_2287, BFALSE, BFALSE);
						}
					BgL_tmpz00_2283 = BGl_crc16zd2mmapzd2zz__crc16z00(BgL_auxz00_2284);
				}
				return BINT(BgL_tmpz00_2283);
			}
		}

	}



/* crc16-string */
	BGL_EXPORTED_DEF int BGl_crc16zd2stringzd2zz__crc16z00(obj_t BgL_stringz00_7)
	{
		{	/* Unsafe/crc16.scm 109 */
			{	/* Unsafe/crc16.scm 110 */
				long BgL_lenz00_1260;

				BgL_lenz00_1260 = STRING_LENGTH(BgL_stringz00_7);
				{
					long BgL_iz00_1864;
					long BgL_crcz00_1865;

					{	/* Unsafe/crc16.scm 111 */
						long BgL_tmpz00_2294;

						BgL_iz00_1864 = ((long) 0);
						BgL_crcz00_1865 = ((long) 65535);
					BgL_loopz00_1863:
						if ((BgL_iz00_1864 == BgL_lenz00_1260))
							{	/* Unsafe/crc16.scm 113 */
								BgL_tmpz00_2294 = (BgL_crcz00_1865 & ((long) 65535));
							}
						else
							{
								long BgL_crcz00_2300;
								long BgL_iz00_2298;

								BgL_iz00_2298 = (BgL_iz00_1864 + ((long) 1));
								BgL_crcz00_2300 =
									BGl_crczd2valuezd2zz__crc16z00(
									(STRING_REF(BgL_stringz00_7, BgL_iz00_1864)),
									BgL_crcz00_1865);
								BgL_crcz00_1865 = BgL_crcz00_2300;
								BgL_iz00_1864 = BgL_iz00_2298;
								goto BgL_loopz00_1863;
							}
						return (int) (BgL_tmpz00_2294);
		}}}}

	}



/* &crc16-string */
	obj_t BGl_z62crc16zd2stringzb0zz__crc16z00(obj_t BgL_envz00_2209,
		obj_t BgL_stringz00_2210)
	{
		{	/* Unsafe/crc16.scm 109 */
			{	/* Unsafe/crc16.scm 110 */
				int BgL_tmpz00_2305;

				{	/* Unsafe/crc16.scm 110 */
					obj_t BgL_auxz00_2306;

					if (STRINGP(BgL_stringz00_2210))
						{	/* Unsafe/crc16.scm 110 */
							BgL_auxz00_2306 = BgL_stringz00_2210;
						}
					else
						{
							obj_t BgL_auxz00_2309;

							BgL_auxz00_2309 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1732z00zz__crc16z00,
								BINT(((long) 3889)), BGl_string1735z00zz__crc16z00,
								BGl_string1736z00zz__crc16z00, BgL_stringz00_2210);
							FAILURE(BgL_auxz00_2309, BFALSE, BFALSE);
						}
					BgL_tmpz00_2305 = BGl_crc16zd2stringzd2zz__crc16z00(BgL_auxz00_2306);
				}
				return BINT(BgL_tmpz00_2305);
			}
		}

	}



/* crc16-port */
	BGL_EXPORTED_DEF int BGl_crc16zd2portzd2zz__crc16z00(obj_t BgL_portz00_8)
	{
		{	/* Unsafe/crc16.scm 121 */
			{
				long BgL_crcz00_1902;

				{	/* Unsafe/crc16.scm 122 */
					long BgL_tmpz00_2315;

					BgL_crcz00_1902 = ((long) 65535);
				BgL_loopz00_1901:
					{	/* Unsafe/crc16.scm 123 */
						long BgL_bytez00_1906;

						BgL_bytez00_1906 =
							(long)
							CINT(BGl_readzd2bytezd2zz__r4_input_6_10_2z00(BgL_portz00_8));
						{	/* Unsafe/crc16.scm 124 */
							bool_t BgL_test1769z00_2318;

							{	/* Unsafe/crc16.scm 124 */
								bool_t BgL_res1658z00_1909;

								{	/* Unsafe/crc16.scm 124 */
									obj_t BgL_tmpz00_2319;

									BgL_tmpz00_2319 = BINT(BgL_bytez00_1906);
									BgL_res1658z00_1909 = EOF_OBJECTP(BgL_tmpz00_2319);
								}
								BgL_test1769z00_2318 = BgL_res1658z00_1909;
							}
							if (BgL_test1769z00_2318)
								{	/* Unsafe/crc16.scm 124 */
									BgL_tmpz00_2315 = (BgL_crcz00_1902 & ((long) 65535));
								}
							else
								{
									long BgL_crcz00_2323;

									BgL_crcz00_2323 =
										BGl_crczd2valuezd2zz__crc16z00(BgL_bytez00_1906,
										BgL_crcz00_1902);
									BgL_crcz00_1902 = BgL_crcz00_2323;
									goto BgL_loopz00_1901;
								}
						}
					}
					return (int) (BgL_tmpz00_2315);
		}}}

	}



/* &crc16-port */
	obj_t BGl_z62crc16zd2portzb0zz__crc16z00(obj_t BgL_envz00_2211,
		obj_t BgL_portz00_2212)
	{
		{	/* Unsafe/crc16.scm 121 */
			{	/* Unsafe/crc16.scm 122 */
				int BgL_tmpz00_2326;

				{	/* Unsafe/crc16.scm 122 */
					obj_t BgL_auxz00_2327;

					if (INPUT_PORTP(BgL_portz00_2212))
						{	/* Unsafe/crc16.scm 122 */
							BgL_auxz00_2327 = BgL_portz00_2212;
						}
					else
						{
							obj_t BgL_auxz00_2330;

							BgL_auxz00_2330 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1732z00zz__crc16z00,
								BINT(((long) 4354)), BGl_string1737z00zz__crc16z00,
								BGl_string1738z00zz__crc16z00, BgL_portz00_2212);
							FAILURE(BgL_auxz00_2330, BFALSE, BFALSE);
						}
					BgL_tmpz00_2326 = BGl_crc16zd2portzd2zz__crc16z00(BgL_auxz00_2327);
				}
				return BINT(BgL_tmpz00_2326);
			}
		}

	}



/* crc16-file */
	BGL_EXPORTED_DEF int BGl_crc16zd2filezd2zz__crc16z00(obj_t BgL_filez00_9)
	{
		{	/* Unsafe/crc16.scm 131 */
			return
				CINT(BGl_withzd2inputzd2fromzd2filezd2zz__r4_ports_6_10_1z00
				(BgL_filez00_9, BGl_proc1739z00zz__crc16z00));
		}

	}



/* &crc16-file */
	obj_t BGl_z62crc16zd2filezb0zz__crc16z00(obj_t BgL_envz00_2214,
		obj_t BgL_filez00_2215)
	{
		{	/* Unsafe/crc16.scm 131 */
			{	/* Unsafe/crc16.scm 133 */
				int BgL_tmpz00_2338;

				{	/* Unsafe/crc16.scm 133 */
					obj_t BgL_auxz00_2339;

					if (STRINGP(BgL_filez00_2215))
						{	/* Unsafe/crc16.scm 133 */
							BgL_auxz00_2339 = BgL_filez00_2215;
						}
					else
						{
							obj_t BgL_auxz00_2342;

							BgL_auxz00_2342 =
								BGl_typezd2errorzd2zz__errorz00(BGl_string1732z00zz__crc16z00,
								BINT(((long) 4826)), BGl_string1740z00zz__crc16z00,
								BGl_string1736z00zz__crc16z00, BgL_filez00_2215);
							FAILURE(BgL_auxz00_2342, BFALSE, BFALSE);
						}
					BgL_tmpz00_2338 = BGl_crc16zd2filezd2zz__crc16z00(BgL_auxz00_2339);
				}
				return BINT(BgL_tmpz00_2338);
			}
		}

	}



/* &<@anonymous:1253> */
	obj_t BGl_z62zc3z04anonymousza31253ze3ze5zz__crc16z00(obj_t BgL_envz00_2216)
	{
		{	/* Unsafe/crc16.scm 133 */
			{	/* Unsafe/crc16.scm 133 */
				int BgL_tmpz00_2348;

				{	/* Unsafe/crc16.scm 133 */
					obj_t BgL_arg1254z00_2225;

					{	/* Unsafe/crc16.scm 133 */
						obj_t BgL_res1660z00_2226;

						{	/* Unsafe/crc16.scm 133 */
							obj_t BgL_tmpz00_2349;

							BgL_tmpz00_2349 = BGL_CURRENT_DYNAMIC_ENV();
							BgL_res1660z00_2226 = BGL_ENV_CURRENT_INPUT_PORT(BgL_tmpz00_2349);
						}
						BgL_arg1254z00_2225 = BgL_res1660z00_2226;
					}
					BgL_tmpz00_2348 =
						BGl_crc16zd2portzd2zz__crc16z00(BgL_arg1254z00_2225);
				}
				return BINT(BgL_tmpz00_2348);
			}
		}

	}



/* object-init */
	obj_t BGl_objectzd2initzd2zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return BUNSPEC;
		}

	}



/* generic-init */
	obj_t BGl_genericzd2initzd2zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return BUNSPEC;
		}

	}



/* method-init */
	obj_t BGl_methodzd2initzd2zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return BUNSPEC;
		}

	}



/* imported-modules-init */
	obj_t BGl_importedzd2moduleszd2initz00zz__crc16z00()
	{
		{	/* Unsafe/crc16.scm 17 */
			return
				BGl_modulezd2initializa7ationz75zz__paramz00(((long) 453938973),
				BSTRING_TO_STRING(BGl_string1741z00zz__crc16z00));
		}

	}

#ifdef __cplusplus
}
#endif
